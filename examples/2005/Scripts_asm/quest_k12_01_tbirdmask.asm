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
	W:branch
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x191
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x197 Vars = (object)
		EVENT_26 Op = 0x1cf Vars = (string)
		EVENT_5 Op = 0x1d7 Vars = ()
		EVENT_6 Op = 0x1dc Vars = ()
		EVENT_7 Op = 0x21b Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2a3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x352

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x350

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x354

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x356

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x33f

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
0x41: Call2 0x2e7

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 541007)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 541008)
0x5a: Push((int) 43102)
0x5b: Push((int) 43101)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 541034)
0x5f: Push((int) -1)
0x60: Push((int) 43128)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x358

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x2f8

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x358

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x2ff

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x310

0x9f: Pop(0)
0xa0: Push((int) 43100)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 541007)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 541008)
0xad: Push((int) 43102)
0xae: Push((int) 43101)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: Push((int) 541034)
0xb2: Push((int) -1)
0xb3: Push((int) 43128)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 43102)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral" // @poff=89
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 541009)
0xbf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc0: Pop(1)
0xc1: @@@ ClearReplies(); Obj=0 // @poff=116
0xc2: Pop(0)
0xc3: Push((int) 541010)
0xc4: Push((int) 43104)
0xc5: Push((int) 43103)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Push((int) 541031)
0xc9: Push((int) 43126)
0xca: Push((int) 43125)
0xcb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 43126)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral" // @poff=89
0xd3: Call2 0x84

0xd4: Pop(1)
0xd5: Push((int) 541032)
0xd6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd7: Pop(1)
0xd8: @@@ ClearReplies(); Obj=0 // @poff=116
0xd9: Pop(0)
0xda: Push((int) 541033)
0xdb: Push((int) -1)
0xdc: Push((int) 43127)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 43104)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral" // @poff=89
0xe5: Call2 0x84

0xe6: Pop(1)
0xe7: Push((int) 541011)
0xe8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe9: Pop(1)
0xea: @@@ ClearReplies(); Obj=0 // @poff=116
0xeb: Pop(0)
0xec: Push((int) 541012)
0xed: Push((int) 43106)
0xee: Push((int) 43105)
0xef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf0: Pop(3)
0xf1: Push((int) 541030)
0xf2: Push((int) 43106)
0xf3: Push((int) 43123)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 43106)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral" // @poff=89
0xfc: Call2 0x84

0xfd: Pop(1)
0xfe: Push((int) 541013)
0xff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x100: Pop(1)
0x101: @@@ ClearReplies(); Obj=0 // @poff=116
0x102: Pop(0)
0x103: Push((int) 541014)
0x104: Push((int) 43108)
0x105: Push((int) 43107)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 43108)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0x84

0x10f: Pop(1)
0x110: Push((int) 541015)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 541016)
0x116: Push((int) 43110)
0x117: Push((int) 43109)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 541022)
0x11b: Push((int) 43116)
0x11c: Push((int) 43115)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 43116)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0x84

0x126: Pop(1)
0x127: Push((int) 541023)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 541024)
0x12d: Push((int) 43118)
0x12e: Push((int) 43117)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 43118)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Neutral" // @poff=89
0x137: Call2 0x84

0x138: Pop(1)
0x139: Push((int) 541025)
0x13a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13b: Pop(1)
0x13c: @@@ ClearReplies(); Obj=0 // @poff=116
0x13d: Pop(0)
0x13e: Push((int) 541026)
0x13f: Push((int) -1)
0x140: Push((int) 43119)
0x141: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x142: Pop(3)
0x143: Push((int) 541027)
0x144: Push((int) 43121)
0x145: Push((int) 43120)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 43121)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral" // @poff=89
0x14e: Call2 0x84

