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
	W:quest_d6_01
	W:completed
	W:klara blood is given
	W:d6q01_klara_blood
	W:playsound
	W:giveitem
	W:ood6Klara1
	W:ood6Klara2
	W:d6q01KlaraVolonteer
	W:ood6Klara3
	W:d6q01
	W:microscope_d6q01_klara_blood
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500710075006500730074005f00640036005f0030003100000063006f006d0070006c00650074006500640000006b006c00610072006100200062006c006f006f006400200069007300200067006900760065006e000000640036007100300031005f006b006c006100720061005f0062006c006f006f006400000070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006f006f00640036004b006c00610072006100310000006f006f00640036004b006c0061007200610032000000640036007100300031004b006c0061007200610056006f006c006f006e00740065006500720000006f006f00640036004b006c00610072006100330000006400360071003000310000006d006900630072006f00730063006f00700065005f00640036007100300031005f006b006c006100720061005f0062006c006f006f0064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x4fe
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x143 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x502 Vars = (string)
		EVENT_6 Op = 0x516 Vars = ()
		EVENT_5 Op = 0x523 Vars = ()
		EVENT_7 Op = 0x572 Vars = (int)
		EVENT_45 Op = 0x5b4 Vars = (bool)
		EVENT_0 Op = 0x5c0 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x644

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
0x11: Call2 0x74b

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x69e

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x649

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x8ba

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x8b8

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x8bc

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x8be

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x8a7

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
0x55: Call2 0x68d

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
0x63: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool)
0x67: Stack[-1] = (bool) 0
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x803

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x80f

0x70: Pop(1)
0x71: Pop(1); Push((bool) Stack[-1] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: Stack[-1] = (bool) 1
0x74: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x7f7

0x78: Pop(1)
0x79: Pop(1); Push((bool) Stack[-1] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = (bool) 1
0x7c: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x7d: PushEmpty(object, object)
0x7e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x80: Call2 0x7d7

0x81: Pop(2)
0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0x12d

0x85: Pop(1)
0x86: Push((int) 512737)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 512738)
0x8c: Push((int) 13933)
0x8d: Push((int) 13932)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 512744)
0x91: Push((int) 13965)
0x92: Push((int) 13938)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: Push((int) 512745)
0x96: Push((int) 13954)
0x97: Push((int) 13939)
0x98: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x99: Pop(3)
0x9a: GOTO 0x10f

0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 0
0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call2 0x80f

0xa0: Pop(1)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x7f7

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0x12d

0xae: Pop(1)
0xaf: Push((int) 533081)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 533082)
0xb5: Push((int) -1)
0xb6: Push((int) 34594)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: Push((int) 536138)
0xba: Push((int) -1)
0xbb: Push((int) 37897)
0xbc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbd: Pop(3)
0xbe: GOTO 0x10f

0xbf: PushEmpty(bool)
0xc0: Stack[-1] = (bool) 1
0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x80f

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 1) GOTO 0xcc; Pop(1)

0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call2 0x7f7

0xc9: Pop(1)
0xca: IF (Stack[-1] == 1) GOTO 0xcc; Pop(1)

0xcb: Stack[-1] = (bool) 0
0xcc: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral" // @poff=89
0xcf: Call2 0x12d

0xd0: Pop(1)
0xd1: Push((int) 512748)
0xd2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd3: Pop(1)
0xd4: @@@ ClearReplies(); Obj=0 // @poff=116
0xd5: Pop(0)
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x81b

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 512749)
0xdc: Push((int) 3753)
0xdd: Push((int) 13943)
0xde: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdf: Pop(3)
0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 0
0xe2: PushEmpty(bool)
0xe3: Stack[-1] = (bool) 0
0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 0
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0x84b

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0x827

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 1
0xf1: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0x833

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: Stack[-1] = (bool) 1
0xf9: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfa: PushEmpty(bool, object)
0xfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Call2 0x83f

0xfd: Pop(1)
0xfe: Pop(1); Push((bool) Stack[-1] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = (bool) 1
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) 512750)
0x103: Push((int) 11864)
0x104: Push((int) 13944)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 512769)
0x108: Push((int) -1)
0x109: Push((int) 13968)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: GOTO 0x10f

0x10d: Return(); Pop(0)

0x10e: GOTO 0x62

0x10f: PushEmpty(bool)
0x110: Call2 0x8c0

0x111: Pop(0)
0x112: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x113: @ lshWaitForAnimEnd()
0x114: Pop(0)
0x115: Push( Stack[3 + Tasks[-1].StackPointer] )
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: GOTO 0x11d

0x118: PushEmpty(string)
0x119: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x11a: Call2 0x728

0x11b: Pop(1)
0x11c: GOTO 0x113

0x11d: GOTO 0x12c

0x11e: Push("all") // @poff=138
0x11f: Push("idle") // @poff=146
0x120: @ PlayAnimation(Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: @ WaitForAnimEnd()
0x123: Pop(0)
0x124: Push( Stack[3 + Tasks[-1].StackPointer] )
0x125: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x126: GOTO 0x12c

0x127: Push("all") // @poff=138
0x128: Push("idle") // @poff=146
0x129: @ PlayAnimation(Stack[-2], Stack[-1])
0x12a: Pop(2)
0x12b: GOTO 0x122

0x12c: Return(); Pop(0)

0x12d: PushEmpty()
0x12e: PushEmpty(bool)
0x12f: Call2 0x8c0

0x130: Pop(0)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x133: Return(); Pop(0)

0x134: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Return(); Pop(0)

0x137: PushEmpty(string, bool)
0x138: Stack[-3] = Stack[-2]
0x139: Push("") // @poff=102
0x13a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13c: Stack[-1] = (bool) 0
0x13d: GOTO 0x13f

0x13e: Stack[-1] = (bool) 1
0x13f: Call2 0x72f

0x140: Pop(2)
0x141: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x146: PushEmpty()
0x147: Call2 0x744

0x148: Pop(0)
0x149: Push((int) 13943)
0x14a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty(object, object)
0x14d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x7dd

0x150: Pop(2)
0x151: Push((int) 3807)
0x152: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x7c3

0x158: Pop(2)
0x159: PushEmpty(object, object)
0x15a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15c: Call2 0x7d1

0x15d: Pop(2)
0x15e: Push((int) 3812)
0x15f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164: Call2 0x7c3

0x165: Pop(2)
0x166: PushEmpty(object, object)
0x167: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x168: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x169: Call2 0x7d1

0x16a: Pop(2)
0x16b: Push((int) 13944)
0x16c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: PushEmpty(object, object)
0x16f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x170: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x171: Call2 0x7f1

0x172: Pop(2)
0x173: Push((int) 11872)
0x174: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(object, object)
0x177: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x178: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x179: Call2 0x7b9

0x17a: Pop(2)
0x17b: Push((int) 11873)
0x17c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(object, object)
0x17f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x180: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181: Call2 0x7e3

0x182: Pop(2)
0x183: Push((int) 11871)
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(object, object)
0x187: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x188: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x189: Call2 0x7b9

0x18a: Pop(2)
0x18b: Push((int) 11876)
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: PushEmpty(object, object)
0x18f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x190: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x191: Call2 0x7e3

0x192: Pop(2)
0x193: Push((int) 13931)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 0
0x198: PushEmpty(bool)
0x199: Stack[-1] = (bool) 0
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x803

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x80f

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call2 0x7f7

0x1aa: Pop(1)
0x1ab: Pop(1); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: Stack[-1] = (bool) 1
0x1ae: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1af: PushEmpty(object, object)
0x1b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b2: Call2 0x7d7

0x1b3: Pop(2)
0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0x12d

0x1b7: Pop(1)
0x1b8: Push((int) 512737)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 512738)
0x1be: Push((int) 13933)
0x1bf: Push((int) 13932)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Push((int) 512744)
0x1c3: Push((int) 13965)
0x1c4: Push((int) 13938)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Push((int) 512745)
0x1c8: Push((int) 13954)
0x1c9: Push((int) 13939)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty(bool)
0x1ce: Stack[-1] = (bool) 0
0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call2 0x80f

