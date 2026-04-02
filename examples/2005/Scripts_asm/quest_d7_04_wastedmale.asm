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
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:pt_gatherer2
	A:ShowMap
	W:d7q04
	W:d7q04WastedGotoGatherer
	A:AddMark
	W:quest_d7_04
	W:init_andrei
	W:Rifle is given
	W:Rifle
	W:durability
	A:SetProperty
	W:rifle ammo10 is given
	W:rifle_ammo
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500700074005f00670061007400680065007200650072003200000053686f774d6170006400370071003000340000006400370071003000340057006100730074006500640047006f0074006f004700610074006800650072006500720000004164644d61726b00710075006500730074005f00640037005f0030003400000069006e00690074005f0061006e00640072006500690000005200690066006c006500200069007300200067006900760065006e0000005200690066006c00650000006400750072006100620069006c00690074007900000053657450726f7065727479007200690066006c006500200061006d006d006f0031003000200069007300200067006900760065006e0000007200690066006c0065005f0061006d006d006f000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	HasAnimation (3 args)

RunOp = 0x172
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x178 Vars = (object)
		EVENT_26 Op = 0x1ad Vars = (string)
		EVENT_5 Op = 0x1b5 Vars = ()
		EVENT_6 Op = 0x1ba Vars = ()
		EVENT_7 Op = 0x1f9 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x281

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x432

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x430

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x434

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x436

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x407

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
0x41: Call2 0x2c5

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 533203)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x393

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 533204)
0x5f: Push((int) 34725)
0x60: Push((int) 34724)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 533207)
0x64: Push((int) -1)
0x65: Push((int) 34727)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 535821)
0x69: Push((int) -1)
0x6a: Push((int) 37514)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x438

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x2d6

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all") // @poff=138
0x80: Push("idle") // @poff=146
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x438

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-3] = Stack[-2]
0x9a: Push("") // @poff=102
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x2dd

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x2ee

0xa9: Pop(0)
0xaa: Push((int) 37513)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x357

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x347

0xb6: Pop(2)
0xb7: Push((int) 37516)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x357

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x347

0xc3: Pop(2)
0xc4: Push((int) 34726)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x357

0xcb: Pop(2)
0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x373

0xd0: Pop(2)
0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x388

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x347

0xda: Pop(2)
0xdb: Push((int) 37509)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x357

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x347

0xe7: Pop(2)
0xe8: Push((int) 34723)
0xe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral" // @poff=89
0xed: Call2 0x8e

0xee: Pop(1)
0xef: Push((int) 533203)
0xf0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf1: Pop(1)
0xf2: @@@ ClearReplies(); Obj=0 // @poff=116
0xf3: Pop(0)
0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x393

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf9: Push((int) 533204)
0xfa: Push((int) 34725)
0xfb: Push((int) 34724)
0xfc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfd: Pop(3)
0xfe: Push((int) 533207)
0xff: Push((int) -1)
0x100: Push((int) 34727)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Push((int) 535821)
0x104: Push((int) -1)
0x105: Push((int) 37514)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 34725)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0x8e

0x10f: Pop(1)
0x110: Push((int) 533205)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 535813)
0x116: Push((int) 37511)
0x117: Push((int) 37505)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 535815)
0x11b: Push((int) 37508)
0x11c: Push((int) 37507)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 37508)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0x8e

0x126: Pop(1)
0x127: Push((int) 535816)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 535817)
0x12d: Push((int) -1)
0x12e: Push((int) 37509)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Push((int) 535822)
0x132: Push((int) 37506)
0x133: Push((int) 37515)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 37511)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral" // @poff=89
0x13c: Call2 0x8e

0x13d: Pop(1)
0x13e: Push((int) 535818)
0x13f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x140: Pop(1)
0x141: @@@ ClearReplies(); Obj=0 // @poff=116
0x142: Pop(0)
0x143: Push((int) 535820)
0x144: Push((int) -1)
0x145: Push((int) 37513)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Push((int) 535819)
0x149: Push((int) 37506)
0x14a: Push((int) 37512)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 37506)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral" // @poff=89
0x153: Call2 0x8e

