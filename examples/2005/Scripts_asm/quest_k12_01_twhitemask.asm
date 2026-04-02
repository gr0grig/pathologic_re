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
	W:itheater@door1
	W:branch
	W:ui/NPC_wmask.png
	W:ui/NPC_wmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790069007400680065006100740065007200400064006f006f007200310000006200720061006e00630068000000750069002f004e00500043005f0077006d00610073006b002e0070006e0067000000750069002f004e00500043005f0077006d00610073006b005f0062002e0070006e0067000000
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
	Trace (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x1b0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1b6 Vars = (object)
		EVENT_26 Op = 0x1ee Vars = (string)
		EVENT_5 Op = 0x1f6 Vars = ()
		EVENT_6 Op = 0x1fb Vars = ()
		EVENT_7 Op = 0x23a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2c2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x389

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x387

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x38b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x38d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x376

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
0x41: Call2 0x306

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

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x36f

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0xa7

0x58: Pop(1)
0x59: Push((int) 540977)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 540978)
0x5f: Push((int) 43069)
0x60: Push((int) 43068)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 540991)
0x64: Push((int) -1)
0x65: Push((int) 43081)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x89

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xa7

0x6c: Pop(1)
0x6d: Push((int) 540992)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 540993)
0x73: Push((int) 43084)
0x74: Push((int) 43083)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 541004)
0x78: Push((int) 43086)
0x79: Push((int) 43095)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 541005)
0x7d: Push((int) 43086)
0x7e: Push((int) 43097)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: Push((int) 541006)
0x82: Push((int) -1)
0x83: Push((int) 43099)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x38f

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x317

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
0xa9: Call2 0x38f

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
0xb9: Call2 0x31e

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x32f

0xc2: Pop(0)
0xc3: Push((int) 43067)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x36f

0xca: Pop(2)
0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral" // @poff=89
0xcd: Call2 0xa7

0xce: Pop(1)
0xcf: Push((int) 540977)
0xd0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd1: Pop(1)
0xd2: @@@ ClearReplies(); Obj=0 // @poff=116
0xd3: Pop(0)
0xd4: Push((int) 540978)
0xd5: Push((int) 43069)
0xd6: Push((int) 43068)
0xd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd8: Pop(3)
0xd9: Push((int) 540991)
0xda: Push((int) -1)
0xdb: Push((int) 43081)
0xdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral" // @poff=89
0xe1: Call2 0xa7

0xe2: Pop(1)
0xe3: Push((int) 540992)
0xe4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe5: Pop(1)
0xe6: @@@ ClearReplies(); Obj=0 // @poff=116
0xe7: Pop(0)
0xe8: Push((int) 540993)
0xe9: Push((int) 43084)
0xea: Push((int) 43083)
0xeb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xec: Pop(3)
0xed: Push((int) 541004)
0xee: Push((int) 43086)
0xef: Push((int) 43095)
0xf0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf1: Pop(3)
0xf2: Push((int) 541005)
0xf3: Push((int) 43086)
0xf4: Push((int) 43097)
0xf5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf6: Pop(3)
0xf7: Push((int) 541006)
0xf8: Push((int) -1)
0xf9: Push((int) 43099)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 43084)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 540994)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 540995)
0x10a: Push((int) 43086)
0x10b: Push((int) 43085)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 541000)
0x10f: Push((int) -1)
0x110: Push((int) 43090)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Push((int) 541001)
0x114: Push((int) 43092)
0x115: Push((int) 43091)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 43092)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral" // @poff=89
0x11e: Call2 0xa7

0x11f: Pop(1)
0x120: Push((int) 541002)
0x121: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x122: Pop(1)
0x123: @@@ ClearReplies(); Obj=0 // @poff=116
0x124: Pop(0)
0x125: Push((int) 541003)
0x126: Push((int) 43086)
0x127: Push((int) 43093)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 43086)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral" // @poff=89
0x130: Call2 0xa7

0x131: Pop(1)
0x132: Push((int) 540996)
0x133: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x134: Pop(1)
0x135: @@@ ClearReplies(); Obj=0 // @poff=116
0x136: Pop(0)
0x137: Push((int) 540997)
0x138: Push((int) -1)
0x139: Push((int) 43087)
0x13a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13b: Pop(3)
0x13c: Push((int) 540998)
0x13d: Push((int) -1)
0x13e: Push((int) 43088)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Push((int) 540999)
0x142: Push((int) -1)
0x143: Push((int) 43089)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 43069)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0xa7

