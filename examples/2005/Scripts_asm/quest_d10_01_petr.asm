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
	W:pt_map_aglaja
	A:ShowMap
	W:volonteers_danko
	W:disease
	W:petr
	W:map_chertez_state
	W:map_chertez_force
	W:ood10Petr1
	W:d10q01
	W:blueprint is given
	W:d10q01_blueprint
	W:ood10Petr3
	W:d10q01MariaSavePetr
	W:tvirin
	A:GetItemCountOfType
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
	W:ui/NPC_Petr.png
	W:ui/NPC_Petr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500700074005f006d00610070005f00610067006c0061006a006100000053686f774d61700076006f006c006f006e00740065006500720073005f00640061006e006b006f00000064006900730065006100730065000000700065007400720000006d00610070005f006300680065007200740065007a005f007300740061007400650000006d00610070005f006300680065007200740065007a005f0066006f0072006300650000006f006f00640031003000500065007400720031000000640031003000710030003100000062006c00750065007000720069006e007400200069007300200067006900760065006e0000006400310030007100300031005f0062006c00750065007000720069006e00740000006f006f006400310030005000650074007200330000006400310030007100300031004d006100720069006100530061007600650050006500740072000000740076006900720069006e0000004765744974656d436f756e744f665479706500430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0050006500740072002e0070006e0067000000750069002f004e00500043005f0050006500740072005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x416
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xda Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x40e Vars = (object)
		EVENT_26 Op = 0x41a Vars = (string)
		EVENT_6 Op = 0x436 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x54a

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x49d

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 130.0
0xc: Call2 0x448

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x6d5

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x6d3

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x6d7

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x6d9

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x6c2

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x48c

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral" // @poff=89
0x59: Call2 0xc4

0x5a: Pop(1)
0x5b: Push((int) 512871)
0x5c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d: Pop(1)
0x5e: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x5f0

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x608

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 512854)
0x6f: Push((int) 14056)
0x70: Push((int) 14055)
0x71: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72: Pop(3)
0x73: PushEmpty(bool)
0x74: Stack[-1] = (bool) 0
0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x614

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x620

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Stack[-1] = (bool) 1
0x80: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x81: Push((int) 515468)
0x82: Push((int) 16586)
0x83: Push((int) 16585)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 0
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x62a

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x636

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x94: Push((int) 512879)
0x95: Push((int) 41846)
0x96: Push((int) 14081)
0x97: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x98: Pop(3)
0x99: Push((int) 512890)
0x9a: Push((int) -1)
0x9b: Push((int) 14092)
0x9c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9d: Pop(3)
0x9e: Push((int) 538887)
0x9f: Push((int) -1)
0xa0: Push((int) 40831)
0xa1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa2: Pop(3)
0xa3: GOTO 0xa6

0xa4: Return(); Pop(0)

0xa5: GOTO 0x55

0xa6: PushEmpty(bool)
0xa7: Call2 0x6db

0xa8: Pop(0)
0xa9: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaa: @ lshWaitForAnimEnd()
0xab: Pop(0)
0xac: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: GOTO 0xb4

0xaf: PushEmpty(string)
0xb0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb1: Call2 0x527

0xb2: Pop(1)
0xb3: GOTO 0xaa

0xb4: GOTO 0xc3

0xb5: Push("all") // @poff=138
0xb6: Push("idle") // @poff=146
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: @ WaitForAnimEnd()
0xba: Pop(0)
0xbb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: GOTO 0xc3

0xbe: Push("all") // @poff=138
0xbf: Push("idle") // @poff=146
0xc0: @ PlayAnimation(Stack[-2], Stack[-1])
0xc1: Pop(2)
0xc2: GOTO 0xb9

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: PushEmpty(bool)
0xc6: Call2 0x6db

0xc7: Pop(0)
0xc8: Pop(1); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: Return(); Pop(0)

0xcb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: Return(); Pop(0)

0xce: PushEmpty(string, bool)
0xcf: Stack[-3] = Stack[-2]
0xd0: Push("") // @poff=102
0xd1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd3: Stack[-1] = (bool) 0
0xd4: GOTO 0xd6

0xd5: Stack[-1] = (bool) 1
0xd6: Call2 0x52e

0xd7: Pop(2)
0xd8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: Push((int) 1)
0xdc: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0xdd: PushEmpty()
0xde: Call2 0x543

0xdf: Pop(0)
0xe0: Push((int) 14055)
0xe1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x5c9

0xe7: Pop(2)
0xe8: Push((int) 14078)
0xe9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x5cf

0xef: Pop(2)
0xf0: Push((int) 40843)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x5cf

0xf7: Pop(2)
0xf8: Push((int) 40845)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x5d8

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x5b8

0x104: Pop(2)
0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x5a0

0x109: Pop(2)
0x10a: Push((int) 41504)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x5d8

0x111: Pop(2)
0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x5b0

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x5b8

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x5a0

0x120: Pop(2)
0x121: Push((int) 16589)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x5d8

0x128: Pop(2)
0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x5b8

0x12d: Pop(2)
0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x5a0

0x132: Pop(2)
0x133: Push((int) 40844)
0x134: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x5d8

0x13a: Pop(2)
0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x5b8

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x5a0

0x144: Pop(2)
0x145: Push((int) 14081)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x5ea

0x14c: Pop(2)
0x14d: Push((int) 14073)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xc4

0x153: Pop(1)
0x154: Push((int) 512871)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x5f0

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x608

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push((int) 512854)
0x168: Push((int) 14056)
0x169: Push((int) 14055)
0x16a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16b: Pop(3)
0x16c: PushEmpty(bool)
0x16d: Stack[-1] = (bool) 0
0x16e: PushEmpty(bool, object)
0x16f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x170: Call2 0x614

0x171: Pop(1)
0x172: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x620

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Stack[-1] = (bool) 1
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: Push((int) 515468)
0x17b: Push((int) 16586)
0x17c: Push((int) 16585)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: PushEmpty(bool)
0x180: Stack[-1] = (bool) 0
0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x62a

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0x636

