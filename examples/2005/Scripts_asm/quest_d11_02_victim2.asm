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
	W:execute
	W:bdie
	W:d11q02
	W:cleanup
	W:restore
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:quest_d11_02
	W:actor_unload
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c00650000006500780065006300750074006500000062006400690065000000640031003100710030003200000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000710075006500730074005f006400310031005f003000320000006100630074006f0072005f0075006e006c006f006100640000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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
	WaitForAnimEnd (1 args)
	LockAnimationEnd (2 args)
	GetVariable (2 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0xcc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xd1 Vars = (string)
		EVENT_5 Op = 0xe8 Vars = ()
		EVENT_0 Op = 0xef Vars = (object)
		EVENT_6 Op = 0x117 Vars = ()

Events:
EVENT_6 Op = 0x1ae Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x129

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1c7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1c5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1c9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1cb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1b4

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
0x41: Call2 0x16d

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 514175)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 514176)
0x5a: Push((int) -1)
0x5b: Push((int) 15390)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 539614)
0x5f: Push((int) -1)
0x60: Push((int) 41561)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x1cd

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x17e

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x1cd

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x185

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x18b

0x9f: Pop(0)
0xa0: Push((int) 15389)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 514175)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 514176)
0xad: Push((int) -1)
0xae: Push((int) 15390)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: Push((int) 539614)
0xb2: Push((int) -1)
0xb3: Push((int) 41561)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x1cd

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: PushEmpty(int, object)
0xc6: Stack[-3] = Stack[-1]
0xc7: Push(-2, 1); TaskCall(0)
0xc8: Call2 0x0

0xc9: Pop(-2, 1); TaskReturn
0xca: Pop(2)
0xcb: Return(); Pop(0)

0xcc: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xcd: @ Hold()
0xce: Pop(0)
0xcf: GOTO 0xcd

0xd0: Return(); Pop(0)

0xd1: PushEmpty(bool, bool)
0xd2: Push("execute") // @poff=156
0xd3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xd6: Push("all") // @poff=138
0xd7: Push("bdie") // @poff=172
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ WaitForAnimEnd(Stack[-1])
0xdb: Pop(0)
0xdc: Push(Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xde: Push("all") // @poff=138
0xdf: Push("bdie") // @poff=172
0xe0: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: GOTO 0xe7

0xe3: PushEmpty(string)
0xe4: Stack[-4] = Stack[-1]
0xe5: Call2 0xfb

0xe6: Pop(1)
0xe7: Return(); Pop(2)

0xe8: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xea: Push("all") // @poff=138
0xeb: Push("bdie") // @poff=172
0xec: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xed: Pop(2)
0xee: Return(); Pop(0)

0xef: PushEmpty(int, int)
0xf0: Push("d11q02") // @poff=182
0xf1: @ GetVariable(Stack[-1], Stack[-2])
0xf2: Pop(1)
0xf3: Push((int) 2)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf6: PushEmpty(object)
0xf7: Stack[-4] = Stack[-1]
0xf8: Call2 0xc4

0xf9: Pop(1)
0xfa: Return(); Pop(2)

0xfb: PushEmpty(bool, bool)
0xfc: Push("cleanup") // @poff=196
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
0x10d: Call2 0x192

0x10e: Pop(0)
0x10f: @ RemoveActor(Stack[-1])
0x110: Pop(1)
0x111: GOTO 0x116

0x112: Push("restore") // @poff=212
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
0x122: Call2 0x192

0x123: Pop(0)
0x124: @ RemoveActor(Stack[-1])
0x125: Pop(1)
0x126: Return(); Pop(0)

0x127: Stack[-1] = (bool) 1
0x128: Return(); Pop(0)

0x129: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x12a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=228
0x12b: Pop(0)
0x12c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=240
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
0x144: Call2 0x198

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
0x15b: Call2 0x1cd

0x15c: Pop(0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: GOTO 0x167

0x15f: Push("head") // @poff=254
0x160: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x161: Pop(1)
0x162: Push(Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: Push("head") // @poff=254
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
0x171: Call2 0x1cd

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: GOTO 0x17d

0x175: Push("head") // @poff=254
0x176: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x177: Pop(1)
0x178: Push(Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: Push("head") // @poff=254
0x17b: @ UnlookAsync(Stack[-1])
0x17c: Pop(1)
0x17d: Return(); Pop(2)

0x17e: PushEmpty(float, float, float, float)
0x17f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x180: Pop(0)
0x181: Push((bool) 0)
0x182: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(1)
0x184: Return(); Pop(4)

0x185: PushEmpty(float, float, float, float)
0x186: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x187: Pop(0)
0x188: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x189: Pop(0)
0x18a: Return(); Pop(4)

0x18b: PushEmpty(bool)
0x18c: Call2 0x1cd

0x18d: Pop(0)
0x18e: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18f: @ lshStopSpeech()
0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: PushEmpty(object, object)
0x193: @ self(Stack[-1])
0x194: Pop(0)
0x195: Stack[-1] = Stack[-3]
0x196: Return(); Pop(2)

0x197: Stack[-1] = 0
0x198: PushEmpty(float, float)
0x199: Pop(0); Push(Stack[-3] | Stack[-3]);
0x19a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x19b: Push((float)9.999999974752427e-07)
0x19c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19e: Stack[-4] = [0.0, 0.0, 0.0]
0x19f: Return(); Pop(2)

0x1a0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1a1: Return(); Pop(2)

0x1a2: PushEmpty(object, object)
0x1a3: @ FindActor(Stack[-1], Stack[-4])
0x1a4: Pop(0)
0x1a5: Pop(0); PushNull((bool) Stack[-1] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: Stack[-5] = (bool) 0
0x1a8: Return(); Pop(2)

0x1a9: @ Trigger(Stack[-1], Stack[-3])
0x1aa: Pop(0)
0x1ab: Stack[-5] = (bool) 1
0x1ac: Return(); Pop(2)

0x1ad: Stack[-1] = 0
0x1ae: PushEmpty(bool, string, string)
0x1af: Stack[-2] = "quest_d11_02" // @poff=264
0x1b0: Stack[-1] = "actor_unload" // @poff=290
0x1b1: Call2 0x1a2

0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(int, int)
0x1b5: Push("branch") // @poff=316
0x1b6: @ GetVariable(Stack[-1], Stack[-2])
0x1b7: Pop(1)
0x1b8: Push((int) 0)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: Stack[-3] = (int) 1
0x1bc: Return(); Pop(2)

0x1bd: GOTO 0x1c3

0x1be: Push((int) 1)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-3] = (int) 2
0x1c2: Return(); Pop(2)

0x1c3: Stack[-3] = (int) 3
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = (int) 515568
0x1c6: Return(); Pop(0)

0x1c7: Stack[-1] = (int) 503353
0x1c8: Return(); Pop(0)

0x1c9: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=330
0x1ca: Return(); Pop(0)

0x1cb: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=370
0x1cc: Return(); Pop(0)

0x1cd: Stack[-1] = (bool) 0
0x1ce: Return(); Pop(0)

