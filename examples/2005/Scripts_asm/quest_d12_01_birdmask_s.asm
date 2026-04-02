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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:ood12BirdmaskS1
	W:quest_d12_01
	W:init_sobor
	W:ood12BirdmaskS2
	W:ood12BirdmaskS3
	W:ood12BirdmaskS4
	W:sobor@door1
	W:branch
	A:add
	W:vol_
	A:size
	A:get
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e00670000006f006f0064003100320042006900720064006d00610073006b00530031000000710075006500730074005f006400310032005f0030003100000069006e00690074005f0073006f0062006f00720000006f006f0064003100320042006900720064006d00610073006b005300320000006f006f0064003100320042006900720064006d00610073006b005300330000006f006f0064003100320042006900720064006d00610073006b0053003400000073006f0062006f007200400064006f006f007200310000006200720061006e006300680000006164640076006f006c005f00000073697a650067657400
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
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x2e6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x104 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2f2 Vars = (object)
		EVENT_7 Op = 0x327 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x3af

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x471

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x46f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x473

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x475

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4f4

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
0x41: Call2 0x3f3

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
0x4f: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x49f

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral" // @poff=89
0x58: Call2 0xee

0x59: Pop(1)
0x5a: Push((int) 535461)
0x5b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5c: Pop(1)
0x5d: @@@ ClearReplies(); Obj=0 // @poff=116
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x4bf

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 539970)
0x65: Push((int) 41937)
0x66: Push((int) 41936)
0x67: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x68: Pop(3)
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x4cb

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 539976)
0x6f: Push((int) 41943)
0x70: Push((int) 41942)
0x71: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72: Pop(3)
0x73: Push((int) 535479)
0x74: Push((int) -1)
0x75: Push((int) 37161)
0x76: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77: Pop(3)
0x78: GOTO 0xd0

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x4a9

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral" // @poff=89
0x81: Call2 0xee

0x82: Pop(1)
0x83: Push((int) 535443)
0x84: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x85: Pop(1)
0x86: @@@ ClearReplies(); Obj=0 // @poff=116
0x87: Pop(0)
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x4d7

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 539954)
0x8e: Push((int) 41921)
0x8f: Push((int) 41920)
0x90: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x91: Pop(3)
0x92: Push((int) 535460)
0x93: Push((int) -1)
0x94: Push((int) 37142)
0x95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x96: Pop(3)
0x97: GOTO 0xd0

0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 0
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0x49f

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x4b3

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call2 0x479

0xaa: Pop(2)
0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0xee

0xae: Pop(1)
0xaf: Push((int) 535485)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 539994)
0xb5: Push((int) 41963)
0xb6: Push((int) 41962)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: GOTO 0xd0

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral" // @poff=89
0xbc: Call2 0xee

0xbd: Pop(1)
0xbe: Push((int) 535487)
0xbf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc0: Pop(1)
0xc1: @@@ ClearReplies(); Obj=0 // @poff=116
0xc2: Pop(0)
0xc3: Push((int) 535488)
0xc4: Push((int) -1)
0xc5: Push((int) 37170)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Push((int) 539997)
0xc9: Push((int) -1)
0xca: Push((int) 41965)
0xcb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcc: Pop(3)
0xcd: GOTO 0xd0

0xce: Return(); Pop(0)

0xcf: GOTO 0x4e

0xd0: PushEmpty(bool)
0xd1: Call2 0x477

0xd2: Pop(0)
0xd3: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd4: @ lshWaitForAnimEnd()
0xd5: Pop(0)
0xd6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: GOTO 0xde

0xd9: PushEmpty(string)
0xda: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdb: Call2 0x404

0xdc: Pop(1)
0xdd: GOTO 0xd4

0xde: GOTO 0xed

0xdf: Push("all") // @poff=138
0xe0: Push("idle") // @poff=146
0xe1: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: @ WaitForAnimEnd()
0xe4: Pop(0)
0xe5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: GOTO 0xed

0xe8: Push("all") // @poff=138
0xe9: Push("idle") // @poff=146
0xea: @ PlayAnimation(Stack[-2], Stack[-1])
0xeb: Pop(2)
0xec: GOTO 0xe3

0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: PushEmpty(bool)
0xf0: Call2 0x477

0xf1: Pop(0)
0xf2: Pop(1); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf4: Return(); Pop(0)

0xf5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Return(); Pop(0)

