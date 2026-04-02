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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:b7q01
	W:b7q01PatrolGotoGorbun
	W:pt_map_gorbun
	A:AddMark
	W:quest_b7_01
	W:init_gorbun_house
	A:ShowMap
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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e00750070000000476574506f736974696f6e004765744579657348656967687400680065006100640000006200370071003000310000006200370071003000310050006100740072006f006c0047006f0074006f0047006f007200620075006e000000700074005f006d00610070005f0067006f007200620075006e0000004164644d61726b00710075006500730074005f00620037005f0030003100000069006e00690074005f0067006f007200620075006e005f0068006f00750073006500000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
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

RunOp = 0x159
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x14e Vars = (object)
		EVENT_26 Op = 0x182 Vars = (string)
		EVENT_5 Op = 0x18a Vars = ()
		EVENT_6 Op = 0x18f Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1fc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x356

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x354

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x358

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x35a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x343

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
0x41: Call2 0x240

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
0x4f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2cf

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x93

0x58: Pop(1)
0x59: Push((int) 520989)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 528466)
0x5f: Push((int) 29854)
0x60: Push((int) 29853)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x75

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x93

0x67: Pop(1)
0x68: Push((int) 528472)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 520992)
0x6e: Push((int) -1)
0x6f: Push((int) 22205)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x35c

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x251

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all") // @poff=138
0x85: Push("idle") // @poff=146
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all") // @poff=138
0x8e: Push("idle") // @poff=146
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x35c

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-3] = Stack[-2]
0x9f: Push("") // @poff=102
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x258

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x25e

0xae: Pop(0)
0xaf: Push((int) 22203)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2a3

0xb6: Pop(2)
0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x2bf

0xbb: Pop(2)
0xbc: Push((int) 22202)
0xbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xbf: PushEmpty(bool, object)
0xc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Call2 0x2cf

0xc2: Pop(1)
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x93

0xc7: Pop(1)
0xc8: Push((int) 520989)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: Push((int) 528466)
0xce: Push((int) 29854)
0xcf: Push((int) 29853)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral" // @poff=89
0xd5: Call2 0x93

0xd6: Pop(1)
0xd7: Push((int) 528472)
0xd8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd9: Pop(1)
0xda: @@@ ClearReplies(); Obj=0 // @poff=116
0xdb: Pop(0)
0xdc: Push((int) 520992)
0xdd: Push((int) -1)
0xde: Push((int) 22205)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 29854)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0x93

0xe8: Pop(1)
0xe9: Push((int) 528467)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 528468)
0xef: Push((int) 29856)
0xf0: Push((int) 29855)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 29856)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0x93

0xfa: Pop(1)
0xfb: Push((int) 528469)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: Push((int) 528470)
0x101: Push((int) 29858)
0x102: Push((int) 29857)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 29858)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x93

0x10c: Pop(1)
0x10d: Push((int) 528471)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 528473)
0x113: Push((int) 29861)
0x114: Push((int) 29860)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Push((int) 528477)
0x118: Push((int) 29863)
0x119: Push((int) 29864)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 29861)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral" // @poff=89
0x122: Call2 0x93

0x123: Pop(1)
0x124: Push((int) 528474)
0x125: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x126: Pop(1)
0x127: @@@ ClearReplies(); Obj=0 // @poff=116
0x128: Pop(0)
0x129: Push((int) 528475)
0x12a: Push((int) 29863)
0x12b: Push((int) 29862)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 29863)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral" // @poff=89
0x134: Call2 0x93

0x135: Pop(1)
0x136: Push((int) 528476)
0x137: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x138: Pop(1)
0x139: @@@ ClearReplies(); Obj=0 // @poff=116
0x13a: Pop(0)
0x13b: Push((int) 520990)
0x13c: Push((int) -1)
0x13d: Push((int) 22203)
0x13e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x142: PushEmpty(bool)
0x143: Call2 0x35c

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: @ lshStopAnimation()
0x147: Pop(0)
0x148: GOTO 0x14b

0x149: @ StopAnimation()
0x14a: Pop(0)
0x14b: Return(); Pop(0)

0x14c: GOTO 0xaa

0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty()
0x150: Call2 0x1f2

0x151: Pop(0)
0x152: PushEmpty(int, object)
0x153: Stack[-3] = Stack[-1]
0x154: Push(-2, 1); TaskCall(0)
0x155: Call2 0x0

