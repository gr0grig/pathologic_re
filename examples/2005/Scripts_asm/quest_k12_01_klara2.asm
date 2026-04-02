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
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000670061006d0065005f00660069006e0061006c0000006200720061006e00630068000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
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
		EVENT_26 Op = 0xf7 Vars = (string)
		EVENT_6 Op = 0x113 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x227

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x17a

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x125

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x264

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x262

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x266

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x268

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x251

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
0x48: Call2 0x169

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
0x59: Call2 0x245

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral" // @poff=89
0x5f: Call2 0x9b

0x60: Pop(1)
0x61: Push((int) 539214)
0x62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63: Pop(1)
0x64: @@@ ClearReplies(); Obj=0 // @poff=116
0x65: Pop(0)
0x66: Push((int) 539215)
0x67: Push((int) -1)
0x68: Push((int) 41158)
0x69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a: Pop(3)
0x6b: GOTO 0x7d

0x6c: PushEmpty(string)
0x6d: Stack[-1] = "Neutral" // @poff=89
0x6e: Call2 0x9b

0x6f: Pop(1)
0x70: Push((int) 539216)
0x71: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x72: Pop(1)
0x73: @@@ ClearReplies(); Obj=0 // @poff=116
0x74: Pop(0)
0x75: Push((int) 539217)
0x76: Push((int) -1)
0x77: Push((int) 41160)
0x78: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x79: Pop(3)
0x7a: GOTO 0x7d

0x7b: Return(); Pop(0)

0x7c: GOTO 0x55

0x7d: PushEmpty(bool)
0x7e: Call2 0x26a

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x81: @ lshWaitForAnimEnd()
0x82: Pop(0)
0x83: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: GOTO 0x8b

0x86: PushEmpty(string)
0x87: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88: Call2 0x204

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
0x9d: Call2 0x26a

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
0xad: Call2 0x20b

0xae: Pop(2)
0xaf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Push((int) 1)
0xb3: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0x220

0xb6: Pop(0)
0xb7: Push((int) 41157)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Call2 0x245

0xbd: Pop(1)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Neutral" // @poff=89
0xc2: Call2 0x9b

0xc3: Pop(1)
0xc4: Push((int) 539214)
0xc5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc6: Pop(1)
0xc7: @@@ ClearReplies(); Obj=0 // @poff=116
0xc8: Pop(0)
0xc9: Push((int) 539215)
0xca: Push((int) -1)
0xcb: Push((int) 41158)
0xcc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcd: Pop(3)
0xce: Return(); Pop(0)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral" // @poff=89
0xd1: Call2 0x9b

0xd2: Pop(1)
0xd3: Push((int) 539216)
0xd4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd5: Pop(1)
0xd6: @@@ ClearReplies(); Obj=0 // @poff=116
0xd7: Pop(0)
0xd8: Push((int) 539217)
0xd9: Push((int) -1)
0xda: Push((int) 41160)
0xdb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdf: PushEmpty(bool)
0xe0: Call2 0x26a

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

0xeb: @ Hold()
0xec: Pop(0)
0xed: GOTO 0xeb

0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: PushEmpty(int, object)
0xf1: Stack[-3] = Stack[-1]
0xf2: Push(-2, 1); TaskCall(0)
0xf3: Call2 0x0

0xf4: Pop(-2, 1); TaskReturn
0xf5: Pop(2)
0xf6: Return(); Pop(0)

0xf7: PushEmpty(bool, bool)
0xf8: Push("cleanup") // @poff=156
0xf9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xfc: @ IsLoaded(Stack[-1])
0xfd: Pop(0)
0xfe: PushEmpty(bool)
0xff: Stack[-1] = (bool) 0
0x100: Pop(0); Push((bool) Stack[-2] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: PushEmpty(bool)
0x103: Call2 0x123

0x104: Pop(0)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Stack[-1] = (bool) 1
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object)
0x109: Call2 0x227

0x10a: Pop(0)
0x10b: @ RemoveActor(Stack[-1])
0x10c: Pop(1)
0x10d: GOTO 0x112

0x10e: Push("restore") // @poff=172
0x10f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x112: Return(); Pop(2)

0x113: PushEmpty(bool)
0x114: Stack[-1] = (bool) 0
0x115: Push( Stack[0 + Tasks[-1].StackPointer] )
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: PushEmpty(bool)
0x118: Call2 0x123

