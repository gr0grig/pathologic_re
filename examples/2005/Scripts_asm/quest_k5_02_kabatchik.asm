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
	W:k5q02
	W:k5q02KabatchikGotoAlexandr
	W:pt_map_alexandr
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
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006b00350071003000320000006b0035007100300032004b0061006200610074006300680069006b0047006f0074006f0041006c006500780061006e00640072000000700074005f006d00610070005f0061006c006500780061006e006400720000004164644d61726b0053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x109
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x10f Vars = (object)
		EVENT_26 Op = 0x147 Vars = (string)
		EVENT_5 Op = 0x14f Vars = ()
		EVENT_6 Op = 0x154 Vars = ()
		EVENT_7 Op = 0x193 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x21b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x371

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x373

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35c

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
0x41: Call2 0x25f

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
0x54: Push((int) 525906)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2e8

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 525907)
0x5f: Push((int) 27200)
0x60: Push((int) 27199)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 525912)
0x64: Push((int) -1)
0x65: Push((int) 27204)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 529037)
0x69: Push((int) -1)
0x6a: Push((int) 30478)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x375

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x270

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
0x90: Call2 0x375

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
0xa0: Call2 0x277

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x288

0xa9: Pop(0)
0xaa: Push((int) 27203)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x2c1

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2d8

0xb6: Pop(2)
0xb7: Push((int) 27198)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral" // @poff=89
0xbc: Call2 0x8e

0xbd: Pop(1)
0xbe: Push((int) 525906)
0xbf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc0: Pop(1)
0xc1: @@@ ClearReplies(); Obj=0 // @poff=116
0xc2: Pop(0)
0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Call2 0x2e8

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 525907)
0xc9: Push((int) 27200)
0xca: Push((int) 27199)
0xcb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcc: Pop(3)
0xcd: Push((int) 525912)
0xce: Push((int) -1)
0xcf: Push((int) 27204)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Push((int) 529037)
0xd3: Push((int) -1)
0xd4: Push((int) 30478)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 27200)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral" // @poff=89
0xdd: Call2 0x8e

0xde: Pop(1)
0xdf: Push((int) 525908)
0xe0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe1: Pop(1)
0xe2: @@@ ClearReplies(); Obj=0 // @poff=116
0xe3: Pop(0)
0xe4: Push((int) 525909)
0xe5: Push((int) 27202)
0xe6: Push((int) 27201)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 27202)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral" // @poff=89
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 525910)
0xf2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf3: Pop(1)
0xf4: @@@ ClearReplies(); Obj=0 // @poff=116
0xf5: Pop(0)
0xf6: Push((int) 525911)
0xf7: Push((int) -1)
0xf8: Push((int) 27203)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfd: PushEmpty(bool)
0xfe: Call2 0x375

0xff: Pop(0)
0x100: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x101: @ lshStopAnimation()
0x102: Pop(0)
0x103: GOTO 0x106

0x104: @ StopAnimation()
0x105: Pop(0)
0x106: Return(); Pop(0)

0x107: GOTO 0xa5

0x108: Return(); Pop(0)

0x109: PushEmpty(float, float)
0x10a: Stack[-2] = (int) 300
0x10b: Stack[-1] = (int) 100
0x10c: Call2 0x11a

0x10d: Pop(2)
0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty()
0x111: Call2 0x1aa

0x112: Pop(0)
0x113: PushEmpty(int, object)
0x114: Stack[-3] = Stack[-1]
0x115: Push(-2, 1); TaskCall(0)
0x116: Call2 0x0

0x117: Pop(-2, 1); TaskReturn
0x118: Pop(2)
0x119: Return(); Pop(0)

0x11a: PushEmpty(float, float)
0x11b: PushEmpty(bool)
0x11c: Call2 0x216

0x11d: Pop(0)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x120: @ Hold()
0x121: Pop(0)
0x122: GOTO 0x11b

