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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xc4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0xca Vars = (object)
		EVENT_26 Op = 0x102 Vars = (string)
		EVENT_5 Op = 0x10a Vars = ()
		EVENT_6 Op = 0x10f Vars = ()
		EVENT_7 Op = 0x14e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x1d6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x285

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x283

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x287

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x289

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x272

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
0x41: Call2 0x21a

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
0x54: Push((int) 534134)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 534135)
0x5a: Push((int) -1)
0x5b: Push((int) 35722)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 534444)
0x5f: Push((int) -1)
0x60: Push((int) 36077)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x28b

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x22b

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
0x86: Call2 0x28b

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
0x96: Call2 0x232

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x243

0x9f: Pop(0)
0xa0: Push((int) 35721)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 534134)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 534135)
0xad: Push((int) -1)
0xae: Push((int) 35722)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: Push((int) 534444)
0xb2: Push((int) -1)
0xb3: Push((int) 36077)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x28b

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty(float, float)
0xc5: Stack[-2] = (int) 300
0xc6: Stack[-1] = (int) 100
0xc7: Call2 0xd5

0xc8: Pop(2)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty()
0xcc: Call2 0x165

0xcd: Pop(0)
0xce: PushEmpty(int, object)
0xcf: Stack[-3] = Stack[-1]
0xd0: Push(-2, 1); TaskCall(0)
0xd1: Call2 0x0

0xd2: Pop(-2, 1); TaskReturn
0xd3: Pop(2)
0xd4: Return(); Pop(0)

0xd5: PushEmpty(float, float)
0xd6: PushEmpty(bool)
0xd7: Call2 0x1d1

