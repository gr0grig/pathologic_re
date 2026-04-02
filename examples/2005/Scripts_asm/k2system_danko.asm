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
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:klara2_npc_positioner
	W:remove_danko
	W:remove_burah
	W:k2system_klara_day
	W:k2system_burah_day
	W:k2system_danko_day
	W:k2system_burah_state
	W:k2system_danko_state
	W:k2system_klara_state
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006b006c0061007200610032005f006e00700063005f0070006f0073006900740069006f006e00650072000000720065006d006f00760065005f00640061006e006b006f000000720065006d006f00760065005f006200750072006100680000006b003200730079007300740065006d005f006b006c006100720061005f0064006100790000006b003200730079007300740065006d005f00620075007200610068005f0064006100790000006b003200730079007300740065006d005f00640061006e006b006f005f0064006100790000006b003200730079007300740065006d005f00620075007200610068005f007300740061007400650000006b003200730079007300740065006d005f00640061006e006b006f005f007300740061007400650000006b003200730079007300740065006d005f006b006c006100720061005f00730074006100740065000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetProperty (2 args)

RunOp = 0x2d8
RunTask = 5

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a1 Vars = (int, int)
	GTASK_5 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x2e0 Vars = (string)
		EVENT_6 Op = 0x2f4 Vars = ()
		EVENT_5 Op = 0x301 Vars = ()
		EVENT_7 Op = 0x350 Vars = (int)
		EVENT_45 Op = 0x392 Vars = (bool)
		EVENT_0 Op = 0x39e Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x422

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
0x11: Call2 0x529

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x47c

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x427

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x568

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x566

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x56a

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x56c

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x60e

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
0x55: Call2 0x46b

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
0x68: Push((int) 539066)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 539067)
0x6e: Push((int) -1)
0x6f: Push((int) 41015)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 541074)
0x73: Push((int) -1)
0x74: Push((int) 43179)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x56e

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x506

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
0x9a: Call2 0x56e

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
0xaa: Call2 0x50d

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x522

0xb3: Pop(0)
0xb4: Push((int) 41014)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 539066)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 539067)
0xc1: Push((int) -1)
0xc2: Push((int) 41015)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 541074)
0xc6: Push((int) -1)
0xc7: Push((int) 43179)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcc: PushEmpty(bool)
0xcd: Call2 0x56e

0xce: Pop(0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd0: @ lshStopAnimation()
0xd1: Pop(0)
0xd2: GOTO 0xd5

0xd3: @ StopAnimation()
0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: GOTO 0xaf

0xd7: Return(); Pop(0)

0xd8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xda: PushEmpty(bool, object)
0xdb: PushEmpty(object)
0xdc: Call2 0x529

0xdd: Stack[-1] = Stack[-2]
0xde: Pop(1)
0xdf: Call2 0x47c

0xe0: Pop(2)
0xe1: PushEmpty(bool, object, float)
0xe2: Stack[-12] = Stack[-2]
0xe3: Stack[-1] = (float) 70.0
0xe4: Call2 0x427

0xe5: Pop(2)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: Stack[-10] = (int) -2
0xe9: Return(); Pop(8)

0xea: @ CreateDialog(Stack[-4])
0xeb: Pop(0)
0xec: PushEmpty(int)
0xed: Call2 0x568

0xee: Pop(0)
0xef: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0xf0: Pop(1)
0xf1: PushEmpty(int)
0xf2: Call2 0x566

0xf3: Pop(0)
0xf4: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0xf5: Pop(1)
0xf6: PushEmpty(string)
0xf7: Call2 0x56a

0xf8: Pop(0)
0xf9: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0xfa: Pop(1)
0xfb: PushEmpty(string)
0xfc: Call2 0x56c

0xfd: Pop(0)
0xfe: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0xff: Pop(1)
0x100: PushEmpty(int)
0x101: Call2 0x60e

0x102: Pop(0)
0x103: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x104: Pop(1)
0x105: Stack[-2] = (int) -1
0x106: @ IsOverrideActive(Stack[-3])
0x107: Pop(0)
0x108: Push(Stack[-3])
0x109: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10a: Stack[-10] = (int) -2
0x10b: Return(); Pop(8)

0x10c: @ DoDialog(Stack[-4])
0x10d: Pop(0)
0x10e: PushEmpty(object, object)
0x10f: Stack[-11] = Stack[-2]
0x110: Stack[-6] = Stack[-1]
0x111: Push(-2, 4); TaskCall(4)
0x112: Call2 0x129

0x113: Pop(-2, 4); TaskReturn
0x114: Pop(2)
0x115: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x116: Pop(0)
0x117: Pop(0); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: @ sync()
0x11a: Pop(0)
0x11b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x11c: Pop(0)
0x11d: GOTO 0x117

0x11e: PushEmpty(object)
0x11f: Stack[-10] = Stack[-1]
0x120: Call2 0x46b

0x121: Pop(1)
0x122: @ StopDialog(Stack[-4])
0x123: Pop(0)
0x124: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x125: Pop(0)
0x126: Stack[-2] = Stack[-10]
0x127: Return(); Pop(8)

0x128: Stack[-4] = 0
0x129: PushEmpty()
0x12a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12d: Push((int) 1)
0x12e: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral" // @poff=89
0x131: Call2 0x18b

0x132: Pop(1)
0x133: Push((int) 539760)
0x134: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x135: Pop(1)
0x136: @@@ ClearReplies(); Obj=0 // @poff=116
0x137: Pop(0)
0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call2 0x598

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: Push((int) 539761)
0x13e: Push((int) 41714)
0x13f: Push((int) 41713)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x598

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: Push((int) 539764)
0x148: Push((int) 41717)
0x149: Push((int) 41716)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x58e

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 539767)
0x152: Push((int) 41720)
0x153: Push((int) 41719)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x155: Pop(3)
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x5a2

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: Push((int) 539770)
0x15c: Push((int) 41723)
0x15d: Push((int) 41722)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: Push((int) 539773)
0x161: Push((int) -1)
0x162: Push((int) 41725)
0x163: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x164: Pop(3)
0x165: Push((int) 541091)
0x166: Push((int) -1)
0x167: Push((int) 43200)
0x168: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x169: Pop(3)
0x16a: GOTO 0x16d

0x16b: Return(); Pop(0)

0x16c: GOTO 0x12d

