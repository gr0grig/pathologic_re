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
	W:ui/NPC_BigVlad.png
	W:ui/NPC_BigVlad_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000062003100300071003000340050006c0065006e006e0069006b00540061006c006b0000006200720061006e00630068000000750069002f004e00500043005f0042006900670056006c00610064002e0070006e0067000000750069002f004e00500043005f0042006900670056006c00610064005f0062002e0070006e0067000000
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

RunOp = 0x14c
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x150 Vars = (string)
		EVENT_6 Op = 0x164 Vars = ()
		EVENT_5 Op = 0x171 Vars = ()
		EVENT_7 Op = 0x1c0 Vars = (int)
		EVENT_45 Op = 0x202 Vars = (bool)
		EVENT_0 Op = 0x20e Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x292

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
0x11: Call2 0x399

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x2ec

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x297

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x3f4

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x3f2

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x3f6

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x3f8

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x3e1

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
0x55: Call2 0x2db

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
0x66: Call2 0x3d5

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x6a: PushEmpty(object, object)
0x6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Call2 0x3cf

0x6e: Pop(2)
0x6f: PushEmpty(string)
0x70: Stack[-1] = "Neutral" // @poff=89
0x71: Call2 0xb7

0x72: Pop(1)
0x73: Push((int) 530380)
0x74: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x75: Pop(1)
0x76: @@@ ClearReplies(); Obj=0 // @poff=116
0x77: Pop(0)
0x78: Push((int) 530381)
0x79: Push((int) 32786)
0x7a: Push((int) 31753)
0x7b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7c: Pop(3)
0x7d: Push((int) 530382)
0x7e: Push((int) 32786)
0x7f: Push((int) 31754)
0x80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x81: Pop(3)
0x82: GOTO 0x99

0x83: PushEmpty(string)
0x84: Stack[-1] = "Neutral" // @poff=89
0x85: Call2 0xb7

0x86: Pop(1)
0x87: Push((int) 530383)
0x88: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x89: Pop(1)
0x8a: @@@ ClearReplies(); Obj=0 // @poff=116
0x8b: Pop(0)
0x8c: Push((int) 530384)
0x8d: Push((int) -1)
0x8e: Push((int) 31756)
0x8f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x90: Pop(3)
0x91: Push((int) 531445)
0x92: Push((int) -1)
0x93: Push((int) 32792)
0x94: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x95: Pop(3)
0x96: GOTO 0x99

0x97: Return(); Pop(0)

0x98: GOTO 0x62

0x99: PushEmpty(bool)
0x9a: Call2 0x3fa

0x9b: Pop(0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x9d: @ lshWaitForAnimEnd()
0x9e: Pop(0)
0x9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xa7

0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa4: Call2 0x376

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
0xb9: Call2 0x3fa

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
0xc9: Call2 0x37d

0xca: Pop(2)
0xcb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: Push((int) 1)
0xcf: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xd0: PushEmpty()
0xd1: Call2 0x392

0xd2: Pop(0)
0xd3: Push((int) 31752)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x3d5

0xd9: Pop(1)
0xda: Pop(1); Push((bool) Stack[-1] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x3cf

0xe0: Pop(2)
0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral" // @poff=89
0xe3: Call2 0xb7

0xe4: Pop(1)
0xe5: Push((int) 530380)
0xe6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe7: Pop(1)
0xe8: @@@ ClearReplies(); Obj=0 // @poff=116
0xe9: Pop(0)
0xea: Push((int) 530381)
0xeb: Push((int) 32786)
0xec: Push((int) 31753)
0xed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xee: Pop(3)
0xef: Push((int) 530382)
0xf0: Push((int) 32786)
0xf1: Push((int) 31754)
0xf2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral" // @poff=89
0xf7: Call2 0xb7

0xf8: Pop(1)
0xf9: Push((int) 530383)
0xfa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfb: Pop(1)
0xfc: @@@ ClearReplies(); Obj=0 // @poff=116
0xfd: Pop(0)
0xfe: Push((int) 530384)
0xff: Push((int) -1)
0x100: Push((int) 31756)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Push((int) 531445)
0x104: Push((int) -1)
0x105: Push((int) 32792)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 32786)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0xb7

0x10f: Pop(1)
0x110: Push((int) 531440)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 531441)
0x116: Push((int) 32788)
0x117: Push((int) 32787)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 531444)
0x11b: Push((int) 32788)
0x11c: Push((int) 32790)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 32788)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0xb7

