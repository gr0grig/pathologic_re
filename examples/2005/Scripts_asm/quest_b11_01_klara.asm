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
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
	W:oob11KlaraD1
	W:b11q01VictimChoosed
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e00670000006f006f006200310031004b006c00610072006100440031000000620031003100710030003100560069006300740069006d00430068006f006f0073006500640000006200720061006e00630068000000
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

RunOp = 0x279
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xef Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x27d Vars = (string)
		EVENT_6 Op = 0x291 Vars = ()
		EVENT_5 Op = 0x29e Vars = ()
		EVENT_7 Op = 0x2ed Vars = (int)
		EVENT_45 Op = 0x32f Vars = (bool)
		EVENT_0 Op = 0x33b Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3bf

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
0x11: Call2 0x4c6

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x419

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3c4

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x4fe

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x4fc

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x500

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x502

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x524

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
0x55: Call2 0x408

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
0x63: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x50c

0x69: Pop(1)
0x6a: Pop(1); Push((bool) Stack[-1] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x518

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x73: PushEmpty(object, object)
0x74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x506

0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xd9

0x7b: Pop(1)
0x7c: Push((int) 522009)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 523279)
0x82: Push((int) 24484)
0x83: Push((int) 24483)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: Push((int) 522010)
0x87: Push((int) 24503)
0x88: Push((int) 23180)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: Push((int) 523284)
0x8c: Push((int) 24490)
0x8d: Push((int) 24489)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 523286)
0x91: Push((int) 24492)
0x92: Push((int) 24491)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: Push((int) 523305)
0x96: Push((int) 24514)
0x97: Push((int) 24513)
0x98: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x99: Pop(3)
0x9a: Push((int) 523278)
0x9b: Push((int) 24486)
0x9c: Push((int) 24482)
0x9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9e: Pop(3)
0x9f: Push((int) 523304)
0xa0: Push((int) -1)
0xa1: Push((int) 24512)
0xa2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa3: Pop(3)
0xa4: GOTO 0xbb

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral" // @poff=89
0xa7: Call2 0xd9

0xa8: Pop(1)
0xa9: Push((int) 522096)
0xaa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xab: Pop(1)
0xac: @@@ ClearReplies(); Obj=0 // @poff=116
0xad: Pop(0)
0xae: Push((int) 522097)
0xaf: Push((int) -1)
0xb0: Push((int) 23266)
0xb1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb2: Pop(3)
0xb3: Push((int) 523318)
0xb4: Push((int) 24533)
0xb5: Push((int) 24532)
0xb6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb7: Pop(3)
0xb8: GOTO 0xbb

0xb9: Return(); Pop(0)

0xba: GOTO 0x62

0xbb: PushEmpty(bool)
0xbc: Call2 0x504

0xbd: Pop(0)
0xbe: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xbf: @ lshWaitForAnimEnd()
0xc0: Pop(0)
0xc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: GOTO 0xc9

0xc4: PushEmpty(string)
0xc5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc6: Call2 0x4a3

0xc7: Pop(1)
0xc8: GOTO 0xbf

0xc9: GOTO 0xd8

0xca: Push("all") // @poff=138
0xcb: Push("idle") // @poff=146
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: @ WaitForAnimEnd()
0xcf: Pop(0)
0xd0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: GOTO 0xd8

0xd3: Push("all") // @poff=138
0xd4: Push("idle") // @poff=146
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: GOTO 0xce

0xd8: Return(); Pop(0)

0xd9: PushEmpty()
0xda: PushEmpty(bool)
0xdb: Call2 0x504

0xdc: Pop(0)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Return(); Pop(0)

0xe0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(0)

0xe3: PushEmpty(string, bool)
0xe4: Stack[-3] = Stack[-2]
0xe5: Push("") // @poff=102
0xe6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: Stack[-1] = (bool) 0
0xe9: GOTO 0xeb

0xea: Stack[-1] = (bool) 1
0xeb: Call2 0x4aa

0xec: Pop(2)
0xed: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Push((int) 1)
0xf1: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0xf2: PushEmpty()
0xf3: Call2 0x4bf

0xf4: Pop(0)
0xf5: Push((int) 23179)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0xf8: PushEmpty(bool)
0xf9: Stack[-1] = (bool) 0
0xfa: PushEmpty(bool, object)
0xfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Call2 0x50c

