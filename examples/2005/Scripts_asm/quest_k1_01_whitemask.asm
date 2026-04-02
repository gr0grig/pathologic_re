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
	W:ui/NPC_wmask.png
	W:ui/NPC_wmask_b.png
	W:quest_k1_01
	W:remove_whitemask
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0077006d00610073006b002e0070006e0067000000750069002f004e00500043005f0077006d00610073006b005f0062002e0070006e0067000000710075006500730074005f006b0031005f00300031000000720065006d006f00760065005f00770068006900740065006d00610073006b0000006200720061006e00630068000000
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

RunOp = 0x196
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1a0 Vars = (object)
		EVENT_7 Op = 0x1d9 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x261

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2ed

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2eb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2ef

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2f1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x314

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
0x41: Call2 0x2a5

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x30d

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x89

0x58: Pop(1)
0x59: Push((int) 525998)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 525999)
0x5f: Push((int) 27287)
0x60: Push((int) 27286)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 526018)
0x64: Push((int) 27307)
0x65: Push((int) 27306)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2f3

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2b6

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all") // @poff=138
0x7b: Push("idle") // @poff=146
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all") // @poff=138
0x84: Push("idle") // @poff=146
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x2f3

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-3] = Stack[-2]
0x95: Push("") // @poff=102
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x2bd

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2ce

0xa4: Pop(0)
0xa5: Push((int) 27285)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x30d

0xac: Pop(2)
0xad: PushEmpty(string)
0xae: Stack[-1] = "Neutral" // @poff=89
0xaf: Call2 0x89

0xb0: Pop(1)
0xb1: Push((int) 525998)
0xb2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb3: Pop(1)
0xb4: @@@ ClearReplies(); Obj=0 // @poff=116
0xb5: Pop(0)
0xb6: Push((int) 525999)
0xb7: Push((int) 27287)
0xb8: Push((int) 27286)
0xb9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xba: Pop(3)
0xbb: Push((int) 526018)
0xbc: Push((int) 27307)
0xbd: Push((int) 27306)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 27307)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 526019)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: Push((int) 526020)
0xce: Push((int) 27287)
0xcf: Push((int) 27308)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 27287)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral" // @poff=89
0xd8: Call2 0x89

0xd9: Pop(1)
0xda: Push((int) 526000)
0xdb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdc: Pop(1)
0xdd: @@@ ClearReplies(); Obj=0 // @poff=116
0xde: Pop(0)
0xdf: Push((int) 526001)
0xe0: Push((int) 27289)
0xe1: Push((int) 27288)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Push((int) 526243)
0xe5: Push((int) -1)
0xe6: Push((int) 27514)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 27289)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral" // @poff=89
0xef: Call2 0x89

0xf0: Pop(1)
0xf1: Push((int) 526002)
0xf2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf3: Pop(1)
0xf4: @@@ ClearReplies(); Obj=0 // @poff=116
0xf5: Pop(0)
0xf6: Push((int) 526003)
0xf7: Push((int) 27291)
0xf8: Push((int) 27290)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Push((int) 526244)
0xfc: Push((int) 27291)
0xfd: Push((int) 27515)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 27291)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral" // @poff=89
0x106: Call2 0x89

0x107: Pop(1)
0x108: Push((int) 526004)
0x109: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10a: Pop(1)
0x10b: @@@ ClearReplies(); Obj=0 // @poff=116
0x10c: Pop(0)
0x10d: Push((int) 526245)
0x10e: Push((int) 27518)
0x10f: Push((int) 27517)
0x110: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x111: Pop(3)
0x112: Push((int) 526009)
0x113: Push((int) 27297)
0x114: Push((int) 27296)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 27297)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral" // @poff=89
0x11d: Call2 0x89

0x11e: Pop(1)
0x11f: Push((int) 526010)
0x120: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x121: Pop(1)
0x122: @@@ ClearReplies(); Obj=0 // @poff=116
0x123: Pop(0)
0x124: Push((int) 526249)
0x125: Push((int) 27518)
0x126: Push((int) 27521)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 27518)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral" // @poff=89
0x12f: Call2 0x89

0x130: Pop(1)
0x131: Push((int) 526246)
0x132: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x133: Pop(1)
0x134: @@@ ClearReplies(); Obj=0 // @poff=116
0x135: Pop(0)
0x136: Push((int) 526005)
0x137: Push((int) 27293)
0x138: Push((int) 27292)
0x139: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 27293)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral" // @poff=89
0x141: Call2 0x89

