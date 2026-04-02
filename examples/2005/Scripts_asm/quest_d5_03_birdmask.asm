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
	W:quest_d5_03
	W:completed
	W:cleanup
	W:restore
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:GetPosition
	A:GetEyesHeight
	W:head
	A:add
	W:money
	W:Money
	W:reputation
	W:fail
	W:playsound
	W:givemoney
	W:ood5Birdmask1
	W:money 50000 removed
	W:d5q03BirdmaskBringMoneySelf
	A:FindMark
	A:Remove
	W:d5q03BirdmaskGotoMladVlad
	W:d5q03BirdmaskGotoViktor
	W:d5q03MladVladSavePrisonersSelf
	W:d5q03SavePrisoners
	W:d5q03ViktorSavePrisonersSelf
	A:SetReturnValue
	W:d5q03
	W:pt_map_uprava_prison
	A:AddMark
	W:pt_map_mladvlad
	W:pt_map_viktor
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f00640035005f0030003300000063006f006d0070006c006500740065006400000063006c00650061006e0075007000000072006500730074006f00720065000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f706572747900476574506f736974696f6e00476574457965734865696768740068006500610064000000616464006d006f006e006500790000004d006f006e00650079000000720065007000750074006100740069006f006e0000006600610069006c00000070006c006100790073006f0075006e006400000067006900760065006d006f006e006500790000006f006f006400350042006900720064006d00610073006b00310000006d006f006e00650079002000350030003000300030002000720065006d006f0076006500640000006400350071003000330042006900720064006d00610073006b004200720069006e0067004d006f006e0065007900530065006c006600000046696e644d61726b0052656d6f7665006400350071003000330042006900720064006d00610073006b0047006f0074006f004d006c006100640056006c006100640000006400350071003000330042006900720064006d00610073006b0047006f0074006f00560069006b0074006f0072000000640035007100300033004d006c006100640056006c0061006400530061007600650050007200690073006f006e00650072007300530065006c006600000064003500710030003300530061007600650050007200690073006f006e00650072007300000064003500710030003300560069006b0074006f007200530061007600650050007200690073006f006e00650072007300530065006c006600000053657452657475726e56616c756500640035007100300033000000700074005f006d00610070005f007500700072006100760061005f0070007200690073006f006e0000004164644d61726b00700074005f006d00610070005f006d006c006100640076006c00610064000000700074005f006d00610070005f00760069006b0074006f0072000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x255
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x245 Vars = (object)
		EVENT_26 Op = 0x259 Vars = (string)
		EVENT_6 Op = 0x275 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2b0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4e3

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4e1

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4e5

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4e7

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4d0

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
0x41: Call2 0x2f4

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
0x4f: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x434

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0xc9

0x58: Pop(1)
0x59: Push((int) 512551)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 512552)
0x5f: Push((int) 13722)
0x60: Push((int) 13721)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 515690)
0x64: Push((int) -1)
0x65: Push((int) 16737)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0xab

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xc9

0x6c: Pop(1)
0x6d: Push((int) 512562)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x41e

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x458

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x80: Push((int) 512563)
0x81: Push((int) 13734)
0x82: Push((int) 13732)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 0
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 0
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x428

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x440

0x91: Pop(1)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x44c

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-1] = (bool) 1
0x9d: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9e: Push((int) 512567)
0x9f: Push((int) 13737)
0xa0: Push((int) 13736)
0xa1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa2: Pop(3)
0xa3: Push((int) 512564)
0xa4: Push((int) -1)
0xa5: Push((int) 13733)
0xa6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa7: Pop(3)
0xa8: GOTO 0xab

0xa9: Return(); Pop(0)

0xaa: GOTO 0x4e

0xab: PushEmpty(bool)
0xac: Call2 0x4e9

0xad: Pop(0)
0xae: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xaf: @ lshWaitForAnimEnd()
0xb0: Pop(0)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb9

0xb4: PushEmpty(string)
0xb5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb6: Call2 0x305

0xb7: Pop(1)
0xb8: GOTO 0xaf

0xb9: GOTO 0xc8

0xba: Push("all") // @poff=138
0xbb: Push("idle") // @poff=146
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: @ WaitForAnimEnd()
0xbf: Pop(0)
0xc0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xc8

0xc3: Push("all") // @poff=138
0xc4: Push("idle") // @poff=146
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: GOTO 0xbe

