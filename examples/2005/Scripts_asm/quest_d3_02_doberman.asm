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
	W:quest_d3_02
	W:teleport
	W:d3q02
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000710075006500730074005f00640033005f00300032000000740065006c00650070006f007200740000006400330071003000320000006200720061006e00630068000000
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
	Trigger (2 args)
	HasAnimation (3 args)

RunOp = 0xe8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0xee Vars = (object)
		EVENT_26 Op = 0x126 Vars = (string)
		EVENT_5 Op = 0x12e Vars = ()
		EVENT_6 Op = 0x133 Vars = ()
		EVENT_7 Op = 0x172 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1fa

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2a9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2a7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2ab

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2ad

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2c4

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
0x41: Call2 0x23e

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
0x54: Push((int) 535420)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2b8

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 535421)
0x5f: Push((int) 37102)
0x60: Push((int) 37101)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 535424)
0x64: Push((int) -1)
0x65: Push((int) 37104)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2af

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x24f

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
0x8b: Call2 0x2af

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
0x9b: Call2 0x256

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x267

0xa4: Pop(0)
0xa5: Push((int) 37103)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2b1

0xac: Pop(2)
0xad: Push((int) 37100)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral" // @poff=89
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 535420)
0xb5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb6: Pop(1)
0xb7: @@@ ClearReplies(); Obj=0 // @poff=116
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2b8

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 535421)
0xbf: Push((int) 37102)
0xc0: Push((int) 37101)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: Push((int) 535424)
0xc4: Push((int) -1)
0xc5: Push((int) 37104)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 37102)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 535422)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: Push((int) 535423)
0xd6: Push((int) -1)
0xd7: Push((int) 37103)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdc: PushEmpty(bool)
0xdd: Call2 0x2af

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe0: @ lshStopAnimation()
0xe1: Pop(0)
0xe2: GOTO 0xe5

0xe3: @ StopAnimation()
0xe4: Pop(0)
0xe5: Return(); Pop(0)

0xe6: GOTO 0xa0

0xe7: Return(); Pop(0)

0xe8: PushEmpty(float, float)
0xe9: Stack[-2] = (int) 300
0xea: Stack[-1] = (int) 100
0xeb: Call2 0xf9

0xec: Pop(2)
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: PushEmpty()
0xf0: Call2 0x189

0xf1: Pop(0)
0xf2: PushEmpty(int, object)
0xf3: Stack[-3] = Stack[-1]
0xf4: Push(-2, 1); TaskCall(0)
0xf5: Call2 0x0

0xf6: Pop(-2, 1); TaskReturn
0xf7: Pop(2)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(float, float)
0xfa: PushEmpty(bool)
0xfb: Call2 0x1f5