0x126: Pop(1)
0x127: Push((int) 531442)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 531443)
0x12d: Push((int) -1)
0x12e: Push((int) 32789)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Push((int) 531446)
0x132: Push((int) -1)
0x133: Push((int) 32794)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x138: PushEmpty(bool)
0x139: Call2 0x3fa

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: @ lshStopAnimation()
0x13d: Pop(0)
0x13e: GOTO 0x141

0x13f: @ StopAnimation()
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: GOTO 0xce

0x143: Return(); Pop(0)

0x144: PushEmpty()
0x145: PushEmpty(int, object)
0x146: Stack[-3] = Stack[-1]
0x147: Push(-2, 1); TaskCall(1)
0x148: Call2 0xd

0x149: Pop(-2, 1); TaskReturn
0x14a: Pop(2)
0x14b: Return(); Pop(0)

0x14c: PushEmpty()
0x14d: Call2 0x175

0x14e: Pop(0)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, bool)
0x151: Push("cleanup") // @poff=156
0x152: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x154: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x155: @ IsLoaded(Stack[-1])
0x156: Pop(0)
0x157: Pop(0); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: PushEmpty(object)
0x15a: Call2 0x399

0x15b: Pop(0)
0x15c: @ RemoveActor(Stack[-1])
0x15d: Pop(1)
0x15e: GOTO 0x163

0x15f: Push("restore") // @poff=172
0x160: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x163: Return(); Pop(2)

0x164: Push( Stack[1 + Tasks[-1].StackPointer] )
0x165: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x166: PushEmpty(object)
0x167: Call2 0x399

0x168: Pop(0)
0x169: @ RemoveActor(Stack[-1])
0x16a: Pop(1)
0x16b: @ Hold()
0x16c: Pop(0)
0x16d: PushEmpty()
0x16e: Call2 0x1e6

0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: PushEmpty()
0x172: Call2 0x1f5

0x173: Pop(0)
0x174: Return(); Pop(0)

0x175: PushEmpty(bool)
0x176: Call2 0x292

0x177: Pop(0)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: PushEmpty()
0x17b: Push(-0, 0); TaskCall(0)
0x17c: Call2 0x0

0x17d: Pop(-0, 0); TaskReturn
0x17e: Pop(0)
0x17f: PushEmpty()
0x180: Call2 0x171

0x181: Pop(0)
0x182: @ GetDirection(Stack[-0]T)
0x183: Pop(0)
0x184: PushEmpty()
0x185: Call2 0x22b

0x186: Pop(0)
0x187: GOTO 0x184

0x188: Return(); Pop(0)

0x189: PushEmpty(object, object)
0x18a: Push("player") // @poff=188
0x18b: @ FindActor(Stack[-2], Stack[-1])
0x18c: Pop(1)
0x18d: Pop(0); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18f: Stack[-3] = (bool) 0
0x190: Return(); Pop(2)

0x191: PushEmpty(bool, object)
0x192: Stack[-3] = Stack[-1]
0x193: Call2 0x289

0x194: Stack[-2] = Stack[-5]
0x195: Pop(2)
0x196: Return(); Pop(2)

