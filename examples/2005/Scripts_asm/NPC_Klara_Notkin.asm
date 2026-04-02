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
	W:k1q03
	W:k4q01
	W:k10q01KnowAboutRubin
	W:k10q01NotkinGotoRubin
	W:pt_map_rubin
	A:AddMark
	W:playsound
	W:giveitem
	W:Gun is given
	W:Gun
	A:ShowMap
	W:k1q01DobermanDead
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
	W:ui/NPC_Notkin.png
	W:ui/NPC_Notkin_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d65006b00310071003000330000006b00340071003000310000006b00310030007100300031004b006e006f007700410062006f007500740052007500620069006e0000006b00310030007100300031004e006f0074006b0069006e0047006f0074006f0052007500620069006e000000700074005f006d00610070005f0072007500620069006e0000004164644d61726b0070006c006100790073006f0075006e006400000067006900760065006900740065006d000000470075006e00200069007300200067006900760065006e000000470075006e00000053686f774d6170006b00310071003000310044006f006200650072006d0061006e0044006500610064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f004e006f0074006b0069006e002e0070006e0067000000750069002f004e00500043005f004e006f0074006b0069006e005f0062002e0070006e0067000000
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
	TriggerWorld (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x749
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x29b Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x36b Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x49d Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x621 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x71f Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x79b Vars = (int)
		EVENT_6 Op = 0x7c1 Vars = ()
		EVENT_5 Op = 0x7d0 Vars = ()
		EVENT_45 Op = 0x7dd Vars = (bool)
		EVENT_0 Op = 0x7e9 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x86d

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
0x11: Call2 0x974

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x8c7

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x872

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xae2

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xae0

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xae4

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xae6

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xacf

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
0x55: Call2 0x8b6

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
0x68: Push((int) 524791)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0xa36

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 524792)
0x73: Push((int) 28167)
0x74: Push((int) 26107)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 524793)
0x78: Push((int) -1)
0x79: Push((int) 26108)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0xae8

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x951

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
0x9f: Call2 0xae8

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
0xaf: Call2 0x958

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x96d

0xb8: Pop(0)
0xb9: Push((int) 26110)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x9e1

0xc0: Pop(2)
0xc1: Push((int) 28176)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x9e1

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0xa0f

0xcd: Pop(2)
0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0xa09

0xd2: Pop(2)
0xd3: Push((int) 40900)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x9e1

0xda: Pop(2)
0xdb: Push((int) 40901)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x9e1

0xe2: Pop(2)
0xe3: Push((int) 40902)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x9e1

0xea: Pop(2)
0xeb: Push((int) 26106)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral" // @poff=89
0xf0: Call2 0x9d

0xf1: Pop(1)
0xf2: Push((int) 524791)
0xf3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf4: Pop(1)
0xf5: @@@ ClearReplies(); Obj=0 // @poff=116
0xf6: Pop(0)
0xf7: PushEmpty(bool, object)
0xf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Call2 0xa36

0xfa: Pop(1)
0xfb: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfc: Push((int) 524792)
0xfd: Push((int) 28167)
0xfe: Push((int) 26107)
0xff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x100: Pop(3)
0x101: Push((int) 524793)
0x102: Push((int) -1)
0x103: Push((int) 26108)
0x104: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 28167)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral" // @poff=89
0x10c: Call2 0x9d

0x10d: Pop(1)
0x10e: Push((int) 526880)
0x10f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x110: Pop(1)
0x111: @@@ ClearReplies(); Obj=0 // @poff=116
0x112: Pop(0)
0x113: Push((int) 526881)
0x114: Push((int) 28169)
0x115: Push((int) 28168)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Push((int) 538933)
0x119: Push((int) 28169)
0x11a: Push((int) 40889)
0x11b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 28169)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral" // @poff=89
0x123: Call2 0x9d

0x124: Pop(1)
0x125: Push((int) 526882)
0x126: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x127: Pop(1)
0x128: @@@ ClearReplies(); Obj=0 // @poff=116
0x129: Pop(0)
0x12a: Push((int) 538926)
0x12b: Push((int) 40882)
0x12c: Push((int) 40881)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Push((int) 538934)
0x130: Push((int) 40882)
0x131: Push((int) 40891)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 40882)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0x9d

0x13b: Pop(1)
0x13c: Push((int) 538927)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 526883)
0x142: Push((int) 26109)
0x143: Push((int) 28170)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0xa2a

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 538928)
0x14c: Push((int) 40884)
0x14d: Push((int) 40883)
0x14e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 40884)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral" // @poff=89
0x156: Call2 0x9d

0x157: Pop(1)
0x158: Push((int) 538929)
0x159: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15a: Pop(1)
0x15b: @@@ ClearReplies(); Obj=0 // @poff=116
0x15c: Pop(0)
0x15d: Push((int) 538930)
0x15e: Push((int) 40886)
0x15f: Push((int) 40885)
0x160: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x161: Pop(3)
0x162: Push((int) 538932)
0x163: Push((int) 40886)
0x164: Push((int) 40887)
0x165: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 40886)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Neutral" // @poff=89
0x16d: Call2 0x9d

0x16e: Pop(1)
0x16f: Push((int) 538931)
0x170: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x171: Pop(1)
0x172: @@@ ClearReplies(); Obj=0 // @poff=116
0x173: Pop(0)
0x174: Push((int) 538935)
0x175: Push((int) 40897)
0x176: Push((int) 40893)
0x177: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x178: Pop(3)
0x179: Push((int) 538937)
0x17a: Push((int) 40897)
0x17b: Push((int) 40895)
0x17c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Push((int) 40897)
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral" // @poff=89
0x184: Call2 0x9d

0x185: Pop(1)
0x186: Push((int) 538939)
0x187: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x188: Pop(1)
0x189: @@@ ClearReplies(); Obj=0 // @poff=116
0x18a: Pop(0)
0x18b: Push((int) 538940)
0x18c: Push((int) -1)
0x18d: Push((int) 40900)
0x18e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18f: Pop(3)
0x190: Push((int) 538941)
0x191: Push((int) -1)
0x192: Push((int) 40901)
0x193: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x194: Pop(3)
0x195: Push((int) 538942)
0x196: Push((int) -1)
0x197: Push((int) 40902)
0x198: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x199: Pop(3)
0x19a: Return(); Pop(0)

0x19b: Push((int) 26109)
0x19c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x19e: PushEmpty(string)
0x19f: Stack[-1] = "Neutral" // @poff=89
0x1a0: Call2 0x9d

0x1a1: Pop(1)
0x1a2: Push((int) 524794)
0x1a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a4: Pop(1)
0x1a5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a6: Pop(0)
0x1a7: Push((int) 526885)
0x1a8: Push((int) 28173)
0x1a9: Push((int) 28172)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ab: Pop(3)
0x1ac: Push((int) 526890)
0x1ad: Push((int) 28178)
0x1ae: Push((int) 28177)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 28178)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral" // @poff=89
0x1b7: Call2 0x9d

0x1b8: Pop(1)
0x1b9: Push((int) 526891)
0x1ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bb: Pop(1)
0x1bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bd: Pop(0)
0x1be: Push((int) 538936)
0x1bf: Push((int) 40886)
0x1c0: Push((int) 40894)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 28173)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral" // @poff=89
0x1c9: Call2 0x9d

0x1ca: Pop(1)
0x1cb: Push((int) 526886)
0x1cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cd: Pop(1)
0x1ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cf: Pop(0)
0x1d0: Push((int) 524795)
0x1d1: Push((int) -1)
0x1d2: Push((int) 26110)
0x1d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d4: Pop(3)
0x1d5: Push((int) 526887)
0x1d6: Push((int) 28175)
0x1d7: Push((int) 28174)
0x1d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d9: Pop(3)
0x1da: Return(); Pop(0)

0x1db: Push((int) 28175)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Neutral" // @poff=89
0x1e0: Call2 0x9d

0x1e1: Pop(1)
0x1e2: Push((int) 526888)
0x1e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e4: Pop(1)
0x1e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e6: Pop(0)
0x1e7: Push((int) 526889)
0x1e8: Push((int) -1)
0x1e9: Push((int) 28176)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ee: PushEmpty(bool)
0x1ef: Call2 0xae8

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: @ lshStopAnimation()
0x1f3: Pop(0)
0x1f4: GOTO 0x1f7

0x1f5: @ StopAnimation()
0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: GOTO 0xb4

0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1fc: PushEmpty(bool, object)
0x1fd: PushEmpty(object)
0x1fe: Call2 0x974

0x1ff: Stack[-1] = Stack[-2]
0x200: Pop(1)
0x201: Call2 0x8c7

0x202: Pop(2)
0x203: PushEmpty(bool, object, float)
0x204: Stack[-12] = Stack[-2]
0x205: Stack[-1] = (float) 70.0
0x206: Call2 0x872

0x207: Pop(2)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: Stack[-10] = (int) -2
0x20b: Return(); Pop(8)

0x20c: @ CreateDialog(Stack[-4])
0x20d: Pop(0)
0x20e: PushEmpty(int)
0x20f: Call2 0xae2

0x210: Pop(0)
0x211: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x212: Pop(1)
0x213: PushEmpty(int)
0x214: Call2 0xae0

0x215: Pop(0)
0x216: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x217: Pop(1)
0x218: PushEmpty(string)
0x219: Call2 0xae4

0x21a: Pop(0)
0x21b: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x21c: Pop(1)
0x21d: PushEmpty(string)
0x21e: Call2 0xae6

0x21f: Pop(0)
0x220: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x221: Pop(1)
0x222: PushEmpty(int)
0x223: Call2 0xacf

0x224: Pop(0)
0x225: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x226: Pop(1)
0x227: Stack[-2] = (int) -1
0x228: @ IsOverrideActive(Stack[-3])
0x229: Pop(0)
0x22a: Push(Stack[-3])
0x22b: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22c: Stack[-10] = (int) -2
0x22d: Return(); Pop(8)

0x22e: @ DoDialog(Stack[-4])
0x22f: Pop(0)
0x230: PushEmpty(object, object)
0x231: Stack[-11] = Stack[-2]
0x232: Stack[-6] = Stack[-1]
0x233: Push(-2, 4); TaskCall(4)
0x234: Call2 0x24b

0x235: Pop(-2, 4); TaskReturn
0x236: Pop(2)
0x237: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x238: Pop(0)
0x239: Pop(0); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23b: @ sync()
0x23c: Pop(0)
0x23d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x23e: Pop(0)
0x23f: GOTO 0x239

0x240: PushEmpty(object)
0x241: Stack[-10] = Stack[-1]
0x242: Call2 0x8b6

0x243: Pop(1)
0x244: @ StopDialog(Stack[-4])
0x245: Pop(0)
0x246: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x247: Pop(0)
0x248: Stack[-2] = Stack[-10]
0x249: Return(); Pop(8)

