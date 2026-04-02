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
	W:b12q01DankoInSobor
	W:b12q01KlaraInSobor
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Block.png
	W:ui/NPC_Block_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900670061006d0065005f00660069006e0061006c000000690073006f0062006f007200400064006f006f0072003100000063005f006900460069006e0061006c0045006d007000740079000000620031003200710030003100440061006e006b006f0049006e0053006f0062006f00720000006200310032007100300031004b006c0061007200610049006e0053006f0062006f0072000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0042006c006f0063006b002e0070006e0067000000750069002f004e00500043005f0042006c006f0063006b005f0062002e0070006e0067000000
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

RunOp = 0x25e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x262 Vars = (object)
		EVENT_26 Op = 0x26e Vars = (string)
		EVENT_6 Op = 0x28a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x39e

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x2f1

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x29c

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x497

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x495

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x499

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x49b

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x484

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
0x48: Call2 0x2e0

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
0x59: Call2 0x403

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral" // @poff=89
0x5f: Call2 0xb9

0x60: Pop(1)
0x61: Push((int) 522855)
0x62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63: Pop(1)
0x64: @@@ ClearReplies(); Obj=0 // @poff=116
0x65: Pop(0)
0x66: Push((int) 523022)
0x67: Push((int) 24216)
0x68: Push((int) 24215)
0x69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a: Pop(3)
0x6b: Push((int) 522876)
0x6c: Push((int) 33440)
0x6d: Push((int) 24060)
0x6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x40f

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 540014)
0x76: Push((int) 41986)
0x77: Push((int) 41985)
0x78: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x41b

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 522878)
0x80: Push((int) 33448)
0x81: Push((int) 24064)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: Push((int) 540279)
0x85: Push((int) 42260)
0x86: Push((int) 42259)
0x87: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x88: Pop(3)
0x89: GOTO 0x9b

0x8a: PushEmpty(string)
0x8b: Stack[-1] = "Neutral" // @poff=89
0x8c: Call2 0xb9

0x8d: Pop(1)
0x8e: Push((int) 523170)
0x8f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x90: Pop(1)
0x91: @@@ ClearReplies(); Obj=0 // @poff=116
0x92: Pop(0)
0x93: Push((int) 523172)
0x94: Push((int) -1)
0x95: Push((int) 24374)
0x96: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x97: Pop(3)
0x98: GOTO 0x9b

0x99: Return(); Pop(0)

0x9a: GOTO 0x55

0x9b: PushEmpty(bool)
0x9c: Call2 0x49d

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: @ lshWaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: PushEmpty(string)
0xa5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa6: Call2 0x37b

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
0xbb: Call2 0x49d

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
0xcb: Call2 0x382

0xcc: Pop(2)
0xcd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: Push((int) 1)
0xd1: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0xd2: PushEmpty()
0xd3: Call2 0x397

0xd4: Pop(0)
0xd5: Push((int) 24053)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x3cd

0xdc: Pop(2)
0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x3df

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x3f0

0xe6: Pop(2)
0xe7: Push((int) 41989)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x3d3

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x3df

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x3e6

0xf8: Pop(2)
0xf9: Push((int) 24059)
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x3d9

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x3df

0x105: Pop(2)
0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x3eb

0x10a: Pop(2)
0x10b: Push((int) 42261)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x3f5

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x3df

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x3fe

0x11c: Pop(2)
0x11d: Push((int) 24039)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x403

0x123: Pop(1)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral" // @poff=89
0x128: Call2 0xb9

0x129: Pop(1)
0x12a: Push((int) 522855)
0x12b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12c: Pop(1)
0x12d: @@@ ClearReplies(); Obj=0 // @poff=116
0x12e: Pop(0)
0x12f: Push((int) 523022)
0x130: Push((int) 24216)
0x131: Push((int) 24215)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Push((int) 522876)
0x135: Push((int) 33440)
0x136: Push((int) 24060)
0x137: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x138: Pop(3)
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x40f

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: Push((int) 540014)
0x13f: Push((int) 41986)
0x140: Push((int) 41985)
0x141: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x142: Pop(3)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x41b

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 522878)
0x149: Push((int) 33448)
0x14a: Push((int) 24064)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Push((int) 540279)
0x14e: Push((int) 42260)
0x14f: Push((int) 42259)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral" // @poff=89
0x155: Call2 0xb9

