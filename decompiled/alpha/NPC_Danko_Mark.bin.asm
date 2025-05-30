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
	.bin
	ui/NPC_Mark.png
	ood1Mark1
	ood1Mark2
	ood1Mark3
	d1q01MarkAboutJulia
	pt_map_julia
	AddMark
	d1q01MarkAboutLara
	pt_map_lara
	ShowMap
	ood1Mark4
	ood1Mark5
	ood1Mark6
	ood1Mark7
	ood1Mark8
	KnowJulia
	d7q02
	d7q02MarkGotoCemetery
	pt_d7q02_corpse
	d7q02MarkGotoAlexandr
	pt_map_alexandr
	quest_d7_02
	place_corpse
	KnowLara
	SetReturnValue
	KnowMark
	ood3Mark1
	d1q01
	d1q01FirstGeorgVisit
	KnowEva
	KnowMaria
	KnowKapella
	KnowMyth
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
	Performance
	NightMasks
	.wmv

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
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)
	PlayMovie (1 args)

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
		EVENT_11 Op = 0x292 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5f1 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6fd Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7f7 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8aa Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9c4 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0xcce

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x9fd

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
0x15: Call 0xa3e

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
0x26: Call 0xd17

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x9f1

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0xa02

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0xa99

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0xa9b

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0xc9d

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
0x67: Call 0xa3a

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
0x79: Call 0xb35

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 424)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 425)
0x85: Push((int) 494)
0x86: Push((int) 493)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 429)
0x8a: Push((int) 498)
0x8b: Push((int) 497)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0xa9d

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0xa3e

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
0xb1: Call 0xa9d

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0xa3e

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0xa50

0xc4: Pop(0)
0xc5: Push((int) 492)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0xb35

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 424)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 425)
0xd7: Push((int) 494)
0xd8: Push((int) 493)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 429)
0xdc: Push((int) 498)
0xdd: Push((int) 497)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 498)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0xaf

0xe7: Pop(1)
0xe8: Push((int) 430)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 431)
0xee: Push((int) 501)
0xef: Push((int) 499)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Push((int) 432)
0xf3: Push((int) 494)
0xf4: Push((int) 500)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Return(); Pop(0)

0xf8: Push((int) 501)
0xf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call 0xaf

0xfe: Pop(1)
0xff: Push((int) 433)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 435)
0x105: Push((int) -1)
0x106: Push((int) 503)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Push((int) 434)
0x10a: Push((int) -1)
0x10b: Push((int) 502)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 494)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call 0xaf

0x115: Pop(1)
0x116: Push((int) 426)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 427)
0x11c: Push((int) 504)
0x11d: Push((int) 495)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 438)
0x121: Push((int) -1)
0x122: Push((int) 506)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 504)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral"
0x12b: Call 0xaf

0x12c: Pop(1)
0x12d: Push((int) 436)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 437)
0x133: Push((int) 501)
0x134: Push((int) 505)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Push((int) 439)
0x138: Push((int) -1)
0x139: Push((int) 508)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13e: PushEmpty(bool)
0x13f: Call 0xa9d

0x140: Pop(0)
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: @ lshStopAnimation()
0x143: Pop(0)
0x144: GOTO 0x147

0x145: @ StopAnimation()
0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: GOTO 0xc0

0x149: Return(); Pop(0)

0x14a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[-11]
0x14e: Call 0xa02

0x14f: Pop(1)
0x150: Pop(1); Push((bool) Stack[-1] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x152: Stack[-10] = (int) -2
0x153: Return(); Pop(8)

0x154: @ CreateDialog(Stack[-4])
0x155: Pop(0)
0x156: PushEmpty(int)
0x157: Call 0xa99

0x158: Pop(0)
0x159: @@ SetNPCName(Stack[-1])
0x15a: Pop(1)
0x15b: PushEmpty(string)
0x15c: Call 0xa9b

0x15d: Pop(0)
0x15e: @@ SetPhoto(Stack[-1])
0x15f: Pop(1)
0x160: PushEmpty(int)
0x161: Call 0xc9d

0x162: Pop(0)
0x163: @@ SetPlayerName(Stack[-1])
0x164: Pop(1)
0x165: Stack[-2] = (int) -1
0x166: @ IsOverrideActive(Stack[-3])
0x167: Pop(0)
0x168: Push(Stack[-3])
0x169: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16a: Stack[-10] = (int) -2
0x16b: Return(); Pop(8)

0x16c: @ DoDialog(Stack[-4])
0x16d: Pop(0)
0x16e: PushEmpty(object, object)
0x16f: Stack[-2] = Stack[-11]
0x170: Stack[-1] = Stack[-6]
0x171: Push(-2, 4); TaskCall(5)
0x172: Call 0x189

0x173: Pop(-2, 4); TaskReturn
0x174: Pop(2)
0x175: @@ IsDialogEnd(Stack[-1])
0x176: Pop(0)
0x177: Pop(0); Push((bool) Stack[-1] == 0)
0x178: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x179: @ sync()
0x17a: Pop(0)
0x17b: @@ IsDialogEnd(Stack[-1])
0x17c: Pop(0)
0x17d: GOTO 0x177

0x17e: PushEmpty(object)
0x17f: Stack[-1] = Stack[-10]
0x180: Call 0xa3a

0x181: Pop(1)
0x182: @ StopDialog(Stack[-4])
0x183: Pop(0)
0x184: @@ GetReturnValue(Stack[-2])
0x185: Pop(0)
0x186: Stack[-10] = Stack[-2]
0x187: Return(); Pop(8)

0x188: Stack[-4] = 0
0x189: PushEmpty()
0x18a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x18b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x18c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18d: Push((int) 1)
0x18e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: PushEmpty(bool, object)
0x192: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x193: Call 0xb41

0x194: Pop(1)
0x195: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call 0xb65

0x199: Pop(1)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: Stack[-1] = (bool) 1
0x19d: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x19e: PushEmpty(object, object)
0x19f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a1: Call 0xb2a

0x1a2: Pop(2)
0x1a3: PushEmpty(object, object)
0x1a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a6: Call 0xaf8

0x1a7: Pop(2)
0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call 0x282

0x1ab: Pop(1)
0x1ac: Push((int) 5616)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 5617)
0x1b2: Push((int) 6905)
0x1b3: Push((int) 6193)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 5645)
0x1b7: Push((int) 6906)
0x1b8: Push((int) 6224)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: GOTO 0x264

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Neutral"
0x1be: Call 0x282

0x1bf: Pop(1)
0x1c0: Push((int) 8129)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: PushEmpty(bool)
0x1c6: Stack[-1] = (bool) 0
0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Call 0xb4d

0x1ca: Pop(1)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: PushEmpty(bool, object)
0x1cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Call 0xb71

0x1cf: Pop(1)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 1
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: Push((int) 8130)
0x1d4: Push((int) 6213)
0x1d5: Push((int) 8953)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 1
0x1da: PushEmpty(bool)
0x1db: Stack[-1] = (bool) 0
0x1dc: PushEmpty(bool, object)
0x1dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1de: Call 0xbc3

0x1df: Pop(1)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e3: Call 0xb59

0x1e4: Pop(1)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e8: PushEmpty(bool)
0x1e9: Stack[-1] = (bool) 0
0x1ea: PushEmpty(bool, object)
0x1eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Call 0xbb9

0x1ed: Pop(1)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1ef: PushEmpty(bool, object)
0x1f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Call 0xb59

0x1f2: Pop(1)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Stack[-1] = (bool) 1
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 0
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: Push((int) 8131)
0x1f9: Push((int) 6197)
0x1fa: Push((int) 8954)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: PushEmpty(bool)
0x1fe: Stack[-1] = (bool) 0
0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call 0xc15

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: PushEmpty(bool, object)
0x205: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x206: Call 0xb7d

0x207: Pop(1)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: Push((int) 8133)
0x20c: Push((int) -1)
0x20d: Push((int) 8956)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: PushEmpty(bool)
0x211: Stack[-1] = (bool) 0
0x212: PushEmpty(bool, object)
0x213: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x214: Call 0xbd9

0x215: Pop(1)
0x216: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x217: PushEmpty(bool, object)
0x218: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x219: Call 0xb89

0x21a: Pop(1)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Stack[-1] = (bool) 1
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: Push((int) 8135)
0x21f: Push((int) 8982)
0x220: Push((int) 8958)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x227: Call 0xbe5

0x228: Pop(1)
0x229: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Call 0xb95

0x22d: Pop(1)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x231: Push((int) 8137)
0x232: Push((int) 8981)
0x233: Push((int) 8960)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: PushEmpty(bool)
0x237: Stack[-1] = (bool) 0
0x238: PushEmpty(bool, object)
0x239: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23a: Call 0xbf1

0x23b: Pop(1)
0x23c: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23d: PushEmpty(bool, object)
0x23e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23f: Call 0xba1

0x240: Pop(1)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x244: Push((int) 8140)
0x245: Push((int) 8980)
0x246: Push((int) 8963)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Call 0xc09

0x24e: Pop(1)
0x24f: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x252: Call 0xbad

0x253: Pop(1)
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Stack[-1] = (bool) 1
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: Push((int) 8151)
0x258: Push((int) 8979)
0x259: Push((int) 8974)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 9147)
0x25d: Push((int) -1)
0x25e: Push((int) 10028)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: GOTO 0x264

0x262: Return(); Pop(0)

0x263: GOTO 0x18d

0x264: PushEmpty(bool)
0x265: Call 0xa9d

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: @ lshWaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: PushEmpty(string)
0x26e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26f: Call 0xa3e

0x270: Pop(1)
0x271: GOTO 0x268

0x272: GOTO 0x281

0x273: Push("all")
0x274: Push("idle")
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x281

