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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Julia.png
	W:ui/NPC_Julia_b.png
	W:b11q01KnowWhoKilled
	W:b11q01VictimChoosed
	W:b11q01KillJulia
	W:volonteers_danko
	W:kill
	W:julia
	W:Julia is dead
	W:oob11Julia1
	W:b11q01
	W:quest_b11_01
	W:open_well_exit
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004a0075006c00690061002e0070006e0067000000750069002f004e00500043005f004a0075006c00690061005f0062002e0070006e00670000006200310031007100300031004b006e006f007700570068006f004b0069006c006c00650064000000620031003100710030003100560069006300740069006d00430068006f006f0073006500640000006200310031007100300031004b0069006c006c004a0075006c0069006100000076006f006c006f006e00740065006500720073005f00640061006e006b006f0000006b0069006c006c0000006a0075006c006900610000004a0075006c00690061002000690073002000640065006100640000006f006f006200310031004a0075006c0069006100310000006200310031007100300031000000710075006500730074005f006200310031005f003000310000006f00700065006e005f00770065006c006c005f0065007800690074000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
// @pool_encoding:utf8

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x252
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf0 Vars = (int, int)
	GTASK_3  Params = 0
		EVENT_6 Op = 0x266 Vars = ()
		EVENT_0 Op = 0x26c Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x28f

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x396

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x2e9

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x294

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x3ce

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x3cc

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x3d0

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x3d2

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x45d

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-11] = Stack[-2]
0x45: Stack[-6] = Stack[-1]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-10] = Stack[-1]
0x55: Call2 0x2d8

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a: Pop(0)
0x5b: Stack[-2] = Stack[-10]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x403

0x69: Pop(1)
0x6a: Pop(1); Push((bool) Stack[-1] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x40f

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x73: PushEmpty(object, object)
0x74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x3f2

0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xda

0x7b: Pop(1)
0x7c: Push((int) 522023)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 523350)
0x82: Push((int) 24567)
0x83: Push((int) 24566)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0xbc

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x403

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = "Neutral" // @poff=89
0x8f: Call2 0xda

0x90: Pop(1)
0x91: Push((int) 522028)
0x92: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x93: Pop(1)
0x94: @@@ ClearReplies(); Obj=0 // @poff=116
0x95: Pop(0)
0x96: Push((int) 522029)
0x97: Push((int) -1)
0x98: Push((int) 23199)
0x99: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9a: Pop(3)
0x9b: Push((int) 522030)
0x9c: Push((int) -1)
0x9d: Push((int) 23200)
0x9e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9f: Pop(3)
0xa0: GOTO 0xbc

0xa1: PushEmpty(string)
0xa2: Stack[-1] = "Neutral" // @poff=89
0xa3: Call2 0xda

0xa4: Pop(1)
0xa5: Push((int) 522031)
0xa6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa7: Pop(1)
0xa8: @@@ ClearReplies(); Obj=0 // @poff=116
0xa9: Pop(0)
0xaa: Push((int) 522032)
0xab: Push((int) -1)
0xac: Push((int) 23202)
0xad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xae: Pop(3)
0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call2 0x41b

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: Push((int) 523383)
0xb5: Push((int) -1)
0xb6: Push((int) 24601)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: GOTO 0xbc

0xba: Return(); Pop(0)

0xbb: GOTO 0x62

0xbc: PushEmpty(bool)
0xbd: Call2 0x3d4

0xbe: Pop(0)
0xbf: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc0: @ lshWaitForAnimEnd()
0xc1: Pop(0)
0xc2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: GOTO 0xca

0xc5: PushEmpty(string)
0xc6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc7: Call2 0x373

0xc8: Pop(1)
0xc9: GOTO 0xc0

0xca: GOTO 0xd9

