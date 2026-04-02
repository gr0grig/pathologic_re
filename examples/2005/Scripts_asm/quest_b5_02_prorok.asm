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
	W:b5q02
	W:quest_b5_02
	W:remove_prophet
	W:oob5Prophet1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400620035007100300032000000710075006500730074005f00620035005f00300032000000720065006d006f00760065005f00700072006f00700068006500740000006f006f0062003500500072006f00700068006500740031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x18a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x190 Vars = (object)
		EVENT_26 Op = 0x1c8 Vars = (string)
		EVENT_5 Op = 0x1d0 Vars = ()
		EVENT_6 Op = 0x1d5 Vars = ()
		EVENT_7 Op = 0x214 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x29c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3b2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3b0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3b4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3b6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x39f

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
0x41: Call2 0x2e0

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 520182)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x35d

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 520183)
0x5f: Push((int) 21374)
0x60: Push((int) 21373)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 520201)
0x64: Push((int) -1)
0x65: Push((int) 21393)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x3b8

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2f1

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all") // @poff=138
0x7b: Push("idle") // @poff=146
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all") // @poff=138
0x84: Push("idle") // @poff=146
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x3b8

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-3] = Stack[-2]
0x95: Push("") // @poff=102
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x2f8

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x309

0xa4: Pop(0)
0xa5: Push((int) 21373)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x357

0xac: Pop(2)
0xad: Push((int) 21383)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x349

0xb4: Pop(2)
0xb5: Push((int) 21386)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call2 0x349

0xbc: Pop(2)
0xbd: Push((int) 21372)
0xbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Neutral" // @poff=89
0xc2: Call2 0x89

0xc3: Pop(1)
0xc4: Push((int) 520182)
0xc5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc6: Pop(1)
0xc7: @@@ ClearReplies(); Obj=0 // @poff=116
0xc8: Pop(0)
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x35d

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: Push((int) 520183)
0xcf: Push((int) 21374)
0xd0: Push((int) 21373)
0xd1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd2: Pop(3)
0xd3: Push((int) 520201)
0xd4: Push((int) -1)
0xd5: Push((int) 21393)
0xd6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd7: Pop(3)
0xd8: Return(); Pop(0)

0xd9: Push((int) 21374)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = "Neutral" // @poff=89
0xde: Call2 0x89

0xdf: Pop(1)
0xe0: Push((int) 520184)
0xe1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe2: Pop(1)
0xe3: @@@ ClearReplies(); Obj=0 // @poff=116
0xe4: Pop(0)
0xe5: Push((int) 520185)
0xe6: Push((int) 21376)
0xe7: Push((int) 21375)
0xe8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe9: Pop(3)
0xea: Push((int) 520198)
0xeb: Push((int) 21390)
0xec: Push((int) 21389)
0xed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: Push((int) 21390)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral" // @poff=89
0xf5: Call2 0x89

0xf6: Pop(1)
0xf7: Push((int) 520199)
0xf8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf9: Pop(1)
0xfa: @@@ ClearReplies(); Obj=0 // @poff=116
0xfb: Pop(0)
0xfc: Push((int) 528307)
0xfd: Push((int) 29678)
0xfe: Push((int) 29677)
0xff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x100: Pop(3)
0x101: Push((int) 528309)
0x102: Push((int) -1)
0x103: Push((int) 29679)
0x104: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 29678)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral" // @poff=89
0x10c: Call2 0x89

0x10d: Pop(1)
0x10e: Push((int) 528308)
0x10f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x110: Pop(1)
0x111: @@@ ClearReplies(); Obj=0 // @poff=116
0x112: Pop(0)
0x113: Push((int) 520200)
0x114: Push((int) 21376)
0x115: Push((int) 21391)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 21376)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral" // @poff=89
0x11e: Call2 0x89