0x156: Pop(1)
0x157: Push((int) 523170)
0x158: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x159: Pop(1)
0x15a: @@@ ClearReplies(); Obj=0 // @poff=116
0x15b: Pop(0)
0x15c: Push((int) 523172)
0x15d: Push((int) -1)
0x15e: Push((int) 24374)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 42260)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral" // @poff=89
0x167: Call2 0xb9

0x168: Pop(1)
0x169: Push((int) 540280)
0x16a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16b: Pop(1)
0x16c: @@@ ClearReplies(); Obj=0 // @poff=116
0x16d: Pop(0)
0x16e: Push((int) 540281)
0x16f: Push((int) -1)
0x170: Push((int) 42261)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 33448)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral" // @poff=89
0x179: Call2 0xb9

0x17a: Pop(1)
0x17b: Push((int) 532048)
0x17c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17d: Pop(1)
0x17e: @@@ ClearReplies(); Obj=0 // @poff=116
0x17f: Pop(0)
0x180: Push((int) 532049)
0x181: Push((int) 24055)
0x182: Push((int) 33449)
0x183: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 24055)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral" // @poff=89
0x18b: Call2 0xb9

0x18c: Pop(1)
0x18d: Push((int) 522871)
0x18e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18f: Pop(1)
0x190: @@@ ClearReplies(); Obj=0 // @poff=116
0x191: Pop(0)
0x192: Push((int) 522875)
0x193: Push((int) -1)
0x194: Push((int) 24059)
0x195: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 41986)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral" // @poff=89
0x19d: Call2 0xb9

0x19e: Pop(1)
0x19f: Push((int) 540015)
0x1a0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a1: Pop(1)
0x1a2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a3: Pop(0)
0x1a4: Push((int) 540016)
0x1a5: Push((int) 41988)
0x1a6: Push((int) 41987)
0x1a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 41988)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral" // @poff=89
0x1af: Call2 0xb9

0x1b0: Pop(1)
0x1b1: Push((int) 540017)
0x1b2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b3: Pop(1)
0x1b4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b5: Pop(0)
0x1b6: Push((int) 540018)
0x1b7: Push((int) -1)
0x1b8: Push((int) 41989)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 33440)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral" // @poff=89
0x1c1: Call2 0xb9

0x1c2: Pop(1)
0x1c3: Push((int) 532040)
0x1c4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c5: Pop(1)
0x1c6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c7: Pop(0)
0x1c8: Push((int) 532041)
0x1c9: Push((int) 41997)
0x1ca: Push((int) 33441)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 41997)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0xb9

0x1d4: Pop(1)
0x1d5: Push((int) 540026)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 540027)
0x1db: Push((int) 33442)
0x1dc: Push((int) 41998)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 33442)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral" // @poff=89
0x1e5: Call2 0xb9

0x1e6: Pop(1)
0x1e7: Push((int) 532042)
0x1e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e9: Pop(1)
0x1ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x1eb: Pop(0)
0x1ec: Push((int) 532043)
0x1ed: Push((int) 33446)
0x1ee: Push((int) 33443)
0x1ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 33446)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral" // @poff=89
0x1f7: Call2 0xb9

0x1f8: Pop(1)
0x1f9: Push((int) 532046)
0x1fa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fb: Pop(1)
0x1fc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fd: Pop(0)
0x1fe: Push((int) 532047)
0x1ff: Push((int) 24049)
0x200: Push((int) 33447)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: Push((int) 540114)
0x204: Push((int) 42082)
0x205: Push((int) 42081)
0x206: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 42082)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral" // @poff=89
0x20e: Call2 0xb9

