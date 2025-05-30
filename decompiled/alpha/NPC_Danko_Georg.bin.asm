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
	ui/NPC_Georg.png
	d1q01
	d1GeorgInfo
	pt_map_georg
	AddMark
	d1GeorgGotoViktor
	pt_map_viktor
	d1q01EvaAboutMark
	FindMark
	Remove
	d1q01EvaGotoSimon
	d1q01GrifAboutRubin
	d1q01MarkAboutJulia
	d1q01MarkAboutLara
	d1q01NotkinAboutRubin
	d1q01TeloNedostupno
	d1q01FirstGeorgVisit
	playsound
	givemoney
	ood2Georg1
	ood2Georg2
	d2q01GeorgVisit
	ood1Georg4
	KnowGorny
	d1GeorgAboutAlexandr
	pt_map_alexandr
	d1GeorgAboutBigVlad
	pt_map_bigvlad
	mapmark
	pt_map_mishka
	ShowMap
	d3q01
	d3q01GeorgAgreedSelf
	d3q01GeorgAgreed
	ood3Georg1
	ood1GeorgMQ1
	KnowViktor
	ood3Georg2
	d3q02
	d3q02GeorgGotoMishka
	d3q02GeorgSelf
	d3q02GeorgGotoViktor
	quest_d3_02
	money3000 is given
	completed
	ood3Georg3
	ood1Georg1
	ood1Georg2
	ood1Georg3
	KnowRubin
	KnowSaburivClan
	KnowOlgimskiClan
	KnowKainClan
	KnowGeorg
	ood6Georg1
	ood6Georg2
	ood6Georg3
	ood8Georg1
	d3GeorgVisit
	d2q01
	KnowBurahDead
	d3RubinToldWhereIsSimon
	d3q02SeeCorpse
	d6q01
	d6RubinGoesToGeorg
	d8KainIsReason
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
		EVENT_11 Op = 0xfa Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2f7 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x625 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa82 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd15 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10c9 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x15f2

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x11a1

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
0x15: Call 0x11e2

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
0x26: Call 0x15f6

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1195

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x11a6

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x123e

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x1240

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x15a1

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
0x67: Call 0x11de

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
0x75: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral"
0x78: Call 0xea

0x79: Pop(1)
0x7a: Push((int) 12009)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: PushEmpty(bool)
0x80: Stack[-1] = (bool) 0
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call 0x1501

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call 0x150d

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 1
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 12010)
0x8e: Push((int) 13230)
0x8f: Push((int) 13228)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: PushEmpty(bool)
0x93: Stack[-1] = (bool) 0
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: PushEmpty(bool)
0x97: Stack[-1] = (bool) 0
0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call 0x14c5

0x9b: Pop(1)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call 0x14d1

0xa1: Pop(1)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Call 0x14dd

0xa9: Pop(1)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-1] = (bool) 1
0xad: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call 0x14e9

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: Push((int) 12014)
0xb6: Push((int) 13233)
0xb7: Push((int) 13232)
0xb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(3)
0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Call 0x14f5

0xbd: Pop(1)
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: Push((int) 12018)
0xc0: Push((int) 3560)
0xc1: Push((int) 13236)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: Push((int) 12011)
0xc5: Push((int) -1)
0xc6: Push((int) 13229)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: GOTO 0xcc

0xca: Return(); Pop(0)

0xcb: GOTO 0x74

0xcc: PushEmpty(bool)
0xcd: Call 0x1242

0xce: Pop(0)
0xcf: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd0: @ lshWaitForAnimEnd()
0xd1: Pop(0)
0xd2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: GOTO 0xda

0xd5: PushEmpty(string)
0xd6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd7: Call 0x11e2

0xd8: Pop(1)
0xd9: GOTO 0xd0

0xda: GOTO 0xe9

0xdb: Push("all")
0xdc: Push("idle")
0xdd: @ PlayAnimation(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: @ WaitForAnimEnd()
0xe0: Pop(0)
0xe1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: GOTO 0xe9

0xe4: Push("all")
0xe5: Push("idle")
0xe6: @ PlayAnimation(Stack[-2], Stack[-1])
0xe7: Pop(2)
0xe8: GOTO 0xdf

0xe9: Return(); Pop(0)

0xea: PushEmpty()
0xeb: PushEmpty(bool)
0xec: Call 0x1242

0xed: Pop(0)
0xee: Pop(1); Push((bool) Stack[-1] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Return(); Pop(0)

0xf1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Return(); Pop(0)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = Stack[-2]
0xf6: Call 0x11e2

0xf7: Pop(1)
0xf8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: Push((int) 1)
0xfc: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0xfd: PushEmpty()
0xfe: Call 0x11f4

0xff: Pop(0)
0x100: Push((int) 13228)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call 0x13c5

0x107: Pop(2)
0x108: Push((int) 13232)
0x109: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call 0x13b9

0x10f: Pop(2)
0x110: Push((int) 13236)
0x111: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call 0x13bf

0x117: Pop(2)
0x118: Push((int) 13227)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call 0xea

0x11e: Pop(1)
0x11f: Push((int) 12009)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: PushEmpty(bool)
0x125: Stack[-1] = (bool) 0
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call 0x1501

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call 0x150d

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 12010)
0x133: Push((int) 13230)
0x134: Push((int) 13228)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call 0x14c5

0x140: Pop(1)
0x141: Pop(1); Push((bool) Stack[-1] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call 0x14d1

0x146: Pop(1)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call 0x14dd

0x14e: Pop(1)
0x14f: Pop(1); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Stack[-1] = (bool) 1
0x152: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call 0x14e9

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (bool) 1
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: Push((int) 12014)
0x15b: Push((int) 13233)
0x15c: Push((int) 13232)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call 0x14f5

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: Push((int) 12018)
0x165: Push((int) 3560)
0x166: Push((int) 13236)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 12011)
0x16a: Push((int) -1)
0x16b: Push((int) 13229)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 3560)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call 0xea

0x175: Pop(1)
0x176: Push((int) 3289)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 3290)
0x17c: Push((int) 3562)
0x17d: Push((int) 3561)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 3298)
0x181: Push((int) 3572)
0x182: Push((int) 3571)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 3572)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call 0xea

0x18c: Pop(1)
0x18d: Push((int) 3299)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 3300)
0x193: Push((int) 3562)
0x194: Push((int) 3573)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 3301)
0x198: Push((int) 3564)
0x199: Push((int) 3575)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 3562)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral"
0x1a2: Call 0xea

0x1a3: Pop(1)
0x1a4: Push((int) 3291)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 3292)
0x1aa: Push((int) 3564)
0x1ab: Push((int) 3563)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Push((int) 3295)
0x1af: Push((int) 3564)
0x1b0: Push((int) 3566)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: Push((int) 3564)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral"
0x1b9: Call 0xea

0x1ba: Pop(1)
0x1bb: Push((int) 3293)
0x1bc: @@ SetMessage(Stack[-1])
0x1bd: Pop(1)
0x1be: @@ ClearReplies()
0x1bf: Pop(0)
0x1c0: Push((int) 3294)
0x1c1: Push((int) 3568)
0x1c2: Push((int) 3565)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 3297)
0x1c6: Push((int) 3568)
0x1c7: Push((int) 3569)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 3568)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call 0xea

0x1d1: Pop(1)
0x1d2: Push((int) 3296)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 3302)
0x1d8: Push((int) 3578)
0x1d9: Push((int) 3577)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Push((int) 3305)
0x1dd: Push((int) 3578)
0x1de: Push((int) 3580)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 3578)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call 0xea

0x1e8: Pop(1)
0x1e9: Push((int) 3303)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 3304)
0x1ef: Push((int) -1)
0x1f0: Push((int) 3579)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 13233)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral"
0x1f9: Call 0xea

0x1fa: Pop(1)
0x1fb: Push((int) 12015)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 12016)
0x201: Push((int) 13235)
0x202: Push((int) 13234)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 13235)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral"
0x20b: Call 0xea

0x20c: Pop(1)
0x20d: Push((int) 12017)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: Push((int) 13230)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral"
0x218: Call 0xea

0x219: Pop(1)
0x21a: Push((int) 12012)
0x21b: @@ SetMessage(Stack[-1])
0x21c: Pop(1)
0x21d: @@ ClearReplies()
0x21e: Pop(0)
0x21f: Push((int) 12013)
0x220: Push((int) -1)
0x221: Push((int) 13231)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x226: PushEmpty(bool)
0x227: Call 0x1242

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22a: @ lshStopAnimation()
0x22b: Pop(0)
0x22c: GOTO 0x22f

0x22d: @ StopAnimation()
0x22e: Pop(0)
0x22f: Return(); Pop(0)

0x230: GOTO 0xfb

0x231: Return(); Pop(0)

0x232: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x233: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[-11]
0x236: Call 0x11a6

0x237: Pop(1)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[-10] = (int) -2
0x23b: Return(); Pop(8)

0x23c: @ CreateDialog(Stack[-4])
0x23d: Pop(0)
0x23e: PushEmpty(int)
0x23f: Call 0x123e

0x240: Pop(0)
0x241: @@ SetNPCName(Stack[-1])
0x242: Pop(1)
0x243: PushEmpty(string)
0x244: Call 0x1240

0x245: Pop(0)
0x246: @@ SetPhoto(Stack[-1])
0x247: Pop(1)
0x248: PushEmpty(int)
0x249: Call 0x15a1

0x24a: Pop(0)
0x24b: @@ SetPlayerName(Stack[-1])
0x24c: Pop(1)
0x24d: Stack[-2] = (int) -1
0x24e: @ IsOverrideActive(Stack[-3])
0x24f: Pop(0)
0x250: Push(Stack[-3])
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: Stack[-10] = (int) -2
0x253: Return(); Pop(8)

0x254: @ DoDialog(Stack[-4])
0x255: Pop(0)
0x256: PushEmpty(object, object)
0x257: Stack[-2] = Stack[-11]
0x258: Stack[-1] = Stack[-6]
0x259: Push(-2, 4); TaskCall(5)
0x25a: Call 0x271

0x25b: Pop(-2, 4); TaskReturn
0x25c: Pop(2)
0x25d: @@ IsDialogEnd(Stack[-1])
0x25e: Pop(0)
0x25f: Pop(0); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: @ sync()
0x262: Pop(0)
0x263: @@ IsDialogEnd(Stack[-1])
0x264: Pop(0)
0x265: GOTO 0x25f

0x266: PushEmpty(object)
0x267: Stack[-1] = Stack[-10]
0x268: Call 0x11de

0x269: Pop(1)
0x26a: @ StopDialog(Stack[-4])
0x26b: Pop(0)
0x26c: @@ GetReturnValue(Stack[-2])
0x26d: Pop(0)
0x26e: Stack[-10] = Stack[-2]
0x26f: Return(); Pop(8)

0x270: Stack[-4] = 0
0x271: PushEmpty()
0x272: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x273: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x274: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x275: Push((int) 1)
0x276: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x277: PushEmpty(bool, object)
0x278: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x279: Call 0x1429

0x27a: Pop(1)
0x27b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x27c: PushEmpty(object, object)
0x27d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27f: Call 0x12b3

0x280: Pop(2)
0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call 0x13b3

0x285: Pop(2)
0x286: PushEmpty(string)
0x287: Stack[-1] = "Neutral"
0x288: Call 0x2e7

0x289: Pop(1)
0x28a: Push((int) 4780)
0x28b: @@ SetMessage(Stack[-1])
0x28c: Pop(1)
0x28d: @@ ClearReplies()
0x28e: Pop(0)
0x28f: Push((int) 4781)
0x290: Push((int) 5240)
0x291: Push((int) 5234)
0x292: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x293: Pop(3)
0x294: Push((int) 4782)
0x295: Push((int) 5240)
0x296: Push((int) 5235)
0x297: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x298: Pop(3)
0x299: Push((int) 4786)
0x29a: Push((int) 5240)
0x29b: Push((int) 5239)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: GOTO 0x2c9

0x29f: PushEmpty(bool, object)
0x2a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a1: Call 0x13ef

0x2a2: Pop(1)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2a4: PushEmpty(object, object)
0x2a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a7: Call 0x13b3

0x2a8: Pop(2)
0x2a9: PushEmpty(string)
0x2aa: Stack[-1] = "Neutral"
0x2ab: Call 0x2e7

0x2ac: Pop(1)
0x2ad: Push((int) 4783)
0x2ae: @@ SetMessage(Stack[-1])
0x2af: Pop(1)
0x2b0: @@ ClearReplies()
0x2b1: Pop(0)
0x2b2: Push((int) 4784)
0x2b3: Push((int) 5294)
0x2b4: Push((int) 5237)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Push((int) 4830)
0x2b8: Push((int) 5301)
0x2b9: Push((int) 5297)
0x2ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bb: Pop(3)
0x2bc: Push((int) 4836)
0x2bd: Push((int) 5296)
0x2be: Push((int) 5304)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Push((int) 4845)
0x2c2: Push((int) -1)
0x2c3: Push((int) 5317)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: GOTO 0x2c9

0x2c7: Return(); Pop(0)

0x2c8: GOTO 0x275

0x2c9: PushEmpty(bool)
0x2ca: Call 0x1242

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2cd: @ lshWaitForAnimEnd()
0x2ce: Pop(0)
0x2cf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2d7

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2d4: Call 0x11e2

0x2d5: Pop(1)
0x2d6: GOTO 0x2cd

0x2d7: GOTO 0x2e6

0x2d8: Push("all")
0x2d9: Push("idle")
0x2da: @ PlayAnimation(Stack[-2], Stack[-1])
0x2db: Pop(2)
0x2dc: @ WaitForAnimEnd()
0x2dd: Pop(0)
0x2de: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: GOTO 0x2e6

0x2e1: Push("all")
0x2e2: Push("idle")
0x2e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: GOTO 0x2dc

0x2e6: Return(); Pop(0)

0x2e7: PushEmpty()
0x2e8: PushEmpty(bool)
0x2e9: Call 0x1242

0x2ea: Pop(0)
0x2eb: Pop(1); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Return(); Pop(0)

0x2ee: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = Stack[-2]
0x2f3: Call 0x11e2

0x2f4: Pop(1)
0x2f5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty()
0x2f8: Push((int) 1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x2fa: PushEmpty()
0x2fb: Call 0x11f4

0x2fc: Pop(0)
0x2fd: Push((int) 5312)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x300: PushEmpty(object, object)
0x301: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x302: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x303: Call 0x132f

0x304: Pop(2)
0x305: PushEmpty(object, object)
0x306: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call 0x1244

0x309: Pop(2)
0x30a: PushEmpty(object, object)
0x30b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30d: Call 0x12f6

0x30e: Pop(2)
0x30f: Push((int) 5313)
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x312: PushEmpty(object, object)
0x313: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x314: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x315: Call 0x132f

0x316: Pop(2)
0x317: PushEmpty(object, object)
0x318: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call 0x1244

0x31b: Pop(2)
0x31c: PushEmpty(object, object)
0x31d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31f: Call 0x12f6

0x320: Pop(2)
0x321: Push((int) 5266)
0x322: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x324: PushEmpty(object, object)
0x325: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x326: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x327: Call 0x132f

0x328: Pop(2)
0x329: Push((int) 5314)
0x32a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32c: PushEmpty(object, object)
0x32d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32f: Call 0x1244

0x330: Pop(2)
0x331: PushEmpty(object, object)
0x332: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x333: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x334: Call 0x12f6

0x335: Pop(2)
0x336: Push((int) 5315)
0x337: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x339: PushEmpty(object, object)
0x33a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call 0x1244

0x33d: Pop(2)
0x33e: PushEmpty(object, object)
0x33f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x340: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x341: Call 0x12f6

0x342: Pop(2)
0x343: Push((int) 5233)
0x344: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x346: PushEmpty(bool, object)
0x347: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x348: Call 0x1429

0x349: Pop(1)
0x34a: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x34b: PushEmpty(object, object)
0x34c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34e: Call 0x12b3

0x34f: Pop(2)
0x350: PushEmpty(object, object)
0x351: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x352: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x353: Call 0x13b3

0x354: Pop(2)
0x355: PushEmpty(string)
0x356: Stack[-1] = "Neutral"
0x357: Call 0x2e7

0x358: Pop(1)
0x359: Push((int) 4780)
0x35a: @@ SetMessage(Stack[-1])
0x35b: Pop(1)
0x35c: @@ ClearReplies()
0x35d: Pop(0)
0x35e: Push((int) 4781)
0x35f: Push((int) 5240)
0x360: Push((int) 5234)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Push((int) 4782)
0x364: Push((int) 5240)
0x365: Push((int) 5235)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Push((int) 4786)
0x369: Push((int) 5240)
0x36a: Push((int) 5239)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(bool, object)
0x36f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x370: Call 0x13ef

0x371: Pop(1)
0x372: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x373: PushEmpty(object, object)
0x374: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x375: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x376: Call 0x13b3

0x377: Pop(2)
0x378: PushEmpty(string)
0x379: Stack[-1] = "Neutral"
0x37a: Call 0x2e7

0x37b: Pop(1)
0x37c: Push((int) 4783)
0x37d: @@ SetMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ ClearReplies()
0x380: Pop(0)
0x381: Push((int) 4784)
0x382: Push((int) 5294)
0x383: Push((int) 5237)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Push((int) 4830)
0x387: Push((int) 5301)
0x388: Push((int) 5297)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 4836)
0x38c: Push((int) 5296)
0x38d: Push((int) 5304)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Push((int) 4845)
0x391: Push((int) -1)
0x392: Push((int) 5317)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Return(); Pop(0)

0x396: Push((int) 5301)
0x397: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Neutral"
0x39b: Call 0x2e7

0x39c: Pop(1)
0x39d: Push((int) 4834)
0x39e: @@ SetMessage(Stack[-1])
0x39f: Pop(1)
0x3a0: @@ ClearReplies()
0x3a1: Pop(0)
0x3a2: Push((int) 4835)
0x3a3: Push((int) 5299)
0x3a4: Push((int) 5302)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Push((int) 5294)
0x3a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3ab: PushEmpty(string)
0x3ac: Stack[-1] = "Neutral"
0x3ad: Call 0x2e7

0x3ae: Pop(1)
0x3af: Push((int) 4827)
0x3b0: @@ SetMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ ClearReplies()
0x3b3: Pop(0)
0x3b4: Push((int) 4828)
0x3b5: Push((int) 5296)
0x3b6: Push((int) 5295)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Push((int) 4831)
0x3ba: Push((int) 5299)
0x3bb: Push((int) 5298)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: Push((int) 5299)
0x3c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "Neutral"
0x3c4: Call 0x2e7

0x3c5: Pop(1)
0x3c6: Push((int) 4832)
0x3c7: @@ SetMessage(Stack[-1])
0x3c8: Pop(1)
0x3c9: @@ ClearReplies()
0x3ca: Pop(0)
0x3cb: Push((int) 4833)
0x3cc: Push((int) 5307)
0x3cd: Push((int) 5300)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Return(); Pop(0)

0x3d1: Push((int) 5296)
0x3d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d4: PushEmpty(object, object)
0x3d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d7: Call 0x1335

0x3d8: Pop(2)
0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call 0x2e7

0x3dc: Pop(1)
0x3dd: Push((int) 4829)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: Push((int) 4837)
0x3e3: Push((int) 5307)
0x3e4: Push((int) 5306)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Return(); Pop(0)

0x3e8: Push((int) 5307)
0x3e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "Neutral"
0x3ed: Call 0x2e7

0x3ee: Pop(1)
0x3ef: Push((int) 4838)
0x3f0: @@ SetMessage(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ ClearReplies()
0x3f3: Pop(0)
0x3f4: Push((int) 4843)
0x3f5: Push((int) -1)
0x3f6: Push((int) 5314)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Push((int) 4844)
0x3fa: Push((int) -1)
0x3fb: Push((int) 5315)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Return(); Pop(0)

0x3ff: Push((int) 5240)
0x400: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x402: PushEmpty(string)
0x403: Stack[-1] = "Neutral"
0x404: Call 0x2e7

0x405: Pop(1)
0x406: Push((int) 4787)
0x407: @@ SetMessage(Stack[-1])
0x408: Pop(1)
0x409: @@ ClearReplies()
0x40a: Pop(0)
0x40b: Push((int) 4788)
0x40c: Push((int) 5245)
0x40d: Push((int) 5243)
0x40e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: Push((int) 4789)
0x411: Push((int) 5245)
0x412: Push((int) 5244)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Return(); Pop(0)

0x416: Push((int) 5245)
0x417: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x419: PushEmpty(string)
0x41a: Stack[-1] = "Neutral"
0x41b: Call 0x2e7

0x41c: Pop(1)
0x41d: Push((int) 4790)
0x41e: @@ SetMessage(Stack[-1])
0x41f: Pop(1)
0x420: @@ ClearReplies()
0x421: Pop(0)
0x422: Push((int) 4791)
0x423: Push((int) 5250)
0x424: Push((int) 5247)
0x425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(3)
0x427: Push((int) 4792)
0x428: Push((int) 5269)
0x429: Push((int) 5248)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 4793)
0x42d: Push((int) 5271)
0x42e: Push((int) 5249)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 5271)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral"
0x437: Call 0x2e7

0x438: Pop(1)
0x439: Push((int) 4811)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 4812)
0x43f: Push((int) 5269)
0x440: Push((int) 5272)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Push((int) 4813)
0x444: Push((int) 5274)
0x445: Push((int) 5273)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: Push((int) 5274)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x44c: PushEmpty(object, object)
0x44d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44f: Call 0x12d7

0x450: Pop(2)
0x451: PushEmpty(string)
0x452: Stack[-1] = "Neutral"
0x453: Call 0x2e7