0x16d: PushEmpty(bool)
0x16e: Call2 0x56e

0x16f: Pop(0)
0x170: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x171: @ lshWaitForAnimEnd()
0x172: Pop(0)
0x173: Push( Stack[3 + Tasks[-1].StackPointer] )
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: GOTO 0x17b

0x176: PushEmpty(string)
0x177: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x178: Call2 0x506

0x179: Pop(1)
0x17a: GOTO 0x171

0x17b: GOTO 0x18a

0x17c: Push("all") // @poff=138
0x17d: Push("idle") // @poff=146
0x17e: @ PlayAnimation(Stack[-2], Stack[-1])
0x17f: Pop(2)
0x180: @ WaitForAnimEnd()
0x181: Pop(0)
0x182: Push( Stack[3 + Tasks[-1].StackPointer] )
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x18a

0x185: Push("all") // @poff=138
0x186: Push("idle") // @poff=146
0x187: @ PlayAnimation(Stack[-2], Stack[-1])
0x188: Pop(2)
0x189: GOTO 0x180

0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: PushEmpty(bool)
0x18d: Call2 0x56e

0x18e: Pop(0)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Return(); Pop(0)

0x192: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: PushEmpty(string, bool)
0x196: Stack[-3] = Stack[-2]
0x197: Push("") // @poff=102
0x198: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-1] = (bool) 0
0x19b: GOTO 0x19d

0x19c: Stack[-1] = (bool) 1
0x19d: Call2 0x50d

0x19e: Pop(2)
0x19f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty()
0x1a2: Push((int) 1)
0x1a3: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x1a4: PushEmpty()
0x1a5: Call2 0x522

0x1a6: Pop(0)
0x1a7: Push((int) 41715)
0x1a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1aa: PushEmpty(object, object)
0x1ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ad: Call2 0x570

0x1ae: Pop(2)
0x1af: PushEmpty(object, object)
0x1b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b2: Call2 0x589

0x1b3: Pop(2)
0x1b4: Push((int) 41718)
0x1b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x575

0x1bb: Pop(2)
0x1bc: Push((int) 41721)
0x1bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(object, object)
0x1c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call2 0x57a

0x1c3: Pop(2)
0x1c4: PushEmpty(object, object)
0x1c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call2 0x584

0x1c8: Pop(2)
0x1c9: PushEmpty(object, object)
0x1ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cc: Call2 0x589

0x1cd: Pop(2)
0x1ce: Push((int) 41724)
0x1cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0x57f

0x1d5: Pop(2)
0x1d6: Push((int) 41712)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral" // @poff=89
0x1db: Call2 0x18b

0x1dc: Pop(1)
0x1dd: Push((int) 539760)
0x1de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1df: Pop(1)
0x1e0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e1: Pop(0)
0x1e2: PushEmpty(bool, object)
0x1e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Call2 0x598

0x1e5: Pop(1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: Push((int) 539761)
0x1e8: Push((int) 41714)
0x1e9: Push((int) 41713)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call2 0x598

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f1: Push((int) 539764)
0x1f2: Push((int) 41717)
0x1f3: Push((int) 41716)
0x1f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f5: Pop(3)
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0x58e

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: Push((int) 539767)
0x1fc: Push((int) 41720)
0x1fd: Push((int) 41719)
0x1fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ff: Pop(3)
0x200: PushEmpty(bool, object)
0x201: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x202: Call2 0x5a2

0x203: Pop(1)
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: Push((int) 539770)
0x206: Push((int) 41723)
0x207: Push((int) 41722)
0x208: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x209: Pop(3)
0x20a: Push((int) 539773)
0x20b: Push((int) -1)
0x20c: Push((int) 41725)
0x20d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20e: Pop(3)
0x20f: Push((int) 541091)
0x210: Push((int) -1)
0x211: Push((int) 43200)
0x212: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x213: Pop(3)
0x214: Return(); Pop(0)

0x215: Push((int) 41723)
0x216: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x218: PushEmpty(string)
0x219: Stack[-1] = "Neutral" // @poff=89
0x21a: Call2 0x18b

0x21b: Pop(1)
0x21c: Push((int) 539771)
0x21d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21e: Pop(1)
0x21f: @@@ ClearReplies(); Obj=0 // @poff=116
0x220: Pop(0)
0x221: Push((int) 541092)
0x222: Push((int) 43203)
0x223: Push((int) 43201)
0x224: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x225: Pop(3)
0x226: Push((int) 541093)
0x227: Push((int) 43203)
0x228: Push((int) 43202)
0x229: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Push((int) 43203)
0x22d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral" // @poff=89
0x231: Call2 0x18b

0x232: Pop(1)
0x233: Push((int) 541094)
0x234: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x235: Pop(1)
0x236: @@@ ClearReplies(); Obj=0 // @poff=116
0x237: Pop(0)
0x238: Push((int) 539772)
0x239: Push((int) -1)
0x23a: Push((int) 41724)
0x23b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23c: Pop(3)
0x23d: Return(); Pop(0)

0x23e: Push((int) 41720)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral" // @poff=89
0x243: Call2 0x18b

0x244: Pop(1)
0x245: Push((int) 539768)
0x246: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x247: Pop(1)
0x248: @@@ ClearReplies(); Obj=0 // @poff=116
0x249: Pop(0)
0x24a: Push((int) 541095)
0x24b: Push((int) 43207)
0x24c: Push((int) 43205)
0x24d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24e: Pop(3)
0x24f: Push((int) 541096)
0x250: Push((int) 43207)
0x251: Push((int) 43206)
0x252: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 43207)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral" // @poff=89
0x25a: Call2 0x18b

0x25b: Pop(1)
0x25c: Push((int) 541097)
0x25d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25e: Pop(1)
0x25f: @@@ ClearReplies(); Obj=0 // @poff=116
0x260: Pop(0)
0x261: Push((int) 541098)
0x262: Push((int) 43211)
0x263: Push((int) 43209)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Push((int) 541099)
0x267: Push((int) 43211)
0x268: Push((int) 43210)
0x269: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: Push((int) 43211)
0x26d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral" // @poff=89
0x271: Call2 0x18b

