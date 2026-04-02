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
	W:ook9Littleboy1
	W:k9q01ChildTalk
	W:k9q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006f006f006b0039004c006900740074006c00650062006f007900310000006b0039007100300031004300680069006c006400540061006c006b0000006b0039007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x164
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x16a Vars = (object)
		EVENT_26 Op = 0x1a2 Vars = (string)
		EVENT_5 Op = 0x1aa Vars = ()
		EVENT_6 Op = 0x1af Vars = ()
		EVENT_7 Op = 0x1ee Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x276

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x370

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x372

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35b

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
0x41: Call2 0x2ba

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x319

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2ff

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x305

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral" // @poff=89
0x61: Call2 0xa2

0x62: Pop(1)
0x63: Push((int) 529790)
0x64: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65: Pop(1)
0x66: @@@ ClearReplies(); Obj=0 // @poff=116
0x67: Pop(0)
0x68: Push((int) 529794)
0x69: Push((int) 31253)
0x6a: Push((int) 31252)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 529791)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 529792)
0x78: Push((int) -1)
0x79: Push((int) 31250)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 529793)
0x7d: Push((int) -1)
0x7e: Push((int) 31251)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x374

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x2cb

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all") // @poff=138
0x94: Push("idle") // @poff=146
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x374

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-3] = Stack[-2]
0xae: Push("") // @poff=102
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x2d2

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2e3

0xbd: Pop(0)
0xbe: Push((int) 31248)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x319

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x2ff

0xca: Pop(2)
0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x305

0xcf: Pop(2)
0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral" // @poff=89
0xd2: Call2 0xa2

0xd3: Pop(1)
0xd4: Push((int) 529790)
0xd5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd6: Pop(1)
0xd7: @@@ ClearReplies(); Obj=0 // @poff=116
0xd8: Pop(0)
0xd9: Push((int) 529794)
0xda: Push((int) 31253)
0xdb: Push((int) 31252)
0xdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral" // @poff=89
0xe1: Call2 0xa2

0xe2: Pop(1)
0xe3: Push((int) 529791)
0xe4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe5: Pop(1)
0xe6: @@@ ClearReplies(); Obj=0 // @poff=116
0xe7: Pop(0)
0xe8: Push((int) 529792)
0xe9: Push((int) -1)
0xea: Push((int) 31250)
0xeb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xec: Pop(3)
0xed: Push((int) 529793)
0xee: Push((int) -1)
0xef: Push((int) 31251)
0xf0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 31253)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral" // @poff=89
0xf8: Call2 0xa2

0xf9: Pop(1)
0xfa: Push((int) 529795)
0xfb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfc: Pop(1)
0xfd: @@@ ClearReplies(); Obj=0 // @poff=116
0xfe: Pop(0)
0xff: Push((int) 529796)
0x100: Push((int) 31255)
0x101: Push((int) 31254)
0x102: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 31255)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral" // @poff=89
0x10a: Call2 0xa2

0x10b: Pop(1)
0x10c: Push((int) 529797)
0x10d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10e: Pop(1)
0x10f: @@@ ClearReplies(); Obj=0 // @poff=116
0x110: Pop(0)
0x111: Push((int) 529798)
0x112: Push((int) 31257)
0x113: Push((int) 31256)
0x114: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x115: Pop(3)
0x116: Push((int) 529803)
0x117: Push((int) 31262)
0x118: Push((int) 31261)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 31257)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral" // @poff=89
0x121: Call2 0xa2

0x122: Pop(1)
0x123: Push((int) 529799)
0x124: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x125: Pop(1)
0x126: @@@ ClearReplies(); Obj=0 // @poff=116
0x127: Pop(0)
0x128: Push((int) 529800)
0x129: Push((int) 31259)
0x12a: Push((int) 31258)
0x12b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 31259)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral" // @poff=89
0x133: Call2 0xa2

0x134: Pop(1)
0x135: Push((int) 529801)
0x136: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x137: Pop(1)
0x138: @@@ ClearReplies(); Obj=0 // @poff=116
0x139: Pop(0)
0x13a: Push((int) 529802)
0x13b: Push((int) 31262)
0x13c: Push((int) 31260)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 31262)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral" // @poff=89
0x145: Call2 0xa2

