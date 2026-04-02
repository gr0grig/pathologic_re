GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	W:cleanup
	W:restore
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:playsound
	W:giveitem
	W:ood8Burah2
	W:ood8Burah3
	W:d8q03
	W:burah gives blood
	W:d8q03_blood
	W:burah gives serum
	W:burah_serum
	W:ood8Burah1
	W:d8q04
	W:d8BurahLetter
	W:microscope_d8q03_blood
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006f006f006400380042007500720061006800320000006f006f0064003800420075007200610068003300000064003800710030003300000062007500720061006800200067006900760065007300200062006c006f006f0064000000640038007100300033005f0062006c006f006f006400000062007500720061006800200067006900760065007300200073006500720075006d000000620075007200610068005f0073006500720075006d0000006f006f0064003800420075007200610068003100000064003800710030003400000064003800420075007200610068004c006500740074006500720000006d006900630072006f00730063006f00700065005f00640038007100300033005f0062006c006f006f0064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x437
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfb Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x43b Vars = (string)
		EVENT_6 Op = 0x44f Vars = ()
		EVENT_5 Op = 0x45c Vars = ()
		EVENT_7 Op = 0x4ab Vars = (int)
		EVENT_45 Op = 0x4ed Vars = (bool)
		EVENT_0 Op = 0x4f9 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x57d

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x684

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x5d7

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x582

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x802

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x800

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x804

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x806

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x7ef

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-11] = Stack[-2]
0x45: Stack[-6] = Stack[-1]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-10] = Stack[-1]
0x55: Call2 0x5c6

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a: Pop(0)
0x5b: Stack[-2] = Stack[-10]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xe5

0x67: Pop(1)
0x68: Push((int) 513423)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x762

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 513424)
0x73: Push((int) 14661)
0x74: Push((int) 14660)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x76e

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x77a

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: Stack[-1] = (bool) 1
0x84: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x85: Push((int) 513447)
0x86: Push((int) 37690)
0x87: Push((int) 14683)
0x88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89: Pop(3)
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x786

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: Push((int) 513433)
0x90: Push((int) 14670)
0x91: Push((int) 14669)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x93: Pop(3)
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x732

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9b: PushEmpty(bool, object)
0x9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Call2 0x73e

0x9e: Pop(1)
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Stack[-1] = (bool) 1
0xa1: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa2: Push((int) 535977)
0xa3: Push((int) 37706)
0xa4: Push((int) 37705)
0xa5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa6: Pop(3)
0xa7: PushEmpty(bool)
0xa8: Stack[-1] = (bool) 0
0xa9: PushEmpty(bool, object)
0xaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab: Call2 0x74a

0xac: Pop(1)
0xad: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x756

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: Push((int) 538666)
0xb6: Push((int) 40565)
0xb7: Push((int) 40564)
0xb8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb9: Pop(3)
0xba: Push((int) 513460)
0xbb: Push((int) -1)
0xbc: Push((int) 14697)
0xbd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbe: Pop(3)
0xbf: Push((int) 535944)
0xc0: Push((int) -1)
0xc1: Push((int) 37665)
0xc2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc3: Pop(3)
0xc4: GOTO 0xc7

0xc5: Return(); Pop(0)

0xc6: GOTO 0x62

0xc7: PushEmpty(bool)
0xc8: Call2 0x808

0xc9: Pop(0)
0xca: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xcb: @ lshWaitForAnimEnd()
0xcc: Pop(0)
0xcd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: GOTO 0xd5

0xd0: PushEmpty(string)
0xd1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd2: Call2 0x661

0xd3: Pop(1)
0xd4: GOTO 0xcb

0xd5: GOTO 0xe4

0xd6: Push("all") // @poff=138
0xd7: Push("idle") // @poff=146
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ WaitForAnimEnd()
0xdb: Pop(0)
0xdc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: GOTO 0xe4

0xdf: Push("all") // @poff=138
0xe0: Push("idle") // @poff=146
0xe1: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: GOTO 0xda

0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty(bool)
0xe7: Call2 0x808

0xe8: Pop(0)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Return(); Pop(0)

0xec: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: Return(); Pop(0)

0xef: PushEmpty(string, bool)
0xf0: Stack[-3] = Stack[-2]
0xf1: Push("") // @poff=102
0xf2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-1] = (bool) 0
0xf5: GOTO 0xf7

0xf6: Stack[-1] = (bool) 1
0xf7: Call2 0x668

0xf8: Pop(2)
0xf9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfa: Return(); Pop(0)

0xfb: PushEmpty()
0xfc: Push((int) 1)
0xfd: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0xfe: PushEmpty()
0xff: Call2 0x67d

0x100: Pop(0)
0x101: Push((int) 14668)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x6f8

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x70d

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x6e6

0x112: Pop(2)
0x113: Push((int) 14696)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x721

0x11a: Pop(2)
0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x6e6

0x11f: Pop(2)
0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x704

0x124: Pop(2)
0x125: Push((int) 14692)
0x126: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12b: Call2 0x718

0x12c: Pop(2)
0x12d: Push((int) 37696)
0x12e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: PushEmpty(object, object)
0x131: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x132: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x133: Call2 0x718

0x134: Pop(2)
0x135: Push((int) 14669)
0x136: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x72c

0x13c: Pop(2)
0x13d: Push((int) 37705)
0x13e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x6ec

0x144: Pop(2)
0x145: Push((int) 40564)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x6f2

0x14c: Pop(2)
0x14d: Push((int) 14659)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xe5

0x153: Pop(1)
0x154: Push((int) 513423)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x762

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: Push((int) 513424)
0x15f: Push((int) 14661)
0x160: Push((int) 14660)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x76e

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x77a

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Stack[-1] = (bool) 1
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: Push((int) 513447)
0x172: Push((int) 37690)
0x173: Push((int) 14683)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178: Call2 0x786

0x179: Pop(1)
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: Push((int) 513433)
0x17c: Push((int) 14670)
0x17d: Push((int) 14669)
0x17e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17f: Pop(3)
0x180: PushEmpty(bool)
0x181: Stack[-1] = (bool) 0
0x182: PushEmpty(bool, object)
0x183: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x184: Call2 0x732

0x185: Pop(1)
0x186: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x187: PushEmpty(bool, object)
0x188: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x189: Call2 0x73e

0x18a: Pop(1)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Stack[-1] = (bool) 1
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Push((int) 535977)
0x18f: Push((int) 37706)
0x190: Push((int) 37705)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: PushEmpty(bool, object)
0x196: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x197: Call2 0x74a

0x198: Pop(1)
0x199: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x756

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: Push((int) 538666)
0x1a2: Push((int) 40565)
0x1a3: Push((int) 40564)
0x1a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a5: Pop(3)
0x1a6: Push((int) 513460)
0x1a7: Push((int) -1)
0x1a8: Push((int) 14697)
0x1a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1aa: Pop(3)
0x1ab: Push((int) 535944)
0x1ac: Push((int) -1)
0x1ad: Push((int) 37665)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 40565)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0xe5

0x1b7: Pop(1)
0x1b8: Push((int) 538667)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 538668)
0x1be: Push((int) 40568)
0x1bf: Push((int) 40566)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Push((int) 538669)
0x1c3: Push((int) -1)
0x1c4: Push((int) 40567)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 40568)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0xe5

