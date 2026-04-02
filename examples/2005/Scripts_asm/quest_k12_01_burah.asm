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
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000670061006d0065005f00660069006e0061006c0000006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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

RunOp = 0xeb
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb1 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xef Vars = (object)
		EVENT_26 Op = 0xfb Vars = (string)
		EVENT_6 Op = 0x117 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x22b

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x17e

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x129

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x268

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x266

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x26a

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x26c

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x255

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
0x48: Call2 0x16d

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
0x56: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x249

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral" // @poff=89
0x5f: Call2 0x9b

0x60: Pop(1)
0x61: Push((int) 539209)
0x62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63: Pop(1)
0x64: @@@ ClearReplies(); Obj=0 // @poff=116
0x65: Pop(0)
0x66: Push((int) 539210)
0x67: Push((int) -1)
0x68: Push((int) 41153)
0x69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a: Pop(3)
0x6b: GOTO 0x7d

0x6c: PushEmpty(string)
0x6d: Stack[-1] = "Neutral" // @poff=89
0x6e: Call2 0x9b

0x6f: Pop(1)
0x70: Push((int) 539211)
0x71: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x72: Pop(1)
0x73: @@@ ClearReplies(); Obj=0 // @poff=116
0x74: Pop(0)
0x75: Push((int) 539212)
0x76: Push((int) -1)
0x77: Push((int) 41155)
0x78: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x79: Pop(3)
0x7a: GOTO 0x7d

0x7b: Return(); Pop(0)

0x7c: GOTO 0x55

0x7d: PushEmpty(bool)
0x7e: Call2 0x26e

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x81: @ lshWaitForAnimEnd()
0x82: Pop(0)
0x83: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: GOTO 0x8b

0x86: PushEmpty(string)
0x87: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88: Call2 0x208

0x89: Pop(1)
0x8a: GOTO 0x81

0x8b: GOTO 0x9a

0x8c: Push("all") // @poff=138
0x8d: Push("idle") // @poff=146
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ WaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: Push("all") // @poff=138
0x96: Push("idle") // @poff=146
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: GOTO 0x90

0x9a: Return(); Pop(0)

0x9b: PushEmpty()
0x9c: PushEmpty(bool)
0x9d: Call2 0x26e

0x9e: Pop(0)
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: PushEmpty(string, bool)
0xa6: Stack[-3] = Stack[-2]
0xa7: Push("") // @poff=102
0xa8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xaa: Stack[-1] = (bool) 0
0xab: GOTO 0xad

0xac: Stack[-1] = (bool) 1
0xad: Call2 0x20f

0xae: Pop(2)
0xaf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Push((int) 1)
0xb3: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0x224

0xb6: Pop(0)
0xb7: Push((int) 41152)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Call2 0x249

0xbd: Pop(1)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Neutral" // @poff=89
0xc2: Call2 0x9b

0xc3: Pop(1)
0xc4: Push((int) 539209)
0xc5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc6: Pop(1)
0xc7: @@@ ClearReplies(); Obj=0 // @poff=116
0xc8: Pop(0)
0xc9: Push((int) 539210)
0xca: Push((int) -1)
0xcb: Push((int) 41153)
0xcc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcd: Pop(3)
0xce: Return(); Pop(0)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral" // @poff=89
0xd1: Call2 0x9b

0xd2: Pop(1)
0xd3: Push((int) 539211)
0xd4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd5: Pop(1)
0xd6: @@@ ClearReplies(); Obj=0 // @poff=116
0xd7: Pop(0)
0xd8: Push((int) 539212)
0xd9: Push((int) -1)
0xda: Push((int) 41155)
0xdb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdf: PushEmpty(bool)
0xe0: Call2 0x26e

0xe1: Pop(0)
0xe2: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe3: @ lshStopAnimation()
0xe4: Pop(0)
0xe5: GOTO 0xe8

0xe6: @ StopAnimation()
0xe7: Pop(0)
0xe8: Return(); Pop(0)

0xe9: GOTO 0xb2

0xea: Return(); Pop(0)

0xeb: PushEmpty()
0xec: Call2 0xf7

