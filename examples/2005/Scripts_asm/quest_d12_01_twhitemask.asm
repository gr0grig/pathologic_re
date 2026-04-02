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
	W:ood12Whitemask1
	W:ood12Whitemask2
	W:branch
	W:ui/NPC_wmask.png
	W:ui/NPC_wmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790069007400680065006100740065007200400064006f006f007200310000006f006f00640031003200570068006900740065006d00610073006b00310000006f006f00640031003200570068006900740065006d00610073006b00320000006200720061006e00630068000000750069002f004e00500043005f0077006d00610073006b002e0070006e0067000000750069002f004e00500043005f0077006d00610073006b005f0062002e0070006e0067000000
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

RunOp = 0x1fa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd6 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x200 Vars = (object)
		EVENT_26 Op = 0x238 Vars = (string)
		EVENT_5 Op = 0x240 Vars = ()
		EVENT_6 Op = 0x245 Vars = ()
		EVENT_7 Op = 0x284 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x30c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3fc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3fa

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3fe

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x400

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e9

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
0x41: Call2 0x350

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
0x4f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3d1

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3c5

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x3be

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral" // @poff=89
0x61: Call2 0xc0

0x62: Pop(1)
0x63: Push((int) 515058)
0x64: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65: Pop(1)
0x66: @@@ ClearReplies(); Obj=0 // @poff=116
0x67: Pop(0)
0x68: Push((int) 515059)
0x69: Push((int) 16324)
0x6a: Push((int) 16323)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: Push((int) 515072)
0x6e: Push((int) -1)
0x6f: Push((int) 16336)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0xa2

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral" // @poff=89
0x75: Call2 0xc0

0x76: Pop(1)
0x77: Push((int) 515073)
0x78: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x79: Pop(1)
0x7a: @@@ ClearReplies(); Obj=0 // @poff=116
0x7b: Pop(0)
0x7c: PushEmpty(bool, object)
0x7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Call2 0x3dd

0x7f: Pop(1)
0x80: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x81: Push((int) 515074)
0x82: Push((int) 16339)
0x83: Push((int) 16338)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x3dd

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push((int) 515085)
0x8c: Push((int) 16341)
0x8d: Push((int) 16349)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x3dd

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 515086)
0x96: Push((int) 16341)
0x97: Push((int) 16351)
0x98: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x99: Pop(3)
0x9a: Push((int) 515087)
0x9b: Push((int) -1)
0x9c: Push((int) 16353)
0x9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x4e

0xa2: PushEmpty(bool)
0xa3: Call2 0x402

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call2 0x361

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all") // @poff=138
0xb2: Push("idle") // @poff=146
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all") // @poff=138
0xbb: Push("idle") // @poff=146
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call2 0x402

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string, bool)
0xcb: Stack[-3] = Stack[-2]
0xcc: Push("") // @poff=102
0xcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: Stack[-1] = (bool) 0
0xd0: GOTO 0xd2

0xd1: Stack[-1] = (bool) 1
0xd2: Call2 0x368

0xd3: Pop(2)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Push((int) 1)
0xd8: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0x379

0xdb: Pop(0)
0xdc: Push((int) 16338)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x3cb

0xe3: Pop(2)
0xe4: Push((int) 16349)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x3cb

0xeb: Pop(2)
0xec: Push((int) 16351)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x3cb

0xf3: Pop(2)
0xf4: Push((int) 16322)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0xf7: PushEmpty(bool, object)
0xf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Call2 0x3d1

0xfa: Pop(1)
0xfb: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x3c5

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x3be

0x105: Pop(2)
0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=89
0x108: Call2 0xc0

0x109: Pop(1)
0x10a: Push((int) 515058)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=116
0x10e: Pop(0)
0x10f: Push((int) 515059)
0x110: Push((int) 16324)
0x111: Push((int) 16323)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Push((int) 515072)
0x115: Push((int) -1)
0x116: Push((int) 16336)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral" // @poff=89
0x11c: Call2 0xc0

