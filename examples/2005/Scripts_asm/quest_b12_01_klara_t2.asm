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
	W:b12q01KlaraInSobor
	W:oob12KlaraT2_1
	W:b12q01KlaraVisit
	W:oob12KlaraT2_2
	W:oob12KlaraT2_3
	W:b12q01_Klara
	W:oob12KlaraT2_4
	W:b12q01ChildsAreVisited
	W:b12q01TheaterIsVisited
	W:game_final
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	A:add
	W:vol_
	A:size
	A:get
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006200310032007100300031004b006c0061007200610049006e0053006f0062006f00720000006f006f006200310032004b006c00610072006100540032005f00310000006200310032007100300031004b006c006100720061005600690073006900740000006f006f006200310032004b006c00610072006100540032005f00320000006f006f006200310032004b006c00610072006100540032005f00330000006200310032007100300031005f004b006c0061007200610000006f006f006200310032004b006c00610072006100540032005f00340000006200310032007100300031004300680069006c00640073004100720065005600690073006900740065006400000062003100320071003000310054006800650061007400650072004900730056006900730069007400650064000000670061006d0065005f00660069006e0061006c000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006164640076006f006c005f00000073697a650067657400750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
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
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	CreateIntVector (1 args)

RunOp = 0x4bd
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x11c Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x4c1 Vars = (object)
		EVENT_26 Op = 0x4cd Vars = (string)
		EVENT_6 Op = 0x4e9 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x5fd

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x550

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x4fb

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x772

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x770

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x774

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x776

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x705

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
0x48: Call2 0x53f

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
0x56: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x652

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x68e

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x624

0x6a: Pop(2)
0x6b: PushEmpty(object, object)
0x6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x62a

0x6f: Pop(2)
0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0x106

0x73: Pop(1)
0x74: Push((int) 522115)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: Push((int) 522117)
0x7a: Push((int) 24242)
0x7b: Push((int) 23284)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: Push((int) 522116)
0x7f: Push((int) 24254)
0x80: Push((int) 23283)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: GOTO 0xe8

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x62a

0x88: Pop(2)
0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral" // @poff=89
0x8b: Call2 0x106

0x8c: Pop(1)
0x8d: Push((int) 531990)
0x8e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8f: Pop(1)
0x90: @@@ ClearReplies(); Obj=0 // @poff=116
0x91: Pop(0)
0x92: PushEmpty(bool)
0x93: Stack[-1] = (bool) 0
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x69a

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9b: PushEmpty(bool, object)
0x9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Call2 0x6a4

0x9e: Pop(1)
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x68e

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: Push((int) 540264)
0xac: Push((int) 42248)
0xad: Push((int) 42247)
0xae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xaf: Pop(3)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 0
0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x65e

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0x676

0xba: Pop(1)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 522121)
0xbf: Push((int) 24262)
0xc0: Push((int) 23288)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: PushEmpty(bool)
0xc4: Stack[-1] = (bool) 0
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x66a

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Call2 0x682

0xcd: Pop(1)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Stack[-1] = (bool) 1
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 523066)
0xd2: Push((int) 24282)
0xd3: Push((int) 24260)
0xd4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd5: Pop(3)
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x6b0

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 540135)
0xdc: Push((int) 42108)
0xdd: Push((int) 42107)
0xde: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdf: Pop(3)
0xe0: Push((int) 532038)
0xe1: Push((int) -1)
0xe2: Push((int) 33438)
0xe3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe4: Pop(3)
0xe5: GOTO 0xe8

0xe6: Return(); Pop(0)

0xe7: GOTO 0x55

0xe8: PushEmpty(bool)
0xe9: Call2 0x778

0xea: Pop(0)
0xeb: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xec: @ lshWaitForAnimEnd()
0xed: Pop(0)
0xee: Push( Stack[3 + Tasks[-1].StackPointer] )
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: GOTO 0xf6

0xf1: PushEmpty(string)
0xf2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf3: Call2 0x5da

0xf4: Pop(1)
0xf5: GOTO 0xec

0xf6: GOTO 0x105

0xf7: Push("all") // @poff=138
0xf8: Push("idle") // @poff=146
0xf9: @ PlayAnimation(Stack[-2], Stack[-1])
0xfa: Pop(2)
0xfb: @ WaitForAnimEnd()
0xfc: Pop(0)
0xfd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: GOTO 0x105

0x100: Push("all") // @poff=138
0x101: Push("idle") // @poff=146
0x102: @ PlayAnimation(Stack[-2], Stack[-1])
0x103: Pop(2)
0x104: GOTO 0xfb

0x105: Return(); Pop(0)

0x106: PushEmpty()
0x107: PushEmpty(bool)
0x108: Call2 0x778

0x109: Pop(0)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: Return(); Pop(0)

0x10d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: Return(); Pop(0)

0x110: PushEmpty(string, bool)
0x111: Stack[-3] = Stack[-2]
0x112: Push("") // @poff=102
0x113: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: Stack[-1] = (bool) 0
0x116: GOTO 0x118

0x117: Stack[-1] = (bool) 1
0x118: Call2 0x5e1

0x119: Pop(2)
0x11a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x11b: Return(); Pop(0)

0x11c: PushEmpty()
0x11d: Push((int) 1)
0x11e: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x11f: PushEmpty()
0x120: Call2 0x5f6

0x121: Pop(0)
0x122: Push((int) 33431)
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0x63c

0x129: Pop(2)
0x12a: Push((int) 33401)
0x12b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12d: PushEmpty(object, object)
0x12e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x130: Call2 0x61b

0x131: Pop(2)
0x132: Push((int) 24256)
0x133: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: PushEmpty(object, object)
0x136: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x137: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x138: Call2 0x63c

0x139: Pop(2)
0x13a: Push((int) 33403)
0x13b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: PushEmpty(object, object)
0x13e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x140: Call2 0x61b

0x141: Pop(2)
0x142: Push((int) 42249)
0x143: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x145: PushEmpty(object, object)
0x146: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x147: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148: Call2 0x61b

0x149: Pop(2)
0x14a: Push((int) 23288)
0x14b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14d: PushEmpty(object, object)
0x14e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x150: Call2 0x630

0x151: Pop(2)
0x152: Push((int) 24260)
0x153: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x155: PushEmpty(object, object)
0x156: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158: Call2 0x636

0x159: Pop(2)
0x15a: Push((int) 42107)
0x15b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15d: PushEmpty(object, object)
0x15e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x160: Call2 0x64c

0x161: Pop(2)
0x162: Push((int) 23282)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x652

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Call2 0x68e

