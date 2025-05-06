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
	HasItem
	No
	ui/NPC_Aglaja.png
	playsound
	giveitem
	ood7Aglaja1
	ood7Aglaja2
	d7q01
	d7q01AglajaGotoBirdmaskSelf
	pt_map_aglaja
	AddMark
	d7q01BirdmaskD
	pt_d7q01_dbirdmask
	d7q01BirdmaskM
	pt_d7q01_mbirdmask
	d7q01BirdmaskU
	pt_d7q01_ubirdmask
	quest_d7_01
	place_birdmasks
	ood7Aglaja3
	d7q01AglajaFindLierSelf
	d7q01_mreport
	RemoveItemByType
	d7q01_dreport
	d7q01_ureport
	ood7Aglaja4
	ood7Aglaja5
	FindMark
	Remove
	completed
	d7q02
	d8q01
	quest_d8_01
	block_well
	ood8Aglaja1
	ood8Aglaja2
	d8KainIsReason
	d11q01
	quest_d11_01
	init_girl
	remove_andrei
	ood9Aglaja1
	ood9Aglaja2
	ood9Aglaja3
	ood9Aglaja4
	ood9Aglaja5
	d10q01
	d10q01AglajaGotoPetr
	pt_map_petr
	quest_d10_01
	init_house
	ood10Aglaja1
	d10q01SoldierGotoPetr
	ood10Aglaja2
	d11AglajaVisit
	d8TermitnikLoad
	d9TalkToPolkovodec
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
	GetInvItemByName (2 args)
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
		EVENT_11 Op = 0x15b Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x818 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb50 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd3a Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10cd Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1700

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x1293

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
0x15: Call 0x12d4

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
0x26: Call 0x1704

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1287

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1298

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x132c

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x132e

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x162f

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
0x67: Call 0x12d0

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
0x75: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x76: PushEmpty(bool)
0x77: Stack[-1] = (bool) 0
0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call 0x14a6

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call 0x149c

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 1
0x83: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x84: PushEmpty(string)
0x85: Stack[-1] = "Neutral"
0x86: Call 0x14b

0x87: Pop(1)
0x88: Push((int) 12185)
0x89: @@ SetMessage(Stack[-1])
0x8a: Pop(1)
0x8b: @@ ClearReplies()
0x8c: Pop(0)
0x8d: Push((int) 12186)
0x8e: Push((int) 14254)
0x8f: Push((int) 13341)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: Push((int) 13037)
0x93: Push((int) 14245)
0x94: Push((int) 14244)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0x12d

0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 0
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call 0x14b2

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call 0x149c

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xa6: PushEmpty(string)
0xa7: Stack[-1] = "Neutral"
0xa8: Call 0x14b

0xa9: Pop(1)
0xaa: Push((int) 13033)
0xab: @@ SetMessage(Stack[-1])
0xac: Pop(1)
0xad: @@ ClearReplies()
0xae: Pop(0)
0xaf: Push((int) 13034)
0xb0: Push((int) 14260)
0xb1: Push((int) 14241)
0xb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3: Pop(3)
0xb4: GOTO 0x12d

0xb5: PushEmpty(bool, object)
0xb6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Call 0x14be

0xb8: Pop(1)
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call 0x14b

0xbd: Pop(1)
0xbe: Push((int) 13074)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 13076)
0xc4: Push((int) 14287)
0xc5: Push((int) 14286)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 13117)
0xc9: Push((int) 14336)
0xca: Push((int) 14335)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: GOTO 0x12d

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call 0x14b

0xd1: Pop(1)
0xd2: Push((int) 13031)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: PushEmpty(bool, object)
0xd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Call 0x1519

0xda: Pop(1)
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: Push((int) 13141)
0xdd: Push((int) 14362)
0xde: Push((int) 14360)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: PushEmpty(bool)
0xe2: Stack[-1] = (bool) 0
0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call 0x14ee

0xe6: Pop(1)
0xe7: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call 0x150d

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: Stack[-1] = (bool) 1
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: Push((int) 13075)
0xf0: Push((int) 14369)
0xf1: Push((int) 14285)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: PushEmpty(bool)
0xf5: Stack[-1] = (bool) 0
0xf6: PushEmpty(bool, object)
0xf7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Call 0x14d6

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfb: PushEmpty(bool, object)
0xfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Call 0x14e2

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = (bool) 1
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) 13125)
0x103: Push((int) 14345)
0x104: Push((int) 14344)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call 0x14ca

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: Push((int) 13035)
0x10d: Push((int) 14243)
0x10e: Push((int) 14242)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call 0x149c

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x116: Push((int) 13142)
0x117: Push((int) 14364)
0x118: Push((int) 14361)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call 0x1525

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: Push((int) 13377)
0x121: Push((int) 14610)
0x122: Push((int) 14609)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 13032)
0x126: Push((int) -1)
0x127: Push((int) 14239)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: GOTO 0x12d

0x12b: Return(); Pop(0)

0x12c: GOTO 0x74

0x12d: PushEmpty(bool)
0x12e: Call 0x1330

0x12f: Pop(0)
0x130: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x131: @ lshWaitForAnimEnd()
0x132: Pop(0)
0x133: Push( Stack[3 + Tasks[-1].StackPointer] )
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: GOTO 0x13b

0x136: PushEmpty(string)
0x137: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x138: Call 0x12d4

0x139: Pop(1)
0x13a: GOTO 0x131

0x13b: GOTO 0x14a

0x13c: Push("all")
0x13d: Push("idle")
0x13e: @ PlayAnimation(Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: @ WaitForAnimEnd()
0x141: Pop(0)
0x142: Push( Stack[3 + Tasks[-1].StackPointer] )
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: GOTO 0x14a

0x145: Push("all")
0x146: Push("idle")
0x147: @ PlayAnimation(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: GOTO 0x140

0x14a: Return(); Pop(0)

0x14b: PushEmpty()
0x14c: PushEmpty(bool)
0x14d: Call 0x1330

0x14e: Pop(0)
0x14f: Pop(1); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Return(); Pop(0)

0x152: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Return(); Pop(0)

0x155: PushEmpty(string)
0x156: Stack[-1] = Stack[-2]
0x157: Call 0x12d4

0x158: Pop(1)
0x159: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x15a: Return(); Pop(0)

0x15b: PushEmpty()
0x15c: Push((int) 1)
0x15d: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x15e: PushEmpty()
0x15f: Call 0x12e6

0x160: Pop(0)
0x161: Push((int) 14281)
0x162: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: PushEmpty(object, object)
0x165: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x166: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x167: Call 0x1338

0x168: Pop(2)
0x169: Push((int) 14282)
0x16a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16c: PushEmpty(object, object)
0x16d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16f: Call 0x1338

0x170: Pop(2)
0x171: Push((int) 14283)
0x172: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: PushEmpty(object, object)
0x175: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x176: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x177: Call 0x1338

0x178: Pop(2)
0x179: Push((int) 14558)
0x17a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object, object)
0x17d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17f: Call 0x133e

0x180: Pop(2)
0x181: Push((int) 14343)
0x182: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object, object)
0x185: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x186: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x187: Call 0x1344

0x188: Pop(2)
0x189: Push((int) 14363)
0x18a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(object, object)
0x18d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18f: Call 0x13b3

0x190: Pop(2)
0x191: Push((int) 14391)
0x192: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(object, object)
0x195: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x196: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x197: Call 0x1384

0x198: Pop(2)
0x199: PushEmpty(object, object)
0x19a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19c: Call 0x13ad

0x19d: Pop(2)
0x19e: PushEmpty(object, object)
0x19f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a1: Call 0x1332

0x1a2: Pop(2)
0x1a3: Push((int) 14394)
0x1a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a6: PushEmpty(object, object)
0x1a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a9: Call 0x1384

0x1aa: Pop(2)
0x1ab: PushEmpty(object, object)
0x1ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ae: Call 0x13ad

0x1af: Pop(2)
0x1b0: PushEmpty(object, object)
0x1b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call 0x1332

0x1b4: Pop(2)
0x1b5: Push((int) 14389)
0x1b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(object, object)
0x1b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bb: Call 0x1384

0x1bc: Pop(2)
0x1bd: PushEmpty(object, object)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call 0x13ad

0x1c1: Pop(2)
0x1c2: PushEmpty(object, object)
0x1c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c5: Call 0x1332

0x1c6: Pop(2)
0x1c7: Push((int) 14344)
0x1c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ca: PushEmpty(object, object)
0x1cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cd: Call 0x13a7

0x1ce: Pop(2)
0x1cf: Push((int) 14242)
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: PushEmpty(object, object)
0x1d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d5: Call 0x137e

0x1d6: Pop(2)
0x1d7: Push((int) 14623)
0x1d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1da: PushEmpty(object, object)
0x1db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dd: Call 0x13e6

0x1de: Pop(2)
0x1df: Push((int) 13340)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x1e2: PushEmpty(bool)
0x1e3: Stack[-1] = (bool) 0
0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call 0x14a6

0x1e7: Pop(1)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Call 0x149c

0x1ec: Pop(1)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Stack[-1] = (bool) 1
0x1ef: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral"
0x1f2: Call 0x14b

0x1f3: Pop(1)
0x1f4: Push((int) 12185)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 12186)
0x1fa: Push((int) 14254)
0x1fb: Push((int) 13341)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Push((int) 13037)
0x1ff: Push((int) 14245)
0x200: Push((int) 14244)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: PushEmpty(bool)
0x205: Stack[-1] = (bool) 0
0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x208: Call 0x14b2

0x209: Pop(1)
0x20a: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20d: Call 0x149c

0x20e: Pop(1)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Stack[-1] = (bool) 1
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral"
0x214: Call 0x14b

0x215: Pop(1)
0x216: Push((int) 13033)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: Push((int) 13034)
0x21c: Push((int) 14260)
0x21d: Push((int) 14241)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: PushEmpty(bool, object)
0x222: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x223: Call 0x14be

0x224: Pop(1)
0x225: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral"
0x228: Call 0x14b

0x229: Pop(1)
0x22a: Push((int) 13074)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 13076)
0x230: Push((int) 14287)
0x231: Push((int) 14286)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Push((int) 13117)
0x235: Push((int) 14336)
0x236: Push((int) 14335)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral"
0x23c: Call 0x14b

0x23d: Pop(1)
0x23e: Push((int) 13031)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: PushEmpty(bool, object)
0x244: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x245: Call 0x1519

0x246: Pop(1)
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: Push((int) 13141)
0x249: Push((int) 14362)
0x24a: Push((int) 14360)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: PushEmpty(bool)
0x24e: Stack[-1] = (bool) 0
0x24f: PushEmpty(bool, object)
0x250: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x251: Call 0x14ee

0x252: Pop(1)
0x253: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x254: PushEmpty(bool, object)
0x255: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x256: Call 0x150d

0x257: Pop(1)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Stack[-1] = (bool) 1
0x25a: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25b: Push((int) 13075)
0x25c: Push((int) 14369)
0x25d: Push((int) 14285)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: PushEmpty(bool, object)
0x263: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x264: Call 0x14d6

0x265: Pop(1)
0x266: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x269: Call 0x14e2

0x26a: Pop(1)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: Stack[-1] = (bool) 1
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: Push((int) 13125)
0x26f: Push((int) 14345)
0x270: Push((int) 14344)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: PushEmpty(bool, object)
0x274: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x275: Call 0x14ca

0x276: Pop(1)
0x277: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x278: Push((int) 13035)
0x279: Push((int) 14243)
0x27a: Push((int) 14242)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: PushEmpty(bool, object)
0x27e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27f: Call 0x149c

0x280: Pop(1)
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: Push((int) 13142)
0x283: Push((int) 14364)
0x284: Push((int) 14361)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: PushEmpty(bool, object)
0x288: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x289: Call 0x1525

0x28a: Pop(1)
0x28b: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28c: Push((int) 13377)
0x28d: Push((int) 14610)
0x28e: Push((int) 14609)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: Push((int) 13032)
0x292: Push((int) -1)
0x293: Push((int) 14239)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Return(); Pop(0)

0x297: Push((int) 14610)
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Neutral"
0x29c: Call 0x14b

0x29d: Pop(1)
0x29e: Push((int) 13378)
0x29f: @@ SetMessage(Stack[-1])
0x2a0: Pop(1)
0x2a1: @@ ClearReplies()
0x2a2: Pop(0)
0x2a3: Push((int) 13379)
0x2a4: Push((int) 14612)
0x2a5: Push((int) 14611)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 14612)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral"
0x2ae: Call 0x14b

0x2af: Pop(1)
0x2b0: Push((int) 13380)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 13381)
0x2b6: Push((int) 14619)
0x2b7: Push((int) 14613)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Push((int) 13382)
0x2bb: Push((int) 14616)
0x2bc: Push((int) 14614)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Push((int) 13383)
0x2c0: Push((int) 14616)
0x2c1: Push((int) 14615)
0x2c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: Push((int) 14616)
0x2c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Neutral"
0x2ca: Call 0x14b

0x2cb: Pop(1)
0x2cc: Push((int) 13384)
0x2cd: @@ SetMessage(Stack[-1])
0x2ce: Pop(1)
0x2cf: @@ ClearReplies()
0x2d0: Pop(0)
0x2d1: Push((int) 13385)
0x2d2: Push((int) 14619)
0x2d3: Push((int) 14618)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 14619)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call 0x14b

0x2dd: Pop(1)
0x2de: Push((int) 13386)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 13387)
0x2e4: Push((int) 14622)
0x2e5: Push((int) 14620)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Return(); Pop(0)

0x2e9: Push((int) 14622)
0x2ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = "Neutral"
0x2ee: Call 0x14b

0x2ef: Pop(1)
0x2f0: Push((int) 13388)
0x2f1: @@ SetMessage(Stack[-1])
0x2f2: Pop(1)
0x2f3: @@ ClearReplies()
0x2f4: Pop(0)
0x2f5: Push((int) 13389)
0x2f6: Push((int) -1)
0x2f7: Push((int) 14623)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Return(); Pop(0)

0x2fb: Push((int) 14364)
0x2fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2fe: PushEmpty(string)
0x2ff: Stack[-1] = "Neutral"
0x300: Call 0x14b

0x301: Pop(1)
0x302: Push((int) 13145)
0x303: @@ SetMessage(Stack[-1])
0x304: Pop(1)
0x305: @@ ClearReplies()
0x306: Pop(0)
0x307: Push((int) 13147)
0x308: Push((int) 14367)
0x309: Push((int) 14366)
0x30a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30b: Pop(3)
0x30c: Push((int) 13146)
0x30d: Push((int) -1)
0x30e: Push((int) 14365)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Return(); Pop(0)

0x312: Push((int) 14367)
0x313: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x315: PushEmpty(string)
0x316: Stack[-1] = "Neutral"
0x317: Call 0x14b

0x318: Pop(1)
0x319: Push((int) 13148)
0x31a: @@ SetMessage(Stack[-1])
0x31b: Pop(1)
0x31c: @@ ClearReplies()
0x31d: Pop(0)
0x31e: Push((int) 13149)
0x31f: Push((int) -1)
0x320: Push((int) 14368)
0x321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(3)
0x323: Return(); Pop(0)

0x324: Push((int) 14243)
0x325: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x327: PushEmpty(string)
0x328: Stack[-1] = "Neutral"
0x329: Call 0x14b

0x32a: Pop(1)
0x32b: Push((int) 13036)
0x32c: @@ SetMessage(Stack[-1])
0x32d: Pop(1)
0x32e: @@ ClearReplies()
0x32f: Pop(0)
0x330: Push((int) 13134)
0x331: Push((int) 14354)
0x332: Push((int) 14353)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Push((int) 13136)
0x336: Push((int) 14358)
0x337: Push((int) 14355)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Return(); Pop(0)

0x33b: Push((int) 14358)
0x33c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x33e: PushEmpty(string)
0x33f: Stack[-1] = "Neutral"
0x340: Call 0x14b

0x341: Pop(1)
0x342: Push((int) 13139)
0x343: @@ SetMessage(Stack[-1])
0x344: Pop(1)
0x345: @@ ClearReplies()
0x346: Pop(0)
0x347: Push((int) 13140)
0x348: Push((int) -1)
0x349: Push((int) 14359)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: Push((int) 14354)
0x34e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call 0x14b

0x353: Pop(1)
0x354: Push((int) 13135)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 13138)
0x35a: Push((int) -1)
0x35b: Push((int) 14357)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Return(); Pop(0)

0x35f: Push((int) 14345)
0x360: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral"
0x364: Call 0x14b

0x365: Pop(1)
0x366: Push((int) 13126)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 13127)
0x36c: Push((int) 14348)
0x36d: Push((int) 14346)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Push((int) 13128)
0x371: Push((int) -1)
0x372: Push((int) 14347)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: Push((int) 14348)
0x377: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "Neutral"
0x37b: Call 0x14b

0x37c: Pop(1)
0x37d: Push((int) 13129)
0x37e: @@ SetMessage(Stack[-1])
0x37f: Pop(1)
0x380: @@ ClearReplies()
0x381: Pop(0)
0x382: Push((int) 13130)
0x383: Push((int) 14350)
0x384: Push((int) 14349)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: Push((int) 14350)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Neutral"
0x38d: Call 0x14b

0x38e: Pop(1)
0x38f: Push((int) 13131)
0x390: @@ SetMessage(Stack[-1])
0x391: Pop(1)
0x392: @@ ClearReplies()
0x393: Pop(0)
0x394: Push((int) 13132)
0x395: Push((int) -1)
0x396: Push((int) 14351)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Push((int) 13133)
0x39a: Push((int) -1)
0x39b: Push((int) 14352)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Return(); Pop(0)

0x39f: Push((int) 14369)
0x3a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = "Neutral"
0x3a4: Call 0x14b

0x3a5: Pop(1)
0x3a6: Push((int) 13150)
0x3a7: @@ SetMessage(Stack[-1])
0x3a8: Pop(1)
0x3a9: @@ ClearReplies()
0x3aa: Pop(0)
0x3ab: Push((int) 13151)
0x3ac: Push((int) 14371)
0x3ad: Push((int) 14370)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Return(); Pop(0)

0x3b1: Push((int) 14371)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Neutral"
0x3b6: Call 0x14b

0x3b7: Pop(1)
0x3b8: Push((int) 13152)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 13153)
0x3be: Push((int) 14373)
0x3bf: Push((int) 14372)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 14373)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3c6: PushEmpty(string)
0x3c7: Stack[-1] = "Neutral"
0x3c8: Call 0x14b

0x3c9: Pop(1)
0x3ca: Push((int) 13154)
0x3cb: @@ SetMessage(Stack[-1])
0x3cc: Pop(1)
0x3cd: @@ ClearReplies()
0x3ce: Pop(0)
0x3cf: Push((int) 13155)
0x3d0: Push((int) 14375)
0x3d1: Push((int) 14374)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 14375)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Neutral"
0x3da: Call 0x14b

0x3db: Pop(1)
0x3dc: Push((int) 13156)
0x3dd: @@ SetMessage(Stack[-1])
0x3de: Pop(1)
0x3df: @@ ClearReplies()
0x3e0: Pop(0)
0x3e1: Push((int) 13157)
0x3e2: Push((int) 14377)
0x3e3: Push((int) 14376)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Return(); Pop(0)

0x3e7: Push((int) 14377)
0x3e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = "Neutral"
0x3ec: Call 0x14b

0x3ed: Pop(1)
0x3ee: Push((int) 13158)
0x3ef: @@ SetMessage(Stack[-1])
0x3f0: Pop(1)
0x3f1: @@ ClearReplies()
0x3f2: Pop(0)
0x3f3: Push((int) 13159)
0x3f4: Push((int) 14379)
0x3f5: Push((int) 14378)
0x3f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f7: Pop(3)
0x3f8: Push((int) 13161)
0x3f9: Push((int) 14381)
0x3fa: Push((int) 14380)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Return(); Pop(0)

0x3fe: Push((int) 14381)
0x3ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x401: PushEmpty(string)
0x402: Stack[-1] = "Neutral"
0x403: Call 0x14b

0x404: Pop(1)
0x405: Push((int) 13162)
0x406: @@ SetMessage(Stack[-1])
0x407: Pop(1)
0x408: @@ ClearReplies()
0x409: Pop(0)
0x40a: Push((int) 13164)
0x40b: Push((int) 14384)
0x40c: Push((int) 14383)
0x40d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(3)
0x40f: Return(); Pop(0)

0x410: Push((int) 14379)
0x411: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral"
0x415: Call 0x14b

0x416: Pop(1)
0x417: Push((int) 13160)
0x418: @@ SetMessage(Stack[-1])
0x419: Pop(1)
0x41a: @@ ClearReplies()
0x41b: Pop(0)
0x41c: Push((int) 13163)
0x41d: Push((int) 14384)
0x41e: Push((int) 14382)
0x41f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(3)
0x421: Return(); Pop(0)

0x422: Push((int) 14384)
0x423: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x425: PushEmpty(string)
0x426: Stack[-1] = "Neutral"
0x427: Call 0x14b

0x428: Pop(1)
0x429: Push((int) 13165)
0x42a: @@ SetMessage(Stack[-1])
0x42b: Pop(1)
0x42c: @@ ClearReplies()
0x42d: Pop(0)
0x42e: Push((int) 13166)
0x42f: Push((int) 14390)
0x430: Push((int) 14386)
0x431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Push((int) 13167)
0x434: Push((int) 14388)
0x435: Push((int) 14387)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: Return(); Pop(0)

0x439: Push((int) 14388)
0x43a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x43c: PushEmpty(string)
0x43d: Stack[-1] = "Neutral"
0x43e: Call 0x14b

0x43f: Pop(1)
0x440: Push((int) 13168)
0x441: @@ SetMessage(Stack[-1])
0x442: Pop(1)
0x443: @@ ClearReplies()
0x444: Pop(0)
0x445: Push((int) 13169)
0x446: Push((int) -1)
0x447: Push((int) 14389)
0x448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(3)
0x44a: Return(); Pop(0)

0x44b: Push((int) 14390)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x44e: PushEmpty(string)
0x44f: Stack[-1] = "Neutral"
0x450: Call 0x14b

0x451: Pop(1)
0x452: Push((int) 13170)
0x453: @@ SetMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ ClearReplies()
0x456: Pop(0)
0x457: Push((int) 13171)
0x458: Push((int) -1)
0x459: Push((int) 14391)
0x45a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Push((int) 13172)
0x45d: Push((int) 14393)
0x45e: Push((int) 14392)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Return(); Pop(0)

0x462: Push((int) 14393)
0x463: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral"
0x467: Call 0x14b

0x468: Pop(1)
0x469: Push((int) 13173)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 13174)
0x46f: Push((int) -1)
0x470: Push((int) 14394)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: Push((int) 14362)
0x475: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x477: PushEmpty(string)
0x478: Stack[-1] = "Neutral"
0x479: Call 0x14b

