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
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Rubin.png
	W:ui/NPC_Rubin_b.png
	W:branch
	W:d12_rubin
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0052007500620069006e002e0070006e0067000000750069002f004e00500043005f0052007500620069006e005f0062002e0070006e00670000006200720061006e006300680000006400310032005f0072007500620069006e000000
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

RunOp = 0x1db
RunTask = 5

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x22a Vars = (int)
		EVENT_6 Op = 0x250 Vars = ()
		EVENT_5 Op = 0x25f Vars = ()
		EVENT_45 Op = 0x26c Vars = (bool)
		EVENT_0 Op = 0x278 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2fc

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
0x11: Call2 0x403

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x356

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x301

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x43c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x43a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x43e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x440

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x444

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
0x55: Call2 0x345

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
0x80: Call2 0x442

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x3e0

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
0x9f: Call2 0x442

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
0xaf: Call2 0x3e7

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x3fc

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
0x105: Call2 0x442

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
0x114: Call2 0x403

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x356

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x301

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x43c

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x43a

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x43e

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x440

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x444

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
0x158: Call2 0x345

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
0x16b: Push((int) 540554)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 540555)
0x171: Push((int) -1)
0x172: Push((int) 42564)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 540794)
0x176: Push((int) -1)
0x177: Push((int) 42843)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0x442

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x3e0

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
0x19d: Call2 0x442

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
0x1ad: Call2 0x3e7

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x3fc

0x1b6: Pop(0)
0x1b7: Push((int) 42563)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 540554)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 540555)
0x1c4: Push((int) -1)
0x1c5: Push((int) 42564)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 540794)
0x1c9: Push((int) -1)
0x1ca: Push((int) 42843)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1cf: PushEmpty(bool)
0x1d0: Call2 0x442

