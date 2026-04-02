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
	W:ood7AglajaPetr1
	W:quest_d7_03
	W:remove_maria
	W:completed
	W:samopal is given
	W:Samopal
	W:whitevaccine is given
	W:white_vaccine
	W:feromicin is given
	W:feromicin
	W:neomicin is given
	W:neomicin
	W:samopal ammo5 is given
	W:samopal_ammo
	W:d7q03
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Aglaja.png
	W:ui/NPC_Aglaja_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d65006f006f0064003700410067006c0061006a006100500065007400720031000000710075006500730074005f00640037005f00300033000000720065006d006f00760065005f006d006100720069006100000063006f006d0070006c0065007400650064000000730061006d006f00700061006c00200069007300200067006900760065006e000000530061006d006f00700061006c00000077006800690074006500760061006300630069006e006500200069007300200067006900760065006e000000770068006900740065005f00760061006300630069006e00650000006600650072006f006d006900630069006e00200069007300200067006900760065006e0000006600650072006f006d006900630069006e0000006e0065006f006d006900630069006e00200069007300200067006900760065006e0000006e0065006f006d006900630069006e000000730061006d006f00700061006c00200061006d006d006f003500200069007300200067006900760065006e000000730061006d006f00700061006c005f0061006d006d006f000000640037007100300033000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00410067006c0061006a0061002e0070006e0067000000750069002f004e00500043005f00410067006c0061006a0061005f0062002e0070006e0067000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x21f
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd5 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x223 Vars = (string)
		EVENT_6 Op = 0x237 Vars = ()
		EVENT_5 Op = 0x244 Vars = ()
		EVENT_7 Op = 0x293 Vars = (int)
		EVENT_45 Op = 0x2d5 Vars = (bool)
		EVENT_0 Op = 0x2e1 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x365

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
0x11: Call2 0x46c

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x3bf

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x36a

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x595

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x593

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x597

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x599

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x582

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
0x55: Call2 0x3ae

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
0x63: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x528

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x534

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x72: PushEmpty(object, object)
0x73: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75: Call2 0x4da

0x76: Pop(2)
0x77: PushEmpty(object, object)
0x78: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x79: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a: Call2 0x4e0

0x7b: Pop(2)
0x7c: PushEmpty(string)
0x7d: Stack[-1] = "Neutral" // @poff=89
0x7e: Call2 0xbf

0x7f: Pop(1)
0x80: Push((int) 533268)
0x81: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x82: Pop(1)
0x83: @@@ ClearReplies(); Obj=0 // @poff=116
0x84: Pop(0)
0x85: Push((int) 534543)
0x86: Push((int) 36176)
0x87: Push((int) 36175)
0x88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89: Pop(3)
0x8a: GOTO 0xa1

0x8b: PushEmpty(string)
0x8c: Stack[-1] = "Neutral" // @poff=89
0x8d: Call2 0xbf

0x8e: Pop(1)
0x8f: Push((int) 533273)
0x90: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x91: Pop(1)
0x92: @@@ ClearReplies(); Obj=0 // @poff=116
0x93: Pop(0)
0x94: Push((int) 533274)
0x95: Push((int) -1)
0x96: Push((int) 34788)
0x97: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x98: Pop(3)
0x99: Push((int) 534553)
0x9a: Push((int) -1)
0x9b: Push((int) 36185)
0x9c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9d: Pop(3)
0x9e: GOTO 0xa1

0x9f: Return(); Pop(0)

0xa0: GOTO 0x62

0xa1: PushEmpty(bool)
0xa2: Call2 0x59b

0xa3: Pop(0)
0xa4: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa5: @ lshWaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: PushEmpty(string)
0xab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xac: Call2 0x449

0xad: Pop(1)
0xae: GOTO 0xa5

0xaf: GOTO 0xbe

0xb0: Push("all") // @poff=138
0xb1: Push("idle") // @poff=146
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: @ WaitForAnimEnd()
0xb5: Pop(0)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbe

0xb9: Push("all") // @poff=138
0xba: Push("idle") // @poff=146
0xbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: GOTO 0xb4

0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: PushEmpty(bool)
0xc1: Call2 0x59b

0xc2: Pop(0)
0xc3: Pop(1); Push((bool) Stack[-1] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Return(); Pop(0)

0xc6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: Return(); Pop(0)

0xc9: PushEmpty(string, bool)
0xca: Stack[-3] = Stack[-2]
0xcb: Push("") // @poff=102
0xcc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-1] = (bool) 0
0xcf: GOTO 0xd1

0xd0: Stack[-1] = (bool) 1
0xd1: Call2 0x450

0xd2: Pop(2)
0xd3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: Push((int) 1)
0xd7: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0xd8: PushEmpty()
0xd9: Call2 0x465

0xda: Pop(0)
0xdb: Push((int) 34783)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x4f1

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x51d

0xe7: Pop(2)
0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x4e7

0xec: Pop(2)
0xed: Push((int) 34784)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call2 0x4e7

0xf4: Pop(2)
0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x4fc

0xf9: Pop(2)
0xfa: Push((int) 34785)
0xfb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x4e7

0x101: Pop(2)
0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x507

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x512

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x512