0x142: Pop(1)
0x143: Push((int) 526006)
0x144: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x145: Pop(1)
0x146: @@@ ClearReplies(); Obj=0 // @poff=116
0x147: Pop(0)
0x148: Push((int) 526007)
0x149: Push((int) 27519)
0x14a: Push((int) 27294)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 27519)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral" // @poff=89
0x153: Call2 0x89

0x154: Pop(1)
0x155: Push((int) 526247)
0x156: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x157: Pop(1)
0x158: @@@ ClearReplies(); Obj=0 // @poff=116
0x159: Pop(0)
0x15a: Push((int) 526248)
0x15b: Push((int) 27295)
0x15c: Push((int) 27520)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 27295)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral" // @poff=89
0x165: Call2 0x89

0x166: Pop(1)
0x167: Push((int) 526008)
0x168: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x169: Pop(1)
0x16a: @@@ ClearReplies(); Obj=0 // @poff=116
0x16b: Pop(0)
0x16c: Push((int) 526011)
0x16d: Push((int) 27512)
0x16e: Push((int) 27298)
0x16f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 27512)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral" // @poff=89
0x177: Call2 0x89

0x178: Pop(1)
0x179: Push((int) 526241)
0x17a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17b: Pop(1)
0x17c: @@@ ClearReplies(); Obj=0 // @poff=116
0x17d: Pop(0)
0x17e: Push((int) 526242)
0x17f: Push((int) -1)
0x180: Push((int) 27513)
0x181: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x182: Pop(3)
0x183: Push((int) 526250)
0x184: Push((int) -1)
0x185: Push((int) 27523)
0x186: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x2f3

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0xa0

0x195: Return(); Pop(0)

0x196: PushEmpty(float, float)
0x197: Stack[-2] = (int) 300
0x198: Stack[-1] = (int) 100
0x199: Call2 0x1af

0x19a: Pop(2)
0x19b: Push((int) 3)
0x19c: @ Sleep(Stack[-1])
0x19d: Pop(1)
0x19e: GOTO 0x196

0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Call2 0x1f0

0x1a6: Pop(0)
0x1a7: PushEmpty(int, object)
0x1a8: Stack[-3] = Stack[-1]
0x1a9: Push(-2, 1); TaskCall(0)
0x1aa: Call2 0x0

0x1ab: Pop(-2, 1); TaskReturn
0x1ac: Pop(2)
0x1ad: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1ae: Return(); Pop(0)

0x1af: PushEmpty()
0x1b0: PushEmpty(bool)
0x1b1: Call2 0x25c

0x1b2: Pop(0)
0x1b3: Pop(1); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Return(); Pop(0)

