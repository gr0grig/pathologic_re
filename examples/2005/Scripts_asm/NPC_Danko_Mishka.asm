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
	W:ood6Mishka1
	W:KnowMishka
	W:d6q01
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004d006900730068006b0061002e0070006e0067000000750069002f004e00500043005f004d006900730068006b0061005f0062002e0070006e00670000006f006f00640036004d006900730068006b006100310000004b006e006f0077004d006900730068006b00610000006400360071003000310000006200720061006e00630068000000
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

RunOp = 0x520
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1bb Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2e2 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b6 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4f6 Vars = (int, int)
	GTASK_11 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x572 Vars = (int)
		EVENT_6 Op = 0x598 Vars = ()
		EVENT_5 Op = 0x5a7 Vars = ()
		EVENT_45 Op = 0x5b4 Vars = (bool)
		EVENT_0 Op = 0x5c0 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x644

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
0x11: Call2 0x74b

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x69e

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x649

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x789

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x787

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x78b

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x78d

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x7b5

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
0x55: Call2 0x68d

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
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 535284)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535285)
0x6e: Push((int) 36962)
0x6f: Push((int) 36961)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535292)
0x73: Push((int) -1)
0x74: Push((int) 36968)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535293)
0x78: Push((int) -1)
0x79: Push((int) 36969)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x78f

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x728

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
0x9f: Call2 0x78f

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
0xaf: Call2 0x72f

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x744

0xb8: Pop(0)
0xb9: Push((int) 36960)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535284)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535285)
0xc6: Push((int) 36962)
0xc7: Push((int) 36961)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535292)
0xcb: Push((int) -1)
0xcc: Push((int) 36968)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535293)
0xd0: Push((int) -1)
0xd1: Push((int) 36969)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36962)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535286)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535287)
0xe2: Push((int) 36964)
0xe3: Push((int) 36963)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535291)
0xe7: Push((int) -1)
0xe8: Push((int) 36967)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36964)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535288)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535289)
0xf9: Push((int) -1)
0xfa: Push((int) 36965)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535290)
0xfe: Push((int) -1)
0xff: Push((int) 36966)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x78f

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xb4

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object)
0x113: PushEmpty(object)
0x114: Call2 0x74b

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x69e

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x649

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x789

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x787

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x78b

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x78d

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x7b5

0x13a: Pop(0)
0x13b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x13c: Pop(1)
0x13d: Stack[-2] = (int) -1
0x13e: @ IsOverrideActive(Stack[-3])
0x13f: Pop(0)
0x140: Push(Stack[-3])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ DoDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(object, object)
0x147: Stack[-11] = Stack[-2]
0x148: Stack[-6] = Stack[-1]
0x149: Push(-2, 4); TaskCall(4)
0x14a: Call2 0x161

0x14b: Pop(-2, 4); TaskReturn
0x14c: Pop(2)
0x14d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: @ sync()
0x152: Pop(0)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: GOTO 0x14f

0x156: PushEmpty(object)
0x157: Stack[-10] = Stack[-1]
0x158: Call2 0x68d

0x159: Pop(1)
0x15a: @ StopDialog(Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x15d: Pop(0)
0x15e: Stack[-2] = Stack[-10]
0x15f: Return(); Pop(8)

0x160: Stack[-4] = 0
0x161: PushEmpty()
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x163: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x165: Push((int) 1)
0x166: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x797

0x16b: Pop(2)
0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0x1a5

0x16f: Pop(1)
0x170: Push((int) 500457)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 500458)
0x176: Push((int) 530)
0x177: Push((int) 527)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 500459)
0x17b: Push((int) 532)
0x17c: Push((int) 528)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Push((int) 500460)
0x180: Push((int) 530)
0x181: Push((int) 529)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x183: Pop(3)
0x184: GOTO 0x187

0x185: Return(); Pop(0)

0x186: GOTO 0x165

0x187: PushEmpty(bool)
0x188: Call2 0x78f

0x189: Pop(0)
0x18a: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18b: @ lshWaitForAnimEnd()
0x18c: Pop(0)
0x18d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: GOTO 0x195

0x190: PushEmpty(string)
0x191: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x192: Call2 0x728

0x193: Pop(1)
0x194: GOTO 0x18b

0x195: GOTO 0x1a4

0x196: Push("all") // @poff=138
0x197: Push("idle") // @poff=146
0x198: @ PlayAnimation(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: @ WaitForAnimEnd()
0x19b: Pop(0)
0x19c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: GOTO 0x1a4

0x19f: Push("all") // @poff=138
0x1a0: Push("idle") // @poff=146
0x1a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: GOTO 0x19a

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: PushEmpty(bool)
0x1a7: Call2 0x78f

0x1a8: Pop(0)
0x1a9: Pop(1); Push((bool) Stack[-1] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Return(); Pop(0)

0x1ac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Return(); Pop(0)

0x1af: PushEmpty(string, bool)
0x1b0: Stack[-3] = Stack[-2]
0x1b1: Push("") // @poff=102
0x1b2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b4: Stack[-1] = (bool) 0
0x1b5: GOTO 0x1b7

0x1b6: Stack[-1] = (bool) 1
0x1b7: Call2 0x72f

0x1b8: Pop(2)
0x1b9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: Push((int) 1)
0x1bd: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x1be: PushEmpty()
0x1bf: Call2 0x744

0x1c0: Pop(0)
0x1c1: Push((int) 526)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1c4: PushEmpty(object, object)
0x1c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call2 0x797

0x1c8: Pop(2)
0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Neutral" // @poff=89
0x1cb: Call2 0x1a5

0x1cc: Pop(1)
0x1cd: Push((int) 500457)
0x1ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cf: Pop(1)
0x1d0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d1: Pop(0)
0x1d2: Push((int) 500458)
0x1d3: Push((int) 530)
0x1d4: Push((int) 527)
0x1d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d6: Pop(3)
0x1d7: Push((int) 500459)
0x1d8: Push((int) 532)
0x1d9: Push((int) 528)
0x1da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1db: Pop(3)
0x1dc: Push((int) 500460)
0x1dd: Push((int) 530)
0x1de: Push((int) 529)
0x1df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 532)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral" // @poff=89
0x1e7: Call2 0x1a5

0x1e8: Pop(1)
0x1e9: Push((int) 500462)
0x1ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1eb: Pop(1)
0x1ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ed: Pop(0)
0x1ee: Push((int) 500466)
0x1ef: Push((int) 538)
0x1f0: Push((int) 536)
0x1f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f2: Pop(3)
0x1f3: Push((int) 500467)
0x1f4: Push((int) -1)
0x1f5: Push((int) 537)
0x1f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f7: Pop(3)
0x1f8: Return(); Pop(0)

0x1f9: Push((int) 538)
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral" // @poff=89
0x1fe: Call2 0x1a5

0x1ff: Pop(1)
0x200: Push((int) 500468)
0x201: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x202: Pop(1)
0x203: @@@ ClearReplies(); Obj=0 // @poff=116
0x204: Pop(0)
0x205: Push((int) 500470)
0x206: Push((int) -1)
0x207: Push((int) 540)
0x208: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x209: Pop(3)
0x20a: Push((int) 500471)
0x20b: Push((int) -1)
0x20c: Push((int) 541)
0x20d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 530)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Neutral" // @poff=89
0x215: Call2 0x1a5

