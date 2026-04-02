GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Julia.png
	W:ui/NPC_Julia_b.png
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004a0075006c00690061002e0070006e0067000000750069002f004e00500043005f004a0075006c00690061005f0062002e0070006e00670000006200720061006e00630068000000
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
	IsLoaded (1 args)
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

RunOp = 0x2cf
RunTask = 7

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2a5 Vars = (int, int)
	GTASK_7 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x321 Vars = (int)
		EVENT_6 Op = 0x347 Vars = ()
		EVENT_5 Op = 0x356 Vars = ()
		EVENT_45 Op = 0x363 Vars = (bool)
		EVENT_0 Op = 0x36f Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3f3

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
0x11: Call2 0x4fa

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x44d

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3f8

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x533

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x531

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x535

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x537

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x53b

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
0x55: Call2 0x43c

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
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 535294)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535295)
0x6e: Push((int) 36973)
0x6f: Push((int) 36972)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535302)
0x73: Push((int) -1)
0x74: Push((int) 36980)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535303)
0x78: Push((int) -1)
0x79: Push((int) 36981)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x539

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x4d7

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x539

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x4de

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x4f3

0xb8: Pop(0)
0xb9: Push((int) 36971)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535294)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535295)
0xc6: Push((int) 36973)
0xc7: Push((int) 36972)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535302)
0xcb: Push((int) -1)
0xcc: Push((int) 36980)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535303)
0xd0: Push((int) -1)
0xd1: Push((int) 36981)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36973)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535296)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535297)
0xe2: Push((int) 36975)
0xe3: Push((int) 36974)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535301)
0xe7: Push((int) 36975)
0xe8: Push((int) 36978)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36975)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535298)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535299)
0xf9: Push((int) -1)
0xfa: Push((int) 36976)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535300)
0xfe: Push((int) -1)
0xff: Push((int) 36977)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x539

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xb4

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object)
0x113: PushEmpty(object)
0x114: Call2 0x4fa

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x44d

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x3f8

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x533

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x531

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x535

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x537

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x53b

0x13a: Pop(0)
0x13b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x13c: Pop(1)
0x13d: Stack[-2] = (int) -1
0x13e: @ IsOverrideActive(Stack[-3])
0x13f: Pop(0)
0x140: Push(Stack[-3])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ DoDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(object, object)
0x147: Stack[-11] = Stack[-2]
0x148: Stack[-6] = Stack[-1]
0x149: Push(-2, 4); TaskCall(4)
0x14a: Call2 0x161

0x14b: Pop(-2, 4); TaskReturn
0x14c: Pop(2)
0x14d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: @ sync()
0x152: Pop(0)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: GOTO 0x14f

0x156: PushEmpty(object)
0x157: Stack[-10] = Stack[-1]
0x158: Call2 0x43c

0x159: Pop(1)
0x15a: @ StopDialog(Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x15d: Pop(0)
0x15e: Stack[-2] = Stack[-10]
0x15f: Return(); Pop(8)

0x160: Stack[-4] = 0
0x161: PushEmpty()
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x163: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x165: Push((int) 1)
0x166: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x19b

0x16a: Pop(1)
0x16b: Push((int) 518012)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 518013)
0x171: Push((int) 32562)
0x172: Push((int) 19146)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 531249)
0x176: Push((int) 32565)
0x177: Push((int) 32564)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0x539

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x4d7

0x189: Pop(1)
0x18a: GOTO 0x181

0x18b: GOTO 0x19a

0x18c: Push("all") // @poff=138
0x18d: Push("idle") // @poff=146
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd()
0x191: Pop(0)
0x192: Push( Stack[3 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19a

0x195: Push("all") // @poff=138
0x196: Push("idle") // @poff=146
0x197: @ PlayAnimation(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: GOTO 0x190

0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool)
0x19d: Call2 0x539

0x19e: Pop(0)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(string, bool)
0x1a6: Stack[-3] = Stack[-2]
0x1a7: Push("") // @poff=102
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-1] = (bool) 0
0x1ab: GOTO 0x1ad

0x1ac: Stack[-1] = (bool) 1
0x1ad: Call2 0x4de

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x4f3

0x1b6: Pop(0)
0x1b7: Push((int) 19145)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 518012)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 518013)
0x1c4: Push((int) 32562)
0x1c5: Push((int) 19146)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 531249)
0x1c9: Push((int) 32565)
0x1ca: Push((int) 32564)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 32565)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x19b

