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
	W:player
	A:GetPosition
	A:GetProperty
	A:SetProperty
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	W:m
	A:add
	W:money
	W:Money
	W:ui/NPC_Eva.png
	W:ui/NPC_Eva_b.png
	W:k3q02
	W:k3q02EvaGotoKaterina
	W:pt_map_katerina
	A:AddMark
	W:ook3Eva1
	W:ook6Eva1
	W:ook6Eva2
	W:quest_k6_01
	W:unlock_eva
	W:ook11Eva1
	W:money1000 is given
	W:playsound
	W:givemoney
	W:giveitem
	W:k3q03
	W:k6q01
	W:k11q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
	W:mt_eva
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f7065727479006d000000616464006d006f006e006500790000004d006f006e00650079000000750069002f004e00500043005f004500760061002e0070006e0067000000750069002f004e00500043005f004500760061005f0062002e0070006e00670000006b00330071003000320000006b00330071003000320045007600610047006f0074006f004b00610074006500720069006e0061000000700074005f006d00610070005f006b00610074006500720069006e00610000004164644d61726b006f006f006b003300450076006100310000006f006f006b003600450076006100310000006f006f006b00360045007600610032000000710075006500730074005f006b0036005f0030003100000075006e006c006f0063006b005f0065007600610000006f006f006b0031003100450076006100310000006d006f006e00650079003100300030003000200069007300200067006900760065006e00000070006c006100790073006f0075006e006400000067006900760065006d006f006e0065007900000067006900760065006900740065006d0000006b00330071003000330000006b00360071003000310000006b00310031007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e006300680000006d0074005f006500760061000000
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
	GetInvItemByName (2 args)
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

RunOp = 0x919
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ad Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4fd Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6bb Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7f1 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8ef Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x968 Vars = (int)
		EVENT_6 Op = 0x98e Vars = ()
		EVENT_5 Op = 0x99d Vars = ()
		EVENT_45 Op = 0x9aa Vars = (bool)
		EVENT_0 Op = 0x9b6 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xa41

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
0x11: Call2 0xb48

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0xa9b

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0xa46

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xbb6

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xbb4

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xbb8

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xbba

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xcf3

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
0x55: Call2 0xa8a

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
0x68: Push((int) 525477)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 529299)
0x6e: Push((int) 30754)
0x6f: Push((int) 30753)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 525478)
0x73: Push((int) -1)
0x74: Push((int) 26834)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0xbbc

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0xb25

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
0x9a: Call2 0xbbc

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
0xaa: Call2 0xb2c

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0xb41

0xb3: Pop(0)
0xb4: Push((int) 26833)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525477)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 529299)
0xc1: Push((int) 30754)
0xc2: Push((int) 30753)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 525478)
0xc6: Push((int) -1)
0xc7: Push((int) 26834)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 30754)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 529300)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 529301)
0xd8: Push((int) -1)
0xd9: Push((int) 30755)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 529302)
0xdd: Push((int) -1)
0xde: Push((int) 30756)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3: PushEmpty(bool)
0xe4: Call2 0xbbc

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ lshStopAnimation()
0xe8: Pop(0)
0xe9: GOTO 0xec

0xea: @ StopAnimation()
0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: GOTO 0xaf

0xee: Return(); Pop(0)

0xef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1: PushEmpty(bool, object)
0xf2: PushEmpty(object)
0xf3: Call2 0xb48

0xf4: Stack[-1] = Stack[-2]
0xf5: Pop(1)
0xf6: Call2 0xa9b

0xf7: Pop(2)
0xf8: PushEmpty(bool, object, float)
0xf9: Stack[-12] = Stack[-2]
0xfa: Stack[-1] = (float) 70.0
0xfb: Call2 0xa46

0xfc: Pop(2)
0xfd: Pop(1); Push((bool) Stack[-1] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xff: Stack[-10] = (int) -2
0x100: Return(); Pop(8)

0x101: @ CreateDialog(Stack[-4])
0x102: Pop(0)
0x103: PushEmpty(int)
0x104: Call2 0xbb6

0x105: Pop(0)
0x106: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x107: Pop(1)
0x108: PushEmpty(int)
0x109: Call2 0xbb4

0x10a: Pop(0)
0x10b: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x10c: Pop(1)
0x10d: PushEmpty(string)
0x10e: Call2 0xbb8

0x10f: Pop(0)
0x110: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x111: Pop(1)
0x112: PushEmpty(string)
0x113: Call2 0xbba

0x114: Pop(0)
0x115: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x116: Pop(1)
0x117: PushEmpty(int)
0x118: Call2 0xcf3

0x119: Pop(0)
0x11a: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x11b: Pop(1)
0x11c: Stack[-2] = (int) -1
0x11d: @ IsOverrideActive(Stack[-3])
0x11e: Pop(0)
0x11f: Push(Stack[-3])
0x120: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x121: Stack[-10] = (int) -2
0x122: Return(); Pop(8)

0x123: @ DoDialog(Stack[-4])
0x124: Pop(0)
0x125: PushEmpty(object, object)
0x126: Stack[-11] = Stack[-2]
0x127: Stack[-6] = Stack[-1]
0x128: Push(-2, 4); TaskCall(4)
0x129: Call2 0x140

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: @ sync()
0x131: Pop(0)
0x132: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x133: Pop(0)
0x134: GOTO 0x12e

0x135: PushEmpty(object)
0x136: Stack[-10] = Stack[-1]
0x137: Call2 0xa8a

0x138: Pop(1)
0x139: @ StopDialog(Stack[-4])
0x13a: Pop(0)
0x13b: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x13c: Pop(0)
0x13d: Stack[-2] = Stack[-10]
0x13e: Return(); Pop(8)

0x13f: Stack[-4] = 0
0x140: PushEmpty()
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0x197

0x149: Pop(1)
0x14a: Push((int) 525548)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0xc19

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 525549)
0x155: Push((int) 42898)
0x156: Push((int) 26905)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0xc25

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0xc31

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push((int) 525578)
0x168: Push((int) 41036)
0x169: Push((int) 26925)
0x16a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16b: Pop(3)
0x16c: Push((int) 539127)
0x16d: Push((int) -1)
0x16e: Push((int) 41057)
0x16f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x170: Pop(3)
0x171: Push((int) 525558)
0x172: Push((int) -1)
0x173: Push((int) 26914)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: GOTO 0x179

0x177: Return(); Pop(0)

0x178: GOTO 0x144

0x179: PushEmpty(bool)
0x17a: Call2 0xbbc

0x17b: Pop(0)
0x17c: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x17d: @ lshWaitForAnimEnd()
0x17e: Pop(0)
0x17f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: GOTO 0x187

0x182: PushEmpty(string)
0x183: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x184: Call2 0xb25

0x185: Pop(1)
0x186: GOTO 0x17d

0x187: GOTO 0x196

0x188: Push("all") // @poff=138
0x189: Push("idle") // @poff=146
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: @ WaitForAnimEnd()
0x18d: Pop(0)
0x18e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: GOTO 0x196

0x191: Push("all") // @poff=138
0x192: Push("idle") // @poff=146
0x193: @ PlayAnimation(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: GOTO 0x18c

0x196: Return(); Pop(0)

0x197: PushEmpty()
0x198: PushEmpty(bool)
0x199: Call2 0xbbc

0x19a: Pop(0)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Return(); Pop(0)

0x19e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(string, bool)
0x1a2: Stack[-3] = Stack[-2]
0x1a3: Push("") // @poff=102
0x1a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a6: Stack[-1] = (bool) 0
0x1a7: GOTO 0x1a9

0x1a8: Stack[-1] = (bool) 1
0x1a9: Call2 0xb2c

0x1aa: Pop(2)
0x1ab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: Push((int) 1)
0x1af: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x1b0: PushEmpty()
0x1b1: Call2 0xb41

0x1b2: Pop(0)
0x1b3: Push((int) 26913)
0x1b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: PushEmpty(object, object)
0x1b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b9: Call2 0xbbe

0x1ba: Pop(2)
0x1bb: Push((int) 41094)
0x1bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: PushEmpty(object, object)
0x1bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c1: Call2 0xbbe

0x1c2: Pop(2)
0x1c3: Push((int) 41086)
0x1c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(object, object)
0x1c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0xbbe

0x1ca: Pop(2)
0x1cb: Push((int) 41082)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0xbbe

0x1d2: Pop(2)
0x1d3: Push((int) 42902)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: PushEmpty(object, object)
0x1d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0xbbe

0x1da: Pop(2)
0x1db: Push((int) 26925)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(object, object)
0x1df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e1: Call2 0xbd5

0x1e2: Pop(2)
0x1e3: Push((int) 26929)
0x1e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e6: PushEmpty(object, object)
0x1e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e9: Call2 0xbdb

0x1ea: Pop(2)
0x1eb: PushEmpty(object, object)
0x1ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ee: Call2 0xc0d

0x1ef: Pop(2)
0x1f0: PushEmpty(object, object)
0x1f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Call2 0xc03

0x1f4: Pop(2)
0x1f5: Push((int) 41060)
0x1f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: PushEmpty(object, object)
0x1f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fb: Call2 0xbdb

0x1fc: Pop(2)
0x1fd: Push((int) 41059)
0x1fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x200: PushEmpty(object, object)
0x201: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x202: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x203: Call2 0xc03

0x204: Pop(2)
0x205: PushEmpty(object, object)
0x206: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0xc0d

0x209: Pop(2)
0x20a: Push((int) 26904)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral" // @poff=89
0x20f: Call2 0x197

0x210: Pop(1)
0x211: Push((int) 525548)
0x212: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x213: Pop(1)
0x214: @@@ ClearReplies(); Obj=0 // @poff=116
0x215: Pop(0)
0x216: PushEmpty(bool, object)
0x217: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x218: Call2 0xc19

0x219: Pop(1)
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: Push((int) 525549)
0x21c: Push((int) 42898)
0x21d: Push((int) 26905)
0x21e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21f: Pop(3)
0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: PushEmpty(bool, object)
0x223: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x224: Call2 0xc25

0x225: Pop(1)
0x226: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0xc31

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: Push((int) 525578)
0x22f: Push((int) 41036)
0x230: Push((int) 26925)
0x231: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x232: Pop(3)
0x233: Push((int) 539127)
0x234: Push((int) -1)
0x235: Push((int) 41057)
0x236: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x237: Pop(3)
0x238: Push((int) 525558)
0x239: Push((int) -1)
0x23a: Push((int) 26914)
0x23b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23c: Pop(3)
0x23d: Return(); Pop(0)

0x23e: Push((int) 41036)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral" // @poff=89
0x243: Call2 0x197

0x244: Pop(1)
0x245: Push((int) 539108)
0x246: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x247: Pop(1)
0x248: @@@ ClearReplies(); Obj=0 // @poff=116
0x249: Pop(0)
0x24a: Push((int) 539110)
0x24b: Push((int) 41039)
0x24c: Push((int) 41038)
0x24d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24e: Pop(3)
0x24f: Push((int) 539112)
0x250: Push((int) 41041)
0x251: Push((int) 41040)
0x252: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 41041)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral" // @poff=89
0x25a: Call2 0x197

0x25b: Pop(1)
0x25c: Push((int) 539113)
0x25d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25e: Pop(1)
0x25f: @@@ ClearReplies(); Obj=0 // @poff=116
0x260: Pop(0)
0x261: Push((int) 525580)
0x262: Push((int) 41046)
0x263: Push((int) 26927)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Push((int) 539114)
0x267: Push((int) 26926)
0x268: Push((int) 41042)
0x269: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: Push((int) 41046)
0x26d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral" // @poff=89
0x271: Call2 0x197

0x272: Pop(1)
0x273: Push((int) 539117)
0x274: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x275: Pop(1)
0x276: @@@ ClearReplies(); Obj=0 // @poff=116
0x277: Pop(0)
0x278: Push((int) 539118)
0x279: Push((int) 41048)
0x27a: Push((int) 41047)
0x27b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27c: Pop(3)
0x27d: Push((int) 539120)
0x27e: Push((int) 41052)
0x27f: Push((int) 41049)
0x280: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x281: Pop(3)
0x282: Return(); Pop(0)

0x283: Push((int) 41052)
0x284: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x286: PushEmpty(string)
0x287: Stack[-1] = "Neutral" // @poff=89
0x288: Call2 0x197

0x289: Pop(1)
0x28a: Push((int) 539123)
0x28b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28c: Pop(1)
0x28d: @@@ ClearReplies(); Obj=0 // @poff=116
0x28e: Pop(0)
0x28f: Push((int) 539124)
0x290: Push((int) 26926)
0x291: Push((int) 41053)
0x292: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x293: Pop(3)
0x294: Return(); Pop(0)

0x295: Push((int) 41048)
0x296: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Neutral" // @poff=89
0x29a: Call2 0x197

