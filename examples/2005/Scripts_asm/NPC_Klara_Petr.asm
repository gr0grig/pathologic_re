GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	W:ui/NPC_Petr.png
	W:ui/NPC_Petr_b.png
	W:k5q02
	W:k5q02PetrGotoAndrei
	W:pt_map_andrei
	A:AddMark
	W:quest_k5_02
	W:init_kabak
	W:tvirin 5 is given
	W:tvirin
	W:ook11Petr1
	W:playsound
	W:giveitem
	W:tvirin is given
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500750069002f004e00500043005f0050006500740072002e0070006e0067000000750069002f004e00500043005f0050006500740072005f0062002e0070006e00670000006b00350071003000320000006b003500710030003200500065007400720047006f0074006f0041006e0064007200650069000000700074005f006d00610070005f0061006e00640072006500690000004164644d61726b00710075006500730074005f006b0035005f0030003200000069006e00690074005f006b006100620061006b000000740076006900720069006e0020003500200069007300200067006900760065006e000000740076006900720069006e0000006f006f006b003100310050006500740072003100000070006c006100790073006f0075006e006400000067006900760065006900740065006d000000740076006900720069006e00200069007300200067006900760065006e00000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x6a8
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x44c Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x580 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x67e Vars = (int, int)
	GTASK_11 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6fa Vars = (int)
		EVENT_6 Op = 0x720 Vars = ()
		EVENT_5 Op = 0x72f Vars = ()
		EVENT_45 Op = 0x73c Vars = (bool)
		EVENT_0 Op = 0x748 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x7cc

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
0x11: Call2 0x8d3

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x826

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x7d1

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x94e

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x94c

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x950

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x952

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xa46

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
0x55: Call2 0x815

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
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 525522)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525523)
0x6e: Push((int) 30733)
0x6f: Push((int) 26879)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 529279)
0x73: Push((int) 30734)
0x74: Push((int) 30732)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x954

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x8b0

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all") // @poff=138
0x8a: Push("idle") // @poff=146
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all") // @poff=138
0x93: Push("idle") // @poff=146
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x954

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-3] = Stack[-2]
0xa4: Push("") // @poff=102
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x8b7

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x8cc

0xb3: Pop(0)
0xb4: Push((int) 26878)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525522)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 525523)
0xc1: Push((int) 30733)
0xc2: Push((int) 26879)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 529279)
0xc6: Push((int) 30734)
0xc7: Push((int) 30732)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 30734)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 529281)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 529283)
0xd8: Push((int) -1)
0xd9: Push((int) 30736)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: Push((int) 30733)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0x98

0xe3: Pop(1)
0xe4: Push((int) 529280)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: Push((int) 529282)
0xea: Push((int) -1)
0xeb: Push((int) 30735)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf0: PushEmpty(bool)
0xf1: Call2 0x954

0xf2: Pop(0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf4: @ lshStopAnimation()
0xf5: Pop(0)
0xf6: GOTO 0xf9

0xf7: @ StopAnimation()
0xf8: Pop(0)
0xf9: Return(); Pop(0)

0xfa: GOTO 0xaf

0xfb: Return(); Pop(0)

0xfc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfe: PushEmpty(bool, object)
0xff: PushEmpty(object)
0x100: Call2 0x8d3

0x101: Stack[-1] = Stack[-2]
0x102: Pop(1)
0x103: Call2 0x826

0x104: Pop(2)
0x105: PushEmpty(bool, object, float)
0x106: Stack[-12] = Stack[-2]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x7d1

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x94e

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x94c

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x950

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x952

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xa46

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(object, object)
0x133: Stack[-11] = Stack[-2]
0x134: Stack[-6] = Stack[-1]
0x135: Push(-2, 4); TaskCall(4)
0x136: Call2 0x14d

0x137: Pop(-2, 4); TaskReturn
0x138: Pop(2)
0x139: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: @ sync()
0x13e: Pop(0)
0x13f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x140: Pop(0)
0x141: GOTO 0x13b

0x142: PushEmpty(object)
0x143: Stack[-10] = Stack[-1]
0x144: Call2 0x815

0x145: Pop(1)
0x146: @ StopDialog(Stack[-4])
0x147: Pop(0)
0x148: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x149: Pop(0)
0x14a: Stack[-2] = Stack[-10]
0x14b: Return(); Pop(8)

0x14c: Stack[-4] = 0
0x14d: PushEmpty()
0x14e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x150: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x151: Push((int) 1)
0x152: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral" // @poff=89
0x155: Call2 0x19b

0x156: Pop(1)
0x157: Push((int) 525900)
0x158: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x159: Pop(1)
0x15a: @@@ ClearReplies(); Obj=0 // @poff=116
0x15b: Pop(0)
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0x9ad

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: Push((int) 525901)
0x162: Push((int) 42962)
0x163: Push((int) 27193)
0x164: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x165: Pop(3)
0x166: PushEmpty(bool, object)
0x167: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x168: Call2 0x9b9

0x169: Pop(1)
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: Push((int) 525924)
0x16c: Push((int) 30559)
0x16d: Push((int) 27216)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 525904)
0x171: Push((int) -1)
0x172: Push((int) 27196)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 529107)
0x176: Push((int) -1)
0x177: Push((int) 30552)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x151

0x17d: PushEmpty(bool)
0x17e: Call2 0x954

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x8b0

0x189: Pop(1)
0x18a: GOTO 0x181

0x18b: GOTO 0x19a

0x18c: Push("all") // @poff=138
0x18d: Push("idle") // @poff=146
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd()
0x191: Pop(0)
0x192: Push( Stack[3 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19a

0x195: Push("all") // @poff=138
0x196: Push("idle") // @poff=146
0x197: @ PlayAnimation(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: GOTO 0x190

0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool)
0x19d: Call2 0x954

0x19e: Pop(0)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(string, bool)
0x1a6: Stack[-3] = Stack[-2]
0x1a7: Push("") // @poff=102
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-1] = (bool) 0
0x1ab: GOTO 0x1ad

0x1ac: Stack[-1] = (bool) 1
0x1ad: Call2 0x8b7

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x8cc

0x1b6: Pop(0)
0x1b7: Push((int) 27195)
0x1b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1ba: PushEmpty(object, object)
0x1bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bd: Call2 0x956

0x1be: Pop(2)
0x1bf: PushEmpty(object, object)
0x1c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call2 0x99d

0x1c3: Pop(2)
0x1c4: PushEmpty(object, object)
0x1c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call2 0x992

0x1c8: Pop(2)
0x1c9: Push((int) 42977)
0x1ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Call2 0x956

0x1d0: Pop(2)
0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0x992

0x1d5: Pop(2)
0x1d6: Push((int) 27221)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: PushEmpty(object, object)
0x1da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0x972

0x1dd: Pop(2)
0x1de: Push((int) 42988)
0x1df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty(object, object)
0x1e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e4: Call2 0x972

0x1e5: Pop(2)
0x1e6: Push((int) 42994)
0x1e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: PushEmpty(object, object)
0x1ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ec: Call2 0x972

0x1ed: Pop(2)
0x1ee: Push((int) 27223)
0x1ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f1: PushEmpty(object, object)
0x1f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x972

0x1f5: Pop(2)
0x1f6: PushEmpty(object, object)
0x1f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f9: Call2 0x98c

0x1fa: Pop(2)
0x1fb: PushEmpty(object, object)
0x1fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fe: Call2 0x97b

0x1ff: Pop(2)
0x200: Push((int) 27192)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral" // @poff=89
0x205: Call2 0x19b

0x206: Pop(1)
0x207: Push((int) 525900)
0x208: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x209: Pop(1)
0x20a: @@@ ClearReplies(); Obj=0 // @poff=116
0x20b: Pop(0)
0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call2 0x9ad

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: Push((int) 525901)
0x212: Push((int) 42962)
0x213: Push((int) 27193)
0x214: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x215: Pop(3)
0x216: PushEmpty(bool, object)
0x217: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x218: Call2 0x9b9

0x219: Pop(1)
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: Push((int) 525924)
0x21c: Push((int) 30559)
0x21d: Push((int) 27216)
0x21e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21f: Pop(3)
0x220: Push((int) 525904)
0x221: Push((int) -1)
0x222: Push((int) 27196)
0x223: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x224: Pop(3)
0x225: Push((int) 529107)
0x226: Push((int) -1)
0x227: Push((int) 30552)
0x228: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 30559)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral" // @poff=89
0x230: Call2 0x19b

0x231: Pop(1)
0x232: Push((int) 529114)
0x233: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x234: Pop(1)
0x235: @@@ ClearReplies(); Obj=0 // @poff=116
0x236: Pop(0)
0x237: Push((int) 529115)
0x238: Push((int) 27217)
0x239: Push((int) 30560)
0x23a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23b: Pop(3)
0x23c: Return(); Pop(0)

0x23d: Push((int) 27217)
0x23e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Neutral" // @poff=89
0x242: Call2 0x19b

0x243: Pop(1)
0x244: Push((int) 525925)
0x245: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x246: Pop(1)
0x247: @@@ ClearReplies(); Obj=0 // @poff=116
0x248: Pop(0)
0x249: Push((int) 525926)
0x24a: Push((int) 27220)
0x24b: Push((int) 27218)
0x24c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24d: Pop(3)
0x24e: Push((int) 525927)
0x24f: Push((int) 27222)
0x250: Push((int) 27219)
0x251: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 27222)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral" // @poff=89
0x259: Call2 0x19b

0x25a: Pop(1)
0x25b: Push((int) 525930)
0x25c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25d: Pop(1)
0x25e: @@@ ClearReplies(); Obj=0 // @poff=116
0x25f: Pop(0)
0x260: Push((int) 540904)
0x261: Push((int) 42980)
0x262: Push((int) 42979)
0x263: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x264: Pop(3)
0x265: Push((int) 525931)
0x266: Push((int) -1)
0x267: Push((int) 27223)
0x268: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 42980)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral" // @poff=89
0x270: Call2 0x19b