0x1d2: Pop(1)
0x1d3: Pop(1); Push((bool) Stack[-1] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d5: PushEmpty(bool, object)
0x1d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Call2 0x7f7

0x1d8: Pop(1)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = (bool) 1
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral" // @poff=89
0x1df: Call2 0x12d

0x1e0: Pop(1)
0x1e1: Push((int) 533081)
0x1e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e3: Pop(1)
0x1e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e5: Pop(0)
0x1e6: Push((int) 533082)
0x1e7: Push((int) -1)
0x1e8: Push((int) 34594)
0x1e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ea: Pop(3)
0x1eb: Push((int) 536138)
0x1ec: Push((int) -1)
0x1ed: Push((int) 37897)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty(bool)
0x1f2: Stack[-1] = (bool) 1
0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call2 0x80f

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 1) GOTO 0x1fe; Pop(1)

0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Call2 0x7f7

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 1) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = (bool) 0
0x1fe: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x1ff: PushEmpty(string)
0x200: Stack[-1] = "Neutral" // @poff=89
0x201: Call2 0x12d

0x202: Pop(1)
0x203: Push((int) 512748)
0x204: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x205: Pop(1)
0x206: @@@ ClearReplies(); Obj=0 // @poff=116
0x207: Pop(0)
0x208: PushEmpty(bool, object)
0x209: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20a: Call2 0x81b

0x20b: Pop(1)
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: Push((int) 512749)
0x20e: Push((int) 3753)
0x20f: Push((int) 13943)
0x210: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x211: Pop(3)
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: PushEmpty(bool)
0x215: Stack[-1] = (bool) 0
0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call2 0x84b

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21d: PushEmpty(bool, object)
0x21e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21f: Call2 0x827

0x220: Pop(1)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Stack[-1] = (bool) 1
0x223: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x224: PushEmpty(bool, object)
0x225: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x226: Call2 0x833

0x227: Pop(1)
0x228: Pop(1); Push((bool) Stack[-1] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Stack[-1] = (bool) 1
0x22b: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22c: PushEmpty(bool, object)
0x22d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22e: Call2 0x83f

0x22f: Pop(1)
0x230: Pop(1); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: Push((int) 512750)
0x235: Push((int) 11864)
0x236: Push((int) 13944)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x238: Pop(3)
0x239: Push((int) 512769)
0x23a: Push((int) -1)
0x23b: Push((int) 13968)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 11864)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral" // @poff=89
0x244: Call2 0x12d

0x245: Pop(1)
0x246: Push((int) 510739)
0x247: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x248: Pop(1)
0x249: @@@ ClearReplies(); Obj=0 // @poff=116
0x24a: Pop(0)
0x24b: Push((int) 510740)
0x24c: Push((int) 11866)
0x24d: Push((int) 11865)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24f: Pop(3)
0x250: Push((int) 510752)
0x251: Push((int) 11866)
0x252: Push((int) 11879)
0x253: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 11866)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral" // @poff=89
0x25b: Call2 0x12d

0x25c: Pop(1)
0x25d: Push((int) 510741)
0x25e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25f: Pop(1)
0x260: @@@ ClearReplies(); Obj=0 // @poff=116
0x261: Pop(0)
0x262: Push((int) 510742)
0x263: Push((int) 11868)
0x264: Push((int) 11867)
0x265: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x266: Pop(3)
0x267: Push((int) 510751)
0x268: Push((int) 11870)
0x269: Push((int) 11877)
0x26a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 11868)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral" // @poff=89
0x272: Call2 0x12d

0x273: Pop(1)
0x274: Push((int) 510743)
0x275: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x276: Pop(1)
0x277: @@@ ClearReplies(); Obj=0 // @poff=116
0x278: Pop(0)
0x279: Push((int) 510744)
0x27a: Push((int) 11870)
0x27b: Push((int) 11869)
0x27c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27d: Pop(3)
0x27e: Push((int) 510749)
0x27f: Push((int) 11870)
0x280: Push((int) 11874)
0x281: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x282: Pop(3)
0x283: Push((int) 510750)
0x284: Push((int) -1)
0x285: Push((int) 11876)
0x286: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x287: Pop(3)
0x288: Return(); Pop(0)

0x289: Push((int) 11870)
0x28a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Neutral" // @poff=89
0x28e: Call2 0x12d

0x28f: Pop(1)
0x290: Push((int) 510745)
0x291: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x292: Pop(1)
0x293: @@@ ClearReplies(); Obj=0 // @poff=116
0x294: Pop(0)
0x295: Push((int) 510747)
0x296: Push((int) -1)
0x297: Push((int) 11872)
0x298: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x299: Pop(3)
0x29a: Push((int) 510748)
0x29b: Push((int) -1)
0x29c: Push((int) 11873)
0x29d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29e: Pop(3)
0x29f: Push((int) 510746)
0x2a0: Push((int) -1)
0x2a1: Push((int) 11871)
0x2a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a3: Pop(3)
0x2a4: Return(); Pop(0)

0x2a5: Push((int) 3753)
0x2a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2a8: PushEmpty(string)
0x2a9: Stack[-1] = "Neutral" // @poff=89
0x2aa: Call2 0x12d

0x2ab: Pop(1)
0x2ac: Push((int) 503483)
0x2ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ae: Pop(1)
0x2af: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b0: Pop(0)
0x2b1: Push((int) 503484)
0x2b2: Push((int) 3756)
0x2b3: Push((int) 3754)
0x2b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b5: Pop(3)
0x2b6: Push((int) 503485)
0x2b7: Push((int) 3778)
0x2b8: Push((int) 3755)
0x2b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ba: Pop(3)
0x2bb: Push((int) 503508)
0x2bc: Push((int) 3763)
0x2bd: Push((int) 3783)
0x2be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bf: Pop(3)
0x2c0: Return(); Pop(0)

0x2c1: Push((int) 3778)
0x2c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2c4: PushEmpty(string)
0x2c5: Stack[-1] = "Neutral" // @poff=89
0x2c6: Call2 0x12d

0x2c7: Pop(1)
0x2c8: Push((int) 503505)
0x2c9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ca: Pop(1)
0x2cb: @@@ ClearReplies(); Obj=0 // @poff=116
0x2cc: Pop(0)
0x2cd: Push((int) 503506)
0x2ce: Push((int) 3775)
0x2cf: Push((int) 3779)
0x2d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d1: Pop(3)
0x2d2: Push((int) 503507)
0x2d3: Push((int) 3763)
0x2d4: Push((int) 3781)
0x2d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d6: Pop(3)
0x2d7: Return(); Pop(0)

0x2d8: Push((int) 3756)
0x2d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2db: PushEmpty(string)
0x2dc: Stack[-1] = "Neutral" // @poff=89
0x2dd: Call2 0x12d

0x2de: Pop(1)
0x2df: Push((int) 503486)
0x2e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e1: Pop(1)
0x2e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e3: Pop(0)
0x2e4: Push((int) 503487)
0x2e5: Push((int) 3775)
0x2e6: Push((int) 3757)
0x2e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e8: Pop(3)
0x2e9: Push((int) 503488)
0x2ea: Push((int) 3770)
0x2eb: Push((int) 3758)
0x2ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ed: Pop(3)
0x2ee: Push((int) 503489)
0x2ef: Push((int) 3760)
0x2f0: Push((int) 3759)
0x2f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f2: Pop(3)
0x2f3: Push((int) 503491)
0x2f4: Push((int) 3763)
0x2f5: Push((int) 3761)
0x2f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f7: Pop(3)
0x2f8: Return(); Pop(0)

0x2f9: Push((int) 3760)
0x2fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x2fc: PushEmpty(string)
0x2fd: Stack[-1] = "Neutral" // @poff=89
0x2fe: Call2 0x12d

0x2ff: Pop(1)
0x300: Push((int) 503490)
0x301: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x302: Pop(1)
0x303: @@@ ClearReplies(); Obj=0 // @poff=116
0x304: Pop(0)
0x305: Push((int) 503492)
0x306: Push((int) 3763)
0x307: Push((int) 3762)
0x308: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x309: Pop(3)
0x30a: Push((int) 503509)
0x30b: Push((int) 3786)
0x30c: Push((int) 3785)
0x30d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30e: Pop(3)
0x30f: Return(); Pop(0)