0x272: Pop(1)
0x273: Push((int) 541100)
0x274: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x275: Pop(1)
0x276: @@@ ClearReplies(); Obj=0 // @poff=116
0x277: Pop(0)
0x278: Push((int) 539769)
0x279: Push((int) -1)
0x27a: Push((int) 41721)
0x27b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Push((int) 41717)
0x27f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral" // @poff=89
0x283: Call2 0x18b

0x284: Pop(1)
0x285: Push((int) 539765)
0x286: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x287: Pop(1)
0x288: @@@ ClearReplies(); Obj=0 // @poff=116
0x289: Pop(0)
0x28a: Push((int) 541101)
0x28b: Push((int) 43215)
0x28c: Push((int) 43213)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Push((int) 541102)
0x290: Push((int) 43216)
0x291: Push((int) 43214)
0x292: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x293: Pop(3)
0x294: Return(); Pop(0)

0x295: Push((int) 43216)
0x296: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Neutral" // @poff=89
0x29a: Call2 0x18b

0x29b: Pop(1)
0x29c: Push((int) 541104)
0x29d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29e: Pop(1)
0x29f: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a0: Pop(0)
0x2a1: Push((int) 541105)
0x2a2: Push((int) 43215)
0x2a3: Push((int) 43217)
0x2a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a5: Pop(3)
0x2a6: Return(); Pop(0)

0x2a7: Push((int) 43215)
0x2a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral" // @poff=89
0x2ac: Call2 0x18b

0x2ad: Pop(1)
0x2ae: Push((int) 541103)
0x2af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b0: Pop(1)
0x2b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b2: Pop(0)
0x2b3: Push((int) 539766)
0x2b4: Push((int) -1)
0x2b5: Push((int) 41718)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b7: Pop(3)
0x2b8: Return(); Pop(0)

0x2b9: Push((int) 41714)
0x2ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2bc: PushEmpty(string)
0x2bd: Stack[-1] = "Neutral" // @poff=89
0x2be: Call2 0x18b

0x2bf: Pop(1)
0x2c0: Push((int) 539762)
0x2c1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c2: Pop(1)
0x2c3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c4: Pop(0)
0x2c5: Push((int) 539763)
0x2c6: Push((int) -1)
0x2c7: Push((int) 41715)
0x2c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2cc: PushEmpty(bool)
0x2cd: Call2 0x56e

