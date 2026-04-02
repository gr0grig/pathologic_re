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
	W:oob2PetrKabak1
	W:oob2PetrKabak2
	W:b2q03
	W:branch
	W:ui/NPC_Petr.png
	W:ui/NPC_Petr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006200320050006500740072004b006100620061006b00310000006f006f006200320050006500740072004b006100620061006b00320000006200320071003000330000006200720061006e00630068000000750069002f004e00500043005f0050006500740072002e0070006e0067000000750069002f004e00500043005f0050006500740072005f0062002e0070006e0067000000
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
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x1a0
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf7 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1a4 Vars = (string)
		EVENT_6 Op = 0x1b8 Vars = ()
		EVENT_5 Op = 0x1c5 Vars = ()
		EVENT_7 Op = 0x214 Vars = (int)
		EVENT_45 Op = 0x256 Vars = (bool)
		EVENT_0 Op = 0x262 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2e6

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
0x11: Call2 0x3ed

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x340

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2eb

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x472

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x470

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x474

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x476

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x45f

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
0x55: Call2 0x32f

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
0x63: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x42f

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x43b

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x72: PushEmpty(object, object)
0x73: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75: Call2 0x423

0x76: Pop(2)
0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral" // @poff=89
0x79: Call2 0xe1

0x7a: Pop(1)
0x7b: Push((int) 531057)
0x7c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7d: Pop(1)
0x7e: @@@ ClearReplies(); Obj=0 // @poff=116
0x7f: Pop(0)
0x80: Push((int) 531274)
0x81: Push((int) 32589)
0x82: Push((int) 32588)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: GOTO 0xc3

0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 0
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x453

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x447

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x94: PushEmpty(object, object)
0x95: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x96: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x97: Call2 0x429

0x98: Pop(2)
0x99: PushEmpty(string)
0x9a: Stack[-1] = "Neutral" // @poff=89
0x9b: Call2 0xe1

0x9c: Pop(1)
0x9d: Push((int) 531059)
0x9e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x9f: Pop(1)
0xa0: @@@ ClearReplies(); Obj=0 // @poff=116
0xa1: Pop(0)
0xa2: Push((int) 531060)
0xa3: Push((int) -1)
0xa4: Push((int) 32386)
0xa5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa6: Pop(3)
0xa7: Push((int) 531242)
0xa8: Push((int) -1)
0xa9: Push((int) 32557)
0xaa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xab: Pop(3)
0xac: GOTO 0xc3

0xad: PushEmpty(string)
0xae: Stack[-1] = "Neutral" // @poff=89
0xaf: Call2 0xe1

0xb0: Pop(1)
0xb1: Push((int) 531055)
0xb2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb3: Pop(1)
0xb4: @@@ ClearReplies(); Obj=0 // @poff=116
0xb5: Pop(0)
0xb6: Push((int) 531056)
0xb7: Push((int) -1)
0xb8: Push((int) 32382)
0xb9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xba: Pop(3)
0xbb: Push((int) 531241)
0xbc: Push((int) -1)
0xbd: Push((int) 32556)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: GOTO 0xc3

0xc1: Return(); Pop(0)

0xc2: GOTO 0x62

0xc3: PushEmpty(bool)
0xc4: Call2 0x478

0xc5: Pop(0)
0xc6: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc7: @ lshWaitForAnimEnd()
0xc8: Pop(0)
0xc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: GOTO 0xd1

0xcc: PushEmpty(string)
0xcd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xce: Call2 0x3ca

0xcf: Pop(1)
0xd0: GOTO 0xc7

0xd1: GOTO 0xe0

