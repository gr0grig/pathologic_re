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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:ood6Girl1
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e00670000006f006f00640036004700690072006c00310000006200720061006e00630068000000
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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x12d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x139 Vars = (object)
		EVENT_7 Op = 0x16e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1f6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x293

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x291

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x295

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x297

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2ad

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
0x41: Call2 0x23a

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

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 503963)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2a1

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 503964)
0x5f: Push((int) 4318)
0x60: Push((int) 4316)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 503965)
0x64: Push((int) -1)
0x65: Push((int) 4317)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x299

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x24b

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
0x8b: Call2 0x299

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
0x9b: Call2 0x252

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x263

0xa4: Pop(0)
0xa5: Push((int) 4316)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x29b

0xac: Pop(2)
0xad: Push((int) 4315)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral" // @poff=89
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 503963)
0xb5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb6: Pop(1)
0xb7: @@@ ClearReplies(); Obj=0 // @poff=116
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2a1

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 503964)
0xbf: Push((int) 4318)
0xc0: Push((int) 4316)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: Push((int) 503965)
0xc4: Push((int) -1)
0xc5: Push((int) 4317)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 4318)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 503966)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: Push((int) 503967)
0xd6: Push((int) 4322)
0xd7: Push((int) 4319)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Push((int) 503968)
0xdb: Push((int) 4321)
0xdc: Push((int) 4320)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 4321)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral" // @poff=89
0xe5: Call2 0x89

0xe6: Pop(1)
0xe7: Push((int) 503969)
0xe8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe9: Pop(1)
0xea: @@@ ClearReplies(); Obj=0 // @poff=116
0xeb: Pop(0)
0xec: Push((int) 503971)
0xed: Push((int) -1)
0xee: Push((int) 4323)
0xef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 4322)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral" // @poff=89
0xf7: Call2 0x89

0xf8: Pop(1)
0xf9: Push((int) 503970)
0xfa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfb: Pop(1)
0xfc: @@@ ClearReplies(); Obj=0 // @poff=116
0xfd: Pop(0)
0xfe: Push((int) 503972)
0xff: Push((int) 4326)
0x100: Push((int) 4324)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Push((int) 503976)
0x104: Push((int) -1)
0x105: Push((int) 4329)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 4326)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0x89

0x10f: Pop(1)
0x110: Push((int) 503973)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 503974)
0x116: Push((int) -1)
0x117: Push((int) 4327)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 503975)
0x11b: Push((int) -1)
0x11c: Push((int) 4328)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x121: PushEmpty(bool)
0x122: Call2 0x299

0x123: Pop(0)
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: @ lshStopAnimation()
0x126: Pop(0)
0x127: GOTO 0x12a

0x128: @ StopAnimation()
0x129: Pop(0)
0x12a: Return(); Pop(0)

0x12b: GOTO 0xa0

0x12c: Return(); Pop(0)

0x12d: Push((bool) 1)
0x12e: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x12f: Push((int) 1)
0x130: @ Sleep(Stack[-1])
0x131: Pop(1)
0x132: PushEmpty(float, float)
0x133: Stack[-2] = (int) 300
0x134: Stack[-1] = (int) 100
0x135: Call2 0x144

0x136: Pop(2)
0x137: GOTO 0x12d

0x138: Return(); Pop(0)

0x139: PushEmpty()
0x13a: PushEmpty()
0x13b: Call2 0x185

0x13c: Pop(0)
0x13d: PushEmpty(int, object)
0x13e: Stack[-3] = Stack[-1]
0x13f: Push(-2, 1); TaskCall(0)
0x140: Call2 0x0

0x141: Pop(-2, 1); TaskReturn
0x142: Pop(2)
0x143: Return(); Pop(0)

0x144: PushEmpty()
0x145: PushEmpty(bool)
0x146: Call2 0x1f1

0x147: Pop(0)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Return(); Pop(0)