0x189: Pop(1)
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Stack[-1] = (bool) 1
0x18c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18d: Push((int) 512879)
0x18e: Push((int) 41846)
0x18f: Push((int) 14081)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Push((int) 512890)
0x193: Push((int) -1)
0x194: Push((int) 14092)
0x195: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x196: Pop(3)
0x197: Push((int) 538887)
0x198: Push((int) -1)
0x199: Push((int) 40831)
0x19a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 41846)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral" // @poff=89
0x1a2: Call2 0xc4

0x1a3: Pop(1)
0x1a4: Push((int) 539888)
0x1a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a6: Pop(1)
0x1a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a8: Pop(0)
0x1a9: Push((int) 539889)
0x1aa: Push((int) 41848)
0x1ab: Push((int) 41847)
0x1ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ad: Pop(3)
0x1ae: Push((int) 539892)
0x1af: Push((int) 41848)
0x1b0: Push((int) 41850)
0x1b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: Push((int) 41848)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral" // @poff=89
0x1b9: Call2 0xc4

0x1ba: Pop(1)
0x1bb: Push((int) 539890)
0x1bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bd: Pop(1)
0x1be: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bf: Pop(0)
0x1c0: Push((int) 539894)
0x1c1: Push((int) 41854)
0x1c2: Push((int) 41853)
0x1c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c4: Pop(3)
0x1c5: Push((int) 539893)
0x1c6: Push((int) 41856)
0x1c7: Push((int) 41852)
0x1c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 41856)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral" // @poff=89
0x1d0: Call2 0xc4

0x1d1: Pop(1)
0x1d2: Push((int) 539897)
0x1d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d4: Pop(1)
0x1d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d6: Pop(0)
0x1d7: Push((int) 539898)
0x1d8: Push((int) 41854)
0x1d9: Push((int) 41857)
0x1da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 41854)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral" // @poff=89
0x1e2: Call2 0xc4

0x1e3: Pop(1)
0x1e4: Push((int) 539895)
0x1e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e6: Pop(1)
0x1e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e8: Pop(0)
0x1e9: Push((int) 539891)
0x1ea: Push((int) 14082)
0x1eb: Push((int) 41849)
0x1ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ed: Pop(3)
0x1ee: Push((int) 539896)
0x1ef: Push((int) -1)
0x1f0: Push((int) 41855)
0x1f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 14082)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral" // @poff=89
0x1f9: Call2 0xc4

0x1fa: Pop(1)
0x1fb: Push((int) 512880)
0x1fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fd: Pop(1)
0x1fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ff: Pop(0)
0x200: Push((int) 512881)
0x201: Push((int) 14084)
0x202: Push((int) 14083)
0x203: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x204: Pop(3)
0x205: Push((int) 539568)
0x206: Push((int) 14086)
0x207: Push((int) 41507)
0x208: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x209: Pop(3)
0x20a: Return(); Pop(0)

0x20b: Push((int) 14084)
0x20c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x20e: PushEmpty(string)
0x20f: Stack[-1] = "Neutral" // @poff=89
0x210: Call2 0xc4

0x211: Pop(1)
0x212: Push((int) 512882)
0x213: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x214: Pop(1)
0x215: @@@ ClearReplies(); Obj=0 // @poff=116
0x216: Pop(0)
0x217: Push((int) 512883)
0x218: Push((int) 14086)
0x219: Push((int) 14085)
0x21a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 14086)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral" // @poff=89
0x222: Call2 0xc4

0x223: Pop(1)
0x224: Push((int) 512884)
0x225: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x226: Pop(1)
0x227: @@@ ClearReplies(); Obj=0 // @poff=116
0x228: Pop(0)
0x229: Push((int) 512885)
0x22a: Push((int) 14088)
0x22b: Push((int) 14087)
0x22c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22d: Pop(3)
0x22e: Push((int) 539569)
0x22f: Push((int) 14090)
0x230: Push((int) 41509)
0x231: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Push((int) 14088)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x237: PushEmpty(string)
0x238: Stack[-1] = "Neutral" // @poff=89
0x239: Call2 0xc4

0x23a: Pop(1)
0x23b: Push((int) 512886)
0x23c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23d: Pop(1)
0x23e: @@@ ClearReplies(); Obj=0 // @poff=116
0x23f: Pop(0)
0x240: Push((int) 512887)
0x241: Push((int) 14090)
0x242: Push((int) 14089)
0x243: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x244: Pop(3)
0x245: Return(); Pop(0)

0x246: Push((int) 14090)
0x247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral" // @poff=89
0x24b: Call2 0xc4

0x24c: Pop(1)
0x24d: Push((int) 512888)
0x24e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24f: Pop(1)
0x250: @@@ ClearReplies(); Obj=0 // @poff=116
0x251: Pop(0)
0x252: Push((int) 512889)
0x253: Push((int) -1)
0x254: Push((int) 14091)
0x255: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x256: Pop(3)
0x257: Push((int) 539570)
0x258: Push((int) -1)
0x259: Push((int) 41511)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: Return(); Pop(0)

0x25d: Push((int) 16586)
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x260: PushEmpty(string)
0x261: Stack[-1] = "Neutral" // @poff=89
0x262: Call2 0xc4

0x263: Pop(1)
0x264: Push((int) 515469)
0x265: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x266: Pop(1)
0x267: @@@ ClearReplies(); Obj=0 // @poff=116
0x268: Pop(0)
0x269: Push((int) 512858)
0x26a: Push((int) 14061)
0x26b: Push((int) 14059)
0x26c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26d: Pop(3)
0x26e: Push((int) 538897)
0x26f: Push((int) -1)
0x270: Push((int) 40844)
0x271: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 14061)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral" // @poff=89
0x279: Call2 0xc4

0x27a: Pop(1)
0x27b: Push((int) 512860)
0x27c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x27d: Pop(1)
0x27e: @@@ ClearReplies(); Obj=0 // @poff=116
0x27f: Pop(0)
0x280: Push((int) 512861)
0x281: Push((int) 14063)
0x282: Push((int) 14062)
0x283: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x284: Pop(3)
0x285: PushEmpty(bool, object)
0x286: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x287: Call2 0x5fc

