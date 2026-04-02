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
	W:Confusion
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:Warning
	W:all
	W:idle
	W:Neutral
	W:Rage
	W:cleanup
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Rubin.png
	W:ui/NPC_Rubin_b.png
	W:oob4Rubin1
	W:b4q01
	W:oob4Rubin2
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c75650043006f006e0066007500730069006f006e0000005365744d65737361676500436c6561725265706c696573004164645265706c79005700610072006e0069006e006700000061006c006c000000690064006c00650000004e00650075007400720061006c0000005200610067006500000063006c00650061006e00750070000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0052007500620069006e002e0070006e0067000000750069002f004e00500043005f0052007500620069006e005f0062002e0070006e00670000006f006f006200340052007500620069006e00310000006200340071003000310000006f006f006200340052007500620069006e0032000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
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
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x2b6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2ab Vars = (object)
		EVENT_26 Op = 0x2df Vars = (string)
		EVENT_5 Op = 0x2e7 Vars = ()
		EVENT_6 Op = 0x2ec Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x45b

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x3ae

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x359

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x47b

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x479

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x47d

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x47f

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x4fe

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
0x48: Call2 0x39d

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
0x56: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x4b0

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x49b

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Confusion" // @poff=89
0x63: Call2 0xae

0x64: Pop(1)
0x65: Push((int) 518556)
0x66: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x67: Pop(1)
0x68: @@@ ClearReplies(); Obj=0 // @poff=120
0x69: Pop(0)
0x6a: Push((int) 518557)
0x6b: Push((int) 19668)
0x6c: Push((int) 19667)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x6e: Pop(3)
0x6f: Push((int) 518965)
0x70: Push((int) 20084)
0x71: Push((int) 20077)
0x72: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x73: Pop(3)
0x74: GOTO 0x90

0x75: PushEmpty(string)
0x76: Stack[-1] = "Warning" // @poff=142
0x77: Call2 0xae

0x78: Pop(1)
0x79: Push((int) 518560)
0x7a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x7b: Pop(1)
0x7c: @@@ ClearReplies(); Obj=0 // @poff=120
0x7d: Pop(0)
0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x4bc

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: Push((int) 518978)
0x84: Push((int) 20099)
0x85: Push((int) 20090)
0x86: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x87: Pop(3)
0x88: Push((int) 518561)
0x89: Push((int) -1)
0x8a: Push((int) 19671)
0x8b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x8c: Pop(3)
0x8d: GOTO 0x90

0x8e: Return(); Pop(0)

0x8f: GOTO 0x55

0x90: PushEmpty(bool)
0x91: Call2 0x481

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x94: @ lshWaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: PushEmpty(string)
0x9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b: Call2 0x438

0x9c: Pop(1)
0x9d: GOTO 0x94

0x9e: GOTO 0xad

0x9f: Push("all") // @poff=158
0xa0: Push("idle") // @poff=166
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ WaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: Push("all") // @poff=158
0xa9: Push("idle") // @poff=166
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: GOTO 0xa3

0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0x481

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(string, bool)
0xb9: Stack[-3] = Stack[-2]
0xba: Push("") // @poff=106
0xbb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0x43f

0xc1: Pop(2)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0x454

0xc9: Pop(0)
0xca: Push((int) 19669)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x4a1

0xd1: Pop(2)
0xd2: Push((int) 20131)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4a1

0xd9: Pop(2)
0xda: Push((int) 20090)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x4aa

0xe1: Pop(2)
0xe2: Push((int) 19666)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x4b0

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x49b

0xee: Pop(2)
0xef: PushEmpty(string)
0xf0: Stack[-1] = "Confusion" // @poff=89
0xf1: Call2 0xae

0xf2: Pop(1)
0xf3: Push((int) 518556)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=120
0xf7: Pop(0)
0xf8: Push((int) 518557)
0xf9: Push((int) 19668)
0xfa: Push((int) 19667)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0xfc: Pop(3)
0xfd: Push((int) 518965)
0xfe: Push((int) 20084)
0xff: Push((int) 20077)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Warning" // @poff=142
0x105: Call2 0xae

