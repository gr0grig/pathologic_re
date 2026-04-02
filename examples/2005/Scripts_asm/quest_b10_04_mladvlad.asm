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
	W:b10q04PlennikTalk
	W:branch
	W:ui/NPC_MladVlad.png
	W:ui/NPC_MladVlad_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000062003100300071003000340050006c0065006e006e0069006b00540061006c006b0000006200720061006e00630068000000750069002f004e00500043005f004d006c006100640056006c00610064002e0070006e0067000000750069002f004e00500043005f004d006c006100640056006c00610064005f0062002e0070006e0067000000
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

RunOp = 0x182
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x186 Vars = (string)
		EVENT_6 Op = 0x19a Vars = ()
		EVENT_5 Op = 0x1a7 Vars = ()
		EVENT_7 Op = 0x1f6 Vars = (int)
		EVENT_45 Op = 0x238 Vars = (bool)
		EVENT_0 Op = 0x244 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2c8

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
0x11: Call2 0x3cf

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x322

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2cd

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x42a

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x428

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x42c

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x42e

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x417

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
0x55: Call2 0x311

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
0x66: Call2 0x40b

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x6a: PushEmpty(object, object)
0x6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Call2 0x405

0x6e: Pop(2)
0x6f: PushEmpty(string)
0x70: Stack[-1] = "Neutral" // @poff=89
0x71: Call2 0xb7

0x72: Pop(1)
0x73: Push((int) 530368)
0x74: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x75: Pop(1)
0x76: @@@ ClearReplies(); Obj=0 // @poff=116
0x77: Pop(0)
0x78: Push((int) 530370)
0x79: Push((int) 32796)
0x7a: Push((int) 31742)
0x7b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7c: Pop(3)
0x7d: Push((int) 530369)
0x7e: Push((int) 32796)
0x7f: Push((int) 31741)
0x80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x81: Pop(3)
0x82: GOTO 0x99

0x83: PushEmpty(string)
0x84: Stack[-1] = "Neutral" // @poff=89
0x85: Call2 0xb7

0x86: Pop(1)
0x87: Push((int) 530371)
0x88: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x89: Pop(1)
0x8a: @@@ ClearReplies(); Obj=0 // @poff=116
0x8b: Pop(0)
0x8c: Push((int) 530372)
0x8d: Push((int) -1)
0x8e: Push((int) 31744)
0x8f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x90: Pop(3)
0x91: Push((int) 531447)
0x92: Push((int) -1)
0x93: Push((int) 32795)
0x94: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x95: Pop(3)
0x96: GOTO 0x99

0x97: Return(); Pop(0)

0x98: GOTO 0x62

0x99: PushEmpty(bool)
0x9a: Call2 0x430

0x9b: Pop(0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x9d: @ lshWaitForAnimEnd()
0x9e: Pop(0)
0x9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xa7

0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa4: Call2 0x3ac

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
0xb9: Call2 0x430

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
0xc9: Call2 0x3b3

0xca: Pop(2)
0xcb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: Push((int) 1)
0xcf: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0xd0: PushEmpty()
0xd1: Call2 0x3c8

0xd2: Pop(0)
0xd3: Push((int) 31740)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x40b

0xd9: Pop(1)
0xda: Pop(1); Push((bool) Stack[-1] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x405

0xe0: Pop(2)
0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral" // @poff=89
0xe3: Call2 0xb7

0xe4: Pop(1)
0xe5: Push((int) 530368)
0xe6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe7: Pop(1)
0xe8: @@@ ClearReplies(); Obj=0 // @poff=116
0xe9: Pop(0)
0xea: Push((int) 530370)
0xeb: Push((int) 32796)
0xec: Push((int) 31742)
0xed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xee: Pop(3)
0xef: Push((int) 530369)
0xf0: Push((int) 32796)
0xf1: Push((int) 31741)
0xf2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral" // @poff=89
0xf7: Call2 0xb7

0xf8: Pop(1)
0xf9: Push((int) 530371)
0xfa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfb: Pop(1)
0xfc: @@@ ClearReplies(); Obj=0 // @poff=116
0xfd: Pop(0)
0xfe: Push((int) 530372)
0xff: Push((int) -1)
0x100: Push((int) 31744)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Push((int) 531447)
0x104: Push((int) -1)
0x105: Push((int) 32795)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 32796)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0xb7

0x10f: Pop(1)
0x110: Push((int) 531448)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 531449)
0x116: Push((int) 32799)
0x117: Push((int) 32798)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 531451)
0x11b: Push((int) 32799)
0x11c: Push((int) 32800)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 32799)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0xb7

