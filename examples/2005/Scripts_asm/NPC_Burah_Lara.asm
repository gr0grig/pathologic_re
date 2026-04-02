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
	W:Fear
	W:Sympathy
	W:Confusion
	W:Tiredness
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Lara.png
	W:ui/NPC_Lara_b.png
	W:b4q01
	W:b4q01LaraGotoRubin
	W:pt_map_warehouse_gangster
	A:AddMark
	W:quest_b4_01
	W:place_rubin
	W:b4q01LaraWasBadRep
	W:oob4Lara1
	W:oob8Lara1
	A:ShowMap
	W:b8q02
	W:reputation
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000046006500610072000000530079006d0070006100740068007900000043006f006e0066007500730069006f006e000000540069007200650064006e00650073007300000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004c006100720061002e0070006e0067000000750069002f004e00500043005f004c006100720061005f0062002e0070006e0067000000620034007100300031000000620034007100300031004c0061007200610047006f0074006f0052007500620069006e000000700074005f006d00610070005f00770061007200650068006f007500730065005f00670061006e006700730074006500720000004164644d61726b00710075006500730074005f00620034005f0030003100000070006c006100630065005f0072007500620069006e000000620034007100300031004c0061007200610057006100730042006100640052006500700000006f006f00620034004c00610072006100310000006f006f00620038004c006100720061003100000053686f774d617000620038007100300032000000720065007000750074006100740069006f006e000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x78d
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b3 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x558 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x69d Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x763 Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x7df Vars = (int)
		EVENT_6 Op = 0x805 Vars = ()
		EVENT_5 Op = 0x814 Vars = ()
		EVENT_45 Op = 0x821 Vars = (bool)
		EVENT_0 Op = 0x82d Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x8b1

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
0x11: Call2 0x9b8

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x90b

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x8b6

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xa07

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xa05

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xa09

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xa0b

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xb02

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
0x55: Call2 0x8fa

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
0x80: Call2 0xa0d

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x995

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
0x9f: Call2 0xa0d

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
0xaf: Call2 0x99c

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x9b1

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
0x105: Call2 0xa0d

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
0x114: Call2 0x9b8

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x90b

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x8b6

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0xa07

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0xa05

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0xa09

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0xa0b

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0xb02

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
0x158: Call2 0x8fa

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
0x166: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x19b

0x16a: Pop(1)
0x16b: Push((int) 518021)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 518022)
0x171: Push((int) -1)
0x172: Push((int) 19155)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 531564)
0x176: Push((int) -1)
0x177: Push((int) 32923)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0xa0d

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x995

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
0x19d: Call2 0xa0d

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
0x1ad: Call2 0x99c

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x9b1

0x1b6: Pop(0)
0x1b7: Push((int) 19154)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 518021)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 518022)
0x1c4: Push((int) -1)
0x1c5: Push((int) 19155)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 531564)
0x1c9: Push((int) -1)
0x1ca: Push((int) 32923)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1cf: PushEmpty(bool)
0x1d0: Call2 0xa0d

0x1d1: Pop(0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: @ lshStopAnimation()
0x1d4: Pop(0)
0x1d5: GOTO 0x1d8

0x1d6: @ StopAnimation()
0x1d7: Pop(0)
0x1d8: Return(); Pop(0)

0x1d9: GOTO 0x1b2

0x1da: Return(); Pop(0)

0x1db: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1dd: PushEmpty(bool, object)
0x1de: PushEmpty(object)
0x1df: Call2 0x9b8

0x1e0: Stack[-1] = Stack[-2]
0x1e1: Pop(1)
0x1e2: Call2 0x90b

0x1e3: Pop(2)
0x1e4: PushEmpty(bool, object, float)
0x1e5: Stack[-12] = Stack[-2]
0x1e6: Stack[-1] = (float) 70.0
0x1e7: Call2 0x8b6

0x1e8: Pop(2)
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1eb: Stack[-10] = (int) -2
0x1ec: Return(); Pop(8)

0x1ed: @ CreateDialog(Stack[-4])
0x1ee: Pop(0)
0x1ef: PushEmpty(int)
0x1f0: Call2 0xa07

0x1f1: Pop(0)
0x1f2: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x1f3: Pop(1)
0x1f4: PushEmpty(int)
0x1f5: Call2 0xa05

0x1f6: Pop(0)
0x1f7: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1f8: Pop(1)
0x1f9: PushEmpty(string)
0x1fa: Call2 0xa09

0x1fb: Pop(0)
0x1fc: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1fd: Pop(1)
0x1fe: PushEmpty(string)
0x1ff: Call2 0xa0b

0x200: Pop(0)
0x201: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x202: Pop(1)
0x203: PushEmpty(int)
0x204: Call2 0xb02

0x205: Pop(0)
0x206: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x207: Pop(1)
0x208: Stack[-2] = (int) -1
0x209: @ IsOverrideActive(Stack[-3])
0x20a: Pop(0)
0x20b: Push(Stack[-3])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-10] = (int) -2
0x20e: Return(); Pop(8)

0x20f: @ DoDialog(Stack[-4])
0x210: Pop(0)
0x211: PushEmpty(object, object)
0x212: Stack[-11] = Stack[-2]
0x213: Stack[-6] = Stack[-1]
0x214: Push(-2, 4); TaskCall(6)
0x215: Call2 0x22c

0x216: Pop(-2, 4); TaskReturn
0x217: Pop(2)
0x218: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x219: Pop(0)
0x21a: Pop(0); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: @ sync()
0x21d: Pop(0)
0x21e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x21f: Pop(0)
0x220: GOTO 0x21a

0x221: PushEmpty(object)
0x222: Stack[-10] = Stack[-1]
0x223: Call2 0x8fa

0x224: Pop(1)
0x225: @ StopDialog(Stack[-4])
0x226: Pop(0)
0x227: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x228: Pop(0)
0x229: Stack[-2] = Stack[-10]
0x22a: Return(); Pop(8)

0x22b: Stack[-4] = 0
0x22c: PushEmpty()
0x22d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x22e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x22f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x230: Push((int) 1)
0x231: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x234: Call2 0xa65

0x235: Pop(1)
0x236: Pop(1); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x238: PushEmpty(object, object)
0x239: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23b: Call2 0xa2b

0x23c: Pop(2)
0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Fear" // @poff=156
0x23f: Call2 0x29d

0x240: Pop(1)
0x241: Push((int) 518548)
0x242: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x243: Pop(1)
0x244: @@@ ClearReplies(); Obj=0 // @poff=116
0x245: Pop(0)
0x246: Push((int) 518549)
0x247: Push((int) 20132)
0x248: Push((int) 19659)
0x249: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24a: Pop(3)
0x24b: Push((int) 519021)
0x24c: Push((int) 20141)
0x24d: Push((int) 20140)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24f: Pop(3)
0x250: GOTO 0x27f

0x251: PushEmpty(string)
0x252: Stack[-1] = "Sympathy" // @poff=166
0x253: Call2 0x29d

0x254: Pop(1)
0x255: Push((int) 518550)
0x256: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x257: Pop(1)
0x258: @@@ ClearReplies(); Obj=0 // @poff=116
0x259: Pop(0)
0x25a: PushEmpty(bool, object)
0x25b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25c: Call2 0xa6f

0x25d: Pop(1)
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: Push((int) 518551)
0x260: Push((int) 20163)
0x261: Push((int) 19661)
0x262: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x263: Pop(3)
0x264: PushEmpty(bool)
0x265: Stack[-1] = (bool) 0
0x266: PushEmpty(bool, object)
0x267: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x268: Call2 0xa7b

0x269: Pop(1)
0x26a: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call2 0xa87

0x26e: Pop(1)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-1] = (bool) 1
0x271: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x272: Push((int) 519028)
0x273: Push((int) 20149)
0x274: Push((int) 20148)
0x275: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x276: Pop(3)
0x277: Push((int) 518554)
0x278: Push((int) -1)
0x279: Push((int) 19664)
0x27a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27b: Pop(3)
0x27c: GOTO 0x27f

0x27d: Return(); Pop(0)

0x27e: GOTO 0x230

0x27f: PushEmpty(bool)
0x280: Call2 0xa0d

0x281: Pop(0)
0x282: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x283: @ lshWaitForAnimEnd()
0x284: Pop(0)
0x285: Push( Stack[3 + Tasks[-1].StackPointer] )
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x28d

0x288: PushEmpty(string)
0x289: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28a: Call2 0x995

0x28b: Pop(1)
0x28c: GOTO 0x283

0x28d: GOTO 0x29c

