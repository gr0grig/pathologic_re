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
	W:k4q03
	W:ook4BurahIndoor1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b00340071003000330000006f006f006b0034004200750072006100680049006e0064006f006f00720031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x12c
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x130 Vars = (string)
		EVENT_6 Op = 0x144 Vars = ()
		EVENT_5 Op = 0x151 Vars = ()
		EVENT_7 Op = 0x1a0 Vars = (int)
		EVENT_45 Op = 0x1e2 Vars = (bool)
		EVENT_0 Op = 0x1ee Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x272

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
0x11: Call2 0x379

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x2cc

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x277

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x429

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x427

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x42b

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x42d

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x416

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
0x55: Call2 0x2bb

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
0x63: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x3c7

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call2 0x3c1

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xb6

0x71: Pop(1)
0x72: Push((int) 525808)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 525809)
0x78: Push((int) -1)
0x79: Push((int) 27115)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 525810)
0x7d: Push((int) -1)
0x7e: Push((int) 27116)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x98

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xb6

0x85: Pop(1)
0x86: Push((int) 525811)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 525812)
0x8c: Push((int) -1)
0x8d: Push((int) 27118)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 529232)
0x91: Push((int) -1)
0x92: Push((int) 30686)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x62

0x98: PushEmpty(bool)
0x99: Call2 0x42f

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x356

0xa4: Pop(1)
0xa5: GOTO 0x9c

0xa6: GOTO 0xb5

0xa7: Push("all") // @poff=138
0xa8: Push("idle") // @poff=146
0xa9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: @ WaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: Push("all") // @poff=138
0xb1: Push("idle") // @poff=146
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: GOTO 0xab

0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool)
0xb8: Call2 0x42f

0xb9: Pop(0)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: PushEmpty(string, bool)
0xc1: Stack[-3] = Stack[-2]
0xc2: Push("") // @poff=102
0xc3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: GOTO 0xc8

0xc7: Stack[-1] = (bool) 1
0xc8: Call2 0x35d

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x372

0xd1: Pop(0)
0xd2: Push((int) 27115)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x3af

0xd9: Pop(2)
0xda: Push((int) 27116)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x3b8

0xe1: Pop(2)
0xe2: Push((int) 27114)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x3c7

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x3c1

0xee: Pop(2)
0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0xb6

0xf2: Pop(1)
0xf3: Push((int) 525808)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 525809)
0xf9: Push((int) -1)
0xfa: Push((int) 27115)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 525810)
0xfe: Push((int) -1)
0xff: Push((int) 27116)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral" // @poff=89
0x105: Call2 0xb6

0x106: Pop(1)
0x107: Push((int) 525811)
0x108: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x109: Pop(1)
0x10a: @@@ ClearReplies(); Obj=0 // @poff=116
0x10b: Pop(0)
0x10c: Push((int) 525812)
0x10d: Push((int) -1)
0x10e: Push((int) 27118)
0x10f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x110: Pop(3)
0x111: Push((int) 529232)
0x112: Push((int) -1)
0x113: Push((int) 30686)
0x114: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x118: PushEmpty(bool)
0x119: Call2 0x42f

