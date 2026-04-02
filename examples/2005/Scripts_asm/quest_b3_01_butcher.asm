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
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:b3q01
	W:b3q01ButcherGotoBigVlad
	W:pt_map_bigvlad
	A:AddMark
	W:oob3Butcher1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e00750070000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e006700000062003300710030003100000062003300710030003100420075007400630068006500720047006f0074006f0042006900670056006c00610064000000700074005f006d00610070005f0062006900670076006c006100640000004164644d61726b006f006f0062003300420075007400630068006500720031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000
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
	GetVariable (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x244
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x239 Vars = (object)
		EVENT_26 Op = 0x26d Vars = (string)
		EVENT_5 Op = 0x275 Vars = ()
		EVENT_6 Op = 0x27a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x3e9

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x33c

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x2e7

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x40e

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x40c

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x410

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x412

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x4aa

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x32b

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x457

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral" // @poff=89
0x5e: Call2 0xa9

0x5f: Pop(1)
0x60: Push((int) 519294)
0x61: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x62: Pop(1)
0x63: @@@ ClearReplies(); Obj=0 // @poff=116
0x64: Pop(0)
0x65: Push((int) 519295)
0x66: Push((int) 20450)
0x67: Push((int) 20449)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: Push((int) 519300)
0x6b: Push((int) 20455)
0x6c: Push((int) 20454)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: GOTO 0x8b

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0xa9

0x73: Pop(1)
0x74: Push((int) 519643)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x44b

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 519644)
0x7f: Push((int) 20823)
0x80: Push((int) 20821)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: Push((int) 519645)
0x84: Push((int) -1)
0x85: Push((int) 20822)
0x86: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x414

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3c6

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all") // @poff=138
0x9b: Push("idle") // @poff=146
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all") // @poff=138
0xa4: Push("idle") // @poff=146
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x414

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-3] = Stack[-2]
0xb5: Push("") // @poff=102
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x3cd

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x3e2

0xc4: Pop(0)
0xc5: Push((int) 20471)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x42e

0xcc: Pop(2)
0xcd: Push((int) 20472)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x42e

0xd4: Pop(2)
0xd5: Push((int) 20821)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x445

0xdc: Pop(2)
0xdd: Push((int) 20448)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x457

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0xa9

0xe8: Pop(1)
0xe9: Push((int) 519294)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 519295)
0xef: Push((int) 20450)
0xf0: Push((int) 20449)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Push((int) 519300)
0xf4: Push((int) 20455)
0xf5: Push((int) 20454)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral" // @poff=89
0xfb: Call2 0xa9

0xfc: Pop(1)
0xfd: Push((int) 519643)
0xfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xff: Pop(1)
0x100: @@@ ClearReplies(); Obj=0 // @poff=116
0x101: Pop(0)
0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0x44b

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x107: Push((int) 519644)
0x108: Push((int) 20823)
0x109: Push((int) 20821)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Push((int) 519645)
0x10d: Push((int) -1)
0x10e: Push((int) 20822)
0x10f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 20823)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral" // @poff=89
0x117: Call2 0xa9

0x118: Pop(1)
0x119: Push((int) 519646)
0x11a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11b: Pop(1)
0x11c: @@@ ClearReplies(); Obj=0 // @poff=116
0x11d: Pop(0)
0x11e: Push((int) 519647)
0x11f: Push((int) 20825)
0x120: Push((int) 20824)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Push((int) 527865)
0x124: Push((int) 20825)
0x125: Push((int) 29210)
0x126: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 20825)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral" // @poff=89
0x12e: Call2 0xa9

0x12f: Pop(1)
0x130: Push((int) 519648)
0x131: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x132: Pop(1)
0x133: @@@ ClearReplies(); Obj=0 // @poff=116
0x134: Pop(0)
0x135: Push((int) 519649)
0x136: Push((int) -1)
0x137: Push((int) 20826)
0x138: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 20455)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Neutral" // @poff=89
0x140: Call2 0xa9