0x216: Pop(1)
0x217: Push((int) 500461)
0x218: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x219: Pop(1)
0x21a: @@@ ClearReplies(); Obj=0 // @poff=116
0x21b: Pop(0)
0x21c: Push((int) 500463)
0x21d: Push((int) 535)
0x21e: Push((int) 533)
0x21f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x220: Pop(3)
0x221: Push((int) 500464)
0x222: Push((int) -1)
0x223: Push((int) 534)
0x224: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: Push((int) 535)
0x228: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Neutral" // @poff=89
0x22c: Call2 0x1a5

0x22d: Pop(1)
0x22e: Push((int) 500465)
0x22f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x230: Pop(1)
0x231: @@@ ClearReplies(); Obj=0 // @poff=116
0x232: Pop(0)
0x233: Push((int) 506269)
0x234: Push((int) -1)
0x235: Push((int) 6939)
0x236: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x23a: PushEmpty(bool)
0x23b: Call2 0x78f

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23e: @ lshStopAnimation()
0x23f: Pop(0)
0x240: GOTO 0x243

0x241: @ StopAnimation()
0x242: Pop(0)
0x243: Return(); Pop(0)

0x244: GOTO 0x1bc

0x245: Return(); Pop(0)

0x246: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x247: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x248: PushEmpty(bool, object)
0x249: PushEmpty(object)
0x24a: Call2 0x74b

0x24b: Stack[-1] = Stack[-2]
0x24c: Pop(1)
0x24d: Call2 0x69e

0x24e: Pop(2)
0x24f: PushEmpty(bool, object, float)
0x250: Stack[-12] = Stack[-2]
0x251: Stack[-1] = (float) 70.0
0x252: Call2 0x649

0x253: Pop(2)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-10] = (int) -2
0x257: Return(); Pop(8)

0x258: @ CreateDialog(Stack[-4])
0x259: Pop(0)
0x25a: PushEmpty(int)
0x25b: Call2 0x789

0x25c: Pop(0)
0x25d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25e: Pop(1)
0x25f: PushEmpty(int)
0x260: Call2 0x787

0x261: Pop(0)
0x262: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x263: Pop(1)
0x264: PushEmpty(string)
0x265: Call2 0x78b

0x266: Pop(0)
0x267: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x268: Pop(1)
0x269: PushEmpty(string)
0x26a: Call2 0x78d

0x26b: Pop(0)
0x26c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x26d: Pop(1)
0x26e: PushEmpty(int)
0x26f: Call2 0x7b5

0x270: Pop(0)
0x271: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x272: Pop(1)
0x273: Stack[-2] = (int) -1
0x274: @ IsOverrideActive(Stack[-3])
0x275: Pop(0)
0x276: Push(Stack[-3])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-10] = (int) -2
0x279: Return(); Pop(8)

0x27a: @ DoDialog(Stack[-4])
0x27b: Pop(0)
0x27c: PushEmpty(object, object)
0x27d: Stack[-11] = Stack[-2]
0x27e: Stack[-6] = Stack[-1]
0x27f: Push(-2, 4); TaskCall(6)
0x280: Call2 0x297

0x281: Pop(-2, 4); TaskReturn
0x282: Pop(2)
0x283: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x284: Pop(0)
0x285: Pop(0); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: @ sync()
0x288: Pop(0)
0x289: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x28a: Pop(0)
0x28b: GOTO 0x285

0x28c: PushEmpty(object)
0x28d: Stack[-10] = Stack[-1]
0x28e: Call2 0x68d

0x28f: Pop(1)
0x290: @ StopDialog(Stack[-4])
0x291: Pop(0)
0x292: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x293: Pop(0)
0x294: Stack[-2] = Stack[-10]
0x295: Return(); Pop(8)

