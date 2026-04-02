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
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:quest_k1_01
	W:remove_birdmask
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000710075006500730074005f006b0031005f00300031000000720065006d006f00760065005f0062006900720064006d00610073006b0000006200720061006e00630068000000
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x1c9
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1d3 Vars = (object)
		EVENT_7 Op = 0x20c Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x294

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x320

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x31e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x322

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x324

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x347

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
0x41: Call2 0x2d8

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x340

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 525968)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 525969)
0x5f: Push((int) 27254)
0x60: Push((int) 27253)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 525988)
0x64: Push((int) 27273)
0x65: Push((int) 27272)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 525996)
0x69: Push((int) 27284)
0x6a: Push((int) 27283)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x326

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x2e9

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all") // @poff=138
0x80: Push("idle") // @poff=146
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x326

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-3] = Stack[-2]
0x9a: Push("") // @poff=102
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x2f0

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x301

0xa9: Pop(0)
0xaa: Push((int) 27252)
0xab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x340

0xb1: Pop(2)
0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral" // @poff=89
0xb4: Call2 0x8e

0xb5: Pop(1)
0xb6: Push((int) 525968)
0xb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb8: Pop(1)
0xb9: @@@ ClearReplies(); Obj=0 // @poff=116
0xba: Pop(0)
0xbb: Push((int) 525969)
0xbc: Push((int) 27254)
0xbd: Push((int) 27253)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Push((int) 525988)
0xc1: Push((int) 27273)
0xc2: Push((int) 27272)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 525996)
0xc6: Push((int) 27284)
0xc7: Push((int) 27283)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 27284)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x8e

0xd1: Pop(1)
0xd2: Push((int) 525997)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 526229)
0xd8: Push((int) 27273)
0xd9: Push((int) 27495)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 526230)
0xdd: Push((int) 27254)
0xde: Push((int) 27496)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 27273)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0x8e

0xe8: Pop(1)
0xe9: Push((int) 525989)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 525990)
0xef: Push((int) 27254)
0xf0: Push((int) 27274)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 27254)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0x8e

0xfa: Pop(1)
0xfb: Push((int) 525970)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: Push((int) 525971)
0x101: Push((int) 27256)
0x102: Push((int) 27255)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Push((int) 526231)
0x106: Push((int) -1)
0x107: Push((int) 27499)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 27256)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral" // @poff=89
0x110: Call2 0x8e

0x111: Pop(1)
0x112: Push((int) 525972)
0x113: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x114: Pop(1)
0x115: @@@ ClearReplies(); Obj=0 // @poff=116
0x116: Pop(0)
0x117: Push((int) 525973)
0x118: Push((int) 27258)
0x119: Push((int) 27257)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: Push((int) 526232)
0x11d: Push((int) 27258)
0x11e: Push((int) 27501)
0x11f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 27258)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral" // @poff=89
0x127: Call2 0x8e

0x128: Pop(1)
0x129: Push((int) 525974)
0x12a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12b: Pop(1)
0x12c: @@@ ClearReplies(); Obj=0 // @poff=116
0x12d: Pop(0)
0x12e: Push((int) 525975)
0x12f: Push((int) 27260)
0x130: Push((int) 27259)
0x131: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Push((int) 27260)
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral" // @poff=89
0x139: Call2 0x8e

0x13a: Pop(1)
0x13b: Push((int) 525976)
0x13c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13d: Pop(1)
0x13e: @@@ ClearReplies(); Obj=0 // @poff=116
0x13f: Pop(0)
0x140: Push((int) 525977)
0x141: Push((int) 27262)
0x142: Push((int) 27261)
0x143: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 27262)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral" // @poff=89
0x14b: Call2 0x8e

0x14c: Pop(1)
0x14d: Push((int) 525978)
0x14e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14f: Pop(1)
0x150: @@@ ClearReplies(); Obj=0 // @poff=116
0x151: Pop(0)
0x152: Push((int) 525979)
0x153: Push((int) 27264)
0x154: Push((int) 27263)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 27264)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral" // @poff=89
0x15d: Call2 0x8e

0x15e: Pop(1)
0x15f: Push((int) 525980)
0x160: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x161: Pop(1)
0x162: @@@ ClearReplies(); Obj=0 // @poff=116
0x163: Pop(0)
0x164: Push((int) 525981)
0x165: Push((int) 27266)
0x166: Push((int) 27265)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 27266)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=89
0x16f: Call2 0x8e

0x170: Pop(1)
0x171: Push((int) 525982)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=116
0x175: Pop(0)
0x176: Push((int) 525983)
0x177: Push((int) 27504)
0x178: Push((int) 27267)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17a: Pop(3)
0x17b: Push((int) 526233)
0x17c: Push((int) 27504)
0x17d: Push((int) 27503)
0x17e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 27504)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral" // @poff=89
0x186: Call2 0x8e