0x106: Pop(1)
0x107: Push((int) 518560)
0x108: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x109: Pop(1)
0x10a: @@@ ClearReplies(); Obj=0 // @poff=120
0x10b: Pop(0)
0x10c: PushEmpty(bool, object)
0x10d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Call2 0x4bc

0x10f: Pop(1)
0x110: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x111: Push((int) 518978)
0x112: Push((int) 20099)
0x113: Push((int) 20090)
0x114: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x115: Pop(3)
0x116: Push((int) 518561)
0x117: Push((int) -1)
0x118: Push((int) 19671)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 20099)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral" // @poff=176
0x121: Call2 0xae

0x122: Pop(1)
0x123: Push((int) 518984)
0x124: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x125: Pop(1)
0x126: @@@ ClearReplies(); Obj=0 // @poff=120
0x127: Pop(0)
0x128: Push((int) 518985)
0x129: Push((int) 20101)
0x12a: Push((int) 20100)
0x12b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 20101)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Confusion" // @poff=89
0x133: Call2 0xae

0x134: Pop(1)
0x135: Push((int) 518986)
0x136: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x137: Pop(1)
0x138: @@@ ClearReplies(); Obj=0 // @poff=120
0x139: Pop(0)
0x13a: Push((int) 518987)
0x13b: Push((int) 20103)
0x13c: Push((int) 20102)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 20103)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Rage" // @poff=192
0x145: Call2 0xae

0x146: Pop(1)
0x147: Push((int) 518988)
0x148: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x149: Pop(1)
0x14a: @@@ ClearReplies(); Obj=0 // @poff=120
0x14b: Pop(0)
0x14c: Push((int) 518989)
0x14d: Push((int) -1)
0x14e: Push((int) 20104)
0x14f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 20084)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Neutral" // @poff=176
0x157: Call2 0xae

0x158: Pop(1)
0x159: Push((int) 518972)
0x15a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x15b: Pop(1)
0x15c: @@@ ClearReplies(); Obj=0 // @poff=120
0x15d: Pop(0)
0x15e: Push((int) 518973)
0x15f: Push((int) 20086)
0x160: Push((int) 20085)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 20086)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=176
0x169: Call2 0xae

0x16a: Pop(1)
0x16b: Push((int) 518974)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=120
0x16f: Pop(0)
0x170: Push((int) 518976)
0x171: Push((int) 20089)
0x172: Push((int) 20088)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 20089)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=176
0x17b: Call2 0xae

0x17c: Pop(1)
0x17d: Push((int) 518977)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=120
0x181: Pop(0)
0x182: Push((int) 518979)
0x183: Push((int) 20092)
0x184: Push((int) 20091)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 20092)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral" // @poff=176
0x18d: Call2 0xae

0x18e: Pop(1)
0x18f: Push((int) 518980)
0x190: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x191: Pop(1)
0x192: @@@ ClearReplies(); Obj=0 // @poff=120
0x193: Pop(0)
0x194: Push((int) 518981)
0x195: Push((int) 20087)
0x196: Push((int) 20093)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 19668)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral" // @poff=176
0x19f: Call2 0xae

0x1a0: Pop(1)
0x1a1: Push((int) 518558)
0x1a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x1a3: Pop(1)
0x1a4: @@@ ClearReplies(); Obj=0 // @poff=120
0x1a5: Pop(0)
0x1a6: Push((int) 518966)
0x1a7: Push((int) 20087)
0x1a8: Push((int) 20078)
0x1a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1aa: Pop(3)
0x1ab: Push((int) 518967)
0x1ac: Push((int) 20080)
0x1ad: Push((int) 20079)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 20080)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=176
0x1b6: Call2 0xae

0x1b7: Pop(1)
0x1b8: Push((int) 518968)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=120
0x1bc: Pop(0)
0x1bd: Push((int) 518969)
0x1be: Push((int) 20087)
0x1bf: Push((int) 20081)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1c1: Pop(3)
0x1c2: Push((int) 518970)
0x1c3: Push((int) 20083)
0x1c4: Push((int) 20082)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 20083)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=176
0x1cd: Call2 0xae