0x47a: Pop(1)
0x47b: Push((int) 13143)
0x47c: @@ SetMessage(Stack[-1])
0x47d: Pop(1)
0x47e: @@ ClearReplies()
0x47f: Pop(0)
0x480: Push((int) 13144)
0x481: Push((int) -1)
0x482: Push((int) 14363)
0x483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x484: Pop(3)
0x485: Return(); Pop(0)

0x486: Push((int) 14336)
0x487: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x489: PushEmpty(string)
0x48a: Stack[-1] = "Neutral"
0x48b: Call 0x14b

0x48c: Pop(1)
0x48d: Push((int) 13118)
0x48e: @@ SetMessage(Stack[-1])
0x48f: Pop(1)
0x490: @@ ClearReplies()
0x491: Pop(0)
0x492: Push((int) 13119)
0x493: Push((int) 14289)
0x494: Push((int) 14337)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Return(); Pop(0)

0x498: Push((int) 14287)
0x499: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x49b: PushEmpty(string)
0x49c: Stack[-1] = "Neutral"
0x49d: Call 0x14b

0x49e: Pop(1)
0x49f: Push((int) 13077)
0x4a0: @@ SetMessage(Stack[-1])
0x4a1: Pop(1)
0x4a2: @@ ClearReplies()
0x4a3: Pop(0)
0x4a4: Push((int) 13078)
0x4a5: Push((int) 14289)
0x4a6: Push((int) 14288)
0x4a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(3)
0x4a9: Return(); Pop(0)

0x4aa: Push((int) 14289)
0x4ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4ad: PushEmpty(string)
0x4ae: Stack[-1] = "Neutral"
0x4af: Call 0x14b

0x4b0: Pop(1)
0x4b1: Push((int) 13079)
0x4b2: @@ SetMessage(Stack[-1])
0x4b3: Pop(1)
0x4b4: @@ ClearReplies()
0x4b5: Pop(0)
0x4b6: Push((int) 13082)
0x4b7: Push((int) 14296)
0x4b8: Push((int) 14292)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: Push((int) 13080)
0x4bc: Push((int) 14291)
0x4bd: Push((int) 14290)
0x4be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bf: Pop(3)
0x4c0: Return(); Pop(0)

0x4c1: Push((int) 14291)
0x4c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4c4: PushEmpty(string)
0x4c5: Stack[-1] = "Neutral"
0x4c6: Call 0x14b

0x4c7: Pop(1)
0x4c8: Push((int) 13081)
0x4c9: @@ SetMessage(Stack[-1])
0x4ca: Pop(1)
0x4cb: @@ ClearReplies()
0x4cc: Pop(0)
0x4cd: Push((int) 13083)
0x4ce: Push((int) 14294)
0x4cf: Push((int) 14293)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: Return(); Pop(0)

0x4d3: Push((int) 14294)
0x4d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4d6: PushEmpty(string)
0x4d7: Stack[-1] = "Neutral"
0x4d8: Call 0x14b

0x4d9: Pop(1)
0x4da: Push((int) 13084)
0x4db: @@ SetMessage(Stack[-1])
0x4dc: Pop(1)
0x4dd: @@ ClearReplies()
0x4de: Pop(0)
0x4df: Push((int) 13085)
0x4e0: Push((int) 14296)
0x4e1: Push((int) 14295)
0x4e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e3: Pop(3)
0x4e4: Return(); Pop(0)

0x4e5: Push((int) 14296)
0x4e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4e8: PushEmpty(string)
0x4e9: Stack[-1] = "Neutral"
0x4ea: Call 0x14b

0x4eb: Pop(1)
0x4ec: Push((int) 13086)
0x4ed: @@ SetMessage(Stack[-1])
0x4ee: Pop(1)
0x4ef: @@ ClearReplies()
0x4f0: Pop(0)
0x4f1: Push((int) 13111)
0x4f2: Push((int) 14329)
0x4f3: Push((int) 14328)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: Return(); Pop(0)

0x4f7: Push((int) 14329)
0x4f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4fa: PushEmpty(string)
0x4fb: Stack[-1] = "Neutral"
0x4fc: Call 0x14b

0x4fd: Pop(1)
0x4fe: Push((int) 13112)
0x4ff: @@ SetMessage(Stack[-1])
0x500: Pop(1)
0x501: @@ ClearReplies()
0x502: Pop(0)
0x503: Push((int) 13113)
0x504: Push((int) 14332)
0x505: Push((int) 14331)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Return(); Pop(0)

0x509: Push((int) 14332)
0x50a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x50c: PushEmpty(string)
0x50d: Stack[-1] = "Neutral"
0x50e: Call 0x14b

0x50f: Pop(1)
0x510: Push((int) 13114)
0x511: @@ SetMessage(Stack[-1])
0x512: Pop(1)
0x513: @@ ClearReplies()
0x514: Pop(0)
0x515: Push((int) 13115)
0x516: Push((int) 14334)
0x517: Push((int) 14333)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Return(); Pop(0)

0x51b: Push((int) 14334)
0x51c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x51e: PushEmpty(string)
0x51f: Stack[-1] = "Neutral"
0x520: Call 0x14b

0x521: Pop(1)
0x522: Push((int) 13116)
0x523: @@ SetMessage(Stack[-1])
0x524: Pop(1)
0x525: @@ ClearReplies()
0x526: Pop(0)
0x527: Push((int) 13120)
0x528: Push((int) 14340)
0x529: Push((int) 14339)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: Push((int) 14340)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral"
0x532: Call 0x14b

0x533: Pop(1)
0x534: Push((int) 13121)
0x535: @@ SetMessage(Stack[-1])
0x536: Pop(1)
0x537: @@ ClearReplies()
0x538: Pop(0)
0x539: Push((int) 13122)
0x53a: Push((int) 14342)
0x53b: Push((int) 14341)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Return(); Pop(0)

0x53f: Push((int) 14342)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x542: PushEmpty(string)
0x543: Stack[-1] = "Neutral"
0x544: Call 0x14b

0x545: Pop(1)
0x546: Push((int) 13123)
0x547: @@ SetMessage(Stack[-1])
0x548: Pop(1)
0x549: @@ ClearReplies()
0x54a: Pop(0)
0x54b: Push((int) 13124)
0x54c: Push((int) -1)
0x54d: Push((int) 14343)
0x54e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54f: Pop(3)
0x550: Return(); Pop(0)

0x551: Push((int) 14260)
0x552: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x554: PushEmpty(string)
0x555: Stack[-1] = "Neutral"
0x556: Call 0x14b

0x557: Pop(1)
0x558: Push((int) 13052)
0x559: @@ SetMessage(Stack[-1])
0x55a: Pop(1)
0x55b: @@ ClearReplies()
0x55c: Pop(0)
0x55d: Push((int) 13053)
0x55e: Push((int) 14262)
0x55f: Push((int) 14261)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Push((int) 13108)
0x563: Push((int) 14262)
0x564: Push((int) 14323)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: Return(); Pop(0)

0x568: Push((int) 14262)
0x569: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x56b: PushEmpty(string)
0x56c: Stack[-1] = "Neutral"
0x56d: Call 0x14b

0x56e: Pop(1)
0x56f: Push((int) 13054)
0x570: @@ SetMessage(Stack[-1])
0x571: Pop(1)
0x572: @@ ClearReplies()
0x573: Pop(0)
0x574: Push((int) 13055)
0x575: Push((int) 14264)
0x576: Push((int) 14263)
0x577: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x578: Pop(3)
0x579: Push((int) 13110)
0x57a: Push((int) 14264)
0x57b: Push((int) 14326)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Return(); Pop(0)

0x57f: Push((int) 14264)
0x580: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x581: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x582: PushEmpty(string)
0x583: Stack[-1] = "Neutral"
0x584: Call 0x14b

0x585: Pop(1)
0x586: Push((int) 13056)
0x587: @@ SetMessage(Stack[-1])
0x588: Pop(1)
0x589: @@ ClearReplies()
0x58a: Pop(0)
0x58b: Push((int) 13057)
0x58c: Push((int) 14266)
0x58d: Push((int) 14265)
0x58e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58f: Pop(3)
0x590: Return(); Pop(0)

0x591: Push((int) 14266)
0x592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x594: PushEmpty(string)
0x595: Stack[-1] = "Neutral"
0x596: Call 0x14b

0x597: Pop(1)
0x598: Push((int) 13058)
0x599: @@ SetMessage(Stack[-1])
0x59a: Pop(1)
0x59b: @@ ClearReplies()
0x59c: Pop(0)
0x59d: Push((int) 13059)
0x59e: Push((int) 14269)
0x59f: Push((int) 14267)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Push((int) 13060)
0x5a3: Push((int) 14269)
0x5a4: Push((int) 14268)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 14269)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Neutral"
0x5ad: Call 0x14b

0x5ae: Pop(1)
0x5af: Push((int) 13061)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 13321)
0x5b5: Push((int) 14557)
0x5b6: Push((int) 14556)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 14557)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Neutral"
0x5bf: Call 0x14b

0x5c0: Pop(1)
0x5c1: Push((int) 13322)
0x5c2: @@ SetMessage(Stack[-1])
0x5c3: Pop(1)
0x5c4: @@ ClearReplies()
0x5c5: Pop(0)
0x5c6: Push((int) 13323)
0x5c7: Push((int) -1)
0x5c8: Push((int) 14558)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 14245)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Neutral"
0x5d1: Call 0x14b

0x5d2: Pop(1)
0x5d3: Push((int) 13038)
0x5d4: @@ SetMessage(Stack[-1])
0x5d5: Pop(1)
0x5d6: @@ ClearReplies()
0x5d7: Pop(0)
0x5d8: Push((int) 13039)
0x5d9: Push((int) 14247)
0x5da: Push((int) 14246)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Push((int) 13088)
0x5de: Push((int) 14299)
0x5df: Push((int) 14298)
0x5e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e1: Pop(3)
0x5e2: Return(); Pop(0)

0x5e3: Push((int) 14299)
0x5e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = "Neutral"
0x5e8: Call 0x14b

0x5e9: Pop(1)
0x5ea: Push((int) 13089)
0x5eb: @@ SetMessage(Stack[-1])
0x5ec: Pop(1)
0x5ed: @@ ClearReplies()
0x5ee: Pop(0)
0x5ef: Push((int) 13093)
0x5f0: Push((int) 14306)
0x5f1: Push((int) 14303)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Push((int) 13091)
0x5f5: Push((int) 14307)
0x5f6: Push((int) 14301)
0x5f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f8: Pop(3)
0x5f9: Push((int) 13092)
0x5fa: Push((int) 14307)
0x5fb: Push((int) 14302)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Push((int) 13094)
0x5ff: Push((int) 14307)
0x600: Push((int) 14304)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Push((int) 13090)
0x604: Push((int) 14307)
0x605: Push((int) 14300)
0x606: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x607: Pop(3)
0x608: Return(); Pop(0)

0x609: Push((int) 14307)
0x60a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x60c: PushEmpty(string)
0x60d: Stack[-1] = "Neutral"
0x60e: Call 0x14b

0x60f: Pop(1)
0x610: Push((int) 13097)
0x611: @@ SetMessage(Stack[-1])
0x612: Pop(1)
0x613: @@ ClearReplies()
0x614: Pop(0)
0x615: Push((int) 13098)
0x616: Push((int) 14314)
0x617: Push((int) 14308)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: Push((int) 14314)
0x61c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x61e: PushEmpty(string)
0x61f: Stack[-1] = "Neutral"
0x620: Call 0x14b

0x621: Pop(1)
0x622: Push((int) 13100)
0x623: @@ SetMessage(Stack[-1])
0x624: Pop(1)
0x625: @@ ClearReplies()
0x626: Pop(0)
0x627: Push((int) 13101)
0x628: Push((int) 14316)
0x629: Push((int) 14315)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Return(); Pop(0)

0x62d: Push((int) 14316)
0x62e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x630: PushEmpty(string)
0x631: Stack[-1] = "Neutral"
0x632: Call 0x14b

0x633: Pop(1)
0x634: Push((int) 13102)
0x635: @@ SetMessage(Stack[-1])
0x636: Pop(1)
0x637: @@ ClearReplies()
0x638: Pop(0)
0x639: Push((int) 13103)
0x63a: Push((int) 14318)
0x63b: Push((int) 14317)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Return(); Pop(0)

0x63f: Push((int) 14318)
0x640: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Neutral"
0x644: Call 0x14b

0x645: Pop(1)
0x646: Push((int) 13104)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: Push((int) 13105)
0x64c: Push((int) 14320)
0x64d: Push((int) 14319)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Return(); Pop(0)

0x651: Push((int) 14320)
0x652: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x654: PushEmpty(string)
0x655: Stack[-1] = "Neutral"
0x656: Call 0x14b

0x657: Pop(1)
0x658: Push((int) 13106)
0x659: @@ SetMessage(Stack[-1])
0x65a: Pop(1)
0x65b: @@ ClearReplies()
0x65c: Pop(0)
0x65d: Push((int) 13107)
0x65e: Push((int) 14249)
0x65f: Push((int) 14321)
0x660: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x661: Pop(3)
0x662: Return(); Pop(0)

0x663: Push((int) 14306)
0x664: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x666: PushEmpty(string)
0x667: Stack[-1] = "Neutral"
0x668: Call 0x14b

0x669: Pop(1)
0x66a: Push((int) 13096)
0x66b: @@ SetMessage(Stack[-1])
0x66c: Pop(1)
0x66d: @@ ClearReplies()
0x66e: Pop(0)
0x66f: Push((int) 13099)
0x670: Push((int) 14307)
0x671: Push((int) 14312)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: Push((int) 14247)
0x676: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x678: PushEmpty(string)
0x679: Stack[-1] = "Neutral"
0x67a: Call 0x14b

0x67b: Pop(1)
0x67c: Push((int) 13040)
0x67d: @@ SetMessage(Stack[-1])
0x67e: Pop(1)
0x67f: @@ ClearReplies()
0x680: Pop(0)
0x681: Push((int) 13041)
0x682: Push((int) 14249)
0x683: Push((int) 14248)
0x684: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x685: Pop(3)
0x686: Return(); Pop(0)

0x687: Push((int) 14249)
0x688: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x68a: PushEmpty(string)
0x68b: Stack[-1] = "Neutral"
0x68c: Call 0x14b

0x68d: Pop(1)
0x68e: Push((int) 13042)
0x68f: @@ SetMessage(Stack[-1])
0x690: Pop(1)
0x691: @@ ClearReplies()
0x692: Pop(0)
0x693: Push((int) 13043)
0x694: Push((int) 14251)
0x695: Push((int) 14250)
0x696: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x697: Pop(3)
0x698: Return(); Pop(0)

0x699: Push((int) 14251)
0x69a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69b: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x69c: PushEmpty(string)
0x69d: Stack[-1] = "Neutral"
0x69e: Call 0x14b

0x69f: Pop(1)
0x6a0: Push((int) 13044)
0x6a1: @@ SetMessage(Stack[-1])
0x6a2: Pop(1)
0x6a3: @@ ClearReplies()
0x6a4: Pop(0)
0x6a5: Push((int) 13045)
0x6a6: Push((int) 14253)
0x6a7: Push((int) 14252)
0x6a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a9: Pop(3)
0x6aa: Return(); Pop(0)

0x6ab: Push((int) 14253)
0x6ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6ae: PushEmpty(string)
0x6af: Stack[-1] = "Neutral"
0x6b0: Call 0x14b

0x6b1: Pop(1)
0x6b2: Push((int) 13046)
0x6b3: @@ SetMessage(Stack[-1])
0x6b4: Pop(1)
0x6b5: @@ ClearReplies()
0x6b6: Pop(0)
0x6b7: Push((int) 13062)
0x6b8: Push((int) 14273)
0x6b9: Push((int) 14272)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Return(); Pop(0)

0x6bd: Push((int) 14273)
0x6be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "Neutral"
0x6c2: Call 0x14b

0x6c3: Pop(1)
0x6c4: Push((int) 13063)
0x6c5: @@ SetMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ ClearReplies()
0x6c8: Pop(0)
0x6c9: Push((int) 13064)
0x6ca: Push((int) -1)
0x6cb: Push((int) 14274)
0x6cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: Push((int) 13065)
0x6cf: Push((int) 14276)
0x6d0: Push((int) 14275)
0x6d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: Push((int) 13073)
0x6d4: Push((int) -1)
0x6d5: Push((int) 14283)
0x6d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(3)
0x6d8: Return(); Pop(0)

0x6d9: Push((int) 14276)
0x6da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6dc: PushEmpty(string)
0x6dd: Stack[-1] = "Neutral"
0x6de: Call 0x14b

0x6df: Pop(1)
0x6e0: Push((int) 13066)
0x6e1: @@ SetMessage(Stack[-1])
0x6e2: Pop(1)
0x6e3: @@ ClearReplies()
0x6e4: Pop(0)
0x6e5: Push((int) 13067)
0x6e6: Push((int) 14278)
0x6e7: Push((int) 14277)
0x6e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e9: Pop(3)
0x6ea: Return(); Pop(0)

0x6eb: Push((int) 14278)
0x6ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6ee: PushEmpty(string)
0x6ef: Stack[-1] = "Neutral"
0x6f0: Call 0x14b

0x6f1: Pop(1)
0x6f2: Push((int) 13068)
0x6f3: @@ SetMessage(Stack[-1])
0x6f4: Pop(1)
0x6f5: @@ ClearReplies()
0x6f6: Pop(0)
0x6f7: Push((int) 13069)
0x6f8: Push((int) 14280)
0x6f9: Push((int) 14279)
0x6fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fb: Pop(3)
0x6fc: Return(); Pop(0)

0x6fd: Push((int) 14280)
0x6fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x700: PushEmpty(string)
0x701: Stack[-1] = "Neutral"
0x702: Call 0x14b

0x703: Pop(1)
0x704: Push((int) 13070)
0x705: @@ SetMessage(Stack[-1])
0x706: Pop(1)
0x707: @@ ClearReplies()
0x708: Pop(0)
0x709: Push((int) 13071)
0x70a: Push((int) -1)
0x70b: Push((int) 14281)
0x70c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70d: Pop(3)
0x70e: Push((int) 13072)
0x70f: Push((int) -1)
0x710: Push((int) 14282)
0x711: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x712: Pop(3)
0x713: Return(); Pop(0)

0x714: Push((int) 14254)
0x715: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x717: PushEmpty(string)
0x718: Stack[-1] = "Neutral"
0x719: Call 0x14b

0x71a: Pop(1)
0x71b: Push((int) 13047)
0x71c: @@ SetMessage(Stack[-1])
0x71d: Pop(1)
0x71e: @@ ClearReplies()
0x71f: Pop(0)
0x720: Push((int) 13048)
0x721: Push((int) 14256)
0x722: Push((int) 14255)
0x723: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x724: Pop(3)
0x725: Push((int) 13051)
0x726: Push((int) 14245)
0x727: Push((int) 14258)
0x728: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x729: Pop(3)
0x72a: Return(); Pop(0)

0x72b: Push((int) 14256)
0x72c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72d: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x72e: PushEmpty(string)
0x72f: Stack[-1] = "Neutral"
0x730: Call 0x14b

0x731: Pop(1)
0x732: Push((int) 13049)
0x733: @@ SetMessage(Stack[-1])
0x734: Pop(1)
0x735: @@ ClearReplies()
0x736: Pop(0)
0x737: Push((int) 13050)
0x738: Push((int) 14245)
0x739: Push((int) 14257)
0x73a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(3)
0x73c: Return(); Pop(0)

0x73d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x73e: PushEmpty(bool)
0x73f: Call 0x1330

0x740: Pop(0)
0x741: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x742: @ lshStopAnimation()
0x743: Pop(0)
0x744: GOTO 0x747

0x745: @ StopAnimation()
0x746: Pop(0)
0x747: Return(); Pop(0)

0x748: GOTO 0x15c

0x749: Return(); Pop(0)

0x74a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x74b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x74c: PushEmpty(bool, object)
0x74d: Stack[-1] = Stack[-11]
0x74e: Call 0x1298

0x74f: Pop(1)
0x750: Pop(1); Push((bool) Stack[-1] == 0)
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-10] = (int) -2
0x753: Return(); Pop(8)

0x754: @ CreateDialog(Stack[-4])
0x755: Pop(0)
0x756: PushEmpty(int)
0x757: Call 0x132c

0x758: Pop(0)
0x759: @@ SetNPCName(Stack[-1])
0x75a: Pop(1)
0x75b: PushEmpty(string)
0x75c: Call 0x132e

0x75d: Pop(0)
0x75e: @@ SetPhoto(Stack[-1])
0x75f: Pop(1)
0x760: PushEmpty(int)
0x761: Call 0x162f

0x762: Pop(0)
0x763: @@ SetPlayerName(Stack[-1])
0x764: Pop(1)
0x765: Stack[-2] = (int) -1
0x766: @ IsOverrideActive(Stack[-3])
0x767: Pop(0)
0x768: Push(Stack[-3])
0x769: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76a: Stack[-10] = (int) -2
0x76b: Return(); Pop(8)

0x76c: @ DoDialog(Stack[-4])
0x76d: Pop(0)
0x76e: PushEmpty(object, object)
0x76f: Stack[-2] = Stack[-11]
0x770: Stack[-1] = Stack[-6]
0x771: Push(-2, 4); TaskCall(5)
0x772: Call 0x789

