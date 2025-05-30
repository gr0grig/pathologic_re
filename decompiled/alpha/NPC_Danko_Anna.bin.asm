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
	Crying
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	.bin
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	No
	ui/NPC_Anna.png
	KnowKapella
	money100 is given
	money
	playsound
	givemoney
	giveitem
	KnowShabnak
	ood1Anna7
	ood1Anna8
	ood1Anna9
	ood1Anna10
	ood2Anna1
	ood2Anna2
	KnowPochka
	d2q01
	d2q01AnnaGotoKapella
	pt_map_kapella
	AddMark
	KnowZemlja
	d1q02AnnaGotoLaska
	pt_map_laska
	ShowMap
	d1q02
	KnowNevod
	pt_map_bigvlad
	ood3Anna1
	d3q02
	ood4Anna1
	d4q02AnnaGivesMedcine
	d4q02JuliaGivesMedcine
	d4q02LaraGivesMedcine
	d4q02
	d4q02BirdmaskNearHome
	pt_d4q02_birdmask
	quest_d4_02
	ood4Anna2
	d5q02
	d5q02AnnaGotoGorbun
	pt_map_gorbun
	d5q02AnnaGotoGorbunSelf
	pt_map_anna
	quest_d5_02
	place_gorbun
	d5q02AnnaGotoKabak
	pt_map_andrei
	KnowMistresses
	KnowNina
	KnowViktoria
	ood1Anna1
	ood1Anna2
	d5q01
	place_girl
	ood1Anna3
	ood1Anna4
	ood6Anna1
	ood6Anna2
	d6q01KnowKillerIsKlara
	d6q01KillerIsKlara
	pt_map_alexandr
	quest_d6_01
	saburov_klara
	ood1Anna5
	ood1Anna6
	KnowAnna
	anna blood is given
	d6q01_anna_blood
	ood6Anna3
	KnowLaska
	KnowMishka
	ood3Anna2
	ood3Anna3
	beta_pills is given
	beta_pills
	gamma_pills is given
	gamma_pills
	delta_pills is given
	delta_pills
	ood5Anna1
	d1q01FirstGeorgVisit
	KnowSgustok
	KnowDiamAce
	d5q02KnowNudeIsDead
	d6q01
	microscope_d6q01_anna_blood
	KnowAlexandr
	KnowJulia
	KnowOspina
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
		EVENT_11 Op = 0x268 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x512 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb9d Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf24 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1125 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1381 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1b4f

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x1552

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
0x15: Call 0x1593

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
0x26: Call 0x1b53

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1546

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1557

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x1609

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x160b

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x1ace

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
0x67: Call 0x158f

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
0x79: Call 0x17eb

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 221)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 222)
0x85: Push((int) 263)
0x86: Push((int) 261)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 223)
0x8a: Push((int) 266)
0x8b: Push((int) 262)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0x160d

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0x1593

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
0xb1: Call 0x160d

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0x1593

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0x15a5

0xc4: Pop(0)
0xc5: Push((int) 260)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0x17eb

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 221)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 222)
0xd7: Push((int) 263)
0xd8: Push((int) 261)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 223)
0xdc: Push((int) 266)
0xdd: Push((int) 262)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 266)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0xaf

0xe7: Pop(1)
0xe8: Push((int) 227)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 244)
0xee: Push((int) 268)
0xef: Push((int) 284)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Push((int) 245)
0xf3: Push((int) -1)
0xf4: Push((int) 286)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Return(); Pop(0)

0xf8: Push((int) 263)
0xf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call 0xaf

0xfe: Pop(1)
0xff: Push((int) 224)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 228)
0x105: Push((int) 268)
0x106: Push((int) 267)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Push((int) 225)
0x10a: Push((int) 265)
0x10b: Push((int) 264)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 265)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call 0xaf

0x115: Pop(1)
0x116: Push((int) 226)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 243)
0x11c: Push((int) 268)
0x11d: Push((int) 282)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 268)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call 0xaf

0x127: Pop(1)
0x128: Push((int) 229)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 234)
0x12e: Push((int) 274)
0x12f: Push((int) 273)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 230)
0x133: Push((int) 270)
0x134: Push((int) 269)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 270)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call 0xaf

0x13e: Pop(1)
0x13f: Push((int) 231)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 233)
0x145: Push((int) -1)
0x146: Push((int) 272)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 274)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral"
0x14f: Call 0xaf

0x150: Pop(1)
0x151: Push((int) 235)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 236)
0x157: Push((int) 280)
0x158: Push((int) 275)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 237)
0x15c: Push((int) 277)
0x15d: Push((int) 276)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 277)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral"
0x166: Call 0xaf

0x167: Pop(1)
0x168: Push((int) 238)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 239)
0x16e: Push((int) -1)
0x16f: Push((int) 278)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 240)
0x173: Push((int) -1)
0x174: Push((int) 279)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 280)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call 0xaf

0x17e: Pop(1)
0x17f: Push((int) 241)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 242)
0x185: Push((int) -1)
0x186: Push((int) 281)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18b: PushEmpty(bool)
0x18c: Call 0x160d

0x18d: Pop(0)
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: @ lshStopAnimation()
0x190: Pop(0)
0x191: GOTO 0x194

0x192: @ StopAnimation()
0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: GOTO 0xc0

0x196: Return(); Pop(0)

0x197: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x198: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x199: PushEmpty(bool, object)
0x19a: Stack[-1] = Stack[-11]
0x19b: Call 0x1557

0x19c: Pop(1)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-10] = (int) -2
0x1a0: Return(); Pop(8)

0x1a1: @ CreateDialog(Stack[-4])
0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Call 0x1609

0x1a5: Pop(0)
0x1a6: @@ SetNPCName(Stack[-1])
0x1a7: Pop(1)
0x1a8: PushEmpty(string)
0x1a9: Call 0x160b

0x1aa: Pop(0)
0x1ab: @@ SetPhoto(Stack[-1])
0x1ac: Pop(1)
0x1ad: PushEmpty(int)
0x1ae: Call 0x1ace

0x1af: Pop(0)
0x1b0: @@ SetPlayerName(Stack[-1])
0x1b1: Pop(1)
0x1b2: Stack[-2] = (int) -1
0x1b3: @ IsOverrideActive(Stack[-3])
0x1b4: Pop(0)
0x1b5: Push(Stack[-3])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b7: Stack[-10] = (int) -2
0x1b8: Return(); Pop(8)

0x1b9: @ DoDialog(Stack[-4])
0x1ba: Pop(0)
0x1bb: PushEmpty(object, object)
0x1bc: Stack[-2] = Stack[-11]
0x1bd: Stack[-1] = Stack[-6]
0x1be: Push(-2, 4); TaskCall(5)
0x1bf: Call 0x1d6

0x1c0: Pop(-2, 4); TaskReturn
0x1c1: Pop(2)
0x1c2: @@ IsDialogEnd(Stack[-1])
0x1c3: Pop(0)
0x1c4: Pop(0); Push((bool) Stack[-1] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: @ sync()
0x1c7: Pop(0)
0x1c8: @@ IsDialogEnd(Stack[-1])
0x1c9: Pop(0)
0x1ca: GOTO 0x1c4

0x1cb: PushEmpty(object)
0x1cc: Stack[-1] = Stack[-10]
0x1cd: Call 0x158f

0x1ce: Pop(1)
0x1cf: @ StopDialog(Stack[-4])
0x1d0: Pop(0)
0x1d1: @@ GetReturnValue(Stack[-2])
0x1d2: Pop(0)
0x1d3: Stack[-10] = Stack[-2]
0x1d4: Return(); Pop(8)

0x1d5: Stack[-4] = 0
0x1d6: PushEmpty()
0x1d7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1d8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1d9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1da: Push((int) 1)
0x1db: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral"
0x1de: Call 0x258

0x1df: Pop(1)
0x1e0: Push((int) 12719)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: PushEmpty(bool)
0x1e6: Stack[-1] = (bool) 0
0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Call 0x199a

0x1ea: Pop(1)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call 0x1976

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (bool) 1
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: Push((int) 12720)
0x1f4: Push((int) 4261)
0x1f5: Push((int) 13913)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Call 0x1982

0x1fd: Pop(1)
0x1fe: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call 0x19a6

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: Push((int) 12721)
0x207: Push((int) 13915)
0x208: Push((int) 13914)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: PushEmpty(bool)
0x20c: Stack[-1] = (bool) 0
0x20d: PushEmpty(bool)
0x20e: Stack[-1] = (bool) 0
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 0
0x211: PushEmpty(bool, object)
0x212: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x213: Call 0x19d6

0x214: Pop(1)
0x215: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x216: PushEmpty(bool, object)
0x217: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x218: Call 0x19ee

0x219: Pop(1)
0x21a: Pop(1); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Stack[-1] = (bool) 1
0x21d: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21e: PushEmpty(bool, object)
0x21f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x220: Call 0x19fa

0x221: Pop(1)
0x222: Pop(1); Push((bool) Stack[-1] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-1] = (bool) 1
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call 0x1a06

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: Push((int) 13747)
0x22e: Push((int) 14993)
0x22f: Push((int) 14992)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 12728)
0x233: Push((int) -1)
0x234: Push((int) 13921)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: GOTO 0x23a

0x238: Return(); Pop(0)

0x239: GOTO 0x1da

0x23a: PushEmpty(bool)
0x23b: Call 0x160d

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23e: @ lshWaitForAnimEnd()
0x23f: Pop(0)
0x240: Push( Stack[3 + Tasks[-1].StackPointer] )
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: GOTO 0x248

0x243: PushEmpty(string)
0x244: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x245: Call 0x1593

0x246: Pop(1)
0x247: GOTO 0x23e

0x248: GOTO 0x257