0x1d4: Pop(1)
0x1d5: Push((int) 531250)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 531251)
0x1db: Push((int) 32562)
0x1dc: Push((int) 32566)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 32562)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral" // @poff=89
0x1e5: Call2 0x19b

0x1e6: Pop(1)
0x1e7: Push((int) 531247)
0x1e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e9: Pop(1)
0x1ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x1eb: Pop(0)
0x1ec: Push((int) 531248)
0x1ed: Push((int) -1)
0x1ee: Push((int) 32563)
0x1ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f0: Pop(3)
0x1f1: Push((int) 531252)
0x1f2: Push((int) -1)
0x1f3: Push((int) 32568)
0x1f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f8: PushEmpty(bool)
0x1f9: Call2 0x539

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: @ lshStopAnimation()
0x1fd: Pop(0)
0x1fe: GOTO 0x201

0x1ff: @ StopAnimation()
0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: GOTO 0x1b2

0x203: Return(); Pop(0)

0x204: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x205: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x206: PushEmpty(bool, object)
0x207: PushEmpty(object)
0x208: Call2 0x4fa

0x209: Stack[-1] = Stack[-2]
0x20a: Pop(1)
0x20b: Call2 0x44d

0x20c: Pop(2)
0x20d: PushEmpty(bool, object, float)
0x20e: Stack[-12] = Stack[-2]
0x20f: Stack[-1] = (float) 70.0
0x210: Call2 0x3f8

0x211: Pop(2)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-10] = (int) -2
0x215: Return(); Pop(8)

0x216: @ CreateDialog(Stack[-4])
0x217: Pop(0)
0x218: PushEmpty(int)
0x219: Call2 0x533

0x21a: Pop(0)
0x21b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x21c: Pop(1)
0x21d: PushEmpty(int)
0x21e: Call2 0x531

0x21f: Pop(0)
0x220: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x221: Pop(1)
0x222: PushEmpty(string)
0x223: Call2 0x535

0x224: Pop(0)
0x225: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x226: Pop(1)
0x227: PushEmpty(string)
0x228: Call2 0x537

0x229: Pop(0)
0x22a: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x22b: Pop(1)
0x22c: PushEmpty(int)
0x22d: Call2 0x53b

0x22e: Pop(0)
0x22f: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x230: Pop(1)
0x231: Stack[-2] = (int) -1
0x232: @ IsOverrideActive(Stack[-3])
0x233: Pop(0)
0x234: Push(Stack[-3])
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-10] = (int) -2
0x237: Return(); Pop(8)

0x238: @ DoDialog(Stack[-4])
0x239: Pop(0)
0x23a: PushEmpty(object, object)
0x23b: Stack[-11] = Stack[-2]
0x23c: Stack[-6] = Stack[-1]
0x23d: Push(-2, 4); TaskCall(6)
0x23e: Call2 0x255

0x23f: Pop(-2, 4); TaskReturn
0x240: Pop(2)
0x241: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: @ sync()
0x246: Pop(0)
0x247: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x248: Pop(0)
0x249: GOTO 0x243

0x24a: PushEmpty(object)
0x24b: Stack[-10] = Stack[-1]
0x24c: Call2 0x43c

0x24d: Pop(1)
0x24e: @ StopDialog(Stack[-4])
0x24f: Pop(0)
0x250: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x251: Pop(0)
0x252: Stack[-2] = Stack[-10]
0x253: Return(); Pop(8)

0x254: Stack[-4] = 0
0x255: PushEmpty()
0x256: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x257: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x258: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x259: Push((int) 1)
0x25a: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Neutral" // @poff=89
0x25d: Call2 0x28f

0x25e: Pop(1)
0x25f: Push((int) 540551)
0x260: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x261: Pop(1)
0x262: @@@ ClearReplies(); Obj=0 // @poff=116
0x263: Pop(0)
0x264: Push((int) 540552)
0x265: Push((int) -1)
0x266: Push((int) 42561)
0x267: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x268: Pop(3)
0x269: Push((int) 540795)
0x26a: Push((int) -1)
0x26b: Push((int) 42844)
0x26c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26d: Pop(3)
0x26e: GOTO 0x271

