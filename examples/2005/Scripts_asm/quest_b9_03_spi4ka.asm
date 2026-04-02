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
	W:ui/NPC_Spi4ka.png
	W:ui/NPC_Spi4ka_b.png
	W:oob9Spi4ka_Kapella1
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0053007000690034006b0061002e0070006e0067000000750069002f004e00500043005f0053007000690034006b0061005f0062002e0070006e00670000006f006f006200390053007000690034006b0061005f004b006100700065006c006c006100310000006200720061006e00630068000000
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

RunOp = 0x1b3
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc7 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1b7 Vars = (string)
		EVENT_6 Op = 0x1cb Vars = ()
		EVENT_5 Op = 0x1d8 Vars = ()
		EVENT_7 Op = 0x227 Vars = (int)
		EVENT_45 Op = 0x269 Vars = (bool)
		EVENT_0 Op = 0x275 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2f9

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
0x11: Call2 0x400

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x353

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2fe

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x438

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x436

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x43a

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x43c

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x452

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
0x55: Call2 0x342

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
0x63: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x446

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call2 0x440

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xb1

0x71: Pop(1)
0x72: Push((int) 530337)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 530338)
0x78: Push((int) 32415)
0x79: Push((int) 31725)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 531096)
0x7d: Push((int) 32418)
0x7e: Push((int) 32414)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x93

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xb1

0x85: Pop(1)
0x86: Push((int) 530341)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 530342)
0x8c: Push((int) -1)
0x8d: Push((int) 31729)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: GOTO 0x93

0x91: Return(); Pop(0)

0x92: GOTO 0x62

0x93: PushEmpty(bool)
0x94: Call2 0x43e

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x97: @ lshWaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: PushEmpty(string)
0x9d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9e: Call2 0x3dd

0x9f: Pop(1)
0xa0: GOTO 0x97

0xa1: GOTO 0xb0

0xa2: Push("all") // @poff=138
0xa3: Push("idle") // @poff=146
0xa4: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: @ WaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: Push("all") // @poff=138
0xac: Push("idle") // @poff=146
0xad: @ PlayAnimation(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: GOTO 0xa6

0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: PushEmpty(bool)
0xb3: Call2 0x43e

0xb4: Pop(0)
0xb5: Pop(1); Push((bool) Stack[-1] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: PushEmpty(string, bool)
0xbc: Stack[-3] = Stack[-2]
0xbd: Push("") // @poff=102
0xbe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: Stack[-1] = (bool) 0
0xc1: GOTO 0xc3

0xc2: Stack[-1] = (bool) 1
0xc3: Call2 0x3e4

0xc4: Pop(2)
0xc5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Push((int) 1)
0xc9: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0xca: PushEmpty()
0xcb: Call2 0x3f9

0xcc: Pop(0)
0xcd: Push((int) 31724)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x446

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x440

0xd9: Pop(2)
0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral" // @poff=89
0xdc: Call2 0xb1

0xdd: Pop(1)
0xde: Push((int) 530337)
0xdf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe0: Pop(1)
0xe1: @@@ ClearReplies(); Obj=0 // @poff=116
0xe2: Pop(0)
0xe3: Push((int) 530338)
0xe4: Push((int) 32415)
0xe5: Push((int) 31725)
0xe6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe7: Pop(3)
0xe8: Push((int) 531096)
0xe9: Push((int) 32418)
0xea: Push((int) 32414)
0xeb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral" // @poff=89
0xf0: Call2 0xb1

0xf1: Pop(1)
0xf2: Push((int) 530341)
0xf3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf4: Pop(1)
0xf5: @@@ ClearReplies(); Obj=0 // @poff=116
0xf6: Pop(0)
0xf7: Push((int) 530342)
0xf8: Push((int) -1)
0xf9: Push((int) 31729)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 32418)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xb1

0x103: Pop(1)
0x104: Push((int) 531100)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 531101)
0x10a: Push((int) -1)
0x10b: Push((int) 32419)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 531102)
0x10f: Push((int) 31726)
0x110: Push((int) 32420)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 31726)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral" // @poff=89
0x119: Call2 0xb1

