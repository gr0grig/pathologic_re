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
	W:player
	W:head
	A:GetPosition
	A:GetProperty
	A:SetProperty
	A:GetEyesHeight
	A:add
	W:money
	W:Money
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
	W:d1q02AnnaGotoLaska
	A:FindMark
	A:Remove
	W:d1q02JuliaGotoAnna
	W:quest_d1_02
	W:completed
	W:ood1GorbunLaska1
	W:d1q02
	W:money 2000 removed
	W:ood1GorbunLaska2
	W:playsound
	W:givemoney
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657450726f70657274790053657450726f7065727479004765744579657348656967687400616464006d006f006e006500790000004d006f006e00650079000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e00670000006400310071003000320041006e006e00610047006f0074006f004c00610073006b006100000046696e644d61726b0052656d6f766500640031007100300032004a0075006c006900610047006f0074006f0041006e006e0061000000710075006500730074005f00640031005f0030003200000063006f006d0070006c00650074006500640000006f006f006400310047006f007200620075006e004c00610073006b006100310000006400310071003000320000006d006f006e0065007900200032003000300030002000720065006d006f0076006500640000006f006f006400310047006f007200620075006e004c00610073006b0061003200000070006c006100790073006f0075006e006400000067006900760065006d006f006e00650079000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000
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
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	Trace (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1fd
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x203 Vars = (object)
		EVENT_26 Op = 0x23b Vars = (string)
		EVENT_5 Op = 0x243 Vars = ()
		EVENT_6 Op = 0x248 Vars = ()
		EVENT_7 Op = 0x287 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 100.0
0x5: Call2 0x316

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3cc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ca

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3ce

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c8

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x35a

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0xae

0x53: Pop(1)
0x54: Push((int) 532716)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x45d

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x439

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 532717)
0x68: Push((int) 34571)
0x69: Push((int) 34192)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: PushEmpty(bool)
0x6d: Stack[-1] = (bool) 0
0x6e: PushEmpty(bool)
0x6f: Stack[-1] = (bool) 0
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x42f

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x445

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7c: PushEmpty(bool, object)
0x7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Call2 0x451

0x7f: Pop(1)
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Stack[-1] = (bool) 1
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: Push((int) 532721)
0x84: Push((int) 34197)
0x85: Push((int) 34196)
0x86: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x87: Pop(3)
0x88: Push((int) 532724)
0x89: Push((int) -1)
0x8a: Push((int) 34199)
0x8b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8c: Pop(3)
0x8d: GOTO 0x90

0x8e: Return(); Pop(0)

0x8f: GOTO 0x4e

0x90: PushEmpty(bool)
0x91: Call2 0x3d2

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x94: @ lshWaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: PushEmpty(string)
0x9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b: Call2 0x36b

0x9c: Pop(1)
0x9d: GOTO 0x94

0x9e: GOTO 0xad

0x9f: Push("all") // @poff=138
0xa0: Push("idle") // @poff=146
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ WaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: Push("all") // @poff=138
0xa9: Push("idle") // @poff=146
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: GOTO 0xa3

0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0x3d2

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(string, bool)
0xb9: Stack[-3] = Stack[-2]
0xba: Push("") // @poff=102
0xbb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0x372

0xc1: Pop(2)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0x383

0xc9: Pop(0)
0xca: Push((int) 34192)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x40a

0xd1: Pop(2)
0xd2: Push((int) 34194)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x429

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x3ec

0xde: Pop(2)
0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x419

0xe3: Pop(2)
0xe4: Push((int) 34195)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x410

0xeb: Pop(2)
0xec: Push((int) 34196)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x423

0xf3: Pop(2)
0xf4: Push((int) 34198)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x3ec

0xfb: Pop(2)
0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x429

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x419

0x105: Pop(2)
0x106: Push((int) 34591)
0x107: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x3ec

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x429

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x419

0x117: Pop(2)
0x118: Push((int) 34191)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral" // @poff=89
0x11d: Call2 0xae