0x26f: Return(); Pop(0)

0x270: GOTO 0x259

0x271: PushEmpty(bool)
0x272: Call2 0x539

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x275: @ lshWaitForAnimEnd()
0x276: Pop(0)
0x277: Push( Stack[3 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x27f

0x27a: PushEmpty(string)
0x27b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x27c: Call2 0x4d7

0x27d: Pop(1)
0x27e: GOTO 0x275

0x27f: GOTO 0x28e

0x280: Push("all") // @poff=138
0x281: Push("idle") // @poff=146
0x282: @ PlayAnimation(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: @ WaitForAnimEnd()
0x285: Pop(0)
0x286: Push( Stack[3 + Tasks[-1].StackPointer] )
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x28e

0x289: Push("all") // @poff=138
0x28a: Push("idle") // @poff=146
0x28b: @ PlayAnimation(Stack[-2], Stack[-1])
0x28c: Pop(2)
0x28d: GOTO 0x284

0x28e: Return(); Pop(0)

0x28f: PushEmpty()
0x290: PushEmpty(bool)
0x291: Call2 0x539

0x292: Pop(0)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: Return(); Pop(0)

0x296: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Return(); Pop(0)

0x299: PushEmpty(string, bool)
0x29a: Stack[-3] = Stack[-2]
0x29b: Push("") // @poff=102
0x29c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-1] = (bool) 0
0x29f: GOTO 0x2a1

0x2a0: Stack[-1] = (bool) 1
0x2a1: Call2 0x4de

0x2a2: Pop(2)
0x2a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty()
0x2a6: Push((int) 1)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2a8: PushEmpty()
0x2a9: Call2 0x4f3

0x2aa: Pop(0)
0x2ab: Push((int) 42560)
0x2ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral" // @poff=89
0x2b0: Call2 0x28f

0x2b1: Pop(1)
0x2b2: Push((int) 540551)
0x2b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b4: Pop(1)
0x2b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b6: Pop(0)
0x2b7: Push((int) 540552)
0x2b8: Push((int) -1)
0x2b9: Push((int) 42561)
0x2ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bb: Pop(3)
0x2bc: Push((int) 540795)
0x2bd: Push((int) -1)
0x2be: Push((int) 42844)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x539

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: @ lshStopAnimation()
0x2c8: Pop(0)
0x2c9: GOTO 0x2cc

0x2ca: @ StopAnimation()
0x2cb: Pop(0)
0x2cc: Return(); Pop(0)

0x2cd: GOTO 0x2a6

0x2ce: Return(); Pop(0)

0x2cf: Push(GlobalVars[1])
0x2d0: Stack[-1] = (bool) 0
0x2d1: GlobalVars[1] = Stack[-1]; Pop(1)
0x2d2: PushEmpty()
0x2d3: Call2 0x2d6

0x2d4: Pop(0)
0x2d5: Return(); Pop(0)

0x2d6: PushEmpty(bool)
0x2d7: Call2 0x3f3

0x2d8: Pop(0)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: PushEmpty()
0x2dc: Push(-0, 0); TaskCall(0)
0x2dd: Call2 0x0

0x2de: Pop(-0, 0); TaskReturn
0x2df: Pop(0)
0x2e0: PushEmpty()
0x2e1: Call2 0x356

0x2e2: Pop(0)
0x2e3: @ GetDirection(Stack[-0]T)
0x2e4: Pop(0)
0x2e5: PushEmpty()
0x2e6: Call2 0x38c

0x2e7: Pop(0)
0x2e8: GOTO 0x2e5

0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(object, object)
0x2eb: Push("player") // @poff=156
0x2ec: @ FindActor(Stack[-2], Stack[-1])
0x2ed: Pop(1)
0x2ee: Pop(0); Push((bool) Stack[-1] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-3] = (bool) 0
0x2f1: Return(); Pop(2)

0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-3] = Stack[-1]
0x2f4: Call2 0x3ea

0x2f5: Stack[-2] = Stack[-5]
0x2f6: Pop(2)
0x2f7: Return(); Pop(2)

0x2f8: Stack[-1] = 0
0x2f9: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2fa: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2fb: @ RotateAsync(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(object, bool, object, bool)
0x2ff: Push("player") // @poff=156
0x300: @ FindActor(Stack[-3], Stack[-1])
0x301: Pop(1)
0x302: Pop(0); Push((bool) Stack[-2] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: Stack[-5] = (bool) 0
0x305: Return(); Pop(4)

0x306: PushEmpty(float, object)
0x307: Stack[-4] = Stack[-1]
0x308: Call2 0x3d8

0x309: Pop(1)
0x30a: Push((float)90000.0)
0x30b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-5] = (bool) 0
0x30e: Return(); Pop(4)

0x30f: @ CanSee(Stack[-1], Stack[-2])
0x310: Pop(0)
0x311: Stack[-1] = Stack[-5]
0x312: Return(); Pop(4)

0x313: Stack[-2] = 0
0x314: PushEmpty(float, float)
0x315: Push((int) 8)
0x316: Push((int) 16)
0x317: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: Push((int) 10)
0x31a: @ SetTimer(Stack[-1], Stack[-2])
0x31b: Pop(1)
0x31c: Return(); Pop(2)

0x31d: Push((int) 10)
0x31e: @ KillTimer(Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(0)

0x321: PushEmpty()
0x322: Push((int) 10)
0x323: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x325: PushEmpty()
0x326: Call2 0x31d

0x327: Pop(0)
0x328: PushEmpty(bool)
0x329: Stack[-1] = (bool) 0
0x32a: PushEmpty(bool)
0x32b: Call2 0x3f3

0x32c: Pop(0)
0x32d: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32e: PushEmpty(bool)
0x32f: Call2 0x2fe

0x330: Pop(0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Stack[-1] = (bool) 1
0x333: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x334: PushEmpty(bool)
0x335: Call2 0x2ea

0x336: Pop(0)
0x337: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x338: PushEmpty(bool, object)
0x339: PushEmpty(object)
0x33a: Call2 0x4fa

0x33b: Stack[-1] = Stack[-2]
0x33c: Pop(1)
0x33d: Call2 0x487

0x33e: Pop(2)
0x33f: GOTO 0x346

0x340: PushEmpty()
0x341: Call2 0x2f9

0x342: Pop(0)
0x343: PushEmpty()
0x344: Call2 0x314

0x345: Pop(0)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: Call2 0x3d3

0x349: Pop(0)
0x34a: PushEmpty()
0x34b: Call2 0x31d

0x34c: Pop(0)
0x34d: @ lshStopSpeech()
0x34e: Pop(0)
0x34f: @ lshStopAnimation()
0x350: Pop(0)
0x351: @ StopAsync()
0x352: Pop(0)
0x353: @ Hold()
0x354: Pop(0)
0x355: Return(); Pop(0)

0x356: @ StopGroup0()
0x357: Pop(0)
0x358: PushEmpty()
0x359: Call2 0x31d

0x35a: Pop(0)
0x35b: PushEmpty(string)
0x35c: Stack[-1] = "Neutral" // @poff=89
0x35d: Call2 0x4d7

0x35e: Pop(1)
0x35f: PushEmpty()
0x360: Call2 0x314

0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: Push(Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x366: PushEmpty()
0x367: Call2 0x314

0x368: Pop(0)
0x369: GOTO 0x36e

0x36a: PushEmpty(string)
0x36b: Stack[-1] = "Neutral" // @poff=89
0x36c: Call2 0x4d7

0x36d: Pop(1)
0x36e: Return(); Pop(0)

0x36f: PushEmpty(bool, bool)
0x370: @ IsOverrideActive(Stack[-1])
0x371: Pop(0)
0x372: Pop(0); Push((bool) Stack[-1] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x374: EventDisable(0)
0x375: PushEmpty()
0x376: Call2 0x3d3

0x377: Pop(0)
0x378: PushEmpty(bool, object)
0x379: Stack[-5] = Stack[-1]
0x37a: Call2 0x3ea

0x37b: Pop(2)
0x37c: EventEnable(0)
0x37d: PushEmpty(object)
0x37e: Stack[-4] = Stack[-1]
0x37f: Call2 0x54c

0x380: Pop(1)
0x381: PushEmpty(string)
0x382: Stack[-1] = "Neutral" // @poff=89
0x383: Call2 0x4d7

0x384: Pop(1)
0x385: PushEmpty()
0x386: Call2 0x31d

0x387: Pop(0)
0x388: PushEmpty()
0x389: Call2 0x314

0x38a: Pop(0)
0x38b: Return(); Pop(2)

0x38c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x38d: @ WaitForAnimEnd()
0x38e: Pop(0)
0x38f: PushEmpty(bool)
0x390: Call2 0x3f3

0x391: Pop(0)
0x392: Pop(1); Push((bool) Stack[-1] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Return(); Pop(12)

0x395: PushEmpty(int)
0x396: Call2 0x520

0x397: Stack[-1] = Stack[-7]
0x398: Pop(1)
0x399: Stack[-5] = (int) 0
0x39a: PushEmpty(bool)
0x39b: Stack[-1] = (bool) 0
0x39c: Push((int) 5)
0x39d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39f: PushEmpty(bool)
0x3a0: Call2 0x3f3

0x3a1: Pop(0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: Stack[-1] = (bool) 1
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3a5: Pop(0); Push((bool) Stack[-6] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a7: Push((int) 3)
0x3a8: @ Sleep(Stack[-1], Stack[-5])
0x3a9: Pop(1)
0x3aa: Pop(0); Push((bool) Stack[-4] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: GOTO 0x3ce

0x3ad: GOTO 0x3c3

0x3ae: @ irand(Stack[-3], Stack[-6])
0x3af: Pop(0)
0x3b0: Push((int) 5)
0x3b1: @ irand(Stack[-3], Stack[-1])
0x3b2: Pop(1)
0x3b3: Push((int) 0)
0x3b4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: Stack[-3] = (int) 0
0x3b7: Push("all") // @poff=138
0x3b8: PushEmpty(string, int)
0x3b9: Stack[-6] = Stack[-1]
0x3ba: Call2 0x519

0x3bb: Pop(1)
0x3bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: @ WaitForAnimEnd(Stack[-1])
0x3bf: Pop(0)
0x3c0: Pop(0); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: GOTO 0x3ce

0x3c3: PushEmpty(bool)
0x3c4: Call2 0x3d1

0x3c5: Pop(0)
0x3c6: Pop(1); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: GOTO 0x3ce

0x3c9: @ ResetAAS()
0x3ca: Pop(0)
0x3cb: Push((int) 1)
0x3cc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3cd: GOTO 0x39a

0x3ce: @ ResetAAS()
0x3cf: Pop(0)
0x3d0: Return(); Pop(12)

0x3d1: Stack[-1] = (bool) 1
0x3d2: Return(); Pop(0)

0x3d3: @ StopAnimation()
0x3d4: Pop(0)
0x3d5: @ StopGroup0()
0x3d6: Pop(0)
0x3d7: Return(); Pop(0)

0x3d8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3d9: @ GetPosition(Stack[-3])
0x3da: Pop(0)
0x3db: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x3dc: Pop(0)
0x3dd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3de: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3df: Return(); Pop(6)

0x3e0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3e1: @ GetPosition(Stack[-3])
0x3e2: Pop(0)
0x3e3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3e4: Push(CvectorIndex(Stack[-2], 0))
0x3e5: Push(CvectorIndex(Stack[-3], 2))
0x3e6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3e7: Pop(2)
0x3e8: Stack[-1] = Stack[-8]
0x3e9: Return(); Pop(6)

0x3ea: PushEmpty(cvector, cvector)
0x3eb: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x3ec: Pop(0)
0x3ed: PushEmpty(bool, cvector)
0x3ee: Stack[-3] = Stack[-1]
0x3ef: Call2 0x3e0

0x3f0: Stack[-2] = Stack[-6]
0x3f1: Pop(2)
0x3f2: Return(); Pop(2)

0x3f3: PushEmpty(bool, bool)
0x3f4: @ IsLoaded(Stack[-1])
0x3f5: Pop(0)
0x3f6: Stack[-1] = Stack[-3]
0x3f7: Return(); Pop(2)

0x3f8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3f9: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x3fa: Pop(0)
0x3fb: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x3fc: Pop(0)
0x3fd: Push(CvectorIndex(Stack[-8], 1))
0x3fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ff: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x400: @ GetPosition(Stack[-7])
0x401: Pop(0)
0x402: @ GetEyesHeight(Stack[-9])
0x403: Pop(0)
0x404: Push(CvectorIndex(Stack[-7], 1))
0x405: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x406: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x407: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x408: Push(CvectorIndex(Stack[-6], 1))
0x409: Stack[-1] = (int) 0
0x40a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x40b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x40c: Pop(1); Push(Sqrt(Stack[-1]))
0x40d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x40e: Stack[-5] = -Stack[-6]; Pop(0);
0x40f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x410: PushEmpty(cvector, cvector)
0x411: Push([0.0, 1.0, 0.0])
0x412: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x413: Call2 0x500

0x414: Pop(1)
0x415: Push((int) 25)
0x416: Pop(2); Push(Stack[-2] * Stack[-1]);
0x417: Pop(2); Push(Stack[-2] + Stack[-1]);
0x418: Push([0.0, 10.0, 0.0])
0x419: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x41a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x41b: @ IsOverrideActive(Stack[-2])
0x41c: Pop(0)
0x41d: Push(Stack[-2])
0x41e: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41f: Stack[-21] = (bool) 0
0x420: Return(); Pop(18)

0x421: @ StopWorld()
0x422: Pop(0)
0x423: @ CameraTransit(Stack[-3], Stack[-5])
0x424: Pop(0)
0x425: Push(CvectorIndex(Stack[-4], 0))
0x426: Push(CvectorIndex(Stack[-5], 2))
0x427: @ Rotate(Stack[-2], Stack[-1])
0x428: Pop(2)
0x429: PushEmpty(bool)
0x42a: Call2 0x539

0x42b: Pop(0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: GOTO 0x436

0x42e: Push("head") // @poff=196
0x42f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x430: Pop(1)
0x431: Push(Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x433: Push("head") // @poff=196
0x434: @ LookAsyncCamera(Stack[-1])
0x435: Pop(1)
0x436: @ CameraWaitForPlayFinish()
0x437: Pop(0)
0x438: @ ResumeWorld()
0x439: Pop(0)
0x43a: Stack[-21] = (bool) 1
0x43b: Return(); Pop(18)

0x43c: PushEmpty(bool, bool)
0x43d: @ CameraSwitchToNormal()
0x43e: Pop(0)
0x43f: PushEmpty(bool)
0x440: Call2 0x539

0x441: Pop(0)
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: GOTO 0x44c

0x444: Push("head") // @poff=196
0x445: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x446: Pop(1)
0x447: Push(Stack[-1])
0x448: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x449: Push("head") // @poff=196
0x44a: @ UnlookAsync(Stack[-1])
0x44b: Pop(1)
0x44c: Return(); Pop(2)

0x44d: PushEmpty(int, int, int, int)
0x44e: Push("voice_common") // @poff=206
0x44f: @ GetVariable(Stack[-1], Stack[-3])
0x450: Pop(1)
0x451: Push(Stack[-2])
0x452: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x453: PushEmpty(bool, object)
0x454: Stack[-7] = Stack[-1]
0x455: Call2 0x487

0x456: Pop(1)
0x457: Pop(1); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x459: PushEmpty(bool, object)
0x45a: Stack[-7] = Stack[-1]
0x45b: Call2 0x4ac

0x45c: Pop(1)
0x45d: Pop(1); Push((bool) Stack[-1] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-6] = (bool) 0
0x460: Return(); Pop(4)

0x461: Push((int) 2)
0x462: @ irand(Stack[-2], Stack[-1])
0x463: Pop(1)
0x464: Push(Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x466: Push("voice_common") // @poff=206
0x467: Push((int) 1)
0x468: Pop(1); Push(Stack[-4] + Stack[-1]);
0x469: Push((int) 3)
0x46a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x46b: @ SetVariable(Stack[-2], Stack[-1])
0x46c: Pop(2)
0x46d: GOTO 0x472

0x46e: Push("voice_common") // @poff=206
0x46f: Push((int) 0)
0x470: @ SetVariable(Stack[-2], Stack[-1])
0x471: Pop(2)
0x472: GOTO 0x485

0x473: PushEmpty(bool, object)
0x474: Stack[-7] = Stack[-1]
0x475: Call2 0x4ac

0x476: Pop(1)
0x477: Pop(1); Push((bool) Stack[-1] == 0)
0x478: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x479: PushEmpty(bool, object)
0x47a: Stack[-7] = Stack[-1]
0x47b: Call2 0x487

0x47c: Pop(1)
0x47d: Pop(1); Push((bool) Stack[-1] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-6] = (bool) 0
0x480: Return(); Pop(4)

0x481: Push("voice_common") // @poff=206
0x482: Push((int) 1)
0x483: @ SetVariable(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: Stack[-6] = (bool) 1
0x486: Return(); Pop(4)

0x487: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x488: Stack[-5] = "c" // @poff=232
0x489: Stack[-4] = (int) 0
0x48a: Push((int) 1)
0x48b: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x48c: Push((int) 1)
0x48d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x48e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x48f: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x490: Pop(1)
0x491: Pop(0); Push((bool) Stack[-3] == 0)
0x492: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x493: GOTO 0x497

0x494: Push((int) 1)
0x495: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x496: GOTO 0x48a

0x497: Pop(0); Push((bool) Stack[-4] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x499: Stack[-12] = (bool) 0
0x49a: Return(); Pop(10)

0x49b: Stack[-2] = (int) 0
0x49c: Push((int) 1)
0x49d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: @ irand(Stack[-2], Stack[-4])
0x4a0: Pop(0)
0x4a1: Push((int) 1)
0x4a2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4a3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x4a5: Pop(1)
0x4a6: PushEmpty(bool, string)
0x4a7: Stack[-3] = Stack[-1]
0x4a8: Call2 0x4e4

0x4a9: Stack[-2] = Stack[-14]
0x4aa: Pop(2)
0x4ab: Return(); Pop(10)

0x4ac: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4ad: Push("d") // @poff=202
0x4ae: PushEmpty(int)
0x4af: Call2 0x50a

0x4b0: Pop(0)
0x4b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b2: Push("m") // @poff=260
0x4b3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4b4: Stack[-4] = (int) 0
0x4b5: Push((int) 1)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b7: Push((int) 1)
0x4b8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4ba: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x4bb: Pop(1)
0x4bc: Pop(0); Push((bool) Stack[-3] == 0)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: GOTO 0x4c2

0x4bf: Push((int) 1)
0x4c0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4c1: GOTO 0x4b5

0x4c2: Pop(0); Push((bool) Stack[-4] == 0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: Stack[-12] = (bool) 0
0x4c5: Return(); Pop(10)

0x4c6: Stack[-2] = (int) 0
0x4c7: Push((int) 1)
0x4c8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ca: @ irand(Stack[-2], Stack[-4])
0x4cb: Pop(0)
0x4cc: Push((int) 1)
0x4cd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4cf: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x4d0: Pop(1)
0x4d1: PushEmpty(bool, string)
0x4d2: Stack[-3] = Stack[-1]
0x4d3: Call2 0x4e4

0x4d4: Stack[-2] = Stack[-14]
0x4d5: Pop(2)
0x4d6: Return(); Pop(10)

0x4d7: PushEmpty(float, float, float, float)
0x4d8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4d9: Pop(0)
0x4da: Push((bool) 0)
0x4db: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(1)
0x4dd: Return(); Pop(4)

0x4de: PushEmpty(float, float, float, float)
0x4df: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4e0: Pop(0)
0x4e1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4e2: Pop(0)
0x4e3: Return(); Pop(4)

0x4e4: PushEmpty(bool, bool)
0x4e5: PushEmpty(bool)
0x4e6: Call2 0x539

0x4e7: Pop(0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4e9: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4ea: Pop(0)
0x4eb: Push(Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ed: @ lshPlaySpeech(Stack[-3])
0x4ee: Pop(0)
0x4ef: Stack[-4] = (bool) 1
0x4f0: Return(); Pop(2)

0x4f1: Stack[-4] = (bool) 0
0x4f2: Return(); Pop(2)

0x4f3: PushEmpty(bool)
0x4f4: Call2 0x539

0x4f5: Pop(0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: @ lshStopSpeech()
0x4f8: Pop(0)
0x4f9: Return(); Pop(0)

0x4fa: PushEmpty(object, object)
0x4fb: @ self(Stack[-1])
0x4fc: Pop(0)
0x4fd: Stack[-1] = Stack[-3]
0x4fe: Return(); Pop(2)

0x4ff: Stack[-1] = 0
0x500: PushEmpty(float, float)
0x501: Pop(0); Push(Stack[-3] | Stack[-3]);
0x502: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x503: Push((float)9.999999974752427e-07)
0x504: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-4] = [0.0, 0.0, 0.0]
0x507: Return(); Pop(2)

0x508: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x509: Return(); Pop(2)

0x50a: PushEmpty(float, float)
0x50b: @ GetGameTime(Stack[-1])
0x50c: Pop(0)
0x50d: Push((int) 1)
0x50e: PushEmpty(int)
0x50f: Push((int) 24)
0x510: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x511: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x512: Return(); Pop(2)

0x513: PushEmpty()
0x514: PushEmpty(int)
0x515: Call2 0x50a

0x516: Pop(0)
0x517: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x518: Return(); Pop(0)

0x519: PushEmpty(string, string)
0x51a: Stack[-1] = "idle" // @poff=146
0x51b: Push(Stack[-3])
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51e: Stack[-1] = Stack[-4]
0x51f: Return(); Pop(2)

0x520: PushEmpty(int, bool, int, bool)
0x521: Stack[-2] = (int) 0
0x522: Push("all") // @poff=138
0x523: PushEmpty(string, int)
0x524: Stack[-5] = Stack[-1]
0x525: Call2 0x519

0x526: Pop(1)
0x527: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x528: Pop(2)
0x529: Pop(0); Push((bool) Stack[-1] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: GOTO 0x52f

0x52c: Push((int) 1)
0x52d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52e: GOTO 0x522

0x52f: Stack[-2] = Stack[-5]
0x530: Return(); Pop(4)

0x531: Stack[-1] = (int) 515537
0x532: Return(); Pop(0)

0x533: Stack[-1] = (int) 502862
0x534: Return(); Pop(0)

0x535: Stack[-1] = "ui/NPC_Julia.png" // @poff=264
0x536: Return(); Pop(0)

0x537: Stack[-1] = "ui/NPC_Julia_b.png" // @poff=298
0x538: Return(); Pop(0)

0x539: Stack[-1] = (bool) 1
0x53a: Return(); Pop(0)

0x53b: PushEmpty(int, int)
0x53c: Push("branch") // @poff=336
0x53d: @ GetVariable(Stack[-1], Stack[-2])
0x53e: Pop(1)
0x53f: Push((int) 0)
0x540: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x542: Stack[-3] = (int) 1
0x543: Return(); Pop(2)

0x544: GOTO 0x54a

0x545: Push((int) 1)
0x546: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-3] = (int) 2
0x549: Return(); Pop(2)

0x54a: Stack[-3] = (int) 3
0x54b: Return(); Pop(2)

0x54c: PushEmpty()
0x54d: Push(GlobalVars[1])
0x54e: Pop(1); Push((bool) Stack[-1] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x550: PushEmpty(int, object)
0x551: Stack[-3] = Stack[-1]
0x552: Push(-2, 1); TaskCall(3)
0x553: Call2 0x110

0x554: Pop(-2, 1); TaskReturn
0x555: Pop(2)
0x556: Push(GlobalVars[1])
0x557: Stack[-1] = (bool) 1
0x558: GlobalVars[1] = Stack[-1]; Pop(1)
0x559: PushEmpty(bool)
0x55a: Stack[-1] = (bool) 0
0x55b: PushEmpty(bool, int)
0x55c: Stack[-1] = (int) 12
0x55d: Call2 0x513

0x55e: Pop(1)
0x55f: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x560: Push(GlobalVars[2])
0x561: Pop(1); Push((bool) Stack[-1] == 0)
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: Stack[-1] = (bool) 1
0x564: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x565: PushEmpty(int, object)
0x566: Stack[-3] = Stack[-1]
0x567: Push(-2, 1); TaskCall(1)
0x568: Call2 0xd

0x569: Pop(-2, 1); TaskReturn
0x56a: Pop(2)
0x56b: Push(GlobalVars[2])
0x56c: Stack[-1] = (bool) 1
0x56d: GlobalVars[2] = Stack[-1]; Pop(1)
0x56e: Return(); Pop(0)

0x56f: PushEmpty(int, object)
0x570: Stack[-3] = Stack[-1]
0x571: Push(-2, 1); TaskCall(5)
0x572: Call2 0x204

0x573: Pop(-2, 1); TaskReturn
0x574: Pop(2)
0x575: Return(); Pop(0)

