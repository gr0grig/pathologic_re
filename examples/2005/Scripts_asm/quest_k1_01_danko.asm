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
	W:ook1Danko1
	W:ook1Danko2
	W:k1q01
	W:k1q01Healed
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006b003100440061006e006b006f00310000006f006f006b003100440061006e006b006f00320000006b00310071003000310000006b0031007100300031004800650061006c006500640000006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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

RunOp = 0x218
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf4 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x210 Vars = (object)
		EVENT_26 Op = 0x21c Vars = (string)
		EVENT_6 Op = 0x238 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x34c

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x29f

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x24a

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x3b9

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x3b7

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x3bb

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x3bd

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x3a6

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
0x48: Call2 0x28e

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
0x56: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x376

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x382

0x63: Pop(1)
0x64: Pop(1); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x38e

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[-1] = (bool) 1
0x6e: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x6f: PushEmpty(object, object)
0x70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x72: Call2 0x36a

0x73: Pop(2)
0x74: PushEmpty(string)
0x75: Stack[-1] = "Neutral" // @poff=89
0x76: Call2 0xde

0x77: Pop(1)
0x78: Push((int) 524699)
0x79: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7a: Pop(1)
0x7b: @@@ ClearReplies(); Obj=0 // @poff=116
0x7c: Pop(0)
0x7d: Push((int) 524700)
0x7e: Push((int) 28105)
0x7f: Push((int) 26039)
0x80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x81: Pop(3)
0x82: Push((int) 526838)
0x83: Push((int) 28123)
0x84: Push((int) 28122)
0x85: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x86: Pop(3)
0x87: GOTO 0xc0

0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x382

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x39a

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x96: PushEmpty(object, object)
0x97: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99: Call2 0x370

0x9a: Pop(2)
0x9b: PushEmpty(string)
0x9c: Stack[-1] = "Neutral" // @poff=89
0x9d: Call2 0xde

0x9e: Pop(1)
0x9f: Push((int) 524714)
0xa0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa1: Pop(1)
0xa2: @@@ ClearReplies(); Obj=0 // @poff=116
0xa3: Pop(0)
0xa4: Push((int) 524715)
0xa5: Push((int) 28112)
0xa6: Push((int) 26054)
0xa7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa8: Pop(3)
0xa9: GOTO 0xc0

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral" // @poff=89
0xac: Call2 0xde

0xad: Pop(1)
0xae: Push((int) 526834)
0xaf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb0: Pop(1)
0xb1: @@@ ClearReplies(); Obj=0 // @poff=116
0xb2: Pop(0)
0xb3: Push((int) 526835)
0xb4: Push((int) -1)
0xb5: Push((int) 28118)
0xb6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb7: Pop(3)
0xb8: Push((int) 526836)
0xb9: Push((int) -1)
0xba: Push((int) 28119)
0xbb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbc: Pop(3)
0xbd: GOTO 0xc0

0xbe: Return(); Pop(0)

0xbf: GOTO 0x55

0xc0: PushEmpty(bool)
0xc1: Call2 0x3bf

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc4: @ lshWaitForAnimEnd()
0xc5: Pop(0)
0xc6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: GOTO 0xce

0xc9: PushEmpty(string)
0xca: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcb: Call2 0x329

0xcc: Pop(1)
0xcd: GOTO 0xc4

0xce: GOTO 0xdd