0x454: Pop(1)
0x455: Push((int) 4814)
0x456: @@ SetMessage(Stack[-1])
0x457: Pop(1)
0x458: @@ ClearReplies()
0x459: Pop(0)
0x45a: Push((int) 4815)
0x45b: Push((int) 5269)
0x45c: Push((int) 5276)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: Return(); Pop(0)

0x460: Push((int) 5269)
0x461: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x463: PushEmpty(string)
0x464: Stack[-1] = "Neutral"
0x465: Call 0x2e7

0x466: Pop(1)
0x467: Push((int) 4809)
0x468: @@ SetMessage(Stack[-1])
0x469: Pop(1)
0x46a: @@ ClearReplies()
0x46b: Pop(0)
0x46c: Push((int) 4810)
0x46d: Push((int) 5278)
0x46e: Push((int) 5270)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Push((int) 4824)
0x472: Push((int) 5278)
0x473: Push((int) 5287)
0x474: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x475: Pop(3)
0x476: Return(); Pop(0)

0x477: Push((int) 5278)
0x478: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x47a: PushEmpty(string)
0x47b: Stack[-1] = "Neutral"
0x47c: Call 0x2e7

0x47d: Pop(1)
0x47e: Push((int) 4816)
0x47f: @@ SetMessage(Stack[-1])
0x480: Pop(1)
0x481: @@ ClearReplies()
0x482: Pop(0)
0x483: Push((int) 4817)
0x484: Push((int) 5280)
0x485: Push((int) 5279)
0x486: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x487: Pop(3)
0x488: Push((int) 4825)
0x489: Push((int) 5257)
0x48a: Push((int) 5289)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: Return(); Pop(0)

0x48e: Push((int) 5280)
0x48f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x491: PushEmpty(string)
0x492: Stack[-1] = "Neutral"
0x493: Call 0x2e7

0x494: Pop(1)
0x495: Push((int) 4818)
0x496: @@ SetMessage(Stack[-1])
0x497: Pop(1)
0x498: @@ ClearReplies()
0x499: Pop(0)
0x49a: Push((int) 4819)
0x49b: Push((int) 5282)
0x49c: Push((int) 5281)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: Push((int) 4826)
0x4a0: Push((int) 5282)
0x4a1: Push((int) 5291)
0x4a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a3: Pop(3)
0x4a4: Return(); Pop(0)

0x4a5: Push((int) 5282)
0x4a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4a8: PushEmpty(string)
0x4a9: Stack[-1] = "Neutral"
0x4aa: Call 0x2e7

0x4ab: Pop(1)
0x4ac: Push((int) 4820)
0x4ad: @@ SetMessage(Stack[-1])
0x4ae: Pop(1)
0x4af: @@ ClearReplies()
0x4b0: Pop(0)
0x4b1: Push((int) 4821)
0x4b2: Push((int) 5253)
0x4b3: Push((int) 5283)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: Push((int) 4823)
0x4b7: Push((int) 5253)
0x4b8: Push((int) 5285)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: Return(); Pop(0)

0x4bc: Push((int) 5250)
0x4bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = "Neutral"
0x4c1: Call 0x2e7

0x4c2: Pop(1)
0x4c3: Push((int) 4794)
0x4c4: @@ SetMessage(Stack[-1])
0x4c5: Pop(1)
0x4c6: @@ ClearReplies()
0x4c7: Pop(0)
0x4c8: Push((int) 4795)
0x4c9: Push((int) 5253)
0x4ca: Push((int) 5251)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Push((int) 4796)
0x4ce: Push((int) 5253)
0x4cf: Push((int) 5252)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: Return(); Pop(0)

0x4d3: Push((int) 5253)
0x4d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4d6: PushEmpty(string)
0x4d7: Stack[-1] = "Neutral"
0x4d8: Call 0x2e7

0x4d9: Pop(1)
0x4da: Push((int) 4797)
0x4db: @@ SetMessage(Stack[-1])
0x4dc: Pop(1)
0x4dd: @@ ClearReplies()
0x4de: Pop(0)
0x4df: Push((int) 4798)
0x4e0: Push((int) 5257)
0x4e1: Push((int) 5254)
0x4e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e3: Pop(3)
0x4e4: Push((int) 4799)
0x4e5: Push((int) 5257)
0x4e6: Push((int) 5256)
0x4e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: Return(); Pop(0)

0x4ea: Push((int) 5257)
0x4eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ed: PushEmpty(string)
0x4ee: Stack[-1] = "Neutral"
0x4ef: Call 0x2e7

0x4f0: Pop(1)
0x4f1: Push((int) 4800)
0x4f2: @@ SetMessage(Stack[-1])
0x4f3: Pop(1)
0x4f4: @@ ClearReplies()
0x4f5: Pop(0)
0x4f6: Push((int) 4801)
0x4f7: Push((int) 5259)
0x4f8: Push((int) 5258)
0x4f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fa: Pop(3)
0x4fb: Push((int) 4803)
0x4fc: Push((int) 5264)
0x4fd: Push((int) 5260)
0x4fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ff: Pop(3)
0x500: Return(); Pop(0)

0x501: Push((int) 5259)
0x502: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x504: PushEmpty(string)
0x505: Stack[-1] = "Neutral"
0x506: Call 0x2e7

0x507: Pop(1)
0x508: Push((int) 4802)
0x509: @@ SetMessage(Stack[-1])
0x50a: Pop(1)
0x50b: @@ ClearReplies()
0x50c: Pop(0)
0x50d: Push((int) 4804)
0x50e: Push((int) 5264)
0x50f: Push((int) 5262)
0x510: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x511: Pop(3)
0x512: Push((int) 4805)
0x513: Push((int) 5264)
0x514: Push((int) 5263)
0x515: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x516: Pop(3)
0x517: Return(); Pop(0)

0x518: Push((int) 5264)
0x519: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x51b: PushEmpty(object, object)
0x51c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51e: Call 0x1335

0x51f: Pop(2)
0x520: PushEmpty(string)
0x521: Stack[-1] = "Neutral"
0x522: Call 0x2e7

0x523: Pop(1)
0x524: Push((int) 4806)
0x525: @@ SetMessage(Stack[-1])
0x526: Pop(1)
0x527: @@ ClearReplies()
0x528: Pop(0)
0x529: Push((int) 4807)
0x52a: Push((int) 5310)
0x52b: Push((int) 5265)
0x52c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52d: Pop(3)
0x52e: Push((int) 4808)
0x52f: Push((int) -1)
0x530: Push((int) 5266)
0x531: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x532: Pop(3)
0x533: Return(); Pop(0)

0x534: Push((int) 5310)
0x535: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x537: PushEmpty(string)
0x538: Stack[-1] = "Neutral"
0x539: Call 0x2e7

0x53a: Pop(1)
0x53b: Push((int) 4840)
0x53c: @@ SetMessage(Stack[-1])
0x53d: Pop(1)
0x53e: @@ ClearReplies()
0x53f: Pop(0)
0x540: Push((int) 4841)
0x541: Push((int) -1)
0x542: Push((int) 5312)
0x543: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x544: Pop(3)
0x545: Push((int) 4842)
0x546: Push((int) -1)
0x547: Push((int) 5313)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: Return(); Pop(0)

0x54b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x54c: PushEmpty(bool)
0x54d: Call 0x1242

0x54e: Pop(0)
0x54f: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x550: @ lshStopAnimation()
0x551: Pop(0)
0x552: GOTO 0x555

0x553: @ StopAnimation()
0x554: Pop(0)
0x555: Return(); Pop(0)

0x556: GOTO 0x2f8

0x557: Return(); Pop(0)

0x558: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x559: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x55a: PushEmpty(bool, object)
0x55b: Stack[-1] = Stack[-11]
0x55c: Call 0x11a6

0x55d: Pop(1)
0x55e: Pop(1); Push((bool) Stack[-1] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x560: Stack[-10] = (int) -2
0x561: Return(); Pop(8)

0x562: @ CreateDialog(Stack[-4])
0x563: Pop(0)
0x564: PushEmpty(int)
0x565: Call 0x123e

0x566: Pop(0)
0x567: @@ SetNPCName(Stack[-1])
0x568: Pop(1)
0x569: PushEmpty(string)
0x56a: Call 0x1240

0x56b: Pop(0)
0x56c: @@ SetPhoto(Stack[-1])
0x56d: Pop(1)
0x56e: PushEmpty(int)
0x56f: Call 0x15a1

0x570: Pop(0)
0x571: @@ SetPlayerName(Stack[-1])
0x572: Pop(1)
0x573: Stack[-2] = (int) -1
0x574: @ IsOverrideActive(Stack[-3])
0x575: Pop(0)
0x576: Push(Stack[-3])
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-10] = (int) -2
0x579: Return(); Pop(8)

0x57a: @ DoDialog(Stack[-4])
0x57b: Pop(0)
0x57c: PushEmpty(object, object)
0x57d: Stack[-2] = Stack[-11]
0x57e: Stack[-1] = Stack[-6]
0x57f: Push(-2, 4); TaskCall(7)
0x580: Call 0x597

0x581: Pop(-2, 4); TaskReturn
0x582: Pop(2)
0x583: @@ IsDialogEnd(Stack[-1])
0x584: Pop(0)
0x585: Pop(0); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x587: @ sync()
0x588: Pop(0)
0x589: @@ IsDialogEnd(Stack[-1])
0x58a: Pop(0)
0x58b: GOTO 0x585

0x58c: PushEmpty(object)
0x58d: Stack[-1] = Stack[-10]
0x58e: Call 0x11de

0x58f: Pop(1)
0x590: @ StopDialog(Stack[-4])
0x591: Pop(0)
0x592: @@ GetReturnValue(Stack[-2])
0x593: Pop(0)
0x594: Stack[-10] = Stack[-2]
0x595: Return(); Pop(8)

0x596: Stack[-4] = 0
0x597: PushEmpty()
0x598: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x599: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x59a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x59b: Push((int) 1)
0x59c: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x59d: PushEmpty(bool)
0x59e: Stack[-1] = (bool) 0
0x59f: PushEmpty(bool, object)
0x5a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a1: Call 0x1435

0x5a2: Pop(1)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a4: PushEmpty(bool, object)
0x5a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a6: Call 0x14b9

0x5a7: Pop(1)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a9: Stack[-1] = (bool) 1
0x5aa: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Neutral"
0x5ad: Call 0x615

0x5ae: Pop(1)
0x5af: Push((int) 4850)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 4879)
0x5b5: Push((int) 5370)
0x5b6: Push((int) 5353)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Push((int) 4890)
0x5ba: Push((int) 5354)
0x5bb: Push((int) 5367)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: GOTO 0x5f7

0x5bf: PushEmpty(string)
0x5c0: Stack[-1] = "Neutral"
0x5c1: Call 0x615

0x5c2: Pop(1)
0x5c3: Push((int) 7627)
0x5c4: @@ SetMessage(Stack[-1])
0x5c5: Pop(1)
0x5c6: @@ ClearReplies()
0x5c7: Pop(0)
0x5c8: PushEmpty(bool, object)
0x5c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ca: Call 0x144d

0x5cb: Pop(1)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5cd: Push((int) 7629)
0x5ce: Push((int) 5329)
0x5cf: Push((int) 8418)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: PushEmpty(bool, object)
0x5d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Call 0x1459

0x5d5: Pop(1)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d7: Push((int) 7632)
0x5d8: Push((int) 5334)
0x5d9: Push((int) 8421)
0x5da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5db: Pop(3)
0x5dc: PushEmpty(bool)
0x5dd: Stack[-1] = (bool) 0
0x5de: PushEmpty(bool, object)
0x5df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e0: Call 0x147d

0x5e1: Pop(1)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e3: PushEmpty(bool, object)
0x5e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e5: Call 0x141d

0x5e6: Pop(1)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: Stack[-1] = (bool) 1
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ea: Push((int) 7630)
0x5eb: Push((int) 8420)
0x5ec: Push((int) 8419)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Push((int) 7658)
0x5f0: Push((int) -1)
0x5f1: Push((int) 8451)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: GOTO 0x5f7

0x5f5: Return(); Pop(0)

0x5f6: GOTO 0x59b

0x5f7: PushEmpty(bool)
0x5f8: Call 0x1242

0x5f9: Pop(0)
0x5fa: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5fb: @ lshWaitForAnimEnd()
0x5fc: Pop(0)
0x5fd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5fe: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5ff: GOTO 0x605

0x600: PushEmpty(string)
0x601: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x602: Call 0x11e2

0x603: Pop(1)
0x604: GOTO 0x5fb

0x605: GOTO 0x614

0x606: Push("all")
0x607: Push("idle")
0x608: @ PlayAnimation(Stack[-2], Stack[-1])
0x609: Pop(2)
0x60a: @ WaitForAnimEnd()
0x60b: Pop(0)
0x60c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x60d: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60e: GOTO 0x614

0x60f: Push("all")
0x610: Push("idle")
0x611: @ PlayAnimation(Stack[-2], Stack[-1])
0x612: Pop(2)
0x613: GOTO 0x60a

0x614: Return(); Pop(0)

0x615: PushEmpty()
0x616: PushEmpty(bool)
0x617: Call 0x1242

0x618: Pop(0)
0x619: Pop(1); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: Return(); Pop(0)

0x61c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x61d: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61e: Return(); Pop(0)

0x61f: PushEmpty(string)
0x620: Stack[-1] = Stack[-2]
0x621: Call 0x11e2

0x622: Pop(1)
0x623: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x624: Return(); Pop(0)

0x625: PushEmpty()
0x626: Push((int) 1)
0x627: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x628: PushEmpty()
0x629: Call 0x11f4

0x62a: Pop(0)
0x62b: Push((int) 5424)
0x62c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x62e: PushEmpty(object, object)
0x62f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x630: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x631: Call 0x1389

0x632: Pop(2)
0x633: PushEmpty(object, object)
0x634: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x635: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x636: Call 0x1264

0x637: Pop(2)
0x638: Push((int) 5360)
0x639: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x63b: PushEmpty(object, object)
0x63c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63e: Call 0x1389

0x63f: Pop(2)
0x640: PushEmpty(object, object)
0x641: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x642: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x643: Call 0x12ad

0x644: Pop(2)
0x645: Push((int) 5359)
0x646: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x647: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x648: PushEmpty(object, object)
0x649: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64b: Call 0x1389

0x64c: Pop(2)
0x64d: PushEmpty(object, object)
0x64e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x650: Call 0x12ad

0x651: Pop(2)
0x652: Push((int) 5394)
0x653: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x655: PushEmpty(object, object)
0x656: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x657: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x658: Call 0x138f

0x659: Pop(2)
0x65a: PushEmpty(object, object)
0x65b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x65c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x65d: Call 0x12dd

0x65e: Pop(2)
0x65f: PushEmpty(object, object)
0x660: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x661: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x662: Call 0x12f6

0x663: Pop(2)
0x664: Push((int) 5407)
0x665: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x667: PushEmpty(object, object)
0x668: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x669: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66a: Call 0x138f

0x66b: Pop(2)
0x66c: PushEmpty(object, object)
0x66d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x66e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66f: Call 0x12dd

0x670: Pop(2)
0x671: PushEmpty(object, object)
0x672: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x673: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x674: Call 0x12f6

0x675: Pop(2)
0x676: Push((int) 5341)
0x677: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x679: PushEmpty(object, object)
0x67a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67c: Call 0x1395

0x67d: Pop(2)
0x67e: Push((int) 5342)
0x67f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x680: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x681: PushEmpty(object, object)
0x682: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x683: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x684: Call 0x1395

0x685: Pop(2)
0x686: Push((int) 5347)
0x687: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x689: PushEmpty(object, object)
0x68a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68c: Call 0x1395

0x68d: Pop(2)
0x68e: Push((int) 8440)
0x68f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x691: PushEmpty(object, object)
0x692: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x693: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x694: Call 0x1395

0x695: Pop(2)
0x696: Push((int) 8449)
0x697: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x699: PushEmpty(object, object)
0x69a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x69b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69c: Call 0x12d1

0x69d: Pop(2)
0x69e: Push((int) 8450)
0x69f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a1: PushEmpty(object, object)
0x6a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6a4: Call 0x12d1

0x6a5: Pop(2)
0x6a6: Push((int) 8446)
0x6a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a9: PushEmpty(object, object)
0x6aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ac: Call 0x12d1

0x6ad: Pop(2)
0x6ae: Push((int) 5322)
0x6af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x6b1: PushEmpty(bool)
0x6b2: Stack[-1] = (bool) 0
0x6b3: PushEmpty(bool, object)
0x6b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b5: Call 0x1435

0x6b6: Pop(1)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b8: PushEmpty(bool, object)
0x6b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ba: Call 0x14b9

0x6bb: Pop(1)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bd: Stack[-1] = (bool) 1
0x6be: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6bf: PushEmpty(string)
0x6c0: Stack[-1] = "Neutral"
0x6c1: Call 0x615

0x6c2: Pop(1)
0x6c3: Push((int) 4850)
0x6c4: @@ SetMessage(Stack[-1])
0x6c5: Pop(1)
0x6c6: @@ ClearReplies()
0x6c7: Pop(0)
0x6c8: Push((int) 4879)
0x6c9: Push((int) 5370)
0x6ca: Push((int) 5353)
0x6cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cc: Pop(3)
0x6cd: Push((int) 4890)
0x6ce: Push((int) 5354)
0x6cf: Push((int) 5367)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Return(); Pop(0)

0x6d3: PushEmpty(string)
0x6d4: Stack[-1] = "Neutral"
0x6d5: Call 0x615

0x6d6: Pop(1)
0x6d7: Push((int) 7627)
0x6d8: @@ SetMessage(Stack[-1])
0x6d9: Pop(1)
0x6da: @@ ClearReplies()
0x6db: Pop(0)
0x6dc: PushEmpty(bool, object)
0x6dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6de: Call 0x144d

0x6df: Pop(1)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e1: Push((int) 7629)
0x6e2: Push((int) 5329)
0x6e3: Push((int) 8418)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: PushEmpty(bool, object)
0x6e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e8: Call 0x1459

0x6e9: Pop(1)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6eb: Push((int) 7632)
0x6ec: Push((int) 5334)
0x6ed: Push((int) 8421)
0x6ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: PushEmpty(bool)
0x6f1: Stack[-1] = (bool) 0
0x6f2: PushEmpty(bool, object)
0x6f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f4: Call 0x147d

0x6f5: Pop(1)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6f7: PushEmpty(bool, object)
0x6f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f9: Call 0x141d

0x6fa: Pop(1)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: Stack[-1] = (bool) 1
0x6fd: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6fe: Push((int) 7630)
0x6ff: Push((int) 8420)
0x700: Push((int) 8419)
0x701: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x702: Pop(3)
0x703: Push((int) 7658)
0x704: Push((int) -1)
0x705: Push((int) 8451)
0x706: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: Return(); Pop(0)

0x709: Push((int) 8420)
0x70a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x70c: PushEmpty(string)
0x70d: Stack[-1] = "Neutral"
0x70e: Call 0x615

0x70f: Pop(1)
0x710: Push((int) 7631)
0x711: @@ SetMessage(Stack[-1])
0x712: Pop(1)
0x713: @@ ClearReplies()
0x714: Pop(0)
0x715: Push((int) 7633)
0x716: Push((int) 8445)
0x717: Push((int) 8422)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: Push((int) 8445)
0x71c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x71e: PushEmpty(string)
0x71f: Stack[-1] = "Neutral"
0x720: Call 0x615

0x721: Pop(1)
0x722: Push((int) 7652)
0x723: @@ SetMessage(Stack[-1])
0x724: Pop(1)
0x725: @@ ClearReplies()
0x726: Pop(0)
0x727: Push((int) 7654)
0x728: Push((int) 8448)
0x729: Push((int) 8447)
0x72a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72b: Pop(3)
0x72c: Push((int) 7653)
0x72d: Push((int) -1)
0x72e: Push((int) 8446)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: Return(); Pop(0)

0x732: Push((int) 8448)
0x733: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x735: PushEmpty(string)
0x736: Stack[-1] = "Neutral"
0x737: Call 0x615

0x738: Pop(1)
0x739: Push((int) 7655)
0x73a: @@ SetMessage(Stack[-1])
0x73b: Pop(1)
0x73c: @@ ClearReplies()
0x73d: Pop(0)
0x73e: Push((int) 7656)
0x73f: Push((int) -1)
0x740: Push((int) 8449)
0x741: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x742: Pop(3)
0x743: Push((int) 7657)
0x744: Push((int) -1)
0x745: Push((int) 8450)
0x746: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x747: Pop(3)
0x748: Return(); Pop(0)

0x749: Push((int) 5334)
0x74a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x74c: PushEmpty(object, object)
0x74d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74f: Call 0x139b

0x750: Pop(2)
0x751: PushEmpty(string)
0x752: Stack[-1] = "Neutral"
0x753: Call 0x615

0x754: Pop(1)
0x755: Push((int) 4862)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 4863)
0x75b: Push((int) 5336)
0x75c: Push((int) 5335)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Push((int) 4875)
0x760: Push((int) 5414)
0x761: Push((int) 5348)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: PushEmpty(bool, object)
0x765: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x766: Call 0x1411

0x767: Pop(1)
0x768: Pop(1); Push((bool) Stack[-1] == 0)
0x769: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76a: Push((int) 7643)
0x76b: Push((int) 8435)
0x76c: Push((int) 8434)
0x76d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76e: Pop(3)
0x76f: Return(); Pop(0)

0x770: Push((int) 8435)
0x771: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x773: PushEmpty(string)
0x774: Stack[-1] = "Neutral"
0x775: Call 0x615

0x776: Pop(1)
0x777: Push((int) 7644)
0x778: @@ SetMessage(Stack[-1])
0x779: Pop(1)
0x77a: @@ ClearReplies()
0x77b: Pop(0)
0x77c: Push((int) 7645)
0x77d: Push((int) 8437)
0x77e: Push((int) 8436)
0x77f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x780: Pop(3)
0x781: Return(); Pop(0)

