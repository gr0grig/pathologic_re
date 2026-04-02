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
	W:ui/NPC_Aglaja.png
	W:ui/NPC_Aglaja_b.png
	W:b9q03AglajaTalk
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f00410067006c0061006a0061002e0070006e0067000000750069002f004e00500043005f00410067006c0061006a0061005f0062002e0070006e006700000062003900710030003300410067006c0061006a006100540061006c006b0000006200720061006e00630068000000
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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	Rotate (3 args)
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

RunOp = 0x1e8
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd Vars = (int, int)
	GTASK_3 Vars = (bool) Params = 0
		EVENT_26 Op = 0x1fc Vars = (string)
		EVENT_6 Op = 0x210 Vars = ()
		EVENT_5 Op = 0x21c Vars = ()
		EVENT_0 Op = 0x221 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x244

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
0x11: Call2 0x34b

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x29e

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x249

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x36b

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x369

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x36d

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x36f

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x385

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
0x55: Call2 0x28d

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
0x63: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x379

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x6a: PushEmpty(object, object)
0x6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Call2 0x373

0x6e: Pop(2)
0x6f: PushEmpty(string)
0x70: Stack[-1] = "Neutral" // @poff=89
0x71: Call2 0xb7

0x72: Pop(1)
0x73: Push((int) 530278)
0x74: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x75: Pop(1)
0x76: @@@ ClearReplies(); Obj=0 // @poff=116
0x77: Pop(0)
0x78: Push((int) 530919)
0x79: Push((int) 32247)
0x7a: Push((int) 32246)
0x7b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7c: Pop(3)
0x7d: Push((int) 530923)
0x7e: Push((int) 32251)
0x7f: Push((int) 32250)
0x80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x81: Pop(3)
0x82: GOTO 0x99

0x83: PushEmpty(string)
0x84: Stack[-1] = "Neutral" // @poff=89
0x85: Call2 0xb7

0x86: Pop(1)
0x87: Push((int) 530288)
0x88: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x89: Pop(1)
0x8a: @@@ ClearReplies(); Obj=0 // @poff=116
0x8b: Pop(0)
0x8c: Push((int) 530289)
0x8d: Push((int) -1)
0x8e: Push((int) 31677)
0x8f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x90: Pop(3)
0x91: Push((int) 530918)
0x92: Push((int) -1)
0x93: Push((int) 32245)
0x94: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x95: Pop(3)
0x96: GOTO 0x99

0x97: Return(); Pop(0)

0x98: GOTO 0x62

0x99: PushEmpty(bool)
0x9a: Call2 0x371

