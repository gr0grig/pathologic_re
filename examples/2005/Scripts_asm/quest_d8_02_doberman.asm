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
	W:pt_map_kapella
	A:ShowMap
	W:d8q02
	W:d8q02GotoKapella
	A:AddMark
	W:ood8Doberman1
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400700074005f006d00610070005f006b006100700065006c006c006100000053686f774d6170006400380071003000320000006400380071003000320047006f0074006f004b006100700065006c006c00610000004164644d61726b006f006f006400380044006f006200650072006d0061006e0031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	HasAnimation (3 args)

RunOp = 0x1ad
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1b3 Vars = (object)
		EVENT_26 Op = 0x1e8 Vars = (string)
		EVENT_5 Op = 0x1f0 Vars = ()
		EVENT_6 Op = 0x1f5 Vars = ()
		EVENT_7 Op = 0x234 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2bc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x420

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x41e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x422

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x424

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3f5

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
0x41: Call2 0x300

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
0x54: Push((int) 533313)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x374

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 535847)
0x5f: Push((int) 37548)
0x60: Push((int) 37547)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 535882)
0x64: Push((int) -1)
0x65: Push((int) 37588)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 535851)
0x69: Push((int) -1)
0x6a: Push((int) 37551)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x426

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x311

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
0x90: Call2 0x426

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
0xa0: Call2 0x318

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x329

0xa9: Pop(0)
0xaa: Push((int) 34820)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x35a

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x34a

0xb6: Pop(2)
0xb7: Push((int) 37604)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x35a

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x34a

0xc3: Pop(2)
0xc4: Push((int) 34821)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc7: PushEmpty(string)
0xc8: Stack[-1] = "Neutral" // @poff=89
0xc9: Call2 0x8e

0xca: Pop(1)
0xcb: Push((int) 533313)
0xcc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xcd: Pop(1)
0xce: @@@ ClearReplies(); Obj=0 // @poff=116
0xcf: Pop(0)
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x374

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: Push((int) 535847)
0xd6: Push((int) 37548)
0xd7: Push((int) 37547)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Push((int) 535882)
0xdb: Push((int) -1)
0xdc: Push((int) 37588)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Push((int) 535851)
0xe0: Push((int) -1)
0xe1: Push((int) 37551)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 37548)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral" // @poff=89
0xea: Call2 0x8e

0xeb: Pop(1)
0xec: Push((int) 535848)
0xed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xee: Pop(1)
0xef: @@@ ClearReplies(); Obj=0 // @poff=116
0xf0: Pop(0)
0xf1: Push((int) 535883)
0xf2: Push((int) 37590)
0xf3: Push((int) 37589)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: Push((int) 535849)
0xf7: Push((int) 37590)
0xf8: Push((int) 37549)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 37590)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral" // @poff=89
0x101: Call2 0x8e

0x102: Pop(1)
0x103: Push((int) 535884)
0x104: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x105: Pop(1)
0x106: @@@ ClearReplies(); Obj=0 // @poff=116
0x107: Pop(0)
0x108: Push((int) 535885)
0x109: Push((int) 37550)
0x10a: Push((int) 37591)
0x10b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10c: Pop(3)
0x10d: Push((int) 535886)
0x10e: Push((int) 37550)
0x10f: Push((int) 37592)
0x110: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 37550)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral" // @poff=89
0x118: Call2 0x8e

0x119: Pop(1)
0x11a: Push((int) 535850)
0x11b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11c: Pop(1)
0x11d: @@@ ClearReplies(); Obj=0 // @poff=116
0x11e: Pop(0)
0x11f: Push((int) 535887)
0x120: Push((int) 37595)
0x121: Push((int) 37594)
0x122: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 37595)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral" // @poff=89
0x12a: Call2 0x8e