0xf8: PushEmpty(string, bool)
0xf9: Stack[-3] = Stack[-2]
0xfa: Push("") // @poff=102
0xfb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfd: Stack[-1] = (bool) 0
0xfe: GOTO 0x100

0xff: Stack[-1] = (bool) 1
0x100: Call2 0x40b

0x101: Pop(2)
0x102: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: Push((int) 1)
0x106: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x41c

0x109: Pop(0)
0x10a: Push((int) 41936)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x486

0x111: Pop(2)
0x112: Push((int) 41942)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x48c

0x119: Pop(2)
0x11a: Push((int) 41920)
0x11b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x492

0x121: Pop(2)
0x122: Push((int) 37168)
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0x498

0x129: Pop(2)
0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x47f

0x12e: Pop(2)
0x12f: Push((int) 37143)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x49f

0x135: Pop(1)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0xee

0x13b: Pop(1)
0x13c: Push((int) 535461)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: PushEmpty(bool, object)
0x142: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x143: Call2 0x4bf

0x144: Pop(1)
0x145: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x146: Push((int) 539970)
0x147: Push((int) 41937)
0x148: Push((int) 41936)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x4cb

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 539976)
0x151: Push((int) 41943)
0x152: Push((int) 41942)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x154: Pop(3)
0x155: Push((int) 535479)
0x156: Push((int) -1)
0x157: Push((int) 37161)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x4a9

0x15e: Pop(1)
0x15f: Pop(1); Push((bool) Stack[-1] == 0)
0x160: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral" // @poff=89
0x163: Call2 0xee

0x164: Pop(1)
0x165: Push((int) 535443)
0x166: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x167: Pop(1)
0x168: @@@ ClearReplies(); Obj=0 // @poff=116
0x169: Pop(0)
0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x4d7

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: Push((int) 539954)
0x170: Push((int) 41921)
0x171: Push((int) 41920)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Push((int) 535460)
0x175: Push((int) -1)
0x176: Push((int) 37142)
0x177: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x49f

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x4b3

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(object, object)
0x189: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18b: Call2 0x479

0x18c: Pop(2)
0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Neutral" // @poff=89
0x18f: Call2 0xee

0x190: Pop(1)
0x191: Push((int) 535485)
0x192: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x193: Pop(1)
0x194: @@@ ClearReplies(); Obj=0 // @poff=116
0x195: Pop(0)
0x196: Push((int) 539994)
0x197: Push((int) 41963)
0x198: Push((int) 41962)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral" // @poff=89
0x19e: Call2 0xee

0x19f: Pop(1)
0x1a0: Push((int) 535487)
0x1a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a2: Pop(1)
0x1a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a4: Pop(0)
0x1a5: Push((int) 535488)
0x1a6: Push((int) -1)
0x1a7: Push((int) 37170)
0x1a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a9: Pop(3)
0x1aa: Push((int) 539997)
0x1ab: Push((int) -1)
0x1ac: Push((int) 41965)
0x1ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ae: Pop(3)
0x1af: Return(); Pop(0)

0x1b0: Push((int) 41963)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "Neutral" // @poff=89
0x1b5: Call2 0xee

0x1b6: Pop(1)
0x1b7: Push((int) 539995)
0x1b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b9: Pop(1)
0x1ba: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bb: Pop(0)
0x1bc: Push((int) 535486)
0x1bd: Push((int) -1)
0x1be: Push((int) 37168)
0x1bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 41921)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral" // @poff=89
0x1c7: Call2 0xee

0x1c8: Pop(1)
0x1c9: Push((int) 539955)
0x1ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cb: Pop(1)
0x1cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cd: Pop(0)
0x1ce: Push((int) 539987)
0x1cf: Push((int) 41954)
0x1d0: Push((int) 41953)
0x1d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d2: Pop(3)
0x1d3: Push((int) 539969)
0x1d4: Push((int) -1)
0x1d5: Push((int) 41935)
0x1d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 41954)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral" // @poff=89
0x1de: Call2 0xee

0x1df: Pop(1)
0x1e0: Push((int) 539988)
0x1e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e2: Pop(1)
0x1e3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e4: Pop(0)
0x1e5: Push((int) 539956)
0x1e6: Push((int) 41923)
0x1e7: Push((int) 41922)
0x1e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 41923)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral" // @poff=89
0x1f0: Call2 0xee