0x11f: Pop(1)
0x120: Push((int) 520186)
0x121: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x122: Pop(1)
0x123: @@@ ClearReplies(); Obj=0 // @poff=116
0x124: Pop(0)
0x125: Push((int) 520187)
0x126: Push((int) 21378)
0x127: Push((int) 21377)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Push((int) 520197)
0x12b: Push((int) 21378)
0x12c: Push((int) 21387)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 21378)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral" // @poff=89
0x135: Call2 0x89

0x136: Pop(1)
0x137: Push((int) 520188)
0x138: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x139: Pop(1)
0x13a: @@@ ClearReplies(); Obj=0 // @poff=116
0x13b: Pop(0)
0x13c: Push((int) 520189)
0x13d: Push((int) 21380)
0x13e: Push((int) 21379)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Push((int) 520194)
0x142: Push((int) 21385)
0x143: Push((int) 21384)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 21385)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0x89

0x14d: Pop(1)
0x14e: Push((int) 520195)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 520196)
0x154: Push((int) -1)
0x155: Push((int) 21386)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 21380)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral" // @poff=89
0x15e: Call2 0x89

0x15f: Pop(1)
0x160: Push((int) 520190)
0x161: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x162: Pop(1)
0x163: @@@ ClearReplies(); Obj=0 // @poff=116
0x164: Pop(0)
0x165: Push((int) 520191)
0x166: Push((int) 21382)
0x167: Push((int) 21381)
0x168: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 21382)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral" // @poff=89
0x170: Call2 0x89

0x171: Pop(1)
0x172: Push((int) 520192)
0x173: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x174: Pop(1)
0x175: @@@ ClearReplies(); Obj=0 // @poff=116
0x176: Pop(0)
0x177: Push((int) 520193)
0x178: Push((int) -1)
0x179: Push((int) 21383)
0x17a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17e: PushEmpty(bool)
0x17f: Call2 0x3b8

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: @ lshStopAnimation()
0x183: Pop(0)
0x184: GOTO 0x187

0x185: @ StopAnimation()
0x186: Pop(0)
0x187: Return(); Pop(0)

0x188: GOTO 0xa0

0x189: Return(); Pop(0)

0x18a: PushEmpty(float, float)
0x18b: Stack[-2] = (int) 300
0x18c: Stack[-1] = (int) 100
0x18d: Call2 0x19b

0x18e: Pop(2)
0x18f: Return(); Pop(0)

0x190: PushEmpty()
0x191: PushEmpty()
0x192: Call2 0x22b

0x193: Pop(0)
0x194: PushEmpty(int, object)
0x195: Stack[-3] = Stack[-1]
0x196: Push(-2, 1); TaskCall(0)
0x197: Call2 0x0

0x198: Pop(-2, 1); TaskReturn
0x199: Pop(2)
0x19a: Return(); Pop(0)

0x19b: PushEmpty(float, float)
0x19c: PushEmpty(bool)
0x19d: Call2 0x297

0x19e: Pop(0)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a1: @ Hold()
0x1a2: Pop(0)
0x1a3: GOTO 0x19c

0x1a4: Push((int) 3)
0x1a5: @ rand(Stack[-2], Stack[-1])
0x1a6: Pop(1)
0x1a7: Push((int) 3)
0x1a8: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1a9: @ Sleep(Stack[-1])
0x1aa: Pop(1)
0x1ab: PushEmpty(float, float)
0x1ac: Stack[-6] = Stack[-2]
0x1ad: Stack[-5] = Stack[-1]
0x1ae: Call2 0x1ea

0x1af: Pop(2)
0x1b0: @ sync()
0x1b1: Pop(0)
0x1b2: GOTO 0x19c

0x1b3: Return(); Pop(2)

