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
	W:oob11Klara1
	W:b11q01KlaraWillHelp
	W:oob11Klara2
	W:oob11Klara3
	W:b11q01
	W:b9KlaraLetter
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e00670000006f006f006200310031004b006c00610072006100310000006200310031007100300031004b006c00610072006100570069006c006c00480065006c00700000006f006f006200310031004b006c00610072006100320000006f006f006200310031004b006c00610072006100330000006200310031007100300031000000620039004b006c006100720061004c006500740074006500720000006200720061006e00630068000000
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

RunOp = 0x33e
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x125 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x342 Vars = (string)
		EVENT_6 Op = 0x356 Vars = ()
		EVENT_5 Op = 0x363 Vars = ()
		EVENT_7 Op = 0x3b2 Vars = (int)
		EVENT_45 Op = 0x3f4 Vars = (bool)
		EVENT_0 Op = 0x400 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x484

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
0x11: Call2 0x58b

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x4de

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x489

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x5c3

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x5c1

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x5c5

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x5c7

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x637

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
0x55: Call2 0x4cd

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
0x63: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 1
0x66: PushEmpty(bool)
0x67: Stack[-1] = (bool) 0
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x5e3

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x5fb

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = (bool) 1
0x73: IF (Stack[-1] == 1) GOTO 0x83; Pop(1)

0x74: PushEmpty(bool)
0x75: Stack[-1] = (bool) 0
0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78: Call2 0x5ef

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x5fb

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 1
0x81: IF (Stack[-1] == 1) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 0
0x83: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x5cb

0x88: Pop(2)
0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral" // @poff=89
0x8b: Call2 0x10f

0x8c: Pop(1)
0x8d: Push((int) 522101)
0x8e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8f: Pop(1)
0x90: @@@ ClearReplies(); Obj=0 // @poff=116
0x91: Pop(0)
0x92: Push((int) 522102)
0x93: Push((int) 24452)
0x94: Push((int) 23269)
0x95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x96: Pop(3)
0x97: Push((int) 522103)
0x98: Push((int) 24448)
0x99: Push((int) 23270)
0x9a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9b: Pop(3)
0x9c: GOTO 0xf1

0x9d: PushEmpty(string)
0x9e: Stack[-1] = "Neutral" // @poff=89
0x9f: Call2 0x10f

0xa0: Pop(1)
0xa1: Push((int) 522104)
0xa2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa3: Pop(1)
0xa4: @@@ ClearReplies(); Obj=0 // @poff=116
0xa5: Pop(0)
0xa6: PushEmpty(bool)
0xa7: Stack[-1] = (bool) 0
0xa8: PushEmpty(bool)
0xa9: Stack[-1] = (bool) 0
0xaa: PushEmpty(bool, object)
0xab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac: Call2 0x5e3

0xad: Pop(1)
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call2 0x5ef

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Stack[-1] = (bool) 1
0xb5: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb6: PushEmpty(bool, object)
0xb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Call2 0x607

0xb9: Pop(1)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 523263)
0xbf: Push((int) 24464)
0xc0: Push((int) 24463)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: PushEmpty(bool)
0xc4: Stack[-1] = (bool) 0
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x607

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Call2 0x613

0xcd: Pop(1)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Stack[-1] = (bool) 1
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 522105)
0xd2: Push((int) 24443)
0xd3: Push((int) 23272)
0xd4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd5: Pop(3)
0xd6: PushEmpty(bool)
0xd7: Stack[-1] = (bool) 0
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x61f

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x62b

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Stack[-1] = (bool) 1
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 534577)
0xe5: Push((int) 36216)
0xe6: Push((int) 36215)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Push((int) 523242)
0xea: Push((int) -1)
0xeb: Push((int) 24442)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: GOTO 0xf1

0xef: Return(); Pop(0)

0xf0: GOTO 0x62

0xf1: PushEmpty(bool)
0xf2: Call2 0x5c9

0xf3: Pop(0)
0xf4: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf5: @ lshWaitForAnimEnd()
0xf6: Pop(0)
0xf7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: GOTO 0xff

0xfa: PushEmpty(string)
0xfb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfc: Call2 0x568

0xfd: Pop(1)
0xfe: GOTO 0xf5

0xff: GOTO 0x10e

0x100: Push("all") // @poff=138
0x101: Push("idle") // @poff=146
0x102: @ PlayAnimation(Stack[-2], Stack[-1])
0x103: Pop(2)
0x104: @ WaitForAnimEnd()
0x105: Pop(0)
0x106: Push( Stack[3 + Tasks[-1].StackPointer] )
0x107: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x108: GOTO 0x10e