0xd8: Pop(0)
0xd9: Pop(1); Push((bool) Stack[-1] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdb: @ Hold()
0xdc: Pop(0)
0xdd: GOTO 0xd6

0xde: Push((int) 3)
0xdf: @ rand(Stack[-2], Stack[-1])
0xe0: Pop(1)
0xe1: Push((int) 3)
0xe2: Pop(1); Push(Stack[-2] + Stack[-1]);
0xe3: @ Sleep(Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(float, float)
0xe6: Stack[-6] = Stack[-2]
0xe7: Stack[-5] = Stack[-1]
0xe8: Call2 0x124

0xe9: Pop(2)
0xea: @ sync()
0xeb: Pop(0)
0xec: GOTO 0xd6

0xed: Return(); Pop(2)

0xee: PushEmpty(bool, bool)
0xef: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xf0: @ IsLoaded(Stack[-1])
0xf1: Pop(0)
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 0
0xf4: Pop(0); Push((bool) Stack[-2] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf6: PushEmpty(bool)
0xf7: Call2 0x122

0xf8: Pop(0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: Stack[-1] = (bool) 1
0xfb: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfc: PushEmpty(object)
0xfd: Call2 0x24a

0xfe: Pop(0)
0xff: @ RemoveActor(Stack[-1])
0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty()
0x103: Push("cleanup") // @poff=156
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x106: PushEmpty()
0x107: Call2 0xee

0x108: Pop(0)
0x109: Return(); Pop(0)

0x10a: @ StopGroup0()
0x10b: Pop(0)
0x10c: @ sync()
0x10d: Pop(0)
0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: Call2 0x165

0x111: Pop(0)
0x112: PushEmpty(bool)
0x113: Stack[-1] = (bool) 0
0x114: Push( Stack[5 + Tasks[-1].StackPointer] )
0x115: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x116: PushEmpty(bool)
0x117: Call2 0x122

0x118: Pop(0)
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Stack[-1] = (bool) 1
0x11b: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11c: PushEmpty(object)
0x11d: Call2 0x24a

0x11e: Pop(0)
0x11f: @ RemoveActor(Stack[-1])
0x120: Pop(1)
0x121: Return(); Pop(0)

0x122: Stack[-1] = (bool) 1
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: PushEmpty(bool)
0x126: Call2 0x1d1

0x127: Pop(0)
0x128: Pop(1); Push((bool) Stack[-1] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x12a: Return(); Pop(0)

0x12b: Push("player") // @poff=172
0x12c: @ FindActor(Stack[-4]T, Stack[-1])
0x12d: Pop(1)
0x12e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x12f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x130: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x131: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x132: Push((int) 10)
0x133: Push((float)1.0)
0x134: @ SetTimer(Stack[-2], Stack[-1])
0x135: Pop(2)
0x136: PushEmpty()
0x137: Call2 0x173

0x138: Pop(0)
0x139: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: Push((int) 10)
0x13c: @ KillTimer(Stack[-1])
0x13d: Pop(1)
0x13e: Return(); Pop(0)

0x13f: PushEmpty(float, float)
0x140: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-3] = (bool) 0
0x143: Return(); Pop(2)

0x144: PushEmpty(float, object)
0x145: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x146: Call2 0x1c9

0x147: Pop(1)
0x148: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x149: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x14c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x14d: Return(); Pop(2)

0x14e: PushEmpty()
0x14f: Push((int) 10)
0x150: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x152: PushEmpty(bool)
0x153: Call2 0x13f

0x154: Pop(0)
0x155: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x156: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(object)
0x159: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x15a: Call2 0x238

0x15b: Pop(1)
0x15c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x15d: GOTO 0x164

0x15e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x15f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x160: Push("head") // @poff=186
0x161: @ UnlookAsync(Stack[-1])
0x162: Pop(1)
0x163: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x164: Return(); Pop(0)

0x165: PushEmpty()
0x166: Call2 0x1c4

0x167: Pop(0)
0x168: Push((int) 10)
0x169: @ KillTimer(Stack[-1])
0x16a: Pop(1)
0x16b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16d: Push("head") // @poff=186
0x16e: @ UnlookAsync(Stack[-1])
0x16f: Pop(1)
0x170: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x171: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x172: Return(); Pop(0)

0x173: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x174: @ WaitForAnimEnd()
0x175: Pop(0)
0x176: PushEmpty(bool)
0x177: Call2 0x1d1

0x178: Pop(0)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Return(); Pop(14)

0x17c: PushEmpty(int)
0x17d: Call2 0x261

0x17e: Stack[-1] = Stack[-8]
0x17f: Pop(1)
0x180: Stack[-6] = (int) 0
0x181: PushEmpty(bool)
0x182: Stack[-1] = (bool) 0
0x183: Push((int) 5)
0x184: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(bool)
0x187: Call2 0x1d1

0x188: Pop(0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Stack[-1] = (bool) 1
0x18b: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x18c: Push((int) 3)
0x18d: @ irand(Stack[-6], Stack[-1])
0x18e: Pop(1)
0x18f: Push((int) 0)
0x190: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x192: Push(Stack[-7])
0x193: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x194: @ irand(Stack[-4], Stack[-7])
0x195: Pop(0)
0x196: Push("all") // @poff=138
0x197: PushEmpty(string, int)
0x198: Stack[-7] = Stack[-1]
0x199: Call2 0x25a

0x19a: Pop(1)
0x19b: @ PlayAnimation(Stack[-2], Stack[-1])
0x19c: Pop(2)
0x19d: @ WaitForAnimEnd(Stack[-3])
0x19e: Pop(0)
0x19f: Pop(0); Push((bool) Stack[-3] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: GOTO 0x1bf

0x1a2: GOTO 0x1b4

0x1a3: Push((int) 1)
0x1a4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a6: Push((int) 4)
0x1a7: @ rand(Stack[-3], Stack[-1])
0x1a8: Pop(1)
0x1a9: Push((int) 1)
0x1aa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ab: @ Sleep(Stack[-1], Stack[-2])
0x1ac: Pop(1)
0x1ad: Pop(0); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1bf

0x1b0: GOTO 0x1b4

0x1b1: Push(Stack[-6])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: GOTO 0x1bf

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x1c2

0x1b6: Pop(0)
0x1b7: Pop(1); Push((bool) Stack[-1] == 0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: GOTO 0x1bf

0x1ba: @ ResetAAS()
0x1bb: Pop(0)
0x1bc: Push((int) 1)
0x1bd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1be: GOTO 0x181

0x1bf: @ ResetAAS()
0x1c0: Pop(0)
0x1c1: Return(); Pop(14)

0x1c2: Stack[-1] = (bool) 1
0x1c3: Return(); Pop(0)

0x1c4: @ StopAnimation()
0x1c5: Pop(0)
0x1c6: @ StopGroup0()
0x1c7: Pop(0)
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ca: @ GetPosition(Stack[-3])
0x1cb: Pop(0)
0x1cc: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x1cd: Pop(0)
0x1ce: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1cf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1d0: Return(); Pop(6)

0x1d1: PushEmpty(bool, bool)
0x1d2: @ IsLoaded(Stack[-1])
0x1d3: Pop(0)
0x1d4: Stack[-1] = Stack[-3]
0x1d5: Return(); Pop(2)

0x1d6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1d7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x1d8: Pop(0)
0x1d9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x1da: Pop(0)
0x1db: Push(CvectorIndex(Stack[-8], 1))
0x1dc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1dd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1de: @ GetPosition(Stack[-7])
0x1df: Pop(0)
0x1e0: @ GetEyesHeight(Stack[-9])
0x1e1: Pop(0)
0x1e2: Push(CvectorIndex(Stack[-7], 1))
0x1e3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1e5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1e6: Push(CvectorIndex(Stack[-6], 1))
0x1e7: Stack[-1] = (int) 0
0x1e8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1ea: Pop(1); Push(Sqrt(Stack[-1]))
0x1eb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1ec: Stack[-5] = -Stack[-6]; Pop(0);
0x1ed: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ee: PushEmpty(cvector, cvector)
0x1ef: Push([0.0, 1.0, 0.0])
0x1f0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1f1: Call2 0x250

0x1f2: Pop(1)
0x1f3: Push((int) 25)
0x1f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f6: Push([0.0, 10.0, 0.0])
0x1f7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1f8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1f9: @ IsOverrideActive(Stack[-2])
0x1fa: Pop(0)
0x1fb: Push(Stack[-2])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-21] = (bool) 0
0x1fe: Return(); Pop(18)

0x1ff: @ StopWorld()
0x200: Pop(0)
0x201: @ CameraTransit(Stack[-3], Stack[-5])
0x202: Pop(0)
0x203: Push(CvectorIndex(Stack[-4], 0))
0x204: Push(CvectorIndex(Stack[-5], 2))
0x205: @ Rotate(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: PushEmpty(bool)
0x208: Call2 0x28b

0x209: Pop(0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x214

0x20c: Push("head") // @poff=186
0x20d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20e: Pop(1)
0x20f: Push(Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: Push("head") // @poff=186
0x212: @ LookAsyncCamera(Stack[-1])
0x213: Pop(1)
0x214: @ CameraWaitForPlayFinish()
0x215: Pop(0)
0x216: @ ResumeWorld()
0x217: Pop(0)
0x218: Stack[-21] = (bool) 1
0x219: Return(); Pop(18)

0x21a: PushEmpty(bool, bool)
0x21b: @ CameraSwitchToNormal()
0x21c: Pop(0)
0x21d: PushEmpty(bool)
0x21e: Call2 0x28b

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x22a

0x222: Push("head") // @poff=186
0x223: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x224: Pop(1)
0x225: Push(Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x227: Push("head") // @poff=186
0x228: @ UnlookAsync(Stack[-1])
0x229: Pop(1)
0x22a: Return(); Pop(2)

0x22b: PushEmpty(float, float, float, float)
0x22c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x22d: Pop(0)
0x22e: Push((bool) 0)
0x22f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(1)
0x231: Return(); Pop(4)

0x232: PushEmpty(float, float, float, float)
0x233: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x234: Pop(0)
0x235: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x236: Pop(0)
0x237: Return(); Pop(4)

0x238: PushEmpty(float, cvector, float, cvector)
0x239: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x23a: Pop(0)
0x23b: Stack[-1] = [0.0, 0.0, 0.0]
0x23c: Push(CvectorIndex(Stack[-1], 1))
0x23d: Stack[-3] = Stack[-1]
0x23e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x23f: Push("head") // @poff=186
0x240: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x241: Pop(1)
0x242: Return(); Pop(4)

0x243: PushEmpty(bool)
0x244: Call2 0x28b

0x245: Pop(0)
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: @ lshStopSpeech()
0x248: Pop(0)
0x249: Return(); Pop(0)

0x24a: PushEmpty(object, object)
0x24b: @ self(Stack[-1])
0x24c: Pop(0)
0x24d: Stack[-1] = Stack[-3]
0x24e: Return(); Pop(2)

0x24f: Stack[-1] = 0
0x250: PushEmpty(float, float)
0x251: Pop(0); Push(Stack[-3] | Stack[-3]);
0x252: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x253: Push((float)9.999999974752427e-07)
0x254: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-4] = [0.0, 0.0, 0.0]
0x257: Return(); Pop(2)

0x258: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x259: Return(); Pop(2)

0x25a: PushEmpty(string, string)
0x25b: Stack[-1] = "idle" // @poff=146
0x25c: Push(Stack[-3])
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x25f: Stack[-1] = Stack[-4]
0x260: Return(); Pop(2)

0x261: PushEmpty(int, bool, int, bool)
0x262: Stack[-2] = (int) 0
0x263: Push("all") // @poff=138
0x264: PushEmpty(string, int)
0x265: Stack[-5] = Stack[-1]
0x266: Call2 0x25a

0x267: Pop(1)
0x268: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: Pop(0); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x270

0x26d: Push((int) 1)
0x26e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26f: GOTO 0x263

0x270: Stack[-2] = Stack[-5]
0x271: Return(); Pop(4)

0x272: PushEmpty(int, int)
0x273: Push("branch") // @poff=222
0x274: @ GetVariable(Stack[-1], Stack[-2])
0x275: Pop(1)
0x276: Push((int) 0)
0x277: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x279: Stack[-3] = (int) 1
0x27a: Return(); Pop(2)

0x27b: GOTO 0x281

0x27c: Push((int) 1)
0x27d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-3] = (int) 2
0x280: Return(); Pop(2)

0x281: Stack[-3] = (int) 3
0x282: Return(); Pop(2)

0x283: Stack[-1] = (int) 521048
0x284: Return(); Pop(0)

0x285: Stack[-1] = (int) 521047
0x286: Return(); Pop(0)

0x287: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=236
0x288: Return(); Pop(0)

0x289: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=276
0x28a: Return(); Pop(0)

0x28b: Stack[-1] = (bool) 0
0x28c: Return(); Pop(0)