0x2ce: Pop(0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d0: @ lshStopAnimation()
0x2d1: Pop(0)
0x2d2: GOTO 0x2d5

0x2d3: @ StopAnimation()
0x2d4: Pop(0)
0x2d5: Return(); Pop(0)

0x2d6: GOTO 0x1a2

0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: Call2 0x2dc

0x2da: Pop(0)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty()
0x2dd: Call2 0x305

0x2de: Pop(0)
0x2df: Return(); Pop(0)

0x2e0: PushEmpty(bool, bool)
0x2e1: Push("cleanup") // @poff=156
0x2e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e4: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x2e5: @ IsLoaded(Stack[-1])
0x2e6: Pop(0)
0x2e7: Pop(0); Push((bool) Stack[-1] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: PushEmpty(object)
0x2ea: Call2 0x529

0x2eb: Pop(0)
0x2ec: @ RemoveActor(Stack[-1])
0x2ed: Pop(1)
0x2ee: GOTO 0x2f3

0x2ef: Push("restore") // @poff=172
0x2f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2f3: Return(); Pop(2)

0x2f4: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f6: PushEmpty(object)
0x2f7: Call2 0x529

0x2f8: Pop(0)
0x2f9: @ RemoveActor(Stack[-1])
0x2fa: Pop(1)
0x2fb: @ Hold()
0x2fc: Pop(0)
0x2fd: PushEmpty()
0x2fe: Call2 0x376

0x2ff: Pop(0)
0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: Call2 0x385

0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: PushEmpty(bool)
0x306: Call2 0x422

0x307: Pop(0)
0x308: Pop(1); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: PushEmpty()
0x30b: Push(-0, 0); TaskCall(0)
0x30c: Call2 0x0

0x30d: Pop(-0, 0); TaskReturn
0x30e: Pop(0)
0x30f: PushEmpty()
0x310: Call2 0x301

0x311: Pop(0)
0x312: @ GetDirection(Stack[-0]T)
0x313: Pop(0)
0x314: PushEmpty()
0x315: Call2 0x3bb

0x316: Pop(0)
0x317: GOTO 0x314

0x318: Return(); Pop(0)

0x319: PushEmpty(object, object)
0x31a: Push("player") // @poff=188
0x31b: @ FindActor(Stack[-2], Stack[-1])
0x31c: Pop(1)
0x31d: Pop(0); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31f: Stack[-3] = (bool) 0
0x320: Return(); Pop(2)

0x321: PushEmpty(bool, object)
0x322: Stack[-3] = Stack[-1]
0x323: Call2 0x419

0x324: Stack[-2] = Stack[-5]
0x325: Pop(2)
0x326: Return(); Pop(2)

0x327: Stack[-1] = 0
0x328: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x329: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x32a: @ RotateAsync(Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: Return(); Pop(0)

0x32d: PushEmpty(object, bool, object, bool)
0x32e: Push("player") // @poff=188
0x32f: @ FindActor(Stack[-3], Stack[-1])
0x330: Pop(1)
0x331: Pop(0); Push((bool) Stack[-2] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-5] = (bool) 0
0x334: Return(); Pop(4)

0x335: PushEmpty(float, object)
0x336: Stack[-4] = Stack[-1]
0x337: Call2 0x407

0x338: Pop(1)
0x339: Push((float)90000.0)
0x33a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-5] = (bool) 0
0x33d: Return(); Pop(4)

0x33e: @ CanSee(Stack[-1], Stack[-2])
0x33f: Pop(0)
0x340: Stack[-1] = Stack[-5]
0x341: Return(); Pop(4)

0x342: Stack[-2] = 0
0x343: PushEmpty(float, float)
0x344: Push((int) 8)
0x345: Push((int) 16)
0x346: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: Push((int) 10)
0x349: @ SetTimer(Stack[-1], Stack[-2])
0x34a: Pop(1)
0x34b: Return(); Pop(2)

0x34c: Push((int) 10)
0x34d: @ KillTimer(Stack[-1])
0x34e: Pop(1)
0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: Push((int) 10)
0x352: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x354: PushEmpty()
0x355: Call2 0x34c

0x356: Pop(0)
0x357: PushEmpty(bool)
0x358: Stack[-1] = (bool) 0
0x359: PushEmpty(bool)
0x35a: Call2 0x422

0x35b: Pop(0)
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: PushEmpty(bool)
0x35e: Call2 0x32d

0x35f: Pop(0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = (bool) 1
0x362: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x363: PushEmpty(bool)
0x364: Call2 0x319

0x365: Pop(0)
0x366: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x367: PushEmpty(bool, object)
0x368: PushEmpty(object)
0x369: Call2 0x529

0x36a: Stack[-1] = Stack[-2]
0x36b: Pop(1)
0x36c: Call2 0x4b6

0x36d: Pop(2)
0x36e: GOTO 0x375

0x36f: PushEmpty()
0x370: Call2 0x328

0x371: Pop(0)
0x372: PushEmpty()
0x373: Call2 0x343

0x374: Pop(0)
0x375: Return(); Pop(0)

0x376: PushEmpty()
0x377: Call2 0x402

0x378: Pop(0)
0x379: PushEmpty()
0x37a: Call2 0x34c

0x37b: Pop(0)
0x37c: @ lshStopSpeech()
0x37d: Pop(0)
0x37e: @ lshStopAnimation()
0x37f: Pop(0)
0x380: @ StopAsync()
0x381: Pop(0)
0x382: @ Hold()
0x383: Pop(0)
0x384: Return(); Pop(0)

0x385: @ StopGroup0()
0x386: Pop(0)
0x387: PushEmpty()
0x388: Call2 0x34c

0x389: Pop(0)
0x38a: PushEmpty(string)
0x38b: Stack[-1] = "Neutral" // @poff=89
0x38c: Call2 0x506

0x38d: Pop(1)
0x38e: PushEmpty()
0x38f: Call2 0x343

0x390: Pop(0)
0x391: Return(); Pop(0)

0x392: PushEmpty()
0x393: Push(Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x395: PushEmpty()
0x396: Call2 0x343

0x397: Pop(0)
0x398: GOTO 0x39d

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Neutral" // @poff=89
0x39b: Call2 0x506

0x39c: Pop(1)
0x39d: Return(); Pop(0)

0x39e: PushEmpty(bool, bool)
0x39f: @ IsOverrideActive(Stack[-1])
0x3a0: Pop(0)
0x3a1: Pop(0); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3a3: EventDisable(0)
0x3a4: PushEmpty()
0x3a5: Call2 0x402

0x3a6: Pop(0)
0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-5] = Stack[-1]
0x3a9: Call2 0x419

0x3aa: Pop(2)
0x3ab: EventEnable(0)
0x3ac: PushEmpty(object)
0x3ad: Stack[-4] = Stack[-1]
0x3ae: Call2 0x6ab

0x3af: Pop(1)
0x3b0: PushEmpty(string)
0x3b1: Stack[-1] = "Neutral" // @poff=89
0x3b2: Call2 0x506

0x3b3: Pop(1)
0x3b4: PushEmpty()
0x3b5: Call2 0x34c

0x3b6: Pop(0)
0x3b7: PushEmpty()
0x3b8: Call2 0x343

0x3b9: Pop(0)
0x3ba: Return(); Pop(2)

0x3bb: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x3bc: @ WaitForAnimEnd()
0x3bd: Pop(0)
0x3be: PushEmpty(bool)
0x3bf: Call2 0x422

0x3c0: Pop(0)
0x3c1: Pop(1); Push((bool) Stack[-1] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Return(); Pop(12)

0x3c4: PushEmpty(int)
0x3c5: Call2 0x555

0x3c6: Stack[-1] = Stack[-7]
0x3c7: Pop(1)
0x3c8: Stack[-5] = (int) 0
0x3c9: PushEmpty(bool)
0x3ca: Stack[-1] = (bool) 0
0x3cb: Push((int) 5)
0x3cc: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3ce: PushEmpty(bool)
0x3cf: Call2 0x422

0x3d0: Pop(0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-1] = (bool) 1
0x3d3: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3d4: Pop(0); Push((bool) Stack[-6] == 0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d6: Push((int) 3)
0x3d7: @ Sleep(Stack[-1], Stack[-5])
0x3d8: Pop(1)
0x3d9: Pop(0); Push((bool) Stack[-4] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3fd

0x3dc: GOTO 0x3f2

0x3dd: @ irand(Stack[-3], Stack[-6])
0x3de: Pop(0)
0x3df: Push((int) 5)
0x3e0: @ irand(Stack[-3], Stack[-1])
0x3e1: Pop(1)
0x3e2: Push((int) 0)
0x3e3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: Stack[-3] = (int) 0
0x3e6: Push("all") // @poff=138
0x3e7: PushEmpty(string, int)
0x3e8: Stack[-6] = Stack[-1]
0x3e9: Call2 0x54e

0x3ea: Pop(1)
0x3eb: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ec: Pop(2)
0x3ed: @ WaitForAnimEnd(Stack[-1])
0x3ee: Pop(0)
0x3ef: Pop(0); Push((bool) Stack[-1] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f1: GOTO 0x3fd

0x3f2: PushEmpty(bool)
0x3f3: Call2 0x400

0x3f4: Pop(0)
0x3f5: Pop(1); Push((bool) Stack[-1] == 0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f7: GOTO 0x3fd

0x3f8: @ ResetAAS()
0x3f9: Pop(0)
0x3fa: Push((int) 1)
0x3fb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3fc: GOTO 0x3c9

0x3fd: @ ResetAAS()
0x3fe: Pop(0)
0x3ff: Return(); Pop(12)

0x400: Stack[-1] = (bool) 1
0x401: Return(); Pop(0)

0x402: @ StopAnimation()
0x403: Pop(0)
0x404: @ StopGroup0()
0x405: Pop(0)
0x406: Return(); Pop(0)

0x407: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x408: @ GetPosition(Stack[-3])
0x409: Pop(0)
0x40a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x40b: Pop(0)
0x40c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x40d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x40e: Return(); Pop(6)

0x40f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x410: @ GetPosition(Stack[-3])
0x411: Pop(0)
0x412: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x413: Push(CvectorIndex(Stack[-2], 0))
0x414: Push(CvectorIndex(Stack[-3], 2))
0x415: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x416: Pop(2)
0x417: Stack[-1] = Stack[-8]
0x418: Return(); Pop(6)

0x419: PushEmpty(cvector, cvector)
0x41a: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x41b: Pop(0)
0x41c: PushEmpty(bool, cvector)
0x41d: Stack[-3] = Stack[-1]
0x41e: Call2 0x40f

0x41f: Stack[-2] = Stack[-6]
0x420: Pop(2)
0x421: Return(); Pop(2)

0x422: PushEmpty(bool, bool)
0x423: @ IsLoaded(Stack[-1])
0x424: Pop(0)
0x425: Stack[-1] = Stack[-3]
0x426: Return(); Pop(2)

0x427: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x428: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x429: Pop(0)
0x42a: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x42b: Pop(0)
0x42c: Push(CvectorIndex(Stack[-8], 1))
0x42d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x42e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x42f: @ GetPosition(Stack[-7])
0x430: Pop(0)
0x431: @ GetEyesHeight(Stack[-9])
0x432: Pop(0)
0x433: Push(CvectorIndex(Stack[-7], 1))
0x434: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x435: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x436: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x437: Push(CvectorIndex(Stack[-6], 1))
0x438: Stack[-1] = (int) 0
0x439: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x43a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x43b: Pop(1); Push(Sqrt(Stack[-1]))
0x43c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x43d: Stack[-5] = -Stack[-6]; Pop(0);
0x43e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x43f: PushEmpty(cvector, cvector)
0x440: Push([0.0, 1.0, 0.0])
0x441: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x442: Call2 0x52f

0x443: Pop(1)
0x444: Push((int) 25)
0x445: Pop(2); Push(Stack[-2] * Stack[-1]);
0x446: Pop(2); Push(Stack[-2] + Stack[-1]);
0x447: Push([0.0, 10.0, 0.0])
0x448: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x449: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x44a: @ IsOverrideActive(Stack[-2])
0x44b: Pop(0)
0x44c: Push(Stack[-2])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-21] = (bool) 0
0x44f: Return(); Pop(18)

0x450: @ StopWorld()
0x451: Pop(0)
0x452: @ CameraTransit(Stack[-3], Stack[-5])
0x453: Pop(0)
0x454: Push(CvectorIndex(Stack[-4], 0))
0x455: Push(CvectorIndex(Stack[-5], 2))
0x456: @ Rotate(Stack[-2], Stack[-1])
0x457: Pop(2)
0x458: PushEmpty(bool)
0x459: Call2 0x56e

0x45a: Pop(0)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: GOTO 0x465

0x45d: Push("head") // @poff=228
0x45e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x45f: Pop(1)
0x460: Push(Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x462: Push("head") // @poff=228
0x463: @ LookAsyncCamera(Stack[-1])
0x464: Pop(1)
0x465: @ CameraWaitForPlayFinish()
0x466: Pop(0)
0x467: @ ResumeWorld()
0x468: Pop(0)
0x469: Stack[-21] = (bool) 1
0x46a: Return(); Pop(18)

0x46b: PushEmpty(bool, bool)
0x46c: @ CameraSwitchToNormal()
0x46d: Pop(0)
0x46e: PushEmpty(bool)
0x46f: Call2 0x56e

0x470: Pop(0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x47b

0x473: Push("head") // @poff=228
0x474: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x475: Pop(1)
0x476: Push(Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x478: Push("head") // @poff=228
0x479: @ UnlookAsync(Stack[-1])
0x47a: Pop(1)
0x47b: Return(); Pop(2)

0x47c: PushEmpty(int, int, int, int)
0x47d: Push("voice_common") // @poff=238
0x47e: @ GetVariable(Stack[-1], Stack[-3])
0x47f: Pop(1)
0x480: Push(Stack[-2])
0x481: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x482: PushEmpty(bool, object)
0x483: Stack[-7] = Stack[-1]
0x484: Call2 0x4b6

0x485: Pop(1)
0x486: Pop(1); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x488: PushEmpty(bool, object)
0x489: Stack[-7] = Stack[-1]
0x48a: Call2 0x4db

0x48b: Pop(1)
0x48c: Pop(1); Push((bool) Stack[-1] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-6] = (bool) 0
0x48f: Return(); Pop(4)

0x490: Push((int) 2)
0x491: @ irand(Stack[-2], Stack[-1])
0x492: Pop(1)
0x493: Push(Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x495: Push("voice_common") // @poff=238
0x496: Push((int) 1)
0x497: Pop(1); Push(Stack[-4] + Stack[-1]);
0x498: Push((int) 3)
0x499: Pop(2); Push(Stack[-2] % Stack[-1]);
0x49a: @ SetVariable(Stack[-2], Stack[-1])
0x49b: Pop(2)
0x49c: GOTO 0x4a1

0x49d: Push("voice_common") // @poff=238
0x49e: Push((int) 0)
0x49f: @ SetVariable(Stack[-2], Stack[-1])
0x4a0: Pop(2)
0x4a1: GOTO 0x4b4

0x4a2: PushEmpty(bool, object)
0x4a3: Stack[-7] = Stack[-1]
0x4a4: Call2 0x4db

0x4a5: Pop(1)
0x4a6: Pop(1); Push((bool) Stack[-1] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a8: PushEmpty(bool, object)
0x4a9: Stack[-7] = Stack[-1]
0x4aa: Call2 0x4b6

0x4ab: Pop(1)
0x4ac: Pop(1); Push((bool) Stack[-1] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-6] = (bool) 0
0x4af: Return(); Pop(4)

0x4b0: Push("voice_common") // @poff=238
0x4b1: Push((int) 1)
0x4b2: @ SetVariable(Stack[-2], Stack[-1])
0x4b3: Pop(2)
0x4b4: Stack[-6] = (bool) 1
0x4b5: Return(); Pop(4)

0x4b6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4b7: Stack[-5] = "c" // @poff=264
0x4b8: Stack[-4] = (int) 0
0x4b9: Push((int) 1)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4bb: Push((int) 1)
0x4bc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4bd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4be: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x4bf: Pop(1)
0x4c0: Pop(0); Push((bool) Stack[-3] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: GOTO 0x4c6

0x4c3: Push((int) 1)
0x4c4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4c5: GOTO 0x4b9

0x4c6: Pop(0); Push((bool) Stack[-4] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c8: Stack[-12] = (bool) 0
0x4c9: Return(); Pop(10)

0x4ca: Stack[-2] = (int) 0
0x4cb: Push((int) 1)
0x4cc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: @ irand(Stack[-2], Stack[-4])
0x4cf: Pop(0)
0x4d0: Push((int) 1)
0x4d1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4d3: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x4d4: Pop(1)
0x4d5: PushEmpty(bool, string)
0x4d6: Stack[-3] = Stack[-1]
0x4d7: Call2 0x513

0x4d8: Stack[-2] = Stack[-14]
0x4d9: Pop(2)
0x4da: Return(); Pop(10)

0x4db: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4dc: Push("d") // @poff=234
0x4dd: PushEmpty(int)
0x4de: Call2 0x545

0x4df: Pop(0)
0x4e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e1: Push("m") // @poff=292
0x4e2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4e3: Stack[-4] = (int) 0
0x4e4: Push((int) 1)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4e6: Push((int) 1)
0x4e7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4e8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4e9: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x4ea: Pop(1)
0x4eb: Pop(0); Push((bool) Stack[-3] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ed: GOTO 0x4f1

0x4ee: Push((int) 1)
0x4ef: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4f0: GOTO 0x4e4

0x4f1: Pop(0); Push((bool) Stack[-4] == 0)
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f3: Stack[-12] = (bool) 0
0x4f4: Return(); Pop(10)

0x4f5: Stack[-2] = (int) 0
0x4f6: Push((int) 1)
0x4f7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: @ irand(Stack[-2], Stack[-4])
0x4fa: Pop(0)
0x4fb: Push((int) 1)
0x4fc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4fd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4fe: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x4ff: Pop(1)
0x500: PushEmpty(bool, string)
0x501: Stack[-3] = Stack[-1]
0x502: Call2 0x513

0x503: Stack[-2] = Stack[-14]
0x504: Pop(2)
0x505: Return(); Pop(10)

0x506: PushEmpty(float, float, float, float)
0x507: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x508: Pop(0)
0x509: Push((bool) 0)
0x50a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(1)
0x50c: Return(); Pop(4)

0x50d: PushEmpty(float, float, float, float)
0x50e: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x50f: Pop(0)
0x510: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x511: Pop(0)
0x512: Return(); Pop(4)

0x513: PushEmpty(bool, bool)
0x514: PushEmpty(bool)
0x515: Call2 0x56e

0x516: Pop(0)
0x517: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x518: @ lshHasSpeech(Stack[-1], Stack[-3])
0x519: Pop(0)
0x51a: Push(Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51c: @ lshPlaySpeech(Stack[-3])
0x51d: Pop(0)
0x51e: Stack[-4] = (bool) 1
0x51f: Return(); Pop(2)

0x520: Stack[-4] = (bool) 0
0x521: Return(); Pop(2)

0x522: PushEmpty(bool)
0x523: Call2 0x56e

0x524: Pop(0)
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: @ lshStopSpeech()
0x527: Pop(0)
0x528: Return(); Pop(0)

0x529: PushEmpty(object, object)
0x52a: @ self(Stack[-1])
0x52b: Pop(0)
0x52c: Stack[-1] = Stack[-3]
0x52d: Return(); Pop(2)

0x52e: Stack[-1] = 0
0x52f: PushEmpty(float, float)
0x530: Pop(0); Push(Stack[-3] | Stack[-3]);
0x531: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x532: Push((float)9.999999974752427e-07)
0x533: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-4] = [0.0, 0.0, 0.0]
0x536: Return(); Pop(2)

0x537: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x538: Return(); Pop(2)

0x539: PushEmpty(object, object)
0x53a: @ FindActor(Stack[-1], Stack[-4])
0x53b: Pop(0)
0x53c: Pop(0); PushNull((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53e: Stack[-5] = (bool) 0
0x53f: Return(); Pop(2)

0x540: @ Trigger(Stack[-1], Stack[-3])
0x541: Pop(0)
0x542: Stack[-5] = (bool) 1
0x543: Return(); Pop(2)

0x544: Stack[-1] = 0
0x545: PushEmpty(float, float)
0x546: @ GetGameTime(Stack[-1])
0x547: Pop(0)
0x548: Push((int) 1)
0x549: PushEmpty(int)
0x54a: Push((int) 24)
0x54b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x54c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x54d: Return(); Pop(2)

0x54e: PushEmpty(string, string)
0x54f: Stack[-1] = "idle" // @poff=146
0x550: Push(Stack[-3])
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x553: Stack[-1] = Stack[-4]
0x554: Return(); Pop(2)

0x555: PushEmpty(int, bool, int, bool)
0x556: Stack[-2] = (int) 0
0x557: Push("all") // @poff=138
0x558: PushEmpty(string, int)
0x559: Stack[-5] = Stack[-1]
0x55a: Call2 0x54e

0x55b: Pop(1)
0x55c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(2)
0x55e: Pop(0); Push((bool) Stack[-1] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: GOTO 0x564

0x561: Push((int) 1)
0x562: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x563: GOTO 0x557

0x564: Stack[-2] = Stack[-5]
0x565: Return(); Pop(4)

0x566: Stack[-1] = (int) 515573
0x567: Return(); Pop(0)

0x568: Stack[-1] = (int) 504032
0x569: Return(); Pop(0)

0x56a: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=296
0x56b: Return(); Pop(0)

0x56c: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=336
0x56d: Return(); Pop(0)

0x56e: Stack[-1] = (bool) 1
0x56f: Return(); Pop(0)

0x570: PushEmpty()
0x571: PushEmpty()
0x572: Call2 0x67c

0x573: Pop(0)
0x574: Return(); Pop(0)

0x575: PushEmpty()
0x576: PushEmpty()
0x577: Call2 0x684

0x578: Pop(0)
0x579: Return(); Pop(0)

0x57a: PushEmpty()
0x57b: PushEmpty()
0x57c: Call2 0x692

0x57d: Pop(0)
0x57e: Return(); Pop(0)

0x57f: PushEmpty()
0x580: PushEmpty()
0x581: Call2 0x6a6

0x582: Pop(0)
0x583: Return(); Pop(0)

0x584: PushEmpty()
0x585: PushEmpty()
0x586: Call2 0x625

0x587: Pop(0)
0x588: Return(); Pop(0)

0x589: PushEmpty()
0x58a: PushEmpty()
0x58b: Call2 0x61f

0x58c: Pop(0)
0x58d: Return(); Pop(0)

0x58e: PushEmpty()
0x58f: PushEmpty(bool, object)
0x590: Stack[-3] = Stack[-1]
0x591: Call2 0x5ac

0x592: Pop(1)
0x593: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x594: Stack[-2] = (bool) 1
0x595: Return(); Pop(0)

0x596: Stack[-2] = (bool) 0
0x597: Return(); Pop(0)

0x598: PushEmpty()
0x599: PushEmpty(bool, object)
0x59a: Stack[-3] = Stack[-1]
0x59b: Call2 0x5b2

0x59c: Pop(1)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: Stack[-2] = (bool) 1
0x59f: Return(); Pop(0)

0x5a0: Stack[-2] = (bool) 0
0x5a1: Return(); Pop(0)

0x5a2: PushEmpty()
0x5a3: PushEmpty(bool, object)
0x5a4: Stack[-3] = Stack[-1]
0x5a5: Call2 0x5b8

0x5a6: Pop(1)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a8: Stack[-2] = (bool) 1
0x5a9: Return(); Pop(0)

0x5aa: Stack[-2] = (bool) 0
0x5ab: Return(); Pop(0)

0x5ac: PushEmpty()
0x5ad: PushEmpty(bool)
0x5ae: Call2 0x69a

0x5af: Stack[-1] = Stack[-3]
0x5b0: Pop(1)
0x5b1: Return(); Pop(0)

0x5b2: PushEmpty()
0x5b3: PushEmpty(bool)
0x5b4: Call2 0x68c

0x5b5: Stack[-1] = Stack[-3]
0x5b6: Pop(1)
0x5b7: Return(); Pop(0)

0x5b8: PushEmpty()
0x5b9: PushEmpty(bool)
0x5ba: Call2 0x6a0

0x5bb: Stack[-1] = Stack[-3]
0x5bc: Pop(1)
0x5bd: Return(); Pop(0)

0x5be: PushEmpty(object, object)
0x5bf: Push((int) 755)
0x5c0: Push((int) 2)
0x5c1: Push((int) 539740)
0x5c2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: PushEmpty(bool, object, int)
0x5c5: Stack[-4] = Stack[-2]
0x5c6: Stack[-1] = (int) 751
0x5c7: Call2 0x5f2

0x5c8: Pop(3)
0x5c9: Return(); Pop(2)

0x5ca: Stack[-1] = 0
0x5cb: PushEmpty(object, object)
0x5cc: Push((int) 759)
0x5cd: Push((int) 2)
0x5ce: Push((int) 539744)
0x5cf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: PushEmpty(bool, object, int)
0x5d2: Stack[-4] = Stack[-2]
0x5d3: Stack[-1] = (int) 757
0x5d4: Call2 0x5f2

0x5d5: Pop(3)
0x5d6: Return(); Pop(2)

0x5d7: Stack[-1] = 0
0x5d8: PushEmpty(object, object)
0x5d9: Push((int) 760)
0x5da: Push((int) 2)
0x5db: Push((int) 539745)
0x5dc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(3)
0x5de: PushEmpty(bool, object, int)
0x5df: Stack[-4] = Stack[-2]
0x5e0: Stack[-1] = (int) 757
0x5e1: Call2 0x5f2

0x5e2: Pop(3)
0x5e3: Return(); Pop(2)

0x5e4: Stack[-1] = 0
0x5e5: PushEmpty(object, object)
0x5e6: @ GetDiaryRoot(Stack[-1])
0x5e7: Pop(0)
0x5e8: Pop(0); Push((bool) Stack[-1] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ea: Push("Can't retrieve diary root") // @poff=380
0x5eb: @ Trace(Stack[-1])
0x5ec: Pop(1)
0x5ed: Stack[-3] = (bool) 0
0x5ee: Return(); Pop(2)

0x5ef: Stack[-1] = Stack[-3]
0x5f0: Return(); Pop(2)

0x5f1: Stack[-1] = 0
0x5f2: PushEmpty(object, object, int, object, object, int)
0x5f3: PushEmpty(object)
0x5f4: Call2 0x5e5

0x5f5: Stack[-1] = Stack[-4]
0x5f6: Pop(1)
0x5f7: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=432
0x5f8: Pop(0)
0x5f9: Pop(0); Push((bool) Stack[-2] == 0)
0x5fa: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fb: Push("Can't find diary parent with id: ") // @poff=437
0x5fc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5fd: @ Trace(Stack[-1])
0x5fe: Pop(1)
0x5ff: Stack[-9] = (bool) 0
0x600: Return(); Pop(6)

0x601: @@ AddChild(Stack[-8]); Obj=2 // @poff=505
0x602: Pop(0)
0x603: Push((int) 7)
0x604: @ SendWorldWndMessage(Stack[-1])
0x605: Pop(1)
0x606: @@ GetCategory(Stack[-1]); Obj=8 // @poff=514
0x607: Pop(0)
0x608: @ SetDiarySection(Stack[-1])
0x609: Pop(0)
0x60a: Stack[-9] = (bool) 0
0x60b: Return(); Pop(6)

0x60c: Stack[-2] = 0
0x60d: Stack[-3] = 0
0x60e: PushEmpty(int, int)
0x60f: Push("branch") // @poff=526
0x610: @ GetVariable(Stack[-1], Stack[-2])
0x611: Pop(1)
0x612: Push((int) 0)
0x613: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x615: Stack[-3] = (int) 1
0x616: Return(); Pop(2)

0x617: GOTO 0x61d

0x618: Push((int) 1)
0x619: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-3] = (int) 2
0x61c: Return(); Pop(2)

0x61d: Stack[-3] = (int) 3
0x61e: Return(); Pop(2)

0x61f: PushEmpty(bool, string, string)
0x620: Stack[-2] = "klara2_npc_positioner" // @poff=540
0x621: Stack[-1] = "remove_danko" // @poff=584
0x622: Call2 0x539

0x623: Pop(3)
0x624: Return(); Pop(0)

0x625: PushEmpty(bool, string, string)
0x626: Stack[-2] = "klara2_npc_positioner" // @poff=540
0x627: Stack[-1] = "remove_burah" // @poff=610
0x628: Call2 0x539

0x629: Pop(3)
0x62a: Return(); Pop(0)

0x62b: PushEmpty(int, int)
0x62c: Push("k2system_klara_day") // @poff=636
0x62d: @ GetVariable(Stack[-1], Stack[-2])
0x62e: Pop(1)
0x62f: Stack[-1] = Stack[-3]
0x630: Return(); Pop(2)

0x631: PushEmpty(int, int)
0x632: Push("k2system_burah_day") // @poff=674
0x633: @ GetVariable(Stack[-1], Stack[-2])
0x634: Pop(1)
0x635: Stack[-1] = Stack[-3]
0x636: Return(); Pop(2)

0x637: PushEmpty(int, int)
0x638: Push("k2system_danko_day") // @poff=712
0x639: @ GetVariable(Stack[-1], Stack[-2])
0x63a: Pop(1)
0x63b: Stack[-1] = Stack[-3]
0x63c: Return(); Pop(2)

0x63d: PushEmpty(int, int, int, int)
0x63e: PushEmpty(int)
0x63f: Call2 0x631

0x640: Stack[-1] = Stack[-3]
0x641: Pop(1)
0x642: Push("k2system_burah_state") // @poff=750
0x643: Pop(1); Push(Stack[-1] + Stack[-3]);
0x644: @ GetVariable(Stack[-1], Stack[-2])
0x645: Pop(1)
0x646: Stack[-1] = Stack[-5]
0x647: Return(); Pop(4)

0x648: PushEmpty(int, int)
0x649: PushEmpty(int)
0x64a: Call2 0x631

0x64b: Stack[-1] = Stack[-2]
0x64c: Pop(1)
0x64d: Push("k2system_burah_state") // @poff=750
0x64e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x64f: @ SetVariable(Stack[-1], Stack[-4])
0x650: Pop(1)
0x651: Return(); Pop(2)

0x652: PushEmpty(int, int, int, int)
0x653: PushEmpty(int)
0x654: Call2 0x637

0x655: Stack[-1] = Stack[-3]
0x656: Pop(1)
0x657: Push("k2system_danko_state") // @poff=792
0x658: Pop(1); Push(Stack[-1] + Stack[-3]);
0x659: @ GetVariable(Stack[-1], Stack[-2])
0x65a: Pop(1)
0x65b: Stack[-1] = Stack[-5]
0x65c: Return(); Pop(4)

0x65d: PushEmpty(int, int)
0x65e: PushEmpty(int)
0x65f: Call2 0x637

0x660: Stack[-1] = Stack[-2]
0x661: Pop(1)
0x662: Push("k2system_danko_state") // @poff=792
0x663: Pop(1); Push(Stack[-1] + Stack[-2]);
0x664: @ SetVariable(Stack[-1], Stack[-4])
0x665: Pop(1)
0x666: Return(); Pop(2)

0x667: PushEmpty(int, int, int, int)
0x668: PushEmpty(int)
0x669: Call2 0x62b

0x66a: Stack[-1] = Stack[-3]
0x66b: Pop(1)
0x66c: Push("k2system_klara_state") // @poff=834
0x66d: Pop(1); Push(Stack[-1] + Stack[-3]);
0x66e: @ GetVariable(Stack[-1], Stack[-2])
0x66f: Pop(1)
0x670: Stack[-1] = Stack[-5]
0x671: Return(); Pop(4)

0x672: PushEmpty(int, int)
0x673: PushEmpty(int)
0x674: Call2 0x62b

0x675: Stack[-1] = Stack[-2]
0x676: Pop(1)
0x677: Push("k2system_klara_state") // @poff=834
0x678: Pop(1); Push(Stack[-1] + Stack[-2]);
0x679: @ SetVariable(Stack[-1], Stack[-4])
0x67a: Pop(1)
0x67b: Return(); Pop(2)

0x67c: PushEmpty()
0x67d: Call2 0x5cb

0x67e: Pop(0)
0x67f: PushEmpty(int)
0x680: Stack[-1] = (int) 2
0x681: Call2 0x65d

0x682: Pop(1)
0x683: Return(); Pop(0)

0x684: PushEmpty()
0x685: Call2 0x5d8

0x686: Pop(0)
0x687: PushEmpty(int)
0x688: Stack[-1] = (int) 1
0x689: Call2 0x65d

0x68a: Pop(1)
0x68b: Return(); Pop(0)

0x68c: PushEmpty(int)
0x68d: Call2 0x652

0x68e: Pop(0)
0x68f: Push((int) 0)
0x690: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x691: Return(); Pop(0)

0x692: PushEmpty()
0x693: Call2 0x5be

0x694: Pop(0)
0x695: PushEmpty(int)
0x696: Stack[-1] = (int) 3
0x697: Call2 0x648

0x698: Pop(1)
0x699: Return(); Pop(0)

0x69a: PushEmpty(int)
0x69b: Call2 0x63d

0x69c: Pop(0)
0x69d: Push((int) 1)
0x69e: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x69f: Return(); Pop(0)

0x6a0: PushEmpty(int)
0x6a1: Call2 0x667

0x6a2: Pop(0)
0x6a3: Push((int) 1)
0x6a4: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x6a5: Return(); Pop(0)

0x6a6: PushEmpty(int)
0x6a7: Stack[-1] = (int) 3
0x6a8: Call2 0x672

0x6a9: Pop(1)
0x6aa: Return(); Pop(0)

0x6ab: PushEmpty(int, int)
0x6ac: Push("day") // @poff=666
0x6ad: @ GetProperty(Stack[-1], Stack[-2])
0x6ae: Pop(1)
0x6af: PushEmpty(int)
0x6b0: Call2 0x545

0x6b1: Pop(0)
0x6b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b4: PushEmpty(int, object)
0x6b5: Stack[-5] = Stack[-1]
0x6b6: Push(-2, 1); TaskCall(3)
0x6b7: Call2 0xd8

0x6b8: Pop(-2, 1); TaskReturn
0x6b9: Pop(2)
0x6ba: GOTO 0x6c1

0x6bb: PushEmpty(int, object)
0x6bc: Stack[-5] = Stack[-1]
0x6bd: Push(-2, 1); TaskCall(1)
0x6be: Call2 0xd

0x6bf: Pop(-2, 1); TaskReturn
0x6c0: Pop(2)
0x6c1: Return(); Pop(2)

