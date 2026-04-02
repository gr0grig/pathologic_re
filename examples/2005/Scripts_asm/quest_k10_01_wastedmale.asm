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
	W:k10q01
	W:k10q01WastedGotoBurah
	W:pt_gmap_factory
	A:AddMark
	W:quest_k10_01
	W:init_factory
	A:ShowMap
	A:SetReturnValue
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006b003100300071003000310000006b003100300071003000310057006100730074006500640047006f0074006f00420075007200610068000000700074005f0067006d00610070005f0066006100630074006f007200790000004164644d61726b00710075006500730074005f006b00310030005f0030003100000069006e00690074005f0066006100630074006f0072007900000053686f774d61700053657452657475726e56616c756500430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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

RunOp = 0x181
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x187 Vars = (object)
		EVENT_26 Op = 0x1bf Vars = (string)
		EVENT_5 Op = 0x1c7 Vars = ()
		EVENT_6 Op = 0x1cc Vars = ()
		EVENT_7 Op = 0x20b Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x293

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x41f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x41d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x421

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x423

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x40c

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
0x41: Call2 0x2d7

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x37f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 526972)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 528069)
0x5f: Push((int) 29412)
0x60: Push((int) 29411)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x7f

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 526976)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x38b

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 526981)
0x73: Push((int) 28274)
0x74: Push((int) 28273)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 526977)
0x78: Push((int) -1)
0x79: Push((int) 28269)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x425

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2e8

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
0x9f: Call2 0x425

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
0xaf: Call2 0x2ef

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x300

0xb8: Pop(0)
0xb9: Push((int) 28267)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x345

0xc0: Pop(2)
0xc1: Push((int) 28275)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x34e

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x37a

0xcd: Pop(2)
0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x36a

0xd2: Pop(2)
0xd3: Push((int) 29417)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x34e

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x37a

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x36a

0xe4: Pop(2)
0xe5: Push((int) 28264)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call2 0x37f

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral" // @poff=89
0xef: Call2 0x9d

0xf0: Pop(1)
0xf1: Push((int) 526972)
0xf2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf3: Pop(1)
0xf4: @@@ ClearReplies(); Obj=0 // @poff=116
0xf5: Pop(0)
0xf6: Push((int) 528069)
0xf7: Push((int) 29412)
0xf8: Push((int) 29411)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral" // @poff=89
0xfe: Call2 0x9d

0xff: Pop(1)
0x100: Push((int) 526976)
0x101: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x102: Pop(1)
0x103: @@@ ClearReplies(); Obj=0 // @poff=116
0x104: Pop(0)
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107: Call2 0x38b

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: Push((int) 526981)
0x10b: Push((int) 28274)
0x10c: Push((int) 28273)
0x10d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10e: Pop(3)
0x10f: Push((int) 526977)
0x110: Push((int) -1)
0x111: Push((int) 28269)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 28274)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral" // @poff=89
0x11a: Call2 0x9d

0x11b: Pop(1)
0x11c: Push((int) 526982)
0x11d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11e: Pop(1)
0x11f: @@@ ClearReplies(); Obj=0 // @poff=116
0x120: Pop(0)
0x121: Push((int) 528073)
0x122: Push((int) 29416)
0x123: Push((int) 29415)
0x124: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x125: Pop(3)
0x126: Push((int) 528075)
0x127: Push((int) -1)
0x128: Push((int) 29417)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 29416)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral" // @poff=89
0x131: Call2 0x9d

0x132: Pop(1)
0x133: Push((int) 528074)
0x134: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x135: Pop(1)
0x136: @@@ ClearReplies(); Obj=0 // @poff=116
0x137: Pop(0)
0x138: Push((int) 526983)
0x139: Push((int) -1)
0x13a: Push((int) 28275)
0x13b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 29412)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral" // @poff=89
0x143: Call2 0x9d

