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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:oob12TBirdmask1
	W:itheater@door1
	W:b12q01TheaterIsVisited
	W:branch
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006f006f00620031003200540042006900720064006d00610073006b003100000069007400680065006100740065007200400064006f006f00720031000000620031003200710030003100540068006500610074006500720049007300560069007300690074006500640000006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	Trace (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x1dc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1e2 Vars = (object)
		EVENT_26 Op = 0x21a Vars = (string)
		EVENT_5 Op = 0x222 Vars = ()
		EVENT_6 Op = 0x227 Vars = ()
		EVENT_7 Op = 0x266 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3d2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3d4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3bf

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
0x41: Call2 0x332

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
0x4f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3b3

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3a0

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x3a6

0x5e: Pop(2)
0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x3ad

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa7

0x67: Pop(1)
0x68: Push((int) 522931)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 522932)
0x6e: Push((int) 24124)
0x6f: Push((int) 24123)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x89

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral" // @poff=89
0x75: Call2 0xa7

0x76: Pop(1)
0x77: Push((int) 523192)
0x78: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x79: Pop(1)
0x7a: @@@ ClearReplies(); Obj=0 // @poff=116
0x7b: Pop(0)
0x7c: Push((int) 523193)
0x7d: Push((int) -1)
0x7e: Push((int) 24396)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: Push((int) 523194)
0x82: Push((int) -1)
0x83: Push((int) 24397)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x3d8

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x343

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
0xa9: Call2 0x3d8

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
0xb9: Call2 0x34a

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x35b

0xc2: Pop(0)
0xc3: Push((int) 24122)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call2 0x3b3

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x3a0

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x3a6

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x3ad

0xd9: Pop(2)
0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral" // @poff=89
0xdc: Call2 0xa7

0xdd: Pop(1)
0xde: Push((int) 522931)
0xdf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe0: Pop(1)
0xe1: @@@ ClearReplies(); Obj=0 // @poff=116
0xe2: Pop(0)
0xe3: Push((int) 522932)
0xe4: Push((int) 24124)
0xe5: Push((int) 24123)
0xe6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral" // @poff=89
0xeb: Call2 0xa7

0xec: Pop(1)
0xed: Push((int) 523192)
0xee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xef: Pop(1)
0xf0: @@@ ClearReplies(); Obj=0 // @poff=116
0xf1: Pop(0)
0xf2: Push((int) 523193)
0xf3: Push((int) -1)
0xf4: Push((int) 24396)
0xf5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf6: Pop(3)
0xf7: Push((int) 523194)
0xf8: Push((int) -1)
0xf9: Push((int) 24397)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 24124)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 522933)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 522934)
0x10a: Push((int) 24126)
0x10b: Push((int) 24125)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 522956)
0x10f: Push((int) 24148)
0x110: Push((int) 24147)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 24148)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral" // @poff=89
0x119: Call2 0xa7

0x11a: Pop(1)
0x11b: Push((int) 522957)
0x11c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11d: Pop(1)
0x11e: @@@ ClearReplies(); Obj=0 // @poff=116
0x11f: Pop(0)
0x120: Push((int) 522958)
0x121: Push((int) 24128)
0x122: Push((int) 24149)
0x123: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 24126)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral" // @poff=89
0x12b: Call2 0xa7

0x12c: Pop(1)
0x12d: Push((int) 522935)
0x12e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12f: Pop(1)
0x130: @@@ ClearReplies(); Obj=0 // @poff=116
0x131: Pop(0)
0x132: Push((int) 522936)
0x133: Push((int) 24128)
0x134: Push((int) 24127)
0x135: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x136: Pop(3)
0x137: Push((int) 522955)
0x138: Push((int) 24128)
0x139: Push((int) 24146)
0x13a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Push((int) 24128)
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral" // @poff=89
0x142: Call2 0xa7

0x143: Pop(1)
0x144: Push((int) 522937)
0x145: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x146: Pop(1)
0x147: @@@ ClearReplies(); Obj=0 // @poff=116
0x148: Pop(0)
0x149: Push((int) 522938)
0x14a: Push((int) 24130)
0x14b: Push((int) 24129)
0x14c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 24130)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral" // @poff=89
0x154: Call2 0xa7

0x155: Pop(1)
0x156: Push((int) 522939)
0x157: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x158: Pop(1)
0x159: @@@ ClearReplies(); Obj=0 // @poff=116
0x15a: Pop(0)
0x15b: Push((int) 522940)
0x15c: Push((int) 24132)
0x15d: Push((int) 24131)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: Push((int) 522946)
0x161: Push((int) 24138)
0x162: Push((int) 24137)
0x163: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 24138)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral" // @poff=89
0x16b: Call2 0xa7