0x288: Pop(1)
0x289: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28a: Push((int) 539559)
0x28b: Push((int) 41502)
0x28c: Push((int) 41498)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 41502)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral" // @poff=89
0x295: Call2 0xc4

0x296: Pop(1)
0x297: Push((int) 539563)
0x298: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x299: Pop(1)
0x29a: @@@ ClearReplies(); Obj=0 // @poff=116
0x29b: Pop(0)
0x29c: Push((int) 539564)
0x29d: Push((int) 14070)
0x29e: Push((int) 41503)
0x29f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Push((int) 14070)
0x2a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=89
0x2a7: Call2 0xc4

0x2a8: Pop(1)
0x2a9: Push((int) 512869)
0x2aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ab: Pop(1)
0x2ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ad: Pop(0)
0x2ae: Push((int) 515472)
0x2af: Push((int) -1)
0x2b0: Push((int) 16589)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 14063)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral" // @poff=89
0x2b9: Call2 0xc4

0x2ba: Pop(1)
0x2bb: Push((int) 512862)
0x2bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bd: Pop(1)
0x2be: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bf: Pop(0)
0x2c0: Push((int) 512865)
0x2c1: Push((int) 14067)
0x2c2: Push((int) 14066)
0x2c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 14067)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral" // @poff=89
0x2cb: Call2 0xc4

0x2cc: Pop(1)
0x2cd: Push((int) 512866)
0x2ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2cf: Pop(1)
0x2d0: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d1: Pop(0)
0x2d2: Push((int) 538898)
0x2d3: Push((int) -1)
0x2d4: Push((int) 40845)
0x2d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d6: Pop(3)
0x2d7: Push((int) 539565)
0x2d8: Push((int) -1)
0x2d9: Push((int) 41504)
0x2da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 14056)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral" // @poff=89
0x2e2: Call2 0xc4

0x2e3: Pop(1)
0x2e4: Push((int) 512855)
0x2e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e6: Pop(1)
0x2e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e8: Pop(0)
0x2e9: Push((int) 539530)
0x2ea: Push((int) 41463)
0x2eb: Push((int) 41462)
0x2ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ed: Pop(3)
0x2ee: Push((int) 539546)
0x2ef: Push((int) 41463)
0x2f0: Push((int) 41478)
0x2f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f2: Pop(3)
0x2f3: Return(); Pop(0)

0x2f4: Push((int) 41463)
0x2f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2f7: PushEmpty(string)
0x2f8: Stack[-1] = "Neutral" // @poff=89
0x2f9: Call2 0xc4

0x2fa: Pop(1)
0x2fb: Push((int) 539531)
0x2fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2fd: Pop(1)
0x2fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ff: Pop(0)
0x300: Push((int) 539532)
0x301: Push((int) 41465)
0x302: Push((int) 41464)
0x303: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x304: Pop(3)
0x305: Push((int) 539547)
0x306: Push((int) 41465)
0x307: Push((int) 41480)
0x308: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: Push((int) 41465)
0x30c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x30e: PushEmpty(string)
0x30f: Stack[-1] = "Neutral" // @poff=89
0x310: Call2 0xc4

0x311: Pop(1)
0x312: Push((int) 539533)
0x313: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x314: Pop(1)
0x315: @@@ ClearReplies(); Obj=0 // @poff=116
0x316: Pop(0)
0x317: Push((int) 539534)
0x318: Push((int) 41467)
0x319: Push((int) 41466)
0x31a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31b: Pop(3)
0x31c: Push((int) 539548)
0x31d: Push((int) 41483)
0x31e: Push((int) 41482)
0x31f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x320: Pop(3)
0x321: Return(); Pop(0)

0x322: Push((int) 41483)
0x323: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x325: PushEmpty(string)
0x326: Stack[-1] = "Neutral" // @poff=89
0x327: Call2 0xc4

0x328: Pop(1)
0x329: Push((int) 539549)
0x32a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x32b: Pop(1)
0x32c: @@@ ClearReplies(); Obj=0 // @poff=116
0x32d: Pop(0)
0x32e: Push((int) 539550)
0x32f: Push((int) 41467)
0x330: Push((int) 41484)
0x331: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x332: Pop(3)
0x333: Push((int) 539551)
0x334: Push((int) 41467)
0x335: Push((int) 41485)
0x336: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x337: Pop(3)
0x338: Return(); Pop(0)

0x339: Push((int) 41467)
0x33a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Neutral" // @poff=89
0x33e: Call2 0xc4

0x33f: Pop(1)
0x340: Push((int) 539535)
0x341: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x342: Pop(1)
0x343: @@@ ClearReplies(); Obj=0 // @poff=116
0x344: Pop(0)
0x345: Push((int) 539536)
0x346: Push((int) 41469)
0x347: Push((int) 41468)
0x348: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x349: Pop(3)
0x34a: Return(); Pop(0)

0x34b: Push((int) 41469)
0x34c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x34e: PushEmpty(string)
0x34f: Stack[-1] = "Neutral" // @poff=89
0x350: Call2 0xc4

0x351: Pop(1)
0x352: Push((int) 539537)
0x353: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x354: Pop(1)
0x355: @@@ ClearReplies(); Obj=0 // @poff=116
0x356: Pop(0)
0x357: Push((int) 539538)
0x358: Push((int) 41471)
0x359: Push((int) 41470)
0x35a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35b: Pop(3)
0x35c: Push((int) 539552)
0x35d: Push((int) 41471)
0x35e: Push((int) 41488)
0x35f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x360: Pop(3)
0x361: Return(); Pop(0)

0x362: Push((int) 41471)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x365: PushEmpty(string)
0x366: Stack[-1] = "Neutral" // @poff=89
0x367: Call2 0xc4

0x368: Pop(1)
0x369: Push((int) 539539)
0x36a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x36b: Pop(1)
0x36c: @@@ ClearReplies(); Obj=0 // @poff=116
0x36d: Pop(0)
0x36e: Push((int) 539540)
0x36f: Push((int) 41473)
0x370: Push((int) 41472)
0x371: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x372: Pop(3)
0x373: Return(); Pop(0)