0x1f1: Pop(1)
0x1f2: Push((int) 539957)
0x1f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f4: Pop(1)
0x1f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f6: Pop(0)
0x1f7: Push((int) 539958)
0x1f8: Push((int) 41925)
0x1f9: Push((int) 41924)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Push((int) 539989)
0x1fd: Push((int) 41956)
0x1fe: Push((int) 41955)
0x1ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 41956)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral" // @poff=89
0x207: Call2 0xee

0x208: Pop(1)
0x209: Push((int) 539990)
0x20a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20b: Pop(1)
0x20c: @@@ ClearReplies(); Obj=0 // @poff=116
0x20d: Pop(0)
0x20e: Push((int) 539991)
0x20f: Push((int) 41929)
0x210: Push((int) 41957)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Push((int) 539992)
0x214: Push((int) 41927)
0x215: Push((int) 41958)
0x216: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 41925)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral" // @poff=89
0x21e: Call2 0xee

0x21f: Pop(1)
0x220: Push((int) 539959)
0x221: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x222: Pop(1)
0x223: @@@ ClearReplies(); Obj=0 // @poff=116
0x224: Pop(0)
0x225: Push((int) 539960)
0x226: Push((int) 41927)
0x227: Push((int) 41926)
0x228: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 41927)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral" // @poff=89
0x230: Call2 0xee

0x231: Pop(1)
0x232: Push((int) 539961)
0x233: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x234: Pop(1)
0x235: @@@ ClearReplies(); Obj=0 // @poff=116
0x236: Pop(0)
0x237: Push((int) 539962)
0x238: Push((int) 41929)
0x239: Push((int) 41928)
0x23a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23b: Pop(3)
0x23c: Push((int) 539966)
0x23d: Push((int) -1)
0x23e: Push((int) 41932)
0x23f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 41929)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral" // @poff=89
0x247: Call2 0xee

0x248: Pop(1)
0x249: Push((int) 539963)
0x24a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24b: Pop(1)
0x24c: @@@ ClearReplies(); Obj=0 // @poff=116
0x24d: Pop(0)
0x24e: Push((int) 539965)
0x24f: Push((int) -1)
0x250: Push((int) 41931)
0x251: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x252: Pop(3)
0x253: Push((int) 539968)
0x254: Push((int) -1)
0x255: Push((int) 41934)
0x256: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: Push((int) 41943)
0x25a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral" // @poff=89
0x25e: Call2 0xee

0x25f: Pop(1)
0x260: Push((int) 539977)
0x261: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x262: Pop(1)
0x263: @@@ ClearReplies(); Obj=0 // @poff=116
0x264: Pop(0)
0x265: Push((int) 539978)
0x266: Push((int) 41945)
0x267: Push((int) 41944)
0x268: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x269: Pop(3)
0x26a: Push((int) 539984)
0x26b: Push((int) 41951)
0x26c: Push((int) 41950)
0x26d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26e: Pop(3)
0x26f: Return(); Pop(0)

0x270: Push((int) 41951)
0x271: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x273: PushEmpty(string)
0x274: Stack[-1] = "Neutral" // @poff=89
0x275: Call2 0xee

0x276: Pop(1)
0x277: Push((int) 539985)
0x278: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x279: Pop(1)
0x27a: @@@ ClearReplies(); Obj=0 // @poff=116
0x27b: Pop(0)
0x27c: Push((int) 539986)
0x27d: Push((int) -1)
0x27e: Push((int) 41952)
0x27f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 41945)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral" // @poff=89
0x287: Call2 0xee

0x288: Pop(1)
0x289: Push((int) 539979)
0x28a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28b: Pop(1)
0x28c: @@@ ClearReplies(); Obj=0 // @poff=116
0x28d: Pop(0)
0x28e: Push((int) 539980)
0x28f: Push((int) 41947)
0x290: Push((int) 41946)
0x291: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x292: Pop(3)
0x293: Push((int) 539993)
0x294: Push((int) -1)
0x295: Push((int) 41961)
0x296: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 41947)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral" // @poff=89
0x29e: Call2 0xee

0x29f: Pop(1)
0x2a0: Push((int) 539981)
0x2a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a2: Pop(1)
0x2a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a4: Pop(0)
0x2a5: Push((int) 539982)
0x2a6: Push((int) -1)
0x2a7: Push((int) 41948)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: Push((int) 539983)
0x2ab: Push((int) -1)
0x2ac: Push((int) 41949)
0x2ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 41937)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Neutral" // @poff=89
0x2b5: Call2 0xee

