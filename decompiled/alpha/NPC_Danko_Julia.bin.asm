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
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	No
	ui/NPC_Julia.png
	ood1Julia1
	ood1Julia2
	ood1Julia3
	money1000 is given
	money
	playsound
	givemoney
	giveitem
	ood2Julia1
	KnowBurahDead
	ood1Julia4
	ood1Julia5
	ood1Julia6
	ood1Julia7
	ood1Julia8
	ood1Julia9
	d1q01KnowEpidemic
	ood1Julia10
	KnowJulia
	KnowRubin
	ood4Julia1
	d4q02JuliaGivesMedcine
	d4q02AnnaGivesMedcine
	d4q02LaraGivesMedcine
	d4q02
	d4q02BirdmaskNearHome
	pt_d4q02_birdmask
	AddMark
	quest_d4_02
	ShowMap
	ood4Julia2
	KnowMistresses
	ood6Julia1
	ood6Julia2
	julia blood is given
	d6q01_julia_blood
	d6q01JuliaVolonteer
	d6q01AlexandrGotoJulia
	FindMark
	Remove
	d6q01AlexandrGotoKaterina
	d6q01AlexandrGotoLara
	d6q01AlexangrGotoJulLaraSelf
	d6q01BigVladGotoAnna
	d6q01BigVladGotoAnnaOspinaSelf
	d6q01BigVladGotoOspina
	d6q01KaterinaGotoLaska
	d6q01KaterinagotoLaskaSelf
	d6q01KillerIsKlara
	d6q01LaskaGotoAlbinos
	d6q01ViktorGotoAlexandr
	d6q01ViktorGotoAlxBigSelf
	d6q01ViktorGotoBigVlad
	quest_d6_01
	completed
	feromicin is given
	feromicin
	ood3Julia1
	neomicin is given
	neomicin
	monomicin is given
	monomicin
	d1q01
	d1q01FirstGeorgVisit
	KnowDiamAce
	d2q03
	KnowViktor
	d4q01
	KnowMark
	d6q01
	d5q01
	microscope_d6q01_julia_blood
	KnowAnna
	KnowEva
	KnowLara
	KnowMyth
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
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x232 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6a1 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdd6 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1037 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1190 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1839

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x133c

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
0x15: Call 0x137d

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
0x26: Call 0x183d

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1330

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1341

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x13f0

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x13f2

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x17f8

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
0x67: Call 0x1379

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
0x79: Call 0x145e

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb4

0x7e: Pop(1)
0x7f: Push((int) 325)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 326)
0x85: Push((int) 383)
0x86: Push((int) 380)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 327)
0x8a: Push((int) 383)
0x8b: Push((int) 381)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 328)
0x8f: Push((int) 393)
0x90: Push((int) 382)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x13f4

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x137d

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
0xb6: Call 0x13f4

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x137d

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x138f

0xc9: Pop(0)
0xca: Push((int) 379)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x145e

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call 0xb4

0xd5: Pop(1)
0xd6: Push((int) 325)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 326)
0xdc: Push((int) 383)
0xdd: Push((int) 380)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 327)
0xe1: Push((int) 383)
0xe2: Push((int) 381)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 328)
0xe6: Push((int) 393)
0xe7: Push((int) 382)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 393)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 338)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 339)
0xf8: Push((int) 396)
0xf9: Push((int) 394)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 396)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call 0xb4

0x103: Pop(1)
0x104: Push((int) 341)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 343)
0x10a: Push((int) -1)
0x10b: Push((int) 398)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 344)
0x10f: Push((int) -1)
0x110: Push((int) 399)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 383)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call 0xb4

0x11a: Pop(1)
0x11b: Push((int) 329)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 330)
0x121: Push((int) 386)
0x122: Push((int) 385)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 334)
0x126: Push((int) 390)
0x127: Push((int) 389)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 390)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call 0xb4

0x131: Pop(1)
0x132: Push((int) 335)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 336)
0x138: Push((int) -1)
0x139: Push((int) 391)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 337)
0x13d: Push((int) -1)
0x13e: Push((int) 392)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 386)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call 0xb4

0x148: Pop(1)
0x149: Push((int) 331)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 333)
0x14f: Push((int) -1)
0x150: Push((int) 388)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x155: PushEmpty(bool)
0x156: Call 0x13f4

0x157: Pop(0)
0x158: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x159: @ lshStopAnimation()
0x15a: Pop(0)
0x15b: GOTO 0x15e

0x15c: @ StopAnimation()
0x15d: Pop(0)
0x15e: Return(); Pop(0)

0x15f: GOTO 0xc5

0x160: Return(); Pop(0)

0x161: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x163: PushEmpty(bool, object)
0x164: Stack[-1] = Stack[-11]
0x165: Call 0x1341

0x166: Pop(1)
0x167: Pop(1); Push((bool) Stack[-1] == 0)
0x168: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x169: Stack[-10] = (int) -2
0x16a: Return(); Pop(8)

0x16b: @ CreateDialog(Stack[-4])
0x16c: Pop(0)
0x16d: PushEmpty(int)
0x16e: Call 0x13f0

0x16f: Pop(0)
0x170: @@ SetNPCName(Stack[-1])
0x171: Pop(1)
0x172: PushEmpty(string)
0x173: Call 0x13f2

0x174: Pop(0)
0x175: @@ SetPhoto(Stack[-1])
0x176: Pop(1)
0x177: PushEmpty(int)
0x178: Call 0x17f8

0x179: Pop(0)
0x17a: @@ SetPlayerName(Stack[-1])
0x17b: Pop(1)
0x17c: Stack[-2] = (int) -1
0x17d: @ IsOverrideActive(Stack[-3])
0x17e: Pop(0)
0x17f: Push(Stack[-3])
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: Stack[-10] = (int) -2
0x182: Return(); Pop(8)

0x183: @ DoDialog(Stack[-4])
0x184: Pop(0)
0x185: PushEmpty(object, object)
0x186: Stack[-2] = Stack[-11]
0x187: Stack[-1] = Stack[-6]
0x188: Push(-2, 4); TaskCall(5)
0x189: Call 0x1a0

0x18a: Pop(-2, 4); TaskReturn
0x18b: Pop(2)
0x18c: @@ IsDialogEnd(Stack[-1])
0x18d: Pop(0)
0x18e: Pop(0); Push((bool) Stack[-1] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: @ sync()
0x191: Pop(0)
0x192: @@ IsDialogEnd(Stack[-1])
0x193: Pop(0)
0x194: GOTO 0x18e

0x195: PushEmpty(object)
0x196: Stack[-1] = Stack[-10]
0x197: Call 0x1379

0x198: Pop(1)
0x199: @ StopDialog(Stack[-4])
0x19a: Pop(0)
0x19b: @@ GetReturnValue(Stack[-2])
0x19c: Pop(0)
0x19d: Stack[-10] = Stack[-2]
0x19e: Return(); Pop(8)

0x19f: Stack[-4] = 0
0x1a0: PushEmpty()
0x1a1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1a3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a4: Push((int) 1)
0x1a5: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Neutral"
0x1a8: Call 0x222

0x1a9: Pop(1)
0x1aa: Push((int) 3640)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Call 0x16eb

0x1b4: Pop(1)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b6: PushEmpty(bool, object)
0x1b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Call 0x16f7

0x1b9: Pop(1)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Stack[-1] = (bool) 1
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: Push((int) 3641)
0x1be: Push((int) 3945)
0x1bf: Push((int) 3943)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: PushEmpty(bool)
0x1c3: Stack[-1] = (bool) 0
0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call 0x16df

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c9: PushEmpty(bool, object)
0x1ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Call 0x1703

0x1cc: Pop(1)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: Stack[-1] = (bool) 1
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d0: Push((int) 12733)
0x1d1: Push((int) 11803)
0x1d2: Push((int) 13927)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: PushEmpty(bool)
0x1d6: Stack[-1] = (bool) 0
0x1d7: PushEmpty(bool)
0x1d8: Stack[-1] = (bool) 0
0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: PushEmpty(bool, object)
0x1dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Call 0x170f

0x1de: Pop(1)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e0: PushEmpty(bool, object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call 0x171b

0x1e3: Pop(1)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[-1] = (bool) 1
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Call 0x1720

0x1ea: Pop(1)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[-1] = (bool) 1
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ef: PushEmpty(bool, object)
0x1f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Call 0x172c

0x1f2: Pop(1)
0x1f3: Pop(1); Push((bool) Stack[-1] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = (bool) 1
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: Push((int) 12734)
0x1f8: Push((int) 11840)
0x1f9: Push((int) 13928)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 3642)
0x1fd: Push((int) -1)
0x1fe: Push((int) 3944)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: GOTO 0x204

0x202: Return(); Pop(0)

0x203: GOTO 0x1a4

0x204: PushEmpty(bool)
0x205: Call 0x13f4

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x208: @ lshWaitForAnimEnd()
0x209: Pop(0)
0x20a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: GOTO 0x212

0x20d: PushEmpty(string)
0x20e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x20f: Call 0x137d

0x210: Pop(1)
0x211: GOTO 0x208

0x212: GOTO 0x221

0x213: Push("all")
0x214: Push("idle")
0x215: @ PlayAnimation(Stack[-2], Stack[-1])
0x216: Pop(2)
0x217: @ WaitForAnimEnd()
0x218: Pop(0)
0x219: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: GOTO 0x221

0x21c: Push("all")
0x21d: Push("idle")
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: GOTO 0x217

0x221: Return(); Pop(0)

0x222: PushEmpty()
0x223: PushEmpty(bool)
0x224: Call 0x13f4

0x225: Pop(0)
0x226: Pop(1); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Return(); Pop(0)

0x229: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Return(); Pop(0)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = Stack[-2]
0x22e: Call 0x137d

0x22f: Pop(1)
0x230: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: Push((int) 1)
0x234: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x235: PushEmpty()
0x236: Call 0x138f

0x237: Pop(0)
0x238: Push((int) 3943)
0x239: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23b: PushEmpty(object, object)
0x23c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23e: Call 0x14c6

0x23f: Pop(2)
0x240: Push((int) 3953)
0x241: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x243: PushEmpty(object, object)
0x244: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x245: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x246: Call 0x14c6

0x247: Pop(2)
0x248: Push((int) 13927)
0x249: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(object, object)
0x24c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24e: Call 0x14cc

0x24f: Pop(2)
0x250: Push((int) 11813)
0x251: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x253: PushEmpty(object, object)
0x254: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x255: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x256: Call 0x14d2

0x257: Pop(2)
0x258: PushEmpty(object, object)
0x259: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25b: Call 0x14e0

0x25c: Pop(2)
0x25d: Push((int) 11839)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x260: PushEmpty(object, object)
0x261: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x262: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x263: Call 0x14cc

0x264: Pop(2)
0x265: PushEmpty(object, object)
0x266: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x267: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x268: Call 0x14d2

0x269: Pop(2)
0x26a: PushEmpty(object, object)
0x26b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26d: Call 0x14e0

0x26e: Pop(2)
0x26f: Push((int) 13928)
0x270: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x272: PushEmpty(object, object)
0x273: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x274: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x275: Call 0x1574

0x276: Pop(2)
0x277: Push((int) 11853)
0x278: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27a: PushEmpty(object, object)
0x27b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27d: Call 0x14e6

0x27e: Pop(2)
0x27f: Push((int) 11854)
0x280: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: PushEmpty(object, object)
0x283: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x284: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x285: Call 0x14e6

0x286: Pop(2)
0x287: Push((int) 3942)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral"
0x28c: Call 0x222

0x28d: Pop(1)
0x28e: Push((int) 3640)
0x28f: @@ SetMessage(Stack[-1])
0x290: Pop(1)
0x291: @@ ClearReplies()
0x292: Pop(0)
0x293: PushEmpty(bool)
0x294: Stack[-1] = (bool) 0
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x297: Call 0x16eb

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29a: PushEmpty(bool, object)
0x29b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29c: Call 0x16f7

0x29d: Pop(1)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: Stack[-1] = (bool) 1
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: Push((int) 3641)
0x2a2: Push((int) 3945)
0x2a3: Push((int) 3943)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: PushEmpty(bool)
0x2a7: Stack[-1] = (bool) 0
0x2a8: PushEmpty(bool, object)
0x2a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Call 0x16df

0x2ab: Pop(1)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2af: Call 0x1703

0x2b0: Pop(1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: Stack[-1] = (bool) 1
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: Push((int) 12733)
0x2b5: Push((int) 11803)
0x2b6: Push((int) 13927)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: PushEmpty(bool)
0x2ba: Stack[-1] = (bool) 0
0x2bb: PushEmpty(bool)
0x2bc: Stack[-1] = (bool) 0
0x2bd: PushEmpty(bool)
0x2be: Stack[-1] = (bool) 0
0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c1: Call 0x170f

0x2c2: Pop(1)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c4: PushEmpty(bool, object)
0x2c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c6: Call 0x171b

0x2c7: Pop(1)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Stack[-1] = (bool) 1
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cd: Call 0x1720

0x2ce: Pop(1)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Stack[-1] = (bool) 1
0x2d2: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d3: PushEmpty(bool, object)
0x2d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Call 0x172c

0x2d6: Pop(1)
0x2d7: Pop(1); Push((bool) Stack[-1] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: Stack[-1] = (bool) 1
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: Push((int) 12734)
0x2dc: Push((int) 11840)
0x2dd: Push((int) 13928)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Push((int) 3642)
0x2e1: Push((int) -1)
0x2e2: Push((int) 3944)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Return(); Pop(0)

0x2e6: Push((int) 11840)
0x2e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2e9: PushEmpty(string)
0x2ea: Stack[-1] = "Neutral"
0x2eb: Call 0x222

0x2ec: Pop(1)
0x2ed: Push((int) 10719)
0x2ee: @@ SetMessage(Stack[-1])
0x2ef: Pop(1)
0x2f0: @@ ClearReplies()
0x2f1: Pop(0)
0x2f2: Push((int) 10720)
0x2f3: Push((int) 11842)
0x2f4: Push((int) 11841)
0x2f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(3)
0x2f7: Return(); Pop(0)

0x2f8: Push((int) 11842)
0x2f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = "Neutral"
0x2fd: Call 0x222

0x2fe: Pop(1)
0x2ff: Push((int) 10721)
0x300: @@ SetMessage(Stack[-1])
0x301: Pop(1)
0x302: @@ ClearReplies()
0x303: Pop(0)
0x304: Push((int) 10722)
0x305: Push((int) 11844)
0x306: Push((int) 11843)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Push((int) 10733)
0x30a: Push((int) 11844)
0x30b: Push((int) 11855)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Push((int) 10734)
0x30f: Push((int) 11858)
0x310: Push((int) 11857)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: Push((int) 11858)
0x315: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral"
0x319: Call 0x222

0x31a: Pop(1)
0x31b: Push((int) 10735)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 10736)
0x321: Push((int) 11844)
0x322: Push((int) 11859)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Push((int) 10737)
0x326: Push((int) 11844)
0x327: Push((int) 11861)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: Push((int) 11844)
0x32c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral"
0x330: Call 0x222

0x331: Pop(1)
0x332: Push((int) 10723)
0x333: @@ SetMessage(Stack[-1])
0x334: Pop(1)
0x335: @@ ClearReplies()
0x336: Pop(0)
0x337: Push((int) 10724)
0x338: Push((int) 11846)
0x339: Push((int) 11845)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Push((int) 10728)
0x33d: Push((int) 11846)
0x33e: Push((int) 11849)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Push((int) 10729)
0x342: Push((int) 11852)
0x343: Push((int) 11851)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: Return(); Pop(0)

0x347: Push((int) 11852)
0x348: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x34a: PushEmpty(string)
0x34b: Stack[-1] = "Neutral"
0x34c: Call 0x222

0x34d: Pop(1)
0x34e: Push((int) 10730)
0x34f: @@ SetMessage(Stack[-1])
0x350: Pop(1)
0x351: @@ ClearReplies()
0x352: Pop(0)
0x353: Push((int) 10731)
0x354: Push((int) -1)
0x355: Push((int) 11853)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Push((int) 10732)
0x359: Push((int) -1)
0x35a: Push((int) 11854)
0x35b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(3)
0x35d: Return(); Pop(0)

0x35e: Push((int) 11846)
0x35f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x361: PushEmpty(string)
0x362: Stack[-1] = "Neutral"
0x363: Call 0x222

0x364: Pop(1)
0x365: Push((int) 10725)
0x366: @@ SetMessage(Stack[-1])
0x367: Pop(1)
0x368: @@ ClearReplies()
0x369: Pop(0)
0x36a: Push((int) 10726)
0x36b: Push((int) -1)
0x36c: Push((int) 11847)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: Push((int) 10727)
0x370: Push((int) -1)
0x371: Push((int) 11848)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Return(); Pop(0)

0x375: Push((int) 11803)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x378: PushEmpty(string)
0x379: Stack[-1] = "Neutral"
0x37a: Call 0x222

0x37b: Pop(1)
0x37c: Push((int) 10689)
0x37d: @@ SetMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ ClearReplies()
0x380: Pop(0)
0x381: Push((int) 10690)
0x382: Push((int) 11805)
0x383: Push((int) 11804)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Push((int) 10715)
0x387: Push((int) 11807)
0x388: Push((int) 11835)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 10716)
0x38c: Push((int) 11838)
0x38d: Push((int) 11837)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 11838)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Neutral"
0x396: Call 0x222

0x397: Pop(1)
0x398: Push((int) 10717)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 10718)
0x39e: Push((int) -1)
0x39f: Push((int) 11839)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 11805)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Neutral"
0x3a8: Call 0x222

0x3a9: Pop(1)
0x3aa: Push((int) 10691)
0x3ab: @@ SetMessage(Stack[-1])
0x3ac: Pop(1)
0x3ad: @@ ClearReplies()
0x3ae: Pop(0)
0x3af: Push((int) 10692)
0x3b0: Push((int) 11807)
0x3b1: Push((int) 11806)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Push((int) 10711)
0x3b5: Push((int) 11830)
0x3b6: Push((int) 11829)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 11830)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Neutral"
0x3bf: Call 0x222

0x3c0: Pop(1)
0x3c1: Push((int) 10712)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 10713)
0x3c7: Push((int) 11807)
0x3c8: Push((int) 11831)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Push((int) 10714)
0x3cc: Push((int) 11807)
0x3cd: Push((int) 11833)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Return(); Pop(0)

0x3d1: Push((int) 11807)
0x3d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3d4: PushEmpty(string)
0x3d5: Stack[-1] = "Neutral"
0x3d6: Call 0x222

0x3d7: Pop(1)
0x3d8: Push((int) 10693)
0x3d9: @@ SetMessage(Stack[-1])
0x3da: Pop(1)
0x3db: @@ ClearReplies()
0x3dc: Pop(0)
0x3dd: Push((int) 10694)
0x3de: Push((int) 11809)
0x3df: Push((int) 11808)
0x3e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: Push((int) 10701)
0x3e3: Push((int) 11809)
0x3e4: Push((int) 11816)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Push((int) 10702)
0x3e8: Push((int) 11818)
0x3e9: Push((int) 11817)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Return(); Pop(0)

0x3ed: Push((int) 11818)
0x3ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Neutral"
0x3f2: Call 0x222

0x3f3: Pop(1)
0x3f4: Push((int) 10703)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: Push((int) 10704)
0x3fa: Push((int) 11820)
0x3fb: Push((int) 11819)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Push((int) 10710)
0x3ff: Push((int) 11820)
0x400: Push((int) 11827)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 11820)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Neutral"
0x409: Call 0x222

0x40a: Pop(1)
0x40b: Push((int) 10705)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 10706)
0x411: Push((int) 11822)
0x412: Push((int) 11821)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Push((int) 10709)
0x416: Push((int) 11809)
0x417: Push((int) 11825)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 11822)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Neutral"
0x420: Call 0x222

0x421: Pop(1)
0x422: Push((int) 10707)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 10708)
0x428: Push((int) 11809)
0x429: Push((int) 11823)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Return(); Pop(0)

0x42d: Push((int) 11809)
0x42e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x430: PushEmpty(string)
0x431: Stack[-1] = "Neutral"
0x432: Call 0x222

0x433: Pop(1)
0x434: Push((int) 10695)
0x435: @@ SetMessage(Stack[-1])
0x436: Pop(1)
0x437: @@ ClearReplies()
0x438: Pop(0)
0x439: Push((int) 10696)
0x43a: Push((int) 11811)
0x43b: Push((int) 11810)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: Push((int) 10700)
0x43f: Push((int) 11811)
0x440: Push((int) 11814)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Return(); Pop(0)

0x444: Push((int) 11811)
0x445: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x447: PushEmpty(string)
0x448: Stack[-1] = "Neutral"
0x449: Call 0x222

0x44a: Pop(1)
0x44b: Push((int) 10697)
0x44c: @@ SetMessage(Stack[-1])
0x44d: Pop(1)
0x44e: @@ ClearReplies()
0x44f: Pop(0)
0x450: Push((int) 10698)
0x451: Push((int) -1)
0x452: Push((int) 11812)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Push((int) 10699)
0x456: Push((int) -1)
0x457: Push((int) 11813)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: Push((int) 3945)
0x45c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x45e: PushEmpty(string)
0x45f: Stack[-1] = "Neutral"
0x460: Call 0x222

0x461: Pop(1)
0x462: Push((int) 3643)
0x463: @@ SetMessage(Stack[-1])
0x464: Pop(1)
0x465: @@ ClearReplies()
0x466: Pop(0)
0x467: Push((int) 3644)
0x468: Push((int) 3948)
0x469: Push((int) 3946)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Push((int) 3645)
0x46d: Push((int) 3951)
0x46e: Push((int) 3947)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Return(); Pop(0)

0x472: Push((int) 3951)
0x473: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x475: PushEmpty(string)
0x476: Stack[-1] = "Neutral"
0x477: Call 0x222

0x478: Pop(1)
0x479: Push((int) 3648)
0x47a: @@ SetMessage(Stack[-1])
0x47b: Pop(1)
0x47c: @@ ClearReplies()
0x47d: Pop(0)
0x47e: Push((int) 3649)
0x47f: Push((int) 3954)
0x480: Push((int) 3952)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Push((int) 3650)
0x484: Push((int) -1)
0x485: Push((int) 3953)
0x486: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x487: Pop(3)
0x488: Return(); Pop(0)

0x489: Push((int) 3954)
0x48a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x48c: PushEmpty(string)
0x48d: Stack[-1] = "Neutral"
0x48e: Call 0x222

0x48f: Pop(1)
0x490: Push((int) 3651)
0x491: @@ SetMessage(Stack[-1])
0x492: Pop(1)
0x493: @@ ClearReplies()
0x494: Pop(0)
0x495: Push((int) 3654)
0x496: Push((int) 3958)
0x497: Push((int) 3957)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Return(); Pop(0)

0x49b: Push((int) 3958)
0x49c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x49e: PushEmpty(string)
0x49f: Stack[-1] = "Neutral"
0x4a0: Call 0x222

0x4a1: Pop(1)
0x4a2: Push((int) 3655)
0x4a3: @@ SetMessage(Stack[-1])
0x4a4: Pop(1)
0x4a5: @@ ClearReplies()
0x4a6: Pop(0)
0x4a7: Push((int) 3656)
0x4a8: Push((int) 3948)
0x4a9: Push((int) 3959)
0x4aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ab: Pop(3)
0x4ac: Return(); Pop(0)

0x4ad: Push((int) 3948)
0x4ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4b0: PushEmpty(string)
0x4b1: Stack[-1] = "Neutral"
0x4b2: Call 0x222

0x4b3: Pop(1)
0x4b4: Push((int) 3646)
0x4b5: @@ SetMessage(Stack[-1])
0x4b6: Pop(1)
0x4b7: @@ ClearReplies()
0x4b8: Pop(0)
0x4b9: Push((int) 3647)
0x4ba: Push((int) 3955)
0x4bb: Push((int) 3950)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Push((int) 3657)
0x4bf: Push((int) 3955)
0x4c0: Push((int) 3961)
0x4c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c2: Pop(3)
0x4c3: Return(); Pop(0)

0x4c4: Push((int) 3955)
0x4c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4c7: PushEmpty(string)
0x4c8: Stack[-1] = "Neutral"
0x4c9: Call 0x222

0x4ca: Pop(1)
0x4cb: Push((int) 3652)
0x4cc: @@ SetMessage(Stack[-1])
0x4cd: Pop(1)
0x4ce: @@ ClearReplies()
0x4cf: Pop(0)
0x4d0: Push((int) 3653)
0x4d1: Push((int) 3963)
0x4d2: Push((int) 3956)
0x4d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: Return(); Pop(0)