0x1b4: PushEmpty(bool, bool)
0x1b5: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1b6: @ IsLoaded(Stack[-1])
0x1b7: Pop(0)
0x1b8: PushEmpty(bool)
0x1b9: Stack[-1] = (bool) 0
0x1ba: Pop(0); Push((bool) Stack[-2] == 0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x1e8

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: PushEmpty(object)
0x1c3: Call2 0x310

0x1c4: Pop(0)
0x1c5: @ RemoveActor(Stack[-1])
0x1c6: Pop(1)
0x1c7: Return(); Pop(2)

0x1c8: PushEmpty()
0x1c9: Push("cleanup") // @poff=156
0x1ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cc: PushEmpty()
0x1cd: Call2 0x1b4

0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: @ StopGroup0()
0x1d1: Pop(0)
0x1d2: @ sync()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Call2 0x22b

0x1d7: Pop(0)
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 0
0x1da: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(bool)
0x1dd: Call2 0x1e8

0x1de: Pop(0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: Stack[-1] = (bool) 1
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object)
0x1e3: Call2 0x310

0x1e4: Pop(0)
0x1e5: @ RemoveActor(Stack[-1])
0x1e6: Pop(1)
0x1e7: Return(); Pop(0)

0x1e8: Stack[-1] = (bool) 1
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x297

0x1ed: Pop(0)
0x1ee: Pop(1); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Return(); Pop(0)

0x1f1: Push("player") // @poff=172
0x1f2: @ FindActor(Stack[-4]T, Stack[-1])
0x1f3: Pop(1)
0x1f4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f8: Push((int) 10)
0x1f9: Push((float)1.0)
0x1fa: @ SetTimer(Stack[-2], Stack[-1])
0x1fb: Pop(2)
0x1fc: PushEmpty()
0x1fd: Call2 0x239

0x1fe: Pop(0)
0x1ff: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x201: Push((int) 10)
0x202: @ KillTimer(Stack[-1])
0x203: Pop(1)
0x204: Return(); Pop(0)

0x205: PushEmpty(float, float)
0x206: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x208: Stack[-3] = (bool) 0
0x209: Return(); Pop(2)

0x20a: PushEmpty(float, object)
0x20b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20c: Call2 0x28f

0x20d: Pop(1)
0x20e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x212: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x213: Return(); Pop(2)

0x214: PushEmpty()
0x215: Push((int) 10)
0x216: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x218: PushEmpty(bool)
0x219: Call2 0x205

0x21a: Pop(0)
0x21b: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: PushEmpty(object)
0x21f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x220: Call2 0x2fe

0x221: Pop(1)
0x222: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x223: GOTO 0x22a

0x224: Push( Stack[2 + Tasks[-1].StackPointer] )
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: Push("head") // @poff=186
0x227: @ UnlookAsync(Stack[-1])
0x228: Pop(1)
0x229: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22a: Return(); Pop(0)

0x22b: PushEmpty()
0x22c: Call2 0x28a

0x22d: Pop(0)
0x22e: Push((int) 10)
0x22f: @ KillTimer(Stack[-1])
0x230: Pop(1)
0x231: Push( Stack[2 + Tasks[-1].StackPointer] )
0x232: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x233: Push("head") // @poff=186
0x234: @ UnlookAsync(Stack[-1])
0x235: Pop(1)
0x236: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x237: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x238: Return(); Pop(0)

0x239: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23a: @ WaitForAnimEnd()
0x23b: Pop(0)
0x23c: PushEmpty(bool)
0x23d: Call2 0x297

0x23e: Pop(0)
0x23f: Pop(1); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Return(); Pop(14)

0x242: PushEmpty(int)
0x243: Call2 0x338

0x244: Stack[-1] = Stack[-8]
0x245: Pop(1)
0x246: Stack[-6] = (int) 0
0x247: PushEmpty(bool)
0x248: Stack[-1] = (bool) 0
0x249: Push((int) 5)
0x24a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24c: PushEmpty(bool)
0x24d: Call2 0x297

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: Stack[-1] = (bool) 1
0x251: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x252: Push((int) 3)
0x253: @ irand(Stack[-6], Stack[-1])
0x254: Pop(1)
0x255: Push((int) 0)
0x256: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x258: Push(Stack[-7])
0x259: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x25a: @ irand(Stack[-4], Stack[-7])
0x25b: Pop(0)
0x25c: Push("all") // @poff=138
0x25d: PushEmpty(string, int)
0x25e: Stack[-7] = Stack[-1]
0x25f: Call2 0x331

0x260: Pop(1)
0x261: @ PlayAnimation(Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: @ WaitForAnimEnd(Stack[-3])
0x264: Pop(0)
0x265: Pop(0); Push((bool) Stack[-3] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x285

0x268: GOTO 0x27a

0x269: Push((int) 1)
0x26a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x26c: Push((int) 4)
0x26d: @ rand(Stack[-3], Stack[-1])
0x26e: Pop(1)
0x26f: Push((int) 1)
0x270: Pop(1); Push(Stack[-3] + Stack[-1]);
0x271: @ Sleep(Stack[-1], Stack[-2])
0x272: Pop(1)
0x273: Pop(0); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x285

0x276: GOTO 0x27a

0x277: Push(Stack[-6])
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x285

0x27a: PushEmpty(bool)
0x27b: Call2 0x288

0x27c: Pop(0)
0x27d: Pop(1); Push((bool) Stack[-1] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x285

0x280: @ ResetAAS()
0x281: Pop(0)
0x282: Push((int) 1)
0x283: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x284: GOTO 0x247

0x285: @ ResetAAS()
0x286: Pop(0)
0x287: Return(); Pop(14)

0x288: Stack[-1] = (bool) 1
0x289: Return(); Pop(0)

0x28a: @ StopAnimation()
0x28b: Pop(0)
0x28c: @ StopGroup0()
0x28d: Pop(0)
0x28e: Return(); Pop(0)

0x28f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x290: @ GetPosition(Stack[-3])
0x291: Pop(0)
0x292: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x293: Pop(0)
0x294: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x295: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x296: Return(); Pop(6)

0x297: PushEmpty(bool, bool)
0x298: @ IsLoaded(Stack[-1])
0x299: Pop(0)
0x29a: Stack[-1] = Stack[-3]
0x29b: Return(); Pop(2)

0x29c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x29d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x29e: Pop(0)
0x29f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2a0: Pop(0)
0x2a1: Push(CvectorIndex(Stack[-8], 1))
0x2a2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a4: @ GetPosition(Stack[-7])
0x2a5: Pop(0)
0x2a6: @ GetEyesHeight(Stack[-9])
0x2a7: Pop(0)
0x2a8: Push(CvectorIndex(Stack[-7], 1))
0x2a9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2aa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ab: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ac: Push(CvectorIndex(Stack[-6], 1))
0x2ad: Stack[-1] = (int) 0
0x2ae: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2af: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b0: Pop(1); Push(Sqrt(Stack[-1]))
0x2b1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b2: Stack[-5] = -Stack[-6]; Pop(0);
0x2b3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b4: PushEmpty(cvector, cvector)
0x2b5: Push([0.0, 1.0, 0.0])
0x2b6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b7: Call2 0x316

0x2b8: Pop(1)
0x2b9: Push((int) 25)
0x2ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bc: Push([0.0, 10.0, 0.0])
0x2bd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2be: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2bf: @ IsOverrideActive(Stack[-2])
0x2c0: Pop(0)
0x2c1: Push(Stack[-2])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-21] = (bool) 0
0x2c4: Return(); Pop(18)

0x2c5: @ StopWorld()
0x2c6: Pop(0)
0x2c7: @ CameraTransit(Stack[-3], Stack[-5])
0x2c8: Pop(0)
0x2c9: Push(CvectorIndex(Stack[-4], 0))
0x2ca: Push(CvectorIndex(Stack[-5], 2))
0x2cb: @ Rotate(Stack[-2], Stack[-1])
0x2cc: Pop(2)
0x2cd: PushEmpty(bool)
0x2ce: Call2 0x3b8

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2da

0x2d2: Push("head") // @poff=186
0x2d3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push(Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: Push("head") // @poff=186
0x2d8: @ LookAsyncCamera(Stack[-1])
0x2d9: Pop(1)
0x2da: @ CameraWaitForPlayFinish()
0x2db: Pop(0)
0x2dc: @ ResumeWorld()
0x2dd: Pop(0)
0x2de: Stack[-21] = (bool) 1
0x2df: Return(); Pop(18)

0x2e0: PushEmpty(bool, bool)
0x2e1: @ CameraSwitchToNormal()
0x2e2: Pop(0)
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x3b8

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x2f0

0x2e8: Push("head") // @poff=186
0x2e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: Push(Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: Push("head") // @poff=186
0x2ee: @ UnlookAsync(Stack[-1])
0x2ef: Pop(1)
0x2f0: Return(); Pop(2)

0x2f1: PushEmpty(float, float, float, float)
0x2f2: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2f3: Pop(0)
0x2f4: Push((bool) 0)
0x2f5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(1)
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(float, float, float, float)
0x2f9: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2fa: Pop(0)
0x2fb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2fc: Pop(0)
0x2fd: Return(); Pop(4)

0x2fe: PushEmpty(float, cvector, float, cvector)
0x2ff: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x300: Pop(0)
0x301: Stack[-1] = [0.0, 0.0, 0.0]
0x302: Push(CvectorIndex(Stack[-1], 1))
0x303: Stack[-3] = Stack[-1]
0x304: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x305: Push("head") // @poff=186
0x306: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x307: Pop(1)
0x308: Return(); Pop(4)

0x309: PushEmpty(bool)
0x30a: Call2 0x3b8

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: @ lshStopSpeech()
0x30e: Pop(0)
0x30f: Return(); Pop(0)

0x310: PushEmpty(object, object)
0x311: @ self(Stack[-1])
0x312: Pop(0)
0x313: Stack[-1] = Stack[-3]
0x314: Return(); Pop(2)

0x315: Stack[-1] = 0
0x316: PushEmpty(float, float)
0x317: Pop(0); Push(Stack[-3] | Stack[-3]);
0x318: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x319: Push((float)9.999999974752427e-07)
0x31a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-4] = [0.0, 0.0, 0.0]
0x31d: Return(); Pop(2)

0x31e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x31f: Return(); Pop(2)

0x320: PushEmpty(int, int)
0x321: @ GetVariable(Stack[-3], Stack[-1])
0x322: Pop(0)
0x323: Stack[-1] = Stack[-4]
0x324: Return(); Pop(2)

0x325: PushEmpty(object, object)
0x326: @ FindActor(Stack[-1], Stack[-4])
0x327: Pop(0)
0x328: Pop(0); PushNull((bool) Stack[-1] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32a: Stack[-5] = (bool) 0
0x32b: Return(); Pop(2)

0x32c: @ Trigger(Stack[-1], Stack[-3])
0x32d: Pop(0)
0x32e: Stack[-5] = (bool) 1
0x32f: Return(); Pop(2)

0x330: Stack[-1] = 0
0x331: PushEmpty(string, string)
0x332: Stack[-1] = "idle" // @poff=146
0x333: Push(Stack[-3])
0x334: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x335: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x336: Stack[-1] = Stack[-4]
0x337: Return(); Pop(2)

0x338: PushEmpty(int, bool, int, bool)
0x339: Stack[-2] = (int) 0
0x33a: Push("all") // @poff=138
0x33b: PushEmpty(string, int)
0x33c: Stack[-5] = Stack[-1]
0x33d: Call2 0x331

0x33e: Pop(1)
0x33f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: Pop(0); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x347

0x344: Push((int) 1)
0x345: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x346: GOTO 0x33a

0x347: Stack[-2] = Stack[-5]
0x348: Return(); Pop(4)

0x349: PushEmpty()
0x34a: Push("b5q02") // @poff=222
0x34b: Push((int) 2)
0x34c: @ SetVariable(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: PushEmpty()
0x34f: Call2 0x369

0x350: Pop(0)
0x351: PushEmpty(bool, string, string)
0x352: Stack[-2] = "quest_b5_02" // @poff=234
0x353: Stack[-1] = "remove_prophet" // @poff=258
0x354: Call2 0x325

0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: Push("oob5Prophet1") // @poff=288
0x359: Push((int) 1)
0x35a: @ SetVariable(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: PushEmpty(int, string)
0x35f: Stack[-1] = "oob5Prophet1" // @poff=288
0x360: Call2 0x320

0x361: Pop(1)
0x362: Push((int) 0)
0x363: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-2] = (bool) 1
0x366: Return(); Pop(0)

0x367: Stack[-2] = (bool) 0
0x368: Return(); Pop(0)

0x369: PushEmpty(object, object)
0x36a: Push((int) 251)
0x36b: Push((int) 2)
0x36c: Push((int) 520667)
0x36d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: PushEmpty(bool, object, int)
0x370: Stack[-4] = Stack[-2]
0x371: Stack[-1] = (int) 249
0x372: Call2 0x383

0x373: Pop(3)
0x374: Return(); Pop(2)

0x375: Stack[-1] = 0
0x376: PushEmpty(object, object)
0x377: @ GetDiaryRoot(Stack[-1])
0x378: Pop(0)
0x379: Pop(0); Push((bool) Stack[-1] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37b: Push("Can't retrieve diary root") // @poff=314
0x37c: @ Trace(Stack[-1])
0x37d: Pop(1)
0x37e: Stack[-3] = (bool) 0
0x37f: Return(); Pop(2)

0x380: Stack[-1] = Stack[-3]
0x381: Return(); Pop(2)

0x382: Stack[-1] = 0
0x383: PushEmpty(object, object, int, object, object, int)
0x384: PushEmpty(object)
0x385: Call2 0x376

0x386: Stack[-1] = Stack[-4]
0x387: Pop(1)
0x388: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=366
0x389: Pop(0)
0x38a: Pop(0); Push((bool) Stack[-2] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: Push("Can't find diary parent with id: ") // @poff=371
0x38d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38e: @ Trace(Stack[-1])
0x38f: Pop(1)
0x390: Stack[-9] = (bool) 0
0x391: Return(); Pop(6)

0x392: @@ AddChild(Stack[-8]); Obj=2 // @poff=439
0x393: Pop(0)
0x394: Push((int) 7)
0x395: @ SendWorldWndMessage(Stack[-1])
0x396: Pop(1)
0x397: @@ GetCategory(Stack[-1]); Obj=8 // @poff=448
0x398: Pop(0)
0x399: @ SetDiarySection(Stack[-1])
0x39a: Pop(0)
0x39b: Stack[-9] = (bool) 0
0x39c: Return(); Pop(6)

0x39d: Stack[-2] = 0
0x39e: Stack[-3] = 0
0x39f: PushEmpty(int, int)
0x3a0: Push("branch") // @poff=460
0x3a1: @ GetVariable(Stack[-1], Stack[-2])
0x3a2: Pop(1)
0x3a3: Push((int) 0)
0x3a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a6: Stack[-3] = (int) 1
0x3a7: Return(); Pop(2)

0x3a8: GOTO 0x3ae

0x3a9: Push((int) 1)
0x3aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-3] = (int) 2
0x3ad: Return(); Pop(2)

0x3ae: Stack[-3] = (int) 3
0x3af: Return(); Pop(2)

0x3b0: Stack[-1] = (int) 518716
0x3b1: Return(); Pop(0)

0x3b2: Stack[-1] = (int) 518715
0x3b3: Return(); Pop(0)

0x3b4: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=474
0x3b5: Return(); Pop(0)

0x3b6: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=514
0x3b7: Return(); Pop(0)

0x3b8: Stack[-1] = (bool) 0
0x3b9: Return(); Pop(0)