0x29b: Pop(1)
0x29c: Push((int) 539119)
0x29d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29e: Pop(1)
0x29f: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a0: Pop(0)
0x2a1: Push((int) 539121)
0x2a2: Push((int) 41055)
0x2a3: Push((int) 41050)
0x2a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a5: Pop(3)
0x2a6: Push((int) 539122)
0x2a7: Push((int) -1)
0x2a8: Push((int) 41051)
0x2a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2aa: Pop(3)
0x2ab: Return(); Pop(0)

0x2ac: Push((int) 41055)
0x2ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2af: PushEmpty(string)
0x2b0: Stack[-1] = "Neutral" // @poff=89
0x2b1: Call2 0x197

0x2b2: Pop(1)
0x2b3: Push((int) 539125)
0x2b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b5: Pop(1)
0x2b6: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b7: Pop(0)
0x2b8: Push((int) 539126)
0x2b9: Push((int) -1)
0x2ba: Push((int) 41056)
0x2bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bc: Pop(3)
0x2bd: Return(); Pop(0)

0x2be: Push((int) 41039)
0x2bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral" // @poff=89
0x2c3: Call2 0x197

0x2c4: Pop(1)
0x2c5: Push((int) 539111)
0x2c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c7: Pop(1)
0x2c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c9: Pop(0)
0x2ca: Push((int) 539109)
0x2cb: Push((int) 26926)
0x2cc: Push((int) 41037)
0x2cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ce: Pop(3)
0x2cf: Push((int) 539115)
0x2d0: Push((int) 41048)
0x2d1: Push((int) 41044)
0x2d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d3: Pop(3)
0x2d4: Return(); Pop(0)

0x2d5: Push((int) 26926)
0x2d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2d8: PushEmpty(string)
0x2d9: Stack[-1] = "Neutral" // @poff=89
0x2da: Call2 0x197

0x2db: Pop(1)
0x2dc: Push((int) 525579)
0x2dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2de: Pop(1)
0x2df: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e0: Pop(0)
0x2e1: Push((int) 539116)
0x2e2: Push((int) 26928)
0x2e3: Push((int) 41045)
0x2e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e5: Pop(3)
0x2e6: Push((int) 539128)
0x2e7: Push((int) -1)
0x2e8: Push((int) 41059)
0x2e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ea: Pop(3)
0x2eb: Return(); Pop(0)

0x2ec: Push((int) 26928)
0x2ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral" // @poff=89
0x2f1: Call2 0x197

0x2f2: Pop(1)
0x2f3: Push((int) 525581)
0x2f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f5: Pop(1)
0x2f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f7: Pop(0)
0x2f8: Push((int) 525582)
0x2f9: Push((int) -1)
0x2fa: Push((int) 26929)
0x2fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fc: Pop(3)
0x2fd: Push((int) 539129)
0x2fe: Push((int) -1)
0x2ff: Push((int) 41060)
0x300: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x301: Pop(3)
0x302: Return(); Pop(0)

0x303: Push((int) 42898)
0x304: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x306: PushEmpty(string)
0x307: Stack[-1] = "Neutral" // @poff=89
0x308: Call2 0x197

0x309: Pop(1)
0x30a: Push((int) 540840)
0x30b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x30c: Pop(1)
0x30d: @@@ ClearReplies(); Obj=0 // @poff=116
0x30e: Pop(0)
0x30f: Push((int) 540841)
0x310: Push((int) 41064)
0x311: Push((int) 42899)
0x312: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x313: Pop(3)
0x314: Push((int) 540842)
0x315: Push((int) 42901)
0x316: Push((int) 42900)
0x317: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x318: Pop(3)
0x319: Return(); Pop(0)

0x31a: Push((int) 42901)
0x31b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x31d: PushEmpty(string)
0x31e: Stack[-1] = "Neutral" // @poff=89
0x31f: Call2 0x197

0x320: Pop(1)
0x321: Push((int) 540843)
0x322: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x323: Pop(1)
0x324: @@@ ClearReplies(); Obj=0 // @poff=116
0x325: Pop(0)
0x326: Push((int) 540844)
0x327: Push((int) -1)
0x328: Push((int) 42902)
0x329: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32a: Pop(3)
0x32b: Return(); Pop(0)

0x32c: Push((int) 41064)
0x32d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x32f: PushEmpty(string)
0x330: Stack[-1] = "Neutral" // @poff=89
0x331: Call2 0x197

0x332: Pop(1)
0x333: Push((int) 539133)
0x334: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x335: Pop(1)
0x336: @@@ ClearReplies(); Obj=0 // @poff=116
0x337: Pop(0)
0x338: Push((int) 539134)
0x339: Push((int) 41061)
0x33a: Push((int) 41065)
0x33b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33c: Pop(3)
0x33d: Push((int) 539142)
0x33e: Push((int) 41061)
0x33f: Push((int) 41073)
0x340: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x341: Pop(3)
0x342: Return(); Pop(0)

0x343: Push((int) 41061)
0x344: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x346: PushEmpty(string)
0x347: Stack[-1] = "Neutral" // @poff=89
0x348: Call2 0x197

0x349: Pop(1)
0x34a: Push((int) 539130)
0x34b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34c: Pop(1)
0x34d: @@@ ClearReplies(); Obj=0 // @poff=116
0x34e: Pop(0)
0x34f: Push((int) 539132)
0x350: Push((int) 41071)
0x351: Push((int) 41063)
0x352: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x353: Pop(3)
0x354: Push((int) 539131)
0x355: Push((int) 41067)
0x356: Push((int) 41062)
0x357: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x358: Pop(3)
0x359: Return(); Pop(0)

0x35a: Push((int) 41067)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral" // @poff=89
0x35f: Call2 0x197

0x360: Pop(1)
0x361: Push((int) 539136)
0x362: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x363: Pop(1)
0x364: @@@ ClearReplies(); Obj=0 // @poff=116
0x365: Pop(0)
0x366: Push((int) 539137)
0x367: Push((int) 41069)
0x368: Push((int) 41068)
0x369: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36a: Pop(3)
0x36b: Push((int) 539158)
0x36c: Push((int) 41069)
0x36d: Push((int) 41096)
0x36e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Push((int) 41071)
0x372: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x374: PushEmpty(string)
0x375: Stack[-1] = "Neutral" // @poff=89
0x376: Call2 0x197

0x377: Pop(1)
0x378: Push((int) 539140)
0x379: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37a: Pop(1)
0x37b: @@@ ClearReplies(); Obj=0 // @poff=116
0x37c: Pop(0)
0x37d: Push((int) 539141)
0x37e: Push((int) 41069)
0x37f: Push((int) 41072)
0x380: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x381: Pop(3)
0x382: Push((int) 539143)
0x383: Push((int) 41076)
0x384: Push((int) 41075)
0x385: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: Push((int) 41076)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Neutral" // @poff=89
0x38d: Call2 0x197

0x38e: Pop(1)
0x38f: Push((int) 539144)
0x390: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x391: Pop(1)
0x392: @@@ ClearReplies(); Obj=0 // @poff=116
0x393: Pop(0)
0x394: Push((int) 539145)
0x395: Push((int) 41069)
0x396: Push((int) 41077)
0x397: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x398: Pop(3)
0x399: Push((int) 539146)
0x39a: Push((int) 41079)
0x39b: Push((int) 41078)
0x39c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39d: Pop(3)
0x39e: Return(); Pop(0)

0x39f: Push((int) 41079)
0x3a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = "Neutral" // @poff=89
0x3a4: Call2 0x197

0x3a5: Pop(1)
0x3a6: Push((int) 539147)
0x3a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a8: Pop(1)
0x3a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3aa: Pop(0)
0x3ab: Push((int) 539148)
0x3ac: Push((int) 41069)
0x3ad: Push((int) 41081)
0x3ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3af: Pop(3)
0x3b0: Push((int) 539149)
0x3b1: Push((int) -1)
0x3b2: Push((int) 41082)
0x3b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b4: Pop(3)
0x3b5: Return(); Pop(0)

0x3b6: Push((int) 41069)
0x3b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3b9: PushEmpty(string)
0x3ba: Stack[-1] = "Neutral" // @poff=89
0x3bb: Call2 0x197

0x3bc: Pop(1)
0x3bd: Push((int) 539138)
0x3be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3bf: Pop(1)
0x3c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c1: Pop(0)
0x3c2: Push((int) 539150)
0x3c3: Push((int) 41085)
0x3c4: Push((int) 41084)
0x3c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c6: Pop(3)
0x3c7: Push((int) 539152)
0x3c8: Push((int) -1)
0x3c9: Push((int) 41086)
0x3ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 41085)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral" // @poff=89
0x3d2: Call2 0x197

0x3d3: Pop(1)
0x3d4: Push((int) 539151)
0x3d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d6: Pop(1)
0x3d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d8: Pop(0)
0x3d9: Push((int) 539139)
0x3da: Push((int) 26906)
0x3db: Push((int) 41070)
0x3dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3dd: Pop(3)
0x3de: Push((int) 539153)
0x3df: Push((int) 26906)
0x3e0: Push((int) 41087)
0x3e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 26906)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral" // @poff=89
0x3e9: Call2 0x197

0x3ea: Pop(1)
0x3eb: Push((int) 525550)
0x3ec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ed: Pop(1)
0x3ee: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ef: Pop(0)
0x3f0: Push((int) 525551)
0x3f1: Push((int) 26908)
0x3f2: Push((int) 26907)
0x3f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f4: Pop(3)
0x3f5: Push((int) 539154)
0x3f6: Push((int) 26908)
0x3f7: Push((int) 41089)
0x3f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 26908)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Neutral" // @poff=89
0x400: Call2 0x197

0x401: Pop(1)
0x402: Push((int) 525552)
0x403: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x404: Pop(1)
0x405: @@@ ClearReplies(); Obj=0 // @poff=116
0x406: Pop(0)
0x407: Push((int) 525553)
0x408: Push((int) 41092)
0x409: Push((int) 26909)
0x40a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40b: Pop(3)
0x40c: Push((int) 539155)
0x40d: Push((int) 41092)
0x40e: Push((int) 41091)
0x40f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Push((int) 41092)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Neutral" // @poff=89
0x417: Call2 0x197

0x418: Pop(1)
0x419: Push((int) 539156)
0x41a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x41b: Pop(1)
0x41c: @@@ ClearReplies(); Obj=0 // @poff=116
0x41d: Pop(0)
0x41e: Push((int) 525557)
0x41f: Push((int) -1)
0x420: Push((int) 26913)
0x421: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x422: Pop(3)
0x423: Push((int) 539157)
0x424: Push((int) -1)
0x425: Push((int) 41094)
0x426: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x427: Pop(3)
0x428: Return(); Pop(0)

0x429: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x42a: PushEmpty(bool)
0x42b: Call2 0xbbc

0x42c: Pop(0)
0x42d: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42e: @ lshStopAnimation()
0x42f: Pop(0)
0x430: GOTO 0x433

0x431: @ StopAnimation()
0x432: Pop(0)
0x433: Return(); Pop(0)

0x434: GOTO 0x1ae

0x435: Return(); Pop(0)

0x436: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x437: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x438: PushEmpty(bool, object)
0x439: PushEmpty(object)
0x43a: Call2 0xb48

0x43b: Stack[-1] = Stack[-2]
0x43c: Pop(1)
0x43d: Call2 0xa9b

0x43e: Pop(2)
0x43f: PushEmpty(bool, object, float)
0x440: Stack[-12] = Stack[-2]
0x441: Stack[-1] = (float) 70.0
0x442: Call2 0xa46

0x443: Pop(2)
0x444: Pop(1); Push((bool) Stack[-1] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-10] = (int) -2
0x447: Return(); Pop(8)

0x448: @ CreateDialog(Stack[-4])
0x449: Pop(0)
0x44a: PushEmpty(int)
0x44b: Call2 0xbb6

0x44c: Pop(0)
0x44d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x44e: Pop(1)
0x44f: PushEmpty(int)
0x450: Call2 0xbb4

0x451: Pop(0)
0x452: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x453: Pop(1)
0x454: PushEmpty(string)
0x455: Call2 0xbb8

0x456: Pop(0)
0x457: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x458: Pop(1)
0x459: PushEmpty(string)
0x45a: Call2 0xbba

0x45b: Pop(0)
0x45c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x45d: Pop(1)
0x45e: PushEmpty(int)
0x45f: Call2 0xcf3

0x460: Pop(0)
0x461: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x462: Pop(1)
0x463: Stack[-2] = (int) -1
0x464: @ IsOverrideActive(Stack[-3])
0x465: Pop(0)
0x466: Push(Stack[-3])
0x467: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x468: Stack[-10] = (int) -2
0x469: Return(); Pop(8)

