GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	W:ui/NPC_Alexandr.png
	W:ui/NPC_Alexandr_b.png
	W:b2q01
	W:b2q01AlexandrGotoOspina
	W:pt_map_ospina
	A:AddMark
	W:oob2Alexandr1
	W:oob2Alexandr2
	W:key is given
	W:b2q01_key
	A:ShowMap
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500750069002f004e00500043005f0041006c006500780061006e00640072002e0070006e0067000000750069002f004e00500043005f0041006c006500780061006e00640072005f0062002e0070006e00670000006200320071003000310000006200320071003000310041006c006500780061006e006400720047006f0074006f004f007300700069006e0061000000700074005f006d00610070005f006f007300700069006e00610000004164644d61726b006f006f006200320041006c006500780061006e0064007200310000006f006f006200320041006c006500780061006e0064007200320000006b0065007900200069007300200067006900760065006e000000620032007100300031005f006b0065007900000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	IsLoaded (1 args)
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
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x514
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d9 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x41f Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4ea Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x566 Vars = (int)
		EVENT_6 Op = 0x58c Vars = ()
		EVENT_5 Op = 0x59b Vars = ()
		EVENT_45 Op = 0x5a8 Vars = (bool)
		EVENT_0 Op = 0x5b4 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x638

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
0x11: Call2 0x73f

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x692

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x63d

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x7ae

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x7ac

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x7b0

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x7b2

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x880

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
0x55: Call2 0x681

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
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 535294)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535295)
0x6e: Push((int) 36973)
0x6f: Push((int) 36972)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535302)
0x73: Push((int) -1)
0x74: Push((int) 36980)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535303)
0x78: Push((int) -1)
0x79: Push((int) 36981)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x7b4

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x71c

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x7b4

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x723

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x738

0xb8: Pop(0)
0xb9: Push((int) 36971)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535294)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535295)
0xc6: Push((int) 36973)
0xc7: Push((int) 36972)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535302)
0xcb: Push((int) -1)
0xcc: Push((int) 36980)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535303)
0xd0: Push((int) -1)
0xd1: Push((int) 36981)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36973)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535296)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535297)
0xe2: Push((int) 36975)
0xe3: Push((int) 36974)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535301)
0xe7: Push((int) 36975)
0xe8: Push((int) 36978)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36975)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535298)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535299)
0xf9: Push((int) -1)
0xfa: Push((int) 36976)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535300)
0xfe: Push((int) -1)
0xff: Push((int) 36977)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x7b4

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xb4

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object)
0x113: PushEmpty(object)
0x114: Call2 0x73f

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x692

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x63d

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x7ae

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x7ac

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x7b0

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x7b2

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x880

0x13a: Pop(0)
0x13b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x13c: Pop(1)
0x13d: Stack[-2] = (int) -1
0x13e: @ IsOverrideActive(Stack[-3])
0x13f: Pop(0)
0x140: Push(Stack[-3])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ DoDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(object, object)
0x147: Stack[-11] = Stack[-2]
0x148: Stack[-6] = Stack[-1]
0x149: Push(-2, 4); TaskCall(4)
0x14a: Call2 0x161

0x14b: Pop(-2, 4); TaskReturn
0x14c: Pop(2)
0x14d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: @ sync()
0x152: Pop(0)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: GOTO 0x14f

0x156: PushEmpty(object)
0x157: Stack[-10] = Stack[-1]
0x158: Call2 0x681

0x159: Pop(1)
0x15a: @ StopDialog(Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x15d: Pop(0)
0x15e: Stack[-2] = Stack[-10]
0x15f: Return(); Pop(8)

0x160: Stack[-4] = 0
0x161: PushEmpty()
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x163: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x165: Push((int) 1)
0x166: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x7f4

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0x1c3

0x16f: Pop(1)
0x170: Push((int) 518239)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 518240)
0x176: Push((int) 20533)
0x177: Push((int) 19349)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 519398)
0x17b: Push((int) 20561)
0x17c: Push((int) 20560)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: GOTO 0x1a5

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral" // @poff=89
0x182: Call2 0x1c3

0x183: Pop(1)
0x184: Push((int) 518241)
0x185: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x186: Pop(1)
0x187: @@@ ClearReplies(); Obj=0 // @poff=116
0x188: Pop(0)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Call2 0x800

0x18c: Pop(1)
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Push((int) 519376)
0x18f: Push((int) 20538)
0x190: Push((int) 20537)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x195: Call2 0x80c

0x196: Pop(1)
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: Push((int) 519382)
0x199: Push((int) 20544)
0x19a: Push((int) 20543)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Push((int) 518242)
0x19e: Push((int) -1)
0x19f: Push((int) 19351)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: GOTO 0x1a5

0x1a3: Return(); Pop(0)

0x1a4: GOTO 0x165

0x1a5: PushEmpty(bool)
0x1a6: Call2 0x7b4