0x374: Push((int) 41473)
0x375: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x377: PushEmpty(string)
0x378: Stack[-1] = "Neutral" // @poff=89
0x379: Call2 0xc4

0x37a: Pop(1)
0x37b: Push((int) 539541)
0x37c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37d: Pop(1)
0x37e: @@@ ClearReplies(); Obj=0 // @poff=116
0x37f: Pop(0)
0x380: Push((int) 539585)
0x381: Push((int) 41531)
0x382: Push((int) 41530)
0x383: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x384: Pop(3)
0x385: Return(); Pop(0)

0x386: Push((int) 41531)
0x387: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x389: PushEmpty(string)
0x38a: Stack[-1] = "Neutral" // @poff=89
0x38b: Call2 0xc4

0x38c: Pop(1)
0x38d: Push((int) 539586)
0x38e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38f: Pop(1)
0x390: @@@ ClearReplies(); Obj=0 // @poff=116
0x391: Pop(0)
0x392: Push((int) 512856)
0x393: Push((int) 14058)
0x394: Push((int) 14057)
0x395: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x396: Pop(3)
0x397: Push((int) 539553)
0x398: Push((int) 41491)
0x399: Push((int) 41490)
0x39a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39b: Pop(3)
0x39c: Return(); Pop(0)

0x39d: Push((int) 41491)
0x39e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3a0: PushEmpty(string)
0x3a1: Stack[-1] = "Neutral" // @poff=89
0x3a2: Call2 0xc4

0x3a3: Pop(1)
0x3a4: Push((int) 539554)
0x3a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a6: Pop(1)
0x3a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a8: Pop(0)
0x3a9: Push((int) 539555)
0x3aa: Push((int) 41493)
0x3ab: Push((int) 41492)
0x3ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ad: Pop(3)
0x3ae: Push((int) 539557)
0x3af: Push((int) 41493)
0x3b0: Push((int) 41494)
0x3b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b2: Pop(3)
0x3b3: Return(); Pop(0)

0x3b4: Push((int) 41493)
0x3b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3b7: PushEmpty(string)
0x3b8: Stack[-1] = "Neutral" // @poff=89
0x3b9: Call2 0xc4

0x3ba: Pop(1)
0x3bb: Push((int) 539556)
0x3bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3bd: Pop(1)
0x3be: @@@ ClearReplies(); Obj=0 // @poff=116
0x3bf: Pop(0)
0x3c0: Push((int) 539558)
0x3c1: Push((int) 14058)
0x3c2: Push((int) 41496)
0x3c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c4: Pop(3)
0x3c5: Return(); Pop(0)

0x3c6: Push((int) 14058)
0x3c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = "Neutral" // @poff=89
0x3cb: Call2 0xc4

0x3cc: Pop(1)
0x3cd: Push((int) 512857)
0x3ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3cf: Pop(1)
0x3d0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d1: Pop(0)
0x3d2: Push((int) 512859)
0x3d3: Push((int) 14077)
0x3d4: Push((int) 14060)
0x3d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d6: Pop(3)
0x3d7: Return(); Pop(0)

0x3d8: Push((int) 14077)
0x3d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3db: PushEmpty(string)
0x3dc: Stack[-1] = "Neutral" // @poff=89
0x3dd: Call2 0xc4

0x3de: Pop(1)
0x3df: Push((int) 512875)
0x3e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3e1: Pop(1)
0x3e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x3e3: Pop(0)
0x3e4: Push((int) 512876)
0x3e5: Push((int) -1)
0x3e6: Push((int) 14078)
0x3e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e8: Pop(3)
0x3e9: Push((int) 538893)
0x3ea: Push((int) 40839)
0x3eb: Push((int) 40838)
0x3ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: Push((int) 40839)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Neutral" // @poff=89
0x3f4: Call2 0xc4

0x3f5: Pop(1)
0x3f6: Push((int) 538894)
0x3f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f8: Pop(1)
0x3f9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3fa: Pop(0)
0x3fb: Push((int) 538896)
0x3fc: Push((int) -1)
0x3fd: Push((int) 40843)
0x3fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ff: Pop(3)
0x400: Return(); Pop(0)

0x401: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x402: PushEmpty(bool)
0x403: Call2 0x6db

0x404: Pop(0)
0x405: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x406: @ lshStopAnimation()
0x407: Pop(0)
0x408: GOTO 0x40b

0x409: @ StopAnimation()
0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: GOTO 0xdb

0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: PushEmpty(int, object)
0x410: Stack[-3] = Stack[-1]
0x411: Push(-2, 1); TaskCall(0)
0x412: Call2 0x0

0x413: Pop(-2, 1); TaskReturn
0x414: Pop(2)
0x415: Return(); Pop(0)

0x416: @ Hold()
0x417: Pop(0)
0x418: GOTO 0x416

0x419: Return(); Pop(0)

