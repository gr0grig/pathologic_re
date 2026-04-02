GlobalVarCount = 0

Strings:
	W:Neutral
	W:all
	W:idle
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:cleanup
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	A:HasItem
	W:Gatherer2_
	W:blood
	A:RemoveItemByType
	W:oobSysGatherer2_1
	W:playsound
	W:giveitem
	A:SetReturnValue
	W:grass_savyur
	W:grass_white_plet
	W:branch
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c00650000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c790063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874004861734974656d004700610074006800650072006500720032005f00000062006c006f006f006400000052656d6f76654974656d427954797065006f006f0062005300790073004700610074006800650072006500720032005f003100000070006c006100790073006f0075006e006400000067006900760065006900740065006d00000053657452657475726e56616c756500670072006100730073005f007300610076007900750072000000670072006100730073005f00770068006900740065005f0070006c006500740000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
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
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	ClearSubContainer (1 args)
	AddItem (4 args)

RunOp = 0x2ef
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d2 Vars = (int, int)
	GTASK_5 Vars = (int, int, bool, bool, object, bool, int) Params = 0
		EVENT_0 Op = 0x2fc Vars = (object)
		EVENT_5 Op = 0x333 Vars = ()
		EVENT_26 Op = 0x370 Vars = (string)
		EVENT_6 Op = 0x37d Vars = ()
		EVENT_7 Op = 0x3bc Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x5b6

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0x4cc

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all") // @poff=16
0x12: Push("idle") // @poff=24
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x5b6

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-12] = Stack[-2]
0x2c: Stack[-1] = (float) 110.0
0x2d: Call2 0x444

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x5b0

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x5ae

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x5b2

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x5b4

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x597

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(object, object)
0x58: Stack[-11] = Stack[-2]
0x59: Stack[-6] = Stack[-1]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-10] = Stack[-1]
0x69: Call2 0x488

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x6e: Pop(0)
0x6f: Stack[-2] = Stack[-10]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=0
0x7a: Call2 0xac

0x7b: Pop(1)
0x7c: Push((int) 525391)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=134
0x80: Pop(0)
0x81: Push((int) 525392)
0x82: Push((int) -1)
0x83: Push((int) 26760)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x85: Pop(3)
0x86: Push((int) 539025)
0x87: Push((int) -1)
0x88: Push((int) 40968)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x76

0x8e: PushEmpty(bool)
0x8f: Call2 0x5b6

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x4cc

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all") // @poff=16
0x9e: Push("idle") // @poff=24
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all") // @poff=16
0xa7: Push("idle") // @poff=24
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x5b6

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-3] = Stack[-2]
0xb8: Push("") // @poff=13
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x4d3

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x4e4

0xc7: Pop(0)
0xc8: Push((int) 26759)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral" // @poff=0
0xcd: Call2 0xac

0xce: Pop(1)
0xcf: Push((int) 525391)
0xd0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xd1: Pop(1)
0xd2: @@@ ClearReplies(); Obj=0 // @poff=134
0xd3: Pop(0)
0xd4: Push((int) 525392)
0xd5: Push((int) -1)
0xd6: Push((int) 26760)
0xd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xd8: Pop(3)
0xd9: Push((int) 539025)
0xda: Push((int) -1)
0xdb: Push((int) 40968)
0xdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe0: PushEmpty(bool)
0xe1: Call2 0x5b6

