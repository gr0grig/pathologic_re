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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:oob9Girl1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e00670000006f006f00620039004700690072006c0031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x14b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x151 Vars = (object)
		EVENT_26 Op = 0x189 Vars = (string)
		EVENT_5 Op = 0x191 Vars = ()
		EVENT_6 Op = 0x196 Vars = ()
		EVENT_7 Op = 0x1d5 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x25d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x300

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2fe

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x302

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x304

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x355

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
0x41: Call2 0x2a1

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
0x52: Call2 0x313

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x308

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral" // @poff=89
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 530329)
0x5f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x60: Pop(1)
0x61: @@@ ClearReplies(); Obj=0 // @poff=116
0x62: Pop(0)
0x63: Push((int) 531028)
0x64: Push((int) 32359)
0x65: Push((int) 32357)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 531029)
0x69: Push((int) 32365)
0x6a: Push((int) 32358)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 530331)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 531033)
0x78: Push((int) -1)
0x79: Push((int) 32362)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x306

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2b2

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
0x9f: Call2 0x306

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
0xaf: Call2 0x2b9

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2ca

0xb8: Pop(0)
0xb9: Push((int) 31717)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x30e

0xc0: Pop(2)
0xc1: Push((int) 31716)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x313

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x308

0xcd: Pop(2)
0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 530329)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 531028)
0xd8: Push((int) 32359)
0xd9: Push((int) 32357)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 531029)
0xdd: Push((int) 32365)
0xde: Push((int) 32358)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 530331)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 531033)
0xec: Push((int) -1)
0xed: Push((int) 32362)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 32359)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral" // @poff=89
0xf6: Call2 0x9d

0xf7: Pop(1)
0xf8: Push((int) 531030)
0xf9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfa: Pop(1)
0xfb: @@@ ClearReplies(); Obj=0 // @poff=116
0xfc: Pop(0)
0xfd: Push((int) 531031)
0xfe: Push((int) 32361)
0xff: Push((int) 32360)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Push((int) 530332)
0x103: Push((int) 32363)
0x104: Push((int) 31719)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 32363)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral" // @poff=89
0x10d: Call2 0x9d

0x10e: Pop(1)
0x10f: Push((int) 531034)
0x110: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x111: Pop(1)
0x112: @@@ ClearReplies(); Obj=0 // @poff=116
0x113: Pop(0)
0x114: Push((int) 531035)
0x115: Push((int) 32365)
0x116: Push((int) 32364)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 32365)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral" // @poff=89
0x11f: Call2 0x9d

0x120: Pop(1)
0x121: Push((int) 531036)
0x122: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x123: Pop(1)
0x124: @@@ ClearReplies(); Obj=0 // @poff=116
0x125: Pop(0)
0x126: Push((int) 531037)
0x127: Push((int) 32361)
0x128: Push((int) 32367)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 32361)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral" // @poff=89
0x131: Call2 0x9d

0x132: Pop(1)
0x133: Push((int) 531032)
0x134: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x135: Pop(1)
0x136: @@@ ClearReplies(); Obj=0 // @poff=116
0x137: Pop(0)
0x138: Push((int) 530330)
0x139: Push((int) -1)
0x13a: Push((int) 31717)
0x13b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13f: PushEmpty(bool)
0x140: Call2 0x306

0x141: Pop(0)
0x142: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x143: @ lshStopAnimation()
0x144: Pop(0)
0x145: GOTO 0x148

0x146: @ StopAnimation()
0x147: Pop(0)
0x148: Return(); Pop(0)

0x149: GOTO 0xb4

0x14a: Return(); Pop(0)

0x14b: PushEmpty(float, float)
0x14c: Stack[-2] = (int) 300
0x14d: Stack[-1] = (int) 100
0x14e: Call2 0x15c

0x14f: Pop(2)
0x150: Return(); Pop(0)

0x151: PushEmpty()
0x152: PushEmpty()
0x153: Call2 0x1ec