0x109: Push("all") // @poff=138
0x10a: Push("idle") // @poff=146
0x10b: @ PlayAnimation(Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: GOTO 0x104

0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty(bool)
0x111: Call2 0x5c9

0x112: Pop(0)
0x113: Pop(1); Push((bool) Stack[-1] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Return(); Pop(0)

0x116: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Return(); Pop(0)

0x119: PushEmpty(string, bool)
0x11a: Stack[-3] = Stack[-2]
0x11b: Push("") // @poff=102
0x11c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11e: Stack[-1] = (bool) 0
0x11f: GOTO 0x121

0x120: Stack[-1] = (bool) 1
0x121: Call2 0x56f

0x122: Pop(2)
0x123: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x124: Return(); Pop(0)

0x125: PushEmpty()
0x126: Push((int) 1)
0x127: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x128: PushEmpty()
0x129: Call2 0x584

0x12a: Pop(0)
0x12b: Push((int) 24461)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x5d1

0x132: Pop(2)
0x133: Push((int) 24478)
0x134: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x5d1

0x13a: Pop(2)
0x13b: Push((int) 24467)
0x13c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: PushEmpty(object, object)
0x13f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x140: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x141: Call2 0x5d1

0x142: Pop(2)
0x143: Push((int) 24468)
0x144: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x146: PushEmpty(object, object)
0x147: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x148: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x149: Call2 0x5d1

0x14a: Pop(2)
0x14b: Push((int) 23272)
0x14c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: PushEmpty(object, object)
0x14f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x150: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x151: Call2 0x5d7

0x152: Pop(2)
0x153: Push((int) 36215)
0x154: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x156: PushEmpty(object, object)
0x157: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x158: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x159: Call2 0x5dd

0x15a: Pop(2)
0x15b: Push((int) 23268)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x15e: PushEmpty(bool)
0x15f: Stack[-1] = (bool) 1
0x160: PushEmpty(bool)
0x161: Stack[-1] = (bool) 0
0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x5e3

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x5fb

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: Stack[-1] = (bool) 1
0x16d: IF (Stack[-1] == 1) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(bool)
0x16f: Stack[-1] = (bool) 0
0x170: PushEmpty(bool, object)
0x171: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x172: Call2 0x5ef

0x173: Pop(1)
0x174: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0x5fb

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 1) GOTO 0x17d; Pop(1)

0x17c: Stack[-1] = (bool) 0
0x17d: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x17e: PushEmpty(object, object)
0x17f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x180: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181: Call2 0x5cb

0x182: Pop(2)
0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral" // @poff=89
0x185: Call2 0x10f

0x186: Pop(1)
0x187: Push((int) 522101)
0x188: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x189: Pop(1)
0x18a: @@@ ClearReplies(); Obj=0 // @poff=116
0x18b: Pop(0)
0x18c: Push((int) 522102)
0x18d: Push((int) 24452)
0x18e: Push((int) 23269)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Push((int) 522103)
0x192: Push((int) 24448)
0x193: Push((int) 23270)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral" // @poff=89
0x199: Call2 0x10f

0x19a: Pop(1)
0x19b: Push((int) 522104)
0x19c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19d: Pop(1)
0x19e: @@@ ClearReplies(); Obj=0 // @poff=116
0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool)
0x1a3: Stack[-1] = (bool) 0
0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call2 0x5e3

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0x5ef

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b0: PushEmpty(bool, object)
0x1b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Call2 0x607

0x1b3: Pop(1)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: Push((int) 523263)
0x1b9: Push((int) 24464)
0x1ba: Push((int) 24463)
0x1bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bc: Pop(3)
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x607

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call2 0x613

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-1] = (bool) 1
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: Push((int) 522105)
0x1cc: Push((int) 24443)
0x1cd: Push((int) 23272)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: PushEmpty(bool)
0x1d1: Stack[-1] = (bool) 0
0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Call2 0x61f

0x1d5: Pop(1)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d7: PushEmpty(bool, object)
0x1d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Call2 0x62b

0x1da: Pop(1)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: Push((int) 534577)
0x1df: Push((int) 36216)
0x1e0: Push((int) 36215)
0x1e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e2: Pop(3)
0x1e3: Push((int) 523242)
0x1e4: Push((int) -1)
0x1e5: Push((int) 24442)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 36216)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral" // @poff=89
0x1ee: Call2 0x10f

0x1ef: Pop(1)
0x1f0: Push((int) 534578)
0x1f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f2: Pop(1)
0x1f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f4: Pop(0)
0x1f5: Push((int) 534579)
0x1f6: Push((int) 36219)
0x1f7: Push((int) 36217)
0x1f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f9: Pop(3)
0x1fa: Push((int) 534580)
0x1fb: Push((int) -1)
0x1fc: Push((int) 36218)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 36219)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral" // @poff=89
0x205: Call2 0x10f

0x206: Pop(1)
0x207: Push((int) 534581)
0x208: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x209: Pop(1)
0x20a: @@@ ClearReplies(); Obj=0 // @poff=116
0x20b: Pop(0)
0x20c: Push((int) 534582)
0x20d: Push((int) -1)
0x20e: Push((int) 36220)
0x20f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x210: Pop(3)
0x211: Push((int) 534583)
0x212: Push((int) -1)
0x213: Push((int) 36221)
0x214: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 24443)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Neutral" // @poff=89
0x21c: Call2 0x10f

0x21d: Pop(1)
0x21e: Push((int) 523243)
0x21f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x220: Pop(1)
0x221: @@@ ClearReplies(); Obj=0 // @poff=116
0x222: Pop(0)
0x223: Push((int) 523244)
0x224: Push((int) -1)
0x225: Push((int) 24444)
0x226: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x227: Pop(3)
0x228: Push((int) 523245)
0x229: Push((int) 24446)
0x22a: Push((int) 24445)
0x22b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 24446)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral" // @poff=89
0x233: Call2 0x10f

0x234: Pop(1)
0x235: Push((int) 523246)
0x236: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x237: Pop(1)
0x238: @@@ ClearReplies(); Obj=0 // @poff=116
0x239: Pop(0)
0x23a: Push((int) 523247)
0x23b: Push((int) -1)
0x23c: Push((int) 24447)
0x23d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 24464)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Neutral" // @poff=89
0x245: Call2 0x10f