0xfc: Pop(0)
0xfd: Pop(1); Push((bool) Stack[-1] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: @ Hold()
0x100: Pop(0)
0x101: GOTO 0xfa

0x102: Push((int) 3)
0x103: @ rand(Stack[-2], Stack[-1])
0x104: Pop(1)
0x105: Push((int) 3)
0x106: Pop(1); Push(Stack[-2] + Stack[-1]);
0x107: @ Sleep(Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(float, float)
0x10a: Stack[-6] = Stack[-2]
0x10b: Stack[-5] = Stack[-1]
0x10c: Call2 0x148

0x10d: Pop(2)
0x10e: @ sync()
0x10f: Pop(0)
0x110: GOTO 0xfa

0x111: Return(); Pop(2)

0x112: PushEmpty(bool, bool)
0x113: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x114: @ IsLoaded(Stack[-1])
0x115: Pop(0)
0x116: PushEmpty(bool)
0x117: Stack[-1] = (bool) 0
0x118: Pop(0); Push((bool) Stack[-2] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11a: PushEmpty(bool)
0x11b: Call2 0x146

0x11c: Pop(0)
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Stack[-1] = (bool) 1
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: PushEmpty(object)
0x121: Call2 0x26e

0x122: Pop(0)
0x123: @ RemoveActor(Stack[-1])
0x124: Pop(1)
0x125: Return(); Pop(2)

0x126: PushEmpty()
0x127: Push("cleanup") // @poff=156
0x128: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12a: PushEmpty()
0x12b: Call2 0x112

0x12c: Pop(0)
0x12d: Return(); Pop(0)

0x12e: @ StopGroup0()
0x12f: Pop(0)
0x130: @ sync()
0x131: Pop(0)
0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: Call2 0x189

0x135: Pop(0)
0x136: PushEmpty(bool)
0x137: Stack[-1] = (bool) 0
0x138: Push( Stack[5 + Tasks[-1].StackPointer] )
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: PushEmpty(bool)
0x13b: Call2 0x146

0x13c: Pop(0)
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: Stack[-1] = (bool) 1
0x13f: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x140: PushEmpty(object)
0x141: Call2 0x26e

0x142: Pop(0)
0x143: @ RemoveActor(Stack[-1])
0x144: Pop(1)
0x145: Return(); Pop(0)

0x146: Stack[-1] = (bool) 1
0x147: Return(); Pop(0)

0x148: PushEmpty()
0x149: PushEmpty(bool)
0x14a: Call2 0x1f5

0x14b: Pop(0)
0x14c: Pop(1); Push((bool) Stack[-1] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Return(); Pop(0)

0x14f: Push("player") // @poff=172
0x150: @ FindActor(Stack[-4]T, Stack[-1])
0x151: Pop(1)
0x152: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x153: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x154: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x155: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Push((int) 10)
0x157: Push((float)1.0)
0x158: @ SetTimer(Stack[-2], Stack[-1])
0x159: Pop(2)
0x15a: PushEmpty()
0x15b: Call2 0x197

0x15c: Pop(0)
0x15d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15f: Push((int) 10)
0x160: @ KillTimer(Stack[-1])
0x161: Pop(1)
0x162: Return(); Pop(0)

0x163: PushEmpty(float, float)
0x164: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x166: Stack[-3] = (bool) 0
0x167: Return(); Pop(2)

0x168: PushEmpty(float, object)
0x169: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x16a: Call2 0x1ed

0x16b: Pop(1)
0x16c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x16d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x170: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x171: Return(); Pop(2)

0x172: PushEmpty()
0x173: Push((int) 10)
0x174: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x163

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17e: Call2 0x25c

0x17f: Pop(1)
0x180: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x181: GOTO 0x188

0x182: Push( Stack[2 + Tasks[-1].StackPointer] )
0x183: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x184: Push("head") // @poff=186
0x185: @ UnlookAsync(Stack[-1])
0x186: Pop(1)
0x187: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: Call2 0x1e8

0x18b: Pop(0)
0x18c: Push((int) 10)
0x18d: @ KillTimer(Stack[-1])
0x18e: Pop(1)
0x18f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x190: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x191: Push("head") // @poff=186
0x192: @ UnlookAsync(Stack[-1])
0x193: Pop(1)
0x194: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x195: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x196: Return(); Pop(0)

0x197: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x198: @ WaitForAnimEnd()
0x199: Pop(0)
0x19a: PushEmpty(bool)
0x19b: Call2 0x1f5

0x19c: Pop(0)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Return(); Pop(14)

0x1a0: PushEmpty(int)
0x1a1: Call2 0x296

0x1a2: Stack[-1] = Stack[-8]
0x1a3: Pop(1)
0x1a4: Stack[-6] = (int) 0
0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: Push((int) 5)
0x1a8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: PushEmpty(bool)
0x1ab: Call2 0x1f5

0x1ac: Pop(0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1b0: Push((int) 3)
0x1b1: @ irand(Stack[-6], Stack[-1])
0x1b2: Pop(1)
0x1b3: Push((int) 0)
0x1b4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b6: Push(Stack[-7])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b8: @ irand(Stack[-4], Stack[-7])
0x1b9: Pop(0)
0x1ba: Push("all") // @poff=138
0x1bb: PushEmpty(string, int)
0x1bc: Stack[-7] = Stack[-1]
0x1bd: Call2 0x28f

0x1be: Pop(1)
0x1bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: @ WaitForAnimEnd(Stack[-3])
0x1c2: Pop(0)
0x1c3: Pop(0); Push((bool) Stack[-3] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: GOTO 0x1e3

0x1c6: GOTO 0x1d8

0x1c7: Push((int) 1)
0x1c8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1ca: Push((int) 4)
0x1cb: @ rand(Stack[-3], Stack[-1])
0x1cc: Pop(1)
0x1cd: Push((int) 1)
0x1ce: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cf: @ Sleep(Stack[-1], Stack[-2])
0x1d0: Pop(1)
0x1d1: Pop(0); Push((bool) Stack[-1] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1e3

0x1d4: GOTO 0x1d8

0x1d5: Push(Stack[-6])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1e3

0x1d8: PushEmpty(bool)
0x1d9: Call2 0x1e6

0x1da: Pop(0)
0x1db: Pop(1); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: GOTO 0x1e3

0x1de: @ ResetAAS()
0x1df: Pop(0)
0x1e0: Push((int) 1)
0x1e1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1e2: GOTO 0x1a5

0x1e3: @ ResetAAS()
0x1e4: Pop(0)
0x1e5: Return(); Pop(14)

0x1e6: Stack[-1] = (bool) 1
0x1e7: Return(); Pop(0)

0x1e8: @ StopAnimation()
0x1e9: Pop(0)
0x1ea: @ StopGroup0()
0x1eb: Pop(0)
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ee: @ GetPosition(Stack[-3])
0x1ef: Pop(0)
0x1f0: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x1f1: Pop(0)
0x1f2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1f3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1f4: Return(); Pop(6)

0x1f5: PushEmpty(bool, bool)
0x1f6: @ IsLoaded(Stack[-1])
0x1f7: Pop(0)
0x1f8: Stack[-1] = Stack[-3]
0x1f9: Return(); Pop(2)

0x1fa: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1fb: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x1fc: Pop(0)
0x1fd: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x1fe: Pop(0)
0x1ff: Push(CvectorIndex(Stack[-8], 1))
0x200: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x201: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x202: @ GetPosition(Stack[-7])
0x203: Pop(0)
0x204: @ GetEyesHeight(Stack[-9])
0x205: Pop(0)
0x206: Push(CvectorIndex(Stack[-7], 1))
0x207: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x208: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x209: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x20a: Push(CvectorIndex(Stack[-6], 1))
0x20b: Stack[-1] = (int) 0
0x20c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x20d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x20e: Pop(1); Push(Sqrt(Stack[-1]))
0x20f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x210: Stack[-5] = -Stack[-6]; Pop(0);
0x211: Pop(0); Push(Stack[-6] * Stack[-19]);
0x212: PushEmpty(cvector, cvector)
0x213: Push([0.0, 1.0, 0.0])
0x214: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x215: Call2 0x274

0x216: Pop(1)
0x217: Push((int) 25)
0x218: Pop(2); Push(Stack[-2] * Stack[-1]);
0x219: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21a: Push([0.0, 10.0, 0.0])
0x21b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x21c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x21d: @ IsOverrideActive(Stack[-2])
0x21e: Pop(0)
0x21f: Push(Stack[-2])
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[-21] = (bool) 0
0x222: Return(); Pop(18)

0x223: @ StopWorld()
0x224: Pop(0)
0x225: @ CameraTransit(Stack[-3], Stack[-5])
0x226: Pop(0)
0x227: Push(CvectorIndex(Stack[-4], 0))
0x228: Push(CvectorIndex(Stack[-5], 2))
0x229: @ Rotate(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: PushEmpty(bool)
0x22c: Call2 0x2af

0x22d: Pop(0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x238

0x230: Push("head") // @poff=186
0x231: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x232: Pop(1)
0x233: Push(Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x235: Push("head") // @poff=186
0x236: @ LookAsyncCamera(Stack[-1])
0x237: Pop(1)
0x238: @ CameraWaitForPlayFinish()
0x239: Pop(0)
0x23a: @ ResumeWorld()
0x23b: Pop(0)
0x23c: Stack[-21] = (bool) 1
0x23d: Return(); Pop(18)

0x23e: PushEmpty(bool, bool)
0x23f: @ CameraSwitchToNormal()
0x240: Pop(0)
0x241: PushEmpty(bool)
0x242: Call2 0x2af

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x24e

0x246: Push("head") // @poff=186
0x247: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x248: Pop(1)
0x249: Push(Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: Push("head") // @poff=186
0x24c: @ UnlookAsync(Stack[-1])
0x24d: Pop(1)
0x24e: Return(); Pop(2)

0x24f: PushEmpty(float, float, float, float)
0x250: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x251: Pop(0)
0x252: Push((bool) 0)
0x253: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(1)
0x255: Return(); Pop(4)

0x256: PushEmpty(float, float, float, float)
0x257: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x258: Pop(0)
0x259: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x25a: Pop(0)
0x25b: Return(); Pop(4)

0x25c: PushEmpty(float, cvector, float, cvector)
0x25d: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x25e: Pop(0)
0x25f: Stack[-1] = [0.0, 0.0, 0.0]
0x260: Push(CvectorIndex(Stack[-1], 1))
0x261: Stack[-3] = Stack[-1]
0x262: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x263: Push("head") // @poff=186
0x264: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x265: Pop(1)
0x266: Return(); Pop(4)

0x267: PushEmpty(bool)
0x268: Call2 0x2af

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26b: @ lshStopSpeech()
0x26c: Pop(0)
0x26d: Return(); Pop(0)

0x26e: PushEmpty(object, object)
0x26f: @ self(Stack[-1])
0x270: Pop(0)
0x271: Stack[-1] = Stack[-3]
0x272: Return(); Pop(2)

0x273: Stack[-1] = 0
0x274: PushEmpty(float, float)
0x275: Pop(0); Push(Stack[-3] | Stack[-3]);
0x276: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x277: Push((float)9.999999974752427e-07)
0x278: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-4] = [0.0, 0.0, 0.0]
0x27b: Return(); Pop(2)

0x27c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x27d: Return(); Pop(2)

0x27e: PushEmpty(int, int)
0x27f: @ GetVariable(Stack[-3], Stack[-1])
0x280: Pop(0)
0x281: Stack[-1] = Stack[-4]
0x282: Return(); Pop(2)

0x283: PushEmpty(object, object)
0x284: @ FindActor(Stack[-1], Stack[-4])
0x285: Pop(0)
0x286: Pop(0); PushNull((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-5] = (bool) 0
0x289: Return(); Pop(2)

0x28a: @ Trigger(Stack[-1], Stack[-3])
0x28b: Pop(0)
0x28c: Stack[-5] = (bool) 1
0x28d: Return(); Pop(2)

0x28e: Stack[-1] = 0
0x28f: PushEmpty(string, string)
0x290: Stack[-1] = "idle" // @poff=146
0x291: Push(Stack[-3])
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x294: Stack[-1] = Stack[-4]
0x295: Return(); Pop(2)

0x296: PushEmpty(int, bool, int, bool)
0x297: Stack[-2] = (int) 0
0x298: Push("all") // @poff=138
0x299: PushEmpty(string, int)
0x29a: Stack[-5] = Stack[-1]
0x29b: Call2 0x28f

0x29c: Pop(1)
0x29d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: Pop(0); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2a5

0x2a2: Push((int) 1)
0x2a3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a4: GOTO 0x298

0x2a5: Stack[-2] = Stack[-5]
0x2a6: Return(); Pop(4)

0x2a7: Stack[-1] = (int) 518097
0x2a8: Return(); Pop(0)

0x2a9: Stack[-1] = (int) 518096
0x2aa: Return(); Pop(0)

0x2ab: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=222
0x2ac: Return(); Pop(0)

0x2ad: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=262
0x2ae: Return(); Pop(0)

0x2af: Stack[-1] = (bool) 0
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(bool, string, string)
0x2b3: Stack[-2] = "quest_d3_02" // @poff=306
0x2b4: Stack[-1] = "teleport" // @poff=330
0x2b5: Call2 0x283

0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: PushEmpty()
0x2b9: PushEmpty(int, string)
0x2ba: Stack[-1] = "d3q02" // @poff=348
0x2bb: Call2 0x27e

0x2bc: Pop(1)
0x2bd: Push((int) 3)
0x2be: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-2] = (bool) 1
0x2c1: Return(); Pop(0)

0x2c2: Stack[-2] = (bool) 0
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(int, int)
0x2c5: Push("branch") // @poff=360
0x2c6: @ GetVariable(Stack[-1], Stack[-2])
0x2c7: Pop(1)
0x2c8: Push((int) 0)
0x2c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cb: Stack[-3] = (int) 1
0x2cc: Return(); Pop(2)

0x2cd: GOTO 0x2d3

0x2ce: Push((int) 1)
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-3] = (int) 2
0x2d2: Return(); Pop(2)

0x2d3: Stack[-3] = (int) 3
0x2d4: Return(); Pop(2)