0xfd: Pop(1)
0xfe: Pop(1); Push((bool) Stack[-1] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call2 0x518

0x103: Pop(1)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: Stack[-1] = (bool) 1
0x106: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x506

0x10b: Pop(2)
0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0xd9

0x10f: Pop(1)
0x110: Push((int) 522009)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 523279)
0x116: Push((int) 24484)
0x117: Push((int) 24483)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 522010)
0x11b: Push((int) 24503)
0x11c: Push((int) 23180)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Push((int) 523284)
0x120: Push((int) 24490)
0x121: Push((int) 24489)
0x122: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x123: Pop(3)
0x124: Push((int) 523286)
0x125: Push((int) 24492)
0x126: Push((int) 24491)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Push((int) 523305)
0x12a: Push((int) 24514)
0x12b: Push((int) 24513)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Push((int) 523278)
0x12f: Push((int) 24486)
0x130: Push((int) 24482)
0x131: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x132: Pop(3)
0x133: Push((int) 523304)
0x134: Push((int) -1)
0x135: Push((int) 24512)
0x136: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0xd9

0x13c: Pop(1)
0x13d: Push((int) 522096)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 522097)
0x143: Push((int) -1)
0x144: Push((int) 23266)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Push((int) 523318)
0x148: Push((int) 24533)
0x149: Push((int) 24532)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 24533)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xd9

0x153: Pop(1)
0x154: Push((int) 523319)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 523320)
0x15a: Push((int) -1)
0x15b: Push((int) 24534)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 24514)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0xd9

0x165: Pop(1)
0x166: Push((int) 523306)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 523307)
0x16c: Push((int) 24516)
0x16d: Push((int) 24515)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 523309)
0x171: Push((int) 24518)
0x172: Push((int) 24517)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 24518)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0xd9

0x17c: Pop(1)
0x17d: Push((int) 523310)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 523312)
0x183: Push((int) 24508)
0x184: Push((int) 24521)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Push((int) 523314)
0x188: Push((int) 24484)
0x189: Push((int) 24524)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 24516)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0xd9

0x193: Pop(1)
0x194: Push((int) 523308)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 523311)
0x19a: Push((int) 24508)
0x19b: Push((int) 24519)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Push((int) 523313)
0x19f: Push((int) 24484)
0x1a0: Push((int) 24523)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 24492)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0xd9

0x1aa: Pop(1)
0x1ab: Push((int) 523287)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 523300)
0x1b1: Push((int) 24508)
0x1b2: Push((int) 24506)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 24490)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral" // @poff=89
0x1bb: Call2 0xd9

0x1bc: Pop(1)
0x1bd: Push((int) 523285)
0x1be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bf: Pop(1)
0x1c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c1: Pop(0)
0x1c2: Push((int) 523290)
0x1c3: Push((int) -1)
0x1c4: Push((int) 24495)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Push((int) 523291)
0x1c8: Push((int) -1)
0x1c9: Push((int) 24496)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 24503)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral" // @poff=89
0x1d2: Call2 0xd9

0x1d3: Pop(1)
0x1d4: Push((int) 523298)
0x1d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d6: Pop(1)
0x1d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d8: Pop(0)
0x1d9: Push((int) 523299)
0x1da: Push((int) 24494)
0x1db: Push((int) 24504)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 24484)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral" // @poff=89
0x1e4: Call2 0xd9

0x1e5: Pop(1)
0x1e6: Push((int) 523280)
0x1e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e8: Pop(1)
0x1e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ea: Pop(0)
0x1eb: Push((int) 523281)
0x1ec: Push((int) 24486)
0x1ed: Push((int) 24485)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Push((int) 523315)
0x1f1: Push((int) 24494)
0x1f2: Push((int) 24527)
0x1f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 24486)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral" // @poff=89
0x1fb: Call2 0xd9

0x1fc: Pop(1)
0x1fd: Push((int) 523282)
0x1fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ff: Pop(1)
0x200: @@@ ClearReplies(); Obj=0 // @poff=116
0x201: Pop(0)
0x202: Push((int) 523288)
0x203: Push((int) 24494)
0x204: Push((int) 24493)
0x205: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x206: Pop(3)
0x207: Push((int) 523316)
0x208: Push((int) 24498)
0x209: Push((int) 24529)
0x20a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20b: Pop(3)
0x20c: Return(); Pop(0)

