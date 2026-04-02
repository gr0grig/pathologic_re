GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Mishka.png
	W:ui/NPC_Mishka_b.png
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004d006900730068006b0061002e0070006e0067000000750069002f004e00500043005f004d006900730068006b0061005f0062002e0070006e00670000006200720061006e00630068000000
// @pool_encoding:utf8

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
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
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x2bd
RunTask = 7

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x195 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x293 Vars = (int, int)
	GTASK_7 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x30f Vars = (int)
		EVENT_6 Op = 0x335 Vars = ()
		EVENT_5 Op = 0x344 Vars = ()
		EVENT_45 Op = 0x351 Vars = (bool)
		EVENT_0 Op = 0x35d Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3e1

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x4e8

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x43b

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3e6

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x521

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x51f

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x523

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x525

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x529

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-11] = Stack[-2]
0x45: Stack[-6] = Stack[-1]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-10] = Stack[-1]
0x55: Call2 0x42a

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a: Pop(0)
0x5b: Stack[-2] = Stack[-10]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 525510)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525511)
0x6e: Push((int) -1)
0x6f: Push((int) 26867)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 529288)
0x73: Push((int) 30743)
0x74: Push((int) 30742)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x527

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x4c5

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
0x9a: Call2 0x527

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
0xaa: Call2 0x4cc

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x4e1

0xb3: Pop(0)
0xb4: Push((int) 26866)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525510)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 525511)
0xc1: Push((int) -1)
0xc2: Push((int) 26867)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 529288)
0xc6: Push((int) 30743)
0xc7: Push((int) 30742)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 30743)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 529289)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 529290)
0xd8: Push((int) -1)
0xd9: Push((int) 30744)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 529291)
0xdd: Push((int) -1)
0xde: Push((int) 30745)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3: PushEmpty(bool)
0xe4: Call2 0x527

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ lshStopAnimation()
0xe8: Pop(0)
0xe9: GOTO 0xec

0xea: @ StopAnimation()
0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: GOTO 0xaf

0xee: Return(); Pop(0)

0xef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1: PushEmpty(bool, object)
0xf2: PushEmpty(object)
0xf3: Call2 0x4e8

0xf4: Stack[-1] = Stack[-2]
0xf5: Pop(1)
0xf6: Call2 0x43b

0xf7: Pop(2)
0xf8: PushEmpty(bool, object, float)
0xf9: Stack[-12] = Stack[-2]
0xfa: Stack[-1] = (float) 70.0
0xfb: Call2 0x3e6

0xfc: Pop(2)
0xfd: Pop(1); Push((bool) Stack[-1] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xff: Stack[-10] = (int) -2
0x100: Return(); Pop(8)

0x101: @ CreateDialog(Stack[-4])
0x102: Pop(0)
0x103: PushEmpty(int)
0x104: Call2 0x521

0x105: Pop(0)
0x106: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x107: Pop(1)
0x108: PushEmpty(int)
0x109: Call2 0x51f

0x10a: Pop(0)
0x10b: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x10c: Pop(1)
0x10d: PushEmpty(string)
0x10e: Call2 0x523

0x10f: Pop(0)
0x110: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x111: Pop(1)
0x112: PushEmpty(string)
0x113: Call2 0x525

0x114: Pop(0)
0x115: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x116: Pop(1)
0x117: PushEmpty(int)
0x118: Call2 0x529

0x119: Pop(0)
0x11a: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x11b: Pop(1)
0x11c: Stack[-2] = (int) -1
0x11d: @ IsOverrideActive(Stack[-3])
0x11e: Pop(0)
0x11f: Push(Stack[-3])
0x120: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x121: Stack[-10] = (int) -2
0x122: Return(); Pop(8)

0x123: @ DoDialog(Stack[-4])
0x124: Pop(0)
0x125: PushEmpty(object, object)
0x126: Stack[-11] = Stack[-2]
0x127: Stack[-6] = Stack[-1]
0x128: Push(-2, 4); TaskCall(4)
0x129: Call2 0x140

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: @ sync()
0x131: Pop(0)
0x132: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x133: Pop(0)
0x134: GOTO 0x12e

0x135: PushEmpty(object)
0x136: Stack[-10] = Stack[-1]
0x137: Call2 0x42a

0x138: Pop(1)
0x139: @ StopDialog(Stack[-4])
0x13a: Pop(0)
0x13b: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x13c: Pop(0)
0x13d: Stack[-2] = Stack[-10]
0x13e: Return(); Pop(8)

0x13f: Stack[-4] = 0
0x140: PushEmpty()
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0x17f

0x149: Pop(1)
0x14a: Push((int) 535284)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: Push((int) 535285)
0x150: Push((int) 36962)
0x151: Push((int) 36961)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: Push((int) 535292)
0x155: Push((int) -1)
0x156: Push((int) 36968)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 535293)
0x15a: Push((int) -1)
0x15b: Push((int) 36969)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: GOTO 0x161

