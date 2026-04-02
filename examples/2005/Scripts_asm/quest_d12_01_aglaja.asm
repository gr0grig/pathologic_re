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
	W:branch
	W:ui/NPC_Aglaja.png
	W:ui/NPC_Aglaja_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006200720061006e00630068000000750069002f004e00500043005f00410067006c0061006a0061002e0070006e0067000000750069002f004e00500043005f00410067006c0061006a0061005f0062002e0070006e0067000000
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

RunOp = 0x1c3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1c7 Vars = (object)
		EVENT_26 Op = 0x1d3 Vars = (string)
		EVENT_6 Op = 0x1ef Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x303

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x256

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x201

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x32f

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x32d

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x331

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x333

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x31c

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
0x48: Call2 0x245

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral" // @poff=89
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 538452)
0x5c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d: Pop(1)
0x5e: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f: Pop(0)
0x60: Push((int) 538453)
0x61: Push((int) 40350)
0x62: Push((int) 40335)
0x63: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64: Pop(3)
0x65: Push((int) 538470)
0x66: Push((int) -1)
0x67: Push((int) 40352)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: Push((int) 538472)
0x6b: Push((int) -1)
0x6c: Push((int) 40354)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x335

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x2e0

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all") // @poff=138
0x82: Push("idle") // @poff=146
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all") // @poff=138
0x8b: Push("idle") // @poff=146
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x335

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-3] = Stack[-2]
0x9c: Push("") // @poff=102
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x2e7

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x2fc

0xab: Pop(0)
0xac: Push((int) 40334)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral" // @poff=89
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 538452)
0xb4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb5: Pop(1)
0xb6: @@@ ClearReplies(); Obj=0 // @poff=116
0xb7: Pop(0)
0xb8: Push((int) 538453)
0xb9: Push((int) 40350)
0xba: Push((int) 40335)
0xbb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbc: Pop(3)
0xbd: Push((int) 538470)
0xbe: Push((int) -1)
0xbf: Push((int) 40352)
0xc0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc1: Pop(3)
0xc2: Push((int) 538472)
0xc3: Push((int) -1)
0xc4: Push((int) 40354)
0xc5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 40350)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral" // @poff=89
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 538468)
0xd0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd1: Pop(1)
0xd2: @@@ ClearReplies(); Obj=0 // @poff=116
0xd3: Pop(0)
0xd4: Push((int) 539946)
0xd5: Push((int) 41911)
0xd6: Push((int) 41910)
0xd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd8: Pop(3)
0xd9: Push((int) 539948)
0xda: Push((int) -1)
0xdb: Push((int) 41912)
0xdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 41911)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 539947)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 539949)
0xec: Push((int) 41914)
0xed: Push((int) 41913)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Push((int) 539951)
0xf1: Push((int) -1)
0xf2: Push((int) 41915)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 41914)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral" // @poff=89
0xfb: Call2 0x90

0xfc: Pop(1)
0xfd: Push((int) 539950)
0xfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xff: Pop(1)
0x100: @@@ ClearReplies(); Obj=0 // @poff=116
0x101: Pop(0)
0x102: Push((int) 538469)
0x103: Push((int) 40336)
0x104: Push((int) 40351)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 539952)
0x108: Push((int) 40338)
0x109: Push((int) 41916)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 40336)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral" // @poff=89
0x112: Call2 0x90

0x113: Pop(1)
0x114: Push((int) 538454)
0x115: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x116: Pop(1)
0x117: @@@ ClearReplies(); Obj=0 // @poff=116
0x118: Pop(0)
0x119: Push((int) 538455)
0x11a: Push((int) 40338)
0x11b: Push((int) 40337)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Push((int) 539953)
0x11f: Push((int) 40342)
0x120: Push((int) 41918)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 40338)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=89
0x129: Call2 0x90

0x12a: Pop(1)
0x12b: Push((int) 538456)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=116
0x12f: Pop(0)
0x130: Push((int) 538457)
0x131: Push((int) 40340)
0x132: Push((int) 40339)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 40340)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0x90

0x13c: Pop(1)
0x13d: Push((int) 538458)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 538459)
0x143: Push((int) 40342)
0x144: Push((int) 40341)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 40342)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=89
0x14d: Call2 0x90

0x14e: Pop(1)
0x14f: Push((int) 538460)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=116
0x153: Pop(0)
0x154: Push((int) 538461)
0x155: Push((int) 40344)
0x156: Push((int) 40343)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 538475)
0x15a: Push((int) 40344)
0x15b: Push((int) 40358)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 40344)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0x90

