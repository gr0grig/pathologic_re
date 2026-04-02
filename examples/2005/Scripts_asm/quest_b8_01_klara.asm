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
	W:b8q01
	W:quest_b8_01
	W:fail
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000620038007100300031000000710075006500730074005f00620038005f003000310000006600610069006c000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
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

RunOp = 0x229
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x22d Vars = (string)
		EVENT_6 Op = 0x241 Vars = ()
		EVENT_5 Op = 0x24e Vars = ()
		EVENT_7 Op = 0x29d Vars = (int)
		EVENT_45 Op = 0x2df Vars = (bool)
		EVENT_0 Op = 0x2eb Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x36f

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
0x11: Call2 0x476

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x3c9

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x374

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x52d

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x52b

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x52f

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x531

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x51a

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
0x55: Call2 0x3b8

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
0x63: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa7

0x67: Pop(1)
0x68: Push((int) 521402)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x4cb

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 523899)
0x73: Push((int) 25181)
0x74: Push((int) 25179)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0x4cb

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: Push((int) 521403)
0x7d: Push((int) 22582)
0x7e: Push((int) 22581)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: Push((int) 521406)
0x82: Push((int) -1)
0x83: Push((int) 22584)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x62

0x89: PushEmpty(bool)
0x8a: Call2 0x533

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x453

0x95: Pop(1)
0x96: GOTO 0x8d

0x97: GOTO 0xa6

0x98: Push("all") // @poff=138
0x99: Push("idle") // @poff=146
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: Push("all") // @poff=138
0xa2: Push("idle") // @poff=146
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: GOTO 0x9c

0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool)
0xa9: Call2 0x533

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(string, bool)
0xb2: Stack[-3] = Stack[-2]
0xb3: Push("") // @poff=102
0xb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: GOTO 0xb9

0xb8: Stack[-1] = (bool) 1
0xb9: Call2 0x45a

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x46f

0xc2: Pop(0)
0xc3: Push((int) 22583)
0xc4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x4b8

0xca: Pop(2)
0xcb: Push((int) 25211)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x4b8

0xd2: Pop(2)
0xd3: Push((int) 25212)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x4b8

0xda: Pop(2)
0xdb: Push((int) 25197)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x4c1

0xe2: Pop(2)
0xe3: Push((int) 25198)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x4c1

0xea: Pop(2)
0xeb: Push((int) 25189)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x4c1

0xf2: Pop(2)
0xf3: Push((int) 22580)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral" // @poff=89
0xf8: Call2 0xa7

0xf9: Pop(1)
0xfa: Push((int) 521402)
0xfb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfc: Pop(1)
0xfd: @@@ ClearReplies(); Obj=0 // @poff=116
0xfe: Pop(0)
0xff: PushEmpty(bool, object)
0x100: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x101: Call2 0x4cb

0x102: Pop(1)
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: Push((int) 523899)
0x105: Push((int) 25181)
0x106: Push((int) 25179)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: PushEmpty(bool, object)
0x10a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Call2 0x4cb

0x10c: Pop(1)
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: Push((int) 521403)
0x10f: Push((int) 22582)
0x110: Push((int) 22581)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Push((int) 521406)
0x114: Push((int) -1)
0x115: Push((int) 22584)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 22582)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral" // @poff=89
0x11e: Call2 0xa7

0x11f: Pop(1)
0x120: Push((int) 521404)
0x121: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x122: Pop(1)
0x123: @@@ ClearReplies(); Obj=0 // @poff=116
0x124: Pop(0)
0x125: Push((int) 523900)
0x126: Push((int) 25190)
0x127: Push((int) 25180)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Push((int) 523911)
0x12b: Push((int) 25192)
0x12c: Push((int) 25191)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Push((int) 523909)
0x130: Push((int) -1)
0x131: Push((int) 25189)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 25192)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0xa7

0x13b: Pop(1)
0x13c: Push((int) 523912)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 523913)
0x142: Push((int) 25190)
0x143: Push((int) 25193)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 25190)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0xa7

0x14d: Pop(1)
0x14e: Push((int) 523910)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 523914)
0x154: Push((int) 25196)
0x155: Push((int) 25195)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 25196)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral" // @poff=89
0x15e: Call2 0xa7