0x11d: Pop(1)
0x11e: Push((int) 515073)
0x11f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x120: Pop(1)
0x121: @@@ ClearReplies(); Obj=0 // @poff=116
0x122: Pop(0)
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125: Call2 0x3dd

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x128: Push((int) 515074)
0x129: Push((int) 16339)
0x12a: Push((int) 16338)
0x12b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12c: Pop(3)
0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call2 0x3dd

0x130: Pop(1)
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 515085)
0x133: Push((int) 16341)
0x134: Push((int) 16349)
0x135: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x136: Pop(3)
0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x3dd

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: Push((int) 515086)
0x13d: Push((int) 16341)
0x13e: Push((int) 16351)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Push((int) 515087)
0x142: Push((int) -1)
0x143: Push((int) 16353)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 16339)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0xc0

0x14d: Pop(1)
0x14e: Push((int) 515075)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 515076)
0x154: Push((int) 16341)
0x155: Push((int) 16340)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Push((int) 515081)
0x159: Push((int) -1)
0x15a: Push((int) 16345)
0x15b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15c: Pop(3)
0x15d: Push((int) 515082)
0x15e: Push((int) 16347)
0x15f: Push((int) 16346)
0x160: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 16347)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral" // @poff=89
0x168: Call2 0xc0

0x169: Pop(1)
0x16a: Push((int) 515083)
0x16b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16c: Pop(1)
0x16d: @@@ ClearReplies(); Obj=0 // @poff=116
0x16e: Pop(0)
0x16f: Push((int) 515084)
0x170: Push((int) 16341)
0x171: Push((int) 16348)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 16341)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral" // @poff=89
0x17a: Call2 0xc0

0x17b: Pop(1)
0x17c: Push((int) 515077)
0x17d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17e: Pop(1)
0x17f: @@@ ClearReplies(); Obj=0 // @poff=116
0x180: Pop(0)
0x181: Push((int) 515078)
0x182: Push((int) -1)
0x183: Push((int) 16342)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Push((int) 515079)
0x187: Push((int) -1)
0x188: Push((int) 16343)
0x189: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18a: Pop(3)
0x18b: Push((int) 515080)
0x18c: Push((int) -1)
0x18d: Push((int) 16344)
0x18e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 16324)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral" // @poff=89
0x196: Call2 0xc0

0x197: Pop(1)
0x198: Push((int) 515060)
0x199: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19a: Pop(1)
0x19b: @@@ ClearReplies(); Obj=0 // @poff=116
0x19c: Pop(0)
0x19d: Push((int) 515071)
0x19e: Push((int) -1)
0x19f: Push((int) 16335)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Push((int) 515061)
0x1a3: Push((int) 16326)
0x1a4: Push((int) 16325)
0x1a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 16326)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral" // @poff=89
0x1ad: Call2 0xc0

0x1ae: Pop(1)
0x1af: Push((int) 515062)
0x1b0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b1: Pop(1)
0x1b2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b3: Pop(0)
0x1b4: Push((int) 515063)
0x1b5: Push((int) 16328)
0x1b6: Push((int) 16327)
0x1b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b8: Pop(3)
0x1b9: Push((int) 515067)
0x1ba: Push((int) 16332)
0x1bb: Push((int) 16331)
0x1bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 16332)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Neutral" // @poff=89
0x1c4: Call2 0xc0

0x1c5: Pop(1)
0x1c6: Push((int) 515068)
0x1c7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c8: Pop(1)
0x1c9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ca: Pop(0)
0x1cb: Push((int) 515069)
0x1cc: Push((int) -1)
0x1cd: Push((int) 16333)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: Push((int) 515070)
0x1d1: Push((int) -1)
0x1d2: Push((int) 16334)
0x1d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 16328)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral" // @poff=89
0x1db: Call2 0xc0

0x1dc: Pop(1)
0x1dd: Push((int) 515064)
0x1de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1df: Pop(1)
0x1e0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e1: Pop(0)
0x1e2: Push((int) 515065)
0x1e3: Push((int) -1)
0x1e4: Push((int) 16329)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Push((int) 515066)
0x1e8: Push((int) -1)
0x1e9: Push((int) 16330)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ee: PushEmpty(bool)
0x1ef: Call2 0x402

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: @ lshStopAnimation()
0x1f3: Pop(0)
0x1f4: GOTO 0x1f7

