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
	W:b7q01BirdmaskGotoMat
	W:pt_map_mat
	A:AddMark
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
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e00750070000000476574506f736974696f6e004765744579657348656967687400680065006100640000006200370071003000310000006200370071003000310042006900720064006d00610073006b0047006f0074006f004d00610074000000700074005f006d00610070005f006d006100740000004164644d61726b0053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x16d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x162 Vars = (object)
		EVENT_26 Op = 0x196 Vars = (string)
		EVENT_5 Op = 0x19e Vars = ()
		EVENT_6 Op = 0x1a3 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x210

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x359

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x357

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x35b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x35d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x346

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
0x41: Call2 0x254

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
0x52: Call2 0x2d2

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 520971)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 520972)
0x5f: Push((int) 22186)
0x60: Push((int) 22185)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 524081)
0x64: Push((int) 25382)
0x65: Push((int) 25381)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 524088)
0x69: Push((int) 25386)
0x6a: Push((int) 25388)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 520975)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 520976)
0x78: Push((int) -1)
0x79: Push((int) 22189)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x35f

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x265

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
0x9f: Call2 0x35f

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
0xaf: Call2 0x26c

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x272

0xb8: Pop(0)
0xb9: Push((int) 22187)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x2ab

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x2c2

0xc5: Pop(2)
0xc6: Push((int) 22184)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x2d2

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 520971)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 520972)
0xd8: Push((int) 22186)
0xd9: Push((int) 22185)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 524081)
0xdd: Push((int) 25382)
0xde: Push((int) 25381)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Push((int) 524088)
0xe2: Push((int) 25386)
0xe3: Push((int) 25388)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral" // @poff=89
0xe9: Call2 0x9d

0xea: Pop(1)
0xeb: Push((int) 520975)
0xec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xed: Pop(1)
0xee: @@@ ClearReplies(); Obj=0 // @poff=116
0xef: Pop(0)
0xf0: Push((int) 520976)
0xf1: Push((int) -1)
0xf2: Push((int) 22189)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 25382)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral" // @poff=89
0xfb: Call2 0x9d

0xfc: Pop(1)
0xfd: Push((int) 524082)
0xfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xff: Pop(1)
0x100: @@@ ClearReplies(); Obj=0 // @poff=116
0x101: Pop(0)
0x102: Push((int) 524083)
0x103: Push((int) 25384)
0x104: Push((int) 25383)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 524089)
0x108: Push((int) 25392)
0x109: Push((int) 25391)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 25392)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral" // @poff=89
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 524090)
0x115: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x116: Pop(1)
0x117: @@@ ClearReplies(); Obj=0 // @poff=116
0x118: Pop(0)
0x119: Push((int) 524091)
0x11a: Push((int) 22186)
0x11b: Push((int) 25393)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 25384)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral" // @poff=89
0x124: Call2 0x9d

0x125: Pop(1)
0x126: Push((int) 524084)
0x127: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x128: Pop(1)
0x129: @@@ ClearReplies(); Obj=0 // @poff=116
0x12a: Pop(0)
0x12b: Push((int) 524085)
0x12c: Push((int) 25386)
0x12d: Push((int) 25385)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 25386)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral" // @poff=89
0x136: Call2 0x9d

0x137: Pop(1)
0x138: Push((int) 524086)
0x139: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13a: Pop(1)
0x13b: @@@ ClearReplies(); Obj=0 // @poff=116
0x13c: Pop(0)
0x13d: Push((int) 524087)
0x13e: Push((int) 22186)
0x13f: Push((int) 25387)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 22186)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0x9d

0x149: Pop(1)
0x14a: Push((int) 520973)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: Push((int) 520974)
0x150: Push((int) -1)
0x151: Push((int) 22187)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x156: PushEmpty(bool)
0x157: Call2 0x35f

0x158: Pop(0)
0x159: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15a: @ lshStopAnimation()
0x15b: Pop(0)
0x15c: GOTO 0x15f

0x15d: @ StopAnimation()
0x15e: Pop(0)
0x15f: Return(); Pop(0)

0x160: GOTO 0xb4

0x161: Return(); Pop(0)

0x162: PushEmpty()
0x163: PushEmpty()
0x164: Call2 0x206

0x165: Pop(0)
0x166: PushEmpty(int, object)
0x167: Stack[-3] = Stack[-1]
0x168: Push(-2, 1); TaskCall(0)
0x169: Call2 0x0