0x782: Push((int) 8437)
0x783: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x785: PushEmpty(string)
0x786: Stack[-1] = "Neutral"
0x787: Call 0x615

0x788: Pop(1)
0x789: Push((int) 7646)
0x78a: @@ SetMessage(Stack[-1])
0x78b: Pop(1)
0x78c: @@ ClearReplies()
0x78d: Pop(0)
0x78e: Push((int) 7647)
0x78f: Push((int) 5336)
0x790: Push((int) 8438)
0x791: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x792: Pop(3)
0x793: Return(); Pop(0)

0x794: Push((int) 5414)
0x795: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x797: PushEmpty(string)
0x798: Stack[-1] = "Neutral"
0x799: Call 0x615

0x79a: Pop(1)
0x79b: Push((int) 4926)
0x79c: @@ SetMessage(Stack[-1])
0x79d: Pop(1)
0x79e: @@ ClearReplies()
0x79f: Pop(0)
0x7a0: Push((int) 4927)
0x7a1: Push((int) 8441)
0x7a2: Push((int) 5415)
0x7a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a4: Pop(3)
0x7a5: Push((int) 7648)
0x7a6: Push((int) -1)
0x7a7: Push((int) 8440)
0x7a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a9: Pop(3)
0x7aa: Return(); Pop(0)

0x7ab: Push((int) 8441)
0x7ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ad: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7ae: PushEmpty(string)
0x7af: Stack[-1] = "Neutral"
0x7b0: Call 0x615

0x7b1: Pop(1)
0x7b2: Push((int) 7649)
0x7b3: @@ SetMessage(Stack[-1])
0x7b4: Pop(1)
0x7b5: @@ ClearReplies()
0x7b6: Pop(0)
0x7b7: Push((int) 7650)
0x7b8: Push((int) 5338)
0x7b9: Push((int) 8442)
0x7ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bb: Pop(3)
0x7bc: Return(); Pop(0)

0x7bd: Push((int) 5336)
0x7be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7c0: PushEmpty(string)
0x7c1: Stack[-1] = "Neutral"
0x7c2: Call 0x615

0x7c3: Pop(1)
0x7c4: Push((int) 4864)
0x7c5: @@ SetMessage(Stack[-1])
0x7c6: Pop(1)
0x7c7: @@ ClearReplies()
0x7c8: Pop(0)
0x7c9: Push((int) 4865)
0x7ca: Push((int) 5338)
0x7cb: Push((int) 5337)
0x7cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cd: Pop(3)
0x7ce: Push((int) 4871)
0x7cf: Push((int) 5344)
0x7d0: Push((int) 5343)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Return(); Pop(0)

0x7d4: Push((int) 5344)
0x7d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7d7: PushEmpty(string)
0x7d8: Stack[-1] = "Neutral"
0x7d9: Call 0x615

0x7da: Pop(1)
0x7db: Push((int) 4872)
0x7dc: @@ SetMessage(Stack[-1])
0x7dd: Pop(1)
0x7de: @@ ClearReplies()
0x7df: Pop(0)
0x7e0: Push((int) 4873)
0x7e1: Push((int) 5338)
0x7e2: Push((int) 5345)
0x7e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e4: Pop(3)
0x7e5: Push((int) 4874)
0x7e6: Push((int) -1)
0x7e7: Push((int) 5347)
0x7e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e9: Pop(3)
0x7ea: Return(); Pop(0)

0x7eb: Push((int) 5338)
0x7ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7ee: PushEmpty(string)
0x7ef: Stack[-1] = "Neutral"
0x7f0: Call 0x615

0x7f1: Pop(1)
0x7f2: Push((int) 4866)
0x7f3: @@ SetMessage(Stack[-1])
0x7f4: Pop(1)
0x7f5: @@ ClearReplies()
0x7f6: Pop(0)
0x7f7: Push((int) 4867)
0x7f8: Push((int) 5340)
0x7f9: Push((int) 5339)
0x7fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fb: Pop(3)
0x7fc: Return(); Pop(0)

0x7fd: Push((int) 5340)
0x7fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x800: PushEmpty(string)
0x801: Stack[-1] = "Neutral"
0x802: Call 0x615

0x803: Pop(1)
0x804: Push((int) 4868)
0x805: @@ SetMessage(Stack[-1])
0x806: Pop(1)
0x807: @@ ClearReplies()
0x808: Pop(0)
0x809: Push((int) 4869)
0x80a: Push((int) -1)
0x80b: Push((int) 5341)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Push((int) 4870)
0x80f: Push((int) -1)
0x810: Push((int) 5342)
0x811: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x812: Pop(3)
0x813: Return(); Pop(0)

0x814: Push((int) 5329)
0x815: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x817: PushEmpty(string)
0x818: Stack[-1] = "Neutral"
0x819: Call 0x615

0x81a: Pop(1)
0x81b: Push((int) 4857)
0x81c: @@ SetMessage(Stack[-1])
0x81d: Pop(1)
0x81e: @@ ClearReplies()
0x81f: Pop(0)
0x820: Push((int) 4858)
0x821: Push((int) 5374)
0x822: Push((int) 5330)
0x823: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x824: Pop(3)
0x825: Return(); Pop(0)

0x826: Push((int) 5374)
0x827: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x828: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x829: PushEmpty(string)
0x82a: Stack[-1] = "Neutral"
0x82b: Call 0x615

0x82c: Pop(1)
0x82d: Push((int) 4895)
0x82e: @@ SetMessage(Stack[-1])
0x82f: Pop(1)
0x830: @@ ClearReplies()
0x831: Pop(0)
0x832: Push((int) 4896)
0x833: Push((int) 5377)
0x834: Push((int) 5375)
0x835: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x836: Pop(3)
0x837: Push((int) 4897)
0x838: Push((int) 5377)
0x839: Push((int) 5376)
0x83a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83b: Pop(3)
0x83c: Return(); Pop(0)

0x83d: Push((int) 5377)
0x83e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x840: PushEmpty(string)
0x841: Stack[-1] = "Neutral"
0x842: Call 0x615

0x843: Pop(1)
0x844: Push((int) 4898)
0x845: @@ SetMessage(Stack[-1])
0x846: Pop(1)
0x847: @@ ClearReplies()
0x848: Pop(0)
0x849: Push((int) 4899)
0x84a: Push((int) 5380)
0x84b: Push((int) 5378)
0x84c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84d: Pop(3)
0x84e: Push((int) 4913)
0x84f: Push((int) 5396)
0x850: Push((int) 5395)
0x851: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x852: Pop(3)
0x853: Return(); Pop(0)

0x854: Push((int) 5396)
0x855: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x857: PushEmpty(string)
0x858: Stack[-1] = "Neutral"
0x859: Call 0x615

0x85a: Pop(1)
0x85b: Push((int) 4914)
0x85c: @@ SetMessage(Stack[-1])
0x85d: Pop(1)
0x85e: @@ ClearReplies()
0x85f: Pop(0)
0x860: Push((int) 4915)
0x861: Push((int) 5380)
0x862: Push((int) 5397)
0x863: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: Return(); Pop(0)

0x866: Push((int) 5380)
0x867: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x869: PushEmpty(string)
0x86a: Stack[-1] = "Neutral"
0x86b: Call 0x615

0x86c: Pop(1)
0x86d: Push((int) 4900)
0x86e: @@ SetMessage(Stack[-1])
0x86f: Pop(1)
0x870: @@ ClearReplies()
0x871: Pop(0)
0x872: Push((int) 4901)
0x873: Push((int) 5382)
0x874: Push((int) 5381)
0x875: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: Push((int) 4916)
0x878: Push((int) 5382)
0x879: Push((int) 5399)
0x87a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87b: Pop(3)
0x87c: Push((int) 4917)
0x87d: Push((int) 5402)
0x87e: Push((int) 5401)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: Return(); Pop(0)

0x882: Push((int) 5402)
0x883: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x885: PushEmpty(string)
0x886: Stack[-1] = "Neutral"
0x887: Call 0x615

0x888: Pop(1)
0x889: Push((int) 4918)
0x88a: @@ SetMessage(Stack[-1])
0x88b: Pop(1)
0x88c: @@ ClearReplies()
0x88d: Pop(0)
0x88e: Push((int) 4919)
0x88f: Push((int) 5382)
0x890: Push((int) 5403)
0x891: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x892: Pop(3)
0x893: Return(); Pop(0)

0x894: Push((int) 5382)
0x895: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x897: PushEmpty(object, object)
0x898: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x899: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89a: Call 0x13ad

0x89b: Pop(2)
0x89c: PushEmpty(object, object)
0x89d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89f: Call 0x13a7

0x8a0: Pop(2)
0x8a1: PushEmpty(object, object)
0x8a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a4: Call 0x13a1

0x8a5: Pop(2)
0x8a6: PushEmpty(string)
0x8a7: Stack[-1] = "Neutral"
0x8a8: Call 0x615

0x8a9: Pop(1)
0x8aa: Push((int) 4902)
0x8ab: @@ SetMessage(Stack[-1])
0x8ac: Pop(1)
0x8ad: @@ ClearReplies()
0x8ae: Pop(0)
0x8af: Push((int) 4903)
0x8b0: Push((int) 5385)
0x8b1: Push((int) 5383)
0x8b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b3: Pop(3)
0x8b4: Push((int) 4920)
0x8b5: Push((int) 5385)
0x8b6: Push((int) 5405)
0x8b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b8: Pop(3)
0x8b9: Push((int) 4925)
0x8ba: Push((int) 5409)
0x8bb: Push((int) 5412)
0x8bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(3)
0x8be: Return(); Pop(0)

0x8bf: Push((int) 5385)
0x8c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8c2: PushEmpty(string)
0x8c3: Stack[-1] = "Neutral"
0x8c4: Call 0x615

0x8c5: Pop(1)
0x8c6: Push((int) 4905)
0x8c7: @@ SetMessage(Stack[-1])
0x8c8: Pop(1)
0x8c9: @@ ClearReplies()
0x8ca: Pop(0)
0x8cb: Push((int) 4906)
0x8cc: Push((int) 5388)
0x8cd: Push((int) 5386)
0x8ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cf: Pop(3)
0x8d0: Push((int) 4907)
0x8d1: Push((int) 5388)
0x8d2: Push((int) 5387)
0x8d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d4: Pop(3)
0x8d5: Push((int) 4922)
0x8d6: Push((int) 5409)
0x8d7: Push((int) 5408)
0x8d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d9: Pop(3)
0x8da: Return(); Pop(0)

0x8db: Push((int) 5409)
0x8dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8de: PushEmpty(string)
0x8df: Stack[-1] = "Neutral"
0x8e0: Call 0x615

0x8e1: Pop(1)
0x8e2: Push((int) 4923)
0x8e3: @@ SetMessage(Stack[-1])
0x8e4: Pop(1)
0x8e5: @@ ClearReplies()
0x8e6: Pop(0)
0x8e7: Push((int) 4924)
0x8e8: Push((int) 5388)
0x8e9: Push((int) 5410)
0x8ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8eb: Pop(3)
0x8ec: Return(); Pop(0)

0x8ed: Push((int) 5388)
0x8ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8f0: PushEmpty(string)
0x8f1: Stack[-1] = "Neutral"
0x8f2: Call 0x615

0x8f3: Pop(1)
0x8f4: Push((int) 4908)
0x8f5: @@ SetMessage(Stack[-1])
0x8f6: Pop(1)
0x8f7: @@ ClearReplies()
0x8f8: Pop(0)
0x8f9: Push((int) 4909)
0x8fa: Push((int) 5392)
0x8fb: Push((int) 5390)
0x8fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(3)
0x8fe: Push((int) 4910)
0x8ff: Push((int) 5392)
0x900: Push((int) 5391)
0x901: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x902: Pop(3)
0x903: Return(); Pop(0)

0x904: Push((int) 5392)
0x905: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x907: PushEmpty(string)
0x908: Stack[-1] = "Neutral"
0x909: Call 0x615

0x90a: Pop(1)
0x90b: Push((int) 4911)
0x90c: @@ SetMessage(Stack[-1])
0x90d: Pop(1)
0x90e: @@ ClearReplies()
0x90f: Pop(0)
0x910: Push((int) 4912)
0x911: Push((int) -1)
0x912: Push((int) 5394)
0x913: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x914: Pop(3)
0x915: Push((int) 4921)
0x916: Push((int) -1)
0x917: Push((int) 5407)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Return(); Pop(0)

0x91b: Push((int) 5354)
0x91c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x91e: PushEmpty(string)
0x91f: Stack[-1] = "Neutral"
0x920: Call 0x615

0x921: Pop(1)
0x922: Push((int) 4880)
0x923: @@ SetMessage(Stack[-1])
0x924: Pop(1)
0x925: @@ ClearReplies()
0x926: Pop(0)
0x927: Push((int) 4881)
0x928: Push((int) 5356)
0x929: Push((int) 5355)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Push((int) 4889)
0x92d: Push((int) 5356)
0x92e: Push((int) 5365)
0x92f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: Return(); Pop(0)

0x932: Push((int) 5356)
0x933: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x935: PushEmpty(string)
0x936: Stack[-1] = "Neutral"
0x937: Call 0x615

0x938: Pop(1)
0x939: Push((int) 4882)
0x93a: @@ SetMessage(Stack[-1])
0x93b: Pop(1)
0x93c: @@ ClearReplies()
0x93d: Pop(0)
0x93e: Push((int) 4883)
0x93f: Push((int) 5358)
0x940: Push((int) 5357)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Push((int) 4887)
0x944: Push((int) 5358)
0x945: Push((int) 5361)
0x946: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(3)
0x948: Return(); Pop(0)

0x949: Push((int) 5358)
0x94a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94b: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x94c: PushEmpty(string)
0x94d: Stack[-1] = "Neutral"
0x94e: Call 0x615

0x94f: Pop(1)
0x950: Push((int) 4884)
0x951: @@ SetMessage(Stack[-1])
0x952: Pop(1)
0x953: @@ ClearReplies()
0x954: Pop(0)
0x955: Push((int) 4886)
0x956: Push((int) -1)
0x957: Push((int) 5360)
0x958: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x959: Pop(3)
0x95a: Push((int) 4885)
0x95b: Push((int) -1)
0x95c: Push((int) 5359)
0x95d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95e: Pop(3)
0x95f: Return(); Pop(0)

0x960: Push((int) 5370)
0x961: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x962: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x963: PushEmpty(string)
0x964: Stack[-1] = "Neutral"
0x965: Call 0x615

0x966: Pop(1)
0x967: Push((int) 4892)
0x968: @@ SetMessage(Stack[-1])
0x969: Pop(1)
0x96a: @@ ClearReplies()
0x96b: Pop(0)
0x96c: Push((int) 4928)
0x96d: Push((int) 5421)
0x96e: Push((int) 5416)
0x96f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x970: Pop(3)
0x971: Push((int) 4929)
0x972: Push((int) 5418)
0x973: Push((int) 5417)
0x974: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x975: Pop(3)
0x976: Return(); Pop(0)

0x977: Push((int) 5418)
0x978: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x979: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x97a: PushEmpty(string)
0x97b: Stack[-1] = "Neutral"
0x97c: Call 0x615

0x97d: Pop(1)
0x97e: Push((int) 4930)
0x97f: @@ SetMessage(Stack[-1])
0x980: Pop(1)
0x981: @@ ClearReplies()
0x982: Pop(0)
0x983: Push((int) 4931)
0x984: Push((int) 5358)
0x985: Push((int) 5419)
0x986: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x987: Pop(3)
0x988: Return(); Pop(0)

0x989: Push((int) 5421)
0x98a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98b: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x98c: PushEmpty(string)
0x98d: Stack[-1] = "Neutral"
0x98e: Call 0x615

0x98f: Pop(1)
0x990: Push((int) 4932)
0x991: @@ SetMessage(Stack[-1])
0x992: Pop(1)
0x993: @@ ClearReplies()
0x994: Pop(0)
0x995: Push((int) 4893)
0x996: Push((int) 5354)
0x997: Push((int) 5371)
0x998: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x999: Pop(3)
0x99a: Push((int) 4933)
0x99b: Push((int) 5423)
0x99c: Push((int) 5422)
0x99d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99e: Pop(3)
0x99f: Return(); Pop(0)

0x9a0: Push((int) 5423)
0x9a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9a3: PushEmpty(string)
0x9a4: Stack[-1] = "Neutral"
0x9a5: Call 0x615

0x9a6: Pop(1)
0x9a7: Push((int) 4934)
0x9a8: @@ SetMessage(Stack[-1])
0x9a9: Pop(1)
0x9aa: @@ ClearReplies()
0x9ab: Pop(0)
0x9ac: Push((int) 4935)
0x9ad: Push((int) -1)
0x9ae: Push((int) 5424)
0x9af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b0: Pop(3)
0x9b1: Return(); Pop(0)

0x9b2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9b3: PushEmpty(bool)
0x9b4: Call 0x1242

0x9b5: Pop(0)
0x9b6: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b7: @ lshStopAnimation()
0x9b8: Pop(0)
0x9b9: GOTO 0x9bc

0x9ba: @ StopAnimation()
0x9bb: Pop(0)
0x9bc: Return(); Pop(0)

0x9bd: GOTO 0x626

0x9be: Return(); Pop(0)

0x9bf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9c1: PushEmpty(bool, object)
0x9c2: Stack[-1] = Stack[-11]
0x9c3: Call 0x11a6

0x9c4: Pop(1)
0x9c5: Pop(1); Push((bool) Stack[-1] == 0)
0x9c6: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c7: Stack[-10] = (int) -2
0x9c8: Return(); Pop(8)

0x9c9: @ CreateDialog(Stack[-4])
0x9ca: Pop(0)
0x9cb: PushEmpty(int)
0x9cc: Call 0x123e

0x9cd: Pop(0)
0x9ce: @@ SetNPCName(Stack[-1])
0x9cf: Pop(1)
0x9d0: PushEmpty(string)
0x9d1: Call 0x1240

0x9d2: Pop(0)
0x9d3: @@ SetPhoto(Stack[-1])
0x9d4: Pop(1)
0x9d5: PushEmpty(int)
0x9d6: Call 0x15a1

0x9d7: Pop(0)
0x9d8: @@ SetPlayerName(Stack[-1])
0x9d9: Pop(1)
0x9da: Stack[-2] = (int) -1
0x9db: @ IsOverrideActive(Stack[-3])
0x9dc: Pop(0)
0x9dd: Push(Stack[-3])
0x9de: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9df: Stack[-10] = (int) -2
0x9e0: Return(); Pop(8)

0x9e1: @ DoDialog(Stack[-4])
0x9e2: Pop(0)
0x9e3: PushEmpty(object, object)
0x9e4: Stack[-2] = Stack[-11]
0x9e5: Stack[-1] = Stack[-6]
0x9e6: Push(-2, 4); TaskCall(9)
0x9e7: Call 0x9fe

0x9e8: Pop(-2, 4); TaskReturn
0x9e9: Pop(2)
0x9ea: @@ IsDialogEnd(Stack[-1])
0x9eb: Pop(0)
0x9ec: Pop(0); Push((bool) Stack[-1] == 0)
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9ee: @ sync()
0x9ef: Pop(0)
0x9f0: @@ IsDialogEnd(Stack[-1])
0x9f1: Pop(0)
0x9f2: GOTO 0x9ec

0x9f3: PushEmpty(object)
0x9f4: Stack[-1] = Stack[-10]
0x9f5: Call 0x11de

0x9f6: Pop(1)
0x9f7: @ StopDialog(Stack[-4])
0x9f8: Pop(0)
0x9f9: @@ GetReturnValue(Stack[-2])
0x9fa: Pop(0)
0x9fb: Stack[-10] = Stack[-2]
0x9fc: Return(); Pop(8)

0x9fd: Stack[-4] = 0
0x9fe: PushEmpty()
0x9ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa00: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa01: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa02: Push((int) 1)
0xa03: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa04: PushEmpty(bool)
0xa05: Stack[-1] = (bool) 0
0xa06: PushEmpty(bool, object)
0xa07: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa08: Call 0x13d7

0xa09: Pop(1)
0xa0a: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa0b: PushEmpty(bool, object)
0xa0c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0d: Call 0x1405

0xa0e: Pop(1)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa10: Stack[-1] = (bool) 1
0xa11: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa12: PushEmpty(string)
0xa13: Stack[-1] = "Neutral"
0xa14: Call 0xa72

0xa15: Pop(1)
0xa16: Push((int) 6829)
0xa17: @@ SetMessage(Stack[-1])
0xa18: Pop(1)
0xa19: @@ ClearReplies()
0xa1a: Pop(0)
0xa1b: Push((int) 6830)
0xa1c: Push((int) 7531)
0xa1d: Push((int) 7530)
0xa1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1f: Pop(3)
0xa20: Push((int) 6844)
0xa21: Push((int) 7547)
0xa22: Push((int) 7546)
0xa23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa24: Pop(3)
0xa25: Push((int) 6848)
0xa26: Push((int) 7547)
0xa27: Push((int) 7552)
0xa28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa29: Pop(3)
0xa2a: Push((int) 6849)
0xa2b: Push((int) 7535)
0xa2c: Push((int) 7554)
0xa2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2e: Pop(3)
0xa2f: GOTO 0xa54

0xa30: PushEmpty(string)
0xa31: Stack[-1] = "Neutral"
0xa32: Call 0xa72

0xa33: Pop(1)
0xa34: Push((int) 6850)
0xa35: @@ SetMessage(Stack[-1])
0xa36: Pop(1)
0xa37: @@ ClearReplies()
0xa38: Pop(0)
0xa39: PushEmpty(bool)
0xa3a: Stack[-1] = (bool) 0
0xa3b: PushEmpty(bool, object)
0xa3c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3d: Call 0x13e3