0x24a: Stack[-4] = 0
0x24b: PushEmpty()
0x24c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x24d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x24e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24f: Push((int) 1)
0x250: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x251: PushEmpty(string)
0x252: Stack[-1] = "Neutral" // @poff=89
0x253: Call2 0x285

0x254: Pop(1)
0x255: Push((int) 525516)
0x256: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x257: Pop(1)
0x258: @@@ ClearReplies(); Obj=0 // @poff=116
0x259: Pop(0)
0x25a: Push((int) 525517)
0x25b: Push((int) -1)
0x25c: Push((int) 26873)
0x25d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25e: Pop(3)
0x25f: Push((int) 526273)
0x260: Push((int) -1)
0x261: Push((int) 27549)
0x262: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x263: Pop(3)
0x264: GOTO 0x267

0x265: Return(); Pop(0)

0x266: GOTO 0x24f

0x267: PushEmpty(bool)
0x268: Call2 0xae8

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x26b: @ lshWaitForAnimEnd()
0x26c: Pop(0)
0x26d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x275

0x270: PushEmpty(string)
0x271: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x272: Call2 0x951

0x273: Pop(1)
0x274: GOTO 0x26b

0x275: GOTO 0x284

0x276: Push("all") // @poff=138
0x277: Push("idle") // @poff=146
0x278: @ PlayAnimation(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: @ WaitForAnimEnd()
0x27b: Pop(0)
0x27c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x284

0x27f: Push("all") // @poff=138
0x280: Push("idle") // @poff=146
0x281: @ PlayAnimation(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: GOTO 0x27a

0x284: Return(); Pop(0)

0x285: PushEmpty()
0x286: PushEmpty(bool)
0x287: Call2 0xae8

0x288: Pop(0)
0x289: Pop(1); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Return(); Pop(0)

0x28c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: Return(); Pop(0)

0x28f: PushEmpty(string, bool)
0x290: Stack[-3] = Stack[-2]
0x291: Push("") // @poff=102
0x292: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-1] = (bool) 0
0x295: GOTO 0x297

0x296: Stack[-1] = (bool) 1
0x297: Call2 0x958

0x298: Pop(2)
0x299: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x29a: Return(); Pop(0)

0x29b: PushEmpty()
0x29c: Push((int) 1)
0x29d: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x29e: PushEmpty()
0x29f: Call2 0x96d

0x2a0: Pop(0)
0x2a1: Push((int) 26872)
0x2a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a4: PushEmpty(string)
0x2a5: Stack[-1] = "Neutral" // @poff=89
0x2a6: Call2 0x285

0x2a7: Pop(1)
0x2a8: Push((int) 525516)
0x2a9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2aa: Pop(1)
0x2ab: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ac: Pop(0)
0x2ad: Push((int) 525517)
0x2ae: Push((int) -1)
0x2af: Push((int) 26873)
0x2b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b1: Pop(3)
0x2b2: Push((int) 526273)
0x2b3: Push((int) -1)
0x2b4: Push((int) 27549)
0x2b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b9: PushEmpty(bool)
0x2ba: Call2 0xae8

0x2bb: Pop(0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bd: @ lshStopAnimation()
0x2be: Pop(0)
0x2bf: GOTO 0x2c2

0x2c0: @ StopAnimation()
0x2c1: Pop(0)
0x2c2: Return(); Pop(0)

0x2c3: GOTO 0x29c

0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2c7: PushEmpty(bool, object)
0x2c8: PushEmpty(object)
0x2c9: Call2 0x974

0x2ca: Stack[-1] = Stack[-2]
0x2cb: Pop(1)
0x2cc: Call2 0x8c7

0x2cd: Pop(2)
0x2ce: PushEmpty(bool, object, float)
0x2cf: Stack[-12] = Stack[-2]
0x2d0: Stack[-1] = (float) 70.0
0x2d1: Call2 0x872

0x2d2: Pop(2)
0x2d3: Pop(1); Push((bool) Stack[-1] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d5: Stack[-10] = (int) -2
0x2d6: Return(); Pop(8)

0x2d7: @ CreateDialog(Stack[-4])
0x2d8: Pop(0)
0x2d9: PushEmpty(int)
0x2da: Call2 0xae2

0x2db: Pop(0)
0x2dc: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x2dd: Pop(1)
0x2de: PushEmpty(int)
0x2df: Call2 0xae0

0x2e0: Pop(0)
0x2e1: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2e2: Pop(1)
0x2e3: PushEmpty(string)
0x2e4: Call2 0xae4

0x2e5: Pop(0)
0x2e6: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2e7: Pop(1)
0x2e8: PushEmpty(string)
0x2e9: Call2 0xae6

0x2ea: Pop(0)
0x2eb: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x2ec: Pop(1)
0x2ed: PushEmpty(int)
0x2ee: Call2 0xacf

0x2ef: Pop(0)
0x2f0: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2f1: Pop(1)
0x2f2: Stack[-2] = (int) -1
0x2f3: @ IsOverrideActive(Stack[-3])
0x2f4: Pop(0)
0x2f5: Push(Stack[-3])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-10] = (int) -2
0x2f8: Return(); Pop(8)

0x2f9: @ DoDialog(Stack[-4])
0x2fa: Pop(0)
0x2fb: PushEmpty(object, object)
0x2fc: Stack[-11] = Stack[-2]
0x2fd: Stack[-6] = Stack[-1]
0x2fe: Push(-2, 4); TaskCall(6)
0x2ff: Call2 0x316

0x300: Pop(-2, 4); TaskReturn
0x301: Pop(2)
0x302: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x303: Pop(0)
0x304: Pop(0); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: @ sync()
0x307: Pop(0)
0x308: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x309: Pop(0)
0x30a: GOTO 0x304

0x30b: PushEmpty(object)
0x30c: Stack[-10] = Stack[-1]
0x30d: Call2 0x8b6

0x30e: Pop(1)
0x30f: @ StopDialog(Stack[-4])
0x310: Pop(0)
0x311: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x312: Pop(0)
0x313: Stack[-2] = Stack[-10]
0x314: Return(); Pop(8)

0x315: Stack[-4] = 0
0x316: PushEmpty()
0x317: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x318: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x319: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x31a: Push((int) 1)
0x31b: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x31c: PushEmpty(string)
0x31d: Stack[-1] = "Neutral" // @poff=89
0x31e: Call2 0x355

0x31f: Pop(1)
0x320: Push((int) 525691)
0x321: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x322: Pop(1)
0x323: @@@ ClearReplies(); Obj=0 // @poff=116
0x324: Pop(0)
0x325: PushEmpty(bool, object)
0x326: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x327: Call2 0xa42

0x328: Pop(1)
0x329: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32a: Push((int) 525692)
0x32b: Push((int) 30673)
0x32c: Push((int) 27015)
0x32d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32e: Pop(3)
0x32f: Push((int) 525695)
0x330: Push((int) -1)
0x331: Push((int) 27018)
0x332: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x333: Pop(3)
0x334: GOTO 0x337

0x335: Return(); Pop(0)

0x336: GOTO 0x31a

0x337: PushEmpty(bool)
0x338: Call2 0xae8

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x33b: @ lshWaitForAnimEnd()
0x33c: Pop(0)
0x33d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x345

0x340: PushEmpty(string)
0x341: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x342: Call2 0x951

0x343: Pop(1)
0x344: GOTO 0x33b

0x345: GOTO 0x354

0x346: Push("all") // @poff=138
0x347: Push("idle") // @poff=146
0x348: @ PlayAnimation(Stack[-2], Stack[-1])
0x349: Pop(2)
0x34a: @ WaitForAnimEnd()
0x34b: Pop(0)
0x34c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x354

0x34f: Push("all") // @poff=138
0x350: Push("idle") // @poff=146
0x351: @ PlayAnimation(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: GOTO 0x34a

0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: PushEmpty(bool)
0x357: Call2 0xae8

0x358: Pop(0)
0x359: Pop(1); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: Return(); Pop(0)

0x35c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: Return(); Pop(0)

0x35f: PushEmpty(string, bool)
0x360: Stack[-3] = Stack[-2]
0x361: Push("") // @poff=102
0x362: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-1] = (bool) 0
0x365: GOTO 0x367

0x366: Stack[-1] = (bool) 1
0x367: Call2 0x958

0x368: Pop(2)
0x369: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x36a: Return(); Pop(0)

0x36b: PushEmpty()
0x36c: Push((int) 1)
0x36d: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x36e: PushEmpty()
0x36f: Call2 0x96d

0x370: Pop(0)
0x371: Push((int) 27017)
0x372: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: PushEmpty(object, object)
0x375: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x376: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x377: Call2 0x9ea

0x378: Pop(2)
0x379: Push((int) 27014)
0x37a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x37c: PushEmpty(string)
0x37d: Stack[-1] = "Neutral" // @poff=89
0x37e: Call2 0x355

0x37f: Pop(1)
0x380: Push((int) 525691)
0x381: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x382: Pop(1)
0x383: @@@ ClearReplies(); Obj=0 // @poff=116
0x384: Pop(0)
0x385: PushEmpty(bool, object)
0x386: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x387: Call2 0xa42

0x388: Pop(1)
0x389: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38a: Push((int) 525692)
0x38b: Push((int) 30673)
0x38c: Push((int) 27015)
0x38d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38e: Pop(3)
0x38f: Push((int) 525695)
0x390: Push((int) -1)
0x391: Push((int) 27018)
0x392: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x393: Pop(3)
0x394: Return(); Pop(0)

0x395: Push((int) 30673)
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x398: PushEmpty(string)
0x399: Stack[-1] = "Neutral" // @poff=89
0x39a: Call2 0x355

0x39b: Pop(1)
0x39c: Push((int) 529221)
0x39d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x39e: Pop(1)
0x39f: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a0: Pop(0)
0x3a1: Push((int) 529222)
0x3a2: Push((int) 27016)
0x3a3: Push((int) 30674)
0x3a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a5: Pop(3)
0x3a6: Push((int) 529223)
0x3a7: Push((int) 27016)
0x3a8: Push((int) 30675)
0x3a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 27016)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Neutral" // @poff=89
0x3b1: Call2 0x355

0x3b2: Pop(1)
0x3b3: Push((int) 525693)
0x3b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b5: Pop(1)
0x3b6: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b7: Pop(0)
0x3b8: Push((int) 529219)
0x3b9: Push((int) 30672)
0x3ba: Push((int) 30671)
0x3bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 30672)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral" // @poff=89
0x3c3: Call2 0x355

0x3c4: Pop(1)
0x3c5: Push((int) 529220)
0x3c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c7: Pop(1)
0x3c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c9: Pop(0)
0x3ca: Push((int) 525694)
0x3cb: Push((int) -1)
0x3cc: Push((int) 27017)
0x3cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ce: Pop(3)
0x3cf: Return(); Pop(0)

0x3d0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d1: PushEmpty(bool)
0x3d2: Call2 0xae8

