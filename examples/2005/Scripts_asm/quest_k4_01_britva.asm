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
	W:quest_k4_01
	W:cutscene
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400710075006500730074005f006b0034005f003000310000006300750074007300630065006e00650000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xfa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x100 Vars = (object)
		EVENT_26 Op = 0x138 Vars = (string)
		EVENT_5 Op = 0x140 Vars = ()
		EVENT_6 Op = 0x145 Vars = ()
		EVENT_7 Op = 0x184 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x20c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2ce

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2cc

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2d0

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2d2

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2bb

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
0x41: Call2 0x250

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
0x54: Push((int) 529830)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 530225)
0x5a: Push((int) 31614)
0x5b: Push((int) 31613)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 530227)
0x5f: Push((int) 31616)
0x60: Push((int) 31615)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x2d4

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x261

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
0x86: Call2 0x2d4

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
0x96: Call2 0x268

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x279

0x9f: Pop(0)
0xa0: Push((int) 31278)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x2b4

0xa7: Pop(2)
0xa8: Push((int) 31277)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 529830)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 530225)
0xb5: Push((int) 31614)
0xb6: Push((int) 31613)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: Push((int) 530227)
0xba: Push((int) 31616)
0xbb: Push((int) 31615)
0xbc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Push((int) 31616)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral" // @poff=89
0xc4: Call2 0x84

0xc5: Pop(1)
0xc6: Push((int) 530228)
0xc7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc8: Pop(1)
0xc9: @@@ ClearReplies(); Obj=0 // @poff=116
0xca: Pop(0)
0xcb: Push((int) 530229)
0xcc: Push((int) 31614)
0xcd: Push((int) 31617)
0xce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcf: Pop(3)
0xd0: Push((int) 530230)
0xd1: Push((int) -1)
0xd2: Push((int) 31618)
0xd3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Push((int) 31614)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral" // @poff=89
0xdb: Call2 0x84

0xdc: Pop(1)
0xdd: Push((int) 530226)
0xde: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdf: Pop(1)
0xe0: @@@ ClearReplies(); Obj=0 // @poff=116
0xe1: Pop(0)
0xe2: Push((int) 529831)
0xe3: Push((int) -1)
0xe4: Push((int) 31278)
0xe5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe6: Pop(3)
0xe7: Push((int) 529832)
0xe8: Push((int) -1)
0xe9: Push((int) 31279)
0xea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xee: PushEmpty(bool)
0xef: Call2 0x2d4

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: @ lshStopAnimation()
0xf3: Pop(0)
0xf4: GOTO 0xf7

0xf5: @ StopAnimation()
0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: GOTO 0x9b

0xf9: Return(); Pop(0)

0xfa: PushEmpty(float, float)
0xfb: Stack[-2] = (int) 300
0xfc: Stack[-1] = (int) 100
0xfd: Call2 0x10b

0xfe: Pop(2)
0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: PushEmpty()
0x102: Call2 0x19b

0x103: Pop(0)
0x104: PushEmpty(int, object)
0x105: Stack[-3] = Stack[-1]
0x106: Push(-2, 1); TaskCall(0)
0x107: Call2 0x0

0x108: Pop(-2, 1); TaskReturn
0x109: Pop(2)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(float, float)
0x10c: PushEmpty(bool)
0x10d: Call2 0x207

0x10e: Pop(0)
0x10f: Pop(1); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x111: @ Hold()
0x112: Pop(0)
0x113: GOTO 0x10c

0x114: Push((int) 3)
0x115: @ rand(Stack[-2], Stack[-1])
0x116: Pop(1)
0x117: Push((int) 3)
0x118: Pop(1); Push(Stack[-2] + Stack[-1]);
0x119: @ Sleep(Stack[-1])
0x11a: Pop(1)
0x11b: PushEmpty(float, float)
0x11c: Stack[-6] = Stack[-2]
0x11d: Stack[-5] = Stack[-1]
0x11e: Call2 0x15a

0x11f: Pop(2)
0x120: @ sync()
0x121: Pop(0)
0x122: GOTO 0x10c

0x123: Return(); Pop(2)

