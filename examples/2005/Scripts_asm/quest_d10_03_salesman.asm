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
	W:ood10Salesman1
	W:d10q03
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006f006f00640031003000530061006c00650073006d0061006e00310000006400310030007100300033000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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

RunOp = 0x131
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x137 Vars = (object)
		EVENT_26 Op = 0x16f Vars = (string)
		EVENT_5 Op = 0x177 Vars = ()
		EVENT_6 Op = 0x17c Vars = ()
		EVENT_7 Op = 0x1bb Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x243

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x348

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x346

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x34a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x34c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x335

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
0x41: Call2 0x287

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
0x52: Call2 0x2f3

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2e4

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral" // @poff=89
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 534142)
0x5f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x60: Pop(1)
0x61: @@@ ClearReplies(); Obj=0 // @poff=116
0x62: Pop(0)
0x63: Push((int) 534435)
0x64: Push((int) 36067)
0x65: Push((int) 36066)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 534437)
0x69: Push((int) 36067)
0x6a: Push((int) 36068)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 534144)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 534145)
0x78: Push((int) -1)
0x79: Push((int) 35732)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 534443)
0x7d: Push((int) -1)
0x7e: Push((int) 36076)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x34e

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x298

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
0xa4: Call2 0x34e

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
0xb4: Call2 0x29f

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2b0

0xbd: Pop(0)
0xbe: Push((int) 35730)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x2ea

0xc5: Pop(2)
0xc6: Push((int) 35729)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x2f3

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x2e4

0xd2: Pop(2)
0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral" // @poff=89
0xd5: Call2 0xa2

0xd6: Pop(1)
0xd7: Push((int) 534142)
0xd8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd9: Pop(1)
0xda: @@@ ClearReplies(); Obj=0 // @poff=116
0xdb: Pop(0)
0xdc: Push((int) 534435)
0xdd: Push((int) 36067)
0xde: Push((int) 36066)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Push((int) 534437)
0xe2: Push((int) 36067)
0xe3: Push((int) 36068)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral" // @poff=89
0xe9: Call2 0xa2

0xea: Pop(1)
0xeb: Push((int) 534144)
0xec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xed: Pop(1)
0xee: @@@ ClearReplies(); Obj=0 // @poff=116
0xef: Pop(0)
0xf0: Push((int) 534145)
0xf1: Push((int) -1)
0xf2: Push((int) 35732)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Push((int) 534443)
0xf6: Push((int) -1)
0xf7: Push((int) 36076)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 36067)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral" // @poff=89
0x100: Call2 0xa2

0x101: Pop(1)
0x102: Push((int) 534436)
0x103: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x104: Pop(1)
0x105: @@@ ClearReplies(); Obj=0 // @poff=116
0x106: Pop(0)
0x107: Push((int) 534438)
0x108: Push((int) 36070)
0x109: Push((int) 36069)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Push((int) 534442)
0x10d: Push((int) 36070)
0x10e: Push((int) 36074)
0x10f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 36070)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral" // @poff=89
0x117: Call2 0xa2

0x118: Pop(1)
0x119: Push((int) 534439)
0x11a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11b: Pop(1)
0x11c: @@@ ClearReplies(); Obj=0 // @poff=116
0x11d: Pop(0)
0x11e: Push((int) 534143)
0x11f: Push((int) -1)
0x120: Push((int) 35730)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x125: PushEmpty(bool)
0x126: Call2 0x34e

0x127: Pop(0)
0x128: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x129: @ lshStopAnimation()
0x12a: Pop(0)
0x12b: GOTO 0x12e

0x12c: @ StopAnimation()
0x12d: Pop(0)
0x12e: Return(); Pop(0)

0x12f: GOTO 0xb9

0x130: Return(); Pop(0)

0x131: PushEmpty(float, float)
0x132: Stack[-2] = (int) 300
0x133: Stack[-1] = (int) 100
0x134: Call2 0x142

0x135: Pop(2)
0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: PushEmpty()
0x139: Call2 0x1d2

0x13a: Pop(0)
0x13b: PushEmpty(int, object)
0x13c: Stack[-3] = Stack[-1]
0x13d: Push(-2, 1); TaskCall(0)
0x13e: Call2 0x0