0x1b6: Push("player") // @poff=156
0x1b7: @ FindActor(Stack[-4]T, Stack[-1])
0x1b8: Pop(1)
0x1b9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ba: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1bd: Push((int) 10)
0x1be: Push((float)1.0)
0x1bf: @ SetTimer(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: PushEmpty()
0x1c2: Call2 0x1fe

0x1c3: Pop(0)
0x1c4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: Push((int) 10)
0x1c7: @ KillTimer(Stack[-1])
0x1c8: Pop(1)
0x1c9: Return(); Pop(0)

0x1ca: PushEmpty(float, float)
0x1cb: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: Stack[-3] = (bool) 0
0x1ce: Return(); Pop(2)

0x1cf: PushEmpty(float, object)
0x1d0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d1: Call2 0x254

0x1d2: Pop(1)
0x1d3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d7: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d8: Return(); Pop(2)

0x1d9: PushEmpty()
0x1da: Push((int) 10)
0x1db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1dd: PushEmpty(bool)
0x1de: Call2 0x1ca

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(object)
0x1e4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e5: Call2 0x2c3

0x1e6: Pop(1)
0x1e7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e8: GOTO 0x1ef

0x1e9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1eb: Push("head") // @poff=170
0x1ec: @ UnlookAsync(Stack[-1])
0x1ed: Pop(1)
0x1ee: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ef: Return(); Pop(0)

0x1f0: PushEmpty()
0x1f1: Call2 0x24f

0x1f2: Pop(0)
0x1f3: Push((int) 10)
0x1f4: @ KillTimer(Stack[-1])
0x1f5: Pop(1)
0x1f6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f8: Push("head") // @poff=170
0x1f9: @ UnlookAsync(Stack[-1])
0x1fa: Pop(1)
0x1fb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1ff: @ WaitForAnimEnd()
0x200: Pop(0)
0x201: PushEmpty(bool)
0x202: Call2 0x25c

0x203: Pop(0)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Return(); Pop(14)

0x207: PushEmpty(int)
0x208: Call2 0x2fc

0x209: Stack[-1] = Stack[-8]
0x20a: Pop(1)
0x20b: Stack[-6] = (int) 0
0x20c: PushEmpty(bool)
0x20d: Stack[-1] = (bool) 0
0x20e: Push((int) 5)
0x20f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: PushEmpty(bool)
0x212: Call2 0x25c

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Stack[-1] = (bool) 1
0x216: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x217: Push((int) 3)
0x218: @ irand(Stack[-6], Stack[-1])
0x219: Pop(1)
0x21a: Push((int) 0)
0x21b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21d: Push(Stack[-7])
0x21e: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x21f: @ irand(Stack[-4], Stack[-7])
0x220: Pop(0)
0x221: Push("all") // @poff=138
0x222: PushEmpty(string, int)
0x223: Stack[-7] = Stack[-1]
0x224: Call2 0x2f5

0x225: Pop(1)
0x226: @ PlayAnimation(Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: @ WaitForAnimEnd(Stack[-3])
0x229: Pop(0)
0x22a: Pop(0); Push((bool) Stack[-3] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: GOTO 0x24a

0x22d: GOTO 0x23f

0x22e: Push((int) 1)
0x22f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x231: Push((int) 4)
0x232: @ rand(Stack[-3], Stack[-1])
0x233: Pop(1)
0x234: Push((int) 1)
0x235: Pop(1); Push(Stack[-3] + Stack[-1]);
0x236: @ Sleep(Stack[-1], Stack[-2])
0x237: Pop(1)
0x238: Pop(0); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x24a

0x23b: GOTO 0x23f

0x23c: Push(Stack[-6])
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: GOTO 0x24a

0x23f: PushEmpty(bool)
0x240: Call2 0x24d

0x241: Pop(0)
0x242: Pop(1); Push((bool) Stack[-1] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x24a

0x245: @ ResetAAS()
0x246: Pop(0)
0x247: Push((int) 1)
0x248: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x249: GOTO 0x20c

0x24a: @ ResetAAS()
0x24b: Pop(0)
0x24c: Return(); Pop(14)

0x24d: Stack[-1] = (bool) 1
0x24e: Return(); Pop(0)

0x24f: @ StopAnimation()
0x250: Pop(0)
0x251: @ StopGroup0()
0x252: Pop(0)
0x253: Return(); Pop(0)

0x254: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x255: @ GetPosition(Stack[-3])
0x256: Pop(0)
0x257: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x258: Pop(0)
0x259: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x25a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x25b: Return(); Pop(6)

0x25c: PushEmpty(bool, bool)
0x25d: @ IsLoaded(Stack[-1])
0x25e: Pop(0)
0x25f: Stack[-1] = Stack[-3]
0x260: Return(); Pop(2)

0x261: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x262: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x263: Pop(0)
0x264: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x265: Pop(0)
0x266: Push(CvectorIndex(Stack[-8], 1))
0x267: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x268: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x269: @ GetPosition(Stack[-7])
0x26a: Pop(0)
0x26b: @ GetEyesHeight(Stack[-9])
0x26c: Pop(0)
0x26d: Push(CvectorIndex(Stack[-7], 1))
0x26e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x270: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x271: Push(CvectorIndex(Stack[-6], 1))
0x272: Stack[-1] = (int) 0
0x273: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x274: Pop(0); Push(Stack[-6] | Stack[-6]);
0x275: Pop(1); Push(Sqrt(Stack[-1]))
0x276: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x277: Stack[-5] = -Stack[-6]; Pop(0);
0x278: Pop(0); Push(Stack[-6] * Stack[-19]);
0x279: PushEmpty(cvector, cvector)
0x27a: Push([0.0, 1.0, 0.0])
0x27b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x27c: Call2 0x2d5

0x27d: Pop(1)
0x27e: Push((int) 25)
0x27f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x280: Pop(2); Push(Stack[-2] + Stack[-1]);
0x281: Push([0.0, 10.0, 0.0])
0x282: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x283: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x284: @ IsOverrideActive(Stack[-2])
0x285: Pop(0)
0x286: Push(Stack[-2])
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-21] = (bool) 0
0x289: Return(); Pop(18)

0x28a: @ StopWorld()
0x28b: Pop(0)
0x28c: @ CameraTransit(Stack[-3], Stack[-5])
0x28d: Pop(0)
0x28e: Push(CvectorIndex(Stack[-4], 0))
0x28f: Push(CvectorIndex(Stack[-5], 2))
0x290: @ Rotate(Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: PushEmpty(bool)
0x293: Call2 0x2f3

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: GOTO 0x29f

0x297: Push("head") // @poff=170
0x298: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Push(Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: Push("head") // @poff=170
0x29d: @ LookAsyncCamera(Stack[-1])
0x29e: Pop(1)
0x29f: @ CameraWaitForPlayFinish()
0x2a0: Pop(0)
0x2a1: @ ResumeWorld()
0x2a2: Pop(0)
0x2a3: Stack[-21] = (bool) 1
0x2a4: Return(); Pop(18)

0x2a5: PushEmpty(bool, bool)
0x2a6: @ CameraSwitchToNormal()
0x2a7: Pop(0)
0x2a8: PushEmpty(bool)
0x2a9: Call2 0x2f3

0x2aa: Pop(0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b5

0x2ad: Push("head") // @poff=170
0x2ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Push("head") // @poff=170
0x2b3: @ UnlookAsync(Stack[-1])
0x2b4: Pop(1)
0x2b5: Return(); Pop(2)

0x2b6: PushEmpty(float, float, float, float)
0x2b7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2b8: Pop(0)
0x2b9: Push((bool) 0)
0x2ba: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2bb: Pop(1)
0x2bc: Return(); Pop(4)

0x2bd: PushEmpty(float, float, float, float)
0x2be: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2bf: Pop(0)
0x2c0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2c1: Pop(0)
0x2c2: Return(); Pop(4)

0x2c3: PushEmpty(float, cvector, float, cvector)
0x2c4: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x2c5: Pop(0)
0x2c6: Stack[-1] = [0.0, 0.0, 0.0]
0x2c7: Push(CvectorIndex(Stack[-1], 1))
0x2c8: Stack[-3] = Stack[-1]
0x2c9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ca: Push("head") // @poff=170
0x2cb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2cc: Pop(1)
0x2cd: Return(); Pop(4)

0x2ce: PushEmpty(bool)
0x2cf: Call2 0x2f3

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: @ lshStopSpeech()
0x2d3: Pop(0)
0x2d4: Return(); Pop(0)

0x2d5: PushEmpty(float, float)
0x2d6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2d7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2d8: Push((float)9.999999974752427e-07)
0x2d9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2db: Stack[-4] = [0.0, 0.0, 0.0]
0x2dc: Return(); Pop(2)

0x2dd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2de: Return(); Pop(2)

0x2df: PushEmpty(object, object)
0x2e0: @ FindActor(Stack[-1], Stack[-4])
0x2e1: Pop(0)
0x2e2: Pop(0); PushNull((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-5] = (bool) 0
0x2e5: Return(); Pop(2)

0x2e6: @ Trigger(Stack[-1], Stack[-3])
0x2e7: Pop(0)
0x2e8: Stack[-5] = (bool) 1
0x2e9: Return(); Pop(2)

0x2ea: Stack[-1] = 0
0x2eb: Stack[-1] = (int) 515569
0x2ec: Return(); Pop(0)

0x2ed: Stack[-1] = (int) 503354
0x2ee: Return(); Pop(0)

0x2ef: Stack[-1] = "ui/NPC_wmask.png" // @poff=206
0x2f0: Return(); Pop(0)

0x2f1: Stack[-1] = "ui/NPC_wmask_b.png" // @poff=240
0x2f2: Return(); Pop(0)

0x2f3: Stack[-1] = (bool) 0
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(string, string)
0x2f6: Stack[-1] = "idle" // @poff=146
0x2f7: Push(Stack[-3])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2fa: Stack[-1] = Stack[-4]
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(int, bool, int, bool)
0x2fd: Stack[-2] = (int) 0
0x2fe: Push("all") // @poff=138
0x2ff: PushEmpty(string, int)
0x300: Stack[-5] = Stack[-1]
0x301: Call2 0x2f5

0x302: Pop(1)
0x303: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Pop(0); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x30b

0x308: Push((int) 1)
0x309: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x30a: GOTO 0x2fe

0x30b: Stack[-2] = Stack[-5]
0x30c: Return(); Pop(4)

0x30d: PushEmpty()
0x30e: PushEmpty(bool, string, string)
0x30f: Stack[-2] = "quest_k1_01" // @poff=278
0x310: Stack[-1] = "remove_whitemask" // @poff=302
0x311: Call2 0x2df

0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: PushEmpty(int, int)
0x315: Push("branch") // @poff=336
0x316: @ GetVariable(Stack[-1], Stack[-2])
0x317: Pop(1)
0x318: Push((int) 0)
0x319: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31b: Stack[-3] = (int) 1
0x31c: Return(); Pop(2)

0x31d: GOTO 0x323

0x31e: Push((int) 1)
0x31f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-3] = (int) 2
0x322: Return(); Pop(2)

0x323: Stack[-3] = (int) 3
0x324: Return(); Pop(2)