0x11a: Pop(1)
0x11b: Push((int) 530339)
0x11c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11d: Pop(1)
0x11e: @@@ ClearReplies(); Obj=0 // @poff=116
0x11f: Pop(0)
0x120: Push((int) 531202)
0x121: Push((int) 32518)
0x122: Push((int) 32511)
0x123: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x124: Pop(3)
0x125: Push((int) 530340)
0x126: Push((int) -1)
0x127: Push((int) 31727)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 32518)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral" // @poff=89
0x130: Call2 0xb1

0x131: Pop(1)
0x132: Push((int) 531208)
0x133: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x134: Pop(1)
0x135: @@@ ClearReplies(); Obj=0 // @poff=116
0x136: Pop(0)
0x137: Push((int) 531209)
0x138: Push((int) -1)
0x139: Push((int) 32519)
0x13a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13b: Pop(3)
0x13c: Push((int) 531210)
0x13d: Push((int) 32521)
0x13e: Push((int) 32520)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 32521)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral" // @poff=89
0x147: Call2 0xb1

0x148: Pop(1)
0x149: Push((int) 531211)
0x14a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14b: Pop(1)
0x14c: @@@ ClearReplies(); Obj=0 // @poff=116
0x14d: Pop(0)
0x14e: Push((int) 531212)
0x14f: Push((int) -1)
0x150: Push((int) 32522)
0x151: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x152: Pop(3)
0x153: Push((int) 531213)
0x154: Push((int) -1)
0x155: Push((int) 32523)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 32415)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral" // @poff=89
0x15e: Call2 0xb1

0x15f: Pop(1)
0x160: Push((int) 531097)
0x161: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x162: Pop(1)
0x163: @@@ ClearReplies(); Obj=0 // @poff=116
0x164: Pop(0)
0x165: Push((int) 531098)
0x166: Push((int) 32417)
0x167: Push((int) 32416)
0x168: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x169: Pop(3)
0x16a: Push((int) 531207)
0x16b: Push((int) 32417)
0x16c: Push((int) 32516)
0x16d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Push((int) 32417)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral" // @poff=89
0x175: Call2 0xb1

0x176: Pop(1)
0x177: Push((int) 531099)
0x178: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x179: Pop(1)
0x17a: @@@ ClearReplies(); Obj=0 // @poff=116
0x17b: Pop(0)
0x17c: Push((int) 531103)
0x17d: Push((int) 32512)
0x17e: Push((int) 32421)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: Push((int) 531206)
0x182: Push((int) -1)
0x183: Push((int) 32515)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 32512)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral" // @poff=89
0x18c: Call2 0xb1

0x18d: Pop(1)
0x18e: Push((int) 531203)
0x18f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x190: Pop(1)
0x191: @@@ ClearReplies(); Obj=0 // @poff=116
0x192: Pop(0)
0x193: Push((int) 531204)
0x194: Push((int) -1)
0x195: Push((int) 32513)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Push((int) 531205)
0x199: Push((int) -1)
0x19a: Push((int) 32514)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19f: PushEmpty(bool)
0x1a0: Call2 0x43e

