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
	ui/NPC_Laska.png
	d1q02AnnaGotoLaska
	FindMark
	Remove
	d1q02ViktorGotoAnna
	quest_d1_02
	completed
	lockpick1time is given
	lockpick
	uses
	SetProperty
	playsound
	giveitem
	ood1Laska4
	ood1Laska5
	ood1Laska6
	ood1Laska7
	powder is given
	powder
	ood6Laska1
	d6q01
	d6q01LaskaGotoAlbinos
	pt_d6q03_albinos
	AddMark
	quest_d6_01
	albinos_klara
	eva_klara
	KnowLaska
	ood1Laska1
	ood3Laska1
	ood1Laska2
	ood1Laska3
	d1q01FirstGeorgVisit
	d1q02
	d6q03AlbinosKilled
	KnowKaterina
	KnowMaria
	KnowMishka
	KnowOspina
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
		EVENT_11 Op = 0x27c Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x66d Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x795 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8bc Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0xcd7

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x9d6

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
0x15: Call 0xa17

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
0x26: Call 0xcdb

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x9ca

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x9db

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0xa8a

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0xa8c

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0xca6

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
0x67: Call 0xa13

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
0x79: Call 0xb1d

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 370)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 371)
0x85: Push((int) 432)
0x86: Push((int) 430)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 372)
0x8a: Push((int) 437)
0x8b: Push((int) 431)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0xa8e

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0xa17

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
0xb1: Call 0xa8e

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0xa17

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0xa29

0xc4: Pop(0)
0xc5: Push((int) 429)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0xb1d

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 370)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 371)
0xd7: Push((int) 432)
0xd8: Push((int) 430)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 372)
0xdc: Push((int) 437)
0xdd: Push((int) 431)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 437)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0xaf

0xe7: Pop(1)
0xe8: Push((int) 377)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 378)
0xee: Push((int) 432)
0xef: Push((int) 438)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 432)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call 0xaf

0xf9: Pop(1)
0xfa: Push((int) 373)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 374)
0x100: Push((int) 435)
0x101: Push((int) 433)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 375)
0x105: Push((int) 435)
0x106: Push((int) 434)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 435)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call 0xaf

0x110: Pop(1)
0x111: Push((int) 376)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 381)
0x117: Push((int) -1)
0x118: Push((int) 442)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 379)
0x11c: Push((int) -1)
0x11d: Push((int) 440)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x122: PushEmpty(bool)
0x123: Call 0xa8e

0x124: Pop(0)
0x125: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x126: @ lshStopAnimation()
0x127: Pop(0)
0x128: GOTO 0x12b

0x129: @ StopAnimation()
0x12a: Pop(0)
0x12b: Return(); Pop(0)

0x12c: GOTO 0xc0

0x12d: Return(); Pop(0)

0x12e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[-11]
0x132: Call 0x9db

