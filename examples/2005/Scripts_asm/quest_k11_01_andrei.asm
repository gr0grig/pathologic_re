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
	W:ook11Andrei1
	W:branch
	W:ui/NPC_Andrei.png
	W:ui/NPC_Andrei_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006b003100310041006e006400720065006900310000006200720061006e00630068000000750069002f004e00500043005f0041006e0064007200650069002e0070006e0067000000750069002f004e00500043005f0041006e0064007200650069005f0062002e0070006e0067000000
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

RunOp = 0x125
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x129 Vars = (string)
		EVENT_6 Op = 0x13d Vars = ()
		EVENT_5 Op = 0x14a Vars = ()
		EVENT_7 Op = 0x199 Vars = (int)
		EVENT_45 Op = 0x1db Vars = (bool)
		EVENT_0 Op = 0x1e7 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x26b

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
0x11: Call2 0x372

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x2c5

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x270

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x3cd

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x3cb

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x3cf

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x3d1

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x3ba

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
0x55: Call2 0x2b4

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
0x63: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa2

0x67: Pop(1)
0x68: Push((int) 528036)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x3ae

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 528037)
0x73: Push((int) 29400)
0x74: Push((int) 29399)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 528040)
0x78: Push((int) -1)
0x79: Push((int) 29402)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 541066)
0x7d: Push((int) -1)
0x7e: Push((int) 43171)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x62

0x84: PushEmpty(bool)
0x85: Call2 0x3d3

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x34f

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all") // @poff=138
0x94: Push("idle") // @poff=146
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x3d3

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-3] = Stack[-2]
0xae: Push("") // @poff=102
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x356

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x36b

0xbd: Pop(0)
0xbe: Push((int) 29399)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x3a8

0xc5: Pop(2)
0xc6: Push((int) 29398)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xc9: PushEmpty(string)
0xca: Stack[-1] = "Neutral" // @poff=89
0xcb: Call2 0xa2

0xcc: Pop(1)
0xcd: Push((int) 528036)
0xce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xcf: Pop(1)
0xd0: @@@ ClearReplies(); Obj=0 // @poff=116
0xd1: Pop(0)
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x3ae

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd7: Push((int) 528037)
0xd8: Push((int) 29400)
0xd9: Push((int) 29399)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 528040)
0xdd: Push((int) -1)
0xde: Push((int) 29402)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Push((int) 541066)
0xe2: Push((int) -1)
0xe3: Push((int) 43171)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 29400)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral" // @poff=89
0xec: Call2 0xa2

0xed: Pop(1)
0xee: Push((int) 528038)
0xef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf0: Pop(1)
0xf1: @@@ ClearReplies(); Obj=0 // @poff=116
0xf2: Pop(0)
0xf3: Push((int) 528039)
0xf4: Push((int) 43172)
0xf5: Push((int) 29401)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 43172)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral" // @poff=89
0xfe: Call2 0xa2

0xff: Pop(1)
0x100: Push((int) 541067)
0x101: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x102: Pop(1)
0x103: @@@ ClearReplies(); Obj=0 // @poff=116
0x104: Pop(0)
0x105: Push((int) 541068)
0x106: Push((int) -1)
0x107: Push((int) 43173)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Push((int) 541069)
0x10b: Push((int) -1)
0x10c: Push((int) 43174)
0x10d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x111: PushEmpty(bool)
0x112: Call2 0x3d3

0x113: Pop(0)
0x114: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x115: @ lshStopAnimation()
0x116: Pop(0)
0x117: GOTO 0x11a

0x118: @ StopAnimation()
0x119: Pop(0)
0x11a: Return(); Pop(0)

0x11b: GOTO 0xb9

0x11c: Return(); Pop(0)

0x11d: PushEmpty()
0x11e: PushEmpty(int, object)
0x11f: Stack[-3] = Stack[-1]
0x120: Push(-2, 1); TaskCall(1)
0x121: Call2 0xd

0x122: Pop(-2, 1); TaskReturn
0x123: Pop(2)
0x124: Return(); Pop(0)

0x125: PushEmpty()
0x126: Call2 0x14e

0x127: Pop(0)
0x128: Return(); Pop(0)