0x28e: Push("all") // @poff=138
0x28f: Push("idle") // @poff=146
0x290: @ PlayAnimation(Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: @ WaitForAnimEnd()
0x293: Pop(0)
0x294: Push( Stack[3 + Tasks[-1].StackPointer] )
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: GOTO 0x29c

0x297: Push("all") // @poff=138
0x298: Push("idle") // @poff=146
0x299: @ PlayAnimation(Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: GOTO 0x292

0x29c: Return(); Pop(0)

0x29d: PushEmpty()
0x29e: PushEmpty(bool)
0x29f: Call2 0xa0d

0x2a0: Pop(0)
0x2a1: Pop(1); Push((bool) Stack[-1] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Return(); Pop(0)

0x2a4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(string, bool)
0x2a8: Stack[-3] = Stack[-2]
0x2a9: Push("") // @poff=102
0x2aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-1] = (bool) 0
0x2ad: GOTO 0x2af

0x2ae: Stack[-1] = (bool) 1
0x2af: Call2 0x99c

0x2b0: Pop(2)
0x2b1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: Push((int) 1)
0x2b5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x2b6: PushEmpty()
0x2b7: Call2 0x9b1

0x2b8: Pop(0)
0x2b9: Push((int) 19663)
0x2ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2bc: PushEmpty(object, object)
0x2bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bf: Call2 0xa0f

0x2c0: Pop(2)
0x2c1: PushEmpty(object, object)
0x2c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c4: Call2 0xa3d

0x2c5: Pop(2)
0x2c6: Push((int) 20148)
0x2c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c9: PushEmpty(object, object)
0x2ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cc: Call2 0xa31

0x2cd: Pop(2)
0x2ce: Push((int) 19658)
0x2cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Call2 0xa65

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2d7: PushEmpty(object, object)
0x2d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2da: Call2 0xa2b

0x2db: Pop(2)
0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Fear" // @poff=156
0x2de: Call2 0x29d

0x2df: Pop(1)
0x2e0: Push((int) 518548)
0x2e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e2: Pop(1)
0x2e3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e4: Pop(0)
0x2e5: Push((int) 518549)
0x2e6: Push((int) 20132)
0x2e7: Push((int) 19659)
0x2e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e9: Pop(3)
0x2ea: Push((int) 519021)
0x2eb: Push((int) 20141)
0x2ec: Push((int) 20140)
0x2ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Sympathy" // @poff=166
0x2f2: Call2 0x29d

0x2f3: Pop(1)
0x2f4: Push((int) 518550)
0x2f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f6: Pop(1)
0x2f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f8: Pop(0)
0x2f9: PushEmpty(bool, object)
0x2fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fb: Call2 0xa6f

0x2fc: Pop(1)
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: Push((int) 518551)
0x2ff: Push((int) 20163)
0x300: Push((int) 19661)
0x301: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x302: Pop(3)
0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 0
0x305: PushEmpty(bool, object)
0x306: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x307: Call2 0xa7b

0x308: Pop(1)
0x309: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30a: PushEmpty(bool, object)
0x30b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Call2 0xa87

0x30d: Pop(1)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[-1] = (bool) 1
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: Push((int) 519028)
0x312: Push((int) 20149)
0x313: Push((int) 20148)
0x314: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x315: Pop(3)
0x316: Push((int) 518554)
0x317: Push((int) -1)
0x318: Push((int) 19664)
0x319: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31a: Pop(3)
0x31b: Return(); Pop(0)

0x31c: Push((int) 20149)
0x31d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Neutral" // @poff=89
0x321: Call2 0x29d

0x322: Pop(1)
0x323: Push((int) 519029)
0x324: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x325: Pop(1)
0x326: @@@ ClearReplies(); Obj=0 // @poff=116
0x327: Pop(0)
0x328: Push((int) 519030)
0x329: Push((int) 20152)
0x32a: Push((int) 20150)
0x32b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32c: Pop(3)
0x32d: Push((int) 519031)
0x32e: Push((int) -1)
0x32f: Push((int) 20151)
0x330: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x331: Pop(3)
0x332: Return(); Pop(0)

0x333: Push((int) 20152)
0x334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x336: PushEmpty(string)
0x337: Stack[-1] = "Fear" // @poff=156
0x338: Call2 0x29d

0x339: Pop(1)
0x33a: Push((int) 519032)
0x33b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x33c: Pop(1)
0x33d: @@@ ClearReplies(); Obj=0 // @poff=116
0x33e: Pop(0)
0x33f: Push((int) 519033)
0x340: Push((int) 20154)
0x341: Push((int) 20153)
0x342: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x343: Pop(3)
0x344: Push((int) 519035)
0x345: Push((int) 20154)
0x346: Push((int) 20155)
0x347: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x348: Pop(3)
0x349: Return(); Pop(0)

0x34a: Push((int) 20154)
0x34b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Neutral" // @poff=89
0x34f: Call2 0x29d

0x350: Pop(1)
0x351: Push((int) 519034)
0x352: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x353: Pop(1)
0x354: @@@ ClearReplies(); Obj=0 // @poff=116
0x355: Pop(0)
0x356: Push((int) 519036)
0x357: Push((int) 20157)
0x358: Push((int) 20156)
0x359: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35a: Pop(3)
0x35b: Push((int) 519039)
0x35c: Push((int) 20157)
0x35d: Push((int) 20160)
0x35e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: Push((int) 20157)
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Confusion" // @poff=184
0x366: Call2 0x29d

0x367: Pop(1)
0x368: Push((int) 519037)
0x369: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x36a: Pop(1)
0x36b: @@@ ClearReplies(); Obj=0 // @poff=116
0x36c: Pop(0)
0x36d: Push((int) 519038)
0x36e: Push((int) -1)
0x36f: Push((int) 20158)
0x370: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x371: Pop(3)
0x372: Push((int) 519040)
0x373: Push((int) -1)
0x374: Push((int) 20162)
0x375: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: Push((int) 20163)
0x379: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Neutral" // @poff=89
0x37d: Call2 0x29d

0x37e: Pop(1)
0x37f: Push((int) 519041)
0x380: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x381: Pop(1)
0x382: @@@ ClearReplies(); Obj=0 // @poff=116
0x383: Pop(0)
0x384: Push((int) 519042)
0x385: Push((int) 20165)
0x386: Push((int) 20164)
0x387: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x388: Pop(3)
0x389: Push((int) 519059)
0x38a: Push((int) 20180)
0x38b: Push((int) 20183)
0x38c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38d: Pop(3)
0x38e: Return(); Pop(0)

0x38f: Push((int) 20165)
0x390: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x392: PushEmpty(string)
0x393: Stack[-1] = "Neutral" // @poff=89
0x394: Call2 0x29d

0x395: Pop(1)
0x396: Push((int) 519043)
0x397: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x398: Pop(1)
0x399: @@@ ClearReplies(); Obj=0 // @poff=116
0x39a: Pop(0)
0x39b: Push((int) 519044)
0x39c: Push((int) 20167)
0x39d: Push((int) 20166)
0x39e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39f: Pop(3)
0x3a0: Push((int) 519046)
0x3a1: Push((int) 20169)
0x3a2: Push((int) 20168)
0x3a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a4: Pop(3)
0x3a5: Return(); Pop(0)

0x3a6: Push((int) 20169)
0x3a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Neutral" // @poff=89
0x3ab: Call2 0x29d

0x3ac: Pop(1)
0x3ad: Push((int) 519047)
0x3ae: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3af: Pop(1)
0x3b0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b1: Pop(0)
0x3b2: Push((int) 519048)
0x3b3: Push((int) 20167)
0x3b4: Push((int) 20170)
0x3b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b6: Pop(3)
0x3b7: Return(); Pop(0)

0x3b8: Push((int) 20167)
0x3b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3bb: PushEmpty(string)
0x3bc: Stack[-1] = "Confusion" // @poff=184
0x3bd: Call2 0x29d

0x3be: Pop(1)
0x3bf: Push((int) 519045)
0x3c0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c1: Pop(1)
0x3c2: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c3: Pop(0)
0x3c4: Push((int) 519049)
0x3c5: Push((int) 20177)
0x3c6: Push((int) 20172)
0x3c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c8: Pop(3)
0x3c9: Push((int) 519050)
0x3ca: Push((int) 20174)
0x3cb: Push((int) 20173)
0x3cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: Push((int) 20174)
0x3d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d2: PushEmpty(string)
0x3d3: Stack[-1] = "Neutral" // @poff=89
0x3d4: Call2 0x29d

0x3d5: Pop(1)
0x3d6: Push((int) 519051)
0x3d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d8: Pop(1)
0x3d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3da: Pop(0)
0x3db: Push((int) 519052)
0x3dc: Push((int) -1)
0x3dd: Push((int) 20175)
0x3de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3df: Pop(3)
0x3e0: Push((int) 519053)
0x3e1: Push((int) 20177)
0x3e2: Push((int) 20176)
0x3e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e4: Pop(3)
0x3e5: Return(); Pop(0)

0x3e6: Push((int) 20177)
0x3e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3e9: PushEmpty(string)
0x3ea: Stack[-1] = "Neutral" // @poff=89
0x3eb: Call2 0x29d

0x3ec: Pop(1)
0x3ed: Push((int) 519054)
0x3ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ef: Pop(1)
0x3f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f1: Pop(0)
0x3f2: Push((int) 519055)
0x3f3: Push((int) 19662)
0x3f4: Push((int) 20178)
0x3f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f6: Pop(3)
0x3f7: Push((int) 519056)
0x3f8: Push((int) 20180)
0x3f9: Push((int) 20179)
0x3fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 20180)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral" // @poff=89
0x402: Call2 0x29d

0x403: Pop(1)
0x404: Push((int) 519057)
0x405: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x406: Pop(1)
0x407: @@@ ClearReplies(); Obj=0 // @poff=116
0x408: Pop(0)
0x409: Push((int) 519058)
0x40a: Push((int) -1)
0x40b: Push((int) 20181)
0x40c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40d: Pop(3)
0x40e: Return(); Pop(0)

0x40f: Push((int) 19662)
0x410: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral" // @poff=89
0x414: Call2 0x29d

0x415: Pop(1)
0x416: Push((int) 518552)
0x417: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x418: Pop(1)
0x419: @@@ ClearReplies(); Obj=0 // @poff=116
0x41a: Pop(0)
0x41b: Push((int) 518553)
0x41c: Push((int) -1)
0x41d: Push((int) 19663)
0x41e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41f: Pop(3)
0x420: Return(); Pop(0)

0x421: Push((int) 20141)
0x422: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x424: PushEmpty(string)
0x425: Stack[-1] = "Neutral" // @poff=89
0x426: Call2 0x29d

0x427: Pop(1)
0x428: Push((int) 519022)
0x429: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42a: Pop(1)
0x42b: @@@ ClearReplies(); Obj=0 // @poff=116
0x42c: Pop(0)
0x42d: Push((int) 519023)
0x42e: Push((int) 20138)
0x42f: Push((int) 20142)
0x430: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x431: Pop(3)
0x432: Return(); Pop(0)

0x433: Push((int) 20132)
0x434: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x436: PushEmpty(string)
0x437: Stack[-1] = "Confusion" // @poff=184
0x438: Call2 0x29d

0x439: Pop(1)
0x43a: Push((int) 519014)
0x43b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43c: Pop(1)
0x43d: @@@ ClearReplies(); Obj=0 // @poff=116
0x43e: Pop(0)
0x43f: Push((int) 519015)
0x440: Push((int) 20138)
0x441: Push((int) 20133)
0x442: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x443: Pop(3)
0x444: Push((int) 519016)
0x445: Push((int) 20135)
0x446: Push((int) 20134)
0x447: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x448: Pop(3)
0x449: Return(); Pop(0)

0x44a: Push((int) 20135)
0x44b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Neutral" // @poff=89
0x44f: Call2 0x29d

0x450: Pop(1)
0x451: Push((int) 519017)
0x452: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x453: Pop(1)
0x454: @@@ ClearReplies(); Obj=0 // @poff=116
0x455: Pop(0)
0x456: Push((int) 519019)
0x457: Push((int) 20138)
0x458: Push((int) 20137)
0x459: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45a: Pop(3)
0x45b: Push((int) 519018)
0x45c: Push((int) -1)
0x45d: Push((int) 20136)
0x45e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 20138)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Neutral" // @poff=89
0x466: Call2 0x29d