0x4d6: Push((int) 3963)
0x4d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4d9: PushEmpty(string)
0x4da: Stack[-1] = "Neutral"
0x4db: Call 0x222

0x4dc: Pop(1)
0x4dd: Push((int) 3658)
0x4de: @@ SetMessage(Stack[-1])
0x4df: Pop(1)
0x4e0: @@ ClearReplies()
0x4e1: Pop(0)
0x4e2: Push((int) 3659)
0x4e3: Push((int) -1)
0x4e4: Push((int) 3964)
0x4e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e6: Pop(3)
0x4e7: Push((int) 3660)
0x4e8: Push((int) -1)
0x4e9: Push((int) 3965)
0x4ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: Return(); Pop(0)

0x4ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4ee: PushEmpty(bool)
0x4ef: Call 0x13f4

0x4f0: Pop(0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f2: @ lshStopAnimation()
0x4f3: Pop(0)
0x4f4: GOTO 0x4f7

0x4f5: @ StopAnimation()
0x4f6: Pop(0)
0x4f7: Return(); Pop(0)

0x4f8: GOTO 0x233

0x4f9: Return(); Pop(0)

0x4fa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4fc: PushEmpty(bool, object)
0x4fd: Stack[-1] = Stack[-11]
0x4fe: Call 0x1341

0x4ff: Pop(1)
0x500: Pop(1); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-10] = (int) -2
0x503: Return(); Pop(8)

0x504: @ CreateDialog(Stack[-4])
0x505: Pop(0)
0x506: PushEmpty(int)
0x507: Call 0x13f0

0x508: Pop(0)
0x509: @@ SetNPCName(Stack[-1])
0x50a: Pop(1)
0x50b: PushEmpty(string)
0x50c: Call 0x13f2

0x50d: Pop(0)
0x50e: @@ SetPhoto(Stack[-1])
0x50f: Pop(1)
0x510: PushEmpty(int)
0x511: Call 0x17f8

0x512: Pop(0)
0x513: @@ SetPlayerName(Stack[-1])
0x514: Pop(1)
0x515: Stack[-2] = (int) -1
0x516: @ IsOverrideActive(Stack[-3])
0x517: Pop(0)
0x518: Push(Stack[-3])
0x519: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51a: Stack[-10] = (int) -2
0x51b: Return(); Pop(8)

0x51c: @ DoDialog(Stack[-4])
0x51d: Pop(0)
0x51e: PushEmpty(object, object)
0x51f: Stack[-2] = Stack[-11]
0x520: Stack[-1] = Stack[-6]
0x521: Push(-2, 4); TaskCall(7)
0x522: Call 0x539

0x523: Pop(-2, 4); TaskReturn
0x524: Pop(2)
0x525: @@ IsDialogEnd(Stack[-1])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-1] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x529: @ sync()
0x52a: Pop(0)
0x52b: @@ IsDialogEnd(Stack[-1])
0x52c: Pop(0)
0x52d: GOTO 0x527

0x52e: PushEmpty(object)
0x52f: Stack[-1] = Stack[-10]
0x530: Call 0x1379

0x531: Pop(1)
0x532: @ StopDialog(Stack[-4])
0x533: Pop(0)
0x534: @@ GetReturnValue(Stack[-2])
0x535: Pop(0)
0x536: Stack[-10] = Stack[-2]
0x537: Return(); Pop(8)

0x538: Stack[-4] = 0
0x539: PushEmpty()
0x53a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x53c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x53d: Push((int) 1)
0x53e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x53f: PushEmpty(bool)
0x540: Stack[-1] = (bool) 0
0x541: PushEmpty(bool)
0x542: Stack[-1] = (bool) 0
0x543: PushEmpty(bool)
0x544: Stack[-1] = (bool) 0
0x545: PushEmpty(bool)
0x546: Stack[-1] = (bool) 0
0x547: PushEmpty(bool, object)
0x548: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x549: Call 0x159d

0x54a: Pop(1)
0x54b: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54c: PushEmpty(bool, object)
0x54d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Call 0x15cd