0x246: Pop(1)
0x247: Push((int) 523264)
0x248: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x249: Pop(1)
0x24a: @@@ ClearReplies(); Obj=0 // @poff=116
0x24b: Pop(0)
0x24c: Push((int) 523265)
0x24d: Push((int) 24466)
0x24e: Push((int) 24465)
0x24f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x250: Pop(3)
0x251: Return(); Pop(0)

0x252: Push((int) 24466)
0x253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x255: PushEmpty(string)
0x256: Stack[-1] = "Neutral" // @poff=89
0x257: Call2 0x10f

0x258: Pop(1)
0x259: Push((int) 523266)
0x25a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25b: Pop(1)
0x25c: @@@ ClearReplies(); Obj=0 // @poff=116
0x25d: Pop(0)
0x25e: Push((int) 523267)
0x25f: Push((int) -1)
0x260: Push((int) 24467)
0x261: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x262: Pop(3)
0x263: Push((int) 523268)
0x264: Push((int) -1)
0x265: Push((int) 24468)
0x266: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x267: Pop(3)
0x268: Return(); Pop(0)

0x269: Push((int) 24448)
0x26a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x26c: PushEmpty(string)
0x26d: Stack[-1] = "Neutral" // @poff=89
0x26e: Call2 0x10f

0x26f: Pop(1)
0x270: Push((int) 523248)
0x271: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x272: Pop(1)
0x273: @@@ ClearReplies(); Obj=0 // @poff=116
0x274: Pop(0)
0x275: Push((int) 523250)
0x276: Push((int) 24452)
0x277: Push((int) 24450)
0x278: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x279: Pop(3)
0x27a: Push((int) 523249)
0x27b: Push((int) 24452)
0x27c: Push((int) 24449)
0x27d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27e: Pop(3)
0x27f: Return(); Pop(0)

0x280: Push((int) 24452)
0x281: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x283: PushEmpty(string)
0x284: Stack[-1] = "Neutral" // @poff=89
0x285: Call2 0x10f

0x286: Pop(1)
0x287: Push((int) 523252)
0x288: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x289: Pop(1)
0x28a: @@@ ClearReplies(); Obj=0 // @poff=116
0x28b: Pop(0)
0x28c: Push((int) 523253)
0x28d: Push((int) 24451)
0x28e: Push((int) 24453)
0x28f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x290: Pop(3)
0x291: Return(); Pop(0)

0x292: Push((int) 24451)
0x293: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x295: PushEmpty(string)
0x296: Stack[-1] = "Neutral" // @poff=89
0x297: Call2 0x10f

0x298: Pop(1)
0x299: Push((int) 523251)
0x29a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29b: Pop(1)
0x29c: @@@ ClearReplies(); Obj=0 // @poff=116
0x29d: Pop(0)
0x29e: Push((int) 523254)
0x29f: Push((int) 24456)
0x2a0: Push((int) 24454)
0x2a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a2: Pop(3)
0x2a3: Push((int) 523255)
0x2a4: Push((int) 24469)
0x2a5: Push((int) 24455)
0x2a6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 24469)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral" // @poff=89
0x2ae: Call2 0x10f

0x2af: Pop(1)
0x2b0: Push((int) 523269)
0x2b1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b2: Pop(1)
0x2b3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b4: Pop(0)
0x2b5: Push((int) 523270)
0x2b6: Push((int) 24456)
0x2b7: Push((int) 24470)
0x2b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: Push((int) 24456)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Neutral" // @poff=89
0x2c0: Call2 0x10f

0x2c1: Pop(1)
0x2c2: Push((int) 523256)
0x2c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c4: Pop(1)
0x2c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c6: Pop(0)
0x2c7: Push((int) 523257)
0x2c8: Push((int) 24458)
0x2c9: Push((int) 24457)
0x2ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cb: Pop(3)
0x2cc: Push((int) 523271)
0x2cd: Push((int) 24473)
0x2ce: Push((int) 24472)
0x2cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d0: Pop(3)
0x2d1: Return(); Pop(0)

0x2d2: Push((int) 24473)
0x2d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Neutral" // @poff=89
0x2d7: Call2 0x10f

0x2d8: Pop(1)
0x2d9: Push((int) 523272)
0x2da: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2db: Pop(1)
0x2dc: @@@ ClearReplies(); Obj=0 // @poff=116
0x2dd: Pop(0)
0x2de: Push((int) 523273)
0x2df: Push((int) 24475)
0x2e0: Push((int) 24474)
0x2e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e2: Pop(3)
0x2e3: Push((int) 523275)
0x2e4: Push((int) 24475)
0x2e5: Push((int) 24476)
0x2e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e7: Pop(3)
0x2e8: Return(); Pop(0)

0x2e9: Push((int) 24475)
0x2ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = "Neutral" // @poff=89
0x2ee: Call2 0x10f

0x2ef: Pop(1)
0x2f0: Push((int) 523274)
0x2f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f2: Pop(1)
0x2f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f4: Pop(0)
0x2f5: Push((int) 523276)
0x2f6: Push((int) -1)
0x2f7: Push((int) 24478)
0x2f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f9: Pop(3)
0x2fa: Push((int) 523277)
0x2fb: Push((int) -1)
0x2fc: Push((int) 24479)
0x2fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 24458)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral" // @poff=89
0x305: Call2 0x10f

0x306: Pop(1)
0x307: Push((int) 523258)
0x308: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x309: Pop(1)
0x30a: @@@ ClearReplies(); Obj=0 // @poff=116
0x30b: Pop(0)
0x30c: Push((int) 523259)
0x30d: Push((int) 24460)
0x30e: Push((int) 24459)
0x30f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x310: Pop(3)
0x311: Return(); Pop(0)