0x467: Pop(1)
0x468: Push((int) 519020)
0x469: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x46a: Pop(1)
0x46b: @@@ ClearReplies(); Obj=0 // @poff=116
0x46c: Pop(0)
0x46d: Push((int) 519024)
0x46e: Push((int) 20145)
0x46f: Push((int) 20144)
0x470: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x471: Pop(3)
0x472: Return(); Pop(0)

0x473: Push((int) 20145)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Neutral" // @poff=89
0x478: Call2 0x29d

0x479: Pop(1)
0x47a: Push((int) 519025)
0x47b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47c: Pop(1)
0x47d: @@@ ClearReplies(); Obj=0 // @poff=116
0x47e: Pop(0)
0x47f: Push((int) 527912)
0x480: Push((int) 29261)
0x481: Push((int) 29260)
0x482: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x483: Pop(3)
0x484: Return(); Pop(0)

0x485: Push((int) 29261)
0x486: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x488: PushEmpty(string)
0x489: Stack[-1] = "Tiredness" // @poff=204
0x48a: Call2 0x29d

0x48b: Pop(1)
0x48c: Push((int) 527913)
0x48d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x48e: Pop(1)
0x48f: @@@ ClearReplies(); Obj=0 // @poff=116
0x490: Pop(0)
0x491: Push((int) 519026)
0x492: Push((int) -1)
0x493: Push((int) 20146)
0x494: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x495: Pop(3)
0x496: Push((int) 519027)
0x497: Push((int) -1)
0x498: Push((int) 20147)
0x499: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x49a: Pop(3)
0x49b: Return(); Pop(0)

0x49c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x49d: PushEmpty(bool)
0x49e: Call2 0xa0d

0x49f: Pop(0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a1: @ lshStopAnimation()
0x4a2: Pop(0)
0x4a3: GOTO 0x4a6

0x4a4: @ StopAnimation()
0x4a5: Pop(0)
0x4a6: Return(); Pop(0)

0x4a7: GOTO 0x2b4

0x4a8: Return(); Pop(0)

0x4a9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4aa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4ab: PushEmpty(bool, object)
0x4ac: PushEmpty(object)
0x4ad: Call2 0x9b8

0x4ae: Stack[-1] = Stack[-2]
0x4af: Pop(1)
0x4b0: Call2 0x90b

0x4b1: Pop(2)
0x4b2: PushEmpty(bool, object, float)
0x4b3: Stack[-12] = Stack[-2]
0x4b4: Stack[-1] = (float) 70.0
0x4b5: Call2 0x8b6

0x4b6: Pop(2)
0x4b7: Pop(1); Push((bool) Stack[-1] == 0)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-10] = (int) -2
0x4ba: Return(); Pop(8)

0x4bb: @ CreateDialog(Stack[-4])
0x4bc: Pop(0)
0x4bd: PushEmpty(int)
0x4be: Call2 0xa07

0x4bf: Pop(0)
0x4c0: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x4c1: Pop(1)
0x4c2: PushEmpty(int)
0x4c3: Call2 0xa05

0x4c4: Pop(0)
0x4c5: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x4c6: Pop(1)
0x4c7: PushEmpty(string)
0x4c8: Call2 0xa09

0x4c9: Pop(0)
0x4ca: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x4cb: Pop(1)
0x4cc: PushEmpty(string)
0x4cd: Call2 0xa0b

0x4ce: Pop(0)
0x4cf: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x4d0: Pop(1)
0x4d1: PushEmpty(int)
0x4d2: Call2 0xb02

0x4d3: Pop(0)
0x4d4: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x4d5: Pop(1)
0x4d6: Stack[-2] = (int) -1
0x4d7: @ IsOverrideActive(Stack[-3])
0x4d8: Pop(0)
0x4d9: Push(Stack[-3])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-10] = (int) -2
0x4dc: Return(); Pop(8)

0x4dd: @ DoDialog(Stack[-4])
0x4de: Pop(0)
0x4df: PushEmpty(object, object)
0x4e0: Stack[-11] = Stack[-2]
0x4e1: Stack[-6] = Stack[-1]
0x4e2: Push(-2, 4); TaskCall(8)
0x4e3: Call2 0x4fa

0x4e4: Pop(-2, 4); TaskReturn
0x4e5: Pop(2)
0x4e6: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4e7: Pop(0)
0x4e8: Pop(0); Push((bool) Stack[-1] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ea: @ sync()
0x4eb: Pop(0)
0x4ec: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4ed: Pop(0)
0x4ee: GOTO 0x4e8

0x4ef: PushEmpty(object)
0x4f0: Stack[-10] = Stack[-1]
0x4f1: Call2 0x8fa

0x4f2: Pop(1)
0x4f3: @ StopDialog(Stack[-4])
0x4f4: Pop(0)
0x4f5: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4f6: Pop(0)
0x4f7: Stack[-2] = Stack[-10]
0x4f8: Return(); Pop(8)

0x4f9: Stack[-4] = 0
0x4fa: PushEmpty()
0x4fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4fc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4fd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4fe: Push((int) 1)
0x4ff: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x500: PushEmpty(string)
0x501: Stack[-1] = "Neutral" // @poff=89
0x502: Call2 0x542

0x503: Pop(1)
0x504: Push((int) 521486)
0x505: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x506: Pop(1)
0x507: @@@ ClearReplies(); Obj=0 // @poff=116
0x508: Pop(0)
0x509: PushEmpty(bool)
0x50a: Stack[-1] = (bool) 0
0x50b: PushEmpty(bool, object)
0x50c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50d: Call2 0xa59

0x50e: Pop(1)
0x50f: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x512: Call2 0xa4d

0x513: Pop(1)
0x514: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x515: Stack[-1] = (bool) 1
0x516: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x517: Push((int) 521487)
0x518: Push((int) 22653)
0x519: Push((int) 22652)
0x51a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51b: Pop(3)
0x51c: Push((int) 521490)
0x51d: Push((int) -1)
0x51e: Push((int) 22655)
0x51f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x520: Pop(3)
0x521: GOTO 0x524

0x522: Return(); Pop(0)

0x523: GOTO 0x4fe

0x524: PushEmpty(bool)
0x525: Call2 0xa0d

0x526: Pop(0)
0x527: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x528: @ lshWaitForAnimEnd()
0x529: Pop(0)
0x52a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x52b: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52c: GOTO 0x532

0x52d: PushEmpty(string)
0x52e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x52f: Call2 0x995

0x530: Pop(1)
0x531: GOTO 0x528

0x532: GOTO 0x541

0x533: Push("all") // @poff=138
0x534: Push("idle") // @poff=146
0x535: @ PlayAnimation(Stack[-2], Stack[-1])
0x536: Pop(2)
0x537: @ WaitForAnimEnd()
0x538: Pop(0)
0x539: Push( Stack[3 + Tasks[-1].StackPointer] )
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: GOTO 0x541

0x53c: Push("all") // @poff=138
0x53d: Push("idle") // @poff=146
0x53e: @ PlayAnimation(Stack[-2], Stack[-1])
0x53f: Pop(2)
0x540: GOTO 0x537

0x541: Return(); Pop(0)

0x542: PushEmpty()
0x543: PushEmpty(bool)
0x544: Call2 0xa0d

0x545: Pop(0)
0x546: Pop(1); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x548: Return(); Pop(0)

0x549: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: Return(); Pop(0)

0x54c: PushEmpty(string, bool)
0x54d: Stack[-3] = Stack[-2]
0x54e: Push("") // @poff=102
0x54f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x551: Stack[-1] = (bool) 0
0x552: GOTO 0x554

0x553: Stack[-1] = (bool) 1
0x554: Call2 0x99c

0x555: Pop(2)
0x556: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x557: Return(); Pop(0)

0x558: PushEmpty()
0x559: Push((int) 1)
0x55a: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x55b: PushEmpty()
0x55c: Call2 0x9b1

0x55d: Pop(0)
0x55e: Push((int) 22652)
0x55f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x561: PushEmpty(object, object)
0x562: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x563: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x564: Call2 0xa37

0x565: Pop(2)
0x566: Push((int) 22651)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral" // @poff=89
0x56b: Call2 0x542

0x56c: Pop(1)
0x56d: Push((int) 521486)
0x56e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56f: Pop(1)
0x570: @@@ ClearReplies(); Obj=0 // @poff=116
0x571: Pop(0)
0x572: PushEmpty(bool)
0x573: Stack[-1] = (bool) 0
0x574: PushEmpty(bool, object)
0x575: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x576: Call2 0xa59

0x577: Pop(1)
0x578: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x579: PushEmpty(bool, object)
0x57a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57b: Call2 0xa4d

0x57c: Pop(1)
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Stack[-1] = (bool) 1
0x57f: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x580: Push((int) 521487)
0x581: Push((int) 22653)
0x582: Push((int) 22652)
0x583: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x584: Pop(3)
0x585: Push((int) 521490)
0x586: Push((int) -1)
0x587: Push((int) 22655)
0x588: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x589: Pop(3)
0x58a: Return(); Pop(0)

0x58b: Push((int) 22653)
0x58c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x58e: PushEmpty(string)
0x58f: Stack[-1] = "Neutral" // @poff=89
0x590: Call2 0x542

0x591: Pop(1)
0x592: Push((int) 521488)
0x593: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x594: Pop(1)
0x595: @@@ ClearReplies(); Obj=0 // @poff=116
0x596: Pop(0)
0x597: Push((int) 521489)
0x598: Push((int) 25167)
0x599: Push((int) 22654)
0x59a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x59b: Pop(3)
0x59c: Push((int) 523891)
0x59d: Push((int) 25171)
0x59e: Push((int) 25170)
0x59f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a0: Pop(3)
0x5a1: Return(); Pop(0)

0x5a2: Push((int) 25171)
0x5a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5a5: PushEmpty(string)
0x5a6: Stack[-1] = "Neutral" // @poff=89
0x5a7: Call2 0x542

0x5a8: Pop(1)
0x5a9: Push((int) 523892)
0x5aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ab: Pop(1)
0x5ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ad: Pop(0)
0x5ae: Push((int) 523893)
0x5af: Push((int) 25173)
0x5b0: Push((int) 25172)
0x5b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b2: Pop(3)
0x5b3: Return(); Pop(0)

0x5b4: Push((int) 25167)
0x5b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5b7: PushEmpty(string)
0x5b8: Stack[-1] = "Neutral" // @poff=89
0x5b9: Call2 0x542

0x5ba: Pop(1)
0x5bb: Push((int) 523888)
0x5bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5bd: Pop(1)
0x5be: @@@ ClearReplies(); Obj=0 // @poff=116
0x5bf: Pop(0)
0x5c0: Push((int) 523889)
0x5c1: Push((int) 25173)
0x5c2: Push((int) 25168)
0x5c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c4: Pop(3)
0x5c5: Push((int) 523890)
0x5c6: Push((int) -1)
0x5c7: Push((int) 25169)
0x5c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c9: Pop(3)
0x5ca: Return(); Pop(0)

0x5cb: Push((int) 25173)
0x5cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5ce: PushEmpty(string)
0x5cf: Stack[-1] = "Neutral" // @poff=89
0x5d0: Call2 0x542

0x5d1: Pop(1)
0x5d2: Push((int) 523894)
0x5d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d4: Pop(1)
0x5d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d6: Pop(0)
0x5d7: Push((int) 523895)
0x5d8: Push((int) 25176)
0x5d9: Push((int) 25175)
0x5da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5db: Pop(3)
0x5dc: Push((int) 523898)
0x5dd: Push((int) -1)
0x5de: Push((int) 25178)
0x5df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e0: Pop(3)
0x5e1: Return(); Pop(0)

0x5e2: Push((int) 25176)
0x5e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5e5: PushEmpty(string)
0x5e6: Stack[-1] = "Neutral" // @poff=89
0x5e7: Call2 0x542

0x5e8: Pop(1)
0x5e9: Push((int) 523896)
0x5ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5eb: Pop(1)
0x5ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ed: Pop(0)
0x5ee: Push((int) 523897)
0x5ef: Push((int) -1)
0x5f0: Push((int) 25177)
0x5f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f2: Pop(3)
0x5f3: Return(); Pop(0)

0x5f4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5f5: PushEmpty(bool)
0x5f6: Call2 0xa0d

0x5f7: Pop(0)
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f9: @ lshStopAnimation()
0x5fa: Pop(0)
0x5fb: GOTO 0x5fe

0x5fc: @ StopAnimation()
0x5fd: Pop(0)
0x5fe: Return(); Pop(0)

0x5ff: GOTO 0x559

0x600: Return(); Pop(0)

0x601: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x602: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x603: PushEmpty(bool, object)
0x604: PushEmpty(object)
0x605: Call2 0x9b8

0x606: Stack[-1] = Stack[-2]
0x607: Pop(1)
0x608: Call2 0x90b

0x609: Pop(2)
0x60a: PushEmpty(bool, object, float)
0x60b: Stack[-12] = Stack[-2]
0x60c: Stack[-1] = (float) 70.0
0x60d: Call2 0x8b6

0x60e: Pop(2)
0x60f: Pop(1); Push((bool) Stack[-1] == 0)
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-10] = (int) -2
0x612: Return(); Pop(8)