0x16f: Pop(1)
0x170: Pop(1); Push((bool) Stack[-1] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x174: PushEmpty(object, object)
0x175: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x176: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x177: Call2 0x624

0x178: Pop(2)
0x179: PushEmpty(object, object)
0x17a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17c: Call2 0x62a

0x17d: Pop(2)
0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral" // @poff=89
0x180: Call2 0x106

0x181: Pop(1)
0x182: Push((int) 522115)
0x183: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x184: Pop(1)
0x185: @@@ ClearReplies(); Obj=0 // @poff=116
0x186: Pop(0)
0x187: Push((int) 522117)
0x188: Push((int) 24242)
0x189: Push((int) 23284)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Push((int) 522116)
0x18d: Push((int) 24254)
0x18e: Push((int) 23283)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: PushEmpty(object, object)
0x193: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x194: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x195: Call2 0x62a

0x196: Pop(2)
0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral" // @poff=89
0x199: Call2 0x106

0x19a: Pop(1)
0x19b: Push((int) 531990)
0x19c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19d: Pop(1)
0x19e: @@@ ClearReplies(); Obj=0 // @poff=116
0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool)
0x1a3: Stack[-1] = (bool) 0
0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call2 0x69a

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0x6a4

0x1ac: Pop(1)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Stack[-1] = (bool) 1
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Call2 0x68e

0x1b4: Pop(1)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Stack[-1] = (bool) 1
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: Push((int) 540264)
0x1ba: Push((int) 42248)
0x1bb: Push((int) 42247)
0x1bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bd: Pop(3)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: PushEmpty(bool, object)
0x1c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c2: Call2 0x65e

0x1c3: Pop(1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0x676

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 1
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 522121)
0x1cd: Push((int) 24262)
0x1ce: Push((int) 23288)
0x1cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d0: Pop(3)
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 0
0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call2 0x66a

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call2 0x682

0x1db: Pop(1)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Stack[-1] = (bool) 1
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: Push((int) 523066)
0x1e0: Push((int) 24282)
0x1e1: Push((int) 24260)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call2 0x6b0

0x1e7: Pop(1)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: Push((int) 540135)
0x1ea: Push((int) 42108)
0x1eb: Push((int) 42107)
0x1ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ed: Pop(3)
0x1ee: Push((int) 532038)
0x1ef: Push((int) -1)
0x1f0: Push((int) 33438)
0x1f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 42108)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral" // @poff=89
0x1f9: Call2 0x106

0x1fa: Pop(1)
0x1fb: Push((int) 540136)
0x1fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fd: Pop(1)
0x1fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ff: Pop(0)
0x200: Push((int) 540137)
0x201: Push((int) -1)
0x202: Push((int) 42109)
0x203: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 24282)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral" // @poff=89
0x20b: Call2 0x106

0x20c: Pop(1)
0x20d: Push((int) 523086)
0x20e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20f: Pop(1)
0x210: @@@ ClearReplies(); Obj=0 // @poff=116
0x211: Pop(0)
0x212: Push((int) 523087)
0x213: Push((int) 24300)
0x214: Push((int) 24283)
0x215: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x216: Pop(3)
0x217: Push((int) 523088)
0x218: Push((int) 24285)
0x219: Push((int) 24284)
0x21a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 24285)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral" // @poff=89
0x222: Call2 0x106

0x223: Pop(1)
0x224: Push((int) 523089)
0x225: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x226: Pop(1)
0x227: @@@ ClearReplies(); Obj=0 // @poff=116
0x228: Pop(0)
0x229: Push((int) 523090)
0x22a: Push((int) -1)
0x22b: Push((int) 24286)
0x22c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22d: Pop(3)
0x22e: Push((int) 523091)
0x22f: Push((int) 24288)
0x230: Push((int) 24287)
0x231: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Push((int) 24288)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x237: PushEmpty(string)
0x238: Stack[-1] = "Neutral" // @poff=89
0x239: Call2 0x106

0x23a: Pop(1)
0x23b: Push((int) 523092)
0x23c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23d: Pop(1)
0x23e: @@@ ClearReplies(); Obj=0 // @poff=116
0x23f: Pop(0)
0x240: Push((int) 523093)
0x241: Push((int) 24292)
0x242: Push((int) 24289)
0x243: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x244: Pop(3)
0x245: Push((int) 523094)
0x246: Push((int) 24292)
0x247: Push((int) 24290)
0x248: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x249: Pop(3)
0x24a: Push((int) 523095)
0x24b: Push((int) 24292)
0x24c: Push((int) 24291)
0x24d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24e: Pop(3)
0x24f: Return(); Pop(0)

0x250: Push((int) 24292)
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Neutral" // @poff=89
0x255: Call2 0x106

0x256: Pop(1)
0x257: Push((int) 523096)
0x258: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x259: Pop(1)
0x25a: @@@ ClearReplies(); Obj=0 // @poff=116
0x25b: Pop(0)
0x25c: Push((int) 523097)
0x25d: Push((int) -1)
0x25e: Push((int) 24295)
0x25f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x260: Pop(3)
0x261: Push((int) 523098)
0x262: Push((int) 24297)
0x263: Push((int) 24296)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 24297)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral" // @poff=89
0x26c: Call2 0x106

0x26d: Pop(1)
0x26e: Push((int) 523099)
0x26f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x270: Pop(1)
0x271: @@@ ClearReplies(); Obj=0 // @poff=116
0x272: Pop(0)
0x273: Push((int) 523100)
0x274: Push((int) -1)
0x275: Push((int) 24298)
0x276: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x277: Pop(3)
0x278: Push((int) 523101)
0x279: Push((int) -1)
0x27a: Push((int) 24299)
0x27b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Push((int) 24300)
0x27f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral" // @poff=89
0x283: Call2 0x106

0x284: Pop(1)
0x285: Push((int) 523102)
0x286: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x287: Pop(1)
0x288: @@@ ClearReplies(); Obj=0 // @poff=116
0x289: Pop(0)
0x28a: Push((int) 523103)
0x28b: Push((int) 24302)
0x28c: Push((int) 24301)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 24302)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral" // @poff=89
0x295: Call2 0x106

0x296: Pop(1)
0x297: Push((int) 523104)
0x298: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x299: Pop(1)
0x29a: @@@ ClearReplies(); Obj=0 // @poff=116
0x29b: Pop(0)
0x29c: Push((int) 523105)
0x29d: Push((int) 24304)
0x29e: Push((int) 24303)
0x29f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Push((int) 24304)
0x2a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=89
0x2a7: Call2 0x106