0x310: Push((int) 3786)
0x311: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x313: PushEmpty(string)
0x314: Stack[-1] = "Neutral" // @poff=89
0x315: Call2 0x12d

0x316: Pop(1)
0x317: Push((int) 503510)
0x318: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x319: Pop(1)
0x31a: @@@ ClearReplies(); Obj=0 // @poff=116
0x31b: Pop(0)
0x31c: Push((int) 503511)
0x31d: Push((int) 3788)
0x31e: Push((int) 3787)
0x31f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x320: Pop(3)
0x321: Push((int) 503515)
0x322: Push((int) 3766)
0x323: Push((int) 3793)
0x324: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x325: Pop(3)
0x326: Return(); Pop(0)

0x327: Push((int) 3788)
0x328: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x32a: PushEmpty(string)
0x32b: Stack[-1] = "Neutral" // @poff=89
0x32c: Call2 0x12d

0x32d: Pop(1)
0x32e: Push((int) 503512)
0x32f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x330: Pop(1)
0x331: @@@ ClearReplies(); Obj=0 // @poff=116
0x332: Pop(0)
0x333: Push((int) 503513)
0x334: Push((int) 3775)
0x335: Push((int) 3789)
0x336: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x337: Pop(3)
0x338: Push((int) 503514)
0x339: Push((int) 3766)
0x33a: Push((int) 3791)
0x33b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33c: Pop(3)
0x33d: Return(); Pop(0)

0x33e: Push((int) 3763)
0x33f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x341: PushEmpty(string)
0x342: Stack[-1] = "Neutral" // @poff=89
0x343: Call2 0x12d

0x344: Pop(1)
0x345: Push((int) 503493)
0x346: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x347: Pop(1)
0x348: @@@ ClearReplies(); Obj=0 // @poff=116
0x349: Pop(0)
0x34a: Push((int) 503494)
0x34b: Push((int) 3766)
0x34c: Push((int) 3764)
0x34d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x34e: Pop(3)
0x34f: Push((int) 503495)
0x350: Push((int) 3766)
0x351: Push((int) 3765)
0x352: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x353: Pop(3)
0x354: Return(); Pop(0)

0x355: Push((int) 3766)
0x356: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x358: PushEmpty(string)
0x359: Stack[-1] = "Neutral" // @poff=89
0x35a: Call2 0x12d

0x35b: Pop(1)
0x35c: Push((int) 503496)
0x35d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x35e: Pop(1)
0x35f: @@@ ClearReplies(); Obj=0 // @poff=116
0x360: Pop(0)
0x361: Push((int) 503497)
0x362: Push((int) 3771)
0x363: Push((int) 3769)
0x364: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x365: Pop(3)
0x366: Push((int) 503501)
0x367: Push((int) 3797)
0x368: Push((int) 3773)
0x369: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36a: Pop(3)
0x36b: Push((int) 503502)
0x36c: Push((int) -1)
0x36d: Push((int) 3774)
0x36e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Push((int) 3797)
0x372: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x374: PushEmpty(string)
0x375: Stack[-1] = "Neutral" // @poff=89
0x376: Call2 0x12d

0x377: Pop(1)
0x378: Push((int) 503517)
0x379: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37a: Pop(1)
0x37b: @@@ ClearReplies(); Obj=0 // @poff=116
0x37c: Pop(0)
0x37d: Push((int) 503518)
0x37e: Push((int) -1)
0x37f: Push((int) 3798)
0x380: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x381: Pop(3)
0x382: Push((int) 503519)
0x383: Push((int) -1)
0x384: Push((int) 3799)
0x385: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x386: Pop(3)
0x387: Push((int) 503520)
0x388: Push((int) 3801)
0x389: Push((int) 3800)
0x38a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38b: Pop(3)
0x38c: Return(); Pop(0)

0x38d: Push((int) 3801)
0x38e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x390: PushEmpty(string)
0x391: Stack[-1] = "Neutral" // @poff=89
0x392: Call2 0x12d

0x393: Pop(1)
0x394: Push((int) 503521)
0x395: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x396: Pop(1)
0x397: @@@ ClearReplies(); Obj=0 // @poff=116
0x398: Pop(0)
0x399: Push((int) 503522)
0x39a: Push((int) 3804)
0x39b: Push((int) 3802)
0x39c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39d: Pop(3)
0x39e: Push((int) 503523)
0x39f: Push((int) -1)
0x3a0: Push((int) 3803)
0x3a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a2: Pop(3)
0x3a3: Return(); Pop(0)

0x3a4: Push((int) 3804)
0x3a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3a7: PushEmpty(string)
0x3a8: Stack[-1] = "Neutral" // @poff=89
0x3a9: Call2 0x12d

0x3aa: Pop(1)
0x3ab: Push((int) 503524)
0x3ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ad: Pop(1)
0x3ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x3af: Pop(0)
0x3b0: Push((int) 503525)
0x3b1: Push((int) 3770)
0x3b2: Push((int) 3805)
0x3b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b4: Pop(3)
0x3b5: Return(); Pop(0)

0x3b6: Push((int) 3771)
0x3b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3b9: PushEmpty(string)
0x3ba: Stack[-1] = "Neutral" // @poff=89
0x3bb: Call2 0x12d

0x3bc: Pop(1)
0x3bd: Push((int) 503499)
0x3be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3bf: Pop(1)
0x3c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c1: Pop(0)
0x3c2: Push((int) 503500)
0x3c3: Push((int) 3770)
0x3c4: Push((int) 3772)
0x3c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c6: Pop(3)
0x3c7: Push((int) 503516)
0x3c8: Push((int) -1)
0x3c9: Push((int) 3796)
0x3ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 3770)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral" // @poff=89
0x3d2: Call2 0x12d

0x3d3: Pop(1)
0x3d4: Push((int) 503498)
0x3d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d6: Pop(1)
0x3d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d8: Pop(0)
0x3d9: Push((int) 503526)
0x3da: Push((int) -1)
0x3db: Push((int) 3807)
0x3dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3dd: Pop(3)
0x3de: Push((int) 503527)
0x3df: Push((int) 3809)
0x3e0: Push((int) 3808)
0x3e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 3809)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral" // @poff=89
0x3e9: Call2 0x12d

0x3ea: Pop(1)
0x3eb: Push((int) 503528)
0x3ec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ed: Pop(1)
0x3ee: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ef: Pop(0)
0x3f0: Push((int) 503529)
0x3f1: Push((int) 3811)
0x3f2: Push((int) 3810)
0x3f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f4: Pop(3)
0x3f5: Return(); Pop(0)

0x3f6: Push((int) 3811)
0x3f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f9: PushEmpty(string)
0x3fa: Stack[-1] = "Neutral" // @poff=89
0x3fb: Call2 0x12d

0x3fc: Pop(1)
0x3fd: Push((int) 503530)
0x3fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ff: Pop(1)
0x400: @@@ ClearReplies(); Obj=0 // @poff=116
0x401: Pop(0)
0x402: Push((int) 503531)
0x403: Push((int) -1)
0x404: Push((int) 3812)
0x405: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x406: Pop(3)
0x407: Push((int) 503532)
0x408: Push((int) -1)
0x409: Push((int) 3813)
0x40a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 3775)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral" // @poff=89
0x412: Call2 0x12d

0x413: Pop(1)
0x414: Push((int) 503503)
0x415: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x416: Pop(1)
0x417: @@@ ClearReplies(); Obj=0 // @poff=116
0x418: Pop(0)
0x419: Push((int) 503504)
0x41a: Push((int) 3770)
0x41b: Push((int) 3776)
0x41c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 13965)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Neutral" // @poff=89
0x424: Call2 0x12d