0x1ce: Pop(1)
0x1cf: Push((int) 518971)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=120
0x1d3: Pop(0)
0x1d4: Push((int) 518982)
0x1d5: Push((int) 20084)
0x1d6: Push((int) 20096)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 20087)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1dd: Push((int) 518975)
0x1de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x1df: Pop(1)
0x1e0: @@@ ClearReplies(); Obj=0 // @poff=120
0x1e1: Pop(0)
0x1e2: Push((int) 518993)
0x1e3: Push((int) 20110)
0x1e4: Push((int) 20108)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1e6: Pop(3)
0x1e7: Push((int) 518994)
0x1e8: Push((int) 20110)
0x1e9: Push((int) 20109)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 20110)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Warning" // @poff=142
0x1f2: Call2 0xae

0x1f3: Pop(1)
0x1f4: Push((int) 518995)
0x1f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x1f6: Pop(1)
0x1f7: @@@ ClearReplies(); Obj=0 // @poff=120
0x1f8: Pop(0)
0x1f9: Push((int) 518996)
0x1fa: Push((int) 20113)
0x1fb: Push((int) 20112)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x1fd: Pop(3)
0x1fe: Push((int) 527917)
0x1ff: Push((int) 20113)
0x200: Push((int) 29266)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 20113)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Neutral" // @poff=176
0x209: Call2 0xae

0x20a: Pop(1)
0x20b: Push((int) 518997)
0x20c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x20d: Pop(1)
0x20e: @@@ ClearReplies(); Obj=0 // @poff=120
0x20f: Pop(0)
0x210: Push((int) 518998)
0x211: Push((int) 20115)
0x212: Push((int) 20114)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 20115)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Rage" // @poff=192
0x21b: Call2 0xae

0x21c: Pop(1)
0x21d: Push((int) 518999)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=120
0x221: Pop(0)
0x222: Push((int) 519005)
0x223: Push((int) 20122)
0x224: Push((int) 20121)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x226: Pop(3)
0x227: Push((int) 519001)
0x228: Push((int) 20118)
0x229: Push((int) 20117)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 20118)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=176
0x232: Call2 0xae

0x233: Pop(1)
0x234: Push((int) 519002)
0x235: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x236: Pop(1)
0x237: @@@ ClearReplies(); Obj=0 // @poff=120
0x238: Pop(0)
0x239: Push((int) 519003)
0x23a: Push((int) 20124)
0x23b: Push((int) 20119)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 20124)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral" // @poff=176
0x244: Call2 0xae

0x245: Pop(1)
0x246: Push((int) 519007)
0x247: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x248: Pop(1)
0x249: @@@ ClearReplies(); Obj=0 // @poff=120
0x24a: Pop(0)
0x24b: Push((int) 519008)
0x24c: Push((int) 20122)
0x24d: Push((int) 20125)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Push((int) 20122)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Confusion" // @poff=89
0x256: Call2 0xae

0x257: Pop(1)
0x258: Push((int) 519006)
0x259: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x25a: Pop(1)
0x25b: @@@ ClearReplies(); Obj=0 // @poff=120
0x25c: Pop(0)
0x25d: Push((int) 519000)
0x25e: Push((int) 20120)
0x25f: Push((int) 20116)
0x260: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 20120)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral" // @poff=176
0x268: Call2 0xae

0x269: Pop(1)
0x26a: Push((int) 519004)
0x26b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x26c: Pop(1)
0x26d: @@@ ClearReplies(); Obj=0 // @poff=120
0x26e: Pop(0)
0x26f: Push((int) 519009)
0x270: Push((int) 20128)
0x271: Push((int) 20127)
0x272: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 20128)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral" // @poff=176
0x27a: Call2 0xae

0x27b: Pop(1)
0x27c: Push((int) 519010)
0x27d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x27e: Pop(1)
0x27f: @@@ ClearReplies(); Obj=0 // @poff=120
0x280: Pop(0)
0x281: Push((int) 519011)
0x282: Push((int) 20130)
0x283: Push((int) 20129)
0x284: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x285: Pop(3)
0x286: Return(); Pop(0)

0x287: Push((int) 20130)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral" // @poff=176
0x28c: Call2 0xae

