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
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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

RunOp = 0xba
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x95 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0xc0 Vars = (object)
		EVENT_26 Op = 0xf8 Vars = (string)
		EVENT_5 Op = 0x100 Vars = ()
		EVENT_6 Op = 0x105 Vars = ()
		EVENT_7 Op = 0x144 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1cc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x263

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x261

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x265

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x267

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x250

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
0x41: Call2 0x210

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
0x4f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x7f

0x53: Pop(1)
0x54: Push((int) 539279)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 539280)
0x5a: Push((int) -1)
0x5b: Push((int) 41223)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: GOTO 0x61

0x5f: Return(); Pop(0)

0x60: GOTO 0x4e

0x61: PushEmpty(bool)
0x62: Call2 0x269

0x63: Pop(0)
0x64: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x65: @ lshWaitForAnimEnd()
0x66: Pop(0)
0x67: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: GOTO 0x6f

0x6a: PushEmpty(string)
0x6b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6c: Call2 0x221

0x6d: Pop(1)
0x6e: GOTO 0x65

0x6f: GOTO 0x7e

0x70: Push("all") // @poff=138
0x71: Push("idle") // @poff=146
0x72: @ PlayAnimation(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: @ WaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: Push("all") // @poff=138
0x7a: Push("idle") // @poff=146
0x7b: @ PlayAnimation(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: GOTO 0x74

0x7e: Return(); Pop(0)

0x7f: PushEmpty()
0x80: PushEmpty(bool)
0x81: Call2 0x269

0x82: Pop(0)
0x83: Pop(1); Push((bool) Stack[-1] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Return(); Pop(0)

0x86: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Return(); Pop(0)

0x89: PushEmpty(string, bool)
0x8a: Stack[-3] = Stack[-2]
0x8b: Push("") // @poff=102
0x8c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-1] = (bool) 0
0x8f: GOTO 0x91

0x90: Stack[-1] = (bool) 1
0x91: Call2 0x228

0x92: Pop(2)
0x93: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: Push((int) 1)
0x97: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0x98: PushEmpty()
0x99: Call2 0x239

0x9a: Pop(0)
0x9b: Push((int) 41222)
0x9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x9e: PushEmpty(string)
0x9f: Stack[-1] = "Neutral" // @poff=89
0xa0: Call2 0x7f

0xa1: Pop(1)
0xa2: Push((int) 539279)
0xa3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa4: Pop(1)
0xa5: @@@ ClearReplies(); Obj=0 // @poff=116
0xa6: Pop(0)
0xa7: Push((int) 539280)
0xa8: Push((int) -1)
0xa9: Push((int) 41223)
0xaa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xab: Pop(3)
0xac: Return(); Pop(0)

0xad: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xae: PushEmpty(bool)
0xaf: Call2 0x269

0xb0: Pop(0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb2: @ lshStopAnimation()
0xb3: Pop(0)
0xb4: GOTO 0xb7

0xb5: @ StopAnimation()
0xb6: Pop(0)
0xb7: Return(); Pop(0)

0xb8: GOTO 0x96

0xb9: Return(); Pop(0)

0xba: PushEmpty(float, float)
0xbb: Stack[-2] = (int) 300
0xbc: Stack[-1] = (int) 100
0xbd: Call2 0xcb

0xbe: Pop(2)
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty()
0xc2: Call2 0x15b

0xc3: Pop(0)
0xc4: PushEmpty(int, object)
0xc5: Stack[-3] = Stack[-1]
0xc6: Push(-2, 1); TaskCall(0)
0xc7: Call2 0x0

0xc8: Pop(-2, 1); TaskReturn
0xc9: Pop(2)
0xca: Return(); Pop(0)

0xcb: PushEmpty(float, float)
0xcc: PushEmpty(bool)
0xcd: Call2 0x1c7

0xce: Pop(0)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd1: @ Hold()
0xd2: Pop(0)
0xd3: GOTO 0xcc

0xd4: Push((int) 3)
0xd5: @ rand(Stack[-2], Stack[-1])
0xd6: Pop(1)
0xd7: Push((int) 3)
0xd8: Pop(1); Push(Stack[-2] + Stack[-1]);
0xd9: @ Sleep(Stack[-1])
0xda: Pop(1)
0xdb: PushEmpty(float, float)
0xdc: Stack[-6] = Stack[-2]
0xdd: Stack[-5] = Stack[-1]
0xde: Call2 0x11a

0xdf: Pop(2)
0xe0: @ sync()
0xe1: Pop(0)
0xe2: GOTO 0xcc

0xe3: Return(); Pop(2)

0xe4: PushEmpty(bool, bool)
0xe5: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xe6: @ IsLoaded(Stack[-1])
0xe7: Pop(0)
0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 0
0xea: Pop(0); Push((bool) Stack[-2] == 0)
0xeb: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xec: PushEmpty(bool)
0xed: Call2 0x118

0xee: Pop(0)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 1
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: PushEmpty(object)
0xf3: Call2 0x240

0xf4: Pop(0)
0xf5: @ RemoveActor(Stack[-1])
0xf6: Pop(1)
0xf7: Return(); Pop(2)

0xf8: PushEmpty()
0xf9: Push("cleanup") // @poff=156
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0xe4

0xfe: Pop(0)
0xff: Return(); Pop(0)

0x100: @ StopGroup0()
0x101: Pop(0)
0x102: @ sync()
0x103: Pop(0)
0x104: Return(); Pop(0)

0x105: PushEmpty()
0x106: Call2 0x15b

0x107: Pop(0)
0x108: PushEmpty(bool)
0x109: Stack[-1] = (bool) 0
0x10a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(bool)
0x10d: Call2 0x118

0x10e: Pop(0)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Stack[-1] = (bool) 1
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object)
0x113: Call2 0x240

0x114: Pop(0)
0x115: @ RemoveActor(Stack[-1])
0x116: Pop(1)
0x117: Return(); Pop(0)

0x118: Stack[-1] = (bool) 1
0x119: Return(); Pop(0)

0x11a: PushEmpty()
0x11b: PushEmpty(bool)
0x11c: Call2 0x1c7

0x11d: Pop(0)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Return(); Pop(0)

0x121: Push("player") // @poff=172
0x122: @ FindActor(Stack[-4]T, Stack[-1])
0x123: Pop(1)
0x124: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x125: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x126: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x127: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x128: Push((int) 10)
0x129: Push((float)1.0)
0x12a: @ SetTimer(Stack[-2], Stack[-1])
0x12b: Pop(2)
0x12c: PushEmpty()
0x12d: Call2 0x169

0x12e: Pop(0)
0x12f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x131: Push((int) 10)
0x132: @ KillTimer(Stack[-1])
0x133: Pop(1)
0x134: Return(); Pop(0)

0x135: PushEmpty(float, float)
0x136: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-3] = (bool) 0
0x139: Return(); Pop(2)

0x13a: PushEmpty(float, object)
0x13b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x13c: Call2 0x1bf

0x13d: Pop(1)
0x13e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x13f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x142: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x143: Return(); Pop(2)

0x144: PushEmpty()
0x145: Push((int) 10)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x148: PushEmpty(bool)
0x149: Call2 0x135

0x14a: Pop(0)
0x14b: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: PushEmpty(object)
0x14f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x150: Call2 0x22e

0x151: Pop(1)
0x152: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x153: GOTO 0x15a

0x154: Push( Stack[2 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x156: Push("head") // @poff=186
0x157: @ UnlookAsync(Stack[-1])
0x158: Pop(1)
0x159: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15a: Return(); Pop(0)

0x15b: PushEmpty()
0x15c: Call2 0x1ba

0x15d: Pop(0)
0x15e: Push((int) 10)
0x15f: @ KillTimer(Stack[-1])
0x160: Pop(1)
0x161: Push( Stack[2 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x163: Push("head") // @poff=186
0x164: @ UnlookAsync(Stack[-1])
0x165: Pop(1)
0x166: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x167: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x168: Return(); Pop(0)

0x169: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x16a: @ WaitForAnimEnd()
0x16b: Pop(0)
0x16c: PushEmpty(bool)
0x16d: Call2 0x1c7

0x16e: Pop(0)
0x16f: Pop(1); Push((bool) Stack[-1] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Return(); Pop(14)

0x172: PushEmpty(int)
0x173: Call2 0x272

0x174: Stack[-1] = Stack[-8]
0x175: Pop(1)
0x176: Stack[-6] = (int) 0
0x177: PushEmpty(bool)
0x178: Stack[-1] = (bool) 0
0x179: Push((int) 5)
0x17a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(bool)
0x17d: Call2 0x1c7

0x17e: Pop(0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[-1] = (bool) 1
0x181: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x182: Push((int) 3)
0x183: @ irand(Stack[-6], Stack[-1])
0x184: Pop(1)
0x185: Push((int) 0)
0x186: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x188: Push(Stack[-7])
0x189: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x18a: @ irand(Stack[-4], Stack[-7])
0x18b: Pop(0)
0x18c: Push("all") // @poff=138
0x18d: PushEmpty(string, int)
0x18e: Stack[-7] = Stack[-1]
0x18f: Call2 0x26b

0x190: Pop(1)
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd(Stack[-3])
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-3] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x1b5

0x198: GOTO 0x1aa

0x199: Push((int) 1)
0x19a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19c: Push((int) 4)
0x19d: @ rand(Stack[-3], Stack[-1])
0x19e: Pop(1)
0x19f: Push((int) 1)
0x1a0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1a1: @ Sleep(Stack[-1], Stack[-2])
0x1a2: Pop(1)
0x1a3: Pop(0); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1b5

0x1a6: GOTO 0x1aa

0x1a7: Push(Stack[-6])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1b5

0x1aa: PushEmpty(bool)
0x1ab: Call2 0x1b8

0x1ac: Pop(0)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1b5

0x1b0: @ ResetAAS()
0x1b1: Pop(0)
0x1b2: Push((int) 1)
0x1b3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b4: GOTO 0x177

0x1b5: @ ResetAAS()
0x1b6: Pop(0)
0x1b7: Return(); Pop(14)

0x1b8: Stack[-1] = (bool) 1
0x1b9: Return(); Pop(0)

0x1ba: @ StopAnimation()
0x1bb: Pop(0)
0x1bc: @ StopGroup0()
0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1c0: @ GetPosition(Stack[-3])
0x1c1: Pop(0)
0x1c2: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x1c3: Pop(0)
0x1c4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1c5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1c6: Return(); Pop(6)

0x1c7: PushEmpty(bool, bool)
0x1c8: @ IsLoaded(Stack[-1])
0x1c9: Pop(0)
0x1ca: Stack[-1] = Stack[-3]
0x1cb: Return(); Pop(2)

0x1cc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1cd: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x1ce: Pop(0)
0x1cf: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x1d0: Pop(0)
0x1d1: Push(CvectorIndex(Stack[-8], 1))
0x1d2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1d4: @ GetPosition(Stack[-7])
0x1d5: Pop(0)
0x1d6: @ GetEyesHeight(Stack[-9])
0x1d7: Pop(0)
0x1d8: Push(CvectorIndex(Stack[-7], 1))
0x1d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1da: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1db: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1dc: Push(CvectorIndex(Stack[-6], 1))
0x1dd: Stack[-1] = (int) 0
0x1de: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1df: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1e0: Pop(1); Push(Sqrt(Stack[-1]))
0x1e1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1e2: Stack[-5] = -Stack[-6]; Pop(0);
0x1e3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1e4: PushEmpty(cvector, cvector)
0x1e5: Push([0.0, 1.0, 0.0])
0x1e6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1e7: Call2 0x246

0x1e8: Pop(1)
0x1e9: Push((int) 25)
0x1ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ec: Push([0.0, 10.0, 0.0])
0x1ed: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1ee: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1ef: @ IsOverrideActive(Stack[-2])
0x1f0: Pop(0)
0x1f1: Push(Stack[-2])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-21] = (bool) 0
0x1f4: Return(); Pop(18)

0x1f5: @ StopWorld()
0x1f6: Pop(0)
0x1f7: @ CameraTransit(Stack[-3], Stack[-5])
0x1f8: Pop(0)
0x1f9: Push(CvectorIndex(Stack[-4], 0))
0x1fa: Push(CvectorIndex(Stack[-5], 2))
0x1fb: @ Rotate(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x269

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: GOTO 0x20a

0x202: Push("head") // @poff=186
0x203: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x204: Pop(1)
0x205: Push(Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x207: Push("head") // @poff=186
0x208: @ LookAsyncCamera(Stack[-1])
0x209: Pop(1)
0x20a: @ CameraWaitForPlayFinish()
0x20b: Pop(0)
0x20c: @ ResumeWorld()
0x20d: Pop(0)
0x20e: Stack[-21] = (bool) 1
0x20f: Return(); Pop(18)

0x210: PushEmpty(bool, bool)
0x211: @ CameraSwitchToNormal()
0x212: Pop(0)
0x213: PushEmpty(bool)
0x214: Call2 0x269

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x220

0x218: Push("head") // @poff=186
0x219: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x21a: Pop(1)
0x21b: Push(Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21d: Push("head") // @poff=186
0x21e: @ UnlookAsync(Stack[-1])
0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(float, float, float, float)
0x222: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x223: Pop(0)
0x224: Push((bool) 0)
0x225: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(1)
0x227: Return(); Pop(4)

0x228: PushEmpty(float, float, float, float)
0x229: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x22a: Pop(0)
0x22b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x22c: Pop(0)
0x22d: Return(); Pop(4)

0x22e: PushEmpty(float, cvector, float, cvector)
0x22f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x230: Pop(0)
0x231: Stack[-1] = [0.0, 0.0, 0.0]
0x232: Push(CvectorIndex(Stack[-1], 1))
0x233: Stack[-3] = Stack[-1]
0x234: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x235: Push("head") // @poff=186
0x236: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x237: Pop(1)
0x238: Return(); Pop(4)

0x239: PushEmpty(bool)
0x23a: Call2 0x269

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: @ lshStopSpeech()
0x23e: Pop(0)
0x23f: Return(); Pop(0)

0x240: PushEmpty(object, object)
0x241: @ self(Stack[-1])
0x242: Pop(0)
0x243: Stack[-1] = Stack[-3]
0x244: Return(); Pop(2)

0x245: Stack[-1] = 0
0x246: PushEmpty(float, float)
0x247: Pop(0); Push(Stack[-3] | Stack[-3]);
0x248: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x249: Push((float)9.999999974752427e-07)
0x24a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24c: Stack[-4] = [0.0, 0.0, 0.0]
0x24d: Return(); Pop(2)

0x24e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x24f: Return(); Pop(2)

0x250: PushEmpty(int, int)
0x251: Push("branch") // @poff=222
0x252: @ GetVariable(Stack[-1], Stack[-2])
0x253: Pop(1)
0x254: Push((int) 0)
0x255: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x257: Stack[-3] = (int) 1
0x258: Return(); Pop(2)

0x259: GOTO 0x25f

0x25a: Push((int) 1)
0x25b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-3] = (int) 2
0x25e: Return(); Pop(2)

0x25f: Stack[-3] = (int) 3
0x260: Return(); Pop(2)

0x261: Stack[-1] = (int) 515560
0x262: Return(); Pop(0)

0x263: Stack[-1] = (int) 503345
0x264: Return(); Pop(0)

0x265: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=236
0x266: Return(); Pop(0)

0x267: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=276
0x268: Return(); Pop(0)

0x269: Stack[-1] = (bool) 0
0x26a: Return(); Pop(0)

0x26b: PushEmpty(string, string)
0x26c: Stack[-1] = "idle" // @poff=146
0x26d: Push(Stack[-3])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x270: Stack[-1] = Stack[-4]
0x271: Return(); Pop(2)

0x272: PushEmpty(int, bool, int, bool)
0x273: Stack[-2] = (int) 0
0x274: Push("all") // @poff=138
0x275: PushEmpty(string, int)
0x276: Stack[-5] = Stack[-1]
0x277: Call2 0x26b

0x278: Pop(1)
0x279: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: Pop(0); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x281

0x27e: Push((int) 1)
0x27f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x280: GOTO 0x274

0x281: Stack[-2] = Stack[-5]
0x282: Return(); Pop(4)