0x15f: Return(); Pop(0)

0x160: GOTO 0x144

0x161: PushEmpty(bool)
0x162: Call2 0x527

0x163: Pop(0)
0x164: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x165: @ lshWaitForAnimEnd()
0x166: Pop(0)
0x167: Push( Stack[3 + Tasks[-1].StackPointer] )
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: GOTO 0x16f

0x16a: PushEmpty(string)
0x16b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x16c: Call2 0x4c5

0x16d: Pop(1)
0x16e: GOTO 0x165

0x16f: GOTO 0x17e

0x170: Push("all") // @poff=138
0x171: Push("idle") // @poff=146
0x172: @ PlayAnimation(Stack[-2], Stack[-1])
0x173: Pop(2)
0x174: @ WaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: Push("all") // @poff=138
0x17a: Push("idle") // @poff=146
0x17b: @ PlayAnimation(Stack[-2], Stack[-1])
0x17c: Pop(2)
0x17d: GOTO 0x174

0x17e: Return(); Pop(0)

0x17f: PushEmpty()
0x180: PushEmpty(bool)
0x181: Call2 0x527

0x182: Pop(0)
0x183: Pop(1); Push((bool) Stack[-1] == 0)
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: Return(); Pop(0)

0x186: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: Return(); Pop(0)

0x189: PushEmpty(string, bool)
0x18a: Stack[-3] = Stack[-2]
0x18b: Push("") // @poff=102
0x18c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18e: Stack[-1] = (bool) 0
0x18f: GOTO 0x191

0x190: Stack[-1] = (bool) 1
0x191: Call2 0x4cc

0x192: Pop(2)
0x193: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: Push((int) 1)
0x197: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x198: PushEmpty()
0x199: Call2 0x4e1

0x19a: Pop(0)
0x19b: Push((int) 36960)
0x19c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x19e: PushEmpty(string)
0x19f: Stack[-1] = "Neutral" // @poff=89
0x1a0: Call2 0x17f

0x1a1: Pop(1)
0x1a2: Push((int) 535284)
0x1a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a4: Pop(1)
0x1a5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a6: Pop(0)
0x1a7: Push((int) 535285)
0x1a8: Push((int) 36962)
0x1a9: Push((int) 36961)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ab: Pop(3)
0x1ac: Push((int) 535292)
0x1ad: Push((int) -1)
0x1ae: Push((int) 36968)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b0: Pop(3)
0x1b1: Push((int) 535293)
0x1b2: Push((int) -1)
0x1b3: Push((int) 36969)
0x1b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b5: Pop(3)
0x1b6: Return(); Pop(0)

0x1b7: Push((int) 36962)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x17f

0x1bd: Pop(1)
0x1be: Push((int) 535286)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 535287)
0x1c4: Push((int) 36964)
0x1c5: Push((int) 36963)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 535291)
0x1c9: Push((int) -1)
0x1ca: Push((int) 36967)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 36964)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x17f

0x1d4: Pop(1)
0x1d5: Push((int) 535288)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 535289)
0x1db: Push((int) -1)
0x1dc: Push((int) 36965)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Push((int) 535290)
0x1e0: Push((int) -1)
0x1e1: Push((int) 36966)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e6: PushEmpty(bool)
0x1e7: Call2 0x527

0x1e8: Pop(0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: @ lshStopAnimation()
0x1eb: Pop(0)
0x1ec: GOTO 0x1ef

0x1ed: @ StopAnimation()
0x1ee: Pop(0)
0x1ef: Return(); Pop(0)

0x1f0: GOTO 0x196

0x1f1: Return(); Pop(0)

0x1f2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f4: PushEmpty(bool, object)
0x1f5: PushEmpty(object)
0x1f6: Call2 0x4e8

0x1f7: Stack[-1] = Stack[-2]
0x1f8: Pop(1)
0x1f9: Call2 0x43b

0x1fa: Pop(2)
0x1fb: PushEmpty(bool, object, float)
0x1fc: Stack[-12] = Stack[-2]
0x1fd: Stack[-1] = (float) 70.0
0x1fe: Call2 0x3e6

0x1ff: Pop(2)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-10] = (int) -2
0x203: Return(); Pop(8)