0x9b: Pop(0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x9d: @ lshWaitForAnimEnd()
0x9e: Pop(0)
0x9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xa7

0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa4: Call2 0x328

0xa5: Pop(1)
0xa6: GOTO 0x9d

0xa7: GOTO 0xb6

0xa8: Push("all") // @poff=138
0xa9: Push("idle") // @poff=146
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: @ WaitForAnimEnd()
0xad: Pop(0)
0xae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: GOTO 0xb6

0xb1: Push("all") // @poff=138
0xb2: Push("idle") // @poff=146
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: GOTO 0xac

0xb6: Return(); Pop(0)

0xb7: PushEmpty()
0xb8: PushEmpty(bool)
0xb9: Call2 0x371

0xba: Pop(0)
0xbb: Pop(1); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Return(); Pop(0)

0xc1: PushEmpty(string, bool)
0xc2: Stack[-3] = Stack[-2]
0xc3: Push("") // @poff=102
0xc4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc6: Stack[-1] = (bool) 0
0xc7: GOTO 0xc9

0xc8: Stack[-1] = (bool) 1
0xc9: Call2 0x32f

0xca: Pop(2)
0xcb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: Push((int) 1)
0xcf: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0xd0: PushEmpty()
0xd1: Call2 0x344

0xd2: Pop(0)
0xd3: Push((int) 31666)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x379

0xd9: Pop(1)
0xda: Pop(1); Push((bool) Stack[-1] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x373

0xe0: Pop(2)
0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral" // @poff=89
0xe3: Call2 0xb7

0xe4: Pop(1)
0xe5: Push((int) 530278)
0xe6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe7: Pop(1)
0xe8: @@@ ClearReplies(); Obj=0 // @poff=116
0xe9: Pop(0)
0xea: Push((int) 530919)
0xeb: Push((int) 32247)
0xec: Push((int) 32246)
0xed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xee: Pop(3)
0xef: Push((int) 530923)
0xf0: Push((int) 32251)
0xf1: Push((int) 32250)
0xf2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral" // @poff=89
0xf7: Call2 0xb7

0xf8: Pop(1)
0xf9: Push((int) 530288)
0xfa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfb: Pop(1)
0xfc: @@@ ClearReplies(); Obj=0 // @poff=116
0xfd: Pop(0)
0xfe: Push((int) 530289)
0xff: Push((int) -1)
0x100: Push((int) 31677)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Push((int) 530918)
0x104: Push((int) -1)
0x105: Push((int) 32245)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 32251)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0xb7

0x10f: Pop(1)
0x110: Push((int) 530924)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 530926)
0x116: Push((int) 32247)
0x117: Push((int) 32253)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 530925)
0x11b: Push((int) 32247)
0x11c: Push((int) 32252)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 32247)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0xb7

0x126: Pop(1)
0x127: Push((int) 530920)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 530921)
0x12d: Push((int) 32249)
0x12e: Push((int) 32248)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Push((int) 531006)
0x132: Push((int) -1)
0x133: Push((int) 32333)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 32249)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral" // @poff=89
0x13c: Call2 0xb7

0x13d: Pop(1)
0x13e: Push((int) 530922)
0x13f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x140: Pop(1)
0x141: @@@ ClearReplies(); Obj=0 // @poff=116
0x142: Pop(0)
0x143: Push((int) 530279)
0x144: Push((int) 31668)
0x145: Push((int) 31667)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Push((int) 531005)
0x149: Push((int) 32334)
0x14a: Push((int) 32332)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 32334)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral" // @poff=89
0x153: Call2 0xb7

0x154: Pop(1)
0x155: Push((int) 531007)
0x156: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x157: Pop(1)
0x158: @@@ ClearReplies(); Obj=0 // @poff=116
0x159: Pop(0)
0x15a: Push((int) 531008)
0x15b: Push((int) 31668)
0x15c: Push((int) 32335)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 31668)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral" // @poff=89
0x165: Call2 0xb7

0x166: Pop(1)
0x167: Push((int) 530280)
0x168: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x169: Pop(1)
0x16a: @@@ ClearReplies(); Obj=0 // @poff=116
0x16b: Pop(0)
0x16c: Push((int) 531011)
0x16d: Push((int) 32340)
0x16e: Push((int) 32339)
0x16f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x170: Pop(3)
0x171: Push((int) 531009)
0x172: Push((int) 32338)
0x173: Push((int) 32337)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 32338)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral" // @poff=89
0x17c: Call2 0xb7

0x17d: Pop(1)
0x17e: Push((int) 531010)
0x17f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x180: Pop(1)
0x181: @@@ ClearReplies(); Obj=0 // @poff=116
0x182: Pop(0)
0x183: Push((int) 531013)
0x184: Push((int) 32340)
0x185: Push((int) 32341)
0x186: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x187: Pop(3)
0x188: Push((int) 531014)
0x189: Push((int) -1)
0x18a: Push((int) 32342)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 32340)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral" // @poff=89
0x193: Call2 0xb7