0x1ce: Pop(1)
0x1cf: Push((int) 538670)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: Push((int) 538671)
0x1d5: Push((int) 40570)
0x1d6: Push((int) 40569)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d8: Pop(3)
0x1d9: Push((int) 538675)
0x1da: Push((int) -1)
0x1db: Push((int) 40573)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 40570)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral" // @poff=89
0x1e4: Call2 0xe5

0x1e5: Pop(1)
0x1e6: Push((int) 538672)
0x1e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e8: Pop(1)
0x1e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ea: Pop(0)
0x1eb: Push((int) 538673)
0x1ec: Push((int) 40574)
0x1ed: Push((int) 40571)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Push((int) 538674)
0x1f1: Push((int) -1)
0x1f2: Push((int) 40572)
0x1f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 40574)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral" // @poff=89
0x1fb: Call2 0xe5

0x1fc: Pop(1)
0x1fd: Push((int) 538676)
0x1fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ff: Pop(1)
0x200: @@@ ClearReplies(); Obj=0 // @poff=116
0x201: Pop(0)
0x202: Push((int) 538677)
0x203: Push((int) -1)
0x204: Push((int) 40575)
0x205: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x206: Pop(3)
0x207: Push((int) 538678)
0x208: Push((int) -1)
0x209: Push((int) 40576)
0x20a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20b: Pop(3)
0x20c: Return(); Pop(0)

0x20d: Push((int) 37706)
0x20e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Neutral" // @poff=89
0x212: Call2 0xe5

0x213: Pop(1)
0x214: Push((int) 535978)
0x215: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x216: Pop(1)
0x217: @@@ ClearReplies(); Obj=0 // @poff=116
0x218: Pop(0)
0x219: Push((int) 535979)
0x21a: Push((int) -1)
0x21b: Push((int) 37707)
0x21c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21d: Pop(3)
0x21e: Push((int) 535980)
0x21f: Push((int) 37709)
0x220: Push((int) 37708)
0x221: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Push((int) 37709)
0x225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral" // @poff=89
0x229: Call2 0xe5

0x22a: Pop(1)
0x22b: Push((int) 535981)
0x22c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22d: Pop(1)
0x22e: @@@ ClearReplies(); Obj=0 // @poff=116
0x22f: Pop(0)
0x230: Push((int) 535982)
0x231: Push((int) 37711)
0x232: Push((int) 37710)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: Push((int) 37711)
0x237: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x239: PushEmpty(string)
0x23a: Stack[-1] = "Neutral" // @poff=89
0x23b: Call2 0xe5

0x23c: Pop(1)
0x23d: Push((int) 535983)
0x23e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23f: Pop(1)
0x240: @@@ ClearReplies(); Obj=0 // @poff=116
0x241: Pop(0)
0x242: Push((int) 535984)
0x243: Push((int) -1)
0x244: Push((int) 37712)
0x245: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x246: Pop(3)
0x247: Push((int) 535985)
0x248: Push((int) -1)
0x249: Push((int) 37713)
0x24a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 14670)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Neutral" // @poff=89
0x252: Call2 0xe5

0x253: Pop(1)
0x254: Push((int) 513434)
0x255: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x256: Pop(1)
0x257: @@@ ClearReplies(); Obj=0 // @poff=116
0x258: Pop(0)
0x259: Push((int) 513435)
0x25a: Push((int) 14672)
0x25b: Push((int) 14671)
0x25c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25d: Pop(3)
0x25e: Push((int) 535970)
0x25f: Push((int) -1)
0x260: Push((int) 37697)
0x261: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Push((int) 14672)
0x265: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Neutral" // @poff=89
0x269: Call2 0xe5

0x26a: Pop(1)
0x26b: Push((int) 513436)
0x26c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26d: Pop(1)
0x26e: @@@ ClearReplies(); Obj=0 // @poff=116
0x26f: Pop(0)
0x270: Push((int) 513437)
0x271: Push((int) 14674)
0x272: Push((int) 14673)
0x273: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x274: Pop(3)
0x275: Push((int) 535971)
0x276: Push((int) 37699)
0x277: Push((int) 37698)
0x278: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x279: Pop(3)
0x27a: Return(); Pop(0)

0x27b: Push((int) 37699)
0x27c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Neutral" // @poff=89
0x280: Call2 0xe5

0x281: Pop(1)
0x282: Push((int) 535972)
0x283: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x284: Pop(1)
0x285: @@@ ClearReplies(); Obj=0 // @poff=116
0x286: Pop(0)
0x287: Push((int) 535973)
0x288: Push((int) 37701)
0x289: Push((int) 37700)
0x28a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28b: Pop(3)
0x28c: Return(); Pop(0)

0x28d: Push((int) 37701)
0x28e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral" // @poff=89
0x292: Call2 0xe5

0x293: Pop(1)
0x294: Push((int) 535974)
0x295: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x296: Pop(1)
0x297: @@@ ClearReplies(); Obj=0 // @poff=116
0x298: Pop(0)
0x299: Push((int) 535975)
0x29a: Push((int) 14674)
0x29b: Push((int) 37702)
0x29c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29d: Pop(3)
0x29e: Return(); Pop(0)

0x29f: Push((int) 14674)
0x2a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a2: PushEmpty(string)
0x2a3: Stack[-1] = "Neutral" // @poff=89
0x2a4: Call2 0xe5

0x2a5: Pop(1)
0x2a6: Push((int) 513438)
0x2a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a8: Pop(1)
0x2a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x2aa: Pop(0)
0x2ab: Push((int) 513494)
0x2ac: Push((int) 14736)
0x2ad: Push((int) 14735)
0x2ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2af: Pop(3)
0x2b0: Push((int) 513491)
0x2b1: Push((int) 14732)
0x2b2: Push((int) 14731)
0x2b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b4: Pop(3)
0x2b5: Return(); Pop(0)

0x2b6: Push((int) 14732)
0x2b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2b9: PushEmpty(string)
0x2ba: Stack[-1] = "Neutral" // @poff=89
0x2bb: Call2 0xe5

0x2bc: Pop(1)
0x2bd: Push((int) 513492)
0x2be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bf: Pop(1)
0x2c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c1: Pop(0)
0x2c2: Push((int) 513493)
0x2c3: Push((int) 14678)
0x2c4: Push((int) 14733)
0x2c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: Push((int) 14736)
0x2c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Neutral" // @poff=89
0x2cd: Call2 0xe5

0x2ce: Pop(1)
0x2cf: Push((int) 513495)
0x2d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d1: Pop(1)
0x2d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d3: Pop(0)
0x2d4: Push((int) 513439)
0x2d5: Push((int) 14676)
0x2d6: Push((int) 14675)
0x2d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d8: Pop(3)
0x2d9: Push((int) 535976)
0x2da: Push((int) -1)
0x2db: Push((int) 37704)
0x2dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2dd: Pop(3)
0x2de: Return(); Pop(0)

0x2df: Push((int) 14676)
0x2e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = "Neutral" // @poff=89
0x2e4: Call2 0xe5

0x2e5: Pop(1)
0x2e6: Push((int) 513440)
0x2e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e8: Pop(1)
0x2e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ea: Pop(0)
0x2eb: Push((int) 513441)
0x2ec: Push((int) 14678)
0x2ed: Push((int) 14677)
0x2ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: Push((int) 14678)
0x2f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral" // @poff=89
0x2f6: Call2 0xe5

