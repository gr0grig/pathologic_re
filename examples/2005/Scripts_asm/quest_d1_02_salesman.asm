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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:ood1SalesmanLaska1
	W:d1q02
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e00670000006f006f0064003100530061006c00650073006d0061006e004c00610073006b006100310000006400310071003000320000006200720061006e00630068000000
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

RunOp = 0x178
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x17e Vars = (object)
		EVENT_26 Op = 0x1b6 Vars = (string)
		EVENT_5 Op = 0x1be Vars = ()
		EVENT_6 Op = 0x1c3 Vars = ()
		EVENT_7 Op = 0x202 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x28a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x315

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x313

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x317

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x319

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x353

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
0x41: Call2 0x2ce

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

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x33b

0x55: Pop(1)
0x56: Pop(1); Push((bool) Stack[-1] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: PushEmpty(bool, object)
0x59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a: Call2 0x347

0x5b: Pop(1)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x335

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa7

0x67: Pop(1)
0x68: Push((int) 532726)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 532727)
0x6e: Push((int) 34279)
0x6f: Push((int) 34202)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 532802)
0x73: Push((int) 34282)
0x74: Push((int) 34278)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x89

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xa7

0x7b: Pop(1)
0x7c: Push((int) 532809)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 532810)
0x82: Push((int) -1)
0x83: Push((int) 34287)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x31b

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x2df

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
0xa9: Call2 0x31b

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
0xb9: Call2 0x2e6

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x2f7

0xc2: Pop(0)
0xc3: Push((int) 34201)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(bool)
0xc7: Stack[-1] = (bool) 0
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x33b

0xcb: Pop(1)
0xcc: Pop(1); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x347

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 1
0xd4: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x335

0xd9: Pop(2)
0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral" // @poff=89
0xdc: Call2 0xa7

0xdd: Pop(1)
0xde: Push((int) 532726)
0xdf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe0: Pop(1)
0xe1: @@@ ClearReplies(); Obj=0 // @poff=116
0xe2: Pop(0)
0xe3: Push((int) 532727)
0xe4: Push((int) 34279)
0xe5: Push((int) 34202)
0xe6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe7: Pop(3)
0xe8: Push((int) 532802)
0xe9: Push((int) 34282)
0xea: Push((int) 34278)
0xeb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral" // @poff=89
0xf0: Call2 0xa7

0xf1: Pop(1)
0xf2: Push((int) 532809)
0xf3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf4: Pop(1)
0xf5: @@@ ClearReplies(); Obj=0 // @poff=116
0xf6: Pop(0)
0xf7: Push((int) 532810)
0xf8: Push((int) -1)
0xf9: Push((int) 34287)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 34279)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 532803)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 532805)
0x10a: Push((int) 34282)
0x10b: Push((int) 34281)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 532804)
0x10f: Push((int) 34577)
0x110: Push((int) 34280)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 34577)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral" // @poff=89
0x119: Call2 0xa7

0x11a: Pop(1)
0x11b: Push((int) 533066)
0x11c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11d: Pop(1)
0x11e: @@@ ClearReplies(); Obj=0 // @poff=116
0x11f: Pop(0)
0x120: Push((int) 533067)
0x121: Push((int) 34580)
0x122: Push((int) 34578)
0x123: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x124: Pop(3)
0x125: Push((int) 533068)
0x126: Push((int) -1)
0x127: Push((int) 34579)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 34580)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral" // @poff=89
0x130: Call2 0xa7

0x131: Pop(1)
0x132: Push((int) 533069)
0x133: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x134: Pop(1)
0x135: @@@ ClearReplies(); Obj=0 // @poff=116
0x136: Pop(0)
0x137: Push((int) 533070)
0x138: Push((int) 34282)
0x139: Push((int) 34581)
0x13a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Push((int) 34282)
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral" // @poff=89
0x142: Call2 0xa7