0x194: Pop(1)
0x195: Push((int) 531012)
0x196: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x197: Pop(1)
0x198: @@@ ClearReplies(); Obj=0 // @poff=116
0x199: Pop(0)
0x19a: Push((int) 530281)
0x19b: Push((int) 31670)
0x19c: Push((int) 31669)
0x19d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19e: Pop(3)
0x19f: Push((int) 531016)
0x1a0: Push((int) -1)
0x1a1: Push((int) 32345)
0x1a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 31670)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral" // @poff=89
0x1aa: Call2 0xb7

0x1ab: Pop(1)
0x1ac: Push((int) 530282)
0x1ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ae: Pop(1)
0x1af: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b0: Pop(0)
0x1b1: Push((int) 530283)
0x1b2: Push((int) -1)
0x1b3: Push((int) 31671)
0x1b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b5: Pop(3)
0x1b6: Push((int) 531015)
0x1b7: Push((int) 32346)
0x1b8: Push((int) 32344)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 32346)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral" // @poff=89
0x1c1: Call2 0xb7

0x1c2: Pop(1)
0x1c3: Push((int) 531017)
0x1c4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c5: Pop(1)
0x1c6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c7: Pop(0)
0x1c8: Push((int) 531018)
0x1c9: Push((int) -1)
0x1ca: Push((int) 32347)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Push((int) 531019)
0x1ce: Push((int) -1)
0x1cf: Push((int) 32348)
0x1d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d4: PushEmpty(bool)
0x1d5: Call2 0x371

0x1d6: Pop(0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: @ lshStopAnimation()
0x1d9: Pop(0)
0x1da: GOTO 0x1dd

0x1db: @ StopAnimation()
0x1dc: Pop(0)
0x1dd: Return(); Pop(0)

0x1de: GOTO 0xce

0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: PushEmpty(int, object)
0x1e2: Stack[-3] = Stack[-1]
0x1e3: Push(-2, 1); TaskCall(1)
0x1e4: Call2 0xd

0x1e5: Pop(-2, 1); TaskReturn
0x1e6: Pop(2)
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x244

0x1ea: Pop(0)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ed: PushEmpty()
0x1ee: Push(-0, 0); TaskCall(0)
0x1ef: Call2 0x0

0x1f0: Pop(-0, 0); TaskReturn
0x1f1: Pop(0)
0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Neutral" // @poff=89
0x1f4: Call2 0x328

0x1f5: Pop(1)
0x1f6: @ lshWaitForAnimEnd()
0x1f7: Pop(0)
0x1f8: GOTO 0x1f2

0x1f9: @ Hold()
0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(bool, bool)
0x1fd: Push("cleanup") // @poff=156
0x1fe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x200: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x201: @ IsLoaded(Stack[-1])
0x202: Pop(0)
0x203: Pop(0); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(object)
0x206: Call2 0x34b

0x207: Pop(0)
0x208: @ RemoveActor(Stack[-1])
0x209: Pop(1)
0x20a: GOTO 0x20f

0x20b: Push("restore") // @poff=172
0x20c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x20f: Return(); Pop(2)

0x210: Push( Stack[0 + Tasks[-1].StackPointer] )
0x211: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x212: PushEmpty(object)
0x213: Call2 0x34b

0x214: Pop(0)
0x215: @ RemoveActor(Stack[-1])
0x216: Pop(1)
0x217: @ Hold()
0x218: Pop(0)
0x219: @ Hold()
0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: @ StopGroup0()
0x21d: Pop(0)
0x21e: @ sync()
0x21f: Pop(0)
0x220: Return(); Pop(0)

0x221: PushEmpty(bool, bool)
0x222: @ IsOverrideActive(Stack[-1])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x226: EventDisable(0)
0x227: PushEmpty(bool, object)
0x228: Stack[-5] = Stack[-1]
0x229: Call2 0x23b

0x22a: Pop(2)
0x22b: EventEnable(0)
0x22c: PushEmpty(object)
0x22d: Stack[-4] = Stack[-1]
0x22e: Call2 0x1e0

0x22f: Pop(1)
0x230: Return(); Pop(2)

0x231: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x232: @ GetPosition(Stack[-3])
0x233: Pop(0)
0x234: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x235: Push(CvectorIndex(Stack[-2], 0))
0x236: Push(CvectorIndex(Stack[-3], 2))
0x237: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x238: Pop(2)
0x239: Stack[-1] = Stack[-8]
0x23a: Return(); Pop(6)

0x23b: PushEmpty(cvector, cvector)
0x23c: @@ GetPosition(Stack[-1]); Obj=3 // @poff=188
0x23d: Pop(0)
0x23e: PushEmpty(bool, cvector)
0x23f: Stack[-3] = Stack[-1]
0x240: Call2 0x231

0x241: Stack[-2] = Stack[-6]
0x242: Pop(2)
0x243: Return(); Pop(2)

0x244: PushEmpty(bool, bool)
0x245: @ IsLoaded(Stack[-1])
0x246: Pop(0)
0x247: Stack[-1] = Stack[-3]
0x248: Return(); Pop(2)

0x249: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x24a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x24b: Pop(0)
0x24c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x24d: Pop(0)
0x24e: Push(CvectorIndex(Stack[-8], 1))
0x24f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x250: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x251: @ GetPosition(Stack[-7])
0x252: Pop(0)
0x253: @ GetEyesHeight(Stack[-9])
0x254: Pop(0)
0x255: Push(CvectorIndex(Stack[-7], 1))
0x256: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x257: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x258: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x259: Push(CvectorIndex(Stack[-6], 1))
0x25a: Stack[-1] = (int) 0
0x25b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25d: Pop(1); Push(Sqrt(Stack[-1]))
0x25e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x25f: Stack[-5] = -Stack[-6]; Pop(0);
0x260: Pop(0); Push(Stack[-6] * Stack[-19]);
0x261: PushEmpty(cvector, cvector)
0x262: Push([0.0, 1.0, 0.0])
0x263: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x264: Call2 0x351

0x265: Pop(1)
0x266: Push((int) 25)
0x267: Pop(2); Push(Stack[-2] * Stack[-1]);
0x268: Pop(2); Push(Stack[-2] + Stack[-1]);
0x269: Push([0.0, 10.0, 0.0])
0x26a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x26b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x26c: @ IsOverrideActive(Stack[-2])
0x26d: Pop(0)
0x26e: Push(Stack[-2])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-21] = (bool) 0
0x271: Return(); Pop(18)