0x271: Pop(1)
0x272: Push((int) 540905)
0x273: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x274: Pop(1)
0x275: @@@ ClearReplies(); Obj=0 // @poff=116
0x276: Pop(0)
0x277: Push((int) 540906)
0x278: Push((int) 42982)
0x279: Push((int) 42981)
0x27a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27b: Pop(3)
0x27c: Push((int) 540914)
0x27d: Push((int) 42982)
0x27e: Push((int) 42990)
0x27f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 42982)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral" // @poff=89
0x287: Call2 0x19b

0x288: Pop(1)
0x289: Push((int) 540907)
0x28a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28b: Pop(1)
0x28c: @@@ ClearReplies(); Obj=0 // @poff=116
0x28d: Pop(0)
0x28e: Push((int) 540908)
0x28f: Push((int) 42984)
0x290: Push((int) 42983)
0x291: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x292: Pop(3)
0x293: Push((int) 540915)
0x294: Push((int) 42987)
0x295: Push((int) 42992)
0x296: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 42984)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral" // @poff=89
0x29e: Call2 0x19b

0x29f: Pop(1)
0x2a0: Push((int) 540909)
0x2a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a2: Pop(1)
0x2a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a4: Pop(0)
0x2a5: Push((int) 540910)
0x2a6: Push((int) 42987)
0x2a7: Push((int) 42985)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: Push((int) 540911)
0x2ab: Push((int) 42987)
0x2ac: Push((int) 42986)
0x2ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 42987)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Neutral" // @poff=89
0x2b5: Call2 0x19b

0x2b6: Pop(1)
0x2b7: Push((int) 540912)
0x2b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b9: Pop(1)
0x2ba: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bb: Pop(0)
0x2bc: Push((int) 540913)
0x2bd: Push((int) -1)
0x2be: Push((int) 42988)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c0: Pop(3)
0x2c1: Push((int) 540916)
0x2c2: Push((int) -1)
0x2c3: Push((int) 42994)
0x2c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 27220)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Neutral" // @poff=89
0x2cc: Call2 0x19b

0x2cd: Pop(1)
0x2ce: Push((int) 525928)
0x2cf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d0: Pop(1)
0x2d1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d2: Pop(0)
0x2d3: Push((int) 529116)
0x2d4: Push((int) 30562)
0x2d5: Push((int) 30561)
0x2d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Push((int) 30562)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Neutral" // @poff=89
0x2de: Call2 0x19b

0x2df: Pop(1)
0x2e0: Push((int) 529117)
0x2e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e2: Pop(1)
0x2e3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e4: Pop(0)
0x2e5: Push((int) 525929)
0x2e6: Push((int) -1)
0x2e7: Push((int) 27221)
0x2e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e9: Pop(3)
0x2ea: Return(); Pop(0)

0x2eb: Push((int) 42962)
0x2ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2ee: PushEmpty(string)
0x2ef: Stack[-1] = "Neutral" // @poff=89
0x2f0: Call2 0x19b

0x2f1: Pop(1)
0x2f2: Push((int) 540891)
0x2f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f4: Pop(1)
0x2f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f6: Pop(0)
0x2f7: Push((int) 540892)
0x2f8: Push((int) 30553)
0x2f9: Push((int) 42963)
0x2fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fb: Pop(3)
0x2fc: Return(); Pop(0)

0x2fd: Push((int) 30553)
0x2fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x300: PushEmpty(string)
0x301: Stack[-1] = "Neutral" // @poff=89
0x302: Call2 0x19b

0x303: Pop(1)
0x304: Push((int) 529108)
0x305: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x306: Pop(1)
0x307: @@@ ClearReplies(); Obj=0 // @poff=116
0x308: Pop(0)
0x309: Push((int) 529109)
0x30a: Push((int) 30555)
0x30b: Push((int) 30554)
0x30c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30d: Pop(3)
0x30e: Push((int) 540893)
0x30f: Push((int) 42965)
0x310: Push((int) 42964)
0x311: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: Push((int) 42965)
0x315: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral" // @poff=89
0x319: Call2 0x19b

0x31a: Pop(1)
0x31b: Push((int) 540894)
0x31c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x31d: Pop(1)
0x31e: @@@ ClearReplies(); Obj=0 // @poff=116
0x31f: Pop(0)
0x320: Push((int) 540895)
0x321: Push((int) 27194)
0x322: Push((int) 42966)
0x323: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x324: Pop(3)
0x325: Push((int) 540900)
0x326: Push((int) 27194)
0x327: Push((int) 42973)
0x328: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: Push((int) 30555)
0x32c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral" // @poff=89
0x330: Call2 0x19b

0x331: Pop(1)
0x332: Push((int) 529110)
0x333: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x334: Pop(1)
0x335: @@@ ClearReplies(); Obj=0 // @poff=116
0x336: Pop(0)
0x337: Push((int) 529111)
0x338: Push((int) 30557)
0x339: Push((int) 30556)
0x33a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33b: Pop(3)
0x33c: Push((int) 540899)
0x33d: Push((int) 42965)
0x33e: Push((int) 42971)
0x33f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: Push((int) 30557)
0x343: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x345: PushEmpty(string)
0x346: Stack[-1] = "Neutral" // @poff=89
0x347: Call2 0x19b

0x348: Pop(1)
0x349: Push((int) 529112)
0x34a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34b: Pop(1)
0x34c: @@@ ClearReplies(); Obj=0 // @poff=116
0x34d: Pop(0)
0x34e: Push((int) 529113)
0x34f: Push((int) 27194)
0x350: Push((int) 30558)
0x351: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x352: Pop(3)
0x353: Push((int) 540898)
0x354: Push((int) 42969)
0x355: Push((int) 42970)
0x356: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x357: Pop(3)
0x358: Return(); Pop(0)

0x359: Push((int) 27194)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral" // @poff=89
0x35e: Call2 0x19b

0x35f: Pop(1)
0x360: Push((int) 525902)
0x361: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x362: Pop(1)
0x363: @@@ ClearReplies(); Obj=0 // @poff=116
0x364: Pop(0)
0x365: Push((int) 540896)
0x366: Push((int) 42969)
0x367: Push((int) 42968)
0x368: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 42969)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral" // @poff=89
0x370: Call2 0x19b

0x371: Pop(1)
0x372: Push((int) 540897)
0x373: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x374: Pop(1)
0x375: @@@ ClearReplies(); Obj=0 // @poff=116
0x376: Pop(0)
0x377: Push((int) 525903)
0x378: Push((int) -1)
0x379: Push((int) 27195)
0x37a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37b: Pop(3)
0x37c: Push((int) 540901)
0x37d: Push((int) 42976)
0x37e: Push((int) 42975)
0x37f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 42976)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral" // @poff=89
0x387: Call2 0x19b

0x388: Pop(1)
0x389: Push((int) 540902)
0x38a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38b: Pop(1)
0x38c: @@@ ClearReplies(); Obj=0 // @poff=116
0x38d: Pop(0)
0x38e: Push((int) 540903)
0x38f: Push((int) -1)
0x390: Push((int) 42977)
0x391: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x392: Pop(3)
0x393: Return(); Pop(0)

0x394: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x395: PushEmpty(bool)
0x396: Call2 0x954

0x397: Pop(0)
0x398: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x399: @ lshStopAnimation()
0x39a: Pop(0)
0x39b: GOTO 0x39e

0x39c: @ StopAnimation()
0x39d: Pop(0)
0x39e: Return(); Pop(0)

0x39f: GOTO 0x1b2

0x3a0: Return(); Pop(0)

0x3a1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3a3: PushEmpty(bool, object)
0x3a4: PushEmpty(object)
0x3a5: Call2 0x8d3

0x3a6: Stack[-1] = Stack[-2]
0x3a7: Pop(1)
0x3a8: Call2 0x826

0x3a9: Pop(2)
0x3aa: PushEmpty(bool, object, float)
0x3ab: Stack[-12] = Stack[-2]
0x3ac: Stack[-1] = (float) 70.0
0x3ad: Call2 0x7d1

0x3ae: Pop(2)
0x3af: Pop(1); Push((bool) Stack[-1] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: Stack[-10] = (int) -2
0x3b2: Return(); Pop(8)

0x3b3: @ CreateDialog(Stack[-4])
0x3b4: Pop(0)
0x3b5: PushEmpty(int)
0x3b6: Call2 0x94e

0x3b7: Pop(0)
0x3b8: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x3b9: Pop(1)
0x3ba: PushEmpty(int)
0x3bb: Call2 0x94c

0x3bc: Pop(0)
0x3bd: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x3be: Pop(1)
0x3bf: PushEmpty(string)
0x3c0: Call2 0x950

0x3c1: Pop(0)
0x3c2: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x3c3: Pop(1)
0x3c4: PushEmpty(string)
0x3c5: Call2 0x952

0x3c6: Pop(0)
0x3c7: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x3c8: Pop(1)
0x3c9: PushEmpty(int)
0x3ca: Call2 0xa46

0x3cb: Pop(0)
0x3cc: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x3cd: Pop(1)
0x3ce: Stack[-2] = (int) -1
0x3cf: @ IsOverrideActive(Stack[-3])
0x3d0: Pop(0)
0x3d1: Push(Stack[-3])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-10] = (int) -2
0x3d4: Return(); Pop(8)

0x3d5: @ DoDialog(Stack[-4])
0x3d6: Pop(0)
0x3d7: PushEmpty(object, object)
0x3d8: Stack[-11] = Stack[-2]
0x3d9: Stack[-6] = Stack[-1]
0x3da: Push(-2, 4); TaskCall(6)
0x3db: Call2 0x3f2