0x3d3: Pop(0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d5: @ lshStopAnimation()
0x3d6: Pop(0)
0x3d7: GOTO 0x3da

0x3d8: @ StopAnimation()
0x3d9: Pop(0)
0x3da: Return(); Pop(0)

0x3db: GOTO 0x36c

0x3dc: Return(); Pop(0)

0x3dd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3de: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3df: PushEmpty(bool, object)
0x3e0: PushEmpty(object)
0x3e1: Call2 0x974

0x3e2: Stack[-1] = Stack[-2]
0x3e3: Pop(1)
0x3e4: Call2 0x8c7

0x3e5: Pop(2)
0x3e6: PushEmpty(bool, object, float)
0x3e7: Stack[-12] = Stack[-2]
0x3e8: Stack[-1] = (float) 70.0
0x3e9: Call2 0x872

0x3ea: Pop(2)
0x3eb: Pop(1); Push((bool) Stack[-1] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-10] = (int) -2
0x3ee: Return(); Pop(8)

0x3ef: @ CreateDialog(Stack[-4])
0x3f0: Pop(0)
0x3f1: PushEmpty(int)
0x3f2: Call2 0xae2

0x3f3: Pop(0)
0x3f4: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x3f5: Pop(1)
0x3f6: PushEmpty(int)
0x3f7: Call2 0xae0

0x3f8: Pop(0)
0x3f9: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x3fa: Pop(1)
0x3fb: PushEmpty(string)
0x3fc: Call2 0xae4

0x3fd: Pop(0)
0x3fe: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x3ff: Pop(1)
0x400: PushEmpty(string)
0x401: Call2 0xae6

0x402: Pop(0)
0x403: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x404: Pop(1)
0x405: PushEmpty(int)
0x406: Call2 0xacf

0x407: Pop(0)
0x408: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x409: Pop(1)
0x40a: Stack[-2] = (int) -1
0x40b: @ IsOverrideActive(Stack[-3])
0x40c: Pop(0)
0x40d: Push(Stack[-3])
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-10] = (int) -2
0x410: Return(); Pop(8)

0x411: @ DoDialog(Stack[-4])
0x412: Pop(0)
0x413: PushEmpty(object, object)
0x414: Stack[-11] = Stack[-2]
0x415: Stack[-6] = Stack[-1]
0x416: Push(-2, 4); TaskCall(8)
0x417: Call2 0x42e

0x418: Pop(-2, 4); TaskReturn
0x419: Pop(2)
0x41a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x41b: Pop(0)
0x41c: Pop(0); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41e: @ sync()
0x41f: Pop(0)
0x420: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x421: Pop(0)
0x422: GOTO 0x41c

0x423: PushEmpty(object)
0x424: Stack[-10] = Stack[-1]
0x425: Call2 0x8b6

0x426: Pop(1)
0x427: @ StopDialog(Stack[-4])
0x428: Pop(0)
0x429: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x42a: Pop(0)
0x42b: Stack[-2] = Stack[-10]
0x42c: Return(); Pop(8)

0x42d: Stack[-4] = 0
0x42e: PushEmpty()
0x42f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x430: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x431: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x432: Push((int) 1)
0x433: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x436: Call2 0xa4e

0x437: Pop(1)
0x438: Pop(1); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x43a: PushEmpty(object, object)
0x43b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43d: Call2 0x9f3

0x43e: Pop(2)
0x43f: PushEmpty(string)
0x440: Stack[-1] = "Neutral" // @poff=89
0x441: Call2 0x487

0x442: Pop(1)
0x443: Push((int) 527714)
0x444: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x445: Pop(1)
0x446: @@@ ClearReplies(); Obj=0 // @poff=116
0x447: Pop(0)
0x448: Push((int) 527715)
0x449: Push((int) 29269)
0x44a: Push((int) 29067)
0x44b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44c: Pop(3)
0x44d: Push((int) 527928)
0x44e: Push((int) 29269)
0x44f: Push((int) 29279)
0x450: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x451: Pop(3)
0x452: GOTO 0x469

0x453: PushEmpty(string)
0x454: Stack[-1] = "Neutral" // @poff=89
0x455: Call2 0x487

0x456: Pop(1)
0x457: Push((int) 527716)
0x458: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x459: Pop(1)
0x45a: @@@ ClearReplies(); Obj=0 // @poff=116
0x45b: Pop(0)
0x45c: Push((int) 527717)
0x45d: Push((int) -1)
0x45e: Push((int) 29069)
0x45f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x460: Pop(3)
0x461: Push((int) 527918)
0x462: Push((int) -1)
0x463: Push((int) 29268)
0x464: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x465: Pop(3)
0x466: GOTO 0x469

0x467: Return(); Pop(0)

0x468: GOTO 0x432

0x469: PushEmpty(bool)
0x46a: Call2 0xae8

0x46b: Pop(0)
0x46c: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x46d: @ lshWaitForAnimEnd()
0x46e: Pop(0)
0x46f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: GOTO 0x477

0x472: PushEmpty(string)
0x473: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x474: Call2 0x951

0x475: Pop(1)
0x476: GOTO 0x46d

0x477: GOTO 0x486

