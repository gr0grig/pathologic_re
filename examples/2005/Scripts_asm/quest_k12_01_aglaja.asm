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
	W:restore
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:game_final
	W:branch
	W:ui/NPC_Aglaja.png
	W:ui/NPC_Aglaja_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000670061006d0065005f00660069006e0061006c0000006200720061006e00630068000000750069002f004e00500043005f00410067006c0061006a0061002e0070006e0067000000750069002f004e00500043005f00410067006c0061006a0061005f0062002e0070006e0067000000
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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0xff
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x103 Vars = (object)
		EVENT_26 Op = 0x10b Vars = (string)
		EVENT_6 Op = 0x127 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x23b

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x18e

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x139

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x278

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x276

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x27a

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x27c

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x265

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
0x48: Call2 0x17d

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
0x56: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x259

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral" // @poff=89
0x5f: Call2 0xa5

0x60: Pop(1)
0x61: Push((int) 539199)
0x62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63: Pop(1)
0x64: @@@ ClearReplies(); Obj=0 // @poff=116
0x65: Pop(0)
0x66: Push((int) 539200)
0x67: Push((int) -1)
0x68: Push((int) 41143)
0x69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a: Pop(3)
0x6b: Push((int) 540975)
0x6c: Push((int) -1)
0x6d: Push((int) 43065)
0x6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f: Pop(3)
0x70: GOTO 0x87

0x71: PushEmpty(string)
0x72: Stack[-1] = "Neutral" // @poff=89
0x73: Call2 0xa5

0x74: Pop(1)
0x75: Push((int) 539201)
0x76: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x77: Pop(1)
0x78: @@@ ClearReplies(); Obj=0 // @poff=116
0x79: Pop(0)
0x7a: Push((int) 539202)
0x7b: Push((int) -1)
0x7c: Push((int) 41145)
0x7d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7e: Pop(3)
0x7f: Push((int) 540976)
0x80: Push((int) -1)
0x81: Push((int) 43066)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x55

0x87: PushEmpty(bool)
0x88: Call2 0x27e

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x218

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all") // @poff=138
0x97: Push("idle") // @poff=146
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all") // @poff=138
0xa0: Push("idle") // @poff=146
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x27e

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-3] = Stack[-2]
0xb1: Push("") // @poff=102
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x21f

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x234

0xc0: Pop(0)
0xc1: Push((int) 41142)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x259

0xc7: Pop(1)
0xc8: Pop(1); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral" // @poff=89
0xcc: Call2 0xa5

0xcd: Pop(1)
0xce: Push((int) 539199)
0xcf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd0: Pop(1)
0xd1: @@@ ClearReplies(); Obj=0 // @poff=116
0xd2: Pop(0)
0xd3: Push((int) 539200)
0xd4: Push((int) -1)
0xd5: Push((int) 41143)
0xd6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd7: Pop(3)
0xd8: Push((int) 540975)
0xd9: Push((int) -1)
0xda: Push((int) 43065)
0xdb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral" // @poff=89
0xe0: Call2 0xa5

0xe1: Pop(1)
0xe2: Push((int) 539201)
0xe3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe4: Pop(1)
0xe5: @@@ ClearReplies(); Obj=0 // @poff=116
0xe6: Pop(0)
0xe7: Push((int) 539202)
0xe8: Push((int) -1)
0xe9: Push((int) 41145)
0xea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xeb: Pop(3)
0xec: Push((int) 540976)
0xed: Push((int) -1)
0xee: Push((int) 43066)
0xef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf3: PushEmpty(bool)
0xf4: Call2 0x27e

0xf5: Pop(0)
0xf6: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf7: @ lshStopAnimation()
0xf8: Pop(0)
0xf9: GOTO 0xfc

0xfa: @ StopAnimation()
0xfb: Pop(0)
0xfc: Return(); Pop(0)

0xfd: GOTO 0xbc

0xfe: Return(); Pop(0)

0xff: @ Hold()
0x100: Pop(0)
0x101: GOTO 0xff