0xcb: Push("all") // @poff=138
0xcc: Push("idle") // @poff=146
0xcd: @ PlayAnimation(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: @ WaitForAnimEnd()
0xd0: Pop(0)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd9

0xd4: Push("all") // @poff=138
0xd5: Push("idle") // @poff=146
0xd6: @ PlayAnimation(Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: GOTO 0xcf

0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: PushEmpty(bool)
0xdc: Call2 0x3d4

0xdd: Pop(0)
0xde: Pop(1); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Return(); Pop(0)

0xe1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Return(); Pop(0)

0xe4: PushEmpty(string, bool)
0xe5: Stack[-3] = Stack[-2]
0xe6: Push("") // @poff=102
0xe7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe9: Stack[-1] = (bool) 0
0xea: GOTO 0xec

0xeb: Stack[-1] = (bool) 1
0xec: Call2 0x37a

0xed: Pop(2)
0xee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xef: Return(); Pop(0)

0xf0: PushEmpty()
0xf1: Push((int) 1)
0xf2: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0xf3: PushEmpty()
0xf4: Call2 0x38f

0xf5: Pop(0)
0xf6: Push((int) 23196)
0xf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call2 0x3df

0xfd: Pop(2)
0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x3f8

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x3d6

0x107: Pop(2)
0x108: Push((int) 23199)
0x109: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call2 0x3df

0x10f: Pop(2)
0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x3f8

0x114: Pop(2)
0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x3d6

0x119: Pop(2)
0x11a: Push((int) 23193)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x11d: PushEmpty(bool)
0x11e: Stack[-1] = (bool) 0
0x11f: PushEmpty(bool, object)
0x120: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x121: Call2 0x403

0x122: Pop(1)
0x123: Pop(1); Push((bool) Stack[-1] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call2 0x40f

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x12a: Stack[-1] = (bool) 1
0x12b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call2 0x3f2

0x130: Pop(2)
0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral" // @poff=89
0x133: Call2 0xda

0x134: Pop(1)
0x135: Push((int) 522023)
0x136: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x137: Pop(1)
0x138: @@@ ClearReplies(); Obj=0 // @poff=116
0x139: Pop(0)
0x13a: Push((int) 523350)
0x13b: Push((int) 24567)
0x13c: Push((int) 24566)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0x403

0x143: Pop(1)
0x144: Pop(1); Push((bool) Stack[-1] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0xda

0x149: Pop(1)
0x14a: Push((int) 522028)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: Push((int) 522029)
0x150: Push((int) -1)
0x151: Push((int) 23199)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: Push((int) 522030)
0x155: Push((int) -1)
0x156: Push((int) 23200)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral" // @poff=89
0x15c: Call2 0xda

0x15d: Pop(1)
0x15e: Push((int) 522031)
0x15f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x160: Pop(1)
0x161: @@@ ClearReplies(); Obj=0 // @poff=116
0x162: Pop(0)
0x163: Push((int) 522032)
0x164: Push((int) -1)
0x165: Push((int) 23202)
0x166: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x167: Pop(3)
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0x41b

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: Push((int) 523383)
0x16e: Push((int) -1)
0x16f: Push((int) 24601)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 24567)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral" // @poff=89
0x178: Call2 0xda

0x179: Pop(1)
0x17a: Push((int) 523351)
0x17b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17c: Pop(1)
0x17d: @@@ ClearReplies(); Obj=0 // @poff=116
0x17e: Pop(0)
0x17f: Push((int) 523352)
0x180: Push((int) 24569)
0x181: Push((int) 24568)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x183: Pop(3)
0x184: Push((int) 523360)
0x185: Push((int) 24577)
0x186: Push((int) 24576)
0x187: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x188: Pop(3)
0x189: Push((int) 523369)
0x18a: Push((int) 24586)
0x18b: Push((int) 24585)
0x18c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 24586)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral" // @poff=89
0x194: Call2 0xda

0x195: Pop(1)
0x196: Push((int) 523370)
0x197: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x198: Pop(1)
0x199: @@@ ClearReplies(); Obj=0 // @poff=116
0x19a: Pop(0)
0x19b: Push((int) 523371)
0x19c: Push((int) 24588)
0x19d: Push((int) 24587)
0x19e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Neutral" // @poff=89
0x1a3: Call2 0xda

0x1a4: Pop(1)
0x1a5: Push((int) 523374)
0x1a6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a7: Pop(1)
0x1a8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a9: Pop(0)
0x1aa: Push((int) 523375)
0x1ab: Push((int) 24582)
0x1ac: Push((int) 24592)
0x1ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ae: Pop(3)
0x1af: Return(); Pop(0)

0x1b0: Push((int) 24588)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "Neutral" // @poff=89
0x1b5: Call2 0xda

0x1b6: Pop(1)
0x1b7: Push((int) 523372)
0x1b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b9: Pop(1)
0x1ba: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bb: Pop(0)
0x1bc: Push((int) 523373)
0x1bd: Push((int) 24582)
0x1be: Push((int) 24589)
0x1bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 24577)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral" // @poff=89
0x1c7: Call2 0xda

0x1c8: Pop(1)
0x1c9: Push((int) 523361)
0x1ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cb: Pop(1)
0x1cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cd: Pop(0)
0x1ce: Push((int) 523362)
0x1cf: Push((int) 24579)
0x1d0: Push((int) 24578)
0x1d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 24579)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral" // @poff=89
0x1d9: Call2 0xda

