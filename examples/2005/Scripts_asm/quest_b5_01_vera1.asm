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
	A:GetEyesHeight
	W:b5q01TalkToVera
	W:b5q01PlaceButchers
	W:b5q01GathererWife
	W:pt_gatherer3
	A:AddMark
	W:quest_b5_01
	W:place_butchers
	W:oob5Vera1_1
	W:b5q01VeraGotoStvorki
	W:pt_b5q01_vera
	W:vera_stvorki
	W:oob5Vera1_2
	A:ShowMap
	W:b5q01
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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740062003500710030003100540061006c006b0054006f00560065007200610000006200350071003000310050006c00610063006500420075007400630068006500720073000000620035007100300031004700610074006800650072006500720057006900660065000000700074005f0067006100740068006500720065007200330000004164644d61726b00710075006500730074005f00620035005f0030003100000070006c006100630065005f006200750074006300680065007200730000006f006f0062003500560065007200610031005f003100000062003500710030003100560065007200610047006f0074006f005300740076006f0072006b0069000000700074005f00620035007100300031005f007600650072006100000076006500720061005f007300740076006f0072006b00690000006f006f0062003500560065007200610031005f003200000053686f774d617000620035007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x263
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x269 Vars = (object)
		EVENT_26 Op = 0x2a1 Vars = (string)
		EVENT_5 Op = 0x2a9 Vars = ()
		EVENT_6 Op = 0x2ae Vars = ()
		EVENT_7 Op = 0x2ed Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x375

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x559

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x557

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x55b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x55d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x546

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
0x41: Call2 0x3b9

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
0x4f: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0xa5

0x53: Pop(1)
0x54: Push((int) 518626)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool)
0x5c: Stack[-1] = (bool) 0
0x5d: PushEmpty(bool, object)
0x5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Call2 0x4a5

0x60: Pop(1)
0x61: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x4b1

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x67: Stack[-1] = (bool) 1
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x49b

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 518627)
0x71: Push((int) 19969)
0x72: Push((int) 19719)
0x73: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x74: Pop(3)
0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x4bd

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7a: Push((int) 518857)
0x7b: Push((int) 19965)
0x7c: Push((int) 19964)
0x7d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7e: Pop(3)
0x7f: Push((int) 518632)
0x80: Push((int) -1)
0x81: Push((int) 19724)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x4e

0x87: PushEmpty(bool)
0x88: Call2 0x55f

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x3ca

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all") // @poff=138
0x97: Push("idle") // @poff=146
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all") // @poff=138
0xa0: Push("idle") // @poff=146
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x55f

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-3] = Stack[-2]
0xb1: Push("") // @poff=102
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x3d1

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x3e2

0xc0: Pop(0)
0xc1: Push((int) 19719)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x455

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x42f

0xcd: Pop(2)
0xce: Push((int) 19992)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x435

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x45b

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x476

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x47b

0xe4: Pop(2)
0xe5: Push((int) 19723)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x435

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x45b

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x476

0xf6: Pop(2)
0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x48b

0xfb: Pop(2)
0xfc: Push((int) 19990)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x435

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x45b

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x476

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x47b

0x112: Pop(2)
0x113: Push((int) 19989)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x435

0x11a: Pop(2)
0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x45b

0x11f: Pop(2)
0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x47b

0x124: Pop(2)
0x125: Push((int) 19964)
0x126: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12b: Call2 0x470

0x12c: Pop(2)
0x12d: Push((int) 19718)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral" // @poff=89
0x132: Call2 0xa5

0x133: Pop(1)
0x134: Push((int) 518626)
0x135: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x136: Pop(1)
0x137: @@@ ClearReplies(); Obj=0 // @poff=116
0x138: Pop(0)
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0x4a5

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x4b1

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x49b

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 1
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 518627)
0x151: Push((int) 19969)
0x152: Push((int) 19719)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x154: Pop(3)
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x4bd

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: Push((int) 518857)
0x15b: Push((int) 19965)
0x15c: Push((int) 19964)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Push((int) 518632)
0x160: Push((int) -1)
0x161: Push((int) 19724)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 19965)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral" // @poff=89
0x16a: Call2 0xa5

0x16b: Pop(1)
0x16c: Push((int) 518858)
0x16d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16e: Pop(1)
0x16f: @@@ ClearReplies(); Obj=0 // @poff=116
0x170: Pop(0)
0x171: Push((int) 518859)
0x172: Push((int) 19967)
0x173: Push((int) 19966)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 19967)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral" // @poff=89
0x17c: Call2 0xa5