0x102: Return(); Pop(0)

0x103: PushEmpty()
0x104: PushEmpty(int, object)
0x105: Stack[-3] = Stack[-1]
0x106: Push(-2, 1); TaskCall(0)
0x107: Call2 0x0

0x108: Pop(-2, 1); TaskReturn
0x109: Pop(2)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(bool, bool)
0x10c: Push("cleanup") // @poff=156
0x10d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x110: @ IsLoaded(Stack[-1])
0x111: Pop(0)
0x112: PushEmpty(bool)
0x113: Stack[-1] = (bool) 0
0x114: Pop(0); Push((bool) Stack[-2] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x116: PushEmpty(bool)
0x117: Call2 0x137

0x118: Pop(0)
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Stack[-1] = (bool) 1
0x11b: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11c: PushEmpty(object)
0x11d: Call2 0x23b

0x11e: Pop(0)
0x11f: @ RemoveActor(Stack[-1])
0x120: Pop(1)
0x121: GOTO 0x126

0x122: Push("restore") // @poff=172
0x123: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x126: Return(); Pop(2)

0x127: PushEmpty(bool)
0x128: Stack[-1] = (bool) 0
0x129: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(bool)
0x12c: Call2 0x137

0x12d: Pop(0)
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Stack[-1] = (bool) 1
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: PushEmpty(object)
0x132: Call2 0x23b

0x133: Pop(0)
0x134: @ RemoveActor(Stack[-1])
0x135: Pop(1)
0x136: Return(); Pop(0)

0x137: Stack[-1] = (bool) 1
0x138: Return(); Pop(0)

0x139: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x13a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x13b: Pop(0)
0x13c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x13d: Pop(0)
0x13e: Push(CvectorIndex(Stack[-8], 1))
0x13f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x140: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x141: @ GetPosition(Stack[-7])
0x142: Pop(0)
0x143: @ GetEyesHeight(Stack[-9])
0x144: Pop(0)
0x145: Push(CvectorIndex(Stack[-7], 1))
0x146: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x147: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x148: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x149: Push(CvectorIndex(Stack[-6], 1))
0x14a: Stack[-1] = (int) 0
0x14b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x14c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x14d: Pop(1); Push(Sqrt(Stack[-1]))
0x14e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x14f: Stack[-5] = -Stack[-6]; Pop(0);
0x150: Pop(0); Push(Stack[-6] * Stack[-19]);
0x151: PushEmpty(cvector, cvector)
0x152: Push([0.0, 1.0, 0.0])
0x153: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x154: Call2 0x241

0x155: Pop(1)
0x156: Push((int) 25)
0x157: Pop(2); Push(Stack[-2] * Stack[-1]);
0x158: Pop(2); Push(Stack[-2] + Stack[-1]);
0x159: Push([0.0, 10.0, 0.0])
0x15a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x15b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x15c: @ IsOverrideActive(Stack[-2])
0x15d: Pop(0)
0x15e: Push(Stack[-2])
0x15f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x160: Stack[-21] = (bool) 0
0x161: Return(); Pop(18)

0x162: @ StopWorld()
0x163: Pop(0)
0x164: @ CameraTransit(Stack[-3], Stack[-5])
0x165: Pop(0)
0x166: Push(CvectorIndex(Stack[-4], 0))
0x167: Push(CvectorIndex(Stack[-5], 2))
0x168: @ Rotate(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: PushEmpty(bool)
0x16b: Call2 0x27e

0x16c: Pop(0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x177

0x16f: Push("head") // @poff=214
0x170: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x171: Pop(1)
0x172: Push(Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x174: Push("head") // @poff=214
0x175: @ LookAsyncCamera(Stack[-1])
0x176: Pop(1)
0x177: @ CameraWaitForPlayFinish()
0x178: Pop(0)
0x179: @ ResumeWorld()
0x17a: Pop(0)
0x17b: Stack[-21] = (bool) 1
0x17c: Return(); Pop(18)

0x17d: PushEmpty(bool, bool)
0x17e: @ CameraSwitchToNormal()
0x17f: Pop(0)
0x180: PushEmpty(bool)
0x181: Call2 0x27e

0x182: Pop(0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x18d

0x185: Push("head") // @poff=214
0x186: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x187: Pop(1)
0x188: Push(Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18a: Push("head") // @poff=214
0x18b: @ UnlookAsync(Stack[-1])
0x18c: Pop(1)
0x18d: Return(); Pop(2)

0x18e: PushEmpty(int, int, int, int)
0x18f: Push("voice_common") // @poff=224
0x190: @ GetVariable(Stack[-1], Stack[-3])
0x191: Pop(1)
0x192: Push(Stack[-2])
0x193: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x194: PushEmpty(bool, object)
0x195: Stack[-7] = Stack[-1]
0x196: Call2 0x1c8

0x197: Pop(1)
0x198: Pop(1); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19a: PushEmpty(bool, object)
0x19b: Stack[-7] = Stack[-1]
0x19c: Call2 0x1ed

0x19d: Pop(1)
0x19e: Pop(1); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Stack[-6] = (bool) 0
0x1a1: Return(); Pop(4)

0x1a2: Push((int) 2)
0x1a3: @ irand(Stack[-2], Stack[-1])
0x1a4: Pop(1)
0x1a5: Push(Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a7: Push("voice_common") // @poff=224
0x1a8: Push((int) 1)
0x1a9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1aa: Push((int) 3)
0x1ab: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1ac: @ SetVariable(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: GOTO 0x1b3

0x1af: Push("voice_common") // @poff=224
0x1b0: Push((int) 0)
0x1b1: @ SetVariable(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: GOTO 0x1c6

0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-7] = Stack[-1]
0x1b6: Call2 0x1ed

0x1b7: Pop(1)
0x1b8: Pop(1); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-7] = Stack[-1]
0x1bc: Call2 0x1c8

0x1bd: Pop(1)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c0: Stack[-6] = (bool) 0
0x1c1: Return(); Pop(4)

0x1c2: Push("voice_common") // @poff=224
0x1c3: Push((int) 1)
0x1c4: @ SetVariable(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: Stack[-6] = (bool) 1
0x1c7: Return(); Pop(4)

0x1c8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1c9: Stack[-5] = "c" // @poff=250
0x1ca: Stack[-4] = (int) 0
0x1cb: Push((int) 1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1cd: Push((int) 1)
0x1ce: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1cf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1d0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1d1: Pop(1)
0x1d2: Pop(0); Push((bool) Stack[-3] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: GOTO 0x1d8

0x1d5: Push((int) 1)
0x1d6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1d7: GOTO 0x1cb

0x1d8: Pop(0); Push((bool) Stack[-4] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-12] = (bool) 0
0x1db: Return(); Pop(10)

0x1dc: Stack[-2] = (int) 0
0x1dd: Push((int) 1)
0x1de: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: @ irand(Stack[-2], Stack[-4])
0x1e1: Pop(0)
0x1e2: Push((int) 1)
0x1e3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1e5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x1e6: Pop(1)
0x1e7: PushEmpty(bool, string)
0x1e8: Stack[-3] = Stack[-1]
0x1e9: Call2 0x225

0x1ea: Stack[-2] = Stack[-14]
0x1eb: Pop(2)
0x1ec: Return(); Pop(10)

0x1ed: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1ee: Push("d") // @poff=220
0x1ef: PushEmpty(int)
0x1f0: Call2 0x250

0x1f1: Pop(0)
0x1f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f3: Push("m") // @poff=278
0x1f4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1f5: Stack[-4] = (int) 0
0x1f6: Push((int) 1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f8: Push((int) 1)
0x1f9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1fa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1fb: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1fc: Pop(1)
0x1fd: Pop(0); Push((bool) Stack[-3] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: GOTO 0x203

0x200: Push((int) 1)
0x201: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x202: GOTO 0x1f6

0x203: Pop(0); Push((bool) Stack[-4] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x205: Stack[-12] = (bool) 0
0x206: Return(); Pop(10)

0x207: Stack[-2] = (int) 0
0x208: Push((int) 1)
0x209: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: @ irand(Stack[-2], Stack[-4])
0x20c: Pop(0)
0x20d: Push((int) 1)
0x20e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x20f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x210: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x211: Pop(1)
0x212: PushEmpty(bool, string)
0x213: Stack[-3] = Stack[-1]
0x214: Call2 0x225

0x215: Stack[-2] = Stack[-14]
0x216: Pop(2)
0x217: Return(); Pop(10)

0x218: PushEmpty(float, float, float, float)
0x219: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x21a: Pop(0)
0x21b: Push((bool) 0)
0x21c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(1)
0x21e: Return(); Pop(4)

0x21f: PushEmpty(float, float, float, float)
0x220: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x221: Pop(0)
0x222: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x223: Pop(0)
0x224: Return(); Pop(4)

0x225: PushEmpty(bool, bool)
0x226: PushEmpty(bool)
0x227: Call2 0x27e

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x22b: Pop(0)
0x22c: Push(Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22e: @ lshPlaySpeech(Stack[-3])
0x22f: Pop(0)
0x230: Stack[-4] = (bool) 1
0x231: Return(); Pop(2)

0x232: Stack[-4] = (bool) 0
0x233: Return(); Pop(2)

0x234: PushEmpty(bool)
0x235: Call2 0x27e

0x236: Pop(0)
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: @ lshStopSpeech()
0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(object, object)
0x23c: @ self(Stack[-1])
0x23d: Pop(0)
0x23e: Stack[-1] = Stack[-3]
0x23f: Return(); Pop(2)

0x240: Stack[-1] = 0
0x241: PushEmpty(float, float)
0x242: Pop(0); Push(Stack[-3] | Stack[-3]);
0x243: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x244: Push((float)9.999999974752427e-07)
0x245: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: Stack[-4] = [0.0, 0.0, 0.0]
0x248: Return(); Pop(2)

0x249: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x24a: Return(); Pop(2)

0x24b: PushEmpty(int, int)
0x24c: @ GetVariable(Stack[-3], Stack[-1])
0x24d: Pop(0)
0x24e: Stack[-1] = Stack[-4]
0x24f: Return(); Pop(2)

0x250: PushEmpty(float, float)
0x251: @ GetGameTime(Stack[-1])
0x252: Pop(0)
0x253: Push((int) 1)
0x254: PushEmpty(int)
0x255: Push((int) 24)
0x256: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x257: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x258: Return(); Pop(2)

0x259: PushEmpty()
0x25a: PushEmpty(int, string)
0x25b: Stack[-1] = "game_final" // @poff=282
0x25c: Call2 0x24b

0x25d: Pop(1)
0x25e: Push((int) 0)
0x25f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: Stack[-2] = (bool) 1
0x262: Return(); Pop(0)

0x263: Stack[-2] = (bool) 0
0x264: Return(); Pop(0)

0x265: PushEmpty(int, int)
0x266: Push("branch") // @poff=304
0x267: @ GetVariable(Stack[-1], Stack[-2])
0x268: Pop(1)
0x269: Push((int) 0)
0x26a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26c: Stack[-3] = (int) 1
0x26d: Return(); Pop(2)

0x26e: GOTO 0x274

0x26f: Push((int) 1)
0x270: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-3] = (int) 2
0x273: Return(); Pop(2)

0x274: Stack[-3] = (int) 3
0x275: Return(); Pop(2)

0x276: Stack[-1] = (int) 515527
0x277: Return(); Pop(0)

0x278: Stack[-1] = (int) 513334
0x279: Return(); Pop(0)

0x27a: Stack[-1] = "ui/NPC_Aglaja.png" // @poff=318
0x27b: Return(); Pop(0)

0x27c: Stack[-1] = "ui/NPC_Aglaja_b.png" // @poff=354
0x27d: Return(); Pop(0)

0x27e: Stack[-1] = (bool) 1
0x27f: Return(); Pop(0)