0x2f7: Pop(1)
0x2f8: Push((int) 513442)
0x2f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2fa: Pop(1)
0x2fb: @@@ ClearReplies(); Obj=0 // @poff=116
0x2fc: Pop(0)
0x2fd: Push((int) 513444)
0x2fe: Push((int) 14681)
0x2ff: Push((int) 14680)
0x300: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x301: Pop(3)
0x302: Return(); Pop(0)

0x303: Push((int) 14681)
0x304: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x306: PushEmpty(string)
0x307: Stack[-1] = "Neutral" // @poff=89
0x308: Call2 0xe5

0x309: Pop(1)
0x30a: Push((int) 513445)
0x30b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x30c: Pop(1)
0x30d: @@@ ClearReplies(); Obj=0 // @poff=116
0x30e: Pop(0)
0x30f: Push((int) 513446)
0x310: Push((int) -1)
0x311: Push((int) 14682)
0x312: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x313: Pop(3)
0x314: Return(); Pop(0)

0x315: Push((int) 37690)
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Neutral" // @poff=89
0x31a: Call2 0xe5

0x31b: Pop(1)
0x31c: Push((int) 535964)
0x31d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x31e: Pop(1)
0x31f: @@@ ClearReplies(); Obj=0 // @poff=116
0x320: Pop(0)
0x321: Push((int) 535965)
0x322: Push((int) 14684)
0x323: Push((int) 37691)
0x324: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x325: Pop(3)
0x326: Push((int) 535966)
0x327: Push((int) 37693)
0x328: Push((int) 37692)
0x329: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32a: Pop(3)
0x32b: Return(); Pop(0)

0x32c: Push((int) 37693)
0x32d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x32f: PushEmpty(string)
0x330: Stack[-1] = "Neutral" // @poff=89
0x331: Call2 0xe5

0x332: Pop(1)
0x333: Push((int) 535967)
0x334: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x335: Pop(1)
0x336: @@@ ClearReplies(); Obj=0 // @poff=116
0x337: Pop(0)
0x338: Push((int) 535968)
0x339: Push((int) 14684)
0x33a: Push((int) 37694)
0x33b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33c: Pop(3)
0x33d: Push((int) 535969)
0x33e: Push((int) -1)
0x33f: Push((int) 37696)
0x340: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x341: Pop(3)
0x342: Return(); Pop(0)

0x343: Push((int) 14684)
0x344: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x346: PushEmpty(string)
0x347: Stack[-1] = "Neutral" // @poff=89
0x348: Call2 0xe5

0x349: Pop(1)
0x34a: Push((int) 513448)
0x34b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34c: Pop(1)
0x34d: @@@ ClearReplies(); Obj=0 // @poff=116
0x34e: Pop(0)
0x34f: Push((int) 513449)
0x350: Push((int) 14686)
0x351: Push((int) 14685)
0x352: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x353: Pop(3)
0x354: Push((int) 513451)
0x355: Push((int) 14688)
0x356: Push((int) 14687)
0x357: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x358: Pop(3)
0x359: Return(); Pop(0)

0x35a: Push((int) 14688)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral" // @poff=89
0x35f: Call2 0xe5

0x360: Pop(1)
0x361: Push((int) 513452)
0x362: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x363: Pop(1)
0x364: @@@ ClearReplies(); Obj=0 // @poff=116
0x365: Pop(0)
0x366: Push((int) 513453)
0x367: Push((int) 14690)
0x368: Push((int) 14689)
0x369: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: Push((int) 14690)
0x36d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Neutral" // @poff=89
0x371: Call2 0xe5

0x372: Pop(1)
0x373: Push((int) 513454)
0x374: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x375: Pop(1)
0x376: @@@ ClearReplies(); Obj=0 // @poff=116
0x377: Pop(0)
0x378: Push((int) 513455)
0x379: Push((int) 14694)
0x37a: Push((int) 14691)
0x37b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37c: Pop(3)
0x37d: Push((int) 513456)
0x37e: Push((int) -1)
0x37f: Push((int) 14692)
0x380: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Push((int) 14686)
0x384: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral" // @poff=89
0x388: Call2 0xe5

0x389: Pop(1)
0x38a: Push((int) 513450)
0x38b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38c: Pop(1)
0x38d: @@@ ClearReplies(); Obj=0 // @poff=116
0x38e: Pop(0)
0x38f: Push((int) 513457)
0x390: Push((int) 14694)
0x391: Push((int) 14693)
0x392: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x393: Pop(3)
0x394: Return(); Pop(0)

0x395: Push((int) 14694)
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x398: PushEmpty(string)
0x399: Stack[-1] = "Neutral" // @poff=89
0x39a: Call2 0xe5

0x39b: Pop(1)
0x39c: Push((int) 513458)
0x39d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x39e: Pop(1)
0x39f: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a0: Pop(0)
0x3a1: Push((int) 513459)
0x3a2: Push((int) -1)
0x3a3: Push((int) 14696)
0x3a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a5: Pop(3)
0x3a6: Return(); Pop(0)

0x3a7: Push((int) 14661)
0x3a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3aa: PushEmpty(string)
0x3ab: Stack[-1] = "Neutral" // @poff=89
0x3ac: Call2 0xe5

0x3ad: Pop(1)
0x3ae: Push((int) 513425)
0x3af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b0: Pop(1)
0x3b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b2: Pop(0)
0x3b3: Push((int) 513426)
0x3b4: Push((int) 14663)
0x3b5: Push((int) 14662)
0x3b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b7: Pop(3)
0x3b8: Return(); Pop(0)

0x3b9: Push((int) 14663)
0x3ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = "Neutral" // @poff=89
0x3be: Call2 0xe5

0x3bf: Pop(1)
0x3c0: Push((int) 513427)
0x3c1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c2: Pop(1)
0x3c3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c4: Pop(0)
0x3c5: Push((int) 535957)
0x3c6: Push((int) 37683)
0x3c7: Push((int) 37682)
0x3c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Push((int) 37683)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Neutral" // @poff=89
0x3d0: Call2 0xe5

0x3d1: Pop(1)
0x3d2: Push((int) 535958)
0x3d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d4: Pop(1)
0x3d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d6: Pop(0)
0x3d7: Push((int) 513428)
0x3d8: Push((int) 14665)
0x3d9: Push((int) 14664)
0x3da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3db: Pop(3)
0x3dc: Push((int) 535959)
0x3dd: Push((int) 37685)
0x3de: Push((int) 37684)
0x3df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e0: Pop(3)
0x3e1: Return(); Pop(0)

0x3e2: Push((int) 37685)
0x3e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3e5: PushEmpty(string)
0x3e6: Stack[-1] = "Neutral" // @poff=89
0x3e7: Call2 0xe5

0x3e8: Pop(1)
0x3e9: Push((int) 535960)
0x3ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3eb: Pop(1)
0x3ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ed: Pop(0)
0x3ee: Push((int) 535962)
0x3ef: Push((int) 14665)
0x3f0: Push((int) 37687)
0x3f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f2: Pop(3)
0x3f3: Push((int) 535963)
0x3f4: Push((int) -1)
0x3f5: Push((int) 37689)
0x3f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f7: Pop(3)
0x3f8: Return(); Pop(0)

0x3f9: Push((int) 14665)
0x3fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3fc: PushEmpty(string)
0x3fd: Stack[-1] = "Neutral" // @poff=89
0x3fe: Call2 0xe5