0x20d: Push((int) 24494)
0x20e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Neutral" // @poff=89
0x212: Call2 0xd9

0x213: Pop(1)
0x214: Push((int) 523289)
0x215: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x216: Pop(1)
0x217: @@@ ClearReplies(); Obj=0 // @poff=116
0x218: Pop(0)
0x219: Push((int) 523292)
0x21a: Push((int) 24498)
0x21b: Push((int) 24497)
0x21c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 24498)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Neutral" // @poff=89
0x224: Call2 0xd9

0x225: Pop(1)
0x226: Push((int) 523293)
0x227: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x228: Pop(1)
0x229: @@@ ClearReplies(); Obj=0 // @poff=116
0x22a: Pop(0)
0x22b: Push((int) 523294)
0x22c: Push((int) 24508)
0x22d: Push((int) 24499)
0x22e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22f: Pop(3)
0x230: Push((int) 523295)
0x231: Push((int) 24501)
0x232: Push((int) 24500)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: Push((int) 24501)
0x237: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x239: PushEmpty(string)
0x23a: Stack[-1] = "Neutral" // @poff=89
0x23b: Call2 0xd9

0x23c: Pop(1)
0x23d: Push((int) 523296)
0x23e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23f: Pop(1)
0x240: @@@ ClearReplies(); Obj=0 // @poff=116
0x241: Pop(0)
0x242: Push((int) 523301)
0x243: Push((int) 24508)
0x244: Push((int) 24507)
0x245: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x246: Pop(3)
0x247: Push((int) 523297)
0x248: Push((int) -1)
0x249: Push((int) 24502)
0x24a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 24508)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Neutral" // @poff=89
0x252: Call2 0xd9

0x253: Pop(1)
0x254: Push((int) 523302)
0x255: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x256: Pop(1)
0x257: @@@ ClearReplies(); Obj=0 // @poff=116
0x258: Pop(0)
0x259: Push((int) 523303)
0x25a: Push((int) -1)
0x25b: Push((int) 24509)
0x25c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25d: Pop(3)
0x25e: Push((int) 523317)
0x25f: Push((int) -1)
0x260: Push((int) 24531)
0x261: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x265: PushEmpty(bool)
0x266: Call2 0x504

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x269: @ lshStopAnimation()
0x26a: Pop(0)
0x26b: GOTO 0x26e

0x26c: @ StopAnimation()
0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: GOTO 0xf0

0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: PushEmpty(int, object)
0x273: Stack[-3] = Stack[-1]
0x274: Push(-2, 1); TaskCall(1)
0x275: Call2 0xd

0x276: Pop(-2, 1); TaskReturn
0x277: Pop(2)
0x278: Return(); Pop(0)

0x279: PushEmpty()
0x27a: Call2 0x2a2

0x27b: Pop(0)
0x27c: Return(); Pop(0)

0x27d: PushEmpty(bool, bool)
0x27e: Push("cleanup") // @poff=156
0x27f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x281: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x282: @ IsLoaded(Stack[-1])
0x283: Pop(0)
0x284: Pop(0); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x286: PushEmpty(object)
0x287: Call2 0x4c6

0x288: Pop(0)
0x289: @ RemoveActor(Stack[-1])
0x28a: Pop(1)
0x28b: GOTO 0x290

0x28c: Push("restore") // @poff=172
0x28d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x290: Return(); Pop(2)

0x291: Push( Stack[1 + Tasks[-1].StackPointer] )
0x292: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x293: PushEmpty(object)
0x294: Call2 0x4c6

0x295: Pop(0)
0x296: @ RemoveActor(Stack[-1])
0x297: Pop(1)
0x298: @ Hold()
0x299: Pop(0)
0x29a: PushEmpty()
0x29b: Call2 0x313

0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: Call2 0x322

0x2a0: Pop(0)
0x2a1: Return(); Pop(0)

0x2a2: PushEmpty(bool)
0x2a3: Call2 0x3bf