0x146: Pop(1)
0x147: Push((int) 529804)
0x148: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x149: Pop(1)
0x14a: @@@ ClearReplies(); Obj=0 // @poff=116
0x14b: Pop(0)
0x14c: Push((int) 529805)
0x14d: Push((int) -1)
0x14e: Push((int) 31264)
0x14f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x150: Pop(3)
0x151: Push((int) 529806)
0x152: Push((int) -1)
0x153: Push((int) 31265)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x158: PushEmpty(bool)
0x159: Call2 0x374

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15c: @ lshStopAnimation()
0x15d: Pop(0)
0x15e: GOTO 0x161

0x15f: @ StopAnimation()
0x160: Pop(0)
0x161: Return(); Pop(0)

0x162: GOTO 0xb9

0x163: Return(); Pop(0)

0x164: PushEmpty(float, float)
0x165: Stack[-2] = (int) 300
0x166: Stack[-1] = (int) 100
0x167: Call2 0x175

0x168: Pop(2)
0x169: Return(); Pop(0)

0x16a: PushEmpty()
0x16b: PushEmpty()
0x16c: Call2 0x205

0x16d: Pop(0)
0x16e: PushEmpty(int, object)
0x16f: Stack[-3] = Stack[-1]
0x170: Push(-2, 1); TaskCall(0)
0x171: Call2 0x0

0x172: Pop(-2, 1); TaskReturn
0x173: Pop(2)
0x174: Return(); Pop(0)

0x175: PushEmpty(float, float)
0x176: PushEmpty(bool)
0x177: Call2 0x271

0x178: Pop(0)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: @ Hold()
0x17c: Pop(0)
0x17d: GOTO 0x176

0x17e: Push((int) 3)
0x17f: @ rand(Stack[-2], Stack[-1])
0x180: Pop(1)
0x181: Push((int) 3)
0x182: Pop(1); Push(Stack[-2] + Stack[-1]);
0x183: @ Sleep(Stack[-1])
0x184: Pop(1)
0x185: PushEmpty(float, float)
0x186: Stack[-6] = Stack[-2]
0x187: Stack[-5] = Stack[-1]
0x188: Call2 0x1c4

0x189: Pop(2)
0x18a: @ sync()
0x18b: Pop(0)
0x18c: GOTO 0x176

0x18d: Return(); Pop(2)

0x18e: PushEmpty(bool, bool)
0x18f: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x190: @ IsLoaded(Stack[-1])
0x191: Pop(0)
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: Pop(0); Push((bool) Stack[-2] == 0)
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: PushEmpty(bool)
0x197: Call2 0x1c2

0x198: Pop(0)
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Stack[-1] = (bool) 1
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: PushEmpty(object)
0x19d: Call2 0x2ea

0x19e: Pop(0)
0x19f: @ RemoveActor(Stack[-1])
0x1a0: Pop(1)
0x1a1: Return(); Pop(2)

0x1a2: PushEmpty()
0x1a3: Push("cleanup") // @poff=156
0x1a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a6: PushEmpty()
0x1a7: Call2 0x18e

0x1a8: Pop(0)
0x1a9: Return(); Pop(0)

0x1aa: @ StopGroup0()
0x1ab: Pop(0)
0x1ac: @ sync()
0x1ad: Pop(0)
0x1ae: Return(); Pop(0)

0x1af: PushEmpty()
0x1b0: Call2 0x205

0x1b1: Pop(0)
0x1b2: PushEmpty(bool)
0x1b3: Stack[-1] = (bool) 0
0x1b4: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: PushEmpty(bool)
0x1b7: Call2 0x1c2

0x1b8: Pop(0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-1] = (bool) 1
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(object)
0x1bd: Call2 0x2ea

0x1be: Pop(0)
0x1bf: @ RemoveActor(Stack[-1])
0x1c0: Pop(1)
0x1c1: Return(); Pop(0)

0x1c2: Stack[-1] = (bool) 1
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty()
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x271

0x1c7: Pop(0)
0x1c8: Pop(1); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Return(); Pop(0)

0x1cb: Push("player") // @poff=172
0x1cc: @ FindActor(Stack[-4]T, Stack[-1])
0x1cd: Pop(1)
0x1ce: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1cf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d2: Push((int) 10)
0x1d3: Push((float)1.0)
0x1d4: @ SetTimer(Stack[-2], Stack[-1])
0x1d5: Pop(2)
0x1d6: PushEmpty()
0x1d7: Call2 0x213

0x1d8: Pop(0)
0x1d9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1db: Push((int) 10)
0x1dc: @ KillTimer(Stack[-1])
0x1dd: Pop(1)
0x1de: Return(); Pop(0)

0x1df: PushEmpty(float, float)
0x1e0: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Stack[-3] = (bool) 0
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty(float, object)
0x1e5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e6: Call2 0x269