0x204: @ CreateDialog(Stack[-4])
0x205: Pop(0)
0x206: PushEmpty(int)
0x207: Call2 0x521

0x208: Pop(0)
0x209: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x20a: Pop(1)
0x20b: PushEmpty(int)
0x20c: Call2 0x51f

0x20d: Pop(0)
0x20e: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x20f: Pop(1)
0x210: PushEmpty(string)
0x211: Call2 0x523

0x212: Pop(0)
0x213: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x214: Pop(1)
0x215: PushEmpty(string)
0x216: Call2 0x525

0x217: Pop(0)
0x218: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x219: Pop(1)
0x21a: PushEmpty(int)
0x21b: Call2 0x529

0x21c: Pop(0)
0x21d: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x21e: Pop(1)
0x21f: Stack[-2] = (int) -1
0x220: @ IsOverrideActive(Stack[-3])
0x221: Pop(0)
0x222: Push(Stack[-3])
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-10] = (int) -2
0x225: Return(); Pop(8)

0x226: @ DoDialog(Stack[-4])
0x227: Pop(0)
0x228: PushEmpty(object, object)
0x229: Stack[-11] = Stack[-2]
0x22a: Stack[-6] = Stack[-1]
0x22b: Push(-2, 4); TaskCall(6)
0x22c: Call2 0x243

0x22d: Pop(-2, 4); TaskReturn
0x22e: Pop(2)
0x22f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x230: Pop(0)
0x231: Pop(0); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: @ sync()
0x234: Pop(0)
0x235: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x236: Pop(0)
0x237: GOTO 0x231

0x238: PushEmpty(object)
0x239: Stack[-10] = Stack[-1]
0x23a: Call2 0x42a

0x23b: Pop(1)
0x23c: @ StopDialog(Stack[-4])
0x23d: Pop(0)
0x23e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x23f: Pop(0)
0x240: Stack[-2] = Stack[-10]
0x241: Return(); Pop(8)

0x242: Stack[-4] = 0
0x243: PushEmpty()
0x244: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x245: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x246: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x247: Push((int) 1)
0x248: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral" // @poff=89
0x24b: Call2 0x27d

0x24c: Pop(1)
0x24d: Push((int) 540539)
0x24e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24f: Pop(1)
0x250: @@@ ClearReplies(); Obj=0 // @poff=116
0x251: Pop(0)
0x252: Push((int) 540540)
0x253: Push((int) -1)
0x254: Push((int) 42549)
0x255: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x256: Pop(3)
0x257: Push((int) 540799)
0x258: Push((int) -1)
0x259: Push((int) 42848)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: GOTO 0x25f

0x25d: Return(); Pop(0)

0x25e: GOTO 0x247

0x25f: PushEmpty(bool)
0x260: Call2 0x527

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x263: @ lshWaitForAnimEnd()
0x264: Pop(0)
0x265: Push( Stack[3 + Tasks[-1].StackPointer] )
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x26d

0x268: PushEmpty(string)
0x269: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26a: Call2 0x4c5

0x26b: Pop(1)
0x26c: GOTO 0x263

0x26d: GOTO 0x27c

0x26e: Push("all") // @poff=138
0x26f: Push("idle") // @poff=146
0x270: @ PlayAnimation(Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: @ WaitForAnimEnd()
0x273: Pop(0)
0x274: Push( Stack[3 + Tasks[-1].StackPointer] )
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x27c

0x277: Push("all") // @poff=138
0x278: Push("idle") // @poff=146
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: GOTO 0x272

0x27c: Return(); Pop(0)

0x27d: PushEmpty()
0x27e: PushEmpty(bool)
0x27f: Call2 0x527

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Return(); Pop(0)

0x284: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: Return(); Pop(0)

0x287: PushEmpty(string, bool)
0x288: Stack[-3] = Stack[-2]
0x289: Push("") // @poff=102
0x28a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-1] = (bool) 0
0x28d: GOTO 0x28f

0x28e: Stack[-1] = (bool) 1
0x28f: Call2 0x4cc

0x290: Pop(2)
0x291: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x292: Return(); Pop(0)

0x293: PushEmpty()
0x294: Push((int) 1)
0x295: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x296: PushEmpty()
0x297: Call2 0x4e1

0x298: Pop(0)
0x299: Push((int) 42548)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral" // @poff=89
0x29e: Call2 0x27d

0x29f: Pop(1)
0x2a0: Push((int) 540539)
0x2a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a2: Pop(1)
0x2a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a4: Pop(0)
0x2a5: Push((int) 540540)
0x2a6: Push((int) -1)
0x2a7: Push((int) 42549)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: Push((int) 540799)
0x2ab: Push((int) -1)
0x2ac: Push((int) 42848)
0x2ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b1: PushEmpty(bool)
0x2b2: Call2 0x527