0x16c: Pop(1)
0x16d: Push((int) 522947)
0x16e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16f: Pop(1)
0x170: @@@ ClearReplies(); Obj=0 // @poff=116
0x171: Pop(0)
0x172: Push((int) 522948)
0x173: Push((int) 24134)
0x174: Push((int) 24139)
0x175: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x176: Pop(3)
0x177: Push((int) 522949)
0x178: Push((int) 24141)
0x179: Push((int) 24140)
0x17a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 24141)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral" // @poff=89
0x182: Call2 0xa7

0x183: Pop(1)
0x184: Push((int) 522950)
0x185: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x186: Pop(1)
0x187: @@@ ClearReplies(); Obj=0 // @poff=116
0x188: Pop(0)
0x189: Push((int) 522951)
0x18a: Push((int) 24134)
0x18b: Push((int) 24142)
0x18c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18d: Pop(3)
0x18e: Push((int) 522952)
0x18f: Push((int) 24144)
0x190: Push((int) 24143)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 24144)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral" // @poff=89
0x199: Call2 0xa7

0x19a: Pop(1)
0x19b: Push((int) 522953)
0x19c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19d: Pop(1)
0x19e: @@@ ClearReplies(); Obj=0 // @poff=116
0x19f: Pop(0)
0x1a0: Push((int) 522954)
0x1a1: Push((int) 24134)
0x1a2: Push((int) 24145)
0x1a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 24132)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral" // @poff=89
0x1ab: Call2 0xa7

0x1ac: Pop(1)
0x1ad: Push((int) 522941)
0x1ae: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1af: Pop(1)
0x1b0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b1: Pop(0)
0x1b2: Push((int) 522942)
0x1b3: Push((int) 24134)
0x1b4: Push((int) 24133)
0x1b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b6: Pop(3)
0x1b7: Push((int) 522945)
0x1b8: Push((int) -1)
0x1b9: Push((int) 24136)
0x1ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 24134)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral" // @poff=89
0x1c2: Call2 0xa7

0x1c3: Pop(1)
0x1c4: Push((int) 522943)
0x1c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c6: Pop(1)
0x1c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c8: Pop(0)
0x1c9: Push((int) 522944)
0x1ca: Push((int) -1)
0x1cb: Push((int) 24135)
0x1cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d0: PushEmpty(bool)
0x1d1: Call2 0x3d8