0x17d: Pop(1)
0x17e: Push((int) 518860)
0x17f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x180: Pop(1)
0x181: @@@ ClearReplies(); Obj=0 // @poff=116
0x182: Pop(0)
0x183: Push((int) 518861)
0x184: Push((int) -1)
0x185: Push((int) 19968)
0x186: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 19969)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Neutral" // @poff=89
0x18e: Call2 0xa5

0x18f: Pop(1)
0x190: Push((int) 518862)
0x191: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x192: Pop(1)
0x193: @@@ ClearReplies(); Obj=0 // @poff=116
0x194: Pop(0)
0x195: Push((int) 518863)
0x196: Push((int) 19971)
0x197: Push((int) 19970)
0x198: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x199: Pop(3)
0x19a: Push((int) 518865)
0x19b: Push((int) 19973)
0x19c: Push((int) 19972)
0x19d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 19973)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral" // @poff=89
0x1a5: Call2 0xa5

0x1a6: Pop(1)
0x1a7: Push((int) 518866)
0x1a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a9: Pop(1)
0x1aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ab: Pop(0)
0x1ac: Push((int) 518868)
0x1ad: Push((int) 19978)
0x1ae: Push((int) 19975)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 19971)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral" // @poff=89
0x1b7: Call2 0xa5

0x1b8: Pop(1)
0x1b9: Push((int) 518864)
0x1ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bb: Pop(1)
0x1bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bd: Pop(0)
0x1be: Push((int) 518867)
0x1bf: Push((int) 19976)
0x1c0: Push((int) 19974)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 19976)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral" // @poff=89
0x1c9: Call2 0xa5

0x1ca: Pop(1)
0x1cb: Push((int) 518869)
0x1cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cd: Pop(1)
0x1ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cf: Pop(0)
0x1d0: Push((int) 518870)
0x1d1: Push((int) 19978)
0x1d2: Push((int) 19977)
0x1d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 19978)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral" // @poff=89
0x1db: Call2 0xa5

0x1dc: Pop(1)
0x1dd: Push((int) 518871)
0x1de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1df: Pop(1)
0x1e0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e1: Pop(0)
0x1e2: Push((int) 518872)
0x1e3: Push((int) 19982)
0x1e4: Push((int) 19980)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Push((int) 518873)
0x1e8: Push((int) 19982)
0x1e9: Push((int) 19981)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 19982)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral" // @poff=89
0x1f2: Call2 0xa5

0x1f3: Pop(1)
0x1f4: Push((int) 518874)
0x1f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f6: Pop(1)
0x1f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f8: Pop(0)
0x1f9: Push((int) 518875)
0x1fa: Push((int) 19985)
0x1fb: Push((int) 19984)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 19985)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral" // @poff=89
0x204: Call2 0xa5

0x205: Pop(1)
0x206: Push((int) 518876)
0x207: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x208: Pop(1)
0x209: @@@ ClearReplies(); Obj=0 // @poff=116
0x20a: Pop(0)
0x20b: Push((int) 518877)
0x20c: Push((int) 19987)
0x20d: Push((int) 19986)
0x20e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20f: Pop(3)
0x210: Push((int) 518880)
0x211: Push((int) -1)
0x212: Push((int) 19989)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 19987)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral" // @poff=89
0x21b: Call2 0xa5

0x21c: Pop(1)
0x21d: Push((int) 518878)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=116
0x221: Pop(0)
0x222: Push((int) 518879)
0x223: Push((int) 19991)
0x224: Push((int) 19988)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Push((int) 518881)
0x228: Push((int) -1)
0x229: Push((int) 19990)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 19991)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=89
0x232: Call2 0xa5

0x233: Pop(1)
0x234: Push((int) 518882)
0x235: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x236: Pop(1)
0x237: @@@ ClearReplies(); Obj=0 // @poff=116
0x238: Pop(0)
0x239: Push((int) 518883)
0x23a: Push((int) -1)
0x23b: Push((int) 19992)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Push((int) 518884)
0x23f: Push((int) 19994)
0x240: Push((int) 19993)
0x241: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 19994)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral" // @poff=89
0x249: Call2 0xa5

