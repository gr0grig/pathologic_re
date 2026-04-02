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
	W:ood12Littlegirl2
	W:D_Mission5
	W:ood12Littlegirl1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	A:Remove
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006f006f006400310032004c006900740074006c0065006700690072006c003200000044005f004d0069007300730069006f006e00350000006f006f006400310032004c006900740074006c0065006700690072006c0031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f72790052656d6f7665006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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

RunOp = 0x186
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x18c Vars = (object)
		EVENT_26 Op = 0x1c4 Vars = (string)
		EVENT_5 Op = 0x1cc Vars = ()
		EVENT_6 Op = 0x1d1 Vars = ()
		EVENT_7 Op = 0x210 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x298

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3bf

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3bd

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3c1

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3c3

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ac

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
0x41: Call2 0x2dc

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x327

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x98

0x58: Pop(1)
0x59: Push((int) 515005)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x359

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 515006)
0x64: Push((int) 42522)
0x65: Push((int) 16264)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x34d

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 515018)
0x6e: Push((int) 16278)
0x6f: Push((int) 16277)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 515017)
0x73: Push((int) -1)
0x74: Push((int) 16276)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x3c5

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x2ed

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all") // @poff=138
0x8a: Push("idle") // @poff=146
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all") // @poff=138
0x93: Push("idle") // @poff=146
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x3c5

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-3] = Stack[-2]
0xa4: Push("") // @poff=102
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x2f4

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x305

0xb3: Pop(0)
0xb4: Push((int) 16264)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x347

0xbb: Pop(2)
0xbc: Push((int) 16277)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x321

0xc3: Pop(2)
0xc4: Push((int) 16263)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x327

0xcb: Pop(2)
0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x98

0xcf: Pop(1)
0xd0: Push((int) 515005)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x359

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 515006)
0xdb: Push((int) 42522)
0xdc: Push((int) 16264)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Call2 0x34d

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 515018)
0xe5: Push((int) 16278)
0xe6: Push((int) 16277)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Push((int) 515017)
0xea: Push((int) -1)
0xeb: Push((int) 16276)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 16278)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 515019)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 515020)
0xfc: Push((int) -1)
0xfd: Push((int) 16279)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Push((int) 515021)
0x101: Push((int) -1)
0x102: Push((int) 16280)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 42522)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x98

0x10c: Pop(1)
0x10d: Push((int) 540515)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 540516)
0x113: Push((int) 16265)
0x114: Push((int) 42523)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Push((int) 540517)
0x118: Push((int) 42525)
0x119: Push((int) 42524)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 42525)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral" // @poff=89
0x122: Call2 0x98

0x123: Pop(1)
0x124: Push((int) 540518)
0x125: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x126: Pop(1)
0x127: @@@ ClearReplies(); Obj=0 // @poff=116
0x128: Pop(0)
0x129: Push((int) 540519)
0x12a: Push((int) -1)
0x12b: Push((int) 42526)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 16265)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral" // @poff=89
0x134: Call2 0x98

0x135: Pop(1)
0x136: Push((int) 515007)
0x137: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x138: Pop(1)
0x139: @@@ ClearReplies(); Obj=0 // @poff=116
0x13a: Pop(0)
0x13b: Push((int) 515008)
0x13c: Push((int) 16267)
0x13d: Push((int) 16266)
0x13e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 16267)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral" // @poff=89
0x146: Call2 0x98

0x147: Pop(1)
0x148: Push((int) 515009)
0x149: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14a: Pop(1)
0x14b: @@@ ClearReplies(); Obj=0 // @poff=116
0x14c: Pop(0)
0x14d: Push((int) 515010)
0x14e: Push((int) -1)
0x14f: Push((int) 16268)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Push((int) 515011)
0x153: Push((int) -1)
0x154: Push((int) 16269)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Push((int) 515012)
0x158: Push((int) 16271)
0x159: Push((int) 16270)
0x15a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15b: Pop(3)
0x15c: Push((int) 515016)
0x15d: Push((int) 16271)
0x15e: Push((int) 16274)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 16271)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral" // @poff=89
0x167: Call2 0x98

