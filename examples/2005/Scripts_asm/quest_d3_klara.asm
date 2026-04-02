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
	W:ood3Klara1
	W:branch
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f00640033004b006c00610072006100310000006200720061006e00630068000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
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

RunOp = 0x134
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x12c Vars = (object)
		EVENT_26 Op = 0x138 Vars = (string)
		EVENT_6 Op = 0x154 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x268

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x1bb

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x166

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x2ab

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x2a9

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x2ad

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x2af

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x298

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
0x48: Call2 0x1aa

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral" // @poff=89
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 510202)
0x5c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d: Pop(1)
0x5e: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x28c

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 534060)
0x66: Push((int) 11250)
0x67: Push((int) 35646)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: Push((int) 510203)
0x6b: Push((int) -1)
0x6c: Push((int) 11249)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: Push((int) 536145)
0x70: Push((int) -1)
0x71: Push((int) 37905)
0x72: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x2b1

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x245

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all") // @poff=138
0x87: Push("idle") // @poff=146
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all") // @poff=138
0x90: Push("idle") // @poff=146
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x2b1

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-3] = Stack[-2]
0xa1: Push("") // @poff=102
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x24c

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x261

0xb0: Pop(0)
0xb1: Push((int) 35646)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x286

0xb8: Pop(2)
0xb9: Push((int) 11248)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 510202)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x28c

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 534060)
0xcb: Push((int) 11250)
0xcc: Push((int) 35646)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 510203)
0xd0: Push((int) -1)
0xd1: Push((int) 11249)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Push((int) 536145)
0xd5: Push((int) -1)
0xd6: Push((int) 37905)
0xd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 11250)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Neutral" // @poff=89
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 510204)
0xe2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe3: Pop(1)
0xe4: @@@ ClearReplies(); Obj=0 // @poff=116
0xe5: Pop(0)
0xe6: Push((int) 534061)
0xe7: Push((int) 35649)
0xe8: Push((int) 35648)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Push((int) 534063)
0xec: Push((int) 35649)
0xed: Push((int) 35650)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 35649)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral" // @poff=89
0xf6: Call2 0x95

0xf7: Pop(1)
0xf8: Push((int) 534062)
0xf9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfa: Pop(1)
0xfb: @@@ ClearReplies(); Obj=0 // @poff=116
0xfc: Pop(0)
0xfd: Push((int) 510205)
0xfe: Push((int) 11252)
0xff: Push((int) 11251)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Push((int) 534064)
0x103: Push((int) -1)
0x104: Push((int) 35652)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 11252)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral" // @poff=89
0x10d: Call2 0x95

0x10e: Pop(1)
0x10f: Push((int) 510206)
0x110: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x111: Pop(1)
0x112: @@@ ClearReplies(); Obj=0 // @poff=116
0x113: Pop(0)
0x114: Push((int) 510207)
0x115: Push((int) -1)
0x116: Push((int) 11253)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Push((int) 534065)
0x11a: Push((int) -1)
0x11b: Push((int) 35653)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x120: PushEmpty(bool)
0x121: Call2 0x2b1

0x122: Pop(0)
0x123: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x124: @ lshStopAnimation()
0x125: Pop(0)
0x126: GOTO 0x129

0x127: @ StopAnimation()
0x128: Pop(0)
0x129: Return(); Pop(0)

0x12a: GOTO 0xac

0x12b: Return(); Pop(0)

0x12c: PushEmpty()
0x12d: PushEmpty(int, object)
0x12e: Stack[-3] = Stack[-1]
0x12f: Push(-2, 1); TaskCall(0)
0x130: Call2 0x0

0x131: Pop(-2, 1); TaskReturn
0x132: Pop(2)
0x133: Return(); Pop(0)

0x134: @ Hold()
0x135: Pop(0)
0x136: GOTO 0x134

0x137: Return(); Pop(0)