0xd2: Push("all") // @poff=138
0xd3: Push("idle") // @poff=146
0xd4: @ PlayAnimation(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: @ WaitForAnimEnd()
0xd7: Pop(0)
0xd8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: GOTO 0xe0

0xdb: Push("all") // @poff=138
0xdc: Push("idle") // @poff=146
0xdd: @ PlayAnimation(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: GOTO 0xd6

0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: PushEmpty(bool)
0xe3: Call2 0x478

0xe4: Pop(0)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Return(); Pop(0)

0xe8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Return(); Pop(0)

0xeb: PushEmpty(string, bool)
0xec: Stack[-3] = Stack[-2]
0xed: Push("") // @poff=102
0xee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf0: Stack[-1] = (bool) 0
0xf1: GOTO 0xf3

0xf2: Stack[-1] = (bool) 1
0xf3: Call2 0x3d1

0xf4: Pop(2)
0xf5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: Push((int) 1)
0xf9: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0xfa: PushEmpty()
0xfb: Call2 0x3e6

0xfc: Pop(0)
0xfd: Push((int) 32383)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x100: PushEmpty(bool)
0x101: Stack[-1] = (bool) 0
0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0x42f

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call2 0x43b

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: Stack[-1] = (bool) 1
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x423

0x112: Pop(2)
0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral" // @poff=89
0x115: Call2 0xe1

0x116: Pop(1)
0x117: Push((int) 531057)
0x118: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x119: Pop(1)
0x11a: @@@ ClearReplies(); Obj=0 // @poff=116
0x11b: Pop(0)
0x11c: Push((int) 531274)
0x11d: Push((int) 32589)
0x11e: Push((int) 32588)
0x11f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: PushEmpty(bool)
0x123: Stack[-1] = (bool) 0
0x124: PushEmpty(bool, object)
0x125: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x126: Call2 0x453

0x127: Pop(1)
0x128: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x129: PushEmpty(bool, object)
0x12a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Call2 0x447

0x12c: Pop(1)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Stack[-1] = (bool) 1
0x12f: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x130: PushEmpty(object, object)
0x131: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x132: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x133: Call2 0x429

0x134: Pop(2)
0x135: PushEmpty(string)
0x136: Stack[-1] = "Neutral" // @poff=89
0x137: Call2 0xe1

0x138: Pop(1)
0x139: Push((int) 531059)
0x13a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13b: Pop(1)
0x13c: @@@ ClearReplies(); Obj=0 // @poff=116
0x13d: Pop(0)
0x13e: Push((int) 531060)
0x13f: Push((int) -1)
0x140: Push((int) 32386)
0x141: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x142: Pop(3)
0x143: Push((int) 531242)
0x144: Push((int) -1)
0x145: Push((int) 32557)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral" // @poff=89
0x14b: Call2 0xe1

0x14c: Pop(1)
0x14d: Push((int) 531055)
0x14e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14f: Pop(1)
0x150: @@@ ClearReplies(); Obj=0 // @poff=116
0x151: Pop(0)
0x152: Push((int) 531056)
0x153: Push((int) -1)
0x154: Push((int) 32382)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Push((int) 531241)
0x158: Push((int) -1)
0x159: Push((int) 32556)
0x15a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 32589)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral" // @poff=89
0x162: Call2 0xe1

0x163: Pop(1)
0x164: Push((int) 531275)
0x165: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x166: Pop(1)
0x167: @@@ ClearReplies(); Obj=0 // @poff=116
0x168: Pop(0)
0x169: Push((int) 531243)
0x16a: Push((int) 32559)
0x16b: Push((int) 32558)
0x16c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16d: Pop(3)
0x16e: Push((int) 531058)
0x16f: Push((int) -1)
0x170: Push((int) 32384)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 32559)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral" // @poff=89
0x179: Call2 0xe1

0x17a: Pop(1)
0x17b: Push((int) 531244)
0x17c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17d: Pop(1)
0x17e: @@@ ClearReplies(); Obj=0 // @poff=116
0x17f: Pop(0)
0x180: Push((int) 531245)
0x181: Push((int) -1)
0x182: Push((int) 32560)
0x183: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x184: Pop(3)
0x185: Push((int) 531246)
0x186: Push((int) -1)
0x187: Push((int) 32561)
0x188: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18c: PushEmpty(bool)
0x18d: Call2 0x478

