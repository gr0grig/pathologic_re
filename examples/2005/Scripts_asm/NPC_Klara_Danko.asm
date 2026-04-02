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
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
	W:ook6Danko1
	W:quest_k6_01
	W:teleport
	W:completed
	W:ook7Danko1
	W:money1000 is given
	W:playsound
	W:givemoney
	W:k12q01DankoInSobor
	W:k12q01_Danko
	W:ook12Danko1
	W:k5q04
	W:game_final
	W:k7q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:vol_
	A:size
	A:get
	W:mt_danko
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f7065727479006d000000616464006d006f006e006500790000004d006f006e00650079000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e00670000006f006f006b003600440061006e006b006f0031000000710075006500730074005f006b0036005f00300031000000740065006c00650070006f0072007400000063006f006d0070006c00650074006500640000006f006f006b003700440061006e006b006f00310000006d006f006e00650079003100300030003000200069007300200067006900760065006e00000070006c006100790073006f0075006e006400000067006900760065006d006f006e006500790000006b0031003200710030003100440061006e006b006f0049006e0053006f0062006f00720000006b00310032007100300031005f00440061006e006b006f0000006f006f006b0031003200440061006e006b006f00310000006b0035007100300034000000670061006d0065005f00660069006e0061006c0000006b0037007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e0063006800000076006f006c005f00000073697a6500676574006d0074005f00640061006e006b006f000000
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

RunOp = 0x7be
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1c5 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x325 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x498 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x641 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x794 Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x80d Vars = (int)
		EVENT_6 Op = 0x833 Vars = ()
		EVENT_5 Op = 0x842 Vars = ()
		EVENT_45 Op = 0x84f Vars = (bool)
		EVENT_0 Op = 0x85b Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x8e6

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
0x11: Call2 0x9ed

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x940

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x8eb

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xa56

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xa54

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xa58

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xa5a

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xb74

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
0x55: Call2 0x92f

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
0x68: Push((int) 525474)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525475)
0x6e: Push((int) 27554)
0x6f: Push((int) 26831)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 526277)
0x73: Push((int) 27557)
0x74: Push((int) 27553)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0xa5c

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x9ca

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
0x9a: Call2 0xa5c

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
0xaa: Call2 0x9d1

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x9e6

0xb3: Pop(0)
0xb4: Push((int) 26830)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525474)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 525475)
0xc1: Push((int) 27554)
0xc2: Push((int) 26831)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 526277)
0xc6: Push((int) 27557)
0xc7: Push((int) 27553)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 27554)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 526278)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 526279)
0xd8: Push((int) 27557)
0xd9: Push((int) 27555)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 526280)
0xdd: Push((int) 27557)
0xde: Push((int) 27556)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 27557)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0x98

0xe8: Pop(1)
0xe9: Push((int) 526281)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 526282)
0xef: Push((int) -1)
0xf0: Push((int) 27560)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Push((int) 526283)
0xf4: Push((int) -1)
0xf5: Push((int) 27561)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfa: PushEmpty(bool)
0xfb: Call2 0xa5c

0xfc: Pop(0)
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: @ lshStopAnimation()
0xff: Pop(0)
0x100: GOTO 0x103

0x101: @ StopAnimation()
0x102: Pop(0)
0x103: Return(); Pop(0)

0x104: GOTO 0xaf

0x105: Return(); Pop(0)

0x106: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x107: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x108: PushEmpty(bool, object)
0x109: PushEmpty(object)
0x10a: Call2 0x9ed

0x10b: Stack[-1] = Stack[-2]
0x10c: Pop(1)
0x10d: Call2 0x940

0x10e: Pop(2)
0x10f: PushEmpty(bool, object, float)
0x110: Stack[-12] = Stack[-2]
0x111: Stack[-1] = (float) 70.0
0x112: Call2 0x8eb

0x113: Pop(2)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-10] = (int) -2
0x117: Return(); Pop(8)

0x118: @ CreateDialog(Stack[-4])
0x119: Pop(0)
0x11a: PushEmpty(int)
0x11b: Call2 0xa56

0x11c: Pop(0)
0x11d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11e: Pop(1)
0x11f: PushEmpty(int)
0x120: Call2 0xa54

0x121: Pop(0)
0x122: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x123: Pop(1)
0x124: PushEmpty(string)
0x125: Call2 0xa58

0x126: Pop(0)
0x127: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x128: Pop(1)
0x129: PushEmpty(string)
0x12a: Call2 0xa5a

0x12b: Pop(0)
0x12c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x12d: Pop(1)
0x12e: PushEmpty(int)
0x12f: Call2 0xb74

0x130: Pop(0)
0x131: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x132: Pop(1)
0x133: Stack[-2] = (int) -1
0x134: @ IsOverrideActive(Stack[-3])
0x135: Pop(0)
0x136: Push(Stack[-3])
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-10] = (int) -2
0x139: Return(); Pop(8)

0x13a: @ DoDialog(Stack[-4])
0x13b: Pop(0)
0x13c: PushEmpty(object, object)
0x13d: Stack[-11] = Stack[-2]
0x13e: Stack[-6] = Stack[-1]
0x13f: Push(-2, 4); TaskCall(4)
0x140: Call2 0x157

0x141: Pop(-2, 4); TaskReturn
0x142: Pop(2)
0x143: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: @ sync()
0x148: Pop(0)
0x149: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14a: Pop(0)
0x14b: GOTO 0x145

0x14c: PushEmpty(object)
0x14d: Stack[-10] = Stack[-1]
0x14e: Call2 0x92f

0x14f: Pop(1)
0x150: @ StopDialog(Stack[-4])
0x151: Pop(0)
0x152: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x153: Pop(0)
0x154: Stack[-2] = Stack[-10]
0x155: Return(); Pop(8)

0x156: Stack[-4] = 0
0x157: PushEmpty()
0x158: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x159: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x15a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15b: Push((int) 1)
0x15c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0xac9

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0xa5e

0x166: Pop(2)
0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x1af

0x16a: Pop(1)
0x16b: Push((int) 526097)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 526098)
0x171: Push((int) 27386)
0x172: Push((int) 27384)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 526099)
0x176: Push((int) 27386)
0x177: Push((int) 27385)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x191

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral" // @poff=89
0x17d: Call2 0x1af

0x17e: Pop(1)
0x17f: Push((int) 526107)
0x180: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x181: Pop(1)
0x182: @@@ ClearReplies(); Obj=0 // @poff=116
0x183: Pop(0)
0x184: Push((int) 526108)
0x185: Push((int) -1)
0x186: Push((int) 27395)
0x187: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x188: Pop(3)
0x189: Push((int) 528917)
0x18a: Push((int) -1)
0x18b: Push((int) 30347)
0x18c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18d: Pop(3)
0x18e: GOTO 0x191

0x18f: Return(); Pop(0)

0x190: GOTO 0x15b

0x191: PushEmpty(bool)
0x192: Call2 0xa5c

0x193: Pop(0)
0x194: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x195: @ lshWaitForAnimEnd()
0x196: Pop(0)
0x197: Push( Stack[3 + Tasks[-1].StackPointer] )
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x19f

0x19a: PushEmpty(string)
0x19b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x19c: Call2 0x9ca

0x19d: Pop(1)
0x19e: GOTO 0x195

0x19f: GOTO 0x1ae

0x1a0: Push("all") // @poff=138
0x1a1: Push("idle") // @poff=146
0x1a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: @ WaitForAnimEnd()
0x1a5: Pop(0)
0x1a6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: GOTO 0x1ae

0x1a9: Push("all") // @poff=138
0x1aa: Push("idle") // @poff=146
0x1ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ac: Pop(2)
0x1ad: GOTO 0x1a4

0x1ae: Return(); Pop(0)

0x1af: PushEmpty()
0x1b0: PushEmpty(bool)
0x1b1: Call2 0xa5c

0x1b2: Pop(0)
0x1b3: Pop(1); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Return(); Pop(0)

0x1b6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Return(); Pop(0)

0x1b9: PushEmpty(string, bool)
0x1ba: Stack[-3] = Stack[-2]
0x1bb: Push("") // @poff=102
0x1bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1be: Stack[-1] = (bool) 0
0x1bf: GOTO 0x1c1

0x1c0: Stack[-1] = (bool) 1
0x1c1: Call2 0x9d1

0x1c2: Pop(2)
0x1c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: Push((int) 1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x1c8: PushEmpty()
0x1c9: Call2 0x9e6

0x1ca: Pop(0)
0x1cb: Push((int) 27393)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0xa64

0x1d2: Pop(2)
0x1d3: PushEmpty(object, object)
0x1d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d6: Call2 0xa6b

0x1d7: Pop(2)
0x1d8: Push((int) 27390)
0x1d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1db: PushEmpty(object, object)
0x1dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1de: Call2 0xa64

0x1df: Pop(2)
0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0xa6b

0x1e4: Pop(2)
0x1e5: Push((int) 27383)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x1e8: PushEmpty(bool, object)
0x1e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Call2 0xac9

0x1eb: Pop(1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1ed: PushEmpty(object, object)
0x1ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f0: Call2 0xa5e

0x1f1: Pop(2)
0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Neutral" // @poff=89
0x1f4: Call2 0x1af

0x1f5: Pop(1)
0x1f6: Push((int) 526097)
0x1f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f8: Pop(1)
0x1f9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fa: Pop(0)
0x1fb: Push((int) 526098)
0x1fc: Push((int) 27386)
0x1fd: Push((int) 27384)
0x1fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ff: Pop(3)
0x200: Push((int) 526099)
0x201: Push((int) 27386)
0x202: Push((int) 27385)
0x203: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral" // @poff=89
0x208: Call2 0x1af

0x209: Pop(1)
0x20a: Push((int) 526107)
0x20b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20c: Pop(1)
0x20d: @@@ ClearReplies(); Obj=0 // @poff=116
0x20e: Pop(0)
0x20f: Push((int) 526108)
0x210: Push((int) -1)
0x211: Push((int) 27395)
0x212: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x213: Pop(3)
0x214: Push((int) 528917)
0x215: Push((int) -1)
0x216: Push((int) 30347)
0x217: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Push((int) 27386)
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Neutral" // @poff=89
0x21f: Call2 0x1af

0x220: Pop(1)
0x221: Push((int) 526100)
0x222: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x223: Pop(1)
0x224: @@@ ClearReplies(); Obj=0 // @poff=116
0x225: Pop(0)
0x226: Push((int) 526101)
0x227: Push((int) 27388)
0x228: Push((int) 27387)
0x229: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Push((int) 27388)
0x22d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral" // @poff=89
0x231: Call2 0x1af

0x232: Pop(1)
0x233: Push((int) 526102)
0x234: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x235: Pop(1)
0x236: @@@ ClearReplies(); Obj=0 // @poff=116
0x237: Pop(0)
0x238: Push((int) 526103)
0x239: Push((int) 27392)
0x23a: Push((int) 27389)
0x23b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23c: Pop(3)
0x23d: Push((int) 526104)
0x23e: Push((int) -1)
0x23f: Push((int) 27390)
0x240: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 27392)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral" // @poff=89
0x248: Call2 0x1af

0x249: Pop(1)
0x24a: Push((int) 526105)
0x24b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24c: Pop(1)
0x24d: @@@ ClearReplies(); Obj=0 // @poff=116
0x24e: Pop(0)
0x24f: Push((int) 526106)
0x250: Push((int) -1)
0x251: Push((int) 27393)
0x252: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x256: PushEmpty(bool)
0x257: Call2 0xa5c

0x258: Pop(0)
0x259: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25a: @ lshStopAnimation()
0x25b: Pop(0)
0x25c: GOTO 0x25f

0x25d: @ StopAnimation()
0x25e: Pop(0)
0x25f: Return(); Pop(0)

0x260: GOTO 0x1c6

0x261: Return(); Pop(0)

0x262: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x263: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x264: PushEmpty(bool, object)
0x265: PushEmpty(object)
0x266: Call2 0x9ed

0x267: Stack[-1] = Stack[-2]
0x268: Pop(1)
0x269: Call2 0x940

0x26a: Pop(2)
0x26b: PushEmpty(bool, object, float)
0x26c: Stack[-12] = Stack[-2]
0x26d: Stack[-1] = (float) 70.0
0x26e: Call2 0x8eb

0x26f: Pop(2)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-10] = (int) -2
0x273: Return(); Pop(8)