0x197: Stack[-1] = 0
0x198: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x199: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x19a: @ RotateAsync(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: Return(); Pop(0)

0x19d: PushEmpty(object, bool, object, bool)
0x19e: Push("player") // @poff=188
0x19f: @ FindActor(Stack[-3], Stack[-1])
0x1a0: Pop(1)
0x1a1: Pop(0); Push((bool) Stack[-2] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a3: Stack[-5] = (bool) 0
0x1a4: Return(); Pop(4)

0x1a5: PushEmpty(float, object)
0x1a6: Stack[-4] = Stack[-1]
0x1a7: Call2 0x277

0x1a8: Pop(1)
0x1a9: Push((float)90000.0)
0x1aa: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-5] = (bool) 0
0x1ad: Return(); Pop(4)

0x1ae: @ CanSee(Stack[-1], Stack[-2])
0x1af: Pop(0)
0x1b0: Stack[-1] = Stack[-5]
0x1b1: Return(); Pop(4)

0x1b2: Stack[-2] = 0
0x1b3: PushEmpty(float, float)
0x1b4: Push((int) 8)
0x1b5: Push((int) 16)
0x1b6: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: Push((int) 10)
0x1b9: @ SetTimer(Stack[-1], Stack[-2])
0x1ba: Pop(1)
0x1bb: Return(); Pop(2)

0x1bc: Push((int) 10)
0x1bd: @ KillTimer(Stack[-1])
0x1be: Pop(1)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty()
0x1c1: Push((int) 10)
0x1c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1c4: PushEmpty()
0x1c5: Call2 0x1bc

0x1c6: Pop(0)
0x1c7: PushEmpty(bool)
0x1c8: Stack[-1] = (bool) 0
0x1c9: PushEmpty(bool)
0x1ca: Call2 0x292

0x1cb: Pop(0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty(bool)
0x1ce: Call2 0x19d

0x1cf: Pop(0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 1
0x1d2: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d3: PushEmpty(bool)
0x1d4: Call2 0x189

0x1d5: Pop(0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d7: PushEmpty(bool, object)
0x1d8: PushEmpty(object)
0x1d9: Call2 0x399

0x1da: Stack[-1] = Stack[-2]
0x1db: Pop(1)
0x1dc: Call2 0x326

0x1dd: Pop(2)
0x1de: GOTO 0x1e5

0x1df: PushEmpty()
0x1e0: Call2 0x198

0x1e1: Pop(0)
0x1e2: PushEmpty()
0x1e3: Call2 0x1b3

0x1e4: Pop(0)
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty()
0x1e7: Call2 0x272

0x1e8: Pop(0)
0x1e9: PushEmpty()
0x1ea: Call2 0x1bc

0x1eb: Pop(0)
0x1ec: @ lshStopSpeech()
0x1ed: Pop(0)
0x1ee: @ lshStopAnimation()
0x1ef: Pop(0)
0x1f0: @ StopAsync()
0x1f1: Pop(0)
0x1f2: @ Hold()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: @ StopGroup0()
0x1f6: Pop(0)
0x1f7: PushEmpty()
0x1f8: Call2 0x1bc

0x1f9: Pop(0)
0x1fa: PushEmpty(string)
0x1fb: Stack[-1] = "Neutral" // @poff=89
0x1fc: Call2 0x376

0x1fd: Pop(1)
0x1fe: PushEmpty()
0x1ff: Call2 0x1b3

0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: PushEmpty()
0x203: Push(Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x205: PushEmpty()
0x206: Call2 0x1b3

0x207: Pop(0)
0x208: GOTO 0x20d

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral" // @poff=89
0x20b: Call2 0x376

0x20c: Pop(1)
0x20d: Return(); Pop(0)

0x20e: PushEmpty(bool, bool)
0x20f: @ IsOverrideActive(Stack[-1])
0x210: Pop(0)
0x211: Pop(0); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x213: EventDisable(0)
0x214: PushEmpty()
0x215: Call2 0x272

0x216: Pop(0)
0x217: PushEmpty(bool, object)
0x218: Stack[-5] = Stack[-1]
0x219: Call2 0x289

0x21a: Pop(2)
0x21b: EventEnable(0)
0x21c: PushEmpty(object)
0x21d: Stack[-4] = Stack[-1]
0x21e: Call2 0x144

0x21f: Pop(1)
0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral" // @poff=89
0x222: Call2 0x376

0x223: Pop(1)
0x224: PushEmpty()
0x225: Call2 0x1bc

0x226: Pop(0)
0x227: PushEmpty()
0x228: Call2 0x1b3

0x229: Pop(0)
0x22a: Return(); Pop(2)

0x22b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x22c: @ WaitForAnimEnd()
0x22d: Pop(0)
0x22e: PushEmpty(bool)
0x22f: Call2 0x292

0x230: Pop(0)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: Return(); Pop(12)

0x234: PushEmpty(int)
0x235: Call2 0x3be

0x236: Stack[-1] = Stack[-7]
0x237: Pop(1)
0x238: Stack[-5] = (int) 0
0x239: PushEmpty(bool)
0x23a: Stack[-1] = (bool) 0
0x23b: Push((int) 5)
0x23c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: PushEmpty(bool)
0x23f: Call2 0x292

0x240: Pop(0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x244: Pop(0); Push((bool) Stack[-6] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x246: Push((int) 3)
0x247: @ Sleep(Stack[-1], Stack[-5])
0x248: Pop(1)
0x249: Pop(0); Push((bool) Stack[-4] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: GOTO 0x26d

0x24c: GOTO 0x262

0x24d: @ irand(Stack[-3], Stack[-6])
0x24e: Pop(0)
0x24f: Push((int) 5)
0x250: @ irand(Stack[-3], Stack[-1])
0x251: Pop(1)
0x252: Push((int) 0)
0x253: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Stack[-3] = (int) 0
0x256: Push("all") // @poff=138
0x257: PushEmpty(string, int)
0x258: Stack[-6] = Stack[-1]
0x259: Call2 0x3b7

0x25a: Pop(1)
0x25b: @ PlayAnimation(Stack[-2], Stack[-1])
0x25c: Pop(2)
0x25d: @ WaitForAnimEnd(Stack[-1])
0x25e: Pop(0)
0x25f: Pop(0); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x26d

0x262: PushEmpty(bool)
0x263: Call2 0x270

0x264: Pop(0)
0x265: Pop(1); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x26d

0x268: @ ResetAAS()
0x269: Pop(0)
0x26a: Push((int) 1)
0x26b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x26c: GOTO 0x239

0x26d: @ ResetAAS()
0x26e: Pop(0)
0x26f: Return(); Pop(12)

0x270: Stack[-1] = (bool) 1
0x271: Return(); Pop(0)

0x272: @ StopAnimation()
0x273: Pop(0)
0x274: @ StopGroup0()
0x275: Pop(0)
0x276: Return(); Pop(0)

0x277: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x278: @ GetPosition(Stack[-3])
0x279: Pop(0)
0x27a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x27b: Pop(0)
0x27c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x27d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x27e: Return(); Pop(6)

0x27f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x280: @ GetPosition(Stack[-3])
0x281: Pop(0)
0x282: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x283: Push(CvectorIndex(Stack[-2], 0))
0x284: Push(CvectorIndex(Stack[-3], 2))
0x285: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x286: Pop(2)
0x287: Stack[-1] = Stack[-8]
0x288: Return(); Pop(6)

0x289: PushEmpty(cvector, cvector)
0x28a: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x28b: Pop(0)
0x28c: PushEmpty(bool, cvector)
0x28d: Stack[-3] = Stack[-1]
0x28e: Call2 0x27f

0x28f: Stack[-2] = Stack[-6]
0x290: Pop(2)
0x291: Return(); Pop(2)

0x292: PushEmpty(bool, bool)
0x293: @ IsLoaded(Stack[-1])
0x294: Pop(0)
0x295: Stack[-1] = Stack[-3]
0x296: Return(); Pop(2)

0x297: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x298: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x299: Pop(0)
0x29a: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x29b: Pop(0)
0x29c: Push(CvectorIndex(Stack[-8], 1))
0x29d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29f: @ GetPosition(Stack[-7])
0x2a0: Pop(0)
0x2a1: @ GetEyesHeight(Stack[-9])
0x2a2: Pop(0)
0x2a3: Push(CvectorIndex(Stack[-7], 1))
0x2a4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a7: Push(CvectorIndex(Stack[-6], 1))
0x2a8: Stack[-1] = (int) 0
0x2a9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2aa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ab: Pop(1); Push(Sqrt(Stack[-1]))
0x2ac: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ad: Stack[-5] = -Stack[-6]; Pop(0);
0x2ae: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2af: PushEmpty(cvector, cvector)
0x2b0: Push([0.0, 1.0, 0.0])
0x2b1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b2: Call2 0x39f

0x2b3: Pop(1)
0x2b4: Push((int) 25)
0x2b5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b7: Push([0.0, 10.0, 0.0])
0x2b8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ba: @ IsOverrideActive(Stack[-2])
0x2bb: Pop(0)
0x2bc: Push(Stack[-2])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: Stack[-21] = (bool) 0
0x2bf: Return(); Pop(18)

0x2c0: @ StopWorld()
0x2c1: Pop(0)
0x2c2: @ CameraTransit(Stack[-3], Stack[-5])
0x2c3: Pop(0)
0x2c4: Push(CvectorIndex(Stack[-4], 0))
0x2c5: Push(CvectorIndex(Stack[-5], 2))
0x2c6: @ Rotate(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: PushEmpty(bool)
0x2c9: Call2 0x3fa

0x2ca: Pop(0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d5

0x2cd: Push("head") // @poff=228
0x2ce: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cf: Pop(1)
0x2d0: Push(Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: Push("head") // @poff=228
0x2d3: @ LookAsyncCamera(Stack[-1])
0x2d4: Pop(1)
0x2d5: @ CameraWaitForPlayFinish()
0x2d6: Pop(0)
0x2d7: @ ResumeWorld()
0x2d8: Pop(0)
0x2d9: Stack[-21] = (bool) 1
0x2da: Return(); Pop(18)

0x2db: PushEmpty(bool, bool)
0x2dc: @ CameraSwitchToNormal()
0x2dd: Pop(0)
0x2de: PushEmpty(bool)
0x2df: Call2 0x3fa

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: GOTO 0x2eb

0x2e3: Push("head") // @poff=228
0x2e4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e5: Pop(1)
0x2e6: Push(Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e8: Push("head") // @poff=228
0x2e9: @ UnlookAsync(Stack[-1])
0x2ea: Pop(1)
0x2eb: Return(); Pop(2)

0x2ec: PushEmpty(int, int, int, int)
0x2ed: Push("voice_common") // @poff=238
0x2ee: @ GetVariable(Stack[-1], Stack[-3])
0x2ef: Pop(1)
0x2f0: Push(Stack[-2])
0x2f1: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-7] = Stack[-1]
0x2f4: Call2 0x326

0x2f5: Pop(1)
0x2f6: Pop(1); Push((bool) Stack[-1] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-7] = Stack[-1]
0x2fa: Call2 0x34b

0x2fb: Pop(1)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-6] = (bool) 0
0x2ff: Return(); Pop(4)

0x300: Push((int) 2)
0x301: @ irand(Stack[-2], Stack[-1])
0x302: Pop(1)
0x303: Push(Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x305: Push("voice_common") // @poff=238
0x306: Push((int) 1)
0x307: Pop(1); Push(Stack[-4] + Stack[-1]);
0x308: Push((int) 3)
0x309: Pop(2); Push(Stack[-2] % Stack[-1]);
0x30a: @ SetVariable(Stack[-2], Stack[-1])
0x30b: Pop(2)
0x30c: GOTO 0x311

0x30d: Push("voice_common") // @poff=238
0x30e: Push((int) 0)
0x30f: @ SetVariable(Stack[-2], Stack[-1])
0x310: Pop(2)
0x311: GOTO 0x324

0x312: PushEmpty(bool, object)
0x313: Stack[-7] = Stack[-1]
0x314: Call2 0x34b

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x318: PushEmpty(bool, object)
0x319: Stack[-7] = Stack[-1]
0x31a: Call2 0x326

0x31b: Pop(1)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-6] = (bool) 0
0x31f: Return(); Pop(4)

0x320: Push("voice_common") // @poff=238
0x321: Push((int) 1)
0x322: @ SetVariable(Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: Stack[-6] = (bool) 1
0x325: Return(); Pop(4)

0x326: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x327: Stack[-5] = "c" // @poff=264
0x328: Stack[-4] = (int) 0
0x329: Push((int) 1)
0x32a: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32b: Push((int) 1)
0x32c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x32d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x32e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x32f: Pop(1)
0x330: Pop(0); Push((bool) Stack[-3] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x336

0x333: Push((int) 1)
0x334: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x335: GOTO 0x329

0x336: Pop(0); Push((bool) Stack[-4] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-12] = (bool) 0
0x339: Return(); Pop(10)

0x33a: Stack[-2] = (int) 0
0x33b: Push((int) 1)
0x33c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: @ irand(Stack[-2], Stack[-4])
0x33f: Pop(0)
0x340: Push((int) 1)
0x341: Pop(1); Push(Stack[-3] + Stack[-1]);
0x342: Pop(1); Push(Stack[-6] + Stack[-1]);
0x343: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x344: Pop(1)
0x345: PushEmpty(bool, string)
0x346: Stack[-3] = Stack[-1]
0x347: Call2 0x383

0x348: Stack[-2] = Stack[-14]
0x349: Pop(2)
0x34a: Return(); Pop(10)

0x34b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x34c: Push("d") // @poff=234
0x34d: PushEmpty(int)
0x34e: Call2 0x3ae

0x34f: Pop(0)
0x350: Pop(2); Push(Stack[-2] + Stack[-1]);
0x351: Push("m") // @poff=292
0x352: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x353: Stack[-4] = (int) 0
0x354: Push((int) 1)
0x355: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x356: Push((int) 1)
0x357: Pop(1); Push(Stack[-5] + Stack[-1]);
0x358: Pop(1); Push(Stack[-6] + Stack[-1]);
0x359: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x35a: Pop(1)
0x35b: Pop(0); Push((bool) Stack[-3] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: GOTO 0x361

0x35e: Push((int) 1)
0x35f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x360: GOTO 0x354

0x361: Pop(0); Push((bool) Stack[-4] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-12] = (bool) 0
0x364: Return(); Pop(10)

0x365: Stack[-2] = (int) 0
0x366: Push((int) 1)
0x367: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: @ irand(Stack[-2], Stack[-4])
0x36a: Pop(0)
0x36b: Push((int) 1)
0x36c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x36d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x36f: Pop(1)
0x370: PushEmpty(bool, string)
0x371: Stack[-3] = Stack[-1]
0x372: Call2 0x383

0x373: Stack[-2] = Stack[-14]
0x374: Pop(2)
0x375: Return(); Pop(10)

0x376: PushEmpty(float, float, float, float)
0x377: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x378: Pop(0)
0x379: Push((bool) 0)
0x37a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(1)
0x37c: Return(); Pop(4)

0x37d: PushEmpty(float, float, float, float)
0x37e: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x37f: Pop(0)
0x380: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x381: Pop(0)
0x382: Return(); Pop(4)

0x383: PushEmpty(bool, bool)
0x384: PushEmpty(bool)
0x385: Call2 0x3fa

0x386: Pop(0)
0x387: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x388: @ lshHasSpeech(Stack[-1], Stack[-3])
0x389: Pop(0)
0x38a: Push(Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: @ lshPlaySpeech(Stack[-3])
0x38d: Pop(0)
0x38e: Stack[-4] = (bool) 1
0x38f: Return(); Pop(2)

0x390: Stack[-4] = (bool) 0
0x391: Return(); Pop(2)

0x392: PushEmpty(bool)
0x393: Call2 0x3fa

0x394: Pop(0)
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: @ lshStopSpeech()
0x397: Pop(0)
0x398: Return(); Pop(0)

0x399: PushEmpty(object, object)
0x39a: @ self(Stack[-1])
0x39b: Pop(0)
0x39c: Stack[-1] = Stack[-3]
0x39d: Return(); Pop(2)

0x39e: Stack[-1] = 0
0x39f: PushEmpty(float, float)
0x3a0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3a1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3a2: Push((float)9.999999974752427e-07)
0x3a3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-4] = [0.0, 0.0, 0.0]
0x3a6: Return(); Pop(2)

0x3a7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a8: Return(); Pop(2)

0x3a9: PushEmpty(int, int)
0x3aa: @ GetVariable(Stack[-3], Stack[-1])
0x3ab: Pop(0)
0x3ac: Stack[-1] = Stack[-4]
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty(float, float)
0x3af: @ GetGameTime(Stack[-1])
0x3b0: Pop(0)
0x3b1: Push((int) 1)
0x3b2: PushEmpty(int)
0x3b3: Push((int) 24)
0x3b4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3b5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3b6: Return(); Pop(2)

0x3b7: PushEmpty(string, string)
0x3b8: Stack[-1] = "idle" // @poff=146
0x3b9: Push(Stack[-3])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3bc: Stack[-1] = Stack[-4]
0x3bd: Return(); Pop(2)

0x3be: PushEmpty(int, bool, int, bool)
0x3bf: Stack[-2] = (int) 0
0x3c0: Push("all") // @poff=138
0x3c1: PushEmpty(string, int)
0x3c2: Stack[-5] = Stack[-1]
0x3c3: Call2 0x3b7

0x3c4: Pop(1)
0x3c5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: Pop(0); Push((bool) Stack[-1] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: GOTO 0x3cd

0x3ca: Push((int) 1)
0x3cb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3cc: GOTO 0x3c0

0x3cd: Stack[-2] = Stack[-5]
0x3ce: Return(); Pop(4)

0x3cf: PushEmpty()
0x3d0: Push("b10q04PlennikTalk") // @poff=296
0x3d1: Push((int) 1)
0x3d2: @ SetVariable(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: PushEmpty(int, string)
0x3d7: Stack[-1] = "b10q04PlennikTalk" // @poff=296
0x3d8: Call2 0x3a9

0x3d9: Pop(1)
0x3da: Push((int) 0)
0x3db: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: Stack[-2] = (bool) 1
0x3de: Return(); Pop(0)

0x3df: Stack[-2] = (bool) 0
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(int, int)
0x3e2: Push("branch") // @poff=332
0x3e3: @ GetVariable(Stack[-1], Stack[-2])
0x3e4: Pop(1)
0x3e5: Push((int) 0)
0x3e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e8: Stack[-3] = (int) 1
0x3e9: Return(); Pop(2)

0x3ea: GOTO 0x3f0

0x3eb: Push((int) 1)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-3] = (int) 2
0x3ef: Return(); Pop(2)

0x3f0: Stack[-3] = (int) 3
0x3f1: Return(); Pop(2)

0x3f2: Stack[-1] = (int) 515531
0x3f3: Return(); Pop(0)

0x3f4: Stack[-1] = (int) 502857
0x3f5: Return(); Pop(0)

0x3f6: Stack[-1] = "ui/NPC_BigVlad.png" // @poff=346
0x3f7: Return(); Pop(0)

0x3f8: Stack[-1] = "ui/NPC_BigVlad_b.png" // @poff=384
0x3f9: Return(); Pop(0)

0x3fa: Stack[-1] = (bool) 1
0x3fb: Return(); Pop(0)