0x2b3: Pop(0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b5: @ lshStopAnimation()
0x2b6: Pop(0)
0x2b7: GOTO 0x2ba

0x2b8: @ StopAnimation()
0x2b9: Pop(0)
0x2ba: Return(); Pop(0)

0x2bb: GOTO 0x294

0x2bc: Return(); Pop(0)

0x2bd: Push(GlobalVars[1])
0x2be: Stack[-1] = (bool) 0
0x2bf: GlobalVars[1] = Stack[-1]; Pop(1)
0x2c0: PushEmpty()
0x2c1: Call2 0x2c4

0x2c2: Pop(0)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x3e1

0x2c6: Pop(0)
0x2c7: Pop(1); Push((bool) Stack[-1] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c9: PushEmpty()
0x2ca: Push(-0, 0); TaskCall(0)
0x2cb: Call2 0x0

0x2cc: Pop(-0, 0); TaskReturn
0x2cd: Pop(0)
0x2ce: PushEmpty()
0x2cf: Call2 0x344

0x2d0: Pop(0)
0x2d1: @ GetDirection(Stack[-0]T)
0x2d2: Pop(0)
0x2d3: PushEmpty()
0x2d4: Call2 0x37a

0x2d5: Pop(0)
0x2d6: GOTO 0x2d3

0x2d7: Return(); Pop(0)

0x2d8: PushEmpty(object, object)
0x2d9: Push("player") // @poff=156
0x2da: @ FindActor(Stack[-2], Stack[-1])
0x2db: Pop(1)
0x2dc: Pop(0); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: Stack[-3] = (bool) 0
0x2df: Return(); Pop(2)

0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-3] = Stack[-1]
0x2e2: Call2 0x3d8

0x2e3: Stack[-2] = Stack[-5]
0x2e4: Pop(2)
0x2e5: Return(); Pop(2)

0x2e6: Stack[-1] = 0
0x2e7: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2e8: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2e9: @ RotateAsync(Stack[-2], Stack[-1])
0x2ea: Pop(2)
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty(object, bool, object, bool)
0x2ed: Push("player") // @poff=156
0x2ee: @ FindActor(Stack[-3], Stack[-1])
0x2ef: Pop(1)
0x2f0: Pop(0); Push((bool) Stack[-2] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-5] = (bool) 0
0x2f3: Return(); Pop(4)

0x2f4: PushEmpty(float, object)
0x2f5: Stack[-4] = Stack[-1]
0x2f6: Call2 0x3c6

0x2f7: Pop(1)
0x2f8: Push((float)90000.0)
0x2f9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-5] = (bool) 0
0x2fc: Return(); Pop(4)

0x2fd: @ CanSee(Stack[-1], Stack[-2])
0x2fe: Pop(0)
0x2ff: Stack[-1] = Stack[-5]
0x300: Return(); Pop(4)

0x301: Stack[-2] = 0
0x302: PushEmpty(float, float)
0x303: Push((int) 8)
0x304: Push((int) 16)
0x305: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(2)
0x307: Push((int) 10)
0x308: @ SetTimer(Stack[-1], Stack[-2])
0x309: Pop(1)
0x30a: Return(); Pop(2)

0x30b: Push((int) 10)
0x30c: @ KillTimer(Stack[-1])
0x30d: Pop(1)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Push((int) 10)
0x311: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x313: PushEmpty()
0x314: Call2 0x30b

0x315: Pop(0)
0x316: PushEmpty(bool)
0x317: Stack[-1] = (bool) 0
0x318: PushEmpty(bool)
0x319: Call2 0x3e1

0x31a: Pop(0)
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: PushEmpty(bool)
0x31d: Call2 0x2ec

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Stack[-1] = (bool) 1
0x321: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x322: PushEmpty(bool)
0x323: Call2 0x2d8

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x326: PushEmpty(bool, object)
0x327: PushEmpty(object)
0x328: Call2 0x4e8

0x329: Stack[-1] = Stack[-2]
0x32a: Pop(1)
0x32b: Call2 0x475

0x32c: Pop(2)
0x32d: GOTO 0x334

0x32e: PushEmpty()
0x32f: Call2 0x2e7

0x330: Pop(0)
0x331: PushEmpty()
0x332: Call2 0x302

0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: Call2 0x3c1

0x337: Pop(0)
0x338: PushEmpty()
0x339: Call2 0x30b

