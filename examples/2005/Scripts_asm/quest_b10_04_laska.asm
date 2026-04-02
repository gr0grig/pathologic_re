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
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:b10q04LaskaTalk
	W:quest_b10_04
	W:restore_laska
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Laska.png
	W:ui/NPC_Laska_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006200310030007100300034004c00610073006b006100540061006c006b000000710075006500730074005f006200310030005f0030003400000072006500730074006f00720065005f006c00610073006b0061000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f004c00610073006b0061002e0070006e0067000000750069002f004e00500043005f004c00610073006b0061005f0062002e0070006e0067000000
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
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
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
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x161
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc8 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x165 Vars = (string)
		EVENT_6 Op = 0x179 Vars = ()
		EVENT_5 Op = 0x186 Vars = ()
		EVENT_7 Op = 0x1d5 Vars = (int)
		EVENT_45 Op = 0x217 Vars = (bool)
		EVENT_0 Op = 0x223 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2a7

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
0x11: Call2 0x3ae

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x301

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2ac

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x453

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x451

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x455

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x457

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x440

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
0x55: Call2 0x2f0

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
0x63: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x3fe

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral" // @poff=89
0x6c: Call2 0xb2

0x6d: Pop(1)
0x6e: Push((int) 530461)
0x6f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x70: Pop(1)
0x71: @@@ ClearReplies(); Obj=0 // @poff=116
0x72: Pop(0)
0x73: Push((int) 531473)
0x74: Push((int) 32825)
0x75: Push((int) 32824)
0x76: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77: Pop(3)
0x78: Push((int) 531479)
0x79: Push((int) 32825)
0x7a: Push((int) 32830)
0x7b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7c: Pop(3)
0x7d: GOTO 0x94

0x7e: PushEmpty(string)
0x7f: Stack[-1] = "Neutral" // @poff=89
0x80: Call2 0xb2

0x81: Pop(1)
0x82: Push((int) 530463)
0x83: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x84: Pop(1)
0x85: @@@ ClearReplies(); Obj=0 // @poff=116
0x86: Pop(0)
0x87: Push((int) 530464)
0x88: Push((int) -1)
0x89: Push((int) 31830)
0x8a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8b: Pop(3)
0x8c: Push((int) 531472)
0x8d: Push((int) -1)
0x8e: Push((int) 32823)
0x8f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x90: Pop(3)
0x91: GOTO 0x94

0x92: Return(); Pop(0)

0x93: GOTO 0x62

0x94: PushEmpty(bool)
0x95: Call2 0x459

0x96: Pop(0)
0x97: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x98: @ lshWaitForAnimEnd()
0x99: Pop(0)
0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xa2

0x9d: PushEmpty(string)
0x9e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9f: Call2 0x38b

0xa0: Pop(1)
0xa1: GOTO 0x98

0xa2: GOTO 0xb1

0xa3: Push("all") // @poff=138
0xa4: Push("idle") // @poff=146
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: @ WaitForAnimEnd()
0xa8: Pop(0)
0xa9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: GOTO 0xb1

0xac: Push("all") // @poff=138
0xad: Push("idle") // @poff=146
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: GOTO 0xa7

0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty(bool)
0xb4: Call2 0x459

0xb5: Pop(0)
0xb6: Pop(1); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(0)

0xbc: PushEmpty(string, bool)
0xbd: Stack[-3] = Stack[-2]
0xbe: Push("") // @poff=102
0xbf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc1: Stack[-1] = (bool) 0
0xc2: GOTO 0xc4

0xc3: Stack[-1] = (bool) 1
0xc4: Call2 0x392

0xc5: Pop(2)
0xc6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: Push((int) 1)
0xca: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x3a7

0xcd: Pop(0)
0xce: Push((int) 31828)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x3f0

0xd5: Pop(2)
0xd6: Push((int) 31827)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Call2 0x3fe

0xdc: Pop(1)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral" // @poff=89
0xe1: Call2 0xb2