0x24a: Pop(1)
0x24b: Push((int) 518885)
0x24c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24d: Pop(1)
0x24e: @@@ ClearReplies(); Obj=0 // @poff=116
0x24f: Pop(0)
0x250: Push((int) 518631)
0x251: Push((int) -1)
0x252: Push((int) 19723)
0x253: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x257: PushEmpty(bool)
0x258: Call2 0x55f

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25b: @ lshStopAnimation()
0x25c: Pop(0)
0x25d: GOTO 0x260

0x25e: @ StopAnimation()
0x25f: Pop(0)
0x260: Return(); Pop(0)

0x261: GOTO 0xbc

0x262: Return(); Pop(0)

0x263: PushEmpty(float, float)
0x264: Stack[-2] = (int) 300
0x265: Stack[-1] = (int) 100
0x266: Call2 0x274

0x267: Pop(2)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: PushEmpty()
0x26b: Call2 0x304

0x26c: Pop(0)
0x26d: PushEmpty(int, object)
0x26e: Stack[-3] = Stack[-1]
0x26f: Push(-2, 1); TaskCall(0)
0x270: Call2 0x0

0x271: Pop(-2, 1); TaskReturn
0x272: Pop(2)
0x273: Return(); Pop(0)

0x274: PushEmpty(float, float)
0x275: PushEmpty(bool)
0x276: Call2 0x370

0x277: Pop(0)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27a: @ Hold()
0x27b: Pop(0)
0x27c: GOTO 0x275

0x27d: Push((int) 3)
0x27e: @ rand(Stack[-2], Stack[-1])
0x27f: Pop(1)
0x280: Push((int) 3)
0x281: Pop(1); Push(Stack[-2] + Stack[-1]);
0x282: @ Sleep(Stack[-1])
0x283: Pop(1)
0x284: PushEmpty(float, float)
0x285: Stack[-6] = Stack[-2]
0x286: Stack[-5] = Stack[-1]
0x287: Call2 0x2c3

0x288: Pop(2)
0x289: @ sync()
0x28a: Pop(0)
0x28b: GOTO 0x275

0x28c: Return(); Pop(2)