0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: PushEmpty(bool)
0xcb: Call2 0x4e9

0xcc: Pop(0)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: PushEmpty(string, bool)
0xd4: Stack[-3] = Stack[-2]
0xd5: Push("") // @poff=102
0xd6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-1] = (bool) 0
0xd9: GOTO 0xdb

0xda: Stack[-1] = (bool) 1
0xdb: Call2 0x30c

0xdc: Pop(2)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Push((int) 1)
0xe1: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0xe2: PushEmpty()
0xe3: Call2 0x312

0xe4: Pop(0)
0xe5: Push((int) 13729)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x3b6

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x3ac

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x3a0

0xf6: Pop(2)
0xf7: Push((int) 13730)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x3ee

0xfe: Pop(2)
0xff: Push((int) 16739)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x417

0x106: Pop(2)
0x107: Push((int) 16737)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x396

0x10e: Pop(2)
0x10f: Push((int) 13735)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x3ac

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x3a0

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x3b6

0x120: Pop(2)
0x121: Push((int) 13738)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x3a6

0x128: Pop(2)
0x129: Push((int) 13720)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x434

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral" // @poff=89
0x133: Call2 0xc9

0x134: Pop(1)
0x135: Push((int) 512551)
0x136: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x137: Pop(1)
0x138: @@@ ClearReplies(); Obj=0 // @poff=116
0x139: Pop(0)
0x13a: Push((int) 512552)
0x13b: Push((int) 13722)
0x13c: Push((int) 13721)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13e: Pop(3)
0x13f: Push((int) 515690)
0x140: Push((int) -1)
0x141: Push((int) 16737)
0x142: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral" // @poff=89
0x147: Call2 0xc9

0x148: Pop(1)
0x149: Push((int) 512562)
0x14a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14b: Pop(1)
0x14c: @@@ ClearReplies(); Obj=0 // @poff=116
0x14d: Pop(0)
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0x41e

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x458

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Stack[-1] = (bool) 1
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: Push((int) 512563)
0x15d: Push((int) 13734)
0x15e: Push((int) 13732)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: PushEmpty(bool)
0x162: Stack[-1] = (bool) 0
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x428

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x440

0x16d: Pop(1)
0x16e: Pop(1); Push((bool) Stack[-1] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: Stack[-1] = (bool) 1
0x171: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x44c

0x175: Pop(1)
0x176: Pop(1); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Stack[-1] = (bool) 1
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: Push((int) 512567)
0x17b: Push((int) 13737)
0x17c: Push((int) 13736)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Push((int) 512564)
0x180: Push((int) -1)
0x181: Push((int) 13733)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 13737)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral" // @poff=89
0x18a: Call2 0xc9

0x18b: Pop(1)
0x18c: Push((int) 512568)
0x18d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18e: Pop(1)
0x18f: @@@ ClearReplies(); Obj=0 // @poff=116
0x190: Pop(0)
0x191: Push((int) 512609)
0x192: Push((int) 13785)
0x193: Push((int) 13784)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: Push((int) 515693)
0x197: Push((int) 13785)
0x198: Push((int) 16740)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 13785)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral" // @poff=89
0x1a1: Call2 0xc9

0x1a2: Pop(1)
0x1a3: Push((int) 512610)
0x1a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a5: Pop(1)
0x1a6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a7: Pop(0)
0x1a8: Push((int) 512569)
0x1a9: Push((int) -1)
0x1aa: Push((int) 13738)
0x1ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 13734)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral" // @poff=89
0x1b3: Call2 0xc9

0x1b4: Pop(1)
0x1b5: Push((int) 512565)
0x1b6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b7: Pop(1)
0x1b8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b9: Pop(0)
0x1ba: Push((int) 512566)
0x1bb: Push((int) -1)
0x1bc: Push((int) 13735)
0x1bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 13722)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral" // @poff=89
0x1c5: Call2 0xc9

0x1c6: Pop(1)
0x1c7: Push((int) 512553)
0x1c8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c9: Pop(1)
0x1ca: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cb: Pop(0)
0x1cc: Push((int) 512554)
0x1cd: Push((int) 13724)
0x1ce: Push((int) 13723)
0x1cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d0: Pop(3)
0x1d1: Push((int) 512604)
0x1d2: Push((int) 13778)
0x1d3: Push((int) 13777)
0x1d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 13778)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral" // @poff=89
0x1dc: Call2 0xc9