0x124: PushEmpty(bool, bool)
0x125: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x126: @ IsLoaded(Stack[-1])
0x127: Pop(0)
0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: Pop(0); Push((bool) Stack[-2] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(bool)
0x12d: Call2 0x158

0x12e: Pop(0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object)
0x133: Call2 0x280

0x134: Pop(0)
0x135: @ RemoveActor(Stack[-1])
0x136: Pop(1)
0x137: Return(); Pop(2)

0x138: PushEmpty()
0x139: Push("cleanup") // @poff=156
0x13a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: PushEmpty()
0x13d: Call2 0x124

0x13e: Pop(0)
0x13f: Return(); Pop(0)

0x140: @ StopGroup0()
0x141: Pop(0)
0x142: @ sync()
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: PushEmpty()
0x146: Call2 0x19b

0x147: Pop(0)
0x148: PushEmpty(bool)
0x149: Stack[-1] = (bool) 0
0x14a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty(bool)
0x14d: Call2 0x158

0x14e: Pop(0)
0x14f: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x150: Stack[-1] = (bool) 1
0x151: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x152: PushEmpty(object)
0x153: Call2 0x280

0x154: Pop(0)
0x155: @ RemoveActor(Stack[-1])
0x156: Pop(1)
0x157: Return(); Pop(0)

0x158: Stack[-1] = (bool) 1
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: PushEmpty(bool)
0x15c: Call2 0x207

0x15d: Pop(0)
0x15e: Pop(1); Push((bool) Stack[-1] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Return(); Pop(0)

0x161: Push("player") // @poff=172
0x162: @ FindActor(Stack[-4]T, Stack[-1])
0x163: Pop(1)
0x164: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x165: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x166: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x167: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x168: Push((int) 10)
0x169: Push((float)1.0)
0x16a: @ SetTimer(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: PushEmpty()
0x16d: Call2 0x1a9

0x16e: Pop(0)
0x16f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x171: Push((int) 10)
0x172: @ KillTimer(Stack[-1])
0x173: Pop(1)
0x174: Return(); Pop(0)

0x175: PushEmpty(float, float)
0x176: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x178: Stack[-3] = (bool) 0
0x179: Return(); Pop(2)

0x17a: PushEmpty(float, object)
0x17b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17c: Call2 0x1ff

0x17d: Pop(1)
0x17e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x17f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x182: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x183: Return(); Pop(2)

0x184: PushEmpty()
0x185: Push((int) 10)
0x186: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x188: PushEmpty(bool)
0x189: Call2 0x175

0x18a: Pop(0)
0x18b: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: PushEmpty(object)
0x18f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x190: Call2 0x26e

0x191: Pop(1)
0x192: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x193: GOTO 0x19a

0x194: Push( Stack[2 + Tasks[-1].StackPointer] )
0x195: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x196: Push("head") // @poff=186
0x197: @ UnlookAsync(Stack[-1])
0x198: Pop(1)
0x199: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: Call2 0x1fa

0x19d: Pop(0)
0x19e: Push((int) 10)
0x19f: @ KillTimer(Stack[-1])
0x1a0: Pop(1)
0x1a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a3: Push("head") // @poff=186
0x1a4: @ UnlookAsync(Stack[-1])
0x1a5: Pop(1)
0x1a6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x207

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(14)

0x1b2: PushEmpty(int)
0x1b3: Call2 0x2a3

0x1b4: Stack[-1] = Stack[-8]
0x1b5: Pop(1)
0x1b6: Stack[-6] = (int) 0
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 0
0x1b9: Push((int) 5)
0x1ba: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x207

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1c2: Push((int) 3)
0x1c3: @ irand(Stack[-6], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push((int) 0)
0x1c6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c8: Push(Stack[-7])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ca: @ irand(Stack[-4], Stack[-7])
0x1cb: Pop(0)
0x1cc: Push("all") // @poff=138
0x1cd: PushEmpty(string, int)
0x1ce: Stack[-7] = Stack[-1]
0x1cf: Call2 0x29c

0x1d0: Pop(1)
0x1d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: @ WaitForAnimEnd(Stack[-3])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-3] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1f5

0x1d8: GOTO 0x1ea

0x1d9: Push((int) 1)
0x1da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1dc: Push((int) 4)
0x1dd: @ rand(Stack[-3], Stack[-1])
0x1de: Pop(1)
0x1df: Push((int) 1)
0x1e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e1: @ Sleep(Stack[-1], Stack[-2])
0x1e2: Pop(1)
0x1e3: Pop(0); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x1f5

0x1e6: GOTO 0x1ea

0x1e7: Push(Stack[-6])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: GOTO 0x1f5

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x1f8

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x1f5

0x1f0: @ ResetAAS()
0x1f1: Pop(0)
0x1f2: Push((int) 1)
0x1f3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f4: GOTO 0x1b7

0x1f5: @ ResetAAS()
0x1f6: Pop(0)
0x1f7: Return(); Pop(14)

0x1f8: Stack[-1] = (bool) 1
0x1f9: Return(); Pop(0)

0x1fa: @ StopAnimation()
0x1fb: Pop(0)
0x1fc: @ StopGroup0()
0x1fd: Pop(0)
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x200: @ GetPosition(Stack[-3])
0x201: Pop(0)
0x202: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x203: Pop(0)
0x204: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x205: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x206: Return(); Pop(6)

0x207: PushEmpty(bool, bool)
0x208: @ IsLoaded(Stack[-1])
0x209: Pop(0)
0x20a: Stack[-1] = Stack[-3]
0x20b: Return(); Pop(2)

0x20c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x20d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x20e: Pop(0)
0x20f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x210: Pop(0)
0x211: Push(CvectorIndex(Stack[-8], 1))
0x212: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x213: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x214: @ GetPosition(Stack[-7])
0x215: Pop(0)
0x216: @ GetEyesHeight(Stack[-9])
0x217: Pop(0)
0x218: Push(CvectorIndex(Stack[-7], 1))
0x219: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x21b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21c: Push(CvectorIndex(Stack[-6], 1))
0x21d: Stack[-1] = (int) 0
0x21e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x21f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x220: Pop(1); Push(Sqrt(Stack[-1]))
0x221: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x222: Stack[-5] = -Stack[-6]; Pop(0);
0x223: Pop(0); Push(Stack[-6] * Stack[-19]);
0x224: PushEmpty(cvector, cvector)
0x225: Push([0.0, 1.0, 0.0])
0x226: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x227: Call2 0x286

0x228: Pop(1)
0x229: Push((int) 25)
0x22a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22c: Push([0.0, 10.0, 0.0])
0x22d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x22e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x22f: @ IsOverrideActive(Stack[-2])
0x230: Pop(0)
0x231: Push(Stack[-2])
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-21] = (bool) 0
0x234: Return(); Pop(18)

0x235: @ StopWorld()
0x236: Pop(0)
0x237: @ CameraTransit(Stack[-3], Stack[-5])
0x238: Pop(0)
0x239: Push(CvectorIndex(Stack[-4], 0))
0x23a: Push(CvectorIndex(Stack[-5], 2))
0x23b: @ Rotate(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: PushEmpty(bool)
0x23e: Call2 0x2d4

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24a

0x242: Push("head") // @poff=186
0x243: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x244: Pop(1)
0x245: Push(Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x247: Push("head") // @poff=186
0x248: @ LookAsyncCamera(Stack[-1])
0x249: Pop(1)
0x24a: @ CameraWaitForPlayFinish()
0x24b: Pop(0)
0x24c: @ ResumeWorld()
0x24d: Pop(0)
0x24e: Stack[-21] = (bool) 1
0x24f: Return(); Pop(18)

0x250: PushEmpty(bool, bool)
0x251: @ CameraSwitchToNormal()
0x252: Pop(0)
0x253: PushEmpty(bool)
0x254: Call2 0x2d4

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x260

0x258: Push("head") // @poff=186
0x259: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25a: Pop(1)
0x25b: Push(Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25d: Push("head") // @poff=186
0x25e: @ UnlookAsync(Stack[-1])
0x25f: Pop(1)
0x260: Return(); Pop(2)

0x261: PushEmpty(float, float, float, float)
0x262: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x263: Pop(0)
0x264: Push((bool) 0)
0x265: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(1)
0x267: Return(); Pop(4)

0x268: PushEmpty(float, float, float, float)
0x269: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x26a: Pop(0)
0x26b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x26c: Pop(0)
0x26d: Return(); Pop(4)

0x26e: PushEmpty(float, cvector, float, cvector)
0x26f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x270: Pop(0)
0x271: Stack[-1] = [0.0, 0.0, 0.0]
0x272: Push(CvectorIndex(Stack[-1], 1))
0x273: Stack[-3] = Stack[-1]
0x274: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x275: Push("head") // @poff=186
0x276: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x277: Pop(1)
0x278: Return(); Pop(4)

0x279: PushEmpty(bool)
0x27a: Call2 0x2d4

0x27b: Pop(0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: @ lshStopSpeech()
0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: PushEmpty(object, object)
0x281: @ self(Stack[-1])
0x282: Pop(0)
0x283: Stack[-1] = Stack[-3]
0x284: Return(); Pop(2)

0x285: Stack[-1] = 0
0x286: PushEmpty(float, float)
0x287: Pop(0); Push(Stack[-3] | Stack[-3]);
0x288: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x289: Push((float)9.999999974752427e-07)
0x28a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-4] = [0.0, 0.0, 0.0]
0x28d: Return(); Pop(2)

0x28e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x28f: Return(); Pop(2)

0x290: PushEmpty(object, object)
0x291: @ FindActor(Stack[-1], Stack[-4])
0x292: Pop(0)
0x293: Pop(0); PushNull((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x295: Stack[-5] = (bool) 0
0x296: Return(); Pop(2)

0x297: @ Trigger(Stack[-1], Stack[-3])
0x298: Pop(0)
0x299: Stack[-5] = (bool) 1
0x29a: Return(); Pop(2)

0x29b: Stack[-1] = 0
0x29c: PushEmpty(string, string)
0x29d: Stack[-1] = "idle" // @poff=146
0x29e: Push(Stack[-3])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2a1: Stack[-1] = Stack[-4]
0x2a2: Return(); Pop(2)

0x2a3: PushEmpty(int, bool, int, bool)
0x2a4: Stack[-2] = (int) 0
0x2a5: Push("all") // @poff=138
0x2a6: PushEmpty(string, int)
0x2a7: Stack[-5] = Stack[-1]
0x2a8: Call2 0x29c

0x2a9: Pop(1)
0x2aa: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(2)
0x2ac: Pop(0); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: GOTO 0x2b2

0x2af: Push((int) 1)
0x2b0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b1: GOTO 0x2a5

0x2b2: Stack[-2] = Stack[-5]
0x2b3: Return(); Pop(4)

0x2b4: PushEmpty()
0x2b5: PushEmpty(bool, string, string)
0x2b6: Stack[-2] = "quest_k4_01" // @poff=222
0x2b7: Stack[-1] = "cutscene" // @poff=246
0x2b8: Call2 0x290

0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty(int, int)
0x2bc: Push("branch") // @poff=264
0x2bd: @ GetVariable(Stack[-1], Stack[-2])
0x2be: Pop(1)
0x2bf: Push((int) 0)
0x2c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c2: Stack[-3] = (int) 1
0x2c3: Return(); Pop(2)

0x2c4: GOTO 0x2ca

0x2c5: Push((int) 1)
0x2c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: Stack[-3] = (int) 2
0x2c9: Return(); Pop(2)

0x2ca: Stack[-3] = (int) 3
0x2cb: Return(); Pop(2)

0x2cc: Stack[-1] = (int) 529826
0x2cd: Return(); Pop(0)

0x2ce: Stack[-1] = (int) 529825
0x2cf: Return(); Pop(0)

0x2d0: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=278
0x2d1: Return(); Pop(0)

0x2d2: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=318
0x2d3: Return(); Pop(0)

0x2d4: Stack[-1] = (bool) 0
0x2d5: Return(); Pop(0)