0x1a7: Pop(0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a9: @ lshWaitForAnimEnd()
0x1aa: Pop(0)
0x1ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: GOTO 0x1b3

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1b0: Call2 0x71c

0x1b1: Pop(1)
0x1b2: GOTO 0x1a9

0x1b3: GOTO 0x1c2

0x1b4: Push("all") // @poff=138
0x1b5: Push("idle") // @poff=146
0x1b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: @ WaitForAnimEnd()
0x1b9: Pop(0)
0x1ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: GOTO 0x1c2

0x1bd: Push("all") // @poff=138
0x1be: Push("idle") // @poff=146
0x1bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: GOTO 0x1b8

0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: PushEmpty(bool)
0x1c5: Call2 0x7b4

0x1c6: Pop(0)
0x1c7: Pop(1); Push((bool) Stack[-1] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Return(); Pop(0)

0x1ca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(0)

0x1cd: PushEmpty(string, bool)
0x1ce: Stack[-3] = Stack[-2]
0x1cf: Push("") // @poff=102
0x1d0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: Stack[-1] = (bool) 0
0x1d3: GOTO 0x1d5

0x1d4: Stack[-1] = (bool) 1
0x1d5: Call2 0x723

0x1d6: Pop(2)
0x1d7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty()
0x1da: Push((int) 1)
0x1db: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x1dc: PushEmpty()
0x1dd: Call2 0x738

0x1de: Pop(0)
0x1df: Push((int) 20555)
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x7b6

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ea: Call2 0x7e4

0x1eb: Pop(2)
0x1ec: PushEmpty(object, object)
0x1ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ef: Call2 0x7d9

0x1f0: Pop(2)
0x1f1: Push((int) 20574)
0x1f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f4: PushEmpty(object, object)
0x1f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f7: Call2 0x7b6

0x1f8: Pop(2)
0x1f9: PushEmpty(object, object)
0x1fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fc: Call2 0x7e4

0x1fd: Pop(2)
0x1fe: PushEmpty(object, object)
0x1ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0x7d9

0x202: Pop(2)
0x203: Push((int) 20537)
0x204: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(object, object)
0x207: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x208: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x209: Call2 0x7cd

0x20a: Pop(2)
0x20b: Push((int) 20543)
0x20c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: PushEmpty(object, object)
0x20f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x210: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x211: Call2 0x7d3

0x212: Pop(2)
0x213: Push((int) 19348)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x216: PushEmpty(bool, object)
0x217: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x218: Call2 0x7f4

0x219: Pop(1)
0x21a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral" // @poff=89
0x21d: Call2 0x1c3

0x21e: Pop(1)
0x21f: Push((int) 518239)
0x220: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x221: Pop(1)
0x222: @@@ ClearReplies(); Obj=0 // @poff=116
0x223: Pop(0)
0x224: Push((int) 518240)
0x225: Push((int) 20533)
0x226: Push((int) 19349)
0x227: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x228: Pop(3)
0x229: Push((int) 519398)
0x22a: Push((int) 20561)
0x22b: Push((int) 20560)
0x22c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral" // @poff=89
0x231: Call2 0x1c3

0x232: Pop(1)
0x233: Push((int) 518241)
0x234: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x235: Pop(1)
0x236: @@@ ClearReplies(); Obj=0 // @poff=116
0x237: Pop(0)
0x238: PushEmpty(bool, object)
0x239: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23a: Call2 0x800

0x23b: Pop(1)
0x23c: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23d: Push((int) 519376)
0x23e: Push((int) 20538)
0x23f: Push((int) 20537)
0x240: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x241: Pop(3)
0x242: PushEmpty(bool, object)
0x243: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x244: Call2 0x80c

0x245: Pop(1)
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: Push((int) 519382)
0x248: Push((int) 20544)
0x249: Push((int) 20543)
0x24a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24b: Pop(3)
0x24c: Push((int) 518242)
0x24d: Push((int) -1)
0x24e: Push((int) 19351)
0x24f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x250: Pop(3)
0x251: Return(); Pop(0)

0x252: Push((int) 20544)
0x253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x255: PushEmpty(string)
0x256: Stack[-1] = "Neutral" // @poff=89
0x257: Call2 0x1c3

0x258: Pop(1)
0x259: Push((int) 519383)
0x25a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25b: Pop(1)
0x25c: @@@ ClearReplies(); Obj=0 // @poff=116
0x25d: Pop(0)
0x25e: Push((int) 519384)
0x25f: Push((int) 20546)
0x260: Push((int) 20545)
0x261: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Push((int) 20546)
0x265: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Neutral" // @poff=89
0x269: Call2 0x1c3

0x26a: Pop(1)
0x26b: Push((int) 519385)
0x26c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26d: Pop(1)
0x26e: @@@ ClearReplies(); Obj=0 // @poff=116
0x26f: Pop(0)
0x270: Push((int) 519387)
0x271: Push((int) 20549)
0x272: Push((int) 20548)
0x273: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x274: Pop(3)
0x275: Push((int) 519386)
0x276: Push((int) -1)
0x277: Push((int) 20547)
0x278: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x279: Pop(3)
0x27a: Return(); Pop(0)

0x27b: Push((int) 20549)
0x27c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Neutral" // @poff=89
0x280: Call2 0x1c3

0x281: Pop(1)
0x282: Push((int) 519388)
0x283: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x284: Pop(1)
0x285: @@@ ClearReplies(); Obj=0 // @poff=116
0x286: Pop(0)
0x287: Push((int) 519389)
0x288: Push((int) -1)
0x289: Push((int) 20550)
0x28a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28b: Pop(3)
0x28c: Push((int) 519390)
0x28d: Push((int) -1)
0x28e: Push((int) 20551)
0x28f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x290: Pop(3)
0x291: Return(); Pop(0)

0x292: Push((int) 20538)
0x293: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x295: PushEmpty(string)
0x296: Stack[-1] = "Neutral" // @poff=89
0x297: Call2 0x1c3

0x298: Pop(1)
0x299: Push((int) 519377)
0x29a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29b: Pop(1)
0x29c: @@@ ClearReplies(); Obj=0 // @poff=116
0x29d: Pop(0)
0x29e: Push((int) 519378)
0x29f: Push((int) 20540)
0x2a0: Push((int) 20539)
0x2a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a2: Pop(3)
0x2a3: Return(); Pop(0)

0x2a4: Push((int) 20540)
0x2a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "Neutral" // @poff=89
0x2a9: Call2 0x1c3

0x2aa: Pop(1)
0x2ab: Push((int) 519379)
0x2ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ad: Pop(1)
0x2ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x2af: Pop(0)
0x2b0: Push((int) 519380)
0x2b1: Push((int) -1)
0x2b2: Push((int) 20541)
0x2b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b4: Pop(3)
0x2b5: Push((int) 519381)
0x2b6: Push((int) -1)
0x2b7: Push((int) 20542)
0x2b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: Push((int) 20561)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Neutral" // @poff=89
0x2c0: Call2 0x1c3

0x2c1: Pop(1)
0x2c2: Push((int) 519399)
0x2c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c4: Pop(1)
0x2c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c6: Pop(0)
0x2c7: Push((int) 519400)
0x2c8: Push((int) 20563)
0x2c9: Push((int) 20562)
0x2ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cb: Pop(3)
0x2cc: Return(); Pop(0)

0x2cd: Push((int) 20563)
0x2ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2d0: PushEmpty(string)
0x2d1: Stack[-1] = "Neutral" // @poff=89
0x2d2: Call2 0x1c3

0x2d3: Pop(1)
0x2d4: Push((int) 519401)
0x2d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d6: Pop(1)
0x2d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d8: Pop(0)
0x2d9: Push((int) 519402)
0x2da: Push((int) 20565)
0x2db: Push((int) 20564)
0x2dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2dd: Pop(3)
0x2de: Return(); Pop(0)

0x2df: Push((int) 20565)
0x2e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = "Neutral" // @poff=89
0x2e4: Call2 0x1c3

0x2e5: Pop(1)
0x2e6: Push((int) 519403)
0x2e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e8: Pop(1)
0x2e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ea: Pop(0)
0x2eb: Push((int) 519404)
0x2ec: Push((int) 20533)
0x2ed: Push((int) 20566)
0x2ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: Push((int) 20533)
0x2f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral" // @poff=89
0x2f6: Call2 0x1c3

0x2f7: Pop(1)
0x2f8: Push((int) 519372)
0x2f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2fa: Pop(1)
0x2fb: @@@ ClearReplies(); Obj=0 // @poff=116
0x2fc: Pop(0)
0x2fd: Push((int) 519373)
0x2fe: Push((int) 20535)
0x2ff: Push((int) 20534)
0x300: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x301: Pop(3)
0x302: Push((int) 519395)
0x303: Push((int) 20557)
0x304: Push((int) 20556)
0x305: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x306: Pop(3)
0x307: Return(); Pop(0)

0x308: Push((int) 20557)
0x309: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x30b: PushEmpty(string)
0x30c: Stack[-1] = "Neutral" // @poff=89
0x30d: Call2 0x1c3

0x30e: Pop(1)
0x30f: Push((int) 519396)
0x310: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x311: Pop(1)
0x312: @@@ ClearReplies(); Obj=0 // @poff=116
0x313: Pop(0)
0x314: Push((int) 519397)
0x315: Push((int) 20552)
0x316: Push((int) 20558)
0x317: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x318: Pop(3)
0x319: Return(); Pop(0)

0x31a: Push((int) 20535)
0x31b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x31d: PushEmpty(string)
0x31e: Stack[-1] = "Neutral" // @poff=89
0x31f: Call2 0x1c3

0x320: Pop(1)
0x321: Push((int) 519374)
0x322: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x323: Pop(1)
0x324: @@@ ClearReplies(); Obj=0 // @poff=116
0x325: Pop(0)
0x326: Push((int) 519375)
0x327: Push((int) 20552)
0x328: Push((int) 20536)
0x329: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32a: Pop(3)
0x32b: Push((int) 519406)
0x32c: Push((int) 20571)
0x32d: Push((int) 20570)
0x32e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: Push((int) 20571)
0x332: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x334: PushEmpty(string)
0x335: Stack[-1] = "Neutral" // @poff=89
0x336: Call2 0x1c3

0x337: Pop(1)
0x338: Push((int) 519407)
0x339: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x33a: Pop(1)
0x33b: @@@ ClearReplies(); Obj=0 // @poff=116
0x33c: Pop(0)
0x33d: Push((int) 519408)
0x33e: Push((int) 20557)
0x33f: Push((int) 20572)
0x340: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x341: Pop(3)
0x342: Return(); Pop(0)

0x343: Push((int) 20552)
0x344: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x346: PushEmpty(string)
0x347: Stack[-1] = "Neutral" // @poff=89
0x348: Call2 0x1c3

0x349: Pop(1)
0x34a: Push((int) 519391)
0x34b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34c: Pop(1)
0x34d: @@@ ClearReplies(); Obj=0 // @poff=116
0x34e: Pop(0)
0x34f: Push((int) 519392)
0x350: Push((int) 20554)
0x351: Push((int) 20553)
0x352: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x353: Pop(3)
0x354: Push((int) 519405)
0x355: Push((int) 20554)
0x356: Push((int) 20568)
0x357: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x358: Pop(3)
0x359: Return(); Pop(0)

0x35a: Push((int) 20554)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral" // @poff=89
0x35f: Call2 0x1c3

0x360: Pop(1)
0x361: Push((int) 519393)
0x362: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x363: Pop(1)
0x364: @@@ ClearReplies(); Obj=0 // @poff=116
0x365: Pop(0)
0x366: Push((int) 519394)
0x367: Push((int) -1)
0x368: Push((int) 20555)
0x369: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36a: Pop(3)
0x36b: Push((int) 519409)
0x36c: Push((int) -1)
0x36d: Push((int) 20574)
0x36e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x372: PushEmpty(bool)
0x373: Call2 0x7b4

0x374: Pop(0)
0x375: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x376: @ lshStopAnimation()
0x377: Pop(0)
0x378: GOTO 0x37b

0x379: @ StopAnimation()
0x37a: Pop(0)
0x37b: Return(); Pop(0)

0x37c: GOTO 0x1da

0x37d: Return(); Pop(0)

0x37e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x37f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x380: PushEmpty(bool, object)
0x381: PushEmpty(object)
0x382: Call2 0x73f

0x383: Stack[-1] = Stack[-2]
0x384: Pop(1)
0x385: Call2 0x692

0x386: Pop(2)
0x387: PushEmpty(bool, object, float)
0x388: Stack[-12] = Stack[-2]
0x389: Stack[-1] = (float) 70.0
0x38a: Call2 0x63d

0x38b: Pop(2)
0x38c: Pop(1); Push((bool) Stack[-1] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-10] = (int) -2
0x38f: Return(); Pop(8)

0x390: @ CreateDialog(Stack[-4])
0x391: Pop(0)
0x392: PushEmpty(int)
0x393: Call2 0x7ae

0x394: Pop(0)
0x395: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x396: Pop(1)
0x397: PushEmpty(int)
0x398: Call2 0x7ac

0x399: Pop(0)
0x39a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x39b: Pop(1)
0x39c: PushEmpty(string)
0x39d: Call2 0x7b0

0x39e: Pop(0)
0x39f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x3a0: Pop(1)
0x3a1: PushEmpty(string)
0x3a2: Call2 0x7b2

0x3a3: Pop(0)
0x3a4: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x3a5: Pop(1)
0x3a6: PushEmpty(int)
0x3a7: Call2 0x880

0x3a8: Pop(0)
0x3a9: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x3aa: Pop(1)
0x3ab: Stack[-2] = (int) -1
0x3ac: @ IsOverrideActive(Stack[-3])
0x3ad: Pop(0)
0x3ae: Push(Stack[-3])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-10] = (int) -2
0x3b1: Return(); Pop(8)

0x3b2: @ DoDialog(Stack[-4])
0x3b3: Pop(0)
0x3b4: PushEmpty(object, object)
0x3b5: Stack[-11] = Stack[-2]
0x3b6: Stack[-6] = Stack[-1]
0x3b7: Push(-2, 4); TaskCall(6)
0x3b8: Call2 0x3cf

0x3b9: Pop(-2, 4); TaskReturn
0x3ba: Pop(2)
0x3bb: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3bc: Pop(0)
0x3bd: Pop(0); Push((bool) Stack[-1] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: @ sync()
0x3c0: Pop(0)
0x3c1: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3c2: Pop(0)
0x3c3: GOTO 0x3bd

0x3c4: PushEmpty(object)
0x3c5: Stack[-10] = Stack[-1]
0x3c6: Call2 0x681

0x3c7: Pop(1)
0x3c8: @ StopDialog(Stack[-4])
0x3c9: Pop(0)
0x3ca: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x3cb: Pop(0)
0x3cc: Stack[-2] = Stack[-10]
0x3cd: Return(); Pop(8)

0x3ce: Stack[-4] = 0
0x3cf: PushEmpty()
0x3d0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3d1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3d2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3d3: Push((int) 1)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d5: PushEmpty(string)
0x3d6: Stack[-1] = "Neutral" // @poff=89
0x3d7: Call2 0x409

0x3d8: Pop(1)
0x3d9: Push((int) 520670)
0x3da: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3db: Pop(1)
0x3dc: @@@ ClearReplies(); Obj=0 // @poff=116
0x3dd: Pop(0)
0x3de: Push((int) 520671)
0x3df: Push((int) -1)
0x3e0: Push((int) 21878)
0x3e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e2: Pop(3)
0x3e3: Push((int) 527796)
0x3e4: Push((int) -1)
0x3e5: Push((int) 29129)
0x3e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e7: Pop(3)
0x3e8: GOTO 0x3eb

0x3e9: Return(); Pop(0)

0x3ea: GOTO 0x3d3

0x3eb: PushEmpty(bool)
0x3ec: Call2 0x7b4

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3ef: @ lshWaitForAnimEnd()
0x3f0: Pop(0)
0x3f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: GOTO 0x3f9

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3f6: Call2 0x71c

0x3f7: Pop(1)
0x3f8: GOTO 0x3ef

0x3f9: GOTO 0x408

0x3fa: Push("all") // @poff=138
0x3fb: Push("idle") // @poff=146
0x3fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: @ WaitForAnimEnd()
0x3ff: Pop(0)
0x400: Push( Stack[3 + Tasks[-1].StackPointer] )
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x408

0x403: Push("all") // @poff=138
0x404: Push("idle") // @poff=146
0x405: @ PlayAnimation(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: GOTO 0x3fe

0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: PushEmpty(bool)
0x40b: Call2 0x7b4

0x40c: Pop(0)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Return(); Pop(0)

0x410: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Return(); Pop(0)

0x413: PushEmpty(string, bool)
0x414: Stack[-3] = Stack[-2]
0x415: Push("") // @poff=102
0x416: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-1] = (bool) 0
0x419: GOTO 0x41b

0x41a: Stack[-1] = (bool) 1
0x41b: Call2 0x723

0x41c: Pop(2)
0x41d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x41e: Return(); Pop(0)

0x41f: PushEmpty()
0x420: Push((int) 1)
0x421: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x422: PushEmpty()
0x423: Call2 0x738

0x424: Pop(0)
0x425: Push((int) 21877)
0x426: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x428: PushEmpty(string)
0x429: Stack[-1] = "Neutral" // @poff=89
0x42a: Call2 0x409

0x42b: Pop(1)
0x42c: Push((int) 520670)
0x42d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42e: Pop(1)
0x42f: @@@ ClearReplies(); Obj=0 // @poff=116
0x430: Pop(0)
0x431: Push((int) 520671)
0x432: Push((int) -1)
0x433: Push((int) 21878)
0x434: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x435: Pop(3)
0x436: Push((int) 527796)
0x437: Push((int) -1)
0x438: Push((int) 29129)
0x439: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x43a: Pop(3)
0x43b: Return(); Pop(0)

0x43c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x43d: PushEmpty(bool)
0x43e: Call2 0x7b4

0x43f: Pop(0)
0x440: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x441: @ lshStopAnimation()
0x442: Pop(0)
0x443: GOTO 0x446

0x444: @ StopAnimation()
0x445: Pop(0)
0x446: Return(); Pop(0)

0x447: GOTO 0x420

0x448: Return(); Pop(0)

0x449: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x44a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x44b: PushEmpty(bool, object)
0x44c: PushEmpty(object)
0x44d: Call2 0x73f

0x44e: Stack[-1] = Stack[-2]
0x44f: Pop(1)
0x450: Call2 0x692

0x451: Pop(2)
0x452: PushEmpty(bool, object, float)
0x453: Stack[-12] = Stack[-2]
0x454: Stack[-1] = (float) 70.0
0x455: Call2 0x63d

0x456: Pop(2)
0x457: Pop(1); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-10] = (int) -2
0x45a: Return(); Pop(8)

0x45b: @ CreateDialog(Stack[-4])
0x45c: Pop(0)
0x45d: PushEmpty(int)
0x45e: Call2 0x7ae

0x45f: Pop(0)
0x460: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x461: Pop(1)
0x462: PushEmpty(int)
0x463: Call2 0x7ac

0x464: Pop(0)
0x465: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x466: Pop(1)
0x467: PushEmpty(string)
0x468: Call2 0x7b0

0x469: Pop(0)
0x46a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x46b: Pop(1)
0x46c: PushEmpty(string)
0x46d: Call2 0x7b2

0x46e: Pop(0)
0x46f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x470: Pop(1)
0x471: PushEmpty(int)
0x472: Call2 0x880

0x473: Pop(0)
0x474: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x475: Pop(1)
0x476: Stack[-2] = (int) -1
0x477: @ IsOverrideActive(Stack[-3])
0x478: Pop(0)
0x479: Push(Stack[-3])
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-10] = (int) -2
0x47c: Return(); Pop(8)