0x20f: Pop(1)
0x210: Push((int) 540115)
0x211: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x212: Pop(1)
0x213: @@@ ClearReplies(); Obj=0 // @poff=116
0x214: Pop(0)
0x215: Push((int) 540116)
0x216: Push((int) 42084)
0x217: Push((int) 42083)
0x218: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x219: Pop(3)
0x21a: Return(); Pop(0)

0x21b: Push((int) 42084)
0x21c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Neutral" // @poff=89
0x220: Call2 0xb9

0x221: Pop(1)
0x222: Push((int) 540117)
0x223: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x224: Pop(1)
0x225: @@@ ClearReplies(); Obj=0 // @poff=116
0x226: Pop(0)
0x227: Push((int) 540118)
0x228: Push((int) 24049)
0x229: Push((int) 42085)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 24049)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=89
0x232: Call2 0xb9

0x233: Pop(1)
0x234: Push((int) 522865)
0x235: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x236: Pop(1)
0x237: @@@ ClearReplies(); Obj=0 // @poff=116
0x238: Pop(0)
0x239: Push((int) 522869)
0x23a: Push((int) -1)
0x23b: Push((int) 24053)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 24216)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral" // @poff=89
0x244: Call2 0xb9

0x245: Pop(1)
0x246: Push((int) 523023)
0x247: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x248: Pop(1)
0x249: @@@ ClearReplies(); Obj=0 // @poff=116
0x24a: Pop(0)
0x24b: Push((int) 523024)
0x24c: Push((int) -1)
0x24d: Push((int) 24217)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x252: PushEmpty(bool)
0x253: Call2 0x49d

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x256: @ lshStopAnimation()
0x257: Pop(0)
0x258: GOTO 0x25b

0x259: @ StopAnimation()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: GOTO 0xd0

0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: Call2 0x26a

0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: PushEmpty(int, object)
0x264: Stack[-3] = Stack[-1]
0x265: Push(-2, 1); TaskCall(0)
0x266: Call2 0x0

0x267: Pop(-2, 1); TaskReturn
0x268: Pop(2)
0x269: Return(); Pop(0)

0x26a: @ Hold()
0x26b: Pop(0)
0x26c: GOTO 0x26a

0x26d: Return(); Pop(0)

0x26e: PushEmpty(bool, bool)
0x26f: Push("cleanup") // @poff=156
0x270: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x272: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x273: @ IsLoaded(Stack[-1])
0x274: Pop(0)
0x275: PushEmpty(bool)
0x276: Stack[-1] = (bool) 0
0x277: Pop(0); Push((bool) Stack[-2] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(bool)
0x27a: Call2 0x29a

0x27b: Pop(0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object)
0x280: Call2 0x39e

0x281: Pop(0)
0x282: @ RemoveActor(Stack[-1])
0x283: Pop(1)
0x284: GOTO 0x289

0x285: Push("restore") // @poff=172
0x286: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x289: Return(); Pop(2)

0x28a: PushEmpty(bool)
0x28b: Stack[-1] = (bool) 0
0x28c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: PushEmpty(bool)
0x28f: Call2 0x29a

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = (bool) 1
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: PushEmpty(object)
0x295: Call2 0x39e

0x296: Pop(0)
0x297: @ RemoveActor(Stack[-1])
0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: Stack[-1] = (bool) 1
0x29b: Return(); Pop(0)

0x29c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x29d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x29e: Pop(0)
0x29f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x2a0: Pop(0)
0x2a1: Push(CvectorIndex(Stack[-8], 1))
0x2a2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a4: @ GetPosition(Stack[-7])
0x2a5: Pop(0)
0x2a6: @ GetEyesHeight(Stack[-9])
0x2a7: Pop(0)
0x2a8: Push(CvectorIndex(Stack[-7], 1))
0x2a9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2aa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ab: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ac: Push(CvectorIndex(Stack[-6], 1))
0x2ad: Stack[-1] = (int) 0
0x2ae: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2af: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b0: Pop(1); Push(Sqrt(Stack[-1]))
0x2b1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b2: Stack[-5] = -Stack[-6]; Pop(0);
0x2b3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b4: PushEmpty(cvector, cvector)
0x2b5: Push([0.0, 1.0, 0.0])
0x2b6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b7: Call2 0x3a4

0x2b8: Pop(1)
0x2b9: Push((int) 25)
0x2ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bc: Push([0.0, 10.0, 0.0])
0x2bd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2be: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2bf: @ IsOverrideActive(Stack[-2])
0x2c0: Pop(0)
0x2c1: Push(Stack[-2])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-21] = (bool) 0
0x2c4: Return(); Pop(18)

