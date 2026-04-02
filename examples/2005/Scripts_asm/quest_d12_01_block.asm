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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:game_final
	W:isobor@door1
	W:c_iFinalEmpty
	W:d12q01BurahInSobor
	W:d12q01KlaraInSobor
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Block.png
	W:ui/NPC_Block_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900670061006d0065005f00660069006e0061006c000000690073006f0062006f007200400064006f006f0072003100000063005f006900460069006e0061006c0045006d0070007400790000006400310032007100300031004200750072006100680049006e0053006f0062006f00720000006400310032007100300031004b006c0061007200610049006e0053006f0062006f0072000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0042006c006f0063006b002e0070006e0067000000750069002f004e00500043005f0042006c006f0063006b005f0062002e0070006e0067000000
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
	FindActor (2 args)
	Trace (1 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x235
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x239 Vars = (object)
		EVENT_26 Op = 0x245 Vars = (string)
		EVENT_6 Op = 0x261 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x375

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x2c8

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x273

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x46e

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x46c

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x470

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x472

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x45b

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
0x48: Call2 0x2b7

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
0x56: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3da

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral" // @poff=89
0x5f: Call2 0xb9

0x60: Pop(1)
0x61: Push((int) 535541)
0x62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63: Pop(1)
0x64: @@@ ClearReplies(); Obj=0 // @poff=116
0x65: Pop(0)
0x66: Push((int) 535542)
0x67: Push((int) 37226)
0x68: Push((int) 37225)
0x69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a: Pop(3)
0x6b: Push((int) 540019)
0x6c: Push((int) 41991)
0x6d: Push((int) 41990)
0x6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x3e6

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 535545)
0x76: Push((int) 42317)
0x77: Push((int) 37228)
0x78: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x3f2

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 535559)
0x80: Push((int) 37243)
0x81: Push((int) 37242)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: Push((int) 540276)
0x85: Push((int) 42323)
0x86: Push((int) 42256)
0x87: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x88: Pop(3)
0x89: GOTO 0x9b

0x8a: PushEmpty(string)
0x8b: Stack[-1] = "Neutral" // @poff=89
0x8c: Call2 0xb9

0x8d: Pop(1)
0x8e: Push((int) 535564)
0x8f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x90: Pop(1)
0x91: @@@ ClearReplies(); Obj=0 // @poff=116
0x92: Pop(0)
0x93: Push((int) 535565)
0x94: Push((int) -1)
0x95: Push((int) 37248)
0x96: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x97: Pop(3)
0x98: GOTO 0x9b

0x99: Return(); Pop(0)

0x9a: GOTO 0x55

0x9b: PushEmpty(bool)
0x9c: Call2 0x474

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: @ lshWaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: PushEmpty(string)
0xa5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa6: Call2 0x352

0xa7: Pop(1)
0xa8: GOTO 0x9f

0xa9: GOTO 0xb8

0xaa: Push("all") // @poff=138
0xab: Push("idle") // @poff=146
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: GOTO 0xb8

0xb3: Push("all") // @poff=138
0xb4: Push("idle") // @poff=146
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: GOTO 0xae

0xb8: Return(); Pop(0)

0xb9: PushEmpty()
0xba: PushEmpty(bool)
0xbb: Call2 0x474