0x165: Pop(1)
0x166: Push((int) 538462)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 538463)
0x16c: Push((int) 40346)
0x16d: Push((int) 40345)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 40346)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral" // @poff=89
0x176: Call2 0x90

0x177: Pop(1)
0x178: Push((int) 538464)
0x179: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17a: Pop(1)
0x17b: @@@ ClearReplies(); Obj=0 // @poff=116
0x17c: Pop(0)
0x17d: Push((int) 538465)
0x17e: Push((int) 40348)
0x17f: Push((int) 40347)
0x180: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x181: Pop(3)
0x182: Push((int) 538474)
0x183: Push((int) 40348)
0x184: Push((int) 40356)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 40348)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral" // @poff=89
0x18d: Call2 0x90

0x18e: Pop(1)
0x18f: Push((int) 538466)
0x190: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x191: Pop(1)
0x192: @@@ ClearReplies(); Obj=0 // @poff=116
0x193: Pop(0)
0x194: Push((int) 538467)
0x195: Push((int) 16089)
0x196: Push((int) 40349)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: Push((int) 538473)
0x19a: Push((int) 16089)
0x19b: Push((int) 40355)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 16089)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral" // @poff=89
0x1a4: Call2 0x90

0x1a5: Pop(1)
0x1a6: Push((int) 514843)
0x1a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a8: Pop(1)
0x1a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1aa: Pop(0)
0x1ab: Push((int) 514844)
0x1ac: Push((int) -1)
0x1ad: Push((int) 16090)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Push((int) 514845)
0x1b1: Push((int) -1)
0x1b2: Push((int) 16091)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b7: PushEmpty(bool)
0x1b8: Call2 0x335