0x15f: Pop(1)
0x160: Push((int) 523915)
0x161: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x162: Pop(1)
0x163: @@@ ClearReplies(); Obj=0 // @poff=116
0x164: Pop(0)
0x165: Push((int) 523916)
0x166: Push((int) -1)
0x167: Push((int) 25197)
0x168: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x169: Pop(3)
0x16a: Push((int) 523917)
0x16b: Push((int) -1)
0x16c: Push((int) 25198)
0x16d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Push((int) 25181)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral" // @poff=89
0x175: Call2 0xa7

0x176: Pop(1)
0x177: Push((int) 523901)
0x178: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x179: Pop(1)
0x17a: @@@ ClearReplies(); Obj=0 // @poff=116
0x17b: Pop(0)
0x17c: Push((int) 523902)
0x17d: Push((int) 25183)
0x17e: Push((int) 25182)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Push((int) 25183)
0x183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral" // @poff=89
0x187: Call2 0xa7

0x188: Pop(1)
0x189: Push((int) 523903)
0x18a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18b: Pop(1)
0x18c: @@@ ClearReplies(); Obj=0 // @poff=116
0x18d: Pop(0)
0x18e: Push((int) 523904)
0x18f: Push((int) 25185)
0x190: Push((int) 25184)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: Push((int) 523918)
0x194: Push((int) 25200)
0x195: Push((int) 25199)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 25200)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral" // @poff=89
0x19e: Call2 0xa7

0x19f: Pop(1)
0x1a0: Push((int) 523919)
0x1a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a2: Pop(1)
0x1a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a4: Pop(0)
0x1a5: Push((int) 523920)
0x1a6: Push((int) 25196)
0x1a7: Push((int) 25201)
0x1a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 25185)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral" // @poff=89
0x1b0: Call2 0xa7

0x1b1: Pop(1)
0x1b2: Push((int) 523905)
0x1b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b4: Pop(1)
0x1b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b6: Pop(0)
0x1b7: Push((int) 523906)
0x1b8: Push((int) 25187)
0x1b9: Push((int) 25186)
0x1ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bb: Pop(3)
0x1bc: Push((int) 523921)
0x1bd: Push((int) 25204)
0x1be: Push((int) 25203)
0x1bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 25204)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral" // @poff=89
0x1c7: Call2 0xa7

0x1c8: Pop(1)
0x1c9: Push((int) 523922)
0x1ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cb: Pop(1)
0x1cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cd: Pop(0)
0x1ce: Push((int) 523923)
0x1cf: Push((int) 25200)
0x1d0: Push((int) 25205)
0x1d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 25187)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral" // @poff=89
0x1d9: Call2 0xa7

0x1da: Pop(1)
0x1db: Push((int) 523907)
0x1dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1dd: Pop(1)
0x1de: @@@ ClearReplies(); Obj=0 // @poff=116
0x1df: Pop(0)
0x1e0: Push((int) 523924)
0x1e1: Push((int) 25208)
0x1e2: Push((int) 25207)
0x1e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e4: Pop(3)
0x1e5: Push((int) 523926)
0x1e6: Push((int) 25210)
0x1e7: Push((int) 25209)
0x1e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 25210)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral" // @poff=89
0x1f0: Call2 0xa7

0x1f1: Pop(1)
0x1f2: Push((int) 523927)
0x1f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f4: Pop(1)
0x1f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f6: Pop(0)
0x1f7: Push((int) 523928)
0x1f8: Push((int) -1)
0x1f9: Push((int) 25211)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Push((int) 523929)
0x1fd: Push((int) -1)
0x1fe: Push((int) 25212)
0x1ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 25208)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral" // @poff=89
0x207: Call2 0xa7

0x208: Pop(1)
0x209: Push((int) 523925)
0x20a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20b: Pop(1)
0x20c: @@@ ClearReplies(); Obj=0 // @poff=116
0x20d: Pop(0)
0x20e: Push((int) 521405)
0x20f: Push((int) -1)
0x210: Push((int) 22583)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Return(); Pop(0)

0x214: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x215: PushEmpty(bool)
0x216: Call2 0x533

0x217: Pop(0)
0x218: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x219: @ lshStopAnimation()
0x21a: Pop(0)
0x21b: GOTO 0x21e

0x21c: @ StopAnimation()
0x21d: Pop(0)
0x21e: Return(); Pop(0)

0x21f: GOTO 0xbe

0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: PushEmpty(int, object)
0x223: Stack[-3] = Stack[-1]
0x224: Push(-2, 1); TaskCall(1)
0x225: Call2 0xd