0x1f5: @ StopAnimation()
0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: GOTO 0xd7

0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(float, float)
0x1fb: Stack[-2] = (int) 300
0x1fc: Stack[-1] = (int) 100
0x1fd: Call2 0x20b

0x1fe: Pop(2)
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: PushEmpty()
0x202: Call2 0x29b

0x203: Pop(0)
0x204: PushEmpty(int, object)
0x205: Stack[-3] = Stack[-1]
0x206: Push(-2, 1); TaskCall(0)
0x207: Call2 0x0

0x208: Pop(-2, 1); TaskReturn
0x209: Pop(2)
0x20a: Return(); Pop(0)

0x20b: PushEmpty(float, float)
0x20c: PushEmpty(bool)
0x20d: Call2 0x307

0x20e: Pop(0)
0x20f: Pop(1); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: @ Hold()
0x212: Pop(0)
0x213: GOTO 0x20c

0x214: Push((int) 3)
0x215: @ rand(Stack[-2], Stack[-1])
0x216: Pop(1)
0x217: Push((int) 3)
0x218: Pop(1); Push(Stack[-2] + Stack[-1]);
0x219: @ Sleep(Stack[-1])
0x21a: Pop(1)
0x21b: PushEmpty(float, float)
0x21c: Stack[-6] = Stack[-2]
0x21d: Stack[-5] = Stack[-1]
0x21e: Call2 0x25a

0x21f: Pop(2)
0x220: @ sync()
0x221: Pop(0)
0x222: GOTO 0x20c

0x223: Return(); Pop(2)

0x224: PushEmpty(bool, bool)
0x225: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x226: @ IsLoaded(Stack[-1])
0x227: Pop(0)
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 0
0x22a: Pop(0); Push((bool) Stack[-2] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22c: PushEmpty(bool)
0x22d: Call2 0x258

0x22e: Pop(0)
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Stack[-1] = (bool) 1
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: PushEmpty(object)
0x233: Call2 0x380

0x234: Pop(0)
0x235: @ RemoveActor(Stack[-1])
0x236: Pop(1)
0x237: Return(); Pop(2)

0x238: PushEmpty()
0x239: Push("cleanup") // @poff=156
0x23a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23c: PushEmpty()
0x23d: Call2 0x224

0x23e: Pop(0)
0x23f: Return(); Pop(0)

0x240: @ StopGroup0()
0x241: Pop(0)
0x242: @ sync()
0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: Call2 0x29b

0x247: Pop(0)
0x248: PushEmpty(bool)
0x249: Stack[-1] = (bool) 0
0x24a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24c: PushEmpty(bool)
0x24d: Call2 0x258

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: Stack[-1] = (bool) 1
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: PushEmpty(object)
0x253: Call2 0x380

0x254: Pop(0)
0x255: @ RemoveActor(Stack[-1])
0x256: Pop(1)
0x257: Return(); Pop(0)

0x258: Stack[-1] = (bool) 1
0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: PushEmpty(bool)
0x25c: Call2 0x307

0x25d: Pop(0)
0x25e: Pop(1); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Return(); Pop(0)

0x261: Push("player") // @poff=172
0x262: @ FindActor(Stack[-4]T, Stack[-1])
0x263: Pop(1)
0x264: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x265: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x266: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x267: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x268: Push((int) 10)
0x269: Push((float)1.0)
0x26a: @ SetTimer(Stack[-2], Stack[-1])
0x26b: Pop(2)
0x26c: PushEmpty()
0x26d: Call2 0x2a9

0x26e: Pop(0)
0x26f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x271: Push((int) 10)
0x272: @ KillTimer(Stack[-1])
0x273: Pop(1)
0x274: Return(); Pop(0)

0x275: PushEmpty(float, float)
0x276: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-3] = (bool) 0
0x279: Return(); Pop(2)

0x27a: PushEmpty(float, object)
0x27b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x27c: Call2 0x2ff

0x27d: Pop(1)
0x27e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x27f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x280: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x281: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x282: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x283: Return(); Pop(2)

0x284: PushEmpty()
0x285: Push((int) 10)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x288: PushEmpty(bool)
0x289: Call2 0x275