0x143: Pop(1)
0x144: Push((int) 532806)
0x145: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x146: Pop(1)
0x147: @@@ ClearReplies(); Obj=0 // @poff=116
0x148: Pop(0)
0x149: Push((int) 532808)
0x14a: Push((int) 34288)
0x14b: Push((int) 34285)
0x14c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14d: Pop(3)
0x14e: Push((int) 532807)
0x14f: Push((int) -1)
0x150: Push((int) 34284)
0x151: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 34288)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral" // @poff=89
0x159: Call2 0xa7

0x15a: Pop(1)
0x15b: Push((int) 532811)
0x15c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15d: Pop(1)
0x15e: @@@ ClearReplies(); Obj=0 // @poff=116
0x15f: Pop(0)
0x160: Push((int) 532812)
0x161: Push((int) -1)
0x162: Push((int) 34289)
0x163: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x164: Pop(3)
0x165: Push((int) 532813)
0x166: Push((int) -1)
0x167: Push((int) 34290)
0x168: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16c: PushEmpty(bool)
0x16d: Call2 0x31b

0x16e: Pop(0)
0x16f: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x170: @ lshStopAnimation()
0x171: Pop(0)
0x172: GOTO 0x175

0x173: @ StopAnimation()
0x174: Pop(0)
0x175: Return(); Pop(0)

0x176: GOTO 0xbe

0x177: Return(); Pop(0)

0x178: PushEmpty(float, float)
0x179: Stack[-2] = (int) 300
0x17a: Stack[-1] = (int) 100
0x17b: Call2 0x189

0x17c: Pop(2)
0x17d: Return(); Pop(0)

0x17e: PushEmpty()
0x17f: PushEmpty()
0x180: Call2 0x219

0x181: Pop(0)
0x182: PushEmpty(int, object)
0x183: Stack[-3] = Stack[-1]
0x184: Push(-2, 1); TaskCall(0)
0x185: Call2 0x0

0x186: Pop(-2, 1); TaskReturn
0x187: Pop(2)
0x188: Return(); Pop(0)

0x189: PushEmpty(float, float)
0x18a: PushEmpty(bool)
0x18b: Call2 0x285

0x18c: Pop(0)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: @ Hold()
0x190: Pop(0)
0x191: GOTO 0x18a

0x192: Push((int) 3)
0x193: @ rand(Stack[-2], Stack[-1])
0x194: Pop(1)
0x195: Push((int) 3)
0x196: Pop(1); Push(Stack[-2] + Stack[-1]);
0x197: @ Sleep(Stack[-1])
0x198: Pop(1)
0x199: PushEmpty(float, float)
0x19a: Stack[-6] = Stack[-2]
0x19b: Stack[-5] = Stack[-1]
0x19c: Call2 0x1d8

0x19d: Pop(2)
0x19e: @ sync()
0x19f: Pop(0)
0x1a0: GOTO 0x18a

0x1a1: Return(); Pop(2)

