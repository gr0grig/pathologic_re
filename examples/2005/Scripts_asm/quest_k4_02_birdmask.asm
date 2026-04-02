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
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:GetEyesHeight
	W:reputation
	A:add
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:ook4BirdmaskTheater1
	W:k4q02BirdmaskGotoMaria
	W:quest_k4_02
	W:init_theater
	W:k4q02
	W:money
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e00480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479004765744579657348656967687400720065007000750074006100740069006f006e00000061646400750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e00670000006f006f006b00340042006900720064006d00610073006b005400680065006100740065007200310000006b00340071003000320042006900720064006d00610073006b0047006f0074006f004d0061007200690061000000710075006500730074005f006b0034005f0030003200000069006e00690074005f00740068006500610074006500720000006b00340071003000320000006d006f006e00650079000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SetDiarySection (1 args)

RunOp = 0x19d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcb Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1a7 Vars = (object)
		EVENT_7 Op = 0x1dc Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x286

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x34f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x34d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x351

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x353

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x407

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
0x41: Call2 0x2ca

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
0x4f: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x38c

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3b0

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral" // @poff=89
0x61: Call2 0xb5

0x62: Pop(1)
0x63: Push((int) 525749)
0x64: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65: Pop(1)
0x66: @@@ ClearReplies(); Obj=0 // @poff=116
0x67: Pop(0)
0x68: Push((int) 525750)
0x69: Push((int) 27063)
0x6a: Push((int) 27062)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: Push((int) 540951)
0x6e: Push((int) 43036)
0x6f: Push((int) 43035)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x97

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral" // @poff=89
0x75: Call2 0xb5

0x76: Pop(1)
0x77: Push((int) 525753)
0x78: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x79: Pop(1)
0x7a: @@@ ClearReplies(); Obj=0 // @poff=116
0x7b: Pop(0)
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 0
0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x398

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x3a4

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Stack[-1] = (bool) 1
0x89: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8a: Push((int) 525768)
0x8b: Push((int) 27081)
0x8c: Push((int) 27080)
0x8d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8e: Pop(3)
0x8f: Push((int) 525754)
0x90: Push((int) -1)
0x91: Push((int) 27066)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x93: Pop(3)
0x94: GOTO 0x97

0x95: Return(); Pop(0)

0x96: GOTO 0x4e

0x97: PushEmpty(bool)
0x98: Call2 0x355

0x99: Pop(0)
0x9a: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9b: @ lshWaitForAnimEnd()
0x9c: Pop(0)
0x9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: GOTO 0xa5

0xa0: PushEmpty(string)
0xa1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa2: Call2 0x2db

0xa3: Pop(1)
0xa4: GOTO 0x9b

0xa5: GOTO 0xb4

0xa6: Push("all") // @poff=138
0xa7: Push("idle") // @poff=146
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: @ WaitForAnimEnd()
0xab: Pop(0)
0xac: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: GOTO 0xb4