0x27c: Push("all")
0x27d: Push("idle")
0x27e: @ PlayAnimation(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: GOTO 0x277

0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: PushEmpty(bool)
0x284: Call 0xa9d

0x285: Pop(0)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Return(); Pop(0)

0x289: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Return(); Pop(0)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = Stack[-2]
0x28e: Call 0xa3e

0x28f: Pop(1)
0x290: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x291: Return(); Pop(0)

0x292: PushEmpty()
0x293: Push((int) 1)
0x294: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x295: PushEmpty()
0x296: Call 0xa50

0x297: Pop(0)
0x298: Push((int) 6915)
0x299: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x29b: PushEmpty(object, object)
0x29c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29e: Call 0xa9f

0x29f: Pop(2)
0x2a0: PushEmpty(object, object)
0x2a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a3: Call 0xab1

0x2a4: Pop(2)
0x2a5: PushEmpty(object, object)
0x2a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a8: Call 0xaca

0x2a9: Pop(2)
0x2aa: Push((int) 6916)
0x2ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ad: PushEmpty(object, object)
0x2ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b0: Call 0xa9f

0x2b1: Pop(2)
0x2b2: PushEmpty(object, object)
0x2b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b5: Call 0xab1

0x2b6: Pop(2)
0x2b7: PushEmpty(object, object)
0x2b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call 0xaca

0x2bb: Pop(2)
0x2bc: Push((int) 6218)
0x2bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: PushEmpty(object, object)
0x2c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c2: Call 0xaa5

0x2c3: Pop(2)
0x2c4: Push((int) 6219)
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(object, object)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call 0xaa5

0x2cb: Pop(2)
0x2cc: Push((int) 6202)
0x2cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call 0xaab

0x2d3: Pop(2)
0x2d4: Push((int) 6203)
0x2d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: PushEmpty(object, object)
0x2d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2da: Call 0xaab

0x2db: Pop(2)
0x2dc: Push((int) 6206)
0x2dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: PushEmpty(object, object)
0x2e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e2: Call 0xaab

0x2e3: Pop(2)
0x2e4: Push((int) 6209)
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(object, object)
0x2e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ea: Call 0xaab

0x2eb: Pop(2)
0x2ec: Push((int) 6210)
0x2ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ef: PushEmpty(object, object)
0x2f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f2: Call 0xaab

0x2f3: Pop(2)
0x2f4: Push((int) 8956)
0x2f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: PushEmpty(object, object)
0x2f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fa: Call 0xada

0x2fb: Pop(2)
0x2fc: Push((int) 9535)
0x2fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: PushEmpty(object, object)
0x300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call 0xae0

0x303: Pop(2)
0x304: Push((int) 9536)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x309: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30a: Call 0xae6

0x30b: Pop(2)
0x30c: Push((int) 9537)
0x30d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(object, object)
0x310: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x311: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x312: Call 0xaec

0x313: Pop(2)
0x314: Push((int) 9538)
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: PushEmpty(object, object)
0x318: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call 0xaf2

0x31b: Pop(2)
0x31c: Push((int) 6192)
0x31d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x31f: PushEmpty(bool)
0x320: Stack[-1] = (bool) 0
0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x323: Call 0xb41

0x324: Pop(1)
0x325: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x328: Call 0xb65

0x329: Pop(1)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 1
0x32d: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x32e: PushEmpty(object, object)
0x32f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x330: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x331: Call 0xb2a

0x332: Pop(2)
0x333: PushEmpty(object, object)
0x334: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x335: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x336: Call 0xaf8

0x337: Pop(2)
0x338: PushEmpty(string)
0x339: Stack[-1] = "Neutral"
0x33a: Call 0x282

0x33b: Pop(1)
0x33c: Push((int) 5616)
0x33d: @@ SetMessage(Stack[-1])
0x33e: Pop(1)
0x33f: @@ ClearReplies()
0x340: Pop(0)
0x341: Push((int) 5617)
0x342: Push((int) 6905)
0x343: Push((int) 6193)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: Push((int) 5645)
0x347: Push((int) 6906)
0x348: Push((int) 6224)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Return(); Pop(0)

0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Neutral"
0x34e: Call 0x282

0x34f: Pop(1)
0x350: Push((int) 8129)
0x351: @@ SetMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ ClearReplies()
0x354: Pop(0)
0x355: PushEmpty(bool)
0x356: Stack[-1] = (bool) 0
0x357: PushEmpty(bool, object)
0x358: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x359: Call 0xb4d

0x35a: Pop(1)
0x35b: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35c: PushEmpty(bool, object)
0x35d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35e: Call 0xb71

0x35f: Pop(1)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = (bool) 1
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: Push((int) 8130)
0x364: Push((int) 6213)
0x365: Push((int) 8953)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: PushEmpty(bool)
0x369: Stack[-1] = (bool) 1
0x36a: PushEmpty(bool)
0x36b: Stack[-1] = (bool) 0
0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36e: Call 0xbc3

0x36f: Pop(1)
0x370: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x373: Call 0xb59

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x376: Stack[-1] = (bool) 1
0x377: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x378: PushEmpty(bool)
0x379: Stack[-1] = (bool) 0
0x37a: PushEmpty(bool, object)
0x37b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37c: Call 0xbb9

0x37d: Pop(1)
0x37e: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x381: Call 0xb59

0x382: Pop(1)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = (bool) 1
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: Stack[-1] = (bool) 0
0x387: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x388: Push((int) 8131)
0x389: Push((int) 6197)
0x38a: Push((int) 8954)
0x38b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(3)
0x38d: PushEmpty(bool)
0x38e: Stack[-1] = (bool) 0
0x38f: PushEmpty(bool, object)
0x390: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x391: Call 0xc15

0x392: Pop(1)
0x393: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x396: Call 0xb7d

0x397: Pop(1)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: Stack[-1] = (bool) 1
0x39a: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39b: Push((int) 8133)
0x39c: Push((int) -1)
0x39d: Push((int) 8956)
0x39e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(3)
0x3a0: PushEmpty(bool)
0x3a1: Stack[-1] = (bool) 0
0x3a2: PushEmpty(bool, object)
0x3a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a4: Call 0xbd9

0x3a5: Pop(1)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a9: Call 0xb89

0x3aa: Pop(1)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Stack[-1] = (bool) 1
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ae: Push((int) 8135)
0x3af: Push((int) 8982)
0x3b0: Push((int) 8958)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: PushEmpty(bool)
0x3b4: Stack[-1] = (bool) 0
0x3b5: PushEmpty(bool, object)
0x3b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b7: Call 0xbe5

0x3b8: Pop(1)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bc: Call 0xb95

0x3bd: Pop(1)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Stack[-1] = (bool) 1
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c1: Push((int) 8137)
0x3c2: Push((int) 8981)
0x3c3: Push((int) 8960)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: PushEmpty(bool)
0x3c7: Stack[-1] = (bool) 0
0x3c8: PushEmpty(bool, object)
0x3c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ca: Call 0xbf1

0x3cb: Pop(1)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cd: PushEmpty(bool, object)
0x3ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cf: Call 0xba1

0x3d0: Pop(1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-1] = (bool) 1
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: Push((int) 8140)
0x3d5: Push((int) 8980)
0x3d6: Push((int) 8963)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: PushEmpty(bool)
0x3da: Stack[-1] = (bool) 0
0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3dd: Call 0xc09

0x3de: Pop(1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e0: PushEmpty(bool, object)
0x3e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e2: Call 0xbad

0x3e3: Pop(1)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: Stack[-1] = (bool) 1
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e7: Push((int) 8151)
0x3e8: Push((int) 8979)
0x3e9: Push((int) 8974)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Push((int) 9147)
0x3ed: Push((int) -1)
0x3ee: Push((int) 10028)
0x3ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: Push((int) 8979)
0x3f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f5: PushEmpty(string)
0x3f6: Stack[-1] = "Neutral"
0x3f7: Call 0x282

0x3f8: Pop(1)
0x3f9: Push((int) 8156)
0x3fa: @@ SetMessage(Stack[-1])
0x3fb: Pop(1)
0x3fc: @@ ClearReplies()
0x3fd: Pop(0)
0x3fe: Push((int) 8701)
0x3ff: Push((int) -1)
0x400: Push((int) 9538)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 8980)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Neutral"
0x409: Call 0x282

0x40a: Pop(1)
0x40b: Push((int) 8157)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 8700)
0x411: Push((int) -1)
0x412: Push((int) 9537)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Return(); Pop(0)

0x416: Push((int) 8981)
0x417: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x419: PushEmpty(string)
0x41a: Stack[-1] = "Neutral"
0x41b: Call 0x282

0x41c: Pop(1)
0x41d: Push((int) 8158)
0x41e: @@ SetMessage(Stack[-1])
0x41f: Pop(1)
0x420: @@ ClearReplies()
0x421: Pop(0)
0x422: Push((int) 8699)
0x423: Push((int) -1)
0x424: Push((int) 9536)
0x425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(3)
0x427: Return(); Pop(0)

0x428: Push((int) 8982)
0x429: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x42b: PushEmpty(string)
0x42c: Stack[-1] = "Neutral"
0x42d: Call 0x282

0x42e: Pop(1)
0x42f: Push((int) 8159)
0x430: @@ SetMessage(Stack[-1])
0x431: Pop(1)
0x432: @@ ClearReplies()
0x433: Pop(0)
0x434: Push((int) 8698)
0x435: Push((int) -1)
0x436: Push((int) 9535)
0x437: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: Return(); Pop(0)

0x43a: Push((int) 6197)
0x43b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x43d: PushEmpty(bool, object)
0x43e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43f: Call 0xb59

0x440: Pop(1)
0x441: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x442: PushEmpty(string)
0x443: Stack[-1] = "Neutral"
0x444: Call 0x282

0x445: Pop(1)
0x446: Push((int) 5621)
0x447: @@ SetMessage(Stack[-1])
0x448: Pop(1)
0x449: @@ ClearReplies()
0x44a: Pop(0)
0x44b: Push((int) 5622)
0x44c: Push((int) 6199)
0x44d: Push((int) 6198)
0x44e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44f: Pop(3)
0x450: Push((int) 5635)
0x451: Push((int) 6199)
0x452: Push((int) 6211)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Return(); Pop(0)

0x456: Push((int) 6199)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Neutral"
0x45b: Call 0x282

0x45c: Pop(1)
0x45d: Push((int) 5623)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: Push((int) 5624)
0x463: Push((int) 6201)
0x464: Push((int) 6200)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Push((int) 5631)
0x468: Push((int) 6208)
0x469: Push((int) 6207)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Return(); Pop(0)

0x46d: Push((int) 6208)
0x46e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x470: PushEmpty(string)
0x471: Stack[-1] = "Neutral"
0x472: Call 0x282

0x473: Pop(1)
0x474: Push((int) 5632)
0x475: @@ SetMessage(Stack[-1])
0x476: Pop(1)
0x477: @@ ClearReplies()
0x478: Pop(0)
0x479: Push((int) 5633)
0x47a: Push((int) -1)
0x47b: Push((int) 6209)
0x47c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47d: Pop(3)
0x47e: Push((int) 5634)
0x47f: Push((int) -1)
0x480: Push((int) 6210)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Return(); Pop(0)

0x484: Push((int) 6201)
0x485: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x487: PushEmpty(string)
0x488: Stack[-1] = "Neutral"
0x489: Call 0x282

0x48a: Pop(1)
0x48b: Push((int) 5625)
0x48c: @@ SetMessage(Stack[-1])
0x48d: Pop(1)
0x48e: @@ ClearReplies()
0x48f: Pop(0)
0x490: Push((int) 5626)
0x491: Push((int) -1)
0x492: Push((int) 6202)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Push((int) 5627)
0x496: Push((int) -1)
0x497: Push((int) 6203)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Push((int) 5628)
0x49b: Push((int) 6205)
0x49c: Push((int) 6204)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: Return(); Pop(0)

0x4a0: Push((int) 6205)
0x4a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Neutral"
0x4a5: Call 0x282

0x4a6: Pop(1)
0x4a7: Push((int) 5629)
0x4a8: @@ SetMessage(Stack[-1])
0x4a9: Pop(1)
0x4aa: @@ ClearReplies()
0x4ab: Pop(0)
0x4ac: Push((int) 5630)
0x4ad: Push((int) -1)
0x4ae: Push((int) 6206)
0x4af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b0: Pop(3)
0x4b1: Return(); Pop(0)

0x4b2: Push((int) 6213)
0x4b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4b5: PushEmpty(bool, object)
0x4b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b7: Call 0xb4d

0x4b8: Pop(1)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4ba: PushEmpty(string)
0x4bb: Stack[-1] = "Neutral"
0x4bc: Call 0x282

0x4bd: Pop(1)
0x4be: Push((int) 5636)
0x4bf: @@ SetMessage(Stack[-1])
0x4c0: Pop(1)
0x4c1: @@ ClearReplies()
0x4c2: Pop(0)
0x4c3: Push((int) 5637)
0x4c4: Push((int) 6215)
0x4c5: Push((int) 6214)
0x4c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c7: Pop(3)
0x4c8: Push((int) 5644)
0x4c9: Push((int) 6215)
0x4ca: Push((int) 6222)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Return(); Pop(0)

0x4ce: Push((int) 6215)
0x4cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4d1: PushEmpty(string)
0x4d2: Stack[-1] = "Neutral"
0x4d3: Call 0x282

0x4d4: Pop(1)
0x4d5: Push((int) 5638)
0x4d6: @@ SetMessage(Stack[-1])
0x4d7: Pop(1)
0x4d8: @@ ClearReplies()
0x4d9: Pop(0)
0x4da: Push((int) 5639)
0x4db: Push((int) 6217)
0x4dc: Push((int) 6216)
0x4dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: Push((int) 5643)
0x4e0: Push((int) 6217)
0x4e1: Push((int) 6220)
0x4e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e3: Pop(3)
0x4e4: Return(); Pop(0)

0x4e5: Push((int) 6217)
0x4e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4e8: PushEmpty(string)
0x4e9: Stack[-1] = "Neutral"
0x4ea: Call 0x282

0x4eb: Pop(1)
0x4ec: Push((int) 5640)
0x4ed: @@ SetMessage(Stack[-1])
0x4ee: Pop(1)
0x4ef: @@ ClearReplies()
0x4f0: Pop(0)
0x4f1: Push((int) 5641)
0x4f2: Push((int) -1)
0x4f3: Push((int) 6218)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: Push((int) 5642)
0x4f7: Push((int) -1)
0x4f8: Push((int) 6219)
0x4f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fa: Pop(3)
0x4fb: Return(); Pop(0)

0x4fc: Push((int) 6906)
0x4fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x4ff: PushEmpty(string)
0x500: Stack[-1] = "Neutral"
0x501: Call 0x282

0x502: Pop(1)
0x503: Push((int) 6243)
0x504: @@ SetMessage(Stack[-1])
0x505: Pop(1)
0x506: @@ ClearReplies()
0x507: Pop(0)
0x508: Push((int) 6244)
0x509: Push((int) 6908)
0x50a: Push((int) 6907)
0x50b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50c: Pop(3)
0x50d: Return(); Pop(0)