0x133: Pop(1)
0x134: Pop(1); Push((bool) Stack[-1] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x136: Stack[-10] = (int) -2
0x137: Return(); Pop(8)

0x138: @ CreateDialog(Stack[-4])
0x139: Pop(0)
0x13a: PushEmpty(int)
0x13b: Call 0xa8a

0x13c: Pop(0)
0x13d: @@ SetNPCName(Stack[-1])
0x13e: Pop(1)
0x13f: PushEmpty(string)
0x140: Call 0xa8c

0x141: Pop(0)
0x142: @@ SetPhoto(Stack[-1])
0x143: Pop(1)
0x144: PushEmpty(int)
0x145: Call 0xca6

0x146: Pop(0)
0x147: @@ SetPlayerName(Stack[-1])
0x148: Pop(1)
0x149: Stack[-2] = (int) -1
0x14a: @ IsOverrideActive(Stack[-3])
0x14b: Pop(0)
0x14c: Push(Stack[-3])
0x14d: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14e: Stack[-10] = (int) -2
0x14f: Return(); Pop(8)

0x150: @ DoDialog(Stack[-4])
0x151: Pop(0)
0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[-11]
0x154: Stack[-1] = Stack[-6]
0x155: Push(-2, 4); TaskCall(5)
0x156: Call 0x16d

0x157: Pop(-2, 4); TaskReturn
0x158: Pop(2)
0x159: @@ IsDialogEnd(Stack[-1])
0x15a: Pop(0)
0x15b: Pop(0); Push((bool) Stack[-1] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15d: @ sync()
0x15e: Pop(0)
0x15f: @@ IsDialogEnd(Stack[-1])
0x160: Pop(0)
0x161: GOTO 0x15b

0x162: PushEmpty(object)
0x163: Stack[-1] = Stack[-10]
0x164: Call 0xa13

0x165: Pop(1)
0x166: @ StopDialog(Stack[-4])
0x167: Pop(0)
0x168: @@ GetReturnValue(Stack[-2])
0x169: Pop(0)
0x16a: Stack[-10] = Stack[-2]
0x16b: Return(); Pop(8)

0x16c: Stack[-4] = 0
0x16d: PushEmpty()
0x16e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x16f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x170: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x171: Push((int) 1)
0x172: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x173: PushEmpty(bool)
0x174: Stack[-1] = (bool) 0
0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call 0xc01

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call 0xb47

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = (bool) 1
0x180: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x181: PushEmpty(string)
0x182: Stack[-1] = "Neutral"
0x183: Call 0x26c

0x184: Pop(1)
0x185: Push((int) 5050)
0x186: @@ SetMessage(Stack[-1])
0x187: Pop(1)
0x188: @@ ClearReplies()
0x189: Pop(0)
0x18a: Push((int) 5051)
0x18b: Push((int) 5555)
0x18c: Push((int) 5554)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Push((int) 5073)
0x190: Push((int) 5582)
0x191: Push((int) 5581)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: GOTO 0x24e

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call 0x26c

0x198: Pop(1)
0x199: Push((int) 8066)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: PushEmpty(bool)
0x19f: Stack[-1] = (bool) 1
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool)
0x1a3: Stack[-1] = (bool) 0
0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call 0xb8d

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call 0xc0d

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b0: PushEmpty(bool, object)
0x1b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Call 0xb3b

0x1b3: Pop(1)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Stack[-1] = (bool) 1
0x1b6: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 0
0x1b9: PushEmpty(bool)
0x1ba: Stack[-1] = (bool) 0
0x1bb: PushEmpty(bool, object)
0x1bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Call 0xb97

0x1be: Pop(1)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c0: PushEmpty(bool, object)
0x1c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c2: Call 0xc0d

0x1c3: Pop(1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[-1] = (bool) 1
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Call 0xb3b

0x1ca: Pop(1)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: Stack[-1] = (bool) 0
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d0: Push((int) 8067)
0x1d1: Push((int) 5607)
0x1d2: Push((int) 8890)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: PushEmpty(bool)
0x1d6: Stack[-1] = (bool) 1
0x1d7: PushEmpty(bool)
0x1d8: Stack[-1] = (bool) 0
0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call 0xb97

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call 0xc19

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = (bool) 1
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(bool)
0x1e6: Stack[-1] = (bool) 0
0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Call 0xb83

0x1ea: Pop(1)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call 0xc19

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (bool) 1
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Stack[-1] = (bool) 0
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f5: Push((int) 8068)
0x1f6: Push((int) 5592)
0x1f7: Push((int) 8891)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: PushEmpty(bool)
0x1fb: Stack[-1] = (bool) 0
0x1fc: PushEmpty(bool, object)
0x1fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fe: Call 0xbf5

0x1ff: Pop(1)
0x200: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x201: PushEmpty(bool, object)
0x202: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x203: Call 0xb53

0x204: Pop(1)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Stack[-1] = (bool) 1
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: Push((int) 8076)
0x209: Push((int) 8916)
0x20a: Push((int) 8899)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: PushEmpty(bool)
0x20e: Stack[-1] = (bool) 0
0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x211: Call 0xbd1

0x212: Pop(1)
0x213: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x216: Call 0xb5f

0x217: Pop(1)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Stack[-1] = (bool) 1
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: Push((int) 8077)
0x21c: Push((int) 8917)
0x21d: Push((int) 8900)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: PushEmpty(bool, object)
0x223: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x224: Call 0xbc5

0x225: Pop(1)
0x226: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call 0xb6b

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: Push((int) 8078)
0x22f: Push((int) 8918)
0x230: Push((int) 8901)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: PushEmpty(bool)
0x234: Stack[-1] = (bool) 0
0x235: PushEmpty(bool, object)
0x236: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x237: Call 0xbdd

0x238: Pop(1)
0x239: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Call 0xb77

0x23d: Pop(1)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[-1] = (bool) 1
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: Push((int) 8090)
0x242: Push((int) 8919)
0x243: Push((int) 8913)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 8697)
0x247: Push((int) -1)
0x248: Push((int) 9534)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: GOTO 0x24e

0x24c: Return(); Pop(0)

0x24d: GOTO 0x171

0x24e: PushEmpty(bool)
0x24f: Call 0xa8e

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x252: @ lshWaitForAnimEnd()
0x253: Pop(0)
0x254: Push( Stack[3 + Tasks[-1].StackPointer] )
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: GOTO 0x25c

0x257: PushEmpty(string)
0x258: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x259: Call 0xa17

0x25a: Pop(1)
0x25b: GOTO 0x252

0x25c: GOTO 0x26b

0x25d: Push("all")
0x25e: Push("idle")
0x25f: @ PlayAnimation(Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: @ WaitForAnimEnd()
0x262: Pop(0)
0x263: Push( Stack[3 + Tasks[-1].StackPointer] )
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x26b

0x266: Push("all")
0x267: Push("idle")
0x268: @ PlayAnimation(Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: GOTO 0x261

0x26b: Return(); Pop(0)

0x26c: PushEmpty()
0x26d: PushEmpty(bool)
0x26e: Call 0xa8e

0x26f: Pop(0)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Return(); Pop(0)

0x273: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Return(); Pop(0)

0x276: PushEmpty(string)
0x277: Stack[-1] = Stack[-2]
0x278: Call 0xa17

0x279: Pop(1)
0x27a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x27b: Return(); Pop(0)

0x27c: PushEmpty()
0x27d: Push((int) 1)
0x27e: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x27f: PushEmpty()
0x280: Call 0xa29

0x281: Pop(0)
0x282: Push((int) 5562)
0x283: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x285: PushEmpty(object, object)
0x286: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x287: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x288: Call 0xb23

0x289: Pop(2)
0x28a: PushEmpty(object, object)
0x28b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28d: Call 0xa90

0x28e: Pop(2)
0x28f: PushEmpty(object, object)
0x290: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x291: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x292: Call 0xac7

0x293: Pop(2)
0x294: PushEmpty(object, object)
0x295: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x296: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x297: Call 0xab2

0x298: Pop(2)
0x299: Push((int) 5563)
0x29a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(object, object)
0x29d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29f: Call 0xb23

0x2a0: Pop(2)
0x2a1: PushEmpty(object, object)
0x2a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call 0xa90

0x2a5: Pop(2)
0x2a6: PushEmpty(object, object)
0x2a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call 0xac7

0x2aa: Pop(2)
0x2ab: PushEmpty(object, object)
0x2ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call 0xab2

0x2af: Pop(2)
0x2b0: Push((int) 5564)
0x2b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(object, object)
0x2b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b6: Call 0xb23

0x2b7: Pop(2)
0x2b8: PushEmpty(object, object)
0x2b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bb: Call 0xa90

0x2bc: Pop(2)
0x2bd: PushEmpty(object, object)
0x2be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c0: Call 0xac7

0x2c1: Pop(2)
0x2c2: PushEmpty(object, object)
0x2c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c5: Call 0xab2

0x2c6: Pop(2)
0x2c7: Push((int) 5591)
0x2c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ca: PushEmpty(object, object)
0x2cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cd: Call 0xb23

0x2ce: Pop(2)
0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call 0xa90

0x2d3: Pop(2)
0x2d4: Push((int) 5617)
0x2d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: PushEmpty(object, object)
0x2d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2da: Call 0xb2f

0x2db: Pop(2)
0x2dc: Push((int) 5613)
0x2dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: PushEmpty(object, object)
0x2e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e2: Call 0xb2f

0x2e3: Pop(2)
0x2e4: Push((int) 5597)
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(object, object)
0x2e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ea: Call 0xb35

0x2eb: Pop(2)
0x2ec: Push((int) 5598)
0x2ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ef: PushEmpty(object, object)
0x2f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f2: Call 0xb35

0x2f3: Pop(2)
0x2f4: Push((int) 5599)
0x2f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: PushEmpty(object, object)
0x2f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fa: Call 0xb35

0x2fb: Pop(2)
0x2fc: Push((int) 5606)
0x2fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: PushEmpty(object, object)
0x300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call 0xb35

0x303: Pop(2)
0x304: Push((int) 9530)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x309: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30a: Call 0xacd

0x30b: Pop(2)
0x30c: Push((int) 9531)
0x30d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(object, object)
0x310: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x311: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x312: Call 0xad3

0x313: Pop(2)
0x314: Push((int) 9532)
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: PushEmpty(object, object)
0x318: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call 0xad9

0x31b: Pop(2)
0x31c: Push((int) 9533)
0x31d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31f: PushEmpty(object, object)
0x320: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call 0xadf

0x323: Pop(2)
0x324: Push((int) 5553)
0x325: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x327: PushEmpty(bool)
0x328: Stack[-1] = (bool) 0
0x329: PushEmpty(bool, object)
0x32a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32b: Call 0xc01

0x32c: Pop(1)
0x32d: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x330: Call 0xb47

0x331: Pop(1)
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: Stack[-1] = (bool) 1
0x334: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral"
0x337: Call 0x26c

0x338: Pop(1)
0x339: Push((int) 5050)
0x33a: @@ SetMessage(Stack[-1])
0x33b: Pop(1)
0x33c: @@ ClearReplies()
0x33d: Pop(0)
0x33e: Push((int) 5051)
0x33f: Push((int) 5555)
0x340: Push((int) 5554)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Push((int) 5073)
0x344: Push((int) 5582)
0x345: Push((int) 5581)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Return(); Pop(0)

0x349: PushEmpty(string)
0x34a: Stack[-1] = "Neutral"
0x34b: Call 0x26c

0x34c: Pop(1)
0x34d: Push((int) 8066)
0x34e: @@ SetMessage(Stack[-1])
0x34f: Pop(1)
0x350: @@ ClearReplies()
0x351: Pop(0)
0x352: PushEmpty(bool)
0x353: Stack[-1] = (bool) 1
0x354: PushEmpty(bool)
0x355: Stack[-1] = (bool) 0
0x356: PushEmpty(bool)
0x357: Stack[-1] = (bool) 0
0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35a: Call 0xb8d

0x35b: Pop(1)
0x35c: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35d: PushEmpty(bool, object)
0x35e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35f: Call 0xc0d

0x360: Pop(1)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: Stack[-1] = (bool) 1
0x363: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x364: PushEmpty(bool, object)
0x365: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x366: Call 0xb3b

0x367: Pop(1)
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: Stack[-1] = (bool) 1
0x36a: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x36b: PushEmpty(bool)
0x36c: Stack[-1] = (bool) 0
0x36d: PushEmpty(bool)
0x36e: Stack[-1] = (bool) 0
0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call 0xb97

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x374: PushEmpty(bool, object)
0x375: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x376: Call 0xc0d

0x377: Pop(1)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: Stack[-1] = (bool) 1
0x37a: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37b: PushEmpty(bool, object)
0x37c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Call 0xb3b

0x37e: Pop(1)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: Stack[-1] = (bool) 1
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Stack[-1] = (bool) 0
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: Push((int) 8067)
0x385: Push((int) 5607)
0x386: Push((int) 8890)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: PushEmpty(bool)
0x38a: Stack[-1] = (bool) 1
0x38b: PushEmpty(bool)
0x38c: Stack[-1] = (bool) 0
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38f: Call 0xb97

0x390: Pop(1)
0x391: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call 0xc19

0x395: Pop(1)
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Stack[-1] = (bool) 1
0x398: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x399: PushEmpty(bool)
0x39a: Stack[-1] = (bool) 0
0x39b: PushEmpty(bool, object)
0x39c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39d: Call 0xb83

0x39e: Pop(1)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call 0xc19

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Stack[-1] = (bool) 1
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: Stack[-1] = (bool) 0
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a9: Push((int) 8068)
0x3aa: Push((int) 5592)
0x3ab: Push((int) 8891)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: PushEmpty(bool)
0x3af: Stack[-1] = (bool) 0
0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b2: Call 0xbf5

0x3b3: Pop(1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b5: PushEmpty(bool, object)
0x3b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b7: Call 0xb53

0x3b8: Pop(1)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Stack[-1] = (bool) 1
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bc: Push((int) 8076)
0x3bd: Push((int) 8916)
0x3be: Push((int) 8899)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: PushEmpty(bool)
0x3c2: Stack[-1] = (bool) 0
0x3c3: PushEmpty(bool, object)
0x3c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c5: Call 0xbd1

0x3c6: Pop(1)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c8: PushEmpty(bool, object)
0x3c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ca: Call 0xb5f

0x3cb: Pop(1)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: Stack[-1] = (bool) 1
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3cf: Push((int) 8077)
0x3d0: Push((int) 8917)
0x3d1: Push((int) 8900)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: PushEmpty(bool)
0x3d5: Stack[-1] = (bool) 0
0x3d6: PushEmpty(bool, object)
0x3d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d8: Call 0xbc5

0x3d9: Pop(1)
0x3da: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3dd: Call 0xb6b

0x3de: Pop(1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: Stack[-1] = (bool) 1
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e2: Push((int) 8078)
0x3e3: Push((int) 8918)
0x3e4: Push((int) 8901)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: PushEmpty(bool)
0x3e8: Stack[-1] = (bool) 0
0x3e9: PushEmpty(bool, object)
0x3ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3eb: Call 0xbdd

0x3ec: Pop(1)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f0: Call 0xb77

0x3f1: Pop(1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: Stack[-1] = (bool) 1
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f5: Push((int) 8090)
0x3f6: Push((int) 8919)
0x3f7: Push((int) 8913)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Push((int) 8697)
0x3fb: Push((int) -1)
0x3fc: Push((int) 9534)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Return(); Pop(0)

0x400: Push((int) 8919)
0x401: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x403: PushEmpty(string)
0x404: Stack[-1] = "Neutral"
0x405: Call 0x26c

0x406: Pop(1)
0x407: Push((int) 8096)
0x408: @@ SetMessage(Stack[-1])
0x409: Pop(1)
0x40a: @@ ClearReplies()
0x40b: Pop(0)
0x40c: Push((int) 8696)
0x40d: Push((int) -1)
0x40e: Push((int) 9533)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Push((int) 8918)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Neutral"
0x417: Call 0x26c

0x418: Pop(1)
0x419: Push((int) 8095)
0x41a: @@ SetMessage(Stack[-1])
0x41b: Pop(1)
0x41c: @@ ClearReplies()
0x41d: Pop(0)
0x41e: Push((int) 8695)
0x41f: Push((int) -1)
0x420: Push((int) 9532)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 8917)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral"
0x429: Call 0x26c

0x42a: Pop(1)
0x42b: Push((int) 8094)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 8694)
0x431: Push((int) -1)
0x432: Push((int) 9531)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 8916)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Neutral"
0x43b: Call 0x26c

0x43c: Pop(1)
0x43d: Push((int) 8093)
0x43e: @@ SetMessage(Stack[-1])
0x43f: Pop(1)
0x440: @@ ClearReplies()
0x441: Pop(0)
0x442: Push((int) 8693)
0x443: Push((int) -1)
0x444: Push((int) 9530)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Push((int) 5592)
0x449: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Neutral"
0x44d: Call 0x26c

0x44e: Pop(1)
0x44f: Push((int) 5082)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: Push((int) 5083)
0x455: Push((int) 5594)
0x456: Push((int) 5593)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Push((int) 5091)
0x45a: Push((int) 5603)
0x45b: Push((int) 5602)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Return(); Pop(0)

0x45f: Push((int) 5603)
0x460: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x462: PushEmpty(string)
0x463: Stack[-1] = "Neutral"
0x464: Call 0x26c

0x465: Pop(1)
0x466: Push((int) 5092)
0x467: @@ SetMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ ClearReplies()
0x46a: Pop(0)
0x46b: Push((int) 5093)
0x46c: Push((int) 5596)
0x46d: Push((int) 5604)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Push((int) 5094)
0x471: Push((int) -1)
0x472: Push((int) 5606)
0x473: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: Return(); Pop(0)

0x476: Push((int) 5594)
0x477: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x479: PushEmpty(string)
0x47a: Stack[-1] = "Neutral"
0x47b: Call 0x26c

0x47c: Pop(1)
0x47d: Push((int) 5084)
0x47e: @@ SetMessage(Stack[-1])
0x47f: Pop(1)
0x480: @@ ClearReplies()
0x481: Pop(0)
0x482: Push((int) 5085)
0x483: Push((int) 5596)
0x484: Push((int) 5595)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Push((int) 5090)
0x488: Push((int) 5596)
0x489: Push((int) 5600)
0x48a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48b: Pop(3)
0x48c: Return(); Pop(0)

0x48d: Push((int) 5596)
0x48e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x490: PushEmpty(string)
0x491: Stack[-1] = "Neutral"
0x492: Call 0x26c

0x493: Pop(1)
0x494: Push((int) 5086)
0x495: @@ SetMessage(Stack[-1])
0x496: Pop(1)
0x497: @@ ClearReplies()
0x498: Pop(0)
0x499: Push((int) 5087)
0x49a: Push((int) -1)
0x49b: Push((int) 5597)
0x49c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49d: Pop(3)
0x49e: Push((int) 5088)
0x49f: Push((int) -1)
0x4a0: Push((int) 5598)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: Push((int) 5089)
0x4a4: Push((int) -1)
0x4a5: Push((int) 5599)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 5607)
0x4aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral"
0x4ae: Call 0x26c

0x4af: Pop(1)
0x4b0: Push((int) 5095)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 5096)
0x4b6: Push((int) 5609)
0x4b7: Push((int) 5608)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Push((int) 5102)
0x4bb: Push((int) 5609)
0x4bc: Push((int) 5614)
0x4bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4be: Pop(3)
0x4bf: Return(); Pop(0)

0x4c0: Push((int) 5609)
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Neutral"
0x4c5: Call 0x26c

0x4c6: Pop(1)
0x4c7: Push((int) 5097)
0x4c8: @@ SetMessage(Stack[-1])
0x4c9: Pop(1)
0x4ca: @@ ClearReplies()
0x4cb: Pop(0)
0x4cc: Push((int) 5098)
0x4cd: Push((int) 5616)
0x4ce: Push((int) 5610)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Push((int) 5099)
0x4d2: Push((int) 5612)
0x4d3: Push((int) 5611)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Return(); Pop(0)

0x4d7: Push((int) 5612)
0x4d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Neutral"
0x4dc: Call 0x26c

0x4dd: Pop(1)
0x4de: Push((int) 5100)
0x4df: @@ SetMessage(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ ClearReplies()
0x4e2: Pop(0)
0x4e3: Push((int) 5101)
0x4e4: Push((int) -1)
0x4e5: Push((int) 5613)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 5616)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Neutral"
0x4ee: Call 0x26c

0x4ef: Pop(1)
0x4f0: Push((int) 5103)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 5104)
0x4f6: Push((int) -1)
0x4f7: Push((int) 5617)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Return(); Pop(0)