0x28d: Pop(1)
0x28e: Push((int) 519012)
0x28f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=109
0x290: Pop(1)
0x291: @@@ ClearReplies(); Obj=0 // @poff=120
0x292: Pop(0)
0x293: Push((int) 518559)
0x294: Push((int) -1)
0x295: Push((int) 19669)
0x296: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x297: Pop(3)
0x298: Push((int) 519013)
0x299: Push((int) -1)
0x29a: Push((int) 20131)
0x29b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=133
0x29c: Pop(3)
0x29d: Return(); Pop(0)

0x29e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x29f: PushEmpty(bool)
0x2a0: Call2 0x481

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a3: @ lshStopAnimation()
0x2a4: Pop(0)
0x2a5: GOTO 0x2a8

0x2a6: @ StopAnimation()
0x2a7: Pop(0)
0x2a8: Return(); Pop(0)

0x2a9: GOTO 0xc5

0x2aa: Return(); Pop(0)

0x2ab: PushEmpty()
0x2ac: PushEmpty()
0x2ad: Call2 0x34f

0x2ae: Pop(0)
0x2af: PushEmpty(int, object)
0x2b0: Stack[-3] = Stack[-1]
0x2b1: Push(-2, 1); TaskCall(0)
0x2b2: Call2 0x0

0x2b3: Pop(-2, 1); TaskReturn
0x2b4: Pop(2)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(float, float)
0x2b7: PushEmpty(bool)
0x2b8: Call2 0x354

0x2b9: Pop(0)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bc: @ Hold()
0x2bd: Pop(0)
0x2be: GOTO 0x2b7