0x2c5: @ StopWorld()
0x2c6: Pop(0)
0x2c7: @ CameraTransit(Stack[-3], Stack[-5])
0x2c8: Pop(0)
0x2c9: Push(CvectorIndex(Stack[-4], 0))
0x2ca: Push(CvectorIndex(Stack[-5], 2))
0x2cb: @ Rotate(Stack[-2], Stack[-1])
0x2cc: Pop(2)
0x2cd: PushEmpty(bool)
0x2ce: Call2 0x49d

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2da

0x2d2: Push("head") // @poff=214
0x2d3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push(Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: Push("head") // @poff=214
0x2d8: @ LookAsyncCamera(Stack[-1])
0x2d9: Pop(1)
0x2da: @ CameraWaitForPlayFinish()
0x2db: Pop(0)
0x2dc: @ ResumeWorld()
0x2dd: Pop(0)
0x2de: Stack[-21] = (bool) 1
0x2df: Return(); Pop(18)

0x2e0: PushEmpty(bool, bool)
0x2e1: @ CameraSwitchToNormal()
0x2e2: Pop(0)
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x49d

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x2f0

0x2e8: Push("head") // @poff=214
0x2e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: Push(Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: Push("head") // @poff=214
0x2ee: @ UnlookAsync(Stack[-1])
0x2ef: Pop(1)
0x2f0: Return(); Pop(2)

0x2f1: PushEmpty(int, int, int, int)
0x2f2: Push("voice_common") // @poff=224
0x2f3: @ GetVariable(Stack[-1], Stack[-3])
0x2f4: Pop(1)
0x2f5: Push(Stack[-2])
0x2f6: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-7] = Stack[-1]
0x2f9: Call2 0x32b

0x2fa: Pop(1)
0x2fb: Pop(1); Push((bool) Stack[-1] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-7] = Stack[-1]
0x2ff: Call2 0x350

0x300: Pop(1)
0x301: Pop(1); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-6] = (bool) 0
0x304: Return(); Pop(4)

0x305: Push((int) 2)
0x306: @ irand(Stack[-2], Stack[-1])
0x307: Pop(1)
0x308: Push(Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30a: Push("voice_common") // @poff=224
0x30b: Push((int) 1)
0x30c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x30d: Push((int) 3)
0x30e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x30f: @ SetVariable(Stack[-2], Stack[-1])
0x310: Pop(2)
0x311: GOTO 0x316

0x312: Push("voice_common") // @poff=224
0x313: Push((int) 0)
0x314: @ SetVariable(Stack[-2], Stack[-1])
0x315: Pop(2)
0x316: GOTO 0x329

0x317: PushEmpty(bool, object)
0x318: Stack[-7] = Stack[-1]
0x319: Call2 0x350

0x31a: Pop(1)
0x31b: Pop(1); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31d: PushEmpty(bool, object)
0x31e: Stack[-7] = Stack[-1]
0x31f: Call2 0x32b

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-6] = (bool) 0
0x324: Return(); Pop(4)

0x325: Push("voice_common") // @poff=224
0x326: Push((int) 1)
0x327: @ SetVariable(Stack[-2], Stack[-1])
0x328: Pop(2)
0x329: Stack[-6] = (bool) 1
0x32a: Return(); Pop(4)