0x1a2: PushEmpty(bool, bool)
0x1a3: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1a4: @ IsLoaded(Stack[-1])
0x1a5: Pop(0)
0x1a6: PushEmpty(bool)
0x1a7: Stack[-1] = (bool) 0
0x1a8: Pop(0); Push((bool) Stack[-2] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: PushEmpty(bool)
0x1ab: Call2 0x1d6

0x1ac: Pop(0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty(object)
0x1b1: Call2 0x2fe

0x1b2: Pop(0)
0x1b3: @ RemoveActor(Stack[-1])
0x1b4: Pop(1)
0x1b5: Return(); Pop(2)

0x1b6: PushEmpty()
0x1b7: Push("cleanup") // @poff=156
0x1b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ba: PushEmpty()
0x1bb: Call2 0x1a2

0x1bc: Pop(0)
0x1bd: Return(); Pop(0)

0x1be: @ StopGroup0()
0x1bf: Pop(0)
0x1c0: @ sync()
0x1c1: Pop(0)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Call2 0x219

0x1c5: Pop(0)
0x1c6: PushEmpty(bool)
0x1c7: Stack[-1] = (bool) 0
0x1c8: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ca: PushEmpty(bool)
0x1cb: Call2 0x1d6

0x1cc: Pop(0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: Stack[-1] = (bool) 1
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d0: PushEmpty(object)
0x1d1: Call2 0x2fe

0x1d2: Pop(0)
0x1d3: @ RemoveActor(Stack[-1])
0x1d4: Pop(1)
0x1d5: Return(); Pop(0)

0x1d6: Stack[-1] = (bool) 1
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty()
0x1d9: PushEmpty(bool)
0x1da: Call2 0x285

0x1db: Pop(0)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Return(); Pop(0)

0x1df: Push("player") // @poff=172
0x1e0: @ FindActor(Stack[-4]T, Stack[-1])
0x1e1: Pop(1)
0x1e2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e4: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1e5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1e6: Push((int) 10)
0x1e7: Push((float)1.0)
0x1e8: @ SetTimer(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: PushEmpty()
0x1eb: Call2 0x227

0x1ec: Pop(0)
0x1ed: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: Push((int) 10)
0x1f0: @ KillTimer(Stack[-1])
0x1f1: Pop(1)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(float, float)
0x1f4: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[-3] = (bool) 0
0x1f7: Return(); Pop(2)

0x1f8: PushEmpty(float, object)
0x1f9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fa: Call2 0x27d

0x1fb: Pop(1)
0x1fc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1fd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x200: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x201: Return(); Pop(2)

0x202: PushEmpty()
0x203: Push((int) 10)
0x204: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x1f3

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: PushEmpty(object)
0x20d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20e: Call2 0x2ec

0x20f: Pop(1)
0x210: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x211: GOTO 0x218

0x212: Push( Stack[2 + Tasks[-1].StackPointer] )
0x213: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x214: Push("head") // @poff=186
0x215: @ UnlookAsync(Stack[-1])
0x216: Pop(1)
0x217: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x218: Return(); Pop(0)

0x219: PushEmpty()
0x21a: Call2 0x278

0x21b: Pop(0)
0x21c: Push((int) 10)
0x21d: @ KillTimer(Stack[-1])
0x21e: Pop(1)
0x21f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x220: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x221: Push("head") // @poff=186
0x222: @ UnlookAsync(Stack[-1])
0x223: Pop(1)
0x224: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x225: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x226: Return(); Pop(0)

0x227: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x228: @ WaitForAnimEnd()
0x229: Pop(0)
0x22a: PushEmpty(bool)
0x22b: Call2 0x285

0x22c: Pop(0)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Return(); Pop(14)

0x230: PushEmpty(int)
0x231: Call2 0x324

0x232: Stack[-1] = Stack[-8]
0x233: Pop(1)
0x234: Stack[-6] = (int) 0
0x235: PushEmpty(bool)
0x236: Stack[-1] = (bool) 0
0x237: Push((int) 5)
0x238: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23a: PushEmpty(bool)
0x23b: Call2 0x285

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: Stack[-1] = (bool) 1
0x23f: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x240: Push((int) 3)
0x241: @ irand(Stack[-6], Stack[-1])
0x242: Pop(1)
0x243: Push((int) 0)
0x244: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x246: Push(Stack[-7])
0x247: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x248: @ irand(Stack[-4], Stack[-7])
0x249: Pop(0)
0x24a: Push("all") // @poff=138
0x24b: PushEmpty(string, int)
0x24c: Stack[-7] = Stack[-1]
0x24d: Call2 0x31d

0x24e: Pop(1)
0x24f: @ PlayAnimation(Stack[-2], Stack[-1])
0x250: Pop(2)
0x251: @ WaitForAnimEnd(Stack[-3])
0x252: Pop(0)
0x253: Pop(0); Push((bool) Stack[-3] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: GOTO 0x273

0x256: GOTO 0x268

0x257: Push((int) 1)
0x258: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x25a: Push((int) 4)
0x25b: @ rand(Stack[-3], Stack[-1])
0x25c: Pop(1)
0x25d: Push((int) 1)
0x25e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25f: @ Sleep(Stack[-1], Stack[-2])
0x260: Pop(1)
0x261: Pop(0); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x273

0x264: GOTO 0x268

0x265: Push(Stack[-6])
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x273

0x268: PushEmpty(bool)
0x269: Call2 0x276

0x26a: Pop(0)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: GOTO 0x273

0x26e: @ ResetAAS()
0x26f: Pop(0)
0x270: Push((int) 1)
0x271: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x272: GOTO 0x235

0x273: @ ResetAAS()
0x274: Pop(0)
0x275: Return(); Pop(14)

0x276: Stack[-1] = (bool) 1
0x277: Return(); Pop(0)

0x278: @ StopAnimation()
0x279: Pop(0)
0x27a: @ StopGroup0()
0x27b: Pop(0)
0x27c: Return(); Pop(0)

0x27d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x27e: @ GetPosition(Stack[-3])
0x27f: Pop(0)
0x280: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x281: Pop(0)
0x282: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x283: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x284: Return(); Pop(6)

0x285: PushEmpty(bool, bool)
0x286: @ IsLoaded(Stack[-1])
0x287: Pop(0)
0x288: Stack[-1] = Stack[-3]
0x289: Return(); Pop(2)

0x28a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28b: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x28c: Pop(0)
0x28d: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x28e: Pop(0)
0x28f: Push(CvectorIndex(Stack[-8], 1))
0x290: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x291: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x292: @ GetPosition(Stack[-7])
0x293: Pop(0)
0x294: @ GetEyesHeight(Stack[-9])
0x295: Pop(0)
0x296: Push(CvectorIndex(Stack[-7], 1))
0x297: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x298: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x299: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x29a: Push(CvectorIndex(Stack[-6], 1))
0x29b: Stack[-1] = (int) 0
0x29c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x29e: Pop(1); Push(Sqrt(Stack[-1]))
0x29f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a0: Stack[-5] = -Stack[-6]; Pop(0);
0x2a1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a2: PushEmpty(cvector, cvector)
0x2a3: Push([0.0, 1.0, 0.0])
0x2a4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a5: Call2 0x304

0x2a6: Pop(1)
0x2a7: Push((int) 25)
0x2a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2aa: Push([0.0, 10.0, 0.0])
0x2ab: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ac: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ad: @ IsOverrideActive(Stack[-2])
0x2ae: Pop(0)
0x2af: Push(Stack[-2])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-21] = (bool) 0
0x2b2: Return(); Pop(18)

0x2b3: @ StopWorld()
0x2b4: Pop(0)
0x2b5: @ CameraTransit(Stack[-3], Stack[-5])
0x2b6: Pop(0)
0x2b7: Push(CvectorIndex(Stack[-4], 0))
0x2b8: Push(CvectorIndex(Stack[-5], 2))
0x2b9: @ Rotate(Stack[-2], Stack[-1])
0x2ba: Pop(2)
0x2bb: PushEmpty(bool)
0x2bc: Call2 0x31b

0x2bd: Pop(0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: GOTO 0x2c8

0x2c0: Push("head") // @poff=186
0x2c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c2: Pop(1)
0x2c3: Push(Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: Push("head") // @poff=186
0x2c6: @ LookAsyncCamera(Stack[-1])
0x2c7: Pop(1)
0x2c8: @ CameraWaitForPlayFinish()
0x2c9: Pop(0)
0x2ca: @ ResumeWorld()
0x2cb: Pop(0)
0x2cc: Stack[-21] = (bool) 1
0x2cd: Return(); Pop(18)

0x2ce: PushEmpty(bool, bool)
0x2cf: @ CameraSwitchToNormal()
0x2d0: Pop(0)
0x2d1: PushEmpty(bool)
0x2d2: Call2 0x31b

0x2d3: Pop(0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: GOTO 0x2de

0x2d6: Push("head") // @poff=186
0x2d7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d8: Pop(1)
0x2d9: Push(Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2db: Push("head") // @poff=186
0x2dc: @ UnlookAsync(Stack[-1])
0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(float, float, float, float)
0x2e0: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2e1: Pop(0)
0x2e2: Push((bool) 0)
0x2e3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(1)
0x2e5: Return(); Pop(4)

0x2e6: PushEmpty(float, float, float, float)
0x2e7: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2e8: Pop(0)
0x2e9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2ea: Pop(0)
0x2eb: Return(); Pop(4)

0x2ec: PushEmpty(float, cvector, float, cvector)
0x2ed: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2ee: Pop(0)
0x2ef: Stack[-1] = [0.0, 0.0, 0.0]
0x2f0: Push(CvectorIndex(Stack[-1], 1))
0x2f1: Stack[-3] = Stack[-1]
0x2f2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f3: Push("head") // @poff=186
0x2f4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f5: Pop(1)
0x2f6: Return(); Pop(4)

0x2f7: PushEmpty(bool)
0x2f8: Call2 0x31b

0x2f9: Pop(0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: @ lshStopSpeech()
0x2fc: Pop(0)
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(object, object)
0x2ff: @ self(Stack[-1])
0x300: Pop(0)
0x301: Stack[-1] = Stack[-3]
0x302: Return(); Pop(2)

0x303: Stack[-1] = 0
0x304: PushEmpty(float, float)
0x305: Pop(0); Push(Stack[-3] | Stack[-3]);
0x306: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x307: Push((float)9.999999974752427e-07)
0x308: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-4] = [0.0, 0.0, 0.0]
0x30b: Return(); Pop(2)

0x30c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30d: Return(); Pop(2)

0x30e: PushEmpty(int, int)
0x30f: @ GetVariable(Stack[-3], Stack[-1])
0x310: Pop(0)
0x311: Stack[-1] = Stack[-4]
0x312: Return(); Pop(2)

0x313: Stack[-1] = (int) 531557
0x314: Return(); Pop(0)

0x315: Stack[-1] = (int) 531556
0x316: Return(); Pop(0)

0x317: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=222
0x318: Return(); Pop(0)

0x319: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=262
0x31a: Return(); Pop(0)

0x31b: Stack[-1] = (bool) 0
0x31c: Return(); Pop(0)

0x31d: PushEmpty(string, string)
0x31e: Stack[-1] = "idle" // @poff=146
0x31f: Push(Stack[-3])
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x322: Stack[-1] = Stack[-4]
0x323: Return(); Pop(2)

0x324: PushEmpty(int, bool, int, bool)
0x325: Stack[-2] = (int) 0
0x326: Push("all") // @poff=138
0x327: PushEmpty(string, int)
0x328: Stack[-5] = Stack[-1]
0x329: Call2 0x31d

0x32a: Pop(1)
0x32b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(2)
0x32d: Pop(0); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x333

0x330: Push((int) 1)
0x331: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x332: GOTO 0x326

0x333: Stack[-2] = Stack[-5]
0x334: Return(); Pop(4)

0x335: PushEmpty()
0x336: Push("ood1SalesmanLaska1") // @poff=306
0x337: Push((int) 1)
0x338: @ SetVariable(Stack[-2], Stack[-1])
0x339: Pop(2)
0x33a: Return(); Pop(0)

0x33b: PushEmpty()
0x33c: PushEmpty(int, string)
0x33d: Stack[-1] = "d1q02" // @poff=344
0x33e: Call2 0x30e

0x33f: Pop(1)
0x340: Push((int) 1000)
0x341: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-2] = (bool) 1
0x344: Return(); Pop(0)

0x345: Stack[-2] = (bool) 0
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: PushEmpty(int, string)
0x349: Stack[-1] = "ood1SalesmanLaska1" // @poff=306
0x34a: Call2 0x30e

0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: Stack[-2] = (bool) 1
0x350: Return(); Pop(0)

0x351: Stack[-2] = (bool) 0
0x352: Return(); Pop(0)

0x353: PushEmpty(int, int)
0x354: Push("branch") // @poff=356
0x355: @ GetVariable(Stack[-1], Stack[-2])
0x356: Pop(1)
0x357: Push((int) 0)
0x358: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: Stack[-3] = (int) 1
0x35b: Return(); Pop(2)

0x35c: GOTO 0x362

0x35d: Push((int) 1)
0x35e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-3] = (int) 2
0x361: Return(); Pop(2)

0x362: Stack[-3] = (int) 3
0x363: Return(); Pop(2)