0xe2: Pop(0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe4: @ lshStopAnimation()
0xe5: Pop(0)
0xe6: GOTO 0xe9

0xe7: @ StopAnimation()
0xe8: Pop(0)
0xe9: Return(); Pop(0)

0xea: GOTO 0xc3

0xeb: Return(); Pop(0)

0xec: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xed: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xee: PushEmpty(bool, object, float)
0xef: Stack[-12] = Stack[-2]
0xf0: Stack[-1] = (float) 110.0
0xf1: Call2 0x444

0xf2: Pop(2)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf5: Stack[-10] = (int) -2
0xf6: Return(); Pop(8)

0xf7: @ CreateDialog(Stack[-4])
0xf8: Pop(0)
0xf9: PushEmpty(int)
0xfa: Call2 0x5b0

0xfb: Pop(0)
0xfc: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0xfd: Pop(1)
0xfe: PushEmpty(int)
0xff: Call2 0x5ae

0x100: Pop(0)
0x101: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x102: Pop(1)
0x103: PushEmpty(string)
0x104: Call2 0x5b2

0x105: Pop(0)
0x106: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x107: Pop(1)
0x108: PushEmpty(string)
0x109: Call2 0x5b4

0x10a: Pop(0)
0x10b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x10c: Pop(1)
0x10d: PushEmpty(int)
0x10e: Call2 0x597

0x10f: Pop(0)
0x110: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x111: Pop(1)
0x112: Stack[-2] = (int) -1
0x113: @ IsOverrideActive(Stack[-3])
0x114: Pop(0)
0x115: Push(Stack[-3])
0x116: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x117: Stack[-10] = (int) -2
0x118: Return(); Pop(8)

0x119: @ DoDialog(Stack[-4])
0x11a: Pop(0)
0x11b: PushEmpty(object, object)
0x11c: Stack[-11] = Stack[-2]
0x11d: Stack[-6] = Stack[-1]
0x11e: Push(-2, 4); TaskCall(4)
0x11f: Call2 0x136

0x120: Pop(-2, 4); TaskReturn
0x121: Pop(2)
0x122: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: @ sync()
0x127: Pop(0)
0x128: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x129: Pop(0)
0x12a: GOTO 0x124

0x12b: PushEmpty(object)
0x12c: Stack[-10] = Stack[-1]
0x12d: Call2 0x488

0x12e: Pop(1)
0x12f: @ StopDialog(Stack[-4])
0x130: Pop(0)
0x131: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x132: Pop(0)
0x133: Stack[-2] = Stack[-10]
0x134: Return(); Pop(8)

0x135: Stack[-4] = 0
0x136: PushEmpty()
0x137: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x138: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x139: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x13a: Push((int) 1)
0x13b: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x13c: PushEmpty(bool)
0x13d: Stack[-1] = (bool) 0
0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x55e

0x141: Pop(1)
0x142: Pop(1); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x554

0x147: Pop(1)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral" // @poff=0
0x14e: Call2 0x1bc

0x14f: Pop(1)
0x150: Push((int) 518164)
0x151: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x152: Pop(1)
0x153: @@@ ClearReplies(); Obj=0 // @poff=134
0x154: Pop(0)
0x155: Push((int) 530150)
0x156: Push((int) 31544)
0x157: Push((int) 31543)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x159: Pop(3)
0x15a: Push((int) 530158)
0x15b: Push((int) -1)
0x15c: Push((int) 31551)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x15e: Pop(3)
0x15f: GOTO 0x19e

0x160: PushEmpty(bool)
0x161: Stack[-1] = (bool) 0
0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x55e

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x554

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Stack[-1] = (bool) 1
0x16e: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral" // @poff=0
0x171: Call2 0x1bc

0x172: Pop(1)
0x173: Push((int) 518169)
0x174: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x175: Pop(1)
0x176: @@@ ClearReplies(); Obj=0 // @poff=134
0x177: Pop(0)
0x178: Push((int) 518170)
0x179: Push((int) 19284)
0x17a: Push((int) 19283)
0x17b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x17c: Pop(3)
0x17d: GOTO 0x19e

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral" // @poff=0
0x180: Call2 0x1bc

0x181: Pop(1)
0x182: Push((int) 518174)
0x183: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x184: Pop(1)
0x185: @@@ ClearReplies(); Obj=0 // @poff=134
0x186: Pop(0)
0x187: Push((int) 518175)
0x188: Push((int) -1)
0x189: Push((int) 19288)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x18b: Pop(3)
0x18c: PushEmpty(bool, object)
0x18d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18e: Call2 0x548

0x18f: Pop(1)
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: Push((int) 534605)
0x192: Push((int) 36244)
0x193: Push((int) 36243)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x195: Pop(3)
0x196: Push((int) 518179)
0x197: Push((int) -1)
0x198: Push((int) 19292)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x19a: Pop(3)
0x19b: GOTO 0x19e

0x19c: Return(); Pop(0)

0x19d: GOTO 0x13a

0x19e: PushEmpty(bool)
0x19f: Call2 0x5b6

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a2: @ lshWaitForAnimEnd()
0x1a3: Pop(0)
0x1a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1ac

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a9: Call2 0x4cc

0x1aa: Pop(1)
0x1ab: GOTO 0x1a2

0x1ac: GOTO 0x1bb

0x1ad: Push("all") // @poff=16
0x1ae: Push("idle") // @poff=24
0x1af: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: @ WaitForAnimEnd()
0x1b2: Pop(0)
0x1b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1bb

0x1b6: Push("all") // @poff=16
0x1b7: Push("idle") // @poff=24
0x1b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: GOTO 0x1b1

0x1bb: Return(); Pop(0)

0x1bc: PushEmpty()
0x1bd: PushEmpty(bool)
0x1be: Call2 0x5b6

0x1bf: Pop(0)
0x1c0: Pop(1); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Return(); Pop(0)

0x1c3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(string, bool)
0x1c7: Stack[-3] = Stack[-2]
0x1c8: Push("") // @poff=13
0x1c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-1] = (bool) 0
0x1cc: GOTO 0x1ce

0x1cd: Stack[-1] = (bool) 1
0x1ce: Call2 0x4d3

0x1cf: Pop(2)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: Push((int) 1)
0x1d4: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x1d5: PushEmpty()
0x1d6: Call2 0x4e4

0x1d7: Pop(0)
0x1d8: Push((int) 19285)
0x1d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1db: PushEmpty(object, object)
0x1dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1de: Call2 0x528

0x1df: Pop(2)
0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0x53d

0x1e4: Pop(2)
0x1e5: Push((int) 19288)
0x1e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(object, object)
0x1e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x543

0x1ec: Pop(2)
0x1ed: Push((int) 36243)
0x1ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(object, object)
0x1f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Call2 0x537

0x1f4: Pop(2)
0x1f5: Push((int) 19277)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Call2 0x55e