0x274: @ CreateDialog(Stack[-4])
0x275: Pop(0)
0x276: PushEmpty(int)
0x277: Call2 0xa56

0x278: Pop(0)
0x279: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x27a: Pop(1)
0x27b: PushEmpty(int)
0x27c: Call2 0xa54

0x27d: Pop(0)
0x27e: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x27f: Pop(1)
0x280: PushEmpty(string)
0x281: Call2 0xa58

0x282: Pop(0)
0x283: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x284: Pop(1)
0x285: PushEmpty(string)
0x286: Call2 0xa5a

0x287: Pop(0)
0x288: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x289: Pop(1)
0x28a: PushEmpty(int)
0x28b: Call2 0xb74

0x28c: Pop(0)
0x28d: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x28e: Pop(1)
0x28f: Stack[-2] = (int) -1
0x290: @ IsOverrideActive(Stack[-3])
0x291: Pop(0)
0x292: Push(Stack[-3])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-10] = (int) -2
0x295: Return(); Pop(8)

0x296: @ DoDialog(Stack[-4])
0x297: Pop(0)
0x298: PushEmpty(object, object)
0x299: Stack[-11] = Stack[-2]
0x29a: Stack[-6] = Stack[-1]
0x29b: Push(-2, 4); TaskCall(6)
0x29c: Call2 0x2b3