0x1da: Pop(1)
0x1db: Push((int) 523363)
0x1dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1dd: Pop(1)
0x1de: @@@ ClearReplies(); Obj=0 // @poff=116
0x1df: Pop(0)
0x1e0: Push((int) 523364)
0x1e1: Push((int) 24573)
0x1e2: Push((int) 24580)
0x1e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e4: Pop(3)
0x1e5: Push((int) 523365)
0x1e6: Push((int) 24582)
0x1e7: Push((int) 24581)
0x1e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 24582)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral" // @poff=89
0x1f0: Call2 0xda

0x1f1: Pop(1)
0x1f2: Push((int) 523366)
0x1f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f4: Pop(1)
0x1f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f6: Pop(0)
0x1f7: Push((int) 523367)
0x1f8: Push((int) 24573)
0x1f9: Push((int) 24583)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Push((int) 523368)
0x1fd: Push((int) 24573)
0x1fe: Push((int) 24584)
0x1ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 24569)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral" // @poff=89
0x207: Call2 0xda

0x208: Pop(1)
0x209: Push((int) 523353)
0x20a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20b: Pop(1)
0x20c: @@@ ClearReplies(); Obj=0 // @poff=116
0x20d: Pop(0)
0x20e: Push((int) 523354)
0x20f: Push((int) 24571)
0x210: Push((int) 24570)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Return(); Pop(0)

0x214: Push((int) 24571)
0x215: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x217: PushEmpty(string)
0x218: Stack[-1] = "Neutral" // @poff=89
0x219: Call2 0xda

0x21a: Pop(1)
0x21b: Push((int) 523355)
0x21c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21d: Pop(1)
0x21e: @@@ ClearReplies(); Obj=0 // @poff=116
0x21f: Pop(0)
0x220: Push((int) 523356)
0x221: Push((int) 24573)
0x222: Push((int) 24572)
0x223: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x224: Pop(3)
0x225: Return(); Pop(0)

0x226: Push((int) 24573)
0x227: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x229: PushEmpty(string)
0x22a: Stack[-1] = "Neutral" // @poff=89
0x22b: Call2 0xda

0x22c: Pop(1)
0x22d: Push((int) 523357)
0x22e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22f: Pop(1)
0x230: @@@ ClearReplies(); Obj=0 // @poff=116
0x231: Pop(0)
0x232: Push((int) 522026)
0x233: Push((int) -1)
0x234: Push((int) 23196)
0x235: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x236: Pop(3)
0x237: Push((int) 523359)
0x238: Push((int) -1)
0x239: Push((int) 24575)
0x23a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23b: Pop(3)
0x23c: Return(); Pop(0)