0x141: Pop(1)
0x142: Push((int) 519301)
0x143: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x144: Pop(1)
0x145: @@@ ClearReplies(); Obj=0 // @poff=116
0x146: Pop(0)
0x147: Push((int) 519304)
0x148: Push((int) 20459)
0x149: Push((int) 20458)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 20450)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xa9

0x153: Pop(1)
0x154: Push((int) 519296)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 519297)
0x15a: Push((int) 20452)
0x15b: Push((int) 20451)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 20452)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0xa9

0x165: Pop(1)
0x166: Push((int) 519298)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 519299)
0x16c: Push((int) 20456)
0x16d: Push((int) 20453)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 519317)
0x171: Push((int) 20474)
0x172: Push((int) 20473)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 20474)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0xa9

0x17c: Pop(1)
0x17d: Push((int) 519318)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 519319)
0x183: Push((int) 20476)
0x184: Push((int) 20475)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Push((int) 519322)
0x188: Push((int) 20456)
0x189: Push((int) 20479)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 20476)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0xa9

0x193: Pop(1)
0x194: Push((int) 519320)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 519321)
0x19a: Push((int) 20456)
0x19b: Push((int) 20477)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 20456)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral" // @poff=89
0x1a4: Call2 0xa9

0x1a5: Pop(1)
0x1a6: Push((int) 519302)
0x1a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a8: Pop(1)
0x1a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1aa: Pop(0)
0x1ab: Push((int) 519303)
0x1ac: Push((int) 20459)
0x1ad: Push((int) 20457)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 20459)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0xa9

0x1b7: Pop(1)
0x1b8: Push((int) 519305)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 519306)
0x1be: Push((int) 20462)
0x1bf: Push((int) 20461)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Push((int) 519638)
0x1c3: Push((int) 20817)
0x1c4: Push((int) 20816)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 20817)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0xa9

0x1ce: Pop(1)
0x1cf: Push((int) 519639)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: Push((int) 519640)
0x1d5: Push((int) 20470)
0x1d6: Push((int) 20818)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 20462)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral" // @poff=89
0x1df: Call2 0xa9

0x1e0: Pop(1)
0x1e1: Push((int) 519307)
0x1e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e3: Pop(1)
0x1e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e5: Pop(0)
0x1e6: Push((int) 519308)
0x1e7: Push((int) 20464)
0x1e8: Push((int) 20463)
0x1e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 20464)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral" // @poff=89
0x1f1: Call2 0xa9

0x1f2: Pop(1)
0x1f3: Push((int) 519309)
0x1f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f5: Pop(1)
0x1f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f7: Pop(0)
0x1f8: Push((int) 519310)
0x1f9: Push((int) 20467)
0x1fa: Push((int) 20465)
0x1fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fc: Pop(3)
0x1fd: Push((int) 519311)
0x1fe: Push((int) 20467)
0x1ff: Push((int) 20466)
0x200: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 20467)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral" // @poff=89
0x208: Call2 0xa9

0x209: Pop(1)
0x20a: Push((int) 519312)
0x20b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20c: Pop(1)
0x20d: @@@ ClearReplies(); Obj=0 // @poff=116
0x20e: Pop(0)
0x20f: Push((int) 519313)
0x210: Push((int) 20470)
0x211: Push((int) 20469)
0x212: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x213: Pop(3)
0x214: Return(); Pop(0)

0x215: Push((int) 20470)
0x216: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x218: PushEmpty(string)
0x219: Stack[-1] = "Neutral" // @poff=89
0x21a: Call2 0xa9

0x21b: Pop(1)
0x21c: Push((int) 519314)
0x21d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21e: Pop(1)
0x21f: @@@ ClearReplies(); Obj=0 // @poff=116
0x220: Pop(0)
0x221: Push((int) 519315)
0x222: Push((int) -1)
0x223: Push((int) 20471)
0x224: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x225: Pop(3)
0x226: Push((int) 519316)
0x227: Push((int) -1)
0x228: Push((int) 20472)
0x229: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22d: PushEmpty(bool)
0x22e: Call2 0x414

0x22f: Pop(0)
0x230: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x231: @ lshStopAnimation()
0x232: Pop(0)
0x233: GOTO 0x236

0x234: @ StopAnimation()
0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: GOTO 0xc0