0x1d1: Pop(0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: @ lshStopAnimation()
0x1d4: Pop(0)
0x1d5: GOTO 0x1d8

0x1d6: @ StopAnimation()
0x1d7: Pop(0)
0x1d8: Return(); Pop(0)

0x1d9: GOTO 0x1b2

0x1da: Return(); Pop(0)

0x1db: PushEmpty()
0x1dc: Call2 0x1df

0x1dd: Pop(0)
0x1de: Return(); Pop(0)

0x1df: PushEmpty(bool)
0x1e0: Call2 0x2fc

0x1e1: Pop(0)
0x1e2: Pop(1); Push((bool) Stack[-1] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e4: PushEmpty()
0x1e5: Push(-0, 0); TaskCall(0)
0x1e6: Call2 0x0

0x1e7: Pop(-0, 0); TaskReturn
0x1e8: Pop(0)
0x1e9: PushEmpty()
0x1ea: Call2 0x25f

0x1eb: Pop(0)
0x1ec: @ GetDirection(Stack[-0]T)
0x1ed: Pop(0)
0x1ee: PushEmpty()
0x1ef: Call2 0x295

0x1f0: Pop(0)
0x1f1: GOTO 0x1ee

0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(object, object)
0x1f4: Push("player") // @poff=156
0x1f5: @ FindActor(Stack[-2], Stack[-1])
0x1f6: Pop(1)
0x1f7: Pop(0); Push((bool) Stack[-1] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-3] = (bool) 0
0x1fa: Return(); Pop(2)

0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-3] = Stack[-1]
0x1fd: Call2 0x2f3

0x1fe: Stack[-2] = Stack[-5]
0x1ff: Pop(2)
0x200: Return(); Pop(2)

0x201: Stack[-1] = 0
0x202: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x203: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x204: @ RotateAsync(Stack[-2], Stack[-1])
0x205: Pop(2)
0x206: Return(); Pop(0)

0x207: PushEmpty(object, bool, object, bool)
0x208: Push("player") // @poff=156
0x209: @ FindActor(Stack[-3], Stack[-1])
0x20a: Pop(1)
0x20b: Pop(0); Push((bool) Stack[-2] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-5] = (bool) 0
0x20e: Return(); Pop(4)

0x20f: PushEmpty(float, object)
0x210: Stack[-4] = Stack[-1]
0x211: Call2 0x2e1

0x212: Pop(1)
0x213: Push((float)90000.0)
0x214: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x216: Stack[-5] = (bool) 0
0x217: Return(); Pop(4)

0x218: @ CanSee(Stack[-1], Stack[-2])
0x219: Pop(0)
0x21a: Stack[-1] = Stack[-5]
0x21b: Return(); Pop(4)

0x21c: Stack[-2] = 0
0x21d: PushEmpty(float, float)
0x21e: Push((int) 8)
0x21f: Push((int) 16)
0x220: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(2)
0x222: Push((int) 10)
0x223: @ SetTimer(Stack[-1], Stack[-2])
0x224: Pop(1)
0x225: Return(); Pop(2)

0x226: Push((int) 10)
0x227: @ KillTimer(Stack[-1])
0x228: Pop(1)
0x229: Return(); Pop(0)

0x22a: PushEmpty()
0x22b: Push((int) 10)
0x22c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x22e: PushEmpty()
0x22f: Call2 0x226

0x230: Pop(0)
0x231: PushEmpty(bool)
0x232: Stack[-1] = (bool) 0
0x233: PushEmpty(bool)
0x234: Call2 0x2fc

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: PushEmpty(bool)
0x238: Call2 0x207

0x239: Pop(0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[-1] = (bool) 1
0x23c: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23d: PushEmpty(bool)
0x23e: Call2 0x1f3

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x241: PushEmpty(bool, object)
0x242: PushEmpty(object)
0x243: Call2 0x403

0x244: Stack[-1] = Stack[-2]
0x245: Pop(1)
0x246: Call2 0x390

0x247: Pop(2)
0x248: GOTO 0x24f

0x249: PushEmpty()
0x24a: Call2 0x202

0x24b: Pop(0)
0x24c: PushEmpty()
0x24d: Call2 0x21d

0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty()
0x251: Call2 0x2dc

0x252: Pop(0)
0x253: PushEmpty()
0x254: Call2 0x226

0x255: Pop(0)
0x256: @ lshStopSpeech()
0x257: Pop(0)
0x258: @ lshStopAnimation()
0x259: Pop(0)
0x25a: @ StopAsync()
0x25b: Pop(0)
0x25c: @ Hold()
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: @ StopGroup0()
0x260: Pop(0)
0x261: PushEmpty()
0x262: Call2 0x226

0x263: Pop(0)
0x264: PushEmpty(string)
0x265: Stack[-1] = "Neutral" // @poff=89
0x266: Call2 0x3e0

0x267: Pop(1)
0x268: PushEmpty()
0x269: Call2 0x21d

0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty()
0x26d: Push(Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26f: PushEmpty()
0x270: Call2 0x21d

0x271: Pop(0)
0x272: GOTO 0x277

0x273: PushEmpty(string)
0x274: Stack[-1] = "Neutral" // @poff=89
0x275: Call2 0x3e0

0x276: Pop(1)
0x277: Return(); Pop(0)

0x278: PushEmpty(bool, bool)
0x279: @ IsOverrideActive(Stack[-1])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x27d: EventDisable(0)
0x27e: PushEmpty()
0x27f: Call2 0x2dc

0x280: Pop(0)
0x281: PushEmpty(bool, object)
0x282: Stack[-5] = Stack[-1]
0x283: Call2 0x2f3

0x284: Pop(2)
0x285: EventEnable(0)
0x286: PushEmpty(object)
0x287: Stack[-4] = Stack[-1]
0x288: Call2 0x455

0x289: Pop(1)
0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral" // @poff=89
0x28c: Call2 0x3e0

0x28d: Pop(1)
0x28e: PushEmpty()
0x28f: Call2 0x226

0x290: Pop(0)
0x291: PushEmpty()
0x292: Call2 0x21d

0x293: Pop(0)
0x294: Return(); Pop(2)

0x295: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x296: @ WaitForAnimEnd()
0x297: Pop(0)
0x298: PushEmpty(bool)
0x299: Call2 0x2fc

0x29a: Pop(0)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: Return(); Pop(12)

0x29e: PushEmpty(int)
0x29f: Call2 0x429

0x2a0: Stack[-1] = Stack[-7]
0x2a1: Pop(1)
0x2a2: Stack[-5] = (int) 0
0x2a3: PushEmpty(bool)
0x2a4: Stack[-1] = (bool) 0
0x2a5: Push((int) 5)
0x2a6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a8: PushEmpty(bool)
0x2a9: Call2 0x2fc

0x2aa: Pop(0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-1] = (bool) 1
0x2ad: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2ae: Pop(0); Push((bool) Stack[-6] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b0: Push((int) 3)
0x2b1: @ Sleep(Stack[-1], Stack[-5])
0x2b2: Pop(1)
0x2b3: Pop(0); Push((bool) Stack[-4] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: GOTO 0x2d7

0x2b6: GOTO 0x2cc

0x2b7: @ irand(Stack[-3], Stack[-6])
0x2b8: Pop(0)
0x2b9: Push((int) 5)
0x2ba: @ irand(Stack[-3], Stack[-1])
0x2bb: Pop(1)
0x2bc: Push((int) 0)
0x2bd: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Stack[-3] = (int) 0
0x2c0: Push("all") // @poff=138
0x2c1: PushEmpty(string, int)
0x2c2: Stack[-6] = Stack[-1]
0x2c3: Call2 0x422

0x2c4: Pop(1)
0x2c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c6: Pop(2)
0x2c7: @ WaitForAnimEnd(Stack[-1])
0x2c8: Pop(0)
0x2c9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: GOTO 0x2d7

0x2cc: PushEmpty(bool)
0x2cd: Call2 0x2da

0x2ce: Pop(0)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2d7

0x2d2: @ ResetAAS()
0x2d3: Pop(0)
0x2d4: Push((int) 1)
0x2d5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2d6: GOTO 0x2a3

0x2d7: @ ResetAAS()
0x2d8: Pop(0)
0x2d9: Return(); Pop(12)

0x2da: Stack[-1] = (bool) 1
0x2db: Return(); Pop(0)

0x2dc: @ StopAnimation()
0x2dd: Pop(0)
0x2de: @ StopGroup0()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2e2: @ GetPosition(Stack[-3])
0x2e3: Pop(0)
0x2e4: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x2e5: Pop(0)
0x2e6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2e7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2e8: Return(); Pop(6)

0x2e9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2ea: @ GetPosition(Stack[-3])
0x2eb: Pop(0)
0x2ec: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2ed: Push(CvectorIndex(Stack[-2], 0))
0x2ee: Push(CvectorIndex(Stack[-3], 2))
0x2ef: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2f0: Pop(2)
0x2f1: Stack[-1] = Stack[-8]
0x2f2: Return(); Pop(6)

0x2f3: PushEmpty(cvector, cvector)
0x2f4: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x2f5: Pop(0)
0x2f6: PushEmpty(bool, cvector)
0x2f7: Stack[-3] = Stack[-1]
0x2f8: Call2 0x2e9

0x2f9: Stack[-2] = Stack[-6]
0x2fa: Pop(2)
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(bool, bool)
0x2fd: @ IsLoaded(Stack[-1])
0x2fe: Pop(0)
0x2ff: Stack[-1] = Stack[-3]
0x300: Return(); Pop(2)

0x301: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x302: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x303: Pop(0)
0x304: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x305: Pop(0)
0x306: Push(CvectorIndex(Stack[-8], 1))
0x307: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x308: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x309: @ GetPosition(Stack[-7])
0x30a: Pop(0)
0x30b: @ GetEyesHeight(Stack[-9])
0x30c: Pop(0)
0x30d: Push(CvectorIndex(Stack[-7], 1))
0x30e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x30f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x310: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x311: Push(CvectorIndex(Stack[-6], 1))
0x312: Stack[-1] = (int) 0
0x313: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x314: Pop(0); Push(Stack[-6] | Stack[-6]);
0x315: Pop(1); Push(Sqrt(Stack[-1]))
0x316: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x317: Stack[-5] = -Stack[-6]; Pop(0);
0x318: Pop(0); Push(Stack[-6] * Stack[-19]);
0x319: PushEmpty(cvector, cvector)
0x31a: Push([0.0, 1.0, 0.0])
0x31b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x31c: Call2 0x409

0x31d: Pop(1)
0x31e: Push((int) 25)
0x31f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x320: Pop(2); Push(Stack[-2] + Stack[-1]);
0x321: Push([0.0, 10.0, 0.0])
0x322: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x323: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x324: @ IsOverrideActive(Stack[-2])
0x325: Pop(0)
0x326: Push(Stack[-2])
0x327: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x328: Stack[-21] = (bool) 0
0x329: Return(); Pop(18)

0x32a: @ StopWorld()
0x32b: Pop(0)
0x32c: @ CameraTransit(Stack[-3], Stack[-5])
0x32d: Pop(0)
0x32e: Push(CvectorIndex(Stack[-4], 0))
0x32f: Push(CvectorIndex(Stack[-5], 2))
0x330: @ Rotate(Stack[-2], Stack[-1])
0x331: Pop(2)
0x332: PushEmpty(bool)
0x333: Call2 0x442

0x334: Pop(0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33f

0x337: Push("head") // @poff=196
0x338: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x339: Pop(1)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33c: Push("head") // @poff=196
0x33d: @ LookAsyncCamera(Stack[-1])
0x33e: Pop(1)
0x33f: @ CameraWaitForPlayFinish()
0x340: Pop(0)
0x341: @ ResumeWorld()
0x342: Pop(0)
0x343: Stack[-21] = (bool) 1
0x344: Return(); Pop(18)

0x345: PushEmpty(bool, bool)
0x346: @ CameraSwitchToNormal()
0x347: Pop(0)
0x348: PushEmpty(bool)
0x349: Call2 0x442

0x34a: Pop(0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x355

0x34d: Push("head") // @poff=196
0x34e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34f: Pop(1)
0x350: Push(Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x352: Push("head") // @poff=196
0x353: @ UnlookAsync(Stack[-1])
0x354: Pop(1)
0x355: Return(); Pop(2)

0x356: PushEmpty(int, int, int, int)
0x357: Push("voice_common") // @poff=206
0x358: @ GetVariable(Stack[-1], Stack[-3])
0x359: Pop(1)
0x35a: Push(Stack[-2])
0x35b: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x35c: PushEmpty(bool, object)
0x35d: Stack[-7] = Stack[-1]
0x35e: Call2 0x390

0x35f: Pop(1)
0x360: Pop(1); Push((bool) Stack[-1] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x362: PushEmpty(bool, object)
0x363: Stack[-7] = Stack[-1]
0x364: Call2 0x3b5

0x365: Pop(1)
0x366: Pop(1); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-6] = (bool) 0
0x369: Return(); Pop(4)

0x36a: Push((int) 2)
0x36b: @ irand(Stack[-2], Stack[-1])
0x36c: Pop(1)
0x36d: Push(Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x36f: Push("voice_common") // @poff=206
0x370: Push((int) 1)
0x371: Pop(1); Push(Stack[-4] + Stack[-1]);
0x372: Push((int) 3)
0x373: Pop(2); Push(Stack[-2] % Stack[-1]);
0x374: @ SetVariable(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: GOTO 0x37b

0x377: Push("voice_common") // @poff=206
0x378: Push((int) 0)
0x379: @ SetVariable(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: GOTO 0x38e

0x37c: PushEmpty(bool, object)
0x37d: Stack[-7] = Stack[-1]
0x37e: Call2 0x3b5

0x37f: Pop(1)
0x380: Pop(1); Push((bool) Stack[-1] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x382: PushEmpty(bool, object)
0x383: Stack[-7] = Stack[-1]
0x384: Call2 0x390

0x385: Pop(1)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-6] = (bool) 0
0x389: Return(); Pop(4)

0x38a: Push("voice_common") // @poff=206
0x38b: Push((int) 1)
0x38c: @ SetVariable(Stack[-2], Stack[-1])
0x38d: Pop(2)
0x38e: Stack[-6] = (bool) 1
0x38f: Return(); Pop(4)

0x390: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x391: Stack[-5] = "c" // @poff=232
0x392: Stack[-4] = (int) 0
0x393: Push((int) 1)
0x394: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x395: Push((int) 1)
0x396: Pop(1); Push(Stack[-5] + Stack[-1]);
0x397: Pop(1); Push(Stack[-6] + Stack[-1]);
0x398: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x399: Pop(1)
0x39a: Pop(0); Push((bool) Stack[-3] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3a0

0x39d: Push((int) 1)
0x39e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x39f: GOTO 0x393

0x3a0: Pop(0); Push((bool) Stack[-4] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-12] = (bool) 0
0x3a3: Return(); Pop(10)

0x3a4: Stack[-2] = (int) 0
0x3a5: Push((int) 1)
0x3a6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: @ irand(Stack[-2], Stack[-4])
0x3a9: Pop(0)
0x3aa: Push((int) 1)
0x3ab: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ad: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x3ae: Pop(1)
0x3af: PushEmpty(bool, string)
0x3b0: Stack[-3] = Stack[-1]
0x3b1: Call2 0x3ed

0x3b2: Stack[-2] = Stack[-14]
0x3b3: Pop(2)
0x3b4: Return(); Pop(10)

0x3b5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b6: Push("d") // @poff=202
0x3b7: PushEmpty(int)
0x3b8: Call2 0x413

0x3b9: Pop(0)
0x3ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3bb: Push("m") // @poff=260
0x3bc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3bd: Stack[-4] = (int) 0
0x3be: Push((int) 1)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c0: Push((int) 1)
0x3c1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3c2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x3c4: Pop(1)
0x3c5: Pop(0); Push((bool) Stack[-3] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: GOTO 0x3cb

0x3c8: Push((int) 1)
0x3c9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ca: GOTO 0x3be

0x3cb: Pop(0); Push((bool) Stack[-4] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-12] = (bool) 0
0x3ce: Return(); Pop(10)

0x3cf: Stack[-2] = (int) 0
0x3d0: Push((int) 1)
0x3d1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: @ irand(Stack[-2], Stack[-4])
0x3d4: Pop(0)
0x3d5: Push((int) 1)
0x3d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x3d9: Pop(1)
0x3da: PushEmpty(bool, string)
0x3db: Stack[-3] = Stack[-1]
0x3dc: Call2 0x3ed

0x3dd: Stack[-2] = Stack[-14]
0x3de: Pop(2)
0x3df: Return(); Pop(10)

0x3e0: PushEmpty(float, float, float, float)
0x3e1: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3e2: Pop(0)
0x3e3: Push((bool) 0)
0x3e4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(1)
0x3e6: Return(); Pop(4)

0x3e7: PushEmpty(float, float, float, float)
0x3e8: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3e9: Pop(0)
0x3ea: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3eb: Pop(0)
0x3ec: Return(); Pop(4)

0x3ed: PushEmpty(bool, bool)
0x3ee: PushEmpty(bool)
0x3ef: Call2 0x442

0x3f0: Pop(0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3f3: Pop(0)
0x3f4: Push(Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f6: @ lshPlaySpeech(Stack[-3])
0x3f7: Pop(0)
0x3f8: Stack[-4] = (bool) 1
0x3f9: Return(); Pop(2)

0x3fa: Stack[-4] = (bool) 0
0x3fb: Return(); Pop(2)

0x3fc: PushEmpty(bool)
0x3fd: Call2 0x442

0x3fe: Pop(0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: @ lshStopSpeech()
0x401: Pop(0)
0x402: Return(); Pop(0)

0x403: PushEmpty(object, object)
0x404: @ self(Stack[-1])
0x405: Pop(0)
0x406: Stack[-1] = Stack[-3]
0x407: Return(); Pop(2)

0x408: Stack[-1] = 0
0x409: PushEmpty(float, float)
0x40a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x40b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x40c: Push((float)9.999999974752427e-07)
0x40d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-4] = [0.0, 0.0, 0.0]
0x410: Return(); Pop(2)

0x411: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x412: Return(); Pop(2)

0x413: PushEmpty(float, float)
0x414: @ GetGameTime(Stack[-1])
0x415: Pop(0)
0x416: Push((int) 1)
0x417: PushEmpty(int)
0x418: Push((int) 24)
0x419: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x41a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41b: Return(); Pop(2)

0x41c: PushEmpty()
0x41d: PushEmpty(int)
0x41e: Call2 0x413

0x41f: Pop(0)
0x420: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x421: Return(); Pop(0)

0x422: PushEmpty(string, string)
0x423: Stack[-1] = "idle" // @poff=146
0x424: Push(Stack[-3])
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x427: Stack[-1] = Stack[-4]
0x428: Return(); Pop(2)

0x429: PushEmpty(int, bool, int, bool)
0x42a: Stack[-2] = (int) 0
0x42b: Push("all") // @poff=138
0x42c: PushEmpty(string, int)
0x42d: Stack[-5] = Stack[-1]
0x42e: Call2 0x422

0x42f: Pop(1)
0x430: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Pop(0); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: GOTO 0x438

0x435: Push((int) 1)
0x436: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x437: GOTO 0x42b

0x438: Stack[-2] = Stack[-5]
0x439: Return(); Pop(4)

0x43a: Stack[-1] = (int) 515551
0x43b: Return(); Pop(0)

0x43c: Stack[-1] = (int) 502876
0x43d: Return(); Pop(0)

0x43e: Stack[-1] = "ui/NPC_Rubin.png" // @poff=264
0x43f: Return(); Pop(0)

0x440: Stack[-1] = "ui/NPC_Rubin_b.png" // @poff=298
0x441: Return(); Pop(0)

0x442: Stack[-1] = (bool) 1
0x443: Return(); Pop(0)

0x444: PushEmpty(int, int)
0x445: Push("branch") // @poff=336
0x446: @ GetVariable(Stack[-1], Stack[-2])
0x447: Pop(1)
0x448: Push((int) 0)
0x449: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44b: Stack[-3] = (int) 1
0x44c: Return(); Pop(2)

0x44d: GOTO 0x453

0x44e: Push((int) 1)
0x44f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-3] = (int) 2
0x452: Return(); Pop(2)

0x453: Stack[-3] = (int) 3
0x454: Return(); Pop(2)

0x455: PushEmpty(int, int)
0x456: Push("d12_rubin") // @poff=350
0x457: @ GetVariable(Stack[-1], Stack[-2])
0x458: Pop(1)
0x459: PushEmpty(bool)
0x45a: Stack[-1] = (bool) 0
0x45b: PushEmpty(bool, int)
0x45c: Stack[-1] = (int) 12
0x45d: Call2 0x41c

0x45e: Pop(1)
0x45f: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x460: Pop(0); Push((bool) Stack[-2] == 0)
0x461: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x462: Stack[-1] = (bool) 1
0x463: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x464: PushEmpty(int, object)
0x465: Stack[-5] = Stack[-1]
0x466: Push(-2, 1); TaskCall(1)
0x467: Call2 0xd

0x468: Pop(-2, 1); TaskReturn
0x469: Pop(2)
0x46a: Push("d12_rubin") // @poff=350
0x46b: Push((int) 1)
0x46c: @ SetVariable(Stack[-2], Stack[-1])
0x46d: Pop(2)
0x46e: Return(); Pop(2)

0x46f: PushEmpty(int, object)
0x470: Stack[-5] = Stack[-1]
0x471: Push(-2, 1); TaskCall(3)
0x472: Call2 0x110

0x473: Pop(-2, 1); TaskReturn
0x474: Pop(2)
0x475: Return(); Pop(2)