0xed: Pop(0)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: PushEmpty(int, object)
0xf1: Stack[-3] = Stack[-1]
0xf2: Push(-2, 1); TaskCall(0)
0xf3: Call2 0x0

0xf4: Pop(-2, 1); TaskReturn
0xf5: Pop(2)
0xf6: Return(); Pop(0)

0xf7: @ Hold()
0xf8: Pop(0)
0xf9: GOTO 0xf7

0xfa: Return(); Pop(0)

0xfb: PushEmpty(bool, bool)
0xfc: Push("cleanup") // @poff=156
0xfd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xff: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x100: @ IsLoaded(Stack[-1])
0x101: Pop(0)
0x102: PushEmpty(bool)
0x103: Stack[-1] = (bool) 0
0x104: Pop(0); Push((bool) Stack[-2] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x106: PushEmpty(bool)
0x107: Call2 0x127

0x108: Pop(0)
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: Stack[-1] = (bool) 1
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(object)
0x10d: Call2 0x22b

0x10e: Pop(0)
0x10f: @ RemoveActor(Stack[-1])
0x110: Pop(1)
0x111: GOTO 0x116

0x112: Push("restore") // @poff=172
0x113: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x116: Return(); Pop(2)

0x117: PushEmpty(bool)
0x118: Stack[-1] = (bool) 0
0x119: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(bool)
0x11c: Call2 0x127

0x11d: Pop(0)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Stack[-1] = (bool) 1
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object)
0x122: Call2 0x22b

0x123: Pop(0)
0x124: @ RemoveActor(Stack[-1])
0x125: Pop(1)
0x126: Return(); Pop(0)

0x127: Stack[-1] = (bool) 1
0x128: Return(); Pop(0)

0x129: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x12a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x12b: Pop(0)
0x12c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x12d: Pop(0)
0x12e: Push(CvectorIndex(Stack[-8], 1))
0x12f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x130: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x131: @ GetPosition(Stack[-7])
0x132: Pop(0)
0x133: @ GetEyesHeight(Stack[-9])
0x134: Pop(0)
0x135: Push(CvectorIndex(Stack[-7], 1))
0x136: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x137: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x138: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x139: Push(CvectorIndex(Stack[-6], 1))
0x13a: Stack[-1] = (int) 0
0x13b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x13c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x13d: Pop(1); Push(Sqrt(Stack[-1]))
0x13e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x13f: Stack[-5] = -Stack[-6]; Pop(0);
0x140: Pop(0); Push(Stack[-6] * Stack[-19]);
0x141: PushEmpty(cvector, cvector)
0x142: Push([0.0, 1.0, 0.0])
0x143: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x144: Call2 0x231

0x145: Pop(1)
0x146: Push((int) 25)
0x147: Pop(2); Push(Stack[-2] * Stack[-1]);
0x148: Pop(2); Push(Stack[-2] + Stack[-1]);
0x149: Push([0.0, 10.0, 0.0])
0x14a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x14b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x14c: @ IsOverrideActive(Stack[-2])
0x14d: Pop(0)
0x14e: Push(Stack[-2])
0x14f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x150: Stack[-21] = (bool) 0
0x151: Return(); Pop(18)

0x152: @ StopWorld()
0x153: Pop(0)
0x154: @ CameraTransit(Stack[-3], Stack[-5])
0x155: Pop(0)
0x156: Push(CvectorIndex(Stack[-4], 0))
0x157: Push(CvectorIndex(Stack[-5], 2))
0x158: @ Rotate(Stack[-2], Stack[-1])
0x159: Pop(2)
0x15a: PushEmpty(bool)
0x15b: Call2 0x26e