0x50e: Push((int) 6908)
0x50f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x511: PushEmpty(string)
0x512: Stack[-1] = "Neutral"
0x513: Call 0x282

0x514: Pop(1)
0x515: Push((int) 6245)
0x516: @@ SetMessage(Stack[-1])
0x517: Pop(1)
0x518: @@ ClearReplies()
0x519: Pop(0)
0x51a: Push((int) 6246)
0x51b: Push((int) 6905)
0x51c: Push((int) 6909)
0x51d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(3)
0x51f: Return(); Pop(0)

0x520: Push((int) 6905)
0x521: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x523: PushEmpty(string)
0x524: Stack[-1] = "Neutral"
0x525: Call 0x282

0x526: Pop(1)
0x527: Push((int) 6242)
0x528: @@ SetMessage(Stack[-1])
0x529: Pop(1)
0x52a: @@ ClearReplies()
0x52b: Pop(0)
0x52c: Push((int) 6247)
0x52d: Push((int) 6912)
0x52e: Push((int) 6911)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: Return(); Pop(0)

0x532: Push((int) 6912)
0x533: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x535: PushEmpty(string)
0x536: Stack[-1] = "Neutral"
0x537: Call 0x282

0x538: Pop(1)
0x539: Push((int) 6248)
0x53a: @@ SetMessage(Stack[-1])
0x53b: Pop(1)
0x53c: @@ ClearReplies()
0x53d: Pop(0)
0x53e: Push((int) 6249)
0x53f: Push((int) 6914)
0x540: Push((int) 6913)
0x541: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x542: Pop(3)
0x543: Return(); Pop(0)

0x544: Push((int) 6914)
0x545: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x547: PushEmpty(string)
0x548: Stack[-1] = "Neutral"
0x549: Call 0x282

0x54a: Pop(1)
0x54b: Push((int) 6250)
0x54c: @@ SetMessage(Stack[-1])
0x54d: Pop(1)
0x54e: @@ ClearReplies()
0x54f: Pop(0)
0x550: Push((int) 6251)
0x551: Push((int) -1)
0x552: Push((int) 6915)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Push((int) 6252)
0x556: Push((int) -1)
0x557: Push((int) 6916)
0x558: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x559: Pop(3)
0x55a: Return(); Pop(0)

0x55b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x55c: PushEmpty(bool)
0x55d: Call 0xa9d

0x55e: Pop(0)
0x55f: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x560: @ lshStopAnimation()
0x561: Pop(0)
0x562: GOTO 0x565

0x563: @ StopAnimation()
0x564: Pop(0)
0x565: Return(); Pop(0)

0x566: GOTO 0x293

0x567: Return(); Pop(0)

0x568: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x569: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x56a: PushEmpty(bool, object)
0x56b: Stack[-1] = Stack[-11]
0x56c: Call 0xa02

0x56d: Pop(1)
0x56e: Pop(1); Push((bool) Stack[-1] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-10] = (int) -2
0x571: Return(); Pop(8)

0x572: @ CreateDialog(Stack[-4])
0x573: Pop(0)
0x574: PushEmpty(int)
0x575: Call 0xa99

0x576: Pop(0)
0x577: @@ SetNPCName(Stack[-1])
0x578: Pop(1)
0x579: PushEmpty(string)
0x57a: Call 0xa9b

0x57b: Pop(0)
0x57c: @@ SetPhoto(Stack[-1])
0x57d: Pop(1)
0x57e: PushEmpty(int)
0x57f: Call 0xc9d

0x580: Pop(0)
0x581: @@ SetPlayerName(Stack[-1])
0x582: Pop(1)
0x583: Stack[-2] = (int) -1
0x584: @ IsOverrideActive(Stack[-3])
0x585: Pop(0)
0x586: Push(Stack[-3])
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: Stack[-10] = (int) -2
0x589: Return(); Pop(8)

0x58a: @ DoDialog(Stack[-4])
0x58b: Pop(0)
0x58c: PushEmpty(object, object)
0x58d: Stack[-2] = Stack[-11]
0x58e: Stack[-1] = Stack[-6]
0x58f: Push(-2, 4); TaskCall(7)
0x590: Call 0x5a7

0x591: Pop(-2, 4); TaskReturn
0x592: Pop(2)
0x593: @@ IsDialogEnd(Stack[-1])
0x594: Pop(0)
0x595: Pop(0); Push((bool) Stack[-1] == 0)
0x596: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x597: @ sync()
0x598: Pop(0)
0x599: @@ IsDialogEnd(Stack[-1])
0x59a: Pop(0)
0x59b: GOTO 0x595

0x59c: PushEmpty(object)
0x59d: Stack[-1] = Stack[-10]
0x59e: Call 0xa3a

0x59f: Pop(1)
0x5a0: @ StopDialog(Stack[-4])
0x5a1: Pop(0)
0x5a2: @@ GetReturnValue(Stack[-2])
0x5a3: Pop(0)
0x5a4: Stack[-10] = Stack[-2]
0x5a5: Return(); Pop(8)

0x5a6: Stack[-4] = 0
0x5a7: PushEmpty()
0x5a8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5aa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ab: Push((int) 1)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5ad: PushEmpty(string)
0x5ae: Stack[-1] = "Neutral"
0x5af: Call 0x5e1

0x5b0: Pop(1)
0x5b1: Push((int) 9489)
0x5b2: @@ SetMessage(Stack[-1])
0x5b3: Pop(1)
0x5b4: @@ ClearReplies()
0x5b5: Pop(0)
0x5b6: Push((int) 9490)
0x5b7: Push((int) 10433)
0x5b8: Push((int) 10432)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Push((int) 9499)
0x5bc: Push((int) 10433)
0x5bd: Push((int) 10441)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: GOTO 0x5c3

0x5c1: Return(); Pop(0)

0x5c2: GOTO 0x5ab

0x5c3: PushEmpty(bool)
0x5c4: Call 0xa9d