0x296: Stack[-4] = 0
0x297: PushEmpty()
0x298: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x299: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x29a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29b: Push((int) 1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29d: PushEmpty(string)
0x29e: Stack[-1] = "Neutral" // @poff=89
0x29f: Call2 0x2cc

0x2a0: Pop(1)
0x2a1: Push((int) 510004)
0x2a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a3: Pop(1)
0x2a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a5: Pop(0)
0x2a6: Push((int) 510015)
0x2a7: Push((int) -1)
0x2a8: Push((int) 11037)
0x2a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2aa: Pop(3)
0x2ab: GOTO 0x2ae

0x2ac: Return(); Pop(0)

0x2ad: GOTO 0x29b

0x2ae: PushEmpty(bool)
0x2af: Call2 0x78f

0x2b0: Pop(0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b2: @ lshWaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2bc

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2b9: Call2 0x728

0x2ba: Pop(1)
0x2bb: GOTO 0x2b2

0x2bc: GOTO 0x2cb

0x2bd: Push("all") // @poff=138
0x2be: Push("idle") // @poff=146
0x2bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c0: Pop(2)
0x2c1: @ WaitForAnimEnd()
0x2c2: Pop(0)
0x2c3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: GOTO 0x2cb

0x2c6: Push("all") // @poff=138
0x2c7: Push("idle") // @poff=146
0x2c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: GOTO 0x2c1

0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: PushEmpty(bool)
0x2ce: Call2 0x78f

0x2cf: Pop(0)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: Return(); Pop(0)

0x2d3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: Return(); Pop(0)

0x2d6: PushEmpty(string, bool)
0x2d7: Stack[-3] = Stack[-2]
0x2d8: Push("") // @poff=102
0x2d9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2db: Stack[-1] = (bool) 0
0x2dc: GOTO 0x2de

0x2dd: Stack[-1] = (bool) 1
0x2de: Call2 0x72f

0x2df: Pop(2)
0x2e0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty()
0x2e3: Push((int) 1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2e5: PushEmpty()
0x2e6: Call2 0x744

0x2e7: Pop(0)
0x2e8: Push((int) 11026)
0x2e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2eb: PushEmpty(string)
0x2ec: Stack[-1] = "Neutral" // @poff=89
0x2ed: Call2 0x2cc

0x2ee: Pop(1)
0x2ef: Push((int) 510004)
0x2f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f1: Pop(1)
0x2f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f3: Pop(0)
0x2f4: Push((int) 510015)
0x2f5: Push((int) -1)
0x2f6: Push((int) 11037)
0x2f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2fb: PushEmpty(bool)
0x2fc: Call2 0x78f

0x2fd: Pop(0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2ff: @ lshStopAnimation()
0x300: Pop(0)
0x301: GOTO 0x304

0x302: @ StopAnimation()
0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: GOTO 0x2e3

0x306: Return(); Pop(0)

0x307: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x308: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x309: PushEmpty(bool, object)
0x30a: PushEmpty(object)
0x30b: Call2 0x74b

0x30c: Stack[-1] = Stack[-2]
0x30d: Pop(1)
0x30e: Call2 0x69e

0x30f: Pop(2)
0x310: PushEmpty(bool, object, float)
0x311: Stack[-12] = Stack[-2]
0x312: Stack[-1] = (float) 70.0
0x313: Call2 0x649

0x314: Pop(2)
0x315: Pop(1); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-10] = (int) -2
0x318: Return(); Pop(8)

0x319: @ CreateDialog(Stack[-4])
0x31a: Pop(0)
0x31b: PushEmpty(int)
0x31c: Call2 0x789

0x31d: Pop(0)
0x31e: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x31f: Pop(1)
0x320: PushEmpty(int)
0x321: Call2 0x787

0x322: Pop(0)
0x323: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x324: Pop(1)
0x325: PushEmpty(string)
0x326: Call2 0x78b

0x327: Pop(0)
0x328: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x329: Pop(1)
0x32a: PushEmpty(string)
0x32b: Call2 0x78d

0x32c: Pop(0)
0x32d: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x32e: Pop(1)
0x32f: PushEmpty(int)
0x330: Call2 0x7b5

0x331: Pop(0)
0x332: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x333: Pop(1)
0x334: Stack[-2] = (int) -1
0x335: @ IsOverrideActive(Stack[-3])
0x336: Pop(0)
0x337: Push(Stack[-3])
0x338: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x339: Stack[-10] = (int) -2
0x33a: Return(); Pop(8)

0x33b: @ DoDialog(Stack[-4])
0x33c: Pop(0)
0x33d: PushEmpty(object, object)
0x33e: Stack[-11] = Stack[-2]
0x33f: Stack[-6] = Stack[-1]
0x340: Push(-2, 4); TaskCall(8)
0x341: Call2 0x358

0x342: Pop(-2, 4); TaskReturn
0x343: Pop(2)
0x344: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x348: @ sync()
0x349: Pop(0)
0x34a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x34b: Pop(0)
0x34c: GOTO 0x346

0x34d: PushEmpty(object)
0x34e: Stack[-10] = Stack[-1]
0x34f: Call2 0x68d

0x350: Pop(1)
0x351: @ StopDialog(Stack[-4])
0x352: Pop(0)
0x353: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x354: Pop(0)
0x355: Stack[-2] = Stack[-10]
0x356: Return(); Pop(8)

0x357: Stack[-4] = 0
0x358: PushEmpty()
0x359: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x35a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x35b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x35c: Push((int) 1)
0x35d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Neutral" // @poff=89
0x360: Call2 0x3a0

0x361: Pop(1)
0x362: Push((int) 512800)
0x363: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x364: Pop(1)
0x365: @@@ ClearReplies(); Obj=0 // @poff=116
0x366: Pop(0)
0x367: PushEmpty(bool)
0x368: Stack[-1] = (bool) 0
0x369: PushEmpty(bool, object)
0x36a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36b: Call2 0x79d

0x36c: Pop(1)
0x36d: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36e: PushEmpty(bool, object)
0x36f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x370: Call2 0x7a9

0x371: Pop(1)
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: Stack[-1] = (bool) 1
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: Push((int) 512801)
0x376: Push((int) 14001)
0x377: Push((int) 14000)
0x378: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x379: Pop(3)
0x37a: Push((int) 512813)
0x37b: Push((int) -1)
0x37c: Push((int) 14013)
0x37d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37e: Pop(3)
0x37f: GOTO 0x382

0x380: Return(); Pop(0)

0x381: GOTO 0x35c

0x382: PushEmpty(bool)
0x383: Call2 0x78f

0x384: Pop(0)
0x385: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x386: @ lshWaitForAnimEnd()
0x387: Pop(0)
0x388: Push( Stack[3 + Tasks[-1].StackPointer] )
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: GOTO 0x390

0x38b: PushEmpty(string)
0x38c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x38d: Call2 0x728

0x38e: Pop(1)
0x38f: GOTO 0x386

0x390: GOTO 0x39f

0x391: Push("all") // @poff=138
0x392: Push("idle") // @poff=146
0x393: @ PlayAnimation(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: @ WaitForAnimEnd()
0x396: Pop(0)
0x397: Push( Stack[3 + Tasks[-1].StackPointer] )
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x39f

0x39a: Push("all") // @poff=138
0x39b: Push("idle") // @poff=146
0x39c: @ PlayAnimation(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: GOTO 0x395

0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: PushEmpty(bool)
0x3a2: Call2 0x78f

0x3a3: Pop(0)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Return(); Pop(0)

0x3a7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Return(); Pop(0)

0x3aa: PushEmpty(string, bool)
0x3ab: Stack[-3] = Stack[-2]
0x3ac: Push("") // @poff=102
0x3ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-1] = (bool) 0
0x3b0: GOTO 0x3b2

0x3b1: Stack[-1] = (bool) 1
0x3b2: Call2 0x72f

0x3b3: Pop(2)
0x3b4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty()
0x3b7: Push((int) 1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x3b9: PushEmpty()
0x3ba: Call2 0x744

0x3bb: Pop(0)
0x3bc: Push((int) 14011)
0x3bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: PushEmpty(object, object)
0x3c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c2: Call2 0x791

0x3c3: Pop(2)
0x3c4: Push((int) 13999)
0x3c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Neutral" // @poff=89
0x3c9: Call2 0x3a0

0x3ca: Pop(1)
0x3cb: Push((int) 512800)
0x3cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3cd: Pop(1)
0x3ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x3cf: Pop(0)
0x3d0: PushEmpty(bool)
0x3d1: Stack[-1] = (bool) 0
0x3d2: PushEmpty(bool, object)
0x3d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d4: Call2 0x79d

0x3d5: Pop(1)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d7: PushEmpty(bool, object)
0x3d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d9: Call2 0x7a9

0x3da: Pop(1)
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Stack[-1] = (bool) 1
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3de: Push((int) 512801)
0x3df: Push((int) 14001)
0x3e0: Push((int) 14000)
0x3e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e2: Pop(3)
0x3e3: Push((int) 512813)
0x3e4: Push((int) -1)
0x3e5: Push((int) 14013)
0x3e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 14001)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral" // @poff=89
0x3ee: Call2 0x3a0

0x3ef: Pop(1)
0x3f0: Push((int) 512802)
0x3f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f2: Pop(1)
0x3f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f4: Pop(0)
0x3f5: Push((int) 512803)
0x3f6: Push((int) 14003)
0x3f7: Push((int) 14002)
0x3f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 14003)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Neutral" // @poff=89
0x400: Call2 0x3a0

0x401: Pop(1)
0x402: Push((int) 512804)
0x403: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x404: Pop(1)
0x405: @@@ ClearReplies(); Obj=0 // @poff=116
0x406: Pop(0)
0x407: Push((int) 512805)
0x408: Push((int) 14005)
0x409: Push((int) 14004)
0x40a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40b: Pop(3)
0x40c: Push((int) 512808)
0x40d: Push((int) 14005)
0x40e: Push((int) 14007)
0x40f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Push((int) 14005)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Neutral" // @poff=89
0x417: Call2 0x3a0

0x418: Pop(1)
0x419: Push((int) 512806)
0x41a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x41b: Pop(1)
0x41c: @@@ ClearReplies(); Obj=0 // @poff=116
0x41d: Pop(0)
0x41e: Push((int) 512807)
0x41f: Push((int) 14008)
0x420: Push((int) 14006)
0x421: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 14008)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral" // @poff=89
0x429: Call2 0x3a0

0x42a: Pop(1)
0x42b: Push((int) 512809)
0x42c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42d: Pop(1)
0x42e: @@@ ClearReplies(); Obj=0 // @poff=116
0x42f: Pop(0)
0x430: Push((int) 512810)
0x431: Push((int) 14010)
0x432: Push((int) 14009)
0x433: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 14010)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Neutral" // @poff=89
0x43b: Call2 0x3a0

0x43c: Pop(1)
0x43d: Push((int) 512811)
0x43e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43f: Pop(1)
0x440: @@@ ClearReplies(); Obj=0 // @poff=116
0x441: Pop(0)
0x442: Push((int) 512812)
0x443: Push((int) -1)
0x444: Push((int) 14011)
0x445: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x449: PushEmpty(bool)
0x44a: Call2 0x78f

0x44b: Pop(0)
0x44c: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44d: @ lshStopAnimation()
0x44e: Pop(0)
0x44f: GOTO 0x452

0x450: @ StopAnimation()
0x451: Pop(0)
0x452: Return(); Pop(0)

0x453: GOTO 0x3b7

0x454: Return(); Pop(0)

0x455: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x456: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x457: PushEmpty(bool, object)
0x458: PushEmpty(object)
0x459: Call2 0x74b

0x45a: Stack[-1] = Stack[-2]
0x45b: Pop(1)
0x45c: Call2 0x69e

0x45d: Pop(2)
0x45e: PushEmpty(bool, object, float)
0x45f: Stack[-12] = Stack[-2]
0x460: Stack[-1] = (float) 70.0
0x461: Call2 0x649

0x462: Pop(2)
0x463: Pop(1); Push((bool) Stack[-1] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-10] = (int) -2
0x466: Return(); Pop(8)

0x467: @ CreateDialog(Stack[-4])
0x468: Pop(0)
0x469: PushEmpty(int)
0x46a: Call2 0x789

0x46b: Pop(0)
0x46c: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x46d: Pop(1)
0x46e: PushEmpty(int)
0x46f: Call2 0x787

0x470: Pop(0)
0x471: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x472: Pop(1)
0x473: PushEmpty(string)
0x474: Call2 0x78b

0x475: Pop(0)
0x476: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x477: Pop(1)
0x478: PushEmpty(string)
0x479: Call2 0x78d

0x47a: Pop(0)
0x47b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x47c: Pop(1)
0x47d: PushEmpty(int)
0x47e: Call2 0x7b5

0x47f: Pop(0)
0x480: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x481: Pop(1)
0x482: Stack[-2] = (int) -1
0x483: @ IsOverrideActive(Stack[-3])
0x484: Pop(0)
0x485: Push(Stack[-3])
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-10] = (int) -2
0x488: Return(); Pop(8)