0x2a8: Pop(1)
0x2a9: Push((int) 523106)
0x2aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ab: Pop(1)
0x2ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ad: Pop(0)
0x2ae: Push((int) 523107)
0x2af: Push((int) 24308)
0x2b0: Push((int) 24305)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b2: Pop(3)
0x2b3: Push((int) 523108)
0x2b4: Push((int) 24308)
0x2b5: Push((int) 24306)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b7: Pop(3)
0x2b8: Push((int) 523109)
0x2b9: Push((int) 24308)
0x2ba: Push((int) 24307)
0x2bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bc: Pop(3)
0x2bd: Return(); Pop(0)

0x2be: Push((int) 24308)
0x2bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral" // @poff=89
0x2c3: Call2 0x106

0x2c4: Pop(1)
0x2c5: Push((int) 523110)
0x2c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c7: Pop(1)
0x2c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c9: Pop(0)
0x2ca: Push((int) 523111)
0x2cb: Push((int) -1)
0x2cc: Push((int) 24311)
0x2cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ce: Pop(3)
0x2cf: Push((int) 523112)
0x2d0: Push((int) -1)
0x2d1: Push((int) 24312)
0x2d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d3: Pop(3)
0x2d4: Return(); Pop(0)

0x2d5: Push((int) 24262)
0x2d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2d8: PushEmpty(string)
0x2d9: Stack[-1] = "Neutral" // @poff=89
0x2da: Call2 0x106

0x2db: Pop(1)
0x2dc: Push((int) 523068)
0x2dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2de: Pop(1)
0x2df: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e0: Pop(0)
0x2e1: Push((int) 523069)
0x2e2: Push((int) 24271)
0x2e3: Push((int) 24263)
0x2e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e5: Pop(3)
0x2e6: Push((int) 523070)
0x2e7: Push((int) 24265)
0x2e8: Push((int) 24264)
0x2e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ea: Pop(3)
0x2eb: Return(); Pop(0)

0x2ec: Push((int) 24265)
0x2ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral" // @poff=89
0x2f1: Call2 0x106

0x2f2: Pop(1)
0x2f3: Push((int) 523071)
0x2f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f5: Pop(1)
0x2f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f7: Pop(0)
0x2f8: Push((int) 523072)
0x2f9: Push((int) 24267)
0x2fa: Push((int) 24266)
0x2fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fc: Pop(3)
0x2fd: Return(); Pop(0)

0x2fe: Push((int) 24267)
0x2ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral" // @poff=89
0x303: Call2 0x106

0x304: Pop(1)
0x305: Push((int) 523073)
0x306: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x307: Pop(1)
0x308: @@@ ClearReplies(); Obj=0 // @poff=116
0x309: Pop(0)
0x30a: Push((int) 523074)
0x30b: Push((int) 24271)
0x30c: Push((int) 24268)
0x30d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30e: Pop(3)
0x30f: Push((int) 523075)
0x310: Push((int) 24271)
0x311: Push((int) 24269)
0x312: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x313: Pop(3)
0x314: Return(); Pop(0)

0x315: Push((int) 24271)
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Neutral" // @poff=89
0x31a: Call2 0x106

0x31b: Pop(1)
0x31c: Push((int) 523077)
0x31d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x31e: Pop(1)
0x31f: @@@ ClearReplies(); Obj=0 // @poff=116
0x320: Pop(0)
0x321: Push((int) 523078)
0x322: Push((int) 24275)
0x323: Push((int) 24274)
0x324: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x325: Pop(3)
0x326: Return(); Pop(0)

0x327: Push((int) 24275)
0x328: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x32a: PushEmpty(string)
0x32b: Stack[-1] = "Neutral" // @poff=89
0x32c: Call2 0x106

0x32d: Pop(1)
0x32e: Push((int) 523079)
0x32f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x330: Pop(1)
0x331: @@@ ClearReplies(); Obj=0 // @poff=116
0x332: Pop(0)
0x333: Push((int) 523080)
0x334: Push((int) 24277)
0x335: Push((int) 24276)
0x336: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x337: Pop(3)
0x338: Return(); Pop(0)

0x339: Push((int) 24277)
0x33a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Neutral" // @poff=89
0x33e: Call2 0x106

0x33f: Pop(1)
0x340: Push((int) 523081)
0x341: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x342: Pop(1)
0x343: @@@ ClearReplies(); Obj=0 // @poff=116
0x344: Pop(0)
0x345: Push((int) 523082)
0x346: Push((int) -1)
0x347: Push((int) 24278)
0x348: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x349: Pop(3)
0x34a: Push((int) 523083)
0x34b: Push((int) 24280)
0x34c: Push((int) 24279)
0x34d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x34e: Pop(3)
0x34f: Return(); Pop(0)

0x350: Push((int) 24280)
0x351: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x353: PushEmpty(string)
0x354: Stack[-1] = "Neutral" // @poff=89
0x355: Call2 0x106

0x356: Pop(1)
0x357: Push((int) 523084)
0x358: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x359: Pop(1)
0x35a: @@@ ClearReplies(); Obj=0 // @poff=116
0x35b: Pop(0)
0x35c: Push((int) 523085)
0x35d: Push((int) -1)
0x35e: Push((int) 24281)
0x35f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x360: Pop(3)
0x361: Return(); Pop(0)

0x362: Push((int) 42248)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x365: PushEmpty(string)
0x366: Stack[-1] = "Neutral" // @poff=89
0x367: Call2 0x106

0x368: Pop(1)
0x369: Push((int) 540265)
0x36a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x36b: Pop(1)
0x36c: @@@ ClearReplies(); Obj=0 // @poff=116
0x36d: Pop(0)
0x36e: Push((int) 540266)
0x36f: Push((int) -1)
0x370: Push((int) 42249)
0x371: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x372: Pop(3)
0x373: Return(); Pop(0)

0x374: Push((int) 24242)
0x375: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x377: PushEmpty(string)
0x378: Stack[-1] = "Neutral" // @poff=89
0x379: Call2 0x106

0x37a: Pop(1)
0x37b: Push((int) 523049)
0x37c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37d: Pop(1)
0x37e: @@@ ClearReplies(); Obj=0 // @poff=116
0x37f: Pop(0)
0x380: Push((int) 523050)
0x381: Push((int) 24244)
0x382: Push((int) 24243)
0x383: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x384: Pop(3)
0x385: Return(); Pop(0)

0x386: Push((int) 24244)
0x387: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x389: PushEmpty(string)
0x38a: Stack[-1] = "Neutral" // @poff=89
0x38b: Call2 0x106

0x38c: Pop(1)
0x38d: Push((int) 523051)
0x38e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38f: Pop(1)
0x390: @@@ ClearReplies(); Obj=0 // @poff=116
0x391: Pop(0)
0x392: Push((int) 523052)
0x393: Push((int) 24246)
0x394: Push((int) 24245)
0x395: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: Push((int) 24246)
0x399: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x39b: PushEmpty(string)
0x39c: Stack[-1] = "Neutral" // @poff=89
0x39d: Call2 0x106