0x4fb: Push((int) 5582)
0x4fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4fe: PushEmpty(string)
0x4ff: Stack[-1] = "Neutral"
0x500: Call 0x26c

0x501: Pop(1)
0x502: Push((int) 5074)
0x503: @@ SetMessage(Stack[-1])
0x504: Pop(1)
0x505: @@ ClearReplies()
0x506: Pop(0)
0x507: Push((int) 5075)
0x508: Push((int) 5584)
0x509: Push((int) 5583)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Push((int) 5078)
0x50d: Push((int) 5588)
0x50e: Push((int) 5587)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Return(); Pop(0)

0x512: Push((int) 5588)
0x513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x515: PushEmpty(string)
0x516: Stack[-1] = "Neutral"
0x517: Call 0x26c

0x518: Pop(1)
0x519: Push((int) 5079)
0x51a: @@ SetMessage(Stack[-1])
0x51b: Pop(1)
0x51c: @@ ClearReplies()
0x51d: Pop(0)
0x51e: Push((int) 5080)
0x51f: Push((int) 5557)
0x520: Push((int) 5589)
0x521: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(3)
0x523: Push((int) 5081)
0x524: Push((int) -1)
0x525: Push((int) 5591)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Return(); Pop(0)

0x529: Push((int) 5584)
0x52a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x52c: PushEmpty(string)
0x52d: Stack[-1] = "Neutral"
0x52e: Call 0x26c

0x52f: Pop(1)
0x530: Push((int) 5076)
0x531: @@ SetMessage(Stack[-1])
0x532: Pop(1)
0x533: @@ ClearReplies()
0x534: Pop(0)
0x535: Push((int) 5077)
0x536: Push((int) 5555)
0x537: Push((int) 5585)
0x538: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x539: Pop(3)
0x53a: Return(); Pop(0)

0x53b: Push((int) 5555)
0x53c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x53e: PushEmpty(string)
0x53f: Stack[-1] = "Neutral"
0x540: Call 0x26c

0x541: Pop(1)
0x542: Push((int) 5052)
0x543: @@ SetMessage(Stack[-1])
0x544: Pop(1)
0x545: @@ ClearReplies()
0x546: Pop(0)
0x547: Push((int) 5053)
0x548: Push((int) 5557)
0x549: Push((int) 5556)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: Push((int) 5069)
0x54d: Push((int) 5576)
0x54e: Push((int) 5575)
0x54f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x550: Pop(3)
0x551: Return(); Pop(0)

0x552: Push((int) 5576)
0x553: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x555: PushEmpty(string)
0x556: Stack[-1] = "Neutral"
0x557: Call 0x26c

0x558: Pop(1)
0x559: Push((int) 5070)
0x55a: @@ SetMessage(Stack[-1])
0x55b: Pop(1)
0x55c: @@ ClearReplies()
0x55d: Pop(0)
0x55e: Push((int) 5071)
0x55f: Push((int) 5557)
0x560: Push((int) 5577)
0x561: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x562: Pop(3)
0x563: Push((int) 5072)
0x564: Push((int) 5557)
0x565: Push((int) 5579)
0x566: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(3)
0x568: Return(); Pop(0)

0x569: Push((int) 5557)
0x56a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x56c: PushEmpty(string)
0x56d: Stack[-1] = "Neutral"
0x56e: Call 0x26c

0x56f: Pop(1)
0x570: Push((int) 5054)
0x571: @@ SetMessage(Stack[-1])
0x572: Pop(1)
0x573: @@ ClearReplies()
0x574: Pop(0)
0x575: Push((int) 5055)
0x576: Push((int) 5559)
0x577: Push((int) 5558)
0x578: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x579: Pop(3)
0x57a: Return(); Pop(0)

0x57b: Push((int) 5559)
0x57c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x57e: PushEmpty(string)
0x57f: Stack[-1] = "Neutral"
0x580: Call 0x26c

0x581: Pop(1)
0x582: Push((int) 5056)
0x583: @@ SetMessage(Stack[-1])
0x584: Pop(1)
0x585: @@ ClearReplies()
0x586: Pop(0)
0x587: Push((int) 5057)
0x588: Push((int) 5561)
0x589: Push((int) 5560)
0x58a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(3)
0x58c: Push((int) 5062)
0x58d: Push((int) 5566)
0x58e: Push((int) 5565)
0x58f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(3)
0x591: Return(); Pop(0)

0x592: Push((int) 5566)
0x593: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x595: PushEmpty(string)
0x596: Stack[-1] = "Neutral"
0x597: Call 0x26c

0x598: Pop(1)
0x599: Push((int) 5063)
0x59a: @@ SetMessage(Stack[-1])
0x59b: Pop(1)
0x59c: @@ ClearReplies()
0x59d: Pop(0)
0x59e: Push((int) 5064)
0x59f: Push((int) 5561)
0x5a0: Push((int) 5567)
0x5a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: Push((int) 5065)
0x5a4: Push((int) 5570)
0x5a5: Push((int) 5569)
0x5a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a7: Pop(3)
0x5a8: Return(); Pop(0)

0x5a9: Push((int) 5570)
0x5aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Neutral"
0x5ae: Call 0x26c

0x5af: Pop(1)
0x5b0: Push((int) 5066)
0x5b1: @@ SetMessage(Stack[-1])
0x5b2: Pop(1)
0x5b3: @@ ClearReplies()
0x5b4: Pop(0)
0x5b5: Push((int) 5067)
0x5b6: Push((int) 5561)
0x5b7: Push((int) 5571)
0x5b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: Return(); Pop(0)

0x5bb: Push((int) 5561)
0x5bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5be: PushEmpty(string)
0x5bf: Stack[-1] = "Neutral"
0x5c0: Call 0x26c

0x5c1: Pop(1)
0x5c2: Push((int) 5058)
0x5c3: @@ SetMessage(Stack[-1])
0x5c4: Pop(1)
0x5c5: @@ ClearReplies()
0x5c6: Pop(0)
0x5c7: Push((int) 5059)
0x5c8: Push((int) -1)
0x5c9: Push((int) 5562)
0x5ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cb: Pop(3)
0x5cc: Push((int) 5060)
0x5cd: Push((int) -1)
0x5ce: Push((int) 5563)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: Push((int) 5061)
0x5d2: Push((int) -1)
0x5d3: Push((int) 5564)
0x5d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d5: Pop(3)
0x5d6: Return(); Pop(0)

0x5d7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5d8: PushEmpty(bool)
0x5d9: Call 0xa8e

0x5da: Pop(0)
0x5db: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dc: @ lshStopAnimation()
0x5dd: Pop(0)
0x5de: GOTO 0x5e1

0x5df: @ StopAnimation()
0x5e0: Pop(0)
0x5e1: Return(); Pop(0)

0x5e2: GOTO 0x27d

0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5e6: PushEmpty(bool, object)
0x5e7: Stack[-1] = Stack[-11]
0x5e8: Call 0x9db

0x5e9: Pop(1)
0x5ea: Pop(1); Push((bool) Stack[-1] == 0)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ec: Stack[-10] = (int) -2
0x5ed: Return(); Pop(8)

0x5ee: @ CreateDialog(Stack[-4])
0x5ef: Pop(0)
0x5f0: PushEmpty(int)
0x5f1: Call 0xa8a

0x5f2: Pop(0)
0x5f3: @@ SetNPCName(Stack[-1])
0x5f4: Pop(1)
0x5f5: PushEmpty(string)
0x5f6: Call 0xa8c

0x5f7: Pop(0)
0x5f8: @@ SetPhoto(Stack[-1])
0x5f9: Pop(1)
0x5fa: PushEmpty(int)
0x5fb: Call 0xca6

0x5fc: Pop(0)
0x5fd: @@ SetPlayerName(Stack[-1])
0x5fe: Pop(1)
0x5ff: Stack[-2] = (int) -1
0x600: @ IsOverrideActive(Stack[-3])
0x601: Pop(0)
0x602: Push(Stack[-3])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-10] = (int) -2
0x605: Return(); Pop(8)

0x606: @ DoDialog(Stack[-4])
0x607: Pop(0)
0x608: PushEmpty(object, object)
0x609: Stack[-2] = Stack[-11]
0x60a: Stack[-1] = Stack[-6]
0x60b: Push(-2, 4); TaskCall(7)
0x60c: Call 0x623

0x60d: Pop(-2, 4); TaskReturn
0x60e: Pop(2)
0x60f: @@ IsDialogEnd(Stack[-1])
0x610: Pop(0)
0x611: Pop(0); Push((bool) Stack[-1] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x613: @ sync()
0x614: Pop(0)
0x615: @@ IsDialogEnd(Stack[-1])
0x616: Pop(0)
0x617: GOTO 0x611

0x618: PushEmpty(object)
0x619: Stack[-1] = Stack[-10]
0x61a: Call 0xa13

0x61b: Pop(1)
0x61c: @ StopDialog(Stack[-4])
0x61d: Pop(0)
0x61e: @@ GetReturnValue(Stack[-2])
0x61f: Pop(0)
0x620: Stack[-10] = Stack[-2]
0x621: Return(); Pop(8)

0x622: Stack[-4] = 0
0x623: PushEmpty()
0x624: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x625: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x626: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x627: Push((int) 1)
0x628: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x629: PushEmpty(string)
0x62a: Stack[-1] = "Neutral"
0x62b: Call 0x65d

0x62c: Pop(1)
0x62d: Push((int) 9473)
0x62e: @@ SetMessage(Stack[-1])
0x62f: Pop(1)
0x630: @@ ClearReplies()
0x631: Pop(0)
0x632: Push((int) 9474)
0x633: Push((int) 10417)
0x634: Push((int) 10416)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Push((int) 9487)
0x638: Push((int) -1)
0x639: Push((int) 10429)
0x63a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(3)
0x63c: GOTO 0x63f

0x63d: Return(); Pop(0)

0x63e: GOTO 0x627

0x63f: PushEmpty(bool)
0x640: Call 0xa8e

0x641: Pop(0)
0x642: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x643: @ lshWaitForAnimEnd()
0x644: Pop(0)
0x645: Push( Stack[3 + Tasks[-1].StackPointer] )
0x646: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x647: GOTO 0x64d

0x648: PushEmpty(string)
0x649: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x64a: Call 0xa17

0x64b: Pop(1)
0x64c: GOTO 0x643

0x64d: GOTO 0x65c

0x64e: Push("all")
0x64f: Push("idle")
0x650: @ PlayAnimation(Stack[-2], Stack[-1])
0x651: Pop(2)
0x652: @ WaitForAnimEnd()
0x653: Pop(0)
0x654: Push( Stack[3 + Tasks[-1].StackPointer] )
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: GOTO 0x65c

0x657: Push("all")
0x658: Push("idle")
0x659: @ PlayAnimation(Stack[-2], Stack[-1])
0x65a: Pop(2)
0x65b: GOTO 0x652

0x65c: Return(); Pop(0)

0x65d: PushEmpty()
0x65e: PushEmpty(bool)
0x65f: Call 0xa8e

0x660: Pop(0)
0x661: Pop(1); Push((bool) Stack[-1] == 0)
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: Return(); Pop(0)

0x664: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Return(); Pop(0)

0x667: PushEmpty(string)
0x668: Stack[-1] = Stack[-2]
0x669: Call 0xa17

0x66a: Pop(1)
0x66b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: Push((int) 1)
0x66f: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x670: PushEmpty()
0x671: Call 0xa29

0x672: Pop(0)
0x673: Push((int) 10415)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x676: PushEmpty(string)
0x677: Stack[-1] = "Neutral"
0x678: Call 0x65d

0x679: Pop(1)
0x67a: Push((int) 9473)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 9474)
0x680: Push((int) 10417)
0x681: Push((int) 10416)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Push((int) 9487)
0x685: Push((int) -1)
0x686: Push((int) 10429)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: Return(); Pop(0)