0x129: PushEmpty(bool, bool)
0x12a: Push("cleanup") // @poff=156
0x12b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x12d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x12e: @ IsLoaded(Stack[-1])
0x12f: Pop(0)
0x130: Pop(0); Push((bool) Stack[-1] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object)
0x133: Call2 0x372

0x134: Pop(0)
0x135: @ RemoveActor(Stack[-1])
0x136: Pop(1)
0x137: GOTO 0x13c

0x138: Push("restore") // @poff=172
0x139: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x13c: Return(); Pop(2)

0x13d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x13e: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13f: PushEmpty(object)
0x140: Call2 0x372

0x141: Pop(0)
0x142: @ RemoveActor(Stack[-1])
0x143: Pop(1)
0x144: @ Hold()
0x145: Pop(0)
0x146: PushEmpty()
0x147: Call2 0x1bf

0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: PushEmpty()
0x14b: Call2 0x1ce

0x14c: Pop(0)
0x14d: Return(); Pop(0)

0x14e: PushEmpty(bool)
0x14f: Call2 0x26b

0x150: Pop(0)
0x151: Pop(1); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x153: PushEmpty()
0x154: Push(-0, 0); TaskCall(0)
0x155: Call2 0x0

0x156: Pop(-0, 0); TaskReturn
0x157: Pop(0)
0x158: PushEmpty()
0x159: Call2 0x14a

0x15a: Pop(0)
0x15b: @ GetDirection(Stack[-0]T)
0x15c: Pop(0)
0x15d: PushEmpty()
0x15e: Call2 0x204

0x15f: Pop(0)
0x160: GOTO 0x15d

0x161: Return(); Pop(0)

0x162: PushEmpty(object, object)
0x163: Push("player") // @poff=188
0x164: @ FindActor(Stack[-2], Stack[-1])
0x165: Pop(1)
0x166: Pop(0); Push((bool) Stack[-1] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x168: Stack[-3] = (bool) 0
0x169: Return(); Pop(2)

0x16a: PushEmpty(bool, object)
0x16b: Stack[-3] = Stack[-1]
0x16c: Call2 0x262

0x16d: Stack[-2] = Stack[-5]
0x16e: Pop(2)
0x16f: Return(); Pop(2)

0x170: Stack[-1] = 0
0x171: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x172: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x173: @ RotateAsync(Stack[-2], Stack[-1])
0x174: Pop(2)
0x175: Return(); Pop(0)

0x176: PushEmpty(object, bool, object, bool)
0x177: Push("player") // @poff=188
0x178: @ FindActor(Stack[-3], Stack[-1])
0x179: Pop(1)
0x17a: Pop(0); Push((bool) Stack[-2] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-5] = (bool) 0
0x17d: Return(); Pop(4)

0x17e: PushEmpty(float, object)
0x17f: Stack[-4] = Stack[-1]
0x180: Call2 0x250

0x181: Pop(1)
0x182: Push((float)90000.0)
0x183: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x185: Stack[-5] = (bool) 0
0x186: Return(); Pop(4)

0x187: @ CanSee(Stack[-1], Stack[-2])
0x188: Pop(0)
0x189: Stack[-1] = Stack[-5]
0x18a: Return(); Pop(4)

0x18b: Stack[-2] = 0
0x18c: PushEmpty(float, float)
0x18d: Push((int) 8)
0x18e: Push((int) 16)
0x18f: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: Push((int) 10)
0x192: @ SetTimer(Stack[-1], Stack[-2])
0x193: Pop(1)
0x194: Return(); Pop(2)

0x195: Push((int) 10)
0x196: @ KillTimer(Stack[-1])
0x197: Pop(1)
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Push((int) 10)
0x19b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x19d: PushEmpty()
0x19e: Call2 0x195

0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool)
0x1a3: Call2 0x26b