0x238: Return(); Pop(0)

0x239: PushEmpty()
0x23a: PushEmpty()
0x23b: Call2 0x2dd

0x23c: Pop(0)
0x23d: PushEmpty(int, object)
0x23e: Stack[-3] = Stack[-1]
0x23f: Push(-2, 1); TaskCall(0)
0x240: Call2 0x0

0x241: Pop(-2, 1); TaskReturn
0x242: Pop(2)
0x243: Return(); Pop(0)

0x244: PushEmpty(float, float)
0x245: PushEmpty(bool)
0x246: Call2 0x2e2

0x247: Pop(0)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24a: @ Hold()
0x24b: Pop(0)
0x24c: GOTO 0x245

0x24d: Push((int) 3)
0x24e: @ rand(Stack[-2], Stack[-1])
0x24f: Pop(1)
0x250: Push((int) 3)
0x251: Pop(1); Push(Stack[-2] + Stack[-1]);
0x252: @ Sleep(Stack[-1])
0x253: Pop(1)
0x254: PushEmpty()
0x255: Call2 0x28c

0x256: Pop(0)
0x257: GOTO 0x245

0x258: Return(); Pop(2)

0x259: PushEmpty(bool, bool)
0x25a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x25b: @ IsLoaded(Stack[-1])
0x25c: Pop(0)
0x25d: PushEmpty(bool)
0x25e: Stack[-1] = (bool) 0
0x25f: Pop(0); Push((bool) Stack[-2] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: PushEmpty(bool)
0x262: Call2 0x28a

0x263: Pop(0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: Stack[-1] = (bool) 1
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(object)
0x268: Call2 0x3e9

0x269: Pop(0)
0x26a: @ RemoveActor(Stack[-1])
0x26b: Pop(1)
0x26c: Return(); Pop(2)

0x26d: PushEmpty()
0x26e: Push("cleanup") // @poff=156
0x26f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x271: PushEmpty()
0x272: Call2 0x259

0x273: Pop(0)
0x274: Return(); Pop(0)

0x275: @ StopGroup0()
0x276: Pop(0)
0x277: @ sync()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: PushEmpty(bool)
0x27b: Stack[-1] = (bool) 0
0x27c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: PushEmpty(bool)
0x27f: Call2 0x28a

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Stack[-1] = (bool) 1
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: PushEmpty(object)
0x285: Call2 0x3e9

0x286: Pop(0)
0x287: @ RemoveActor(Stack[-1])
0x288: Pop(1)
0x289: Return(); Pop(0)

0x28a: Stack[-1] = (bool) 1
0x28b: Return(); Pop(0)

0x28c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x28d: @ WaitForAnimEnd()
0x28e: Pop(0)
0x28f: PushEmpty(bool)
0x290: Call2 0x2e2

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(14)

0x295: PushEmpty(int)
0x296: Call2 0x41d

0x297: Stack[-1] = Stack[-8]
0x298: Pop(1)
0x299: Stack[-6] = (int) 0
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: Push((int) 5)
0x29d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: PushEmpty(bool)
0x2a0: Call2 0x2e2

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 1
0x2a4: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2a5: Push((int) 3)
0x2a6: @ irand(Stack[-6], Stack[-1])
0x2a7: Pop(1)
0x2a8: Push((int) 0)
0x2a9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ab: Push(Stack[-7])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ad: @ irand(Stack[-4], Stack[-7])
0x2ae: Pop(0)
0x2af: Push("all") // @poff=138
0x2b0: PushEmpty(string, int)
0x2b1: Stack[-7] = Stack[-1]
0x2b2: Call2 0x416

0x2b3: Pop(1)
0x2b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: @ WaitForAnimEnd(Stack[-3])
0x2b7: Pop(0)
0x2b8: Pop(0); Push((bool) Stack[-3] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: GOTO 0x2d8

0x2bb: GOTO 0x2cd

0x2bc: Push((int) 1)
0x2bd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bf: Push((int) 4)
0x2c0: @ rand(Stack[-3], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push((int) 1)
0x2c3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c4: @ Sleep(Stack[-1], Stack[-2])
0x2c5: Pop(1)
0x2c6: Pop(0); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2d8

0x2c9: GOTO 0x2cd

0x2ca: Push(Stack[-6])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d8

0x2cd: PushEmpty(bool)
0x2ce: Call2 0x2db

0x2cf: Pop(0)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2d8

0x2d3: @ ResetAAS()
0x2d4: Pop(0)
0x2d5: Push((int) 1)
0x2d6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2d7: GOTO 0x29a

0x2d8: @ ResetAAS()
0x2d9: Pop(0)
0x2da: Return(); Pop(14)

0x2db: Stack[-1] = (bool) 1
0x2dc: Return(); Pop(0)

0x2dd: @ StopAnimation()
0x2de: Pop(0)
0x2df: @ StopGroup0()
0x2e0: Pop(0)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty(bool, bool)
0x2e3: @ IsLoaded(Stack[-1])
0x2e4: Pop(0)
0x2e5: Stack[-1] = Stack[-3]
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2e8: @@ GetPosition(Stack[-8]); Obj=20 // @poff=172
0x2e9: Pop(0)
0x2ea: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=184
0x2eb: Pop(0)
0x2ec: Push(CvectorIndex(Stack[-8], 1))
0x2ed: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ee: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ef: @ GetPosition(Stack[-7])
0x2f0: Pop(0)
0x2f1: @ GetEyesHeight(Stack[-9])
0x2f2: Pop(0)
0x2f3: Push(CvectorIndex(Stack[-7], 1))
0x2f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2f6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2f7: Push(CvectorIndex(Stack[-6], 1))
0x2f8: Stack[-1] = (int) 0
0x2f9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2fa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2fb: Pop(1); Push(Sqrt(Stack[-1]))
0x2fc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2fd: Stack[-5] = -Stack[-6]; Pop(0);
0x2fe: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ff: PushEmpty(cvector, cvector)
0x300: Push([0.0, 1.0, 0.0])
0x301: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x302: Call2 0x3ef

0x303: Pop(1)
0x304: Push((int) 25)
0x305: Pop(2); Push(Stack[-2] * Stack[-1]);
0x306: Pop(2); Push(Stack[-2] + Stack[-1]);
0x307: Push([0.0, 10.0, 0.0])
0x308: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x309: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x30a: @ IsOverrideActive(Stack[-2])
0x30b: Pop(0)
0x30c: Push(Stack[-2])
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: Stack[-21] = (bool) 0
0x30f: Return(); Pop(18)

0x310: @ StopWorld()
0x311: Pop(0)
0x312: @ CameraTransit(Stack[-3], Stack[-5])
0x313: Pop(0)
0x314: Push(CvectorIndex(Stack[-4], 0))
0x315: Push(CvectorIndex(Stack[-5], 2))
0x316: @ Rotate(Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: PushEmpty(bool)
0x319: Call2 0x414

0x31a: Pop(0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: GOTO 0x325

0x31d: Push("head") // @poff=198
0x31e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x31f: Pop(1)
0x320: Push(Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x322: Push("head") // @poff=198
0x323: @ LookAsyncCamera(Stack[-1])
0x324: Pop(1)
0x325: @ CameraWaitForPlayFinish()
0x326: Pop(0)
0x327: @ ResumeWorld()
0x328: Pop(0)
0x329: Stack[-21] = (bool) 1
0x32a: Return(); Pop(18)

0x32b: PushEmpty(bool, bool)
0x32c: @ CameraSwitchToNormal()
0x32d: Pop(0)
0x32e: PushEmpty(bool)
0x32f: Call2 0x414

0x330: Pop(0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x33b

0x333: Push("head") // @poff=198
0x334: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x335: Pop(1)
0x336: Push(Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x338: Push("head") // @poff=198
0x339: @ UnlookAsync(Stack[-1])
0x33a: Pop(1)
0x33b: Return(); Pop(2)

0x33c: PushEmpty(int, int, int, int)
0x33d: Push("voice_common") // @poff=208
0x33e: @ GetVariable(Stack[-1], Stack[-3])
0x33f: Pop(1)
0x340: Push(Stack[-2])
0x341: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x342: PushEmpty(bool, object)
0x343: Stack[-7] = Stack[-1]
0x344: Call2 0x376

0x345: Pop(1)
0x346: Pop(1); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x348: PushEmpty(bool, object)
0x349: Stack[-7] = Stack[-1]
0x34a: Call2 0x39b

0x34b: Pop(1)
0x34c: Pop(1); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-6] = (bool) 0
0x34f: Return(); Pop(4)

0x350: Push((int) 2)
0x351: @ irand(Stack[-2], Stack[-1])
0x352: Pop(1)
0x353: Push(Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x355: Push("voice_common") // @poff=208
0x356: Push((int) 1)
0x357: Pop(1); Push(Stack[-4] + Stack[-1]);
0x358: Push((int) 3)
0x359: Pop(2); Push(Stack[-2] % Stack[-1]);
0x35a: @ SetVariable(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: GOTO 0x361

0x35d: Push("voice_common") // @poff=208
0x35e: Push((int) 0)
0x35f: @ SetVariable(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: GOTO 0x374

0x362: PushEmpty(bool, object)
0x363: Stack[-7] = Stack[-1]
0x364: Call2 0x39b

0x365: Pop(1)
0x366: Pop(1); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x368: PushEmpty(bool, object)
0x369: Stack[-7] = Stack[-1]
0x36a: Call2 0x376

0x36b: Pop(1)
0x36c: Pop(1); Push((bool) Stack[-1] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-6] = (bool) 0
0x36f: Return(); Pop(4)

0x370: Push("voice_common") // @poff=208
0x371: Push((int) 1)
0x372: @ SetVariable(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: Stack[-6] = (bool) 1
0x375: Return(); Pop(4)

0x376: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x377: Stack[-5] = "c" // @poff=234
0x378: Stack[-4] = (int) 0
0x379: Push((int) 1)
0x37a: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37b: Push((int) 1)
0x37c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x37e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=238
0x37f: Pop(1)
0x380: Pop(0); Push((bool) Stack[-3] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: GOTO 0x386

0x383: Push((int) 1)
0x384: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x385: GOTO 0x379

0x386: Pop(0); Push((bool) Stack[-4] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-12] = (bool) 0
0x389: Return(); Pop(10)

0x38a: Stack[-2] = (int) 0
0x38b: Push((int) 1)
0x38c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: @ irand(Stack[-2], Stack[-4])
0x38f: Pop(0)
0x390: Push((int) 1)
0x391: Pop(1); Push(Stack[-3] + Stack[-1]);
0x392: Pop(1); Push(Stack[-6] + Stack[-1]);
0x393: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=250
0x394: Pop(1)
0x395: PushEmpty(bool, string)
0x396: Stack[-3] = Stack[-1]
0x397: Call2 0x3d3

0x398: Stack[-2] = Stack[-14]
0x399: Pop(2)
0x39a: Return(); Pop(10)

0x39b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x39c: Push("d") // @poff=204
0x39d: PushEmpty(int)
0x39e: Call2 0x403

0x39f: Pop(0)
0x3a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a1: Push("m") // @poff=262
0x3a2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a3: Stack[-4] = (int) 0
0x3a4: Push((int) 1)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3a6: Push((int) 1)
0x3a7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a9: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=238
0x3aa: Pop(1)
0x3ab: Pop(0); Push((bool) Stack[-3] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ad: GOTO 0x3b1

0x3ae: Push((int) 1)
0x3af: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b0: GOTO 0x3a4

0x3b1: Pop(0); Push((bool) Stack[-4] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-12] = (bool) 0
0x3b4: Return(); Pop(10)

0x3b5: Stack[-2] = (int) 0
0x3b6: Push((int) 1)
0x3b7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: @ irand(Stack[-2], Stack[-4])
0x3ba: Pop(0)
0x3bb: Push((int) 1)
0x3bc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3bd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3be: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=250
0x3bf: Pop(1)
0x3c0: PushEmpty(bool, string)
0x3c1: Stack[-3] = Stack[-1]
0x3c2: Call2 0x3d3

0x3c3: Stack[-2] = Stack[-14]
0x3c4: Pop(2)
0x3c5: Return(); Pop(10)

0x3c6: PushEmpty(float, float, float, float)
0x3c7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3c8: Pop(0)
0x3c9: Push((bool) 0)
0x3ca: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(1)
0x3cc: Return(); Pop(4)

0x3cd: PushEmpty(float, float, float, float)
0x3ce: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3cf: Pop(0)
0x3d0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3d1: Pop(0)
0x3d2: Return(); Pop(4)

0x3d3: PushEmpty(bool, bool)
0x3d4: PushEmpty(bool)
0x3d5: Call2 0x414

0x3d6: Pop(0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d8: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3d9: Pop(0)
0x3da: Push(Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3dc: @ lshPlaySpeech(Stack[-3])
0x3dd: Pop(0)
0x3de: Stack[-4] = (bool) 1
0x3df: Return(); Pop(2)

0x3e0: Stack[-4] = (bool) 0
0x3e1: Return(); Pop(2)

0x3e2: PushEmpty(bool)
0x3e3: Call2 0x414

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

0x3fe: PushEmpty(float, float)
0x3ff: @ GetGameTime(Stack[-1])
0x400: Pop(0)
0x401: Stack[-1] = Stack[-3]
0x402: Return(); Pop(2)

0x403: PushEmpty(float, float)
0x404: @ GetGameTime(Stack[-1])
0x405: Pop(0)
0x406: Push((int) 1)
0x407: PushEmpty(int)
0x408: Push((int) 24)
0x409: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x40a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x40b: Return(); Pop(2)

0x40c: Stack[-1] = (int) 515562
0x40d: Return(); Pop(0)

0x40e: Stack[-1] = (int) 503347
0x40f: Return(); Pop(0)

0x410: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=266
0x411: Return(); Pop(0)

0x412: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=306
0x413: Return(); Pop(0)

0x414: Stack[-1] = (bool) 0
0x415: Return(); Pop(0)

0x416: PushEmpty(string, string)
0x417: Stack[-1] = "idle" // @poff=146
0x418: Push(Stack[-3])
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x41b: Stack[-1] = Stack[-4]
0x41c: Return(); Pop(2)

0x41d: PushEmpty(int, bool, int, bool)
0x41e: Stack[-2] = (int) 0
0x41f: Push("all") // @poff=138
0x420: PushEmpty(string, int)
0x421: Stack[-5] = Stack[-1]
0x422: Call2 0x416

0x423: Pop(1)
0x424: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: Pop(0); Push((bool) Stack[-1] == 0)
0x427: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x428: GOTO 0x42c

0x429: Push((int) 1)
0x42a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x42b: GOTO 0x41f

0x42c: Stack[-2] = Stack[-5]
0x42d: Return(); Pop(4)

0x42e: PushEmpty(object, object)
0x42f: Push("b3q01") // @poff=350
0x430: Push((int) 3)
0x431: @ SetVariable(Stack[-2], Stack[-1])
0x432: Pop(2)
0x433: PushEmpty(object)
0x434: Call2 0x499

0x435: Stack[-1] = Stack[-2]
0x436: Pop(1)
0x437: Push("b3q01ButcherGotoBigVlad") // @poff=362
0x438: Push("pt_map_bigvlad") // @poff=410
0x439: Push((int) 1)
0x43a: Push((int) 519641)
0x43b: PushEmpty(float)
0x43c: Call2 0x3fe

0x43d: Pop(0)
0x43e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=440
0x43f: Pop(5)
0x440: PushEmpty()
0x441: Call2 0x463

0x442: Pop(0)
0x443: Return(); Pop(2)

0x444: Stack[-1] = 0
0x445: PushEmpty()
0x446: Push("oob3Butcher1") // @poff=448
0x447: Push((int) 1)
0x448: @ SetVariable(Stack[-2], Stack[-1])
0x449: Pop(2)
0x44a: Return(); Pop(0)

0x44b: PushEmpty()
0x44c: PushEmpty(int, string)
0x44d: Stack[-1] = "oob3Butcher1" // @poff=448
0x44e: Call2 0x3f9

0x44f: Pop(1)
0x450: Push((int) 0)
0x451: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: Stack[-2] = (bool) 1
0x454: Return(); Pop(0)

0x455: Stack[-2] = (bool) 0
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: PushEmpty(int, string)
0x459: Stack[-1] = "b3q01" // @poff=350
0x45a: Call2 0x3f9

0x45b: Pop(1)
0x45c: Push((int) 2)
0x45d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-2] = (bool) 1
0x460: Return(); Pop(0)

0x461: Stack[-2] = (bool) 0
0x462: Return(); Pop(0)

0x463: PushEmpty(object, object)
0x464: Push((int) 224)
0x465: Push((int) 1)
0x466: Push((int) 519642)
0x467: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: PushEmpty(bool, object, int)
0x46a: Stack[-4] = Stack[-2]
0x46b: Stack[-1] = (int) 221
0x46c: Call2 0x47d

0x46d: Pop(3)
0x46e: Return(); Pop(2)

0x46f: Stack[-1] = 0
0x470: PushEmpty(object, object)
0x471: @ GetDiaryRoot(Stack[-1])
0x472: Pop(0)
0x473: Pop(0); Push((bool) Stack[-1] == 0)
0x474: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x475: Push("Can't retrieve diary root") // @poff=474
0x476: @ Trace(Stack[-1])
0x477: Pop(1)
0x478: Stack[-3] = (bool) 0
0x479: Return(); Pop(2)

0x47a: Stack[-1] = Stack[-3]
0x47b: Return(); Pop(2)

0x47c: Stack[-1] = 0
0x47d: PushEmpty(object, object, int, object, object, int)
0x47e: PushEmpty(object)
0x47f: Call2 0x470

0x480: Stack[-1] = Stack[-4]
0x481: Pop(1)
0x482: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=526
0x483: Pop(0)
0x484: Pop(0); Push((bool) Stack[-2] == 0)
0x485: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x486: Push("Can't find diary parent with id: ") // @poff=531
0x487: Pop(1); Push(Stack[-1] + Stack[-8]);
0x488: @ Trace(Stack[-1])
0x489: Pop(1)
0x48a: Stack[-9] = (bool) 0
0x48b: Return(); Pop(6)

0x48c: @@ AddChild(Stack[-8]); Obj=2 // @poff=599
0x48d: Pop(0)
0x48e: Push((int) 7)
0x48f: @ SendWorldWndMessage(Stack[-1])
0x490: Pop(1)
0x491: @@ GetCategory(Stack[-1]); Obj=8 // @poff=608
0x492: Pop(0)
0x493: @ SetDiarySection(Stack[-1])
0x494: Pop(0)
0x495: Stack[-9] = (bool) 0
0x496: Return(); Pop(6)

0x497: Stack[-2] = 0
0x498: Stack[-3] = 0
0x499: PushEmpty(object, object, object, object)
0x49a: @ GetMainOutdoorScene(Stack[-2])
0x49b: Pop(0)
0x49c: Pop(0); PushNull((bool) Stack[-2] == 0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49e: Push("Can't find main outdoor scene") // @poff=620
0x49f: @ Trace(Stack[-1])
0x4a0: Pop(1)
0x4a1: Stack[-1] = 0
0x4a2: Stack[-1] = Stack[-5]
0x4a3: Return(); Pop(4)

0x4a4: @@ GetMap(Stack[-1]); Obj=2 // @poff=680
0x4a5: Pop(0)
0x4a6: Stack[-1] = Stack[-5]
0x4a7: Return(); Pop(4)

0x4a8: Stack[-1] = 0
0x4a9: Stack[-2] = 0
0x4aa: PushEmpty(int, int)
0x4ab: Push("branch") // @poff=687
0x4ac: @ GetVariable(Stack[-1], Stack[-2])
0x4ad: Pop(1)
0x4ae: Push((int) 0)
0x4af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b1: Stack[-3] = (int) 1
0x4b2: Return(); Pop(2)

0x4b3: GOTO 0x4b9

0x4b4: Push((int) 1)
0x4b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-3] = (int) 2
0x4b8: Return(); Pop(2)

0x4b9: Stack[-3] = (int) 3
0x4ba: Return(); Pop(2)