0x5c5: Pop(0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5c7: @ lshWaitForAnimEnd()
0x5c8: Pop(0)
0x5c9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: GOTO 0x5d1

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5ce: Call 0xa3e

0x5cf: Pop(1)
0x5d0: GOTO 0x5c7

0x5d1: GOTO 0x5e0

0x5d2: Push("all")
0x5d3: Push("idle")
0x5d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d5: Pop(2)
0x5d6: @ WaitForAnimEnd()
0x5d7: Pop(0)
0x5d8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d9: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5da: GOTO 0x5e0

0x5db: Push("all")
0x5dc: Push("idle")
0x5dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x5de: Pop(2)
0x5df: GOTO 0x5d6

0x5e0: Return(); Pop(0)

0x5e1: PushEmpty()
0x5e2: PushEmpty(bool)
0x5e3: Call 0xa9d

0x5e4: Pop(0)
0x5e5: Pop(1); Push((bool) Stack[-1] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Return(); Pop(0)

0x5e8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5ea: Return(); Pop(0)

0x5eb: PushEmpty(string)
0x5ec: Stack[-1] = Stack[-2]
0x5ed: Call 0xa3e

0x5ee: Pop(1)
0x5ef: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty()
0x5f2: Push((int) 1)
0x5f3: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x5f4: PushEmpty()
0x5f5: Call 0xa50

0x5f6: Pop(0)
0x5f7: Push((int) 10431)
0x5f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x5fa: PushEmpty(string)
0x5fb: Stack[-1] = "Neutral"
0x5fc: Call 0x5e1

0x5fd: Pop(1)
0x5fe: Push((int) 9489)
0x5ff: @@ SetMessage(Stack[-1])
0x600: Pop(1)
0x601: @@ ClearReplies()
0x602: Pop(0)
0x603: Push((int) 9490)
0x604: Push((int) 10433)
0x605: Push((int) 10432)
0x606: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x607: Pop(3)
0x608: Push((int) 9499)
0x609: Push((int) 10433)
0x60a: Push((int) 10441)
0x60b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60c: Pop(3)
0x60d: Return(); Pop(0)

0x60e: Push((int) 10433)
0x60f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x611: PushEmpty(string)
0x612: Stack[-1] = "Neutral"
0x613: Call 0x5e1

0x614: Pop(1)
0x615: Push((int) 9491)
0x616: @@ SetMessage(Stack[-1])
0x617: Pop(1)
0x618: @@ ClearReplies()
0x619: Pop(0)
0x61a: Push((int) 9492)
0x61b: Push((int) 10435)
0x61c: Push((int) 10434)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: Push((int) 9496)
0x620: Push((int) 10439)
0x621: Push((int) 10438)
0x622: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x623: Pop(3)
0x624: Return(); Pop(0)

0x625: Push((int) 10439)
0x626: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x628: PushEmpty(string)
0x629: Stack[-1] = "Neutral"
0x62a: Call 0x5e1

0x62b: Pop(1)
0x62c: Push((int) 9497)
0x62d: @@ SetMessage(Stack[-1])
0x62e: Pop(1)
0x62f: @@ ClearReplies()
0x630: Pop(0)
0x631: Push((int) 9498)
0x632: Push((int) -1)
0x633: Push((int) 10440)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Return(); Pop(0)

0x637: Push((int) 10435)
0x638: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x63a: PushEmpty(string)
0x63b: Stack[-1] = "Neutral"
0x63c: Call 0x5e1

0x63d: Pop(1)
0x63e: Push((int) 9493)
0x63f: @@ SetMessage(Stack[-1])
0x640: Pop(1)
0x641: @@ ClearReplies()
0x642: Pop(0)
0x643: Push((int) 9494)
0x644: Push((int) -1)
0x645: Push((int) 10436)
0x646: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x647: Pop(3)
0x648: Push((int) 9495)
0x649: Push((int) -1)
0x64a: Push((int) 10437)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x64f: PushEmpty(bool)
0x650: Call 0xa9d

0x651: Pop(0)
0x652: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x653: @ lshStopAnimation()
0x654: Pop(0)
0x655: GOTO 0x658

0x656: @ StopAnimation()
0x657: Pop(0)
0x658: Return(); Pop(0)

0x659: GOTO 0x5f2

0x65a: Return(); Pop(0)

0x65b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x65c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x65d: PushEmpty(bool, object)
0x65e: Stack[-1] = Stack[-11]
0x65f: Call 0xa02

0x660: Pop(1)
0x661: Pop(1); Push((bool) Stack[-1] == 0)
0x662: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x663: Stack[-10] = (int) -2
0x664: Return(); Pop(8)

0x665: @ CreateDialog(Stack[-4])
0x666: Pop(0)
0x667: PushEmpty(int)
0x668: Call 0xa99

0x669: Pop(0)
0x66a: @@ SetNPCName(Stack[-1])
0x66b: Pop(1)
0x66c: PushEmpty(string)
0x66d: Call 0xa9b

0x66e: Pop(0)
0x66f: @@ SetPhoto(Stack[-1])
0x670: Pop(1)
0x671: PushEmpty(int)
0x672: Call 0xc9d

0x673: Pop(0)
0x674: @@ SetPlayerName(Stack[-1])
0x675: Pop(1)
0x676: Stack[-2] = (int) -1
0x677: @ IsOverrideActive(Stack[-3])
0x678: Pop(0)
0x679: Push(Stack[-3])
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-10] = (int) -2
0x67c: Return(); Pop(8)

0x67d: @ DoDialog(Stack[-4])
0x67e: Pop(0)
0x67f: PushEmpty(object, object)
0x680: Stack[-2] = Stack[-11]
0x681: Stack[-1] = Stack[-6]
0x682: Push(-2, 4); TaskCall(9)
0x683: Call 0x69a

0x684: Pop(-2, 4); TaskReturn
0x685: Pop(2)
0x686: @@ IsDialogEnd(Stack[-1])
0x687: Pop(0)
0x688: Pop(0); Push((bool) Stack[-1] == 0)
0x689: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68a: @ sync()
0x68b: Pop(0)
0x68c: @@ IsDialogEnd(Stack[-1])
0x68d: Pop(0)
0x68e: GOTO 0x688

0x68f: PushEmpty(object)
0x690: Stack[-1] = Stack[-10]
0x691: Call 0xa3a

0x692: Pop(1)
0x693: @ StopDialog(Stack[-4])
0x694: Pop(0)
0x695: @@ GetReturnValue(Stack[-2])
0x696: Pop(0)
0x697: Stack[-10] = Stack[-2]
0x698: Return(); Pop(8)

0x699: Stack[-4] = 0
0x69a: PushEmpty()
0x69b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x69c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x69d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x69e: Push((int) 1)
0x69f: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6a0: PushEmpty(bool, object)
0x6a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a2: Call 0xbfd

0x6a3: Pop(1)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6a5: PushEmpty(object, object)
0x6a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6a8: Call 0xb3b

0x6a9: Pop(2)
0x6aa: PushEmpty(string)
0x6ab: Stack[-1] = "Neutral"
0x6ac: Call 0x6ed

0x6ad: Pop(1)
0x6ae: Push((int) 9993)
0x6af: @@ SetMessage(Stack[-1])
0x6b0: Pop(1)
0x6b1: @@ ClearReplies()
0x6b2: Pop(0)
0x6b3: Push((int) 9994)
0x6b4: Push((int) 11016)
0x6b5: Push((int) 11015)
0x6b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b7: Pop(3)
0x6b8: Push((int) 10002)
0x6b9: Push((int) 11016)
0x6ba: Push((int) 11023)
0x6bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bc: Pop(3)
0x6bd: GOTO 0x6cf

0x6be: PushEmpty(string)
0x6bf: Stack[-1] = "Neutral"
0x6c0: Call 0x6ed

0x6c1: Pop(1)
0x6c2: Push((int) 15316)
0x6c3: @@ SetMessage(Stack[-1])
0x6c4: Pop(1)
0x6c5: @@ ClearReplies()
0x6c6: Pop(0)
0x6c7: Push((int) 15317)
0x6c8: Push((int) -1)
0x6c9: Push((int) 16555)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: GOTO 0x6cf

0x6cd: Return(); Pop(0)

0x6ce: GOTO 0x69e

0x6cf: PushEmpty(bool)
0x6d0: Call 0xa9d

0x6d1: Pop(0)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6d3: @ lshWaitForAnimEnd()
0x6d4: Pop(0)
0x6d5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d7: GOTO 0x6dd

0x6d8: PushEmpty(string)
0x6d9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6da: Call 0xa3e

0x6db: Pop(1)
0x6dc: GOTO 0x6d3

0x6dd: GOTO 0x6ec

0x6de: Push("all")
0x6df: Push("idle")
0x6e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x6e1: Pop(2)
0x6e2: @ WaitForAnimEnd()
0x6e3: Pop(0)
0x6e4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6e6: GOTO 0x6ec

0x6e7: Push("all")
0x6e8: Push("idle")
0x6e9: @ PlayAnimation(Stack[-2], Stack[-1])
0x6ea: Pop(2)
0x6eb: GOTO 0x6e2

0x6ec: Return(); Pop(0)

0x6ed: PushEmpty()
0x6ee: PushEmpty(bool)
0x6ef: Call 0xa9d

0x6f0: Pop(0)
0x6f1: Pop(1); Push((bool) Stack[-1] == 0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Return(); Pop(0)

0x6f4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f6: Return(); Pop(0)

0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = Stack[-2]
0x6f9: Call 0xa3e

0x6fa: Pop(1)
0x6fb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6fc: Return(); Pop(0)

0x6fd: PushEmpty()
0x6fe: Push((int) 1)
0x6ff: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x700: PushEmpty()
0x701: Call 0xa50

0x702: Pop(0)
0x703: Push((int) 11014)
0x704: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x706: PushEmpty(bool, object)
0x707: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x708: Call 0xbfd

0x709: Pop(1)
0x70a: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x70b: PushEmpty(object, object)
0x70c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x70d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x70e: Call 0xb3b

0x70f: Pop(2)
0x710: PushEmpty(string)
0x711: Stack[-1] = "Neutral"
0x712: Call 0x6ed

0x713: Pop(1)
0x714: Push((int) 9993)
0x715: @@ SetMessage(Stack[-1])
0x716: Pop(1)
0x717: @@ ClearReplies()
0x718: Pop(0)
0x719: Push((int) 9994)
0x71a: Push((int) 11016)
0x71b: Push((int) 11015)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: Push((int) 10002)
0x71f: Push((int) 11016)
0x720: Push((int) 11023)
0x721: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: Return(); Pop(0)

0x724: PushEmpty(string)
0x725: Stack[-1] = "Neutral"
0x726: Call 0x6ed

0x727: Pop(1)
0x728: Push((int) 15316)
0x729: @@ SetMessage(Stack[-1])
0x72a: Pop(1)
0x72b: @@ ClearReplies()
0x72c: Pop(0)
0x72d: Push((int) 15317)
0x72e: Push((int) -1)
0x72f: Push((int) 16555)
0x730: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(3)
0x732: Return(); Pop(0)

0x733: Push((int) 11016)
0x734: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x736: PushEmpty(string)
0x737: Stack[-1] = "Neutral"
0x738: Call 0x6ed

0x739: Pop(1)
0x73a: Push((int) 9995)
0x73b: @@ SetMessage(Stack[-1])
0x73c: Pop(1)
0x73d: @@ ClearReplies()
0x73e: Pop(0)
0x73f: Push((int) 9996)
0x740: Push((int) -1)
0x741: Push((int) 11017)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: Push((int) 9997)
0x745: Push((int) -1)
0x746: Push((int) 11018)
0x747: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x748: Pop(3)
0x749: Push((int) 9998)
0x74a: Push((int) 11020)
0x74b: Push((int) 11019)
0x74c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74d: Pop(3)
0x74e: Return(); Pop(0)

0x74f: Push((int) 11020)
0x750: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x752: PushEmpty(string)
0x753: Stack[-1] = "Neutral"
0x754: Call 0x6ed

0x755: Pop(1)
0x756: Push((int) 9999)
0x757: @@ SetMessage(Stack[-1])
0x758: Pop(1)
0x759: @@ ClearReplies()
0x75a: Pop(0)
0x75b: Push((int) 10000)
0x75c: Push((int) -1)
0x75d: Push((int) 11021)
0x75e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75f: Pop(3)
0x760: Push((int) 10001)
0x761: Push((int) -1)
0x762: Push((int) 11022)
0x763: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x764: Pop(3)
0x765: Return(); Pop(0)

0x766: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x767: PushEmpty(bool)
0x768: Call 0xa9d

0x769: Pop(0)
0x76a: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76b: @ lshStopAnimation()
0x76c: Pop(0)
0x76d: GOTO 0x770

0x76e: @ StopAnimation()
0x76f: Pop(0)
0x770: Return(); Pop(0)

0x771: GOTO 0x6fe

0x772: Return(); Pop(0)

0x773: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x774: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x775: PushEmpty(bool, object)
0x776: Stack[-1] = Stack[-11]
0x777: Call 0xa02

0x778: Pop(1)
0x779: Pop(1); Push((bool) Stack[-1] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77b: Stack[-10] = (int) -2
0x77c: Return(); Pop(8)

0x77d: @ CreateDialog(Stack[-4])
0x77e: Pop(0)
0x77f: PushEmpty(int)
0x780: Call 0xa99

0x781: Pop(0)
0x782: @@ SetNPCName(Stack[-1])
0x783: Pop(1)
0x784: PushEmpty(string)
0x785: Call 0xa9b

0x786: Pop(0)
0x787: @@ SetPhoto(Stack[-1])
0x788: Pop(1)
0x789: PushEmpty(int)
0x78a: Call 0xc9d

0x78b: Pop(0)
0x78c: @@ SetPlayerName(Stack[-1])
0x78d: Pop(1)
0x78e: Stack[-2] = (int) -1
0x78f: @ IsOverrideActive(Stack[-3])
0x790: Pop(0)
0x791: Push(Stack[-3])
0x792: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x793: Stack[-10] = (int) -2
0x794: Return(); Pop(8)

0x795: @ DoDialog(Stack[-4])
0x796: Pop(0)
0x797: PushEmpty(object, object)
0x798: Stack[-2] = Stack[-11]
0x799: Stack[-1] = Stack[-6]
0x79a: Push(-2, 4); TaskCall(11)
0x79b: Call 0x7b2

0x79c: Pop(-2, 4); TaskReturn
0x79d: Pop(2)
0x79e: @@ IsDialogEnd(Stack[-1])
0x79f: Pop(0)
0x7a0: Pop(0); Push((bool) Stack[-1] == 0)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a2: @ sync()
0x7a3: Pop(0)
0x7a4: @@ IsDialogEnd(Stack[-1])
0x7a5: Pop(0)
0x7a6: GOTO 0x7a0

0x7a7: PushEmpty(object)
0x7a8: Stack[-1] = Stack[-10]
0x7a9: Call 0xa3a

0x7aa: Pop(1)
0x7ab: @ StopDialog(Stack[-4])
0x7ac: Pop(0)
0x7ad: @@ GetReturnValue(Stack[-2])
0x7ae: Pop(0)
0x7af: Stack[-10] = Stack[-2]
0x7b0: Return(); Pop(8)

0x7b1: Stack[-4] = 0
0x7b2: PushEmpty()
0x7b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7b6: Push((int) 1)
0x7b7: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7b8: PushEmpty(string)
0x7b9: Stack[-1] = "Neutral"
0x7ba: Call 0x7e7

0x7bb: Pop(1)
0x7bc: Push((int) 10917)
0x7bd: @@ SetMessage(Stack[-1])
0x7be: Pop(1)
0x7bf: @@ ClearReplies()
0x7c0: Pop(0)
0x7c1: Push((int) 10918)
0x7c2: Push((int) -1)
0x7c3: Push((int) 12067)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: GOTO 0x7c9

0x7c7: Return(); Pop(0)

0x7c8: GOTO 0x7b6

0x7c9: PushEmpty(bool)
0x7ca: Call 0xa9d

0x7cb: Pop(0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7cd: @ lshWaitForAnimEnd()
0x7ce: Pop(0)
0x7cf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d1: GOTO 0x7d7

0x7d2: PushEmpty(string)
0x7d3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d4: Call 0xa3e

0x7d5: Pop(1)
0x7d6: GOTO 0x7cd

0x7d7: GOTO 0x7e6

0x7d8: Push("all")
0x7d9: Push("idle")
0x7da: @ PlayAnimation(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: @ WaitForAnimEnd()
0x7dd: Pop(0)
0x7de: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7df: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7e0: GOTO 0x7e6

0x7e1: Push("all")
0x7e2: Push("idle")
0x7e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x7e4: Pop(2)
0x7e5: GOTO 0x7dc

0x7e6: Return(); Pop(0)

0x7e7: PushEmpty()
0x7e8: PushEmpty(bool)
0x7e9: Call 0xa9d

0x7ea: Pop(0)
0x7eb: Pop(1); Push((bool) Stack[-1] == 0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ed: Return(); Pop(0)

0x7ee: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Return(); Pop(0)

0x7f1: PushEmpty(string)
0x7f2: Stack[-1] = Stack[-2]
0x7f3: Call 0xa3e

0x7f4: Pop(1)
0x7f5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty()
0x7f8: Push((int) 1)
0x7f9: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x7fa: PushEmpty()
0x7fb: Call 0xa50

0x7fc: Pop(0)
0x7fd: Push((int) 12066)
0x7fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x800: PushEmpty(string)
0x801: Stack[-1] = "Neutral"
0x802: Call 0x7e7

0x803: Pop(1)
0x804: Push((int) 10917)
0x805: @@ SetMessage(Stack[-1])
0x806: Pop(1)
0x807: @@ ClearReplies()
0x808: Pop(0)
0x809: Push((int) 10918)
0x80a: Push((int) -1)
0x80b: Push((int) 12067)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Return(); Pop(0)

0x80f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x810: PushEmpty(bool)
0x811: Call 0xa9d

0x812: Pop(0)
0x813: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x814: @ lshStopAnimation()
0x815: Pop(0)
0x816: GOTO 0x819

0x817: @ StopAnimation()
0x818: Pop(0)
0x819: Return(); Pop(0)

0x81a: GOTO 0x7f8

0x81b: Return(); Pop(0)

0x81c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x81d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x81e: PushEmpty(bool, object)
0x81f: Stack[-1] = Stack[-11]
0x820: Call 0xa02

0x821: Pop(1)
0x822: Pop(1); Push((bool) Stack[-1] == 0)
0x823: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x824: Stack[-10] = (int) -2
0x825: Return(); Pop(8)

0x826: @ CreateDialog(Stack[-4])
0x827: Pop(0)
0x828: PushEmpty(int)
0x829: Call 0xa99

0x82a: Pop(0)
0x82b: @@ SetNPCName(Stack[-1])
0x82c: Pop(1)
0x82d: PushEmpty(string)
0x82e: Call 0xa9b

0x82f: Pop(0)
0x830: @@ SetPhoto(Stack[-1])
0x831: Pop(1)
0x832: PushEmpty(int)
0x833: Call 0xc9d

0x834: Pop(0)
0x835: @@ SetPlayerName(Stack[-1])
0x836: Pop(1)
0x837: Stack[-2] = (int) -1
0x838: @ IsOverrideActive(Stack[-3])
0x839: Pop(0)
0x83a: Push(Stack[-3])
0x83b: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x83c: Stack[-10] = (int) -2
0x83d: Return(); Pop(8)

0x83e: @ DoDialog(Stack[-4])
0x83f: Pop(0)
0x840: PushEmpty(object, object)
0x841: Stack[-2] = Stack[-11]
0x842: Stack[-1] = Stack[-6]
0x843: Push(-2, 4); TaskCall(13)
0x844: Call 0x85b

0x845: Pop(-2, 4); TaskReturn
0x846: Pop(2)
0x847: @@ IsDialogEnd(Stack[-1])
0x848: Pop(0)
0x849: Pop(0); Push((bool) Stack[-1] == 0)
0x84a: IF (Stack[-1] == 0) GOTO 0x850; Pop(1)

0x84b: @ sync()
0x84c: Pop(0)
0x84d: @@ IsDialogEnd(Stack[-1])
0x84e: Pop(0)
0x84f: GOTO 0x849

0x850: PushEmpty(object)
0x851: Stack[-1] = Stack[-10]
0x852: Call 0xa3a

0x853: Pop(1)
0x854: @ StopDialog(Stack[-4])
0x855: Pop(0)
0x856: @@ GetReturnValue(Stack[-2])
0x857: Pop(0)
0x858: Stack[-10] = Stack[-2]
0x859: Return(); Pop(8)

0x85a: Stack[-4] = 0
0x85b: PushEmpty()
0x85c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x85d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x85e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x85f: Push((int) 1)
0x860: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x861: PushEmpty(string)
0x862: Stack[-1] = "Neutral"
0x863: Call 0x89a

0x864: Pop(1)
0x865: Push((int) 13312)
0x866: @@ SetMessage(Stack[-1])
0x867: Pop(1)
0x868: @@ ClearReplies()
0x869: Pop(0)
0x86a: PushEmpty(bool, object)
0x86b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86c: Call 0xbcd

0x86d: Pop(1)
0x86e: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x86f: Push((int) 13314)
0x870: Push((int) 14550)
0x871: Push((int) 14549)
0x872: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x873: Pop(3)
0x874: Push((int) 13313)
0x875: Push((int) -1)
0x876: Push((int) 14548)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: GOTO 0x87c

0x87a: Return(); Pop(0)

0x87b: GOTO 0x85f

0x87c: PushEmpty(bool)
0x87d: Call 0xa9d

0x87e: Pop(0)
0x87f: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x880: @ lshWaitForAnimEnd()
0x881: Pop(0)
0x882: Push( Stack[3 + Tasks[-1].StackPointer] )
0x883: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x884: GOTO 0x88a

0x885: PushEmpty(string)
0x886: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x887: Call 0xa3e

0x888: Pop(1)
0x889: GOTO 0x880

0x88a: GOTO 0x899

0x88b: Push("all")
0x88c: Push("idle")
0x88d: @ PlayAnimation(Stack[-2], Stack[-1])
0x88e: Pop(2)
0x88f: @ WaitForAnimEnd()
0x890: Pop(0)
0x891: Push( Stack[3 + Tasks[-1].StackPointer] )
0x892: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x893: GOTO 0x899

0x894: Push("all")
0x895: Push("idle")
0x896: @ PlayAnimation(Stack[-2], Stack[-1])
0x897: Pop(2)
0x898: GOTO 0x88f

0x899: Return(); Pop(0)

0x89a: PushEmpty()
0x89b: PushEmpty(bool)
0x89c: Call 0xa9d

0x89d: Pop(0)
0x89e: Pop(1); Push((bool) Stack[-1] == 0)
0x89f: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x8a0: Return(); Pop(0)

0x8a1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x8a3: Return(); Pop(0)

0x8a4: PushEmpty(string)
0x8a5: Stack[-1] = Stack[-2]
0x8a6: Call 0xa3e

0x8a7: Pop(1)
0x8a8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8a9: Return(); Pop(0)

0x8aa: PushEmpty()
0x8ab: Push((int) 1)
0x8ac: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x8ad: PushEmpty()
0x8ae: Call 0xa50

0x8af: Pop(0)
0x8b0: Push((int) 14570)
0x8b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b3: PushEmpty(object, object)
0x8b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b6: Call 0xafe

0x8b7: Pop(2)
0x8b8: Push((int) 14547)
0x8b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8bb: PushEmpty(string)
0x8bc: Stack[-1] = "Neutral"
0x8bd: Call 0x89a

0x8be: Pop(1)
0x8bf: Push((int) 13312)
0x8c0: @@ SetMessage(Stack[-1])
0x8c1: Pop(1)
0x8c2: @@ ClearReplies()
0x8c3: Pop(0)
0x8c4: PushEmpty(bool, object)
0x8c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c6: Call 0xbcd

0x8c7: Pop(1)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c9: Push((int) 13314)
0x8ca: Push((int) 14550)
0x8cb: Push((int) 14549)
0x8cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(3)
0x8ce: Push((int) 13313)
0x8cf: Push((int) -1)
0x8d0: Push((int) 14548)
0x8d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d2: Pop(3)
0x8d3: Return(); Pop(0)

0x8d4: Push((int) 14550)
0x8d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d6: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8d7: PushEmpty(string)
0x8d8: Stack[-1] = "Neutral"
0x8d9: Call 0x89a

0x8da: Pop(1)
0x8db: Push((int) 13315)
0x8dc: @@ SetMessage(Stack[-1])
0x8dd: Pop(1)
0x8de: @@ ClearReplies()
0x8df: Pop(0)
0x8e0: Push((int) 13317)
0x8e1: Push((int) 14553)
0x8e2: Push((int) 14552)
0x8e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(3)
0x8e5: Push((int) 13316)
0x8e6: Push((int) 14555)
0x8e7: Push((int) 14551)
0x8e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e9: Pop(3)
0x8ea: Return(); Pop(0)

0x8eb: Push((int) 14553)
0x8ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral"
0x8f0: Call 0x89a

0x8f1: Pop(1)
0x8f2: Push((int) 13318)
0x8f3: @@ SetMessage(Stack[-1])
0x8f4: Pop(1)
0x8f5: @@ ClearReplies()
0x8f6: Pop(0)
0x8f7: Push((int) 13319)
0x8f8: Push((int) 14555)
0x8f9: Push((int) 14554)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: Push((int) 14555)
0x8fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ff: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x900: PushEmpty(string)
0x901: Stack[-1] = "Neutral"
0x902: Call 0x89a

0x903: Pop(1)
0x904: Push((int) 13320)
0x905: @@ SetMessage(Stack[-1])
0x906: Pop(1)
0x907: @@ ClearReplies()
0x908: Pop(0)
0x909: Push((int) 13335)
0x90a: Push((int) 14567)
0x90b: Push((int) 14566)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Return(); Pop(0)

0x90f: Push((int) 14567)
0x910: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x911: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x912: PushEmpty(string)
0x913: Stack[-1] = "Neutral"
0x914: Call 0x89a

0x915: Pop(1)
0x916: Push((int) 13336)
0x917: @@ SetMessage(Stack[-1])
0x918: Pop(1)
0x919: @@ ClearReplies()
0x91a: Pop(0)
0x91b: Push((int) 13337)
0x91c: Push((int) 14569)
0x91d: Push((int) 14568)
0x91e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91f: Pop(3)
0x920: Return(); Pop(0)

0x921: Push((int) 14569)
0x922: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x924: PushEmpty(string)
0x925: Stack[-1] = "Neutral"
0x926: Call 0x89a

0x927: Pop(1)
0x928: Push((int) 13338)
0x929: @@ SetMessage(Stack[-1])
0x92a: Pop(1)
0x92b: @@ ClearReplies()
0x92c: Pop(0)
0x92d: Push((int) 13339)
0x92e: Push((int) -1)
0x92f: Push((int) 14570)
0x930: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x931: Pop(3)
0x932: Return(); Pop(0)

0x933: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x934: PushEmpty(bool)
0x935: Call 0xa9d

0x936: Pop(0)
0x937: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x938: @ lshStopAnimation()
0x939: Pop(0)
0x93a: GOTO 0x93d

0x93b: @ StopAnimation()
0x93c: Pop(0)
0x93d: Return(); Pop(0)

0x93e: GOTO 0x8ab

0x93f: Return(); Pop(0)

0x940: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x941: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x942: PushEmpty(bool, object)
0x943: Stack[-1] = Stack[-11]
0x944: Call 0xa02

0x945: Pop(1)
0x946: Pop(1); Push((bool) Stack[-1] == 0)
0x947: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x948: Stack[-10] = (int) -2
0x949: Return(); Pop(8)

0x94a: @ CreateDialog(Stack[-4])
0x94b: Pop(0)
0x94c: PushEmpty(int)
0x94d: Call 0xa99

0x94e: Pop(0)
0x94f: @@ SetNPCName(Stack[-1])
0x950: Pop(1)
0x951: PushEmpty(string)
0x952: Call 0xa9b

0x953: Pop(0)
0x954: @@ SetPhoto(Stack[-1])
0x955: Pop(1)
0x956: PushEmpty(int)
0x957: Call 0xc9d

0x958: Pop(0)
0x959: @@ SetPlayerName(Stack[-1])
0x95a: Pop(1)
0x95b: Stack[-2] = (int) -1
0x95c: @ IsOverrideActive(Stack[-3])
0x95d: Pop(0)
0x95e: Push(Stack[-3])
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-10] = (int) -2
0x961: Return(); Pop(8)

0x962: @ DoDialog(Stack[-4])
0x963: Pop(0)
0x964: PushEmpty(object, object)
0x965: Stack[-2] = Stack[-11]
0x966: Stack[-1] = Stack[-6]
0x967: Push(-2, 4); TaskCall(15)
0x968: Call 0x97f

0x969: Pop(-2, 4); TaskReturn
0x96a: Pop(2)
0x96b: @@ IsDialogEnd(Stack[-1])
0x96c: Pop(0)
0x96d: Pop(0); Push((bool) Stack[-1] == 0)
0x96e: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x96f: @ sync()
0x970: Pop(0)
0x971: @@ IsDialogEnd(Stack[-1])
0x972: Pop(0)
0x973: GOTO 0x96d

0x974: PushEmpty(object)
0x975: Stack[-1] = Stack[-10]
0x976: Call 0xa3a

0x977: Pop(1)
0x978: @ StopDialog(Stack[-4])
0x979: Pop(0)
0x97a: @@ GetReturnValue(Stack[-2])
0x97b: Pop(0)
0x97c: Stack[-10] = Stack[-2]
0x97d: Return(); Pop(8)

0x97e: Stack[-4] = 0
0x97f: PushEmpty()
0x980: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x981: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x982: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x983: Push((int) 1)
0x984: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x985: PushEmpty(string)
0x986: Stack[-1] = "Neutral"
0x987: Call 0x9b4

0x988: Pop(1)
0x989: Push((int) 14084)
0x98a: @@ SetMessage(Stack[-1])
0x98b: Pop(1)
0x98c: @@ ClearReplies()
0x98d: Pop(0)
0x98e: Push((int) 14085)
0x98f: Push((int) -1)
0x990: Push((int) 15322)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: GOTO 0x996

0x994: Return(); Pop(0)

0x995: GOTO 0x983

0x996: PushEmpty(bool)
0x997: Call 0xa9d

0x998: Pop(0)
0x999: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x99a: @ lshWaitForAnimEnd()
0x99b: Pop(0)
0x99c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99d: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99e: GOTO 0x9a4

0x99f: PushEmpty(string)
0x9a0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9a1: Call 0xa3e

0x9a2: Pop(1)
0x9a3: GOTO 0x99a

0x9a4: GOTO 0x9b3

0x9a5: Push("all")
0x9a6: Push("idle")
0x9a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a8: Pop(2)
0x9a9: @ WaitForAnimEnd()
0x9aa: Pop(0)
0x9ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9ac: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ad: GOTO 0x9b3

0x9ae: Push("all")
0x9af: Push("idle")
0x9b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b1: Pop(2)
0x9b2: GOTO 0x9a9

0x9b3: Return(); Pop(0)

0x9b4: PushEmpty()
0x9b5: PushEmpty(bool)
0x9b6: Call 0xa9d

0x9b7: Pop(0)
0x9b8: Pop(1); Push((bool) Stack[-1] == 0)
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9ba: Return(); Pop(0)

0x9bb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bd: Return(); Pop(0)

0x9be: PushEmpty(string)
0x9bf: Stack[-1] = Stack[-2]
0x9c0: Call 0xa3e

0x9c1: Pop(1)
0x9c2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c3: Return(); Pop(0)

0x9c4: PushEmpty()
0x9c5: Push((int) 1)
0x9c6: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9c7: PushEmpty()
0x9c8: Call 0xa50

0x9c9: Pop(0)
0x9ca: Push((int) 15322)
0x9cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9cd: PushEmpty(object, object)
0x9ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d0: Call 0xb30

0x9d1: Pop(2)
0x9d2: Push((int) 15321)
0x9d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9d5: PushEmpty(string)
0x9d6: Stack[-1] = "Neutral"
0x9d7: Call 0x9b4

0x9d8: Pop(1)
0x9d9: Push((int) 14084)
0x9da: @@ SetMessage(Stack[-1])
0x9db: Pop(1)
0x9dc: @@ ClearReplies()
0x9dd: Pop(0)
0x9de: Push((int) 14085)
0x9df: Push((int) -1)
0x9e0: Push((int) 15322)
0x9e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e2: Pop(3)
0x9e3: Return(); Pop(0)

0x9e4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9e5: PushEmpty(bool)
0x9e6: Call 0xa9d

0x9e7: Pop(0)
0x9e8: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9e9: @ lshStopAnimation()
0x9ea: Pop(0)
0x9eb: GOTO 0x9ee

0x9ec: @ StopAnimation()
0x9ed: Pop(0)
0x9ee: Return(); Pop(0)

0x9ef: GOTO 0x9c5

0x9f0: Return(); Pop(0)

0x9f1: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x9f2: @@ GetPosition(Stack[-4])
0x9f3: Pop(0)
0x9f4: @ GetPosition(Stack[-3])
0x9f5: Pop(0)
0x9f6: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x9f7: Push(CvectorIndex(Stack[-2], 0))
0x9f8: Push(CvectorIndex(Stack[-3], 2))
0x9f9: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9fa: Pop(2)
0x9fb: Stack[-10] = Stack[-1]
0x9fc: Return(); Pop(8)

0x9fd: PushEmpty(bool, bool)
0x9fe: @ IsLoaded(Stack[-1])
0x9ff: Pop(0)
0xa00: Stack[-3] = Stack[-1]
0xa01: Return(); Pop(2)

0xa02: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xa03: @@ GetPosition(Stack[-7])
0xa04: Pop(0)
0xa05: @@ GetEyesHeight(Stack[-8])
0xa06: Pop(0)
0xa07: Push(CvectorIndex(Stack[-7], 1))
0xa08: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xa09: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa0a: @ GetPosition(Stack[-6])
0xa0b: Pop(0)
0xa0c: @ GetEyesHeight(Stack[-8])
0xa0d: Pop(0)
0xa0e: Push(CvectorIndex(Stack[-6], 1))
0xa0f: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xa10: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa11: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xa12: Push(CvectorIndex(Stack[-5], 1))
0xa13: Stack[-1] = (int) 0
0xa14: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xa15: Pop(0); Push(Stack[-5] | Stack[-5]);
0xa16: Pop(1); Push(Sqrt(Stack[-1]))
0xa17: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xa18: Stack[-4] = -Stack[-5]; Pop(0);
0xa19: Push((int) 70)
0xa1a: Pop(1); Push(Stack[-6] * Stack[-1]);
0xa1b: PushEmpty(cvector, cvector)
0xa1c: Push(CVector(0.0, 1.0, 0.0))
0xa1d: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xa1e: Call 0xa57

0xa1f: Pop(1)
0xa20: Push((int) 25)
0xa21: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa22: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa23: Push(CVector(0.0, 10.0, 0.0))
0xa24: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xa25: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xa26: @ IsOverrideActive(Stack[-1])
0xa27: Pop(0)
0xa28: Push(Stack[-1])
0xa29: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa2a: Stack[-18] = (bool) 0
0xa2b: Return(); Pop(16)

0xa2c: @ StopWorld()
0xa2d: Pop(0)
0xa2e: @ CameraTransit(Stack[-2], Stack[-4])
0xa2f: Pop(0)
0xa30: Push(CvectorIndex(Stack[-3], 0))
0xa31: Push(CvectorIndex(Stack[-4], 2))
0xa32: @ Rotate(Stack[-2], Stack[-1])
0xa33: Pop(2)
0xa34: @ CameraWaitForPlayFinish()
0xa35: Pop(0)
0xa36: @ ResumeWorld()
0xa37: Pop(0)
0xa38: Stack[-18] = (bool) 1
0xa39: Return(); Pop(16)

0xa3a: PushEmpty()
0xa3b: @ CameraSwitchToNormal()
0xa3c: Pop(0)
0xa3d: Return(); Pop(0)

0xa3e: PushEmpty(float, float, float, float)
0xa3f: Push("playing ")
0xa40: Pop(1); Push(Stack[-1] + Stack[-6]);
0xa41: @ Trace(Stack[-1])
0xa42: Pop(1)
0xa43: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xa44: Pop(0)
0xa45: @ lshPlayAnimation(Stack[-2], Stack[-1])
0xa46: Pop(0)
0xa47: Push("start: ")
0xa48: Pop(1); Push(Stack[-1] + Stack[-3]);
0xa49: @ Trace(Stack[-1])
0xa4a: Pop(1)
0xa4b: Push("end: ")
0xa4c: Pop(1); Push(Stack[-1] + Stack[-2]);
0xa4d: @ Trace(Stack[-1])
0xa4e: Pop(1)
0xa4f: Return(); Pop(4)

0xa50: PushEmpty(bool)
0xa51: Call 0xa9d

0xa52: Pop(0)
0xa53: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa54: @ lshStopSpeech()
0xa55: Pop(0)
0xa56: Return(); Pop(0)

0xa57: PushEmpty(float, float)
0xa58: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa59: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa5a: Push((float)0.0)
0xa5b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa5d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa5e: Return(); Pop(2)

0xa5f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa60: Return(); Pop(2)

0xa61: PushEmpty(int, int)
0xa62: @ GetVariable(Stack[-3], Stack[-1])
0xa63: Pop(0)
0xa64: Stack[-4] = Stack[-1]
0xa65: Return(); Pop(2)

0xa66: PushEmpty(object, object, object, object)
0xa67: @ GetMainOutdoorScene(Stack[-2])
0xa68: Pop(0)
0xa69: Push(".bin")
0xa6a: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa6b: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xa6c: Pop(1)
0xa6d: Stack[-6] = Stack[-1]
0xa6e: Return(); Pop(4)

0xa6f: Stack[-1] = 0
0xa70: Stack[-2] = 0
0xa71: PushEmpty(object, object)
0xa72: @ FindActor(Stack[-1], Stack[-4])
0xa73: Pop(0)
0xa74: Pop(0); Push((bool) Stack[-1] == 0)
0xa75: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa76: Stack[-5] = (bool) 0
0xa77: Return(); Pop(2)

0xa78: @ Trigger(Stack[-1], Stack[-3])
0xa79: Pop(0)
0xa7a: Stack[-5] = (bool) 1
0xa7b: Return(); Pop(2)

0xa7c: Stack[-1] = 0
0xa7d: PushEmpty(float, float)
0xa7e: @ GetGameTime(Stack[-1])
0xa7f: Pop(0)
0xa80: Stack[-3] = Stack[-1]
0xa81: Return(); Pop(2)

0xa82: PushEmpty(float, float)
0xa83: @ GetGameTime(Stack[-1])
0xa84: Pop(0)
0xa85: Push((int) 1)
0xa86: PushEmpty(int)
0xa87: Push((int) 24)
0xa88: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa89: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa8a: Return(); Pop(2)

0xa8b: PushEmpty(float, float)
0xa8c: @ GetGameTime(Stack[-1])
0xa8d: Pop(0)
0xa8e: PushEmpty(int)
0xa8f: Stack[-1] = Stack[-2]
0xa90: Push((int) 24)
0xa91: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xa92: Return(); Pop(2)

0xa93: PushEmpty()
0xa94: PushEmpty(int)
0xa95: Call 0xa82

0xa96: Pop(0)
0xa97: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa98: Return(); Pop(0)

0xa99: Stack[-1] = (int) 2869
0xa9a: Return(); Pop(0)

0xa9b: Stack[-1] = "ui/NPC_Mark.png"
0xa9c: Return(); Pop(0)

0xa9d: Stack[-1] = (bool) 1
0xa9e: Return(); Pop(0)

0xa9f: PushEmpty()
0xaa0: Push("ood1Mark1")
0xaa1: Push((int) 1)
0xaa2: @ SetVariable(Stack[-2], Stack[-1])
0xaa3: Pop(2)
0xaa4: Return(); Pop(0)

0xaa5: PushEmpty()
0xaa6: Push("ood1Mark2")
0xaa7: Push((int) 1)
0xaa8: @ SetVariable(Stack[-2], Stack[-1])
0xaa9: Pop(2)
0xaaa: Return(); Pop(0)

0xaab: PushEmpty()
0xaac: Push("ood1Mark3")
0xaad: Push((int) 1)
0xaae: @ SetVariable(Stack[-2], Stack[-1])
0xaaf: Pop(2)
0xab0: Return(); Pop(0)

0xab1: PushEmpty(object, object)
0xab2: PushEmpty(object)
0xab3: Call 0xc6b

0xab4: Stack[-2] = Stack[-1]
0xab5: Pop(1)
0xab6: Push("d1q01MarkAboutJulia")
0xab7: Push("pt_map_julia")
0xab8: Push((int) 1)
0xab9: Push((int) 8647)
0xaba: PushEmpty(float)
0xabb: Call 0xa7d

0xabc: Pop(0)
0xabd: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xabe: Pop(5)
0xabf: Push("d1q01MarkAboutLara")
0xac0: Push("pt_map_lara")
0xac1: Push((int) 1)
0xac2: Push((int) 8646)
0xac3: PushEmpty(float)
0xac4: Call 0xa7d

0xac5: Pop(0)
0xac6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xac7: Pop(5)
0xac8: Return(); Pop(2)

0xac9: Stack[-1] = 0
0xaca: PushEmpty()
0xacb: PushEmpty(object, string, float)
0xacc: PushEmpty(object)
0xacd: Call 0xc6b

0xace: Stack[-4] = Stack[-1]
0xacf: Pop(1)
0xad0: Stack[-2] = "pt_map_julia"
0xad1: Stack[-1] = (int) 2
0xad2: Call 0xc7c

0xad3: Pop(3)
0xad4: PushEmpty(object)
0xad5: Call 0xc6b

0xad6: Pop(0)
0xad7: @@ ShowMap(Stack[-1])
0xad8: Pop(1)
0xad9: Return(); Pop(0)

0xada: PushEmpty()
0xadb: Push("ood1Mark4")
0xadc: Push((int) 1)
0xadd: @ SetVariable(Stack[-2], Stack[-1])
0xade: Pop(2)
0xadf: Return(); Pop(0)

0xae0: PushEmpty()
0xae1: Push("ood1Mark5")
0xae2: Push((int) 1)
0xae3: @ SetVariable(Stack[-2], Stack[-1])
0xae4: Pop(2)
0xae5: Return(); Pop(0)

0xae6: PushEmpty()
0xae7: Push("ood1Mark6")
0xae8: Push((int) 1)
0xae9: @ SetVariable(Stack[-2], Stack[-1])
0xaea: Pop(2)
0xaeb: Return(); Pop(0)

0xaec: PushEmpty()
0xaed: Push("ood1Mark7")
0xaee: Push((int) 1)
0xaef: @ SetVariable(Stack[-2], Stack[-1])
0xaf0: Pop(2)
0xaf1: Return(); Pop(0)

0xaf2: PushEmpty()
0xaf3: Push("ood1Mark8")
0xaf4: Push((int) 1)
0xaf5: @ SetVariable(Stack[-2], Stack[-1])
0xaf6: Pop(2)
0xaf7: Return(); Pop(0)

0xaf8: PushEmpty()
0xaf9: Push("KnowJulia")
0xafa: Push((int) 1)
0xafb: @ SetVariable(Stack[-2], Stack[-1])
0xafc: Pop(2)
0xafd: Return(); Pop(0)

0xafe: PushEmpty(object, object)
0xaff: Push("d7q02")
0xb00: Push((int) 1)
0xb01: @ SetVariable(Stack[-2], Stack[-1])
0xb02: Pop(2)
0xb03: PushEmpty(object)
0xb04: Call 0xc6b

0xb05: Stack[-2] = Stack[-1]
0xb06: Pop(1)
0xb07: Push("d7q02MarkGotoCemetery")
0xb08: Push("pt_d7q02_corpse")
0xb09: Push((int) 0)
0xb0a: Push((int) 15427)
0xb0b: PushEmpty(float)
0xb0c: Call 0xa7d

0xb0d: Pop(0)
0xb0e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb0f: Pop(5)
0xb10: Push("d7q02MarkGotoAlexandr")
0xb11: Push("pt_map_alexandr")
0xb12: Push((int) 0)
0xb13: Push((int) 15428)
0xb14: PushEmpty(float)
0xb15: Call 0xa7d

0xb16: Pop(0)
0xb17: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb18: Pop(5)
0xb19: PushEmpty()
0xb1a: Call 0xcae

0xb1b: Pop(0)
0xb1c: PushEmpty()
0xb1d: Call 0xcbe

0xb1e: Pop(0)
0xb1f: PushEmpty(object, string)
0xb20: Stack[-1] = "quest_d7_02"
0xb21: Call 0xa66

0xb22: Pop(2)
0xb23: PushEmpty(bool, string, string)
0xb24: Stack[-2] = "quest_d7_02"
0xb25: Stack[-1] = "place_corpse"
0xb26: Call 0xa71

0xb27: Pop(3)
0xb28: Return(); Pop(2)

0xb29: Stack[-1] = 0
0xb2a: PushEmpty()
0xb2b: Push("KnowLara")
0xb2c: Push((int) 1)
0xb2d: @ SetVariable(Stack[-2], Stack[-1])
0xb2e: Pop(2)
0xb2f: Return(); Pop(0)

0xb30: PushEmpty()
0xb31: Push((int) 1000)
0xb32: @@ SetReturnValue(Stack[-1])
0xb33: Pop(1)
0xb34: Return(); Pop(0)

0xb35: PushEmpty()
0xb36: Push("KnowMark")
0xb37: Push((int) 1)
0xb38: @ SetVariable(Stack[-2], Stack[-1])
0xb39: Pop(2)
0xb3a: Return(); Pop(0)

0xb3b: PushEmpty()
0xb3c: Push("ood3Mark1")
0xb3d: Push((int) 1)
0xb3e: @ SetVariable(Stack[-2], Stack[-1])
0xb3f: Pop(2)
0xb40: Return(); Pop(0)

0xb41: PushEmpty()
0xb42: PushEmpty(int, string)
0xb43: Stack[-1] = "ood1Mark1"
0xb44: Call 0xa61

0xb45: Pop(1)
0xb46: Push((int) 0)
0xb47: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb49: Stack[-2] = (bool) 1
0xb4a: Return(); Pop(0)

0xb4b: Stack[-2] = (bool) 0
0xb4c: Return(); Pop(0)

0xb4d: PushEmpty()
0xb4e: PushEmpty(int, string)
0xb4f: Stack[-1] = "ood1Mark2"
0xb50: Call 0xa61

0xb51: Pop(1)
0xb52: Push((int) 0)
0xb53: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb54: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb55: Stack[-2] = (bool) 1
0xb56: Return(); Pop(0)

0xb57: Stack[-2] = (bool) 0
0xb58: Return(); Pop(0)

0xb59: PushEmpty()
0xb5a: PushEmpty(int, string)
0xb5b: Stack[-1] = "ood1Mark3"
0xb5c: Call 0xa61

0xb5d: Pop(1)
0xb5e: Push((int) 0)
0xb5f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb61: Stack[-2] = (bool) 1
0xb62: Return(); Pop(0)

0xb63: Stack[-2] = (bool) 0
0xb64: Return(); Pop(0)

0xb65: PushEmpty()
0xb66: PushEmpty(int, string)
0xb67: Stack[-1] = "d1q01"
0xb68: Call 0xa61

0xb69: Pop(1)
0xb6a: Push((int) 0)
0xb6b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb6c: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6d: Stack[-2] = (bool) 1
0xb6e: Return(); Pop(0)

0xb6f: Stack[-2] = (bool) 0
0xb70: Return(); Pop(0)

0xb71: PushEmpty()
0xb72: PushEmpty(int, string)
0xb73: Stack[-1] = "d1q01FirstGeorgVisit"
0xb74: Call 0xa61

0xb75: Pop(1)
0xb76: Push((int) 1)
0xb77: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb78: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb79: Stack[-2] = (bool) 1
0xb7a: Return(); Pop(0)

0xb7b: Stack[-2] = (bool) 0
0xb7c: Return(); Pop(0)

0xb7d: PushEmpty()
0xb7e: PushEmpty(int, string)
0xb7f: Stack[-1] = "ood1Mark4"
0xb80: Call 0xa61

0xb81: Pop(1)
0xb82: Push((int) 0)
0xb83: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb84: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb85: Stack[-2] = (bool) 1
0xb86: Return(); Pop(0)

0xb87: Stack[-2] = (bool) 0
0xb88: Return(); Pop(0)

0xb89: PushEmpty()
0xb8a: PushEmpty(int, string)
0xb8b: Stack[-1] = "ood1Mark5"
0xb8c: Call 0xa61

0xb8d: Pop(1)
0xb8e: Push((int) 0)
0xb8f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb90: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb91: Stack[-2] = (bool) 1
0xb92: Return(); Pop(0)

0xb93: Stack[-2] = (bool) 0
0xb94: Return(); Pop(0)

0xb95: PushEmpty()
0xb96: PushEmpty(int, string)
0xb97: Stack[-1] = "ood1Mark6"
0xb98: Call 0xa61

0xb99: Pop(1)
0xb9a: Push((int) 0)
0xb9b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb9c: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9d: Stack[-2] = (bool) 1
0xb9e: Return(); Pop(0)

0xb9f: Stack[-2] = (bool) 0
0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: PushEmpty(int, string)
0xba3: Stack[-1] = "ood1Mark7"
0xba4: Call 0xa61

0xba5: Pop(1)
0xba6: Push((int) 0)
0xba7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xba8: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xba9: Stack[-2] = (bool) 1
0xbaa: Return(); Pop(0)

0xbab: Stack[-2] = (bool) 0
0xbac: Return(); Pop(0)

0xbad: PushEmpty()
0xbae: PushEmpty(int, string)
0xbaf: Stack[-1] = "ood1Mark8"
0xbb0: Call 0xa61

0xbb1: Pop(1)
0xbb2: Push((int) 0)
0xbb3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb5: Stack[-2] = (bool) 1
0xbb6: Return(); Pop(0)

0xbb7: Stack[-2] = (bool) 0
0xbb8: Return(); Pop(0)

0xbb9: PushEmpty()
0xbba: PushEmpty(bool, object)
0xbbb: Stack[-1] = Stack[-3]
0xbbc: Call 0xc21

0xbbd: Pop(1)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbbf: Stack[-2] = (bool) 1
0xbc0: Return(); Pop(0)

0xbc1: Stack[-2] = (bool) 0
0xbc2: Return(); Pop(0)

0xbc3: PushEmpty()
0xbc4: PushEmpty(bool, object)
0xbc5: Stack[-1] = Stack[-3]
0xbc6: Call 0xc2c

0xbc7: Pop(1)
0xbc8: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc9: Stack[-2] = (bool) 1
0xbca: Return(); Pop(0)

0xbcb: Stack[-2] = (bool) 0
0xbcc: Return(); Pop(0)

0xbcd: PushEmpty()
0xbce: PushEmpty(int, string)
0xbcf: Stack[-1] = "d7q02"
0xbd0: Call 0xa61

0xbd1: Pop(1)
0xbd2: Push((int) 0)
0xbd3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbd7; Pop(1)

0xbd5: Stack[-2] = (bool) 1
0xbd6: Return(); Pop(0)

0xbd7: Stack[-2] = (bool) 0
0xbd8: Return(); Pop(0)

0xbd9: PushEmpty()
0xbda: PushEmpty(int, string)
0xbdb: Stack[-1] = "KnowEva"
0xbdc: Call 0xa61

0xbdd: Pop(1)
0xbde: Push((int) 1)
0xbdf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe1: Stack[-2] = (bool) 1
0xbe2: Return(); Pop(0)

0xbe3: Stack[-2] = (bool) 0
0xbe4: Return(); Pop(0)

0xbe5: PushEmpty()
0xbe6: PushEmpty(int, string)
0xbe7: Stack[-1] = "KnowJulia"
0xbe8: Call 0xa61

0xbe9: Pop(1)
0xbea: Push((int) 1)
0xbeb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbec: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbed: Stack[-2] = (bool) 1
0xbee: Return(); Pop(0)

0xbef: Stack[-2] = (bool) 0
0xbf0: Return(); Pop(0)

0xbf1: PushEmpty()
0xbf2: PushEmpty(int, string)
0xbf3: Stack[-1] = "KnowMaria"
0xbf4: Call 0xa61

0xbf5: Pop(1)
0xbf6: Push((int) 1)
0xbf7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf8: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbf9: Stack[-2] = (bool) 1
0xbfa: Return(); Pop(0)

0xbfb: Stack[-2] = (bool) 0
0xbfc: Return(); Pop(0)

0xbfd: PushEmpty()
0xbfe: PushEmpty(int, string)
0xbff: Stack[-1] = "ood3Mark1"
0xc00: Call 0xa61

0xc01: Pop(1)
0xc02: Push((int) 0)
0xc03: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc05: Stack[-2] = (bool) 1
0xc06: Return(); Pop(0)

0xc07: Stack[-2] = (bool) 0
0xc08: Return(); Pop(0)

0xc09: PushEmpty()
0xc0a: PushEmpty(int, string)
0xc0b: Stack[-1] = "KnowKapella"
0xc0c: Call 0xa61

0xc0d: Pop(1)
0xc0e: Push((int) 1)
0xc0f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc10: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc11: Stack[-2] = (bool) 1
0xc12: Return(); Pop(0)

0xc13: Stack[-2] = (bool) 0
0xc14: Return(); Pop(0)

0xc15: PushEmpty()
0xc16: PushEmpty(int, string)
0xc17: Stack[-1] = "KnowMyth"
0xc18: Call 0xa61

0xc19: Pop(1)
0xc1a: Push((int) 1)
0xc1b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc1c: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc1d: Stack[-2] = (bool) 1
0xc1e: Return(); Pop(0)

0xc1f: Stack[-2] = (bool) 0
0xc20: Return(); Pop(0)

0xc21: PushEmpty()
0xc22: PushEmpty(int)
0xc23: Call 0xa8b

0xc24: Pop(0)
0xc25: Push((int) 18)
0xc26: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc28: Stack[-2] = (bool) 1
0xc29: Return(); Pop(0)

0xc2a: Stack[-2] = (bool) 0
0xc2b: Return(); Pop(0)

0xc2c: PushEmpty()
0xc2d: PushEmpty(bool)
0xc2e: Stack[-1] = (bool) 0
0xc2f: PushEmpty(int)
0xc30: Call 0xa8b

0xc31: Pop(0)
0xc32: Push((int) 12)
0xc33: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc34: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc35: PushEmpty(int)
0xc36: Call 0xa8b

0xc37: Pop(0)
0xc38: Push((int) 18)
0xc39: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc3a: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc3b: Stack[-1] = (bool) 1
0xc3c: IF (Stack[-1] == 0) GOTO 0xc3f; Pop(1)

0xc3d: Stack[-2] = (bool) 1
0xc3e: Return(); Pop(0)

0xc3f: Stack[-2] = (bool) 0
0xc40: Return(); Pop(0)

0xc41: PushEmpty(object, object)
0xc42: @ GetDiaryRoot(Stack[-1])
0xc43: Pop(0)
0xc44: Pop(0); Push((bool) Stack[-1] == 0)
0xc45: IF (Stack[-1] == 0) GOTO 0xc4b; Pop(1)

0xc46: Push("Can't retrieve diary root")
0xc47: @ Trace(Stack[-1])
0xc48: Pop(1)
0xc49: Stack[-3] = (bool) 0
0xc4a: Return(); Pop(2)

0xc4b: Stack[-3] = Stack[-1]
0xc4c: Return(); Pop(2)

0xc4d: Stack[-1] = 0
0xc4e: PushEmpty(object, object, int, object, object, int)
0xc4f: PushEmpty(object)
0xc50: Call 0xc41

0xc51: Stack[-4] = Stack[-1]
0xc52: Pop(1)
0xc53: @@ Find(Stack[-7], Stack[-2])
0xc54: Pop(0)
0xc55: Pop(0); Push((bool) Stack[-2] == 0)
0xc56: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc57: Push("Can't find diary parent with id: ")
0xc58: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc59: @ Trace(Stack[-1])
0xc5a: Pop(1)
0xc5b: Stack[-9] = (bool) 0
0xc5c: Return(); Pop(6)

0xc5d: @@ AddChild(Stack[-8])
0xc5e: Pop(0)
0xc5f: Push("player_diary")
0xc60: Push((int) 1)
0xc61: @ SetVariable(Stack[-2], Stack[-1])
0xc62: Pop(2)
0xc63: @@ GetCategory(Stack[-1])
0xc64: Pop(0)
0xc65: @ SetDiarySection(Stack[-1])
0xc66: Pop(0)
0xc67: Stack[-9] = (bool) 0
0xc68: Return(); Pop(6)

0xc69: Stack[-2] = 0
0xc6a: Stack[-3] = 0
0xc6b: PushEmpty(object, object, object, object)
0xc6c: @ GetMainOutdoorScene(Stack[-2])
0xc6d: Pop(0)
0xc6e: Pop(0); Push((bool) Stack[-2] == 0)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc70: Push("Can't find main outdoor scene")
0xc71: @ Trace(Stack[-1])
0xc72: Pop(1)
0xc73: Stack[-1] = 0
0xc74: Stack[-5] = Stack[-1]
0xc75: Return(); Pop(4)

0xc76: @@ GetMap(Stack[-1])
0xc77: Pop(0)
0xc78: Stack[-5] = Stack[-1]
0xc79: Return(); Pop(4)

0xc7a: Stack[-1] = 0
0xc7b: Stack[-2] = 0
0xc7c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xc7d: @ GetMainOutdoorScene(Stack[-2])
0xc7e: Pop(0)
0xc7f: Pop(0); Push((bool) Stack[-2] == 0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc81: Push("Can't find main outdoor scene")
0xc82: @ Trace(Stack[-1])
0xc83: Pop(1)
0xc84: Return(); Pop(8)

0xc85: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xc86: Pop(0)
0xc87: Pop(0); Push((bool) Stack[-1] == 0)
0xc88: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc89: Push("Warning: outdoor scene locator ")
0xc8a: Pop(1); Push(Stack[-1] + Stack[-11]);
0xc8b: Push(" doesnt exist")
0xc8c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc8d: @ Trace(Stack[-1])
0xc8e: Pop(1)
0xc8f: @@ GetMap(Stack[-11])
0xc90: Pop(0)
0xc91: Pop(0); Push((bool) Stack[-11] == 0)
0xc92: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc93: Push("Can't find map")
0xc94: @ Trace(Stack[-1])
0xc95: Pop(1)
0xc96: Return(); Pop(8)

0xc97: Push(CvectorIndex(Stack[-4], 0))
0xc98: Push(CvectorIndex(Stack[-5], 2))
0xc99: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xc9a: Pop(2)
0xc9b: Return(); Pop(8)

0xc9c: Stack[-2] = 0
0xc9d: PushEmpty(int, int)
0xc9e: Push("player")
0xc9f: @ GetVariable(Stack[-1], Stack[-2])
0xca0: Pop(1)
0xca1: Push((int) 0)
0xca2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca3: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca4: Stack[-3] = (int) 200001
0xca5: Return(); Pop(2)

0xca6: GOTO 0xcac

0xca7: Push((int) 1)
0xca8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xcaa: Stack[-3] = (int) 200002
0xcab: Return(); Pop(2)

0xcac: Stack[-3] = (int) 200003
0xcad: Return(); Pop(2)

0xcae: PushEmpty(object, object)
0xcaf: Push("Adding diary entry")
0xcb0: @ Trace(Stack[-1])
0xcb1: Pop(1)
0xcb2: Push((int) 170)
0xcb3: Push((int) 0)
0xcb4: Push((int) 15422)
0xcb5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb6: Pop(3)
0xcb7: PushEmpty(bool, object, int)
0xcb8: Stack[-2] = Stack[-4]
0xcb9: Stack[-1] = (int) -1
0xcba: Call 0xc4e

0xcbb: Pop(3)
0xcbc: Return(); Pop(2)

0xcbd: Stack[-1] = 0
0xcbe: PushEmpty(object, object)
0xcbf: Push("Adding diary entry")
0xcc0: @ Trace(Stack[-1])
0xcc1: Pop(1)
0xcc2: Push((int) 171)
0xcc3: Push((int) 0)
0xcc4: Push((int) 15423)
0xcc5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc6: Pop(3)
0xcc7: PushEmpty(bool, object, int)
0xcc8: Stack[-2] = Stack[-4]
0xcc9: Stack[-1] = (int) 170
0xcca: Call 0xc4e

0xccb: Pop(3)
0xccc: Return(); Pop(2)

0xccd: Stack[-1] = 0
0xcce: PushEmpty(int, int)
0xccf: Push(GlobalVars[1])
0xcd0: Stack[-1] = (bool) 0
0xcd1: GlobalVars[1] = Stack[-1]; Pop(1)
0xcd2: Stack[-1] = (int) 1
0xcd3: Push((int) 12)
0xcd4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcd5: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcd6: Push("Performance")
0xcd7: Pop(1); Push(Stack[-1] + Stack[-2]);
0xcd8: Push((int) 0)
0xcd9: @ SetVariable(Stack[-2], Stack[-1])
0xcda: Pop(2)
0xcdb: Push((int) 1)
0xcdc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xcdd: GOTO 0xcd3

0xcde: Return(); Pop(2)

0xcdf: PushEmpty(int, int)
0xce0: PushEmpty(int)
0xce1: Call 0xa82

0xce2: Stack[-2] = Stack[-1]
0xce3: Pop(1)
0xce4: PushEmpty(int)
0xce5: Call 0xa8b

0xce6: Pop(0)
0xce7: Push((int) 6)
0xce8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xce9: IF (Stack[-1] == 0) GOTO 0xcec; Pop(1)

0xcea: Push((int) 1)
0xceb: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xcec: Stack[-3] = Stack[-1]
0xced: Return(); Pop(2)

0xcee: PushEmpty(int, int, int, int)
0xcef: PushEmpty(bool)
0xcf0: Stack[-1] = (bool) 1
0xcf1: PushEmpty(int)
0xcf2: Call 0xa8b

0xcf3: Pop(0)
0xcf4: Push((int) 23)
0xcf5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xcf6: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcf7: PushEmpty(int)
0xcf8: Call 0xa8b

0xcf9: Pop(0)
0xcfa: Push((int) 6)
0xcfb: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xcfc: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcfd: Stack[-1] = (bool) 0
0xcfe: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xcff: PushEmpty(int)
0xd00: Call 0xcdf

0xd01: Stack[-3] = Stack[-1]
0xd02: Pop(1)
0xd03: Push("Performance")
0xd04: Pop(1); Push(Stack[-1] + Stack[-3]);
0xd05: @ GetVariable(Stack[-1], Stack[-2])
0xd06: Pop(1)
0xd07: Push((int) 0)
0xd08: Stack[-6] = Stack[-2] == Stack[-1]; Pop(1);
0xd09: Return(); Pop(4)

0xd0a: Stack[-5] = (bool) 0
0xd0b: Return(); Pop(4)

0xd0c: PushEmpty(int, int, int, int)
0xd0d: PushEmpty(int)
0xd0e: Call 0xcdf

0xd0f: Stack[-3] = Stack[-1]
0xd10: Pop(1)
0xd11: Push("Performance")
0xd12: Pop(1); Push(Stack[-1] + Stack[-3]);
0xd13: Push((int) 1)
0xd14: @ SetVariable(Stack[-2], Stack[-1])
0xd15: Pop(2)
0xd16: Return(); Pop(4)

0xd17: PushEmpty()
0xd18: Push(GlobalVars[1])
0xd19: Pop(1); Push((bool) Stack[-1] == 0)
0xd1a: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd1b: PushEmpty(int, object)
0xd1c: Stack[-1] = Stack[-3]
0xd1d: Push(-2, 1); TaskCall(2)
0xd1e: Call 0x31

0xd1f: Pop(-2, 1); TaskReturn
0xd20: Pop(2)
0xd21: Push(GlobalVars[1])
0xd22: Stack[-1] = (bool) 1
0xd23: GlobalVars[1] = Stack[-1]; Pop(1)
0xd24: PushEmpty(bool)
0xd25: Call 0xcee

0xd26: Pop(0)
0xd27: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd28: PushEmpty(int, object)
0xd29: Stack[-1] = Stack[-3]
0xd2a: Push(-2, 1); TaskCall(14)
0xd2b: Call 0x940

0xd2c: Pop(-2, 1); TaskReturn
0xd2d: Pop(2)
0xd2e: Push("NightMasks")
0xd2f: PushEmpty(int)
0xd30: Call 0xcdf

0xd31: Pop(0)
0xd32: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd33: Push(".wmv")
0xd34: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd35: @ PlayMovie(Stack[-1])
0xd36: Pop(1)
0xd37: PushEmpty()
0xd38: Call 0xd0c

0xd39: Pop(0)
0xd3a: Return(); Pop(0)

0xd3b: PushEmpty(bool, int)
0xd3c: Stack[-1] = (int) 1
0xd3d: Call 0xa93

0xd3e: Pop(1)
0xd3f: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd40: PushEmpty(int, object)
0xd41: Stack[-1] = Stack[-3]
0xd42: Push(-2, 1); TaskCall(4)
0xd43: Call 0x14a

0xd44: Pop(-2, 1); TaskReturn
0xd45: Pop(2)
0xd46: Return(); Pop(0)

0xd47: PushEmpty(bool, int)
0xd48: Stack[-1] = (int) 2
0xd49: Call 0xa93

0xd4a: Pop(1)
0xd4b: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd4c: PushEmpty(int, object)
0xd4d: Stack[-1] = Stack[-3]
0xd4e: Push(-2, 1); TaskCall(6)
0xd4f: Call 0x568

0xd50: Pop(-2, 1); TaskReturn
0xd51: Pop(2)
0xd52: Return(); Pop(0)

0xd53: PushEmpty(bool, int)
0xd54: Stack[-1] = (int) 3
0xd55: Call 0xa93

0xd56: Pop(1)
0xd57: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd58: PushEmpty(int, object)
0xd59: Stack[-1] = Stack[-3]
0xd5a: Push(-2, 1); TaskCall(8)
0xd5b: Call 0x65b

0xd5c: Pop(-2, 1); TaskReturn
0xd5d: Pop(2)
0xd5e: Return(); Pop(0)

0xd5f: PushEmpty(bool, int)
0xd60: Stack[-1] = (int) 4
0xd61: Call 0xa93

0xd62: Pop(1)
0xd63: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd64: PushEmpty(int, object)
0xd65: Stack[-1] = Stack[-3]
0xd66: Push(-2, 1); TaskCall(10)
0xd67: Call 0x773

0xd68: Pop(-2, 1); TaskReturn
0xd69: Pop(2)
0xd6a: Return(); Pop(0)

0xd6b: PushEmpty(bool, int)
0xd6c: Stack[-1] = (int) 7
0xd6d: Call 0xa93

0xd6e: Pop(1)
0xd6f: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd70: PushEmpty(int, object)
0xd71: Stack[-1] = Stack[-3]
0xd72: Push(-2, 1); TaskCall(12)
0xd73: Call 0x81c

0xd74: Pop(-2, 1); TaskReturn
0xd75: Pop(2)
0xd76: Return(); Pop(0)

0xd77: Return(); Pop(0)