0x119: Pop(0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Stack[-1] = (bool) 1
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: PushEmpty(object)
0x11e: Call2 0x227

0x11f: Pop(0)
0x120: @ RemoveActor(Stack[-1])
0x121: Pop(1)
0x122: Return(); Pop(0)

0x123: Stack[-1] = (bool) 1
0x124: Return(); Pop(0)

0x125: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x126: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x127: Pop(0)
0x128: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x129: Pop(0)
0x12a: Push(CvectorIndex(Stack[-8], 1))
0x12b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x12c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x12d: @ GetPosition(Stack[-7])
0x12e: Pop(0)
0x12f: @ GetEyesHeight(Stack[-9])
0x130: Pop(0)
0x131: Push(CvectorIndex(Stack[-7], 1))
0x132: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x133: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x134: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x135: Push(CvectorIndex(Stack[-6], 1))
0x136: Stack[-1] = (int) 0
0x137: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x138: Pop(0); Push(Stack[-6] | Stack[-6]);
0x139: Pop(1); Push(Sqrt(Stack[-1]))
0x13a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x13b: Stack[-5] = -Stack[-6]; Pop(0);
0x13c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x13d: PushEmpty(cvector, cvector)
0x13e: Push([0.0, 1.0, 0.0])
0x13f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x140: Call2 0x22d

0x141: Pop(1)
0x142: Push((int) 25)
0x143: Pop(2); Push(Stack[-2] * Stack[-1]);
0x144: Pop(2); Push(Stack[-2] + Stack[-1]);
0x145: Push([0.0, 10.0, 0.0])
0x146: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x147: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x148: @ IsOverrideActive(Stack[-2])
0x149: Pop(0)
0x14a: Push(Stack[-2])
0x14b: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14c: Stack[-21] = (bool) 0
0x14d: Return(); Pop(18)

0x14e: @ StopWorld()
0x14f: Pop(0)
0x150: @ CameraTransit(Stack[-3], Stack[-5])
0x151: Pop(0)
0x152: Push(CvectorIndex(Stack[-4], 0))
0x153: Push(CvectorIndex(Stack[-5], 2))
0x154: @ Rotate(Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: PushEmpty(bool)
0x157: Call2 0x26a

0x158: Pop(0)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: GOTO 0x163

0x15b: Push("head") // @poff=214
0x15c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x15d: Pop(1)
0x15e: Push(Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x160: Push("head") // @poff=214
0x161: @ LookAsyncCamera(Stack[-1])
0x162: Pop(1)
0x163: @ CameraWaitForPlayFinish()
0x164: Pop(0)
0x165: @ ResumeWorld()
0x166: Pop(0)
0x167: Stack[-21] = (bool) 1
0x168: Return(); Pop(18)

0x169: PushEmpty(bool, bool)
0x16a: @ CameraSwitchToNormal()
0x16b: Pop(0)
0x16c: PushEmpty(bool)
0x16d: Call2 0x26a

0x16e: Pop(0)
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: GOTO 0x179

0x171: Push("head") // @poff=214
0x172: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x173: Pop(1)
0x174: Push(Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x176: Push("head") // @poff=214
0x177: @ UnlookAsync(Stack[-1])
0x178: Pop(1)
0x179: Return(); Pop(2)

0x17a: PushEmpty(int, int, int, int)
0x17b: Push("voice_common") // @poff=224
0x17c: @ GetVariable(Stack[-1], Stack[-3])
0x17d: Pop(1)
0x17e: Push(Stack[-2])
0x17f: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x180: PushEmpty(bool, object)
0x181: Stack[-7] = Stack[-1]
0x182: Call2 0x1b4

0x183: Pop(1)
0x184: Pop(1); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x186: PushEmpty(bool, object)
0x187: Stack[-7] = Stack[-1]
0x188: Call2 0x1d9

0x189: Pop(1)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18c: Stack[-6] = (bool) 0
0x18d: Return(); Pop(4)

0x18e: Push((int) 2)
0x18f: @ irand(Stack[-2], Stack[-1])
0x190: Pop(1)
0x191: Push(Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x193: Push("voice_common") // @poff=224
0x194: Push((int) 1)
0x195: Pop(1); Push(Stack[-4] + Stack[-1]);
0x196: Push((int) 3)
0x197: Pop(2); Push(Stack[-2] % Stack[-1]);
0x198: @ SetVariable(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: GOTO 0x19f

0x19b: Push("voice_common") // @poff=224
0x19c: Push((int) 0)
0x19d: @ SetVariable(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: GOTO 0x1b2

0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-7] = Stack[-1]
0x1a2: Call2 0x1d9

0x1a3: Pop(1)
0x1a4: Pop(1); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a6: PushEmpty(bool, object)
0x1a7: Stack[-7] = Stack[-1]
0x1a8: Call2 0x1b4

0x1a9: Pop(1)
0x1aa: Pop(1); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-6] = (bool) 0
0x1ad: Return(); Pop(4)

0x1ae: Push("voice_common") // @poff=224
0x1af: Push((int) 1)
0x1b0: @ SetVariable(Stack[-2], Stack[-1])
0x1b1: Pop(2)
0x1b2: Stack[-6] = (bool) 1
0x1b3: Return(); Pop(4)

0x1b4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1b5: Stack[-5] = "c" // @poff=250
0x1b6: Stack[-4] = (int) 0
0x1b7: Push((int) 1)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b9: Push((int) 1)
0x1ba: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1bb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1bc: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1bd: Pop(1)
0x1be: Pop(0); Push((bool) Stack[-3] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1c4

0x1c1: Push((int) 1)
0x1c2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1c3: GOTO 0x1b7

0x1c4: Pop(0); Push((bool) Stack[-4] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-12] = (bool) 0
0x1c7: Return(); Pop(10)

0x1c8: Stack[-2] = (int) 0
0x1c9: Push((int) 1)
0x1ca: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cc: @ irand(Stack[-2], Stack[-4])
0x1cd: Pop(0)
0x1ce: Push((int) 1)
0x1cf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1d1: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x1d2: Pop(1)
0x1d3: PushEmpty(bool, string)
0x1d4: Stack[-3] = Stack[-1]
0x1d5: Call2 0x211

0x1d6: Stack[-2] = Stack[-14]
0x1d7: Pop(2)
0x1d8: Return(); Pop(10)

0x1d9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1da: Push("d") // @poff=220
0x1db: PushEmpty(int)
0x1dc: Call2 0x23c

0x1dd: Pop(0)
0x1de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1df: Push("m") // @poff=278
0x1e0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1e1: Stack[-4] = (int) 0
0x1e2: Push((int) 1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e4: Push((int) 1)
0x1e5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1e6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1e7: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1e8: Pop(1)
0x1e9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: GOTO 0x1ef

0x1ec: Push((int) 1)
0x1ed: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1ee: GOTO 0x1e2

0x1ef: Pop(0); Push((bool) Stack[-4] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f1: Stack[-12] = (bool) 0
0x1f2: Return(); Pop(10)

0x1f3: Stack[-2] = (int) 0
0x1f4: Push((int) 1)
0x1f5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f7: @ irand(Stack[-2], Stack[-4])
0x1f8: Pop(0)
0x1f9: Push((int) 1)
0x1fa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1fc: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x1fd: Pop(1)
0x1fe: PushEmpty(bool, string)
0x1ff: Stack[-3] = Stack[-1]
0x200: Call2 0x211

0x201: Stack[-2] = Stack[-14]
0x202: Pop(2)
0x203: Return(); Pop(10)

0x204: PushEmpty(float, float, float, float)
0x205: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x206: Pop(0)
0x207: Push((bool) 0)
0x208: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(1)
0x20a: Return(); Pop(4)

0x20b: PushEmpty(float, float, float, float)
0x20c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x20d: Pop(0)
0x20e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x20f: Pop(0)
0x210: Return(); Pop(4)

0x211: PushEmpty(bool, bool)
0x212: PushEmpty(bool)
0x213: Call2 0x26a

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x216: @ lshHasSpeech(Stack[-1], Stack[-3])
0x217: Pop(0)
0x218: Push(Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21a: @ lshPlaySpeech(Stack[-3])
0x21b: Pop(0)
0x21c: Stack[-4] = (bool) 1
0x21d: Return(); Pop(2)

0x21e: Stack[-4] = (bool) 0
0x21f: Return(); Pop(2)

0x220: PushEmpty(bool)
0x221: Call2 0x26a

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: @ lshStopSpeech()
0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty(object, object)
0x228: @ self(Stack[-1])
0x229: Pop(0)
0x22a: Stack[-1] = Stack[-3]
0x22b: Return(); Pop(2)

0x22c: Stack[-1] = 0
0x22d: PushEmpty(float, float)
0x22e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x22f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x230: Push((float)9.999999974752427e-07)
0x231: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-4] = [0.0, 0.0, 0.0]
0x234: Return(); Pop(2)

0x235: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x236: Return(); Pop(2)

0x237: PushEmpty(int, int)
0x238: @ GetVariable(Stack[-3], Stack[-1])
0x239: Pop(0)
0x23a: Stack[-1] = Stack[-4]
0x23b: Return(); Pop(2)

0x23c: PushEmpty(float, float)
0x23d: @ GetGameTime(Stack[-1])
0x23e: Pop(0)
0x23f: Push((int) 1)
0x240: PushEmpty(int)
0x241: Push((int) 24)
0x242: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x243: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x244: Return(); Pop(2)

0x245: PushEmpty()
0x246: PushEmpty(int, string)
0x247: Stack[-1] = "game_final" // @poff=282
0x248: Call2 0x237

0x249: Pop(1)
0x24a: Push((int) 0)
0x24b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-2] = (bool) 1
0x24e: Return(); Pop(0)

0x24f: Stack[-2] = (bool) 0
0x250: Return(); Pop(0)

0x251: PushEmpty(int, int)
0x252: Push("branch") // @poff=304
0x253: @ GetVariable(Stack[-1], Stack[-2])
0x254: Pop(1)
0x255: Push((int) 0)
0x256: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x258: Stack[-3] = (int) 1
0x259: Return(); Pop(2)

0x25a: GOTO 0x260

0x25b: Push((int) 1)
0x25c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-3] = (int) 2
0x25f: Return(); Pop(2)

0x260: Stack[-3] = (int) 3
0x261: Return(); Pop(2)

0x262: Stack[-1] = (int) 515540
0x263: Return(); Pop(0)

0x264: Stack[-1] = (int) 502865
0x265: Return(); Pop(0)

0x266: Stack[-1] = "ui/NPC_Klara.png" // @poff=318
0x267: Return(); Pop(0)

0x268: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=352
0x269: Return(); Pop(0)

0x26a: Stack[-1] = (bool) 1
0x26b: Return(); Pop(0)

