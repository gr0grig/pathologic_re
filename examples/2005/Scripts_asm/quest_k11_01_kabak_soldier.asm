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
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:ook11KabakSoldier1
	W:k11q01
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006f006f006b00310031004b006100620061006b0053006f006c006400690065007200310000006b003100310071003000310000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x14e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x154 Vars = (object)
		EVENT_26 Op = 0x18c Vars = (string)
		EVENT_5 Op = 0x194 Vars = ()
		EVENT_6 Op = 0x199 Vars = ()
		EVENT_7 Op = 0x1d8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x260

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x332

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x330

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x334

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x336

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x31f

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x2a4

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x97

0x53: Pop(1)
0x54: Push((int) 528014)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x313

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x307

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 528015)
0x68: Push((int) 31621)
0x69: Push((int) 29377)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: Push((int) 528016)
0x6d: Push((int) -1)
0x6e: Push((int) 29378)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: Push((int) 530232)
0x72: Push((int) -1)
0x73: Push((int) 31620)
0x74: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75: Pop(3)
0x76: GOTO 0x79

0x77: Return(); Pop(0)

0x78: GOTO 0x4e

0x79: PushEmpty(bool)
0x7a: Call2 0x338

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x2b5

0x85: Pop(1)
0x86: GOTO 0x7d

0x87: GOTO 0x96

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: @ WaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: Push("all") // @poff=138
0x92: Push("idle") // @poff=146
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x8c

0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: PushEmpty(bool)
0x99: Call2 0x338

0x9a: Pop(0)
0x9b: Pop(1); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(0)

0x9e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: PushEmpty(string, bool)
0xa2: Stack[-3] = Stack[-2]
0xa3: Push("") // @poff=102
0xa4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: Stack[-1] = (bool) 0
0xa7: GOTO 0xa9

0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x2bc

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x2cd

0xb2: Pop(0)
0xb3: Push((int) 29377)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x301

0xba: Pop(2)
0xbb: Push((int) 29376)
0xbc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = "Neutral" // @poff=89
0xc0: Call2 0x97

0xc1: Pop(1)
0xc2: Push((int) 528014)
0xc3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc4: Pop(1)
0xc5: @@@ ClearReplies(); Obj=0 // @poff=116
0xc6: Pop(0)
0xc7: PushEmpty(bool)
0xc8: Stack[-1] = (bool) 0
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x313

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x307

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 1
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: Push((int) 528015)
0xd6: Push((int) 31621)
0xd7: Push((int) 29377)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Push((int) 528016)
0xdb: Push((int) -1)
0xdc: Push((int) 29378)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Push((int) 530232)
0xe0: Push((int) -1)
0xe1: Push((int) 31620)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 31621)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral" // @poff=89
0xea: Call2 0x97

0xeb: Pop(1)
0xec: Push((int) 530233)
0xed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xee: Pop(1)
0xef: @@@ ClearReplies(); Obj=0 // @poff=116
0xf0: Pop(0)
0xf1: Push((int) 530234)
0xf2: Push((int) 29379)
0xf3: Push((int) 31622)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: Push((int) 530235)
0xf7: Push((int) -1)
0xf8: Push((int) 31623)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 29379)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral" // @poff=89
0x101: Call2 0x97

0x102: Pop(1)
0x103: Push((int) 528017)
0x104: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x105: Pop(1)
0x106: @@@ ClearReplies(); Obj=0 // @poff=116
0x107: Pop(0)
0x108: Push((int) 528018)
0x109: Push((int) 31625)
0x10a: Push((int) 29380)
0x10b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10c: Pop(3)
0x10d: Push((int) 530236)
0x10e: Push((int) -1)
0x10f: Push((int) 31624)
0x110: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 31625)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral" // @poff=89
0x118: Call2 0x97