0x126: Pop(1)
0x127: Push((int) 531450)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 531452)
0x12d: Push((int) 32803)
0x12e: Push((int) 32802)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 32803)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Neutral" // @poff=89
0x137: Call2 0xb7

0x138: Pop(1)
0x139: Push((int) 531453)
0x13a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13b: Pop(1)
0x13c: @@@ ClearReplies(); Obj=0 // @poff=116
0x13d: Pop(0)
0x13e: Push((int) 531454)
0x13f: Push((int) 32806)
0x140: Push((int) 32804)
0x141: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x142: Pop(3)
0x143: Push((int) 531455)
0x144: Push((int) 32807)
0x145: Push((int) 32805)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 32807)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral" // @poff=89
0x14e: Call2 0xb7

0x14f: Pop(1)
0x150: Push((int) 531457)
0x151: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x152: Pop(1)
0x153: @@@ ClearReplies(); Obj=0 // @poff=116
0x154: Pop(0)
0x155: Push((int) 531458)
0x156: Push((int) -1)
0x157: Push((int) 32808)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 32806)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral" // @poff=89
0x160: Call2 0xb7

0x161: Pop(1)
0x162: Push((int) 531456)
0x163: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x164: Pop(1)
0x165: @@@ ClearReplies(); Obj=0 // @poff=116
0x166: Pop(0)
0x167: Push((int) 531459)
0x168: Push((int) -1)
0x169: Push((int) 32809)
0x16a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16e: PushEmpty(bool)
0x16f: Call2 0x430

0x170: Pop(0)
0x171: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x172: @ lshStopAnimation()
0x173: Pop(0)
0x174: GOTO 0x177

0x175: @ StopAnimation()
0x176: Pop(0)
0x177: Return(); Pop(0)

0x178: GOTO 0xce

0x179: Return(); Pop(0)

0x17a: PushEmpty()
0x17b: PushEmpty(int, object)
0x17c: Stack[-3] = Stack[-1]
0x17d: Push(-2, 1); TaskCall(1)
0x17e: Call2 0xd

0x17f: Pop(-2, 1); TaskReturn
0x180: Pop(2)
0x181: Return(); Pop(0)

0x182: PushEmpty()
0x183: Call2 0x1ab

0x184: Pop(0)
0x185: Return(); Pop(0)

0x186: PushEmpty(bool, bool)
0x187: Push("cleanup") // @poff=156
0x188: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18a: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18b: @ IsLoaded(Stack[-1])
0x18c: Pop(0)
0x18d: Pop(0); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty(object)
0x190: Call2 0x3cf

0x191: Pop(0)
0x192: @ RemoveActor(Stack[-1])
0x193: Pop(1)
0x194: GOTO 0x199

0x195: Push("restore") // @poff=172
0x196: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x199: Return(); Pop(2)

0x19a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x19b: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19c: PushEmpty(object)
0x19d: Call2 0x3cf

0x19e: Pop(0)
0x19f: @ RemoveActor(Stack[-1])
0x1a0: Pop(1)
0x1a1: @ Hold()
0x1a2: Pop(0)
0x1a3: PushEmpty()
0x1a4: Call2 0x21c

0x1a5: Pop(0)
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty()
0x1a8: Call2 0x22b

0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(bool)
0x1ac: Call2 0x2c8