0xaf: Push("all") // @poff=138
0xb0: Push("idle") // @poff=146
0xb1: @ PlayAnimation(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: GOTO 0xaa

0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: PushEmpty(bool)
0xb7: Call2 0x355

0xb8: Pop(0)
0xb9: Pop(1); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(0)

0xbc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Return(); Pop(0)

0xbf: PushEmpty(string, bool)
0xc0: Stack[-3] = Stack[-2]
0xc1: Push("") // @poff=102
0xc2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc4: Stack[-1] = (bool) 0
0xc5: GOTO 0xc7

0xc6: Stack[-1] = (bool) 1
0xc7: Call2 0x2e2

0xc8: Pop(2)
0xc9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Push((int) 1)
0xcd: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0xce: PushEmpty()
0xcf: Call2 0x2f3

0xd0: Pop(0)
0xd1: Push((int) 27064)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x375

0xd8: Pop(2)
0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x385

0xdd: Pop(2)
0xde: Push((int) 43039)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x375

0xe5: Pop(2)
0xe6: Push((int) 27080)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x36f

0xed: Pop(2)
0xee: Push((int) 27082)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x37e

0xf5: Pop(2)
0xf6: Push((int) 27061)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0xf9: PushEmpty(bool)
0xfa: Stack[-1] = (bool) 0
0xfb: PushEmpty(bool, object)
0xfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Call2 0x38c

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call2 0x3b0

0x103: Pop(1)
0x104: Pop(1); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Stack[-1] = (bool) 1
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral" // @poff=89
0x10a: Call2 0xb5

0x10b: Pop(1)
0x10c: Push((int) 525749)
0x10d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10e: Pop(1)
0x10f: @@@ ClearReplies(); Obj=0 // @poff=116
0x110: Pop(0)
0x111: Push((int) 525750)
0x112: Push((int) 27063)
0x113: Push((int) 27062)
0x114: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x115: Pop(3)
0x116: Push((int) 540951)
0x117: Push((int) 43036)
0x118: Push((int) 43035)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral" // @poff=89
0x11e: Call2 0xb5

0x11f: Pop(1)
0x120: Push((int) 525753)
0x121: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x122: Pop(1)
0x123: @@@ ClearReplies(); Obj=0 // @poff=116
0x124: Pop(0)
0x125: PushEmpty(bool)
0x126: Stack[-1] = (bool) 0
0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0x398

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x3a4

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Stack[-1] = (bool) 1
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: Push((int) 525768)
0x134: Push((int) 27081)
0x135: Push((int) 27080)
0x136: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x137: Pop(3)
0x138: Push((int) 525754)
0x139: Push((int) -1)
0x13a: Push((int) 27066)
0x13b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 27081)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral" // @poff=89
0x143: Call2 0xb5

0x144: Pop(1)
0x145: Push((int) 525769)
0x146: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x147: Pop(1)
0x148: @@@ ClearReplies(); Obj=0 // @poff=116
0x149: Pop(0)
0x14a: Push((int) 525770)
0x14b: Push((int) -1)
0x14c: Push((int) 27082)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 43036)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral" // @poff=89
0x155: Call2 0xb5

0x156: Pop(1)
0x157: Push((int) 540952)
0x158: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x159: Pop(1)
0x15a: @@@ ClearReplies(); Obj=0 // @poff=116
0x15b: Pop(0)
0x15c: Push((int) 540953)
0x15d: Push((int) 27063)
0x15e: Push((int) 43037)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 27063)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral" // @poff=89
0x167: Call2 0xb5

0x168: Pop(1)
0x169: Push((int) 525751)
0x16a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16b: Pop(1)
0x16c: @@@ ClearReplies(); Obj=0 // @poff=116
0x16d: Pop(0)
0x16e: Push((int) 529230)
0x16f: Push((int) 30685)
0x170: Push((int) 30684)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 30685)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral" // @poff=89
0x179: Call2 0xb5

0x17a: Pop(1)
0x17b: Push((int) 529231)
0x17c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17d: Pop(1)
0x17e: @@@ ClearReplies(); Obj=0 // @poff=116
0x17f: Pop(0)
0x180: PushEmpty(bool, object)
0x181: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x182: Call2 0x3bc

0x183: Pop(1)
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: Push((int) 525752)
0x186: Push((int) -1)
0x187: Push((int) 27064)
0x188: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x189: Pop(3)
0x18a: Push((int) 540954)
0x18b: Push((int) -1)
0x18c: Push((int) 43039)
0x18d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18e: Pop(3)
0x18f: Return(); Pop(0)

0x190: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x191: PushEmpty(bool)
0x192: Call2 0x355

0x193: Pop(0)
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: @ lshStopAnimation()
0x196: Pop(0)
0x197: GOTO 0x19a

0x198: @ StopAnimation()
0x199: Pop(0)
0x19a: Return(); Pop(0)

0x19b: GOTO 0xcc

0x19c: Return(); Pop(0)

0x19d: PushEmpty(float, float)
0x19e: Stack[-2] = (int) 300
0x19f: Stack[-1] = (int) 100
0x1a0: Call2 0x1b2