0x29d: Pop(-2, 4); TaskReturn
0x29e: Pop(2)
0x29f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2a0: Pop(0)
0x2a1: Pop(0); Push((bool) Stack[-1] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: @ sync()
0x2a4: Pop(0)
0x2a5: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2a6: Pop(0)
0x2a7: GOTO 0x2a1

0x2a8: PushEmpty(object)
0x2a9: Stack[-10] = Stack[-1]
0x2aa: Call2 0x92f

0x2ab: Pop(1)
0x2ac: @ StopDialog(Stack[-4])
0x2ad: Pop(0)
0x2ae: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x2af: Pop(0)
0x2b0: Stack[-2] = Stack[-10]
0x2b1: Return(); Pop(8)

0x2b2: Stack[-4] = 0
0x2b3: PushEmpty()
0x2b4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2b5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2b7: Push((int) 1)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2b9: PushEmpty(bool)
0x2ba: Stack[-1] = (bool) 0
0x2bb: PushEmpty(bool, object)
0x2bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bd: Call2 0xad5

0x2be: Pop(1)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Call2 0xae1

0x2c3: Pop(1)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Stack[-1] = (bool) 1
0x2c6: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2c7: PushEmpty(object, object)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0xa75

0x2cb: Pop(2)
0x2cc: PushEmpty(string)
0x2cd: Stack[-1] = "Neutral" // @poff=89
0x2ce: Call2 0x30f

0x2cf: Pop(1)
0x2d0: Push((int) 526118)
0x2d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d2: Pop(1)
0x2d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d4: Pop(0)
0x2d5: Push((int) 528252)
0x2d6: Push((int) 29614)
0x2d7: Push((int) 29613)
0x2d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d9: Pop(3)
0x2da: Push((int) 528256)
0x2db: Push((int) 29614)
0x2dc: Push((int) 29617)
0x2dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2de: Pop(3)
0x2df: GOTO 0x2f1

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral" // @poff=89
0x2e2: Call2 0x30f

0x2e3: Pop(1)
0x2e4: Push((int) 526120)
0x2e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e6: Pop(1)
0x2e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e8: Pop(0)
0x2e9: Push((int) 526121)
0x2ea: Push((int) -1)
0x2eb: Push((int) 27400)
0x2ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ed: Pop(3)
0x2ee: GOTO 0x2f1

0x2ef: Return(); Pop(0)

0x2f0: GOTO 0x2b7

0x2f1: PushEmpty(bool)
0x2f2: Call2 0xa5c

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f5: @ lshWaitForAnimEnd()
0x2f6: Pop(0)
0x2f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f9: GOTO 0x2ff

0x2fa: PushEmpty(string)
0x2fb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2fc: Call2 0x9ca

0x2fd: Pop(1)
0x2fe: GOTO 0x2f5

0x2ff: GOTO 0x30e

0x300: Push("all") // @poff=138
0x301: Push("idle") // @poff=146
0x302: @ PlayAnimation(Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: @ WaitForAnimEnd()
0x305: Pop(0)
0x306: Push( Stack[3 + Tasks[-1].StackPointer] )
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: GOTO 0x30e

0x309: Push("all") // @poff=138
0x30a: Push("idle") // @poff=146
0x30b: @ PlayAnimation(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: GOTO 0x304

0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: PushEmpty(bool)
0x311: Call2 0xa5c

0x312: Pop(0)
0x313: Pop(1); Push((bool) Stack[-1] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Return(); Pop(0)

0x316: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: Return(); Pop(0)

0x319: PushEmpty(string, bool)
0x31a: Stack[-3] = Stack[-2]
0x31b: Push("") // @poff=102
0x31c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-1] = (bool) 0
0x31f: GOTO 0x321

0x320: Stack[-1] = (bool) 1
0x321: Call2 0x9d1

0x322: Pop(2)
0x323: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x324: Return(); Pop(0)

0x325: PushEmpty()
0x326: Push((int) 1)
0x327: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x328: PushEmpty()
0x329: Call2 0x9e6

0x32a: Pop(0)
0x32b: Push((int) 27398)
0x32c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x32e: PushEmpty(object, object)
0x32f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x330: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x331: Call2 0xa7b

0x332: Pop(2)
0x333: PushEmpty(object, object)
0x334: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x335: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x336: Call2 0xa85

0x337: Pop(2)
0x338: Push((int) 27397)
0x339: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x33b: PushEmpty(bool)
0x33c: Stack[-1] = (bool) 0
0x33d: PushEmpty(bool, object)
0x33e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33f: Call2 0xad5

0x340: Pop(1)
0x341: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x342: PushEmpty(bool, object)
0x343: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x344: Call2 0xae1

0x345: Pop(1)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: Stack[-1] = (bool) 1
0x348: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x349: PushEmpty(object, object)
0x34a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34c: Call2 0xa75

0x34d: Pop(2)
0x34e: PushEmpty(string)
0x34f: Stack[-1] = "Neutral" // @poff=89
0x350: Call2 0x30f

0x351: Pop(1)
0x352: Push((int) 526118)
0x353: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x354: Pop(1)
0x355: @@@ ClearReplies(); Obj=0 // @poff=116
0x356: Pop(0)
0x357: Push((int) 528252)
0x358: Push((int) 29614)
0x359: Push((int) 29613)
0x35a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35b: Pop(3)
0x35c: Push((int) 528256)
0x35d: Push((int) 29614)
0x35e: Push((int) 29617)
0x35f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x360: Pop(3)
0x361: Return(); Pop(0)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral" // @poff=89
0x364: Call2 0x30f

0x365: Pop(1)
0x366: Push((int) 526120)
0x367: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x368: Pop(1)
0x369: @@@ ClearReplies(); Obj=0 // @poff=116
0x36a: Pop(0)
0x36b: Push((int) 526121)
0x36c: Push((int) -1)
0x36d: Push((int) 27400)
0x36e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Push((int) 29614)
0x372: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x374: PushEmpty(string)
0x375: Stack[-1] = "Neutral" // @poff=89
0x376: Call2 0x30f

0x377: Pop(1)
0x378: Push((int) 528253)
0x379: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37a: Pop(1)
0x37b: @@@ ClearReplies(); Obj=0 // @poff=116
0x37c: Pop(0)
0x37d: Push((int) 528254)
0x37e: Push((int) 29616)
0x37f: Push((int) 29615)
0x380: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x381: Pop(3)
0x382: Push((int) 528257)
0x383: Push((int) 29616)
0x384: Push((int) 29619)
0x385: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: Push((int) 29616)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Neutral" // @poff=89
0x38d: Call2 0x30f

0x38e: Pop(1)
0x38f: Push((int) 528255)
0x390: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x391: Pop(1)
0x392: @@@ ClearReplies(); Obj=0 // @poff=116
0x393: Pop(0)
0x394: Push((int) 526119)
0x395: Push((int) -1)
0x396: Push((int) 27398)
0x397: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x39b: PushEmpty(bool)
0x39c: Call2 0xa5c

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39f: @ lshStopAnimation()
0x3a0: Pop(0)
0x3a1: GOTO 0x3a4

0x3a2: @ StopAnimation()
0x3a3: Pop(0)
0x3a4: Return(); Pop(0)

0x3a5: GOTO 0x326

0x3a6: Return(); Pop(0)

0x3a7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3a8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3a9: PushEmpty(bool, object)
0x3aa: PushEmpty(object)
0x3ab: Call2 0x9ed

0x3ac: Stack[-1] = Stack[-2]
0x3ad: Pop(1)
0x3ae: Call2 0x940

0x3af: Pop(2)
0x3b0: PushEmpty(bool, object, float)
0x3b1: Stack[-12] = Stack[-2]
0x3b2: Stack[-1] = (float) 70.0
0x3b3: Call2 0x8eb

0x3b4: Pop(2)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-10] = (int) -2
0x3b8: Return(); Pop(8)

0x3b9: @ CreateDialog(Stack[-4])
0x3ba: Pop(0)
0x3bb: PushEmpty(int)
0x3bc: Call2 0xa56

0x3bd: Pop(0)
0x3be: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x3bf: Pop(1)
0x3c0: PushEmpty(int)
0x3c1: Call2 0xa54

0x3c2: Pop(0)
0x3c3: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x3c4: Pop(1)
0x3c5: PushEmpty(string)
0x3c6: Call2 0xa58

0x3c7: Pop(0)
0x3c8: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x3c9: Pop(1)
0x3ca: PushEmpty(string)
0x3cb: Call2 0xa5a

0x3cc: Pop(0)
0x3cd: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x3ce: Pop(1)
0x3cf: PushEmpty(int)
0x3d0: Call2 0xb74

0x3d1: Pop(0)
0x3d2: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x3d3: Pop(1)
0x3d4: Stack[-2] = (int) -1
0x3d5: @ IsOverrideActive(Stack[-3])
0x3d6: Pop(0)
0x3d7: Push(Stack[-3])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-10] = (int) -2
0x3da: Return(); Pop(8)

0x3db: @ DoDialog(Stack[-4])
0x3dc: Pop(0)
0x3dd: PushEmpty(object, object)
0x3de: Stack[-11] = Stack[-2]
0x3df: Stack[-6] = Stack[-1]
0x3e0: Push(-2, 4); TaskCall(8)
0x3e1: Call2 0x3f8

0x3e2: Pop(-2, 4); TaskReturn
0x3e3: Pop(2)
0x3e4: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e5: Pop(0)
0x3e6: Pop(0); Push((bool) Stack[-1] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e8: @ sync()
0x3e9: Pop(0)
0x3ea: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3eb: Pop(0)
0x3ec: GOTO 0x3e6

0x3ed: PushEmpty(object)
0x3ee: Stack[-10] = Stack[-1]
0x3ef: Call2 0x92f

0x3f0: Pop(1)
0x3f1: @ StopDialog(Stack[-4])
0x3f2: Pop(0)
0x3f3: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x3f4: Pop(0)
0x3f5: Stack[-2] = Stack[-10]
0x3f6: Return(); Pop(8)

0x3f7: Stack[-4] = 0
0x3f8: PushEmpty()
0x3f9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3fa: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3fb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3fc: Push((int) 1)
0x3fd: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x3fe: PushEmpty(bool)
0x3ff: Stack[-1] = (bool) 0
0x400: PushEmpty(bool, object)
0x401: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x402: Call2 0xab3

0x403: Pop(1)
0x404: Pop(1); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x406: PushEmpty(bool, object)
0x407: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x408: Call2 0xaf9

0x409: Pop(1)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Stack[-1] = (bool) 1
0x40c: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x40d: PushEmpty(object, object)
0x40e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x410: Call2 0xaa4

0x411: Pop(2)
0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral" // @poff=89
0x414: Call2 0x482

0x415: Pop(1)
0x416: Push((int) 539339)
0x417: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x418: Pop(1)
0x419: @@@ ClearReplies(); Obj=0 // @poff=116
0x41a: Pop(0)
0x41b: Push((int) 539340)
0x41c: Push((int) 41285)
0x41d: Push((int) 41284)
0x41e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41f: Pop(3)
0x420: Push((int) 539351)
0x421: Push((int) 41287)
0x422: Push((int) 41295)
0x423: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x424: Pop(3)
0x425: GOTO 0x464

0x426: PushEmpty(string)
0x427: Stack[-1] = "Neutral" // @poff=89
0x428: Call2 0x482

0x429: Pop(1)
0x42a: Push((int) 539352)
0x42b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42c: Pop(1)
0x42d: @@@ ClearReplies(); Obj=0 // @poff=116
0x42e: Pop(0)
0x42f: PushEmpty(bool)
0x430: Stack[-1] = (bool) 0
0x431: PushEmpty(bool)
0x432: Stack[-1] = (bool) 0
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x435: Call2 0xaed

0x436: Pop(1)
0x437: Pop(1); Push((bool) Stack[-1] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x439: PushEmpty(bool, object)
0x43a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Call2 0xabf

0x43c: Pop(1)
0x43d: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43e: Stack[-1] = (bool) 1
0x43f: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x440: PushEmpty(bool, object)
0x441: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x442: Call2 0xab3

0x443: Pop(1)
0x444: Pop(1); Push((bool) Stack[-1] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: Stack[-1] = (bool) 1
0x447: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x448: Push((int) 539353)
0x449: Push((int) 41299)
0x44a: Push((int) 41298)
0x44b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44c: Pop(3)
0x44d: Push((int) 539356)
0x44e: Push((int) -1)
0x44f: Push((int) 41301)
0x450: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x451: Pop(3)
0x452: GOTO 0x464

0x453: PushEmpty(string)
0x454: Stack[-1] = "Neutral" // @poff=89
0x455: Call2 0x482

0x456: Pop(1)
0x457: Push((int) 539357)
0x458: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x459: Pop(1)
0x45a: @@@ ClearReplies(); Obj=0 // @poff=116
0x45b: Pop(0)
0x45c: Push((int) 539358)
0x45d: Push((int) -1)
0x45e: Push((int) 41303)
0x45f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x460: Pop(3)
0x461: GOTO 0x464

0x462: Return(); Pop(0)

0x463: GOTO 0x3fc

0x464: PushEmpty(bool)
0x465: Call2 0xa5c

0x466: Pop(0)
0x467: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x468: @ lshWaitForAnimEnd()
0x469: Pop(0)
0x46a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: GOTO 0x472

0x46d: PushEmpty(string)
0x46e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x46f: Call2 0x9ca

0x470: Pop(1)
0x471: GOTO 0x468

0x472: GOTO 0x481

0x473: Push("all") // @poff=138
0x474: Push("idle") // @poff=146
0x475: @ PlayAnimation(Stack[-2], Stack[-1])
0x476: Pop(2)
0x477: @ WaitForAnimEnd()
0x478: Pop(0)
0x479: Push( Stack[3 + Tasks[-1].StackPointer] )
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: GOTO 0x481

0x47c: Push("all") // @poff=138
0x47d: Push("idle") // @poff=146
0x47e: @ PlayAnimation(Stack[-2], Stack[-1])
0x47f: Pop(2)
0x480: GOTO 0x477

0x481: Return(); Pop(0)

0x482: PushEmpty()
0x483: PushEmpty(bool)
0x484: Call2 0xa5c

0x485: Pop(0)
0x486: Pop(1); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: Return(); Pop(0)

0x489: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: Return(); Pop(0)

0x48c: PushEmpty(string, bool)
0x48d: Stack[-3] = Stack[-2]
0x48e: Push("") // @poff=102
0x48f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-1] = (bool) 0
0x492: GOTO 0x494

0x493: Stack[-1] = (bool) 1
0x494: Call2 0x9d1

0x495: Pop(2)
0x496: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: Push((int) 1)
0x49a: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x49b: PushEmpty()
0x49c: Call2 0x9e6

0x49d: Pop(0)
0x49e: Push((int) 41290)
0x49f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a1: PushEmpty(object, object)
0x4a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a4: Call2 0xa94

0x4a5: Pop(2)
0x4a6: Push((int) 41293)
0x4a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a9: PushEmpty(object, object)
0x4aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ac: Call2 0xa8b

0x4ad: Pop(2)
0x4ae: Push((int) 41300)
0x4af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b1: PushEmpty(object, object)
0x4b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b4: Call2 0xa8b

0x4b5: Pop(2)
0x4b6: Push((int) 41283)
0x4b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x4b9: PushEmpty(bool)
0x4ba: Stack[-1] = (bool) 0
0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4bd: Call2 0xab3

0x4be: Pop(1)
0x4bf: Pop(1); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c1: PushEmpty(bool, object)
0x4c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c3: Call2 0xaf9

0x4c4: Pop(1)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Stack[-1] = (bool) 1
0x4c7: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4c8: PushEmpty(object, object)
0x4c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cb: Call2 0xaa4

0x4cc: Pop(2)
0x4cd: PushEmpty(string)
0x4ce: Stack[-1] = "Neutral" // @poff=89
0x4cf: Call2 0x482

0x4d0: Pop(1)
0x4d1: Push((int) 539339)
0x4d2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d3: Pop(1)
0x4d4: @@@ ClearReplies(); Obj=0 // @poff=116
0x4d5: Pop(0)
0x4d6: Push((int) 539340)
0x4d7: Push((int) 41285)
0x4d8: Push((int) 41284)
0x4d9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4da: Pop(3)
0x4db: Push((int) 539351)
0x4dc: Push((int) 41287)
0x4dd: Push((int) 41295)
0x4de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4df: Pop(3)
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Neutral" // @poff=89
0x4e3: Call2 0x482

0x4e4: Pop(1)
0x4e5: Push((int) 539352)
0x4e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4e7: Pop(1)
0x4e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x4e9: Pop(0)
0x4ea: PushEmpty(bool)
0x4eb: Stack[-1] = (bool) 0
0x4ec: PushEmpty(bool)
0x4ed: Stack[-1] = (bool) 0
0x4ee: PushEmpty(bool, object)
0x4ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f0: Call2 0xaed

0x4f1: Pop(1)
0x4f2: Pop(1); Push((bool) Stack[-1] == 0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Call2 0xabf

0x4f7: Pop(1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: Stack[-1] = (bool) 1
0x4fa: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fb: PushEmpty(bool, object)
0x4fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fd: Call2 0xab3

0x4fe: Pop(1)
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: Stack[-1] = (bool) 1
0x502: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x503: Push((int) 539353)
0x504: Push((int) 41299)
0x505: Push((int) 41298)
0x506: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x507: Pop(3)
0x508: Push((int) 539356)
0x509: Push((int) -1)
0x50a: Push((int) 41301)
0x50b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x50c: Pop(3)
0x50d: Return(); Pop(0)

0x50e: PushEmpty(string)
0x50f: Stack[-1] = "Neutral" // @poff=89
0x510: Call2 0x482

0x511: Pop(1)
0x512: Push((int) 539357)
0x513: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x514: Pop(1)
0x515: @@@ ClearReplies(); Obj=0 // @poff=116
0x516: Pop(0)
0x517: Push((int) 539358)
0x518: Push((int) -1)
0x519: Push((int) 41303)
0x51a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51b: Pop(3)
0x51c: Return(); Pop(0)

0x51d: Push((int) 41299)
0x51e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x520: PushEmpty(string)
0x521: Stack[-1] = "Neutral" // @poff=89
0x522: Call2 0x482

0x523: Pop(1)
0x524: Push((int) 539354)
0x525: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x526: Pop(1)
0x527: @@@ ClearReplies(); Obj=0 // @poff=116
0x528: Pop(0)
0x529: Push((int) 539355)
0x52a: Push((int) -1)
0x52b: Push((int) 41300)
0x52c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52d: Pop(3)
0x52e: Return(); Pop(0)

0x52f: Push((int) 41285)
0x530: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x532: PushEmpty(string)
0x533: Stack[-1] = "Neutral" // @poff=89
0x534: Call2 0x482

0x535: Pop(1)
0x536: Push((int) 539341)
0x537: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x538: Pop(1)
0x539: @@@ ClearReplies(); Obj=0 // @poff=116
0x53a: Pop(0)
0x53b: Push((int) 539342)
0x53c: Push((int) 41287)
0x53d: Push((int) 41286)
0x53e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53f: Pop(3)
0x540: Return(); Pop(0)

0x541: Push((int) 41287)
0x542: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x544: PushEmpty(string)
0x545: Stack[-1] = "Neutral" // @poff=89
0x546: Call2 0x482

0x547: Pop(1)
0x548: Push((int) 539343)
0x549: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x54a: Pop(1)
0x54b: @@@ ClearReplies(); Obj=0 // @poff=116
0x54c: Pop(0)
0x54d: Push((int) 539344)
0x54e: Push((int) 41289)
0x54f: Push((int) 41288)
0x550: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x551: Pop(3)
0x552: Return(); Pop(0)

0x553: Push((int) 41289)
0x554: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x558: Call2 0xabf

0x559: Pop(1)
0x55a: Pop(1); Push((bool) Stack[-1] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x55c: PushEmpty(string)
0x55d: Stack[-1] = "Neutral" // @poff=89
0x55e: Call2 0x482

0x55f: Pop(1)
0x560: Push((int) 539345)
0x561: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x562: Pop(1)
0x563: @@@ ClearReplies(); Obj=0 // @poff=116
0x564: Pop(0)
0x565: Push((int) 539346)
0x566: Push((int) -1)
0x567: Push((int) 41290)
0x568: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x569: Pop(3)
0x56a: Push((int) 539347)
0x56b: Push((int) -1)
0x56c: Push((int) 41291)
0x56d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x56e: Pop(3)
0x56f: Return(); Pop(0)

0x570: PushEmpty(bool, object)
0x571: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x572: Call2 0xabf

0x573: Pop(1)
0x574: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x575: PushEmpty(string)
0x576: Stack[-1] = "Neutral" // @poff=89
0x577: Call2 0x482

0x578: Pop(1)
0x579: Push((int) 539348)
0x57a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x57b: Pop(1)
0x57c: @@@ ClearReplies(); Obj=0 // @poff=116
0x57d: Pop(0)
0x57e: Push((int) 539349)
0x57f: Push((int) -1)
0x580: Push((int) 41293)
0x581: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x582: Pop(3)
0x583: Push((int) 539350)
0x584: Push((int) -1)
0x585: Push((int) 41294)
0x586: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x587: Pop(3)
0x588: Return(); Pop(0)

0x589: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x58a: PushEmpty(bool)
0x58b: Call2 0xa5c

0x58c: Pop(0)
0x58d: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58e: @ lshStopAnimation()
0x58f: Pop(0)
0x590: GOTO 0x593

0x591: @ StopAnimation()
0x592: Pop(0)
0x593: Return(); Pop(0)

0x594: GOTO 0x499

0x595: Return(); Pop(0)

0x596: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x597: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x598: PushEmpty(bool, object)
0x599: PushEmpty(object)
0x59a: Call2 0x9ed

0x59b: Stack[-1] = Stack[-2]
0x59c: Pop(1)
0x59d: Call2 0x940

0x59e: Pop(2)
0x59f: PushEmpty(bool, object, float)
0x5a0: Stack[-12] = Stack[-2]
0x5a1: Stack[-1] = (float) 70.0
0x5a2: Call2 0x8eb

0x5a3: Pop(2)
0x5a4: Pop(1); Push((bool) Stack[-1] == 0)
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-10] = (int) -2
0x5a7: Return(); Pop(8)

0x5a8: @ CreateDialog(Stack[-4])
0x5a9: Pop(0)
0x5aa: PushEmpty(int)
0x5ab: Call2 0xa56

0x5ac: Pop(0)
0x5ad: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x5ae: Pop(1)
0x5af: PushEmpty(int)
0x5b0: Call2 0xa54

0x5b1: Pop(0)
0x5b2: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x5b3: Pop(1)
0x5b4: PushEmpty(string)
0x5b5: Call2 0xa58

0x5b6: Pop(0)
0x5b7: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x5b8: Pop(1)
0x5b9: PushEmpty(string)
0x5ba: Call2 0xa5a

0x5bb: Pop(0)
0x5bc: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x5bd: Pop(1)
0x5be: PushEmpty(int)
0x5bf: Call2 0xb74

0x5c0: Pop(0)
0x5c1: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5c2: Pop(1)
0x5c3: Stack[-2] = (int) -1
0x5c4: @ IsOverrideActive(Stack[-3])
0x5c5: Pop(0)
0x5c6: Push(Stack[-3])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c8: Stack[-10] = (int) -2
0x5c9: Return(); Pop(8)

0x5ca: @ DoDialog(Stack[-4])
0x5cb: Pop(0)
0x5cc: PushEmpty(object, object)
0x5cd: Stack[-11] = Stack[-2]
0x5ce: Stack[-6] = Stack[-1]
0x5cf: Push(-2, 4); TaskCall(10)
0x5d0: Call2 0x5e7

0x5d1: Pop(-2, 4); TaskReturn
0x5d2: Pop(2)
0x5d3: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5d4: Pop(0)
0x5d5: Pop(0); Push((bool) Stack[-1] == 0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d7: @ sync()
0x5d8: Pop(0)
0x5d9: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5da: Pop(0)
0x5db: GOTO 0x5d5

0x5dc: PushEmpty(object)
0x5dd: Stack[-10] = Stack[-1]
0x5de: Call2 0x92f

0x5df: Pop(1)
0x5e0: @ StopDialog(Stack[-4])
0x5e1: Pop(0)
0x5e2: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5e3: Pop(0)
0x5e4: Stack[-2] = Stack[-10]
0x5e5: Return(); Pop(8)

0x5e6: Stack[-4] = 0
0x5e7: PushEmpty()
0x5e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5eb: Push((int) 1)
0x5ec: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5ed: PushEmpty(string)
0x5ee: Stack[-1] = "Neutral" // @poff=89
0x5ef: Call2 0x62b

0x5f0: Pop(1)
0x5f1: Push((int) 539435)
0x5f2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5f3: Pop(1)
0x5f4: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f5: Pop(0)
0x5f6: PushEmpty(bool, object)
0x5f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f8: Call2 0xb05

0x5f9: Pop(1)
0x5fa: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fb: Push((int) 539436)
0x5fc: Push((int) 42812)
0x5fd: Push((int) 41367)
0x5fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ff: Pop(3)
0x600: Push((int) 539439)
0x601: Push((int) -1)
0x602: Push((int) 41370)
0x603: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x604: Pop(3)
0x605: Push((int) 540767)
0x606: Push((int) -1)
0x607: Push((int) 42811)
0x608: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x609: Pop(3)
0x60a: GOTO 0x60d

0x60b: Return(); Pop(0)

0x60c: GOTO 0x5eb

0x60d: PushEmpty(bool)
0x60e: Call2 0xa5c

0x60f: Pop(0)
0x610: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x611: @ lshWaitForAnimEnd()
0x612: Pop(0)
0x613: Push( Stack[3 + Tasks[-1].StackPointer] )
0x614: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x615: GOTO 0x61b

0x616: PushEmpty(string)
0x617: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x618: Call2 0x9ca

0x619: Pop(1)
0x61a: GOTO 0x611

0x61b: GOTO 0x62a

0x61c: Push("all") // @poff=138
0x61d: Push("idle") // @poff=146
0x61e: @ PlayAnimation(Stack[-2], Stack[-1])
0x61f: Pop(2)
0x620: @ WaitForAnimEnd()
0x621: Pop(0)
0x622: Push( Stack[3 + Tasks[-1].StackPointer] )
0x623: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x624: GOTO 0x62a

0x625: Push("all") // @poff=138
0x626: Push("idle") // @poff=146
0x627: @ PlayAnimation(Stack[-2], Stack[-1])
0x628: Pop(2)
0x629: GOTO 0x620

0x62a: Return(); Pop(0)

0x62b: PushEmpty()
0x62c: PushEmpty(bool)
0x62d: Call2 0xa5c

0x62e: Pop(0)
0x62f: Pop(1); Push((bool) Stack[-1] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x631: Return(); Pop(0)

0x632: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x633: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x634: Return(); Pop(0)

0x635: PushEmpty(string, bool)
0x636: Stack[-3] = Stack[-2]
0x637: Push("") // @poff=102
0x638: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-1] = (bool) 0
0x63b: GOTO 0x63d

0x63c: Stack[-1] = (bool) 1
0x63d: Call2 0x9d1

0x63e: Pop(2)
0x63f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x640: Return(); Pop(0)

0x641: PushEmpty()
0x642: Push((int) 1)
0x643: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x644: PushEmpty()
0x645: Call2 0x9e6

0x646: Pop(0)
0x647: Push((int) 41369)
0x648: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64a: PushEmpty(object, object)
0x64b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64d: Call2 0xaaa

0x64e: Pop(2)
0x64f: Push((int) 42820)
0x650: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x652: PushEmpty(object, object)
0x653: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x654: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x655: Call2 0xaaa

0x656: Pop(2)
0x657: Push((int) 41366)
0x658: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x65a: PushEmpty(string)
0x65b: Stack[-1] = "Neutral" // @poff=89
0x65c: Call2 0x62b

0x65d: Pop(1)
0x65e: Push((int) 539435)
0x65f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x660: Pop(1)
0x661: @@@ ClearReplies(); Obj=0 // @poff=116
0x662: Pop(0)
0x663: PushEmpty(bool, object)
0x664: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x665: Call2 0xb05

0x666: Pop(1)
0x667: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x668: Push((int) 539436)
0x669: Push((int) 42812)
0x66a: Push((int) 41367)
0x66b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x66c: Pop(3)
0x66d: Push((int) 539439)
0x66e: Push((int) -1)
0x66f: Push((int) 41370)
0x670: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x671: Pop(3)
0x672: Push((int) 540767)
0x673: Push((int) -1)
0x674: Push((int) 42811)
0x675: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x676: Pop(3)
0x677: Return(); Pop(0)

0x678: Push((int) 42812)
0x679: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x67b: PushEmpty(string)
0x67c: Stack[-1] = "Neutral" // @poff=89
0x67d: Call2 0x62b

0x67e: Pop(1)
0x67f: Push((int) 540768)
0x680: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x681: Pop(1)
0x682: @@@ ClearReplies(); Obj=0 // @poff=116
0x683: Pop(0)
0x684: Push((int) 540769)
0x685: Push((int) 42814)
0x686: Push((int) 42813)
0x687: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x688: Pop(3)
0x689: Push((int) 540772)
0x68a: Push((int) 42817)
0x68b: Push((int) 42816)
0x68c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x68d: Pop(3)
0x68e: Return(); Pop(0)

0x68f: Push((int) 42817)
0x690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x692: PushEmpty(string)
0x693: Stack[-1] = "Neutral" // @poff=89
0x694: Call2 0x62b

0x695: Pop(1)
0x696: Push((int) 540773)
0x697: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x698: Pop(1)
0x699: @@@ ClearReplies(); Obj=0 // @poff=116
0x69a: Pop(0)
0x69b: Push((int) 540774)
0x69c: Push((int) 41368)
0x69d: Push((int) 42818)
0x69e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69f: Pop(3)
0x6a0: Return(); Pop(0)

0x6a1: Push((int) 42814)
0x6a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6a4: PushEmpty(string)
0x6a5: Stack[-1] = "Neutral" // @poff=89
0x6a6: Call2 0x62b

0x6a7: Pop(1)
0x6a8: Push((int) 540770)
0x6a9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6aa: Pop(1)
0x6ab: @@@ ClearReplies(); Obj=0 // @poff=116
0x6ac: Pop(0)
0x6ad: Push((int) 540771)
0x6ae: Push((int) 42823)
0x6af: Push((int) 42815)
0x6b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b1: Pop(3)
0x6b2: Push((int) 540776)
0x6b3: Push((int) 41368)
0x6b4: Push((int) 42821)
0x6b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b6: Pop(3)
0x6b7: Return(); Pop(0)

0x6b8: Push((int) 42823)
0x6b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ba: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6bb: PushEmpty(string)
0x6bc: Stack[-1] = "Neutral" // @poff=89
0x6bd: Call2 0x62b

0x6be: Pop(1)
0x6bf: Push((int) 540777)
0x6c0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6c1: Pop(1)
0x6c2: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c3: Pop(0)
0x6c4: Push((int) 540778)
0x6c5: Push((int) 41368)
0x6c6: Push((int) 42824)
0x6c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c8: Pop(3)
0x6c9: Push((int) 540779)
0x6ca: Push((int) -1)
0x6cb: Push((int) 42825)
0x6cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6cd: Pop(3)
0x6ce: Return(); Pop(0)

0x6cf: Push((int) 41368)
0x6d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6d2: PushEmpty(string)
0x6d3: Stack[-1] = "Neutral" // @poff=89
0x6d4: Call2 0x62b

0x6d5: Pop(1)
0x6d6: Push((int) 539437)
0x6d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6d8: Pop(1)
0x6d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x6da: Pop(0)
0x6db: Push((int) 539438)
0x6dc: Push((int) -1)
0x6dd: Push((int) 41369)
0x6de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6df: Pop(3)
0x6e0: Push((int) 540775)
0x6e1: Push((int) -1)
0x6e2: Push((int) 42820)
0x6e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e4: Pop(3)
0x6e5: Return(); Pop(0)

0x6e6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6e7: PushEmpty(bool)
0x6e8: Call2 0xa5c

0x6e9: Pop(0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6eb: @ lshStopAnimation()
0x6ec: Pop(0)
0x6ed: GOTO 0x6f0

0x6ee: @ StopAnimation()
0x6ef: Pop(0)
0x6f0: Return(); Pop(0)

0x6f1: GOTO 0x642

0x6f2: Return(); Pop(0)

0x6f3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6f5: PushEmpty(bool, object)
0x6f6: PushEmpty(object)
0x6f7: Call2 0x9ed

0x6f8: Stack[-1] = Stack[-2]
0x6f9: Pop(1)
0x6fa: Call2 0x940

0x6fb: Pop(2)
0x6fc: PushEmpty(bool, object, float)
0x6fd: Stack[-12] = Stack[-2]
0x6fe: Stack[-1] = (float) 70.0
0x6ff: Call2 0x8eb

0x700: Pop(2)
0x701: Pop(1); Push((bool) Stack[-1] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x703: Stack[-10] = (int) -2
0x704: Return(); Pop(8)

0x705: @ CreateDialog(Stack[-4])
0x706: Pop(0)
0x707: PushEmpty(int)
0x708: Call2 0xa56

0x709: Pop(0)
0x70a: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x70b: Pop(1)
0x70c: PushEmpty(int)
0x70d: Call2 0xa54

0x70e: Pop(0)
0x70f: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x710: Pop(1)
0x711: PushEmpty(string)
0x712: Call2 0xa58

0x713: Pop(0)
0x714: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x715: Pop(1)
0x716: PushEmpty(string)
0x717: Call2 0xa5a

0x718: Pop(0)
0x719: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x71a: Pop(1)
0x71b: PushEmpty(int)
0x71c: Call2 0xb74

0x71d: Pop(0)
0x71e: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x71f: Pop(1)
0x720: Stack[-2] = (int) -1
0x721: @ IsOverrideActive(Stack[-3])
0x722: Pop(0)
0x723: Push(Stack[-3])
0x724: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x725: Stack[-10] = (int) -2
0x726: Return(); Pop(8)

0x727: @ DoDialog(Stack[-4])
0x728: Pop(0)
0x729: PushEmpty(object, object)
0x72a: Stack[-11] = Stack[-2]
0x72b: Stack[-6] = Stack[-1]
0x72c: Push(-2, 4); TaskCall(12)
0x72d: Call2 0x744

0x72e: Pop(-2, 4); TaskReturn
0x72f: Pop(2)
0x730: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x731: Pop(0)
0x732: Pop(0); Push((bool) Stack[-1] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x734: @ sync()
0x735: Pop(0)
0x736: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x737: Pop(0)
0x738: GOTO 0x732

0x739: PushEmpty(object)
0x73a: Stack[-10] = Stack[-1]
0x73b: Call2 0x92f

0x73c: Pop(1)
0x73d: @ StopDialog(Stack[-4])
0x73e: Pop(0)
0x73f: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x740: Pop(0)
0x741: Stack[-2] = Stack[-10]
0x742: Return(); Pop(8)

0x743: Stack[-4] = 0
0x744: PushEmpty()
0x745: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x746: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x747: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x748: Push((int) 1)
0x749: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x74a: PushEmpty(string)
0x74b: Stack[-1] = "Neutral" // @poff=89
0x74c: Call2 0x77e

0x74d: Pop(1)
0x74e: Push((int) 540545)
0x74f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x750: Pop(1)
0x751: @@@ ClearReplies(); Obj=0 // @poff=116
0x752: Pop(0)
0x753: Push((int) 540546)
0x754: Push((int) -1)
0x755: Push((int) 42555)
0x756: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x757: Pop(3)
0x758: Push((int) 540798)
0x759: Push((int) -1)
0x75a: Push((int) 42847)
0x75b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75c: Pop(3)
0x75d: GOTO 0x760

0x75e: Return(); Pop(0)

0x75f: GOTO 0x748

0x760: PushEmpty(bool)
0x761: Call2 0xa5c

0x762: Pop(0)
0x763: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x764: @ lshWaitForAnimEnd()
0x765: Pop(0)
0x766: Push( Stack[3 + Tasks[-1].StackPointer] )
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: GOTO 0x76e

0x769: PushEmpty(string)
0x76a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76b: Call2 0x9ca

0x76c: Pop(1)
0x76d: GOTO 0x764

0x76e: GOTO 0x77d

0x76f: Push("all") // @poff=138
0x770: Push("idle") // @poff=146
0x771: @ PlayAnimation(Stack[-2], Stack[-1])
0x772: Pop(2)
0x773: @ WaitForAnimEnd()
0x774: Pop(0)
0x775: Push( Stack[3 + Tasks[-1].StackPointer] )
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x77d

0x778: Push("all") // @poff=138
0x779: Push("idle") // @poff=146
0x77a: @ PlayAnimation(Stack[-2], Stack[-1])
0x77b: Pop(2)
0x77c: GOTO 0x773

0x77d: Return(); Pop(0)

0x77e: PushEmpty()
0x77f: PushEmpty(bool)
0x780: Call2 0xa5c

0x781: Pop(0)
0x782: Pop(1); Push((bool) Stack[-1] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Return(); Pop(0)

0x785: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x786: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x787: Return(); Pop(0)

0x788: PushEmpty(string, bool)
0x789: Stack[-3] = Stack[-2]
0x78a: Push("") // @poff=102
0x78b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-1] = (bool) 0
0x78e: GOTO 0x790

0x78f: Stack[-1] = (bool) 1
0x790: Call2 0x9d1

0x791: Pop(2)
0x792: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x793: Return(); Pop(0)

0x794: PushEmpty()
0x795: Push((int) 1)
0x796: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x797: PushEmpty()
0x798: Call2 0x9e6

0x799: Pop(0)
0x79a: Push((int) 42554)
0x79b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x79d: PushEmpty(string)
0x79e: Stack[-1] = "Neutral" // @poff=89
0x79f: Call2 0x77e

0x7a0: Pop(1)
0x7a1: Push((int) 540545)
0x7a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7a3: Pop(1)
0x7a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x7a5: Pop(0)
0x7a6: Push((int) 540546)
0x7a7: Push((int) -1)
0x7a8: Push((int) 42555)
0x7a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7aa: Pop(3)
0x7ab: Push((int) 540798)
0x7ac: Push((int) -1)
0x7ad: Push((int) 42847)
0x7ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7af: Pop(3)
0x7b0: Return(); Pop(0)

0x7b1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7b2: PushEmpty(bool)
0x7b3: Call2 0xa5c

0x7b4: Pop(0)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b6: @ lshStopAnimation()
0x7b7: Pop(0)
0x7b8: GOTO 0x7bb

0x7b9: @ StopAnimation()
0x7ba: Pop(0)
0x7bb: Return(); Pop(0)

0x7bc: GOTO 0x795

0x7bd: Return(); Pop(0)

0x7be: PushEmpty()
0x7bf: Call2 0x7c2

0x7c0: Pop(0)
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(bool)
0x7c3: Call2 0x8e6

0x7c4: Pop(0)
0x7c5: Pop(1); Push((bool) Stack[-1] == 0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c7: PushEmpty()
0x7c8: Push(-0, 0); TaskCall(0)
0x7c9: Call2 0x0

0x7ca: Pop(-0, 0); TaskReturn
0x7cb: Pop(0)
0x7cc: PushEmpty()
0x7cd: Call2 0x842

0x7ce: Pop(0)
0x7cf: @ GetDirection(Stack[-0]T)
0x7d0: Pop(0)
0x7d1: PushEmpty()
0x7d2: Call2 0x878

0x7d3: Pop(0)
0x7d4: GOTO 0x7d1

0x7d5: Return(); Pop(0)

0x7d6: PushEmpty(object, object)
0x7d7: Push("player") // @poff=156
0x7d8: @ FindActor(Stack[-2], Stack[-1])
0x7d9: Pop(1)
0x7da: Pop(0); Push((bool) Stack[-1] == 0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: Stack[-3] = (bool) 0
0x7dd: Return(); Pop(2)

0x7de: PushEmpty(bool, object)
0x7df: Stack[-3] = Stack[-1]
0x7e0: Call2 0x8dd

0x7e1: Stack[-2] = Stack[-5]
0x7e2: Pop(2)
0x7e3: Return(); Pop(2)

0x7e4: Stack[-1] = 0
0x7e5: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x7e6: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x7e7: @ RotateAsync(Stack[-2], Stack[-1])
0x7e8: Pop(2)
0x7e9: Return(); Pop(0)

0x7ea: PushEmpty(object, bool, object, bool)
0x7eb: Push("player") // @poff=156
0x7ec: @ FindActor(Stack[-3], Stack[-1])
0x7ed: Pop(1)
0x7ee: Pop(0); Push((bool) Stack[-2] == 0)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-5] = (bool) 0
0x7f1: Return(); Pop(4)

0x7f2: PushEmpty(float, object)
0x7f3: Stack[-4] = Stack[-1]
0x7f4: Call2 0x8c4

0x7f5: Pop(1)
0x7f6: Push((float)90000.0)
0x7f7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f9: Stack[-5] = (bool) 0
0x7fa: Return(); Pop(4)

0x7fb: @ CanSee(Stack[-1], Stack[-2])
0x7fc: Pop(0)
0x7fd: Stack[-1] = Stack[-5]
0x7fe: Return(); Pop(4)

0x7ff: Stack[-2] = 0
0x800: PushEmpty(float, float)
0x801: Push((int) 8)
0x802: Push((int) 16)
0x803: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x804: Pop(2)
0x805: Push((int) 10)
0x806: @ SetTimer(Stack[-1], Stack[-2])
0x807: Pop(1)
0x808: Return(); Pop(2)

0x809: Push((int) 10)
0x80a: @ KillTimer(Stack[-1])
0x80b: Pop(1)
0x80c: Return(); Pop(0)

0x80d: PushEmpty()
0x80e: Push((int) 10)
0x80f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x811: PushEmpty()
0x812: Call2 0x809

0x813: Pop(0)
0x814: PushEmpty(bool)
0x815: Stack[-1] = (bool) 0
0x816: PushEmpty(bool)
0x817: Call2 0x8e6

0x818: Pop(0)
0x819: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81a: PushEmpty(bool)
0x81b: Call2 0x7ea

0x81c: Pop(0)
0x81d: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81e: Stack[-1] = (bool) 1
0x81f: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x820: PushEmpty(bool)
0x821: Call2 0x7d6

0x822: Pop(0)
0x823: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x824: PushEmpty(bool, object)
0x825: PushEmpty(object)
0x826: Call2 0x9ed

0x827: Stack[-1] = Stack[-2]
0x828: Pop(1)
0x829: Call2 0x97a

0x82a: Pop(2)
0x82b: GOTO 0x832

0x82c: PushEmpty()
0x82d: Call2 0x7e5

0x82e: Pop(0)
0x82f: PushEmpty()
0x830: Call2 0x800

0x831: Pop(0)
0x832: Return(); Pop(0)

0x833: PushEmpty()
0x834: Call2 0x8bf

0x835: Pop(0)
0x836: PushEmpty()
0x837: Call2 0x809

0x838: Pop(0)
0x839: @ lshStopSpeech()
0x83a: Pop(0)
0x83b: @ lshStopAnimation()
0x83c: Pop(0)
0x83d: @ StopAsync()
0x83e: Pop(0)
0x83f: @ Hold()
0x840: Pop(0)
0x841: Return(); Pop(0)

0x842: @ StopGroup0()
0x843: Pop(0)
0x844: PushEmpty()
0x845: Call2 0x809

0x846: Pop(0)
0x847: PushEmpty(string)
0x848: Stack[-1] = "Neutral" // @poff=89
0x849: Call2 0x9ca

0x84a: Pop(1)
0x84b: PushEmpty()
0x84c: Call2 0x800

0x84d: Pop(0)
0x84e: Return(); Pop(0)

0x84f: PushEmpty()
0x850: Push(Stack[-1])
0x851: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x852: PushEmpty()
0x853: Call2 0x800

0x854: Pop(0)
0x855: GOTO 0x85a

0x856: PushEmpty(string)
0x857: Stack[-1] = "Neutral" // @poff=89
0x858: Call2 0x9ca

0x859: Pop(1)
0x85a: Return(); Pop(0)

0x85b: PushEmpty(bool, bool)
0x85c: @ IsOverrideActive(Stack[-1])
0x85d: Pop(0)
0x85e: Pop(0); Push((bool) Stack[-1] == 0)
0x85f: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x860: EventDisable(0)
0x861: PushEmpty()
0x862: Call2 0x8bf

0x863: Pop(0)
0x864: PushEmpty(bool, object)
0x865: Stack[-5] = Stack[-1]
0x866: Call2 0x8dd

0x867: Pop(2)
0x868: EventEnable(0)
0x869: PushEmpty(object)
0x86a: Stack[-4] = Stack[-1]
0x86b: Call2 0xbe3

0x86c: Pop(1)
0x86d: PushEmpty(string)
0x86e: Stack[-1] = "Neutral" // @poff=89
0x86f: Call2 0x9ca

0x870: Pop(1)
0x871: PushEmpty()
0x872: Call2 0x809

0x873: Pop(0)
0x874: PushEmpty()
0x875: Call2 0x800

0x876: Pop(0)
0x877: Return(); Pop(2)

0x878: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x879: @ WaitForAnimEnd()
0x87a: Pop(0)
0x87b: PushEmpty(bool)
0x87c: Call2 0x8e6

0x87d: Pop(0)
0x87e: Pop(1); Push((bool) Stack[-1] == 0)
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: Return(); Pop(12)

0x881: PushEmpty(int)
0x882: Call2 0xa43

0x883: Stack[-1] = Stack[-7]
0x884: Pop(1)
0x885: Stack[-5] = (int) 0
0x886: PushEmpty(bool)
0x887: Stack[-1] = (bool) 0
0x888: Push((int) 5)
0x889: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88b: PushEmpty(bool)
0x88c: Call2 0x8e6

0x88d: Pop(0)
0x88e: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88f: Stack[-1] = (bool) 1
0x890: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x891: Pop(0); Push((bool) Stack[-6] == 0)
0x892: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x893: Push((int) 3)
0x894: @ Sleep(Stack[-1], Stack[-5])
0x895: Pop(1)
0x896: Pop(0); Push((bool) Stack[-4] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: GOTO 0x8ba

0x899: GOTO 0x8af

0x89a: @ irand(Stack[-3], Stack[-6])
0x89b: Pop(0)
0x89c: Push((int) 5)
0x89d: @ irand(Stack[-3], Stack[-1])
0x89e: Pop(1)
0x89f: Push((int) 0)
0x8a0: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: Stack[-3] = (int) 0
0x8a3: Push("all") // @poff=138
0x8a4: PushEmpty(string, int)
0x8a5: Stack[-6] = Stack[-1]
0x8a6: Call2 0xa3c

0x8a7: Pop(1)
0x8a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a9: Pop(2)
0x8aa: @ WaitForAnimEnd(Stack[-1])
0x8ab: Pop(0)
0x8ac: Pop(0); Push((bool) Stack[-1] == 0)
0x8ad: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ae: GOTO 0x8ba

0x8af: PushEmpty(bool)
0x8b0: Call2 0x8bd

0x8b1: Pop(0)
0x8b2: Pop(1); Push((bool) Stack[-1] == 0)
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b4: GOTO 0x8ba

0x8b5: @ ResetAAS()
0x8b6: Pop(0)
0x8b7: Push((int) 1)
0x8b8: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x8b9: GOTO 0x886

0x8ba: @ ResetAAS()
0x8bb: Pop(0)
0x8bc: Return(); Pop(12)

0x8bd: Stack[-1] = (bool) 1
0x8be: Return(); Pop(0)

0x8bf: @ StopAnimation()
0x8c0: Pop(0)
0x8c1: @ StopGroup0()
0x8c2: Pop(0)
0x8c3: Return(); Pop(0)

0x8c4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8c5: @ GetPosition(Stack[-3])
0x8c6: Pop(0)
0x8c7: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x8c8: Pop(0)
0x8c9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8ca: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8cb: Return(); Pop(6)

0x8cc: PushEmpty(int, int)
0x8cd: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=182
0x8ce: Pop(0)
0x8cf: Pop(0); Push(Stack[-1] + Stack[-3]);
0x8d0: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=194
0x8d1: Pop(1)
0x8d2: Return(); Pop(2)

0x8d3: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8d4: @ GetPosition(Stack[-3])
0x8d5: Pop(0)
0x8d6: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8d7: Push(CvectorIndex(Stack[-2], 0))
0x8d8: Push(CvectorIndex(Stack[-3], 2))
0x8d9: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8da: Pop(2)
0x8db: Stack[-1] = Stack[-8]
0x8dc: Return(); Pop(6)

0x8dd: PushEmpty(cvector, cvector)
0x8de: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x8df: Pop(0)
0x8e0: PushEmpty(bool, cvector)
0x8e1: Stack[-3] = Stack[-1]
0x8e2: Call2 0x8d3

0x8e3: Stack[-2] = Stack[-6]
0x8e4: Pop(2)
0x8e5: Return(); Pop(2)

0x8e6: PushEmpty(bool, bool)
0x8e7: @ IsLoaded(Stack[-1])
0x8e8: Pop(0)
0x8e9: Stack[-1] = Stack[-3]
0x8ea: Return(); Pop(2)

0x8eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8ec: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x8ed: Pop(0)
0x8ee: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=206
0x8ef: Pop(0)
0x8f0: Push(CvectorIndex(Stack[-8], 1))
0x8f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8f2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8f3: @ GetPosition(Stack[-7])
0x8f4: Pop(0)
0x8f5: @ GetEyesHeight(Stack[-9])
0x8f6: Pop(0)
0x8f7: Push(CvectorIndex(Stack[-7], 1))
0x8f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8f9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8fa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8fb: Push(CvectorIndex(Stack[-6], 1))
0x8fc: Stack[-1] = (int) 0
0x8fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8fe: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8ff: Pop(1); Push(Sqrt(Stack[-1]))
0x900: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x901: Stack[-5] = -Stack[-6]; Pop(0);
0x902: Pop(0); Push(Stack[-6] * Stack[-19]);
0x903: PushEmpty(cvector, cvector)
0x904: Push([0.0, 1.0, 0.0])
0x905: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x906: Call2 0x9f3

0x907: Pop(1)
0x908: Push((int) 25)
0x909: Pop(2); Push(Stack[-2] * Stack[-1]);
0x90a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x90b: Push([0.0, 10.0, 0.0])
0x90c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x90d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x90e: @ IsOverrideActive(Stack[-2])
0x90f: Pop(0)
0x910: Push(Stack[-2])
0x911: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x912: Stack[-21] = (bool) 0
0x913: Return(); Pop(18)

0x914: @ StopWorld()
0x915: Pop(0)
0x916: @ CameraTransit(Stack[-3], Stack[-5])
0x917: Pop(0)
0x918: Push(CvectorIndex(Stack[-4], 0))
0x919: Push(CvectorIndex(Stack[-5], 2))
0x91a: @ Rotate(Stack[-2], Stack[-1])
0x91b: Pop(2)
0x91c: PushEmpty(bool)
0x91d: Call2 0xa5c

0x91e: Pop(0)
0x91f: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x920: GOTO 0x929

0x921: Push("head") // @poff=220
0x922: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x923: Pop(1)
0x924: Push(Stack[-1])
0x925: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x926: Push("head") // @poff=220
0x927: @ LookAsyncCamera(Stack[-1])
0x928: Pop(1)
0x929: @ CameraWaitForPlayFinish()
0x92a: Pop(0)
0x92b: @ ResumeWorld()
0x92c: Pop(0)
0x92d: Stack[-21] = (bool) 1
0x92e: Return(); Pop(18)

0x92f: PushEmpty(bool, bool)
0x930: @ CameraSwitchToNormal()
0x931: Pop(0)
0x932: PushEmpty(bool)
0x933: Call2 0xa5c

0x934: Pop(0)
0x935: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x936: GOTO 0x93f

0x937: Push("head") // @poff=220
0x938: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x939: Pop(1)
0x93a: Push(Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93c: Push("head") // @poff=220
0x93d: @ UnlookAsync(Stack[-1])
0x93e: Pop(1)
0x93f: Return(); Pop(2)

0x940: PushEmpty(int, int, int, int)
0x941: Push("voice_common") // @poff=230
0x942: @ GetVariable(Stack[-1], Stack[-3])
0x943: Pop(1)
0x944: Push(Stack[-2])
0x945: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x946: PushEmpty(bool, object)
0x947: Stack[-7] = Stack[-1]
0x948: Call2 0x97a

0x949: Pop(1)
0x94a: Pop(1); Push((bool) Stack[-1] == 0)
0x94b: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x94c: PushEmpty(bool, object)
0x94d: Stack[-7] = Stack[-1]
0x94e: Call2 0x99f

0x94f: Pop(1)
0x950: Pop(1); Push((bool) Stack[-1] == 0)
0x951: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x952: Stack[-6] = (bool) 0
0x953: Return(); Pop(4)

0x954: Push((int) 2)
0x955: @ irand(Stack[-2], Stack[-1])
0x956: Pop(1)
0x957: Push(Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x959: Push("voice_common") // @poff=230
0x95a: Push((int) 1)
0x95b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x95c: Push((int) 3)
0x95d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x95e: @ SetVariable(Stack[-2], Stack[-1])
0x95f: Pop(2)
0x960: GOTO 0x965

0x961: Push("voice_common") // @poff=230
0x962: Push((int) 0)
0x963: @ SetVariable(Stack[-2], Stack[-1])
0x964: Pop(2)
0x965: GOTO 0x978

0x966: PushEmpty(bool, object)
0x967: Stack[-7] = Stack[-1]
0x968: Call2 0x99f

0x969: Pop(1)
0x96a: Pop(1); Push((bool) Stack[-1] == 0)
0x96b: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x96c: PushEmpty(bool, object)
0x96d: Stack[-7] = Stack[-1]
0x96e: Call2 0x97a

0x96f: Pop(1)
0x970: Pop(1); Push((bool) Stack[-1] == 0)
0x971: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x972: Stack[-6] = (bool) 0
0x973: Return(); Pop(4)

0x974: Push("voice_common") // @poff=230
0x975: Push((int) 1)
0x976: @ SetVariable(Stack[-2], Stack[-1])
0x977: Pop(2)
0x978: Stack[-6] = (bool) 1
0x979: Return(); Pop(4)

0x97a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x97b: Stack[-5] = "c" // @poff=256
0x97c: Stack[-4] = (int) 0
0x97d: Push((int) 1)
0x97e: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x97f: Push((int) 1)
0x980: Pop(1); Push(Stack[-5] + Stack[-1]);
0x981: Pop(1); Push(Stack[-6] + Stack[-1]);
0x982: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=260
0x983: Pop(1)
0x984: Pop(0); Push((bool) Stack[-3] == 0)
0x985: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x986: GOTO 0x98a

0x987: Push((int) 1)
0x988: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x989: GOTO 0x97d

0x98a: Pop(0); Push((bool) Stack[-4] == 0)
0x98b: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98c: Stack[-12] = (bool) 0
0x98d: Return(); Pop(10)

0x98e: Stack[-2] = (int) 0
0x98f: Push((int) 1)
0x990: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x991: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x992: @ irand(Stack[-2], Stack[-4])
0x993: Pop(0)
0x994: Push((int) 1)
0x995: Pop(1); Push(Stack[-3] + Stack[-1]);
0x996: Pop(1); Push(Stack[-6] + Stack[-1]);
0x997: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=182
0x998: Pop(1)
0x999: PushEmpty(bool, string)
0x99a: Stack[-3] = Stack[-1]
0x99b: Call2 0x9d7

0x99c: Stack[-2] = Stack[-14]
0x99d: Pop(2)
0x99e: Return(); Pop(10)

0x99f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9a0: Push("d") // @poff=226
0x9a1: PushEmpty(int)
0x9a2: Call2 0xa2d

0x9a3: Pop(0)
0x9a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9a5: Push("m") // @poff=272
0x9a6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9a7: Stack[-4] = (int) 0
0x9a8: Push((int) 1)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9aa: Push((int) 1)
0x9ab: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9ad: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=260
0x9ae: Pop(1)
0x9af: Pop(0); Push((bool) Stack[-3] == 0)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9b1: GOTO 0x9b5

0x9b2: Push((int) 1)
0x9b3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9b4: GOTO 0x9a8

0x9b5: Pop(0); Push((bool) Stack[-4] == 0)
0x9b6: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b7: Stack[-12] = (bool) 0
0x9b8: Return(); Pop(10)

0x9b9: Stack[-2] = (int) 0
0x9ba: Push((int) 1)
0x9bb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9bd: @ irand(Stack[-2], Stack[-4])
0x9be: Pop(0)
0x9bf: Push((int) 1)
0x9c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9c2: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=182
0x9c3: Pop(1)
0x9c4: PushEmpty(bool, string)
0x9c5: Stack[-3] = Stack[-1]
0x9c6: Call2 0x9d7

0x9c7: Stack[-2] = Stack[-14]
0x9c8: Pop(2)
0x9c9: Return(); Pop(10)

0x9ca: PushEmpty(float, float, float, float)
0x9cb: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x9cc: Pop(0)
0x9cd: Push((bool) 0)
0x9ce: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(1)
0x9d0: Return(); Pop(4)

0x9d1: PushEmpty(float, float, float, float)
0x9d2: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x9d3: Pop(0)
0x9d4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x9d5: Pop(0)
0x9d6: Return(); Pop(4)

0x9d7: PushEmpty(bool, bool)
0x9d8: PushEmpty(bool)
0x9d9: Call2 0xa5c

0x9da: Pop(0)
0x9db: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9dc: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9dd: Pop(0)
0x9de: Push(Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9e0: @ lshPlaySpeech(Stack[-3])
0x9e1: Pop(0)
0x9e2: Stack[-4] = (bool) 1
0x9e3: Return(); Pop(2)

0x9e4: Stack[-4] = (bool) 0
0x9e5: Return(); Pop(2)

0x9e6: PushEmpty(bool)
0x9e7: Call2 0xa5c

0x9e8: Pop(0)
0x9e9: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9ea: @ lshStopSpeech()
0x9eb: Pop(0)
0x9ec: Return(); Pop(0)

0x9ed: PushEmpty(object, object)
0x9ee: @ self(Stack[-1])
0x9ef: Pop(0)
0x9f0: Stack[-1] = Stack[-3]
0x9f1: Return(); Pop(2)

0x9f2: Stack[-1] = 0
0x9f3: PushEmpty(float, float)
0x9f4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9f5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9f6: Push((float)9.999999974752427e-07)
0x9f7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f9: Stack[-4] = [0.0, 0.0, 0.0]
0x9fa: Return(); Pop(2)

0x9fb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9fc: Return(); Pop(2)

0x9fd: PushEmpty(int, int)
0x9fe: @ GetVariable(Stack[-3], Stack[-1])
0x9ff: Pop(0)
0xa00: Stack[-1] = Stack[-4]
0xa01: Return(); Pop(2)

0xa02: PushEmpty(object, object)
0xa03: @ CreateIntVector(Stack[-1])
0xa04: Pop(0)
0xa05: @@ add(Stack[-4]); Obj=1 // @poff=276
0xa06: Pop(0)
0xa07: @@ add(Stack[-3]); Obj=1 // @poff=276
0xa08: Pop(0)
0xa09: Push((int) 3)
0xa0a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa0b: Pop(1)
0xa0c: Return(); Pop(2)

0xa0d: Stack[-1] = 0
0xa0e: PushEmpty(int, int)
0xa0f: PushEmpty(object, string, int)
0xa10: Stack[-7] = Stack[-3]
0xa11: Stack[-2] = "money" // @poff=280
0xa12: Stack[-6] = Stack[-1]
0xa13: Call2 0x8cc

0xa14: Pop(3)
0xa15: Push((int) 0)
0xa16: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa18: Push("Money") // @poff=292
0xa19: @ GetInvItemByName(Stack[-2], Stack[-1])
0xa1a: Pop(1)
0xa1b: PushEmpty(int, int)
0xa1c: Stack[-3] = Stack[-2]
0xa1d: Stack[-5] = Stack[-1]
0xa1e: Call2 0xa02

0xa1f: Pop(2)
0xa20: Return(); Pop(2)

0xa21: PushEmpty(object, object)
0xa22: @ FindActor(Stack[-1], Stack[-4])
0xa23: Pop(0)
0xa24: Pop(0); PushNull((bool) Stack[-1] == 0)
0xa25: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa26: Stack[-5] = (bool) 0
0xa27: Return(); Pop(2)

0xa28: @ Trigger(Stack[-1], Stack[-3])
0xa29: Pop(0)
0xa2a: Stack[-5] = (bool) 1
0xa2b: Return(); Pop(2)

0xa2c: Stack[-1] = 0
0xa2d: PushEmpty(float, float)
0xa2e: @ GetGameTime(Stack[-1])
0xa2f: Pop(0)
0xa30: Push((int) 1)
0xa31: PushEmpty(int)
0xa32: Push((int) 24)
0xa33: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa34: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa35: Return(); Pop(2)

0xa36: PushEmpty()
0xa37: PushEmpty(int)
0xa38: Call2 0xa2d

0xa39: Pop(0)
0xa3a: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa3b: Return(); Pop(0)

0xa3c: PushEmpty(string, string)
0xa3d: Stack[-1] = "idle" // @poff=146
0xa3e: Push(Stack[-3])
0xa3f: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa40: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa41: Stack[-1] = Stack[-4]
0xa42: Return(); Pop(2)

0xa43: PushEmpty(int, bool, int, bool)
0xa44: Stack[-2] = (int) 0
0xa45: Push("all") // @poff=138
0xa46: PushEmpty(string, int)
0xa47: Stack[-5] = Stack[-1]
0xa48: Call2 0xa3c

0xa49: Pop(1)
0xa4a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa4b: Pop(2)
0xa4c: Pop(0); Push((bool) Stack[-1] == 0)
0xa4d: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4e: GOTO 0xa52

0xa4f: Push((int) 1)
0xa50: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa51: GOTO 0xa45

0xa52: Stack[-2] = Stack[-5]
0xa53: Return(); Pop(4)

0xa54: Stack[-1] = (int) 515573
0xa55: Return(); Pop(0)

0xa56: Stack[-1] = (int) 504032
0xa57: Return(); Pop(0)

0xa58: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=304
0xa59: Return(); Pop(0)

0xa5a: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=344
0xa5b: Return(); Pop(0)

0xa5c: Stack[-1] = (bool) 1
0xa5d: Return(); Pop(0)

0xa5e: PushEmpty()
0xa5f: Push("ook6Danko1") // @poff=388
0xa60: Push((int) 1)
0xa61: @ SetVariable(Stack[-2], Stack[-1])
0xa62: Pop(2)
0xa63: Return(); Pop(0)

0xa64: PushEmpty()
0xa65: PushEmpty(bool, string, string)
0xa66: Stack[-2] = "quest_k6_01" // @poff=410
0xa67: Stack[-1] = "teleport" // @poff=434
0xa68: Call2 0xa21

0xa69: Pop(3)
0xa6a: Return(); Pop(0)

0xa6b: PushEmpty()
0xa6c: PushEmpty()
0xa6d: Call2 0xb3e

0xa6e: Pop(0)
0xa6f: PushEmpty(bool, string, string)
0xa70: Stack[-2] = "quest_k6_01" // @poff=410
0xa71: Stack[-1] = "completed" // @poff=452
0xa72: Call2 0xa21

0xa73: Pop(3)
0xa74: Return(); Pop(0)

0xa75: PushEmpty()
0xa76: Push("ook7Danko1") // @poff=472
0xa77: Push((int) 1)
0xa78: @ SetVariable(Stack[-2], Stack[-1])
0xa79: Pop(2)
0xa7a: Return(); Pop(0)

0xa7b: PushEmpty()
0xa7c: Push("money1000 is given") // @poff=494
0xa7d: @ Trace(Stack[-1])
0xa7e: Pop(1)
0xa7f: PushEmpty(object, int)
0xa80: Stack[-4] = Stack[-2]
0xa81: Stack[-1] = (int) 1000
0xa82: Call2 0xa0e

0xa83: Pop(2)
0xa84: Return(); Pop(0)

0xa85: PushEmpty()
0xa86: Push("playsound") // @poff=532
0xa87: Push("givemoney") // @poff=552
0xa88: @ TriggerWorld(Stack[-2], Stack[-1])
0xa89: Pop(2)
0xa8a: Return(); Pop(0)

0xa8b: PushEmpty()
0xa8c: Push("k12q01DankoInSobor") // @poff=572
0xa8d: Push((int) 1)
0xa8e: @ SetVariable(Stack[-2], Stack[-1])
0xa8f: Pop(2)
0xa90: PushEmpty()
0xa91: Call2 0xb17

0xa92: Pop(0)
0xa93: Return(); Pop(0)

0xa94: PushEmpty()
0xa95: PushEmpty(int, string)
0xa96: Stack[-1] = "k12q01_Danko" // @poff=610
0xa97: Call2 0x9fd

0xa98: Pop(1)
0xa99: Push((int) 0)
0xa9a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa9b: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xa9c: Push("k12q01_Danko") // @poff=610
0xa9d: Push((int) 1)
0xa9e: @ SetVariable(Stack[-2], Stack[-1])
0xa9f: Pop(2)
0xaa0: PushEmpty()
0xaa1: Call2 0xb24

0xaa2: Pop(0)
0xaa3: Return(); Pop(0)

0xaa4: PushEmpty()
0xaa5: Push("ook12Danko1") // @poff=636
0xaa6: Push((int) 1)
0xaa7: @ SetVariable(Stack[-2], Stack[-1])
0xaa8: Pop(2)
0xaa9: Return(); Pop(0)

0xaaa: PushEmpty()
0xaab: Push("k5q04") // @poff=660
0xaac: Push((int) 3)
0xaad: @ SetVariable(Stack[-2], Stack[-1])
0xaae: Pop(2)
0xaaf: PushEmpty()
0xab0: Call2 0xb31

0xab1: Pop(0)
0xab2: Return(); Pop(0)

0xab3: PushEmpty()
0xab4: PushEmpty(int, string)
0xab5: Stack[-1] = "game_final" // @poff=672
0xab6: Call2 0x9fd

0xab7: Pop(1)
0xab8: Push((int) 0)
0xab9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabb: Stack[-2] = (bool) 1
0xabc: Return(); Pop(0)

0xabd: Stack[-2] = (bool) 0
0xabe: Return(); Pop(0)

0xabf: PushEmpty()
0xac0: PushEmpty(bool, object)
0xac1: Stack[-3] = Stack[-1]
0xac2: Call2 0xb11

0xac3: Pop(1)
0xac4: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac5: Stack[-2] = (bool) 1
0xac6: Return(); Pop(0)

0xac7: Stack[-2] = (bool) 0
0xac8: Return(); Pop(0)

0xac9: PushEmpty()
0xaca: PushEmpty(int, string)
0xacb: Stack[-1] = "ook6Danko1" // @poff=388
0xacc: Call2 0x9fd

0xacd: Pop(1)
0xace: Push((int) 0)
0xacf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xad1: Stack[-2] = (bool) 1
0xad2: Return(); Pop(0)

0xad3: Stack[-2] = (bool) 0
0xad4: Return(); Pop(0)

0xad5: PushEmpty()
0xad6: PushEmpty(int, string)
0xad7: Stack[-1] = "k7q01" // @poff=694
0xad8: Call2 0x9fd

0xad9: Pop(1)
0xada: Push((int) 0)
0xadb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xadc: IF (Stack[-1] == 0) GOTO 0xadf; Pop(1)

0xadd: Stack[-2] = (bool) 1
0xade: Return(); Pop(0)

0xadf: Stack[-2] = (bool) 0
0xae0: Return(); Pop(0)

0xae1: PushEmpty()
0xae2: PushEmpty(int, string)
0xae3: Stack[-1] = "ook7Danko1" // @poff=472
0xae4: Call2 0x9fd

0xae5: Pop(1)
0xae6: Push((int) 0)
0xae7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae9: Stack[-2] = (bool) 1
0xaea: Return(); Pop(0)

0xaeb: Stack[-2] = (bool) 0
0xaec: Return(); Pop(0)

0xaed: PushEmpty()
0xaee: PushEmpty(int, string)
0xaef: Stack[-1] = "k12q01DankoInSobor" // @poff=572
0xaf0: Call2 0x9fd

0xaf1: Pop(1)
0xaf2: Push((int) 0)
0xaf3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xaf4: IF (Stack[-1] == 0) GOTO 0xaf7; Pop(1)

0xaf5: Stack[-2] = (bool) 1
0xaf6: Return(); Pop(0)

0xaf7: Stack[-2] = (bool) 0
0xaf8: Return(); Pop(0)

0xaf9: PushEmpty()
0xafa: PushEmpty(int, string)
0xafb: Stack[-1] = "ook12Danko1" // @poff=636
0xafc: Call2 0x9fd

0xafd: Pop(1)
0xafe: Push((int) 0)
0xaff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xb01: Stack[-2] = (bool) 1
0xb02: Return(); Pop(0)

0xb03: Stack[-2] = (bool) 0
0xb04: Return(); Pop(0)

0xb05: PushEmpty()
0xb06: PushEmpty(int, string)
0xb07: Stack[-1] = "k5q04" // @poff=660
0xb08: Call2 0x9fd

0xb09: Pop(1)
0xb0a: Push((int) 2)
0xb0b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0d: Stack[-2] = (bool) 1
0xb0e: Return(); Pop(0)

0xb0f: Stack[-2] = (bool) 0
0xb10: Return(); Pop(0)

0xb11: PushEmpty()
0xb12: PushEmpty(bool)
0xb13: Call2 0xbbd

0xb14: Stack[-1] = Stack[-3]
0xb15: Pop(1)
0xb16: Return(); Pop(0)

0xb17: PushEmpty(object, object)
0xb18: Push((int) 730)
0xb19: Push((int) 1)
0xb1a: Push((int) 539360)
0xb1b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb1c: Pop(3)
0xb1d: PushEmpty(bool, object, int)
0xb1e: Stack[-4] = Stack[-2]
0xb1f: Stack[-1] = (int) 729
0xb20: Call2 0xb58

0xb21: Pop(3)
0xb22: Return(); Pop(2)

0xb23: Stack[-1] = 0
0xb24: PushEmpty(object, object)
0xb25: Push((int) 736)
0xb26: Push((int) 1)
0xb27: Push((int) 539366)
0xb28: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb29: Pop(3)
0xb2a: PushEmpty(bool, object, int)
0xb2b: Stack[-4] = Stack[-2]
0xb2c: Stack[-1] = (int) 729
0xb2d: Call2 0xb58

0xb2e: Pop(3)
0xb2f: Return(); Pop(2)

0xb30: Stack[-1] = 0
0xb31: PushEmpty(object, object)
0xb32: Push((int) 743)
0xb33: Push((int) 2)
0xb34: Push((int) 539460)
0xb35: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb36: Pop(3)
0xb37: PushEmpty(bool, object, int)
0xb38: Stack[-4] = Stack[-2]
0xb39: Stack[-1] = (int) 740
0xb3a: Call2 0xb58

0xb3b: Pop(3)
0xb3c: Return(); Pop(2)

0xb3d: Stack[-1] = 0
0xb3e: PushEmpty(object, object)
0xb3f: Push((int) 415)
0xb40: Push((int) 1)
0xb41: Push((int) 526116)
0xb42: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: PushEmpty(bool, object, int)
0xb45: Stack[-4] = Stack[-2]
0xb46: Stack[-1] = (int) 408
0xb47: Call2 0xb58

0xb48: Pop(3)
0xb49: Return(); Pop(2)

0xb4a: Stack[-1] = 0
0xb4b: PushEmpty(object, object)
0xb4c: @ GetDiaryRoot(Stack[-1])
0xb4d: Pop(0)
0xb4e: Pop(0); Push((bool) Stack[-1] == 0)
0xb4f: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb50: Push("Can't retrieve diary root") // @poff=706
0xb51: @ Trace(Stack[-1])
0xb52: Pop(1)
0xb53: Stack[-3] = (bool) 0
0xb54: Return(); Pop(2)

0xb55: Stack[-1] = Stack[-3]
0xb56: Return(); Pop(2)

0xb57: Stack[-1] = 0
0xb58: PushEmpty(object, object, int, object, object, int)
0xb59: PushEmpty(object)
0xb5a: Call2 0xb4b

0xb5b: Stack[-1] = Stack[-4]
0xb5c: Pop(1)
0xb5d: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=758
0xb5e: Pop(0)
0xb5f: Pop(0); Push((bool) Stack[-2] == 0)
0xb60: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb61: Push("Can't find diary parent with id: ") // @poff=763
0xb62: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb63: @ Trace(Stack[-1])
0xb64: Pop(1)
0xb65: Stack[-9] = (bool) 0
0xb66: Return(); Pop(6)

0xb67: @@ AddChild(Stack[-8]); Obj=2 // @poff=831
0xb68: Pop(0)
0xb69: Push((int) 7)
0xb6a: @ SendWorldWndMessage(Stack[-1])
0xb6b: Pop(1)
0xb6c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=840
0xb6d: Pop(0)
0xb6e: @ SetDiarySection(Stack[-1])
0xb6f: Pop(0)
0xb70: Stack[-9] = (bool) 0
0xb71: Return(); Pop(6)

0xb72: Stack[-2] = 0
0xb73: Stack[-3] = 0
0xb74: PushEmpty(int, int)
0xb75: Push("branch") // @poff=852
0xb76: @ GetVariable(Stack[-1], Stack[-2])
0xb77: Pop(1)
0xb78: Push((int) 0)
0xb79: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7b: Stack[-3] = (int) 1
0xb7c: Return(); Pop(2)

0xb7d: GOTO 0xb83

0xb7e: Push((int) 1)
0xb7f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb80: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb81: Stack[-3] = (int) 2
0xb82: Return(); Pop(2)

0xb83: Stack[-3] = (int) 3
0xb84: Return(); Pop(2)

0xb85: PushEmpty()
0xb86: Push((int) 6)
0xb87: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb88: Pop(1)
0xb89: Push((int) 26)
0xb8a: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb8b: Pop(1)
0xb8c: Push((int) 2)
0xb8d: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb8e: Pop(1)
0xb8f: Push((int) 22)
0xb90: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb91: Pop(1)
0xb92: Push((bool) 0)
0xb93: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb94: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xb95: Push((int) 15)
0xb96: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb97: Pop(1)
0xb98: Push((int) 5)
0xb99: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb9a: Pop(1)
0xb9b: Push((int) 16)
0xb9c: @@ add(Stack[-1]); Obj=4 // @poff=276
0xb9d: Pop(1)
0xb9e: Push((int) 19)
0xb9f: @@ add(Stack[-1]); Obj=4 // @poff=276
0xba0: Pop(1)
0xba1: GOTO 0xba8

0xba2: Push((int) 0)
0xba3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xba4: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba5: Push((int) 15)
0xba6: @@ add(Stack[-1]); Obj=4 // @poff=276
0xba7: Pop(1)
0xba8: Return(); Pop(0)

0xba9: PushEmpty(int, int)
0xbaa: Push("vol_") // @poff=866
0xbab: Pop(1); Push(Stack[-1] + Stack[-4]);
0xbac: @ GetVariable(Stack[-1], Stack[-2])
0xbad: Pop(1)
0xbae: Push((int) 4)
0xbaf: Pop(1); Push(Stack[-2] & Stack[-1]);
0xbb0: Push((int) 0)
0xbb1: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xbb2: Return(); Pop(2)

0xbb3: PushEmpty(int, int)
0xbb4: Push("vol_") // @poff=866
0xbb5: Pop(1); Push(Stack[-1] + Stack[-4]);
0xbb6: @ GetVariable(Stack[-1], Stack[-2])
0xbb7: Pop(1)
0xbb8: Push((int) 16)
0xbb9: Pop(1); Push(Stack[-2] & Stack[-1]);
0xbba: Push((int) 0)
0xbbb: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xbbc: Return(); Pop(2)

0xbbd: PushEmpty(object, int, int, int, object, int, int, int)
0xbbe: @ CreateIntVector(Stack[-4])
0xbbf: Pop(0)
0xbc0: PushEmpty(object, bool, int)
0xbc1: Stack[-7] = Stack[-3]
0xbc2: Stack[-2] = (bool) 0
0xbc3: Stack[-1] = (int) -1
0xbc4: Call2 0xb85

0xbc5: Pop(3)
0xbc6: @@ size(Stack[-3]); Obj=4 // @poff=876
0xbc7: Pop(0)
0xbc8: Stack[-2] = (int) 0
0xbc9: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xbca: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbcb: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=881
0xbcc: Pop(0)
0xbcd: PushEmpty(bool)
0xbce: Stack[-1] = (bool) 1
0xbcf: PushEmpty(bool, int)
0xbd0: Stack[-4] = Stack[-1]
0xbd1: Call2 0xbb3

0xbd2: Pop(1)
0xbd3: IF (Stack[-1] == 1) GOTO 0xbda; Pop(1)

0xbd4: PushEmpty(bool, int)
0xbd5: Stack[-4] = Stack[-1]
0xbd6: Call2 0xba9

0xbd7: Pop(1)
0xbd8: IF (Stack[-1] == 1) GOTO 0xbda; Pop(1)

0xbd9: Stack[-1] = (bool) 0
0xbda: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbdb: Stack[-9] = (bool) 0
0xbdc: Return(); Pop(8)

0xbdd: Push((int) 1)
0xbde: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbdf: GOTO 0xbc9

0xbe0: Stack[-9] = (bool) 1
0xbe1: Return(); Pop(8)

0xbe2: Stack[-4] = 0
0xbe3: PushEmpty(int, int)
0xbe4: Push("mt_danko") // @poff=885
0xbe5: @ GetVariable(Stack[-1], Stack[-2])
0xbe6: Pop(1)
0xbe7: Pop(0); Push((bool) Stack[-1] == 0)
0xbe8: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbe9: PushEmpty(int, object)
0xbea: Stack[-5] = Stack[-1]
0xbeb: Push(-2, 1); TaskCall(1)
0xbec: Call2 0xd

0xbed: Pop(-2, 1); TaskReturn
0xbee: Pop(2)
0xbef: Push("mt_danko") // @poff=885
0xbf0: Push((int) 1)
0xbf1: @ SetVariable(Stack[-2], Stack[-1])
0xbf2: Pop(2)
0xbf3: PushEmpty(bool, int)
0xbf4: Stack[-1] = (int) 5
0xbf5: Call2 0xa36

0xbf6: Pop(1)
0xbf7: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbf8: PushEmpty(int, object)
0xbf9: Stack[-5] = Stack[-1]
0xbfa: Push(-2, 1); TaskCall(9)
0xbfb: Call2 0x596

0xbfc: Pop(-2, 1); TaskReturn
0xbfd: Pop(2)
0xbfe: Return(); Pop(2)

0xbff: PushEmpty(bool, int)
0xc00: Stack[-1] = (int) 6
0xc01: Call2 0xa36

0xc02: Pop(1)
0xc03: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc04: PushEmpty(int, object)
0xc05: Stack[-5] = Stack[-1]
0xc06: Push(-2, 1); TaskCall(3)
0xc07: Call2 0x106

0xc08: Pop(-2, 1); TaskReturn
0xc09: Pop(2)
0xc0a: Return(); Pop(2)

0xc0b: PushEmpty(bool, int)
0xc0c: Stack[-1] = (int) 7
0xc0d: Call2 0xa36

0xc0e: Pop(1)
0xc0f: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc10: PushEmpty(int, object)
0xc11: Stack[-5] = Stack[-1]
0xc12: Push(-2, 1); TaskCall(5)
0xc13: Call2 0x262

0xc14: Pop(-2, 1); TaskReturn
0xc15: Pop(2)
0xc16: Return(); Pop(2)

0xc17: PushEmpty(bool, int)
0xc18: Stack[-1] = (int) 12
0xc19: Call2 0xa36

0xc1a: Pop(1)
0xc1b: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc1c: PushEmpty(int, object)
0xc1d: Stack[-5] = Stack[-1]
0xc1e: Push(-2, 1); TaskCall(7)
0xc1f: Call2 0x3a7

0xc20: Pop(-2, 1); TaskReturn
0xc21: Pop(2)
0xc22: Return(); Pop(2)

0xc23: PushEmpty(int, object)
0xc24: Stack[-5] = Stack[-1]
0xc25: Push(-2, 1); TaskCall(11)
0xc26: Call2 0x6f3

0xc27: Pop(-2, 1); TaskReturn
0xc28: Pop(2)
0xc29: Return(); Pop(2)