0x489: @ DoDialog(Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(object, object)
0x48c: Stack[-11] = Stack[-2]
0x48d: Stack[-6] = Stack[-1]
0x48e: Push(-2, 4); TaskCall(10)
0x48f: Call2 0x4a6

0x490: Pop(-2, 4); TaskReturn
0x491: Pop(2)
0x492: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x493: Pop(0)
0x494: Pop(0); Push((bool) Stack[-1] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: @ sync()
0x497: Pop(0)
0x498: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x499: Pop(0)
0x49a: GOTO 0x494

0x49b: PushEmpty(object)
0x49c: Stack[-10] = Stack[-1]
0x49d: Call2 0x68d

0x49e: Pop(1)
0x49f: @ StopDialog(Stack[-4])
0x4a0: Pop(0)
0x4a1: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4a2: Pop(0)
0x4a3: Stack[-2] = Stack[-10]
0x4a4: Return(); Pop(8)

0x4a5: Stack[-4] = 0
0x4a6: PushEmpty()
0x4a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4a8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4a9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4aa: Push((int) 1)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral" // @poff=89
0x4ae: Call2 0x4e0

0x4af: Pop(1)
0x4b0: Push((int) 540548)
0x4b1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4b2: Pop(1)
0x4b3: @@@ ClearReplies(); Obj=0 // @poff=116
0x4b4: Pop(0)
0x4b5: Push((int) 540549)
0x4b6: Push((int) -1)
0x4b7: Push((int) 42558)
0x4b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b9: Pop(3)
0x4ba: Push((int) 540797)
0x4bb: Push((int) -1)
0x4bc: Push((int) 42846)
0x4bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4be: Pop(3)
0x4bf: GOTO 0x4c2

0x4c0: Return(); Pop(0)

0x4c1: GOTO 0x4aa

0x4c2: PushEmpty(bool)
0x4c3: Call2 0x78f

0x4c4: Pop(0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4c6: @ lshWaitForAnimEnd()
0x4c7: Pop(0)
0x4c8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: GOTO 0x4d0

0x4cb: PushEmpty(string)
0x4cc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4cd: Call2 0x728

0x4ce: Pop(1)
0x4cf: GOTO 0x4c6

0x4d0: GOTO 0x4df

0x4d1: Push("all") // @poff=138
0x4d2: Push("idle") // @poff=146
0x4d3: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: @ WaitForAnimEnd()
0x4d6: Pop(0)
0x4d7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: GOTO 0x4df

0x4da: Push("all") // @poff=138
0x4db: Push("idle") // @poff=146
0x4dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x4dd: Pop(2)
0x4de: GOTO 0x4d5

0x4df: Return(); Pop(0)

0x4e0: PushEmpty()
0x4e1: PushEmpty(bool)
0x4e2: Call2 0x78f

0x4e3: Pop(0)
0x4e4: Pop(1); Push((bool) Stack[-1] == 0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e6: Return(); Pop(0)

0x4e7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Return(); Pop(0)

0x4ea: PushEmpty(string, bool)
0x4eb: Stack[-3] = Stack[-2]
0x4ec: Push("") // @poff=102
0x4ed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ef: Stack[-1] = (bool) 0
0x4f0: GOTO 0x4f2

0x4f1: Stack[-1] = (bool) 1
0x4f2: Call2 0x72f

0x4f3: Pop(2)
0x4f4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty()
0x4f7: Push((int) 1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x4f9: PushEmpty()
0x4fa: Call2 0x744

0x4fb: Pop(0)
0x4fc: Push((int) 42557)
0x4fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x4ff: PushEmpty(string)
0x500: Stack[-1] = "Neutral" // @poff=89
0x501: Call2 0x4e0

0x502: Pop(1)
0x503: Push((int) 540548)
0x504: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x505: Pop(1)
0x506: @@@ ClearReplies(); Obj=0 // @poff=116
0x507: Pop(0)
0x508: Push((int) 540549)
0x509: Push((int) -1)
0x50a: Push((int) 42558)
0x50b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x50c: Pop(3)
0x50d: Push((int) 540797)
0x50e: Push((int) -1)
0x50f: Push((int) 42846)
0x510: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x511: Pop(3)
0x512: Return(); Pop(0)

0x513: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x514: PushEmpty(bool)
0x515: Call2 0x78f

0x516: Pop(0)
0x517: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x518: @ lshStopAnimation()
0x519: Pop(0)
0x51a: GOTO 0x51d

0x51b: @ StopAnimation()
0x51c: Pop(0)
0x51d: Return(); Pop(0)

0x51e: GOTO 0x4f7

0x51f: Return(); Pop(0)

0x520: Push(GlobalVars[1])
0x521: Stack[-1] = (bool) 0
0x522: GlobalVars[1] = Stack[-1]; Pop(1)
0x523: PushEmpty()
0x524: Call2 0x527

0x525: Pop(0)
0x526: Return(); Pop(0)

0x527: PushEmpty(bool)
0x528: Call2 0x644

0x529: Pop(0)
0x52a: Pop(1); Push((bool) Stack[-1] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52c: PushEmpty()
0x52d: Push(-0, 0); TaskCall(0)
0x52e: Call2 0x0

0x52f: Pop(-0, 0); TaskReturn
0x530: Pop(0)
0x531: PushEmpty()
0x532: Call2 0x5a7

0x533: Pop(0)
0x534: @ GetDirection(Stack[-0]T)
0x535: Pop(0)
0x536: PushEmpty()
0x537: Call2 0x5dd

0x538: Pop(0)
0x539: GOTO 0x536

0x53a: Return(); Pop(0)

0x53b: PushEmpty(object, object)
0x53c: Push("player") // @poff=156
0x53d: @ FindActor(Stack[-2], Stack[-1])
0x53e: Pop(1)
0x53f: Pop(0); Push((bool) Stack[-1] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-3] = (bool) 0
0x542: Return(); Pop(2)

0x543: PushEmpty(bool, object)
0x544: Stack[-3] = Stack[-1]
0x545: Call2 0x63b

0x546: Stack[-2] = Stack[-5]
0x547: Pop(2)
0x548: Return(); Pop(2)

0x549: Stack[-1] = 0
0x54a: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x54b: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x54c: @ RotateAsync(Stack[-2], Stack[-1])
0x54d: Pop(2)
0x54e: Return(); Pop(0)

0x54f: PushEmpty(object, bool, object, bool)
0x550: Push("player") // @poff=156
0x551: @ FindActor(Stack[-3], Stack[-1])
0x552: Pop(1)
0x553: Pop(0); Push((bool) Stack[-2] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-5] = (bool) 0
0x556: Return(); Pop(4)

0x557: PushEmpty(float, object)
0x558: Stack[-4] = Stack[-1]
0x559: Call2 0x629

0x55a: Pop(1)
0x55b: Push((float)90000.0)
0x55c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-5] = (bool) 0
0x55f: Return(); Pop(4)

0x560: @ CanSee(Stack[-1], Stack[-2])
0x561: Pop(0)
0x562: Stack[-1] = Stack[-5]
0x563: Return(); Pop(4)

0x564: Stack[-2] = 0
0x565: PushEmpty(float, float)
0x566: Push((int) 8)
0x567: Push((int) 16)
0x568: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(2)
0x56a: Push((int) 10)
0x56b: @ SetTimer(Stack[-1], Stack[-2])
0x56c: Pop(1)
0x56d: Return(); Pop(2)

0x56e: Push((int) 10)
0x56f: @ KillTimer(Stack[-1])
0x570: Pop(1)
0x571: Return(); Pop(0)

0x572: PushEmpty()
0x573: Push((int) 10)
0x574: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x576: PushEmpty()
0x577: Call2 0x56e

0x578: Pop(0)
0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 0
0x57b: PushEmpty(bool)
0x57c: Call2 0x644

0x57d: Pop(0)
0x57e: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57f: PushEmpty(bool)
0x580: Call2 0x54f

0x581: Pop(0)
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: Stack[-1] = (bool) 1
0x584: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x585: PushEmpty(bool)
0x586: Call2 0x53b

0x587: Pop(0)
0x588: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x589: PushEmpty(bool, object)
0x58a: PushEmpty(object)
0x58b: Call2 0x74b

0x58c: Stack[-1] = Stack[-2]
0x58d: Pop(1)
0x58e: Call2 0x6d8

0x58f: Pop(2)
0x590: GOTO 0x597

0x591: PushEmpty()
0x592: Call2 0x54a

0x593: Pop(0)
0x594: PushEmpty()
0x595: Call2 0x565

0x596: Pop(0)
0x597: Return(); Pop(0)

0x598: PushEmpty()
0x599: Call2 0x624

0x59a: Pop(0)
0x59b: PushEmpty()
0x59c: Call2 0x56e

0x59d: Pop(0)
0x59e: @ lshStopSpeech()
0x59f: Pop(0)
0x5a0: @ lshStopAnimation()
0x5a1: Pop(0)
0x5a2: @ StopAsync()
0x5a3: Pop(0)
0x5a4: @ Hold()
0x5a5: Pop(0)
0x5a6: Return(); Pop(0)

0x5a7: @ StopGroup0()
0x5a8: Pop(0)
0x5a9: PushEmpty()
0x5aa: Call2 0x56e

0x5ab: Pop(0)
0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Neutral" // @poff=89
0x5ae: Call2 0x728

0x5af: Pop(1)
0x5b0: PushEmpty()
0x5b1: Call2 0x565

0x5b2: Pop(0)
0x5b3: Return(); Pop(0)

0x5b4: PushEmpty()
0x5b5: Push(Stack[-1])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b7: PushEmpty()
0x5b8: Call2 0x565

0x5b9: Pop(0)
0x5ba: GOTO 0x5bf

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Neutral" // @poff=89
0x5bd: Call2 0x728

0x5be: Pop(1)
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty(bool, bool)
0x5c1: @ IsOverrideActive(Stack[-1])
0x5c2: Pop(0)
0x5c3: Pop(0); Push((bool) Stack[-1] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5c5: EventDisable(0)
0x5c6: PushEmpty()
0x5c7: Call2 0x624

0x5c8: Pop(0)
0x5c9: PushEmpty(bool, object)
0x5ca: Stack[-5] = Stack[-1]
0x5cb: Call2 0x63b

0x5cc: Pop(2)
0x5cd: EventEnable(0)
0x5ce: PushEmpty(object)
0x5cf: Stack[-4] = Stack[-1]
0x5d0: Call2 0x7c6

0x5d1: Pop(1)
0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral" // @poff=89
0x5d4: Call2 0x728

0x5d5: Pop(1)
0x5d6: PushEmpty()
0x5d7: Call2 0x56e

0x5d8: Pop(0)
0x5d9: PushEmpty()
0x5da: Call2 0x565

0x5db: Pop(0)
0x5dc: Return(); Pop(2)

0x5dd: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x5de: @ WaitForAnimEnd()
0x5df: Pop(0)
0x5e0: PushEmpty(bool)
0x5e1: Call2 0x644

0x5e2: Pop(0)
0x5e3: Pop(1); Push((bool) Stack[-1] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: Return(); Pop(12)

0x5e6: PushEmpty(int)
0x5e7: Call2 0x776

0x5e8: Stack[-1] = Stack[-7]
0x5e9: Pop(1)
0x5ea: Stack[-5] = (int) 0
0x5eb: PushEmpty(bool)
0x5ec: Stack[-1] = (bool) 0
0x5ed: Push((int) 5)
0x5ee: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f0: PushEmpty(bool)
0x5f1: Call2 0x644

0x5f2: Pop(0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: Stack[-1] = (bool) 1
0x5f5: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x5f6: Pop(0); Push((bool) Stack[-6] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f8: Push((int) 3)
0x5f9: @ Sleep(Stack[-1], Stack[-5])
0x5fa: Pop(1)
0x5fb: Pop(0); Push((bool) Stack[-4] == 0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fd: GOTO 0x61f

0x5fe: GOTO 0x614

0x5ff: @ irand(Stack[-3], Stack[-6])
0x600: Pop(0)
0x601: Push((int) 5)
0x602: @ irand(Stack[-3], Stack[-1])
0x603: Pop(1)
0x604: Push((int) 0)
0x605: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x607: Stack[-3] = (int) 0
0x608: Push("all") // @poff=138
0x609: PushEmpty(string, int)
0x60a: Stack[-6] = Stack[-1]
0x60b: Call2 0x76f

0x60c: Pop(1)
0x60d: @ PlayAnimation(Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: @ WaitForAnimEnd(Stack[-1])
0x610: Pop(0)
0x611: Pop(0); Push((bool) Stack[-1] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: GOTO 0x61f

0x614: PushEmpty(bool)
0x615: Call2 0x622

0x616: Pop(0)
0x617: Pop(1); Push((bool) Stack[-1] == 0)
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: GOTO 0x61f

0x61a: @ ResetAAS()
0x61b: Pop(0)
0x61c: Push((int) 1)
0x61d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x61e: GOTO 0x5eb

0x61f: @ ResetAAS()
0x620: Pop(0)
0x621: Return(); Pop(12)

0x622: Stack[-1] = (bool) 1
0x623: Return(); Pop(0)

0x624: @ StopAnimation()
0x625: Pop(0)
0x626: @ StopGroup0()
0x627: Pop(0)
0x628: Return(); Pop(0)

0x629: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x62a: @ GetPosition(Stack[-3])
0x62b: Pop(0)
0x62c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x62d: Pop(0)
0x62e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x62f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x630: Return(); Pop(6)

0x631: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x632: @ GetPosition(Stack[-3])
0x633: Pop(0)
0x634: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x635: Push(CvectorIndex(Stack[-2], 0))
0x636: Push(CvectorIndex(Stack[-3], 2))
0x637: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x638: Pop(2)
0x639: Stack[-1] = Stack[-8]
0x63a: Return(); Pop(6)

0x63b: PushEmpty(cvector, cvector)
0x63c: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x63d: Pop(0)
0x63e: PushEmpty(bool, cvector)
0x63f: Stack[-3] = Stack[-1]
0x640: Call2 0x631

0x641: Stack[-2] = Stack[-6]
0x642: Pop(2)
0x643: Return(); Pop(2)

0x644: PushEmpty(bool, bool)
0x645: @ IsLoaded(Stack[-1])
0x646: Pop(0)
0x647: Stack[-1] = Stack[-3]
0x648: Return(); Pop(2)

0x649: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x64a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x64b: Pop(0)
0x64c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x64d: Pop(0)
0x64e: Push(CvectorIndex(Stack[-8], 1))
0x64f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x650: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x651: @ GetPosition(Stack[-7])
0x652: Pop(0)
0x653: @ GetEyesHeight(Stack[-9])
0x654: Pop(0)
0x655: Push(CvectorIndex(Stack[-7], 1))
0x656: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x657: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x658: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x659: Push(CvectorIndex(Stack[-6], 1))
0x65a: Stack[-1] = (int) 0
0x65b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x65c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x65d: Pop(1); Push(Sqrt(Stack[-1]))
0x65e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x65f: Stack[-5] = -Stack[-6]; Pop(0);
0x660: Pop(0); Push(Stack[-6] * Stack[-19]);
0x661: PushEmpty(cvector, cvector)
0x662: Push([0.0, 1.0, 0.0])
0x663: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x664: Call2 0x751

0x665: Pop(1)
0x666: Push((int) 25)
0x667: Pop(2); Push(Stack[-2] * Stack[-1]);
0x668: Pop(2); Push(Stack[-2] + Stack[-1]);
0x669: Push([0.0, 10.0, 0.0])
0x66a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x66b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x66c: @ IsOverrideActive(Stack[-2])
0x66d: Pop(0)
0x66e: Push(Stack[-2])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-21] = (bool) 0
0x671: Return(); Pop(18)

0x672: @ StopWorld()
0x673: Pop(0)
0x674: @ CameraTransit(Stack[-3], Stack[-5])
0x675: Pop(0)
0x676: Push(CvectorIndex(Stack[-4], 0))
0x677: Push(CvectorIndex(Stack[-5], 2))
0x678: @ Rotate(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: PushEmpty(bool)
0x67b: Call2 0x78f

0x67c: Pop(0)
0x67d: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67e: GOTO 0x687

0x67f: Push("head") // @poff=196
0x680: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x681: Pop(1)
0x682: Push(Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x684: Push("head") // @poff=196
0x685: @ LookAsyncCamera(Stack[-1])
0x686: Pop(1)
0x687: @ CameraWaitForPlayFinish()
0x688: Pop(0)
0x689: @ ResumeWorld()
0x68a: Pop(0)
0x68b: Stack[-21] = (bool) 1
0x68c: Return(); Pop(18)

0x68d: PushEmpty(bool, bool)
0x68e: @ CameraSwitchToNormal()
0x68f: Pop(0)
0x690: PushEmpty(bool)
0x691: Call2 0x78f

0x692: Pop(0)
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: GOTO 0x69d

0x695: Push("head") // @poff=196
0x696: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x697: Pop(1)
0x698: Push(Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69a: Push("head") // @poff=196
0x69b: @ UnlookAsync(Stack[-1])
0x69c: Pop(1)
0x69d: Return(); Pop(2)

0x69e: PushEmpty(int, int, int, int)
0x69f: Push("voice_common") // @poff=206
0x6a0: @ GetVariable(Stack[-1], Stack[-3])
0x6a1: Pop(1)
0x6a2: Push(Stack[-2])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6a4: PushEmpty(bool, object)
0x6a5: Stack[-7] = Stack[-1]
0x6a6: Call2 0x6d8

0x6a7: Pop(1)
0x6a8: Pop(1); Push((bool) Stack[-1] == 0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6aa: PushEmpty(bool, object)
0x6ab: Stack[-7] = Stack[-1]
0x6ac: Call2 0x6fd

0x6ad: Pop(1)
0x6ae: Pop(1); Push((bool) Stack[-1] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-6] = (bool) 0
0x6b1: Return(); Pop(4)

0x6b2: Push((int) 2)
0x6b3: @ irand(Stack[-2], Stack[-1])
0x6b4: Pop(1)
0x6b5: Push(Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6b7: Push("voice_common") // @poff=206
0x6b8: Push((int) 1)
0x6b9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6ba: Push((int) 3)
0x6bb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x6bc: @ SetVariable(Stack[-2], Stack[-1])
0x6bd: Pop(2)
0x6be: GOTO 0x6c3

0x6bf: Push("voice_common") // @poff=206
0x6c0: Push((int) 0)
0x6c1: @ SetVariable(Stack[-2], Stack[-1])
0x6c2: Pop(2)
0x6c3: GOTO 0x6d6

0x6c4: PushEmpty(bool, object)
0x6c5: Stack[-7] = Stack[-1]
0x6c6: Call2 0x6fd

0x6c7: Pop(1)
0x6c8: Pop(1); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6ca: PushEmpty(bool, object)
0x6cb: Stack[-7] = Stack[-1]
0x6cc: Call2 0x6d8

0x6cd: Pop(1)
0x6ce: Pop(1); Push((bool) Stack[-1] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-6] = (bool) 0
0x6d1: Return(); Pop(4)

0x6d2: Push("voice_common") // @poff=206
0x6d3: Push((int) 1)
0x6d4: @ SetVariable(Stack[-2], Stack[-1])
0x6d5: Pop(2)
0x6d6: Stack[-6] = (bool) 1
0x6d7: Return(); Pop(4)

0x6d8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6d9: Stack[-5] = "c" // @poff=232
0x6da: Stack[-4] = (int) 0
0x6db: Push((int) 1)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6dd: Push((int) 1)
0x6de: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6df: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6e0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x6e1: Pop(1)
0x6e2: Pop(0); Push((bool) Stack[-3] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: GOTO 0x6e8

0x6e5: Push((int) 1)
0x6e6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6e7: GOTO 0x6db

0x6e8: Pop(0); Push((bool) Stack[-4] == 0)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6ea: Stack[-12] = (bool) 0
0x6eb: Return(); Pop(10)

0x6ec: Stack[-2] = (int) 0
0x6ed: Push((int) 1)
0x6ee: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f0: @ irand(Stack[-2], Stack[-4])
0x6f1: Pop(0)
0x6f2: Push((int) 1)
0x6f3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6f5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x6f6: Pop(1)
0x6f7: PushEmpty(bool, string)
0x6f8: Stack[-3] = Stack[-1]
0x6f9: Call2 0x735

0x6fa: Stack[-2] = Stack[-14]
0x6fb: Pop(2)
0x6fc: Return(); Pop(10)

0x6fd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6fe: Push("d") // @poff=202
0x6ff: PushEmpty(int)
0x700: Call2 0x760

0x701: Pop(0)
0x702: Pop(2); Push(Stack[-2] + Stack[-1]);
0x703: Push("m") // @poff=260
0x704: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x705: Stack[-4] = (int) 0
0x706: Push((int) 1)
0x707: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x708: Push((int) 1)
0x709: Pop(1); Push(Stack[-5] + Stack[-1]);
0x70a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x70b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x70c: Pop(1)
0x70d: Pop(0); Push((bool) Stack[-3] == 0)
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: GOTO 0x713

0x710: Push((int) 1)
0x711: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x712: GOTO 0x706

0x713: Pop(0); Push((bool) Stack[-4] == 0)
0x714: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x715: Stack[-12] = (bool) 0
0x716: Return(); Pop(10)

0x717: Stack[-2] = (int) 0
0x718: Push((int) 1)
0x719: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: @ irand(Stack[-2], Stack[-4])
0x71c: Pop(0)
0x71d: Push((int) 1)
0x71e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x71f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x720: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x721: Pop(1)
0x722: PushEmpty(bool, string)
0x723: Stack[-3] = Stack[-1]
0x724: Call2 0x735

0x725: Stack[-2] = Stack[-14]
0x726: Pop(2)
0x727: Return(); Pop(10)

0x728: PushEmpty(float, float, float, float)
0x729: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x72a: Pop(0)
0x72b: Push((bool) 0)
0x72c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(1)
0x72e: Return(); Pop(4)

0x72f: PushEmpty(float, float, float, float)
0x730: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x731: Pop(0)
0x732: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x733: Pop(0)
0x734: Return(); Pop(4)

0x735: PushEmpty(bool, bool)
0x736: PushEmpty(bool)
0x737: Call2 0x78f

0x738: Pop(0)
0x739: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x73b: Pop(0)
0x73c: Push(Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73e: @ lshPlaySpeech(Stack[-3])
0x73f: Pop(0)
0x740: Stack[-4] = (bool) 1
0x741: Return(); Pop(2)

0x742: Stack[-4] = (bool) 0
0x743: Return(); Pop(2)

0x744: PushEmpty(bool)
0x745: Call2 0x78f

0x746: Pop(0)
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: @ lshStopSpeech()
0x749: Pop(0)
0x74a: Return(); Pop(0)

0x74b: PushEmpty(object, object)
0x74c: @ self(Stack[-1])
0x74d: Pop(0)
0x74e: Stack[-1] = Stack[-3]
0x74f: Return(); Pop(2)

0x750: Stack[-1] = 0
0x751: PushEmpty(float, float)
0x752: Pop(0); Push(Stack[-3] | Stack[-3]);
0x753: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x754: Push((float)9.999999974752427e-07)
0x755: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-4] = [0.0, 0.0, 0.0]
0x758: Return(); Pop(2)

0x759: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x75a: Return(); Pop(2)

0x75b: PushEmpty(int, int)
0x75c: @ GetVariable(Stack[-3], Stack[-1])
0x75d: Pop(0)
0x75e: Stack[-1] = Stack[-4]
0x75f: Return(); Pop(2)

0x760: PushEmpty(float, float)
0x761: @ GetGameTime(Stack[-1])
0x762: Pop(0)
0x763: Push((int) 1)
0x764: PushEmpty(int)
0x765: Push((int) 24)
0x766: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x767: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x768: Return(); Pop(2)

0x769: PushEmpty()
0x76a: PushEmpty(int)
0x76b: Call2 0x760

0x76c: Pop(0)
0x76d: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x76e: Return(); Pop(0)

0x76f: PushEmpty(string, string)
0x770: Stack[-1] = "idle" // @poff=146
0x771: Push(Stack[-3])
0x772: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x773: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x774: Stack[-1] = Stack[-4]
0x775: Return(); Pop(2)

0x776: PushEmpty(int, bool, int, bool)
0x777: Stack[-2] = (int) 0
0x778: Push("all") // @poff=138
0x779: PushEmpty(string, int)
0x77a: Stack[-5] = Stack[-1]
0x77b: Call2 0x76f

0x77c: Pop(1)
0x77d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(2)
0x77f: Pop(0); Push((bool) Stack[-1] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: GOTO 0x785

0x782: Push((int) 1)
0x783: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x784: GOTO 0x778

0x785: Stack[-2] = Stack[-5]
0x786: Return(); Pop(4)

0x787: Stack[-1] = (int) 515546
0x788: Return(); Pop(0)

0x789: Stack[-1] = (int) 502871
0x78a: Return(); Pop(0)

0x78b: Stack[-1] = "ui/NPC_Mishka.png" // @poff=264
0x78c: Return(); Pop(0)

0x78d: Stack[-1] = "ui/NPC_Mishka_b.png" // @poff=300
0x78e: Return(); Pop(0)

0x78f: Stack[-1] = (bool) 1
0x790: Return(); Pop(0)

0x791: PushEmpty()
0x792: Push("ood6Mishka1") // @poff=340
0x793: Push((int) 1)
0x794: @ SetVariable(Stack[-2], Stack[-1])
0x795: Pop(2)
0x796: Return(); Pop(0)

0x797: PushEmpty()
0x798: Push("KnowMishka") // @poff=364
0x799: Push((int) 1)
0x79a: @ SetVariable(Stack[-2], Stack[-1])
0x79b: Pop(2)
0x79c: Return(); Pop(0)

0x79d: PushEmpty()
0x79e: PushEmpty(int, string)
0x79f: Stack[-1] = "d6q01" // @poff=386
0x7a0: Call2 0x75b

0x7a1: Pop(1)
0x7a2: Push((int) 4)
0x7a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a5: Stack[-2] = (bool) 1
0x7a6: Return(); Pop(0)

0x7a7: Stack[-2] = (bool) 0
0x7a8: Return(); Pop(0)

0x7a9: PushEmpty()
0x7aa: PushEmpty(int, string)
0x7ab: Stack[-1] = "ood6Mishka1" // @poff=340
0x7ac: Call2 0x75b

0x7ad: Pop(1)
0x7ae: Push((int) 0)
0x7af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: Stack[-2] = (bool) 1
0x7b2: Return(); Pop(0)

0x7b3: Stack[-2] = (bool) 0
0x7b4: Return(); Pop(0)

0x7b5: PushEmpty(int, int)
0x7b6: Push("branch") // @poff=398
0x7b7: @ GetVariable(Stack[-1], Stack[-2])
0x7b8: Pop(1)
0x7b9: Push((int) 0)
0x7ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7bc: Stack[-3] = (int) 1
0x7bd: Return(); Pop(2)

0x7be: GOTO 0x7c4

0x7bf: Push((int) 1)
0x7c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7c2: Stack[-3] = (int) 2
0x7c3: Return(); Pop(2)

0x7c4: Stack[-3] = (int) 3
0x7c5: Return(); Pop(2)

0x7c6: PushEmpty()
0x7c7: Push(GlobalVars[1])
0x7c8: Pop(1); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7ca: PushEmpty(int, object)
0x7cb: Stack[-3] = Stack[-1]
0x7cc: Push(-2, 1); TaskCall(3)
0x7cd: Call2 0x110

0x7ce: Pop(-2, 1); TaskReturn
0x7cf: Pop(2)
0x7d0: Push(GlobalVars[1])
0x7d1: Stack[-1] = (bool) 1
0x7d2: GlobalVars[1] = Stack[-1]; Pop(1)
0x7d3: PushEmpty(bool, int)
0x7d4: Stack[-1] = (int) 3
0x7d5: Call2 0x769

0x7d6: Pop(1)
0x7d7: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7d8: PushEmpty(int, object)
0x7d9: Stack[-3] = Stack[-1]
0x7da: Push(-2, 1); TaskCall(5)
0x7db: Call2 0x246

0x7dc: Pop(-2, 1); TaskReturn
0x7dd: Pop(2)
0x7de: Return(); Pop(0)

0x7df: PushEmpty(bool, int)
0x7e0: Stack[-1] = (int) 6
0x7e1: Call2 0x769

0x7e2: Pop(1)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e4: PushEmpty(int, object)
0x7e5: Stack[-3] = Stack[-1]
0x7e6: Push(-2, 1); TaskCall(7)
0x7e7: Call2 0x307

0x7e8: Pop(-2, 1); TaskReturn
0x7e9: Pop(2)
0x7ea: Return(); Pop(0)

0x7eb: PushEmpty(bool, int)
0x7ec: Stack[-1] = (int) 12
0x7ed: Call2 0x769

0x7ee: Pop(1)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f0: PushEmpty(int, object)
0x7f1: Stack[-3] = Stack[-1]
0x7f2: Push(-2, 1); TaskCall(1)
0x7f3: Call2 0xd

0x7f4: Pop(-2, 1); TaskReturn
0x7f5: Pop(2)
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty(int, object)
0x7f8: Stack[-3] = Stack[-1]
0x7f9: Push(-2, 1); TaskCall(9)
0x7fa: Call2 0x455

0x7fb: Pop(-2, 1); TaskReturn
0x7fc: Pop(2)
0x7fd: Return(); Pop(0)