0x46a: @ DoDialog(Stack[-4])
0x46b: Pop(0)
0x46c: PushEmpty(object, object)
0x46d: Stack[-11] = Stack[-2]
0x46e: Stack[-6] = Stack[-1]
0x46f: Push(-2, 4); TaskCall(6)
0x470: Call2 0x487

0x471: Pop(-2, 4); TaskReturn
0x472: Pop(2)
0x473: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x474: Pop(0)
0x475: Pop(0); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x477: @ sync()
0x478: Pop(0)
0x479: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x47a: Pop(0)
0x47b: GOTO 0x475

0x47c: PushEmpty(object)
0x47d: Stack[-10] = Stack[-1]
0x47e: Call2 0xa8a

0x47f: Pop(1)
0x480: @ StopDialog(Stack[-4])
0x481: Pop(0)
0x482: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x483: Pop(0)
0x484: Stack[-2] = Stack[-10]
0x485: Return(); Pop(8)

0x486: Stack[-4] = 0
0x487: PushEmpty()
0x488: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x489: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x48a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x48b: Push((int) 1)
0x48c: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Neutral" // @poff=89
0x48f: Call2 0x4e7

0x490: Pop(1)
0x491: Push((int) 526037)
0x492: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x493: Pop(1)
0x494: @@@ ClearReplies(); Obj=0 // @poff=116
0x495: Pop(0)
0x496: PushEmpty(bool)
0x497: Stack[-1] = (bool) 0
0x498: PushEmpty(bool, object)
0x499: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49a: Call2 0xc3d

0x49b: Pop(1)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49d: PushEmpty(bool, object)
0x49e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49f: Call2 0xc49

0x4a0: Pop(1)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Stack[-1] = (bool) 1
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a4: Push((int) 526038)
0x4a5: Push((int) 30287)
0x4a6: Push((int) 27323)
0x4a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a8: Pop(3)
0x4a9: PushEmpty(bool)
0x4aa: Stack[-1] = (bool) 0
0x4ab: PushEmpty(bool, object)
0x4ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Call2 0xc55

0x4ae: Pop(1)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b0: PushEmpty(bool, object)
0x4b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b2: Call2 0xc61

0x4b3: Pop(1)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Stack[-1] = (bool) 1
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4b7: Push((int) 526068)
0x4b8: Push((int) 27354)
0x4b9: Push((int) 27353)
0x4ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4bb: Pop(3)
0x4bc: Push((int) 526043)
0x4bd: Push((int) -1)
0x4be: Push((int) 27328)
0x4bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c0: Pop(3)
0x4c1: Push((int) 528864)
0x4c2: Push((int) -1)
0x4c3: Push((int) 30286)
0x4c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c5: Pop(3)
0x4c6: GOTO 0x4c9

0x4c7: Return(); Pop(0)

0x4c8: GOTO 0x48b

0x4c9: PushEmpty(bool)
0x4ca: Call2 0xbbc

0x4cb: Pop(0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4cd: @ lshWaitForAnimEnd()
0x4ce: Pop(0)
0x4cf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: GOTO 0x4d7

0x4d2: PushEmpty(string)
0x4d3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4d4: Call2 0xb25

0x4d5: Pop(1)
0x4d6: GOTO 0x4cd

0x4d7: GOTO 0x4e6

0x4d8: Push("all") // @poff=138
0x4d9: Push("idle") // @poff=146
0x4da: @ PlayAnimation(Stack[-2], Stack[-1])
0x4db: Pop(2)
0x4dc: @ WaitForAnimEnd()
0x4dd: Pop(0)
0x4de: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4df: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4e0: GOTO 0x4e6

0x4e1: Push("all") // @poff=138
0x4e2: Push("idle") // @poff=146
0x4e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e4: Pop(2)
0x4e5: GOTO 0x4dc

0x4e6: Return(); Pop(0)

0x4e7: PushEmpty()
0x4e8: PushEmpty(bool)
0x4e9: Call2 0xbbc

0x4ea: Pop(0)
0x4eb: Pop(1); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ed: Return(); Pop(0)

0x4ee: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(string, bool)
0x4f2: Stack[-3] = Stack[-2]
0x4f3: Push("") // @poff=102
0x4f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f6: Stack[-1] = (bool) 0
0x4f7: GOTO 0x4f9

0x4f8: Stack[-1] = (bool) 1
0x4f9: Call2 0xb2c

0x4fa: Pop(2)
0x4fb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty()
0x4fe: Push((int) 1)
0x4ff: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x500: PushEmpty()
0x501: Call2 0xb41

0x502: Pop(0)
0x503: Push((int) 27323)
0x504: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x506: PushEmpty(object, object)
0x507: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x508: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x509: Call2 0xbe0

0x50a: Pop(2)
0x50b: Push((int) 27327)
0x50c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50e: PushEmpty(object, object)
0x50f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x510: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x511: Call2 0xbf3

0x512: Pop(2)
0x513: Push((int) 27353)
0x514: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x516: PushEmpty(object, object)
0x517: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x518: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x519: Call2 0xbe6

0x51a: Pop(2)
0x51b: Push((int) 27362)
0x51c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x51e: PushEmpty(object, object)
0x51f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x520: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x521: Call2 0xbec

0x522: Pop(2)
0x523: PushEmpty(object, object)
0x524: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x525: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x526: Call2 0xc13

0x527: Pop(2)
0x528: Push((int) 27322)
0x529: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52a: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x52b: PushEmpty(string)
0x52c: Stack[-1] = "Neutral" // @poff=89
0x52d: Call2 0x4e7

0x52e: Pop(1)
0x52f: Push((int) 526037)
0x530: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x531: Pop(1)
0x532: @@@ ClearReplies(); Obj=0 // @poff=116
0x533: Pop(0)
0x534: PushEmpty(bool)
0x535: Stack[-1] = (bool) 0
0x536: PushEmpty(bool, object)
0x537: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x538: Call2 0xc3d

0x539: Pop(1)
0x53a: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53b: PushEmpty(bool, object)
0x53c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x53d: Call2 0xc49

0x53e: Pop(1)
0x53f: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x540: Stack[-1] = (bool) 1
0x541: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x542: Push((int) 526038)
0x543: Push((int) 30287)
0x544: Push((int) 27323)
0x545: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x546: Pop(3)
0x547: PushEmpty(bool)
0x548: Stack[-1] = (bool) 0
0x549: PushEmpty(bool, object)
0x54a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54b: Call2 0xc55

0x54c: Pop(1)
0x54d: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x54e: PushEmpty(bool, object)
0x54f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x550: Call2 0xc61

0x551: Pop(1)
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: Stack[-1] = (bool) 1
0x554: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x555: Push((int) 526068)
0x556: Push((int) 27354)
0x557: Push((int) 27353)
0x558: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x559: Pop(3)
0x55a: Push((int) 526043)
0x55b: Push((int) -1)
0x55c: Push((int) 27328)
0x55d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x55e: Pop(3)
0x55f: Push((int) 528864)
0x560: Push((int) -1)
0x561: Push((int) 30286)
0x562: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x563: Pop(3)
0x564: Return(); Pop(0)

0x565: Push((int) 27354)
0x566: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x568: PushEmpty(string)
0x569: Stack[-1] = "Neutral" // @poff=89
0x56a: Call2 0x4e7

0x56b: Pop(1)
0x56c: Push((int) 526069)
0x56d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56e: Pop(1)
0x56f: @@@ ClearReplies(); Obj=0 // @poff=116
0x570: Pop(0)
0x571: Push((int) 526070)
0x572: Push((int) 27356)
0x573: Push((int) 27355)
0x574: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x575: Pop(3)
0x576: Return(); Pop(0)

0x577: Push((int) 27356)
0x578: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x57a: PushEmpty(string)
0x57b: Stack[-1] = "Neutral" // @poff=89
0x57c: Call2 0x4e7

0x57d: Pop(1)
0x57e: Push((int) 526071)
0x57f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x580: Pop(1)
0x581: @@@ ClearReplies(); Obj=0 // @poff=116
0x582: Pop(0)
0x583: Push((int) 526072)
0x584: Push((int) 27359)
0x585: Push((int) 27357)
0x586: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x587: Pop(3)
0x588: Push((int) 526073)
0x589: Push((int) 27359)
0x58a: Push((int) 27358)
0x58b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x58c: Pop(3)
0x58d: Return(); Pop(0)

0x58e: Push((int) 27359)
0x58f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x591: PushEmpty(string)
0x592: Stack[-1] = "Neutral" // @poff=89
0x593: Call2 0x4e7

0x594: Pop(1)
0x595: Push((int) 526074)
0x596: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x597: Pop(1)
0x598: @@@ ClearReplies(); Obj=0 // @poff=116
0x599: Pop(0)
0x59a: Push((int) 526075)
0x59b: Push((int) 27361)
0x59c: Push((int) 27360)
0x59d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x59e: Pop(3)
0x59f: Return(); Pop(0)

0x5a0: Push((int) 27361)
0x5a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5a3: PushEmpty(string)
0x5a4: Stack[-1] = "Neutral" // @poff=89
0x5a5: Call2 0x4e7

0x5a6: Pop(1)
0x5a7: Push((int) 526076)
0x5a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5a9: Pop(1)
0x5aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ab: Pop(0)
0x5ac: Push((int) 526077)
0x5ad: Push((int) -1)
0x5ae: Push((int) 27362)
0x5af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b0: Pop(3)
0x5b1: Return(); Pop(0)

0x5b2: Push((int) 30287)
0x5b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = "Neutral" // @poff=89
0x5b7: Call2 0x4e7

0x5b8: Pop(1)
0x5b9: Push((int) 528865)
0x5ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5bb: Pop(1)
0x5bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x5bd: Pop(0)
0x5be: Push((int) 528866)
0x5bf: Push((int) 27324)
0x5c0: Push((int) 30288)
0x5c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c2: Pop(3)
0x5c3: Push((int) 528867)
0x5c4: Push((int) 27324)
0x5c5: Push((int) 30289)
0x5c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c7: Pop(3)
0x5c8: Return(); Pop(0)

0x5c9: Push((int) 27324)
0x5ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = "Neutral" // @poff=89
0x5ce: Call2 0x4e7

0x5cf: Pop(1)
0x5d0: Push((int) 526039)
0x5d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d2: Pop(1)
0x5d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d4: Pop(0)
0x5d5: Push((int) 526040)
0x5d6: Push((int) 27326)
0x5d7: Push((int) 27325)
0x5d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d9: Pop(3)
0x5da: Return(); Pop(0)

0x5db: Push((int) 27326)
0x5dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5de: PushEmpty(string)
0x5df: Stack[-1] = "Neutral" // @poff=89
0x5e0: Call2 0x4e7

0x5e1: Pop(1)
0x5e2: Push((int) 526041)
0x5e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5e4: Pop(1)
0x5e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x5e6: Pop(0)
0x5e7: Push((int) 528868)
0x5e8: Push((int) 30292)
0x5e9: Push((int) 30291)
0x5ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Push((int) 30292)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Neutral" // @poff=89
0x5f2: Call2 0x4e7

0x5f3: Pop(1)
0x5f4: Push((int) 528869)
0x5f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5f6: Pop(1)
0x5f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f8: Pop(0)
0x5f9: Push((int) 526042)
0x5fa: Push((int) -1)
0x5fb: Push((int) 27327)
0x5fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5fd: Pop(3)
0x5fe: Return(); Pop(0)

0x5ff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x600: PushEmpty(bool)
0x601: Call2 0xbbc

0x602: Pop(0)
0x603: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x604: @ lshStopAnimation()
0x605: Pop(0)
0x606: GOTO 0x609

0x607: @ StopAnimation()
0x608: Pop(0)
0x609: Return(); Pop(0)

0x60a: GOTO 0x4fe

0x60b: Return(); Pop(0)

0x60c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x60d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x60e: PushEmpty(bool, object)
0x60f: PushEmpty(object)
0x610: Call2 0xb48

0x611: Stack[-1] = Stack[-2]
0x612: Pop(1)
0x613: Call2 0xa9b

0x614: Pop(2)
0x615: PushEmpty(bool, object, float)
0x616: Stack[-12] = Stack[-2]
0x617: Stack[-1] = (float) 70.0
0x618: Call2 0xa46

0x619: Pop(2)
0x61a: Pop(1); Push((bool) Stack[-1] == 0)
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-10] = (int) -2
0x61d: Return(); Pop(8)

0x61e: @ CreateDialog(Stack[-4])
0x61f: Pop(0)
0x620: PushEmpty(int)
0x621: Call2 0xbb6

0x622: Pop(0)
0x623: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x624: Pop(1)
0x625: PushEmpty(int)
0x626: Call2 0xbb4