0x47d: @ DoDialog(Stack[-4])
0x47e: Pop(0)
0x47f: PushEmpty(object, object)
0x480: Stack[-11] = Stack[-2]
0x481: Stack[-6] = Stack[-1]
0x482: Push(-2, 4); TaskCall(8)
0x483: Call2 0x49a

0x484: Pop(-2, 4); TaskReturn
0x485: Pop(2)
0x486: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x487: Pop(0)
0x488: Pop(0); Push((bool) Stack[-1] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48a: @ sync()
0x48b: Pop(0)
0x48c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x48d: Pop(0)
0x48e: GOTO 0x488

0x48f: PushEmpty(object)
0x490: Stack[-10] = Stack[-1]
0x491: Call2 0x681

0x492: Pop(1)
0x493: @ StopDialog(Stack[-4])
0x494: Pop(0)
0x495: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x496: Pop(0)
0x497: Stack[-2] = Stack[-10]
0x498: Return(); Pop(8)

0x499: Stack[-4] = 0
0x49a: PushEmpty()
0x49b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x49c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x49d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x49e: Push((int) 1)
0x49f: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4a0: PushEmpty(string)
0x4a1: Stack[-1] = "Neutral" // @poff=89
0x4a2: Call2 0x4d4

0x4a3: Pop(1)
0x4a4: Push((int) 540554)
0x4a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a6: Pop(1)
0x4a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a8: Pop(0)
0x4a9: Push((int) 540555)
0x4aa: Push((int) -1)
0x4ab: Push((int) 42564)
0x4ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ad: Pop(3)
0x4ae: Push((int) 540794)
0x4af: Push((int) -1)
0x4b0: Push((int) 42843)
0x4b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b2: Pop(3)
0x4b3: GOTO 0x4b6

0x4b4: Return(); Pop(0)

0x4b5: GOTO 0x49e

0x4b6: PushEmpty(bool)
0x4b7: Call2 0x7b4

0x4b8: Pop(0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4ba: @ lshWaitForAnimEnd()
0x4bb: Pop(0)
0x4bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: GOTO 0x4c4

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4c1: Call2 0x71c

0x4c2: Pop(1)
0x4c3: GOTO 0x4ba

0x4c4: GOTO 0x4d3

0x4c5: Push("all") // @poff=138
0x4c6: Push("idle") // @poff=146
0x4c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c8: Pop(2)
0x4c9: @ WaitForAnimEnd()
0x4ca: Pop(0)
0x4cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4d3

0x4ce: Push("all") // @poff=138
0x4cf: Push("idle") // @poff=146
0x4d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d1: Pop(2)
0x4d2: GOTO 0x4c9

0x4d3: Return(); Pop(0)

0x4d4: PushEmpty()
0x4d5: PushEmpty(bool)
0x4d6: Call2 0x7b4

0x4d7: Pop(0)
0x4d8: Pop(1); Push((bool) Stack[-1] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4da: Return(); Pop(0)

0x4db: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Return(); Pop(0)

0x4de: PushEmpty(string, bool)
0x4df: Stack[-3] = Stack[-2]
0x4e0: Push("") // @poff=102
0x4e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-1] = (bool) 0
0x4e4: GOTO 0x4e6

0x4e5: Stack[-1] = (bool) 1
0x4e6: Call2 0x723

0x4e7: Pop(2)
0x4e8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty()
0x4eb: Push((int) 1)
0x4ec: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x4ed: PushEmpty()
0x4ee: Call2 0x738

0x4ef: Pop(0)
0x4f0: Push((int) 42563)
0x4f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4f3: PushEmpty(string)
0x4f4: Stack[-1] = "Neutral" // @poff=89
0x4f5: Call2 0x4d4

0x4f6: Pop(1)
0x4f7: Push((int) 540554)
0x4f8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4f9: Pop(1)
0x4fa: @@@ ClearReplies(); Obj=0 // @poff=116
0x4fb: Pop(0)
0x4fc: Push((int) 540555)
0x4fd: Push((int) -1)
0x4fe: Push((int) 42564)
0x4ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x500: Pop(3)
0x501: Push((int) 540794)
0x502: Push((int) -1)
0x503: Push((int) 42843)
0x504: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x508: PushEmpty(bool)
0x509: Call2 0x7b4

0x50a: Pop(0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50c: @ lshStopAnimation()
0x50d: Pop(0)
0x50e: GOTO 0x511

0x50f: @ StopAnimation()
0x510: Pop(0)
0x511: Return(); Pop(0)

0x512: GOTO 0x4eb

0x513: Return(); Pop(0)

0x514: Push(GlobalVars[1])
0x515: Stack[-1] = (bool) 0
0x516: GlobalVars[1] = Stack[-1]; Pop(1)
0x517: PushEmpty()
0x518: Call2 0x51b

0x519: Pop(0)
0x51a: Return(); Pop(0)

0x51b: PushEmpty(bool)
0x51c: Call2 0x638

0x51d: Pop(0)
0x51e: Pop(1); Push((bool) Stack[-1] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x520: PushEmpty()
0x521: Push(-0, 0); TaskCall(0)
0x522: Call2 0x0

0x523: Pop(-0, 0); TaskReturn
0x524: Pop(0)
0x525: PushEmpty()
0x526: Call2 0x59b

0x527: Pop(0)
0x528: @ GetDirection(Stack[-0]T)
0x529: Pop(0)
0x52a: PushEmpty()
0x52b: Call2 0x5d1

0x52c: Pop(0)
0x52d: GOTO 0x52a

0x52e: Return(); Pop(0)

0x52f: PushEmpty(object, object)
0x530: Push("player") // @poff=156
0x531: @ FindActor(Stack[-2], Stack[-1])
0x532: Pop(1)
0x533: Pop(0); Push((bool) Stack[-1] == 0)
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-3] = (bool) 0
0x536: Return(); Pop(2)

0x537: PushEmpty(bool, object)
0x538: Stack[-3] = Stack[-1]
0x539: Call2 0x62f

0x53a: Stack[-2] = Stack[-5]
0x53b: Pop(2)
0x53c: Return(); Pop(2)

0x53d: Stack[-1] = 0
0x53e: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x53f: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x540: @ RotateAsync(Stack[-2], Stack[-1])
0x541: Pop(2)
0x542: Return(); Pop(0)

0x543: PushEmpty(object, bool, object, bool)
0x544: Push("player") // @poff=156
0x545: @ FindActor(Stack[-3], Stack[-1])
0x546: Pop(1)
0x547: Pop(0); Push((bool) Stack[-2] == 0)
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-5] = (bool) 0
0x54a: Return(); Pop(4)

0x54b: PushEmpty(float, object)
0x54c: Stack[-4] = Stack[-1]
0x54d: Call2 0x61d

0x54e: Pop(1)
0x54f: Push((float)90000.0)
0x550: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x552: Stack[-5] = (bool) 0
0x553: Return(); Pop(4)

0x554: @ CanSee(Stack[-1], Stack[-2])
0x555: Pop(0)
0x556: Stack[-1] = Stack[-5]
0x557: Return(); Pop(4)

0x558: Stack[-2] = 0
0x559: PushEmpty(float, float)
0x55a: Push((int) 8)
0x55b: Push((int) 16)
0x55c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(2)
0x55e: Push((int) 10)
0x55f: @ SetTimer(Stack[-1], Stack[-2])
0x560: Pop(1)
0x561: Return(); Pop(2)

0x562: Push((int) 10)
0x563: @ KillTimer(Stack[-1])
0x564: Pop(1)
0x565: Return(); Pop(0)

0x566: PushEmpty()
0x567: Push((int) 10)
0x568: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x56a: PushEmpty()
0x56b: Call2 0x562

0x56c: Pop(0)
0x56d: PushEmpty(bool)
0x56e: Stack[-1] = (bool) 0
0x56f: PushEmpty(bool)
0x570: Call2 0x638

0x571: Pop(0)
0x572: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x573: PushEmpty(bool)
0x574: Call2 0x543

0x575: Pop(0)
0x576: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x577: Stack[-1] = (bool) 1
0x578: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x579: PushEmpty(bool)
0x57a: Call2 0x52f

0x57b: Pop(0)
0x57c: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57d: PushEmpty(bool, object)
0x57e: PushEmpty(object)
0x57f: Call2 0x73f

0x580: Stack[-1] = Stack[-2]
0x581: Pop(1)
0x582: Call2 0x6cc

0x583: Pop(2)
0x584: GOTO 0x58b

0x585: PushEmpty()
0x586: Call2 0x53e

0x587: Pop(0)
0x588: PushEmpty()
0x589: Call2 0x559

0x58a: Pop(0)
0x58b: Return(); Pop(0)

0x58c: PushEmpty()
0x58d: Call2 0x618

0x58e: Pop(0)
0x58f: PushEmpty()
0x590: Call2 0x562

0x591: Pop(0)
0x592: @ lshStopSpeech()
0x593: Pop(0)
0x594: @ lshStopAnimation()
0x595: Pop(0)
0x596: @ StopAsync()
0x597: Pop(0)
0x598: @ Hold()
0x599: Pop(0)
0x59a: Return(); Pop(0)

0x59b: @ StopGroup0()
0x59c: Pop(0)
0x59d: PushEmpty()
0x59e: Call2 0x562

0x59f: Pop(0)
0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = "Neutral" // @poff=89
0x5a2: Call2 0x71c

0x5a3: Pop(1)
0x5a4: PushEmpty()
0x5a5: Call2 0x559

0x5a6: Pop(0)
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: Push(Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ab: PushEmpty()
0x5ac: Call2 0x559

0x5ad: Pop(0)
0x5ae: GOTO 0x5b3

0x5af: PushEmpty(string)
0x5b0: Stack[-1] = "Neutral" // @poff=89
0x5b1: Call2 0x71c

0x5b2: Pop(1)
0x5b3: Return(); Pop(0)

0x5b4: PushEmpty(bool, bool)
0x5b5: @ IsOverrideActive(Stack[-1])
0x5b6: Pop(0)
0x5b7: Pop(0); Push((bool) Stack[-1] == 0)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5b9: EventDisable(0)
0x5ba: PushEmpty()
0x5bb: Call2 0x618

0x5bc: Pop(0)
0x5bd: PushEmpty(bool, object)
0x5be: Stack[-5] = Stack[-1]
0x5bf: Call2 0x62f

0x5c0: Pop(2)
0x5c1: EventEnable(0)
0x5c2: PushEmpty(object)
0x5c3: Stack[-4] = Stack[-1]
0x5c4: Call2 0x891

0x5c5: Pop(1)
0x5c6: PushEmpty(string)
0x5c7: Stack[-1] = "Neutral" // @poff=89
0x5c8: Call2 0x71c

0x5c9: Pop(1)
0x5ca: PushEmpty()
0x5cb: Call2 0x562

0x5cc: Pop(0)
0x5cd: PushEmpty()
0x5ce: Call2 0x559

0x5cf: Pop(0)
0x5d0: Return(); Pop(2)

0x5d1: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x5d2: @ WaitForAnimEnd()
0x5d3: Pop(0)
0x5d4: PushEmpty(bool)
0x5d5: Call2 0x638

0x5d6: Pop(0)
0x5d7: Pop(1); Push((bool) Stack[-1] == 0)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: Return(); Pop(12)

0x5da: PushEmpty(int)
0x5db: Call2 0x79b

0x5dc: Stack[-1] = Stack[-7]
0x5dd: Pop(1)
0x5de: Stack[-5] = (int) 0
0x5df: PushEmpty(bool)
0x5e0: Stack[-1] = (bool) 0
0x5e1: Push((int) 5)
0x5e2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e4: PushEmpty(bool)
0x5e5: Call2 0x638

0x5e6: Pop(0)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: Stack[-1] = (bool) 1
0x5e9: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x5ea: Pop(0); Push((bool) Stack[-6] == 0)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5ec: Push((int) 3)
0x5ed: @ Sleep(Stack[-1], Stack[-5])
0x5ee: Pop(1)
0x5ef: Pop(0); Push((bool) Stack[-4] == 0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: GOTO 0x613

0x5f2: GOTO 0x608

0x5f3: @ irand(Stack[-3], Stack[-6])
0x5f4: Pop(0)
0x5f5: Push((int) 5)
0x5f6: @ irand(Stack[-3], Stack[-1])
0x5f7: Pop(1)
0x5f8: Push((int) 0)
0x5f9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fb: Stack[-3] = (int) 0
0x5fc: Push("all") // @poff=138
0x5fd: PushEmpty(string, int)
0x5fe: Stack[-6] = Stack[-1]
0x5ff: Call2 0x794

0x600: Pop(1)
0x601: @ PlayAnimation(Stack[-2], Stack[-1])
0x602: Pop(2)
0x603: @ WaitForAnimEnd(Stack[-1])
0x604: Pop(0)
0x605: Pop(0); Push((bool) Stack[-1] == 0)
0x606: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x607: GOTO 0x613

0x608: PushEmpty(bool)
0x609: Call2 0x616

0x60a: Pop(0)
0x60b: Pop(1); Push((bool) Stack[-1] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60d: GOTO 0x613

0x60e: @ ResetAAS()
0x60f: Pop(0)
0x610: Push((int) 1)
0x611: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x612: GOTO 0x5df

0x613: @ ResetAAS()
0x614: Pop(0)
0x615: Return(); Pop(12)

0x616: Stack[-1] = (bool) 1
0x617: Return(); Pop(0)

0x618: @ StopAnimation()
0x619: Pop(0)
0x61a: @ StopGroup0()
0x61b: Pop(0)
0x61c: Return(); Pop(0)

0x61d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x61e: @ GetPosition(Stack[-3])
0x61f: Pop(0)
0x620: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x621: Pop(0)
0x622: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x623: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x624: Return(); Pop(6)

0x625: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x626: @ GetPosition(Stack[-3])
0x627: Pop(0)
0x628: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x629: Push(CvectorIndex(Stack[-2], 0))
0x62a: Push(CvectorIndex(Stack[-3], 2))
0x62b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x62c: Pop(2)
0x62d: Stack[-1] = Stack[-8]
0x62e: Return(); Pop(6)

0x62f: PushEmpty(cvector, cvector)
0x630: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x631: Pop(0)
0x632: PushEmpty(bool, cvector)
0x633: Stack[-3] = Stack[-1]
0x634: Call2 0x625

0x635: Stack[-2] = Stack[-6]
0x636: Pop(2)
0x637: Return(); Pop(2)

0x638: PushEmpty(bool, bool)
0x639: @ IsLoaded(Stack[-1])
0x63a: Pop(0)
0x63b: Stack[-1] = Stack[-3]
0x63c: Return(); Pop(2)

0x63d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x63e: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x63f: Pop(0)
0x640: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x641: Pop(0)
0x642: Push(CvectorIndex(Stack[-8], 1))
0x643: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x644: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x645: @ GetPosition(Stack[-7])
0x646: Pop(0)
0x647: @ GetEyesHeight(Stack[-9])
0x648: Pop(0)
0x649: Push(CvectorIndex(Stack[-7], 1))
0x64a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x64b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x64c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x64d: Push(CvectorIndex(Stack[-6], 1))
0x64e: Stack[-1] = (int) 0
0x64f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x650: Pop(0); Push(Stack[-6] | Stack[-6]);
0x651: Pop(1); Push(Sqrt(Stack[-1]))
0x652: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x653: Stack[-5] = -Stack[-6]; Pop(0);
0x654: Pop(0); Push(Stack[-6] * Stack[-19]);
0x655: PushEmpty(cvector, cvector)
0x656: Push([0.0, 1.0, 0.0])
0x657: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x658: Call2 0x745

0x659: Pop(1)
0x65a: Push((int) 25)
0x65b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x65c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x65d: Push([0.0, 10.0, 0.0])
0x65e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x65f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x660: @ IsOverrideActive(Stack[-2])
0x661: Pop(0)
0x662: Push(Stack[-2])
0x663: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x664: Stack[-21] = (bool) 0
0x665: Return(); Pop(18)

0x666: @ StopWorld()
0x667: Pop(0)
0x668: @ CameraTransit(Stack[-3], Stack[-5])
0x669: Pop(0)
0x66a: Push(CvectorIndex(Stack[-4], 0))
0x66b: Push(CvectorIndex(Stack[-5], 2))
0x66c: @ Rotate(Stack[-2], Stack[-1])
0x66d: Pop(2)
0x66e: PushEmpty(bool)
0x66f: Call2 0x7b4

0x670: Pop(0)
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: GOTO 0x67b

0x673: Push("head") // @poff=196
0x674: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x675: Pop(1)
0x676: Push(Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x678: Push("head") // @poff=196
0x679: @ LookAsyncCamera(Stack[-1])
0x67a: Pop(1)
0x67b: @ CameraWaitForPlayFinish()
0x67c: Pop(0)
0x67d: @ ResumeWorld()
0x67e: Pop(0)
0x67f: Stack[-21] = (bool) 1
0x680: Return(); Pop(18)

0x681: PushEmpty(bool, bool)
0x682: @ CameraSwitchToNormal()
0x683: Pop(0)
0x684: PushEmpty(bool)
0x685: Call2 0x7b4

0x686: Pop(0)
0x687: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x688: GOTO 0x691

0x689: Push("head") // @poff=196
0x68a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x68b: Pop(1)
0x68c: Push(Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68e: Push("head") // @poff=196
0x68f: @ UnlookAsync(Stack[-1])
0x690: Pop(1)
0x691: Return(); Pop(2)

0x692: PushEmpty(int, int, int, int)
0x693: Push("voice_common") // @poff=206
0x694: @ GetVariable(Stack[-1], Stack[-3])
0x695: Pop(1)
0x696: Push(Stack[-2])
0x697: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x698: PushEmpty(bool, object)
0x699: Stack[-7] = Stack[-1]
0x69a: Call2 0x6cc

0x69b: Pop(1)
0x69c: Pop(1); Push((bool) Stack[-1] == 0)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x69e: PushEmpty(bool, object)
0x69f: Stack[-7] = Stack[-1]
0x6a0: Call2 0x6f1

0x6a1: Pop(1)
0x6a2: Pop(1); Push((bool) Stack[-1] == 0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a4: Stack[-6] = (bool) 0
0x6a5: Return(); Pop(4)

0x6a6: Push((int) 2)
0x6a7: @ irand(Stack[-2], Stack[-1])
0x6a8: Pop(1)
0x6a9: Push(Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ab: Push("voice_common") // @poff=206
0x6ac: Push((int) 1)
0x6ad: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6ae: Push((int) 3)
0x6af: Pop(2); Push(Stack[-2] % Stack[-1]);
0x6b0: @ SetVariable(Stack[-2], Stack[-1])
0x6b1: Pop(2)
0x6b2: GOTO 0x6b7

0x6b3: Push("voice_common") // @poff=206
0x6b4: Push((int) 0)
0x6b5: @ SetVariable(Stack[-2], Stack[-1])
0x6b6: Pop(2)
0x6b7: GOTO 0x6ca

0x6b8: PushEmpty(bool, object)
0x6b9: Stack[-7] = Stack[-1]
0x6ba: Call2 0x6f1

0x6bb: Pop(1)
0x6bc: Pop(1); Push((bool) Stack[-1] == 0)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6be: PushEmpty(bool, object)
0x6bf: Stack[-7] = Stack[-1]
0x6c0: Call2 0x6cc

0x6c1: Pop(1)
0x6c2: Pop(1); Push((bool) Stack[-1] == 0)
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c4: Stack[-6] = (bool) 0
0x6c5: Return(); Pop(4)

0x6c6: Push("voice_common") // @poff=206
0x6c7: Push((int) 1)
0x6c8: @ SetVariable(Stack[-2], Stack[-1])
0x6c9: Pop(2)
0x6ca: Stack[-6] = (bool) 1
0x6cb: Return(); Pop(4)

0x6cc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6cd: Stack[-5] = "c" // @poff=232
0x6ce: Stack[-4] = (int) 0
0x6cf: Push((int) 1)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d1: Push((int) 1)
0x6d2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6d3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6d4: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x6d5: Pop(1)
0x6d6: Pop(0); Push((bool) Stack[-3] == 0)
0x6d7: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d8: GOTO 0x6dc

0x6d9: Push((int) 1)
0x6da: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6db: GOTO 0x6cf

0x6dc: Pop(0); Push((bool) Stack[-4] == 0)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6de: Stack[-12] = (bool) 0
0x6df: Return(); Pop(10)

0x6e0: Stack[-2] = (int) 0
0x6e1: Push((int) 1)
0x6e2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e4: @ irand(Stack[-2], Stack[-4])
0x6e5: Pop(0)
0x6e6: Push((int) 1)
0x6e7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6e8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6e9: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x6ea: Pop(1)
0x6eb: PushEmpty(bool, string)
0x6ec: Stack[-3] = Stack[-1]
0x6ed: Call2 0x729

0x6ee: Stack[-2] = Stack[-14]
0x6ef: Pop(2)
0x6f0: Return(); Pop(10)

0x6f1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6f2: Push("d") // @poff=202
0x6f3: PushEmpty(int)
0x6f4: Call2 0x785

0x6f5: Pop(0)
0x6f6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f7: Push("m") // @poff=260
0x6f8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6f9: Stack[-4] = (int) 0
0x6fa: Push((int) 1)
0x6fb: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6fc: Push((int) 1)
0x6fd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ff: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x700: Pop(1)
0x701: Pop(0); Push((bool) Stack[-3] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x703: GOTO 0x707

0x704: Push((int) 1)
0x705: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x706: GOTO 0x6fa

0x707: Pop(0); Push((bool) Stack[-4] == 0)
0x708: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x709: Stack[-12] = (bool) 0
0x70a: Return(); Pop(10)

0x70b: Stack[-2] = (int) 0
0x70c: Push((int) 1)
0x70d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70f: @ irand(Stack[-2], Stack[-4])
0x710: Pop(0)
0x711: Push((int) 1)
0x712: Pop(1); Push(Stack[-3] + Stack[-1]);
0x713: Pop(1); Push(Stack[-6] + Stack[-1]);
0x714: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x715: Pop(1)
0x716: PushEmpty(bool, string)
0x717: Stack[-3] = Stack[-1]
0x718: Call2 0x729

0x719: Stack[-2] = Stack[-14]
0x71a: Pop(2)
0x71b: Return(); Pop(10)

0x71c: PushEmpty(float, float, float, float)
0x71d: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x71e: Pop(0)
0x71f: Push((bool) 0)
0x720: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x721: Pop(1)
0x722: Return(); Pop(4)

0x723: PushEmpty(float, float, float, float)
0x724: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x725: Pop(0)
0x726: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x727: Pop(0)
0x728: Return(); Pop(4)

0x729: PushEmpty(bool, bool)
0x72a: PushEmpty(bool)
0x72b: Call2 0x7b4

0x72c: Pop(0)
0x72d: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x72e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x72f: Pop(0)
0x730: Push(Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x732: @ lshPlaySpeech(Stack[-3])
0x733: Pop(0)
0x734: Stack[-4] = (bool) 1
0x735: Return(); Pop(2)

0x736: Stack[-4] = (bool) 0
0x737: Return(); Pop(2)

0x738: PushEmpty(bool)
0x739: Call2 0x7b4

0x73a: Pop(0)
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: @ lshStopSpeech()
0x73d: Pop(0)
0x73e: Return(); Pop(0)

0x73f: PushEmpty(object, object)
0x740: @ self(Stack[-1])
0x741: Pop(0)
0x742: Stack[-1] = Stack[-3]
0x743: Return(); Pop(2)

0x744: Stack[-1] = 0
0x745: PushEmpty(float, float)
0x746: Pop(0); Push(Stack[-3] | Stack[-3]);
0x747: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x748: Push((float)9.999999974752427e-07)
0x749: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74b: Stack[-4] = [0.0, 0.0, 0.0]
0x74c: Return(); Pop(2)

0x74d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x74e: Return(); Pop(2)

0x74f: PushEmpty(int, int)
0x750: @ GetVariable(Stack[-3], Stack[-1])
0x751: Pop(0)
0x752: Stack[-1] = Stack[-4]
0x753: Return(); Pop(2)

0x754: PushEmpty(object, object)
0x755: @ CreateIntVector(Stack[-1])
0x756: Pop(0)
0x757: @@ add(Stack[-4]); Obj=1 // @poff=264
0x758: Pop(0)
0x759: @@ add(Stack[-3]); Obj=1 // @poff=264
0x75a: Pop(0)
0x75b: Push((int) 3)
0x75c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x75d: Pop(1)
0x75e: Return(); Pop(2)

0x75f: Stack[-1] = 0
0x760: PushEmpty(int, int, bool, int, int, bool)
0x761: @@ GetItemID(Stack[-3]); Obj=8 // @poff=268
0x762: Pop(0)
0x763: Push("Category") // @poff=278
0x764: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x765: Pop(1)
0x766: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=296
0x767: Pop(0)
0x768: Pop(0); Push((bool) Stack[-1] == 0)
0x769: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76a: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=304
0x76b: Pop(0)
0x76c: GOTO 0x772

0x76d: PushEmpty(int, int)
0x76e: Stack[-5] = Stack[-2]
0x76f: Stack[-9] = Stack[-1]
0x770: Call2 0x754

0x771: Pop(2)
0x772: Return(); Pop(6)

0x773: PushEmpty(object, object)
0x774: @ CreateInvItem(Stack[-1])
0x775: Pop(0)
0x776: @@ SetItemName(Stack[-4]); Obj=1 // @poff=314
0x777: Pop(0)
0x778: PushEmpty(object, object, int)
0x779: Stack[-8] = Stack[-3]
0x77a: Stack[-4] = Stack[-2]
0x77b: Stack[-6] = Stack[-1]
0x77c: Call2 0x760

0x77d: Pop(3)
0x77e: Return(); Pop(2)

0x77f: Stack[-1] = 0
0x780: PushEmpty(float, float)
0x781: @ GetGameTime(Stack[-1])
0x782: Pop(0)
0x783: Stack[-1] = Stack[-3]
0x784: Return(); Pop(2)

0x785: PushEmpty(float, float)
0x786: @ GetGameTime(Stack[-1])
0x787: Pop(0)
0x788: Push((int) 1)
0x789: PushEmpty(int)
0x78a: Push((int) 24)
0x78b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x78c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x78d: Return(); Pop(2)

0x78e: PushEmpty()
0x78f: PushEmpty(int)
0x790: Call2 0x785

0x791: Pop(0)
0x792: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x793: Return(); Pop(0)

0x794: PushEmpty(string, string)
0x795: Stack[-1] = "idle" // @poff=146
0x796: Push(Stack[-3])
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x799: Stack[-1] = Stack[-4]
0x79a: Return(); Pop(2)

0x79b: PushEmpty(int, bool, int, bool)
0x79c: Stack[-2] = (int) 0
0x79d: Push("all") // @poff=138
0x79e: PushEmpty(string, int)
0x79f: Stack[-5] = Stack[-1]
0x7a0: Call2 0x794

0x7a1: Pop(1)
0x7a2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(2)
0x7a4: Pop(0); Push((bool) Stack[-1] == 0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a6: GOTO 0x7aa

0x7a7: Push((int) 1)
0x7a8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7a9: GOTO 0x79d

0x7aa: Stack[-2] = Stack[-5]
0x7ab: Return(); Pop(4)

0x7ac: Stack[-1] = (int) 515528
0x7ad: Return(); Pop(0)

0x7ae: Stack[-1] = (int) 502854
0x7af: Return(); Pop(0)

0x7b0: Stack[-1] = "ui/NPC_Alexandr.png" // @poff=326
0x7b1: Return(); Pop(0)

0x7b2: Stack[-1] = "ui/NPC_Alexandr_b.png" // @poff=366
0x7b3: Return(); Pop(0)

0x7b4: Stack[-1] = (bool) 1
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty(object, object)
0x7b7: Push("b2q01") // @poff=410
0x7b8: Push((int) 2)
0x7b9: @ SetVariable(Stack[-2], Stack[-1])
0x7ba: Pop(2)
0x7bb: PushEmpty(object)
0x7bc: Call2 0x84e

0x7bd: Stack[-1] = Stack[-2]
0x7be: Pop(1)
0x7bf: Push("b2q01AlexandrGotoOspina") // @poff=422
0x7c0: Push("pt_map_ospina") // @poff=470
0x7c1: Push((int) 1)
0x7c2: Push((int) 520459)
0x7c3: PushEmpty(float)
0x7c4: Call2 0x780

0x7c5: Pop(0)
0x7c6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=498
0x7c7: Pop(5)
0x7c8: PushEmpty()
0x7c9: Call2 0x818

0x7ca: Pop(0)
0x7cb: Return(); Pop(2)

0x7cc: Stack[-1] = 0
0x7cd: PushEmpty()
0x7ce: Push("oob2Alexandr1") // @poff=506
0x7cf: Push((int) 1)
0x7d0: @ SetVariable(Stack[-2], Stack[-1])
0x7d1: Pop(2)
0x7d2: Return(); Pop(0)

0x7d3: PushEmpty()
0x7d4: Push("oob2Alexandr2") // @poff=534
0x7d5: Push((int) 1)
0x7d6: @ SetVariable(Stack[-2], Stack[-1])
0x7d7: Pop(2)
0x7d8: Return(); Pop(0)

0x7d9: PushEmpty()
0x7da: Push("key is given") // @poff=562
0x7db: @ Trace(Stack[-1])
0x7dc: Pop(1)
0x7dd: PushEmpty(object, string, int)
0x7de: Stack[-5] = Stack[-3]
0x7df: Stack[-2] = "b2q01_key" // @poff=588
0x7e0: Stack[-1] = (int) 1
0x7e1: Call2 0x773

0x7e2: Pop(3)
0x7e3: Return(); Pop(0)

0x7e4: PushEmpty()
0x7e5: PushEmpty(object, string, float)
0x7e6: PushEmpty(object)
0x7e7: Call2 0x84e

0x7e8: Stack[-1] = Stack[-4]
0x7e9: Pop(1)
0x7ea: Stack[-2] = "pt_map_ospina" // @poff=470
0x7eb: Stack[-1] = (int) 2
0x7ec: Call2 0x85f

0x7ed: Pop(3)
0x7ee: PushEmpty(object)
0x7ef: Call2 0x84e

0x7f0: Pop(0)
0x7f1: @@ ShowMap(Stack[-1]); Obj=2 // @poff=608
0x7f2: Pop(1)
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty()
0x7f5: PushEmpty(int, string)
0x7f6: Stack[-1] = "b2q01" // @poff=410
0x7f7: Call2 0x74f

0x7f8: Pop(1)
0x7f9: Push((int) 1)
0x7fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fc: Stack[-2] = (bool) 1
0x7fd: Return(); Pop(0)

0x7fe: Stack[-2] = (bool) 0
0x7ff: Return(); Pop(0)

0x800: PushEmpty()
0x801: PushEmpty(int, string)
0x802: Stack[-1] = "oob2Alexandr1" // @poff=506
0x803: Call2 0x74f

0x804: Pop(1)
0x805: Push((int) 0)
0x806: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x808: Stack[-2] = (bool) 1
0x809: Return(); Pop(0)

0x80a: Stack[-2] = (bool) 0
0x80b: Return(); Pop(0)

0x80c: PushEmpty()
0x80d: PushEmpty(int, string)
0x80e: Stack[-1] = "oob2Alexandr2" // @poff=534
0x80f: Call2 0x74f

0x810: Pop(1)
0x811: Push((int) 0)
0x812: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x814: Stack[-2] = (bool) 1
0x815: Return(); Pop(0)

0x816: Stack[-2] = (bool) 0
0x817: Return(); Pop(0)

0x818: PushEmpty(object, object)
0x819: Push((int) 247)
0x81a: Push((int) 1)
0x81b: Push((int) 520468)
0x81c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x81d: Pop(3)
0x81e: PushEmpty(bool, object, int)
0x81f: Stack[-4] = Stack[-2]
0x820: Stack[-1] = (int) 245
0x821: Call2 0x832

0x822: Pop(3)
0x823: Return(); Pop(2)

0x824: Stack[-1] = 0
0x825: PushEmpty(object, object)
0x826: @ GetDiaryRoot(Stack[-1])
0x827: Pop(0)
0x828: Pop(0); Push((bool) Stack[-1] == 0)
0x829: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82a: Push("Can't retrieve diary root") // @poff=616
0x82b: @ Trace(Stack[-1])
0x82c: Pop(1)
0x82d: Stack[-3] = (bool) 0
0x82e: Return(); Pop(2)

0x82f: Stack[-1] = Stack[-3]
0x830: Return(); Pop(2)

0x831: Stack[-1] = 0
0x832: PushEmpty(object, object, int, object, object, int)
0x833: PushEmpty(object)
0x834: Call2 0x825

0x835: Stack[-1] = Stack[-4]
0x836: Pop(1)
0x837: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=668
0x838: Pop(0)
0x839: Pop(0); Push((bool) Stack[-2] == 0)
0x83a: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83b: Push("Can't find diary parent with id: ") // @poff=673
0x83c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x83d: @ Trace(Stack[-1])
0x83e: Pop(1)
0x83f: Stack[-9] = (bool) 0
0x840: Return(); Pop(6)

0x841: @@ AddChild(Stack[-8]); Obj=2 // @poff=741
0x842: Pop(0)
0x843: Push((int) 7)
0x844: @ SendWorldWndMessage(Stack[-1])
0x845: Pop(1)
0x846: @@ GetCategory(Stack[-1]); Obj=8 // @poff=750
0x847: Pop(0)
0x848: @ SetDiarySection(Stack[-1])
0x849: Pop(0)
0x84a: Stack[-9] = (bool) 0
0x84b: Return(); Pop(6)

0x84c: Stack[-2] = 0
0x84d: Stack[-3] = 0
0x84e: PushEmpty(object, object, object, object)
0x84f: @ GetMainOutdoorScene(Stack[-2])
0x850: Pop(0)
0x851: Pop(0); PushNull((bool) Stack[-2] == 0)
0x852: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x853: Push("Can't find main outdoor scene") // @poff=762
0x854: @ Trace(Stack[-1])
0x855: Pop(1)
0x856: Stack[-1] = 0
0x857: Stack[-1] = Stack[-5]
0x858: Return(); Pop(4)

0x859: @@ GetMap(Stack[-1]); Obj=2 // @poff=822
0x85a: Pop(0)
0x85b: Stack[-1] = Stack[-5]
0x85c: Return(); Pop(4)

0x85d: Stack[-1] = 0
0x85e: Stack[-2] = 0
0x85f: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x860: @ GetMainOutdoorScene(Stack[-2])
0x861: Pop(0)
0x862: Pop(0); PushNull((bool) Stack[-2] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x864: Push("Can't find main outdoor scene") // @poff=762
0x865: @ Trace(Stack[-1])
0x866: Pop(1)
0x867: Return(); Pop(8)

0x868: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=829
0x869: Pop(0)
0x86a: Pop(0); Push((bool) Stack[-1] == 0)
0x86b: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x86c: Push("Warning: outdoor scene locator ") // @poff=840
0x86d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x86e: Push(" doesnt exist") // @poff=904
0x86f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x870: @ Trace(Stack[-1])
0x871: Pop(1)
0x872: @@ GetMap(Stack[-11]); Obj=2 // @poff=822
0x873: Pop(0)
0x874: Pop(0); PushNull((bool) Stack[-11] == 0)
0x875: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x876: Push("Can't find map") // @poff=932
0x877: @ Trace(Stack[-1])
0x878: Pop(1)
0x879: Return(); Pop(8)

0x87a: Push(CvectorIndex(Stack[-4], 0))
0x87b: Push(CvectorIndex(Stack[-5], 2))
0x87c: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=962
0x87d: Pop(2)
0x87e: Return(); Pop(8)

0x87f: Stack[-2] = 0
0x880: PushEmpty(int, int)
0x881: Push("branch") // @poff=975
0x882: @ GetVariable(Stack[-1], Stack[-2])
0x883: Pop(1)
0x884: Push((int) 0)
0x885: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x887: Stack[-3] = (int) 1
0x888: Return(); Pop(2)

0x889: GOTO 0x88f

0x88a: Push((int) 1)
0x88b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: Stack[-3] = (int) 2
0x88e: Return(); Pop(2)

0x88f: Stack[-3] = (int) 3
0x890: Return(); Pop(2)

0x891: PushEmpty()
0x892: Push(GlobalVars[1])
0x893: Pop(1); Push((bool) Stack[-1] == 0)
0x894: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x895: PushEmpty(int, object)
0x896: Stack[-3] = Stack[-1]
0x897: Push(-2, 1); TaskCall(5)
0x898: Call2 0x37e

0x899: Pop(-2, 1); TaskReturn
0x89a: Pop(2)
0x89b: Push(GlobalVars[1])
0x89c: Stack[-1] = (bool) 1
0x89d: GlobalVars[1] = Stack[-1]; Pop(1)
0x89e: PushEmpty(bool, int)
0x89f: Stack[-1] = (int) 2
0x8a0: Call2 0x78e

0x8a1: Pop(1)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a3: PushEmpty(int, object)
0x8a4: Stack[-3] = Stack[-1]
0x8a5: Push(-2, 1); TaskCall(3)
0x8a6: Call2 0x110

0x8a7: Pop(-2, 1); TaskReturn
0x8a8: Pop(2)
0x8a9: Return(); Pop(0)

0x8aa: PushEmpty(bool)
0x8ab: Stack[-1] = (bool) 0
0x8ac: PushEmpty(bool, int)
0x8ad: Stack[-1] = (int) 12
0x8ae: Call2 0x78e

0x8af: Pop(1)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b1: Push(GlobalVars[2])
0x8b2: Pop(1); Push((bool) Stack[-1] == 0)
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b4: Stack[-1] = (bool) 1
0x8b5: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8b6: PushEmpty(int, object)
0x8b7: Stack[-3] = Stack[-1]
0x8b8: Push(-2, 1); TaskCall(1)
0x8b9: Call2 0xd

0x8ba: Pop(-2, 1); TaskReturn
0x8bb: Pop(2)
0x8bc: Push(GlobalVars[2])
0x8bd: Stack[-1] = (bool) 1
0x8be: GlobalVars[2] = Stack[-1]; Pop(1)
0x8bf: Return(); Pop(0)

0x8c0: PushEmpty(int, object)
0x8c1: Stack[-3] = Stack[-1]
0x8c2: Push(-2, 1); TaskCall(7)
0x8c3: Call2 0x449

0x8c4: Pop(-2, 1); TaskReturn
0x8c5: Pop(2)
0x8c6: Return(); Pop(0)