0x12b: Pop(1)
0x12c: Push((int) 535888)
0x12d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12e: Pop(1)
0x12f: @@@ ClearReplies(); Obj=0 // @poff=116
0x130: Pop(0)
0x131: Push((int) 533308)
0x132: Push((int) 34817)
0x133: Push((int) 34816)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Push((int) 535889)
0x137: Push((int) 37605)
0x138: Push((int) 37597)
0x139: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 37605)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral" // @poff=89
0x141: Call2 0x8e

0x142: Pop(1)
0x143: Push((int) 535896)
0x144: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x145: Pop(1)
0x146: @@@ ClearReplies(); Obj=0 // @poff=116
0x147: Pop(0)
0x148: Push((int) 535897)
0x149: Push((int) 37600)
0x14a: Push((int) 37606)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 34817)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral" // @poff=89
0x153: Call2 0x8e

0x154: Pop(1)
0x155: Push((int) 533309)
0x156: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x157: Pop(1)
0x158: @@@ ClearReplies(); Obj=0 // @poff=116
0x159: Pop(0)
0x15a: Push((int) 533310)
0x15b: Push((int) 34819)
0x15c: Push((int) 34818)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Push((int) 535890)
0x160: Push((int) 37601)
0x161: Push((int) 37598)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 37601)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral" // @poff=89
0x16a: Call2 0x8e

0x16b: Pop(1)
0x16c: Push((int) 535893)
0x16d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16e: Pop(1)
0x16f: @@@ ClearReplies(); Obj=0 // @poff=116
0x170: Pop(0)
0x171: Push((int) 535894)
0x172: Push((int) 37600)
0x173: Push((int) 37602)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 34819)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral" // @poff=89
0x17c: Call2 0x8e

0x17d: Pop(1)
0x17e: Push((int) 533311)
0x17f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x180: Pop(1)
0x181: @@@ ClearReplies(); Obj=0 // @poff=116
0x182: Pop(0)
0x183: Push((int) 535891)
0x184: Push((int) 37600)
0x185: Push((int) 37599)
0x186: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 37600)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Neutral" // @poff=89
0x18e: Call2 0x8e

0x18f: Pop(1)
0x190: Push((int) 535892)
0x191: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x192: Pop(1)
0x193: @@@ ClearReplies(); Obj=0 // @poff=116
0x194: Pop(0)
0x195: Push((int) 533312)
0x196: Push((int) -1)
0x197: Push((int) 34820)
0x198: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x199: Pop(3)
0x19a: Push((int) 535895)
0x19b: Push((int) -1)
0x19c: Push((int) 37604)
0x19d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a1: PushEmpty(bool)
0x1a2: Call2 0x426

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: @ lshStopAnimation()
0x1a6: Pop(0)
0x1a7: GOTO 0x1aa

0x1a8: @ StopAnimation()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: GOTO 0xa5

0x1ac: Return(); Pop(0)

0x1ad: PushEmpty(float, float)
0x1ae: Stack[-2] = (int) 300
0x1af: Stack[-1] = (int) 100
0x1b0: Call2 0x1bb

0x1b1: Pop(2)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: PushEmpty(int, object)
0x1b5: Stack[-3] = Stack[-1]
0x1b6: Push(-2, 1); TaskCall(0)
0x1b7: Call2 0x0

0x1b8: Pop(-2, 1); TaskReturn
0x1b9: Pop(2)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty(float, float)
0x1bc: PushEmpty(bool)
0x1bd: Call2 0x2b7

0x1be: Pop(0)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: @ Hold()
0x1c2: Pop(0)
0x1c3: GOTO 0x1bc

0x1c4: Push((int) 3)
0x1c5: @ rand(Stack[-2], Stack[-1])
0x1c6: Pop(1)
0x1c7: Push((int) 3)
0x1c8: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1c9: @ Sleep(Stack[-1])
0x1ca: Pop(1)
0x1cb: PushEmpty(float, float)
0x1cc: Stack[-6] = Stack[-2]
0x1cd: Stack[-5] = Stack[-1]
0x1ce: Call2 0x20a