0xcf: Push("all") // @poff=138
0xd0: Push("idle") // @poff=146
0xd1: @ PlayAnimation(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: @ WaitForAnimEnd()
0xd4: Pop(0)
0xd5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: GOTO 0xdd

0xd8: Push("all") // @poff=138
0xd9: Push("idle") // @poff=146
0xda: @ PlayAnimation(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: GOTO 0xd3

0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: PushEmpty(bool)
0xe0: Call2 0x3bf

0xe1: Pop(0)
0xe2: Pop(1); Push((bool) Stack[-1] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Return(); Pop(0)

0xe5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Return(); Pop(0)

0xe8: PushEmpty(string, bool)
0xe9: Stack[-3] = Stack[-2]
0xea: Push("") // @poff=102
0xeb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: Stack[-1] = (bool) 0
0xee: GOTO 0xf0

0xef: Stack[-1] = (bool) 1
0xf0: Call2 0x330

0xf1: Pop(2)
0xf2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: Push((int) 1)
0xf6: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0xf7: PushEmpty()
0xf8: Call2 0x345

0xf9: Pop(0)
0xfa: Push((int) 26038)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0xfd: PushEmpty(bool)
0xfe: Stack[-1] = (bool) 0
0xff: PushEmpty(bool)
0x100: Stack[-1] = (bool) 0
0x101: PushEmpty(bool, object)
0x102: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103: Call2 0x376

0x104: Pop(1)
0x105: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108: Call2 0x382

0x109: Pop(1)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: Stack[-1] = (bool) 1
0x10d: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10e: PushEmpty(bool, object)
0x10f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x110: Call2 0x38e

0x111: Pop(1)
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: Stack[-1] = (bool) 1
0x114: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x36a

0x119: Pop(2)
0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral" // @poff=89
0x11c: Call2 0xde

0x11d: Pop(1)
0x11e: Push((int) 524699)
0x11f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x120: Pop(1)
0x121: @@@ ClearReplies(); Obj=0 // @poff=116
0x122: Pop(0)
0x123: Push((int) 524700)
0x124: Push((int) 28105)
0x125: Push((int) 26039)
0x126: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x127: Pop(3)
0x128: Push((int) 526838)
0x129: Push((int) 28123)
0x12a: Push((int) 28122)
0x12b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 0
0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x132: Call2 0x382

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0x39a

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: Stack[-1] = (bool) 1
0x13b: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x13c: PushEmpty(object, object)
0x13d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13f: Call2 0x370

0x140: Pop(2)
0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral" // @poff=89
0x143: Call2 0xde

0x144: Pop(1)
0x145: Push((int) 524714)
0x146: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x147: Pop(1)
0x148: @@@ ClearReplies(); Obj=0 // @poff=116
0x149: Pop(0)
0x14a: Push((int) 524715)
0x14b: Push((int) 28112)
0x14c: Push((int) 26054)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xde

0x153: Pop(1)
0x154: Push((int) 526834)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 526835)
0x15a: Push((int) -1)
0x15b: Push((int) 28118)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 526836)
0x15f: Push((int) -1)
0x160: Push((int) 28119)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 28112)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0xde

0x16a: Pop(1)
0x16b: Push((int) 526830)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 526831)
0x171: Push((int) 26055)
0x172: Push((int) 28113)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 526832)
0x176: Push((int) 26055)
0x177: Push((int) 28114)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 26055)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral" // @poff=89
0x180: Call2 0xde

0x181: Pop(1)
0x182: Push((int) 524716)
0x183: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x184: Pop(1)
0x185: @@@ ClearReplies(); Obj=0 // @poff=116
0x186: Pop(0)
0x187: Push((int) 524717)
0x188: Push((int) -1)
0x189: Push((int) 26056)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Push((int) 526829)
0x18d: Push((int) -1)
0x18e: Push((int) 28111)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 28123)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral" // @poff=89
0x197: Call2 0xde

0x198: Pop(1)
0x199: Push((int) 526839)
0x19a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19b: Pop(1)
0x19c: @@@ ClearReplies(); Obj=0 // @poff=116
0x19d: Pop(0)
0x19e: Push((int) 526840)
0x19f: Push((int) 28125)
0x1a0: Push((int) 28124)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 28125)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0xde

0x1aa: Pop(1)
0x1ab: Push((int) 526841)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 526842)
0x1b1: Push((int) 28127)
0x1b2: Push((int) 28126)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 28127)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral" // @poff=89
0x1bb: Call2 0xde

0x1bc: Pop(1)
0x1bd: Push((int) 526843)
0x1be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bf: Pop(1)
0x1c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c1: Pop(0)
0x1c2: Push((int) 526844)
0x1c3: Push((int) 28105)
0x1c4: Push((int) 28128)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 28105)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0xde

0x1ce: Pop(1)
0x1cf: Push((int) 526823)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: Push((int) 526824)
0x1d5: Push((int) 28107)
0x1d6: Push((int) 28106)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 28107)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral" // @poff=89
0x1df: Call2 0xde

0x1e0: Pop(1)
0x1e1: Push((int) 526825)
0x1e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e3: Pop(1)
0x1e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e5: Pop(0)
0x1e6: Push((int) 526826)
0x1e7: Push((int) 28109)
0x1e8: Push((int) 28108)
0x1e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 28109)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral" // @poff=89
0x1f1: Call2 0xde

0x1f2: Pop(1)
0x1f3: Push((int) 526827)
0x1f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f5: Pop(1)
0x1f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f7: Pop(0)
0x1f8: Push((int) 526828)
0x1f9: Push((int) -1)
0x1fa: Push((int) 28110)
0x1fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fc: Pop(3)
0x1fd: Push((int) 526833)
0x1fe: Push((int) -1)
0x1ff: Push((int) 28115)
0x200: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x204: PushEmpty(bool)
0x205: Call2 0x3bf

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x208: @ lshStopAnimation()
0x209: Pop(0)
0x20a: GOTO 0x20d