0x39e: Pop(1)
0x39f: Push((int) 523053)
0x3a0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a1: Pop(1)
0x3a2: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a3: Pop(0)
0x3a4: Push((int) 523058)
0x3a5: Push((int) 24252)
0x3a6: Push((int) 24251)
0x3a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a8: Pop(3)
0x3a9: Push((int) 523054)
0x3aa: Push((int) 24248)
0x3ab: Push((int) 24247)
0x3ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Push((int) 24248)
0x3b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Neutral" // @poff=89
0x3b4: Call2 0x106

0x3b5: Pop(1)
0x3b6: Push((int) 523055)
0x3b7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b8: Pop(1)
0x3b9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ba: Pop(0)
0x3bb: Push((int) 523056)
0x3bc: Push((int) 24254)
0x3bd: Push((int) 24249)
0x3be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bf: Pop(3)
0x3c0: Push((int) 523057)
0x3c1: Push((int) -1)
0x3c2: Push((int) 24250)
0x3c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c4: Pop(3)
0x3c5: Return(); Pop(0)

0x3c6: Push((int) 24254)
0x3c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3c9: PushEmpty(bool, object)
0x3ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cb: Call2 0x69a

0x3cc: Pop(1)
0x3cd: Pop(1); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3cf: PushEmpty(string)
0x3d0: Stack[-1] = "Neutral" // @poff=89
0x3d1: Call2 0x106

0x3d2: Pop(1)
0x3d3: Push((int) 523061)
0x3d4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d5: Pop(1)
0x3d6: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d7: Pop(0)
0x3d8: Push((int) 540121)
0x3d9: Push((int) 42091)
0x3da: Push((int) 42090)
0x3db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: PushEmpty(bool, object)
0x3df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e0: Call2 0x69a