0x168: Pop(1)
0x169: Push((int) 515013)
0x16a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16b: Pop(1)
0x16c: @@@ ClearReplies(); Obj=0 // @poff=116
0x16d: Pop(0)
0x16e: Push((int) 515014)
0x16f: Push((int) -1)
0x170: Push((int) 16272)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Push((int) 515015)
0x174: Push((int) -1)
0x175: Push((int) 16273)
0x176: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x177: Pop(3)
0x178: Return(); Pop(0)

0x179: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17a: PushEmpty(bool)
0x17b: Call2 0x3c5

0x17c: Pop(0)
0x17d: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17e: @ lshStopAnimation()
0x17f: Pop(0)
0x180: GOTO 0x183

0x181: @ StopAnimation()
0x182: Pop(0)
0x183: Return(); Pop(0)

0x184: GOTO 0xaf

0x185: Return(); Pop(0)

0x186: PushEmpty(float, float)
0x187: Stack[-2] = (int) 300
0x188: Stack[-1] = (int) 100
0x189: Call2 0x197

0x18a: Pop(2)
0x18b: Return(); Pop(0)

0x18c: PushEmpty()
0x18d: PushEmpty()
0x18e: Call2 0x227

0x18f: Pop(0)
0x190: PushEmpty(int, object)
0x191: Stack[-3] = Stack[-1]
0x192: Push(-2, 1); TaskCall(0)
0x193: Call2 0x0

0x194: Pop(-2, 1); TaskReturn
0x195: Pop(2)
0x196: Return(); Pop(0)

0x197: PushEmpty(float, float)
0x198: PushEmpty(bool)
0x199: Call2 0x293

0x19a: Pop(0)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: @ Hold()
0x19e: Pop(0)
0x19f: GOTO 0x198

0x1a0: Push((int) 3)
0x1a1: @ rand(Stack[-2], Stack[-1])
0x1a2: Pop(1)
0x1a3: Push((int) 3)
0x1a4: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1a5: @ Sleep(Stack[-1])
0x1a6: Pop(1)
0x1a7: PushEmpty(float, float)
0x1a8: Stack[-6] = Stack[-2]
0x1a9: Stack[-5] = Stack[-1]
0x1aa: Call2 0x1e6

0x1ab: Pop(2)
0x1ac: @ sync()
0x1ad: Pop(0)
0x1ae: GOTO 0x198

0x1af: Return(); Pop(2)