0xa3e: Pop(1)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa40: PushEmpty(bool, object)
0xa41: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa42: Call 0x13f9

0xa43: Pop(1)
0xa44: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa45: Stack[-1] = (bool) 1
0xa46: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa47: Push((int) 6851)
0xa48: Push((int) 7835)
0xa49: Push((int) 7557)
0xa4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4b: Pop(3)
0xa4c: Push((int) 7536)
0xa4d: Push((int) -1)
0xa4e: Push((int) 8318)
0xa4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa50: Pop(3)
0xa51: GOTO 0xa54

0xa52: Return(); Pop(0)

0xa53: GOTO 0xa02

0xa54: PushEmpty(bool)
0xa55: Call 0x1242

0xa56: Pop(0)
0xa57: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa58: @ lshWaitForAnimEnd()
0xa59: Pop(0)
0xa5a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa5c: GOTO 0xa62

0xa5d: PushEmpty(string)
0xa5e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa5f: Call 0x11e2

0xa60: Pop(1)
0xa61: GOTO 0xa58

0xa62: GOTO 0xa71

0xa63: Push("all")
0xa64: Push("idle")
0xa65: @ PlayAnimation(Stack[-2], Stack[-1])
0xa66: Pop(2)
0xa67: @ WaitForAnimEnd()
0xa68: Pop(0)
0xa69: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa6b: GOTO 0xa71

0xa6c: Push("all")
0xa6d: Push("idle")
0xa6e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6f: Pop(2)
0xa70: GOTO 0xa67

0xa71: Return(); Pop(0)

0xa72: PushEmpty()
0xa73: PushEmpty(bool)
0xa74: Call 0x1242

0xa75: Pop(0)
0xa76: Pop(1); Push((bool) Stack[-1] == 0)
0xa77: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa78: Return(); Pop(0)

0xa79: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7b: Return(); Pop(0)

0xa7c: PushEmpty(string)
0xa7d: Stack[-1] = Stack[-2]
0xa7e: Call 0x11e2

0xa7f: Pop(1)
0xa80: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa81: Return(); Pop(0)

0xa82: PushEmpty()
0xa83: Push((int) 1)
0xa84: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xa85: PushEmpty()
0xa86: Call 0x11f4

0xa87: Pop(0)
0xa88: Push((int) 7538)
0xa89: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa8b: PushEmpty(object, object)
0xa8c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa8e: Call 0x12bf

0xa8f: Pop(2)
0xa90: PushEmpty(object, object)
0xa91: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa92: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa93: Call 0x12cb

0xa94: Pop(2)
0xa95: Push((int) 7539)
0xa96: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa97: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xa98: PushEmpty(object, object)
0xa99: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9b: Call 0x12bf

0xa9c: Pop(2)
0xa9d: PushEmpty(object, object)
0xa9e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa9f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa0: Call 0x12cb

0xaa1: Pop(2)
0xaa2: Push((int) 7542)
0xaa3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaa5: PushEmpty(object, object)
0xaa6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa8: Call 0x12bf

0xaa9: Pop(2)
0xaaa: PushEmpty(object, object)
0xaab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaad: Call 0x12cb

0xaae: Pop(2)
0xaaf: Push((int) 7543)
0xab0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xab2: PushEmpty(object, object)
0xab3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xab4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab5: Call 0x12bf

0xab6: Pop(2)
0xab7: PushEmpty(object, object)
0xab8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xab9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaba: Call 0x12cb

0xabb: Pop(2)
0xabc: Push((int) 7841)
0xabd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xabe: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xabf: PushEmpty(object, object)
0xac0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xac1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xac2: Call 0x12c5

0xac3: Pop(2)
0xac4: Push((int) 7842)
0xac5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac6: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac7: PushEmpty(object, object)
0xac8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xac9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaca: Call 0x12c5

0xacb: Pop(2)
0xacc: Push((int) 7839)
0xacd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xace: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xacf: PushEmpty(object, object)
0xad0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad2: Call 0x12c5

0xad3: Pop(2)
0xad4: PushEmpty(object, object)
0xad5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad7: Call 0x12cb

0xad8: Pop(2)
0xad9: Push((int) 7843)
0xada: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xadc: PushEmpty(object, object)
0xadd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xade: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xadf: Call 0x12c5

0xae0: Pop(2)
0xae1: PushEmpty(object, object)
0xae2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xae3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae4: Call 0x12cb

0xae5: Pop(2)
0xae6: Push((int) 7529)
0xae7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xae9: PushEmpty(bool)
0xaea: Stack[-1] = (bool) 0
0xaeb: PushEmpty(bool, object)
0xaec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaed: Call 0x13d7

0xaee: Pop(1)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf0: PushEmpty(bool, object)
0xaf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf2: Call 0x1405

0xaf3: Pop(1)
0xaf4: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf5: Stack[-1] = (bool) 1
0xaf6: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xaf7: PushEmpty(string)
0xaf8: Stack[-1] = "Neutral"
0xaf9: Call 0xa72

0xafa: Pop(1)
0xafb: Push((int) 6829)
0xafc: @@ SetMessage(Stack[-1])
0xafd: Pop(1)
0xafe: @@ ClearReplies()
0xaff: Pop(0)
0xb00: Push((int) 6830)
0xb01: Push((int) 7531)
0xb02: Push((int) 7530)
0xb03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb04: Pop(3)
0xb05: Push((int) 6844)
0xb06: Push((int) 7547)
0xb07: Push((int) 7546)
0xb08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb09: Pop(3)
0xb0a: Push((int) 6848)
0xb0b: Push((int) 7547)
0xb0c: Push((int) 7552)
0xb0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0e: Pop(3)
0xb0f: Push((int) 6849)
0xb10: Push((int) 7535)
0xb11: Push((int) 7554)
0xb12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb13: Pop(3)
0xb14: Return(); Pop(0)

0xb15: PushEmpty(string)
0xb16: Stack[-1] = "Neutral"
0xb17: Call 0xa72

0xb18: Pop(1)
0xb19: Push((int) 6850)
0xb1a: @@ SetMessage(Stack[-1])
0xb1b: Pop(1)
0xb1c: @@ ClearReplies()
0xb1d: Pop(0)
0xb1e: PushEmpty(bool)
0xb1f: Stack[-1] = (bool) 0
0xb20: PushEmpty(bool, object)
0xb21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb22: Call 0x13e3

0xb23: Pop(1)
0xb24: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb25: PushEmpty(bool, object)
0xb26: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb27: Call 0x13f9

0xb28: Pop(1)
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: Stack[-1] = (bool) 1
0xb2b: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb2c: Push((int) 6851)
0xb2d: Push((int) 7835)
0xb2e: Push((int) 7557)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: Push((int) 7536)
0xb32: Push((int) -1)
0xb33: Push((int) 8318)
0xb34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb35: Pop(3)
0xb36: Return(); Pop(0)

0xb37: Push((int) 7835)
0xb38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb39: IF (Stack[-1] == 0) GOTO 0xb4e; Pop(1)

0xb3a: PushEmpty(string)
0xb3b: Stack[-1] = "Neutral"
0xb3c: Call 0xa72

0xb3d: Pop(1)
0xb3e: Push((int) 7116)
0xb3f: @@ SetMessage(Stack[-1])
0xb40: Pop(1)
0xb41: @@ ClearReplies()
0xb42: Pop(0)
0xb43: Push((int) 7117)
0xb44: Push((int) 7840)
0xb45: Push((int) 7836)
0xb46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb47: Pop(3)
0xb48: Push((int) 7118)
0xb49: Push((int) 7838)
0xb4a: Push((int) 7837)
0xb4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4c: Pop(3)
0xb4d: Return(); Pop(0)

0xb4e: Push((int) 7838)
0xb4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb50: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb51: PushEmpty(string)
0xb52: Stack[-1] = "Neutral"
0xb53: Call 0xa72

0xb54: Pop(1)
0xb55: Push((int) 7119)
0xb56: @@ SetMessage(Stack[-1])
0xb57: Pop(1)
0xb58: @@ ClearReplies()
0xb59: Pop(0)
0xb5a: Push((int) 7120)
0xb5b: Push((int) -1)
0xb5c: Push((int) 7839)
0xb5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5e: Pop(3)
0xb5f: Push((int) 7124)
0xb60: Push((int) -1)
0xb61: Push((int) 7843)
0xb62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb63: Pop(3)
0xb64: Return(); Pop(0)

0xb65: Push((int) 7840)
0xb66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb67: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb68: PushEmpty(string)
0xb69: Stack[-1] = "Neutral"
0xb6a: Call 0xa72

0xb6b: Pop(1)
0xb6c: Push((int) 7121)
0xb6d: @@ SetMessage(Stack[-1])
0xb6e: Pop(1)
0xb6f: @@ ClearReplies()
0xb70: Pop(0)
0xb71: Push((int) 7125)
0xb72: Push((int) 7845)
0xb73: Push((int) 7844)
0xb74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb75: Pop(3)
0xb76: Push((int) 7127)
0xb77: Push((int) 7847)
0xb78: Push((int) 7846)
0xb79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7a: Pop(3)
0xb7b: Return(); Pop(0)

0xb7c: Push((int) 7847)
0xb7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7e: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb7f: PushEmpty(string)
0xb80: Stack[-1] = "Neutral"
0xb81: Call 0xa72

0xb82: Pop(1)
0xb83: Push((int) 7128)
0xb84: @@ SetMessage(Stack[-1])
0xb85: Pop(1)
0xb86: @@ ClearReplies()
0xb87: Pop(0)
0xb88: Push((int) 7129)
0xb89: Push((int) 7845)
0xb8a: Push((int) 7848)
0xb8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8c: Pop(3)
0xb8d: Return(); Pop(0)

0xb8e: Push((int) 7845)
0xb8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb90: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xb91: PushEmpty(string)
0xb92: Stack[-1] = "Neutral"
0xb93: Call 0xa72

0xb94: Pop(1)
0xb95: Push((int) 7126)
0xb96: @@ SetMessage(Stack[-1])
0xb97: Pop(1)
0xb98: @@ ClearReplies()
0xb99: Pop(0)
0xb9a: Push((int) 7122)
0xb9b: Push((int) -1)
0xb9c: Push((int) 7841)
0xb9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9e: Pop(3)
0xb9f: Push((int) 7123)
0xba0: Push((int) -1)
0xba1: Push((int) 7842)
0xba2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba3: Pop(3)
0xba4: Return(); Pop(0)

0xba5: Push((int) 7547)
0xba6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba7: IF (Stack[-1] == 0) GOTO 0xbbc; Pop(1)

0xba8: PushEmpty(string)
0xba9: Stack[-1] = "Neutral"
0xbaa: Call 0xa72

0xbab: Pop(1)
0xbac: Push((int) 6845)
0xbad: @@ SetMessage(Stack[-1])
0xbae: Pop(1)
0xbaf: @@ ClearReplies()
0xbb0: Pop(0)
0xbb1: Push((int) 6846)
0xbb2: Push((int) 7533)
0xbb3: Push((int) 7548)
0xbb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb5: Pop(3)
0xbb6: Push((int) 6847)
0xbb7: Push((int) 7533)
0xbb8: Push((int) 7550)
0xbb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbba: Pop(3)
0xbbb: Return(); Pop(0)

0xbbc: Push((int) 7531)
0xbbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbe: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbbf: PushEmpty(string)
0xbc0: Stack[-1] = "Neutral"
0xbc1: Call 0xa72

0xbc2: Pop(1)
0xbc3: Push((int) 6831)
0xbc4: @@ SetMessage(Stack[-1])
0xbc5: Pop(1)
0xbc6: @@ ClearReplies()
0xbc7: Pop(0)
0xbc8: Push((int) 6832)
0xbc9: Push((int) 7533)
0xbca: Push((int) 7532)
0xbcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcc: Pop(3)
0xbcd: Return(); Pop(0)

0xbce: Push((int) 7533)
0xbcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd0: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbd1: PushEmpty(string)
0xbd2: Stack[-1] = "Neutral"
0xbd3: Call 0xa72

0xbd4: Pop(1)
0xbd5: Push((int) 6833)
0xbd6: @@ SetMessage(Stack[-1])
0xbd7: Pop(1)
0xbd8: @@ ClearReplies()
0xbd9: Pop(0)
0xbda: Push((int) 6834)
0xbdb: Push((int) 7535)
0xbdc: Push((int) 7534)
0xbdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbde: Pop(3)
0xbdf: Push((int) 6843)
0xbe0: Push((int) 7535)
0xbe1: Push((int) 7544)
0xbe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe3: Pop(3)
0xbe4: Push((int) 6842)
0xbe5: Push((int) -1)
0xbe6: Push((int) 7543)
0xbe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe8: Pop(3)
0xbe9: Return(); Pop(0)

0xbea: Push((int) 7535)
0xbeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbec: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xbed: PushEmpty(string)
0xbee: Stack[-1] = "Neutral"
0xbef: Call 0xa72

0xbf0: Pop(1)
0xbf1: Push((int) 6835)
0xbf2: @@ SetMessage(Stack[-1])
0xbf3: Pop(1)
0xbf4: @@ ClearReplies()
0xbf5: Pop(0)
0xbf6: Push((int) 6836)
0xbf7: Push((int) 7537)
0xbf8: Push((int) 7536)
0xbf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfa: Pop(3)
0xbfb: Push((int) 6840)
0xbfc: Push((int) 7537)
0xbfd: Push((int) 7540)
0xbfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbff: Pop(3)
0xc00: Push((int) 6841)
0xc01: Push((int) -1)
0xc02: Push((int) 7542)
0xc03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc04: Pop(3)
0xc05: Return(); Pop(0)

0xc06: Push((int) 7537)
0xc07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc09: PushEmpty(string)
0xc0a: Stack[-1] = "Neutral"
0xc0b: Call 0xa72

0xc0c: Pop(1)
0xc0d: Push((int) 6837)
0xc0e: @@ SetMessage(Stack[-1])
0xc0f: Pop(1)
0xc10: @@ ClearReplies()
0xc11: Pop(0)
0xc12: Push((int) 6838)
0xc13: Push((int) -1)
0xc14: Push((int) 7538)
0xc15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc16: Pop(3)
0xc17: Push((int) 6839)
0xc18: Push((int) -1)
0xc19: Push((int) 7539)
0xc1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1b: Pop(3)
0xc1c: Return(); Pop(0)

0xc1d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc1e: PushEmpty(bool)
0xc1f: Call 0x1242

0xc20: Pop(0)
0xc21: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc22: @ lshStopAnimation()
0xc23: Pop(0)
0xc24: GOTO 0xc27

0xc25: @ StopAnimation()
0xc26: Pop(0)
0xc27: Return(); Pop(0)

0xc28: GOTO 0xa83

0xc29: Return(); Pop(0)

0xc2a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc2b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc2c: PushEmpty(bool, object)
0xc2d: Stack[-1] = Stack[-11]
0xc2e: Call 0x11a6

0xc2f: Pop(1)
0xc30: Pop(1); Push((bool) Stack[-1] == 0)
0xc31: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc32: Stack[-10] = (int) -2
0xc33: Return(); Pop(8)

0xc34: @ CreateDialog(Stack[-4])
0xc35: Pop(0)
0xc36: PushEmpty(int)
0xc37: Call 0x123e

0xc38: Pop(0)
0xc39: @@ SetNPCName(Stack[-1])
0xc3a: Pop(1)
0xc3b: PushEmpty(string)
0xc3c: Call 0x1240

0xc3d: Pop(0)
0xc3e: @@ SetPhoto(Stack[-1])
0xc3f: Pop(1)
0xc40: PushEmpty(int)
0xc41: Call 0x15a1

0xc42: Pop(0)
0xc43: @@ SetPlayerName(Stack[-1])
0xc44: Pop(1)
0xc45: Stack[-2] = (int) -1
0xc46: @ IsOverrideActive(Stack[-3])
0xc47: Pop(0)
0xc48: Push(Stack[-3])
0xc49: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc4a: Stack[-10] = (int) -2
0xc4b: Return(); Pop(8)

0xc4c: @ DoDialog(Stack[-4])
0xc4d: Pop(0)
0xc4e: PushEmpty(object, object)
0xc4f: Stack[-2] = Stack[-11]
0xc50: Stack[-1] = Stack[-6]
0xc51: Push(-2, 4); TaskCall(11)
0xc52: Call 0xc69

0xc53: Pop(-2, 4); TaskReturn
0xc54: Pop(2)
0xc55: @@ IsDialogEnd(Stack[-1])
0xc56: Pop(0)
0xc57: Pop(0); Push((bool) Stack[-1] == 0)
0xc58: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc59: @ sync()
0xc5a: Pop(0)
0xc5b: @@ IsDialogEnd(Stack[-1])
0xc5c: Pop(0)
0xc5d: GOTO 0xc57

0xc5e: PushEmpty(object)
0xc5f: Stack[-1] = Stack[-10]
0xc60: Call 0x11de

0xc61: Pop(1)
0xc62: @ StopDialog(Stack[-4])
0xc63: Pop(0)
0xc64: @@ GetReturnValue(Stack[-2])
0xc65: Pop(0)
0xc66: Stack[-10] = Stack[-2]
0xc67: Return(); Pop(8)

0xc68: Stack[-4] = 0
0xc69: PushEmpty()
0xc6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc6c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc6d: Push((int) 1)
0xc6e: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xc6f: PushEmpty(bool)
0xc70: Stack[-1] = (bool) 0
0xc71: PushEmpty(bool, object)
0xc72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc73: Call 0x1465

0xc74: Pop(1)
0xc75: Pop(1); Push((bool) Stack[-1] == 0)
0xc76: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc77: PushEmpty(bool, object)
0xc78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc79: Call 0x1489

0xc7a: Pop(1)
0xc7b: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc7c: Stack[-1] = (bool) 1
0xc7d: IF (Stack[-1] == 0) GOTO 0xc92; Pop(1)

0xc7e: PushEmpty(object, object)
0xc7f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc80: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc81: Call 0x13d1

0xc82: Pop(2)
0xc83: PushEmpty(string)
0xc84: Stack[-1] = "Neutral"
0xc85: Call 0xd05

0xc86: Pop(1)
0xc87: Push((int) 9043)
0xc88: @@ SetMessage(Stack[-1])
0xc89: Pop(1)
0xc8a: @@ ClearReplies()
0xc8b: Pop(0)
0xc8c: Push((int) 9044)
0xc8d: Push((int) 9921)
0xc8e: Push((int) 9920)
0xc8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc90: Pop(3)
0xc91: GOTO 0xce7

0xc92: PushEmpty(object, object)
0xc93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc95: Call 0x13d1

0xc96: Pop(2)
0xc97: PushEmpty(string)
0xc98: Stack[-1] = "Neutral"
0xc99: Call 0xd05

0xc9a: Pop(1)
0xc9b: Push((int) 9024)
0xc9c: @@ SetMessage(Stack[-1])
0xc9d: Pop(1)
0xc9e: @@ ClearReplies()
0xc9f: Pop(0)
0xca0: PushEmpty(bool)
0xca1: Stack[-1] = (bool) 0
0xca2: PushEmpty(bool, object)
0xca3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca4: Call 0x1441

0xca5: Pop(1)
0xca6: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xca7: PushEmpty(bool, object)
0xca8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca9: Call 0x1465

0xcaa: Pop(1)
0xcab: Pop(1); Push((bool) Stack[-1] == 0)
0xcac: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcad: Stack[-1] = (bool) 1
0xcae: IF (Stack[-1] == 0) GOTO 0xcb4; Pop(1)

0xcaf: Push((int) 11376)
0xcb0: Push((int) 12576)
0xcb1: Push((int) 12575)
0xcb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb3: Pop(3)
0xcb4: PushEmpty(bool)
0xcb5: Stack[-1] = (bool) 0
0xcb6: PushEmpty(bool, object)
0xcb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb8: Call 0x1465

0xcb9: Pop(1)
0xcba: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcbb: PushEmpty(bool, object)
0xcbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcbd: Call 0x1471

0xcbe: Pop(1)
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcc0: Stack[-1] = (bool) 1
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc2: Push((int) 9042)
0xcc3: Push((int) 9941)
0xcc4: Push((int) 9918)
0xcc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc6: Pop(3)
0xcc7: PushEmpty(bool)
0xcc8: Stack[-1] = (bool) 0
0xcc9: PushEmpty(bool, object)
0xcca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xccb: Call 0x14a1

0xccc: Pop(1)
0xccd: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcce: PushEmpty(bool, object)
0xccf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd0: Call 0x14ad

0xcd1: Pop(1)
0xcd2: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd3: Stack[-1] = (bool) 1
0xcd4: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd5: Push((int) 10442)
0xcd6: Push((int) 11512)
0xcd7: Push((int) 11511)
0xcd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd9: Pop(3)
0xcda: Push((int) 9041)
0xcdb: Push((int) 9899)
0xcdc: Push((int) 9917)
0xcdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcde: Pop(3)
0xcdf: Push((int) 11147)
0xce0: Push((int) -1)
0xce1: Push((int) 12337)
0xce2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce3: Pop(3)
0xce4: GOTO 0xce7

0xce5: Return(); Pop(0)

0xce6: GOTO 0xc6d

0xce7: PushEmpty(bool)
0xce8: Call 0x1242

0xce9: Pop(0)
0xcea: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xceb: @ lshWaitForAnimEnd()
0xcec: Pop(0)
0xced: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcee: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcef: GOTO 0xcf5

0xcf0: PushEmpty(string)
0xcf1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcf2: Call 0x11e2

0xcf3: Pop(1)
0xcf4: GOTO 0xceb

0xcf5: GOTO 0xd04

