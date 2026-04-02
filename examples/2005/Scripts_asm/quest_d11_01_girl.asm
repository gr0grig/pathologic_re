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
	W:pt_map_uprava_admin
	A:ShowMap
	W:ood11Nude1
	W:d11q01
	W:d11q01NudeGotoRastrel
	W:pt_d11q01_msoldier
	A:AddMark
	W:d11q01NudeGotoBlock
	W:quest_d11_01
	W:init_soldiers
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
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000700074005f006d00610070005f007500700072006100760061005f00610064006d0069006e00000053686f774d6170006f006f006400310031004e007500640065003100000064003100310071003000310000006400310031007100300031004e0075006400650047006f0074006f005200610073007400720065006c000000700074005f006400310031007100300031005f006d0073006f006c00640069006500720000004164644d61726b006400310031007100300031004e0075006400650047006f0074006f0042006c006f0063006b000000710075006500730074005f006400310031005f0030003100000069006e00690074005f0073006f006c00640069006500720073000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1e2
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc1 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1da Vars = (object)
		EVENT_26 Op = 0x1e6 Vars = (string)
		EVENT_6 Op = 0x202 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x214

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x371

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x373

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x375

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35e

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
0x41: Call2 0x258

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
0x4f: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x2de

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x2ea

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x2b3

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral" // @poff=89
0x65: Call2 0xab

0x66: Pop(1)
0x67: Push((int) 514421)
0x68: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x69: Pop(1)
0x6a: @@@ ClearReplies(); Obj=0 // @poff=116
0x6b: Pop(0)
0x6c: Push((int) 514422)
0x6d: Push((int) 15648)
0x6e: Push((int) 15647)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: Push((int) 514443)
0x72: Push((int) 15650)
0x73: Push((int) 15670)
0x74: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75: Pop(3)
0x76: GOTO 0x8d

0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral" // @poff=89
0x79: Call2 0xab

0x7a: Pop(1)
0x7b: Push((int) 514502)
0x7c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7d: Pop(1)
0x7e: @@@ ClearReplies(); Obj=0 // @poff=116
0x7f: Pop(0)
0x80: Push((int) 514503)
0x81: Push((int) -1)
0x82: Push((int) 15740)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: Push((int) 534053)
0x86: Push((int) -1)
0x87: Push((int) 35635)
0x88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x4e

0x8d: PushEmpty(bool)
0x8e: Call2 0x377

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call2 0x269

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all") // @poff=138
0xa6: Push("idle") // @poff=146
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call2 0x377

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string, bool)
0xb6: Stack[-3] = Stack[-2]
0xb7: Push("") // @poff=102
0xb8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-1] = (bool) 0
0xbb: GOTO 0xbd

0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0x270

0xbe: Pop(2)
0xbf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: Push((int) 1)
0xc3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0xc4: PushEmpty()
0xc5: Call2 0x276

0xc6: Pop(0)
0xc7: Push((int) 15659)
0xc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x2b9

0xce: Pop(2)
0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x2a3

0xd3: Pop(2)
0xd4: Push((int) 15660)
0xd5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0x2b9

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x2a3

0xe0: Pop(2)
0xe1: Push((int) 15646)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 0
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0x2de

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0x2ea

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 1
0xf1: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x2b3

0xf6: Pop(2)
0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0xab

0xfa: Pop(1)
0xfb: Push((int) 514421)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: Push((int) 514422)
0x101: Push((int) 15648)
0x102: Push((int) 15647)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Push((int) 514443)
0x106: Push((int) 15650)
0x107: Push((int) 15670)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral" // @poff=89
0x10d: Call2 0xab

0x10e: Pop(1)
0x10f: Push((int) 514502)
0x110: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x111: Pop(1)
0x112: @@@ ClearReplies(); Obj=0 // @poff=116
0x113: Pop(0)
0x114: Push((int) 514503)
0x115: Push((int) -1)
0x116: Push((int) 15740)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Push((int) 534053)
0x11a: Push((int) -1)
0x11b: Push((int) 35635)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 15648)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral" // @poff=89
0x124: Call2 0xab