0x1ad: Pop(0)
0x1ae: Pop(1); Push((bool) Stack[-1] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty()
0x1b1: Push(-0, 0); TaskCall(0)
0x1b2: Call2 0x0

0x1b3: Pop(-0, 0); TaskReturn
0x1b4: Pop(0)
0x1b5: PushEmpty()
0x1b6: Call2 0x1a7

0x1b7: Pop(0)
0x1b8: @ GetDirection(Stack[-0]T)
0x1b9: Pop(0)
0x1ba: PushEmpty()
0x1bb: Call2 0x261

0x1bc: Pop(0)
0x1bd: GOTO 0x1ba

0x1be: Return(); Pop(0)

0x1bf: PushEmpty(object, object)
0x1c0: Push("player") // @poff=188
0x1c1: @ FindActor(Stack[-2], Stack[-1])
0x1c2: Pop(1)
0x1c3: Pop(0); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c5: Stack[-3] = (bool) 0
0x1c6: Return(); Pop(2)

0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-3] = Stack[-1]
0x1c9: Call2 0x2bf

0x1ca: Stack[-2] = Stack[-5]
0x1cb: Pop(2)
0x1cc: Return(); Pop(2)

0x1cd: Stack[-1] = 0
0x1ce: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1cf: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1d0: @ RotateAsync(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(object, bool, object, bool)
0x1d4: Push("player") // @poff=188
0x1d5: @ FindActor(Stack[-3], Stack[-1])
0x1d6: Pop(1)
0x1d7: Pop(0); Push((bool) Stack[-2] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d9: Stack[-5] = (bool) 0
0x1da: Return(); Pop(4)

0x1db: PushEmpty(float, object)
0x1dc: Stack[-4] = Stack[-1]
0x1dd: Call2 0x2ad

0x1de: Pop(1)
0x1df: Push((float)90000.0)
0x1e0: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Stack[-5] = (bool) 0
0x1e3: Return(); Pop(4)

0x1e4: @ CanSee(Stack[-1], Stack[-2])
0x1e5: Pop(0)
0x1e6: Stack[-1] = Stack[-5]
0x1e7: Return(); Pop(4)

0x1e8: Stack[-2] = 0
0x1e9: PushEmpty(float, float)
0x1ea: Push((int) 8)
0x1eb: Push((int) 16)
0x1ec: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: Push((int) 10)
0x1ef: @ SetTimer(Stack[-1], Stack[-2])
0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: Push((int) 10)
0x1f3: @ KillTimer(Stack[-1])
0x1f4: Pop(1)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: Push((int) 10)
0x1f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x1fa: PushEmpty()
0x1fb: Call2 0x1f2

0x1fc: Pop(0)
0x1fd: PushEmpty(bool)
0x1fe: Stack[-1] = (bool) 0
0x1ff: PushEmpty(bool)
0x200: Call2 0x2c8

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x203: PushEmpty(bool)
0x204: Call2 0x1d3

0x205: Pop(0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Stack[-1] = (bool) 1
0x208: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x209: PushEmpty(bool)
0x20a: Call2 0x1bf

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20d: PushEmpty(bool, object)
0x20e: PushEmpty(object)
0x20f: Call2 0x3cf

0x210: Stack[-1] = Stack[-2]
0x211: Pop(1)
0x212: Call2 0x35c

0x213: Pop(2)
0x214: GOTO 0x21b

0x215: PushEmpty()
0x216: Call2 0x1ce

0x217: Pop(0)
0x218: PushEmpty()
0x219: Call2 0x1e9

0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: PushEmpty()
0x21d: Call2 0x2a8

0x21e: Pop(0)
0x21f: PushEmpty()
0x220: Call2 0x1f2

0x221: Pop(0)
0x222: @ lshStopSpeech()
0x223: Pop(0)
0x224: @ lshStopAnimation()
0x225: Pop(0)
0x226: @ StopAsync()
0x227: Pop(0)
0x228: @ Hold()
0x229: Pop(0)
0x22a: Return(); Pop(0)

0x22b: @ StopGroup0()
0x22c: Pop(0)
0x22d: PushEmpty()
0x22e: Call2 0x1f2

0x22f: Pop(0)
0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=89
0x232: Call2 0x3ac

0x233: Pop(1)
0x234: PushEmpty()
0x235: Call2 0x1e9

0x236: Pop(0)
0x237: Return(); Pop(0)

0x238: PushEmpty()
0x239: Push(Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23b: PushEmpty()
0x23c: Call2 0x1e9

0x23d: Pop(0)
0x23e: GOTO 0x243

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral" // @poff=89
0x241: Call2 0x3ac

0x242: Pop(1)
0x243: Return(); Pop(0)

0x244: PushEmpty(bool, bool)
0x245: @ IsOverrideActive(Stack[-1])
0x246: Pop(0)
0x247: Pop(0); Push((bool) Stack[-1] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x249: EventDisable(0)
0x24a: PushEmpty()
0x24b: Call2 0x2a8

0x24c: Pop(0)
0x24d: PushEmpty(bool, object)
0x24e: Stack[-5] = Stack[-1]
0x24f: Call2 0x2bf

0x250: Pop(2)
0x251: EventEnable(0)
0x252: PushEmpty(object)
0x253: Stack[-4] = Stack[-1]
0x254: Call2 0x17a

0x255: Pop(1)
0x256: PushEmpty(string)
0x257: Stack[-1] = "Neutral" // @poff=89
0x258: Call2 0x3ac

0x259: Pop(1)
0x25a: PushEmpty()
0x25b: Call2 0x1f2

0x25c: Pop(0)
0x25d: PushEmpty()
0x25e: Call2 0x1e9

0x25f: Pop(0)
0x260: Return(); Pop(2)

0x261: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x262: @ WaitForAnimEnd()
0x263: Pop(0)
0x264: PushEmpty(bool)
0x265: Call2 0x2c8

0x266: Pop(0)
0x267: Pop(1); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Return(); Pop(12)

0x26a: PushEmpty(int)
0x26b: Call2 0x3f4

0x26c: Stack[-1] = Stack[-7]
0x26d: Pop(1)
0x26e: Stack[-5] = (int) 0
0x26f: PushEmpty(bool)
0x270: Stack[-1] = (bool) 0
0x271: Push((int) 5)
0x272: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: PushEmpty(bool)
0x275: Call2 0x2c8

0x276: Pop(0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Stack[-1] = (bool) 1
0x279: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x27a: Pop(0); Push((bool) Stack[-6] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27c: Push((int) 3)
0x27d: @ Sleep(Stack[-1], Stack[-5])
0x27e: Pop(1)
0x27f: Pop(0); Push((bool) Stack[-4] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x281: GOTO 0x2a3

0x282: GOTO 0x298

0x283: @ irand(Stack[-3], Stack[-6])
0x284: Pop(0)
0x285: Push((int) 5)
0x286: @ irand(Stack[-3], Stack[-1])
0x287: Pop(1)
0x288: Push((int) 0)
0x289: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-3] = (int) 0
0x28c: Push("all") // @poff=138
0x28d: PushEmpty(string, int)
0x28e: Stack[-6] = Stack[-1]
0x28f: Call2 0x3ed

0x290: Pop(1)
0x291: @ PlayAnimation(Stack[-2], Stack[-1])
0x292: Pop(2)
0x293: @ WaitForAnimEnd(Stack[-1])
0x294: Pop(0)
0x295: Pop(0); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x2a3

0x298: PushEmpty(bool)
0x299: Call2 0x2a6

0x29a: Pop(0)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a3

0x29e: @ ResetAAS()
0x29f: Pop(0)
0x2a0: Push((int) 1)
0x2a1: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2a2: GOTO 0x26f

0x2a3: @ ResetAAS()
0x2a4: Pop(0)
0x2a5: Return(); Pop(12)

0x2a6: Stack[-1] = (bool) 1
0x2a7: Return(); Pop(0)

0x2a8: @ StopAnimation()
0x2a9: Pop(0)
0x2aa: @ StopGroup0()
0x2ab: Pop(0)
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2ae: @ GetPosition(Stack[-3])
0x2af: Pop(0)
0x2b0: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2b1: Pop(0)
0x2b2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b4: Return(); Pop(6)

0x2b5: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2b6: @ GetPosition(Stack[-3])
0x2b7: Pop(0)
0x2b8: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2b9: Push(CvectorIndex(Stack[-2], 0))
0x2ba: Push(CvectorIndex(Stack[-3], 2))
0x2bb: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2bc: Pop(2)
0x2bd: Stack[-1] = Stack[-8]
0x2be: Return(); Pop(6)

0x2bf: PushEmpty(cvector, cvector)
0x2c0: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2c1: Pop(0)
0x2c2: PushEmpty(bool, cvector)
0x2c3: Stack[-3] = Stack[-1]
0x2c4: Call2 0x2b5

0x2c5: Stack[-2] = Stack[-6]
0x2c6: Pop(2)
0x2c7: Return(); Pop(2)

0x2c8: PushEmpty(bool, bool)
0x2c9: @ IsLoaded(Stack[-1])
0x2ca: Pop(0)
0x2cb: Stack[-1] = Stack[-3]
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ce: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2cf: Pop(0)
0x2d0: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2d1: Pop(0)
0x2d2: Push(CvectorIndex(Stack[-8], 1))
0x2d3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2d5: @ GetPosition(Stack[-7])
0x2d6: Pop(0)
0x2d7: @ GetEyesHeight(Stack[-9])
0x2d8: Pop(0)
0x2d9: Push(CvectorIndex(Stack[-7], 1))
0x2da: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2db: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2dc: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2dd: Push(CvectorIndex(Stack[-6], 1))
0x2de: Stack[-1] = (int) 0
0x2df: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e1: Pop(1); Push(Sqrt(Stack[-1]))
0x2e2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e3: Stack[-5] = -Stack[-6]; Pop(0);
0x2e4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2e5: PushEmpty(cvector, cvector)
0x2e6: Push([0.0, 1.0, 0.0])
0x2e7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2e8: Call2 0x3d5

0x2e9: Pop(1)
0x2ea: Push((int) 25)
0x2eb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ed: Push([0.0, 10.0, 0.0])
0x2ee: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ef: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f0: @ IsOverrideActive(Stack[-2])
0x2f1: Pop(0)
0x2f2: Push(Stack[-2])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f4: Stack[-21] = (bool) 0
0x2f5: Return(); Pop(18)

0x2f6: @ StopWorld()
0x2f7: Pop(0)
0x2f8: @ CameraTransit(Stack[-3], Stack[-5])
0x2f9: Pop(0)
0x2fa: Push(CvectorIndex(Stack[-4], 0))
0x2fb: Push(CvectorIndex(Stack[-5], 2))
0x2fc: @ Rotate(Stack[-2], Stack[-1])
0x2fd: Pop(2)
0x2fe: PushEmpty(bool)
0x2ff: Call2 0x430

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x30b

0x303: Push("head") // @poff=228
0x304: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x305: Pop(1)
0x306: Push(Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x308: Push("head") // @poff=228
0x309: @ LookAsyncCamera(Stack[-1])
0x30a: Pop(1)
0x30b: @ CameraWaitForPlayFinish()
0x30c: Pop(0)
0x30d: @ ResumeWorld()
0x30e: Pop(0)
0x30f: Stack[-21] = (bool) 1
0x310: Return(); Pop(18)

0x311: PushEmpty(bool, bool)
0x312: @ CameraSwitchToNormal()
0x313: Pop(0)
0x314: PushEmpty(bool)
0x315: Call2 0x430

0x316: Pop(0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x321

0x319: Push("head") // @poff=228
0x31a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x31b: Pop(1)
0x31c: Push(Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31e: Push("head") // @poff=228
0x31f: @ UnlookAsync(Stack[-1])
0x320: Pop(1)
0x321: Return(); Pop(2)

0x322: PushEmpty(int, int, int, int)
0x323: Push("voice_common") // @poff=238
0x324: @ GetVariable(Stack[-1], Stack[-3])
0x325: Pop(1)
0x326: Push(Stack[-2])
0x327: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x328: PushEmpty(bool, object)
0x329: Stack[-7] = Stack[-1]
0x32a: Call2 0x35c

0x32b: Pop(1)
0x32c: Pop(1); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32e: PushEmpty(bool, object)
0x32f: Stack[-7] = Stack[-1]
0x330: Call2 0x381

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-6] = (bool) 0
0x335: Return(); Pop(4)

0x336: Push((int) 2)
0x337: @ irand(Stack[-2], Stack[-1])
0x338: Pop(1)
0x339: Push(Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33b: Push("voice_common") // @poff=238
0x33c: Push((int) 1)
0x33d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x33e: Push((int) 3)
0x33f: Pop(2); Push(Stack[-2] % Stack[-1]);
0x340: @ SetVariable(Stack[-2], Stack[-1])
0x341: Pop(2)
0x342: GOTO 0x347

0x343: Push("voice_common") // @poff=238
0x344: Push((int) 0)
0x345: @ SetVariable(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: GOTO 0x35a

0x348: PushEmpty(bool, object)
0x349: Stack[-7] = Stack[-1]
0x34a: Call2 0x381

0x34b: Pop(1)
0x34c: Pop(1); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x34e: PushEmpty(bool, object)
0x34f: Stack[-7] = Stack[-1]
0x350: Call2 0x35c

0x351: Pop(1)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-6] = (bool) 0
0x355: Return(); Pop(4)

0x356: Push("voice_common") // @poff=238
0x357: Push((int) 1)
0x358: @ SetVariable(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: Stack[-6] = (bool) 1
0x35b: Return(); Pop(4)

0x35c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x35d: Stack[-5] = "c" // @poff=264
0x35e: Stack[-4] = (int) 0
0x35f: Push((int) 1)
0x360: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x361: Push((int) 1)
0x362: Pop(1); Push(Stack[-5] + Stack[-1]);
0x363: Pop(1); Push(Stack[-6] + Stack[-1]);
0x364: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x365: Pop(1)
0x366: Pop(0); Push((bool) Stack[-3] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36c

0x369: Push((int) 1)
0x36a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x36b: GOTO 0x35f

0x36c: Pop(0); Push((bool) Stack[-4] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-12] = (bool) 0
0x36f: Return(); Pop(10)

0x370: Stack[-2] = (int) 0
0x371: Push((int) 1)
0x372: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: @ irand(Stack[-2], Stack[-4])
0x375: Pop(0)
0x376: Push((int) 1)
0x377: Pop(1); Push(Stack[-3] + Stack[-1]);
0x378: Pop(1); Push(Stack[-6] + Stack[-1]);
0x379: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x37a: Pop(1)
0x37b: PushEmpty(bool, string)
0x37c: Stack[-3] = Stack[-1]
0x37d: Call2 0x3b9

0x37e: Stack[-2] = Stack[-14]
0x37f: Pop(2)
0x380: Return(); Pop(10)

0x381: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x382: Push("d") // @poff=234
0x383: PushEmpty(int)
0x384: Call2 0x3e4

0x385: Pop(0)
0x386: Pop(2); Push(Stack[-2] + Stack[-1]);
0x387: Push("m") // @poff=292
0x388: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x389: Stack[-4] = (int) 0
0x38a: Push((int) 1)
0x38b: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38c: Push((int) 1)
0x38d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x38e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38f: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x390: Pop(1)
0x391: Pop(0); Push((bool) Stack[-3] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x397

0x394: Push((int) 1)
0x395: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x396: GOTO 0x38a

0x397: Pop(0); Push((bool) Stack[-4] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-12] = (bool) 0
0x39a: Return(); Pop(10)

0x39b: Stack[-2] = (int) 0
0x39c: Push((int) 1)
0x39d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: @ irand(Stack[-2], Stack[-4])
0x3a0: Pop(0)
0x3a1: Push((int) 1)
0x3a2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3a5: Pop(1)
0x3a6: PushEmpty(bool, string)
0x3a7: Stack[-3] = Stack[-1]
0x3a8: Call2 0x3b9

0x3a9: Stack[-2] = Stack[-14]
0x3aa: Pop(2)
0x3ab: Return(); Pop(10)

0x3ac: PushEmpty(float, float, float, float)
0x3ad: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3ae: Pop(0)
0x3af: Push((bool) 0)
0x3b0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(1)
0x3b2: Return(); Pop(4)

0x3b3: PushEmpty(float, float, float, float)
0x3b4: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3b5: Pop(0)
0x3b6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3b7: Pop(0)
0x3b8: Return(); Pop(4)

0x3b9: PushEmpty(bool, bool)
0x3ba: PushEmpty(bool)
0x3bb: Call2 0x430

0x3bc: Pop(0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3be: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3bf: Pop(0)
0x3c0: Push(Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c2: @ lshPlaySpeech(Stack[-3])
0x3c3: Pop(0)
0x3c4: Stack[-4] = (bool) 1
0x3c5: Return(); Pop(2)

0x3c6: Stack[-4] = (bool) 0
0x3c7: Return(); Pop(2)

0x3c8: PushEmpty(bool)
0x3c9: Call2 0x430

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: @ lshStopSpeech()
0x3cd: Pop(0)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty(object, object)
0x3d0: @ self(Stack[-1])
0x3d1: Pop(0)
0x3d2: Stack[-1] = Stack[-3]
0x3d3: Return(); Pop(2)

0x3d4: Stack[-1] = 0
0x3d5: PushEmpty(float, float)
0x3d6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3d7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3d8: Push((float)9.999999974752427e-07)
0x3d9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-4] = [0.0, 0.0, 0.0]
0x3dc: Return(); Pop(2)

0x3dd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3de: Return(); Pop(2)

0x3df: PushEmpty(int, int)
0x3e0: @ GetVariable(Stack[-3], Stack[-1])
0x3e1: Pop(0)
0x3e2: Stack[-1] = Stack[-4]
0x3e3: Return(); Pop(2)

0x3e4: PushEmpty(float, float)
0x3e5: @ GetGameTime(Stack[-1])
0x3e6: Pop(0)
0x3e7: Push((int) 1)
0x3e8: PushEmpty(int)
0x3e9: Push((int) 24)
0x3ea: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3eb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3ec: Return(); Pop(2)

0x3ed: PushEmpty(string, string)
0x3ee: Stack[-1] = "idle" // @poff=146
0x3ef: Push(Stack[-3])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3f2: Stack[-1] = Stack[-4]
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty(int, bool, int, bool)
0x3f5: Stack[-2] = (int) 0
0x3f6: Push("all") // @poff=138
0x3f7: PushEmpty(string, int)
0x3f8: Stack[-5] = Stack[-1]
0x3f9: Call2 0x3ed

0x3fa: Pop(1)
0x3fb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: Pop(0); Push((bool) Stack[-1] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: GOTO 0x403

0x400: Push((int) 1)
0x401: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x402: GOTO 0x3f6

0x403: Stack[-2] = Stack[-5]
0x404: Return(); Pop(4)

0x405: PushEmpty()
0x406: Push("b10q04PlennikTalk") // @poff=296
0x407: Push((int) 1)
0x408: @ SetVariable(Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: Return(); Pop(0)

0x40b: PushEmpty()
0x40c: PushEmpty(int, string)
0x40d: Stack[-1] = "b10q04PlennikTalk" // @poff=296
0x40e: Call2 0x3df

0x40f: Pop(1)
0x410: Push((int) 0)
0x411: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x413: Stack[-2] = (bool) 1
0x414: Return(); Pop(0)

0x415: Stack[-2] = (bool) 0
0x416: Return(); Pop(0)

0x417: PushEmpty(int, int)
0x418: Push("branch") // @poff=332
0x419: @ GetVariable(Stack[-1], Stack[-2])
0x41a: Pop(1)
0x41b: Push((int) 0)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41e: Stack[-3] = (int) 1
0x41f: Return(); Pop(2)

0x420: GOTO 0x426

0x421: Push((int) 1)
0x422: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-3] = (int) 2
0x425: Return(); Pop(2)

0x426: Stack[-3] = (int) 3
0x427: Return(); Pop(2)

0x428: Stack[-1] = (int) 515547
0x429: Return(); Pop(0)

0x42a: Stack[-1] = (int) 502872
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = "ui/NPC_MladVlad.png" // @poff=346
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = "ui/NPC_MladVlad_b.png" // @poff=386
0x42f: Return(); Pop(0)

0x430: Stack[-1] = (bool) 1
0x431: Return(); Pop(0)