0x119: Pop(1)
0x11a: Push((int) 530237)
0x11b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11c: Pop(1)
0x11d: @@@ ClearReplies(); Obj=0 // @poff=116
0x11e: Pop(0)
0x11f: Push((int) 530238)
0x120: Push((int) 31628)
0x121: Push((int) 31626)
0x122: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x123: Pop(3)
0x124: Push((int) 530239)
0x125: Push((int) -1)
0x126: Push((int) 31627)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 31628)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral" // @poff=89
0x12f: Call2 0x97

0x130: Pop(1)
0x131: Push((int) 530240)
0x132: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x133: Pop(1)
0x134: @@@ ClearReplies(); Obj=0 // @poff=116
0x135: Pop(0)
0x136: Push((int) 530241)
0x137: Push((int) -1)
0x138: Push((int) 31629)
0x139: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13a: Pop(3)
0x13b: Push((int) 530242)
0x13c: Push((int) -1)
0x13d: Push((int) 31630)
0x13e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x142: PushEmpty(bool)
0x143: Call2 0x338

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: @ lshStopAnimation()
0x147: Pop(0)
0x148: GOTO 0x14b

0x149: @ StopAnimation()
0x14a: Pop(0)
0x14b: Return(); Pop(0)

0x14c: GOTO 0xae

0x14d: Return(); Pop(0)

0x14e: PushEmpty(float, float)
0x14f: Stack[-2] = (int) 300
0x150: Stack[-1] = (int) 100
0x151: Call2 0x15f

0x152: Pop(2)
0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: PushEmpty()
0x156: Call2 0x1ef

0x157: Pop(0)
0x158: PushEmpty(int, object)
0x159: Stack[-3] = Stack[-1]
0x15a: Push(-2, 1); TaskCall(0)
0x15b: Call2 0x0

0x15c: Pop(-2, 1); TaskReturn
0x15d: Pop(2)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(float, float)
0x160: PushEmpty(bool)
0x161: Call2 0x25b

0x162: Pop(0)
0x163: Pop(1); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: @ Hold()
0x166: Pop(0)
0x167: GOTO 0x160

0x168: Push((int) 3)
0x169: @ rand(Stack[-2], Stack[-1])
0x16a: Pop(1)
0x16b: Push((int) 3)
0x16c: Pop(1); Push(Stack[-2] + Stack[-1]);
0x16d: @ Sleep(Stack[-1])
0x16e: Pop(1)
0x16f: PushEmpty(float, float)
0x170: Stack[-6] = Stack[-2]
0x171: Stack[-5] = Stack[-1]
0x172: Call2 0x1ae

0x173: Pop(2)
0x174: @ sync()
0x175: Pop(0)
0x176: GOTO 0x160

0x177: Return(); Pop(2)