0x11e: Pop(1)
0x11f: Push((int) 532716)
0x120: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x121: Pop(1)
0x122: @@@ ClearReplies(); Obj=0 // @poff=116
0x123: Pop(0)
0x124: PushEmpty(bool)
0x125: Stack[-1] = (bool) 0
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0x45d

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0x439

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 532717)
0x133: Push((int) 34571)
0x134: Push((int) 34192)
0x135: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x136: Pop(3)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call2 0x42f

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0x445

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Stack[-1] = (bool) 1
0x146: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x451

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Stack[-1] = (bool) 1
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 532721)
0x14f: Push((int) 34197)
0x150: Push((int) 34196)
0x151: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x152: Pop(3)
0x153: Push((int) 532724)
0x154: Push((int) -1)
0x155: Push((int) 34199)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 34197)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral" // @poff=89
0x15e: Call2 0xae

0x15f: Pop(1)
0x160: Push((int) 532722)
0x161: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x162: Pop(1)
0x163: @@@ ClearReplies(); Obj=0 // @poff=116
0x164: Pop(0)
0x165: Push((int) 532723)
0x166: Push((int) -1)
0x167: Push((int) 34198)
0x168: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x169: Pop(3)
0x16a: Push((int) 533075)
0x16b: Push((int) 34590)
0x16c: Push((int) 34589)
0x16d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Push((int) 34590)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral" // @poff=89
0x175: Call2 0xae

0x176: Pop(1)
0x177: Push((int) 533076)
0x178: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x179: Pop(1)
0x17a: @@@ ClearReplies(); Obj=0 // @poff=116
0x17b: Pop(0)
0x17c: Push((int) 533077)
0x17d: Push((int) -1)
0x17e: Push((int) 34591)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Push((int) 34571)
0x183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral" // @poff=89
0x187: Call2 0xae

0x188: Pop(1)
0x189: Push((int) 533060)
0x18a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18b: Pop(1)
0x18c: @@@ ClearReplies(); Obj=0 // @poff=116
0x18d: Pop(0)
0x18e: Push((int) 533061)
0x18f: Push((int) 34573)
0x190: Push((int) 34572)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: Push((int) 533071)
0x194: Push((int) 34573)
0x195: Push((int) 34583)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 34573)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral" // @poff=89
0x19e: Call2 0xae

0x19f: Pop(1)
0x1a0: Push((int) 533062)
0x1a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a2: Pop(1)
0x1a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a4: Pop(0)
0x1a5: Push((int) 533063)
0x1a6: Push((int) 34575)
0x1a7: Push((int) 34574)
0x1a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a9: Pop(3)
0x1aa: Push((int) 533072)
0x1ab: Push((int) 34193)
0x1ac: Push((int) 34585)
0x1ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ae: Pop(3)
0x1af: Return(); Pop(0)

0x1b0: Push((int) 34575)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "Neutral" // @poff=89
0x1b5: Call2 0xae

0x1b6: Pop(1)
0x1b7: Push((int) 533064)
0x1b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b9: Pop(1)
0x1ba: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bb: Pop(0)
0x1bc: Push((int) 533065)
0x1bd: Push((int) 34193)
0x1be: Push((int) 34576)
0x1bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 34193)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral" // @poff=89
0x1c7: Call2 0xae

0x1c8: Pop(1)
0x1c9: Push((int) 532718)
0x1ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cb: Pop(1)
0x1cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cd: Pop(0)
0x1ce: Push((int) 533073)
0x1cf: Push((int) 34588)
0x1d0: Push((int) 34587)
0x1d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 34588)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral" // @poff=89
0x1d9: Call2 0xae