0x187: Pop(1)
0x188: Push((int) 526234)
0x189: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18a: Pop(1)
0x18b: @@@ ClearReplies(); Obj=0 // @poff=116
0x18c: Pop(0)
0x18d: Push((int) 526235)
0x18e: Push((int) 27507)
0x18f: Push((int) 27506)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Push((int) 526238)
0x193: Push((int) 27510)
0x194: Push((int) 27509)
0x195: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 27510)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral" // @poff=89
0x19d: Call2 0x8e

0x19e: Pop(1)
0x19f: Push((int) 526239)
0x1a0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a1: Pop(1)
0x1a2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a3: Pop(0)
0x1a4: Push((int) 526240)
0x1a5: Push((int) -1)
0x1a6: Push((int) 27511)
0x1a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 27507)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral" // @poff=89
0x1af: Call2 0x8e

0x1b0: Pop(1)
0x1b1: Push((int) 526236)
0x1b2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b3: Pop(1)
0x1b4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b5: Pop(0)
0x1b6: Push((int) 526237)
0x1b7: Push((int) -1)
0x1b8: Push((int) 27508)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1bd: PushEmpty(bool)
0x1be: Call2 0x326

0x1bf: Pop(0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: @ lshStopAnimation()
0x1c2: Pop(0)
0x1c3: GOTO 0x1c6

0x1c4: @ StopAnimation()
0x1c5: Pop(0)
0x1c6: Return(); Pop(0)

0x1c7: GOTO 0xa5

0x1c8: Return(); Pop(0)

0x1c9: PushEmpty(float, float)
0x1ca: Stack[-2] = (int) 300
0x1cb: Stack[-1] = (int) 100
0x1cc: Call2 0x1e2

0x1cd: Pop(2)
0x1ce: Push((int) 3)
0x1cf: @ Sleep(Stack[-1])
0x1d0: Pop(1)
0x1d1: GOTO 0x1c9

0x1d2: Return(); Pop(0)

0x1d3: PushEmpty()
0x1d4: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Return(); Pop(0)

0x1d7: PushEmpty()
0x1d8: Call2 0x223

0x1d9: Pop(0)
0x1da: PushEmpty(int, object)
0x1db: Stack[-3] = Stack[-1]
0x1dc: Push(-2, 1); TaskCall(0)
0x1dd: Call2 0x0

0x1de: Pop(-2, 1); TaskReturn
0x1df: Pop(2)
0x1e0: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: PushEmpty(bool)
0x1e4: Call2 0x28f

0x1e5: Pop(0)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(0)

0x1e9: Push("player") // @poff=156
0x1ea: @ FindActor(Stack[-4]T, Stack[-1])
0x1eb: Pop(1)
0x1ec: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ed: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ee: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ef: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f0: Push((int) 10)
0x1f1: Push((float)1.0)
0x1f2: @ SetTimer(Stack[-2], Stack[-1])
0x1f3: Pop(2)
0x1f4: PushEmpty()
0x1f5: Call2 0x231

0x1f6: Pop(0)
0x1f7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f9: Push((int) 10)
0x1fa: @ KillTimer(Stack[-1])
0x1fb: Pop(1)
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(float, float)
0x1fe: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-3] = (bool) 0
0x201: Return(); Pop(2)

0x202: PushEmpty(float, object)
0x203: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x204: Call2 0x287

0x205: Pop(1)
0x206: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x207: Push( Stack[2 + Tasks[-1].StackPointer] )
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20a: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20b: Return(); Pop(2)

0x20c: PushEmpty()
0x20d: Push((int) 10)
0x20e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x210: PushEmpty(bool)
0x211: Call2 0x1fd

0x212: Pop(0)
0x213: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x214: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x216: PushEmpty(object)
0x217: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x218: Call2 0x2f6

0x219: Pop(1)
0x21a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21b: GOTO 0x222

0x21c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21d: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21e: Push("head") // @poff=170
0x21f: @ UnlookAsync(Stack[-1])
0x220: Pop(1)
0x221: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x222: Return(); Pop(0)

0x223: PushEmpty()
0x224: Call2 0x282

0x225: Pop(0)
0x226: Push((int) 10)
0x227: @ KillTimer(Stack[-1])
0x228: Pop(1)
0x229: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22b: Push("head") // @poff=170
0x22c: @ UnlookAsync(Stack[-1])
0x22d: Pop(1)
0x22e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x230: Return(); Pop(0)

0x231: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x232: @ WaitForAnimEnd()
0x233: Pop(0)
0x234: PushEmpty(bool)
0x235: Call2 0x28f