0x2b6: Pop(1)
0x2b7: Push((int) 539971)
0x2b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b9: Pop(1)
0x2ba: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bb: Pop(0)
0x2bc: Push((int) 539972)
0x2bd: Push((int) 41939)
0x2be: Push((int) 41938)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c0: Pop(3)
0x2c1: Push((int) 539975)
0x2c2: Push((int) -1)
0x2c3: Push((int) 41941)
0x2c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 41939)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Neutral" // @poff=89
0x2cc: Call2 0xee

0x2cd: Pop(1)
0x2ce: Push((int) 539973)
0x2cf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d0: Pop(1)
0x2d1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d2: Pop(0)
0x2d3: Push((int) 539974)
0x2d4: Push((int) -1)
0x2d5: Push((int) 41940)
0x2d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2da: PushEmpty(bool)
0x2db: Call2 0x477

0x2dc: Pop(0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2de: @ lshStopAnimation()
0x2df: Pop(0)
0x2e0: GOTO 0x2e3

0x2e1: @ StopAnimation()
0x2e2: Pop(0)
0x2e3: Return(); Pop(0)

0x2e4: GOTO 0x105

0x2e5: Return(); Pop(0)

0x2e6: Push((bool) 1)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e8: PushEmpty(float, float)
0x2e9: Stack[-2] = (int) 300
0x2ea: Stack[-1] = (int) 100
0x2eb: Call2 0x2fd

0x2ec: Pop(2)
0x2ed: Push((int) 1)
0x2ee: @ Sleep(Stack[-1])
0x2ef: Pop(1)
0x2f0: GOTO 0x2e6

0x2f1: Return(); Pop(0)

0x2f2: PushEmpty()
0x2f3: PushEmpty()
0x2f4: Call2 0x33e

0x2f5: Pop(0)
0x2f6: PushEmpty(int, object)
0x2f7: Stack[-3] = Stack[-1]
0x2f8: Push(-2, 1); TaskCall(0)
0x2f9: Call2 0x0

0x2fa: Pop(-2, 1); TaskReturn
0x2fb: Pop(2)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty()
0x2fe: PushEmpty(bool)
0x2ff: Call2 0x3aa

0x300: Pop(0)
0x301: Pop(1); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x303: Return(); Pop(0)

0x304: Push("player") // @poff=156
0x305: @ FindActor(Stack[-4]T, Stack[-1])
0x306: Pop(1)
0x307: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x308: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x309: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x30a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x30b: Push((int) 10)
0x30c: Push((float)1.0)
0x30d: @ SetTimer(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: PushEmpty()
0x310: Call2 0x34c

0x311: Pop(0)
0x312: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x314: Push((int) 10)
0x315: @ KillTimer(Stack[-1])
0x316: Pop(1)
0x317: Return(); Pop(0)

0x318: PushEmpty(float, float)
0x319: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-3] = (bool) 0
0x31c: Return(); Pop(2)

0x31d: PushEmpty(float, object)
0x31e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x31f: Call2 0x3a2

0x320: Pop(1)
0x321: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x322: Push( Stack[2 + Tasks[-1].StackPointer] )
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x325: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x326: Return(); Pop(2)

0x327: PushEmpty()
0x328: Push((int) 10)
0x329: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x32b: PushEmpty(bool)
0x32c: Call2 0x318

0x32d: Pop(0)
0x32e: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x331: PushEmpty(object)
0x332: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x333: Call2 0x411

0x334: Pop(1)
0x335: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x336: GOTO 0x33d

0x337: Push( Stack[2 + Tasks[-1].StackPointer] )
0x338: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x339: Push("head") // @poff=170
0x33a: @ UnlookAsync(Stack[-1])
0x33b: Pop(1)
0x33c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: Call2 0x39d

0x340: Pop(0)
0x341: Push((int) 10)
0x342: @ KillTimer(Stack[-1])
0x343: Pop(1)
0x344: Push( Stack[2 + Tasks[-1].StackPointer] )
0x345: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x346: Push("head") // @poff=170
0x347: @ UnlookAsync(Stack[-1])
0x348: Pop(1)
0x349: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x34a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x34b: Return(); Pop(0)

0x34c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x34d: @ WaitForAnimEnd()
0x34e: Pop(0)
0x34f: PushEmpty(bool)
0x350: Call2 0x3aa

0x351: Pop(0)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Return(); Pop(14)

0x355: PushEmpty(int)
0x356: Call2 0x45e

0x357: Stack[-1] = Stack[-8]
0x358: Pop(1)
0x359: Stack[-6] = (int) 0
0x35a: PushEmpty(bool)
0x35b: Stack[-1] = (bool) 0
0x35c: Push((int) 5)
0x35d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35f: PushEmpty(bool)
0x360: Call2 0x3aa

0x361: Pop(0)
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: Stack[-1] = (bool) 1
0x364: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x365: Push((int) 3)
0x366: @ irand(Stack[-6], Stack[-1])
0x367: Pop(1)
0x368: Push((int) 0)
0x369: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x36b: Push(Stack[-7])
0x36c: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x36d: @ irand(Stack[-4], Stack[-7])
0x36e: Pop(0)
0x36f: Push("all") // @poff=138
0x370: PushEmpty(string, int)
0x371: Stack[-7] = Stack[-1]
0x372: Call2 0x457

0x373: Pop(1)
0x374: @ PlayAnimation(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: @ WaitForAnimEnd(Stack[-3])
0x377: Pop(0)
0x378: Pop(0); Push((bool) Stack[-3] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x37a: GOTO 0x398

0x37b: GOTO 0x38d

0x37c: Push((int) 1)
0x37d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37f: Push((int) 4)
0x380: @ rand(Stack[-3], Stack[-1])
0x381: Pop(1)
0x382: Push((int) 1)
0x383: Pop(1); Push(Stack[-3] + Stack[-1]);
0x384: @ Sleep(Stack[-1], Stack[-2])
0x385: Pop(1)
0x386: Pop(0); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: GOTO 0x398

0x389: GOTO 0x38d

0x38a: Push(Stack[-6])
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x398

0x38d: PushEmpty(bool)
0x38e: Call2 0x39b

0x38f: Pop(0)
0x390: Pop(1); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: GOTO 0x398

0x393: @ ResetAAS()
0x394: Pop(0)
0x395: Push((int) 1)
0x396: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x397: GOTO 0x35a

0x398: @ ResetAAS()
0x399: Pop(0)
0x39a: Return(); Pop(14)

0x39b: Stack[-1] = (bool) 1
0x39c: Return(); Pop(0)

0x39d: @ StopAnimation()
0x39e: Pop(0)
0x39f: @ StopGroup0()
0x3a0: Pop(0)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3a3: @ GetPosition(Stack[-3])
0x3a4: Pop(0)
0x3a5: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x3a6: Pop(0)
0x3a7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3a8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3a9: Return(); Pop(6)

0x3aa: PushEmpty(bool, bool)
0x3ab: @ IsLoaded(Stack[-1])
0x3ac: Pop(0)
0x3ad: Stack[-1] = Stack[-3]
0x3ae: Return(); Pop(2)

0x3af: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3b0: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x3b1: Pop(0)
0x3b2: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x3b3: Pop(0)
0x3b4: Push(CvectorIndex(Stack[-8], 1))
0x3b5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3b7: @ GetPosition(Stack[-7])
0x3b8: Pop(0)
0x3b9: @ GetEyesHeight(Stack[-9])
0x3ba: Pop(0)
0x3bb: Push(CvectorIndex(Stack[-7], 1))
0x3bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3bd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3be: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3bf: Push(CvectorIndex(Stack[-6], 1))
0x3c0: Stack[-1] = (int) 0
0x3c1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3c2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3c3: Pop(1); Push(Sqrt(Stack[-1]))
0x3c4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3c5: Stack[-5] = -Stack[-6]; Pop(0);
0x3c6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3c7: PushEmpty(cvector, cvector)
0x3c8: Push([0.0, 1.0, 0.0])
0x3c9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ca: Call2 0x423

0x3cb: Pop(1)
0x3cc: Push((int) 25)
0x3cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cf: Push([0.0, 10.0, 0.0])
0x3d0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3d1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3d2: @ IsOverrideActive(Stack[-2])
0x3d3: Pop(0)
0x3d4: Push(Stack[-2])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-21] = (bool) 0
0x3d7: Return(); Pop(18)

0x3d8: @ StopWorld()
0x3d9: Pop(0)
0x3da: @ CameraTransit(Stack[-3], Stack[-5])
0x3db: Pop(0)
0x3dc: Push(CvectorIndex(Stack[-4], 0))
0x3dd: Push(CvectorIndex(Stack[-5], 2))
0x3de: @ Rotate(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: PushEmpty(bool)
0x3e1: Call2 0x477

0x3e2: Pop(0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: GOTO 0x3ed

0x3e5: Push("head") // @poff=170
0x3e6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3e7: Pop(1)
0x3e8: Push(Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ea: Push("head") // @poff=170
0x3eb: @ LookAsyncCamera(Stack[-1])
0x3ec: Pop(1)
0x3ed: @ CameraWaitForPlayFinish()
0x3ee: Pop(0)
0x3ef: @ ResumeWorld()
0x3f0: Pop(0)
0x3f1: Stack[-21] = (bool) 1
0x3f2: Return(); Pop(18)

0x3f3: PushEmpty(bool, bool)
0x3f4: @ CameraSwitchToNormal()
0x3f5: Pop(0)
0x3f6: PushEmpty(bool)
0x3f7: Call2 0x477

0x3f8: Pop(0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: GOTO 0x403

0x3fb: Push("head") // @poff=170
0x3fc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: Push(Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x400: Push("head") // @poff=170
0x401: @ UnlookAsync(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(2)

0x404: PushEmpty(float, float, float, float)
0x405: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x406: Pop(0)
0x407: Push((bool) 0)
0x408: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(1)
0x40a: Return(); Pop(4)

0x40b: PushEmpty(float, float, float, float)
0x40c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x40d: Pop(0)
0x40e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x40f: Pop(0)
0x410: Return(); Pop(4)

0x411: PushEmpty(float, cvector, float, cvector)
0x412: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x413: Pop(0)
0x414: Stack[-1] = [0.0, 0.0, 0.0]
0x415: Push(CvectorIndex(Stack[-1], 1))
0x416: Stack[-3] = Stack[-1]
0x417: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x418: Push("head") // @poff=170
0x419: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x41a: Pop(1)
0x41b: Return(); Pop(4)

0x41c: PushEmpty(bool)
0x41d: Call2 0x477

0x41e: Pop(0)
0x41f: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x420: @ lshStopSpeech()
0x421: Pop(0)
0x422: Return(); Pop(0)

0x423: PushEmpty(float, float)
0x424: Pop(0); Push(Stack[-3] | Stack[-3]);
0x425: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x426: Push((float)9.999999974752427e-07)
0x427: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x429: Stack[-4] = [0.0, 0.0, 0.0]
0x42a: Return(); Pop(2)

0x42b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42c: Return(); Pop(2)

0x42d: PushEmpty(int, int)
0x42e: @ GetVariable(Stack[-3], Stack[-1])
0x42f: Pop(0)
0x430: Stack[-1] = Stack[-4]
0x431: Return(); Pop(2)

0x432: PushEmpty(object, object)
0x433: @ FindActor(Stack[-1], Stack[-4])
0x434: Pop(0)
0x435: Pop(0); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x437: Push("Door ") // @poff=206
0x438: Pop(1); Push(Stack[-1] + Stack[-5]);
0x439: Push(" not found") // @poff=218
0x43a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43b: @ Trace(Stack[-1])
0x43c: Pop(1)
0x43d: GOTO 0x441

0x43e: Push("locked") // @poff=240
0x43f: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=254
0x440: Pop(1)
0x441: Return(); Pop(2)

0x442: Stack[-1] = 0
0x443: PushEmpty(object, object)
0x444: @ FindActor(Stack[-1], Stack[-4])
0x445: Pop(0)
0x446: Pop(0); PushNull((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-5] = (bool) 0
0x449: Return(); Pop(2)

0x44a: @ Trigger(Stack[-1], Stack[-3])
0x44b: Pop(0)
0x44c: Stack[-5] = (bool) 1
0x44d: Return(); Pop(2)

0x44e: Stack[-1] = 0
0x44f: PushEmpty(float, float)
0x450: @ GetGameTime(Stack[-1])
0x451: Pop(0)
0x452: PushEmpty(int)
0x453: Stack[-2] = Stack[-1]
0x454: Push((int) 24)
0x455: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x456: Return(); Pop(2)

0x457: PushEmpty(string, string)
0x458: Stack[-1] = "idle" // @poff=146
0x459: Push(Stack[-3])
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x45c: Stack[-1] = Stack[-4]
0x45d: Return(); Pop(2)

0x45e: PushEmpty(int, bool, int, bool)
0x45f: Stack[-2] = (int) 0
0x460: Push("all") // @poff=138
0x461: PushEmpty(string, int)
0x462: Stack[-5] = Stack[-1]
0x463: Call2 0x457

0x464: Pop(1)
0x465: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(2)
0x467: Pop(0); Push((bool) Stack[-1] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: GOTO 0x46d

0x46a: Push((int) 1)
0x46b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x46c: GOTO 0x460

0x46d: Stack[-2] = Stack[-5]
0x46e: Return(); Pop(4)

0x46f: Stack[-1] = (int) 515571
0x470: Return(); Pop(0)

0x471: Stack[-1] = (int) 504029
0x472: Return(); Pop(0)

0x473: Stack[-1] = "ui/NPC_bmask.png" // @poff=266
0x474: Return(); Pop(0)

0x475: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=300
0x476: Return(); Pop(0)

0x477: Stack[-1] = (bool) 0
0x478: Return(); Pop(0)

0x479: PushEmpty()
0x47a: Push("ood12BirdmaskS1") // @poff=338
0x47b: Push((int) 1)
0x47c: @ SetVariable(Stack[-2], Stack[-1])
0x47d: Pop(2)
0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: PushEmpty(bool, string, string)
0x481: Stack[-2] = "quest_d12_01" // @poff=370
0x482: Stack[-1] = "init_sobor" // @poff=396
0x483: Call2 0x443

0x484: Pop(3)
0x485: Return(); Pop(0)

0x486: PushEmpty()
0x487: Push("ood12BirdmaskS2") // @poff=418
0x488: Push((int) 1)
0x489: @ SetVariable(Stack[-2], Stack[-1])
0x48a: Pop(2)
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: Push("ood12BirdmaskS3") // @poff=450
0x48e: Push((int) 1)
0x48f: @ SetVariable(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: Push("ood12BirdmaskS4") // @poff=482
0x494: Push((int) 1)
0x495: @ SetVariable(Stack[-2], Stack[-1])
0x496: Pop(2)
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: PushEmpty(string, bool)
0x49a: Stack[-2] = "sobor@door1" // @poff=514
0x49b: Stack[-1] = (bool) 0
0x49c: Call2 0x432

0x49d: Pop(2)
0x49e: Return(); Pop(0)

0x49f: PushEmpty()
0x4a0: PushEmpty(bool, object)
0x4a1: Stack[-3] = Stack[-1]
0x4a2: Call2 0x4e3

0x4a3: Pop(1)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: Stack[-2] = (bool) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty()
0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-3] = Stack[-1]
0x4ac: Call2 0x4e9

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-2] = (bool) 1
0x4b0: Return(); Pop(0)

0x4b1: Stack[-2] = (bool) 0
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: PushEmpty(int, string)
0x4b5: Stack[-1] = "ood12BirdmaskS1" // @poff=338
0x4b6: Call2 0x42d

0x4b7: Pop(1)
0x4b8: Push((int) 0)
0x4b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bb: Stack[-2] = (bool) 1
0x4bc: Return(); Pop(0)

0x4bd: Stack[-2] = (bool) 0
0x4be: Return(); Pop(0)

0x4bf: PushEmpty()
0x4c0: PushEmpty(int, string)
0x4c1: Stack[-1] = "ood12BirdmaskS2" // @poff=418
0x4c2: Call2 0x42d

0x4c3: Pop(1)
0x4c4: Push((int) 0)
0x4c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: Stack[-2] = (bool) 1
0x4c8: Return(); Pop(0)

0x4c9: Stack[-2] = (bool) 0
0x4ca: Return(); Pop(0)

0x4cb: PushEmpty()
0x4cc: PushEmpty(int, string)
0x4cd: Stack[-1] = "ood12BirdmaskS3" // @poff=450
0x4ce: Call2 0x42d

0x4cf: Pop(1)
0x4d0: Push((int) 0)
0x4d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-2] = (bool) 1
0x4d4: Return(); Pop(0)

0x4d5: Stack[-2] = (bool) 0
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: PushEmpty(int, string)
0x4d9: Stack[-1] = "ood12BirdmaskS4" // @poff=482
0x4da: Call2 0x42d

0x4db: Pop(1)
0x4dc: Push((int) 0)
0x4dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-2] = (bool) 1
0x4e0: Return(); Pop(0)

0x4e1: Stack[-2] = (bool) 0
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: PushEmpty(bool)
0x4e5: Call2 0x53d

0x4e6: Stack[-1] = Stack[-3]
0x4e7: Pop(1)
0x4e8: Return(); Pop(0)

0x4e9: PushEmpty()
0x4ea: PushEmpty(int)
0x4eb: Call2 0x44f

0x4ec: Pop(0)
0x4ed: Push((int) 19)
0x4ee: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-2] = (bool) 1
0x4f1: Return(); Pop(0)

0x4f2: Stack[-2] = (bool) 0
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(int, int)
0x4f5: Push("branch") // @poff=538
0x4f6: @ GetVariable(Stack[-1], Stack[-2])
0x4f7: Pop(1)
0x4f8: Push((int) 0)
0x4f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fb: Stack[-3] = (int) 1
0x4fc: Return(); Pop(2)

0x4fd: GOTO 0x503

0x4fe: Push((int) 1)
0x4ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-3] = (int) 2
0x502: Return(); Pop(2)

0x503: Stack[-3] = (int) 3
0x504: Return(); Pop(2)

0x505: PushEmpty()
0x506: Push((int) 6)
0x507: @@ add(Stack[-1]); Obj=4 // @poff=552
0x508: Pop(1)
0x509: Push((int) 26)
0x50a: @@ add(Stack[-1]); Obj=4 // @poff=552
0x50b: Pop(1)
0x50c: Push((int) 2)
0x50d: @@ add(Stack[-1]); Obj=4 // @poff=552
0x50e: Pop(1)
0x50f: Push((int) 22)
0x510: @@ add(Stack[-1]); Obj=4 // @poff=552
0x511: Pop(1)
0x512: Push((bool) 0)
0x513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x515: Push((int) 15)
0x516: @@ add(Stack[-1]); Obj=4 // @poff=552
0x517: Pop(1)
0x518: Push((int) 5)
0x519: @@ add(Stack[-1]); Obj=4 // @poff=552
0x51a: Pop(1)
0x51b: Push((int) 16)
0x51c: @@ add(Stack[-1]); Obj=4 // @poff=552
0x51d: Pop(1)
0x51e: Push((int) 19)
0x51f: @@ add(Stack[-1]); Obj=4 // @poff=552
0x520: Pop(1)
0x521: GOTO 0x528

0x522: Push((int) 0)
0x523: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x525: Push((int) 15)
0x526: @@ add(Stack[-1]); Obj=4 // @poff=552
0x527: Pop(1)
0x528: Return(); Pop(0)

0x529: PushEmpty(int, int)
0x52a: Push("vol_") // @poff=556
0x52b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x52c: @ GetVariable(Stack[-1], Stack[-2])
0x52d: Pop(1)
0x52e: Push((int) 4)
0x52f: Pop(1); Push(Stack[-2] & Stack[-1]);
0x530: Push((int) 0)
0x531: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x532: Return(); Pop(2)

0x533: PushEmpty(int, int)
0x534: Push("vol_") // @poff=556
0x535: Pop(1); Push(Stack[-1] + Stack[-4]);
0x536: @ GetVariable(Stack[-1], Stack[-2])
0x537: Pop(1)
0x538: Push((int) 16)
0x539: Pop(1); Push(Stack[-2] & Stack[-1]);
0x53a: Push((int) 0)
0x53b: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x53c: Return(); Pop(2)

0x53d: PushEmpty(object, int, int, int, object, int, int, int)
0x53e: @ CreateIntVector(Stack[-4])
0x53f: Pop(0)
0x540: PushEmpty(object, bool, int)
0x541: Stack[-7] = Stack[-3]
0x542: Stack[-2] = (bool) 0
0x543: Stack[-1] = (int) -1
0x544: Call2 0x505

0x545: Pop(3)
0x546: @@ size(Stack[-3]); Obj=4 // @poff=566
0x547: Pop(0)
0x548: Stack[-2] = (int) 0
0x549: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x54a: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x54b: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=571
0x54c: Pop(0)
0x54d: PushEmpty(bool)
0x54e: Stack[-1] = (bool) 1
0x54f: PushEmpty(bool, int)
0x550: Stack[-4] = Stack[-1]
0x551: Call2 0x533

0x552: Pop(1)
0x553: IF (Stack[-1] == 1) GOTO 0x55a; Pop(1)

0x554: PushEmpty(bool, int)
0x555: Stack[-4] = Stack[-1]
0x556: Call2 0x529

0x557: Pop(1)
0x558: IF (Stack[-1] == 1) GOTO 0x55a; Pop(1)

0x559: Stack[-1] = (bool) 0
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: Stack[-9] = (bool) 0
0x55c: Return(); Pop(8)

0x55d: Push((int) 1)
0x55e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x55f: GOTO 0x549

0x560: Stack[-9] = (bool) 1
0x561: Return(); Pop(8)

0x562: Stack[-4] = 0