0x1fd: Pop(1)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x200: PushEmpty(bool, object)
0x201: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x202: Call2 0x554

0x203: Pop(1)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Stack[-1] = (bool) 1
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral" // @poff=0
0x20a: Call2 0x1bc

0x20b: Pop(1)
0x20c: Push((int) 518164)
0x20d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x20e: Pop(1)
0x20f: @@@ ClearReplies(); Obj=0 // @poff=134
0x210: Pop(0)
0x211: Push((int) 530150)
0x212: Push((int) 31544)
0x213: Push((int) 31543)
0x214: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x215: Pop(3)
0x216: Push((int) 530158)
0x217: Push((int) -1)
0x218: Push((int) 31551)
0x219: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: PushEmpty(bool)
0x21d: Stack[-1] = (bool) 0
0x21e: PushEmpty(bool, object)
0x21f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x220: Call2 0x55e

0x221: Pop(1)
0x222: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x554

0x226: Pop(1)
0x227: Pop(1); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: Stack[-1] = (bool) 1
0x22a: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral" // @poff=0
0x22d: Call2 0x1bc

0x22e: Pop(1)
0x22f: Push((int) 518169)
0x230: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x231: Pop(1)
0x232: @@@ ClearReplies(); Obj=0 // @poff=134
0x233: Pop(0)
0x234: Push((int) 518170)
0x235: Push((int) 19284)
0x236: Push((int) 19283)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral" // @poff=0
0x23c: Call2 0x1bc

0x23d: Pop(1)
0x23e: Push((int) 518174)
0x23f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x240: Pop(1)
0x241: @@@ ClearReplies(); Obj=0 // @poff=134
0x242: Pop(0)
0x243: Push((int) 518175)
0x244: Push((int) -1)
0x245: Push((int) 19288)
0x246: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x247: Pop(3)
0x248: PushEmpty(bool, object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call2 0x548

0x24b: Pop(1)
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: Push((int) 534605)
0x24e: Push((int) 36244)
0x24f: Push((int) 36243)
0x250: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x251: Pop(3)
0x252: Push((int) 518179)
0x253: Push((int) -1)
0x254: Push((int) 19292)
0x255: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x256: Pop(3)
0x257: Return(); Pop(0)

0x258: Push((int) 36244)
0x259: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Neutral" // @poff=0
0x25d: Call2 0x1bc

0x25e: Pop(1)
0x25f: Push((int) 534606)
0x260: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x261: Pop(1)
0x262: @@@ ClearReplies(); Obj=0 // @poff=134
0x263: Pop(0)
0x264: Push((int) 534607)
0x265: Push((int) 36246)
0x266: Push((int) 36245)
0x267: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x268: Pop(3)
0x269: Push((int) 534614)
0x26a: Push((int) -1)
0x26b: Push((int) 36252)
0x26c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x26d: Pop(3)
0x26e: Return(); Pop(0)

0x26f: Push((int) 36246)
0x270: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x272: PushEmpty(string)
0x273: Stack[-1] = "Neutral" // @poff=0
0x274: Call2 0x1bc

0x275: Pop(1)
0x276: Push((int) 534608)
0x277: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x278: Pop(1)
0x279: @@@ ClearReplies(); Obj=0 // @poff=134
0x27a: Pop(0)
0x27b: Push((int) 534609)
0x27c: Push((int) -1)
0x27d: Push((int) 36247)
0x27e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x27f: Pop(3)
0x280: Push((int) 534610)
0x281: Push((int) 36249)
0x282: Push((int) 36248)
0x283: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x284: Pop(3)
0x285: Return(); Pop(0)

0x286: Push((int) 36249)
0x287: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x289: PushEmpty(string)
0x28a: Stack[-1] = "Neutral" // @poff=0
0x28b: Call2 0x1bc

0x28c: Pop(1)
0x28d: Push((int) 534611)
0x28e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x28f: Pop(1)
0x290: @@@ ClearReplies(); Obj=0 // @poff=134
0x291: Pop(0)
0x292: Push((int) 534612)
0x293: Push((int) -1)
0x294: Push((int) 36250)
0x295: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x296: Pop(3)
0x297: Push((int) 534613)
0x298: Push((int) -1)
0x299: Push((int) 36251)
0x29a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Push((int) 19284)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Neutral" // @poff=0
0x2a2: Call2 0x1bc

0x2a3: Pop(1)
0x2a4: Push((int) 518171)
0x2a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x2a6: Pop(1)
0x2a7: @@@ ClearReplies(); Obj=0 // @poff=134
0x2a8: Pop(0)
0x2a9: Push((int) 518172)
0x2aa: Push((int) -1)
0x2ab: Push((int) 19285)
0x2ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2ad: Pop(3)
0x2ae: Push((int) 518173)
0x2af: Push((int) -1)
0x2b0: Push((int) 19286)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 31544)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral" // @poff=0
0x2b9: Call2 0x1bc