0xcf6: Push("all")
0xcf7: Push("idle")
0xcf8: @ PlayAnimation(Stack[-2], Stack[-1])
0xcf9: Pop(2)
0xcfa: @ WaitForAnimEnd()
0xcfb: Pop(0)
0xcfc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcfd: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcfe: GOTO 0xd04

0xcff: Push("all")
0xd00: Push("idle")
0xd01: @ PlayAnimation(Stack[-2], Stack[-1])
0xd02: Pop(2)
0xd03: GOTO 0xcfa

0xd04: Return(); Pop(0)

0xd05: PushEmpty()
0xd06: PushEmpty(bool)
0xd07: Call 0x1242

0xd08: Pop(0)
0xd09: Pop(1); Push((bool) Stack[-1] == 0)
0xd0a: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd0b: Return(); Pop(0)

0xd0c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd0d: IF (Stack[-1] == 0) GOTO 0xd0f; Pop(1)

0xd0e: Return(); Pop(0)

0xd0f: PushEmpty(string)
0xd10: Stack[-1] = Stack[-2]
0xd11: Call 0x11e2

0xd12: Pop(1)
0xd13: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd14: Return(); Pop(0)

0xd15: PushEmpty()
0xd16: Push((int) 1)
0xd17: IF (Stack[-1] == 0) GOTO 0x1022; Pop(1)

0xd18: PushEmpty()
0xd19: Call 0x11f4

0xd1a: Pop(0)
0xd1b: Push((int) 11255)
0xd1c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1d: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd1e: PushEmpty(object, object)
0xd1f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd20: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd21: Call 0x133b

0xd22: Pop(2)
0xd23: PushEmpty(object, object)
0xd24: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd25: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd26: Call 0x1341

0xd27: Pop(2)
0xd28: PushEmpty(object, object)
0xd29: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2b: Call 0x12fc

0xd2c: Pop(2)
0xd2d: Push((int) 11278)
0xd2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2f: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd30: PushEmpty(object, object)
0xd31: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd32: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd33: Call 0x133b

0xd34: Pop(2)
0xd35: Push((int) 9939)
0xd36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd37: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd38: PushEmpty(object, object)
0xd39: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3b: Call 0x133b

0xd3c: Pop(2)
0xd3d: PushEmpty(object, object)
0xd3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd40: Call 0x1341

0xd41: Pop(2)
0xd42: PushEmpty(object, object)
0xd43: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd44: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd45: Call 0x12fc

0xd46: Pop(2)
0xd47: Push((int) 11274)
0xd48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd49: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd4a: PushEmpty(object, object)
0xd4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4d: Call 0x137c

0xd4e: Pop(2)
0xd4f: Push((int) 11275)
0xd50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd51: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd52: PushEmpty(object, object)
0xd53: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd55: Call 0x133b

0xd56: Pop(2)
0xd57: Push((int) 11276)
0xd58: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd59: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd5a: PushEmpty(object, object)
0xd5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5d: Call 0x133b

0xd5e: Pop(2)
0xd5f: Push((int) 12577)
0xd60: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd61: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd62: PushEmpty(object, object)
0xd63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd65: Call 0x1341

0xd66: Pop(2)
0xd67: Push((int) 9954)
0xd68: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd69: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd6a: PushEmpty(object, object)
0xd6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6d: Call 0x130c

0xd6e: Pop(2)
0xd6f: PushEmpty(object, object)
0xd70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd72: Call 0x1329

0xd73: Pop(2)
0xd74: Push((int) 9955)
0xd75: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd76: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd77: PushEmpty(object, object)
0xd78: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd79: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7a: Call 0x130c

0xd7b: Pop(2)
0xd7c: PushEmpty(object, object)
0xd7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7f: Call 0x1329

0xd80: Pop(2)
0xd81: Push((int) 12338)
0xd82: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd83: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd84: PushEmpty(object, object)
0xd85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd87: Call 0x130c

0xd88: Pop(2)
0xd89: PushEmpty(object, object)
0xd8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8c: Call 0x1329

0xd8d: Pop(2)
0xd8e: Push((int) 11515)
0xd8f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd90: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xd91: PushEmpty(object, object)
0xd92: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd93: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd94: Call 0x1383

0xd95: Pop(2)
0xd96: PushEmpty(object, object)
0xd97: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd99: Call 0x1371

0xd9a: Pop(2)
0xd9b: PushEmpty(object, object)
0xd9c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9e: Call 0x12b9

0xd9f: Pop(2)
0xda0: PushEmpty(object, object)
0xda1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda3: Call 0x137c

0xda4: Pop(2)
0xda5: Push((int) 9915)
0xda6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda7: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xda8: PushEmpty(object, object)
0xda9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdab: Call 0x1371

0xdac: Pop(2)
0xdad: PushEmpty(object, object)
0xdae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb0: Call 0x12b9

0xdb1: Pop(2)
0xdb2: Push((int) 9919)
0xdb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb4: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xdb5: PushEmpty(bool)
0xdb6: Stack[-1] = (bool) 0
0xdb7: PushEmpty(bool, object)
0xdb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb9: Call 0x1465

0xdba: Pop(1)
0xdbb: Pop(1); Push((bool) Stack[-1] == 0)
0xdbc: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdbd: PushEmpty(bool, object)
0xdbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdbf: Call 0x1489

0xdc0: Pop(1)
0xdc1: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdc2: Stack[-1] = (bool) 1
0xdc3: IF (Stack[-1] == 0) GOTO 0xdd8; Pop(1)

0xdc4: PushEmpty(object, object)
0xdc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc7: Call 0x13d1

0xdc8: Pop(2)
0xdc9: PushEmpty(string)
0xdca: Stack[-1] = "Neutral"
0xdcb: Call 0xd05

0xdcc: Pop(1)
0xdcd: Push((int) 9043)
0xdce: @@ SetMessage(Stack[-1])
0xdcf: Pop(1)
0xdd0: @@ ClearReplies()
0xdd1: Pop(0)
0xdd2: Push((int) 9044)
0xdd3: Push((int) 9921)
0xdd4: Push((int) 9920)
0xdd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd6: Pop(3)
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty(object, object)
0xdd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xddb: Call 0x13d1

0xddc: Pop(2)
0xddd: PushEmpty(string)
0xdde: Stack[-1] = "Neutral"
0xddf: Call 0xd05

0xde0: Pop(1)
0xde1: Push((int) 9024)
0xde2: @@ SetMessage(Stack[-1])
0xde3: Pop(1)
0xde4: @@ ClearReplies()
0xde5: Pop(0)
0xde6: PushEmpty(bool)
0xde7: Stack[-1] = (bool) 0
0xde8: PushEmpty(bool, object)
0xde9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdea: Call 0x1441

0xdeb: Pop(1)
0xdec: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xded: PushEmpty(bool, object)
0xdee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdef: Call 0x1465

0xdf0: Pop(1)
0xdf1: Pop(1); Push((bool) Stack[-1] == 0)
0xdf2: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xdf3: Stack[-1] = (bool) 1
0xdf4: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf5: Push((int) 11376)
0xdf6: Push((int) 12576)
0xdf7: Push((int) 12575)
0xdf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf9: Pop(3)
0xdfa: PushEmpty(bool)
0xdfb: Stack[-1] = (bool) 0
0xdfc: PushEmpty(bool, object)
0xdfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdfe: Call 0x1465

0xdff: Pop(1)
0xe00: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe01: PushEmpty(bool, object)
0xe02: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe03: Call 0x1471

0xe04: Pop(1)
0xe05: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe06: Stack[-1] = (bool) 1
0xe07: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe08: Push((int) 9042)
0xe09: Push((int) 9941)
0xe0a: Push((int) 9918)
0xe0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0c: Pop(3)
0xe0d: PushEmpty(bool)
0xe0e: Stack[-1] = (bool) 0
0xe0f: PushEmpty(bool, object)
0xe10: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe11: Call 0x14a1

0xe12: Pop(1)
0xe13: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe14: PushEmpty(bool, object)
0xe15: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe16: Call 0x14ad

0xe17: Pop(1)
0xe18: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe19: Stack[-1] = (bool) 1
0xe1a: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe1b: Push((int) 10442)
0xe1c: Push((int) 11512)
0xe1d: Push((int) 11511)
0xe1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1f: Pop(3)
0xe20: Push((int) 9041)
0xe21: Push((int) 9899)
0xe22: Push((int) 9917)
0xe23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe24: Pop(3)
0xe25: Push((int) 11147)
0xe26: Push((int) -1)
0xe27: Push((int) 12337)
0xe28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe29: Pop(3)
0xe2a: Return(); Pop(0)

0xe2b: Push((int) 9899)
0xe2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2d: IF (Stack[-1] == 0) GOTO 0xe4c; Pop(1)

0xe2e: PushEmpty(string)
0xe2f: Stack[-1] = "Neutral"
0xe30: Call 0xd05

0xe31: Pop(1)
0xe32: Push((int) 9025)
0xe33: @@ SetMessage(Stack[-1])
0xe34: Pop(1)
0xe35: @@ ClearReplies()
0xe36: Pop(0)
0xe37: Push((int) 9026)
0xe38: Push((int) 9901)
0xe39: Push((int) 9900)
0xe3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3b: Pop(3)
0xe3c: Push((int) 9033)
0xe3d: Push((int) -1)
0xe3e: Push((int) 9908)
0xe3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(3)
0xe41: PushEmpty(bool, object)
0xe42: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe43: Call 0x1495

0xe44: Pop(1)
0xe45: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe46: Push((int) 9034)
0xe47: Push((int) 9910)
0xe48: Push((int) 9909)
0xe49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4a: Pop(3)
0xe4b: Return(); Pop(0)

0xe4c: Push((int) 9910)
0xe4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4e: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe4f: PushEmpty(string)
0xe50: Stack[-1] = "Neutral"
0xe51: Call 0xd05

0xe52: Pop(1)
0xe53: Push((int) 9035)
0xe54: @@ SetMessage(Stack[-1])
0xe55: Pop(1)
0xe56: @@ ClearReplies()
0xe57: Pop(0)
0xe58: Push((int) 9036)
0xe59: Push((int) 9901)
0xe5a: Push((int) 9911)
0xe5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5c: Pop(3)
0xe5d: Push((int) 9037)
0xe5e: Push((int) 9914)
0xe5f: Push((int) 9913)
0xe60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe61: Pop(3)
0xe62: Return(); Pop(0)

0xe63: Push((int) 9914)
0xe64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe65: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe66: PushEmpty(string)
0xe67: Stack[-1] = "Neutral"
0xe68: Call 0xd05

0xe69: Pop(1)
0xe6a: Push((int) 9038)
0xe6b: @@ SetMessage(Stack[-1])
0xe6c: Pop(1)
0xe6d: @@ ClearReplies()
0xe6e: Pop(0)
0xe6f: Push((int) 9039)
0xe70: Push((int) -1)
0xe71: Push((int) 9915)
0xe72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe73: Pop(3)
0xe74: Push((int) 9040)
0xe75: Push((int) -1)
0xe76: Push((int) 9916)
0xe77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe78: Pop(3)
0xe79: Return(); Pop(0)

0xe7a: Push((int) 9901)
0xe7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7c: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe7d: PushEmpty(string)
0xe7e: Stack[-1] = "Neutral"
0xe7f: Call 0xd05

0xe80: Pop(1)
0xe81: Push((int) 9027)
0xe82: @@ SetMessage(Stack[-1])
0xe83: Pop(1)
0xe84: @@ ClearReplies()
0xe85: Pop(0)
0xe86: Push((int) 9028)
0xe87: Push((int) 9903)
0xe88: Push((int) 9902)
0xe89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8a: Pop(3)
0xe8b: Push((int) 9032)
0xe8c: Push((int) 9903)
0xe8d: Push((int) 9906)
0xe8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8f: Pop(3)
0xe90: Return(); Pop(0)

0xe91: Push((int) 9903)
0xe92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe93: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xe94: PushEmpty(string)
0xe95: Stack[-1] = "Neutral"
0xe96: Call 0xd05

0xe97: Pop(1)
0xe98: Push((int) 9029)
0xe99: @@ SetMessage(Stack[-1])
0xe9a: Pop(1)
0xe9b: @@ ClearReplies()
0xe9c: Pop(0)
0xe9d: Push((int) 9030)
0xe9e: Push((int) -1)
0xe9f: Push((int) 9904)
0xea0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea1: Pop(3)
0xea2: Push((int) 9031)
0xea3: Push((int) -1)
0xea4: Push((int) 9905)
0xea5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea6: Pop(3)
0xea7: Return(); Pop(0)

0xea8: Push((int) 11512)
0xea9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeaa: IF (Stack[-1] == 0) GOTO 0xeba; Pop(1)

0xeab: PushEmpty(string)
0xeac: Stack[-1] = "Neutral"
0xead: Call 0xd05

0xeae: Pop(1)
0xeaf: Push((int) 10443)
0xeb0: @@ SetMessage(Stack[-1])
0xeb1: Pop(1)
0xeb2: @@ ClearReplies()
0xeb3: Pop(0)
0xeb4: Push((int) 10444)
0xeb5: Push((int) 11514)
0xeb6: Push((int) 11513)
0xeb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb8: Pop(3)
0xeb9: Return(); Pop(0)

0xeba: Push((int) 11514)
0xebb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebc: IF (Stack[-1] == 0) GOTO 0xecc; Pop(1)

0xebd: PushEmpty(string)
0xebe: Stack[-1] = "Neutral"
0xebf: Call 0xd05

0xec0: Pop(1)
0xec1: Push((int) 10445)
0xec2: @@ SetMessage(Stack[-1])
0xec3: Pop(1)
0xec4: @@ ClearReplies()
0xec5: Pop(0)
0xec6: Push((int) 10446)
0xec7: Push((int) -1)
0xec8: Push((int) 11515)
0xec9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeca: Pop(3)
0xecb: Return(); Pop(0)

0xecc: Push((int) 9941)
0xecd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xece: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xecf: PushEmpty(string)
0xed0: Stack[-1] = "Neutral"
0xed1: Call 0xd05

0xed2: Pop(1)
0xed3: Push((int) 9064)
0xed4: @@ SetMessage(Stack[-1])
0xed5: Pop(1)
0xed6: @@ ClearReplies()
0xed7: Pop(0)
0xed8: Push((int) 9065)
0xed9: Push((int) 9943)
0xeda: Push((int) 9942)
0xedb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedc: Pop(3)
0xedd: Return(); Pop(0)

0xede: Push((int) 9943)
0xedf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee0: IF (Stack[-1] == 0) GOTO 0xef5; Pop(1)

0xee1: PushEmpty(string)
0xee2: Stack[-1] = "Neutral"
0xee3: Call 0xd05

0xee4: Pop(1)
0xee5: Push((int) 9066)
0xee6: @@ SetMessage(Stack[-1])
0xee7: Pop(1)
0xee8: @@ ClearReplies()
0xee9: Pop(0)
0xeea: Push((int) 9067)
0xeeb: Push((int) 9946)
0xeec: Push((int) 9944)
0xeed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeee: Pop(3)
0xeef: Push((int) 9068)
0xef0: Push((int) 9949)
0xef1: Push((int) 9945)
0xef2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef3: Pop(3)
0xef4: Return(); Pop(0)

0xef5: Push((int) 9949)
0xef6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef7: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xef8: PushEmpty(string)
0xef9: Stack[-1] = "Neutral"
0xefa: Call 0xd05

0xefb: Pop(1)
0xefc: Push((int) 9072)
0xefd: @@ SetMessage(Stack[-1])
0xefe: Pop(1)
0xeff: @@ ClearReplies()
0xf00: Pop(0)
0xf01: Push((int) 9073)
0xf02: Push((int) 9948)
0xf03: Push((int) 9950)
0xf04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf05: Pop(3)
0xf06: Return(); Pop(0)

0xf07: Push((int) 9946)
0xf08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf09: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf0a: PushEmpty(string)
0xf0b: Stack[-1] = "Neutral"
0xf0c: Call 0xd05

0xf0d: Pop(1)
0xf0e: Push((int) 9069)
0xf0f: @@ SetMessage(Stack[-1])
0xf10: Pop(1)
0xf11: @@ ClearReplies()
0xf12: Pop(0)
0xf13: Push((int) 9074)
0xf14: Push((int) 9953)
0xf15: Push((int) 9952)
0xf16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf17: Pop(3)
0xf18: Push((int) 9070)
0xf19: Push((int) 9948)
0xf1a: Push((int) 9947)
0xf1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1c: Pop(3)
0xf1d: Return(); Pop(0)

0xf1e: Push((int) 9948)
0xf1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf20: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf21: PushEmpty(string)
0xf22: Stack[-1] = "Neutral"
0xf23: Call 0xd05

0xf24: Pop(1)
0xf25: Push((int) 9071)
0xf26: @@ SetMessage(Stack[-1])
0xf27: Pop(1)
0xf28: @@ ClearReplies()
0xf29: Pop(0)
0xf2a: Push((int) 11149)
0xf2b: Push((int) -1)
0xf2c: Push((int) 12338)
0xf2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2e: Pop(3)
0xf2f: Return(); Pop(0)

0xf30: Push((int) 9953)
0xf31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf32: IF (Stack[-1] == 0) GOTO 0xf47; Pop(1)

0xf33: PushEmpty(string)
0xf34: Stack[-1] = "Neutral"
0xf35: Call 0xd05

0xf36: Pop(1)
0xf37: Push((int) 9075)
0xf38: @@ SetMessage(Stack[-1])
0xf39: Pop(1)
0xf3a: @@ ClearReplies()
0xf3b: Pop(0)
0xf3c: Push((int) 9076)
0xf3d: Push((int) -1)
0xf3e: Push((int) 9954)
0xf3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf40: Pop(3)
0xf41: Push((int) 9077)
0xf42: Push((int) -1)
0xf43: Push((int) 9955)
0xf44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf45: Pop(3)
0xf46: Return(); Pop(0)

0xf47: Push((int) 12576)
0xf48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf49: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf4a: PushEmpty(string)
0xf4b: Stack[-1] = "Neutral"
0xf4c: Call 0xd05

0xf4d: Pop(1)
0xf4e: Push((int) 11377)
0xf4f: @@ SetMessage(Stack[-1])
0xf50: Pop(1)
0xf51: @@ ClearReplies()
0xf52: Pop(0)
0xf53: Push((int) 11378)
0xf54: Push((int) -1)
0xf55: Push((int) 12577)
0xf56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf57: Pop(3)
0xf58: Return(); Pop(0)

0xf59: Push((int) 9921)
0xf5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5b: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf5c: PushEmpty(string)
0xf5d: Stack[-1] = "Neutral"
0xf5e: Call 0xd05

0xf5f: Pop(1)
0xf60: Push((int) 9045)
0xf61: @@ SetMessage(Stack[-1])
0xf62: Pop(1)
0xf63: @@ ClearReplies()
0xf64: Pop(0)
0xf65: Push((int) 10222)
0xf66: Push((int) 11270)
0xf67: Push((int) 11269)
0xf68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf69: Pop(3)
0xf6a: Return(); Pop(0)

0xf6b: Push((int) 11270)
0xf6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6d: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf6e: PushEmpty(string)
0xf6f: Stack[-1] = "Neutral"
0xf70: Call 0xd05

0xf71: Pop(1)
0xf72: Push((int) 10223)
0xf73: @@ SetMessage(Stack[-1])
0xf74: Pop(1)
0xf75: @@ ClearReplies()
0xf76: Pop(0)
0xf77: Push((int) 9046)
0xf78: Push((int) 11280)
0xf79: Push((int) 9922)
0xf7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7b: Pop(3)
0xf7c: Push((int) 10224)
0xf7d: Push((int) 9929)
0xf7e: Push((int) 11271)
0xf7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf80: Pop(3)
0xf81: PushEmpty(bool, object)
0xf82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf83: Call 0x1495

0xf84: Pop(1)
0xf85: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf86: Push((int) 9047)
0xf87: Push((int) 9924)
0xf88: Push((int) 9923)
0xf89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8a: Pop(3)
0xf8b: Return(); Pop(0)

0xf8c: Push((int) 9924)
0xf8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8e: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xf8f: PushEmpty(string)
0xf90: Stack[-1] = "Neutral"
0xf91: Call 0xd05

0xf92: Pop(1)
0xf93: Push((int) 9048)
0xf94: @@ SetMessage(Stack[-1])
0xf95: Pop(1)
0xf96: @@ ClearReplies()
0xf97: Pop(0)
0xf98: Push((int) 9049)
0xf99: Push((int) 9929)
0xf9a: Push((int) 9925)
0xf9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9c: Pop(3)
0xf9d: Push((int) 10225)
0xf9e: Push((int) 11273)
0xf9f: Push((int) 11272)
0xfa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa1: Pop(3)
0xfa2: Return(); Pop(0)

0xfa3: Push((int) 11273)
0xfa4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa5: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfa6: PushEmpty(string)
0xfa7: Stack[-1] = "Neutral"
0xfa8: Call 0xd05

0xfa9: Pop(1)
0xfaa: Push((int) 10226)
0xfab: @@ SetMessage(Stack[-1])
0xfac: Pop(1)
0xfad: @@ ClearReplies()
0xfae: Pop(0)
0xfaf: Push((int) 10227)
0xfb0: Push((int) -1)
0xfb1: Push((int) 11274)
0xfb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb3: Pop(3)
0xfb4: Push((int) 10228)
0xfb5: Push((int) -1)
0xfb6: Push((int) 11275)
0xfb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb8: Pop(3)
0xfb9: Push((int) 10229)
0xfba: Push((int) -1)
0xfbb: Push((int) 11276)
0xfbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfbd: Pop(3)
0xfbe: Return(); Pop(0)

0xfbf: Push((int) 9929)
0xfc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc1: IF (Stack[-1] == 0) GOTO 0xfd1; Pop(1)

0xfc2: PushEmpty(string)
0xfc3: Stack[-1] = "Neutral"
0xfc4: Call 0xd05