0x14d: Pop(1)
0x14e: Push((int) 540979)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 540980)
0x154: Push((int) -1)
0x155: Push((int) 43070)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Push((int) 540981)
0x159: Push((int) 43072)
0x15a: Push((int) 43071)
0x15b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Push((int) 43072)
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral" // @poff=89
0x163: Call2 0xa7

0x164: Pop(1)
0x165: Push((int) 540982)
0x166: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x167: Pop(1)
0x168: @@@ ClearReplies(); Obj=0 // @poff=116
0x169: Pop(0)
0x16a: Push((int) 540983)
0x16b: Push((int) 43074)
0x16c: Push((int) 43073)
0x16d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16e: Pop(3)
0x16f: Push((int) 540987)
0x170: Push((int) 43078)
0x171: Push((int) 43077)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 43078)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral" // @poff=89
0x17a: Call2 0xa7

0x17b: Pop(1)
0x17c: Push((int) 540988)
0x17d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17e: Pop(1)
0x17f: @@@ ClearReplies(); Obj=0 // @poff=116
0x180: Pop(0)
0x181: Push((int) 540989)
0x182: Push((int) -1)
0x183: Push((int) 43079)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Push((int) 540990)
0x187: Push((int) -1)
0x188: Push((int) 43080)
0x189: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: Push((int) 43074)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Neutral" // @poff=89
0x191: Call2 0xa7

0x192: Pop(1)
0x193: Push((int) 540984)
0x194: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x195: Pop(1)
0x196: @@@ ClearReplies(); Obj=0 // @poff=116
0x197: Pop(0)
0x198: Push((int) 540985)
0x199: Push((int) -1)
0x19a: Push((int) 43075)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Push((int) 540986)
0x19e: Push((int) -1)
0x19f: Push((int) 43076)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x38f

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: @ lshStopAnimation()
0x1a9: Pop(0)
0x1aa: GOTO 0x1ad

0x1ab: @ StopAnimation()
0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: GOTO 0xbe

0x1af: Return(); Pop(0)

0x1b0: PushEmpty(float, float)
0x1b1: Stack[-2] = (int) 300
0x1b2: Stack[-1] = (int) 100
0x1b3: Call2 0x1c1

0x1b4: Pop(2)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty()
0x1b7: PushEmpty()
0x1b8: Call2 0x251

0x1b9: Pop(0)
0x1ba: PushEmpty(int, object)
0x1bb: Stack[-3] = Stack[-1]
0x1bc: Push(-2, 1); TaskCall(0)
0x1bd: Call2 0x0

0x1be: Pop(-2, 1); TaskReturn
0x1bf: Pop(2)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty(float, float)
0x1c2: PushEmpty(bool)
0x1c3: Call2 0x2bd

0x1c4: Pop(0)
0x1c5: Pop(1); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c7: @ Hold()
0x1c8: Pop(0)
0x1c9: GOTO 0x1c2

0x1ca: Push((int) 3)
0x1cb: @ rand(Stack[-2], Stack[-1])
0x1cc: Pop(1)
0x1cd: Push((int) 3)
0x1ce: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1cf: @ Sleep(Stack[-1])
0x1d0: Pop(1)
0x1d1: PushEmpty(float, float)
0x1d2: Stack[-6] = Stack[-2]
0x1d3: Stack[-5] = Stack[-1]
0x1d4: Call2 0x210

0x1d5: Pop(2)
0x1d6: @ sync()
0x1d7: Pop(0)
0x1d8: GOTO 0x1c2

0x1d9: Return(); Pop(2)