0x28a: Pop(0)
0x28b: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: PushEmpty(object)
0x28f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x290: Call2 0x36e

0x291: Pop(1)
0x292: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x293: GOTO 0x29a

0x294: Push( Stack[2 + Tasks[-1].StackPointer] )
0x295: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x296: Push("head") // @poff=186
0x297: @ UnlookAsync(Stack[-1])
0x298: Pop(1)
0x299: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x29a: Return(); Pop(0)

0x29b: PushEmpty()
0x29c: Call2 0x2fa

0x29d: Pop(0)
0x29e: Push((int) 10)
0x29f: @ KillTimer(Stack[-1])
0x2a0: Pop(1)
0x2a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a3: Push("head") // @poff=186
0x2a4: @ UnlookAsync(Stack[-1])
0x2a5: Pop(1)
0x2a6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2a7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2aa: @ WaitForAnimEnd()
0x2ab: Pop(0)
0x2ac: PushEmpty(bool)
0x2ad: Call2 0x307

0x2ae: Pop(0)
0x2af: Pop(1); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(14)

0x2b2: PushEmpty(int)
0x2b3: Call2 0x3ad

0x2b4: Stack[-1] = Stack[-8]
0x2b5: Pop(1)
0x2b6: Stack[-6] = (int) 0
0x2b7: PushEmpty(bool)
0x2b8: Stack[-1] = (bool) 0
0x2b9: Push((int) 5)
0x2ba: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bc: PushEmpty(bool)
0x2bd: Call2 0x307