0xfc5: Pop(1)
0xfc6: Push((int) 9053)
0xfc7: @@ SetMessage(Stack[-1])
0xfc8: Pop(1)
0xfc9: @@ ClearReplies()
0xfca: Pop(0)
0xfcb: Push((int) 9060)
0xfcc: Push((int) 9938)
0xfcd: Push((int) 9937)
0xfce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfcf: Pop(3)
0xfd0: Return(); Pop(0)

0xfd1: Push((int) 9938)
0xfd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd3: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfd4: PushEmpty(string)
0xfd5: Stack[-1] = "Neutral"
0xfd6: Call 0xd05

0xfd7: Pop(1)
0xfd8: Push((int) 9061)
0xfd9: @@ SetMessage(Stack[-1])
0xfda: Pop(1)
0xfdb: @@ ClearReplies()
0xfdc: Pop(0)
0xfdd: Push((int) 9063)
0xfde: Push((int) 11254)
0xfdf: Push((int) 9940)
0xfe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe1: Pop(3)
0xfe2: Push((int) 9062)
0xfe3: Push((int) -1)
0xfe4: Push((int) 9939)
0xfe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe6: Pop(3)
0xfe7: Return(); Pop(0)

0xfe8: Push((int) 11254)
0xfe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfea: IF (Stack[-1] == 0) GOTO 0xfff; Pop(1)

0xfeb: PushEmpty(string)
0xfec: Stack[-1] = "Neutral"
0xfed: Call 0xd05

0xfee: Pop(1)
0xfef: Push((int) 10208)
0xff0: @@ SetMessage(Stack[-1])
0xff1: Pop(1)
0xff2: @@ ClearReplies()
0xff3: Pop(0)
0xff4: Push((int) 10209)
0xff5: Push((int) -1)
0xff6: Push((int) 11255)
0xff7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff8: Pop(3)
0xff9: Push((int) 10231)
0xffa: Push((int) -1)
0xffb: Push((int) 11278)
0xffc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffd: Pop(3)
0xffe: Return(); Pop(0)

0xfff: Push((int) 11280)
0x1000: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1001: IF (Stack[-1] == 0) GOTO 0x1016; Pop(1)

0x1002: PushEmpty(string)
0x1003: Stack[-1] = "Neutral"
0x1004: Call 0xd05

0x1005: Pop(1)
0x1006: Push((int) 10232)
0x1007: @@ SetMessage(Stack[-1])
0x1008: Pop(1)
0x1009: @@ ClearReplies()
0x100a: Pop(0)
0x100b: Push((int) 10233)
0x100c: Push((int) 9938)
0x100d: Push((int) 11281)
0x100e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100f: Pop(3)
0x1010: Push((int) 10234)
0x1011: Push((int) 9938)
0x1012: Push((int) 11282)
0x1013: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1014: Pop(3)
0x1015: Return(); Pop(0)

0x1016: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1017: PushEmpty(bool)
0x1018: Call 0x1242

0x1019: Pop(0)
0x101a: IF (Stack[-1] == 0) GOTO 0x101e; Pop(1)

0x101b: @ lshStopAnimation()
0x101c: Pop(0)
0x101d: GOTO 0x1020

0x101e: @ StopAnimation()
0x101f: Pop(0)
0x1020: Return(); Pop(0)

0x1021: GOTO 0xd16

0x1022: Return(); Pop(0)

0x1023: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1024: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1025: PushEmpty(bool, object)
0x1026: Stack[-1] = Stack[-11]
0x1027: Call 0x11a6

0x1028: Pop(1)
0x1029: Pop(1); Push((bool) Stack[-1] == 0)
0x102a: IF (Stack[-1] == 0) GOTO 0x102d; Pop(1)

0x102b: Stack[-10] = (int) -2
0x102c: Return(); Pop(8)

0x102d: @ CreateDialog(Stack[-4])
0x102e: Pop(0)
0x102f: PushEmpty(int)
0x1030: Call 0x123e

0x1031: Pop(0)
0x1032: @@ SetNPCName(Stack[-1])
0x1033: Pop(1)
0x1034: PushEmpty(string)
0x1035: Call 0x1240

0x1036: Pop(0)
0x1037: @@ SetPhoto(Stack[-1])
0x1038: Pop(1)
0x1039: PushEmpty(int)
0x103a: Call 0x15a1

0x103b: Pop(0)
0x103c: @@ SetPlayerName(Stack[-1])
0x103d: Pop(1)
0x103e: Stack[-2] = (int) -1
0x103f: @ IsOverrideActive(Stack[-3])
0x1040: Pop(0)
0x1041: Push(Stack[-3])
0x1042: IF (Stack[-1] == 0) GOTO 0x1045; Pop(1)

0x1043: Stack[-10] = (int) -2
0x1044: Return(); Pop(8)

0x1045: @ DoDialog(Stack[-4])
0x1046: Pop(0)
0x1047: PushEmpty(object, object)
0x1048: Stack[-2] = Stack[-11]
0x1049: Stack[-1] = Stack[-6]
0x104a: Push(-2, 4); TaskCall(13)
0x104b: Call 0x1062

0x104c: Pop(-2, 4); TaskReturn
0x104d: Pop(2)
0x104e: @@ IsDialogEnd(Stack[-1])
0x104f: Pop(0)
0x1050: Pop(0); Push((bool) Stack[-1] == 0)
0x1051: IF (Stack[-1] == 0) GOTO 0x1057; Pop(1)

0x1052: @ sync()
0x1053: Pop(0)
0x1054: @@ IsDialogEnd(Stack[-1])
0x1055: Pop(0)
0x1056: GOTO 0x1050

0x1057: PushEmpty(object)
0x1058: Stack[-1] = Stack[-10]
0x1059: Call 0x11de

0x105a: Pop(1)
0x105b: @ StopDialog(Stack[-4])
0x105c: Pop(0)
0x105d: @@ GetReturnValue(Stack[-2])
0x105e: Pop(0)
0x105f: Stack[-10] = Stack[-2]
0x1060: Return(); Pop(8)

0x1061: Stack[-4] = 0
0x1062: PushEmpty()
0x1063: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1064: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1065: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1066: Push((int) 1)
0x1067: IF (Stack[-1] == 0) GOTO 0x109b; Pop(1)

0x1068: PushEmpty(bool)
0x1069: Stack[-1] = (bool) 0
0x106a: PushEmpty(bool, object)
0x106b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106c: Call 0x1519

0x106d: Pop(1)
0x106e: IF (Stack[-1] == 0) GOTO 0x1075; Pop(1)

0x106f: PushEmpty(bool, object)
0x1070: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1071: Call 0x1525

0x1072: Pop(1)
0x1073: IF (Stack[-1] == 0) GOTO 0x1075; Pop(1)

0x1074: Stack[-1] = (bool) 1
0x1075: IF (Stack[-1] == 0) GOTO 0x108a; Pop(1)

0x1076: PushEmpty(object, object)
0x1077: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1078: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1079: Call 0x13cb

0x107a: Pop(2)
0x107b: PushEmpty(string)
0x107c: Stack[-1] = "Neutral"
0x107d: Call 0x10b9

0x107e: Pop(1)
0x107f: Push((int) 12258)
0x1080: @@ SetMessage(Stack[-1])
0x1081: Pop(1)
0x1082: @@ ClearReplies()
0x1083: Pop(0)
0x1084: Push((int) 12259)
0x1085: Push((int) 13417)
0x1086: Push((int) 13416)
0x1087: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1088: Pop(3)
0x1089: GOTO 0x109b

0x108a: PushEmpty(string)
0x108b: Stack[-1] = "Neutral"
0x108c: Call 0x10b9

0x108d: Pop(1)
0x108e: Push((int) 13775)
0x108f: @@ SetMessage(Stack[-1])
0x1090: Pop(1)
0x1091: @@ ClearReplies()
0x1092: Pop(0)
0x1093: Push((int) 13776)
0x1094: Push((int) -1)
0x1095: Push((int) 15012)
0x1096: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1097: Pop(3)
0x1098: GOTO 0x109b

0x1099: Return(); Pop(0)

0x109a: GOTO 0x1066

0x109b: PushEmpty(bool)
0x109c: Call 0x1242

0x109d: Pop(0)
0x109e: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x109f: @ lshWaitForAnimEnd()
0x10a0: Pop(0)
0x10a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a4; Pop(1)

0x10a3: GOTO 0x10a9

0x10a4: PushEmpty(string)
0x10a5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x10a6: Call 0x11e2

0x10a7: Pop(1)
0x10a8: GOTO 0x109f

0x10a9: GOTO 0x10b8

0x10aa: Push("all")
0x10ab: Push("idle")
0x10ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x10ad: Pop(2)
0x10ae: @ WaitForAnimEnd()
0x10af: Pop(0)
0x10b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10b1: IF (Stack[-1] == 0) GOTO 0x10b3; Pop(1)

0x10b2: GOTO 0x10b8

0x10b3: Push("all")
0x10b4: Push("idle")
0x10b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x10b6: Pop(2)
0x10b7: GOTO 0x10ae

0x10b8: Return(); Pop(0)

0x10b9: PushEmpty()
0x10ba: PushEmpty(bool)
0x10bb: Call 0x1242

0x10bc: Pop(0)
0x10bd: Pop(1); Push((bool) Stack[-1] == 0)
0x10be: IF (Stack[-1] == 0) GOTO 0x10c0; Pop(1)

0x10bf: Return(); Pop(0)

0x10c0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x10c1: IF (Stack[-1] == 0) GOTO 0x10c3; Pop(1)

0x10c2: Return(); Pop(0)

0x10c3: PushEmpty(string)
0x10c4: Stack[-1] = Stack[-2]
0x10c5: Call 0x11e2

0x10c6: Pop(1)
0x10c7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10c8: Return(); Pop(0)

0x10c9: PushEmpty()
0x10ca: Push((int) 1)
0x10cb: IF (Stack[-1] == 0) GOTO 0x118d; Pop(1)

0x10cc: PushEmpty()
0x10cd: Call 0x11f4

0x10ce: Pop(0)
0x10cf: Push((int) 13415)
0x10d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d1: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x10d2: PushEmpty(bool)
0x10d3: Stack[-1] = (bool) 0
0x10d4: PushEmpty(bool, object)
0x10d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d6: Call 0x1519

0x10d7: Pop(1)
0x10d8: IF (Stack[-1] == 0) GOTO 0x10df; Pop(1)

0x10d9: PushEmpty(bool, object)
0x10da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10db: Call 0x1525

0x10dc: Pop(1)
0x10dd: IF (Stack[-1] == 0) GOTO 0x10df; Pop(1)

0x10de: Stack[-1] = (bool) 1
0x10df: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x10e0: PushEmpty(object, object)
0x10e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e3: Call 0x13cb

0x10e4: Pop(2)
0x10e5: PushEmpty(string)
0x10e6: Stack[-1] = "Neutral"
0x10e7: Call 0x10b9

0x10e8: Pop(1)
0x10e9: Push((int) 12258)
0x10ea: @@ SetMessage(Stack[-1])
0x10eb: Pop(1)
0x10ec: @@ ClearReplies()
0x10ed: Pop(0)
0x10ee: Push((int) 12259)
0x10ef: Push((int) 13417)
0x10f0: Push((int) 13416)
0x10f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f2: Pop(3)
0x10f3: Return(); Pop(0)

0x10f4: PushEmpty(string)
0x10f5: Stack[-1] = "Neutral"
0x10f6: Call 0x10b9

0x10f7: Pop(1)
0x10f8: Push((int) 13775)
0x10f9: @@ SetMessage(Stack[-1])
0x10fa: Pop(1)
0x10fb: @@ ClearReplies()
0x10fc: Pop(0)
0x10fd: Push((int) 13776)
0x10fe: Push((int) -1)
0x10ff: Push((int) 15012)
0x1100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1101: Pop(3)
0x1102: Return(); Pop(0)

0x1103: Push((int) 13417)
0x1104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1105: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x1106: PushEmpty(string)
0x1107: Stack[-1] = "Neutral"
0x1108: Call 0x10b9

0x1109: Pop(1)
0x110a: Push((int) 12260)
0x110b: @@ SetMessage(Stack[-1])
0x110c: Pop(1)
0x110d: @@ ClearReplies()
0x110e: Pop(0)
0x110f: Push((int) 12261)
0x1110: Push((int) 13419)
0x1111: Push((int) 13418)
0x1112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1113: Pop(3)
0x1114: Return(); Pop(0)

0x1115: Push((int) 13419)
0x1116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1117: IF (Stack[-1] == 0) GOTO 0x1127; Pop(1)

0x1118: PushEmpty(string)
0x1119: Stack[-1] = "Neutral"
0x111a: Call 0x10b9

0x111b: Pop(1)
0x111c: Push((int) 12262)
0x111d: @@ SetMessage(Stack[-1])
0x111e: Pop(1)
0x111f: @@ ClearReplies()
0x1120: Pop(0)
0x1121: Push((int) 12263)
0x1122: Push((int) 13421)
0x1123: Push((int) 13420)
0x1124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1125: Pop(3)
0x1126: Return(); Pop(0)

0x1127: Push((int) 13421)
0x1128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1129: IF (Stack[-1] == 0) GOTO 0x1139; Pop(1)

0x112a: PushEmpty(string)
0x112b: Stack[-1] = "Neutral"
0x112c: Call 0x10b9

0x112d: Pop(1)
0x112e: Push((int) 12264)
0x112f: @@ SetMessage(Stack[-1])
0x1130: Pop(1)
0x1131: @@ ClearReplies()
0x1132: Pop(0)
0x1133: Push((int) 12265)
0x1134: Push((int) 13423)
0x1135: Push((int) 13422)
0x1136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1137: Pop(3)
0x1138: Return(); Pop(0)

0x1139: Push((int) 13423)
0x113a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113b: IF (Stack[-1] == 0) GOTO 0x114b; Pop(1)

0x113c: PushEmpty(string)
0x113d: Stack[-1] = "Neutral"
0x113e: Call 0x10b9

0x113f: Pop(1)
0x1140: Push((int) 12266)
0x1141: @@ SetMessage(Stack[-1])
0x1142: Pop(1)
0x1143: @@ ClearReplies()
0x1144: Pop(0)
0x1145: Push((int) 12267)
0x1146: Push((int) 13425)
0x1147: Push((int) 13424)
0x1148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1149: Pop(3)
0x114a: Return(); Pop(0)

0x114b: Push((int) 13425)
0x114c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114d: IF (Stack[-1] == 0) GOTO 0x115d; Pop(1)

0x114e: PushEmpty(string)
0x114f: Stack[-1] = "Neutral"
0x1150: Call 0x10b9

0x1151: Pop(1)
0x1152: Push((int) 12268)
0x1153: @@ SetMessage(Stack[-1])
0x1154: Pop(1)
0x1155: @@ ClearReplies()
0x1156: Pop(0)
0x1157: Push((int) 12269)
0x1158: Push((int) 13427)
0x1159: Push((int) 13426)
0x115a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115b: Pop(3)
0x115c: Return(); Pop(0)

0x115d: Push((int) 13427)
0x115e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115f: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x1160: PushEmpty(string)
0x1161: Stack[-1] = "Neutral"
0x1162: Call 0x10b9

0x1163: Pop(1)
0x1164: Push((int) 12270)
0x1165: @@ SetMessage(Stack[-1])
0x1166: Pop(1)
0x1167: @@ ClearReplies()
0x1168: Pop(0)
0x1169: Push((int) 12271)
0x116a: Push((int) 13429)
0x116b: Push((int) 13428)
0x116c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116d: Pop(3)
0x116e: Return(); Pop(0)

0x116f: Push((int) 13429)
0x1170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1171: IF (Stack[-1] == 0) GOTO 0x1181; Pop(1)

0x1172: PushEmpty(string)
0x1173: Stack[-1] = "Neutral"
0x1174: Call 0x10b9

0x1175: Pop(1)
0x1176: Push((int) 12272)
0x1177: @@ SetMessage(Stack[-1])
0x1178: Pop(1)
0x1179: @@ ClearReplies()
0x117a: Pop(0)
0x117b: Push((int) 12273)
0x117c: Push((int) -1)
0x117d: Push((int) 13430)
0x117e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117f: Pop(3)
0x1180: Return(); Pop(0)

0x1181: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1182: PushEmpty(bool)
0x1183: Call 0x1242

0x1184: Pop(0)
0x1185: IF (Stack[-1] == 0) GOTO 0x1189; Pop(1)

0x1186: @ lshStopAnimation()
0x1187: Pop(0)
0x1188: GOTO 0x118b

0x1189: @ StopAnimation()
0x118a: Pop(0)
0x118b: Return(); Pop(0)

0x118c: GOTO 0x10ca

0x118d: Return(); Pop(0)

0x118e: PushEmpty(int, int)
0x118f: @@ GetProperty(Stack[-4], Stack[-1])
0x1190: Pop(0)
0x1191: Pop(0); Push(Stack[-1] + Stack[-3]);
0x1192: @@ SetProperty(Stack[-5], Stack[-1])
0x1193: Pop(1)
0x1194: Return(); Pop(2)

0x1195: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1196: @@ GetPosition(Stack[-4])
0x1197: Pop(0)
0x1198: @ GetPosition(Stack[-3])
0x1199: Pop(0)
0x119a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x119b: Push(CvectorIndex(Stack[-2], 0))
0x119c: Push(CvectorIndex(Stack[-3], 2))
0x119d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x119e: Pop(2)
0x119f: Stack[-10] = Stack[-1]
0x11a0: Return(); Pop(8)

0x11a1: PushEmpty(bool, bool)
0x11a2: @ IsLoaded(Stack[-1])
0x11a3: Pop(0)
0x11a4: Stack[-3] = Stack[-1]
0x11a5: Return(); Pop(2)

0x11a6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x11a7: @@ GetPosition(Stack[-7])
0x11a8: Pop(0)
0x11a9: @@ GetEyesHeight(Stack[-8])
0x11aa: Pop(0)
0x11ab: Push(CvectorIndex(Stack[-7], 1))
0x11ac: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x11ad: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x11ae: @ GetPosition(Stack[-6])
0x11af: Pop(0)
0x11b0: @ GetEyesHeight(Stack[-8])
0x11b1: Pop(0)
0x11b2: Push(CvectorIndex(Stack[-6], 1))
0x11b3: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x11b4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x11b5: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x11b6: Push(CvectorIndex(Stack[-5], 1))
0x11b7: Stack[-1] = (int) 0
0x11b8: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x11b9: Pop(0); Push(Stack[-5] | Stack[-5]);
0x11ba: Pop(1); Push(Sqrt(Stack[-1]))
0x11bb: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x11bc: Stack[-4] = -Stack[-5]; Pop(0);
0x11bd: Push((int) 70)
0x11be: Pop(1); Push(Stack[-6] * Stack[-1]);
0x11bf: PushEmpty(cvector, cvector)
0x11c0: Push(CVector(0.0, 1.0, 0.0))
0x11c1: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x11c2: Call 0x11fb

0x11c3: Pop(1)
0x11c4: Push((int) 25)
0x11c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11c7: Push(CVector(0.0, 10.0, 0.0))
0x11c8: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x11c9: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x11ca: @ IsOverrideActive(Stack[-1])
0x11cb: Pop(0)
0x11cc: Push(Stack[-1])
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11ce: Stack[-18] = (bool) 0
0x11cf: Return(); Pop(16)

0x11d0: @ StopWorld()
0x11d1: Pop(0)
0x11d2: @ CameraTransit(Stack[-2], Stack[-4])
0x11d3: Pop(0)
0x11d4: Push(CvectorIndex(Stack[-3], 0))
0x11d5: Push(CvectorIndex(Stack[-4], 2))
0x11d6: @ Rotate(Stack[-2], Stack[-1])
0x11d7: Pop(2)
0x11d8: @ CameraWaitForPlayFinish()
0x11d9: Pop(0)
0x11da: @ ResumeWorld()
0x11db: Pop(0)
0x11dc: Stack[-18] = (bool) 1
0x11dd: Return(); Pop(16)

0x11de: PushEmpty()
0x11df: @ CameraSwitchToNormal()
0x11e0: Pop(0)
0x11e1: Return(); Pop(0)

0x11e2: PushEmpty(float, float, float, float)
0x11e3: Push("playing ")
0x11e4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x11e5: @ Trace(Stack[-1])
0x11e6: Pop(1)
0x11e7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x11e8: Pop(0)
0x11e9: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x11ea: Pop(0)
0x11eb: Push("start: ")
0x11ec: Pop(1); Push(Stack[-1] + Stack[-3]);
0x11ed: @ Trace(Stack[-1])
0x11ee: Pop(1)
0x11ef: Push("end: ")
0x11f0: Pop(1); Push(Stack[-1] + Stack[-2]);
0x11f1: @ Trace(Stack[-1])
0x11f2: Pop(1)
0x11f3: Return(); Pop(4)

0x11f4: PushEmpty(bool)
0x11f5: Call 0x1242

0x11f6: Pop(0)
0x11f7: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f8: @ lshStopSpeech()
0x11f9: Pop(0)
0x11fa: Return(); Pop(0)

0x11fb: PushEmpty(float, float)
0x11fc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11fd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x11fe: Push((float)0.0)
0x11ff: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1200: IF (Stack[-1] == 0) GOTO 0x1203; Pop(1)

0x1201: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1202: Return(); Pop(2)

0x1203: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1204: Return(); Pop(2)

0x1205: PushEmpty(int, int)
0x1206: @ GetVariable(Stack[-3], Stack[-1])
0x1207: Pop(0)
0x1208: Stack[-4] = Stack[-1]
0x1209: Return(); Pop(2)