0x156: Pop(-2, 1); TaskReturn
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: PushEmpty(float, float)
0x15a: PushEmpty(bool)
0x15b: Call2 0x1f7

0x15c: Pop(0)
0x15d: Pop(1); Push((bool) Stack[-1] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15f: @ Hold()
0x160: Pop(0)
0x161: GOTO 0x15a

0x162: Push((int) 3)
0x163: @ rand(Stack[-2], Stack[-1])
0x164: Pop(1)
0x165: Push((int) 3)
0x166: Pop(1); Push(Stack[-2] + Stack[-1]);
0x167: @ Sleep(Stack[-1])
0x168: Pop(1)
0x169: PushEmpty()
0x16a: Call2 0x1a1

0x16b: Pop(0)
0x16c: GOTO 0x15a

0x16d: Return(); Pop(2)

0x16e: PushEmpty(bool, bool)
0x16f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x170: @ IsLoaded(Stack[-1])
0x171: Pop(0)
0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 0
0x174: Pop(0); Push((bool) Stack[-2] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x19f

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Call2 0x265

0x17e: Pop(0)
0x17f: @ RemoveActor(Stack[-1])
0x180: Pop(1)
0x181: Return(); Pop(2)

0x182: PushEmpty()
0x183: Push("cleanup") // @poff=156
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: PushEmpty()
0x187: Call2 0x16e

0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: @ StopGroup0()
0x18b: Pop(0)
0x18c: @ sync()
0x18d: Pop(0)
0x18e: Return(); Pop(0)

0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: Push( Stack[0 + Tasks[-1].StackPointer] )
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(bool)
0x194: Call2 0x19f

0x195: Pop(0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: PushEmpty(object)
0x19a: Call2 0x265

0x19b: Pop(0)
0x19c: @ RemoveActor(Stack[-1])
0x19d: Pop(1)
0x19e: Return(); Pop(0)

0x19f: Stack[-1] = (bool) 1
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1a2: @ WaitForAnimEnd()
0x1a3: Pop(0)
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x1f7

0x1a6: Pop(0)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Return(); Pop(14)

0x1aa: PushEmpty(int)
0x1ab: Call2 0x292

0x1ac: Stack[-1] = Stack[-8]
0x1ad: Pop(1)
0x1ae: Stack[-6] = (int) 0
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: Push((int) 5)
0x1b2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x1f7

0x1b6: Pop(0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ba: Push((int) 3)
0x1bb: @ irand(Stack[-6], Stack[-1])
0x1bc: Pop(1)
0x1bd: Push((int) 0)
0x1be: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c0: Push(Stack[-7])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c2: @ irand(Stack[-4], Stack[-7])
0x1c3: Pop(0)
0x1c4: Push("all") // @poff=138
0x1c5: PushEmpty(string, int)
0x1c6: Stack[-7] = Stack[-1]
0x1c7: Call2 0x28b

0x1c8: Pop(1)
0x1c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: @ WaitForAnimEnd(Stack[-3])
0x1cc: Pop(0)
0x1cd: Pop(0); Push((bool) Stack[-3] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: GOTO 0x1ed

0x1d0: GOTO 0x1e2

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d4: Push((int) 4)
0x1d5: @ rand(Stack[-3], Stack[-1])
0x1d6: Pop(1)
0x1d7: Push((int) 1)
0x1d8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d9: @ Sleep(Stack[-1], Stack[-2])
0x1da: Pop(1)
0x1db: Pop(0); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: GOTO 0x1ed

0x1de: GOTO 0x1e2

0x1df: Push(Stack[-6])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: GOTO 0x1ed

0x1e2: PushEmpty(bool)
0x1e3: Call2 0x1f0

0x1e4: Pop(0)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1ed

0x1e8: @ ResetAAS()
0x1e9: Pop(0)
0x1ea: Push((int) 1)
0x1eb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ec: GOTO 0x1af

0x1ed: @ ResetAAS()
0x1ee: Pop(0)
0x1ef: Return(); Pop(14)

0x1f0: Stack[-1] = (bool) 1
0x1f1: Return(); Pop(0)

0x1f2: @ StopAnimation()
0x1f3: Pop(0)
0x1f4: @ StopGroup0()
0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(bool, bool)
0x1f8: @ IsLoaded(Stack[-1])
0x1f9: Pop(0)
0x1fa: Stack[-1] = Stack[-3]
0x1fb: Return(); Pop(2)

0x1fc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1fd: @@ GetPosition(Stack[-8]); Obj=20 // @poff=172
0x1fe: Pop(0)
0x1ff: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=184
0x200: Pop(0)
0x201: Push(CvectorIndex(Stack[-8], 1))
0x202: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x203: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x204: @ GetPosition(Stack[-7])
0x205: Pop(0)
0x206: @ GetEyesHeight(Stack[-9])
0x207: Pop(0)
0x208: Push(CvectorIndex(Stack[-7], 1))
0x209: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x20b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x20c: Push(CvectorIndex(Stack[-6], 1))
0x20d: Stack[-1] = (int) 0
0x20e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x20f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x210: Pop(1); Push(Sqrt(Stack[-1]))
0x211: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x212: Stack[-5] = -Stack[-6]; Pop(0);
0x213: Pop(0); Push(Stack[-6] * Stack[-19]);
0x214: PushEmpty(cvector, cvector)
0x215: Push([0.0, 1.0, 0.0])
0x216: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x217: Call2 0x26b

0x218: Pop(1)
0x219: Push((int) 25)
0x21a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21c: Push([0.0, 10.0, 0.0])
0x21d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x21e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x21f: @ IsOverrideActive(Stack[-2])
0x220: Pop(0)
0x221: Push(Stack[-2])
0x222: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x223: Stack[-21] = (bool) 0
0x224: Return(); Pop(18)

0x225: @ StopWorld()
0x226: Pop(0)
0x227: @ CameraTransit(Stack[-3], Stack[-5])
0x228: Pop(0)
0x229: Push(CvectorIndex(Stack[-4], 0))
0x22a: Push(CvectorIndex(Stack[-5], 2))
0x22b: @ Rotate(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: PushEmpty(bool)
0x22e: Call2 0x35c

0x22f: Pop(0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x23a

0x232: Push("head") // @poff=198
0x233: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x234: Pop(1)
0x235: Push(Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x237: Push("head") // @poff=198
0x238: @ LookAsyncCamera(Stack[-1])
0x239: Pop(1)
0x23a: @ CameraWaitForPlayFinish()
0x23b: Pop(0)
0x23c: @ ResumeWorld()
0x23d: Pop(0)
0x23e: Stack[-21] = (bool) 1
0x23f: Return(); Pop(18)

0x240: PushEmpty(bool, bool)
0x241: @ CameraSwitchToNormal()
0x242: Pop(0)
0x243: PushEmpty(bool)
0x244: Call2 0x35c

0x245: Pop(0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x250

0x248: Push("head") // @poff=198
0x249: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24a: Pop(1)
0x24b: Push(Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24d: Push("head") // @poff=198
0x24e: @ UnlookAsync(Stack[-1])
0x24f: Pop(1)
0x250: Return(); Pop(2)

0x251: PushEmpty(float, float, float, float)
0x252: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x253: Pop(0)
0x254: Push((bool) 0)
0x255: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(1)
0x257: Return(); Pop(4)

0x258: PushEmpty(float, float, float, float)
0x259: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x25a: Pop(0)
0x25b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x25c: Pop(0)
0x25d: Return(); Pop(4)

0x25e: PushEmpty(bool)
0x25f: Call2 0x35c

0x260: Pop(0)
0x261: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x262: @ lshStopSpeech()
0x263: Pop(0)
0x264: Return(); Pop(0)

0x265: PushEmpty(object, object)
0x266: @ self(Stack[-1])
0x267: Pop(0)
0x268: Stack[-1] = Stack[-3]
0x269: Return(); Pop(2)

0x26a: Stack[-1] = 0
0x26b: PushEmpty(float, float)
0x26c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x26d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x26e: Push((float)9.999999974752427e-07)
0x26f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-4] = [0.0, 0.0, 0.0]
0x272: Return(); Pop(2)

0x273: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x274: Return(); Pop(2)

0x275: PushEmpty(int, int)
0x276: @ GetVariable(Stack[-3], Stack[-1])
0x277: Pop(0)
0x278: Stack[-1] = Stack[-4]
0x279: Return(); Pop(2)

0x27a: PushEmpty(object, object)
0x27b: @ FindActor(Stack[-1], Stack[-4])
0x27c: Pop(0)
0x27d: Pop(0); PushNull((bool) Stack[-1] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-5] = (bool) 0
0x280: Return(); Pop(2)

0x281: @ Trigger(Stack[-1], Stack[-3])
0x282: Pop(0)
0x283: Stack[-5] = (bool) 1
0x284: Return(); Pop(2)

0x285: Stack[-1] = 0
0x286: PushEmpty(float, float)
0x287: @ GetGameTime(Stack[-1])
0x288: Pop(0)
0x289: Stack[-1] = Stack[-3]
0x28a: Return(); Pop(2)

0x28b: PushEmpty(string, string)
0x28c: Stack[-1] = "idle" // @poff=146
0x28d: Push(Stack[-3])
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x290: Stack[-1] = Stack[-4]
0x291: Return(); Pop(2)

0x292: PushEmpty(int, bool, int, bool)
0x293: Stack[-2] = (int) 0
0x294: Push("all") // @poff=138
0x295: PushEmpty(string, int)
0x296: Stack[-5] = Stack[-1]
0x297: Call2 0x28b

0x298: Pop(1)
0x299: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: Pop(0); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a1

0x29e: Push((int) 1)
0x29f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a0: GOTO 0x294

0x2a1: Stack[-2] = Stack[-5]
0x2a2: Return(); Pop(4)

0x2a3: PushEmpty(object, object)
0x2a4: Push("b7q01") // @poff=208
0x2a5: Push((int) 4)
0x2a6: @ SetVariable(Stack[-2], Stack[-1])
0x2a7: Pop(2)
0x2a8: PushEmpty(object)
0x2a9: Call2 0x311

0x2aa: Stack[-1] = Stack[-2]
0x2ab: Pop(1)
0x2ac: Push("b7q01PatrolGotoGorbun") // @poff=220
0x2ad: Push("pt_map_gorbun") // @poff=264
0x2ae: Push((int) 1)
0x2af: Push((int) 521025)
0x2b0: PushEmpty(float)
0x2b1: Call2 0x286

0x2b2: Pop(0)
0x2b3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=292
0x2b4: Pop(5)
0x2b5: PushEmpty()
0x2b6: Call2 0x2db

0x2b7: Pop(0)
0x2b8: PushEmpty(bool, string, string)
0x2b9: Stack[-2] = "quest_b7_01" // @poff=300
0x2ba: Stack[-1] = "init_gorbun_house" // @poff=324
0x2bb: Call2 0x27a

0x2bc: Pop(3)
0x2bd: Return(); Pop(2)

0x2be: Stack[-1] = 0
0x2bf: PushEmpty()
0x2c0: PushEmpty(object, string, float)
0x2c1: PushEmpty(object)
0x2c2: Call2 0x311

0x2c3: Stack[-1] = Stack[-4]
0x2c4: Pop(1)
0x2c5: Stack[-2] = "pt_map_gorbun" // @poff=264
0x2c6: Stack[-1] = (int) 2
0x2c7: Call2 0x322

0x2c8: Pop(3)
0x2c9: PushEmpty(object)
0x2ca: Call2 0x311

0x2cb: Pop(0)
0x2cc: @@ ShowMap(Stack[-1]); Obj=2 // @poff=360
0x2cd: Pop(1)
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: PushEmpty(int, string)
0x2d1: Stack[-1] = "b7q01" // @poff=208
0x2d2: Call2 0x275

0x2d3: Pop(1)
0x2d4: Push((int) 3)
0x2d5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-2] = (bool) 1
0x2d8: Return(); Pop(0)

0x2d9: Stack[-2] = (bool) 0
0x2da: Return(); Pop(0)

0x2db: PushEmpty(object, object)
0x2dc: Push((int) 257)
0x2dd: Push((int) 1)
0x2de: Push((int) 521029)
0x2df: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(3)
0x2e1: PushEmpty(bool, object, int)
0x2e2: Stack[-4] = Stack[-2]
0x2e3: Stack[-1] = (int) 253
0x2e4: Call2 0x2f5

0x2e5: Pop(3)
0x2e6: Return(); Pop(2)

0x2e7: Stack[-1] = 0
0x2e8: PushEmpty(object, object)
0x2e9: @ GetDiaryRoot(Stack[-1])
0x2ea: Pop(0)
0x2eb: Pop(0); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: Push("Can't retrieve diary root") // @poff=368
0x2ee: @ Trace(Stack[-1])
0x2ef: Pop(1)
0x2f0: Stack[-3] = (bool) 0
0x2f1: Return(); Pop(2)

0x2f2: Stack[-1] = Stack[-3]
0x2f3: Return(); Pop(2)

0x2f4: Stack[-1] = 0
0x2f5: PushEmpty(object, object, int, object, object, int)
0x2f6: PushEmpty(object)
0x2f7: Call2 0x2e8

0x2f8: Stack[-1] = Stack[-4]
0x2f9: Pop(1)
0x2fa: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=420
0x2fb: Pop(0)
0x2fc: Pop(0); Push((bool) Stack[-2] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2fe: Push("Can't find diary parent with id: ") // @poff=425
0x2ff: Pop(1); Push(Stack[-1] + Stack[-8]);
0x300: @ Trace(Stack[-1])
0x301: Pop(1)
0x302: Stack[-9] = (bool) 0
0x303: Return(); Pop(6)

0x304: @@ AddChild(Stack[-8]); Obj=2 // @poff=493
0x305: Pop(0)
0x306: Push((int) 7)
0x307: @ SendWorldWndMessage(Stack[-1])
0x308: Pop(1)
0x309: @@ GetCategory(Stack[-1]); Obj=8 // @poff=502
0x30a: Pop(0)
0x30b: @ SetDiarySection(Stack[-1])
0x30c: Pop(0)
0x30d: Stack[-9] = (bool) 0
0x30e: Return(); Pop(6)

0x30f: Stack[-2] = 0
0x310: Stack[-3] = 0
0x311: PushEmpty(object, object, object, object)
0x312: @ GetMainOutdoorScene(Stack[-2])
0x313: Pop(0)
0x314: Pop(0); PushNull((bool) Stack[-2] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: Push("Can't find main outdoor scene") // @poff=514
0x317: @ Trace(Stack[-1])
0x318: Pop(1)
0x319: Stack[-1] = 0
0x31a: Stack[-1] = Stack[-5]
0x31b: Return(); Pop(4)

0x31c: @@ GetMap(Stack[-1]); Obj=2 // @poff=574
0x31d: Pop(0)
0x31e: Stack[-1] = Stack[-5]
0x31f: Return(); Pop(4)

0x320: Stack[-1] = 0
0x321: Stack[-2] = 0
0x322: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x323: @ GetMainOutdoorScene(Stack[-2])
0x324: Pop(0)
0x325: Pop(0); PushNull((bool) Stack[-2] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x327: Push("Can't find main outdoor scene") // @poff=514
0x328: @ Trace(Stack[-1])
0x329: Pop(1)
0x32a: Return(); Pop(8)

0x32b: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=581
0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: Push("Warning: outdoor scene locator ") // @poff=592
0x330: Pop(1); Push(Stack[-1] + Stack[-11]);
0x331: Push(" doesnt exist") // @poff=656
0x332: Pop(2); Push(Stack[-2] + Stack[-1]);
0x333: @ Trace(Stack[-1])
0x334: Pop(1)
0x335: @@ GetMap(Stack[-11]); Obj=2 // @poff=574
0x336: Pop(0)
0x337: Pop(0); PushNull((bool) Stack[-11] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x339: Push("Can't find map") // @poff=684
0x33a: @ Trace(Stack[-1])
0x33b: Pop(1)
0x33c: Return(); Pop(8)

0x33d: Push(CvectorIndex(Stack[-4], 0))
0x33e: Push(CvectorIndex(Stack[-5], 2))
0x33f: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=714
0x340: Pop(2)
0x341: Return(); Pop(8)

0x342: Stack[-2] = 0
0x343: PushEmpty(int, int)
0x344: Push("branch") // @poff=727
0x345: @ GetVariable(Stack[-1], Stack[-2])
0x346: Pop(1)
0x347: Push((int) 0)
0x348: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34a: Stack[-3] = (int) 1
0x34b: Return(); Pop(2)

0x34c: GOTO 0x352

0x34d: Push((int) 1)
0x34e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x350: Stack[-3] = (int) 2
0x351: Return(); Pop(2)

0x352: Stack[-3] = (int) 3
0x353: Return(); Pop(2)

0x354: Stack[-1] = (int) 515572
0x355: Return(); Pop(0)

0x356: Stack[-1] = (int) 504031
0x357: Return(); Pop(0)

0x358: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=741
0x359: Return(); Pop(0)

0x35a: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=781
0x35b: Return(); Pop(0)

0x35c: Stack[-1] = (bool) 0
0x35d: Return(); Pop(0)