0x1da: Pop(1)
0x1db: Push((int) 533074)
0x1dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1dd: Pop(1)
0x1de: @@@ ClearReplies(); Obj=0 // @poff=116
0x1df: Pop(0)
0x1e0: PushEmpty(bool, object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call2 0x42f

0x1e3: Pop(1)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: Push((int) 532719)
0x1e6: Push((int) -1)
0x1e7: Push((int) 34194)
0x1e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e9: Pop(3)
0x1ea: Push((int) 532720)
0x1eb: Push((int) -1)
0x1ec: Push((int) 34195)
0x1ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f1: PushEmpty(bool)
0x1f2: Call2 0x3d2

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f5: @ lshStopAnimation()
0x1f6: Pop(0)
0x1f7: GOTO 0x1fa

0x1f8: @ StopAnimation()
0x1f9: Pop(0)
0x1fa: Return(); Pop(0)

0x1fb: GOTO 0xc5

0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(float, float)
0x1fe: Stack[-2] = (int) 300
0x1ff: Stack[-1] = (int) 100
0x200: Call2 0x20e

0x201: Pop(2)
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: PushEmpty()
0x205: Call2 0x29e

0x206: Pop(0)
0x207: PushEmpty(int, object)
0x208: Stack[-3] = Stack[-1]
0x209: Push(-2, 1); TaskCall(0)
0x20a: Call2 0x0

0x20b: Pop(-2, 1); TaskReturn
0x20c: Pop(2)
0x20d: Return(); Pop(0)

0x20e: PushEmpty(float, float)
0x20f: PushEmpty(bool)
0x210: Call2 0x311

0x211: Pop(0)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x214: @ Hold()
0x215: Pop(0)
0x216: GOTO 0x20f

0x217: Push((int) 3)
0x218: @ rand(Stack[-2], Stack[-1])
0x219: Pop(1)
0x21a: Push((int) 3)
0x21b: Pop(1); Push(Stack[-2] + Stack[-1]);
0x21c: @ Sleep(Stack[-1])
0x21d: Pop(1)
0x21e: PushEmpty(float, float)
0x21f: Stack[-6] = Stack[-2]
0x220: Stack[-5] = Stack[-1]
0x221: Call2 0x25d

0x222: Pop(2)
0x223: @ sync()
0x224: Pop(0)
0x225: GOTO 0x20f

0x226: Return(); Pop(2)

0x227: PushEmpty(bool, bool)
0x228: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x229: @ IsLoaded(Stack[-1])
0x22a: Pop(0)
0x22b: PushEmpty(bool)
0x22c: Stack[-1] = (bool) 0
0x22d: Pop(0); Push((bool) Stack[-2] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22f: PushEmpty(bool)
0x230: Call2 0x25b

0x231: Pop(0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: Stack[-1] = (bool) 1
0x234: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x235: PushEmpty(object)
0x236: Call2 0x38a

0x237: Pop(0)
0x238: @ RemoveActor(Stack[-1])
0x239: Pop(1)
0x23a: Return(); Pop(2)

0x23b: PushEmpty()
0x23c: Push("cleanup") // @poff=156
0x23d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23f: PushEmpty()
0x240: Call2 0x227

0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: @ StopGroup0()
0x244: Pop(0)
0x245: @ sync()
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: PushEmpty()
0x249: Call2 0x29e

0x24a: Pop(0)
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(bool)
0x250: Call2 0x25b

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Stack[-1] = (bool) 1
0x254: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x255: PushEmpty(object)
0x256: Call2 0x38a

0x257: Pop(0)
0x258: @ RemoveActor(Stack[-1])
0x259: Pop(1)
0x25a: Return(); Pop(0)

0x25b: Stack[-1] = (bool) 1
0x25c: Return(); Pop(0)

0x25d: PushEmpty()
0x25e: PushEmpty(bool)
0x25f: Call2 0x311

0x260: Pop(0)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Return(); Pop(0)

0x264: Push("player") // @poff=172
0x265: @ FindActor(Stack[-4]T, Stack[-1])
0x266: Pop(1)
0x267: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x268: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x269: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x26a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x26b: Push((int) 10)
0x26c: Push((float)1.0)
0x26d: @ SetTimer(Stack[-2], Stack[-1])
0x26e: Pop(2)
0x26f: PushEmpty()
0x270: Call2 0x2ac

0x271: Pop(0)
0x272: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x274: Push((int) 10)
0x275: @ KillTimer(Stack[-1])
0x276: Pop(1)
0x277: Return(); Pop(0)

0x278: PushEmpty(float, float)
0x279: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: Stack[-3] = (bool) 0
0x27c: Return(); Pop(2)

0x27d: PushEmpty(float, object)
0x27e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x27f: Call2 0x302

0x280: Pop(1)
0x281: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x282: Push( Stack[2 + Tasks[-1].StackPointer] )
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x285: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x286: Return(); Pop(2)

0x287: PushEmpty()
0x288: Push((int) 10)
0x289: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28b: PushEmpty(bool)
0x28c: Call2 0x278

0x28d: Pop(0)
0x28e: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: PushEmpty(object)
0x292: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x293: Call2 0x378

0x294: Pop(1)
0x295: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x296: GOTO 0x29d

0x297: Push( Stack[2 + Tasks[-1].StackPointer] )
0x298: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x299: Push("head") // @poff=186
0x29a: @ UnlookAsync(Stack[-1])
0x29b: Pop(1)
0x29c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: Call2 0x2fd

0x2a0: Pop(0)
0x2a1: Push((int) 10)
0x2a2: @ KillTimer(Stack[-1])
0x2a3: Pop(1)
0x2a4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2a5: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a6: Push("head") // @poff=186
0x2a7: @ UnlookAsync(Stack[-1])
0x2a8: Pop(1)
0x2a9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2aa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2ad: @ WaitForAnimEnd()
0x2ae: Pop(0)
0x2af: PushEmpty(bool)
0x2b0: Call2 0x311

0x2b1: Pop(0)
0x2b2: Pop(1); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: Return(); Pop(14)

0x2b5: PushEmpty(int)
0x2b6: Call2 0x3db

0x2b7: Stack[-1] = Stack[-8]
0x2b8: Pop(1)
0x2b9: Stack[-6] = (int) 0
0x2ba: PushEmpty(bool)
0x2bb: Stack[-1] = (bool) 0
0x2bc: Push((int) 5)
0x2bd: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: PushEmpty(bool)
0x2c0: Call2 0x311

0x2c1: Pop(0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: Stack[-1] = (bool) 1
0x2c4: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2c5: Push((int) 3)
0x2c6: @ irand(Stack[-6], Stack[-1])
0x2c7: Pop(1)
0x2c8: Push((int) 0)
0x2c9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2cb: Push(Stack[-7])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2cd: @ irand(Stack[-4], Stack[-7])
0x2ce: Pop(0)
0x2cf: Push("all") // @poff=138
0x2d0: PushEmpty(string, int)
0x2d1: Stack[-7] = Stack[-1]
0x2d2: Call2 0x3d4

0x2d3: Pop(1)
0x2d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d5: Pop(2)
0x2d6: @ WaitForAnimEnd(Stack[-3])
0x2d7: Pop(0)
0x2d8: Pop(0); Push((bool) Stack[-3] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: GOTO 0x2f8

0x2db: GOTO 0x2ed

0x2dc: Push((int) 1)
0x2dd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2df: Push((int) 4)
0x2e0: @ rand(Stack[-3], Stack[-1])
0x2e1: Pop(1)
0x2e2: Push((int) 1)
0x2e3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e4: @ Sleep(Stack[-1], Stack[-2])
0x2e5: Pop(1)
0x2e6: Pop(0); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2f8

0x2e9: GOTO 0x2ed

0x2ea: Push(Stack[-6])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2f8

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2fb

0x2ef: Pop(0)
0x2f0: Pop(1); Push((bool) Stack[-1] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: GOTO 0x2f8

0x2f3: @ ResetAAS()
0x2f4: Pop(0)
0x2f5: Push((int) 1)
0x2f6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2f7: GOTO 0x2ba

0x2f8: @ ResetAAS()
0x2f9: Pop(0)
0x2fa: Return(); Pop(14)

0x2fb: Stack[-1] = (bool) 1
0x2fc: Return(); Pop(0)

0x2fd: @ StopAnimation()
0x2fe: Pop(0)
0x2ff: @ StopGroup0()
0x300: Pop(0)
0x301: Return(); Pop(0)

0x302: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x303: @ GetPosition(Stack[-3])
0x304: Pop(0)
0x305: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x306: Pop(0)
0x307: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x308: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x309: Return(); Pop(6)

0x30a: PushEmpty(int, int)
0x30b: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=208
0x30c: Pop(0)
0x30d: Pop(0); Push(Stack[-1] + Stack[-3]);
0x30e: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=220
0x30f: Pop(1)
0x310: Return(); Pop(2)

0x311: PushEmpty(bool, bool)
0x312: @ IsLoaded(Stack[-1])
0x313: Pop(0)
0x314: Stack[-1] = Stack[-3]
0x315: Return(); Pop(2)

0x316: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x317: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x318: Pop(0)
0x319: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=232
0x31a: Pop(0)
0x31b: Push(CvectorIndex(Stack[-8], 1))
0x31c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x31e: @ GetPosition(Stack[-7])
0x31f: Pop(0)
0x320: @ GetEyesHeight(Stack[-9])
0x321: Pop(0)
0x322: Push(CvectorIndex(Stack[-7], 1))
0x323: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x324: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x325: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x326: Push(CvectorIndex(Stack[-6], 1))
0x327: Stack[-1] = (int) 0
0x328: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x329: Pop(0); Push(Stack[-6] | Stack[-6]);
0x32a: Pop(1); Push(Sqrt(Stack[-1]))
0x32b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x32c: Stack[-5] = -Stack[-6]; Pop(0);
0x32d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x32e: PushEmpty(cvector, cvector)
0x32f: Push([0.0, 1.0, 0.0])
0x330: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x331: Call2 0x390

0x332: Pop(1)
0x333: Push((int) 25)
0x334: Pop(2); Push(Stack[-2] * Stack[-1]);
0x335: Pop(2); Push(Stack[-2] + Stack[-1]);
0x336: Push([0.0, 10.0, 0.0])
0x337: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x338: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x339: @ IsOverrideActive(Stack[-2])
0x33a: Pop(0)
0x33b: Push(Stack[-2])
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-21] = (bool) 0
0x33e: Return(); Pop(18)

0x33f: @ StopWorld()
0x340: Pop(0)
0x341: @ CameraTransit(Stack[-3], Stack[-5])
0x342: Pop(0)
0x343: Push(CvectorIndex(Stack[-4], 0))
0x344: Push(CvectorIndex(Stack[-5], 2))
0x345: @ Rotate(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: PushEmpty(bool)
0x348: Call2 0x3d2

0x349: Pop(0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34b: GOTO 0x354

0x34c: Push("head") // @poff=186
0x34d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34e: Pop(1)
0x34f: Push(Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x351: Push("head") // @poff=186
0x352: @ LookAsyncCamera(Stack[-1])
0x353: Pop(1)
0x354: @ CameraWaitForPlayFinish()
0x355: Pop(0)
0x356: @ ResumeWorld()
0x357: Pop(0)
0x358: Stack[-21] = (bool) 1
0x359: Return(); Pop(18)

0x35a: PushEmpty(bool, bool)
0x35b: @ CameraSwitchToNormal()
0x35c: Pop(0)
0x35d: PushEmpty(bool)
0x35e: Call2 0x3d2

0x35f: Pop(0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: GOTO 0x36a

0x362: Push("head") // @poff=186
0x363: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x364: Pop(1)
0x365: Push(Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x367: Push("head") // @poff=186
0x368: @ UnlookAsync(Stack[-1])
0x369: Pop(1)
0x36a: Return(); Pop(2)

0x36b: PushEmpty(float, float, float, float)
0x36c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x36d: Pop(0)
0x36e: Push((bool) 0)
0x36f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(1)
0x371: Return(); Pop(4)

0x372: PushEmpty(float, float, float, float)
0x373: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x374: Pop(0)
0x375: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x376: Pop(0)
0x377: Return(); Pop(4)

0x378: PushEmpty(float, cvector, float, cvector)
0x379: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=232
0x37a: Pop(0)
0x37b: Stack[-1] = [0.0, 0.0, 0.0]
0x37c: Push(CvectorIndex(Stack[-1], 1))
0x37d: Stack[-3] = Stack[-1]
0x37e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x37f: Push("head") // @poff=186
0x380: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x381: Pop(1)
0x382: Return(); Pop(4)

0x383: PushEmpty(bool)
0x384: Call2 0x3d2

0x385: Pop(0)
0x386: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x387: @ lshStopSpeech()
0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty(object, object)
0x38b: @ self(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-1] = Stack[-3]
0x38e: Return(); Pop(2)

0x38f: Stack[-1] = 0
0x390: PushEmpty(float, float)
0x391: Pop(0); Push(Stack[-3] | Stack[-3]);
0x392: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x393: Push((float)9.999999974752427e-07)
0x394: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-4] = [0.0, 0.0, 0.0]
0x397: Return(); Pop(2)

0x398: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x399: Return(); Pop(2)

0x39a: PushEmpty(int, int)
0x39b: @ GetVariable(Stack[-3], Stack[-1])
0x39c: Pop(0)
0x39d: Stack[-1] = Stack[-4]
0x39e: Return(); Pop(2)

0x39f: PushEmpty(object, object)
0x3a0: @ CreateIntVector(Stack[-1])
0x3a1: Pop(0)
0x3a2: @@ add(Stack[-4]); Obj=1 // @poff=246
0x3a3: Pop(0)
0x3a4: @@ add(Stack[-3]); Obj=1 // @poff=246
0x3a5: Pop(0)
0x3a6: Push((int) 3)
0x3a7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3a8: Pop(1)
0x3a9: Return(); Pop(2)

0x3aa: Stack[-1] = 0
0x3ab: PushEmpty(int, int)
0x3ac: PushEmpty(object, string, int)
0x3ad: Stack[-7] = Stack[-3]
0x3ae: Stack[-2] = "money" // @poff=250
0x3af: Stack[-6] = Stack[-1]
0x3b0: Call2 0x30a

0x3b1: Pop(3)
0x3b2: Push((int) 0)
0x3b3: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b5: Push("Money") // @poff=262
0x3b6: @ GetInvItemByName(Stack[-2], Stack[-1])
0x3b7: Pop(1)
0x3b8: PushEmpty(int, int)
0x3b9: Stack[-3] = Stack[-2]
0x3ba: Stack[-5] = Stack[-1]
0x3bb: Call2 0x39f

0x3bc: Pop(2)
0x3bd: Return(); Pop(2)

0x3be: PushEmpty(object, object)
0x3bf: @ FindActor(Stack[-1], Stack[-4])
0x3c0: Pop(0)
0x3c1: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-5] = (bool) 0
0x3c4: Return(); Pop(2)

0x3c5: @ Trigger(Stack[-1], Stack[-3])
0x3c6: Pop(0)
0x3c7: Stack[-5] = (bool) 1
0x3c8: Return(); Pop(2)

0x3c9: Stack[-1] = 0
0x3ca: Stack[-1] = (int) 515594
0x3cb: Return(); Pop(0)

0x3cc: Stack[-1] = (int) 512583
0x3cd: Return(); Pop(0)

0x3ce: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=274
0x3cf: Return(); Pop(0)

0x3d0: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=314
0x3d1: Return(); Pop(0)

0x3d2: Stack[-1] = (bool) 0
0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(string, string)
0x3d5: Stack[-1] = "idle" // @poff=146
0x3d6: Push(Stack[-3])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3d9: Stack[-1] = Stack[-4]
0x3da: Return(); Pop(2)

0x3db: PushEmpty(int, bool, int, bool)
0x3dc: Stack[-2] = (int) 0
0x3dd: Push("all") // @poff=138
0x3de: PushEmpty(string, int)
0x3df: Stack[-5] = Stack[-1]
0x3e0: Call2 0x3d4

0x3e1: Pop(1)
0x3e2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(2)
0x3e4: Pop(0); Push((bool) Stack[-1] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: GOTO 0x3ea

0x3e7: Push((int) 1)
0x3e8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3e9: GOTO 0x3dd

0x3ea: Stack[-2] = Stack[-5]
0x3eb: Return(); Pop(4)

0x3ec: PushEmpty(object, object, object, object)
0x3ed: PushEmpty(object)
0x3ee: Call2 0x4b7

0x3ef: Stack[-1] = Stack[-3]
0x3f0: Pop(1)
0x3f1: Push("d1q02AnnaGotoLaska") // @poff=358
0x3f2: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=396
0x3f3: Pop(1)
0x3f4: Push(Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: @@ Remove(); Obj=1 // @poff=405
0x3f7: Pop(0)
0x3f8: Push("d1q02JuliaGotoAnna") // @poff=412
0x3f9: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=396
0x3fa: Pop(1)
0x3fb: Push(Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: @@ Remove(); Obj=1 // @poff=405
0x3fe: Pop(0)
0x3ff: PushEmpty()
0x400: Call2 0x474

0x401: Pop(0)
0x402: PushEmpty(bool, string, string)
0x403: Stack[-2] = "quest_d1_02" // @poff=450
0x404: Stack[-1] = "completed" // @poff=474
0x405: Call2 0x3be

0x406: Pop(3)
0x407: Return(); Pop(4)

0x408: Stack[-1] = 0
0x409: Stack[-2] = 0
0x40a: PushEmpty()
0x40b: Push("ood1GorbunLaska1") // @poff=494
0x40c: Push((int) 1)
0x40d: @ SetVariable(Stack[-2], Stack[-1])
0x40e: Pop(2)
0x40f: Return(); Pop(0)

0x410: PushEmpty()
0x411: Push("d1q02") // @poff=528
0x412: Push((int) 4)
0x413: @ SetVariable(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: PushEmpty()
0x416: Call2 0x481

0x417: Pop(0)
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: Push("money 2000 removed") // @poff=540
0x41b: @ Trace(Stack[-1])
0x41c: Pop(1)
0x41d: PushEmpty(object, int)
0x41e: Stack[-4] = Stack[-2]
0x41f: Stack[-1] = (int) -2000
0x420: Call2 0x3ab

0x421: Pop(2)
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: Push("ood1GorbunLaska2") // @poff=578
0x425: Push((int) 1)
0x426: @ SetVariable(Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: Return(); Pop(0)

0x429: PushEmpty()
0x42a: Push("playsound") // @poff=612
0x42b: Push("givemoney") // @poff=632
0x42c: @ TriggerWorld(Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(bool, object)
0x431: Stack[-3] = Stack[-1]
0x432: Call2 0x469

0x433: Pop(1)
0x434: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x435: Stack[-2] = (bool) 1
0x436: Return(); Pop(0)

0x437: Stack[-2] = (bool) 0
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: PushEmpty(int, string)
0x43b: Stack[-1] = "ood1GorbunLaska1" // @poff=494
0x43c: Call2 0x39a

0x43d: Pop(1)
0x43e: Push((int) 0)
0x43f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-2] = (bool) 1
0x442: Return(); Pop(0)

0x443: Stack[-2] = (bool) 0
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: PushEmpty(int, string)
0x447: Stack[-1] = "ood1GorbunLaska2" // @poff=578
0x448: Call2 0x39a

0x449: Pop(1)
0x44a: Push((int) 0)
0x44b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-2] = (bool) 1
0x44e: Return(); Pop(0)

0x44f: Stack[-2] = (bool) 0
0x450: Return(); Pop(0)

0x451: PushEmpty()
0x452: PushEmpty(int, string)
0x453: Stack[-1] = "d1q02" // @poff=528
0x454: Call2 0x39a

0x455: Pop(1)
0x456: Push((int) 4)
0x457: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-2] = (bool) 1
0x45a: Return(); Pop(0)

0x45b: Stack[-2] = (bool) 0
0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: PushEmpty(int, string)
0x45f: Stack[-1] = "d1q02" // @poff=528
0x460: Call2 0x39a

0x461: Pop(1)
0x462: Push((int) 2)
0x463: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-2] = (bool) 1
0x466: Return(); Pop(0)

0x467: Stack[-2] = (bool) 0
0x468: Return(); Pop(0)

0x469: PushEmpty(float, float)
0x46a: Push("money") // @poff=250
0x46b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=208
0x46c: Pop(1)
0x46d: Push((int) 2000)
0x46e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-4] = (bool) 1
0x471: Return(); Pop(2)

0x472: Stack[-4] = (bool) 0
0x473: Return(); Pop(2)

0x474: PushEmpty(object, object)
0x475: Push((int) 36)
0x476: Push((int) 2)
0x477: Push((int) 512118)
0x478: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: PushEmpty(bool, object, int)
0x47b: Stack[-4] = Stack[-2]
0x47c: Stack[-1] = (int) 7
0x47d: Call2 0x49b

0x47e: Pop(3)
0x47f: Return(); Pop(2)

0x480: Stack[-1] = 0
0x481: PushEmpty(object, object)
0x482: Push((int) 625)
0x483: Push((int) 2)
0x484: Push((int) 532728)
0x485: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: PushEmpty(bool, object, int)
0x488: Stack[-4] = Stack[-2]
0x489: Stack[-1] = (int) 7
0x48a: Call2 0x49b

0x48b: Pop(3)
0x48c: Return(); Pop(2)

0x48d: Stack[-1] = 0
0x48e: PushEmpty(object, object)
0x48f: @ GetDiaryRoot(Stack[-1])
0x490: Pop(0)
0x491: Pop(0); Push((bool) Stack[-1] == 0)
0x492: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x493: Push("Can't retrieve diary root") // @poff=652
0x494: @ Trace(Stack[-1])
0x495: Pop(1)
0x496: Stack[-3] = (bool) 0
0x497: Return(); Pop(2)

0x498: Stack[-1] = Stack[-3]
0x499: Return(); Pop(2)

0x49a: Stack[-1] = 0
0x49b: PushEmpty(object, object, int, object, object, int)
0x49c: PushEmpty(object)
0x49d: Call2 0x48e

0x49e: Stack[-1] = Stack[-4]
0x49f: Pop(1)
0x4a0: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=704
0x4a1: Pop(0)
0x4a2: Pop(0); Push((bool) Stack[-2] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a4: Push("Can't find diary parent with id: ") // @poff=709
0x4a5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4a6: @ Trace(Stack[-1])
0x4a7: Pop(1)
0x4a8: Stack[-9] = (bool) 0
0x4a9: Return(); Pop(6)

0x4aa: @@ AddChild(Stack[-8]); Obj=2 // @poff=777
0x4ab: Pop(0)
0x4ac: Push((int) 7)
0x4ad: @ SendWorldWndMessage(Stack[-1])
0x4ae: Pop(1)
0x4af: @@ GetCategory(Stack[-1]); Obj=8 // @poff=786
0x4b0: Pop(0)
0x4b1: @ SetDiarySection(Stack[-1])
0x4b2: Pop(0)
0x4b3: Stack[-9] = (bool) 0
0x4b4: Return(); Pop(6)

0x4b5: Stack[-2] = 0
0x4b6: Stack[-3] = 0
0x4b7: PushEmpty(object, object, object, object)
0x4b8: @ GetMainOutdoorScene(Stack[-2])
0x4b9: Pop(0)
0x4ba: Pop(0); PushNull((bool) Stack[-2] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4bc: Push("Can't find main outdoor scene") // @poff=798
0x4bd: @ Trace(Stack[-1])
0x4be: Pop(1)
0x4bf: Stack[-1] = 0
0x4c0: Stack[-1] = Stack[-5]
0x4c1: Return(); Pop(4)

0x4c2: @@ GetMap(Stack[-1]); Obj=2 // @poff=858
0x4c3: Pop(0)
0x4c4: Stack[-1] = Stack[-5]
0x4c5: Return(); Pop(4)

0x4c6: Stack[-1] = 0
0x4c7: Stack[-2] = 0
0x4c8: PushEmpty(int, int)
0x4c9: Push("branch") // @poff=865
0x4ca: @ GetVariable(Stack[-1], Stack[-2])
0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cf: Stack[-3] = (int) 1
0x4d0: Return(); Pop(2)

0x4d1: GOTO 0x4d7

0x4d2: Push((int) 1)
0x4d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-3] = (int) 2
0x4d6: Return(); Pop(2)

0x4d7: Stack[-3] = (int) 3
0x4d8: Return(); Pop(2)