0x3e1: Pop(1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3e3: PushEmpty(string)
0x3e4: Stack[-1] = "Neutral" // @poff=89
0x3e5: Call2 0x106

0x3e6: Pop(1)
0x3e7: Push((int) 531996)
0x3e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3e9: Pop(1)
0x3ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x3eb: Pop(0)
0x3ec: Push((int) 531997)
0x3ed: Push((int) -1)
0x3ee: Push((int) 33403)
0x3ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f0: Pop(3)
0x3f1: Push((int) 531998)
0x3f2: Push((int) -1)
0x3f3: Push((int) 33404)
0x3f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f5: Pop(3)
0x3f6: Return(); Pop(0)

0x3f7: Push((int) 42091)
0x3f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3fa: PushEmpty(string)
0x3fb: Stack[-1] = "Neutral" // @poff=89
0x3fc: Call2 0x106

0x3fd: Pop(1)
0x3fe: Push((int) 540122)
0x3ff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x400: Pop(1)
0x401: @@@ ClearReplies(); Obj=0 // @poff=116
0x402: Pop(0)
0x403: Push((int) 523063)
0x404: Push((int) -1)
0x405: Push((int) 24256)
0x406: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x407: Pop(3)
0x408: Return(); Pop(0)

0x409: Push((int) 24252)
0x40a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Neutral" // @poff=89
0x40e: Call2 0x106

0x40f: Pop(1)
0x410: Push((int) 523059)
0x411: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x412: Pop(1)
0x413: @@@ ClearReplies(); Obj=0 // @poff=116
0x414: Pop(0)
0x415: Push((int) 523060)
0x416: Push((int) 24248)
0x417: Push((int) 24253)
0x418: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x419: Pop(3)
0x41a: Push((int) 531991)
0x41b: Push((int) 33398)
0x41c: Push((int) 33397)
0x41d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41e: Pop(3)
0x41f: Return(); Pop(0)

0x420: Push((int) 33398)
0x421: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x423: PushEmpty(bool, object)
0x424: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x425: Call2 0x69a

0x426: Pop(1)
0x427: Pop(1); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x429: PushEmpty(string)
0x42a: Stack[-1] = "Neutral" // @poff=89
0x42b: Call2 0x106

0x42c: Pop(1)
0x42d: Push((int) 531992)
0x42e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42f: Pop(1)
0x430: @@@ ClearReplies(); Obj=0 // @poff=116
0x431: Pop(0)
0x432: Push((int) 532023)
0x433: Push((int) 33424)
0x434: Push((int) 33423)
0x435: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x436: Pop(3)
0x437: Return(); Pop(0)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0x69a

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x43d: PushEmpty(string)
0x43e: Stack[-1] = "Neutral" // @poff=89
0x43f: Call2 0x106

0x440: Pop(1)
0x441: Push((int) 531994)
0x442: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x443: Pop(1)
0x444: @@@ ClearReplies(); Obj=0 // @poff=116
0x445: Pop(0)
0x446: Push((int) 532035)
0x447: Push((int) 33436)
0x448: Push((int) 33435)
0x449: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44a: Pop(3)
0x44b: Return(); Pop(0)

0x44c: Push((int) 33436)
0x44d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x44f: PushEmpty(string)
0x450: Stack[-1] = "Neutral" // @poff=89
0x451: Call2 0x106

0x452: Pop(1)
0x453: Push((int) 532036)
0x454: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x455: Pop(1)
0x456: @@@ ClearReplies(); Obj=0 // @poff=116
0x457: Pop(0)
0x458: Push((int) 531995)
0x459: Push((int) -1)
0x45a: Push((int) 33401)
0x45b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45c: Pop(3)
0x45d: Return(); Pop(0)

0x45e: Push((int) 33424)
0x45f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x461: PushEmpty(string)
0x462: Stack[-1] = "Neutral" // @poff=89
0x463: Call2 0x106

0x464: Pop(1)
0x465: Push((int) 532024)
0x466: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x467: Pop(1)
0x468: @@@ ClearReplies(); Obj=0 // @poff=116
0x469: Pop(0)
0x46a: Push((int) 532025)
0x46b: Push((int) 33426)
0x46c: Push((int) 33425)
0x46d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46e: Pop(3)
0x46f: Push((int) 532033)
0x470: Push((int) -1)
0x471: Push((int) 33433)
0x472: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x473: Pop(3)
0x474: Return(); Pop(0)

0x475: Push((int) 33426)
0x476: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x478: PushEmpty(string)
0x479: Stack[-1] = "Neutral" // @poff=89
0x47a: Call2 0x106

0x47b: Pop(1)
0x47c: Push((int) 532026)
0x47d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47e: Pop(1)
0x47f: @@@ ClearReplies(); Obj=0 // @poff=116
0x480: Pop(0)
0x481: Push((int) 532027)
0x482: Push((int) 33428)
0x483: Push((int) 33427)
0x484: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x485: Pop(3)
0x486: Push((int) 532032)
0x487: Push((int) -1)
0x488: Push((int) 33432)
0x489: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x48a: Pop(3)
0x48b: Return(); Pop(0)

0x48c: Push((int) 33428)
0x48d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x48f: PushEmpty(string)
0x490: Stack[-1] = "Neutral" // @poff=89
0x491: Call2 0x106

0x492: Pop(1)
0x493: Push((int) 532028)
0x494: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x495: Pop(1)
0x496: @@@ ClearReplies(); Obj=0 // @poff=116
0x497: Pop(0)
0x498: Push((int) 532029)
0x499: Push((int) 33430)
0x49a: Push((int) 33429)
0x49b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x49c: Pop(3)
0x49d: Return(); Pop(0)

0x49e: Push((int) 33430)
0x49f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a1: PushEmpty(string)
0x4a2: Stack[-1] = "Neutral" // @poff=89
0x4a3: Call2 0x106

0x4a4: Pop(1)
0x4a5: Push((int) 532030)
0x4a6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a7: Pop(1)
0x4a8: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a9: Pop(0)
0x4aa: Push((int) 532031)
0x4ab: Push((int) -1)
0x4ac: Push((int) 33431)
0x4ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ae: Pop(3)
0x4af: Return(); Pop(0)

0x4b0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4b1: PushEmpty(bool)
0x4b2: Call2 0x778

0x4b3: Pop(0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b5: @ lshStopAnimation()
0x4b6: Pop(0)
0x4b7: GOTO 0x4ba

0x4b8: @ StopAnimation()
0x4b9: Pop(0)
0x4ba: Return(); Pop(0)

0x4bb: GOTO 0x11d

0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: Call2 0x4c9

0x4bf: Pop(0)
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty(int, object)
0x4c3: Stack[-3] = Stack[-1]
0x4c4: Push(-2, 1); TaskCall(0)
0x4c5: Call2 0x0

0x4c6: Pop(-2, 1); TaskReturn
0x4c7: Pop(2)
0x4c8: Return(); Pop(0)

0x4c9: @ Hold()
0x4ca: Pop(0)
0x4cb: GOTO 0x4c9

0x4cc: Return(); Pop(0)

0x4cd: PushEmpty(bool, bool)
0x4ce: Push("cleanup") // @poff=156
0x4cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4d2: @ IsLoaded(Stack[-1])
0x4d3: Pop(0)
0x4d4: PushEmpty(bool)
0x4d5: Stack[-1] = (bool) 0
0x4d6: Pop(0); Push((bool) Stack[-2] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d8: PushEmpty(bool)
0x4d9: Call2 0x4f9

0x4da: Pop(0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Stack[-1] = (bool) 1
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: PushEmpty(object)
0x4df: Call2 0x5fd

0x4e0: Pop(0)
0x4e1: @ RemoveActor(Stack[-1])
0x4e2: Pop(1)
0x4e3: GOTO 0x4e8

0x4e4: Push("restore") // @poff=172
0x4e5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4e8: Return(); Pop(2)

0x4e9: PushEmpty(bool)
0x4ea: Stack[-1] = (bool) 0
0x4eb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ed: PushEmpty(bool)
0x4ee: Call2 0x4f9

0x4ef: Pop(0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f1: Stack[-1] = (bool) 1
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f3: PushEmpty(object)
0x4f4: Call2 0x5fd

0x4f5: Pop(0)
0x4f6: @ RemoveActor(Stack[-1])
0x4f7: Pop(1)
0x4f8: Return(); Pop(0)

0x4f9: Stack[-1] = (bool) 1
0x4fa: Return(); Pop(0)

0x4fb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4fc: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x4fd: Pop(0)
0x4fe: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x4ff: Pop(0)
0x500: Push(CvectorIndex(Stack[-8], 1))
0x501: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x502: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x503: @ GetPosition(Stack[-7])
0x504: Pop(0)
0x505: @ GetEyesHeight(Stack[-9])
0x506: Pop(0)
0x507: Push(CvectorIndex(Stack[-7], 1))
0x508: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x509: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x50a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x50b: Push(CvectorIndex(Stack[-6], 1))
0x50c: Stack[-1] = (int) 0
0x50d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x50e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x50f: Pop(1); Push(Sqrt(Stack[-1]))
0x510: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x511: Stack[-5] = -Stack[-6]; Pop(0);
0x512: Pop(0); Push(Stack[-6] * Stack[-19]);
0x513: PushEmpty(cvector, cvector)
0x514: Push([0.0, 1.0, 0.0])
0x515: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x516: Call2 0x603

0x517: Pop(1)
0x518: Push((int) 25)
0x519: Pop(2); Push(Stack[-2] * Stack[-1]);
0x51a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51b: Push([0.0, 10.0, 0.0])
0x51c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x51d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x51e: @ IsOverrideActive(Stack[-2])
0x51f: Pop(0)
0x520: Push(Stack[-2])
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-21] = (bool) 0
0x523: Return(); Pop(18)

0x524: @ StopWorld()
0x525: Pop(0)
0x526: @ CameraTransit(Stack[-3], Stack[-5])
0x527: Pop(0)
0x528: Push(CvectorIndex(Stack[-4], 0))
0x529: Push(CvectorIndex(Stack[-5], 2))
0x52a: @ Rotate(Stack[-2], Stack[-1])
0x52b: Pop(2)
0x52c: PushEmpty(bool)
0x52d: Call2 0x778

0x52e: Pop(0)
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: GOTO 0x539

0x531: Push("head") // @poff=214
0x532: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x533: Pop(1)
0x534: Push(Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x536: Push("head") // @poff=214
0x537: @ LookAsyncCamera(Stack[-1])
0x538: Pop(1)
0x539: @ CameraWaitForPlayFinish()
0x53a: Pop(0)
0x53b: @ ResumeWorld()
0x53c: Pop(0)
0x53d: Stack[-21] = (bool) 1
0x53e: Return(); Pop(18)

0x53f: PushEmpty(bool, bool)
0x540: @ CameraSwitchToNormal()
0x541: Pop(0)
0x542: PushEmpty(bool)
0x543: Call2 0x778

0x544: Pop(0)
0x545: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x546: GOTO 0x54f

0x547: Push("head") // @poff=214
0x548: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x549: Pop(1)
0x54a: Push(Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54c: Push("head") // @poff=214
0x54d: @ UnlookAsync(Stack[-1])
0x54e: Pop(1)
0x54f: Return(); Pop(2)

0x550: PushEmpty(int, int, int, int)
0x551: Push("voice_common") // @poff=224
0x552: @ GetVariable(Stack[-1], Stack[-3])
0x553: Pop(1)
0x554: Push(Stack[-2])
0x555: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x556: PushEmpty(bool, object)
0x557: Stack[-7] = Stack[-1]
0x558: Call2 0x58a

0x559: Pop(1)
0x55a: Pop(1); Push((bool) Stack[-1] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55c: PushEmpty(bool, object)
0x55d: Stack[-7] = Stack[-1]
0x55e: Call2 0x5af

0x55f: Pop(1)
0x560: Pop(1); Push((bool) Stack[-1] == 0)
0x561: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x562: Stack[-6] = (bool) 0
0x563: Return(); Pop(4)

0x564: Push((int) 2)
0x565: @ irand(Stack[-2], Stack[-1])
0x566: Pop(1)
0x567: Push(Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x569: Push("voice_common") // @poff=224
0x56a: Push((int) 1)
0x56b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x56c: Push((int) 3)
0x56d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x56e: @ SetVariable(Stack[-2], Stack[-1])
0x56f: Pop(2)
0x570: GOTO 0x575

0x571: Push("voice_common") // @poff=224
0x572: Push((int) 0)
0x573: @ SetVariable(Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: GOTO 0x588

0x576: PushEmpty(bool, object)
0x577: Stack[-7] = Stack[-1]
0x578: Call2 0x5af

0x579: Pop(1)
0x57a: Pop(1); Push((bool) Stack[-1] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57c: PushEmpty(bool, object)
0x57d: Stack[-7] = Stack[-1]
0x57e: Call2 0x58a

0x57f: Pop(1)
0x580: Pop(1); Push((bool) Stack[-1] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x582: Stack[-6] = (bool) 0
0x583: Return(); Pop(4)

0x584: Push("voice_common") // @poff=224
0x585: Push((int) 1)
0x586: @ SetVariable(Stack[-2], Stack[-1])
0x587: Pop(2)
0x588: Stack[-6] = (bool) 1
0x589: Return(); Pop(4)

0x58a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x58b: Stack[-5] = "c" // @poff=250
0x58c: Stack[-4] = (int) 0
0x58d: Push((int) 1)
0x58e: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58f: Push((int) 1)
0x590: Pop(1); Push(Stack[-5] + Stack[-1]);
0x591: Pop(1); Push(Stack[-6] + Stack[-1]);
0x592: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x593: Pop(1)
0x594: Pop(0); Push((bool) Stack[-3] == 0)
0x595: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x596: GOTO 0x59a

0x597: Push((int) 1)
0x598: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x599: GOTO 0x58d

0x59a: Pop(0); Push((bool) Stack[-4] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-12] = (bool) 0
0x59d: Return(); Pop(10)

0x59e: Stack[-2] = (int) 0
0x59f: Push((int) 1)
0x5a0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a2: @ irand(Stack[-2], Stack[-4])
0x5a3: Pop(0)
0x5a4: Push((int) 1)
0x5a5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5a6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a7: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x5a8: Pop(1)
0x5a9: PushEmpty(bool, string)
0x5aa: Stack[-3] = Stack[-1]
0x5ab: Call2 0x5e7

0x5ac: Stack[-2] = Stack[-14]
0x5ad: Pop(2)
0x5ae: Return(); Pop(10)

0x5af: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5b0: Push("d") // @poff=220
0x5b1: PushEmpty(int)
0x5b2: Call2 0x612

0x5b3: Pop(0)
0x5b4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5b5: Push("m") // @poff=278
0x5b6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5b7: Stack[-4] = (int) 0
0x5b8: Push((int) 1)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5ba: Push((int) 1)
0x5bb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5bc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5bd: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x5be: Pop(1)
0x5bf: Pop(0); Push((bool) Stack[-3] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: GOTO 0x5c5

0x5c2: Push((int) 1)
0x5c3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5c4: GOTO 0x5b8

0x5c5: Pop(0); Push((bool) Stack[-4] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-12] = (bool) 0
0x5c8: Return(); Pop(10)

0x5c9: Stack[-2] = (int) 0
0x5ca: Push((int) 1)
0x5cb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: @ irand(Stack[-2], Stack[-4])
0x5ce: Pop(0)
0x5cf: Push((int) 1)
0x5d0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5d1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d2: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x5d3: Pop(1)
0x5d4: PushEmpty(bool, string)
0x5d5: Stack[-3] = Stack[-1]
0x5d6: Call2 0x5e7

0x5d7: Stack[-2] = Stack[-14]
0x5d8: Pop(2)
0x5d9: Return(); Pop(10)

0x5da: PushEmpty(float, float, float, float)
0x5db: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5dc: Pop(0)
0x5dd: Push((bool) 0)
0x5de: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5df: Pop(1)
0x5e0: Return(); Pop(4)

0x5e1: PushEmpty(float, float, float, float)
0x5e2: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x5e3: Pop(0)
0x5e4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x5e5: Pop(0)
0x5e6: Return(); Pop(4)

0x5e7: PushEmpty(bool, bool)
0x5e8: PushEmpty(bool)
0x5e9: Call2 0x778

0x5ea: Pop(0)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5ec: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5ed: Pop(0)
0x5ee: Push(Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f0: @ lshPlaySpeech(Stack[-3])
0x5f1: Pop(0)
0x5f2: Stack[-4] = (bool) 1
0x5f3: Return(); Pop(2)

0x5f4: Stack[-4] = (bool) 0
0x5f5: Return(); Pop(2)

0x5f6: PushEmpty(bool)
0x5f7: Call2 0x778

0x5f8: Pop(0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: @ lshStopSpeech()
0x5fb: Pop(0)
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty(object, object)
0x5fe: @ self(Stack[-1])
0x5ff: Pop(0)
0x600: Stack[-1] = Stack[-3]
0x601: Return(); Pop(2)

0x602: Stack[-1] = 0
0x603: PushEmpty(float, float)
0x604: Pop(0); Push(Stack[-3] | Stack[-3]);
0x605: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x606: Push((float)9.999999974752427e-07)
0x607: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: Stack[-4] = [0.0, 0.0, 0.0]
0x60a: Return(); Pop(2)

0x60b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x60c: Return(); Pop(2)

0x60d: PushEmpty(int, int)
0x60e: @ GetVariable(Stack[-3], Stack[-1])
0x60f: Pop(0)
0x610: Stack[-1] = Stack[-4]
0x611: Return(); Pop(2)

0x612: PushEmpty(float, float)
0x613: @ GetGameTime(Stack[-1])
0x614: Pop(0)
0x615: Push((int) 1)
0x616: PushEmpty(int)
0x617: Push((int) 24)
0x618: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x619: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x61a: Return(); Pop(2)

0x61b: PushEmpty()
0x61c: Push("b12q01KlaraInSobor") // @poff=282
0x61d: Push((int) 1)
0x61e: @ SetVariable(Stack[-2], Stack[-1])
0x61f: Pop(2)
0x620: PushEmpty()
0x621: Call2 0x6c2

0x622: Pop(0)
0x623: Return(); Pop(0)

0x624: PushEmpty()
0x625: Push("oob12KlaraT2_1") // @poff=320
0x626: Push((int) 1)
0x627: @ SetVariable(Stack[-2], Stack[-1])
0x628: Pop(2)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: Push("b12q01KlaraVisit") // @poff=350
0x62c: Push((int) 1)
0x62d: @ SetVariable(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: Push("oob12KlaraT2_2") // @poff=384
0x632: Push((int) 1)
0x633: @ SetVariable(Stack[-2], Stack[-1])
0x634: Pop(2)
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: Push("oob12KlaraT2_3") // @poff=414
0x638: Push((int) 1)
0x639: @ SetVariable(Stack[-2], Stack[-1])
0x63a: Pop(2)
0x63b: Return(); Pop(0)

0x63c: PushEmpty()
0x63d: PushEmpty(int, string)
0x63e: Stack[-1] = "b12q01_Klara" // @poff=444
0x63f: Call2 0x60d

0x640: Pop(1)
0x641: Push((int) 0)
0x642: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x644: Push("b12q01_Klara") // @poff=444
0x645: Push((int) 1)
0x646: @ SetVariable(Stack[-2], Stack[-1])
0x647: Pop(2)
0x648: PushEmpty()
0x649: Call2 0x6cf

0x64a: Pop(0)
0x64b: Return(); Pop(0)

0x64c: PushEmpty()
0x64d: Push("oob12KlaraT2_4") // @poff=470
0x64e: Push((int) 1)
0x64f: @ SetVariable(Stack[-2], Stack[-1])
0x650: Pop(2)
0x651: Return(); Pop(0)

0x652: PushEmpty()
0x653: PushEmpty(int, string)
0x654: Stack[-1] = "oob12KlaraT2_1" // @poff=320
0x655: Call2 0x60d

0x656: Pop(1)
0x657: Push((int) 0)
0x658: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65a: Stack[-2] = (bool) 1
0x65b: Return(); Pop(0)

0x65c: Stack[-2] = (bool) 0
0x65d: Return(); Pop(0)

0x65e: PushEmpty()
0x65f: PushEmpty(int, string)
0x660: Stack[-1] = "b12q01ChildsAreVisited" // @poff=500
0x661: Call2 0x60d

0x662: Pop(1)
0x663: Push((int) 0)
0x664: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: Stack[-2] = (bool) 1
0x667: Return(); Pop(0)

0x668: Stack[-2] = (bool) 0
0x669: Return(); Pop(0)

0x66a: PushEmpty()
0x66b: PushEmpty(int, string)
0x66c: Stack[-1] = "b12q01TheaterIsVisited" // @poff=546
0x66d: Call2 0x60d

0x66e: Pop(1)
0x66f: Push((int) 0)
0x670: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-2] = (bool) 1
0x673: Return(); Pop(0)

0x674: Stack[-2] = (bool) 0
0x675: Return(); Pop(0)

0x676: PushEmpty()
0x677: PushEmpty(int, string)
0x678: Stack[-1] = "oob12KlaraT2_2" // @poff=384
0x679: Call2 0x60d

0x67a: Pop(1)
0x67b: Push((int) 0)
0x67c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67e: Stack[-2] = (bool) 1
0x67f: Return(); Pop(0)

0x680: Stack[-2] = (bool) 0
0x681: Return(); Pop(0)

0x682: PushEmpty()
0x683: PushEmpty(int, string)
0x684: Stack[-1] = "oob12KlaraT2_3" // @poff=414
0x685: Call2 0x60d

0x686: Pop(1)
0x687: Push((int) 0)
0x688: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68a: Stack[-2] = (bool) 1
0x68b: Return(); Pop(0)

0x68c: Stack[-2] = (bool) 0
0x68d: Return(); Pop(0)

0x68e: PushEmpty()
0x68f: PushEmpty(int, string)
0x690: Stack[-1] = "game_final" // @poff=592
0x691: Call2 0x60d

0x692: Pop(1)
0x693: Push((int) 0)
0x694: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-2] = (bool) 1
0x697: Return(); Pop(0)

0x698: Stack[-2] = (bool) 0
0x699: Return(); Pop(0)

0x69a: PushEmpty()
0x69b: PushEmpty(bool, object)
0x69c: Stack[-3] = Stack[-1]
0x69d: Call2 0x6bc

0x69e: Pop(1)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x6a0: Stack[-2] = (bool) 1
0x6a1: Return(); Pop(0)

0x6a2: Stack[-2] = (bool) 0
0x6a3: Return(); Pop(0)

0x6a4: PushEmpty()
0x6a5: PushEmpty(int, string)
0x6a6: Stack[-1] = "b12q01KlaraInSobor" // @poff=282
0x6a7: Call2 0x60d

0x6a8: Pop(1)
0x6a9: Push((int) 0)
0x6aa: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ac: Stack[-2] = (bool) 1
0x6ad: Return(); Pop(0)

0x6ae: Stack[-2] = (bool) 0
0x6af: Return(); Pop(0)

0x6b0: PushEmpty()
0x6b1: PushEmpty(int, string)
0x6b2: Stack[-1] = "oob12KlaraT2_4" // @poff=470
0x6b3: Call2 0x60d

0x6b4: Pop(1)
0x6b5: Push((int) 0)
0x6b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-2] = (bool) 1
0x6b9: Return(); Pop(0)

0x6ba: Stack[-2] = (bool) 0
0x6bb: Return(); Pop(0)

0x6bc: PushEmpty()
0x6bd: PushEmpty(bool)
0x6be: Call2 0x74a

0x6bf: Stack[-1] = Stack[-3]
0x6c0: Pop(1)
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty(object, object)
0x6c3: Push((int) 615)
0x6c4: Push((int) 1)
0x6c5: Push((int) 532004)
0x6c6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: PushEmpty(bool, object, int)
0x6c9: Stack[-4] = Stack[-2]
0x6ca: Stack[-1] = (int) 613
0x6cb: Call2 0x6e9

0x6cc: Pop(3)
0x6cd: Return(); Pop(2)

0x6ce: Stack[-1] = 0
0x6cf: PushEmpty(object, object)
0x6d0: Push((int) 696)
0x6d1: Push((int) 1)
0x6d2: Push((int) 535404)
0x6d3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6d4: Pop(3)
0x6d5: PushEmpty(bool, object, int)
0x6d6: Stack[-4] = Stack[-2]
0x6d7: Stack[-1] = (int) 613
0x6d8: Call2 0x6e9

0x6d9: Pop(3)
0x6da: Return(); Pop(2)

0x6db: Stack[-1] = 0
0x6dc: PushEmpty(object, object)
0x6dd: @ GetDiaryRoot(Stack[-1])
0x6de: Pop(0)
0x6df: Pop(0); Push((bool) Stack[-1] == 0)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e1: Push("Can't retrieve diary root") // @poff=614
0x6e2: @ Trace(Stack[-1])
0x6e3: Pop(1)
0x6e4: Stack[-3] = (bool) 0
0x6e5: Return(); Pop(2)

0x6e6: Stack[-1] = Stack[-3]
0x6e7: Return(); Pop(2)

0x6e8: Stack[-1] = 0
0x6e9: PushEmpty(object, object, int, object, object, int)
0x6ea: PushEmpty(object)
0x6eb: Call2 0x6dc

0x6ec: Stack[-1] = Stack[-4]
0x6ed: Pop(1)
0x6ee: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=666
0x6ef: Pop(0)
0x6f0: Pop(0); Push((bool) Stack[-2] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f2: Push("Can't find diary parent with id: ") // @poff=671
0x6f3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6f4: @ Trace(Stack[-1])
0x6f5: Pop(1)
0x6f6: Stack[-9] = (bool) 0
0x6f7: Return(); Pop(6)

0x6f8: @@ AddChild(Stack[-8]); Obj=2 // @poff=739
0x6f9: Pop(0)
0x6fa: Push((int) 7)
0x6fb: @ SendWorldWndMessage(Stack[-1])
0x6fc: Pop(1)
0x6fd: @@ GetCategory(Stack[-1]); Obj=8 // @poff=748
0x6fe: Pop(0)
0x6ff: @ SetDiarySection(Stack[-1])
0x700: Pop(0)
0x701: Stack[-9] = (bool) 0
0x702: Return(); Pop(6)

0x703: Stack[-2] = 0
0x704: Stack[-3] = 0
0x705: PushEmpty(int, int)
0x706: Push("branch") // @poff=760
0x707: @ GetVariable(Stack[-1], Stack[-2])
0x708: Pop(1)
0x709: Push((int) 0)
0x70a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70c: Stack[-3] = (int) 1
0x70d: Return(); Pop(2)

0x70e: GOTO 0x714

0x70f: Push((int) 1)
0x710: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x712: Stack[-3] = (int) 2
0x713: Return(); Pop(2)

0x714: Stack[-3] = (int) 3
0x715: Return(); Pop(2)

0x716: PushEmpty()
0x717: Push((int) 7)
0x718: @@ add(Stack[-1]); Obj=4 // @poff=774
0x719: Pop(1)
0x71a: Push((int) 23)
0x71b: @@ add(Stack[-1]); Obj=4 // @poff=774
0x71c: Pop(1)
0x71d: Push((int) 21)
0x71e: @@ add(Stack[-1]); Obj=4 // @poff=774
0x71f: Pop(1)
0x720: Push((int) 9)
0x721: @@ add(Stack[-1]); Obj=4 // @poff=774
0x722: Pop(1)
0x723: Push((int) 3)
0x724: @@ add(Stack[-1]); Obj=4 // @poff=774
0x725: Pop(1)
0x726: Push((int) 1)
0x727: @@ add(Stack[-1]); Obj=4 // @poff=774
0x728: Pop(1)
0x729: Push((int) 11)
0x72a: @@ add(Stack[-1]); Obj=4 // @poff=774
0x72b: Pop(1)
0x72c: Push((int) 13)
0x72d: @@ add(Stack[-1]); Obj=4 // @poff=774
0x72e: Pop(1)
0x72f: Push((bool) 0)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x732: Push((int) 25)
0x733: @@ add(Stack[-1]); Obj=4 // @poff=774
0x734: Pop(1)
0x735: Return(); Pop(0)

0x736: PushEmpty(int, int)
0x737: Push("vol_") // @poff=778
0x738: Pop(1); Push(Stack[-1] + Stack[-4]);
0x739: @ GetVariable(Stack[-1], Stack[-2])
0x73a: Pop(1)
0x73b: Push((int) 4)
0x73c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x73d: Push((int) 0)
0x73e: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x73f: Return(); Pop(2)

0x740: PushEmpty(int, int)
0x741: Push("vol_") // @poff=778
0x742: Pop(1); Push(Stack[-1] + Stack[-4]);
0x743: @ GetVariable(Stack[-1], Stack[-2])
0x744: Pop(1)
0x745: Push((int) 16)
0x746: Pop(1); Push(Stack[-2] & Stack[-1]);
0x747: Push((int) 0)
0x748: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x749: Return(); Pop(2)

0x74a: PushEmpty(object, int, int, int, object, int, int, int)
0x74b: @ CreateIntVector(Stack[-4])
0x74c: Pop(0)
0x74d: PushEmpty(object, bool, int)
0x74e: Stack[-7] = Stack[-3]
0x74f: Stack[-2] = (bool) 0
0x750: Stack[-1] = (int) -1
0x751: Call2 0x716

0x752: Pop(3)
0x753: @@ size(Stack[-3]); Obj=4 // @poff=788
0x754: Pop(0)
0x755: Stack[-2] = (int) 0
0x756: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x757: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x758: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=793
0x759: Pop(0)
0x75a: PushEmpty(bool)
0x75b: Stack[-1] = (bool) 1
0x75c: PushEmpty(bool, int)
0x75d: Stack[-4] = Stack[-1]
0x75e: Call2 0x740

0x75f: Pop(1)
0x760: IF (Stack[-1] == 1) GOTO 0x767; Pop(1)

0x761: PushEmpty(bool, int)
0x762: Stack[-4] = Stack[-1]
0x763: Call2 0x736

0x764: Pop(1)
0x765: IF (Stack[-1] == 1) GOTO 0x767; Pop(1)

0x766: Stack[-1] = (bool) 0
0x767: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x768: Stack[-9] = (bool) 0
0x769: Return(); Pop(8)

0x76a: Push((int) 1)
0x76b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x76c: GOTO 0x756

0x76d: Stack[-9] = (bool) 1
0x76e: Return(); Pop(8)

0x76f: Stack[-4] = 0
0x770: Stack[-1] = (int) 515540
0x771: Return(); Pop(0)

0x772: Stack[-1] = (int) 502865
0x773: Return(); Pop(0)

0x774: Stack[-1] = "ui/NPC_Klara.png" // @poff=797
0x775: Return(); Pop(0)

0x776: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=831
0x777: Return(); Pop(0)

0x778: Stack[-1] = (bool) 1
0x779: Return(); Pop(0)