0x2ba: Pop(1)
0x2bb: Push((int) 530151)
0x2bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x2bd: Pop(1)
0x2be: @@@ ClearReplies(); Obj=0 // @poff=134
0x2bf: Pop(0)
0x2c0: Push((int) 530152)
0x2c1: Push((int) 31546)
0x2c2: Push((int) 31545)
0x2c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2c4: Pop(3)
0x2c5: Push((int) 530156)
0x2c6: Push((int) -1)
0x2c7: Push((int) 31549)
0x2c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 31546)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Neutral" // @poff=0
0x2d0: Call2 0x1bc

0x2d1: Pop(1)
0x2d2: Push((int) 530153)
0x2d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x2d4: Pop(1)
0x2d5: @@@ ClearReplies(); Obj=0 // @poff=134
0x2d6: Pop(0)
0x2d7: Push((int) 530154)
0x2d8: Push((int) -1)
0x2d9: Push((int) 31547)
0x2da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2db: Pop(3)
0x2dc: Push((int) 530155)
0x2dd: Push((int) -1)
0x2de: Push((int) 31548)
0x2df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x5b6

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e7: @ lshStopAnimation()
0x2e8: Pop(0)
0x2e9: GOTO 0x2ec

0x2ea: @ StopAnimation()
0x2eb: Pop(0)
0x2ec: Return(); Pop(0)

0x2ed: GOTO 0x1d3

0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(int)
0x2f0: Call2 0x507

0x2f1: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x2f2: Pop(1)
0x2f3: PushEmpty()
0x2f4: Call2 0x575

0x2f5: Pop(0)
0x2f6: PushEmpty(float, float)
0x2f7: Stack[-2] = (int) 300
0x2f8: Stack[-1] = (int) 100
0x2f9: Call2 0x343

0x2fa: Pop(2)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(int, int)
0x2fd: PushEmpty()
0x2fe: Call2 0x3d3

0x2ff: Pop(0)
0x300: PushEmpty(int)
0x301: Call2 0x5a8

0x302: Pop(0)
0x303: Push((int) 1)
0x304: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x306: PushEmpty(int, object)
0x307: Stack[-5] = Stack[-1]
0x308: Push(-2, 1); TaskCall(3)
0x309: Call2 0xec

0x30a: Pop(-2, 1); TaskReturn
0x30b: Stack[-2] = Stack[-3]
0x30c: Pop(2)
0x30d: GOTO 0x31d

0x30e: PushEmpty(int)
0x30f: Call2 0x5a8

0x310: Pop(0)
0x311: Push((int) 2)
0x312: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x314: PushEmpty(int, object)
0x315: Stack[-5] = Stack[-1]
0x316: Push(-2, 1); TaskCall(1)
0x317: Call2 0x28

0x318: Pop(-2, 1); TaskReturn
0x319: Stack[-2] = Stack[-3]
0x31a: Pop(2)
0x31b: GOTO 0x31d

0x31c: Return(); Pop(2)

0x31d: Push((int) 1000)
0x31e: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0x31f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x320: PushEmpty(bool, object, float)
0x321: Stack[-6] = Stack[-2]
0x322: Stack[-1] = (float) 110.0
0x323: Call2 0x499

0x324: Pop(2)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Return(); Pop(2)

0x328: PushEmpty(object)
0x329: Stack[-4] = Stack[-1]
0x32a: Push(-1, 1); TaskCall(0)
0x32b: Call2 0x0

0x32c: Pop(-1, 1); TaskReturn
0x32d: Pop(1)
0x32e: PushEmpty(object)
0x32f: Stack[-4] = Stack[-1]
0x330: Call2 0x4c8

0x331: Pop(1)
0x332: Return(); Pop(2)

0x333: PushEmpty(int)
0x334: Call2 0x507

0x335: Pop(0)
0x336: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] != Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x338: PushEmpty()
0x339: Call2 0x575

0x33a: Pop(0)
0x33b: PushEmpty(int)
0x33c: Call2 0x507

0x33d: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x33e: Pop(1)
0x33f: PushEmpty()
0x340: Call2 0x378

0x341: Pop(0)
0x342: Return(); Pop(0)

0x343: PushEmpty(float, float)
0x344: PushEmpty(bool)
0x345: Call2 0x43f