0x3ff: Pop(1)
0x400: Push((int) 513429)
0x401: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x402: Pop(1)
0x403: @@@ ClearReplies(); Obj=0 // @poff=116
0x404: Pop(0)
0x405: Push((int) 513430)
0x406: Push((int) 14667)
0x407: Push((int) 14666)
0x408: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x409: Pop(3)
0x40a: Push((int) 535961)
0x40b: Push((int) -1)
0x40c: Push((int) 37686)
0x40d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40e: Pop(3)
0x40f: Return(); Pop(0)

0x410: Push((int) 14667)
0x411: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral" // @poff=89
0x415: Call2 0xe5

0x416: Pop(1)
0x417: Push((int) 513431)
0x418: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x419: Pop(1)
0x41a: @@@ ClearReplies(); Obj=0 // @poff=116
0x41b: Pop(0)
0x41c: Push((int) 513432)
0x41d: Push((int) -1)
0x41e: Push((int) 14668)
0x41f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x420: Pop(3)
0x421: Return(); Pop(0)

0x422: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x423: PushEmpty(bool)
0x424: Call2 0x808

0x425: Pop(0)
0x426: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x427: @ lshStopAnimation()
0x428: Pop(0)
0x429: GOTO 0x42c

0x42a: @ StopAnimation()
0x42b: Pop(0)
0x42c: Return(); Pop(0)

0x42d: GOTO 0xfc

0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(int, object)
0x431: Stack[-3] = Stack[-1]
0x432: Push(-2, 1); TaskCall(1)
0x433: Call2 0xd

0x434: Pop(-2, 1); TaskReturn
0x435: Pop(2)
0x436: Return(); Pop(0)

0x437: PushEmpty()
0x438: Call2 0x460

0x439: Pop(0)
0x43a: Return(); Pop(0)

0x43b: PushEmpty(bool, bool)
0x43c: Push("cleanup") // @poff=156
0x43d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x43f: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x440: @ IsLoaded(Stack[-1])
0x441: Pop(0)
0x442: Pop(0); Push((bool) Stack[-1] == 0)
0x443: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x444: PushEmpty(object)
0x445: Call2 0x684

0x446: Pop(0)
0x447: @ RemoveActor(Stack[-1])
0x448: Pop(1)
0x449: GOTO 0x44e

0x44a: Push("restore") // @poff=172
0x44b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x44e: Return(); Pop(2)

0x44f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x450: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x451: PushEmpty(object)
0x452: Call2 0x684

0x453: Pop(0)
0x454: @ RemoveActor(Stack[-1])
0x455: Pop(1)
0x456: @ Hold()
0x457: Pop(0)
0x458: PushEmpty()
0x459: Call2 0x4d1

0x45a: Pop(0)
0x45b: Return(); Pop(0)

0x45c: PushEmpty()
0x45d: Call2 0x4e0

0x45e: Pop(0)
0x45f: Return(); Pop(0)

0x460: PushEmpty(bool)
0x461: Call2 0x57d

