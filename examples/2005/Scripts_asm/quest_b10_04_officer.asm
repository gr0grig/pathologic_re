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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:oob10Officer1
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e00670000006f006f006200310030004f00660066006900630065007200310000006200720061006e00630068000000
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

RunOp = 0x12d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x133 Vars = (object)
		EVENT_26 Op = 0x16b Vars = (string)
		EVENT_5 Op = 0x173 Vars = ()
		EVENT_6 Op = 0x178 Vars = ()
		EVENT_7 Op = 0x1b7 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x23f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2e2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2e0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2e4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2e6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2fc

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
0x41: Call2 0x283

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
0x54: Push((int) 530466)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2f0

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 530467)
0x5f: Push((int) 32813)
0x60: Push((int) 31833)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 530470)
0x64: Push((int) -1)
0x65: Push((int) 31836)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2e8

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x294

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
0x8b: Call2 0x2e8

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
0x9b: Call2 0x29b

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2ac

0xa4: Pop(0)
0xa5: Push((int) 31833)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2ea

0xac: Pop(2)
0xad: Push((int) 31832)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral" // @poff=89
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 530466)
0xb5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb6: Pop(1)
0xb7: @@@ ClearReplies(); Obj=0 // @poff=116
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2f0

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 530467)
0xbf: Push((int) 32813)
0xc0: Push((int) 31833)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: Push((int) 530470)
0xc4: Push((int) -1)
0xc5: Push((int) 31836)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 32813)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 531463)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: Push((int) 531468)
0xd6: Push((int) 32819)
0xd7: Push((int) 32818)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Push((int) 531464)
0xdb: Push((int) 31834)
0xdc: Push((int) 32814)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Push((int) 531465)
0xe0: Push((int) 32816)
0xe1: Push((int) 32815)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 32816)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral" // @poff=89
0xea: Call2 0x89

0xeb: Pop(1)
0xec: Push((int) 531466)
0xed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xee: Pop(1)
0xef: @@@ ClearReplies(); Obj=0 // @poff=116
0xf0: Pop(0)
0xf1: Push((int) 531467)
0xf2: Push((int) 32819)
0xf3: Push((int) 32817)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 32819)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral" // @poff=89
0xfc: Call2 0x89

0xfd: Pop(1)
0xfe: Push((int) 531469)
0xff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x100: Pop(1)
0x101: @@@ ClearReplies(); Obj=0 // @poff=116
0x102: Pop(0)
0x103: Push((int) 531470)
0x104: Push((int) -1)
0x105: Push((int) 32820)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 31834)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0x89

0x10f: Pop(1)
0x110: Push((int) 530468)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 530469)
0x116: Push((int) -1)
0x117: Push((int) 31835)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 531471)
0x11b: Push((int) -1)
0x11c: Push((int) 32822)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x121: PushEmpty(bool)
0x122: Call2 0x2e8

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

0x12d: PushEmpty(float, float)
0x12e: Stack[-2] = (int) 300
0x12f: Stack[-1] = (int) 100
0x130: Call2 0x13e

0x131: Pop(2)
0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: PushEmpty()
0x135: Call2 0x1ce

0x136: Pop(0)
0x137: PushEmpty(int, object)
0x138: Stack[-3] = Stack[-1]
0x139: Push(-2, 1); TaskCall(0)
0x13a: Call2 0x0

0x13b: Pop(-2, 1); TaskReturn
0x13c: Pop(2)
0x13d: Return(); Pop(0)

0x13e: PushEmpty(float, float)
0x13f: PushEmpty(bool)
0x140: Call2 0x23a

0x141: Pop(0)
0x142: Pop(1); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: @ Hold()
0x145: Pop(0)
0x146: GOTO 0x13f

0x147: Push((int) 3)
0x148: @ rand(Stack[-2], Stack[-1])
0x149: Pop(1)
0x14a: Push((int) 3)
0x14b: Pop(1); Push(Stack[-2] + Stack[-1]);
0x14c: @ Sleep(Stack[-1])
0x14d: Pop(1)
0x14e: PushEmpty(float, float)
0x14f: Stack[-6] = Stack[-2]
0x150: Stack[-5] = Stack[-1]
0x151: Call2 0x18d

0x152: Pop(2)
0x153: @ sync()
0x154: Pop(0)
0x155: GOTO 0x13f

0x156: Return(); Pop(2)