0x120a: PushEmpty(object, object, object, object)
0x120b: @ GetMainOutdoorScene(Stack[-2])
0x120c: Pop(0)
0x120d: Push(".bin")
0x120e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x120f: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1210: Pop(1)
0x1211: Stack[-6] = Stack[-1]
0x1212: Return(); Pop(4)

0x1213: Stack[-1] = 0
0x1214: Stack[-2] = 0
0x1215: PushEmpty(object, object)
0x1216: @ FindActor(Stack[-1], Stack[-4])
0x1217: Pop(0)
0x1218: Pop(0); Push((bool) Stack[-1] == 0)
0x1219: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x121a: Stack[-5] = (bool) 0
0x121b: Return(); Pop(2)

0x121c: @ Trigger(Stack[-1], Stack[-3])
0x121d: Pop(0)
0x121e: Stack[-5] = (bool) 1
0x121f: Return(); Pop(2)

0x1220: Stack[-1] = 0
0x1221: PushEmpty(float, float)
0x1222: @ GetGameTime(Stack[-1])
0x1223: Pop(0)
0x1224: Stack[-3] = Stack[-1]
0x1225: Return(); Pop(2)

0x1226: PushEmpty(float, float)
0x1227: @ GetGameTime(Stack[-1])
0x1228: Pop(0)
0x1229: Push((int) 1)
0x122a: PushEmpty(int)
0x122b: Push((int) 24)
0x122c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x122d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x122e: Return(); Pop(2)

0x122f: PushEmpty()
0x1230: PushEmpty(int)
0x1231: Call 0x1226

0x1232: Pop(0)
0x1233: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1234: Return(); Pop(0)

0x1235: PushEmpty(bool, bool)
0x1236: PushEmpty(string)
0x1237: Stack[-1] = "No"
0x1238: Call 0x11e2

0x1239: Pop(1)
0x123a: @ lshWaitForAnimEnd(Stack[-1])
0x123b: Pop(0)
0x123c: Stack[-3] = Stack[-1]
0x123d: Return(); Pop(2)

0x123e: Stack[-1] = (int) 2859
0x123f: Return(); Pop(0)

0x1240: Stack[-1] = "ui/NPC_Georg.png"
0x1241: Return(); Pop(0)

0x1242: Stack[-1] = (bool) 1
0x1243: Return(); Pop(0)

0x1244: PushEmpty(object, object)
0x1245: Push("d1q01")
0x1246: Push((int) 1)
0x1247: @ SetVariable(Stack[-2], Stack[-1])
0x1248: Pop(2)
0x1249: PushEmpty(object)
0x124a: Call 0x156f

0x124b: Stack[-2] = Stack[-1]
0x124c: Pop(1)
0x124d: Push("d1GeorgInfo")
0x124e: Push("pt_map_georg")
0x124f: Push((int) 3)
0x1250: Push((int) 8631)
0x1251: PushEmpty(float)
0x1252: Call 0x1221

0x1253: Pop(0)
0x1254: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1255: Pop(5)
0x1256: Push("d1GeorgGotoViktor")
0x1257: Push("pt_map_viktor")
0x1258: Push((int) 3)
0x1259: Push((int) 8629)
0x125a: PushEmpty(float)
0x125b: Call 0x1221

0x125c: Pop(0)
0x125d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x125e: Pop(5)
0x125f: PushEmpty()
0x1260: Call 0x15b2

0x1261: Pop(0)
0x1262: Return(); Pop(2)

0x1263: Stack[-1] = 0
0x1264: PushEmpty(object, object, object, object)
0x1265: Push("d1q01")
0x1266: Push((int) 1000)
0x1267: @ SetVariable(Stack[-2], Stack[-1])
0x1268: Pop(2)
0x1269: PushEmpty(object)
0x126a: Call 0x156f

0x126b: Stack[-3] = Stack[-1]
0x126c: Pop(1)
0x126d: Push("d1q01EvaAboutMark")
0x126e: @@ FindMark(Stack[-2], Stack[-1])
0x126f: Pop(1)
0x1270: Push(Stack[-1])
0x1271: IF (Stack[-1] == 0) GOTO 0x1274; Pop(1)

0x1272: @@ Remove()
0x1273: Pop(0)
0x1274: Push("d1q01EvaGotoSimon")
0x1275: @@ FindMark(Stack[-2], Stack[-1])
0x1276: Pop(1)
0x1277: Push(Stack[-1])
0x1278: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x1279: @@ Remove()
0x127a: Pop(0)
0x127b: Push("d1q01GrifAboutRubin")
0x127c: @@ FindMark(Stack[-2], Stack[-1])
0x127d: Pop(1)
0x127e: Push(Stack[-1])
0x127f: IF (Stack[-1] == 0) GOTO 0x1282; Pop(1)

0x1280: @@ Remove()
0x1281: Pop(0)
0x1282: Push("d1q01MarkAboutJulia")
0x1283: @@ FindMark(Stack[-2], Stack[-1])
0x1284: Pop(1)
0x1285: Push(Stack[-1])
0x1286: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1287: @@ Remove()
0x1288: Pop(0)
0x1289: Push("d1q01MarkAboutLara")
0x128a: @@ FindMark(Stack[-2], Stack[-1])
0x128b: Pop(1)
0x128c: Push(Stack[-1])
0x128d: IF (Stack[-1] == 0) GOTO 0x1290; Pop(1)

0x128e: @@ Remove()
0x128f: Pop(0)
0x1290: Push("d1q01NotkinAboutRubin")
0x1291: @@ FindMark(Stack[-2], Stack[-1])
0x1292: Pop(1)
0x1293: Push(Stack[-1])
0x1294: IF (Stack[-1] == 0) GOTO 0x1297; Pop(1)

0x1295: @@ Remove()
0x1296: Pop(0)
0x1297: PushEmpty()
0x1298: Call 0x15c2

0x1299: Pop(0)
0x129a: PushEmpty(bool, int)
0x129b: Stack[-1] = (int) 31
0x129c: Call 0x155e

0x129d: Pop(2)
0x129e: PushEmpty(bool, int)
0x129f: Stack[-1] = (int) 32
0x12a0: Call 0x155e

0x12a1: Pop(2)
0x12a2: PushEmpty(bool, int)
0x12a3: Stack[-1] = (int) 33
0x12a4: Call 0x155e

0x12a5: Pop(2)
0x12a6: PushEmpty(bool, int)
0x12a7: Stack[-1] = (int) 34
0x12a8: Call 0x155e

0x12a9: Pop(2)
0x12aa: Return(); Pop(4)

0x12ab: Stack[-1] = 0
0x12ac: Stack[-2] = 0
0x12ad: PushEmpty()
0x12ae: Push("d1q01TeloNedostupno")
0x12af: Push((int) 1)
0x12b0: @ SetVariable(Stack[-2], Stack[-1])
0x12b1: Pop(2)
0x12b2: Return(); Pop(0)

0x12b3: PushEmpty()
0x12b4: Push("d1q01FirstGeorgVisit")
0x12b5: Push((int) 1)
0x12b6: @ SetVariable(Stack[-2], Stack[-1])
0x12b7: Pop(2)
0x12b8: Return(); Pop(0)

0x12b9: PushEmpty()
0x12ba: Push("playsound")
0x12bb: Push("givemoney")
0x12bc: @ TriggerWorld(Stack[-2], Stack[-1])
0x12bd: Pop(2)
0x12be: Return(); Pop(0)

0x12bf: PushEmpty()
0x12c0: Push("ood2Georg1")
0x12c1: Push((int) 1)
0x12c2: @ SetVariable(Stack[-2], Stack[-1])
0x12c3: Pop(2)
0x12c4: Return(); Pop(0)

0x12c5: PushEmpty()
0x12c6: Push("ood2Georg2")
0x12c7: Push((int) 1)
0x12c8: @ SetVariable(Stack[-2], Stack[-1])
0x12c9: Pop(2)
0x12ca: Return(); Pop(0)

0x12cb: PushEmpty()
0x12cc: Push("d2q01GeorgVisit")
0x12cd: Push((int) 1)
0x12ce: @ SetVariable(Stack[-2], Stack[-1])
0x12cf: Pop(2)
0x12d0: Return(); Pop(0)

0x12d1: PushEmpty()
0x12d2: Push("ood1Georg4")
0x12d3: Push((int) 1)
0x12d4: @ SetVariable(Stack[-2], Stack[-1])
0x12d5: Pop(2)
0x12d6: Return(); Pop(0)

0x12d7: PushEmpty()
0x12d8: Push("KnowGorny")
0x12d9: Push((int) 1)
0x12da: @ SetVariable(Stack[-2], Stack[-1])
0x12db: Pop(2)
0x12dc: Return(); Pop(0)

0x12dd: PushEmpty(object, object)
0x12de: PushEmpty(object)
0x12df: Call 0x156f

0x12e0: Stack[-2] = Stack[-1]
0x12e1: Pop(1)
0x12e2: Push("d1GeorgAboutAlexandr")
0x12e3: Push("pt_map_alexandr")
0x12e4: Push((int) 3)
0x12e5: Push((int) 8632)
0x12e6: PushEmpty(float)
0x12e7: Call 0x1221

0x12e8: Pop(0)
0x12e9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12ea: Pop(5)
0x12eb: Push("d1GeorgAboutBigVlad")
0x12ec: Push("pt_map_bigvlad")
0x12ed: Push((int) 3)
0x12ee: Push((int) 8633)
0x12ef: PushEmpty(float)
0x12f0: Call 0x1221

0x12f1: Pop(0)
0x12f2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12f3: Pop(5)
0x12f4: Return(); Pop(2)

0x12f5: Stack[-1] = 0
0x12f6: PushEmpty()
0x12f7: Push("playsound")
0x12f8: Push("mapmark")
0x12f9: @ TriggerWorld(Stack[-2], Stack[-1])
0x12fa: Pop(2)
0x12fb: Return(); Pop(0)

0x12fc: PushEmpty()
0x12fd: PushEmpty(object, string, float)
0x12fe: PushEmpty(object)
0x12ff: Call 0x156f

0x1300: Stack[-4] = Stack[-1]
0x1301: Pop(1)
0x1302: Stack[-2] = "pt_map_mishka"
0x1303: Stack[-1] = (int) 2
0x1304: Call 0x1580

0x1305: Pop(3)
0x1306: PushEmpty(object)
0x1307: Call 0x156f

0x1308: Pop(0)
0x1309: @@ ShowMap(Stack[-1])
0x130a: Pop(1)
0x130b: Return(); Pop(0)

0x130c: PushEmpty(object, object)
0x130d: Push("d3q01")
0x130e: Push((int) 5)
0x130f: @ SetVariable(Stack[-2], Stack[-1])
0x1310: Pop(2)
0x1311: PushEmpty(object)
0x1312: Call 0x156f

0x1313: Stack[-2] = Stack[-1]
0x1314: Pop(1)
0x1315: Push("d3q01GeorgAgreedSelf")
0x1316: Push("pt_map_georg")
0x1317: Push((int) 1)
0x1318: Push((int) 11154)
0x1319: PushEmpty(float)
0x131a: Call 0x1221

0x131b: Pop(0)
0x131c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x131d: Pop(5)
0x131e: Push("d3q01GeorgAgreed")
0x131f: Push("pt_map_bigvlad")
0x1320: Push((int) 1)
0x1321: Push((int) 15299)
0x1322: PushEmpty(float)
0x1323: Call 0x1221

0x1324: Pop(0)
0x1325: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1326: Pop(5)
0x1327: Return(); Pop(2)

0x1328: Stack[-1] = 0
0x1329: PushEmpty()
0x132a: Push("ood3Georg1")
0x132b: Push((int) 1)
0x132c: @ SetVariable(Stack[-2], Stack[-1])
0x132d: Pop(2)
0x132e: Return(); Pop(0)

0x132f: PushEmpty()
0x1330: Push("ood1GeorgMQ1")
0x1331: Push((int) 1)
0x1332: @ SetVariable(Stack[-2], Stack[-1])
0x1333: Pop(2)
0x1334: Return(); Pop(0)

0x1335: PushEmpty()
0x1336: Push("KnowViktor")
0x1337: Push((int) 1)
0x1338: @ SetVariable(Stack[-2], Stack[-1])
0x1339: Pop(2)
0x133a: Return(); Pop(0)

0x133b: PushEmpty()
0x133c: Push("ood3Georg2")
0x133d: Push((int) 1)
0x133e: @ SetVariable(Stack[-2], Stack[-1])
0x133f: Pop(2)
0x1340: Return(); Pop(0)

0x1341: PushEmpty(object, object)
0x1342: Push("d3q02")
0x1343: Push((int) 1)
0x1344: @ SetVariable(Stack[-2], Stack[-1])
0x1345: Pop(2)
0x1346: PushEmpty(object)
0x1347: Call 0x156f

0x1348: Stack[-2] = Stack[-1]
0x1349: Pop(1)
0x134a: Push("d3q02GeorgGotoMishka")
0x134b: Push("pt_map_mishka")
0x134c: Push((int) 0)
0x134d: Push((int) 11375)
0x134e: PushEmpty(float)
0x134f: Call 0x1221

0x1350: Pop(0)
0x1351: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1352: Pop(5)
0x1353: Push("d3q02GeorgSelf")
0x1354: Push("pt_map_georg")
0x1355: Push((int) 0)
0x1356: Push((int) 15304)
0x1357: PushEmpty(float)
0x1358: Call 0x1221

0x1359: Pop(0)
0x135a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x135b: Pop(5)
0x135c: Push("d3q02GeorgGotoViktor")
0x135d: Push("pt_map_viktor")
0x135e: Push((int) 0)
0x135f: Push((int) 11379)
0x1360: PushEmpty(float)
0x1361: Call 0x1221

0x1362: Pop(0)
0x1363: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1364: Pop(5)
0x1365: PushEmpty()
0x1366: Call 0x15d2

0x1367: Pop(0)
0x1368: PushEmpty()
0x1369: Call 0x15e2

0x136a: Pop(0)
0x136b: PushEmpty(object, string)
0x136c: Stack[-1] = "quest_d3_02"
0x136d: Call 0x120a

0x136e: Pop(2)
0x136f: Return(); Pop(2)

0x1370: Stack[-1] = 0
0x1371: PushEmpty()
0x1372: Push("money3000 is given")
0x1373: @ Trace(Stack[-1])
0x1374: Pop(1)
0x1375: PushEmpty(object, string, int)
0x1376: Stack[-3] = Stack[-5]
0x1377: Stack[-2] = "money"
0x1378: Stack[-1] = (int) 3000
0x1379: Call 0x118e

0x137a: Pop(3)
0x137b: Return(); Pop(0)

0x137c: PushEmpty()
0x137d: PushEmpty(bool, string, string)
0x137e: Stack[-2] = "quest_d3_02"
0x137f: Stack[-1] = "completed"
0x1380: Call 0x1215

0x1381: Pop(3)
0x1382: Return(); Pop(0)

0x1383: PushEmpty()
0x1384: Push("ood3Georg3")
0x1385: Push((int) 1)
0x1386: @ SetVariable(Stack[-2], Stack[-1])
0x1387: Pop(2)
0x1388: Return(); Pop(0)

0x1389: PushEmpty()
0x138a: Push("ood1Georg1")
0x138b: Push((int) 1)
0x138c: @ SetVariable(Stack[-2], Stack[-1])
0x138d: Pop(2)
0x138e: Return(); Pop(0)

0x138f: PushEmpty()
0x1390: Push("ood1Georg2")
0x1391: Push((int) 1)
0x1392: @ SetVariable(Stack[-2], Stack[-1])
0x1393: Pop(2)
0x1394: Return(); Pop(0)

0x1395: PushEmpty()
0x1396: Push("ood1Georg3")
0x1397: Push((int) 1)
0x1398: @ SetVariable(Stack[-2], Stack[-1])
0x1399: Pop(2)
0x139a: Return(); Pop(0)

0x139b: PushEmpty()
0x139c: Push("KnowRubin")
0x139d: Push((int) 1)
0x139e: @ SetVariable(Stack[-2], Stack[-1])
0x139f: Pop(2)
0x13a0: Return(); Pop(0)

0x13a1: PushEmpty()
0x13a2: Push("KnowSaburivClan")
0x13a3: Push((int) 1)
0x13a4: @ SetVariable(Stack[-2], Stack[-1])
0x13a5: Pop(2)
0x13a6: Return(); Pop(0)

0x13a7: PushEmpty()
0x13a8: Push("KnowOlgimskiClan")
0x13a9: Push((int) 1)
0x13aa: @ SetVariable(Stack[-2], Stack[-1])
0x13ab: Pop(2)
0x13ac: Return(); Pop(0)

0x13ad: PushEmpty()
0x13ae: Push("KnowKainClan")
0x13af: Push((int) 1)
0x13b0: @ SetVariable(Stack[-2], Stack[-1])
0x13b1: Pop(2)
0x13b2: Return(); Pop(0)

0x13b3: PushEmpty()
0x13b4: Push("KnowGeorg")
0x13b5: Push((int) 1)
0x13b6: @ SetVariable(Stack[-2], Stack[-1])
0x13b7: Pop(2)
0x13b8: Return(); Pop(0)

0x13b9: PushEmpty()
0x13ba: Push("ood6Georg1")
0x13bb: Push((int) 1)
0x13bc: @ SetVariable(Stack[-2], Stack[-1])
0x13bd: Pop(2)
0x13be: Return(); Pop(0)

0x13bf: PushEmpty()
0x13c0: Push("ood6Georg2")
0x13c1: Push((int) 1)
0x13c2: @ SetVariable(Stack[-2], Stack[-1])
0x13c3: Pop(2)
0x13c4: Return(); Pop(0)

0x13c5: PushEmpty()
0x13c6: Push("ood6Georg3")
0x13c7: Push((int) 1)
0x13c8: @ SetVariable(Stack[-2], Stack[-1])
0x13c9: Pop(2)
0x13ca: Return(); Pop(0)

0x13cb: PushEmpty()
0x13cc: Push("ood8Georg1")
0x13cd: Push((int) 1)
0x13ce: @ SetVariable(Stack[-2], Stack[-1])
0x13cf: Pop(2)
0x13d0: Return(); Pop(0)

0x13d1: PushEmpty()
0x13d2: Push("d3GeorgVisit")
0x13d3: Push((int) 1)
0x13d4: @ SetVariable(Stack[-2], Stack[-1])
0x13d5: Pop(2)
0x13d6: Return(); Pop(0)

0x13d7: PushEmpty()
0x13d8: PushEmpty(int, string)
0x13d9: Stack[-1] = "ood2Georg1"
0x13da: Call 0x1205

0x13db: Pop(1)
0x13dc: Push((int) 0)
0x13dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13de: IF (Stack[-1] == 0) GOTO 0x13e1; Pop(1)

0x13df: Stack[-2] = (bool) 1
0x13e0: Return(); Pop(0)

0x13e1: Stack[-2] = (bool) 0
0x13e2: Return(); Pop(0)

0x13e3: PushEmpty()
0x13e4: PushEmpty(int, string)
0x13e5: Stack[-1] = "ood2Georg2"
0x13e6: Call 0x1205

0x13e7: Pop(1)
0x13e8: Push((int) 0)
0x13e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13ea: IF (Stack[-1] == 0) GOTO 0x13ed; Pop(1)

0x13eb: Stack[-2] = (bool) 1
0x13ec: Return(); Pop(0)

0x13ed: Stack[-2] = (bool) 0
0x13ee: Return(); Pop(0)

0x13ef: PushEmpty()
0x13f0: PushEmpty(bool, object)
0x13f1: Stack[-1] = Stack[-3]
0x13f2: Call 0x1531

0x13f3: Pop(1)
0x13f4: IF (Stack[-1] == 0) GOTO 0x13f7; Pop(1)

0x13f5: Stack[-2] = (bool) 1
0x13f6: Return(); Pop(0)

0x13f7: Stack[-2] = (bool) 0
0x13f8: Return(); Pop(0)

0x13f9: PushEmpty()
0x13fa: PushEmpty(int, string)
0x13fb: Stack[-1] = "d2q01"
0x13fc: Call 0x1205

0x13fd: Pop(1)
0x13fe: Push((int) 0)
0x13ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1400: IF (Stack[-1] == 0) GOTO 0x1403; Pop(1)

0x1401: Stack[-2] = (bool) 1
0x1402: Return(); Pop(0)

0x1403: Stack[-2] = (bool) 0
0x1404: Return(); Pop(0)

0x1405: PushEmpty()
0x1406: PushEmpty(int, string)
0x1407: Stack[-1] = "d2q01"
0x1408: Call 0x1205

0x1409: Pop(1)
0x140a: Push((int) 6)
0x140b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x140c: IF (Stack[-1] == 0) GOTO 0x140f; Pop(1)

0x140d: Stack[-2] = (bool) 1
0x140e: Return(); Pop(0)

0x140f: Stack[-2] = (bool) 0
0x1410: Return(); Pop(0)

0x1411: PushEmpty()
0x1412: PushEmpty(int, string)
0x1413: Stack[-1] = "KnowBurahDead"
0x1414: Call 0x1205

0x1415: Pop(1)
0x1416: Push((int) 1)
0x1417: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1418: IF (Stack[-1] == 0) GOTO 0x141b; Pop(1)

0x1419: Stack[-2] = (bool) 1
0x141a: Return(); Pop(0)

0x141b: Stack[-2] = (bool) 0
0x141c: Return(); Pop(0)

0x141d: PushEmpty()
0x141e: PushEmpty(int, string)
0x141f: Stack[-1] = "ood1Georg4"
0x1420: Call 0x1205

0x1421: Pop(1)
0x1422: Push((int) 0)
0x1423: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1424: IF (Stack[-1] == 0) GOTO 0x1427; Pop(1)

0x1425: Stack[-2] = (bool) 1
0x1426: Return(); Pop(0)

0x1427: Stack[-2] = (bool) 0
0x1428: Return(); Pop(0)