0x20b: @ StopAnimation()
0x20c: Pop(0)
0x20d: Return(); Pop(0)

0x20e: GOTO 0xf5

0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: PushEmpty(int, object)
0x212: Stack[-3] = Stack[-1]
0x213: Push(-2, 1); TaskCall(0)
0x214: Call2 0x0

0x215: Pop(-2, 1); TaskReturn
0x216: Pop(2)
0x217: Return(); Pop(0)

0x218: @ Hold()
0x219: Pop(0)
0x21a: GOTO 0x218

0x21b: Return(); Pop(0)

0x21c: PushEmpty(bool, bool)
0x21d: Push("cleanup") // @poff=156
0x21e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x220: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x221: @ IsLoaded(Stack[-1])
0x222: Pop(0)
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: Pop(0); Push((bool) Stack[-2] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: PushEmpty(bool)
0x228: Call2 0x248

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: PushEmpty(object)
0x22e: Call2 0x34c

0x22f: Pop(0)
0x230: @ RemoveActor(Stack[-1])
0x231: Pop(1)
0x232: GOTO 0x237

0x233: Push("restore") // @poff=172
0x234: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x237: Return(); Pop(2)

0x238: PushEmpty(bool)
0x239: Stack[-1] = (bool) 0
0x23a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23b: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23c: PushEmpty(bool)
0x23d: Call2 0x248

0x23e: Pop(0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: Stack[-1] = (bool) 1
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: PushEmpty(object)
0x243: Call2 0x34c

0x244: Pop(0)
0x245: @ RemoveActor(Stack[-1])
0x246: Pop(1)
0x247: Return(); Pop(0)

0x248: Stack[-1] = (bool) 1
0x249: Return(); Pop(0)

0x24a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x24b: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x24c: Pop(0)
0x24d: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x24e: Pop(0)
0x24f: Push(CvectorIndex(Stack[-8], 1))
0x250: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x251: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x252: @ GetPosition(Stack[-7])
0x253: Pop(0)
0x254: @ GetEyesHeight(Stack[-9])
0x255: Pop(0)
0x256: Push(CvectorIndex(Stack[-7], 1))
0x257: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x258: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x259: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x25a: Push(CvectorIndex(Stack[-6], 1))
0x25b: Stack[-1] = (int) 0
0x25c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25e: Pop(1); Push(Sqrt(Stack[-1]))
0x25f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x260: Stack[-5] = -Stack[-6]; Pop(0);
0x261: Pop(0); Push(Stack[-6] * Stack[-19]);
0x262: PushEmpty(cvector, cvector)
0x263: Push([0.0, 1.0, 0.0])
0x264: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x265: Call2 0x352

0x266: Pop(1)
0x267: Push((int) 25)
0x268: Pop(2); Push(Stack[-2] * Stack[-1]);
0x269: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26a: Push([0.0, 10.0, 0.0])
0x26b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x26c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x26d: @ IsOverrideActive(Stack[-2])
0x26e: Pop(0)
0x26f: Push(Stack[-2])
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-21] = (bool) 0
0x272: Return(); Pop(18)

0x273: @ StopWorld()
0x274: Pop(0)
0x275: @ CameraTransit(Stack[-3], Stack[-5])
0x276: Pop(0)
0x277: Push(CvectorIndex(Stack[-4], 0))
0x278: Push(CvectorIndex(Stack[-5], 2))
0x279: @ Rotate(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: PushEmpty(bool)
0x27c: Call2 0x3bf

0x27d: Pop(0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x288

0x280: Push("head") // @poff=214
0x281: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x282: Pop(1)
0x283: Push(Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x285: Push("head") // @poff=214
0x286: @ LookAsyncCamera(Stack[-1])
0x287: Pop(1)
0x288: @ CameraWaitForPlayFinish()
0x289: Pop(0)
0x28a: @ ResumeWorld()
0x28b: Pop(0)
0x28c: Stack[-21] = (bool) 1
0x28d: Return(); Pop(18)

0x28e: PushEmpty(bool, bool)
0x28f: @ CameraSwitchToNormal()
0x290: Pop(0)
0x291: PushEmpty(bool)
0x292: Call2 0x3bf

0x293: Pop(0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x29e

0x296: Push("head") // @poff=214
0x297: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x298: Pop(1)
0x299: Push(Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29b: Push("head") // @poff=214
0x29c: @ UnlookAsync(Stack[-1])
0x29d: Pop(1)
0x29e: Return(); Pop(2)

0x29f: PushEmpty(int, int, int, int)
0x2a0: Push("voice_common") // @poff=224
0x2a1: @ GetVariable(Stack[-1], Stack[-3])
0x2a2: Pop(1)
0x2a3: Push(Stack[-2])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-7] = Stack[-1]
0x2a7: Call2 0x2d9

0x2a8: Pop(1)
0x2a9: Pop(1); Push((bool) Stack[-1] == 0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ab: PushEmpty(bool, object)
0x2ac: Stack[-7] = Stack[-1]
0x2ad: Call2 0x2fe

0x2ae: Pop(1)
0x2af: Pop(1); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-6] = (bool) 0
0x2b2: Return(); Pop(4)

0x2b3: Push((int) 2)
0x2b4: @ irand(Stack[-2], Stack[-1])
0x2b5: Pop(1)
0x2b6: Push(Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b8: Push("voice_common") // @poff=224
0x2b9: Push((int) 1)
0x2ba: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2bb: Push((int) 3)
0x2bc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2bd: @ SetVariable(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: GOTO 0x2c4

0x2c0: Push("voice_common") // @poff=224
0x2c1: Push((int) 0)
0x2c2: @ SetVariable(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: GOTO 0x2d7

0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-7] = Stack[-1]
0x2c7: Call2 0x2fe

0x2c8: Pop(1)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-7] = Stack[-1]
0x2cd: Call2 0x2d9

0x2ce: Pop(1)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-6] = (bool) 0
0x2d2: Return(); Pop(4)

0x2d3: Push("voice_common") // @poff=224
0x2d4: Push((int) 1)
0x2d5: @ SetVariable(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: Stack[-6] = (bool) 1
0x2d8: Return(); Pop(4)

0x2d9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2da: Stack[-5] = "c" // @poff=250
0x2db: Stack[-4] = (int) 0
0x2dc: Push((int) 1)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2de: Push((int) 1)
0x2df: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e1: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2e2: Pop(1)
0x2e3: Pop(0); Push((bool) Stack[-3] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2e9

0x2e6: Push((int) 1)
0x2e7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2e8: GOTO 0x2dc

0x2e9: Pop(0); Push((bool) Stack[-4] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2eb: Stack[-12] = (bool) 0
0x2ec: Return(); Pop(10)

0x2ed: Stack[-2] = (int) 0
0x2ee: Push((int) 1)
0x2ef: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: @ irand(Stack[-2], Stack[-4])
0x2f2: Pop(0)
0x2f3: Push((int) 1)
0x2f4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f6: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2f7: Pop(1)
0x2f8: PushEmpty(bool, string)
0x2f9: Stack[-3] = Stack[-1]
0x2fa: Call2 0x336

0x2fb: Stack[-2] = Stack[-14]
0x2fc: Pop(2)
0x2fd: Return(); Pop(10)

0x2fe: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2ff: Push("d") // @poff=220
0x300: PushEmpty(int)
0x301: Call2 0x361

0x302: Pop(0)
0x303: Pop(2); Push(Stack[-2] + Stack[-1]);
0x304: Push("m") // @poff=278
0x305: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x306: Stack[-4] = (int) 0
0x307: Push((int) 1)
0x308: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x309: Push((int) 1)
0x30a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30c: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x30d: Pop(1)
0x30e: Pop(0); Push((bool) Stack[-3] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x314

0x311: Push((int) 1)
0x312: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x313: GOTO 0x307

0x314: Pop(0); Push((bool) Stack[-4] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-12] = (bool) 0
0x317: Return(); Pop(10)

0x318: Stack[-2] = (int) 0
0x319: Push((int) 1)
0x31a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: @ irand(Stack[-2], Stack[-4])
0x31d: Pop(0)
0x31e: Push((int) 1)
0x31f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x320: Pop(1); Push(Stack[-6] + Stack[-1]);
0x321: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x322: Pop(1)
0x323: PushEmpty(bool, string)
0x324: Stack[-3] = Stack[-1]
0x325: Call2 0x336

0x326: Stack[-2] = Stack[-14]
0x327: Pop(2)
0x328: Return(); Pop(10)

0x329: PushEmpty(float, float, float, float)
0x32a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x32b: Pop(0)
0x32c: Push((bool) 0)
0x32d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(1)
0x32f: Return(); Pop(4)

0x330: PushEmpty(float, float, float, float)
0x331: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x332: Pop(0)
0x333: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x334: Pop(0)
0x335: Return(); Pop(4)

0x336: PushEmpty(bool, bool)
0x337: PushEmpty(bool)
0x338: Call2 0x3bf

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x33c: Pop(0)
0x33d: Push(Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33f: @ lshPlaySpeech(Stack[-3])
0x340: Pop(0)
0x341: Stack[-4] = (bool) 1
0x342: Return(); Pop(2)

0x343: Stack[-4] = (bool) 0
0x344: Return(); Pop(2)

0x345: PushEmpty(bool)
0x346: Call2 0x3bf

0x347: Pop(0)
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: @ lshStopSpeech()
0x34a: Pop(0)
0x34b: Return(); Pop(0)

0x34c: PushEmpty(object, object)
0x34d: @ self(Stack[-1])
0x34e: Pop(0)
0x34f: Stack[-1] = Stack[-3]
0x350: Return(); Pop(2)

0x351: Stack[-1] = 0
0x352: PushEmpty(float, float)
0x353: Pop(0); Push(Stack[-3] | Stack[-3]);
0x354: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x355: Push((float)9.999999974752427e-07)
0x356: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-4] = [0.0, 0.0, 0.0]
0x359: Return(); Pop(2)

0x35a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35b: Return(); Pop(2)

0x35c: PushEmpty(int, int)
0x35d: @ GetVariable(Stack[-3], Stack[-1])
0x35e: Pop(0)
0x35f: Stack[-1] = Stack[-4]
0x360: Return(); Pop(2)

0x361: PushEmpty(float, float)
0x362: @ GetGameTime(Stack[-1])
0x363: Pop(0)
0x364: Push((int) 1)
0x365: PushEmpty(int)
0x366: Push((int) 24)
0x367: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x368: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x369: Return(); Pop(2)

0x36a: PushEmpty()
0x36b: Push("ook1Danko1") // @poff=282
0x36c: Push((int) 1)
0x36d: @ SetVariable(Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: Return(); Pop(0)

0x370: PushEmpty()
0x371: Push("ook1Danko2") // @poff=304
0x372: Push((int) 1)
0x373: @ SetVariable(Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: Return(); Pop(0)

0x376: PushEmpty()
0x377: PushEmpty(int, string)
0x378: Stack[-1] = "k1q01" // @poff=326
0x379: Call2 0x35c

0x37a: Pop(1)
0x37b: Push((int) 4)
0x37c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-2] = (bool) 1
0x37f: Return(); Pop(0)

0x380: Stack[-2] = (bool) 0
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: PushEmpty(int, string)
0x384: Stack[-1] = "k1q01Healed" // @poff=338
0x385: Call2 0x35c

0x386: Pop(1)
0x387: Push((int) 0)
0x388: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-2] = (bool) 1
0x38b: Return(); Pop(0)

0x38c: Stack[-2] = (bool) 0
0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: PushEmpty(int, string)
0x390: Stack[-1] = "ook1Danko1" // @poff=282
0x391: Call2 0x35c

0x392: Pop(1)
0x393: Push((int) 0)
0x394: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-2] = (bool) 1
0x397: Return(); Pop(0)

0x398: Stack[-2] = (bool) 0
0x399: Return(); Pop(0)

0x39a: PushEmpty()
0x39b: PushEmpty(int, string)
0x39c: Stack[-1] = "ook1Danko2" // @poff=304
0x39d: Call2 0x35c

0x39e: Pop(1)
0x39f: Push((int) 0)
0x3a0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-2] = (bool) 1
0x3a3: Return(); Pop(0)

0x3a4: Stack[-2] = (bool) 0
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty(int, int)
0x3a7: Push("branch") // @poff=362
0x3a8: @ GetVariable(Stack[-1], Stack[-2])
0x3a9: Pop(1)
0x3aa: Push((int) 0)
0x3ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ad: Stack[-3] = (int) 1
0x3ae: Return(); Pop(2)

0x3af: GOTO 0x3b5

0x3b0: Push((int) 1)
0x3b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-3] = (int) 2
0x3b4: Return(); Pop(2)

0x3b5: Stack[-3] = (int) 3
0x3b6: Return(); Pop(2)

0x3b7: Stack[-1] = (int) 515573
0x3b8: Return(); Pop(0)

0x3b9: Stack[-1] = (int) 504032
0x3ba: Return(); Pop(0)

0x3bb: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=376
0x3bc: Return(); Pop(0)

0x3bd: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=416
0x3be: Return(); Pop(0)

0x3bf: Stack[-1] = (bool) 1
0x3c0: Return(); Pop(0)