0x312: Push((int) 24460)
0x313: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x315: PushEmpty(string)
0x316: Stack[-1] = "Neutral" // @poff=89
0x317: Call2 0x10f

0x318: Pop(1)
0x319: Push((int) 523260)
0x31a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x31b: Pop(1)
0x31c: @@@ ClearReplies(); Obj=0 // @poff=116
0x31d: Pop(0)
0x31e: Push((int) 523261)
0x31f: Push((int) -1)
0x320: Push((int) 24461)
0x321: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x322: Pop(3)
0x323: Push((int) 523262)
0x324: Push((int) -1)
0x325: Push((int) 24462)
0x326: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x327: Pop(3)
0x328: Return(); Pop(0)

0x329: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x32a: PushEmpty(bool)
0x32b: Call2 0x5c9

0x32c: Pop(0)
0x32d: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32e: @ lshStopAnimation()
0x32f: Pop(0)
0x330: GOTO 0x333

0x331: @ StopAnimation()
0x332: Pop(0)
0x333: Return(); Pop(0)

0x334: GOTO 0x126

0x335: Return(); Pop(0)

0x336: PushEmpty()
0x337: PushEmpty(int, object)
0x338: Stack[-3] = Stack[-1]
0x339: Push(-2, 1); TaskCall(1)
0x33a: Call2 0xd

0x33b: Pop(-2, 1); TaskReturn
0x33c: Pop(2)
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: Call2 0x367

0x340: Pop(0)
0x341: Return(); Pop(0)

0x342: PushEmpty(bool, bool)
0x343: Push("cleanup") // @poff=156
0x344: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x346: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x347: @ IsLoaded(Stack[-1])
0x348: Pop(0)
0x349: Pop(0); Push((bool) Stack[-1] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34b: PushEmpty(object)
0x34c: Call2 0x58b

0x34d: Pop(0)
0x34e: @ RemoveActor(Stack[-1])
0x34f: Pop(1)
0x350: GOTO 0x355

0x351: Push("restore") // @poff=172
0x352: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x355: Return(); Pop(2)

0x356: Push( Stack[1 + Tasks[-1].StackPointer] )
0x357: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x358: PushEmpty(object)
0x359: Call2 0x58b

0x35a: Pop(0)
0x35b: @ RemoveActor(Stack[-1])
0x35c: Pop(1)
0x35d: @ Hold()
0x35e: Pop(0)
0x35f: PushEmpty()
0x360: Call2 0x3d8

0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: Call2 0x3e7

0x365: Pop(0)
0x366: Return(); Pop(0)

0x367: PushEmpty(bool)
0x368: Call2 0x484

0x369: Pop(0)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36c: PushEmpty()
0x36d: Push(-0, 0); TaskCall(0)
0x36e: Call2 0x0

0x36f: Pop(-0, 0); TaskReturn
0x370: Pop(0)
0x371: PushEmpty()
0x372: Call2 0x363

0x373: Pop(0)
0x374: @ GetDirection(Stack[-0]T)
0x375: Pop(0)
0x376: PushEmpty()
0x377: Call2 0x41d

0x378: Pop(0)
0x379: GOTO 0x376

0x37a: Return(); Pop(0)

0x37b: PushEmpty(object, object)
0x37c: Push("player") // @poff=188
0x37d: @ FindActor(Stack[-2], Stack[-1])
0x37e: Pop(1)
0x37f: Pop(0); Push((bool) Stack[-1] == 0)
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-3] = (bool) 0
0x382: Return(); Pop(2)

0x383: PushEmpty(bool, object)
0x384: Stack[-3] = Stack[-1]
0x385: Call2 0x47b

0x386: Stack[-2] = Stack[-5]
0x387: Pop(2)
0x388: Return(); Pop(2)

0x389: Stack[-1] = 0
0x38a: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x38b: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x38c: @ RotateAsync(Stack[-2], Stack[-1])
0x38d: Pop(2)
0x38e: Return(); Pop(0)

0x38f: PushEmpty(object, bool, object, bool)
0x390: Push("player") // @poff=188
0x391: @ FindActor(Stack[-3], Stack[-1])
0x392: Pop(1)
0x393: Pop(0); Push((bool) Stack[-2] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x395: Stack[-5] = (bool) 0
0x396: Return(); Pop(4)

0x397: PushEmpty(float, object)
0x398: Stack[-4] = Stack[-1]
0x399: Call2 0x469

0x39a: Pop(1)
0x39b: Push((float)90000.0)
0x39c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-5] = (bool) 0
0x39f: Return(); Pop(4)

0x3a0: @ CanSee(Stack[-1], Stack[-2])
0x3a1: Pop(0)
0x3a2: Stack[-1] = Stack[-5]
0x3a3: Return(); Pop(4)

0x3a4: Stack[-2] = 0
0x3a5: PushEmpty(float, float)
0x3a6: Push((int) 8)
0x3a7: Push((int) 16)
0x3a8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(2)
0x3aa: Push((int) 10)
0x3ab: @ SetTimer(Stack[-1], Stack[-2])
0x3ac: Pop(1)
0x3ad: Return(); Pop(2)

0x3ae: Push((int) 10)
0x3af: @ KillTimer(Stack[-1])
0x3b0: Pop(1)
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty()
0x3b3: Push((int) 10)
0x3b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3b6: PushEmpty()
0x3b7: Call2 0x3ae

0x3b8: Pop(0)
0x3b9: PushEmpty(bool)
0x3ba: Stack[-1] = (bool) 0
0x3bb: PushEmpty(bool)
0x3bc: Call2 0x484