0x1b0: PushEmpty(bool, bool)
0x1b1: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1b2: @ IsLoaded(Stack[-1])
0x1b3: Pop(0)
0x1b4: PushEmpty(bool)
0x1b5: Stack[-1] = (bool) 0
0x1b6: Pop(0); Push((bool) Stack[-2] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: PushEmpty(bool)
0x1b9: Call2 0x1e4

0x1ba: Pop(0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 1
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: PushEmpty(object)
0x1bf: Call2 0x30c

0x1c0: Pop(0)
0x1c1: @ RemoveActor(Stack[-1])
0x1c2: Pop(1)
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty()
0x1c5: Push("cleanup") // @poff=156
0x1c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c8: PushEmpty()
0x1c9: Call2 0x1b0

0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: @ StopGroup0()
0x1cd: Pop(0)
0x1ce: @ sync()
0x1cf: Pop(0)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty()
0x1d2: Call2 0x227

0x1d3: Pop(0)
0x1d4: PushEmpty(bool)
0x1d5: Stack[-1] = (bool) 0
0x1d6: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(bool)
0x1d9: Call2 0x1e4

0x1da: Pop(0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(object)
0x1df: Call2 0x30c

0x1e0: Pop(0)
0x1e1: @ RemoveActor(Stack[-1])
0x1e2: Pop(1)
0x1e3: Return(); Pop(0)

0x1e4: Stack[-1] = (bool) 1
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty()
0x1e7: PushEmpty(bool)
0x1e8: Call2 0x293

0x1e9: Pop(0)
0x1ea: Pop(1); Push((bool) Stack[-1] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Return(); Pop(0)

0x1ed: Push("player") // @poff=172
0x1ee: @ FindActor(Stack[-4]T, Stack[-1])
0x1ef: Pop(1)
0x1f0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f2: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f4: Push((int) 10)
0x1f5: Push((float)1.0)
0x1f6: @ SetTimer(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: PushEmpty()
0x1f9: Call2 0x235

0x1fa: Pop(0)
0x1fb: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fd: Push((int) 10)
0x1fe: @ KillTimer(Stack[-1])
0x1ff: Pop(1)
0x200: Return(); Pop(0)

0x201: PushEmpty(float, float)
0x202: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-3] = (bool) 0
0x205: Return(); Pop(2)

0x206: PushEmpty(float, object)
0x207: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x208: Call2 0x28b

0x209: Pop(1)
0x20a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20e: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20f: Return(); Pop(2)

0x210: PushEmpty()
0x211: Push((int) 10)
0x212: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x214: PushEmpty(bool)
0x215: Call2 0x201

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x218: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21a: PushEmpty(object)
0x21b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21c: Call2 0x2fa

0x21d: Pop(1)
0x21e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21f: GOTO 0x226

0x220: Push( Stack[2 + Tasks[-1].StackPointer] )
0x221: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x222: Push("head") // @poff=186
0x223: @ UnlookAsync(Stack[-1])
0x224: Pop(1)
0x225: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: Call2 0x286

0x229: Pop(0)
0x22a: Push((int) 10)
0x22b: @ KillTimer(Stack[-1])
0x22c: Pop(1)
0x22d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22f: Push("head") // @poff=186
0x230: @ UnlookAsync(Stack[-1])
0x231: Pop(1)
0x232: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x233: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x234: Return(); Pop(0)

0x235: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x236: @ WaitForAnimEnd()
0x237: Pop(0)
0x238: PushEmpty(bool)
0x239: Call2 0x293

0x23a: Pop(0)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: Return(); Pop(14)

0x23e: PushEmpty(int)
0x23f: Call2 0x3ce

0x240: Stack[-1] = Stack[-8]
0x241: Pop(1)
0x242: Stack[-6] = (int) 0
0x243: PushEmpty(bool)
0x244: Stack[-1] = (bool) 0
0x245: Push((int) 5)
0x246: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: PushEmpty(bool)
0x249: Call2 0x293

0x24a: Pop(0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Stack[-1] = (bool) 1
0x24d: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x24e: Push((int) 3)
0x24f: @ irand(Stack[-6], Stack[-1])
0x250: Pop(1)
0x251: Push((int) 0)
0x252: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x254: Push(Stack[-7])
0x255: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x256: @ irand(Stack[-4], Stack[-7])
0x257: Pop(0)
0x258: Push("all") // @poff=138
0x259: PushEmpty(string, int)
0x25a: Stack[-7] = Stack[-1]
0x25b: Call2 0x3c7

0x25c: Pop(1)
0x25d: @ PlayAnimation(Stack[-2], Stack[-1])
0x25e: Pop(2)
0x25f: @ WaitForAnimEnd(Stack[-3])
0x260: Pop(0)
0x261: Pop(0); Push((bool) Stack[-3] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x281

0x264: GOTO 0x276

0x265: Push((int) 1)
0x266: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: Push((int) 4)
0x269: @ rand(Stack[-3], Stack[-1])
0x26a: Pop(1)
0x26b: Push((int) 1)
0x26c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26d: @ Sleep(Stack[-1], Stack[-2])
0x26e: Pop(1)
0x26f: Pop(0); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x281

0x272: GOTO 0x276

0x273: Push(Stack[-6])
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x281

0x276: PushEmpty(bool)
0x277: Call2 0x284

0x278: Pop(0)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x281

0x27c: @ ResetAAS()
0x27d: Pop(0)
0x27e: Push((int) 1)
0x27f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x280: GOTO 0x243

0x281: @ ResetAAS()
0x282: Pop(0)
0x283: Return(); Pop(14)

0x284: Stack[-1] = (bool) 1
0x285: Return(); Pop(0)

0x286: @ StopAnimation()
0x287: Pop(0)
0x288: @ StopGroup0()
0x289: Pop(0)
0x28a: Return(); Pop(0)

0x28b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28c: @ GetPosition(Stack[-3])
0x28d: Pop(0)
0x28e: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x28f: Pop(0)
0x290: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x291: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x292: Return(); Pop(6)

0x293: PushEmpty(bool, bool)
0x294: @ IsLoaded(Stack[-1])
0x295: Pop(0)
0x296: Stack[-1] = Stack[-3]
0x297: Return(); Pop(2)

0x298: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x299: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x29a: Pop(0)
0x29b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x29c: Pop(0)
0x29d: Push(CvectorIndex(Stack[-8], 1))
0x29e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a0: @ GetPosition(Stack[-7])
0x2a1: Pop(0)
0x2a2: @ GetEyesHeight(Stack[-9])
0x2a3: Pop(0)
0x2a4: Push(CvectorIndex(Stack[-7], 1))
0x2a5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a8: Push(CvectorIndex(Stack[-6], 1))
0x2a9: Stack[-1] = (int) 0
0x2aa: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ab: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ac: Pop(1); Push(Sqrt(Stack[-1]))
0x2ad: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ae: Stack[-5] = -Stack[-6]; Pop(0);
0x2af: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b0: PushEmpty(cvector, cvector)
0x2b1: Push([0.0, 1.0, 0.0])
0x2b2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b3: Call2 0x312

0x2b4: Pop(1)
0x2b5: Push((int) 25)
0x2b6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b8: Push([0.0, 10.0, 0.0])
0x2b9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ba: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2bb: @ IsOverrideActive(Stack[-2])
0x2bc: Pop(0)
0x2bd: Push(Stack[-2])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bf: Stack[-21] = (bool) 0
0x2c0: Return(); Pop(18)

0x2c1: @ StopWorld()
0x2c2: Pop(0)
0x2c3: @ CameraTransit(Stack[-3], Stack[-5])
0x2c4: Pop(0)
0x2c5: Push(CvectorIndex(Stack[-4], 0))
0x2c6: Push(CvectorIndex(Stack[-5], 2))
0x2c7: @ Rotate(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: PushEmpty(bool)
0x2ca: Call2 0x3c5

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d6

0x2ce: Push("head") // @poff=186
0x2cf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d0: Pop(1)
0x2d1: Push(Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Push("head") // @poff=186
0x2d4: @ LookAsyncCamera(Stack[-1])
0x2d5: Pop(1)
0x2d6: @ CameraWaitForPlayFinish()
0x2d7: Pop(0)
0x2d8: @ ResumeWorld()
0x2d9: Pop(0)
0x2da: Stack[-21] = (bool) 1
0x2db: Return(); Pop(18)

0x2dc: PushEmpty(bool, bool)
0x2dd: @ CameraSwitchToNormal()
0x2de: Pop(0)
0x2df: PushEmpty(bool)
0x2e0: Call2 0x3c5

0x2e1: Pop(0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2ec

0x2e4: Push("head") // @poff=186
0x2e5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e6: Pop(1)
0x2e7: Push(Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e9: Push("head") // @poff=186
0x2ea: @ UnlookAsync(Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(2)

0x2ed: PushEmpty(float, float, float, float)
0x2ee: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ef: Pop(0)
0x2f0: Push((bool) 0)
0x2f1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(1)
0x2f3: Return(); Pop(4)

0x2f4: PushEmpty(float, float, float, float)
0x2f5: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f6: Pop(0)
0x2f7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f8: Pop(0)
0x2f9: Return(); Pop(4)

0x2fa: PushEmpty(float, cvector, float, cvector)
0x2fb: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2fc: Pop(0)
0x2fd: Stack[-1] = [0.0, 0.0, 0.0]
0x2fe: Push(CvectorIndex(Stack[-1], 1))
0x2ff: Stack[-3] = Stack[-1]
0x300: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x301: Push("head") // @poff=186
0x302: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x303: Pop(1)
0x304: Return(); Pop(4)

0x305: PushEmpty(bool)
0x306: Call2 0x3c5

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x309: @ lshStopSpeech()
0x30a: Pop(0)
0x30b: Return(); Pop(0)

0x30c: PushEmpty(object, object)
0x30d: @ self(Stack[-1])
0x30e: Pop(0)
0x30f: Stack[-1] = Stack[-3]
0x310: Return(); Pop(2)

0x311: Stack[-1] = 0
0x312: PushEmpty(float, float)
0x313: Pop(0); Push(Stack[-3] | Stack[-3]);
0x314: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x315: Push((float)9.999999974752427e-07)
0x316: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-4] = [0.0, 0.0, 0.0]
0x319: Return(); Pop(2)

0x31a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x31b: Return(); Pop(2)

0x31c: PushEmpty(int, int)
0x31d: @ GetVariable(Stack[-3], Stack[-1])
0x31e: Pop(0)
0x31f: Stack[-1] = Stack[-4]
0x320: Return(); Pop(2)

0x321: PushEmpty()
0x322: Push("ood12Littlegirl2") // @poff=222
0x323: Push((int) 1)
0x324: @ SetVariable(Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: Return(); Pop(0)

0x327: PushEmpty()
0x328: PushEmpty(int, string)
0x329: Stack[-1] = "D_Mission5" // @poff=256
0x32a: Call2 0x31c

0x32b: Pop(1)
0x32c: Push((int) 0)
0x32d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x32f: Push("D_Mission5") // @poff=256
0x330: Push((int) 1)
0x331: @ SetVariable(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: PushEmpty()
0x334: Call2 0x365

0x335: Pop(0)
0x336: PushEmpty(bool, int)
0x337: Stack[-1] = (int) 30
0x338: Call2 0x39b

0x339: Pop(2)
0x33a: PushEmpty(bool, int)
0x33b: Stack[-1] = (int) 3
0x33c: Call2 0x39b

0x33d: Pop(2)
0x33e: PushEmpty(bool, int)
0x33f: Stack[-1] = (int) 4
0x340: Call2 0x39b

0x341: Pop(2)
0x342: PushEmpty(bool, int)
0x343: Stack[-1] = (int) 5
0x344: Call2 0x39b

0x345: Pop(2)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: Push("ood12Littlegirl1") // @poff=278
0x349: Push((int) 1)
0x34a: @ SetVariable(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: PushEmpty(int, string)
0x34f: Stack[-1] = "ood12Littlegirl2" // @poff=222
0x350: Call2 0x31c

0x351: Pop(1)
0x352: Push((int) 0)
0x353: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-2] = (bool) 1
0x356: Return(); Pop(0)

0x357: Stack[-2] = (bool) 0
0x358: Return(); Pop(0)

0x359: PushEmpty()
0x35a: PushEmpty(int, string)
0x35b: Stack[-1] = "ood12Littlegirl1" // @poff=278
0x35c: Call2 0x31c

0x35d: Pop(1)
0x35e: Push((int) 0)
0x35f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-2] = (bool) 1
0x362: Return(); Pop(0)

0x363: Stack[-2] = (bool) 0
0x364: Return(); Pop(0)

0x365: PushEmpty(object, object)
0x366: Push((int) 561)
0x367: Push((int) 0)
0x368: Push((int) 530575)
0x369: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36a: Pop(3)
0x36b: PushEmpty(bool, object, int)
0x36c: Stack[-4] = Stack[-2]
0x36d: Stack[-1] = (int) -1
0x36e: Call2 0x37f

0x36f: Pop(3)
0x370: Return(); Pop(2)

0x371: Stack[-1] = 0
0x372: PushEmpty(object, object)
0x373: @ GetDiaryRoot(Stack[-1])
0x374: Pop(0)
0x375: Pop(0); Push((bool) Stack[-1] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x377: Push("Can't retrieve diary root") // @poff=312
0x378: @ Trace(Stack[-1])
0x379: Pop(1)
0x37a: Stack[-3] = (bool) 0
0x37b: Return(); Pop(2)

0x37c: Stack[-1] = Stack[-3]
0x37d: Return(); Pop(2)

0x37e: Stack[-1] = 0
0x37f: PushEmpty(object, object, int, object, object, int)
0x380: PushEmpty(object)
0x381: Call2 0x372

0x382: Stack[-1] = Stack[-4]
0x383: Pop(1)
0x384: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=364
0x385: Pop(0)
0x386: Pop(0); Push((bool) Stack[-2] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x388: Push("Can't find diary parent with id: ") // @poff=369
0x389: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38a: @ Trace(Stack[-1])
0x38b: Pop(1)
0x38c: Stack[-9] = (bool) 0
0x38d: Return(); Pop(6)

0x38e: @@ AddChild(Stack[-8]); Obj=2 // @poff=437
0x38f: Pop(0)
0x390: Push((int) 7)
0x391: @ SendWorldWndMessage(Stack[-1])
0x392: Pop(1)
0x393: @@ GetCategory(Stack[-1]); Obj=8 // @poff=446
0x394: Pop(0)
0x395: @ SetDiarySection(Stack[-1])
0x396: Pop(0)
0x397: Stack[-9] = (bool) 0
0x398: Return(); Pop(6)

0x399: Stack[-2] = 0
0x39a: Stack[-3] = 0
0x39b: PushEmpty(object, object, object, object)
0x39c: PushEmpty(object)
0x39d: Call2 0x372

0x39e: Stack[-1] = Stack[-3]
0x39f: Pop(1)
0x3a0: @@ Find(Stack[-5], Stack[-1]); Obj=2 // @poff=364
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: Stack[-6] = (bool) 0
0x3a5: Return(); Pop(4)

0x3a6: @@ Remove(); Obj=1 // @poff=458
0x3a7: Pop(0)
0x3a8: Stack[-6] = (bool) 1
0x3a9: Return(); Pop(4)

0x3aa: Stack[-1] = 0
0x3ab: Stack[-2] = 0
0x3ac: PushEmpty(int, int)
0x3ad: Push("branch") // @poff=465
0x3ae: @ GetVariable(Stack[-1], Stack[-2])
0x3af: Pop(1)
0x3b0: Push((int) 0)
0x3b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b3: Stack[-3] = (int) 1
0x3b4: Return(); Pop(2)

0x3b5: GOTO 0x3bb

0x3b6: Push((int) 1)
0x3b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-3] = (int) 2
0x3ba: Return(); Pop(2)

0x3bb: Stack[-3] = (int) 3
0x3bc: Return(); Pop(2)

0x3bd: Stack[-1] = (int) 515561
0x3be: Return(); Pop(0)

0x3bf: Stack[-1] = (int) 503346
0x3c0: Return(); Pop(0)

0x3c1: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=479
0x3c2: Return(); Pop(0)

0x3c3: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=519
0x3c4: Return(); Pop(0)

0x3c5: Stack[-1] = (bool) 0
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty(string, string)
0x3c8: Stack[-1] = "idle" // @poff=146
0x3c9: Push(Stack[-3])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3cc: Stack[-1] = Stack[-4]
0x3cd: Return(); Pop(2)

0x3ce: PushEmpty(int, bool, int, bool)
0x3cf: Stack[-2] = (int) 0
0x3d0: Push("all") // @poff=138
0x3d1: PushEmpty(string, int)
0x3d2: Stack[-5] = Stack[-1]
0x3d3: Call2 0x3c7

0x3d4: Pop(1)
0x3d5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(2)
0x3d7: Pop(0); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: GOTO 0x3dd

0x3da: Push((int) 1)
0x3db: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3dc: GOTO 0x3d0

0x3dd: Stack[-2] = Stack[-5]
0x3de: Return(); Pop(4)