0x462: Pop(0)
0x463: Pop(1); Push((bool) Stack[-1] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x465: PushEmpty()
0x466: Push(-0, 0); TaskCall(0)
0x467: Call2 0x0

0x468: Pop(-0, 0); TaskReturn
0x469: Pop(0)
0x46a: PushEmpty()
0x46b: Call2 0x45c

0x46c: Pop(0)
0x46d: @ GetDirection(Stack[-0]T)
0x46e: Pop(0)
0x46f: PushEmpty()
0x470: Call2 0x516

0x471: Pop(0)
0x472: GOTO 0x46f

0x473: Return(); Pop(0)

0x474: PushEmpty(object, object)
0x475: Push("player") // @poff=188
0x476: @ FindActor(Stack[-2], Stack[-1])
0x477: Pop(1)
0x478: Pop(0); Push((bool) Stack[-1] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-3] = (bool) 0
0x47b: Return(); Pop(2)

0x47c: PushEmpty(bool, object)
0x47d: Stack[-3] = Stack[-1]
0x47e: Call2 0x574

0x47f: Stack[-2] = Stack[-5]
0x480: Pop(2)
0x481: Return(); Pop(2)

0x482: Stack[-1] = 0
0x483: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x484: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x485: @ RotateAsync(Stack[-2], Stack[-1])
0x486: Pop(2)
0x487: Return(); Pop(0)

0x488: PushEmpty(object, bool, object, bool)
0x489: Push("player") // @poff=188
0x48a: @ FindActor(Stack[-3], Stack[-1])
0x48b: Pop(1)
0x48c: Pop(0); Push((bool) Stack[-2] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-5] = (bool) 0
0x48f: Return(); Pop(4)

0x490: PushEmpty(float, object)
0x491: Stack[-4] = Stack[-1]
0x492: Call2 0x562

0x493: Pop(1)
0x494: Push((float)90000.0)
0x495: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: Stack[-5] = (bool) 0
0x498: Return(); Pop(4)

0x499: @ CanSee(Stack[-1], Stack[-2])
0x49a: Pop(0)
0x49b: Stack[-1] = Stack[-5]
0x49c: Return(); Pop(4)

0x49d: Stack[-2] = 0
0x49e: PushEmpty(float, float)
0x49f: Push((int) 8)
0x4a0: Push((int) 16)
0x4a1: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(2)
0x4a3: Push((int) 10)
0x4a4: @ SetTimer(Stack[-1], Stack[-2])
0x4a5: Pop(1)
0x4a6: Return(); Pop(2)

0x4a7: Push((int) 10)
0x4a8: @ KillTimer(Stack[-1])
0x4a9: Pop(1)
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty()
0x4ac: Push((int) 10)
0x4ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4af: PushEmpty()
0x4b0: Call2 0x4a7

0x4b1: Pop(0)
0x4b2: PushEmpty(bool)
0x4b3: Stack[-1] = (bool) 0
0x4b4: PushEmpty(bool)
0x4b5: Call2 0x57d

0x4b6: Pop(0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: PushEmpty(bool)
0x4b9: Call2 0x488

0x4ba: Pop(0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: Stack[-1] = (bool) 1
0x4bd: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4be: PushEmpty(bool)
0x4bf: Call2 0x474

0x4c0: Pop(0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c2: PushEmpty(bool, object)
0x4c3: PushEmpty(object)
0x4c4: Call2 0x684

0x4c5: Stack[-1] = Stack[-2]
0x4c6: Pop(1)
0x4c7: Call2 0x611

0x4c8: Pop(2)
0x4c9: GOTO 0x4d0

0x4ca: PushEmpty()
0x4cb: Call2 0x483

0x4cc: Pop(0)
0x4cd: PushEmpty()
0x4ce: Call2 0x49e

0x4cf: Pop(0)
0x4d0: Return(); Pop(0)

0x4d1: PushEmpty()
0x4d2: Call2 0x55d

0x4d3: Pop(0)
0x4d4: PushEmpty()
0x4d5: Call2 0x4a7

0x4d6: Pop(0)
0x4d7: @ lshStopSpeech()
0x4d8: Pop(0)
0x4d9: @ lshStopAnimation()
0x4da: Pop(0)
0x4db: @ StopAsync()
0x4dc: Pop(0)
0x4dd: @ Hold()
0x4de: Pop(0)
0x4df: Return(); Pop(0)

0x4e0: @ StopGroup0()
0x4e1: Pop(0)
0x4e2: PushEmpty()
0x4e3: Call2 0x4a7

0x4e4: Pop(0)
0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Neutral" // @poff=89
0x4e7: Call2 0x661

0x4e8: Pop(1)
0x4e9: PushEmpty()
0x4ea: Call2 0x49e

0x4eb: Pop(0)
0x4ec: Return(); Pop(0)

0x4ed: PushEmpty()
0x4ee: Push(Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f0: PushEmpty()
0x4f1: Call2 0x49e

0x4f2: Pop(0)
0x4f3: GOTO 0x4f8

0x4f4: PushEmpty(string)
0x4f5: Stack[-1] = "Neutral" // @poff=89
0x4f6: Call2 0x661

0x4f7: Pop(1)
0x4f8: Return(); Pop(0)

0x4f9: PushEmpty(bool, bool)
0x4fa: @ IsOverrideActive(Stack[-1])
0x4fb: Pop(0)
0x4fc: Pop(0); Push((bool) Stack[-1] == 0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x4fe: EventDisable(0)
0x4ff: PushEmpty()
0x500: Call2 0x55d

0x501: Pop(0)
0x502: PushEmpty(bool, object)
0x503: Stack[-5] = Stack[-1]
0x504: Call2 0x574

0x505: Pop(2)
0x506: EventEnable(0)
0x507: PushEmpty(object)
0x508: Stack[-4] = Stack[-1]
0x509: Call2 0x42f

0x50a: Pop(1)
0x50b: PushEmpty(string)
0x50c: Stack[-1] = "Neutral" // @poff=89
0x50d: Call2 0x661

0x50e: Pop(1)
0x50f: PushEmpty()
0x510: Call2 0x4a7

0x511: Pop(0)
0x512: PushEmpty()
0x513: Call2 0x49e

0x514: Pop(0)
0x515: Return(); Pop(2)

0x516: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x517: @ WaitForAnimEnd()
0x518: Pop(0)
0x519: PushEmpty(bool)
0x51a: Call2 0x57d

0x51b: Pop(0)
0x51c: Pop(1); Push((bool) Stack[-1] == 0)
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: Return(); Pop(12)

0x51f: PushEmpty(int)
0x520: Call2 0x6d5

0x521: Stack[-1] = Stack[-7]
0x522: Pop(1)
0x523: Stack[-5] = (int) 0
0x524: PushEmpty(bool)
0x525: Stack[-1] = (bool) 0
0x526: Push((int) 5)
0x527: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x529: PushEmpty(bool)
0x52a: Call2 0x57d

0x52b: Pop(0)
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Stack[-1] = (bool) 1
0x52e: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x52f: Pop(0); Push((bool) Stack[-6] == 0)
0x530: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x531: Push((int) 3)
0x532: @ Sleep(Stack[-1], Stack[-5])
0x533: Pop(1)
0x534: Pop(0); Push((bool) Stack[-4] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x536: GOTO 0x558

0x537: GOTO 0x54d

0x538: @ irand(Stack[-3], Stack[-6])
0x539: Pop(0)
0x53a: Push((int) 5)
0x53b: @ irand(Stack[-3], Stack[-1])
0x53c: Pop(1)
0x53d: Push((int) 0)
0x53e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x540: Stack[-3] = (int) 0
0x541: Push("all") // @poff=138
0x542: PushEmpty(string, int)
0x543: Stack[-6] = Stack[-1]
0x544: Call2 0x6ce

0x545: Pop(1)
0x546: @ PlayAnimation(Stack[-2], Stack[-1])
0x547: Pop(2)
0x548: @ WaitForAnimEnd(Stack[-1])
0x549: Pop(0)
0x54a: Pop(0); Push((bool) Stack[-1] == 0)
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: GOTO 0x558

0x54d: PushEmpty(bool)
0x54e: Call2 0x55b

0x54f: Pop(0)
0x550: Pop(1); Push((bool) Stack[-1] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: GOTO 0x558

0x553: @ ResetAAS()
0x554: Pop(0)
0x555: Push((int) 1)
0x556: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x557: GOTO 0x524

0x558: @ ResetAAS()
0x559: Pop(0)
0x55a: Return(); Pop(12)

0x55b: Stack[-1] = (bool) 1
0x55c: Return(); Pop(0)

0x55d: @ StopAnimation()
0x55e: Pop(0)
0x55f: @ StopGroup0()
0x560: Pop(0)
0x561: Return(); Pop(0)

0x562: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x563: @ GetPosition(Stack[-3])
0x564: Pop(0)
0x565: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x566: Pop(0)
0x567: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x568: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x569: Return(); Pop(6)

0x56a: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x56b: @ GetPosition(Stack[-3])
0x56c: Pop(0)
0x56d: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x56e: Push(CvectorIndex(Stack[-2], 0))
0x56f: Push(CvectorIndex(Stack[-3], 2))
0x570: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x571: Pop(2)
0x572: Stack[-1] = Stack[-8]
0x573: Return(); Pop(6)

0x574: PushEmpty(cvector, cvector)
0x575: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x576: Pop(0)
0x577: PushEmpty(bool, cvector)
0x578: Stack[-3] = Stack[-1]
0x579: Call2 0x56a

0x57a: Stack[-2] = Stack[-6]
0x57b: Pop(2)
0x57c: Return(); Pop(2)

0x57d: PushEmpty(bool, bool)
0x57e: @ IsLoaded(Stack[-1])
0x57f: Pop(0)
0x580: Stack[-1] = Stack[-3]
0x581: Return(); Pop(2)

0x582: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x583: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x584: Pop(0)
0x585: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x586: Pop(0)
0x587: Push(CvectorIndex(Stack[-8], 1))
0x588: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x589: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x58a: @ GetPosition(Stack[-7])
0x58b: Pop(0)
0x58c: @ GetEyesHeight(Stack[-9])
0x58d: Pop(0)
0x58e: Push(CvectorIndex(Stack[-7], 1))
0x58f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x590: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x591: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x592: Push(CvectorIndex(Stack[-6], 1))
0x593: Stack[-1] = (int) 0
0x594: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x595: Pop(0); Push(Stack[-6] | Stack[-6]);
0x596: Pop(1); Push(Sqrt(Stack[-1]))
0x597: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x598: Stack[-5] = -Stack[-6]; Pop(0);
0x599: Pop(0); Push(Stack[-6] * Stack[-19]);
0x59a: PushEmpty(cvector, cvector)
0x59b: Push([0.0, 1.0, 0.0])
0x59c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x59d: Call2 0x68a

0x59e: Pop(1)
0x59f: Push((int) 25)
0x5a0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5a2: Push([0.0, 10.0, 0.0])
0x5a3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x5a4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x5a5: @ IsOverrideActive(Stack[-2])
0x5a6: Pop(0)
0x5a7: Push(Stack[-2])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-21] = (bool) 0
0x5aa: Return(); Pop(18)

0x5ab: @ StopWorld()
0x5ac: Pop(0)
0x5ad: @ CameraTransit(Stack[-3], Stack[-5])
0x5ae: Pop(0)
0x5af: Push(CvectorIndex(Stack[-4], 0))
0x5b0: Push(CvectorIndex(Stack[-5], 2))
0x5b1: @ Rotate(Stack[-2], Stack[-1])
0x5b2: Pop(2)
0x5b3: PushEmpty(bool)
0x5b4: Call2 0x808

0x5b5: Pop(0)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b7: GOTO 0x5c0

0x5b8: Push("head") // @poff=228
0x5b9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5ba: Pop(1)
0x5bb: Push(Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bd: Push("head") // @poff=228
0x5be: @ LookAsyncCamera(Stack[-1])
0x5bf: Pop(1)
0x5c0: @ CameraWaitForPlayFinish()
0x5c1: Pop(0)
0x5c2: @ ResumeWorld()
0x5c3: Pop(0)
0x5c4: Stack[-21] = (bool) 1
0x5c5: Return(); Pop(18)

0x5c6: PushEmpty(bool, bool)
0x5c7: @ CameraSwitchToNormal()
0x5c8: Pop(0)
0x5c9: PushEmpty(bool)
0x5ca: Call2 0x808

0x5cb: Pop(0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cd: GOTO 0x5d6

0x5ce: Push("head") // @poff=228
0x5cf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5d0: Pop(1)
0x5d1: Push(Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d3: Push("head") // @poff=228
0x5d4: @ UnlookAsync(Stack[-1])
0x5d5: Pop(1)
0x5d6: Return(); Pop(2)

0x5d7: PushEmpty(int, int, int, int)
0x5d8: Push("voice_common") // @poff=238
0x5d9: @ GetVariable(Stack[-1], Stack[-3])
0x5da: Pop(1)
0x5db: Push(Stack[-2])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5dd: PushEmpty(bool, object)
0x5de: Stack[-7] = Stack[-1]
0x5df: Call2 0x611

0x5e0: Pop(1)
0x5e1: Pop(1); Push((bool) Stack[-1] == 0)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e3: PushEmpty(bool, object)
0x5e4: Stack[-7] = Stack[-1]
0x5e5: Call2 0x636

0x5e6: Pop(1)
0x5e7: Pop(1); Push((bool) Stack[-1] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-6] = (bool) 0
0x5ea: Return(); Pop(4)

0x5eb: Push((int) 2)
0x5ec: @ irand(Stack[-2], Stack[-1])
0x5ed: Pop(1)
0x5ee: Push(Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f0: Push("voice_common") // @poff=238
0x5f1: Push((int) 1)
0x5f2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5f3: Push((int) 3)
0x5f4: Pop(2); Push(Stack[-2] % Stack[-1]);
0x5f5: @ SetVariable(Stack[-2], Stack[-1])
0x5f6: Pop(2)
0x5f7: GOTO 0x5fc

0x5f8: Push("voice_common") // @poff=238
0x5f9: Push((int) 0)
0x5fa: @ SetVariable(Stack[-2], Stack[-1])
0x5fb: Pop(2)
0x5fc: GOTO 0x60f

0x5fd: PushEmpty(bool, object)
0x5fe: Stack[-7] = Stack[-1]
0x5ff: Call2 0x636

0x600: Pop(1)
0x601: Pop(1); Push((bool) Stack[-1] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x603: PushEmpty(bool, object)
0x604: Stack[-7] = Stack[-1]
0x605: Call2 0x611

0x606: Pop(1)
0x607: Pop(1); Push((bool) Stack[-1] == 0)
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: Stack[-6] = (bool) 0
0x60a: Return(); Pop(4)

0x60b: Push("voice_common") // @poff=238
0x60c: Push((int) 1)
0x60d: @ SetVariable(Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: Stack[-6] = (bool) 1
0x610: Return(); Pop(4)

0x611: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x612: Stack[-5] = "c" // @poff=264
0x613: Stack[-4] = (int) 0
0x614: Push((int) 1)
0x615: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x616: Push((int) 1)
0x617: Pop(1); Push(Stack[-5] + Stack[-1]);
0x618: Pop(1); Push(Stack[-6] + Stack[-1]);
0x619: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x61a: Pop(1)
0x61b: Pop(0); Push((bool) Stack[-3] == 0)
0x61c: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61d: GOTO 0x621

0x61e: Push((int) 1)
0x61f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x620: GOTO 0x614

0x621: Pop(0); Push((bool) Stack[-4] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-12] = (bool) 0
0x624: Return(); Pop(10)

0x625: Stack[-2] = (int) 0
0x626: Push((int) 1)
0x627: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x629: @ irand(Stack[-2], Stack[-4])
0x62a: Pop(0)
0x62b: Push((int) 1)
0x62c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x62d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x62e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x62f: Pop(1)
0x630: PushEmpty(bool, string)
0x631: Stack[-3] = Stack[-1]
0x632: Call2 0x66e

0x633: Stack[-2] = Stack[-14]
0x634: Pop(2)
0x635: Return(); Pop(10)

0x636: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x637: Push("d") // @poff=234
0x638: PushEmpty(int)
0x639: Call2 0x6c5

0x63a: Pop(0)
0x63b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x63c: Push("m") // @poff=292
0x63d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x63e: Stack[-4] = (int) 0
0x63f: Push((int) 1)
0x640: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x641: Push((int) 1)
0x642: Pop(1); Push(Stack[-5] + Stack[-1]);
0x643: Pop(1); Push(Stack[-6] + Stack[-1]);
0x644: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x645: Pop(1)
0x646: Pop(0); Push((bool) Stack[-3] == 0)
0x647: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x648: GOTO 0x64c

0x649: Push((int) 1)
0x64a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x64b: GOTO 0x63f

0x64c: Pop(0); Push((bool) Stack[-4] == 0)
0x64d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64e: Stack[-12] = (bool) 0
0x64f: Return(); Pop(10)

0x650: Stack[-2] = (int) 0
0x651: Push((int) 1)
0x652: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: @ irand(Stack[-2], Stack[-4])
0x655: Pop(0)
0x656: Push((int) 1)
0x657: Pop(1); Push(Stack[-3] + Stack[-1]);
0x658: Pop(1); Push(Stack[-6] + Stack[-1]);
0x659: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x65a: Pop(1)
0x65b: PushEmpty(bool, string)
0x65c: Stack[-3] = Stack[-1]
0x65d: Call2 0x66e

0x65e: Stack[-2] = Stack[-14]
0x65f: Pop(2)
0x660: Return(); Pop(10)

0x661: PushEmpty(float, float, float, float)
0x662: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x663: Pop(0)
0x664: Push((bool) 0)
0x665: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(1)
0x667: Return(); Pop(4)

0x668: PushEmpty(float, float, float, float)
0x669: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x66a: Pop(0)
0x66b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x66c: Pop(0)
0x66d: Return(); Pop(4)

0x66e: PushEmpty(bool, bool)
0x66f: PushEmpty(bool)
0x670: Call2 0x808

0x671: Pop(0)
0x672: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x673: @ lshHasSpeech(Stack[-1], Stack[-3])
0x674: Pop(0)
0x675: Push(Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x677: @ lshPlaySpeech(Stack[-3])
0x678: Pop(0)
0x679: Stack[-4] = (bool) 1
0x67a: Return(); Pop(2)

0x67b: Stack[-4] = (bool) 0
0x67c: Return(); Pop(2)

0x67d: PushEmpty(bool)
0x67e: Call2 0x808

0x67f: Pop(0)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: @ lshStopSpeech()
0x682: Pop(0)
0x683: Return(); Pop(0)

0x684: PushEmpty(object, object)
0x685: @ self(Stack[-1])
0x686: Pop(0)
0x687: Stack[-1] = Stack[-3]
0x688: Return(); Pop(2)

0x689: Stack[-1] = 0
0x68a: PushEmpty(float, float)
0x68b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x68c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x68d: Push((float)9.999999974752427e-07)
0x68e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-4] = [0.0, 0.0, 0.0]
0x691: Return(); Pop(2)

0x692: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x693: Return(); Pop(2)

0x694: PushEmpty(int, int)
0x695: @ GetVariable(Stack[-3], Stack[-1])
0x696: Pop(0)
0x697: Stack[-1] = Stack[-4]
0x698: Return(); Pop(2)

0x699: PushEmpty(object, object)
0x69a: @ CreateIntVector(Stack[-1])
0x69b: Pop(0)
0x69c: @@ add(Stack[-4]); Obj=1 // @poff=296
0x69d: Pop(0)
0x69e: @@ add(Stack[-3]); Obj=1 // @poff=296
0x69f: Pop(0)
0x6a0: Push((int) 3)
0x6a1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6a2: Pop(1)
0x6a3: Return(); Pop(2)

0x6a4: Stack[-1] = 0
0x6a5: PushEmpty(int, int, bool, int, int, bool)
0x6a6: @@ GetItemID(Stack[-3]); Obj=8 // @poff=300
0x6a7: Pop(0)
0x6a8: Push("Category") // @poff=310
0x6a9: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x6aa: Pop(1)
0x6ab: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=328
0x6ac: Pop(0)
0x6ad: Pop(0); Push((bool) Stack[-1] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6af: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=336
0x6b0: Pop(0)
0x6b1: GOTO 0x6b7

0x6b2: PushEmpty(int, int)
0x6b3: Stack[-5] = Stack[-2]
0x6b4: Stack[-9] = Stack[-1]
0x6b5: Call2 0x699

0x6b6: Pop(2)
0x6b7: Return(); Pop(6)

0x6b8: PushEmpty(object, object)
0x6b9: @ CreateInvItem(Stack[-1])
0x6ba: Pop(0)
0x6bb: @@ SetItemName(Stack[-4]); Obj=1 // @poff=346
0x6bc: Pop(0)
0x6bd: PushEmpty(object, object, int)
0x6be: Stack[-8] = Stack[-3]
0x6bf: Stack[-4] = Stack[-2]
0x6c0: Stack[-6] = Stack[-1]
0x6c1: Call2 0x6a5

0x6c2: Pop(3)
0x6c3: Return(); Pop(2)

0x6c4: Stack[-1] = 0
0x6c5: PushEmpty(float, float)
0x6c6: @ GetGameTime(Stack[-1])
0x6c7: Pop(0)
0x6c8: Push((int) 1)
0x6c9: PushEmpty(int)
0x6ca: Push((int) 24)
0x6cb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6cc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6cd: Return(); Pop(2)

0x6ce: PushEmpty(string, string)
0x6cf: Stack[-1] = "idle" // @poff=146
0x6d0: Push(Stack[-3])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6d3: Stack[-1] = Stack[-4]
0x6d4: Return(); Pop(2)

0x6d5: PushEmpty(int, bool, int, bool)
0x6d6: Stack[-2] = (int) 0
0x6d7: Push("all") // @poff=138
0x6d8: PushEmpty(string, int)
0x6d9: Stack[-5] = Stack[-1]
0x6da: Call2 0x6ce

0x6db: Pop(1)
0x6dc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6dd: Pop(2)
0x6de: Pop(0); Push((bool) Stack[-1] == 0)
0x6df: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6e0: GOTO 0x6e4

0x6e1: Push((int) 1)
0x6e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6e3: GOTO 0x6d7

0x6e4: Stack[-2] = Stack[-5]
0x6e5: Return(); Pop(4)

0x6e6: PushEmpty()
0x6e7: Push("playsound") // @poff=358
0x6e8: Push("giveitem") // @poff=378
0x6e9: @ TriggerWorld(Stack[-2], Stack[-1])
0x6ea: Pop(2)
0x6eb: Return(); Pop(0)

0x6ec: PushEmpty()
0x6ed: Push("ood8Burah2") // @poff=396
0x6ee: Push((int) 1)
0x6ef: @ SetVariable(Stack[-2], Stack[-1])
0x6f0: Pop(2)
0x6f1: Return(); Pop(0)

0x6f2: PushEmpty()
0x6f3: Push("ood8Burah3") // @poff=418
0x6f4: Push((int) 1)
0x6f5: @ SetVariable(Stack[-2], Stack[-1])
0x6f6: Pop(2)
0x6f7: Return(); Pop(0)

0x6f8: PushEmpty()
0x6f9: Push("d8q03") // @poff=440
0x6fa: Push((int) 1)
0x6fb: @ SetVariable(Stack[-2], Stack[-1])
0x6fc: Pop(2)
0x6fd: PushEmpty()
0x6fe: Call2 0x792

0x6ff: Pop(0)
0x700: PushEmpty()
0x701: Call2 0x79f

0x702: Pop(0)
0x703: Return(); Pop(0)

0x704: PushEmpty()
0x705: Push("d8q03") // @poff=440
0x706: Push((int) 1000)
0x707: @ SetVariable(Stack[-2], Stack[-1])
0x708: Pop(2)
0x709: PushEmpty()
0x70a: Call2 0x7ac

0x70b: Pop(0)
0x70c: Return(); Pop(0)

0x70d: PushEmpty()
0x70e: Push("burah gives blood") // @poff=452
0x70f: @ Trace(Stack[-1])
0x710: Pop(1)
0x711: PushEmpty(object, string, int)
0x712: Stack[-5] = Stack[-3]
0x713: Stack[-2] = "d8q03_blood" // @poff=488
0x714: Stack[-1] = (int) 1
0x715: Call2 0x6b8

0x716: Pop(3)
0x717: Return(); Pop(0)

0x718: PushEmpty()
0x719: Push("d8q03") // @poff=440
0x71a: Push((int) -1)
0x71b: @ SetVariable(Stack[-2], Stack[-1])
0x71c: Pop(2)
0x71d: PushEmpty()
0x71e: Call2 0x7b9

0x71f: Pop(0)
0x720: Return(); Pop(0)

0x721: PushEmpty()
0x722: Push("burah gives serum") // @poff=512
0x723: @ Trace(Stack[-1])
0x724: Pop(1)
0x725: PushEmpty(object, string, int)
0x726: Stack[-5] = Stack[-3]
0x727: Stack[-2] = "burah_serum" // @poff=548
0x728: Stack[-1] = (int) 1
0x729: Call2 0x6b8

0x72a: Pop(3)
0x72b: Return(); Pop(0)

0x72c: PushEmpty()
0x72d: Push("ood8Burah1") // @poff=572
0x72e: Push((int) 1)
0x72f: @ SetVariable(Stack[-2], Stack[-1])
0x730: Pop(2)
0x731: Return(); Pop(0)

0x732: PushEmpty()
0x733: PushEmpty(int, string)
0x734: Stack[-1] = "d8q04" // @poff=594
0x735: Call2 0x694

0x736: Pop(1)
0x737: Push((int) 1)
0x738: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x73a: Stack[-2] = (bool) 1
0x73b: Return(); Pop(0)

0x73c: Stack[-2] = (bool) 0
0x73d: Return(); Pop(0)

0x73e: PushEmpty()
0x73f: PushEmpty(int, string)
0x740: Stack[-1] = "ood8Burah2" // @poff=396
0x741: Call2 0x694

0x742: Pop(1)
0x743: Push((int) 0)
0x744: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x746: Stack[-2] = (bool) 1
0x747: Return(); Pop(0)

0x748: Stack[-2] = (bool) 0
0x749: Return(); Pop(0)

0x74a: PushEmpty()
0x74b: PushEmpty(int, string)
0x74c: Stack[-1] = "d8BurahLetter" // @poff=606
0x74d: Call2 0x694

0x74e: Pop(1)
0x74f: Push((int) 0)
0x750: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-2] = (bool) 1
0x753: Return(); Pop(0)

0x754: Stack[-2] = (bool) 0
0x755: Return(); Pop(0)

0x756: PushEmpty()
0x757: PushEmpty(int, string)
0x758: Stack[-1] = "ood8Burah3" // @poff=418
0x759: Call2 0x694

0x75a: Pop(1)
0x75b: Push((int) 0)
0x75c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x75d: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x75e: Stack[-2] = (bool) 1
0x75f: Return(); Pop(0)

0x760: Stack[-2] = (bool) 0
0x761: Return(); Pop(0)

0x762: PushEmpty()
0x763: PushEmpty(int, string)
0x764: Stack[-1] = "d8q03" // @poff=440
0x765: Call2 0x694

0x766: Pop(1)
0x767: Push((int) 0)
0x768: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x769: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76a: Stack[-2] = (bool) 1
0x76b: Return(); Pop(0)

0x76c: Stack[-2] = (bool) 0
0x76d: Return(); Pop(0)

0x76e: PushEmpty()
0x76f: PushEmpty(int, string)
0x770: Stack[-1] = "microscope_d8q03_blood" // @poff=634
0x771: Call2 0x694

0x772: Pop(1)
0x773: Push((int) 1)
0x774: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x776: Stack[-2] = (bool) 1
0x777: Return(); Pop(0)

0x778: Stack[-2] = (bool) 0
0x779: Return(); Pop(0)

0x77a: PushEmpty()
0x77b: PushEmpty(int, string)
0x77c: Stack[-1] = "d8q03" // @poff=440
0x77d: Call2 0x694

0x77e: Pop(1)
0x77f: Push((int) 1)
0x780: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: Stack[-2] = (bool) 1
0x783: Return(); Pop(0)

0x784: Stack[-2] = (bool) 0
0x785: Return(); Pop(0)

0x786: PushEmpty()
0x787: PushEmpty(int, string)
0x788: Stack[-1] = "ood8Burah1" // @poff=572
0x789: Call2 0x694

0x78a: Pop(1)
0x78b: Push((int) 0)
0x78c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78e: Stack[-2] = (bool) 1
0x78f: Return(); Pop(0)

0x790: Stack[-2] = (bool) 0
0x791: Return(); Pop(0)

0x792: PushEmpty(object, object)
0x793: Push((int) 124)
0x794: Push((int) 2)
0x795: Push((int) 513763)
0x796: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x797: Pop(3)
0x798: PushEmpty(bool, object, int)
0x799: Stack[-4] = Stack[-2]
0x79a: Stack[-1] = (int) -1
0x79b: Call2 0x7d3

0x79c: Pop(3)
0x79d: Return(); Pop(2)

0x79e: Stack[-1] = 0
0x79f: PushEmpty(object, object)
0x7a0: Push((int) 770)
0x7a1: Push((int) 2)
0x7a2: Push((int) 540199)
0x7a3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7a4: Pop(3)
0x7a5: PushEmpty(bool, object, int)
0x7a6: Stack[-4] = Stack[-2]
0x7a7: Stack[-1] = (int) 124
0x7a8: Call2 0x7d3

0x7a9: Pop(3)
0x7aa: Return(); Pop(2)

0x7ab: Stack[-1] = 0
0x7ac: PushEmpty(object, object)
0x7ad: Push((int) 125)
0x7ae: Push((int) 2)
0x7af: Push((int) 513764)
0x7b0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7b1: Pop(3)
0x7b2: PushEmpty(bool, object, int)
0x7b3: Stack[-4] = Stack[-2]
0x7b4: Stack[-1] = (int) 124
0x7b5: Call2 0x7d3

0x7b6: Pop(3)
0x7b7: Return(); Pop(2)

0x7b8: Stack[-1] = 0
0x7b9: PushEmpty(object, object)
0x7ba: Push((int) 126)
0x7bb: Push((int) 2)
0x7bc: Push((int) 513765)
0x7bd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: PushEmpty(bool, object, int)
0x7c0: Stack[-4] = Stack[-2]
0x7c1: Stack[-1] = (int) 124
0x7c2: Call2 0x7d3

0x7c3: Pop(3)
0x7c4: Return(); Pop(2)

0x7c5: Stack[-1] = 0
0x7c6: PushEmpty(object, object)
0x7c7: @ GetDiaryRoot(Stack[-1])
0x7c8: Pop(0)
0x7c9: Pop(0); Push((bool) Stack[-1] == 0)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cb: Push("Can't retrieve diary root") // @poff=680
0x7cc: @ Trace(Stack[-1])
0x7cd: Pop(1)
0x7ce: Stack[-3] = (bool) 0
0x7cf: Return(); Pop(2)

0x7d0: Stack[-1] = Stack[-3]
0x7d1: Return(); Pop(2)

0x7d2: Stack[-1] = 0
0x7d3: PushEmpty(object, object, int, object, object, int)
0x7d4: PushEmpty(object)
0x7d5: Call2 0x7c6

0x7d6: Stack[-1] = Stack[-4]
0x7d7: Pop(1)
0x7d8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=732
0x7d9: Pop(0)
0x7da: Pop(0); Push((bool) Stack[-2] == 0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7dc: Push("Can't find diary parent with id: ") // @poff=737
0x7dd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7de: @ Trace(Stack[-1])
0x7df: Pop(1)
0x7e0: Stack[-9] = (bool) 0
0x7e1: Return(); Pop(6)

0x7e2: @@ AddChild(Stack[-8]); Obj=2 // @poff=805
0x7e3: Pop(0)
0x7e4: Push((int) 7)
0x7e5: @ SendWorldWndMessage(Stack[-1])
0x7e6: Pop(1)
0x7e7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=814
0x7e8: Pop(0)
0x7e9: @ SetDiarySection(Stack[-1])
0x7ea: Pop(0)
0x7eb: Stack[-9] = (bool) 0
0x7ec: Return(); Pop(6)

0x7ed: Stack[-2] = 0
0x7ee: Stack[-3] = 0
0x7ef: PushEmpty(int, int)
0x7f0: Push("branch") // @poff=826
0x7f1: @ GetVariable(Stack[-1], Stack[-2])
0x7f2: Pop(1)
0x7f3: Push((int) 0)
0x7f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f6: Stack[-3] = (int) 1
0x7f7: Return(); Pop(2)

0x7f8: GOTO 0x7fe

0x7f9: Push((int) 1)
0x7fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fc: Stack[-3] = (int) 2
0x7fd: Return(); Pop(2)

0x7fe: Stack[-3] = (int) 3
0x7ff: Return(); Pop(2)

0x800: Stack[-1] = (int) 515592
0x801: Return(); Pop(0)

0x802: Stack[-1] = (int) 511961
0x803: Return(); Pop(0)

0x804: Stack[-1] = "ui/NPC_Burah.png" // @poff=840
0x805: Return(); Pop(0)

0x806: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=874
0x807: Return(); Pop(0)

0x808: Stack[-1] = (bool) 1
0x809: Return(); Pop(0)