0x14b: Push("player") // @poff=156
0x14c: @ FindActor(Stack[-4]T, Stack[-1])
0x14d: Pop(1)
0x14e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x14f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x150: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x151: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x152: Push((int) 10)
0x153: Push((float)1.0)
0x154: @ SetTimer(Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: PushEmpty()
0x157: Call2 0x193

0x158: Pop(0)
0x159: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15b: Push((int) 10)
0x15c: @ KillTimer(Stack[-1])
0x15d: Pop(1)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(float, float)
0x160: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x162: Stack[-3] = (bool) 0
0x163: Return(); Pop(2)

0x164: PushEmpty(float, object)
0x165: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x166: Call2 0x1e9

0x167: Pop(1)
0x168: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x169: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x16c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x16d: Return(); Pop(2)

0x16e: PushEmpty()
0x16f: Push((int) 10)
0x170: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x172: PushEmpty(bool)
0x173: Call2 0x15f

0x174: Pop(0)
0x175: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x176: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: PushEmpty(object)
0x179: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17a: Call2 0x258

0x17b: Pop(1)
0x17c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x17d: GOTO 0x184

0x17e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x180: Push("head") // @poff=170
0x181: @ UnlookAsync(Stack[-1])
0x182: Pop(1)
0x183: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: Call2 0x1e4

0x187: Pop(0)
0x188: Push((int) 10)
0x189: @ KillTimer(Stack[-1])
0x18a: Pop(1)
0x18b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x18c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18d: Push("head") // @poff=170
0x18e: @ UnlookAsync(Stack[-1])
0x18f: Pop(1)
0x190: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x191: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x192: Return(); Pop(0)

0x193: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x194: @ WaitForAnimEnd()
0x195: Pop(0)
0x196: PushEmpty(bool)
0x197: Call2 0x1f1

0x198: Pop(0)
0x199: Pop(1); Push((bool) Stack[-1] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Return(); Pop(14)

0x19c: PushEmpty(int)
0x19d: Call2 0x280

0x19e: Stack[-1] = Stack[-8]
0x19f: Pop(1)
0x1a0: Stack[-6] = (int) 0
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: Push((int) 5)
0x1a4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: PushEmpty(bool)
0x1a7: Call2 0x1f1

0x1a8: Pop(0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1ac: Push((int) 3)
0x1ad: @ irand(Stack[-6], Stack[-1])
0x1ae: Pop(1)
0x1af: Push((int) 0)
0x1b0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b2: Push(Stack[-7])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b4: @ irand(Stack[-4], Stack[-7])
0x1b5: Pop(0)
0x1b6: Push("all") // @poff=138
0x1b7: PushEmpty(string, int)
0x1b8: Stack[-7] = Stack[-1]
0x1b9: Call2 0x279

0x1ba: Pop(1)
0x1bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: @ WaitForAnimEnd(Stack[-3])
0x1be: Pop(0)
0x1bf: Pop(0); Push((bool) Stack[-3] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1df

0x1c2: GOTO 0x1d4

0x1c3: Push((int) 1)
0x1c4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c6: Push((int) 4)
0x1c7: @ rand(Stack[-3], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push((int) 1)
0x1ca: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cb: @ Sleep(Stack[-1], Stack[-2])
0x1cc: Pop(1)
0x1cd: Pop(0); Push((bool) Stack[-1] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: GOTO 0x1df

0x1d0: GOTO 0x1d4

0x1d1: Push(Stack[-6])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1df

0x1d4: PushEmpty(bool)
0x1d5: Call2 0x1e2

0x1d6: Pop(0)
0x1d7: Pop(1); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: GOTO 0x1df

0x1da: @ ResetAAS()
0x1db: Pop(0)
0x1dc: Push((int) 1)
0x1dd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1de: GOTO 0x1a1

0x1df: @ ResetAAS()
0x1e0: Pop(0)
0x1e1: Return(); Pop(14)

0x1e2: Stack[-1] = (bool) 1
0x1e3: Return(); Pop(0)

0x1e4: @ StopAnimation()
0x1e5: Pop(0)
0x1e6: @ StopGroup0()
0x1e7: Pop(0)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ea: @ GetPosition(Stack[-3])
0x1eb: Pop(0)
0x1ec: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x1ed: Pop(0)
0x1ee: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1ef: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1f0: Return(); Pop(6)

0x1f1: PushEmpty(bool, bool)
0x1f2: @ IsLoaded(Stack[-1])
0x1f3: Pop(0)
0x1f4: Stack[-1] = Stack[-3]
0x1f5: Return(); Pop(2)

0x1f6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1f7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x1f8: Pop(0)
0x1f9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x1fa: Pop(0)
0x1fb: Push(CvectorIndex(Stack[-8], 1))
0x1fc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1fd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1fe: @ GetPosition(Stack[-7])
0x1ff: Pop(0)
0x200: @ GetEyesHeight(Stack[-9])
0x201: Pop(0)
0x202: Push(CvectorIndex(Stack[-7], 1))
0x203: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x204: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x205: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x206: Push(CvectorIndex(Stack[-6], 1))
0x207: Stack[-1] = (int) 0
0x208: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x209: Pop(0); Push(Stack[-6] | Stack[-6]);
0x20a: Pop(1); Push(Sqrt(Stack[-1]))
0x20b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x20c: Stack[-5] = -Stack[-6]; Pop(0);
0x20d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x20e: PushEmpty(cvector, cvector)
0x20f: Push([0.0, 1.0, 0.0])
0x210: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x211: Call2 0x26a

0x212: Pop(1)
0x213: Push((int) 25)
0x214: Pop(2); Push(Stack[-2] * Stack[-1]);
0x215: Pop(2); Push(Stack[-2] + Stack[-1]);
0x216: Push([0.0, 10.0, 0.0])
0x217: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x218: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x219: @ IsOverrideActive(Stack[-2])
0x21a: Pop(0)
0x21b: Push(Stack[-2])
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: Stack[-21] = (bool) 0
0x21e: Return(); Pop(18)

0x21f: @ StopWorld()
0x220: Pop(0)
0x221: @ CameraTransit(Stack[-3], Stack[-5])
0x222: Pop(0)
0x223: Push(CvectorIndex(Stack[-4], 0))
0x224: Push(CvectorIndex(Stack[-5], 2))
0x225: @ Rotate(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: PushEmpty(bool)
0x228: Call2 0x299

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x234

0x22c: Push("head") // @poff=170
0x22d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x22e: Pop(1)
0x22f: Push(Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x231: Push("head") // @poff=170
0x232: @ LookAsyncCamera(Stack[-1])
0x233: Pop(1)
0x234: @ CameraWaitForPlayFinish()
0x235: Pop(0)
0x236: @ ResumeWorld()
0x237: Pop(0)
0x238: Stack[-21] = (bool) 1
0x239: Return(); Pop(18)

0x23a: PushEmpty(bool, bool)
0x23b: @ CameraSwitchToNormal()
0x23c: Pop(0)
0x23d: PushEmpty(bool)
0x23e: Call2 0x299

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24a

0x242: Push("head") // @poff=170
0x243: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x244: Pop(1)
0x245: Push(Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x247: Push("head") // @poff=170
0x248: @ UnlookAsync(Stack[-1])
0x249: Pop(1)
0x24a: Return(); Pop(2)

0x24b: PushEmpty(float, float, float, float)
0x24c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x24d: Pop(0)
0x24e: Push((bool) 0)
0x24f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(1)
0x251: Return(); Pop(4)

0x252: PushEmpty(float, float, float, float)
0x253: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x254: Pop(0)
0x255: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x256: Pop(0)
0x257: Return(); Pop(4)

0x258: PushEmpty(float, cvector, float, cvector)
0x259: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x25a: Pop(0)
0x25b: Stack[-1] = [0.0, 0.0, 0.0]
0x25c: Push(CvectorIndex(Stack[-1], 1))
0x25d: Stack[-3] = Stack[-1]
0x25e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x25f: Push("head") // @poff=170
0x260: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x261: Pop(1)
0x262: Return(); Pop(4)

0x263: PushEmpty(bool)
0x264: Call2 0x299

0x265: Pop(0)
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: @ lshStopSpeech()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: PushEmpty(float, float)
0x26b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x26c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x26d: Push((float)9.999999974752427e-07)
0x26e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-4] = [0.0, 0.0, 0.0]
0x271: Return(); Pop(2)

0x272: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x273: Return(); Pop(2)

0x274: PushEmpty(int, int)
0x275: @ GetVariable(Stack[-3], Stack[-1])
0x276: Pop(0)
0x277: Stack[-1] = Stack[-4]
0x278: Return(); Pop(2)

0x279: PushEmpty(string, string)
0x27a: Stack[-1] = "idle" // @poff=146
0x27b: Push(Stack[-3])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x27e: Stack[-1] = Stack[-4]
0x27f: Return(); Pop(2)

0x280: PushEmpty(int, bool, int, bool)
0x281: Stack[-2] = (int) 0
0x282: Push("all") // @poff=138
0x283: PushEmpty(string, int)
0x284: Stack[-5] = Stack[-1]
0x285: Call2 0x279

0x286: Pop(1)
0x287: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(2)
0x289: Pop(0); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x28f

0x28c: Push((int) 1)
0x28d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x28e: GOTO 0x282

0x28f: Stack[-2] = Stack[-5]
0x290: Return(); Pop(4)

0x291: Stack[-1] = (int) 515559
0x292: Return(); Pop(0)

0x293: Stack[-1] = (int) 503344
0x294: Return(); Pop(0)

0x295: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=206
0x296: Return(); Pop(0)

0x297: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=246
0x298: Return(); Pop(0)

0x299: Stack[-1] = (bool) 0
0x29a: Return(); Pop(0)

0x29b: PushEmpty()
0x29c: Push("ood6Girl1") // @poff=290
0x29d: Push((int) 1)
0x29e: @ SetVariable(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: Return(); Pop(0)

0x2a1: PushEmpty()
0x2a2: PushEmpty(int, string)
0x2a3: Stack[-1] = "ood6Girl1" // @poff=290
0x2a4: Call2 0x274

0x2a5: Pop(1)
0x2a6: Push((int) 0)
0x2a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a9: Stack[-2] = (bool) 1
0x2aa: Return(); Pop(0)

0x2ab: Stack[-2] = (bool) 0
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty(int, int)
0x2ae: Push("branch") // @poff=310
0x2af: @ GetVariable(Stack[-1], Stack[-2])
0x2b0: Pop(1)
0x2b1: Push((int) 0)
0x2b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b4: Stack[-3] = (int) 1
0x2b5: Return(); Pop(2)

0x2b6: GOTO 0x2bc

0x2b7: Push((int) 1)
0x2b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: Stack[-3] = (int) 2
0x2bb: Return(); Pop(2)

0x2bc: Stack[-3] = (int) 3
0x2bd: Return(); Pop(2)