0x154: Pop(0)
0x155: PushEmpty(int, object)
0x156: Stack[-3] = Stack[-1]
0x157: Push(-2, 1); TaskCall(0)
0x158: Call2 0x0

0x159: Pop(-2, 1); TaskReturn
0x15a: Pop(2)
0x15b: Return(); Pop(0)

0x15c: PushEmpty(float, float)
0x15d: PushEmpty(bool)
0x15e: Call2 0x258

0x15f: Pop(0)
0x160: Pop(1); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x162: @ Hold()
0x163: Pop(0)
0x164: GOTO 0x15d

0x165: Push((int) 3)
0x166: @ rand(Stack[-2], Stack[-1])
0x167: Pop(1)
0x168: Push((int) 3)
0x169: Pop(1); Push(Stack[-2] + Stack[-1]);
0x16a: @ Sleep(Stack[-1])
0x16b: Pop(1)
0x16c: PushEmpty(float, float)
0x16d: Stack[-6] = Stack[-2]
0x16e: Stack[-5] = Stack[-1]
0x16f: Call2 0x1ab

0x170: Pop(2)
0x171: @ sync()
0x172: Pop(0)
0x173: GOTO 0x15d

0x174: Return(); Pop(2)

0x175: PushEmpty(bool, bool)
0x176: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x177: @ IsLoaded(Stack[-1])
0x178: Pop(0)
0x179: PushEmpty(bool)
0x17a: Stack[-1] = (bool) 0
0x17b: Pop(0); Push((bool) Stack[-2] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17d: PushEmpty(bool)
0x17e: Call2 0x1a9

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: Stack[-1] = (bool) 1
0x182: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x183: PushEmpty(object)
0x184: Call2 0x2d1

0x185: Pop(0)
0x186: @ RemoveActor(Stack[-1])
0x187: Pop(1)
0x188: Return(); Pop(2)

0x189: PushEmpty()
0x18a: Push("cleanup") // @poff=156
0x18b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: PushEmpty()
0x18e: Call2 0x175

0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: @ StopGroup0()
0x192: Pop(0)
0x193: @ sync()
0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: PushEmpty()
0x197: Call2 0x1ec

0x198: Pop(0)
0x199: PushEmpty(bool)
0x19a: Stack[-1] = (bool) 0
0x19b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(bool)
0x19e: Call2 0x1a9

0x19f: Pop(0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Stack[-1] = (bool) 1
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: PushEmpty(object)
0x1a4: Call2 0x2d1

0x1a5: Pop(0)
0x1a6: @ RemoveActor(Stack[-1])
0x1a7: Pop(1)
0x1a8: Return(); Pop(0)

0x1a9: Stack[-1] = (bool) 1
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x258

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(0)

0x1b2: Push("player") // @poff=172
0x1b3: @ FindActor(Stack[-4]T, Stack[-1])
0x1b4: Pop(1)
0x1b5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b7: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b9: Push((int) 10)
0x1ba: Push((float)1.0)
0x1bb: @ SetTimer(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: PushEmpty()
0x1be: Call2 0x1fa

0x1bf: Pop(0)
0x1c0: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: Push((int) 10)
0x1c3: @ KillTimer(Stack[-1])
0x1c4: Pop(1)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(float, float)
0x1c7: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-3] = (bool) 0
0x1ca: Return(); Pop(2)

0x1cb: PushEmpty(float, object)
0x1cc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1cd: Call2 0x250

0x1ce: Pop(1)
0x1cf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d3: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d4: Return(); Pop(2)

0x1d5: PushEmpty()
0x1d6: Push((int) 10)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d9: PushEmpty(bool)
0x1da: Call2 0x1c6

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1dd: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty(object)
0x1e0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e1: Call2 0x2bf

0x1e2: Pop(1)
0x1e3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e4: GOTO 0x1eb

0x1e5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e7: Push("head") // @poff=186
0x1e8: @ UnlookAsync(Stack[-1])
0x1e9: Pop(1)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty()
0x1ed: Call2 0x24b

0x1ee: Pop(0)
0x1ef: Push((int) 10)
0x1f0: @ KillTimer(Stack[-1])
0x1f1: Pop(1)
0x1f2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f4: Push("head") // @poff=186
0x1f5: @ UnlookAsync(Stack[-1])
0x1f6: Pop(1)
0x1f7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1fb: @ WaitForAnimEnd()
0x1fc: Pop(0)
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x258

0x1ff: Pop(0)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Return(); Pop(14)

0x203: PushEmpty(int)
0x204: Call2 0x2ed

0x205: Stack[-1] = Stack[-8]
0x206: Pop(1)
0x207: Stack[-6] = (int) 0
0x208: PushEmpty(bool)
0x209: Stack[-1] = (bool) 0
0x20a: Push((int) 5)
0x20b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call2 0x258

0x20f: Pop(0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 1
0x212: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x213: Push((int) 3)
0x214: @ irand(Stack[-6], Stack[-1])
0x215: Pop(1)
0x216: Push((int) 0)
0x217: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x219: Push(Stack[-7])
0x21a: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21b: @ irand(Stack[-4], Stack[-7])
0x21c: Pop(0)
0x21d: Push("all") // @poff=138
0x21e: PushEmpty(string, int)
0x21f: Stack[-7] = Stack[-1]
0x220: Call2 0x2e6

0x221: Pop(1)
0x222: @ PlayAnimation(Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: @ WaitForAnimEnd(Stack[-3])
0x225: Pop(0)
0x226: Pop(0); Push((bool) Stack[-3] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x246

0x229: GOTO 0x23b

0x22a: Push((int) 1)
0x22b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22d: Push((int) 4)
0x22e: @ rand(Stack[-3], Stack[-1])
0x22f: Pop(1)
0x230: Push((int) 1)
0x231: Pop(1); Push(Stack[-3] + Stack[-1]);
0x232: @ Sleep(Stack[-1], Stack[-2])
0x233: Pop(1)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x246

0x237: GOTO 0x23b

0x238: Push(Stack[-6])
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x246

0x23b: PushEmpty(bool)
0x23c: Call2 0x249

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x246

0x241: @ ResetAAS()
0x242: Pop(0)
0x243: Push((int) 1)
0x244: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x245: GOTO 0x208

0x246: @ ResetAAS()
0x247: Pop(0)
0x248: Return(); Pop(14)

0x249: Stack[-1] = (bool) 1
0x24a: Return(); Pop(0)

0x24b: @ StopAnimation()
0x24c: Pop(0)
0x24d: @ StopGroup0()
0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x251: @ GetPosition(Stack[-3])
0x252: Pop(0)
0x253: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x254: Pop(0)
0x255: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x256: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x257: Return(); Pop(6)

0x258: PushEmpty(bool, bool)
0x259: @ IsLoaded(Stack[-1])
0x25a: Pop(0)
0x25b: Stack[-1] = Stack[-3]
0x25c: Return(); Pop(2)

0x25d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x25e: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x25f: Pop(0)
0x260: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x261: Pop(0)
0x262: Push(CvectorIndex(Stack[-8], 1))
0x263: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x264: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x265: @ GetPosition(Stack[-7])
0x266: Pop(0)
0x267: @ GetEyesHeight(Stack[-9])
0x268: Pop(0)
0x269: Push(CvectorIndex(Stack[-7], 1))
0x26a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x26c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x26d: Push(CvectorIndex(Stack[-6], 1))
0x26e: Stack[-1] = (int) 0
0x26f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x270: Pop(0); Push(Stack[-6] | Stack[-6]);
0x271: Pop(1); Push(Sqrt(Stack[-1]))
0x272: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x273: Stack[-5] = -Stack[-6]; Pop(0);
0x274: Pop(0); Push(Stack[-6] * Stack[-19]);
0x275: PushEmpty(cvector, cvector)
0x276: Push([0.0, 1.0, 0.0])
0x277: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x278: Call2 0x2d7

0x279: Pop(1)
0x27a: Push((int) 25)
0x27b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x27c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27d: Push([0.0, 10.0, 0.0])
0x27e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x27f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x280: @ IsOverrideActive(Stack[-2])
0x281: Pop(0)
0x282: Push(Stack[-2])
0x283: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x284: Stack[-21] = (bool) 0
0x285: Return(); Pop(18)

0x286: @ StopWorld()
0x287: Pop(0)
0x288: @ CameraTransit(Stack[-3], Stack[-5])
0x289: Pop(0)
0x28a: Push(CvectorIndex(Stack[-4], 0))
0x28b: Push(CvectorIndex(Stack[-5], 2))
0x28c: @ Rotate(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: PushEmpty(bool)
0x28f: Call2 0x306

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x29b

0x293: Push("head") // @poff=186
0x294: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x295: Pop(1)
0x296: Push(Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x298: Push("head") // @poff=186
0x299: @ LookAsyncCamera(Stack[-1])
0x29a: Pop(1)
0x29b: @ CameraWaitForPlayFinish()
0x29c: Pop(0)
0x29d: @ ResumeWorld()
0x29e: Pop(0)
0x29f: Stack[-21] = (bool) 1
0x2a0: Return(); Pop(18)

0x2a1: PushEmpty(bool, bool)
0x2a2: @ CameraSwitchToNormal()
0x2a3: Pop(0)
0x2a4: PushEmpty(bool)
0x2a5: Call2 0x306

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2b1

0x2a9: Push("head") // @poff=186
0x2aa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ab: Pop(1)
0x2ac: Push(Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ae: Push("head") // @poff=186
0x2af: @ UnlookAsync(Stack[-1])
0x2b0: Pop(1)
0x2b1: Return(); Pop(2)

0x2b2: PushEmpty(float, float, float, float)
0x2b3: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2b4: Pop(0)
0x2b5: Push((bool) 0)
0x2b6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(1)
0x2b8: Return(); Pop(4)

0x2b9: PushEmpty(float, float, float, float)
0x2ba: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2bb: Pop(0)
0x2bc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2bd: Pop(0)
0x2be: Return(); Pop(4)

0x2bf: PushEmpty(float, cvector, float, cvector)
0x2c0: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2c1: Pop(0)
0x2c2: Stack[-1] = [0.0, 0.0, 0.0]
0x2c3: Push(CvectorIndex(Stack[-1], 1))
0x2c4: Stack[-3] = Stack[-1]
0x2c5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c6: Push("head") // @poff=186
0x2c7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: Return(); Pop(4)

0x2ca: PushEmpty(bool)
0x2cb: Call2 0x306

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: @ lshStopSpeech()
0x2cf: Pop(0)
0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(object, object)
0x2d2: @ self(Stack[-1])
0x2d3: Pop(0)
0x2d4: Stack[-1] = Stack[-3]
0x2d5: Return(); Pop(2)

0x2d6: Stack[-1] = 0
0x2d7: PushEmpty(float, float)
0x2d8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2d9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2da: Push((float)9.999999974752427e-07)
0x2db: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-4] = [0.0, 0.0, 0.0]
0x2de: Return(); Pop(2)

0x2df: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty(int, int)
0x2e2: @ GetVariable(Stack[-3], Stack[-1])
0x2e3: Pop(0)
0x2e4: Stack[-1] = Stack[-4]
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(string, string)
0x2e7: Stack[-1] = "idle" // @poff=146
0x2e8: Push(Stack[-3])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2eb: Stack[-1] = Stack[-4]
0x2ec: Return(); Pop(2)

0x2ed: PushEmpty(int, bool, int, bool)
0x2ee: Stack[-2] = (int) 0
0x2ef: Push("all") // @poff=138
0x2f0: PushEmpty(string, int)
0x2f1: Stack[-5] = Stack[-1]
0x2f2: Call2 0x2e6

0x2f3: Pop(1)
0x2f4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: Pop(0); Push((bool) Stack[-1] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: GOTO 0x2fc

0x2f9: Push((int) 1)
0x2fa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2fb: GOTO 0x2ef

0x2fc: Stack[-2] = Stack[-5]
0x2fd: Return(); Pop(4)

0x2fe: Stack[-1] = (int) 515559
0x2ff: Return(); Pop(0)

0x300: Stack[-1] = (int) 503344
0x301: Return(); Pop(0)

0x302: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=222
0x303: Return(); Pop(0)

0x304: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=262
0x305: Return(); Pop(0)

0x306: Stack[-1] = (bool) 0
0x307: Return(); Pop(0)

0x308: PushEmpty()
0x309: Push("oob9Girl1") // @poff=306
0x30a: Push((int) 1)
0x30b: @ SetVariable(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: PushEmpty()
0x310: Call2 0x31f

0x311: Pop(0)
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: PushEmpty(int, string)
0x315: Stack[-1] = "oob9Girl1" // @poff=306
0x316: Call2 0x2e1

0x317: Pop(1)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-2] = (bool) 1
0x31c: Return(); Pop(0)

0x31d: Stack[-2] = (bool) 0
0x31e: Return(); Pop(0)

0x31f: PushEmpty(object, object)
0x320: Push((int) 540)
0x321: Push((int) 2)
0x322: Push((int) 530352)
0x323: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: PushEmpty(bool, object, int)
0x326: Stack[-4] = Stack[-2]
0x327: Stack[-1] = (int) 532
0x328: Call2 0x339

0x329: Pop(3)
0x32a: Return(); Pop(2)

0x32b: Stack[-1] = 0
0x32c: PushEmpty(object, object)
0x32d: @ GetDiaryRoot(Stack[-1])
0x32e: Pop(0)
0x32f: Pop(0); Push((bool) Stack[-1] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x331: Push("Can't retrieve diary root") // @poff=326
0x332: @ Trace(Stack[-1])
0x333: Pop(1)
0x334: Stack[-3] = (bool) 0
0x335: Return(); Pop(2)

0x336: Stack[-1] = Stack[-3]
0x337: Return(); Pop(2)

0x338: Stack[-1] = 0
0x339: PushEmpty(object, object, int, object, object, int)
0x33a: PushEmpty(object)
0x33b: Call2 0x32c

0x33c: Stack[-1] = Stack[-4]
0x33d: Pop(1)
0x33e: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=378
0x33f: Pop(0)
0x340: Pop(0); Push((bool) Stack[-2] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x342: Push("Can't find diary parent with id: ") // @poff=383
0x343: Pop(1); Push(Stack[-1] + Stack[-8]);
0x344: @ Trace(Stack[-1])
0x345: Pop(1)
0x346: Stack[-9] = (bool) 0
0x347: Return(); Pop(6)

0x348: @@ AddChild(Stack[-8]); Obj=2 // @poff=451
0x349: Pop(0)
0x34a: Push((int) 7)
0x34b: @ SendWorldWndMessage(Stack[-1])
0x34c: Pop(1)
0x34d: @@ GetCategory(Stack[-1]); Obj=8 // @poff=460
0x34e: Pop(0)
0x34f: @ SetDiarySection(Stack[-1])
0x350: Pop(0)
0x351: Stack[-9] = (bool) 0
0x352: Return(); Pop(6)

0x353: Stack[-2] = 0
0x354: Stack[-3] = 0
0x355: PushEmpty(int, int)
0x356: Push("branch") // @poff=472
0x357: @ GetVariable(Stack[-1], Stack[-2])
0x358: Pop(1)
0x359: Push((int) 0)
0x35a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: Stack[-3] = (int) 1
0x35d: Return(); Pop(2)

0x35e: GOTO 0x364

0x35f: Push((int) 1)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x362: Stack[-3] = (int) 2
0x363: Return(); Pop(2)

0x364: Stack[-3] = (int) 3
0x365: Return(); Pop(2)