0x144: Pop(1)
0x145: Push((int) 528070)
0x146: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x147: Pop(1)
0x148: @@@ ClearReplies(); Obj=0 // @poff=116
0x149: Pop(0)
0x14a: Push((int) 528071)
0x14b: Push((int) 29414)
0x14c: Push((int) 29413)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 29414)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral" // @poff=89
0x155: Call2 0x9d

0x156: Pop(1)
0x157: Push((int) 528072)
0x158: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x159: Pop(1)
0x15a: @@@ ClearReplies(); Obj=0 // @poff=116
0x15b: Pop(0)
0x15c: Push((int) 526973)
0x15d: Push((int) 28266)
0x15e: Push((int) 28265)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 28266)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral" // @poff=89
0x167: Call2 0x9d

0x168: Pop(1)
0x169: Push((int) 526974)
0x16a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16b: Pop(1)
0x16c: @@@ ClearReplies(); Obj=0 // @poff=116
0x16d: Pop(0)
0x16e: Push((int) 526975)
0x16f: Push((int) -1)
0x170: Push((int) 28267)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x175: PushEmpty(bool)
0x176: Call2 0x425

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x179: @ lshStopAnimation()
0x17a: Pop(0)
0x17b: GOTO 0x17e

0x17c: @ StopAnimation()
0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: GOTO 0xb4

0x180: Return(); Pop(0)

0x181: PushEmpty(float, float)
0x182: Stack[-2] = (int) 300
0x183: Stack[-1] = (int) 100
0x184: Call2 0x192

0x185: Pop(2)
0x186: Return(); Pop(0)

0x187: PushEmpty()
0x188: PushEmpty()
0x189: Call2 0x222

0x18a: Pop(0)
0x18b: PushEmpty(int, object)
0x18c: Stack[-3] = Stack[-1]
0x18d: Push(-2, 1); TaskCall(0)
0x18e: Call2 0x0

0x18f: Pop(-2, 1); TaskReturn
0x190: Pop(2)
0x191: Return(); Pop(0)

0x192: PushEmpty(float, float)
0x193: PushEmpty(bool)
0x194: Call2 0x28e