0x33a: Pop(0)
0x33b: @ lshStopSpeech()
0x33c: Pop(0)
0x33d: @ lshStopAnimation()
0x33e: Pop(0)
0x33f: @ StopAsync()
0x340: Pop(0)
0x341: @ Hold()
0x342: Pop(0)
0x343: Return(); Pop(0)

0x344: @ StopGroup0()
0x345: Pop(0)
0x346: PushEmpty()
0x347: Call2 0x30b

0x348: Pop(0)
0x349: PushEmpty(string)
0x34a: Stack[-1] = "Neutral" // @poff=89
0x34b: Call2 0x4c5

0x34c: Pop(1)
0x34d: PushEmpty()
0x34e: Call2 0x302

0x34f: Pop(0)
0x350: Return(); Pop(0)

0x351: PushEmpty()
0x352: Push(Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x354: PushEmpty()
0x355: Call2 0x302

0x356: Pop(0)
0x357: GOTO 0x35c

0x358: PushEmpty(string)
0x359: Stack[-1] = "Neutral" // @poff=89
0x35a: Call2 0x4c5

0x35b: Pop(1)
0x35c: Return(); Pop(0)

0x35d: PushEmpty(bool, bool)
0x35e: @ IsOverrideActive(Stack[-1])
0x35f: Pop(0)
0x360: Pop(0); Push((bool) Stack[-1] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x362: EventDisable(0)
0x363: PushEmpty()
0x364: Call2 0x3c1

0x365: Pop(0)
0x366: PushEmpty(bool, object)
0x367: Stack[-5] = Stack[-1]
0x368: Call2 0x3d8

0x369: Pop(2)
0x36a: EventEnable(0)
0x36b: PushEmpty(object)
0x36c: Stack[-4] = Stack[-1]
0x36d: Call2 0x53a

0x36e: Pop(1)
0x36f: PushEmpty(string)
0x370: Stack[-1] = "Neutral" // @poff=89
0x371: Call2 0x4c5

0x372: Pop(1)
0x373: PushEmpty()
0x374: Call2 0x30b

0x375: Pop(0)
0x376: PushEmpty()
0x377: Call2 0x302

0x378: Pop(0)
0x379: Return(); Pop(2)

0x37a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x37b: @ WaitForAnimEnd()
0x37c: Pop(0)
0x37d: PushEmpty(bool)
0x37e: Call2 0x3e1

0x37f: Pop(0)
0x380: Pop(1); Push((bool) Stack[-1] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Return(); Pop(12)

0x383: PushEmpty(int)
0x384: Call2 0x50e

0x385: Stack[-1] = Stack[-7]
0x386: Pop(1)
0x387: Stack[-5] = (int) 0
0x388: PushEmpty(bool)
0x389: Stack[-1] = (bool) 0
0x38a: Push((int) 5)
0x38b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38d: PushEmpty(bool)
0x38e: Call2 0x3e1

0x38f: Pop(0)
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: Stack[-1] = (bool) 1
0x392: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x393: Pop(0); Push((bool) Stack[-6] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x395: Push((int) 3)
0x396: @ Sleep(Stack[-1], Stack[-5])
0x397: Pop(1)
0x398: Pop(0); Push((bool) Stack[-4] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: GOTO 0x3bc

0x39b: GOTO 0x3b1

0x39c: @ irand(Stack[-3], Stack[-6])
0x39d: Pop(0)
0x39e: Push((int) 5)
0x39f: @ irand(Stack[-3], Stack[-1])
0x3a0: Pop(1)
0x3a1: Push((int) 0)
0x3a2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Stack[-3] = (int) 0
0x3a5: Push("all") // @poff=138
0x3a6: PushEmpty(string, int)
0x3a7: Stack[-6] = Stack[-1]
0x3a8: Call2 0x507

0x3a9: Pop(1)
0x3aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ab: Pop(2)
0x3ac: @ WaitForAnimEnd(Stack[-1])
0x3ad: Pop(0)
0x3ae: Pop(0); Push((bool) Stack[-1] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: GOTO 0x3bc

0x3b1: PushEmpty(bool)
0x3b2: Call2 0x3bf

0x3b3: Pop(0)
0x3b4: Pop(1); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: GOTO 0x3bc

0x3b7: @ ResetAAS()
0x3b8: Pop(0)
0x3b9: Push((int) 1)
0x3ba: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3bb: GOTO 0x388

0x3bc: @ ResetAAS()
0x3bd: Pop(0)
0x3be: Return(); Pop(12)

0x3bf: Stack[-1] = (bool) 1
0x3c0: Return(); Pop(0)

0x3c1: @ StopAnimation()
0x3c2: Pop(0)
0x3c3: @ StopGroup0()
0x3c4: Pop(0)
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3c7: @ GetPosition(Stack[-3])
0x3c8: Pop(0)
0x3c9: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x3ca: Pop(0)
0x3cb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3cc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3cd: Return(); Pop(6)

0x3ce: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3cf: @ GetPosition(Stack[-3])
0x3d0: Pop(0)
0x3d1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3d2: Push(CvectorIndex(Stack[-2], 0))
0x3d3: Push(CvectorIndex(Stack[-3], 2))
0x3d4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3d5: Pop(2)
0x3d6: Stack[-1] = Stack[-8]
0x3d7: Return(); Pop(6)

0x3d8: PushEmpty(cvector, cvector)
0x3d9: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x3da: Pop(0)
0x3db: PushEmpty(bool, cvector)
0x3dc: Stack[-3] = Stack[-1]
0x3dd: Call2 0x3ce

0x3de: Stack[-2] = Stack[-6]
0x3df: Pop(2)
0x3e0: Return(); Pop(2)

0x3e1: PushEmpty(bool, bool)
0x3e2: @ IsLoaded(Stack[-1])
0x3e3: Pop(0)
0x3e4: Stack[-1] = Stack[-3]
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3e7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x3e8: Pop(0)
0x3e9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x3ea: Pop(0)
0x3eb: Push(CvectorIndex(Stack[-8], 1))
0x3ec: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ed: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ee: @ GetPosition(Stack[-7])
0x3ef: Pop(0)
0x3f0: @ GetEyesHeight(Stack[-9])
0x3f1: Pop(0)
0x3f2: Push(CvectorIndex(Stack[-7], 1))
0x3f3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3f5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3f6: Push(CvectorIndex(Stack[-6], 1))
0x3f7: Stack[-1] = (int) 0
0x3f8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3f9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3fa: Pop(1); Push(Sqrt(Stack[-1]))
0x3fb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3fc: Stack[-5] = -Stack[-6]; Pop(0);
0x3fd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3fe: PushEmpty(cvector, cvector)
0x3ff: Push([0.0, 1.0, 0.0])
0x400: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x401: Call2 0x4ee

0x402: Pop(1)
0x403: Push((int) 25)
0x404: Pop(2); Push(Stack[-2] * Stack[-1]);
0x405: Pop(2); Push(Stack[-2] + Stack[-1]);
0x406: Push([0.0, 10.0, 0.0])
0x407: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x408: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x409: @ IsOverrideActive(Stack[-2])
0x40a: Pop(0)
0x40b: Push(Stack[-2])
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-21] = (bool) 0
0x40e: Return(); Pop(18)

0x40f: @ StopWorld()
0x410: Pop(0)
0x411: @ CameraTransit(Stack[-3], Stack[-5])
0x412: Pop(0)
0x413: Push(CvectorIndex(Stack[-4], 0))
0x414: Push(CvectorIndex(Stack[-5], 2))
0x415: @ Rotate(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: PushEmpty(bool)
0x418: Call2 0x527

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x424

0x41c: Push("head") // @poff=196
0x41d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x41e: Pop(1)
0x41f: Push(Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x421: Push("head") // @poff=196
0x422: @ LookAsyncCamera(Stack[-1])
0x423: Pop(1)
0x424: @ CameraWaitForPlayFinish()
0x425: Pop(0)
0x426: @ ResumeWorld()
0x427: Pop(0)
0x428: Stack[-21] = (bool) 1
0x429: Return(); Pop(18)

0x42a: PushEmpty(bool, bool)
0x42b: @ CameraSwitchToNormal()
0x42c: Pop(0)
0x42d: PushEmpty(bool)
0x42e: Call2 0x527

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: GOTO 0x43a

0x432: Push("head") // @poff=196
0x433: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x434: Pop(1)
0x435: Push(Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x437: Push("head") // @poff=196
0x438: @ UnlookAsync(Stack[-1])
0x439: Pop(1)
0x43a: Return(); Pop(2)

0x43b: PushEmpty(int, int, int, int)
0x43c: Push("voice_common") // @poff=206
0x43d: @ GetVariable(Stack[-1], Stack[-3])
0x43e: Pop(1)
0x43f: Push(Stack[-2])
0x440: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x441: PushEmpty(bool, object)
0x442: Stack[-7] = Stack[-1]
0x443: Call2 0x475

0x444: Pop(1)
0x445: Pop(1); Push((bool) Stack[-1] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x447: PushEmpty(bool, object)
0x448: Stack[-7] = Stack[-1]
0x449: Call2 0x49a

0x44a: Pop(1)
0x44b: Pop(1); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-6] = (bool) 0
0x44e: Return(); Pop(4)

0x44f: Push((int) 2)
0x450: @ irand(Stack[-2], Stack[-1])
0x451: Pop(1)
0x452: Push(Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x454: Push("voice_common") // @poff=206
0x455: Push((int) 1)
0x456: Pop(1); Push(Stack[-4] + Stack[-1]);
0x457: Push((int) 3)
0x458: Pop(2); Push(Stack[-2] % Stack[-1]);
0x459: @ SetVariable(Stack[-2], Stack[-1])
0x45a: Pop(2)
0x45b: GOTO 0x460

0x45c: Push("voice_common") // @poff=206
0x45d: Push((int) 0)
0x45e: @ SetVariable(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: GOTO 0x473

0x461: PushEmpty(bool, object)
0x462: Stack[-7] = Stack[-1]
0x463: Call2 0x49a

0x464: Pop(1)
0x465: Pop(1); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x467: PushEmpty(bool, object)
0x468: Stack[-7] = Stack[-1]
0x469: Call2 0x475

0x46a: Pop(1)
0x46b: Pop(1); Push((bool) Stack[-1] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-6] = (bool) 0
0x46e: Return(); Pop(4)

0x46f: Push("voice_common") // @poff=206
0x470: Push((int) 1)
0x471: @ SetVariable(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: Stack[-6] = (bool) 1
0x474: Return(); Pop(4)

0x475: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x476: Stack[-5] = "c" // @poff=232
0x477: Stack[-4] = (int) 0
0x478: Push((int) 1)
0x479: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x47a: Push((int) 1)
0x47b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x47c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x47e: Pop(1)
0x47f: Pop(0); Push((bool) Stack[-3] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x481: GOTO 0x485

0x482: Push((int) 1)
0x483: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x484: GOTO 0x478

0x485: Pop(0); Push((bool) Stack[-4] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-12] = (bool) 0
0x488: Return(); Pop(10)

0x489: Stack[-2] = (int) 0
0x48a: Push((int) 1)
0x48b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: @ irand(Stack[-2], Stack[-4])
0x48e: Pop(0)
0x48f: Push((int) 1)
0x490: Pop(1); Push(Stack[-3] + Stack[-1]);
0x491: Pop(1); Push(Stack[-6] + Stack[-1]);
0x492: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x493: Pop(1)
0x494: PushEmpty(bool, string)
0x495: Stack[-3] = Stack[-1]
0x496: Call2 0x4d2

0x497: Stack[-2] = Stack[-14]
0x498: Pop(2)
0x499: Return(); Pop(10)

0x49a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x49b: Push("d") // @poff=202
0x49c: PushEmpty(int)
0x49d: Call2 0x4f8

0x49e: Pop(0)
0x49f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a0: Push("m") // @poff=260
0x4a1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4a2: Stack[-4] = (int) 0
0x4a3: Push((int) 1)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a5: Push((int) 1)
0x4a6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4a7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a8: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x4a9: Pop(1)
0x4aa: Pop(0); Push((bool) Stack[-3] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: GOTO 0x4b0

0x4ad: Push((int) 1)
0x4ae: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4af: GOTO 0x4a3

0x4b0: Pop(0); Push((bool) Stack[-4] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-12] = (bool) 0
0x4b3: Return(); Pop(10)

0x4b4: Stack[-2] = (int) 0
0x4b5: Push((int) 1)
0x4b6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: @ irand(Stack[-2], Stack[-4])
0x4b9: Pop(0)
0x4ba: Push((int) 1)
0x4bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4bc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4bd: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x4be: Pop(1)
0x4bf: PushEmpty(bool, string)
0x4c0: Stack[-3] = Stack[-1]
0x4c1: Call2 0x4d2

0x4c2: Stack[-2] = Stack[-14]
0x4c3: Pop(2)
0x4c4: Return(); Pop(10)

0x4c5: PushEmpty(float, float, float, float)
0x4c6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4c7: Pop(0)
0x4c8: Push((bool) 0)
0x4c9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ca: Pop(1)
0x4cb: Return(); Pop(4)

0x4cc: PushEmpty(float, float, float, float)
0x4cd: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4ce: Pop(0)
0x4cf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4d0: Pop(0)
0x4d1: Return(); Pop(4)

0x4d2: PushEmpty(bool, bool)
0x4d3: PushEmpty(bool)
0x4d4: Call2 0x527

0x4d5: Pop(0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4d8: Pop(0)
0x4d9: Push(Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4db: @ lshPlaySpeech(Stack[-3])
0x4dc: Pop(0)
0x4dd: Stack[-4] = (bool) 1
0x4de: Return(); Pop(2)

0x4df: Stack[-4] = (bool) 0
0x4e0: Return(); Pop(2)

0x4e1: PushEmpty(bool)
0x4e2: Call2 0x527

0x4e3: Pop(0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: @ lshStopSpeech()
0x4e6: Pop(0)
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty(object, object)
0x4e9: @ self(Stack[-1])
0x4ea: Pop(0)
0x4eb: Stack[-1] = Stack[-3]
0x4ec: Return(); Pop(2)

0x4ed: Stack[-1] = 0
0x4ee: PushEmpty(float, float)
0x4ef: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4f0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4f1: Push((float)9.999999974752427e-07)
0x4f2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: Stack[-4] = [0.0, 0.0, 0.0]
0x4f5: Return(); Pop(2)

0x4f6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(float, float)
0x4f9: @ GetGameTime(Stack[-1])
0x4fa: Pop(0)
0x4fb: Push((int) 1)
0x4fc: PushEmpty(int)
0x4fd: Push((int) 24)
0x4fe: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4ff: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x500: Return(); Pop(2)

0x501: PushEmpty()
0x502: PushEmpty(int)
0x503: Call2 0x4f8

0x504: Pop(0)
0x505: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x506: Return(); Pop(0)

0x507: PushEmpty(string, string)
0x508: Stack[-1] = "idle" // @poff=146
0x509: Push(Stack[-3])
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x50c: Stack[-1] = Stack[-4]
0x50d: Return(); Pop(2)

0x50e: PushEmpty(int, bool, int, bool)
0x50f: Stack[-2] = (int) 0
0x510: Push("all") // @poff=138
0x511: PushEmpty(string, int)
0x512: Stack[-5] = Stack[-1]
0x513: Call2 0x507

0x514: Pop(1)
0x515: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x516: Pop(2)
0x517: Pop(0); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x519: GOTO 0x51d

0x51a: Push((int) 1)
0x51b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x51c: GOTO 0x510

0x51d: Stack[-2] = Stack[-5]
0x51e: Return(); Pop(4)

0x51f: Stack[-1] = (int) 515546
0x520: Return(); Pop(0)

0x521: Stack[-1] = (int) 502871
0x522: Return(); Pop(0)

0x523: Stack[-1] = "ui/NPC_Mishka.png" // @poff=264
0x524: Return(); Pop(0)

0x525: Stack[-1] = "ui/NPC_Mishka_b.png" // @poff=300
0x526: Return(); Pop(0)

0x527: Stack[-1] = (bool) 1
0x528: Return(); Pop(0)

0x529: PushEmpty(int, int)
0x52a: Push("branch") // @poff=340
0x52b: @ GetVariable(Stack[-1], Stack[-2])
0x52c: Pop(1)
0x52d: Push((int) 0)
0x52e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x530: Stack[-3] = (int) 1
0x531: Return(); Pop(2)

0x532: GOTO 0x538

0x533: Push((int) 1)
0x534: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-3] = (int) 2
0x537: Return(); Pop(2)

0x538: Stack[-3] = (int) 3
0x539: Return(); Pop(2)

0x53a: PushEmpty()
0x53b: Push(GlobalVars[1])
0x53c: Pop(1); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x53e: PushEmpty(int, object)
0x53f: Stack[-3] = Stack[-1]
0x540: Push(-2, 1); TaskCall(1)
0x541: Call2 0xd

0x542: Pop(-2, 1); TaskReturn
0x543: Pop(2)
0x544: Push(GlobalVars[1])
0x545: Stack[-1] = (bool) 1
0x546: GlobalVars[1] = Stack[-1]; Pop(1)
0x547: PushEmpty(bool, int)
0x548: Stack[-1] = (int) 12
0x549: Call2 0x501

0x54a: Pop(1)
0x54b: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54c: PushEmpty(int, object)
0x54d: Stack[-3] = Stack[-1]
0x54e: Push(-2, 1); TaskCall(3)
0x54f: Call2 0xef

0x550: Pop(-2, 1); TaskReturn
0x551: Pop(2)
0x552: Return(); Pop(0)

0x553: PushEmpty(int, object)
0x554: Stack[-3] = Stack[-1]
0x555: Push(-2, 1); TaskCall(5)
0x556: Call2 0x1f2

0x557: Pop(-2, 1); TaskReturn
0x558: Pop(2)
0x559: Return(); Pop(0)