0xbc: Pop(0)
0xbd: Pop(1); Push((bool) Stack[-1] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Return(); Pop(0)

0xc3: PushEmpty(string, bool)
0xc4: Stack[-3] = Stack[-2]
0xc5: Push("") // @poff=102
0xc6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: Stack[-1] = (bool) 0
0xc9: GOTO 0xcb

0xca: Stack[-1] = (bool) 1
0xcb: Call2 0x359

0xcc: Pop(2)
0xcd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: Push((int) 1)
0xd1: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0xd2: PushEmpty()
0xd3: Call2 0x36e

0xd4: Pop(0)
0xd5: Push((int) 37241)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x3aa

0xdc: Pop(2)
0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x3cb

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x3b6

0xe6: Pop(2)
0xe7: Push((int) 37236)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x3a4

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x3d5

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x3b6

0xf8: Pop(2)
0xf9: Push((int) 37246)
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x3b0

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x3d0

0x105: Pop(2)
0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x3b6

0x10a: Pop(2)
0x10b: Push((int) 42258)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x3bd

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x3b6

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x3c6

0x11c: Pop(2)
0x11d: Push((int) 37224)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x3da

0x123: Pop(1)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral" // @poff=89
0x128: Call2 0xb9

0x129: Pop(1)
0x12a: Push((int) 535541)
0x12b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12c: Pop(1)
0x12d: @@@ ClearReplies(); Obj=0 // @poff=116
0x12e: Pop(0)
0x12f: Push((int) 535542)
0x130: Push((int) 37226)
0x131: Push((int) 37225)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Push((int) 540019)
0x135: Push((int) 41991)
0x136: Push((int) 41990)
0x137: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x138: Pop(3)
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x3e6

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: Push((int) 535545)
0x13f: Push((int) 42317)
0x140: Push((int) 37228)
0x141: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x142: Pop(3)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x3f2

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 535559)
0x149: Push((int) 37243)
0x14a: Push((int) 37242)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Push((int) 540276)
0x14e: Push((int) 42323)
0x14f: Push((int) 42256)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral" // @poff=89
0x155: Call2 0xb9

0x156: Pop(1)
0x157: Push((int) 535564)
0x158: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x159: Pop(1)
0x15a: @@@ ClearReplies(); Obj=0 // @poff=116
0x15b: Pop(0)
0x15c: Push((int) 535565)
0x15d: Push((int) -1)
0x15e: Push((int) 37248)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 42323)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral" // @poff=89
0x167: Call2 0xb9

0x168: Pop(1)
0x169: Push((int) 540340)
0x16a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16b: Pop(1)
0x16c: @@@ ClearReplies(); Obj=0 // @poff=116
0x16d: Pop(0)
0x16e: Push((int) 540278)
0x16f: Push((int) -1)
0x170: Push((int) 42258)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 37243)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral" // @poff=89
0x179: Call2 0xb9

0x17a: Pop(1)
0x17b: Push((int) 535560)
0x17c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17d: Pop(1)
0x17e: @@@ ClearReplies(); Obj=0 // @poff=116
0x17f: Pop(0)
0x180: Push((int) 535561)
0x181: Push((int) 37245)
0x182: Push((int) 37244)
0x183: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 37245)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral" // @poff=89
0x18b: Call2 0xb9

0x18c: Pop(1)
0x18d: Push((int) 535562)
0x18e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18f: Pop(1)
0x190: @@@ ClearReplies(); Obj=0 // @poff=116
0x191: Pop(0)
0x192: Push((int) 535563)
0x193: Push((int) -1)
0x194: Push((int) 37246)
0x195: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 42317)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral" // @poff=89
0x19d: Call2 0xb9

0x19e: Pop(1)
0x19f: Push((int) 540334)
0x1a0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a1: Pop(1)
0x1a2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a3: Pop(0)
0x1a4: Push((int) 540336)
0x1a5: Push((int) 42320)
0x1a6: Push((int) 42319)
0x1a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 42320)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral" // @poff=89
0x1af: Call2 0xb9

0x1b0: Pop(1)
0x1b1: Push((int) 540337)
0x1b2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b3: Pop(1)
0x1b4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b5: Pop(0)
0x1b6: Push((int) 535553)
0x1b7: Push((int) -1)
0x1b8: Push((int) 37236)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 41991)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral" // @poff=89
0x1c1: Call2 0xb9

0x1c2: Pop(1)
0x1c3: Push((int) 540020)
0x1c4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c5: Pop(1)
0x1c6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c7: Pop(0)
0x1c8: Push((int) 540021)
0x1c9: Push((int) 41993)
0x1ca: Push((int) 41992)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 41993)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0xb9

0x1d4: Pop(1)
0x1d5: Push((int) 540022)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 540023)
0x1db: Push((int) 41995)
0x1dc: Push((int) 41994)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 41995)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral" // @poff=89
0x1e5: Call2 0xb9