0x28d: PushEmpty(bool, bool)
0x28e: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x28f: @ IsLoaded(Stack[-1])
0x290: Pop(0)
0x291: PushEmpty(bool)
0x292: Stack[-1] = (bool) 0
0x293: Pop(0); Push((bool) Stack[-2] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x295: PushEmpty(bool)
0x296: Call2 0x2c1

0x297: Pop(0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Stack[-1] = (bool) 1
0x29a: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29b: PushEmpty(object)
0x29c: Call2 0x3e9

0x29d: Pop(0)
0x29e: @ RemoveActor(Stack[-1])
0x29f: Pop(1)
0x2a0: Return(); Pop(2)

0x2a1: PushEmpty()
0x2a2: Push("cleanup") // @poff=156
0x2a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a5: PushEmpty()
0x2a6: Call2 0x28d

0x2a7: Pop(0)
0x2a8: Return(); Pop(0)

0x2a9: @ StopGroup0()
0x2aa: Pop(0)
0x2ab: @ sync()
0x2ac: Pop(0)
0x2ad: Return(); Pop(0)

0x2ae: PushEmpty()
0x2af: Call2 0x304

0x2b0: Pop(0)
0x2b1: PushEmpty(bool)
0x2b2: Stack[-1] = (bool) 0
0x2b3: Push( Stack[5 + Tasks[-1].StackPointer] )
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b5: PushEmpty(bool)
0x2b6: Call2 0x2c1

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Stack[-1] = (bool) 1
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: PushEmpty(object)
0x2bc: Call2 0x3e9

0x2bd: Pop(0)
0x2be: @ RemoveActor(Stack[-1])
0x2bf: Pop(1)
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = (bool) 1
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: PushEmpty(bool)
0x2c5: Call2 0x370

0x2c6: Pop(0)
0x2c7: Pop(1); Push((bool) Stack[-1] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Return(); Pop(0)

0x2ca: Push("player") // @poff=172
0x2cb: @ FindActor(Stack[-4]T, Stack[-1])
0x2cc: Pop(1)
0x2cd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ce: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2d0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2d1: Push((int) 10)
0x2d2: Push((float)1.0)
0x2d3: @ SetTimer(Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: PushEmpty()
0x2d6: Call2 0x312

0x2d7: Pop(0)
0x2d8: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: Push((int) 10)
0x2db: @ KillTimer(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(0)

0x2de: PushEmpty(float, float)
0x2df: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: Stack[-3] = (bool) 0
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(float, object)
0x2e4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2e5: Call2 0x368

0x2e6: Pop(1)
0x2e7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2eb: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2ec: Return(); Pop(2)

0x2ed: PushEmpty()
0x2ee: Push((int) 10)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2f1: PushEmpty(bool)
0x2f2: Call2 0x2de

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: PushEmpty(object)
0x2f8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2f9: Call2 0x3d7

0x2fa: Pop(1)
0x2fb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2fc: GOTO 0x303

0x2fd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2fe: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2ff: Push("head") // @poff=186
0x300: @ UnlookAsync(Stack[-1])
0x301: Pop(1)
0x302: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x303: Return(); Pop(0)

0x304: PushEmpty()
0x305: Call2 0x363

0x306: Pop(0)
0x307: Push((int) 10)
0x308: @ KillTimer(Stack[-1])
0x309: Pop(1)
0x30a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x30b: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30c: Push("head") // @poff=186
0x30d: @ UnlookAsync(Stack[-1])
0x30e: Pop(1)
0x30f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x310: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x311: Return(); Pop(0)

0x312: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x313: @ WaitForAnimEnd()
0x314: Pop(0)
0x315: PushEmpty(bool)
0x316: Call2 0x370

0x317: Pop(0)
0x318: Pop(1); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: Return(); Pop(14)

0x31b: PushEmpty(int)
0x31c: Call2 0x41e

0x31d: Stack[-1] = Stack[-8]
0x31e: Pop(1)
0x31f: Stack[-6] = (int) 0
0x320: PushEmpty(bool)
0x321: Stack[-1] = (bool) 0
0x322: Push((int) 5)
0x323: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: PushEmpty(bool)
0x326: Call2 0x370

0x327: Pop(0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: Stack[-1] = (bool) 1
0x32a: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x32b: Push((int) 3)
0x32c: @ irand(Stack[-6], Stack[-1])
0x32d: Pop(1)
0x32e: Push((int) 0)
0x32f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x331: Push(Stack[-7])
0x332: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x333: @ irand(Stack[-4], Stack[-7])
0x334: Pop(0)
0x335: Push("all") // @poff=138
0x336: PushEmpty(string, int)
0x337: Stack[-7] = Stack[-1]
0x338: Call2 0x417

0x339: Pop(1)
0x33a: @ PlayAnimation(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: @ WaitForAnimEnd(Stack[-3])
0x33d: Pop(0)
0x33e: Pop(0); Push((bool) Stack[-3] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: GOTO 0x35e

0x341: GOTO 0x353

0x342: Push((int) 1)
0x343: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x345: Push((int) 4)
0x346: @ rand(Stack[-3], Stack[-1])
0x347: Pop(1)
0x348: Push((int) 1)
0x349: Pop(1); Push(Stack[-3] + Stack[-1]);
0x34a: @ Sleep(Stack[-1], Stack[-2])
0x34b: Pop(1)
0x34c: Pop(0); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x35e

0x34f: GOTO 0x353

0x350: Push(Stack[-6])
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: GOTO 0x35e

0x353: PushEmpty(bool)
0x354: Call2 0x361

0x355: Pop(0)
0x356: Pop(1); Push((bool) Stack[-1] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x35e

0x359: @ ResetAAS()
0x35a: Pop(0)
0x35b: Push((int) 1)
0x35c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x35d: GOTO 0x320

0x35e: @ ResetAAS()
0x35f: Pop(0)
0x360: Return(); Pop(14)

0x361: Stack[-1] = (bool) 1
0x362: Return(); Pop(0)

0x363: @ StopAnimation()
0x364: Pop(0)
0x365: @ StopGroup0()
0x366: Pop(0)
0x367: Return(); Pop(0)

0x368: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x369: @ GetPosition(Stack[-3])
0x36a: Pop(0)
0x36b: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x36c: Pop(0)
0x36d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x36e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x36f: Return(); Pop(6)

0x370: PushEmpty(bool, bool)
0x371: @ IsLoaded(Stack[-1])
0x372: Pop(0)
0x373: Stack[-1] = Stack[-3]
0x374: Return(); Pop(2)

0x375: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x376: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x377: Pop(0)
0x378: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x379: Pop(0)
0x37a: Push(CvectorIndex(Stack[-8], 1))
0x37b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x37c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x37d: @ GetPosition(Stack[-7])
0x37e: Pop(0)
0x37f: @ GetEyesHeight(Stack[-9])
0x380: Pop(0)
0x381: Push(CvectorIndex(Stack[-7], 1))
0x382: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x383: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x384: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x385: Push(CvectorIndex(Stack[-6], 1))
0x386: Stack[-1] = (int) 0
0x387: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x388: Pop(0); Push(Stack[-6] | Stack[-6]);
0x389: Pop(1); Push(Sqrt(Stack[-1]))
0x38a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x38b: Stack[-5] = -Stack[-6]; Pop(0);
0x38c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x38d: PushEmpty(cvector, cvector)
0x38e: Push([0.0, 1.0, 0.0])
0x38f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x390: Call2 0x3ef

0x391: Pop(1)
0x392: Push((int) 25)
0x393: Pop(2); Push(Stack[-2] * Stack[-1]);
0x394: Pop(2); Push(Stack[-2] + Stack[-1]);
0x395: Push([0.0, 10.0, 0.0])
0x396: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x397: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x398: @ IsOverrideActive(Stack[-2])
0x399: Pop(0)
0x39a: Push(Stack[-2])
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-21] = (bool) 0
0x39d: Return(); Pop(18)

0x39e: @ StopWorld()
0x39f: Pop(0)
0x3a0: @ CameraTransit(Stack[-3], Stack[-5])
0x3a1: Pop(0)
0x3a2: Push(CvectorIndex(Stack[-4], 0))
0x3a3: Push(CvectorIndex(Stack[-5], 2))
0x3a4: @ Rotate(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: PushEmpty(bool)
0x3a7: Call2 0x55f

0x3a8: Pop(0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: GOTO 0x3b3

0x3ab: Push("head") // @poff=186
0x3ac: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ad: Pop(1)
0x3ae: Push(Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b0: Push("head") // @poff=186
0x3b1: @ LookAsyncCamera(Stack[-1])
0x3b2: Pop(1)
0x3b3: @ CameraWaitForPlayFinish()
0x3b4: Pop(0)
0x3b5: @ ResumeWorld()
0x3b6: Pop(0)
0x3b7: Stack[-21] = (bool) 1
0x3b8: Return(); Pop(18)

0x3b9: PushEmpty(bool, bool)
0x3ba: @ CameraSwitchToNormal()
0x3bb: Pop(0)
0x3bc: PushEmpty(bool)
0x3bd: Call2 0x55f

0x3be: Pop(0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c0: GOTO 0x3c9

0x3c1: Push("head") // @poff=186
0x3c2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c3: Pop(1)
0x3c4: Push(Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c6: Push("head") // @poff=186
0x3c7: @ UnlookAsync(Stack[-1])
0x3c8: Pop(1)
0x3c9: Return(); Pop(2)

0x3ca: PushEmpty(float, float, float, float)
0x3cb: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3cc: Pop(0)
0x3cd: Push((bool) 0)
0x3ce: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(1)
0x3d0: Return(); Pop(4)

0x3d1: PushEmpty(float, float, float, float)
0x3d2: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3d3: Pop(0)
0x3d4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3d5: Pop(0)
0x3d6: Return(); Pop(4)

0x3d7: PushEmpty(float, cvector, float, cvector)
0x3d8: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x3d9: Pop(0)
0x3da: Stack[-1] = [0.0, 0.0, 0.0]
0x3db: Push(CvectorIndex(Stack[-1], 1))
0x3dc: Stack[-3] = Stack[-1]
0x3dd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3de: Push("head") // @poff=186
0x3df: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3e0: Pop(1)
0x3e1: Return(); Pop(4)

0x3e2: PushEmpty(bool)
0x3e3: Call2 0x55f

0x3e4: Pop(0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: @ lshStopSpeech()
0x3e7: Pop(0)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty(object, object)
0x3ea: @ self(Stack[-1])
0x3eb: Pop(0)
0x3ec: Stack[-1] = Stack[-3]
0x3ed: Return(); Pop(2)

0x3ee: Stack[-1] = 0
0x3ef: PushEmpty(float, float)
0x3f0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3f1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3f2: Push((float)9.999999974752427e-07)
0x3f3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-4] = [0.0, 0.0, 0.0]
0x3f6: Return(); Pop(2)

0x3f7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3f8: Return(); Pop(2)

0x3f9: PushEmpty(int, int)
0x3fa: @ GetVariable(Stack[-3], Stack[-1])
0x3fb: Pop(0)
0x3fc: Stack[-1] = Stack[-4]
0x3fd: Return(); Pop(2)

0x3fe: PushEmpty(object, object)
0x3ff: @ FindActor(Stack[-1], Stack[-4])
0x400: Pop(0)
0x401: Pop(0); PushNull((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-5] = (bool) 0
0x404: Return(); Pop(2)

0x405: @ Trigger(Stack[-1], Stack[-3])
0x406: Pop(0)
0x407: Stack[-5] = (bool) 1
0x408: Return(); Pop(2)

0x409: Stack[-1] = 0
0x40a: PushEmpty(float, float)
0x40b: @ GetGameTime(Stack[-1])
0x40c: Pop(0)
0x40d: Stack[-1] = Stack[-3]
0x40e: Return(); Pop(2)

0x40f: PushEmpty(float, float)
0x410: @ GetGameTime(Stack[-1])
0x411: Pop(0)
0x412: PushEmpty(int)
0x413: Stack[-2] = Stack[-1]
0x414: Push((int) 24)
0x415: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x416: Return(); Pop(2)

0x417: PushEmpty(string, string)
0x418: Stack[-1] = "idle" // @poff=146
0x419: Push(Stack[-3])
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x41c: Stack[-1] = Stack[-4]
0x41d: Return(); Pop(2)

0x41e: PushEmpty(int, bool, int, bool)
0x41f: Stack[-2] = (int) 0
0x420: Push("all") // @poff=138
0x421: PushEmpty(string, int)
0x422: Stack[-5] = Stack[-1]
0x423: Call2 0x417

0x424: Pop(1)
0x425: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: Pop(0); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: GOTO 0x42d

0x42a: Push((int) 1)
0x42b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x42c: GOTO 0x420

0x42d: Stack[-2] = Stack[-5]
0x42e: Return(); Pop(4)

0x42f: PushEmpty()
0x430: Push("b5q01TalkToVera") // @poff=222
0x431: Push((int) 1)
0x432: @ SetVariable(Stack[-2], Stack[-1])
0x433: Pop(2)
0x434: Return(); Pop(0)

0x435: PushEmpty(object, object)
0x436: PushEmpty(int, string)
0x437: Stack[-1] = "b5q01PlaceButchers" // @poff=254
0x438: Call2 0x3f9

0x439: Pop(1)
0x43a: Push((int) 0)
0x43b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x43d: Push("b5q01PlaceButchers") // @poff=254
0x43e: Push((int) 1)
0x43f: @ SetVariable(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: PushEmpty(object)
0x442: Call2 0x514

0x443: Stack[-1] = Stack[-2]
0x444: Pop(1)
0x445: Push("b5q01GathererWife") // @poff=292
0x446: Push("pt_gatherer3") // @poff=328
0x447: Push((int) 1)
0x448: Push((int) 530181)
0x449: PushEmpty(float)
0x44a: Call2 0x40a

0x44b: Pop(0)
0x44c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=354
0x44d: Pop(5)
0x44e: PushEmpty(bool, string, string)
0x44f: Stack[-2] = "quest_b5_01" // @poff=362
0x450: Stack[-1] = "place_butchers" // @poff=386
0x451: Call2 0x3fe

0x452: Pop(3)
0x453: Stack[-1] = 0
0x454: Return(); Pop(2)

0x455: PushEmpty()
0x456: Push("oob5Vera1_1") // @poff=416
0x457: Push((int) 1)
0x458: @ SetVariable(Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: Return(); Pop(0)

0x45b: PushEmpty(object, object)
0x45c: PushEmpty(object)
0x45d: Call2 0x514

0x45e: Stack[-1] = Stack[-2]
0x45f: Pop(1)
0x460: Push("b5q01VeraGotoStvorki") // @poff=440
0x461: Push("pt_b5q01_vera") // @poff=482
0x462: Push((int) 1)
0x463: Push((int) 519747)
0x464: PushEmpty(float)
0x465: Call2 0x40a

0x466: Pop(0)
0x467: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=354
0x468: Pop(5)
0x469: PushEmpty(bool, string, string)
0x46a: Stack[-2] = "quest_b5_01" // @poff=362
0x46b: Stack[-1] = "vera_stvorki" // @poff=510
0x46c: Call2 0x3fe

0x46d: Pop(3)
0x46e: Return(); Pop(2)

0x46f: Stack[-1] = 0
0x470: PushEmpty()
0x471: Push("oob5Vera1_2") // @poff=536
0x472: Push((int) 1)
0x473: @ SetVariable(Stack[-2], Stack[-1])
0x474: Pop(2)
0x475: Return(); Pop(0)

0x476: PushEmpty()
0x477: PushEmpty()
0x478: Call2 0x4de

0x479: Pop(0)
0x47a: Return(); Pop(0)

0x47b: PushEmpty()
0x47c: PushEmpty(object, string, float)
0x47d: PushEmpty(object)
0x47e: Call2 0x514

0x47f: Stack[-1] = Stack[-4]
0x480: Pop(1)
0x481: Stack[-2] = "pt_gatherer3" // @poff=328
0x482: Stack[-1] = (int) 2
0x483: Call2 0x525

0x484: Pop(3)
0x485: PushEmpty(object)
0x486: Call2 0x514

0x487: Pop(0)
0x488: @@ ShowMap(Stack[-1]); Obj=2 // @poff=560
0x489: Pop(1)
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: PushEmpty(object, string, float)
0x48d: PushEmpty(object)
0x48e: Call2 0x514

0x48f: Stack[-1] = Stack[-4]
0x490: Pop(1)
0x491: Stack[-2] = "pt_b5q01_vera" // @poff=482
0x492: Stack[-1] = (int) 2
0x493: Call2 0x525

0x494: Pop(3)
0x495: PushEmpty(object)
0x496: Call2 0x514

0x497: Pop(0)
0x498: @@ ShowMap(Stack[-1]); Obj=2 // @poff=560
0x499: Pop(1)
0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: PushEmpty(bool, object)
0x49d: Stack[-3] = Stack[-1]
0x49e: Call2 0x4c9

0x49f: Pop(1)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-2] = (bool) 1
0x4a2: Return(); Pop(0)

0x4a3: Stack[-2] = (bool) 0
0x4a4: Return(); Pop(0)

0x4a5: PushEmpty()
0x4a6: PushEmpty(int, string)
0x4a7: Stack[-1] = "b5q01" // @poff=568
0x4a8: Call2 0x3f9

0x4a9: Pop(1)
0x4aa: Push((int) 1)
0x4ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-2] = (bool) 1
0x4ae: Return(); Pop(0)

0x4af: Stack[-2] = (bool) 0
0x4b0: Return(); Pop(0)

0x4b1: PushEmpty()
0x4b2: PushEmpty(int, string)
0x4b3: Stack[-1] = "oob5Vera1_1" // @poff=416
0x4b4: Call2 0x3f9

0x4b5: Pop(1)
0x4b6: Push((int) 0)
0x4b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-2] = (bool) 1
0x4ba: Return(); Pop(0)

0x4bb: Stack[-2] = (bool) 0
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: PushEmpty(int, string)
0x4bf: Stack[-1] = "oob5Vera1_2" // @poff=536
0x4c0: Call2 0x3f9

0x4c1: Pop(1)
0x4c2: Push((int) 0)
0x4c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-2] = (bool) 1
0x4c6: Return(); Pop(0)

0x4c7: Stack[-2] = (bool) 0
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty()
0x4ca: PushEmpty(bool)
0x4cb: Stack[-1] = (bool) 0
0x4cc: PushEmpty(int)
0x4cd: Call2 0x40f

0x4ce: Pop(0)
0x4cf: Push((int) 0)
0x4d0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d2: PushEmpty(int)
0x4d3: Call2 0x40f

0x4d4: Pop(0)
0x4d5: Push((int) 20)
0x4d6: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: Stack[-1] = (bool) 1
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4da: Stack[-2] = (bool) 1
0x4db: Return(); Pop(0)

0x4dc: Stack[-2] = (bool) 0
0x4dd: Return(); Pop(0)

0x4de: PushEmpty(object, object)
0x4df: Push((int) 389)
0x4e0: Push((int) 1)
0x4e1: Push((int) 525828)
0x4e2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e3: Pop(3)
0x4e4: PushEmpty(bool, object, int)
0x4e5: Stack[-4] = Stack[-2]
0x4e6: Stack[-1] = (int) 238
0x4e7: Call2 0x4f8

0x4e8: Pop(3)
0x4e9: Return(); Pop(2)

0x4ea: Stack[-1] = 0
0x4eb: PushEmpty(object, object)
0x4ec: @ GetDiaryRoot(Stack[-1])
0x4ed: Pop(0)
0x4ee: Pop(0); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f0: Push("Can't retrieve diary root") // @poff=580
0x4f1: @ Trace(Stack[-1])
0x4f2: Pop(1)
0x4f3: Stack[-3] = (bool) 0
0x4f4: Return(); Pop(2)

0x4f5: Stack[-1] = Stack[-3]
0x4f6: Return(); Pop(2)

0x4f7: Stack[-1] = 0
0x4f8: PushEmpty(object, object, int, object, object, int)
0x4f9: PushEmpty(object)
0x4fa: Call2 0x4eb

0x4fb: Stack[-1] = Stack[-4]
0x4fc: Pop(1)
0x4fd: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=632
0x4fe: Pop(0)
0x4ff: Pop(0); Push((bool) Stack[-2] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x501: Push("Can't find diary parent with id: ") // @poff=637
0x502: Pop(1); Push(Stack[-1] + Stack[-8]);
0x503: @ Trace(Stack[-1])
0x504: Pop(1)
0x505: Stack[-9] = (bool) 0
0x506: Return(); Pop(6)

0x507: @@ AddChild(Stack[-8]); Obj=2 // @poff=705
0x508: Pop(0)
0x509: Push((int) 7)
0x50a: @ SendWorldWndMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=714
0x50d: Pop(0)
0x50e: @ SetDiarySection(Stack[-1])
0x50f: Pop(0)
0x510: Stack[-9] = (bool) 0
0x511: Return(); Pop(6)

0x512: Stack[-2] = 0
0x513: Stack[-3] = 0
0x514: PushEmpty(object, object, object, object)
0x515: @ GetMainOutdoorScene(Stack[-2])
0x516: Pop(0)
0x517: Pop(0); PushNull((bool) Stack[-2] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x519: Push("Can't find main outdoor scene") // @poff=726
0x51a: @ Trace(Stack[-1])
0x51b: Pop(1)
0x51c: Stack[-1] = 0
0x51d: Stack[-1] = Stack[-5]
0x51e: Return(); Pop(4)

0x51f: @@ GetMap(Stack[-1]); Obj=2 // @poff=786
0x520: Pop(0)
0x521: Stack[-1] = Stack[-5]
0x522: Return(); Pop(4)

0x523: Stack[-1] = 0
0x524: Stack[-2] = 0
0x525: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x526: @ GetMainOutdoorScene(Stack[-2])
0x527: Pop(0)
0x528: Pop(0); PushNull((bool) Stack[-2] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52a: Push("Can't find main outdoor scene") // @poff=726
0x52b: @ Trace(Stack[-1])
0x52c: Pop(1)
0x52d: Return(); Pop(8)

0x52e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=793
0x52f: Pop(0)
0x530: Pop(0); Push((bool) Stack[-1] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x532: Push("Warning: outdoor scene locator ") // @poff=804
0x533: Pop(1); Push(Stack[-1] + Stack[-11]);
0x534: Push(" doesnt exist") // @poff=868
0x535: Pop(2); Push(Stack[-2] + Stack[-1]);
0x536: @ Trace(Stack[-1])
0x537: Pop(1)
0x538: @@ GetMap(Stack[-11]); Obj=2 // @poff=786
0x539: Pop(0)
0x53a: Pop(0); PushNull((bool) Stack[-11] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53c: Push("Can't find map") // @poff=896
0x53d: @ Trace(Stack[-1])
0x53e: Pop(1)
0x53f: Return(); Pop(8)

0x540: Push(CvectorIndex(Stack[-4], 0))
0x541: Push(CvectorIndex(Stack[-5], 2))
0x542: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=926
0x543: Pop(2)
0x544: Return(); Pop(8)

0x545: Stack[-2] = 0
0x546: PushEmpty(int, int)
0x547: Push("branch") // @poff=939
0x548: @ GetVariable(Stack[-1], Stack[-2])
0x549: Pop(1)
0x54a: Push((int) 0)
0x54b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54d: Stack[-3] = (int) 1
0x54e: Return(); Pop(2)

0x54f: GOTO 0x555

0x550: Push((int) 1)
0x551: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x553: Stack[-3] = (int) 2
0x554: Return(); Pop(2)

0x555: Stack[-3] = (int) 3
0x556: Return(); Pop(2)

0x557: Stack[-1] = (int) 515593
0x558: Return(); Pop(0)

0x559: Stack[-1] = (int) 512582
0x55a: Return(); Pop(0)

0x55b: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=953
0x55c: Return(); Pop(0)

0x55d: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=993
0x55e: Return(); Pop(0)

0x55f: Stack[-1] = (bool) 0
0x560: Return(); Pop(0)