0x32b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x32c: Stack[-5] = "c" // @poff=250
0x32d: Stack[-4] = (int) 0
0x32e: Push((int) 1)
0x32f: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x330: Push((int) 1)
0x331: Pop(1); Push(Stack[-5] + Stack[-1]);
0x332: Pop(1); Push(Stack[-6] + Stack[-1]);
0x333: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x334: Pop(1)
0x335: Pop(0); Push((bool) Stack[-3] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: GOTO 0x33b

0x338: Push((int) 1)
0x339: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x33a: GOTO 0x32e

0x33b: Pop(0); Push((bool) Stack[-4] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-12] = (bool) 0
0x33e: Return(); Pop(10)

0x33f: Stack[-2] = (int) 0
0x340: Push((int) 1)
0x341: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: @ irand(Stack[-2], Stack[-4])
0x344: Pop(0)
0x345: Push((int) 1)
0x346: Pop(1); Push(Stack[-3] + Stack[-1]);
0x347: Pop(1); Push(Stack[-6] + Stack[-1]);
0x348: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x349: Pop(1)
0x34a: PushEmpty(bool, string)
0x34b: Stack[-3] = Stack[-1]
0x34c: Call2 0x388

0x34d: Stack[-2] = Stack[-14]
0x34e: Pop(2)
0x34f: Return(); Pop(10)

0x350: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x351: Push("d") // @poff=220
0x352: PushEmpty(int)
0x353: Call2 0x3c4

0x354: Pop(0)
0x355: Pop(2); Push(Stack[-2] + Stack[-1]);
0x356: Push("m") // @poff=278
0x357: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x358: Stack[-4] = (int) 0
0x359: Push((int) 1)
0x35a: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x35b: Push((int) 1)
0x35c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x35d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x35e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x35f: Pop(1)
0x360: Pop(0); Push((bool) Stack[-3] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: GOTO 0x366

0x363: Push((int) 1)
0x364: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x365: GOTO 0x359

0x366: Pop(0); Push((bool) Stack[-4] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-12] = (bool) 0
0x369: Return(); Pop(10)

0x36a: Stack[-2] = (int) 0
0x36b: Push((int) 1)
0x36c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: @ irand(Stack[-2], Stack[-4])
0x36f: Pop(0)
0x370: Push((int) 1)
0x371: Pop(1); Push(Stack[-3] + Stack[-1]);
0x372: Pop(1); Push(Stack[-6] + Stack[-1]);
0x373: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x374: Pop(1)
0x375: PushEmpty(bool, string)
0x376: Stack[-3] = Stack[-1]
0x377: Call2 0x388

0x378: Stack[-2] = Stack[-14]
0x379: Pop(2)
0x37a: Return(); Pop(10)

0x37b: PushEmpty(float, float, float, float)
0x37c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x37d: Pop(0)
0x37e: Push((bool) 0)
0x37f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(1)
0x381: Return(); Pop(4)

0x382: PushEmpty(float, float, float, float)
0x383: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x384: Pop(0)
0x385: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x386: Pop(0)
0x387: Return(); Pop(4)

0x388: PushEmpty(bool, bool)
0x389: PushEmpty(bool)
0x38a: Call2 0x49d

0x38b: Pop(0)
0x38c: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x38e: Pop(0)
0x38f: Push(Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x391: @ lshPlaySpeech(Stack[-3])
0x392: Pop(0)
0x393: Stack[-4] = (bool) 1
0x394: Return(); Pop(2)

0x395: Stack[-4] = (bool) 0
0x396: Return(); Pop(2)

0x397: PushEmpty(bool)
0x398: Call2 0x49d

0x399: Pop(0)
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: @ lshStopSpeech()
0x39c: Pop(0)
0x39d: Return(); Pop(0)

0x39e: PushEmpty(object, object)
0x39f: @ self(Stack[-1])
0x3a0: Pop(0)
0x3a1: Stack[-1] = Stack[-3]
0x3a2: Return(); Pop(2)

0x3a3: Stack[-1] = 0
0x3a4: PushEmpty(float, float)
0x3a5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3a6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3a7: Push((float)9.999999974752427e-07)
0x3a8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-4] = [0.0, 0.0, 0.0]
0x3ab: Return(); Pop(2)

0x3ac: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty(int, int)
0x3af: @ GetVariable(Stack[-3], Stack[-1])
0x3b0: Pop(0)
0x3b1: Stack[-1] = Stack[-4]
0x3b2: Return(); Pop(2)

0x3b3: PushEmpty(object, object)
0x3b4: @ FindActor(Stack[-1], Stack[-4])
0x3b5: Pop(0)
0x3b6: Pop(0); Push((bool) Stack[-1] == 0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b8: Push("Door ") // @poff=282
0x3b9: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3ba: Push(" not found") // @poff=294
0x3bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3bc: @ Trace(Stack[-1])
0x3bd: Pop(1)
0x3be: GOTO 0x3c2

0x3bf: Push("locked") // @poff=316
0x3c0: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=330
0x3c1: Pop(1)
0x3c2: Return(); Pop(2)

0x3c3: Stack[-1] = 0
0x3c4: PushEmpty(float, float)
0x3c5: @ GetGameTime(Stack[-1])
0x3c6: Pop(0)
0x3c7: Push((int) 1)
0x3c8: PushEmpty(int)
0x3c9: Push((int) 24)
0x3ca: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3cb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3cc: Return(); Pop(2)

0x3cd: PushEmpty()
0x3ce: Push("game_final") // @poff=342
0x3cf: Push((int) 1)
0x3d0: @ SetVariable(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty()
0x3d4: Push("game_final") // @poff=342
0x3d5: Push((int) 2)
0x3d6: @ SetVariable(Stack[-2], Stack[-1])
0x3d7: Pop(2)
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty()
0x3da: Push("game_final") // @poff=342
0x3db: Push((int) 3)
0x3dc: @ SetVariable(Stack[-2], Stack[-1])
0x3dd: Pop(2)
0x3de: Return(); Pop(0)

0x3df: PushEmpty()
0x3e0: PushEmpty(string, bool)
0x3e1: Stack[-2] = "isobor@door1" // @poff=364
0x3e2: Stack[-1] = (bool) 0
0x3e3: Call2 0x3b3

0x3e4: Pop(2)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty()
0x3e7: PushEmpty()
0x3e8: Call2 0x44e

0x3e9: Pop(0)
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: PushEmpty()
0x3ed: Call2 0x434

0x3ee: Pop(0)
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty()
0x3f1: PushEmpty()
0x3f2: Call2 0x441

0x3f3: Pop(0)
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty()
0x3f6: Push("game_final") // @poff=342
0x3f7: PushEmpty(int, string)
0x3f8: Stack[-1] = "c_iFinalEmpty" // @poff=390
0x3f9: Call2 0x3ae

0x3fa: Pop(1)
0x3fb: @ SetVariable(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: Return(); Pop(0)

0x3fe: PushEmpty()
0x3ff: PushEmpty()
0x400: Call2 0x427

0x401: Pop(0)
0x402: Return(); Pop(0)

0x403: PushEmpty()
0x404: PushEmpty(int, string)
0x405: Stack[-1] = "game_final" // @poff=342
0x406: Call2 0x3ae

0x407: Pop(1)
0x408: Push((int) 0)
0x409: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-2] = (bool) 1
0x40c: Return(); Pop(0)

0x40d: Stack[-2] = (bool) 0
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: PushEmpty(int, string)
0x411: Stack[-1] = "b12q01DankoInSobor" // @poff=418
0x412: Call2 0x3ae

0x413: Pop(1)
0x414: Push((int) 0)
0x415: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-2] = (bool) 1
0x418: Return(); Pop(0)

0x419: Stack[-2] = (bool) 0
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: PushEmpty(int, string)
0x41d: Stack[-1] = "b12q01KlaraInSobor" // @poff=456
0x41e: Call2 0x3ae

0x41f: Pop(1)
0x420: Push((int) 0)
0x421: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-2] = (bool) 1
0x424: Return(); Pop(0)

0x425: Stack[-2] = (bool) 0
0x426: Return(); Pop(0)

0x427: PushEmpty(object, object)
0x428: Push((int) 772)
0x429: Push((int) 1)
0x42a: Push((int) 540273)
0x42b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: PushEmpty(bool, object, int)
0x42e: Stack[-4] = Stack[-2]
0x42f: Stack[-1] = (int) 613
0x430: Call2 0x468

0x431: Pop(3)
0x432: Return(); Pop(2)

0x433: Stack[-1] = 0
0x434: PushEmpty(object, object)
0x435: Push((int) 618)
0x436: Push((int) 1)
0x437: Push((int) 532007)
0x438: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(3)
0x43a: PushEmpty(bool, object, int)
0x43b: Stack[-4] = Stack[-2]
0x43c: Stack[-1] = (int) 613
0x43d: Call2 0x468

0x43e: Pop(3)
0x43f: Return(); Pop(2)

0x440: Stack[-1] = 0
0x441: PushEmpty(object, object)
0x442: Push((int) 616)
0x443: Push((int) 1)
0x444: Push((int) 532005)
0x445: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: PushEmpty(bool, object, int)
0x448: Stack[-4] = Stack[-2]
0x449: Stack[-1] = (int) 613
0x44a: Call2 0x468

0x44b: Pop(3)
0x44c: Return(); Pop(2)

0x44d: Stack[-1] = 0
0x44e: PushEmpty(object, object)
0x44f: Push((int) 617)
0x450: Push((int) 1)
0x451: Push((int) 532006)
0x452: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: PushEmpty(bool, object, int)
0x455: Stack[-4] = Stack[-2]
0x456: Stack[-1] = (int) 613
0x457: Call2 0x468

0x458: Pop(3)
0x459: Return(); Pop(2)

0x45a: Stack[-1] = 0
0x45b: PushEmpty(object, object)
0x45c: @ GetDiaryRoot(Stack[-1])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x460: Push("Can't retrieve diary root") // @poff=494
0x461: @ Trace(Stack[-1])
0x462: Pop(1)
0x463: Stack[-3] = (bool) 0
0x464: Return(); Pop(2)

0x465: Stack[-1] = Stack[-3]
0x466: Return(); Pop(2)

0x467: Stack[-1] = 0
0x468: PushEmpty(object, object, int, object, object, int)
0x469: PushEmpty(object)
0x46a: Call2 0x45b

0x46b: Stack[-1] = Stack[-4]
0x46c: Pop(1)
0x46d: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=546
0x46e: Pop(0)
0x46f: Pop(0); Push((bool) Stack[-2] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x471: Push("Can't find diary parent with id: ") // @poff=551
0x472: Pop(1); Push(Stack[-1] + Stack[-8]);
0x473: @ Trace(Stack[-1])
0x474: Pop(1)
0x475: Stack[-9] = (bool) 0
0x476: Return(); Pop(6)

0x477: @@ AddChild(Stack[-8]); Obj=2 // @poff=619
0x478: Pop(0)
0x479: Push((int) 7)
0x47a: @ SendWorldWndMessage(Stack[-1])
0x47b: Pop(1)
0x47c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=628
0x47d: Pop(0)
0x47e: @ SetDiarySection(Stack[-1])
0x47f: Pop(0)
0x480: Stack[-9] = (bool) 0
0x481: Return(); Pop(6)

0x482: Stack[-2] = 0
0x483: Stack[-3] = 0
0x484: PushEmpty(int, int)
0x485: Push("branch") // @poff=640
0x486: @ GetVariable(Stack[-1], Stack[-2])
0x487: Pop(1)
0x488: Push((int) 0)
0x489: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48b: Stack[-3] = (int) 1
0x48c: Return(); Pop(2)

0x48d: GOTO 0x493

0x48e: Push((int) 1)
0x48f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-3] = (int) 2
0x492: Return(); Pop(2)

0x493: Stack[-3] = (int) 3
0x494: Return(); Pop(2)

0x495: Stack[-1] = (int) 515532
0x496: Return(); Pop(0)

0x497: Stack[-1] = (int) 514840
0x498: Return(); Pop(0)

0x499: Stack[-1] = "ui/NPC_Block.png" // @poff=654
0x49a: Return(); Pop(0)

0x49b: Stack[-1] = "ui/NPC_Block_b.png" // @poff=688
0x49c: Return(); Pop(0)

0x49d: Stack[-1] = (bool) 1
0x49e: Return(); Pop(0)