0x195: Pop(0)
0x196: Pop(1); Push((bool) Stack[-1] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x198: @ Hold()
0x199: Pop(0)
0x19a: GOTO 0x193

0x19b: Push((int) 3)
0x19c: @ rand(Stack[-2], Stack[-1])
0x19d: Pop(1)
0x19e: Push((int) 3)
0x19f: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1a0: @ Sleep(Stack[-1])
0x1a1: Pop(1)
0x1a2: PushEmpty(float, float)
0x1a3: Stack[-6] = Stack[-2]
0x1a4: Stack[-5] = Stack[-1]
0x1a5: Call2 0x1e1

0x1a6: Pop(2)
0x1a7: @ sync()
0x1a8: Pop(0)
0x1a9: GOTO 0x193

0x1aa: Return(); Pop(2)

0x1ab: PushEmpty(bool, bool)
0x1ac: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1ad: @ IsLoaded(Stack[-1])
0x1ae: Pop(0)
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: Pop(0); Push((bool) Stack[-2] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(bool)
0x1b4: Call2 0x1df

0x1b5: Pop(0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Stack[-1] = (bool) 1
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object)
0x1ba: Call2 0x307

0x1bb: Pop(0)
0x1bc: @ RemoveActor(Stack[-1])
0x1bd: Pop(1)
0x1be: Return(); Pop(2)

0x1bf: PushEmpty()
0x1c0: Push("cleanup") // @poff=156
0x1c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c3: PushEmpty()
0x1c4: Call2 0x1ab

0x1c5: Pop(0)
0x1c6: Return(); Pop(0)

0x1c7: @ StopGroup0()
0x1c8: Pop(0)
0x1c9: @ sync()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: Call2 0x222

0x1ce: Pop(0)
0x1cf: PushEmpty(bool)
0x1d0: Stack[-1] = (bool) 0
0x1d1: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: PushEmpty(bool)
0x1d4: Call2 0x1df

0x1d5: Pop(0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Stack[-1] = (bool) 1
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: PushEmpty(object)
0x1da: Call2 0x307

0x1db: Pop(0)
0x1dc: @ RemoveActor(Stack[-1])
0x1dd: Pop(1)
0x1de: Return(); Pop(0)

0x1df: Stack[-1] = (bool) 1
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty()
0x1e2: PushEmpty(bool)
0x1e3: Call2 0x28e

0x1e4: Pop(0)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Return(); Pop(0)

0x1e8: Push("player") // @poff=172
0x1e9: @ FindActor(Stack[-4]T, Stack[-1])
0x1ea: Pop(1)
0x1eb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ec: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ee: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ef: Push((int) 10)
0x1f0: Push((float)1.0)
0x1f1: @ SetTimer(Stack[-2], Stack[-1])
0x1f2: Pop(2)
0x1f3: PushEmpty()
0x1f4: Call2 0x230

0x1f5: Pop(0)
0x1f6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f8: Push((int) 10)
0x1f9: @ KillTimer(Stack[-1])
0x1fa: Pop(1)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(float, float)
0x1fd: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ff: Stack[-3] = (bool) 0
0x200: Return(); Pop(2)

0x201: PushEmpty(float, object)
0x202: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x203: Call2 0x286

0x204: Pop(1)
0x205: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x206: Push( Stack[2 + Tasks[-1].StackPointer] )
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x209: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20a: Return(); Pop(2)

0x20b: PushEmpty()
0x20c: Push((int) 10)
0x20d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x20f: PushEmpty(bool)
0x210: Call2 0x1fc

0x211: Pop(0)
0x212: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x213: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: PushEmpty(object)
0x216: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x217: Call2 0x2f5

0x218: Pop(1)
0x219: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21a: GOTO 0x221

0x21b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21c: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21d: Push("head") // @poff=186
0x21e: @ UnlookAsync(Stack[-1])
0x21f: Pop(1)
0x220: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x221: Return(); Pop(0)

0x222: PushEmpty()
0x223: Call2 0x281

0x224: Pop(0)
0x225: Push((int) 10)
0x226: @ KillTimer(Stack[-1])
0x227: Pop(1)
0x228: Push( Stack[2 + Tasks[-1].StackPointer] )
0x229: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22a: Push("head") // @poff=186
0x22b: @ UnlookAsync(Stack[-1])
0x22c: Pop(1)
0x22d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22f: Return(); Pop(0)

0x230: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x231: @ WaitForAnimEnd()
0x232: Pop(0)
0x233: PushEmpty(bool)
0x234: Call2 0x28e

0x235: Pop(0)
0x236: Pop(1); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Return(); Pop(14)

0x239: PushEmpty(int)
0x23a: Call2 0x334

0x23b: Stack[-1] = Stack[-8]
0x23c: Pop(1)
0x23d: Stack[-6] = (int) 0
0x23e: PushEmpty(bool)
0x23f: Stack[-1] = (bool) 0
0x240: Push((int) 5)
0x241: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x243: PushEmpty(bool)
0x244: Call2 0x28e

0x245: Pop(0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: Stack[-1] = (bool) 1
0x248: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x249: Push((int) 3)
0x24a: @ irand(Stack[-6], Stack[-1])
0x24b: Pop(1)
0x24c: Push((int) 0)
0x24d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x24f: Push(Stack[-7])
0x250: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x251: @ irand(Stack[-4], Stack[-7])
0x252: Pop(0)
0x253: Push("all") // @poff=138
0x254: PushEmpty(string, int)
0x255: Stack[-7] = Stack[-1]
0x256: Call2 0x32d

0x257: Pop(1)
0x258: @ PlayAnimation(Stack[-2], Stack[-1])
0x259: Pop(2)
0x25a: @ WaitForAnimEnd(Stack[-3])
0x25b: Pop(0)
0x25c: Pop(0); Push((bool) Stack[-3] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x27c

0x25f: GOTO 0x271

0x260: Push((int) 1)
0x261: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x263: Push((int) 4)
0x264: @ rand(Stack[-3], Stack[-1])
0x265: Pop(1)
0x266: Push((int) 1)
0x267: Pop(1); Push(Stack[-3] + Stack[-1]);
0x268: @ Sleep(Stack[-1], Stack[-2])
0x269: Pop(1)
0x26a: Pop(0); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x27c

0x26d: GOTO 0x271

0x26e: Push(Stack[-6])
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: GOTO 0x27c

0x271: PushEmpty(bool)
0x272: Call2 0x27f

0x273: Pop(0)
0x274: Pop(1); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x27c

0x277: @ ResetAAS()
0x278: Pop(0)
0x279: Push((int) 1)
0x27a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27b: GOTO 0x23e

0x27c: @ ResetAAS()
0x27d: Pop(0)
0x27e: Return(); Pop(14)

0x27f: Stack[-1] = (bool) 1
0x280: Return(); Pop(0)

0x281: @ StopAnimation()
0x282: Pop(0)
0x283: @ StopGroup0()
0x284: Pop(0)
0x285: Return(); Pop(0)

0x286: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x287: @ GetPosition(Stack[-3])
0x288: Pop(0)
0x289: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x28a: Pop(0)
0x28b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x28d: Return(); Pop(6)

0x28e: PushEmpty(bool, bool)
0x28f: @ IsLoaded(Stack[-1])
0x290: Pop(0)
0x291: Stack[-1] = Stack[-3]
0x292: Return(); Pop(2)

0x293: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x294: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x295: Pop(0)
0x296: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x297: Pop(0)
0x298: Push(CvectorIndex(Stack[-8], 1))
0x299: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29b: @ GetPosition(Stack[-7])
0x29c: Pop(0)
0x29d: @ GetEyesHeight(Stack[-9])
0x29e: Pop(0)
0x29f: Push(CvectorIndex(Stack[-7], 1))
0x2a0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a3: Push(CvectorIndex(Stack[-6], 1))
0x2a4: Stack[-1] = (int) 0
0x2a5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a7: Pop(1); Push(Sqrt(Stack[-1]))
0x2a8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a9: Stack[-5] = -Stack[-6]; Pop(0);
0x2aa: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ab: PushEmpty(cvector, cvector)
0x2ac: Push([0.0, 1.0, 0.0])
0x2ad: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ae: Call2 0x30d

0x2af: Pop(1)
0x2b0: Push((int) 25)
0x2b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b3: Push([0.0, 10.0, 0.0])
0x2b4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b6: @ IsOverrideActive(Stack[-2])
0x2b7: Pop(0)
0x2b8: Push(Stack[-2])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: Stack[-21] = (bool) 0
0x2bb: Return(); Pop(18)

0x2bc: @ StopWorld()
0x2bd: Pop(0)
0x2be: @ CameraTransit(Stack[-3], Stack[-5])
0x2bf: Pop(0)
0x2c0: Push(CvectorIndex(Stack[-4], 0))
0x2c1: Push(CvectorIndex(Stack[-5], 2))
0x2c2: @ Rotate(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: PushEmpty(bool)
0x2c5: Call2 0x425

0x2c6: Pop(0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2d1

0x2c9: Push("head") // @poff=186
0x2ca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cb: Pop(1)
0x2cc: Push(Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ce: Push("head") // @poff=186
0x2cf: @ LookAsyncCamera(Stack[-1])
0x2d0: Pop(1)
0x2d1: @ CameraWaitForPlayFinish()
0x2d2: Pop(0)
0x2d3: @ ResumeWorld()
0x2d4: Pop(0)
0x2d5: Stack[-21] = (bool) 1
0x2d6: Return(); Pop(18)

0x2d7: PushEmpty(bool, bool)
0x2d8: @ CameraSwitchToNormal()
0x2d9: Pop(0)
0x2da: PushEmpty(bool)
0x2db: Call2 0x425

0x2dc: Pop(0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: GOTO 0x2e7

0x2df: Push("head") // @poff=186
0x2e0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e1: Pop(1)
0x2e2: Push(Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e4: Push("head") // @poff=186
0x2e5: @ UnlookAsync(Stack[-1])
0x2e6: Pop(1)
0x2e7: Return(); Pop(2)

0x2e8: PushEmpty(float, float, float, float)
0x2e9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ea: Pop(0)
0x2eb: Push((bool) 0)
0x2ec: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(1)
0x2ee: Return(); Pop(4)

0x2ef: PushEmpty(float, float, float, float)
0x2f0: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f1: Pop(0)
0x2f2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f3: Pop(0)
0x2f4: Return(); Pop(4)

0x2f5: PushEmpty(float, cvector, float, cvector)
0x2f6: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2f7: Pop(0)
0x2f8: Stack[-1] = [0.0, 0.0, 0.0]
0x2f9: Push(CvectorIndex(Stack[-1], 1))
0x2fa: Stack[-3] = Stack[-1]
0x2fb: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fc: Push("head") // @poff=186
0x2fd: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2fe: Pop(1)
0x2ff: Return(); Pop(4)

0x300: PushEmpty(bool)
0x301: Call2 0x425

0x302: Pop(0)
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: @ lshStopSpeech()
0x305: Pop(0)
0x306: Return(); Pop(0)

0x307: PushEmpty(object, object)
0x308: @ self(Stack[-1])
0x309: Pop(0)
0x30a: Stack[-1] = Stack[-3]
0x30b: Return(); Pop(2)

0x30c: Stack[-1] = 0
0x30d: PushEmpty(float, float)
0x30e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x310: Push((float)9.999999974752427e-07)
0x311: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-4] = [0.0, 0.0, 0.0]
0x314: Return(); Pop(2)

0x315: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x316: Return(); Pop(2)

0x317: PushEmpty(int, int)
0x318: @ GetVariable(Stack[-3], Stack[-1])
0x319: Pop(0)
0x31a: Stack[-1] = Stack[-4]
0x31b: Return(); Pop(2)

0x31c: PushEmpty(object, object)
0x31d: @ FindActor(Stack[-1], Stack[-4])
0x31e: Pop(0)
0x31f: Pop(0); PushNull((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-5] = (bool) 0
0x322: Return(); Pop(2)

0x323: @ Trigger(Stack[-1], Stack[-3])
0x324: Pop(0)
0x325: Stack[-5] = (bool) 1
0x326: Return(); Pop(2)

0x327: Stack[-1] = 0
0x328: PushEmpty(float, float)
0x329: @ GetGameTime(Stack[-1])
0x32a: Pop(0)
0x32b: Stack[-1] = Stack[-3]
0x32c: Return(); Pop(2)

0x32d: PushEmpty(string, string)
0x32e: Stack[-1] = "idle" // @poff=146
0x32f: Push(Stack[-3])
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x332: Stack[-1] = Stack[-4]
0x333: Return(); Pop(2)

0x334: PushEmpty(int, bool, int, bool)
0x335: Stack[-2] = (int) 0
0x336: Push("all") // @poff=138
0x337: PushEmpty(string, int)
0x338: Stack[-5] = Stack[-1]
0x339: Call2 0x32d

0x33a: Pop(1)
0x33b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: Pop(0); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x343

0x340: Push((int) 1)
0x341: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x342: GOTO 0x336

0x343: Stack[-2] = Stack[-5]
0x344: Return(); Pop(4)

0x345: PushEmpty()
0x346: Push("k10q01") // @poff=222
0x347: Push((int) 4)
0x348: @ SetVariable(Stack[-2], Stack[-1])
0x349: Pop(2)
0x34a: PushEmpty()
0x34b: Call2 0x397

0x34c: Pop(0)
0x34d: Return(); Pop(0)

0x34e: PushEmpty(object, object)
0x34f: Push("k10q01") // @poff=222
0x350: Push((int) 6)
0x351: @ SetVariable(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: PushEmpty(object)
0x354: Call2 0x3da

0x355: Stack[-1] = Stack[-2]
0x356: Pop(1)
0x357: Push("k10q01WastedGotoBurah") // @poff=236
0x358: Push("pt_gmap_factory") // @poff=280
0x359: Push((int) 1)
0x35a: Push((int) 530196)
0x35b: PushEmpty(float)
0x35c: Call2 0x328

0x35d: Pop(0)
0x35e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=312
0x35f: Pop(5)
0x360: PushEmpty()
0x361: Call2 0x3a4

0x362: Pop(0)
0x363: PushEmpty(bool, string, string)
0x364: Stack[-2] = "quest_k10_01" // @poff=320
0x365: Stack[-1] = "init_factory" // @poff=346
0x366: Call2 0x31c

0x367: Pop(3)
0x368: Return(); Pop(2)

0x369: Stack[-1] = 0
0x36a: PushEmpty()
0x36b: PushEmpty(object, string, float)
0x36c: PushEmpty(object)
0x36d: Call2 0x3da

0x36e: Stack[-1] = Stack[-4]
0x36f: Pop(1)
0x370: Stack[-2] = "pt_gmap_factory" // @poff=280
0x371: Stack[-1] = (int) 2
0x372: Call2 0x3eb

0x373: Pop(3)
0x374: PushEmpty(object)
0x375: Call2 0x3da

0x376: Pop(0)
0x377: @@ ShowMap(Stack[-1]); Obj=2 // @poff=372
0x378: Pop(1)
0x379: Return(); Pop(0)

0x37a: PushEmpty()
0x37b: Push((int) 0)
0x37c: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=380
0x37d: Pop(1)
0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: PushEmpty(int, string)
0x381: Stack[-1] = "k10q01" // @poff=222
0x382: Call2 0x317

0x383: Pop(1)
0x384: Push((int) 3)
0x385: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x387: Stack[-2] = (bool) 1
0x388: Return(); Pop(0)

0x389: Stack[-2] = (bool) 0
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: PushEmpty(int, string)
0x38d: Stack[-1] = "k10q01" // @poff=222
0x38e: Call2 0x317

0x38f: Pop(1)
0x390: Push((int) 5)
0x391: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-2] = (bool) 1
0x394: Return(); Pop(0)

0x395: Stack[-2] = (bool) 0
0x396: Return(); Pop(0)

0x397: PushEmpty(object, object)
0x398: Push((int) 451)
0x399: Push((int) 1)
0x39a: Push((int) 527009)
0x39b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: PushEmpty(bool, object, int)
0x39e: Stack[-4] = Stack[-2]
0x39f: Stack[-1] = (int) 447
0x3a0: Call2 0x3be

0x3a1: Pop(3)
0x3a2: Return(); Pop(2)

0x3a3: Stack[-1] = 0
0x3a4: PushEmpty(object, object)
0x3a5: Push((int) 453)
0x3a6: Push((int) 1)
0x3a7: Push((int) 527011)
0x3a8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: PushEmpty(bool, object, int)
0x3ab: Stack[-4] = Stack[-2]
0x3ac: Stack[-1] = (int) 447
0x3ad: Call2 0x3be

0x3ae: Pop(3)
0x3af: Return(); Pop(2)

0x3b0: Stack[-1] = 0
0x3b1: PushEmpty(object, object)
0x3b2: @ GetDiaryRoot(Stack[-1])
0x3b3: Pop(0)
0x3b4: Pop(0); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b6: Push("Can't retrieve diary root") // @poff=395
0x3b7: @ Trace(Stack[-1])
0x3b8: Pop(1)
0x3b9: Stack[-3] = (bool) 0
0x3ba: Return(); Pop(2)

0x3bb: Stack[-1] = Stack[-3]
0x3bc: Return(); Pop(2)

0x3bd: Stack[-1] = 0
0x3be: PushEmpty(object, object, int, object, object, int)
0x3bf: PushEmpty(object)
0x3c0: Call2 0x3b1

0x3c1: Stack[-1] = Stack[-4]
0x3c2: Pop(1)
0x3c3: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=447
0x3c4: Pop(0)
0x3c5: Pop(0); Push((bool) Stack[-2] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c7: Push("Can't find diary parent with id: ") // @poff=452
0x3c8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c9: @ Trace(Stack[-1])
0x3ca: Pop(1)
0x3cb: Stack[-9] = (bool) 0
0x3cc: Return(); Pop(6)

0x3cd: @@ AddChild(Stack[-8]); Obj=2 // @poff=520
0x3ce: Pop(0)
0x3cf: Push((int) 7)
0x3d0: @ SendWorldWndMessage(Stack[-1])
0x3d1: Pop(1)
0x3d2: @@ GetCategory(Stack[-1]); Obj=8 // @poff=529
0x3d3: Pop(0)
0x3d4: @ SetDiarySection(Stack[-1])
0x3d5: Pop(0)
0x3d6: Stack[-9] = (bool) 0
0x3d7: Return(); Pop(6)

0x3d8: Stack[-2] = 0
0x3d9: Stack[-3] = 0
0x3da: PushEmpty(object, object, object, object)
0x3db: @ GetMainOutdoorScene(Stack[-2])
0x3dc: Pop(0)
0x3dd: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3df: Push("Can't find main outdoor scene") // @poff=541
0x3e0: @ Trace(Stack[-1])
0x3e1: Pop(1)
0x3e2: Stack[-1] = 0
0x3e3: Stack[-1] = Stack[-5]
0x3e4: Return(); Pop(4)

0x3e5: @@ GetMap(Stack[-1]); Obj=2 // @poff=601
0x3e6: Pop(0)
0x3e7: Stack[-1] = Stack[-5]
0x3e8: Return(); Pop(4)

0x3e9: Stack[-1] = 0
0x3ea: Stack[-2] = 0
0x3eb: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3ec: @ GetMainOutdoorScene(Stack[-2])
0x3ed: Pop(0)
0x3ee: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f0: Push("Can't find main outdoor scene") // @poff=541
0x3f1: @ Trace(Stack[-1])
0x3f2: Pop(1)
0x3f3: Return(); Pop(8)

0x3f4: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=608
0x3f5: Pop(0)
0x3f6: Pop(0); Push((bool) Stack[-1] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f8: Push("Warning: outdoor scene locator ") // @poff=619
0x3f9: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3fa: Push(" doesnt exist") // @poff=683
0x3fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fc: @ Trace(Stack[-1])
0x3fd: Pop(1)
0x3fe: @@ GetMap(Stack[-11]); Obj=2 // @poff=601
0x3ff: Pop(0)
0x400: Pop(0); PushNull((bool) Stack[-11] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x402: Push("Can't find map") // @poff=711
0x403: @ Trace(Stack[-1])
0x404: Pop(1)
0x405: Return(); Pop(8)

0x406: Push(CvectorIndex(Stack[-4], 0))
0x407: Push(CvectorIndex(Stack[-5], 2))
0x408: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=741
0x409: Pop(2)
0x40a: Return(); Pop(8)

0x40b: Stack[-2] = 0
0x40c: PushEmpty(int, int)
0x40d: Push("branch") // @poff=754
0x40e: @ GetVariable(Stack[-1], Stack[-2])
0x40f: Pop(1)
0x410: Push((int) 0)
0x411: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x413: Stack[-3] = (int) 1
0x414: Return(); Pop(2)

0x415: GOTO 0x41b

0x416: Push((int) 1)
0x417: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x419: Stack[-3] = (int) 2
0x41a: Return(); Pop(2)

0x41b: Stack[-3] = (int) 3
0x41c: Return(); Pop(2)

0x41d: Stack[-1] = (int) 515556
0x41e: Return(); Pop(0)

0x41f: Stack[-1] = (int) 503341
0x420: Return(); Pop(0)

0x421: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=768
0x422: Return(); Pop(0)

0x423: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=808
0x424: Return(); Pop(0)

0x425: Stack[-1] = (bool) 0
0x426: Return(); Pop(0)