0x1dd: Pop(1)
0x1de: Push((int) 512605)
0x1df: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e0: Pop(1)
0x1e1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e2: Pop(0)
0x1e3: Push((int) 512606)
0x1e4: Push((int) 13724)
0x1e5: Push((int) 13779)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Push((int) 515691)
0x1e9: Push((int) 13724)
0x1ea: Push((int) 16738)
0x1eb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 13724)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral" // @poff=89
0x1f3: Call2 0xc9

0x1f4: Pop(1)
0x1f5: Push((int) 512555)
0x1f6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f7: Pop(1)
0x1f8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f9: Pop(0)
0x1fa: Push((int) 512556)
0x1fb: Push((int) 13726)
0x1fc: Push((int) 13725)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Push((int) 512607)
0x200: Push((int) 13726)
0x201: Push((int) 13781)
0x202: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 13726)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral" // @poff=89
0x20a: Call2 0xc9

0x20b: Pop(1)
0x20c: Push((int) 512557)
0x20d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20e: Pop(1)
0x20f: @@@ ClearReplies(); Obj=0 // @poff=116
0x210: Pop(0)
0x211: Push((int) 512558)
0x212: Push((int) 13728)
0x213: Push((int) 13727)
0x214: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 13728)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Neutral" // @poff=89
0x21c: Call2 0xc9

0x21d: Pop(1)
0x21e: Push((int) 512559)
0x21f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x220: Pop(1)
0x221: @@@ ClearReplies(); Obj=0 // @poff=116
0x222: Pop(0)
0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x41e

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: Push((int) 512560)
0x229: Push((int) -1)
0x22a: Push((int) 13729)
0x22b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22c: Pop(3)
0x22d: Push((int) 512561)
0x22e: Push((int) -1)
0x22f: Push((int) 13730)
0x230: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x231: Pop(3)
0x232: Push((int) 515692)
0x233: Push((int) -1)
0x234: Push((int) 16739)
0x235: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: PushEmpty(bool)
0x23a: Call2 0x4e9

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: @ lshStopAnimation()
0x23e: Pop(0)
0x23f: GOTO 0x242

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: GOTO 0xe0

0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: PushEmpty(int, object)
0x247: Stack[-3] = Stack[-1]
0x248: Push(-2, 1); TaskCall(0)
0x249: Call2 0x0

0x24a: Pop(-2, 1); TaskReturn
0x24b: Pop(1)
0x24c: Push((int) 1)
0x24d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(bool, string, string)
0x250: Stack[-2] = "quest_d5_03" // @poff=156
0x251: Stack[-1] = "completed" // @poff=180
0x252: Call2 0x385

0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: @ Hold()
0x256: Pop(0)
0x257: GOTO 0x255

0x258: Return(); Pop(0)