0x123: Push((int) 3)
0x124: @ rand(Stack[-2], Stack[-1])
0x125: Pop(1)
0x126: Push((int) 3)
0x127: Pop(1); Push(Stack[-2] + Stack[-1]);
0x128: @ Sleep(Stack[-1])
0x129: Pop(1)
0x12a: PushEmpty(float, float)
0x12b: Stack[-6] = Stack[-2]
0x12c: Stack[-5] = Stack[-1]
0x12d: Call2 0x169

0x12e: Pop(2)
0x12f: @ sync()
0x130: Pop(0)
0x131: GOTO 0x11b

0x132: Return(); Pop(2)

0x133: PushEmpty(bool, bool)
0x134: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x135: @ IsLoaded(Stack[-1])
0x136: Pop(0)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: Pop(0); Push((bool) Stack[-2] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(bool)
0x13c: Call2 0x167

0x13d: Pop(0)
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 1
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: PushEmpty(object)
0x142: Call2 0x28f

0x143: Pop(0)
0x144: @ RemoveActor(Stack[-1])
0x145: Pop(1)
0x146: Return(); Pop(2)

0x147: PushEmpty()
0x148: Push("cleanup") // @poff=156
0x149: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14b: PushEmpty()
0x14c: Call2 0x133

0x14d: Pop(0)
0x14e: Return(); Pop(0)

0x14f: @ StopGroup0()
0x150: Pop(0)
0x151: @ sync()
0x152: Pop(0)
0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: Call2 0x1aa

0x156: Pop(0)
0x157: PushEmpty(bool)
0x158: Stack[-1] = (bool) 0
0x159: Push( Stack[5 + Tasks[-1].StackPointer] )
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: PushEmpty(bool)
0x15c: Call2 0x167

0x15d: Pop(0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: PushEmpty(object)
0x162: Call2 0x28f

0x163: Pop(0)
0x164: @ RemoveActor(Stack[-1])
0x165: Pop(1)
0x166: Return(); Pop(0)

0x167: Stack[-1] = (bool) 1
0x168: Return(); Pop(0)

0x169: PushEmpty()
0x16a: PushEmpty(bool)
0x16b: Call2 0x216

0x16c: Pop(0)
0x16d: Pop(1); Push((bool) Stack[-1] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Return(); Pop(0)

0x170: Push("player") // @poff=172
0x171: @ FindActor(Stack[-4]T, Stack[-1])
0x172: Pop(1)
0x173: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x174: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x175: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x176: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x177: Push((int) 10)
0x178: Push((float)1.0)
0x179: @ SetTimer(Stack[-2], Stack[-1])
0x17a: Pop(2)
0x17b: PushEmpty()
0x17c: Call2 0x1b8

0x17d: Pop(0)
0x17e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x180: Push((int) 10)
0x181: @ KillTimer(Stack[-1])
0x182: Pop(1)
0x183: Return(); Pop(0)

0x184: PushEmpty(float, float)
0x185: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x187: Stack[-3] = (bool) 0
0x188: Return(); Pop(2)

0x189: PushEmpty(float, object)
0x18a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x18b: Call2 0x20e

0x18c: Pop(1)
0x18d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x18e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x191: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x192: Return(); Pop(2)

0x193: PushEmpty()
0x194: Push((int) 10)
0x195: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x197: PushEmpty(bool)
0x198: Call2 0x184

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x19f: Call2 0x27d

0x1a0: Pop(1)
0x1a1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1a2: GOTO 0x1a9

0x1a3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a5: Push("head") // @poff=186
0x1a6: @ UnlookAsync(Stack[-1])
0x1a7: Pop(1)
0x1a8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: Call2 0x209

0x1ac: Pop(0)
0x1ad: Push((int) 10)
0x1ae: @ KillTimer(Stack[-1])
0x1af: Pop(1)
0x1b0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b2: Push("head") // @poff=186
0x1b3: @ UnlookAsync(Stack[-1])
0x1b4: Pop(1)
0x1b5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1b9: @ WaitForAnimEnd()
0x1ba: Pop(0)
0x1bb: PushEmpty(bool)
0x1bc: Call2 0x216

0x1bd: Pop(0)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Return(); Pop(14)

0x1c1: PushEmpty(int)
0x1c2: Call2 0x2b0

0x1c3: Stack[-1] = Stack[-8]
0x1c4: Pop(1)
0x1c5: Stack[-6] = (int) 0
0x1c6: PushEmpty(bool)
0x1c7: Stack[-1] = (bool) 0
0x1c8: Push((int) 5)
0x1c9: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: PushEmpty(bool)
0x1cc: Call2 0x216

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 1
0x1d0: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1d1: Push((int) 3)
0x1d2: @ irand(Stack[-6], Stack[-1])
0x1d3: Pop(1)
0x1d4: Push((int) 0)
0x1d5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d7: Push(Stack[-7])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d9: @ irand(Stack[-4], Stack[-7])
0x1da: Pop(0)
0x1db: Push("all") // @poff=138
0x1dc: PushEmpty(string, int)
0x1dd: Stack[-7] = Stack[-1]
0x1de: Call2 0x2a9

0x1df: Pop(1)
0x1e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e1: Pop(2)
0x1e2: @ WaitForAnimEnd(Stack[-3])
0x1e3: Pop(0)
0x1e4: Pop(0); Push((bool) Stack[-3] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: GOTO 0x204

0x1e7: GOTO 0x1f9

0x1e8: Push((int) 1)
0x1e9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1eb: Push((int) 4)
0x1ec: @ rand(Stack[-3], Stack[-1])
0x1ed: Pop(1)
0x1ee: Push((int) 1)
0x1ef: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1f0: @ Sleep(Stack[-1], Stack[-2])
0x1f1: Pop(1)
0x1f2: Pop(0); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: GOTO 0x204

0x1f5: GOTO 0x1f9

0x1f6: Push(Stack[-6])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: GOTO 0x204

0x1f9: PushEmpty(bool)
0x1fa: Call2 0x207

0x1fb: Pop(0)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: GOTO 0x204

0x1ff: @ ResetAAS()
0x200: Pop(0)
0x201: Push((int) 1)
0x202: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x203: GOTO 0x1c6

0x204: @ ResetAAS()
0x205: Pop(0)
0x206: Return(); Pop(14)

0x207: Stack[-1] = (bool) 1
0x208: Return(); Pop(0)

0x209: @ StopAnimation()
0x20a: Pop(0)
0x20b: @ StopGroup0()
0x20c: Pop(0)
0x20d: Return(); Pop(0)

0x20e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x20f: @ GetPosition(Stack[-3])
0x210: Pop(0)
0x211: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x212: Pop(0)
0x213: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x214: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x215: Return(); Pop(6)

0x216: PushEmpty(bool, bool)
0x217: @ IsLoaded(Stack[-1])
0x218: Pop(0)
0x219: Stack[-1] = Stack[-3]
0x21a: Return(); Pop(2)

0x21b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x21c: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x21d: Pop(0)
0x21e: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x21f: Pop(0)
0x220: Push(CvectorIndex(Stack[-8], 1))
0x221: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x222: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x223: @ GetPosition(Stack[-7])
0x224: Pop(0)
0x225: @ GetEyesHeight(Stack[-9])
0x226: Pop(0)
0x227: Push(CvectorIndex(Stack[-7], 1))
0x228: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x229: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x22a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x22b: Push(CvectorIndex(Stack[-6], 1))
0x22c: Stack[-1] = (int) 0
0x22d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x22e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x22f: Pop(1); Push(Sqrt(Stack[-1]))
0x230: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x231: Stack[-5] = -Stack[-6]; Pop(0);
0x232: Pop(0); Push(Stack[-6] * Stack[-19]);
0x233: PushEmpty(cvector, cvector)
0x234: Push([0.0, 1.0, 0.0])
0x235: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x236: Call2 0x295

0x237: Pop(1)
0x238: Push((int) 25)
0x239: Pop(2); Push(Stack[-2] * Stack[-1]);
0x23a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23b: Push([0.0, 10.0, 0.0])
0x23c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x23d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x23e: @ IsOverrideActive(Stack[-2])
0x23f: Pop(0)
0x240: Push(Stack[-2])
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-21] = (bool) 0
0x243: Return(); Pop(18)

0x244: @ StopWorld()
0x245: Pop(0)
0x246: @ CameraTransit(Stack[-3], Stack[-5])
0x247: Pop(0)
0x248: Push(CvectorIndex(Stack[-4], 0))
0x249: Push(CvectorIndex(Stack[-5], 2))
0x24a: @ Rotate(Stack[-2], Stack[-1])
0x24b: Pop(2)
0x24c: PushEmpty(bool)
0x24d: Call2 0x375

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x259

0x251: Push("head") // @poff=186
0x252: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x253: Pop(1)
0x254: Push(Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x256: Push("head") // @poff=186
0x257: @ LookAsyncCamera(Stack[-1])
0x258: Pop(1)
0x259: @ CameraWaitForPlayFinish()
0x25a: Pop(0)
0x25b: @ ResumeWorld()
0x25c: Pop(0)
0x25d: Stack[-21] = (bool) 1
0x25e: Return(); Pop(18)

0x25f: PushEmpty(bool, bool)
0x260: @ CameraSwitchToNormal()
0x261: Pop(0)
0x262: PushEmpty(bool)
0x263: Call2 0x375

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x26f

0x267: Push("head") // @poff=186
0x268: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x269: Pop(1)
0x26a: Push(Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26c: Push("head") // @poff=186
0x26d: @ UnlookAsync(Stack[-1])
0x26e: Pop(1)
0x26f: Return(); Pop(2)

0x270: PushEmpty(float, float, float, float)
0x271: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x272: Pop(0)
0x273: Push((bool) 0)
0x274: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(1)
0x276: Return(); Pop(4)

0x277: PushEmpty(float, float, float, float)
0x278: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x279: Pop(0)
0x27a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x27b: Pop(0)
0x27c: Return(); Pop(4)

0x27d: PushEmpty(float, cvector, float, cvector)
0x27e: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x27f: Pop(0)
0x280: Stack[-1] = [0.0, 0.0, 0.0]
0x281: Push(CvectorIndex(Stack[-1], 1))
0x282: Stack[-3] = Stack[-1]
0x283: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x284: Push("head") // @poff=186
0x285: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x286: Pop(1)
0x287: Return(); Pop(4)

0x288: PushEmpty(bool)
0x289: Call2 0x375

0x28a: Pop(0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: @ lshStopSpeech()
0x28d: Pop(0)
0x28e: Return(); Pop(0)

0x28f: PushEmpty(object, object)
0x290: @ self(Stack[-1])
0x291: Pop(0)
0x292: Stack[-1] = Stack[-3]
0x293: Return(); Pop(2)

0x294: Stack[-1] = 0
0x295: PushEmpty(float, float)
0x296: Pop(0); Push(Stack[-3] | Stack[-3]);
0x297: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x298: Push((float)9.999999974752427e-07)
0x299: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-4] = [0.0, 0.0, 0.0]
0x29c: Return(); Pop(2)

0x29d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x29e: Return(); Pop(2)

0x29f: PushEmpty(int, int)
0x2a0: @ GetVariable(Stack[-3], Stack[-1])
0x2a1: Pop(0)
0x2a2: Stack[-1] = Stack[-4]
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty(float, float)
0x2a5: @ GetGameTime(Stack[-1])
0x2a6: Pop(0)
0x2a7: Stack[-1] = Stack[-3]
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(string, string)
0x2aa: Stack[-1] = "idle" // @poff=146
0x2ab: Push(Stack[-3])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ad: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ae: Stack[-1] = Stack[-4]
0x2af: Return(); Pop(2)

0x2b0: PushEmpty(int, bool, int, bool)
0x2b1: Stack[-2] = (int) 0
0x2b2: Push("all") // @poff=138
0x2b3: PushEmpty(string, int)
0x2b4: Stack[-5] = Stack[-1]
0x2b5: Call2 0x2a9

0x2b6: Pop(1)
0x2b7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(2)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2bf

0x2bc: Push((int) 1)
0x2bd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2be: GOTO 0x2b2

0x2bf: Stack[-2] = Stack[-5]
0x2c0: Return(); Pop(4)

0x2c1: PushEmpty(object, object)
0x2c2: Push("k5q02") // @poff=222
0x2c3: Push((int) 3)
0x2c4: @ SetVariable(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: PushEmpty(object)
0x2c7: Call2 0x32a

0x2c8: Stack[-1] = Stack[-2]
0x2c9: Pop(1)
0x2ca: Push("k5q02KabatchikGotoAlexandr") // @poff=234
0x2cb: Push("pt_map_alexandr") // @poff=288
0x2cc: Push((int) 0)
0x2cd: Push((int) 511155)
0x2ce: PushEmpty(float)
0x2cf: Call2 0x2a4

0x2d0: Pop(0)
0x2d1: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=320
0x2d2: Pop(5)
0x2d3: PushEmpty()
0x2d4: Call2 0x2f4

0x2d5: Pop(0)
0x2d6: Return(); Pop(2)

0x2d7: Stack[-1] = 0
0x2d8: PushEmpty()
0x2d9: PushEmpty(object, string, float)
0x2da: PushEmpty(object)
0x2db: Call2 0x32a

0x2dc: Stack[-1] = Stack[-4]
0x2dd: Pop(1)
0x2de: Stack[-2] = "pt_map_alexandr" // @poff=288
0x2df: Stack[-1] = (int) 2
0x2e0: Call2 0x33b

0x2e1: Pop(3)
0x2e2: PushEmpty(object)
0x2e3: Call2 0x32a

0x2e4: Pop(0)
0x2e5: @@ ShowMap(Stack[-1]); Obj=2 // @poff=328
0x2e6: Pop(1)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(int, string)
0x2ea: Stack[-1] = "k5q02" // @poff=222
0x2eb: Call2 0x29f

0x2ec: Pop(1)
0x2ed: Push((int) 2)
0x2ee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-2] = (bool) 1
0x2f1: Return(); Pop(0)

0x2f2: Stack[-2] = (bool) 0
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(object, object)
0x2f5: Push((int) 400)
0x2f6: Push((int) 2)
0x2f7: Push((int) 525938)
0x2f8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: PushEmpty(bool, object, int)
0x2fb: Stack[-4] = Stack[-2]
0x2fc: Stack[-1] = (int) 397
0x2fd: Call2 0x30e

0x2fe: Pop(3)
0x2ff: Return(); Pop(2)

0x300: Stack[-1] = 0
0x301: PushEmpty(object, object)
0x302: @ GetDiaryRoot(Stack[-1])
0x303: Pop(0)
0x304: Pop(0); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: Push("Can't retrieve diary root") // @poff=336
0x307: @ Trace(Stack[-1])
0x308: Pop(1)
0x309: Stack[-3] = (bool) 0
0x30a: Return(); Pop(2)

0x30b: Stack[-1] = Stack[-3]
0x30c: Return(); Pop(2)

0x30d: Stack[-1] = 0
0x30e: PushEmpty(object, object, int, object, object, int)
0x30f: PushEmpty(object)
0x310: Call2 0x301

0x311: Stack[-1] = Stack[-4]
0x312: Pop(1)
0x313: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=388
0x314: Pop(0)
0x315: Pop(0); Push((bool) Stack[-2] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x317: Push("Can't find diary parent with id: ") // @poff=393
0x318: Pop(1); Push(Stack[-1] + Stack[-8]);
0x319: @ Trace(Stack[-1])
0x31a: Pop(1)
0x31b: Stack[-9] = (bool) 0
0x31c: Return(); Pop(6)

0x31d: @@ AddChild(Stack[-8]); Obj=2 // @poff=461
0x31e: Pop(0)
0x31f: Push((int) 7)
0x320: @ SendWorldWndMessage(Stack[-1])
0x321: Pop(1)
0x322: @@ GetCategory(Stack[-1]); Obj=8 // @poff=470
0x323: Pop(0)
0x324: @ SetDiarySection(Stack[-1])
0x325: Pop(0)
0x326: Stack[-9] = (bool) 0
0x327: Return(); Pop(6)

0x328: Stack[-2] = 0
0x329: Stack[-3] = 0
0x32a: PushEmpty(object, object, object, object)
0x32b: @ GetMainOutdoorScene(Stack[-2])
0x32c: Pop(0)
0x32d: Pop(0); PushNull((bool) Stack[-2] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: Push("Can't find main outdoor scene") // @poff=482
0x330: @ Trace(Stack[-1])
0x331: Pop(1)
0x332: Stack[-1] = 0
0x333: Stack[-1] = Stack[-5]
0x334: Return(); Pop(4)

0x335: @@ GetMap(Stack[-1]); Obj=2 // @poff=542
0x336: Pop(0)
0x337: Stack[-1] = Stack[-5]
0x338: Return(); Pop(4)

0x339: Stack[-1] = 0
0x33a: Stack[-2] = 0
0x33b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x33c: @ GetMainOutdoorScene(Stack[-2])
0x33d: Pop(0)
0x33e: Pop(0); PushNull((bool) Stack[-2] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x340: Push("Can't find main outdoor scene") // @poff=482
0x341: @ Trace(Stack[-1])
0x342: Pop(1)
0x343: Return(); Pop(8)

0x344: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=549
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x348: Push("Warning: outdoor scene locator ") // @poff=560
0x349: Pop(1); Push(Stack[-1] + Stack[-11]);
0x34a: Push(" doesnt exist") // @poff=624
0x34b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34c: @ Trace(Stack[-1])
0x34d: Pop(1)
0x34e: @@ GetMap(Stack[-11]); Obj=2 // @poff=542
0x34f: Pop(0)
0x350: Pop(0); PushNull((bool) Stack[-11] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x352: Push("Can't find map") // @poff=652
0x353: @ Trace(Stack[-1])
0x354: Pop(1)
0x355: Return(); Pop(8)

0x356: Push(CvectorIndex(Stack[-4], 0))
0x357: Push(CvectorIndex(Stack[-5], 2))
0x358: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=682
0x359: Pop(2)
0x35a: Return(); Pop(8)

0x35b: Stack[-2] = 0
0x35c: PushEmpty(int, int)
0x35d: Push("branch") // @poff=695
0x35e: @ GetVariable(Stack[-1], Stack[-2])
0x35f: Pop(1)
0x360: Push((int) 0)
0x361: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x363: Stack[-3] = (int) 1
0x364: Return(); Pop(2)

0x365: GOTO 0x36b

0x366: Push((int) 1)
0x367: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: Stack[-3] = (int) 2
0x36a: Return(); Pop(2)

0x36b: Stack[-3] = (int) 3
0x36c: Return(); Pop(2)

0x36d: Stack[-1] = (int) 515563
0x36e: Return(); Pop(0)

0x36f: Stack[-1] = (int) 503348
0x370: Return(); Pop(0)

0x371: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=709
0x372: Return(); Pop(0)

0x373: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=749
0x374: Return(); Pop(0)

0x375: Stack[-1] = (bool) 0
0x376: Return(); Pop(0)