0xe2: Pop(1)
0xe3: Push((int) 530461)
0xe4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe5: Pop(1)
0xe6: @@@ ClearReplies(); Obj=0 // @poff=116
0xe7: Pop(0)
0xe8: Push((int) 531473)
0xe9: Push((int) 32825)
0xea: Push((int) 32824)
0xeb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xec: Pop(3)
0xed: Push((int) 531479)
0xee: Push((int) 32825)
0xef: Push((int) 32830)
0xf0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral" // @poff=89
0xf5: Call2 0xb2

0xf6: Pop(1)
0xf7: Push((int) 530463)
0xf8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf9: Pop(1)
0xfa: @@@ ClearReplies(); Obj=0 // @poff=116
0xfb: Pop(0)
0xfc: Push((int) 530464)
0xfd: Push((int) -1)
0xfe: Push((int) 31830)
0xff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x100: Pop(3)
0x101: Push((int) 531472)
0x102: Push((int) -1)
0x103: Push((int) 32823)
0x104: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 32825)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral" // @poff=89
0x10c: Call2 0xb2

0x10d: Pop(1)
0x10e: Push((int) 531474)
0x10f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x110: Pop(1)
0x111: @@@ ClearReplies(); Obj=0 // @poff=116
0x112: Pop(0)
0x113: Push((int) 531475)
0x114: Push((int) 32827)
0x115: Push((int) 32826)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Push((int) 531480)
0x119: Push((int) 32827)
0x11a: Push((int) 32832)
0x11b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 32827)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral" // @poff=89
0x123: Call2 0xb2

0x124: Pop(1)
0x125: Push((int) 531476)
0x126: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x127: Pop(1)
0x128: @@@ ClearReplies(); Obj=0 // @poff=116
0x129: Pop(0)
0x12a: Push((int) 531477)
0x12b: Push((int) 32829)
0x12c: Push((int) 32828)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Push((int) 531481)
0x130: Push((int) 32829)
0x131: Push((int) 32834)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 32829)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0xb2

0x13b: Pop(1)
0x13c: Push((int) 531478)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 530462)
0x142: Push((int) -1)
0x143: Push((int) 31828)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Push((int) 531482)
0x147: Push((int) -1)
0x148: Push((int) 32836)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14d: PushEmpty(bool)
0x14e: Call2 0x459

0x14f: Pop(0)
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: @ lshStopAnimation()
0x152: Pop(0)
0x153: GOTO 0x156

0x154: @ StopAnimation()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: GOTO 0xc9

0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: PushEmpty(int, object)
0x15b: Stack[-3] = Stack[-1]
0x15c: Push(-2, 1); TaskCall(1)
0x15d: Call2 0xd

0x15e: Pop(-2, 1); TaskReturn
0x15f: Pop(2)
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: Call2 0x18a

0x163: Pop(0)
0x164: Return(); Pop(0)

0x165: PushEmpty(bool, bool)
0x166: Push("cleanup") // @poff=156
0x167: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x169: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x16a: @ IsLoaded(Stack[-1])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: PushEmpty(object)
0x16f: Call2 0x3ae

0x170: Pop(0)
0x171: @ RemoveActor(Stack[-1])
0x172: Pop(1)
0x173: GOTO 0x178

0x174: Push("restore") // @poff=172
0x175: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x178: Return(); Pop(2)

0x179: Push( Stack[1 + Tasks[-1].StackPointer] )
0x17a: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17b: PushEmpty(object)
0x17c: Call2 0x3ae

0x17d: Pop(0)
0x17e: @ RemoveActor(Stack[-1])
0x17f: Pop(1)
0x180: @ Hold()
0x181: Pop(0)
0x182: PushEmpty()
0x183: Call2 0x1fb

0x184: Pop(0)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: Call2 0x20a

0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: PushEmpty(bool)
0x18b: Call2 0x2a7

0x18c: Pop(0)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty()
0x190: Push(-0, 0); TaskCall(0)
0x191: Call2 0x0