0x125: Pop(1)
0x126: Push((int) 514423)
0x127: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x128: Pop(1)
0x129: @@@ ClearReplies(); Obj=0 // @poff=116
0x12a: Pop(0)
0x12b: Push((int) 514424)
0x12c: Push((int) 15650)
0x12d: Push((int) 15649)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Push((int) 514440)
0x131: Push((int) 15667)
0x132: Push((int) 15666)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 15667)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0xab

0x13c: Pop(1)
0x13d: Push((int) 514441)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 514442)
0x143: Push((int) 15650)
0x144: Push((int) 15668)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 15650)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=89
0x14d: Call2 0xab

0x14e: Pop(1)
0x14f: Push((int) 514425)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=116
0x153: Pop(0)
0x154: Push((int) 514426)
0x155: Push((int) 15652)
0x156: Push((int) 15651)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 514436)
0x15a: Push((int) 15662)
0x15b: Push((int) 15661)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 15662)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0xab

0x165: Pop(1)
0x166: Push((int) 514437)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 514438)
0x16c: Push((int) 15652)
0x16d: Push((int) 15663)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 514439)
0x171: Push((int) 15652)
0x172: Push((int) 15665)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 15652)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0xab

0x17c: Pop(1)
0x17d: Push((int) 514427)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 514428)
0x183: Push((int) 15654)
0x184: Push((int) 15653)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Push((int) 534052)
0x188: Push((int) 15658)
0x189: Push((int) 35633)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 15654)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0xab

0x193: Pop(1)
0x194: Push((int) 514429)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 514430)
0x19a: Push((int) 15656)
0x19b: Push((int) 15655)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Push((int) 540067)
0x19f: Push((int) 15658)
0x1a0: Push((int) 42030)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 15656)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0xab

0x1aa: Pop(1)
0x1ab: Push((int) 514431)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 514432)
0x1b1: Push((int) 15658)
0x1b2: Push((int) 15657)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 15658)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral" // @poff=89
0x1bb: Call2 0xab

0x1bc: Pop(1)
0x1bd: Push((int) 514433)
0x1be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bf: Pop(1)
0x1c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c1: Pop(0)
0x1c2: Push((int) 514434)
0x1c3: Push((int) -1)
0x1c4: Push((int) 15659)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Push((int) 514435)
0x1c8: Push((int) -1)
0x1c9: Push((int) 15660)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ce: PushEmpty(bool)
0x1cf: Call2 0x377