0x1a4: Pop(0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: PushEmpty(bool)
0x1a7: Call2 0x176

0x1a8: Pop(0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1ac: PushEmpty(bool)
0x1ad: Call2 0x162

0x1ae: Pop(0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b0: PushEmpty(bool, object)
0x1b1: PushEmpty(object)
0x1b2: Call2 0x372

0x1b3: Stack[-1] = Stack[-2]
0x1b4: Pop(1)
0x1b5: Call2 0x2ff

0x1b6: Pop(2)
0x1b7: GOTO 0x1be

0x1b8: PushEmpty()
0x1b9: Call2 0x171

0x1ba: Pop(0)
0x1bb: PushEmpty()
0x1bc: Call2 0x18c

0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty()
0x1c0: Call2 0x24b

0x1c1: Pop(0)
0x1c2: PushEmpty()
0x1c3: Call2 0x195

0x1c4: Pop(0)
0x1c5: @ lshStopSpeech()
0x1c6: Pop(0)
0x1c7: @ lshStopAnimation()
0x1c8: Pop(0)
0x1c9: @ StopAsync()
0x1ca: Pop(0)
0x1cb: @ Hold()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: @ StopGroup0()
0x1cf: Pop(0)
0x1d0: PushEmpty()
0x1d1: Call2 0x195

0x1d2: Pop(0)
0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral" // @poff=89
0x1d5: Call2 0x34f

0x1d6: Pop(1)
0x1d7: PushEmpty()
0x1d8: Call2 0x18c

0x1d9: Pop(0)
0x1da: Return(); Pop(0)

0x1db: PushEmpty()
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1de: PushEmpty()
0x1df: Call2 0x18c

0x1e0: Pop(0)
0x1e1: GOTO 0x1e6

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral" // @poff=89
0x1e4: Call2 0x34f

0x1e5: Pop(1)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(bool, bool)
0x1e8: @ IsOverrideActive(Stack[-1])
0x1e9: Pop(0)
0x1ea: Pop(0); Push((bool) Stack[-1] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ec: EventDisable(0)
0x1ed: PushEmpty()
0x1ee: Call2 0x24b

0x1ef: Pop(0)
0x1f0: PushEmpty(bool, object)
0x1f1: Stack[-5] = Stack[-1]
0x1f2: Call2 0x262

0x1f3: Pop(2)
0x1f4: EventEnable(0)
0x1f5: PushEmpty(object)
0x1f6: Stack[-4] = Stack[-1]
0x1f7: Call2 0x11d

0x1f8: Pop(1)
0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral" // @poff=89
0x1fb: Call2 0x34f

0x1fc: Pop(1)
0x1fd: PushEmpty()
0x1fe: Call2 0x195

0x1ff: Pop(0)
0x200: PushEmpty()
0x201: Call2 0x18c

0x202: Pop(0)
0x203: Return(); Pop(2)

0x204: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x205: @ WaitForAnimEnd()
0x206: Pop(0)
0x207: PushEmpty(bool)
0x208: Call2 0x26b

0x209: Pop(0)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Return(); Pop(12)

0x20d: PushEmpty(int)
0x20e: Call2 0x397

0x20f: Stack[-1] = Stack[-7]
0x210: Pop(1)
0x211: Stack[-5] = (int) 0
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: Push((int) 5)
0x215: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x217: PushEmpty(bool)
0x218: Call2 0x26b

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: Stack[-1] = (bool) 1
0x21c: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x21d: Pop(0); Push((bool) Stack[-6] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21f: Push((int) 3)
0x220: @ Sleep(Stack[-1], Stack[-5])
0x221: Pop(1)
0x222: Pop(0); Push((bool) Stack[-4] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x246

0x225: GOTO 0x23b

0x226: @ irand(Stack[-3], Stack[-6])
0x227: Pop(0)
0x228: Push((int) 5)
0x229: @ irand(Stack[-3], Stack[-1])
0x22a: Pop(1)
0x22b: Push((int) 0)
0x22c: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Stack[-3] = (int) 0
0x22f: Push("all") // @poff=138
0x230: PushEmpty(string, int)
0x231: Stack[-6] = Stack[-1]
0x232: Call2 0x390

0x233: Pop(1)
0x234: @ PlayAnimation(Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: @ WaitForAnimEnd(Stack[-1])
0x237: Pop(0)
0x238: Pop(0); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x246

0x23b: PushEmpty(bool)
0x23c: Call2 0x249

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x246

0x241: @ ResetAAS()
0x242: Pop(0)
0x243: Push((int) 1)
0x244: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x245: GOTO 0x212

0x246: @ ResetAAS()
0x247: Pop(0)
0x248: Return(); Pop(12)

0x249: Stack[-1] = (bool) 1
0x24a: Return(); Pop(0)

0x24b: @ StopAnimation()
0x24c: Pop(0)
0x24d: @ StopGroup0()
0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x251: @ GetPosition(Stack[-3])
0x252: Pop(0)
0x253: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x254: Pop(0)
0x255: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x256: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x257: Return(); Pop(6)

0x258: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x259: @ GetPosition(Stack[-3])
0x25a: Pop(0)
0x25b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x25c: Push(CvectorIndex(Stack[-2], 0))
0x25d: Push(CvectorIndex(Stack[-3], 2))
0x25e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x25f: Pop(2)
0x260: Stack[-1] = Stack[-8]
0x261: Return(); Pop(6)

0x262: PushEmpty(cvector, cvector)
0x263: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x264: Pop(0)
0x265: PushEmpty(bool, cvector)
0x266: Stack[-3] = Stack[-1]
0x267: Call2 0x258

0x268: Stack[-2] = Stack[-6]
0x269: Pop(2)
0x26a: Return(); Pop(2)

0x26b: PushEmpty(bool, bool)
0x26c: @ IsLoaded(Stack[-1])
0x26d: Pop(0)
0x26e: Stack[-1] = Stack[-3]
0x26f: Return(); Pop(2)

0x270: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x271: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x272: Pop(0)
0x273: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x274: Pop(0)
0x275: Push(CvectorIndex(Stack[-8], 1))
0x276: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x277: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x278: @ GetPosition(Stack[-7])
0x279: Pop(0)
0x27a: @ GetEyesHeight(Stack[-9])
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-7], 1))
0x27d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x27f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x280: Push(CvectorIndex(Stack[-6], 1))
0x281: Stack[-1] = (int) 0
0x282: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x283: Pop(0); Push(Stack[-6] | Stack[-6]);
0x284: Pop(1); Push(Sqrt(Stack[-1]))
0x285: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x286: Stack[-5] = -Stack[-6]; Pop(0);
0x287: Pop(0); Push(Stack[-6] * Stack[-19]);
0x288: PushEmpty(cvector, cvector)
0x289: Push([0.0, 1.0, 0.0])
0x28a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x28b: Call2 0x378

0x28c: Pop(1)
0x28d: Push((int) 25)
0x28e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x290: Push([0.0, 10.0, 0.0])
0x291: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x292: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x293: @ IsOverrideActive(Stack[-2])
0x294: Pop(0)
0x295: Push(Stack[-2])
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-21] = (bool) 0
0x298: Return(); Pop(18)

0x299: @ StopWorld()
0x29a: Pop(0)
0x29b: @ CameraTransit(Stack[-3], Stack[-5])
0x29c: Pop(0)
0x29d: Push(CvectorIndex(Stack[-4], 0))
0x29e: Push(CvectorIndex(Stack[-5], 2))
0x29f: @ Rotate(Stack[-2], Stack[-1])
0x2a0: Pop(2)
0x2a1: PushEmpty(bool)
0x2a2: Call2 0x3d3

0x2a3: Pop(0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2ae

0x2a6: Push("head") // @poff=228
0x2a7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a8: Pop(1)
0x2a9: Push(Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ab: Push("head") // @poff=228
0x2ac: @ LookAsyncCamera(Stack[-1])
0x2ad: Pop(1)
0x2ae: @ CameraWaitForPlayFinish()
0x2af: Pop(0)
0x2b0: @ ResumeWorld()
0x2b1: Pop(0)
0x2b2: Stack[-21] = (bool) 1
0x2b3: Return(); Pop(18)

0x2b4: PushEmpty(bool, bool)
0x2b5: @ CameraSwitchToNormal()
0x2b6: Pop(0)
0x2b7: PushEmpty(bool)
0x2b8: Call2 0x3d3

0x2b9: Pop(0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c4

0x2bc: Push("head") // @poff=228
0x2bd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2be: Pop(1)
0x2bf: Push(Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c1: Push("head") // @poff=228
0x2c2: @ UnlookAsync(Stack[-1])
0x2c3: Pop(1)
0x2c4: Return(); Pop(2)

0x2c5: PushEmpty(int, int, int, int)
0x2c6: Push("voice_common") // @poff=238
0x2c7: @ GetVariable(Stack[-1], Stack[-3])
0x2c8: Pop(1)
0x2c9: Push(Stack[-2])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-7] = Stack[-1]
0x2cd: Call2 0x2ff

0x2ce: Pop(1)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-7] = Stack[-1]
0x2d3: Call2 0x324

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-6] = (bool) 0
0x2d8: Return(); Pop(4)

0x2d9: Push((int) 2)
0x2da: @ irand(Stack[-2], Stack[-1])
0x2db: Pop(1)
0x2dc: Push(Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2de: Push("voice_common") // @poff=238
0x2df: Push((int) 1)
0x2e0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2e1: Push((int) 3)
0x2e2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2e3: @ SetVariable(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: GOTO 0x2ea

0x2e6: Push("voice_common") // @poff=238
0x2e7: Push((int) 0)
0x2e8: @ SetVariable(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: GOTO 0x2fd

0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-7] = Stack[-1]
0x2ed: Call2 0x324

0x2ee: Pop(1)
0x2ef: Pop(1); Push((bool) Stack[-1] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f1: PushEmpty(bool, object)
0x2f2: Stack[-7] = Stack[-1]
0x2f3: Call2 0x2ff

0x2f4: Pop(1)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-6] = (bool) 0
0x2f8: Return(); Pop(4)

0x2f9: Push("voice_common") // @poff=238
0x2fa: Push((int) 1)
0x2fb: @ SetVariable(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Stack[-6] = (bool) 1
0x2fe: Return(); Pop(4)

0x2ff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x300: Stack[-5] = "c" // @poff=264
0x301: Stack[-4] = (int) 0
0x302: Push((int) 1)
0x303: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[-5] + Stack[-1]);
0x306: Pop(1); Push(Stack[-6] + Stack[-1]);
0x307: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x308: Pop(1)
0x309: Pop(0); Push((bool) Stack[-3] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x30f

0x30c: Push((int) 1)
0x30d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x30e: GOTO 0x302

0x30f: Pop(0); Push((bool) Stack[-4] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-12] = (bool) 0
0x312: Return(); Pop(10)

0x313: Stack[-2] = (int) 0
0x314: Push((int) 1)
0x315: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: @ irand(Stack[-2], Stack[-4])
0x318: Pop(0)
0x319: Push((int) 1)
0x31a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x31b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x31d: Pop(1)
0x31e: PushEmpty(bool, string)
0x31f: Stack[-3] = Stack[-1]
0x320: Call2 0x35c

0x321: Stack[-2] = Stack[-14]
0x322: Pop(2)
0x323: Return(); Pop(10)

0x324: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x325: Push("d") // @poff=234
0x326: PushEmpty(int)
0x327: Call2 0x387

0x328: Pop(0)
0x329: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32a: Push("m") // @poff=292
0x32b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x32c: Stack[-4] = (int) 0
0x32d: Push((int) 1)
0x32e: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32f: Push((int) 1)
0x330: Pop(1); Push(Stack[-5] + Stack[-1]);
0x331: Pop(1); Push(Stack[-6] + Stack[-1]);
0x332: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x333: Pop(1)
0x334: Pop(0); Push((bool) Stack[-3] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33a

0x337: Push((int) 1)
0x338: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x339: GOTO 0x32d

0x33a: Pop(0); Push((bool) Stack[-4] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-12] = (bool) 0
0x33d: Return(); Pop(10)

0x33e: Stack[-2] = (int) 0
0x33f: Push((int) 1)
0x340: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: @ irand(Stack[-2], Stack[-4])
0x343: Pop(0)
0x344: Push((int) 1)
0x345: Pop(1); Push(Stack[-3] + Stack[-1]);
0x346: Pop(1); Push(Stack[-6] + Stack[-1]);
0x347: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x348: Pop(1)
0x349: PushEmpty(bool, string)
0x34a: Stack[-3] = Stack[-1]
0x34b: Call2 0x35c

0x34c: Stack[-2] = Stack[-14]
0x34d: Pop(2)
0x34e: Return(); Pop(10)

0x34f: PushEmpty(float, float, float, float)
0x350: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x351: Pop(0)
0x352: Push((bool) 0)
0x353: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(1)
0x355: Return(); Pop(4)

0x356: PushEmpty(float, float, float, float)
0x357: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x358: Pop(0)
0x359: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x35a: Pop(0)
0x35b: Return(); Pop(4)

0x35c: PushEmpty(bool, bool)
0x35d: PushEmpty(bool)
0x35e: Call2 0x3d3

0x35f: Pop(0)
0x360: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x361: @ lshHasSpeech(Stack[-1], Stack[-3])
0x362: Pop(0)
0x363: Push(Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x365: @ lshPlaySpeech(Stack[-3])
0x366: Pop(0)
0x367: Stack[-4] = (bool) 1
0x368: Return(); Pop(2)

0x369: Stack[-4] = (bool) 0
0x36a: Return(); Pop(2)

0x36b: PushEmpty(bool)
0x36c: Call2 0x3d3

0x36d: Pop(0)
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: @ lshStopSpeech()
0x370: Pop(0)
0x371: Return(); Pop(0)

0x372: PushEmpty(object, object)
0x373: @ self(Stack[-1])
0x374: Pop(0)
0x375: Stack[-1] = Stack[-3]
0x376: Return(); Pop(2)

0x377: Stack[-1] = 0
0x378: PushEmpty(float, float)
0x379: Pop(0); Push(Stack[-3] | Stack[-3]);
0x37a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x37b: Push((float)9.999999974752427e-07)
0x37c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-4] = [0.0, 0.0, 0.0]
0x37f: Return(); Pop(2)

0x380: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x381: Return(); Pop(2)

0x382: PushEmpty(int, int)
0x383: @ GetVariable(Stack[-3], Stack[-1])
0x384: Pop(0)
0x385: Stack[-1] = Stack[-4]
0x386: Return(); Pop(2)

0x387: PushEmpty(float, float)
0x388: @ GetGameTime(Stack[-1])
0x389: Pop(0)
0x38a: Push((int) 1)
0x38b: PushEmpty(int)
0x38c: Push((int) 24)
0x38d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x38e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x38f: Return(); Pop(2)

0x390: PushEmpty(string, string)
0x391: Stack[-1] = "idle" // @poff=146
0x392: Push(Stack[-3])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x395: Stack[-1] = Stack[-4]
0x396: Return(); Pop(2)

0x397: PushEmpty(int, bool, int, bool)
0x398: Stack[-2] = (int) 0
0x399: Push("all") // @poff=138
0x39a: PushEmpty(string, int)
0x39b: Stack[-5] = Stack[-1]
0x39c: Call2 0x390

0x39d: Pop(1)
0x39e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: Pop(0); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: GOTO 0x3a6

0x3a3: Push((int) 1)
0x3a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3a5: GOTO 0x399

0x3a6: Stack[-2] = Stack[-5]
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty()
0x3a9: Push("ook11Andrei1") // @poff=296
0x3aa: Push((int) 1)
0x3ab: @ SetVariable(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty()
0x3af: PushEmpty(int, string)
0x3b0: Stack[-1] = "ook11Andrei1" // @poff=296
0x3b1: Call2 0x382

0x3b2: Pop(1)
0x3b3: Push((int) 0)
0x3b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-2] = (bool) 1
0x3b7: Return(); Pop(0)

0x3b8: Stack[-2] = (bool) 0
0x3b9: Return(); Pop(0)

0x3ba: PushEmpty(int, int)
0x3bb: Push("branch") // @poff=322
0x3bc: @ GetVariable(Stack[-1], Stack[-2])
0x3bd: Pop(1)
0x3be: Push((int) 0)
0x3bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c1: Stack[-3] = (int) 1
0x3c2: Return(); Pop(2)

0x3c3: GOTO 0x3c9

0x3c4: Push((int) 1)
0x3c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-3] = (int) 2
0x3c8: Return(); Pop(2)

0x3c9: Stack[-3] = (int) 3
0x3ca: Return(); Pop(2)

0x3cb: Stack[-1] = (int) 515529
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = (int) 502855
0x3ce: Return(); Pop(0)

0x3cf: Stack[-1] = "ui/NPC_Andrei.png" // @poff=336
0x3d0: Return(); Pop(0)

0x3d1: Stack[-1] = "ui/NPC_Andrei_b.png" // @poff=372
0x3d2: Return(); Pop(0)

0x3d3: Stack[-1] = (bool) 1
0x3d4: Return(); Pop(0)