0x68a: Push((int) 10417)
0x68b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x68d: PushEmpty(string)
0x68e: Stack[-1] = "Neutral"
0x68f: Call 0x65d

0x690: Pop(1)
0x691: Push((int) 9475)
0x692: @@ SetMessage(Stack[-1])
0x693: Pop(1)
0x694: @@ ClearReplies()
0x695: Pop(0)
0x696: Push((int) 9476)
0x697: Push((int) 10419)
0x698: Push((int) 10418)
0x699: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: Push((int) 9481)
0x69c: Push((int) 10424)
0x69d: Push((int) 10423)
0x69e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Return(); Pop(0)

0x6a1: Push((int) 10424)
0x6a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6a4: PushEmpty(string)
0x6a5: Stack[-1] = "Neutral"
0x6a6: Call 0x65d

0x6a7: Pop(1)
0x6a8: Push((int) 9482)
0x6a9: @@ SetMessage(Stack[-1])
0x6aa: Pop(1)
0x6ab: @@ ClearReplies()
0x6ac: Pop(0)
0x6ad: Push((int) 9483)
0x6ae: Push((int) 10426)
0x6af: Push((int) 10425)
0x6b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(3)
0x6b2: Return(); Pop(0)

0x6b3: Push((int) 10426)
0x6b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6b6: PushEmpty(string)
0x6b7: Stack[-1] = "Neutral"
0x6b8: Call 0x65d

0x6b9: Pop(1)
0x6ba: Push((int) 9484)
0x6bb: @@ SetMessage(Stack[-1])
0x6bc: Pop(1)
0x6bd: @@ ClearReplies()
0x6be: Pop(0)
0x6bf: Push((int) 9485)
0x6c0: Push((int) -1)
0x6c1: Push((int) 10427)
0x6c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c3: Pop(3)
0x6c4: Push((int) 9486)
0x6c5: Push((int) -1)
0x6c6: Push((int) 10428)
0x6c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c8: Pop(3)
0x6c9: Return(); Pop(0)

0x6ca: Push((int) 10419)
0x6cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6cd: PushEmpty(string)
0x6ce: Stack[-1] = "Neutral"
0x6cf: Call 0x65d

0x6d0: Pop(1)
0x6d1: Push((int) 9477)
0x6d2: @@ SetMessage(Stack[-1])
0x6d3: Pop(1)
0x6d4: @@ ClearReplies()
0x6d5: Pop(0)
0x6d6: Push((int) 9478)
0x6d7: Push((int) -1)
0x6d8: Push((int) 10420)
0x6d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6da: Pop(3)
0x6db: Push((int) 9479)
0x6dc: Push((int) -1)
0x6dd: Push((int) 10421)
0x6de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: Push((int) 9480)
0x6e1: Push((int) -1)
0x6e2: Push((int) 10422)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Return(); Pop(0)

0x6e6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6e7: PushEmpty(bool)
0x6e8: Call 0xa8e

0x6e9: Pop(0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6eb: @ lshStopAnimation()
0x6ec: Pop(0)
0x6ed: GOTO 0x6f0

0x6ee: @ StopAnimation()
0x6ef: Pop(0)
0x6f0: Return(); Pop(0)

0x6f1: GOTO 0x66e

0x6f2: Return(); Pop(0)

0x6f3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6f5: PushEmpty(bool, object)
0x6f6: Stack[-1] = Stack[-11]
0x6f7: Call 0x9db

0x6f8: Pop(1)
0x6f9: Pop(1); Push((bool) Stack[-1] == 0)
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fb: Stack[-10] = (int) -2
0x6fc: Return(); Pop(8)

0x6fd: @ CreateDialog(Stack[-4])
0x6fe: Pop(0)
0x6ff: PushEmpty(int)
0x700: Call 0xa8a

0x701: Pop(0)
0x702: @@ SetNPCName(Stack[-1])
0x703: Pop(1)
0x704: PushEmpty(string)
0x705: Call 0xa8c

0x706: Pop(0)
0x707: @@ SetPhoto(Stack[-1])
0x708: Pop(1)
0x709: PushEmpty(int)
0x70a: Call 0xca6

0x70b: Pop(0)
0x70c: @@ SetPlayerName(Stack[-1])
0x70d: Pop(1)
0x70e: Stack[-2] = (int) -1
0x70f: @ IsOverrideActive(Stack[-3])
0x710: Pop(0)
0x711: Push(Stack[-3])
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-10] = (int) -2
0x714: Return(); Pop(8)

0x715: @ DoDialog(Stack[-4])
0x716: Pop(0)
0x717: PushEmpty(object, object)
0x718: Stack[-2] = Stack[-11]
0x719: Stack[-1] = Stack[-6]
0x71a: Push(-2, 4); TaskCall(9)
0x71b: Call 0x732

0x71c: Pop(-2, 4); TaskReturn
0x71d: Pop(2)
0x71e: @@ IsDialogEnd(Stack[-1])
0x71f: Pop(0)
0x720: Pop(0); Push((bool) Stack[-1] == 0)
0x721: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x722: @ sync()
0x723: Pop(0)
0x724: @@ IsDialogEnd(Stack[-1])
0x725: Pop(0)
0x726: GOTO 0x720

0x727: PushEmpty(object)
0x728: Stack[-1] = Stack[-10]
0x729: Call 0xa13

0x72a: Pop(1)
0x72b: @ StopDialog(Stack[-4])
0x72c: Pop(0)
0x72d: @@ GetReturnValue(Stack[-2])
0x72e: Pop(0)
0x72f: Stack[-10] = Stack[-2]
0x730: Return(); Pop(8)

0x731: Stack[-4] = 0
0x732: PushEmpty()
0x733: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x734: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x735: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x736: Push((int) 1)
0x737: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x738: PushEmpty(bool, object)
0x739: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73a: Call 0xbe9

0x73b: Pop(1)
0x73c: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x73d: PushEmpty(object, object)
0x73e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x740: Call 0xb29

0x741: Pop(2)
0x742: PushEmpty(string)
0x743: Stack[-1] = "Neutral"
0x744: Call 0x785

0x745: Pop(1)
0x746: Push((int) 9951)
0x747: @@ SetMessage(Stack[-1])
0x748: Pop(1)
0x749: @@ ClearReplies()
0x74a: Pop(0)
0x74b: Push((int) 9952)
0x74c: Push((int) 10970)
0x74d: Push((int) 10969)
0x74e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74f: Pop(3)
0x750: Push((int) 9961)
0x751: Push((int) 10970)
0x752: Push((int) 10978)
0x753: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x754: Pop(3)
0x755: GOTO 0x767

0x756: PushEmpty(string)
0x757: Stack[-1] = "Neutral"
0x758: Call 0x785

0x759: Pop(1)
0x75a: Push((int) 15314)
0x75b: @@ SetMessage(Stack[-1])
0x75c: Pop(1)
0x75d: @@ ClearReplies()
0x75e: Pop(0)
0x75f: Push((int) 15315)
0x760: Push((int) -1)
0x761: Push((int) 16553)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: GOTO 0x767

0x765: Return(); Pop(0)

0x766: GOTO 0x736

0x767: PushEmpty(bool)
0x768: Call 0xa8e

0x769: Pop(0)
0x76a: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x76b: @ lshWaitForAnimEnd()
0x76c: Pop(0)
0x76d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: GOTO 0x775

0x770: PushEmpty(string)
0x771: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x772: Call 0xa17

0x773: Pop(1)
0x774: GOTO 0x76b

0x775: GOTO 0x784

0x776: Push("all")
0x777: Push("idle")
0x778: @ PlayAnimation(Stack[-2], Stack[-1])
0x779: Pop(2)
0x77a: @ WaitForAnimEnd()
0x77b: Pop(0)
0x77c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: GOTO 0x784

0x77f: Push("all")
0x780: Push("idle")
0x781: @ PlayAnimation(Stack[-2], Stack[-1])
0x782: Pop(2)
0x783: GOTO 0x77a

0x784: Return(); Pop(0)

0x785: PushEmpty()
0x786: PushEmpty(bool)
0x787: Call 0xa8e