0x1d0: Pop(0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d2: @ lshStopAnimation()
0x1d3: Pop(0)
0x1d4: GOTO 0x1d7

0x1d5: @ StopAnimation()
0x1d6: Pop(0)
0x1d7: Return(); Pop(0)

0x1d8: GOTO 0xc2

0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: PushEmpty(int, object)
0x1dc: Stack[-3] = Stack[-1]
0x1dd: Push(-2, 1); TaskCall(0)
0x1de: Call2 0x0

0x1df: Pop(-2, 1); TaskReturn
0x1e0: Pop(2)
0x1e1: Return(); Pop(0)

0x1e2: @ Hold()
0x1e3: Pop(0)
0x1e4: GOTO 0x1e2

0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(bool, bool)
0x1e7: Push("cleanup") // @poff=156
0x1e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1ea: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1eb: @ IsLoaded(Stack[-1])
0x1ec: Pop(0)
0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 0
0x1ef: Pop(0); Push((bool) Stack[-2] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f1: PushEmpty(bool)
0x1f2: Call2 0x212

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = (bool) 1
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: PushEmpty(object)
0x1f8: Call2 0x27d

0x1f9: Pop(0)
0x1fa: @ RemoveActor(Stack[-1])
0x1fb: Pop(1)
0x1fc: GOTO 0x201

0x1fd: Push("restore") // @poff=172
0x1fe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x201: Return(); Pop(2)

0x202: PushEmpty(bool)
0x203: Stack[-1] = (bool) 0
0x204: Push( Stack[0 + Tasks[-1].StackPointer] )
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x212

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: PushEmpty(object)
0x20d: Call2 0x27d

0x20e: Pop(0)
0x20f: @ RemoveActor(Stack[-1])
0x210: Pop(1)
0x211: Return(); Pop(0)

0x212: Stack[-1] = (bool) 1
0x213: Return(); Pop(0)

0x214: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x215: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x216: Pop(0)
0x217: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x218: Pop(0)
0x219: Push(CvectorIndex(Stack[-8], 1))
0x21a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x21c: @ GetPosition(Stack[-7])
0x21d: Pop(0)
0x21e: @ GetEyesHeight(Stack[-9])
0x21f: Pop(0)
0x220: Push(CvectorIndex(Stack[-7], 1))
0x221: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x222: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x223: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x224: Push(CvectorIndex(Stack[-6], 1))
0x225: Stack[-1] = (int) 0
0x226: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x227: Pop(0); Push(Stack[-6] | Stack[-6]);
0x228: Pop(1); Push(Sqrt(Stack[-1]))
0x229: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x22a: Stack[-5] = -Stack[-6]; Pop(0);
0x22b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x22c: PushEmpty(cvector, cvector)
0x22d: Push([0.0, 1.0, 0.0])
0x22e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22f: Call2 0x283

0x230: Pop(1)
0x231: Push((int) 25)
0x232: Pop(2); Push(Stack[-2] * Stack[-1]);
0x233: Pop(2); Push(Stack[-2] + Stack[-1]);
0x234: Push([0.0, 10.0, 0.0])
0x235: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x236: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x237: @ IsOverrideActive(Stack[-2])
0x238: Pop(0)
0x239: Push(Stack[-2])
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-21] = (bool) 0
0x23c: Return(); Pop(18)

0x23d: @ StopWorld()
0x23e: Pop(0)
0x23f: @ CameraTransit(Stack[-3], Stack[-5])
0x240: Pop(0)
0x241: Push(CvectorIndex(Stack[-4], 0))
0x242: Push(CvectorIndex(Stack[-5], 2))
0x243: @ Rotate(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: PushEmpty(bool)
0x246: Call2 0x377

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x252

0x24a: Push("head") // @poff=214
0x24b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24c: Pop(1)
0x24d: Push(Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24f: Push("head") // @poff=214
0x250: @ LookAsyncCamera(Stack[-1])
0x251: Pop(1)
0x252: @ CameraWaitForPlayFinish()
0x253: Pop(0)
0x254: @ ResumeWorld()
0x255: Pop(0)
0x256: Stack[-21] = (bool) 1
0x257: Return(); Pop(18)

0x258: PushEmpty(bool, bool)
0x259: @ CameraSwitchToNormal()
0x25a: Pop(0)
0x25b: PushEmpty(bool)
0x25c: Call2 0x377

0x25d: Pop(0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x268

0x260: Push("head") // @poff=214
0x261: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x262: Pop(1)
0x263: Push(Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x265: Push("head") // @poff=214
0x266: @ UnlookAsync(Stack[-1])
0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(float, float, float, float)
0x26a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x26b: Pop(0)
0x26c: Push((bool) 0)
0x26d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(1)
0x26f: Return(); Pop(4)

0x270: PushEmpty(float, float, float, float)
0x271: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x272: Pop(0)
0x273: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x274: Pop(0)
0x275: Return(); Pop(4)

0x276: PushEmpty(bool)
0x277: Call2 0x377

0x278: Pop(0)
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: @ lshStopSpeech()
0x27b: Pop(0)
0x27c: Return(); Pop(0)

0x27d: PushEmpty(object, object)
0x27e: @ self(Stack[-1])
0x27f: Pop(0)
0x280: Stack[-1] = Stack[-3]
0x281: Return(); Pop(2)

0x282: Stack[-1] = 0
0x283: PushEmpty(float, float)
0x284: Pop(0); Push(Stack[-3] | Stack[-3]);
0x285: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x286: Push((float)9.999999974752427e-07)
0x287: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-4] = [0.0, 0.0, 0.0]
0x28a: Return(); Pop(2)

0x28b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x28c: Return(); Pop(2)

0x28d: PushEmpty(int, int)
0x28e: @ GetVariable(Stack[-3], Stack[-1])
0x28f: Pop(0)
0x290: Stack[-1] = Stack[-4]
0x291: Return(); Pop(2)

0x292: PushEmpty(object, object)
0x293: @ FindActor(Stack[-1], Stack[-4])
0x294: Pop(0)
0x295: Pop(0); PushNull((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-5] = (bool) 0
0x298: Return(); Pop(2)

0x299: @ Trigger(Stack[-1], Stack[-3])
0x29a: Pop(0)
0x29b: Stack[-5] = (bool) 1
0x29c: Return(); Pop(2)

0x29d: Stack[-1] = 0
0x29e: PushEmpty(float, float)
0x29f: @ GetGameTime(Stack[-1])
0x2a0: Pop(0)
0x2a1: Stack[-1] = Stack[-3]
0x2a2: Return(); Pop(2)

0x2a3: PushEmpty()
0x2a4: PushEmpty(object, string, float)
0x2a5: PushEmpty(object)
0x2a6: Call2 0x32c

0x2a7: Stack[-1] = Stack[-4]
0x2a8: Pop(1)
0x2a9: Stack[-2] = "pt_map_uprava_admin" // @poff=224
0x2aa: Stack[-1] = (int) 2
0x2ab: Call2 0x33d

0x2ac: Pop(3)
0x2ad: PushEmpty(object)
0x2ae: Call2 0x32c

0x2af: Pop(0)
0x2b0: @@ ShowMap(Stack[-1]); Obj=2 // @poff=264
0x2b1: Pop(1)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: Push("ood11Nude1") // @poff=272
0x2b5: Push((int) 1)
0x2b6: @ SetVariable(Stack[-2], Stack[-1])
0x2b7: Pop(2)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty(object, object)
0x2ba: Push("d11q01") // @poff=294
0x2bb: Push((int) 2)
0x2bc: @ SetVariable(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: PushEmpty(object)
0x2bf: Call2 0x32c

0x2c0: Stack[-1] = Stack[-2]
0x2c1: Pop(1)
0x2c2: Push("d11q01NudeGotoRastrel") // @poff=308
0x2c3: Push("pt_d11q01_msoldier") // @poff=352
0x2c4: Push((int) 1)
0x2c5: Push((int) 515482)
0x2c6: PushEmpty(float)
0x2c7: Call2 0x29e

0x2c8: Pop(0)
0x2c9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=390
0x2ca: Pop(5)
0x2cb: Push("d11q01NudeGotoBlock") // @poff=398
0x2cc: Push("pt_map_uprava_admin") // @poff=224
0x2cd: Push((int) 1)
0x2ce: Push((int) 515305)
0x2cf: PushEmpty(float)
0x2d0: Call2 0x29e

0x2d1: Pop(0)
0x2d2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=390
0x2d3: Pop(5)
0x2d4: PushEmpty()
0x2d5: Call2 0x2f6

0x2d6: Pop(0)
0x2d7: PushEmpty(bool, string, string)
0x2d8: Stack[-2] = "quest_d11_01" // @poff=438
0x2d9: Stack[-1] = "init_soldiers" // @poff=464
0x2da: Call2 0x292

0x2db: Pop(3)
0x2dc: Return(); Pop(2)

0x2dd: Stack[-1] = 0
0x2de: PushEmpty()
0x2df: PushEmpty(int, string)
0x2e0: Stack[-1] = "d11q01" // @poff=294
0x2e1: Call2 0x28d

0x2e2: Pop(1)
0x2e3: Push((int) 1)
0x2e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-2] = (bool) 1
0x2e7: Return(); Pop(0)

0x2e8: Stack[-2] = (bool) 0
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: PushEmpty(int, string)
0x2ec: Stack[-1] = "ood11Nude1" // @poff=272
0x2ed: Call2 0x28d

0x2ee: Pop(1)
0x2ef: Push((int) 0)
0x2f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-2] = (bool) 1
0x2f3: Return(); Pop(0)

0x2f4: Stack[-2] = (bool) 0
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty(object, object)
0x2f7: Push((int) 194)
0x2f8: Push((int) 1)
0x2f9: Push((int) 515479)
0x2fa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: PushEmpty(bool, object, int)
0x2fd: Stack[-4] = Stack[-2]
0x2fe: Stack[-1] = (int) 192
0x2ff: Call2 0x310

0x300: Pop(3)
0x301: Return(); Pop(2)

0x302: Stack[-1] = 0
0x303: PushEmpty(object, object)
0x304: @ GetDiaryRoot(Stack[-1])
0x305: Pop(0)
0x306: Pop(0); Push((bool) Stack[-1] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: Push("Can't retrieve diary root") // @poff=492
0x309: @ Trace(Stack[-1])
0x30a: Pop(1)
0x30b: Stack[-3] = (bool) 0
0x30c: Return(); Pop(2)

0x30d: Stack[-1] = Stack[-3]
0x30e: Return(); Pop(2)

0x30f: Stack[-1] = 0
0x310: PushEmpty(object, object, int, object, object, int)
0x311: PushEmpty(object)
0x312: Call2 0x303

0x313: Stack[-1] = Stack[-4]
0x314: Pop(1)
0x315: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=544
0x316: Pop(0)
0x317: Pop(0); Push((bool) Stack[-2] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x319: Push("Can't find diary parent with id: ") // @poff=549
0x31a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x31b: @ Trace(Stack[-1])
0x31c: Pop(1)
0x31d: Stack[-9] = (bool) 0
0x31e: Return(); Pop(6)

0x31f: @@ AddChild(Stack[-8]); Obj=2 // @poff=617
0x320: Pop(0)
0x321: Push((int) 7)
0x322: @ SendWorldWndMessage(Stack[-1])
0x323: Pop(1)
0x324: @@ GetCategory(Stack[-1]); Obj=8 // @poff=626
0x325: Pop(0)
0x326: @ SetDiarySection(Stack[-1])
0x327: Pop(0)
0x328: Stack[-9] = (bool) 0
0x329: Return(); Pop(6)

0x32a: Stack[-2] = 0
0x32b: Stack[-3] = 0
0x32c: PushEmpty(object, object, object, object)
0x32d: @ GetMainOutdoorScene(Stack[-2])
0x32e: Pop(0)
0x32f: Pop(0); PushNull((bool) Stack[-2] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x331: Push("Can't find main outdoor scene") // @poff=638
0x332: @ Trace(Stack[-1])
0x333: Pop(1)
0x334: Stack[-1] = 0
0x335: Stack[-1] = Stack[-5]
0x336: Return(); Pop(4)

0x337: @@ GetMap(Stack[-1]); Obj=2 // @poff=698
0x338: Pop(0)
0x339: Stack[-1] = Stack[-5]
0x33a: Return(); Pop(4)

0x33b: Stack[-1] = 0
0x33c: Stack[-2] = 0
0x33d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x33e: @ GetMainOutdoorScene(Stack[-2])
0x33f: Pop(0)
0x340: Pop(0); PushNull((bool) Stack[-2] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x342: Push("Can't find main outdoor scene") // @poff=638
0x343: @ Trace(Stack[-1])
0x344: Pop(1)
0x345: Return(); Pop(8)

0x346: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=705
0x347: Pop(0)
0x348: Pop(0); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34a: Push("Warning: outdoor scene locator ") // @poff=716
0x34b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x34c: Push(" doesnt exist") // @poff=780
0x34d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34e: @ Trace(Stack[-1])
0x34f: Pop(1)
0x350: @@ GetMap(Stack[-11]); Obj=2 // @poff=698
0x351: Pop(0)
0x352: Pop(0); PushNull((bool) Stack[-11] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x354: Push("Can't find map") // @poff=808
0x355: @ Trace(Stack[-1])
0x356: Pop(1)
0x357: Return(); Pop(8)

0x358: Push(CvectorIndex(Stack[-4], 0))
0x359: Push(CvectorIndex(Stack[-5], 2))
0x35a: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=838
0x35b: Pop(2)
0x35c: Return(); Pop(8)

0x35d: Stack[-2] = 0
0x35e: PushEmpty(int, int)
0x35f: Push("branch") // @poff=851
0x360: @ GetVariable(Stack[-1], Stack[-2])
0x361: Pop(1)
0x362: Push((int) 0)
0x363: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x365: Stack[-3] = (int) 1
0x366: Return(); Pop(2)

0x367: GOTO 0x36d

0x368: Push((int) 1)
0x369: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36b: Stack[-3] = (int) 2
0x36c: Return(); Pop(2)

0x36d: Stack[-3] = (int) 3
0x36e: Return(); Pop(2)

0x36f: Stack[-1] = (int) 515596
0x370: Return(); Pop(0)

0x371: Stack[-1] = (int) 514839
0x372: Return(); Pop(0)

0x373: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=865
0x374: Return(); Pop(0)

0x375: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=905
0x376: Return(); Pop(0)

0x377: Stack[-1] = (bool) 0
0x378: Return(); Pop(0)