0x226: Pop(-2, 1); TaskReturn
0x227: Pop(2)
0x228: Return(); Pop(0)

0x229: PushEmpty()
0x22a: Call2 0x252

0x22b: Pop(0)
0x22c: Return(); Pop(0)

0x22d: PushEmpty(bool, bool)
0x22e: Push("cleanup") // @poff=156
0x22f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x231: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x232: @ IsLoaded(Stack[-1])
0x233: Pop(0)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: PushEmpty(object)
0x237: Call2 0x476

0x238: Pop(0)
0x239: @ RemoveActor(Stack[-1])
0x23a: Pop(1)
0x23b: GOTO 0x240

0x23c: Push("restore") // @poff=172
0x23d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x240: Return(); Pop(2)

0x241: Push( Stack[1 + Tasks[-1].StackPointer] )
0x242: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x243: PushEmpty(object)
0x244: Call2 0x476

0x245: Pop(0)
0x246: @ RemoveActor(Stack[-1])
0x247: Pop(1)
0x248: @ Hold()
0x249: Pop(0)
0x24a: PushEmpty()
0x24b: Call2 0x2c3

0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: PushEmpty()
0x24f: Call2 0x2d2

0x250: Pop(0)
0x251: Return(); Pop(0)

0x252: PushEmpty(bool)
0x253: Call2 0x36f

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: PushEmpty()
0x258: Push(-0, 0); TaskCall(0)
0x259: Call2 0x0

0x25a: Pop(-0, 0); TaskReturn
0x25b: Pop(0)
0x25c: PushEmpty()
0x25d: Call2 0x24e

0x25e: Pop(0)
0x25f: @ GetDirection(Stack[-0]T)
0x260: Pop(0)
0x261: PushEmpty()
0x262: Call2 0x308

0x263: Pop(0)
0x264: GOTO 0x261

0x265: Return(); Pop(0)

0x266: PushEmpty(object, object)
0x267: Push("player") // @poff=188
0x268: @ FindActor(Stack[-2], Stack[-1])
0x269: Pop(1)
0x26a: Pop(0); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-3] = (bool) 0
0x26d: Return(); Pop(2)

0x26e: PushEmpty(bool, object)
0x26f: Stack[-3] = Stack[-1]
0x270: Call2 0x366

0x271: Stack[-2] = Stack[-5]
0x272: Pop(2)
0x273: Return(); Pop(2)

0x274: Stack[-1] = 0
0x275: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x276: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x277: @ RotateAsync(Stack[-2], Stack[-1])
0x278: Pop(2)
0x279: Return(); Pop(0)

0x27a: PushEmpty(object, bool, object, bool)
0x27b: Push("player") // @poff=188
0x27c: @ FindActor(Stack[-3], Stack[-1])
0x27d: Pop(1)
0x27e: Pop(0); Push((bool) Stack[-2] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-5] = (bool) 0
0x281: Return(); Pop(4)

0x282: PushEmpty(float, object)
0x283: Stack[-4] = Stack[-1]
0x284: Call2 0x354

0x285: Pop(1)
0x286: Push((float)90000.0)
0x287: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-5] = (bool) 0
0x28a: Return(); Pop(4)

0x28b: @ CanSee(Stack[-1], Stack[-2])
0x28c: Pop(0)
0x28d: Stack[-1] = Stack[-5]
0x28e: Return(); Pop(4)

0x28f: Stack[-2] = 0
0x290: PushEmpty(float, float)
0x291: Push((int) 8)
0x292: Push((int) 16)
0x293: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(2)
0x295: Push((int) 10)
0x296: @ SetTimer(Stack[-1], Stack[-2])
0x297: Pop(1)
0x298: Return(); Pop(2)

0x299: Push((int) 10)
0x29a: @ KillTimer(Stack[-1])
0x29b: Pop(1)
0x29c: Return(); Pop(0)

0x29d: PushEmpty()
0x29e: Push((int) 10)
0x29f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2a1: PushEmpty()
0x2a2: Call2 0x299

0x2a3: Pop(0)
0x2a4: PushEmpty(bool)
0x2a5: Stack[-1] = (bool) 0
0x2a6: PushEmpty(bool)
0x2a7: Call2 0x36f

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: PushEmpty(bool)
0x2ab: Call2 0x27a