0x773: Pop(-2, 4); TaskReturn
0x774: Pop(2)
0x775: @@ IsDialogEnd(Stack[-1])
0x776: Pop(0)
0x777: Pop(0); Push((bool) Stack[-1] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x779: @ sync()
0x77a: Pop(0)
0x77b: @@ IsDialogEnd(Stack[-1])
0x77c: Pop(0)
0x77d: GOTO 0x777

0x77e: PushEmpty(object)
0x77f: Stack[-1] = Stack[-10]
0x780: Call 0x12d0

0x781: Pop(1)
0x782: @ StopDialog(Stack[-4])
0x783: Pop(0)
0x784: @@ GetReturnValue(Stack[-2])
0x785: Pop(0)
0x786: Stack[-10] = Stack[-2]
0x787: Return(); Pop(8)

0x788: Stack[-4] = 0
0x789: PushEmpty()
0x78a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x78b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x78c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x78d: Push((int) 1)
0x78e: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x78f: PushEmpty(bool, object)
0x790: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x791: Call 0x1531

0x792: Pop(1)
0x793: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x794: PushEmpty(string)
0x795: Stack[-1] = "Neutral"
0x796: Call 0x808

0x797: Pop(1)
0x798: Push((int) 13413)
0x799: @@ SetMessage(Stack[-1])
0x79a: Pop(1)
0x79b: @@ ClearReplies()
0x79c: Pop(0)
0x79d: Push((int) 13415)
0x79e: Push((int) 14650)
0x79f: Push((int) 14649)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Push((int) 13417)
0x7a3: Push((int) 14949)
0x7a4: Push((int) 14652)
0x7a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(3)
0x7a7: Push((int) 13414)
0x7a8: Push((int) 14650)
0x7a9: Push((int) 14648)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: GOTO 0x7ea

0x7ad: PushEmpty(string)
0x7ae: Stack[-1] = "Neutral"
0x7af: Call 0x808

0x7b0: Pop(1)
0x7b1: Push((int) 13409)
0x7b2: @@ SetMessage(Stack[-1])
0x7b3: Pop(1)
0x7b4: @@ ClearReplies()
0x7b5: Pop(0)
0x7b6: PushEmpty(bool, object)
0x7b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b8: Call 0x153d

0x7b9: Pop(1)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bb: Push((int) 13411)
0x7bc: Push((int) 13400)
0x7bd: Push((int) 14645)
0x7be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: PushEmpty(bool)
0x7c1: Stack[-1] = (bool) 0
0x7c2: PushEmpty(bool, object)
0x7c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c4: Call 0x1549

0x7c5: Pop(1)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7c7: PushEmpty(bool, object)
0x7c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c9: Call 0x1555

0x7ca: Pop(1)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cc: Stack[-1] = (bool) 1
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7ce: Push((int) 13412)
0x7cf: Push((int) 13452)
0x7d0: Push((int) 14646)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Push((int) 13410)
0x7d4: Push((int) -1)
0x7d5: Push((int) 14644)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: GOTO 0x7ea

0x7d9: PushEmpty(string)
0x7da: Stack[-1] = "Neutral"
0x7db: Call 0x808

0x7dc: Pop(1)
0x7dd: Push((int) 15089)
0x7de: @@ SetMessage(Stack[-1])
0x7df: Pop(1)
0x7e0: @@ ClearReplies()
0x7e1: Pop(0)
0x7e2: Push((int) 15090)
0x7e3: Push((int) 16357)
0x7e4: Push((int) 16356)
0x7e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e6: Pop(3)
0x7e7: GOTO 0x7ea

0x7e8: Return(); Pop(0)

0x7e9: GOTO 0x78d

0x7ea: PushEmpty(bool)
0x7eb: Call 0x1330

0x7ec: Pop(0)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7ee: @ lshWaitForAnimEnd()
0x7ef: Pop(0)
0x7f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: GOTO 0x7f8

0x7f3: PushEmpty(string)
0x7f4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f5: Call 0x12d4

0x7f6: Pop(1)
0x7f7: GOTO 0x7ee

0x7f8: GOTO 0x807

0x7f9: Push("all")
0x7fa: Push("idle")
0x7fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x7fc: Pop(2)
0x7fd: @ WaitForAnimEnd()
0x7fe: Pop(0)
0x7ff: Push( Stack[3 + Tasks[-1].StackPointer] )
0x800: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x801: GOTO 0x807

0x802: Push("all")
0x803: Push("idle")
0x804: @ PlayAnimation(Stack[-2], Stack[-1])
0x805: Pop(2)
0x806: GOTO 0x7fd

0x807: Return(); Pop(0)

0x808: PushEmpty()
0x809: PushEmpty(bool)
0x80a: Call 0x1330

0x80b: Pop(0)
0x80c: Pop(1); Push((bool) Stack[-1] == 0)
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: Return(); Pop(0)

0x80f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x810: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x811: Return(); Pop(0)

0x812: PushEmpty(string)
0x813: Stack[-1] = Stack[-2]
0x814: Call 0x12d4

0x815: Pop(1)
0x816: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x817: Return(); Pop(0)

0x818: PushEmpty()
0x819: Push((int) 1)
0x81a: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0x81b: PushEmpty()
0x81c: Call 0x12e6

0x81d: Pop(0)
0x81e: Push((int) 14980)
0x81f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x821: PushEmpty(object, object)
0x822: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x823: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x824: Call 0x13ec

0x825: Pop(2)
0x826: Push((int) 14645)
0x827: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x828: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x829: PushEmpty(object, object)
0x82a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x82b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82c: Call 0x13fd

0x82d: Pop(2)
0x82e: Push((int) 13413)
0x82f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x831: PushEmpty(object, object)
0x832: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x833: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x834: Call 0x1409

0x835: Pop(2)
0x836: Push((int) 14646)
0x837: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x838: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x839: PushEmpty(object, object)
0x83a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83c: Call 0x1403

0x83d: Pop(2)
0x83e: Push((int) 14647)
0x83f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x840: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x841: PushEmpty(bool, object)
0x842: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x843: Call 0x1531

0x844: Pop(1)
0x845: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x846: PushEmpty(string)
0x847: Stack[-1] = "Neutral"
0x848: Call 0x808

0x849: Pop(1)
0x84a: Push((int) 13413)
0x84b: @@ SetMessage(Stack[-1])
0x84c: Pop(1)
0x84d: @@ ClearReplies()
0x84e: Pop(0)
0x84f: Push((int) 13415)
0x850: Push((int) 14650)
0x851: Push((int) 14649)
0x852: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x853: Pop(3)
0x854: Push((int) 13417)
0x855: Push((int) 14949)
0x856: Push((int) 14652)
0x857: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x858: Pop(3)
0x859: Push((int) 13414)
0x85a: Push((int) 14650)
0x85b: Push((int) 14648)
0x85c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85d: Pop(3)
0x85e: Return(); Pop(0)

0x85f: PushEmpty(string)
0x860: Stack[-1] = "Neutral"
0x861: Call 0x808

0x862: Pop(1)
0x863: Push((int) 13409)
0x864: @@ SetMessage(Stack[-1])
0x865: Pop(1)
0x866: @@ ClearReplies()
0x867: Pop(0)
0x868: PushEmpty(bool, object)
0x869: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86a: Call 0x153d

0x86b: Pop(1)
0x86c: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x86d: Push((int) 13411)
0x86e: Push((int) 13400)
0x86f: Push((int) 14645)
0x870: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x871: Pop(3)
0x872: PushEmpty(bool)
0x873: Stack[-1] = (bool) 0
0x874: PushEmpty(bool, object)
0x875: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x876: Call 0x1549

0x877: Pop(1)
0x878: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x879: PushEmpty(bool, object)
0x87a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87b: Call 0x1555

0x87c: Pop(1)
0x87d: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87e: Stack[-1] = (bool) 1
0x87f: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x880: Push((int) 13412)
0x881: Push((int) 13452)
0x882: Push((int) 14646)
0x883: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x884: Pop(3)
0x885: Push((int) 13410)
0x886: Push((int) -1)
0x887: Push((int) 14644)
0x888: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x889: Pop(3)
0x88a: Return(); Pop(0)

0x88b: PushEmpty(string)
0x88c: Stack[-1] = "Neutral"
0x88d: Call 0x808

0x88e: Pop(1)
0x88f: Push((int) 15089)
0x890: @@ SetMessage(Stack[-1])
0x891: Pop(1)
0x892: @@ ClearReplies()
0x893: Pop(0)
0x894: Push((int) 15090)
0x895: Push((int) 16357)
0x896: Push((int) 16356)
0x897: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(3)
0x899: Return(); Pop(0)

0x89a: Push((int) 16357)
0x89b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89c: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x89d: PushEmpty(string)
0x89e: Stack[-1] = "Neutral"
0x89f: Call 0x808

0x8a0: Pop(1)
0x8a1: Push((int) 15091)
0x8a2: @@ SetMessage(Stack[-1])
0x8a3: Pop(1)
0x8a4: @@ ClearReplies()
0x8a5: Pop(0)
0x8a6: Push((int) 15092)
0x8a7: Push((int) 16359)
0x8a8: Push((int) 16358)
0x8a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8aa: Pop(3)
0x8ab: Return(); Pop(0)

0x8ac: Push((int) 16359)
0x8ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8af: PushEmpty(string)
0x8b0: Stack[-1] = "Neutral"
0x8b1: Call 0x808

0x8b2: Pop(1)
0x8b3: Push((int) 15093)
0x8b4: @@ SetMessage(Stack[-1])
0x8b5: Pop(1)
0x8b6: @@ ClearReplies()
0x8b7: Pop(0)
0x8b8: Push((int) 15094)
0x8b9: Push((int) -1)
0x8ba: Push((int) 16360)
0x8bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: Return(); Pop(0)

0x8be: Push((int) 13452)
0x8bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8c1: PushEmpty(string)
0x8c2: Stack[-1] = "Neutral"
0x8c3: Call 0x808

0x8c4: Pop(1)
0x8c5: Push((int) 12293)
0x8c6: @@ SetMessage(Stack[-1])
0x8c7: Pop(1)
0x8c8: @@ ClearReplies()
0x8c9: Pop(0)
0x8ca: Push((int) 12294)
0x8cb: Push((int) 13454)
0x8cc: Push((int) 13453)
0x8cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ce: Pop(3)
0x8cf: Return(); Pop(0)

0x8d0: Push((int) 13454)
0x8d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8d3: PushEmpty(string)
0x8d4: Stack[-1] = "Neutral"
0x8d5: Call 0x808

0x8d6: Pop(1)
0x8d7: Push((int) 12295)
0x8d8: @@ SetMessage(Stack[-1])
0x8d9: Pop(1)
0x8da: @@ ClearReplies()
0x8db: Pop(0)
0x8dc: Push((int) 12296)
0x8dd: Push((int) 13457)
0x8de: Push((int) 13455)
0x8df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e0: Pop(3)
0x8e1: Push((int) 12297)
0x8e2: Push((int) -1)
0x8e3: Push((int) 13456)
0x8e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e5: Pop(3)
0x8e6: Return(); Pop(0)

0x8e7: Push((int) 13457)
0x8e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8ea: PushEmpty(string)
0x8eb: Stack[-1] = "Neutral"
0x8ec: Call 0x808

0x8ed: Pop(1)
0x8ee: Push((int) 12298)
0x8ef: @@ SetMessage(Stack[-1])
0x8f0: Pop(1)
0x8f1: @@ ClearReplies()
0x8f2: Pop(0)
0x8f3: Push((int) 12299)
0x8f4: Push((int) 13459)
0x8f5: Push((int) 13458)
0x8f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f7: Pop(3)
0x8f8: Return(); Pop(0)

0x8f9: Push((int) 13459)
0x8fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fb: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x8fc: PushEmpty(string)
0x8fd: Stack[-1] = "Neutral"
0x8fe: Call 0x808

0x8ff: Pop(1)
0x900: Push((int) 12300)
0x901: @@ SetMessage(Stack[-1])
0x902: Pop(1)
0x903: @@ ClearReplies()
0x904: Pop(0)
0x905: Push((int) 12301)
0x906: Push((int) 13461)
0x907: Push((int) 13460)
0x908: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x909: Pop(3)
0x90a: Return(); Pop(0)

0x90b: Push((int) 13461)
0x90c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90d: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x90e: PushEmpty(string)
0x90f: Stack[-1] = "Neutral"
0x910: Call 0x808

0x911: Pop(1)
0x912: Push((int) 12302)
0x913: @@ SetMessage(Stack[-1])
0x914: Pop(1)
0x915: @@ ClearReplies()
0x916: Pop(0)
0x917: Push((int) 12303)
0x918: Push((int) 13463)
0x919: Push((int) 13462)
0x91a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91b: Pop(3)
0x91c: Return(); Pop(0)

0x91d: Push((int) 13463)
0x91e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x920: PushEmpty(string)
0x921: Stack[-1] = "Neutral"
0x922: Call 0x808

0x923: Pop(1)
0x924: Push((int) 12304)
0x925: @@ SetMessage(Stack[-1])
0x926: Pop(1)
0x927: @@ ClearReplies()
0x928: Pop(0)
0x929: Push((int) 12305)
0x92a: Push((int) 13465)
0x92b: Push((int) 13464)
0x92c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92d: Pop(3)
0x92e: Return(); Pop(0)

0x92f: Push((int) 13465)
0x930: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x931: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x932: PushEmpty(string)
0x933: Stack[-1] = "Neutral"
0x934: Call 0x808

0x935: Pop(1)
0x936: Push((int) 12306)
0x937: @@ SetMessage(Stack[-1])
0x938: Pop(1)
0x939: @@ ClearReplies()
0x93a: Pop(0)
0x93b: Push((int) 12307)
0x93c: Push((int) -1)
0x93d: Push((int) 13466)
0x93e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93f: Pop(3)
0x940: Push((int) 12308)
0x941: Push((int) -1)
0x942: Push((int) 13467)
0x943: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x944: Pop(3)
0x945: Return(); Pop(0)

0x946: Push((int) 13400)
0x947: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x948: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x949: PushEmpty(string)
0x94a: Stack[-1] = "Neutral"
0x94b: Call 0x808

0x94c: Pop(1)
0x94d: Push((int) 12244)
0x94e: @@ SetMessage(Stack[-1])
0x94f: Pop(1)
0x950: @@ ClearReplies()
0x951: Pop(0)
0x952: Push((int) 12245)
0x953: Push((int) 13402)
0x954: Push((int) 13401)
0x955: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x956: Pop(3)
0x957: Return(); Pop(0)

0x958: Push((int) 13402)
0x959: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95a: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x95b: PushEmpty(string)
0x95c: Stack[-1] = "Neutral"
0x95d: Call 0x808

0x95e: Pop(1)
0x95f: Push((int) 12246)
0x960: @@ SetMessage(Stack[-1])
0x961: Pop(1)
0x962: @@ ClearReplies()
0x963: Pop(0)
0x964: Push((int) 12248)
0x965: Push((int) 13405)
0x966: Push((int) 13404)
0x967: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x968: Pop(3)
0x969: Push((int) 12247)
0x96a: Push((int) 13409)
0x96b: Push((int) 13403)
0x96c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96d: Pop(3)
0x96e: Return(); Pop(0)

0x96f: Push((int) 13405)
0x970: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x971: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x972: PushEmpty(string)
0x973: Stack[-1] = "Neutral"
0x974: Call 0x808

0x975: Pop(1)
0x976: Push((int) 12249)
0x977: @@ SetMessage(Stack[-1])
0x978: Pop(1)
0x979: @@ ClearReplies()
0x97a: Pop(0)
0x97b: Push((int) 12250)
0x97c: Push((int) 13407)
0x97d: Push((int) 13406)
0x97e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97f: Pop(3)
0x980: Return(); Pop(0)

0x981: Push((int) 13407)
0x982: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x983: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x984: PushEmpty(string)
0x985: Stack[-1] = "Neutral"
0x986: Call 0x808

0x987: Pop(1)
0x988: Push((int) 12251)
0x989: @@ SetMessage(Stack[-1])
0x98a: Pop(1)
0x98b: @@ ClearReplies()
0x98c: Pop(0)
0x98d: Push((int) 12252)
0x98e: Push((int) 13409)
0x98f: Push((int) 13408)
0x990: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x991: Pop(3)
0x992: Return(); Pop(0)

0x993: Push((int) 13409)
0x994: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x995: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x996: PushEmpty(string)
0x997: Stack[-1] = "Neutral"
0x998: Call 0x808

0x999: Pop(1)
0x99a: Push((int) 12253)
0x99b: @@ SetMessage(Stack[-1])
0x99c: Pop(1)
0x99d: @@ ClearReplies()
0x99e: Pop(0)
0x99f: Push((int) 12254)
0x9a0: Push((int) 13411)
0x9a1: Push((int) 13410)
0x9a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a3: Pop(3)
0x9a4: Return(); Pop(0)

0x9a5: Push((int) 13411)
0x9a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9a8: PushEmpty(string)
0x9a9: Stack[-1] = "Neutral"
0x9aa: Call 0x808

0x9ab: Pop(1)
0x9ac: Push((int) 12255)
0x9ad: @@ SetMessage(Stack[-1])
0x9ae: Pop(1)
0x9af: @@ ClearReplies()
0x9b0: Pop(0)
0x9b1: Push((int) 12256)
0x9b2: Push((int) -1)
0x9b3: Push((int) 13413)
0x9b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b5: Pop(3)
0x9b6: Return(); Pop(0)

0x9b7: Push((int) 14949)
0x9b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9ba: PushEmpty(string)
0x9bb: Stack[-1] = "Neutral"
0x9bc: Call 0x808

0x9bd: Pop(1)
0x9be: Push((int) 13688)
0x9bf: @@ SetMessage(Stack[-1])
0x9c0: Pop(1)
0x9c1: @@ ClearReplies()
0x9c2: Pop(0)
0x9c3: Push((int) 13689)
0x9c4: Push((int) 14952)
0x9c5: Push((int) 14951)
0x9c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c7: Pop(3)
0x9c8: Return(); Pop(0)

0x9c9: Push((int) 14952)
0x9ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9cc: PushEmpty(string)
0x9cd: Stack[-1] = "Neutral"
0x9ce: Call 0x808

0x9cf: Pop(1)
0x9d0: Push((int) 13690)
0x9d1: @@ SetMessage(Stack[-1])
0x9d2: Pop(1)
0x9d3: @@ ClearReplies()
0x9d4: Pop(0)
0x9d5: Push((int) 13691)
0x9d6: Push((int) 14650)
0x9d7: Push((int) 14953)
0x9d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d9: Pop(3)
0x9da: Push((int) 13692)
0x9db: Push((int) 14650)
0x9dc: Push((int) 14954)
0x9dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9de: Pop(3)
0x9df: Push((int) 13693)
0x9e0: Push((int) 14650)
0x9e1: Push((int) 14955)
0x9e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e3: Pop(3)
0x9e4: Return(); Pop(0)

0x9e5: Push((int) 14650)
0x9e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9e8: PushEmpty(string)
0x9e9: Stack[-1] = "Neutral"
0x9ea: Call 0x808

0x9eb: Pop(1)
0x9ec: Push((int) 13416)
0x9ed: @@ SetMessage(Stack[-1])
0x9ee: Pop(1)
0x9ef: @@ ClearReplies()
0x9f0: Pop(0)
0x9f1: Push((int) 13421)
0x9f2: Push((int) 14959)
0x9f3: Push((int) 14657)
0x9f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f5: Pop(3)
0x9f6: Return(); Pop(0)

0x9f7: Push((int) 14959)
0x9f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0x9fa: PushEmpty(string)
0x9fb: Stack[-1] = "Neutral"
0x9fc: Call 0x808

0x9fd: Pop(1)
0x9fe: Push((int) 13694)
0x9ff: @@ SetMessage(Stack[-1])
0xa00: Pop(1)
0xa01: @@ ClearReplies()
0xa02: Pop(0)
0xa03: Push((int) 13695)
0xa04: Push((int) 14963)
0xa05: Push((int) 14960)
0xa06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa07: Pop(3)
0xa08: Push((int) 13696)
0xa09: Push((int) 14963)
0xa0a: Push((int) 14961)
0xa0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0c: Pop(3)
0xa0d: Push((int) 13697)
0xa0e: Push((int) 14963)
0xa0f: Push((int) 14962)
0xa10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa11: Pop(3)
0xa12: Return(); Pop(0)

0xa13: Push((int) 14963)
0xa14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa15: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa16: PushEmpty(string)
0xa17: Stack[-1] = "Neutral"
0xa18: Call 0x808

0xa19: Pop(1)
0xa1a: Push((int) 13698)
0xa1b: @@ SetMessage(Stack[-1])
0xa1c: Pop(1)
0xa1d: @@ ClearReplies()
0xa1e: Pop(0)
0xa1f: Push((int) 13699)
0xa20: Push((int) 14970)
0xa21: Push((int) 14964)
0xa22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: Push((int) 13700)
0xa25: Push((int) 14968)
0xa26: Push((int) 14967)
0xa27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa28: Pop(3)
0xa29: Return(); Pop(0)

0xa2a: Push((int) 14968)
0xa2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2c: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa2d: PushEmpty(string)
0xa2e: Stack[-1] = "Neutral"
0xa2f: Call 0x808

0xa30: Pop(1)
0xa31: Push((int) 13701)
0xa32: @@ SetMessage(Stack[-1])
0xa33: Pop(1)
0xa34: @@ ClearReplies()
0xa35: Pop(0)
0xa36: Push((int) 13702)
0xa37: Push((int) 14970)
0xa38: Push((int) 14969)
0xa39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3a: Pop(3)
0xa3b: Return(); Pop(0)

0xa3c: Push((int) 14970)
0xa3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3e: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa3f: PushEmpty(string)
0xa40: Stack[-1] = "Neutral"
0xa41: Call 0x808

0xa42: Pop(1)
0xa43: Push((int) 13703)
0xa44: @@ SetMessage(Stack[-1])
0xa45: Pop(1)
0xa46: @@ ClearReplies()
0xa47: Pop(0)
0xa48: Push((int) 13704)
0xa49: Push((int) 14972)
0xa4a: Push((int) 14971)
0xa4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4c: Pop(3)
0xa4d: Return(); Pop(0)

0xa4e: Push((int) 14972)
0xa4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa51: PushEmpty(string)
0xa52: Stack[-1] = "Neutral"
0xa53: Call 0x808

0xa54: Pop(1)
0xa55: Push((int) 13705)
0xa56: @@ SetMessage(Stack[-1])
0xa57: Pop(1)
0xa58: @@ ClearReplies()
0xa59: Pop(0)
0xa5a: Push((int) 13706)
0xa5b: Push((int) 14975)
0xa5c: Push((int) 14974)
0xa5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5e: Pop(3)
0xa5f: Return(); Pop(0)

0xa60: Push((int) 14975)
0xa61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa63: PushEmpty(string)
0xa64: Stack[-1] = "Neutral"
0xa65: Call 0x808

0xa66: Pop(1)
0xa67: Push((int) 13707)
0xa68: @@ SetMessage(Stack[-1])
0xa69: Pop(1)
0xa6a: @@ ClearReplies()
0xa6b: Pop(0)
0xa6c: Push((int) 13708)
0xa6d: Push((int) 14978)
0xa6e: Push((int) 14976)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Push((int) 13709)
0xa72: Push((int) 14978)
0xa73: Push((int) 14977)
0xa74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa75: Pop(3)
0xa76: Return(); Pop(0)

0xa77: Push((int) 14978)
0xa78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa79: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa7a: PushEmpty(string)
0xa7b: Stack[-1] = "Neutral"
0xa7c: Call 0x808

0xa7d: Pop(1)
0xa7e: Push((int) 13710)
0xa7f: @@ SetMessage(Stack[-1])
0xa80: Pop(1)
0xa81: @@ ClearReplies()
0xa82: Pop(0)
0xa83: Push((int) 13711)
0xa84: Push((int) -1)
0xa85: Push((int) 14980)
0xa86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa87: Pop(3)
0xa88: Return(); Pop(0)

0xa89: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa8a: PushEmpty(bool)
0xa8b: Call 0x1330

0xa8c: Pop(0)
0xa8d: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8e: @ lshStopAnimation()
0xa8f: Pop(0)
0xa90: GOTO 0xa93

0xa91: @ StopAnimation()
0xa92: Pop(0)
0xa93: Return(); Pop(0)

0xa94: GOTO 0x819

0xa95: Return(); Pop(0)

0xa96: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa97: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa98: PushEmpty(bool, object)
0xa99: Stack[-1] = Stack[-11]
0xa9a: Call 0x1298

0xa9b: Pop(1)
0xa9c: Pop(1); Push((bool) Stack[-1] == 0)
0xa9d: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9e: Stack[-10] = (int) -2
0xa9f: Return(); Pop(8)

0xaa0: @ CreateDialog(Stack[-4])
0xaa1: Pop(0)
0xaa2: PushEmpty(int)
0xaa3: Call 0x132c

0xaa4: Pop(0)
0xaa5: @@ SetNPCName(Stack[-1])
0xaa6: Pop(1)
0xaa7: PushEmpty(string)
0xaa8: Call 0x132e

0xaa9: Pop(0)
0xaaa: @@ SetPhoto(Stack[-1])
0xaab: Pop(1)
0xaac: PushEmpty(int)
0xaad: Call 0x162f

0xaae: Pop(0)
0xaaf: @@ SetPlayerName(Stack[-1])
0xab0: Pop(1)
0xab1: Stack[-2] = (int) -1
0xab2: @ IsOverrideActive(Stack[-3])
0xab3: Pop(0)
0xab4: Push(Stack[-3])
0xab5: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab6: Stack[-10] = (int) -2
0xab7: Return(); Pop(8)

0xab8: @ DoDialog(Stack[-4])
0xab9: Pop(0)
0xaba: PushEmpty(object, object)
0xabb: Stack[-2] = Stack[-11]
0xabc: Stack[-1] = Stack[-6]
0xabd: Push(-2, 4); TaskCall(7)
0xabe: Call 0xad5

0xabf: Pop(-2, 4); TaskReturn
0xac0: Pop(2)
0xac1: @@ IsDialogEnd(Stack[-1])
0xac2: Pop(0)
0xac3: Pop(0); Push((bool) Stack[-1] == 0)
0xac4: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac5: @ sync()
0xac6: Pop(0)
0xac7: @@ IsDialogEnd(Stack[-1])
0xac8: Pop(0)
0xac9: GOTO 0xac3

0xaca: PushEmpty(object)
0xacb: Stack[-1] = Stack[-10]
0xacc: Call 0x12d0

0xacd: Pop(1)
0xace: @ StopDialog(Stack[-4])
0xacf: Pop(0)
0xad0: @@ GetReturnValue(Stack[-2])
0xad1: Pop(0)
0xad2: Stack[-10] = Stack[-2]
0xad3: Return(); Pop(8)

0xad4: Stack[-4] = 0
0xad5: PushEmpty()
0xad6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xad7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xad8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xad9: Push((int) 1)
0xada: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xadb: PushEmpty(bool, object)
0xadc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xadd: Call 0x15c1

0xade: Pop(1)
0xadf: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xae0: PushEmpty(object, object)
0xae1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xae2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae3: Call 0x146c

0xae4: Pop(2)
0xae5: PushEmpty(string)
0xae6: Stack[-1] = "Neutral"
0xae7: Call 0xb40

0xae8: Pop(1)
0xae9: Push((int) 12899)
0xaea: @@ SetMessage(Stack[-1])
0xaeb: Pop(1)
0xaec: @@ ClearReplies()
0xaed: Pop(0)
0xaee: Push((int) 12900)
0xaef: Push((int) 14103)
0xaf0: Push((int) 14102)
0xaf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf2: Pop(3)
0xaf3: GOTO 0xb22

0xaf4: PushEmpty(string)
0xaf5: Stack[-1] = "Neutral"
0xaf6: Call 0xb40

0xaf7: Pop(1)
0xaf8: Push((int) 12905)
0xaf9: @@ SetMessage(Stack[-1])
0xafa: Pop(1)
0xafb: @@ ClearReplies()
0xafc: Pop(0)
0xafd: PushEmpty(bool, object)
0xafe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaff: Call 0x15e5

0xb00: Pop(1)
0xb01: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb02: Push((int) 12906)
0xb03: Push((int) 14109)
0xb04: Push((int) 14108)
0xb05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb06: Pop(3)
0xb07: PushEmpty(bool)
0xb08: Stack[-1] = (bool) 0
0xb09: PushEmpty(bool, object)
0xb0a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0b: Call 0x15cd

0xb0c: Pop(1)
0xb0d: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb0e: PushEmpty(bool, object)
0xb0f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb10: Call 0x15d9

0xb11: Pop(1)
0xb12: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb13: Stack[-1] = (bool) 1
0xb14: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb15: Push((int) 12912)
0xb16: Push((int) 14119)
0xb17: Push((int) 14114)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: Push((int) 12911)
0xb1b: Push((int) -1)
0xb1c: Push((int) 14113)
0xb1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1e: Pop(3)
0xb1f: GOTO 0xb22

0xb20: Return(); Pop(0)

0xb21: GOTO 0xad9

0xb22: PushEmpty(bool)
0xb23: Call 0x1330

0xb24: Pop(0)
0xb25: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb26: @ lshWaitForAnimEnd()
0xb27: Pop(0)
0xb28: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: GOTO 0xb30

0xb2b: PushEmpty(string)
0xb2c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb2d: Call 0x12d4

0xb2e: Pop(1)
0xb2f: GOTO 0xb26

0xb30: GOTO 0xb3f

0xb31: Push("all")
0xb32: Push("idle")
0xb33: @ PlayAnimation(Stack[-2], Stack[-1])
0xb34: Pop(2)
0xb35: @ WaitForAnimEnd()
0xb36: Pop(0)
0xb37: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb38: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb39: GOTO 0xb3f

0xb3a: Push("all")
0xb3b: Push("idle")
0xb3c: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3d: Pop(2)
0xb3e: GOTO 0xb35

0xb3f: Return(); Pop(0)

0xb40: PushEmpty()
0xb41: PushEmpty(bool)
0xb42: Call 0x1330

0xb43: Pop(0)
0xb44: Pop(1); Push((bool) Stack[-1] == 0)
0xb45: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb46: Return(); Pop(0)

0xb47: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb48: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb49: Return(); Pop(0)

0xb4a: PushEmpty(string)
0xb4b: Stack[-1] = Stack[-2]
0xb4c: Call 0x12d4

0xb4d: Pop(1)
0xb4e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb4f: Return(); Pop(0)

0xb50: PushEmpty()
0xb51: Push((int) 1)
0xb52: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xb53: PushEmpty()
0xb54: Call 0x12e6

0xb55: Pop(0)
0xb56: Push((int) 14106)
0xb57: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb58: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb59: PushEmpty(object, object)
0xb5a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5c: Call 0x144d

0xb5d: Pop(2)
0xb5e: Push((int) 14118)
0xb5f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb61: PushEmpty(object, object)
0xb62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb64: Call 0x1472

0xb65: Pop(2)
0xb66: Push((int) 14114)
0xb67: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb68: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb69: PushEmpty(object, object)
0xb6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6c: Call 0x1490

0xb6d: Pop(2)
0xb6e: Push((int) 14101)
0xb6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb70: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xb71: PushEmpty(bool, object)
0xb72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb73: Call 0x15c1

0xb74: Pop(1)
0xb75: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb76: PushEmpty(object, object)
0xb77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb79: Call 0x146c

0xb7a: Pop(2)
0xb7b: PushEmpty(string)
0xb7c: Stack[-1] = "Neutral"
0xb7d: Call 0xb40

0xb7e: Pop(1)
0xb7f: Push((int) 12899)
0xb80: @@ SetMessage(Stack[-1])
0xb81: Pop(1)
0xb82: @@ ClearReplies()
0xb83: Pop(0)
0xb84: Push((int) 12900)
0xb85: Push((int) 14103)
0xb86: Push((int) 14102)
0xb87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb88: Pop(3)
0xb89: Return(); Pop(0)

0xb8a: PushEmpty(string)
0xb8b: Stack[-1] = "Neutral"
0xb8c: Call 0xb40

0xb8d: Pop(1)
0xb8e: Push((int) 12905)
0xb8f: @@ SetMessage(Stack[-1])
0xb90: Pop(1)
0xb91: @@ ClearReplies()
0xb92: Pop(0)
0xb93: PushEmpty(bool, object)
0xb94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb95: Call 0x15e5

0xb96: Pop(1)
0xb97: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb98: Push((int) 12906)
0xb99: Push((int) 14109)
0xb9a: Push((int) 14108)
0xb9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9c: Pop(3)
0xb9d: PushEmpty(bool)
0xb9e: Stack[-1] = (bool) 0
0xb9f: PushEmpty(bool, object)
0xba0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba1: Call 0x15cd

0xba2: Pop(1)
0xba3: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba4: PushEmpty(bool, object)
0xba5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba6: Call 0x15d9

0xba7: Pop(1)
0xba8: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba9: Stack[-1] = (bool) 1
0xbaa: IF (Stack[-1] == 0) GOTO 0xbb0; Pop(1)

0xbab: Push((int) 12912)
0xbac: Push((int) 14119)
0xbad: Push((int) 14114)
0xbae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbaf: Pop(3)
0xbb0: Push((int) 12911)
0xbb1: Push((int) -1)
0xbb2: Push((int) 14113)
0xbb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb4: Pop(3)
0xbb5: Return(); Pop(0)

0xbb6: Push((int) 14119)
0xbb7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb8: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbb9: PushEmpty(string)
0xbba: Stack[-1] = "Neutral"
0xbbb: Call 0xb40

0xbbc: Pop(1)
0xbbd: Push((int) 12915)
0xbbe: @@ SetMessage(Stack[-1])
0xbbf: Pop(1)
0xbc0: @@ ClearReplies()
0xbc1: Pop(0)
0xbc2: Push((int) 12916)
0xbc3: Push((int) 14122)
0xbc4: Push((int) 14120)
0xbc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc6: Pop(3)
0xbc7: Push((int) 12917)
0xbc8: Push((int) 14122)
0xbc9: Push((int) 14121)
0xbca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcb: Pop(3)
0xbcc: Return(); Pop(0)

0xbcd: Push((int) 14122)
0xbce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbcf: IF (Stack[-1] == 0) GOTO 0xbdf; Pop(1)

0xbd0: PushEmpty(string)
0xbd1: Stack[-1] = "Neutral"
0xbd2: Call 0xb40

0xbd3: Pop(1)
0xbd4: Push((int) 12918)
0xbd5: @@ SetMessage(Stack[-1])
0xbd6: Pop(1)
0xbd7: @@ ClearReplies()
0xbd8: Pop(0)
0xbd9: Push((int) 12919)
0xbda: Push((int) 14125)
0xbdb: Push((int) 14124)
0xbdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdd: Pop(3)
0xbde: Return(); Pop(0)

0xbdf: Push((int) 14125)
0xbe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe1: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbe2: PushEmpty(string)
0xbe3: Stack[-1] = "Neutral"
0xbe4: Call 0xb40

0xbe5: Pop(1)
0xbe6: Push((int) 12920)
0xbe7: @@ SetMessage(Stack[-1])
0xbe8: Pop(1)
0xbe9: @@ ClearReplies()
0xbea: Pop(0)
0xbeb: Push((int) 12921)
0xbec: Push((int) -1)
0xbed: Push((int) 14126)
0xbee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbef: Pop(3)
0xbf0: Push((int) 12922)
0xbf1: Push((int) 14128)
0xbf2: Push((int) 14127)
0xbf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf4: Pop(3)
0xbf5: Return(); Pop(0)

0xbf6: Push((int) 14128)
0xbf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf8: IF (Stack[-1] == 0) GOTO 0xc08; Pop(1)

0xbf9: PushEmpty(string)
0xbfa: Stack[-1] = "Neutral"
0xbfb: Call 0xb40

0xbfc: Pop(1)
0xbfd: Push((int) 12923)
0xbfe: @@ SetMessage(Stack[-1])
0xbff: Pop(1)
0xc00: @@ ClearReplies()
0xc01: Pop(0)
0xc02: Push((int) 12924)
0xc03: Push((int) -1)
0xc04: Push((int) 14129)
0xc05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc06: Pop(3)
0xc07: Return(); Pop(0)

0xc08: Push((int) 14109)
0xc09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0a: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc0b: PushEmpty(string)
0xc0c: Stack[-1] = "Neutral"
0xc0d: Call 0xb40

0xc0e: Pop(1)
0xc0f: Push((int) 12907)
0xc10: @@ SetMessage(Stack[-1])
0xc11: Pop(1)
0xc12: @@ ClearReplies()
0xc13: Pop(0)
0xc14: Push((int) 12908)
0xc15: Push((int) 14115)
0xc16: Push((int) 14110)
0xc17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc18: Pop(3)
0xc19: Push((int) 12909)
0xc1a: Push((int) 14115)
0xc1b: Push((int) 14111)
0xc1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1d: Pop(3)
0xc1e: Push((int) 12910)
0xc1f: Push((int) 14115)
0xc20: Push((int) 14112)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: Return(); Pop(0)

0xc24: Push((int) 14115)
0xc25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc26: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc27: PushEmpty(string)
0xc28: Stack[-1] = "Neutral"
0xc29: Call 0xb40

0xc2a: Pop(1)
0xc2b: Push((int) 12913)
0xc2c: @@ SetMessage(Stack[-1])
0xc2d: Pop(1)
0xc2e: @@ ClearReplies()
0xc2f: Pop(0)
0xc30: Push((int) 12914)
0xc31: Push((int) -1)
0xc32: Push((int) 14118)
0xc33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc34: Pop(3)
0xc35: Return(); Pop(0)

0xc36: Push((int) 14103)
0xc37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc38: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc39: PushEmpty(string)
0xc3a: Stack[-1] = "Neutral"
0xc3b: Call 0xb40

0xc3c: Pop(1)
0xc3d: Push((int) 12901)
0xc3e: @@ SetMessage(Stack[-1])
0xc3f: Pop(1)
0xc40: @@ ClearReplies()
0xc41: Pop(0)
0xc42: Push((int) 12902)
0xc43: Push((int) 14105)
0xc44: Push((int) 14104)
0xc45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc46: Pop(3)
0xc47: Return(); Pop(0)

0xc48: Push((int) 14105)
0xc49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4a: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc4b: PushEmpty(string)
0xc4c: Stack[-1] = "Neutral"
0xc4d: Call 0xb40

0xc4e: Pop(1)
0xc4f: Push((int) 12903)
0xc50: @@ SetMessage(Stack[-1])
0xc51: Pop(1)
0xc52: @@ ClearReplies()
0xc53: Pop(0)
0xc54: Push((int) 12904)
0xc55: Push((int) -1)
0xc56: Push((int) 14106)
0xc57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc58: Pop(3)
0xc59: Return(); Pop(0)

0xc5a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc5b: PushEmpty(bool)
0xc5c: Call 0x1330

0xc5d: Pop(0)
0xc5e: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc5f: @ lshStopAnimation()
0xc60: Pop(0)
0xc61: GOTO 0xc64

0xc62: @ StopAnimation()
0xc63: Pop(0)
0xc64: Return(); Pop(0)

0xc65: GOTO 0xb51

0xc66: Return(); Pop(0)

0xc67: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc68: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc69: PushEmpty(bool, object)
0xc6a: Stack[-1] = Stack[-11]
0xc6b: Call 0x1298

0xc6c: Pop(1)
0xc6d: Pop(1); Push((bool) Stack[-1] == 0)
0xc6e: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6f: Stack[-10] = (int) -2
0xc70: Return(); Pop(8)

0xc71: @ CreateDialog(Stack[-4])
0xc72: Pop(0)
0xc73: PushEmpty(int)
0xc74: Call 0x132c

0xc75: Pop(0)
0xc76: @@ SetNPCName(Stack[-1])
0xc77: Pop(1)
0xc78: PushEmpty(string)
0xc79: Call 0x132e

0xc7a: Pop(0)
0xc7b: @@ SetPhoto(Stack[-1])
0xc7c: Pop(1)
0xc7d: PushEmpty(int)
0xc7e: Call 0x162f

0xc7f: Pop(0)
0xc80: @@ SetPlayerName(Stack[-1])
0xc81: Pop(1)
0xc82: Stack[-2] = (int) -1
0xc83: @ IsOverrideActive(Stack[-3])
0xc84: Pop(0)
0xc85: Push(Stack[-3])
0xc86: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc87: Stack[-10] = (int) -2
0xc88: Return(); Pop(8)

0xc89: @ DoDialog(Stack[-4])
0xc8a: Pop(0)
0xc8b: PushEmpty(object, object)
0xc8c: Stack[-2] = Stack[-11]
0xc8d: Stack[-1] = Stack[-6]
0xc8e: Push(-2, 4); TaskCall(9)
0xc8f: Call 0xca6

0xc90: Pop(-2, 4); TaskReturn
0xc91: Pop(2)
0xc92: @@ IsDialogEnd(Stack[-1])
0xc93: Pop(0)
0xc94: Pop(0); Push((bool) Stack[-1] == 0)
0xc95: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc96: @ sync()
0xc97: Pop(0)
0xc98: @@ IsDialogEnd(Stack[-1])
0xc99: Pop(0)
0xc9a: GOTO 0xc94

0xc9b: PushEmpty(object)
0xc9c: Stack[-1] = Stack[-10]
0xc9d: Call 0x12d0

0xc9e: Pop(1)
0xc9f: @ StopDialog(Stack[-4])
0xca0: Pop(0)
0xca1: @@ GetReturnValue(Stack[-2])
0xca2: Pop(0)
0xca3: Stack[-10] = Stack[-2]
0xca4: Return(); Pop(8)

0xca5: Stack[-4] = 0
0xca6: PushEmpty()
0xca7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xca8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xca9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcaa: Push((int) 1)
0xcab: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xcac: PushEmpty(bool, object)
0xcad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcae: Call 0x1585

0xcaf: Pop(1)
0xcb0: IF (Stack[-1] == 0) GOTO 0xcca; Pop(1)

0xcb1: PushEmpty(object, object)
0xcb2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb4: Call 0x142f

0xcb5: Pop(2)
0xcb6: PushEmpty(string)
0xcb7: Stack[-1] = "Neutral"
0xcb8: Call 0xd2a

0xcb9: Pop(1)
0xcba: Push((int) 13802)
0xcbb: @@ SetMessage(Stack[-1])
0xcbc: Pop(1)
0xcbd: @@ ClearReplies()
0xcbe: Pop(0)
0xcbf: Push((int) 13803)
0xcc0: Push((int) 15030)
0xcc1: Push((int) 15029)
0xcc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc3: Pop(3)
0xcc4: Push((int) 13815)
0xcc5: Push((int) 15042)
0xcc6: Push((int) 15041)
0xcc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc8: Pop(3)
0xcc9: GOTO 0xd0c

0xcca: PushEmpty(string)
0xccb: Stack[-1] = "Neutral"
0xccc: Call 0xd2a

0xccd: Pop(1)
0xcce: Push((int) 13818)
0xccf: @@ SetMessage(Stack[-1])
0xcd0: Pop(1)
0xcd1: @@ ClearReplies()
0xcd2: Pop(0)
0xcd3: PushEmpty(bool, object)
0xcd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd5: Call 0x1591

0xcd6: Pop(1)
0xcd7: IF (Stack[-1] == 0) GOTO 0xcdd; Pop(1)

0xcd8: Push((int) 13819)
0xcd9: Push((int) 15047)
0xcda: Push((int) 15046)
0xcdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdc: Pop(3)
0xcdd: PushEmpty(bool)
0xcde: Stack[-1] = (bool) 0
0xcdf: PushEmpty(bool, object)
0xce0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce1: Call 0x1561

0xce2: Pop(1)
0xce3: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce4: PushEmpty(bool, object)
0xce5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce6: Call 0x159d

0xce7: Pop(1)
0xce8: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce9: Stack[-1] = (bool) 1
0xcea: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xceb: Push((int) 13842)
0xcec: Push((int) 15070)
0xced: Push((int) 15069)
0xcee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcef: Pop(3)
0xcf0: PushEmpty(bool, object)
0xcf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf2: Call 0x15a9

0xcf3: Pop(1)
0xcf4: IF (Stack[-1] == 0) GOTO 0xcfa; Pop(1)

0xcf5: Push((int) 13852)
0xcf6: Push((int) 15080)
0xcf7: Push((int) 15079)
0xcf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf9: Pop(3)
0xcfa: PushEmpty(bool, object)
0xcfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcfc: Call 0x15b5

0xcfd: Pop(1)
0xcfe: IF (Stack[-1] == 0) GOTO 0xd04; Pop(1)

0xcff: Push((int) 13865)
0xd00: Push((int) 15093)
0xd01: Push((int) 15092)
0xd02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd03: Pop(3)
0xd04: Push((int) 13880)
0xd05: Push((int) -1)
0xd06: Push((int) 15107)
0xd07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd08: Pop(3)
0xd09: GOTO 0xd0c

0xd0a: Return(); Pop(0)

0xd0b: GOTO 0xcaa

0xd0c: PushEmpty(bool)
0xd0d: Call 0x1330

0xd0e: Pop(0)
0xd0f: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd10: @ lshWaitForAnimEnd()
0xd11: Pop(0)
0xd12: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd13: IF (Stack[-1] == 0) GOTO 0xd15; Pop(1)

0xd14: GOTO 0xd1a

0xd15: PushEmpty(string)
0xd16: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd17: Call 0x12d4

0xd18: Pop(1)
0xd19: GOTO 0xd10

0xd1a: GOTO 0xd29

0xd1b: Push("all")
0xd1c: Push("idle")
0xd1d: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1e: Pop(2)
0xd1f: @ WaitForAnimEnd()
0xd20: Pop(0)
0xd21: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd22: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd23: GOTO 0xd29

0xd24: Push("all")
0xd25: Push("idle")
0xd26: @ PlayAnimation(Stack[-2], Stack[-1])
0xd27: Pop(2)
0xd28: GOTO 0xd1f

0xd29: Return(); Pop(0)

0xd2a: PushEmpty()
0xd2b: PushEmpty(bool)
0xd2c: Call 0x1330

0xd2d: Pop(0)
0xd2e: Pop(1); Push((bool) Stack[-1] == 0)
0xd2f: IF (Stack[-1] == 0) GOTO 0xd31; Pop(1)

0xd30: Return(); Pop(0)

0xd31: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd32: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd33: Return(); Pop(0)

0xd34: PushEmpty(string)
0xd35: Stack[-1] = Stack[-2]
0xd36: Call 0x12d4

0xd37: Pop(1)
0xd38: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd39: Return(); Pop(0)

0xd3a: PushEmpty()
0xd3b: Push((int) 1)
0xd3c: IF (Stack[-1] == 0) GOTO 0x101b; Pop(1)

0xd3d: PushEmpty()
0xd3e: Call 0x12e6

0xd3f: Pop(0)
0xd40: Push((int) 15046)
0xd41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xd43: PushEmpty(object, object)
0xd44: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd46: Call 0x1435

0xd47: Pop(2)
0xd48: Push((int) 15069)
0xd49: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4a: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd4b: PushEmpty(object, object)
0xd4c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4e: Call 0x143b

0xd4f: Pop(2)
0xd50: Push((int) 15079)
0xd51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd52: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd53: PushEmpty(object, object)
0xd54: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd55: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd56: Call 0x1441

0xd57: Pop(2)
0xd58: Push((int) 15092)
0xd59: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd60; Pop(1)

0xd5b: PushEmpty(object, object)
0xd5c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5e: Call 0x1447

0xd5f: Pop(2)
0xd60: Push((int) 15028)
0xd61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd62: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xd63: PushEmpty(bool, object)
0xd64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd65: Call 0x1585

0xd66: Pop(1)
0xd67: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd68: PushEmpty(object, object)
0xd69: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6b: Call 0x142f

0xd6c: Pop(2)
0xd6d: PushEmpty(string)
0xd6e: Stack[-1] = "Neutral"
0xd6f: Call 0xd2a

0xd70: Pop(1)
0xd71: Push((int) 13802)
0xd72: @@ SetMessage(Stack[-1])
0xd73: Pop(1)
0xd74: @@ ClearReplies()
0xd75: Pop(0)
0xd76: Push((int) 13803)
0xd77: Push((int) 15030)
0xd78: Push((int) 15029)
0xd79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7a: Pop(3)
0xd7b: Push((int) 13815)
0xd7c: Push((int) 15042)
0xd7d: Push((int) 15041)
0xd7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7f: Pop(3)
0xd80: Return(); Pop(0)

0xd81: PushEmpty(string)
0xd82: Stack[-1] = "Neutral"
0xd83: Call 0xd2a

0xd84: Pop(1)
0xd85: Push((int) 13818)
0xd86: @@ SetMessage(Stack[-1])
0xd87: Pop(1)
0xd88: @@ ClearReplies()
0xd89: Pop(0)
0xd8a: PushEmpty(bool, object)
0xd8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8c: Call 0x1591

0xd8d: Pop(1)
0xd8e: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd8f: Push((int) 13819)
0xd90: Push((int) 15047)
0xd91: Push((int) 15046)
0xd92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd93: Pop(3)
0xd94: PushEmpty(bool)
0xd95: Stack[-1] = (bool) 0
0xd96: PushEmpty(bool, object)
0xd97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd98: Call 0x1561

0xd99: Pop(1)
0xd9a: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xd9b: PushEmpty(bool, object)
0xd9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9d: Call 0x159d

0xd9e: Pop(1)
0xd9f: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xda0: Stack[-1] = (bool) 1
0xda1: IF (Stack[-1] == 0) GOTO 0xda7; Pop(1)

0xda2: Push((int) 13842)
0xda3: Push((int) 15070)
0xda4: Push((int) 15069)
0xda5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda6: Pop(3)
0xda7: PushEmpty(bool, object)
0xda8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda9: Call 0x15a9

0xdaa: Pop(1)
0xdab: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdac: Push((int) 13852)
0xdad: Push((int) 15080)
0xdae: Push((int) 15079)
0xdaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb0: Pop(3)
0xdb1: PushEmpty(bool, object)
0xdb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb3: Call 0x15b5

0xdb4: Pop(1)
0xdb5: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb6: Push((int) 13865)
0xdb7: Push((int) 15093)
0xdb8: Push((int) 15092)
0xdb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdba: Pop(3)
0xdbb: Push((int) 13880)
0xdbc: Push((int) -1)
0xdbd: Push((int) 15107)
0xdbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbf: Pop(3)
0xdc0: Return(); Pop(0)

0xdc1: Push((int) 15093)
0xdc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc3: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdc4: PushEmpty(string)
0xdc5: Stack[-1] = "Neutral"
0xdc6: Call 0xd2a

0xdc7: Pop(1)
0xdc8: Push((int) 13866)
0xdc9: @@ SetMessage(Stack[-1])
0xdca: Pop(1)
0xdcb: @@ ClearReplies()
0xdcc: Pop(0)
0xdcd: Push((int) 13867)
0xdce: Push((int) 15095)
0xdcf: Push((int) 15094)
0xdd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd1: Pop(3)
0xdd2: Return(); Pop(0)

0xdd3: Push((int) 15095)
0xdd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd5: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xdd6: PushEmpty(string)
0xdd7: Stack[-1] = "Neutral"
0xdd8: Call 0xd2a

0xdd9: Pop(1)
0xdda: Push((int) 13868)
0xddb: @@ SetMessage(Stack[-1])
0xddc: Pop(1)
0xddd: @@ ClearReplies()
0xdde: Pop(0)
0xddf: Push((int) 13869)
0xde0: Push((int) 15097)
0xde1: Push((int) 15096)
0xde2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde3: Pop(3)
0xde4: Push((int) 13876)
0xde5: Push((int) 15104)
0xde6: Push((int) 15103)
0xde7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde8: Pop(3)
0xde9: Return(); Pop(0)

0xdea: Push((int) 15104)
0xdeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdec: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xded: PushEmpty(string)
0xdee: Stack[-1] = "Neutral"
0xdef: Call 0xd2a

0xdf0: Pop(1)
0xdf1: Push((int) 13877)
0xdf2: @@ SetMessage(Stack[-1])
0xdf3: Pop(1)
0xdf4: @@ ClearReplies()
0xdf5: Pop(0)
0xdf6: Push((int) 13878)
0xdf7: Push((int) -1)
0xdf8: Push((int) 15105)
0xdf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfa: Pop(3)
0xdfb: Push((int) 13879)
0xdfc: Push((int) -1)
0xdfd: Push((int) 15106)
0xdfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdff: Pop(3)
0xe00: Return(); Pop(0)

0xe01: Push((int) 15097)
0xe02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe03: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe04: PushEmpty(string)
0xe05: Stack[-1] = "Neutral"
0xe06: Call 0xd2a

0xe07: Pop(1)
0xe08: Push((int) 13870)
0xe09: @@ SetMessage(Stack[-1])
0xe0a: Pop(1)
0xe0b: @@ ClearReplies()
0xe0c: Pop(0)
0xe0d: Push((int) 13871)
0xe0e: Push((int) -1)
0xe0f: Push((int) 15098)
0xe10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe11: Pop(3)
0xe12: Push((int) 13872)
0xe13: Push((int) 15100)
0xe14: Push((int) 15099)
0xe15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe16: Pop(3)
0xe17: Return(); Pop(0)

0xe18: Push((int) 15100)
0xe19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1a: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe1b: PushEmpty(string)
0xe1c: Stack[-1] = "Neutral"
0xe1d: Call 0xd2a

0xe1e: Pop(1)
0xe1f: Push((int) 13873)
0xe20: @@ SetMessage(Stack[-1])
0xe21: Pop(1)
0xe22: @@ ClearReplies()
0xe23: Pop(0)
0xe24: Push((int) 13874)
0xe25: Push((int) -1)
0xe26: Push((int) 15101)
0xe27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe28: Pop(3)
0xe29: Push((int) 13875)
0xe2a: Push((int) -1)
0xe2b: Push((int) 15102)
0xe2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2d: Pop(3)
0xe2e: Return(); Pop(0)

0xe2f: Push((int) 15080)
0xe30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe31: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe32: PushEmpty(string)
0xe33: Stack[-1] = "Neutral"
0xe34: Call 0xd2a

0xe35: Pop(1)
0xe36: Push((int) 13853)
0xe37: @@ SetMessage(Stack[-1])
0xe38: Pop(1)
0xe39: @@ ClearReplies()
0xe3a: Pop(0)
0xe3b: Push((int) 13854)
0xe3c: Push((int) 15082)
0xe3d: Push((int) 15081)
0xe3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3f: Pop(3)
0xe40: Return(); Pop(0)

0xe41: Push((int) 15082)
0xe42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe43: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe44: PushEmpty(string)
0xe45: Stack[-1] = "Neutral"
0xe46: Call 0xd2a

0xe47: Pop(1)
0xe48: Push((int) 13855)
0xe49: @@ SetMessage(Stack[-1])
0xe4a: Pop(1)
0xe4b: @@ ClearReplies()
0xe4c: Pop(0)
0xe4d: Push((int) 13856)
0xe4e: Push((int) -1)
0xe4f: Push((int) 15083)
0xe50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe51: Pop(3)
0xe52: Push((int) 13857)
0xe53: Push((int) 15085)
0xe54: Push((int) 15084)
0xe55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe56: Pop(3)
0xe57: Return(); Pop(0)

0xe58: Push((int) 15085)
0xe59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5a: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe5b: PushEmpty(string)
0xe5c: Stack[-1] = "Neutral"
0xe5d: Call 0xd2a

0xe5e: Pop(1)
0xe5f: Push((int) 13858)
0xe60: @@ SetMessage(Stack[-1])
0xe61: Pop(1)
0xe62: @@ ClearReplies()
0xe63: Pop(0)
0xe64: Push((int) 13859)
0xe65: Push((int) -1)
0xe66: Push((int) 15086)
0xe67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe68: Pop(3)
0xe69: Push((int) 13860)
0xe6a: Push((int) 15088)
0xe6b: Push((int) 15087)
0xe6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6d: Pop(3)
0xe6e: Return(); Pop(0)

0xe6f: Push((int) 15088)
0xe70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe72: PushEmpty(string)
0xe73: Stack[-1] = "Neutral"
0xe74: Call 0xd2a

0xe75: Pop(1)
0xe76: Push((int) 13861)
0xe77: @@ SetMessage(Stack[-1])
0xe78: Pop(1)
0xe79: @@ ClearReplies()
0xe7a: Pop(0)
0xe7b: Push((int) 13862)
0xe7c: Push((int) 15090)
0xe7d: Push((int) 15089)
0xe7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7f: Pop(3)
0xe80: Push((int) 13864)
0xe81: Push((int) -1)
0xe82: Push((int) 15091)
0xe83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe84: Pop(3)
0xe85: Return(); Pop(0)

0xe86: Push((int) 15090)
0xe87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe88: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe89: PushEmpty(string)
0xe8a: Stack[-1] = "Neutral"
0xe8b: Call 0xd2a

0xe8c: Pop(1)
0xe8d: Push((int) 13863)
0xe8e: @@ SetMessage(Stack[-1])
0xe8f: Pop(1)
0xe90: @@ ClearReplies()
0xe91: Pop(0)
0xe92: Return(); Pop(0)

0xe93: Push((int) 15070)
0xe94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe95: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xe96: PushEmpty(string)
0xe97: Stack[-1] = "Neutral"
0xe98: Call 0xd2a

0xe99: Pop(1)
0xe9a: Push((int) 13843)
0xe9b: @@ SetMessage(Stack[-1])
0xe9c: Pop(1)
0xe9d: @@ ClearReplies()
0xe9e: Pop(0)
0xe9f: Push((int) 13844)
0xea0: Push((int) 15072)
0xea1: Push((int) 15071)
0xea2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea3: Pop(3)
0xea4: Return(); Pop(0)

0xea5: Push((int) 15072)
0xea6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea7: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xea8: PushEmpty(string)
0xea9: Stack[-1] = "Neutral"
0xeaa: Call 0xd2a

0xeab: Pop(1)
0xeac: Push((int) 13845)
0xead: @@ SetMessage(Stack[-1])
0xeae: Pop(1)
0xeaf: @@ ClearReplies()
0xeb0: Pop(0)
0xeb1: Push((int) 13846)
0xeb2: Push((int) 15074)
0xeb3: Push((int) 15073)
0xeb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb5: Pop(3)
0xeb6: Push((int) 13849)
0xeb7: Push((int) 15077)
0xeb8: Push((int) 15076)
0xeb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeba: Pop(3)
0xebb: Return(); Pop(0)

0xebc: Push((int) 15077)
0xebd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xece; Pop(1)

0xebf: PushEmpty(string)
0xec0: Stack[-1] = "Neutral"
0xec1: Call 0xd2a

0xec2: Pop(1)
0xec3: Push((int) 13850)
0xec4: @@ SetMessage(Stack[-1])
0xec5: Pop(1)
0xec6: @@ ClearReplies()
0xec7: Pop(0)
0xec8: Push((int) 13851)
0xec9: Push((int) -1)
0xeca: Push((int) 15078)
0xecb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xecc: Pop(3)
0xecd: Return(); Pop(0)

0xece: Push((int) 15074)
0xecf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed0: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xed1: PushEmpty(string)
0xed2: Stack[-1] = "Neutral"
0xed3: Call 0xd2a

0xed4: Pop(1)
0xed5: Push((int) 13847)
0xed6: @@ SetMessage(Stack[-1])
0xed7: Pop(1)
0xed8: @@ ClearReplies()
0xed9: Pop(0)
0xeda: Push((int) 13848)
0xedb: Push((int) -1)
0xedc: Push((int) 15075)
0xedd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xede: Pop(3)
0xedf: Return(); Pop(0)

0xee0: Push((int) 15047)
0xee1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee2: IF (Stack[-1] == 0) GOTO 0xef7; Pop(1)

0xee3: PushEmpty(string)
0xee4: Stack[-1] = "Neutral"
0xee5: Call 0xd2a

0xee6: Pop(1)
0xee7: Push((int) 13820)
0xee8: @@ SetMessage(Stack[-1])
0xee9: Pop(1)
0xeea: @@ ClearReplies()
0xeeb: Pop(0)
0xeec: Push((int) 13821)
0xeed: Push((int) 15049)
0xeee: Push((int) 15048)
0xeef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef0: Pop(3)
0xef1: Push((int) 13839)
0xef2: Push((int) 15067)
0xef3: Push((int) 15066)
0xef4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef5: Pop(3)
0xef6: Return(); Pop(0)

0xef7: Push((int) 15067)
0xef8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef9: IF (Stack[-1] == 0) GOTO 0xf09; Pop(1)

0xefa: PushEmpty(string)
0xefb: Stack[-1] = "Neutral"
0xefc: Call 0xd2a

0xefd: Pop(1)
0xefe: Push((int) 13840)
0xeff: @@ SetMessage(Stack[-1])
0xf00: Pop(1)
0xf01: @@ ClearReplies()
0xf02: Pop(0)
0xf03: Push((int) 13841)
0xf04: Push((int) -1)
0xf05: Push((int) 15068)
0xf06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf07: Pop(3)
0xf08: Return(); Pop(0)

0xf09: Push((int) 15049)
0xf0a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0b: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf0c: PushEmpty(string)
0xf0d: Stack[-1] = "Neutral"
0xf0e: Call 0xd2a

0xf0f: Pop(1)
0xf10: Push((int) 13822)
0xf11: @@ SetMessage(Stack[-1])
0xf12: Pop(1)
0xf13: @@ ClearReplies()
0xf14: Pop(0)
0xf15: Push((int) 13823)
0xf16: Push((int) 15051)
0xf17: Push((int) 15050)
0xf18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf19: Pop(3)
0xf1a: Return(); Pop(0)

0xf1b: Push((int) 15051)
0xf1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1d: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf1e: PushEmpty(string)
0xf1f: Stack[-1] = "Neutral"
0xf20: Call 0xd2a

0xf21: Pop(1)
0xf22: Push((int) 13824)
0xf23: @@ SetMessage(Stack[-1])
0xf24: Pop(1)
0xf25: @@ ClearReplies()
0xf26: Pop(0)
0xf27: Push((int) 13825)
0xf28: Push((int) 15053)
0xf29: Push((int) 15052)
0xf2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2b: Pop(3)
0xf2c: Push((int) 13827)
0xf2d: Push((int) 15055)
0xf2e: Push((int) 15054)
0xf2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf30: Pop(3)
0xf31: Return(); Pop(0)

0xf32: Push((int) 15055)
0xf33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf34: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf35: PushEmpty(string)
0xf36: Stack[-1] = "Neutral"
0xf37: Call 0xd2a

0xf38: Pop(1)
0xf39: Push((int) 13828)
0xf3a: @@ SetMessage(Stack[-1])
0xf3b: Pop(1)
0xf3c: @@ ClearReplies()
0xf3d: Pop(0)
0xf3e: Push((int) 13829)
0xf3f: Push((int) 15057)
0xf40: Push((int) 15056)
0xf41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf42: Pop(3)
0xf43: Return(); Pop(0)

0xf44: Push((int) 15057)
0xf45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf46: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf47: PushEmpty(string)
0xf48: Stack[-1] = "Neutral"
0xf49: Call 0xd2a

0xf4a: Pop(1)
0xf4b: Push((int) 13830)
0xf4c: @@ SetMessage(Stack[-1])
0xf4d: Pop(1)
0xf4e: @@ ClearReplies()
0xf4f: Pop(0)
0xf50: Push((int) 13831)
0xf51: Push((int) 15059)
0xf52: Push((int) 15058)
0xf53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf54: Pop(3)
0xf55: Push((int) 13838)
0xf56: Push((int) -1)
0xf57: Push((int) 15065)
0xf58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf59: Pop(3)
0xf5a: Return(); Pop(0)

0xf5b: Push((int) 15059)
0xf5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf5e: PushEmpty(string)
0xf5f: Stack[-1] = "Neutral"
0xf60: Call 0xd2a

0xf61: Pop(1)
0xf62: Push((int) 13832)
0xf63: @@ SetMessage(Stack[-1])
0xf64: Pop(1)
0xf65: @@ ClearReplies()
0xf66: Pop(0)
0xf67: Push((int) 13833)
0xf68: Push((int) 15061)
0xf69: Push((int) 15060)
0xf6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6b: Pop(3)
0xf6c: Return(); Pop(0)

0xf6d: Push((int) 15061)
0xf6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6f: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf70: PushEmpty(string)
0xf71: Stack[-1] = "Neutral"
0xf72: Call 0xd2a

0xf73: Pop(1)
0xf74: Push((int) 13834)
0xf75: @@ SetMessage(Stack[-1])
0xf76: Pop(1)
0xf77: @@ ClearReplies()
0xf78: Pop(0)
0xf79: Push((int) 13835)
0xf7a: Push((int) 15063)
0xf7b: Push((int) 15062)
0xf7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7d: Pop(3)
0xf7e: Return(); Pop(0)

0xf7f: Push((int) 15063)
0xf80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf81: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf82: PushEmpty(string)
0xf83: Stack[-1] = "Neutral"
0xf84: Call 0xd2a

0xf85: Pop(1)
0xf86: Push((int) 13836)
0xf87: @@ SetMessage(Stack[-1])
0xf88: Pop(1)
0xf89: @@ ClearReplies()
0xf8a: Pop(0)
0xf8b: Push((int) 13837)
0xf8c: Push((int) -1)
0xf8d: Push((int) 15064)
0xf8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8f: Pop(3)
0xf90: Return(); Pop(0)

0xf91: Push((int) 15053)
0xf92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf93: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf94: PushEmpty(string)
0xf95: Stack[-1] = "Neutral"
0xf96: Call 0xd2a

0xf97: Pop(1)
0xf98: Push((int) 13826)
0xf99: @@ SetMessage(Stack[-1])
0xf9a: Pop(1)
0xf9b: @@ ClearReplies()
0xf9c: Pop(0)
0xf9d: Return(); Pop(0)

0xf9e: Push((int) 15042)
0xf9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa0: IF (Stack[-1] == 0) GOTO 0xfb0; Pop(1)

0xfa1: PushEmpty(string)
0xfa2: Stack[-1] = "Neutral"
0xfa3: Call 0xd2a

0xfa4: Pop(1)
0xfa5: Push((int) 13816)
0xfa6: @@ SetMessage(Stack[-1])
0xfa7: Pop(1)
0xfa8: @@ ClearReplies()
0xfa9: Pop(0)
0xfaa: Push((int) 13817)
0xfab: Push((int) 15030)
0xfac: Push((int) 15043)
0xfad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfae: Pop(3)
0xfaf: Return(); Pop(0)

0xfb0: Push((int) 15030)
0xfb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb2: IF (Stack[-1] == 0) GOTO 0xfc2; Pop(1)

0xfb3: PushEmpty(string)
0xfb4: Stack[-1] = "Neutral"
0xfb5: Call 0xd2a

0xfb6: Pop(1)
0xfb7: Push((int) 13804)
0xfb8: @@ SetMessage(Stack[-1])
0xfb9: Pop(1)
0xfba: @@ ClearReplies()
0xfbb: Pop(0)
0xfbc: Push((int) 13805)
0xfbd: Push((int) 15032)
0xfbe: Push((int) 15031)
0xfbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc0: Pop(3)
0xfc1: Return(); Pop(0)

0xfc2: Push((int) 15032)
0xfc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc4: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfc5: PushEmpty(string)
0xfc6: Stack[-1] = "Neutral"
0xfc7: Call 0xd2a

0xfc8: Pop(1)
0xfc9: Push((int) 13806)
0xfca: @@ SetMessage(Stack[-1])
0xfcb: Pop(1)
0xfcc: @@ ClearReplies()
0xfcd: Pop(0)
0xfce: Push((int) 13807)
0xfcf: Push((int) 15034)
0xfd0: Push((int) 15033)
0xfd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd2: Pop(3)
0xfd3: Return(); Pop(0)

0xfd4: Push((int) 15034)
0xfd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd6: IF (Stack[-1] == 0) GOTO 0xfe6; Pop(1)

0xfd7: PushEmpty(string)
0xfd8: Stack[-1] = "Neutral"
0xfd9: Call 0xd2a

0xfda: Pop(1)
0xfdb: Push((int) 13808)
0xfdc: @@ SetMessage(Stack[-1])
0xfdd: Pop(1)
0xfde: @@ ClearReplies()
0xfdf: Pop(0)
0xfe0: Push((int) 13809)
0xfe1: Push((int) 15036)
0xfe2: Push((int) 15035)
0xfe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe4: Pop(3)
0xfe5: Return(); Pop(0)

0xfe6: Push((int) 15036)
0xfe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe8: IF (Stack[-1] == 0) GOTO 0xffd; Pop(1)

0xfe9: PushEmpty(string)
0xfea: Stack[-1] = "Neutral"
0xfeb: Call 0xd2a

0xfec: Pop(1)
0xfed: Push((int) 13810)
0xfee: @@ SetMessage(Stack[-1])
0xfef: Pop(1)
0xff0: @@ ClearReplies()
0xff1: Pop(0)
0xff2: Push((int) 13811)
0xff3: Push((int) 15038)
0xff4: Push((int) 15037)
0xff5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff6: Pop(3)
0xff7: Push((int) 13814)
0xff8: Push((int) -1)
0xff9: Push((int) 15040)
0xffa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffb: Pop(3)
0xffc: Return(); Pop(0)

0xffd: Push((int) 15038)
0xffe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfff: IF (Stack[-1] == 0) GOTO 0x100f; Pop(1)

0x1000: PushEmpty(string)
0x1001: Stack[-1] = "Neutral"
0x1002: Call 0xd2a

0x1003: Pop(1)
0x1004: Push((int) 13812)
0x1005: @@ SetMessage(Stack[-1])
0x1006: Pop(1)
0x1007: @@ ClearReplies()
0x1008: Pop(0)
0x1009: Push((int) 13813)
0x100a: Push((int) -1)
0x100b: Push((int) 15039)
0x100c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100d: Pop(3)
0x100e: Return(); Pop(0)

0x100f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1010: PushEmpty(bool)
0x1011: Call 0x1330

0x1012: Pop(0)
0x1013: IF (Stack[-1] == 0) GOTO 0x1017; Pop(1)

0x1014: @ lshStopAnimation()
0x1015: Pop(0)
0x1016: GOTO 0x1019

0x1017: @ StopAnimation()
0x1018: Pop(0)
0x1019: Return(); Pop(0)

0x101a: GOTO 0xd3b

0x101b: Return(); Pop(0)

0x101c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x101d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x101e: PushEmpty(bool, object)
0x101f: Stack[-1] = Stack[-11]
0x1020: Call 0x1298

0x1021: Pop(1)
0x1022: Pop(1); Push((bool) Stack[-1] == 0)
0x1023: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x1024: Stack[-10] = (int) -2
0x1025: Return(); Pop(8)

0x1026: @ CreateDialog(Stack[-4])
0x1027: Pop(0)
0x1028: PushEmpty(int)
0x1029: Call 0x132c

0x102a: Pop(0)
0x102b: @@ SetNPCName(Stack[-1])
0x102c: Pop(1)
0x102d: PushEmpty(string)
0x102e: Call 0x132e

0x102f: Pop(0)
0x1030: @@ SetPhoto(Stack[-1])
0x1031: Pop(1)
0x1032: PushEmpty(int)
0x1033: Call 0x162f

0x1034: Pop(0)
0x1035: @@ SetPlayerName(Stack[-1])
0x1036: Pop(1)
0x1037: Stack[-2] = (int) -1
0x1038: @ IsOverrideActive(Stack[-3])
0x1039: Pop(0)
0x103a: Push(Stack[-3])
0x103b: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x103c: Stack[-10] = (int) -2
0x103d: Return(); Pop(8)

0x103e: @ DoDialog(Stack[-4])
0x103f: Pop(0)
0x1040: PushEmpty(object, object)
0x1041: Stack[-2] = Stack[-11]
0x1042: Stack[-1] = Stack[-6]
0x1043: Push(-2, 4); TaskCall(11)
0x1044: Call 0x105b

0x1045: Pop(-2, 4); TaskReturn
0x1046: Pop(2)
0x1047: @@ IsDialogEnd(Stack[-1])
0x1048: Pop(0)
0x1049: Pop(0); Push((bool) Stack[-1] == 0)
0x104a: IF (Stack[-1] == 0) GOTO 0x1050; Pop(1)

0x104b: @ sync()
0x104c: Pop(0)
0x104d: @@ IsDialogEnd(Stack[-1])
0x104e: Pop(0)
0x104f: GOTO 0x1049

0x1050: PushEmpty(object)
0x1051: Stack[-1] = Stack[-10]
0x1052: Call 0x12d0

0x1053: Pop(1)
0x1054: @ StopDialog(Stack[-4])
0x1055: Pop(0)
0x1056: @@ GetReturnValue(Stack[-2])
0x1057: Pop(0)
0x1058: Stack[-10] = Stack[-2]
0x1059: Return(); Pop(8)

0x105a: Stack[-4] = 0
0x105b: PushEmpty()
0x105c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x105d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x105e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x105f: Push((int) 1)
0x1060: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x1061: PushEmpty(bool, object)
0x1062: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1063: Call 0x156d

0x1064: Pop(1)
0x1065: IF (Stack[-1] == 0) GOTO 0x107a; Pop(1)

0x1066: PushEmpty(object, object)
0x1067: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1068: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1069: Call 0x1496

0x106a: Pop(2)
0x106b: PushEmpty(string)
0x106c: Stack[-1] = "Neutral"
0x106d: Call 0x10bd

0x106e: Pop(1)
0x106f: Push((int) 14194)
0x1070: @@ SetMessage(Stack[-1])
0x1071: Pop(1)
0x1072: @@ ClearReplies()
0x1073: Pop(0)
0x1074: Push((int) 14195)
0x1075: Push((int) 15410)
0x1076: Push((int) 15409)
0x1077: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1078: Pop(3)
0x1079: GOTO 0x109f

0x107a: PushEmpty(string)
0x107b: Stack[-1] = "Neutral"
0x107c: Call 0x10bd

0x107d: Pop(1)
0x107e: Push((int) 14222)
0x107f: @@ SetMessage(Stack[-1])
0x1080: Pop(1)
0x1081: @@ ClearReplies()
0x1082: Pop(0)
0x1083: PushEmpty(bool, object)
0x1084: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1085: Call 0x1579

0x1086: Pop(1)
0x1087: IF (Stack[-1] == 0) GOTO 0x108d; Pop(1)

0x1088: Push((int) 14223)
0x1089: Push((int) 15442)
0x108a: Push((int) 15441)
0x108b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108c: Pop(3)
0x108d: PushEmpty(bool, object)
0x108e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108f: Call 0x149c

0x1090: Pop(1)
0x1091: IF (Stack[-1] == 0) GOTO 0x1097; Pop(1)

0x1092: Push((int) 14234)
0x1093: Push((int) 15453)
0x1094: Push((int) 15452)
0x1095: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1096: Pop(3)
0x1097: Push((int) 14239)
0x1098: Push((int) -1)
0x1099: Push((int) 15457)
0x109a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109b: Pop(3)
0x109c: GOTO 0x109f

0x109d: Return(); Pop(0)

0x109e: GOTO 0x105f

0x109f: PushEmpty(bool)
0x10a0: Call 0x1330

0x10a1: Pop(0)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10ae; Pop(1)

0x10a3: @ lshWaitForAnimEnd()
0x10a4: Pop(0)
0x10a5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10a6: IF (Stack[-1] == 0) GOTO 0x10a8; Pop(1)

0x10a7: GOTO 0x10ad

0x10a8: PushEmpty(string)
0x10a9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x10aa: Call 0x12d4

0x10ab: Pop(1)
0x10ac: GOTO 0x10a3

0x10ad: GOTO 0x10bc

0x10ae: Push("all")
0x10af: Push("idle")
0x10b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x10b1: Pop(2)
0x10b2: @ WaitForAnimEnd()
0x10b3: Pop(0)
0x10b4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10b5: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10b6: GOTO 0x10bc

0x10b7: Push("all")
0x10b8: Push("idle")
0x10b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x10ba: Pop(2)
0x10bb: GOTO 0x10b2

0x10bc: Return(); Pop(0)

0x10bd: PushEmpty()
0x10be: PushEmpty(bool)
0x10bf: Call 0x1330

0x10c0: Pop(0)
0x10c1: Pop(1); Push((bool) Stack[-1] == 0)
0x10c2: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c3: Return(); Pop(0)

0x10c4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x10c5: IF (Stack[-1] == 0) GOTO 0x10c7; Pop(1)

0x10c6: Return(); Pop(0)

0x10c7: PushEmpty(string)
0x10c8: Stack[-1] = Stack[-2]
0x10c9: Call 0x12d4

0x10ca: Pop(1)
0x10cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10cc: Return(); Pop(0)

0x10cd: PushEmpty()
0x10ce: Push((int) 1)
0x10cf: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x10d0: PushEmpty()
0x10d1: Call 0x12e6

0x10d2: Pop(0)
0x10d3: Push((int) 15421)
0x10d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d5: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10d6: PushEmpty(object, object)
0x10d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d9: Call 0x140f

0x10da: Pop(2)
0x10db: Push((int) 15422)
0x10dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10e3; Pop(1)

0x10de: PushEmpty(object, object)
0x10df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e1: Call 0x140f

0x10e2: Pop(2)
0x10e3: Push((int) 15451)
0x10e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10e5: IF (Stack[-1] == 0) GOTO 0x10eb; Pop(1)

0x10e6: PushEmpty(object, object)
0x10e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e9: Call 0x1425

0x10ea: Pop(2)
0x10eb: Push((int) 15408)
0x10ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ed: IF (Stack[-1] == 0) GOTO 0x112a; Pop(1)

0x10ee: PushEmpty(bool, object)
0x10ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10f0: Call 0x156d

0x10f1: Pop(1)
0x10f2: IF (Stack[-1] == 0) GOTO 0x1107; Pop(1)

0x10f3: PushEmpty(object, object)
0x10f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f6: Call 0x1496

0x10f7: Pop(2)
0x10f8: PushEmpty(string)
0x10f9: Stack[-1] = "Neutral"
0x10fa: Call 0x10bd

0x10fb: Pop(1)
0x10fc: Push((int) 14194)
0x10fd: @@ SetMessage(Stack[-1])
0x10fe: Pop(1)
0x10ff: @@ ClearReplies()
0x1100: Pop(0)
0x1101: Push((int) 14195)
0x1102: Push((int) 15410)
0x1103: Push((int) 15409)
0x1104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1105: Pop(3)
0x1106: Return(); Pop(0)

0x1107: PushEmpty(string)
0x1108: Stack[-1] = "Neutral"
0x1109: Call 0x10bd

0x110a: Pop(1)
0x110b: Push((int) 14222)
0x110c: @@ SetMessage(Stack[-1])
0x110d: Pop(1)
0x110e: @@ ClearReplies()
0x110f: Pop(0)
0x1110: PushEmpty(bool, object)
0x1111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1112: Call 0x1579

0x1113: Pop(1)
0x1114: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1115: Push((int) 14223)
0x1116: Push((int) 15442)
0x1117: Push((int) 15441)
0x1118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1119: Pop(3)
0x111a: PushEmpty(bool, object)
0x111b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x111c: Call 0x149c

0x111d: Pop(1)
0x111e: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x111f: Push((int) 14234)
0x1120: Push((int) 15453)
0x1121: Push((int) 15452)
0x1122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1123: Pop(3)
0x1124: Push((int) 14239)
0x1125: Push((int) -1)
0x1126: Push((int) 15457)
0x1127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1128: Pop(3)
0x1129: Return(); Pop(0)

0x112a: Push((int) 15453)
0x112b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112c: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x112d: PushEmpty(string)
0x112e: Stack[-1] = "Neutral"
0x112f: Call 0x10bd

0x1130: Pop(1)
0x1131: Push((int) 14235)
0x1132: @@ SetMessage(Stack[-1])
0x1133: Pop(1)
0x1134: @@ ClearReplies()
0x1135: Pop(0)
0x1136: Push((int) 14236)
0x1137: Push((int) 15455)
0x1138: Push((int) 15454)
0x1139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113a: Pop(3)
0x113b: Return(); Pop(0)

0x113c: Push((int) 15455)
0x113d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113e: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x113f: PushEmpty(string)
0x1140: Stack[-1] = "Neutral"
0x1141: Call 0x10bd

0x1142: Pop(1)
0x1143: Push((int) 14237)
0x1144: @@ SetMessage(Stack[-1])
0x1145: Pop(1)
0x1146: @@ ClearReplies()
0x1147: Pop(0)
0x1148: Push((int) 14238)
0x1149: Push((int) -1)
0x114a: Push((int) 15456)
0x114b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114c: Pop(3)
0x114d: Return(); Pop(0)

0x114e: Push((int) 15442)
0x114f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1150: IF (Stack[-1] == 0) GOTO 0x1160; Pop(1)

0x1151: PushEmpty(string)
0x1152: Stack[-1] = "Neutral"
0x1153: Call 0x10bd

0x1154: Pop(1)
0x1155: Push((int) 14224)
0x1156: @@ SetMessage(Stack[-1])
0x1157: Pop(1)
0x1158: @@ ClearReplies()
0x1159: Pop(0)
0x115a: Push((int) 14225)
0x115b: Push((int) 15444)
0x115c: Push((int) 15443)
0x115d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115e: Pop(3)
0x115f: Return(); Pop(0)

0x1160: Push((int) 15444)
0x1161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1162: IF (Stack[-1] == 0) GOTO 0x1172; Pop(1)

0x1163: PushEmpty(string)
0x1164: Stack[-1] = "Neutral"
0x1165: Call 0x10bd

0x1166: Pop(1)
0x1167: Push((int) 14226)
0x1168: @@ SetMessage(Stack[-1])
0x1169: Pop(1)
0x116a: @@ ClearReplies()
0x116b: Pop(0)
0x116c: Push((int) 14227)
0x116d: Push((int) 15446)
0x116e: Push((int) 15445)
0x116f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1170: Pop(3)
0x1171: Return(); Pop(0)

0x1172: Push((int) 15446)
0x1173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1174: IF (Stack[-1] == 0) GOTO 0x1184; Pop(1)

0x1175: PushEmpty(string)
0x1176: Stack[-1] = "Neutral"
0x1177: Call 0x10bd

0x1178: Pop(1)
0x1179: Push((int) 14228)
0x117a: @@ SetMessage(Stack[-1])
0x117b: Pop(1)
0x117c: @@ ClearReplies()
0x117d: Pop(0)
0x117e: Push((int) 14229)
0x117f: Push((int) 15448)
0x1180: Push((int) 15447)
0x1181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1182: Pop(3)
0x1183: Return(); Pop(0)

0x1184: Push((int) 15448)
0x1185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1186: IF (Stack[-1] == 0) GOTO 0x1196; Pop(1)

0x1187: PushEmpty(string)
0x1188: Stack[-1] = "Neutral"
0x1189: Call 0x10bd

0x118a: Pop(1)
0x118b: Push((int) 14230)
0x118c: @@ SetMessage(Stack[-1])
0x118d: Pop(1)
0x118e: @@ ClearReplies()
0x118f: Pop(0)
0x1190: Push((int) 14231)
0x1191: Push((int) 15450)
0x1192: Push((int) 15449)
0x1193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1194: Pop(3)
0x1195: Return(); Pop(0)

0x1196: Push((int) 15450)
0x1197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1198: IF (Stack[-1] == 0) GOTO 0x11a8; Pop(1)

0x1199: PushEmpty(string)
0x119a: Stack[-1] = "Neutral"
0x119b: Call 0x10bd

0x119c: Pop(1)
0x119d: Push((int) 14232)
0x119e: @@ SetMessage(Stack[-1])
0x119f: Pop(1)
0x11a0: @@ ClearReplies()
0x11a1: Pop(0)
0x11a2: Push((int) 14233)
0x11a3: Push((int) -1)
0x11a4: Push((int) 15451)
0x11a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a6: Pop(3)
0x11a7: Return(); Pop(0)

0x11a8: Push((int) 15410)
0x11a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11aa: IF (Stack[-1] == 0) GOTO 0x11c4; Pop(1)

0x11ab: PushEmpty(string)
0x11ac: Stack[-1] = "Neutral"
0x11ad: Call 0x10bd

0x11ae: Pop(1)
0x11af: Push((int) 14196)
0x11b0: @@ SetMessage(Stack[-1])
0x11b1: Pop(1)
0x11b2: @@ ClearReplies()
0x11b3: Pop(0)
0x11b4: Push((int) 14197)
0x11b5: Push((int) 15412)
0x11b6: Push((int) 15411)
0x11b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b8: Pop(3)
0x11b9: Push((int) 14218)
0x11ba: Push((int) 15412)
0x11bb: Push((int) 15435)
0x11bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11bd: Pop(3)
0x11be: Push((int) 14219)
0x11bf: Push((int) 15438)
0x11c0: Push((int) 15437)
0x11c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c2: Pop(3)
0x11c3: Return(); Pop(0)

0x11c4: Push((int) 15438)
0x11c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c6: IF (Stack[-1] == 0) GOTO 0x11d6; Pop(1)

0x11c7: PushEmpty(string)
0x11c8: Stack[-1] = "Neutral"
0x11c9: Call 0x10bd

0x11ca: Pop(1)
0x11cb: Push((int) 14220)
0x11cc: @@ SetMessage(Stack[-1])
0x11cd: Pop(1)
0x11ce: @@ ClearReplies()
0x11cf: Pop(0)
0x11d0: Push((int) 14221)
0x11d1: Push((int) 15412)
0x11d2: Push((int) 15439)
0x11d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d4: Pop(3)
0x11d5: Return(); Pop(0)

0x11d6: Push((int) 15412)
0x11d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d8: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11d9: PushEmpty(string)
0x11da: Stack[-1] = "Neutral"
0x11db: Call 0x10bd

0x11dc: Pop(1)
0x11dd: Push((int) 14198)
0x11de: @@ SetMessage(Stack[-1])
0x11df: Pop(1)
0x11e0: @@ ClearReplies()
0x11e1: Pop(0)
0x11e2: Push((int) 14199)
0x11e3: Push((int) 15414)
0x11e4: Push((int) 15413)
0x11e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e6: Pop(3)
0x11e7: Push((int) 14212)
0x11e8: Push((int) 15428)
0x11e9: Push((int) 15427)
0x11ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11eb: Pop(3)
0x11ec: Return(); Pop(0)

0x11ed: Push((int) 15428)
0x11ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ef: IF (Stack[-1] == 0) GOTO 0x1204; Pop(1)

0x11f0: PushEmpty(string)
0x11f1: Stack[-1] = "Neutral"
0x11f2: Call 0x10bd

0x11f3: Pop(1)
0x11f4: Push((int) 14213)
0x11f5: @@ SetMessage(Stack[-1])
0x11f6: Pop(1)
0x11f7: @@ ClearReplies()
0x11f8: Pop(0)
0x11f9: Push((int) 14214)
0x11fa: Push((int) 15430)
0x11fb: Push((int) 15429)
0x11fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11fd: Pop(3)
0x11fe: Push((int) 14217)
0x11ff: Push((int) 15430)
0x1200: Push((int) 15433)
0x1201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1202: Pop(3)
0x1203: Return(); Pop(0)

0x1204: Push((int) 15430)
0x1205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1206: IF (Stack[-1] == 0) GOTO 0x1216; Pop(1)

0x1207: PushEmpty(string)
0x1208: Stack[-1] = "Neutral"
0x1209: Call 0x10bd

0x120a: Pop(1)
0x120b: Push((int) 14215)
0x120c: @@ SetMessage(Stack[-1])
0x120d: Pop(1)
0x120e: @@ ClearReplies()
0x120f: Pop(0)
0x1210: Push((int) 14216)
0x1211: Push((int) 15420)
0x1212: Push((int) 15431)
0x1213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1214: Pop(3)
0x1215: Return(); Pop(0)

0x1216: Push((int) 15414)
0x1217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1218: IF (Stack[-1] == 0) GOTO 0x1228; Pop(1)

0x1219: PushEmpty(string)
0x121a: Stack[-1] = "Neutral"
0x121b: Call 0x10bd

0x121c: Pop(1)
0x121d: Push((int) 14200)
0x121e: @@ SetMessage(Stack[-1])
0x121f: Pop(1)
0x1220: @@ ClearReplies()
0x1221: Pop(0)
0x1222: Push((int) 14201)
0x1223: Push((int) 15416)
0x1224: Push((int) 15415)
0x1225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1226: Pop(3)
0x1227: Return(); Pop(0)

0x1228: Push((int) 15416)
0x1229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122a: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x122b: PushEmpty(string)
0x122c: Stack[-1] = "Neutral"
0x122d: Call 0x10bd

0x122e: Pop(1)
0x122f: Push((int) 14202)
0x1230: @@ SetMessage(Stack[-1])
0x1231: Pop(1)
0x1232: @@ ClearReplies()
0x1233: Pop(0)
0x1234: Push((int) 14203)
0x1235: Push((int) 15418)
0x1236: Push((int) 15417)
0x1237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1238: Pop(3)
0x1239: Push((int) 14209)
0x123a: Push((int) 15424)
0x123b: Push((int) 15423)
0x123c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123d: Pop(3)
0x123e: Return(); Pop(0)

0x123f: Push((int) 15424)
0x1240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1241: IF (Stack[-1] == 0) GOTO 0x1251; Pop(1)

0x1242: PushEmpty(string)
0x1243: Stack[-1] = "Neutral"
0x1244: Call 0x10bd

0x1245: Pop(1)
0x1246: Push((int) 14210)
0x1247: @@ SetMessage(Stack[-1])
0x1248: Pop(1)
0x1249: @@ ClearReplies()
0x124a: Pop(0)
0x124b: Push((int) 14211)
0x124c: Push((int) 15418)
0x124d: Push((int) 15425)
0x124e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124f: Pop(3)
0x1250: Return(); Pop(0)

0x1251: Push((int) 15418)
0x1252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1253: IF (Stack[-1] == 0) GOTO 0x1268; Pop(1)

0x1254: PushEmpty(string)
0x1255: Stack[-1] = "Neutral"
0x1256: Call 0x10bd

0x1257: Pop(1)
0x1258: Push((int) 14204)
0x1259: @@ SetMessage(Stack[-1])
0x125a: Pop(1)
0x125b: @@ ClearReplies()
0x125c: Pop(0)
0x125d: Push((int) 14205)
0x125e: Push((int) 15420)
0x125f: Push((int) 15419)
0x1260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1261: Pop(3)
0x1262: Push((int) 14208)
0x1263: Push((int) -1)
0x1264: Push((int) 15422)
0x1265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1266: Pop(3)
0x1267: Return(); Pop(0)

0x1268: Push((int) 15420)
0x1269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126a: IF (Stack[-1] == 0) GOTO 0x127a; Pop(1)

0x126b: PushEmpty(string)
0x126c: Stack[-1] = "Neutral"
0x126d: Call 0x10bd

0x126e: Pop(1)
0x126f: Push((int) 14206)
0x1270: @@ SetMessage(Stack[-1])
0x1271: Pop(1)
0x1272: @@ ClearReplies()
0x1273: Pop(0)
0x1274: Push((int) 14207)
0x1275: Push((int) -1)
0x1276: Push((int) 15421)
0x1277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1278: Pop(3)
0x1279: Return(); Pop(0)

0x127a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x127b: PushEmpty(bool)
0x127c: Call 0x1330

0x127d: Pop(0)
0x127e: IF (Stack[-1] == 0) GOTO 0x1282; Pop(1)

0x127f: @ lshStopAnimation()
0x1280: Pop(0)
0x1281: GOTO 0x1284

0x1282: @ StopAnimation()
0x1283: Pop(0)
0x1284: Return(); Pop(0)

0x1285: GOTO 0x10ce

0x1286: Return(); Pop(0)

0x1287: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1288: @@ GetPosition(Stack[-4])
0x1289: Pop(0)
0x128a: @ GetPosition(Stack[-3])
0x128b: Pop(0)
0x128c: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x128d: Push(CvectorIndex(Stack[-2], 0))
0x128e: Push(CvectorIndex(Stack[-3], 2))
0x128f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1290: Pop(2)
0x1291: Stack[-10] = Stack[-1]
0x1292: Return(); Pop(8)

0x1293: PushEmpty(bool, bool)
0x1294: @ IsLoaded(Stack[-1])
0x1295: Pop(0)
0x1296: Stack[-3] = Stack[-1]
0x1297: Return(); Pop(2)

0x1298: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1299: @@ GetPosition(Stack[-7])
0x129a: Pop(0)
0x129b: @@ GetEyesHeight(Stack[-8])
0x129c: Pop(0)
0x129d: Push(CvectorIndex(Stack[-7], 1))
0x129e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x129f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x12a0: @ GetPosition(Stack[-6])
0x12a1: Pop(0)
0x12a2: @ GetEyesHeight(Stack[-8])
0x12a3: Pop(0)
0x12a4: Push(CvectorIndex(Stack[-6], 1))
0x12a5: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x12a6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x12a7: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x12a8: Push(CvectorIndex(Stack[-5], 1))
0x12a9: Stack[-1] = (int) 0
0x12aa: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x12ab: Pop(0); Push(Stack[-5] | Stack[-5]);
0x12ac: Pop(1); Push(Sqrt(Stack[-1]))
0x12ad: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x12ae: Stack[-4] = -Stack[-5]; Pop(0);
0x12af: Push((int) 70)
0x12b0: Pop(1); Push(Stack[-6] * Stack[-1]);
0x12b1: PushEmpty(cvector, cvector)
0x12b2: Push(CVector(0.0, 1.0, 0.0))
0x12b3: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x12b4: Call 0x12ed

0x12b5: Pop(1)
0x12b6: Push((int) 25)
0x12b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12b9: Push(CVector(0.0, 10.0, 0.0))
0x12ba: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x12bb: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x12bc: @ IsOverrideActive(Stack[-1])
0x12bd: Pop(0)
0x12be: Push(Stack[-1])
0x12bf: IF (Stack[-1] == 0) GOTO 0x12c2; Pop(1)

0x12c0: Stack[-18] = (bool) 0
0x12c1: Return(); Pop(16)

0x12c2: @ StopWorld()
0x12c3: Pop(0)
0x12c4: @ CameraTransit(Stack[-2], Stack[-4])
0x12c5: Pop(0)
0x12c6: Push(CvectorIndex(Stack[-3], 0))
0x12c7: Push(CvectorIndex(Stack[-4], 2))
0x12c8: @ Rotate(Stack[-2], Stack[-1])
0x12c9: Pop(2)
0x12ca: @ CameraWaitForPlayFinish()
0x12cb: Pop(0)
0x12cc: @ ResumeWorld()
0x12cd: Pop(0)
0x12ce: Stack[-18] = (bool) 1
0x12cf: Return(); Pop(16)

0x12d0: PushEmpty()
0x12d1: @ CameraSwitchToNormal()
0x12d2: Pop(0)
0x12d3: Return(); Pop(0)

0x12d4: PushEmpty(float, float, float, float)
0x12d5: Push("playing ")
0x12d6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x12d7: @ Trace(Stack[-1])
0x12d8: Pop(1)
0x12d9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x12da: Pop(0)
0x12db: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x12dc: Pop(0)
0x12dd: Push("start: ")
0x12de: Pop(1); Push(Stack[-1] + Stack[-3]);
0x12df: @ Trace(Stack[-1])
0x12e0: Pop(1)
0x12e1: Push("end: ")
0x12e2: Pop(1); Push(Stack[-1] + Stack[-2]);
0x12e3: @ Trace(Stack[-1])
0x12e4: Pop(1)
0x12e5: Return(); Pop(4)

0x12e6: PushEmpty(bool)
0x12e7: Call 0x1330

0x12e8: Pop(0)
0x12e9: IF (Stack[-1] == 0) GOTO 0x12ec; Pop(1)

0x12ea: @ lshStopSpeech()
0x12eb: Pop(0)
0x12ec: Return(); Pop(0)

0x12ed: PushEmpty(float, float)
0x12ee: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12ef: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12f0: Push((float)0.0)
0x12f1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12f2: IF (Stack[-1] == 0) GOTO 0x12f5; Pop(1)

0x12f3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12f4: Return(); Pop(2)

0x12f5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12f6: Return(); Pop(2)

0x12f7: PushEmpty(int, int)
0x12f8: @ GetVariable(Stack[-3], Stack[-1])
0x12f9: Pop(0)
0x12fa: Stack[-4] = Stack[-1]
0x12fb: Return(); Pop(2)

0x12fc: PushEmpty(int, bool, int, bool)
0x12fd: @ GetInvItemByName(Stack[-2], Stack[-5])
0x12fe: Pop(0)
0x12ff: @@ HasItem(Stack[-2], Stack[-1])
0x1300: Pop(0)
0x1301: Stack[-7] = Stack[-1]
0x1302: Return(); Pop(4)

0x1303: PushEmpty(object, object)
0x1304: @ FindActor(Stack[-1], Stack[-4])
0x1305: Pop(0)
0x1306: Pop(0); Push((bool) Stack[-1] == 0)
0x1307: IF (Stack[-1] == 0) GOTO 0x130a; Pop(1)

0x1308: Stack[-5] = (bool) 0
0x1309: Return(); Pop(2)

0x130a: @ Trigger(Stack[-1], Stack[-3])
0x130b: Pop(0)
0x130c: Stack[-5] = (bool) 1
0x130d: Return(); Pop(2)

0x130e: Stack[-1] = 0
0x130f: PushEmpty(float, float)
0x1310: @ GetGameTime(Stack[-1])
0x1311: Pop(0)
0x1312: Stack[-3] = Stack[-1]
0x1313: Return(); Pop(2)

0x1314: PushEmpty(float, float)
0x1315: @ GetGameTime(Stack[-1])
0x1316: Pop(0)
0x1317: Push((int) 1)
0x1318: PushEmpty(int)
0x1319: Push((int) 24)
0x131a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x131b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x131c: Return(); Pop(2)

0x131d: PushEmpty()
0x131e: PushEmpty(int)
0x131f: Call 0x1314

0x1320: Pop(0)
0x1321: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1322: Return(); Pop(0)

0x1323: PushEmpty(bool, bool)
0x1324: PushEmpty(string)
0x1325: Stack[-1] = "No"
0x1326: Call 0x12d4

0x1327: Pop(1)
0x1328: @ lshWaitForAnimEnd(Stack[-1])
0x1329: Pop(0)
0x132a: Stack[-3] = Stack[-1]
0x132b: Return(); Pop(2)

0x132c: Stack[-1] = (int) 13334
0x132d: Return(); Pop(0)

0x132e: Stack[-1] = "ui/NPC_Aglaja.png"
0x132f: Return(); Pop(0)

0x1330: Stack[-1] = (bool) 1
0x1331: Return(); Pop(0)

0x1332: PushEmpty()
0x1333: Push("playsound")
0x1334: Push("giveitem")
0x1335: @ TriggerWorld(Stack[-2], Stack[-1])
0x1336: Pop(2)
0x1337: Return(); Pop(0)

0x1338: PushEmpty()
0x1339: Push("ood7Aglaja1")
0x133a: Push((int) 1)
0x133b: @ SetVariable(Stack[-2], Stack[-1])
0x133c: Pop(2)
0x133d: Return(); Pop(0)

0x133e: PushEmpty()
0x133f: Push("ood7Aglaja2")
0x1340: Push((int) 1)
0x1341: @ SetVariable(Stack[-2], Stack[-1])
0x1342: Pop(2)
0x1343: Return(); Pop(0)

0x1344: PushEmpty(object, object)
0x1345: Push("d7q01")
0x1346: Push((int) 1)
0x1347: @ SetVariable(Stack[-2], Stack[-1])
0x1348: Pop(2)
0x1349: PushEmpty(object)
0x134a: Call 0x161e

0x134b: Stack[-2] = Stack[-1]
0x134c: Pop(1)
0x134d: Push("d7q01AglajaGotoBirdmaskSelf")
0x134e: Push("pt_map_aglaja")
0x134f: Push((int) 1)
0x1350: Push((int) 15410)
0x1351: PushEmpty(float)
0x1352: Call 0x130f

0x1353: Pop(0)
0x1354: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1355: Pop(5)
0x1356: Push("d7q01BirdmaskD")
0x1357: Push("pt_d7q01_dbirdmask")
0x1358: Push((int) 1)
0x1359: Push((int) 15408)
0x135a: PushEmpty(float)
0x135b: Call 0x130f

0x135c: Pop(0)
0x135d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x135e: Pop(5)
0x135f: Push("d7q01BirdmaskM")
0x1360: Push("pt_d7q01_mbirdmask")
0x1361: Push((int) 1)
0x1362: Push((int) 15409)
0x1363: PushEmpty(float)
0x1364: Call 0x130f

0x1365: Pop(0)
0x1366: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1367: Pop(5)
0x1368: Push("d7q01BirdmaskU")
0x1369: Push("pt_d7q01_ubirdmask")
0x136a: Push((int) 1)
0x136b: Push((int) 15407)
0x136c: PushEmpty(float)
0x136d: Call 0x130f

0x136e: Pop(0)
0x136f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1370: Pop(5)
0x1371: PushEmpty()
0x1372: Call 0x16a0

0x1373: Pop(0)
0x1374: PushEmpty()
0x1375: Call 0x16b0

0x1376: Pop(0)
0x1377: PushEmpty(bool, string, string)
0x1378: Stack[-2] = "quest_d7_01"
0x1379: Stack[-1] = "place_birdmasks"
0x137a: Call 0x1303

0x137b: Pop(3)
0x137c: Return(); Pop(2)

0x137d: Stack[-1] = 0
0x137e: PushEmpty()
0x137f: Push("ood7Aglaja3")
0x1380: Push((int) 1)
0x1381: @ SetVariable(Stack[-2], Stack[-1])
0x1382: Pop(2)
0x1383: Return(); Pop(0)

0x1384: PushEmpty(object, int, object, int)
0x1385: Push("d7q01")
0x1386: Push((int) 2)
0x1387: @ SetVariable(Stack[-2], Stack[-1])
0x1388: Pop(2)
0x1389: PushEmpty(object)
0x138a: Call 0x161e

0x138b: Stack[-3] = Stack[-1]
0x138c: Pop(1)
0x138d: Push("d7q01AglajaFindLierSelf")
0x138e: Push("pt_map_aglaja")
0x138f: Push((int) 1)
0x1390: Push((int) 15411)
0x1391: PushEmpty(float)
0x1392: Call 0x130f

0x1393: Pop(0)
0x1394: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1395: Pop(5)
0x1396: PushEmpty()
0x1397: Call 0x16d0

0x1398: Pop(0)
0x1399: Push("d7q01_mreport")
0x139a: Push((int) 1)
0x139b: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x139c: Pop(2)
0x139d: Push("d7q01_dreport")
0x139e: Push((int) 1)
0x139f: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x13a0: Pop(2)
0x13a1: Push("d7q01_ureport")
0x13a2: Push((int) 1)
0x13a3: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x13a4: Pop(2)
0x13a5: Return(); Pop(4)

0x13a6: Stack[-2] = 0
0x13a7: PushEmpty()
0x13a8: Push("ood7Aglaja4")
0x13a9: Push((int) 1)
0x13aa: @ SetVariable(Stack[-2], Stack[-1])
0x13ab: Pop(2)
0x13ac: Return(); Pop(0)

0x13ad: PushEmpty()
0x13ae: Push("ood7Aglaja5")
0x13af: Push((int) 1)
0x13b0: @ SetVariable(Stack[-2], Stack[-1])
0x13b1: Pop(2)
0x13b2: Return(); Pop(0)

0x13b3: PushEmpty(object, object, object, object)
0x13b4: PushEmpty(object)
0x13b5: Call 0x161e

0x13b6: Stack[-3] = Stack[-1]
0x13b7: Pop(1)
0x13b8: Push("d7q01AglajaFindLierSelf")
0x13b9: @@ FindMark(Stack[-2], Stack[-1])
0x13ba: Pop(1)
0x13bb: Push(Stack[-1])
0x13bc: IF (Stack[-1] == 0) GOTO 0x13bf; Pop(1)

0x13bd: @@ Remove()
0x13be: Pop(0)
0x13bf: Push("d7q01AglajaGotoBirdmaskSelf")
0x13c0: @@ FindMark(Stack[-2], Stack[-1])
0x13c1: Pop(1)
0x13c2: Push(Stack[-1])
0x13c3: IF (Stack[-1] == 0) GOTO 0x13c6; Pop(1)

0x13c4: @@ Remove()
0x13c5: Pop(0)
0x13c6: Push("d7q01BirdmaskD")
0x13c7: @@ FindMark(Stack[-2], Stack[-1])
0x13c8: Pop(1)
0x13c9: Push(Stack[-1])
0x13ca: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13cb: @@ Remove()
0x13cc: Pop(0)
0x13cd: Push("d7q01BirdmaskM")
0x13ce: @@ FindMark(Stack[-2], Stack[-1])
0x13cf: Pop(1)
0x13d0: Push(Stack[-1])
0x13d1: IF (Stack[-1] == 0) GOTO 0x13d4; Pop(1)

0x13d2: @@ Remove()
0x13d3: Pop(0)
0x13d4: Push("d7q01BirdmaskU")
0x13d5: @@ FindMark(Stack[-2], Stack[-1])
0x13d6: Pop(1)
0x13d7: Push(Stack[-1])
0x13d8: IF (Stack[-1] == 0) GOTO 0x13db; Pop(1)

0x13d9: @@ Remove()
0x13da: Pop(0)
0x13db: PushEmpty()
0x13dc: Call 0x16c0

0x13dd: Pop(0)
0x13de: PushEmpty(bool, string, string)
0x13df: Stack[-2] = "quest_d7_01"
0x13e0: Stack[-1] = "completed"
0x13e1: Call 0x1303

0x13e2: Pop(3)
0x13e3: Return(); Pop(4)

0x13e4: Stack[-1] = 0
0x13e5: Stack[-2] = 0
0x13e6: PushEmpty()
0x13e7: Push("d7q02")
0x13e8: Push((int) 3)
0x13e9: @ SetVariable(Stack[-2], Stack[-1])
0x13ea: Pop(2)
0x13eb: Return(); Pop(0)

0x13ec: PushEmpty()
0x13ed: Push("d8q01")
0x13ee: Push((int) 1)
0x13ef: @ SetVariable(Stack[-2], Stack[-1])
0x13f0: Pop(2)
0x13f1: PushEmpty()
0x13f2: Call 0x16e0

0x13f3: Pop(0)
0x13f4: PushEmpty()
0x13f5: Call 0x16f0

0x13f6: Pop(0)
0x13f7: PushEmpty(bool, string, string)
0x13f8: Stack[-2] = "quest_d8_01"
0x13f9: Stack[-1] = "block_well"
0x13fa: Call 0x1303

0x13fb: Pop(3)
0x13fc: Return(); Pop(0)

0x13fd: PushEmpty()
0x13fe: Push("ood8Aglaja1")
0x13ff: Push((int) 1)
0x1400: @ SetVariable(Stack[-2], Stack[-1])
0x1401: Pop(2)
0x1402: Return(); Pop(0)

0x1403: PushEmpty()
0x1404: Push("ood8Aglaja2")
0x1405: Push((int) 1)
0x1406: @ SetVariable(Stack[-2], Stack[-1])
0x1407: Pop(2)
0x1408: Return(); Pop(0)

0x1409: PushEmpty()
0x140a: Push("d8KainIsReason")
0x140b: Push((int) 1)
0x140c: @ SetVariable(Stack[-2], Stack[-1])
0x140d: Pop(2)
0x140e: Return(); Pop(0)

0x140f: PushEmpty()
0x1410: Push("d11q01")
0x1411: Push((int) 1)
0x1412: @ SetVariable(Stack[-2], Stack[-1])
0x1413: Pop(2)
0x1414: PushEmpty()
0x1415: Call 0x1670

0x1416: Pop(0)
0x1417: PushEmpty()
0x1418: Call 0x1680

0x1419: Pop(0)
0x141a: PushEmpty(bool, string, string)
0x141b: Stack[-2] = "quest_d11_01"
0x141c: Stack[-1] = "init_girl"
0x141d: Call 0x1303

0x141e: Pop(3)
0x141f: PushEmpty(bool, string, string)
0x1420: Stack[-2] = "quest_d11_01"
0x1421: Stack[-1] = "remove_andrei"
0x1422: Call 0x1303

0x1423: Pop(3)
0x1424: Return(); Pop(0)

0x1425: PushEmpty()
0x1426: PushEmpty()
0x1427: Call 0x1690

0x1428: Pop(0)
0x1429: PushEmpty(bool, string, string)
0x142a: Stack[-2] = "quest_d11_01"
0x142b: Stack[-1] = "completed"
0x142c: Call 0x1303

0x142d: Pop(3)
0x142e: Return(); Pop(0)

0x142f: PushEmpty()
0x1430: Push("ood9Aglaja1")
0x1431: Push((int) 1)
0x1432: @ SetVariable(Stack[-2], Stack[-1])
0x1433: Pop(2)
0x1434: Return(); Pop(0)

0x1435: PushEmpty()
0x1436: Push("ood9Aglaja2")
0x1437: Push((int) 1)
0x1438: @ SetVariable(Stack[-2], Stack[-1])
0x1439: Pop(2)
0x143a: Return(); Pop(0)

0x143b: PushEmpty()
0x143c: Push("ood9Aglaja3")
0x143d: Push((int) 1)
0x143e: @ SetVariable(Stack[-2], Stack[-1])
0x143f: Pop(2)
0x1440: Return(); Pop(0)

0x1441: PushEmpty()
0x1442: Push("ood9Aglaja4")
0x1443: Push((int) 1)
0x1444: @ SetVariable(Stack[-2], Stack[-1])
0x1445: Pop(2)
0x1446: Return(); Pop(0)

0x1447: PushEmpty()
0x1448: Push("ood9Aglaja5")
0x1449: Push((int) 1)
0x144a: @ SetVariable(Stack[-2], Stack[-1])
0x144b: Pop(2)
0x144c: Return(); Pop(0)

0x144d: PushEmpty(object, object)
0x144e: Push("d10q01")
0x144f: Push((int) 1)
0x1450: @ SetVariable(Stack[-2], Stack[-1])
0x1451: Pop(2)
0x1452: PushEmpty(object)
0x1453: Call 0x161e

0x1454: Stack[-2] = Stack[-1]
0x1455: Pop(1)
0x1456: Push("d10q01AglajaGotoPetr")
0x1457: Push("pt_map_petr")
0x1458: Push((int) 1)
0x1459: Push((int) 15451)
0x145a: PushEmpty(float)
0x145b: Call 0x130f

0x145c: Pop(0)
0x145d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x145e: Pop(5)
0x145f: PushEmpty()
0x1460: Call 0x1640

0x1461: Pop(0)
0x1462: PushEmpty()
0x1463: Call 0x1650

0x1464: Pop(0)
0x1465: PushEmpty(bool, string, string)
0x1466: Stack[-2] = "quest_d10_01"
0x1467: Stack[-1] = "init_house"
0x1468: Call 0x1303

0x1469: Pop(3)
0x146a: Return(); Pop(2)

0x146b: Stack[-1] = 0
0x146c: PushEmpty()
0x146d: Push("ood10Aglaja1")
0x146e: Push((int) 1)
0x146f: @ SetVariable(Stack[-2], Stack[-1])
0x1470: Pop(2)
0x1471: Return(); Pop(0)

0x1472: PushEmpty(object, object, object, object)
0x1473: PushEmpty(object)
0x1474: Call 0x161e

0x1475: Stack[-3] = Stack[-1]
0x1476: Pop(1)
0x1477: Push("d10q01AglajaGotoPetr")
0x1478: @@ FindMark(Stack[-2], Stack[-1])
0x1479: Pop(1)
0x147a: Push(Stack[-1])
0x147b: IF (Stack[-1] == 0) GOTO 0x147e; Pop(1)

0x147c: @@ Remove()
0x147d: Pop(0)
0x147e: Push("d10q01SoldierGotoPetr")
0x147f: @@ FindMark(Stack[-2], Stack[-1])
0x1480: Pop(1)
0x1481: Push(Stack[-1])
0x1482: IF (Stack[-1] == 0) GOTO 0x1485; Pop(1)

0x1483: @@ Remove()
0x1484: Pop(0)
0x1485: PushEmpty()
0x1486: Call 0x1660

0x1487: Pop(0)
0x1488: PushEmpty(bool, string, string)
0x1489: Stack[-2] = "quest_d10_01"
0x148a: Stack[-1] = "completed"
0x148b: Call 0x1303

0x148c: Pop(3)
0x148d: Return(); Pop(4)

0x148e: Stack[-1] = 0
0x148f: Stack[-2] = 0
0x1490: PushEmpty()
0x1491: Push("ood10Aglaja2")
0x1492: Push((int) 1)
0x1493: @ SetVariable(Stack[-2], Stack[-1])
0x1494: Pop(2)
0x1495: Return(); Pop(0)

0x1496: PushEmpty()
0x1497: Push("d11AglajaVisit")
0x1498: Push((int) 1)
0x1499: @ SetVariable(Stack[-2], Stack[-1])
0x149a: Pop(2)
0x149b: Return(); Pop(0)

0x149c: PushEmpty()
0x149d: PushEmpty(bool, object)
0x149e: Stack[-1] = Stack[-3]
0x149f: Call 0x15f1

0x14a0: Pop(1)
0x14a1: IF (Stack[-1] == 0) GOTO 0x14a4; Pop(1)

0x14a2: Stack[-2] = (bool) 1
0x14a3: Return(); Pop(0)

0x14a4: Stack[-2] = (bool) 0
0x14a5: Return(); Pop(0)

0x14a6: PushEmpty()
0x14a7: PushEmpty(int, string)
0x14a8: Stack[-1] = "ood7Aglaja1"
0x14a9: Call 0x12f7

0x14aa: Pop(1)
0x14ab: Push((int) 0)
0x14ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ad: IF (Stack[-1] == 0) GOTO 0x14b0; Pop(1)

0x14ae: Stack[-2] = (bool) 1
0x14af: Return(); Pop(0)

0x14b0: Stack[-2] = (bool) 0
0x14b1: Return(); Pop(0)

0x14b2: PushEmpty()
0x14b3: PushEmpty(int, string)
0x14b4: Stack[-1] = "ood7Aglaja2"
0x14b5: Call 0x12f7

0x14b6: Pop(1)
0x14b7: Push((int) 0)
0x14b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b9: IF (Stack[-1] == 0) GOTO 0x14bc; Pop(1)

0x14ba: Stack[-2] = (bool) 1
0x14bb: Return(); Pop(0)

0x14bc: Stack[-2] = (bool) 0
0x14bd: Return(); Pop(0)

0x14be: PushEmpty()
0x14bf: PushEmpty(int, string)
0x14c0: Stack[-1] = "d7q01"
0x14c1: Call 0x12f7

0x14c2: Pop(1)
0x14c3: Push((int) 0)
0x14c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c5: IF (Stack[-1] == 0) GOTO 0x14c8; Pop(1)

0x14c6: Stack[-2] = (bool) 1
0x14c7: Return(); Pop(0)

0x14c8: Stack[-2] = (bool) 0
0x14c9: Return(); Pop(0)

0x14ca: PushEmpty()
0x14cb: PushEmpty(int, string)
0x14cc: Stack[-1] = "ood7Aglaja3"
0x14cd: Call 0x12f7

0x14ce: Pop(1)
0x14cf: Push((int) 0)
0x14d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d1: IF (Stack[-1] == 0) GOTO 0x14d4; Pop(1)

0x14d2: Stack[-2] = (bool) 1
0x14d3: Return(); Pop(0)

0x14d4: Stack[-2] = (bool) 0
0x14d5: Return(); Pop(0)

0x14d6: PushEmpty()
0x14d7: PushEmpty(int, string)
0x14d8: Stack[-1] = "d7q01"
0x14d9: Call 0x12f7

0x14da: Pop(1)
0x14db: Push((int) 1)
0x14dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14dd: IF (Stack[-1] == 0) GOTO 0x14e0; Pop(1)

0x14de: Stack[-2] = (bool) 1
0x14df: Return(); Pop(0)

0x14e0: Stack[-2] = (bool) 0
0x14e1: Return(); Pop(0)

0x14e2: PushEmpty()
0x14e3: PushEmpty(int, string)
0x14e4: Stack[-1] = "ood7Aglaja4"
0x14e5: Call 0x12f7

0x14e6: Pop(1)
0x14e7: Push((int) 0)
0x14e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e9: IF (Stack[-1] == 0) GOTO 0x14ec; Pop(1)

0x14ea: Stack[-2] = (bool) 1
0x14eb: Return(); Pop(0)

0x14ec: Stack[-2] = (bool) 0
0x14ed: Return(); Pop(0)

0x14ee: PushEmpty()
0x14ef: PushEmpty(bool)
0x14f0: Stack[-1] = (bool) 0
0x14f1: PushEmpty(bool)
0x14f2: Stack[-1] = (bool) 0
0x14f3: PushEmpty(bool, object, string)
0x14f4: Stack[-2] = Stack[-6]
0x14f5: Stack[-1] = "d7q01_dreport"
0x14f6: Call 0x12fc

0x14f7: Pop(2)
0x14f8: IF (Stack[-1] == 0) GOTO 0x1500; Pop(1)

0x14f9: PushEmpty(bool, object, string)
0x14fa: Stack[-2] = Stack[-6]
0x14fb: Stack[-1] = "d7q01_mreport"
0x14fc: Call 0x12fc

0x14fd: Pop(2)
0x14fe: IF (Stack[-1] == 0) GOTO 0x1500; Pop(1)

0x14ff: Stack[-1] = (bool) 1
0x1500: IF (Stack[-1] == 0) GOTO 0x1508; Pop(1)

0x1501: PushEmpty(bool, object, string)
0x1502: Stack[-2] = Stack[-5]
0x1503: Stack[-1] = "d7q01_ureport"
0x1504: Call 0x12fc

0x1505: Pop(2)
0x1506: IF (Stack[-1] == 0) GOTO 0x1508; Pop(1)

0x1507: Stack[-1] = (bool) 1
0x1508: IF (Stack[-1] == 0) GOTO 0x150b; Pop(1)

0x1509: Stack[-2] = (bool) 1
0x150a: Return(); Pop(0)

0x150b: Stack[-2] = (bool) 0
0x150c: Return(); Pop(0)

0x150d: PushEmpty()
0x150e: PushEmpty(int, string)
0x150f: Stack[-1] = "ood7Aglaja5"
0x1510: Call 0x12f7

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
0x151b: Stack[-1] = "d7q01"
0x151c: Call 0x12f7

0x151d: Pop(1)
0x151e: Push((int) 3)
0x151f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x1523; Pop(1)

0x1521: Stack[-2] = (bool) 1
0x1522: Return(); Pop(0)

0x1523: Stack[-2] = (bool) 0
0x1524: Return(); Pop(0)

0x1525: PushEmpty()
0x1526: PushEmpty(int, string)
0x1527: Stack[-1] = "d7q02"
0x1528: Call 0x12f7

0x1529: Pop(1)
0x152a: Push((int) 2)
0x152b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152c: IF (Stack[-1] == 0) GOTO 0x152f; Pop(1)

0x152d: Stack[-2] = (bool) 1
0x152e: Return(); Pop(0)

0x152f: Stack[-2] = (bool) 0
0x1530: Return(); Pop(0)

0x1531: PushEmpty()
0x1532: PushEmpty(int, string)
0x1533: Stack[-1] = "d8q01"
0x1534: Call 0x12f7

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
0x153f: Stack[-1] = "ood8Aglaja1"
0x1540: Call 0x12f7

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
0x154b: Stack[-1] = "ood8Aglaja2"
0x154c: Call 0x12f7

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
0x1557: Stack[-1] = "d8TermitnikLoad"
0x1558: Call 0x12f7

0x1559: Pop(1)
0x155a: Push((int) 0)
0x155b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x155c: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155d: Stack[-2] = (bool) 1
0x155e: Return(); Pop(0)

0x155f: Stack[-2] = (bool) 0
0x1560: Return(); Pop(0)

0x1561: PushEmpty()
0x1562: PushEmpty(int, string)
0x1563: Stack[-1] = "d9TalkToPolkovodec"
0x1564: Call 0x12f7

0x1565: Pop(1)
0x1566: Push((int) 0)
0x1567: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1568: IF (Stack[-1] == 0) GOTO 0x156b; Pop(1)

0x1569: Stack[-2] = (bool) 1
0x156a: Return(); Pop(0)

0x156b: Stack[-2] = (bool) 0
0x156c: Return(); Pop(0)

0x156d: PushEmpty()
0x156e: PushEmpty(int, string)
0x156f: Stack[-1] = "d11q01"
0x1570: Call 0x12f7

0x1571: Pop(1)
0x1572: Push((int) 0)
0x1573: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1574: IF (Stack[-1] == 0) GOTO 0x1577; Pop(1)

0x1575: Stack[-2] = (bool) 1
0x1576: Return(); Pop(0)

0x1577: Stack[-2] = (bool) 0
0x1578: Return(); Pop(0)

0x1579: PushEmpty()
0x157a: PushEmpty(int, string)
0x157b: Stack[-1] = "d11q01"
0x157c: Call 0x12f7

0x157d: Pop(1)
0x157e: Push((int) 4)
0x157f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1580: IF (Stack[-1] == 0) GOTO 0x1583; Pop(1)

0x1581: Stack[-2] = (bool) 1
0x1582: Return(); Pop(0)

0x1583: Stack[-2] = (bool) 0
0x1584: Return(); Pop(0)

0x1585: PushEmpty()
0x1586: PushEmpty(int, string)
0x1587: Stack[-1] = "ood9Aglaja1"
0x1588: Call 0x12f7

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
0x1593: Stack[-1] = "ood9Aglaja2"
0x1594: Call 0x12f7

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
0x159f: Stack[-1] = "ood9Aglaja3"
0x15a0: Call 0x12f7

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
0x15ab: Stack[-1] = "ood9Aglaja4"
0x15ac: Call 0x12f7

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
0x15b7: Stack[-1] = "ood9Aglaja5"
0x15b8: Call 0x12f7

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
0x15c3: Stack[-1] = "ood10Aglaja1"
0x15c4: Call 0x12f7

0x15c5: Pop(1)
0x15c6: Push((int) 0)
0x15c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c8: IF (Stack[-1] == 0) GOTO 0x15cb; Pop(1)

0x15c9: Stack[-2] = (bool) 1
0x15ca: Return(); Pop(0)

0x15cb: Stack[-2] = (bool) 0
0x15cc: Return(); Pop(0)

0x15cd: PushEmpty()
0x15ce: PushEmpty(int, string)
0x15cf: Stack[-1] = "d10q01"
0x15d0: Call 0x12f7

0x15d1: Pop(1)
0x15d2: Push((int) 1000)
0x15d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15d4: IF (Stack[-1] == 0) GOTO 0x15d7; Pop(1)

0x15d5: Stack[-2] = (bool) 1
0x15d6: Return(); Pop(0)

0x15d7: Stack[-2] = (bool) 0
0x15d8: Return(); Pop(0)

0x15d9: PushEmpty()
0x15da: PushEmpty(int, string)
0x15db: Stack[-1] = "ood10Aglaja2"
0x15dc: Call 0x12f7

0x15dd: Pop(1)
0x15de: Push((int) 0)
0x15df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e0: IF (Stack[-1] == 0) GOTO 0x15e3; Pop(1)

0x15e1: Stack[-2] = (bool) 1
0x15e2: Return(); Pop(0)

0x15e3: Stack[-2] = (bool) 0
0x15e4: Return(); Pop(0)

0x15e5: PushEmpty()
0x15e6: PushEmpty(int, string)
0x15e7: Stack[-1] = "d10q01"
0x15e8: Call 0x12f7

0x15e9: Pop(1)
0x15ea: Push((int) 3)
0x15eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ec: IF (Stack[-1] == 0) GOTO 0x15ef; Pop(1)

0x15ed: Stack[-2] = (bool) 1
0x15ee: Return(); Pop(0)

0x15ef: Stack[-2] = (bool) 0
0x15f0: Return(); Pop(0)

0x15f1: PushEmpty()
0x15f2: Stack[-2] = (bool) 0
0x15f3: Return(); Pop(0)

0x15f4: PushEmpty(object, object)
0x15f5: @ GetDiaryRoot(Stack[-1])
0x15f6: Pop(0)
0x15f7: Pop(0); Push((bool) Stack[-1] == 0)
0x15f8: IF (Stack[-1] == 0) GOTO 0x15fe; Pop(1)

0x15f9: Push("Can't retrieve diary root")
0x15fa: @ Trace(Stack[-1])
0x15fb: Pop(1)
0x15fc: Stack[-3] = (bool) 0
0x15fd: Return(); Pop(2)

0x15fe: Stack[-3] = Stack[-1]
0x15ff: Return(); Pop(2)

0x1600: Stack[-1] = 0
0x1601: PushEmpty(object, object, int, object, object, int)
0x1602: PushEmpty(object)
0x1603: Call 0x15f4

0x1604: Stack[-4] = Stack[-1]
0x1605: Pop(1)
0x1606: @@ Find(Stack[-7], Stack[-2])
0x1607: Pop(0)
0x1608: Pop(0); Push((bool) Stack[-2] == 0)
0x1609: IF (Stack[-1] == 0) GOTO 0x1610; Pop(1)

0x160a: Push("Can't find diary parent with id: ")
0x160b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x160c: @ Trace(Stack[-1])
0x160d: Pop(1)
0x160e: Stack[-9] = (bool) 0
0x160f: Return(); Pop(6)

0x1610: @@ AddChild(Stack[-8])
0x1611: Pop(0)
0x1612: Push("player_diary")
0x1613: Push((int) 1)
0x1614: @ SetVariable(Stack[-2], Stack[-1])
0x1615: Pop(2)
0x1616: @@ GetCategory(Stack[-1])
0x1617: Pop(0)
0x1618: @ SetDiarySection(Stack[-1])
0x1619: Pop(0)
0x161a: Stack[-9] = (bool) 0
0x161b: Return(); Pop(6)

0x161c: Stack[-2] = 0
0x161d: Stack[-3] = 0
0x161e: PushEmpty(object, object, object, object)
0x161f: @ GetMainOutdoorScene(Stack[-2])
0x1620: Pop(0)
0x1621: Pop(0); Push((bool) Stack[-2] == 0)
0x1622: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1623: Push("Can't find main outdoor scene")
0x1624: @ Trace(Stack[-1])
0x1625: Pop(1)
0x1626: Stack[-1] = 0
0x1627: Stack[-5] = Stack[-1]
0x1628: Return(); Pop(4)

0x1629: @@ GetMap(Stack[-1])
0x162a: Pop(0)
0x162b: Stack[-5] = Stack[-1]
0x162c: Return(); Pop(4)

0x162d: Stack[-1] = 0
0x162e: Stack[-2] = 0
0x162f: PushEmpty(int, int)
0x1630: Push("player")
0x1631: @ GetVariable(Stack[-1], Stack[-2])
0x1632: Pop(1)
0x1633: Push((int) 0)
0x1634: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1635: IF (Stack[-1] == 0) GOTO 0x1639; Pop(1)

0x1636: Stack[-3] = (int) 200001
0x1637: Return(); Pop(2)

0x1638: GOTO 0x163e

0x1639: Push((int) 1)
0x163a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163b: IF (Stack[-1] == 0) GOTO 0x163e; Pop(1)

0x163c: Stack[-3] = (int) 200002
0x163d: Return(); Pop(2)

0x163e: Stack[-3] = (int) 200003
0x163f: Return(); Pop(2)

0x1640: PushEmpty(object, object)
0x1641: Push("Adding diary entry")
0x1642: @ Trace(Stack[-1])
0x1643: Pop(1)
0x1644: Push((int) 186)
0x1645: Push((int) 1)
0x1646: Push((int) 15449)
0x1647: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1648: Pop(3)
0x1649: PushEmpty(bool, object, int)
0x164a: Stack[-2] = Stack[-4]
0x164b: Stack[-1] = (int) -1
0x164c: Call 0x1601

0x164d: Pop(3)
0x164e: Return(); Pop(2)

0x164f: Stack[-1] = 0
0x1650: PushEmpty(object, object)
0x1651: Push("Adding diary entry")
0x1652: @ Trace(Stack[-1])
0x1653: Pop(1)
0x1654: Push((int) 187)
0x1655: Push((int) 1)
0x1656: Push((int) 15450)
0x1657: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1658: Pop(3)
0x1659: PushEmpty(bool, object, int)
0x165a: Stack[-2] = Stack[-4]
0x165b: Stack[-1] = (int) 186
0x165c: Call 0x1601

0x165d: Pop(3)
0x165e: Return(); Pop(2)

0x165f: Stack[-1] = 0
0x1660: PushEmpty(object, object)
0x1661: Push("Adding diary entry")
0x1662: @ Trace(Stack[-1])
0x1663: Pop(1)
0x1664: Push((int) 191)
0x1665: Push((int) 1)
0x1666: Push((int) 15476)
0x1667: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1668: Pop(3)
0x1669: PushEmpty(bool, object, int)
0x166a: Stack[-2] = Stack[-4]
0x166b: Stack[-1] = (int) 186
0x166c: Call 0x1601

0x166d: Pop(3)
0x166e: Return(); Pop(2)

0x166f: Stack[-1] = 0
0x1670: PushEmpty(object, object)
0x1671: Push("Adding diary entry")
0x1672: @ Trace(Stack[-1])
0x1673: Pop(1)
0x1674: Push((int) 192)
0x1675: Push((int) 1)
0x1676: Push((int) 15477)
0x1677: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1678: Pop(3)
0x1679: PushEmpty(bool, object, int)
0x167a: Stack[-2] = Stack[-4]
0x167b: Stack[-1] = (int) -1
0x167c: Call 0x1601

0x167d: Pop(3)
0x167e: Return(); Pop(2)

0x167f: Stack[-1] = 0
0x1680: PushEmpty(object, object)
0x1681: Push("Adding diary entry")
0x1682: @ Trace(Stack[-1])
0x1683: Pop(1)
0x1684: Push((int) 193)
0x1685: Push((int) 1)
0x1686: Push((int) 15478)
0x1687: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1688: Pop(3)
0x1689: PushEmpty(bool, object, int)
0x168a: Stack[-2] = Stack[-4]
0x168b: Stack[-1] = (int) 192
0x168c: Call 0x1601

0x168d: Pop(3)
0x168e: Return(); Pop(2)

0x168f: Stack[-1] = 0
0x1690: PushEmpty(object, object)
0x1691: Push("Adding diary entry")
0x1692: @ Trace(Stack[-1])
0x1693: Pop(1)
0x1694: Push((int) 196)
0x1695: Push((int) 1)
0x1696: Push((int) 15481)
0x1697: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1698: Pop(3)
0x1699: PushEmpty(bool, object, int)
0x169a: Stack[-2] = Stack[-4]
0x169b: Stack[-1] = (int) 192
0x169c: Call 0x1601

0x169d: Pop(3)
0x169e: Return(); Pop(2)

0x169f: Stack[-1] = 0
0x16a0: PushEmpty(object, object)
0x16a1: Push("Adding diary entry")
0x16a2: @ Trace(Stack[-1])
0x16a3: Pop(1)
0x16a4: Push((int) 165)
0x16a5: Push((int) 1)
0x16a6: Push((int) 15412)
0x16a7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16a8: Pop(3)
0x16a9: PushEmpty(bool, object, int)
0x16aa: Stack[-2] = Stack[-4]
0x16ab: Stack[-1] = (int) -1
0x16ac: Call 0x1601

0x16ad: Pop(3)
0x16ae: Return(); Pop(2)

0x16af: Stack[-1] = 0
0x16b0: PushEmpty(object, object)
0x16b1: Push("Adding diary entry")
0x16b2: @ Trace(Stack[-1])
0x16b3: Pop(1)
0x16b4: Push((int) 166)
0x16b5: Push((int) 1)
0x16b6: Push((int) 15413)
0x16b7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16b8: Pop(3)
0x16b9: PushEmpty(bool, object, int)
0x16ba: Stack[-2] = Stack[-4]
0x16bb: Stack[-1] = (int) 165
0x16bc: Call 0x1601

0x16bd: Pop(3)
0x16be: Return(); Pop(2)

0x16bf: Stack[-1] = 0
0x16c0: PushEmpty(object, object)
0x16c1: Push("Adding diary entry")
0x16c2: @ Trace(Stack[-1])
0x16c3: Pop(1)
0x16c4: Push((int) 168)
0x16c5: Push((int) 1)
0x16c6: Push((int) 15415)
0x16c7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16c8: Pop(3)
0x16c9: PushEmpty(bool, object, int)
0x16ca: Stack[-2] = Stack[-4]
0x16cb: Stack[-1] = (int) 165
0x16cc: Call 0x1601

0x16cd: Pop(3)
0x16ce: Return(); Pop(2)

0x16cf: Stack[-1] = 0
0x16d0: PushEmpty(object, object)
0x16d1: Push("Adding diary entry")
0x16d2: @ Trace(Stack[-1])
0x16d3: Pop(1)
0x16d4: Push((int) 167)
0x16d5: Push((int) 1)
0x16d6: Push((int) 15414)
0x16d7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16d8: Pop(3)
0x16d9: PushEmpty(bool, object, int)
0x16da: Stack[-2] = Stack[-4]
0x16db: Stack[-1] = (int) 165
0x16dc: Call 0x1601

0x16dd: Pop(3)
0x16de: Return(); Pop(2)

0x16df: Stack[-1] = 0
0x16e0: PushEmpty(object, object)
0x16e1: Push("Adding diary entry")
0x16e2: @ Trace(Stack[-1])
0x16e3: Pop(1)
0x16e4: Push((int) 175)
0x16e5: Push((int) 1)
0x16e6: Push((int) 15434)
0x16e7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16e8: Pop(3)
0x16e9: PushEmpty(bool, object, int)
0x16ea: Stack[-2] = Stack[-4]
0x16eb: Stack[-1] = (int) -1
0x16ec: Call 0x1601

0x16ed: Pop(3)
0x16ee: Return(); Pop(2)

0x16ef: Stack[-1] = 0
0x16f0: PushEmpty(object, object)
0x16f1: Push("Adding diary entry")
0x16f2: @ Trace(Stack[-1])
0x16f3: Pop(1)
0x16f4: Push((int) 176)
0x16f5: Push((int) 1)
0x16f6: Push((int) 15435)
0x16f7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16f8: Pop(3)
0x16f9: PushEmpty(bool, object, int)
0x16fa: Stack[-2] = Stack[-4]
0x16fb: Stack[-1] = (int) 175
0x16fc: Call 0x1601

0x16fd: Pop(3)
0x16fe: Return(); Pop(2)

0x16ff: Stack[-1] = 0
0x1700: Push(GlobalVars[1])
0x1701: Stack[-1] = (bool) 0
0x1702: GlobalVars[1] = Stack[-1]; Pop(1)
0x1703: Return(); Pop(0)

0x1704: PushEmpty()
0x1705: PushEmpty(bool, int)
0x1706: Stack[-1] = (int) 7
0x1707: Call 0x131d

0x1708: Pop(1)
0x1709: IF (Stack[-1] == 0) GOTO 0x1711; Pop(1)

0x170a: PushEmpty(int, object)
0x170b: Stack[-1] = Stack[-3]
0x170c: Push(-2, 1); TaskCall(2)
0x170d: Call 0x31

0x170e: Pop(-2, 1); TaskReturn
0x170f: Pop(2)
0x1710: Return(); Pop(0)

0x1711: PushEmpty(bool, int)
0x1712: Stack[-1] = (int) 8
0x1713: Call 0x131d

0x1714: Pop(1)
0x1715: IF (Stack[-1] == 0) GOTO 0x171d; Pop(1)

0x1716: PushEmpty(int, object)
0x1717: Stack[-1] = Stack[-3]
0x1718: Push(-2, 1); TaskCall(4)
0x1719: Call 0x74a

0x171a: Pop(-2, 1); TaskReturn
0x171b: Pop(2)
0x171c: Return(); Pop(0)

0x171d: PushEmpty(bool, int)
0x171e: Stack[-1] = (int) 9
0x171f: Call 0x131d

0x1720: Pop(1)
0x1721: IF (Stack[-1] == 0) GOTO 0x1729; Pop(1)

0x1722: PushEmpty(int, object)
0x1723: Stack[-1] = Stack[-3]
0x1724: Push(-2, 1); TaskCall(8)
0x1725: Call 0xc67

0x1726: Pop(-2, 1); TaskReturn
0x1727: Pop(2)
0x1728: Return(); Pop(0)

0x1729: PushEmpty(bool, int)
0x172a: Stack[-1] = (int) 10
0x172b: Call 0x131d

0x172c: Pop(1)
0x172d: IF (Stack[-1] == 0) GOTO 0x1735; Pop(1)

0x172e: PushEmpty(int, object)
0x172f: Stack[-1] = Stack[-3]
0x1730: Push(-2, 1); TaskCall(6)
0x1731: Call 0xa96

0x1732: Pop(-2, 1); TaskReturn
0x1733: Pop(2)
0x1734: Return(); Pop(0)

0x1735: PushEmpty(bool, int)
0x1736: Stack[-1] = (int) 11
0x1737: Call 0x131d

0x1738: Pop(1)
0x1739: IF (Stack[-1] == 0) GOTO 0x1741; Pop(1)

0x173a: PushEmpty(int, object)
0x173b: Stack[-1] = Stack[-3]
0x173c: Push(-2, 1); TaskCall(10)
0x173d: Call 0x101c

0x173e: Pop(-2, 1); TaskReturn
0x173f: Pop(2)
0x1740: Return(); Pop(0)

0x1741: PushEmpty(bool)
0x1742: Call 0x1323

0x1743: Pop(1)
0x1744: Return(); Pop(0)