0x1cf: Pop(2)
0x1d0: @ sync()
0x1d1: Pop(0)
0x1d2: GOTO 0x1bc

0x1d3: Return(); Pop(2)

0x1d4: PushEmpty(bool, bool)
0x1d5: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1d6: @ IsLoaded(Stack[-1])
0x1d7: Pop(0)
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 0
0x1da: Pop(0); Push((bool) Stack[-2] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(bool)
0x1dd: Call2 0x208

0x1de: Pop(0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: Stack[-1] = (bool) 1
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object)
0x1e3: Call2 0x330

0x1e4: Pop(0)
0x1e5: @ RemoveActor(Stack[-1])
0x1e6: Pop(1)
0x1e7: Return(); Pop(2)

0x1e8: PushEmpty()
0x1e9: Push("cleanup") // @poff=156
0x1ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ec: PushEmpty()
0x1ed: Call2 0x1d4

0x1ee: Pop(0)
0x1ef: Return(); Pop(0)

0x1f0: @ StopGroup0()
0x1f1: Pop(0)
0x1f2: @ sync()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: Call2 0x24b

0x1f7: Pop(0)
0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x208

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(object)
0x203: Call2 0x330

0x204: Pop(0)
0x205: @ RemoveActor(Stack[-1])
0x206: Pop(1)
0x207: Return(); Pop(0)

0x208: Stack[-1] = (bool) 1
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(bool)
0x20c: Call2 0x2b7

0x20d: Pop(0)
0x20e: Pop(1); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Return(); Pop(0)

0x211: Push("player") // @poff=172
0x212: @ FindActor(Stack[-4]T, Stack[-1])
0x213: Pop(1)
0x214: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x215: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x216: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x217: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x218: Push((int) 10)
0x219: Push((float)1.0)
0x21a: @ SetTimer(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: PushEmpty()
0x21d: Call2 0x259

0x21e: Pop(0)
0x21f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x221: Push((int) 10)
0x222: @ KillTimer(Stack[-1])
0x223: Pop(1)
0x224: Return(); Pop(0)

0x225: PushEmpty(float, float)
0x226: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: Stack[-3] = (bool) 0
0x229: Return(); Pop(2)

0x22a: PushEmpty(float, object)
0x22b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22c: Call2 0x2af

0x22d: Pop(1)
0x22e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x22f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x232: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Push((int) 10)
0x236: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x238: PushEmpty(bool)
0x239: Call2 0x225

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: PushEmpty(object)
0x23f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x240: Call2 0x31e

0x241: Pop(1)
0x242: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x243: GOTO 0x24a

0x244: Push( Stack[2 + Tasks[-1].StackPointer] )
0x245: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x246: Push("head") // @poff=186
0x247: @ UnlookAsync(Stack[-1])
0x248: Pop(1)
0x249: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24a: Return(); Pop(0)

0x24b: PushEmpty()
0x24c: Call2 0x2aa

0x24d: Pop(0)
0x24e: Push((int) 10)
0x24f: @ KillTimer(Stack[-1])
0x250: Pop(1)
0x251: Push( Stack[2 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x253: Push("head") // @poff=186
0x254: @ UnlookAsync(Stack[-1])
0x255: Pop(1)
0x256: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x257: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x258: Return(); Pop(0)

0x259: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x25a: @ WaitForAnimEnd()
0x25b: Pop(0)
0x25c: PushEmpty(bool)
0x25d: Call2 0x2b7

0x25e: Pop(0)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(14)

0x262: PushEmpty(int)
0x263: Call2 0x40d

0x264: Stack[-1] = Stack[-8]
0x265: Pop(1)
0x266: Stack[-6] = (int) 0
0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 0
0x269: Push((int) 5)
0x26a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: PushEmpty(bool)
0x26d: Call2 0x2b7

0x26e: Pop(0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-1] = (bool) 1
0x271: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x272: Push((int) 3)
0x273: @ irand(Stack[-6], Stack[-1])
0x274: Pop(1)
0x275: Push((int) 0)
0x276: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x278: Push(Stack[-7])
0x279: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x27a: @ irand(Stack[-4], Stack[-7])
0x27b: Pop(0)
0x27c: Push("all") // @poff=138
0x27d: PushEmpty(string, int)
0x27e: Stack[-7] = Stack[-1]
0x27f: Call2 0x406

0x280: Pop(1)
0x281: @ PlayAnimation(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: @ WaitForAnimEnd(Stack[-3])
0x284: Pop(0)
0x285: Pop(0); Push((bool) Stack[-3] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x2a5

0x288: GOTO 0x29a

0x289: Push((int) 1)
0x28a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28c: Push((int) 4)
0x28d: @ rand(Stack[-3], Stack[-1])
0x28e: Pop(1)
0x28f: Push((int) 1)
0x290: Pop(1); Push(Stack[-3] + Stack[-1]);
0x291: @ Sleep(Stack[-1], Stack[-2])
0x292: Pop(1)
0x293: Pop(0); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x2a5

0x296: GOTO 0x29a

0x297: Push(Stack[-6])
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: GOTO 0x2a5

0x29a: PushEmpty(bool)
0x29b: Call2 0x2a8

0x29c: Pop(0)
0x29d: Pop(1); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2a5

0x2a0: @ ResetAAS()
0x2a1: Pop(0)
0x2a2: Push((int) 1)
0x2a3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2a4: GOTO 0x267

0x2a5: @ ResetAAS()
0x2a6: Pop(0)
0x2a7: Return(); Pop(14)

0x2a8: Stack[-1] = (bool) 1
0x2a9: Return(); Pop(0)

0x2aa: @ StopAnimation()
0x2ab: Pop(0)
0x2ac: @ StopGroup0()
0x2ad: Pop(0)
0x2ae: Return(); Pop(0)

0x2af: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b0: @ GetPosition(Stack[-3])
0x2b1: Pop(0)
0x2b2: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x2b3: Pop(0)
0x2b4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b6: Return(); Pop(6)

0x2b7: PushEmpty(bool, bool)
0x2b8: @ IsLoaded(Stack[-1])
0x2b9: Pop(0)
0x2ba: Stack[-1] = Stack[-3]
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2bd: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2be: Pop(0)
0x2bf: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2c0: Pop(0)
0x2c1: Push(CvectorIndex(Stack[-8], 1))
0x2c2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c4: @ GetPosition(Stack[-7])
0x2c5: Pop(0)
0x2c6: @ GetEyesHeight(Stack[-9])
0x2c7: Pop(0)
0x2c8: Push(CvectorIndex(Stack[-7], 1))
0x2c9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ca: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2cc: Push(CvectorIndex(Stack[-6], 1))
0x2cd: Stack[-1] = (int) 0
0x2ce: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2cf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d0: Pop(1); Push(Sqrt(Stack[-1]))
0x2d1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d2: Stack[-5] = -Stack[-6]; Pop(0);
0x2d3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d4: PushEmpty(cvector, cvector)
0x2d5: Push([0.0, 1.0, 0.0])
0x2d6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d7: Call2 0x336

0x2d8: Pop(1)
0x2d9: Push((int) 25)
0x2da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2dc: Push([0.0, 10.0, 0.0])
0x2dd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2de: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2df: @ IsOverrideActive(Stack[-2])
0x2e0: Pop(0)
0x2e1: Push(Stack[-2])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-21] = (bool) 0
0x2e4: Return(); Pop(18)

0x2e5: @ StopWorld()
0x2e6: Pop(0)
0x2e7: @ CameraTransit(Stack[-3], Stack[-5])
0x2e8: Pop(0)
0x2e9: Push(CvectorIndex(Stack[-4], 0))
0x2ea: Push(CvectorIndex(Stack[-5], 2))
0x2eb: @ Rotate(Stack[-2], Stack[-1])
0x2ec: Pop(2)
0x2ed: PushEmpty(bool)
0x2ee: Call2 0x426

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: GOTO 0x2fa

0x2f2: Push("head") // @poff=186
0x2f3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f4: Pop(1)
0x2f5: Push(Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f7: Push("head") // @poff=186
0x2f8: @ LookAsyncCamera(Stack[-1])
0x2f9: Pop(1)
0x2fa: @ CameraWaitForPlayFinish()
0x2fb: Pop(0)
0x2fc: @ ResumeWorld()
0x2fd: Pop(0)
0x2fe: Stack[-21] = (bool) 1
0x2ff: Return(); Pop(18)

0x300: PushEmpty(bool, bool)
0x301: @ CameraSwitchToNormal()
0x302: Pop(0)
0x303: PushEmpty(bool)
0x304: Call2 0x426

0x305: Pop(0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x310

0x308: Push("head") // @poff=186
0x309: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30a: Pop(1)
0x30b: Push(Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: Push("head") // @poff=186
0x30e: @ UnlookAsync(Stack[-1])
0x30f: Pop(1)
0x310: Return(); Pop(2)

0x311: PushEmpty(float, float, float, float)
0x312: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x313: Pop(0)
0x314: Push((bool) 0)
0x315: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x316: Pop(1)
0x317: Return(); Pop(4)

0x318: PushEmpty(float, float, float, float)
0x319: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x31a: Pop(0)
0x31b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x31c: Pop(0)
0x31d: Return(); Pop(4)

0x31e: PushEmpty(float, cvector, float, cvector)
0x31f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x320: Pop(0)
0x321: Stack[-1] = [0.0, 0.0, 0.0]
0x322: Push(CvectorIndex(Stack[-1], 1))
0x323: Stack[-3] = Stack[-1]
0x324: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x325: Push("head") // @poff=186
0x326: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x327: Pop(1)
0x328: Return(); Pop(4)

0x329: PushEmpty(bool)
0x32a: Call2 0x426

0x32b: Pop(0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: @ lshStopSpeech()
0x32e: Pop(0)
0x32f: Return(); Pop(0)

0x330: PushEmpty(object, object)
0x331: @ self(Stack[-1])
0x332: Pop(0)
0x333: Stack[-1] = Stack[-3]
0x334: Return(); Pop(2)

0x335: Stack[-1] = 0
0x336: PushEmpty(float, float)
0x337: Pop(0); Push(Stack[-3] | Stack[-3]);
0x338: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x339: Push((float)9.999999974752427e-07)
0x33a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-4] = [0.0, 0.0, 0.0]
0x33d: Return(); Pop(2)

0x33e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x33f: Return(); Pop(2)

0x340: PushEmpty(int, int)
0x341: @ GetVariable(Stack[-3], Stack[-1])
0x342: Pop(0)
0x343: Stack[-1] = Stack[-4]
0x344: Return(); Pop(2)

0x345: PushEmpty(float, float)
0x346: @ GetGameTime(Stack[-1])
0x347: Pop(0)
0x348: Stack[-1] = Stack[-3]
0x349: Return(); Pop(2)

0x34a: PushEmpty()
0x34b: PushEmpty(object, string, float)
0x34c: PushEmpty(object)
0x34d: Call2 0x3c3

0x34e: Stack[-1] = Stack[-4]
0x34f: Pop(1)
0x350: Stack[-2] = "pt_map_kapella" // @poff=222
0x351: Stack[-1] = (int) 2
0x352: Call2 0x3d4

0x353: Pop(3)
0x354: PushEmpty(object)
0x355: Call2 0x3c3

0x356: Pop(0)
0x357: @@ ShowMap(Stack[-1]); Obj=2 // @poff=252
0x358: Pop(1)
0x359: Return(); Pop(0)

0x35a: PushEmpty(object, object)
0x35b: Push("d8q02") // @poff=260
0x35c: Push((int) 1)
0x35d: @ SetVariable(Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: PushEmpty(object)
0x360: Call2 0x3c3

0x361: Stack[-1] = Stack[-2]
0x362: Pop(1)
0x363: Push("d8q02GotoKapella") // @poff=272
0x364: Push("pt_map_kapella") // @poff=222
0x365: Push((int) 0)
0x366: Push((int) 540068)
0x367: PushEmpty(float)
0x368: Call2 0x345

0x369: Pop(0)
0x36a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=306
0x36b: Pop(5)
0x36c: PushEmpty()
0x36d: Call2 0x380

0x36e: Pop(0)
0x36f: PushEmpty()
0x370: Call2 0x38d

0x371: Pop(0)
0x372: Return(); Pop(2)

0x373: Stack[-1] = 0
0x374: PushEmpty()
0x375: PushEmpty(int, string)
0x376: Stack[-1] = "ood8Doberman1" // @poff=314
0x377: Call2 0x340

0x378: Pop(1)
0x379: Push((int) 0)
0x37a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37c: Stack[-2] = (bool) 1
0x37d: Return(); Pop(0)

0x37e: Stack[-2] = (bool) 0
0x37f: Return(); Pop(0)

0x380: PushEmpty(object, object)
0x381: Push((int) 127)
0x382: Push((int) 2)
0x383: Push((int) 513772)
0x384: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: PushEmpty(bool, object, int)
0x387: Stack[-4] = Stack[-2]
0x388: Stack[-1] = (int) -1
0x389: Call2 0x3a7

0x38a: Pop(3)
0x38b: Return(); Pop(2)

0x38c: Stack[-1] = 0
0x38d: PushEmpty(object, object)
0x38e: Push((int) 648)
0x38f: Push((int) 2)
0x390: Push((int) 533321)
0x391: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: PushEmpty(bool, object, int)
0x394: Stack[-4] = Stack[-2]
0x395: Stack[-1] = (int) 127
0x396: Call2 0x3a7

0x397: Pop(3)
0x398: Return(); Pop(2)

0x399: Stack[-1] = 0
0x39a: PushEmpty(object, object)
0x39b: @ GetDiaryRoot(Stack[-1])
0x39c: Pop(0)
0x39d: Pop(0); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39f: Push("Can't retrieve diary root") // @poff=342
0x3a0: @ Trace(Stack[-1])
0x3a1: Pop(1)
0x3a2: Stack[-3] = (bool) 0
0x3a3: Return(); Pop(2)

0x3a4: Stack[-1] = Stack[-3]
0x3a5: Return(); Pop(2)

0x3a6: Stack[-1] = 0
0x3a7: PushEmpty(object, object, int, object, object, int)
0x3a8: PushEmpty(object)
0x3a9: Call2 0x39a

0x3aa: Stack[-1] = Stack[-4]
0x3ab: Pop(1)
0x3ac: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=394
0x3ad: Pop(0)
0x3ae: Pop(0); Push((bool) Stack[-2] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b0: Push("Can't find diary parent with id: ") // @poff=399
0x3b1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b2: @ Trace(Stack[-1])
0x3b3: Pop(1)
0x3b4: Stack[-9] = (bool) 0
0x3b5: Return(); Pop(6)

0x3b6: @@ AddChild(Stack[-8]); Obj=2 // @poff=467
0x3b7: Pop(0)
0x3b8: Push((int) 7)
0x3b9: @ SendWorldWndMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ GetCategory(Stack[-1]); Obj=8 // @poff=476
0x3bc: Pop(0)
0x3bd: @ SetDiarySection(Stack[-1])
0x3be: Pop(0)
0x3bf: Stack[-9] = (bool) 0
0x3c0: Return(); Pop(6)

0x3c1: Stack[-2] = 0
0x3c2: Stack[-3] = 0
0x3c3: PushEmpty(object, object, object, object)
0x3c4: @ GetMainOutdoorScene(Stack[-2])
0x3c5: Pop(0)
0x3c6: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c8: Push("Can't find main outdoor scene") // @poff=488
0x3c9: @ Trace(Stack[-1])
0x3ca: Pop(1)
0x3cb: Stack[-1] = 0
0x3cc: Stack[-1] = Stack[-5]
0x3cd: Return(); Pop(4)

0x3ce: @@ GetMap(Stack[-1]); Obj=2 // @poff=548
0x3cf: Pop(0)
0x3d0: Stack[-1] = Stack[-5]
0x3d1: Return(); Pop(4)

0x3d2: Stack[-1] = 0
0x3d3: Stack[-2] = 0
0x3d4: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3d5: @ GetMainOutdoorScene(Stack[-2])
0x3d6: Pop(0)
0x3d7: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d9: Push("Can't find main outdoor scene") // @poff=488
0x3da: @ Trace(Stack[-1])
0x3db: Pop(1)
0x3dc: Return(); Pop(8)

0x3dd: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=555
0x3de: Pop(0)
0x3df: Pop(0); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e1: Push("Warning: outdoor scene locator ") // @poff=566
0x3e2: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3e3: Push(" doesnt exist") // @poff=630
0x3e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e5: @ Trace(Stack[-1])
0x3e6: Pop(1)
0x3e7: @@ GetMap(Stack[-11]); Obj=2 // @poff=548
0x3e8: Pop(0)
0x3e9: Pop(0); PushNull((bool) Stack[-11] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3eb: Push("Can't find map") // @poff=658
0x3ec: @ Trace(Stack[-1])
0x3ed: Pop(1)
0x3ee: Return(); Pop(8)

0x3ef: Push(CvectorIndex(Stack[-4], 0))
0x3f0: Push(CvectorIndex(Stack[-5], 2))
0x3f1: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=688
0x3f2: Pop(2)
0x3f3: Return(); Pop(8)

0x3f4: Stack[-2] = 0
0x3f5: PushEmpty(int, int)
0x3f6: Push("branch") // @poff=701
0x3f7: @ GetVariable(Stack[-1], Stack[-2])
0x3f8: Pop(1)
0x3f9: Push((int) 0)
0x3fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fc: Stack[-3] = (int) 1
0x3fd: Return(); Pop(2)

0x3fe: GOTO 0x404

0x3ff: Push((int) 1)
0x400: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-3] = (int) 2
0x403: Return(); Pop(2)

0x404: Stack[-3] = (int) 3
0x405: Return(); Pop(2)

0x406: PushEmpty(string, string)
0x407: Stack[-1] = "idle" // @poff=146
0x408: Push(Stack[-3])
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x40b: Stack[-1] = Stack[-4]
0x40c: Return(); Pop(2)

0x40d: PushEmpty(int, bool, int, bool)
0x40e: Stack[-2] = (int) 0
0x40f: Push("all") // @poff=138
0x410: PushEmpty(string, int)
0x411: Stack[-5] = Stack[-1]
0x412: Call2 0x406

0x413: Pop(1)
0x414: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(2)
0x416: Pop(0); Push((bool) Stack[-1] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x418: GOTO 0x41c

0x419: Push((int) 1)
0x41a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41b: GOTO 0x40f

0x41c: Stack[-2] = Stack[-5]
0x41d: Return(); Pop(4)

0x41e: Stack[-1] = (int) 518097
0x41f: Return(); Pop(0)

0x420: Stack[-1] = (int) 518096
0x421: Return(); Pop(0)

0x422: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=715
0x423: Return(); Pop(0)

0x424: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=755
0x425: Return(); Pop(0)

0x426: Stack[-1] = (bool) 0
0x427: Return(); Pop(0)