0x3dc: Pop(-2, 4); TaskReturn
0x3dd: Pop(2)
0x3de: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3df: Pop(0)
0x3e0: Pop(0); Push((bool) Stack[-1] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e2: @ sync()
0x3e3: Pop(0)
0x3e4: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e5: Pop(0)
0x3e6: GOTO 0x3e0

0x3e7: PushEmpty(object)
0x3e8: Stack[-10] = Stack[-1]
0x3e9: Call2 0x815

0x3ea: Pop(1)
0x3eb: @ StopDialog(Stack[-4])
0x3ec: Pop(0)
0x3ed: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x3ee: Pop(0)
0x3ef: Stack[-2] = Stack[-10]
0x3f0: Return(); Pop(8)

0x3f1: Stack[-4] = 0
0x3f2: PushEmpty()
0x3f3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3f4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3f5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3f6: Push((int) 1)
0x3f7: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Neutral" // @poff=89
0x3fa: Call2 0x436

0x3fb: Pop(1)
0x3fc: Push((int) 528042)
0x3fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3fe: Pop(1)
0x3ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x400: Pop(0)
0x401: PushEmpty(bool, object)
0x402: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x403: Call2 0x9c5

0x404: Pop(1)
0x405: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x406: Push((int) 528043)
0x407: Push((int) 29406)
0x408: Push((int) 29405)
0x409: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40a: Pop(3)
0x40b: Push((int) 528046)
0x40c: Push((int) -1)
0x40d: Push((int) 29408)
0x40e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40f: Pop(3)
0x410: Push((int) 541057)
0x411: Push((int) -1)
0x412: Push((int) 43161)
0x413: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x414: Pop(3)
0x415: GOTO 0x418

0x416: Return(); Pop(0)

0x417: GOTO 0x3f6

0x418: PushEmpty(bool)
0x419: Call2 0x954

0x41a: Pop(0)
0x41b: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x41c: @ lshWaitForAnimEnd()
0x41d: Pop(0)
0x41e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: GOTO 0x426

0x421: PushEmpty(string)
0x422: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x423: Call2 0x8b0

0x424: Pop(1)
0x425: GOTO 0x41c

0x426: GOTO 0x435

0x427: Push("all") // @poff=138
0x428: Push("idle") // @poff=146
0x429: @ PlayAnimation(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: @ WaitForAnimEnd()
0x42c: Pop(0)
0x42d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: GOTO 0x435

0x430: Push("all") // @poff=138
0x431: Push("idle") // @poff=146
0x432: @ PlayAnimation(Stack[-2], Stack[-1])
0x433: Pop(2)
0x434: GOTO 0x42b

0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: PushEmpty(bool)
0x438: Call2 0x954

0x439: Pop(0)
0x43a: Pop(1); Push((bool) Stack[-1] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: Return(); Pop(0)

0x43d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x43e: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43f: Return(); Pop(0)

0x440: PushEmpty(string, bool)
0x441: Stack[-3] = Stack[-2]
0x442: Push("") // @poff=102
0x443: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-1] = (bool) 0
0x446: GOTO 0x448

0x447: Stack[-1] = (bool) 1
0x448: Call2 0x8b7

0x449: Pop(2)
0x44a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x44b: Return(); Pop(0)

0x44c: PushEmpty()
0x44d: Push((int) 1)
0x44e: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x44f: PushEmpty()
0x450: Call2 0x8cc

0x451: Pop(0)
0x452: Push((int) 29405)
0x453: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: PushEmpty(object, object)
0x456: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x457: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x458: Call2 0x986

0x459: Pop(2)
0x45a: Push((int) 29404)
0x45b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x45d: PushEmpty(string)
0x45e: Stack[-1] = "Neutral" // @poff=89
0x45f: Call2 0x436

0x460: Pop(1)
0x461: Push((int) 528042)
0x462: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x463: Pop(1)
0x464: @@@ ClearReplies(); Obj=0 // @poff=116
0x465: Pop(0)
0x466: PushEmpty(bool, object)
0x467: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x468: Call2 0x9c5

0x469: Pop(1)
0x46a: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46b: Push((int) 528043)
0x46c: Push((int) 29406)
0x46d: Push((int) 29405)
0x46e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46f: Pop(3)
0x470: Push((int) 528046)
0x471: Push((int) -1)
0x472: Push((int) 29408)
0x473: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x474: Pop(3)
0x475: Push((int) 541057)
0x476: Push((int) -1)
0x477: Push((int) 43161)
0x478: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x479: Pop(3)
0x47a: Return(); Pop(0)

0x47b: Push((int) 29406)
0x47c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x47e: PushEmpty(string)
0x47f: Stack[-1] = "Neutral" // @poff=89
0x480: Call2 0x436

0x481: Pop(1)
0x482: Push((int) 528044)
0x483: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x484: Pop(1)
0x485: @@@ ClearReplies(); Obj=0 // @poff=116
0x486: Pop(0)
0x487: Push((int) 528045)
0x488: Push((int) 43162)
0x489: Push((int) 29407)
0x48a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x48b: Pop(3)
0x48c: Push((int) 541060)
0x48d: Push((int) 43165)
0x48e: Push((int) 43164)
0x48f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: Push((int) 43165)
0x493: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x495: PushEmpty(string)
0x496: Stack[-1] = "Neutral" // @poff=89
0x497: Call2 0x436

0x498: Pop(1)
0x499: Push((int) 541061)
0x49a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x49b: Pop(1)
0x49c: @@@ ClearReplies(); Obj=0 // @poff=116
0x49d: Pop(0)
0x49e: Push((int) 541062)
0x49f: Push((int) 43167)
0x4a0: Push((int) 43166)
0x4a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a2: Pop(3)
0x4a3: Return(); Pop(0)

0x4a4: Push((int) 43167)
0x4a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4a7: PushEmpty(string)
0x4a8: Stack[-1] = "Neutral" // @poff=89
0x4a9: Call2 0x436

0x4aa: Pop(1)
0x4ab: Push((int) 541063)
0x4ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4ad: Pop(1)
0x4ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x4af: Pop(0)
0x4b0: Push((int) 541064)
0x4b1: Push((int) -1)
0x4b2: Push((int) 43168)
0x4b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b4: Pop(3)
0x4b5: Push((int) 541065)
0x4b6: Push((int) -1)
0x4b7: Push((int) 43169)
0x4b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Push((int) 43162)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Neutral" // @poff=89
0x4c0: Call2 0x436

0x4c1: Pop(1)
0x4c2: Push((int) 541058)
0x4c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4c4: Pop(1)
0x4c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c6: Pop(0)
0x4c7: Push((int) 541059)
0x4c8: Push((int) 43165)
0x4c9: Push((int) 43163)
0x4ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4ce: PushEmpty(bool)
0x4cf: Call2 0x954

0x4d0: Pop(0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d2: @ lshStopAnimation()
0x4d3: Pop(0)
0x4d4: GOTO 0x4d7

0x4d5: @ StopAnimation()
0x4d6: Pop(0)
0x4d7: Return(); Pop(0)

0x4d8: GOTO 0x44d

0x4d9: Return(); Pop(0)

0x4da: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4db: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4dc: PushEmpty(bool, object)
0x4dd: PushEmpty(object)
0x4de: Call2 0x8d3

0x4df: Stack[-1] = Stack[-2]
0x4e0: Pop(1)
0x4e1: Call2 0x826

0x4e2: Pop(2)
0x4e3: PushEmpty(bool, object, float)
0x4e4: Stack[-12] = Stack[-2]
0x4e5: Stack[-1] = (float) 70.0
0x4e6: Call2 0x7d1

0x4e7: Pop(2)
0x4e8: Pop(1); Push((bool) Stack[-1] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4ea: Stack[-10] = (int) -2
0x4eb: Return(); Pop(8)

0x4ec: @ CreateDialog(Stack[-4])
0x4ed: Pop(0)
0x4ee: PushEmpty(int)
0x4ef: Call2 0x94e

0x4f0: Pop(0)
0x4f1: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x4f2: Pop(1)
0x4f3: PushEmpty(int)
0x4f4: Call2 0x94c

0x4f5: Pop(0)
0x4f6: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x4f7: Pop(1)
0x4f8: PushEmpty(string)
0x4f9: Call2 0x950

0x4fa: Pop(0)
0x4fb: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x4fc: Pop(1)
0x4fd: PushEmpty(string)
0x4fe: Call2 0x952

0x4ff: Pop(0)
0x500: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x501: Pop(1)
0x502: PushEmpty(int)
0x503: Call2 0xa46

0x504: Pop(0)
0x505: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x506: Pop(1)
0x507: Stack[-2] = (int) -1
0x508: @ IsOverrideActive(Stack[-3])
0x509: Pop(0)
0x50a: Push(Stack[-3])
0x50b: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50c: Stack[-10] = (int) -2
0x50d: Return(); Pop(8)

0x50e: @ DoDialog(Stack[-4])
0x50f: Pop(0)
0x510: PushEmpty(object, object)
0x511: Stack[-11] = Stack[-2]
0x512: Stack[-6] = Stack[-1]
0x513: Push(-2, 4); TaskCall(8)
0x514: Call2 0x52b

0x515: Pop(-2, 4); TaskReturn
0x516: Pop(2)
0x517: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x518: Pop(0)
0x519: Pop(0); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51b: @ sync()
0x51c: Pop(0)
0x51d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51e: Pop(0)
0x51f: GOTO 0x519

0x520: PushEmpty(object)
0x521: Stack[-10] = Stack[-1]
0x522: Call2 0x815

0x523: Pop(1)
0x524: @ StopDialog(Stack[-4])
0x525: Pop(0)
0x526: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x527: Pop(0)
0x528: Stack[-2] = Stack[-10]
0x529: Return(); Pop(8)

0x52a: Stack[-4] = 0
0x52b: PushEmpty()
0x52c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x52d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x52e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x52f: Push((int) 1)
0x530: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral" // @poff=89
0x533: Call2 0x56a

0x534: Pop(1)
0x535: Push((int) 535231)
0x536: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x537: Pop(1)
0x538: @@@ ClearReplies(); Obj=0 // @poff=116
0x539: Pop(0)
0x53a: Push((int) 535232)
0x53b: Push((int) 36953)
0x53c: Push((int) 36907)
0x53d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53e: Pop(3)
0x53f: Push((int) 535233)
0x540: Push((int) -1)
0x541: Push((int) 36908)
0x542: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x543: Pop(3)
0x544: Push((int) 535280)
0x545: Push((int) -1)
0x546: Push((int) 36956)
0x547: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x548: Pop(3)
0x549: GOTO 0x54c

0x54a: Return(); Pop(0)

0x54b: GOTO 0x52f

0x54c: PushEmpty(bool)
0x54d: Call2 0x954

0x54e: Pop(0)
0x54f: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x550: @ lshWaitForAnimEnd()
0x551: Pop(0)
0x552: Push( Stack[3 + Tasks[-1].StackPointer] )
0x553: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x554: GOTO 0x55a

0x555: PushEmpty(string)
0x556: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x557: Call2 0x8b0

0x558: Pop(1)
0x559: GOTO 0x550

0x55a: GOTO 0x569

0x55b: Push("all") // @poff=138
0x55c: Push("idle") // @poff=146
0x55d: @ PlayAnimation(Stack[-2], Stack[-1])
0x55e: Pop(2)
0x55f: @ WaitForAnimEnd()
0x560: Pop(0)
0x561: Push( Stack[3 + Tasks[-1].StackPointer] )
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: GOTO 0x569

0x564: Push("all") // @poff=138
0x565: Push("idle") // @poff=146
0x566: @ PlayAnimation(Stack[-2], Stack[-1])
0x567: Pop(2)
0x568: GOTO 0x55f

0x569: Return(); Pop(0)

0x56a: PushEmpty()
0x56b: PushEmpty(bool)
0x56c: Call2 0x954

0x56d: Pop(0)
0x56e: Pop(1); Push((bool) Stack[-1] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x570: Return(); Pop(0)

0x571: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: Return(); Pop(0)

0x574: PushEmpty(string, bool)
0x575: Stack[-3] = Stack[-2]
0x576: Push("") // @poff=102
0x577: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x579: Stack[-1] = (bool) 0
0x57a: GOTO 0x57c

0x57b: Stack[-1] = (bool) 1
0x57c: Call2 0x8b7

0x57d: Pop(2)
0x57e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x57f: Return(); Pop(0)

0x580: PushEmpty()
0x581: Push((int) 1)
0x582: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x583: PushEmpty()
0x584: Call2 0x8cc

0x585: Pop(0)
0x586: Push((int) 36906)
0x587: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x589: PushEmpty(string)
0x58a: Stack[-1] = "Neutral" // @poff=89
0x58b: Call2 0x56a

0x58c: Pop(1)
0x58d: Push((int) 535231)
0x58e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x58f: Pop(1)
0x590: @@@ ClearReplies(); Obj=0 // @poff=116
0x591: Pop(0)
0x592: Push((int) 535232)
0x593: Push((int) 36953)
0x594: Push((int) 36907)
0x595: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x596: Pop(3)
0x597: Push((int) 535233)
0x598: Push((int) -1)
0x599: Push((int) 36908)
0x59a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x59b: Pop(3)
0x59c: Push((int) 535280)
0x59d: Push((int) -1)
0x59e: Push((int) 36956)
0x59f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a0: Pop(3)
0x5a1: Return(); Pop(0)

0x5a2: Push((int) 36953)
0x5a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5a5: PushEmpty(string)
0x5a6: Stack[-1] = "Neutral" // @poff=89
0x5a7: Call2 0x56a

0x5a8: Pop(1)
0x5a9: Push((int) 535277)
0x5aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ab: Pop(1)
0x5ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ad: Pop(0)
0x5ae: Push((int) 535278)
0x5af: Push((int) 36957)
0x5b0: Push((int) 36954)
0x5b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b2: Pop(3)
0x5b3: Push((int) 535279)
0x5b4: Push((int) 36957)
0x5b5: Push((int) 36955)
0x5b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b7: Pop(3)
0x5b8: Return(); Pop(0)

0x5b9: Push((int) 36957)
0x5ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5bc: PushEmpty(string)
0x5bd: Stack[-1] = "Neutral" // @poff=89
0x5be: Call2 0x56a

0x5bf: Pop(1)
0x5c0: Push((int) 535281)
0x5c1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5c2: Pop(1)
0x5c3: @@@ ClearReplies(); Obj=0 // @poff=116
0x5c4: Pop(0)
0x5c5: Push((int) 535282)
0x5c6: Push((int) -1)
0x5c7: Push((int) 36958)
0x5c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c9: Pop(3)
0x5ca: Push((int) 535283)
0x5cb: Push((int) -1)
0x5cc: Push((int) 36959)
0x5cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ce: Pop(3)
0x5cf: Return(); Pop(0)

0x5d0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5d1: PushEmpty(bool)
0x5d2: Call2 0x954

0x5d3: Pop(0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d5: @ lshStopAnimation()
0x5d6: Pop(0)
0x5d7: GOTO 0x5da

0x5d8: @ StopAnimation()
0x5d9: Pop(0)
0x5da: Return(); Pop(0)

0x5db: GOTO 0x581

0x5dc: Return(); Pop(0)

0x5dd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5de: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5df: PushEmpty(bool, object)
0x5e0: PushEmpty(object)
0x5e1: Call2 0x8d3

0x5e2: Stack[-1] = Stack[-2]
0x5e3: Pop(1)
0x5e4: Call2 0x826

0x5e5: Pop(2)
0x5e6: PushEmpty(bool, object, float)
0x5e7: Stack[-12] = Stack[-2]
0x5e8: Stack[-1] = (float) 70.0
0x5e9: Call2 0x7d1

0x5ea: Pop(2)
0x5eb: Pop(1); Push((bool) Stack[-1] == 0)
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: Stack[-10] = (int) -2
0x5ee: Return(); Pop(8)

0x5ef: @ CreateDialog(Stack[-4])
0x5f0: Pop(0)
0x5f1: PushEmpty(int)
0x5f2: Call2 0x94e

0x5f3: Pop(0)
0x5f4: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x5f5: Pop(1)
0x5f6: PushEmpty(int)
0x5f7: Call2 0x94c

0x5f8: Pop(0)
0x5f9: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x5fa: Pop(1)
0x5fb: PushEmpty(string)
0x5fc: Call2 0x950

0x5fd: Pop(0)
0x5fe: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x5ff: Pop(1)
0x600: PushEmpty(string)
0x601: Call2 0x952

0x602: Pop(0)
0x603: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x604: Pop(1)
0x605: PushEmpty(int)
0x606: Call2 0xa46

0x607: Pop(0)
0x608: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x609: Pop(1)
0x60a: Stack[-2] = (int) -1
0x60b: @ IsOverrideActive(Stack[-3])
0x60c: Pop(0)
0x60d: Push(Stack[-3])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-10] = (int) -2
0x610: Return(); Pop(8)

0x611: @ DoDialog(Stack[-4])
0x612: Pop(0)
0x613: PushEmpty(object, object)
0x614: Stack[-11] = Stack[-2]
0x615: Stack[-6] = Stack[-1]
0x616: Push(-2, 4); TaskCall(10)
0x617: Call2 0x62e

0x618: Pop(-2, 4); TaskReturn
0x619: Pop(2)
0x61a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x61b: Pop(0)
0x61c: Pop(0); Push((bool) Stack[-1] == 0)
0x61d: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x61e: @ sync()
0x61f: Pop(0)
0x620: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x621: Pop(0)
0x622: GOTO 0x61c

0x623: PushEmpty(object)
0x624: Stack[-10] = Stack[-1]
0x625: Call2 0x815

0x626: Pop(1)
0x627: @ StopDialog(Stack[-4])
0x628: Pop(0)
0x629: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x62a: Pop(0)
0x62b: Stack[-2] = Stack[-10]
0x62c: Return(); Pop(8)

0x62d: Stack[-4] = 0
0x62e: PushEmpty()
0x62f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x630: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x631: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x632: Push((int) 1)
0x633: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x634: PushEmpty(string)
0x635: Stack[-1] = "Neutral" // @poff=89
0x636: Call2 0x668

0x637: Pop(1)
0x638: Push((int) 540545)
0x639: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63a: Pop(1)
0x63b: @@@ ClearReplies(); Obj=0 // @poff=116
0x63c: Pop(0)
0x63d: Push((int) 540546)
0x63e: Push((int) -1)
0x63f: Push((int) 42555)
0x640: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x641: Pop(3)
0x642: Push((int) 540798)
0x643: Push((int) -1)
0x644: Push((int) 42847)
0x645: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x646: Pop(3)
0x647: GOTO 0x64a

0x648: Return(); Pop(0)

0x649: GOTO 0x632

0x64a: PushEmpty(bool)
0x64b: Call2 0x954

0x64c: Pop(0)
0x64d: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x64e: @ lshWaitForAnimEnd()
0x64f: Pop(0)
0x650: Push( Stack[3 + Tasks[-1].StackPointer] )
0x651: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x652: GOTO 0x658

0x653: PushEmpty(string)
0x654: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x655: Call2 0x8b0

0x656: Pop(1)
0x657: GOTO 0x64e

0x658: GOTO 0x667

0x659: Push("all") // @poff=138
0x65a: Push("idle") // @poff=146
0x65b: @ PlayAnimation(Stack[-2], Stack[-1])
0x65c: Pop(2)
0x65d: @ WaitForAnimEnd()
0x65e: Pop(0)
0x65f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x660: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x661: GOTO 0x667

0x662: Push("all") // @poff=138
0x663: Push("idle") // @poff=146
0x664: @ PlayAnimation(Stack[-2], Stack[-1])
0x665: Pop(2)
0x666: GOTO 0x65d

0x667: Return(); Pop(0)

0x668: PushEmpty()
0x669: PushEmpty(bool)
0x66a: Call2 0x954

0x66b: Pop(0)
0x66c: Pop(1); Push((bool) Stack[-1] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Return(); Pop(0)

0x66f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: Return(); Pop(0)

0x672: PushEmpty(string, bool)
0x673: Stack[-3] = Stack[-2]
0x674: Push("") // @poff=102
0x675: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x677: Stack[-1] = (bool) 0
0x678: GOTO 0x67a

0x679: Stack[-1] = (bool) 1
0x67a: Call2 0x8b7

0x67b: Pop(2)
0x67c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x67d: Return(); Pop(0)

0x67e: PushEmpty()
0x67f: Push((int) 1)
0x680: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x681: PushEmpty()
0x682: Call2 0x8cc

0x683: Pop(0)
0x684: Push((int) 42554)
0x685: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x687: PushEmpty(string)
0x688: Stack[-1] = "Neutral" // @poff=89
0x689: Call2 0x668

0x68a: Pop(1)
0x68b: Push((int) 540545)
0x68c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x68d: Pop(1)
0x68e: @@@ ClearReplies(); Obj=0 // @poff=116
0x68f: Pop(0)
0x690: Push((int) 540546)
0x691: Push((int) -1)
0x692: Push((int) 42555)
0x693: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x694: Pop(3)
0x695: Push((int) 540798)
0x696: Push((int) -1)
0x697: Push((int) 42847)
0x698: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x699: Pop(3)
0x69a: Return(); Pop(0)

0x69b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x69c: PushEmpty(bool)
0x69d: Call2 0x954

0x69e: Pop(0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a0: @ lshStopAnimation()
0x6a1: Pop(0)
0x6a2: GOTO 0x6a5

0x6a3: @ StopAnimation()
0x6a4: Pop(0)
0x6a5: Return(); Pop(0)

0x6a6: GOTO 0x67f

0x6a7: Return(); Pop(0)

0x6a8: Push(GlobalVars[1])
0x6a9: Stack[-1] = (bool) 0
0x6aa: GlobalVars[1] = Stack[-1]; Pop(1)
0x6ab: PushEmpty()
0x6ac: Call2 0x6af

0x6ad: Pop(0)
0x6ae: Return(); Pop(0)

0x6af: PushEmpty(bool)
0x6b0: Call2 0x7cc

0x6b1: Pop(0)
0x6b2: Pop(1); Push((bool) Stack[-1] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b4: PushEmpty()
0x6b5: Push(-0, 0); TaskCall(0)
0x6b6: Call2 0x0

0x6b7: Pop(-0, 0); TaskReturn
0x6b8: Pop(0)
0x6b9: PushEmpty()
0x6ba: Call2 0x72f

0x6bb: Pop(0)
0x6bc: @ GetDirection(Stack[-0]T)
0x6bd: Pop(0)
0x6be: PushEmpty()
0x6bf: Call2 0x765

0x6c0: Pop(0)
0x6c1: GOTO 0x6be

0x6c2: Return(); Pop(0)

0x6c3: PushEmpty(object, object)
0x6c4: Push("player") // @poff=156
0x6c5: @ FindActor(Stack[-2], Stack[-1])
0x6c6: Pop(1)
0x6c7: Pop(0); Push((bool) Stack[-1] == 0)
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c9: Stack[-3] = (bool) 0
0x6ca: Return(); Pop(2)

0x6cb: PushEmpty(bool, object)
0x6cc: Stack[-3] = Stack[-1]
0x6cd: Call2 0x7c3

0x6ce: Stack[-2] = Stack[-5]
0x6cf: Pop(2)
0x6d0: Return(); Pop(2)

0x6d1: Stack[-1] = 0
0x6d2: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x6d3: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x6d4: @ RotateAsync(Stack[-2], Stack[-1])
0x6d5: Pop(2)
0x6d6: Return(); Pop(0)

0x6d7: PushEmpty(object, bool, object, bool)
0x6d8: Push("player") // @poff=156
0x6d9: @ FindActor(Stack[-3], Stack[-1])
0x6da: Pop(1)
0x6db: Pop(0); Push((bool) Stack[-2] == 0)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: Stack[-5] = (bool) 0
0x6de: Return(); Pop(4)

0x6df: PushEmpty(float, object)
0x6e0: Stack[-4] = Stack[-1]
0x6e1: Call2 0x7b1

0x6e2: Pop(1)
0x6e3: Push((float)90000.0)
0x6e4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e6: Stack[-5] = (bool) 0
0x6e7: Return(); Pop(4)

0x6e8: @ CanSee(Stack[-1], Stack[-2])
0x6e9: Pop(0)
0x6ea: Stack[-1] = Stack[-5]
0x6eb: Return(); Pop(4)

0x6ec: Stack[-2] = 0
0x6ed: PushEmpty(float, float)
0x6ee: Push((int) 8)
0x6ef: Push((int) 16)
0x6f0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6f1: Pop(2)
0x6f2: Push((int) 10)
0x6f3: @ SetTimer(Stack[-1], Stack[-2])
0x6f4: Pop(1)
0x6f5: Return(); Pop(2)

0x6f6: Push((int) 10)
0x6f7: @ KillTimer(Stack[-1])
0x6f8: Pop(1)
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty()
0x6fb: Push((int) 10)
0x6fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x6fe: PushEmpty()
0x6ff: Call2 0x6f6

0x700: Pop(0)
0x701: PushEmpty(bool)
0x702: Stack[-1] = (bool) 0
0x703: PushEmpty(bool)
0x704: Call2 0x7cc

0x705: Pop(0)
0x706: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x707: PushEmpty(bool)
0x708: Call2 0x6d7

0x709: Pop(0)
0x70a: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70b: Stack[-1] = (bool) 1
0x70c: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x70d: PushEmpty(bool)
0x70e: Call2 0x6c3

0x70f: Pop(0)
0x710: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x711: PushEmpty(bool, object)
0x712: PushEmpty(object)
0x713: Call2 0x8d3

0x714: Stack[-1] = Stack[-2]
0x715: Pop(1)
0x716: Call2 0x860

0x717: Pop(2)
0x718: GOTO 0x71f

0x719: PushEmpty()
0x71a: Call2 0x6d2

0x71b: Pop(0)
0x71c: PushEmpty()
0x71d: Call2 0x6ed

0x71e: Pop(0)
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: Call2 0x7ac

0x722: Pop(0)
0x723: PushEmpty()
0x724: Call2 0x6f6

0x725: Pop(0)
0x726: @ lshStopSpeech()
0x727: Pop(0)
0x728: @ lshStopAnimation()
0x729: Pop(0)
0x72a: @ StopAsync()
0x72b: Pop(0)
0x72c: @ Hold()
0x72d: Pop(0)
0x72e: Return(); Pop(0)

0x72f: @ StopGroup0()
0x730: Pop(0)
0x731: PushEmpty()
0x732: Call2 0x6f6

0x733: Pop(0)
0x734: PushEmpty(string)
0x735: Stack[-1] = "Neutral" // @poff=89
0x736: Call2 0x8b0

0x737: Pop(1)
0x738: PushEmpty()
0x739: Call2 0x6ed

0x73a: Pop(0)
0x73b: Return(); Pop(0)

0x73c: PushEmpty()
0x73d: Push(Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73f: PushEmpty()
0x740: Call2 0x6ed

0x741: Pop(0)
0x742: GOTO 0x747

0x743: PushEmpty(string)
0x744: Stack[-1] = "Neutral" // @poff=89
0x745: Call2 0x8b0

0x746: Pop(1)
0x747: Return(); Pop(0)

0x748: PushEmpty(bool, bool)
0x749: @ IsOverrideActive(Stack[-1])
0x74a: Pop(0)
0x74b: Pop(0); Push((bool) Stack[-1] == 0)
0x74c: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x74d: EventDisable(0)
0x74e: PushEmpty()
0x74f: Call2 0x7ac

0x750: Pop(0)
0x751: PushEmpty(bool, object)
0x752: Stack[-5] = Stack[-1]
0x753: Call2 0x7c3

0x754: Pop(2)
0x755: EventEnable(0)
0x756: PushEmpty(object)
0x757: Stack[-4] = Stack[-1]
0x758: Call2 0xa57

0x759: Pop(1)
0x75a: PushEmpty(string)
0x75b: Stack[-1] = "Neutral" // @poff=89
0x75c: Call2 0x8b0

0x75d: Pop(1)
0x75e: PushEmpty()
0x75f: Call2 0x6f6

0x760: Pop(0)
0x761: PushEmpty()
0x762: Call2 0x6ed

0x763: Pop(0)
0x764: Return(); Pop(2)

0x765: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x766: @ WaitForAnimEnd()
0x767: Pop(0)
0x768: PushEmpty(bool)
0x769: Call2 0x7cc

0x76a: Pop(0)
0x76b: Pop(1); Push((bool) Stack[-1] == 0)
0x76c: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76d: Return(); Pop(12)

0x76e: PushEmpty(int)
0x76f: Call2 0x93b

0x770: Stack[-1] = Stack[-7]
0x771: Pop(1)
0x772: Stack[-5] = (int) 0
0x773: PushEmpty(bool)
0x774: Stack[-1] = (bool) 0
0x775: Push((int) 5)
0x776: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x778: PushEmpty(bool)
0x779: Call2 0x7cc

0x77a: Pop(0)
0x77b: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77c: Stack[-1] = (bool) 1
0x77d: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x77e: Pop(0); Push((bool) Stack[-6] == 0)
0x77f: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x780: Push((int) 3)
0x781: @ Sleep(Stack[-1], Stack[-5])
0x782: Pop(1)
0x783: Pop(0); Push((bool) Stack[-4] == 0)
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: GOTO 0x7a7

0x786: GOTO 0x79c

0x787: @ irand(Stack[-3], Stack[-6])
0x788: Pop(0)
0x789: Push((int) 5)
0x78a: @ irand(Stack[-3], Stack[-1])
0x78b: Pop(1)
0x78c: Push((int) 0)
0x78d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: Stack[-3] = (int) 0
0x790: Push("all") // @poff=138
0x791: PushEmpty(string, int)
0x792: Stack[-6] = Stack[-1]
0x793: Call2 0x934

0x794: Pop(1)
0x795: @ PlayAnimation(Stack[-2], Stack[-1])
0x796: Pop(2)
0x797: @ WaitForAnimEnd(Stack[-1])
0x798: Pop(0)
0x799: Pop(0); Push((bool) Stack[-1] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79b: GOTO 0x7a7

0x79c: PushEmpty(bool)
0x79d: Call2 0x7aa

0x79e: Pop(0)
0x79f: Pop(1); Push((bool) Stack[-1] == 0)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a1: GOTO 0x7a7

0x7a2: @ ResetAAS()
0x7a3: Pop(0)
0x7a4: Push((int) 1)
0x7a5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x7a6: GOTO 0x773

0x7a7: @ ResetAAS()
0x7a8: Pop(0)
0x7a9: Return(); Pop(12)

0x7aa: Stack[-1] = (bool) 1
0x7ab: Return(); Pop(0)

0x7ac: @ StopAnimation()
0x7ad: Pop(0)
0x7ae: @ StopGroup0()
0x7af: Pop(0)
0x7b0: Return(); Pop(0)

0x7b1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7b2: @ GetPosition(Stack[-3])
0x7b3: Pop(0)
0x7b4: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x7b5: Pop(0)
0x7b6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x7b7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x7b8: Return(); Pop(6)

0x7b9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x7ba: @ GetPosition(Stack[-3])
0x7bb: Pop(0)
0x7bc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x7bd: Push(CvectorIndex(Stack[-2], 0))
0x7be: Push(CvectorIndex(Stack[-3], 2))
0x7bf: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x7c0: Pop(2)
0x7c1: Stack[-1] = Stack[-8]
0x7c2: Return(); Pop(6)

0x7c3: PushEmpty(cvector, cvector)
0x7c4: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x7c5: Pop(0)
0x7c6: PushEmpty(bool, cvector)
0x7c7: Stack[-3] = Stack[-1]
0x7c8: Call2 0x7b9

0x7c9: Stack[-2] = Stack[-6]
0x7ca: Pop(2)
0x7cb: Return(); Pop(2)

0x7cc: PushEmpty(bool, bool)
0x7cd: @ IsLoaded(Stack[-1])
0x7ce: Pop(0)
0x7cf: Stack[-1] = Stack[-3]
0x7d0: Return(); Pop(2)

0x7d1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7d2: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x7d3: Pop(0)
0x7d4: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x7d5: Pop(0)
0x7d6: Push(CvectorIndex(Stack[-8], 1))
0x7d7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7d8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7d9: @ GetPosition(Stack[-7])
0x7da: Pop(0)
0x7db: @ GetEyesHeight(Stack[-9])
0x7dc: Pop(0)
0x7dd: Push(CvectorIndex(Stack[-7], 1))
0x7de: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7df: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7e0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7e1: Push(CvectorIndex(Stack[-6], 1))
0x7e2: Stack[-1] = (int) 0
0x7e3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7e4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7e5: Pop(1); Push(Sqrt(Stack[-1]))
0x7e6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7e7: Stack[-5] = -Stack[-6]; Pop(0);
0x7e8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7e9: PushEmpty(cvector, cvector)
0x7ea: Push([0.0, 1.0, 0.0])
0x7eb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7ec: Call2 0x8d9

0x7ed: Pop(1)
0x7ee: Push((int) 25)
0x7ef: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7f0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f1: Push([0.0, 10.0, 0.0])
0x7f2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7f3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7f4: @ IsOverrideActive(Stack[-2])
0x7f5: Pop(0)
0x7f6: Push(Stack[-2])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f8: Stack[-21] = (bool) 0
0x7f9: Return(); Pop(18)

0x7fa: @ StopWorld()
0x7fb: Pop(0)
0x7fc: @ CameraTransit(Stack[-3], Stack[-5])
0x7fd: Pop(0)
0x7fe: Push(CvectorIndex(Stack[-4], 0))
0x7ff: Push(CvectorIndex(Stack[-5], 2))
0x800: @ Rotate(Stack[-2], Stack[-1])
0x801: Pop(2)
0x802: PushEmpty(bool)
0x803: Call2 0x954

0x804: Pop(0)
0x805: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x806: GOTO 0x80f

0x807: Push("head") // @poff=196
0x808: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x809: Pop(1)
0x80a: Push(Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80c: Push("head") // @poff=196
0x80d: @ LookAsyncCamera(Stack[-1])
0x80e: Pop(1)
0x80f: @ CameraWaitForPlayFinish()
0x810: Pop(0)
0x811: @ ResumeWorld()
0x812: Pop(0)
0x813: Stack[-21] = (bool) 1
0x814: Return(); Pop(18)

0x815: PushEmpty(bool, bool)
0x816: @ CameraSwitchToNormal()
0x817: Pop(0)
0x818: PushEmpty(bool)
0x819: Call2 0x954

0x81a: Pop(0)
0x81b: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81c: GOTO 0x825

0x81d: Push("head") // @poff=196
0x81e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x81f: Pop(1)
0x820: Push(Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x822: Push("head") // @poff=196
0x823: @ UnlookAsync(Stack[-1])
0x824: Pop(1)
0x825: Return(); Pop(2)

0x826: PushEmpty(int, int, int, int)
0x827: Push("voice_common") // @poff=206
0x828: @ GetVariable(Stack[-1], Stack[-3])
0x829: Pop(1)
0x82a: Push(Stack[-2])
0x82b: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x82c: PushEmpty(bool, object)
0x82d: Stack[-7] = Stack[-1]
0x82e: Call2 0x860

0x82f: Pop(1)
0x830: Pop(1); Push((bool) Stack[-1] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x832: PushEmpty(bool, object)
0x833: Stack[-7] = Stack[-1]
0x834: Call2 0x885

0x835: Pop(1)
0x836: Pop(1); Push((bool) Stack[-1] == 0)
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-6] = (bool) 0
0x839: Return(); Pop(4)

0x83a: Push((int) 2)
0x83b: @ irand(Stack[-2], Stack[-1])
0x83c: Pop(1)
0x83d: Push(Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x83f: Push("voice_common") // @poff=206
0x840: Push((int) 1)
0x841: Pop(1); Push(Stack[-4] + Stack[-1]);
0x842: Push((int) 3)
0x843: Pop(2); Push(Stack[-2] % Stack[-1]);
0x844: @ SetVariable(Stack[-2], Stack[-1])
0x845: Pop(2)
0x846: GOTO 0x84b

0x847: Push("voice_common") // @poff=206
0x848: Push((int) 0)
0x849: @ SetVariable(Stack[-2], Stack[-1])
0x84a: Pop(2)
0x84b: GOTO 0x85e

0x84c: PushEmpty(bool, object)
0x84d: Stack[-7] = Stack[-1]
0x84e: Call2 0x885

0x84f: Pop(1)
0x850: Pop(1); Push((bool) Stack[-1] == 0)
0x851: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x852: PushEmpty(bool, object)
0x853: Stack[-7] = Stack[-1]
0x854: Call2 0x860

0x855: Pop(1)
0x856: Pop(1); Push((bool) Stack[-1] == 0)
0x857: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x858: Stack[-6] = (bool) 0
0x859: Return(); Pop(4)

0x85a: Push("voice_common") // @poff=206
0x85b: Push((int) 1)
0x85c: @ SetVariable(Stack[-2], Stack[-1])
0x85d: Pop(2)
0x85e: Stack[-6] = (bool) 1
0x85f: Return(); Pop(4)

0x860: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x861: Stack[-5] = "c" // @poff=232
0x862: Stack[-4] = (int) 0
0x863: Push((int) 1)
0x864: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x865: Push((int) 1)
0x866: Pop(1); Push(Stack[-5] + Stack[-1]);
0x867: Pop(1); Push(Stack[-6] + Stack[-1]);
0x868: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x869: Pop(1)
0x86a: Pop(0); Push((bool) Stack[-3] == 0)
0x86b: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x86c: GOTO 0x870

0x86d: Push((int) 1)
0x86e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x86f: GOTO 0x863

0x870: Pop(0); Push((bool) Stack[-4] == 0)
0x871: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x872: Stack[-12] = (bool) 0
0x873: Return(); Pop(10)

0x874: Stack[-2] = (int) 0
0x875: Push((int) 1)
0x876: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x878: @ irand(Stack[-2], Stack[-4])
0x879: Pop(0)
0x87a: Push((int) 1)
0x87b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x87c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x87d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x87e: Pop(1)
0x87f: PushEmpty(bool, string)
0x880: Stack[-3] = Stack[-1]
0x881: Call2 0x8bd

0x882: Stack[-2] = Stack[-14]
0x883: Pop(2)
0x884: Return(); Pop(10)

0x885: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x886: Push("d") // @poff=202
0x887: PushEmpty(int)
0x888: Call2 0x925

0x889: Pop(0)
0x88a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x88b: Push("m") // @poff=260
0x88c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x88d: Stack[-4] = (int) 0
0x88e: Push((int) 1)
0x88f: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x890: Push((int) 1)
0x891: Pop(1); Push(Stack[-5] + Stack[-1]);
0x892: Pop(1); Push(Stack[-6] + Stack[-1]);
0x893: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x894: Pop(1)
0x895: Pop(0); Push((bool) Stack[-3] == 0)
0x896: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x897: GOTO 0x89b

0x898: Push((int) 1)
0x899: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x89a: GOTO 0x88e

0x89b: Pop(0); Push((bool) Stack[-4] == 0)
0x89c: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89d: Stack[-12] = (bool) 0
0x89e: Return(); Pop(10)

0x89f: Stack[-2] = (int) 0
0x8a0: Push((int) 1)
0x8a1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a3: @ irand(Stack[-2], Stack[-4])
0x8a4: Pop(0)
0x8a5: Push((int) 1)
0x8a6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x8a7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8a8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x8a9: Pop(1)
0x8aa: PushEmpty(bool, string)
0x8ab: Stack[-3] = Stack[-1]
0x8ac: Call2 0x8bd

0x8ad: Stack[-2] = Stack[-14]
0x8ae: Pop(2)
0x8af: Return(); Pop(10)

0x8b0: PushEmpty(float, float, float, float)
0x8b1: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x8b2: Pop(0)
0x8b3: Push((bool) 0)
0x8b4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8b5: Pop(1)
0x8b6: Return(); Pop(4)

0x8b7: PushEmpty(float, float, float, float)
0x8b8: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x8b9: Pop(0)
0x8ba: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x8bb: Pop(0)
0x8bc: Return(); Pop(4)

0x8bd: PushEmpty(bool, bool)
0x8be: PushEmpty(bool)
0x8bf: Call2 0x954

0x8c0: Pop(0)
0x8c1: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x8c3: Pop(0)
0x8c4: Push(Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c6: @ lshPlaySpeech(Stack[-3])
0x8c7: Pop(0)
0x8c8: Stack[-4] = (bool) 1
0x8c9: Return(); Pop(2)

0x8ca: Stack[-4] = (bool) 0
0x8cb: Return(); Pop(2)

0x8cc: PushEmpty(bool)
0x8cd: Call2 0x954

0x8ce: Pop(0)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8d0: @ lshStopSpeech()
0x8d1: Pop(0)
0x8d2: Return(); Pop(0)

0x8d3: PushEmpty(object, object)
0x8d4: @ self(Stack[-1])
0x8d5: Pop(0)
0x8d6: Stack[-1] = Stack[-3]
0x8d7: Return(); Pop(2)

0x8d8: Stack[-1] = 0
0x8d9: PushEmpty(float, float)
0x8da: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8db: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8dc: Push((float)9.999999974752427e-07)
0x8dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8df: Stack[-4] = [0.0, 0.0, 0.0]
0x8e0: Return(); Pop(2)

0x8e1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8e2: Return(); Pop(2)

0x8e3: PushEmpty(int, int)
0x8e4: @ GetVariable(Stack[-3], Stack[-1])
0x8e5: Pop(0)
0x8e6: Stack[-1] = Stack[-4]
0x8e7: Return(); Pop(2)

0x8e8: PushEmpty(object, object)
0x8e9: @ CreateIntVector(Stack[-1])
0x8ea: Pop(0)
0x8eb: @@ add(Stack[-4]); Obj=1 // @poff=264
0x8ec: Pop(0)
0x8ed: @@ add(Stack[-3]); Obj=1 // @poff=264
0x8ee: Pop(0)
0x8ef: Push((int) 3)
0x8f0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8f1: Pop(1)
0x8f2: Return(); Pop(2)

0x8f3: Stack[-1] = 0
0x8f4: PushEmpty(int, int, bool, int, int, bool)
0x8f5: @@ GetItemID(Stack[-3]); Obj=8 // @poff=268
0x8f6: Pop(0)
0x8f7: Push("Category") // @poff=278
0x8f8: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x8f9: Pop(1)
0x8fa: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=296
0x8fb: Pop(0)
0x8fc: Pop(0); Push((bool) Stack[-1] == 0)
0x8fd: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fe: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=304
0x8ff: Pop(0)
0x900: GOTO 0x906

0x901: PushEmpty(int, int)
0x902: Stack[-5] = Stack[-2]
0x903: Stack[-9] = Stack[-1]
0x904: Call2 0x8e8

0x905: Pop(2)
0x906: Return(); Pop(6)

0x907: PushEmpty(object, object)
0x908: @ CreateInvItem(Stack[-1])
0x909: Pop(0)
0x90a: @@ SetItemName(Stack[-4]); Obj=1 // @poff=314
0x90b: Pop(0)
0x90c: PushEmpty(object, object, int)
0x90d: Stack[-8] = Stack[-3]
0x90e: Stack[-4] = Stack[-2]
0x90f: Stack[-6] = Stack[-1]
0x910: Call2 0x8f4

0x911: Pop(3)
0x912: Return(); Pop(2)

0x913: Stack[-1] = 0
0x914: PushEmpty(object, object)
0x915: @ FindActor(Stack[-1], Stack[-4])
0x916: Pop(0)
0x917: Pop(0); PushNull((bool) Stack[-1] == 0)
0x918: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x919: Stack[-5] = (bool) 0
0x91a: Return(); Pop(2)

0x91b: @ Trigger(Stack[-1], Stack[-3])
0x91c: Pop(0)
0x91d: Stack[-5] = (bool) 1
0x91e: Return(); Pop(2)

0x91f: Stack[-1] = 0
0x920: PushEmpty(float, float)
0x921: @ GetGameTime(Stack[-1])
0x922: Pop(0)
0x923: Stack[-1] = Stack[-3]
0x924: Return(); Pop(2)

0x925: PushEmpty(float, float)
0x926: @ GetGameTime(Stack[-1])
0x927: Pop(0)
0x928: Push((int) 1)
0x929: PushEmpty(int)
0x92a: Push((int) 24)
0x92b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x92c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x92d: Return(); Pop(2)

0x92e: PushEmpty()
0x92f: PushEmpty(int)
0x930: Call2 0x925

0x931: Pop(0)
0x932: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x933: Return(); Pop(0)

0x934: PushEmpty(string, string)
0x935: Stack[-1] = "idle" // @poff=146
0x936: Push(Stack[-3])
0x937: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x938: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x939: Stack[-1] = Stack[-4]
0x93a: Return(); Pop(2)

0x93b: PushEmpty(int, bool, int, bool)
0x93c: Stack[-2] = (int) 0
0x93d: Push("all") // @poff=138
0x93e: PushEmpty(string, int)
0x93f: Stack[-5] = Stack[-1]
0x940: Call2 0x934

0x941: Pop(1)
0x942: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x943: Pop(2)
0x944: Pop(0); Push((bool) Stack[-1] == 0)
0x945: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x946: GOTO 0x94a

0x947: Push((int) 1)
0x948: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x949: GOTO 0x93d

0x94a: Stack[-2] = Stack[-5]
0x94b: Return(); Pop(4)

0x94c: Stack[-1] = (int) 515550
0x94d: Return(); Pop(0)

0x94e: Stack[-1] = (int) 502875
0x94f: Return(); Pop(0)

0x950: Stack[-1] = "ui/NPC_Petr.png" // @poff=326
0x951: Return(); Pop(0)

0x952: Stack[-1] = "ui/NPC_Petr_b.png" // @poff=358
0x953: Return(); Pop(0)

0x954: Stack[-1] = (bool) 1
0x955: Return(); Pop(0)

0x956: PushEmpty(object, object)
0x957: Push("k5q02") // @poff=394
0x958: Push((int) 2)
0x959: @ SetVariable(Stack[-2], Stack[-1])
0x95a: Pop(2)
0x95b: PushEmpty(object)
0x95c: Call2 0xa14

0x95d: Stack[-1] = Stack[-2]
0x95e: Pop(1)
0x95f: Push("k5q02PetrGotoAndrei") // @poff=406
0x960: Push("pt_map_andrei") // @poff=446
0x961: Push((int) 0)
0x962: Push((int) 515295)
0x963: PushEmpty(float)
0x964: Call2 0x920

0x965: Pop(0)
0x966: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=474
0x967: Pop(5)
0x968: PushEmpty()
0x969: Call2 0x9d1

0x96a: Pop(0)
0x96b: PushEmpty(bool, string, string)
0x96c: Stack[-2] = "quest_k5_02" // @poff=482
0x96d: Stack[-1] = "init_kabak" // @poff=506
0x96e: Call2 0x914

0x96f: Pop(3)
0x970: Return(); Pop(2)

0x971: Stack[-1] = 0
0x972: PushEmpty()
0x973: Push("k5q02") // @poff=394
0x974: Push((int) 6)
0x975: @ SetVariable(Stack[-2], Stack[-1])
0x976: Pop(2)
0x977: PushEmpty()
0x978: Call2 0x9de

0x979: Pop(0)
0x97a: Return(); Pop(0)

0x97b: PushEmpty()
0x97c: Push("tvirin 5 is given") // @poff=528
0x97d: @ Trace(Stack[-1])
0x97e: Pop(1)
0x97f: PushEmpty(object, string, int)
0x980: Stack[-5] = Stack[-3]
0x981: Stack[-2] = "tvirin" // @poff=564
0x982: Stack[-1] = (int) 5
0x983: Call2 0x907

0x984: Pop(3)
0x985: Return(); Pop(0)

0x986: PushEmpty()
0x987: Push("ook11Petr1") // @poff=578
0x988: Push((int) 1)
0x989: @ SetVariable(Stack[-2], Stack[-1])
0x98a: Pop(2)
0x98b: Return(); Pop(0)

0x98c: PushEmpty()
0x98d: Push("playsound") // @poff=600
0x98e: Push("giveitem") // @poff=620
0x98f: @ TriggerWorld(Stack[-2], Stack[-1])
0x990: Pop(2)
0x991: Return(); Pop(0)

0x992: PushEmpty()
0x993: Push("tvirin is given") // @poff=638
0x994: @ Trace(Stack[-1])
0x995: Pop(1)
0x996: PushEmpty(object, string, int)
0x997: Stack[-5] = Stack[-3]
0x998: Stack[-2] = "tvirin" // @poff=564
0x999: Stack[-1] = (int) 1
0x99a: Call2 0x907

0x99b: Pop(3)
0x99c: Return(); Pop(0)

0x99d: PushEmpty()
0x99e: PushEmpty(object, string, float)
0x99f: PushEmpty(object)
0x9a0: Call2 0xa14

0x9a1: Stack[-1] = Stack[-4]
0x9a2: Pop(1)
0x9a3: Stack[-2] = "pt_map_andrei" // @poff=446
0x9a4: Stack[-1] = (int) 2
0x9a5: Call2 0xa25

0x9a6: Pop(3)
0x9a7: PushEmpty(object)
0x9a8: Call2 0xa14

0x9a9: Pop(0)
0x9aa: @@ ShowMap(Stack[-1]); Obj=2 // @poff=670
0x9ab: Pop(1)
0x9ac: Return(); Pop(0)

0x9ad: PushEmpty()
0x9ae: PushEmpty(int, string)
0x9af: Stack[-1] = "k5q02" // @poff=394
0x9b0: Call2 0x8e3

0x9b1: Pop(1)
0x9b2: Push((int) 1)
0x9b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9b4: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b5: Stack[-2] = (bool) 1
0x9b6: Return(); Pop(0)

0x9b7: Stack[-2] = (bool) 0
0x9b8: Return(); Pop(0)

0x9b9: PushEmpty()
0x9ba: PushEmpty(int, string)
0x9bb: Stack[-1] = "k5q02" // @poff=394
0x9bc: Call2 0x8e3

0x9bd: Pop(1)
0x9be: Push((int) 5)
0x9bf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9c0: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9c1: Stack[-2] = (bool) 1
0x9c2: Return(); Pop(0)

0x9c3: Stack[-2] = (bool) 0
0x9c4: Return(); Pop(0)

0x9c5: PushEmpty()
0x9c6: PushEmpty(int, string)
0x9c7: Stack[-1] = "ook11Petr1" // @poff=578
0x9c8: Call2 0x8e3

0x9c9: Pop(1)
0x9ca: Push((int) 0)
0x9cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9cd: Stack[-2] = (bool) 1
0x9ce: Return(); Pop(0)

0x9cf: Stack[-2] = (bool) 0
0x9d0: Return(); Pop(0)

0x9d1: PushEmpty(object, object)
0x9d2: Push((int) 399)
0x9d3: Push((int) 2)
0x9d4: Push((int) 525937)
0x9d5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9d6: Pop(3)
0x9d7: PushEmpty(bool, object, int)
0x9d8: Stack[-4] = Stack[-2]
0x9d9: Stack[-1] = (int) 397
0x9da: Call2 0x9f8

0x9db: Pop(3)
0x9dc: Return(); Pop(2)

0x9dd: Stack[-1] = 0
0x9de: PushEmpty(object, object)
0x9df: Push((int) 403)
0x9e0: Push((int) 2)
0x9e1: Push((int) 525941)
0x9e2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9e3: Pop(3)
0x9e4: PushEmpty(bool, object, int)
0x9e5: Stack[-4] = Stack[-2]
0x9e6: Stack[-1] = (int) 397
0x9e7: Call2 0x9f8

0x9e8: Pop(3)
0x9e9: Return(); Pop(2)

0x9ea: Stack[-1] = 0
0x9eb: PushEmpty(object, object)
0x9ec: @ GetDiaryRoot(Stack[-1])
0x9ed: Pop(0)
0x9ee: Pop(0); Push((bool) Stack[-1] == 0)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f0: Push("Can't retrieve diary root") // @poff=678
0x9f1: @ Trace(Stack[-1])
0x9f2: Pop(1)
0x9f3: Stack[-3] = (bool) 0
0x9f4: Return(); Pop(2)

0x9f5: Stack[-1] = Stack[-3]
0x9f6: Return(); Pop(2)

0x9f7: Stack[-1] = 0
0x9f8: PushEmpty(object, object, int, object, object, int)
0x9f9: PushEmpty(object)
0x9fa: Call2 0x9eb

0x9fb: Stack[-1] = Stack[-4]
0x9fc: Pop(1)
0x9fd: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=730
0x9fe: Pop(0)
0x9ff: Pop(0); Push((bool) Stack[-2] == 0)
0xa00: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa01: Push("Can't find diary parent with id: ") // @poff=735
0xa02: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa03: @ Trace(Stack[-1])
0xa04: Pop(1)
0xa05: Stack[-9] = (bool) 0
0xa06: Return(); Pop(6)

0xa07: @@ AddChild(Stack[-8]); Obj=2 // @poff=803
0xa08: Pop(0)
0xa09: Push((int) 7)
0xa0a: @ SendWorldWndMessage(Stack[-1])
0xa0b: Pop(1)
0xa0c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=812
0xa0d: Pop(0)
0xa0e: @ SetDiarySection(Stack[-1])
0xa0f: Pop(0)
0xa10: Stack[-9] = (bool) 0
0xa11: Return(); Pop(6)

0xa12: Stack[-2] = 0
0xa13: Stack[-3] = 0
0xa14: PushEmpty(object, object, object, object)
0xa15: @ GetMainOutdoorScene(Stack[-2])
0xa16: Pop(0)
0xa17: Pop(0); PushNull((bool) Stack[-2] == 0)
0xa18: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa19: Push("Can't find main outdoor scene") // @poff=824
0xa1a: @ Trace(Stack[-1])
0xa1b: Pop(1)
0xa1c: Stack[-1] = 0
0xa1d: Stack[-1] = Stack[-5]
0xa1e: Return(); Pop(4)

0xa1f: @@ GetMap(Stack[-1]); Obj=2 // @poff=884
0xa20: Pop(0)
0xa21: Stack[-1] = Stack[-5]
0xa22: Return(); Pop(4)

0xa23: Stack[-1] = 0
0xa24: Stack[-2] = 0
0xa25: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xa26: @ GetMainOutdoorScene(Stack[-2])
0xa27: Pop(0)
0xa28: Pop(0); PushNull((bool) Stack[-2] == 0)
0xa29: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2a: Push("Can't find main outdoor scene") // @poff=824
0xa2b: @ Trace(Stack[-1])
0xa2c: Pop(1)
0xa2d: Return(); Pop(8)

0xa2e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=891
0xa2f: Pop(0)
0xa30: Pop(0); Push((bool) Stack[-1] == 0)
0xa31: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa32: Push("Warning: outdoor scene locator ") // @poff=902
0xa33: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa34: Push(" doesnt exist") // @poff=966
0xa35: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa36: @ Trace(Stack[-1])
0xa37: Pop(1)
0xa38: @@ GetMap(Stack[-11]); Obj=2 // @poff=884
0xa39: Pop(0)
0xa3a: Pop(0); PushNull((bool) Stack[-11] == 0)
0xa3b: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3c: Push("Can't find map") // @poff=994
0xa3d: @ Trace(Stack[-1])
0xa3e: Pop(1)
0xa3f: Return(); Pop(8)

0xa40: Push(CvectorIndex(Stack[-4], 0))
0xa41: Push(CvectorIndex(Stack[-5], 2))
0xa42: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=1024
0xa43: Pop(2)
0xa44: Return(); Pop(8)

0xa45: Stack[-2] = 0
0xa46: PushEmpty(int, int)
0xa47: Push("branch") // @poff=1037
0xa48: @ GetVariable(Stack[-1], Stack[-2])
0xa49: Pop(1)
0xa4a: Push((int) 0)
0xa4b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa4c: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4d: Stack[-3] = (int) 1
0xa4e: Return(); Pop(2)

0xa4f: GOTO 0xa55

0xa50: Push((int) 1)
0xa51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa53: Stack[-3] = (int) 2
0xa54: Return(); Pop(2)

0xa55: Stack[-3] = (int) 3
0xa56: Return(); Pop(2)

0xa57: PushEmpty()
0xa58: Push(GlobalVars[1])
0xa59: Pop(1); Push((bool) Stack[-1] == 0)
0xa5a: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa5b: PushEmpty(int, object)
0xa5c: Stack[-3] = Stack[-1]
0xa5d: Push(-2, 1); TaskCall(1)
0xa5e: Call2 0xd

0xa5f: Pop(-2, 1); TaskReturn
0xa60: Pop(2)
0xa61: Push(GlobalVars[1])
0xa62: Stack[-1] = (bool) 1
0xa63: GlobalVars[1] = Stack[-1]; Pop(1)
0xa64: PushEmpty(bool, int)
0xa65: Stack[-1] = (int) 5
0xa66: Call2 0x92e

0xa67: Pop(1)
0xa68: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa69: PushEmpty(int, object)
0xa6a: Stack[-3] = Stack[-1]
0xa6b: Push(-2, 1); TaskCall(3)
0xa6c: Call2 0xfc

0xa6d: Pop(-2, 1); TaskReturn
0xa6e: Pop(2)
0xa6f: Return(); Pop(0)

0xa70: PushEmpty(bool, int)
0xa71: Stack[-1] = (int) 11
0xa72: Call2 0x92e

0xa73: Pop(1)
0xa74: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa75: PushEmpty(int, object)
0xa76: Stack[-3] = Stack[-1]
0xa77: Push(-2, 1); TaskCall(5)
0xa78: Call2 0x3a1

0xa79: Pop(-2, 1); TaskReturn
0xa7a: Pop(2)
0xa7b: Return(); Pop(0)

0xa7c: PushEmpty(bool, int)
0xa7d: Stack[-1] = (int) 12
0xa7e: Call2 0x92e

0xa7f: Pop(1)
0xa80: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa81: PushEmpty(int, object)
0xa82: Stack[-3] = Stack[-1]
0xa83: Push(-2, 1); TaskCall(7)
0xa84: Call2 0x4da

0xa85: Pop(-2, 1); TaskReturn
0xa86: Pop(2)
0xa87: Return(); Pop(0)

0xa88: PushEmpty(int, object)
0xa89: Stack[-3] = Stack[-1]
0xa8a: Push(-2, 1); TaskCall(9)
0xa8b: Call2 0x5dd

0xa8c: Pop(-2, 1); TaskReturn
0xa8d: Pop(2)
0xa8e: Return(); Pop(0)