0x1a1: Pop(0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a3: @ lshStopAnimation()
0x1a4: Pop(0)
0x1a5: GOTO 0x1a8

0x1a6: @ StopAnimation()
0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: GOTO 0xc8

0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty(int, object)
0x1ad: Stack[-3] = Stack[-1]
0x1ae: Push(-2, 1); TaskCall(1)
0x1af: Call2 0xd

0x1b0: Pop(-2, 1); TaskReturn
0x1b1: Pop(2)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: Call2 0x1dc

0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(bool, bool)
0x1b8: Push("cleanup") // @poff=156
0x1b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1bb: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1bc: @ IsLoaded(Stack[-1])
0x1bd: Pop(0)
0x1be: Pop(0); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: PushEmpty(object)
0x1c1: Call2 0x400

0x1c2: Pop(0)
0x1c3: @ RemoveActor(Stack[-1])
0x1c4: Pop(1)
0x1c5: GOTO 0x1ca

0x1c6: Push("restore") // @poff=172
0x1c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ca: Return(); Pop(2)

0x1cb: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cd: PushEmpty(object)
0x1ce: Call2 0x400

0x1cf: Pop(0)
0x1d0: @ RemoveActor(Stack[-1])
0x1d1: Pop(1)
0x1d2: @ Hold()
0x1d3: Pop(0)
0x1d4: PushEmpty()
0x1d5: Call2 0x24d

0x1d6: Pop(0)
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty()
0x1d9: Call2 0x25c

0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: PushEmpty(bool)
0x1dd: Call2 0x2f9

0x1de: Pop(0)
0x1df: Pop(1); Push((bool) Stack[-1] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty()
0x1e2: Push(-0, 0); TaskCall(0)
0x1e3: Call2 0x0

0x1e4: Pop(-0, 0); TaskReturn
0x1e5: Pop(0)
0x1e6: PushEmpty()
0x1e7: Call2 0x1d8

0x1e8: Pop(0)
0x1e9: @ GetDirection(Stack[-0]T)
0x1ea: Pop(0)
0x1eb: PushEmpty()
0x1ec: Call2 0x292

0x1ed: Pop(0)
0x1ee: GOTO 0x1eb

0x1ef: Return(); Pop(0)

0x1f0: PushEmpty(object, object)
0x1f1: Push("player") // @poff=188
0x1f2: @ FindActor(Stack[-2], Stack[-1])
0x1f3: Pop(1)
0x1f4: Pop(0); Push((bool) Stack[-1] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[-3] = (bool) 0
0x1f7: Return(); Pop(2)

0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-3] = Stack[-1]
0x1fa: Call2 0x2f0

0x1fb: Stack[-2] = Stack[-5]
0x1fc: Pop(2)
0x1fd: Return(); Pop(2)

0x1fe: Stack[-1] = 0
0x1ff: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x200: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x201: @ RotateAsync(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: Return(); Pop(0)

0x204: PushEmpty(object, bool, object, bool)
0x205: Push("player") // @poff=188
0x206: @ FindActor(Stack[-3], Stack[-1])
0x207: Pop(1)
0x208: Pop(0); Push((bool) Stack[-2] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: Stack[-5] = (bool) 0
0x20b: Return(); Pop(4)

0x20c: PushEmpty(float, object)
0x20d: Stack[-4] = Stack[-1]
0x20e: Call2 0x2de

0x20f: Pop(1)
0x210: Push((float)90000.0)
0x211: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-5] = (bool) 0
0x214: Return(); Pop(4)

0x215: @ CanSee(Stack[-1], Stack[-2])
0x216: Pop(0)
0x217: Stack[-1] = Stack[-5]
0x218: Return(); Pop(4)

0x219: Stack[-2] = 0
0x21a: PushEmpty(float, float)
0x21b: Push((int) 8)
0x21c: Push((int) 16)
0x21d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: Push((int) 10)
0x220: @ SetTimer(Stack[-1], Stack[-2])
0x221: Pop(1)
0x222: Return(); Pop(2)

0x223: Push((int) 10)
0x224: @ KillTimer(Stack[-1])
0x225: Pop(1)
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: Push((int) 10)
0x229: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x22b: PushEmpty()
0x22c: Call2 0x223

0x22d: Pop(0)
0x22e: PushEmpty(bool)
0x22f: Stack[-1] = (bool) 0
0x230: PushEmpty(bool)
0x231: Call2 0x2f9

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: PushEmpty(bool)
0x235: Call2 0x204

0x236: Pop(0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Stack[-1] = (bool) 1
0x239: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x23a: PushEmpty(bool)
0x23b: Call2 0x1f0

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: PushEmpty(object)
0x240: Call2 0x400

0x241: Stack[-1] = Stack[-2]
0x242: Pop(1)
0x243: Call2 0x38d

0x244: Pop(2)
0x245: GOTO 0x24c

0x246: PushEmpty()
0x247: Call2 0x1ff

0x248: Pop(0)
0x249: PushEmpty()
0x24a: Call2 0x21a

0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: PushEmpty()
0x24e: Call2 0x2d9

0x24f: Pop(0)
0x250: PushEmpty()
0x251: Call2 0x223

0x252: Pop(0)
0x253: @ lshStopSpeech()
0x254: Pop(0)
0x255: @ lshStopAnimation()
0x256: Pop(0)
0x257: @ StopAsync()
0x258: Pop(0)
0x259: @ Hold()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: @ StopGroup0()
0x25d: Pop(0)
0x25e: PushEmpty()
0x25f: Call2 0x223

0x260: Pop(0)
0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral" // @poff=89
0x263: Call2 0x3dd

0x264: Pop(1)
0x265: PushEmpty()
0x266: Call2 0x21a

0x267: Pop(0)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: Push(Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26c: PushEmpty()
0x26d: Call2 0x21a

0x26e: Pop(0)
0x26f: GOTO 0x274

0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral" // @poff=89
0x272: Call2 0x3dd

0x273: Pop(1)
0x274: Return(); Pop(0)

0x275: PushEmpty(bool, bool)
0x276: @ IsOverrideActive(Stack[-1])
0x277: Pop(0)
0x278: Pop(0); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x27a: EventDisable(0)
0x27b: PushEmpty()
0x27c: Call2 0x2d9

0x27d: Pop(0)
0x27e: PushEmpty(bool, object)
0x27f: Stack[-5] = Stack[-1]
0x280: Call2 0x2f0

0x281: Pop(2)
0x282: EventEnable(0)
0x283: PushEmpty(object)
0x284: Stack[-4] = Stack[-1]
0x285: Call2 0x1ab

0x286: Pop(1)
0x287: PushEmpty(string)
0x288: Stack[-1] = "Neutral" // @poff=89
0x289: Call2 0x3dd

0x28a: Pop(1)
0x28b: PushEmpty()
0x28c: Call2 0x223

0x28d: Pop(0)
0x28e: PushEmpty()
0x28f: Call2 0x21a

0x290: Pop(0)
0x291: Return(); Pop(2)

0x292: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x293: @ WaitForAnimEnd()
0x294: Pop(0)
0x295: PushEmpty(bool)
0x296: Call2 0x2f9

0x297: Pop(0)
0x298: Pop(1); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: Return(); Pop(12)

0x29b: PushEmpty(int)
0x29c: Call2 0x425

0x29d: Stack[-1] = Stack[-7]
0x29e: Pop(1)
0x29f: Stack[-5] = (int) 0
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 0
0x2a2: Push((int) 5)
0x2a3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a5: PushEmpty(bool)
0x2a6: Call2 0x2f9

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: Stack[-1] = (bool) 1
0x2aa: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ab: Pop(0); Push((bool) Stack[-6] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2ad: Push((int) 3)
0x2ae: @ Sleep(Stack[-1], Stack[-5])
0x2af: Pop(1)
0x2b0: Pop(0); Push((bool) Stack[-4] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x2d4

0x2b3: GOTO 0x2c9

0x2b4: @ irand(Stack[-3], Stack[-6])
0x2b5: Pop(0)
0x2b6: Push((int) 5)
0x2b7: @ irand(Stack[-3], Stack[-1])
0x2b8: Pop(1)
0x2b9: Push((int) 0)
0x2ba: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: Stack[-3] = (int) 0
0x2bd: Push("all") // @poff=138
0x2be: PushEmpty(string, int)
0x2bf: Stack[-6] = Stack[-1]
0x2c0: Call2 0x41e

0x2c1: Pop(1)
0x2c2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: @ WaitForAnimEnd(Stack[-1])
0x2c5: Pop(0)
0x2c6: Pop(0); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2d4

0x2c9: PushEmpty(bool)
0x2ca: Call2 0x2d7

0x2cb: Pop(0)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2d4

0x2cf: @ ResetAAS()
0x2d0: Pop(0)
0x2d1: Push((int) 1)
0x2d2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2d3: GOTO 0x2a0

0x2d4: @ ResetAAS()
0x2d5: Pop(0)
0x2d6: Return(); Pop(12)

0x2d7: Stack[-1] = (bool) 1
0x2d8: Return(); Pop(0)

0x2d9: @ StopAnimation()
0x2da: Pop(0)
0x2db: @ StopGroup0()
0x2dc: Pop(0)
0x2dd: Return(); Pop(0)

0x2de: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2df: @ GetPosition(Stack[-3])
0x2e0: Pop(0)
0x2e1: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2e2: Pop(0)
0x2e3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2e4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2e5: Return(); Pop(6)

0x2e6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2e7: @ GetPosition(Stack[-3])
0x2e8: Pop(0)
0x2e9: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2ea: Push(CvectorIndex(Stack[-2], 0))
0x2eb: Push(CvectorIndex(Stack[-3], 2))
0x2ec: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2ed: Pop(2)
0x2ee: Stack[-1] = Stack[-8]
0x2ef: Return(); Pop(6)

0x2f0: PushEmpty(cvector, cvector)
0x2f1: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2f2: Pop(0)
0x2f3: PushEmpty(bool, cvector)
0x2f4: Stack[-3] = Stack[-1]
0x2f5: Call2 0x2e6

0x2f6: Stack[-2] = Stack[-6]
0x2f7: Pop(2)
0x2f8: Return(); Pop(2)

0x2f9: PushEmpty(bool, bool)
0x2fa: @ IsLoaded(Stack[-1])
0x2fb: Pop(0)
0x2fc: Stack[-1] = Stack[-3]
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ff: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x300: Pop(0)
0x301: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x302: Pop(0)
0x303: Push(CvectorIndex(Stack[-8], 1))
0x304: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x305: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x306: @ GetPosition(Stack[-7])
0x307: Pop(0)
0x308: @ GetEyesHeight(Stack[-9])
0x309: Pop(0)
0x30a: Push(CvectorIndex(Stack[-7], 1))
0x30b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x30c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x30d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x30e: Push(CvectorIndex(Stack[-6], 1))
0x30f: Stack[-1] = (int) 0
0x310: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x311: Pop(0); Push(Stack[-6] | Stack[-6]);
0x312: Pop(1); Push(Sqrt(Stack[-1]))
0x313: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x314: Stack[-5] = -Stack[-6]; Pop(0);
0x315: Pop(0); Push(Stack[-6] * Stack[-19]);
0x316: PushEmpty(cvector, cvector)
0x317: Push([0.0, 1.0, 0.0])
0x318: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x319: Call2 0x406

0x31a: Pop(1)
0x31b: Push((int) 25)
0x31c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x31d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31e: Push([0.0, 10.0, 0.0])
0x31f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x320: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x321: @ IsOverrideActive(Stack[-2])
0x322: Pop(0)
0x323: Push(Stack[-2])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-21] = (bool) 0
0x326: Return(); Pop(18)

0x327: @ StopWorld()
0x328: Pop(0)
0x329: @ CameraTransit(Stack[-3], Stack[-5])
0x32a: Pop(0)
0x32b: Push(CvectorIndex(Stack[-4], 0))
0x32c: Push(CvectorIndex(Stack[-5], 2))
0x32d: @ Rotate(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: PushEmpty(bool)
0x330: Call2 0x43e

0x331: Pop(0)
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: GOTO 0x33c

0x334: Push("head") // @poff=228
0x335: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x336: Pop(1)
0x337: Push(Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x339: Push("head") // @poff=228
0x33a: @ LookAsyncCamera(Stack[-1])
0x33b: Pop(1)
0x33c: @ CameraWaitForPlayFinish()
0x33d: Pop(0)
0x33e: @ ResumeWorld()
0x33f: Pop(0)
0x340: Stack[-21] = (bool) 1
0x341: Return(); Pop(18)

0x342: PushEmpty(bool, bool)
0x343: @ CameraSwitchToNormal()
0x344: Pop(0)
0x345: PushEmpty(bool)
0x346: Call2 0x43e

0x347: Pop(0)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: GOTO 0x352

0x34a: Push("head") // @poff=228
0x34b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34c: Pop(1)
0x34d: Push(Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34f: Push("head") // @poff=228
0x350: @ UnlookAsync(Stack[-1])
0x351: Pop(1)
0x352: Return(); Pop(2)

0x353: PushEmpty(int, int, int, int)
0x354: Push("voice_common") // @poff=238
0x355: @ GetVariable(Stack[-1], Stack[-3])
0x356: Pop(1)
0x357: Push(Stack[-2])
0x358: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x359: PushEmpty(bool, object)
0x35a: Stack[-7] = Stack[-1]
0x35b: Call2 0x38d

0x35c: Pop(1)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35f: PushEmpty(bool, object)
0x360: Stack[-7] = Stack[-1]
0x361: Call2 0x3b2

0x362: Pop(1)
0x363: Pop(1); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-6] = (bool) 0
0x366: Return(); Pop(4)

0x367: Push((int) 2)
0x368: @ irand(Stack[-2], Stack[-1])
0x369: Pop(1)
0x36a: Push(Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36c: Push("voice_common") // @poff=238
0x36d: Push((int) 1)
0x36e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x36f: Push((int) 3)
0x370: Pop(2); Push(Stack[-2] % Stack[-1]);
0x371: @ SetVariable(Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: GOTO 0x378

0x374: Push("voice_common") // @poff=238
0x375: Push((int) 0)
0x376: @ SetVariable(Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: GOTO 0x38b

0x379: PushEmpty(bool, object)
0x37a: Stack[-7] = Stack[-1]
0x37b: Call2 0x3b2

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x37f: PushEmpty(bool, object)
0x380: Stack[-7] = Stack[-1]
0x381: Call2 0x38d

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-6] = (bool) 0
0x386: Return(); Pop(4)

0x387: Push("voice_common") // @poff=238
0x388: Push((int) 1)
0x389: @ SetVariable(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: Stack[-6] = (bool) 1
0x38c: Return(); Pop(4)

0x38d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x38e: Stack[-5] = "c" // @poff=264
0x38f: Stack[-4] = (int) 0
0x390: Push((int) 1)
0x391: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-5] + Stack[-1]);
0x394: Pop(1); Push(Stack[-6] + Stack[-1]);
0x395: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x396: Pop(1)
0x397: Pop(0); Push((bool) Stack[-3] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x39d

0x39a: Push((int) 1)
0x39b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x39c: GOTO 0x390

0x39d: Pop(0); Push((bool) Stack[-4] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-12] = (bool) 0
0x3a0: Return(); Pop(10)

0x3a1: Stack[-2] = (int) 0
0x3a2: Push((int) 1)
0x3a3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: @ irand(Stack[-2], Stack[-4])
0x3a6: Pop(0)
0x3a7: Push((int) 1)
0x3a8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3aa: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3ab: Pop(1)
0x3ac: PushEmpty(bool, string)
0x3ad: Stack[-3] = Stack[-1]
0x3ae: Call2 0x3ea

0x3af: Stack[-2] = Stack[-14]
0x3b0: Pop(2)
0x3b1: Return(); Pop(10)

0x3b2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b3: Push("d") // @poff=234
0x3b4: PushEmpty(int)
0x3b5: Call2 0x415

0x3b6: Pop(0)
0x3b7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b8: Push("m") // @poff=292
0x3b9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3ba: Stack[-4] = (int) 0
0x3bb: Push((int) 1)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3bd: Push((int) 1)
0x3be: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3bf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3c1: Pop(1)
0x3c2: Pop(0); Push((bool) Stack[-3] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: GOTO 0x3c8

0x3c5: Push((int) 1)
0x3c6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c7: GOTO 0x3bb

0x3c8: Pop(0); Push((bool) Stack[-4] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3ca: Stack[-12] = (bool) 0
0x3cb: Return(); Pop(10)

0x3cc: Stack[-2] = (int) 0
0x3cd: Push((int) 1)
0x3ce: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: @ irand(Stack[-2], Stack[-4])
0x3d1: Pop(0)
0x3d2: Push((int) 1)
0x3d3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3d6: Pop(1)
0x3d7: PushEmpty(bool, string)
0x3d8: Stack[-3] = Stack[-1]
0x3d9: Call2 0x3ea

0x3da: Stack[-2] = Stack[-14]
0x3db: Pop(2)
0x3dc: Return(); Pop(10)

0x3dd: PushEmpty(float, float, float, float)
0x3de: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3df: Pop(0)
0x3e0: Push((bool) 0)
0x3e1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(1)
0x3e3: Return(); Pop(4)

0x3e4: PushEmpty(float, float, float, float)
0x3e5: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3e6: Pop(0)
0x3e7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3e8: Pop(0)
0x3e9: Return(); Pop(4)

0x3ea: PushEmpty(bool, bool)
0x3eb: PushEmpty(bool)
0x3ec: Call2 0x43e

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3ef: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3f0: Pop(0)
0x3f1: Push(Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f3: @ lshPlaySpeech(Stack[-3])
0x3f4: Pop(0)
0x3f5: Stack[-4] = (bool) 1
0x3f6: Return(); Pop(2)

0x3f7: Stack[-4] = (bool) 0
0x3f8: Return(); Pop(2)

0x3f9: PushEmpty(bool)
0x3fa: Call2 0x43e

0x3fb: Pop(0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: @ lshStopSpeech()
0x3fe: Pop(0)
0x3ff: Return(); Pop(0)

0x400: PushEmpty(object, object)
0x401: @ self(Stack[-1])
0x402: Pop(0)
0x403: Stack[-1] = Stack[-3]
0x404: Return(); Pop(2)

0x405: Stack[-1] = 0
0x406: PushEmpty(float, float)
0x407: Pop(0); Push(Stack[-3] | Stack[-3]);
0x408: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x409: Push((float)9.999999974752427e-07)
0x40a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-4] = [0.0, 0.0, 0.0]
0x40d: Return(); Pop(2)

0x40e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40f: Return(); Pop(2)

0x410: PushEmpty(int, int)
0x411: @ GetVariable(Stack[-3], Stack[-1])
0x412: Pop(0)
0x413: Stack[-1] = Stack[-4]
0x414: Return(); Pop(2)

0x415: PushEmpty(float, float)
0x416: @ GetGameTime(Stack[-1])
0x417: Pop(0)
0x418: Push((int) 1)
0x419: PushEmpty(int)
0x41a: Push((int) 24)
0x41b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x41c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41d: Return(); Pop(2)

0x41e: PushEmpty(string, string)
0x41f: Stack[-1] = "idle" // @poff=146
0x420: Push(Stack[-3])
0x421: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x422: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x423: Stack[-1] = Stack[-4]
0x424: Return(); Pop(2)

0x425: PushEmpty(int, bool, int, bool)
0x426: Stack[-2] = (int) 0
0x427: Push("all") // @poff=138
0x428: PushEmpty(string, int)
0x429: Stack[-5] = Stack[-1]
0x42a: Call2 0x41e

0x42b: Pop(1)
0x42c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: Pop(0); Push((bool) Stack[-1] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: GOTO 0x434

0x431: Push((int) 1)
0x432: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x433: GOTO 0x427

0x434: Stack[-2] = Stack[-5]
0x435: Return(); Pop(4)

0x436: Stack[-1] = (int) 515552
0x437: Return(); Pop(0)

0x438: Stack[-1] = (int) 502877
0x439: Return(); Pop(0)

0x43a: Stack[-1] = "ui/NPC_Spi4ka.png" // @poff=296
0x43b: Return(); Pop(0)

0x43c: Stack[-1] = "ui/NPC_Spi4ka_b.png" // @poff=332
0x43d: Return(); Pop(0)

0x43e: Stack[-1] = (bool) 1
0x43f: Return(); Pop(0)

0x440: PushEmpty()
0x441: Push("oob9Spi4ka_Kapella1") // @poff=372
0x442: Push((int) 1)
0x443: @ SetVariable(Stack[-2], Stack[-1])
0x444: Pop(2)
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: PushEmpty(int, string)
0x448: Stack[-1] = "oob9Spi4ka_Kapella1" // @poff=372
0x449: Call2 0x410

0x44a: Pop(1)
0x44b: Push((int) 0)
0x44c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-2] = (bool) 1
0x44f: Return(); Pop(0)

0x450: Stack[-2] = (bool) 0
0x451: Return(); Pop(0)

0x452: PushEmpty(int, int)
0x453: Push("branch") // @poff=412
0x454: @ GetVariable(Stack[-1], Stack[-2])
0x455: Pop(1)
0x456: Push((int) 0)
0x457: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: Stack[-3] = (int) 1
0x45a: Return(); Pop(2)

0x45b: GOTO 0x461

0x45c: Push((int) 1)
0x45d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-3] = (int) 2
0x460: Return(); Pop(2)

0x461: Stack[-3] = (int) 3
0x462: Return(); Pop(2)