0x14f: Pop(1)
0x150: Push((int) 541028)
0x151: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x152: Pop(1)
0x153: @@@ ClearReplies(); Obj=0 // @poff=116
0x154: Pop(0)
0x155: Push((int) 541029)
0x156: Push((int) -1)
0x157: Push((int) 43122)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 43110)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral" // @poff=89
0x160: Call2 0x84

0x161: Pop(1)
0x162: Push((int) 541017)
0x163: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x164: Pop(1)
0x165: @@@ ClearReplies(); Obj=0 // @poff=116
0x166: Pop(0)
0x167: Push((int) 541018)
0x168: Push((int) 43112)
0x169: Push((int) 43111)
0x16a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16b: Pop(3)
0x16c: Push((int) 541021)
0x16d: Push((int) -1)
0x16e: Push((int) 43114)
0x16f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 43112)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral" // @poff=89
0x177: Call2 0x84

0x178: Pop(1)
0x179: Push((int) 541019)
0x17a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17b: Pop(1)
0x17c: @@@ ClearReplies(); Obj=0 // @poff=116
0x17d: Pop(0)
0x17e: Push((int) 541020)
0x17f: Push((int) -1)
0x180: Push((int) 43113)
0x181: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x185: PushEmpty(bool)
0x186: Call2 0x358

0x187: Pop(0)
0x188: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x189: @ lshStopAnimation()
0x18a: Pop(0)
0x18b: GOTO 0x18e

0x18c: @ StopAnimation()
0x18d: Pop(0)
0x18e: Return(); Pop(0)

0x18f: GOTO 0x9b

0x190: Return(); Pop(0)

0x191: PushEmpty(float, float)
0x192: Stack[-2] = (int) 300
0x193: Stack[-1] = (int) 100
0x194: Call2 0x1a2

0x195: Pop(2)
0x196: Return(); Pop(0)

0x197: PushEmpty()
0x198: PushEmpty()
0x199: Call2 0x232

0x19a: Pop(0)
0x19b: PushEmpty(int, object)
0x19c: Stack[-3] = Stack[-1]
0x19d: Push(-2, 1); TaskCall(0)
0x19e: Call2 0x0

0x19f: Pop(-2, 1); TaskReturn
0x1a0: Pop(2)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty(float, float)
0x1a3: PushEmpty(bool)
0x1a4: Call2 0x29e

0x1a5: Pop(0)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: @ Hold()
0x1a9: Pop(0)
0x1aa: GOTO 0x1a3

0x1ab: Push((int) 3)
0x1ac: @ rand(Stack[-2], Stack[-1])
0x1ad: Pop(1)
0x1ae: Push((int) 3)
0x1af: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1b0: @ Sleep(Stack[-1])
0x1b1: Pop(1)
0x1b2: PushEmpty(float, float)
0x1b3: Stack[-6] = Stack[-2]
0x1b4: Stack[-5] = Stack[-1]
0x1b5: Call2 0x1f1

0x1b6: Pop(2)
0x1b7: @ sync()
0x1b8: Pop(0)
0x1b9: GOTO 0x1a3

0x1ba: Return(); Pop(2)