0x346: Pop(0)
0x347: Pop(1); Push((bool) Stack[-1] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x349: @ Hold()
0x34a: Pop(0)
0x34b: GOTO 0x344

0x34c: Push((int) 3)
0x34d: @ rand(Stack[-2], Stack[-1])
0x34e: Pop(1)
0x34f: Push((int) 3)
0x350: Pop(1); Push(Stack[-2] + Stack[-1]);
0x351: @ Sleep(Stack[-1])
0x352: Pop(1)
0x353: PushEmpty(float, float)
0x354: Stack[-6] = Stack[-2]
0x355: Stack[-5] = Stack[-1]
0x356: Call2 0x392

0x357: Pop(2)
0x358: @ sync()
0x359: Pop(0)
0x35a: GOTO 0x344

0x35b: Return(); Pop(2)

0x35c: PushEmpty(bool, bool)
0x35d: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x35e: @ IsLoaded(Stack[-1])
0x35f: Pop(0)
0x360: PushEmpty(bool)
0x361: Stack[-1] = (bool) 0
0x362: Pop(0); Push((bool) Stack[-2] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x364: PushEmpty(bool)
0x365: Call2 0x390

0x366: Pop(0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: Stack[-1] = (bool) 1
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: PushEmpty(object)
0x36b: Call2 0x4eb

0x36c: Pop(0)
0x36d: @ RemoveActor(Stack[-1])
0x36e: Pop(1)
0x36f: Return(); Pop(2)

0x370: PushEmpty()
0x371: Push("cleanup") // @poff=156
0x372: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x374: PushEmpty()
0x375: Call2 0x35c

0x376: Pop(0)
0x377: Return(); Pop(0)

0x378: @ StopGroup0()
0x379: Pop(0)
0x37a: @ sync()
0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: Call2 0x3d3

0x37f: Pop(0)
0x380: PushEmpty(bool)
0x381: Stack[-1] = (bool) 0
0x382: Push( Stack[5 + Tasks[-1].StackPointer] )
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: PushEmpty(bool)
0x385: Call2 0x390

0x386: Pop(0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-1] = (bool) 1
0x389: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38a: PushEmpty(object)
0x38b: Call2 0x4eb

0x38c: Pop(0)
0x38d: @ RemoveActor(Stack[-1])
0x38e: Pop(1)
0x38f: Return(); Pop(0)

0x390: Stack[-1] = (bool) 1
0x391: Return(); Pop(0)

0x392: PushEmpty()
0x393: PushEmpty(bool)
0x394: Call2 0x43f

0x395: Pop(0)
0x396: Pop(1); Push((bool) Stack[-1] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Return(); Pop(0)

0x399: Push("player") // @poff=172
0x39a: @ FindActor(Stack[-4]T, Stack[-1])
0x39b: Pop(1)
0x39c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x39d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x39e: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x39f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3a0: Push((int) 10)
0x3a1: Push((float)1.0)
0x3a2: @ SetTimer(Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: PushEmpty()
0x3a5: Call2 0x3e1

0x3a6: Pop(0)
0x3a7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a9: Push((int) 10)
0x3aa: @ KillTimer(Stack[-1])
0x3ab: Pop(1)
0x3ac: Return(); Pop(0)

0x3ad: PushEmpty(float, float)
0x3ae: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-3] = (bool) 0
0x3b1: Return(); Pop(2)

0x3b2: PushEmpty(float, object)
0x3b3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x3b4: Call2 0x437

0x3b5: Pop(1)
0x3b6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3b8: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b9: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x3ba: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x3bb: Return(); Pop(2)

0x3bc: PushEmpty()
0x3bd: Push((int) 10)
0x3be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c0: PushEmpty(bool)
0x3c1: Call2 0x3ad

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c6: PushEmpty(object)
0x3c7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x3c8: Call2 0x4d9

0x3c9: Pop(1)
0x3ca: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3cb: GOTO 0x3d2

0x3cc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ce: Push("head") // @poff=186
0x3cf: @ UnlookAsync(Stack[-1])
0x3d0: Pop(1)
0x3d1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty()
0x3d4: Call2 0x432

0x3d5: Pop(0)
0x3d6: Push((int) 10)
0x3d7: @ KillTimer(Stack[-1])
0x3d8: Pop(1)
0x3d9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3da: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3db: Push("head") // @poff=186
0x3dc: @ UnlookAsync(Stack[-1])
0x3dd: Pop(1)
0x3de: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3df: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x3e2: @ WaitForAnimEnd()
0x3e3: Pop(0)
0x3e4: PushEmpty(bool)
0x3e5: Call2 0x43f

0x3e6: Pop(0)
0x3e7: Pop(1); Push((bool) Stack[-1] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e9: Return(); Pop(14)

0x3ea: PushEmpty(int)
0x3eb: Call2 0x517

0x3ec: Stack[-1] = Stack[-8]
0x3ed: Pop(1)
0x3ee: Stack[-6] = (int) 0
0x3ef: PushEmpty(bool)
0x3f0: Stack[-1] = (bool) 0
0x3f1: Push((int) 5)
0x3f2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f4: PushEmpty(bool)
0x3f5: Call2 0x43f

0x3f6: Pop(0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Stack[-1] = (bool) 1
0x3f9: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x3fa: Push((int) 3)
0x3fb: @ irand(Stack[-6], Stack[-1])
0x3fc: Pop(1)
0x3fd: Push((int) 0)
0x3fe: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x400: Push(Stack[-7])
0x401: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x402: @ irand(Stack[-4], Stack[-7])
0x403: Pop(0)
0x404: Push("all") // @poff=16
0x405: PushEmpty(string, int)
0x406: Stack[-7] = Stack[-1]
0x407: Call2 0x510

0x408: Pop(1)
0x409: @ PlayAnimation(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: @ WaitForAnimEnd(Stack[-3])
0x40c: Pop(0)
0x40d: Pop(0); Push((bool) Stack[-3] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: GOTO 0x42d

0x410: GOTO 0x422

0x411: Push((int) 1)
0x412: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x414: Push((int) 4)
0x415: @ rand(Stack[-3], Stack[-1])
0x416: Pop(1)
0x417: Push((int) 1)
0x418: Pop(1); Push(Stack[-3] + Stack[-1]);
0x419: @ Sleep(Stack[-1], Stack[-2])
0x41a: Pop(1)
0x41b: Pop(0); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: GOTO 0x42d

0x41e: GOTO 0x422

0x41f: Push(Stack[-6])
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: GOTO 0x42d

0x422: PushEmpty(bool)
0x423: Call2 0x430

0x424: Pop(0)
0x425: Pop(1); Push((bool) Stack[-1] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: GOTO 0x42d

0x428: @ ResetAAS()
0x429: Pop(0)
0x42a: Push((int) 1)
0x42b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x42c: GOTO 0x3ef

0x42d: @ ResetAAS()
0x42e: Pop(0)
0x42f: Return(); Pop(14)

0x430: Stack[-1] = (bool) 1
0x431: Return(); Pop(0)

0x432: @ StopAnimation()
0x433: Pop(0)
0x434: @ StopGroup0()
0x435: Pop(0)
0x436: Return(); Pop(0)

0x437: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x438: @ GetPosition(Stack[-3])
0x439: Pop(0)
0x43a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x43b: Pop(0)
0x43c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x43d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x43e: Return(); Pop(6)

0x43f: PushEmpty(bool, bool)
0x440: @ IsLoaded(Stack[-1])
0x441: Pop(0)
0x442: Stack[-1] = Stack[-3]
0x443: Return(); Pop(2)

0x444: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x445: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x446: Pop(0)
0x447: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x448: Pop(0)
0x449: Push(CvectorIndex(Stack[-8], 1))
0x44a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x44b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x44c: @ GetPosition(Stack[-7])
0x44d: Pop(0)
0x44e: @ GetEyesHeight(Stack[-9])
0x44f: Pop(0)
0x450: Push(CvectorIndex(Stack[-7], 1))
0x451: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x452: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x453: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x454: Push(CvectorIndex(Stack[-6], 1))
0x455: Stack[-1] = (int) 0
0x456: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x457: Pop(0); Push(Stack[-6] | Stack[-6]);
0x458: Pop(1); Push(Sqrt(Stack[-1]))
0x459: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x45a: Stack[-5] = -Stack[-6]; Pop(0);
0x45b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x45c: PushEmpty(cvector, cvector)
0x45d: Push([0.0, 1.0, 0.0])
0x45e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x45f: Call2 0x4f1

0x460: Pop(1)
0x461: Push((int) 25)
0x462: Pop(2); Push(Stack[-2] * Stack[-1]);
0x463: Pop(2); Push(Stack[-2] + Stack[-1]);
0x464: Push([0.0, 10.0, 0.0])
0x465: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x466: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x467: @ IsOverrideActive(Stack[-2])
0x468: Pop(0)
0x469: Push(Stack[-2])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-21] = (bool) 0
0x46c: Return(); Pop(18)

0x46d: @ StopWorld()
0x46e: Pop(0)
0x46f: @ CameraTransit(Stack[-3], Stack[-5])
0x470: Pop(0)
0x471: Push(CvectorIndex(Stack[-4], 0))
0x472: Push(CvectorIndex(Stack[-5], 2))
0x473: @ Rotate(Stack[-2], Stack[-1])
0x474: Pop(2)
0x475: PushEmpty(bool)
0x476: Call2 0x5b6

0x477: Pop(0)
0x478: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x479: GOTO 0x482

0x47a: Push("head") // @poff=186
0x47b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x47c: Pop(1)
0x47d: Push(Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x47f: Push("head") // @poff=186
0x480: @ LookAsyncCamera(Stack[-1])
0x481: Pop(1)
0x482: @ CameraWaitForPlayFinish()
0x483: Pop(0)
0x484: @ ResumeWorld()
0x485: Pop(0)
0x486: Stack[-21] = (bool) 1
0x487: Return(); Pop(18)

0x488: PushEmpty(bool, bool)
0x489: @ CameraSwitchToNormal()
0x48a: Pop(0)
0x48b: PushEmpty(bool)
0x48c: Call2 0x5b6

0x48d: Pop(0)
0x48e: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48f: GOTO 0x498

0x490: Push("head") // @poff=186
0x491: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x492: Pop(1)
0x493: Push(Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x495: Push("head") // @poff=186
0x496: @ UnlookAsync(Stack[-1])
0x497: Pop(1)
0x498: Return(); Pop(2)

0x499: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x49a: @@ GetPosition(Stack[-7]); Obj=18 // @poff=196
0x49b: Pop(0)
0x49c: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=208
0x49d: Pop(0)
0x49e: Push(CvectorIndex(Stack[-7], 1))
0x49f: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4a0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4a1: @ GetPosition(Stack[-6])
0x4a2: Pop(0)
0x4a3: @ GetEyesHeight(Stack[-8])
0x4a4: Pop(0)
0x4a5: Push(CvectorIndex(Stack[-6], 1))
0x4a6: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4a7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4a8: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x4a9: Push(CvectorIndex(Stack[-5], 1))
0x4aa: Stack[-1] = (int) 0
0x4ab: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x4ac: Pop(0); Push(Stack[-5] | Stack[-5]);
0x4ad: Pop(1); Push(Sqrt(Stack[-1]))
0x4ae: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x4af: Stack[-4] = -Stack[-5]; Pop(0);
0x4b0: Pop(0); Push(Stack[-5] * Stack[-17]);
0x4b1: Push([0.0, 10.0, 0.0])
0x4b2: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x4b3: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x4b4: @ IsOverrideActive(Stack[-1])
0x4b5: Pop(0)
0x4b6: Push(Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-19] = (bool) 0
0x4b9: Return(); Pop(16)

0x4ba: @ StopWorld()
0x4bb: Pop(0)
0x4bc: @ CameraTransit(Stack[-2], Stack[-4])
0x4bd: Pop(0)
0x4be: Push(CvectorIndex(Stack[-3], 0))
0x4bf: Push(CvectorIndex(Stack[-4], 2))
0x4c0: @ Rotate(Stack[-2], Stack[-1])
0x4c1: Pop(2)
0x4c2: @ CameraWaitForPlayFinish()
0x4c3: Pop(0)
0x4c4: @ ResumeWorld()
0x4c5: Pop(0)
0x4c6: Stack[-19] = (bool) 1
0x4c7: Return(); Pop(16)

0x4c8: PushEmpty()
0x4c9: @ CameraSwitchToNormal()
0x4ca: Pop(0)
0x4cb: Return(); Pop(0)

0x4cc: PushEmpty(float, float, float, float)
0x4cd: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4ce: Pop(0)
0x4cf: Push((bool) 0)
0x4d0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(1)
0x4d2: Return(); Pop(4)

0x4d3: PushEmpty(float, float, float, float)
0x4d4: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4d5: Pop(0)
0x4d6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4d7: Pop(0)
0x4d8: Return(); Pop(4)

0x4d9: PushEmpty(float, cvector, float, cvector)
0x4da: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x4db: Pop(0)
0x4dc: Stack[-1] = [0.0, 0.0, 0.0]
0x4dd: Push(CvectorIndex(Stack[-1], 1))
0x4de: Stack[-3] = Stack[-1]
0x4df: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4e0: Push("head") // @poff=186
0x4e1: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4e2: Pop(1)
0x4e3: Return(); Pop(4)

0x4e4: PushEmpty(bool)
0x4e5: Call2 0x5b6

0x4e6: Pop(0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: @ lshStopSpeech()
0x4e9: Pop(0)
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty(object, object)
0x4ec: @ self(Stack[-1])
0x4ed: Pop(0)
0x4ee: Stack[-1] = Stack[-3]
0x4ef: Return(); Pop(2)

0x4f0: Stack[-1] = 0
0x4f1: PushEmpty(float, float)
0x4f2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4f3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4f4: Push((float)9.999999974752427e-07)
0x4f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-4] = [0.0, 0.0, 0.0]
0x4f8: Return(); Pop(2)

0x4f9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4fa: Return(); Pop(2)

0x4fb: PushEmpty(int, int)
0x4fc: @ GetVariable(Stack[-3], Stack[-1])
0x4fd: Pop(0)
0x4fe: Stack[-1] = Stack[-4]
0x4ff: Return(); Pop(2)

0x500: PushEmpty(int, bool, int, bool)
0x501: @ GetInvItemByName(Stack[-2], Stack[-5])
0x502: Pop(0)
0x503: @@ HasItem(Stack[-2], Stack[-1]); Obj=6 // @poff=222
0x504: Pop(0)
0x505: Stack[-1] = Stack[-7]
0x506: Return(); Pop(4)

0x507: PushEmpty(float, float)
0x508: @ GetGameTime(Stack[-1])
0x509: Pop(0)
0x50a: Push((int) 1)
0x50b: PushEmpty(int)
0x50c: Push((int) 24)
0x50d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x50e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x50f: Return(); Pop(2)

0x510: PushEmpty(string, string)
0x511: Stack[-1] = "idle" // @poff=24
0x512: Push(Stack[-3])
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x515: Stack[-1] = Stack[-4]
0x516: Return(); Pop(2)

0x517: PushEmpty(int, bool, int, bool)
0x518: Stack[-2] = (int) 0
0x519: Push("all") // @poff=16
0x51a: PushEmpty(string, int)
0x51b: Stack[-5] = Stack[-1]
0x51c: Call2 0x510

0x51d: Pop(1)
0x51e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(2)
0x520: Pop(0); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: GOTO 0x526

0x523: Push((int) 1)
0x524: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x525: GOTO 0x519

0x526: Stack[-2] = Stack[-5]
0x527: Return(); Pop(4)

0x528: PushEmpty(int, int, int, int)
0x529: PushEmpty(int)
0x52a: Call2 0x507

0x52b: Stack[-1] = Stack[-3]
0x52c: Pop(1)
0x52d: Push("Gatherer2_") // @poff=230
0x52e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x52f: Push((int) 1)
0x530: @ SetVariable(Stack[-2], Stack[-1])
0x531: Pop(2)
0x532: Push("blood") // @poff=252
0x533: Push((int) 1)
0x534: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1]); Obj=8 // @poff=264
0x535: Pop(2)
0x536: Return(); Pop(4)

0x537: PushEmpty()
0x538: Push("oobSysGatherer2_1") // @poff=281
0x539: Push((int) 1)
0x53a: @ SetVariable(Stack[-2], Stack[-1])
0x53b: Pop(2)
0x53c: Return(); Pop(0)

0x53d: PushEmpty()
0x53e: Push("playsound") // @poff=317
0x53f: Push("giveitem") // @poff=337
0x540: @ TriggerWorld(Stack[-2], Stack[-1])
0x541: Pop(2)
0x542: Return(); Pop(0)

0x543: PushEmpty()
0x544: Push((int) 1000)
0x545: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=355
0x546: Pop(1)
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: PushEmpty(int, string)
0x54a: Stack[-1] = "oobSysGatherer2_1" // @poff=281
0x54b: Call2 0x4fb

0x54c: Pop(1)
0x54d: Push((int) 0)
0x54e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-2] = (bool) 1
0x551: Return(); Pop(0)

0x552: Stack[-2] = (bool) 0
0x553: Return(); Pop(0)

0x554: PushEmpty()
0x555: PushEmpty(bool, object)
0x556: Stack[-3] = Stack[-1]
0x557: Call2 0x569

0x558: Pop(1)
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-2] = (bool) 1
0x55b: Return(); Pop(0)

0x55c: Stack[-2] = (bool) 0
0x55d: Return(); Pop(0)

0x55e: PushEmpty()
0x55f: PushEmpty(bool, object, string)
0x560: Stack[-4] = Stack[-2]
0x561: Stack[-1] = "blood" // @poff=252
0x562: Call2 0x500

0x563: Pop(2)
0x564: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x565: Stack[-2] = (bool) 1
0x566: Return(); Pop(0)

0x567: Stack[-2] = (bool) 0
0x568: Return(); Pop(0)

0x569: PushEmpty(int, int, int, int)
0x56a: PushEmpty(int)
0x56b: Call2 0x507

0x56c: Stack[-1] = Stack[-3]
0x56d: Pop(1)
0x56e: Push("Gatherer2_") // @poff=230
0x56f: Pop(1); Push(Stack[-1] + Stack[-3]);
0x570: @ GetVariable(Stack[-1], Stack[-2])
0x571: Pop(1)
0x572: Push((int) 0)
0x573: Stack[-7] = Stack[-2] != Stack[-1]; Pop(1);
0x574: Return(); Pop(4)

0x575: PushEmpty(bool, int, bool, int)
0x576: Push((int) 0)
0x577: @ ClearSubContainer(Stack[-1])
0x578: Pop(1)
0x579: Push((int) 10)
0x57a: @ irand(Stack[-2], Stack[-1])
0x57b: Pop(1)
0x57c: Push((int) 3)
0x57d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x57e: PushEmpty(int, string)
0x57f: Stack[-1] = "grass_savyur" // @poff=370
0x580: Call2 0x592

0x581: Pop(1)
0x582: Push((int) 0)
0x583: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x584: Pop(2)
0x585: Push((int) 10)
0x586: @ irand(Stack[-2], Stack[-1])
0x587: Pop(1)
0x588: Push((int) 3)
0x589: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x58a: PushEmpty(int, string)
0x58b: Stack[-1] = "grass_white_plet" // @poff=396
0x58c: Call2 0x592

0x58d: Pop(1)
0x58e: Push((int) 0)
0x58f: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x590: Pop(2)
0x591: Return(); Pop(4)

0x592: PushEmpty(int, int)
0x593: @ GetInvItemByName(Stack[-1], Stack[-3])
0x594: Pop(0)
0x595: Stack[-1] = Stack[-4]
0x596: Return(); Pop(2)

0x597: PushEmpty(int, int)
0x598: Push("branch") // @poff=430
0x599: @ GetVariable(Stack[-1], Stack[-2])
0x59a: Pop(1)
0x59b: Push((int) 0)
0x59c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59e: Stack[-3] = (int) 1
0x59f: Return(); Pop(2)

0x5a0: GOTO 0x5a6

0x5a1: Push((int) 1)
0x5a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-3] = (int) 2
0x5a5: Return(); Pop(2)

0x5a6: Stack[-3] = (int) 3
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty(int, int)
0x5a9: Push("branch") // @poff=430
0x5aa: @ GetVariable(Stack[-1], Stack[-2])
0x5ab: Pop(1)
0x5ac: Stack[-1] = Stack[-3]
0x5ad: Return(); Pop(2)

0x5ae: Stack[-1] = (int) 521048
0x5af: Return(); Pop(0)

0x5b0: Stack[-1] = (int) 521047
0x5b1: Return(); Pop(0)

0x5b2: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=444
0x5b3: Return(); Pop(0)

0x5b4: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=484
0x5b5: Return(); Pop(0)

0x5b6: Stack[-1] = (bool) 0
0x5b7: Return(); Pop(0)