0x478: Push("all") // @poff=138
0x479: Push("idle") // @poff=146
0x47a: @ PlayAnimation(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: @ WaitForAnimEnd()
0x47d: Pop(0)
0x47e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: GOTO 0x486

0x481: Push("all") // @poff=138
0x482: Push("idle") // @poff=146
0x483: @ PlayAnimation(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: GOTO 0x47c

0x486: Return(); Pop(0)

0x487: PushEmpty()
0x488: PushEmpty(bool)
0x489: Call2 0xae8

0x48a: Pop(0)
0x48b: Pop(1); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Return(); Pop(0)

0x48e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: Return(); Pop(0)

0x491: PushEmpty(string, bool)
0x492: Stack[-3] = Stack[-2]
0x493: Push("") // @poff=102
0x494: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-1] = (bool) 0
0x497: GOTO 0x499

0x498: Stack[-1] = (bool) 1
0x499: Call2 0x958

0x49a: Pop(2)
0x49b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: Push((int) 1)
0x49f: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x4a0: PushEmpty()
0x4a1: Call2 0x96d

0x4a2: Pop(0)
0x4a3: Push((int) 29286)
0x4a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x9f9

0x4aa: Pop(2)
0x4ab: PushEmpty(object, object)
0x4ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ae: Call2 0xa1a

0x4af: Pop(2)
0x4b0: Push((int) 29287)
0x4b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b3: PushEmpty(object, object)
0x4b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b6: Call2 0x9f9

0x4b7: Pop(2)
0x4b8: PushEmpty(object, object)
0x4b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bb: Call2 0xa1a

0x4bc: Pop(2)
0x4bd: Push((int) 29066)
0x4be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4c0: PushEmpty(bool, object)
0x4c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c2: Call2 0xa4e

0x4c3: Pop(1)
0x4c4: Pop(1); Push((bool) Stack[-1] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4c6: PushEmpty(object, object)
0x4c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c9: Call2 0x9f3

0x4ca: Pop(2)
0x4cb: PushEmpty(string)
0x4cc: Stack[-1] = "Neutral" // @poff=89
0x4cd: Call2 0x487

0x4ce: Pop(1)
0x4cf: Push((int) 527714)
0x4d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d1: Pop(1)
0x4d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x4d3: Pop(0)
0x4d4: Push((int) 527715)
0x4d5: Push((int) 29269)
0x4d6: Push((int) 29067)
0x4d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d8: Pop(3)
0x4d9: Push((int) 527928)
0x4da: Push((int) 29269)
0x4db: Push((int) 29279)
0x4dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4dd: Pop(3)
0x4de: Return(); Pop(0)

0x4df: PushEmpty(string)
0x4e0: Stack[-1] = "Neutral" // @poff=89
0x4e1: Call2 0x487

0x4e2: Pop(1)
0x4e3: Push((int) 527716)
0x4e4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4e5: Pop(1)
0x4e6: @@@ ClearReplies(); Obj=0 // @poff=116
0x4e7: Pop(0)
0x4e8: Push((int) 527717)
0x4e9: Push((int) -1)
0x4ea: Push((int) 29069)
0x4eb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ec: Pop(3)
0x4ed: Push((int) 527918)
0x4ee: Push((int) -1)
0x4ef: Push((int) 29268)
0x4f0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f1: Pop(3)
0x4f2: Return(); Pop(0)

0x4f3: Push((int) 29269)
0x4f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x4f6: PushEmpty(string)
0x4f7: Stack[-1] = "Neutral" // @poff=89
0x4f8: Call2 0x487

0x4f9: Pop(1)
0x4fa: Push((int) 527919)
0x4fb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4fc: Pop(1)
0x4fd: @@@ ClearReplies(); Obj=0 // @poff=116
0x4fe: Pop(0)
0x4ff: Push((int) 527920)
0x500: Push((int) 29271)
0x501: Push((int) 29270)
0x502: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x503: Pop(3)
0x504: Push((int) 527923)
0x505: Push((int) 29274)
0x506: Push((int) 29273)
0x507: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x508: Pop(3)
0x509: Return(); Pop(0)

0x50a: Push((int) 29274)
0x50b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x50d: PushEmpty(string)
0x50e: Stack[-1] = "Neutral" // @poff=89
0x50f: Call2 0x487

0x510: Pop(1)
0x511: Push((int) 527924)
0x512: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x513: Pop(1)
0x514: @@@ ClearReplies(); Obj=0 // @poff=116
0x515: Pop(0)
0x516: Push((int) 527925)
0x517: Push((int) 29276)
0x518: Push((int) 29275)
0x519: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51a: Pop(3)
0x51b: Return(); Pop(0)

0x51c: Push((int) 29276)
0x51d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "Neutral" // @poff=89
0x521: Call2 0x487

0x522: Pop(1)
0x523: Push((int) 527926)
0x524: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x525: Pop(1)
0x526: @@@ ClearReplies(); Obj=0 // @poff=116
0x527: Pop(0)
0x528: Push((int) 527927)
0x529: Push((int) 29271)
0x52a: Push((int) 29277)
0x52b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52c: Pop(3)
0x52d: Return(); Pop(0)

0x52e: Push((int) 29271)
0x52f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral" // @poff=89
0x533: Call2 0x487

0x534: Pop(1)
0x535: Push((int) 527921)
0x536: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x537: Pop(1)
0x538: @@@ ClearReplies(); Obj=0 // @poff=116
0x539: Pop(0)
0x53a: Push((int) 527922)
0x53b: Push((int) 29282)
0x53c: Push((int) 29272)
0x53d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53e: Pop(3)
0x53f: Push((int) 527929)
0x540: Push((int) 29284)
0x541: Push((int) 29281)
0x542: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x543: Pop(3)
0x544: Return(); Pop(0)

0x545: Push((int) 29282)
0x546: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Neutral" // @poff=89
0x54a: Call2 0x487

0x54b: Pop(1)
0x54c: Push((int) 527930)
0x54d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x54e: Pop(1)
0x54f: @@@ ClearReplies(); Obj=0 // @poff=116
0x550: Pop(0)
0x551: Push((int) 527931)
0x552: Push((int) 29284)
0x553: Push((int) 29283)
0x554: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x555: Pop(3)
0x556: Return(); Pop(0)

0x557: Push((int) 29284)
0x558: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x55a: PushEmpty(string)
0x55b: Stack[-1] = "Neutral" // @poff=89
0x55c: Call2 0x487

0x55d: Pop(1)
0x55e: Push((int) 527932)
0x55f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x560: Pop(1)
0x561: @@@ ClearReplies(); Obj=0 // @poff=116
0x562: Pop(0)
0x563: Push((int) 527933)
0x564: Push((int) -1)
0x565: Push((int) 29286)
0x566: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x567: Pop(3)
0x568: Push((int) 527934)
0x569: Push((int) -1)
0x56a: Push((int) 29287)
0x56b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x56c: Pop(3)
0x56d: Return(); Pop(0)

0x56e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x56f: PushEmpty(bool)
0x570: Call2 0xae8

0x571: Pop(0)
0x572: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x573: @ lshStopAnimation()
0x574: Pop(0)
0x575: GOTO 0x578

0x576: @ StopAnimation()
0x577: Pop(0)
0x578: Return(); Pop(0)

0x579: GOTO 0x49e

0x57a: Return(); Pop(0)

0x57b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x57c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x57d: PushEmpty(bool, object)
0x57e: PushEmpty(object)
0x57f: Call2 0x974

0x580: Stack[-1] = Stack[-2]
0x581: Pop(1)
0x582: Call2 0x8c7

0x583: Pop(2)
0x584: PushEmpty(bool, object, float)
0x585: Stack[-12] = Stack[-2]
0x586: Stack[-1] = (float) 70.0
0x587: Call2 0x872

0x588: Pop(2)
0x589: Pop(1); Push((bool) Stack[-1] == 0)
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: Stack[-10] = (int) -2
0x58c: Return(); Pop(8)

0x58d: @ CreateDialog(Stack[-4])
0x58e: Pop(0)
0x58f: PushEmpty(int)
0x590: Call2 0xae2

0x591: Pop(0)
0x592: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x593: Pop(1)
0x594: PushEmpty(int)
0x595: Call2 0xae0

0x596: Pop(0)
0x597: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x598: Pop(1)
0x599: PushEmpty(string)
0x59a: Call2 0xae4

0x59b: Pop(0)
0x59c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x59d: Pop(1)
0x59e: PushEmpty(string)
0x59f: Call2 0xae6

0x5a0: Pop(0)
0x5a1: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x5a2: Pop(1)
0x5a3: PushEmpty(int)
0x5a4: Call2 0xacf

0x5a5: Pop(0)
0x5a6: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5a7: Pop(1)
0x5a8: Stack[-2] = (int) -1
0x5a9: @ IsOverrideActive(Stack[-3])
0x5aa: Pop(0)
0x5ab: Push(Stack[-3])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ad: Stack[-10] = (int) -2
0x5ae: Return(); Pop(8)

0x5af: @ DoDialog(Stack[-4])
0x5b0: Pop(0)
0x5b1: PushEmpty(object, object)
0x5b2: Stack[-11] = Stack[-2]
0x5b3: Stack[-6] = Stack[-1]
0x5b4: Push(-2, 4); TaskCall(10)
0x5b5: Call2 0x5cc

0x5b6: Pop(-2, 4); TaskReturn
0x5b7: Pop(2)
0x5b8: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5b9: Pop(0)
0x5ba: Pop(0); Push((bool) Stack[-1] == 0)
0x5bb: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bc: @ sync()
0x5bd: Pop(0)
0x5be: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5bf: Pop(0)
0x5c0: GOTO 0x5ba

0x5c1: PushEmpty(object)
0x5c2: Stack[-10] = Stack[-1]
0x5c3: Call2 0x8b6

0x5c4: Pop(1)
0x5c5: @ StopDialog(Stack[-4])
0x5c6: Pop(0)
0x5c7: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5c8: Pop(0)
0x5c9: Stack[-2] = Stack[-10]
0x5ca: Return(); Pop(8)

0x5cb: Stack[-4] = 0
0x5cc: PushEmpty()
0x5cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5ce: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5cf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5d0: Push((int) 1)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral" // @poff=89
0x5d4: Call2 0x60b

0x5d5: Pop(1)
0x5d6: Push((int) 535284)
0x5d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d8: Pop(1)
0x5d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x5da: Pop(0)
0x5db: Push((int) 535285)
0x5dc: Push((int) 36962)
0x5dd: Push((int) 36961)
0x5de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5df: Pop(3)
0x5e0: Push((int) 535292)
0x5e1: Push((int) -1)
0x5e2: Push((int) 36968)
0x5e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e4: Pop(3)
0x5e5: Push((int) 535293)
0x5e6: Push((int) -1)
0x5e7: Push((int) 36969)
0x5e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e9: Pop(3)
0x5ea: GOTO 0x5ed

0x5eb: Return(); Pop(0)

0x5ec: GOTO 0x5d0

0x5ed: PushEmpty(bool)
0x5ee: Call2 0xae8

0x5ef: Pop(0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f1: @ lshWaitForAnimEnd()
0x5f2: Pop(0)
0x5f3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f5: GOTO 0x5fb

0x5f6: PushEmpty(string)
0x5f7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5f8: Call2 0x951

0x5f9: Pop(1)
0x5fa: GOTO 0x5f1

0x5fb: GOTO 0x60a

0x5fc: Push("all") // @poff=138
0x5fd: Push("idle") // @poff=146
0x5fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ff: Pop(2)
0x600: @ WaitForAnimEnd()
0x601: Pop(0)
0x602: Push( Stack[3 + Tasks[-1].StackPointer] )
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: GOTO 0x60a

0x605: Push("all") // @poff=138
0x606: Push("idle") // @poff=146
0x607: @ PlayAnimation(Stack[-2], Stack[-1])
0x608: Pop(2)
0x609: GOTO 0x600

0x60a: Return(); Pop(0)

0x60b: PushEmpty()
0x60c: PushEmpty(bool)
0x60d: Call2 0xae8

0x60e: Pop(0)
0x60f: Pop(1); Push((bool) Stack[-1] == 0)
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Return(); Pop(0)

0x612: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x613: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x614: Return(); Pop(0)

0x615: PushEmpty(string, bool)
0x616: Stack[-3] = Stack[-2]
0x617: Push("") // @poff=102
0x618: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61a: Stack[-1] = (bool) 0
0x61b: GOTO 0x61d

0x61c: Stack[-1] = (bool) 1
0x61d: Call2 0x958

0x61e: Pop(2)
0x61f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x620: Return(); Pop(0)

0x621: PushEmpty()
0x622: Push((int) 1)
0x623: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x624: PushEmpty()
0x625: Call2 0x96d

0x626: Pop(0)
0x627: Push((int) 36960)
0x628: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x62a: PushEmpty(string)
0x62b: Stack[-1] = "Neutral" // @poff=89
0x62c: Call2 0x60b

0x62d: Pop(1)
0x62e: Push((int) 535284)
0x62f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x630: Pop(1)
0x631: @@@ ClearReplies(); Obj=0 // @poff=116
0x632: Pop(0)
0x633: Push((int) 535285)
0x634: Push((int) 36962)
0x635: Push((int) 36961)
0x636: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x637: Pop(3)
0x638: Push((int) 535292)
0x639: Push((int) -1)
0x63a: Push((int) 36968)
0x63b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x63c: Pop(3)
0x63d: Push((int) 535293)
0x63e: Push((int) -1)
0x63f: Push((int) 36969)
0x640: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x641: Pop(3)
0x642: Return(); Pop(0)

0x643: Push((int) 36962)
0x644: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x646: PushEmpty(string)
0x647: Stack[-1] = "Neutral" // @poff=89
0x648: Call2 0x60b

0x649: Pop(1)
0x64a: Push((int) 535286)
0x64b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x64c: Pop(1)
0x64d: @@@ ClearReplies(); Obj=0 // @poff=116
0x64e: Pop(0)
0x64f: Push((int) 535287)
0x650: Push((int) 36964)
0x651: Push((int) 36963)
0x652: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x653: Pop(3)
0x654: Push((int) 535291)
0x655: Push((int) -1)
0x656: Push((int) 36967)
0x657: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x658: Pop(3)
0x659: Return(); Pop(0)

0x65a: Push((int) 36964)
0x65b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x65d: PushEmpty(string)
0x65e: Stack[-1] = "Neutral" // @poff=89
0x65f: Call2 0x60b

0x660: Pop(1)
0x661: Push((int) 535288)
0x662: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x663: Pop(1)
0x664: @@@ ClearReplies(); Obj=0 // @poff=116
0x665: Pop(0)
0x666: Push((int) 535289)
0x667: Push((int) -1)
0x668: Push((int) 36965)
0x669: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x66a: Pop(3)
0x66b: Push((int) 535290)
0x66c: Push((int) -1)
0x66d: Push((int) 36966)
0x66e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x66f: Pop(3)
0x670: Return(); Pop(0)

0x671: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x672: PushEmpty(bool)
0x673: Call2 0xae8

0x674: Pop(0)
0x675: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x676: @ lshStopAnimation()
0x677: Pop(0)
0x678: GOTO 0x67b

0x679: @ StopAnimation()
0x67a: Pop(0)
0x67b: Return(); Pop(0)

0x67c: GOTO 0x622

0x67d: Return(); Pop(0)

0x67e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x67f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x680: PushEmpty(bool, object)
0x681: PushEmpty(object)
0x682: Call2 0x974

0x683: Stack[-1] = Stack[-2]
0x684: Pop(1)
0x685: Call2 0x8c7

0x686: Pop(2)
0x687: PushEmpty(bool, object, float)
0x688: Stack[-12] = Stack[-2]
0x689: Stack[-1] = (float) 70.0
0x68a: Call2 0x872

0x68b: Pop(2)
0x68c: Pop(1); Push((bool) Stack[-1] == 0)
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: Stack[-10] = (int) -2
0x68f: Return(); Pop(8)

0x690: @ CreateDialog(Stack[-4])
0x691: Pop(0)
0x692: PushEmpty(int)
0x693: Call2 0xae2

0x694: Pop(0)
0x695: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x696: Pop(1)
0x697: PushEmpty(int)
0x698: Call2 0xae0

0x699: Pop(0)
0x69a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x69b: Pop(1)
0x69c: PushEmpty(string)
0x69d: Call2 0xae4

0x69e: Pop(0)
0x69f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x6a0: Pop(1)
0x6a1: PushEmpty(string)
0x6a2: Call2 0xae6

0x6a3: Pop(0)
0x6a4: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x6a5: Pop(1)
0x6a6: PushEmpty(int)
0x6a7: Call2 0xacf

0x6a8: Pop(0)
0x6a9: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x6aa: Pop(1)
0x6ab: Stack[-2] = (int) -1
0x6ac: @ IsOverrideActive(Stack[-3])
0x6ad: Pop(0)
0x6ae: Push(Stack[-3])
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-10] = (int) -2
0x6b1: Return(); Pop(8)

0x6b2: @ DoDialog(Stack[-4])
0x6b3: Pop(0)
0x6b4: PushEmpty(object, object)
0x6b5: Stack[-11] = Stack[-2]
0x6b6: Stack[-6] = Stack[-1]
0x6b7: Push(-2, 4); TaskCall(12)
0x6b8: Call2 0x6cf

0x6b9: Pop(-2, 4); TaskReturn
0x6ba: Pop(2)
0x6bb: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x6bc: Pop(0)
0x6bd: Pop(0); Push((bool) Stack[-1] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6bf: @ sync()
0x6c0: Pop(0)
0x6c1: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x6c2: Pop(0)
0x6c3: GOTO 0x6bd

0x6c4: PushEmpty(object)
0x6c5: Stack[-10] = Stack[-1]
0x6c6: Call2 0x8b6

0x6c7: Pop(1)
0x6c8: @ StopDialog(Stack[-4])
0x6c9: Pop(0)
0x6ca: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x6cb: Pop(0)
0x6cc: Stack[-2] = Stack[-10]
0x6cd: Return(); Pop(8)

0x6ce: Stack[-4] = 0
0x6cf: PushEmpty()
0x6d0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6d1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6d2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6d3: Push((int) 1)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6d5: PushEmpty(string)
0x6d6: Stack[-1] = "Neutral" // @poff=89
0x6d7: Call2 0x709

0x6d8: Pop(1)
0x6d9: Push((int) 540545)
0x6da: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6db: Pop(1)
0x6dc: @@@ ClearReplies(); Obj=0 // @poff=116
0x6dd: Pop(0)
0x6de: Push((int) 540546)
0x6df: Push((int) -1)
0x6e0: Push((int) 42555)
0x6e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e2: Pop(3)
0x6e3: Push((int) 540798)
0x6e4: Push((int) -1)
0x6e5: Push((int) 42847)
0x6e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e7: Pop(3)
0x6e8: GOTO 0x6eb

0x6e9: Return(); Pop(0)

0x6ea: GOTO 0x6d3

0x6eb: PushEmpty(bool)
0x6ec: Call2 0xae8

0x6ed: Pop(0)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6ef: @ lshWaitForAnimEnd()
0x6f0: Pop(0)
0x6f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: GOTO 0x6f9

0x6f4: PushEmpty(string)
0x6f5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6f6: Call2 0x951

0x6f7: Pop(1)
0x6f8: GOTO 0x6ef

0x6f9: GOTO 0x708

0x6fa: Push("all") // @poff=138
0x6fb: Push("idle") // @poff=146
0x6fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x6fd: Pop(2)
0x6fe: @ WaitForAnimEnd()
0x6ff: Pop(0)
0x700: Push( Stack[3 + Tasks[-1].StackPointer] )
0x701: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x702: GOTO 0x708

0x703: Push("all") // @poff=138
0x704: Push("idle") // @poff=146
0x705: @ PlayAnimation(Stack[-2], Stack[-1])
0x706: Pop(2)
0x707: GOTO 0x6fe

0x708: Return(); Pop(0)

0x709: PushEmpty()
0x70a: PushEmpty(bool)
0x70b: Call2 0xae8

0x70c: Pop(0)
0x70d: Pop(1); Push((bool) Stack[-1] == 0)
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: Return(); Pop(0)

0x710: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: Return(); Pop(0)

0x713: PushEmpty(string, bool)
0x714: Stack[-3] = Stack[-2]
0x715: Push("") // @poff=102
0x716: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x718: Stack[-1] = (bool) 0
0x719: GOTO 0x71b

0x71a: Stack[-1] = (bool) 1
0x71b: Call2 0x958

0x71c: Pop(2)
0x71d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x71e: Return(); Pop(0)

0x71f: PushEmpty()
0x720: Push((int) 1)
0x721: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x722: PushEmpty()
0x723: Call2 0x96d

0x724: Pop(0)
0x725: Push((int) 42554)
0x726: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x728: PushEmpty(string)
0x729: Stack[-1] = "Neutral" // @poff=89
0x72a: Call2 0x709

0x72b: Pop(1)
0x72c: Push((int) 540545)
0x72d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x72e: Pop(1)
0x72f: @@@ ClearReplies(); Obj=0 // @poff=116
0x730: Pop(0)
0x731: Push((int) 540546)
0x732: Push((int) -1)
0x733: Push((int) 42555)
0x734: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x735: Pop(3)
0x736: Push((int) 540798)
0x737: Push((int) -1)
0x738: Push((int) 42847)
0x739: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73a: Pop(3)
0x73b: Return(); Pop(0)

0x73c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x73d: PushEmpty(bool)
0x73e: Call2 0xae8

0x73f: Pop(0)
0x740: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x741: @ lshStopAnimation()
0x742: Pop(0)
0x743: GOTO 0x746

0x744: @ StopAnimation()
0x745: Pop(0)
0x746: Return(); Pop(0)

0x747: GOTO 0x720

0x748: Return(); Pop(0)

0x749: Push(GlobalVars[1])
0x74a: Stack[-1] = (bool) 0
0x74b: GlobalVars[1] = Stack[-1]; Pop(1)
0x74c: PushEmpty()
0x74d: Call2 0x750

0x74e: Pop(0)
0x74f: Return(); Pop(0)

0x750: PushEmpty(bool)
0x751: Call2 0x86d

0x752: Pop(0)
0x753: Pop(1); Push((bool) Stack[-1] == 0)
0x754: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x755: PushEmpty()
0x756: Push(-0, 0); TaskCall(0)
0x757: Call2 0x0

0x758: Pop(-0, 0); TaskReturn
0x759: Pop(0)
0x75a: PushEmpty()
0x75b: Call2 0x7d0

0x75c: Pop(0)
0x75d: @ GetDirection(Stack[-0]T)
0x75e: Pop(0)
0x75f: PushEmpty()
0x760: Call2 0x806

0x761: Pop(0)
0x762: GOTO 0x75f

0x763: Return(); Pop(0)

0x764: PushEmpty(object, object)
0x765: Push("player") // @poff=156
0x766: @ FindActor(Stack[-2], Stack[-1])
0x767: Pop(1)
0x768: Pop(0); Push((bool) Stack[-1] == 0)
0x769: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76a: Stack[-3] = (bool) 0
0x76b: Return(); Pop(2)

0x76c: PushEmpty(bool, object)
0x76d: Stack[-3] = Stack[-1]
0x76e: Call2 0x864

0x76f: Stack[-2] = Stack[-5]
0x770: Pop(2)
0x771: Return(); Pop(2)

0x772: Stack[-1] = 0
0x773: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x774: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x775: @ RotateAsync(Stack[-2], Stack[-1])
0x776: Pop(2)
0x777: Return(); Pop(0)

0x778: PushEmpty(object, bool, object, bool)
0x779: Push("player") // @poff=156
0x77a: @ FindActor(Stack[-3], Stack[-1])
0x77b: Pop(1)
0x77c: Pop(0); Push((bool) Stack[-2] == 0)
0x77d: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77e: Stack[-5] = (bool) 0
0x77f: Return(); Pop(4)

0x780: PushEmpty(float, object)
0x781: Stack[-4] = Stack[-1]
0x782: Call2 0x852

0x783: Pop(1)
0x784: Push((float)90000.0)
0x785: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-5] = (bool) 0
0x788: Return(); Pop(4)

0x789: @ CanSee(Stack[-1], Stack[-2])
0x78a: Pop(0)
0x78b: Stack[-1] = Stack[-5]
0x78c: Return(); Pop(4)

0x78d: Stack[-2] = 0
0x78e: PushEmpty(float, float)
0x78f: Push((int) 8)
0x790: Push((int) 16)
0x791: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x792: Pop(2)
0x793: Push((int) 10)
0x794: @ SetTimer(Stack[-1], Stack[-2])
0x795: Pop(1)
0x796: Return(); Pop(2)

0x797: Push((int) 10)
0x798: @ KillTimer(Stack[-1])
0x799: Pop(1)
0x79a: Return(); Pop(0)

0x79b: PushEmpty()
0x79c: Push((int) 10)
0x79d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x79f: PushEmpty()
0x7a0: Call2 0x797

0x7a1: Pop(0)
0x7a2: PushEmpty(bool)
0x7a3: Stack[-1] = (bool) 0
0x7a4: PushEmpty(bool)
0x7a5: Call2 0x86d

0x7a6: Pop(0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a8: PushEmpty(bool)
0x7a9: Call2 0x778

0x7aa: Pop(0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ac: Stack[-1] = (bool) 1
0x7ad: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7ae: PushEmpty(bool)
0x7af: Call2 0x764

0x7b0: Pop(0)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b2: PushEmpty(bool, object)
0x7b3: PushEmpty(object)
0x7b4: Call2 0x974

0x7b5: Stack[-1] = Stack[-2]
0x7b6: Pop(1)
0x7b7: Call2 0x901

0x7b8: Pop(2)
0x7b9: GOTO 0x7c0

0x7ba: PushEmpty()
0x7bb: Call2 0x773

0x7bc: Pop(0)
0x7bd: PushEmpty()
0x7be: Call2 0x78e

0x7bf: Pop(0)
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty()
0x7c2: Call2 0x84d

0x7c3: Pop(0)
0x7c4: PushEmpty()
0x7c5: Call2 0x797

0x7c6: Pop(0)
0x7c7: @ lshStopSpeech()
0x7c8: Pop(0)
0x7c9: @ lshStopAnimation()
0x7ca: Pop(0)
0x7cb: @ StopAsync()
0x7cc: Pop(0)
0x7cd: @ Hold()
0x7ce: Pop(0)
0x7cf: Return(); Pop(0)

0x7d0: @ StopGroup0()
0x7d1: Pop(0)
0x7d2: PushEmpty()
0x7d3: Call2 0x797

0x7d4: Pop(0)
0x7d5: PushEmpty(string)
0x7d6: Stack[-1] = "Neutral" // @poff=89
0x7d7: Call2 0x951

0x7d8: Pop(1)
0x7d9: PushEmpty()
0x7da: Call2 0x78e

0x7db: Pop(0)
0x7dc: Return(); Pop(0)

0x7dd: PushEmpty()
0x7de: Push(Stack[-1])
0x7df: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e0: PushEmpty()
0x7e1: Call2 0x78e

0x7e2: Pop(0)
0x7e3: GOTO 0x7e8

0x7e4: PushEmpty(string)
0x7e5: Stack[-1] = "Neutral" // @poff=89
0x7e6: Call2 0x951

0x7e7: Pop(1)
0x7e8: Return(); Pop(0)

0x7e9: PushEmpty(bool, bool)
0x7ea: @ IsOverrideActive(Stack[-1])
0x7eb: Pop(0)
0x7ec: Pop(0); Push((bool) Stack[-1] == 0)
0x7ed: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7ee: EventDisable(0)
0x7ef: PushEmpty()
0x7f0: Call2 0x84d

0x7f1: Pop(0)
0x7f2: PushEmpty(bool, object)
0x7f3: Stack[-5] = Stack[-1]
0x7f4: Call2 0x864

0x7f5: Pop(2)
0x7f6: EventEnable(0)
0x7f7: PushEmpty(object)
0x7f8: Stack[-4] = Stack[-1]
0x7f9: Call2 0xaea

0x7fa: Pop(1)
0x7fb: PushEmpty(string)
0x7fc: Stack[-1] = "Neutral" // @poff=89
0x7fd: Call2 0x951

0x7fe: Pop(1)
0x7ff: PushEmpty()
0x800: Call2 0x797

0x801: Pop(0)
0x802: PushEmpty()
0x803: Call2 0x78e

0x804: Pop(0)
0x805: Return(); Pop(2)

0x806: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x807: @ WaitForAnimEnd()
0x808: Pop(0)
0x809: PushEmpty(bool)
0x80a: Call2 0x86d

0x80b: Pop(0)
0x80c: Pop(1); Push((bool) Stack[-1] == 0)
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: Return(); Pop(12)

0x80f: PushEmpty(int)
0x810: Call2 0x9d0

0x811: Stack[-1] = Stack[-7]
0x812: Pop(1)
0x813: Stack[-5] = (int) 0
0x814: PushEmpty(bool)
0x815: Stack[-1] = (bool) 0
0x816: Push((int) 5)
0x817: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x819: PushEmpty(bool)
0x81a: Call2 0x86d

0x81b: Pop(0)
0x81c: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81d: Stack[-1] = (bool) 1
0x81e: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x81f: Pop(0); Push((bool) Stack[-6] == 0)
0x820: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x821: Push((int) 3)
0x822: @ Sleep(Stack[-1], Stack[-5])
0x823: Pop(1)
0x824: Pop(0); Push((bool) Stack[-4] == 0)
0x825: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x826: GOTO 0x848

0x827: GOTO 0x83d

0x828: @ irand(Stack[-3], Stack[-6])
0x829: Pop(0)
0x82a: Push((int) 5)
0x82b: @ irand(Stack[-3], Stack[-1])
0x82c: Pop(1)
0x82d: Push((int) 0)
0x82e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x830: Stack[-3] = (int) 0
0x831: Push("all") // @poff=138
0x832: PushEmpty(string, int)
0x833: Stack[-6] = Stack[-1]
0x834: Call2 0x9c9

0x835: Pop(1)
0x836: @ PlayAnimation(Stack[-2], Stack[-1])
0x837: Pop(2)
0x838: @ WaitForAnimEnd(Stack[-1])
0x839: Pop(0)
0x83a: Pop(0); Push((bool) Stack[-1] == 0)
0x83b: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x83c: GOTO 0x848

0x83d: PushEmpty(bool)
0x83e: Call2 0x84b

0x83f: Pop(0)
0x840: Pop(1); Push((bool) Stack[-1] == 0)
0x841: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x842: GOTO 0x848

0x843: @ ResetAAS()
0x844: Pop(0)
0x845: Push((int) 1)
0x846: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x847: GOTO 0x814

0x848: @ ResetAAS()
0x849: Pop(0)
0x84a: Return(); Pop(12)

0x84b: Stack[-1] = (bool) 1
0x84c: Return(); Pop(0)

0x84d: @ StopAnimation()
0x84e: Pop(0)
0x84f: @ StopGroup0()
0x850: Pop(0)
0x851: Return(); Pop(0)

0x852: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x853: @ GetPosition(Stack[-3])
0x854: Pop(0)
0x855: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x856: Pop(0)
0x857: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x858: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x859: Return(); Pop(6)

0x85a: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x85b: @ GetPosition(Stack[-3])
0x85c: Pop(0)
0x85d: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x85e: Push(CvectorIndex(Stack[-2], 0))
0x85f: Push(CvectorIndex(Stack[-3], 2))
0x860: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x861: Pop(2)
0x862: Stack[-1] = Stack[-8]
0x863: Return(); Pop(6)

0x864: PushEmpty(cvector, cvector)
0x865: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x866: Pop(0)
0x867: PushEmpty(bool, cvector)
0x868: Stack[-3] = Stack[-1]
0x869: Call2 0x85a

0x86a: Stack[-2] = Stack[-6]
0x86b: Pop(2)
0x86c: Return(); Pop(2)

0x86d: PushEmpty(bool, bool)
0x86e: @ IsLoaded(Stack[-1])
0x86f: Pop(0)
0x870: Stack[-1] = Stack[-3]
0x871: Return(); Pop(2)

0x872: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x873: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x874: Pop(0)
0x875: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x876: Pop(0)
0x877: Push(CvectorIndex(Stack[-8], 1))
0x878: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x879: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x87a: @ GetPosition(Stack[-7])
0x87b: Pop(0)
0x87c: @ GetEyesHeight(Stack[-9])
0x87d: Pop(0)
0x87e: Push(CvectorIndex(Stack[-7], 1))
0x87f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x880: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x881: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x882: Push(CvectorIndex(Stack[-6], 1))
0x883: Stack[-1] = (int) 0
0x884: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x885: Pop(0); Push(Stack[-6] | Stack[-6]);
0x886: Pop(1); Push(Sqrt(Stack[-1]))
0x887: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x888: Stack[-5] = -Stack[-6]; Pop(0);
0x889: Pop(0); Push(Stack[-6] * Stack[-19]);
0x88a: PushEmpty(cvector, cvector)
0x88b: Push([0.0, 1.0, 0.0])
0x88c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x88d: Call2 0x97a

0x88e: Pop(1)
0x88f: Push((int) 25)
0x890: Pop(2); Push(Stack[-2] * Stack[-1]);
0x891: Pop(2); Push(Stack[-2] + Stack[-1]);
0x892: Push([0.0, 10.0, 0.0])
0x893: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x894: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x895: @ IsOverrideActive(Stack[-2])
0x896: Pop(0)
0x897: Push(Stack[-2])
0x898: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x899: Stack[-21] = (bool) 0
0x89a: Return(); Pop(18)

0x89b: @ StopWorld()
0x89c: Pop(0)
0x89d: @ CameraTransit(Stack[-3], Stack[-5])
0x89e: Pop(0)
0x89f: Push(CvectorIndex(Stack[-4], 0))
0x8a0: Push(CvectorIndex(Stack[-5], 2))
0x8a1: @ Rotate(Stack[-2], Stack[-1])
0x8a2: Pop(2)
0x8a3: PushEmpty(bool)
0x8a4: Call2 0xae8

0x8a5: Pop(0)
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a7: GOTO 0x8b0

0x8a8: Push("head") // @poff=196
0x8a9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8aa: Pop(1)
0x8ab: Push(Stack[-1])
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ad: Push("head") // @poff=196
0x8ae: @ LookAsyncCamera(Stack[-1])
0x8af: Pop(1)
0x8b0: @ CameraWaitForPlayFinish()
0x8b1: Pop(0)
0x8b2: @ ResumeWorld()
0x8b3: Pop(0)
0x8b4: Stack[-21] = (bool) 1
0x8b5: Return(); Pop(18)

0x8b6: PushEmpty(bool, bool)
0x8b7: @ CameraSwitchToNormal()
0x8b8: Pop(0)
0x8b9: PushEmpty(bool)
0x8ba: Call2 0xae8

0x8bb: Pop(0)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bd: GOTO 0x8c6

0x8be: Push("head") // @poff=196
0x8bf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8c0: Pop(1)
0x8c1: Push(Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c3: Push("head") // @poff=196
0x8c4: @ UnlookAsync(Stack[-1])
0x8c5: Pop(1)
0x8c6: Return(); Pop(2)

0x8c7: PushEmpty(int, int, int, int)
0x8c8: Push("voice_common") // @poff=206
0x8c9: @ GetVariable(Stack[-1], Stack[-3])
0x8ca: Pop(1)
0x8cb: Push(Stack[-2])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8cd: PushEmpty(bool, object)
0x8ce: Stack[-7] = Stack[-1]
0x8cf: Call2 0x901

0x8d0: Pop(1)
0x8d1: Pop(1); Push((bool) Stack[-1] == 0)
0x8d2: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d3: PushEmpty(bool, object)
0x8d4: Stack[-7] = Stack[-1]
0x8d5: Call2 0x926

0x8d6: Pop(1)
0x8d7: Pop(1); Push((bool) Stack[-1] == 0)
0x8d8: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d9: Stack[-6] = (bool) 0
0x8da: Return(); Pop(4)

0x8db: Push((int) 2)
0x8dc: @ irand(Stack[-2], Stack[-1])
0x8dd: Pop(1)
0x8de: Push(Stack[-1])
0x8df: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e0: Push("voice_common") // @poff=206
0x8e1: Push((int) 1)
0x8e2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8e3: Push((int) 3)
0x8e4: Pop(2); Push(Stack[-2] % Stack[-1]);
0x8e5: @ SetVariable(Stack[-2], Stack[-1])
0x8e6: Pop(2)
0x8e7: GOTO 0x8ec

0x8e8: Push("voice_common") // @poff=206
0x8e9: Push((int) 0)
0x8ea: @ SetVariable(Stack[-2], Stack[-1])
0x8eb: Pop(2)
0x8ec: GOTO 0x8ff

0x8ed: PushEmpty(bool, object)
0x8ee: Stack[-7] = Stack[-1]
0x8ef: Call2 0x926

0x8f0: Pop(1)
0x8f1: Pop(1); Push((bool) Stack[-1] == 0)
0x8f2: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f3: PushEmpty(bool, object)
0x8f4: Stack[-7] = Stack[-1]
0x8f5: Call2 0x901

0x8f6: Pop(1)
0x8f7: Pop(1); Push((bool) Stack[-1] == 0)
0x8f8: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f9: Stack[-6] = (bool) 0
0x8fa: Return(); Pop(4)

0x8fb: Push("voice_common") // @poff=206
0x8fc: Push((int) 1)
0x8fd: @ SetVariable(Stack[-2], Stack[-1])
0x8fe: Pop(2)
0x8ff: Stack[-6] = (bool) 1
0x900: Return(); Pop(4)

0x901: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x902: Stack[-5] = "c" // @poff=232
0x903: Stack[-4] = (int) 0
0x904: Push((int) 1)
0x905: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x906: Push((int) 1)
0x907: Pop(1); Push(Stack[-5] + Stack[-1]);
0x908: Pop(1); Push(Stack[-6] + Stack[-1]);
0x909: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x90a: Pop(1)
0x90b: Pop(0); Push((bool) Stack[-3] == 0)
0x90c: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x90d: GOTO 0x911

0x90e: Push((int) 1)
0x90f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x910: GOTO 0x904

0x911: Pop(0); Push((bool) Stack[-4] == 0)
0x912: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x913: Stack[-12] = (bool) 0
0x914: Return(); Pop(10)

0x915: Stack[-2] = (int) 0
0x916: Push((int) 1)
0x917: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x919: @ irand(Stack[-2], Stack[-4])
0x91a: Pop(0)
0x91b: Push((int) 1)
0x91c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x91d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x91e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x91f: Pop(1)
0x920: PushEmpty(bool, string)
0x921: Stack[-3] = Stack[-1]
0x922: Call2 0x95e

0x923: Stack[-2] = Stack[-14]
0x924: Pop(2)
0x925: Return(); Pop(10)

0x926: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x927: Push("d") // @poff=202
0x928: PushEmpty(int)
0x929: Call2 0x9ba

0x92a: Pop(0)
0x92b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x92c: Push("m") // @poff=260
0x92d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x92e: Stack[-4] = (int) 0
0x92f: Push((int) 1)
0x930: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x931: Push((int) 1)
0x932: Pop(1); Push(Stack[-5] + Stack[-1]);
0x933: Pop(1); Push(Stack[-6] + Stack[-1]);
0x934: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x935: Pop(1)
0x936: Pop(0); Push((bool) Stack[-3] == 0)
0x937: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x938: GOTO 0x93c

0x939: Push((int) 1)
0x93a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x93b: GOTO 0x92f

0x93c: Pop(0); Push((bool) Stack[-4] == 0)
0x93d: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93e: Stack[-12] = (bool) 0
0x93f: Return(); Pop(10)

0x940: Stack[-2] = (int) 0
0x941: Push((int) 1)
0x942: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x944: @ irand(Stack[-2], Stack[-4])
0x945: Pop(0)
0x946: Push((int) 1)
0x947: Pop(1); Push(Stack[-3] + Stack[-1]);
0x948: Pop(1); Push(Stack[-6] + Stack[-1]);
0x949: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x94a: Pop(1)
0x94b: PushEmpty(bool, string)
0x94c: Stack[-3] = Stack[-1]
0x94d: Call2 0x95e

0x94e: Stack[-2] = Stack[-14]
0x94f: Pop(2)
0x950: Return(); Pop(10)

0x951: PushEmpty(float, float, float, float)
0x952: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x953: Pop(0)
0x954: Push((bool) 0)
0x955: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x956: Pop(1)
0x957: Return(); Pop(4)

0x958: PushEmpty(float, float, float, float)
0x959: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x95a: Pop(0)
0x95b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x95c: Pop(0)
0x95d: Return(); Pop(4)

0x95e: PushEmpty(bool, bool)
0x95f: PushEmpty(bool)
0x960: Call2 0xae8

0x961: Pop(0)
0x962: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x963: @ lshHasSpeech(Stack[-1], Stack[-3])
0x964: Pop(0)
0x965: Push(Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x967: @ lshPlaySpeech(Stack[-3])
0x968: Pop(0)
0x969: Stack[-4] = (bool) 1
0x96a: Return(); Pop(2)

0x96b: Stack[-4] = (bool) 0
0x96c: Return(); Pop(2)

0x96d: PushEmpty(bool)
0x96e: Call2 0xae8

0x96f: Pop(0)
0x970: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x971: @ lshStopSpeech()
0x972: Pop(0)
0x973: Return(); Pop(0)

0x974: PushEmpty(object, object)
0x975: @ self(Stack[-1])
0x976: Pop(0)
0x977: Stack[-1] = Stack[-3]
0x978: Return(); Pop(2)

0x979: Stack[-1] = 0
0x97a: PushEmpty(float, float)
0x97b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x97c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x97d: Push((float)9.999999974752427e-07)
0x97e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x980: Stack[-4] = [0.0, 0.0, 0.0]
0x981: Return(); Pop(2)

0x982: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x983: Return(); Pop(2)

0x984: PushEmpty(int, int)
0x985: @ GetVariable(Stack[-3], Stack[-1])
0x986: Pop(0)
0x987: Stack[-1] = Stack[-4]
0x988: Return(); Pop(2)

0x989: PushEmpty(object, object)
0x98a: @ CreateIntVector(Stack[-1])
0x98b: Pop(0)
0x98c: @@ add(Stack[-4]); Obj=1 // @poff=264
0x98d: Pop(0)
0x98e: @@ add(Stack[-3]); Obj=1 // @poff=264
0x98f: Pop(0)
0x990: Push((int) 3)
0x991: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x992: Pop(1)
0x993: Return(); Pop(2)

0x994: Stack[-1] = 0
0x995: PushEmpty(int, int, bool, int, int, bool)
0x996: @@ GetItemID(Stack[-3]); Obj=8 // @poff=268
0x997: Pop(0)
0x998: Push("Category") // @poff=278
0x999: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x99a: Pop(1)
0x99b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=296
0x99c: Pop(0)
0x99d: Pop(0); Push((bool) Stack[-1] == 0)
0x99e: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99f: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=304
0x9a0: Pop(0)
0x9a1: GOTO 0x9a7

0x9a2: PushEmpty(int, int)
0x9a3: Stack[-5] = Stack[-2]
0x9a4: Stack[-9] = Stack[-1]
0x9a5: Call2 0x989

0x9a6: Pop(2)
0x9a7: Return(); Pop(6)

0x9a8: PushEmpty(object, object)
0x9a9: @ CreateInvItem(Stack[-1])
0x9aa: Pop(0)
0x9ab: @@ SetItemName(Stack[-4]); Obj=1 // @poff=314
0x9ac: Pop(0)
0x9ad: PushEmpty(object, object, int)
0x9ae: Stack[-8] = Stack[-3]
0x9af: Stack[-4] = Stack[-2]
0x9b0: Stack[-6] = Stack[-1]
0x9b1: Call2 0x995

0x9b2: Pop(3)
0x9b3: Return(); Pop(2)

0x9b4: Stack[-1] = 0
0x9b5: PushEmpty(float, float)
0x9b6: @ GetGameTime(Stack[-1])
0x9b7: Pop(0)
0x9b8: Stack[-1] = Stack[-3]
0x9b9: Return(); Pop(2)

0x9ba: PushEmpty(float, float)
0x9bb: @ GetGameTime(Stack[-1])
0x9bc: Pop(0)
0x9bd: Push((int) 1)
0x9be: PushEmpty(int)
0x9bf: Push((int) 24)
0x9c0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x9c1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9c2: Return(); Pop(2)

0x9c3: PushEmpty()
0x9c4: PushEmpty(int)
0x9c5: Call2 0x9ba

0x9c6: Pop(0)
0x9c7: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9c8: Return(); Pop(0)

0x9c9: PushEmpty(string, string)
0x9ca: Stack[-1] = "idle" // @poff=146
0x9cb: Push(Stack[-3])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cd: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9ce: Stack[-1] = Stack[-4]
0x9cf: Return(); Pop(2)

0x9d0: PushEmpty(int, bool, int, bool)
0x9d1: Stack[-2] = (int) 0
0x9d2: Push("all") // @poff=138
0x9d3: PushEmpty(string, int)
0x9d4: Stack[-5] = Stack[-1]
0x9d5: Call2 0x9c9

0x9d6: Pop(1)
0x9d7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9d8: Pop(2)
0x9d9: Pop(0); Push((bool) Stack[-1] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9db: GOTO 0x9df

0x9dc: Push((int) 1)
0x9dd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9de: GOTO 0x9d2

0x9df: Stack[-2] = Stack[-5]
0x9e0: Return(); Pop(4)

0x9e1: PushEmpty()
0x9e2: Push("k1q03") // @poff=326
0x9e3: Push((int) 2)
0x9e4: @ SetVariable(Stack[-2], Stack[-1])
0x9e5: Pop(2)
0x9e6: PushEmpty()
0x9e7: Call2 0xa5a

0x9e8: Pop(0)
0x9e9: Return(); Pop(0)

0x9ea: PushEmpty()
0x9eb: Push("k4q01") // @poff=338
0x9ec: Push((int) 3)
0x9ed: @ SetVariable(Stack[-2], Stack[-1])
0x9ee: Pop(2)
0x9ef: PushEmpty()
0x9f0: Call2 0xa67

0x9f1: Pop(0)
0x9f2: Return(); Pop(0)

0x9f3: PushEmpty()
0x9f4: Push("k10q01KnowAboutRubin") // @poff=350
0x9f5: Push((int) 1)
0x9f6: @ SetVariable(Stack[-2], Stack[-1])
0x9f7: Pop(2)
0x9f8: Return(); Pop(0)

0x9f9: PushEmpty(object, object)
0x9fa: PushEmpty(object)
0x9fb: Call2 0xa9d

0x9fc: Stack[-1] = Stack[-2]
0x9fd: Pop(1)
0x9fe: Push("k10q01NotkinGotoRubin") // @poff=392
0x9ff: Push("pt_map_rubin") // @poff=436
0xa00: Push((int) 3)
0xa01: Push((int) 530195)
0xa02: PushEmpty(float)
0xa03: Call2 0x9b5

0xa04: Pop(0)
0xa05: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=462
0xa06: Pop(5)
0xa07: Return(); Pop(2)

0xa08: Stack[-1] = 0
0xa09: PushEmpty()
0xa0a: Push("playsound") // @poff=470
0xa0b: Push("giveitem") // @poff=490
0xa0c: @ TriggerWorld(Stack[-2], Stack[-1])
0xa0d: Pop(2)
0xa0e: Return(); Pop(0)

0xa0f: PushEmpty()
0xa10: Push("Gun is given") // @poff=508
0xa11: @ Trace(Stack[-1])
0xa12: Pop(1)
0xa13: PushEmpty(object, string, int)
0xa14: Stack[-5] = Stack[-3]
0xa15: Stack[-2] = "Gun" // @poff=534
0xa16: Stack[-1] = (int) 1
0xa17: Call2 0x9a8

0xa18: Pop(3)
0xa19: Return(); Pop(0)

0xa1a: PushEmpty()
0xa1b: PushEmpty(object, string, float)
0xa1c: PushEmpty(object)
0xa1d: Call2 0xa9d

0xa1e: Stack[-1] = Stack[-4]
0xa1f: Pop(1)
0xa20: Stack[-2] = "pt_map_rubin" // @poff=436
0xa21: Stack[-1] = (int) 2
0xa22: Call2 0xaae

0xa23: Pop(3)
0xa24: PushEmpty(object)
0xa25: Call2 0xa9d

0xa26: Pop(0)
0xa27: @@ ShowMap(Stack[-1]); Obj=2 // @poff=542
0xa28: Pop(1)
0xa29: Return(); Pop(0)

0xa2a: PushEmpty()
0xa2b: PushEmpty(int, string)
0xa2c: Stack[-1] = "k1q01DobermanDead" // @poff=550
0xa2d: Call2 0x984

0xa2e: Pop(1)
0xa2f: Push((int) 0)
0xa30: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa32: Stack[-2] = (bool) 1
0xa33: Return(); Pop(0)

0xa34: Stack[-2] = (bool) 0
0xa35: Return(); Pop(0)

0xa36: PushEmpty()
0xa37: PushEmpty(int, string)
0xa38: Stack[-1] = "k1q03" // @poff=326
0xa39: Call2 0x984

0xa3a: Pop(1)
0xa3b: Push((int) 1)
0xa3c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3e: Stack[-2] = (bool) 1
0xa3f: Return(); Pop(0)

0xa40: Stack[-2] = (bool) 0
0xa41: Return(); Pop(0)

0xa42: PushEmpty()
0xa43: PushEmpty(int, string)
0xa44: Stack[-1] = "k4q01" // @poff=338
0xa45: Call2 0x984

0xa46: Pop(1)
0xa47: Push((int) 2)
0xa48: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa49: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa4a: Stack[-2] = (bool) 1
0xa4b: Return(); Pop(0)

0xa4c: Stack[-2] = (bool) 0
0xa4d: Return(); Pop(0)

0xa4e: PushEmpty()
0xa4f: PushEmpty(int, string)
0xa50: Stack[-1] = "k10q01KnowAboutRubin" // @poff=350
0xa51: Call2 0x984

0xa52: Pop(1)
0xa53: Push((int) 0)
0xa54: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa55: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa56: Stack[-2] = (bool) 1
0xa57: Return(); Pop(0)

0xa58: Stack[-2] = (bool) 0
0xa59: Return(); Pop(0)

0xa5a: PushEmpty(object, object)
0xa5b: Push((int) 335)
0xa5c: Push((int) 2)
0xa5d: Push((int) 524802)
0xa5e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa5f: Pop(3)
0xa60: PushEmpty(bool, object, int)
0xa61: Stack[-4] = Stack[-2]
0xa62: Stack[-1] = (int) 333
0xa63: Call2 0xa81

0xa64: Pop(3)
0xa65: Return(); Pop(2)

0xa66: Stack[-1] = 0
0xa67: PushEmpty(object, object)
0xa68: Push((int) 371)
0xa69: Push((int) 1)
0xa6a: Push((int) 525728)
0xa6b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa6c: Pop(3)
0xa6d: PushEmpty(bool, object, int)
0xa6e: Stack[-4] = Stack[-2]
0xa6f: Stack[-1] = (int) 368
0xa70: Call2 0xa81

0xa71: Pop(3)
0xa72: Return(); Pop(2)

0xa73: Stack[-1] = 0
0xa74: PushEmpty(object, object)
0xa75: @ GetDiaryRoot(Stack[-1])
0xa76: Pop(0)
0xa77: Pop(0); Push((bool) Stack[-1] == 0)
0xa78: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa79: Push("Can't retrieve diary root") // @poff=586
0xa7a: @ Trace(Stack[-1])
0xa7b: Pop(1)
0xa7c: Stack[-3] = (bool) 0
0xa7d: Return(); Pop(2)

0xa7e: Stack[-1] = Stack[-3]
0xa7f: Return(); Pop(2)

0xa80: Stack[-1] = 0
0xa81: PushEmpty(object, object, int, object, object, int)
0xa82: PushEmpty(object)
0xa83: Call2 0xa74

0xa84: Stack[-1] = Stack[-4]
0xa85: Pop(1)
0xa86: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=638
0xa87: Pop(0)
0xa88: Pop(0); Push((bool) Stack[-2] == 0)
0xa89: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8a: Push("Can't find diary parent with id: ") // @poff=643
0xa8b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa8c: @ Trace(Stack[-1])
0xa8d: Pop(1)
0xa8e: Stack[-9] = (bool) 0
0xa8f: Return(); Pop(6)

0xa90: @@ AddChild(Stack[-8]); Obj=2 // @poff=711
0xa91: Pop(0)
0xa92: Push((int) 7)
0xa93: @ SendWorldWndMessage(Stack[-1])
0xa94: Pop(1)
0xa95: @@ GetCategory(Stack[-1]); Obj=8 // @poff=720
0xa96: Pop(0)
0xa97: @ SetDiarySection(Stack[-1])
0xa98: Pop(0)
0xa99: Stack[-9] = (bool) 0
0xa9a: Return(); Pop(6)

0xa9b: Stack[-2] = 0
0xa9c: Stack[-3] = 0
0xa9d: PushEmpty(object, object, object, object)
0xa9e: @ GetMainOutdoorScene(Stack[-2])
0xa9f: Pop(0)
0xaa0: Pop(0); PushNull((bool) Stack[-2] == 0)
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xaa2: Push("Can't find main outdoor scene") // @poff=732
0xaa3: @ Trace(Stack[-1])
0xaa4: Pop(1)
0xaa5: Stack[-1] = 0
0xaa6: Stack[-1] = Stack[-5]
0xaa7: Return(); Pop(4)

0xaa8: @@ GetMap(Stack[-1]); Obj=2 // @poff=792
0xaa9: Pop(0)
0xaaa: Stack[-1] = Stack[-5]
0xaab: Return(); Pop(4)

0xaac: Stack[-1] = 0
0xaad: Stack[-2] = 0
0xaae: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xaaf: @ GetMainOutdoorScene(Stack[-2])
0xab0: Pop(0)
0xab1: Pop(0); PushNull((bool) Stack[-2] == 0)
0xab2: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab3: Push("Can't find main outdoor scene") // @poff=732
0xab4: @ Trace(Stack[-1])
0xab5: Pop(1)
0xab6: Return(); Pop(8)

0xab7: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=799
0xab8: Pop(0)
0xab9: Pop(0); Push((bool) Stack[-1] == 0)
0xaba: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xabb: Push("Warning: outdoor scene locator ") // @poff=810
0xabc: Pop(1); Push(Stack[-1] + Stack[-11]);
0xabd: Push(" doesnt exist") // @poff=874
0xabe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xabf: @ Trace(Stack[-1])
0xac0: Pop(1)
0xac1: @@ GetMap(Stack[-11]); Obj=2 // @poff=792
0xac2: Pop(0)
0xac3: Pop(0); PushNull((bool) Stack[-11] == 0)
0xac4: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac5: Push("Can't find map") // @poff=902
0xac6: @ Trace(Stack[-1])
0xac7: Pop(1)
0xac8: Return(); Pop(8)

0xac9: Push(CvectorIndex(Stack[-4], 0))
0xaca: Push(CvectorIndex(Stack[-5], 2))
0xacb: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=932
0xacc: Pop(2)
0xacd: Return(); Pop(8)

0xace: Stack[-2] = 0
0xacf: PushEmpty(int, int)
0xad0: Push("branch") // @poff=945
0xad1: @ GetVariable(Stack[-1], Stack[-2])
0xad2: Pop(1)
0xad3: Push((int) 0)
0xad4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad5: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad6: Stack[-3] = (int) 1
0xad7: Return(); Pop(2)

0xad8: GOTO 0xade

0xad9: Push((int) 1)
0xada: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadc: Stack[-3] = (int) 2
0xadd: Return(); Pop(2)

0xade: Stack[-3] = (int) 3
0xadf: Return(); Pop(2)

0xae0: Stack[-1] = (int) 515548
0xae1: Return(); Pop(0)

0xae2: Stack[-1] = (int) 502873
0xae3: Return(); Pop(0)

0xae4: Stack[-1] = "ui/NPC_Notkin.png" // @poff=959
0xae5: Return(); Pop(0)

0xae6: Stack[-1] = "ui/NPC_Notkin_b.png" // @poff=995
0xae7: Return(); Pop(0)

0xae8: Stack[-1] = (bool) 1
0xae9: Return(); Pop(0)

0xaea: PushEmpty()
0xaeb: Push(GlobalVars[1])
0xaec: Pop(1); Push((bool) Stack[-1] == 0)
0xaed: IF (Stack[-1] == 0) GOTO 0xaf7; Pop(1)

0xaee: PushEmpty(int, object)
0xaef: Stack[-3] = Stack[-1]
0xaf0: Push(-2, 1); TaskCall(3)
0xaf1: Call2 0x1fa

0xaf2: Pop(-2, 1); TaskReturn
0xaf3: Pop(2)
0xaf4: Push(GlobalVars[1])
0xaf5: Stack[-1] = (bool) 1
0xaf6: GlobalVars[1] = Stack[-1]; Pop(1)
0xaf7: PushEmpty(bool, int)
0xaf8: Stack[-1] = (int) 1
0xaf9: Call2 0x9c3

0xafa: Pop(1)
0xafb: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xafc: PushEmpty(int, object)
0xafd: Stack[-3] = Stack[-1]
0xafe: Push(-2, 1); TaskCall(1)
0xaff: Call2 0xd

0xb00: Pop(-2, 1); TaskReturn
0xb01: Pop(2)
0xb02: Return(); Pop(0)

0xb03: PushEmpty(bool, int)
0xb04: Stack[-1] = (int) 4
0xb05: Call2 0x9c3

0xb06: Pop(1)
0xb07: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb08: PushEmpty(int, object)
0xb09: Stack[-3] = Stack[-1]
0xb0a: Push(-2, 1); TaskCall(5)
0xb0b: Call2 0x2c5

0xb0c: Pop(-2, 1); TaskReturn
0xb0d: Pop(2)
0xb0e: Return(); Pop(0)

0xb0f: PushEmpty(bool, int)
0xb10: Stack[-1] = (int) 10
0xb11: Call2 0x9c3

0xb12: Pop(1)
0xb13: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb14: PushEmpty(int, object)
0xb15: Stack[-3] = Stack[-1]
0xb16: Push(-2, 1); TaskCall(7)
0xb17: Call2 0x3dd

0xb18: Pop(-2, 1); TaskReturn
0xb19: Pop(2)
0xb1a: Return(); Pop(0)

0xb1b: PushEmpty(bool, int)
0xb1c: Stack[-1] = (int) 12
0xb1d: Call2 0x9c3

0xb1e: Pop(1)
0xb1f: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb20: PushEmpty(int, object)
0xb21: Stack[-3] = Stack[-1]
0xb22: Push(-2, 1); TaskCall(9)
0xb23: Call2 0x57b

0xb24: Pop(-2, 1); TaskReturn
0xb25: Pop(2)
0xb26: Return(); Pop(0)

0xb27: PushEmpty(int, object)
0xb28: Stack[-3] = Stack[-1]
0xb29: Push(-2, 1); TaskCall(11)
0xb2a: Call2 0x67e

0xb2b: Pop(-2, 1); TaskReturn
0xb2c: Pop(2)
0xb2d: Return(); Pop(0)