0x236: Pop(0)
0x237: Pop(1); Push((bool) Stack[-1] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Return(); Pop(14)

0x23a: PushEmpty(int)
0x23b: Call2 0x32f

0x23c: Stack[-1] = Stack[-8]
0x23d: Pop(1)
0x23e: Stack[-6] = (int) 0
0x23f: PushEmpty(bool)
0x240: Stack[-1] = (bool) 0
0x241: Push((int) 5)
0x242: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x244: PushEmpty(bool)
0x245: Call2 0x28f

0x246: Pop(0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Stack[-1] = (bool) 1
0x249: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x24a: Push((int) 3)
0x24b: @ irand(Stack[-6], Stack[-1])
0x24c: Pop(1)
0x24d: Push((int) 0)
0x24e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x250: Push(Stack[-7])
0x251: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x252: @ irand(Stack[-4], Stack[-7])
0x253: Pop(0)
0x254: Push("all") // @poff=138
0x255: PushEmpty(string, int)
0x256: Stack[-7] = Stack[-1]
0x257: Call2 0x328

0x258: Pop(1)
0x259: @ PlayAnimation(Stack[-2], Stack[-1])
0x25a: Pop(2)
0x25b: @ WaitForAnimEnd(Stack[-3])
0x25c: Pop(0)
0x25d: Pop(0); Push((bool) Stack[-3] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x27d

0x260: GOTO 0x272

0x261: Push((int) 1)
0x262: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x264: Push((int) 4)
0x265: @ rand(Stack[-3], Stack[-1])
0x266: Pop(1)
0x267: Push((int) 1)
0x268: Pop(1); Push(Stack[-3] + Stack[-1]);
0x269: @ Sleep(Stack[-1], Stack[-2])
0x26a: Pop(1)
0x26b: Pop(0); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: GOTO 0x27d

0x26e: GOTO 0x272

0x26f: Push(Stack[-6])
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x27d

0x272: PushEmpty(bool)
0x273: Call2 0x280

0x274: Pop(0)
0x275: Pop(1); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27d

0x278: @ ResetAAS()
0x279: Pop(0)
0x27a: Push((int) 1)
0x27b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27c: GOTO 0x23f

0x27d: @ ResetAAS()
0x27e: Pop(0)
0x27f: Return(); Pop(14)

0x280: Stack[-1] = (bool) 1
0x281: Return(); Pop(0)

0x282: @ StopAnimation()
0x283: Pop(0)
0x284: @ StopGroup0()
0x285: Pop(0)
0x286: Return(); Pop(0)

0x287: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x288: @ GetPosition(Stack[-3])
0x289: Pop(0)
0x28a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x28b: Pop(0)
0x28c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x28e: Return(); Pop(6)

0x28f: PushEmpty(bool, bool)
0x290: @ IsLoaded(Stack[-1])
0x291: Pop(0)
0x292: Stack[-1] = Stack[-3]
0x293: Return(); Pop(2)

0x294: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x295: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x296: Pop(0)
0x297: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x298: Pop(0)
0x299: Push(CvectorIndex(Stack[-8], 1))
0x29a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29c: @ GetPosition(Stack[-7])
0x29d: Pop(0)
0x29e: @ GetEyesHeight(Stack[-9])
0x29f: Pop(0)
0x2a0: Push(CvectorIndex(Stack[-7], 1))
0x2a1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a4: Push(CvectorIndex(Stack[-6], 1))
0x2a5: Stack[-1] = (int) 0
0x2a6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a8: Pop(1); Push(Sqrt(Stack[-1]))
0x2a9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2aa: Stack[-5] = -Stack[-6]; Pop(0);
0x2ab: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ac: PushEmpty(cvector, cvector)
0x2ad: Push([0.0, 1.0, 0.0])
0x2ae: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2af: Call2 0x308

0x2b0: Pop(1)
0x2b1: Push((int) 25)
0x2b2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b4: Push([0.0, 10.0, 0.0])
0x2b5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b7: @ IsOverrideActive(Stack[-2])
0x2b8: Pop(0)
0x2b9: Push(Stack[-2])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-21] = (bool) 0
0x2bc: Return(); Pop(18)

0x2bd: @ StopWorld()
0x2be: Pop(0)
0x2bf: @ CameraTransit(Stack[-3], Stack[-5])
0x2c0: Pop(0)
0x2c1: Push(CvectorIndex(Stack[-4], 0))
0x2c2: Push(CvectorIndex(Stack[-5], 2))
0x2c3: @ Rotate(Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: PushEmpty(bool)
0x2c6: Call2 0x326

0x2c7: Pop(0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2d2

0x2ca: Push("head") // @poff=170
0x2cb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cc: Pop(1)
0x2cd: Push(Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cf: Push("head") // @poff=170
0x2d0: @ LookAsyncCamera(Stack[-1])
0x2d1: Pop(1)
0x2d2: @ CameraWaitForPlayFinish()
0x2d3: Pop(0)
0x2d4: @ ResumeWorld()
0x2d5: Pop(0)
0x2d6: Stack[-21] = (bool) 1
0x2d7: Return(); Pop(18)

0x2d8: PushEmpty(bool, bool)
0x2d9: @ CameraSwitchToNormal()
0x2da: Pop(0)
0x2db: PushEmpty(bool)
0x2dc: Call2 0x326

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2e8

0x2e0: Push("head") // @poff=170
0x2e1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e2: Pop(1)
0x2e3: Push(Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e5: Push("head") // @poff=170
0x2e6: @ UnlookAsync(Stack[-1])
0x2e7: Pop(1)
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(float, float, float, float)
0x2ea: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2eb: Pop(0)
0x2ec: Push((bool) 0)
0x2ed: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(1)
0x2ef: Return(); Pop(4)

0x2f0: PushEmpty(float, float, float, float)
0x2f1: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f2: Pop(0)
0x2f3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f4: Pop(0)
0x2f5: Return(); Pop(4)

0x2f6: PushEmpty(float, cvector, float, cvector)
0x2f7: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x2f8: Pop(0)
0x2f9: Stack[-1] = [0.0, 0.0, 0.0]
0x2fa: Push(CvectorIndex(Stack[-1], 1))
0x2fb: Stack[-3] = Stack[-1]
0x2fc: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fd: Push("head") // @poff=170
0x2fe: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ff: Pop(1)
0x300: Return(); Pop(4)

0x301: PushEmpty(bool)
0x302: Call2 0x326

0x303: Pop(0)
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: @ lshStopSpeech()
0x306: Pop(0)
0x307: Return(); Pop(0)

0x308: PushEmpty(float, float)
0x309: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30b: Push((float)9.999999974752427e-07)
0x30c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: Stack[-4] = [0.0, 0.0, 0.0]
0x30f: Return(); Pop(2)

0x310: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x311: Return(); Pop(2)

0x312: PushEmpty(object, object)
0x313: @ FindActor(Stack[-1], Stack[-4])
0x314: Pop(0)
0x315: Pop(0); PushNull((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-5] = (bool) 0
0x318: Return(); Pop(2)

0x319: @ Trigger(Stack[-1], Stack[-3])
0x31a: Pop(0)
0x31b: Stack[-5] = (bool) 1
0x31c: Return(); Pop(2)

0x31d: Stack[-1] = 0
0x31e: Stack[-1] = (int) 515571
0x31f: Return(); Pop(0)

0x320: Stack[-1] = (int) 504029
0x321: Return(); Pop(0)

0x322: Stack[-1] = "ui/NPC_bmask.png" // @poff=206
0x323: Return(); Pop(0)

0x324: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=240
0x325: Return(); Pop(0)

0x326: Stack[-1] = (bool) 0
0x327: Return(); Pop(0)

0x328: PushEmpty(string, string)
0x329: Stack[-1] = "idle" // @poff=146
0x32a: Push(Stack[-3])
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x32d: Stack[-1] = Stack[-4]
0x32e: Return(); Pop(2)

0x32f: PushEmpty(int, bool, int, bool)
0x330: Stack[-2] = (int) 0
0x331: Push("all") // @poff=138
0x332: PushEmpty(string, int)
0x333: Stack[-5] = Stack[-1]
0x334: Call2 0x328

0x335: Pop(1)
0x336: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: Pop(0); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: GOTO 0x33e

0x33b: Push((int) 1)
0x33c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33d: GOTO 0x331

0x33e: Stack[-2] = Stack[-5]
0x33f: Return(); Pop(4)

0x340: PushEmpty()
0x341: PushEmpty(bool, string, string)
0x342: Stack[-2] = "quest_k1_01" // @poff=278
0x343: Stack[-1] = "remove_birdmask" // @poff=302
0x344: Call2 0x312

0x345: Pop(3)
0x346: Return(); Pop(0)

0x347: PushEmpty(int, int)
0x348: Push("branch") // @poff=334
0x349: @ GetVariable(Stack[-1], Stack[-2])
0x34a: Pop(1)
0x34b: Push((int) 0)
0x34c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34e: Stack[-3] = (int) 1
0x34f: Return(); Pop(2)

0x350: GOTO 0x356

0x351: Push((int) 1)
0x352: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-3] = (int) 2
0x355: Return(); Pop(2)

0x356: Stack[-3] = (int) 3
0x357: Return(); Pop(2)