0x138: PushEmpty(bool, bool)
0x139: Push("cleanup") // @poff=156
0x13a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13d: @ IsLoaded(Stack[-1])
0x13e: Pop(0)
0x13f: PushEmpty(bool)
0x140: Stack[-1] = (bool) 0
0x141: Pop(0); Push((bool) Stack[-2] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(bool)
0x144: Call2 0x164

0x145: Pop(0)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: PushEmpty(object)
0x14a: Call2 0x268

0x14b: Pop(0)
0x14c: @ RemoveActor(Stack[-1])
0x14d: Pop(1)
0x14e: GOTO 0x153

0x14f: Push("restore") // @poff=172
0x150: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x153: Return(); Pop(2)

0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: Push( Stack[0 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(bool)
0x159: Call2 0x164

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 1
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: PushEmpty(object)
0x15f: Call2 0x268

0x160: Pop(0)
0x161: @ RemoveActor(Stack[-1])
0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: Stack[-1] = (bool) 1
0x165: Return(); Pop(0)

0x166: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x167: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x168: Pop(0)
0x169: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x16a: Pop(0)
0x16b: Push(CvectorIndex(Stack[-8], 1))
0x16c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x16d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x16e: @ GetPosition(Stack[-7])
0x16f: Pop(0)
0x170: @ GetEyesHeight(Stack[-9])
0x171: Pop(0)
0x172: Push(CvectorIndex(Stack[-7], 1))
0x173: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x174: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x175: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x176: Push(CvectorIndex(Stack[-6], 1))
0x177: Stack[-1] = (int) 0
0x178: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x179: Pop(0); Push(Stack[-6] | Stack[-6]);
0x17a: Pop(1); Push(Sqrt(Stack[-1]))
0x17b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x17c: Stack[-5] = -Stack[-6]; Pop(0);
0x17d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x17e: PushEmpty(cvector, cvector)
0x17f: Push([0.0, 1.0, 0.0])
0x180: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x181: Call2 0x26e

0x182: Pop(1)
0x183: Push((int) 25)
0x184: Pop(2); Push(Stack[-2] * Stack[-1]);
0x185: Pop(2); Push(Stack[-2] + Stack[-1]);
0x186: Push([0.0, 10.0, 0.0])
0x187: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x188: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x189: @ IsOverrideActive(Stack[-2])
0x18a: Pop(0)
0x18b: Push(Stack[-2])
0x18c: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18d: Stack[-21] = (bool) 0
0x18e: Return(); Pop(18)

0x18f: @ StopWorld()
0x190: Pop(0)
0x191: @ CameraTransit(Stack[-3], Stack[-5])
0x192: Pop(0)
0x193: Push(CvectorIndex(Stack[-4], 0))
0x194: Push(CvectorIndex(Stack[-5], 2))
0x195: @ Rotate(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: PushEmpty(bool)
0x198: Call2 0x2b1

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: GOTO 0x1a4

0x19c: Push("head") // @poff=214
0x19d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x19e: Pop(1)
0x19f: Push(Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a1: Push("head") // @poff=214
0x1a2: @ LookAsyncCamera(Stack[-1])
0x1a3: Pop(1)
0x1a4: @ CameraWaitForPlayFinish()
0x1a5: Pop(0)
0x1a6: @ ResumeWorld()
0x1a7: Pop(0)
0x1a8: Stack[-21] = (bool) 1
0x1a9: Return(); Pop(18)

0x1aa: PushEmpty(bool, bool)
0x1ab: @ CameraSwitchToNormal()
0x1ac: Pop(0)
0x1ad: PushEmpty(bool)
0x1ae: Call2 0x2b1

0x1af: Pop(0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: GOTO 0x1ba

0x1b2: Push("head") // @poff=214
0x1b3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1b4: Pop(1)
0x1b5: Push(Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: Push("head") // @poff=214
0x1b8: @ UnlookAsync(Stack[-1])
0x1b9: Pop(1)
0x1ba: Return(); Pop(2)

0x1bb: PushEmpty(int, int, int, int)
0x1bc: Push("voice_common") // @poff=224
0x1bd: @ GetVariable(Stack[-1], Stack[-3])
0x1be: Pop(1)
0x1bf: Push(Stack[-2])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-7] = Stack[-1]
0x1c3: Call2 0x1f5

0x1c4: Pop(1)
0x1c5: Pop(1); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-7] = Stack[-1]
0x1c9: Call2 0x21a

0x1ca: Pop(1)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: Stack[-6] = (bool) 0
0x1ce: Return(); Pop(4)

0x1cf: Push((int) 2)
0x1d0: @ irand(Stack[-2], Stack[-1])
0x1d1: Pop(1)
0x1d2: Push(Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d4: Push("voice_common") // @poff=224
0x1d5: Push((int) 1)
0x1d6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1d7: Push((int) 3)
0x1d8: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1d9: @ SetVariable(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: GOTO 0x1e0

0x1dc: Push("voice_common") // @poff=224
0x1dd: Push((int) 0)
0x1de: @ SetVariable(Stack[-2], Stack[-1])
0x1df: Pop(2)
0x1e0: GOTO 0x1f3

0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-7] = Stack[-1]
0x1e3: Call2 0x21a

0x1e4: Pop(1)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-7] = Stack[-1]
0x1e9: Call2 0x1f5

0x1ea: Pop(1)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-6] = (bool) 0
0x1ee: Return(); Pop(4)

0x1ef: Push("voice_common") // @poff=224
0x1f0: Push((int) 1)
0x1f1: @ SetVariable(Stack[-2], Stack[-1])
0x1f2: Pop(2)
0x1f3: Stack[-6] = (bool) 1
0x1f4: Return(); Pop(4)

0x1f5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1f6: Stack[-5] = "c" // @poff=250
0x1f7: Stack[-4] = (int) 0
0x1f8: Push((int) 1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fa: Push((int) 1)
0x1fb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1fc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1fd: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x1fe: Pop(1)
0x1ff: Pop(0); Push((bool) Stack[-3] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: GOTO 0x205

0x202: Push((int) 1)
0x203: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x204: GOTO 0x1f8

0x205: Pop(0); Push((bool) Stack[-4] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: Stack[-12] = (bool) 0
0x208: Return(); Pop(10)

0x209: Stack[-2] = (int) 0
0x20a: Push((int) 1)
0x20b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: @ irand(Stack[-2], Stack[-4])
0x20e: Pop(0)
0x20f: Push((int) 1)
0x210: Pop(1); Push(Stack[-3] + Stack[-1]);
0x211: Pop(1); Push(Stack[-6] + Stack[-1]);
0x212: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x213: Pop(1)
0x214: PushEmpty(bool, string)
0x215: Stack[-3] = Stack[-1]
0x216: Call2 0x252

0x217: Stack[-2] = Stack[-14]
0x218: Pop(2)
0x219: Return(); Pop(10)

0x21a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x21b: Push("d") // @poff=220
0x21c: PushEmpty(int)
0x21d: Call2 0x27d

0x21e: Pop(0)
0x21f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x220: Push("m") // @poff=278
0x221: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x222: Stack[-4] = (int) 0
0x223: Push((int) 1)
0x224: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x225: Push((int) 1)
0x226: Pop(1); Push(Stack[-5] + Stack[-1]);
0x227: Pop(1); Push(Stack[-6] + Stack[-1]);
0x228: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x229: Pop(1)
0x22a: Pop(0); Push((bool) Stack[-3] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: GOTO 0x230

0x22d: Push((int) 1)
0x22e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x22f: GOTO 0x223

0x230: Pop(0); Push((bool) Stack[-4] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: Stack[-12] = (bool) 0
0x233: Return(); Pop(10)

0x234: Stack[-2] = (int) 0
0x235: Push((int) 1)
0x236: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: @ irand(Stack[-2], Stack[-4])
0x239: Pop(0)
0x23a: Push((int) 1)
0x23b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x23c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x23d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x23e: Pop(1)
0x23f: PushEmpty(bool, string)
0x240: Stack[-3] = Stack[-1]
0x241: Call2 0x252

0x242: Stack[-2] = Stack[-14]
0x243: Pop(2)
0x244: Return(); Pop(10)

0x245: PushEmpty(float, float, float, float)
0x246: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x247: Pop(0)
0x248: Push((bool) 0)
0x249: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(1)
0x24b: Return(); Pop(4)

0x24c: PushEmpty(float, float, float, float)
0x24d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x24e: Pop(0)
0x24f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x250: Pop(0)
0x251: Return(); Pop(4)

0x252: PushEmpty(bool, bool)
0x253: PushEmpty(bool)
0x254: Call2 0x2b1

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x257: @ lshHasSpeech(Stack[-1], Stack[-3])
0x258: Pop(0)
0x259: Push(Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25b: @ lshPlaySpeech(Stack[-3])
0x25c: Pop(0)
0x25d: Stack[-4] = (bool) 1
0x25e: Return(); Pop(2)

0x25f: Stack[-4] = (bool) 0
0x260: Return(); Pop(2)

0x261: PushEmpty(bool)
0x262: Call2 0x2b1

0x263: Pop(0)
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: @ lshStopSpeech()
0x266: Pop(0)
0x267: Return(); Pop(0)

0x268: PushEmpty(object, object)
0x269: @ self(Stack[-1])
0x26a: Pop(0)
0x26b: Stack[-1] = Stack[-3]
0x26c: Return(); Pop(2)

0x26d: Stack[-1] = 0
0x26e: PushEmpty(float, float)
0x26f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x270: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x271: Push((float)9.999999974752427e-07)
0x272: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: Stack[-4] = [0.0, 0.0, 0.0]
0x275: Return(); Pop(2)

0x276: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x277: Return(); Pop(2)

0x278: PushEmpty(int, int)
0x279: @ GetVariable(Stack[-3], Stack[-1])
0x27a: Pop(0)
0x27b: Stack[-1] = Stack[-4]
0x27c: Return(); Pop(2)

0x27d: PushEmpty(float, float)
0x27e: @ GetGameTime(Stack[-1])
0x27f: Pop(0)
0x280: Push((int) 1)
0x281: PushEmpty(int)
0x282: Push((int) 24)
0x283: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x284: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x285: Return(); Pop(2)

0x286: PushEmpty()
0x287: Push("ood3Klara1") // @poff=282
0x288: Push((int) 1)
0x289: @ SetVariable(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(int, string)
0x28e: Stack[-1] = "ood3Klara1" // @poff=282
0x28f: Call2 0x278

0x290: Pop(1)
0x291: Push((int) 0)
0x292: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-2] = (bool) 1
0x295: Return(); Pop(0)

0x296: Stack[-2] = (bool) 0
0x297: Return(); Pop(0)

0x298: PushEmpty(int, int)
0x299: Push("branch") // @poff=304
0x29a: @ GetVariable(Stack[-1], Stack[-2])
0x29b: Pop(1)
0x29c: Push((int) 0)
0x29d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29f: Stack[-3] = (int) 1
0x2a0: Return(); Pop(2)

0x2a1: GOTO 0x2a7

0x2a2: Push((int) 1)
0x2a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: Stack[-3] = (int) 2
0x2a6: Return(); Pop(2)

0x2a7: Stack[-3] = (int) 3
0x2a8: Return(); Pop(2)

0x2a9: Stack[-1] = (int) 515540
0x2aa: Return(); Pop(0)

0x2ab: Stack[-1] = (int) 502865
0x2ac: Return(); Pop(0)

0x2ad: Stack[-1] = "ui/NPC_Klara.png" // @poff=318
0x2ae: Return(); Pop(0)

0x2af: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=352
0x2b0: Return(); Pop(0)

0x2b1: Stack[-1] = (bool) 1
0x2b2: Return(); Pop(0)