0x425: Pop(1)
0x426: Push((int) 512767)
0x427: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x428: Pop(1)
0x429: @@@ ClearReplies(); Obj=0 // @poff=116
0x42a: Pop(0)
0x42b: Push((int) 512768)
0x42c: Push((int) 13933)
0x42d: Push((int) 13966)
0x42e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x42f: Pop(3)
0x430: Return(); Pop(0)

0x431: Push((int) 13933)
0x432: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Neutral" // @poff=89
0x436: Call2 0x12d

0x437: Pop(1)
0x438: Push((int) 512739)
0x439: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43a: Pop(1)
0x43b: @@@ ClearReplies(); Obj=0 // @poff=116
0x43c: Pop(0)
0x43d: Push((int) 512740)
0x43e: Push((int) 13935)
0x43f: Push((int) 13934)
0x440: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x441: Pop(3)
0x442: Push((int) 512746)
0x443: Push((int) 13935)
0x444: Push((int) 13940)
0x445: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x446: Pop(3)
0x447: Push((int) 512747)
0x448: Push((int) 13935)
0x449: Push((int) 13941)
0x44a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: Push((int) 13935)
0x44e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x450: PushEmpty(string)
0x451: Stack[-1] = "Neutral" // @poff=89
0x452: Call2 0x12d

0x453: Pop(1)
0x454: Push((int) 512741)
0x455: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x456: Pop(1)
0x457: @@@ ClearReplies(); Obj=0 // @poff=116
0x458: Pop(0)
0x459: Push((int) 512742)
0x45a: Push((int) 13937)
0x45b: Push((int) 13936)
0x45c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45d: Pop(3)
0x45e: Push((int) 512751)
0x45f: Push((int) 13947)
0x460: Push((int) 13945)
0x461: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x462: Pop(3)
0x463: Push((int) 512752)
0x464: Push((int) 13937)
0x465: Push((int) 13946)
0x466: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x467: Pop(3)
0x468: Return(); Pop(0)

0x469: Push((int) 13947)
0x46a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x46c: PushEmpty(string)
0x46d: Stack[-1] = "Neutral" // @poff=89
0x46e: Call2 0x12d

0x46f: Pop(1)
0x470: Push((int) 512753)
0x471: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x472: Pop(1)
0x473: @@@ ClearReplies(); Obj=0 // @poff=116
0x474: Pop(0)
0x475: Push((int) 512754)
0x476: Push((int) 13949)
0x477: Push((int) 13948)
0x478: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x479: Pop(3)
0x47a: Push((int) 538781)
0x47b: Push((int) -1)
0x47c: Push((int) 40701)
0x47d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: Push((int) 13949)
0x481: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x483: PushEmpty(string)
0x484: Stack[-1] = "Neutral" // @poff=89
0x485: Call2 0x12d

0x486: Pop(1)
0x487: Push((int) 512755)
0x488: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x489: Pop(1)
0x48a: @@@ ClearReplies(); Obj=0 // @poff=116
0x48b: Pop(0)
0x48c: Push((int) 512756)
0x48d: Push((int) -1)
0x48e: Push((int) 13950)
0x48f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x490: Pop(3)
0x491: Push((int) 512757)
0x492: Push((int) -1)
0x493: Push((int) 13951)
0x494: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x495: Pop(3)
0x496: Return(); Pop(0)

0x497: Push((int) 13937)
0x498: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Neutral" // @poff=89
0x49c: Call2 0x12d

0x49d: Pop(1)
0x49e: Push((int) 512743)
0x49f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a0: Pop(1)
0x4a1: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a2: Pop(0)
0x4a3: Push((int) 512758)
0x4a4: Push((int) 13954)
0x4a5: Push((int) 13952)
0x4a6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a7: Pop(3)
0x4a8: Push((int) 512759)
0x4a9: Push((int) 13954)
0x4aa: Push((int) 13953)
0x4ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ac: Pop(3)
0x4ad: Return(); Pop(0)

0x4ae: Push((int) 13954)
0x4af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4b1: PushEmpty(string)
0x4b2: Stack[-1] = "Neutral" // @poff=89
0x4b3: Call2 0x12d

0x4b4: Pop(1)
0x4b5: Push((int) 512760)
0x4b6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4b7: Pop(1)
0x4b8: @@@ ClearReplies(); Obj=0 // @poff=116
0x4b9: Pop(0)
0x4ba: Push((int) 512761)
0x4bb: Push((int) 13957)
0x4bc: Push((int) 13956)
0x4bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4be: Pop(3)
0x4bf: Return(); Pop(0)

0x4c0: Push((int) 13957)
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Neutral" // @poff=89
0x4c5: Call2 0x12d

0x4c6: Pop(1)
0x4c7: Push((int) 512762)
0x4c8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4c9: Pop(1)
0x4ca: @@@ ClearReplies(); Obj=0 // @poff=116
0x4cb: Pop(0)
0x4cc: Push((int) 512763)
0x4cd: Push((int) 13959)
0x4ce: Push((int) 13958)
0x4cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d0: Pop(3)
0x4d1: Return(); Pop(0)

0x4d2: Push((int) 13959)
0x4d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4d5: PushEmpty(string)
0x4d6: Stack[-1] = "Neutral" // @poff=89
0x4d7: Call2 0x12d

0x4d8: Pop(1)
0x4d9: Push((int) 512764)
0x4da: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4db: Pop(1)
0x4dc: @@@ ClearReplies(); Obj=0 // @poff=116
0x4dd: Pop(0)
0x4de: Push((int) 512765)
0x4df: Push((int) -1)
0x4e0: Push((int) 13960)
0x4e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e2: Pop(3)
0x4e3: Push((int) 512766)
0x4e4: Push((int) -1)
0x4e5: Push((int) 13961)
0x4e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4ea: PushEmpty(bool)
0x4eb: Call2 0x8c0