0x110: Pop(2)
0x111: Push((int) 34786)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x4e7

0x118: Pop(2)
0x119: Push((int) 34782)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x11c: PushEmpty(bool)
0x11d: Stack[-1] = (bool) 0
0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120: Call2 0x528

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125: Call2 0x534

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: Stack[-1] = (bool) 1
0x129: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x4da

0x12e: Pop(2)
0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x131: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x132: Call2 0x4e0

0x133: Pop(2)
0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral" // @poff=89
0x136: Call2 0xbf

0x137: Pop(1)
0x138: Push((int) 533268)
0x139: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13a: Pop(1)
0x13b: @@@ ClearReplies(); Obj=0 // @poff=116
0x13c: Pop(0)
0x13d: Push((int) 534543)
0x13e: Push((int) 36176)
0x13f: Push((int) 36175)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral" // @poff=89
0x145: Call2 0xbf

0x146: Pop(1)
0x147: Push((int) 533273)
0x148: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x149: Pop(1)
0x14a: @@@ ClearReplies(); Obj=0 // @poff=116
0x14b: Pop(0)
0x14c: Push((int) 533274)
0x14d: Push((int) -1)
0x14e: Push((int) 34788)
0x14f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x150: Pop(3)
0x151: Push((int) 534553)
0x152: Push((int) -1)
0x153: Push((int) 36185)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 36176)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral" // @poff=89
0x15c: Call2 0xbf

0x15d: Pop(1)
0x15e: Push((int) 534544)
0x15f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x160: Pop(1)
0x161: @@@ ClearReplies(); Obj=0 // @poff=116
0x162: Pop(0)
0x163: Push((int) 534545)
0x164: Push((int) 36178)
0x165: Push((int) 36177)
0x166: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 36178)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0xbf

0x16f: Pop(1)
0x170: Push((int) 534546)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 534547)
0x176: Push((int) 36180)
0x177: Push((int) 36179)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 535169)
0x17b: Push((int) 36835)
0x17c: Push((int) 36834)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 36835)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral" // @poff=89
0x185: Call2 0xbf

0x186: Pop(1)
0x187: Push((int) 535170)
0x188: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x189: Pop(1)
0x18a: @@@ ClearReplies(); Obj=0 // @poff=116
0x18b: Pop(0)
0x18c: Push((int) 535171)
0x18d: Push((int) 36180)
0x18e: Push((int) 36836)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 36180)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral" // @poff=89
0x197: Call2 0xbf

0x198: Pop(1)
0x199: Push((int) 534548)
0x19a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19b: Pop(1)
0x19c: @@@ ClearReplies(); Obj=0 // @poff=116
0x19d: Pop(0)
0x19e: Push((int) 534549)
0x19f: Push((int) 36182)
0x1a0: Push((int) 36181)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 36182)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0xbf

0x1aa: Pop(1)
0x1ab: Push((int) 534550)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 534551)
0x1b1: Push((int) 36841)
0x1b2: Push((int) 36183)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Push((int) 535172)
0x1b6: Push((int) 36839)
0x1b7: Push((int) 36838)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 36839)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral" // @poff=89
0x1c0: Call2 0xbf

0x1c1: Pop(1)
0x1c2: Push((int) 535173)
0x1c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c4: Pop(1)
0x1c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c6: Pop(0)
0x1c7: Push((int) 535174)
0x1c8: Push((int) 36184)
0x1c9: Push((int) 36840)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 36841)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral" // @poff=89
0x1d2: Call2 0xbf

0x1d3: Pop(1)
0x1d4: Push((int) 535175)
0x1d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d6: Pop(1)
0x1d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d8: Pop(0)
0x1d9: Push((int) 535176)
0x1da: Push((int) 36184)
0x1db: Push((int) 36842)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call2 0x540

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: Push((int) 535177)
0x1e4: Push((int) -1)
0x1e5: Push((int) 36843)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 36184)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral" // @poff=89
0x1ee: Call2 0xbf

0x1ef: Pop(1)
0x1f0: Push((int) 534552)
0x1f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f2: Pop(1)
0x1f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f4: Pop(0)
0x1f5: Push((int) 533269)
0x1f6: Push((int) -1)
0x1f7: Push((int) 34783)
0x1f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f9: Pop(3)
0x1fa: Push((int) 533270)
0x1fb: Push((int) -1)
0x1fc: Push((int) 34784)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Push((int) 533271)
0x200: Push((int) -1)
0x201: Push((int) 34785)
0x202: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x203: Pop(3)
0x204: Push((int) 533272)
0x205: Push((int) -1)
0x206: Push((int) 34786)
0x207: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x20b: PushEmpty(bool)
0x20c: Call2 0x59b

0x20d: Pop(0)
0x20e: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20f: @ lshStopAnimation()
0x210: Pop(0)
0x211: GOTO 0x214

0x212: @ StopAnimation()
0x213: Pop(0)
0x214: Return(); Pop(0)

0x215: GOTO 0xd6

0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: PushEmpty(int, object)
0x219: Stack[-3] = Stack[-1]
0x21a: Push(-2, 1); TaskCall(1)
0x21b: Call2 0xd