0x54f: Pop(1)
0x550: Pop(1); Push((bool) Stack[-1] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: Stack[-1] = (bool) 1
0x553: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x554: PushEmpty(bool, object)
0x555: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x556: Call 0x15c1

0x557: Pop(1)
0x558: Pop(1); Push((bool) Stack[-1] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x55a: Stack[-1] = (bool) 1
0x55b: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55c: PushEmpty(bool, object)
0x55d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55e: Call 0x165d

0x55f: Pop(1)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-1] = (bool) 1
0x562: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x563: PushEmpty(bool, object)
0x564: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x565: Call 0x1669

0x566: Pop(1)
0x567: Pop(1); Push((bool) Stack[-1] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x569: Stack[-1] = (bool) 1
0x56a: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x56b: PushEmpty(object, object)
0x56c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56e: Call 0x1464

0x56f: Pop(2)
0x570: PushEmpty(string)
0x571: Stack[-1] = "Neutral"
0x572: Call 0x691

0x573: Pop(1)
0x574: Push((int) 5377)
0x575: @@ SetMessage(Stack[-1])
0x576: Pop(1)
0x577: @@ ClearReplies()
0x578: Pop(0)
0x579: PushEmpty(bool, object)
0x57a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57b: Call 0x1675

0x57c: Pop(1)
0x57d: Pop(1); Push((bool) Stack[-1] == 0)
0x57e: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57f: Push((int) 5379)
0x580: Push((int) 5964)
0x581: Push((int) 5924)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: PushEmpty(bool, object)
0x585: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x586: Call 0x1675

0x587: Pop(1)
0x588: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x589: Push((int) 5380)
0x58a: Push((int) 6864)
0x58b: Push((int) 5925)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: GOTO 0x673

0x58f: PushEmpty(bool)
0x590: Stack[-1] = (bool) 0
0x591: PushEmpty(bool)
0x592: Stack[-1] = (bool) 0
0x593: PushEmpty(bool)
0x594: Stack[-1] = (bool) 0
0x595: PushEmpty(bool, object)
0x596: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x597: Call 0x165d

0x598: Pop(1)
0x599: Pop(1); Push((bool) Stack[-1] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59b: PushEmpty(bool, object)
0x59c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59d: Call 0x1669

0x59e: Pop(1)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Stack[-1] = (bool) 1
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a2: PushEmpty(bool, object)
0x5a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a4: Call 0x15cd

0x5a5: Pop(1)
0x5a6: Pop(1); Push((bool) Stack[-1] == 0)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: Stack[-1] = (bool) 1
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5aa: PushEmpty(bool, object)
0x5ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ac: Call 0x15c1

0x5ad: Pop(1)
0x5ae: Pop(1); Push((bool) Stack[-1] == 0)
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: Stack[-1] = (bool) 1
0x5b1: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5b2: PushEmpty(string)
0x5b3: Stack[-1] = "Neutral"
0x5b4: Call 0x691

0x5b5: Pop(1)
0x5b6: Push((int) 8650)
0x5b7: @@ SetMessage(Stack[-1])
0x5b8: Pop(1)
0x5b9: @@ ClearReplies()
0x5ba: Pop(0)
0x5bb: Push((int) 8651)
0x5bc: Push((int) 9477)
0x5bd: Push((int) 9476)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: GOTO 0x673

0x5c1: PushEmpty(string)
0x5c2: Stack[-1] = "Neutral"
0x5c3: Call 0x691

0x5c4: Pop(1)
0x5c5: Push((int) 7779)
0x5c6: @@ SetMessage(Stack[-1])
0x5c7: Pop(1)
0x5c8: @@ ClearReplies()
0x5c9: Pop(0)
0x5ca: PushEmpty(bool)
0x5cb: Stack[-1] = (bool) 0
0x5cc: PushEmpty(bool, object)
0x5cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ce: Call 0x15a9

0x5cf: Pop(1)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d1: PushEmpty(bool, object)
0x5d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d3: Call 0x15d9

0x5d4: Pop(1)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 1
0x5d7: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d8: Push((int) 7815)
0x5d9: Push((int) 8618)
0x5da: Push((int) 8617)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: PushEmpty(bool)
0x5de: Stack[-1] = (bool) 0
0x5df: PushEmpty(bool, object)
0x5e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e1: Call 0x1768

0x5e2: Pop(1)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e4: PushEmpty(bool, object)
0x5e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e6: Call 0x15b5

0x5e7: Pop(1)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e9: Stack[-1] = (bool) 1
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5eb: Push((int) 7783)
0x5ec: Push((int) 8607)
0x5ed: Push((int) 8584)
0x5ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ef: Pop(3)
0x5f0: PushEmpty(bool)
0x5f1: Stack[-1] = (bool) 0
0x5f2: PushEmpty(bool)
0x5f3: Stack[-1] = (bool) 0
0x5f4: PushEmpty(bool, object)
0x5f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f6: Call 0x1774

0x5f7: Pop(1)
0x5f8: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f9: PushEmpty(bool, object)
0x5fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5fb: Call 0x1681

0x5fc: Pop(1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fe: Stack[-1] = (bool) 1
0x5ff: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x600: PushEmpty(bool, object)
0x601: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x602: Call 0x1609

0x603: Pop(1)
0x604: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x605: Stack[-1] = (bool) 1
0x606: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x607: Push((int) 7784)
0x608: Push((int) 8608)
0x609: Push((int) 8585)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: PushEmpty(bool)
0x60d: Stack[-1] = (bool) 0
0x60e: PushEmpty(bool, object)
0x60f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x610: Call 0x1615

0x611: Pop(1)
0x612: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x613: PushEmpty(bool, object)
0x614: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x615: Call 0x1744

0x616: Pop(1)
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Stack[-1] = (bool) 1
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: Push((int) 7785)
0x61b: Push((int) 8687)
0x61c: Push((int) 8586)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: PushEmpty(bool)
0x620: Stack[-1] = (bool) 0
0x621: PushEmpty(bool, object)
0x622: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x623: Call 0x1750

0x624: Pop(1)
0x625: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x626: PushEmpty(bool, object)
0x627: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x628: Call 0x1621

0x629: Pop(1)
0x62a: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62b: Stack[-1] = (bool) 1
0x62c: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62d: Push((int) 7786)
0x62e: Push((int) 8698)
0x62f: Push((int) 8587)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: PushEmpty(bool)
0x633: Stack[-1] = (bool) 0
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x636: Call 0x1738

0x637: Pop(1)
0x638: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x639: PushEmpty(bool, object)
0x63a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63b: Call 0x162d

0x63c: Pop(1)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Stack[-1] = (bool) 1
0x63f: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x640: Push((int) 7788)
0x641: Push((int) 8710)
0x642: Push((int) 8589)
0x643: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x644: Pop(3)
0x645: PushEmpty(bool)
0x646: Stack[-1] = (bool) 0
0x647: PushEmpty(bool, object)
0x648: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x649: Call 0x16d3

0x64a: Pop(1)
0x64b: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64c: PushEmpty(bool, object)
0x64d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64e: Call 0x1639

0x64f: Pop(1)
0x650: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x651: Stack[-1] = (bool) 1
0x652: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x653: Push((int) 7797)
0x654: Push((int) 8613)
0x655: Push((int) 8598)
0x656: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x657: Pop(3)
0x658: PushEmpty(bool)
0x659: Stack[-1] = (bool) 0
0x65a: PushEmpty(bool, object)
0x65b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65c: Call 0x1651

0x65d: Pop(1)
0x65e: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x65f: PushEmpty(bool, object)
0x660: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x661: Call 0x1645

0x662: Pop(1)
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: Stack[-1] = (bool) 1
0x665: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x666: Push((int) 7914)
0x667: Push((int) 8734)
0x668: Push((int) 8733)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: Push((int) 8703)
0x66c: Push((int) -1)
0x66d: Push((int) 9540)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: GOTO 0x673

0x671: Return(); Pop(0)

0x672: GOTO 0x53d

0x673: PushEmpty(bool)
0x674: Call 0x13f4

0x675: Pop(0)
0x676: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x677: @ lshWaitForAnimEnd()
0x678: Pop(0)
0x679: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67a: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67b: GOTO 0x681

0x67c: PushEmpty(string)
0x67d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x67e: Call 0x137d

0x67f: Pop(1)
0x680: GOTO 0x677

0x681: GOTO 0x690

0x682: Push("all")
0x683: Push("idle")
0x684: @ PlayAnimation(Stack[-2], Stack[-1])
0x685: Pop(2)
0x686: @ WaitForAnimEnd()
0x687: Pop(0)
0x688: Push( Stack[3 + Tasks[-1].StackPointer] )
0x689: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x68a: GOTO 0x690

0x68b: Push("all")
0x68c: Push("idle")
0x68d: @ PlayAnimation(Stack[-2], Stack[-1])
0x68e: Pop(2)
0x68f: GOTO 0x686

0x690: Return(); Pop(0)

0x691: PushEmpty()
0x692: PushEmpty(bool)
0x693: Call 0x13f4

0x694: Pop(0)
0x695: Pop(1); Push((bool) Stack[-1] == 0)
0x696: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x697: Return(); Pop(0)

0x698: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Return(); Pop(0)

0x69b: PushEmpty(string)
0x69c: Stack[-1] = Stack[-2]
0x69d: Call 0x137d

0x69e: Pop(1)
0x69f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6a0: Return(); Pop(0)

0x6a1: PushEmpty()
0x6a2: Push((int) 1)
0x6a3: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0x6a4: PushEmpty()
0x6a5: Call 0x138f

0x6a6: Pop(0)
0x6a7: Push((int) 6875)
0x6a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a9: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6aa: PushEmpty(object, object)
0x6ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ad: Call 0x13f6

0x6ae: Pop(2)
0x6af: Push((int) 6876)
0x6b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b2: PushEmpty(object, object)
0x6b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b5: Call 0x13f6

0x6b6: Pop(2)
0x6b7: Push((int) 9490)
0x6b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6ba: PushEmpty(object, object)
0x6bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6bd: Call 0x1458

0x6be: Pop(2)
0x6bf: PushEmpty(object, object)
0x6c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c2: Call 0x144f

0x6c3: Pop(2)
0x6c4: Push((int) 9481)
0x6c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c7: PushEmpty(object, object)
0x6c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ca: Call 0x1458

0x6cb: Pop(2)
0x6cc: Push((int) 9482)
0x6cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6cf: PushEmpty(object, object)
0x6d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d2: Call 0x1458

0x6d3: Pop(2)
0x6d4: Push((int) 8635)
0x6d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d7: PushEmpty(object, object)
0x6d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6da: Call 0x13fc

0x6db: Pop(2)
0x6dc: Push((int) 8661)
0x6dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6df: PushEmpty(object, object)
0x6e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e2: Call 0x1402

0x6e3: Pop(2)
0x6e4: Push((int) 8662)
0x6e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e7: PushEmpty(object, object)
0x6e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ea: Call 0x1402

0x6eb: Pop(2)
0x6ec: Push((int) 8675)
0x6ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6ef: PushEmpty(object, object)
0x6f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f2: Call 0x142b

0x6f3: Pop(2)
0x6f4: Push((int) 8676)
0x6f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f7: PushEmpty(object, object)
0x6f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6fa: Call 0x142b

0x6fb: Pop(2)
0x6fc: Push((int) 8697)
0x6fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x6ff: PushEmpty(object, object)
0x700: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x701: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x702: Call 0x1431

0x703: Pop(2)
0x704: Push((int) 8706)
0x705: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x707: PushEmpty(object, object)
0x708: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x709: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x70a: Call 0x1437

0x70b: Pop(2)
0x70c: Push((int) 8709)
0x70d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70f: PushEmpty(object, object)
0x710: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x711: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x712: Call 0x1437

0x713: Pop(2)
0x714: Push((int) 8717)
0x715: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x717: PushEmpty(object, object)
0x718: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x719: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x71a: Call 0x143d

0x71b: Pop(2)
0x71c: Push((int) 8731)
0x71d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x71f: PushEmpty(object, object)
0x720: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x721: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x722: Call 0x1443

0x723: Pop(2)
0x724: Push((int) 8732)
0x725: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x727: PushEmpty(object, object)
0x728: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x729: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x72a: Call 0x1443

0x72b: Pop(2)
0x72c: Push((int) 8745)
0x72d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72f: PushEmpty(object, object)
0x730: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x731: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x732: Call 0x1449

0x733: Pop(2)
0x734: Push((int) 5922)
0x735: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x737: PushEmpty(bool)
0x738: Stack[-1] = (bool) 0
0x739: PushEmpty(bool)
0x73a: Stack[-1] = (bool) 0
0x73b: PushEmpty(bool)
0x73c: Stack[-1] = (bool) 0
0x73d: PushEmpty(bool)
0x73e: Stack[-1] = (bool) 0
0x73f: PushEmpty(bool, object)
0x740: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x741: Call 0x159d

0x742: Pop(1)
0x743: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x744: PushEmpty(bool, object)
0x745: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x746: Call 0x15cd

0x747: Pop(1)
0x748: Pop(1); Push((bool) Stack[-1] == 0)
0x749: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x74a: Stack[-1] = (bool) 1
0x74b: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x74c: PushEmpty(bool, object)
0x74d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74e: Call 0x15c1

0x74f: Pop(1)
0x750: Pop(1); Push((bool) Stack[-1] == 0)
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Stack[-1] = (bool) 1
0x753: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x754: PushEmpty(bool, object)
0x755: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x756: Call 0x165d

0x757: Pop(1)
0x758: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x759: Stack[-1] = (bool) 1
0x75a: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x75b: PushEmpty(bool, object)
0x75c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75d: Call 0x1669

0x75e: Pop(1)
0x75f: Pop(1); Push((bool) Stack[-1] == 0)
0x760: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x761: Stack[-1] = (bool) 1
0x762: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x763: PushEmpty(object, object)
0x764: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x765: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x766: Call 0x1464

0x767: Pop(2)
0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral"
0x76a: Call 0x691

0x76b: Pop(1)
0x76c: Push((int) 5377)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: PushEmpty(bool, object)
0x772: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x773: Call 0x1675

0x774: Pop(1)
0x775: Pop(1); Push((bool) Stack[-1] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x777: Push((int) 5379)
0x778: Push((int) 5964)
0x779: Push((int) 5924)
0x77a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77b: Pop(3)
0x77c: PushEmpty(bool, object)
0x77d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77e: Call 0x1675

0x77f: Pop(1)
0x780: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x781: Push((int) 5380)
0x782: Push((int) 6864)
0x783: Push((int) 5925)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: Return(); Pop(0)

0x787: PushEmpty(bool)
0x788: Stack[-1] = (bool) 0
0x789: PushEmpty(bool)
0x78a: Stack[-1] = (bool) 0
0x78b: PushEmpty(bool)
0x78c: Stack[-1] = (bool) 0
0x78d: PushEmpty(bool, object)
0x78e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78f: Call 0x165d

0x790: Pop(1)
0x791: Pop(1); Push((bool) Stack[-1] == 0)
0x792: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x793: PushEmpty(bool, object)
0x794: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x795: Call 0x1669

0x796: Pop(1)
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Stack[-1] = (bool) 1
0x799: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79a: PushEmpty(bool, object)
0x79b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79c: Call 0x15cd

0x79d: Pop(1)
0x79e: Pop(1); Push((bool) Stack[-1] == 0)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Stack[-1] = (bool) 1
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a4: Call 0x15c1

0x7a5: Pop(1)
0x7a6: Pop(1); Push((bool) Stack[-1] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (bool) 1
0x7a9: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7aa: PushEmpty(string)
0x7ab: Stack[-1] = "Neutral"
0x7ac: Call 0x691

0x7ad: Pop(1)
0x7ae: Push((int) 8650)
0x7af: @@ SetMessage(Stack[-1])
0x7b0: Pop(1)
0x7b1: @@ ClearReplies()
0x7b2: Pop(0)
0x7b3: Push((int) 8651)
0x7b4: Push((int) 9477)
0x7b5: Push((int) 9476)
0x7b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b7: Pop(3)
0x7b8: Return(); Pop(0)

0x7b9: PushEmpty(string)
0x7ba: Stack[-1] = "Neutral"
0x7bb: Call 0x691

0x7bc: Pop(1)
0x7bd: Push((int) 7779)
0x7be: @@ SetMessage(Stack[-1])
0x7bf: Pop(1)
0x7c0: @@ ClearReplies()
0x7c1: Pop(0)
0x7c2: PushEmpty(bool)
0x7c3: Stack[-1] = (bool) 0
0x7c4: PushEmpty(bool, object)
0x7c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c6: Call 0x15a9

0x7c7: Pop(1)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c9: PushEmpty(bool, object)
0x7ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cb: Call 0x15d9

0x7cc: Pop(1)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ce: Stack[-1] = (bool) 1
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d0: Push((int) 7815)
0x7d1: Push((int) 8618)
0x7d2: Push((int) 8617)
0x7d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d4: Pop(3)
0x7d5: PushEmpty(bool)
0x7d6: Stack[-1] = (bool) 0
0x7d7: PushEmpty(bool, object)
0x7d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d9: Call 0x1768

0x7da: Pop(1)
0x7db: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7dc: PushEmpty(bool, object)
0x7dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7de: Call 0x15b5

0x7df: Pop(1)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Stack[-1] = (bool) 1
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e3: Push((int) 7783)
0x7e4: Push((int) 8607)
0x7e5: Push((int) 8584)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: PushEmpty(bool)
0x7e9: Stack[-1] = (bool) 0
0x7ea: PushEmpty(bool)
0x7eb: Stack[-1] = (bool) 0
0x7ec: PushEmpty(bool, object)
0x7ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ee: Call 0x1774

0x7ef: Pop(1)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f1: PushEmpty(bool, object)
0x7f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f3: Call 0x1681

0x7f4: Pop(1)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f6: Stack[-1] = (bool) 1
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f8: PushEmpty(bool, object)
0x7f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fa: Call 0x1609

0x7fb: Pop(1)
0x7fc: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fd: Stack[-1] = (bool) 1
0x7fe: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7ff: Push((int) 7784)
0x800: Push((int) 8608)
0x801: Push((int) 8585)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: PushEmpty(bool)
0x805: Stack[-1] = (bool) 0
0x806: PushEmpty(bool, object)
0x807: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x808: Call 0x1615

0x809: Pop(1)
0x80a: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80b: PushEmpty(bool, object)
0x80c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80d: Call 0x1744

0x80e: Pop(1)
0x80f: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x810: Stack[-1] = (bool) 1
0x811: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x812: Push((int) 7785)
0x813: Push((int) 8687)
0x814: Push((int) 8586)
0x815: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(3)
0x817: PushEmpty(bool)
0x818: Stack[-1] = (bool) 0
0x819: PushEmpty(bool, object)
0x81a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81b: Call 0x1750

0x81c: Pop(1)
0x81d: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x81e: PushEmpty(bool, object)
0x81f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x820: Call 0x1621

0x821: Pop(1)
0x822: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x823: Stack[-1] = (bool) 1
0x824: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x825: Push((int) 7786)
0x826: Push((int) 8698)
0x827: Push((int) 8587)
0x828: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(3)
0x82a: PushEmpty(bool)
0x82b: Stack[-1] = (bool) 0
0x82c: PushEmpty(bool, object)
0x82d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82e: Call 0x1738

0x82f: Pop(1)
0x830: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x831: PushEmpty(bool, object)
0x832: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x833: Call 0x162d

0x834: Pop(1)
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: Stack[-1] = (bool) 1
0x837: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x838: Push((int) 7788)
0x839: Push((int) 8710)
0x83a: Push((int) 8589)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: PushEmpty(bool)
0x83e: Stack[-1] = (bool) 0
0x83f: PushEmpty(bool, object)
0x840: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x841: Call 0x16d3

0x842: Pop(1)
0x843: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x844: PushEmpty(bool, object)
0x845: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x846: Call 0x1639

0x847: Pop(1)
0x848: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x849: Stack[-1] = (bool) 1
0x84a: IF (Stack[-1] == 0) GOTO 0x850; Pop(1)

0x84b: Push((int) 7797)
0x84c: Push((int) 8613)
0x84d: Push((int) 8598)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: PushEmpty(bool)
0x851: Stack[-1] = (bool) 0
0x852: PushEmpty(bool, object)
0x853: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x854: Call 0x1651

0x855: Pop(1)
0x856: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x857: PushEmpty(bool, object)
0x858: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x859: Call 0x1645

0x85a: Pop(1)
0x85b: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85c: Stack[-1] = (bool) 1
0x85d: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x85e: Push((int) 7914)
0x85f: Push((int) 8734)
0x860: Push((int) 8733)
0x861: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x862: Pop(3)
0x863: Push((int) 8703)
0x864: Push((int) -1)
0x865: Push((int) 9540)
0x866: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x867: Pop(3)
0x868: Return(); Pop(0)

0x869: Push((int) 8734)
0x86a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x86c: PushEmpty(string)
0x86d: Stack[-1] = "Neutral"
0x86e: Call 0x691

0x86f: Pop(1)
0x870: Push((int) 7915)
0x871: @@ SetMessage(Stack[-1])
0x872: Pop(1)
0x873: @@ ClearReplies()
0x874: Pop(0)
0x875: Push((int) 7916)
0x876: Push((int) 8737)
0x877: Push((int) 8735)
0x878: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x879: Pop(3)
0x87a: Push((int) 7917)
0x87b: Push((int) 8737)
0x87c: Push((int) 8736)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Return(); Pop(0)

0x880: Push((int) 8737)
0x881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x883: PushEmpty(string)
0x884: Stack[-1] = "Neutral"
0x885: Call 0x691

0x886: Pop(1)
0x887: Push((int) 7918)
0x888: @@ SetMessage(Stack[-1])
0x889: Pop(1)
0x88a: @@ ClearReplies()
0x88b: Pop(0)
0x88c: Push((int) 7919)
0x88d: Push((int) 8739)
0x88e: Push((int) 8738)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Return(); Pop(0)

0x892: Push((int) 8739)
0x893: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x895: PushEmpty(string)
0x896: Stack[-1] = "Neutral"
0x897: Call 0x691

0x898: Pop(1)
0x899: Push((int) 7920)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 7921)
0x89f: Push((int) 8742)
0x8a0: Push((int) 8740)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Return(); Pop(0)

0x8a4: Push((int) 8742)
0x8a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8a7: PushEmpty(string)
0x8a8: Stack[-1] = "Neutral"
0x8a9: Call 0x691

0x8aa: Pop(1)
0x8ab: Push((int) 7922)
0x8ac: @@ SetMessage(Stack[-1])
0x8ad: Pop(1)
0x8ae: @@ ClearReplies()
0x8af: Pop(0)
0x8b0: Push((int) 7923)
0x8b1: Push((int) 8744)
0x8b2: Push((int) 8743)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Return(); Pop(0)

0x8b6: Push((int) 8744)
0x8b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8b9: PushEmpty(string)
0x8ba: Stack[-1] = "Neutral"
0x8bb: Call 0x691

0x8bc: Pop(1)
0x8bd: Push((int) 7924)
0x8be: @@ SetMessage(Stack[-1])
0x8bf: Pop(1)
0x8c0: @@ ClearReplies()
0x8c1: Pop(0)
0x8c2: Push((int) 7925)
0x8c3: Push((int) -1)
0x8c4: Push((int) 8745)
0x8c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c6: Pop(3)
0x8c7: Return(); Pop(0)

0x8c8: Push((int) 8613)
0x8c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8cb: PushEmpty(string)
0x8cc: Stack[-1] = "Neutral"
0x8cd: Call 0x691

0x8ce: Pop(1)
0x8cf: Push((int) 7812)
0x8d0: @@ SetMessage(Stack[-1])
0x8d1: Pop(1)
0x8d2: @@ ClearReplies()
0x8d3: Pop(0)
0x8d4: Push((int) 7906)
0x8d5: Push((int) 8726)
0x8d6: Push((int) 8725)
0x8d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(3)
0x8d9: Return(); Pop(0)

0x8da: Push((int) 8726)
0x8db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8dd: PushEmpty(string)
0x8de: Stack[-1] = "Neutral"
0x8df: Call 0x691

0x8e0: Pop(1)
0x8e1: Push((int) 7907)
0x8e2: @@ SetMessage(Stack[-1])
0x8e3: Pop(1)
0x8e4: @@ ClearReplies()
0x8e5: Pop(0)
0x8e6: Push((int) 7909)
0x8e7: Push((int) 8730)
0x8e8: Push((int) 8728)
0x8e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ea: Pop(3)
0x8eb: Return(); Pop(0)

0x8ec: Push((int) 8730)
0x8ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ee: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x8ef: PushEmpty(string)
0x8f0: Stack[-1] = "Neutral"
0x8f1: Call 0x691

0x8f2: Pop(1)
0x8f3: Push((int) 7911)
0x8f4: @@ SetMessage(Stack[-1])
0x8f5: Pop(1)
0x8f6: @@ ClearReplies()
0x8f7: Pop(0)
0x8f8: Push((int) 7912)
0x8f9: Push((int) -1)
0x8fa: Push((int) 8731)
0x8fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fc: Pop(3)
0x8fd: Push((int) 7913)
0x8fe: Push((int) -1)
0x8ff: Push((int) 8732)
0x900: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x901: Pop(3)
0x902: Return(); Pop(0)

0x903: Push((int) 8710)
0x904: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x905: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x906: PushEmpty(string)
0x907: Stack[-1] = "Neutral"
0x908: Call 0x691

0x909: Pop(1)
0x90a: Push((int) 7892)
0x90b: @@ SetMessage(Stack[-1])
0x90c: Pop(1)
0x90d: @@ ClearReplies()
0x90e: Pop(0)
0x90f: Push((int) 7893)
0x910: Push((int) 8712)
0x911: Push((int) 8711)
0x912: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x913: Pop(3)
0x914: Return(); Pop(0)

0x915: Push((int) 8712)
0x916: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x917: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x918: PushEmpty(string)
0x919: Stack[-1] = "Neutral"
0x91a: Call 0x691

0x91b: Pop(1)
0x91c: Push((int) 7894)
0x91d: @@ SetMessage(Stack[-1])
0x91e: Pop(1)
0x91f: @@ ClearReplies()
0x920: Pop(0)
0x921: PushEmpty(bool, object)
0x922: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x923: Call 0x15e5

0x924: Pop(1)
0x925: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x926: Push((int) 7895)
0x927: Push((int) 8714)
0x928: Push((int) 8713)
0x929: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: PushEmpty(bool, object)
0x92c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92d: Call 0x15e5

0x92e: Pop(1)
0x92f: Pop(1); Push((bool) Stack[-1] == 0)
0x930: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x931: Push((int) 7897)
0x932: Push((int) 8716)
0x933: Push((int) 8715)
0x934: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x935: Pop(3)
0x936: Return(); Pop(0)

0x937: Push((int) 8716)
0x938: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x939: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x93a: PushEmpty(string)
0x93b: Stack[-1] = "Neutral"
0x93c: Call 0x691

0x93d: Pop(1)
0x93e: Push((int) 7898)
0x93f: @@ SetMessage(Stack[-1])
0x940: Pop(1)
0x941: @@ ClearReplies()
0x942: Pop(0)
0x943: Push((int) 7900)
0x944: Push((int) 8714)
0x945: Push((int) 8718)
0x946: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(3)
0x948: Return(); Pop(0)

0x949: Push((int) 8714)
0x94a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94b: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x94c: PushEmpty(string)
0x94d: Stack[-1] = "Neutral"
0x94e: Call 0x691

0x94f: Pop(1)
0x950: Push((int) 7896)
0x951: @@ SetMessage(Stack[-1])
0x952: Pop(1)
0x953: @@ ClearReplies()
0x954: Pop(0)
0x955: Push((int) 7899)
0x956: Push((int) -1)
0x957: Push((int) 8717)
0x958: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x959: Pop(3)
0x95a: Return(); Pop(0)

0x95b: Push((int) 8698)
0x95c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95d: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x95e: PushEmpty(string)
0x95f: Stack[-1] = "Neutral"
0x960: Call 0x691

0x961: Pop(1)
0x962: Push((int) 7881)
0x963: @@ SetMessage(Stack[-1])
0x964: Pop(1)
0x965: @@ ClearReplies()
0x966: Pop(0)
0x967: Push((int) 7882)
0x968: Push((int) 8610)
0x969: Push((int) 8699)
0x96a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96b: Pop(3)
0x96c: Return(); Pop(0)

0x96d: Push((int) 8610)
0x96e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96f: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x970: PushEmpty(string)
0x971: Stack[-1] = "Neutral"
0x972: Call 0x691

0x973: Pop(1)
0x974: Push((int) 7809)
0x975: @@ SetMessage(Stack[-1])
0x976: Pop(1)
0x977: @@ ClearReplies()
0x978: Pop(0)
0x979: Push((int) 7883)
0x97a: Push((int) 8701)
0x97b: Push((int) 8700)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: Push((int) 7885)
0x97f: Push((int) 8703)
0x980: Push((int) 8702)
0x981: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x982: Pop(3)
0x983: Return(); Pop(0)

0x984: Push((int) 8703)
0x985: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x986: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x987: PushEmpty(string)
0x988: Stack[-1] = "Neutral"
0x989: Call 0x691

0x98a: Pop(1)
0x98b: Push((int) 7886)
0x98c: @@ SetMessage(Stack[-1])
0x98d: Pop(1)
0x98e: @@ ClearReplies()
0x98f: Pop(0)
0x990: Push((int) 7887)
0x991: Push((int) 8701)
0x992: Push((int) 8704)
0x993: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x994: Pop(3)
0x995: Return(); Pop(0)

0x996: Push((int) 8701)
0x997: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x998: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x999: PushEmpty(string)
0x99a: Stack[-1] = "Neutral"
0x99b: Call 0x691

0x99c: Pop(1)
0x99d: Push((int) 7884)
0x99e: @@ SetMessage(Stack[-1])
0x99f: Pop(1)
0x9a0: @@ ClearReplies()
0x9a1: Pop(0)
0x9a2: Push((int) 7888)
0x9a3: Push((int) -1)
0x9a4: Push((int) 8706)
0x9a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a6: Pop(3)
0x9a7: Push((int) 7889)
0x9a8: Push((int) 8708)
0x9a9: Push((int) 8707)
0x9aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ab: Pop(3)
0x9ac: Return(); Pop(0)

0x9ad: Push((int) 8708)
0x9ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9b0: PushEmpty(string)
0x9b1: Stack[-1] = "Neutral"
0x9b2: Call 0x691

0x9b3: Pop(1)
0x9b4: Push((int) 7890)
0x9b5: @@ SetMessage(Stack[-1])
0x9b6: Pop(1)
0x9b7: @@ ClearReplies()
0x9b8: Pop(0)
0x9b9: Push((int) 7891)
0x9ba: Push((int) -1)
0x9bb: Push((int) 8709)
0x9bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bd: Pop(3)
0x9be: Return(); Pop(0)

0x9bf: Push((int) 8687)
0x9c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9c2: PushEmpty(string)
0x9c3: Stack[-1] = "Neutral"
0x9c4: Call 0x691

0x9c5: Pop(1)
0x9c6: Push((int) 7872)
0x9c7: @@ SetMessage(Stack[-1])
0x9c8: Pop(1)
0x9c9: @@ ClearReplies()
0x9ca: Pop(0)
0x9cb: Push((int) 7873)
0x9cc: Push((int) 8609)
0x9cd: Push((int) 8688)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Push((int) 7874)
0x9d1: Push((int) 8609)
0x9d2: Push((int) 8689)
0x9d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d4: Pop(3)
0x9d5: Return(); Pop(0)

0x9d6: Push((int) 8609)
0x9d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9d9: PushEmpty(string)
0x9da: Stack[-1] = "Neutral"
0x9db: Call 0x691

0x9dc: Pop(1)
0x9dd: Push((int) 7808)
0x9de: @@ SetMessage(Stack[-1])
0x9df: Pop(1)
0x9e0: @@ ClearReplies()
0x9e1: Pop(0)
0x9e2: Push((int) 7875)
0x9e3: Push((int) 8692)
0x9e4: Push((int) 8691)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Push((int) 7877)
0x9e8: Push((int) 8694)
0x9e9: Push((int) 8693)
0x9ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9eb: Pop(3)
0x9ec: Return(); Pop(0)

0x9ed: Push((int) 8694)
0x9ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9f0: PushEmpty(string)
0x9f1: Stack[-1] = "Neutral"
0x9f2: Call 0x691

0x9f3: Pop(1)
0x9f4: Push((int) 7878)
0x9f5: @@ SetMessage(Stack[-1])
0x9f6: Pop(1)
0x9f7: @@ ClearReplies()
0x9f8: Pop(0)
0x9f9: Push((int) 7879)
0x9fa: Push((int) 8692)
0x9fb: Push((int) 8695)
0x9fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(3)
0x9fe: Return(); Pop(0)

0x9ff: Push((int) 8692)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa02: PushEmpty(string)
0xa03: Stack[-1] = "Neutral"
0xa04: Call 0x691

0xa05: Pop(1)
0xa06: Push((int) 7876)
0xa07: @@ SetMessage(Stack[-1])
0xa08: Pop(1)
0xa09: @@ ClearReplies()
0xa0a: Pop(0)
0xa0b: Push((int) 7880)
0xa0c: Push((int) -1)
0xa0d: Push((int) 8697)
0xa0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0f: Pop(3)
0xa10: Return(); Pop(0)

0xa11: Push((int) 8608)
0xa12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa13: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa14: PushEmpty(string)
0xa15: Stack[-1] = "Neutral"
0xa16: Call 0x691

0xa17: Pop(1)
0xa18: Push((int) 7807)
0xa19: @@ SetMessage(Stack[-1])
0xa1a: Pop(1)
0xa1b: @@ ClearReplies()
0xa1c: Pop(0)
0xa1d: Push((int) 7856)
0xa1e: Push((int) 8668)
0xa1f: Push((int) 8667)
0xa20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa21: Pop(3)
0xa22: Push((int) 7866)
0xa23: Push((int) 8668)
0xa24: Push((int) 8677)
0xa25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa26: Pop(3)
0xa27: Return(); Pop(0)

0xa28: Push((int) 8668)
0xa29: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2a: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa2b: PushEmpty(string)
0xa2c: Stack[-1] = "Neutral"
0xa2d: Call 0x691

0xa2e: Pop(1)
0xa2f: Push((int) 7857)
0xa30: @@ SetMessage(Stack[-1])
0xa31: Pop(1)
0xa32: @@ ClearReplies()
0xa33: Pop(0)
0xa34: Push((int) 7858)
0xa35: Push((int) 8670)
0xa36: Push((int) 8669)
0xa37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa38: Pop(3)
0xa39: Push((int) 7867)
0xa3a: Push((int) 8670)
0xa3b: Push((int) 8679)
0xa3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3d: Pop(3)
0xa3e: Return(); Pop(0)

0xa3f: Push((int) 8670)
0xa40: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa41: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa42: PushEmpty(string)
0xa43: Stack[-1] = "Neutral"
0xa44: Call 0x691

0xa45: Pop(1)
0xa46: Push((int) 7859)
0xa47: @@ SetMessage(Stack[-1])
0xa48: Pop(1)
0xa49: @@ ClearReplies()
0xa4a: Pop(0)
0xa4b: Push((int) 7860)
0xa4c: Push((int) 8672)
0xa4d: Push((int) 8671)
0xa4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4f: Pop(3)
0xa50: PushEmpty(bool, object)
0xa51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa52: Call 0x16c7

0xa53: Pop(1)
0xa54: Pop(1); Push((bool) Stack[-1] == 0)
0xa55: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa56: Push((int) 7868)
0xa57: Push((int) 8682)
0xa58: Push((int) 8681)
0xa59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5a: Pop(3)
0xa5b: Return(); Pop(0)

0xa5c: Push((int) 8682)
0xa5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa5f: PushEmpty(object, object)
0xa60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa62: Call 0x14c0

0xa63: Pop(2)
0xa64: PushEmpty(string)
0xa65: Stack[-1] = "Neutral"
0xa66: Call 0x691

0xa67: Pop(1)
0xa68: Push((int) 7869)
0xa69: @@ SetMessage(Stack[-1])
0xa6a: Pop(1)
0xa6b: @@ ClearReplies()
0xa6c: Pop(0)
0xa6d: Push((int) 7870)
0xa6e: Push((int) 8672)
0xa6f: Push((int) 8683)
0xa70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa71: Pop(3)
0xa72: Return(); Pop(0)

0xa73: Push((int) 8672)
0xa74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa76: PushEmpty(string)
0xa77: Stack[-1] = "Neutral"
0xa78: Call 0x691

0xa79: Pop(1)
0xa7a: Push((int) 7861)
0xa7b: @@ SetMessage(Stack[-1])
0xa7c: Pop(1)
0xa7d: @@ ClearReplies()
0xa7e: Pop(0)
0xa7f: Push((int) 7862)
0xa80: Push((int) 8674)
0xa81: Push((int) 8673)
0xa82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(3)
0xa84: Push((int) 7871)
0xa85: Push((int) 8674)
0xa86: Push((int) 8685)
0xa87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa88: Pop(3)
0xa89: Return(); Pop(0)

0xa8a: Push((int) 8674)
0xa8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8c: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa8d: PushEmpty(string)
0xa8e: Stack[-1] = "Neutral"
0xa8f: Call 0x691

0xa90: Pop(1)
0xa91: Push((int) 7863)
0xa92: @@ SetMessage(Stack[-1])
0xa93: Pop(1)
0xa94: @@ ClearReplies()
0xa95: Pop(0)
0xa96: Push((int) 7864)
0xa97: Push((int) -1)
0xa98: Push((int) 8675)
0xa99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9a: Pop(3)
0xa9b: Push((int) 7865)
0xa9c: Push((int) -1)
0xa9d: Push((int) 8676)
0xa9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9f: Pop(3)
0xaa0: Return(); Pop(0)

0xaa1: Push((int) 8607)
0xaa2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa3: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xaa4: PushEmpty(string)
0xaa5: Stack[-1] = "Neutral"
0xaa6: Call 0x691

0xaa7: Pop(1)
0xaa8: Push((int) 7806)
0xaa9: @@ SetMessage(Stack[-1])
0xaaa: Pop(1)
0xaab: @@ ClearReplies()
0xaac: Pop(0)
0xaad: Push((int) 7843)
0xaae: Push((int) 8657)
0xaaf: Push((int) 8651)
0xab0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab1: Pop(3)
0xab2: Push((int) 7855)
0xab3: Push((int) 8652)
0xab4: Push((int) 8665)
0xab5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab6: Pop(3)
0xab7: Return(); Pop(0)

0xab8: Push((int) 8657)
0xab9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xabb: PushEmpty(string)
0xabc: Stack[-1] = "Neutral"
0xabd: Call 0x691

0xabe: Pop(1)
0xabf: Push((int) 7848)
0xac0: @@ SetMessage(Stack[-1])
0xac1: Pop(1)
0xac2: @@ ClearReplies()
0xac3: Pop(0)
0xac4: Push((int) 7849)
0xac5: Push((int) 8659)
0xac6: Push((int) 8658)
0xac7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(3)
0xac9: Push((int) 7854)
0xaca: Push((int) 8659)
0xacb: Push((int) 8663)
0xacc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacd: Pop(3)
0xace: Return(); Pop(0)

0xacf: Push((int) 8659)
0xad0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad1: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xad2: PushEmpty(string)
0xad3: Stack[-1] = "Neutral"
0xad4: Call 0x691

0xad5: Pop(1)
0xad6: Push((int) 7850)
0xad7: @@ SetMessage(Stack[-1])
0xad8: Pop(1)
0xad9: @@ ClearReplies()
0xada: Pop(0)
0xadb: Push((int) 7851)
0xadc: Push((int) 8652)
0xadd: Push((int) 8660)
0xade: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadf: Pop(3)
0xae0: Return(); Pop(0)

0xae1: Push((int) 8652)
0xae2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae3: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xae4: PushEmpty(string)
0xae5: Stack[-1] = "Neutral"
0xae6: Call 0x691

0xae7: Pop(1)
0xae8: Push((int) 7844)
0xae9: @@ SetMessage(Stack[-1])
0xaea: Pop(1)
0xaeb: @@ ClearReplies()
0xaec: Pop(0)
0xaed: Push((int) 7852)
0xaee: Push((int) -1)
0xaef: Push((int) 8661)
0xaf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf1: Pop(3)
0xaf2: Push((int) 7853)
0xaf3: Push((int) -1)
0xaf4: Push((int) 8662)
0xaf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf6: Pop(3)
0xaf7: Return(); Pop(0)

0xaf8: Push((int) 8618)
0xaf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xafb: PushEmpty(string)
0xafc: Stack[-1] = "Neutral"
0xafd: Call 0x691

0xafe: Pop(1)
0xaff: Push((int) 7816)
0xb00: @@ SetMessage(Stack[-1])
0xb01: Pop(1)
0xb02: @@ ClearReplies()
0xb03: Pop(0)
0xb04: Push((int) 7817)
0xb05: Push((int) 8620)
0xb06: Push((int) 8619)
0xb07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb08: Pop(3)
0xb09: Push((int) 7845)
0xb0a: Push((int) 8654)
0xb0b: Push((int) 8653)
0xb0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0d: Pop(3)
0xb0e: Return(); Pop(0)

0xb0f: Push((int) 8654)
0xb10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb11: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb12: PushEmpty(string)
0xb13: Stack[-1] = "Neutral"
0xb14: Call 0x691

0xb15: Pop(1)
0xb16: Push((int) 7846)
0xb17: @@ SetMessage(Stack[-1])
0xb18: Pop(1)
0xb19: @@ ClearReplies()
0xb1a: Pop(0)
0xb1b: Push((int) 7847)
0xb1c: Push((int) 8620)
0xb1d: Push((int) 8655)
0xb1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1f: Pop(3)
0xb20: Return(); Pop(0)

0xb21: Push((int) 8620)
0xb22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb23: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb24: PushEmpty(string)
0xb25: Stack[-1] = "Neutral"
0xb26: Call 0x691

0xb27: Pop(1)
0xb28: Push((int) 7818)
0xb29: @@ SetMessage(Stack[-1])
0xb2a: Pop(1)
0xb2b: @@ ClearReplies()
0xb2c: Pop(0)
0xb2d: Push((int) 7821)
0xb2e: Push((int) 8625)
0xb2f: Push((int) 8623)
0xb30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb31: Pop(3)
0xb32: Push((int) 7819)
0xb33: Push((int) 8622)
0xb34: Push((int) 8621)
0xb35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb36: Pop(3)
0xb37: Return(); Pop(0)

0xb38: Push((int) 8622)
0xb39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3a: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb3b: PushEmpty(string)
0xb3c: Stack[-1] = "Neutral"
0xb3d: Call 0x691

0xb3e: Pop(1)
0xb3f: Push((int) 7820)
0xb40: @@ SetMessage(Stack[-1])
0xb41: Pop(1)
0xb42: @@ ClearReplies()
0xb43: Pop(0)
0xb44: Push((int) 7822)
0xb45: Push((int) 8625)
0xb46: Push((int) 8624)
0xb47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb48: Pop(3)
0xb49: Return(); Pop(0)

0xb4a: Push((int) 8625)
0xb4b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4c: IF (Stack[-1] == 0) GOTO 0xb61; Pop(1)

0xb4d: PushEmpty(string)
0xb4e: Stack[-1] = "Neutral"
0xb4f: Call 0x691

0xb50: Pop(1)
0xb51: Push((int) 7823)
0xb52: @@ SetMessage(Stack[-1])
0xb53: Pop(1)
0xb54: @@ ClearReplies()
0xb55: Pop(0)
0xb56: Push((int) 7824)
0xb57: Push((int) 8627)
0xb58: Push((int) 8626)
0xb59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: Push((int) 7842)
0xb5c: Push((int) 8630)
0xb5d: Push((int) 8649)
0xb5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5f: Pop(3)
0xb60: Return(); Pop(0)

0xb61: Push((int) 8627)
0xb62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb63: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb64: PushEmpty(string)
0xb65: Stack[-1] = "Neutral"
0xb66: Call 0x691

0xb67: Pop(1)
0xb68: Push((int) 7825)
0xb69: @@ SetMessage(Stack[-1])
0xb6a: Pop(1)
0xb6b: @@ ClearReplies()
0xb6c: Pop(0)
0xb6d: Push((int) 7826)
0xb6e: Push((int) 8630)
0xb6f: Push((int) 8628)
0xb70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb71: Pop(3)
0xb72: Push((int) 7834)
0xb73: Push((int) 8639)
0xb74: Push((int) 8638)
0xb75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb76: Pop(3)
0xb77: Return(); Pop(0)

0xb78: Push((int) 8639)
0xb79: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7a: IF (Stack[-1] == 0) GOTO 0xb8f; Pop(1)

0xb7b: PushEmpty(string)
0xb7c: Stack[-1] = "Neutral"
0xb7d: Call 0x691

0xb7e: Pop(1)
0xb7f: Push((int) 7835)
0xb80: @@ SetMessage(Stack[-1])
0xb81: Pop(1)
0xb82: @@ ClearReplies()
0xb83: Pop(0)
0xb84: Push((int) 7836)
0xb85: Push((int) 8641)
0xb86: Push((int) 8640)
0xb87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb88: Pop(3)
0xb89: Push((int) 7841)
0xb8a: Push((int) 8641)
0xb8b: Push((int) 8645)
0xb8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8d: Pop(3)
0xb8e: Return(); Pop(0)

0xb8f: Push((int) 8641)
0xb90: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb91: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xb92: PushEmpty(string)
0xb93: Stack[-1] = "Neutral"
0xb94: Call 0x691

0xb95: Pop(1)
0xb96: Push((int) 7837)
0xb97: @@ SetMessage(Stack[-1])
0xb98: Pop(1)
0xb99: @@ ClearReplies()
0xb9a: Pop(0)
0xb9b: Push((int) 7839)
0xb9c: Push((int) 8630)
0xb9d: Push((int) 8643)
0xb9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9f: Pop(3)
0xba0: Push((int) 7840)
0xba1: Push((int) 8630)
0xba2: Push((int) 8644)
0xba3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba4: Pop(3)
0xba5: Return(); Pop(0)

0xba6: Push((int) 8630)
0xba7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba8: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xba9: PushEmpty(string)
0xbaa: Stack[-1] = "Neutral"
0xbab: Call 0x691

0xbac: Pop(1)
0xbad: Push((int) 7827)
0xbae: @@ SetMessage(Stack[-1])
0xbaf: Pop(1)
0xbb0: @@ ClearReplies()
0xbb1: Pop(0)
0xbb2: Push((int) 7828)
0xbb3: Push((int) 8632)
0xbb4: Push((int) 8631)
0xbb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb6: Pop(3)
0xbb7: Push((int) 7833)
0xbb8: Push((int) 8632)
0xbb9: Push((int) 8636)
0xbba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbb: Pop(3)
0xbbc: Return(); Pop(0)

0xbbd: Push((int) 8632)
0xbbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbf: IF (Stack[-1] == 0) GOTO 0xbcf; Pop(1)

0xbc0: PushEmpty(string)
0xbc1: Stack[-1] = "Neutral"
0xbc2: Call 0x691

0xbc3: Pop(1)
0xbc4: Push((int) 7829)
0xbc5: @@ SetMessage(Stack[-1])
0xbc6: Pop(1)
0xbc7: @@ ClearReplies()
0xbc8: Pop(0)
0xbc9: Push((int) 7830)
0xbca: Push((int) 8634)
0xbcb: Push((int) 8633)
0xbcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcd: Pop(3)
0xbce: Return(); Pop(0)

0xbcf: Push((int) 8634)
0xbd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd1: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbd2: PushEmpty(string)
0xbd3: Stack[-1] = "Neutral"
0xbd4: Call 0x691

0xbd5: Pop(1)
0xbd6: Push((int) 7831)
0xbd7: @@ SetMessage(Stack[-1])
0xbd8: Pop(1)
0xbd9: @@ ClearReplies()
0xbda: Pop(0)
0xbdb: Push((int) 7832)
0xbdc: Push((int) -1)
0xbdd: Push((int) 8635)
0xbde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(3)
0xbe0: Return(); Pop(0)

0xbe1: Push((int) 9477)
0xbe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe3: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbe4: PushEmpty(string)
0xbe5: Stack[-1] = "Neutral"
0xbe6: Call 0x691

0xbe7: Pop(1)
0xbe8: Push((int) 8652)
0xbe9: @@ SetMessage(Stack[-1])
0xbea: Pop(1)
0xbeb: @@ ClearReplies()
0xbec: Pop(0)
0xbed: Push((int) 8653)
0xbee: Push((int) 9479)
0xbef: Push((int) 9478)
0xbf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(3)
0xbf2: Return(); Pop(0)

0xbf3: Push((int) 9479)
0xbf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xbf6: PushEmpty(string)
0xbf7: Stack[-1] = "Neutral"
0xbf8: Call 0x691

0xbf9: Pop(1)
0xbfa: Push((int) 8654)
0xbfb: @@ SetMessage(Stack[-1])
0xbfc: Pop(1)
0xbfd: @@ ClearReplies()
0xbfe: Pop(0)
0xbff: Push((int) 8655)
0xc00: Push((int) 9483)
0xc01: Push((int) 9480)
0xc02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc03: Pop(3)
0xc04: Push((int) 8656)
0xc05: Push((int) -1)
0xc06: Push((int) 9481)
0xc07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc08: Pop(3)
0xc09: Push((int) 8657)
0xc0a: Push((int) -1)
0xc0b: Push((int) 9482)
0xc0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0d: Pop(3)
0xc0e: Return(); Pop(0)

0xc0f: Push((int) 9483)
0xc10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc11: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc12: PushEmpty(string)
0xc13: Stack[-1] = "Neutral"
0xc14: Call 0x691

0xc15: Pop(1)
0xc16: Push((int) 8658)
0xc17: @@ SetMessage(Stack[-1])
0xc18: Pop(1)
0xc19: @@ ClearReplies()
0xc1a: Pop(0)
0xc1b: Push((int) 8659)
0xc1c: Push((int) 9485)
0xc1d: Push((int) 9484)
0xc1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1f: Pop(3)
0xc20: Return(); Pop(0)

0xc21: Push((int) 9485)
0xc22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc24: PushEmpty(string)
0xc25: Stack[-1] = "Neutral"
0xc26: Call 0x691

0xc27: Pop(1)
0xc28: Push((int) 8660)
0xc29: @@ SetMessage(Stack[-1])
0xc2a: Pop(1)
0xc2b: @@ ClearReplies()
0xc2c: Pop(0)
0xc2d: Push((int) 8661)
0xc2e: Push((int) 9487)
0xc2f: Push((int) 9486)
0xc30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc31: Pop(3)
0xc32: Return(); Pop(0)

0xc33: Push((int) 9487)
0xc34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc35: IF (Stack[-1] == 0) GOTO 0xc45; Pop(1)

0xc36: PushEmpty(string)
0xc37: Stack[-1] = "Neutral"
0xc38: Call 0x691

0xc39: Pop(1)
0xc3a: Push((int) 8662)
0xc3b: @@ SetMessage(Stack[-1])
0xc3c: Pop(1)
0xc3d: @@ ClearReplies()
0xc3e: Pop(0)
0xc3f: Push((int) 8663)
0xc40: Push((int) 9489)
0xc41: Push((int) 9488)
0xc42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc43: Pop(3)
0xc44: Return(); Pop(0)

0xc45: Push((int) 9489)
0xc46: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc47: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc48: PushEmpty(object, object)
0xc49: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4b: Call 0x1464

0xc4c: Pop(2)
0xc4d: PushEmpty(string)
0xc4e: Stack[-1] = "Neutral"
0xc4f: Call 0x691

0xc50: Pop(1)
0xc51: Push((int) 8664)
0xc52: @@ SetMessage(Stack[-1])
0xc53: Pop(1)
0xc54: @@ ClearReplies()
0xc55: Pop(0)
0xc56: Push((int) 8665)
0xc57: Push((int) -1)
0xc58: Push((int) 9490)
0xc59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5a: Pop(3)
0xc5b: Return(); Pop(0)

0xc5c: Push((int) 5964)
0xc5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5e: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc5f: PushEmpty(string)
0xc60: Stack[-1] = "Neutral"
0xc61: Call 0x691

0xc62: Pop(1)
0xc63: Push((int) 5415)
0xc64: @@ SetMessage(Stack[-1])
0xc65: Pop(1)
0xc66: @@ ClearReplies()
0xc67: Pop(0)
0xc68: Push((int) 6207)
0xc69: Push((int) 6862)
0xc6a: Push((int) 6861)
0xc6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6c: Pop(3)
0xc6d: Push((int) 5416)
0xc6e: Push((int) 5966)
0xc6f: Push((int) 5965)
0xc70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc71: Pop(3)
0xc72: Return(); Pop(0)

0xc73: Push((int) 6862)
0xc74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc75: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc76: PushEmpty(string)
0xc77: Stack[-1] = "Neutral"
0xc78: Call 0x691

0xc79: Pop(1)
0xc7a: Push((int) 6208)
0xc7b: @@ SetMessage(Stack[-1])
0xc7c: Pop(1)
0xc7d: @@ ClearReplies()
0xc7e: Pop(0)
0xc7f: Push((int) 6209)
0xc80: Push((int) 6864)
0xc81: Push((int) 6863)
0xc82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc83: Pop(3)
0xc84: Return(); Pop(0)

0xc85: Push((int) 6864)
0xc86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc87: IF (Stack[-1] == 0) GOTO 0xc9c; Pop(1)

0xc88: PushEmpty(object, object)
0xc89: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8b: Call 0x1425

0xc8c: Pop(2)
0xc8d: PushEmpty(string)
0xc8e: Stack[-1] = "Neutral"
0xc8f: Call 0x691

0xc90: Pop(1)
0xc91: Push((int) 6210)
0xc92: @@ SetMessage(Stack[-1])
0xc93: Pop(1)
0xc94: @@ ClearReplies()
0xc95: Pop(0)
0xc96: Push((int) 6211)
0xc97: Push((int) 6866)
0xc98: Push((int) 6865)
0xc99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9a: Pop(3)
0xc9b: Return(); Pop(0)

0xc9c: Push((int) 6866)
0xc9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9e: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xc9f: PushEmpty(string)
0xca0: Stack[-1] = "Neutral"
0xca1: Call 0x691

0xca2: Pop(1)
0xca3: Push((int) 6212)
0xca4: @@ SetMessage(Stack[-1])
0xca5: Pop(1)
0xca6: @@ ClearReplies()
0xca7: Pop(0)
0xca8: Push((int) 6214)
0xca9: Push((int) 5966)
0xcaa: Push((int) 6868)
0xcab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcac: Pop(3)
0xcad: Return(); Pop(0)

0xcae: Push((int) 5966)
0xcaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcca; Pop(1)

0xcb1: PushEmpty(string)
0xcb2: Stack[-1] = "Neutral"
0xcb3: Call 0x691

0xcb4: Pop(1)
0xcb5: Push((int) 5417)
0xcb6: @@ SetMessage(Stack[-1])
0xcb7: Pop(1)
0xcb8: @@ ClearReplies()
0xcb9: Pop(0)
0xcba: Push((int) 5419)
0xcbb: Push((int) 5969)
0xcbc: Push((int) 5968)
0xcbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbe: Pop(3)
0xcbf: Push((int) 6215)
0xcc0: Push((int) 6867)
0xcc1: Push((int) 6870)
0xcc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc3: Pop(3)
0xcc4: Push((int) 5418)
0xcc5: Push((int) 6874)
0xcc6: Push((int) 5967)
0xcc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc8: Pop(3)
0xcc9: Return(); Pop(0)

0xcca: Push((int) 6867)
0xccb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xccc: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xccd: PushEmpty(string)
0xcce: Stack[-1] = "Neutral"
0xccf: Call 0x691

0xcd0: Pop(1)
0xcd1: Push((int) 6213)
0xcd2: @@ SetMessage(Stack[-1])
0xcd3: Pop(1)
0xcd4: @@ ClearReplies()
0xcd5: Pop(0)
0xcd6: Push((int) 6216)
0xcd7: Push((int) 6874)
0xcd8: Push((int) 6872)
0xcd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcda: Pop(3)
0xcdb: Return(); Pop(0)

0xcdc: Push((int) 5969)
0xcdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xcdf: PushEmpty(string)
0xce0: Stack[-1] = "Neutral"
0xce1: Call 0x691

0xce2: Pop(1)
0xce3: Push((int) 5420)
0xce4: @@ SetMessage(Stack[-1])
0xce5: Pop(1)
0xce6: @@ ClearReplies()
0xce7: Pop(0)
0xce8: Push((int) 5421)
0xce9: Push((int) 6874)
0xcea: Push((int) 5970)
0xceb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcec: Pop(3)
0xced: Return(); Pop(0)

0xcee: Push((int) 6874)
0xcef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf0: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xcf1: PushEmpty(string)
0xcf2: Stack[-1] = "Neutral"
0xcf3: Call 0x691

0xcf4: Pop(1)
0xcf5: Push((int) 6217)
0xcf6: @@ SetMessage(Stack[-1])
0xcf7: Pop(1)
0xcf8: @@ ClearReplies()
0xcf9: Pop(0)
0xcfa: Push((int) 6218)
0xcfb: Push((int) -1)
0xcfc: Push((int) 6875)
0xcfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfe: Pop(3)
0xcff: Push((int) 6219)
0xd00: Push((int) -1)
0xd01: Push((int) 6876)
0xd02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd03: Pop(3)
0xd04: Return(); Pop(0)

0xd05: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd06: PushEmpty(bool)
0xd07: Call 0x13f4

0xd08: Pop(0)
0xd09: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd0a: @ lshStopAnimation()
0xd0b: Pop(0)
0xd0c: GOTO 0xd0f

0xd0d: @ StopAnimation()
0xd0e: Pop(0)
0xd0f: Return(); Pop(0)

0xd10: GOTO 0x6a2

0xd11: Return(); Pop(0)

0xd12: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd13: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd14: PushEmpty(bool, object)
0xd15: Stack[-1] = Stack[-11]
0xd16: Call 0x1341

0xd17: Pop(1)
0xd18: Pop(1); Push((bool) Stack[-1] == 0)
0xd19: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd1a: Stack[-10] = (int) -2
0xd1b: Return(); Pop(8)

0xd1c: @ CreateDialog(Stack[-4])
0xd1d: Pop(0)
0xd1e: PushEmpty(int)
0xd1f: Call 0x13f0

0xd20: Pop(0)
0xd21: @@ SetNPCName(Stack[-1])
0xd22: Pop(1)
0xd23: PushEmpty(string)
0xd24: Call 0x13f2

0xd25: Pop(0)
0xd26: @@ SetPhoto(Stack[-1])
0xd27: Pop(1)
0xd28: PushEmpty(int)
0xd29: Call 0x17f8

0xd2a: Pop(0)
0xd2b: @@ SetPlayerName(Stack[-1])
0xd2c: Pop(1)
0xd2d: Stack[-2] = (int) -1
0xd2e: @ IsOverrideActive(Stack[-3])
0xd2f: Pop(0)
0xd30: Push(Stack[-3])
0xd31: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd32: Stack[-10] = (int) -2
0xd33: Return(); Pop(8)

0xd34: @ DoDialog(Stack[-4])
0xd35: Pop(0)
0xd36: PushEmpty(object, object)
0xd37: Stack[-2] = Stack[-11]
0xd38: Stack[-1] = Stack[-6]
0xd39: Push(-2, 4); TaskCall(9)
0xd3a: Call 0xd51

0xd3b: Pop(-2, 4); TaskReturn
0xd3c: Pop(2)
0xd3d: @@ IsDialogEnd(Stack[-1])
0xd3e: Pop(0)
0xd3f: Pop(0); Push((bool) Stack[-1] == 0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd41: @ sync()
0xd42: Pop(0)
0xd43: @@ IsDialogEnd(Stack[-1])
0xd44: Pop(0)
0xd45: GOTO 0xd3f

0xd46: PushEmpty(object)
0xd47: Stack[-1] = Stack[-10]
0xd48: Call 0x1379

0xd49: Pop(1)
0xd4a: @ StopDialog(Stack[-4])
0xd4b: Pop(0)
0xd4c: @@ GetReturnValue(Stack[-2])
0xd4d: Pop(0)
0xd4e: Stack[-10] = Stack[-2]
0xd4f: Return(); Pop(8)

0xd50: Stack[-4] = 0
0xd51: PushEmpty()
0xd52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd55: Push((int) 1)
0xd56: IF (Stack[-1] == 0) GOTO 0xda8; Pop(1)

0xd57: PushEmpty(string)
0xd58: Stack[-1] = "Neutral"
0xd59: Call 0xdc6

0xd5a: Pop(1)
0xd5b: Push((int) 6914)
0xd5c: @@ SetMessage(Stack[-1])
0xd5d: Pop(1)
0xd5e: @@ ClearReplies()
0xd5f: Pop(0)
0xd60: PushEmpty(bool)
0xd61: Stack[-1] = (bool) 0
0xd62: PushEmpty(bool, object)
0xd63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd64: Call 0x15f1

0xd65: Pop(1)
0xd66: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd67: PushEmpty(bool, object)
0xd68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd69: Call 0x15fd

0xd6a: Pop(1)
0xd6b: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd6c: Stack[-1] = (bool) 1
0xd6d: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd6e: Push((int) 6915)
0xd6f: Push((int) 7622)
0xd70: Push((int) 7621)
0xd71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd72: Pop(3)
0xd73: Push((int) 7747)
0xd74: Push((int) -1)
0xd75: Push((int) 8548)
0xd76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd77: Pop(3)
0xd78: GOTO 0xda8

0xd79: PushEmpty(string)
0xd7a: Stack[-1] = "Neutral"
0xd7b: Call 0xdc6

0xd7c: Pop(1)
0xd7d: Push((int) 9294)
0xd7e: @@ SetMessage(Stack[-1])
0xd7f: Pop(1)
0xd80: @@ ClearReplies()
0xd81: Pop(0)
0xd82: Push((int) 9295)
0xd83: Push((int) 10205)
0xd84: Push((int) 10204)
0xd85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd86: Pop(3)
0xd87: Push((int) 9306)
0xd88: Push((int) 10205)
0xd89: Push((int) 10216)
0xd8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8b: Pop(3)
0xd8c: GOTO 0xda8

0xd8d: PushEmpty(string)
0xd8e: Stack[-1] = "Neutral"
0xd8f: Call 0xdc6

0xd90: Pop(1)
0xd91: Push((int) 9307)
0xd92: @@ SetMessage(Stack[-1])
0xd93: Pop(1)
0xd94: @@ ClearReplies()
0xd95: Pop(0)
0xd96: Push((int) 9308)
0xd97: Push((int) 10220)
0xd98: Push((int) 10219)
0xd99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9a: Pop(3)
0xd9b: Push((int) 9316)
0xd9c: Push((int) 10229)
0xd9d: Push((int) 10228)
0xd9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9f: Pop(3)
0xda0: Push((int) 9319)
0xda1: Push((int) 10233)
0xda2: Push((int) 10232)
0xda3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda4: Pop(3)
0xda5: GOTO 0xda8

0xda6: Return(); Pop(0)

0xda7: GOTO 0xd55

0xda8: PushEmpty(bool)
0xda9: Call 0x13f4

0xdaa: Pop(0)
0xdab: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdac: @ lshWaitForAnimEnd()
0xdad: Pop(0)
0xdae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdaf: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdb0: GOTO 0xdb6

0xdb1: PushEmpty(string)
0xdb2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdb3: Call 0x137d

0xdb4: Pop(1)
0xdb5: GOTO 0xdac

0xdb6: GOTO 0xdc5

0xdb7: Push("all")
0xdb8: Push("idle")
0xdb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xdba: Pop(2)
0xdbb: @ WaitForAnimEnd()
0xdbc: Pop(0)
0xdbd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdbe: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdbf: GOTO 0xdc5

0xdc0: Push("all")
0xdc1: Push("idle")
0xdc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc3: Pop(2)
0xdc4: GOTO 0xdbb

0xdc5: Return(); Pop(0)

0xdc6: PushEmpty()
0xdc7: PushEmpty(bool)
0xdc8: Call 0x13f4

0xdc9: Pop(0)
0xdca: Pop(1); Push((bool) Stack[-1] == 0)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdcc: Return(); Pop(0)

0xdcd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdce: IF (Stack[-1] == 0) GOTO 0xdd0; Pop(1)

0xdcf: Return(); Pop(0)

0xdd0: PushEmpty(string)
0xdd1: Stack[-1] = Stack[-2]
0xdd2: Call 0x137d

0xdd3: Pop(1)
0xdd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdd5: Return(); Pop(0)

0xdd6: PushEmpty()
0xdd7: Push((int) 1)
0xdd8: IF (Stack[-1] == 0) GOTO 0xf8f; Pop(1)

0xdd9: PushEmpty()
0xdda: Call 0x138f

0xddb: Pop(0)
0xddc: Push((int) 8122)
0xddd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdde: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xddf: PushEmpty(object, object)
0xde0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde2: Call 0x141f

0xde3: Pop(2)
0xde4: PushEmpty(object, object)
0xde5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde7: Call 0x1413

0xde8: Pop(2)
0xde9: PushEmpty(object, object)
0xdea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdec: Call 0x1408

0xded: Pop(2)
0xdee: Push((int) 8131)
0xdef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xe00; Pop(1)

0xdf1: PushEmpty(object, object)
0xdf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf4: Call 0x141f

0xdf5: Pop(2)
0xdf6: PushEmpty(object, object)
0xdf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf9: Call 0x1408

0xdfa: Pop(2)
0xdfb: PushEmpty(object, object)
0xdfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdfe: Call 0x1413

0xdff: Pop(2)
0xe00: Push((int) 7620)
0xe01: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe02: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe03: PushEmpty(string)
0xe04: Stack[-1] = "Neutral"
0xe05: Call 0xdc6

0xe06: Pop(1)
0xe07: Push((int) 6914)
0xe08: @@ SetMessage(Stack[-1])
0xe09: Pop(1)
0xe0a: @@ ClearReplies()
0xe0b: Pop(0)
0xe0c: PushEmpty(bool)
0xe0d: Stack[-1] = (bool) 0
0xe0e: PushEmpty(bool, object)
0xe0f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe10: Call 0x15f1

0xe11: Pop(1)
0xe12: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe13: PushEmpty(bool, object)
0xe14: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe15: Call 0x15fd

0xe16: Pop(1)
0xe17: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe18: Stack[-1] = (bool) 1
0xe19: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1a: Push((int) 6915)
0xe1b: Push((int) 7622)
0xe1c: Push((int) 7621)
0xe1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1e: Pop(3)
0xe1f: Push((int) 7747)
0xe20: Push((int) -1)
0xe21: Push((int) 8548)
0xe22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe23: Pop(3)
0xe24: Return(); Pop(0)

0xe25: PushEmpty(string)
0xe26: Stack[-1] = "Neutral"
0xe27: Call 0xdc6

0xe28: Pop(1)
0xe29: Push((int) 9294)
0xe2a: @@ SetMessage(Stack[-1])
0xe2b: Pop(1)
0xe2c: @@ ClearReplies()
0xe2d: Pop(0)
0xe2e: Push((int) 9295)
0xe2f: Push((int) 10205)
0xe30: Push((int) 10204)
0xe31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe32: Pop(3)
0xe33: Push((int) 9306)
0xe34: Push((int) 10205)
0xe35: Push((int) 10216)
0xe36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe37: Pop(3)
0xe38: Return(); Pop(0)

0xe39: PushEmpty(string)
0xe3a: Stack[-1] = "Neutral"
0xe3b: Call 0xdc6

0xe3c: Pop(1)
0xe3d: Push((int) 9307)
0xe3e: @@ SetMessage(Stack[-1])
0xe3f: Pop(1)
0xe40: @@ ClearReplies()
0xe41: Pop(0)
0xe42: Push((int) 9308)
0xe43: Push((int) 10220)
0xe44: Push((int) 10219)
0xe45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe46: Pop(3)
0xe47: Push((int) 9316)
0xe48: Push((int) 10229)
0xe49: Push((int) 10228)
0xe4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4b: Pop(3)
0xe4c: Push((int) 9319)
0xe4d: Push((int) 10233)
0xe4e: Push((int) 10232)
0xe4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe50: Pop(3)
0xe51: Return(); Pop(0)

0xe52: Push((int) 10233)
0xe53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe54: IF (Stack[-1] == 0) GOTO 0xe64; Pop(1)

0xe55: PushEmpty(string)
0xe56: Stack[-1] = "Neutral"
0xe57: Call 0xdc6

0xe58: Pop(1)
0xe59: Push((int) 9320)
0xe5a: @@ SetMessage(Stack[-1])
0xe5b: Pop(1)
0xe5c: @@ ClearReplies()
0xe5d: Pop(0)
0xe5e: Push((int) 9321)
0xe5f: Push((int) 10222)
0xe60: Push((int) 10234)
0xe61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe62: Pop(3)
0xe63: Return(); Pop(0)

0xe64: Push((int) 10229)
0xe65: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe66: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe67: PushEmpty(string)
0xe68: Stack[-1] = "Neutral"
0xe69: Call 0xdc6

0xe6a: Pop(1)
0xe6b: Push((int) 9317)
0xe6c: @@ SetMessage(Stack[-1])
0xe6d: Pop(1)
0xe6e: @@ ClearReplies()
0xe6f: Pop(0)
0xe70: Push((int) 9318)
0xe71: Push((int) 10220)
0xe72: Push((int) 10230)
0xe73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe74: Pop(3)
0xe75: Return(); Pop(0)

0xe76: Push((int) 10220)
0xe77: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe78: IF (Stack[-1] == 0) GOTO 0xe8d; Pop(1)

0xe79: PushEmpty(string)
0xe7a: Stack[-1] = "Neutral"
0xe7b: Call 0xdc6

0xe7c: Pop(1)
0xe7d: Push((int) 9309)
0xe7e: @@ SetMessage(Stack[-1])
0xe7f: Pop(1)
0xe80: @@ ClearReplies()
0xe81: Pop(0)
0xe82: Push((int) 9310)
0xe83: Push((int) 10222)
0xe84: Push((int) 10221)
0xe85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe86: Pop(3)
0xe87: Push((int) 9313)
0xe88: Push((int) 10225)
0xe89: Push((int) 10224)
0xe8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8b: Pop(3)
0xe8c: Return(); Pop(0)

0xe8d: Push((int) 10225)
0xe8e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8f: IF (Stack[-1] == 0) GOTO 0xe9f; Pop(1)

0xe90: PushEmpty(string)
0xe91: Stack[-1] = "Neutral"
0xe92: Call 0xdc6

0xe93: Pop(1)
0xe94: Push((int) 9314)
0xe95: @@ SetMessage(Stack[-1])
0xe96: Pop(1)
0xe97: @@ ClearReplies()
0xe98: Pop(0)
0xe99: Push((int) 9315)
0xe9a: Push((int) 10222)
0xe9b: Push((int) 10226)
0xe9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9d: Pop(3)
0xe9e: Return(); Pop(0)

0xe9f: Push((int) 10222)
0xea0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea1: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xea2: PushEmpty(string)
0xea3: Stack[-1] = "Neutral"
0xea4: Call 0xdc6

0xea5: Pop(1)
0xea6: Push((int) 9311)
0xea7: @@ SetMessage(Stack[-1])
0xea8: Pop(1)
0xea9: @@ ClearReplies()
0xeaa: Pop(0)
0xeab: Push((int) 9312)
0xeac: Push((int) -1)
0xead: Push((int) 10223)
0xeae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeaf: Pop(3)
0xeb0: Return(); Pop(0)

0xeb1: Push((int) 10205)
0xeb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb3: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xeb4: PushEmpty(string)
0xeb5: Stack[-1] = "Neutral"
0xeb6: Call 0xdc6

0xeb7: Pop(1)
0xeb8: Push((int) 9296)
0xeb9: @@ SetMessage(Stack[-1])
0xeba: Pop(1)
0xebb: @@ ClearReplies()
0xebc: Pop(0)
0xebd: Push((int) 9297)
0xebe: Push((int) 10207)
0xebf: Push((int) 10206)
0xec0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec1: Pop(3)
0xec2: Push((int) 9305)
0xec3: Push((int) 10207)
0xec4: Push((int) 10214)
0xec5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec6: Pop(3)
0xec7: Return(); Pop(0)

0xec8: Push((int) 10207)
0xec9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeca: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xecb: PushEmpty(string)
0xecc: Stack[-1] = "Neutral"
0xecd: Call 0xdc6

0xece: Pop(1)
0xecf: Push((int) 9298)
0xed0: @@ SetMessage(Stack[-1])
0xed1: Pop(1)
0xed2: @@ ClearReplies()
0xed3: Pop(0)
0xed4: Push((int) 9299)
0xed5: Push((int) 10209)
0xed6: Push((int) 10208)
0xed7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed8: Pop(3)
0xed9: Push((int) 9303)
0xeda: Push((int) 10213)
0xedb: Push((int) 10212)
0xedc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedd: Pop(3)
0xede: Return(); Pop(0)

0xedf: Push((int) 10213)
0xee0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee1: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xee2: PushEmpty(string)
0xee3: Stack[-1] = "Neutral"
0xee4: Call 0xdc6

0xee5: Pop(1)
0xee6: Push((int) 9304)
0xee7: @@ SetMessage(Stack[-1])
0xee8: Pop(1)
0xee9: @@ ClearReplies()
0xeea: Pop(0)
0xeeb: Return(); Pop(0)

0xeec: Push((int) 10209)
0xeed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeee: IF (Stack[-1] == 0) GOTO 0xf03; Pop(1)

0xeef: PushEmpty(string)
0xef0: Stack[-1] = "Neutral"
0xef1: Call 0xdc6

0xef2: Pop(1)
0xef3: Push((int) 9300)
0xef4: @@ SetMessage(Stack[-1])
0xef5: Pop(1)
0xef6: @@ ClearReplies()
0xef7: Pop(0)
0xef8: Push((int) 9301)
0xef9: Push((int) -1)
0xefa: Push((int) 10210)
0xefb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefc: Pop(3)
0xefd: Push((int) 9302)
0xefe: Push((int) -1)
0xeff: Push((int) 10211)
0xf00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf01: Pop(3)
0xf02: Return(); Pop(0)

0xf03: Push((int) 7622)
0xf04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf05: IF (Stack[-1] == 0) GOTO 0xf1a; Pop(1)

0xf06: PushEmpty(string)
0xf07: Stack[-1] = "Neutral"
0xf08: Call 0xdc6

0xf09: Pop(1)
0xf0a: Push((int) 6916)
0xf0b: @@ SetMessage(Stack[-1])
0xf0c: Pop(1)
0xf0d: @@ ClearReplies()
0xf0e: Pop(0)
0xf0f: Push((int) 6917)
0xf10: Push((int) 8117)
0xf11: Push((int) 7623)
0xf12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf13: Pop(3)
0xf14: Push((int) 7365)
0xf15: Push((int) 8124)
0xf16: Push((int) 8123)
0xf17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf18: Pop(3)
0xf19: Return(); Pop(0)

0xf1a: Push((int) 8124)
0xf1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1c: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf1d: PushEmpty(string)
0xf1e: Stack[-1] = "Neutral"
0xf1f: Call 0xdc6

0xf20: Pop(1)
0xf21: Push((int) 7366)
0xf22: @@ SetMessage(Stack[-1])
0xf23: Pop(1)
0xf24: @@ ClearReplies()
0xf25: Pop(0)
0xf26: Push((int) 7367)
0xf27: Push((int) 8121)
0xf28: Push((int) 8125)
0xf29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2a: Pop(3)
0xf2b: Push((int) 7368)
0xf2c: Push((int) 8127)
0xf2d: Push((int) 8126)
0xf2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2f: Pop(3)
0xf30: Return(); Pop(0)

0xf31: Push((int) 8127)
0xf32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf33: IF (Stack[-1] == 0) GOTO 0xf43; Pop(1)

0xf34: PushEmpty(string)
0xf35: Stack[-1] = "Neutral"
0xf36: Call 0xdc6

0xf37: Pop(1)
0xf38: Push((int) 7369)
0xf39: @@ SetMessage(Stack[-1])
0xf3a: Pop(1)
0xf3b: @@ ClearReplies()
0xf3c: Pop(0)
0xf3d: Push((int) 7370)
0xf3e: Push((int) 8121)
0xf3f: Push((int) 8128)
0xf40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf41: Pop(3)
0xf42: Return(); Pop(0)

0xf43: Push((int) 8117)
0xf44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf45: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf46: PushEmpty(string)
0xf47: Stack[-1] = "Neutral"
0xf48: Call 0xdc6

0xf49: Pop(1)
0xf4a: Push((int) 7359)
0xf4b: @@ SetMessage(Stack[-1])
0xf4c: Pop(1)
0xf4d: @@ ClearReplies()
0xf4e: Pop(0)
0xf4f: Push((int) 7360)
0xf50: Push((int) 8119)
0xf51: Push((int) 8118)
0xf52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf53: Pop(3)
0xf54: Push((int) 7372)
0xf55: Push((int) 8121)
0xf56: Push((int) 8132)
0xf57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf58: Pop(3)
0xf59: Return(); Pop(0)

0xf5a: Push((int) 8119)
0xf5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5c: IF (Stack[-1] == 0) GOTO 0xf6c; Pop(1)

0xf5d: PushEmpty(string)
0xf5e: Stack[-1] = "Neutral"
0xf5f: Call 0xdc6

0xf60: Pop(1)
0xf61: Push((int) 7361)
0xf62: @@ SetMessage(Stack[-1])
0xf63: Pop(1)
0xf64: @@ ClearReplies()
0xf65: Pop(0)
0xf66: Push((int) 7362)
0xf67: Push((int) 8121)
0xf68: Push((int) 8120)
0xf69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6a: Pop(3)
0xf6b: Return(); Pop(0)

0xf6c: Push((int) 8121)
0xf6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6e: IF (Stack[-1] == 0) GOTO 0xf83; Pop(1)

0xf6f: PushEmpty(string)
0xf70: Stack[-1] = "Neutral"
0xf71: Call 0xdc6

0xf72: Pop(1)
0xf73: Push((int) 7363)
0xf74: @@ SetMessage(Stack[-1])
0xf75: Pop(1)
0xf76: @@ ClearReplies()
0xf77: Pop(0)
0xf78: Push((int) 7364)
0xf79: Push((int) -1)
0xf7a: Push((int) 8122)
0xf7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7c: Pop(3)
0xf7d: Push((int) 7371)
0xf7e: Push((int) -1)
0xf7f: Push((int) 8131)
0xf80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf81: Pop(3)
0xf82: Return(); Pop(0)

0xf83: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf84: PushEmpty(bool)
0xf85: Call 0x13f4

0xf86: Pop(0)
0xf87: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf88: @ lshStopAnimation()
0xf89: Pop(0)
0xf8a: GOTO 0xf8d

0xf8b: @ StopAnimation()
0xf8c: Pop(0)
0xf8d: Return(); Pop(0)

0xf8e: GOTO 0xdd7

0xf8f: Return(); Pop(0)

0xf90: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf91: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf92: PushEmpty(bool, object)
0xf93: Stack[-1] = Stack[-11]
0xf94: Call 0x1341

0xf95: Pop(1)
0xf96: Pop(1); Push((bool) Stack[-1] == 0)
0xf97: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf98: Stack[-10] = (int) -2
0xf99: Return(); Pop(8)

0xf9a: @ CreateDialog(Stack[-4])
0xf9b: Pop(0)
0xf9c: PushEmpty(int)
0xf9d: Call 0x13f0

0xf9e: Pop(0)
0xf9f: @@ SetNPCName(Stack[-1])
0xfa0: Pop(1)
0xfa1: PushEmpty(string)
0xfa2: Call 0x13f2

0xfa3: Pop(0)
0xfa4: @@ SetPhoto(Stack[-1])
0xfa5: Pop(1)
0xfa6: PushEmpty(int)
0xfa7: Call 0x17f8

0xfa8: Pop(0)
0xfa9: @@ SetPlayerName(Stack[-1])
0xfaa: Pop(1)
0xfab: Stack[-2] = (int) -1
0xfac: @ IsOverrideActive(Stack[-3])
0xfad: Pop(0)
0xfae: Push(Stack[-3])
0xfaf: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xfb0: Stack[-10] = (int) -2
0xfb1: Return(); Pop(8)

0xfb2: @ DoDialog(Stack[-4])
0xfb3: Pop(0)
0xfb4: PushEmpty(object, object)
0xfb5: Stack[-2] = Stack[-11]
0xfb6: Stack[-1] = Stack[-6]
0xfb7: Push(-2, 4); TaskCall(11)
0xfb8: Call 0xfcf

0xfb9: Pop(-2, 4); TaskReturn
0xfba: Pop(2)
0xfbb: @@ IsDialogEnd(Stack[-1])
0xfbc: Pop(0)
0xfbd: Pop(0); Push((bool) Stack[-1] == 0)
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc4; Pop(1)

0xfbf: @ sync()
0xfc0: Pop(0)
0xfc1: @@ IsDialogEnd(Stack[-1])
0xfc2: Pop(0)
0xfc3: GOTO 0xfbd

0xfc4: PushEmpty(object)
0xfc5: Stack[-1] = Stack[-10]
0xfc6: Call 0x1379

0xfc7: Pop(1)
0xfc8: @ StopDialog(Stack[-4])
0xfc9: Pop(0)
0xfca: @@ GetReturnValue(Stack[-2])
0xfcb: Pop(0)
0xfcc: Stack[-10] = Stack[-2]
0xfcd: Return(); Pop(8)

0xfce: Stack[-4] = 0
0xfcf: PushEmpty()
0xfd0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xfd1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xfd2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xfd3: Push((int) 1)
0xfd4: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0xfd5: PushEmpty(bool, object)
0xfd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd7: Call 0x175c

0xfd8: Pop(1)
0xfd9: IF (Stack[-1] == 0) GOTO 0xff8; Pop(1)

0xfda: PushEmpty(object, object)
0xfdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfdd: Call 0x1581

0xfde: Pop(2)
0xfdf: PushEmpty(string)
0xfe0: Stack[-1] = "Neutral"
0xfe1: Call 0x1027

0xfe2: Pop(1)
0xfe3: Push((int) 9865)
0xfe4: @@ SetMessage(Stack[-1])
0xfe5: Pop(1)
0xfe6: @@ ClearReplies()
0xfe7: Pop(0)
0xfe8: Push((int) 9866)
0xfe9: Push((int) 10867)
0xfea: Push((int) 10866)
0xfeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfec: Pop(3)
0xfed: Push((int) 9877)
0xfee: Push((int) -1)
0xfef: Push((int) 10880)
0xff0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff1: Pop(3)
0xff2: Push((int) 9878)
0xff3: Push((int) 10882)
0xff4: Push((int) 10881)
0xff5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff6: Pop(3)
0xff7: GOTO 0x1009

0xff8: PushEmpty(string)
0xff9: Stack[-1] = "Neutral"
0xffa: Call 0x1027

0xffb: Pop(1)
0xffc: Push((int) 10190)
0xffd: @@ SetMessage(Stack[-1])
0xffe: Pop(1)
0xfff: @@ ClearReplies()
0x1000: Pop(0)
0x1001: Push((int) 15313)
0x1002: Push((int) -1)
0x1003: Push((int) 16551)
0x1004: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1005: Pop(3)
0x1006: GOTO 0x1009

0x1007: Return(); Pop(0)

0x1008: GOTO 0xfd3

0x1009: PushEmpty(bool)
0x100a: Call 0x13f4

0x100b: Pop(0)
0x100c: IF (Stack[-1] == 0) GOTO 0x1018; Pop(1)

0x100d: @ lshWaitForAnimEnd()
0x100e: Pop(0)
0x100f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1010: IF (Stack[-1] == 0) GOTO 0x1012; Pop(1)

0x1011: GOTO 0x1017

0x1012: PushEmpty(string)
0x1013: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1014: Call 0x137d

0x1015: Pop(1)
0x1016: GOTO 0x100d

0x1017: GOTO 0x1026

0x1018: Push("all")
0x1019: Push("idle")
0x101a: @ PlayAnimation(Stack[-2], Stack[-1])
0x101b: Pop(2)
0x101c: @ WaitForAnimEnd()
0x101d: Pop(0)
0x101e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x101f: IF (Stack[-1] == 0) GOTO 0x1021; Pop(1)

0x1020: GOTO 0x1026

0x1021: Push("all")
0x1022: Push("idle")
0x1023: @ PlayAnimation(Stack[-2], Stack[-1])
0x1024: Pop(2)
0x1025: GOTO 0x101c

0x1026: Return(); Pop(0)

0x1027: PushEmpty()
0x1028: PushEmpty(bool)
0x1029: Call 0x13f4

0x102a: Pop(0)
0x102b: Pop(1); Push((bool) Stack[-1] == 0)
0x102c: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102d: Return(); Pop(0)

0x102e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x102f: IF (Stack[-1] == 0) GOTO 0x1031; Pop(1)

0x1030: Return(); Pop(0)

0x1031: PushEmpty(string)
0x1032: Stack[-1] = Stack[-2]
0x1033: Call 0x137d

0x1034: Pop(1)
0x1035: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1036: Return(); Pop(0)

0x1037: PushEmpty()
0x1038: Push((int) 1)
0x1039: IF (Stack[-1] == 0) GOTO 0x10da; Pop(1)

0x103a: PushEmpty()
0x103b: Call 0x138f

0x103c: Pop(0)
0x103d: Push((int) 10865)
0x103e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103f: IF (Stack[-1] == 0) GOTO 0x1072; Pop(1)

0x1040: PushEmpty(bool, object)
0x1041: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1042: Call 0x175c

0x1043: Pop(1)
0x1044: IF (Stack[-1] == 0) GOTO 0x1063; Pop(1)

0x1045: PushEmpty(object, object)
0x1046: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1047: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1048: Call 0x1581

0x1049: Pop(2)
0x104a: PushEmpty(string)
0x104b: Stack[-1] = "Neutral"
0x104c: Call 0x1027

0x104d: Pop(1)
0x104e: Push((int) 9865)
0x104f: @@ SetMessage(Stack[-1])
0x1050: Pop(1)
0x1051: @@ ClearReplies()
0x1052: Pop(0)
0x1053: Push((int) 9866)
0x1054: Push((int) 10867)
0x1055: Push((int) 10866)
0x1056: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1057: Pop(3)
0x1058: Push((int) 9877)
0x1059: Push((int) -1)
0x105a: Push((int) 10880)
0x105b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105c: Pop(3)
0x105d: Push((int) 9878)
0x105e: Push((int) 10882)
0x105f: Push((int) 10881)
0x1060: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1061: Pop(3)
0x1062: Return(); Pop(0)

0x1063: PushEmpty(string)
0x1064: Stack[-1] = "Neutral"
0x1065: Call 0x1027

0x1066: Pop(1)
0x1067: Push((int) 10190)
0x1068: @@ SetMessage(Stack[-1])
0x1069: Pop(1)
0x106a: @@ ClearReplies()
0x106b: Pop(0)
0x106c: Push((int) 15313)
0x106d: Push((int) -1)
0x106e: Push((int) 16551)
0x106f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1070: Pop(3)
0x1071: Return(); Pop(0)

0x1072: Push((int) 10882)
0x1073: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1074: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1075: PushEmpty(string)
0x1076: Stack[-1] = "Neutral"
0x1077: Call 0x1027

0x1078: Pop(1)
0x1079: Push((int) 9879)
0x107a: @@ SetMessage(Stack[-1])
0x107b: Pop(1)
0x107c: @@ ClearReplies()
0x107d: Pop(0)
0x107e: Push((int) 9880)
0x107f: Push((int) -1)
0x1080: Push((int) 10883)
0x1081: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1082: Pop(3)
0x1083: Return(); Pop(0)

0x1084: Push((int) 10867)
0x1085: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1086: IF (Stack[-1] == 0) GOTO 0x109b; Pop(1)

0x1087: PushEmpty(string)
0x1088: Stack[-1] = "Neutral"
0x1089: Call 0x1027

0x108a: Pop(1)
0x108b: Push((int) 9867)
0x108c: @@ SetMessage(Stack[-1])
0x108d: Pop(1)
0x108e: @@ ClearReplies()
0x108f: Pop(0)
0x1090: Push((int) 9868)
0x1091: Push((int) 10869)
0x1092: Push((int) 10868)
0x1093: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1094: Pop(3)
0x1095: Push((int) 9876)
0x1096: Push((int) 10869)
0x1097: Push((int) 10878)
0x1098: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1099: Pop(3)
0x109a: Return(); Pop(0)

0x109b: Push((int) 10869)
0x109c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109d: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x109e: PushEmpty(string)
0x109f: Stack[-1] = "Neutral"
0x10a0: Call 0x1027

0x10a1: Pop(1)
0x10a2: Push((int) 9869)
0x10a3: @@ SetMessage(Stack[-1])
0x10a4: Pop(1)
0x10a5: @@ ClearReplies()
0x10a6: Pop(0)
0x10a7: Push((int) 9870)
0x10a8: Push((int) 10871)
0x10a9: Push((int) 10870)
0x10aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ab: Pop(3)
0x10ac: Push((int) 9874)
0x10ad: Push((int) 10871)
0x10ae: Push((int) 10874)
0x10af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b0: Pop(3)
0x10b1: Push((int) 9875)
0x10b2: Push((int) 10871)
0x10b3: Push((int) 10876)
0x10b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b5: Pop(3)
0x10b6: Return(); Pop(0)

0x10b7: Push((int) 10871)
0x10b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b9: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10ba: PushEmpty(string)
0x10bb: Stack[-1] = "Neutral"
0x10bc: Call 0x1027

0x10bd: Pop(1)
0x10be: Push((int) 9871)
0x10bf: @@ SetMessage(Stack[-1])
0x10c0: Pop(1)
0x10c1: @@ ClearReplies()
0x10c2: Pop(0)
0x10c3: Push((int) 9872)
0x10c4: Push((int) -1)
0x10c5: Push((int) 10872)
0x10c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c7: Pop(3)
0x10c8: Push((int) 9873)
0x10c9: Push((int) -1)
0x10ca: Push((int) 10873)
0x10cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10cc: Pop(3)
0x10cd: Return(); Pop(0)

0x10ce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10cf: PushEmpty(bool)
0x10d0: Call 0x13f4

0x10d1: Pop(0)
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10d3: @ lshStopAnimation()
0x10d4: Pop(0)
0x10d5: GOTO 0x10d8

0x10d6: @ StopAnimation()
0x10d7: Pop(0)
0x10d8: Return(); Pop(0)

0x10d9: GOTO 0x1038

0x10da: Return(); Pop(0)

0x10db: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x10dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x10dd: PushEmpty(bool, object)
0x10de: Stack[-1] = Stack[-11]
0x10df: Call 0x1341

0x10e0: Pop(1)
0x10e1: Pop(1); Push((bool) Stack[-1] == 0)
0x10e2: IF (Stack[-1] == 0) GOTO 0x10e5; Pop(1)

0x10e3: Stack[-10] = (int) -2
0x10e4: Return(); Pop(8)

0x10e5: @ CreateDialog(Stack[-4])
0x10e6: Pop(0)
0x10e7: PushEmpty(int)
0x10e8: Call 0x13f0

0x10e9: Pop(0)
0x10ea: @@ SetNPCName(Stack[-1])
0x10eb: Pop(1)
0x10ec: PushEmpty(string)
0x10ed: Call 0x13f2

0x10ee: Pop(0)
0x10ef: @@ SetPhoto(Stack[-1])
0x10f0: Pop(1)
0x10f1: PushEmpty(int)
0x10f2: Call 0x17f8

0x10f3: Pop(0)
0x10f4: @@ SetPlayerName(Stack[-1])
0x10f5: Pop(1)
0x10f6: Stack[-2] = (int) -1
0x10f7: @ IsOverrideActive(Stack[-3])
0x10f8: Pop(0)
0x10f9: Push(Stack[-3])
0x10fa: IF (Stack[-1] == 0) GOTO 0x10fd; Pop(1)

0x10fb: Stack[-10] = (int) -2
0x10fc: Return(); Pop(8)

0x10fd: @ DoDialog(Stack[-4])
0x10fe: Pop(0)
0x10ff: PushEmpty(object, object)
0x1100: Stack[-2] = Stack[-11]
0x1101: Stack[-1] = Stack[-6]
0x1102: Push(-2, 4); TaskCall(13)
0x1103: Call 0x111a

0x1104: Pop(-2, 4); TaskReturn
0x1105: Pop(2)
0x1106: @@ IsDialogEnd(Stack[-1])
0x1107: Pop(0)
0x1108: Pop(0); Push((bool) Stack[-1] == 0)
0x1109: IF (Stack[-1] == 0) GOTO 0x110f; Pop(1)

0x110a: @ sync()
0x110b: Pop(0)
0x110c: @@ IsDialogEnd(Stack[-1])
0x110d: Pop(0)
0x110e: GOTO 0x1108

0x110f: PushEmpty(object)
0x1110: Stack[-1] = Stack[-10]
0x1111: Call 0x1379

0x1112: Pop(1)
0x1113: @ StopDialog(Stack[-4])
0x1114: Pop(0)
0x1115: @@ GetReturnValue(Stack[-2])
0x1116: Pop(0)
0x1117: Stack[-10] = Stack[-2]
0x1118: Return(); Pop(8)

0x1119: Stack[-4] = 0
0x111a: PushEmpty()
0x111b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x111c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x111d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x111e: Push((int) 1)
0x111f: IF (Stack[-1] == 0) GOTO 0x1162; Pop(1)

0x1120: PushEmpty(string)
0x1121: Stack[-1] = "Neutral"
0x1122: Call 0x1180

0x1123: Pop(1)
0x1124: Push((int) 11320)
0x1125: @@ SetMessage(Stack[-1])
0x1126: Pop(1)
0x1127: @@ ClearReplies()
0x1128: Pop(0)
0x1129: PushEmpty(bool, object)
0x112a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112b: Call 0x1697

0x112c: Pop(1)
0x112d: IF (Stack[-1] == 0) GOTO 0x1133; Pop(1)

0x112e: Push((int) 11321)
0x112f: Push((int) 12516)
0x1130: Push((int) 12515)
0x1131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1132: Pop(3)
0x1133: PushEmpty(bool)
0x1134: Stack[-1] = (bool) 0
0x1135: PushEmpty(bool, object)
0x1136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1137: Call 0x168b

0x1138: Pop(1)
0x1139: IF (Stack[-1] == 0) GOTO 0x1141; Pop(1)

0x113a: PushEmpty(bool, object)
0x113b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113c: Call 0x16a3

0x113d: Pop(1)
0x113e: Pop(1); Push((bool) Stack[-1] == 0)
0x113f: IF (Stack[-1] == 0) GOTO 0x1141; Pop(1)

0x1140: Stack[-1] = (bool) 1
0x1141: IF (Stack[-1] == 0) GOTO 0x1147; Pop(1)

0x1142: Push((int) 11469)
0x1143: Push((int) 12676)
0x1144: Push((int) 12675)
0x1145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1146: Pop(3)
0x1147: PushEmpty(bool)
0x1148: Stack[-1] = (bool) 0
0x1149: PushEmpty(bool, object)
0x114a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114b: Call 0x16bb

0x114c: Pop(1)
0x114d: IF (Stack[-1] == 0) GOTO 0x1154; Pop(1)

0x114e: PushEmpty(bool, object)
0x114f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1150: Call 0x16af

0x1151: Pop(1)
0x1152: IF (Stack[-1] == 0) GOTO 0x1154; Pop(1)

0x1153: Stack[-1] = (bool) 1
0x1154: IF (Stack[-1] == 0) GOTO 0x115a; Pop(1)

0x1155: Push((int) 11856)
0x1156: Push((int) 13070)
0x1157: Push((int) 13069)
0x1158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1159: Pop(3)
0x115a: Push((int) 11472)
0x115b: Push((int) -1)
0x115c: Push((int) 12678)
0x115d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115e: Pop(3)
0x115f: GOTO 0x1162

0x1160: Return(); Pop(0)

0x1161: GOTO 0x111e

0x1162: PushEmpty(bool)
0x1163: Call 0x13f4

0x1164: Pop(0)
0x1165: IF (Stack[-1] == 0) GOTO 0x1171; Pop(1)

0x1166: @ lshWaitForAnimEnd()
0x1167: Pop(0)
0x1168: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1169: IF (Stack[-1] == 0) GOTO 0x116b; Pop(1)

0x116a: GOTO 0x1170

0x116b: PushEmpty(string)
0x116c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x116d: Call 0x137d

0x116e: Pop(1)
0x116f: GOTO 0x1166

0x1170: GOTO 0x117f

0x1171: Push("all")
0x1172: Push("idle")
0x1173: @ PlayAnimation(Stack[-2], Stack[-1])
0x1174: Pop(2)
0x1175: @ WaitForAnimEnd()
0x1176: Pop(0)
0x1177: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1178: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x1179: GOTO 0x117f

0x117a: Push("all")
0x117b: Push("idle")
0x117c: @ PlayAnimation(Stack[-2], Stack[-1])
0x117d: Pop(2)
0x117e: GOTO 0x1175

0x117f: Return(); Pop(0)

0x1180: PushEmpty()
0x1181: PushEmpty(bool)
0x1182: Call 0x13f4

0x1183: Pop(0)
0x1184: Pop(1); Push((bool) Stack[-1] == 0)
0x1185: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1186: Return(); Pop(0)

0x1187: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1188: IF (Stack[-1] == 0) GOTO 0x118a; Pop(1)

0x1189: Return(); Pop(0)

0x118a: PushEmpty(string)
0x118b: Stack[-1] = Stack[-2]
0x118c: Call 0x137d

0x118d: Pop(1)
0x118e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x118f: Return(); Pop(0)

0x1190: PushEmpty()
0x1191: Push((int) 1)
0x1192: IF (Stack[-1] == 0) GOTO 0x1328; Pop(1)

0x1193: PushEmpty()
0x1194: Call 0x138f

0x1195: Pop(0)
0x1196: Push((int) 12527)
0x1197: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1198: IF (Stack[-1] == 0) GOTO 0x11bc; Pop(1)

0x1199: PushEmpty(object, object)
0x119a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119c: Call 0x146a

0x119d: Pop(2)
0x119e: PushEmpty(object, object)
0x119f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a1: Call 0x1470

0x11a2: Pop(2)
0x11a3: PushEmpty(object, object)
0x11a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a6: Call 0x1476

0x11a7: Pop(2)
0x11a8: PushEmpty(object, object)
0x11a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11ab: Call 0x1576

0x11ac: Pop(2)
0x11ad: PushEmpty(object, object)
0x11ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b0: Call 0x1587

0x11b1: Pop(2)
0x11b2: PushEmpty(object, object)
0x11b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b5: Call 0x1592

0x11b6: Pop(2)
0x11b7: PushEmpty(object, object)
0x11b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11ba: Call 0x1419

0x11bb: Pop(2)
0x11bc: Push((int) 12674)
0x11bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11be: IF (Stack[-1] == 0) GOTO 0x11c4; Pop(1)

0x11bf: PushEmpty(object, object)
0x11c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c2: Call 0x146a

0x11c3: Pop(2)
0x11c4: Push((int) 12677)
0x11c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11c6: IF (Stack[-1] == 0) GOTO 0x11e5; Pop(1)

0x11c7: PushEmpty(object, object)
0x11c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11ca: Call 0x1470

0x11cb: Pop(2)
0x11cc: PushEmpty(object, object)
0x11cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11cf: Call 0x1476

0x11d0: Pop(2)
0x11d1: PushEmpty(object, object)
0x11d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d4: Call 0x1419

0x11d5: Pop(2)
0x11d6: PushEmpty(object, object)
0x11d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d9: Call 0x1576

0x11da: Pop(2)
0x11db: PushEmpty(object, object)
0x11dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11de: Call 0x1592

0x11df: Pop(2)
0x11e0: PushEmpty(object, object)
0x11e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e3: Call 0x1587

0x11e4: Pop(2)
0x11e5: Push((int) 13071)
0x11e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e7: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11e8: PushEmpty(object, object)
0x11e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11eb: Call 0x14ba

0x11ec: Pop(2)
0x11ed: Push((int) 12514)
0x11ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ef: IF (Stack[-1] == 0) GOTO 0x1230; Pop(1)

0x11f0: PushEmpty(string)
0x11f1: Stack[-1] = "Neutral"
0x11f2: Call 0x1180

0x11f3: Pop(1)
0x11f4: Push((int) 11320)
0x11f5: @@ SetMessage(Stack[-1])
0x11f6: Pop(1)
0x11f7: @@ ClearReplies()
0x11f8: Pop(0)
0x11f9: PushEmpty(bool, object)
0x11fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11fb: Call 0x1697

0x11fc: Pop(1)
0x11fd: IF (Stack[-1] == 0) GOTO 0x1203; Pop(1)

0x11fe: Push((int) 11321)
0x11ff: Push((int) 12516)
0x1200: Push((int) 12515)
0x1201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1202: Pop(3)
0x1203: PushEmpty(bool)
0x1204: Stack[-1] = (bool) 0
0x1205: PushEmpty(bool, object)
0x1206: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1207: Call 0x168b

0x1208: Pop(1)
0x1209: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x120a: PushEmpty(bool, object)
0x120b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120c: Call 0x16a3

0x120d: Pop(1)
0x120e: Pop(1); Push((bool) Stack[-1] == 0)
0x120f: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x1210: Stack[-1] = (bool) 1
0x1211: IF (Stack[-1] == 0) GOTO 0x1217; Pop(1)

0x1212: Push((int) 11469)
0x1213: Push((int) 12676)
0x1214: Push((int) 12675)
0x1215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1216: Pop(3)
0x1217: PushEmpty(bool)
0x1218: Stack[-1] = (bool) 0
0x1219: PushEmpty(bool, object)
0x121a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x121b: Call 0x16bb

0x121c: Pop(1)
0x121d: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x121e: PushEmpty(bool, object)
0x121f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1220: Call 0x16af

0x1221: Pop(1)
0x1222: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x1223: Stack[-1] = (bool) 1
0x1224: IF (Stack[-1] == 0) GOTO 0x122a; Pop(1)

0x1225: Push((int) 11856)
0x1226: Push((int) 13070)
0x1227: Push((int) 13069)
0x1228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1229: Pop(3)
0x122a: Push((int) 11472)
0x122b: Push((int) -1)
0x122c: Push((int) 12678)
0x122d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122e: Pop(3)
0x122f: Return(); Pop(0)

0x1230: Push((int) 13070)
0x1231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1232: IF (Stack[-1] == 0) GOTO 0x1242; Pop(1)

0x1233: PushEmpty(string)
0x1234: Stack[-1] = "Neutral"
0x1235: Call 0x1180

0x1236: Pop(1)
0x1237: Push((int) 11857)
0x1238: @@ SetMessage(Stack[-1])
0x1239: Pop(1)
0x123a: @@ ClearReplies()
0x123b: Pop(0)
0x123c: Push((int) 11858)
0x123d: Push((int) -1)
0x123e: Push((int) 13071)
0x123f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1240: Pop(3)
0x1241: Return(); Pop(0)

0x1242: Push((int) 12676)
0x1243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1244: IF (Stack[-1] == 0) GOTO 0x1254; Pop(1)

0x1245: PushEmpty(string)
0x1246: Stack[-1] = "Neutral"
0x1247: Call 0x1180

0x1248: Pop(1)
0x1249: Push((int) 11470)
0x124a: @@ SetMessage(Stack[-1])
0x124b: Pop(1)
0x124c: @@ ClearReplies()
0x124d: Pop(0)
0x124e: Push((int) 11471)
0x124f: Push((int) -1)
0x1250: Push((int) 12677)
0x1251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1252: Pop(3)
0x1253: Return(); Pop(0)

0x1254: Push((int) 12516)
0x1255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1256: IF (Stack[-1] == 0) GOTO 0x126b; Pop(1)

0x1257: PushEmpty(string)
0x1258: Stack[-1] = "Neutral"
0x1259: Call 0x1180

0x125a: Pop(1)
0x125b: Push((int) 11322)
0x125c: @@ SetMessage(Stack[-1])
0x125d: Pop(1)
0x125e: @@ ClearReplies()
0x125f: Pop(0)
0x1260: Push((int) 11429)
0x1261: Push((int) 12522)
0x1262: Push((int) 12629)
0x1263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1264: Pop(3)
0x1265: Push((int) 11323)
0x1266: Push((int) 12518)
0x1267: Push((int) 12517)
0x1268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1269: Pop(3)
0x126a: Return(); Pop(0)

0x126b: Push((int) 12518)
0x126c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126d: IF (Stack[-1] == 0) GOTO 0x127d; Pop(1)

0x126e: PushEmpty(string)
0x126f: Stack[-1] = "Neutral"
0x1270: Call 0x1180

0x1271: Pop(1)
0x1272: Push((int) 11324)
0x1273: @@ SetMessage(Stack[-1])
0x1274: Pop(1)
0x1275: @@ ClearReplies()
0x1276: Pop(0)
0x1277: Push((int) 11455)
0x1278: Push((int) 12522)
0x1279: Push((int) 12659)
0x127a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127b: Pop(3)
0x127c: Return(); Pop(0)

0x127d: Push((int) 12522)
0x127e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127f: IF (Stack[-1] == 0) GOTO 0x1294; Pop(1)

0x1280: PushEmpty(string)
0x1281: Stack[-1] = "Neutral"
0x1282: Call 0x1180

0x1283: Pop(1)
0x1284: Push((int) 11328)
0x1285: @@ SetMessage(Stack[-1])
0x1286: Pop(1)
0x1287: @@ ClearReplies()
0x1288: Pop(0)
0x1289: Push((int) 11329)
0x128a: Push((int) 12524)
0x128b: Push((int) 12523)
0x128c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128d: Pop(3)
0x128e: Push((int) 11456)
0x128f: Push((int) 12661)
0x1290: Push((int) 12660)
0x1291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1292: Pop(3)
0x1293: Return(); Pop(0)

0x1294: Push((int) 12661)
0x1295: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1296: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x1297: PushEmpty(string)
0x1298: Stack[-1] = "Neutral"
0x1299: Call 0x1180

0x129a: Pop(1)
0x129b: Push((int) 11457)
0x129c: @@ SetMessage(Stack[-1])
0x129d: Pop(1)
0x129e: @@ ClearReplies()
0x129f: Pop(0)
0x12a0: Push((int) 11458)
0x12a1: Push((int) 12663)
0x12a2: Push((int) 12662)
0x12a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a4: Pop(3)
0x12a5: Return(); Pop(0)

0x12a6: Push((int) 12663)
0x12a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a8: IF (Stack[-1] == 0) GOTO 0x12bd; Pop(1)

0x12a9: PushEmpty(string)
0x12aa: Stack[-1] = "Neutral"
0x12ab: Call 0x1180

0x12ac: Pop(1)
0x12ad: Push((int) 11459)
0x12ae: @@ SetMessage(Stack[-1])
0x12af: Pop(1)
0x12b0: @@ ClearReplies()
0x12b1: Pop(0)
0x12b2: Push((int) 11460)
0x12b3: Push((int) 12665)
0x12b4: Push((int) 12664)
0x12b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b6: Pop(3)
0x12b7: Push((int) 11462)
0x12b8: Push((int) 12667)
0x12b9: Push((int) 12666)
0x12ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12bb: Pop(3)
0x12bc: Return(); Pop(0)

0x12bd: Push((int) 12667)
0x12be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12bf: IF (Stack[-1] == 0) GOTO 0x12cf; Pop(1)

0x12c0: PushEmpty(string)
0x12c1: Stack[-1] = "Neutral"
0x12c2: Call 0x1180

0x12c3: Pop(1)
0x12c4: Push((int) 11463)
0x12c5: @@ SetMessage(Stack[-1])
0x12c6: Pop(1)
0x12c7: @@ ClearReplies()
0x12c8: Pop(0)
0x12c9: Push((int) 11465)
0x12ca: Push((int) 12524)
0x12cb: Push((int) 12669)
0x12cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12cd: Pop(3)
0x12ce: Return(); Pop(0)

0x12cf: Push((int) 12665)
0x12d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d1: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12d2: PushEmpty(string)
0x12d3: Stack[-1] = "Neutral"
0x12d4: Call 0x1180

0x12d5: Pop(1)
0x12d6: Push((int) 11461)
0x12d7: @@ SetMessage(Stack[-1])
0x12d8: Pop(1)
0x12d9: @@ ClearReplies()
0x12da: Pop(0)
0x12db: Push((int) 11466)
0x12dc: Push((int) 12524)
0x12dd: Push((int) 12670)
0x12de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12df: Pop(3)
0x12e0: Return(); Pop(0)

0x12e1: Push((int) 12524)
0x12e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e3: IF (Stack[-1] == 0) GOTO 0x12f3; Pop(1)

0x12e4: PushEmpty(string)
0x12e5: Stack[-1] = "Neutral"
0x12e6: Call 0x1180

0x12e7: Pop(1)
0x12e8: Push((int) 11330)
0x12e9: @@ SetMessage(Stack[-1])
0x12ea: Pop(1)
0x12eb: @@ ClearReplies()
0x12ec: Pop(0)
0x12ed: Push((int) 11331)
0x12ee: Push((int) 12526)
0x12ef: Push((int) 12525)
0x12f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f1: Pop(3)
0x12f2: Return(); Pop(0)

0x12f3: Push((int) 12526)
0x12f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f5: IF (Stack[-1] == 0) GOTO 0x130a; Pop(1)

0x12f6: PushEmpty(string)
0x12f7: Stack[-1] = "Neutral"
0x12f8: Call 0x1180

0x12f9: Pop(1)
0x12fa: Push((int) 11332)
0x12fb: @@ SetMessage(Stack[-1])
0x12fc: Pop(1)
0x12fd: @@ ClearReplies()
0x12fe: Pop(0)
0x12ff: Push((int) 11333)
0x1300: Push((int) -1)
0x1301: Push((int) 12527)
0x1302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1303: Pop(3)
0x1304: Push((int) 11464)
0x1305: Push((int) 12673)
0x1306: Push((int) 12668)
0x1307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1308: Pop(3)
0x1309: Return(); Pop(0)

0x130a: Push((int) 12673)
0x130b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130c: IF (Stack[-1] == 0) GOTO 0x131c; Pop(1)

0x130d: PushEmpty(string)
0x130e: Stack[-1] = "Neutral"
0x130f: Call 0x1180

0x1310: Pop(1)
0x1311: Push((int) 11467)
0x1312: @@ SetMessage(Stack[-1])
0x1313: Pop(1)
0x1314: @@ ClearReplies()
0x1315: Pop(0)
0x1316: Push((int) 11468)
0x1317: Push((int) -1)
0x1318: Push((int) 12674)
0x1319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131a: Pop(3)
0x131b: Return(); Pop(0)

0x131c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x131d: PushEmpty(bool)
0x131e: Call 0x13f4

0x131f: Pop(0)
0x1320: IF (Stack[-1] == 0) GOTO 0x1324; Pop(1)

0x1321: @ lshStopAnimation()
0x1322: Pop(0)
0x1323: GOTO 0x1326

0x1324: @ StopAnimation()
0x1325: Pop(0)
0x1326: Return(); Pop(0)

0x1327: GOTO 0x1191

0x1328: Return(); Pop(0)

0x1329: PushEmpty(int, int)
0x132a: @@ GetProperty(Stack[-4], Stack[-1])
0x132b: Pop(0)
0x132c: Pop(0); Push(Stack[-1] + Stack[-3]);
0x132d: @@ SetProperty(Stack[-5], Stack[-1])
0x132e: Pop(1)
0x132f: Return(); Pop(2)

0x1330: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1331: @@ GetPosition(Stack[-4])
0x1332: Pop(0)
0x1333: @ GetPosition(Stack[-3])
0x1334: Pop(0)
0x1335: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1336: Push(CvectorIndex(Stack[-2], 0))
0x1337: Push(CvectorIndex(Stack[-3], 2))
0x1338: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1339: Pop(2)
0x133a: Stack[-10] = Stack[-1]
0x133b: Return(); Pop(8)

0x133c: PushEmpty(bool, bool)
0x133d: @ IsLoaded(Stack[-1])
0x133e: Pop(0)
0x133f: Stack[-3] = Stack[-1]
0x1340: Return(); Pop(2)

0x1341: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1342: @@ GetPosition(Stack[-7])
0x1343: Pop(0)
0x1344: @@ GetEyesHeight(Stack[-8])
0x1345: Pop(0)
0x1346: Push(CvectorIndex(Stack[-7], 1))
0x1347: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1348: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1349: @ GetPosition(Stack[-6])
0x134a: Pop(0)
0x134b: @ GetEyesHeight(Stack[-8])
0x134c: Pop(0)
0x134d: Push(CvectorIndex(Stack[-6], 1))
0x134e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x134f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1350: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1351: Push(CvectorIndex(Stack[-5], 1))
0x1352: Stack[-1] = (int) 0
0x1353: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1354: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1355: Pop(1); Push(Sqrt(Stack[-1]))
0x1356: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1357: Stack[-4] = -Stack[-5]; Pop(0);
0x1358: Push((int) 70)
0x1359: Pop(1); Push(Stack[-6] * Stack[-1]);
0x135a: PushEmpty(cvector, cvector)
0x135b: Push(CVector(0.0, 1.0, 0.0))
0x135c: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x135d: Call 0x1396

0x135e: Pop(1)
0x135f: Push((int) 25)
0x1360: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1361: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1362: Push(CVector(0.0, 10.0, 0.0))
0x1363: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1364: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1365: @ IsOverrideActive(Stack[-1])
0x1366: Pop(0)
0x1367: Push(Stack[-1])
0x1368: IF (Stack[-1] == 0) GOTO 0x136b; Pop(1)

0x1369: Stack[-18] = (bool) 0
0x136a: Return(); Pop(16)

0x136b: @ StopWorld()
0x136c: Pop(0)
0x136d: @ CameraTransit(Stack[-2], Stack[-4])
0x136e: Pop(0)
0x136f: Push(CvectorIndex(Stack[-3], 0))
0x1370: Push(CvectorIndex(Stack[-4], 2))
0x1371: @ Rotate(Stack[-2], Stack[-1])
0x1372: Pop(2)
0x1373: @ CameraWaitForPlayFinish()
0x1374: Pop(0)
0x1375: @ ResumeWorld()
0x1376: Pop(0)
0x1377: Stack[-18] = (bool) 1
0x1378: Return(); Pop(16)

0x1379: PushEmpty()
0x137a: @ CameraSwitchToNormal()
0x137b: Pop(0)
0x137c: Return(); Pop(0)

0x137d: PushEmpty(float, float, float, float)
0x137e: Push("playing ")
0x137f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1380: @ Trace(Stack[-1])
0x1381: Pop(1)
0x1382: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1383: Pop(0)
0x1384: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1385: Pop(0)
0x1386: Push("start: ")
0x1387: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1388: @ Trace(Stack[-1])
0x1389: Pop(1)
0x138a: Push("end: ")
0x138b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x138c: @ Trace(Stack[-1])
0x138d: Pop(1)
0x138e: Return(); Pop(4)

0x138f: PushEmpty(bool)
0x1390: Call 0x13f4

0x1391: Pop(0)
0x1392: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x1393: @ lshStopSpeech()
0x1394: Pop(0)
0x1395: Return(); Pop(0)

0x1396: PushEmpty(float, float)
0x1397: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1398: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1399: Push((float)0.0)
0x139a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x139b: IF (Stack[-1] == 0) GOTO 0x139e; Pop(1)

0x139c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x139d: Return(); Pop(2)

0x139e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x139f: Return(); Pop(2)

0x13a0: PushEmpty(int, int)
0x13a1: @ GetVariable(Stack[-3], Stack[-1])
0x13a2: Pop(0)
0x13a3: Stack[-4] = Stack[-1]
0x13a4: Return(); Pop(2)

0x13a5: PushEmpty(int, int, bool, int, int, bool)
0x13a6: @@ GetItemID(Stack[-3])
0x13a7: Pop(0)
0x13a8: Push("Category")
0x13a9: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x13aa: Pop(1)
0x13ab: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x13ac: Pop(0)
0x13ad: Pop(0); Push((bool) Stack[-1] == 0)
0x13ae: IF (Stack[-1] == 0) GOTO 0x13b1; Pop(1)

0x13af: @@ DropItems(Stack[-8], Stack[-7])
0x13b0: Pop(0)
0x13b1: Return(); Pop(6)

0x13b2: PushEmpty(object, object)
0x13b3: @ CreateInvItem(Stack[-1])
0x13b4: Pop(0)
0x13b5: @@ SetItemName(Stack[-4])
0x13b6: Pop(0)
0x13b7: PushEmpty(object, object, int)
0x13b8: Stack[-3] = Stack[-8]
0x13b9: Stack[-2] = Stack[-4]
0x13ba: Stack[-1] = Stack[-6]
0x13bb: Call 0x13a5

0x13bc: Pop(3)
0x13bd: Return(); Pop(2)

0x13be: Stack[-1] = 0
0x13bf: PushEmpty(object, object)
0x13c0: @ FindActor(Stack[-1], Stack[-4])
0x13c1: Pop(0)
0x13c2: Pop(0); Push((bool) Stack[-1] == 0)
0x13c3: IF (Stack[-1] == 0) GOTO 0x13c6; Pop(1)

0x13c4: Stack[-5] = (bool) 0
0x13c5: Return(); Pop(2)

0x13c6: @ Trigger(Stack[-1], Stack[-3])
0x13c7: Pop(0)
0x13c8: Stack[-5] = (bool) 1
0x13c9: Return(); Pop(2)

0x13ca: Stack[-1] = 0
0x13cb: PushEmpty(float, float)
0x13cc: @ GetGameTime(Stack[-1])
0x13cd: Pop(0)
0x13ce: Stack[-3] = Stack[-1]
0x13cf: Return(); Pop(2)

0x13d0: PushEmpty(float, float)
0x13d1: @ GetGameTime(Stack[-1])
0x13d2: Pop(0)
0x13d3: Push((int) 1)
0x13d4: PushEmpty(int)
0x13d5: Push((int) 24)
0x13d6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x13d7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x13d8: Return(); Pop(2)

0x13d9: PushEmpty(float, float)
0x13da: @ GetGameTime(Stack[-1])
0x13db: Pop(0)
0x13dc: PushEmpty(int)
0x13dd: Stack[-1] = Stack[-2]
0x13de: Push((int) 24)
0x13df: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x13e0: Return(); Pop(2)

0x13e1: PushEmpty()
0x13e2: PushEmpty(int)
0x13e3: Call 0x13d0

0x13e4: Pop(0)
0x13e5: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x13e6: Return(); Pop(0)

0x13e7: PushEmpty(bool, bool)
0x13e8: PushEmpty(string)
0x13e9: Stack[-1] = "No"
0x13ea: Call 0x137d

0x13eb: Pop(1)
0x13ec: @ lshWaitForAnimEnd(Stack[-1])
0x13ed: Pop(0)
0x13ee: Stack[-3] = Stack[-1]
0x13ef: Return(); Pop(2)

0x13f0: Stack[-1] = (int) 2862
0x13f1: Return(); Pop(0)

0x13f2: Stack[-1] = "ui/NPC_Julia.png"
0x13f3: Return(); Pop(0)

0x13f4: Stack[-1] = (bool) 1
0x13f5: Return(); Pop(0)

0x13f6: PushEmpty()
0x13f7: Push("ood1Julia1")
0x13f8: Push((int) 1)
0x13f9: @ SetVariable(Stack[-2], Stack[-1])
0x13fa: Pop(2)
0x13fb: Return(); Pop(0)

0x13fc: PushEmpty()
0x13fd: Push("ood1Julia2")
0x13fe: Push((int) 1)
0x13ff: @ SetVariable(Stack[-2], Stack[-1])
0x1400: Pop(2)
0x1401: Return(); Pop(0)

0x1402: PushEmpty()
0x1403: Push("ood1Julia3")
0x1404: Push((int) 1)
0x1405: @ SetVariable(Stack[-2], Stack[-1])
0x1406: Pop(2)
0x1407: Return(); Pop(0)

0x1408: PushEmpty()
0x1409: Push("money1000 is given")
0x140a: @ Trace(Stack[-1])
0x140b: Pop(1)
0x140c: PushEmpty(object, string, int)
0x140d: Stack[-3] = Stack[-5]
0x140e: Stack[-2] = "money"
0x140f: Stack[-1] = (int) 1000
0x1410: Call 0x1329

0x1411: Pop(3)
0x1412: Return(); Pop(0)

0x1413: PushEmpty()
0x1414: Push("playsound")
0x1415: Push("givemoney")
0x1416: @ TriggerWorld(Stack[-2], Stack[-1])
0x1417: Pop(2)
0x1418: Return(); Pop(0)

0x1419: PushEmpty()
0x141a: Push("playsound")
0x141b: Push("giveitem")
0x141c: @ TriggerWorld(Stack[-2], Stack[-1])
0x141d: Pop(2)
0x141e: Return(); Pop(0)

0x141f: PushEmpty()
0x1420: Push("ood2Julia1")
0x1421: Push((int) 1)
0x1422: @ SetVariable(Stack[-2], Stack[-1])
0x1423: Pop(2)
0x1424: Return(); Pop(0)

0x1425: PushEmpty()
0x1426: Push("KnowBurahDead")
0x1427: Push((int) 1)
0x1428: @ SetVariable(Stack[-2], Stack[-1])
0x1429: Pop(2)
0x142a: Return(); Pop(0)

0x142b: PushEmpty()
0x142c: Push("ood1Julia4")
0x142d: Push((int) 1)
0x142e: @ SetVariable(Stack[-2], Stack[-1])
0x142f: Pop(2)
0x1430: Return(); Pop(0)

0x1431: PushEmpty()
0x1432: Push("ood1Julia5")
0x1433: Push((int) 1)
0x1434: @ SetVariable(Stack[-2], Stack[-1])
0x1435: Pop(2)
0x1436: Return(); Pop(0)

0x1437: PushEmpty()
0x1438: Push("ood1Julia6")
0x1439: Push((int) 1)
0x143a: @ SetVariable(Stack[-2], Stack[-1])
0x143b: Pop(2)
0x143c: Return(); Pop(0)

0x143d: PushEmpty()
0x143e: Push("ood1Julia7")
0x143f: Push((int) 1)
0x1440: @ SetVariable(Stack[-2], Stack[-1])
0x1441: Pop(2)
0x1442: Return(); Pop(0)

0x1443: PushEmpty()
0x1444: Push("ood1Julia8")
0x1445: Push((int) 1)
0x1446: @ SetVariable(Stack[-2], Stack[-1])
0x1447: Pop(2)
0x1448: Return(); Pop(0)

0x1449: PushEmpty()
0x144a: Push("ood1Julia9")
0x144b: Push((int) 1)
0x144c: @ SetVariable(Stack[-2], Stack[-1])
0x144d: Pop(2)
0x144e: Return(); Pop(0)

0x144f: PushEmpty()
0x1450: Push("d1q01KnowEpidemic")
0x1451: Push((int) 1)
0x1452: @ SetVariable(Stack[-2], Stack[-1])
0x1453: Pop(2)
0x1454: PushEmpty()
0x1455: Call 0x1809

0x1456: Pop(0)
0x1457: Return(); Pop(0)

0x1458: PushEmpty()
0x1459: Push("ood1Julia10")
0x145a: Push((int) 1)
0x145b: @ SetVariable(Stack[-2], Stack[-1])
0x145c: Pop(2)
0x145d: Return(); Pop(0)

0x145e: PushEmpty()
0x145f: Push("KnowJulia")
0x1460: Push((int) 1)
0x1461: @ SetVariable(Stack[-2], Stack[-1])
0x1462: Pop(2)
0x1463: Return(); Pop(0)

0x1464: PushEmpty()
0x1465: Push("KnowRubin")
0x1466: Push((int) 1)
0x1467: @ SetVariable(Stack[-2], Stack[-1])
0x1468: Pop(2)
0x1469: Return(); Pop(0)

0x146a: PushEmpty()
0x146b: Push("ood4Julia1")
0x146c: Push((int) 1)
0x146d: @ SetVariable(Stack[-2], Stack[-1])
0x146e: Pop(2)
0x146f: Return(); Pop(0)

0x1470: PushEmpty()
0x1471: Push("d4q02JuliaGivesMedcine")
0x1472: Push((int) 1)
0x1473: @ SetVariable(Stack[-2], Stack[-1])
0x1474: Pop(2)
0x1475: Return(); Pop(0)

0x1476: PushEmpty(object, object)
0x1477: PushEmpty(bool)
0x1478: Stack[-1] = (bool) 0
0x1479: PushEmpty(bool)
0x147a: Stack[-1] = (bool) 0
0x147b: PushEmpty(int, string)
0x147c: Stack[-1] = "d4q02AnnaGivesMedcine"
0x147d: Call 0x13a0

0x147e: Pop(1)
0x147f: Push((int) 1)
0x1480: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1481: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1482: PushEmpty(int, string)
0x1483: Stack[-1] = "d4q02JuliaGivesMedcine"
0x1484: Call 0x13a0

0x1485: Pop(1)
0x1486: Push((int) 1)
0x1487: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1488: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1489: Stack[-1] = (bool) 1
0x148a: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x148b: PushEmpty(int, string)
0x148c: Stack[-1] = "d4q02LaraGivesMedcine"
0x148d: Call 0x13a0

0x148e: Pop(1)
0x148f: Push((int) 1)
0x1490: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1491: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1492: Stack[-1] = (bool) 1
0x1493: IF (Stack[-1] == 0) GOTO 0x14b9; Pop(1)

0x1494: Push("d4q02")
0x1495: Push((int) 2)
0x1496: @ SetVariable(Stack[-2], Stack[-1])
0x1497: Pop(2)
0x1498: PushEmpty(object)
0x1499: Call 0x17c6

0x149a: Stack[-2] = Stack[-1]
0x149b: Pop(1)
0x149c: Push("d4q02BirdmaskNearHome")
0x149d: Push("pt_d4q02_birdmask")
0x149e: Push((int) 0)
0x149f: Push((int) 11842)
0x14a0: PushEmpty(float)
0x14a1: Call 0x13cb

0x14a2: Pop(0)
0x14a3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14a4: Pop(5)
0x14a5: PushEmpty(bool, string, string)
0x14a6: Stack[-2] = "quest_d4_02"
0x14a7: Stack[-1] = "birdmask"
0x14a8: Call 0x13bf

0x14a9: Pop(3)
0x14aa: PushEmpty(object, string, float)
0x14ab: PushEmpty(object)
0x14ac: Call 0x17c6

0x14ad: Stack[-4] = Stack[-1]
0x14ae: Pop(1)
0x14af: Stack[-2] = "pt_d4q02_birdmask"
0x14b0: Stack[-1] = (int) 2
0x14b1: Call 0x17d7

0x14b2: Pop(3)
0x14b3: PushEmpty(object)
0x14b4: Call 0x17c6

0x14b5: Pop(0)
0x14b6: @@ ShowMap(Stack[-1])
0x14b7: Pop(1)
0x14b8: Stack[-1] = 0
0x14b9: Return(); Pop(2)

0x14ba: PushEmpty()
0x14bb: Push("ood4Julia2")
0x14bc: Push((int) 1)
0x14bd: @ SetVariable(Stack[-2], Stack[-1])
0x14be: Pop(2)
0x14bf: Return(); Pop(0)

0x14c0: PushEmpty()
0x14c1: Push("KnowMistresses")
0x14c2: Push((int) 1)
0x14c3: @ SetVariable(Stack[-2], Stack[-1])
0x14c4: Pop(2)
0x14c5: Return(); Pop(0)

0x14c6: PushEmpty()
0x14c7: Push("ood6Julia1")
0x14c8: Push((int) 1)
0x14c9: @ SetVariable(Stack[-2], Stack[-1])
0x14ca: Pop(2)
0x14cb: Return(); Pop(0)

0x14cc: PushEmpty()
0x14cd: Push("ood6Julia2")
0x14ce: Push((int) 1)
0x14cf: @ SetVariable(Stack[-2], Stack[-1])
0x14d0: Pop(2)
0x14d1: Return(); Pop(0)

0x14d2: PushEmpty()
0x14d3: PushEmpty()
0x14d4: Call 0x1819

0x14d5: Pop(0)
0x14d6: Push("julia blood is given")
0x14d7: @ Trace(Stack[-1])
0x14d8: Pop(1)
0x14d9: PushEmpty(object, string, int)
0x14da: Stack[-3] = Stack[-5]
0x14db: Stack[-2] = "d6q01_julia_blood"
0x14dc: Stack[-1] = (int) 1
0x14dd: Call 0x13b2

0x14de: Pop(3)
0x14df: Return(); Pop(0)

0x14e0: PushEmpty()
0x14e1: Push("playsound")
0x14e2: Push("giveitem")
0x14e3: @ TriggerWorld(Stack[-2], Stack[-1])
0x14e4: Pop(2)
0x14e5: Return(); Pop(0)

0x14e6: PushEmpty(object, object, object, object)
0x14e7: Push("d6q01JuliaVolonteer")
0x14e8: Push((int) 1)
0x14e9: @ SetVariable(Stack[-2], Stack[-1])
0x14ea: Pop(2)
0x14eb: PushEmpty(object)
0x14ec: Call 0x17c6

0x14ed: Stack[-3] = Stack[-1]
0x14ee: Pop(1)
0x14ef: Push("d6q01AlexandrGotoJulia")
0x14f0: @@ FindMark(Stack[-2], Stack[-1])
0x14f1: Pop(1)
0x14f2: Push(Stack[-1])
0x14f3: IF (Stack[-1] == 0) GOTO 0x14f6; Pop(1)

0x14f4: @@ Remove()
0x14f5: Pop(0)
0x14f6: Push("d6q01AlexandrGotoKaterina")
0x14f7: @@ FindMark(Stack[-2], Stack[-1])
0x14f8: Pop(1)
0x14f9: Push(Stack[-1])
0x14fa: IF (Stack[-1] == 0) GOTO 0x14fd; Pop(1)

0x14fb: @@ Remove()
0x14fc: Pop(0)
0x14fd: Push("d6q01AlexandrGotoLara")
0x14fe: @@ FindMark(Stack[-2], Stack[-1])
0x14ff: Pop(1)
0x1500: Push(Stack[-1])
0x1501: IF (Stack[-1] == 0) GOTO 0x1504; Pop(1)

0x1502: @@ Remove()
0x1503: Pop(0)
0x1504: Push("d6q01AlexangrGotoJulLaraSelf")
0x1505: @@ FindMark(Stack[-2], Stack[-1])
0x1506: Pop(1)
0x1507: Push(Stack[-1])
0x1508: IF (Stack[-1] == 0) GOTO 0x150b; Pop(1)

0x1509: @@ Remove()
0x150a: Pop(0)
0x150b: Push("d6q01BigVladGotoAnna")
0x150c: @@ FindMark(Stack[-2], Stack[-1])
0x150d: Pop(1)
0x150e: Push(Stack[-1])
0x150f: IF (Stack[-1] == 0) GOTO 0x1512; Pop(1)

0x1510: @@ Remove()
0x1511: Pop(0)
0x1512: Push("d6q01BigVladGotoAnnaOspinaSelf")
0x1513: @@ FindMark(Stack[-2], Stack[-1])
0x1514: Pop(1)
0x1515: Push(Stack[-1])
0x1516: IF (Stack[-1] == 0) GOTO 0x1519; Pop(1)

0x1517: @@ Remove()
0x1518: Pop(0)
0x1519: Push("d6q01BigVladGotoOspina")
0x151a: @@ FindMark(Stack[-2], Stack[-1])
0x151b: Pop(1)
0x151c: Push(Stack[-1])
0x151d: IF (Stack[-1] == 0) GOTO 0x1520; Pop(1)

0x151e: @@ Remove()
0x151f: Pop(0)
0x1520: Push("d6q01KaterinaGotoLaska")
0x1521: @@ FindMark(Stack[-2], Stack[-1])
0x1522: Pop(1)
0x1523: Push(Stack[-1])
0x1524: IF (Stack[-1] == 0) GOTO 0x1527; Pop(1)

0x1525: @@ Remove()
0x1526: Pop(0)
0x1527: Push("d6q01KaterinagotoLaskaSelf")
0x1528: @@ FindMark(Stack[-2], Stack[-1])
0x1529: Pop(1)
0x152a: Push(Stack[-1])
0x152b: IF (Stack[-1] == 0) GOTO 0x152e; Pop(1)

0x152c: @@ Remove()
0x152d: Pop(0)
0x152e: Push("d6q01KillerIsKlara")
0x152f: @@ FindMark(Stack[-2], Stack[-1])
0x1530: Pop(1)
0x1531: Push(Stack[-1])
0x1532: IF (Stack[-1] == 0) GOTO 0x1535; Pop(1)

0x1533: @@ Remove()
0x1534: Pop(0)
0x1535: Push("d6q01LaskaGotoAlbinos")
0x1536: @@ FindMark(Stack[-2], Stack[-1])
0x1537: Pop(1)
0x1538: Push(Stack[-1])
0x1539: IF (Stack[-1] == 0) GOTO 0x153c; Pop(1)

0x153a: @@ Remove()
0x153b: Pop(0)
0x153c: Push("d6q01ViktorGotoAlexandr")
0x153d: @@ FindMark(Stack[-2], Stack[-1])
0x153e: Pop(1)
0x153f: Push(Stack[-1])
0x1540: IF (Stack[-1] == 0) GOTO 0x1543; Pop(1)

0x1541: @@ Remove()
0x1542: Pop(0)
0x1543: Push("d6q01ViktorGotoAlxBigSelf")
0x1544: @@ FindMark(Stack[-2], Stack[-1])
0x1545: Pop(1)
0x1546: Push(Stack[-1])
0x1547: IF (Stack[-1] == 0) GOTO 0x154a; Pop(1)

0x1548: @@ Remove()
0x1549: Pop(0)
0x154a: Push("d6q01ViktorGotoBigVlad")
0x154b: @@ FindMark(Stack[-2], Stack[-1])
0x154c: Pop(1)
0x154d: Push(Stack[-1])
0x154e: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x154f: @@ Remove()
0x1550: Pop(0)
0x1551: PushEmpty()
0x1552: Call 0x1829

0x1553: Pop(0)
0x1554: PushEmpty(bool, int)
0x1555: Stack[-1] = (int) 112
0x1556: Call 0x17b5

0x1557: Pop(2)
0x1558: PushEmpty(bool, int)
0x1559: Stack[-1] = (int) 113
0x155a: Call 0x17b5

0x155b: Pop(2)
0x155c: PushEmpty(bool, int)
0x155d: Stack[-1] = (int) 114
0x155e: Call 0x17b5

0x155f: Pop(2)
0x1560: PushEmpty(bool, int)
0x1561: Stack[-1] = (int) 115
0x1562: Call 0x17b5

0x1563: Pop(2)
0x1564: PushEmpty(bool, int)
0x1565: Stack[-1] = (int) 116
0x1566: Call 0x17b5

0x1567: Pop(2)
0x1568: PushEmpty(bool, int)
0x1569: Stack[-1] = (int) 117
0x156a: Call 0x17b5

0x156b: Pop(2)
0x156c: PushEmpty(bool, string, string)
0x156d: Stack[-2] = "quest_d6_01"
0x156e: Stack[-1] = "completed"
0x156f: Call 0x13bf

0x1570: Pop(3)
0x1571: Return(); Pop(4)

0x1572: Stack[-1] = 0
0x1573: Stack[-2] = 0
0x1574: PushEmpty()
0x1575: Return(); Pop(0)

0x1576: PushEmpty()
0x1577: Push("feromicin is given")
0x1578: @ Trace(Stack[-1])
0x1579: Pop(1)
0x157a: PushEmpty(object, string, int)
0x157b: Stack[-3] = Stack[-5]
0x157c: Stack[-2] = "feromicin"
0x157d: Stack[-1] = (int) 1
0x157e: Call 0x13b2

0x157f: Pop(3)
0x1580: Return(); Pop(0)

0x1581: PushEmpty()
0x1582: Push("ood3Julia1")
0x1583: Push((int) 1)
0x1584: @ SetVariable(Stack[-2], Stack[-1])
0x1585: Pop(2)
0x1586: Return(); Pop(0)

0x1587: PushEmpty()
0x1588: Push("neomicin is given")
0x1589: @ Trace(Stack[-1])
0x158a: Pop(1)
0x158b: PushEmpty(object, string, int)
0x158c: Stack[-3] = Stack[-5]
0x158d: Stack[-2] = "neomicin"
0x158e: Stack[-1] = (int) 1
0x158f: Call 0x13b2

0x1590: Pop(3)
0x1591: Return(); Pop(0)

0x1592: PushEmpty()
0x1593: Push("monomicin is given")
0x1594: @ Trace(Stack[-1])
0x1595: Pop(1)
0x1596: PushEmpty(object, string, int)
0x1597: Stack[-3] = Stack[-5]
0x1598: Stack[-2] = "monomicin"
0x1599: Stack[-1] = (int) 1
0x159a: Call 0x13b2

0x159b: Pop(3)
0x159c: Return(); Pop(0)

0x159d: PushEmpty()
0x159e: PushEmpty(int, string)
0x159f: Stack[-1] = "ood1Julia1"
0x15a0: Call 0x13a0

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
0x15ab: Stack[-1] = "ood1Julia2"
0x15ac: Call 0x13a0

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
0x15b7: Stack[-1] = "ood1Julia3"
0x15b8: Call 0x13a0

0x15b9: Pop(1)
0x15ba: Push((int) 0)
0x15bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15bc: IF (Stack[-1] == 0) GOTO 0x15bf; Pop(1)

0x15bd: Stack[-2] = (bool) 1
0x15be: Return(); Pop(0)

0x15bf: Stack[-2] = (bool) 0
0x15c0: Return(); Pop(0)

0x15c1: PushEmpty()
0x15c2: PushEmpty(int, string)
0x15c3: Stack[-1] = "d1q01"
0x15c4: Call 0x13a0

0x15c5: Pop(1)
0x15c6: Push((int) 1000)
0x15c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c8: IF (Stack[-1] == 0) GOTO 0x15cb; Pop(1)

0x15c9: Stack[-2] = (bool) 1
0x15ca: Return(); Pop(0)

0x15cb: Stack[-2] = (bool) 0
0x15cc: Return(); Pop(0)

0x15cd: PushEmpty()
0x15ce: PushEmpty(int, string)
0x15cf: Stack[-1] = "d1q01"
0x15d0: Call 0x13a0

0x15d1: Pop(1)
0x15d2: Push((int) 0)
0x15d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15d4: IF (Stack[-1] == 0) GOTO 0x15d7; Pop(1)

0x15d5: Stack[-2] = (bool) 1
0x15d6: Return(); Pop(0)

0x15d7: Stack[-2] = (bool) 0
0x15d8: Return(); Pop(0)

0x15d9: PushEmpty()
0x15da: PushEmpty(int, string)
0x15db: Stack[-1] = "d1q01FirstGeorgVisit"
0x15dc: Call 0x13a0

0x15dd: Pop(1)
0x15de: Push((int) 1)
0x15df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e0: IF (Stack[-1] == 0) GOTO 0x15e3; Pop(1)

0x15e1: Stack[-2] = (bool) 1
0x15e2: Return(); Pop(0)

0x15e3: Stack[-2] = (bool) 0
0x15e4: Return(); Pop(0)

0x15e5: PushEmpty()
0x15e6: PushEmpty(int, string)
0x15e7: Stack[-1] = "KnowDiamAce"
0x15e8: Call 0x13a0

0x15e9: Pop(1)
0x15ea: Push((int) 1)
0x15eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ec: IF (Stack[-1] == 0) GOTO 0x15ef; Pop(1)

0x15ed: Stack[-2] = (bool) 1
0x15ee: Return(); Pop(0)

0x15ef: Stack[-2] = (bool) 0
0x15f0: Return(); Pop(0)

0x15f1: PushEmpty()
0x15f2: PushEmpty(int, string)
0x15f3: Stack[-1] = "ood2Julia1"
0x15f4: Call 0x13a0

0x15f5: Pop(1)
0x15f6: Push((int) 0)
0x15f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f8: IF (Stack[-1] == 0) GOTO 0x15fb; Pop(1)

0x15f9: Stack[-2] = (bool) 1
0x15fa: Return(); Pop(0)

0x15fb: Stack[-2] = (bool) 0
0x15fc: Return(); Pop(0)

0x15fd: PushEmpty()
0x15fe: PushEmpty(int, string)
0x15ff: Stack[-1] = "d2q03"
0x1600: Call 0x13a0

0x1601: Pop(1)
0x1602: Push((int) 1)
0x1603: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1604: IF (Stack[-1] == 0) GOTO 0x1607; Pop(1)

0x1605: Stack[-2] = (bool) 1
0x1606: Return(); Pop(0)

0x1607: Stack[-2] = (bool) 0
0x1608: Return(); Pop(0)

0x1609: PushEmpty()
0x160a: PushEmpty(int, string)
0x160b: Stack[-1] = "ood1Julia4"
0x160c: Call 0x13a0

0x160d: Pop(1)
0x160e: Push((int) 0)
0x160f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1610: IF (Stack[-1] == 0) GOTO 0x1613; Pop(1)

0x1611: Stack[-2] = (bool) 1
0x1612: Return(); Pop(0)

0x1613: Stack[-2] = (bool) 0
0x1614: Return(); Pop(0)

0x1615: PushEmpty()
0x1616: PushEmpty(int, string)
0x1617: Stack[-1] = "ood1Julia5"
0x1618: Call 0x13a0

0x1619: Pop(1)
0x161a: Push((int) 0)
0x161b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x161c: IF (Stack[-1] == 0) GOTO 0x161f; Pop(1)

0x161d: Stack[-2] = (bool) 1
0x161e: Return(); Pop(0)

0x161f: Stack[-2] = (bool) 0
0x1620: Return(); Pop(0)

0x1621: PushEmpty()
0x1622: PushEmpty(int, string)
0x1623: Stack[-1] = "ood1Julia6"
0x1624: Call 0x13a0

0x1625: Pop(1)
0x1626: Push((int) 0)
0x1627: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1628: IF (Stack[-1] == 0) GOTO 0x162b; Pop(1)

0x1629: Stack[-2] = (bool) 1
0x162a: Return(); Pop(0)

0x162b: Stack[-2] = (bool) 0
0x162c: Return(); Pop(0)

0x162d: PushEmpty()
0x162e: PushEmpty(int, string)
0x162f: Stack[-1] = "ood1Julia7"
0x1630: Call 0x13a0

0x1631: Pop(1)
0x1632: Push((int) 0)
0x1633: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1634: IF (Stack[-1] == 0) GOTO 0x1637; Pop(1)

0x1635: Stack[-2] = (bool) 1
0x1636: Return(); Pop(0)

0x1637: Stack[-2] = (bool) 0
0x1638: Return(); Pop(0)

0x1639: PushEmpty()
0x163a: PushEmpty(int, string)
0x163b: Stack[-1] = "ood1Julia8"
0x163c: Call 0x13a0

0x163d: Pop(1)
0x163e: Push((int) 0)
0x163f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1640: IF (Stack[-1] == 0) GOTO 0x1643; Pop(1)

0x1641: Stack[-2] = (bool) 1
0x1642: Return(); Pop(0)

0x1643: Stack[-2] = (bool) 0
0x1644: Return(); Pop(0)

0x1645: PushEmpty()
0x1646: PushEmpty(int, string)
0x1647: Stack[-1] = "ood1Julia9"
0x1648: Call 0x13a0

0x1649: Pop(1)
0x164a: Push((int) 0)
0x164b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x164c: IF (Stack[-1] == 0) GOTO 0x164f; Pop(1)

0x164d: Stack[-2] = (bool) 1
0x164e: Return(); Pop(0)

0x164f: Stack[-2] = (bool) 0
0x1650: Return(); Pop(0)

0x1651: PushEmpty()
0x1652: PushEmpty(int, string)
0x1653: Stack[-1] = "KnowViktor"
0x1654: Call 0x13a0

0x1655: Pop(1)
0x1656: Push((int) 1)
0x1657: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1658: IF (Stack[-1] == 0) GOTO 0x165b; Pop(1)

0x1659: Stack[-2] = (bool) 1
0x165a: Return(); Pop(0)

0x165b: Stack[-2] = (bool) 0
0x165c: Return(); Pop(0)

0x165d: PushEmpty()
0x165e: PushEmpty(int, string)
0x165f: Stack[-1] = "d1q01KnowEpidemic"
0x1660: Call 0x13a0

0x1661: Pop(1)
0x1662: Push((int) 1)
0x1663: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1664: IF (Stack[-1] == 0) GOTO 0x1667; Pop(1)

0x1665: Stack[-2] = (bool) 1
0x1666: Return(); Pop(0)

0x1667: Stack[-2] = (bool) 0
0x1668: Return(); Pop(0)

0x1669: PushEmpty()
0x166a: PushEmpty(int, string)
0x166b: Stack[-1] = "ood1Julia10"
0x166c: Call 0x13a0

0x166d: Pop(1)
0x166e: Push((int) 0)
0x166f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1670: IF (Stack[-1] == 0) GOTO 0x1673; Pop(1)

0x1671: Stack[-2] = (bool) 1
0x1672: Return(); Pop(0)

0x1673: Stack[-2] = (bool) 0
0x1674: Return(); Pop(0)

0x1675: PushEmpty()
0x1676: PushEmpty(int, string)
0x1677: Stack[-1] = "KnowRubin"
0x1678: Call 0x13a0

0x1679: Pop(1)
0x167a: Push((int) 1)
0x167b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x167c: IF (Stack[-1] == 0) GOTO 0x167f; Pop(1)

0x167d: Stack[-2] = (bool) 1
0x167e: Return(); Pop(0)

0x167f: Stack[-2] = (bool) 0
0x1680: Return(); Pop(0)

0x1681: PushEmpty()
0x1682: PushEmpty(bool, object)
0x1683: Stack[-1] = Stack[-3]
0x1684: Call 0x1780

0x1685: Pop(1)
0x1686: IF (Stack[-1] == 0) GOTO 0x1689; Pop(1)

0x1687: Stack[-2] = (bool) 1
0x1688: Return(); Pop(0)

0x1689: Stack[-2] = (bool) 0
0x168a: Return(); Pop(0)

0x168b: PushEmpty()
0x168c: PushEmpty(int, string)
0x168d: Stack[-1] = "d4q01"
0x168e: Call 0x13a0

0x168f: Pop(1)
0x1690: Push((int) 1)
0x1691: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1692: IF (Stack[-1] == 0) GOTO 0x1695; Pop(1)

0x1693: Stack[-2] = (bool) 1
0x1694: Return(); Pop(0)

0x1695: Stack[-2] = (bool) 0
0x1696: Return(); Pop(0)

0x1697: PushEmpty()
0x1698: PushEmpty(int, string)
0x1699: Stack[-1] = "ood4Julia1"
0x169a: Call 0x13a0

0x169b: Pop(1)
0x169c: Push((int) 0)
0x169d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x169e: IF (Stack[-1] == 0) GOTO 0x16a1; Pop(1)

0x169f: Stack[-2] = (bool) 1
0x16a0: Return(); Pop(0)

0x16a1: Stack[-2] = (bool) 0
0x16a2: Return(); Pop(0)

0x16a3: PushEmpty()
0x16a4: PushEmpty(int, string)
0x16a5: Stack[-1] = "d4q02JuliaGivesMedcine"
0x16a6: Call 0x13a0

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
0x16b1: Stack[-1] = "d4q02"
0x16b2: Call 0x13a0

0x16b3: Pop(1)
0x16b4: Push((int) 1000)
0x16b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16b6: IF (Stack[-1] == 0) GOTO 0x16b9; Pop(1)

0x16b7: Stack[-2] = (bool) 1
0x16b8: Return(); Pop(0)

0x16b9: Stack[-2] = (bool) 0
0x16ba: Return(); Pop(0)

0x16bb: PushEmpty()
0x16bc: PushEmpty(int, string)
0x16bd: Stack[-1] = "ood4Julia2"
0x16be: Call 0x13a0

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
0x16c9: Stack[-1] = "KnowMistresses"
0x16ca: Call 0x13a0

0x16cb: Pop(1)
0x16cc: Push((int) 1)
0x16cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16ce: IF (Stack[-1] == 0) GOTO 0x16d1; Pop(1)

0x16cf: Stack[-2] = (bool) 1
0x16d0: Return(); Pop(0)

0x16d1: Stack[-2] = (bool) 0
0x16d2: Return(); Pop(0)

0x16d3: PushEmpty()
0x16d4: PushEmpty(int, string)
0x16d5: Stack[-1] = "KnowMark"
0x16d6: Call 0x13a0

0x16d7: Pop(1)
0x16d8: Push((int) 1)
0x16d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16da: IF (Stack[-1] == 0) GOTO 0x16dd; Pop(1)

0x16db: Stack[-2] = (bool) 1
0x16dc: Return(); Pop(0)

0x16dd: Stack[-2] = (bool) 0
0x16de: Return(); Pop(0)

0x16df: PushEmpty()
0x16e0: PushEmpty(int, string)
0x16e1: Stack[-1] = "d6q01"
0x16e2: Call 0x13a0

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
0x16ed: Stack[-1] = "d5q01"
0x16ee: Call 0x13a0

0x16ef: Pop(1)
0x16f0: Push((int) 1000)
0x16f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16f2: IF (Stack[-1] == 0) GOTO 0x16f5; Pop(1)

0x16f3: Stack[-2] = (bool) 1
0x16f4: Return(); Pop(0)

0x16f5: Stack[-2] = (bool) 0
0x16f6: Return(); Pop(0)

0x16f7: PushEmpty()
0x16f8: PushEmpty(int, string)
0x16f9: Stack[-1] = "ood6Julia1"
0x16fa: Call 0x13a0

0x16fb: Pop(1)
0x16fc: Push((int) 0)
0x16fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16fe: IF (Stack[-1] == 0) GOTO 0x1701; Pop(1)

0x16ff: Stack[-2] = (bool) 1
0x1700: Return(); Pop(0)

0x1701: Stack[-2] = (bool) 0
0x1702: Return(); Pop(0)

0x1703: PushEmpty()
0x1704: PushEmpty(int, string)
0x1705: Stack[-1] = "ood6Julia2"
0x1706: Call 0x13a0

0x1707: Pop(1)
0x1708: Push((int) 0)
0x1709: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x170a: IF (Stack[-1] == 0) GOTO 0x170d; Pop(1)

0x170b: Stack[-2] = (bool) 1
0x170c: Return(); Pop(0)

0x170d: Stack[-2] = (bool) 0
0x170e: Return(); Pop(0)

0x170f: PushEmpty()
0x1710: PushEmpty(int, string)
0x1711: Stack[-1] = "microscope_d6q01_julia_blood"
0x1712: Call 0x13a0

0x1713: Pop(1)
0x1714: Push((int) 0)
0x1715: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1716: IF (Stack[-1] == 0) GOTO 0x1719; Pop(1)

0x1717: Stack[-2] = (bool) 1
0x1718: Return(); Pop(0)

0x1719: Stack[-2] = (bool) 0
0x171a: Return(); Pop(0)

0x171b: PushEmpty()
0x171c: Stack[-2] = (bool) 1
0x171d: Return(); Pop(0)

0x171e: Stack[-2] = (bool) 0
0x171f: Return(); Pop(0)

0x1720: PushEmpty()
0x1721: PushEmpty(int, string)
0x1722: Stack[-1] = "d6q01"
0x1723: Call 0x13a0

0x1724: Pop(1)
0x1725: Push((int) 1000)
0x1726: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1727: IF (Stack[-1] == 0) GOTO 0x172a; Pop(1)

0x1728: Stack[-2] = (bool) 1
0x1729: Return(); Pop(0)

0x172a: Stack[-2] = (bool) 0
0x172b: Return(); Pop(0)

0x172c: PushEmpty()
0x172d: PushEmpty(int, string)
0x172e: Stack[-1] = "d6q01"
0x172f: Call 0x13a0

0x1730: Pop(1)
0x1731: Push((int) -1)
0x1732: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1733: IF (Stack[-1] == 0) GOTO 0x1736; Pop(1)

0x1734: Stack[-2] = (bool) 1
0x1735: Return(); Pop(0)

0x1736: Stack[-2] = (bool) 0
0x1737: Return(); Pop(0)

0x1738: PushEmpty()
0x1739: PushEmpty(int, string)
0x173a: Stack[-1] = "KnowAnna"
0x173b: Call 0x13a0

0x173c: Pop(1)
0x173d: Push((int) 1)
0x173e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x173f: IF (Stack[-1] == 0) GOTO 0x1742; Pop(1)

0x1740: Stack[-2] = (bool) 1
0x1741: Return(); Pop(0)

0x1742: Stack[-2] = (bool) 0
0x1743: Return(); Pop(0)

0x1744: PushEmpty()
0x1745: PushEmpty(int, string)
0x1746: Stack[-1] = "KnowEva"
0x1747: Call 0x13a0

0x1748: Pop(1)
0x1749: Push((int) 1)
0x174a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x174b: IF (Stack[-1] == 0) GOTO 0x174e; Pop(1)

0x174c: Stack[-2] = (bool) 1
0x174d: Return(); Pop(0)

0x174e: Stack[-2] = (bool) 0
0x174f: Return(); Pop(0)

0x1750: PushEmpty()
0x1751: PushEmpty(int, string)
0x1752: Stack[-1] = "KnowLara"
0x1753: Call 0x13a0

0x1754: Pop(1)
0x1755: Push((int) 1)
0x1756: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1757: IF (Stack[-1] == 0) GOTO 0x175a; Pop(1)

0x1758: Stack[-2] = (bool) 1
0x1759: Return(); Pop(0)

0x175a: Stack[-2] = (bool) 0
0x175b: Return(); Pop(0)

0x175c: PushEmpty()
0x175d: PushEmpty(int, string)
0x175e: Stack[-1] = "ood3Julia1"
0x175f: Call 0x13a0

0x1760: Pop(1)
0x1761: Push((int) 0)
0x1762: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1763: IF (Stack[-1] == 0) GOTO 0x1766; Pop(1)

0x1764: Stack[-2] = (bool) 1
0x1765: Return(); Pop(0)

0x1766: Stack[-2] = (bool) 0
0x1767: Return(); Pop(0)

0x1768: PushEmpty()
0x1769: PushEmpty(int, string)
0x176a: Stack[-1] = "KnowMyth"
0x176b: Call 0x13a0

0x176c: Pop(1)
0x176d: Push((int) 1)
0x176e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x176f: IF (Stack[-1] == 0) GOTO 0x1772; Pop(1)

0x1770: Stack[-2] = (bool) 1
0x1771: Return(); Pop(0)

0x1772: Stack[-2] = (bool) 0
0x1773: Return(); Pop(0)

0x1774: PushEmpty()
0x1775: PushEmpty(int, string)
0x1776: Stack[-1] = "KnowPredictions"
0x1777: Call 0x13a0

0x1778: Pop(1)
0x1779: Push((int) 1)
0x177a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x177b: IF (Stack[-1] == 0) GOTO 0x177e; Pop(1)

0x177c: Stack[-2] = (bool) 1
0x177d: Return(); Pop(0)

0x177e: Stack[-2] = (bool) 0
0x177f: Return(); Pop(0)

0x1780: PushEmpty()
0x1781: PushEmpty(int)
0x1782: Call 0x13d9

0x1783: Pop(0)
0x1784: Push((int) 18)
0x1785: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1786: IF (Stack[-1] == 0) GOTO 0x1789; Pop(1)

0x1787: Stack[-2] = (bool) 1
0x1788: Return(); Pop(0)

0x1789: Stack[-2] = (bool) 0
0x178a: Return(); Pop(0)

0x178b: PushEmpty(object, object)
0x178c: @ GetDiaryRoot(Stack[-1])
0x178d: Pop(0)
0x178e: Pop(0); Push((bool) Stack[-1] == 0)
0x178f: IF (Stack[-1] == 0) GOTO 0x1795; Pop(1)

0x1790: Push("Can't retrieve diary root")
0x1791: @ Trace(Stack[-1])
0x1792: Pop(1)
0x1793: Stack[-3] = (bool) 0
0x1794: Return(); Pop(2)

0x1795: Stack[-3] = Stack[-1]
0x1796: Return(); Pop(2)

0x1797: Stack[-1] = 0
0x1798: PushEmpty(object, object, int, object, object, int)
0x1799: PushEmpty(object)
0x179a: Call 0x178b

0x179b: Stack[-4] = Stack[-1]
0x179c: Pop(1)
0x179d: @@ Find(Stack[-7], Stack[-2])
0x179e: Pop(0)
0x179f: Pop(0); Push((bool) Stack[-2] == 0)
0x17a0: IF (Stack[-1] == 0) GOTO 0x17a7; Pop(1)

0x17a1: Push("Can't find diary parent with id: ")
0x17a2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x17a3: @ Trace(Stack[-1])
0x17a4: Pop(1)
0x17a5: Stack[-9] = (bool) 0
0x17a6: Return(); Pop(6)

0x17a7: @@ AddChild(Stack[-8])
0x17a8: Pop(0)
0x17a9: Push("player_diary")
0x17aa: Push((int) 1)
0x17ab: @ SetVariable(Stack[-2], Stack[-1])
0x17ac: Pop(2)
0x17ad: @@ GetCategory(Stack[-1])
0x17ae: Pop(0)
0x17af: @ SetDiarySection(Stack[-1])
0x17b0: Pop(0)
0x17b1: Stack[-9] = (bool) 0
0x17b2: Return(); Pop(6)

0x17b3: Stack[-2] = 0
0x17b4: Stack[-3] = 0
0x17b5: PushEmpty(object, object, object, object)
0x17b6: PushEmpty(object)
0x17b7: Call 0x178b

0x17b8: Stack[-3] = Stack[-1]
0x17b9: Pop(1)
0x17ba: @@ Find(Stack[-5], Stack[-1])
0x17bb: Pop(0)
0x17bc: Pop(0); Push((bool) Stack[-1] == 0)
0x17bd: IF (Stack[-1] == 0) GOTO 0x17c0; Pop(1)

0x17be: Stack[-6] = (bool) 0
0x17bf: Return(); Pop(4)

0x17c0: @@ Remove()
0x17c1: Pop(0)
0x17c2: Stack[-6] = (bool) 1
0x17c3: Return(); Pop(4)

0x17c4: Stack[-1] = 0
0x17c5: Stack[-2] = 0
0x17c6: PushEmpty(object, object, object, object)
0x17c7: @ GetMainOutdoorScene(Stack[-2])
0x17c8: Pop(0)
0x17c9: Pop(0); Push((bool) Stack[-2] == 0)
0x17ca: IF (Stack[-1] == 0) GOTO 0x17d1; Pop(1)

0x17cb: Push("Can't find main outdoor scene")
0x17cc: @ Trace(Stack[-1])
0x17cd: Pop(1)
0x17ce: Stack[-1] = 0
0x17cf: Stack[-5] = Stack[-1]
0x17d0: Return(); Pop(4)

0x17d1: @@ GetMap(Stack[-1])
0x17d2: Pop(0)
0x17d3: Stack[-5] = Stack[-1]
0x17d4: Return(); Pop(4)

0x17d5: Stack[-1] = 0
0x17d6: Stack[-2] = 0
0x17d7: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x17d8: @ GetMainOutdoorScene(Stack[-2])
0x17d9: Pop(0)
0x17da: Pop(0); Push((bool) Stack[-2] == 0)
0x17db: IF (Stack[-1] == 0) GOTO 0x17e0; Pop(1)

0x17dc: Push("Can't find main outdoor scene")
0x17dd: @ Trace(Stack[-1])
0x17de: Pop(1)
0x17df: Return(); Pop(8)

0x17e0: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x17e1: Pop(0)
0x17e2: Pop(0); Push((bool) Stack[-1] == 0)
0x17e3: IF (Stack[-1] == 0) GOTO 0x17ea; Pop(1)

0x17e4: Push("Warning: outdoor scene locator ")
0x17e5: Pop(1); Push(Stack[-1] + Stack[-11]);
0x17e6: Push(" doesnt exist")
0x17e7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17e8: @ Trace(Stack[-1])
0x17e9: Pop(1)
0x17ea: @@ GetMap(Stack[-11])
0x17eb: Pop(0)
0x17ec: Pop(0); Push((bool) Stack[-11] == 0)
0x17ed: IF (Stack[-1] == 0) GOTO 0x17f2; Pop(1)

0x17ee: Push("Can't find map")
0x17ef: @ Trace(Stack[-1])
0x17f0: Pop(1)
0x17f1: Return(); Pop(8)

0x17f2: Push(CvectorIndex(Stack[-4], 0))
0x17f3: Push(CvectorIndex(Stack[-5], 2))
0x17f4: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x17f5: Pop(2)
0x17f6: Return(); Pop(8)

0x17f7: Stack[-2] = 0
0x17f8: PushEmpty(int, int)
0x17f9: Push("player")
0x17fa: @ GetVariable(Stack[-1], Stack[-2])
0x17fb: Pop(1)
0x17fc: Push((int) 0)
0x17fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17fe: IF (Stack[-1] == 0) GOTO 0x1802; Pop(1)

0x17ff: Stack[-3] = (int) 200001
0x1800: Return(); Pop(2)

0x1801: GOTO 0x1807

0x1802: Push((int) 1)
0x1803: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1804: IF (Stack[-1] == 0) GOTO 0x1807; Pop(1)

0x1805: Stack[-3] = (int) 200002
0x1806: Return(); Pop(2)

0x1807: Stack[-3] = (int) 200003
0x1808: Return(); Pop(2)

0x1809: PushEmpty(object, object)
0x180a: Push("Adding diary entry")
0x180b: @ Trace(Stack[-1])
0x180c: Pop(1)
0x180d: Push((int) 33)
0x180e: Push((int) 1)
0x180f: Push((int) 12115)
0x1810: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1811: Pop(3)
0x1812: PushEmpty(bool, object, int)
0x1813: Stack[-2] = Stack[-4]
0x1814: Stack[-1] = (int) 2
0x1815: Call 0x1798

0x1816: Pop(3)
0x1817: Return(); Pop(2)

0x1818: Stack[-1] = 0
0x1819: PushEmpty(object, object)
0x181a: Push("Adding diary entry")
0x181b: @ Trace(Stack[-1])
0x181c: Pop(1)
0x181d: Push((int) 161)
0x181e: Push((int) 1)
0x181f: Push((int) 15394)
0x1820: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1821: Pop(3)
0x1822: PushEmpty(bool, object, int)
0x1823: Stack[-2] = Stack[-4]
0x1824: Stack[-1] = (int) 111
0x1825: Call 0x1798

0x1826: Pop(3)
0x1827: Return(); Pop(2)

0x1828: Stack[-1] = 0
0x1829: PushEmpty(object, object)
0x182a: Push("Adding diary entry")
0x182b: @ Trace(Stack[-1])
0x182c: Pop(1)
0x182d: Push((int) 120)
0x182e: Push((int) 1)
0x182f: Push((int) 13743)
0x1830: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1831: Pop(3)
0x1832: PushEmpty(bool, object, int)
0x1833: Stack[-2] = Stack[-4]
0x1834: Stack[-1] = (int) 111
0x1835: Call 0x1798

0x1836: Pop(3)
0x1837: Return(); Pop(2)

0x1838: Stack[-1] = 0
0x1839: Push(GlobalVars[1])
0x183a: Stack[-1] = (bool) 0
0x183b: GlobalVars[1] = Stack[-1]; Pop(1)
0x183c: Return(); Pop(0)

0x183d: PushEmpty()
0x183e: Push(GlobalVars[1])
0x183f: Pop(1); Push((bool) Stack[-1] == 0)
0x1840: IF (Stack[-1] == 0) GOTO 0x184a; Pop(1)

0x1841: PushEmpty(int, object)
0x1842: Stack[-1] = Stack[-3]
0x1843: Push(-2, 1); TaskCall(2)
0x1844: Call 0x31

0x1845: Pop(-2, 1); TaskReturn
0x1846: Pop(2)
0x1847: Push(GlobalVars[1])
0x1848: Stack[-1] = (bool) 1
0x1849: GlobalVars[1] = Stack[-1]; Pop(1)
0x184a: PushEmpty(bool, int)
0x184b: Stack[-1] = (int) 1
0x184c: Call 0x13e1

0x184d: Pop(1)
0x184e: IF (Stack[-1] == 0) GOTO 0x1856; Pop(1)

0x184f: PushEmpty(int, object)
0x1850: Stack[-1] = Stack[-3]
0x1851: Push(-2, 1); TaskCall(6)
0x1852: Call 0x4fa

0x1853: Pop(-2, 1); TaskReturn
0x1854: Pop(2)
0x1855: Return(); Pop(0)

0x1856: PushEmpty(bool, int)
0x1857: Stack[-1] = (int) 2
0x1858: Call 0x13e1

0x1859: Pop(1)
0x185a: IF (Stack[-1] == 0) GOTO 0x1862; Pop(1)

0x185b: PushEmpty(int, object)
0x185c: Stack[-1] = Stack[-3]
0x185d: Push(-2, 1); TaskCall(8)
0x185e: Call 0xd12

0x185f: Pop(-2, 1); TaskReturn
0x1860: Pop(2)
0x1861: Return(); Pop(0)

0x1862: PushEmpty(bool, int)
0x1863: Stack[-1] = (int) 3
0x1864: Call 0x13e1

0x1865: Pop(1)
0x1866: IF (Stack[-1] == 0) GOTO 0x186e; Pop(1)

0x1867: PushEmpty(int, object)
0x1868: Stack[-1] = Stack[-3]
0x1869: Push(-2, 1); TaskCall(10)
0x186a: Call 0xf90

0x186b: Pop(-2, 1); TaskReturn
0x186c: Pop(2)
0x186d: Return(); Pop(0)

0x186e: PushEmpty(bool, int)
0x186f: Stack[-1] = (int) 4
0x1870: Call 0x13e1

0x1871: Pop(1)
0x1872: IF (Stack[-1] == 0) GOTO 0x187a; Pop(1)

0x1873: PushEmpty(int, object)
0x1874: Stack[-1] = Stack[-3]
0x1875: Push(-2, 1); TaskCall(12)
0x1876: Call 0x10db

0x1877: Pop(-2, 1); TaskReturn
0x1878: Pop(2)
0x1879: Return(); Pop(0)

0x187a: PushEmpty(bool, int)
0x187b: Stack[-1] = (int) 6
0x187c: Call 0x13e1

0x187d: Pop(1)
0x187e: IF (Stack[-1] == 0) GOTO 0x1886; Pop(1)

0x187f: PushEmpty(int, object)
0x1880: Stack[-1] = Stack[-3]
0x1881: Push(-2, 1); TaskCall(4)
0x1882: Call 0x161

0x1883: Pop(-2, 1); TaskReturn
0x1884: Pop(2)
0x1885: Return(); Pop(0)

0x1886: PushEmpty(bool)
0x1887: Call 0x13e7

0x1888: Pop(1)
0x1889: Return(); Pop(0)