0x15c: Pop(0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: GOTO 0x167

0x15f: Push("head") // @poff=214
0x160: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x161: Pop(1)
0x162: Push(Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: Push("head") // @poff=214
0x165: @ LookAsyncCamera(Stack[-1])
0x166: Pop(1)
0x167: @ CameraWaitForPlayFinish()
0x168: Pop(0)
0x169: @ ResumeWorld()
0x16a: Pop(0)
0x16b: Stack[-21] = (bool) 1
0x16c: Return(); Pop(18)

0x16d: PushEmpty(bool, bool)
0x16e: @ CameraSwitchToNormal()
0x16f: Pop(0)
0x170: PushEmpty(bool)
0x171: Call2 0x26e

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: GOTO 0x17d

0x175: Push("head") // @poff=214
0x176: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x177: Pop(1)
0x178: Push(Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: Push("head") // @poff=214
0x17b: @ UnlookAsync(Stack[-1])
0x17c: Pop(1)
0x17d: Return(); Pop(2)

0x17e: PushEmpty(int, int, int, int)
0x17f: Push("voice_common") // @poff=224
0x180: @ GetVariable(Stack[-1], Stack[-3])
0x181: Pop(1)
0x182: Push(Stack[-2])
0x183: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x184: PushEmpty(bool, object)
0x185: Stack[-7] = Stack[-1]
0x186: Call2 0x1b8

0x187: Pop(1)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18a: PushEmpty(bool, object)
0x18b: Stack[-7] = Stack[-1]
0x18c: Call2 0x1dd

0x18d: Pop(1)
0x18e: Pop(1); Push((bool) Stack[-1] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x190: Stack[-6] = (bool) 0
0x191: Return(); Pop(4)

0x192: Push((int) 2)
0x193: @ irand(Stack[-2], Stack[-1])
0x194: Pop(1)
0x195: Push(Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x197: Push("voice_common") // @poff=224
0x198: Push((int) 1)
0x199: Pop(1); Push(Stack[-4] + Stack[-1]);
0x19a: Push((int) 3)
0x19b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x19c: @ SetVariable(Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: GOTO 0x1a3

0x19f: Push("voice_common") // @poff=224
0x1a0: Push((int) 0)
0x1a1: @ SetVariable(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: GOTO 0x1b6

0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-7] = Stack[-1]
0x1a6: Call2 0x1dd

0x1a7: Pop(1)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-7] = Stack[-1]
0x1ac: Call2 0x1b8

0x1ad: Pop(1)
0x1ae: Pop(1); Push((bool) Stack[-1] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b0: Stack[-6] = (bool) 0
0x1b1: Return(); Pop(4)

0x1b2: Push("voice_common") // @poff=224
0x1b3: Push((int) 1)
0x1b4: @ SetVariable(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: Stack[-6] = (bool) 1
0x1b7: Return(); Pop(4)

0x1b8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1b9: Stack[-5] = "c" // @poff=250
0x1ba: Stack[-4] = (int) 0
0x1bb: Push((int) 1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1bd: Push((int) 1)
0x1be: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1bf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1c0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1c1: Pop(1)
0x1c2: Pop(0); Push((bool) Stack[-3] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: GOTO 0x1c8

0x1c5: Push((int) 1)
0x1c6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1c7: GOTO 0x1bb

0x1c8: Pop(0); Push((bool) Stack[-4] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ca: Stack[-12] = (bool) 0
0x1cb: Return(); Pop(10)

0x1cc: Stack[-2] = (int) 0
0x1cd: Push((int) 1)
0x1ce: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: @ irand(Stack[-2], Stack[-4])
0x1d1: Pop(0)
0x1d2: Push((int) 1)
0x1d3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1d5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x1d6: Pop(1)
0x1d7: PushEmpty(bool, string)
0x1d8: Stack[-3] = Stack[-1]
0x1d9: Call2 0x215

0x1da: Stack[-2] = Stack[-14]
0x1db: Pop(2)
0x1dc: Return(); Pop(10)

0x1dd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1de: Push("d") // @poff=220
0x1df: PushEmpty(int)
0x1e0: Call2 0x240

0x1e1: Pop(0)
0x1e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e3: Push("m") // @poff=278
0x1e4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1e5: Stack[-4] = (int) 0
0x1e6: Push((int) 1)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e8: Push((int) 1)
0x1e9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1ea: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1eb: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1ec: Pop(1)
0x1ed: Pop(0); Push((bool) Stack[-3] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x1f3

0x1f0: Push((int) 1)
0x1f1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1f2: GOTO 0x1e6

0x1f3: Pop(0); Push((bool) Stack[-4] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-12] = (bool) 0
0x1f6: Return(); Pop(10)

0x1f7: Stack[-2] = (int) 0
0x1f8: Push((int) 1)
0x1f9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fb: @ irand(Stack[-2], Stack[-4])
0x1fc: Pop(0)
0x1fd: Push((int) 1)
0x1fe: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ff: Pop(1); Push(Stack[-6] + Stack[-1]);
0x200: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x201: Pop(1)
0x202: PushEmpty(bool, string)
0x203: Stack[-3] = Stack[-1]
0x204: Call2 0x215

0x205: Stack[-2] = Stack[-14]
0x206: Pop(2)
0x207: Return(); Pop(10)

0x208: PushEmpty(float, float, float, float)
0x209: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x20a: Pop(0)
0x20b: Push((bool) 0)
0x20c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(1)
0x20e: Return(); Pop(4)

0x20f: PushEmpty(float, float, float, float)
0x210: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x211: Pop(0)
0x212: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x213: Pop(0)
0x214: Return(); Pop(4)

0x215: PushEmpty(bool, bool)
0x216: PushEmpty(bool)
0x217: Call2 0x26e

0x218: Pop(0)
0x219: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x21b: Pop(0)
0x21c: Push(Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21e: @ lshPlaySpeech(Stack[-3])
0x21f: Pop(0)
0x220: Stack[-4] = (bool) 1
0x221: Return(); Pop(2)

0x222: Stack[-4] = (bool) 0
0x223: Return(); Pop(2)

0x224: PushEmpty(bool)
0x225: Call2 0x26e

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: @ lshStopSpeech()
0x229: Pop(0)
0x22a: Return(); Pop(0)

0x22b: PushEmpty(object, object)
0x22c: @ self(Stack[-1])
0x22d: Pop(0)
0x22e: Stack[-1] = Stack[-3]
0x22f: Return(); Pop(2)

0x230: Stack[-1] = 0
0x231: PushEmpty(float, float)
0x232: Pop(0); Push(Stack[-3] | Stack[-3]);
0x233: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x234: Push((float)9.999999974752427e-07)
0x235: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: Stack[-4] = [0.0, 0.0, 0.0]
0x238: Return(); Pop(2)

0x239: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x23a: Return(); Pop(2)

0x23b: PushEmpty(int, int)
0x23c: @ GetVariable(Stack[-3], Stack[-1])
0x23d: Pop(0)
0x23e: Stack[-1] = Stack[-4]
0x23f: Return(); Pop(2)

0x240: PushEmpty(float, float)
0x241: @ GetGameTime(Stack[-1])
0x242: Pop(0)
0x243: Push((int) 1)
0x244: PushEmpty(int)
0x245: Push((int) 24)
0x246: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x247: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x248: Return(); Pop(2)

0x249: PushEmpty()
0x24a: PushEmpty(int, string)
0x24b: Stack[-1] = "game_final" // @poff=282
0x24c: Call2 0x23b

0x24d: Pop(1)
0x24e: Push((int) 0)
0x24f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x251: Stack[-2] = (bool) 1
0x252: Return(); Pop(0)

0x253: Stack[-2] = (bool) 0
0x254: Return(); Pop(0)

0x255: PushEmpty(int, int)
0x256: Push("branch") // @poff=304
0x257: @ GetVariable(Stack[-1], Stack[-2])
0x258: Pop(1)
0x259: Push((int) 0)
0x25a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25c: Stack[-3] = (int) 1
0x25d: Return(); Pop(2)

0x25e: GOTO 0x264

0x25f: Push((int) 1)
0x260: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x262: Stack[-3] = (int) 2
0x263: Return(); Pop(2)

0x264: Stack[-3] = (int) 3
0x265: Return(); Pop(2)

0x266: Stack[-1] = (int) 515592
0x267: Return(); Pop(0)

0x268: Stack[-1] = (int) 511961
0x269: Return(); Pop(0)

0x26a: Stack[-1] = "ui/NPC_Burah.png" // @poff=318
0x26b: Return(); Pop(0)

0x26c: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=352
0x26d: Return(); Pop(0)

0x26e: Stack[-1] = (bool) 1
0x26f: Return(); Pop(0)