0x2be: Pop(0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: Stack[-1] = (bool) 1
0x2c1: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2c2: Push((int) 3)
0x2c3: @ irand(Stack[-6], Stack[-1])
0x2c4: Pop(1)
0x2c5: Push((int) 0)
0x2c6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2c8: Push(Stack[-7])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2ca: @ irand(Stack[-4], Stack[-7])
0x2cb: Pop(0)
0x2cc: Push("all") // @poff=138
0x2cd: PushEmpty(string, int)
0x2ce: Stack[-7] = Stack[-1]
0x2cf: Call2 0x3a6

0x2d0: Pop(1)
0x2d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: @ WaitForAnimEnd(Stack[-3])
0x2d4: Pop(0)
0x2d5: Pop(0); Push((bool) Stack[-3] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2f5

0x2d8: GOTO 0x2ea

0x2d9: Push((int) 1)
0x2da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2dc: Push((int) 4)
0x2dd: @ rand(Stack[-3], Stack[-1])
0x2de: Pop(1)
0x2df: Push((int) 1)
0x2e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e1: @ Sleep(Stack[-1], Stack[-2])
0x2e2: Pop(1)
0x2e3: Pop(0); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2f5

0x2e6: GOTO 0x2ea

0x2e7: Push(Stack[-6])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x2f5

0x2ea: PushEmpty(bool)
0x2eb: Call2 0x2f8

0x2ec: Pop(0)
0x2ed: Pop(1); Push((bool) Stack[-1] == 0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: GOTO 0x2f5

0x2f0: @ ResetAAS()
0x2f1: Pop(0)
0x2f2: Push((int) 1)
0x2f3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2f4: GOTO 0x2b7

0x2f5: @ ResetAAS()
0x2f6: Pop(0)
0x2f7: Return(); Pop(14)

0x2f8: Stack[-1] = (bool) 1
0x2f9: Return(); Pop(0)

0x2fa: @ StopAnimation()
0x2fb: Pop(0)
0x2fc: @ StopGroup0()
0x2fd: Pop(0)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x300: @ GetPosition(Stack[-3])
0x301: Pop(0)
0x302: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x303: Pop(0)
0x304: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x305: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x306: Return(); Pop(6)

0x307: PushEmpty(bool, bool)
0x308: @ IsLoaded(Stack[-1])
0x309: Pop(0)
0x30a: Stack[-1] = Stack[-3]
0x30b: Return(); Pop(2)

0x30c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x30d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x30e: Pop(0)
0x30f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x310: Pop(0)
0x311: Push(CvectorIndex(Stack[-8], 1))
0x312: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x313: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x314: @ GetPosition(Stack[-7])
0x315: Pop(0)
0x316: @ GetEyesHeight(Stack[-9])
0x317: Pop(0)
0x318: Push(CvectorIndex(Stack[-7], 1))
0x319: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x31b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x31c: Push(CvectorIndex(Stack[-6], 1))
0x31d: Stack[-1] = (int) 0
0x31e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x31f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x320: Pop(1); Push(Sqrt(Stack[-1]))
0x321: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x322: Stack[-5] = -Stack[-6]; Pop(0);
0x323: Pop(0); Push(Stack[-6] * Stack[-19]);
0x324: PushEmpty(cvector, cvector)
0x325: Push([0.0, 1.0, 0.0])
0x326: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x327: Call2 0x386

0x328: Pop(1)
0x329: Push((int) 25)
0x32a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x32b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32c: Push([0.0, 10.0, 0.0])
0x32d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x32e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x32f: @ IsOverrideActive(Stack[-2])
0x330: Pop(0)
0x331: Push(Stack[-2])
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-21] = (bool) 0
0x334: Return(); Pop(18)

0x335: @ StopWorld()
0x336: Pop(0)
0x337: @ CameraTransit(Stack[-3], Stack[-5])
0x338: Pop(0)
0x339: Push(CvectorIndex(Stack[-4], 0))
0x33a: Push(CvectorIndex(Stack[-5], 2))
0x33b: @ Rotate(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: PushEmpty(bool)
0x33e: Call2 0x402

0x33f: Pop(0)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: GOTO 0x34a

0x342: Push("head") // @poff=186
0x343: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x344: Pop(1)
0x345: Push(Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x347: Push("head") // @poff=186
0x348: @ LookAsyncCamera(Stack[-1])
0x349: Pop(1)
0x34a: @ CameraWaitForPlayFinish()
0x34b: Pop(0)
0x34c: @ ResumeWorld()
0x34d: Pop(0)
0x34e: Stack[-21] = (bool) 1
0x34f: Return(); Pop(18)

0x350: PushEmpty(bool, bool)
0x351: @ CameraSwitchToNormal()
0x352: Pop(0)
0x353: PushEmpty(bool)
0x354: Call2 0x402

0x355: Pop(0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: GOTO 0x360

0x358: Push("head") // @poff=186
0x359: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35a: Pop(1)
0x35b: Push(Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35d: Push("head") // @poff=186
0x35e: @ UnlookAsync(Stack[-1])
0x35f: Pop(1)
0x360: Return(); Pop(2)

0x361: PushEmpty(float, float, float, float)
0x362: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x363: Pop(0)
0x364: Push((bool) 0)
0x365: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(1)
0x367: Return(); Pop(4)

0x368: PushEmpty(float, float, float, float)
0x369: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x36a: Pop(0)
0x36b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x36c: Pop(0)
0x36d: Return(); Pop(4)

0x36e: PushEmpty(float, cvector, float, cvector)
0x36f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x370: Pop(0)
0x371: Stack[-1] = [0.0, 0.0, 0.0]
0x372: Push(CvectorIndex(Stack[-1], 1))
0x373: Stack[-3] = Stack[-1]
0x374: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x375: Push("head") // @poff=186
0x376: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x377: Pop(1)
0x378: Return(); Pop(4)

0x379: PushEmpty(bool)
0x37a: Call2 0x402

0x37b: Pop(0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: @ lshStopSpeech()
0x37e: Pop(0)
0x37f: Return(); Pop(0)

0x380: PushEmpty(object, object)
0x381: @ self(Stack[-1])
0x382: Pop(0)
0x383: Stack[-1] = Stack[-3]
0x384: Return(); Pop(2)

0x385: Stack[-1] = 0
0x386: PushEmpty(float, float)
0x387: Pop(0); Push(Stack[-3] | Stack[-3]);
0x388: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x389: Push((float)9.999999974752427e-07)
0x38a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38c: Stack[-4] = [0.0, 0.0, 0.0]
0x38d: Return(); Pop(2)

0x38e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x38f: Return(); Pop(2)

0x390: PushEmpty(int, int)
0x391: @ GetVariable(Stack[-3], Stack[-1])
0x392: Pop(0)
0x393: Stack[-1] = Stack[-4]
0x394: Return(); Pop(2)

0x395: PushEmpty(object, object)
0x396: @ FindActor(Stack[-1], Stack[-4])
0x397: Pop(0)
0x398: Pop(0); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39a: Push("Door ") // @poff=222
0x39b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x39c: Push(" not found") // @poff=234
0x39d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39e: @ Trace(Stack[-1])
0x39f: Pop(1)
0x3a0: GOTO 0x3a4

0x3a1: Push("locked") // @poff=256
0x3a2: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=270
0x3a3: Pop(1)
0x3a4: Return(); Pop(2)

0x3a5: Stack[-1] = 0
0x3a6: PushEmpty(string, string)
0x3a7: Stack[-1] = "idle" // @poff=146
0x3a8: Push(Stack[-3])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3ab: Stack[-1] = Stack[-4]
0x3ac: Return(); Pop(2)

0x3ad: PushEmpty(int, bool, int, bool)
0x3ae: Stack[-2] = (int) 0
0x3af: Push("all") // @poff=138
0x3b0: PushEmpty(string, int)
0x3b1: Stack[-5] = Stack[-1]
0x3b2: Call2 0x3a6

0x3b3: Pop(1)
0x3b4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: Pop(0); Push((bool) Stack[-1] == 0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b8: GOTO 0x3bc

0x3b9: Push((int) 1)
0x3ba: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3bb: GOTO 0x3af

0x3bc: Stack[-2] = Stack[-5]
0x3bd: Return(); Pop(4)

0x3be: PushEmpty()
0x3bf: PushEmpty(string, bool)
0x3c0: Stack[-2] = "itheater@door1" // @poff=282
0x3c1: Stack[-1] = (bool) 0
0x3c2: Call2 0x395

0x3c3: Pop(2)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty()
0x3c6: Push("ood12Whitemask1") // @poff=312
0x3c7: Push((int) 1)
0x3c8: @ SetVariable(Stack[-2], Stack[-1])
0x3c9: Pop(2)
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: Push("ood12Whitemask2") // @poff=344
0x3cd: Push((int) 1)
0x3ce: @ SetVariable(Stack[-2], Stack[-1])
0x3cf: Pop(2)
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: PushEmpty(int, string)
0x3d3: Stack[-1] = "ood12Whitemask1" // @poff=312
0x3d4: Call2 0x390

0x3d5: Pop(1)
0x3d6: Push((int) 0)
0x3d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-2] = (bool) 1
0x3da: Return(); Pop(0)

0x3db: Stack[-2] = (bool) 0
0x3dc: Return(); Pop(0)

0x3dd: PushEmpty()
0x3de: PushEmpty(int, string)
0x3df: Stack[-1] = "ood12Whitemask2" // @poff=344
0x3e0: Call2 0x390

0x3e1: Pop(1)
0x3e2: Push((int) 0)
0x3e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: Stack[-2] = (bool) 1
0x3e6: Return(); Pop(0)

0x3e7: Stack[-2] = (bool) 0
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty(int, int)
0x3ea: Push("branch") // @poff=376
0x3eb: @ GetVariable(Stack[-1], Stack[-2])
0x3ec: Pop(1)
0x3ed: Push((int) 0)
0x3ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f0: Stack[-3] = (int) 1
0x3f1: Return(); Pop(2)

0x3f2: GOTO 0x3f8

0x3f3: Push((int) 1)
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-3] = (int) 2
0x3f7: Return(); Pop(2)

0x3f8: Stack[-3] = (int) 3
0x3f9: Return(); Pop(2)

0x3fa: Stack[-1] = (int) 515569
0x3fb: Return(); Pop(0)

0x3fc: Stack[-1] = (int) 503354
0x3fd: Return(); Pop(0)

0x3fe: Stack[-1] = "ui/NPC_wmask.png" // @poff=390
0x3ff: Return(); Pop(0)

0x400: Stack[-1] = "ui/NPC_wmask_b.png" // @poff=424
0x401: Return(); Pop(0)

0x402: Stack[-1] = (bool) 0
0x403: Return(); Pop(0)