0x627: Pop(0)
0x628: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x629: Pop(1)
0x62a: PushEmpty(string)
0x62b: Call2 0xbb8

0x62c: Pop(0)
0x62d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x62e: Pop(1)
0x62f: PushEmpty(string)
0x630: Call2 0xbba

0x631: Pop(0)
0x632: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x633: Pop(1)
0x634: PushEmpty(int)
0x635: Call2 0xcf3

0x636: Pop(0)
0x637: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x638: Pop(1)
0x639: Stack[-2] = (int) -1
0x63a: @ IsOverrideActive(Stack[-3])
0x63b: Pop(0)
0x63c: Push(Stack[-3])
0x63d: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63e: Stack[-10] = (int) -2
0x63f: Return(); Pop(8)

0x640: @ DoDialog(Stack[-4])
0x641: Pop(0)
0x642: PushEmpty(object, object)
0x643: Stack[-11] = Stack[-2]
0x644: Stack[-6] = Stack[-1]
0x645: Push(-2, 4); TaskCall(8)
0x646: Call2 0x65d

0x647: Pop(-2, 4); TaskReturn
0x648: Pop(2)
0x649: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x64a: Pop(0)
0x64b: Pop(0); Push((bool) Stack[-1] == 0)
0x64c: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64d: @ sync()
0x64e: Pop(0)
0x64f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x650: Pop(0)
0x651: GOTO 0x64b

0x652: PushEmpty(object)
0x653: Stack[-10] = Stack[-1]
0x654: Call2 0xa8a

0x655: Pop(1)
0x656: @ StopDialog(Stack[-4])
0x657: Pop(0)
0x658: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x659: Pop(0)
0x65a: Stack[-2] = Stack[-10]
0x65b: Return(); Pop(8)

0x65c: Stack[-4] = 0
0x65d: PushEmpty()
0x65e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x65f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x660: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x661: Push((int) 1)
0x662: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x663: PushEmpty(string)
0x664: Stack[-1] = "Neutral" // @poff=89
0x665: Call2 0x6a5

0x666: Pop(1)
0x667: Push((int) 527184)
0x668: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x669: Pop(1)
0x66a: @@@ ClearReplies(); Obj=0 // @poff=116
0x66b: Pop(0)
0x66c: PushEmpty(bool)
0x66d: Stack[-1] = (bool) 0
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x670: Call2 0xc6d

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x673: PushEmpty(bool, object)
0x674: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x675: Call2 0xc79

0x676: Pop(1)
0x677: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x678: Stack[-1] = (bool) 1
0x679: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67a: Push((int) 527185)
0x67b: Push((int) 28494)
0x67c: Push((int) 28493)
0x67d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67e: Pop(3)
0x67f: Push((int) 527188)
0x680: Push((int) -1)
0x681: Push((int) 28496)
0x682: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x683: Pop(3)
0x684: GOTO 0x687

0x685: Return(); Pop(0)

0x686: GOTO 0x661

0x687: PushEmpty(bool)
0x688: Call2 0xbbc

0x689: Pop(0)
0x68a: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x68b: @ lshWaitForAnimEnd()
0x68c: Pop(0)
0x68d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68e: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68f: GOTO 0x695

0x690: PushEmpty(string)
0x691: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x692: Call2 0xb25

0x693: Pop(1)
0x694: GOTO 0x68b

0x695: GOTO 0x6a4

0x696: Push("all") // @poff=138
0x697: Push("idle") // @poff=146
0x698: @ PlayAnimation(Stack[-2], Stack[-1])
0x699: Pop(2)
0x69a: @ WaitForAnimEnd()
0x69b: Pop(0)
0x69c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: GOTO 0x6a4

0x69f: Push("all") // @poff=138
0x6a0: Push("idle") // @poff=146
0x6a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a2: Pop(2)
0x6a3: GOTO 0x69a

0x6a4: Return(); Pop(0)

0x6a5: PushEmpty()
0x6a6: PushEmpty(bool)
0x6a7: Call2 0xbbc