0x23d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x23e: PushEmpty(bool)
0x23f: Call2 0x3d4

0x240: Pop(0)
0x241: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x242: @ lshStopAnimation()
0x243: Pop(0)
0x244: GOTO 0x247

0x245: @ StopAnimation()
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: GOTO 0xf1

0x249: Return(); Pop(0)

0x24a: PushEmpty()
0x24b: PushEmpty(int, object)
0x24c: Stack[-3] = Stack[-1]
0x24d: Push(-2, 1); TaskCall(1)
0x24e: Call2 0xd

0x24f: Pop(-2, 1); TaskReturn
0x250: Pop(2)
0x251: Return(); Pop(0)

0x252: PushEmpty(bool)
0x253: Call2 0x28f

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: PushEmpty()
0x258: Push(-0, 0); TaskCall(0)
0x259: Call2 0x0

0x25a: Pop(-0, 0); TaskReturn
0x25b: Pop(0)
0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral" // @poff=89
0x25e: Call2 0x373

0x25f: Pop(1)
0x260: @ lshWaitForAnimEnd()
0x261: Pop(0)
0x262: GOTO 0x25c

0x263: @ Hold()
0x264: Pop(0)
0x265: Return(); Pop(0)

0x266: PushEmpty()
0x267: Push(-0, 0); TaskCall(0)
0x268: Call2 0x0

0x269: Pop(-0, 0); TaskReturn
0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(bool, bool)
0x26d: @ IsOverrideActive(Stack[-1])
0x26e: Pop(0)
0x26f: Pop(0); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x271: EventDisable(0)
0x272: PushEmpty(bool, object)
0x273: Stack[-5] = Stack[-1]
0x274: Call2 0x286

0x275: Pop(2)
0x276: EventEnable(0)
0x277: PushEmpty(object)
0x278: Stack[-4] = Stack[-1]
0x279: Call2 0x24a

0x27a: Pop(1)
0x27b: Return(); Pop(2)

0x27c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x27d: @ GetPosition(Stack[-3])
0x27e: Pop(0)
0x27f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x280: Push(CvectorIndex(Stack[-2], 0))
0x281: Push(CvectorIndex(Stack[-3], 2))
0x282: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x283: Pop(2)
0x284: Stack[-1] = Stack[-8]
0x285: Return(); Pop(6)

0x286: PushEmpty(cvector, cvector)
0x287: @@ GetPosition(Stack[-1]); Obj=3 // @poff=156
0x288: Pop(0)
0x289: PushEmpty(bool, cvector)
0x28a: Stack[-3] = Stack[-1]
0x28b: Call2 0x27c

0x28c: Stack[-2] = Stack[-6]
0x28d: Pop(2)
0x28e: Return(); Pop(2)

0x28f: PushEmpty(bool, bool)
0x290: @ IsLoaded(Stack[-1])
0x291: Pop(0)
0x292: Stack[-1] = Stack[-3]
0x293: Return(); Pop(2)

0x294: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x295: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x296: Pop(0)
0x297: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x298: Pop(0)
0x299: Push(CvectorIndex(Stack[-8], 1))
0x29a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29c: @ GetPosition(Stack[-7])
0x29d: Pop(0)
0x29e: @ GetEyesHeight(Stack[-9])
0x29f: Pop(0)
0x2a0: Push(CvectorIndex(Stack[-7], 1))
0x2a1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a4: Push(CvectorIndex(Stack[-6], 1))
0x2a5: Stack[-1] = (int) 0
0x2a6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a8: Pop(1); Push(Sqrt(Stack[-1]))
0x2a9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2aa: Stack[-5] = -Stack[-6]; Pop(0);
0x2ab: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ac: PushEmpty(cvector, cvector)
0x2ad: Push([0.0, 1.0, 0.0])
0x2ae: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2af: Call2 0x39c