0x154: Pop(1)
0x155: Push((int) 535814)
0x156: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x157: Pop(1)
0x158: @@@ ClearReplies(); Obj=0 // @poff=116
0x159: Pop(0)
0x15a: Push((int) 535823)
0x15b: Push((int) -1)
0x15c: Push((int) 37516)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Push((int) 533206)
0x160: Push((int) -1)
0x161: Push((int) 34726)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x166: PushEmpty(bool)
0x167: Call2 0x438

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16a: @ lshStopAnimation()
0x16b: Pop(0)
0x16c: GOTO 0x16f

0x16d: @ StopAnimation()
0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: GOTO 0xa5

0x171: Return(); Pop(0)

0x172: PushEmpty(float, float)
0x173: Stack[-2] = (int) 300
0x174: Stack[-1] = (int) 100
0x175: Call2 0x180

0x176: Pop(2)
0x177: Return(); Pop(0)

0x178: PushEmpty()
0x179: PushEmpty(int, object)
0x17a: Stack[-3] = Stack[-1]
0x17b: Push(-2, 1); TaskCall(0)
0x17c: Call2 0x0

0x17d: Pop(-2, 1); TaskReturn
0x17e: Pop(2)
0x17f: Return(); Pop(0)

0x180: PushEmpty(float, float)
0x181: PushEmpty(bool)
0x182: Call2 0x27c

0x183: Pop(0)
0x184: Pop(1); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: @ Hold()
0x187: Pop(0)
0x188: GOTO 0x181

0x189: Push((int) 3)
0x18a: @ rand(Stack[-2], Stack[-1])
0x18b: Pop(1)
0x18c: Push((int) 3)
0x18d: Pop(1); Push(Stack[-2] + Stack[-1]);
0x18e: @ Sleep(Stack[-1])
0x18f: Pop(1)
0x190: PushEmpty(float, float)
0x191: Stack[-6] = Stack[-2]
0x192: Stack[-5] = Stack[-1]
0x193: Call2 0x1cf

0x194: Pop(2)
0x195: @ sync()
0x196: Pop(0)
0x197: GOTO 0x181

0x198: Return(); Pop(2)