0x1b9: Pop(0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: @ lshStopAnimation()
0x1bc: Pop(0)
0x1bd: GOTO 0x1c0

0x1be: @ StopAnimation()
0x1bf: Pop(0)
0x1c0: Return(); Pop(0)

0x1c1: GOTO 0xa7

0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Call2 0x1cf

0x1c5: Pop(0)
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: PushEmpty(int, object)
0x1c9: Stack[-3] = Stack[-1]
0x1ca: Push(-2, 1); TaskCall(0)
0x1cb: Call2 0x0

0x1cc: Pop(-2, 1); TaskReturn
0x1cd: Pop(2)
0x1ce: Return(); Pop(0)

0x1cf: @ Hold()
0x1d0: Pop(0)
0x1d1: GOTO 0x1cf

0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(bool, bool)
0x1d4: Push("cleanup") // @poff=156
0x1d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d8: @ IsLoaded(Stack[-1])
0x1d9: Pop(0)
0x1da: PushEmpty(bool)
0x1db: Stack[-1] = (bool) 0
0x1dc: Pop(0); Push((bool) Stack[-2] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(bool)
0x1df: Call2 0x1ff

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = (bool) 1
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e4: PushEmpty(object)
0x1e5: Call2 0x303

0x1e6: Pop(0)
0x1e7: @ RemoveActor(Stack[-1])
0x1e8: Pop(1)
0x1e9: GOTO 0x1ee

0x1ea: Push("restore") // @poff=172
0x1eb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1ee: Return(); Pop(2)

0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: PushEmpty(bool)
0x1f4: Call2 0x1ff

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: PushEmpty(object)
0x1fa: Call2 0x303

0x1fb: Pop(0)
0x1fc: @ RemoveActor(Stack[-1])
0x1fd: Pop(1)
0x1fe: Return(); Pop(0)

0x1ff: Stack[-1] = (bool) 1
0x200: Return(); Pop(0)

0x201: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x202: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x203: Pop(0)
0x204: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x205: Pop(0)
0x206: Push(CvectorIndex(Stack[-8], 1))
0x207: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x208: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x209: @ GetPosition(Stack[-7])
0x20a: Pop(0)
0x20b: @ GetEyesHeight(Stack[-9])
0x20c: Pop(0)
0x20d: Push(CvectorIndex(Stack[-7], 1))
0x20e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x210: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x211: Push(CvectorIndex(Stack[-6], 1))
0x212: Stack[-1] = (int) 0
0x213: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x214: Pop(0); Push(Stack[-6] | Stack[-6]);
0x215: Pop(1); Push(Sqrt(Stack[-1]))
0x216: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x217: Stack[-5] = -Stack[-6]; Pop(0);
0x218: Pop(0); Push(Stack[-6] * Stack[-19]);
0x219: PushEmpty(cvector, cvector)
0x21a: Push([0.0, 1.0, 0.0])
0x21b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x21c: Call2 0x309

0x21d: Pop(1)
0x21e: Push((int) 25)
0x21f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x220: Pop(2); Push(Stack[-2] + Stack[-1]);
0x221: Push([0.0, 10.0, 0.0])
0x222: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x223: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x224: @ IsOverrideActive(Stack[-2])
0x225: Pop(0)
0x226: Push(Stack[-2])
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: Stack[-21] = (bool) 0
0x229: Return(); Pop(18)

0x22a: @ StopWorld()
0x22b: Pop(0)
0x22c: @ CameraTransit(Stack[-3], Stack[-5])
0x22d: Pop(0)
0x22e: Push(CvectorIndex(Stack[-4], 0))
0x22f: Push(CvectorIndex(Stack[-5], 2))
0x230: @ Rotate(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: PushEmpty(bool)
0x233: Call2 0x335

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x23f

0x237: Push("head") // @poff=214
0x238: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x239: Pop(1)
0x23a: Push(Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23c: Push("head") // @poff=214
0x23d: @ LookAsyncCamera(Stack[-1])
0x23e: Pop(1)
0x23f: @ CameraWaitForPlayFinish()
0x240: Pop(0)
0x241: @ ResumeWorld()
0x242: Pop(0)
0x243: Stack[-21] = (bool) 1
0x244: Return(); Pop(18)

0x245: PushEmpty(bool, bool)
0x246: @ CameraSwitchToNormal()
0x247: Pop(0)
0x248: PushEmpty(bool)
0x249: Call2 0x335

0x24a: Pop(0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: GOTO 0x255

0x24d: Push("head") // @poff=214
0x24e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24f: Pop(1)
0x250: Push(Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x252: Push("head") // @poff=214
0x253: @ UnlookAsync(Stack[-1])
0x254: Pop(1)
0x255: Return(); Pop(2)

0x256: PushEmpty(int, int, int, int)
0x257: Push("voice_common") // @poff=224
0x258: @ GetVariable(Stack[-1], Stack[-3])
0x259: Pop(1)
0x25a: Push(Stack[-2])
0x25b: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x25c: PushEmpty(bool, object)
0x25d: Stack[-7] = Stack[-1]
0x25e: Call2 0x290

0x25f: Pop(1)
0x260: Pop(1); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x262: PushEmpty(bool, object)
0x263: Stack[-7] = Stack[-1]
0x264: Call2 0x2b5

0x265: Pop(1)
0x266: Pop(1); Push((bool) Stack[-1] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[-6] = (bool) 0
0x269: Return(); Pop(4)

0x26a: Push((int) 2)
0x26b: @ irand(Stack[-2], Stack[-1])
0x26c: Pop(1)
0x26d: Push(Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x26f: Push("voice_common") // @poff=224
0x270: Push((int) 1)
0x271: Pop(1); Push(Stack[-4] + Stack[-1]);
0x272: Push((int) 3)
0x273: Pop(2); Push(Stack[-2] % Stack[-1]);
0x274: @ SetVariable(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: GOTO 0x27b

0x277: Push("voice_common") // @poff=224
0x278: Push((int) 0)
0x279: @ SetVariable(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: GOTO 0x28e

0x27c: PushEmpty(bool, object)
0x27d: Stack[-7] = Stack[-1]
0x27e: Call2 0x2b5

0x27f: Pop(1)
0x280: Pop(1); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x282: PushEmpty(bool, object)
0x283: Stack[-7] = Stack[-1]
0x284: Call2 0x290

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-6] = (bool) 0
0x289: Return(); Pop(4)

0x28a: Push("voice_common") // @poff=224
0x28b: Push((int) 1)
0x28c: @ SetVariable(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: Stack[-6] = (bool) 1
0x28f: Return(); Pop(4)

0x290: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x291: Stack[-5] = "c" // @poff=250
0x292: Stack[-4] = (int) 0
0x293: Push((int) 1)
0x294: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x295: Push((int) 1)
0x296: Pop(1); Push(Stack[-5] + Stack[-1]);
0x297: Pop(1); Push(Stack[-6] + Stack[-1]);
0x298: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x299: Pop(1)
0x29a: Pop(0); Push((bool) Stack[-3] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a0

0x29d: Push((int) 1)
0x29e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x29f: GOTO 0x293

0x2a0: Pop(0); Push((bool) Stack[-4] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-12] = (bool) 0
0x2a3: Return(); Pop(10)

0x2a4: Stack[-2] = (int) 0
0x2a5: Push((int) 1)
0x2a6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: @ irand(Stack[-2], Stack[-4])
0x2a9: Pop(0)
0x2aa: Push((int) 1)
0x2ab: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ad: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2ae: Pop(1)
0x2af: PushEmpty(bool, string)
0x2b0: Stack[-3] = Stack[-1]
0x2b1: Call2 0x2ed

0x2b2: Stack[-2] = Stack[-14]
0x2b3: Pop(2)
0x2b4: Return(); Pop(10)

0x2b5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2b6: Push("d") // @poff=220
0x2b7: PushEmpty(int)
0x2b8: Call2 0x313

0x2b9: Pop(0)
0x2ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bb: Push("m") // @poff=278
0x2bc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2bd: Stack[-4] = (int) 0
0x2be: Push((int) 1)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c0: Push((int) 1)
0x2c1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2c2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2c3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2c4: Pop(1)
0x2c5: Pop(0); Push((bool) Stack[-3] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: GOTO 0x2cb

0x2c8: Push((int) 1)
0x2c9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ca: GOTO 0x2be

0x2cb: Pop(0); Push((bool) Stack[-4] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: Stack[-12] = (bool) 0
0x2ce: Return(); Pop(10)

0x2cf: Stack[-2] = (int) 0
0x2d0: Push((int) 1)
0x2d1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d3: @ irand(Stack[-2], Stack[-4])
0x2d4: Pop(0)
0x2d5: Push((int) 1)
0x2d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2d9: Pop(1)
0x2da: PushEmpty(bool, string)
0x2db: Stack[-3] = Stack[-1]
0x2dc: Call2 0x2ed

0x2dd: Stack[-2] = Stack[-14]
0x2de: Pop(2)
0x2df: Return(); Pop(10)

0x2e0: PushEmpty(float, float, float, float)
0x2e1: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2e2: Pop(0)
0x2e3: Push((bool) 0)
0x2e4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e5: Pop(1)
0x2e6: Return(); Pop(4)

0x2e7: PushEmpty(float, float, float, float)
0x2e8: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2e9: Pop(0)
0x2ea: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2eb: Pop(0)
0x2ec: Return(); Pop(4)

0x2ed: PushEmpty(bool, bool)
0x2ee: PushEmpty(bool)
0x2ef: Call2 0x335

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2f3: Pop(0)
0x2f4: Push(Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f6: @ lshPlaySpeech(Stack[-3])
0x2f7: Pop(0)
0x2f8: Stack[-4] = (bool) 1
0x2f9: Return(); Pop(2)

0x2fa: Stack[-4] = (bool) 0
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(bool)
0x2fd: Call2 0x335

0x2fe: Pop(0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: @ lshStopSpeech()
0x301: Pop(0)
0x302: Return(); Pop(0)

0x303: PushEmpty(object, object)
0x304: @ self(Stack[-1])
0x305: Pop(0)
0x306: Stack[-1] = Stack[-3]
0x307: Return(); Pop(2)

0x308: Stack[-1] = 0
0x309: PushEmpty(float, float)
0x30a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30c: Push((float)9.999999974752427e-07)
0x30d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-4] = [0.0, 0.0, 0.0]
0x310: Return(); Pop(2)

0x311: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x312: Return(); Pop(2)

0x313: PushEmpty(float, float)
0x314: @ GetGameTime(Stack[-1])
0x315: Pop(0)
0x316: Push((int) 1)
0x317: PushEmpty(int)
0x318: Push((int) 24)
0x319: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x31a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x31b: Return(); Pop(2)

0x31c: PushEmpty(int, int)
0x31d: Push("branch") // @poff=282
0x31e: @ GetVariable(Stack[-1], Stack[-2])
0x31f: Pop(1)
0x320: Push((int) 0)
0x321: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x323: Stack[-3] = (int) 1
0x324: Return(); Pop(2)

0x325: GOTO 0x32b

0x326: Push((int) 1)
0x327: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-3] = (int) 2
0x32a: Return(); Pop(2)

0x32b: Stack[-3] = (int) 3
0x32c: Return(); Pop(2)

0x32d: Stack[-1] = (int) 515527
0x32e: Return(); Pop(0)

0x32f: Stack[-1] = (int) 513334
0x330: Return(); Pop(0)

0x331: Stack[-1] = "ui/NPC_Aglaja.png" // @poff=296
0x332: Return(); Pop(0)

0x333: Stack[-1] = "ui/NPC_Aglaja_b.png" // @poff=332
0x334: Return(); Pop(0)

0x335: Stack[-1] = (bool) 1
0x336: Return(); Pop(0)