0x21c: Pop(-2, 1); TaskReturn
0x21d: Pop(2)
0x21e: Return(); Pop(0)

0x21f: PushEmpty()
0x220: Call2 0x248

0x221: Pop(0)
0x222: Return(); Pop(0)

0x223: PushEmpty(bool, bool)
0x224: Push("cleanup") // @poff=156
0x225: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x227: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x228: @ IsLoaded(Stack[-1])
0x229: Pop(0)
0x22a: Pop(0); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22c: PushEmpty(object)
0x22d: Call2 0x46c

0x22e: Pop(0)
0x22f: @ RemoveActor(Stack[-1])
0x230: Pop(1)
0x231: GOTO 0x236

0x232: Push("restore") // @poff=172
0x233: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x236: Return(); Pop(2)

0x237: Push( Stack[1 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x239: PushEmpty(object)
0x23a: Call2 0x46c

0x23b: Pop(0)
0x23c: @ RemoveActor(Stack[-1])
0x23d: Pop(1)
0x23e: @ Hold()
0x23f: Pop(0)
0x240: PushEmpty()
0x241: Call2 0x2b9

0x242: Pop(0)
0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: Call2 0x2c8

0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: PushEmpty(bool)
0x249: Call2 0x365

0x24a: Pop(0)
0x24b: Pop(1); Push((bool) Stack[-1] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: PushEmpty()
0x24e: Push(-0, 0); TaskCall(0)
0x24f: Call2 0x0

0x250: Pop(-0, 0); TaskReturn
0x251: Pop(0)
0x252: PushEmpty()
0x253: Call2 0x244

0x254: Pop(0)
0x255: @ GetDirection(Stack[-0]T)
0x256: Pop(0)
0x257: PushEmpty()
0x258: Call2 0x2fe

0x259: Pop(0)
0x25a: GOTO 0x257

0x25b: Return(); Pop(0)

0x25c: PushEmpty(object, object)
0x25d: Push("player") // @poff=188
0x25e: @ FindActor(Stack[-2], Stack[-1])
0x25f: Pop(1)
0x260: Pop(0); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x262: Stack[-3] = (bool) 0
0x263: Return(); Pop(2)

0x264: PushEmpty(bool, object)
0x265: Stack[-3] = Stack[-1]
0x266: Call2 0x35c

0x267: Stack[-2] = Stack[-5]
0x268: Pop(2)
0x269: Return(); Pop(2)

0x26a: Stack[-1] = 0
0x26b: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x26c: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x26d: @ RotateAsync(Stack[-2], Stack[-1])
0x26e: Pop(2)
0x26f: Return(); Pop(0)

0x270: PushEmpty(object, bool, object, bool)
0x271: Push("player") // @poff=188
0x272: @ FindActor(Stack[-3], Stack[-1])
0x273: Pop(1)
0x274: Pop(0); Push((bool) Stack[-2] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-5] = (bool) 0
0x277: Return(); Pop(4)

0x278: PushEmpty(float, object)
0x279: Stack[-4] = Stack[-1]
0x27a: Call2 0x34a

0x27b: Pop(1)
0x27c: Push((float)90000.0)
0x27d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-5] = (bool) 0
0x280: Return(); Pop(4)

0x281: @ CanSee(Stack[-1], Stack[-2])
0x282: Pop(0)
0x283: Stack[-1] = Stack[-5]
0x284: Return(); Pop(4)

0x285: Stack[-2] = 0
0x286: PushEmpty(float, float)
0x287: Push((int) 8)
0x288: Push((int) 16)
0x289: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Push((int) 10)
0x28c: @ SetTimer(Stack[-1], Stack[-2])
0x28d: Pop(1)
0x28e: Return(); Pop(2)

0x28f: Push((int) 10)
0x290: @ KillTimer(Stack[-1])
0x291: Pop(1)
0x292: Return(); Pop(0)

0x293: PushEmpty()
0x294: Push((int) 10)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x297: PushEmpty()
0x298: Call2 0x28f

0x299: Pop(0)
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: PushEmpty(bool)
0x29d: Call2 0x365

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a0: PushEmpty(bool)
0x2a1: Call2 0x270

0x2a2: Pop(0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: Stack[-1] = (bool) 1
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a6: PushEmpty(bool)
0x2a7: Call2 0x25c

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2aa: PushEmpty(bool, object)
0x2ab: PushEmpty(object)
0x2ac: Call2 0x46c

0x2ad: Stack[-1] = Stack[-2]
0x2ae: Pop(1)
0x2af: Call2 0x3f9

0x2b0: Pop(2)
0x2b1: GOTO 0x2b8

0x2b2: PushEmpty()
0x2b3: Call2 0x26b

0x2b4: Pop(0)
0x2b5: PushEmpty()
0x2b6: Call2 0x286

0x2b7: Pop(0)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: Call2 0x345

0x2bb: Pop(0)
0x2bc: PushEmpty()
0x2bd: Call2 0x28f

0x2be: Pop(0)
0x2bf: @ lshStopSpeech()
0x2c0: Pop(0)
0x2c1: @ lshStopAnimation()
0x2c2: Pop(0)
0x2c3: @ StopAsync()
0x2c4: Pop(0)
0x2c5: @ Hold()
0x2c6: Pop(0)
0x2c7: Return(); Pop(0)

0x2c8: @ StopGroup0()
0x2c9: Pop(0)
0x2ca: PushEmpty()
0x2cb: Call2 0x28f

0x2cc: Pop(0)
0x2cd: PushEmpty(string)
0x2ce: Stack[-1] = "Neutral" // @poff=89
0x2cf: Call2 0x449

0x2d0: Pop(1)
0x2d1: PushEmpty()
0x2d2: Call2 0x286

0x2d3: Pop(0)
0x2d4: Return(); Pop(0)

0x2d5: PushEmpty()
0x2d6: Push(Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d8: PushEmpty()
0x2d9: Call2 0x286

0x2da: Pop(0)
0x2db: GOTO 0x2e0

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Neutral" // @poff=89
0x2de: Call2 0x449

0x2df: Pop(1)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty(bool, bool)
0x2e2: @ IsOverrideActive(Stack[-1])
0x2e3: Pop(0)
0x2e4: Pop(0); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2e6: EventDisable(0)
0x2e7: PushEmpty()
0x2e8: Call2 0x345

0x2e9: Pop(0)
0x2ea: PushEmpty(bool, object)
0x2eb: Stack[-5] = Stack[-1]
0x2ec: Call2 0x35c

0x2ed: Pop(2)
0x2ee: EventEnable(0)
0x2ef: PushEmpty(object)
0x2f0: Stack[-4] = Stack[-1]
0x2f1: Call2 0x217

0x2f2: Pop(1)
0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral" // @poff=89
0x2f5: Call2 0x449

0x2f6: Pop(1)
0x2f7: PushEmpty()
0x2f8: Call2 0x28f

0x2f9: Pop(0)
0x2fa: PushEmpty()
0x2fb: Call2 0x286

0x2fc: Pop(0)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2ff: @ WaitForAnimEnd()
0x300: Pop(0)
0x301: PushEmpty(bool)
0x302: Call2 0x365

0x303: Pop(0)
0x304: Pop(1); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Return(); Pop(12)

0x307: PushEmpty(int)
0x308: Call2 0x4c9

0x309: Stack[-1] = Stack[-7]
0x30a: Pop(1)
0x30b: Stack[-5] = (int) 0
0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: Push((int) 5)
0x30f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: PushEmpty(bool)
0x312: Call2 0x365

0x313: Pop(0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = (bool) 1
0x316: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x317: Pop(0); Push((bool) Stack[-6] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x319: Push((int) 3)
0x31a: @ Sleep(Stack[-1], Stack[-5])
0x31b: Pop(1)
0x31c: Pop(0); Push((bool) Stack[-4] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: GOTO 0x340

0x31f: GOTO 0x335

0x320: @ irand(Stack[-3], Stack[-6])
0x321: Pop(0)
0x322: Push((int) 5)
0x323: @ irand(Stack[-3], Stack[-1])
0x324: Pop(1)
0x325: Push((int) 0)
0x326: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: Stack[-3] = (int) 0
0x329: Push("all") // @poff=138
0x32a: PushEmpty(string, int)
0x32b: Stack[-6] = Stack[-1]
0x32c: Call2 0x4c2

0x32d: Pop(1)
0x32e: @ PlayAnimation(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: @ WaitForAnimEnd(Stack[-1])
0x331: Pop(0)
0x332: Pop(0); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x340

0x335: PushEmpty(bool)
0x336: Call2 0x343

0x337: Pop(0)
0x338: Pop(1); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: GOTO 0x340

0x33b: @ ResetAAS()
0x33c: Pop(0)
0x33d: Push((int) 1)
0x33e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x33f: GOTO 0x30c

0x340: @ ResetAAS()
0x341: Pop(0)
0x342: Return(); Pop(12)

0x343: Stack[-1] = (bool) 1
0x344: Return(); Pop(0)

0x345: @ StopAnimation()
0x346: Pop(0)
0x347: @ StopGroup0()
0x348: Pop(0)
0x349: Return(); Pop(0)

0x34a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x34b: @ GetPosition(Stack[-3])
0x34c: Pop(0)
0x34d: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x34e: Pop(0)
0x34f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x350: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x351: Return(); Pop(6)

0x352: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x353: @ GetPosition(Stack[-3])
0x354: Pop(0)
0x355: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x356: Push(CvectorIndex(Stack[-2], 0))
0x357: Push(CvectorIndex(Stack[-3], 2))
0x358: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x359: Pop(2)
0x35a: Stack[-1] = Stack[-8]
0x35b: Return(); Pop(6)

0x35c: PushEmpty(cvector, cvector)
0x35d: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x35e: Pop(0)
0x35f: PushEmpty(bool, cvector)
0x360: Stack[-3] = Stack[-1]
0x361: Call2 0x352

0x362: Stack[-2] = Stack[-6]
0x363: Pop(2)
0x364: Return(); Pop(2)

0x365: PushEmpty(bool, bool)
0x366: @ IsLoaded(Stack[-1])
0x367: Pop(0)
0x368: Stack[-1] = Stack[-3]
0x369: Return(); Pop(2)

0x36a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x36b: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x36c: Pop(0)
0x36d: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x36e: Pop(0)
0x36f: Push(CvectorIndex(Stack[-8], 1))
0x370: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x371: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x372: @ GetPosition(Stack[-7])
0x373: Pop(0)
0x374: @ GetEyesHeight(Stack[-9])
0x375: Pop(0)
0x376: Push(CvectorIndex(Stack[-7], 1))
0x377: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x378: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x379: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x37a: Push(CvectorIndex(Stack[-6], 1))
0x37b: Stack[-1] = (int) 0
0x37c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x37d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x37e: Pop(1); Push(Sqrt(Stack[-1]))
0x37f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x380: Stack[-5] = -Stack[-6]; Pop(0);
0x381: Pop(0); Push(Stack[-6] * Stack[-19]);
0x382: PushEmpty(cvector, cvector)
0x383: Push([0.0, 1.0, 0.0])
0x384: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x385: Call2 0x472

0x386: Pop(1)
0x387: Push((int) 25)
0x388: Pop(2); Push(Stack[-2] * Stack[-1]);
0x389: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38a: Push([0.0, 10.0, 0.0])
0x38b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x38c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x38d: @ IsOverrideActive(Stack[-2])
0x38e: Pop(0)
0x38f: Push(Stack[-2])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-21] = (bool) 0
0x392: Return(); Pop(18)

0x393: @ StopWorld()
0x394: Pop(0)
0x395: @ CameraTransit(Stack[-3], Stack[-5])
0x396: Pop(0)
0x397: Push(CvectorIndex(Stack[-4], 0))
0x398: Push(CvectorIndex(Stack[-5], 2))
0x399: @ Rotate(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: PushEmpty(bool)
0x39c: Call2 0x59b

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: GOTO 0x3a8

0x3a0: Push("head") // @poff=228
0x3a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push(Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a5: Push("head") // @poff=228
0x3a6: @ LookAsyncCamera(Stack[-1])
0x3a7: Pop(1)
0x3a8: @ CameraWaitForPlayFinish()
0x3a9: Pop(0)
0x3aa: @ ResumeWorld()
0x3ab: Pop(0)
0x3ac: Stack[-21] = (bool) 1
0x3ad: Return(); Pop(18)

0x3ae: PushEmpty(bool, bool)
0x3af: @ CameraSwitchToNormal()
0x3b0: Pop(0)
0x3b1: PushEmpty(bool)
0x3b2: Call2 0x59b

0x3b3: Pop(0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: GOTO 0x3be

0x3b6: Push("head") // @poff=228
0x3b7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3b8: Pop(1)
0x3b9: Push(Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bb: Push("head") // @poff=228
0x3bc: @ UnlookAsync(Stack[-1])
0x3bd: Pop(1)
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(int, int, int, int)
0x3c0: Push("voice_common") // @poff=238
0x3c1: @ GetVariable(Stack[-1], Stack[-3])
0x3c2: Pop(1)
0x3c3: Push(Stack[-2])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-7] = Stack[-1]
0x3c7: Call2 0x3f9

0x3c8: Pop(1)
0x3c9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cb: PushEmpty(bool, object)
0x3cc: Stack[-7] = Stack[-1]
0x3cd: Call2 0x41e

0x3ce: Pop(1)
0x3cf: Pop(1); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-6] = (bool) 0
0x3d2: Return(); Pop(4)

0x3d3: Push((int) 2)
0x3d4: @ irand(Stack[-2], Stack[-1])
0x3d5: Pop(1)
0x3d6: Push(Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d8: Push("voice_common") // @poff=238
0x3d9: Push((int) 1)
0x3da: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3db: Push((int) 3)
0x3dc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3dd: @ SetVariable(Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: GOTO 0x3e4

0x3e0: Push("voice_common") // @poff=238
0x3e1: Push((int) 0)
0x3e2: @ SetVariable(Stack[-2], Stack[-1])
0x3e3: Pop(2)
0x3e4: GOTO 0x3f7

0x3e5: PushEmpty(bool, object)
0x3e6: Stack[-7] = Stack[-1]
0x3e7: Call2 0x41e

0x3e8: Pop(1)
0x3e9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-7] = Stack[-1]
0x3ed: Call2 0x3f9

0x3ee: Pop(1)
0x3ef: Pop(1); Push((bool) Stack[-1] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-6] = (bool) 0
0x3f2: Return(); Pop(4)

0x3f3: Push("voice_common") // @poff=238
0x3f4: Push((int) 1)
0x3f5: @ SetVariable(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: Stack[-6] = (bool) 1
0x3f8: Return(); Pop(4)

0x3f9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3fa: Stack[-5] = "c" // @poff=264
0x3fb: Stack[-4] = (int) 0
0x3fc: Push((int) 1)
0x3fd: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3fe: Push((int) 1)
0x3ff: Pop(1); Push(Stack[-5] + Stack[-1]);
0x400: Pop(1); Push(Stack[-6] + Stack[-1]);
0x401: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x402: Pop(1)
0x403: Pop(0); Push((bool) Stack[-3] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x409

0x406: Push((int) 1)
0x407: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x408: GOTO 0x3fc

0x409: Pop(0); Push((bool) Stack[-4] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-12] = (bool) 0
0x40c: Return(); Pop(10)

0x40d: Stack[-2] = (int) 0
0x40e: Push((int) 1)
0x40f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: @ irand(Stack[-2], Stack[-4])
0x412: Pop(0)
0x413: Push((int) 1)
0x414: Pop(1); Push(Stack[-3] + Stack[-1]);
0x415: Pop(1); Push(Stack[-6] + Stack[-1]);
0x416: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x417: Pop(1)
0x418: PushEmpty(bool, string)
0x419: Stack[-3] = Stack[-1]
0x41a: Call2 0x456

0x41b: Stack[-2] = Stack[-14]
0x41c: Pop(2)
0x41d: Return(); Pop(10)

0x41e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x41f: Push("d") // @poff=234
0x420: PushEmpty(int)
0x421: Call2 0x4b9

0x422: Pop(0)
0x423: Pop(2); Push(Stack[-2] + Stack[-1]);
0x424: Push("m") // @poff=292
0x425: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x426: Stack[-4] = (int) 0
0x427: Push((int) 1)
0x428: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x429: Push((int) 1)
0x42a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x42b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x42c: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x42d: Pop(1)
0x42e: Pop(0); Push((bool) Stack[-3] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: GOTO 0x434

0x431: Push((int) 1)
0x432: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x433: GOTO 0x427

0x434: Pop(0); Push((bool) Stack[-4] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-12] = (bool) 0
0x437: Return(); Pop(10)

0x438: Stack[-2] = (int) 0
0x439: Push((int) 1)
0x43a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: @ irand(Stack[-2], Stack[-4])
0x43d: Pop(0)
0x43e: Push((int) 1)
0x43f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x440: Pop(1); Push(Stack[-6] + Stack[-1]);
0x441: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x442: Pop(1)
0x443: PushEmpty(bool, string)
0x444: Stack[-3] = Stack[-1]
0x445: Call2 0x456

0x446: Stack[-2] = Stack[-14]
0x447: Pop(2)
0x448: Return(); Pop(10)

0x449: PushEmpty(float, float, float, float)
0x44a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x44b: Pop(0)
0x44c: Push((bool) 0)
0x44d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x44e: Pop(1)
0x44f: Return(); Pop(4)

0x450: PushEmpty(float, float, float, float)
0x451: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x452: Pop(0)
0x453: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x454: Pop(0)
0x455: Return(); Pop(4)

0x456: PushEmpty(bool, bool)
0x457: PushEmpty(bool)
0x458: Call2 0x59b

0x459: Pop(0)
0x45a: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x45c: Pop(0)
0x45d: Push(Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45f: @ lshPlaySpeech(Stack[-3])
0x460: Pop(0)
0x461: Stack[-4] = (bool) 1
0x462: Return(); Pop(2)

0x463: Stack[-4] = (bool) 0
0x464: Return(); Pop(2)

0x465: PushEmpty(bool)
0x466: Call2 0x59b

0x467: Pop(0)
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: @ lshStopSpeech()
0x46a: Pop(0)
0x46b: Return(); Pop(0)

0x46c: PushEmpty(object, object)
0x46d: @ self(Stack[-1])
0x46e: Pop(0)
0x46f: Stack[-1] = Stack[-3]
0x470: Return(); Pop(2)

0x471: Stack[-1] = 0
0x472: PushEmpty(float, float)
0x473: Pop(0); Push(Stack[-3] | Stack[-3]);
0x474: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x475: Push((float)9.999999974752427e-07)
0x476: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-4] = [0.0, 0.0, 0.0]
0x479: Return(); Pop(2)

0x47a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x47b: Return(); Pop(2)

0x47c: PushEmpty(int, int)
0x47d: @ GetVariable(Stack[-3], Stack[-1])
0x47e: Pop(0)
0x47f: Stack[-1] = Stack[-4]
0x480: Return(); Pop(2)

0x481: PushEmpty(object, object)
0x482: @ CreateIntVector(Stack[-1])
0x483: Pop(0)
0x484: @@ add(Stack[-4]); Obj=1 // @poff=296
0x485: Pop(0)
0x486: @@ add(Stack[-3]); Obj=1 // @poff=296
0x487: Pop(0)
0x488: Push((int) 3)
0x489: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x48a: Pop(1)
0x48b: Return(); Pop(2)

0x48c: Stack[-1] = 0
0x48d: PushEmpty(int, int, bool, int, int, bool)
0x48e: @@ GetItemID(Stack[-3]); Obj=8 // @poff=300
0x48f: Pop(0)
0x490: Push("Category") // @poff=310
0x491: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x492: Pop(1)
0x493: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=328
0x494: Pop(0)
0x495: Pop(0); Push((bool) Stack[-1] == 0)
0x496: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x497: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=336
0x498: Pop(0)
0x499: GOTO 0x49f

0x49a: PushEmpty(int, int)
0x49b: Stack[-5] = Stack[-2]
0x49c: Stack[-9] = Stack[-1]
0x49d: Call2 0x481

0x49e: Pop(2)
0x49f: Return(); Pop(6)

0x4a0: PushEmpty(object, object)
0x4a1: @ CreateInvItem(Stack[-1])
0x4a2: Pop(0)
0x4a3: @@ SetItemName(Stack[-4]); Obj=1 // @poff=346
0x4a4: Pop(0)
0x4a5: PushEmpty(object, object, int)
0x4a6: Stack[-8] = Stack[-3]
0x4a7: Stack[-4] = Stack[-2]
0x4a8: Stack[-6] = Stack[-1]
0x4a9: Call2 0x48d

0x4aa: Pop(3)
0x4ab: Return(); Pop(2)

0x4ac: Stack[-1] = 0
0x4ad: PushEmpty(object, object)
0x4ae: @ FindActor(Stack[-1], Stack[-4])
0x4af: Pop(0)
0x4b0: Pop(0); PushNull((bool) Stack[-1] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-5] = (bool) 0
0x4b3: Return(); Pop(2)

0x4b4: @ Trigger(Stack[-1], Stack[-3])
0x4b5: Pop(0)
0x4b6: Stack[-5] = (bool) 1
0x4b7: Return(); Pop(2)

0x4b8: Stack[-1] = 0
0x4b9: PushEmpty(float, float)
0x4ba: @ GetGameTime(Stack[-1])
0x4bb: Pop(0)
0x4bc: Push((int) 1)
0x4bd: PushEmpty(int)
0x4be: Push((int) 24)
0x4bf: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4c0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4c1: Return(); Pop(2)

0x4c2: PushEmpty(string, string)
0x4c3: Stack[-1] = "idle" // @poff=146
0x4c4: Push(Stack[-3])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4c7: Stack[-1] = Stack[-4]
0x4c8: Return(); Pop(2)

0x4c9: PushEmpty(int, bool, int, bool)
0x4ca: Stack[-2] = (int) 0
0x4cb: Push("all") // @poff=138
0x4cc: PushEmpty(string, int)
0x4cd: Stack[-5] = Stack[-1]
0x4ce: Call2 0x4c2

0x4cf: Pop(1)
0x4d0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(2)
0x4d2: Pop(0); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d4: GOTO 0x4d8

0x4d5: Push((int) 1)
0x4d6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4d7: GOTO 0x4cb

0x4d8: Stack[-2] = Stack[-5]
0x4d9: Return(); Pop(4)

0x4da: PushEmpty()
0x4db: Push("ood7AglajaPetr1") // @poff=358
0x4dc: Push((int) 1)
0x4dd: @ SetVariable(Stack[-2], Stack[-1])
0x4de: Pop(2)
0x4df: Return(); Pop(0)

0x4e0: PushEmpty()
0x4e1: PushEmpty(bool, string, string)
0x4e2: Stack[-2] = "quest_d7_03" // @poff=390
0x4e3: Stack[-1] = "remove_maria" // @poff=414
0x4e4: Call2 0x4ad

0x4e5: Pop(3)
0x4e6: Return(); Pop(0)

0x4e7: PushEmpty()
0x4e8: PushEmpty()
0x4e9: Call2 0x54c

0x4ea: Pop(0)
0x4eb: PushEmpty(bool, string, string)
0x4ec: Stack[-2] = "quest_d7_03" // @poff=390
0x4ed: Stack[-1] = "completed" // @poff=440
0x4ee: Call2 0x4ad

0x4ef: Pop(3)
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty()
0x4f2: Push("samopal is given") // @poff=460
0x4f3: @ Trace(Stack[-1])
0x4f4: Pop(1)
0x4f5: PushEmpty(object, string, int)
0x4f6: Stack[-5] = Stack[-3]
0x4f7: Stack[-2] = "Samopal" // @poff=494
0x4f8: Stack[-1] = (int) 1
0x4f9: Call2 0x4a0

0x4fa: Pop(3)
0x4fb: Return(); Pop(0)

0x4fc: PushEmpty()
0x4fd: Push("whitevaccine is given") // @poff=510
0x4fe: @ Trace(Stack[-1])
0x4ff: Pop(1)
0x500: PushEmpty(object, string, int)
0x501: Stack[-5] = Stack[-3]
0x502: Stack[-2] = "white_vaccine" // @poff=554
0x503: Stack[-1] = (int) 1
0x504: Call2 0x4a0

0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: PushEmpty()
0x508: Push("feromicin is given") // @poff=582
0x509: @ Trace(Stack[-1])
0x50a: Pop(1)
0x50b: PushEmpty(object, string, int)
0x50c: Stack[-5] = Stack[-3]
0x50d: Stack[-2] = "feromicin" // @poff=620
0x50e: Stack[-1] = (int) 1
0x50f: Call2 0x4a0

0x510: Pop(3)
0x511: Return(); Pop(0)

0x512: PushEmpty()
0x513: Push("neomicin is given") // @poff=640
0x514: @ Trace(Stack[-1])
0x515: Pop(1)
0x516: PushEmpty(object, string, int)
0x517: Stack[-5] = Stack[-3]
0x518: Stack[-2] = "neomicin" // @poff=676
0x519: Stack[-1] = (int) 1
0x51a: Call2 0x4a0

0x51b: Pop(3)
0x51c: Return(); Pop(0)

0x51d: PushEmpty()
0x51e: Push("samopal ammo5 is given") // @poff=694
0x51f: @ Trace(Stack[-1])
0x520: Pop(1)
0x521: PushEmpty(object, string, int)
0x522: Stack[-5] = Stack[-3]
0x523: Stack[-2] = "samopal_ammo" // @poff=740
0x524: Stack[-1] = (int) 5
0x525: Call2 0x4a0

0x526: Pop(3)
0x527: Return(); Pop(0)

0x528: PushEmpty()
0x529: PushEmpty(int, string)
0x52a: Stack[-1] = "ood7AglajaPetr1" // @poff=358
0x52b: Call2 0x47c

0x52c: Pop(1)
0x52d: Push((int) 0)
0x52e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: Stack[-2] = (bool) 1
0x531: Return(); Pop(0)

0x532: Stack[-2] = (bool) 0
0x533: Return(); Pop(0)

0x534: PushEmpty()
0x535: PushEmpty(int, string)
0x536: Stack[-1] = "d7q03" // @poff=766
0x537: Call2 0x47c

0x538: Pop(1)
0x539: Push((int) 4)
0x53a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-2] = (bool) 1
0x53d: Return(); Pop(0)

0x53e: Stack[-2] = (bool) 0
0x53f: Return(); Pop(0)

0x540: PushEmpty()
0x541: PushEmpty(int, string)
0x542: Stack[-1] = "d7q03" // @poff=766
0x543: Call2 0x47c

0x544: Pop(1)
0x545: Push((int) 1000)
0x546: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-2] = (bool) 1
0x549: Return(); Pop(0)

0x54a: Stack[-2] = (bool) 0
0x54b: Return(); Pop(0)

0x54c: PushEmpty(object, object)
0x54d: Push((int) 645)
0x54e: Push((int) 2)
0x54f: Push((int) 533279)
0x550: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: PushEmpty(bool, object, int)
0x553: Stack[-4] = Stack[-2]
0x554: Stack[-1] = (int) 641
0x555: Call2 0x566

0x556: Pop(3)
0x557: Return(); Pop(2)

0x558: Stack[-1] = 0
0x559: PushEmpty(object, object)
0x55a: @ GetDiaryRoot(Stack[-1])
0x55b: Pop(0)
0x55c: Pop(0); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x55e: Push("Can't retrieve diary root") // @poff=778
0x55f: @ Trace(Stack[-1])
0x560: Pop(1)
0x561: Stack[-3] = (bool) 0
0x562: Return(); Pop(2)

0x563: Stack[-1] = Stack[-3]
0x564: Return(); Pop(2)

0x565: Stack[-1] = 0
0x566: PushEmpty(object, object, int, object, object, int)
0x567: PushEmpty(object)
0x568: Call2 0x559

0x569: Stack[-1] = Stack[-4]
0x56a: Pop(1)
0x56b: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=830
0x56c: Pop(0)
0x56d: Pop(0); Push((bool) Stack[-2] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x56f: Push("Can't find diary parent with id: ") // @poff=835
0x570: Pop(1); Push(Stack[-1] + Stack[-8]);
0x571: @ Trace(Stack[-1])
0x572: Pop(1)
0x573: Stack[-9] = (bool) 0
0x574: Return(); Pop(6)

0x575: @@ AddChild(Stack[-8]); Obj=2 // @poff=903
0x576: Pop(0)
0x577: Push((int) 7)
0x578: @ SendWorldWndMessage(Stack[-1])
0x579: Pop(1)
0x57a: @@ GetCategory(Stack[-1]); Obj=8 // @poff=912
0x57b: Pop(0)
0x57c: @ SetDiarySection(Stack[-1])
0x57d: Pop(0)
0x57e: Stack[-9] = (bool) 0
0x57f: Return(); Pop(6)

0x580: Stack[-2] = 0
0x581: Stack[-3] = 0
0x582: PushEmpty(int, int)
0x583: Push("branch") // @poff=924
0x584: @ GetVariable(Stack[-1], Stack[-2])
0x585: Pop(1)
0x586: Push((int) 0)
0x587: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x589: Stack[-3] = (int) 1
0x58a: Return(); Pop(2)

0x58b: GOTO 0x591

0x58c: Push((int) 1)
0x58d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-3] = (int) 2
0x590: Return(); Pop(2)

0x591: Stack[-3] = (int) 3
0x592: Return(); Pop(2)

0x593: Stack[-1] = (int) 515527
0x594: Return(); Pop(0)

0x595: Stack[-1] = (int) 513334
0x596: Return(); Pop(0)

0x597: Stack[-1] = "ui/NPC_Aglaja.png" // @poff=938
0x598: Return(); Pop(0)

0x599: Stack[-1] = "ui/NPC_Aglaja_b.png" // @poff=974
0x59a: Return(); Pop(0)

0x59b: Stack[-1] = (bool) 1
0x59c: Return(); Pop(0)