0x1e6: Pop(1)
0x1e7: Push((int) 540024)
0x1e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e9: Pop(1)
0x1ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x1eb: Pop(0)
0x1ec: Push((int) 540025)
0x1ed: Push((int) 37238)
0x1ee: Push((int) 41996)
0x1ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 37238)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral" // @poff=89
0x1f7: Call2 0xb9

0x1f8: Pop(1)
0x1f9: Push((int) 535555)
0x1fa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fb: Pop(1)
0x1fc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fd: Pop(0)
0x1fe: Push((int) 535556)
0x1ff: Push((int) 37240)
0x200: Push((int) 37239)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 37240)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Neutral" // @poff=89
0x209: Call2 0xb9

0x20a: Pop(1)
0x20b: Push((int) 535557)
0x20c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20d: Pop(1)
0x20e: @@@ ClearReplies(); Obj=0 // @poff=116
0x20f: Pop(0)
0x210: Push((int) 535558)
0x211: Push((int) -1)
0x212: Push((int) 37241)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 37226)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral" // @poff=89
0x21b: Call2 0xb9

0x21c: Pop(1)
0x21d: Push((int) 535543)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=116
0x221: Pop(0)
0x222: Push((int) 535544)
0x223: Push((int) -1)
0x224: Push((int) 37227)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x229: PushEmpty(bool)
0x22a: Call2 0x474

0x22b: Pop(0)
0x22c: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22d: @ lshStopAnimation()
0x22e: Pop(0)
0x22f: GOTO 0x232

0x230: @ StopAnimation()
0x231: Pop(0)
0x232: Return(); Pop(0)

0x233: GOTO 0xd0

0x234: Return(); Pop(0)

0x235: PushEmpty()
0x236: Call2 0x241

0x237: Pop(0)
0x238: Return(); Pop(0)

0x239: PushEmpty()
0x23a: PushEmpty(int, object)
0x23b: Stack[-3] = Stack[-1]
0x23c: Push(-2, 1); TaskCall(0)
0x23d: Call2 0x0

0x23e: Pop(-2, 1); TaskReturn
0x23f: Pop(2)
0x240: Return(); Pop(0)

0x241: @ Hold()
0x242: Pop(0)
0x243: GOTO 0x241

0x244: Return(); Pop(0)

0x245: PushEmpty(bool, bool)
0x246: Push("cleanup") // @poff=156
0x247: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x249: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x24a: @ IsLoaded(Stack[-1])
0x24b: Pop(0)
0x24c: PushEmpty(bool)
0x24d: Stack[-1] = (bool) 0
0x24e: Pop(0); Push((bool) Stack[-2] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x271

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x256: PushEmpty(object)
0x257: Call2 0x375

0x258: Pop(0)
0x259: @ RemoveActor(Stack[-1])
0x25a: Pop(1)
0x25b: GOTO 0x260

0x25c: Push("restore") // @poff=172
0x25d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x260: Return(); Pop(2)

0x261: PushEmpty(bool)
0x262: Stack[-1] = (bool) 0
0x263: Push( Stack[0 + Tasks[-1].StackPointer] )
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(bool)
0x266: Call2 0x271

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: PushEmpty(object)
0x26c: Call2 0x375

0x26d: Pop(0)
0x26e: @ RemoveActor(Stack[-1])
0x26f: Pop(1)
0x270: Return(); Pop(0)

0x271: Stack[-1] = (bool) 1
0x272: Return(); Pop(0)

0x273: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x274: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x275: Pop(0)
0x276: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x277: Pop(0)
0x278: Push(CvectorIndex(Stack[-8], 1))
0x279: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27b: @ GetPosition(Stack[-7])
0x27c: Pop(0)
0x27d: @ GetEyesHeight(Stack[-9])
0x27e: Pop(0)
0x27f: Push(CvectorIndex(Stack[-7], 1))
0x280: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x281: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x282: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x283: Push(CvectorIndex(Stack[-6], 1))
0x284: Stack[-1] = (int) 0
0x285: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x286: Pop(0); Push(Stack[-6] | Stack[-6]);
0x287: Pop(1); Push(Sqrt(Stack[-1]))
0x288: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x289: Stack[-5] = -Stack[-6]; Pop(0);
0x28a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28b: PushEmpty(cvector, cvector)
0x28c: Push([0.0, 1.0, 0.0])
0x28d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x28e: Call2 0x37b

0x28f: Pop(1)
0x290: Push((int) 25)
0x291: Pop(2); Push(Stack[-2] * Stack[-1]);
0x292: Pop(2); Push(Stack[-2] + Stack[-1]);
0x293: Push([0.0, 10.0, 0.0])
0x294: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x295: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x296: @ IsOverrideActive(Stack[-2])
0x297: Pop(0)
0x298: Push(Stack[-2])
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-21] = (bool) 0
0x29b: Return(); Pop(18)