0x259: PushEmpty(bool, bool)
0x25a: Push("cleanup") // @poff=200
0x25b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x25e: @ IsLoaded(Stack[-1])
0x25f: Pop(0)
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Pop(0); Push((bool) Stack[-2] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: PushEmpty(bool)
0x265: Call2 0x285

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: PushEmpty(object)
0x26b: Call2 0x319

0x26c: Pop(0)
0x26d: @ RemoveActor(Stack[-1])
0x26e: Pop(1)
0x26f: GOTO 0x274

0x270: Push("restore") // @poff=216
0x271: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x274: Return(); Pop(2)

0x275: PushEmpty(bool)
0x276: Stack[-1] = (bool) 0
0x277: Push( Stack[0 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(bool)
0x27a: Call2 0x285

0x27b: Pop(0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object)
0x280: Call2 0x319

0x281: Pop(0)
0x282: @ RemoveActor(Stack[-1])
0x283: Pop(1)
0x284: Return(); Pop(0)

0x285: Stack[-1] = (bool) 1
0x286: Return(); Pop(0)

0x287: PushEmpty(bool, bool)
0x288: Push("HasProperty") // @poff=232
0x289: Push((int) 2)
0x28a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x28b: Pop(1); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-5] = (bool) 0
0x28e: Return(); Pop(2)

0x28f: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=256
0x290: Pop(0)
0x291: Stack[-1] = Stack[-5]
0x292: Return(); Pop(2)

0x293: PushEmpty(float, float)
0x294: PushEmpty(bool, object, string)
0x295: Stack[-10] = Stack[-2]
0x296: Stack[-9] = Stack[-1]
0x297: Call2 0x287

0x298: Pop(2)
0x299: Pop(1); Push((bool) Stack[-1] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-8] = (bool) 0
0x29c: Return(); Pop(2)

0x29d: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=268
0x29e: Pop(0)
0x29f: PushEmpty(float, float, float, float)
0x2a0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x2a1: Stack[-8] = Stack[-2]
0x2a2: Stack[-7] = Stack[-1]
0x2a3: Call2 0x329

0x2a4: Pop(3)
0x2a5: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=280
0x2a6: Pop(1)
0x2a7: Stack[-8] = (bool) 1
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(int, int)
0x2aa: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=268
0x2ab: Pop(0)
0x2ac: Pop(0); Push(Stack[-1] + Stack[-3]);
0x2ad: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=280
0x2ae: Pop(1)
0x2af: Return(); Pop(2)

0x2b0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b1: @@ GetPosition(Stack[-8]); Obj=20 // @poff=292
0x2b2: Pop(0)
0x2b3: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=304
0x2b4: Pop(0)
0x2b5: Push(CvectorIndex(Stack[-8], 1))
0x2b6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b8: @ GetPosition(Stack[-7])
0x2b9: Pop(0)
0x2ba: @ GetEyesHeight(Stack[-9])
0x2bb: Pop(0)
0x2bc: Push(CvectorIndex(Stack[-7], 1))
0x2bd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2be: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2bf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2c0: Push(CvectorIndex(Stack[-6], 1))
0x2c1: Stack[-1] = (int) 0
0x2c2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c4: Pop(1); Push(Sqrt(Stack[-1]))
0x2c5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c6: Stack[-5] = -Stack[-6]; Pop(0);
0x2c7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c8: PushEmpty(cvector, cvector)
0x2c9: Push([0.0, 1.0, 0.0])
0x2ca: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2cb: Call2 0x31f

0x2cc: Pop(1)
0x2cd: Push((int) 25)
0x2ce: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d0: Push([0.0, 10.0, 0.0])
0x2d1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d3: @ IsOverrideActive(Stack[-2])
0x2d4: Pop(0)
0x2d5: Push(Stack[-2])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-21] = (bool) 0
0x2d8: Return(); Pop(18)

0x2d9: @ StopWorld()
0x2da: Pop(0)
0x2db: @ CameraTransit(Stack[-3], Stack[-5])
0x2dc: Pop(0)
0x2dd: Push(CvectorIndex(Stack[-4], 0))
0x2de: Push(CvectorIndex(Stack[-5], 2))
0x2df: @ Rotate(Stack[-2], Stack[-1])
0x2e0: Pop(2)
0x2e1: PushEmpty(bool)
0x2e2: Call2 0x4e9

0x2e3: Pop(0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2ee

0x2e6: Push("head") // @poff=318
0x2e7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e8: Pop(1)
0x2e9: Push(Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2eb: Push("head") // @poff=318
0x2ec: @ LookAsyncCamera(Stack[-1])
0x2ed: Pop(1)
0x2ee: @ CameraWaitForPlayFinish()
0x2ef: Pop(0)
0x2f0: @ ResumeWorld()
0x2f1: Pop(0)
0x2f2: Stack[-21] = (bool) 1
0x2f3: Return(); Pop(18)

0x2f4: PushEmpty(bool, bool)
0x2f5: @ CameraSwitchToNormal()
0x2f6: Pop(0)
0x2f7: PushEmpty(bool)
0x2f8: Call2 0x4e9

0x2f9: Pop(0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: GOTO 0x304

0x2fc: Push("head") // @poff=318
0x2fd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fe: Pop(1)
0x2ff: Push(Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x301: Push("head") // @poff=318
0x302: @ UnlookAsync(Stack[-1])
0x303: Pop(1)
0x304: Return(); Pop(2)

0x305: PushEmpty(float, float, float, float)
0x306: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x307: Pop(0)
0x308: Push((bool) 0)
0x309: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(1)
0x30b: Return(); Pop(4)

0x30c: PushEmpty(float, float, float, float)
0x30d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x30e: Pop(0)
0x30f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x310: Pop(0)
0x311: Return(); Pop(4)

0x312: PushEmpty(bool)
0x313: Call2 0x4e9

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: @ lshStopSpeech()
0x317: Pop(0)
0x318: Return(); Pop(0)

0x319: PushEmpty(object, object)
0x31a: @ self(Stack[-1])
0x31b: Pop(0)
0x31c: Stack[-1] = Stack[-3]
0x31d: Return(); Pop(2)

0x31e: Stack[-1] = 0
0x31f: PushEmpty(float, float)
0x320: Pop(0); Push(Stack[-3] | Stack[-3]);
0x321: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x322: Push((float)9.999999974752427e-07)
0x323: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-4] = [0.0, 0.0, 0.0]
0x326: Return(); Pop(2)

0x327: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x328: Return(); Pop(2)

0x329: PushEmpty()
0x32a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-2] = Stack[-4]
0x32d: Return(); Pop(0)

0x32e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: Stack[-1] = Stack[-4]
0x331: Return(); Pop(0)

0x332: Stack[-3] = Stack[-4]
0x333: Return(); Pop(0)

0x334: PushEmpty(int, int)
0x335: @ GetVariable(Stack[-3], Stack[-1])
0x336: Pop(0)
0x337: Stack[-1] = Stack[-4]
0x338: Return(); Pop(2)

0x339: PushEmpty(object, object)
0x33a: @ CreateIntVector(Stack[-1])
0x33b: Pop(0)
0x33c: @@ add(Stack[-4]); Obj=1 // @poff=328
0x33d: Pop(0)
0x33e: @@ add(Stack[-3]); Obj=1 // @poff=328
0x33f: Pop(0)
0x340: Push((int) 3)
0x341: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x342: Pop(1)
0x343: Return(); Pop(2)

0x344: Stack[-1] = 0
0x345: PushEmpty(int, int)
0x346: PushEmpty(object, string, int)
0x347: Stack[-7] = Stack[-3]
0x348: Stack[-2] = "money" // @poff=332
0x349: Stack[-6] = Stack[-1]
0x34a: Call2 0x2a9

0x34b: Pop(3)
0x34c: Push((int) 0)
0x34d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x34f: Push("Money") // @poff=344
0x350: @ GetInvItemByName(Stack[-2], Stack[-1])
0x351: Pop(1)
0x352: PushEmpty(int, int)
0x353: Stack[-3] = Stack[-2]
0x354: Stack[-5] = Stack[-1]
0x355: Call2 0x339

0x356: Pop(2)
0x357: Return(); Pop(2)

0x358: PushEmpty()
0x359: Pop(0); Push((bool) Stack[-2] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35b: Stack[-3] = (bool) 0
0x35c: Return(); Pop(0)

0x35d: Push((int) 0)
0x35e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x360: Push((int) 8)
0x361: @ SendWorldWndMessage(Stack[-1])
0x362: Pop(1)
0x363: GOTO 0x36d

0x364: Push((int) 0)
0x365: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x367: Push((int) 9)
0x368: @ SendWorldWndMessage(Stack[-1])
0x369: Pop(1)
0x36a: GOTO 0x36d

0x36b: Stack[-3] = (bool) 0
0x36c: Return(); Pop(0)

0x36d: PushEmpty(float)
0x36e: Stack[-2] = Stack[-1]
0x36f: Call2 0x37b

0x370: Pop(1)
0x371: PushEmpty(bool, object, string, float, float, float)
0x372: Stack[-8] = Stack[-5]
0x373: Stack[-4] = "reputation" // @poff=356
0x374: Stack[-7] = Stack[-3]
0x375: Stack[-2] = (int) 0
0x376: Stack[-1] = (int) 1
0x377: Call2 0x293

0x378: Pop(6)
0x379: Stack[-3] = (bool) 1
0x37a: Return(); Pop(0)

0x37b: PushEmpty(object, object)
0x37c: @ CreateFloatVector(Stack[-1])
0x37d: Pop(0)
0x37e: @@ add(Stack[-3]); Obj=1 // @poff=328
0x37f: Pop(0)
0x380: Push((int) 16)
0x381: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x382: Pop(1)
0x383: Return(); Pop(2)

0x384: Stack[-1] = 0
0x385: PushEmpty(object, object)
0x386: @ FindActor(Stack[-1], Stack[-4])
0x387: Pop(0)
0x388: Pop(0); PushNull((bool) Stack[-1] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-5] = (bool) 0
0x38b: Return(); Pop(2)

0x38c: @ Trigger(Stack[-1], Stack[-3])
0x38d: Pop(0)
0x38e: Stack[-5] = (bool) 1
0x38f: Return(); Pop(2)

0x390: Stack[-1] = 0
0x391: PushEmpty(float, float)
0x392: @ GetGameTime(Stack[-1])
0x393: Pop(0)
0x394: Stack[-1] = Stack[-3]
0x395: Return(); Pop(2)

0x396: PushEmpty()
0x397: PushEmpty()
0x398: Call2 0x46f

0x399: Pop(0)
0x39a: PushEmpty(bool, string, string)
0x39b: Stack[-2] = "quest_d5_03" // @poff=156
0x39c: Stack[-1] = "fail" // @poff=378
0x39d: Call2 0x385

0x39e: Pop(3)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: Push("playsound") // @poff=388
0x3a2: Push("givemoney") // @poff=408
0x3a3: @ TriggerWorld(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: Push("ood5Birdmask1") // @poff=428
0x3a8: Push((int) 1)
0x3a9: @ SetVariable(Stack[-2], Stack[-1])
0x3aa: Pop(2)
0x3ab: Return(); Pop(0)

0x3ac: PushEmpty()
0x3ad: Push("money 50000 removed") // @poff=456
0x3ae: @ Trace(Stack[-1])
0x3af: Pop(1)
0x3b0: PushEmpty(object, int)
0x3b1: Stack[-4] = Stack[-2]
0x3b2: Stack[-1] = (int) -50000
0x3b3: Call2 0x345

0x3b4: Pop(2)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(object, object, object, object)
0x3b7: PushEmpty(object)
0x3b8: Call2 0x4bf

0x3b9: Stack[-1] = Stack[-3]
0x3ba: Pop(1)
0x3bb: Push("d5q03BirdmaskBringMoneySelf") // @poff=496
0x3bc: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=552
0x3bd: Pop(1)
0x3be: Push(Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: @@ Remove(); Obj=1 // @poff=561
0x3c1: Pop(0)
0x3c2: Push("d5q03BirdmaskGotoMladVlad") // @poff=568
0x3c3: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=552
0x3c4: Pop(1)
0x3c5: Push(Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: @@ Remove(); Obj=1 // @poff=561
0x3c8: Pop(0)
0x3c9: Push("d5q03BirdmaskGotoViktor") // @poff=620
0x3ca: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=552
0x3cb: Pop(1)
0x3cc: Push(Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: @@ Remove(); Obj=1 // @poff=561
0x3cf: Pop(0)
0x3d0: Push("d5q03MladVladSavePrisonersSelf") // @poff=668
0x3d1: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=552
0x3d2: Pop(1)
0x3d3: Push(Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: @@ Remove(); Obj=1 // @poff=561
0x3d6: Pop(0)
0x3d7: Push("d5q03SavePrisoners") // @poff=730
0x3d8: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=552
0x3d9: Pop(1)
0x3da: Push(Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: @@ Remove(); Obj=1 // @poff=561
0x3dd: Pop(0)
0x3de: Push("d5q03ViktorSavePrisonersSelf") // @poff=768
0x3df: @@ FindMark(Stack[-2], Stack[-1]); Obj=3 // @poff=552
0x3e0: Pop(1)
0x3e1: Push(Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: @@ Remove(); Obj=1 // @poff=561
0x3e4: Pop(0)
0x3e5: PushEmpty()
0x3e6: Call2 0x489

0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: @@ SetReturnValue(Stack[-1]); Obj=6 // @poff=826
0x3ea: Pop(1)
0x3eb: Return(); Pop(4)

0x3ec: Stack[-1] = 0
0x3ed: Stack[-2] = 0
0x3ee: PushEmpty(object, object)
0x3ef: Push("d5q03") // @poff=841
0x3f0: Push((int) 2)
0x3f1: @ SetVariable(Stack[-2], Stack[-1])
0x3f2: Pop(2)
0x3f3: PushEmpty(object)
0x3f4: Call2 0x4bf

0x3f5: Stack[-1] = Stack[-2]
0x3f6: Pop(1)
0x3f7: Push("d5q03BirdmaskBringMoneySelf") // @poff=496
0x3f8: Push("pt_map_uprava_prison") // @poff=853
0x3f9: Push((int) 0)
0x3fa: Push((int) 515372)
0x3fb: PushEmpty(float)
0x3fc: Call2 0x391

0x3fd: Pop(0)
0x3fe: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=895
0x3ff: Pop(5)
0x400: Push("d5q03BirdmaskGotoMladVlad") // @poff=568
0x401: Push("pt_map_mladvlad") // @poff=903
0x402: Push((int) 0)
0x403: Push((int) 515374)
0x404: PushEmpty(float)
0x405: Call2 0x391

0x406: Pop(0)
0x407: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=895
0x408: Pop(5)
0x409: Push("d5q03BirdmaskGotoViktor") // @poff=620
0x40a: Push("pt_map_viktor") // @poff=935
0x40b: Push((int) 0)
0x40c: Push((int) 515373)
0x40d: PushEmpty(float)
0x40e: Call2 0x391

0x40f: Pop(0)
0x410: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=895
0x411: Pop(5)
0x412: PushEmpty()
0x413: Call2 0x47c

0x414: Pop(0)
0x415: Return(); Pop(2)

0x416: Stack[-1] = 0
0x417: PushEmpty()
0x418: PushEmpty(bool, object, float)
0x419: Stack[-5] = Stack[-2]
0x41a: Stack[-1] = (float) -0.30000001192092896
0x41b: Call2 0x358

0x41c: Pop(3)
0x41d: Return(); Pop(0)

0x41e: PushEmpty()
0x41f: PushEmpty(bool, object)
0x420: Stack[-3] = Stack[-1]
0x421: Call2 0x464

0x422: Pop(1)
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-2] = (bool) 1
0x425: Return(); Pop(0)

0x426: Stack[-2] = (bool) 0
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: PushEmpty(int, string)
0x42a: Stack[-1] = "ood5Birdmask1" // @poff=428
0x42b: Call2 0x334

0x42c: Pop(1)
0x42d: Push((int) 0)
0x42e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x430: Stack[-2] = (bool) 1
0x431: Return(); Pop(0)

0x432: Stack[-2] = (bool) 0
0x433: Return(); Pop(0)

0x434: PushEmpty()
0x435: PushEmpty(int, string)
0x436: Stack[-1] = "d5q03" // @poff=841
0x437: Call2 0x334

0x438: Pop(1)
0x439: Push((int) 1)
0x43a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-2] = (bool) 1
0x43d: Return(); Pop(0)

0x43e: Stack[-2] = (bool) 0
0x43f: Return(); Pop(0)

0x440: PushEmpty()
0x441: PushEmpty(int, string)
0x442: Stack[-1] = "d5q03" // @poff=841
0x443: Call2 0x334

0x444: Pop(1)
0x445: Push((int) 1000)
0x446: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-2] = (bool) 1
0x449: Return(); Pop(0)

0x44a: Stack[-2] = (bool) 0
0x44b: Return(); Pop(0)

0x44c: PushEmpty()
0x44d: PushEmpty(int, string)
0x44e: Stack[-1] = "d5q03" // @poff=841
0x44f: Call2 0x334

0x450: Pop(1)
0x451: Push((int) -1)
0x452: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x454: Stack[-2] = (bool) 1
0x455: Return(); Pop(0)

0x456: Stack[-2] = (bool) 0
0x457: Return(); Pop(0)

0x458: PushEmpty()
0x459: PushEmpty(int, string)
0x45a: Stack[-1] = "d5q03" // @poff=841
0x45b: Call2 0x334

0x45c: Pop(1)
0x45d: Push((int) 2)
0x45e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-2] = (bool) 1
0x461: Return(); Pop(0)

0x462: Stack[-2] = (bool) 0
0x463: Return(); Pop(0)

0x464: PushEmpty(float, float)
0x465: Push("money") // @poff=332
0x466: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=268
0x467: Pop(1)
0x468: Push((int) 50000)
0x469: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-4] = (bool) 1
0x46c: Return(); Pop(2)

0x46d: Stack[-4] = (bool) 0
0x46e: Return(); Pop(2)

0x46f: PushEmpty(object, object)
0x470: Push((int) 714)
0x471: Push((int) 2)
0x472: Push((int) 536322)
0x473: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: PushEmpty(bool, object, int)
0x476: Stack[-4] = Stack[-2]
0x477: Stack[-1] = (int) 154
0x478: Call2 0x4a3

0x479: Pop(3)
0x47a: Return(); Pop(2)

0x47b: Stack[-1] = 0
0x47c: PushEmpty(object, object)
0x47d: Push((int) 156)
0x47e: Push((int) 2)
0x47f: Push((int) 515367)
0x480: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: PushEmpty(bool, object, int)
0x483: Stack[-4] = Stack[-2]
0x484: Stack[-1] = (int) 154
0x485: Call2 0x4a3

0x486: Pop(3)
0x487: Return(); Pop(2)

0x488: Stack[-1] = 0
0x489: PushEmpty(object, object)
0x48a: Push((int) 157)
0x48b: Push((int) 2)
0x48c: Push((int) 515368)
0x48d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x48e: Pop(3)
0x48f: PushEmpty(bool, object, int)
0x490: Stack[-4] = Stack[-2]
0x491: Stack[-1] = (int) 154
0x492: Call2 0x4a3

0x493: Pop(3)
0x494: Return(); Pop(2)

0x495: Stack[-1] = 0
0x496: PushEmpty(object, object)
0x497: @ GetDiaryRoot(Stack[-1])
0x498: Pop(0)
0x499: Pop(0); Push((bool) Stack[-1] == 0)
0x49a: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49b: Push("Can't retrieve diary root") // @poff=963
0x49c: @ Trace(Stack[-1])
0x49d: Pop(1)
0x49e: Stack[-3] = (bool) 0
0x49f: Return(); Pop(2)

0x4a0: Stack[-1] = Stack[-3]
0x4a1: Return(); Pop(2)

0x4a2: Stack[-1] = 0
0x4a3: PushEmpty(object, object, int, object, object, int)
0x4a4: PushEmpty(object)
0x4a5: Call2 0x496

0x4a6: Stack[-1] = Stack[-4]
0x4a7: Pop(1)
0x4a8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=1015
0x4a9: Pop(0)
0x4aa: Pop(0); Push((bool) Stack[-2] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ac: Push("Can't find diary parent with id: ") // @poff=1020
0x4ad: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ae: @ Trace(Stack[-1])
0x4af: Pop(1)
0x4b0: Stack[-9] = (bool) 0
0x4b1: Return(); Pop(6)

0x4b2: @@ AddChild(Stack[-8]); Obj=2 // @poff=1088
0x4b3: Pop(0)
0x4b4: Push((int) 7)
0x4b5: @ SendWorldWndMessage(Stack[-1])
0x4b6: Pop(1)
0x4b7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=1097
0x4b8: Pop(0)
0x4b9: @ SetDiarySection(Stack[-1])
0x4ba: Pop(0)
0x4bb: Stack[-9] = (bool) 0
0x4bc: Return(); Pop(6)

0x4bd: Stack[-2] = 0
0x4be: Stack[-3] = 0
0x4bf: PushEmpty(object, object, object, object)
0x4c0: @ GetMainOutdoorScene(Stack[-2])
0x4c1: Pop(0)
0x4c2: Pop(0); PushNull((bool) Stack[-2] == 0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c4: Push("Can't find main outdoor scene") // @poff=1109
0x4c5: @ Trace(Stack[-1])
0x4c6: Pop(1)
0x4c7: Stack[-1] = 0
0x4c8: Stack[-1] = Stack[-5]
0x4c9: Return(); Pop(4)

0x4ca: @@ GetMap(Stack[-1]); Obj=2 // @poff=1169
0x4cb: Pop(0)
0x4cc: Stack[-1] = Stack[-5]
0x4cd: Return(); Pop(4)

0x4ce: Stack[-1] = 0
0x4cf: Stack[-2] = 0
0x4d0: PushEmpty(int, int)
0x4d1: Push("branch") // @poff=1176
0x4d2: @ GetVariable(Stack[-1], Stack[-2])
0x4d3: Pop(1)
0x4d4: Push((int) 0)
0x4d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d7: Stack[-3] = (int) 1
0x4d8: Return(); Pop(2)

0x4d9: GOTO 0x4df

0x4da: Push((int) 1)
0x4db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-3] = (int) 2
0x4de: Return(); Pop(2)

0x4df: Stack[-3] = (int) 3
0x4e0: Return(); Pop(2)

0x4e1: Stack[-1] = (int) 515571
0x4e2: Return(); Pop(0)

0x4e3: Stack[-1] = (int) 504029
0x4e4: Return(); Pop(0)

0x4e5: Stack[-1] = "ui/NPC_bmask.png" // @poff=1190
0x4e6: Return(); Pop(0)

0x4e7: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=1224
0x4e8: Return(); Pop(0)

0x4e9: Stack[-1] = (bool) 0
0x4ea: Return(); Pop(0)