0x178: PushEmpty(bool, bool)
0x179: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x17a: @ IsLoaded(Stack[-1])
0x17b: Pop(0)
0x17c: PushEmpty(bool)
0x17d: Stack[-1] = (bool) 0
0x17e: Pop(0); Push((bool) Stack[-2] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x180: PushEmpty(bool)
0x181: Call2 0x1ac

0x182: Pop(0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: Stack[-1] = (bool) 1
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(object)
0x187: Call2 0x2d4

0x188: Pop(0)
0x189: @ RemoveActor(Stack[-1])
0x18a: Pop(1)
0x18b: Return(); Pop(2)

0x18c: PushEmpty()
0x18d: Push("cleanup") // @poff=156
0x18e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x190: PushEmpty()
0x191: Call2 0x178

0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: @ StopGroup0()
0x195: Pop(0)
0x196: @ sync()
0x197: Pop(0)
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Call2 0x1ef

0x19b: Pop(0)
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 0
0x19e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(bool)
0x1a1: Call2 0x1ac

0x1a2: Pop(0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Stack[-1] = (bool) 1
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: PushEmpty(object)
0x1a7: Call2 0x2d4

0x1a8: Pop(0)
0x1a9: @ RemoveActor(Stack[-1])
0x1aa: Pop(1)
0x1ab: Return(); Pop(0)

0x1ac: Stack[-1] = (bool) 1
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: PushEmpty(bool)
0x1b0: Call2 0x25b

0x1b1: Pop(0)
0x1b2: Pop(1); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Return(); Pop(0)

0x1b5: Push("player") // @poff=172
0x1b6: @ FindActor(Stack[-4]T, Stack[-1])
0x1b7: Pop(1)
0x1b8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1bb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1bc: Push((int) 10)
0x1bd: Push((float)1.0)
0x1be: @ SetTimer(Stack[-2], Stack[-1])
0x1bf: Pop(2)
0x1c0: PushEmpty()
0x1c1: Call2 0x1fd

0x1c2: Pop(0)
0x1c3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c5: Push((int) 10)
0x1c6: @ KillTimer(Stack[-1])
0x1c7: Pop(1)
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty(float, float)
0x1ca: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cc: Stack[-3] = (bool) 0
0x1cd: Return(); Pop(2)

0x1ce: PushEmpty(float, object)
0x1cf: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d0: Call2 0x253

0x1d1: Pop(1)
0x1d2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d7: Return(); Pop(2)

0x1d8: PushEmpty()
0x1d9: Push((int) 10)
0x1da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1dc: PushEmpty(bool)
0x1dd: Call2 0x1c9

0x1de: Pop(0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object)
0x1e3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e4: Call2 0x2c2

0x1e5: Pop(1)
0x1e6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e7: GOTO 0x1ee

0x1e8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ea: Push("head") // @poff=186
0x1eb: @ UnlookAsync(Stack[-1])
0x1ec: Pop(1)
0x1ed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Call2 0x24e

0x1f1: Pop(0)
0x1f2: Push((int) 10)
0x1f3: @ KillTimer(Stack[-1])
0x1f4: Pop(1)
0x1f5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f7: Push("head") // @poff=186
0x1f8: @ UnlookAsync(Stack[-1])
0x1f9: Pop(1)
0x1fa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1fe: @ WaitForAnimEnd()
0x1ff: Pop(0)
0x200: PushEmpty(bool)
0x201: Call2 0x25b

0x202: Pop(0)
0x203: Pop(1); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: Return(); Pop(14)

0x206: PushEmpty(int)
0x207: Call2 0x2f0

0x208: Stack[-1] = Stack[-8]
0x209: Pop(1)
0x20a: Stack[-6] = (int) 0
0x20b: PushEmpty(bool)
0x20c: Stack[-1] = (bool) 0
0x20d: Push((int) 5)
0x20e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: PushEmpty(bool)
0x211: Call2 0x25b

0x212: Pop(0)
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: Stack[-1] = (bool) 1
0x215: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x216: Push((int) 3)
0x217: @ irand(Stack[-6], Stack[-1])
0x218: Pop(1)
0x219: Push((int) 0)
0x21a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x21c: Push(Stack[-7])
0x21d: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x21e: @ irand(Stack[-4], Stack[-7])
0x21f: Pop(0)
0x220: Push("all") // @poff=138
0x221: PushEmpty(string, int)
0x222: Stack[-7] = Stack[-1]
0x223: Call2 0x2e9

0x224: Pop(1)
0x225: @ PlayAnimation(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: @ WaitForAnimEnd(Stack[-3])
0x228: Pop(0)
0x229: Pop(0); Push((bool) Stack[-3] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x249

0x22c: GOTO 0x23e

0x22d: Push((int) 1)
0x22e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x230: Push((int) 4)
0x231: @ rand(Stack[-3], Stack[-1])
0x232: Pop(1)
0x233: Push((int) 1)
0x234: Pop(1); Push(Stack[-3] + Stack[-1]);
0x235: @ Sleep(Stack[-1], Stack[-2])
0x236: Pop(1)
0x237: Pop(0); Push((bool) Stack[-1] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x249

0x23a: GOTO 0x23e

0x23b: Push(Stack[-6])
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x249

0x23e: PushEmpty(bool)
0x23f: Call2 0x24c

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x249

0x244: @ ResetAAS()
0x245: Pop(0)
0x246: Push((int) 1)
0x247: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x248: GOTO 0x20b

0x249: @ ResetAAS()
0x24a: Pop(0)
0x24b: Return(); Pop(14)

0x24c: Stack[-1] = (bool) 1
0x24d: Return(); Pop(0)

0x24e: @ StopAnimation()
0x24f: Pop(0)
0x250: @ StopGroup0()
0x251: Pop(0)
0x252: Return(); Pop(0)

0x253: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x254: @ GetPosition(Stack[-3])
0x255: Pop(0)
0x256: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x257: Pop(0)
0x258: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x259: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x25a: Return(); Pop(6)

0x25b: PushEmpty(bool, bool)
0x25c: @ IsLoaded(Stack[-1])
0x25d: Pop(0)
0x25e: Stack[-1] = Stack[-3]
0x25f: Return(); Pop(2)

0x260: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x261: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x262: Pop(0)
0x263: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x264: Pop(0)
0x265: Push(CvectorIndex(Stack[-8], 1))
0x266: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x267: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x268: @ GetPosition(Stack[-7])
0x269: Pop(0)
0x26a: @ GetEyesHeight(Stack[-9])
0x26b: Pop(0)
0x26c: Push(CvectorIndex(Stack[-7], 1))
0x26d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x26f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x270: Push(CvectorIndex(Stack[-6], 1))
0x271: Stack[-1] = (int) 0
0x272: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x273: Pop(0); Push(Stack[-6] | Stack[-6]);
0x274: Pop(1); Push(Sqrt(Stack[-1]))
0x275: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x276: Stack[-5] = -Stack[-6]; Pop(0);
0x277: Pop(0); Push(Stack[-6] * Stack[-19]);
0x278: PushEmpty(cvector, cvector)
0x279: Push([0.0, 1.0, 0.0])
0x27a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x27b: Call2 0x2da

0x27c: Pop(1)
0x27d: Push((int) 25)
0x27e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x27f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x280: Push([0.0, 10.0, 0.0])
0x281: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x282: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x283: @ IsOverrideActive(Stack[-2])
0x284: Pop(0)
0x285: Push(Stack[-2])
0x286: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x287: Stack[-21] = (bool) 0
0x288: Return(); Pop(18)

0x289: @ StopWorld()
0x28a: Pop(0)
0x28b: @ CameraTransit(Stack[-3], Stack[-5])
0x28c: Pop(0)
0x28d: Push(CvectorIndex(Stack[-4], 0))
0x28e: Push(CvectorIndex(Stack[-5], 2))
0x28f: @ Rotate(Stack[-2], Stack[-1])
0x290: Pop(2)
0x291: PushEmpty(bool)
0x292: Call2 0x338

0x293: Pop(0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x29e

0x296: Push("head") // @poff=186
0x297: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x298: Pop(1)
0x299: Push(Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29b: Push("head") // @poff=186
0x29c: @ LookAsyncCamera(Stack[-1])
0x29d: Pop(1)
0x29e: @ CameraWaitForPlayFinish()
0x29f: Pop(0)
0x2a0: @ ResumeWorld()
0x2a1: Pop(0)
0x2a2: Stack[-21] = (bool) 1
0x2a3: Return(); Pop(18)

0x2a4: PushEmpty(bool, bool)
0x2a5: @ CameraSwitchToNormal()
0x2a6: Pop(0)
0x2a7: PushEmpty(bool)
0x2a8: Call2 0x338

0x2a9: Pop(0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: GOTO 0x2b4

0x2ac: Push("head") // @poff=186
0x2ad: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ae: Pop(1)
0x2af: Push(Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b1: Push("head") // @poff=186
0x2b2: @ UnlookAsync(Stack[-1])
0x2b3: Pop(1)
0x2b4: Return(); Pop(2)

0x2b5: PushEmpty(float, float, float, float)
0x2b6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2b7: Pop(0)
0x2b8: Push((bool) 0)
0x2b9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(1)
0x2bb: Return(); Pop(4)

0x2bc: PushEmpty(float, float, float, float)
0x2bd: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2be: Pop(0)
0x2bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2c0: Pop(0)
0x2c1: Return(); Pop(4)

0x2c2: PushEmpty(float, cvector, float, cvector)
0x2c3: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2c4: Pop(0)
0x2c5: Stack[-1] = [0.0, 0.0, 0.0]
0x2c6: Push(CvectorIndex(Stack[-1], 1))
0x2c7: Stack[-3] = Stack[-1]
0x2c8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c9: Push("head") // @poff=186
0x2ca: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2cb: Pop(1)
0x2cc: Return(); Pop(4)

0x2cd: PushEmpty(bool)
0x2ce: Call2 0x338

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: @ lshStopSpeech()
0x2d2: Pop(0)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(object, object)
0x2d5: @ self(Stack[-1])
0x2d6: Pop(0)
0x2d7: Stack[-1] = Stack[-3]
0x2d8: Return(); Pop(2)

0x2d9: Stack[-1] = 0
0x2da: PushEmpty(float, float)
0x2db: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2dc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2dd: Push((float)9.999999974752427e-07)
0x2de: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-4] = [0.0, 0.0, 0.0]
0x2e1: Return(); Pop(2)

0x2e2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e3: Return(); Pop(2)

0x2e4: PushEmpty(int, int)
0x2e5: @ GetVariable(Stack[-3], Stack[-1])
0x2e6: Pop(0)
0x2e7: Stack[-1] = Stack[-4]
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(string, string)
0x2ea: Stack[-1] = "idle" // @poff=146
0x2eb: Push(Stack[-3])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ee: Stack[-1] = Stack[-4]
0x2ef: Return(); Pop(2)

0x2f0: PushEmpty(int, bool, int, bool)
0x2f1: Stack[-2] = (int) 0
0x2f2: Push("all") // @poff=138
0x2f3: PushEmpty(string, int)
0x2f4: Stack[-5] = Stack[-1]
0x2f5: Call2 0x2e9

0x2f6: Pop(1)
0x2f7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: Pop(0); Push((bool) Stack[-1] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: GOTO 0x2ff

0x2fc: Push((int) 1)
0x2fd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2fe: GOTO 0x2f2

0x2ff: Stack[-2] = Stack[-5]
0x300: Return(); Pop(4)

0x301: PushEmpty()
0x302: Push("ook11KabakSoldier1") // @poff=222
0x303: Push((int) 1)
0x304: @ SetVariable(Stack[-2], Stack[-1])
0x305: Pop(2)
0x306: Return(); Pop(0)

0x307: PushEmpty()
0x308: PushEmpty(int, string)
0x309: Stack[-1] = "k11q01" // @poff=260
0x30a: Call2 0x2e4

0x30b: Pop(1)
0x30c: Push((int) 2)
0x30d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-2] = (bool) 1
0x310: Return(); Pop(0)

0x311: Stack[-2] = (bool) 0
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: PushEmpty(int, string)
0x315: Stack[-1] = "ook11KabakSoldier1" // @poff=222
0x316: Call2 0x2e4

0x317: Pop(1)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-2] = (bool) 1
0x31c: Return(); Pop(0)

0x31d: Stack[-2] = (bool) 0
0x31e: Return(); Pop(0)

0x31f: PushEmpty(int, int)
0x320: Push("branch") // @poff=274
0x321: @ GetVariable(Stack[-1], Stack[-2])
0x322: Pop(1)
0x323: Push((int) 0)
0x324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: Stack[-3] = (int) 1
0x327: Return(); Pop(2)

0x328: GOTO 0x32e

0x329: Push((int) 1)
0x32a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-3] = (int) 2
0x32d: Return(); Pop(2)

0x32e: Stack[-3] = (int) 3
0x32f: Return(); Pop(2)

0x330: Stack[-1] = (int) 527721
0x331: Return(); Pop(0)

0x332: Stack[-1] = (int) 527720
0x333: Return(); Pop(0)

0x334: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=288
0x335: Return(); Pop(0)

0x336: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=328
0x337: Return(); Pop(0)

0x338: Stack[-1] = (bool) 0
0x339: Return(); Pop(0)