0x29c: @ StopWorld()
0x29d: Pop(0)
0x29e: @ CameraTransit(Stack[-3], Stack[-5])
0x29f: Pop(0)
0x2a0: Push(CvectorIndex(Stack[-4], 0))
0x2a1: Push(CvectorIndex(Stack[-5], 2))
0x2a2: @ Rotate(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: PushEmpty(bool)
0x2a5: Call2 0x474

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2b1

0x2a9: Push("head") // @poff=214
0x2aa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ab: Pop(1)
0x2ac: Push(Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ae: Push("head") // @poff=214
0x2af: @ LookAsyncCamera(Stack[-1])
0x2b0: Pop(1)
0x2b1: @ CameraWaitForPlayFinish()
0x2b2: Pop(0)
0x2b3: @ ResumeWorld()
0x2b4: Pop(0)
0x2b5: Stack[-21] = (bool) 1
0x2b6: Return(); Pop(18)

0x2b7: PushEmpty(bool, bool)
0x2b8: @ CameraSwitchToNormal()
0x2b9: Pop(0)
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x474

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c7

0x2bf: Push("head") // @poff=214
0x2c0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push(Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c4: Push("head") // @poff=214
0x2c5: @ UnlookAsync(Stack[-1])
0x2c6: Pop(1)
0x2c7: Return(); Pop(2)

0x2c8: PushEmpty(int, int, int, int)
0x2c9: Push("voice_common") // @poff=224
0x2ca: @ GetVariable(Stack[-1], Stack[-3])
0x2cb: Pop(1)
0x2cc: Push(Stack[-2])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-7] = Stack[-1]
0x2d0: Call2 0x302

0x2d1: Pop(1)
0x2d2: Pop(1); Push((bool) Stack[-1] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-7] = Stack[-1]
0x2d6: Call2 0x327

0x2d7: Pop(1)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-6] = (bool) 0
0x2db: Return(); Pop(4)

0x2dc: Push((int) 2)
0x2dd: @ irand(Stack[-2], Stack[-1])
0x2de: Pop(1)
0x2df: Push(Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e1: Push("voice_common") // @poff=224
0x2e2: Push((int) 1)
0x2e3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2e4: Push((int) 3)
0x2e5: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2e6: @ SetVariable(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: GOTO 0x2ed

0x2e9: Push("voice_common") // @poff=224
0x2ea: Push((int) 0)
0x2eb: @ SetVariable(Stack[-2], Stack[-1])
0x2ec: Pop(2)
0x2ed: GOTO 0x300

0x2ee: PushEmpty(bool, object)
0x2ef: Stack[-7] = Stack[-1]
0x2f0: Call2 0x327

0x2f1: Pop(1)
0x2f2: Pop(1); Push((bool) Stack[-1] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f4: PushEmpty(bool, object)
0x2f5: Stack[-7] = Stack[-1]
0x2f6: Call2 0x302

0x2f7: Pop(1)
0x2f8: Pop(1); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-6] = (bool) 0
0x2fb: Return(); Pop(4)

0x2fc: Push("voice_common") // @poff=224
0x2fd: Push((int) 1)
0x2fe: @ SetVariable(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: Stack[-6] = (bool) 1
0x301: Return(); Pop(4)

0x302: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x303: Stack[-5] = "c" // @poff=250
0x304: Stack[-4] = (int) 0
0x305: Push((int) 1)
0x306: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x307: Push((int) 1)
0x308: Pop(1); Push(Stack[-5] + Stack[-1]);
0x309: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30a: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x30b: Pop(1)
0x30c: Pop(0); Push((bool) Stack[-3] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: GOTO 0x312

0x30f: Push((int) 1)
0x310: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x311: GOTO 0x305

0x312: Pop(0); Push((bool) Stack[-4] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-12] = (bool) 0
0x315: Return(); Pop(10)

0x316: Stack[-2] = (int) 0
0x317: Push((int) 1)
0x318: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: @ irand(Stack[-2], Stack[-4])
0x31b: Pop(0)
0x31c: Push((int) 1)
0x31d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x31e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x320: Pop(1)
0x321: PushEmpty(bool, string)
0x322: Stack[-3] = Stack[-1]
0x323: Call2 0x35f

0x324: Stack[-2] = Stack[-14]
0x325: Pop(2)
0x326: Return(); Pop(10)

0x327: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x328: Push("d") // @poff=220
0x329: PushEmpty(int)
0x32a: Call2 0x39b

0x32b: Pop(0)
0x32c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32d: Push("m") // @poff=278
0x32e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x32f: Stack[-4] = (int) 0
0x330: Push((int) 1)
0x331: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x332: Push((int) 1)
0x333: Pop(1); Push(Stack[-5] + Stack[-1]);
0x334: Pop(1); Push(Stack[-6] + Stack[-1]);
0x335: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x336: Pop(1)
0x337: Pop(0); Push((bool) Stack[-3] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33d

0x33a: Push((int) 1)
0x33b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x33c: GOTO 0x330

0x33d: Pop(0); Push((bool) Stack[-4] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-12] = (bool) 0
0x340: Return(); Pop(10)

0x341: Stack[-2] = (int) 0
0x342: Push((int) 1)
0x343: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: @ irand(Stack[-2], Stack[-4])
0x346: Pop(0)
0x347: Push((int) 1)
0x348: Pop(1); Push(Stack[-3] + Stack[-1]);
0x349: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34a: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x34b: Pop(1)
0x34c: PushEmpty(bool, string)
0x34d: Stack[-3] = Stack[-1]
0x34e: Call2 0x35f

0x34f: Stack[-2] = Stack[-14]
0x350: Pop(2)
0x351: Return(); Pop(10)

0x352: PushEmpty(float, float, float, float)
0x353: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x354: Pop(0)
0x355: Push((bool) 0)
0x356: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(1)
0x358: Return(); Pop(4)

0x359: PushEmpty(float, float, float, float)
0x35a: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x35b: Pop(0)
0x35c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x35d: Pop(0)
0x35e: Return(); Pop(4)

0x35f: PushEmpty(bool, bool)
0x360: PushEmpty(bool)
0x361: Call2 0x474

0x362: Pop(0)
0x363: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x364: @ lshHasSpeech(Stack[-1], Stack[-3])
0x365: Pop(0)
0x366: Push(Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x368: @ lshPlaySpeech(Stack[-3])
0x369: Pop(0)
0x36a: Stack[-4] = (bool) 1
0x36b: Return(); Pop(2)

0x36c: Stack[-4] = (bool) 0
0x36d: Return(); Pop(2)

0x36e: PushEmpty(bool)
0x36f: Call2 0x474

0x370: Pop(0)
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: @ lshStopSpeech()
0x373: Pop(0)
0x374: Return(); Pop(0)

0x375: PushEmpty(object, object)
0x376: @ self(Stack[-1])
0x377: Pop(0)
0x378: Stack[-1] = Stack[-3]
0x379: Return(); Pop(2)

0x37a: Stack[-1] = 0
0x37b: PushEmpty(float, float)
0x37c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x37d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x37e: Push((float)9.999999974752427e-07)
0x37f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-4] = [0.0, 0.0, 0.0]
0x382: Return(); Pop(2)

0x383: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x384: Return(); Pop(2)

0x385: PushEmpty(int, int)
0x386: @ GetVariable(Stack[-3], Stack[-1])
0x387: Pop(0)
0x388: Stack[-1] = Stack[-4]
0x389: Return(); Pop(2)

0x38a: PushEmpty(object, object)
0x38b: @ FindActor(Stack[-1], Stack[-4])
0x38c: Pop(0)
0x38d: Pop(0); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38f: Push("Door ") // @poff=282
0x390: Pop(1); Push(Stack[-1] + Stack[-5]);
0x391: Push(" not found") // @poff=294
0x392: Pop(2); Push(Stack[-2] + Stack[-1]);
0x393: @ Trace(Stack[-1])
0x394: Pop(1)
0x395: GOTO 0x399

0x396: Push("locked") // @poff=316
0x397: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=330
0x398: Pop(1)
0x399: Return(); Pop(2)

0x39a: Stack[-1] = 0
0x39b: PushEmpty(float, float)
0x39c: @ GetGameTime(Stack[-1])
0x39d: Pop(0)
0x39e: Push((int) 1)
0x39f: PushEmpty(int)
0x3a0: Push((int) 24)
0x3a1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3a2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3a3: Return(); Pop(2)

0x3a4: PushEmpty()
0x3a5: Push("game_final") // @poff=342
0x3a6: Push((int) 1)
0x3a7: @ SetVariable(Stack[-2], Stack[-1])
0x3a8: Pop(2)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty()
0x3ab: Push("game_final") // @poff=342
0x3ac: Push((int) 2)
0x3ad: @ SetVariable(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: Return(); Pop(0)

0x3b0: PushEmpty()
0x3b1: Push("game_final") // @poff=342
0x3b2: Push((int) 3)
0x3b3: @ SetVariable(Stack[-2], Stack[-1])
0x3b4: Pop(2)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty()
0x3b7: PushEmpty(string, bool)
0x3b8: Stack[-2] = "isobor@door1" // @poff=364
0x3b9: Stack[-1] = (bool) 0
0x3ba: Call2 0x38a

0x3bb: Pop(2)
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty()
0x3be: Push("game_final") // @poff=342
0x3bf: PushEmpty(int, string)
0x3c0: Stack[-1] = "c_iFinalEmpty" // @poff=390
0x3c1: Call2 0x385

0x3c2: Pop(1)
0x3c3: @ SetVariable(Stack[-2], Stack[-1])
0x3c4: Pop(2)
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty()
0x3c7: PushEmpty()
0x3c8: Call2 0x3fe

0x3c9: Pop(0)
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: PushEmpty()
0x3cd: Call2 0x425

0x3ce: Pop(0)
0x3cf: Return(); Pop(0)

0x3d0: PushEmpty()
0x3d1: PushEmpty()
0x3d2: Call2 0x40b

0x3d3: Pop(0)
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: PushEmpty()
0x3d7: Call2 0x418

0x3d8: Pop(0)
0x3d9: Return(); Pop(0)

0x3da: PushEmpty()
0x3db: PushEmpty(int, string)
0x3dc: Stack[-1] = "game_final" // @poff=342
0x3dd: Call2 0x385

0x3de: Pop(1)
0x3df: Push((int) 0)
0x3e0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-2] = (bool) 1
0x3e3: Return(); Pop(0)

0x3e4: Stack[-2] = (bool) 0
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty()
0x3e7: PushEmpty(int, string)
0x3e8: Stack[-1] = "d12q01BurahInSobor" // @poff=418
0x3e9: Call2 0x385

0x3ea: Pop(1)
0x3eb: Push((int) 0)
0x3ec: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-2] = (bool) 1
0x3ef: Return(); Pop(0)

0x3f0: Stack[-2] = (bool) 0
0x3f1: Return(); Pop(0)

0x3f2: PushEmpty()
0x3f3: PushEmpty(int, string)
0x3f4: Stack[-1] = "d12q01KlaraInSobor" // @poff=456
0x3f5: Call2 0x385

0x3f6: Pop(1)
0x3f7: Push((int) 0)
0x3f8: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-2] = (bool) 1
0x3fb: Return(); Pop(0)

0x3fc: Stack[-2] = (bool) 0
0x3fd: Return(); Pop(0)

0x3fe: PushEmpty(object, object)
0x3ff: Push((int) 773)
0x400: Push((int) 1)
0x401: Push((int) 540274)
0x402: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: PushEmpty(bool, object, int)
0x405: Stack[-4] = Stack[-2]
0x406: Stack[-1] = (int) 699
0x407: Call2 0x43f

0x408: Pop(3)
0x409: Return(); Pop(2)

0x40a: Stack[-1] = 0
0x40b: PushEmpty(object, object)
0x40c: Push((int) 704)
0x40d: Push((int) 1)
0x40e: Push((int) 535687)
0x40f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: PushEmpty(bool, object, int)
0x412: Stack[-4] = Stack[-2]
0x413: Stack[-1] = (int) 699
0x414: Call2 0x43f

0x415: Pop(3)
0x416: Return(); Pop(2)

0x417: Stack[-1] = 0
0x418: PushEmpty(object, object)
0x419: Push((int) 702)
0x41a: Push((int) 1)
0x41b: Push((int) 535685)
0x41c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: PushEmpty(bool, object, int)
0x41f: Stack[-4] = Stack[-2]
0x420: Stack[-1] = (int) 699
0x421: Call2 0x43f

0x422: Pop(3)
0x423: Return(); Pop(2)

0x424: Stack[-1] = 0
0x425: PushEmpty(object, object)
0x426: Push((int) 703)
0x427: Push((int) 1)
0x428: Push((int) 535686)
0x429: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x42a: Pop(3)
0x42b: PushEmpty(bool, object, int)
0x42c: Stack[-4] = Stack[-2]
0x42d: Stack[-1] = (int) 699
0x42e: Call2 0x43f

0x42f: Pop(3)
0x430: Return(); Pop(2)

0x431: Stack[-1] = 0
0x432: PushEmpty(object, object)
0x433: @ GetDiaryRoot(Stack[-1])
0x434: Pop(0)
0x435: Pop(0); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x437: Push("Can't retrieve diary root") // @poff=494
0x438: @ Trace(Stack[-1])
0x439: Pop(1)
0x43a: Stack[-3] = (bool) 0
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = Stack[-3]
0x43d: Return(); Pop(2)

0x43e: Stack[-1] = 0
0x43f: PushEmpty(object, object, int, object, object, int)
0x440: PushEmpty(object)
0x441: Call2 0x432

0x442: Stack[-1] = Stack[-4]
0x443: Pop(1)
0x444: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=546
0x445: Pop(0)
0x446: Pop(0); Push((bool) Stack[-2] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x448: Push("Can't find diary parent with id: ") // @poff=551
0x449: Pop(1); Push(Stack[-1] + Stack[-8]);
0x44a: @ Trace(Stack[-1])
0x44b: Pop(1)
0x44c: Stack[-9] = (bool) 0
0x44d: Return(); Pop(6)

0x44e: @@ AddChild(Stack[-8]); Obj=2 // @poff=619
0x44f: Pop(0)
0x450: Push((int) 7)
0x451: @ SendWorldWndMessage(Stack[-1])
0x452: Pop(1)
0x453: @@ GetCategory(Stack[-1]); Obj=8 // @poff=628
0x454: Pop(0)
0x455: @ SetDiarySection(Stack[-1])
0x456: Pop(0)
0x457: Stack[-9] = (bool) 0
0x458: Return(); Pop(6)

0x459: Stack[-2] = 0
0x45a: Stack[-3] = 0
0x45b: PushEmpty(int, int)
0x45c: Push("branch") // @poff=640
0x45d: @ GetVariable(Stack[-1], Stack[-2])
0x45e: Pop(1)
0x45f: Push((int) 0)
0x460: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x462: Stack[-3] = (int) 1
0x463: Return(); Pop(2)

0x464: GOTO 0x46a

0x465: Push((int) 1)
0x466: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x468: Stack[-3] = (int) 2
0x469: Return(); Pop(2)

0x46a: Stack[-3] = (int) 3
0x46b: Return(); Pop(2)

0x46c: Stack[-1] = (int) 515532
0x46d: Return(); Pop(0)

0x46e: Stack[-1] = (int) 514840
0x46f: Return(); Pop(0)

0x470: Stack[-1] = "ui/NPC_Block.png" // @poff=654
0x471: Return(); Pop(0)

0x472: Stack[-1] = "ui/NPC_Block_b.png" // @poff=688
0x473: Return(); Pop(0)

0x474: Stack[-1] = (bool) 1
0x475: Return(); Pop(0)