0x249: Push("all")
0x24a: Push("idle")
0x24b: @ PlayAnimation(Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: @ WaitForAnimEnd()
0x24e: Pop(0)
0x24f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x257

0x252: Push("all")
0x253: Push("idle")
0x254: @ PlayAnimation(Stack[-2], Stack[-1])
0x255: Pop(2)
0x256: GOTO 0x24d

0x257: Return(); Pop(0)

0x258: PushEmpty()
0x259: PushEmpty(bool)
0x25a: Call 0x160d

0x25b: Pop(0)
0x25c: Pop(1); Push((bool) Stack[-1] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Return(); Pop(0)

0x25f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(0)

0x262: PushEmpty(string)
0x263: Stack[-1] = Stack[-2]
0x264: Call 0x1593

0x265: Pop(1)
0x266: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x267: Return(); Pop(0)

0x268: PushEmpty()
0x269: Push((int) 1)
0x26a: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x26b: PushEmpty()
0x26c: Call 0x15a5

0x26d: Pop(0)
0x26e: Push((int) 4268)
0x26f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x271: PushEmpty(object, object)
0x272: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call 0x17b0

0x275: Pop(2)
0x276: Push((int) 4269)
0x277: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(object, object)
0x27a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27c: Call 0x17b0

0x27d: Pop(2)
0x27e: Push((int) 4266)
0x27f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call 0x17b0

0x285: Pop(2)
0x286: Push((int) 13914)
0x287: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty(object, object)
0x28a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call 0x17b6

0x28d: Pop(2)
0x28e: Push((int) 13920)
0x28f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x291: PushEmpty(object, object)
0x292: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call 0x17bc

0x295: Pop(2)
0x296: PushEmpty(object, object)
0x297: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x298: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x299: Call 0x17f1

0x29a: Pop(2)
0x29b: PushEmpty(object, object)
0x29c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29e: Call 0x17ff

0x29f: Pop(2)
0x2a0: Push((int) 14992)
0x2a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: PushEmpty(object, object)
0x2a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a6: Call 0x1805

0x2a7: Pop(2)
0x2a8: Push((int) 13912)
0x2a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call 0x258

0x2ae: Pop(1)
0x2af: Push((int) 12719)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Stack[-1] = (bool) 0
0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b8: Call 0x199a

0x2b9: Pop(1)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bb: PushEmpty(bool, object)
0x2bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bd: Call 0x1976

0x2be: Pop(1)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: Stack[-1] = (bool) 1
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c2: Push((int) 12720)
0x2c3: Push((int) 4261)
0x2c4: Push((int) 13913)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: PushEmpty(bool)
0x2c8: Stack[-1] = (bool) 0
0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cb: Call 0x1982

0x2cc: Pop(1)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Call 0x19a6

0x2d1: Pop(1)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Stack[-1] = (bool) 1
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: Push((int) 12721)
0x2d6: Push((int) 13915)
0x2d7: Push((int) 13914)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: PushEmpty(bool)
0x2db: Stack[-1] = (bool) 0
0x2dc: PushEmpty(bool)
0x2dd: Stack[-1] = (bool) 0
0x2de: PushEmpty(bool)
0x2df: Stack[-1] = (bool) 0
0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Call 0x19d6

0x2e3: Pop(1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call 0x19ee

0x2e8: Pop(1)
0x2e9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ed: PushEmpty(bool, object)
0x2ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Call 0x19fa

0x2f0: Pop(1)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = (bool) 1
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f5: PushEmpty(bool, object)
0x2f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f7: Call 0x1a06

0x2f8: Pop(1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: Stack[-1] = (bool) 1
0x2fb: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2fc: Push((int) 13747)
0x2fd: Push((int) 14993)
0x2fe: Push((int) 14992)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Push((int) 12728)
0x302: Push((int) -1)
0x303: Push((int) 13921)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Push((int) 14993)
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Neutral"
0x30c: Call 0x258

0x30d: Pop(1)
0x30e: Push((int) 13748)
0x30f: @@ SetMessage(Stack[-1])
0x310: Pop(1)
0x311: @@ ClearReplies()
0x312: Pop(0)
0x313: Push((int) 13749)
0x314: Push((int) -1)
0x315: Push((int) 14994)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: Push((int) 13915)
0x31a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x31c: PushEmpty(string)
0x31d: Stack[-1] = "Neutral"
0x31e: Call 0x258

0x31f: Pop(1)
0x320: Push((int) 12722)
0x321: @@ SetMessage(Stack[-1])
0x322: Pop(1)
0x323: @@ ClearReplies()
0x324: Pop(0)
0x325: Push((int) 12723)
0x326: Push((int) 13917)
0x327: Push((int) 13916)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: Push((int) 13917)
0x32c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral"
0x330: Call 0x258

0x331: Pop(1)
0x332: Push((int) 12724)
0x333: @@ SetMessage(Stack[-1])
0x334: Pop(1)
0x335: @@ ClearReplies()
0x336: Pop(0)
0x337: Push((int) 12725)
0x338: Push((int) 13919)
0x339: Push((int) 13918)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 13919)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral"
0x342: Call 0x258

0x343: Pop(1)
0x344: Push((int) 12726)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 12727)
0x34a: Push((int) -1)
0x34b: Push((int) 13920)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Return(); Pop(0)

0x34f: Push((int) 4261)
0x350: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x352: PushEmpty(string)
0x353: Stack[-1] = "Neutral"
0x354: Call 0x258

0x355: Pop(1)
0x356: Push((int) 3913)
0x357: @@ SetMessage(Stack[-1])
0x358: Pop(1)
0x359: @@ ClearReplies()
0x35a: Pop(0)
0x35b: Push((int) 3914)
0x35c: Push((int) -1)
0x35d: Push((int) 4262)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Push((int) 3915)
0x361: Push((int) 4264)
0x362: Push((int) 4263)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Return(); Pop(0)

0x366: Push((int) 4264)
0x367: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x369: PushEmpty(string)
0x36a: Stack[-1] = "Neutral"
0x36b: Call 0x258

0x36c: Pop(1)
0x36d: Push((int) 3916)
0x36e: @@ SetMessage(Stack[-1])
0x36f: Pop(1)
0x370: @@ ClearReplies()
0x371: Pop(0)
0x372: Push((int) 3917)
0x373: Push((int) 4267)
0x374: Push((int) 4265)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: Push((int) 3918)
0x378: Push((int) -1)
0x379: Push((int) 4266)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Return(); Pop(0)

0x37d: Push((int) 4267)
0x37e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x380: PushEmpty(string)
0x381: Stack[-1] = "Neutral"
0x382: Call 0x258

0x383: Pop(1)
0x384: Push((int) 3919)
0x385: @@ SetMessage(Stack[-1])
0x386: Pop(1)
0x387: @@ ClearReplies()
0x388: Pop(0)
0x389: Push((int) 3920)
0x38a: Push((int) -1)
0x38b: Push((int) 4268)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: Push((int) 3921)
0x38f: Push((int) -1)
0x390: Push((int) 4269)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Return(); Pop(0)

0x394: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x395: PushEmpty(bool)
0x396: Call 0x160d

0x397: Pop(0)
0x398: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x399: @ lshStopAnimation()
0x39a: Pop(0)
0x39b: GOTO 0x39e

0x39c: @ StopAnimation()
0x39d: Pop(0)
0x39e: Return(); Pop(0)

0x39f: GOTO 0x269

0x3a0: Return(); Pop(0)

0x3a1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[-11]
0x3a5: Call 0x1557

0x3a6: Pop(1)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a9: Stack[-10] = (int) -2
0x3aa: Return(); Pop(8)

0x3ab: @ CreateDialog(Stack[-4])
0x3ac: Pop(0)
0x3ad: PushEmpty(int)
0x3ae: Call 0x1609

0x3af: Pop(0)
0x3b0: @@ SetNPCName(Stack[-1])
0x3b1: Pop(1)
0x3b2: PushEmpty(string)
0x3b3: Call 0x160b

0x3b4: Pop(0)
0x3b5: @@ SetPhoto(Stack[-1])
0x3b6: Pop(1)
0x3b7: PushEmpty(int)
0x3b8: Call 0x1ace

0x3b9: Pop(0)
0x3ba: @@ SetPlayerName(Stack[-1])
0x3bb: Pop(1)
0x3bc: Stack[-2] = (int) -1
0x3bd: @ IsOverrideActive(Stack[-3])
0x3be: Pop(0)
0x3bf: Push(Stack[-3])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-10] = (int) -2
0x3c2: Return(); Pop(8)

0x3c3: @ DoDialog(Stack[-4])
0x3c4: Pop(0)
0x3c5: PushEmpty(object, object)
0x3c6: Stack[-2] = Stack[-11]
0x3c7: Stack[-1] = Stack[-6]
0x3c8: Push(-2, 4); TaskCall(7)
0x3c9: Call 0x3e0

0x3ca: Pop(-2, 4); TaskReturn
0x3cb: Pop(2)
0x3cc: @@ IsDialogEnd(Stack[-1])
0x3cd: Pop(0)
0x3ce: Pop(0); Push((bool) Stack[-1] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d0: @ sync()
0x3d1: Pop(0)
0x3d2: @@ IsDialogEnd(Stack[-1])
0x3d3: Pop(0)
0x3d4: GOTO 0x3ce

0x3d5: PushEmpty(object)
0x3d6: Stack[-1] = Stack[-10]
0x3d7: Call 0x158f

0x3d8: Pop(1)
0x3d9: @ StopDialog(Stack[-4])
0x3da: Pop(0)
0x3db: @@ GetReturnValue(Stack[-2])
0x3dc: Pop(0)
0x3dd: Stack[-10] = Stack[-2]
0x3de: Return(); Pop(8)

0x3df: Stack[-4] = 0
0x3e0: PushEmpty()
0x3e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3e3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3e4: Push((int) 1)
0x3e5: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x3e6: PushEmpty(bool)
0x3e7: Stack[-1] = (bool) 0
0x3e8: PushEmpty(bool, object)
0x3e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ea: Call 0x196a

0x3eb: Pop(1)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ed: PushEmpty(bool, object)
0x3ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ef: Call 0x1856

0x3f0: Pop(1)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = "Neutral"
0x3f6: Call 0x502

0x3f7: Pop(1)
0x3f8: Push((int) 4938)
0x3f9: @@ SetMessage(Stack[-1])
0x3fa: Pop(1)
0x3fb: @@ ClearReplies()
0x3fc: Pop(0)
0x3fd: Push((int) 4949)
0x3fe: Push((int) 5439)
0x3ff: Push((int) 5438)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Push((int) 4978)
0x403: Push((int) 5439)
0x404: Push((int) 5475)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Push((int) 4979)
0x408: Push((int) 5439)
0x409: Push((int) 5477)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: GOTO 0x4e4

0x40d: PushEmpty(bool, object)
0x40e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40f: Call 0x18da

0x410: Pop(1)
0x411: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral"
0x414: Call 0x502

0x415: Pop(1)
0x416: Push((int) 4940)
0x417: @@ SetMessage(Stack[-1])
0x418: Pop(1)
0x419: @@ ClearReplies()
0x41a: Pop(0)
0x41b: Push((int) 4981)
0x41c: Push((int) 5480)
0x41d: Push((int) 5479)
0x41e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41f: Pop(3)
0x420: Push((int) 4985)
0x421: Push((int) -1)
0x422: Push((int) 5483)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: GOTO 0x4e4

0x426: PushEmpty(bool)
0x427: Stack[-1] = (bool) 0
0x428: PushEmpty(bool, object)
0x429: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Call 0x198e

0x42b: Pop(1)
0x42c: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42d: PushEmpty(bool, object)
0x42e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42f: Call 0x184a

0x430: Pop(1)
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: Stack[-1] = (bool) 1
0x433: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Neutral"
0x436: Call 0x502

0x437: Pop(1)
0x438: Push((int) 4943)
0x439: @@ SetMessage(Stack[-1])
0x43a: Pop(1)
0x43b: @@ ClearReplies()
0x43c: Pop(0)
0x43d: Push((int) 4987)
0x43e: Push((int) 5486)
0x43f: Push((int) 5485)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Push((int) 4991)
0x443: Push((int) 5490)
0x444: Push((int) 5489)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Push((int) 4998)
0x448: Push((int) 5498)
0x449: Push((int) 5497)
0x44a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(3)
0x44c: GOTO 0x4e4

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Neutral"
0x44f: Call 0x502

0x450: Pop(1)
0x451: Push((int) 6582)
0x452: @@ SetMessage(Stack[-1])
0x453: Pop(1)
0x454: @@ ClearReplies()
0x455: Pop(0)
0x456: PushEmpty(bool, object)
0x457: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x458: Call 0x1856

0x459: Pop(1)
0x45a: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45b: Push((int) 8690)
0x45c: Push((int) 9528)
0x45d: Push((int) 9527)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: PushEmpty(bool)
0x461: Stack[-1] = (bool) 0
0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x464: Call 0x19b2

0x465: Pop(1)
0x466: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x469: Call 0x1862

0x46a: Pop(1)
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: Stack[-1] = (bool) 1
0x46d: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46e: Push((int) 6583)
0x46f: Push((int) 5521)
0x470: Push((int) 7252)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: PushEmpty(bool)
0x474: Stack[-1] = (bool) 0
0x475: PushEmpty(bool, object)
0x476: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x477: Call 0x1a12

0x478: Pop(1)
0x479: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47a: PushEmpty(bool, object)
0x47b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47c: Call 0x19be

0x47d: Pop(1)
0x47e: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47f: Stack[-1] = (bool) 1
0x480: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x481: Push((int) 6590)
0x482: Push((int) 5533)
0x483: Push((int) 7259)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: PushEmpty(bool, object)
0x487: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x488: Call 0x19ca

0x489: Pop(1)
0x48a: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48b: Push((int) 6586)
0x48c: Push((int) 5503)
0x48d: Push((int) 7255)
0x48e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(3)
0x490: PushEmpty(bool)
0x491: Stack[-1] = (bool) 0
0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x494: Call 0x1a5a

0x495: Pop(1)
0x496: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x497: PushEmpty(bool, object)
0x498: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x499: Call 0x186e

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Stack[-1] = (bool) 1
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: Push((int) 6592)
0x49f: Push((int) 7679)
0x4a0: Push((int) 7261)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: PushEmpty(bool)
0x4a4: Stack[-1] = (bool) 0
0x4a5: PushEmpty(bool, object)
0x4a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a7: Call 0x19e2

0x4a8: Pop(1)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ac: Call 0x187a

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4af: Stack[-1] = (bool) 1
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b1: Push((int) 6595)
0x4b2: Push((int) 7689)
0x4b3: Push((int) 7264)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: PushEmpty(bool)
0x4b7: Stack[-1] = (bool) 0
0x4b8: PushEmpty(bool, object)
0x4b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Call 0x1a66

0x4bb: Pop(1)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4bd: PushEmpty(bool, object)
0x4be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4bf: Call 0x1886

0x4c0: Pop(1)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: Stack[-1] = (bool) 1
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c4: Push((int) 6602)
0x4c5: Push((int) 7697)
0x4c6: Push((int) 7271)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: PushEmpty(bool)
0x4ca: Stack[-1] = (bool) 0
0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cd: Call 0x1a1e

0x4ce: Pop(1)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d0: PushEmpty(bool, object)
0x4d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d2: Call 0x1892

0x4d3: Pop(1)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: Stack[-1] = (bool) 1
0x4d6: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d7: Push((int) 6605)
0x4d8: Push((int) 7703)
0x4d9: Push((int) 7274)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Push((int) 7538)
0x4dd: Push((int) -1)
0x4de: Push((int) 8320)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: GOTO 0x4e4

0x4e2: Return(); Pop(0)

0x4e3: GOTO 0x3e4

0x4e4: PushEmpty(bool)
0x4e5: Call 0x160d

0x4e6: Pop(0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e8: @ lshWaitForAnimEnd()
0x4e9: Pop(0)
0x4ea: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x4f2

0x4ed: PushEmpty(string)
0x4ee: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4ef: Call 0x1593

0x4f0: Pop(1)
0x4f1: GOTO 0x4e8

0x4f2: GOTO 0x501

0x4f3: Push("all")
0x4f4: Push("idle")
0x4f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f6: Pop(2)
0x4f7: @ WaitForAnimEnd()
0x4f8: Pop(0)
0x4f9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: GOTO 0x501

0x4fc: Push("all")
0x4fd: Push("idle")
0x4fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ff: Pop(2)
0x500: GOTO 0x4f7

0x501: Return(); Pop(0)

0x502: PushEmpty()
0x503: PushEmpty(bool)
0x504: Call 0x160d

0x505: Pop(0)
0x506: Pop(1); Push((bool) Stack[-1] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x508: Return(); Pop(0)

0x509: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: Return(); Pop(0)

0x50c: PushEmpty(string)
0x50d: Stack[-1] = Stack[-2]
0x50e: Call 0x1593

0x50f: Pop(1)
0x510: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x511: Return(); Pop(0)

0x512: PushEmpty()
0x513: Push((int) 1)
0x514: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0x515: PushEmpty()
0x516: Call 0x15a5

0x517: Pop(0)
0x518: Push((int) 5450)
0x519: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x51b: PushEmpty(object, object)
0x51c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51e: Call 0x177f

0x51f: Pop(2)
0x520: PushEmpty(object, object)
0x521: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x522: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x523: Call 0x1679

0x524: Pop(2)
0x525: PushEmpty(object, object)
0x526: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x527: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x528: Call 0x1689

0x529: Pop(2)
0x52a: PushEmpty(object, object)
0x52b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52d: Call 0x1699

0x52e: Pop(2)
0x52f: Push((int) 5453)
0x530: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x532: PushEmpty(object, object)
0x533: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x534: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x535: Call 0x177f

0x536: Pop(2)
0x537: Push((int) 5454)
0x538: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53a: PushEmpty(object, object)
0x53b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x53c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53d: Call 0x177f

0x53e: Pop(2)
0x53f: Push((int) 5481)
0x540: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x542: PushEmpty(object, object)
0x543: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x544: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x545: Call 0x1785

0x546: Pop(2)
0x547: Push((int) 5482)
0x548: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54a: PushEmpty(object, object)
0x54b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54d: Call 0x1785

0x54e: Pop(2)
0x54f: Push((int) 5483)
0x550: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x552: PushEmpty(object, object)
0x553: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x554: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x555: Call 0x1785

0x556: Pop(2)
0x557: Push((int) 5488)
0x558: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x55a: PushEmpty(object, object)
0x55b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55d: Call 0x17a4

0x55e: Pop(2)
0x55f: PushEmpty(object, object)
0x560: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x561: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x562: Call 0x1615

0x563: Pop(2)
0x564: PushEmpty(object, object)
0x565: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x566: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x567: Call 0x1620

0x568: Pop(2)
0x569: Push((int) 5494)
0x56a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x56c: PushEmpty(object, object)
0x56d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56f: Call 0x17a4

0x570: Pop(2)
0x571: PushEmpty(object, object)
0x572: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x573: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x574: Call 0x1615

0x575: Pop(2)
0x576: PushEmpty(object, object)
0x577: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x578: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x579: Call 0x1620

0x57a: Pop(2)
0x57b: Push((int) 5501)
0x57c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x57e: PushEmpty(object, object)
0x57f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x580: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x581: Call 0x17a4

0x582: Pop(2)
0x583: PushEmpty(object, object)
0x584: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x585: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x586: Call 0x1620

0x587: Pop(2)
0x588: PushEmpty(object, object)
0x589: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58b: Call 0x1615

0x58c: Pop(2)
0x58d: Push((int) 9529)
0x58e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x590: PushEmpty(object, object)
0x591: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x592: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x593: Call 0x1699

0x594: Pop(2)
0x595: PushEmpty(object, object)
0x596: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x597: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x598: Call 0x1679

0x599: Pop(2)
0x59a: PushEmpty(object, object)
0x59b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59d: Call 0x1689

0x59e: Pop(2)
0x59f: Push((int) 5526)
0x5a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a2: PushEmpty(object, object)
0x5a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a5: Call 0x17aa

0x5a6: Pop(2)
0x5a7: Push((int) 5539)
0x5a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5aa: PushEmpty(object, object)
0x5ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ad: Call 0x17df

0x5ae: Pop(2)
0x5af: Push((int) 5542)
0x5b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b2: PushEmpty(object, object)
0x5b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b5: Call 0x17df

0x5b6: Pop(2)
0x5b7: Push((int) 5540)
0x5b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ba: PushEmpty(object, object)
0x5bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bd: Call 0x17df

0x5be: Pop(2)
0x5bf: Push((int) 5541)
0x5c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c2: PushEmpty(object, object)
0x5c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c5: Call 0x17df

0x5c6: Pop(2)
0x5c7: Push((int) 5508)
0x5c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ca: PushEmpty(object, object)
0x5cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5cd: Call 0x17e5

0x5ce: Pop(2)
0x5cf: Push((int) 5509)
0x5d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d2: PushEmpty(object, object)
0x5d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d5: Call 0x17e5

0x5d6: Pop(2)
0x5d7: Push((int) 5512)
0x5d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5da: PushEmpty(object, object)
0x5db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5dd: Call 0x17e5

0x5de: Pop(2)
0x5df: Push((int) 5520)
0x5e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e2: PushEmpty(object, object)
0x5e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e5: Call 0x17e5

0x5e6: Pop(2)
0x5e7: Push((int) 5517)
0x5e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ea: PushEmpty(object, object)
0x5eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ed: Call 0x17e5

0x5ee: Pop(2)
0x5ef: Push((int) 7687)
0x5f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f2: PushEmpty(object, object)
0x5f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f5: Call 0x1632

0x5f6: Pop(2)
0x5f7: Push((int) 7696)
0x5f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fa: PushEmpty(object, object)
0x5fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fd: Call 0x1638

0x5fe: Pop(2)
0x5ff: Push((int) 7702)
0x600: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x602: PushEmpty(object, object)
0x603: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x604: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x605: Call 0x163e

0x606: Pop(2)
0x607: Push((int) 7708)
0x608: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60a: PushEmpty(object, object)
0x60b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60d: Call 0x1644

0x60e: Pop(2)
0x60f: Push((int) 5427)
0x610: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x612: PushEmpty(bool)
0x613: Stack[-1] = (bool) 0
0x614: PushEmpty(bool, object)
0x615: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x616: Call 0x196a

0x617: Pop(1)
0x618: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x619: PushEmpty(bool, object)
0x61a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61b: Call 0x1856

0x61c: Pop(1)
0x61d: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61e: Stack[-1] = (bool) 1
0x61f: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x620: PushEmpty(string)
0x621: Stack[-1] = "Neutral"
0x622: Call 0x502

0x623: Pop(1)
0x624: Push((int) 4938)
0x625: @@ SetMessage(Stack[-1])
0x626: Pop(1)
0x627: @@ ClearReplies()
0x628: Pop(0)
0x629: Push((int) 4949)
0x62a: Push((int) 5439)
0x62b: Push((int) 5438)
0x62c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62d: Pop(3)
0x62e: Push((int) 4978)
0x62f: Push((int) 5439)
0x630: Push((int) 5475)
0x631: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x632: Pop(3)
0x633: Push((int) 4979)
0x634: Push((int) 5439)
0x635: Push((int) 5477)
0x636: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x637: Pop(3)
0x638: Return(); Pop(0)

0x639: PushEmpty(bool, object)
0x63a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63b: Call 0x18da

0x63c: Pop(1)
0x63d: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x63e: PushEmpty(string)
0x63f: Stack[-1] = "Neutral"
0x640: Call 0x502

0x641: Pop(1)
0x642: Push((int) 4940)
0x643: @@ SetMessage(Stack[-1])
0x644: Pop(1)
0x645: @@ ClearReplies()
0x646: Pop(0)
0x647: Push((int) 4981)
0x648: Push((int) 5480)
0x649: Push((int) 5479)
0x64a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64b: Pop(3)
0x64c: Push((int) 4985)
0x64d: Push((int) -1)
0x64e: Push((int) 5483)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Return(); Pop(0)

0x652: PushEmpty(bool)
0x653: Stack[-1] = (bool) 0
0x654: PushEmpty(bool, object)
0x655: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x656: Call 0x198e

0x657: Pop(1)
0x658: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x659: PushEmpty(bool, object)
0x65a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65b: Call 0x184a

0x65c: Pop(1)
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Stack[-1] = (bool) 1
0x65f: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x660: PushEmpty(string)
0x661: Stack[-1] = "Neutral"
0x662: Call 0x502

0x663: Pop(1)
0x664: Push((int) 4943)
0x665: @@ SetMessage(Stack[-1])
0x666: Pop(1)
0x667: @@ ClearReplies()
0x668: Pop(0)
0x669: Push((int) 4987)
0x66a: Push((int) 5486)
0x66b: Push((int) 5485)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: Push((int) 4991)
0x66f: Push((int) 5490)
0x670: Push((int) 5489)
0x671: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: Push((int) 4998)
0x674: Push((int) 5498)
0x675: Push((int) 5497)
0x676: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x677: Pop(3)
0x678: Return(); Pop(0)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Neutral"
0x67b: Call 0x502

0x67c: Pop(1)
0x67d: Push((int) 6582)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: PushEmpty(bool, object)
0x683: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x684: Call 0x1856

0x685: Pop(1)
0x686: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x687: Push((int) 8690)
0x688: Push((int) 9528)
0x689: Push((int) 9527)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: PushEmpty(bool)
0x68d: Stack[-1] = (bool) 0
0x68e: PushEmpty(bool, object)
0x68f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x690: Call 0x19b2

0x691: Pop(1)
0x692: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x693: PushEmpty(bool, object)
0x694: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x695: Call 0x1862

0x696: Pop(1)
0x697: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 1
0x699: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69a: Push((int) 6583)
0x69b: Push((int) 5521)
0x69c: Push((int) 7252)
0x69d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(3)
0x69f: PushEmpty(bool)
0x6a0: Stack[-1] = (bool) 0
0x6a1: PushEmpty(bool, object)
0x6a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a3: Call 0x1a12

0x6a4: Pop(1)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a6: PushEmpty(bool, object)
0x6a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a8: Call 0x19be

0x6a9: Pop(1)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Stack[-1] = (bool) 1
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6ad: Push((int) 6590)
0x6ae: Push((int) 5533)
0x6af: Push((int) 7259)
0x6b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(3)
0x6b2: PushEmpty(bool, object)
0x6b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b4: Call 0x19ca

0x6b5: Pop(1)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b7: Push((int) 6586)
0x6b8: Push((int) 5503)
0x6b9: Push((int) 7255)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: PushEmpty(bool)
0x6bd: Stack[-1] = (bool) 0
0x6be: PushEmpty(bool, object)
0x6bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c0: Call 0x1a5a

0x6c1: Pop(1)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c3: PushEmpty(bool, object)
0x6c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c5: Call 0x186e

0x6c6: Pop(1)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Stack[-1] = (bool) 1
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6ca: Push((int) 6592)
0x6cb: Push((int) 7679)
0x6cc: Push((int) 7261)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: PushEmpty(bool)
0x6d0: Stack[-1] = (bool) 0
0x6d1: PushEmpty(bool, object)
0x6d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d3: Call 0x19e2

0x6d4: Pop(1)
0x6d5: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d6: PushEmpty(bool, object)
0x6d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d8: Call 0x187a

0x6d9: Pop(1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6db: Stack[-1] = (bool) 1
0x6dc: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6dd: Push((int) 6595)
0x6de: Push((int) 7689)
0x6df: Push((int) 7264)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: PushEmpty(bool)
0x6e3: Stack[-1] = (bool) 0
0x6e4: PushEmpty(bool, object)
0x6e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e6: Call 0x1a66

0x6e7: Pop(1)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e9: PushEmpty(bool, object)
0x6ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6eb: Call 0x1886

0x6ec: Pop(1)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: Stack[-1] = (bool) 1
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f0: Push((int) 6602)
0x6f1: Push((int) 7697)
0x6f2: Push((int) 7271)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: PushEmpty(bool)
0x6f6: Stack[-1] = (bool) 0
0x6f7: PushEmpty(bool, object)
0x6f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f9: Call 0x1a1e

0x6fa: Pop(1)
0x6fb: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fc: PushEmpty(bool, object)
0x6fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fe: Call 0x1892

0x6ff: Pop(1)
0x700: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x701: Stack[-1] = (bool) 1
0x702: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x703: Push((int) 6605)
0x704: Push((int) 7703)
0x705: Push((int) 7274)
0x706: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: Push((int) 7538)
0x709: Push((int) -1)
0x70a: Push((int) 8320)
0x70b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70c: Pop(3)
0x70d: Return(); Pop(0)

0x70e: Push((int) 7703)
0x70f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x711: PushEmpty(string)
0x712: Stack[-1] = "Neutral"
0x713: Call 0x502

0x714: Pop(1)
0x715: Push((int) 6995)
0x716: @@ SetMessage(Stack[-1])
0x717: Pop(1)
0x718: @@ ClearReplies()
0x719: Pop(0)
0x71a: Push((int) 6996)
0x71b: Push((int) 7705)
0x71c: Push((int) 7704)
0x71d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(3)
0x71f: Return(); Pop(0)

0x720: Push((int) 7705)
0x721: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x723: PushEmpty(string)
0x724: Stack[-1] = "Neutral"
0x725: Call 0x502

0x726: Pop(1)
0x727: Push((int) 6997)
0x728: @@ SetMessage(Stack[-1])
0x729: Pop(1)
0x72a: @@ ClearReplies()
0x72b: Pop(0)
0x72c: Push((int) 6998)
0x72d: Push((int) 7707)
0x72e: Push((int) 7706)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: Return(); Pop(0)

0x732: Push((int) 7707)
0x733: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x735: PushEmpty(string)
0x736: Stack[-1] = "Neutral"
0x737: Call 0x502

0x738: Pop(1)
0x739: Push((int) 6999)
0x73a: @@ SetMessage(Stack[-1])
0x73b: Pop(1)
0x73c: @@ ClearReplies()
0x73d: Pop(0)
0x73e: Push((int) 7000)
0x73f: Push((int) -1)
0x740: Push((int) 7708)
0x741: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x742: Pop(3)
0x743: Return(); Pop(0)

0x744: Push((int) 7697)
0x745: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x747: PushEmpty(string)
0x748: Stack[-1] = "Neutral"
0x749: Call 0x502

0x74a: Pop(1)
0x74b: Push((int) 6989)
0x74c: @@ SetMessage(Stack[-1])
0x74d: Pop(1)
0x74e: @@ ClearReplies()
0x74f: Pop(0)
0x750: Push((int) 6990)
0x751: Push((int) 7699)
0x752: Push((int) 7698)
0x753: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x754: Pop(3)
0x755: Return(); Pop(0)

0x756: Push((int) 7699)
0x757: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x759: PushEmpty(string)
0x75a: Stack[-1] = "Neutral"
0x75b: Call 0x502

0x75c: Pop(1)
0x75d: Push((int) 6991)
0x75e: @@ SetMessage(Stack[-1])
0x75f: Pop(1)
0x760: @@ ClearReplies()
0x761: Pop(0)
0x762: Push((int) 6992)
0x763: Push((int) 7701)
0x764: Push((int) 7700)
0x765: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(3)
0x767: Return(); Pop(0)

0x768: Push((int) 7701)
0x769: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x76b: PushEmpty(string)
0x76c: Stack[-1] = "Neutral"
0x76d: Call 0x502

0x76e: Pop(1)
0x76f: Push((int) 6993)
0x770: @@ SetMessage(Stack[-1])
0x771: Pop(1)
0x772: @@ ClearReplies()
0x773: Pop(0)
0x774: Push((int) 6994)
0x775: Push((int) -1)
0x776: Push((int) 7702)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Return(); Pop(0)

0x77a: Push((int) 7689)
0x77b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x77d: PushEmpty(string)
0x77e: Stack[-1] = "Neutral"
0x77f: Call 0x502

0x780: Pop(1)
0x781: Push((int) 6981)
0x782: @@ SetMessage(Stack[-1])
0x783: Pop(1)
0x784: @@ ClearReplies()
0x785: Pop(0)
0x786: Push((int) 6982)
0x787: Push((int) 7691)
0x788: Push((int) 7690)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Return(); Pop(0)

0x78c: Push((int) 7691)
0x78d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78e: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x78f: PushEmpty(string)
0x790: Stack[-1] = "Neutral"
0x791: Call 0x502

0x792: Pop(1)
0x793: Push((int) 6983)
0x794: @@ SetMessage(Stack[-1])
0x795: Pop(1)
0x796: @@ ClearReplies()
0x797: Pop(0)
0x798: Push((int) 6984)
0x799: Push((int) 7693)
0x79a: Push((int) 7692)
0x79b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79c: Pop(3)
0x79d: Return(); Pop(0)

0x79e: Push((int) 7693)
0x79f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7a1: PushEmpty(string)
0x7a2: Stack[-1] = "Neutral"
0x7a3: Call 0x502

0x7a4: Pop(1)
0x7a5: Push((int) 6985)
0x7a6: @@ SetMessage(Stack[-1])
0x7a7: Pop(1)
0x7a8: @@ ClearReplies()
0x7a9: Pop(0)
0x7aa: Push((int) 6986)
0x7ab: Push((int) 7695)
0x7ac: Push((int) 7694)
0x7ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ae: Pop(3)
0x7af: Return(); Pop(0)

0x7b0: Push((int) 7695)
0x7b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7b3: PushEmpty(string)
0x7b4: Stack[-1] = "Neutral"
0x7b5: Call 0x502

0x7b6: Pop(1)
0x7b7: Push((int) 6987)
0x7b8: @@ SetMessage(Stack[-1])
0x7b9: Pop(1)
0x7ba: @@ ClearReplies()
0x7bb: Pop(0)
0x7bc: Push((int) 6988)
0x7bd: Push((int) -1)
0x7be: Push((int) 7696)
0x7bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c0: Pop(3)
0x7c1: Return(); Pop(0)

0x7c2: Push((int) 7679)
0x7c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7c5: PushEmpty(string)
0x7c6: Stack[-1] = "Neutral"
0x7c7: Call 0x502

0x7c8: Pop(1)
0x7c9: Push((int) 6972)
0x7ca: @@ SetMessage(Stack[-1])
0x7cb: Pop(1)
0x7cc: @@ ClearReplies()
0x7cd: Pop(0)
0x7ce: Push((int) 6973)
0x7cf: Push((int) 7681)
0x7d0: Push((int) 7680)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Return(); Pop(0)

0x7d4: Push((int) 7681)
0x7d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7d7: PushEmpty(string)
0x7d8: Stack[-1] = "Neutral"
0x7d9: Call 0x502

0x7da: Pop(1)
0x7db: Push((int) 6974)
0x7dc: @@ SetMessage(Stack[-1])
0x7dd: Pop(1)
0x7de: @@ ClearReplies()
0x7df: Pop(0)
0x7e0: Push((int) 6975)
0x7e1: Push((int) 7684)
0x7e2: Push((int) 7682)
0x7e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e4: Pop(3)
0x7e5: Push((int) 6976)
0x7e6: Push((int) 7684)
0x7e7: Push((int) 7683)
0x7e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e9: Pop(3)
0x7ea: Return(); Pop(0)

0x7eb: Push((int) 7684)
0x7ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7ee: PushEmpty(string)
0x7ef: Stack[-1] = "Neutral"
0x7f0: Call 0x502

0x7f1: Pop(1)
0x7f2: Push((int) 6977)
0x7f3: @@ SetMessage(Stack[-1])
0x7f4: Pop(1)
0x7f5: @@ ClearReplies()
0x7f6: Pop(0)
0x7f7: Push((int) 6978)
0x7f8: Push((int) 7686)
0x7f9: Push((int) 7685)
0x7fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fb: Pop(3)
0x7fc: Return(); Pop(0)

0x7fd: Push((int) 7686)
0x7fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x800: PushEmpty(string)
0x801: Stack[-1] = "Neutral"
0x802: Call 0x502

0x803: Pop(1)
0x804: Push((int) 6979)
0x805: @@ SetMessage(Stack[-1])
0x806: Pop(1)
0x807: @@ ClearReplies()
0x808: Pop(0)
0x809: Push((int) 6980)
0x80a: Push((int) -1)
0x80b: Push((int) 7687)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Return(); Pop(0)

0x80f: Push((int) 5503)
0x810: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x811: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x812: PushEmpty(object, object)
0x813: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x814: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x815: Call 0x1673

0x816: Pop(2)
0x817: PushEmpty(string)
0x818: Stack[-1] = "Neutral"
0x819: Call 0x502

0x81a: Pop(1)
0x81b: Push((int) 5004)
0x81c: @@ SetMessage(Stack[-1])
0x81d: Pop(1)
0x81e: @@ ClearReplies()
0x81f: Pop(0)
0x820: Push((int) 5005)
0x821: Push((int) 5505)
0x822: Push((int) 5504)
0x823: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x824: Pop(3)
0x825: Push((int) 5015)
0x826: Push((int) 5515)
0x827: Push((int) 5514)
0x828: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(3)
0x82a: Return(); Pop(0)

0x82b: Push((int) 5515)
0x82c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82d: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x82e: PushEmpty(string)
0x82f: Stack[-1] = "Neutral"
0x830: Call 0x502

0x831: Pop(1)
0x832: Push((int) 5016)
0x833: @@ SetMessage(Stack[-1])
0x834: Pop(1)
0x835: @@ ClearReplies()
0x836: Pop(0)
0x837: Push((int) 5017)
0x838: Push((int) 5519)
0x839: Push((int) 5516)
0x83a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83b: Pop(3)
0x83c: Push((int) 5018)
0x83d: Push((int) -1)
0x83e: Push((int) 5517)
0x83f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x840: Pop(3)
0x841: Return(); Pop(0)

0x842: Push((int) 5519)
0x843: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x845: PushEmpty(string)
0x846: Stack[-1] = "Neutral"
0x847: Call 0x502

0x848: Pop(1)
0x849: Push((int) 5019)
0x84a: @@ SetMessage(Stack[-1])
0x84b: Pop(1)
0x84c: @@ ClearReplies()
0x84d: Pop(0)
0x84e: Push((int) 5020)
0x84f: Push((int) -1)
0x850: Push((int) 5520)
0x851: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x852: Pop(3)
0x853: Return(); Pop(0)

0x854: Push((int) 5505)
0x855: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x857: PushEmpty(string)
0x858: Stack[-1] = "Neutral"
0x859: Call 0x502

0x85a: Pop(1)
0x85b: Push((int) 5006)
0x85c: @@ SetMessage(Stack[-1])
0x85d: Pop(1)
0x85e: @@ ClearReplies()
0x85f: Pop(0)
0x860: PushEmpty(bool, object)
0x861: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x862: Call 0x1952

0x863: Pop(1)
0x864: Pop(1); Push((bool) Stack[-1] == 0)
0x865: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x866: Push((int) 5007)
0x867: Push((int) 5507)
0x868: Push((int) 5506)
0x869: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86a: Pop(3)
0x86b: Push((int) 5011)
0x86c: Push((int) 5511)
0x86d: Push((int) 5510)
0x86e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86f: Pop(3)
0x870: Return(); Pop(0)

0x871: Push((int) 5511)
0x872: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x874: PushEmpty(string)
0x875: Stack[-1] = "Neutral"
0x876: Call 0x502

0x877: Pop(1)
0x878: Push((int) 5012)
0x879: @@ SetMessage(Stack[-1])
0x87a: Pop(1)
0x87b: @@ ClearReplies()
0x87c: Pop(0)
0x87d: Push((int) 5013)
0x87e: Push((int) -1)
0x87f: Push((int) 5512)
0x880: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: Return(); Pop(0)

0x883: Push((int) 5507)
0x884: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x886: PushEmpty(object, object)
0x887: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x888: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x889: Call 0x176d

0x88a: Pop(2)
0x88b: PushEmpty(object, object)
0x88c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x88d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88e: Call 0x1773

0x88f: Pop(2)
0x890: PushEmpty(object, object)
0x891: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x892: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x893: Call 0x1779

0x894: Pop(2)
0x895: PushEmpty(string)
0x896: Stack[-1] = "Neutral"
0x897: Call 0x502

0x898: Pop(1)
0x899: Push((int) 5008)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 5009)
0x89f: Push((int) -1)
0x8a0: Push((int) 5508)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Push((int) 5010)
0x8a4: Push((int) -1)
0x8a5: Push((int) 5509)
0x8a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a7: Pop(3)
0x8a8: Return(); Pop(0)

0x8a9: Push((int) 5533)
0x8aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8ac: PushEmpty(string)
0x8ad: Stack[-1] = "Neutral"
0x8ae: Call 0x502

0x8af: Pop(1)
0x8b0: Push((int) 5031)
0x8b1: @@ SetMessage(Stack[-1])
0x8b2: Pop(1)
0x8b3: @@ ClearReplies()
0x8b4: Pop(0)
0x8b5: Push((int) 5032)
0x8b6: Push((int) 5535)
0x8b7: Push((int) 5534)
0x8b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b9: Pop(3)
0x8ba: Push((int) 5039)
0x8bb: Push((int) -1)
0x8bc: Push((int) 5541)
0x8bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: Return(); Pop(0)

0x8c0: Push((int) 5535)
0x8c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8c3: PushEmpty(object, object)
0x8c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c6: Call 0x16a2

0x8c7: Pop(2)
0x8c8: PushEmpty(string)
0x8c9: Stack[-1] = "Neutral"
0x8ca: Call 0x502

0x8cb: Pop(1)
0x8cc: Push((int) 5033)
0x8cd: @@ SetMessage(Stack[-1])
0x8ce: Pop(1)
0x8cf: @@ ClearReplies()
0x8d0: Pop(0)
0x8d1: Push((int) 5034)
0x8d2: Push((int) 5537)
0x8d3: Push((int) 5536)
0x8d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d5: Pop(3)
0x8d6: Push((int) 5038)
0x8d7: Push((int) -1)
0x8d8: Push((int) 5540)
0x8d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8da: Pop(3)
0x8db: Return(); Pop(0)

0x8dc: Push((int) 5537)
0x8dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8df: PushEmpty(string)
0x8e0: Stack[-1] = "Neutral"
0x8e1: Call 0x502

0x8e2: Pop(1)
0x8e3: Push((int) 5035)
0x8e4: @@ SetMessage(Stack[-1])
0x8e5: Pop(1)
0x8e6: @@ ClearReplies()
0x8e7: Pop(0)
0x8e8: Push((int) 5037)
0x8e9: Push((int) -1)
0x8ea: Push((int) 5539)
0x8eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ec: Pop(3)
0x8ed: Push((int) 5040)
0x8ee: Push((int) -1)
0x8ef: Push((int) 5542)
0x8f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f1: Pop(3)
0x8f2: Return(); Pop(0)

0x8f3: Push((int) 5521)
0x8f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x8f6: PushEmpty(string)
0x8f7: Stack[-1] = "Neutral"
0x8f8: Call 0x502

0x8f9: Pop(1)
0x8fa: Push((int) 5021)
0x8fb: @@ SetMessage(Stack[-1])
0x8fc: Pop(1)
0x8fd: @@ ClearReplies()
0x8fe: Pop(0)
0x8ff: Push((int) 5022)
0x900: Push((int) 5523)
0x901: Push((int) 5522)
0x902: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x903: Pop(3)
0x904: Push((int) 5027)
0x905: Push((int) 5528)
0x906: Push((int) 5527)
0x907: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x908: Pop(3)
0x909: Push((int) 5030)
0x90a: Push((int) 5528)
0x90b: Push((int) 5531)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Return(); Pop(0)

0x90f: Push((int) 5528)
0x910: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x911: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x912: PushEmpty(string)
0x913: Stack[-1] = "Neutral"
0x914: Call 0x502

0x915: Pop(1)
0x916: Push((int) 5028)
0x917: @@ SetMessage(Stack[-1])
0x918: Pop(1)
0x919: @@ ClearReplies()
0x91a: Pop(0)
0x91b: Push((int) 5029)
0x91c: Push((int) 5525)
0x91d: Push((int) 5529)
0x91e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91f: Pop(3)
0x920: Push((int) 5041)
0x921: Push((int) 5544)
0x922: Push((int) 5543)
0x923: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: Return(); Pop(0)

0x926: Push((int) 5544)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x929: PushEmpty(string)
0x92a: Stack[-1] = "Neutral"
0x92b: Call 0x502

0x92c: Pop(1)
0x92d: Push((int) 5042)
0x92e: @@ SetMessage(Stack[-1])
0x92f: Pop(1)
0x930: @@ ClearReplies()
0x931: Pop(0)
0x932: Push((int) 5043)
0x933: Push((int) 5525)
0x934: Push((int) 5545)
0x935: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: Return(); Pop(0)

0x938: Push((int) 5523)
0x939: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93b: PushEmpty(string)
0x93c: Stack[-1] = "Neutral"
0x93d: Call 0x502

0x93e: Pop(1)
0x93f: Push((int) 5023)
0x940: @@ SetMessage(Stack[-1])
0x941: Pop(1)
0x942: @@ ClearReplies()
0x943: Pop(0)
0x944: Push((int) 5024)
0x945: Push((int) 5525)
0x946: Push((int) 5524)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Return(); Pop(0)

0x94a: Push((int) 5525)
0x94b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x94d: PushEmpty(string)
0x94e: Stack[-1] = "Neutral"
0x94f: Call 0x502

0x950: Pop(1)
0x951: Push((int) 5025)
0x952: @@ SetMessage(Stack[-1])
0x953: Pop(1)
0x954: @@ ClearReplies()
0x955: Pop(0)
0x956: Push((int) 5026)
0x957: Push((int) -1)
0x958: Push((int) 5526)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: Return(); Pop(0)

0x95c: Push((int) 9528)
0x95d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95e: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x95f: PushEmpty(string)
0x960: Stack[-1] = "Neutral"
0x961: Call 0x502

0x962: Pop(1)
0x963: Push((int) 8691)
0x964: @@ SetMessage(Stack[-1])
0x965: Pop(1)
0x966: @@ ClearReplies()
0x967: Pop(0)
0x968: Push((int) 8692)
0x969: Push((int) -1)
0x96a: Push((int) 9529)
0x96b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96c: Pop(3)
0x96d: Return(); Pop(0)

0x96e: Push((int) 5498)
0x96f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x971: PushEmpty(string)
0x972: Stack[-1] = "Neutral"
0x973: Call 0x502

0x974: Pop(1)
0x975: Push((int) 4999)
0x976: @@ SetMessage(Stack[-1])
0x977: Pop(1)
0x978: @@ ClearReplies()
0x979: Pop(0)
0x97a: Push((int) 5000)
0x97b: Push((int) 5500)
0x97c: Push((int) 5499)
0x97d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97e: Pop(3)
0x97f: Return(); Pop(0)

0x980: Push((int) 5500)
0x981: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x982: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x983: PushEmpty(string)
0x984: Stack[-1] = "Neutral"
0x985: Call 0x502

0x986: Pop(1)
0x987: Push((int) 5001)
0x988: @@ SetMessage(Stack[-1])
0x989: Pop(1)
0x98a: @@ ClearReplies()
0x98b: Pop(0)
0x98c: Push((int) 5002)
0x98d: Push((int) -1)
0x98e: Push((int) 5501)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Return(); Pop(0)

0x992: Push((int) 5490)
0x993: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x995: PushEmpty(string)
0x996: Stack[-1] = "Neutral"
0x997: Call 0x502

0x998: Pop(1)
0x999: Push((int) 4992)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: Push((int) 4993)
0x99f: Push((int) 5492)
0x9a0: Push((int) 5491)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: Push((int) 4997)
0x9a4: Push((int) 5492)
0x9a5: Push((int) 5495)
0x9a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a7: Pop(3)
0x9a8: Return(); Pop(0)

0x9a9: Push((int) 5492)
0x9aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9ac: PushEmpty(string)
0x9ad: Stack[-1] = "Crying"
0x9ae: Call 0x502

0x9af: Pop(1)
0x9b0: Push((int) 4994)
0x9b1: @@ SetMessage(Stack[-1])
0x9b2: Pop(1)
0x9b3: @@ ClearReplies()
0x9b4: Pop(0)
0x9b5: Push((int) 4996)
0x9b6: Push((int) -1)
0x9b7: Push((int) 5494)
0x9b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(3)
0x9ba: Return(); Pop(0)

0x9bb: Push((int) 5486)
0x9bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9be: PushEmpty(string)
0x9bf: Stack[-1] = "Neutral"
0x9c0: Call 0x502

0x9c1: Pop(1)
0x9c2: Push((int) 4988)
0x9c3: @@ SetMessage(Stack[-1])
0x9c4: Pop(1)
0x9c5: @@ ClearReplies()
0x9c6: Pop(0)
0x9c7: Push((int) 4990)
0x9c8: Push((int) -1)
0x9c9: Push((int) 5488)
0x9ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cb: Pop(3)
0x9cc: Return(); Pop(0)

0x9cd: Push((int) 5480)
0x9ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9d0: PushEmpty(object, object)
0x9d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d3: Call 0x180b

0x9d4: Pop(2)
0x9d5: PushEmpty(string)
0x9d6: Stack[-1] = "Neutral"
0x9d7: Call 0x502

0x9d8: Pop(1)
0x9d9: Push((int) 4982)
0x9da: @@ SetMessage(Stack[-1])
0x9db: Pop(1)
0x9dc: @@ ClearReplies()
0x9dd: Pop(0)
0x9de: Push((int) 4983)
0x9df: Push((int) -1)
0x9e0: Push((int) 5481)
0x9e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e2: Pop(3)
0x9e3: Push((int) 4984)
0x9e4: Push((int) -1)
0x9e5: Push((int) 5482)
0x9e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: Return(); Pop(0)

0x9e9: Push((int) 5439)
0x9ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9eb: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9ec: PushEmpty(string)
0x9ed: Stack[-1] = "Neutral"
0x9ee: Call 0x502

0x9ef: Pop(1)
0x9f0: Push((int) 4950)
0x9f1: @@ SetMessage(Stack[-1])
0x9f2: Pop(1)
0x9f3: @@ ClearReplies()
0x9f4: Pop(0)
0x9f5: Push((int) 4951)
0x9f6: Push((int) 5441)
0x9f7: Push((int) 5440)
0x9f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f9: Pop(3)
0x9fa: Push((int) 4976)
0x9fb: Push((int) 5441)
0x9fc: Push((int) 5471)
0x9fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fe: Pop(3)
0x9ff: Push((int) 4977)
0xa00: Push((int) 5441)
0xa01: Push((int) 5473)
0xa02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa03: Pop(3)
0xa04: Return(); Pop(0)

0xa05: Push((int) 5441)
0xa06: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa07: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa08: PushEmpty(string)
0xa09: Stack[-1] = "Neutral"
0xa0a: Call 0x502

0xa0b: Pop(1)
0xa0c: Push((int) 4952)
0xa0d: @@ SetMessage(Stack[-1])
0xa0e: Pop(1)
0xa0f: @@ ClearReplies()
0xa10: Pop(0)
0xa11: Push((int) 4953)
0xa12: Push((int) 5443)
0xa13: Push((int) 5442)
0xa14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa15: Pop(3)
0xa16: Push((int) 4972)
0xa17: Push((int) 5466)
0xa18: Push((int) 5465)
0xa19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1a: Pop(3)
0xa1b: Return(); Pop(0)

0xa1c: Push((int) 5466)
0xa1d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1e: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa1f: PushEmpty(string)
0xa20: Stack[-1] = "Neutral"
0xa21: Call 0x502

0xa22: Pop(1)
0xa23: Push((int) 4973)
0xa24: @@ SetMessage(Stack[-1])
0xa25: Pop(1)
0xa26: @@ ClearReplies()
0xa27: Pop(0)
0xa28: Push((int) 4974)
0xa29: Push((int) 5445)
0xa2a: Push((int) 5467)
0xa2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2c: Pop(3)
0xa2d: Push((int) 4975)
0xa2e: Push((int) 5445)
0xa2f: Push((int) 5469)
0xa30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa31: Pop(3)
0xa32: Return(); Pop(0)

0xa33: Push((int) 5443)
0xa34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa35: IF (Stack[-1] == 0) GOTO 0xa4a; Pop(1)

0xa36: PushEmpty(string)
0xa37: Stack[-1] = "Neutral"
0xa38: Call 0x502

0xa39: Pop(1)
0xa3a: Push((int) 4954)
0xa3b: @@ SetMessage(Stack[-1])
0xa3c: Pop(1)
0xa3d: @@ ClearReplies()
0xa3e: Pop(0)
0xa3f: Push((int) 4955)
0xa40: Push((int) 5445)
0xa41: Push((int) 5444)
0xa42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa43: Pop(3)
0xa44: Push((int) 4968)
0xa45: Push((int) 5460)
0xa46: Push((int) 5459)
0xa47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa48: Pop(3)
0xa49: Return(); Pop(0)

0xa4a: Push((int) 5460)
0xa4b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4c: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa4d: PushEmpty(string)
0xa4e: Stack[-1] = "Neutral"
0xa4f: Call 0x502

0xa50: Pop(1)
0xa51: Push((int) 4969)
0xa52: @@ SetMessage(Stack[-1])
0xa53: Pop(1)
0xa54: @@ ClearReplies()
0xa55: Pop(0)
0xa56: Push((int) 4970)
0xa57: Push((int) 5445)
0xa58: Push((int) 5461)
0xa59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5a: Pop(3)
0xa5b: Push((int) 4971)
0xa5c: Push((int) 5445)
0xa5d: Push((int) 5463)
0xa5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5f: Pop(3)
0xa60: Return(); Pop(0)

0xa61: Push((int) 5445)
0xa62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa63: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa64: PushEmpty(string)
0xa65: Stack[-1] = "Neutral"
0xa66: Call 0x502

0xa67: Pop(1)
0xa68: Push((int) 4956)
0xa69: @@ SetMessage(Stack[-1])
0xa6a: Pop(1)
0xa6b: @@ ClearReplies()
0xa6c: Pop(0)
0xa6d: Push((int) 4957)
0xa6e: Push((int) 5447)
0xa6f: Push((int) 5446)
0xa70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa71: Pop(3)
0xa72: Push((int) 4967)
0xa73: Push((int) 5447)
0xa74: Push((int) 5457)
0xa75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa76: Pop(3)
0xa77: Return(); Pop(0)

0xa78: Push((int) 5447)
0xa79: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa7b: PushEmpty(string)
0xa7c: Stack[-1] = "Neutral"
0xa7d: Call 0x502

0xa7e: Pop(1)
0xa7f: Push((int) 4958)
0xa80: @@ SetMessage(Stack[-1])
0xa81: Pop(1)
0xa82: @@ ClearReplies()
0xa83: Pop(0)
0xa84: Push((int) 4959)
0xa85: Push((int) 5449)
0xa86: Push((int) 5448)
0xa87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa88: Pop(3)
0xa89: Push((int) 4966)
0xa8a: Push((int) 5449)
0xa8b: Push((int) 5455)
0xa8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8d: Pop(3)
0xa8e: Return(); Pop(0)

0xa8f: Push((int) 5449)
0xa90: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa91: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xa92: PushEmpty(object, object)
0xa93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa95: Call 0x180b

0xa96: Pop(2)
0xa97: PushEmpty(string)
0xa98: Stack[-1] = "Neutral"
0xa99: Call 0x502

0xa9a: Pop(1)
0xa9b: Push((int) 4960)
0xa9c: @@ SetMessage(Stack[-1])
0xa9d: Pop(1)
0xa9e: @@ ClearReplies()
0xa9f: Pop(0)
0xaa0: Push((int) 4961)
0xaa1: Push((int) -1)
0xaa2: Push((int) 5450)
0xaa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa4: Pop(3)
0xaa5: Push((int) 4962)
0xaa6: Push((int) 5452)
0xaa7: Push((int) 5451)
0xaa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa9: Pop(3)
0xaaa: Return(); Pop(0)

0xaab: Push((int) 5452)
0xaac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaad: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xaae: PushEmpty(string)
0xaaf: Stack[-1] = "Neutral"
0xab0: Call 0x502

0xab1: Pop(1)
0xab2: Push((int) 4963)
0xab3: @@ SetMessage(Stack[-1])
0xab4: Pop(1)
0xab5: @@ ClearReplies()
0xab6: Pop(0)
0xab7: Push((int) 4964)
0xab8: Push((int) -1)
0xab9: Push((int) 5453)
0xaba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabb: Pop(3)
0xabc: Push((int) 4965)
0xabd: Push((int) -1)
0xabe: Push((int) 5454)
0xabf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac0: Pop(3)
0xac1: Return(); Pop(0)

0xac2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xac3: PushEmpty(bool)
0xac4: Call 0x160d

0xac5: Pop(0)
0xac6: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac7: @ lshStopAnimation()
0xac8: Pop(0)
0xac9: GOTO 0xacc

0xaca: @ StopAnimation()
0xacb: Pop(0)
0xacc: Return(); Pop(0)

0xacd: GOTO 0x513

0xace: Return(); Pop(0)

0xacf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xad0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xad1: PushEmpty(bool, object)
0xad2: Stack[-1] = Stack[-11]
0xad3: Call 0x1557

0xad4: Pop(1)
0xad5: Pop(1); Push((bool) Stack[-1] == 0)
0xad6: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad7: Stack[-10] = (int) -2
0xad8: Return(); Pop(8)

0xad9: @ CreateDialog(Stack[-4])
0xada: Pop(0)
0xadb: PushEmpty(int)
0xadc: Call 0x1609

0xadd: Pop(0)
0xade: @@ SetNPCName(Stack[-1])
0xadf: Pop(1)
0xae0: PushEmpty(string)
0xae1: Call 0x160b

0xae2: Pop(0)
0xae3: @@ SetPhoto(Stack[-1])
0xae4: Pop(1)
0xae5: PushEmpty(int)
0xae6: Call 0x1ace

0xae7: Pop(0)
0xae8: @@ SetPlayerName(Stack[-1])
0xae9: Pop(1)
0xaea: Stack[-2] = (int) -1
0xaeb: @ IsOverrideActive(Stack[-3])
0xaec: Pop(0)
0xaed: Push(Stack[-3])
0xaee: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaef: Stack[-10] = (int) -2
0xaf0: Return(); Pop(8)

0xaf1: @ DoDialog(Stack[-4])
0xaf2: Pop(0)
0xaf3: PushEmpty(object, object)
0xaf4: Stack[-2] = Stack[-11]
0xaf5: Stack[-1] = Stack[-6]
0xaf6: Push(-2, 4); TaskCall(9)
0xaf7: Call 0xb0e

0xaf8: Pop(-2, 4); TaskReturn
0xaf9: Pop(2)
0xafa: @@ IsDialogEnd(Stack[-1])
0xafb: Pop(0)
0xafc: Pop(0); Push((bool) Stack[-1] == 0)
0xafd: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xafe: @ sync()
0xaff: Pop(0)
0xb00: @@ IsDialogEnd(Stack[-1])
0xb01: Pop(0)
0xb02: GOTO 0xafc

0xb03: PushEmpty(object)
0xb04: Stack[-1] = Stack[-10]
0xb05: Call 0x158f

0xb06: Pop(1)
0xb07: @ StopDialog(Stack[-4])
0xb08: Pop(0)
0xb09: @@ GetReturnValue(Stack[-2])
0xb0a: Pop(0)
0xb0b: Stack[-10] = Stack[-2]
0xb0c: Return(); Pop(8)

0xb0d: Stack[-4] = 0
0xb0e: PushEmpty()
0xb0f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb10: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb11: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb12: Push((int) 1)
0xb13: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb14: PushEmpty(string)
0xb15: Stack[-1] = "Neutral"
0xb16: Call 0xb8d

0xb17: Pop(1)
0xb18: Push((int) 6624)
0xb19: @@ SetMessage(Stack[-1])
0xb1a: Pop(1)
0xb1b: @@ ClearReplies()
0xb1c: Pop(0)
0xb1d: PushEmpty(bool)
0xb1e: Stack[-1] = (bool) 0
0xb1f: PushEmpty(bool, object)
0xb20: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb21: Call 0x189e

0xb22: Pop(1)
0xb23: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb24: PushEmpty(bool, object)
0xb25: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb26: Call 0x18ce

0xb27: Pop(1)
0xb28: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb29: Stack[-1] = (bool) 1
0xb2a: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2b: Push((int) 7217)
0xb2c: Push((int) 7952)
0xb2d: Push((int) 7953)
0xb2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2f: Pop(3)
0xb30: PushEmpty(bool, object)
0xb31: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb32: Call 0x18aa

0xb33: Pop(1)
0xb34: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb35: Push((int) 6949)
0xb36: Push((int) 7656)
0xb37: Push((int) 7655)
0xb38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb39: Pop(3)
0xb3a: Push((int) 6626)
0xb3b: Push((int) -1)
0xb3c: Push((int) 7295)
0xb3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3e: Pop(3)
0xb3f: GOTO 0xb6f

0xb40: PushEmpty(string)
0xb41: Stack[-1] = "Neutral"
0xb42: Call 0xb8d

0xb43: Pop(1)
0xb44: Push((int) 9272)
0xb45: @@ SetMessage(Stack[-1])
0xb46: Pop(1)
0xb47: @@ ClearReplies()
0xb48: Pop(0)
0xb49: Push((int) 9273)
0xb4a: Push((int) 10180)
0xb4b: Push((int) 10179)
0xb4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4d: Pop(3)
0xb4e: Push((int) 9280)
0xb4f: Push((int) 10180)
0xb50: Push((int) 10186)
0xb51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb52: Pop(3)
0xb53: GOTO 0xb6f

0xb54: PushEmpty(string)
0xb55: Stack[-1] = "Neutral"
0xb56: Call 0xb8d

0xb57: Pop(1)
0xb58: Push((int) 9281)
0xb59: @@ SetMessage(Stack[-1])
0xb5a: Pop(1)
0xb5b: @@ ClearReplies()
0xb5c: Pop(0)
0xb5d: Push((int) 9282)
0xb5e: Push((int) 10190)
0xb5f: Push((int) 10189)
0xb60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb61: Pop(3)
0xb62: Push((int) 9292)
0xb63: Push((int) 10190)
0xb64: Push((int) 10199)
0xb65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb66: Pop(3)
0xb67: Push((int) 9293)
0xb68: Push((int) 10190)
0xb69: Push((int) 10201)
0xb6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6b: Pop(3)
0xb6c: GOTO 0xb6f

0xb6d: Return(); Pop(0)

0xb6e: GOTO 0xb12

0xb6f: PushEmpty(bool)
0xb70: Call 0x160d

0xb71: Pop(0)
0xb72: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb73: @ lshWaitForAnimEnd()
0xb74: Pop(0)
0xb75: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb76: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb77: GOTO 0xb7d

0xb78: PushEmpty(string)
0xb79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb7a: Call 0x1593

0xb7b: Pop(1)
0xb7c: GOTO 0xb73

0xb7d: GOTO 0xb8c

0xb7e: Push("all")
0xb7f: Push("idle")
0xb80: @ PlayAnimation(Stack[-2], Stack[-1])
0xb81: Pop(2)
0xb82: @ WaitForAnimEnd()
0xb83: Pop(0)
0xb84: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb85: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb86: GOTO 0xb8c

0xb87: Push("all")
0xb88: Push("idle")
0xb89: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8a: Pop(2)
0xb8b: GOTO 0xb82

0xb8c: Return(); Pop(0)

0xb8d: PushEmpty()
0xb8e: PushEmpty(bool)
0xb8f: Call 0x160d

0xb90: Pop(0)
0xb91: Pop(1); Push((bool) Stack[-1] == 0)
0xb92: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb93: Return(); Pop(0)

0xb94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb95: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb96: Return(); Pop(0)

0xb97: PushEmpty(string)
0xb98: Stack[-1] = Stack[-2]
0xb99: Call 0x1593

0xb9a: Pop(1)
0xb9b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9c: Return(); Pop(0)

0xb9d: PushEmpty()
0xb9e: Push((int) 1)
0xb9f: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xba0: PushEmpty()
0xba1: Call 0x15a5

0xba2: Pop(0)
0xba3: Push((int) 7333)
0xba4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba5: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xba6: PushEmpty(object, object)
0xba7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba9: Call 0x164a

0xbaa: Pop(2)
0xbab: PushEmpty(object, object)
0xbac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbae: Call 0x165c

0xbaf: Pop(2)
0xbb0: PushEmpty(object, object)
0xbb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb3: Call 0x16c4

0xbb4: Pop(2)
0xbb5: Push((int) 7336)
0xbb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb7: IF (Stack[-1] == 0) GOTO 0xbc7; Pop(1)

0xbb8: PushEmpty(object, object)
0xbb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbbb: Call 0x164a

0xbbc: Pop(2)
0xbbd: PushEmpty(object, object)
0xbbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc0: Call 0x165c

0xbc1: Pop(2)
0xbc2: PushEmpty(object, object)
0xbc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc5: Call 0x16c4

0xbc6: Pop(2)
0xbc7: Push((int) 7337)
0xbc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc9: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbca: PushEmpty(object, object)
0xbcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbcd: Call 0x164a

0xbce: Pop(2)
0xbcf: PushEmpty(object, object)
0xbd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd2: Call 0x165c

0xbd3: Pop(2)
0xbd4: PushEmpty(object, object)
0xbd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd7: Call 0x16c4

0xbd8: Pop(2)
0xbd9: Push((int) 7976)
0xbda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbdb: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbdc: PushEmpty(object, object)
0xbdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbdf: Call 0x1650

0xbe0: Pop(2)
0xbe1: Push((int) 7981)
0xbe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe3: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe4: PushEmpty(object, object)
0xbe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe7: Call 0x1650

0xbe8: Pop(2)
0xbe9: Push((int) 7969)
0xbea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbeb: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbec: PushEmpty(object, object)
0xbed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbef: Call 0x1650

0xbf0: Pop(2)
0xbf1: Push((int) 7293)
0xbf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf3: IF (Stack[-1] == 0) GOTO 0xc4d; Pop(1)

0xbf4: PushEmpty(string)
0xbf5: Stack[-1] = "Neutral"
0xbf6: Call 0xb8d

0xbf7: Pop(1)
0xbf8: Push((int) 6624)
0xbf9: @@ SetMessage(Stack[-1])
0xbfa: Pop(1)
0xbfb: @@ ClearReplies()
0xbfc: Pop(0)
0xbfd: PushEmpty(bool)
0xbfe: Stack[-1] = (bool) 0
0xbff: PushEmpty(bool, object)
0xc00: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc01: Call 0x189e

0xc02: Pop(1)
0xc03: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc04: PushEmpty(bool, object)
0xc05: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc06: Call 0x18ce

0xc07: Pop(1)
0xc08: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc09: Stack[-1] = (bool) 1
0xc0a: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0b: Push((int) 7217)
0xc0c: Push((int) 7952)
0xc0d: Push((int) 7953)
0xc0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0f: Pop(3)
0xc10: PushEmpty(bool, object)
0xc11: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc12: Call 0x18aa

0xc13: Pop(1)
0xc14: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc15: Push((int) 6949)
0xc16: Push((int) 7656)
0xc17: Push((int) 7655)
0xc18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc19: Pop(3)
0xc1a: Push((int) 6626)
0xc1b: Push((int) -1)
0xc1c: Push((int) 7295)
0xc1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1e: Pop(3)
0xc1f: Return(); Pop(0)

0xc20: PushEmpty(string)
0xc21: Stack[-1] = "Neutral"
0xc22: Call 0xb8d

0xc23: Pop(1)
0xc24: Push((int) 9272)
0xc25: @@ SetMessage(Stack[-1])
0xc26: Pop(1)
0xc27: @@ ClearReplies()
0xc28: Pop(0)
0xc29: Push((int) 9273)
0xc2a: Push((int) 10180)
0xc2b: Push((int) 10179)
0xc2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2d: Pop(3)
0xc2e: Push((int) 9280)
0xc2f: Push((int) 10180)
0xc30: Push((int) 10186)
0xc31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc32: Pop(3)
0xc33: Return(); Pop(0)

0xc34: PushEmpty(string)
0xc35: Stack[-1] = "Neutral"
0xc36: Call 0xb8d

0xc37: Pop(1)
0xc38: Push((int) 9281)
0xc39: @@ SetMessage(Stack[-1])
0xc3a: Pop(1)
0xc3b: @@ ClearReplies()
0xc3c: Pop(0)
0xc3d: Push((int) 9282)
0xc3e: Push((int) 10190)
0xc3f: Push((int) 10189)
0xc40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc41: Pop(3)
0xc42: Push((int) 9292)
0xc43: Push((int) 10190)
0xc44: Push((int) 10199)
0xc45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc46: Pop(3)
0xc47: Push((int) 9293)
0xc48: Push((int) 10190)
0xc49: Push((int) 10201)
0xc4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4b: Pop(3)
0xc4c: Return(); Pop(0)

0xc4d: Push((int) 10190)
0xc4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4f: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc50: PushEmpty(string)
0xc51: Stack[-1] = "Neutral"
0xc52: Call 0xb8d

0xc53: Pop(1)
0xc54: Push((int) 9283)
0xc55: @@ SetMessage(Stack[-1])
0xc56: Pop(1)
0xc57: @@ ClearReplies()
0xc58: Pop(0)
0xc59: Push((int) 9284)
0xc5a: Push((int) 10192)
0xc5b: Push((int) 10191)
0xc5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5d: Pop(3)
0xc5e: Push((int) 9288)
0xc5f: Push((int) 10196)
0xc60: Push((int) 10195)
0xc61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc62: Pop(3)
0xc63: Return(); Pop(0)

0xc64: Push((int) 10196)
0xc65: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc66: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc67: PushEmpty(string)
0xc68: Stack[-1] = "Neutral"
0xc69: Call 0xb8d

0xc6a: Pop(1)
0xc6b: Push((int) 9289)
0xc6c: @@ SetMessage(Stack[-1])
0xc6d: Pop(1)
0xc6e: @@ ClearReplies()
0xc6f: Pop(0)
0xc70: Push((int) 9290)
0xc71: Push((int) -1)
0xc72: Push((int) 10197)
0xc73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc74: Pop(3)
0xc75: Push((int) 9291)
0xc76: Push((int) -1)
0xc77: Push((int) 10198)
0xc78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc79: Pop(3)
0xc7a: Return(); Pop(0)

0xc7b: Push((int) 10192)
0xc7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7d: IF (Stack[-1] == 0) GOTO 0xc92; Pop(1)

0xc7e: PushEmpty(string)
0xc7f: Stack[-1] = "Neutral"
0xc80: Call 0xb8d

0xc81: Pop(1)
0xc82: Push((int) 9285)
0xc83: @@ SetMessage(Stack[-1])
0xc84: Pop(1)
0xc85: @@ ClearReplies()
0xc86: Pop(0)
0xc87: Push((int) 9286)
0xc88: Push((int) -1)
0xc89: Push((int) 10193)
0xc8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8b: Pop(3)
0xc8c: Push((int) 9287)
0xc8d: Push((int) -1)
0xc8e: Push((int) 10194)
0xc8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc90: Pop(3)
0xc91: Return(); Pop(0)

0xc92: Push((int) 10180)
0xc93: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc94: IF (Stack[-1] == 0) GOTO 0xca9; Pop(1)

0xc95: PushEmpty(string)
0xc96: Stack[-1] = "Neutral"
0xc97: Call 0xb8d

0xc98: Pop(1)
0xc99: Push((int) 9274)
0xc9a: @@ SetMessage(Stack[-1])
0xc9b: Pop(1)
0xc9c: @@ ClearReplies()
0xc9d: Pop(0)
0xc9e: Push((int) 9275)
0xc9f: Push((int) 10182)
0xca0: Push((int) 10181)
0xca1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca2: Pop(3)
0xca3: Push((int) 9279)
0xca4: Push((int) -1)
0xca5: Push((int) 10185)
0xca6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca7: Pop(3)
0xca8: Return(); Pop(0)

0xca9: Push((int) 10182)
0xcaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcab: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcac: PushEmpty(string)
0xcad: Stack[-1] = "Neutral"
0xcae: Call 0xb8d

0xcaf: Pop(1)
0xcb0: Push((int) 9276)
0xcb1: @@ SetMessage(Stack[-1])
0xcb2: Pop(1)
0xcb3: @@ ClearReplies()
0xcb4: Pop(0)
0xcb5: Push((int) 9277)
0xcb6: Push((int) -1)
0xcb7: Push((int) 10183)
0xcb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb9: Pop(3)
0xcba: Push((int) 9278)
0xcbb: Push((int) -1)
0xcbc: Push((int) 10184)
0xcbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbe: Pop(3)
0xcbf: Return(); Pop(0)

0xcc0: Push((int) 7656)
0xcc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc2: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xcc3: PushEmpty(string)
0xcc4: Stack[-1] = "Neutral"
0xcc5: Call 0xb8d

0xcc6: Pop(1)
0xcc7: Push((int) 6950)
0xcc8: @@ SetMessage(Stack[-1])
0xcc9: Pop(1)
0xcca: @@ ClearReplies()
0xccb: Pop(0)
0xccc: Push((int) 6951)
0xccd: Push((int) 7957)
0xcce: Push((int) 7657)
0xccf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd0: Pop(3)
0xcd1: Return(); Pop(0)

0xcd2: Push((int) 7957)
0xcd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd4: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xcd5: PushEmpty(string)
0xcd6: Stack[-1] = "Neutral"
0xcd7: Call 0xb8d

0xcd8: Pop(1)
0xcd9: Push((int) 7220)
0xcda: @@ SetMessage(Stack[-1])
0xcdb: Pop(1)
0xcdc: @@ ClearReplies()
0xcdd: Pop(0)
0xcde: Push((int) 7221)
0xcdf: Push((int) 7962)
0xce0: Push((int) 7958)
0xce1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce2: Pop(3)
0xce3: Push((int) 7222)
0xce4: Push((int) 7960)
0xce5: Push((int) 7959)
0xce6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce7: Pop(3)
0xce8: Return(); Pop(0)

0xce9: Push((int) 7960)
0xcea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xceb: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcec: PushEmpty(string)
0xced: Stack[-1] = "Neutral"
0xcee: Call 0xb8d

0xcef: Pop(1)
0xcf0: Push((int) 7223)
0xcf1: @@ SetMessage(Stack[-1])
0xcf2: Pop(1)
0xcf3: @@ ClearReplies()
0xcf4: Pop(0)
0xcf5: Push((int) 7224)
0xcf6: Push((int) 10153)
0xcf7: Push((int) 7961)
0xcf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf9: Pop(3)
0xcfa: Return(); Pop(0)

0xcfb: Push((int) 7962)
0xcfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfd: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xcfe: PushEmpty(string)
0xcff: Stack[-1] = "Neutral"
0xd00: Call 0xb8d

0xd01: Pop(1)
0xd02: Push((int) 7225)
0xd03: @@ SetMessage(Stack[-1])
0xd04: Pop(1)
0xd05: @@ ClearReplies()
0xd06: Pop(0)
0xd07: Push((int) 7226)
0xd08: Push((int) 7965)
0xd09: Push((int) 7964)
0xd0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0b: Pop(3)
0xd0c: PushEmpty(bool, object)
0xd0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0e: Call 0x18c2

0xd0f: Pop(1)
0xd10: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd11: Push((int) 7228)
0xd12: Push((int) 7967)
0xd13: Push((int) 7966)
0xd14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd15: Pop(3)
0xd16: Return(); Pop(0)

0xd17: Push((int) 7967)
0xd18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd19: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd1a: PushEmpty(string)
0xd1b: Stack[-1] = "Neutral"
0xd1c: Call 0xb8d

0xd1d: Pop(1)
0xd1e: Push((int) 7229)
0xd1f: @@ SetMessage(Stack[-1])
0xd20: Pop(1)
0xd21: @@ ClearReplies()
0xd22: Pop(0)
0xd23: Push((int) 7230)
0xd24: Push((int) 10155)
0xd25: Push((int) 7968)
0xd26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd27: Pop(3)
0xd28: Push((int) 7231)
0xd29: Push((int) -1)
0xd2a: Push((int) 7969)
0xd2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2c: Pop(3)
0xd2d: Return(); Pop(0)

0xd2e: Push((int) 7965)
0xd2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd30: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd31: PushEmpty(object, object)
0xd32: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd33: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd34: Call 0x1811

0xd35: Pop(2)
0xd36: PushEmpty(string)
0xd37: Stack[-1] = "Neutral"
0xd38: Call 0xb8d

0xd39: Pop(1)
0xd3a: Push((int) 7227)
0xd3b: @@ SetMessage(Stack[-1])
0xd3c: Pop(1)
0xd3d: @@ ClearReplies()
0xd3e: Pop(0)
0xd3f: Push((int) 7232)
0xd40: Push((int) 7973)
0xd41: Push((int) 7970)
0xd42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd43: Pop(3)
0xd44: PushEmpty(bool, object)
0xd45: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd46: Call 0x1a2a

0xd47: Pop(1)
0xd48: Pop(1); Push((bool) Stack[-1] == 0)
0xd49: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd4a: Push((int) 7233)
0xd4b: Push((int) 7972)
0xd4c: Push((int) 7971)
0xd4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4e: Pop(3)
0xd4f: PushEmpty(bool, object)
0xd50: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd51: Call 0x18c2

0xd52: Pop(1)
0xd53: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd54: Push((int) 7236)
0xd55: Push((int) 7975)
0xd56: Push((int) 7974)
0xd57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd58: Pop(3)
0xd59: Return(); Pop(0)

0xd5a: Push((int) 7975)
0xd5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd5d: PushEmpty(string)
0xd5e: Stack[-1] = "Neutral"
0xd5f: Call 0xb8d

0xd60: Pop(1)
0xd61: Push((int) 7237)
0xd62: @@ SetMessage(Stack[-1])
0xd63: Pop(1)
0xd64: @@ ClearReplies()
0xd65: Pop(0)
0xd66: Push((int) 7240)
0xd67: Push((int) 10157)
0xd68: Push((int) 7979)
0xd69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6a: Pop(3)
0xd6b: Push((int) 7241)
0xd6c: Push((int) -1)
0xd6d: Push((int) 7981)
0xd6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6f: Pop(3)
0xd70: Return(); Pop(0)

0xd71: Push((int) 7972)
0xd72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd74: PushEmpty(object, object)
0xd75: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd77: Call 0x1656

0xd78: Pop(2)
0xd79: PushEmpty(string)
0xd7a: Stack[-1] = "Neutral"
0xd7b: Call 0xb8d

0xd7c: Pop(1)
0xd7d: Push((int) 7234)
0xd7e: @@ SetMessage(Stack[-1])
0xd7f: Pop(1)
0xd80: @@ ClearReplies()
0xd81: Pop(0)
0xd82: Push((int) 7239)
0xd83: Push((int) 10157)
0xd84: Push((int) 7977)
0xd85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd86: Pop(3)
0xd87: Return(); Pop(0)

0xd88: Push((int) 7973)
0xd89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd8b: PushEmpty(string)
0xd8c: Stack[-1] = "Neutral"
0xd8d: Call 0xb8d

0xd8e: Pop(1)
0xd8f: Push((int) 7235)
0xd90: @@ SetMessage(Stack[-1])
0xd91: Pop(1)
0xd92: @@ ClearReplies()
0xd93: Pop(0)
0xd94: Push((int) 7238)
0xd95: Push((int) -1)
0xd96: Push((int) 7976)
0xd97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd98: Pop(3)
0xd99: Return(); Pop(0)

0xd9a: Push((int) 7952)
0xd9b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9c: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xd9d: PushEmpty(string)
0xd9e: Stack[-1] = "Neutral"
0xd9f: Call 0xb8d

0xda0: Pop(1)
0xda1: Push((int) 7216)
0xda2: @@ SetMessage(Stack[-1])
0xda3: Pop(1)
0xda4: @@ ClearReplies()
0xda5: Pop(0)
0xda6: Push((int) 6651)
0xda7: Push((int) 7326)
0xda8: Push((int) 7325)
0xda9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaa: Pop(3)
0xdab: Push((int) 6672)
0xdac: Push((int) 7954)
0xdad: Push((int) 7352)
0xdae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaf: Pop(3)
0xdb0: Return(); Pop(0)

0xdb1: Push((int) 7954)
0xdb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdb4: PushEmpty(string)
0xdb5: Stack[-1] = "Neutral"
0xdb6: Call 0xb8d

0xdb7: Pop(1)
0xdb8: Push((int) 7218)
0xdb9: @@ SetMessage(Stack[-1])
0xdba: Pop(1)
0xdbb: @@ ClearReplies()
0xdbc: Pop(0)
0xdbd: Push((int) 7219)
0xdbe: Push((int) 7326)
0xdbf: Push((int) 7955)
0xdc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc1: Pop(3)
0xdc2: Return(); Pop(0)

0xdc3: Push((int) 7326)
0xdc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc5: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdc6: PushEmpty(string)
0xdc7: Stack[-1] = "Neutral"
0xdc8: Call 0xb8d

0xdc9: Pop(1)
0xdca: Push((int) 6652)
0xdcb: @@ SetMessage(Stack[-1])
0xdcc: Pop(1)
0xdcd: @@ ClearReplies()
0xdce: Pop(0)
0xdcf: Push((int) 6653)
0xdd0: Push((int) 7328)
0xdd1: Push((int) 7327)
0xdd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd3: Pop(3)
0xdd4: Push((int) 6668)
0xdd5: Push((int) 7347)
0xdd6: Push((int) 7346)
0xdd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd8: Pop(3)
0xdd9: Return(); Pop(0)

0xdda: Push((int) 7347)
0xddb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xddc: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xddd: PushEmpty(object, object)
0xdde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xddf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde0: Call 0x162c

0xde1: Pop(2)
0xde2: PushEmpty(string)
0xde3: Stack[-1] = "Neutral"
0xde4: Call 0xb8d

0xde5: Pop(1)
0xde6: Push((int) 6669)
0xde7: @@ SetMessage(Stack[-1])
0xde8: Pop(1)
0xde9: @@ ClearReplies()
0xdea: Pop(0)
0xdeb: Push((int) 6670)
0xdec: Push((int) 7332)
0xded: Push((int) 7348)
0xdee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdef: Pop(3)
0xdf0: Push((int) 6671)
0xdf1: Push((int) 7328)
0xdf2: Push((int) 7350)
0xdf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf4: Pop(3)
0xdf5: Return(); Pop(0)

0xdf6: Push((int) 7328)
0xdf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xe12; Pop(1)

0xdf9: PushEmpty(string)
0xdfa: Stack[-1] = "Neutral"
0xdfb: Call 0xb8d

0xdfc: Pop(1)
0xdfd: Push((int) 6654)
0xdfe: @@ SetMessage(Stack[-1])
0xdff: Pop(1)
0xe00: @@ ClearReplies()
0xe01: Pop(0)
0xe02: Push((int) 6655)
0xe03: Push((int) 7330)
0xe04: Push((int) 7329)
0xe05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe06: Pop(3)
0xe07: Push((int) 6666)
0xe08: Push((int) 7332)
0xe09: Push((int) 7342)
0xe0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0b: Pop(3)
0xe0c: Push((int) 6667)
0xe0d: Push((int) 7332)
0xe0e: Push((int) 7344)
0xe0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe10: Pop(3)
0xe11: Return(); Pop(0)

0xe12: Push((int) 7330)
0xe13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe14: IF (Stack[-1] == 0) GOTO 0xe33; Pop(1)

0xe15: PushEmpty(object, object)
0xe16: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe17: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe18: Call 0x162c

0xe19: Pop(2)
0xe1a: PushEmpty(string)
0xe1b: Stack[-1] = "Neutral"
0xe1c: Call 0xb8d

0xe1d: Pop(1)
0xe1e: Push((int) 6656)
0xe1f: @@ SetMessage(Stack[-1])
0xe20: Pop(1)
0xe21: @@ ClearReplies()
0xe22: Pop(0)
0xe23: Push((int) 6657)
0xe24: Push((int) 7332)
0xe25: Push((int) 7331)
0xe26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe27: Pop(3)
0xe28: Push((int) 6664)
0xe29: Push((int) 7332)
0xe2a: Push((int) 7338)
0xe2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2c: Pop(3)
0xe2d: Push((int) 6665)
0xe2e: Push((int) 7332)
0xe2f: Push((int) 7340)
0xe30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe31: Pop(3)
0xe32: Return(); Pop(0)

0xe33: Push((int) 7332)
0xe34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe35: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe36: PushEmpty(object, object)
0xe37: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe38: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe39: Call 0x160f

0xe3a: Pop(2)
0xe3b: PushEmpty(string)
0xe3c: Stack[-1] = "Neutral"
0xe3d: Call 0xb8d

0xe3e: Pop(1)
0xe3f: Push((int) 6658)
0xe40: @@ SetMessage(Stack[-1])
0xe41: Pop(1)
0xe42: @@ ClearReplies()
0xe43: Pop(0)
0xe44: Push((int) 6659)
0xe45: Push((int) -1)
0xe46: Push((int) 7333)
0xe47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe48: Pop(3)
0xe49: PushEmpty(bool, object)
0xe4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4b: Call 0x18b6

0xe4c: Pop(1)
0xe4d: Pop(1); Push((bool) Stack[-1] == 0)
0xe4e: IF (Stack[-1] == 0) GOTO 0xe54; Pop(1)

0xe4f: Push((int) 6660)
0xe50: Push((int) 7335)
0xe51: Push((int) 7334)
0xe52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe53: Pop(3)
0xe54: Push((int) 6663)
0xe55: Push((int) -1)
0xe56: Push((int) 7337)
0xe57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe58: Pop(3)
0xe59: Return(); Pop(0)

0xe5a: Push((int) 7335)
0xe5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5c: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xe5d: PushEmpty(string)
0xe5e: Stack[-1] = "Neutral"
0xe5f: Call 0xb8d

0xe60: Pop(1)
0xe61: Push((int) 6661)
0xe62: @@ SetMessage(Stack[-1])
0xe63: Pop(1)
0xe64: @@ ClearReplies()
0xe65: Pop(0)
0xe66: Push((int) 6662)
0xe67: Push((int) -1)
0xe68: Push((int) 7336)
0xe69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6a: Pop(3)
0xe6b: Return(); Pop(0)

0xe6c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe6d: PushEmpty(bool)
0xe6e: Call 0x160d

0xe6f: Pop(0)
0xe70: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe71: @ lshStopAnimation()
0xe72: Pop(0)
0xe73: GOTO 0xe76

0xe74: @ StopAnimation()
0xe75: Pop(0)
0xe76: Return(); Pop(0)

0xe77: GOTO 0xb9e

0xe78: Return(); Pop(0)

0xe79: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe7a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe7b: PushEmpty(bool, object)
0xe7c: Stack[-1] = Stack[-11]
0xe7d: Call 0x1557

0xe7e: Pop(1)
0xe7f: Pop(1); Push((bool) Stack[-1] == 0)
0xe80: IF (Stack[-1] == 0) GOTO 0xe83; Pop(1)

0xe81: Stack[-10] = (int) -2
0xe82: Return(); Pop(8)

0xe83: @ CreateDialog(Stack[-4])
0xe84: Pop(0)
0xe85: PushEmpty(int)
0xe86: Call 0x1609

0xe87: Pop(0)
0xe88: @@ SetNPCName(Stack[-1])
0xe89: Pop(1)
0xe8a: PushEmpty(string)
0xe8b: Call 0x160b

0xe8c: Pop(0)
0xe8d: @@ SetPhoto(Stack[-1])
0xe8e: Pop(1)
0xe8f: PushEmpty(int)
0xe90: Call 0x1ace

0xe91: Pop(0)
0xe92: @@ SetPlayerName(Stack[-1])
0xe93: Pop(1)
0xe94: Stack[-2] = (int) -1
0xe95: @ IsOverrideActive(Stack[-3])
0xe96: Pop(0)
0xe97: Push(Stack[-3])
0xe98: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe99: Stack[-10] = (int) -2
0xe9a: Return(); Pop(8)

0xe9b: @ DoDialog(Stack[-4])
0xe9c: Pop(0)
0xe9d: PushEmpty(object, object)
0xe9e: Stack[-2] = Stack[-11]
0xe9f: Stack[-1] = Stack[-6]
0xea0: Push(-2, 4); TaskCall(11)
0xea1: Call 0xeb8

0xea2: Pop(-2, 4); TaskReturn
0xea3: Pop(2)
0xea4: @@ IsDialogEnd(Stack[-1])
0xea5: Pop(0)
0xea6: Pop(0); Push((bool) Stack[-1] == 0)
0xea7: IF (Stack[-1] == 0) GOTO 0xead; Pop(1)

0xea8: @ sync()
0xea9: Pop(0)
0xeaa: @@ IsDialogEnd(Stack[-1])
0xeab: Pop(0)
0xeac: GOTO 0xea6

0xead: PushEmpty(object)
0xeae: Stack[-1] = Stack[-10]
0xeaf: Call 0x158f

0xeb0: Pop(1)
0xeb1: @ StopDialog(Stack[-4])
0xeb2: Pop(0)
0xeb3: @@ GetReturnValue(Stack[-2])
0xeb4: Pop(0)
0xeb5: Stack[-10] = Stack[-2]
0xeb6: Return(); Pop(8)

0xeb7: Stack[-4] = 0
0xeb8: PushEmpty()
0xeb9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xeba: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xebb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xebc: Push((int) 1)
0xebd: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xebe: PushEmpty(string)
0xebf: Stack[-1] = "Neutral"
0xec0: Call 0xf14

0xec1: Pop(1)
0xec2: Push((int) 9781)
0xec3: @@ SetMessage(Stack[-1])
0xec4: Pop(1)
0xec5: @@ ClearReplies()
0xec6: Pop(0)
0xec7: PushEmpty(bool)
0xec8: Stack[-1] = (bool) 0
0xec9: PushEmpty(bool, object)
0xeca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xecb: Call 0x18e6

0xecc: Pop(1)
0xecd: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xece: PushEmpty(bool, object)
0xecf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed0: Call 0x18f2

0xed1: Pop(1)
0xed2: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xed3: Stack[-1] = (bool) 1
0xed4: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xed5: Push((int) 10216)
0xed6: Push((int) 11263)
0xed7: Push((int) 11262)
0xed8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed9: Pop(3)
0xeda: PushEmpty(bool, object)
0xedb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xedc: Call 0x1a36

0xedd: Pop(1)
0xede: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xedf: Push((int) 9782)
0xee0: Push((int) 10764)
0xee1: Push((int) 10775)
0xee2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee3: Pop(3)
0xee4: PushEmpty(bool, object)
0xee5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee6: Call 0x1a42

0xee7: Pop(1)
0xee8: IF (Stack[-1] == 0) GOTO 0xeee; Pop(1)

0xee9: Push((int) 10191)
0xeea: Push((int) 11238)
0xeeb: Push((int) 11237)
0xeec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeed: Pop(3)
0xeee: Push((int) 15312)
0xeef: Push((int) -1)
0xef0: Push((int) 16550)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: GOTO 0xef6

0xef4: Return(); Pop(0)

0xef5: GOTO 0xebc

0xef6: PushEmpty(bool)
0xef7: Call 0x160d

0xef8: Pop(0)
0xef9: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xefa: @ lshWaitForAnimEnd()
0xefb: Pop(0)
0xefc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xefd: IF (Stack[-1] == 0) GOTO 0xeff; Pop(1)

0xefe: GOTO 0xf04

0xeff: PushEmpty(string)
0xf00: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf01: Call 0x1593

0xf02: Pop(1)
0xf03: GOTO 0xefa

0xf04: GOTO 0xf13

0xf05: Push("all")
0xf06: Push("idle")
0xf07: @ PlayAnimation(Stack[-2], Stack[-1])
0xf08: Pop(2)
0xf09: @ WaitForAnimEnd()
0xf0a: Pop(0)
0xf0b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf0c: IF (Stack[-1] == 0) GOTO 0xf0e; Pop(1)

0xf0d: GOTO 0xf13

0xf0e: Push("all")
0xf0f: Push("idle")
0xf10: @ PlayAnimation(Stack[-2], Stack[-1])
0xf11: Pop(2)
0xf12: GOTO 0xf09

0xf13: Return(); Pop(0)

0xf14: PushEmpty()
0xf15: PushEmpty(bool)
0xf16: Call 0x160d

0xf17: Pop(0)
0xf18: Pop(1); Push((bool) Stack[-1] == 0)
0xf19: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf1a: Return(); Pop(0)

0xf1b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf1c: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf1d: Return(); Pop(0)

0xf1e: PushEmpty(string)
0xf1f: Stack[-1] = Stack[-2]
0xf20: Call 0x1593

0xf21: Pop(1)
0xf22: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf23: Return(); Pop(0)

0xf24: PushEmpty()
0xf25: Push((int) 1)
0xf26: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0xf27: PushEmpty()
0xf28: Call 0x15a5

0xf29: Pop(0)
0xf2a: Push((int) 11262)
0xf2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf2d: PushEmpty(object, object)
0xf2e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf30: Call 0x16b8

0xf31: Pop(2)
0xf32: Push((int) 11349)
0xf33: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf34: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf35: PushEmpty(object, object)
0xf36: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf37: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf38: Call 0x16b8

0xf39: Pop(2)
0xf3a: PushEmpty(object, object)
0xf3b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3d: Call 0x16be

0xf3e: Pop(2)
0xf3f: PushEmpty(object, object)
0xf40: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf41: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf42: Call 0x16a8

0xf43: Pop(2)
0xf44: Push((int) 11345)
0xf45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf46: IF (Stack[-1] == 0) GOTO 0xf4c; Pop(1)

0xf47: PushEmpty(object, object)
0xf48: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf49: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4a: Call 0x16b8

0xf4b: Pop(2)
0xf4c: Push((int) 10775)
0xf4d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4e: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf4f: PushEmpty(object, object)
0xf50: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf51: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf52: Call 0x1817

0xf53: Pop(2)
0xf54: Push((int) 11237)
0xf55: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf56: IF (Stack[-1] == 0) GOTO 0xf5c; Pop(1)

0xf57: PushEmpty(object, object)
0xf58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5a: Call 0x181d

0xf5b: Pop(2)
0xf5c: Push((int) 10774)
0xf5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5e: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf5f: PushEmpty(string)
0xf60: Stack[-1] = "Neutral"
0xf61: Call 0xf14

0xf62: Pop(1)
0xf63: Push((int) 9781)
0xf64: @@ SetMessage(Stack[-1])
0xf65: Pop(1)
0xf66: @@ ClearReplies()
0xf67: Pop(0)
0xf68: PushEmpty(bool)
0xf69: Stack[-1] = (bool) 0
0xf6a: PushEmpty(bool, object)
0xf6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6c: Call 0x18e6

0xf6d: Pop(1)
0xf6e: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf6f: PushEmpty(bool, object)
0xf70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf71: Call 0x18f2

0xf72: Pop(1)
0xf73: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf74: Stack[-1] = (bool) 1
0xf75: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf76: Push((int) 10216)
0xf77: Push((int) 11263)
0xf78: Push((int) 11262)
0xf79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7a: Pop(3)
0xf7b: PushEmpty(bool, object)
0xf7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7d: Call 0x1a36

0xf7e: Pop(1)
0xf7f: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf80: Push((int) 9782)
0xf81: Push((int) 10764)
0xf82: Push((int) 10775)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: PushEmpty(bool, object)
0xf86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf87: Call 0x1a42

0xf88: Pop(1)
0xf89: IF (Stack[-1] == 0) GOTO 0xf8f; Pop(1)

0xf8a: Push((int) 10191)
0xf8b: Push((int) 11238)
0xf8c: Push((int) 11237)
0xf8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8e: Pop(3)
0xf8f: Push((int) 15312)
0xf90: Push((int) -1)
0xf91: Push((int) 16550)
0xf92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf93: Pop(3)
0xf94: Return(); Pop(0)

0xf95: Push((int) 11238)
0xf96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf97: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xf98: PushEmpty(string)
0xf99: Stack[-1] = "Neutral"
0xf9a: Call 0xf14

0xf9b: Pop(1)
0xf9c: Push((int) 10192)
0xf9d: @@ SetMessage(Stack[-1])
0xf9e: Pop(1)
0xf9f: @@ ClearReplies()
0xfa0: Pop(0)
0xfa1: Push((int) 10295)
0xfa2: Push((int) 11351)
0xfa3: Push((int) 11350)
0xfa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa5: Pop(3)
0xfa6: Return(); Pop(0)

0xfa7: Push((int) 11351)
0xfa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa9: IF (Stack[-1] == 0) GOTO 0xfbe; Pop(1)

0xfaa: PushEmpty(string)
0xfab: Stack[-1] = "Neutral"
0xfac: Call 0xf14

0xfad: Pop(1)
0xfae: Push((int) 10296)
0xfaf: @@ SetMessage(Stack[-1])
0xfb0: Pop(1)
0xfb1: @@ ClearReplies()
0xfb2: Pop(0)
0xfb3: Push((int) 10297)
0xfb4: Push((int) 11353)
0xfb5: Push((int) 11352)
0xfb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb7: Pop(3)
0xfb8: Push((int) 10299)
0xfb9: Push((int) 11353)
0xfba: Push((int) 11354)
0xfbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfbc: Pop(3)
0xfbd: Return(); Pop(0)

0xfbe: Push((int) 11353)
0xfbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc0: IF (Stack[-1] == 0) GOTO 0xfd5; Pop(1)

0xfc1: PushEmpty(string)
0xfc2: Stack[-1] = "Neutral"
0xfc3: Call 0xf14

0xfc4: Pop(1)
0xfc5: Push((int) 10298)
0xfc6: @@ SetMessage(Stack[-1])
0xfc7: Pop(1)
0xfc8: @@ ClearReplies()
0xfc9: Pop(0)
0xfca: Push((int) 10300)
0xfcb: Push((int) -1)
0xfcc: Push((int) 11356)
0xfcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfce: Pop(3)
0xfcf: Push((int) 10301)
0xfd0: Push((int) -1)
0xfd1: Push((int) 11357)
0xfd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd3: Pop(3)
0xfd4: Return(); Pop(0)

0xfd5: Push((int) 10764)
0xfd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd7: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xfd8: PushEmpty(string)
0xfd9: Stack[-1] = "Neutral"
0xfda: Call 0xf14

0xfdb: Pop(1)
0xfdc: Push((int) 9773)
0xfdd: @@ SetMessage(Stack[-1])
0xfde: Pop(1)
0xfdf: @@ ClearReplies()
0xfe0: Pop(0)
0xfe1: Push((int) 9774)
0xfe2: Push((int) 10766)
0xfe3: Push((int) 10765)
0xfe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe5: Pop(3)
0xfe6: Push((int) 9778)
0xfe7: Push((int) 10766)
0xfe8: Push((int) 10769)
0xfe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfea: Pop(3)
0xfeb: Push((int) 9779)
0xfec: Push((int) 10766)
0xfed: Push((int) 10771)
0xfee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfef: Pop(3)
0xff0: Push((int) 9780)
0xff1: Push((int) -1)
0xff2: Push((int) 10773)
0xff3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff4: Pop(3)
0xff5: Return(); Pop(0)

0xff6: Push((int) 10766)
0xff7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff8: IF (Stack[-1] == 0) GOTO 0x100d; Pop(1)

0xff9: PushEmpty(string)
0xffa: Stack[-1] = "Neutral"
0xffb: Call 0xf14

0xffc: Pop(1)
0xffd: Push((int) 9775)
0xffe: @@ SetMessage(Stack[-1])
0xfff: Pop(1)
0x1000: @@ ClearReplies()
0x1001: Pop(0)
0x1002: Push((int) 9776)
0x1003: Push((int) -1)
0x1004: Push((int) 10767)
0x1005: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1006: Pop(3)
0x1007: Push((int) 9777)
0x1008: Push((int) -1)
0x1009: Push((int) 10768)
0x100a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100b: Pop(3)
0x100c: Return(); Pop(0)

0x100d: Push((int) 11263)
0x100e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100f: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x1010: PushEmpty(string)
0x1011: Stack[-1] = "Neutral"
0x1012: Call 0xf14

0x1013: Pop(1)
0x1014: Push((int) 10217)
0x1015: @@ SetMessage(Stack[-1])
0x1016: Pop(1)
0x1017: @@ ClearReplies()
0x1018: Pop(0)
0x1019: Push((int) 10287)
0x101a: Push((int) 11343)
0x101b: Push((int) 11342)
0x101c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101d: Pop(3)
0x101e: Return(); Pop(0)

0x101f: Push((int) 11343)
0x1020: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1021: IF (Stack[-1] == 0) GOTO 0x1036; Pop(1)

0x1022: PushEmpty(string)
0x1023: Stack[-1] = "Neutral"
0x1024: Call 0xf14

0x1025: Pop(1)
0x1026: Push((int) 10288)
0x1027: @@ SetMessage(Stack[-1])
0x1028: Pop(1)
0x1029: @@ ClearReplies()
0x102a: Pop(0)
0x102b: Push((int) 10289)
0x102c: Push((int) 11346)
0x102d: Push((int) 11344)
0x102e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102f: Pop(3)
0x1030: Push((int) 10290)
0x1031: Push((int) -1)
0x1032: Push((int) 11345)
0x1033: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1034: Pop(3)
0x1035: Return(); Pop(0)

0x1036: Push((int) 11346)
0x1037: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1038: IF (Stack[-1] == 0) GOTO 0x1048; Pop(1)

0x1039: PushEmpty(string)
0x103a: Stack[-1] = "Neutral"
0x103b: Call 0xf14

0x103c: Pop(1)
0x103d: Push((int) 10291)
0x103e: @@ SetMessage(Stack[-1])
0x103f: Pop(1)
0x1040: @@ ClearReplies()
0x1041: Pop(0)
0x1042: Push((int) 10292)
0x1043: Push((int) 11348)
0x1044: Push((int) 11347)
0x1045: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1046: Pop(3)
0x1047: Return(); Pop(0)

0x1048: Push((int) 11348)
0x1049: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104a: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0x104b: PushEmpty(string)
0x104c: Stack[-1] = "Neutral"
0x104d: Call 0xf14

0x104e: Pop(1)
0x104f: Push((int) 10293)
0x1050: @@ SetMessage(Stack[-1])
0x1051: Pop(1)
0x1052: @@ ClearReplies()
0x1053: Pop(0)
0x1054: Push((int) 10294)
0x1055: Push((int) -1)
0x1056: Push((int) 11349)
0x1057: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1058: Pop(3)
0x1059: Return(); Pop(0)

0x105a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x105b: PushEmpty(bool)
0x105c: Call 0x160d

0x105d: Pop(0)
0x105e: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x105f: @ lshStopAnimation()
0x1060: Pop(0)
0x1061: GOTO 0x1064

0x1062: @ StopAnimation()
0x1063: Pop(0)
0x1064: Return(); Pop(0)

0x1065: GOTO 0xf25

0x1066: Return(); Pop(0)

0x1067: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1068: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1069: PushEmpty(bool, object)
0x106a: Stack[-1] = Stack[-11]
0x106b: Call 0x1557

0x106c: Pop(1)
0x106d: Pop(1); Push((bool) Stack[-1] == 0)
0x106e: IF (Stack[-1] == 0) GOTO 0x1071; Pop(1)

0x106f: Stack[-10] = (int) -2
0x1070: Return(); Pop(8)

0x1071: @ CreateDialog(Stack[-4])
0x1072: Pop(0)
0x1073: PushEmpty(int)
0x1074: Call 0x1609

0x1075: Pop(0)
0x1076: @@ SetNPCName(Stack[-1])
0x1077: Pop(1)
0x1078: PushEmpty(string)
0x1079: Call 0x160b

0x107a: Pop(0)
0x107b: @@ SetPhoto(Stack[-1])
0x107c: Pop(1)
0x107d: PushEmpty(int)
0x107e: Call 0x1ace

0x107f: Pop(0)
0x1080: @@ SetPlayerName(Stack[-1])
0x1081: Pop(1)
0x1082: Stack[-2] = (int) -1
0x1083: @ IsOverrideActive(Stack[-3])
0x1084: Pop(0)
0x1085: Push(Stack[-3])
0x1086: IF (Stack[-1] == 0) GOTO 0x1089; Pop(1)

0x1087: Stack[-10] = (int) -2
0x1088: Return(); Pop(8)

0x1089: @ DoDialog(Stack[-4])
0x108a: Pop(0)
0x108b: PushEmpty(object, object)
0x108c: Stack[-2] = Stack[-11]
0x108d: Stack[-1] = Stack[-6]
0x108e: Push(-2, 4); TaskCall(13)
0x108f: Call 0x10a6

0x1090: Pop(-2, 4); TaskReturn
0x1091: Pop(2)
0x1092: @@ IsDialogEnd(Stack[-1])
0x1093: Pop(0)
0x1094: Pop(0); Push((bool) Stack[-1] == 0)
0x1095: IF (Stack[-1] == 0) GOTO 0x109b; Pop(1)

0x1096: @ sync()
0x1097: Pop(0)
0x1098: @@ IsDialogEnd(Stack[-1])
0x1099: Pop(0)
0x109a: GOTO 0x1094

0x109b: PushEmpty(object)
0x109c: Stack[-1] = Stack[-10]
0x109d: Call 0x158f

0x109e: Pop(1)
0x109f: @ StopDialog(Stack[-4])
0x10a0: Pop(0)
0x10a1: @@ GetReturnValue(Stack[-2])
0x10a2: Pop(0)
0x10a3: Stack[-10] = Stack[-2]
0x10a4: Return(); Pop(8)

0x10a5: Stack[-4] = 0
0x10a6: PushEmpty()
0x10a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x10a8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x10a9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x10aa: Push((int) 1)
0x10ab: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10ac: PushEmpty(string)
0x10ad: Stack[-1] = "Neutral"
0x10ae: Call 0x1115

0x10af: Pop(1)
0x10b0: Push((int) 11344)
0x10b1: @@ SetMessage(Stack[-1])
0x10b2: Pop(1)
0x10b3: @@ ClearReplies()
0x10b4: Pop(0)
0x10b5: PushEmpty(bool)
0x10b6: Stack[-1] = (bool) 0
0x10b7: PushEmpty(bool, object)
0x10b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10b9: Call 0x18fe

0x10ba: Pop(1)
0x10bb: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10bc: PushEmpty(bool, object)
0x10bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10be: Call 0x190a

0x10bf: Pop(1)
0x10c0: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10c1: Stack[-1] = (bool) 1
0x10c2: IF (Stack[-1] == 0) GOTO 0x10c8; Pop(1)

0x10c3: Push((int) 11346)
0x10c4: Push((int) 12544)
0x10c5: Push((int) 12543)
0x10c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c7: Pop(3)
0x10c8: PushEmpty(bool)
0x10c9: Stack[-1] = (bool) 0
0x10ca: PushEmpty(bool, object)
0x10cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10cc: Call 0x190a

0x10cd: Pop(1)
0x10ce: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10cf: PushEmpty(bool, object)
0x10d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d1: Call 0x1916

0x10d2: Pop(1)
0x10d3: Pop(1); Push((bool) Stack[-1] == 0)
0x10d4: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10d5: Stack[-1] = (bool) 1
0x10d6: IF (Stack[-1] == 0) GOTO 0x10dc; Pop(1)

0x10d7: Push((int) 11473)
0x10d8: Push((int) 12680)
0x10d9: Push((int) 12679)
0x10da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10db: Pop(3)
0x10dc: PushEmpty(bool)
0x10dd: Stack[-1] = (bool) 0
0x10de: PushEmpty(bool, object)
0x10df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e0: Call 0x192e

0x10e1: Pop(1)
0x10e2: IF (Stack[-1] == 0) GOTO 0x10e9; Pop(1)

0x10e3: PushEmpty(bool, object)
0x10e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e5: Call 0x1922

0x10e6: Pop(1)
0x10e7: IF (Stack[-1] == 0) GOTO 0x10e9; Pop(1)

0x10e8: Stack[-1] = (bool) 1
0x10e9: IF (Stack[-1] == 0) GOTO 0x10ef; Pop(1)

0x10ea: Push((int) 11853)
0x10eb: Push((int) 13067)
0x10ec: Push((int) 13066)
0x10ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ee: Pop(3)
0x10ef: Push((int) 11345)
0x10f0: Push((int) -1)
0x10f1: Push((int) 12542)
0x10f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f3: Pop(3)
0x10f4: GOTO 0x10f7

0x10f5: Return(); Pop(0)

0x10f6: GOTO 0x10aa

0x10f7: PushEmpty(bool)
0x10f8: Call 0x160d

0x10f9: Pop(0)
0x10fa: IF (Stack[-1] == 0) GOTO 0x1106; Pop(1)

0x10fb: @ lshWaitForAnimEnd()
0x10fc: Pop(0)
0x10fd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10fe: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10ff: GOTO 0x1105

0x1100: PushEmpty(string)
0x1101: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1102: Call 0x1593

0x1103: Pop(1)
0x1104: GOTO 0x10fb

0x1105: GOTO 0x1114

0x1106: Push("all")
0x1107: Push("idle")
0x1108: @ PlayAnimation(Stack[-2], Stack[-1])
0x1109: Pop(2)
0x110a: @ WaitForAnimEnd()
0x110b: Pop(0)
0x110c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x110d: IF (Stack[-1] == 0) GOTO 0x110f; Pop(1)

0x110e: GOTO 0x1114

0x110f: Push("all")
0x1110: Push("idle")
0x1111: @ PlayAnimation(Stack[-2], Stack[-1])
0x1112: Pop(2)
0x1113: GOTO 0x110a

0x1114: Return(); Pop(0)

0x1115: PushEmpty()
0x1116: PushEmpty(bool)
0x1117: Call 0x160d

0x1118: Pop(0)
0x1119: Pop(1); Push((bool) Stack[-1] == 0)
0x111a: IF (Stack[-1] == 0) GOTO 0x111c; Pop(1)

0x111b: Return(); Pop(0)

0x111c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x111d: IF (Stack[-1] == 0) GOTO 0x111f; Pop(1)

0x111e: Return(); Pop(0)

0x111f: PushEmpty(string)
0x1120: Stack[-1] = Stack[-2]
0x1121: Call 0x1593

0x1122: Pop(1)
0x1123: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1124: Return(); Pop(0)

0x1125: PushEmpty()
0x1126: Push((int) 1)
0x1127: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x1128: PushEmpty()
0x1129: Call 0x15a5

0x112a: Pop(0)
0x112b: Push((int) 12557)
0x112c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112d: IF (Stack[-1] == 0) GOTO 0x1151; Pop(1)

0x112e: PushEmpty(object, object)
0x112f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1131: Call 0x16d4

0x1132: Pop(2)
0x1133: PushEmpty(object, object)
0x1134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1136: Call 0x16da

0x1137: Pop(2)
0x1138: PushEmpty(object, object)
0x1139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113b: Call 0x16e0

0x113c: Pop(2)
0x113d: PushEmpty(object, object)
0x113e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1140: Call 0x1823

0x1141: Pop(2)
0x1142: PushEmpty(object, object)
0x1143: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1145: Call 0x1839

0x1146: Pop(2)
0x1147: PushEmpty(object, object)
0x1148: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1149: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114a: Call 0x182e

0x114b: Pop(2)
0x114c: PushEmpty(object, object)
0x114d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114f: Call 0x1626

0x1150: Pop(2)
0x1151: Push((int) 12559)
0x1152: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1153: IF (Stack[-1] == 0) GOTO 0x1159; Pop(1)

0x1154: PushEmpty(object, object)
0x1155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1157: Call 0x16d4

0x1158: Pop(2)
0x1159: Push((int) 12681)
0x115a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115b: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x115c: PushEmpty(object, object)
0x115d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115f: Call 0x16da

0x1160: Pop(2)
0x1161: PushEmpty(object, object)
0x1162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1164: Call 0x16e0

0x1165: Pop(2)
0x1166: PushEmpty(object, object)
0x1167: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1168: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1169: Call 0x1626

0x116a: Pop(2)
0x116b: PushEmpty(object, object)
0x116c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116e: Call 0x1823

0x116f: Pop(2)
0x1170: PushEmpty(object, object)
0x1171: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1172: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1173: Call 0x182e

0x1174: Pop(2)
0x1175: PushEmpty(object, object)
0x1176: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1177: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1178: Call 0x1839

0x1179: Pop(2)
0x117a: Push((int) 13068)
0x117b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117c: IF (Stack[-1] == 0) GOTO 0x1182; Pop(1)

0x117d: PushEmpty(object, object)
0x117e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1180: Call 0x1724

0x1181: Pop(2)
0x1182: Push((int) 12541)
0x1183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1184: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x1185: PushEmpty(string)
0x1186: Stack[-1] = "Neutral"
0x1187: Call 0x1115

0x1188: Pop(1)
0x1189: Push((int) 11344)
0x118a: @@ SetMessage(Stack[-1])
0x118b: Pop(1)
0x118c: @@ ClearReplies()
0x118d: Pop(0)
0x118e: PushEmpty(bool)
0x118f: Stack[-1] = (bool) 0
0x1190: PushEmpty(bool, object)
0x1191: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1192: Call 0x18fe

0x1193: Pop(1)
0x1194: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x1195: PushEmpty(bool, object)
0x1196: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1197: Call 0x190a

0x1198: Pop(1)
0x1199: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x119a: Stack[-1] = (bool) 1
0x119b: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119c: Push((int) 11346)
0x119d: Push((int) 12544)
0x119e: Push((int) 12543)
0x119f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a0: Pop(3)
0x11a1: PushEmpty(bool)
0x11a2: Stack[-1] = (bool) 0
0x11a3: PushEmpty(bool, object)
0x11a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11a5: Call 0x190a

0x11a6: Pop(1)
0x11a7: IF (Stack[-1] == 0) GOTO 0x11af; Pop(1)

0x11a8: PushEmpty(bool, object)
0x11a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11aa: Call 0x1916

0x11ab: Pop(1)
0x11ac: Pop(1); Push((bool) Stack[-1] == 0)
0x11ad: IF (Stack[-1] == 0) GOTO 0x11af; Pop(1)

0x11ae: Stack[-1] = (bool) 1
0x11af: IF (Stack[-1] == 0) GOTO 0x11b5; Pop(1)

0x11b0: Push((int) 11473)
0x11b1: Push((int) 12680)
0x11b2: Push((int) 12679)
0x11b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b4: Pop(3)
0x11b5: PushEmpty(bool)
0x11b6: Stack[-1] = (bool) 0
0x11b7: PushEmpty(bool, object)
0x11b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11b9: Call 0x192e

0x11ba: Pop(1)
0x11bb: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11bc: PushEmpty(bool, object)
0x11bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11be: Call 0x1922

0x11bf: Pop(1)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11c1: Stack[-1] = (bool) 1
0x11c2: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11c3: Push((int) 11853)
0x11c4: Push((int) 13067)
0x11c5: Push((int) 13066)
0x11c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c7: Pop(3)
0x11c8: Push((int) 11345)
0x11c9: Push((int) -1)
0x11ca: Push((int) 12542)
0x11cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11cc: Pop(3)
0x11cd: Return(); Pop(0)

0x11ce: Push((int) 13067)
0x11cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d0: IF (Stack[-1] == 0) GOTO 0x11e0; Pop(1)

0x11d1: PushEmpty(string)
0x11d2: Stack[-1] = "Neutral"
0x11d3: Call 0x1115

0x11d4: Pop(1)
0x11d5: Push((int) 11854)
0x11d6: @@ SetMessage(Stack[-1])
0x11d7: Pop(1)
0x11d8: @@ ClearReplies()
0x11d9: Pop(0)
0x11da: Push((int) 11855)
0x11db: Push((int) -1)
0x11dc: Push((int) 13068)
0x11dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11de: Pop(3)
0x11df: Return(); Pop(0)

0x11e0: Push((int) 12680)
0x11e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e2: IF (Stack[-1] == 0) GOTO 0x11f2; Pop(1)

0x11e3: PushEmpty(string)
0x11e4: Stack[-1] = "Neutral"
0x11e5: Call 0x1115

0x11e6: Pop(1)
0x11e7: Push((int) 11474)
0x11e8: @@ SetMessage(Stack[-1])
0x11e9: Pop(1)
0x11ea: @@ ClearReplies()
0x11eb: Pop(0)
0x11ec: Push((int) 11475)
0x11ed: Push((int) -1)
0x11ee: Push((int) 12681)
0x11ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f0: Pop(3)
0x11f1: Return(); Pop(0)

0x11f2: Push((int) 12544)
0x11f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f4: IF (Stack[-1] == 0) GOTO 0x1209; Pop(1)

0x11f5: PushEmpty(string)
0x11f6: Stack[-1] = "Neutral"
0x11f7: Call 0x1115

0x11f8: Pop(1)
0x11f9: Push((int) 11347)
0x11fa: @@ SetMessage(Stack[-1])
0x11fb: Pop(1)
0x11fc: @@ ClearReplies()
0x11fd: Pop(0)
0x11fe: Push((int) 11348)
0x11ff: Push((int) 12550)
0x1200: Push((int) 12545)
0x1201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1202: Pop(3)
0x1203: Push((int) 11367)
0x1204: Push((int) 12566)
0x1205: Push((int) 12565)
0x1206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1207: Pop(3)
0x1208: Return(); Pop(0)

0x1209: Push((int) 12566)
0x120a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120b: IF (Stack[-1] == 0) GOTO 0x1220; Pop(1)

0x120c: PushEmpty(string)
0x120d: Stack[-1] = "Neutral"
0x120e: Call 0x1115

0x120f: Pop(1)
0x1210: Push((int) 11368)
0x1211: @@ SetMessage(Stack[-1])
0x1212: Pop(1)
0x1213: @@ ClearReplies()
0x1214: Pop(0)
0x1215: Push((int) 11369)
0x1216: Push((int) 12614)
0x1217: Push((int) 12567)
0x1218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1219: Pop(3)
0x121a: Push((int) 11419)
0x121b: Push((int) 12554)
0x121c: Push((int) 12616)
0x121d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121e: Pop(3)
0x121f: Return(); Pop(0)

0x1220: Push((int) 12614)
0x1221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1222: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x1223: PushEmpty(string)
0x1224: Stack[-1] = "Neutral"
0x1225: Call 0x1115

0x1226: Pop(1)
0x1227: Push((int) 11417)
0x1228: @@ SetMessage(Stack[-1])
0x1229: Pop(1)
0x122a: @@ ClearReplies()
0x122b: Pop(0)
0x122c: Return(); Pop(0)

0x122d: Push((int) 12550)
0x122e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122f: IF (Stack[-1] == 0) GOTO 0x1244; Pop(1)

0x1230: PushEmpty(string)
0x1231: Stack[-1] = "Neutral"
0x1232: Call 0x1115

0x1233: Pop(1)
0x1234: Push((int) 11353)
0x1235: @@ SetMessage(Stack[-1])
0x1236: Pop(1)
0x1237: @@ ClearReplies()
0x1238: Pop(0)
0x1239: Push((int) 11354)
0x123a: Push((int) 12552)
0x123b: Push((int) 12551)
0x123c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123d: Pop(3)
0x123e: Push((int) 11365)
0x123f: Push((int) 12556)
0x1240: Push((int) 12562)
0x1241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1242: Pop(3)
0x1243: Return(); Pop(0)

0x1244: Push((int) 12552)
0x1245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1246: IF (Stack[-1] == 0) GOTO 0x1256; Pop(1)

0x1247: PushEmpty(string)
0x1248: Stack[-1] = "Neutral"
0x1249: Call 0x1115

0x124a: Pop(1)
0x124b: Push((int) 11355)
0x124c: @@ SetMessage(Stack[-1])
0x124d: Pop(1)
0x124e: @@ ClearReplies()
0x124f: Pop(0)
0x1250: Push((int) 11356)
0x1251: Push((int) 12554)
0x1252: Push((int) 12553)
0x1253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1254: Pop(3)
0x1255: Return(); Pop(0)

0x1256: Push((int) 12554)
0x1257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1258: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x1259: PushEmpty(string)
0x125a: Stack[-1] = "Neutral"
0x125b: Call 0x1115

0x125c: Pop(1)
0x125d: Push((int) 11357)
0x125e: @@ SetMessage(Stack[-1])
0x125f: Pop(1)
0x1260: @@ ClearReplies()
0x1261: Pop(0)
0x1262: Push((int) 11358)
0x1263: Push((int) 12556)
0x1264: Push((int) 12555)
0x1265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1266: Pop(3)
0x1267: Push((int) 11421)
0x1268: Push((int) 12620)
0x1269: Push((int) 12619)
0x126a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126b: Pop(3)
0x126c: Return(); Pop(0)

0x126d: Push((int) 12620)
0x126e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126f: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x1270: PushEmpty(string)
0x1271: Stack[-1] = "Neutral"
0x1272: Call 0x1115

0x1273: Pop(1)
0x1274: Push((int) 11422)
0x1275: @@ SetMessage(Stack[-1])
0x1276: Pop(1)
0x1277: @@ ClearReplies()
0x1278: Pop(0)
0x1279: Push((int) 11423)
0x127a: Push((int) 12624)
0x127b: Push((int) 12621)
0x127c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127d: Pop(3)
0x127e: Push((int) 11424)
0x127f: Push((int) 12556)
0x1280: Push((int) 12622)
0x1281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1282: Pop(3)
0x1283: Return(); Pop(0)

0x1284: Push((int) 12624)
0x1285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1286: IF (Stack[-1] == 0) GOTO 0x1296; Pop(1)

0x1287: PushEmpty(string)
0x1288: Stack[-1] = "Neutral"
0x1289: Call 0x1115

0x128a: Pop(1)
0x128b: Push((int) 11425)
0x128c: @@ SetMessage(Stack[-1])
0x128d: Pop(1)
0x128e: @@ ClearReplies()
0x128f: Pop(0)
0x1290: Push((int) 11426)
0x1291: Push((int) 12626)
0x1292: Push((int) 12625)
0x1293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1294: Pop(3)
0x1295: Return(); Pop(0)

0x1296: Push((int) 12626)
0x1297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1298: IF (Stack[-1] == 0) GOTO 0x12a8; Pop(1)

0x1299: PushEmpty(string)
0x129a: Stack[-1] = "Neutral"
0x129b: Call 0x1115

0x129c: Pop(1)
0x129d: Push((int) 11427)
0x129e: @@ SetMessage(Stack[-1])
0x129f: Pop(1)
0x12a0: @@ ClearReplies()
0x12a1: Pop(0)
0x12a2: Push((int) 11428)
0x12a3: Push((int) 12556)
0x12a4: Push((int) 12627)
0x12a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a6: Pop(3)
0x12a7: Return(); Pop(0)

0x12a8: Push((int) 12556)
0x12a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12aa: IF (Stack[-1] == 0) GOTO 0x12bf; Pop(1)

0x12ab: PushEmpty(string)
0x12ac: Stack[-1] = "Neutral"
0x12ad: Call 0x1115

0x12ae: Pop(1)
0x12af: Push((int) 11359)
0x12b0: @@ SetMessage(Stack[-1])
0x12b1: Pop(1)
0x12b2: @@ ClearReplies()
0x12b3: Pop(0)
0x12b4: Push((int) 11360)
0x12b5: Push((int) -1)
0x12b6: Push((int) 12557)
0x12b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b8: Pop(3)
0x12b9: Push((int) 11362)
0x12ba: Push((int) -1)
0x12bb: Push((int) 12559)
0x12bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12bd: Pop(3)
0x12be: Return(); Pop(0)

0x12bf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12c0: PushEmpty(bool)
0x12c1: Call 0x160d

0x12c2: Pop(0)
0x12c3: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12c4: @ lshStopAnimation()
0x12c5: Pop(0)
0x12c6: GOTO 0x12c9

0x12c7: @ StopAnimation()
0x12c8: Pop(0)
0x12c9: Return(); Pop(0)

0x12ca: GOTO 0x1126

0x12cb: Return(); Pop(0)

0x12cc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x12ce: PushEmpty(bool, object)
0x12cf: Stack[-1] = Stack[-11]
0x12d0: Call 0x1557

0x12d1: Pop(1)
0x12d2: Pop(1); Push((bool) Stack[-1] == 0)
0x12d3: IF (Stack[-1] == 0) GOTO 0x12d6; Pop(1)

0x12d4: Stack[-10] = (int) -2
0x12d5: Return(); Pop(8)

0x12d6: @ CreateDialog(Stack[-4])
0x12d7: Pop(0)
0x12d8: PushEmpty(int)
0x12d9: Call 0x1609

0x12da: Pop(0)
0x12db: @@ SetNPCName(Stack[-1])
0x12dc: Pop(1)
0x12dd: PushEmpty(string)
0x12de: Call 0x160b

0x12df: Pop(0)
0x12e0: @@ SetPhoto(Stack[-1])
0x12e1: Pop(1)
0x12e2: PushEmpty(int)
0x12e3: Call 0x1ace

0x12e4: Pop(0)
0x12e5: @@ SetPlayerName(Stack[-1])
0x12e6: Pop(1)
0x12e7: Stack[-2] = (int) -1
0x12e8: @ IsOverrideActive(Stack[-3])
0x12e9: Pop(0)
0x12ea: Push(Stack[-3])
0x12eb: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12ec: Stack[-10] = (int) -2
0x12ed: Return(); Pop(8)

0x12ee: @ DoDialog(Stack[-4])
0x12ef: Pop(0)
0x12f0: PushEmpty(object, object)
0x12f1: Stack[-2] = Stack[-11]
0x12f2: Stack[-1] = Stack[-6]
0x12f3: Push(-2, 4); TaskCall(15)
0x12f4: Call 0x130b

0x12f5: Pop(-2, 4); TaskReturn
0x12f6: Pop(2)
0x12f7: @@ IsDialogEnd(Stack[-1])
0x12f8: Pop(0)
0x12f9: Pop(0); Push((bool) Stack[-1] == 0)
0x12fa: IF (Stack[-1] == 0) GOTO 0x1300; Pop(1)

0x12fb: @ sync()
0x12fc: Pop(0)
0x12fd: @@ IsDialogEnd(Stack[-1])
0x12fe: Pop(0)
0x12ff: GOTO 0x12f9

0x1300: PushEmpty(object)
0x1301: Stack[-1] = Stack[-10]
0x1302: Call 0x158f

0x1303: Pop(1)
0x1304: @ StopDialog(Stack[-4])
0x1305: Pop(0)
0x1306: @@ GetReturnValue(Stack[-2])
0x1307: Pop(0)
0x1308: Stack[-10] = Stack[-2]
0x1309: Return(); Pop(8)

0x130a: Stack[-4] = 0
0x130b: PushEmpty()
0x130c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x130d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x130e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x130f: Push((int) 1)
0x1310: IF (Stack[-1] == 0) GOTO 0x1353; Pop(1)

0x1311: PushEmpty(bool, object)
0x1312: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1313: Call 0x193a

0x1314: Pop(1)
0x1315: IF (Stack[-1] == 0) GOTO 0x1325; Pop(1)

0x1316: PushEmpty(string)
0x1317: Stack[-1] = "Neutral"
0x1318: Call 0x1371

0x1319: Pop(1)
0x131a: Push((int) 11872)
0x131b: @@ SetMessage(Stack[-1])
0x131c: Pop(1)
0x131d: @@ ClearReplies()
0x131e: Pop(0)
0x131f: Push((int) 11873)
0x1320: Push((int) 13087)
0x1321: Push((int) 13086)
0x1322: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1323: Pop(3)
0x1324: GOTO 0x1353

0x1325: PushEmpty(string)
0x1326: Stack[-1] = "Neutral"
0x1327: Call 0x1371

0x1328: Pop(1)
0x1329: Push((int) 11897)
0x132a: @@ SetMessage(Stack[-1])
0x132b: Pop(1)
0x132c: @@ ClearReplies()
0x132d: Pop(0)
0x132e: PushEmpty(bool, object)
0x132f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1330: Call 0x1946

0x1331: Pop(1)
0x1332: IF (Stack[-1] == 0) GOTO 0x1338; Pop(1)

0x1333: Push((int) 11898)
0x1334: Push((int) 13115)
0x1335: Push((int) 13114)
0x1336: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1337: Pop(3)
0x1338: PushEmpty(bool)
0x1339: Stack[-1] = (bool) 0
0x133a: PushEmpty(bool, object)
0x133b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133c: Call 0x195e

0x133d: Pop(1)
0x133e: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x133f: PushEmpty(bool, object)
0x1340: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1341: Call 0x1a4e

0x1342: Pop(1)
0x1343: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x1344: Stack[-1] = (bool) 1
0x1345: IF (Stack[-1] == 0) GOTO 0x134b; Pop(1)

0x1346: Push((int) 11907)
0x1347: Push((int) 13124)
0x1348: Push((int) 13123)
0x1349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134a: Pop(3)
0x134b: Push((int) 11915)
0x134c: Push((int) -1)
0x134d: Push((int) 13131)
0x134e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134f: Pop(3)
0x1350: GOTO 0x1353

0x1351: Return(); Pop(0)

0x1352: GOTO 0x130f

0x1353: PushEmpty(bool)
0x1354: Call 0x160d

0x1355: Pop(0)
0x1356: IF (Stack[-1] == 0) GOTO 0x1362; Pop(1)

0x1357: @ lshWaitForAnimEnd()
0x1358: Pop(0)
0x1359: Push( Stack[3 + Tasks[-1].StackPointer] )
0x135a: IF (Stack[-1] == 0) GOTO 0x135c; Pop(1)

0x135b: GOTO 0x1361

0x135c: PushEmpty(string)
0x135d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x135e: Call 0x1593

0x135f: Pop(1)
0x1360: GOTO 0x1357

0x1361: GOTO 0x1370

0x1362: Push("all")
0x1363: Push("idle")
0x1364: @ PlayAnimation(Stack[-2], Stack[-1])
0x1365: Pop(2)
0x1366: @ WaitForAnimEnd()
0x1367: Pop(0)
0x1368: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1369: IF (Stack[-1] == 0) GOTO 0x136b; Pop(1)

0x136a: GOTO 0x1370

0x136b: Push("all")
0x136c: Push("idle")
0x136d: @ PlayAnimation(Stack[-2], Stack[-1])
0x136e: Pop(2)
0x136f: GOTO 0x1366

0x1370: Return(); Pop(0)

0x1371: PushEmpty()
0x1372: PushEmpty(bool)
0x1373: Call 0x160d

0x1374: Pop(0)
0x1375: Pop(1); Push((bool) Stack[-1] == 0)
0x1376: IF (Stack[-1] == 0) GOTO 0x1378; Pop(1)

0x1377: Return(); Pop(0)

0x1378: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1379: IF (Stack[-1] == 0) GOTO 0x137b; Pop(1)

0x137a: Return(); Pop(0)

0x137b: PushEmpty(string)
0x137c: Stack[-1] = Stack[-2]
0x137d: Call 0x1593

0x137e: Pop(1)
0x137f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1380: Return(); Pop(0)

0x1381: PushEmpty()
0x1382: Push((int) 1)
0x1383: IF (Stack[-1] == 0) GOTO 0x153e; Pop(1)

0x1384: PushEmpty()
0x1385: Call 0x15a5

0x1386: Pop(0)
0x1387: Push((int) 13112)
0x1388: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1389: IF (Stack[-1] == 0) GOTO 0x138f; Pop(1)

0x138a: PushEmpty(object, object)
0x138b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x138d: Call 0x172a

0x138e: Pop(2)
0x138f: Push((int) 13122)
0x1390: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1391: IF (Stack[-1] == 0) GOTO 0x139c; Pop(1)

0x1392: PushEmpty(object, object)
0x1393: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1394: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1395: Call 0x1756

0x1396: Pop(2)
0x1397: PushEmpty(object, object)
0x1398: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1399: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139a: Call 0x178b

0x139b: Pop(2)
0x139c: Push((int) 13123)
0x139d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139e: IF (Stack[-1] == 0) GOTO 0x13a4; Pop(1)

0x139f: PushEmpty(object, object)
0x13a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a2: Call 0x1844

0x13a3: Pop(2)
0x13a4: Push((int) 13085)
0x13a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a6: IF (Stack[-1] == 0) GOTO 0x13e7; Pop(1)

0x13a7: PushEmpty(bool, object)
0x13a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a9: Call 0x193a

0x13aa: Pop(1)
0x13ab: IF (Stack[-1] == 0) GOTO 0x13bb; Pop(1)

0x13ac: PushEmpty(string)
0x13ad: Stack[-1] = "Neutral"
0x13ae: Call 0x1371

0x13af: Pop(1)
0x13b0: Push((int) 11872)
0x13b1: @@ SetMessage(Stack[-1])
0x13b2: Pop(1)
0x13b3: @@ ClearReplies()
0x13b4: Pop(0)
0x13b5: Push((int) 11873)
0x13b6: Push((int) 13087)
0x13b7: Push((int) 13086)
0x13b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b9: Pop(3)
0x13ba: Return(); Pop(0)

0x13bb: PushEmpty(string)
0x13bc: Stack[-1] = "Neutral"
0x13bd: Call 0x1371

0x13be: Pop(1)
0x13bf: Push((int) 11897)
0x13c0: @@ SetMessage(Stack[-1])
0x13c1: Pop(1)
0x13c2: @@ ClearReplies()
0x13c3: Pop(0)
0x13c4: PushEmpty(bool, object)
0x13c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c6: Call 0x1946

0x13c7: Pop(1)
0x13c8: IF (Stack[-1] == 0) GOTO 0x13ce; Pop(1)

0x13c9: Push((int) 11898)
0x13ca: Push((int) 13115)
0x13cb: Push((int) 13114)
0x13cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13cd: Pop(3)
0x13ce: PushEmpty(bool)
0x13cf: Stack[-1] = (bool) 0
0x13d0: PushEmpty(bool, object)
0x13d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d2: Call 0x195e

0x13d3: Pop(1)
0x13d4: IF (Stack[-1] == 0) GOTO 0x13db; Pop(1)

0x13d5: PushEmpty(bool, object)
0x13d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d7: Call 0x1a4e

0x13d8: Pop(1)
0x13d9: IF (Stack[-1] == 0) GOTO 0x13db; Pop(1)

0x13da: Stack[-1] = (bool) 1
0x13db: IF (Stack[-1] == 0) GOTO 0x13e1; Pop(1)

0x13dc: Push((int) 11907)
0x13dd: Push((int) 13124)
0x13de: Push((int) 13123)
0x13df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e0: Pop(3)
0x13e1: Push((int) 11915)
0x13e2: Push((int) -1)
0x13e3: Push((int) 13131)
0x13e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e5: Pop(3)
0x13e6: Return(); Pop(0)

0x13e7: Push((int) 13124)
0x13e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e9: IF (Stack[-1] == 0) GOTO 0x13f9; Pop(1)

0x13ea: PushEmpty(string)
0x13eb: Stack[-1] = "Neutral"
0x13ec: Call 0x1371

0x13ed: Pop(1)
0x13ee: Push((int) 11908)
0x13ef: @@ SetMessage(Stack[-1])
0x13f0: Pop(1)
0x13f1: @@ ClearReplies()
0x13f2: Pop(0)
0x13f3: Push((int) 11909)
0x13f4: Push((int) 13126)
0x13f5: Push((int) 13125)
0x13f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f7: Pop(3)
0x13f8: Return(); Pop(0)

0x13f9: Push((int) 13126)
0x13fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13fb: IF (Stack[-1] == 0) GOTO 0x140b; Pop(1)

0x13fc: PushEmpty(string)
0x13fd: Stack[-1] = "Neutral"
0x13fe: Call 0x1371

0x13ff: Pop(1)
0x1400: Push((int) 11910)
0x1401: @@ SetMessage(Stack[-1])
0x1402: Pop(1)
0x1403: @@ ClearReplies()
0x1404: Pop(0)
0x1405: Push((int) 11911)
0x1406: Push((int) 13128)
0x1407: Push((int) 13127)
0x1408: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1409: Pop(3)
0x140a: Return(); Pop(0)

0x140b: Push((int) 13128)
0x140c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140d: IF (Stack[-1] == 0) GOTO 0x1422; Pop(1)

0x140e: PushEmpty(string)
0x140f: Stack[-1] = "Neutral"
0x1410: Call 0x1371

0x1411: Pop(1)
0x1412: Push((int) 11912)
0x1413: @@ SetMessage(Stack[-1])
0x1414: Pop(1)
0x1415: @@ ClearReplies()
0x1416: Pop(0)
0x1417: Push((int) 11913)
0x1418: Push((int) -1)
0x1419: Push((int) 13129)
0x141a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141b: Pop(3)
0x141c: Push((int) 11914)
0x141d: Push((int) -1)
0x141e: Push((int) 13130)
0x141f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1420: Pop(3)
0x1421: Return(); Pop(0)

0x1422: Push((int) 13115)
0x1423: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1424: IF (Stack[-1] == 0) GOTO 0x1434; Pop(1)

0x1425: PushEmpty(string)
0x1426: Stack[-1] = "Neutral"
0x1427: Call 0x1371

0x1428: Pop(1)
0x1429: Push((int) 11899)
0x142a: @@ SetMessage(Stack[-1])
0x142b: Pop(1)
0x142c: @@ ClearReplies()
0x142d: Pop(0)
0x142e: Push((int) 11900)
0x142f: Push((int) 13117)
0x1430: Push((int) 13116)
0x1431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1432: Pop(3)
0x1433: Return(); Pop(0)

0x1434: Push((int) 13117)
0x1435: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1436: IF (Stack[-1] == 0) GOTO 0x1446; Pop(1)

0x1437: PushEmpty(string)
0x1438: Stack[-1] = "Neutral"
0x1439: Call 0x1371

0x143a: Pop(1)
0x143b: Push((int) 11901)
0x143c: @@ SetMessage(Stack[-1])
0x143d: Pop(1)
0x143e: @@ ClearReplies()
0x143f: Pop(0)
0x1440: Push((int) 11902)
0x1441: Push((int) 13119)
0x1442: Push((int) 13118)
0x1443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1444: Pop(3)
0x1445: Return(); Pop(0)

0x1446: Push((int) 13119)
0x1447: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1448: IF (Stack[-1] == 0) GOTO 0x1458; Pop(1)

0x1449: PushEmpty(string)
0x144a: Stack[-1] = "Neutral"
0x144b: Call 0x1371

0x144c: Pop(1)
0x144d: Push((int) 11903)
0x144e: @@ SetMessage(Stack[-1])
0x144f: Pop(1)
0x1450: @@ ClearReplies()
0x1451: Pop(0)
0x1452: Push((int) 11904)
0x1453: Push((int) 13121)
0x1454: Push((int) 13120)
0x1455: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1456: Pop(3)
0x1457: Return(); Pop(0)

0x1458: Push((int) 13121)
0x1459: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145a: IF (Stack[-1] == 0) GOTO 0x146a; Pop(1)

0x145b: PushEmpty(string)
0x145c: Stack[-1] = "Neutral"
0x145d: Call 0x1371

0x145e: Pop(1)
0x145f: Push((int) 11905)
0x1460: @@ SetMessage(Stack[-1])
0x1461: Pop(1)
0x1462: @@ ClearReplies()
0x1463: Pop(0)
0x1464: Push((int) 11906)
0x1465: Push((int) -1)
0x1466: Push((int) 13122)
0x1467: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1468: Pop(3)
0x1469: Return(); Pop(0)

0x146a: Push((int) 13087)
0x146b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146c: IF (Stack[-1] == 0) GOTO 0x147c; Pop(1)

0x146d: PushEmpty(string)
0x146e: Stack[-1] = "Neutral"
0x146f: Call 0x1371

0x1470: Pop(1)
0x1471: Push((int) 11874)
0x1472: @@ SetMessage(Stack[-1])
0x1473: Pop(1)
0x1474: @@ ClearReplies()
0x1475: Pop(0)
0x1476: Push((int) 11875)
0x1477: Push((int) 13089)
0x1478: Push((int) 13088)
0x1479: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147a: Pop(3)
0x147b: Return(); Pop(0)

0x147c: Push((int) 13089)
0x147d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147e: IF (Stack[-1] == 0) GOTO 0x148e; Pop(1)

0x147f: PushEmpty(string)
0x1480: Stack[-1] = "Neutral"
0x1481: Call 0x1371

0x1482: Pop(1)
0x1483: Push((int) 11876)
0x1484: @@ SetMessage(Stack[-1])
0x1485: Pop(1)
0x1486: @@ ClearReplies()
0x1487: Pop(0)
0x1488: Push((int) 11877)
0x1489: Push((int) 13091)
0x148a: Push((int) 13090)
0x148b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148c: Pop(3)
0x148d: Return(); Pop(0)

0x148e: Push((int) 13091)
0x148f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1490: IF (Stack[-1] == 0) GOTO 0x14aa; Pop(1)

0x1491: PushEmpty(string)
0x1492: Stack[-1] = "Neutral"
0x1493: Call 0x1371

0x1494: Pop(1)
0x1495: Push((int) 11878)
0x1496: @@ SetMessage(Stack[-1])
0x1497: Pop(1)
0x1498: @@ ClearReplies()
0x1499: Pop(0)
0x149a: PushEmpty(bool, object)
0x149b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149c: Call 0x18c2

0x149d: Pop(1)
0x149e: IF (Stack[-1] == 0) GOTO 0x14a4; Pop(1)

0x149f: Push((int) 11879)
0x14a0: Push((int) 13093)
0x14a1: Push((int) 13092)
0x14a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a3: Pop(3)
0x14a4: Push((int) 11888)
0x14a5: Push((int) 13093)
0x14a6: Push((int) 13101)
0x14a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a8: Pop(3)
0x14a9: Return(); Pop(0)

0x14aa: Push((int) 13093)
0x14ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14ac: IF (Stack[-1] == 0) GOTO 0x14bc; Pop(1)

0x14ad: PushEmpty(string)
0x14ae: Stack[-1] = "Neutral"
0x14af: Call 0x1371

0x14b0: Pop(1)
0x14b1: Push((int) 11880)
0x14b2: @@ SetMessage(Stack[-1])
0x14b3: Pop(1)
0x14b4: @@ ClearReplies()
0x14b5: Pop(0)
0x14b6: Push((int) 11881)
0x14b7: Push((int) 13095)
0x14b8: Push((int) 13094)
0x14b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14ba: Pop(3)
0x14bb: Return(); Pop(0)

0x14bc: Push((int) 13095)
0x14bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14be: IF (Stack[-1] == 0) GOTO 0x14d3; Pop(1)

0x14bf: PushEmpty(string)
0x14c0: Stack[-1] = "Neutral"
0x14c1: Call 0x1371

0x14c2: Pop(1)
0x14c3: Push((int) 11882)
0x14c4: @@ SetMessage(Stack[-1])
0x14c5: Pop(1)
0x14c6: @@ ClearReplies()
0x14c7: Pop(0)
0x14c8: Push((int) 11883)
0x14c9: Push((int) 13097)
0x14ca: Push((int) 13096)
0x14cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14cc: Pop(3)
0x14cd: Push((int) 11889)
0x14ce: Push((int) 13103)
0x14cf: Push((int) 13102)
0x14d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d1: Pop(3)
0x14d2: Return(); Pop(0)

0x14d3: Push((int) 13103)
0x14d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14d5: IF (Stack[-1] == 0) GOTO 0x14e5; Pop(1)

0x14d6: PushEmpty(string)
0x14d7: Stack[-1] = "Neutral"
0x14d8: Call 0x1371

0x14d9: Pop(1)
0x14da: Push((int) 11890)
0x14db: @@ SetMessage(Stack[-1])
0x14dc: Pop(1)
0x14dd: @@ ClearReplies()
0x14de: Pop(0)
0x14df: Push((int) 11891)
0x14e0: Push((int) 13097)
0x14e1: Push((int) 13104)
0x14e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e3: Pop(3)
0x14e4: Return(); Pop(0)

0x14e5: Push((int) 13097)
0x14e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e7: IF (Stack[-1] == 0) GOTO 0x14f7; Pop(1)

0x14e8: PushEmpty(string)
0x14e9: Stack[-1] = "Neutral"
0x14ea: Call 0x1371

0x14eb: Pop(1)
0x14ec: Push((int) 11884)
0x14ed: @@ SetMessage(Stack[-1])
0x14ee: Pop(1)
0x14ef: @@ ClearReplies()
0x14f0: Pop(0)
0x14f1: Push((int) 11885)
0x14f2: Push((int) 13099)
0x14f3: Push((int) 13098)
0x14f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f5: Pop(3)
0x14f6: Return(); Pop(0)

0x14f7: Push((int) 13099)
0x14f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f9: IF (Stack[-1] == 0) GOTO 0x150e; Pop(1)

0x14fa: PushEmpty(string)
0x14fb: Stack[-1] = "Neutral"
0x14fc: Call 0x1371

0x14fd: Pop(1)
0x14fe: Push((int) 11886)
0x14ff: @@ SetMessage(Stack[-1])
0x1500: Pop(1)
0x1501: @@ ClearReplies()
0x1502: Pop(0)
0x1503: Push((int) 11887)
0x1504: Push((int) 13110)
0x1505: Push((int) 13100)
0x1506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1507: Pop(3)
0x1508: Push((int) 11892)
0x1509: Push((int) 13108)
0x150a: Push((int) 13107)
0x150b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150c: Pop(3)
0x150d: Return(); Pop(0)

0x150e: Push((int) 13108)
0x150f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1510: IF (Stack[-1] == 0) GOTO 0x1520; Pop(1)

0x1511: PushEmpty(string)
0x1512: Stack[-1] = "Neutral"
0x1513: Call 0x1371

0x1514: Pop(1)
0x1515: Push((int) 11893)
0x1516: @@ SetMessage(Stack[-1])
0x1517: Pop(1)
0x1518: @@ ClearReplies()
0x1519: Pop(0)
0x151a: Push((int) 11894)
0x151b: Push((int) 13110)
0x151c: Push((int) 13109)
0x151d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151e: Pop(3)
0x151f: Return(); Pop(0)

0x1520: Push((int) 13110)
0x1521: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1522: IF (Stack[-1] == 0) GOTO 0x1532; Pop(1)

0x1523: PushEmpty(string)
0x1524: Stack[-1] = "Neutral"
0x1525: Call 0x1371

0x1526: Pop(1)
0x1527: Push((int) 11895)
0x1528: @@ SetMessage(Stack[-1])
0x1529: Pop(1)
0x152a: @@ ClearReplies()
0x152b: Pop(0)
0x152c: Push((int) 11896)
0x152d: Push((int) -1)
0x152e: Push((int) 13112)
0x152f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1530: Pop(3)
0x1531: Return(); Pop(0)

0x1532: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1533: PushEmpty(bool)
0x1534: Call 0x160d

0x1535: Pop(0)
0x1536: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1537: @ lshStopAnimation()
0x1538: Pop(0)
0x1539: GOTO 0x153c

0x153a: @ StopAnimation()
0x153b: Pop(0)
0x153c: Return(); Pop(0)

0x153d: GOTO 0x1382

0x153e: Return(); Pop(0)

0x153f: PushEmpty(int, int)
0x1540: @@ GetProperty(Stack[-4], Stack[-1])
0x1541: Pop(0)
0x1542: Pop(0); Push(Stack[-1] + Stack[-3]);
0x1543: @@ SetProperty(Stack[-5], Stack[-1])
0x1544: Pop(1)
0x1545: Return(); Pop(2)

0x1546: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1547: @@ GetPosition(Stack[-4])
0x1548: Pop(0)
0x1549: @ GetPosition(Stack[-3])
0x154a: Pop(0)
0x154b: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x154c: Push(CvectorIndex(Stack[-2], 0))
0x154d: Push(CvectorIndex(Stack[-3], 2))
0x154e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x154f: Pop(2)
0x1550: Stack[-10] = Stack[-1]
0x1551: Return(); Pop(8)

0x1552: PushEmpty(bool, bool)
0x1553: @ IsLoaded(Stack[-1])
0x1554: Pop(0)
0x1555: Stack[-3] = Stack[-1]
0x1556: Return(); Pop(2)

0x1557: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1558: @@ GetPosition(Stack[-7])
0x1559: Pop(0)
0x155a: @@ GetEyesHeight(Stack[-8])
0x155b: Pop(0)
0x155c: Push(CvectorIndex(Stack[-7], 1))
0x155d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x155e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x155f: @ GetPosition(Stack[-6])
0x1560: Pop(0)
0x1561: @ GetEyesHeight(Stack[-8])
0x1562: Pop(0)
0x1563: Push(CvectorIndex(Stack[-6], 1))
0x1564: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1565: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1566: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1567: Push(CvectorIndex(Stack[-5], 1))
0x1568: Stack[-1] = (int) 0
0x1569: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x156a: Pop(0); Push(Stack[-5] | Stack[-5]);
0x156b: Pop(1); Push(Sqrt(Stack[-1]))
0x156c: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x156d: Stack[-4] = -Stack[-5]; Pop(0);
0x156e: Push((int) 70)
0x156f: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1570: PushEmpty(cvector, cvector)
0x1571: Push(CVector(0.0, 1.0, 0.0))
0x1572: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1573: Call 0x15ac

0x1574: Pop(1)
0x1575: Push((int) 25)
0x1576: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1577: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1578: Push(CVector(0.0, 10.0, 0.0))
0x1579: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x157a: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x157b: @ IsOverrideActive(Stack[-1])
0x157c: Pop(0)
0x157d: Push(Stack[-1])
0x157e: IF (Stack[-1] == 0) GOTO 0x1581; Pop(1)

0x157f: Stack[-18] = (bool) 0
0x1580: Return(); Pop(16)

0x1581: @ StopWorld()
0x1582: Pop(0)
0x1583: @ CameraTransit(Stack[-2], Stack[-4])
0x1584: Pop(0)
0x1585: Push(CvectorIndex(Stack[-3], 0))
0x1586: Push(CvectorIndex(Stack[-4], 2))
0x1587: @ Rotate(Stack[-2], Stack[-1])
0x1588: Pop(2)
0x1589: @ CameraWaitForPlayFinish()
0x158a: Pop(0)
0x158b: @ ResumeWorld()
0x158c: Pop(0)
0x158d: Stack[-18] = (bool) 1
0x158e: Return(); Pop(16)

0x158f: PushEmpty()
0x1590: @ CameraSwitchToNormal()
0x1591: Pop(0)
0x1592: Return(); Pop(0)

0x1593: PushEmpty(float, float, float, float)
0x1594: Push("playing ")
0x1595: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1596: @ Trace(Stack[-1])
0x1597: Pop(1)
0x1598: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1599: Pop(0)
0x159a: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x159b: Pop(0)
0x159c: Push("start: ")
0x159d: Pop(1); Push(Stack[-1] + Stack[-3]);
0x159e: @ Trace(Stack[-1])
0x159f: Pop(1)
0x15a0: Push("end: ")
0x15a1: Pop(1); Push(Stack[-1] + Stack[-2]);
0x15a2: @ Trace(Stack[-1])
0x15a3: Pop(1)
0x15a4: Return(); Pop(4)

0x15a5: PushEmpty(bool)
0x15a6: Call 0x160d

0x15a7: Pop(0)
0x15a8: IF (Stack[-1] == 0) GOTO 0x15ab; Pop(1)

0x15a9: @ lshStopSpeech()
0x15aa: Pop(0)
0x15ab: Return(); Pop(0)

0x15ac: PushEmpty(float, float)
0x15ad: Pop(0); Push(Stack[-3] | Stack[-3]);
0x15ae: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x15af: Push((float)0.0)
0x15b0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x15b1: IF (Stack[-1] == 0) GOTO 0x15b4; Pop(1)

0x15b2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x15b3: Return(); Pop(2)

0x15b4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x15b5: Return(); Pop(2)

0x15b6: PushEmpty(int, int)
0x15b7: @ GetVariable(Stack[-3], Stack[-1])
0x15b8: Pop(0)
0x15b9: Stack[-4] = Stack[-1]
0x15ba: Return(); Pop(2)

0x15bb: PushEmpty(object, object, object, object)
0x15bc: @ GetMainOutdoorScene(Stack[-2])
0x15bd: Pop(0)
0x15be: Push(".bin")
0x15bf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x15c0: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x15c1: Pop(1)
0x15c2: Stack[-6] = Stack[-1]
0x15c3: Return(); Pop(4)

0x15c4: Stack[-1] = 0
0x15c5: Stack[-2] = 0
0x15c6: PushEmpty(int, int, bool, int, int, bool)
0x15c7: @@ GetItemID(Stack[-3])
0x15c8: Pop(0)
0x15c9: Push("Category")
0x15ca: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x15cb: Pop(1)
0x15cc: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x15cd: Pop(0)
0x15ce: Pop(0); Push((bool) Stack[-1] == 0)
0x15cf: IF (Stack[-1] == 0) GOTO 0x15d2; Pop(1)

0x15d0: @@ DropItems(Stack[-8], Stack[-7])
0x15d1: Pop(0)
0x15d2: Return(); Pop(6)

0x15d3: PushEmpty(object, object)
0x15d4: @ CreateInvItem(Stack[-1])
0x15d5: Pop(0)
0x15d6: @@ SetItemName(Stack[-4])
0x15d7: Pop(0)
0x15d8: PushEmpty(object, object, int)
0x15d9: Stack[-3] = Stack[-8]
0x15da: Stack[-2] = Stack[-4]
0x15db: Stack[-1] = Stack[-6]
0x15dc: Call 0x15c6

0x15dd: Pop(3)
0x15de: Return(); Pop(2)

0x15df: Stack[-1] = 0
0x15e0: PushEmpty(object, object)
0x15e1: @ FindActor(Stack[-1], Stack[-4])
0x15e2: Pop(0)
0x15e3: Pop(0); Push((bool) Stack[-1] == 0)
0x15e4: IF (Stack[-1] == 0) GOTO 0x15e7; Pop(1)

0x15e5: Stack[-5] = (bool) 0
0x15e6: Return(); Pop(2)

0x15e7: @ Trigger(Stack[-1], Stack[-3])
0x15e8: Pop(0)
0x15e9: Stack[-5] = (bool) 1
0x15ea: Return(); Pop(2)

0x15eb: Stack[-1] = 0
0x15ec: PushEmpty(float, float)
0x15ed: @ GetGameTime(Stack[-1])
0x15ee: Pop(0)
0x15ef: Stack[-3] = Stack[-1]
0x15f0: Return(); Pop(2)

0x15f1: PushEmpty(float, float)
0x15f2: @ GetGameTime(Stack[-1])
0x15f3: Pop(0)
0x15f4: Push((int) 1)
0x15f5: PushEmpty(int)
0x15f6: Push((int) 24)
0x15f7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x15f8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x15f9: Return(); Pop(2)

0x15fa: PushEmpty()
0x15fb: PushEmpty(int)
0x15fc: Call 0x15f1

0x15fd: Pop(0)
0x15fe: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x15ff: Return(); Pop(0)

0x1600: PushEmpty(bool, bool)
0x1601: PushEmpty(string)
0x1602: Stack[-1] = "No"
0x1603: Call 0x1593

0x1604: Pop(1)
0x1605: @ lshWaitForAnimEnd(Stack[-1])
0x1606: Pop(0)
0x1607: Stack[-3] = Stack[-1]
0x1608: Return(); Pop(2)

0x1609: Stack[-1] = (int) 2856
0x160a: Return(); Pop(0)

0x160b: Stack[-1] = "ui/NPC_Anna.png"
0x160c: Return(); Pop(0)

0x160d: Stack[-1] = (bool) 1
0x160e: Return(); Pop(0)

0x160f: PushEmpty()
0x1610: Push("KnowKapella")
0x1611: Push((int) 1)
0x1612: @ SetVariable(Stack[-2], Stack[-1])
0x1613: Pop(2)
0x1614: Return(); Pop(0)

0x1615: PushEmpty()
0x1616: Push("money100 is given")
0x1617: @ Trace(Stack[-1])
0x1618: Pop(1)
0x1619: PushEmpty(object, string, int)
0x161a: Stack[-3] = Stack[-5]
0x161b: Stack[-2] = "money"
0x161c: Stack[-1] = (int) 100
0x161d: Call 0x153f

0x161e: Pop(3)
0x161f: Return(); Pop(0)

0x1620: PushEmpty()
0x1621: Push("playsound")
0x1622: Push("givemoney")
0x1623: @ TriggerWorld(Stack[-2], Stack[-1])
0x1624: Pop(2)
0x1625: Return(); Pop(0)

0x1626: PushEmpty()
0x1627: Push("playsound")
0x1628: Push("giveitem")
0x1629: @ TriggerWorld(Stack[-2], Stack[-1])
0x162a: Pop(2)
0x162b: Return(); Pop(0)

0x162c: PushEmpty()
0x162d: Push("KnowShabnak")
0x162e: Push((int) 1)
0x162f: @ SetVariable(Stack[-2], Stack[-1])
0x1630: Pop(2)
0x1631: Return(); Pop(0)

0x1632: PushEmpty()
0x1633: Push("ood1Anna7")
0x1634: Push((int) 1)
0x1635: @ SetVariable(Stack[-2], Stack[-1])
0x1636: Pop(2)
0x1637: Return(); Pop(0)

0x1638: PushEmpty()
0x1639: Push("ood1Anna8")
0x163a: Push((int) 1)
0x163b: @ SetVariable(Stack[-2], Stack[-1])
0x163c: Pop(2)
0x163d: Return(); Pop(0)

0x163e: PushEmpty()
0x163f: Push("ood1Anna9")
0x1640: Push((int) 1)
0x1641: @ SetVariable(Stack[-2], Stack[-1])
0x1642: Pop(2)
0x1643: Return(); Pop(0)

0x1644: PushEmpty()
0x1645: Push("ood1Anna10")
0x1646: Push((int) 1)
0x1647: @ SetVariable(Stack[-2], Stack[-1])
0x1648: Pop(2)
0x1649: Return(); Pop(0)

0x164a: PushEmpty()
0x164b: Push("ood2Anna1")
0x164c: Push((int) 1)
0x164d: @ SetVariable(Stack[-2], Stack[-1])
0x164e: Pop(2)
0x164f: Return(); Pop(0)

0x1650: PushEmpty()
0x1651: Push("ood2Anna2")
0x1652: Push((int) 1)
0x1653: @ SetVariable(Stack[-2], Stack[-1])
0x1654: Pop(2)
0x1655: Return(); Pop(0)

0x1656: PushEmpty()
0x1657: Push("KnowPochka")
0x1658: Push((int) 1)
0x1659: @ SetVariable(Stack[-2], Stack[-1])
0x165a: Pop(2)
0x165b: Return(); Pop(0)

0x165c: PushEmpty(object, object)
0x165d: Push("d2q01")
0x165e: Push((int) 2)
0x165f: @ SetVariable(Stack[-2], Stack[-1])
0x1660: Pop(2)
0x1661: PushEmpty(object)
0x1662: Call 0x1a9c

0x1663: Stack[-2] = Stack[-1]
0x1664: Pop(1)
0x1665: Push("d2q01AnnaGotoKapella")
0x1666: Push("pt_map_kapella")
0x1667: Push((int) 1)
0x1668: Push((int) 11388)
0x1669: PushEmpty(float)
0x166a: Call 0x15ec

0x166b: Pop(0)
0x166c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x166d: Pop(5)
0x166e: PushEmpty()
0x166f: Call 0x1aef

0x1670: Pop(0)
0x1671: Return(); Pop(2)

0x1672: Stack[-1] = 0
0x1673: PushEmpty()
0x1674: Push("KnowZemlja")
0x1675: Push((int) 1)
0x1676: @ SetVariable(Stack[-2], Stack[-1])
0x1677: Pop(2)
0x1678: Return(); Pop(0)

0x1679: PushEmpty(object, object)
0x167a: PushEmpty(object)
0x167b: Call 0x1a9c

0x167c: Stack[-2] = Stack[-1]
0x167d: Pop(1)
0x167e: Push("d1q02AnnaGotoLaska")
0x167f: Push("pt_map_laska")
0x1680: Push((int) 0)
0x1681: Push((int) 8635)
0x1682: PushEmpty(float)
0x1683: Call 0x15ec

0x1684: Pop(0)
0x1685: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1686: Pop(5)
0x1687: Return(); Pop(2)

0x1688: Stack[-1] = 0
0x1689: PushEmpty()
0x168a: PushEmpty(object, string, float)
0x168b: PushEmpty(object)
0x168c: Call 0x1a9c

0x168d: Stack[-4] = Stack[-1]
0x168e: Pop(1)
0x168f: Stack[-2] = "pt_map_laska"
0x1690: Stack[-1] = (int) 2
0x1691: Call 0x1aad

0x1692: Pop(3)
0x1693: PushEmpty(object)
0x1694: Call 0x1a9c

0x1695: Pop(0)
0x1696: @@ ShowMap(Stack[-1])
0x1697: Pop(1)
0x1698: Return(); Pop(0)

0x1699: PushEmpty()
0x169a: Push("d1q02")
0x169b: Push((int) 2)
0x169c: @ SetVariable(Stack[-2], Stack[-1])
0x169d: Pop(2)
0x169e: PushEmpty()
0x169f: Call 0x1adf

0x16a0: Pop(0)
0x16a1: Return(); Pop(0)

0x16a2: PushEmpty()
0x16a3: Push("KnowNevod")
0x16a4: Push((int) 1)
0x16a5: @ SetVariable(Stack[-2], Stack[-1])
0x16a6: Pop(2)
0x16a7: Return(); Pop(0)

0x16a8: PushEmpty()
0x16a9: PushEmpty(object, string, float)
0x16aa: PushEmpty(object)
0x16ab: Call 0x1a9c

0x16ac: Stack[-4] = Stack[-1]
0x16ad: Pop(1)
0x16ae: Stack[-2] = "pt_map_bigvlad"
0x16af: Stack[-1] = (int) 2
0x16b0: Call 0x1aad

0x16b1: Pop(3)
0x16b2: PushEmpty(object)
0x16b3: Call 0x1a9c

0x16b4: Pop(0)
0x16b5: @@ ShowMap(Stack[-1])
0x16b6: Pop(1)
0x16b7: Return(); Pop(0)

0x16b8: PushEmpty()
0x16b9: Push("ood3Anna1")
0x16ba: Push((int) 1)
0x16bb: @ SetVariable(Stack[-2], Stack[-1])
0x16bc: Pop(2)
0x16bd: Return(); Pop(0)

0x16be: PushEmpty()
0x16bf: Push("d3q02")
0x16c0: Push((int) 6)
0x16c1: @ SetVariable(Stack[-2], Stack[-1])
0x16c2: Pop(2)
0x16c3: Return(); Pop(0)

0x16c4: PushEmpty()
0x16c5: PushEmpty(object, string, float)
0x16c6: PushEmpty(object)
0x16c7: Call 0x1a9c

0x16c8: Stack[-4] = Stack[-1]
0x16c9: Pop(1)
0x16ca: Stack[-2] = "pt_map_kapella"
0x16cb: Stack[-1] = (int) 2
0x16cc: Call 0x1aad

0x16cd: Pop(3)
0x16ce: PushEmpty(object)
0x16cf: Call 0x1a9c

0x16d0: Pop(0)
0x16d1: @@ ShowMap(Stack[-1])
0x16d2: Pop(1)
0x16d3: Return(); Pop(0)

0x16d4: PushEmpty()
0x16d5: Push("ood4Anna1")
0x16d6: Push((int) 1)
0x16d7: @ SetVariable(Stack[-2], Stack[-1])
0x16d8: Pop(2)
0x16d9: Return(); Pop(0)

0x16da: PushEmpty()
0x16db: Push("d4q02AnnaGivesMedcine")
0x16dc: Push((int) 1)
0x16dd: @ SetVariable(Stack[-2], Stack[-1])
0x16de: Pop(2)
0x16df: Return(); Pop(0)

0x16e0: PushEmpty(object, object)
0x16e1: PushEmpty(bool)
0x16e2: Stack[-1] = (bool) 0
0x16e3: PushEmpty(bool)
0x16e4: Stack[-1] = (bool) 0
0x16e5: PushEmpty(int, string)
0x16e6: Stack[-1] = "d4q02AnnaGivesMedcine"
0x16e7: Call 0x15b6

0x16e8: Pop(1)
0x16e9: Push((int) 1)
0x16ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16eb: IF (Stack[-1] == 0) GOTO 0x16f4; Pop(1)

0x16ec: PushEmpty(int, string)
0x16ed: Stack[-1] = "d4q02JuliaGivesMedcine"
0x16ee: Call 0x15b6

0x16ef: Pop(1)
0x16f0: Push((int) 1)
0x16f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16f2: IF (Stack[-1] == 0) GOTO 0x16f4; Pop(1)

0x16f3: Stack[-1] = (bool) 1
0x16f4: IF (Stack[-1] == 0) GOTO 0x16fd; Pop(1)

0x16f5: PushEmpty(int, string)
0x16f6: Stack[-1] = "d4q02LaraGivesMedcine"
0x16f7: Call 0x15b6

0x16f8: Pop(1)
0x16f9: Push((int) 1)
0x16fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16fb: IF (Stack[-1] == 0) GOTO 0x16fd; Pop(1)

0x16fc: Stack[-1] = (bool) 1
0x16fd: IF (Stack[-1] == 0) GOTO 0x1723; Pop(1)

0x16fe: Push("d4q02")
0x16ff: Push((int) 2)
0x1700: @ SetVariable(Stack[-2], Stack[-1])
0x1701: Pop(2)
0x1702: PushEmpty(object)
0x1703: Call 0x1a9c

0x1704: Stack[-2] = Stack[-1]
0x1705: Pop(1)
0x1706: Push("d4q02BirdmaskNearHome")
0x1707: Push("pt_d4q02_birdmask")
0x1708: Push((int) 0)
0x1709: Push((int) 11842)
0x170a: PushEmpty(float)
0x170b: Call 0x15ec

0x170c: Pop(0)
0x170d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x170e: Pop(5)
0x170f: PushEmpty(bool, string, string)
0x1710: Stack[-2] = "quest_d4_02"
0x1711: Stack[-1] = "birdmask"
0x1712: Call 0x15e0

0x1713: Pop(3)
0x1714: PushEmpty(object, string, float)
0x1715: PushEmpty(object)
0x1716: Call 0x1a9c

0x1717: Stack[-4] = Stack[-1]
0x1718: Pop(1)
0x1719: Stack[-2] = "pt_d4q02_birdmask"
0x171a: Stack[-1] = (int) 2
0x171b: Call 0x1aad

0x171c: Pop(3)
0x171d: PushEmpty(object)
0x171e: Call 0x1a9c

0x171f: Pop(0)
0x1720: @@ ShowMap(Stack[-1])
0x1721: Pop(1)
0x1722: Stack[-1] = 0
0x1723: Return(); Pop(2)

0x1724: PushEmpty()
0x1725: Push("ood4Anna2")
0x1726: Push((int) 1)
0x1727: @ SetVariable(Stack[-2], Stack[-1])
0x1728: Pop(2)
0x1729: Return(); Pop(0)

0x172a: PushEmpty(object, object)
0x172b: Push("d5q02")
0x172c: Push((int) 1)
0x172d: @ SetVariable(Stack[-2], Stack[-1])
0x172e: Pop(2)
0x172f: PushEmpty(object)
0x1730: Call 0x1a9c

0x1731: Stack[-2] = Stack[-1]
0x1732: Pop(1)
0x1733: Push("d5q02AnnaGotoGorbun")
0x1734: Push("pt_map_gorbun")
0x1735: Push((int) 0)
0x1736: Push((int) 15360)
0x1737: PushEmpty(float)
0x1738: Call 0x15ec

0x1739: Pop(0)
0x173a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x173b: Pop(5)
0x173c: Push("d5q02AnnaGotoGorbunSelf")
0x173d: Push("pt_map_anna")
0x173e: Push((int) 0)
0x173f: Push((int) 15361)
0x1740: PushEmpty(float)
0x1741: Call 0x15ec

0x1742: Pop(0)
0x1743: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1744: Pop(5)
0x1745: PushEmpty()
0x1746: Call 0x1aff

0x1747: Pop(0)
0x1748: PushEmpty()
0x1749: Call 0x1b0f

0x174a: Pop(0)
0x174b: PushEmpty(object, string)
0x174c: Stack[-1] = "quest_d5_02"
0x174d: Call 0x15bb

0x174e: Pop(2)
0x174f: PushEmpty(bool, string, string)
0x1750: Stack[-2] = "quest_d5_02"
0x1751: Stack[-1] = "place_gorbun"
0x1752: Call 0x15e0

0x1753: Pop(3)
0x1754: Return(); Pop(2)

0x1755: Stack[-1] = 0
0x1756: PushEmpty(object, object)
0x1757: Push("d5q02")
0x1758: Push((int) 3)
0x1759: @ SetVariable(Stack[-2], Stack[-1])
0x175a: Pop(2)
0x175b: PushEmpty(object)
0x175c: Call 0x1a9c

0x175d: Stack[-2] = Stack[-1]
0x175e: Pop(1)
0x175f: Push("d5q02AnnaGotoKabak")
0x1760: Push("pt_map_andrei")
0x1761: Push((int) 0)
0x1762: Push((int) 15363)
0x1763: PushEmpty(float)
0x1764: Call 0x15ec

0x1765: Pop(0)
0x1766: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1767: Pop(5)
0x1768: PushEmpty()
0x1769: Call 0x1b1f

0x176a: Pop(0)
0x176b: Return(); Pop(2)

0x176c: Stack[-1] = 0
0x176d: PushEmpty()
0x176e: Push("KnowMistresses")
0x176f: Push((int) 1)
0x1770: @ SetVariable(Stack[-2], Stack[-1])
0x1771: Pop(2)
0x1772: Return(); Pop(0)

0x1773: PushEmpty()
0x1774: Push("KnowNina")
0x1775: Push((int) 1)
0x1776: @ SetVariable(Stack[-2], Stack[-1])
0x1777: Pop(2)
0x1778: Return(); Pop(0)

0x1779: PushEmpty()
0x177a: Push("KnowViktoria")
0x177b: Push((int) 1)
0x177c: @ SetVariable(Stack[-2], Stack[-1])
0x177d: Pop(2)
0x177e: Return(); Pop(0)

0x177f: PushEmpty()
0x1780: Push("ood1Anna1")
0x1781: Push((int) 1)
0x1782: @ SetVariable(Stack[-2], Stack[-1])
0x1783: Pop(2)
0x1784: Return(); Pop(0)

0x1785: PushEmpty()
0x1786: Push("ood1Anna2")
0x1787: Push((int) 1)
0x1788: @ SetVariable(Stack[-2], Stack[-1])
0x1789: Pop(2)
0x178a: Return(); Pop(0)

0x178b: PushEmpty()
0x178c: PushEmpty(bool)
0x178d: Stack[-1] = (bool) 0
0x178e: PushEmpty(int, string)
0x178f: Stack[-1] = "d5q01"
0x1790: Call 0x15b6

0x1791: Pop(1)
0x1792: Push((int) 7)
0x1793: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1794: IF (Stack[-1] == 0) GOTO 0x179d; Pop(1)

0x1795: PushEmpty(int, string)
0x1796: Stack[-1] = "d5q01"
0x1797: Call 0x15b6

0x1798: Pop(1)
0x1799: Push((int) -1)
0x179a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x179b: IF (Stack[-1] == 0) GOTO 0x179d; Pop(1)

0x179c: Stack[-1] = (bool) 1
0x179d: IF (Stack[-1] == 0) GOTO 0x17a3; Pop(1)

0x179e: PushEmpty(bool, string, string)
0x179f: Stack[-2] = "quest_d5_02"
0x17a0: Stack[-1] = "place_girl"
0x17a1: Call 0x15e0

0x17a2: Pop(3)
0x17a3: Return(); Pop(0)

0x17a4: PushEmpty()
0x17a5: Push("ood1Anna3")
0x17a6: Push((int) 1)
0x17a7: @ SetVariable(Stack[-2], Stack[-1])
0x17a8: Pop(2)
0x17a9: Return(); Pop(0)

0x17aa: PushEmpty()
0x17ab: Push("ood1Anna4")
0x17ac: Push((int) 1)
0x17ad: @ SetVariable(Stack[-2], Stack[-1])
0x17ae: Pop(2)
0x17af: Return(); Pop(0)

0x17b0: PushEmpty()
0x17b1: Push("ood6Anna1")
0x17b2: Push((int) 1)
0x17b3: @ SetVariable(Stack[-2], Stack[-1])
0x17b4: Pop(2)
0x17b5: Return(); Pop(0)

0x17b6: PushEmpty()
0x17b7: Push("ood6Anna2")
0x17b8: Push((int) 1)
0x17b9: @ SetVariable(Stack[-2], Stack[-1])
0x17ba: Pop(2)
0x17bb: Return(); Pop(0)

0x17bc: PushEmpty(object, object)
0x17bd: PushEmpty(int, string)
0x17be: Stack[-1] = "d6q01KnowKillerIsKlara"
0x17bf: Call 0x15b6

0x17c0: Pop(1)
0x17c1: Push((int) 0)
0x17c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17c3: IF (Stack[-1] == 0) GOTO 0x17de; Pop(1)

0x17c4: Push("d6q01KnowKillerIsKlara")
0x17c5: Push((int) 1)
0x17c6: @ SetVariable(Stack[-2], Stack[-1])
0x17c7: Pop(2)
0x17c8: PushEmpty(object)
0x17c9: Call 0x1a9c

0x17ca: Stack[-2] = Stack[-1]
0x17cb: Pop(1)
0x17cc: Push("d6q01KillerIsKlara")
0x17cd: Push("pt_map_alexandr")
0x17ce: Push((int) 1)
0x17cf: Push((int) 15396)
0x17d0: PushEmpty(float)
0x17d1: Call 0x15ec

0x17d2: Pop(0)
0x17d3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17d4: Pop(5)
0x17d5: PushEmpty()
0x17d6: Call 0x1b3f

0x17d7: Pop(0)
0x17d8: PushEmpty(bool, string, string)
0x17d9: Stack[-2] = "quest_d6_01"
0x17da: Stack[-1] = "saburov_klara"
0x17db: Call 0x15e0

0x17dc: Pop(3)
0x17dd: Stack[-1] = 0
0x17de: Return(); Pop(2)

0x17df: PushEmpty()
0x17e0: Push("ood1Anna5")
0x17e1: Push((int) 1)
0x17e2: @ SetVariable(Stack[-2], Stack[-1])
0x17e3: Pop(2)
0x17e4: Return(); Pop(0)

0x17e5: PushEmpty()
0x17e6: Push("ood1Anna6")
0x17e7: Push((int) 1)
0x17e8: @ SetVariable(Stack[-2], Stack[-1])
0x17e9: Pop(2)
0x17ea: Return(); Pop(0)

0x17eb: PushEmpty()
0x17ec: Push("KnowAnna")
0x17ed: Push((int) 1)
0x17ee: @ SetVariable(Stack[-2], Stack[-1])
0x17ef: Pop(2)
0x17f0: Return(); Pop(0)

0x17f1: PushEmpty()
0x17f2: PushEmpty()
0x17f3: Call 0x1b2f

0x17f4: Pop(0)
0x17f5: Push("anna blood is given")
0x17f6: @ Trace(Stack[-1])
0x17f7: Pop(1)
0x17f8: PushEmpty(object, string, int)
0x17f9: Stack[-3] = Stack[-5]
0x17fa: Stack[-2] = "d6q01_anna_blood"
0x17fb: Stack[-1] = (int) 1
0x17fc: Call 0x15d3

0x17fd: Pop(3)
0x17fe: Return(); Pop(0)

0x17ff: PushEmpty()
0x1800: Push("playsound")
0x1801: Push("giveitem")
0x1802: @ TriggerWorld(Stack[-2], Stack[-1])
0x1803: Pop(2)
0x1804: Return(); Pop(0)

0x1805: PushEmpty()
0x1806: Push("ood6Anna3")
0x1807: Push((int) 1)
0x1808: @ SetVariable(Stack[-2], Stack[-1])
0x1809: Pop(2)
0x180a: Return(); Pop(0)

0x180b: PushEmpty()
0x180c: Push("KnowLaska")
0x180d: Push((int) 1)
0x180e: @ SetVariable(Stack[-2], Stack[-1])
0x180f: Pop(2)
0x1810: Return(); Pop(0)

0x1811: PushEmpty()
0x1812: Push("KnowMishka")
0x1813: Push((int) 1)
0x1814: @ SetVariable(Stack[-2], Stack[-1])
0x1815: Pop(2)
0x1816: Return(); Pop(0)

0x1817: PushEmpty()
0x1818: Push("ood3Anna2")
0x1819: Push((int) 1)
0x181a: @ SetVariable(Stack[-2], Stack[-1])
0x181b: Pop(2)
0x181c: Return(); Pop(0)

0x181d: PushEmpty()
0x181e: Push("ood3Anna3")
0x181f: Push((int) 1)
0x1820: @ SetVariable(Stack[-2], Stack[-1])
0x1821: Pop(2)
0x1822: Return(); Pop(0)

0x1823: PushEmpty()
0x1824: Push("beta_pills is given")
0x1825: @ Trace(Stack[-1])
0x1826: Pop(1)
0x1827: PushEmpty(object, string, int)
0x1828: Stack[-3] = Stack[-5]
0x1829: Stack[-2] = "beta_pills"
0x182a: Stack[-1] = (int) 1
0x182b: Call 0x15d3

0x182c: Pop(3)
0x182d: Return(); Pop(0)

0x182e: PushEmpty()
0x182f: Push("gamma_pills is given")
0x1830: @ Trace(Stack[-1])
0x1831: Pop(1)
0x1832: PushEmpty(object, string, int)
0x1833: Stack[-3] = Stack[-5]
0x1834: Stack[-2] = "gamma_pills"
0x1835: Stack[-1] = (int) 1
0x1836: Call 0x15d3

0x1837: Pop(3)
0x1838: Return(); Pop(0)

0x1839: PushEmpty()
0x183a: Push("delta_pills is given")
0x183b: @ Trace(Stack[-1])
0x183c: Pop(1)
0x183d: PushEmpty(object, string, int)
0x183e: Stack[-3] = Stack[-5]
0x183f: Stack[-2] = "delta_pills"
0x1840: Stack[-1] = (int) 1
0x1841: Call 0x15d3

0x1842: Pop(3)
0x1843: Return(); Pop(0)

0x1844: PushEmpty()
0x1845: Push("ood5Anna1")
0x1846: Push((int) 1)
0x1847: @ SetVariable(Stack[-2], Stack[-1])
0x1848: Pop(2)
0x1849: Return(); Pop(0)

0x184a: PushEmpty()
0x184b: PushEmpty(int, string)
0x184c: Stack[-1] = "d1q02"
0x184d: Call 0x15b6

0x184e: Pop(1)
0x184f: Push((int) 1000)
0x1850: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1851: IF (Stack[-1] == 0) GOTO 0x1854; Pop(1)

0x1852: Stack[-2] = (bool) 1
0x1853: Return(); Pop(0)

0x1854: Stack[-2] = (bool) 0
0x1855: Return(); Pop(0)

0x1856: PushEmpty()
0x1857: PushEmpty(int, string)
0x1858: Stack[-1] = "d1q02"
0x1859: Call 0x15b6

0x185a: Pop(1)
0x185b: Push((int) 1)
0x185c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x185d: IF (Stack[-1] == 0) GOTO 0x1860; Pop(1)

0x185e: Stack[-2] = (bool) 1
0x185f: Return(); Pop(0)

0x1860: Stack[-2] = (bool) 0
0x1861: Return(); Pop(0)

0x1862: PushEmpty()
0x1863: PushEmpty(int, string)
0x1864: Stack[-1] = "d1q01FirstGeorgVisit"
0x1865: Call 0x15b6

0x1866: Pop(1)
0x1867: Push((int) 1)
0x1868: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1869: IF (Stack[-1] == 0) GOTO 0x186c; Pop(1)

0x186a: Stack[-2] = (bool) 1
0x186b: Return(); Pop(0)

0x186c: Stack[-2] = (bool) 0
0x186d: Return(); Pop(0)

0x186e: PushEmpty()
0x186f: PushEmpty(int, string)
0x1870: Stack[-1] = "ood1Anna7"
0x1871: Call 0x15b6

0x1872: Pop(1)
0x1873: Push((int) 0)
0x1874: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1875: IF (Stack[-1] == 0) GOTO 0x1878; Pop(1)

0x1876: Stack[-2] = (bool) 1
0x1877: Return(); Pop(0)

0x1878: Stack[-2] = (bool) 0
0x1879: Return(); Pop(0)

0x187a: PushEmpty()
0x187b: PushEmpty(int, string)
0x187c: Stack[-1] = "ood1Anna8"
0x187d: Call 0x15b6

0x187e: Pop(1)
0x187f: Push((int) 0)
0x1880: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1881: IF (Stack[-1] == 0) GOTO 0x1884; Pop(1)

0x1882: Stack[-2] = (bool) 1
0x1883: Return(); Pop(0)

0x1884: Stack[-2] = (bool) 0
0x1885: Return(); Pop(0)

0x1886: PushEmpty()
0x1887: PushEmpty(int, string)
0x1888: Stack[-1] = "ood1Anna9"
0x1889: Call 0x15b6

0x188a: Pop(1)
0x188b: Push((int) 0)
0x188c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x188d: IF (Stack[-1] == 0) GOTO 0x1890; Pop(1)

0x188e: Stack[-2] = (bool) 1
0x188f: Return(); Pop(0)

0x1890: Stack[-2] = (bool) 0
0x1891: Return(); Pop(0)

0x1892: PushEmpty()
0x1893: PushEmpty(int, string)
0x1894: Stack[-1] = "ood1Anna10"
0x1895: Call 0x15b6

0x1896: Pop(1)
0x1897: Push((int) 0)
0x1898: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1899: IF (Stack[-1] == 0) GOTO 0x189c; Pop(1)

0x189a: Stack[-2] = (bool) 1
0x189b: Return(); Pop(0)

0x189c: Stack[-2] = (bool) 0
0x189d: Return(); Pop(0)

0x189e: PushEmpty()
0x189f: PushEmpty(int, string)
0x18a0: Stack[-1] = "ood2Anna1"
0x18a1: Call 0x15b6

0x18a2: Pop(1)
0x18a3: Push((int) 0)
0x18a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18a5: IF (Stack[-1] == 0) GOTO 0x18a8; Pop(1)

0x18a6: Stack[-2] = (bool) 1
0x18a7: Return(); Pop(0)

0x18a8: Stack[-2] = (bool) 0
0x18a9: Return(); Pop(0)

0x18aa: PushEmpty()
0x18ab: PushEmpty(int, string)
0x18ac: Stack[-1] = "ood2Anna2"
0x18ad: Call 0x15b6

0x18ae: Pop(1)
0x18af: Push((int) 0)
0x18b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18b1: IF (Stack[-1] == 0) GOTO 0x18b4; Pop(1)

0x18b2: Stack[-2] = (bool) 1
0x18b3: Return(); Pop(0)

0x18b4: Stack[-2] = (bool) 0
0x18b5: Return(); Pop(0)

0x18b6: PushEmpty()
0x18b7: PushEmpty(int, string)
0x18b8: Stack[-1] = "KnowSgustok"
0x18b9: Call 0x15b6

0x18ba: Pop(1)
0x18bb: Push((int) 1)
0x18bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18bd: IF (Stack[-1] == 0) GOTO 0x18c0; Pop(1)

0x18be: Stack[-2] = (bool) 1
0x18bf: Return(); Pop(0)

0x18c0: Stack[-2] = (bool) 0
0x18c1: Return(); Pop(0)

0x18c2: PushEmpty()
0x18c3: PushEmpty(int, string)
0x18c4: Stack[-1] = "KnowDiamAce"
0x18c5: Call 0x15b6

0x18c6: Pop(1)
0x18c7: Push((int) 1)
0x18c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18c9: IF (Stack[-1] == 0) GOTO 0x18cc; Pop(1)

0x18ca: Stack[-2] = (bool) 1
0x18cb: Return(); Pop(0)

0x18cc: Stack[-2] = (bool) 0
0x18cd: Return(); Pop(0)

0x18ce: PushEmpty()
0x18cf: PushEmpty(int, string)
0x18d0: Stack[-1] = "d2q01"
0x18d1: Call 0x15b6

0x18d2: Pop(1)
0x18d3: Push((int) 1)
0x18d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18d5: IF (Stack[-1] == 0) GOTO 0x18d8; Pop(1)

0x18d6: Stack[-2] = (bool) 1
0x18d7: Return(); Pop(0)

0x18d8: Stack[-2] = (bool) 0
0x18d9: Return(); Pop(0)

0x18da: PushEmpty()
0x18db: PushEmpty(int, string)
0x18dc: Stack[-1] = "d1q02"
0x18dd: Call 0x15b6

0x18de: Pop(1)
0x18df: Push((int) 2)
0x18e0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18e1: IF (Stack[-1] == 0) GOTO 0x18e4; Pop(1)

0x18e2: Stack[-2] = (bool) 1
0x18e3: Return(); Pop(0)

0x18e4: Stack[-2] = (bool) 0
0x18e5: Return(); Pop(0)

0x18e6: PushEmpty()
0x18e7: PushEmpty(int, string)
0x18e8: Stack[-1] = "ood3Anna1"
0x18e9: Call 0x15b6

0x18ea: Pop(1)
0x18eb: Push((int) 0)
0x18ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18ed: IF (Stack[-1] == 0) GOTO 0x18f0; Pop(1)

0x18ee: Stack[-2] = (bool) 1
0x18ef: Return(); Pop(0)

0x18f0: Stack[-2] = (bool) 0
0x18f1: Return(); Pop(0)

0x18f2: PushEmpty()
0x18f3: PushEmpty(int, string)
0x18f4: Stack[-1] = "d3q02"
0x18f5: Call 0x15b6

0x18f6: Pop(1)
0x18f7: Push((int) 5)
0x18f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18f9: IF (Stack[-1] == 0) GOTO 0x18fc; Pop(1)

0x18fa: Stack[-2] = (bool) 1
0x18fb: Return(); Pop(0)

0x18fc: Stack[-2] = (bool) 0
0x18fd: Return(); Pop(0)

0x18fe: PushEmpty()
0x18ff: PushEmpty(int, string)
0x1900: Stack[-1] = "ood4Anna1"
0x1901: Call 0x15b6

0x1902: Pop(1)
0x1903: Push((int) 0)
0x1904: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1905: IF (Stack[-1] == 0) GOTO 0x1908; Pop(1)

0x1906: Stack[-2] = (bool) 1
0x1907: Return(); Pop(0)

0x1908: Stack[-2] = (bool) 0
0x1909: Return(); Pop(0)

0x190a: PushEmpty()
0x190b: PushEmpty(int, string)
0x190c: Stack[-1] = "d4q02"
0x190d: Call 0x15b6

0x190e: Pop(1)
0x190f: Push((int) 1)
0x1910: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1911: IF (Stack[-1] == 0) GOTO 0x1914; Pop(1)

0x1912: Stack[-2] = (bool) 1
0x1913: Return(); Pop(0)

0x1914: Stack[-2] = (bool) 0
0x1915: Return(); Pop(0)

0x1916: PushEmpty()
0x1917: PushEmpty(int, string)
0x1918: Stack[-1] = "d4q02AnnaGivesMedcine"
0x1919: Call 0x15b6

0x191a: Pop(1)
0x191b: Push((int) 1)
0x191c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x191d: IF (Stack[-1] == 0) GOTO 0x1920; Pop(1)

0x191e: Stack[-2] = (bool) 1
0x191f: Return(); Pop(0)

0x1920: Stack[-2] = (bool) 0
0x1921: Return(); Pop(0)

0x1922: PushEmpty()
0x1923: PushEmpty(int, string)
0x1924: Stack[-1] = "d4q02"
0x1925: Call 0x15b6

0x1926: Pop(1)
0x1927: Push((int) 1000)
0x1928: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1929: IF (Stack[-1] == 0) GOTO 0x192c; Pop(1)

0x192a: Stack[-2] = (bool) 1
0x192b: Return(); Pop(0)

0x192c: Stack[-2] = (bool) 0
0x192d: Return(); Pop(0)

0x192e: PushEmpty()
0x192f: PushEmpty(int, string)
0x1930: Stack[-1] = "ood4Anna2"
0x1931: Call 0x15b6

0x1932: Pop(1)
0x1933: Push((int) 0)
0x1934: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1935: IF (Stack[-1] == 0) GOTO 0x1938; Pop(1)

0x1936: Stack[-2] = (bool) 1
0x1937: Return(); Pop(0)

0x1938: Stack[-2] = (bool) 0
0x1939: Return(); Pop(0)

0x193a: PushEmpty()
0x193b: PushEmpty(int, string)
0x193c: Stack[-1] = "d5q02"
0x193d: Call 0x15b6

0x193e: Pop(1)
0x193f: Push((int) 0)
0x1940: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1941: IF (Stack[-1] == 0) GOTO 0x1944; Pop(1)

0x1942: Stack[-2] = (bool) 1
0x1943: Return(); Pop(0)

0x1944: Stack[-2] = (bool) 0
0x1945: Return(); Pop(0)

0x1946: PushEmpty()
0x1947: PushEmpty(int, string)
0x1948: Stack[-1] = "d5q02"
0x1949: Call 0x15b6

0x194a: Pop(1)
0x194b: Push((int) 2)
0x194c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x194d: IF (Stack[-1] == 0) GOTO 0x1950; Pop(1)

0x194e: Stack[-2] = (bool) 1
0x194f: Return(); Pop(0)

0x1950: Stack[-2] = (bool) 0
0x1951: Return(); Pop(0)

0x1952: PushEmpty()
0x1953: PushEmpty(int, string)
0x1954: Stack[-1] = "KnowMistresses"
0x1955: Call 0x15b6

0x1956: Pop(1)
0x1957: Push((int) 1)
0x1958: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1959: IF (Stack[-1] == 0) GOTO 0x195c; Pop(1)

0x195a: Stack[-2] = (bool) 1
0x195b: Return(); Pop(0)

0x195c: Stack[-2] = (bool) 0
0x195d: Return(); Pop(0)

0x195e: PushEmpty()
0x195f: PushEmpty(int, string)
0x1960: Stack[-1] = "d5q02KnowNudeIsDead"
0x1961: Call 0x15b6

0x1962: Pop(1)
0x1963: Push((int) 1)
0x1964: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1965: IF (Stack[-1] == 0) GOTO 0x1968; Pop(1)

0x1966: Stack[-2] = (bool) 1
0x1967: Return(); Pop(0)

0x1968: Stack[-2] = (bool) 0
0x1969: Return(); Pop(0)

0x196a: PushEmpty()
0x196b: PushEmpty(int, string)
0x196c: Stack[-1] = "ood1Anna1"
0x196d: Call 0x15b6

0x196e: Pop(1)
0x196f: Push((int) 0)
0x1970: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1971: IF (Stack[-1] == 0) GOTO 0x1974; Pop(1)

0x1972: Stack[-2] = (bool) 1
0x1973: Return(); Pop(0)

0x1974: Stack[-2] = (bool) 0
0x1975: Return(); Pop(0)

0x1976: PushEmpty()
0x1977: PushEmpty(int, string)
0x1978: Stack[-1] = "d6q01"
0x1979: Call 0x15b6

0x197a: Pop(1)
0x197b: Push((int) 0)
0x197c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x197d: IF (Stack[-1] == 0) GOTO 0x1980; Pop(1)

0x197e: Stack[-2] = (bool) 1
0x197f: Return(); Pop(0)

0x1980: Stack[-2] = (bool) 0
0x1981: Return(); Pop(0)

0x1982: PushEmpty()
0x1983: PushEmpty(int, string)
0x1984: Stack[-1] = "d6q01"
0x1985: Call 0x15b6

0x1986: Pop(1)
0x1987: Push((int) 1)
0x1988: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1989: IF (Stack[-1] == 0) GOTO 0x198c; Pop(1)

0x198a: Stack[-2] = (bool) 1
0x198b: Return(); Pop(0)

0x198c: Stack[-2] = (bool) 0
0x198d: Return(); Pop(0)

0x198e: PushEmpty()
0x198f: PushEmpty(int, string)
0x1990: Stack[-1] = "ood1Anna3"
0x1991: Call 0x15b6

0x1992: Pop(1)
0x1993: Push((int) 0)
0x1994: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1995: IF (Stack[-1] == 0) GOTO 0x1998; Pop(1)

0x1996: Stack[-2] = (bool) 1
0x1997: Return(); Pop(0)

0x1998: Stack[-2] = (bool) 0
0x1999: Return(); Pop(0)

0x199a: PushEmpty()
0x199b: PushEmpty(int, string)
0x199c: Stack[-1] = "ood6Anna1"
0x199d: Call 0x15b6

0x199e: Pop(1)
0x199f: Push((int) 0)
0x19a0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19a1: IF (Stack[-1] == 0) GOTO 0x19a4; Pop(1)

0x19a2: Stack[-2] = (bool) 1
0x19a3: Return(); Pop(0)

0x19a4: Stack[-2] = (bool) 0
0x19a5: Return(); Pop(0)

0x19a6: PushEmpty()
0x19a7: PushEmpty(int, string)
0x19a8: Stack[-1] = "ood6Anna2"
0x19a9: Call 0x15b6

0x19aa: Pop(1)
0x19ab: Push((int) 0)
0x19ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19ad: IF (Stack[-1] == 0) GOTO 0x19b0; Pop(1)

0x19ae: Stack[-2] = (bool) 1
0x19af: Return(); Pop(0)

0x19b0: Stack[-2] = (bool) 0
0x19b1: Return(); Pop(0)

0x19b2: PushEmpty()
0x19b3: PushEmpty(int, string)
0x19b4: Stack[-1] = "ood1Anna4"
0x19b5: Call 0x15b6

0x19b6: Pop(1)
0x19b7: Push((int) 0)
0x19b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19b9: IF (Stack[-1] == 0) GOTO 0x19bc; Pop(1)

0x19ba: Stack[-2] = (bool) 1
0x19bb: Return(); Pop(0)

0x19bc: Stack[-2] = (bool) 0
0x19bd: Return(); Pop(0)

0x19be: PushEmpty()
0x19bf: PushEmpty(int, string)
0x19c0: Stack[-1] = "ood1Anna5"
0x19c1: Call 0x15b6

0x19c2: Pop(1)
0x19c3: Push((int) 0)
0x19c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19c5: IF (Stack[-1] == 0) GOTO 0x19c8; Pop(1)

0x19c6: Stack[-2] = (bool) 1
0x19c7: Return(); Pop(0)

0x19c8: Stack[-2] = (bool) 0
0x19c9: Return(); Pop(0)

0x19ca: PushEmpty()
0x19cb: PushEmpty(int, string)
0x19cc: Stack[-1] = "ood1Anna6"
0x19cd: Call 0x15b6

0x19ce: Pop(1)
0x19cf: Push((int) 0)
0x19d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19d1: IF (Stack[-1] == 0) GOTO 0x19d4; Pop(1)

0x19d2: Stack[-2] = (bool) 1
0x19d3: Return(); Pop(0)

0x19d4: Stack[-2] = (bool) 0
0x19d5: Return(); Pop(0)

0x19d6: PushEmpty()
0x19d7: PushEmpty(int, string)
0x19d8: Stack[-1] = "microscope_d6q01_anna_blood"
0x19d9: Call 0x15b6

0x19da: Pop(1)
0x19db: Push((int) 0)
0x19dc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x19dd: IF (Stack[-1] == 0) GOTO 0x19e0; Pop(1)

0x19de: Stack[-2] = (bool) 1
0x19df: Return(); Pop(0)

0x19e0: Stack[-2] = (bool) 0
0x19e1: Return(); Pop(0)

0x19e2: PushEmpty()
0x19e3: PushEmpty(int, string)
0x19e4: Stack[-1] = "KnowAlexandr"
0x19e5: Call 0x15b6

0x19e6: Pop(1)
0x19e7: Push((int) 1)
0x19e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19e9: IF (Stack[-1] == 0) GOTO 0x19ec; Pop(1)

0x19ea: Stack[-2] = (bool) 1
0x19eb: Return(); Pop(0)

0x19ec: Stack[-2] = (bool) 0
0x19ed: Return(); Pop(0)

0x19ee: PushEmpty()
0x19ef: PushEmpty(int, string)
0x19f0: Stack[-1] = "d6q01"
0x19f1: Call 0x15b6

0x19f2: Pop(1)
0x19f3: Push((int) 1000)
0x19f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19f5: IF (Stack[-1] == 0) GOTO 0x19f8; Pop(1)

0x19f6: Stack[-2] = (bool) 1
0x19f7: Return(); Pop(0)

0x19f8: Stack[-2] = (bool) 0
0x19f9: Return(); Pop(0)

0x19fa: PushEmpty()
0x19fb: PushEmpty(int, string)
0x19fc: Stack[-1] = "d6q01"
0x19fd: Call 0x15b6

0x19fe: Pop(1)
0x19ff: Push((int) -1)
0x1a00: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a01: IF (Stack[-1] == 0) GOTO 0x1a04; Pop(1)

0x1a02: Stack[-2] = (bool) 1
0x1a03: Return(); Pop(0)

0x1a04: Stack[-2] = (bool) 0
0x1a05: Return(); Pop(0)

0x1a06: PushEmpty()
0x1a07: PushEmpty(int, string)
0x1a08: Stack[-1] = "ood6Anna3"
0x1a09: Call 0x15b6

0x1a0a: Pop(1)
0x1a0b: Push((int) 0)
0x1a0c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a0d: IF (Stack[-1] == 0) GOTO 0x1a10; Pop(1)

0x1a0e: Stack[-2] = (bool) 1
0x1a0f: Return(); Pop(0)

0x1a10: Stack[-2] = (bool) 0
0x1a11: Return(); Pop(0)

0x1a12: PushEmpty()
0x1a13: PushEmpty(int, string)
0x1a14: Stack[-1] = "KnowJulia"
0x1a15: Call 0x15b6

0x1a16: Pop(1)
0x1a17: Push((int) 1)
0x1a18: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a19: IF (Stack[-1] == 0) GOTO 0x1a1c; Pop(1)

0x1a1a: Stack[-2] = (bool) 1
0x1a1b: Return(); Pop(0)

0x1a1c: Stack[-2] = (bool) 0
0x1a1d: Return(); Pop(0)

0x1a1e: PushEmpty()
0x1a1f: PushEmpty(int, string)
0x1a20: Stack[-1] = "KnowLaska"
0x1a21: Call 0x15b6

0x1a22: Pop(1)
0x1a23: Push((int) 1)
0x1a24: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a25: IF (Stack[-1] == 0) GOTO 0x1a28; Pop(1)

0x1a26: Stack[-2] = (bool) 1
0x1a27: Return(); Pop(0)

0x1a28: Stack[-2] = (bool) 0
0x1a29: Return(); Pop(0)

0x1a2a: PushEmpty()
0x1a2b: PushEmpty(int, string)
0x1a2c: Stack[-1] = "KnowMishka"
0x1a2d: Call 0x15b6

0x1a2e: Pop(1)
0x1a2f: Push((int) 1)
0x1a30: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a31: IF (Stack[-1] == 0) GOTO 0x1a34; Pop(1)

0x1a32: Stack[-2] = (bool) 1
0x1a33: Return(); Pop(0)

0x1a34: Stack[-2] = (bool) 0
0x1a35: Return(); Pop(0)

0x1a36: PushEmpty()
0x1a37: PushEmpty(int, string)
0x1a38: Stack[-1] = "ood3Anna2"
0x1a39: Call 0x15b6

0x1a3a: Pop(1)
0x1a3b: Push((int) 0)
0x1a3c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a3d: IF (Stack[-1] == 0) GOTO 0x1a40; Pop(1)

0x1a3e: Stack[-2] = (bool) 1
0x1a3f: Return(); Pop(0)

0x1a40: Stack[-2] = (bool) 0
0x1a41: Return(); Pop(0)

0x1a42: PushEmpty()
0x1a43: PushEmpty(int, string)
0x1a44: Stack[-1] = "ood3Anna3"
0x1a45: Call 0x15b6

0x1a46: Pop(1)
0x1a47: Push((int) 0)
0x1a48: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a49: IF (Stack[-1] == 0) GOTO 0x1a4c; Pop(1)

0x1a4a: Stack[-2] = (bool) 1
0x1a4b: Return(); Pop(0)

0x1a4c: Stack[-2] = (bool) 0
0x1a4d: Return(); Pop(0)

0x1a4e: PushEmpty()
0x1a4f: PushEmpty(int, string)
0x1a50: Stack[-1] = "ood5Anna1"
0x1a51: Call 0x15b6

0x1a52: Pop(1)
0x1a53: Push((int) 0)
0x1a54: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a55: IF (Stack[-1] == 0) GOTO 0x1a58; Pop(1)

0x1a56: Stack[-2] = (bool) 1
0x1a57: Return(); Pop(0)

0x1a58: Stack[-2] = (bool) 0
0x1a59: Return(); Pop(0)

0x1a5a: PushEmpty()
0x1a5b: PushEmpty(int, string)
0x1a5c: Stack[-1] = "KnowOspina"
0x1a5d: Call 0x15b6

0x1a5e: Pop(1)
0x1a5f: Push((int) 1)
0x1a60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a61: IF (Stack[-1] == 0) GOTO 0x1a64; Pop(1)

0x1a62: Stack[-2] = (bool) 1
0x1a63: Return(); Pop(0)

0x1a64: Stack[-2] = (bool) 0
0x1a65: Return(); Pop(0)

0x1a66: PushEmpty()
0x1a67: PushEmpty(int, string)
0x1a68: Stack[-1] = "KnowStamatins"
0x1a69: Call 0x15b6

0x1a6a: Pop(1)
0x1a6b: Push((int) 1)
0x1a6c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a6d: IF (Stack[-1] == 0) GOTO 0x1a70; Pop(1)

0x1a6e: Stack[-2] = (bool) 1
0x1a6f: Return(); Pop(0)

0x1a70: Stack[-2] = (bool) 0
0x1a71: Return(); Pop(0)

0x1a72: PushEmpty(object, object)
0x1a73: @ GetDiaryRoot(Stack[-1])
0x1a74: Pop(0)
0x1a75: Pop(0); Push((bool) Stack[-1] == 0)
0x1a76: IF (Stack[-1] == 0) GOTO 0x1a7c; Pop(1)

0x1a77: Push("Can't retrieve diary root")
0x1a78: @ Trace(Stack[-1])
0x1a79: Pop(1)
0x1a7a: Stack[-3] = (bool) 0
0x1a7b: Return(); Pop(2)

0x1a7c: Stack[-3] = Stack[-1]
0x1a7d: Return(); Pop(2)

0x1a7e: Stack[-1] = 0
0x1a7f: PushEmpty(object, object, int, object, object, int)
0x1a80: PushEmpty(object)
0x1a81: Call 0x1a72

0x1a82: Stack[-4] = Stack[-1]
0x1a83: Pop(1)
0x1a84: @@ Find(Stack[-7], Stack[-2])
0x1a85: Pop(0)
0x1a86: Pop(0); Push((bool) Stack[-2] == 0)
0x1a87: IF (Stack[-1] == 0) GOTO 0x1a8e; Pop(1)

0x1a88: Push("Can't find diary parent with id: ")
0x1a89: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1a8a: @ Trace(Stack[-1])
0x1a8b: Pop(1)
0x1a8c: Stack[-9] = (bool) 0
0x1a8d: Return(); Pop(6)

0x1a8e: @@ AddChild(Stack[-8])
0x1a8f: Pop(0)
0x1a90: Push("player_diary")
0x1a91: Push((int) 1)
0x1a92: @ SetVariable(Stack[-2], Stack[-1])
0x1a93: Pop(2)
0x1a94: @@ GetCategory(Stack[-1])
0x1a95: Pop(0)
0x1a96: @ SetDiarySection(Stack[-1])
0x1a97: Pop(0)
0x1a98: Stack[-9] = (bool) 0
0x1a99: Return(); Pop(6)

0x1a9a: Stack[-2] = 0
0x1a9b: Stack[-3] = 0
0x1a9c: PushEmpty(object, object, object, object)
0x1a9d: @ GetMainOutdoorScene(Stack[-2])
0x1a9e: Pop(0)
0x1a9f: Pop(0); Push((bool) Stack[-2] == 0)
0x1aa0: IF (Stack[-1] == 0) GOTO 0x1aa7; Pop(1)

0x1aa1: Push("Can't find main outdoor scene")
0x1aa2: @ Trace(Stack[-1])
0x1aa3: Pop(1)
0x1aa4: Stack[-1] = 0
0x1aa5: Stack[-5] = Stack[-1]
0x1aa6: Return(); Pop(4)

0x1aa7: @@ GetMap(Stack[-1])
0x1aa8: Pop(0)
0x1aa9: Stack[-5] = Stack[-1]
0x1aaa: Return(); Pop(4)

0x1aab: Stack[-1] = 0
0x1aac: Stack[-2] = 0
0x1aad: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1aae: @ GetMainOutdoorScene(Stack[-2])
0x1aaf: Pop(0)
0x1ab0: Pop(0); Push((bool) Stack[-2] == 0)
0x1ab1: IF (Stack[-1] == 0) GOTO 0x1ab6; Pop(1)

0x1ab2: Push("Can't find main outdoor scene")
0x1ab3: @ Trace(Stack[-1])
0x1ab4: Pop(1)
0x1ab5: Return(); Pop(8)

0x1ab6: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1ab7: Pop(0)
0x1ab8: Pop(0); Push((bool) Stack[-1] == 0)
0x1ab9: IF (Stack[-1] == 0) GOTO 0x1ac0; Pop(1)

0x1aba: Push("Warning: outdoor scene locator ")
0x1abb: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1abc: Push(" doesnt exist")
0x1abd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1abe: @ Trace(Stack[-1])
0x1abf: Pop(1)
0x1ac0: @@ GetMap(Stack[-11])
0x1ac1: Pop(0)
0x1ac2: Pop(0); Push((bool) Stack[-11] == 0)
0x1ac3: IF (Stack[-1] == 0) GOTO 0x1ac8; Pop(1)

0x1ac4: Push("Can't find map")
0x1ac5: @ Trace(Stack[-1])
0x1ac6: Pop(1)
0x1ac7: Return(); Pop(8)

0x1ac8: Push(CvectorIndex(Stack[-4], 0))
0x1ac9: Push(CvectorIndex(Stack[-5], 2))
0x1aca: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1acb: Pop(2)
0x1acc: Return(); Pop(8)

0x1acd: Stack[-2] = 0
0x1ace: PushEmpty(int, int)
0x1acf: Push("player")
0x1ad0: @ GetVariable(Stack[-1], Stack[-2])
0x1ad1: Pop(1)
0x1ad2: Push((int) 0)
0x1ad3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ad4: IF (Stack[-1] == 0) GOTO 0x1ad8; Pop(1)

0x1ad5: Stack[-3] = (int) 200001
0x1ad6: Return(); Pop(2)

0x1ad7: GOTO 0x1add

0x1ad8: Push((int) 1)
0x1ad9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ada: IF (Stack[-1] == 0) GOTO 0x1add; Pop(1)

0x1adb: Stack[-3] = (int) 200002
0x1adc: Return(); Pop(2)

0x1add: Stack[-3] = (int) 200003
0x1ade: Return(); Pop(2)

0x1adf: PushEmpty(object, object)
0x1ae0: Push("Adding diary entry")
0x1ae1: @ Trace(Stack[-1])
0x1ae2: Pop(1)
0x1ae3: Push((int) 35)
0x1ae4: Push((int) 2)
0x1ae5: Push((int) 12117)
0x1ae6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ae7: Pop(3)
0x1ae8: PushEmpty(bool, object, int)
0x1ae9: Stack[-2] = Stack[-4]
0x1aea: Stack[-1] = (int) 7
0x1aeb: Call 0x1a7f

0x1aec: Pop(3)
0x1aed: Return(); Pop(2)

0x1aee: Stack[-1] = 0
0x1aef: PushEmpty(object, object)
0x1af0: Push("Adding diary entry")
0x1af1: @ Trace(Stack[-1])
0x1af2: Pop(1)
0x1af3: Push((int) 51)
0x1af4: Push((int) 1)
0x1af5: Push((int) 12133)
0x1af6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1af7: Pop(3)
0x1af8: PushEmpty(bool, object, int)
0x1af9: Stack[-2] = Stack[-4]
0x1afa: Stack[-1] = (int) 10
0x1afb: Call 0x1a7f

0x1afc: Pop(3)
0x1afd: Return(); Pop(2)

0x1afe: Stack[-1] = 0
0x1aff: PushEmpty(object, object)
0x1b00: Push("Adding diary entry")
0x1b01: @ Trace(Stack[-1])
0x1b02: Pop(1)
0x1b03: Push((int) 148)
0x1b04: Push((int) 2)
0x1b05: Push((int) 15354)
0x1b06: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b07: Pop(3)
0x1b08: PushEmpty(bool, object, int)
0x1b09: Stack[-2] = Stack[-4]
0x1b0a: Stack[-1] = (int) -1
0x1b0b: Call 0x1a7f

0x1b0c: Pop(3)
0x1b0d: Return(); Pop(2)

0x1b0e: Stack[-1] = 0
0x1b0f: PushEmpty(object, object)
0x1b10: Push("Adding diary entry")
0x1b11: @ Trace(Stack[-1])
0x1b12: Pop(1)
0x1b13: Push((int) 149)
0x1b14: Push((int) 2)
0x1b15: Push((int) 15355)
0x1b16: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b17: Pop(3)
0x1b18: PushEmpty(bool, object, int)
0x1b19: Stack[-2] = Stack[-4]
0x1b1a: Stack[-1] = (int) 148
0x1b1b: Call 0x1a7f

0x1b1c: Pop(3)
0x1b1d: Return(); Pop(2)

0x1b1e: Stack[-1] = 0
0x1b1f: PushEmpty(object, object)
0x1b20: Push("Adding diary entry")
0x1b21: @ Trace(Stack[-1])
0x1b22: Pop(1)
0x1b23: Push((int) 151)
0x1b24: Push((int) 2)
0x1b25: Push((int) 15357)
0x1b26: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b27: Pop(3)
0x1b28: PushEmpty(bool, object, int)
0x1b29: Stack[-2] = Stack[-4]
0x1b2a: Stack[-1] = (int) 148
0x1b2b: Call 0x1a7f

0x1b2c: Pop(3)
0x1b2d: Return(); Pop(2)

0x1b2e: Stack[-1] = 0
0x1b2f: PushEmpty(object, object)
0x1b30: Push("Adding diary entry")
0x1b31: @ Trace(Stack[-1])
0x1b32: Pop(1)
0x1b33: Push((int) 159)
0x1b34: Push((int) 1)
0x1b35: Push((int) 15392)
0x1b36: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b37: Pop(3)
0x1b38: PushEmpty(bool, object, int)
0x1b39: Stack[-2] = Stack[-4]
0x1b3a: Stack[-1] = (int) 111
0x1b3b: Call 0x1a7f

0x1b3c: Pop(3)
0x1b3d: Return(); Pop(2)

0x1b3e: Stack[-1] = 0
0x1b3f: PushEmpty(object, object)
0x1b40: Push("Adding diary entry")
0x1b41: @ Trace(Stack[-1])
0x1b42: Pop(1)
0x1b43: Push((int) 116)
0x1b44: Push((int) 1)
0x1b45: Push((int) 13739)
0x1b46: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b47: Pop(3)
0x1b48: PushEmpty(bool, object, int)
0x1b49: Stack[-2] = Stack[-4]
0x1b4a: Stack[-1] = (int) 111
0x1b4b: Call 0x1a7f

0x1b4c: Pop(3)
0x1b4d: Return(); Pop(2)

0x1b4e: Stack[-1] = 0
0x1b4f: Push(GlobalVars[1])
0x1b50: Stack[-1] = (bool) 0
0x1b51: GlobalVars[1] = Stack[-1]; Pop(1)
0x1b52: Return(); Pop(0)

0x1b53: PushEmpty()
0x1b54: Push(GlobalVars[1])
0x1b55: Pop(1); Push((bool) Stack[-1] == 0)
0x1b56: IF (Stack[-1] == 0) GOTO 0x1b60; Pop(1)

0x1b57: PushEmpty(int, object)
0x1b58: Stack[-1] = Stack[-3]
0x1b59: Push(-2, 1); TaskCall(2)
0x1b5a: Call 0x31

0x1b5b: Pop(-2, 1); TaskReturn
0x1b5c: Pop(2)
0x1b5d: Push(GlobalVars[1])
0x1b5e: Stack[-1] = (bool) 1
0x1b5f: GlobalVars[1] = Stack[-1]; Pop(1)
0x1b60: PushEmpty(bool, int)
0x1b61: Stack[-1] = (int) 1
0x1b62: Call 0x15fa

0x1b63: Pop(1)
0x1b64: IF (Stack[-1] == 0) GOTO 0x1b6c; Pop(1)

0x1b65: PushEmpty(int, object)
0x1b66: Stack[-1] = Stack[-3]
0x1b67: Push(-2, 1); TaskCall(6)
0x1b68: Call 0x3a1

0x1b69: Pop(-2, 1); TaskReturn
0x1b6a: Pop(2)
0x1b6b: Return(); Pop(0)

0x1b6c: PushEmpty(bool, int)
0x1b6d: Stack[-1] = (int) 2
0x1b6e: Call 0x15fa

0x1b6f: Pop(1)
0x1b70: IF (Stack[-1] == 0) GOTO 0x1b78; Pop(1)

0x1b71: PushEmpty(int, object)
0x1b72: Stack[-1] = Stack[-3]
0x1b73: Push(-2, 1); TaskCall(8)
0x1b74: Call 0xacf

0x1b75: Pop(-2, 1); TaskReturn
0x1b76: Pop(2)
0x1b77: Return(); Pop(0)

0x1b78: PushEmpty(bool, int)
0x1b79: Stack[-1] = (int) 3
0x1b7a: Call 0x15fa

0x1b7b: Pop(1)
0x1b7c: IF (Stack[-1] == 0) GOTO 0x1b84; Pop(1)

0x1b7d: PushEmpty(int, object)
0x1b7e: Stack[-1] = Stack[-3]
0x1b7f: Push(-2, 1); TaskCall(10)
0x1b80: Call 0xe79

0x1b81: Pop(-2, 1); TaskReturn
0x1b82: Pop(2)
0x1b83: Return(); Pop(0)

0x1b84: PushEmpty(bool, int)
0x1b85: Stack[-1] = (int) 4
0x1b86: Call 0x15fa

0x1b87: Pop(1)
0x1b88: IF (Stack[-1] == 0) GOTO 0x1b90; Pop(1)

0x1b89: PushEmpty(int, object)
0x1b8a: Stack[-1] = Stack[-3]
0x1b8b: Push(-2, 1); TaskCall(12)
0x1b8c: Call 0x1067

0x1b8d: Pop(-2, 1); TaskReturn
0x1b8e: Pop(2)
0x1b8f: Return(); Pop(0)

0x1b90: PushEmpty(bool, int)
0x1b91: Stack[-1] = (int) 5
0x1b92: Call 0x15fa

0x1b93: Pop(1)
0x1b94: IF (Stack[-1] == 0) GOTO 0x1b9c; Pop(1)

0x1b95: PushEmpty(int, object)
0x1b96: Stack[-1] = Stack[-3]
0x1b97: Push(-2, 1); TaskCall(14)
0x1b98: Call 0x12cc

0x1b99: Pop(-2, 1); TaskReturn
0x1b9a: Pop(2)
0x1b9b: Return(); Pop(0)

0x1b9c: PushEmpty(bool, int)
0x1b9d: Stack[-1] = (int) 6
0x1b9e: Call 0x15fa

0x1b9f: Pop(1)
0x1ba0: IF (Stack[-1] == 0) GOTO 0x1ba8; Pop(1)

0x1ba1: PushEmpty(int, object)
0x1ba2: Stack[-1] = Stack[-3]
0x1ba3: Push(-2, 1); TaskCall(4)
0x1ba4: Call 0x197

0x1ba5: Pop(-2, 1); TaskReturn
0x1ba6: Pop(2)
0x1ba7: Return(); Pop(0)

0x1ba8: PushEmpty(bool)
0x1ba9: Call 0x1600

0x1baa: Pop(1)
0x1bab: Return(); Pop(0)