0x2ac: Pop(0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Stack[-1] = (bool) 1
0x2af: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b0: PushEmpty(bool)
0x2b1: Call2 0x266

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b4: PushEmpty(bool, object)
0x2b5: PushEmpty(object)
0x2b6: Call2 0x476

0x2b7: Stack[-1] = Stack[-2]
0x2b8: Pop(1)
0x2b9: Call2 0x403

0x2ba: Pop(2)
0x2bb: GOTO 0x2c2

0x2bc: PushEmpty()
0x2bd: Call2 0x275

0x2be: Pop(0)
0x2bf: PushEmpty()
0x2c0: Call2 0x290

0x2c1: Pop(0)
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: Call2 0x34f

0x2c5: Pop(0)
0x2c6: PushEmpty()
0x2c7: Call2 0x299

0x2c8: Pop(0)
0x2c9: @ lshStopSpeech()
0x2ca: Pop(0)
0x2cb: @ lshStopAnimation()
0x2cc: Pop(0)
0x2cd: @ StopAsync()
0x2ce: Pop(0)
0x2cf: @ Hold()
0x2d0: Pop(0)
0x2d1: Return(); Pop(0)

0x2d2: @ StopGroup0()
0x2d3: Pop(0)
0x2d4: PushEmpty()
0x2d5: Call2 0x299

0x2d6: Pop(0)
0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = "Neutral" // @poff=89
0x2d9: Call2 0x453

0x2da: Pop(1)
0x2db: PushEmpty()
0x2dc: Call2 0x290

0x2dd: Pop(0)
0x2de: Return(); Pop(0)

0x2df: PushEmpty()
0x2e0: Push(Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e2: PushEmpty()
0x2e3: Call2 0x290

0x2e4: Pop(0)
0x2e5: GOTO 0x2ea

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Neutral" // @poff=89
0x2e8: Call2 0x453

0x2e9: Pop(1)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty(bool, bool)
0x2ec: @ IsOverrideActive(Stack[-1])
0x2ed: Pop(0)
0x2ee: Pop(0); Push((bool) Stack[-1] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f0: EventDisable(0)
0x2f1: PushEmpty()
0x2f2: Call2 0x34f

0x2f3: Pop(0)
0x2f4: PushEmpty(bool, object)
0x2f5: Stack[-5] = Stack[-1]
0x2f6: Call2 0x366

0x2f7: Pop(2)
0x2f8: EventEnable(0)
0x2f9: PushEmpty(object)
0x2fa: Stack[-4] = Stack[-1]
0x2fb: Call2 0x221

0x2fc: Pop(1)
0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral" // @poff=89
0x2ff: Call2 0x453

0x300: Pop(1)
0x301: PushEmpty()
0x302: Call2 0x299

0x303: Pop(0)
0x304: PushEmpty()
0x305: Call2 0x290

0x306: Pop(0)
0x307: Return(); Pop(2)

0x308: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x309: @ WaitForAnimEnd()
0x30a: Pop(0)
0x30b: PushEmpty(bool)
0x30c: Call2 0x36f

0x30d: Pop(0)
0x30e: Pop(1); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Return(); Pop(12)

0x311: PushEmpty(int)
0x312: Call2 0x4a7

0x313: Stack[-1] = Stack[-7]
0x314: Pop(1)
0x315: Stack[-5] = (int) 0
0x316: PushEmpty(bool)
0x317: Stack[-1] = (bool) 0
0x318: Push((int) 5)
0x319: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: PushEmpty(bool)
0x31c: Call2 0x36f

0x31d: Pop(0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Stack[-1] = (bool) 1
0x320: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x321: Pop(0); Push((bool) Stack[-6] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x323: Push((int) 3)
0x324: @ Sleep(Stack[-1], Stack[-5])
0x325: Pop(1)
0x326: Pop(0); Push((bool) Stack[-4] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: GOTO 0x34a

0x329: GOTO 0x33f

0x32a: @ irand(Stack[-3], Stack[-6])
0x32b: Pop(0)
0x32c: Push((int) 5)
0x32d: @ irand(Stack[-3], Stack[-1])
0x32e: Pop(1)
0x32f: Push((int) 0)
0x330: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Stack[-3] = (int) 0
0x333: Push("all") // @poff=138
0x334: PushEmpty(string, int)
0x335: Stack[-6] = Stack[-1]
0x336: Call2 0x4a0

0x337: Pop(1)
0x338: @ PlayAnimation(Stack[-2], Stack[-1])
0x339: Pop(2)
0x33a: @ WaitForAnimEnd(Stack[-1])
0x33b: Pop(0)
0x33c: Pop(0); Push((bool) Stack[-1] == 0)
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
0x348: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x349: GOTO 0x316

0x34a: @ ResetAAS()
0x34b: Pop(0)
0x34c: Return(); Pop(12)

0x34d: Stack[-1] = (bool) 1
0x34e: Return(); Pop(0)

0x34f: @ StopAnimation()
0x350: Pop(0)
0x351: @ StopGroup0()
0x352: Pop(0)
0x353: Return(); Pop(0)

0x354: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x355: @ GetPosition(Stack[-3])
0x356: Pop(0)
0x357: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x358: Pop(0)
0x359: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x35a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x35b: Return(); Pop(6)

0x35c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x35d: @ GetPosition(Stack[-3])
0x35e: Pop(0)
0x35f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x360: Push(CvectorIndex(Stack[-2], 0))
0x361: Push(CvectorIndex(Stack[-3], 2))
0x362: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x363: Pop(2)
0x364: Stack[-1] = Stack[-8]
0x365: Return(); Pop(6)

0x366: PushEmpty(cvector, cvector)
0x367: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x368: Pop(0)
0x369: PushEmpty(bool, cvector)
0x36a: Stack[-3] = Stack[-1]
0x36b: Call2 0x35c

0x36c: Stack[-2] = Stack[-6]
0x36d: Pop(2)
0x36e: Return(); Pop(2)

0x36f: PushEmpty(bool, bool)
0x370: @ IsLoaded(Stack[-1])
0x371: Pop(0)
0x372: Stack[-1] = Stack[-3]
0x373: Return(); Pop(2)

0x374: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x375: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x376: Pop(0)
0x377: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x378: Pop(0)
0x379: Push(CvectorIndex(Stack[-8], 1))
0x37a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x37b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x37c: @ GetPosition(Stack[-7])
0x37d: Pop(0)
0x37e: @ GetEyesHeight(Stack[-9])
0x37f: Pop(0)
0x380: Push(CvectorIndex(Stack[-7], 1))
0x381: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x382: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x383: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x384: Push(CvectorIndex(Stack[-6], 1))
0x385: Stack[-1] = (int) 0
0x386: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x387: Pop(0); Push(Stack[-6] | Stack[-6]);
0x388: Pop(1); Push(Sqrt(Stack[-1]))
0x389: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x38a: Stack[-5] = -Stack[-6]; Pop(0);
0x38b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x38c: PushEmpty(cvector, cvector)
0x38d: Push([0.0, 1.0, 0.0])
0x38e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x38f: Call2 0x47c

0x390: Pop(1)
0x391: Push((int) 25)
0x392: Pop(2); Push(Stack[-2] * Stack[-1]);
0x393: Pop(2); Push(Stack[-2] + Stack[-1]);
0x394: Push([0.0, 10.0, 0.0])
0x395: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x396: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x397: @ IsOverrideActive(Stack[-2])
0x398: Pop(0)
0x399: Push(Stack[-2])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-21] = (bool) 0
0x39c: Return(); Pop(18)

0x39d: @ StopWorld()
0x39e: Pop(0)
0x39f: @ CameraTransit(Stack[-3], Stack[-5])
0x3a0: Pop(0)
0x3a1: Push(CvectorIndex(Stack[-4], 0))
0x3a2: Push(CvectorIndex(Stack[-5], 2))
0x3a3: @ Rotate(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: PushEmpty(bool)
0x3a6: Call2 0x533

0x3a7: Pop(0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: GOTO 0x3b2

0x3aa: Push("head") // @poff=228
0x3ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ac: Pop(1)
0x3ad: Push(Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3af: Push("head") // @poff=228
0x3b0: @ LookAsyncCamera(Stack[-1])
0x3b1: Pop(1)
0x3b2: @ CameraWaitForPlayFinish()
0x3b3: Pop(0)
0x3b4: @ ResumeWorld()
0x3b5: Pop(0)
0x3b6: Stack[-21] = (bool) 1
0x3b7: Return(); Pop(18)

0x3b8: PushEmpty(bool, bool)
0x3b9: @ CameraSwitchToNormal()
0x3ba: Pop(0)
0x3bb: PushEmpty(bool)
0x3bc: Call2 0x533

0x3bd: Pop(0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3c8

0x3c0: Push("head") // @poff=228
0x3c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c2: Pop(1)
0x3c3: Push(Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c5: Push("head") // @poff=228
0x3c6: @ UnlookAsync(Stack[-1])
0x3c7: Pop(1)
0x3c8: Return(); Pop(2)

0x3c9: PushEmpty(int, int, int, int)
0x3ca: Push("voice_common") // @poff=238
0x3cb: @ GetVariable(Stack[-1], Stack[-3])
0x3cc: Pop(1)
0x3cd: Push(Stack[-2])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3cf: PushEmpty(bool, object)
0x3d0: Stack[-7] = Stack[-1]
0x3d1: Call2 0x403

0x3d2: Pop(1)
0x3d3: Pop(1); Push((bool) Stack[-1] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-7] = Stack[-1]
0x3d7: Call2 0x428

0x3d8: Pop(1)
0x3d9: Pop(1); Push((bool) Stack[-1] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-6] = (bool) 0
0x3dc: Return(); Pop(4)

0x3dd: Push((int) 2)
0x3de: @ irand(Stack[-2], Stack[-1])
0x3df: Pop(1)
0x3e0: Push(Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e2: Push("voice_common") // @poff=238
0x3e3: Push((int) 1)
0x3e4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3e5: Push((int) 3)
0x3e6: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3e7: @ SetVariable(Stack[-2], Stack[-1])
0x3e8: Pop(2)
0x3e9: GOTO 0x3ee

0x3ea: Push("voice_common") // @poff=238
0x3eb: Push((int) 0)
0x3ec: @ SetVariable(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: GOTO 0x401

0x3ef: PushEmpty(bool, object)
0x3f0: Stack[-7] = Stack[-1]
0x3f1: Call2 0x428

0x3f2: Pop(1)
0x3f3: Pop(1); Push((bool) Stack[-1] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f5: PushEmpty(bool, object)
0x3f6: Stack[-7] = Stack[-1]
0x3f7: Call2 0x403

0x3f8: Pop(1)
0x3f9: Pop(1); Push((bool) Stack[-1] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-6] = (bool) 0
0x3fc: Return(); Pop(4)

0x3fd: Push("voice_common") // @poff=238
0x3fe: Push((int) 1)
0x3ff: @ SetVariable(Stack[-2], Stack[-1])
0x400: Pop(2)
0x401: Stack[-6] = (bool) 1
0x402: Return(); Pop(4)

0x403: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x404: Stack[-5] = "c" // @poff=264
0x405: Stack[-4] = (int) 0
0x406: Push((int) 1)
0x407: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x408: Push((int) 1)
0x409: Pop(1); Push(Stack[-5] + Stack[-1]);
0x40a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x40b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x40c: Pop(1)
0x40d: Pop(0); Push((bool) Stack[-3] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: GOTO 0x413

0x410: Push((int) 1)
0x411: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x412: GOTO 0x406

0x413: Pop(0); Push((bool) Stack[-4] == 0)
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-12] = (bool) 0
0x416: Return(); Pop(10)

0x417: Stack[-2] = (int) 0
0x418: Push((int) 1)
0x419: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: @ irand(Stack[-2], Stack[-4])
0x41c: Pop(0)
0x41d: Push((int) 1)
0x41e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x41f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x420: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x421: Pop(1)
0x422: PushEmpty(bool, string)
0x423: Stack[-3] = Stack[-1]
0x424: Call2 0x460

0x425: Stack[-2] = Stack[-14]
0x426: Pop(2)
0x427: Return(); Pop(10)

0x428: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x429: Push("d") // @poff=234
0x42a: PushEmpty(int)
0x42b: Call2 0x497

0x42c: Pop(0)
0x42d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42e: Push("m") // @poff=292
0x42f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x430: Stack[-4] = (int) 0
0x431: Push((int) 1)
0x432: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x433: Push((int) 1)
0x434: Pop(1); Push(Stack[-5] + Stack[-1]);
0x435: Pop(1); Push(Stack[-6] + Stack[-1]);
0x436: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x437: Pop(1)
0x438: Pop(0); Push((bool) Stack[-3] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: GOTO 0x43e

0x43b: Push((int) 1)
0x43c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x43d: GOTO 0x431

0x43e: Pop(0); Push((bool) Stack[-4] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-12] = (bool) 0
0x441: Return(); Pop(10)

0x442: Stack[-2] = (int) 0
0x443: Push((int) 1)
0x444: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: @ irand(Stack[-2], Stack[-4])
0x447: Pop(0)
0x448: Push((int) 1)
0x449: Pop(1); Push(Stack[-3] + Stack[-1]);
0x44a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x44b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x44c: Pop(1)
0x44d: PushEmpty(bool, string)
0x44e: Stack[-3] = Stack[-1]
0x44f: Call2 0x460

0x450: Stack[-2] = Stack[-14]
0x451: Pop(2)
0x452: Return(); Pop(10)

0x453: PushEmpty(float, float, float, float)
0x454: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x455: Pop(0)
0x456: Push((bool) 0)
0x457: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(1)
0x459: Return(); Pop(4)

0x45a: PushEmpty(float, float, float, float)
0x45b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x45c: Pop(0)
0x45d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x45e: Pop(0)
0x45f: Return(); Pop(4)

0x460: PushEmpty(bool, bool)
0x461: PushEmpty(bool)
0x462: Call2 0x533

0x463: Pop(0)
0x464: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x465: @ lshHasSpeech(Stack[-1], Stack[-3])
0x466: Pop(0)
0x467: Push(Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x469: @ lshPlaySpeech(Stack[-3])
0x46a: Pop(0)
0x46b: Stack[-4] = (bool) 1
0x46c: Return(); Pop(2)

0x46d: Stack[-4] = (bool) 0
0x46e: Return(); Pop(2)

0x46f: PushEmpty(bool)
0x470: Call2 0x533

0x471: Pop(0)
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: @ lshStopSpeech()
0x474: Pop(0)
0x475: Return(); Pop(0)

0x476: PushEmpty(object, object)
0x477: @ self(Stack[-1])
0x478: Pop(0)
0x479: Stack[-1] = Stack[-3]
0x47a: Return(); Pop(2)

0x47b: Stack[-1] = 0
0x47c: PushEmpty(float, float)
0x47d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x47e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x47f: Push((float)9.999999974752427e-07)
0x480: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-4] = [0.0, 0.0, 0.0]
0x483: Return(); Pop(2)

0x484: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x485: Return(); Pop(2)

0x486: PushEmpty(int, int)
0x487: @ GetVariable(Stack[-3], Stack[-1])
0x488: Pop(0)
0x489: Stack[-1] = Stack[-4]
0x48a: Return(); Pop(2)

0x48b: PushEmpty(object, object)
0x48c: @ FindActor(Stack[-1], Stack[-4])
0x48d: Pop(0)
0x48e: Pop(0); PushNull((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: Stack[-5] = (bool) 0
0x491: Return(); Pop(2)

0x492: @ Trigger(Stack[-1], Stack[-3])
0x493: Pop(0)
0x494: Stack[-5] = (bool) 1
0x495: Return(); Pop(2)

0x496: Stack[-1] = 0
0x497: PushEmpty(float, float)
0x498: @ GetGameTime(Stack[-1])
0x499: Pop(0)
0x49a: Push((int) 1)
0x49b: PushEmpty(int)
0x49c: Push((int) 24)
0x49d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x49e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x49f: Return(); Pop(2)

0x4a0: PushEmpty(string, string)
0x4a1: Stack[-1] = "idle" // @poff=146
0x4a2: Push(Stack[-3])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4a5: Stack[-1] = Stack[-4]
0x4a6: Return(); Pop(2)

0x4a7: PushEmpty(int, bool, int, bool)
0x4a8: Stack[-2] = (int) 0
0x4a9: Push("all") // @poff=138
0x4aa: PushEmpty(string, int)
0x4ab: Stack[-5] = Stack[-1]
0x4ac: Call2 0x4a0

0x4ad: Pop(1)
0x4ae: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4af: Pop(2)
0x4b0: Pop(0); Push((bool) Stack[-1] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b2: GOTO 0x4b6

0x4b3: Push((int) 1)
0x4b4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4b5: GOTO 0x4a9

0x4b6: Stack[-2] = Stack[-5]
0x4b7: Return(); Pop(4)

0x4b8: PushEmpty()
0x4b9: Push("b8q01") // @poff=296
0x4ba: Push((int) 3)
0x4bb: @ SetVariable(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: PushEmpty()
0x4be: Call2 0x4e4

0x4bf: Pop(0)
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty()
0x4c3: Call2 0x4d7

0x4c4: Pop(0)
0x4c5: PushEmpty(bool, string, string)
0x4c6: Stack[-2] = "quest_b8_01" // @poff=308
0x4c7: Stack[-1] = "fail" // @poff=332
0x4c8: Call2 0x48b

0x4c9: Pop(3)
0x4ca: Return(); Pop(0)

0x4cb: PushEmpty()
0x4cc: PushEmpty(int, string)
0x4cd: Stack[-1] = "b8q01" // @poff=296
0x4ce: Call2 0x486

0x4cf: Pop(1)
0x4d0: Push((int) 2)
0x4d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-2] = (bool) 1
0x4d4: Return(); Pop(0)

0x4d5: Stack[-2] = (bool) 0
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty(object, object)
0x4d8: Push((int) 693)
0x4d9: Push((int) 1)
0x4da: Push((int) 535229)
0x4db: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: PushEmpty(bool, object, int)
0x4de: Stack[-4] = Stack[-2]
0x4df: Stack[-1] = (int) 284
0x4e0: Call2 0x4fe

0x4e1: Pop(3)
0x4e2: Return(); Pop(2)

0x4e3: Stack[-1] = 0
0x4e4: PushEmpty(object, object)
0x4e5: Push((int) 287)
0x4e6: Push((int) 1)
0x4e7: Push((int) 521458)
0x4e8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: PushEmpty(bool, object, int)
0x4eb: Stack[-4] = Stack[-2]
0x4ec: Stack[-1] = (int) 284
0x4ed: Call2 0x4fe

0x4ee: Pop(3)
0x4ef: Return(); Pop(2)

0x4f0: Stack[-1] = 0
0x4f1: PushEmpty(object, object)
0x4f2: @ GetDiaryRoot(Stack[-1])
0x4f3: Pop(0)
0x4f4: Pop(0); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f6: Push("Can't retrieve diary root") // @poff=342
0x4f7: @ Trace(Stack[-1])
0x4f8: Pop(1)
0x4f9: Stack[-3] = (bool) 0
0x4fa: Return(); Pop(2)

0x4fb: Stack[-1] = Stack[-3]
0x4fc: Return(); Pop(2)

0x4fd: Stack[-1] = 0
0x4fe: PushEmpty(object, object, int, object, object, int)
0x4ff: PushEmpty(object)
0x500: Call2 0x4f1

0x501: Stack[-1] = Stack[-4]
0x502: Pop(1)
0x503: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=394
0x504: Pop(0)
0x505: Pop(0); Push((bool) Stack[-2] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: Push("Can't find diary parent with id: ") // @poff=399
0x508: Pop(1); Push(Stack[-1] + Stack[-8]);
0x509: @ Trace(Stack[-1])
0x50a: Pop(1)
0x50b: Stack[-9] = (bool) 0
0x50c: Return(); Pop(6)

0x50d: @@ AddChild(Stack[-8]); Obj=2 // @poff=467
0x50e: Pop(0)
0x50f: Push((int) 7)
0x510: @ SendWorldWndMessage(Stack[-1])
0x511: Pop(1)
0x512: @@ GetCategory(Stack[-1]); Obj=8 // @poff=476
0x513: Pop(0)
0x514: @ SetDiarySection(Stack[-1])
0x515: Pop(0)
0x516: Stack[-9] = (bool) 0
0x517: Return(); Pop(6)

0x518: Stack[-2] = 0
0x519: Stack[-3] = 0
0x51a: PushEmpty(int, int)
0x51b: Push("branch") // @poff=488
0x51c: @ GetVariable(Stack[-1], Stack[-2])
0x51d: Pop(1)
0x51e: Push((int) 0)
0x51f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x521: Stack[-3] = (int) 1
0x522: Return(); Pop(2)

0x523: GOTO 0x529

0x524: Push((int) 1)
0x525: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: Stack[-3] = (int) 2
0x528: Return(); Pop(2)

0x529: Stack[-3] = (int) 3
0x52a: Return(); Pop(2)

0x52b: Stack[-1] = (int) 515540
0x52c: Return(); Pop(0)

0x52d: Stack[-1] = (int) 502865
0x52e: Return(); Pop(0)

0x52f: Stack[-1] = "ui/NPC_Klara.png" // @poff=502
0x530: Return(); Pop(0)

0x531: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=536
0x532: Return(); Pop(0)

0x533: Stack[-1] = (bool) 1
0x534: Return(); Pop(0)