0x11a: Pop(0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11c: @ lshStopAnimation()
0x11d: Pop(0)
0x11e: GOTO 0x121

0x11f: @ StopAnimation()
0x120: Pop(0)
0x121: Return(); Pop(0)

0x122: GOTO 0xcd

0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: PushEmpty(int, object)
0x126: Stack[-3] = Stack[-1]
0x127: Push(-2, 1); TaskCall(1)
0x128: Call2 0xd

0x129: Pop(-2, 1); TaskReturn
0x12a: Pop(2)
0x12b: Return(); Pop(0)

0x12c: PushEmpty()
0x12d: Call2 0x155

0x12e: Pop(0)
0x12f: Return(); Pop(0)

0x130: PushEmpty(bool, bool)
0x131: Push("cleanup") // @poff=156
0x132: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x134: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x135: @ IsLoaded(Stack[-1])
0x136: Pop(0)
0x137: Pop(0); Push((bool) Stack[-1] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: PushEmpty(object)
0x13a: Call2 0x379

0x13b: Pop(0)
0x13c: @ RemoveActor(Stack[-1])
0x13d: Pop(1)
0x13e: GOTO 0x143

0x13f: Push("restore") // @poff=172
0x140: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x143: Return(); Pop(2)

0x144: Push( Stack[1 + Tasks[-1].StackPointer] )
0x145: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x146: PushEmpty(object)
0x147: Call2 0x379

0x148: Pop(0)
0x149: @ RemoveActor(Stack[-1])
0x14a: Pop(1)
0x14b: @ Hold()
0x14c: Pop(0)
0x14d: PushEmpty()
0x14e: Call2 0x1c6

0x14f: Pop(0)
0x150: Return(); Pop(0)

0x151: PushEmpty()
0x152: Call2 0x1d5

0x153: Pop(0)
0x154: Return(); Pop(0)

0x155: PushEmpty(bool)
0x156: Call2 0x272

0x157: Pop(0)
0x158: Pop(1); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: PushEmpty()
0x15b: Push(-0, 0); TaskCall(0)
0x15c: Call2 0x0

0x15d: Pop(-0, 0); TaskReturn
0x15e: Pop(0)
0x15f: PushEmpty()
0x160: Call2 0x151

0x161: Pop(0)
0x162: @ GetDirection(Stack[-0]T)
0x163: Pop(0)
0x164: PushEmpty()
0x165: Call2 0x20b

0x166: Pop(0)
0x167: GOTO 0x164

0x168: Return(); Pop(0)

0x169: PushEmpty(object, object)
0x16a: Push("player") // @poff=188
0x16b: @ FindActor(Stack[-2], Stack[-1])
0x16c: Pop(1)
0x16d: Pop(0); Push((bool) Stack[-1] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: Stack[-3] = (bool) 0
0x170: Return(); Pop(2)

0x171: PushEmpty(bool, object)
0x172: Stack[-3] = Stack[-1]
0x173: Call2 0x269

0x174: Stack[-2] = Stack[-5]
0x175: Pop(2)
0x176: Return(); Pop(2)

0x177: Stack[-1] = 0
0x178: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x179: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x17a: @ RotateAsync(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: Return(); Pop(0)

0x17d: PushEmpty(object, bool, object, bool)
0x17e: Push("player") // @poff=188
0x17f: @ FindActor(Stack[-3], Stack[-1])
0x180: Pop(1)
0x181: Pop(0); Push((bool) Stack[-2] == 0)
0x182: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x183: Stack[-5] = (bool) 0
0x184: Return(); Pop(4)

0x185: PushEmpty(float, object)
0x186: Stack[-4] = Stack[-1]
0x187: Call2 0x257

0x188: Pop(1)
0x189: Push((float)90000.0)
0x18a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18c: Stack[-5] = (bool) 0
0x18d: Return(); Pop(4)

0x18e: @ CanSee(Stack[-1], Stack[-2])
0x18f: Pop(0)
0x190: Stack[-1] = Stack[-5]
0x191: Return(); Pop(4)

0x192: Stack[-2] = 0
0x193: PushEmpty(float, float)
0x194: Push((int) 8)
0x195: Push((int) 16)
0x196: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: Push((int) 10)
0x199: @ SetTimer(Stack[-1], Stack[-2])
0x19a: Pop(1)
0x19b: Return(); Pop(2)

0x19c: Push((int) 10)
0x19d: @ KillTimer(Stack[-1])
0x19e: Pop(1)
0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: Push((int) 10)
0x1a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1a4: PushEmpty()
0x1a5: Call2 0x19c

0x1a6: Pop(0)
0x1a7: PushEmpty(bool)
0x1a8: Stack[-1] = (bool) 0
0x1a9: PushEmpty(bool)
0x1aa: Call2 0x272

0x1ab: Pop(0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: PushEmpty(bool)
0x1ae: Call2 0x17d

0x1af: Pop(0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Stack[-1] = (bool) 1
0x1b2: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b3: PushEmpty(bool)
0x1b4: Call2 0x169

0x1b5: Pop(0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b7: PushEmpty(bool, object)
0x1b8: PushEmpty(object)
0x1b9: Call2 0x379

0x1ba: Stack[-1] = Stack[-2]
0x1bb: Pop(1)
0x1bc: Call2 0x306

0x1bd: Pop(2)
0x1be: GOTO 0x1c5

0x1bf: PushEmpty()
0x1c0: Call2 0x178

0x1c1: Pop(0)
0x1c2: PushEmpty()
0x1c3: Call2 0x193

0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: Call2 0x252

0x1c8: Pop(0)
0x1c9: PushEmpty()
0x1ca: Call2 0x19c

0x1cb: Pop(0)
0x1cc: @ lshStopSpeech()
0x1cd: Pop(0)
0x1ce: @ lshStopAnimation()
0x1cf: Pop(0)
0x1d0: @ StopAsync()
0x1d1: Pop(0)
0x1d2: @ Hold()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: @ StopGroup0()
0x1d6: Pop(0)
0x1d7: PushEmpty()
0x1d8: Call2 0x19c

0x1d9: Pop(0)
0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral" // @poff=89
0x1dc: Call2 0x356

0x1dd: Pop(1)
0x1de: PushEmpty()
0x1df: Call2 0x193

0x1e0: Pop(0)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: Push(Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e5: PushEmpty()
0x1e6: Call2 0x193

0x1e7: Pop(0)
0x1e8: GOTO 0x1ed

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Neutral" // @poff=89
0x1eb: Call2 0x356

0x1ec: Pop(1)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(bool, bool)
0x1ef: @ IsOverrideActive(Stack[-1])
0x1f0: Pop(0)
0x1f1: Pop(0); Push((bool) Stack[-1] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1f3: EventDisable(0)
0x1f4: PushEmpty()
0x1f5: Call2 0x252

0x1f6: Pop(0)
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-5] = Stack[-1]
0x1f9: Call2 0x269

0x1fa: Pop(2)
0x1fb: EventEnable(0)
0x1fc: PushEmpty(object)
0x1fd: Stack[-4] = Stack[-1]
0x1fe: Call2 0x124

0x1ff: Pop(1)
0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral" // @poff=89
0x202: Call2 0x356

0x203: Pop(1)
0x204: PushEmpty()
0x205: Call2 0x19c

0x206: Pop(0)
0x207: PushEmpty()
0x208: Call2 0x193

0x209: Pop(0)
0x20a: Return(); Pop(2)

0x20b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x20c: @ WaitForAnimEnd()
0x20d: Pop(0)
0x20e: PushEmpty(bool)
0x20f: Call2 0x272

0x210: Pop(0)
0x211: Pop(1); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Return(); Pop(12)

0x214: PushEmpty(int)
0x215: Call2 0x39e

0x216: Stack[-1] = Stack[-7]
0x217: Pop(1)
0x218: Stack[-5] = (int) 0
0x219: PushEmpty(bool)
0x21a: Stack[-1] = (bool) 0
0x21b: Push((int) 5)
0x21c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: PushEmpty(bool)
0x21f: Call2 0x272

0x220: Pop(0)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Stack[-1] = (bool) 1
0x223: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x224: Pop(0); Push((bool) Stack[-6] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x226: Push((int) 3)
0x227: @ Sleep(Stack[-1], Stack[-5])
0x228: Pop(1)
0x229: Pop(0); Push((bool) Stack[-4] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x24d

0x22c: GOTO 0x242

0x22d: @ irand(Stack[-3], Stack[-6])
0x22e: Pop(0)
0x22f: Push((int) 5)
0x230: @ irand(Stack[-3], Stack[-1])
0x231: Pop(1)
0x232: Push((int) 0)
0x233: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-3] = (int) 0
0x236: Push("all") // @poff=138
0x237: PushEmpty(string, int)
0x238: Stack[-6] = Stack[-1]
0x239: Call2 0x397

0x23a: Pop(1)
0x23b: @ PlayAnimation(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: @ WaitForAnimEnd(Stack[-1])
0x23e: Pop(0)
0x23f: Pop(0); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24d

0x242: PushEmpty(bool)
0x243: Call2 0x250

0x244: Pop(0)
0x245: Pop(1); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x24d

0x248: @ ResetAAS()
0x249: Pop(0)
0x24a: Push((int) 1)
0x24b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x24c: GOTO 0x219

0x24d: @ ResetAAS()
0x24e: Pop(0)
0x24f: Return(); Pop(12)

0x250: Stack[-1] = (bool) 1
0x251: Return(); Pop(0)

0x252: @ StopAnimation()
0x253: Pop(0)
0x254: @ StopGroup0()
0x255: Pop(0)
0x256: Return(); Pop(0)

0x257: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x258: @ GetPosition(Stack[-3])
0x259: Pop(0)
0x25a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x25b: Pop(0)
0x25c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x25d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x25e: Return(); Pop(6)

0x25f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x260: @ GetPosition(Stack[-3])
0x261: Pop(0)
0x262: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x263: Push(CvectorIndex(Stack[-2], 0))
0x264: Push(CvectorIndex(Stack[-3], 2))
0x265: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x266: Pop(2)
0x267: Stack[-1] = Stack[-8]
0x268: Return(); Pop(6)

0x269: PushEmpty(cvector, cvector)
0x26a: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x26b: Pop(0)
0x26c: PushEmpty(bool, cvector)
0x26d: Stack[-3] = Stack[-1]
0x26e: Call2 0x25f

0x26f: Stack[-2] = Stack[-6]
0x270: Pop(2)
0x271: Return(); Pop(2)

0x272: PushEmpty(bool, bool)
0x273: @ IsLoaded(Stack[-1])
0x274: Pop(0)
0x275: Stack[-1] = Stack[-3]
0x276: Return(); Pop(2)

0x277: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x278: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x279: Pop(0)
0x27a: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-8], 1))
0x27d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27f: @ GetPosition(Stack[-7])
0x280: Pop(0)
0x281: @ GetEyesHeight(Stack[-9])
0x282: Pop(0)
0x283: Push(CvectorIndex(Stack[-7], 1))
0x284: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x285: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x286: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x287: Push(CvectorIndex(Stack[-6], 1))
0x288: Stack[-1] = (int) 0
0x289: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28b: Pop(1); Push(Sqrt(Stack[-1]))
0x28c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28d: Stack[-5] = -Stack[-6]; Pop(0);
0x28e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28f: PushEmpty(cvector, cvector)
0x290: Push([0.0, 1.0, 0.0])
0x291: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x292: Call2 0x37f

0x293: Pop(1)
0x294: Push((int) 25)
0x295: Pop(2); Push(Stack[-2] * Stack[-1]);
0x296: Pop(2); Push(Stack[-2] + Stack[-1]);
0x297: Push([0.0, 10.0, 0.0])
0x298: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x299: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29a: @ IsOverrideActive(Stack[-2])
0x29b: Pop(0)
0x29c: Push(Stack[-2])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-21] = (bool) 0
0x29f: Return(); Pop(18)

0x2a0: @ StopWorld()
0x2a1: Pop(0)
0x2a2: @ CameraTransit(Stack[-3], Stack[-5])
0x2a3: Pop(0)
0x2a4: Push(CvectorIndex(Stack[-4], 0))
0x2a5: Push(CvectorIndex(Stack[-5], 2))
0x2a6: @ Rotate(Stack[-2], Stack[-1])
0x2a7: Pop(2)
0x2a8: PushEmpty(bool)
0x2a9: Call2 0x42f

0x2aa: Pop(0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b5

0x2ad: Push("head") // @poff=228
0x2ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Push("head") // @poff=228
0x2b3: @ LookAsyncCamera(Stack[-1])
0x2b4: Pop(1)
0x2b5: @ CameraWaitForPlayFinish()
0x2b6: Pop(0)
0x2b7: @ ResumeWorld()
0x2b8: Pop(0)
0x2b9: Stack[-21] = (bool) 1
0x2ba: Return(); Pop(18)

0x2bb: PushEmpty(bool, bool)
0x2bc: @ CameraSwitchToNormal()
0x2bd: Pop(0)
0x2be: PushEmpty(bool)
0x2bf: Call2 0x42f

0x2c0: Pop(0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2cb

0x2c3: Push("head") // @poff=228
0x2c4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push(Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c8: Push("head") // @poff=228
0x2c9: @ UnlookAsync(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(int, int, int, int)
0x2cd: Push("voice_common") // @poff=238
0x2ce: @ GetVariable(Stack[-1], Stack[-3])
0x2cf: Pop(1)
0x2d0: Push(Stack[-2])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-7] = Stack[-1]
0x2d4: Call2 0x306

0x2d5: Pop(1)
0x2d6: Pop(1); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-7] = Stack[-1]
0x2da: Call2 0x32b

0x2db: Pop(1)
0x2dc: Pop(1); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: Stack[-6] = (bool) 0
0x2df: Return(); Pop(4)

0x2e0: Push((int) 2)
0x2e1: @ irand(Stack[-2], Stack[-1])
0x2e2: Pop(1)
0x2e3: Push(Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e5: Push("voice_common") // @poff=238
0x2e6: Push((int) 1)
0x2e7: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2e8: Push((int) 3)
0x2e9: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2ea: @ SetVariable(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: GOTO 0x2f1

0x2ed: Push("voice_common") // @poff=238
0x2ee: Push((int) 0)
0x2ef: @ SetVariable(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: GOTO 0x304

0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-7] = Stack[-1]
0x2f4: Call2 0x32b

0x2f5: Pop(1)
0x2f6: Pop(1); Push((bool) Stack[-1] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-7] = Stack[-1]
0x2fa: Call2 0x306

0x2fb: Pop(1)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-6] = (bool) 0
0x2ff: Return(); Pop(4)

0x300: Push("voice_common") // @poff=238
0x301: Push((int) 1)
0x302: @ SetVariable(Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: Stack[-6] = (bool) 1
0x305: Return(); Pop(4)

0x306: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x307: Stack[-5] = "c" // @poff=264
0x308: Stack[-4] = (int) 0
0x309: Push((int) 1)
0x30a: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x30b: Push((int) 1)
0x30c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x30f: Pop(1)
0x310: Pop(0); Push((bool) Stack[-3] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: GOTO 0x316

0x313: Push((int) 1)
0x314: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x315: GOTO 0x309

0x316: Pop(0); Push((bool) Stack[-4] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-12] = (bool) 0
0x319: Return(); Pop(10)

0x31a: Stack[-2] = (int) 0
0x31b: Push((int) 1)
0x31c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: @ irand(Stack[-2], Stack[-4])
0x31f: Pop(0)
0x320: Push((int) 1)
0x321: Pop(1); Push(Stack[-3] + Stack[-1]);
0x322: Pop(1); Push(Stack[-6] + Stack[-1]);
0x323: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x324: Pop(1)
0x325: PushEmpty(bool, string)
0x326: Stack[-3] = Stack[-1]
0x327: Call2 0x363

0x328: Stack[-2] = Stack[-14]
0x329: Pop(2)
0x32a: Return(); Pop(10)

0x32b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x32c: Push("d") // @poff=234
0x32d: PushEmpty(int)
0x32e: Call2 0x38e

0x32f: Pop(0)
0x330: Pop(2); Push(Stack[-2] + Stack[-1]);
0x331: Push("m") // @poff=292
0x332: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x333: Stack[-4] = (int) 0
0x334: Push((int) 1)
0x335: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x336: Push((int) 1)
0x337: Pop(1); Push(Stack[-5] + Stack[-1]);
0x338: Pop(1); Push(Stack[-6] + Stack[-1]);
0x339: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x33a: Pop(1)
0x33b: Pop(0); Push((bool) Stack[-3] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x341

0x33e: Push((int) 1)
0x33f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x340: GOTO 0x334

0x341: Pop(0); Push((bool) Stack[-4] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-12] = (bool) 0
0x344: Return(); Pop(10)

0x345: Stack[-2] = (int) 0
0x346: Push((int) 1)
0x347: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: @ irand(Stack[-2], Stack[-4])
0x34a: Pop(0)
0x34b: Push((int) 1)
0x34c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x34d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x34f: Pop(1)
0x350: PushEmpty(bool, string)
0x351: Stack[-3] = Stack[-1]
0x352: Call2 0x363

0x353: Stack[-2] = Stack[-14]
0x354: Pop(2)
0x355: Return(); Pop(10)

0x356: PushEmpty(float, float, float, float)
0x357: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x358: Pop(0)
0x359: Push((bool) 0)
0x35a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x35b: Pop(1)
0x35c: Return(); Pop(4)

0x35d: PushEmpty(float, float, float, float)
0x35e: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x35f: Pop(0)
0x360: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x361: Pop(0)
0x362: Return(); Pop(4)

0x363: PushEmpty(bool, bool)
0x364: PushEmpty(bool)
0x365: Call2 0x42f

0x366: Pop(0)
0x367: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x368: @ lshHasSpeech(Stack[-1], Stack[-3])
0x369: Pop(0)
0x36a: Push(Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36c: @ lshPlaySpeech(Stack[-3])
0x36d: Pop(0)
0x36e: Stack[-4] = (bool) 1
0x36f: Return(); Pop(2)

0x370: Stack[-4] = (bool) 0
0x371: Return(); Pop(2)

0x372: PushEmpty(bool)
0x373: Call2 0x42f

0x374: Pop(0)
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: @ lshStopSpeech()
0x377: Pop(0)
0x378: Return(); Pop(0)

0x379: PushEmpty(object, object)
0x37a: @ self(Stack[-1])
0x37b: Pop(0)
0x37c: Stack[-1] = Stack[-3]
0x37d: Return(); Pop(2)

0x37e: Stack[-1] = 0
0x37f: PushEmpty(float, float)
0x380: Pop(0); Push(Stack[-3] | Stack[-3]);
0x381: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x382: Push((float)9.999999974752427e-07)
0x383: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-4] = [0.0, 0.0, 0.0]
0x386: Return(); Pop(2)

0x387: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x388: Return(); Pop(2)

0x389: PushEmpty(int, int)
0x38a: @ GetVariable(Stack[-3], Stack[-1])
0x38b: Pop(0)
0x38c: Stack[-1] = Stack[-4]
0x38d: Return(); Pop(2)

0x38e: PushEmpty(float, float)
0x38f: @ GetGameTime(Stack[-1])
0x390: Pop(0)
0x391: Push((int) 1)
0x392: PushEmpty(int)
0x393: Push((int) 24)
0x394: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x395: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x396: Return(); Pop(2)

0x397: PushEmpty(string, string)
0x398: Stack[-1] = "idle" // @poff=146
0x399: Push(Stack[-3])
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x39c: Stack[-1] = Stack[-4]
0x39d: Return(); Pop(2)

0x39e: PushEmpty(int, bool, int, bool)
0x39f: Stack[-2] = (int) 0
0x3a0: Push("all") // @poff=138
0x3a1: PushEmpty(string, int)
0x3a2: Stack[-5] = Stack[-1]
0x3a3: Call2 0x397

0x3a4: Pop(1)
0x3a5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(2)
0x3a7: Pop(0); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: GOTO 0x3ad

0x3aa: Push((int) 1)
0x3ab: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ac: GOTO 0x3a0

0x3ad: Stack[-2] = Stack[-5]
0x3ae: Return(); Pop(4)

0x3af: PushEmpty()
0x3b0: Push("k4q03") // @poff=296
0x3b1: Push((int) 3)
0x3b2: @ SetVariable(Stack[-2], Stack[-1])
0x3b3: Pop(2)
0x3b4: PushEmpty()
0x3b5: Call2 0x3e0

0x3b6: Pop(0)
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty()
0x3b9: Push("k4q03") // @poff=296
0x3ba: Push((int) 4)
0x3bb: @ SetVariable(Stack[-2], Stack[-1])
0x3bc: Pop(2)
0x3bd: PushEmpty()
0x3be: Call2 0x3d3

0x3bf: Pop(0)
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty()
0x3c2: Push("ook4BurahIndoor1") // @poff=308
0x3c3: Push((int) 1)
0x3c4: @ SetVariable(Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: PushEmpty(int, string)
0x3c9: Stack[-1] = "ook4BurahIndoor1" // @poff=308
0x3ca: Call2 0x389

0x3cb: Pop(1)
0x3cc: Push((int) 0)
0x3cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: Stack[-2] = (bool) 1
0x3d0: Return(); Pop(0)

0x3d1: Stack[-2] = (bool) 0
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty(object, object)
0x3d4: Push((int) 506)
0x3d5: Push((int) 2)
0x3d6: Push((int) 529270)
0x3d7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: PushEmpty(bool, object, int)
0x3da: Stack[-4] = Stack[-2]
0x3db: Stack[-1] = (int) 384
0x3dc: Call2 0x3fa

0x3dd: Pop(3)
0x3de: Return(); Pop(2)

0x3df: Stack[-1] = 0
0x3e0: PushEmpty(object, object)
0x3e1: Push((int) 505)
0x3e2: Push((int) 2)
0x3e3: Push((int) 529269)
0x3e4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: PushEmpty(bool, object, int)
0x3e7: Stack[-4] = Stack[-2]
0x3e8: Stack[-1] = (int) 384
0x3e9: Call2 0x3fa

0x3ea: Pop(3)
0x3eb: Return(); Pop(2)

0x3ec: Stack[-1] = 0
0x3ed: PushEmpty(object, object)
0x3ee: @ GetDiaryRoot(Stack[-1])
0x3ef: Pop(0)
0x3f0: Pop(0); Push((bool) Stack[-1] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f2: Push("Can't retrieve diary root") // @poff=342
0x3f3: @ Trace(Stack[-1])
0x3f4: Pop(1)
0x3f5: Stack[-3] = (bool) 0
0x3f6: Return(); Pop(2)

0x3f7: Stack[-1] = Stack[-3]
0x3f8: Return(); Pop(2)

0x3f9: Stack[-1] = 0
0x3fa: PushEmpty(object, object, int, object, object, int)
0x3fb: PushEmpty(object)
0x3fc: Call2 0x3ed

0x3fd: Stack[-1] = Stack[-4]
0x3fe: Pop(1)
0x3ff: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=394
0x400: Pop(0)
0x401: Pop(0); Push((bool) Stack[-2] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x403: Push("Can't find diary parent with id: ") // @poff=399
0x404: Pop(1); Push(Stack[-1] + Stack[-8]);
0x405: @ Trace(Stack[-1])
0x406: Pop(1)
0x407: Stack[-9] = (bool) 0
0x408: Return(); Pop(6)

0x409: @@ AddChild(Stack[-8]); Obj=2 // @poff=467
0x40a: Pop(0)
0x40b: Push((int) 7)
0x40c: @ SendWorldWndMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ GetCategory(Stack[-1]); Obj=8 // @poff=476
0x40f: Pop(0)
0x410: @ SetDiarySection(Stack[-1])
0x411: Pop(0)
0x412: Stack[-9] = (bool) 0
0x413: Return(); Pop(6)

0x414: Stack[-2] = 0
0x415: Stack[-3] = 0
0x416: PushEmpty(int, int)
0x417: Push("branch") // @poff=488
0x418: @ GetVariable(Stack[-1], Stack[-2])
0x419: Pop(1)
0x41a: Push((int) 0)
0x41b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41d: Stack[-3] = (int) 1
0x41e: Return(); Pop(2)

0x41f: GOTO 0x425

0x420: Push((int) 1)
0x421: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-3] = (int) 2
0x424: Return(); Pop(2)

0x425: Stack[-3] = (int) 3
0x426: Return(); Pop(2)

0x427: Stack[-1] = (int) 515592
0x428: Return(); Pop(0)

0x429: Stack[-1] = (int) 511961
0x42a: Return(); Pop(0)

0x42b: Stack[-1] = "ui/NPC_Burah.png" // @poff=502
0x42c: Return(); Pop(0)

0x42d: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=536
0x42e: Return(); Pop(0)

0x42f: Stack[-1] = (bool) 1
0x430: Return(); Pop(0)