0x199: PushEmpty(bool, bool)
0x19a: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x19b: @ IsLoaded(Stack[-1])
0x19c: Pop(0)
0x19d: PushEmpty(bool)
0x19e: Stack[-1] = (bool) 0
0x19f: Pop(0); Push((bool) Stack[-2] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x1cd

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: PushEmpty(object)
0x1a8: Call2 0x2f5

0x1a9: Pop(0)
0x1aa: @ RemoveActor(Stack[-1])
0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty()
0x1ae: Push("cleanup") // @poff=156
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b1: PushEmpty()
0x1b2: Call2 0x199

0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: @ StopGroup0()
0x1b6: Pop(0)
0x1b7: @ sync()
0x1b8: Pop(0)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: Call2 0x210

0x1bc: Pop(0)
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(bool)
0x1c2: Call2 0x1cd

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[-1] = (bool) 1
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c7: PushEmpty(object)
0x1c8: Call2 0x2f5

0x1c9: Pop(0)
0x1ca: @ RemoveActor(Stack[-1])
0x1cb: Pop(1)
0x1cc: Return(); Pop(0)

0x1cd: Stack[-1] = (bool) 1
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty()
0x1d0: PushEmpty(bool)
0x1d1: Call2 0x27c

0x1d2: Pop(0)
0x1d3: Pop(1); Push((bool) Stack[-1] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Return(); Pop(0)

0x1d6: Push("player") // @poff=172
0x1d7: @ FindActor(Stack[-4]T, Stack[-1])
0x1d8: Pop(1)
0x1d9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1da: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1db: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1dc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1dd: Push((int) 10)
0x1de: Push((float)1.0)
0x1df: @ SetTimer(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: PushEmpty()
0x1e2: Call2 0x21e

0x1e3: Pop(0)
0x1e4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e6: Push((int) 10)
0x1e7: @ KillTimer(Stack[-1])
0x1e8: Pop(1)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty(float, float)
0x1eb: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-3] = (bool) 0
0x1ee: Return(); Pop(2)

0x1ef: PushEmpty(float, object)
0x1f0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f1: Call2 0x274

0x1f2: Pop(1)
0x1f3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f7: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f8: Return(); Pop(2)

0x1f9: PushEmpty()
0x1fa: Push((int) 10)
0x1fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x1fd: PushEmpty(bool)
0x1fe: Call2 0x1ea

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x201: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x203: PushEmpty(object)
0x204: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x205: Call2 0x2e3

0x206: Pop(1)
0x207: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x208: GOTO 0x20f

0x209: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20a: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20b: Push("head") // @poff=186
0x20c: @ UnlookAsync(Stack[-1])
0x20d: Pop(1)
0x20e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: Call2 0x26f

0x212: Pop(0)
0x213: Push((int) 10)
0x214: @ KillTimer(Stack[-1])
0x215: Pop(1)
0x216: Push( Stack[2 + Tasks[-1].StackPointer] )
0x217: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x218: Push("head") // @poff=186
0x219: @ UnlookAsync(Stack[-1])
0x21a: Pop(1)
0x21b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21d: Return(); Pop(0)

0x21e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x21f: @ WaitForAnimEnd()
0x220: Pop(0)
0x221: PushEmpty(bool)
0x222: Call2 0x27c

0x223: Pop(0)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: Return(); Pop(14)

0x227: PushEmpty(int)
0x228: Call2 0x41f

0x229: Stack[-1] = Stack[-8]
0x22a: Pop(1)
0x22b: Stack[-6] = (int) 0
0x22c: PushEmpty(bool)
0x22d: Stack[-1] = (bool) 0
0x22e: Push((int) 5)
0x22f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x231: PushEmpty(bool)
0x232: Call2 0x27c

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x237: Push((int) 3)
0x238: @ irand(Stack[-6], Stack[-1])
0x239: Pop(1)
0x23a: Push((int) 0)
0x23b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x23d: Push(Stack[-7])
0x23e: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23f: @ irand(Stack[-4], Stack[-7])
0x240: Pop(0)
0x241: Push("all") // @poff=138
0x242: PushEmpty(string, int)
0x243: Stack[-7] = Stack[-1]
0x244: Call2 0x418

0x245: Pop(1)
0x246: @ PlayAnimation(Stack[-2], Stack[-1])
0x247: Pop(2)
0x248: @ WaitForAnimEnd(Stack[-3])
0x249: Pop(0)
0x24a: Pop(0); Push((bool) Stack[-3] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: GOTO 0x26a

0x24d: GOTO 0x25f

0x24e: Push((int) 1)
0x24f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x251: Push((int) 4)
0x252: @ rand(Stack[-3], Stack[-1])
0x253: Pop(1)
0x254: Push((int) 1)
0x255: Pop(1); Push(Stack[-3] + Stack[-1]);
0x256: @ Sleep(Stack[-1], Stack[-2])
0x257: Pop(1)
0x258: Pop(0); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x26a

0x25b: GOTO 0x25f

0x25c: Push(Stack[-6])
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x26a

0x25f: PushEmpty(bool)
0x260: Call2 0x26d

0x261: Pop(0)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x26a

0x265: @ ResetAAS()
0x266: Pop(0)
0x267: Push((int) 1)
0x268: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x269: GOTO 0x22c

0x26a: @ ResetAAS()
0x26b: Pop(0)
0x26c: Return(); Pop(14)

0x26d: Stack[-1] = (bool) 1
0x26e: Return(); Pop(0)

0x26f: @ StopAnimation()
0x270: Pop(0)
0x271: @ StopGroup0()
0x272: Pop(0)
0x273: Return(); Pop(0)

0x274: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x275: @ GetPosition(Stack[-3])
0x276: Pop(0)
0x277: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x278: Pop(0)
0x279: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x27a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x27b: Return(); Pop(6)

0x27c: PushEmpty(bool, bool)
0x27d: @ IsLoaded(Stack[-1])
0x27e: Pop(0)
0x27f: Stack[-1] = Stack[-3]
0x280: Return(); Pop(2)

0x281: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x282: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x283: Pop(0)
0x284: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x285: Pop(0)
0x286: Push(CvectorIndex(Stack[-8], 1))
0x287: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x288: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x289: @ GetPosition(Stack[-7])
0x28a: Pop(0)
0x28b: @ GetEyesHeight(Stack[-9])
0x28c: Pop(0)
0x28d: Push(CvectorIndex(Stack[-7], 1))
0x28e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x290: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x291: Push(CvectorIndex(Stack[-6], 1))
0x292: Stack[-1] = (int) 0
0x293: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x294: Pop(0); Push(Stack[-6] | Stack[-6]);
0x295: Pop(1); Push(Sqrt(Stack[-1]))
0x296: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x297: Stack[-5] = -Stack[-6]; Pop(0);
0x298: Pop(0); Push(Stack[-6] * Stack[-19]);
0x299: PushEmpty(cvector, cvector)
0x29a: Push([0.0, 1.0, 0.0])
0x29b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x29c: Call2 0x2fb

0x29d: Pop(1)
0x29e: Push((int) 25)
0x29f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a1: Push([0.0, 10.0, 0.0])
0x2a2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a4: @ IsOverrideActive(Stack[-2])
0x2a5: Pop(0)
0x2a6: Push(Stack[-2])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-21] = (bool) 0
0x2a9: Return(); Pop(18)

0x2aa: @ StopWorld()
0x2ab: Pop(0)
0x2ac: @ CameraTransit(Stack[-3], Stack[-5])
0x2ad: Pop(0)
0x2ae: Push(CvectorIndex(Stack[-4], 0))
0x2af: Push(CvectorIndex(Stack[-5], 2))
0x2b0: @ Rotate(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: PushEmpty(bool)
0x2b3: Call2 0x438

0x2b4: Pop(0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2bf

0x2b7: Push("head") // @poff=186
0x2b8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b9: Pop(1)
0x2ba: Push(Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bc: Push("head") // @poff=186
0x2bd: @ LookAsyncCamera(Stack[-1])
0x2be: Pop(1)
0x2bf: @ CameraWaitForPlayFinish()
0x2c0: Pop(0)
0x2c1: @ ResumeWorld()
0x2c2: Pop(0)
0x2c3: Stack[-21] = (bool) 1
0x2c4: Return(); Pop(18)

0x2c5: PushEmpty(bool, bool)
0x2c6: @ CameraSwitchToNormal()
0x2c7: Pop(0)
0x2c8: PushEmpty(bool)
0x2c9: Call2 0x438

0x2ca: Pop(0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d5

0x2cd: Push("head") // @poff=186
0x2ce: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cf: Pop(1)
0x2d0: Push(Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: Push("head") // @poff=186
0x2d3: @ UnlookAsync(Stack[-1])
0x2d4: Pop(1)
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty(float, float, float, float)
0x2d7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2d8: Pop(0)
0x2d9: Push((bool) 0)
0x2da: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(1)
0x2dc: Return(); Pop(4)

0x2dd: PushEmpty(float, float, float, float)
0x2de: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2df: Pop(0)
0x2e0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2e1: Pop(0)
0x2e2: Return(); Pop(4)

0x2e3: PushEmpty(float, cvector, float, cvector)
0x2e4: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2e5: Pop(0)
0x2e6: Stack[-1] = [0.0, 0.0, 0.0]
0x2e7: Push(CvectorIndex(Stack[-1], 1))
0x2e8: Stack[-3] = Stack[-1]
0x2e9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ea: Push("head") // @poff=186
0x2eb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ec: Pop(1)
0x2ed: Return(); Pop(4)

0x2ee: PushEmpty(bool)
0x2ef: Call2 0x438

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: @ lshStopSpeech()
0x2f3: Pop(0)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(object, object)
0x2f6: @ self(Stack[-1])
0x2f7: Pop(0)
0x2f8: Stack[-1] = Stack[-3]
0x2f9: Return(); Pop(2)

0x2fa: Stack[-1] = 0
0x2fb: PushEmpty(float, float)
0x2fc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2fe: Push((float)9.999999974752427e-07)
0x2ff: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x301: Stack[-4] = [0.0, 0.0, 0.0]
0x302: Return(); Pop(2)

0x303: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x304: Return(); Pop(2)

0x305: PushEmpty(int, int)
0x306: @ GetVariable(Stack[-3], Stack[-1])
0x307: Pop(0)
0x308: Stack[-1] = Stack[-4]
0x309: Return(); Pop(2)

0x30a: PushEmpty(object, object)
0x30b: @ CreateIntVector(Stack[-1])
0x30c: Pop(0)
0x30d: @@ add(Stack[-4]); Obj=1 // @poff=222
0x30e: Pop(0)
0x30f: @@ add(Stack[-3]); Obj=1 // @poff=222
0x310: Pop(0)
0x311: Push((int) 3)
0x312: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x313: Pop(1)
0x314: Return(); Pop(2)

0x315: Stack[-1] = 0
0x316: PushEmpty(int, int, bool, int, int, bool)
0x317: @@ GetItemID(Stack[-3]); Obj=8 // @poff=226
0x318: Pop(0)
0x319: Push("Category") // @poff=236
0x31a: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x31b: Pop(1)
0x31c: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=254
0x31d: Pop(0)
0x31e: Pop(0); Push((bool) Stack[-1] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x320: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=262
0x321: Pop(0)
0x322: GOTO 0x328

0x323: PushEmpty(int, int)
0x324: Stack[-5] = Stack[-2]
0x325: Stack[-9] = Stack[-1]
0x326: Call2 0x30a

0x327: Pop(2)
0x328: Return(); Pop(6)

0x329: PushEmpty(object, object)
0x32a: @ CreateInvItem(Stack[-1])
0x32b: Pop(0)
0x32c: @@ SetItemName(Stack[-4]); Obj=1 // @poff=272
0x32d: Pop(0)
0x32e: PushEmpty(object, object, int)
0x32f: Stack[-8] = Stack[-3]
0x330: Stack[-4] = Stack[-2]
0x331: Stack[-6] = Stack[-1]
0x332: Call2 0x316

0x333: Pop(3)
0x334: Return(); Pop(2)

0x335: Stack[-1] = 0
0x336: PushEmpty(object, object)
0x337: @ FindActor(Stack[-1], Stack[-4])
0x338: Pop(0)
0x339: Pop(0); PushNull((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-5] = (bool) 0
0x33c: Return(); Pop(2)

0x33d: @ Trigger(Stack[-1], Stack[-3])
0x33e: Pop(0)
0x33f: Stack[-5] = (bool) 1
0x340: Return(); Pop(2)

0x341: Stack[-1] = 0
0x342: PushEmpty(float, float)
0x343: @ GetGameTime(Stack[-1])
0x344: Pop(0)
0x345: Stack[-1] = Stack[-3]
0x346: Return(); Pop(2)

0x347: PushEmpty()
0x348: PushEmpty(object, string, float)
0x349: PushEmpty(object)
0x34a: Call2 0x3d5

0x34b: Stack[-1] = Stack[-4]
0x34c: Pop(1)
0x34d: Stack[-2] = "pt_gatherer2" // @poff=284
0x34e: Stack[-1] = (int) 2
0x34f: Call2 0x3e6

0x350: Pop(3)
0x351: PushEmpty(object)
0x352: Call2 0x3d5

0x353: Pop(0)
0x354: @@ ShowMap(Stack[-1]); Obj=2 // @poff=310
0x355: Pop(1)
0x356: Return(); Pop(0)

0x357: PushEmpty(object, object)
0x358: Push("d7q04") // @poff=318
0x359: Push((int) 2)
0x35a: @ SetVariable(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: PushEmpty(object)
0x35d: Call2 0x3d5

0x35e: Stack[-1] = Stack[-2]
0x35f: Pop(1)
0x360: Push("d7q04WastedGotoGatherer") // @poff=330
0x361: Push("pt_gatherer2") // @poff=284
0x362: Push((int) 0)
0x363: Push((int) 508638)
0x364: PushEmpty(float)
0x365: Call2 0x342

0x366: Pop(0)
0x367: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=378
0x368: Pop(5)
0x369: PushEmpty()
0x36a: Call2 0x39f

0x36b: Pop(0)
0x36c: PushEmpty(bool, string, string)
0x36d: Stack[-2] = "quest_d7_04" // @poff=386
0x36e: Stack[-1] = "init_andrei" // @poff=410
0x36f: Call2 0x336

0x370: Pop(3)
0x371: Return(); Pop(2)

0x372: Stack[-1] = 0
0x373: PushEmpty(object, object)
0x374: Push("Rifle is given") // @poff=434
0x375: @ Trace(Stack[-1])
0x376: Pop(1)
0x377: @ CreateInvItem(Stack[-1])
0x378: Pop(0)
0x379: Push("Rifle") // @poff=464
0x37a: @@ SetItemName(Stack[-1]); Obj=2 // @poff=272
0x37b: Pop(1)
0x37c: Push("durability") // @poff=476
0x37d: Push((int) 100)
0x37e: @@ SetProperty(Stack[-2], Stack[-1]); Obj=3 // @poff=498
0x37f: Pop(2)
0x380: PushEmpty(object, object, int)
0x381: Stack[-7] = Stack[-3]
0x382: Stack[-4] = Stack[-2]
0x383: Stack[-1] = (int) 1
0x384: Call2 0x316

0x385: Pop(3)
0x386: Return(); Pop(2)

0x387: Stack[-1] = 0
0x388: PushEmpty()
0x389: Push("rifle ammo10 is given") // @poff=510
0x38a: @ Trace(Stack[-1])
0x38b: Pop(1)
0x38c: PushEmpty(object, string, int)
0x38d: Stack[-5] = Stack[-3]
0x38e: Stack[-2] = "rifle_ammo" // @poff=554
0x38f: Stack[-1] = (int) 10
0x390: Call2 0x329

0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(int, string)
0x395: Stack[-1] = "d7q04" // @poff=318
0x396: Call2 0x305

0x397: Pop(1)
0x398: Push((int) 1)
0x399: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-2] = (bool) 1
0x39c: Return(); Pop(0)

0x39d: Stack[-2] = (bool) 0
0x39e: Return(); Pop(0)

0x39f: PushEmpty(object, object)
0x3a0: Push((int) 639)
0x3a1: Push((int) 2)
0x3a2: Push((int) 533225)
0x3a3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: PushEmpty(bool, object, int)
0x3a6: Stack[-4] = Stack[-2]
0x3a7: Stack[-1] = (int) 637
0x3a8: Call2 0x3b9

0x3a9: Pop(3)
0x3aa: Return(); Pop(2)

0x3ab: Stack[-1] = 0
0x3ac: PushEmpty(object, object)
0x3ad: @ GetDiaryRoot(Stack[-1])
0x3ae: Pop(0)
0x3af: Pop(0); Push((bool) Stack[-1] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b1: Push("Can't retrieve diary root") // @poff=576
0x3b2: @ Trace(Stack[-1])
0x3b3: Pop(1)
0x3b4: Stack[-3] = (bool) 0
0x3b5: Return(); Pop(2)

0x3b6: Stack[-1] = Stack[-3]
0x3b7: Return(); Pop(2)

0x3b8: Stack[-1] = 0
0x3b9: PushEmpty(object, object, int, object, object, int)
0x3ba: PushEmpty(object)
0x3bb: Call2 0x3ac

0x3bc: Stack[-1] = Stack[-4]
0x3bd: Pop(1)
0x3be: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=628
0x3bf: Pop(0)
0x3c0: Pop(0); Push((bool) Stack[-2] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c2: Push("Can't find diary parent with id: ") // @poff=633
0x3c3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c4: @ Trace(Stack[-1])
0x3c5: Pop(1)
0x3c6: Stack[-9] = (bool) 0
0x3c7: Return(); Pop(6)

0x3c8: @@ AddChild(Stack[-8]); Obj=2 // @poff=701
0x3c9: Pop(0)
0x3ca: Push((int) 7)
0x3cb: @ SendWorldWndMessage(Stack[-1])
0x3cc: Pop(1)
0x3cd: @@ GetCategory(Stack[-1]); Obj=8 // @poff=710
0x3ce: Pop(0)
0x3cf: @ SetDiarySection(Stack[-1])
0x3d0: Pop(0)
0x3d1: Stack[-9] = (bool) 0
0x3d2: Return(); Pop(6)

0x3d3: Stack[-2] = 0
0x3d4: Stack[-3] = 0
0x3d5: PushEmpty(object, object, object, object)
0x3d6: @ GetMainOutdoorScene(Stack[-2])
0x3d7: Pop(0)
0x3d8: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3da: Push("Can't find main outdoor scene") // @poff=722
0x3db: @ Trace(Stack[-1])
0x3dc: Pop(1)
0x3dd: Stack[-1] = 0
0x3de: Stack[-1] = Stack[-5]
0x3df: Return(); Pop(4)

0x3e0: @@ GetMap(Stack[-1]); Obj=2 // @poff=782
0x3e1: Pop(0)
0x3e2: Stack[-1] = Stack[-5]
0x3e3: Return(); Pop(4)

0x3e4: Stack[-1] = 0
0x3e5: Stack[-2] = 0
0x3e6: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3e7: @ GetMainOutdoorScene(Stack[-2])
0x3e8: Pop(0)
0x3e9: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3eb: Push("Can't find main outdoor scene") // @poff=722
0x3ec: @ Trace(Stack[-1])
0x3ed: Pop(1)
0x3ee: Return(); Pop(8)

0x3ef: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=789
0x3f0: Pop(0)
0x3f1: Pop(0); Push((bool) Stack[-1] == 0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f3: Push("Warning: outdoor scene locator ") // @poff=800
0x3f4: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3f5: Push(" doesnt exist") // @poff=864
0x3f6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f7: @ Trace(Stack[-1])
0x3f8: Pop(1)
0x3f9: @@ GetMap(Stack[-11]); Obj=2 // @poff=782
0x3fa: Pop(0)
0x3fb: Pop(0); PushNull((bool) Stack[-11] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fd: Push("Can't find map") // @poff=892
0x3fe: @ Trace(Stack[-1])
0x3ff: Pop(1)
0x400: Return(); Pop(8)

0x401: Push(CvectorIndex(Stack[-4], 0))
0x402: Push(CvectorIndex(Stack[-5], 2))
0x403: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=922
0x404: Pop(2)
0x405: Return(); Pop(8)

0x406: Stack[-2] = 0
0x407: PushEmpty(int, int)
0x408: Push("branch") // @poff=935
0x409: @ GetVariable(Stack[-1], Stack[-2])
0x40a: Pop(1)
0x40b: Push((int) 0)
0x40c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40e: Stack[-3] = (int) 1
0x40f: Return(); Pop(2)

0x410: GOTO 0x416

0x411: Push((int) 1)
0x412: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-3] = (int) 2
0x415: Return(); Pop(2)

0x416: Stack[-3] = (int) 3
0x417: Return(); Pop(2)

0x418: PushEmpty(string, string)
0x419: Stack[-1] = "idle" // @poff=146
0x41a: Push(Stack[-3])
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x41d: Stack[-1] = Stack[-4]
0x41e: Return(); Pop(2)

0x41f: PushEmpty(int, bool, int, bool)
0x420: Stack[-2] = (int) 0
0x421: Push("all") // @poff=138
0x422: PushEmpty(string, int)
0x423: Stack[-5] = Stack[-1]
0x424: Call2 0x418

0x425: Pop(1)
0x426: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: Pop(0); Push((bool) Stack[-1] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: GOTO 0x42e

0x42b: Push((int) 1)
0x42c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x42d: GOTO 0x421

0x42e: Stack[-2] = Stack[-5]
0x42f: Return(); Pop(4)

0x430: Stack[-1] = (int) 515556
0x431: Return(); Pop(0)

0x432: Stack[-1] = (int) 503341
0x433: Return(); Pop(0)

0x434: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=949
0x435: Return(); Pop(0)

0x436: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=989
0x437: Return(); Pop(0)

0x438: Stack[-1] = (bool) 0
0x439: Return(); Pop(0)