0x4ec: Pop(0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ee: @ lshStopAnimation()
0x4ef: Pop(0)
0x4f0: GOTO 0x4f3

0x4f1: @ StopAnimation()
0x4f2: Pop(0)
0x4f3: Return(); Pop(0)

0x4f4: GOTO 0x144

0x4f5: Return(); Pop(0)

0x4f6: PushEmpty()
0x4f7: PushEmpty(int, object)
0x4f8: Stack[-3] = Stack[-1]
0x4f9: Push(-2, 1); TaskCall(1)
0x4fa: Call2 0xd

0x4fb: Pop(-2, 1); TaskReturn
0x4fc: Pop(2)
0x4fd: Return(); Pop(0)

0x4fe: PushEmpty()
0x4ff: Call2 0x527

0x500: Pop(0)
0x501: Return(); Pop(0)

0x502: PushEmpty(bool, bool)
0x503: Push("cleanup") // @poff=156
0x504: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x506: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x507: @ IsLoaded(Stack[-1])
0x508: Pop(0)
0x509: Pop(0); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50b: PushEmpty(object)
0x50c: Call2 0x74b

0x50d: Pop(0)
0x50e: @ RemoveActor(Stack[-1])
0x50f: Pop(1)
0x510: GOTO 0x515

0x511: Push("restore") // @poff=172
0x512: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x515: Return(); Pop(2)

0x516: Push( Stack[1 + Tasks[-1].StackPointer] )
0x517: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x518: PushEmpty(object)
0x519: Call2 0x74b

0x51a: Pop(0)
0x51b: @ RemoveActor(Stack[-1])
0x51c: Pop(1)
0x51d: @ Hold()
0x51e: Pop(0)
0x51f: PushEmpty()
0x520: Call2 0x598

0x521: Pop(0)
0x522: Return(); Pop(0)

0x523: PushEmpty()
0x524: Call2 0x5a7

0x525: Pop(0)
0x526: Return(); Pop(0)

0x527: PushEmpty(bool)
0x528: Call2 0x644

0x529: Pop(0)
0x52a: Pop(1); Push((bool) Stack[-1] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52c: PushEmpty()
0x52d: Push(-0, 0); TaskCall(0)
0x52e: Call2 0x0

0x52f: Pop(-0, 0); TaskReturn
0x530: Pop(0)
0x531: PushEmpty()
0x532: Call2 0x523

0x533: Pop(0)
0x534: @ GetDirection(Stack[-0]T)
0x535: Pop(0)
0x536: PushEmpty()
0x537: Call2 0x5dd

0x538: Pop(0)
0x539: GOTO 0x536

0x53a: Return(); Pop(0)

0x53b: PushEmpty(object, object)
0x53c: Push("player") // @poff=188
0x53d: @ FindActor(Stack[-2], Stack[-1])
0x53e: Pop(1)
0x53f: Pop(0); Push((bool) Stack[-1] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-3] = (bool) 0
0x542: Return(); Pop(2)

0x543: PushEmpty(bool, object)
0x544: Stack[-3] = Stack[-1]
0x545: Call2 0x63b

0x546: Stack[-2] = Stack[-5]
0x547: Pop(2)
0x548: Return(); Pop(2)

0x549: Stack[-1] = 0
0x54a: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x54b: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x54c: @ RotateAsync(Stack[-2], Stack[-1])
0x54d: Pop(2)
0x54e: Return(); Pop(0)

0x54f: PushEmpty(object, bool, object, bool)
0x550: Push("player") // @poff=188
0x551: @ FindActor(Stack[-3], Stack[-1])
0x552: Pop(1)
0x553: Pop(0); Push((bool) Stack[-2] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-5] = (bool) 0
0x556: Return(); Pop(4)

0x557: PushEmpty(float, object)
0x558: Stack[-4] = Stack[-1]
0x559: Call2 0x629

0x55a: Pop(1)
0x55b: Push((float)90000.0)
0x55c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-5] = (bool) 0
0x55f: Return(); Pop(4)

0x560: @ CanSee(Stack[-1], Stack[-2])
0x561: Pop(0)
0x562: Stack[-1] = Stack[-5]
0x563: Return(); Pop(4)

0x564: Stack[-2] = 0
0x565: PushEmpty(float, float)
0x566: Push((int) 8)
0x567: Push((int) 16)
0x568: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(2)
0x56a: Push((int) 10)
0x56b: @ SetTimer(Stack[-1], Stack[-2])
0x56c: Pop(1)
0x56d: Return(); Pop(2)

0x56e: Push((int) 10)
0x56f: @ KillTimer(Stack[-1])
0x570: Pop(1)
0x571: Return(); Pop(0)

0x572: PushEmpty()
0x573: Push((int) 10)
0x574: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x576: PushEmpty()
0x577: Call2 0x56e

0x578: Pop(0)
0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 0
0x57b: PushEmpty(bool)
0x57c: Call2 0x644

0x57d: Pop(0)
0x57e: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57f: PushEmpty(bool)
0x580: Call2 0x54f

0x581: Pop(0)
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: Stack[-1] = (bool) 1
0x584: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x585: PushEmpty(bool)
0x586: Call2 0x53b

0x587: Pop(0)
0x588: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x589: PushEmpty(bool, object)
0x58a: PushEmpty(object)
0x58b: Call2 0x74b

0x58c: Stack[-1] = Stack[-2]
0x58d: Pop(1)
0x58e: Call2 0x6d8

0x58f: Pop(2)
0x590: GOTO 0x597

0x591: PushEmpty()
0x592: Call2 0x54a

0x593: Pop(0)
0x594: PushEmpty()
0x595: Call2 0x565

0x596: Pop(0)
0x597: Return(); Pop(0)

0x598: PushEmpty()
0x599: Call2 0x624

0x59a: Pop(0)
0x59b: PushEmpty()
0x59c: Call2 0x56e

0x59d: Pop(0)
0x59e: @ lshStopSpeech()
0x59f: Pop(0)
0x5a0: @ lshStopAnimation()
0x5a1: Pop(0)
0x5a2: @ StopAsync()
0x5a3: Pop(0)
0x5a4: @ Hold()
0x5a5: Pop(0)
0x5a6: Return(); Pop(0)

0x5a7: @ StopGroup0()
0x5a8: Pop(0)
0x5a9: PushEmpty()
0x5aa: Call2 0x56e

0x5ab: Pop(0)
0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Neutral" // @poff=89
0x5ae: Call2 0x728

0x5af: Pop(1)
0x5b0: PushEmpty()
0x5b1: Call2 0x565

0x5b2: Pop(0)
0x5b3: Return(); Pop(0)

0x5b4: PushEmpty()
0x5b5: Push(Stack[-1])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b7: PushEmpty()
0x5b8: Call2 0x565

0x5b9: Pop(0)
0x5ba: GOTO 0x5bf

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Neutral" // @poff=89
0x5bd: Call2 0x728

0x5be: Pop(1)
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty(bool, bool)
0x5c1: @ IsOverrideActive(Stack[-1])
0x5c2: Pop(0)
0x5c3: Pop(0); Push((bool) Stack[-1] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5c5: EventDisable(0)
0x5c6: PushEmpty()
0x5c7: Call2 0x624

0x5c8: Pop(0)
0x5c9: PushEmpty(bool, object)
0x5ca: Stack[-5] = Stack[-1]
0x5cb: Call2 0x63b

0x5cc: Pop(2)
0x5cd: EventEnable(0)
0x5ce: PushEmpty(object)
0x5cf: Stack[-4] = Stack[-1]
0x5d0: Call2 0x4f6

0x5d1: Pop(1)
0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral" // @poff=89
0x5d4: Call2 0x728

0x5d5: Pop(1)
0x5d6: PushEmpty()
0x5d7: Call2 0x56e

0x5d8: Pop(0)
0x5d9: PushEmpty()
0x5da: Call2 0x565

0x5db: Pop(0)
0x5dc: Return(); Pop(2)

0x5dd: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x5de: @ WaitForAnimEnd()
0x5df: Pop(0)
0x5e0: PushEmpty(bool)
0x5e1: Call2 0x644

0x5e2: Pop(0)
0x5e3: Pop(1); Push((bool) Stack[-1] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: Return(); Pop(12)

0x5e6: PushEmpty(int)
0x5e7: Call2 0x7a8

0x5e8: Stack[-1] = Stack[-7]
0x5e9: Pop(1)
0x5ea: Stack[-5] = (int) 0
0x5eb: PushEmpty(bool)
0x5ec: Stack[-1] = (bool) 0
0x5ed: Push((int) 5)
0x5ee: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f0: PushEmpty(bool)
0x5f1: Call2 0x644

0x5f2: Pop(0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: Stack[-1] = (bool) 1
0x5f5: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x5f6: Pop(0); Push((bool) Stack[-6] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f8: Push((int) 3)
0x5f9: @ Sleep(Stack[-1], Stack[-5])
0x5fa: Pop(1)
0x5fb: Pop(0); Push((bool) Stack[-4] == 0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fd: GOTO 0x61f

0x5fe: GOTO 0x614

0x5ff: @ irand(Stack[-3], Stack[-6])
0x600: Pop(0)
0x601: Push((int) 5)
0x602: @ irand(Stack[-3], Stack[-1])
0x603: Pop(1)
0x604: Push((int) 0)
0x605: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x607: Stack[-3] = (int) 0
0x608: Push("all") // @poff=138
0x609: PushEmpty(string, int)
0x60a: Stack[-6] = Stack[-1]
0x60b: Call2 0x7a1

0x60c: Pop(1)
0x60d: @ PlayAnimation(Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: @ WaitForAnimEnd(Stack[-1])
0x610: Pop(0)
0x611: Pop(0); Push((bool) Stack[-1] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: GOTO 0x61f

0x614: PushEmpty(bool)
0x615: Call2 0x622

0x616: Pop(0)
0x617: Pop(1); Push((bool) Stack[-1] == 0)
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: GOTO 0x61f

0x61a: @ ResetAAS()
0x61b: Pop(0)
0x61c: Push((int) 1)
0x61d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x61e: GOTO 0x5eb

0x61f: @ ResetAAS()
0x620: Pop(0)
0x621: Return(); Pop(12)

0x622: Stack[-1] = (bool) 1
0x623: Return(); Pop(0)

0x624: @ StopAnimation()
0x625: Pop(0)
0x626: @ StopGroup0()
0x627: Pop(0)
0x628: Return(); Pop(0)

0x629: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x62a: @ GetPosition(Stack[-3])
0x62b: Pop(0)
0x62c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x62d: Pop(0)
0x62e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x62f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x630: Return(); Pop(6)

0x631: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x632: @ GetPosition(Stack[-3])
0x633: Pop(0)
0x634: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x635: Push(CvectorIndex(Stack[-2], 0))
0x636: Push(CvectorIndex(Stack[-3], 2))
0x637: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x638: Pop(2)
0x639: Stack[-1] = Stack[-8]
0x63a: Return(); Pop(6)

0x63b: PushEmpty(cvector, cvector)
0x63c: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x63d: Pop(0)
0x63e: PushEmpty(bool, cvector)
0x63f: Stack[-3] = Stack[-1]
0x640: Call2 0x631

0x641: Stack[-2] = Stack[-6]
0x642: Pop(2)
0x643: Return(); Pop(2)

0x644: PushEmpty(bool, bool)
0x645: @ IsLoaded(Stack[-1])
0x646: Pop(0)
0x647: Stack[-1] = Stack[-3]
0x648: Return(); Pop(2)

0x649: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x64a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x64b: Pop(0)
0x64c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x64d: Pop(0)
0x64e: Push(CvectorIndex(Stack[-8], 1))
0x64f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x650: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x651: @ GetPosition(Stack[-7])
0x652: Pop(0)
0x653: @ GetEyesHeight(Stack[-9])
0x654: Pop(0)
0x655: Push(CvectorIndex(Stack[-7], 1))
0x656: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x657: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x658: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x659: Push(CvectorIndex(Stack[-6], 1))
0x65a: Stack[-1] = (int) 0
0x65b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x65c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x65d: Pop(1); Push(Sqrt(Stack[-1]))
0x65e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x65f: Stack[-5] = -Stack[-6]; Pop(0);
0x660: Pop(0); Push(Stack[-6] * Stack[-19]);
0x661: PushEmpty(cvector, cvector)
0x662: Push([0.0, 1.0, 0.0])
0x663: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x664: Call2 0x751

0x665: Pop(1)
0x666: Push((int) 25)
0x667: Pop(2); Push(Stack[-2] * Stack[-1]);
0x668: Pop(2); Push(Stack[-2] + Stack[-1]);
0x669: Push([0.0, 10.0, 0.0])
0x66a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x66b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x66c: @ IsOverrideActive(Stack[-2])
0x66d: Pop(0)
0x66e: Push(Stack[-2])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-21] = (bool) 0
0x671: Return(); Pop(18)

0x672: @ StopWorld()
0x673: Pop(0)
0x674: @ CameraTransit(Stack[-3], Stack[-5])
0x675: Pop(0)
0x676: Push(CvectorIndex(Stack[-4], 0))
0x677: Push(CvectorIndex(Stack[-5], 2))
0x678: @ Rotate(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: PushEmpty(bool)
0x67b: Call2 0x8c0

0x67c: Pop(0)
0x67d: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67e: GOTO 0x687

0x67f: Push("head") // @poff=228
0x680: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x681: Pop(1)
0x682: Push(Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x684: Push("head") // @poff=228
0x685: @ LookAsyncCamera(Stack[-1])
0x686: Pop(1)
0x687: @ CameraWaitForPlayFinish()
0x688: Pop(0)
0x689: @ ResumeWorld()
0x68a: Pop(0)
0x68b: Stack[-21] = (bool) 1
0x68c: Return(); Pop(18)

0x68d: PushEmpty(bool, bool)
0x68e: @ CameraSwitchToNormal()
0x68f: Pop(0)
0x690: PushEmpty(bool)
0x691: Call2 0x8c0

0x692: Pop(0)
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: GOTO 0x69d

0x695: Push("head") // @poff=228
0x696: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x697: Pop(1)
0x698: Push(Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69a: Push("head") // @poff=228
0x69b: @ UnlookAsync(Stack[-1])
0x69c: Pop(1)
0x69d: Return(); Pop(2)

0x69e: PushEmpty(int, int, int, int)
0x69f: Push("voice_common") // @poff=238
0x6a0: @ GetVariable(Stack[-1], Stack[-3])
0x6a1: Pop(1)
0x6a2: Push(Stack[-2])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6a4: PushEmpty(bool, object)
0x6a5: Stack[-7] = Stack[-1]
0x6a6: Call2 0x6d8

0x6a7: Pop(1)
0x6a8: Pop(1); Push((bool) Stack[-1] == 0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6aa: PushEmpty(bool, object)
0x6ab: Stack[-7] = Stack[-1]
0x6ac: Call2 0x6fd

0x6ad: Pop(1)
0x6ae: Pop(1); Push((bool) Stack[-1] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-6] = (bool) 0
0x6b1: Return(); Pop(4)

0x6b2: Push((int) 2)
0x6b3: @ irand(Stack[-2], Stack[-1])
0x6b4: Pop(1)
0x6b5: Push(Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6b7: Push("voice_common") // @poff=238
0x6b8: Push((int) 1)
0x6b9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6ba: Push((int) 3)
0x6bb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x6bc: @ SetVariable(Stack[-2], Stack[-1])
0x6bd: Pop(2)
0x6be: GOTO 0x6c3

0x6bf: Push("voice_common") // @poff=238
0x6c0: Push((int) 0)
0x6c1: @ SetVariable(Stack[-2], Stack[-1])
0x6c2: Pop(2)
0x6c3: GOTO 0x6d6

0x6c4: PushEmpty(bool, object)
0x6c5: Stack[-7] = Stack[-1]
0x6c6: Call2 0x6fd

0x6c7: Pop(1)
0x6c8: Pop(1); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6ca: PushEmpty(bool, object)
0x6cb: Stack[-7] = Stack[-1]
0x6cc: Call2 0x6d8

0x6cd: Pop(1)
0x6ce: Pop(1); Push((bool) Stack[-1] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-6] = (bool) 0
0x6d1: Return(); Pop(4)

0x6d2: Push("voice_common") // @poff=238
0x6d3: Push((int) 1)
0x6d4: @ SetVariable(Stack[-2], Stack[-1])
0x6d5: Pop(2)
0x6d6: Stack[-6] = (bool) 1
0x6d7: Return(); Pop(4)

0x6d8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6d9: Stack[-5] = "c" // @poff=264
0x6da: Stack[-4] = (int) 0
0x6db: Push((int) 1)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6dd: Push((int) 1)
0x6de: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6df: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6e0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x6e1: Pop(1)
0x6e2: Pop(0); Push((bool) Stack[-3] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: GOTO 0x6e8

0x6e5: Push((int) 1)
0x6e6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6e7: GOTO 0x6db

0x6e8: Pop(0); Push((bool) Stack[-4] == 0)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6ea: Stack[-12] = (bool) 0
0x6eb: Return(); Pop(10)

0x6ec: Stack[-2] = (int) 0
0x6ed: Push((int) 1)
0x6ee: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f0: @ irand(Stack[-2], Stack[-4])
0x6f1: Pop(0)
0x6f2: Push((int) 1)
0x6f3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6f5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x6f6: Pop(1)
0x6f7: PushEmpty(bool, string)
0x6f8: Stack[-3] = Stack[-1]
0x6f9: Call2 0x735

0x6fa: Stack[-2] = Stack[-14]
0x6fb: Pop(2)
0x6fc: Return(); Pop(10)

0x6fd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6fe: Push("d") // @poff=234
0x6ff: PushEmpty(int)
0x700: Call2 0x798

0x701: Pop(0)
0x702: Pop(2); Push(Stack[-2] + Stack[-1]);
0x703: Push("m") // @poff=292
0x704: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x705: Stack[-4] = (int) 0
0x706: Push((int) 1)
0x707: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x708: Push((int) 1)
0x709: Pop(1); Push(Stack[-5] + Stack[-1]);
0x70a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x70b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x70c: Pop(1)
0x70d: Pop(0); Push((bool) Stack[-3] == 0)
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: GOTO 0x713

0x710: Push((int) 1)
0x711: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x712: GOTO 0x706

0x713: Pop(0); Push((bool) Stack[-4] == 0)
0x714: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x715: Stack[-12] = (bool) 0
0x716: Return(); Pop(10)

0x717: Stack[-2] = (int) 0
0x718: Push((int) 1)
0x719: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: @ irand(Stack[-2], Stack[-4])
0x71c: Pop(0)
0x71d: Push((int) 1)
0x71e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x71f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x720: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x721: Pop(1)
0x722: PushEmpty(bool, string)
0x723: Stack[-3] = Stack[-1]
0x724: Call2 0x735

0x725: Stack[-2] = Stack[-14]
0x726: Pop(2)
0x727: Return(); Pop(10)

0x728: PushEmpty(float, float, float, float)
0x729: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x72a: Pop(0)
0x72b: Push((bool) 0)
0x72c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(1)
0x72e: Return(); Pop(4)

0x72f: PushEmpty(float, float, float, float)
0x730: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x731: Pop(0)
0x732: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x733: Pop(0)
0x734: Return(); Pop(4)

0x735: PushEmpty(bool, bool)
0x736: PushEmpty(bool)
0x737: Call2 0x8c0

0x738: Pop(0)
0x739: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x73b: Pop(0)
0x73c: Push(Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73e: @ lshPlaySpeech(Stack[-3])
0x73f: Pop(0)
0x740: Stack[-4] = (bool) 1
0x741: Return(); Pop(2)

0x742: Stack[-4] = (bool) 0
0x743: Return(); Pop(2)

0x744: PushEmpty(bool)
0x745: Call2 0x8c0

0x746: Pop(0)
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: @ lshStopSpeech()
0x749: Pop(0)
0x74a: Return(); Pop(0)

0x74b: PushEmpty(object, object)
0x74c: @ self(Stack[-1])
0x74d: Pop(0)
0x74e: Stack[-1] = Stack[-3]
0x74f: Return(); Pop(2)

0x750: Stack[-1] = 0
0x751: PushEmpty(float, float)
0x752: Pop(0); Push(Stack[-3] | Stack[-3]);
0x753: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x754: Push((float)9.999999974752427e-07)
0x755: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-4] = [0.0, 0.0, 0.0]
0x758: Return(); Pop(2)

0x759: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x75a: Return(); Pop(2)

0x75b: PushEmpty(int, int)
0x75c: @ GetVariable(Stack[-3], Stack[-1])
0x75d: Pop(0)
0x75e: Stack[-1] = Stack[-4]
0x75f: Return(); Pop(2)

0x760: PushEmpty(object, object)
0x761: @ CreateIntVector(Stack[-1])
0x762: Pop(0)
0x763: @@ add(Stack[-4]); Obj=1 // @poff=296
0x764: Pop(0)
0x765: @@ add(Stack[-3]); Obj=1 // @poff=296
0x766: Pop(0)
0x767: Push((int) 3)
0x768: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x769: Pop(1)
0x76a: Return(); Pop(2)

0x76b: Stack[-1] = 0
0x76c: PushEmpty(int, int, bool, int, int, bool)
0x76d: @@ GetItemID(Stack[-3]); Obj=8 // @poff=300
0x76e: Pop(0)
0x76f: Push("Category") // @poff=310
0x770: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x771: Pop(1)
0x772: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=328
0x773: Pop(0)
0x774: Pop(0); Push((bool) Stack[-1] == 0)
0x775: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x776: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=336
0x777: Pop(0)
0x778: GOTO 0x77e

0x779: PushEmpty(int, int)
0x77a: Stack[-5] = Stack[-2]
0x77b: Stack[-9] = Stack[-1]
0x77c: Call2 0x760

0x77d: Pop(2)
0x77e: Return(); Pop(6)

0x77f: PushEmpty(object, object)
0x780: @ CreateInvItem(Stack[-1])
0x781: Pop(0)
0x782: @@ SetItemName(Stack[-4]); Obj=1 // @poff=346
0x783: Pop(0)
0x784: PushEmpty(object, object, int)
0x785: Stack[-8] = Stack[-3]
0x786: Stack[-4] = Stack[-2]
0x787: Stack[-6] = Stack[-1]
0x788: Call2 0x76c

0x789: Pop(3)
0x78a: Return(); Pop(2)

0x78b: Stack[-1] = 0
0x78c: PushEmpty(object, object)
0x78d: @ FindActor(Stack[-1], Stack[-4])
0x78e: Pop(0)
0x78f: Pop(0); PushNull((bool) Stack[-1] == 0)
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-5] = (bool) 0
0x792: Return(); Pop(2)

0x793: @ Trigger(Stack[-1], Stack[-3])
0x794: Pop(0)
0x795: Stack[-5] = (bool) 1
0x796: Return(); Pop(2)

0x797: Stack[-1] = 0
0x798: PushEmpty(float, float)
0x799: @ GetGameTime(Stack[-1])
0x79a: Pop(0)
0x79b: Push((int) 1)
0x79c: PushEmpty(int)
0x79d: Push((int) 24)
0x79e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x79f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x7a0: Return(); Pop(2)

0x7a1: PushEmpty(string, string)
0x7a2: Stack[-1] = "idle" // @poff=146
0x7a3: Push(Stack[-3])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7a6: Stack[-1] = Stack[-4]
0x7a7: Return(); Pop(2)

0x7a8: PushEmpty(int, bool, int, bool)
0x7a9: Stack[-2] = (int) 0
0x7aa: Push("all") // @poff=138
0x7ab: PushEmpty(string, int)
0x7ac: Stack[-5] = Stack[-1]
0x7ad: Call2 0x7a1

0x7ae: Pop(1)
0x7af: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7b0: Pop(2)
0x7b1: Pop(0); Push((bool) Stack[-1] == 0)
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b3: GOTO 0x7b7

0x7b4: Push((int) 1)
0x7b5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7b6: GOTO 0x7aa

0x7b7: Stack[-2] = Stack[-5]
0x7b8: Return(); Pop(4)

0x7b9: PushEmpty()
0x7ba: PushEmpty()
0x7bb: Call2 0x871

0x7bc: Pop(0)
0x7bd: PushEmpty(bool, string, string)
0x7be: Stack[-2] = "quest_d6_01" // @poff=358
0x7bf: Stack[-1] = "completed" // @poff=382
0x7c0: Call2 0x78c

0x7c1: Pop(3)
0x7c2: Return(); Pop(0)

0x7c3: PushEmpty()
0x7c4: PushEmpty()
0x7c5: Call2 0x857

0x7c6: Pop(0)
0x7c7: Push("klara blood is given") // @poff=402
0x7c8: @ Trace(Stack[-1])
0x7c9: Pop(1)
0x7ca: PushEmpty(object, string, int)
0x7cb: Stack[-5] = Stack[-3]
0x7cc: Stack[-2] = "d6q01_klara_blood" // @poff=444
0x7cd: Stack[-1] = (int) 1
0x7ce: Call2 0x77f

0x7cf: Pop(3)
0x7d0: Return(); Pop(0)

0x7d1: PushEmpty()
0x7d2: Push("playsound") // @poff=480
0x7d3: Push("giveitem") // @poff=500
0x7d4: @ TriggerWorld(Stack[-2], Stack[-1])
0x7d5: Pop(2)
0x7d6: Return(); Pop(0)

0x7d7: PushEmpty()
0x7d8: Push("ood6Klara1") // @poff=518
0x7d9: Push((int) 1)
0x7da: @ SetVariable(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: Return(); Pop(0)

0x7dd: PushEmpty()
0x7de: Push("ood6Klara2") // @poff=540
0x7df: Push((int) 1)
0x7e0: @ SetVariable(Stack[-2], Stack[-1])
0x7e1: Pop(2)
0x7e2: Return(); Pop(0)

0x7e3: PushEmpty()
0x7e4: Push("d6q01KlaraVolonteer") // @poff=562
0x7e5: Push((int) 1)
0x7e6: @ SetVariable(Stack[-2], Stack[-1])
0x7e7: Pop(2)
0x7e8: PushEmpty()
0x7e9: Call2 0x864

0x7ea: Pop(0)
0x7eb: PushEmpty(bool, string, string)
0x7ec: Stack[-2] = "quest_d6_01" // @poff=358
0x7ed: Stack[-1] = "completed" // @poff=382
0x7ee: Call2 0x78c

0x7ef: Pop(3)
0x7f0: Return(); Pop(0)

0x7f1: PushEmpty()
0x7f2: Push("ood6Klara3") // @poff=602
0x7f3: Push((int) 1)
0x7f4: @ SetVariable(Stack[-2], Stack[-1])
0x7f5: Pop(2)
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty()
0x7f8: PushEmpty(int, string)
0x7f9: Stack[-1] = "d6q01" // @poff=624
0x7fa: Call2 0x75b

0x7fb: Pop(1)
0x7fc: Push((int) 4)
0x7fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ff: Stack[-2] = (bool) 1
0x800: Return(); Pop(0)

0x801: Stack[-2] = (bool) 0
0x802: Return(); Pop(0)

0x803: PushEmpty()
0x804: PushEmpty(int, string)
0x805: Stack[-1] = "ood6Klara1" // @poff=518
0x806: Call2 0x75b

0x807: Pop(1)
0x808: Push((int) 0)
0x809: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-2] = (bool) 1
0x80c: Return(); Pop(0)

0x80d: Stack[-2] = (bool) 0
0x80e: Return(); Pop(0)

0x80f: PushEmpty()
0x810: PushEmpty(int, string)
0x811: Stack[-1] = "d6q01" // @poff=624
0x812: Call2 0x75b

0x813: Pop(1)
0x814: Push((int) 3)
0x815: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x817: Stack[-2] = (bool) 1
0x818: Return(); Pop(0)

0x819: Stack[-2] = (bool) 0
0x81a: Return(); Pop(0)

0x81b: PushEmpty()
0x81c: PushEmpty(int, string)
0x81d: Stack[-1] = "ood6Klara2" // @poff=540
0x81e: Call2 0x75b

0x81f: Pop(1)
0x820: Push((int) 0)
0x821: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x823: Stack[-2] = (bool) 1
0x824: Return(); Pop(0)

0x825: Stack[-2] = (bool) 0
0x826: Return(); Pop(0)

0x827: PushEmpty()
0x828: PushEmpty(int, string)
0x829: Stack[-1] = "microscope_d6q01_klara_blood" // @poff=636
0x82a: Call2 0x75b

0x82b: Pop(1)
0x82c: Push((int) 0)
0x82d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x82f: Stack[-2] = (bool) 1
0x830: Return(); Pop(0)

0x831: Stack[-2] = (bool) 0
0x832: Return(); Pop(0)

0x833: PushEmpty()
0x834: PushEmpty(int, string)
0x835: Stack[-1] = "d6q01" // @poff=624
0x836: Call2 0x75b

0x837: Pop(1)
0x838: Push((int) 1000)
0x839: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x83b: Stack[-2] = (bool) 1
0x83c: Return(); Pop(0)

0x83d: Stack[-2] = (bool) 0
0x83e: Return(); Pop(0)

0x83f: PushEmpty()
0x840: PushEmpty(int, string)
0x841: Stack[-1] = "d6q01" // @poff=624
0x842: Call2 0x75b

0x843: Pop(1)
0x844: Push((int) -1)
0x845: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x847: Stack[-2] = (bool) 1
0x848: Return(); Pop(0)

0x849: Stack[-2] = (bool) 0
0x84a: Return(); Pop(0)

0x84b: PushEmpty()
0x84c: PushEmpty(int, string)
0x84d: Stack[-1] = "ood6Klara3" // @poff=602
0x84e: Call2 0x75b

0x84f: Pop(1)
0x850: Push((int) 0)
0x851: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x852: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x853: Stack[-2] = (bool) 1
0x854: Return(); Pop(0)

0x855: Stack[-2] = (bool) 0
0x856: Return(); Pop(0)

0x857: PushEmpty(object, object)
0x858: Push((int) 163)
0x859: Push((int) 1)
0x85a: Push((int) 515405)
0x85b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x85c: Pop(3)
0x85d: PushEmpty(bool, object, int)
0x85e: Stack[-4] = Stack[-2]
0x85f: Stack[-1] = (int) 111
0x860: Call2 0x88b

0x861: Pop(3)
0x862: Return(); Pop(2)

0x863: Stack[-1] = 0
0x864: PushEmpty(object, object)
0x865: Push((int) 122)
0x866: Push((int) 1)
0x867: Push((int) 513745)
0x868: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x869: Pop(3)
0x86a: PushEmpty(bool, object, int)
0x86b: Stack[-4] = Stack[-2]
0x86c: Stack[-1] = (int) 111
0x86d: Call2 0x88b

0x86e: Pop(3)
0x86f: Return(); Pop(2)

0x870: Stack[-1] = 0
0x871: PushEmpty(object, object)
0x872: Push((int) 635)
0x873: Push((int) 1)
0x874: Push((int) 533083)
0x875: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: PushEmpty(bool, object, int)
0x878: Stack[-4] = Stack[-2]
0x879: Stack[-1] = (int) 111
0x87a: Call2 0x88b

0x87b: Pop(3)
0x87c: Return(); Pop(2)

0x87d: Stack[-1] = 0
0x87e: PushEmpty(object, object)
0x87f: @ GetDiaryRoot(Stack[-1])
0x880: Pop(0)
0x881: Pop(0); Push((bool) Stack[-1] == 0)
0x882: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x883: Push("Can't retrieve diary root") // @poff=694
0x884: @ Trace(Stack[-1])
0x885: Pop(1)
0x886: Stack[-3] = (bool) 0
0x887: Return(); Pop(2)

0x888: Stack[-1] = Stack[-3]
0x889: Return(); Pop(2)

0x88a: Stack[-1] = 0
0x88b: PushEmpty(object, object, int, object, object, int)
0x88c: PushEmpty(object)
0x88d: Call2 0x87e

0x88e: Stack[-1] = Stack[-4]
0x88f: Pop(1)
0x890: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=746
0x891: Pop(0)
0x892: Pop(0); Push((bool) Stack[-2] == 0)
0x893: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x894: Push("Can't find diary parent with id: ") // @poff=751
0x895: Pop(1); Push(Stack[-1] + Stack[-8]);
0x896: @ Trace(Stack[-1])
0x897: Pop(1)
0x898: Stack[-9] = (bool) 0
0x899: Return(); Pop(6)

0x89a: @@ AddChild(Stack[-8]); Obj=2 // @poff=819
0x89b: Pop(0)
0x89c: Push((int) 7)
0x89d: @ SendWorldWndMessage(Stack[-1])
0x89e: Pop(1)
0x89f: @@ GetCategory(Stack[-1]); Obj=8 // @poff=828
0x8a0: Pop(0)
0x8a1: @ SetDiarySection(Stack[-1])
0x8a2: Pop(0)
0x8a3: Stack[-9] = (bool) 0
0x8a4: Return(); Pop(6)

0x8a5: Stack[-2] = 0
0x8a6: Stack[-3] = 0
0x8a7: PushEmpty(int, int)
0x8a8: Push("branch") // @poff=840
0x8a9: @ GetVariable(Stack[-1], Stack[-2])
0x8aa: Pop(1)
0x8ab: Push((int) 0)
0x8ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ae: Stack[-3] = (int) 1
0x8af: Return(); Pop(2)

0x8b0: GOTO 0x8b6

0x8b1: Push((int) 1)
0x8b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b4: Stack[-3] = (int) 2
0x8b5: Return(); Pop(2)

0x8b6: Stack[-3] = (int) 3
0x8b7: Return(); Pop(2)

0x8b8: Stack[-1] = (int) 515540
0x8b9: Return(); Pop(0)

0x8ba: Stack[-1] = (int) 502865
0x8bb: Return(); Pop(0)

0x8bc: Stack[-1] = "ui/NPC_Klara.png" // @poff=854
0x8bd: Return(); Pop(0)

0x8be: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=888
0x8bf: Return(); Pop(0)

0x8c0: Stack[-1] = (bool) 1
0x8c1: Return(); Pop(0)