0x157: PushEmpty(bool, bool)
0x158: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x159: @ IsLoaded(Stack[-1])
0x15a: Pop(0)
0x15b: PushEmpty(bool)
0x15c: Stack[-1] = (bool) 0
0x15d: Pop(0); Push((bool) Stack[-2] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(bool)
0x160: Call2 0x18b

0x161: Pop(0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 1
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: PushEmpty(object)
0x166: Call2 0x2b3

0x167: Pop(0)
0x168: @ RemoveActor(Stack[-1])
0x169: Pop(1)
0x16a: Return(); Pop(2)

0x16b: PushEmpty()
0x16c: Push("cleanup") // @poff=156
0x16d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: PushEmpty()
0x170: Call2 0x157

0x171: Pop(0)
0x172: Return(); Pop(0)

0x173: @ StopGroup0()
0x174: Pop(0)
0x175: @ sync()
0x176: Pop(0)
0x177: Return(); Pop(0)

0x178: PushEmpty()
0x179: Call2 0x1ce

0x17a: Pop(0)
0x17b: PushEmpty(bool)
0x17c: Stack[-1] = (bool) 0
0x17d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: PushEmpty(bool)
0x180: Call2 0x18b

0x181: Pop(0)
0x182: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x183: Stack[-1] = (bool) 1
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty(object)
0x186: Call2 0x2b3

0x187: Pop(0)
0x188: @ RemoveActor(Stack[-1])
0x189: Pop(1)
0x18a: Return(); Pop(0)

0x18b: Stack[-1] = (bool) 1
0x18c: Return(); Pop(0)

0x18d: PushEmpty()
0x18e: PushEmpty(bool)
0x18f: Call2 0x23a

0x190: Pop(0)
0x191: Pop(1); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Return(); Pop(0)

0x194: Push("player") // @poff=172
0x195: @ FindActor(Stack[-4]T, Stack[-1])
0x196: Pop(1)
0x197: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x198: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x199: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x19a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x19b: Push((int) 10)
0x19c: Push((float)1.0)
0x19d: @ SetTimer(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: PushEmpty()
0x1a0: Call2 0x1dc

0x1a1: Pop(0)
0x1a2: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a4: Push((int) 10)
0x1a5: @ KillTimer(Stack[-1])
0x1a6: Pop(1)
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(float, float)
0x1a9: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ab: Stack[-3] = (bool) 0
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(float, object)
0x1ae: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1af: Call2 0x232

0x1b0: Pop(1)
0x1b1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1b5: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1b6: Return(); Pop(2)

0x1b7: PushEmpty()
0x1b8: Push((int) 10)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1bb: PushEmpty(bool)
0x1bc: Call2 0x1a8

0x1bd: Pop(0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1bf: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(object)
0x1c2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c3: Call2 0x2a1

0x1c4: Pop(1)
0x1c5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1c6: GOTO 0x1cd

0x1c7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c9: Push("head") // @poff=186
0x1ca: @ UnlookAsync(Stack[-1])
0x1cb: Pop(1)
0x1cc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: Call2 0x22d

0x1d0: Pop(0)
0x1d1: Push((int) 10)
0x1d2: @ KillTimer(Stack[-1])
0x1d3: Pop(1)
0x1d4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d6: Push("head") // @poff=186
0x1d7: @ UnlookAsync(Stack[-1])
0x1d8: Pop(1)
0x1d9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1da: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1db: Return(); Pop(0)

0x1dc: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1dd: @ WaitForAnimEnd()
0x1de: Pop(0)
0x1df: PushEmpty(bool)
0x1e0: Call2 0x23a

0x1e1: Pop(0)
0x1e2: Pop(1); Push((bool) Stack[-1] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: Return(); Pop(14)

0x1e5: PushEmpty(int)
0x1e6: Call2 0x2cf

0x1e7: Stack[-1] = Stack[-8]
0x1e8: Pop(1)
0x1e9: Stack[-6] = (int) 0
0x1ea: PushEmpty(bool)
0x1eb: Stack[-1] = (bool) 0
0x1ec: Push((int) 5)
0x1ed: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: PushEmpty(bool)
0x1f0: Call2 0x23a

0x1f1: Pop(0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Stack[-1] = (bool) 1
0x1f4: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x1f5: Push((int) 3)
0x1f6: @ irand(Stack[-6], Stack[-1])
0x1f7: Pop(1)
0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fb: Push(Stack[-7])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1fd: @ irand(Stack[-4], Stack[-7])
0x1fe: Pop(0)
0x1ff: Push("all") // @poff=138
0x200: PushEmpty(string, int)
0x201: Stack[-7] = Stack[-1]
0x202: Call2 0x2c8

0x203: Pop(1)
0x204: @ PlayAnimation(Stack[-2], Stack[-1])
0x205: Pop(2)
0x206: @ WaitForAnimEnd(Stack[-3])
0x207: Pop(0)
0x208: Pop(0); Push((bool) Stack[-3] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: GOTO 0x228

0x20b: GOTO 0x21d

0x20c: Push((int) 1)
0x20d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x20f: Push((int) 4)
0x210: @ rand(Stack[-3], Stack[-1])
0x211: Pop(1)
0x212: Push((int) 1)
0x213: Pop(1); Push(Stack[-3] + Stack[-1]);
0x214: @ Sleep(Stack[-1], Stack[-2])
0x215: Pop(1)
0x216: Pop(0); Push((bool) Stack[-1] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: GOTO 0x228

0x219: GOTO 0x21d

0x21a: Push(Stack[-6])
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: GOTO 0x228

0x21d: PushEmpty(bool)
0x21e: Call2 0x22b

0x21f: Pop(0)
0x220: Pop(1); Push((bool) Stack[-1] == 0)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: GOTO 0x228

0x223: @ ResetAAS()
0x224: Pop(0)
0x225: Push((int) 1)
0x226: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x227: GOTO 0x1ea

0x228: @ ResetAAS()
0x229: Pop(0)
0x22a: Return(); Pop(14)

0x22b: Stack[-1] = (bool) 1
0x22c: Return(); Pop(0)

0x22d: @ StopAnimation()
0x22e: Pop(0)
0x22f: @ StopGroup0()
0x230: Pop(0)
0x231: Return(); Pop(0)

0x232: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x233: @ GetPosition(Stack[-3])
0x234: Pop(0)
0x235: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x236: Pop(0)
0x237: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x238: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x239: Return(); Pop(6)

0x23a: PushEmpty(bool, bool)
0x23b: @ IsLoaded(Stack[-1])
0x23c: Pop(0)
0x23d: Stack[-1] = Stack[-3]
0x23e: Return(); Pop(2)

0x23f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x240: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x241: Pop(0)
0x242: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x243: Pop(0)
0x244: Push(CvectorIndex(Stack[-8], 1))
0x245: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x246: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x247: @ GetPosition(Stack[-7])
0x248: Pop(0)
0x249: @ GetEyesHeight(Stack[-9])
0x24a: Pop(0)
0x24b: Push(CvectorIndex(Stack[-7], 1))
0x24c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x24e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x24f: Push(CvectorIndex(Stack[-6], 1))
0x250: Stack[-1] = (int) 0
0x251: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x252: Pop(0); Push(Stack[-6] | Stack[-6]);
0x253: Pop(1); Push(Sqrt(Stack[-1]))
0x254: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x255: Stack[-5] = -Stack[-6]; Pop(0);
0x256: Pop(0); Push(Stack[-6] * Stack[-19]);
0x257: PushEmpty(cvector, cvector)
0x258: Push([0.0, 1.0, 0.0])
0x259: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x25a: Call2 0x2b9

0x25b: Pop(1)
0x25c: Push((int) 25)
0x25d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25f: Push([0.0, 10.0, 0.0])
0x260: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x261: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x262: @ IsOverrideActive(Stack[-2])
0x263: Pop(0)
0x264: Push(Stack[-2])
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: Stack[-21] = (bool) 0
0x267: Return(); Pop(18)

0x268: @ StopWorld()
0x269: Pop(0)
0x26a: @ CameraTransit(Stack[-3], Stack[-5])
0x26b: Pop(0)
0x26c: Push(CvectorIndex(Stack[-4], 0))
0x26d: Push(CvectorIndex(Stack[-5], 2))
0x26e: @ Rotate(Stack[-2], Stack[-1])
0x26f: Pop(2)
0x270: PushEmpty(bool)
0x271: Call2 0x2e8

0x272: Pop(0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x27d

0x275: Push("head") // @poff=186
0x276: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x277: Pop(1)
0x278: Push(Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27a: Push("head") // @poff=186
0x27b: @ LookAsyncCamera(Stack[-1])
0x27c: Pop(1)
0x27d: @ CameraWaitForPlayFinish()
0x27e: Pop(0)
0x27f: @ ResumeWorld()
0x280: Pop(0)
0x281: Stack[-21] = (bool) 1
0x282: Return(); Pop(18)

0x283: PushEmpty(bool, bool)
0x284: @ CameraSwitchToNormal()
0x285: Pop(0)
0x286: PushEmpty(bool)
0x287: Call2 0x2e8

0x288: Pop(0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x293

0x28b: Push("head") // @poff=186
0x28c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28d: Pop(1)
0x28e: Push(Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x290: Push("head") // @poff=186
0x291: @ UnlookAsync(Stack[-1])
0x292: Pop(1)
0x293: Return(); Pop(2)

0x294: PushEmpty(float, float, float, float)
0x295: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x296: Pop(0)
0x297: Push((bool) 0)
0x298: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Return(); Pop(4)

0x29b: PushEmpty(float, float, float, float)
0x29c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x29d: Pop(0)
0x29e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x29f: Pop(0)
0x2a0: Return(); Pop(4)

0x2a1: PushEmpty(float, cvector, float, cvector)
0x2a2: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2a3: Pop(0)
0x2a4: Stack[-1] = [0.0, 0.0, 0.0]
0x2a5: Push(CvectorIndex(Stack[-1], 1))
0x2a6: Stack[-3] = Stack[-1]
0x2a7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2a8: Push("head") // @poff=186
0x2a9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2aa: Pop(1)
0x2ab: Return(); Pop(4)

0x2ac: PushEmpty(bool)
0x2ad: Call2 0x2e8

0x2ae: Pop(0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: @ lshStopSpeech()
0x2b1: Pop(0)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty(object, object)
0x2b4: @ self(Stack[-1])
0x2b5: Pop(0)
0x2b6: Stack[-1] = Stack[-3]
0x2b7: Return(); Pop(2)

0x2b8: Stack[-1] = 0
0x2b9: PushEmpty(float, float)
0x2ba: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2bb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2bc: Push((float)9.999999974752427e-07)
0x2bd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bf: Stack[-4] = [0.0, 0.0, 0.0]
0x2c0: Return(); Pop(2)

0x2c1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2c2: Return(); Pop(2)

0x2c3: PushEmpty(int, int)
0x2c4: @ GetVariable(Stack[-3], Stack[-1])
0x2c5: Pop(0)
0x2c6: Stack[-1] = Stack[-4]
0x2c7: Return(); Pop(2)

0x2c8: PushEmpty(string, string)
0x2c9: Stack[-1] = "idle" // @poff=146
0x2ca: Push(Stack[-3])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2cd: Stack[-1] = Stack[-4]
0x2ce: Return(); Pop(2)

0x2cf: PushEmpty(int, bool, int, bool)
0x2d0: Stack[-2] = (int) 0
0x2d1: Push("all") // @poff=138
0x2d2: PushEmpty(string, int)
0x2d3: Stack[-5] = Stack[-1]
0x2d4: Call2 0x2c8

0x2d5: Pop(1)
0x2d6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: Pop(0); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: GOTO 0x2de

0x2db: Push((int) 1)
0x2dc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2dd: GOTO 0x2d1

0x2de: Stack[-2] = Stack[-5]
0x2df: Return(); Pop(4)

0x2e0: Stack[-1] = (int) 515597
0x2e1: Return(); Pop(0)

0x2e2: Stack[-1] = (int) 514841
0x2e3: Return(); Pop(0)

0x2e4: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=222
0x2e5: Return(); Pop(0)

0x2e6: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=262
0x2e7: Return(); Pop(0)

0x2e8: Stack[-1] = (bool) 0
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: Push("oob10Officer1") // @poff=306
0x2ec: Push((int) 1)
0x2ed: @ SetVariable(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty()
0x2f1: PushEmpty(int, string)
0x2f2: Stack[-1] = "oob10Officer1" // @poff=306
0x2f3: Call2 0x2c3

0x2f4: Pop(1)
0x2f5: Push((int) 0)
0x2f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-2] = (bool) 1
0x2f9: Return(); Pop(0)

0x2fa: Stack[-2] = (bool) 0
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(int, int)
0x2fd: Push("branch") // @poff=334
0x2fe: @ GetVariable(Stack[-1], Stack[-2])
0x2ff: Pop(1)
0x300: Push((int) 0)
0x301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x303: Stack[-3] = (int) 1
0x304: Return(); Pop(2)

0x305: GOTO 0x30b

0x306: Push((int) 1)
0x307: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x309: Stack[-3] = (int) 2
0x30a: Return(); Pop(2)

0x30b: Stack[-3] = (int) 3
0x30c: Return(); Pop(2)