0x613: @ CreateDialog(Stack[-4])
0x614: Pop(0)
0x615: PushEmpty(int)
0x616: Call2 0xa07

0x617: Pop(0)
0x618: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x619: Pop(1)
0x61a: PushEmpty(int)
0x61b: Call2 0xa05

0x61c: Pop(0)
0x61d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x61e: Pop(1)
0x61f: PushEmpty(string)
0x620: Call2 0xa09

0x621: Pop(0)
0x622: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x623: Pop(1)
0x624: PushEmpty(string)
0x625: Call2 0xa0b

0x626: Pop(0)
0x627: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x628: Pop(1)
0x629: PushEmpty(int)
0x62a: Call2 0xb02

0x62b: Pop(0)
0x62c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x62d: Pop(1)
0x62e: Stack[-2] = (int) -1
0x62f: @ IsOverrideActive(Stack[-3])
0x630: Pop(0)
0x631: Push(Stack[-3])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-10] = (int) -2
0x634: Return(); Pop(8)

0x635: @ DoDialog(Stack[-4])
0x636: Pop(0)
0x637: PushEmpty(object, object)
0x638: Stack[-11] = Stack[-2]
0x639: Stack[-6] = Stack[-1]
0x63a: Push(-2, 4); TaskCall(10)
0x63b: Call2 0x652

0x63c: Pop(-2, 4); TaskReturn
0x63d: Pop(2)
0x63e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x63f: Pop(0)
0x640: Pop(0); Push((bool) Stack[-1] == 0)
0x641: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x642: @ sync()
0x643: Pop(0)
0x644: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x645: Pop(0)
0x646: GOTO 0x640

0x647: PushEmpty(object)
0x648: Stack[-10] = Stack[-1]
0x649: Call2 0x8fa

0x64a: Pop(1)
0x64b: @ StopDialog(Stack[-4])
0x64c: Pop(0)
0x64d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x64e: Pop(0)
0x64f: Stack[-2] = Stack[-10]
0x650: Return(); Pop(8)

0x651: Stack[-4] = 0
0x652: PushEmpty()
0x653: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x654: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x655: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x656: Push((int) 1)
0x657: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral" // @poff=89
0x65a: Call2 0x687

0x65b: Pop(1)
0x65c: Push((int) 522629)
0x65d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65e: Pop(1)
0x65f: @@@ ClearReplies(); Obj=0 // @poff=116
0x660: Pop(0)
0x661: Push((int) 522630)
0x662: Push((int) -1)
0x663: Push((int) 23817)
0x664: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x665: Pop(3)
0x666: GOTO 0x669

0x667: Return(); Pop(0)

0x668: GOTO 0x656

0x669: PushEmpty(bool)
0x66a: Call2 0xa0d

0x66b: Pop(0)
0x66c: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x66d: @ lshWaitForAnimEnd()
0x66e: Pop(0)
0x66f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: GOTO 0x677

0x672: PushEmpty(string)
0x673: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x674: Call2 0x995

0x675: Pop(1)
0x676: GOTO 0x66d

0x677: GOTO 0x686

0x678: Push("all") // @poff=138
0x679: Push("idle") // @poff=146
0x67a: @ PlayAnimation(Stack[-2], Stack[-1])
0x67b: Pop(2)
0x67c: @ WaitForAnimEnd()
0x67d: Pop(0)
0x67e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67f: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x680: GOTO 0x686

0x681: Push("all") // @poff=138
0x682: Push("idle") // @poff=146
0x683: @ PlayAnimation(Stack[-2], Stack[-1])
0x684: Pop(2)
0x685: GOTO 0x67c

0x686: Return(); Pop(0)

0x687: PushEmpty()
0x688: PushEmpty(bool)
0x689: Call2 0xa0d

0x68a: Pop(0)
0x68b: Pop(1); Push((bool) Stack[-1] == 0)
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: Return(); Pop(0)

0x68e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x68f: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x690: Return(); Pop(0)

0x691: PushEmpty(string, bool)
0x692: Stack[-3] = Stack[-2]
0x693: Push("") // @poff=102
0x694: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-1] = (bool) 0
0x697: GOTO 0x699

0x698: Stack[-1] = (bool) 1
0x699: Call2 0x99c

0x69a: Pop(2)
0x69b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x69c: Return(); Pop(0)

0x69d: PushEmpty()
0x69e: Push((int) 1)
0x69f: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6a0: PushEmpty()
0x6a1: Call2 0x9b1

0x6a2: Pop(0)
0x6a3: Push((int) 23816)
0x6a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a6: PushEmpty(string)
0x6a7: Stack[-1] = "Neutral" // @poff=89
0x6a8: Call2 0x687

0x6a9: Pop(1)
0x6aa: Push((int) 522629)
0x6ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6ac: Pop(1)
0x6ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x6ae: Pop(0)
0x6af: Push((int) 522630)
0x6b0: Push((int) -1)
0x6b1: Push((int) 23817)
0x6b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b3: Pop(3)
0x6b4: Return(); Pop(0)

0x6b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6b6: PushEmpty(bool)
0x6b7: Call2 0xa0d