0x1429: PushEmpty()
0x142a: PushEmpty(int, string)
0x142b: Stack[-1] = "ood1GeorgMQ1"
0x142c: Call 0x1205

0x142d: Pop(1)
0x142e: Push((int) 0)
0x142f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1430: IF (Stack[-1] == 0) GOTO 0x1433; Pop(1)

0x1431: Stack[-2] = (bool) 1
0x1432: Return(); Pop(0)

0x1433: Stack[-2] = (bool) 0
0x1434: Return(); Pop(0)

0x1435: PushEmpty()
0x1436: PushEmpty(int, string)
0x1437: Stack[-1] = "ood1Georg1"
0x1438: Call 0x1205

0x1439: Pop(1)
0x143a: Push((int) 0)
0x143b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x143c: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143d: Stack[-2] = (bool) 1
0x143e: Return(); Pop(0)

0x143f: Stack[-2] = (bool) 0
0x1440: Return(); Pop(0)

0x1441: PushEmpty()
0x1442: PushEmpty(int, string)
0x1443: Stack[-1] = "d3q01"
0x1444: Call 0x1205

0x1445: Pop(1)
0x1446: Push((int) 0)
0x1447: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1448: IF (Stack[-1] == 0) GOTO 0x144b; Pop(1)

0x1449: Stack[-2] = (bool) 1
0x144a: Return(); Pop(0)

0x144b: Stack[-2] = (bool) 0
0x144c: Return(); Pop(0)

0x144d: PushEmpty()
0x144e: PushEmpty(int, string)
0x144f: Stack[-1] = "ood1Georg2"
0x1450: Call 0x1205

0x1451: Pop(1)
0x1452: Push((int) 0)
0x1453: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1454: IF (Stack[-1] == 0) GOTO 0x1457; Pop(1)

0x1455: Stack[-2] = (bool) 1
0x1456: Return(); Pop(0)

0x1457: Stack[-2] = (bool) 0
0x1458: Return(); Pop(0)

0x1459: PushEmpty()
0x145a: PushEmpty(int, string)
0x145b: Stack[-1] = "ood1Georg3"
0x145c: Call 0x1205

0x145d: Pop(1)
0x145e: Push((int) 0)
0x145f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1460: IF (Stack[-1] == 0) GOTO 0x1463; Pop(1)

0x1461: Stack[-2] = (bool) 1
0x1462: Return(); Pop(0)

0x1463: Stack[-2] = (bool) 0
0x1464: Return(); Pop(0)

0x1465: PushEmpty()
0x1466: PushEmpty(int, string)
0x1467: Stack[-1] = "d3q01"
0x1468: Call 0x1205

0x1469: Pop(1)
0x146a: Push((int) 4)
0x146b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x146c: IF (Stack[-1] == 0) GOTO 0x146f; Pop(1)

0x146d: Stack[-2] = (bool) 1
0x146e: Return(); Pop(0)

0x146f: Stack[-2] = (bool) 0
0x1470: Return(); Pop(0)

0x1471: PushEmpty()
0x1472: PushEmpty(int, string)
0x1473: Stack[-1] = "ood3Georg1"
0x1474: Call 0x1205

0x1475: Pop(1)
0x1476: Push((int) 0)
0x1477: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1478: IF (Stack[-1] == 0) GOTO 0x147b; Pop(1)

0x1479: Stack[-2] = (bool) 1
0x147a: Return(); Pop(0)

0x147b: Stack[-2] = (bool) 0
0x147c: Return(); Pop(0)

0x147d: PushEmpty()
0x147e: PushEmpty(int, string)
0x147f: Stack[-1] = "KnowRubin"
0x1480: Call 0x1205

0x1481: Pop(1)
0x1482: Push((int) 1)
0x1483: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1484: IF (Stack[-1] == 0) GOTO 0x1487; Pop(1)

0x1485: Stack[-2] = (bool) 1
0x1486: Return(); Pop(0)

0x1487: Stack[-2] = (bool) 0
0x1488: Return(); Pop(0)

0x1489: PushEmpty()
0x148a: PushEmpty(int, string)
0x148b: Stack[-1] = "ood3Georg2"
0x148c: Call 0x1205

0x148d: Pop(1)
0x148e: Push((int) 0)
0x148f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1490: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1491: Stack[-2] = (bool) 1
0x1492: Return(); Pop(0)

0x1493: Stack[-2] = (bool) 0
0x1494: Return(); Pop(0)

0x1495: PushEmpty()
0x1496: PushEmpty(int, string)
0x1497: Stack[-1] = "d3RubinToldWhereIsSimon"
0x1498: Call 0x1205

0x1499: Pop(1)
0x149a: Push((int) 1)
0x149b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x149c: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x149d: Stack[-2] = (bool) 1
0x149e: Return(); Pop(0)

0x149f: Stack[-2] = (bool) 0
0x14a0: Return(); Pop(0)

0x14a1: PushEmpty()
0x14a2: PushEmpty(int, string)
0x14a3: Stack[-1] = "ood3Georg3"
0x14a4: Call 0x1205

0x14a5: Pop(1)
0x14a6: Push((int) 0)
0x14a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a8: IF (Stack[-1] == 0) GOTO 0x14ab; Pop(1)

0x14a9: Stack[-2] = (bool) 1
0x14aa: Return(); Pop(0)

0x14ab: Stack[-2] = (bool) 0
0x14ac: Return(); Pop(0)

0x14ad: PushEmpty()
0x14ae: PushEmpty(int, string)
0x14af: Stack[-1] = "d3q02SeeCorpse"
0x14b0: Call 0x1205

0x14b1: Pop(1)
0x14b2: Push((int) 1)
0x14b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b4: IF (Stack[-1] == 0) GOTO 0x14b7; Pop(1)

0x14b5: Stack[-2] = (bool) 1
0x14b6: Return(); Pop(0)

0x14b7: Stack[-2] = (bool) 0
0x14b8: Return(); Pop(0)

0x14b9: PushEmpty()
0x14ba: PushEmpty(int, string)
0x14bb: Stack[-1] = "d1q01"
0x14bc: Call 0x1205

0x14bd: Pop(1)
0x14be: Push((int) 2)
0x14bf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c0: IF (Stack[-1] == 0) GOTO 0x14c3; Pop(1)

0x14c1: Stack[-2] = (bool) 1
0x14c2: Return(); Pop(0)

0x14c3: Stack[-2] = (bool) 0
0x14c4: Return(); Pop(0)

0x14c5: PushEmpty()
0x14c6: PushEmpty(int, string)
0x14c7: Stack[-1] = "d6q01"
0x14c8: Call 0x1205

0x14c9: Pop(1)
0x14ca: Push((int) 0)
0x14cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14cc: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cd: Stack[-2] = (bool) 1
0x14ce: Return(); Pop(0)

0x14cf: Stack[-2] = (bool) 0
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty()
0x14d2: PushEmpty(int, string)
0x14d3: Stack[-1] = "d6q01"
0x14d4: Call 0x1205

0x14d5: Pop(1)
0x14d6: Push((int) 1000)
0x14d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d8: IF (Stack[-1] == 0) GOTO 0x14db; Pop(1)

0x14d9: Stack[-2] = (bool) 1
0x14da: Return(); Pop(0)

0x14db: Stack[-2] = (bool) 0
0x14dc: Return(); Pop(0)

0x14dd: PushEmpty()
0x14de: PushEmpty(int, string)
0x14df: Stack[-1] = "d6q01"
0x14e0: Call 0x1205

0x14e1: Pop(1)
0x14e2: Push((int) -1)
0x14e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e4: IF (Stack[-1] == 0) GOTO 0x14e7; Pop(1)

0x14e5: Stack[-2] = (bool) 1
0x14e6: Return(); Pop(0)

0x14e7: Stack[-2] = (bool) 0
0x14e8: Return(); Pop(0)

0x14e9: PushEmpty()
0x14ea: PushEmpty(int, string)
0x14eb: Stack[-1] = "ood6Georg1"
0x14ec: Call 0x1205

0x14ed: Pop(1)
0x14ee: Push((int) 0)
0x14ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f0: IF (Stack[-1] == 0) GOTO 0x14f3; Pop(1)

0x14f1: Stack[-2] = (bool) 1
0x14f2: Return(); Pop(0)

0x14f3: Stack[-2] = (bool) 0
0x14f4: Return(); Pop(0)

0x14f5: PushEmpty()
0x14f6: PushEmpty(int, string)
0x14f7: Stack[-1] = "ood6Georg2"
0x14f8: Call 0x1205

0x14f9: Pop(1)
0x14fa: Push((int) 0)
0x14fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fc: IF (Stack[-1] == 0) GOTO 0x14ff; Pop(1)

0x14fd: Stack[-2] = (bool) 1
0x14fe: Return(); Pop(0)

0x14ff: Stack[-2] = (bool) 0
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(int, string)
0x1503: Stack[-1] = "d6RubinGoesToGeorg"
0x1504: Call 0x1205

0x1505: Pop(1)
0x1506: Push((int) 0)
0x1507: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1508: IF (Stack[-1] == 0) GOTO 0x150b; Pop(1)

0x1509: Stack[-2] = (bool) 1
0x150a: Return(); Pop(0)

0x150b: Stack[-2] = (bool) 0
0x150c: Return(); Pop(0)

0x150d: PushEmpty()
0x150e: PushEmpty(int, string)
0x150f: Stack[-1] = "ood6Georg3"
0x1510: Call 0x1205

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
0x151b: Stack[-1] = "d8KainIsReason"
0x151c: Call 0x1205

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
0x1527: Stack[-1] = "ood8Georg1"
0x1528: Call 0x1205

0x1529: Pop(1)
0x152a: Push((int) 0)
0x152b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152c: IF (Stack[-1] == 0) GOTO 0x152f; Pop(1)

0x152d: Stack[-2] = (bool) 1
0x152e: Return(); Pop(0)

0x152f: Stack[-2] = (bool) 0
0x1530: Return(); Pop(0)

0x1531: PushEmpty()
0x1532: Stack[-2] = (bool) 0
0x1533: Return(); Pop(0)

0x1534: PushEmpty(object, object)
0x1535: @ GetDiaryRoot(Stack[-1])
0x1536: Pop(0)
0x1537: Pop(0); Push((bool) Stack[-1] == 0)
0x1538: IF (Stack[-1] == 0) GOTO 0x153e; Pop(1)

0x1539: Push("Can't retrieve diary root")
0x153a: @ Trace(Stack[-1])
0x153b: Pop(1)
0x153c: Stack[-3] = (bool) 0
0x153d: Return(); Pop(2)

0x153e: Stack[-3] = Stack[-1]
0x153f: Return(); Pop(2)

0x1540: Stack[-1] = 0
0x1541: PushEmpty(object, object, int, object, object, int)
0x1542: PushEmpty(object)
0x1543: Call 0x1534

0x1544: Stack[-4] = Stack[-1]
0x1545: Pop(1)
0x1546: @@ Find(Stack[-7], Stack[-2])
0x1547: Pop(0)
0x1548: Pop(0); Push((bool) Stack[-2] == 0)
0x1549: IF (Stack[-1] == 0) GOTO 0x1550; Pop(1)

0x154a: Push("Can't find diary parent with id: ")
0x154b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x154c: @ Trace(Stack[-1])
0x154d: Pop(1)
0x154e: Stack[-9] = (bool) 0
0x154f: Return(); Pop(6)

0x1550: @@ AddChild(Stack[-8])
0x1551: Pop(0)
0x1552: Push("player_diary")
0x1553: Push((int) 1)
0x1554: @ SetVariable(Stack[-2], Stack[-1])
0x1555: Pop(2)
0x1556: @@ GetCategory(Stack[-1])
0x1557: Pop(0)
0x1558: @ SetDiarySection(Stack[-1])
0x1559: Pop(0)
0x155a: Stack[-9] = (bool) 0
0x155b: Return(); Pop(6)

0x155c: Stack[-2] = 0
0x155d: Stack[-3] = 0
0x155e: PushEmpty(object, object, object, object)
0x155f: PushEmpty(object)
0x1560: Call 0x1534

0x1561: Stack[-3] = Stack[-1]
0x1562: Pop(1)
0x1563: @@ Find(Stack[-5], Stack[-1])
0x1564: Pop(0)
0x1565: Pop(0); Push((bool) Stack[-1] == 0)
0x1566: IF (Stack[-1] == 0) GOTO 0x1569; Pop(1)

0x1567: Stack[-6] = (bool) 0
0x1568: Return(); Pop(4)

0x1569: @@ Remove()
0x156a: Pop(0)
0x156b: Stack[-6] = (bool) 1
0x156c: Return(); Pop(4)

0x156d: Stack[-1] = 0
0x156e: Stack[-2] = 0
0x156f: PushEmpty(object, object, object, object)
0x1570: @ GetMainOutdoorScene(Stack[-2])
0x1571: Pop(0)
0x1572: Pop(0); Push((bool) Stack[-2] == 0)
0x1573: IF (Stack[-1] == 0) GOTO 0x157a; Pop(1)

0x1574: Push("Can't find main outdoor scene")
0x1575: @ Trace(Stack[-1])
0x1576: Pop(1)
0x1577: Stack[-1] = 0
0x1578: Stack[-5] = Stack[-1]
0x1579: Return(); Pop(4)

0x157a: @@ GetMap(Stack[-1])
0x157b: Pop(0)
0x157c: Stack[-5] = Stack[-1]
0x157d: Return(); Pop(4)

0x157e: Stack[-1] = 0
0x157f: Stack[-2] = 0
0x1580: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1581: @ GetMainOutdoorScene(Stack[-2])
0x1582: Pop(0)
0x1583: Pop(0); Push((bool) Stack[-2] == 0)
0x1584: IF (Stack[-1] == 0) GOTO 0x1589; Pop(1)

0x1585: Push("Can't find main outdoor scene")
0x1586: @ Trace(Stack[-1])
0x1587: Pop(1)
0x1588: Return(); Pop(8)

0x1589: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x158a: Pop(0)
0x158b: Pop(0); Push((bool) Stack[-1] == 0)
0x158c: IF (Stack[-1] == 0) GOTO 0x1593; Pop(1)

0x158d: Push("Warning: outdoor scene locator ")
0x158e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x158f: Push(" doesnt exist")
0x1590: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1591: @ Trace(Stack[-1])
0x1592: Pop(1)
0x1593: @@ GetMap(Stack[-11])
0x1594: Pop(0)
0x1595: Pop(0); Push((bool) Stack[-11] == 0)
0x1596: IF (Stack[-1] == 0) GOTO 0x159b; Pop(1)

0x1597: Push("Can't find map")
0x1598: @ Trace(Stack[-1])
0x1599: Pop(1)
0x159a: Return(); Pop(8)

0x159b: Push(CvectorIndex(Stack[-4], 0))
0x159c: Push(CvectorIndex(Stack[-5], 2))
0x159d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x159e: Pop(2)
0x159f: Return(); Pop(8)

0x15a0: Stack[-2] = 0
0x15a1: PushEmpty(int, int)
0x15a2: Push("player")
0x15a3: @ GetVariable(Stack[-1], Stack[-2])
0x15a4: Pop(1)
0x15a5: Push((int) 0)
0x15a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15a7: IF (Stack[-1] == 0) GOTO 0x15ab; Pop(1)

0x15a8: Stack[-3] = (int) 200001
0x15a9: Return(); Pop(2)

0x15aa: GOTO 0x15b0

0x15ab: Push((int) 1)
0x15ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15ad: IF (Stack[-1] == 0) GOTO 0x15b0; Pop(1)

0x15ae: Stack[-3] = (int) 200002
0x15af: Return(); Pop(2)

0x15b0: Stack[-3] = (int) 200003
0x15b1: Return(); Pop(2)

0x15b2: PushEmpty(object, object)
0x15b3: Push("Adding diary entry")
0x15b4: @ Trace(Stack[-1])
0x15b5: Pop(1)
0x15b6: Push((int) 2)
0x15b7: Push((int) 1)
0x15b8: Push((int) 3073)
0x15b9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ba: Pop(3)
0x15bb: PushEmpty(bool, object, int)
0x15bc: Stack[-2] = Stack[-4]
0x15bd: Stack[-1] = (int) -1
0x15be: Call 0x1541

0x15bf: Pop(3)
0x15c0: Return(); Pop(2)

0x15c1: Stack[-1] = 0
0x15c2: PushEmpty(object, object)
0x15c3: Push("Adding diary entry")
0x15c4: @ Trace(Stack[-1])
0x15c5: Pop(1)
0x15c6: Push((int) 49)
0x15c7: Push((int) 1)
0x15c8: Push((int) 12131)
0x15c9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ca: Pop(3)
0x15cb: PushEmpty(bool, object, int)
0x15cc: Stack[-2] = Stack[-4]
0x15cd: Stack[-1] = (int) 2
0x15ce: Call 0x1541

0x15cf: Pop(3)
0x15d0: Return(); Pop(2)

0x15d1: Stack[-1] = 0
0x15d2: PushEmpty(object, object)
0x15d3: Push("Adding diary entry")
0x15d4: @ Trace(Stack[-1])
0x15d5: Pop(1)
0x15d6: Push((int) 26)
0x15d7: Push((int) 2)
0x15d8: Push((int) 3366)
0x15d9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15da: Pop(3)
0x15db: PushEmpty(bool, object, int)
0x15dc: Stack[-2] = Stack[-4]
0x15dd: Stack[-1] = (int) -1
0x15de: Call 0x1541

0x15df: Pop(3)
0x15e0: Return(); Pop(2)

0x15e1: Stack[-1] = 0
0x15e2: PushEmpty(object, object)
0x15e3: Push("Adding diary entry")
0x15e4: @ Trace(Stack[-1])
0x15e5: Pop(1)
0x15e6: Push((int) 76)
0x15e7: Push((int) 2)
0x15e8: Push((int) 12158)
0x15e9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ea: Pop(3)
0x15eb: PushEmpty(bool, object, int)
0x15ec: Stack[-2] = Stack[-4]
0x15ed: Stack[-1] = (int) 26
0x15ee: Call 0x1541

0x15ef: Pop(3)
0x15f0: Return(); Pop(2)

0x15f1: Stack[-1] = 0
0x15f2: Push(GlobalVars[1])
0x15f3: Stack[-1] = (bool) 0
0x15f4: GlobalVars[1] = Stack[-1]; Pop(1)
0x15f5: Return(); Pop(0)

0x15f6: PushEmpty()
0x15f7: PushEmpty(bool, int)
0x15f8: Stack[-1] = (int) 1
0x15f9: Call 0x122f

0x15fa: Pop(1)
0x15fb: IF (Stack[-1] == 0) GOTO 0x1611; Pop(1)

0x15fc: PushEmpty(int, string)
0x15fd: Stack[-1] = "d1q01"
0x15fe: Call 0x1205

0x15ff: Pop(1)
0x1600: Push((int) 0)
0x1601: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1602: IF (Stack[-1] == 0) GOTO 0x160a; Pop(1)

0x1603: PushEmpty(int, object)
0x1604: Stack[-1] = Stack[-3]
0x1605: Push(-2, 1); TaskCall(4)
0x1606: Call 0x232

0x1607: Pop(-2, 1); TaskReturn
0x1608: Pop(2)
0x1609: Return(); Pop(0)

0x160a: PushEmpty(int, object)
0x160b: Stack[-1] = Stack[-3]
0x160c: Push(-2, 1); TaskCall(6)
0x160d: Call 0x558

0x160e: Pop(-2, 1); TaskReturn
0x160f: Pop(2)
0x1610: Return(); Pop(0)

0x1611: PushEmpty(bool, int)
0x1612: Stack[-1] = (int) 2
0x1613: Call 0x122f

0x1614: Pop(1)
0x1615: IF (Stack[-1] == 0) GOTO 0x161d; Pop(1)

0x1616: PushEmpty(int, object)
0x1617: Stack[-1] = Stack[-3]
0x1618: Push(-2, 1); TaskCall(8)
0x1619: Call 0x9bf

0x161a: Pop(-2, 1); TaskReturn
0x161b: Pop(2)
0x161c: Return(); Pop(0)

0x161d: PushEmpty(bool, int)
0x161e: Stack[-1] = (int) 3
0x161f: Call 0x122f

0x1620: Pop(1)
0x1621: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1622: PushEmpty(int, object)
0x1623: Stack[-1] = Stack[-3]
0x1624: Push(-2, 1); TaskCall(10)
0x1625: Call 0xc2a

0x1626: Pop(-2, 1); TaskReturn
0x1627: Pop(2)
0x1628: Return(); Pop(0)

0x1629: PushEmpty(bool, int)
0x162a: Stack[-1] = (int) 6
0x162b: Call 0x122f

0x162c: Pop(1)
0x162d: IF (Stack[-1] == 0) GOTO 0x1635; Pop(1)

0x162e: PushEmpty(int, object)
0x162f: Stack[-1] = Stack[-3]
0x1630: Push(-2, 1); TaskCall(2)
0x1631: Call 0x31

0x1632: Pop(-2, 1); TaskReturn
0x1633: Pop(2)
0x1634: Return(); Pop(0)

0x1635: PushEmpty(bool, int)
0x1636: Stack[-1] = (int) 8
0x1637: Call 0x122f

0x1638: Pop(1)
0x1639: IF (Stack[-1] == 0) GOTO 0x1641; Pop(1)

0x163a: PushEmpty(int, object)
0x163b: Stack[-1] = Stack[-3]
0x163c: Push(-2, 1); TaskCall(12)
0x163d: Call 0x1023

0x163e: Pop(-2, 1); TaskReturn
0x163f: Pop(2)
0x1640: Return(); Pop(0)

0x1641: PushEmpty(bool)
0x1642: Call 0x1235

0x1643: Pop(1)
0x1644: Return(); Pop(0)