0x1a1: Pop(2)
0x1a2: Push((int) 3)
0x1a3: @ Sleep(Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x19d

0x1a6: Return(); Pop(0)

0x1a7: PushEmpty()
0x1a8: PushEmpty()
0x1a9: Call2 0x1f3

0x1aa: Pop(0)
0x1ab: PushEmpty(int, object)
0x1ac: Stack[-3] = Stack[-1]
0x1ad: Push(-2, 1); TaskCall(0)
0x1ae: Call2 0x0

0x1af: Pop(-2, 1); TaskReturn
0x1b0: Pop(2)
0x1b1: Return(); Pop(0)

0x1b2: PushEmpty()
0x1b3: PushEmpty(bool)
0x1b4: Call2 0x281

0x1b5: Pop(0)
0x1b6: Pop(1); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Return(); Pop(0)

0x1b9: Push("player") // @poff=156
0x1ba: @ FindActor(Stack[-4]T, Stack[-1])
0x1bb: Pop(1)
0x1bc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1be: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1bf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1c0: Push((int) 10)
0x1c1: Push((float)1.0)
0x1c2: @ SetTimer(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: PushEmpty()
0x1c5: Call2 0x201

0x1c6: Pop(0)
0x1c7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: Push((int) 10)
0x1ca: @ KillTimer(Stack[-1])
0x1cb: Pop(1)
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty(float, float)
0x1ce: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-3] = (bool) 0
0x1d1: Return(); Pop(2)

0x1d2: PushEmpty(float, object)
0x1d3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d4: Call2 0x257

0x1d5: Pop(1)
0x1d6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1da: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1db: Return(); Pop(2)

0x1dc: PushEmpty()
0x1dd: Push((int) 10)
0x1de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e0: PushEmpty(bool)
0x1e1: Call2 0x1cd

0x1e2: Pop(0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: PushEmpty(object)
0x1e7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e8: Call2 0x2e8

0x1e9: Pop(1)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1eb: GOTO 0x1f2

0x1ec: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ee: Push("head") // @poff=170
0x1ef: @ UnlookAsync(Stack[-1])
0x1f0: Pop(1)
0x1f1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: Call2 0x252

0x1f5: Pop(0)
0x1f6: Push((int) 10)
0x1f7: @ KillTimer(Stack[-1])
0x1f8: Pop(1)
0x1f9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fa: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fb: Push("head") // @poff=170
0x1fc: @ UnlookAsync(Stack[-1])
0x1fd: Pop(1)
0x1fe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x200: Return(); Pop(0)

0x201: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x202: @ WaitForAnimEnd()
0x203: Pop(0)
0x204: PushEmpty(bool)
0x205: Call2 0x281

0x206: Pop(0)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Return(); Pop(14)

0x20a: PushEmpty(int)
0x20b: Call2 0x35e

0x20c: Stack[-1] = Stack[-8]
0x20d: Pop(1)
0x20e: Stack[-6] = (int) 0
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 0
0x211: Push((int) 5)
0x212: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(bool)
0x215: Call2 0x281

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 1
0x219: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x21a: Push((int) 3)
0x21b: @ irand(Stack[-6], Stack[-1])
0x21c: Pop(1)
0x21d: Push((int) 0)
0x21e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x220: Push(Stack[-7])
0x221: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x222: @ irand(Stack[-4], Stack[-7])
0x223: Pop(0)
0x224: Push("all") // @poff=138
0x225: PushEmpty(string, int)
0x226: Stack[-7] = Stack[-1]
0x227: Call2 0x357

0x228: Pop(1)
0x229: @ PlayAnimation(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: @ WaitForAnimEnd(Stack[-3])
0x22c: Pop(0)
0x22d: Pop(0); Push((bool) Stack[-3] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x24d

0x230: GOTO 0x242

0x231: Push((int) 1)
0x232: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x234: Push((int) 4)
0x235: @ rand(Stack[-3], Stack[-1])
0x236: Pop(1)
0x237: Push((int) 1)
0x238: Pop(1); Push(Stack[-3] + Stack[-1]);
0x239: @ Sleep(Stack[-1], Stack[-2])
0x23a: Pop(1)
0x23b: Pop(0); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x24d

0x23e: GOTO 0x242

0x23f: Push(Stack[-6])
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24d

0x242: PushEmpty(bool)
0x243: Call2 0x250

0x244: Pop(0)
0x245: Pop(1); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x24d

0x248: @ ResetAAS()
0x249: Pop(0)
0x24a: Push((int) 1)
0x24b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24c: GOTO 0x20f

0x24d: @ ResetAAS()
0x24e: Pop(0)
0x24f: Return(); Pop(14)

0x250: Stack[-1] = (bool) 1
0x251: Return(); Pop(0)

0x252: @ StopAnimation()
0x253: Pop(0)
0x254: @ StopGroup0()
0x255: Pop(0)
0x256: Return(); Pop(0)

0x257: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x258: @ GetPosition(Stack[-3])
0x259: Pop(0)
0x25a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x25b: Pop(0)
0x25c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x25d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x25e: Return(); Pop(6)

0x25f: PushEmpty(bool, bool)
0x260: Push("HasProperty") // @poff=192
0x261: Push((int) 2)
0x262: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x263: Pop(1); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: Stack[-5] = (bool) 0
0x266: Return(); Pop(2)

0x267: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=216
0x268: Pop(0)
0x269: Stack[-1] = Stack[-5]
0x26a: Return(); Pop(2)

0x26b: PushEmpty(float, float)
0x26c: PushEmpty(bool, object, string)
0x26d: Stack[-10] = Stack[-2]
0x26e: Stack[-9] = Stack[-1]
0x26f: Call2 0x25f

0x270: Pop(2)
0x271: Pop(1); Push((bool) Stack[-1] == 0)
0x272: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x273: Stack[-8] = (bool) 0
0x274: Return(); Pop(2)

0x275: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=228
0x276: Pop(0)
0x277: PushEmpty(float, float, float, float)
0x278: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x279: Stack[-8] = Stack[-2]
0x27a: Stack[-7] = Stack[-1]
0x27b: Call2 0x304

0x27c: Pop(3)
0x27d: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=240
0x27e: Pop(1)
0x27f: Stack[-8] = (bool) 1
0x280: Return(); Pop(2)

0x281: PushEmpty(bool, bool)
0x282: @ IsLoaded(Stack[-1])
0x283: Pop(0)
0x284: Stack[-1] = Stack[-3]
0x285: Return(); Pop(2)

0x286: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x287: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x288: Pop(0)
0x289: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=252
0x28a: Pop(0)
0x28b: Push(CvectorIndex(Stack[-8], 1))
0x28c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x28e: @ GetPosition(Stack[-7])
0x28f: Pop(0)
0x290: @ GetEyesHeight(Stack[-9])
0x291: Pop(0)
0x292: Push(CvectorIndex(Stack[-7], 1))
0x293: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x294: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x295: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x296: Push(CvectorIndex(Stack[-6], 1))
0x297: Stack[-1] = (int) 0
0x298: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x299: Pop(0); Push(Stack[-6] | Stack[-6]);
0x29a: Pop(1); Push(Sqrt(Stack[-1]))
0x29b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x29c: Stack[-5] = -Stack[-6]; Pop(0);
0x29d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x29e: PushEmpty(cvector, cvector)
0x29f: Push([0.0, 1.0, 0.0])
0x2a0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a1: Call2 0x2fa

0x2a2: Pop(1)
0x2a3: Push((int) 25)
0x2a4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a6: Push([0.0, 10.0, 0.0])
0x2a7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a9: @ IsOverrideActive(Stack[-2])
0x2aa: Pop(0)
0x2ab: Push(Stack[-2])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-21] = (bool) 0
0x2ae: Return(); Pop(18)

0x2af: @ StopWorld()
0x2b0: Pop(0)
0x2b1: @ CameraTransit(Stack[-3], Stack[-5])
0x2b2: Pop(0)
0x2b3: Push(CvectorIndex(Stack[-4], 0))
0x2b4: Push(CvectorIndex(Stack[-5], 2))
0x2b5: @ Rotate(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: PushEmpty(bool)
0x2b8: Call2 0x355

0x2b9: Pop(0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c4

0x2bc: Push("head") // @poff=170
0x2bd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2be: Pop(1)
0x2bf: Push(Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c1: Push("head") // @poff=170
0x2c2: @ LookAsyncCamera(Stack[-1])
0x2c3: Pop(1)
0x2c4: @ CameraWaitForPlayFinish()
0x2c5: Pop(0)
0x2c6: @ ResumeWorld()
0x2c7: Pop(0)
0x2c8: Stack[-21] = (bool) 1
0x2c9: Return(); Pop(18)

0x2ca: PushEmpty(bool, bool)
0x2cb: @ CameraSwitchToNormal()
0x2cc: Pop(0)
0x2cd: PushEmpty(bool)
0x2ce: Call2 0x355

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2da

0x2d2: Push("head") // @poff=170
0x2d3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push(Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: Push("head") // @poff=170
0x2d8: @ UnlookAsync(Stack[-1])
0x2d9: Pop(1)
0x2da: Return(); Pop(2)

0x2db: PushEmpty(float, float, float, float)
0x2dc: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2dd: Pop(0)
0x2de: Push((bool) 0)
0x2df: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(1)
0x2e1: Return(); Pop(4)

0x2e2: PushEmpty(float, float, float, float)
0x2e3: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2e4: Pop(0)
0x2e5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2e6: Pop(0)
0x2e7: Return(); Pop(4)

0x2e8: PushEmpty(float, cvector, float, cvector)
0x2e9: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=252
0x2ea: Pop(0)
0x2eb: Stack[-1] = [0.0, 0.0, 0.0]
0x2ec: Push(CvectorIndex(Stack[-1], 1))
0x2ed: Stack[-3] = Stack[-1]
0x2ee: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ef: Push("head") // @poff=170
0x2f0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f1: Pop(1)
0x2f2: Return(); Pop(4)

0x2f3: PushEmpty(bool)
0x2f4: Call2 0x355

0x2f5: Pop(0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: @ lshStopSpeech()
0x2f8: Pop(0)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(float, float)
0x2fb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2fd: Push((float)9.999999974752427e-07)
0x2fe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-4] = [0.0, 0.0, 0.0]
0x301: Return(); Pop(2)

0x302: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x303: Return(); Pop(2)

0x304: PushEmpty()
0x305: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-2] = Stack[-4]
0x308: Return(); Pop(0)

0x309: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: Stack[-1] = Stack[-4]
0x30c: Return(); Pop(0)

0x30d: Stack[-3] = Stack[-4]
0x30e: Return(); Pop(0)

0x30f: PushEmpty(int, int)
0x310: @ GetVariable(Stack[-3], Stack[-1])
0x311: Pop(0)
0x312: Stack[-1] = Stack[-4]
0x313: Return(); Pop(2)

0x314: PushEmpty()
0x315: Pop(0); Push((bool) Stack[-2] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-3] = (bool) 0
0x318: Return(); Pop(0)

0x319: Push((int) 0)
0x31a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31c: Push((int) 8)
0x31d: @ SendWorldWndMessage(Stack[-1])
0x31e: Pop(1)
0x31f: GOTO 0x329

0x320: Push((int) 0)
0x321: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x323: Push((int) 9)
0x324: @ SendWorldWndMessage(Stack[-1])
0x325: Pop(1)
0x326: GOTO 0x329

0x327: Stack[-3] = (bool) 0
0x328: Return(); Pop(0)

0x329: PushEmpty(float)
0x32a: Stack[-2] = Stack[-1]
0x32b: Call2 0x337

0x32c: Pop(1)
0x32d: PushEmpty(bool, object, string, float, float, float)
0x32e: Stack[-8] = Stack[-5]
0x32f: Stack[-4] = "reputation" // @poff=266
0x330: Stack[-7] = Stack[-3]
0x331: Stack[-2] = (int) 0
0x332: Stack[-1] = (int) 1
0x333: Call2 0x26b

0x334: Pop(6)
0x335: Stack[-3] = (bool) 1
0x336: Return(); Pop(0)

0x337: PushEmpty(object, object)
0x338: @ CreateFloatVector(Stack[-1])
0x339: Pop(0)
0x33a: @@ add(Stack[-3]); Obj=1 // @poff=288
0x33b: Pop(0)
0x33c: Push((int) 16)
0x33d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x33e: Pop(1)
0x33f: Return(); Pop(2)

0x340: Stack[-1] = 0
0x341: PushEmpty(object, object)
0x342: @ FindActor(Stack[-1], Stack[-4])
0x343: Pop(0)
0x344: Pop(0); PushNull((bool) Stack[-1] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-5] = (bool) 0
0x347: Return(); Pop(2)

0x348: @ Trigger(Stack[-1], Stack[-3])
0x349: Pop(0)
0x34a: Stack[-5] = (bool) 1
0x34b: Return(); Pop(2)

0x34c: Stack[-1] = 0
0x34d: Stack[-1] = (int) 515571
0x34e: Return(); Pop(0)

0x34f: Stack[-1] = (int) 504029
0x350: Return(); Pop(0)

0x351: Stack[-1] = "ui/NPC_bmask.png" // @poff=292
0x352: Return(); Pop(0)

0x353: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=326
0x354: Return(); Pop(0)

0x355: Stack[-1] = (bool) 0
0x356: Return(); Pop(0)

0x357: PushEmpty(string, string)
0x358: Stack[-1] = "idle" // @poff=146
0x359: Push(Stack[-3])
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x35c: Stack[-1] = Stack[-4]
0x35d: Return(); Pop(2)

0x35e: PushEmpty(int, bool, int, bool)
0x35f: Stack[-2] = (int) 0
0x360: Push("all") // @poff=138
0x361: PushEmpty(string, int)
0x362: Stack[-5] = Stack[-1]
0x363: Call2 0x357

0x364: Pop(1)
0x365: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: Pop(0); Push((bool) Stack[-1] == 0)
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: GOTO 0x36d

0x36a: Push((int) 1)
0x36b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36c: GOTO 0x360

0x36d: Stack[-2] = Stack[-5]
0x36e: Return(); Pop(4)

0x36f: PushEmpty()
0x370: Push("ook4BirdmaskTheater1") // @poff=364
0x371: Push((int) 1)
0x372: @ SetVariable(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: Push("k4q02BirdmaskGotoMaria") // @poff=406
0x377: Push((int) 1)
0x378: @ SetVariable(Stack[-2], Stack[-1])
0x379: Pop(2)
0x37a: PushEmpty()
0x37b: Call2 0x3d1

0x37c: Pop(0)
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: PushEmpty(bool, string, string)
0x380: Stack[-2] = "quest_k4_02" // @poff=452
0x381: Stack[-1] = "init_theater" // @poff=476
0x382: Call2 0x341

0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: PushEmpty(bool, object, float)
0x387: Stack[-5] = Stack[-2]
0x388: Stack[-1] = (float) 0.10000000149011612
0x389: Call2 0x314

0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: PushEmpty()
0x38d: PushEmpty(int, string)
0x38e: Stack[-1] = "k4q02" // @poff=502
0x38f: Call2 0x30f

0x390: Pop(1)
0x391: Push((int) 1)
0x392: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-2] = (bool) 1
0x395: Return(); Pop(0)

0x396: Stack[-2] = (bool) 0
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(int, string)
0x39a: Stack[-1] = "k4q02" // @poff=502
0x39b: Call2 0x30f

0x39c: Pop(1)
0x39d: Push((int) 2)
0x39e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a0: Stack[-2] = (bool) 1
0x3a1: Return(); Pop(0)

0x3a2: Stack[-2] = (bool) 0
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty()
0x3a5: PushEmpty(int, string)
0x3a6: Stack[-1] = "ook4BirdmaskTheater1" // @poff=364
0x3a7: Call2 0x30f

0x3a8: Pop(1)
0x3a9: Push((int) 0)
0x3aa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-2] = (bool) 1
0x3ad: Return(); Pop(0)

0x3ae: Stack[-2] = (bool) 0
0x3af: Return(); Pop(0)

0x3b0: PushEmpty()
0x3b1: PushEmpty(int, string)
0x3b2: Stack[-1] = "k4q02BirdmaskGotoMaria" // @poff=406
0x3b3: Call2 0x30f

0x3b4: Pop(1)
0x3b5: Push((int) 0)
0x3b6: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b8: Stack[-2] = (bool) 1
0x3b9: Return(); Pop(0)

0x3ba: Stack[-2] = (bool) 0
0x3bb: Return(); Pop(0)

0x3bc: PushEmpty()
0x3bd: PushEmpty(bool, object)
0x3be: Stack[-3] = Stack[-1]
0x3bf: Call2 0x3c6

0x3c0: Pop(1)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-2] = (bool) 1
0x3c3: Return(); Pop(0)

0x3c4: Stack[-2] = (bool) 0
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty(float, float)
0x3c7: Push("money") // @poff=514
0x3c8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=228
0x3c9: Pop(1)
0x3ca: Push((int) 500)
0x3cb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-4] = (bool) 1
0x3ce: Return(); Pop(2)

0x3cf: Stack[-4] = (bool) 0
0x3d0: Return(); Pop(2)

0x3d1: PushEmpty(object, object)
0x3d2: Push((int) 380)
0x3d3: Push((int) 2)
0x3d4: Push((int) 525786)
0x3d5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: PushEmpty(bool, object, int)
0x3d8: Stack[-4] = Stack[-2]
0x3d9: Stack[-1] = (int) 378
0x3da: Call2 0x3eb

0x3db: Pop(3)
0x3dc: Return(); Pop(2)

0x3dd: Stack[-1] = 0
0x3de: PushEmpty(object, object)
0x3df: @ GetDiaryRoot(Stack[-1])
0x3e0: Pop(0)
0x3e1: Pop(0); Push((bool) Stack[-1] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e3: Push("Can't retrieve diary root") // @poff=526
0x3e4: @ Trace(Stack[-1])
0x3e5: Pop(1)
0x3e6: Stack[-3] = (bool) 0
0x3e7: Return(); Pop(2)

0x3e8: Stack[-1] = Stack[-3]
0x3e9: Return(); Pop(2)

0x3ea: Stack[-1] = 0
0x3eb: PushEmpty(object, object, int, object, object, int)
0x3ec: PushEmpty(object)
0x3ed: Call2 0x3de

0x3ee: Stack[-1] = Stack[-4]
0x3ef: Pop(1)
0x3f0: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=578
0x3f1: Pop(0)
0x3f2: Pop(0); Push((bool) Stack[-2] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f4: Push("Can't find diary parent with id: ") // @poff=583
0x3f5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f6: @ Trace(Stack[-1])
0x3f7: Pop(1)
0x3f8: Stack[-9] = (bool) 0
0x3f9: Return(); Pop(6)

0x3fa: @@ AddChild(Stack[-8]); Obj=2 // @poff=651
0x3fb: Pop(0)
0x3fc: Push((int) 7)
0x3fd: @ SendWorldWndMessage(Stack[-1])
0x3fe: Pop(1)
0x3ff: @@ GetCategory(Stack[-1]); Obj=8 // @poff=660
0x400: Pop(0)
0x401: @ SetDiarySection(Stack[-1])
0x402: Pop(0)
0x403: Stack[-9] = (bool) 0
0x404: Return(); Pop(6)

0x405: Stack[-2] = 0
0x406: Stack[-3] = 0
0x407: PushEmpty(int, int)
0x408: Push("branch") // @poff=672
0x409: @ GetVariable(Stack[-1], Stack[-2])
0x40a: Pop(1)
0x40b: Push((int) 0)
0x40c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40e: Stack[-3] = (int) 1
0x40f: Return(); Pop(2)

0x410: GOTO 0x416

0x411: Push((int) 1)
0x412: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-3] = (int) 2
0x415: Return(); Pop(2)

0x416: Stack[-3] = (int) 3
0x417: Return(); Pop(2)