0x41a: PushEmpty(bool, bool)
0x41b: Push("cleanup") // @poff=156
0x41c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x41e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x41f: @ IsLoaded(Stack[-1])
0x420: Pop(0)
0x421: PushEmpty(bool)
0x422: Stack[-1] = (bool) 0
0x423: Pop(0); Push((bool) Stack[-2] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x425: PushEmpty(bool)
0x426: Call2 0x446

0x427: Pop(0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[-1] = (bool) 1
0x42a: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42b: PushEmpty(object)
0x42c: Call2 0x54a

0x42d: Pop(0)
0x42e: @ RemoveActor(Stack[-1])
0x42f: Pop(1)
0x430: GOTO 0x435

0x431: Push("restore") // @poff=172
0x432: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x435: Return(); Pop(2)

0x436: PushEmpty(bool)
0x437: Stack[-1] = (bool) 0
0x438: Push( Stack[0 + Tasks[-1].StackPointer] )
0x439: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43a: PushEmpty(bool)
0x43b: Call2 0x446

0x43c: Pop(0)
0x43d: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43e: Stack[-1] = (bool) 1
0x43f: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x440: PushEmpty(object)
0x441: Call2 0x54a

0x442: Pop(0)
0x443: @ RemoveActor(Stack[-1])
0x444: Pop(1)
0x445: Return(); Pop(0)

0x446: Stack[-1] = (bool) 1
0x447: Return(); Pop(0)

0x448: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x449: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x44a: Pop(0)
0x44b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x44c: Pop(0)
0x44d: Push(CvectorIndex(Stack[-8], 1))
0x44e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x44f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x450: @ GetPosition(Stack[-7])
0x451: Pop(0)
0x452: @ GetEyesHeight(Stack[-9])
0x453: Pop(0)
0x454: Push(CvectorIndex(Stack[-7], 1))
0x455: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x456: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x457: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x458: Push(CvectorIndex(Stack[-6], 1))
0x459: Stack[-1] = (int) 0
0x45a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x45b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x45c: Pop(1); Push(Sqrt(Stack[-1]))
0x45d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x45e: Stack[-5] = -Stack[-6]; Pop(0);
0x45f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x460: PushEmpty(cvector, cvector)
0x461: Push([0.0, 1.0, 0.0])
0x462: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x463: Call2 0x550

0x464: Pop(1)
0x465: Push((int) 25)
0x466: Pop(2); Push(Stack[-2] * Stack[-1]);
0x467: Pop(2); Push(Stack[-2] + Stack[-1]);
0x468: Push([0.0, 10.0, 0.0])
0x469: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x46a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x46b: @ IsOverrideActive(Stack[-2])
0x46c: Pop(0)
0x46d: Push(Stack[-2])
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-21] = (bool) 0
0x470: Return(); Pop(18)

0x471: @ StopWorld()
0x472: Pop(0)
0x473: @ CameraTransit(Stack[-3], Stack[-5])
0x474: Pop(0)
0x475: Push(CvectorIndex(Stack[-4], 0))
0x476: Push(CvectorIndex(Stack[-5], 2))
0x477: @ Rotate(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: PushEmpty(bool)
0x47a: Call2 0x6db

0x47b: Pop(0)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: GOTO 0x486

0x47e: Push("head") // @poff=214
0x47f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x480: Pop(1)
0x481: Push(Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x483: Push("head") // @poff=214
0x484: @ LookAsyncCamera(Stack[-1])
0x485: Pop(1)
0x486: @ CameraWaitForPlayFinish()
0x487: Pop(0)
0x488: @ ResumeWorld()
0x489: Pop(0)
0x48a: Stack[-21] = (bool) 1
0x48b: Return(); Pop(18)

0x48c: PushEmpty(bool, bool)
0x48d: @ CameraSwitchToNormal()
0x48e: Pop(0)
0x48f: PushEmpty(bool)
0x490: Call2 0x6db

0x491: Pop(0)
0x492: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x493: GOTO 0x49c

0x494: Push("head") // @poff=214
0x495: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x496: Pop(1)
0x497: Push(Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x499: Push("head") // @poff=214
0x49a: @ UnlookAsync(Stack[-1])
0x49b: Pop(1)
0x49c: Return(); Pop(2)

0x49d: PushEmpty(int, int, int, int)
0x49e: Push("voice_common") // @poff=224
0x49f: @ GetVariable(Stack[-1], Stack[-3])
0x4a0: Pop(1)
0x4a1: Push(Stack[-2])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4a3: PushEmpty(bool, object)
0x4a4: Stack[-7] = Stack[-1]
0x4a5: Call2 0x4d7

0x4a6: Pop(1)
0x4a7: Pop(1); Push((bool) Stack[-1] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a9: PushEmpty(bool, object)
0x4aa: Stack[-7] = Stack[-1]
0x4ab: Call2 0x4fc

0x4ac: Pop(1)
0x4ad: Pop(1); Push((bool) Stack[-1] == 0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-6] = (bool) 0
0x4b0: Return(); Pop(4)

0x4b1: Push((int) 2)
0x4b2: @ irand(Stack[-2], Stack[-1])
0x4b3: Pop(1)
0x4b4: Push(Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b6: Push("voice_common") // @poff=224
0x4b7: Push((int) 1)
0x4b8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4b9: Push((int) 3)
0x4ba: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4bb: @ SetVariable(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: GOTO 0x4c2

0x4be: Push("voice_common") // @poff=224
0x4bf: Push((int) 0)
0x4c0: @ SetVariable(Stack[-2], Stack[-1])
0x4c1: Pop(2)
0x4c2: GOTO 0x4d5

0x4c3: PushEmpty(bool, object)
0x4c4: Stack[-7] = Stack[-1]
0x4c5: Call2 0x4fc

0x4c6: Pop(1)
0x4c7: Pop(1); Push((bool) Stack[-1] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4c9: PushEmpty(bool, object)
0x4ca: Stack[-7] = Stack[-1]
0x4cb: Call2 0x4d7

0x4cc: Pop(1)
0x4cd: Pop(1); Push((bool) Stack[-1] == 0)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-6] = (bool) 0
0x4d0: Return(); Pop(4)

0x4d1: Push("voice_common") // @poff=224
0x4d2: Push((int) 1)
0x4d3: @ SetVariable(Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: Stack[-6] = (bool) 1
0x4d6: Return(); Pop(4)

0x4d7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4d8: Stack[-5] = "c" // @poff=250
0x4d9: Stack[-4] = (int) 0
0x4da: Push((int) 1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4dc: Push((int) 1)
0x4dd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4de: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4df: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x4e0: Pop(1)
0x4e1: Pop(0); Push((bool) Stack[-3] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: GOTO 0x4e7

0x4e4: Push((int) 1)
0x4e5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4e6: GOTO 0x4da

0x4e7: Pop(0); Push((bool) Stack[-4] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-12] = (bool) 0
0x4ea: Return(); Pop(10)

0x4eb: Stack[-2] = (int) 0
0x4ec: Push((int) 1)
0x4ed: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ef: @ irand(Stack[-2], Stack[-4])
0x4f0: Pop(0)
0x4f1: Push((int) 1)
0x4f2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4f3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4f4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x4f5: Pop(1)
0x4f6: PushEmpty(bool, string)
0x4f7: Stack[-3] = Stack[-1]
0x4f8: Call2 0x534

0x4f9: Stack[-2] = Stack[-14]
0x4fa: Pop(2)
0x4fb: Return(); Pop(10)

0x4fc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4fd: Push("d") // @poff=220
0x4fe: PushEmpty(int)
0x4ff: Call2 0x597

0x500: Pop(0)
0x501: Pop(2); Push(Stack[-2] + Stack[-1]);
0x502: Push("m") // @poff=278
0x503: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x504: Stack[-4] = (int) 0
0x505: Push((int) 1)
0x506: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x507: Push((int) 1)
0x508: Pop(1); Push(Stack[-5] + Stack[-1]);
0x509: Pop(1); Push(Stack[-6] + Stack[-1]);
0x50a: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x50b: Pop(1)
0x50c: Pop(0); Push((bool) Stack[-3] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50e: GOTO 0x512

0x50f: Push((int) 1)
0x510: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x511: GOTO 0x505

0x512: Pop(0); Push((bool) Stack[-4] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-12] = (bool) 0
0x515: Return(); Pop(10)

0x516: Stack[-2] = (int) 0
0x517: Push((int) 1)
0x518: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51a: @ irand(Stack[-2], Stack[-4])
0x51b: Pop(0)
0x51c: Push((int) 1)
0x51d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x51e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x51f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x520: Pop(1)
0x521: PushEmpty(bool, string)
0x522: Stack[-3] = Stack[-1]
0x523: Call2 0x534

0x524: Stack[-2] = Stack[-14]
0x525: Pop(2)
0x526: Return(); Pop(10)

0x527: PushEmpty(float, float, float, float)
0x528: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x529: Pop(0)
0x52a: Push((bool) 0)
0x52b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(1)
0x52d: Return(); Pop(4)

0x52e: PushEmpty(float, float, float, float)
0x52f: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x530: Pop(0)
0x531: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x532: Pop(0)
0x533: Return(); Pop(4)

0x534: PushEmpty(bool, bool)
0x535: PushEmpty(bool)
0x536: Call2 0x6db

0x537: Pop(0)
0x538: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x539: @ lshHasSpeech(Stack[-1], Stack[-3])
0x53a: Pop(0)
0x53b: Push(Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53d: @ lshPlaySpeech(Stack[-3])
0x53e: Pop(0)
0x53f: Stack[-4] = (bool) 1
0x540: Return(); Pop(2)

0x541: Stack[-4] = (bool) 0
0x542: Return(); Pop(2)

0x543: PushEmpty(bool)
0x544: Call2 0x6db

0x545: Pop(0)
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: @ lshStopSpeech()
0x548: Pop(0)
0x549: Return(); Pop(0)

0x54a: PushEmpty(object, object)
0x54b: @ self(Stack[-1])
0x54c: Pop(0)
0x54d: Stack[-1] = Stack[-3]
0x54e: Return(); Pop(2)

0x54f: Stack[-1] = 0
0x550: PushEmpty(float, float)
0x551: Pop(0); Push(Stack[-3] | Stack[-3]);
0x552: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x553: Push((float)9.999999974752427e-07)
0x554: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-4] = [0.0, 0.0, 0.0]
0x557: Return(); Pop(2)

0x558: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x559: Return(); Pop(2)

0x55a: PushEmpty(int, int)
0x55b: @ GetVariable(Stack[-3], Stack[-1])
0x55c: Pop(0)
0x55d: Stack[-1] = Stack[-4]
0x55e: Return(); Pop(2)

0x55f: PushEmpty(object, object)
0x560: @ CreateIntVector(Stack[-1])
0x561: Pop(0)
0x562: @@ add(Stack[-4]); Obj=1 // @poff=282
0x563: Pop(0)
0x564: @@ add(Stack[-3]); Obj=1 // @poff=282
0x565: Pop(0)
0x566: Push((int) 3)
0x567: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x568: Pop(1)
0x569: Return(); Pop(2)

0x56a: Stack[-1] = 0
0x56b: PushEmpty(int, int, bool, int, int, bool)
0x56c: @@ GetItemID(Stack[-3]); Obj=8 // @poff=286
0x56d: Pop(0)
0x56e: Push("Category") // @poff=296
0x56f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x570: Pop(1)
0x571: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=314
0x572: Pop(0)
0x573: Pop(0); Push((bool) Stack[-1] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x575: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=322
0x576: Pop(0)
0x577: GOTO 0x57d

0x578: PushEmpty(int, int)
0x579: Stack[-5] = Stack[-2]
0x57a: Stack[-9] = Stack[-1]
0x57b: Call2 0x55f

0x57c: Pop(2)
0x57d: Return(); Pop(6)

0x57e: PushEmpty(object, object)
0x57f: @ CreateInvItem(Stack[-1])
0x580: Pop(0)
0x581: @@ SetItemName(Stack[-4]); Obj=1 // @poff=332
0x582: Pop(0)
0x583: PushEmpty(object, object, int)
0x584: Stack[-8] = Stack[-3]
0x585: Stack[-4] = Stack[-2]
0x586: Stack[-6] = Stack[-1]
0x587: Call2 0x56b

0x588: Pop(3)
0x589: Return(); Pop(2)

0x58a: Stack[-1] = 0
0x58b: PushEmpty(object, object)
0x58c: @ FindActor(Stack[-1], Stack[-5])
0x58d: Pop(0)
0x58e: Pop(0); PushNull((bool) Stack[-1] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-6] = (bool) 0
0x591: Return(); Pop(2)

0x592: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x593: Pop(0)
0x594: Stack[-6] = (bool) 1
0x595: Return(); Pop(2)

0x596: Stack[-1] = 0
0x597: PushEmpty(float, float)
0x598: @ GetGameTime(Stack[-1])
0x599: Pop(0)
0x59a: Push((int) 1)
0x59b: PushEmpty(int)
0x59c: Push((int) 24)
0x59d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x59e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x59f: Return(); Pop(2)

0x5a0: PushEmpty()
0x5a1: PushEmpty(object, string, float)
0x5a2: PushEmpty(object)
0x5a3: Call2 0x690

0x5a4: Stack[-1] = Stack[-4]
0x5a5: Pop(1)
0x5a6: Stack[-2] = "pt_map_aglaja" // @poff=344
0x5a7: Stack[-1] = (int) 2
0x5a8: Call2 0x6a1

0x5a9: Pop(3)
0x5aa: PushEmpty(object)
0x5ab: Call2 0x690

0x5ac: Pop(0)
0x5ad: @@ ShowMap(Stack[-1]); Obj=2 // @poff=372
0x5ae: Pop(1)
0x5af: Return(); Pop(0)

0x5b0: PushEmpty()
0x5b1: PushEmpty(bool, string, string, string)
0x5b2: Stack[-3] = "volonteers_danko" // @poff=380
0x5b3: Stack[-2] = "disease" // @poff=414
0x5b4: Stack[-1] = "petr" // @poff=430
0x5b5: Call2 0x58b

0x5b6: Pop(4)
0x5b7: Return(); Pop(0)

0x5b8: PushEmpty()
0x5b9: PushEmpty(int, string)
0x5ba: Stack[-1] = "map_chertez_state" // @poff=440
0x5bb: Call2 0x55a

0x5bc: Pop(1)
0x5bd: Push((int) 4)
0x5be: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c0: Push("map_chertez_state") // @poff=440
0x5c1: Push((int) 4)
0x5c2: @ SetVariable(Stack[-2], Stack[-1])
0x5c3: Pop(2)
0x5c4: Push("map_chertez_force") // @poff=476
0x5c5: Push((int) 1)
0x5c6: @ SetVariable(Stack[-2], Stack[-1])
0x5c7: Pop(2)
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: Push("ood10Petr1") // @poff=512
0x5cb: Push((int) 1)
0x5cc: @ SetVariable(Stack[-2], Stack[-1])
0x5cd: Pop(2)
0x5ce: Return(); Pop(0)

0x5cf: PushEmpty()
0x5d0: Push("d10q01") // @poff=534
0x5d1: Push((int) 2)
0x5d2: @ SetVariable(Stack[-2], Stack[-1])
0x5d3: Pop(2)
0x5d4: PushEmpty()
0x5d5: Call2 0x64d

0x5d6: Pop(0)
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: Push("d10q01") // @poff=534
0x5da: Push((int) 3)
0x5db: @ SetVariable(Stack[-2], Stack[-1])
0x5dc: Pop(2)
0x5dd: PushEmpty()
0x5de: Call2 0x65a

0x5df: Pop(0)
0x5e0: Push("blueprint is given") // @poff=548
0x5e1: @ Trace(Stack[-1])
0x5e2: Pop(1)
0x5e3: PushEmpty(object, string, int)
0x5e4: Stack[-5] = Stack[-3]
0x5e5: Stack[-2] = "d10q01_blueprint" // @poff=586
0x5e6: Stack[-1] = (int) 1
0x5e7: Call2 0x57e

0x5e8: Pop(3)
0x5e9: Return(); Pop(0)

0x5ea: PushEmpty()
0x5eb: Push("ood10Petr3") // @poff=620
0x5ec: Push((int) 1)
0x5ed: @ SetVariable(Stack[-2], Stack[-1])
0x5ee: Pop(2)
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: PushEmpty(int, string)
0x5f2: Stack[-1] = "ood10Petr1" // @poff=512
0x5f3: Call2 0x55a

0x5f4: Pop(1)
0x5f5: Push((int) 0)
0x5f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-2] = (bool) 1
0x5f9: Return(); Pop(0)

0x5fa: Stack[-2] = (bool) 0
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty()
0x5fd: PushEmpty(int, string)
0x5fe: Stack[-1] = "d10q01MariaSavePetr" // @poff=642
0x5ff: Call2 0x55a

0x600: Pop(1)
0x601: Push((int) 1)
0x602: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-2] = (bool) 1
0x605: Return(); Pop(0)

0x606: Stack[-2] = (bool) 0
0x607: Return(); Pop(0)

0x608: PushEmpty()
0x609: PushEmpty(int, string)
0x60a: Stack[-1] = "d10q01" // @poff=534
0x60b: Call2 0x55a

0x60c: Pop(1)
0x60d: Push((int) 1)
0x60e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[-2] = (bool) 1
0x611: Return(); Pop(0)

0x612: Stack[-2] = (bool) 0
0x613: Return(); Pop(0)

0x614: PushEmpty()
0x615: PushEmpty(int, string)
0x616: Stack[-1] = "d10q01" // @poff=534
0x617: Call2 0x55a

0x618: Pop(1)
0x619: Push((int) 2)
0x61a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-2] = (bool) 1
0x61d: Return(); Pop(0)

0x61e: Stack[-2] = (bool) 0
0x61f: Return(); Pop(0)

0x620: PushEmpty()
0x621: PushEmpty(bool, object)
0x622: Stack[-3] = Stack[-1]
0x623: Call2 0x642

0x624: Pop(1)
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-2] = (bool) 1
0x627: Return(); Pop(0)

0x628: Stack[-2] = (bool) 0
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty(int, string)
0x62c: Stack[-1] = "d10q01" // @poff=534
0x62d: Call2 0x55a

0x62e: Pop(1)
0x62f: Push((int) 3)
0x630: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-2] = (bool) 1
0x633: Return(); Pop(0)

0x634: Stack[-2] = (bool) 0
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: PushEmpty(int, string)
0x638: Stack[-1] = "ood10Petr3" // @poff=620
0x639: Call2 0x55a

0x63a: Pop(1)
0x63b: Push((int) 0)
0x63c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63e: Stack[-2] = (bool) 1
0x63f: Return(); Pop(0)

0x640: Stack[-2] = (bool) 0
0x641: Return(); Pop(0)

0x642: PushEmpty(int, int)
0x643: Push("tvirin") // @poff=682
0x644: @@ GetItemCountOfType(Stack[-2], Stack[-1]); Obj=4 // @poff=696
0x645: Pop(1)
0x646: Push((int) 5)
0x647: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-4] = (bool) 1
0x64a: Return(); Pop(2)

0x64b: Stack[-4] = (bool) 0
0x64c: Return(); Pop(2)

0x64d: PushEmpty(object, object)
0x64e: Push((int) 189)
0x64f: Push((int) 1)
0x650: Push((int) 515474)
0x651: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x652: Pop(3)
0x653: PushEmpty(bool, object, int)
0x654: Stack[-4] = Stack[-2]
0x655: Stack[-1] = (int) 186
0x656: Call2 0x674

0x657: Pop(3)
0x658: Return(); Pop(2)

0x659: Stack[-1] = 0
0x65a: PushEmpty(object, object)
0x65b: Push((int) 190)
0x65c: Push((int) 1)
0x65d: Push((int) 515475)
0x65e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(3)
0x660: PushEmpty(bool, object, int)
0x661: Stack[-4] = Stack[-2]
0x662: Stack[-1] = (int) 186
0x663: Call2 0x674

0x664: Pop(3)
0x665: Return(); Pop(2)

0x666: Stack[-1] = 0
0x667: PushEmpty(object, object)
0x668: @ GetDiaryRoot(Stack[-1])
0x669: Pop(0)
0x66a: Pop(0); Push((bool) Stack[-1] == 0)
0x66b: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66c: Push("Can't retrieve diary root") // @poff=715
0x66d: @ Trace(Stack[-1])
0x66e: Pop(1)
0x66f: Stack[-3] = (bool) 0
0x670: Return(); Pop(2)

0x671: Stack[-1] = Stack[-3]
0x672: Return(); Pop(2)

0x673: Stack[-1] = 0
0x674: PushEmpty(object, object, int, object, object, int)
0x675: PushEmpty(object)
0x676: Call2 0x667

0x677: Stack[-1] = Stack[-4]
0x678: Pop(1)
0x679: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=767
0x67a: Pop(0)
0x67b: Pop(0); Push((bool) Stack[-2] == 0)
0x67c: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67d: Push("Can't find diary parent with id: ") // @poff=772
0x67e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x67f: @ Trace(Stack[-1])
0x680: Pop(1)
0x681: Stack[-9] = (bool) 0
0x682: Return(); Pop(6)

0x683: @@ AddChild(Stack[-8]); Obj=2 // @poff=840
0x684: Pop(0)
0x685: Push((int) 7)
0x686: @ SendWorldWndMessage(Stack[-1])
0x687: Pop(1)
0x688: @@ GetCategory(Stack[-1]); Obj=8 // @poff=849
0x689: Pop(0)
0x68a: @ SetDiarySection(Stack[-1])
0x68b: Pop(0)
0x68c: Stack[-9] = (bool) 0
0x68d: Return(); Pop(6)

0x68e: Stack[-2] = 0
0x68f: Stack[-3] = 0
0x690: PushEmpty(object, object, object, object)
0x691: @ GetMainOutdoorScene(Stack[-2])
0x692: Pop(0)
0x693: Pop(0); PushNull((bool) Stack[-2] == 0)
0x694: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x695: Push("Can't find main outdoor scene") // @poff=861
0x696: @ Trace(Stack[-1])
0x697: Pop(1)
0x698: Stack[-1] = 0
0x699: Stack[-1] = Stack[-5]
0x69a: Return(); Pop(4)

0x69b: @@ GetMap(Stack[-1]); Obj=2 // @poff=921
0x69c: Pop(0)
0x69d: Stack[-1] = Stack[-5]
0x69e: Return(); Pop(4)

0x69f: Stack[-1] = 0
0x6a0: Stack[-2] = 0
0x6a1: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x6a2: @ GetMainOutdoorScene(Stack[-2])
0x6a3: Pop(0)
0x6a4: Pop(0); PushNull((bool) Stack[-2] == 0)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a6: Push("Can't find main outdoor scene") // @poff=861
0x6a7: @ Trace(Stack[-1])
0x6a8: Pop(1)
0x6a9: Return(); Pop(8)

0x6aa: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=928
0x6ab: Pop(0)
0x6ac: Pop(0); Push((bool) Stack[-1] == 0)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6ae: Push("Warning: outdoor scene locator ") // @poff=939
0x6af: Pop(1); Push(Stack[-1] + Stack[-11]);
0x6b0: Push(" doesnt exist") // @poff=1003
0x6b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b2: @ Trace(Stack[-1])
0x6b3: Pop(1)
0x6b4: @@ GetMap(Stack[-11]); Obj=2 // @poff=921
0x6b5: Pop(0)
0x6b6: Pop(0); PushNull((bool) Stack[-11] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b8: Push("Can't find map") // @poff=1031
0x6b9: @ Trace(Stack[-1])
0x6ba: Pop(1)
0x6bb: Return(); Pop(8)

0x6bc: Push(CvectorIndex(Stack[-4], 0))
0x6bd: Push(CvectorIndex(Stack[-5], 2))
0x6be: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=1061
0x6bf: Pop(2)
0x6c0: Return(); Pop(8)

0x6c1: Stack[-2] = 0
0x6c2: PushEmpty(int, int)
0x6c3: Push("branch") // @poff=1074
0x6c4: @ GetVariable(Stack[-1], Stack[-2])
0x6c5: Pop(1)
0x6c6: Push((int) 0)
0x6c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c9: Stack[-3] = (int) 1
0x6ca: Return(); Pop(2)

0x6cb: GOTO 0x6d1

0x6cc: Push((int) 1)
0x6cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cf: Stack[-3] = (int) 2
0x6d0: Return(); Pop(2)

0x6d1: Stack[-3] = (int) 3
0x6d2: Return(); Pop(2)

0x6d3: Stack[-1] = (int) 539028
0x6d4: Return(); Pop(0)

0x6d5: Stack[-1] = (int) 539027
0x6d6: Return(); Pop(0)

0x6d7: Stack[-1] = "ui/NPC_Petr.png" // @poff=1088
0x6d8: Return(); Pop(0)

0x6d9: Stack[-1] = "ui/NPC_Petr_b.png" // @poff=1120
0x6da: Return(); Pop(0)

0x6db: Stack[-1] = (bool) 0
0x6dc: Return(); Pop(0)