0x16a: Pop(-2, 1); TaskReturn
0x16b: Pop(2)
0x16c: Return(); Pop(0)

0x16d: PushEmpty(float, float)
0x16e: PushEmpty(bool)
0x16f: Call2 0x20b

0x170: Pop(0)
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x173: @ Hold()
0x174: Pop(0)
0x175: GOTO 0x16e

0x176: Push((int) 3)
0x177: @ rand(Stack[-2], Stack[-1])
0x178: Pop(1)
0x179: Push((int) 3)
0x17a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x17b: @ Sleep(Stack[-1])
0x17c: Pop(1)
0x17d: PushEmpty()
0x17e: Call2 0x1b5

0x17f: Pop(0)
0x180: GOTO 0x16e

0x181: Return(); Pop(2)

0x182: PushEmpty(bool, bool)
0x183: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x184: @ IsLoaded(Stack[-1])
0x185: Pop(0)
0x186: PushEmpty(bool)
0x187: Stack[-1] = (bool) 0
0x188: Pop(0); Push((bool) Stack[-2] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18a: PushEmpty(bool)
0x18b: Call2 0x1b3

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: Stack[-1] = (bool) 1
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: PushEmpty(object)
0x191: Call2 0x279

0x192: Pop(0)
0x193: @ RemoveActor(Stack[-1])
0x194: Pop(1)
0x195: Return(); Pop(2)

0x196: PushEmpty()
0x197: Push("cleanup") // @poff=156
0x198: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19a: PushEmpty()
0x19b: Call2 0x182

0x19c: Pop(0)
0x19d: Return(); Pop(0)

0x19e: @ StopGroup0()
0x19f: Pop(0)
0x1a0: @ sync()
0x1a1: Pop(0)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty(bool)
0x1a4: Stack[-1] = (bool) 0
0x1a5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: PushEmpty(bool)
0x1a8: Call2 0x1b3

0x1a9: Pop(0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Stack[-1] = (bool) 1
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: PushEmpty(object)
0x1ae: Call2 0x279

0x1af: Pop(0)
0x1b0: @ RemoveActor(Stack[-1])
0x1b1: Pop(1)
0x1b2: Return(); Pop(0)

0x1b3: Stack[-1] = (bool) 1
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1b6: @ WaitForAnimEnd()
0x1b7: Pop(0)
0x1b8: PushEmpty(bool)
0x1b9: Call2 0x20b

0x1ba: Pop(0)
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: Return(); Pop(14)

0x1be: PushEmpty(int)
0x1bf: Call2 0x29a

0x1c0: Stack[-1] = Stack[-8]
0x1c1: Pop(1)
0x1c2: Stack[-6] = (int) 0
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: Push((int) 5)
0x1c6: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x20b

0x1ca: Pop(0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ce: Push((int) 3)
0x1cf: @ irand(Stack[-6], Stack[-1])
0x1d0: Pop(1)
0x1d1: Push((int) 0)
0x1d2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d4: Push(Stack[-7])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d6: @ irand(Stack[-4], Stack[-7])
0x1d7: Pop(0)
0x1d8: Push("all") // @poff=138
0x1d9: PushEmpty(string, int)
0x1da: Stack[-7] = Stack[-1]
0x1db: Call2 0x293

0x1dc: Pop(1)
0x1dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1de: Pop(2)
0x1df: @ WaitForAnimEnd(Stack[-3])
0x1e0: Pop(0)
0x1e1: Pop(0); Push((bool) Stack[-3] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: GOTO 0x201

0x1e4: GOTO 0x1f6

0x1e5: Push((int) 1)
0x1e6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e8: Push((int) 4)
0x1e9: @ rand(Stack[-3], Stack[-1])
0x1ea: Pop(1)
0x1eb: Push((int) 1)
0x1ec: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ed: @ Sleep(Stack[-1], Stack[-2])
0x1ee: Pop(1)
0x1ef: Pop(0); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: GOTO 0x201

0x1f2: GOTO 0x1f6

0x1f3: Push(Stack[-6])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: GOTO 0x201

0x1f6: PushEmpty(bool)
0x1f7: Call2 0x204

0x1f8: Pop(0)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: GOTO 0x201

0x1fc: @ ResetAAS()
0x1fd: Pop(0)
0x1fe: Push((int) 1)
0x1ff: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x200: GOTO 0x1c3

0x201: @ ResetAAS()
0x202: Pop(0)
0x203: Return(); Pop(14)

0x204: Stack[-1] = (bool) 1
0x205: Return(); Pop(0)

0x206: @ StopAnimation()
0x207: Pop(0)
0x208: @ StopGroup0()
0x209: Pop(0)
0x20a: Return(); Pop(0)

0x20b: PushEmpty(bool, bool)
0x20c: @ IsLoaded(Stack[-1])
0x20d: Pop(0)
0x20e: Stack[-1] = Stack[-3]
0x20f: Return(); Pop(2)

0x210: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x211: @@ GetPosition(Stack[-8]); Obj=20 // @poff=172
0x212: Pop(0)
0x213: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=184
0x214: Pop(0)
0x215: Push(CvectorIndex(Stack[-8], 1))
0x216: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x217: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x218: @ GetPosition(Stack[-7])
0x219: Pop(0)
0x21a: @ GetEyesHeight(Stack[-9])
0x21b: Pop(0)
0x21c: Push(CvectorIndex(Stack[-7], 1))
0x21d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x21f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x220: Push(CvectorIndex(Stack[-6], 1))
0x221: Stack[-1] = (int) 0
0x222: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x223: Pop(0); Push(Stack[-6] | Stack[-6]);
0x224: Pop(1); Push(Sqrt(Stack[-1]))
0x225: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x226: Stack[-5] = -Stack[-6]; Pop(0);
0x227: Pop(0); Push(Stack[-6] * Stack[-19]);
0x228: PushEmpty(cvector, cvector)
0x229: Push([0.0, 1.0, 0.0])
0x22a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22b: Call2 0x27f

0x22c: Pop(1)
0x22d: Push((int) 25)
0x22e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x230: Push([0.0, 10.0, 0.0])
0x231: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x232: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x233: @ IsOverrideActive(Stack[-2])
0x234: Pop(0)
0x235: Push(Stack[-2])
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: Stack[-21] = (bool) 0
0x238: Return(); Pop(18)

0x239: @ StopWorld()
0x23a: Pop(0)
0x23b: @ CameraTransit(Stack[-3], Stack[-5])
0x23c: Pop(0)
0x23d: Push(CvectorIndex(Stack[-4], 0))
0x23e: Push(CvectorIndex(Stack[-5], 2))
0x23f: @ Rotate(Stack[-2], Stack[-1])
0x240: Pop(2)
0x241: PushEmpty(bool)
0x242: Call2 0x35f

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x24e

0x246: Push("head") // @poff=198
0x247: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x248: Pop(1)
0x249: Push(Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: Push("head") // @poff=198
0x24c: @ LookAsyncCamera(Stack[-1])
0x24d: Pop(1)
0x24e: @ CameraWaitForPlayFinish()
0x24f: Pop(0)
0x250: @ ResumeWorld()
0x251: Pop(0)
0x252: Stack[-21] = (bool) 1
0x253: Return(); Pop(18)

0x254: PushEmpty(bool, bool)
0x255: @ CameraSwitchToNormal()
0x256: Pop(0)
0x257: PushEmpty(bool)
0x258: Call2 0x35f

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x264

0x25c: Push("head") // @poff=198
0x25d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25e: Pop(1)
0x25f: Push(Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x261: Push("head") // @poff=198
0x262: @ UnlookAsync(Stack[-1])
0x263: Pop(1)
0x264: Return(); Pop(2)

0x265: PushEmpty(float, float, float, float)
0x266: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x267: Pop(0)
0x268: Push((bool) 0)
0x269: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(1)
0x26b: Return(); Pop(4)

0x26c: PushEmpty(float, float, float, float)
0x26d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x26e: Pop(0)
0x26f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x270: Pop(0)
0x271: Return(); Pop(4)

0x272: PushEmpty(bool)
0x273: Call2 0x35f

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: @ lshStopSpeech()
0x277: Pop(0)
0x278: Return(); Pop(0)

0x279: PushEmpty(object, object)
0x27a: @ self(Stack[-1])
0x27b: Pop(0)
0x27c: Stack[-1] = Stack[-3]
0x27d: Return(); Pop(2)

0x27e: Stack[-1] = 0
0x27f: PushEmpty(float, float)
0x280: Pop(0); Push(Stack[-3] | Stack[-3]);
0x281: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x282: Push((float)9.999999974752427e-07)
0x283: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: Stack[-4] = [0.0, 0.0, 0.0]
0x286: Return(); Pop(2)

0x287: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x288: Return(); Pop(2)

0x289: PushEmpty(int, int)
0x28a: @ GetVariable(Stack[-3], Stack[-1])
0x28b: Pop(0)
0x28c: Stack[-1] = Stack[-4]
0x28d: Return(); Pop(2)

0x28e: PushEmpty(float, float)
0x28f: @ GetGameTime(Stack[-1])
0x290: Pop(0)
0x291: Stack[-1] = Stack[-3]
0x292: Return(); Pop(2)

0x293: PushEmpty(string, string)
0x294: Stack[-1] = "idle" // @poff=146
0x295: Push(Stack[-3])
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x298: Stack[-1] = Stack[-4]
0x299: Return(); Pop(2)

0x29a: PushEmpty(int, bool, int, bool)
0x29b: Stack[-2] = (int) 0
0x29c: Push("all") // @poff=138
0x29d: PushEmpty(string, int)
0x29e: Stack[-5] = Stack[-1]
0x29f: Call2 0x293

0x2a0: Pop(1)
0x2a1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a2: Pop(2)
0x2a3: Pop(0); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2a9

0x2a6: Push((int) 1)
0x2a7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a8: GOTO 0x29c

0x2a9: Stack[-2] = Stack[-5]
0x2aa: Return(); Pop(4)

0x2ab: PushEmpty(object, object)
0x2ac: Push("b7q01") // @poff=208
0x2ad: Push((int) 2)
0x2ae: @ SetVariable(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: PushEmpty(object)
0x2b1: Call2 0x314

0x2b2: Stack[-1] = Stack[-2]
0x2b3: Pop(1)
0x2b4: Push("b7q01BirdmaskGotoMat") // @poff=220
0x2b5: Push("pt_map_mat") // @poff=262
0x2b6: Push((int) 1)
0x2b7: Push((int) 521022)
0x2b8: PushEmpty(float)
0x2b9: Call2 0x28e

0x2ba: Pop(0)
0x2bb: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=284
0x2bc: Pop(5)
0x2bd: PushEmpty()
0x2be: Call2 0x2de

0x2bf: Pop(0)
0x2c0: Return(); Pop(2)

0x2c1: Stack[-1] = 0
0x2c2: PushEmpty()
0x2c3: PushEmpty(object, string, float)
0x2c4: PushEmpty(object)
0x2c5: Call2 0x314

0x2c6: Stack[-1] = Stack[-4]
0x2c7: Pop(1)
0x2c8: Stack[-2] = "pt_map_mat" // @poff=262
0x2c9: Stack[-1] = (int) 2
0x2ca: Call2 0x325

0x2cb: Pop(3)
0x2cc: PushEmpty(object)
0x2cd: Call2 0x314

0x2ce: Pop(0)
0x2cf: @@ ShowMap(Stack[-1]); Obj=2 // @poff=292
0x2d0: Pop(1)
0x2d1: Return(); Pop(0)

0x2d2: PushEmpty()
0x2d3: PushEmpty(int, string)
0x2d4: Stack[-1] = "b7q01" // @poff=208
0x2d5: Call2 0x289

0x2d6: Pop(1)
0x2d7: Push((int) 1)
0x2d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-2] = (bool) 1
0x2db: Return(); Pop(0)

0x2dc: Stack[-2] = (bool) 0
0x2dd: Return(); Pop(0)

0x2de: PushEmpty(object, object)
0x2df: Push((int) 255)
0x2e0: Push((int) 1)
0x2e1: Push((int) 521023)
0x2e2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: PushEmpty(bool, object, int)
0x2e5: Stack[-4] = Stack[-2]
0x2e6: Stack[-1] = (int) 253
0x2e7: Call2 0x2f8

0x2e8: Pop(3)
0x2e9: Return(); Pop(2)

0x2ea: Stack[-1] = 0
0x2eb: PushEmpty(object, object)
0x2ec: @ GetDiaryRoot(Stack[-1])
0x2ed: Pop(0)
0x2ee: Pop(0); Push((bool) Stack[-1] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: Push("Can't retrieve diary root") // @poff=300
0x2f1: @ Trace(Stack[-1])
0x2f2: Pop(1)
0x2f3: Stack[-3] = (bool) 0
0x2f4: Return(); Pop(2)

0x2f5: Stack[-1] = Stack[-3]
0x2f6: Return(); Pop(2)

0x2f7: Stack[-1] = 0
0x2f8: PushEmpty(object, object, int, object, object, int)
0x2f9: PushEmpty(object)
0x2fa: Call2 0x2eb

0x2fb: Stack[-1] = Stack[-4]
0x2fc: Pop(1)
0x2fd: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=352
0x2fe: Pop(0)
0x2ff: Pop(0); Push((bool) Stack[-2] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x301: Push("Can't find diary parent with id: ") // @poff=357
0x302: Pop(1); Push(Stack[-1] + Stack[-8]);
0x303: @ Trace(Stack[-1])
0x304: Pop(1)
0x305: Stack[-9] = (bool) 0
0x306: Return(); Pop(6)

0x307: @@ AddChild(Stack[-8]); Obj=2 // @poff=425
0x308: Pop(0)
0x309: Push((int) 7)
0x30a: @ SendWorldWndMessage(Stack[-1])
0x30b: Pop(1)
0x30c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=434
0x30d: Pop(0)
0x30e: @ SetDiarySection(Stack[-1])
0x30f: Pop(0)
0x310: Stack[-9] = (bool) 0
0x311: Return(); Pop(6)

0x312: Stack[-2] = 0
0x313: Stack[-3] = 0
0x314: PushEmpty(object, object, object, object)
0x315: @ GetMainOutdoorScene(Stack[-2])
0x316: Pop(0)
0x317: Pop(0); PushNull((bool) Stack[-2] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x319: Push("Can't find main outdoor scene") // @poff=446
0x31a: @ Trace(Stack[-1])
0x31b: Pop(1)
0x31c: Stack[-1] = 0
0x31d: Stack[-1] = Stack[-5]
0x31e: Return(); Pop(4)

0x31f: @@ GetMap(Stack[-1]); Obj=2 // @poff=506
0x320: Pop(0)
0x321: Stack[-1] = Stack[-5]
0x322: Return(); Pop(4)

0x323: Stack[-1] = 0
0x324: Stack[-2] = 0
0x325: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x326: @ GetMainOutdoorScene(Stack[-2])
0x327: Pop(0)
0x328: Pop(0); PushNull((bool) Stack[-2] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32a: Push("Can't find main outdoor scene") // @poff=446
0x32b: @ Trace(Stack[-1])
0x32c: Pop(1)
0x32d: Return(); Pop(8)

0x32e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=513
0x32f: Pop(0)
0x330: Pop(0); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x332: Push("Warning: outdoor scene locator ") // @poff=524
0x333: Pop(1); Push(Stack[-1] + Stack[-11]);
0x334: Push(" doesnt exist") // @poff=588
0x335: Pop(2); Push(Stack[-2] + Stack[-1]);
0x336: @ Trace(Stack[-1])
0x337: Pop(1)
0x338: @@ GetMap(Stack[-11]); Obj=2 // @poff=506
0x339: Pop(0)
0x33a: Pop(0); PushNull((bool) Stack[-11] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33c: Push("Can't find map") // @poff=616
0x33d: @ Trace(Stack[-1])
0x33e: Pop(1)
0x33f: Return(); Pop(8)

0x340: Push(CvectorIndex(Stack[-4], 0))
0x341: Push(CvectorIndex(Stack[-5], 2))
0x342: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=646
0x343: Pop(2)
0x344: Return(); Pop(8)

0x345: Stack[-2] = 0
0x346: PushEmpty(int, int)
0x347: Push("branch") // @poff=659
0x348: @ GetVariable(Stack[-1], Stack[-2])
0x349: Pop(1)
0x34a: Push((int) 0)
0x34b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34d: Stack[-3] = (int) 1
0x34e: Return(); Pop(2)

0x34f: GOTO 0x355

0x350: Push((int) 1)
0x351: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-3] = (int) 2
0x354: Return(); Pop(2)

0x355: Stack[-3] = (int) 3
0x356: Return(); Pop(2)

0x357: Stack[-1] = (int) 515571
0x358: Return(); Pop(0)

0x359: Stack[-1] = (int) 504029
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = "ui/NPC_bmask.png" // @poff=673
0x35c: Return(); Pop(0)

0x35d: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=707
0x35e: Return(); Pop(0)

0x35f: Stack[-1] = (bool) 0
0x360: Return(); Pop(0)