0x18e: Pop(0)
0x18f: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x190: @ lshStopAnimation()
0x191: Pop(0)
0x192: GOTO 0x195

0x193: @ StopAnimation()
0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: GOTO 0xf8

0x197: Return(); Pop(0)

0x198: PushEmpty()
0x199: PushEmpty(int, object)
0x19a: Stack[-3] = Stack[-1]
0x19b: Push(-2, 1); TaskCall(1)
0x19c: Call2 0xd

0x19d: Pop(-2, 1); TaskReturn
0x19e: Pop(2)
0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: Call2 0x1c9

0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty(bool, bool)
0x1a5: Push("cleanup") // @poff=156
0x1a6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a8: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1a9: @ IsLoaded(Stack[-1])
0x1aa: Pop(0)
0x1ab: Pop(0); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: PushEmpty(object)
0x1ae: Call2 0x3ed

0x1af: Pop(0)
0x1b0: @ RemoveActor(Stack[-1])
0x1b1: Pop(1)
0x1b2: GOTO 0x1b7

0x1b3: Push("restore") // @poff=172
0x1b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1b7: Return(); Pop(2)

0x1b8: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ba: PushEmpty(object)
0x1bb: Call2 0x3ed

0x1bc: Pop(0)
0x1bd: @ RemoveActor(Stack[-1])
0x1be: Pop(1)
0x1bf: @ Hold()
0x1c0: Pop(0)
0x1c1: PushEmpty()
0x1c2: Call2 0x23a

0x1c3: Pop(0)
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: Call2 0x249

0x1c7: Pop(0)
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty(bool)
0x1ca: Call2 0x2e6