0x788: Pop(0)
0x789: Pop(1); Push((bool) Stack[-1] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Return(); Pop(0)

0x78c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x78d: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78e: Return(); Pop(0)

0x78f: PushEmpty(string)
0x790: Stack[-1] = Stack[-2]
0x791: Call 0xa17

0x792: Pop(1)
0x793: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x794: Return(); Pop(0)

0x795: PushEmpty()
0x796: Push((int) 1)
0x797: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x798: PushEmpty()
0x799: Call 0xa29

0x79a: Pop(0)
0x79b: Push((int) 10976)
0x79c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x79e: PushEmpty(object, object)
0x79f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a1: Call 0xae5

0x7a2: Pop(2)
0x7a3: PushEmpty(object, object)
0x7a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a6: Call 0xac7

0x7a7: Pop(2)
0x7a8: Push((int) 10968)
0x7a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7ab: PushEmpty(bool, object)
0x7ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ad: Call 0xbe9

0x7ae: Pop(1)
0x7af: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7b0: PushEmpty(object, object)
0x7b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b3: Call 0xb29

0x7b4: Pop(2)
0x7b5: PushEmpty(string)
0x7b6: Stack[-1] = "Neutral"
0x7b7: Call 0x785

0x7b8: Pop(1)
0x7b9: Push((int) 9951)
0x7ba: @@ SetMessage(Stack[-1])
0x7bb: Pop(1)
0x7bc: @@ ClearReplies()
0x7bd: Pop(0)
0x7be: Push((int) 9952)
0x7bf: Push((int) 10970)
0x7c0: Push((int) 10969)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: Push((int) 9961)
0x7c4: Push((int) 10970)
0x7c5: Push((int) 10978)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Return(); Pop(0)

0x7c9: PushEmpty(string)
0x7ca: Stack[-1] = "Neutral"
0x7cb: Call 0x785

0x7cc: Pop(1)
0x7cd: Push((int) 15314)
0x7ce: @@ SetMessage(Stack[-1])
0x7cf: Pop(1)
0x7d0: @@ ClearReplies()
0x7d1: Pop(0)
0x7d2: Push((int) 15315)
0x7d3: Push((int) -1)
0x7d4: Push((int) 16553)
0x7d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d6: Pop(3)
0x7d7: Return(); Pop(0)

0x7d8: Push((int) 10970)
0x7d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7da: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7db: PushEmpty(string)
0x7dc: Stack[-1] = "Neutral"
0x7dd: Call 0x785

0x7de: Pop(1)
0x7df: Push((int) 9953)
0x7e0: @@ SetMessage(Stack[-1])
0x7e1: Pop(1)
0x7e2: @@ ClearReplies()
0x7e3: Pop(0)
0x7e4: Push((int) 9954)
0x7e5: Push((int) -1)
0x7e6: Push((int) 10971)
0x7e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(3)
0x7e9: Push((int) 9955)
0x7ea: Push((int) 10973)
0x7eb: Push((int) 10972)
0x7ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ed: Pop(3)
0x7ee: Return(); Pop(0)

0x7ef: Push((int) 10973)
0x7f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7f2: PushEmpty(string)
0x7f3: Stack[-1] = "Neutral"
0x7f4: Call 0x785

0x7f5: Pop(1)
0x7f6: Push((int) 9956)
0x7f7: @@ SetMessage(Stack[-1])
0x7f8: Pop(1)
0x7f9: @@ ClearReplies()
0x7fa: Pop(0)
0x7fb: Push((int) 9957)
0x7fc: Push((int) 10975)
0x7fd: Push((int) 10974)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: Return(); Pop(0)

0x801: Push((int) 10975)
0x802: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x804: PushEmpty(string)
0x805: Stack[-1] = "Neutral"
0x806: Call 0x785

0x807: Pop(1)
0x808: Push((int) 9958)
0x809: @@ SetMessage(Stack[-1])
0x80a: Pop(1)
0x80b: @@ ClearReplies()
0x80c: Pop(0)
0x80d: Push((int) 9959)
0x80e: Push((int) -1)
0x80f: Push((int) 10976)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Push((int) 9960)
0x813: Push((int) -1)
0x814: Push((int) 10977)
0x815: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(3)
0x817: Return(); Pop(0)

0x818: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x819: PushEmpty(bool)
0x81a: Call 0xa8e

0x81b: Pop(0)
0x81c: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81d: @ lshStopAnimation()
0x81e: Pop(0)
0x81f: GOTO 0x822

0x820: @ StopAnimation()
0x821: Pop(0)
0x822: Return(); Pop(0)

0x823: GOTO 0x796

0x824: Return(); Pop(0)

0x825: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x826: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x827: PushEmpty(bool, object)
0x828: Stack[-1] = Stack[-11]
0x829: Call 0x9db

0x82a: Pop(1)
0x82b: Pop(1); Push((bool) Stack[-1] == 0)
0x82c: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82d: Stack[-10] = (int) -2
0x82e: Return(); Pop(8)

0x82f: @ CreateDialog(Stack[-4])
0x830: Pop(0)
0x831: PushEmpty(int)
0x832: Call 0xa8a

0x833: Pop(0)
0x834: @@ SetNPCName(Stack[-1])
0x835: Pop(1)
0x836: PushEmpty(string)
0x837: Call 0xa8c

0x838: Pop(0)
0x839: @@ SetPhoto(Stack[-1])
0x83a: Pop(1)
0x83b: PushEmpty(int)
0x83c: Call 0xca6

0x83d: Pop(0)
0x83e: @@ SetPlayerName(Stack[-1])
0x83f: Pop(1)
0x840: Stack[-2] = (int) -1
0x841: @ IsOverrideActive(Stack[-3])
0x842: Pop(0)
0x843: Push(Stack[-3])
0x844: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x845: Stack[-10] = (int) -2
0x846: Return(); Pop(8)

0x847: @ DoDialog(Stack[-4])
0x848: Pop(0)
0x849: PushEmpty(object, object)
0x84a: Stack[-2] = Stack[-11]
0x84b: Stack[-1] = Stack[-6]
0x84c: Push(-2, 4); TaskCall(11)
0x84d: Call 0x864

0x84e: Pop(-2, 4); TaskReturn
0x84f: Pop(2)
0x850: @@ IsDialogEnd(Stack[-1])
0x851: Pop(0)
0x852: Pop(0); Push((bool) Stack[-1] == 0)
0x853: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x854: @ sync()
0x855: Pop(0)
0x856: @@ IsDialogEnd(Stack[-1])
0x857: Pop(0)
0x858: GOTO 0x852

0x859: PushEmpty(object)
0x85a: Stack[-1] = Stack[-10]
0x85b: Call 0xa13

0x85c: Pop(1)
0x85d: @ StopDialog(Stack[-4])
0x85e: Pop(0)
0x85f: @@ GetReturnValue(Stack[-2])
0x860: Pop(0)
0x861: Stack[-10] = Stack[-2]
0x862: Return(); Pop(8)

0x863: Stack[-4] = 0
0x864: PushEmpty()
0x865: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x866: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x867: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x868: Push((int) 1)
0x869: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x86a: PushEmpty(string)
0x86b: Stack[-1] = "Neutral"
0x86c: Call 0x8ac

0x86d: Pop(1)
0x86e: Push((int) 12815)
0x86f: @@ SetMessage(Stack[-1])
0x870: Pop(1)
0x871: @@ ClearReplies()
0x872: Pop(0)
0x873: PushEmpty(bool)
0x874: Stack[-1] = (bool) 0
0x875: PushEmpty(bool, object)
0x876: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x877: Call 0xbad

0x878: Pop(1)
0x879: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87a: PushEmpty(bool, object)
0x87b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87c: Call 0xbb9

0x87d: Pop(1)
0x87e: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87f: Stack[-1] = (bool) 1
0x880: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x881: Push((int) 12816)
0x882: Push((int) 14017)
0x883: Push((int) 14016)
0x884: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x885: Pop(3)
0x886: Push((int) 12828)
0x887: Push((int) -1)
0x888: Push((int) 14028)
0x889: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: GOTO 0x88e

0x88c: Return(); Pop(0)

0x88d: GOTO 0x868

0x88e: PushEmpty(bool)
0x88f: Call 0xa8e

0x890: Pop(0)
0x891: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x892: @ lshWaitForAnimEnd()
0x893: Pop(0)
0x894: Push( Stack[3 + Tasks[-1].StackPointer] )
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: GOTO 0x89c

0x897: PushEmpty(string)
0x898: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x899: Call 0xa17

0x89a: Pop(1)
0x89b: GOTO 0x892

0x89c: GOTO 0x8ab

0x89d: Push("all")
0x89e: Push("idle")
0x89f: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a0: Pop(2)
0x8a1: @ WaitForAnimEnd()
0x8a2: Pop(0)
0x8a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a5: GOTO 0x8ab

0x8a6: Push("all")
0x8a7: Push("idle")
0x8a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a9: Pop(2)
0x8aa: GOTO 0x8a1

0x8ab: Return(); Pop(0)

0x8ac: PushEmpty()
0x8ad: PushEmpty(bool)
0x8ae: Call 0xa8e

0x8af: Pop(0)
0x8b0: Pop(1); Push((bool) Stack[-1] == 0)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b2: Return(); Pop(0)

0x8b3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b5: Return(); Pop(0)

0x8b6: PushEmpty(string)
0x8b7: Stack[-1] = Stack[-2]
0x8b8: Call 0xa17

0x8b9: Pop(1)
0x8ba: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8bb: Return(); Pop(0)

0x8bc: PushEmpty()
0x8bd: Push((int) 1)
0x8be: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x8bf: PushEmpty()
0x8c0: Call 0xa29

0x8c1: Pop(0)
0x8c2: Push((int) 14233)
0x8c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8c5: PushEmpty(object, object)
0x8c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c8: Call 0xaf0

0x8c9: Pop(2)
0x8ca: PushEmpty(object, object)
0x8cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8cd: Call 0xb12

0x8ce: Pop(2)
0x8cf: Push((int) 14234)
0x8d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d2: PushEmpty(object, object)
0x8d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d5: Call 0xaf0

0x8d6: Pop(2)
0x8d7: PushEmpty(object, object)
0x8d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8da: Call 0xb12

0x8db: Pop(2)
0x8dc: Push((int) 14027)
0x8dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8df: PushEmpty(object, object)
0x8e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e2: Call 0xaf0

0x8e3: Pop(2)
0x8e4: PushEmpty(object, object)
0x8e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e7: Call 0xaf6

0x8e8: Pop(2)
0x8e9: Push((int) 14026)
0x8ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8eb: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8ec: PushEmpty(object, object)
0x8ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ef: Call 0xaf0

0x8f0: Pop(2)
0x8f1: PushEmpty(object, object)
0x8f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f4: Call 0xaf6

0x8f5: Pop(2)
0x8f6: Push((int) 14015)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x8f9: PushEmpty(string)
0x8fa: Stack[-1] = "Neutral"
0x8fb: Call 0x8ac

0x8fc: Pop(1)
0x8fd: Push((int) 12815)
0x8fe: @@ SetMessage(Stack[-1])
0x8ff: Pop(1)
0x900: @@ ClearReplies()
0x901: Pop(0)
0x902: PushEmpty(bool)
0x903: Stack[-1] = (bool) 0
0x904: PushEmpty(bool, object)
0x905: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x906: Call 0xbad

0x907: Pop(1)
0x908: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x909: PushEmpty(bool, object)
0x90a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90b: Call 0xbb9

0x90c: Pop(1)
0x90d: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90e: Stack[-1] = (bool) 1
0x90f: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x910: Push((int) 12816)
0x911: Push((int) 14017)
0x912: Push((int) 14016)
0x913: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x914: Pop(3)
0x915: Push((int) 12828)
0x916: Push((int) -1)
0x917: Push((int) 14028)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Return(); Pop(0)

0x91b: Push((int) 14017)
0x91c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x91e: PushEmpty(bool, object)
0x91f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x920: Call 0xba1

0x921: Pop(1)
0x922: Pop(1); Push((bool) Stack[-1] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x924: PushEmpty(string)
0x925: Stack[-1] = "Neutral"
0x926: Call 0x8ac

0x927: Pop(1)
0x928: Push((int) 12817)
0x929: @@ SetMessage(Stack[-1])
0x92a: Pop(1)
0x92b: @@ ClearReplies()
0x92c: Pop(0)
0x92d: Push((int) 13022)
0x92e: Push((int) 14230)
0x92f: Push((int) 14229)
0x930: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x931: Pop(3)
0x932: Return(); Pop(0)

0x933: PushEmpty(bool, object)
0x934: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x935: Call 0xba1

0x936: Pop(1)
0x937: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x938: PushEmpty(string)
0x939: Stack[-1] = "Neutral"
0x93a: Call 0x8ac

0x93b: Pop(1)
0x93c: Push((int) 13021)
0x93d: @@ SetMessage(Stack[-1])
0x93e: Pop(1)
0x93f: @@ ClearReplies()
0x940: Pop(0)
0x941: Push((int) 12818)
0x942: Push((int) 14019)
0x943: Push((int) 14018)
0x944: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x945: Pop(3)
0x946: Return(); Pop(0)

0x947: Push((int) 14019)
0x948: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x949: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x94a: PushEmpty(string)
0x94b: Stack[-1] = "Neutral"
0x94c: Call 0x8ac

0x94d: Pop(1)
0x94e: Push((int) 12819)
0x94f: @@ SetMessage(Stack[-1])
0x950: Pop(1)
0x951: @@ ClearReplies()
0x952: Pop(0)
0x953: Push((int) 12820)
0x954: Push((int) 14021)
0x955: Push((int) 14020)
0x956: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x957: Pop(3)
0x958: Return(); Pop(0)

0x959: Push((int) 14021)
0x95a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95b: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x95c: PushEmpty(string)
0x95d: Stack[-1] = "Neutral"
0x95e: Call 0x8ac

0x95f: Pop(1)
0x960: Push((int) 12821)
0x961: @@ SetMessage(Stack[-1])
0x962: Pop(1)
0x963: @@ ClearReplies()
0x964: Pop(0)
0x965: Push((int) 12822)
0x966: Push((int) 14023)
0x967: Push((int) 14022)
0x968: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x969: Pop(3)
0x96a: Return(); Pop(0)

0x96b: Push((int) 14023)
0x96c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x96e: PushEmpty(string)
0x96f: Stack[-1] = "Neutral"
0x970: Call 0x8ac

0x971: Pop(1)
0x972: Push((int) 12823)
0x973: @@ SetMessage(Stack[-1])
0x974: Pop(1)
0x975: @@ ClearReplies()
0x976: Pop(0)
0x977: Push((int) 12824)
0x978: Push((int) 14025)
0x979: Push((int) 14024)
0x97a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97b: Pop(3)
0x97c: Push((int) 12826)
0x97d: Push((int) -1)
0x97e: Push((int) 14026)
0x97f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x980: Pop(3)
0x981: Return(); Pop(0)

0x982: Push((int) 14025)
0x983: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x985: PushEmpty(string)
0x986: Stack[-1] = "Neutral"
0x987: Call 0x8ac

0x988: Pop(1)
0x989: Push((int) 12825)
0x98a: @@ SetMessage(Stack[-1])
0x98b: Pop(1)
0x98c: @@ ClearReplies()
0x98d: Pop(0)
0x98e: Push((int) 12827)
0x98f: Push((int) -1)
0x990: Push((int) 14027)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: Return(); Pop(0)

0x994: Push((int) 14230)
0x995: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x997: PushEmpty(string)
0x998: Stack[-1] = "Neutral"
0x999: Call 0x8ac

0x99a: Pop(1)
0x99b: Push((int) 13023)
0x99c: @@ SetMessage(Stack[-1])
0x99d: Pop(1)
0x99e: @@ ClearReplies()
0x99f: Pop(0)
0x9a0: Push((int) 13024)
0x9a1: Push((int) 14232)
0x9a2: Push((int) 14231)
0x9a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a4: Pop(3)
0x9a5: Push((int) 13027)
0x9a6: Push((int) -1)
0x9a7: Push((int) 14234)
0x9a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a9: Pop(3)
0x9aa: Return(); Pop(0)

0x9ab: Push((int) 14232)
0x9ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9ae: PushEmpty(string)
0x9af: Stack[-1] = "Neutral"
0x9b0: Call 0x8ac

0x9b1: Pop(1)
0x9b2: Push((int) 13025)
0x9b3: @@ SetMessage(Stack[-1])
0x9b4: Pop(1)
0x9b5: @@ ClearReplies()
0x9b6: Pop(0)
0x9b7: Push((int) 13026)
0x9b8: Push((int) -1)
0x9b9: Push((int) 14233)
0x9ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bb: Pop(3)
0x9bc: Return(); Pop(0)

0x9bd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9be: PushEmpty(bool)
0x9bf: Call 0xa8e

0x9c0: Pop(0)
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9c2: @ lshStopAnimation()
0x9c3: Pop(0)
0x9c4: GOTO 0x9c7

0x9c5: @ StopAnimation()
0x9c6: Pop(0)
0x9c7: Return(); Pop(0)

0x9c8: GOTO 0x8bd

0x9c9: Return(); Pop(0)

0x9ca: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x9cb: @@ GetPosition(Stack[-4])
0x9cc: Pop(0)
0x9cd: @ GetPosition(Stack[-3])
0x9ce: Pop(0)
0x9cf: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x9d0: Push(CvectorIndex(Stack[-2], 0))
0x9d1: Push(CvectorIndex(Stack[-3], 2))
0x9d2: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9d3: Pop(2)
0x9d4: Stack[-10] = Stack[-1]
0x9d5: Return(); Pop(8)

0x9d6: PushEmpty(bool, bool)
0x9d7: @ IsLoaded(Stack[-1])
0x9d8: Pop(0)
0x9d9: Stack[-3] = Stack[-1]
0x9da: Return(); Pop(2)

0x9db: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x9dc: @@ GetPosition(Stack[-7])
0x9dd: Pop(0)
0x9de: @@ GetEyesHeight(Stack[-8])
0x9df: Pop(0)
0x9e0: Push(CvectorIndex(Stack[-7], 1))
0x9e1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x9e2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x9e3: @ GetPosition(Stack[-6])
0x9e4: Pop(0)
0x9e5: @ GetEyesHeight(Stack[-8])
0x9e6: Pop(0)
0x9e7: Push(CvectorIndex(Stack[-6], 1))
0x9e8: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x9e9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x9ea: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x9eb: Push(CvectorIndex(Stack[-5], 1))
0x9ec: Stack[-1] = (int) 0
0x9ed: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x9ee: Pop(0); Push(Stack[-5] | Stack[-5]);
0x9ef: Pop(1); Push(Sqrt(Stack[-1]))
0x9f0: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x9f1: Stack[-4] = -Stack[-5]; Pop(0);
0x9f2: Push((int) 70)
0x9f3: Pop(1); Push(Stack[-6] * Stack[-1]);
0x9f4: PushEmpty(cvector, cvector)
0x9f5: Push(CVector(0.0, 1.0, 0.0))
0x9f6: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x9f7: Call 0xa30

0x9f8: Pop(1)
0x9f9: Push((int) 25)
0x9fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9fc: Push(CVector(0.0, 10.0, 0.0))
0x9fd: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x9fe: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x9ff: @ IsOverrideActive(Stack[-1])
0xa00: Pop(0)
0xa01: Push(Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa03: Stack[-18] = (bool) 0
0xa04: Return(); Pop(16)

0xa05: @ StopWorld()
0xa06: Pop(0)
0xa07: @ CameraTransit(Stack[-2], Stack[-4])
0xa08: Pop(0)
0xa09: Push(CvectorIndex(Stack[-3], 0))
0xa0a: Push(CvectorIndex(Stack[-4], 2))
0xa0b: @ Rotate(Stack[-2], Stack[-1])
0xa0c: Pop(2)
0xa0d: @ CameraWaitForPlayFinish()
0xa0e: Pop(0)
0xa0f: @ ResumeWorld()
0xa10: Pop(0)
0xa11: Stack[-18] = (bool) 1
0xa12: Return(); Pop(16)

0xa13: PushEmpty()
0xa14: @ CameraSwitchToNormal()
0xa15: Pop(0)
0xa16: Return(); Pop(0)

0xa17: PushEmpty(float, float, float, float)
0xa18: Push("playing ")
0xa19: Pop(1); Push(Stack[-1] + Stack[-6]);
0xa1a: @ Trace(Stack[-1])
0xa1b: Pop(1)
0xa1c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xa1d: Pop(0)
0xa1e: @ lshPlayAnimation(Stack[-2], Stack[-1])
0xa1f: Pop(0)
0xa20: Push("start: ")
0xa21: Pop(1); Push(Stack[-1] + Stack[-3]);
0xa22: @ Trace(Stack[-1])
0xa23: Pop(1)
0xa24: Push("end: ")
0xa25: Pop(1); Push(Stack[-1] + Stack[-2]);
0xa26: @ Trace(Stack[-1])
0xa27: Pop(1)
0xa28: Return(); Pop(4)

0xa29: PushEmpty(bool)
0xa2a: Call 0xa8e

0xa2b: Pop(0)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2d: @ lshStopSpeech()
0xa2e: Pop(0)
0xa2f: Return(); Pop(0)

0xa30: PushEmpty(float, float)
0xa31: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa32: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa33: Push((float)0.0)
0xa34: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa35: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa36: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa37: Return(); Pop(2)

0xa38: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa39: Return(); Pop(2)

0xa3a: PushEmpty(int, int)
0xa3b: @ GetVariable(Stack[-3], Stack[-1])
0xa3c: Pop(0)
0xa3d: Stack[-4] = Stack[-1]
0xa3e: Return(); Pop(2)

0xa3f: PushEmpty(int, int, bool, int, int, bool)
0xa40: @@ GetItemID(Stack[-3])
0xa41: Pop(0)
0xa42: Push("Category")
0xa43: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xa44: Pop(1)
0xa45: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xa46: Pop(0)
0xa47: Pop(0); Push((bool) Stack[-1] == 0)
0xa48: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa49: @@ DropItems(Stack[-8], Stack[-7])
0xa4a: Pop(0)
0xa4b: Return(); Pop(6)

0xa4c: PushEmpty(object, object)
0xa4d: @ CreateInvItem(Stack[-1])
0xa4e: Pop(0)
0xa4f: @@ SetItemName(Stack[-4])
0xa50: Pop(0)
0xa51: PushEmpty(object, object, int)
0xa52: Stack[-3] = Stack[-8]
0xa53: Stack[-2] = Stack[-4]
0xa54: Stack[-1] = Stack[-6]
0xa55: Call 0xa3f

0xa56: Pop(3)
0xa57: Return(); Pop(2)

0xa58: Stack[-1] = 0
0xa59: PushEmpty(object, object)
0xa5a: @ FindActor(Stack[-1], Stack[-4])
0xa5b: Pop(0)
0xa5c: Pop(0); Push((bool) Stack[-1] == 0)
0xa5d: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5e: Stack[-5] = (bool) 0
0xa5f: Return(); Pop(2)

0xa60: @ Trigger(Stack[-1], Stack[-3])
0xa61: Pop(0)
0xa62: Stack[-5] = (bool) 1
0xa63: Return(); Pop(2)

0xa64: Stack[-1] = 0
0xa65: PushEmpty(float, float)
0xa66: @ GetGameTime(Stack[-1])
0xa67: Pop(0)
0xa68: Stack[-3] = Stack[-1]
0xa69: Return(); Pop(2)

0xa6a: PushEmpty(float, float)
0xa6b: @ GetGameTime(Stack[-1])
0xa6c: Pop(0)
0xa6d: Push((int) 1)
0xa6e: PushEmpty(int)
0xa6f: Push((int) 24)
0xa70: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa71: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa72: Return(); Pop(2)

0xa73: PushEmpty(float, float)
0xa74: @ GetGameTime(Stack[-1])
0xa75: Pop(0)
0xa76: PushEmpty(int)
0xa77: Stack[-1] = Stack[-2]
0xa78: Push((int) 24)
0xa79: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xa7a: Return(); Pop(2)

0xa7b: PushEmpty()
0xa7c: PushEmpty(int)
0xa7d: Call 0xa6a

0xa7e: Pop(0)
0xa7f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa80: Return(); Pop(0)

0xa81: PushEmpty(bool, bool)
0xa82: PushEmpty(string)
0xa83: Stack[-1] = "No"
0xa84: Call 0xa17

0xa85: Pop(1)
0xa86: @ lshWaitForAnimEnd(Stack[-1])
0xa87: Pop(0)
0xa88: Stack[-3] = Stack[-1]
0xa89: Return(); Pop(2)

0xa8a: Stack[-1] = (int) 2867
0xa8b: Return(); Pop(0)

0xa8c: Stack[-1] = "ui/NPC_Laska.png"
0xa8d: Return(); Pop(0)

0xa8e: Stack[-1] = (bool) 1
0xa8f: Return(); Pop(0)

0xa90: PushEmpty(object, object, object, object)
0xa91: PushEmpty(object)
0xa92: Call 0xc95

0xa93: Stack[-3] = Stack[-1]
0xa94: Pop(1)
0xa95: Push("d1q02AnnaGotoLaska")
0xa96: @@ FindMark(Stack[-2], Stack[-1])
0xa97: Pop(1)
0xa98: Push(Stack[-1])
0xa99: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa9a: @@ Remove()
0xa9b: Pop(0)
0xa9c: Push("d1q02ViktorGotoAnna")
0xa9d: @@ FindMark(Stack[-2], Stack[-1])
0xa9e: Pop(1)
0xa9f: Push(Stack[-1])
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xaa1: @@ Remove()
0xaa2: Pop(0)
0xaa3: PushEmpty()
0xaa4: Call 0xcb7

0xaa5: Pop(0)
0xaa6: PushEmpty(bool, int)
0xaa7: Stack[-1] = (int) 35
0xaa8: Call 0xc84

0xaa9: Pop(2)
0xaaa: PushEmpty(bool, string, string)
0xaab: Stack[-2] = "quest_d1_02"
0xaac: Stack[-1] = "completed"
0xaad: Call 0xa59

0xaae: Pop(3)
0xaaf: Return(); Pop(4)

0xab0: Stack[-1] = 0
0xab1: Stack[-2] = 0
0xab2: PushEmpty(object, object)
0xab3: Push("lockpick1time is given")
0xab4: @ Trace(Stack[-1])
0xab5: Pop(1)
0xab6: @ CreateInvItem(Stack[-1])
0xab7: Pop(0)
0xab8: Push("lockpick")
0xab9: @@ SetItemName(Stack[-1])
0xaba: Pop(1)
0xabb: Push("uses")
0xabc: Push((int) 1)
0xabd: @@ SetProperty(Stack[-2], Stack[-1])
0xabe: Pop(2)
0xabf: PushEmpty(object, object, int)
0xac0: Stack[-3] = Stack[-7]
0xac1: Stack[-2] = Stack[-4]
0xac2: Stack[-1] = (int) 1
0xac3: Call 0xa3f

0xac4: Pop(3)
0xac5: Return(); Pop(2)

0xac6: Stack[-1] = 0
0xac7: PushEmpty()
0xac8: Push("playsound")
0xac9: Push("giveitem")
0xaca: @ TriggerWorld(Stack[-2], Stack[-1])
0xacb: Pop(2)
0xacc: Return(); Pop(0)

0xacd: PushEmpty()
0xace: Push("ood1Laska4")
0xacf: Push((int) 1)
0xad0: @ SetVariable(Stack[-2], Stack[-1])
0xad1: Pop(2)
0xad2: Return(); Pop(0)

0xad3: PushEmpty()
0xad4: Push("ood1Laska5")
0xad5: Push((int) 1)
0xad6: @ SetVariable(Stack[-2], Stack[-1])
0xad7: Pop(2)
0xad8: Return(); Pop(0)

0xad9: PushEmpty()
0xada: Push("ood1Laska6")
0xadb: Push((int) 1)
0xadc: @ SetVariable(Stack[-2], Stack[-1])
0xadd: Pop(2)
0xade: Return(); Pop(0)

0xadf: PushEmpty()
0xae0: Push("ood1Laska7")
0xae1: Push((int) 1)
0xae2: @ SetVariable(Stack[-2], Stack[-1])
0xae3: Pop(2)
0xae4: Return(); Pop(0)

0xae5: PushEmpty()
0xae6: Push("powder is given")
0xae7: @ Trace(Stack[-1])
0xae8: Pop(1)
0xae9: PushEmpty(object, string, int)
0xaea: Stack[-3] = Stack[-5]
0xaeb: Stack[-2] = "powder"
0xaec: Stack[-1] = (int) 1
0xaed: Call 0xa4c

0xaee: Pop(3)
0xaef: Return(); Pop(0)

0xaf0: PushEmpty()
0xaf1: Push("ood6Laska1")
0xaf2: Push((int) 1)
0xaf3: @ SetVariable(Stack[-2], Stack[-1])
0xaf4: Pop(2)
0xaf5: Return(); Pop(0)

0xaf6: PushEmpty(object, object)
0xaf7: Push("d6q01")
0xaf8: Push((int) 3)
0xaf9: @ SetVariable(Stack[-2], Stack[-1])
0xafa: Pop(2)
0xafb: PushEmpty(object)
0xafc: Call 0xc95

0xafd: Stack[-2] = Stack[-1]
0xafe: Pop(1)
0xaff: Push("d6q01LaskaGotoAlbinos")
0xb00: Push("pt_d6q03_albinos")
0xb01: Push((int) 1)
0xb02: Push((int) 15400)
0xb03: PushEmpty(float)
0xb04: Call 0xa65

0xb05: Pop(0)
0xb06: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(5)
0xb08: PushEmpty()
0xb09: Call 0xcc7

0xb0a: Pop(0)
0xb0b: PushEmpty(bool, string, string)
0xb0c: Stack[-2] = "quest_d6_01"
0xb0d: Stack[-1] = "albinos_klara"
0xb0e: Call 0xa59

0xb0f: Pop(3)
0xb10: Return(); Pop(2)

0xb11: Stack[-1] = 0
0xb12: PushEmpty()
0xb13: Push("d6q01")
0xb14: Push((int) 4)
0xb15: @ SetVariable(Stack[-2], Stack[-1])
0xb16: Pop(2)
0xb17: PushEmpty(bool, string, string)
0xb18: Stack[-2] = "quest_d6_01"
0xb19: Stack[-1] = "eva_klara"
0xb1a: Call 0xa59

0xb1b: Pop(3)
0xb1c: Return(); Pop(0)

0xb1d: PushEmpty()
0xb1e: Push("KnowLaska")
0xb1f: Push((int) 1)
0xb20: @ SetVariable(Stack[-2], Stack[-1])
0xb21: Pop(2)
0xb22: Return(); Pop(0)

0xb23: PushEmpty()
0xb24: Push("ood1Laska1")
0xb25: Push((int) 1)
0xb26: @ SetVariable(Stack[-2], Stack[-1])
0xb27: Pop(2)
0xb28: Return(); Pop(0)

0xb29: PushEmpty()
0xb2a: Push("ood3Laska1")
0xb2b: Push((int) 1)
0xb2c: @ SetVariable(Stack[-2], Stack[-1])
0xb2d: Pop(2)
0xb2e: Return(); Pop(0)

0xb2f: PushEmpty()
0xb30: Push("ood1Laska2")
0xb31: Push((int) 1)
0xb32: @ SetVariable(Stack[-2], Stack[-1])
0xb33: Pop(2)
0xb34: Return(); Pop(0)

0xb35: PushEmpty()
0xb36: Push("ood1Laska3")
0xb37: Push((int) 1)
0xb38: @ SetVariable(Stack[-2], Stack[-1])
0xb39: Pop(2)
0xb3a: Return(); Pop(0)

0xb3b: PushEmpty()
0xb3c: PushEmpty(int, string)
0xb3d: Stack[-1] = "d1q01FirstGeorgVisit"
0xb3e: Call 0xa3a

0xb3f: Pop(1)
0xb40: Push((int) 1)
0xb41: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb42: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb43: Stack[-2] = (bool) 1
0xb44: Return(); Pop(0)

0xb45: Stack[-2] = (bool) 0
0xb46: Return(); Pop(0)

0xb47: PushEmpty()
0xb48: PushEmpty(int, string)
0xb49: Stack[-1] = "d1q02"
0xb4a: Call 0xa3a

0xb4b: Pop(1)
0xb4c: Push((int) 2)
0xb4d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb4f: Stack[-2] = (bool) 1
0xb50: Return(); Pop(0)

0xb51: Stack[-2] = (bool) 0
0xb52: Return(); Pop(0)

0xb53: PushEmpty()
0xb54: PushEmpty(int, string)
0xb55: Stack[-1] = "ood1Laska4"
0xb56: Call 0xa3a

0xb57: Pop(1)
0xb58: Push((int) 0)
0xb59: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb5a: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb5b: Stack[-2] = (bool) 1
0xb5c: Return(); Pop(0)

0xb5d: Stack[-2] = (bool) 0
0xb5e: Return(); Pop(0)

0xb5f: PushEmpty()
0xb60: PushEmpty(int, string)
0xb61: Stack[-1] = "ood1Laska5"
0xb62: Call 0xa3a

0xb63: Pop(1)
0xb64: Push((int) 0)
0xb65: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb66: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb67: Stack[-2] = (bool) 1
0xb68: Return(); Pop(0)

0xb69: Stack[-2] = (bool) 0
0xb6a: Return(); Pop(0)

0xb6b: PushEmpty()
0xb6c: PushEmpty(int, string)
0xb6d: Stack[-1] = "ood1Laska6"
0xb6e: Call 0xa3a

0xb6f: Pop(1)
0xb70: Push((int) 0)
0xb71: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb72: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb73: Stack[-2] = (bool) 1
0xb74: Return(); Pop(0)

0xb75: Stack[-2] = (bool) 0
0xb76: Return(); Pop(0)

0xb77: PushEmpty()
0xb78: PushEmpty(int, string)
0xb79: Stack[-1] = "ood1Laska7"
0xb7a: Call 0xa3a

0xb7b: Pop(1)
0xb7c: Push((int) 0)
0xb7d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb7e: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7f: Stack[-2] = (bool) 1
0xb80: Return(); Pop(0)

0xb81: Stack[-2] = (bool) 0
0xb82: Return(); Pop(0)

0xb83: PushEmpty()
0xb84: PushEmpty(bool, object)
0xb85: Stack[-1] = Stack[-3]
0xb86: Call 0xc25

0xb87: Pop(1)
0xb88: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb89: Stack[-2] = (bool) 1
0xb8a: Return(); Pop(0)

0xb8b: Stack[-2] = (bool) 0
0xb8c: Return(); Pop(0)

0xb8d: PushEmpty()
0xb8e: PushEmpty(bool, object)
0xb8f: Stack[-1] = Stack[-3]
0xb90: Call 0xc30

0xb91: Pop(1)
0xb92: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb93: Stack[-2] = (bool) 1
0xb94: Return(); Pop(0)

0xb95: Stack[-2] = (bool) 0
0xb96: Return(); Pop(0)

0xb97: PushEmpty()
0xb98: PushEmpty(bool, object)
0xb99: Stack[-1] = Stack[-3]
0xb9a: Call 0xc45

0xb9b: Pop(1)
0xb9c: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9d: Stack[-2] = (bool) 1
0xb9e: Return(); Pop(0)

0xb9f: Stack[-2] = (bool) 0
0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: PushEmpty(int, string)
0xba3: Stack[-1] = "d6q03AlbinosKilled"
0xba4: Call 0xa3a

0xba5: Pop(1)
0xba6: Push((int) 1)
0xba7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xba8: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xba9: Stack[-2] = (bool) 1
0xbaa: Return(); Pop(0)

0xbab: Stack[-2] = (bool) 0
0xbac: Return(); Pop(0)

0xbad: PushEmpty()
0xbae: PushEmpty(int, string)
0xbaf: Stack[-1] = "d6q01"
0xbb0: Call 0xa3a

0xbb1: Pop(1)
0xbb2: Push((int) 2)
0xbb3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb5: Stack[-2] = (bool) 1
0xbb6: Return(); Pop(0)

0xbb7: Stack[-2] = (bool) 0
0xbb8: Return(); Pop(0)

0xbb9: PushEmpty()
0xbba: PushEmpty(int, string)
0xbbb: Stack[-1] = "ood6Laska1"
0xbbc: Call 0xa3a

0xbbd: Pop(1)
0xbbe: Push((int) 0)
0xbbf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbc1: Stack[-2] = (bool) 1
0xbc2: Return(); Pop(0)

0xbc3: Stack[-2] = (bool) 0
0xbc4: Return(); Pop(0)

0xbc5: PushEmpty()
0xbc6: PushEmpty(int, string)
0xbc7: Stack[-1] = "KnowKaterina"
0xbc8: Call 0xa3a

0xbc9: Pop(1)
0xbca: Push((int) 1)
0xbcb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbcc: IF (Stack[-1] == 0) GOTO 0xbcf; Pop(1)

0xbcd: Stack[-2] = (bool) 1
0xbce: Return(); Pop(0)

0xbcf: Stack[-2] = (bool) 0
0xbd0: Return(); Pop(0)

0xbd1: PushEmpty()
0xbd2: PushEmpty(int, string)
0xbd3: Stack[-1] = "KnowMaria"
0xbd4: Call 0xa3a

0xbd5: Pop(1)
0xbd6: Push((int) 1)
0xbd7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbd8: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbd9: Stack[-2] = (bool) 1
0xbda: Return(); Pop(0)

0xbdb: Stack[-2] = (bool) 0
0xbdc: Return(); Pop(0)

0xbdd: PushEmpty()
0xbde: PushEmpty(int, string)
0xbdf: Stack[-1] = "KnowMishka"
0xbe0: Call 0xa3a

0xbe1: Pop(1)
0xbe2: Push((int) 1)
0xbe3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbe7; Pop(1)

0xbe5: Stack[-2] = (bool) 1
0xbe6: Return(); Pop(0)

0xbe7: Stack[-2] = (bool) 0
0xbe8: Return(); Pop(0)

0xbe9: PushEmpty()
0xbea: PushEmpty(int, string)
0xbeb: Stack[-1] = "ood3Laska1"
0xbec: Call 0xa3a

0xbed: Pop(1)
0xbee: Push((int) 0)
0xbef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbf1: Stack[-2] = (bool) 1
0xbf2: Return(); Pop(0)

0xbf3: Stack[-2] = (bool) 0
0xbf4: Return(); Pop(0)

0xbf5: PushEmpty()
0xbf6: PushEmpty(int, string)
0xbf7: Stack[-1] = "KnowOspina"
0xbf8: Call 0xa3a

0xbf9: Pop(1)
0xbfa: Push((int) 1)
0xbfb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbfc: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbfd: Stack[-2] = (bool) 1
0xbfe: Return(); Pop(0)

0xbff: Stack[-2] = (bool) 0
0xc00: Return(); Pop(0)

0xc01: PushEmpty()
0xc02: PushEmpty(int, string)
0xc03: Stack[-1] = "ood1Laska1"
0xc04: Call 0xa3a

0xc05: Pop(1)
0xc06: Push((int) 0)
0xc07: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc09: Stack[-2] = (bool) 1
0xc0a: Return(); Pop(0)

0xc0b: Stack[-2] = (bool) 0
0xc0c: Return(); Pop(0)

0xc0d: PushEmpty()
0xc0e: PushEmpty(int, string)
0xc0f: Stack[-1] = "ood1Laska2"
0xc10: Call 0xa3a

0xc11: Pop(1)
0xc12: Push((int) 0)
0xc13: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc14: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc15: Stack[-2] = (bool) 1
0xc16: Return(); Pop(0)

0xc17: Stack[-2] = (bool) 0
0xc18: Return(); Pop(0)

0xc19: PushEmpty()
0xc1a: PushEmpty(int, string)
0xc1b: Stack[-1] = "ood1Laska3"
0xc1c: Call 0xa3a

0xc1d: Pop(1)
0xc1e: Push((int) 0)
0xc1f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc20: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc21: Stack[-2] = (bool) 1
0xc22: Return(); Pop(0)

0xc23: Stack[-2] = (bool) 0
0xc24: Return(); Pop(0)

0xc25: PushEmpty()
0xc26: PushEmpty(int)
0xc27: Call 0xa73

0xc28: Pop(0)
0xc29: Push((int) 18)
0xc2a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc2b: IF (Stack[-1] == 0) GOTO 0xc2e; Pop(1)

0xc2c: Stack[-2] = (bool) 1
0xc2d: Return(); Pop(0)

0xc2e: Stack[-2] = (bool) 0
0xc2f: Return(); Pop(0)

0xc30: PushEmpty()
0xc31: PushEmpty(bool)
0xc32: Stack[-1] = (bool) 0
0xc33: PushEmpty(int)
0xc34: Call 0xa73

0xc35: Pop(0)
0xc36: Push((int) 0)
0xc37: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc38: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc39: PushEmpty(int)
0xc3a: Call 0xa73

0xc3b: Pop(0)
0xc3c: Push((int) 6)
0xc3d: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc3e: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3f: Stack[-1] = (bool) 1
0xc40: IF (Stack[-1] == 0) GOTO 0xc43; Pop(1)

0xc41: Stack[-2] = (bool) 1
0xc42: Return(); Pop(0)

0xc43: Stack[-2] = (bool) 0
0xc44: Return(); Pop(0)

0xc45: PushEmpty()
0xc46: PushEmpty(bool)
0xc47: Stack[-1] = (bool) 0
0xc48: PushEmpty(int)
0xc49: Call 0xa73

0xc4a: Pop(0)
0xc4b: Push((int) 12)
0xc4c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc4e: PushEmpty(int)
0xc4f: Call 0xa73

0xc50: Pop(0)
0xc51: Push((int) 18)
0xc52: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc53: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc54: Stack[-1] = (bool) 1
0xc55: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc56: Stack[-2] = (bool) 1
0xc57: Return(); Pop(0)

0xc58: Stack[-2] = (bool) 0
0xc59: Return(); Pop(0)

0xc5a: PushEmpty(object, object)
0xc5b: @ GetDiaryRoot(Stack[-1])
0xc5c: Pop(0)
0xc5d: Pop(0); Push((bool) Stack[-1] == 0)
0xc5e: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc5f: Push("Can't retrieve diary root")
0xc60: @ Trace(Stack[-1])
0xc61: Pop(1)
0xc62: Stack[-3] = (bool) 0
0xc63: Return(); Pop(2)

0xc64: Stack[-3] = Stack[-1]
0xc65: Return(); Pop(2)

0xc66: Stack[-1] = 0
0xc67: PushEmpty(object, object, int, object, object, int)
0xc68: PushEmpty(object)
0xc69: Call 0xc5a

0xc6a: Stack[-4] = Stack[-1]
0xc6b: Pop(1)
0xc6c: @@ Find(Stack[-7], Stack[-2])
0xc6d: Pop(0)
0xc6e: Pop(0); Push((bool) Stack[-2] == 0)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc70: Push("Can't find diary parent with id: ")
0xc71: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc72: @ Trace(Stack[-1])
0xc73: Pop(1)
0xc74: Stack[-9] = (bool) 0
0xc75: Return(); Pop(6)

0xc76: @@ AddChild(Stack[-8])
0xc77: Pop(0)
0xc78: Push("player_diary")
0xc79: Push((int) 1)
0xc7a: @ SetVariable(Stack[-2], Stack[-1])
0xc7b: Pop(2)
0xc7c: @@ GetCategory(Stack[-1])
0xc7d: Pop(0)
0xc7e: @ SetDiarySection(Stack[-1])
0xc7f: Pop(0)
0xc80: Stack[-9] = (bool) 0
0xc81: Return(); Pop(6)

0xc82: Stack[-2] = 0
0xc83: Stack[-3] = 0
0xc84: PushEmpty(object, object, object, object)
0xc85: PushEmpty(object)
0xc86: Call 0xc5a

0xc87: Stack[-3] = Stack[-1]
0xc88: Pop(1)
0xc89: @@ Find(Stack[-5], Stack[-1])
0xc8a: Pop(0)
0xc8b: Pop(0); Push((bool) Stack[-1] == 0)
0xc8c: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc8d: Stack[-6] = (bool) 0
0xc8e: Return(); Pop(4)

0xc8f: @@ Remove()
0xc90: Pop(0)
0xc91: Stack[-6] = (bool) 1
0xc92: Return(); Pop(4)

0xc93: Stack[-1] = 0
0xc94: Stack[-2] = 0
0xc95: PushEmpty(object, object, object, object)
0xc96: @ GetMainOutdoorScene(Stack[-2])
0xc97: Pop(0)
0xc98: Pop(0); Push((bool) Stack[-2] == 0)
0xc99: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc9a: Push("Can't find main outdoor scene")
0xc9b: @ Trace(Stack[-1])
0xc9c: Pop(1)
0xc9d: Stack[-1] = 0
0xc9e: Stack[-5] = Stack[-1]
0xc9f: Return(); Pop(4)

0xca0: @@ GetMap(Stack[-1])
0xca1: Pop(0)
0xca2: Stack[-5] = Stack[-1]
0xca3: Return(); Pop(4)

0xca4: Stack[-1] = 0
0xca5: Stack[-2] = 0
0xca6: PushEmpty(int, int)
0xca7: Push("player")
0xca8: @ GetVariable(Stack[-1], Stack[-2])
0xca9: Pop(1)
0xcaa: Push((int) 0)
0xcab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcac: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcad: Stack[-3] = (int) 200001
0xcae: Return(); Pop(2)

0xcaf: GOTO 0xcb5

0xcb0: Push((int) 1)
0xcb1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb2: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb3: Stack[-3] = (int) 200002
0xcb4: Return(); Pop(2)

0xcb5: Stack[-3] = (int) 200003
0xcb6: Return(); Pop(2)

0xcb7: PushEmpty(object, object)
0xcb8: Push("Adding diary entry")
0xcb9: @ Trace(Stack[-1])
0xcba: Pop(1)
0xcbb: Push((int) 36)
0xcbc: Push((int) 2)
0xcbd: Push((int) 12118)
0xcbe: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcbf: Pop(3)
0xcc0: PushEmpty(bool, object, int)
0xcc1: Stack[-2] = Stack[-4]
0xcc2: Stack[-1] = (int) 7
0xcc3: Call 0xc67

0xcc4: Pop(3)
0xcc5: Return(); Pop(2)

0xcc6: Stack[-1] = 0
0xcc7: PushEmpty(object, object)
0xcc8: Push("Adding diary entry")
0xcc9: @ Trace(Stack[-1])
0xcca: Pop(1)
0xccb: Push((int) 117)
0xccc: Push((int) 1)
0xccd: Push((int) 13740)
0xcce: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xccf: Pop(3)
0xcd0: PushEmpty(bool, object, int)
0xcd1: Stack[-2] = Stack[-4]
0xcd2: Stack[-1] = (int) 111
0xcd3: Call 0xc67

0xcd4: Pop(3)
0xcd5: Return(); Pop(2)

0xcd6: Stack[-1] = 0
0xcd7: Push(GlobalVars[1])
0xcd8: Stack[-1] = (bool) 0
0xcd9: GlobalVars[1] = Stack[-1]; Pop(1)
0xcda: Return(); Pop(0)

0xcdb: PushEmpty()
0xcdc: Push(GlobalVars[1])
0xcdd: Pop(1); Push((bool) Stack[-1] == 0)
0xcde: IF (Stack[-1] == 0) GOTO 0xce8; Pop(1)

0xcdf: PushEmpty(int, object)
0xce0: Stack[-1] = Stack[-3]
0xce1: Push(-2, 1); TaskCall(2)
0xce2: Call 0x31

0xce3: Pop(-2, 1); TaskReturn
0xce4: Pop(2)
0xce5: Push(GlobalVars[1])
0xce6: Stack[-1] = (bool) 1
0xce7: GlobalVars[1] = Stack[-1]; Pop(1)
0xce8: PushEmpty(bool, int)
0xce9: Stack[-1] = (int) 1
0xcea: Call 0xa7b

0xceb: Pop(1)
0xcec: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xced: PushEmpty(int, object)
0xcee: Stack[-1] = Stack[-3]
0xcef: Push(-2, 1); TaskCall(4)
0xcf0: Call 0x12e

0xcf1: Pop(-2, 1); TaskReturn
0xcf2: Pop(2)
0xcf3: Return(); Pop(0)

0xcf4: PushEmpty(bool, int)
0xcf5: Stack[-1] = (int) 2
0xcf6: Call 0xa7b

0xcf7: Pop(1)
0xcf8: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcf9: PushEmpty(int, object)
0xcfa: Stack[-1] = Stack[-3]
0xcfb: Push(-2, 1); TaskCall(6)
0xcfc: Call 0x5e4

0xcfd: Pop(-2, 1); TaskReturn
0xcfe: Pop(2)
0xcff: Return(); Pop(0)

0xd00: PushEmpty(bool, int)
0xd01: Stack[-1] = (int) 3
0xd02: Call 0xa7b

0xd03: Pop(1)
0xd04: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd05: PushEmpty(int, object)
0xd06: Stack[-1] = Stack[-3]
0xd07: Push(-2, 1); TaskCall(8)
0xd08: Call 0x6f3

0xd09: Pop(-2, 1); TaskReturn
0xd0a: Pop(2)
0xd0b: Return(); Pop(0)

0xd0c: PushEmpty(bool, int)
0xd0d: Stack[-1] = (int) 6
0xd0e: Call 0xa7b

0xd0f: Pop(1)
0xd10: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd11: PushEmpty(int, object)
0xd12: Stack[-1] = Stack[-3]
0xd13: Push(-2, 1); TaskCall(10)
0xd14: Call 0x825

0xd15: Pop(-2, 1); TaskReturn
0xd16: Pop(2)
0xd17: Return(); Pop(0)

0xd18: PushEmpty(bool)
0xd19: Call 0xa81

0xd1a: Pop(1)
0xd1b: Return(); Pop(0)