0x3bd: Pop(0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: PushEmpty(bool)
0x3c0: Call2 0x38f

0x3c1: Pop(0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 1
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c5: PushEmpty(bool)
0x3c6: Call2 0x37b

0x3c7: Pop(0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c9: PushEmpty(bool, object)
0x3ca: PushEmpty(object)
0x3cb: Call2 0x58b

0x3cc: Stack[-1] = Stack[-2]
0x3cd: Pop(1)
0x3ce: Call2 0x518

0x3cf: Pop(2)
0x3d0: GOTO 0x3d7

0x3d1: PushEmpty()
0x3d2: Call2 0x38a

0x3d3: Pop(0)
0x3d4: PushEmpty()
0x3d5: Call2 0x3a5

0x3d6: Pop(0)
0x3d7: Return(); Pop(0)

0x3d8: PushEmpty()
0x3d9: Call2 0x464

0x3da: Pop(0)
0x3db: PushEmpty()
0x3dc: Call2 0x3ae

0x3dd: Pop(0)
0x3de: @ lshStopSpeech()
0x3df: Pop(0)
0x3e0: @ lshStopAnimation()
0x3e1: Pop(0)
0x3e2: @ StopAsync()
0x3e3: Pop(0)
0x3e4: @ Hold()
0x3e5: Pop(0)
0x3e6: Return(); Pop(0)

0x3e7: @ StopGroup0()
0x3e8: Pop(0)
0x3e9: PushEmpty()
0x3ea: Call2 0x3ae

0x3eb: Pop(0)
0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral" // @poff=89
0x3ee: Call2 0x568

0x3ef: Pop(1)
0x3f0: PushEmpty()
0x3f1: Call2 0x3a5

0x3f2: Pop(0)
0x3f3: Return(); Pop(0)

0x3f4: PushEmpty()
0x3f5: Push(Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f7: PushEmpty()
0x3f8: Call2 0x3a5

0x3f9: Pop(0)
0x3fa: GOTO 0x3ff

0x3fb: PushEmpty(string)
0x3fc: Stack[-1] = "Neutral" // @poff=89
0x3fd: Call2 0x568

0x3fe: Pop(1)
0x3ff: Return(); Pop(0)

0x400: PushEmpty(bool, bool)
0x401: @ IsOverrideActive(Stack[-1])
0x402: Pop(0)
0x403: Pop(0); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x405: EventDisable(0)
0x406: PushEmpty()
0x407: Call2 0x464

0x408: Pop(0)
0x409: PushEmpty(bool, object)
0x40a: Stack[-5] = Stack[-1]
0x40b: Call2 0x47b

0x40c: Pop(2)
0x40d: EventEnable(0)
0x40e: PushEmpty(object)
0x40f: Stack[-4] = Stack[-1]
0x410: Call2 0x336

0x411: Pop(1)
0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral" // @poff=89
0x414: Call2 0x568

0x415: Pop(1)
0x416: PushEmpty()
0x417: Call2 0x3ae

0x418: Pop(0)
0x419: PushEmpty()
0x41a: Call2 0x3a5

0x41b: Pop(0)
0x41c: Return(); Pop(2)

0x41d: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x41e: @ WaitForAnimEnd()
0x41f: Pop(0)
0x420: PushEmpty(bool)
0x421: Call2 0x484

0x422: Pop(0)
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Return(); Pop(12)

0x426: PushEmpty(int)
0x427: Call2 0x5b0

0x428: Stack[-1] = Stack[-7]
0x429: Pop(1)
0x42a: Stack[-5] = (int) 0
0x42b: PushEmpty(bool)
0x42c: Stack[-1] = (bool) 0
0x42d: Push((int) 5)
0x42e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x430: PushEmpty(bool)
0x431: Call2 0x484

0x432: Pop(0)
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Stack[-1] = (bool) 1
0x435: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x436: Pop(0); Push((bool) Stack[-6] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x438: Push((int) 3)
0x439: @ Sleep(Stack[-1], Stack[-5])
0x43a: Pop(1)
0x43b: Pop(0); Push((bool) Stack[-4] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: GOTO 0x45f

0x43e: GOTO 0x454

0x43f: @ irand(Stack[-3], Stack[-6])
0x440: Pop(0)
0x441: Push((int) 5)
0x442: @ irand(Stack[-3], Stack[-1])
0x443: Pop(1)
0x444: Push((int) 0)
0x445: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x447: Stack[-3] = (int) 0
0x448: Push("all") // @poff=138
0x449: PushEmpty(string, int)
0x44a: Stack[-6] = Stack[-1]
0x44b: Call2 0x5a9

0x44c: Pop(1)
0x44d: @ PlayAnimation(Stack[-2], Stack[-1])
0x44e: Pop(2)
0x44f: @ WaitForAnimEnd(Stack[-1])
0x450: Pop(0)
0x451: Pop(0); Push((bool) Stack[-1] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: GOTO 0x45f

0x454: PushEmpty(bool)
0x455: Call2 0x462

0x456: Pop(0)
0x457: Pop(1); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: GOTO 0x45f

0x45a: @ ResetAAS()
0x45b: Pop(0)
0x45c: Push((int) 1)
0x45d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x45e: GOTO 0x42b

0x45f: @ ResetAAS()
0x460: Pop(0)
0x461: Return(); Pop(12)

0x462: Stack[-1] = (bool) 1
0x463: Return(); Pop(0)

0x464: @ StopAnimation()
0x465: Pop(0)
0x466: @ StopGroup0()
0x467: Pop(0)
0x468: Return(); Pop(0)

0x469: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x46a: @ GetPosition(Stack[-3])
0x46b: Pop(0)
0x46c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x46d: Pop(0)
0x46e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x46f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x470: Return(); Pop(6)

0x471: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x472: @ GetPosition(Stack[-3])
0x473: Pop(0)
0x474: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x475: Push(CvectorIndex(Stack[-2], 0))
0x476: Push(CvectorIndex(Stack[-3], 2))
0x477: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x478: Pop(2)
0x479: Stack[-1] = Stack[-8]
0x47a: Return(); Pop(6)

0x47b: PushEmpty(cvector, cvector)
0x47c: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x47d: Pop(0)
0x47e: PushEmpty(bool, cvector)
0x47f: Stack[-3] = Stack[-1]
0x480: Call2 0x471

0x481: Stack[-2] = Stack[-6]
0x482: Pop(2)
0x483: Return(); Pop(2)

0x484: PushEmpty(bool, bool)
0x485: @ IsLoaded(Stack[-1])
0x486: Pop(0)
0x487: Stack[-1] = Stack[-3]
0x488: Return(); Pop(2)

0x489: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x48a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x48b: Pop(0)
0x48c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x48d: Pop(0)
0x48e: Push(CvectorIndex(Stack[-8], 1))
0x48f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x490: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x491: @ GetPosition(Stack[-7])
0x492: Pop(0)
0x493: @ GetEyesHeight(Stack[-9])
0x494: Pop(0)
0x495: Push(CvectorIndex(Stack[-7], 1))
0x496: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x497: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x498: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x499: Push(CvectorIndex(Stack[-6], 1))
0x49a: Stack[-1] = (int) 0
0x49b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x49c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x49d: Pop(1); Push(Sqrt(Stack[-1]))
0x49e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x49f: Stack[-5] = -Stack[-6]; Pop(0);
0x4a0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4a1: PushEmpty(cvector, cvector)
0x4a2: Push([0.0, 1.0, 0.0])
0x4a3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4a4: Call2 0x591

0x4a5: Pop(1)
0x4a6: Push((int) 25)
0x4a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a9: Push([0.0, 10.0, 0.0])
0x4aa: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4ab: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4ac: @ IsOverrideActive(Stack[-2])
0x4ad: Pop(0)
0x4ae: Push(Stack[-2])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b0: Stack[-21] = (bool) 0
0x4b1: Return(); Pop(18)

0x4b2: @ StopWorld()
0x4b3: Pop(0)
0x4b4: @ CameraTransit(Stack[-3], Stack[-5])
0x4b5: Pop(0)
0x4b6: Push(CvectorIndex(Stack[-4], 0))
0x4b7: Push(CvectorIndex(Stack[-5], 2))
0x4b8: @ Rotate(Stack[-2], Stack[-1])
0x4b9: Pop(2)
0x4ba: PushEmpty(bool)
0x4bb: Call2 0x5c9

0x4bc: Pop(0)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: GOTO 0x4c7

0x4bf: Push("head") // @poff=228
0x4c0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4c1: Pop(1)
0x4c2: Push(Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c4: Push("head") // @poff=228
0x4c5: @ LookAsyncCamera(Stack[-1])
0x4c6: Pop(1)
0x4c7: @ CameraWaitForPlayFinish()
0x4c8: Pop(0)
0x4c9: @ ResumeWorld()
0x4ca: Pop(0)
0x4cb: Stack[-21] = (bool) 1
0x4cc: Return(); Pop(18)

0x4cd: PushEmpty(bool, bool)
0x4ce: @ CameraSwitchToNormal()
0x4cf: Pop(0)
0x4d0: PushEmpty(bool)
0x4d1: Call2 0x5c9

0x4d2: Pop(0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d4: GOTO 0x4dd

0x4d5: Push("head") // @poff=228
0x4d6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4d7: Pop(1)
0x4d8: Push(Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4da: Push("head") // @poff=228
0x4db: @ UnlookAsync(Stack[-1])
0x4dc: Pop(1)
0x4dd: Return(); Pop(2)

0x4de: PushEmpty(int, int, int, int)
0x4df: Push("voice_common") // @poff=238
0x4e0: @ GetVariable(Stack[-1], Stack[-3])
0x4e1: Pop(1)
0x4e2: Push(Stack[-2])
0x4e3: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4e4: PushEmpty(bool, object)
0x4e5: Stack[-7] = Stack[-1]
0x4e6: Call2 0x518

0x4e7: Pop(1)
0x4e8: Pop(1); Push((bool) Stack[-1] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ea: PushEmpty(bool, object)
0x4eb: Stack[-7] = Stack[-1]
0x4ec: Call2 0x53d

0x4ed: Pop(1)
0x4ee: Pop(1); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-6] = (bool) 0
0x4f1: Return(); Pop(4)

0x4f2: Push((int) 2)
0x4f3: @ irand(Stack[-2], Stack[-1])
0x4f4: Pop(1)
0x4f5: Push(Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4f7: Push("voice_common") // @poff=238
0x4f8: Push((int) 1)
0x4f9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4fa: Push((int) 3)
0x4fb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4fc: @ SetVariable(Stack[-2], Stack[-1])
0x4fd: Pop(2)
0x4fe: GOTO 0x503

0x4ff: Push("voice_common") // @poff=238
0x500: Push((int) 0)
0x501: @ SetVariable(Stack[-2], Stack[-1])
0x502: Pop(2)
0x503: GOTO 0x516

0x504: PushEmpty(bool, object)
0x505: Stack[-7] = Stack[-1]
0x506: Call2 0x53d

0x507: Pop(1)
0x508: Pop(1); Push((bool) Stack[-1] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x50a: PushEmpty(bool, object)
0x50b: Stack[-7] = Stack[-1]
0x50c: Call2 0x518

0x50d: Pop(1)
0x50e: Pop(1); Push((bool) Stack[-1] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-6] = (bool) 0
0x511: Return(); Pop(4)

0x512: Push("voice_common") // @poff=238
0x513: Push((int) 1)
0x514: @ SetVariable(Stack[-2], Stack[-1])
0x515: Pop(2)
0x516: Stack[-6] = (bool) 1
0x517: Return(); Pop(4)

0x518: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x519: Stack[-5] = "c" // @poff=264
0x51a: Stack[-4] = (int) 0
0x51b: Push((int) 1)
0x51c: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x51d: Push((int) 1)
0x51e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x51f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x520: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x521: Pop(1)
0x522: Pop(0); Push((bool) Stack[-3] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x524: GOTO 0x528

0x525: Push((int) 1)
0x526: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x527: GOTO 0x51b

0x528: Pop(0); Push((bool) Stack[-4] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-12] = (bool) 0
0x52b: Return(); Pop(10)

0x52c: Stack[-2] = (int) 0
0x52d: Push((int) 1)
0x52e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: @ irand(Stack[-2], Stack[-4])
0x531: Pop(0)
0x532: Push((int) 1)
0x533: Pop(1); Push(Stack[-3] + Stack[-1]);
0x534: Pop(1); Push(Stack[-6] + Stack[-1]);
0x535: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x536: Pop(1)
0x537: PushEmpty(bool, string)
0x538: Stack[-3] = Stack[-1]
0x539: Call2 0x575

0x53a: Stack[-2] = Stack[-14]
0x53b: Pop(2)
0x53c: Return(); Pop(10)

0x53d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x53e: Push("d") // @poff=234
0x53f: PushEmpty(int)
0x540: Call2 0x5a0

0x541: Pop(0)
0x542: Pop(2); Push(Stack[-2] + Stack[-1]);
0x543: Push("m") // @poff=292
0x544: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x545: Stack[-4] = (int) 0
0x546: Push((int) 1)
0x547: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x548: Push((int) 1)
0x549: Pop(1); Push(Stack[-5] + Stack[-1]);
0x54a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x54b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x54c: Pop(1)
0x54d: Pop(0); Push((bool) Stack[-3] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x553

0x550: Push((int) 1)
0x551: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x552: GOTO 0x546

0x553: Pop(0); Push((bool) Stack[-4] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-12] = (bool) 0
0x556: Return(); Pop(10)

0x557: Stack[-2] = (int) 0
0x558: Push((int) 1)
0x559: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: @ irand(Stack[-2], Stack[-4])
0x55c: Pop(0)
0x55d: Push((int) 1)
0x55e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x55f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x560: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x561: Pop(1)
0x562: PushEmpty(bool, string)
0x563: Stack[-3] = Stack[-1]
0x564: Call2 0x575

0x565: Stack[-2] = Stack[-14]
0x566: Pop(2)
0x567: Return(); Pop(10)

0x568: PushEmpty(float, float, float, float)
0x569: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x56a: Pop(0)
0x56b: Push((bool) 0)
0x56c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x56d: Pop(1)
0x56e: Return(); Pop(4)

0x56f: PushEmpty(float, float, float, float)
0x570: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x571: Pop(0)
0x572: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x573: Pop(0)
0x574: Return(); Pop(4)

0x575: PushEmpty(bool, bool)
0x576: PushEmpty(bool)
0x577: Call2 0x5c9

0x578: Pop(0)
0x579: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x57b: Pop(0)
0x57c: Push(Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57e: @ lshPlaySpeech(Stack[-3])
0x57f: Pop(0)
0x580: Stack[-4] = (bool) 1
0x581: Return(); Pop(2)

0x582: Stack[-4] = (bool) 0
0x583: Return(); Pop(2)

0x584: PushEmpty(bool)
0x585: Call2 0x5c9

0x586: Pop(0)
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: @ lshStopSpeech()
0x589: Pop(0)
0x58a: Return(); Pop(0)

0x58b: PushEmpty(object, object)
0x58c: @ self(Stack[-1])
0x58d: Pop(0)
0x58e: Stack[-1] = Stack[-3]
0x58f: Return(); Pop(2)

0x590: Stack[-1] = 0
0x591: PushEmpty(float, float)
0x592: Pop(0); Push(Stack[-3] | Stack[-3]);
0x593: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x594: Push((float)9.999999974752427e-07)
0x595: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-4] = [0.0, 0.0, 0.0]
0x598: Return(); Pop(2)

0x599: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x59a: Return(); Pop(2)

0x59b: PushEmpty(int, int)
0x59c: @ GetVariable(Stack[-3], Stack[-1])
0x59d: Pop(0)
0x59e: Stack[-1] = Stack[-4]
0x59f: Return(); Pop(2)

0x5a0: PushEmpty(float, float)
0x5a1: @ GetGameTime(Stack[-1])
0x5a2: Pop(0)
0x5a3: Push((int) 1)
0x5a4: PushEmpty(int)
0x5a5: Push((int) 24)
0x5a6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5a7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5a8: Return(); Pop(2)

0x5a9: PushEmpty(string, string)
0x5aa: Stack[-1] = "idle" // @poff=146
0x5ab: Push(Stack[-3])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5ae: Stack[-1] = Stack[-4]
0x5af: Return(); Pop(2)

0x5b0: PushEmpty(int, bool, int, bool)
0x5b1: Stack[-2] = (int) 0
0x5b2: Push("all") // @poff=138
0x5b3: PushEmpty(string, int)
0x5b4: Stack[-5] = Stack[-1]
0x5b5: Call2 0x5a9

0x5b6: Pop(1)
0x5b7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(2)
0x5b9: Pop(0); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5bb: GOTO 0x5bf

0x5bc: Push((int) 1)
0x5bd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5be: GOTO 0x5b2

0x5bf: Stack[-2] = Stack[-5]
0x5c0: Return(); Pop(4)

0x5c1: Stack[-1] = (int) 515540
0x5c2: Return(); Pop(0)

0x5c3: Stack[-1] = (int) 502865
0x5c4: Return(); Pop(0)

0x5c5: Stack[-1] = "ui/NPC_Klara.png" // @poff=296
0x5c6: Return(); Pop(0)

0x5c7: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=330
0x5c8: Return(); Pop(0)

0x5c9: Stack[-1] = (bool) 1
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty()
0x5cc: Push("oob11Klara1") // @poff=368
0x5cd: Push((int) 1)
0x5ce: @ SetVariable(Stack[-2], Stack[-1])
0x5cf: Pop(2)
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty()
0x5d2: Push("b11q01KlaraWillHelp") // @poff=392
0x5d3: Push((int) 1)
0x5d4: @ SetVariable(Stack[-2], Stack[-1])
0x5d5: Pop(2)
0x5d6: Return(); Pop(0)

0x5d7: PushEmpty()
0x5d8: Push("oob11Klara2") // @poff=432
0x5d9: Push((int) 1)
0x5da: @ SetVariable(Stack[-2], Stack[-1])
0x5db: Pop(2)
0x5dc: Return(); Pop(0)

0x5dd: PushEmpty()
0x5de: Push("oob11Klara3") // @poff=456
0x5df: Push((int) 1)
0x5e0: @ SetVariable(Stack[-2], Stack[-1])
0x5e1: Pop(2)
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty()
0x5e4: PushEmpty(int, string)
0x5e5: Stack[-1] = "b11q01" // @poff=480
0x5e6: Call2 0x59b

0x5e7: Pop(1)
0x5e8: Push((int) 0)
0x5e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5eb: Stack[-2] = (bool) 1
0x5ec: Return(); Pop(0)

0x5ed: Stack[-2] = (bool) 0
0x5ee: Return(); Pop(0)

0x5ef: PushEmpty()
0x5f0: PushEmpty(int, string)
0x5f1: Stack[-1] = "b11q01" // @poff=480
0x5f2: Call2 0x59b

0x5f3: Pop(1)
0x5f4: Push((int) 1)
0x5f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: Stack[-2] = (bool) 1
0x5f8: Return(); Pop(0)

0x5f9: Stack[-2] = (bool) 0
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: PushEmpty(int, string)
0x5fd: Stack[-1] = "oob11Klara1" // @poff=368
0x5fe: Call2 0x59b

0x5ff: Pop(1)
0x600: Push((int) 0)
0x601: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-2] = (bool) 1
0x604: Return(); Pop(0)

0x605: Stack[-2] = (bool) 0
0x606: Return(); Pop(0)

0x607: PushEmpty()
0x608: PushEmpty(int, string)
0x609: Stack[-1] = "b11q01KlaraWillHelp" // @poff=392
0x60a: Call2 0x59b

0x60b: Pop(1)
0x60c: Push((int) 0)
0x60d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-2] = (bool) 1
0x610: Return(); Pop(0)

0x611: Stack[-2] = (bool) 0
0x612: Return(); Pop(0)

0x613: PushEmpty()
0x614: PushEmpty(int, string)
0x615: Stack[-1] = "oob11Klara2" // @poff=432
0x616: Call2 0x59b

0x617: Pop(1)
0x618: Push((int) 0)
0x619: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-2] = (bool) 1
0x61c: Return(); Pop(0)

0x61d: Stack[-2] = (bool) 0
0x61e: Return(); Pop(0)

0x61f: PushEmpty()
0x620: PushEmpty(int, string)
0x621: Stack[-1] = "b9KlaraLetter" // @poff=494
0x622: Call2 0x59b

0x623: Pop(1)
0x624: Push((int) 0)
0x625: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x627: Stack[-2] = (bool) 1
0x628: Return(); Pop(0)

0x629: Stack[-2] = (bool) 0
0x62a: Return(); Pop(0)

0x62b: PushEmpty()
0x62c: PushEmpty(int, string)
0x62d: Stack[-1] = "oob11Klara3" // @poff=456
0x62e: Call2 0x59b

0x62f: Pop(1)
0x630: Push((int) 0)
0x631: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-2] = (bool) 1
0x634: Return(); Pop(0)

0x635: Stack[-2] = (bool) 0
0x636: Return(); Pop(0)

0x637: PushEmpty(int, int)
0x638: Push("branch") // @poff=522
0x639: @ GetVariable(Stack[-1], Stack[-2])
0x63a: Pop(1)
0x63b: Push((int) 0)
0x63c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63e: Stack[-3] = (int) 1
0x63f: Return(); Pop(2)

0x640: GOTO 0x646

0x641: Push((int) 1)
0x642: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-3] = (int) 2
0x645: Return(); Pop(2)

0x646: Stack[-3] = (int) 3
0x647: Return(); Pop(2)