0x1bb: PushEmpty(bool, bool)
0x1bc: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1bd: @ IsLoaded(Stack[-1])
0x1be: Pop(0)
0x1bf: PushEmpty(bool)
0x1c0: Stack[-1] = (bool) 0
0x1c1: Pop(0); Push((bool) Stack[-2] == 0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: PushEmpty(bool)
0x1c4: Call2 0x1ef

0x1c5: Pop(0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 1
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(object)
0x1ca: Call2 0x317

0x1cb: Pop(0)
0x1cc: @ RemoveActor(Stack[-1])
0x1cd: Pop(1)
0x1ce: Return(); Pop(2)

0x1cf: PushEmpty()
0x1d0: Push("cleanup") // @poff=156
0x1d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: PushEmpty()
0x1d4: Call2 0x1bb

0x1d5: Pop(0)
0x1d6: Return(); Pop(0)

0x1d7: @ StopGroup0()
0x1d8: Pop(0)
0x1d9: @ sync()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: PushEmpty()
0x1dd: Call2 0x232

0x1de: Pop(0)
0x1df: PushEmpty(bool)
0x1e0: Stack[-1] = (bool) 0
0x1e1: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(bool)
0x1e4: Call2 0x1ef

0x1e5: Pop(0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Stack[-1] = (bool) 1
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: PushEmpty(object)
0x1ea: Call2 0x317

0x1eb: Pop(0)
0x1ec: @ RemoveActor(Stack[-1])
0x1ed: Pop(1)
0x1ee: Return(); Pop(0)

0x1ef: Stack[-1] = (bool) 1
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty()
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x29e

0x1f4: Pop(0)
0x1f5: Pop(1); Push((bool) Stack[-1] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Return(); Pop(0)

0x1f8: Push("player") // @poff=172
0x1f9: @ FindActor(Stack[-4]T, Stack[-1])
0x1fa: Pop(1)
0x1fb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1fd: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1fe: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ff: Push((int) 10)
0x200: Push((float)1.0)
0x201: @ SetTimer(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: PushEmpty()
0x204: Call2 0x240

0x205: Pop(0)
0x206: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x208: Push((int) 10)
0x209: @ KillTimer(Stack[-1])
0x20a: Pop(1)
0x20b: Return(); Pop(0)

0x20c: PushEmpty(float, float)
0x20d: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20f: Stack[-3] = (bool) 0
0x210: Return(); Pop(2)

0x211: PushEmpty(float, object)
0x212: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x213: Call2 0x296

0x214: Pop(1)
0x215: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x216: Push( Stack[2 + Tasks[-1].StackPointer] )
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x219: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x21a: Return(); Pop(2)

0x21b: PushEmpty()
0x21c: Push((int) 10)
0x21d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x21f: PushEmpty(bool)
0x220: Call2 0x20c

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x223: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x225: PushEmpty(object)
0x226: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x227: Call2 0x305

0x228: Pop(1)
0x229: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x22a: GOTO 0x231

0x22b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22d: Push("head") // @poff=186
0x22e: @ UnlookAsync(Stack[-1])
0x22f: Pop(1)
0x230: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: Call2 0x291

0x234: Pop(0)
0x235: Push((int) 10)
0x236: @ KillTimer(Stack[-1])
0x237: Pop(1)
0x238: Push( Stack[2 + Tasks[-1].StackPointer] )
0x239: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23a: Push("head") // @poff=186
0x23b: @ UnlookAsync(Stack[-1])
0x23c: Pop(1)
0x23d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x23e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x23f: Return(); Pop(0)

0x240: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x241: @ WaitForAnimEnd()
0x242: Pop(0)
0x243: PushEmpty(bool)
0x244: Call2 0x29e

0x245: Pop(0)
0x246: Pop(1); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Return(); Pop(14)

0x249: PushEmpty(int)
0x24a: Call2 0x32e

0x24b: Stack[-1] = Stack[-8]
0x24c: Pop(1)
0x24d: Stack[-6] = (int) 0
0x24e: PushEmpty(bool)
0x24f: Stack[-1] = (bool) 0
0x250: Push((int) 5)
0x251: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: PushEmpty(bool)
0x254: Call2 0x29e

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 1
0x258: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x259: Push((int) 3)
0x25a: @ irand(Stack[-6], Stack[-1])
0x25b: Pop(1)
0x25c: Push((int) 0)
0x25d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25f: Push(Stack[-7])
0x260: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x261: @ irand(Stack[-4], Stack[-7])
0x262: Pop(0)
0x263: Push("all") // @poff=138
0x264: PushEmpty(string, int)
0x265: Stack[-7] = Stack[-1]
0x266: Call2 0x327

0x267: Pop(1)
0x268: @ PlayAnimation(Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: @ WaitForAnimEnd(Stack[-3])
0x26b: Pop(0)
0x26c: Pop(0); Push((bool) Stack[-3] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: GOTO 0x28c

0x26f: GOTO 0x281

0x270: Push((int) 1)
0x271: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x273: Push((int) 4)
0x274: @ rand(Stack[-3], Stack[-1])
0x275: Pop(1)
0x276: Push((int) 1)
0x277: Pop(1); Push(Stack[-3] + Stack[-1]);
0x278: @ Sleep(Stack[-1], Stack[-2])
0x279: Pop(1)
0x27a: Pop(0); Push((bool) Stack[-1] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: GOTO 0x28c

0x27d: GOTO 0x281

0x27e: Push(Stack[-6])
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x28c

0x281: PushEmpty(bool)
0x282: Call2 0x28f

0x283: Pop(0)
0x284: Pop(1); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28c

0x287: @ ResetAAS()
0x288: Pop(0)
0x289: Push((int) 1)
0x28a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x28b: GOTO 0x24e

0x28c: @ ResetAAS()
0x28d: Pop(0)
0x28e: Return(); Pop(14)

0x28f: Stack[-1] = (bool) 1
0x290: Return(); Pop(0)

0x291: @ StopAnimation()
0x292: Pop(0)
0x293: @ StopGroup0()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x297: @ GetPosition(Stack[-3])
0x298: Pop(0)
0x299: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x29a: Pop(0)
0x29b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x29c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x29d: Return(); Pop(6)

0x29e: PushEmpty(bool, bool)
0x29f: @ IsLoaded(Stack[-1])
0x2a0: Pop(0)
0x2a1: Stack[-1] = Stack[-3]
0x2a2: Return(); Pop(2)

0x2a3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a4: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2a5: Pop(0)
0x2a6: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2a7: Pop(0)
0x2a8: Push(CvectorIndex(Stack[-8], 1))
0x2a9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2aa: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ab: @ GetPosition(Stack[-7])
0x2ac: Pop(0)
0x2ad: @ GetEyesHeight(Stack[-9])
0x2ae: Pop(0)
0x2af: Push(CvectorIndex(Stack[-7], 1))
0x2b0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b3: Push(CvectorIndex(Stack[-6], 1))
0x2b4: Stack[-1] = (int) 0
0x2b5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b7: Pop(1); Push(Sqrt(Stack[-1]))
0x2b8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b9: Stack[-5] = -Stack[-6]; Pop(0);
0x2ba: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2bb: PushEmpty(cvector, cvector)
0x2bc: Push([0.0, 1.0, 0.0])
0x2bd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2be: Call2 0x31d

0x2bf: Pop(1)
0x2c0: Push((int) 25)
0x2c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c3: Push([0.0, 10.0, 0.0])
0x2c4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c6: @ IsOverrideActive(Stack[-2])
0x2c7: Pop(0)
0x2c8: Push(Stack[-2])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2ca: Stack[-21] = (bool) 0
0x2cb: Return(); Pop(18)

0x2cc: @ StopWorld()
0x2cd: Pop(0)
0x2ce: @ CameraTransit(Stack[-3], Stack[-5])
0x2cf: Pop(0)
0x2d0: Push(CvectorIndex(Stack[-4], 0))
0x2d1: Push(CvectorIndex(Stack[-5], 2))
0x2d2: @ Rotate(Stack[-2], Stack[-1])
0x2d3: Pop(2)
0x2d4: PushEmpty(bool)
0x2d5: Call2 0x358

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: GOTO 0x2e1

0x2d9: Push("head") // @poff=186
0x2da: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2db: Pop(1)
0x2dc: Push(Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2de: Push("head") // @poff=186
0x2df: @ LookAsyncCamera(Stack[-1])
0x2e0: Pop(1)
0x2e1: @ CameraWaitForPlayFinish()
0x2e2: Pop(0)
0x2e3: @ ResumeWorld()
0x2e4: Pop(0)
0x2e5: Stack[-21] = (bool) 1
0x2e6: Return(); Pop(18)

0x2e7: PushEmpty(bool, bool)
0x2e8: @ CameraSwitchToNormal()
0x2e9: Pop(0)
0x2ea: PushEmpty(bool)
0x2eb: Call2 0x358

0x2ec: Pop(0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: GOTO 0x2f7

0x2ef: Push("head") // @poff=186
0x2f0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f1: Pop(1)
0x2f2: Push(Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f4: Push("head") // @poff=186
0x2f5: @ UnlookAsync(Stack[-1])
0x2f6: Pop(1)
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(float, float, float, float)
0x2f9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2fa: Pop(0)
0x2fb: Push((bool) 0)
0x2fc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(1)
0x2fe: Return(); Pop(4)

0x2ff: PushEmpty(float, float, float, float)
0x300: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x301: Pop(0)
0x302: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x303: Pop(0)
0x304: Return(); Pop(4)

0x305: PushEmpty(float, cvector, float, cvector)
0x306: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x307: Pop(0)
0x308: Stack[-1] = [0.0, 0.0, 0.0]
0x309: Push(CvectorIndex(Stack[-1], 1))
0x30a: Stack[-3] = Stack[-1]
0x30b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x30c: Push("head") // @poff=186
0x30d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x30e: Pop(1)
0x30f: Return(); Pop(4)

0x310: PushEmpty(bool)
0x311: Call2 0x358

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: @ lshStopSpeech()
0x315: Pop(0)
0x316: Return(); Pop(0)

0x317: PushEmpty(object, object)
0x318: @ self(Stack[-1])
0x319: Pop(0)
0x31a: Stack[-1] = Stack[-3]
0x31b: Return(); Pop(2)

0x31c: Stack[-1] = 0
0x31d: PushEmpty(float, float)
0x31e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x31f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x320: Push((float)9.999999974752427e-07)
0x321: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-4] = [0.0, 0.0, 0.0]
0x324: Return(); Pop(2)

0x325: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x326: Return(); Pop(2)

0x327: PushEmpty(string, string)
0x328: Stack[-1] = "idle" // @poff=146
0x329: Push(Stack[-3])
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x32c: Stack[-1] = Stack[-4]
0x32d: Return(); Pop(2)

0x32e: PushEmpty(int, bool, int, bool)
0x32f: Stack[-2] = (int) 0
0x330: Push("all") // @poff=138
0x331: PushEmpty(string, int)
0x332: Stack[-5] = Stack[-1]
0x333: Call2 0x327

0x334: Pop(1)
0x335: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: Pop(0); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33d

0x33a: Push((int) 1)
0x33b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33c: GOTO 0x330

0x33d: Stack[-2] = Stack[-5]
0x33e: Return(); Pop(4)

0x33f: PushEmpty(int, int)
0x340: Push("branch") // @poff=222
0x341: @ GetVariable(Stack[-1], Stack[-2])
0x342: Pop(1)
0x343: Push((int) 0)
0x344: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x346: Stack[-3] = (int) 1
0x347: Return(); Pop(2)

0x348: GOTO 0x34e

0x349: Push((int) 1)
0x34a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-3] = (int) 2
0x34d: Return(); Pop(2)

0x34e: Stack[-3] = (int) 3
0x34f: Return(); Pop(2)

0x350: Stack[-1] = (int) 515571
0x351: Return(); Pop(0)

0x352: Stack[-1] = (int) 504029
0x353: Return(); Pop(0)

0x354: Stack[-1] = "ui/NPC_bmask.png" // @poff=236
0x355: Return(); Pop(0)

0x356: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=270
0x357: Return(); Pop(0)

0x358: Stack[-1] = (bool) 0
0x359: Return(); Pop(0)