0x1cb: Pop(0)
0x1cc: Pop(1); Push((bool) Stack[-1] == 0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty()
0x1cf: Push(-0, 0); TaskCall(0)
0x1d0: Call2 0x0

0x1d1: Pop(-0, 0); TaskReturn
0x1d2: Pop(0)
0x1d3: PushEmpty()
0x1d4: Call2 0x1c5

0x1d5: Pop(0)
0x1d6: @ GetDirection(Stack[-0]T)
0x1d7: Pop(0)
0x1d8: PushEmpty()
0x1d9: Call2 0x27f

0x1da: Pop(0)
0x1db: GOTO 0x1d8

0x1dc: Return(); Pop(0)

0x1dd: PushEmpty(object, object)
0x1de: Push("player") // @poff=188
0x1df: @ FindActor(Stack[-2], Stack[-1])
0x1e0: Pop(1)
0x1e1: Pop(0); Push((bool) Stack[-1] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e3: Stack[-3] = (bool) 0
0x1e4: Return(); Pop(2)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-3] = Stack[-1]
0x1e7: Call2 0x2dd

0x1e8: Stack[-2] = Stack[-5]
0x1e9: Pop(2)
0x1ea: Return(); Pop(2)

0x1eb: Stack[-1] = 0
0x1ec: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1ed: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1ee: @ RotateAsync(Stack[-2], Stack[-1])
0x1ef: Pop(2)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty(object, bool, object, bool)
0x1f2: Push("player") // @poff=188
0x1f3: @ FindActor(Stack[-3], Stack[-1])
0x1f4: Pop(1)
0x1f5: Pop(0); Push((bool) Stack[-2] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f7: Stack[-5] = (bool) 0
0x1f8: Return(); Pop(4)

0x1f9: PushEmpty(float, object)
0x1fa: Stack[-4] = Stack[-1]
0x1fb: Call2 0x2cb

0x1fc: Pop(1)
0x1fd: Push((float)90000.0)
0x1fe: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-5] = (bool) 0
0x201: Return(); Pop(4)

0x202: @ CanSee(Stack[-1], Stack[-2])
0x203: Pop(0)
0x204: Stack[-1] = Stack[-5]
0x205: Return(); Pop(4)

0x206: Stack[-2] = 0
0x207: PushEmpty(float, float)
0x208: Push((int) 8)
0x209: Push((int) 16)
0x20a: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: Push((int) 10)
0x20d: @ SetTimer(Stack[-1], Stack[-2])
0x20e: Pop(1)
0x20f: Return(); Pop(2)

0x210: Push((int) 10)
0x211: @ KillTimer(Stack[-1])
0x212: Pop(1)
0x213: Return(); Pop(0)

0x214: PushEmpty()
0x215: Push((int) 10)
0x216: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x218: PushEmpty()
0x219: Call2 0x210

0x21a: Pop(0)
0x21b: PushEmpty(bool)
0x21c: Stack[-1] = (bool) 0
0x21d: PushEmpty(bool)
0x21e: Call2 0x2e6

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: PushEmpty(bool)
0x222: Call2 0x1f1

0x223: Pop(0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Stack[-1] = (bool) 1
0x226: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x227: PushEmpty(bool)
0x228: Call2 0x1dd

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22b: PushEmpty(bool, object)
0x22c: PushEmpty(object)
0x22d: Call2 0x3ed

0x22e: Stack[-1] = Stack[-2]
0x22f: Pop(1)
0x230: Call2 0x37a

0x231: Pop(2)
0x232: GOTO 0x239

0x233: PushEmpty()
0x234: Call2 0x1ec

0x235: Pop(0)
0x236: PushEmpty()
0x237: Call2 0x207

0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: PushEmpty()
0x23b: Call2 0x2c6

0x23c: Pop(0)
0x23d: PushEmpty()
0x23e: Call2 0x210

0x23f: Pop(0)
0x240: @ lshStopSpeech()
0x241: Pop(0)
0x242: @ lshStopAnimation()
0x243: Pop(0)
0x244: @ StopAsync()
0x245: Pop(0)
0x246: @ Hold()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: @ StopGroup0()
0x24a: Pop(0)
0x24b: PushEmpty()
0x24c: Call2 0x210

0x24d: Pop(0)
0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral" // @poff=89
0x250: Call2 0x3ca

0x251: Pop(1)
0x252: PushEmpty()
0x253: Call2 0x207

0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: PushEmpty()
0x257: Push(Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x259: PushEmpty()
0x25a: Call2 0x207

0x25b: Pop(0)
0x25c: GOTO 0x261

0x25d: PushEmpty(string)
0x25e: Stack[-1] = "Neutral" // @poff=89
0x25f: Call2 0x3ca

0x260: Pop(1)
0x261: Return(); Pop(0)

0x262: PushEmpty(bool, bool)
0x263: @ IsOverrideActive(Stack[-1])
0x264: Pop(0)
0x265: Pop(0); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x267: EventDisable(0)
0x268: PushEmpty()
0x269: Call2 0x2c6

0x26a: Pop(0)
0x26b: PushEmpty(bool, object)
0x26c: Stack[-5] = Stack[-1]
0x26d: Call2 0x2dd

0x26e: Pop(2)
0x26f: EventEnable(0)
0x270: PushEmpty(object)
0x271: Stack[-4] = Stack[-1]
0x272: Call2 0x198

0x273: Pop(1)
0x274: PushEmpty(string)
0x275: Stack[-1] = "Neutral" // @poff=89
0x276: Call2 0x3ca

0x277: Pop(1)
0x278: PushEmpty()
0x279: Call2 0x210

0x27a: Pop(0)
0x27b: PushEmpty()
0x27c: Call2 0x207

0x27d: Pop(0)
0x27e: Return(); Pop(2)

0x27f: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x280: @ WaitForAnimEnd()
0x281: Pop(0)
0x282: PushEmpty(bool)
0x283: Call2 0x2e6

0x284: Pop(0)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Return(); Pop(12)

0x288: PushEmpty(int)
0x289: Call2 0x412

0x28a: Stack[-1] = Stack[-7]
0x28b: Pop(1)
0x28c: Stack[-5] = (int) 0
0x28d: PushEmpty(bool)
0x28e: Stack[-1] = (bool) 0
0x28f: Push((int) 5)
0x290: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: PushEmpty(bool)
0x293: Call2 0x2e6

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Stack[-1] = (bool) 1
0x297: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x298: Pop(0); Push((bool) Stack[-6] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29a: Push((int) 3)
0x29b: @ Sleep(Stack[-1], Stack[-5])
0x29c: Pop(1)
0x29d: Pop(0); Push((bool) Stack[-4] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2c1

0x2a0: GOTO 0x2b6

0x2a1: @ irand(Stack[-3], Stack[-6])
0x2a2: Pop(0)
0x2a3: Push((int) 5)
0x2a4: @ irand(Stack[-3], Stack[-1])
0x2a5: Pop(1)
0x2a6: Push((int) 0)
0x2a7: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: Stack[-3] = (int) 0
0x2aa: Push("all") // @poff=138
0x2ab: PushEmpty(string, int)
0x2ac: Stack[-6] = Stack[-1]
0x2ad: Call2 0x40b

0x2ae: Pop(1)
0x2af: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: @ WaitForAnimEnd(Stack[-1])
0x2b2: Pop(0)
0x2b3: Pop(0); Push((bool) Stack[-1] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: GOTO 0x2c1

0x2b6: PushEmpty(bool)
0x2b7: Call2 0x2c4

0x2b8: Pop(0)
0x2b9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c1

0x2bc: @ ResetAAS()
0x2bd: Pop(0)
0x2be: Push((int) 1)
0x2bf: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2c0: GOTO 0x28d

0x2c1: @ ResetAAS()
0x2c2: Pop(0)
0x2c3: Return(); Pop(12)

0x2c4: Stack[-1] = (bool) 1
0x2c5: Return(); Pop(0)

0x2c6: @ StopAnimation()
0x2c7: Pop(0)
0x2c8: @ StopGroup0()
0x2c9: Pop(0)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2cc: @ GetPosition(Stack[-3])
0x2cd: Pop(0)
0x2ce: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2cf: Pop(0)
0x2d0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2d1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2d2: Return(); Pop(6)

0x2d3: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2d4: @ GetPosition(Stack[-3])
0x2d5: Pop(0)
0x2d6: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2d7: Push(CvectorIndex(Stack[-2], 0))
0x2d8: Push(CvectorIndex(Stack[-3], 2))
0x2d9: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2da: Pop(2)
0x2db: Stack[-1] = Stack[-8]
0x2dc: Return(); Pop(6)

0x2dd: PushEmpty(cvector, cvector)
0x2de: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2df: Pop(0)
0x2e0: PushEmpty(bool, cvector)
0x2e1: Stack[-3] = Stack[-1]
0x2e2: Call2 0x2d3

0x2e3: Stack[-2] = Stack[-6]
0x2e4: Pop(2)
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(bool, bool)
0x2e7: @ IsLoaded(Stack[-1])
0x2e8: Pop(0)
0x2e9: Stack[-1] = Stack[-3]
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ec: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2ed: Pop(0)
0x2ee: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2ef: Pop(0)
0x2f0: Push(CvectorIndex(Stack[-8], 1))
0x2f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2f3: @ GetPosition(Stack[-7])
0x2f4: Pop(0)
0x2f5: @ GetEyesHeight(Stack[-9])
0x2f6: Pop(0)
0x2f7: Push(CvectorIndex(Stack[-7], 1))
0x2f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2fa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2fb: Push(CvectorIndex(Stack[-6], 1))
0x2fc: Stack[-1] = (int) 0
0x2fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2fe: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ff: Pop(1); Push(Sqrt(Stack[-1]))
0x300: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x301: Stack[-5] = -Stack[-6]; Pop(0);
0x302: Pop(0); Push(Stack[-6] * Stack[-19]);
0x303: PushEmpty(cvector, cvector)
0x304: Push([0.0, 1.0, 0.0])
0x305: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x306: Call2 0x3f3

0x307: Pop(1)
0x308: Push((int) 25)
0x309: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30b: Push([0.0, 10.0, 0.0])
0x30c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x30d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x30e: @ IsOverrideActive(Stack[-2])
0x30f: Pop(0)
0x310: Push(Stack[-2])
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Stack[-21] = (bool) 0
0x313: Return(); Pop(18)

0x314: @ StopWorld()
0x315: Pop(0)
0x316: @ CameraTransit(Stack[-3], Stack[-5])
0x317: Pop(0)
0x318: Push(CvectorIndex(Stack[-4], 0))
0x319: Push(CvectorIndex(Stack[-5], 2))
0x31a: @ Rotate(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: PushEmpty(bool)
0x31d: Call2 0x478

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x329

0x321: Push("head") // @poff=228
0x322: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x323: Pop(1)
0x324: Push(Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: Push("head") // @poff=228
0x327: @ LookAsyncCamera(Stack[-1])
0x328: Pop(1)
0x329: @ CameraWaitForPlayFinish()
0x32a: Pop(0)
0x32b: @ ResumeWorld()
0x32c: Pop(0)
0x32d: Stack[-21] = (bool) 1
0x32e: Return(); Pop(18)

0x32f: PushEmpty(bool, bool)
0x330: @ CameraSwitchToNormal()
0x331: Pop(0)
0x332: PushEmpty(bool)
0x333: Call2 0x478

0x334: Pop(0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33f

0x337: Push("head") // @poff=228
0x338: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x339: Pop(1)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33c: Push("head") // @poff=228
0x33d: @ UnlookAsync(Stack[-1])
0x33e: Pop(1)
0x33f: Return(); Pop(2)

0x340: PushEmpty(int, int, int, int)
0x341: Push("voice_common") // @poff=238
0x342: @ GetVariable(Stack[-1], Stack[-3])
0x343: Pop(1)
0x344: Push(Stack[-2])
0x345: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x346: PushEmpty(bool, object)
0x347: Stack[-7] = Stack[-1]
0x348: Call2 0x37a

0x349: Pop(1)
0x34a: Pop(1); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34c: PushEmpty(bool, object)
0x34d: Stack[-7] = Stack[-1]
0x34e: Call2 0x39f

0x34f: Pop(1)
0x350: Pop(1); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-6] = (bool) 0
0x353: Return(); Pop(4)

0x354: Push((int) 2)
0x355: @ irand(Stack[-2], Stack[-1])
0x356: Pop(1)
0x357: Push(Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x359: Push("voice_common") // @poff=238
0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35c: Push((int) 3)
0x35d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x35e: @ SetVariable(Stack[-2], Stack[-1])
0x35f: Pop(2)
0x360: GOTO 0x365

0x361: Push("voice_common") // @poff=238
0x362: Push((int) 0)
0x363: @ SetVariable(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: GOTO 0x378

0x366: PushEmpty(bool, object)
0x367: Stack[-7] = Stack[-1]
0x368: Call2 0x39f

0x369: Pop(1)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36c: PushEmpty(bool, object)
0x36d: Stack[-7] = Stack[-1]
0x36e: Call2 0x37a

0x36f: Pop(1)
0x370: Pop(1); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-6] = (bool) 0
0x373: Return(); Pop(4)

0x374: Push("voice_common") // @poff=238
0x375: Push((int) 1)
0x376: @ SetVariable(Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: Stack[-6] = (bool) 1
0x379: Return(); Pop(4)

0x37a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x37b: Stack[-5] = "c" // @poff=264
0x37c: Stack[-4] = (int) 0
0x37d: Push((int) 1)
0x37e: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37f: Push((int) 1)
0x380: Pop(1); Push(Stack[-5] + Stack[-1]);
0x381: Pop(1); Push(Stack[-6] + Stack[-1]);
0x382: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x383: Pop(1)
0x384: Pop(0); Push((bool) Stack[-3] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: GOTO 0x38a

0x387: Push((int) 1)
0x388: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x389: GOTO 0x37d

0x38a: Pop(0); Push((bool) Stack[-4] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38c: Stack[-12] = (bool) 0
0x38d: Return(); Pop(10)

0x38e: Stack[-2] = (int) 0
0x38f: Push((int) 1)
0x390: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: @ irand(Stack[-2], Stack[-4])
0x393: Pop(0)
0x394: Push((int) 1)
0x395: Pop(1); Push(Stack[-3] + Stack[-1]);
0x396: Pop(1); Push(Stack[-6] + Stack[-1]);
0x397: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x398: Pop(1)
0x399: PushEmpty(bool, string)
0x39a: Stack[-3] = Stack[-1]
0x39b: Call2 0x3d7

0x39c: Stack[-2] = Stack[-14]
0x39d: Pop(2)
0x39e: Return(); Pop(10)

0x39f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a0: Push("d") // @poff=234
0x3a1: PushEmpty(int)
0x3a2: Call2 0x402

0x3a3: Pop(0)
0x3a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a5: Push("m") // @poff=292
0x3a6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a7: Stack[-4] = (int) 0
0x3a8: Push((int) 1)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3aa: Push((int) 1)
0x3ab: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ad: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3ae: Pop(1)
0x3af: Pop(0); Push((bool) Stack[-3] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3b5

0x3b2: Push((int) 1)
0x3b3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b4: GOTO 0x3a8

0x3b5: Pop(0); Push((bool) Stack[-4] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-12] = (bool) 0
0x3b8: Return(); Pop(10)

0x3b9: Stack[-2] = (int) 0
0x3ba: Push((int) 1)
0x3bb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: @ irand(Stack[-2], Stack[-4])
0x3be: Pop(0)
0x3bf: Push((int) 1)
0x3c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c2: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3c3: Pop(1)
0x3c4: PushEmpty(bool, string)
0x3c5: Stack[-3] = Stack[-1]
0x3c6: Call2 0x3d7

0x3c7: Stack[-2] = Stack[-14]
0x3c8: Pop(2)
0x3c9: Return(); Pop(10)

0x3ca: PushEmpty(float, float, float, float)
0x3cb: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3cc: Pop(0)
0x3cd: Push((bool) 0)
0x3ce: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(1)
0x3d0: Return(); Pop(4)

0x3d1: PushEmpty(float, float, float, float)
0x3d2: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3d3: Pop(0)
0x3d4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3d5: Pop(0)
0x3d6: Return(); Pop(4)

0x3d7: PushEmpty(bool, bool)
0x3d8: PushEmpty(bool)
0x3d9: Call2 0x478

0x3da: Pop(0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3dc: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3dd: Pop(0)
0x3de: Push(Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e0: @ lshPlaySpeech(Stack[-3])
0x3e1: Pop(0)
0x3e2: Stack[-4] = (bool) 1
0x3e3: Return(); Pop(2)

0x3e4: Stack[-4] = (bool) 0
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty(bool)
0x3e7: Call2 0x478

0x3e8: Pop(0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: @ lshStopSpeech()
0x3eb: Pop(0)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty(object, object)
0x3ee: @ self(Stack[-1])
0x3ef: Pop(0)
0x3f0: Stack[-1] = Stack[-3]
0x3f1: Return(); Pop(2)

0x3f2: Stack[-1] = 0
0x3f3: PushEmpty(float, float)
0x3f4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3f5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3f6: Push((float)9.999999974752427e-07)
0x3f7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f9: Stack[-4] = [0.0, 0.0, 0.0]
0x3fa: Return(); Pop(2)

0x3fb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3fc: Return(); Pop(2)

0x3fd: PushEmpty(int, int)
0x3fe: @ GetVariable(Stack[-3], Stack[-1])
0x3ff: Pop(0)
0x400: Stack[-1] = Stack[-4]
0x401: Return(); Pop(2)

0x402: PushEmpty(float, float)
0x403: @ GetGameTime(Stack[-1])
0x404: Pop(0)
0x405: Push((int) 1)
0x406: PushEmpty(int)
0x407: Push((int) 24)
0x408: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x409: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x40a: Return(); Pop(2)

0x40b: PushEmpty(string, string)
0x40c: Stack[-1] = "idle" // @poff=146
0x40d: Push(Stack[-3])
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x410: Stack[-1] = Stack[-4]
0x411: Return(); Pop(2)

0x412: PushEmpty(int, bool, int, bool)
0x413: Stack[-2] = (int) 0
0x414: Push("all") // @poff=138
0x415: PushEmpty(string, int)
0x416: Stack[-5] = Stack[-1]
0x417: Call2 0x40b

0x418: Pop(1)
0x419: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(2)
0x41b: Pop(0); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: GOTO 0x421

0x41e: Push((int) 1)
0x41f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x420: GOTO 0x414

0x421: Stack[-2] = Stack[-5]
0x422: Return(); Pop(4)

0x423: PushEmpty()
0x424: Push("oob2PetrKabak1") // @poff=296
0x425: Push((int) 1)
0x426: @ SetVariable(Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: Return(); Pop(0)

0x429: PushEmpty()
0x42a: Push("oob2PetrKabak2") // @poff=326
0x42b: Push((int) 1)
0x42c: @ SetVariable(Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(int, string)
0x431: Stack[-1] = "b2q03" // @poff=356
0x432: Call2 0x3fd

0x433: Pop(1)
0x434: Push((int) 1)
0x435: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = (bool) 1
0x438: Return(); Pop(0)

0x439: Stack[-2] = (bool) 0
0x43a: Return(); Pop(0)

0x43b: PushEmpty()
0x43c: PushEmpty(int, string)
0x43d: Stack[-1] = "oob2PetrKabak1" // @poff=296
0x43e: Call2 0x3fd

0x43f: Pop(1)
0x440: Push((int) 0)
0x441: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-2] = (bool) 1
0x444: Return(); Pop(0)

0x445: Stack[-2] = (bool) 0
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: PushEmpty(int, string)
0x449: Stack[-1] = "oob2PetrKabak2" // @poff=326
0x44a: Call2 0x3fd

0x44b: Pop(1)
0x44c: Push((int) 0)
0x44d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-2] = (bool) 1
0x450: Return(); Pop(0)

0x451: Stack[-2] = (bool) 0
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: PushEmpty(int, string)
0x455: Stack[-1] = "b2q03" // @poff=356
0x456: Call2 0x3fd

0x457: Pop(1)
0x458: Push((int) 1000)
0x459: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-2] = (bool) 1
0x45c: Return(); Pop(0)

0x45d: Stack[-2] = (bool) 0
0x45e: Return(); Pop(0)

0x45f: PushEmpty(int, int)
0x460: Push("branch") // @poff=368
0x461: @ GetVariable(Stack[-1], Stack[-2])
0x462: Pop(1)
0x463: Push((int) 0)
0x464: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x466: Stack[-3] = (int) 1
0x467: Return(); Pop(2)

0x468: GOTO 0x46e

0x469: Push((int) 1)
0x46a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: Stack[-3] = (int) 2
0x46d: Return(); Pop(2)

0x46e: Stack[-3] = (int) 3
0x46f: Return(); Pop(2)

0x470: Stack[-1] = (int) 515550
0x471: Return(); Pop(0)

0x472: Stack[-1] = (int) 502875
0x473: Return(); Pop(0)

0x474: Stack[-1] = "ui/NPC_Petr.png" // @poff=382
0x475: Return(); Pop(0)

0x476: Stack[-1] = "ui/NPC_Petr_b.png" // @poff=414
0x477: Return(); Pop(0)

0x478: Stack[-1] = (bool) 1
0x479: Return(); Pop(0)