0x6b8: Pop(0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6ba: @ lshStopAnimation()
0x6bb: Pop(0)
0x6bc: GOTO 0x6bf

0x6bd: @ StopAnimation()
0x6be: Pop(0)
0x6bf: Return(); Pop(0)

0x6c0: GOTO 0x69e

0x6c1: Return(); Pop(0)

0x6c2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c4: PushEmpty(bool, object)
0x6c5: PushEmpty(object)
0x6c6: Call2 0x9b8

0x6c7: Stack[-1] = Stack[-2]
0x6c8: Pop(1)
0x6c9: Call2 0x90b

0x6ca: Pop(2)
0x6cb: PushEmpty(bool, object, float)
0x6cc: Stack[-12] = Stack[-2]
0x6cd: Stack[-1] = (float) 70.0
0x6ce: Call2 0x8b6

0x6cf: Pop(2)
0x6d0: Pop(1); Push((bool) Stack[-1] == 0)
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d2: Stack[-10] = (int) -2
0x6d3: Return(); Pop(8)

0x6d4: @ CreateDialog(Stack[-4])
0x6d5: Pop(0)
0x6d6: PushEmpty(int)
0x6d7: Call2 0xa07

0x6d8: Pop(0)
0x6d9: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x6da: Pop(1)
0x6db: PushEmpty(int)
0x6dc: Call2 0xa05

0x6dd: Pop(0)
0x6de: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x6df: Pop(1)
0x6e0: PushEmpty(string)
0x6e1: Call2 0xa09

0x6e2: Pop(0)
0x6e3: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x6e4: Pop(1)
0x6e5: PushEmpty(string)
0x6e6: Call2 0xa0b

0x6e7: Pop(0)
0x6e8: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x6e9: Pop(1)
0x6ea: PushEmpty(int)
0x6eb: Call2 0xb02

0x6ec: Pop(0)
0x6ed: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x6ee: Pop(1)
0x6ef: Stack[-2] = (int) -1
0x6f0: @ IsOverrideActive(Stack[-3])
0x6f1: Pop(0)
0x6f2: Push(Stack[-3])
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f4: Stack[-10] = (int) -2
0x6f5: Return(); Pop(8)

0x6f6: @ DoDialog(Stack[-4])
0x6f7: Pop(0)
0x6f8: PushEmpty(object, object)
0x6f9: Stack[-11] = Stack[-2]
0x6fa: Stack[-6] = Stack[-1]
0x6fb: Push(-2, 4); TaskCall(12)
0x6fc: Call2 0x713

0x6fd: Pop(-2, 4); TaskReturn
0x6fe: Pop(2)
0x6ff: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x700: Pop(0)
0x701: Pop(0); Push((bool) Stack[-1] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x703: @ sync()
0x704: Pop(0)
0x705: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x706: Pop(0)
0x707: GOTO 0x701

0x708: PushEmpty(object)
0x709: Stack[-10] = Stack[-1]
0x70a: Call2 0x8fa

0x70b: Pop(1)
0x70c: @ StopDialog(Stack[-4])
0x70d: Pop(0)
0x70e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x70f: Pop(0)
0x710: Stack[-2] = Stack[-10]
0x711: Return(); Pop(8)

0x712: Stack[-4] = 0
0x713: PushEmpty()
0x714: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x715: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x716: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x717: Push((int) 1)
0x718: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x719: PushEmpty(string)
0x71a: Stack[-1] = "Neutral" // @poff=89
0x71b: Call2 0x74d

0x71c: Pop(1)
0x71d: Push((int) 540551)
0x71e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x71f: Pop(1)
0x720: @@@ ClearReplies(); Obj=0 // @poff=116
0x721: Pop(0)
0x722: Push((int) 540552)
0x723: Push((int) -1)
0x724: Push((int) 42561)
0x725: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x726: Pop(3)
0x727: Push((int) 540795)
0x728: Push((int) -1)
0x729: Push((int) 42844)
0x72a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72b: Pop(3)
0x72c: GOTO 0x72f

0x72d: Return(); Pop(0)

0x72e: GOTO 0x717

0x72f: PushEmpty(bool)
0x730: Call2 0xa0d

0x731: Pop(0)
0x732: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x733: @ lshWaitForAnimEnd()
0x734: Pop(0)
0x735: Push( Stack[3 + Tasks[-1].StackPointer] )
0x736: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x737: GOTO 0x73d

0x738: PushEmpty(string)
0x739: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73a: Call2 0x995

0x73b: Pop(1)
0x73c: GOTO 0x733

0x73d: GOTO 0x74c

0x73e: Push("all") // @poff=138
0x73f: Push("idle") // @poff=146
0x740: @ PlayAnimation(Stack[-2], Stack[-1])
0x741: Pop(2)
0x742: @ WaitForAnimEnd()
0x743: Pop(0)
0x744: Push( Stack[3 + Tasks[-1].StackPointer] )
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: GOTO 0x74c

0x747: Push("all") // @poff=138
0x748: Push("idle") // @poff=146
0x749: @ PlayAnimation(Stack[-2], Stack[-1])
0x74a: Pop(2)
0x74b: GOTO 0x742

0x74c: Return(); Pop(0)

0x74d: PushEmpty()
0x74e: PushEmpty(bool)
0x74f: Call2 0xa0d

0x750: Pop(0)
0x751: Pop(1); Push((bool) Stack[-1] == 0)
0x752: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x753: Return(); Pop(0)

0x754: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x755: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x756: Return(); Pop(0)

0x757: PushEmpty(string, bool)
0x758: Stack[-3] = Stack[-2]
0x759: Push("") // @poff=102
0x75a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75c: Stack[-1] = (bool) 0
0x75d: GOTO 0x75f

0x75e: Stack[-1] = (bool) 1
0x75f: Call2 0x99c

0x760: Pop(2)
0x761: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x762: Return(); Pop(0)

0x763: PushEmpty()
0x764: Push((int) 1)
0x765: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x766: PushEmpty()
0x767: Call2 0x9b1

0x768: Pop(0)
0x769: Push((int) 42560)
0x76a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x76c: PushEmpty(string)
0x76d: Stack[-1] = "Neutral" // @poff=89
0x76e: Call2 0x74d

0x76f: Pop(1)
0x770: Push((int) 540551)
0x771: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x772: Pop(1)
0x773: @@@ ClearReplies(); Obj=0 // @poff=116
0x774: Pop(0)
0x775: Push((int) 540552)
0x776: Push((int) -1)
0x777: Push((int) 42561)
0x778: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x779: Pop(3)
0x77a: Push((int) 540795)
0x77b: Push((int) -1)
0x77c: Push((int) 42844)
0x77d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77e: Pop(3)
0x77f: Return(); Pop(0)

0x780: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x781: PushEmpty(bool)
0x782: Call2 0xa0d

0x783: Pop(0)
0x784: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x785: @ lshStopAnimation()
0x786: Pop(0)
0x787: GOTO 0x78a

0x788: @ StopAnimation()
0x789: Pop(0)
0x78a: Return(); Pop(0)

0x78b: GOTO 0x764

0x78c: Return(); Pop(0)

0x78d: Push(GlobalVars[1])
0x78e: Stack[-1] = (bool) 0
0x78f: GlobalVars[1] = Stack[-1]; Pop(1)
0x790: PushEmpty()
0x791: Call2 0x794

0x792: Pop(0)
0x793: Return(); Pop(0)

0x794: PushEmpty(bool)
0x795: Call2 0x8b1

0x796: Pop(0)
0x797: Pop(1); Push((bool) Stack[-1] == 0)
0x798: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x799: PushEmpty()
0x79a: Push(-0, 0); TaskCall(0)
0x79b: Call2 0x0

0x79c: Pop(-0, 0); TaskReturn
0x79d: Pop(0)
0x79e: PushEmpty()
0x79f: Call2 0x814

0x7a0: Pop(0)
0x7a1: @ GetDirection(Stack[-0]T)
0x7a2: Pop(0)
0x7a3: PushEmpty()
0x7a4: Call2 0x84a

0x7a5: Pop(0)
0x7a6: GOTO 0x7a3

0x7a7: Return(); Pop(0)

0x7a8: PushEmpty(object, object)
0x7a9: Push("player") // @poff=224
0x7aa: @ FindActor(Stack[-2], Stack[-1])
0x7ab: Pop(1)
0x7ac: Pop(0); Push((bool) Stack[-1] == 0)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ae: Stack[-3] = (bool) 0
0x7af: Return(); Pop(2)

0x7b0: PushEmpty(bool, object)
0x7b1: Stack[-3] = Stack[-1]
0x7b2: Call2 0x8a8

0x7b3: Stack[-2] = Stack[-5]
0x7b4: Pop(2)
0x7b5: Return(); Pop(2)

0x7b6: Stack[-1] = 0
0x7b7: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x7b8: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x7b9: @ RotateAsync(Stack[-2], Stack[-1])
0x7ba: Pop(2)
0x7bb: Return(); Pop(0)

0x7bc: PushEmpty(object, bool, object, bool)
0x7bd: Push("player") // @poff=224
0x7be: @ FindActor(Stack[-3], Stack[-1])
0x7bf: Pop(1)
0x7c0: Pop(0); Push((bool) Stack[-2] == 0)
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7c2: Stack[-5] = (bool) 0
0x7c3: Return(); Pop(4)

0x7c4: PushEmpty(float, object)
0x7c5: Stack[-4] = Stack[-1]
0x7c6: Call2 0x896

0x7c7: Pop(1)
0x7c8: Push((float)90000.0)
0x7c9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cb: Stack[-5] = (bool) 0
0x7cc: Return(); Pop(4)

0x7cd: @ CanSee(Stack[-1], Stack[-2])
0x7ce: Pop(0)
0x7cf: Stack[-1] = Stack[-5]
0x7d0: Return(); Pop(4)

0x7d1: Stack[-2] = 0
0x7d2: PushEmpty(float, float)
0x7d3: Push((int) 8)
0x7d4: Push((int) 16)
0x7d5: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7d6: Pop(2)
0x7d7: Push((int) 10)
0x7d8: @ SetTimer(Stack[-1], Stack[-2])
0x7d9: Pop(1)
0x7da: Return(); Pop(2)

0x7db: Push((int) 10)
0x7dc: @ KillTimer(Stack[-1])
0x7dd: Pop(1)
0x7de: Return(); Pop(0)

0x7df: PushEmpty()
0x7e0: Push((int) 10)
0x7e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7e3: PushEmpty()
0x7e4: Call2 0x7db

0x7e5: Pop(0)
0x7e6: PushEmpty(bool)
0x7e7: Stack[-1] = (bool) 0
0x7e8: PushEmpty(bool)
0x7e9: Call2 0x8b1

0x7ea: Pop(0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ec: PushEmpty(bool)
0x7ed: Call2 0x7bc

0x7ee: Pop(0)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Stack[-1] = (bool) 1
0x7f1: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f2: PushEmpty(bool)
0x7f3: Call2 0x7a8

0x7f4: Pop(0)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f6: PushEmpty(bool, object)
0x7f7: PushEmpty(object)
0x7f8: Call2 0x9b8

0x7f9: Stack[-1] = Stack[-2]
0x7fa: Pop(1)
0x7fb: Call2 0x945

0x7fc: Pop(2)
0x7fd: GOTO 0x804

0x7fe: PushEmpty()
0x7ff: Call2 0x7b7

0x800: Pop(0)
0x801: PushEmpty()
0x802: Call2 0x7d2

0x803: Pop(0)
0x804: Return(); Pop(0)

0x805: PushEmpty()
0x806: Call2 0x891

0x807: Pop(0)
0x808: PushEmpty()
0x809: Call2 0x7db

0x80a: Pop(0)
0x80b: @ lshStopSpeech()
0x80c: Pop(0)
0x80d: @ lshStopAnimation()
0x80e: Pop(0)
0x80f: @ StopAsync()
0x810: Pop(0)
0x811: @ Hold()
0x812: Pop(0)
0x813: Return(); Pop(0)

0x814: @ StopGroup0()
0x815: Pop(0)
0x816: PushEmpty()
0x817: Call2 0x7db

0x818: Pop(0)
0x819: PushEmpty(string)
0x81a: Stack[-1] = "Neutral" // @poff=89
0x81b: Call2 0x995

0x81c: Pop(1)
0x81d: PushEmpty()
0x81e: Call2 0x7d2

0x81f: Pop(0)
0x820: Return(); Pop(0)

0x821: PushEmpty()
0x822: Push(Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x824: PushEmpty()
0x825: Call2 0x7d2

0x826: Pop(0)
0x827: GOTO 0x82c

0x828: PushEmpty(string)
0x829: Stack[-1] = "Neutral" // @poff=89
0x82a: Call2 0x995

0x82b: Pop(1)
0x82c: Return(); Pop(0)

0x82d: PushEmpty(bool, bool)
0x82e: @ IsOverrideActive(Stack[-1])
0x82f: Pop(0)
0x830: Pop(0); Push((bool) Stack[-1] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x832: EventDisable(0)
0x833: PushEmpty()
0x834: Call2 0x891

0x835: Pop(0)
0x836: PushEmpty(bool, object)
0x837: Stack[-5] = Stack[-1]
0x838: Call2 0x8a8

0x839: Pop(2)
0x83a: EventEnable(0)
0x83b: PushEmpty(object)
0x83c: Stack[-4] = Stack[-1]
0x83d: Call2 0xb13

0x83e: Pop(1)
0x83f: PushEmpty(string)
0x840: Stack[-1] = "Neutral" // @poff=89
0x841: Call2 0x995

0x842: Pop(1)
0x843: PushEmpty()
0x844: Call2 0x7db

0x845: Pop(0)
0x846: PushEmpty()
0x847: Call2 0x7d2

0x848: Pop(0)
0x849: Return(); Pop(2)

0x84a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x84b: @ WaitForAnimEnd()
0x84c: Pop(0)
0x84d: PushEmpty(bool)
0x84e: Call2 0x8b1

0x84f: Pop(0)
0x850: Pop(1); Push((bool) Stack[-1] == 0)
0x851: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x852: Return(); Pop(12)

0x853: PushEmpty(int)
0x854: Call2 0x9f4

0x855: Stack[-1] = Stack[-7]
0x856: Pop(1)
0x857: Stack[-5] = (int) 0
0x858: PushEmpty(bool)
0x859: Stack[-1] = (bool) 0
0x85a: Push((int) 5)
0x85b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85d: PushEmpty(bool)
0x85e: Call2 0x8b1

0x85f: Pop(0)
0x860: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x861: Stack[-1] = (bool) 1
0x862: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x863: Pop(0); Push((bool) Stack[-6] == 0)
0x864: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x865: Push((int) 3)
0x866: @ Sleep(Stack[-1], Stack[-5])
0x867: Pop(1)
0x868: Pop(0); Push((bool) Stack[-4] == 0)
0x869: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x86a: GOTO 0x88c

0x86b: GOTO 0x881

0x86c: @ irand(Stack[-3], Stack[-6])
0x86d: Pop(0)
0x86e: Push((int) 5)
0x86f: @ irand(Stack[-3], Stack[-1])
0x870: Pop(1)
0x871: Push((int) 0)
0x872: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x874: Stack[-3] = (int) 0
0x875: Push("all") // @poff=138
0x876: PushEmpty(string, int)
0x877: Stack[-6] = Stack[-1]
0x878: Call2 0x9ed

0x879: Pop(1)
0x87a: @ PlayAnimation(Stack[-2], Stack[-1])
0x87b: Pop(2)
0x87c: @ WaitForAnimEnd(Stack[-1])
0x87d: Pop(0)
0x87e: Pop(0); Push((bool) Stack[-1] == 0)
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: GOTO 0x88c

0x881: PushEmpty(bool)
0x882: Call2 0x88f

0x883: Pop(0)
0x884: Pop(1); Push((bool) Stack[-1] == 0)
0x885: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x886: GOTO 0x88c

0x887: @ ResetAAS()
0x888: Pop(0)
0x889: Push((int) 1)
0x88a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x88b: GOTO 0x858

0x88c: @ ResetAAS()
0x88d: Pop(0)
0x88e: Return(); Pop(12)

0x88f: Stack[-1] = (bool) 1
0x890: Return(); Pop(0)

0x891: @ StopAnimation()
0x892: Pop(0)
0x893: @ StopGroup0()
0x894: Pop(0)
0x895: Return(); Pop(0)

0x896: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x897: @ GetPosition(Stack[-3])
0x898: Pop(0)
0x899: @@ GetPosition(Stack[-2]); Obj=7 // @poff=238
0x89a: Pop(0)
0x89b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x89c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x89d: Return(); Pop(6)

0x89e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x89f: @ GetPosition(Stack[-3])
0x8a0: Pop(0)
0x8a1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8a2: Push(CvectorIndex(Stack[-2], 0))
0x8a3: Push(CvectorIndex(Stack[-3], 2))
0x8a4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8a5: Pop(2)
0x8a6: Stack[-1] = Stack[-8]
0x8a7: Return(); Pop(6)

0x8a8: PushEmpty(cvector, cvector)
0x8a9: @@ GetPosition(Stack[-1]); Obj=3 // @poff=238
0x8aa: Pop(0)
0x8ab: PushEmpty(bool, cvector)
0x8ac: Stack[-3] = Stack[-1]
0x8ad: Call2 0x89e

0x8ae: Stack[-2] = Stack[-6]
0x8af: Pop(2)
0x8b0: Return(); Pop(2)

0x8b1: PushEmpty(bool, bool)
0x8b2: @ IsLoaded(Stack[-1])
0x8b3: Pop(0)
0x8b4: Stack[-1] = Stack[-3]
0x8b5: Return(); Pop(2)

0x8b6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8b7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=238
0x8b8: Pop(0)
0x8b9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=250
0x8ba: Pop(0)
0x8bb: Push(CvectorIndex(Stack[-8], 1))
0x8bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8bd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8be: @ GetPosition(Stack[-7])
0x8bf: Pop(0)
0x8c0: @ GetEyesHeight(Stack[-9])
0x8c1: Pop(0)
0x8c2: Push(CvectorIndex(Stack[-7], 1))
0x8c3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8c4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8c5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8c6: Push(CvectorIndex(Stack[-6], 1))
0x8c7: Stack[-1] = (int) 0
0x8c8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8c9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8ca: Pop(1); Push(Sqrt(Stack[-1]))
0x8cb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8cc: Stack[-5] = -Stack[-6]; Pop(0);
0x8cd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8ce: PushEmpty(cvector, cvector)
0x8cf: Push([0.0, 1.0, 0.0])
0x8d0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8d1: Call2 0x9be

0x8d2: Pop(1)
0x8d3: Push((int) 25)
0x8d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8d6: Push([0.0, 10.0, 0.0])
0x8d7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8d8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8d9: @ IsOverrideActive(Stack[-2])
0x8da: Pop(0)
0x8db: Push(Stack[-2])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8dd: Stack[-21] = (bool) 0
0x8de: Return(); Pop(18)

0x8df: @ StopWorld()
0x8e0: Pop(0)
0x8e1: @ CameraTransit(Stack[-3], Stack[-5])
0x8e2: Pop(0)
0x8e3: Push(CvectorIndex(Stack[-4], 0))
0x8e4: Push(CvectorIndex(Stack[-5], 2))
0x8e5: @ Rotate(Stack[-2], Stack[-1])
0x8e6: Pop(2)
0x8e7: PushEmpty(bool)
0x8e8: Call2 0xa0d

0x8e9: Pop(0)
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8eb: GOTO 0x8f4

0x8ec: Push("head") // @poff=264
0x8ed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8ee: Pop(1)
0x8ef: Push(Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f1: Push("head") // @poff=264
0x8f2: @ LookAsyncCamera(Stack[-1])
0x8f3: Pop(1)
0x8f4: @ CameraWaitForPlayFinish()
0x8f5: Pop(0)
0x8f6: @ ResumeWorld()
0x8f7: Pop(0)
0x8f8: Stack[-21] = (bool) 1
0x8f9: Return(); Pop(18)

0x8fa: PushEmpty(bool, bool)
0x8fb: @ CameraSwitchToNormal()
0x8fc: Pop(0)
0x8fd: PushEmpty(bool)
0x8fe: Call2 0xa0d

0x8ff: Pop(0)
0x900: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x901: GOTO 0x90a

0x902: Push("head") // @poff=264
0x903: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x904: Pop(1)
0x905: Push(Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x907: Push("head") // @poff=264
0x908: @ UnlookAsync(Stack[-1])
0x909: Pop(1)
0x90a: Return(); Pop(2)

0x90b: PushEmpty(int, int, int, int)
0x90c: Push("voice_common") // @poff=274
0x90d: @ GetVariable(Stack[-1], Stack[-3])
0x90e: Pop(1)
0x90f: Push(Stack[-2])
0x910: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x911: PushEmpty(bool, object)
0x912: Stack[-7] = Stack[-1]
0x913: Call2 0x945

0x914: Pop(1)
0x915: Pop(1); Push((bool) Stack[-1] == 0)
0x916: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x917: PushEmpty(bool, object)
0x918: Stack[-7] = Stack[-1]
0x919: Call2 0x96a

0x91a: Pop(1)
0x91b: Pop(1); Push((bool) Stack[-1] == 0)
0x91c: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91d: Stack[-6] = (bool) 0
0x91e: Return(); Pop(4)

0x91f: Push((int) 2)
0x920: @ irand(Stack[-2], Stack[-1])
0x921: Pop(1)
0x922: Push(Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x924: Push("voice_common") // @poff=274
0x925: Push((int) 1)
0x926: Pop(1); Push(Stack[-4] + Stack[-1]);
0x927: Push((int) 3)
0x928: Pop(2); Push(Stack[-2] % Stack[-1]);
0x929: @ SetVariable(Stack[-2], Stack[-1])
0x92a: Pop(2)
0x92b: GOTO 0x930

0x92c: Push("voice_common") // @poff=274
0x92d: Push((int) 0)
0x92e: @ SetVariable(Stack[-2], Stack[-1])
0x92f: Pop(2)
0x930: GOTO 0x943

0x931: PushEmpty(bool, object)
0x932: Stack[-7] = Stack[-1]
0x933: Call2 0x96a

0x934: Pop(1)
0x935: Pop(1); Push((bool) Stack[-1] == 0)
0x936: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x937: PushEmpty(bool, object)
0x938: Stack[-7] = Stack[-1]
0x939: Call2 0x945

0x93a: Pop(1)
0x93b: Pop(1); Push((bool) Stack[-1] == 0)
0x93c: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93d: Stack[-6] = (bool) 0
0x93e: Return(); Pop(4)

0x93f: Push("voice_common") // @poff=274
0x940: Push((int) 1)
0x941: @ SetVariable(Stack[-2], Stack[-1])
0x942: Pop(2)
0x943: Stack[-6] = (bool) 1
0x944: Return(); Pop(4)

0x945: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x946: Stack[-5] = "c" // @poff=300
0x947: Stack[-4] = (int) 0
0x948: Push((int) 1)
0x949: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x94a: Push((int) 1)
0x94b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x94c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x94d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=304
0x94e: Pop(1)
0x94f: Pop(0); Push((bool) Stack[-3] == 0)
0x950: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x951: GOTO 0x955

0x952: Push((int) 1)
0x953: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x954: GOTO 0x948

0x955: Pop(0); Push((bool) Stack[-4] == 0)
0x956: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x957: Stack[-12] = (bool) 0
0x958: Return(); Pop(10)

0x959: Stack[-2] = (int) 0
0x95a: Push((int) 1)
0x95b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x95d: @ irand(Stack[-2], Stack[-4])
0x95e: Pop(0)
0x95f: Push((int) 1)
0x960: Pop(1); Push(Stack[-3] + Stack[-1]);
0x961: Pop(1); Push(Stack[-6] + Stack[-1]);
0x962: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=316
0x963: Pop(1)
0x964: PushEmpty(bool, string)
0x965: Stack[-3] = Stack[-1]
0x966: Call2 0x9a2

0x967: Stack[-2] = Stack[-14]
0x968: Pop(2)
0x969: Return(); Pop(10)

0x96a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x96b: Push("d") // @poff=270
0x96c: PushEmpty(int)
0x96d: Call2 0x9de

0x96e: Pop(0)
0x96f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x970: Push("m") // @poff=328
0x971: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x972: Stack[-4] = (int) 0
0x973: Push((int) 1)
0x974: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x975: Push((int) 1)
0x976: Pop(1); Push(Stack[-5] + Stack[-1]);
0x977: Pop(1); Push(Stack[-6] + Stack[-1]);
0x978: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=304
0x979: Pop(1)
0x97a: Pop(0); Push((bool) Stack[-3] == 0)
0x97b: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97c: GOTO 0x980

0x97d: Push((int) 1)
0x97e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x97f: GOTO 0x973

0x980: Pop(0); Push((bool) Stack[-4] == 0)
0x981: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x982: Stack[-12] = (bool) 0
0x983: Return(); Pop(10)

0x984: Stack[-2] = (int) 0
0x985: Push((int) 1)
0x986: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x987: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x988: @ irand(Stack[-2], Stack[-4])
0x989: Pop(0)
0x98a: Push((int) 1)
0x98b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x98c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x98d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=316
0x98e: Pop(1)
0x98f: PushEmpty(bool, string)
0x990: Stack[-3] = Stack[-1]
0x991: Call2 0x9a2

0x992: Stack[-2] = Stack[-14]
0x993: Pop(2)
0x994: Return(); Pop(10)

0x995: PushEmpty(float, float, float, float)
0x996: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x997: Pop(0)
0x998: Push((bool) 0)
0x999: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x99a: Pop(1)
0x99b: Return(); Pop(4)

0x99c: PushEmpty(float, float, float, float)
0x99d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x99e: Pop(0)
0x99f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x9a0: Pop(0)
0x9a1: Return(); Pop(4)

0x9a2: PushEmpty(bool, bool)
0x9a3: PushEmpty(bool)
0x9a4: Call2 0xa0d

0x9a5: Pop(0)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9a7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9a8: Pop(0)
0x9a9: Push(Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ab: @ lshPlaySpeech(Stack[-3])
0x9ac: Pop(0)
0x9ad: Stack[-4] = (bool) 1
0x9ae: Return(); Pop(2)

0x9af: Stack[-4] = (bool) 0
0x9b0: Return(); Pop(2)

0x9b1: PushEmpty(bool)
0x9b2: Call2 0xa0d

0x9b3: Pop(0)
0x9b4: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b5: @ lshStopSpeech()
0x9b6: Pop(0)
0x9b7: Return(); Pop(0)

0x9b8: PushEmpty(object, object)
0x9b9: @ self(Stack[-1])
0x9ba: Pop(0)
0x9bb: Stack[-1] = Stack[-3]
0x9bc: Return(); Pop(2)

0x9bd: Stack[-1] = 0
0x9be: PushEmpty(float, float)
0x9bf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9c0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9c1: Push((float)9.999999974752427e-07)
0x9c2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9c4: Stack[-4] = [0.0, 0.0, 0.0]
0x9c5: Return(); Pop(2)

0x9c6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9c7: Return(); Pop(2)

0x9c8: PushEmpty(int, int)
0x9c9: @ GetVariable(Stack[-3], Stack[-1])
0x9ca: Pop(0)
0x9cb: Stack[-1] = Stack[-4]
0x9cc: Return(); Pop(2)

0x9cd: PushEmpty(object, object)
0x9ce: @ FindActor(Stack[-1], Stack[-4])
0x9cf: Pop(0)
0x9d0: Pop(0); PushNull((bool) Stack[-1] == 0)
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d2: Stack[-5] = (bool) 0
0x9d3: Return(); Pop(2)

0x9d4: @ Trigger(Stack[-1], Stack[-3])
0x9d5: Pop(0)
0x9d6: Stack[-5] = (bool) 1
0x9d7: Return(); Pop(2)

0x9d8: Stack[-1] = 0
0x9d9: PushEmpty(float, float)
0x9da: @ GetGameTime(Stack[-1])
0x9db: Pop(0)
0x9dc: Stack[-1] = Stack[-3]
0x9dd: Return(); Pop(2)

0x9de: PushEmpty(float, float)
0x9df: @ GetGameTime(Stack[-1])
0x9e0: Pop(0)
0x9e1: Push((int) 1)
0x9e2: PushEmpty(int)
0x9e3: Push((int) 24)
0x9e4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x9e5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9e6: Return(); Pop(2)

0x9e7: PushEmpty()
0x9e8: PushEmpty(int)
0x9e9: Call2 0x9de

0x9ea: Pop(0)
0x9eb: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9ec: Return(); Pop(0)

0x9ed: PushEmpty(string, string)
0x9ee: Stack[-1] = "idle" // @poff=146
0x9ef: Push(Stack[-3])
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f2; Pop(1)

0x9f1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9f2: Stack[-1] = Stack[-4]
0x9f3: Return(); Pop(2)

0x9f4: PushEmpty(int, bool, int, bool)
0x9f5: Stack[-2] = (int) 0
0x9f6: Push("all") // @poff=138
0x9f7: PushEmpty(string, int)
0x9f8: Stack[-5] = Stack[-1]
0x9f9: Call2 0x9ed

0x9fa: Pop(1)
0x9fb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9fc: Pop(2)
0x9fd: Pop(0); Push((bool) Stack[-1] == 0)
0x9fe: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9ff: GOTO 0xa03

0xa00: Push((int) 1)
0xa01: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa02: GOTO 0x9f6

0xa03: Stack[-2] = Stack[-5]
0xa04: Return(); Pop(4)

0xa05: Stack[-1] = (int) 515541
0xa06: Return(); Pop(0)

0xa07: Stack[-1] = (int) 502866
0xa08: Return(); Pop(0)

0xa09: Stack[-1] = "ui/NPC_Lara.png" // @poff=332
0xa0a: Return(); Pop(0)

0xa0b: Stack[-1] = "ui/NPC_Lara_b.png" // @poff=364
0xa0c: Return(); Pop(0)

0xa0d: Stack[-1] = (bool) 1
0xa0e: Return(); Pop(0)

0xa0f: PushEmpty(object, object)
0xa10: Push("b4q01") // @poff=400
0xa11: Push((int) 2)
0xa12: @ SetVariable(Stack[-2], Stack[-1])
0xa13: Pop(2)
0xa14: PushEmpty(object)
0xa15: Call2 0xad0

0xa16: Stack[-1] = Stack[-2]
0xa17: Pop(1)
0xa18: Push("b4q01LaraGotoRubin") // @poff=412
0xa19: Push("pt_map_warehouse_gangster") // @poff=450
0xa1a: Push((int) 1)
0xa1b: Push((int) 518593)
0xa1c: PushEmpty(float)
0xa1d: Call2 0x9d9

0xa1e: Pop(0)
0xa1f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=502
0xa20: Pop(5)
0xa21: PushEmpty()
0xa22: Call2 0xa9a

0xa23: Pop(0)
0xa24: PushEmpty(bool, string, string)
0xa25: Stack[-2] = "quest_b4_01" // @poff=510
0xa26: Stack[-1] = "place_rubin" // @poff=534
0xa27: Call2 0x9cd

0xa28: Pop(3)
0xa29: Return(); Pop(2)

0xa2a: Stack[-1] = 0
0xa2b: PushEmpty()
0xa2c: Push("b4q01LaraWasBadRep") // @poff=558
0xa2d: Push((int) 1)
0xa2e: @ SetVariable(Stack[-2], Stack[-1])
0xa2f: Pop(2)
0xa30: Return(); Pop(0)

0xa31: PushEmpty()
0xa32: Push("oob4Lara1") // @poff=596
0xa33: Push((int) 1)
0xa34: @ SetVariable(Stack[-2], Stack[-1])
0xa35: Pop(2)
0xa36: Return(); Pop(0)

0xa37: PushEmpty()
0xa38: Push("oob8Lara1") // @poff=616
0xa39: Push((int) 1)
0xa3a: @ SetVariable(Stack[-2], Stack[-1])
0xa3b: Pop(2)
0xa3c: Return(); Pop(0)

0xa3d: PushEmpty()
0xa3e: PushEmpty(object, string, float)
0xa3f: PushEmpty(object)
0xa40: Call2 0xad0

0xa41: Stack[-1] = Stack[-4]
0xa42: Pop(1)
0xa43: Stack[-2] = "pt_map_warehouse_gangster" // @poff=450
0xa44: Stack[-1] = (int) 2
0xa45: Call2 0xae1

0xa46: Pop(3)
0xa47: PushEmpty(object)
0xa48: Call2 0xad0

0xa49: Pop(0)
0xa4a: @@ ShowMap(Stack[-1]); Obj=2 // @poff=636
0xa4b: Pop(1)
0xa4c: Return(); Pop(0)

0xa4d: PushEmpty()
0xa4e: PushEmpty(int, string)
0xa4f: Stack[-1] = "b8q02" // @poff=644
0xa50: Call2 0x9c8

0xa51: Pop(1)
0xa52: Push((int) 1)
0xa53: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa54: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa55: Stack[-2] = (bool) 1
0xa56: Return(); Pop(0)

0xa57: Stack[-2] = (bool) 0
0xa58: Return(); Pop(0)

0xa59: PushEmpty()
0xa5a: PushEmpty(int, string)
0xa5b: Stack[-1] = "oob8Lara1" // @poff=616
0xa5c: Call2 0x9c8

0xa5d: Pop(1)
0xa5e: Push((int) 0)
0xa5f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa60: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa61: Stack[-2] = (bool) 1
0xa62: Return(); Pop(0)

0xa63: Stack[-2] = (bool) 0
0xa64: Return(); Pop(0)

0xa65: PushEmpty()
0xa66: PushEmpty(bool, object)
0xa67: Stack[-3] = Stack[-1]
0xa68: Call2 0xa93

0xa69: Pop(1)
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa6b: Stack[-2] = (bool) 1
0xa6c: Return(); Pop(0)

0xa6d: Stack[-2] = (bool) 0
0xa6e: Return(); Pop(0)

0xa6f: PushEmpty()
0xa70: PushEmpty(int, string)
0xa71: Stack[-1] = "b4q01" // @poff=400
0xa72: Call2 0x9c8

0xa73: Pop(1)
0xa74: Push((int) 1)
0xa75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa76: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa77: Stack[-2] = (bool) 1
0xa78: Return(); Pop(0)

0xa79: Stack[-2] = (bool) 0
0xa7a: Return(); Pop(0)

0xa7b: PushEmpty()
0xa7c: PushEmpty(int, string)
0xa7d: Stack[-1] = "b4q01LaraWasBadRep" // @poff=558
0xa7e: Call2 0x9c8

0xa7f: Pop(1)
0xa80: Push((int) 1)
0xa81: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa82: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa83: Stack[-2] = (bool) 1
0xa84: Return(); Pop(0)

0xa85: Stack[-2] = (bool) 0
0xa86: Return(); Pop(0)

0xa87: PushEmpty()
0xa88: PushEmpty(int, string)
0xa89: Stack[-1] = "oob4Lara1" // @poff=596
0xa8a: Call2 0x9c8

0xa8b: Pop(1)
0xa8c: Push((int) 0)
0xa8d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8f: Stack[-2] = (bool) 1
0xa90: Return(); Pop(0)

0xa91: Stack[-2] = (bool) 0
0xa92: Return(); Pop(0)

0xa93: PushEmpty(float, float)
0xa94: Push("reputation") // @poff=656
0xa95: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=316
0xa96: Pop(1)
0xa97: Push((float)0.699999988079071)
0xa98: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0xa99: Return(); Pop(2)

0xa9a: PushEmpty(object, object)
0xa9b: Push((int) 218)
0xa9c: Push((int) 1)
0xa9d: Push((int) 518596)
0xa9e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9f: Pop(3)
0xaa0: PushEmpty(bool, object, int)
0xaa1: Stack[-4] = Stack[-2]
0xaa2: Stack[-1] = (int) 216
0xaa3: Call2 0xab4

0xaa4: Pop(3)
0xaa5: Return(); Pop(2)

0xaa6: Stack[-1] = 0
0xaa7: PushEmpty(object, object)
0xaa8: @ GetDiaryRoot(Stack[-1])
0xaa9: Pop(0)
0xaaa: Pop(0); Push((bool) Stack[-1] == 0)
0xaab: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xaac: Push("Can't retrieve diary root") // @poff=678
0xaad: @ Trace(Stack[-1])
0xaae: Pop(1)
0xaaf: Stack[-3] = (bool) 0
0xab0: Return(); Pop(2)

0xab1: Stack[-1] = Stack[-3]
0xab2: Return(); Pop(2)

0xab3: Stack[-1] = 0
0xab4: PushEmpty(object, object, int, object, object, int)
0xab5: PushEmpty(object)
0xab6: Call2 0xaa7

0xab7: Stack[-1] = Stack[-4]
0xab8: Pop(1)
0xab9: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=730
0xaba: Pop(0)
0xabb: Pop(0); Push((bool) Stack[-2] == 0)
0xabc: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xabd: Push("Can't find diary parent with id: ") // @poff=735
0xabe: Pop(1); Push(Stack[-1] + Stack[-8]);
0xabf: @ Trace(Stack[-1])
0xac0: Pop(1)
0xac1: Stack[-9] = (bool) 0
0xac2: Return(); Pop(6)

0xac3: @@ AddChild(Stack[-8]); Obj=2 // @poff=803
0xac4: Pop(0)
0xac5: Push((int) 7)
0xac6: @ SendWorldWndMessage(Stack[-1])
0xac7: Pop(1)
0xac8: @@ GetCategory(Stack[-1]); Obj=8 // @poff=812
0xac9: Pop(0)
0xaca: @ SetDiarySection(Stack[-1])
0xacb: Pop(0)
0xacc: Stack[-9] = (bool) 0
0xacd: Return(); Pop(6)

0xace: Stack[-2] = 0
0xacf: Stack[-3] = 0
0xad0: PushEmpty(object, object, object, object)
0xad1: @ GetMainOutdoorScene(Stack[-2])
0xad2: Pop(0)
0xad3: Pop(0); PushNull((bool) Stack[-2] == 0)
0xad4: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xad5: Push("Can't find main outdoor scene") // @poff=824
0xad6: @ Trace(Stack[-1])
0xad7: Pop(1)
0xad8: Stack[-1] = 0
0xad9: Stack[-1] = Stack[-5]
0xada: Return(); Pop(4)

0xadb: @@ GetMap(Stack[-1]); Obj=2 // @poff=884
0xadc: Pop(0)
0xadd: Stack[-1] = Stack[-5]
0xade: Return(); Pop(4)

0xadf: Stack[-1] = 0
0xae0: Stack[-2] = 0
0xae1: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xae2: @ GetMainOutdoorScene(Stack[-2])
0xae3: Pop(0)
0xae4: Pop(0); PushNull((bool) Stack[-2] == 0)
0xae5: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae6: Push("Can't find main outdoor scene") // @poff=824
0xae7: @ Trace(Stack[-1])
0xae8: Pop(1)
0xae9: Return(); Pop(8)

0xaea: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=891
0xaeb: Pop(0)
0xaec: Pop(0); Push((bool) Stack[-1] == 0)
0xaed: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaee: Push("Warning: outdoor scene locator ") // @poff=902
0xaef: Pop(1); Push(Stack[-1] + Stack[-11]);
0xaf0: Push(" doesnt exist") // @poff=966
0xaf1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf2: @ Trace(Stack[-1])
0xaf3: Pop(1)
0xaf4: @@ GetMap(Stack[-11]); Obj=2 // @poff=884
0xaf5: Pop(0)
0xaf6: Pop(0); PushNull((bool) Stack[-11] == 0)
0xaf7: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf8: Push("Can't find map") // @poff=994
0xaf9: @ Trace(Stack[-1])
0xafa: Pop(1)
0xafb: Return(); Pop(8)

0xafc: Push(CvectorIndex(Stack[-4], 0))
0xafd: Push(CvectorIndex(Stack[-5], 2))
0xafe: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=1024
0xaff: Pop(2)
0xb00: Return(); Pop(8)

0xb01: Stack[-2] = 0
0xb02: PushEmpty(int, int)
0xb03: Push("branch") // @poff=1037
0xb04: @ GetVariable(Stack[-1], Stack[-2])
0xb05: Pop(1)
0xb06: Push((int) 0)
0xb07: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb08: IF (Stack[-1] == 0) GOTO 0xb0c; Pop(1)

0xb09: Stack[-3] = (int) 1
0xb0a: Return(); Pop(2)

0xb0b: GOTO 0xb11

0xb0c: Push((int) 1)
0xb0d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-3] = (int) 2
0xb10: Return(); Pop(2)

0xb11: Stack[-3] = (int) 3
0xb12: Return(); Pop(2)

0xb13: PushEmpty()
0xb14: Push(GlobalVars[1])
0xb15: Pop(1); Push((bool) Stack[-1] == 0)
0xb16: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb17: PushEmpty(int, object)
0xb18: Stack[-3] = Stack[-1]
0xb19: Push(-2, 1); TaskCall(3)
0xb1a: Call2 0x110

0xb1b: Pop(-2, 1); TaskReturn
0xb1c: Pop(2)
0xb1d: Push(GlobalVars[1])
0xb1e: Stack[-1] = (bool) 1
0xb1f: GlobalVars[1] = Stack[-1]; Pop(1)
0xb20: PushEmpty(bool, int)
0xb21: Stack[-1] = (int) 4
0xb22: Call2 0x9e7

0xb23: Pop(1)
0xb24: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb25: PushEmpty(int, object)
0xb26: Stack[-3] = Stack[-1]
0xb27: Push(-2, 1); TaskCall(5)
0xb28: Call2 0x1db

0xb29: Pop(-2, 1); TaskReturn
0xb2a: Pop(2)
0xb2b: Return(); Pop(0)

0xb2c: PushEmpty(bool, int)
0xb2d: Stack[-1] = (int) 8
0xb2e: Call2 0x9e7

0xb2f: Pop(1)
0xb30: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb31: PushEmpty(int, object)
0xb32: Stack[-3] = Stack[-1]
0xb33: Push(-2, 1); TaskCall(7)
0xb34: Call2 0x4a9

0xb35: Pop(-2, 1); TaskReturn
0xb36: Pop(2)
0xb37: Return(); Pop(0)

0xb38: PushEmpty(bool, int)
0xb39: Stack[-1] = (int) 10
0xb3a: Call2 0x9e7

0xb3b: Pop(1)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb3d: PushEmpty(int, object)
0xb3e: Stack[-3] = Stack[-1]
0xb3f: Push(-2, 1); TaskCall(9)
0xb40: Call2 0x601

0xb41: Pop(-2, 1); TaskReturn
0xb42: Pop(2)
0xb43: Return(); Pop(0)

0xb44: PushEmpty(bool)
0xb45: Stack[-1] = (bool) 0
0xb46: PushEmpty(bool, int)
0xb47: Stack[-1] = (int) 12
0xb48: Call2 0x9e7

0xb49: Pop(1)
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb4b: Push(GlobalVars[2])
0xb4c: Pop(1); Push((bool) Stack[-1] == 0)
0xb4d: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb4e: Stack[-1] = (bool) 1
0xb4f: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb50: PushEmpty(int, object)
0xb51: Stack[-3] = Stack[-1]
0xb52: Push(-2, 1); TaskCall(1)
0xb53: Call2 0xd

0xb54: Pop(-2, 1); TaskReturn
0xb55: Pop(2)
0xb56: Push(GlobalVars[2])
0xb57: Stack[-1] = (bool) 1
0xb58: GlobalVars[2] = Stack[-1]; Pop(1)
0xb59: Return(); Pop(0)

0xb5a: PushEmpty(int, object)
0xb5b: Stack[-3] = Stack[-1]
0xb5c: Push(-2, 1); TaskCall(11)
0xb5d: Call2 0x6c2

0xb5e: Pop(-2, 1); TaskReturn
0xb5f: Pop(2)
0xb60: Return(); Pop(0)