0x272: @ StopWorld()
0x273: Pop(0)
0x274: @ CameraTransit(Stack[-3], Stack[-5])
0x275: Pop(0)
0x276: Push(CvectorIndex(Stack[-4], 0))
0x277: Push(CvectorIndex(Stack[-5], 2))
0x278: @ Rotate(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: PushEmpty(bool)
0x27b: Call2 0x371

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x287

0x27f: Push("head") // @poff=214
0x280: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x281: Pop(1)
0x282: Push(Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: Push("head") // @poff=214
0x285: @ LookAsyncCamera(Stack[-1])
0x286: Pop(1)
0x287: @ CameraWaitForPlayFinish()
0x288: Pop(0)
0x289: @ ResumeWorld()
0x28a: Pop(0)
0x28b: Stack[-21] = (bool) 1
0x28c: Return(); Pop(18)

0x28d: PushEmpty(bool, bool)
0x28e: @ CameraSwitchToNormal()
0x28f: Pop(0)
0x290: PushEmpty(bool)
0x291: Call2 0x371

0x292: Pop(0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: GOTO 0x29d

0x295: Push("head") // @poff=214
0x296: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x297: Pop(1)
0x298: Push(Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29a: Push("head") // @poff=214
0x29b: @ UnlookAsync(Stack[-1])
0x29c: Pop(1)
0x29d: Return(); Pop(2)

0x29e: PushEmpty(int, int, int, int)
0x29f: Push("voice_common") // @poff=224
0x2a0: @ GetVariable(Stack[-1], Stack[-3])
0x2a1: Pop(1)
0x2a2: Push(Stack[-2])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-7] = Stack[-1]
0x2a6: Call2 0x2d8

0x2a7: Pop(1)
0x2a8: Pop(1); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-7] = Stack[-1]
0x2ac: Call2 0x2fd

0x2ad: Pop(1)
0x2ae: Pop(1); Push((bool) Stack[-1] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-6] = (bool) 0
0x2b1: Return(); Pop(4)

0x2b2: Push((int) 2)
0x2b3: @ irand(Stack[-2], Stack[-1])
0x2b4: Pop(1)
0x2b5: Push(Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b7: Push("voice_common") // @poff=224
0x2b8: Push((int) 1)
0x2b9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ba: Push((int) 3)
0x2bb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2bc: @ SetVariable(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: GOTO 0x2c3

0x2bf: Push("voice_common") // @poff=224
0x2c0: Push((int) 0)
0x2c1: @ SetVariable(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: GOTO 0x2d6

0x2c4: PushEmpty(bool, object)
0x2c5: Stack[-7] = Stack[-1]
0x2c6: Call2 0x2fd

0x2c7: Pop(1)
0x2c8: Pop(1); Push((bool) Stack[-1] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-7] = Stack[-1]
0x2cc: Call2 0x2d8

0x2cd: Pop(1)
0x2ce: Pop(1); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d0: Stack[-6] = (bool) 0
0x2d1: Return(); Pop(4)

0x2d2: Push("voice_common") // @poff=224
0x2d3: Push((int) 1)
0x2d4: @ SetVariable(Stack[-2], Stack[-1])
0x2d5: Pop(2)
0x2d6: Stack[-6] = (bool) 1
0x2d7: Return(); Pop(4)

0x2d8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2d9: Stack[-5] = "c" // @poff=250
0x2da: Stack[-4] = (int) 0
0x2db: Push((int) 1)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2dd: Push((int) 1)
0x2de: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2df: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2e1: Pop(1)
0x2e2: Pop(0); Push((bool) Stack[-3] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2e8

0x2e5: Push((int) 1)
0x2e6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2e7: GOTO 0x2db

0x2e8: Pop(0); Push((bool) Stack[-4] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2ea: Stack[-12] = (bool) 0
0x2eb: Return(); Pop(10)

0x2ec: Stack[-2] = (int) 0
0x2ed: Push((int) 1)
0x2ee: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: @ irand(Stack[-2], Stack[-4])
0x2f1: Pop(0)
0x2f2: Push((int) 1)
0x2f3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2f6: Pop(1)
0x2f7: PushEmpty(bool, string)
0x2f8: Stack[-3] = Stack[-1]
0x2f9: Call2 0x335

0x2fa: Stack[-2] = Stack[-14]
0x2fb: Pop(2)
0x2fc: Return(); Pop(10)

0x2fd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2fe: Push("d") // @poff=220
0x2ff: PushEmpty(int)
0x300: Call2 0x360

0x301: Pop(0)
0x302: Pop(2); Push(Stack[-2] + Stack[-1]);
0x303: Push("m") // @poff=278
0x304: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x305: Stack[-4] = (int) 0
0x306: Push((int) 1)
0x307: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x308: Push((int) 1)
0x309: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x30c: Pop(1)
0x30d: Pop(0); Push((bool) Stack[-3] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: GOTO 0x313

0x310: Push((int) 1)
0x311: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x312: GOTO 0x306

0x313: Pop(0); Push((bool) Stack[-4] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x315: Stack[-12] = (bool) 0
0x316: Return(); Pop(10)

0x317: Stack[-2] = (int) 0
0x318: Push((int) 1)
0x319: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: @ irand(Stack[-2], Stack[-4])
0x31c: Pop(0)
0x31d: Push((int) 1)
0x31e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x31f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x320: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x321: Pop(1)
0x322: PushEmpty(bool, string)
0x323: Stack[-3] = Stack[-1]
0x324: Call2 0x335

0x325: Stack[-2] = Stack[-14]
0x326: Pop(2)
0x327: Return(); Pop(10)

0x328: PushEmpty(float, float, float, float)
0x329: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x32a: Pop(0)
0x32b: Push((bool) 0)
0x32c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32d: Pop(1)
0x32e: Return(); Pop(4)

0x32f: PushEmpty(float, float, float, float)
0x330: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x331: Pop(0)
0x332: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x333: Pop(0)
0x334: Return(); Pop(4)

0x335: PushEmpty(bool, bool)
0x336: PushEmpty(bool)
0x337: Call2 0x371

0x338: Pop(0)
0x339: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x33b: Pop(0)
0x33c: Push(Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33e: @ lshPlaySpeech(Stack[-3])
0x33f: Pop(0)
0x340: Stack[-4] = (bool) 1
0x341: Return(); Pop(2)

0x342: Stack[-4] = (bool) 0
0x343: Return(); Pop(2)

0x344: PushEmpty(bool)
0x345: Call2 0x371

0x346: Pop(0)
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: @ lshStopSpeech()
0x349: Pop(0)
0x34a: Return(); Pop(0)

0x34b: PushEmpty(object, object)
0x34c: @ self(Stack[-1])
0x34d: Pop(0)
0x34e: Stack[-1] = Stack[-3]
0x34f: Return(); Pop(2)

0x350: Stack[-1] = 0
0x351: PushEmpty(float, float)
0x352: Pop(0); Push(Stack[-3] | Stack[-3]);
0x353: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x354: Push((float)9.999999974752427e-07)
0x355: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-4] = [0.0, 0.0, 0.0]
0x358: Return(); Pop(2)

0x359: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35a: Return(); Pop(2)

0x35b: PushEmpty(int, int)
0x35c: @ GetVariable(Stack[-3], Stack[-1])
0x35d: Pop(0)
0x35e: Stack[-1] = Stack[-4]
0x35f: Return(); Pop(2)

0x360: PushEmpty(float, float)
0x361: @ GetGameTime(Stack[-1])
0x362: Pop(0)
0x363: Push((int) 1)
0x364: PushEmpty(int)
0x365: Push((int) 24)
0x366: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x367: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x368: Return(); Pop(2)

0x369: Stack[-1] = (int) 515527
0x36a: Return(); Pop(0)

0x36b: Stack[-1] = (int) 513334
0x36c: Return(); Pop(0)

0x36d: Stack[-1] = "ui/NPC_Aglaja.png" // @poff=282
0x36e: Return(); Pop(0)

0x36f: Stack[-1] = "ui/NPC_Aglaja_b.png" // @poff=318
0x370: Return(); Pop(0)

0x371: Stack[-1] = (bool) 1
0x372: Return(); Pop(0)

0x373: PushEmpty()
0x374: Push("b9q03AglajaTalk") // @poff=358
0x375: Push((int) 1)
0x376: @ SetVariable(Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: Return(); Pop(0)

0x379: PushEmpty()
0x37a: PushEmpty(int, string)
0x37b: Stack[-1] = "b9q03AglajaTalk" // @poff=358
0x37c: Call2 0x35b

0x37d: Pop(1)
0x37e: Push((int) 0)
0x37f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-2] = (bool) 1
0x382: Return(); Pop(0)

0x383: Stack[-2] = (bool) 0
0x384: Return(); Pop(0)

0x385: PushEmpty(int, int)
0x386: Push("branch") // @poff=390
0x387: @ GetVariable(Stack[-1], Stack[-2])
0x388: Pop(1)
0x389: Push((int) 0)
0x38a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38c: Stack[-3] = (int) 1
0x38d: Return(); Pop(2)

0x38e: GOTO 0x394

0x38f: Push((int) 1)
0x390: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-3] = (int) 2
0x393: Return(); Pop(2)

0x394: Stack[-3] = (int) 3
0x395: Return(); Pop(2)