0x2b0: Pop(1)
0x2b1: Push((int) 25)
0x2b2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b4: Push([0.0, 10.0, 0.0])
0x2b5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b7: @ IsOverrideActive(Stack[-2])
0x2b8: Pop(0)
0x2b9: Push(Stack[-2])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-21] = (bool) 0
0x2bc: Return(); Pop(18)

0x2bd: @ StopWorld()
0x2be: Pop(0)
0x2bf: @ CameraTransit(Stack[-3], Stack[-5])
0x2c0: Pop(0)
0x2c1: Push(CvectorIndex(Stack[-4], 0))
0x2c2: Push(CvectorIndex(Stack[-5], 2))
0x2c3: @ Rotate(Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: PushEmpty(bool)
0x2c6: Call2 0x3d4

0x2c7: Pop(0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2d2

0x2ca: Push("head") // @poff=182
0x2cb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cc: Pop(1)
0x2cd: Push(Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cf: Push("head") // @poff=182
0x2d0: @ LookAsyncCamera(Stack[-1])
0x2d1: Pop(1)
0x2d2: @ CameraWaitForPlayFinish()
0x2d3: Pop(0)
0x2d4: @ ResumeWorld()
0x2d5: Pop(0)
0x2d6: Stack[-21] = (bool) 1
0x2d7: Return(); Pop(18)

0x2d8: PushEmpty(bool, bool)
0x2d9: @ CameraSwitchToNormal()
0x2da: Pop(0)
0x2db: PushEmpty(bool)
0x2dc: Call2 0x3d4

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2e8

0x2e0: Push("head") // @poff=182
0x2e1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e2: Pop(1)
0x2e3: Push(Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e5: Push("head") // @poff=182
0x2e6: @ UnlookAsync(Stack[-1])
0x2e7: Pop(1)
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(int, int, int, int)
0x2ea: Push("voice_common") // @poff=192
0x2eb: @ GetVariable(Stack[-1], Stack[-3])
0x2ec: Pop(1)
0x2ed: Push(Stack[-2])
0x2ee: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x2ef: PushEmpty(bool, object)
0x2f0: Stack[-7] = Stack[-1]
0x2f1: Call2 0x323

0x2f2: Pop(1)
0x2f3: Pop(1); Push((bool) Stack[-1] == 0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f5: PushEmpty(bool, object)
0x2f6: Stack[-7] = Stack[-1]
0x2f7: Call2 0x348

0x2f8: Pop(1)
0x2f9: Pop(1); Push((bool) Stack[-1] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-6] = (bool) 0
0x2fc: Return(); Pop(4)

0x2fd: Push((int) 2)
0x2fe: @ irand(Stack[-2], Stack[-1])
0x2ff: Pop(1)
0x300: Push(Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x302: Push("voice_common") // @poff=192
0x303: Push((int) 1)
0x304: Pop(1); Push(Stack[-4] + Stack[-1]);
0x305: Push((int) 3)
0x306: Pop(2); Push(Stack[-2] % Stack[-1]);
0x307: @ SetVariable(Stack[-2], Stack[-1])
0x308: Pop(2)
0x309: GOTO 0x30e

0x30a: Push("voice_common") // @poff=192
0x30b: Push((int) 0)
0x30c: @ SetVariable(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: GOTO 0x321

0x30f: PushEmpty(bool, object)
0x310: Stack[-7] = Stack[-1]
0x311: Call2 0x348

0x312: Pop(1)
0x313: Pop(1); Push((bool) Stack[-1] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x315: PushEmpty(bool, object)
0x316: Stack[-7] = Stack[-1]
0x317: Call2 0x323

0x318: Pop(1)
0x319: Pop(1); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-6] = (bool) 0
0x31c: Return(); Pop(4)

0x31d: Push("voice_common") // @poff=192
0x31e: Push((int) 1)
0x31f: @ SetVariable(Stack[-2], Stack[-1])
0x320: Pop(2)
0x321: Stack[-6] = (bool) 1
0x322: Return(); Pop(4)

0x323: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x324: Stack[-5] = "c" // @poff=218
0x325: Stack[-4] = (int) 0
0x326: Push((int) 1)
0x327: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x328: Push((int) 1)
0x329: Pop(1); Push(Stack[-5] + Stack[-1]);
0x32a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x32b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x32c: Pop(1)
0x32d: Pop(0); Push((bool) Stack[-3] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x333

0x330: Push((int) 1)
0x331: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x332: GOTO 0x326

0x333: Pop(0); Push((bool) Stack[-4] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-12] = (bool) 0
0x336: Return(); Pop(10)

0x337: Stack[-2] = (int) 0
0x338: Push((int) 1)
0x339: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: @ irand(Stack[-2], Stack[-4])
0x33c: Pop(0)
0x33d: Push((int) 1)
0x33e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x33f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x340: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x341: Pop(1)
0x342: PushEmpty(bool, string)
0x343: Stack[-3] = Stack[-1]
0x344: Call2 0x380

0x345: Stack[-2] = Stack[-14]
0x346: Pop(2)
0x347: Return(); Pop(10)

0x348: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x349: Push("d") // @poff=188
0x34a: PushEmpty(int)
0x34b: Call2 0x3c3

0x34c: Pop(0)
0x34d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34e: Push("m") // @poff=246
0x34f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x350: Stack[-4] = (int) 0
0x351: Push((int) 1)
0x352: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x353: Push((int) 1)
0x354: Pop(1); Push(Stack[-5] + Stack[-1]);
0x355: Pop(1); Push(Stack[-6] + Stack[-1]);
0x356: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x357: Pop(1)
0x358: Pop(0); Push((bool) Stack[-3] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x35a: GOTO 0x35e

0x35b: Push((int) 1)
0x35c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x35d: GOTO 0x351

0x35e: Pop(0); Push((bool) Stack[-4] == 0)
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-12] = (bool) 0
0x361: Return(); Pop(10)

0x362: Stack[-2] = (int) 0
0x363: Push((int) 1)
0x364: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: @ irand(Stack[-2], Stack[-4])
0x367: Pop(0)
0x368: Push((int) 1)
0x369: Pop(1); Push(Stack[-3] + Stack[-1]);
0x36a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x36c: Pop(1)
0x36d: PushEmpty(bool, string)
0x36e: Stack[-3] = Stack[-1]
0x36f: Call2 0x380

0x370: Stack[-2] = Stack[-14]
0x371: Pop(2)
0x372: Return(); Pop(10)

0x373: PushEmpty(float, float, float, float)
0x374: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x375: Pop(0)
0x376: Push((bool) 0)
0x377: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(1)
0x379: Return(); Pop(4)

0x37a: PushEmpty(float, float, float, float)
0x37b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x37c: Pop(0)
0x37d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x37e: Pop(0)
0x37f: Return(); Pop(4)

0x380: PushEmpty(bool, bool)
0x381: PushEmpty(bool)
0x382: Call2 0x3d4

0x383: Pop(0)
0x384: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x385: @ lshHasSpeech(Stack[-1], Stack[-3])
0x386: Pop(0)
0x387: Push(Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x389: @ lshPlaySpeech(Stack[-3])
0x38a: Pop(0)
0x38b: Stack[-4] = (bool) 1
0x38c: Return(); Pop(2)

0x38d: Stack[-4] = (bool) 0
0x38e: Return(); Pop(2)

0x38f: PushEmpty(bool)
0x390: Call2 0x3d4

0x391: Pop(0)
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: @ lshStopSpeech()
0x394: Pop(0)
0x395: Return(); Pop(0)

0x396: PushEmpty(object, object)
0x397: @ self(Stack[-1])
0x398: Pop(0)
0x399: Stack[-1] = Stack[-3]
0x39a: Return(); Pop(2)

0x39b: Stack[-1] = 0
0x39c: PushEmpty(float, float)
0x39d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x39e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x39f: Push((float)9.999999974752427e-07)
0x3a0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-4] = [0.0, 0.0, 0.0]
0x3a3: Return(); Pop(2)

0x3a4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a5: Return(); Pop(2)

0x3a6: PushEmpty(int, int)
0x3a7: @ GetVariable(Stack[-3], Stack[-1])
0x3a8: Pop(0)
0x3a9: Stack[-1] = Stack[-4]
0x3aa: Return(); Pop(2)

0x3ab: PushEmpty(object, object)
0x3ac: @ FindActor(Stack[-1], Stack[-4])
0x3ad: Pop(0)
0x3ae: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-5] = (bool) 0
0x3b1: Return(); Pop(2)

0x3b2: @ Trigger(Stack[-1], Stack[-3])
0x3b3: Pop(0)
0x3b4: Stack[-5] = (bool) 1
0x3b5: Return(); Pop(2)

0x3b6: Stack[-1] = 0
0x3b7: PushEmpty(object, object)
0x3b8: @ FindActor(Stack[-1], Stack[-5])
0x3b9: Pop(0)
0x3ba: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-6] = (bool) 0
0x3bd: Return(); Pop(2)

0x3be: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3bf: Pop(0)
0x3c0: Stack[-6] = (bool) 1
0x3c1: Return(); Pop(2)

0x3c2: Stack[-1] = 0
0x3c3: PushEmpty(float, float)
0x3c4: @ GetGameTime(Stack[-1])
0x3c5: Pop(0)
0x3c6: Push((int) 1)
0x3c7: PushEmpty(int)
0x3c8: Push((int) 24)
0x3c9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3ca: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3cb: Return(); Pop(2)

0x3cc: Stack[-1] = (int) 515537
0x3cd: Return(); Pop(0)

0x3ce: Stack[-1] = (int) 502862
0x3cf: Return(); Pop(0)

0x3d0: Stack[-1] = "ui/NPC_Julia.png" // @poff=250
0x3d1: Return(); Pop(0)

0x3d2: Stack[-1] = "ui/NPC_Julia_b.png" // @poff=284
0x3d3: Return(); Pop(0)

0x3d4: Stack[-1] = (bool) 1
0x3d5: Return(); Pop(0)

0x3d6: PushEmpty()
0x3d7: Push("b11q01KnowWhoKilled") // @poff=322
0x3d8: Push((int) 1)
0x3d9: @ SetVariable(Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: PushEmpty()
0x3dc: Call2 0x427

0x3dd: Pop(0)
0x3de: Return(); Pop(0)

0x3df: PushEmpty()
0x3e0: Push("b11q01VictimChoosed") // @poff=362
0x3e1: Push((int) 1)
0x3e2: @ SetVariable(Stack[-2], Stack[-1])
0x3e3: Pop(2)
0x3e4: Push("b11q01KillJulia") // @poff=402
0x3e5: Push((int) 1)
0x3e6: @ SetVariable(Stack[-2], Stack[-1])
0x3e7: Pop(2)
0x3e8: PushEmpty(bool, string, string, string)
0x3e9: Stack[-3] = "volonteers_danko" // @poff=434
0x3ea: Stack[-2] = "kill" // @poff=468
0x3eb: Stack[-1] = "julia" // @poff=478
0x3ec: Call2 0x3b7

0x3ed: Pop(4)
0x3ee: Push("Julia is dead") // @poff=490
0x3ef: @ Trace(Stack[-1])
0x3f0: Pop(1)
0x3f1: Return(); Pop(0)

0x3f2: PushEmpty()
0x3f3: Push("oob11Julia1") // @poff=518
0x3f4: Push((int) 1)
0x3f5: @ SetVariable(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty()
0x3f9: Push("b11q01") // @poff=542
0x3fa: Push((int) 2)
0x3fb: @ SetVariable(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: PushEmpty(bool, string, string)
0x3fe: Stack[-2] = "quest_b11_01" // @poff=556
0x3ff: Stack[-1] = "open_well_exit" // @poff=582
0x400: Call2 0x3ab

0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: PushEmpty()
0x404: PushEmpty(int, string)
0x405: Stack[-1] = "b11q01VictimChoosed" // @poff=362
0x406: Call2 0x3a6

0x407: Pop(1)
0x408: Push((int) 0)
0x409: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-2] = (bool) 1
0x40c: Return(); Pop(0)

0x40d: Stack[-2] = (bool) 0
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: PushEmpty(int, string)
0x411: Stack[-1] = "oob11Julia1" // @poff=518
0x412: Call2 0x3a6

0x413: Pop(1)
0x414: Push((int) 0)
0x415: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-2] = (bool) 1
0x418: Return(); Pop(0)

0x419: Stack[-2] = (bool) 0
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: PushEmpty(int, string)
0x41d: Stack[-1] = "b11q01KillJulia" // @poff=402
0x41e: Call2 0x3a6

0x41f: Pop(1)
0x420: Push((int) 0)
0x421: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-2] = (bool) 1
0x424: Return(); Pop(0)

0x425: Stack[-2] = (bool) 0
0x426: Return(); Pop(0)

0x427: PushEmpty(object, object)
0x428: Push((int) 315)
0x429: Push((int) 1)
0x42a: Push((int) 522057)
0x42b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: PushEmpty(bool, object, int)
0x42e: Stack[-4] = Stack[-2]
0x42f: Stack[-1] = (int) 313
0x430: Call2 0x441

0x431: Pop(3)
0x432: Return(); Pop(2)

0x433: Stack[-1] = 0
0x434: PushEmpty(object, object)
0x435: @ GetDiaryRoot(Stack[-1])
0x436: Pop(0)
0x437: Pop(0); Push((bool) Stack[-1] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: Push("Can't retrieve diary root") // @poff=612
0x43a: @ Trace(Stack[-1])
0x43b: Pop(1)
0x43c: Stack[-3] = (bool) 0
0x43d: Return(); Pop(2)

0x43e: Stack[-1] = Stack[-3]
0x43f: Return(); Pop(2)

0x440: Stack[-1] = 0
0x441: PushEmpty(object, object, int, object, object, int)
0x442: PushEmpty(object)
0x443: Call2 0x434

0x444: Stack[-1] = Stack[-4]
0x445: Pop(1)
0x446: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=664
0x447: Pop(0)
0x448: Pop(0); Push((bool) Stack[-2] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44a: Push("Can't find diary parent with id: ") // @poff=669
0x44b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x44c: @ Trace(Stack[-1])
0x44d: Pop(1)
0x44e: Stack[-9] = (bool) 0
0x44f: Return(); Pop(6)

0x450: @@ AddChild(Stack[-8]); Obj=2 // @poff=737
0x451: Pop(0)
0x452: Push((int) 7)
0x453: @ SendWorldWndMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ GetCategory(Stack[-1]); Obj=8 // @poff=746
0x456: Pop(0)
0x457: @ SetDiarySection(Stack[-1])
0x458: Pop(0)
0x459: Stack[-9] = (bool) 0
0x45a: Return(); Pop(6)

0x45b: Stack[-2] = 0
0x45c: Stack[-3] = 0
0x45d: PushEmpty(int, int)
0x45e: Push("branch") // @poff=758
0x45f: @ GetVariable(Stack[-1], Stack[-2])
0x460: Pop(1)
0x461: Push((int) 0)
0x462: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x464: Stack[-3] = (int) 1
0x465: Return(); Pop(2)

0x466: GOTO 0x46c

0x467: Push((int) 1)
0x468: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-3] = (int) 2
0x46b: Return(); Pop(2)

0x46c: Stack[-3] = (int) 3
0x46d: Return(); Pop(2)