0x1da: PushEmpty(bool, bool)
0x1db: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1dc: @ IsLoaded(Stack[-1])
0x1dd: Pop(0)
0x1de: PushEmpty(bool)
0x1df: Stack[-1] = (bool) 0
0x1e0: Pop(0); Push((bool) Stack[-2] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(bool)
0x1e3: Call2 0x20e

0x1e4: Pop(0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(object)
0x1e9: Call2 0x336

0x1ea: Pop(0)
0x1eb: @ RemoveActor(Stack[-1])
0x1ec: Pop(1)
0x1ed: Return(); Pop(2)

0x1ee: PushEmpty()
0x1ef: Push("cleanup") // @poff=156
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: PushEmpty()
0x1f3: Call2 0x1da

0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: @ StopGroup0()
0x1f7: Pop(0)
0x1f8: @ sync()
0x1f9: Pop(0)
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty()
0x1fc: Call2 0x251

0x1fd: Pop(0)
0x1fe: PushEmpty(bool)
0x1ff: Stack[-1] = (bool) 0
0x200: Push( Stack[5 + Tasks[-1].StackPointer] )
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(bool)
0x203: Call2 0x20e

0x204: Pop(0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Stack[-1] = (bool) 1
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: PushEmpty(object)
0x209: Call2 0x336

0x20a: Pop(0)
0x20b: @ RemoveActor(Stack[-1])
0x20c: Pop(1)
0x20d: Return(); Pop(0)

0x20e: Stack[-1] = (bool) 1
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: PushEmpty(bool)
0x212: Call2 0x2bd

0x213: Pop(0)
0x214: Pop(1); Push((bool) Stack[-1] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: Return(); Pop(0)

0x217: Push("player") // @poff=172
0x218: @ FindActor(Stack[-4]T, Stack[-1])
0x219: Pop(1)
0x21a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x21c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x21d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x21e: Push((int) 10)
0x21f: Push((float)1.0)
0x220: @ SetTimer(Stack[-2], Stack[-1])
0x221: Pop(2)
0x222: PushEmpty()
0x223: Call2 0x25f

0x224: Pop(0)
0x225: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x227: Push((int) 10)
0x228: @ KillTimer(Stack[-1])
0x229: Pop(1)
0x22a: Return(); Pop(0)

0x22b: PushEmpty(float, float)
0x22c: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: Stack[-3] = (bool) 0
0x22f: Return(); Pop(2)

0x230: PushEmpty(float, object)
0x231: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x232: Call2 0x2b5

0x233: Pop(1)
0x234: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x235: Push( Stack[2 + Tasks[-1].StackPointer] )
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x238: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x239: Return(); Pop(2)

0x23a: PushEmpty()
0x23b: Push((int) 10)
0x23c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23e: PushEmpty(bool)
0x23f: Call2 0x22b

0x240: Pop(0)
0x241: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x242: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x244: PushEmpty(object)
0x245: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x246: Call2 0x324

0x247: Pop(1)
0x248: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x249: GOTO 0x250

0x24a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24c: Push("head") // @poff=186
0x24d: @ UnlookAsync(Stack[-1])
0x24e: Pop(1)
0x24f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x250: Return(); Pop(0)

0x251: PushEmpty()
0x252: Call2 0x2b0

0x253: Pop(0)
0x254: Push((int) 10)
0x255: @ KillTimer(Stack[-1])
0x256: Pop(1)
0x257: Push( Stack[2 + Tasks[-1].StackPointer] )
0x258: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x259: Push("head") // @poff=186
0x25a: @ UnlookAsync(Stack[-1])
0x25b: Pop(1)
0x25c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x25d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25e: Return(); Pop(0)

0x25f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x260: @ WaitForAnimEnd()
0x261: Pop(0)
0x262: PushEmpty(bool)
0x263: Call2 0x2bd

0x264: Pop(0)
0x265: Pop(1); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Return(); Pop(14)

0x268: PushEmpty(int)
0x269: Call2 0x35e

0x26a: Stack[-1] = Stack[-8]
0x26b: Pop(1)
0x26c: Stack[-6] = (int) 0
0x26d: PushEmpty(bool)
0x26e: Stack[-1] = (bool) 0
0x26f: Push((int) 5)
0x270: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x272: PushEmpty(bool)
0x273: Call2 0x2bd

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = (bool) 1
0x277: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x278: Push((int) 3)
0x279: @ irand(Stack[-6], Stack[-1])
0x27a: Pop(1)
0x27b: Push((int) 0)
0x27c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x27e: Push(Stack[-7])
0x27f: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x280: @ irand(Stack[-4], Stack[-7])
0x281: Pop(0)
0x282: Push("all") // @poff=138
0x283: PushEmpty(string, int)
0x284: Stack[-7] = Stack[-1]
0x285: Call2 0x357

0x286: Pop(1)
0x287: @ PlayAnimation(Stack[-2], Stack[-1])
0x288: Pop(2)
0x289: @ WaitForAnimEnd(Stack[-3])
0x28a: Pop(0)
0x28b: Pop(0); Push((bool) Stack[-3] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x2ab

0x28e: GOTO 0x2a0

0x28f: Push((int) 1)
0x290: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x292: Push((int) 4)
0x293: @ rand(Stack[-3], Stack[-1])
0x294: Pop(1)
0x295: Push((int) 1)
0x296: Pop(1); Push(Stack[-3] + Stack[-1]);
0x297: @ Sleep(Stack[-1], Stack[-2])
0x298: Pop(1)
0x299: Pop(0); Push((bool) Stack[-1] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2ab

0x29c: GOTO 0x2a0

0x29d: Push(Stack[-6])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2ab

0x2a0: PushEmpty(bool)
0x2a1: Call2 0x2ae

0x2a2: Pop(0)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2ab

0x2a6: @ ResetAAS()
0x2a7: Pop(0)
0x2a8: Push((int) 1)
0x2a9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2aa: GOTO 0x26d

0x2ab: @ ResetAAS()
0x2ac: Pop(0)
0x2ad: Return(); Pop(14)

0x2ae: Stack[-1] = (bool) 1
0x2af: Return(); Pop(0)

0x2b0: @ StopAnimation()
0x2b1: Pop(0)
0x2b2: @ StopGroup0()
0x2b3: Pop(0)
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b6: @ GetPosition(Stack[-3])
0x2b7: Pop(0)
0x2b8: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x2b9: Pop(0)
0x2ba: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2bb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2bc: Return(); Pop(6)

0x2bd: PushEmpty(bool, bool)
0x2be: @ IsLoaded(Stack[-1])
0x2bf: Pop(0)
0x2c0: Stack[-1] = Stack[-3]
0x2c1: Return(); Pop(2)

0x2c2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c3: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2c4: Pop(0)
0x2c5: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2c6: Pop(0)
0x2c7: Push(CvectorIndex(Stack[-8], 1))
0x2c8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ca: @ GetPosition(Stack[-7])
0x2cb: Pop(0)
0x2cc: @ GetEyesHeight(Stack[-9])
0x2cd: Pop(0)
0x2ce: Push(CvectorIndex(Stack[-7], 1))
0x2cf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2d1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d2: Push(CvectorIndex(Stack[-6], 1))
0x2d3: Stack[-1] = (int) 0
0x2d4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d6: Pop(1); Push(Sqrt(Stack[-1]))
0x2d7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d8: Stack[-5] = -Stack[-6]; Pop(0);
0x2d9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2da: PushEmpty(cvector, cvector)
0x2db: Push([0.0, 1.0, 0.0])
0x2dc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2dd: Call2 0x33c

0x2de: Pop(1)
0x2df: Push((int) 25)
0x2e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e2: Push([0.0, 10.0, 0.0])
0x2e3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e5: @ IsOverrideActive(Stack[-2])
0x2e6: Pop(0)
0x2e7: Push(Stack[-2])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e9: Stack[-21] = (bool) 0
0x2ea: Return(); Pop(18)

0x2eb: @ StopWorld()
0x2ec: Pop(0)
0x2ed: @ CameraTransit(Stack[-3], Stack[-5])
0x2ee: Pop(0)
0x2ef: Push(CvectorIndex(Stack[-4], 0))
0x2f0: Push(CvectorIndex(Stack[-5], 2))
0x2f1: @ Rotate(Stack[-2], Stack[-1])
0x2f2: Pop(2)
0x2f3: PushEmpty(bool)
0x2f4: Call2 0x38f

0x2f5: Pop(0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x300

0x2f8: Push("head") // @poff=186
0x2f9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fa: Pop(1)
0x2fb: Push(Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fd: Push("head") // @poff=186
0x2fe: @ LookAsyncCamera(Stack[-1])
0x2ff: Pop(1)
0x300: @ CameraWaitForPlayFinish()
0x301: Pop(0)
0x302: @ ResumeWorld()
0x303: Pop(0)
0x304: Stack[-21] = (bool) 1
0x305: Return(); Pop(18)

0x306: PushEmpty(bool, bool)
0x307: @ CameraSwitchToNormal()
0x308: Pop(0)
0x309: PushEmpty(bool)
0x30a: Call2 0x38f

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: GOTO 0x316

0x30e: Push("head") // @poff=186
0x30f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x310: Pop(1)
0x311: Push(Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x313: Push("head") // @poff=186
0x314: @ UnlookAsync(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(2)

0x317: PushEmpty(float, float, float, float)
0x318: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x319: Pop(0)
0x31a: Push((bool) 0)
0x31b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(1)
0x31d: Return(); Pop(4)

0x31e: PushEmpty(float, float, float, float)
0x31f: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x320: Pop(0)
0x321: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x322: Pop(0)
0x323: Return(); Pop(4)

0x324: PushEmpty(float, cvector, float, cvector)
0x325: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x326: Pop(0)
0x327: Stack[-1] = [0.0, 0.0, 0.0]
0x328: Push(CvectorIndex(Stack[-1], 1))
0x329: Stack[-3] = Stack[-1]
0x32a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x32b: Push("head") // @poff=186
0x32c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x32d: Pop(1)
0x32e: Return(); Pop(4)

0x32f: PushEmpty(bool)
0x330: Call2 0x38f

0x331: Pop(0)
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: @ lshStopSpeech()
0x334: Pop(0)
0x335: Return(); Pop(0)

0x336: PushEmpty(object, object)
0x337: @ self(Stack[-1])
0x338: Pop(0)
0x339: Stack[-1] = Stack[-3]
0x33a: Return(); Pop(2)

0x33b: Stack[-1] = 0
0x33c: PushEmpty(float, float)
0x33d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x33e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x33f: Push((float)9.999999974752427e-07)
0x340: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-4] = [0.0, 0.0, 0.0]
0x343: Return(); Pop(2)

0x344: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x345: Return(); Pop(2)

0x346: PushEmpty(object, object)
0x347: @ FindActor(Stack[-1], Stack[-4])
0x348: Pop(0)
0x349: Pop(0); Push((bool) Stack[-1] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34b: Push("Door ") // @poff=222
0x34c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x34d: Push(" not found") // @poff=234
0x34e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34f: @ Trace(Stack[-1])
0x350: Pop(1)
0x351: GOTO 0x355

0x352: Push("locked") // @poff=256
0x353: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=270
0x354: Pop(1)
0x355: Return(); Pop(2)

0x356: Stack[-1] = 0
0x357: PushEmpty(string, string)
0x358: Stack[-1] = "idle" // @poff=146
0x359: Push(Stack[-3])
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x35c: Stack[-1] = Stack[-4]
0x35d: Return(); Pop(2)

0x35e: PushEmpty(int, bool, int, bool)
0x35f: Stack[-2] = (int) 0
0x360: Push("all") // @poff=138
0x361: PushEmpty(string, int)
0x362: Stack[-5] = Stack[-1]
0x363: Call2 0x357

0x364: Pop(1)
0x365: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: Pop(0); Push((bool) Stack[-1] == 0)
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: GOTO 0x36d

0x36a: Push((int) 1)
0x36b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36c: GOTO 0x360

0x36d: Stack[-2] = Stack[-5]
0x36e: Return(); Pop(4)

0x36f: PushEmpty()
0x370: PushEmpty(string, bool)
0x371: Stack[-2] = "itheater@door1" // @poff=282
0x372: Stack[-1] = (bool) 0
0x373: Call2 0x346

0x374: Pop(2)
0x375: Return(); Pop(0)

0x376: PushEmpty(int, int)
0x377: Push("branch") // @poff=312
0x378: @ GetVariable(Stack[-1], Stack[-2])
0x379: Pop(1)
0x37a: Push((int) 0)
0x37b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37d: Stack[-3] = (int) 1
0x37e: Return(); Pop(2)

0x37f: GOTO 0x385

0x380: Push((int) 1)
0x381: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: Stack[-3] = (int) 2
0x384: Return(); Pop(2)

0x385: Stack[-3] = (int) 3
0x386: Return(); Pop(2)

0x387: Stack[-1] = (int) 515569
0x388: Return(); Pop(0)

0x389: Stack[-1] = (int) 503354
0x38a: Return(); Pop(0)

0x38b: Stack[-1] = "ui/NPC_wmask.png" // @poff=326
0x38c: Return(); Pop(0)

0x38d: Stack[-1] = "ui/NPC_wmask_b.png" // @poff=360
0x38e: Return(); Pop(0)

0x38f: Stack[-1] = (bool) 0
0x390: Return(); Pop(0)