0x1d2: Pop(0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: @ lshStopAnimation()
0x1d5: Pop(0)
0x1d6: GOTO 0x1d9

0x1d7: @ StopAnimation()
0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: GOTO 0xbe

0x1db: Return(); Pop(0)

0x1dc: PushEmpty(float, float)
0x1dd: Stack[-2] = (int) 300
0x1de: Stack[-1] = (int) 100
0x1df: Call2 0x1ed

0x1e0: Pop(2)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: PushEmpty()
0x1e4: Call2 0x27d

0x1e5: Pop(0)
0x1e6: PushEmpty(int, object)
0x1e7: Stack[-3] = Stack[-1]
0x1e8: Push(-2, 1); TaskCall(0)
0x1e9: Call2 0x0

0x1ea: Pop(-2, 1); TaskReturn
0x1eb: Pop(2)
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty(float, float)
0x1ee: PushEmpty(bool)
0x1ef: Call2 0x2e9

0x1f0: Pop(0)
0x1f1: Pop(1); Push((bool) Stack[-1] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f3: @ Hold()
0x1f4: Pop(0)
0x1f5: GOTO 0x1ee

0x1f6: Push((int) 3)
0x1f7: @ rand(Stack[-2], Stack[-1])
0x1f8: Pop(1)
0x1f9: Push((int) 3)
0x1fa: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1fb: @ Sleep(Stack[-1])
0x1fc: Pop(1)
0x1fd: PushEmpty(float, float)
0x1fe: Stack[-6] = Stack[-2]
0x1ff: Stack[-5] = Stack[-1]
0x200: Call2 0x23c

0x201: Pop(2)
0x202: @ sync()
0x203: Pop(0)
0x204: GOTO 0x1ee

0x205: Return(); Pop(2)

0x206: PushEmpty(bool, bool)
0x207: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x208: @ IsLoaded(Stack[-1])
0x209: Pop(0)
0x20a: PushEmpty(bool)
0x20b: Stack[-1] = (bool) 0
0x20c: Pop(0); Push((bool) Stack[-2] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: PushEmpty(bool)
0x20f: Call2 0x23a

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = (bool) 1
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(object)
0x215: Call2 0x362

0x216: Pop(0)
0x217: @ RemoveActor(Stack[-1])
0x218: Pop(1)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: Push("cleanup") // @poff=156
0x21c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21e: PushEmpty()
0x21f: Call2 0x206

0x220: Pop(0)
0x221: Return(); Pop(0)

0x222: @ StopGroup0()
0x223: Pop(0)
0x224: @ sync()
0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: Call2 0x27d

0x229: Pop(0)
0x22a: PushEmpty(bool)
0x22b: Stack[-1] = (bool) 0
0x22c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x23a

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: PushEmpty(object)
0x235: Call2 0x362

0x236: Pop(0)
0x237: @ RemoveActor(Stack[-1])
0x238: Pop(1)
0x239: Return(); Pop(0)

0x23a: Stack[-1] = (bool) 1
0x23b: Return(); Pop(0)

0x23c: PushEmpty()
0x23d: PushEmpty(bool)
0x23e: Call2 0x2e9

0x23f: Pop(0)
0x240: Pop(1); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Return(); Pop(0)

0x243: Push("player") // @poff=172
0x244: @ FindActor(Stack[-4]T, Stack[-1])
0x245: Pop(1)
0x246: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x247: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x248: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x249: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x24a: Push((int) 10)
0x24b: Push((float)1.0)
0x24c: @ SetTimer(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: PushEmpty()
0x24f: Call2 0x28b

0x250: Pop(0)
0x251: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x253: Push((int) 10)
0x254: @ KillTimer(Stack[-1])
0x255: Pop(1)
0x256: Return(); Pop(0)

0x257: PushEmpty(float, float)
0x258: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25a: Stack[-3] = (bool) 0
0x25b: Return(); Pop(2)

0x25c: PushEmpty(float, object)
0x25d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x25e: Call2 0x2e1

0x25f: Pop(1)
0x260: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x261: Push( Stack[2 + Tasks[-1].StackPointer] )
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x264: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x265: Return(); Pop(2)

0x266: PushEmpty()
0x267: Push((int) 10)
0x268: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x26a: PushEmpty(bool)
0x26b: Call2 0x257

0x26c: Pop(0)
0x26d: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x26e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x270: PushEmpty(object)
0x271: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x272: Call2 0x350

0x273: Pop(1)
0x274: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x275: GOTO 0x27c

0x276: Push( Stack[2 + Tasks[-1].StackPointer] )
0x277: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x278: Push("head") // @poff=186
0x279: @ UnlookAsync(Stack[-1])
0x27a: Pop(1)
0x27b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x27c: Return(); Pop(0)

0x27d: PushEmpty()
0x27e: Call2 0x2dc

0x27f: Pop(0)
0x280: Push((int) 10)
0x281: @ KillTimer(Stack[-1])
0x282: Pop(1)
0x283: Push( Stack[2 + Tasks[-1].StackPointer] )
0x284: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x285: Push("head") // @poff=186
0x286: @ UnlookAsync(Stack[-1])
0x287: Pop(1)
0x288: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x289: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28a: Return(); Pop(0)

0x28b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x28c: @ WaitForAnimEnd()
0x28d: Pop(0)
0x28e: PushEmpty(bool)
0x28f: Call2 0x2e9

0x290: Pop(0)
0x291: Pop(1); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: Return(); Pop(14)

0x294: PushEmpty(int)
0x295: Call2 0x38f

0x296: Stack[-1] = Stack[-8]
0x297: Pop(1)
0x298: Stack[-6] = (int) 0
0x299: PushEmpty(bool)
0x29a: Stack[-1] = (bool) 0
0x29b: Push((int) 5)
0x29c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29e: PushEmpty(bool)
0x29f: Call2 0x2e9

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Stack[-1] = (bool) 1
0x2a3: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2a4: Push((int) 3)
0x2a5: @ irand(Stack[-6], Stack[-1])
0x2a6: Pop(1)
0x2a7: Push((int) 0)
0x2a8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2aa: Push(Stack[-7])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2ac: @ irand(Stack[-4], Stack[-7])
0x2ad: Pop(0)
0x2ae: Push("all") // @poff=138
0x2af: PushEmpty(string, int)
0x2b0: Stack[-7] = Stack[-1]
0x2b1: Call2 0x388

0x2b2: Pop(1)
0x2b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b4: Pop(2)
0x2b5: @ WaitForAnimEnd(Stack[-3])
0x2b6: Pop(0)
0x2b7: Pop(0); Push((bool) Stack[-3] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2d7

0x2ba: GOTO 0x2cc

0x2bb: Push((int) 1)
0x2bc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2be: Push((int) 4)
0x2bf: @ rand(Stack[-3], Stack[-1])
0x2c0: Pop(1)
0x2c1: Push((int) 1)
0x2c2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c3: @ Sleep(Stack[-1], Stack[-2])
0x2c4: Pop(1)
0x2c5: Pop(0); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: GOTO 0x2d7

0x2c8: GOTO 0x2cc

0x2c9: Push(Stack[-6])
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
0x2d5: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2d6: GOTO 0x299

0x2d7: @ ResetAAS()
0x2d8: Pop(0)
0x2d9: Return(); Pop(14)

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
0x2e4: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x2e5: Pop(0)
0x2e6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2e7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2e8: Return(); Pop(6)

0x2e9: PushEmpty(bool, bool)
0x2ea: @ IsLoaded(Stack[-1])
0x2eb: Pop(0)
0x2ec: Stack[-1] = Stack[-3]
0x2ed: Return(); Pop(2)

0x2ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ef: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2f0: Pop(0)
0x2f1: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2f2: Pop(0)
0x2f3: Push(CvectorIndex(Stack[-8], 1))
0x2f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2f6: @ GetPosition(Stack[-7])
0x2f7: Pop(0)
0x2f8: @ GetEyesHeight(Stack[-9])
0x2f9: Pop(0)
0x2fa: Push(CvectorIndex(Stack[-7], 1))
0x2fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2fe: Push(CvectorIndex(Stack[-6], 1))
0x2ff: Stack[-1] = (int) 0
0x300: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x301: Pop(0); Push(Stack[-6] | Stack[-6]);
0x302: Pop(1); Push(Sqrt(Stack[-1]))
0x303: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x304: Stack[-5] = -Stack[-6]; Pop(0);
0x305: Pop(0); Push(Stack[-6] * Stack[-19]);
0x306: PushEmpty(cvector, cvector)
0x307: Push([0.0, 1.0, 0.0])
0x308: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x309: Call2 0x368

0x30a: Pop(1)
0x30b: Push((int) 25)
0x30c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30e: Push([0.0, 10.0, 0.0])
0x30f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x310: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x311: @ IsOverrideActive(Stack[-2])
0x312: Pop(0)
0x313: Push(Stack[-2])
0x314: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x315: Stack[-21] = (bool) 0
0x316: Return(); Pop(18)

0x317: @ StopWorld()
0x318: Pop(0)
0x319: @ CameraTransit(Stack[-3], Stack[-5])
0x31a: Pop(0)
0x31b: Push(CvectorIndex(Stack[-4], 0))
0x31c: Push(CvectorIndex(Stack[-5], 2))
0x31d: @ Rotate(Stack[-2], Stack[-1])
0x31e: Pop(2)
0x31f: PushEmpty(bool)
0x320: Call2 0x3d8

0x321: Pop(0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x32c

0x324: Push("head") // @poff=186
0x325: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x326: Pop(1)
0x327: Push(Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x329: Push("head") // @poff=186
0x32a: @ LookAsyncCamera(Stack[-1])
0x32b: Pop(1)
0x32c: @ CameraWaitForPlayFinish()
0x32d: Pop(0)
0x32e: @ ResumeWorld()
0x32f: Pop(0)
0x330: Stack[-21] = (bool) 1
0x331: Return(); Pop(18)

0x332: PushEmpty(bool, bool)
0x333: @ CameraSwitchToNormal()
0x334: Pop(0)
0x335: PushEmpty(bool)
0x336: Call2 0x3d8

0x337: Pop(0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x342

0x33a: Push("head") // @poff=186
0x33b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x33c: Pop(1)
0x33d: Push(Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33f: Push("head") // @poff=186
0x340: @ UnlookAsync(Stack[-1])
0x341: Pop(1)
0x342: Return(); Pop(2)

0x343: PushEmpty(float, float, float, float)
0x344: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x345: Pop(0)
0x346: Push((bool) 0)
0x347: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(1)
0x349: Return(); Pop(4)

0x34a: PushEmpty(float, float, float, float)
0x34b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x34c: Pop(0)
0x34d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x34e: Pop(0)
0x34f: Return(); Pop(4)

0x350: PushEmpty(float, cvector, float, cvector)
0x351: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x352: Pop(0)
0x353: Stack[-1] = [0.0, 0.0, 0.0]
0x354: Push(CvectorIndex(Stack[-1], 1))
0x355: Stack[-3] = Stack[-1]
0x356: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x357: Push("head") // @poff=186
0x358: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x359: Pop(1)
0x35a: Return(); Pop(4)

0x35b: PushEmpty(bool)
0x35c: Call2 0x3d8

0x35d: Pop(0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: @ lshStopSpeech()
0x360: Pop(0)
0x361: Return(); Pop(0)

0x362: PushEmpty(object, object)
0x363: @ self(Stack[-1])
0x364: Pop(0)
0x365: Stack[-1] = Stack[-3]
0x366: Return(); Pop(2)

0x367: Stack[-1] = 0
0x368: PushEmpty(float, float)
0x369: Pop(0); Push(Stack[-3] | Stack[-3]);
0x36a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x36b: Push((float)9.999999974752427e-07)
0x36c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-4] = [0.0, 0.0, 0.0]
0x36f: Return(); Pop(2)

0x370: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x371: Return(); Pop(2)

0x372: PushEmpty(int, int)
0x373: @ GetVariable(Stack[-3], Stack[-1])
0x374: Pop(0)
0x375: Stack[-1] = Stack[-4]
0x376: Return(); Pop(2)

0x377: PushEmpty(object, object)
0x378: @ FindActor(Stack[-1], Stack[-4])
0x379: Pop(0)
0x37a: Pop(0); Push((bool) Stack[-1] == 0)
0x37b: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37c: Push("Door ") // @poff=222
0x37d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x37e: Push(" not found") // @poff=234
0x37f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x380: @ Trace(Stack[-1])
0x381: Pop(1)
0x382: GOTO 0x386

0x383: Push("locked") // @poff=256
0x384: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=270
0x385: Pop(1)
0x386: Return(); Pop(2)

0x387: Stack[-1] = 0
0x388: PushEmpty(string, string)
0x389: Stack[-1] = "idle" // @poff=146
0x38a: Push(Stack[-3])
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x38d: Stack[-1] = Stack[-4]
0x38e: Return(); Pop(2)

0x38f: PushEmpty(int, bool, int, bool)
0x390: Stack[-2] = (int) 0
0x391: Push("all") // @poff=138
0x392: PushEmpty(string, int)
0x393: Stack[-5] = Stack[-1]
0x394: Call2 0x388

0x395: Pop(1)
0x396: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: Pop(0); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: GOTO 0x39e

0x39b: Push((int) 1)
0x39c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x39d: GOTO 0x391

0x39e: Stack[-2] = Stack[-5]
0x39f: Return(); Pop(4)

0x3a0: PushEmpty()
0x3a1: Push("oob12TBirdmask1") // @poff=282
0x3a2: Push((int) 1)
0x3a3: @ SetVariable(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: PushEmpty(string, bool)
0x3a8: Stack[-2] = "itheater@door1" // @poff=314
0x3a9: Stack[-1] = (bool) 0
0x3aa: Call2 0x377

0x3ab: Pop(2)
0x3ac: Return(); Pop(0)

0x3ad: PushEmpty()
0x3ae: Push("b12q01TheaterIsVisited") // @poff=344
0x3af: Push((int) 1)
0x3b0: @ SetVariable(Stack[-2], Stack[-1])
0x3b1: Pop(2)
0x3b2: Return(); Pop(0)

0x3b3: PushEmpty()
0x3b4: PushEmpty(int, string)
0x3b5: Stack[-1] = "oob12TBirdmask1" // @poff=282
0x3b6: Call2 0x372

0x3b7: Pop(1)
0x3b8: Push((int) 0)
0x3b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: Stack[-2] = (bool) 1
0x3bc: Return(); Pop(0)

0x3bd: Stack[-2] = (bool) 0
0x3be: Return(); Pop(0)

0x3bf: PushEmpty(int, int)
0x3c0: Push("branch") // @poff=390
0x3c1: @ GetVariable(Stack[-1], Stack[-2])
0x3c2: Pop(1)
0x3c3: Push((int) 0)
0x3c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c6: Stack[-3] = (int) 1
0x3c7: Return(); Pop(2)

0x3c8: GOTO 0x3ce

0x3c9: Push((int) 1)
0x3ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Stack[-3] = (int) 2
0x3cd: Return(); Pop(2)

0x3ce: Stack[-3] = (int) 3
0x3cf: Return(); Pop(2)

0x3d0: Stack[-1] = (int) 515571
0x3d1: Return(); Pop(0)

0x3d2: Stack[-1] = (int) 504029
0x3d3: Return(); Pop(0)

0x3d4: Stack[-1] = "ui/NPC_bmask.png" // @poff=404
0x3d5: Return(); Pop(0)

0x3d6: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=438
0x3d7: Return(); Pop(0)

0x3d8: Stack[-1] = (bool) 0
0x3d9: Return(); Pop(0)