0x13f: Pop(-2, 1); TaskReturn
0x140: Pop(2)
0x141: Return(); Pop(0)

0x142: PushEmpty(float, float)
0x143: PushEmpty(bool)
0x144: Call2 0x23e

0x145: Pop(0)
0x146: Pop(1); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x148: @ Hold()
0x149: Pop(0)
0x14a: GOTO 0x143

0x14b: Push((int) 3)
0x14c: @ rand(Stack[-2], Stack[-1])
0x14d: Pop(1)
0x14e: Push((int) 3)
0x14f: Pop(1); Push(Stack[-2] + Stack[-1]);
0x150: @ Sleep(Stack[-1])
0x151: Pop(1)
0x152: PushEmpty(float, float)
0x153: Stack[-6] = Stack[-2]
0x154: Stack[-5] = Stack[-1]
0x155: Call2 0x191

0x156: Pop(2)
0x157: @ sync()
0x158: Pop(0)
0x159: GOTO 0x143

0x15a: Return(); Pop(2)

0x15b: PushEmpty(bool, bool)
0x15c: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x15d: @ IsLoaded(Stack[-1])
0x15e: Pop(0)
0x15f: PushEmpty(bool)
0x160: Stack[-1] = (bool) 0
0x161: Pop(0); Push((bool) Stack[-2] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: PushEmpty(bool)
0x164: Call2 0x18f

0x165: Pop(0)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 1
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: PushEmpty(object)
0x16a: Call2 0x2b7

0x16b: Pop(0)
0x16c: @ RemoveActor(Stack[-1])
0x16d: Pop(1)
0x16e: Return(); Pop(2)

0x16f: PushEmpty()
0x170: Push("cleanup") // @poff=156
0x171: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x173: PushEmpty()
0x174: Call2 0x15b

0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: @ StopGroup0()
0x178: Pop(0)
0x179: @ sync()
0x17a: Pop(0)
0x17b: Return(); Pop(0)

0x17c: PushEmpty()
0x17d: Call2 0x1d2

0x17e: Pop(0)
0x17f: PushEmpty(bool)
0x180: Stack[-1] = (bool) 0
0x181: Push( Stack[5 + Tasks[-1].StackPointer] )
0x182: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x183: PushEmpty(bool)
0x184: Call2 0x18f

0x185: Pop(0)
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Stack[-1] = (bool) 1
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: PushEmpty(object)
0x18a: Call2 0x2b7

0x18b: Pop(0)
0x18c: @ RemoveActor(Stack[-1])
0x18d: Pop(1)
0x18e: Return(); Pop(0)

0x18f: Stack[-1] = (bool) 1
0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: PushEmpty(bool)
0x193: Call2 0x23e

0x194: Pop(0)
0x195: Pop(1); Push((bool) Stack[-1] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: Push("player") // @poff=172
0x199: @ FindActor(Stack[-4]T, Stack[-1])
0x19a: Pop(1)
0x19b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x19e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x19f: Push((int) 10)
0x1a0: Push((float)1.0)
0x1a1: @ SetTimer(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: PushEmpty()
0x1a4: Call2 0x1e0

0x1a5: Pop(0)
0x1a6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: Push((int) 10)
0x1a9: @ KillTimer(Stack[-1])
0x1aa: Pop(1)
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(float, float)
0x1ad: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1af: Stack[-3] = (bool) 0
0x1b0: Return(); Pop(2)

0x1b1: PushEmpty(float, object)
0x1b2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b3: Call2 0x236

0x1b4: Pop(1)
0x1b5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1b9: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ba: Return(); Pop(2)

0x1bb: PushEmpty()
0x1bc: Push((int) 10)
0x1bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bf: PushEmpty(bool)
0x1c0: Call2 0x1ac

0x1c1: Pop(0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: PushEmpty(object)
0x1c6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c7: Call2 0x2a5

0x1c8: Pop(1)
0x1c9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ca: GOTO 0x1d1

0x1cb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cd: Push("head") // @poff=186
0x1ce: @ UnlookAsync(Stack[-1])
0x1cf: Pop(1)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: Call2 0x231

0x1d4: Pop(0)
0x1d5: Push((int) 10)
0x1d6: @ KillTimer(Stack[-1])
0x1d7: Pop(1)
0x1d8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1da: Push("head") // @poff=186
0x1db: @ UnlookAsync(Stack[-1])
0x1dc: Pop(1)
0x1dd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1df: Return(); Pop(0)

0x1e0: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e1: @ WaitForAnimEnd()
0x1e2: Pop(0)
0x1e3: PushEmpty(bool)
0x1e4: Call2 0x23e

0x1e5: Pop(0)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(14)

0x1e9: PushEmpty(int)
0x1ea: Call2 0x2d3

0x1eb: Stack[-1] = Stack[-8]
0x1ec: Pop(1)
0x1ed: Stack[-6] = (int) 0
0x1ee: PushEmpty(bool)
0x1ef: Stack[-1] = (bool) 0
0x1f0: Push((int) 5)
0x1f1: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: PushEmpty(bool)
0x1f4: Call2 0x23e

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x1f9: Push((int) 3)
0x1fa: @ irand(Stack[-6], Stack[-1])
0x1fb: Pop(1)
0x1fc: Push((int) 0)
0x1fd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1ff: Push(Stack[-7])
0x200: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x201: @ irand(Stack[-4], Stack[-7])
0x202: Pop(0)
0x203: Push("all") // @poff=138
0x204: PushEmpty(string, int)
0x205: Stack[-7] = Stack[-1]
0x206: Call2 0x2cc

0x207: Pop(1)
0x208: @ PlayAnimation(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: @ WaitForAnimEnd(Stack[-3])
0x20b: Pop(0)
0x20c: Pop(0); Push((bool) Stack[-3] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: GOTO 0x22c

0x20f: GOTO 0x221

0x210: Push((int) 1)
0x211: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x213: Push((int) 4)
0x214: @ rand(Stack[-3], Stack[-1])
0x215: Pop(1)
0x216: Push((int) 1)
0x217: Pop(1); Push(Stack[-3] + Stack[-1]);
0x218: @ Sleep(Stack[-1], Stack[-2])
0x219: Pop(1)
0x21a: Pop(0); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: GOTO 0x22c

0x21d: GOTO 0x221

0x21e: Push(Stack[-6])
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x22c

0x221: PushEmpty(bool)
0x222: Call2 0x22f

0x223: Pop(0)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x22c

0x227: @ ResetAAS()
0x228: Pop(0)
0x229: Push((int) 1)
0x22a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x22b: GOTO 0x1ee

0x22c: @ ResetAAS()
0x22d: Pop(0)
0x22e: Return(); Pop(14)

0x22f: Stack[-1] = (bool) 1
0x230: Return(); Pop(0)

0x231: @ StopAnimation()
0x232: Pop(0)
0x233: @ StopGroup0()
0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x237: @ GetPosition(Stack[-3])
0x238: Pop(0)
0x239: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x23a: Pop(0)
0x23b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x23c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x23d: Return(); Pop(6)

0x23e: PushEmpty(bool, bool)
0x23f: @ IsLoaded(Stack[-1])
0x240: Pop(0)
0x241: Stack[-1] = Stack[-3]
0x242: Return(); Pop(2)

0x243: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x244: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x245: Pop(0)
0x246: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x247: Pop(0)
0x248: Push(CvectorIndex(Stack[-8], 1))
0x249: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x24b: @ GetPosition(Stack[-7])
0x24c: Pop(0)
0x24d: @ GetEyesHeight(Stack[-9])
0x24e: Pop(0)
0x24f: Push(CvectorIndex(Stack[-7], 1))
0x250: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x251: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x252: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x253: Push(CvectorIndex(Stack[-6], 1))
0x254: Stack[-1] = (int) 0
0x255: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x256: Pop(0); Push(Stack[-6] | Stack[-6]);
0x257: Pop(1); Push(Sqrt(Stack[-1]))
0x258: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x259: Stack[-5] = -Stack[-6]; Pop(0);
0x25a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x25b: PushEmpty(cvector, cvector)
0x25c: Push([0.0, 1.0, 0.0])
0x25d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x25e: Call2 0x2bd

0x25f: Pop(1)
0x260: Push((int) 25)
0x261: Pop(2); Push(Stack[-2] * Stack[-1]);
0x262: Pop(2); Push(Stack[-2] + Stack[-1]);
0x263: Push([0.0, 10.0, 0.0])
0x264: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x265: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x266: @ IsOverrideActive(Stack[-2])
0x267: Pop(0)
0x268: Push(Stack[-2])
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-21] = (bool) 0
0x26b: Return(); Pop(18)

0x26c: @ StopWorld()
0x26d: Pop(0)
0x26e: @ CameraTransit(Stack[-3], Stack[-5])
0x26f: Pop(0)
0x270: Push(CvectorIndex(Stack[-4], 0))
0x271: Push(CvectorIndex(Stack[-5], 2))
0x272: @ Rotate(Stack[-2], Stack[-1])
0x273: Pop(2)
0x274: PushEmpty(bool)
0x275: Call2 0x34e

0x276: Pop(0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: GOTO 0x281

0x279: Push("head") // @poff=186
0x27a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x27b: Pop(1)
0x27c: Push(Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27e: Push("head") // @poff=186
0x27f: @ LookAsyncCamera(Stack[-1])
0x280: Pop(1)
0x281: @ CameraWaitForPlayFinish()
0x282: Pop(0)
0x283: @ ResumeWorld()
0x284: Pop(0)
0x285: Stack[-21] = (bool) 1
0x286: Return(); Pop(18)

0x287: PushEmpty(bool, bool)
0x288: @ CameraSwitchToNormal()
0x289: Pop(0)
0x28a: PushEmpty(bool)
0x28b: Call2 0x34e

0x28c: Pop(0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x297

0x28f: Push("head") // @poff=186
0x290: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x291: Pop(1)
0x292: Push(Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x294: Push("head") // @poff=186
0x295: @ UnlookAsync(Stack[-1])
0x296: Pop(1)
0x297: Return(); Pop(2)

0x298: PushEmpty(float, float, float, float)
0x299: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x29a: Pop(0)
0x29b: Push((bool) 0)
0x29c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(1)
0x29e: Return(); Pop(4)

0x29f: PushEmpty(float, float, float, float)
0x2a0: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2a1: Pop(0)
0x2a2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2a3: Pop(0)
0x2a4: Return(); Pop(4)

0x2a5: PushEmpty(float, cvector, float, cvector)
0x2a6: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2a7: Pop(0)
0x2a8: Stack[-1] = [0.0, 0.0, 0.0]
0x2a9: Push(CvectorIndex(Stack[-1], 1))
0x2aa: Stack[-3] = Stack[-1]
0x2ab: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ac: Push("head") // @poff=186
0x2ad: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ae: Pop(1)
0x2af: Return(); Pop(4)

0x2b0: PushEmpty(bool)
0x2b1: Call2 0x34e

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b4: @ lshStopSpeech()
0x2b5: Pop(0)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(object, object)
0x2b8: @ self(Stack[-1])
0x2b9: Pop(0)
0x2ba: Stack[-1] = Stack[-3]
0x2bb: Return(); Pop(2)

0x2bc: Stack[-1] = 0
0x2bd: PushEmpty(float, float)
0x2be: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2bf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2c0: Push((float)9.999999974752427e-07)
0x2c1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-4] = [0.0, 0.0, 0.0]
0x2c4: Return(); Pop(2)

0x2c5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2c6: Return(); Pop(2)

0x2c7: PushEmpty(int, int)
0x2c8: @ GetVariable(Stack[-3], Stack[-1])
0x2c9: Pop(0)
0x2ca: Stack[-1] = Stack[-4]
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(string, string)
0x2cd: Stack[-1] = "idle" // @poff=146
0x2ce: Push(Stack[-3])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2d1: Stack[-1] = Stack[-4]
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(int, bool, int, bool)
0x2d4: Stack[-2] = (int) 0
0x2d5: Push("all") // @poff=138
0x2d6: PushEmpty(string, int)
0x2d7: Stack[-5] = Stack[-1]
0x2d8: Call2 0x2cc

0x2d9: Pop(1)
0x2da: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(2)
0x2dc: Pop(0); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: GOTO 0x2e2

0x2df: Push((int) 1)
0x2e0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e1: GOTO 0x2d5

0x2e2: Stack[-2] = Stack[-5]
0x2e3: Return(); Pop(4)

0x2e4: PushEmpty()
0x2e5: Push("ood10Salesman1") // @poff=222
0x2e6: Push((int) 1)
0x2e7: @ SetVariable(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: Push("d10q03") // @poff=252
0x2ec: Push((int) 2)
0x2ed: @ SetVariable(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: PushEmpty()
0x2f0: Call2 0x2ff

0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty()
0x2f4: PushEmpty(int, string)
0x2f5: Stack[-1] = "ood10Salesman1" // @poff=222
0x2f6: Call2 0x2c7

0x2f7: Pop(1)
0x2f8: Push((int) 0)
0x2f9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-2] = (bool) 1
0x2fc: Return(); Pop(0)

0x2fd: Stack[-2] = (bool) 0
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object, object)
0x300: Push((int) 674)
0x301: Push((int) 2)
0x302: Push((int) 534159)
0x303: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(3)
0x305: PushEmpty(bool, object, int)
0x306: Stack[-4] = Stack[-2]
0x307: Stack[-1] = (int) 672
0x308: Call2 0x319

0x309: Pop(3)
0x30a: Return(); Pop(2)

0x30b: Stack[-1] = 0
0x30c: PushEmpty(object, object)
0x30d: @ GetDiaryRoot(Stack[-1])
0x30e: Pop(0)
0x30f: Pop(0); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: Push("Can't retrieve diary root") // @poff=266
0x312: @ Trace(Stack[-1])
0x313: Pop(1)
0x314: Stack[-3] = (bool) 0
0x315: Return(); Pop(2)

0x316: Stack[-1] = Stack[-3]
0x317: Return(); Pop(2)

0x318: Stack[-1] = 0
0x319: PushEmpty(object, object, int, object, object, int)
0x31a: PushEmpty(object)
0x31b: Call2 0x30c

0x31c: Stack[-1] = Stack[-4]
0x31d: Pop(1)
0x31e: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=318
0x31f: Pop(0)
0x320: Pop(0); Push((bool) Stack[-2] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x322: Push("Can't find diary parent with id: ") // @poff=323
0x323: Pop(1); Push(Stack[-1] + Stack[-8]);
0x324: @ Trace(Stack[-1])
0x325: Pop(1)
0x326: Stack[-9] = (bool) 0
0x327: Return(); Pop(6)

0x328: @@ AddChild(Stack[-8]); Obj=2 // @poff=391
0x329: Pop(0)
0x32a: Push((int) 7)
0x32b: @ SendWorldWndMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ GetCategory(Stack[-1]); Obj=8 // @poff=400
0x32e: Pop(0)
0x32f: @ SetDiarySection(Stack[-1])
0x330: Pop(0)
0x331: Stack[-9] = (bool) 0
0x332: Return(); Pop(6)

0x333: Stack[-2] = 0
0x334: Stack[-3] = 0
0x335: PushEmpty(int, int)
0x336: Push("branch") // @poff=412
0x337: @ GetVariable(Stack[-1], Stack[-2])
0x338: Pop(1)
0x339: Push((int) 0)
0x33a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33c: Stack[-3] = (int) 1
0x33d: Return(); Pop(2)

0x33e: GOTO 0x344

0x33f: Push((int) 1)
0x340: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-3] = (int) 2
0x343: Return(); Pop(2)

0x344: Stack[-3] = (int) 3
0x345: Return(); Pop(2)

0x346: Stack[-1] = (int) 531557
0x347: Return(); Pop(0)

0x348: Stack[-1] = (int) 531556
0x349: Return(); Pop(0)

0x34a: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=426
0x34b: Return(); Pop(0)

0x34c: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=466
0x34d: Return(); Pop(0)

0x34e: Stack[-1] = (bool) 0
0x34f: Return(); Pop(0)