0x2a4: Pop(0)
0x2a5: Pop(1); Push((bool) Stack[-1] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: PushEmpty()
0x2a8: Push(-0, 0); TaskCall(0)
0x2a9: Call2 0x0

0x2aa: Pop(-0, 0); TaskReturn
0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x29e

0x2ae: Pop(0)
0x2af: @ GetDirection(Stack[-0]T)
0x2b0: Pop(0)
0x2b1: PushEmpty()
0x2b2: Call2 0x358

0x2b3: Pop(0)
0x2b4: GOTO 0x2b1

0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(object, object)
0x2b7: Push("player") // @poff=188
0x2b8: @ FindActor(Stack[-2], Stack[-1])
0x2b9: Pop(1)
0x2ba: Pop(0); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-3] = (bool) 0
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(bool, object)
0x2bf: Stack[-3] = Stack[-1]
0x2c0: Call2 0x3b6

0x2c1: Stack[-2] = Stack[-5]
0x2c2: Pop(2)
0x2c3: Return(); Pop(2)

0x2c4: Stack[-1] = 0
0x2c5: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2c6: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2c7: @ RotateAsync(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: Return(); Pop(0)

0x2ca: PushEmpty(object, bool, object, bool)
0x2cb: Push("player") // @poff=188
0x2cc: @ FindActor(Stack[-3], Stack[-1])
0x2cd: Pop(1)
0x2ce: Pop(0); Push((bool) Stack[-2] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d0: Stack[-5] = (bool) 0
0x2d1: Return(); Pop(4)

0x2d2: PushEmpty(float, object)
0x2d3: Stack[-4] = Stack[-1]
0x2d4: Call2 0x3a4

0x2d5: Pop(1)
0x2d6: Push((float)90000.0)
0x2d7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-5] = (bool) 0
0x2da: Return(); Pop(4)

0x2db: @ CanSee(Stack[-1], Stack[-2])
0x2dc: Pop(0)
0x2dd: Stack[-1] = Stack[-5]
0x2de: Return(); Pop(4)

0x2df: Stack[-2] = 0
0x2e0: PushEmpty(float, float)
0x2e1: Push((int) 8)
0x2e2: Push((int) 16)
0x2e3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: Push((int) 10)
0x2e6: @ SetTimer(Stack[-1], Stack[-2])
0x2e7: Pop(1)
0x2e8: Return(); Pop(2)

0x2e9: Push((int) 10)
0x2ea: @ KillTimer(Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty()
0x2ee: Push((int) 10)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2f1: PushEmpty()
0x2f2: Call2 0x2e9

0x2f3: Pop(0)
0x2f4: PushEmpty(bool)
0x2f5: Stack[-1] = (bool) 0
0x2f6: PushEmpty(bool)
0x2f7: Call2 0x3bf

0x2f8: Pop(0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(bool)
0x2fb: Call2 0x2ca

0x2fc: Pop(0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Stack[-1] = (bool) 1
0x2ff: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x300: PushEmpty(bool)
0x301: Call2 0x2b6

0x302: Pop(0)
0x303: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x304: PushEmpty(bool, object)
0x305: PushEmpty(object)
0x306: Call2 0x4c6

0x307: Stack[-1] = Stack[-2]
0x308: Pop(1)
0x309: Call2 0x453

0x30a: Pop(2)
0x30b: GOTO 0x312

0x30c: PushEmpty()
0x30d: Call2 0x2c5

0x30e: Pop(0)
0x30f: PushEmpty()
0x310: Call2 0x2e0

0x311: Pop(0)
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: Call2 0x39f

0x315: Pop(0)
0x316: PushEmpty()
0x317: Call2 0x2e9

0x318: Pop(0)
0x319: @ lshStopSpeech()
0x31a: Pop(0)
0x31b: @ lshStopAnimation()
0x31c: Pop(0)
0x31d: @ StopAsync()
0x31e: Pop(0)
0x31f: @ Hold()
0x320: Pop(0)
0x321: Return(); Pop(0)

0x322: @ StopGroup0()
0x323: Pop(0)
0x324: PushEmpty()
0x325: Call2 0x2e9

0x326: Pop(0)
0x327: PushEmpty(string)
0x328: Stack[-1] = "Neutral" // @poff=89
0x329: Call2 0x4a3

0x32a: Pop(1)
0x32b: PushEmpty()
0x32c: Call2 0x2e0

0x32d: Pop(0)
0x32e: Return(); Pop(0)

0x32f: PushEmpty()
0x330: Push(Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x332: PushEmpty()
0x333: Call2 0x2e0

0x334: Pop(0)
0x335: GOTO 0x33a

0x336: PushEmpty(string)
0x337: Stack[-1] = "Neutral" // @poff=89
0x338: Call2 0x4a3

0x339: Pop(1)
0x33a: Return(); Pop(0)

0x33b: PushEmpty(bool, bool)
0x33c: @ IsOverrideActive(Stack[-1])
0x33d: Pop(0)
0x33e: Pop(0); Push((bool) Stack[-1] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x340: EventDisable(0)
0x341: PushEmpty()
0x342: Call2 0x39f

0x343: Pop(0)
0x344: PushEmpty(bool, object)
0x345: Stack[-5] = Stack[-1]
0x346: Call2 0x3b6

0x347: Pop(2)
0x348: EventEnable(0)
0x349: PushEmpty(object)
0x34a: Stack[-4] = Stack[-1]
0x34b: Call2 0x271

0x34c: Pop(1)
0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Neutral" // @poff=89
0x34f: Call2 0x4a3

0x350: Pop(1)
0x351: PushEmpty()
0x352: Call2 0x2e9

0x353: Pop(0)
0x354: PushEmpty()
0x355: Call2 0x2e0

0x356: Pop(0)
0x357: Return(); Pop(2)

0x358: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x359: @ WaitForAnimEnd()
0x35a: Pop(0)
0x35b: PushEmpty(bool)
0x35c: Call2 0x3bf

0x35d: Pop(0)
0x35e: Pop(1); Push((bool) Stack[-1] == 0)
0x35f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x360: Return(); Pop(12)

0x361: PushEmpty(int)
0x362: Call2 0x4eb

0x363: Stack[-1] = Stack[-7]
0x364: Pop(1)
0x365: Stack[-5] = (int) 0
0x366: PushEmpty(bool)
0x367: Stack[-1] = (bool) 0
0x368: Push((int) 5)
0x369: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36b: PushEmpty(bool)
0x36c: Call2 0x3bf

0x36d: Pop(0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 1
0x370: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x371: Pop(0); Push((bool) Stack[-6] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x373: Push((int) 3)
0x374: @ Sleep(Stack[-1], Stack[-5])
0x375: Pop(1)
0x376: Pop(0); Push((bool) Stack[-4] == 0)
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: GOTO 0x39a

0x379: GOTO 0x38f

0x37a: @ irand(Stack[-3], Stack[-6])
0x37b: Pop(0)
0x37c: Push((int) 5)
0x37d: @ irand(Stack[-3], Stack[-1])
0x37e: Pop(1)
0x37f: Push((int) 0)
0x380: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Stack[-3] = (int) 0
0x383: Push("all") // @poff=138
0x384: PushEmpty(string, int)
0x385: Stack[-6] = Stack[-1]
0x386: Call2 0x4e4

0x387: Pop(1)
0x388: @ PlayAnimation(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: @ WaitForAnimEnd(Stack[-1])
0x38b: Pop(0)
0x38c: Pop(0); Push((bool) Stack[-1] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: GOTO 0x39a

0x38f: PushEmpty(bool)
0x390: Call2 0x39d

0x391: Pop(0)
0x392: Pop(1); Push((bool) Stack[-1] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: GOTO 0x39a

0x395: @ ResetAAS()
0x396: Pop(0)
0x397: Push((int) 1)
0x398: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x399: GOTO 0x366

0x39a: @ ResetAAS()
0x39b: Pop(0)
0x39c: Return(); Pop(12)

0x39d: Stack[-1] = (bool) 1
0x39e: Return(); Pop(0)

0x39f: @ StopAnimation()
0x3a0: Pop(0)
0x3a1: @ StopGroup0()
0x3a2: Pop(0)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3a5: @ GetPosition(Stack[-3])
0x3a6: Pop(0)
0x3a7: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x3a8: Pop(0)
0x3a9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3aa: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3ab: Return(); Pop(6)

0x3ac: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3ad: @ GetPosition(Stack[-3])
0x3ae: Pop(0)
0x3af: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3b0: Push(CvectorIndex(Stack[-2], 0))
0x3b1: Push(CvectorIndex(Stack[-3], 2))
0x3b2: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3b3: Pop(2)
0x3b4: Stack[-1] = Stack[-8]
0x3b5: Return(); Pop(6)

0x3b6: PushEmpty(cvector, cvector)
0x3b7: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x3b8: Pop(0)
0x3b9: PushEmpty(bool, cvector)
0x3ba: Stack[-3] = Stack[-1]
0x3bb: Call2 0x3ac

0x3bc: Stack[-2] = Stack[-6]
0x3bd: Pop(2)
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(bool, bool)
0x3c0: @ IsLoaded(Stack[-1])
0x3c1: Pop(0)
0x3c2: Stack[-1] = Stack[-3]
0x3c3: Return(); Pop(2)

0x3c4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3c5: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x3c6: Pop(0)
0x3c7: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x3c8: Pop(0)
0x3c9: Push(CvectorIndex(Stack[-8], 1))
0x3ca: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3cb: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3cc: @ GetPosition(Stack[-7])
0x3cd: Pop(0)
0x3ce: @ GetEyesHeight(Stack[-9])
0x3cf: Pop(0)
0x3d0: Push(CvectorIndex(Stack[-7], 1))
0x3d1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3d2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3d3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3d4: Push(CvectorIndex(Stack[-6], 1))
0x3d5: Stack[-1] = (int) 0
0x3d6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3d7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3d8: Pop(1); Push(Sqrt(Stack[-1]))
0x3d9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3da: Stack[-5] = -Stack[-6]; Pop(0);
0x3db: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3dc: PushEmpty(cvector, cvector)
0x3dd: Push([0.0, 1.0, 0.0])
0x3de: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3df: Call2 0x4cc

0x3e0: Pop(1)
0x3e1: Push((int) 25)
0x3e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e4: Push([0.0, 10.0, 0.0])
0x3e5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3e6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3e7: @ IsOverrideActive(Stack[-2])
0x3e8: Pop(0)
0x3e9: Push(Stack[-2])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-21] = (bool) 0
0x3ec: Return(); Pop(18)

0x3ed: @ StopWorld()
0x3ee: Pop(0)
0x3ef: @ CameraTransit(Stack[-3], Stack[-5])
0x3f0: Pop(0)
0x3f1: Push(CvectorIndex(Stack[-4], 0))
0x3f2: Push(CvectorIndex(Stack[-5], 2))
0x3f3: @ Rotate(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: PushEmpty(bool)
0x3f6: Call2 0x504

0x3f7: Pop(0)
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: GOTO 0x402

0x3fa: Push("head") // @poff=228
0x3fb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3fc: Pop(1)
0x3fd: Push(Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ff: Push("head") // @poff=228
0x400: @ LookAsyncCamera(Stack[-1])
0x401: Pop(1)
0x402: @ CameraWaitForPlayFinish()
0x403: Pop(0)
0x404: @ ResumeWorld()
0x405: Pop(0)
0x406: Stack[-21] = (bool) 1
0x407: Return(); Pop(18)

0x408: PushEmpty(bool, bool)
0x409: @ CameraSwitchToNormal()
0x40a: Pop(0)
0x40b: PushEmpty(bool)
0x40c: Call2 0x504

0x40d: Pop(0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: GOTO 0x418

0x410: Push("head") // @poff=228
0x411: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x412: Pop(1)
0x413: Push(Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x415: Push("head") // @poff=228
0x416: @ UnlookAsync(Stack[-1])
0x417: Pop(1)
0x418: Return(); Pop(2)

0x419: PushEmpty(int, int, int, int)
0x41a: Push("voice_common") // @poff=238
0x41b: @ GetVariable(Stack[-1], Stack[-3])
0x41c: Pop(1)
0x41d: Push(Stack[-2])
0x41e: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x41f: PushEmpty(bool, object)
0x420: Stack[-7] = Stack[-1]
0x421: Call2 0x453

0x422: Pop(1)
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x425: PushEmpty(bool, object)
0x426: Stack[-7] = Stack[-1]
0x427: Call2 0x478

0x428: Pop(1)
0x429: Pop(1); Push((bool) Stack[-1] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-6] = (bool) 0
0x42c: Return(); Pop(4)

0x42d: Push((int) 2)
0x42e: @ irand(Stack[-2], Stack[-1])
0x42f: Pop(1)
0x430: Push(Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x432: Push("voice_common") // @poff=238
0x433: Push((int) 1)
0x434: Pop(1); Push(Stack[-4] + Stack[-1]);
0x435: Push((int) 3)
0x436: Pop(2); Push(Stack[-2] % Stack[-1]);
0x437: @ SetVariable(Stack[-2], Stack[-1])
0x438: Pop(2)
0x439: GOTO 0x43e

0x43a: Push("voice_common") // @poff=238
0x43b: Push((int) 0)
0x43c: @ SetVariable(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: GOTO 0x451

0x43f: PushEmpty(bool, object)
0x440: Stack[-7] = Stack[-1]
0x441: Call2 0x478

0x442: Pop(1)
0x443: Pop(1); Push((bool) Stack[-1] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x445: PushEmpty(bool, object)
0x446: Stack[-7] = Stack[-1]
0x447: Call2 0x453

0x448: Pop(1)
0x449: Pop(1); Push((bool) Stack[-1] == 0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: Stack[-6] = (bool) 0
0x44c: Return(); Pop(4)

0x44d: Push("voice_common") // @poff=238
0x44e: Push((int) 1)
0x44f: @ SetVariable(Stack[-2], Stack[-1])
0x450: Pop(2)
0x451: Stack[-6] = (bool) 1
0x452: Return(); Pop(4)

0x453: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x454: Stack[-5] = "c" // @poff=264
0x455: Stack[-4] = (int) 0
0x456: Push((int) 1)
0x457: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x458: Push((int) 1)
0x459: Pop(1); Push(Stack[-5] + Stack[-1]);
0x45a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x45b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x45c: Pop(1)
0x45d: Pop(0); Push((bool) Stack[-3] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45f: GOTO 0x463

0x460: Push((int) 1)
0x461: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x462: GOTO 0x456

0x463: Pop(0); Push((bool) Stack[-4] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-12] = (bool) 0
0x466: Return(); Pop(10)

0x467: Stack[-2] = (int) 0
0x468: Push((int) 1)
0x469: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: @ irand(Stack[-2], Stack[-4])
0x46c: Pop(0)
0x46d: Push((int) 1)
0x46e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x46f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x470: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x471: Pop(1)
0x472: PushEmpty(bool, string)
0x473: Stack[-3] = Stack[-1]
0x474: Call2 0x4b0

0x475: Stack[-2] = Stack[-14]
0x476: Pop(2)
0x477: Return(); Pop(10)

0x478: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x479: Push("d") // @poff=234
0x47a: PushEmpty(int)
0x47b: Call2 0x4db

0x47c: Pop(0)
0x47d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47e: Push("m") // @poff=292
0x47f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x480: Stack[-4] = (int) 0
0x481: Push((int) 1)
0x482: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x483: Push((int) 1)
0x484: Pop(1); Push(Stack[-5] + Stack[-1]);
0x485: Pop(1); Push(Stack[-6] + Stack[-1]);
0x486: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x487: Pop(1)
0x488: Pop(0); Push((bool) Stack[-3] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: GOTO 0x48e

0x48b: Push((int) 1)
0x48c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x48d: GOTO 0x481

0x48e: Pop(0); Push((bool) Stack[-4] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: Stack[-12] = (bool) 0
0x491: Return(); Pop(10)

0x492: Stack[-2] = (int) 0
0x493: Push((int) 1)
0x494: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: @ irand(Stack[-2], Stack[-4])
0x497: Pop(0)
0x498: Push((int) 1)
0x499: Pop(1); Push(Stack[-3] + Stack[-1]);
0x49a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x49c: Pop(1)
0x49d: PushEmpty(bool, string)
0x49e: Stack[-3] = Stack[-1]
0x49f: Call2 0x4b0

0x4a0: Stack[-2] = Stack[-14]
0x4a1: Pop(2)
0x4a2: Return(); Pop(10)

0x4a3: PushEmpty(float, float, float, float)
0x4a4: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4a5: Pop(0)
0x4a6: Push((bool) 0)
0x4a7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(1)
0x4a9: Return(); Pop(4)

0x4aa: PushEmpty(float, float, float, float)
0x4ab: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4ac: Pop(0)
0x4ad: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4ae: Pop(0)
0x4af: Return(); Pop(4)

0x4b0: PushEmpty(bool, bool)
0x4b1: PushEmpty(bool)
0x4b2: Call2 0x504

0x4b3: Pop(0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4b6: Pop(0)
0x4b7: Push(Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b9: @ lshPlaySpeech(Stack[-3])
0x4ba: Pop(0)
0x4bb: Stack[-4] = (bool) 1
0x4bc: Return(); Pop(2)

0x4bd: Stack[-4] = (bool) 0
0x4be: Return(); Pop(2)

0x4bf: PushEmpty(bool)
0x4c0: Call2 0x504

0x4c1: Pop(0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: @ lshStopSpeech()
0x4c4: Pop(0)
0x4c5: Return(); Pop(0)

0x4c6: PushEmpty(object, object)
0x4c7: @ self(Stack[-1])
0x4c8: Pop(0)
0x4c9: Stack[-1] = Stack[-3]
0x4ca: Return(); Pop(2)

0x4cb: Stack[-1] = 0
0x4cc: PushEmpty(float, float)
0x4cd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4ce: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4cf: Push((float)9.999999974752427e-07)
0x4d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-4] = [0.0, 0.0, 0.0]
0x4d3: Return(); Pop(2)

0x4d4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4d5: Return(); Pop(2)

0x4d6: PushEmpty(int, int)
0x4d7: @ GetVariable(Stack[-3], Stack[-1])
0x4d8: Pop(0)
0x4d9: Stack[-1] = Stack[-4]
0x4da: Return(); Pop(2)

0x4db: PushEmpty(float, float)
0x4dc: @ GetGameTime(Stack[-1])
0x4dd: Pop(0)
0x4de: Push((int) 1)
0x4df: PushEmpty(int)
0x4e0: Push((int) 24)
0x4e1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4e2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4e3: Return(); Pop(2)

0x4e4: PushEmpty(string, string)
0x4e5: Stack[-1] = "idle" // @poff=146
0x4e6: Push(Stack[-3])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4e9: Stack[-1] = Stack[-4]
0x4ea: Return(); Pop(2)

0x4eb: PushEmpty(int, bool, int, bool)
0x4ec: Stack[-2] = (int) 0
0x4ed: Push("all") // @poff=138
0x4ee: PushEmpty(string, int)
0x4ef: Stack[-5] = Stack[-1]
0x4f0: Call2 0x4e4

0x4f1: Pop(1)
0x4f2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(2)
0x4f4: Pop(0); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f6: GOTO 0x4fa

0x4f7: Push((int) 1)
0x4f8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4f9: GOTO 0x4ed

0x4fa: Stack[-2] = Stack[-5]
0x4fb: Return(); Pop(4)

0x4fc: Stack[-1] = (int) 515540
0x4fd: Return(); Pop(0)

0x4fe: Stack[-1] = (int) 502865
0x4ff: Return(); Pop(0)

0x500: Stack[-1] = "ui/NPC_Klara.png" // @poff=296
0x501: Return(); Pop(0)

0x502: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=330
0x503: Return(); Pop(0)

0x504: Stack[-1] = (bool) 1
0x505: Return(); Pop(0)

0x506: PushEmpty()
0x507: Push("oob11KlaraD1") // @poff=368
0x508: Push((int) 1)
0x509: @ SetVariable(Stack[-2], Stack[-1])
0x50a: Pop(2)
0x50b: Return(); Pop(0)

0x50c: PushEmpty()
0x50d: PushEmpty(int, string)
0x50e: Stack[-1] = "b11q01VictimChoosed" // @poff=394
0x50f: Call2 0x4d6

0x510: Pop(1)
0x511: Push((int) 0)
0x512: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-2] = (bool) 1
0x515: Return(); Pop(0)

0x516: Stack[-2] = (bool) 0
0x517: Return(); Pop(0)

0x518: PushEmpty()
0x519: PushEmpty(int, string)
0x51a: Stack[-1] = "oob11KlaraD1" // @poff=368
0x51b: Call2 0x4d6

0x51c: Pop(1)
0x51d: Push((int) 0)
0x51e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-2] = (bool) 1
0x521: Return(); Pop(0)

0x522: Stack[-2] = (bool) 0
0x523: Return(); Pop(0)

0x524: PushEmpty(int, int)
0x525: Push("branch") // @poff=434
0x526: @ GetVariable(Stack[-1], Stack[-2])
0x527: Pop(1)
0x528: Push((int) 0)
0x529: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52a: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52b: Stack[-3] = (int) 1
0x52c: Return(); Pop(2)

0x52d: GOTO 0x533

0x52e: Push((int) 1)
0x52f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-3] = (int) 2
0x532: Return(); Pop(2)

0x533: Stack[-3] = (int) 3
0x534: Return(); Pop(2)