0x1e7: Pop(1)
0x1e8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1e9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ec: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ed: Return(); Pop(2)

0x1ee: PushEmpty()
0x1ef: Push((int) 10)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f2: PushEmpty(bool)
0x1f3: Call2 0x1df

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: PushEmpty(object)
0x1f9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fa: Call2 0x2d8

0x1fb: Pop(1)
0x1fc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1fd: GOTO 0x204

0x1fe: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ff: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x200: Push("head") // @poff=186
0x201: @ UnlookAsync(Stack[-1])
0x202: Pop(1)
0x203: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x204: Return(); Pop(0)

0x205: PushEmpty()
0x206: Call2 0x264

0x207: Pop(0)
0x208: Push((int) 10)
0x209: @ KillTimer(Stack[-1])
0x20a: Pop(1)
0x20b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20c: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20d: Push("head") // @poff=186
0x20e: @ UnlookAsync(Stack[-1])
0x20f: Pop(1)
0x210: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x211: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x212: Return(); Pop(0)

0x213: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x214: @ WaitForAnimEnd()
0x215: Pop(0)
0x216: PushEmpty(bool)
0x217: Call2 0x271

0x218: Pop(0)
0x219: Pop(1); Push((bool) Stack[-1] == 0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: Return(); Pop(14)

0x21c: PushEmpty(int)
0x21d: Call2 0x37d

0x21e: Stack[-1] = Stack[-8]
0x21f: Pop(1)
0x220: Stack[-6] = (int) 0
0x221: PushEmpty(bool)
0x222: Stack[-1] = (bool) 0
0x223: Push((int) 5)
0x224: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x226: PushEmpty(bool)
0x227: Call2 0x271

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Stack[-1] = (bool) 1
0x22b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x22c: Push((int) 3)
0x22d: @ irand(Stack[-6], Stack[-1])
0x22e: Pop(1)
0x22f: Push((int) 0)
0x230: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x232: Push(Stack[-7])
0x233: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x234: @ irand(Stack[-4], Stack[-7])
0x235: Pop(0)
0x236: Push("all") // @poff=138
0x237: PushEmpty(string, int)
0x238: Stack[-7] = Stack[-1]
0x239: Call2 0x376

0x23a: Pop(1)
0x23b: @ PlayAnimation(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: @ WaitForAnimEnd(Stack[-3])
0x23e: Pop(0)
0x23f: Pop(0); Push((bool) Stack[-3] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x25f

0x242: GOTO 0x254

0x243: Push((int) 1)
0x244: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x246: Push((int) 4)
0x247: @ rand(Stack[-3], Stack[-1])
0x248: Pop(1)
0x249: Push((int) 1)
0x24a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x24b: @ Sleep(Stack[-1], Stack[-2])
0x24c: Pop(1)
0x24d: Pop(0); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: GOTO 0x25f

0x250: GOTO 0x254

0x251: Push(Stack[-6])
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x25f

0x254: PushEmpty(bool)
0x255: Call2 0x262

0x256: Pop(0)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: GOTO 0x25f

0x25a: @ ResetAAS()
0x25b: Pop(0)
0x25c: Push((int) 1)
0x25d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x25e: GOTO 0x221

0x25f: @ ResetAAS()
0x260: Pop(0)
0x261: Return(); Pop(14)

0x262: Stack[-1] = (bool) 1
0x263: Return(); Pop(0)

0x264: @ StopAnimation()
0x265: Pop(0)
0x266: @ StopGroup0()
0x267: Pop(0)
0x268: Return(); Pop(0)

0x269: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x26a: @ GetPosition(Stack[-3])
0x26b: Pop(0)
0x26c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x26d: Pop(0)
0x26e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x26f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x270: Return(); Pop(6)

0x271: PushEmpty(bool, bool)
0x272: @ IsLoaded(Stack[-1])
0x273: Pop(0)
0x274: Stack[-1] = Stack[-3]
0x275: Return(); Pop(2)

0x276: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x277: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x278: Pop(0)
0x279: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x27a: Pop(0)
0x27b: Push(CvectorIndex(Stack[-8], 1))
0x27c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27e: @ GetPosition(Stack[-7])
0x27f: Pop(0)
0x280: @ GetEyesHeight(Stack[-9])
0x281: Pop(0)
0x282: Push(CvectorIndex(Stack[-7], 1))
0x283: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x284: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x285: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x286: Push(CvectorIndex(Stack[-6], 1))
0x287: Stack[-1] = (int) 0
0x288: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x289: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28a: Pop(1); Push(Sqrt(Stack[-1]))
0x28b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28c: Stack[-5] = -Stack[-6]; Pop(0);
0x28d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28e: PushEmpty(cvector, cvector)
0x28f: Push([0.0, 1.0, 0.0])
0x290: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x291: Call2 0x2f0

0x292: Pop(1)
0x293: Push((int) 25)
0x294: Pop(2); Push(Stack[-2] * Stack[-1]);
0x295: Pop(2); Push(Stack[-2] + Stack[-1]);
0x296: Push([0.0, 10.0, 0.0])
0x297: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x298: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x299: @ IsOverrideActive(Stack[-2])
0x29a: Pop(0)
0x29b: Push(Stack[-2])
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-21] = (bool) 0
0x29e: Return(); Pop(18)

0x29f: @ StopWorld()
0x2a0: Pop(0)
0x2a1: @ CameraTransit(Stack[-3], Stack[-5])
0x2a2: Pop(0)
0x2a3: Push(CvectorIndex(Stack[-4], 0))
0x2a4: Push(CvectorIndex(Stack[-5], 2))
0x2a5: @ Rotate(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: PushEmpty(bool)
0x2a8: Call2 0x374

0x2a9: Pop(0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: GOTO 0x2b4

0x2ac: Push("head") // @poff=186
0x2ad: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ae: Pop(1)
0x2af: Push(Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b1: Push("head") // @poff=186
0x2b2: @ LookAsyncCamera(Stack[-1])
0x2b3: Pop(1)
0x2b4: @ CameraWaitForPlayFinish()
0x2b5: Pop(0)
0x2b6: @ ResumeWorld()
0x2b7: Pop(0)
0x2b8: Stack[-21] = (bool) 1
0x2b9: Return(); Pop(18)

0x2ba: PushEmpty(bool, bool)
0x2bb: @ CameraSwitchToNormal()
0x2bc: Pop(0)
0x2bd: PushEmpty(bool)
0x2be: Call2 0x374

0x2bf: Pop(0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2ca

0x2c2: Push("head") // @poff=186
0x2c3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c4: Pop(1)
0x2c5: Push(Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: Push("head") // @poff=186
0x2c8: @ UnlookAsync(Stack[-1])
0x2c9: Pop(1)
0x2ca: Return(); Pop(2)

0x2cb: PushEmpty(float, float, float, float)
0x2cc: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2cd: Pop(0)
0x2ce: Push((bool) 0)
0x2cf: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(1)
0x2d1: Return(); Pop(4)

0x2d2: PushEmpty(float, float, float, float)
0x2d3: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2d4: Pop(0)
0x2d5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2d6: Pop(0)
0x2d7: Return(); Pop(4)

0x2d8: PushEmpty(float, cvector, float, cvector)
0x2d9: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2da: Pop(0)
0x2db: Stack[-1] = [0.0, 0.0, 0.0]
0x2dc: Push(CvectorIndex(Stack[-1], 1))
0x2dd: Stack[-3] = Stack[-1]
0x2de: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2df: Push("head") // @poff=186
0x2e0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2e1: Pop(1)
0x2e2: Return(); Pop(4)

0x2e3: PushEmpty(bool)
0x2e4: Call2 0x374

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: @ lshStopSpeech()
0x2e8: Pop(0)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(object, object)
0x2eb: @ self(Stack[-1])
0x2ec: Pop(0)
0x2ed: Stack[-1] = Stack[-3]
0x2ee: Return(); Pop(2)

0x2ef: Stack[-1] = 0
0x2f0: PushEmpty(float, float)
0x2f1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2f2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2f3: Push((float)9.999999974752427e-07)
0x2f4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f6: Stack[-4] = [0.0, 0.0, 0.0]
0x2f7: Return(); Pop(2)

0x2f8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f9: Return(); Pop(2)

0x2fa: PushEmpty(int, int)
0x2fb: @ GetVariable(Stack[-3], Stack[-1])
0x2fc: Pop(0)
0x2fd: Stack[-1] = Stack[-4]
0x2fe: Return(); Pop(2)

0x2ff: PushEmpty()
0x300: Push("ook9Littleboy1") // @poff=222
0x301: Push((int) 1)
0x302: @ SetVariable(Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: PushEmpty(int, string)
0x307: Stack[-1] = "k9q01ChildTalk" // @poff=252
0x308: Call2 0x2fa

0x309: Pop(1)
0x30a: Push((int) 0)
0x30b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x30d: Push("k9q01ChildTalk") // @poff=252
0x30e: Push((int) 1)
0x30f: @ SetVariable(Stack[-2], Stack[-1])
0x310: Pop(2)
0x311: Push("k9q01") // @poff=282
0x312: Push((int) 7)
0x313: @ SetVariable(Stack[-2], Stack[-1])
0x314: Pop(2)
0x315: PushEmpty()
0x316: Call2 0x325

0x317: Pop(0)
0x318: Return(); Pop(0)

0x319: PushEmpty()
0x31a: PushEmpty(int, string)
0x31b: Stack[-1] = "ook9Littleboy1" // @poff=222
0x31c: Call2 0x2fa

0x31d: Pop(1)
0x31e: Push((int) 0)
0x31f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-2] = (bool) 1
0x322: Return(); Pop(0)

0x323: Stack[-2] = (bool) 0
0x324: Return(); Pop(0)

0x325: PushEmpty(object, object)
0x326: Push((int) 524)
0x327: Push((int) 1)
0x328: Push((int) 529816)
0x329: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: PushEmpty(bool, object, int)
0x32c: Stack[-4] = Stack[-2]
0x32d: Stack[-1] = (int) 517
0x32e: Call2 0x33f

0x32f: Pop(3)
0x330: Return(); Pop(2)

0x331: Stack[-1] = 0
0x332: PushEmpty(object, object)
0x333: @ GetDiaryRoot(Stack[-1])
0x334: Pop(0)
0x335: Pop(0); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: Push("Can't retrieve diary root") // @poff=294
0x338: @ Trace(Stack[-1])
0x339: Pop(1)
0x33a: Stack[-3] = (bool) 0
0x33b: Return(); Pop(2)

0x33c: Stack[-1] = Stack[-3]
0x33d: Return(); Pop(2)

0x33e: Stack[-1] = 0
0x33f: PushEmpty(object, object, int, object, object, int)
0x340: PushEmpty(object)
0x341: Call2 0x332

0x342: Stack[-1] = Stack[-4]
0x343: Pop(1)
0x344: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=346
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-2] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x348: Push("Can't find diary parent with id: ") // @poff=351
0x349: Pop(1); Push(Stack[-1] + Stack[-8]);
0x34a: @ Trace(Stack[-1])
0x34b: Pop(1)
0x34c: Stack[-9] = (bool) 0
0x34d: Return(); Pop(6)

0x34e: @@ AddChild(Stack[-8]); Obj=2 // @poff=419
0x34f: Pop(0)
0x350: Push((int) 7)
0x351: @ SendWorldWndMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ GetCategory(Stack[-1]); Obj=8 // @poff=428
0x354: Pop(0)
0x355: @ SetDiarySection(Stack[-1])
0x356: Pop(0)
0x357: Stack[-9] = (bool) 0
0x358: Return(); Pop(6)

0x359: Stack[-2] = 0
0x35a: Stack[-3] = 0
0x35b: PushEmpty(int, int)
0x35c: Push("branch") // @poff=440
0x35d: @ GetVariable(Stack[-1], Stack[-2])
0x35e: Pop(1)
0x35f: Push((int) 0)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x362: Stack[-3] = (int) 1
0x363: Return(); Pop(2)

0x364: GOTO 0x36a

0x365: Push((int) 1)
0x366: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-3] = (int) 2
0x369: Return(); Pop(2)

0x36a: Stack[-3] = (int) 3
0x36b: Return(); Pop(2)

0x36c: Stack[-1] = (int) 515560
0x36d: Return(); Pop(0)

0x36e: Stack[-1] = (int) 503345
0x36f: Return(); Pop(0)

0x370: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=454
0x371: Return(); Pop(0)

0x372: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=494
0x373: Return(); Pop(0)

0x374: Stack[-1] = (bool) 0
0x375: Return(); Pop(0)

0x376: PushEmpty(string, string)
0x377: Stack[-1] = "idle" // @poff=146
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x37a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x37b: Stack[-1] = Stack[-4]
0x37c: Return(); Pop(2)

0x37d: PushEmpty(int, bool, int, bool)
0x37e: Stack[-2] = (int) 0
0x37f: Push("all") // @poff=138
0x380: PushEmpty(string, int)
0x381: Stack[-5] = Stack[-1]
0x382: Call2 0x376

0x383: Pop(1)
0x384: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(2)
0x386: Pop(0); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: GOTO 0x38c

0x389: Push((int) 1)
0x38a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38b: GOTO 0x37f

0x38c: Stack[-2] = Stack[-5]
0x38d: Return(); Pop(4)