0x2bf: Push((int) 3)
0x2c0: @ rand(Stack[-2], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push((int) 3)
0x2c3: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2c4: @ Sleep(Stack[-1])
0x2c5: Pop(1)
0x2c6: PushEmpty()
0x2c7: Call2 0x2fe

0x2c8: Pop(0)
0x2c9: GOTO 0x2b7

0x2ca: Return(); Pop(2)

0x2cb: PushEmpty(bool, bool)
0x2cc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2cd: @ IsLoaded(Stack[-1])
0x2ce: Pop(0)
0x2cf: PushEmpty(bool)
0x2d0: Stack[-1] = (bool) 0
0x2d1: Pop(0); Push((bool) Stack[-2] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: PushEmpty(bool)
0x2d4: Call2 0x2fc

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: Stack[-1] = (bool) 1
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: PushEmpty(object)
0x2da: Call2 0x45b

0x2db: Pop(0)
0x2dc: @ RemoveActor(Stack[-1])
0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty()
0x2e0: Push("cleanup") // @poff=202
0x2e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e3: PushEmpty()
0x2e4: Call2 0x2cb

0x2e5: Pop(0)
0x2e6: Return(); Pop(0)

0x2e7: @ StopGroup0()
0x2e8: Pop(0)
0x2e9: @ sync()
0x2ea: Pop(0)
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty(bool)
0x2ed: Stack[-1] = (bool) 0
0x2ee: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(bool)
0x2f1: Call2 0x2fc

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = (bool) 1
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f6: PushEmpty(object)
0x2f7: Call2 0x45b

0x2f8: Pop(0)
0x2f9: @ RemoveActor(Stack[-1])
0x2fa: Pop(1)
0x2fb: Return(); Pop(0)

0x2fc: Stack[-1] = (bool) 1
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2ff: @ WaitForAnimEnd()
0x300: Pop(0)
0x301: PushEmpty(bool)
0x302: Call2 0x354

0x303: Pop(0)
0x304: Pop(1); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Return(); Pop(14)

0x307: PushEmpty(int)
0x308: Call2 0x48a

0x309: Stack[-1] = Stack[-8]
0x30a: Pop(1)
0x30b: Stack[-6] = (int) 0
0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: Push((int) 5)
0x30f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: PushEmpty(bool)
0x312: Call2 0x354

0x313: Pop(0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = (bool) 1
0x316: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x317: Push((int) 3)
0x318: @ irand(Stack[-6], Stack[-1])
0x319: Pop(1)
0x31a: Push((int) 0)
0x31b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31d: Push(Stack[-7])
0x31e: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x31f: @ irand(Stack[-4], Stack[-7])
0x320: Pop(0)
0x321: Push("all") // @poff=158
0x322: PushEmpty(string, int)
0x323: Stack[-7] = Stack[-1]
0x324: Call2 0x483

0x325: Pop(1)
0x326: @ PlayAnimation(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: @ WaitForAnimEnd(Stack[-3])
0x329: Pop(0)
0x32a: Pop(0); Push((bool) Stack[-3] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: GOTO 0x34a

0x32d: GOTO 0x33f

0x32e: Push((int) 1)
0x32f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x331: Push((int) 4)
0x332: @ rand(Stack[-3], Stack[-1])
0x333: Pop(1)
0x334: Push((int) 1)
0x335: Pop(1); Push(Stack[-3] + Stack[-1]);
0x336: @ Sleep(Stack[-1], Stack[-2])
0x337: Pop(1)
0x338: Pop(0); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: GOTO 0x34a

0x33b: GOTO 0x33f

0x33c: Push(Stack[-6])
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: GOTO 0x34a

0x33f: PushEmpty(bool)
0x340: Call2 0x34d

0x341: Pop(0)
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: GOTO 0x34a

0x345: @ ResetAAS()
0x346: Pop(0)
0x347: Push((int) 1)
0x348: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x349: GOTO 0x30c

0x34a: @ ResetAAS()
0x34b: Pop(0)
0x34c: Return(); Pop(14)

0x34d: Stack[-1] = (bool) 1
0x34e: Return(); Pop(0)

0x34f: @ StopAnimation()
0x350: Pop(0)
0x351: @ StopGroup0()
0x352: Pop(0)
0x353: Return(); Pop(0)

0x354: PushEmpty(bool, bool)
0x355: @ IsLoaded(Stack[-1])
0x356: Pop(0)
0x357: Stack[-1] = Stack[-3]
0x358: Return(); Pop(2)

0x359: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x35a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=218
0x35b: Pop(0)
0x35c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=230
0x35d: Pop(0)
0x35e: Push(CvectorIndex(Stack[-8], 1))
0x35f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x360: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x361: @ GetPosition(Stack[-7])
0x362: Pop(0)
0x363: @ GetEyesHeight(Stack[-9])
0x364: Pop(0)
0x365: Push(CvectorIndex(Stack[-7], 1))
0x366: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x367: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x368: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x369: Push(CvectorIndex(Stack[-6], 1))
0x36a: Stack[-1] = (int) 0
0x36b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x36c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x36d: Pop(1); Push(Sqrt(Stack[-1]))
0x36e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x36f: Stack[-5] = -Stack[-6]; Pop(0);
0x370: Pop(0); Push(Stack[-6] * Stack[-19]);
0x371: PushEmpty(cvector, cvector)
0x372: Push([0.0, 1.0, 0.0])
0x373: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x374: Call2 0x461

0x375: Pop(1)
0x376: Push((int) 25)
0x377: Pop(2); Push(Stack[-2] * Stack[-1]);
0x378: Pop(2); Push(Stack[-2] + Stack[-1]);
0x379: Push([0.0, 10.0, 0.0])
0x37a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x37b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x37c: @ IsOverrideActive(Stack[-2])
0x37d: Pop(0)
0x37e: Push(Stack[-2])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-21] = (bool) 0
0x381: Return(); Pop(18)

0x382: @ StopWorld()
0x383: Pop(0)
0x384: @ CameraTransit(Stack[-3], Stack[-5])
0x385: Pop(0)
0x386: Push(CvectorIndex(Stack[-4], 0))
0x387: Push(CvectorIndex(Stack[-5], 2))
0x388: @ Rotate(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: PushEmpty(bool)
0x38b: Call2 0x481

0x38c: Pop(0)
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: GOTO 0x397

0x38f: Push("head") // @poff=244
0x390: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x391: Pop(1)
0x392: Push(Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x394: Push("head") // @poff=244
0x395: @ LookAsyncCamera(Stack[-1])
0x396: Pop(1)
0x397: @ CameraWaitForPlayFinish()
0x398: Pop(0)
0x399: @ ResumeWorld()
0x39a: Pop(0)
0x39b: Stack[-21] = (bool) 1
0x39c: Return(); Pop(18)

0x39d: PushEmpty(bool, bool)
0x39e: @ CameraSwitchToNormal()
0x39f: Pop(0)
0x3a0: PushEmpty(bool)
0x3a1: Call2 0x481

0x3a2: Pop(0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3ad

0x3a5: Push("head") // @poff=244
0x3a6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a7: Pop(1)
0x3a8: Push(Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3aa: Push("head") // @poff=244
0x3ab: @ UnlookAsync(Stack[-1])
0x3ac: Pop(1)
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty(int, int, int, int)
0x3af: Push("voice_common") // @poff=254
0x3b0: @ GetVariable(Stack[-1], Stack[-3])
0x3b1: Pop(1)
0x3b2: Push(Stack[-2])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-7] = Stack[-1]
0x3b6: Call2 0x3e8

0x3b7: Pop(1)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-7] = Stack[-1]
0x3bc: Call2 0x40d

0x3bd: Pop(1)
0x3be: Pop(1); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-6] = (bool) 0
0x3c1: Return(); Pop(4)

0x3c2: Push((int) 2)
0x3c3: @ irand(Stack[-2], Stack[-1])
0x3c4: Pop(1)
0x3c5: Push(Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c7: Push("voice_common") // @poff=254
0x3c8: Push((int) 1)
0x3c9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ca: Push((int) 3)
0x3cb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3cc: @ SetVariable(Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: GOTO 0x3d3

0x3cf: Push("voice_common") // @poff=254
0x3d0: Push((int) 0)
0x3d1: @ SetVariable(Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: GOTO 0x3e6

0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-7] = Stack[-1]
0x3d6: Call2 0x40d

0x3d7: Pop(1)
0x3d8: Pop(1); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3da: PushEmpty(bool, object)
0x3db: Stack[-7] = Stack[-1]
0x3dc: Call2 0x3e8

0x3dd: Pop(1)
0x3de: Pop(1); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-6] = (bool) 0
0x3e1: Return(); Pop(4)

0x3e2: Push("voice_common") // @poff=254
0x3e3: Push((int) 1)
0x3e4: @ SetVariable(Stack[-2], Stack[-1])
0x3e5: Pop(2)
0x3e6: Stack[-6] = (bool) 1
0x3e7: Return(); Pop(4)

0x3e8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3e9: Stack[-5] = "c" // @poff=280
0x3ea: Stack[-4] = (int) 0
0x3eb: Push((int) 1)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3ed: Push((int) 1)
0x3ee: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=284
0x3f1: Pop(1)
0x3f2: Pop(0); Push((bool) Stack[-3] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: GOTO 0x3f8

0x3f5: Push((int) 1)
0x3f6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3f7: GOTO 0x3eb

0x3f8: Pop(0); Push((bool) Stack[-4] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-12] = (bool) 0
0x3fb: Return(); Pop(10)

0x3fc: Stack[-2] = (int) 0
0x3fd: Push((int) 1)
0x3fe: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: @ irand(Stack[-2], Stack[-4])
0x401: Pop(0)
0x402: Push((int) 1)
0x403: Pop(1); Push(Stack[-3] + Stack[-1]);
0x404: Pop(1); Push(Stack[-6] + Stack[-1]);
0x405: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=296
0x406: Pop(1)
0x407: PushEmpty(bool, string)
0x408: Stack[-3] = Stack[-1]
0x409: Call2 0x445

0x40a: Stack[-2] = Stack[-14]
0x40b: Pop(2)
0x40c: Return(); Pop(10)

0x40d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x40e: Push("d") // @poff=250
0x40f: PushEmpty(int)
0x410: Call2 0x470

0x411: Pop(0)
0x412: Pop(2); Push(Stack[-2] + Stack[-1]);
0x413: Push("m") // @poff=308
0x414: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x415: Stack[-4] = (int) 0
0x416: Push((int) 1)
0x417: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x418: Push((int) 1)
0x419: Pop(1); Push(Stack[-5] + Stack[-1]);
0x41a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x41b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=284
0x41c: Pop(1)
0x41d: Pop(0); Push((bool) Stack[-3] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: GOTO 0x423

0x420: Push((int) 1)
0x421: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x422: GOTO 0x416

0x423: Pop(0); Push((bool) Stack[-4] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-12] = (bool) 0
0x426: Return(); Pop(10)

0x427: Stack[-2] = (int) 0
0x428: Push((int) 1)
0x429: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: @ irand(Stack[-2], Stack[-4])
0x42c: Pop(0)
0x42d: Push((int) 1)
0x42e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x42f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x430: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=296
0x431: Pop(1)
0x432: PushEmpty(bool, string)
0x433: Stack[-3] = Stack[-1]
0x434: Call2 0x445

0x435: Stack[-2] = Stack[-14]
0x436: Pop(2)
0x437: Return(); Pop(10)

0x438: PushEmpty(float, float, float, float)
0x439: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x43a: Pop(0)
0x43b: Push((bool) 0)
0x43c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(1)
0x43e: Return(); Pop(4)

0x43f: PushEmpty(float, float, float, float)
0x440: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x441: Pop(0)
0x442: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x443: Pop(0)
0x444: Return(); Pop(4)

0x445: PushEmpty(bool, bool)
0x446: PushEmpty(bool)
0x447: Call2 0x481

0x448: Pop(0)
0x449: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x44b: Pop(0)
0x44c: Push(Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44e: @ lshPlaySpeech(Stack[-3])
0x44f: Pop(0)
0x450: Stack[-4] = (bool) 1
0x451: Return(); Pop(2)

0x452: Stack[-4] = (bool) 0
0x453: Return(); Pop(2)

0x454: PushEmpty(bool)
0x455: Call2 0x481

0x456: Pop(0)
0x457: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x458: @ lshStopSpeech()
0x459: Pop(0)
0x45a: Return(); Pop(0)

0x45b: PushEmpty(object, object)
0x45c: @ self(Stack[-1])
0x45d: Pop(0)
0x45e: Stack[-1] = Stack[-3]
0x45f: Return(); Pop(2)

0x460: Stack[-1] = 0
0x461: PushEmpty(float, float)
0x462: Pop(0); Push(Stack[-3] | Stack[-3]);
0x463: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x464: Push((float)9.999999974752427e-07)
0x465: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-4] = [0.0, 0.0, 0.0]
0x468: Return(); Pop(2)

0x469: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x46a: Return(); Pop(2)

0x46b: PushEmpty(int, int)
0x46c: @ GetVariable(Stack[-3], Stack[-1])
0x46d: Pop(0)
0x46e: Stack[-1] = Stack[-4]
0x46f: Return(); Pop(2)

0x470: PushEmpty(float, float)
0x471: @ GetGameTime(Stack[-1])
0x472: Pop(0)
0x473: Push((int) 1)
0x474: PushEmpty(int)
0x475: Push((int) 24)
0x476: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x477: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x478: Return(); Pop(2)

0x479: Stack[-1] = (int) 515551
0x47a: Return(); Pop(0)

0x47b: Stack[-1] = (int) 502876
0x47c: Return(); Pop(0)

0x47d: Stack[-1] = "ui/NPC_Rubin.png" // @poff=312
0x47e: Return(); Pop(0)

0x47f: Stack[-1] = "ui/NPC_Rubin_b.png" // @poff=346
0x480: Return(); Pop(0)

0x481: Stack[-1] = (bool) 1
0x482: Return(); Pop(0)

0x483: PushEmpty(string, string)
0x484: Stack[-1] = "idle" // @poff=166
0x485: Push(Stack[-3])
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x488: Stack[-1] = Stack[-4]
0x489: Return(); Pop(2)

0x48a: PushEmpty(int, bool, int, bool)
0x48b: Stack[-2] = (int) 0
0x48c: Push("all") // @poff=158
0x48d: PushEmpty(string, int)
0x48e: Stack[-5] = Stack[-1]
0x48f: Call2 0x483

0x490: Pop(1)
0x491: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(2)
0x493: Pop(0); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: GOTO 0x499

0x496: Push((int) 1)
0x497: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x498: GOTO 0x48c

0x499: Stack[-2] = Stack[-5]
0x49a: Return(); Pop(4)

0x49b: PushEmpty()
0x49c: Push("oob4Rubin1") // @poff=384
0x49d: Push((int) 1)
0x49e: @ SetVariable(Stack[-2], Stack[-1])
0x49f: Pop(2)
0x4a0: Return(); Pop(0)

0x4a1: PushEmpty()
0x4a2: Push("b4q01") // @poff=406
0x4a3: Push((int) 1000)
0x4a4: @ SetVariable(Stack[-2], Stack[-1])
0x4a5: Pop(2)
0x4a6: PushEmpty()
0x4a7: Call2 0x4c8

0x4a8: Pop(0)
0x4a9: Return(); Pop(0)

0x4aa: PushEmpty()
0x4ab: Push("oob4Rubin2") // @poff=418
0x4ac: Push((int) 1)
0x4ad: @ SetVariable(Stack[-2], Stack[-1])
0x4ae: Pop(2)
0x4af: Return(); Pop(0)

0x4b0: PushEmpty()
0x4b1: PushEmpty(int, string)
0x4b2: Stack[-1] = "oob4Rubin1" // @poff=384
0x4b3: Call2 0x46b

0x4b4: Pop(1)
0x4b5: Push((int) 0)
0x4b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-2] = (bool) 1
0x4b9: Return(); Pop(0)

0x4ba: Stack[-2] = (bool) 0
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: PushEmpty(int, string)
0x4be: Stack[-1] = "oob4Rubin2" // @poff=418
0x4bf: Call2 0x46b

0x4c0: Pop(1)
0x4c1: Push((int) 0)
0x4c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: Stack[-2] = (bool) 1
0x4c5: Return(); Pop(0)

0x4c6: Stack[-2] = (bool) 0
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty(object, object)
0x4c9: Push((int) 219)
0x4ca: Push((int) 1)
0x4cb: Push((int) 518597)
0x4cc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: PushEmpty(bool, object, int)
0x4cf: Stack[-4] = Stack[-2]
0x4d0: Stack[-1] = (int) 216
0x4d1: Call2 0x4e2

0x4d2: Pop(3)
0x4d3: Return(); Pop(2)

0x4d4: Stack[-1] = 0
0x4d5: PushEmpty(object, object)
0x4d6: @ GetDiaryRoot(Stack[-1])
0x4d7: Pop(0)
0x4d8: Pop(0); Push((bool) Stack[-1] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4da: Push("Can't retrieve diary root") // @poff=440
0x4db: @ Trace(Stack[-1])
0x4dc: Pop(1)
0x4dd: Stack[-3] = (bool) 0
0x4de: Return(); Pop(2)

0x4df: Stack[-1] = Stack[-3]
0x4e0: Return(); Pop(2)

0x4e1: Stack[-1] = 0
0x4e2: PushEmpty(object, object, int, object, object, int)
0x4e3: PushEmpty(object)
0x4e4: Call2 0x4d5

0x4e5: Stack[-1] = Stack[-4]
0x4e6: Pop(1)
0x4e7: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=492
0x4e8: Pop(0)
0x4e9: Pop(0); Push((bool) Stack[-2] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4eb: Push("Can't find diary parent with id: ") // @poff=497
0x4ec: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ed: @ Trace(Stack[-1])
0x4ee: Pop(1)
0x4ef: Stack[-9] = (bool) 0
0x4f0: Return(); Pop(6)

0x4f1: @@ AddChild(Stack[-8]); Obj=2 // @poff=565
0x4f2: Pop(0)
0x4f3: Push((int) 7)
0x4f4: @ SendWorldWndMessage(Stack[-1])
0x4f5: Pop(1)
0x4f6: @@ GetCategory(Stack[-1]); Obj=8 // @poff=574
0x4f7: Pop(0)
0x4f8: @ SetDiarySection(Stack[-1])
0x4f9: Pop(0)
0x4fa: Stack[-9] = (bool) 0
0x4fb: Return(); Pop(6)

0x4fc: Stack[-2] = 0
0x4fd: Stack[-3] = 0
0x4fe: PushEmpty(int, int)
0x4ff: Push("branch") // @poff=586
0x500: @ GetVariable(Stack[-1], Stack[-2])
0x501: Pop(1)
0x502: Push((int) 0)
0x503: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x505: Stack[-3] = (int) 1
0x506: Return(); Pop(2)

0x507: GOTO 0x50d

0x508: Push((int) 1)
0x509: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-3] = (int) 2
0x50c: Return(); Pop(2)

0x50d: Stack[-3] = (int) 3
0x50e: Return(); Pop(2)