0x6a8: Pop(0)
0x6a9: Pop(1); Push((bool) Stack[-1] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Return(); Pop(0)

0x6ac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ae: Return(); Pop(0)

0x6af: PushEmpty(string, bool)
0x6b0: Stack[-3] = Stack[-2]
0x6b1: Push("") // @poff=102
0x6b2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b4: Stack[-1] = (bool) 0
0x6b5: GOTO 0x6b7

0x6b6: Stack[-1] = (bool) 1
0x6b7: Call2 0xb2c

0x6b8: Pop(2)
0x6b9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6ba: Return(); Pop(0)

0x6bb: PushEmpty()
0x6bc: Push((int) 1)
0x6bd: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x6be: PushEmpty()
0x6bf: Call2 0xb41

0x6c0: Pop(0)
0x6c1: Push((int) 28493)
0x6c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c4: PushEmpty(object, object)
0x6c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c7: Call2 0xbf8

0x6c8: Pop(2)
0x6c9: Push((int) 28602)
0x6ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cc: PushEmpty(object, object)
0x6cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6cf: Call2 0xbfe

0x6d0: Pop(2)
0x6d1: Push((int) 28603)
0x6d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d4: PushEmpty(object, object)
0x6d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d7: Call2 0xbfe

0x6d8: Pop(2)
0x6d9: Push((int) 28492)
0x6da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6dc: PushEmpty(string)
0x6dd: Stack[-1] = "Neutral" // @poff=89
0x6de: Call2 0x6a5

0x6df: Pop(1)
0x6e0: Push((int) 527184)
0x6e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6e2: Pop(1)
0x6e3: @@@ ClearReplies(); Obj=0 // @poff=116
0x6e4: Pop(0)
0x6e5: PushEmpty(bool)
0x6e6: Stack[-1] = (bool) 0
0x6e7: PushEmpty(bool, object)
0x6e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e9: Call2 0xc6d

0x6ea: Pop(1)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ec: PushEmpty(bool, object)
0x6ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ee: Call2 0xc79

0x6ef: Pop(1)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f1: Stack[-1] = (bool) 1
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f3: Push((int) 527185)
0x6f4: Push((int) 28494)
0x6f5: Push((int) 28493)
0x6f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f7: Pop(3)
0x6f8: Push((int) 527188)
0x6f9: Push((int) -1)
0x6fa: Push((int) 28496)
0x6fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: Push((int) 28494)
0x6ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x701: PushEmpty(string)
0x702: Stack[-1] = "Neutral" // @poff=89
0x703: Call2 0x6a5

0x704: Pop(1)
0x705: Push((int) 527186)
0x706: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x707: Pop(1)
0x708: @@@ ClearReplies(); Obj=0 // @poff=116
0x709: Pop(0)
0x70a: Push((int) 527187)
0x70b: Push((int) 28597)
0x70c: Push((int) 28495)
0x70d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70e: Pop(3)
0x70f: Return(); Pop(0)

0x710: Push((int) 28597)
0x711: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x713: PushEmpty(string)
0x714: Stack[-1] = "Neutral" // @poff=89
0x715: Call2 0x6a5

0x716: Pop(1)
0x717: Push((int) 527284)
0x718: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x719: Pop(1)
0x71a: @@@ ClearReplies(); Obj=0 // @poff=116
0x71b: Pop(0)
0x71c: Push((int) 527285)
0x71d: Push((int) 28600)
0x71e: Push((int) 28598)
0x71f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x720: Pop(3)
0x721: Push((int) 527286)
0x722: Push((int) 28600)
0x723: Push((int) 28599)
0x724: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x725: Pop(3)
0x726: Return(); Pop(0)

0x727: Push((int) 28600)
0x728: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x72a: PushEmpty(string)
0x72b: Stack[-1] = "Neutral" // @poff=89
0x72c: Call2 0x6a5

0x72d: Pop(1)
0x72e: Push((int) 527287)
0x72f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x730: Pop(1)
0x731: @@@ ClearReplies(); Obj=0 // @poff=116
0x732: Pop(0)
0x733: Push((int) 527288)
0x734: Push((int) -1)
0x735: Push((int) 28602)
0x736: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x737: Pop(3)
0x738: Push((int) 527289)
0x739: Push((int) -1)
0x73a: Push((int) 28603)
0x73b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73c: Pop(3)
0x73d: Return(); Pop(0)

0x73e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x73f: PushEmpty(bool)
0x740: Call2 0xbbc

0x741: Pop(0)
0x742: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x743: @ lshStopAnimation()
0x744: Pop(0)
0x745: GOTO 0x748

0x746: @ StopAnimation()
0x747: Pop(0)
0x748: Return(); Pop(0)

0x749: GOTO 0x6bc

0x74a: Return(); Pop(0)

0x74b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x74c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x74d: PushEmpty(bool, object)
0x74e: PushEmpty(object)
0x74f: Call2 0xb48

0x750: Stack[-1] = Stack[-2]
0x751: Pop(1)
0x752: Call2 0xa9b

0x753: Pop(2)
0x754: PushEmpty(bool, object, float)
0x755: Stack[-12] = Stack[-2]
0x756: Stack[-1] = (float) 70.0
0x757: Call2 0xa46

0x758: Pop(2)
0x759: Pop(1); Push((bool) Stack[-1] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: Stack[-10] = (int) -2
0x75c: Return(); Pop(8)

0x75d: @ CreateDialog(Stack[-4])
0x75e: Pop(0)
0x75f: PushEmpty(int)
0x760: Call2 0xbb6

0x761: Pop(0)
0x762: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x763: Pop(1)
0x764: PushEmpty(int)
0x765: Call2 0xbb4

0x766: Pop(0)
0x767: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x768: Pop(1)
0x769: PushEmpty(string)
0x76a: Call2 0xbb8

0x76b: Pop(0)
0x76c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x76d: Pop(1)
0x76e: PushEmpty(string)
0x76f: Call2 0xbba

0x770: Pop(0)
0x771: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x772: Pop(1)
0x773: PushEmpty(int)
0x774: Call2 0xcf3

0x775: Pop(0)
0x776: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x777: Pop(1)
0x778: Stack[-2] = (int) -1
0x779: @ IsOverrideActive(Stack[-3])
0x77a: Pop(0)
0x77b: Push(Stack[-3])
0x77c: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77d: Stack[-10] = (int) -2
0x77e: Return(); Pop(8)

0x77f: @ DoDialog(Stack[-4])
0x780: Pop(0)
0x781: PushEmpty(object, object)
0x782: Stack[-11] = Stack[-2]
0x783: Stack[-6] = Stack[-1]
0x784: Push(-2, 4); TaskCall(10)
0x785: Call2 0x79c

0x786: Pop(-2, 4); TaskReturn
0x787: Pop(2)
0x788: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x789: Pop(0)
0x78a: Pop(0); Push((bool) Stack[-1] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78c: @ sync()
0x78d: Pop(0)
0x78e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x78f: Pop(0)
0x790: GOTO 0x78a

0x791: PushEmpty(object)
0x792: Stack[-10] = Stack[-1]
0x793: Call2 0xa8a

0x794: Pop(1)
0x795: @ StopDialog(Stack[-4])
0x796: Pop(0)
0x797: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x798: Pop(0)
0x799: Stack[-2] = Stack[-10]
0x79a: Return(); Pop(8)

0x79b: Stack[-4] = 0
0x79c: PushEmpty()
0x79d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x79e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x79f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7a0: Push((int) 1)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7a2: PushEmpty(string)
0x7a3: Stack[-1] = "Neutral" // @poff=89
0x7a4: Call2 0x7db

0x7a5: Pop(1)
0x7a6: Push((int) 535231)
0x7a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7a8: Pop(1)
0x7a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x7aa: Pop(0)
0x7ab: Push((int) 535232)
0x7ac: Push((int) 36953)
0x7ad: Push((int) 36907)
0x7ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7af: Pop(3)
0x7b0: Push((int) 535233)
0x7b1: Push((int) -1)
0x7b2: Push((int) 36908)
0x7b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b4: Pop(3)
0x7b5: Push((int) 535280)
0x7b6: Push((int) -1)
0x7b7: Push((int) 36956)
0x7b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b9: Pop(3)
0x7ba: GOTO 0x7bd

0x7bb: Return(); Pop(0)

0x7bc: GOTO 0x7a0

0x7bd: PushEmpty(bool)
0x7be: Call2 0xbbc

0x7bf: Pop(0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c1: @ lshWaitForAnimEnd()
0x7c2: Pop(0)
0x7c3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: GOTO 0x7cb

0x7c6: PushEmpty(string)
0x7c7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7c8: Call2 0xb25

0x7c9: Pop(1)
0x7ca: GOTO 0x7c1

0x7cb: GOTO 0x7da

0x7cc: Push("all") // @poff=138
0x7cd: Push("idle") // @poff=146
0x7ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x7cf: Pop(2)
0x7d0: @ WaitForAnimEnd()
0x7d1: Pop(0)
0x7d2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: GOTO 0x7da

0x7d5: Push("all") // @poff=138
0x7d6: Push("idle") // @poff=146
0x7d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d8: Pop(2)
0x7d9: GOTO 0x7d0

0x7da: Return(); Pop(0)

0x7db: PushEmpty()
0x7dc: PushEmpty(bool)
0x7dd: Call2 0xbbc

0x7de: Pop(0)
0x7df: Pop(1); Push((bool) Stack[-1] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Return(); Pop(0)

0x7e2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e4: Return(); Pop(0)

0x7e5: PushEmpty(string, bool)
0x7e6: Stack[-3] = Stack[-2]
0x7e7: Push("") // @poff=102
0x7e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-1] = (bool) 0
0x7eb: GOTO 0x7ed

0x7ec: Stack[-1] = (bool) 1
0x7ed: Call2 0xb2c

0x7ee: Pop(2)
0x7ef: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7f0: Return(); Pop(0)

0x7f1: PushEmpty()
0x7f2: Push((int) 1)
0x7f3: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x7f4: PushEmpty()
0x7f5: Call2 0xb41

0x7f6: Pop(0)
0x7f7: Push((int) 36906)
0x7f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Neutral" // @poff=89
0x7fc: Call2 0x7db

0x7fd: Pop(1)
0x7fe: Push((int) 535231)
0x7ff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x800: Pop(1)
0x801: @@@ ClearReplies(); Obj=0 // @poff=116
0x802: Pop(0)
0x803: Push((int) 535232)
0x804: Push((int) 36953)
0x805: Push((int) 36907)
0x806: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x807: Pop(3)
0x808: Push((int) 535233)
0x809: Push((int) -1)
0x80a: Push((int) 36908)
0x80b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80c: Pop(3)
0x80d: Push((int) 535280)
0x80e: Push((int) -1)
0x80f: Push((int) 36956)
0x810: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x811: Pop(3)
0x812: Return(); Pop(0)

0x813: Push((int) 36953)
0x814: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x816: PushEmpty(string)
0x817: Stack[-1] = "Neutral" // @poff=89
0x818: Call2 0x7db

0x819: Pop(1)
0x81a: Push((int) 535277)
0x81b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x81c: Pop(1)
0x81d: @@@ ClearReplies(); Obj=0 // @poff=116
0x81e: Pop(0)
0x81f: Push((int) 535278)
0x820: Push((int) 36957)
0x821: Push((int) 36954)
0x822: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x823: Pop(3)
0x824: Push((int) 535279)
0x825: Push((int) 36957)
0x826: Push((int) 36955)
0x827: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x828: Pop(3)
0x829: Return(); Pop(0)

0x82a: Push((int) 36957)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Neutral" // @poff=89
0x82f: Call2 0x7db

0x830: Pop(1)
0x831: Push((int) 535281)
0x832: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x833: Pop(1)
0x834: @@@ ClearReplies(); Obj=0 // @poff=116
0x835: Pop(0)
0x836: Push((int) 535282)
0x837: Push((int) -1)
0x838: Push((int) 36958)
0x839: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83a: Pop(3)
0x83b: Push((int) 535283)
0x83c: Push((int) -1)
0x83d: Push((int) 36959)
0x83e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83f: Pop(3)
0x840: Return(); Pop(0)

0x841: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x842: PushEmpty(bool)
0x843: Call2 0xbbc

0x844: Pop(0)
0x845: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x846: @ lshStopAnimation()
0x847: Pop(0)
0x848: GOTO 0x84b

0x849: @ StopAnimation()
0x84a: Pop(0)
0x84b: Return(); Pop(0)

0x84c: GOTO 0x7f2

0x84d: Return(); Pop(0)

0x84e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x84f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x850: PushEmpty(bool, object)
0x851: PushEmpty(object)
0x852: Call2 0xb48

0x853: Stack[-1] = Stack[-2]
0x854: Pop(1)
0x855: Call2 0xa9b

0x856: Pop(2)
0x857: PushEmpty(bool, object, float)
0x858: Stack[-12] = Stack[-2]
0x859: Stack[-1] = (float) 70.0
0x85a: Call2 0xa46

0x85b: Pop(2)
0x85c: Pop(1); Push((bool) Stack[-1] == 0)
0x85d: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85e: Stack[-10] = (int) -2
0x85f: Return(); Pop(8)

0x860: @ CreateDialog(Stack[-4])
0x861: Pop(0)
0x862: PushEmpty(int)
0x863: Call2 0xbb6

0x864: Pop(0)
0x865: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x866: Pop(1)
0x867: PushEmpty(int)
0x868: Call2 0xbb4

0x869: Pop(0)
0x86a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x86b: Pop(1)
0x86c: PushEmpty(string)
0x86d: Call2 0xbb8

0x86e: Pop(0)
0x86f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x870: Pop(1)
0x871: PushEmpty(string)
0x872: Call2 0xbba

0x873: Pop(0)
0x874: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x875: Pop(1)
0x876: PushEmpty(int)
0x877: Call2 0xcf3

0x878: Pop(0)
0x879: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x87a: Pop(1)
0x87b: Stack[-2] = (int) -1
0x87c: @ IsOverrideActive(Stack[-3])
0x87d: Pop(0)
0x87e: Push(Stack[-3])
0x87f: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x880: Stack[-10] = (int) -2
0x881: Return(); Pop(8)

0x882: @ DoDialog(Stack[-4])
0x883: Pop(0)
0x884: PushEmpty(object, object)
0x885: Stack[-11] = Stack[-2]
0x886: Stack[-6] = Stack[-1]
0x887: Push(-2, 4); TaskCall(12)
0x888: Call2 0x89f

0x889: Pop(-2, 4); TaskReturn
0x88a: Pop(2)
0x88b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x88c: Pop(0)
0x88d: Pop(0); Push((bool) Stack[-1] == 0)
0x88e: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x88f: @ sync()
0x890: Pop(0)
0x891: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x892: Pop(0)
0x893: GOTO 0x88d

0x894: PushEmpty(object)
0x895: Stack[-10] = Stack[-1]
0x896: Call2 0xa8a

0x897: Pop(1)
0x898: @ StopDialog(Stack[-4])
0x899: Pop(0)
0x89a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x89b: Pop(0)
0x89c: Stack[-2] = Stack[-10]
0x89d: Return(); Pop(8)

0x89e: Stack[-4] = 0
0x89f: PushEmpty()
0x8a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a3: Push((int) 1)
0x8a4: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8a5: PushEmpty(string)
0x8a6: Stack[-1] = "Neutral" // @poff=89
0x8a7: Call2 0x8d9

0x8a8: Pop(1)
0x8a9: Push((int) 540539)
0x8aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8ab: Pop(1)
0x8ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x8ad: Pop(0)
0x8ae: Push((int) 540540)
0x8af: Push((int) -1)
0x8b0: Push((int) 42549)
0x8b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8b2: Pop(3)
0x8b3: Push((int) 540799)
0x8b4: Push((int) -1)
0x8b5: Push((int) 42848)
0x8b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8b7: Pop(3)
0x8b8: GOTO 0x8bb

0x8b9: Return(); Pop(0)

0x8ba: GOTO 0x8a3

0x8bb: PushEmpty(bool)
0x8bc: Call2 0xbbc

0x8bd: Pop(0)
0x8be: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8bf: @ lshWaitForAnimEnd()
0x8c0: Pop(0)
0x8c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: GOTO 0x8c9

0x8c4: PushEmpty(string)
0x8c5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c6: Call2 0xb25

0x8c7: Pop(1)
0x8c8: GOTO 0x8bf

0x8c9: GOTO 0x8d8

0x8ca: Push("all") // @poff=138
0x8cb: Push("idle") // @poff=146
0x8cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x8cd: Pop(2)
0x8ce: @ WaitForAnimEnd()
0x8cf: Pop(0)
0x8d0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d2: GOTO 0x8d8

0x8d3: Push("all") // @poff=138
0x8d4: Push("idle") // @poff=146
0x8d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d6: Pop(2)
0x8d7: GOTO 0x8ce

0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: PushEmpty(bool)
0x8db: Call2 0xbbc

0x8dc: Pop(0)
0x8dd: Pop(1); Push((bool) Stack[-1] == 0)
0x8de: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8df: Return(); Pop(0)

0x8e0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Return(); Pop(0)

0x8e3: PushEmpty(string, bool)
0x8e4: Stack[-3] = Stack[-2]
0x8e5: Push("") // @poff=102
0x8e6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e8: Stack[-1] = (bool) 0
0x8e9: GOTO 0x8eb

0x8ea: Stack[-1] = (bool) 1
0x8eb: Call2 0xb2c

0x8ec: Pop(2)
0x8ed: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: Push((int) 1)
0x8f1: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x8f2: PushEmpty()
0x8f3: Call2 0xb41

0x8f4: Pop(0)
0x8f5: Push((int) 42548)
0x8f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f7: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x8f8: PushEmpty(string)
0x8f9: Stack[-1] = "Neutral" // @poff=89
0x8fa: Call2 0x8d9

0x8fb: Pop(1)
0x8fc: Push((int) 540539)
0x8fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8fe: Pop(1)
0x8ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x900: Pop(0)
0x901: Push((int) 540540)
0x902: Push((int) -1)
0x903: Push((int) 42549)
0x904: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x905: Pop(3)
0x906: Push((int) 540799)
0x907: Push((int) -1)
0x908: Push((int) 42848)
0x909: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x90a: Pop(3)
0x90b: Return(); Pop(0)

0x90c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x90d: PushEmpty(bool)
0x90e: Call2 0xbbc

0x90f: Pop(0)
0x910: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x911: @ lshStopAnimation()
0x912: Pop(0)
0x913: GOTO 0x916

0x914: @ StopAnimation()
0x915: Pop(0)
0x916: Return(); Pop(0)

0x917: GOTO 0x8f0

0x918: Return(); Pop(0)

0x919: PushEmpty()
0x91a: Call2 0x91d

0x91b: Pop(0)
0x91c: Return(); Pop(0)

0x91d: PushEmpty(bool)
0x91e: Call2 0xa41

0x91f: Pop(0)
0x920: Pop(1); Push((bool) Stack[-1] == 0)
0x921: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x922: PushEmpty()
0x923: Push(-0, 0); TaskCall(0)
0x924: Call2 0x0

0x925: Pop(-0, 0); TaskReturn
0x926: Pop(0)
0x927: PushEmpty()
0x928: Call2 0x99d

0x929: Pop(0)
0x92a: @ GetDirection(Stack[-0]T)
0x92b: Pop(0)
0x92c: PushEmpty()
0x92d: Call2 0x9d3

0x92e: Pop(0)
0x92f: GOTO 0x92c

0x930: Return(); Pop(0)

0x931: PushEmpty(object, object)
0x932: Push("player") // @poff=156
0x933: @ FindActor(Stack[-2], Stack[-1])
0x934: Pop(1)
0x935: Pop(0); Push((bool) Stack[-1] == 0)
0x936: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x937: Stack[-3] = (bool) 0
0x938: Return(); Pop(2)

0x939: PushEmpty(bool, object)
0x93a: Stack[-3] = Stack[-1]
0x93b: Call2 0xa38

0x93c: Stack[-2] = Stack[-5]
0x93d: Pop(2)
0x93e: Return(); Pop(2)

0x93f: Stack[-1] = 0
0x940: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x941: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x942: @ RotateAsync(Stack[-2], Stack[-1])
0x943: Pop(2)
0x944: Return(); Pop(0)

0x945: PushEmpty(object, bool, object, bool)
0x946: Push("player") // @poff=156
0x947: @ FindActor(Stack[-3], Stack[-1])
0x948: Pop(1)
0x949: Pop(0); Push((bool) Stack[-2] == 0)
0x94a: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94b: Stack[-5] = (bool) 0
0x94c: Return(); Pop(4)

0x94d: PushEmpty(float, object)
0x94e: Stack[-4] = Stack[-1]
0x94f: Call2 0xa1f

0x950: Pop(1)
0x951: Push((float)90000.0)
0x952: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x954: Stack[-5] = (bool) 0
0x955: Return(); Pop(4)

0x956: @ CanSee(Stack[-1], Stack[-2])
0x957: Pop(0)
0x958: Stack[-1] = Stack[-5]
0x959: Return(); Pop(4)

0x95a: Stack[-2] = 0
0x95b: PushEmpty(float, float)
0x95c: Push((int) 8)
0x95d: Push((int) 16)
0x95e: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x95f: Pop(2)
0x960: Push((int) 10)
0x961: @ SetTimer(Stack[-1], Stack[-2])
0x962: Pop(1)
0x963: Return(); Pop(2)

0x964: Push((int) 10)
0x965: @ KillTimer(Stack[-1])
0x966: Pop(1)
0x967: Return(); Pop(0)

0x968: PushEmpty()
0x969: Push((int) 10)
0x96a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x96c: PushEmpty()
0x96d: Call2 0x964

0x96e: Pop(0)
0x96f: PushEmpty(bool)
0x970: Stack[-1] = (bool) 0
0x971: PushEmpty(bool)
0x972: Call2 0xa41

0x973: Pop(0)
0x974: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x975: PushEmpty(bool)
0x976: Call2 0x945

0x977: Pop(0)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: Stack[-1] = (bool) 1
0x97a: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x97b: PushEmpty(bool)
0x97c: Call2 0x931

0x97d: Pop(0)
0x97e: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x97f: PushEmpty(bool, object)
0x980: PushEmpty(object)
0x981: Call2 0xb48

0x982: Stack[-1] = Stack[-2]
0x983: Pop(1)
0x984: Call2 0xad5

0x985: Pop(2)
0x986: GOTO 0x98d

0x987: PushEmpty()
0x988: Call2 0x940

0x989: Pop(0)
0x98a: PushEmpty()
0x98b: Call2 0x95b

0x98c: Pop(0)
0x98d: Return(); Pop(0)

0x98e: PushEmpty()
0x98f: Call2 0xa1a

0x990: Pop(0)
0x991: PushEmpty()
0x992: Call2 0x964

0x993: Pop(0)
0x994: @ lshStopSpeech()
0x995: Pop(0)
0x996: @ lshStopAnimation()
0x997: Pop(0)
0x998: @ StopAsync()
0x999: Pop(0)
0x99a: @ Hold()
0x99b: Pop(0)
0x99c: Return(); Pop(0)

0x99d: @ StopGroup0()
0x99e: Pop(0)
0x99f: PushEmpty()
0x9a0: Call2 0x964

0x9a1: Pop(0)
0x9a2: PushEmpty(string)
0x9a3: Stack[-1] = "Neutral" // @poff=89
0x9a4: Call2 0xb25

0x9a5: Pop(1)
0x9a6: PushEmpty()
0x9a7: Call2 0x95b

0x9a8: Pop(0)
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty()
0x9ab: Push(Stack[-1])
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9ad: PushEmpty()
0x9ae: Call2 0x95b

0x9af: Pop(0)
0x9b0: GOTO 0x9b5

0x9b1: PushEmpty(string)
0x9b2: Stack[-1] = "Neutral" // @poff=89
0x9b3: Call2 0xb25

0x9b4: Pop(1)
0x9b5: Return(); Pop(0)

0x9b6: PushEmpty(bool, bool)
0x9b7: @ IsOverrideActive(Stack[-1])
0x9b8: Pop(0)
0x9b9: Pop(0); Push((bool) Stack[-1] == 0)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9bb: EventDisable(0)
0x9bc: PushEmpty()
0x9bd: Call2 0xa1a

0x9be: Pop(0)
0x9bf: PushEmpty(bool, object)
0x9c0: Stack[-5] = Stack[-1]
0x9c1: Call2 0xa38

0x9c2: Pop(2)
0x9c3: EventEnable(0)
0x9c4: PushEmpty(object)
0x9c5: Stack[-4] = Stack[-1]
0x9c6: Call2 0xd04

0x9c7: Pop(1)
0x9c8: PushEmpty(string)
0x9c9: Stack[-1] = "Neutral" // @poff=89
0x9ca: Call2 0xb25

0x9cb: Pop(1)
0x9cc: PushEmpty()
0x9cd: Call2 0x964

0x9ce: Pop(0)
0x9cf: PushEmpty()
0x9d0: Call2 0x95b

0x9d1: Pop(0)
0x9d2: Return(); Pop(2)

0x9d3: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x9d4: @ WaitForAnimEnd()
0x9d5: Pop(0)
0x9d6: PushEmpty(bool)
0x9d7: Call2 0xa41

0x9d8: Pop(0)
0x9d9: Pop(1); Push((bool) Stack[-1] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9db: Return(); Pop(12)

0x9dc: PushEmpty(int)
0x9dd: Call2 0xba3

0x9de: Stack[-1] = Stack[-7]
0x9df: Pop(1)
0x9e0: Stack[-5] = (int) 0
0x9e1: PushEmpty(bool)
0x9e2: Stack[-1] = (bool) 0
0x9e3: Push((int) 5)
0x9e4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e6: PushEmpty(bool)
0x9e7: Call2 0xa41

0x9e8: Pop(0)
0x9e9: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9ea: Stack[-1] = (bool) 1
0x9eb: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0x9ec: Pop(0); Push((bool) Stack[-6] == 0)
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9ee: Push((int) 3)
0x9ef: @ Sleep(Stack[-1], Stack[-5])
0x9f0: Pop(1)
0x9f1: Pop(0); Push((bool) Stack[-4] == 0)
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f3: GOTO 0xa15

0x9f4: GOTO 0xa0a

0x9f5: @ irand(Stack[-3], Stack[-6])
0x9f6: Pop(0)
0x9f7: Push((int) 5)
0x9f8: @ irand(Stack[-3], Stack[-1])
0x9f9: Pop(1)
0x9fa: Push((int) 0)
0x9fb: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9fc: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fd: Stack[-3] = (int) 0
0x9fe: Push("all") // @poff=138
0x9ff: PushEmpty(string, int)
0xa00: Stack[-6] = Stack[-1]
0xa01: Call2 0xb9c

0xa02: Pop(1)
0xa03: @ PlayAnimation(Stack[-2], Stack[-1])
0xa04: Pop(2)
0xa05: @ WaitForAnimEnd(Stack[-1])
0xa06: Pop(0)
0xa07: Pop(0); Push((bool) Stack[-1] == 0)
0xa08: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa09: GOTO 0xa15

0xa0a: PushEmpty(bool)
0xa0b: Call2 0xa18

0xa0c: Pop(0)
0xa0d: Pop(1); Push((bool) Stack[-1] == 0)
0xa0e: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0xa0f: GOTO 0xa15

0xa10: @ ResetAAS()
0xa11: Pop(0)
0xa12: Push((int) 1)
0xa13: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa14: GOTO 0x9e1

0xa15: @ ResetAAS()
0xa16: Pop(0)
0xa17: Return(); Pop(12)

0xa18: Stack[-1] = (bool) 1
0xa19: Return(); Pop(0)

0xa1a: @ StopAnimation()
0xa1b: Pop(0)
0xa1c: @ StopGroup0()
0xa1d: Pop(0)
0xa1e: Return(); Pop(0)

0xa1f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa20: @ GetPosition(Stack[-3])
0xa21: Pop(0)
0xa22: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0xa23: Pop(0)
0xa24: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa25: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa26: Return(); Pop(6)

0xa27: PushEmpty(int, int)
0xa28: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=182
0xa29: Pop(0)
0xa2a: Pop(0); Push(Stack[-1] + Stack[-3]);
0xa2b: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=194
0xa2c: Pop(1)
0xa2d: Return(); Pop(2)

0xa2e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa2f: @ GetPosition(Stack[-3])
0xa30: Pop(0)
0xa31: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xa32: Push(CvectorIndex(Stack[-2], 0))
0xa33: Push(CvectorIndex(Stack[-3], 2))
0xa34: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xa35: Pop(2)
0xa36: Stack[-1] = Stack[-8]
0xa37: Return(); Pop(6)

0xa38: PushEmpty(cvector, cvector)
0xa39: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0xa3a: Pop(0)
0xa3b: PushEmpty(bool, cvector)
0xa3c: Stack[-3] = Stack[-1]
0xa3d: Call2 0xa2e

0xa3e: Stack[-2] = Stack[-6]
0xa3f: Pop(2)
0xa40: Return(); Pop(2)

0xa41: PushEmpty(bool, bool)
0xa42: @ IsLoaded(Stack[-1])
0xa43: Pop(0)
0xa44: Stack[-1] = Stack[-3]
0xa45: Return(); Pop(2)

0xa46: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa47: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0xa48: Pop(0)
0xa49: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=206
0xa4a: Pop(0)
0xa4b: Push(CvectorIndex(Stack[-8], 1))
0xa4c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa4d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa4e: @ GetPosition(Stack[-7])
0xa4f: Pop(0)
0xa50: @ GetEyesHeight(Stack[-9])
0xa51: Pop(0)
0xa52: Push(CvectorIndex(Stack[-7], 1))
0xa53: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa54: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa55: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa56: Push(CvectorIndex(Stack[-6], 1))
0xa57: Stack[-1] = (int) 0
0xa58: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa59: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa5a: Pop(1); Push(Sqrt(Stack[-1]))
0xa5b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa5c: Stack[-5] = -Stack[-6]; Pop(0);
0xa5d: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa5e: PushEmpty(cvector, cvector)
0xa5f: Push([0.0, 1.0, 0.0])
0xa60: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa61: Call2 0xb4e

0xa62: Pop(1)
0xa63: Push((int) 25)
0xa64: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa65: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa66: Push([0.0, 10.0, 0.0])
0xa67: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa68: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa69: @ IsOverrideActive(Stack[-2])
0xa6a: Pop(0)
0xa6b: Push(Stack[-2])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa6d: Stack[-21] = (bool) 0
0xa6e: Return(); Pop(18)

0xa6f: @ StopWorld()
0xa70: Pop(0)
0xa71: @ CameraTransit(Stack[-3], Stack[-5])
0xa72: Pop(0)
0xa73: Push(CvectorIndex(Stack[-4], 0))
0xa74: Push(CvectorIndex(Stack[-5], 2))
0xa75: @ Rotate(Stack[-2], Stack[-1])
0xa76: Pop(2)
0xa77: PushEmpty(bool)
0xa78: Call2 0xbbc

0xa79: Pop(0)
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7b: GOTO 0xa84

0xa7c: Push("head") // @poff=220
0xa7d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa7e: Pop(1)
0xa7f: Push(Stack[-1])
0xa80: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa81: Push("head") // @poff=220
0xa82: @ LookAsyncCamera(Stack[-1])
0xa83: Pop(1)
0xa84: @ CameraWaitForPlayFinish()
0xa85: Pop(0)
0xa86: @ ResumeWorld()
0xa87: Pop(0)
0xa88: Stack[-21] = (bool) 1
0xa89: Return(); Pop(18)

0xa8a: PushEmpty(bool, bool)
0xa8b: @ CameraSwitchToNormal()
0xa8c: Pop(0)
0xa8d: PushEmpty(bool)
0xa8e: Call2 0xbbc

0xa8f: Pop(0)
0xa90: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa91: GOTO 0xa9a

0xa92: Push("head") // @poff=220
0xa93: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa94: Pop(1)
0xa95: Push(Stack[-1])
0xa96: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa97: Push("head") // @poff=220
0xa98: @ UnlookAsync(Stack[-1])
0xa99: Pop(1)
0xa9a: Return(); Pop(2)

0xa9b: PushEmpty(int, int, int, int)
0xa9c: Push("voice_common") // @poff=230
0xa9d: @ GetVariable(Stack[-1], Stack[-3])
0xa9e: Pop(1)
0xa9f: Push(Stack[-2])
0xaa0: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xaa1: PushEmpty(bool, object)
0xaa2: Stack[-7] = Stack[-1]
0xaa3: Call2 0xad5

0xaa4: Pop(1)
0xaa5: Pop(1); Push((bool) Stack[-1] == 0)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaa7: PushEmpty(bool, object)
0xaa8: Stack[-7] = Stack[-1]
0xaa9: Call2 0xafa

0xaaa: Pop(1)
0xaab: Pop(1); Push((bool) Stack[-1] == 0)
0xaac: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaad: Stack[-6] = (bool) 0
0xaae: Return(); Pop(4)

0xaaf: Push((int) 2)
0xab0: @ irand(Stack[-2], Stack[-1])
0xab1: Pop(1)
0xab2: Push(Stack[-1])
0xab3: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xab4: Push("voice_common") // @poff=230
0xab5: Push((int) 1)
0xab6: Pop(1); Push(Stack[-4] + Stack[-1]);
0xab7: Push((int) 3)
0xab8: Pop(2); Push(Stack[-2] % Stack[-1]);
0xab9: @ SetVariable(Stack[-2], Stack[-1])
0xaba: Pop(2)
0xabb: GOTO 0xac0

0xabc: Push("voice_common") // @poff=230
0xabd: Push((int) 0)
0xabe: @ SetVariable(Stack[-2], Stack[-1])
0xabf: Pop(2)
0xac0: GOTO 0xad3

0xac1: PushEmpty(bool, object)
0xac2: Stack[-7] = Stack[-1]
0xac3: Call2 0xafa

0xac4: Pop(1)
0xac5: Pop(1); Push((bool) Stack[-1] == 0)
0xac6: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xac7: PushEmpty(bool, object)
0xac8: Stack[-7] = Stack[-1]
0xac9: Call2 0xad5

0xaca: Pop(1)
0xacb: Pop(1); Push((bool) Stack[-1] == 0)
0xacc: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xacd: Stack[-6] = (bool) 0
0xace: Return(); Pop(4)

0xacf: Push("voice_common") // @poff=230
0xad0: Push((int) 1)
0xad1: @ SetVariable(Stack[-2], Stack[-1])
0xad2: Pop(2)
0xad3: Stack[-6] = (bool) 1
0xad4: Return(); Pop(4)

0xad5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xad6: Stack[-5] = "c" // @poff=256
0xad7: Stack[-4] = (int) 0
0xad8: Push((int) 1)
0xad9: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xada: Push((int) 1)
0xadb: Pop(1); Push(Stack[-5] + Stack[-1]);
0xadc: Pop(1); Push(Stack[-6] + Stack[-1]);
0xadd: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=260
0xade: Pop(1)
0xadf: Pop(0); Push((bool) Stack[-3] == 0)
0xae0: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xae1: GOTO 0xae5

0xae2: Push((int) 1)
0xae3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xae4: GOTO 0xad8

0xae5: Pop(0); Push((bool) Stack[-4] == 0)
0xae6: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xae7: Stack[-12] = (bool) 0
0xae8: Return(); Pop(10)

0xae9: Stack[-2] = (int) 0
0xaea: Push((int) 1)
0xaeb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xaec: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xaed: @ irand(Stack[-2], Stack[-4])
0xaee: Pop(0)
0xaef: Push((int) 1)
0xaf0: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaf1: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaf2: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=182
0xaf3: Pop(1)
0xaf4: PushEmpty(bool, string)
0xaf5: Stack[-3] = Stack[-1]
0xaf6: Call2 0xb32

0xaf7: Stack[-2] = Stack[-14]
0xaf8: Pop(2)
0xaf9: Return(); Pop(10)

0xafa: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xafb: Push("d") // @poff=226
0xafc: PushEmpty(int)
0xafd: Call2 0xb8d

0xafe: Pop(0)
0xaff: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb00: Push("m") // @poff=272
0xb01: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xb02: Stack[-4] = (int) 0
0xb03: Push((int) 1)
0xb04: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb05: Push((int) 1)
0xb06: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb07: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb08: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=260
0xb09: Pop(1)
0xb0a: Pop(0); Push((bool) Stack[-3] == 0)
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0c: GOTO 0xb10

0xb0d: Push((int) 1)
0xb0e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb0f: GOTO 0xb03

0xb10: Pop(0); Push((bool) Stack[-4] == 0)
0xb11: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb12: Stack[-12] = (bool) 0
0xb13: Return(); Pop(10)

0xb14: Stack[-2] = (int) 0
0xb15: Push((int) 1)
0xb16: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb18: @ irand(Stack[-2], Stack[-4])
0xb19: Pop(0)
0xb1a: Push((int) 1)
0xb1b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb1c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb1d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=182
0xb1e: Pop(1)
0xb1f: PushEmpty(bool, string)
0xb20: Stack[-3] = Stack[-1]
0xb21: Call2 0xb32

0xb22: Stack[-2] = Stack[-14]
0xb23: Pop(2)
0xb24: Return(); Pop(10)

0xb25: PushEmpty(float, float, float, float)
0xb26: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xb27: Pop(0)
0xb28: Push((bool) 0)
0xb29: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb2a: Pop(1)
0xb2b: Return(); Pop(4)

0xb2c: PushEmpty(float, float, float, float)
0xb2d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xb2e: Pop(0)
0xb2f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xb30: Pop(0)
0xb31: Return(); Pop(4)

0xb32: PushEmpty(bool, bool)
0xb33: PushEmpty(bool)
0xb34: Call2 0xbbc

0xb35: Pop(0)
0xb36: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb37: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb38: Pop(0)
0xb39: Push(Stack[-1])
0xb3a: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3b: @ lshPlaySpeech(Stack[-3])
0xb3c: Pop(0)
0xb3d: Stack[-4] = (bool) 1
0xb3e: Return(); Pop(2)

0xb3f: Stack[-4] = (bool) 0
0xb40: Return(); Pop(2)

0xb41: PushEmpty(bool)
0xb42: Call2 0xbbc

0xb43: Pop(0)
0xb44: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb45: @ lshStopSpeech()
0xb46: Pop(0)
0xb47: Return(); Pop(0)

0xb48: PushEmpty(object, object)
0xb49: @ self(Stack[-1])
0xb4a: Pop(0)
0xb4b: Stack[-1] = Stack[-3]
0xb4c: Return(); Pop(2)

0xb4d: Stack[-1] = 0
0xb4e: PushEmpty(float, float)
0xb4f: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb50: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb51: Push((float)9.999999974752427e-07)
0xb52: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb56; Pop(1)

0xb54: Stack[-4] = [0.0, 0.0, 0.0]
0xb55: Return(); Pop(2)

0xb56: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb57: Return(); Pop(2)

0xb58: PushEmpty(int, int)
0xb59: @ GetVariable(Stack[-3], Stack[-1])
0xb5a: Pop(0)
0xb5b: Stack[-1] = Stack[-4]
0xb5c: Return(); Pop(2)

0xb5d: PushEmpty(object, object)
0xb5e: @ CreateIntVector(Stack[-1])
0xb5f: Pop(0)
0xb60: @@ add(Stack[-4]); Obj=1 // @poff=276
0xb61: Pop(0)
0xb62: @@ add(Stack[-3]); Obj=1 // @poff=276
0xb63: Pop(0)
0xb64: Push((int) 3)
0xb65: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb66: Pop(1)
0xb67: Return(); Pop(2)

0xb68: Stack[-1] = 0
0xb69: PushEmpty(int, int)
0xb6a: PushEmpty(object, string, int)
0xb6b: Stack[-7] = Stack[-3]
0xb6c: Stack[-2] = "money" // @poff=280
0xb6d: Stack[-6] = Stack[-1]
0xb6e: Call2 0xa27

0xb6f: Pop(3)
0xb70: Push((int) 0)
0xb71: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xb72: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb73: Push("Money") // @poff=292
0xb74: @ GetInvItemByName(Stack[-2], Stack[-1])
0xb75: Pop(1)
0xb76: PushEmpty(int, int)
0xb77: Stack[-3] = Stack[-2]
0xb78: Stack[-5] = Stack[-1]
0xb79: Call2 0xb5d

0xb7a: Pop(2)
0xb7b: Return(); Pop(2)

0xb7c: PushEmpty(object, object)
0xb7d: @ FindActor(Stack[-1], Stack[-4])
0xb7e: Pop(0)
0xb7f: Pop(0); PushNull((bool) Stack[-1] == 0)
0xb80: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb81: Stack[-5] = (bool) 0
0xb82: Return(); Pop(2)

0xb83: @ Trigger(Stack[-1], Stack[-3])
0xb84: Pop(0)
0xb85: Stack[-5] = (bool) 1
0xb86: Return(); Pop(2)

0xb87: Stack[-1] = 0
0xb88: PushEmpty(float, float)
0xb89: @ GetGameTime(Stack[-1])
0xb8a: Pop(0)
0xb8b: Stack[-1] = Stack[-3]
0xb8c: Return(); Pop(2)

0xb8d: PushEmpty(float, float)
0xb8e: @ GetGameTime(Stack[-1])
0xb8f: Pop(0)
0xb90: Push((int) 1)
0xb91: PushEmpty(int)
0xb92: Push((int) 24)
0xb93: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb94: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb95: Return(); Pop(2)

0xb96: PushEmpty()
0xb97: PushEmpty(int)
0xb98: Call2 0xb8d

0xb99: Pop(0)
0xb9a: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb9b: Return(); Pop(0)

0xb9c: PushEmpty(string, string)
0xb9d: Stack[-1] = "idle" // @poff=146
0xb9e: Push(Stack[-3])
0xb9f: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xba0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xba1: Stack[-1] = Stack[-4]
0xba2: Return(); Pop(2)

0xba3: PushEmpty(int, bool, int, bool)
0xba4: Stack[-2] = (int) 0
0xba5: Push("all") // @poff=138
0xba6: PushEmpty(string, int)
0xba7: Stack[-5] = Stack[-1]
0xba8: Call2 0xb9c

0xba9: Pop(1)
0xbaa: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xbab: Pop(2)
0xbac: Pop(0); Push((bool) Stack[-1] == 0)
0xbad: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbae: GOTO 0xbb2

0xbaf: Push((int) 1)
0xbb0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbb1: GOTO 0xba5

0xbb2: Stack[-2] = Stack[-5]
0xbb3: Return(); Pop(4)

0xbb4: Stack[-1] = (int) 515533
0xbb5: Return(); Pop(0)

0xbb6: Stack[-1] = (int) 502858
0xbb7: Return(); Pop(0)

0xbb8: Stack[-1] = "ui/NPC_Eva.png" // @poff=304
0xbb9: Return(); Pop(0)

0xbba: Stack[-1] = "ui/NPC_Eva_b.png" // @poff=334
0xbbb: Return(); Pop(0)

0xbbc: Stack[-1] = (bool) 1
0xbbd: Return(); Pop(0)

0xbbe: PushEmpty(object, object)
0xbbf: Push("k3q02") // @poff=368
0xbc0: Push((int) 3)
0xbc1: @ SetVariable(Stack[-2], Stack[-1])
0xbc2: Pop(2)
0xbc3: PushEmpty(object)
0xbc4: Call2 0xce2

0xbc5: Stack[-1] = Stack[-2]
0xbc6: Pop(1)
0xbc7: Push("k3q02EvaGotoKaterina") // @poff=380
0xbc8: Push("pt_map_katerina") // @poff=422
0xbc9: Push((int) 0)
0xbca: Push((int) 525574)
0xbcb: PushEmpty(float)
0xbcc: Call2 0xb88

0xbcd: Pop(0)
0xbce: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=454
0xbcf: Pop(5)
0xbd0: PushEmpty()
0xbd1: Call2 0xc92

0xbd2: Pop(0)
0xbd3: Return(); Pop(2)

0xbd4: Stack[-1] = 0
0xbd5: PushEmpty()
0xbd6: Push("ook3Eva1") // @poff=462
0xbd7: Push((int) 1)
0xbd8: @ SetVariable(Stack[-2], Stack[-1])
0xbd9: Pop(2)
0xbda: Return(); Pop(0)

0xbdb: PushEmpty()
0xbdc: PushEmpty()
0xbdd: Call2 0xc9f

0xbde: Pop(0)
0xbdf: Return(); Pop(0)

0xbe0: PushEmpty()
0xbe1: Push("ook6Eva1") // @poff=480
0xbe2: Push((int) 1)
0xbe3: @ SetVariable(Stack[-2], Stack[-1])
0xbe4: Pop(2)
0xbe5: Return(); Pop(0)

0xbe6: PushEmpty()
0xbe7: Push("ook6Eva2") // @poff=498
0xbe8: Push((int) 1)
0xbe9: @ SetVariable(Stack[-2], Stack[-1])
0xbea: Pop(2)
0xbeb: Return(); Pop(0)

0xbec: PushEmpty()
0xbed: PushEmpty(bool, string, string)
0xbee: Stack[-2] = "quest_k6_01" // @poff=516
0xbef: Stack[-1] = "unlock_eva" // @poff=540
0xbf0: Call2 0xb7c

0xbf1: Pop(3)
0xbf2: Return(); Pop(0)

0xbf3: PushEmpty()
0xbf4: PushEmpty()
0xbf5: Call2 0xcac

0xbf6: Pop(0)
0xbf7: Return(); Pop(0)

0xbf8: PushEmpty()
0xbf9: Push("ook11Eva1") // @poff=562
0xbfa: Push((int) 1)
0xbfb: @ SetVariable(Stack[-2], Stack[-1])
0xbfc: Pop(2)
0xbfd: Return(); Pop(0)

0xbfe: PushEmpty()
0xbff: PushEmpty()
0xc00: Call2 0xc85

0xc01: Pop(0)
0xc02: Return(); Pop(0)

0xc03: PushEmpty()
0xc04: Push("money1000 is given") // @poff=582
0xc05: @ Trace(Stack[-1])
0xc06: Pop(1)
0xc07: PushEmpty(object, int)
0xc08: Stack[-4] = Stack[-2]
0xc09: Stack[-1] = (int) 1000
0xc0a: Call2 0xb69

0xc0b: Pop(2)
0xc0c: Return(); Pop(0)

0xc0d: PushEmpty()
0xc0e: Push("playsound") // @poff=620
0xc0f: Push("givemoney") // @poff=640
0xc10: @ TriggerWorld(Stack[-2], Stack[-1])
0xc11: Pop(2)
0xc12: Return(); Pop(0)

0xc13: PushEmpty()
0xc14: Push("playsound") // @poff=620
0xc15: Push("giveitem") // @poff=660
0xc16: @ TriggerWorld(Stack[-2], Stack[-1])
0xc17: Pop(2)
0xc18: Return(); Pop(0)

0xc19: PushEmpty()
0xc1a: PushEmpty(int, string)
0xc1b: Stack[-1] = "k3q02" // @poff=368
0xc1c: Call2 0xb58

0xc1d: Pop(1)
0xc1e: Push((int) 2)
0xc1f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc20: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc21: Stack[-2] = (bool) 1
0xc22: Return(); Pop(0)

0xc23: Stack[-2] = (bool) 0
0xc24: Return(); Pop(0)

0xc25: PushEmpty()
0xc26: PushEmpty(int, string)
0xc27: Stack[-1] = "k3q03" // @poff=678
0xc28: Call2 0xb58

0xc29: Pop(1)
0xc2a: Push((int) 1)
0xc2b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc2c: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc2d: Stack[-2] = (bool) 1
0xc2e: Return(); Pop(0)

0xc2f: Stack[-2] = (bool) 0
0xc30: Return(); Pop(0)

0xc31: PushEmpty()
0xc32: PushEmpty(int, string)
0xc33: Stack[-1] = "ook3Eva1" // @poff=462
0xc34: Call2 0xb58

0xc35: Pop(1)
0xc36: Push((int) 0)
0xc37: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc38: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc39: Stack[-2] = (bool) 1
0xc3a: Return(); Pop(0)

0xc3b: Stack[-2] = (bool) 0
0xc3c: Return(); Pop(0)

0xc3d: PushEmpty()
0xc3e: PushEmpty(int, string)
0xc3f: Stack[-1] = "k6q01" // @poff=690
0xc40: Call2 0xb58

0xc41: Pop(1)
0xc42: Push((int) 1)
0xc43: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc45: Stack[-2] = (bool) 1
0xc46: Return(); Pop(0)

0xc47: Stack[-2] = (bool) 0
0xc48: Return(); Pop(0)

0xc49: PushEmpty()
0xc4a: PushEmpty(int, string)
0xc4b: Stack[-1] = "ook6Eva1" // @poff=480
0xc4c: Call2 0xb58

0xc4d: Pop(1)
0xc4e: Push((int) 0)
0xc4f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc50: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc51: Stack[-2] = (bool) 1
0xc52: Return(); Pop(0)

0xc53: Stack[-2] = (bool) 0
0xc54: Return(); Pop(0)

0xc55: PushEmpty()
0xc56: PushEmpty(int, string)
0xc57: Stack[-1] = "k6q01" // @poff=690
0xc58: Call2 0xb58

0xc59: Pop(1)
0xc5a: Push((int) 2)
0xc5b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc5c: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5d: Stack[-2] = (bool) 1
0xc5e: Return(); Pop(0)

0xc5f: Stack[-2] = (bool) 0
0xc60: Return(); Pop(0)

0xc61: PushEmpty()
0xc62: PushEmpty(int, string)
0xc63: Stack[-1] = "ook6Eva2" // @poff=498
0xc64: Call2 0xb58

0xc65: Pop(1)
0xc66: Push((int) 0)
0xc67: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc68: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc69: Stack[-2] = (bool) 1
0xc6a: Return(); Pop(0)

0xc6b: Stack[-2] = (bool) 0
0xc6c: Return(); Pop(0)

0xc6d: PushEmpty()
0xc6e: PushEmpty(int, string)
0xc6f: Stack[-1] = "k11q01" // @poff=702
0xc70: Call2 0xb58

0xc71: Pop(1)
0xc72: Push((int) 1)
0xc73: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc74: IF (Stack[-1] == 0) GOTO 0xc77; Pop(1)

0xc75: Stack[-2] = (bool) 1
0xc76: Return(); Pop(0)

0xc77: Stack[-2] = (bool) 0
0xc78: Return(); Pop(0)

0xc79: PushEmpty()
0xc7a: PushEmpty(int, string)
0xc7b: Stack[-1] = "ook11Eva1" // @poff=562
0xc7c: Call2 0xb58

0xc7d: Pop(1)
0xc7e: Push((int) 0)
0xc7f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc81: Stack[-2] = (bool) 1
0xc82: Return(); Pop(0)

0xc83: Stack[-2] = (bool) 0
0xc84: Return(); Pop(0)

0xc85: PushEmpty(object, object)
0xc86: Push((int) 482)
0xc87: Push((int) 1)
0xc88: Push((int) 528049)
0xc89: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc8a: Pop(3)
0xc8b: PushEmpty(bool, object, int)
0xc8c: Stack[-4] = Stack[-2]
0xc8d: Stack[-1] = (int) 480
0xc8e: Call2 0xcc6

0xc8f: Pop(3)
0xc90: Return(); Pop(2)

0xc91: Stack[-1] = 0
0xc92: PushEmpty(object, object)
0xc93: Push((int) 347)
0xc94: Push((int) 2)
0xc95: Push((int) 525569)
0xc96: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc97: Pop(3)
0xc98: PushEmpty(bool, object, int)
0xc99: Stack[-4] = Stack[-2]
0xc9a: Stack[-1] = (int) 344
0xc9b: Call2 0xcc6

0xc9c: Pop(3)
0xc9d: Return(); Pop(2)

0xc9e: Stack[-1] = 0
0xc9f: PushEmpty(object, object)
0xca0: Push((int) 352)
0xca1: Push((int) 2)
0xca2: Push((int) 525618)
0xca3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca4: Pop(3)
0xca5: PushEmpty(bool, object, int)
0xca6: Stack[-4] = Stack[-2]
0xca7: Stack[-1] = (int) 350
0xca8: Call2 0xcc6

0xca9: Pop(3)
0xcaa: Return(); Pop(2)

0xcab: Stack[-1] = 0
0xcac: PushEmpty(object, object)
0xcad: Push((int) 410)
0xcae: Push((int) 1)
0xcaf: Push((int) 526111)
0xcb0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb1: Pop(3)
0xcb2: PushEmpty(bool, object, int)
0xcb3: Stack[-4] = Stack[-2]
0xcb4: Stack[-1] = (int) 408
0xcb5: Call2 0xcc6

0xcb6: Pop(3)
0xcb7: Return(); Pop(2)

0xcb8: Stack[-1] = 0
0xcb9: PushEmpty(object, object)
0xcba: @ GetDiaryRoot(Stack[-1])
0xcbb: Pop(0)
0xcbc: Pop(0); Push((bool) Stack[-1] == 0)
0xcbd: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcbe: Push("Can't retrieve diary root") // @poff=716
0xcbf: @ Trace(Stack[-1])
0xcc0: Pop(1)
0xcc1: Stack[-3] = (bool) 0
0xcc2: Return(); Pop(2)

0xcc3: Stack[-1] = Stack[-3]
0xcc4: Return(); Pop(2)

0xcc5: Stack[-1] = 0
0xcc6: PushEmpty(object, object, int, object, object, int)
0xcc7: PushEmpty(object)
0xcc8: Call2 0xcb9

0xcc9: Stack[-1] = Stack[-4]
0xcca: Pop(1)
0xccb: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=768
0xccc: Pop(0)
0xccd: Pop(0); Push((bool) Stack[-2] == 0)
0xcce: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xccf: Push("Can't find diary parent with id: ") // @poff=773
0xcd0: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcd1: @ Trace(Stack[-1])
0xcd2: Pop(1)
0xcd3: Stack[-9] = (bool) 0
0xcd4: Return(); Pop(6)

0xcd5: @@ AddChild(Stack[-8]); Obj=2 // @poff=841
0xcd6: Pop(0)
0xcd7: Push((int) 7)
0xcd8: @ SendWorldWndMessage(Stack[-1])
0xcd9: Pop(1)
0xcda: @@ GetCategory(Stack[-1]); Obj=8 // @poff=850
0xcdb: Pop(0)
0xcdc: @ SetDiarySection(Stack[-1])
0xcdd: Pop(0)
0xcde: Stack[-9] = (bool) 0
0xcdf: Return(); Pop(6)

0xce0: Stack[-2] = 0
0xce1: Stack[-3] = 0
0xce2: PushEmpty(object, object, object, object)
0xce3: @ GetMainOutdoorScene(Stack[-2])
0xce4: Pop(0)
0xce5: Pop(0); PushNull((bool) Stack[-2] == 0)
0xce6: IF (Stack[-1] == 0) GOTO 0xced; Pop(1)

0xce7: Push("Can't find main outdoor scene") // @poff=862
0xce8: @ Trace(Stack[-1])
0xce9: Pop(1)
0xcea: Stack[-1] = 0
0xceb: Stack[-1] = Stack[-5]
0xcec: Return(); Pop(4)

0xced: @@ GetMap(Stack[-1]); Obj=2 // @poff=922
0xcee: Pop(0)
0xcef: Stack[-1] = Stack[-5]
0xcf0: Return(); Pop(4)

0xcf1: Stack[-1] = 0
0xcf2: Stack[-2] = 0
0xcf3: PushEmpty(int, int)
0xcf4: Push("branch") // @poff=929
0xcf5: @ GetVariable(Stack[-1], Stack[-2])
0xcf6: Pop(1)
0xcf7: Push((int) 0)
0xcf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf9: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcfa: Stack[-3] = (int) 1
0xcfb: Return(); Pop(2)

0xcfc: GOTO 0xd02

0xcfd: Push((int) 1)
0xcfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcff: IF (Stack[-1] == 0) GOTO 0xd02; Pop(1)

0xd00: Stack[-3] = (int) 2
0xd01: Return(); Pop(2)

0xd02: Stack[-3] = (int) 3
0xd03: Return(); Pop(2)

0xd04: PushEmpty(int, int)
0xd05: Push("mt_eva") // @poff=943
0xd06: @ GetVariable(Stack[-1], Stack[-2])
0xd07: Pop(1)
0xd08: Pop(0); Push((bool) Stack[-1] == 0)
0xd09: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd0a: PushEmpty(int, object)
0xd0b: Stack[-5] = Stack[-1]
0xd0c: Push(-2, 1); TaskCall(1)
0xd0d: Call2 0xd

0xd0e: Pop(-2, 1); TaskReturn
0xd0f: Pop(2)
0xd10: Push("mt_eva") // @poff=943
0xd11: Push((int) 1)
0xd12: @ SetVariable(Stack[-2], Stack[-1])
0xd13: Pop(2)
0xd14: PushEmpty(bool, int)
0xd15: Stack[-1] = (int) 3
0xd16: Call2 0xb96

0xd17: Pop(1)
0xd18: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd19: PushEmpty(int, object)
0xd1a: Stack[-5] = Stack[-1]
0xd1b: Push(-2, 1); TaskCall(3)
0xd1c: Call2 0xef

0xd1d: Pop(-2, 1); TaskReturn
0xd1e: Pop(2)
0xd1f: Return(); Pop(2)

0xd20: PushEmpty(bool, int)
0xd21: Stack[-1] = (int) 6
0xd22: Call2 0xb96

0xd23: Pop(1)
0xd24: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd25: PushEmpty(int, object)
0xd26: Stack[-5] = Stack[-1]
0xd27: Push(-2, 1); TaskCall(5)
0xd28: Call2 0x436

0xd29: Pop(-2, 1); TaskReturn
0xd2a: Pop(2)
0xd2b: Return(); Pop(2)

0xd2c: PushEmpty(bool, int)
0xd2d: Stack[-1] = (int) 11
0xd2e: Call2 0xb96

0xd2f: Pop(1)
0xd30: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd31: PushEmpty(int, object)
0xd32: Stack[-5] = Stack[-1]
0xd33: Push(-2, 1); TaskCall(7)
0xd34: Call2 0x60c

0xd35: Pop(-2, 1); TaskReturn
0xd36: Pop(2)
0xd37: Return(); Pop(2)

0xd38: PushEmpty(bool, int)
0xd39: Stack[-1] = (int) 12
0xd3a: Call2 0xb96

0xd3b: Pop(1)
0xd3c: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd3d: PushEmpty(int, object)
0xd3e: Stack[-5] = Stack[-1]
0xd3f: Push(-2, 1); TaskCall(9)
0xd40: Call2 0x74b

0xd41: Pop(-2, 1); TaskReturn
0xd42: Pop(2)
0xd43: Return(); Pop(2)

0xd44: PushEmpty(int, object)
0xd45: Stack[-5] = Stack[-1]
0xd46: Push(-2, 1); TaskCall(11)
0xd47: Call2 0x84e

0xd48: Pop(-2, 1); TaskReturn
0xd49: Pop(2)
0xd4a: Return(); Pop(2)