0x192: Pop(-0, 0); TaskReturn
0x193: Pop(0)
0x194: PushEmpty()
0x195: Call2 0x186

0x196: Pop(0)
0x197: @ GetDirection(Stack[-0]T)
0x198: Pop(0)
0x199: PushEmpty()
0x19a: Call2 0x240

0x19b: Pop(0)
0x19c: GOTO 0x199

0x19d: Return(); Pop(0)

0x19e: PushEmpty(object, object)
0x19f: Push("player") // @poff=188
0x1a0: @ FindActor(Stack[-2], Stack[-1])
0x1a1: Pop(1)
0x1a2: Pop(0); Push((bool) Stack[-1] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a4: Stack[-3] = (bool) 0
0x1a5: Return(); Pop(2)

0x1a6: PushEmpty(bool, object)
0x1a7: Stack[-3] = Stack[-1]
0x1a8: Call2 0x29e

0x1a9: Stack[-2] = Stack[-5]
0x1aa: Pop(2)
0x1ab: Return(); Pop(2)

0x1ac: Stack[-1] = 0
0x1ad: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1ae: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1af: @ RotateAsync(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: Return(); Pop(0)

0x1b2: PushEmpty(object, bool, object, bool)
0x1b3: Push("player") // @poff=188
0x1b4: @ FindActor(Stack[-3], Stack[-1])
0x1b5: Pop(1)
0x1b6: Pop(0); Push((bool) Stack[-2] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-5] = (bool) 0
0x1b9: Return(); Pop(4)

0x1ba: PushEmpty(float, object)
0x1bb: Stack[-4] = Stack[-1]
0x1bc: Call2 0x28c

0x1bd: Pop(1)
0x1be: Push((float)90000.0)
0x1bf: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-5] = (bool) 0
0x1c2: Return(); Pop(4)

0x1c3: @ CanSee(Stack[-1], Stack[-2])
0x1c4: Pop(0)
0x1c5: Stack[-1] = Stack[-5]
0x1c6: Return(); Pop(4)

0x1c7: Stack[-2] = 0
0x1c8: PushEmpty(float, float)
0x1c9: Push((int) 8)
0x1ca: Push((int) 16)
0x1cb: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: Push((int) 10)
0x1ce: @ SetTimer(Stack[-1], Stack[-2])
0x1cf: Pop(1)
0x1d0: Return(); Pop(2)

0x1d1: Push((int) 10)
0x1d2: @ KillTimer(Stack[-1])
0x1d3: Pop(1)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Push((int) 10)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1d9: PushEmpty()
0x1da: Call2 0x1d1

0x1db: Pop(0)
0x1dc: PushEmpty(bool)
0x1dd: Stack[-1] = (bool) 0
0x1de: PushEmpty(bool)
0x1df: Call2 0x2a7

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(bool)
0x1e3: Call2 0x1b2

0x1e4: Pop(0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x19e

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: PushEmpty(object)
0x1ee: Call2 0x3ae

0x1ef: Stack[-1] = Stack[-2]
0x1f0: Pop(1)
0x1f1: Call2 0x33b

0x1f2: Pop(2)
0x1f3: GOTO 0x1fa

0x1f4: PushEmpty()
0x1f5: Call2 0x1ad

0x1f6: Pop(0)
0x1f7: PushEmpty()
0x1f8: Call2 0x1c8

0x1f9: Pop(0)
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty()
0x1fc: Call2 0x287

0x1fd: Pop(0)
0x1fe: PushEmpty()
0x1ff: Call2 0x1d1

0x200: Pop(0)
0x201: @ lshStopSpeech()
0x202: Pop(0)
0x203: @ lshStopAnimation()
0x204: Pop(0)
0x205: @ StopAsync()
0x206: Pop(0)
0x207: @ Hold()
0x208: Pop(0)
0x209: Return(); Pop(0)

0x20a: @ StopGroup0()
0x20b: Pop(0)
0x20c: PushEmpty()
0x20d: Call2 0x1d1

0x20e: Pop(0)
0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral" // @poff=89
0x211: Call2 0x38b

0x212: Pop(1)
0x213: PushEmpty()
0x214: Call2 0x1c8

0x215: Pop(0)
0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: Push(Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21a: PushEmpty()
0x21b: Call2 0x1c8

0x21c: Pop(0)
0x21d: GOTO 0x222

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Neutral" // @poff=89
0x220: Call2 0x38b

0x221: Pop(1)
0x222: Return(); Pop(0)

0x223: PushEmpty(bool, bool)
0x224: @ IsOverrideActive(Stack[-1])
0x225: Pop(0)
0x226: Pop(0); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x228: EventDisable(0)
0x229: PushEmpty()
0x22a: Call2 0x287

0x22b: Pop(0)
0x22c: PushEmpty(bool, object)
0x22d: Stack[-5] = Stack[-1]
0x22e: Call2 0x29e

0x22f: Pop(2)
0x230: EventEnable(0)
0x231: PushEmpty(object)
0x232: Stack[-4] = Stack[-1]
0x233: Call2 0x159

0x234: Pop(1)
0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral" // @poff=89
0x237: Call2 0x38b

0x238: Pop(1)
0x239: PushEmpty()
0x23a: Call2 0x1d1

0x23b: Pop(0)
0x23c: PushEmpty()
0x23d: Call2 0x1c8

0x23e: Pop(0)
0x23f: Return(); Pop(2)

0x240: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x241: @ WaitForAnimEnd()
0x242: Pop(0)
0x243: PushEmpty(bool)
0x244: Call2 0x2a7

0x245: Pop(0)
0x246: Pop(1); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Return(); Pop(12)

0x249: PushEmpty(int)
0x24a: Call2 0x3df

0x24b: Stack[-1] = Stack[-7]
0x24c: Pop(1)
0x24d: Stack[-5] = (int) 0
0x24e: PushEmpty(bool)
0x24f: Stack[-1] = (bool) 0
0x250: Push((int) 5)
0x251: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: PushEmpty(bool)
0x254: Call2 0x2a7

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 1
0x258: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x259: Pop(0); Push((bool) Stack[-6] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25b: Push((int) 3)
0x25c: @ Sleep(Stack[-1], Stack[-5])
0x25d: Pop(1)
0x25e: Pop(0); Push((bool) Stack[-4] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: GOTO 0x282

0x261: GOTO 0x277

0x262: @ irand(Stack[-3], Stack[-6])
0x263: Pop(0)
0x264: Push((int) 5)
0x265: @ irand(Stack[-3], Stack[-1])
0x266: Pop(1)
0x267: Push((int) 0)
0x268: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: Stack[-3] = (int) 0
0x26b: Push("all") // @poff=138
0x26c: PushEmpty(string, int)
0x26d: Stack[-6] = Stack[-1]
0x26e: Call2 0x3d8

0x26f: Pop(1)
0x270: @ PlayAnimation(Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: @ WaitForAnimEnd(Stack[-1])
0x273: Pop(0)
0x274: Pop(0); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x282

0x277: PushEmpty(bool)
0x278: Call2 0x285

0x279: Pop(0)
0x27a: Pop(1); Push((bool) Stack[-1] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: GOTO 0x282

0x27d: @ ResetAAS()
0x27e: Pop(0)
0x27f: Push((int) 1)
0x280: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x281: GOTO 0x24e

0x282: @ ResetAAS()
0x283: Pop(0)
0x284: Return(); Pop(12)

0x285: Stack[-1] = (bool) 1
0x286: Return(); Pop(0)

0x287: @ StopAnimation()
0x288: Pop(0)
0x289: @ StopGroup0()
0x28a: Pop(0)
0x28b: Return(); Pop(0)

0x28c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28d: @ GetPosition(Stack[-3])
0x28e: Pop(0)
0x28f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x290: Pop(0)
0x291: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x292: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x293: Return(); Pop(6)

0x294: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x295: @ GetPosition(Stack[-3])
0x296: Pop(0)
0x297: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x298: Push(CvectorIndex(Stack[-2], 0))
0x299: Push(CvectorIndex(Stack[-3], 2))
0x29a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x29b: Pop(2)
0x29c: Stack[-1] = Stack[-8]
0x29d: Return(); Pop(6)

0x29e: PushEmpty(cvector, cvector)
0x29f: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2a0: Pop(0)
0x2a1: PushEmpty(bool, cvector)
0x2a2: Stack[-3] = Stack[-1]
0x2a3: Call2 0x294

0x2a4: Stack[-2] = Stack[-6]
0x2a5: Pop(2)
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(bool, bool)
0x2a8: @ IsLoaded(Stack[-1])
0x2a9: Pop(0)
0x2aa: Stack[-1] = Stack[-3]
0x2ab: Return(); Pop(2)

0x2ac: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ad: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2ae: Pop(0)
0x2af: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2b0: Pop(0)
0x2b1: Push(CvectorIndex(Stack[-8], 1))
0x2b2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b4: @ GetPosition(Stack[-7])
0x2b5: Pop(0)
0x2b6: @ GetEyesHeight(Stack[-9])
0x2b7: Pop(0)
0x2b8: Push(CvectorIndex(Stack[-7], 1))
0x2b9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ba: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2bb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2bc: Push(CvectorIndex(Stack[-6], 1))
0x2bd: Stack[-1] = (int) 0
0x2be: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2bf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c0: Pop(1); Push(Sqrt(Stack[-1]))
0x2c1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c2: Stack[-5] = -Stack[-6]; Pop(0);
0x2c3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c4: PushEmpty(cvector, cvector)
0x2c5: Push([0.0, 1.0, 0.0])
0x2c6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c7: Call2 0x3b4

0x2c8: Pop(1)
0x2c9: Push((int) 25)
0x2ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cc: Push([0.0, 10.0, 0.0])
0x2cd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ce: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2cf: @ IsOverrideActive(Stack[-2])
0x2d0: Pop(0)
0x2d1: Push(Stack[-2])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d3: Stack[-21] = (bool) 0
0x2d4: Return(); Pop(18)

0x2d5: @ StopWorld()
0x2d6: Pop(0)
0x2d7: @ CameraTransit(Stack[-3], Stack[-5])
0x2d8: Pop(0)
0x2d9: Push(CvectorIndex(Stack[-4], 0))
0x2da: Push(CvectorIndex(Stack[-5], 2))
0x2db: @ Rotate(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: PushEmpty(bool)
0x2de: Call2 0x459

0x2df: Pop(0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2ea

0x2e2: Push("head") // @poff=228
0x2e3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e4: Pop(1)
0x2e5: Push(Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e7: Push("head") // @poff=228
0x2e8: @ LookAsyncCamera(Stack[-1])
0x2e9: Pop(1)
0x2ea: @ CameraWaitForPlayFinish()
0x2eb: Pop(0)
0x2ec: @ ResumeWorld()
0x2ed: Pop(0)
0x2ee: Stack[-21] = (bool) 1
0x2ef: Return(); Pop(18)

0x2f0: PushEmpty(bool, bool)
0x2f1: @ CameraSwitchToNormal()
0x2f2: Pop(0)
0x2f3: PushEmpty(bool)
0x2f4: Call2 0x459

0x2f5: Pop(0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x300

0x2f8: Push("head") // @poff=228
0x2f9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fa: Pop(1)
0x2fb: Push(Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fd: Push("head") // @poff=228
0x2fe: @ UnlookAsync(Stack[-1])
0x2ff: Pop(1)
0x300: Return(); Pop(2)

0x301: PushEmpty(int, int, int, int)
0x302: Push("voice_common") // @poff=238
0x303: @ GetVariable(Stack[-1], Stack[-3])
0x304: Pop(1)
0x305: Push(Stack[-2])
0x306: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x307: PushEmpty(bool, object)
0x308: Stack[-7] = Stack[-1]
0x309: Call2 0x33b

0x30a: Pop(1)
0x30b: Pop(1); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30d: PushEmpty(bool, object)
0x30e: Stack[-7] = Stack[-1]
0x30f: Call2 0x360

0x310: Pop(1)
0x311: Pop(1); Push((bool) Stack[-1] == 0)
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-6] = (bool) 0
0x314: Return(); Pop(4)

0x315: Push((int) 2)
0x316: @ irand(Stack[-2], Stack[-1])
0x317: Pop(1)
0x318: Push(Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31a: Push("voice_common") // @poff=238
0x31b: Push((int) 1)
0x31c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x31d: Push((int) 3)
0x31e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x31f: @ SetVariable(Stack[-2], Stack[-1])
0x320: Pop(2)
0x321: GOTO 0x326

0x322: Push("voice_common") // @poff=238
0x323: Push((int) 0)
0x324: @ SetVariable(Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: GOTO 0x339

0x327: PushEmpty(bool, object)
0x328: Stack[-7] = Stack[-1]
0x329: Call2 0x360

0x32a: Pop(1)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32d: PushEmpty(bool, object)
0x32e: Stack[-7] = Stack[-1]
0x32f: Call2 0x33b

0x330: Pop(1)
0x331: Pop(1); Push((bool) Stack[-1] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-6] = (bool) 0
0x334: Return(); Pop(4)

0x335: Push("voice_common") // @poff=238
0x336: Push((int) 1)
0x337: @ SetVariable(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: Stack[-6] = (bool) 1
0x33a: Return(); Pop(4)

0x33b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x33c: Stack[-5] = "c" // @poff=264
0x33d: Stack[-4] = (int) 0
0x33e: Push((int) 1)
0x33f: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x340: Push((int) 1)
0x341: Pop(1); Push(Stack[-5] + Stack[-1]);
0x342: Pop(1); Push(Stack[-6] + Stack[-1]);
0x343: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x344: Pop(1)
0x345: Pop(0); Push((bool) Stack[-3] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x34b

0x348: Push((int) 1)
0x349: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x34a: GOTO 0x33e

0x34b: Pop(0); Push((bool) Stack[-4] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-12] = (bool) 0
0x34e: Return(); Pop(10)

0x34f: Stack[-2] = (int) 0
0x350: Push((int) 1)
0x351: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: @ irand(Stack[-2], Stack[-4])
0x354: Pop(0)
0x355: Push((int) 1)
0x356: Pop(1); Push(Stack[-3] + Stack[-1]);
0x357: Pop(1); Push(Stack[-6] + Stack[-1]);
0x358: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x359: Pop(1)
0x35a: PushEmpty(bool, string)
0x35b: Stack[-3] = Stack[-1]
0x35c: Call2 0x398

0x35d: Stack[-2] = Stack[-14]
0x35e: Pop(2)
0x35f: Return(); Pop(10)

0x360: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x361: Push("d") // @poff=234
0x362: PushEmpty(int)
0x363: Call2 0x3cf

0x364: Pop(0)
0x365: Pop(2); Push(Stack[-2] + Stack[-1]);
0x366: Push("m") // @poff=292
0x367: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x368: Stack[-4] = (int) 0
0x369: Push((int) 1)
0x36a: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x36b: Push((int) 1)
0x36c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x36d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x36f: Pop(1)
0x370: Pop(0); Push((bool) Stack[-3] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: GOTO 0x376

0x373: Push((int) 1)
0x374: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x375: GOTO 0x369

0x376: Pop(0); Push((bool) Stack[-4] == 0)
0x377: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x378: Stack[-12] = (bool) 0
0x379: Return(); Pop(10)

0x37a: Stack[-2] = (int) 0
0x37b: Push((int) 1)
0x37c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: @ irand(Stack[-2], Stack[-4])
0x37f: Pop(0)
0x380: Push((int) 1)
0x381: Pop(1); Push(Stack[-3] + Stack[-1]);
0x382: Pop(1); Push(Stack[-6] + Stack[-1]);
0x383: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x384: Pop(1)
0x385: PushEmpty(bool, string)
0x386: Stack[-3] = Stack[-1]
0x387: Call2 0x398

0x388: Stack[-2] = Stack[-14]
0x389: Pop(2)
0x38a: Return(); Pop(10)

0x38b: PushEmpty(float, float, float, float)
0x38c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x38d: Pop(0)
0x38e: Push((bool) 0)
0x38f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(1)
0x391: Return(); Pop(4)

0x392: PushEmpty(float, float, float, float)
0x393: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x394: Pop(0)
0x395: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x396: Pop(0)
0x397: Return(); Pop(4)

0x398: PushEmpty(bool, bool)
0x399: PushEmpty(bool)
0x39a: Call2 0x459

0x39b: Pop(0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x39e: Pop(0)
0x39f: Push(Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a1: @ lshPlaySpeech(Stack[-3])
0x3a2: Pop(0)
0x3a3: Stack[-4] = (bool) 1
0x3a4: Return(); Pop(2)

0x3a5: Stack[-4] = (bool) 0
0x3a6: Return(); Pop(2)

0x3a7: PushEmpty(bool)
0x3a8: Call2 0x459

0x3a9: Pop(0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: @ lshStopSpeech()
0x3ac: Pop(0)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(object, object)
0x3af: @ self(Stack[-1])
0x3b0: Pop(0)
0x3b1: Stack[-1] = Stack[-3]
0x3b2: Return(); Pop(2)

0x3b3: Stack[-1] = 0
0x3b4: PushEmpty(float, float)
0x3b5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3b6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b7: Push((float)9.999999974752427e-07)
0x3b8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-4] = [0.0, 0.0, 0.0]
0x3bb: Return(); Pop(2)

0x3bc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3bd: Return(); Pop(2)

0x3be: PushEmpty(int, int)
0x3bf: @ GetVariable(Stack[-3], Stack[-1])
0x3c0: Pop(0)
0x3c1: Stack[-1] = Stack[-4]
0x3c2: Return(); Pop(2)

0x3c3: PushEmpty(object, object)
0x3c4: @ FindActor(Stack[-1], Stack[-4])
0x3c5: Pop(0)
0x3c6: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-5] = (bool) 0
0x3c9: Return(); Pop(2)

0x3ca: @ Trigger(Stack[-1], Stack[-3])
0x3cb: Pop(0)
0x3cc: Stack[-5] = (bool) 1
0x3cd: Return(); Pop(2)

0x3ce: Stack[-1] = 0
0x3cf: PushEmpty(float, float)
0x3d0: @ GetGameTime(Stack[-1])
0x3d1: Pop(0)
0x3d2: Push((int) 1)
0x3d3: PushEmpty(int)
0x3d4: Push((int) 24)
0x3d5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3d6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3d7: Return(); Pop(2)

0x3d8: PushEmpty(string, string)
0x3d9: Stack[-1] = "idle" // @poff=146
0x3da: Push(Stack[-3])
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3dd: Stack[-1] = Stack[-4]
0x3de: Return(); Pop(2)

0x3df: PushEmpty(int, bool, int, bool)
0x3e0: Stack[-2] = (int) 0
0x3e1: Push("all") // @poff=138
0x3e2: PushEmpty(string, int)
0x3e3: Stack[-5] = Stack[-1]
0x3e4: Call2 0x3d8

0x3e5: Pop(1)
0x3e6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(2)
0x3e8: Pop(0); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: GOTO 0x3ee

0x3eb: Push((int) 1)
0x3ec: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ed: GOTO 0x3e1

0x3ee: Stack[-2] = Stack[-5]
0x3ef: Return(); Pop(4)

0x3f0: PushEmpty()
0x3f1: Push("b10q04LaskaTalk") // @poff=296
0x3f2: Push((int) 9)
0x3f3: @ SetVariable(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: PushEmpty()
0x3f6: Call2 0x40a

0x3f7: Pop(0)
0x3f8: PushEmpty(bool, string, string)
0x3f9: Stack[-2] = "quest_b10_04" // @poff=328
0x3fa: Stack[-1] = "restore_laska" // @poff=354
0x3fb: Call2 0x3c3

0x3fc: Pop(3)
0x3fd: Return(); Pop(0)

0x3fe: PushEmpty()
0x3ff: PushEmpty(int, string)
0x400: Stack[-1] = "b10q04LaskaTalk" // @poff=296
0x401: Call2 0x3be

0x402: Pop(1)
0x403: Push((int) 9)
0x404: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-2] = (bool) 1
0x407: Return(); Pop(0)

0x408: Stack[-2] = (bool) 0
0x409: Return(); Pop(0)

0x40a: PushEmpty(object, object)
0x40b: Push((int) 559)
0x40c: Push((int) 2)
0x40d: Push((int) 530538)
0x40e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: PushEmpty(bool, object, int)
0x411: Stack[-4] = Stack[-2]
0x412: Stack[-1] = (int) 550
0x413: Call2 0x424

0x414: Pop(3)
0x415: Return(); Pop(2)

0x416: Stack[-1] = 0
0x417: PushEmpty(object, object)
0x418: @ GetDiaryRoot(Stack[-1])
0x419: Pop(0)
0x41a: Pop(0); Push((bool) Stack[-1] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41c: Push("Can't retrieve diary root") // @poff=382
0x41d: @ Trace(Stack[-1])
0x41e: Pop(1)
0x41f: Stack[-3] = (bool) 0
0x420: Return(); Pop(2)

0x421: Stack[-1] = Stack[-3]
0x422: Return(); Pop(2)

0x423: Stack[-1] = 0
0x424: PushEmpty(object, object, int, object, object, int)
0x425: PushEmpty(object)
0x426: Call2 0x417

0x427: Stack[-1] = Stack[-4]
0x428: Pop(1)
0x429: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=434
0x42a: Pop(0)
0x42b: Pop(0); Push((bool) Stack[-2] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42d: Push("Can't find diary parent with id: ") // @poff=439
0x42e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x42f: @ Trace(Stack[-1])
0x430: Pop(1)
0x431: Stack[-9] = (bool) 0
0x432: Return(); Pop(6)

0x433: @@ AddChild(Stack[-8]); Obj=2 // @poff=507
0x434: Pop(0)
0x435: Push((int) 7)
0x436: @ SendWorldWndMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ GetCategory(Stack[-1]); Obj=8 // @poff=516
0x439: Pop(0)
0x43a: @ SetDiarySection(Stack[-1])
0x43b: Pop(0)
0x43c: Stack[-9] = (bool) 0
0x43d: Return(); Pop(6)

0x43e: Stack[-2] = 0
0x43f: Stack[-3] = 0
0x440: PushEmpty(int, int)
0x441: Push("branch") // @poff=528
0x442: @ GetVariable(Stack[-1], Stack[-2])
0x443: Pop(1)
0x444: Push((int) 0)
0x445: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x447: Stack[-3] = (int) 1
0x448: Return(); Pop(2)

0x449: GOTO 0x44f

0x44a: Push((int) 1)
0x44b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-3] = (int) 2
0x44e: Return(); Pop(2)

0x44f: Stack[-3] = (int) 3
0x450: Return(); Pop(2)

0x451: Stack[-1] = (int) 515542
0x452: Return(); Pop(0)

0x453: Stack[-1] = (int) 502867
0x454: Return(); Pop(0)

0x455: Stack[-1] = "ui/NPC_Laska.png" // @poff=542
0x456: Return(); Pop(0)

0x457: Stack[-1] = "ui/NPC_Laska_b.png" // @poff=576
0x458: Return(); Pop(0)

0x459: Stack[-1] = (bool) 1
0x45a: Return(); Pop(0)

