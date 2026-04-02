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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:oob12Littleboy1
	W:oob12Littleboy2
	W:oob12Littleboy3
	W:mnogogrannik@door2
	W:B_Mission5
	W:b12q01ChildsAreVisited
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	A:Remove
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006f006f006200310032004c006900740074006c00650062006f007900310000006f006f006200310032004c006900740074006c00650062006f007900320000006f006f006200310032004c006900740074006c00650062006f007900330000006d006e006f0067006f006700720061006e006e0069006b00400064006f006f0072003200000042005f004d0069007300730069006f006e00350000006200310032007100300031004300680069006c006400730041007200650056006900730069007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f72790052656d6f7665006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	Trace (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x298
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe0 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x29e Vars = (object)
		EVENT_26 Op = 0x2d6 Vars = (string)
		EVENT_5 Op = 0x2de Vars = ()
		EVENT_6 Op = 0x2e3 Vars = ()
		EVENT_7 Op = 0x322 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3aa

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x501

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4ff

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x503

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x505

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4ee

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
0x41: Call2 0x3ee

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
0x4f: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x483

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x456

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x47d

0x5e: Pop(2)
0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x45d

0x63: Pop(2)
0x64: PushEmpty(object, object)
0x65: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x66: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67: Call2 0x444

0x68: Pop(2)
0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xca

0x6c: Pop(1)
0x6d: Push((int) 522879)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 522880)
0x73: Push((int) 24069)
0x74: Push((int) 24068)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 522898)
0x78: Push((int) 24089)
0x79: Push((int) 24088)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 522900)
0x7d: Push((int) 24091)
0x7e: Push((int) 24090)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0xac

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xca

0x85: Pop(1)
0x86: Push((int) 540520)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x48f

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 540521)
0x91: Push((int) 42529)
0x92: Push((int) 42528)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x49b

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 540531)
0x9b: Push((int) 42540)
0x9c: Push((int) 42539)
0x9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9e: Pop(3)
0x9f: Push((int) 540535)
0xa0: Push((int) -1)
0xa1: Push((int) 42545)
0xa2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa3: Pop(3)
0xa4: Push((int) 523160)
0xa5: Push((int) -1)
0xa6: Push((int) 24362)
0xa7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa8: Pop(3)
0xa9: GOTO 0xac

0xaa: Return(); Pop(0)

0xab: GOTO 0x4e

0xac: PushEmpty(bool)
0xad: Call2 0x507

0xae: Pop(0)
0xaf: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb0: @ lshWaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb7: Call2 0x3ff

0xb8: Pop(1)
0xb9: GOTO 0xb0

0xba: GOTO 0xc9

0xbb: Push("all") // @poff=138
0xbc: Push("idle") // @poff=146
0xbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: @ WaitForAnimEnd()
0xc0: Pop(0)
0xc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: GOTO 0xc9

0xc4: Push("all") // @poff=138
0xc5: Push("idle") // @poff=146
0xc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: GOTO 0xbf

0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty(bool)
0xcc: Call2 0x507

0xcd: Pop(0)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Return(); Pop(0)

0xd1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Return(); Pop(0)

0xd4: PushEmpty(string, bool)
0xd5: Stack[-3] = Stack[-2]
0xd6: Push("") // @poff=102
0xd7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: Stack[-1] = (bool) 0
0xda: GOTO 0xdc

0xdb: Stack[-1] = (bool) 1
0xdc: Call2 0x406

0xdd: Pop(2)
0xde: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: Push((int) 1)
0xe2: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0xe3: PushEmpty()
0xe4: Call2 0x417

0xe5: Pop(0)
0xe6: Push((int) 42528)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x44a

0xed: Pop(2)
0xee: Push((int) 42539)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x450

0xf5: Pop(2)
0xf6: Push((int) 24067)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0x483

0xfc: Pop(1)
0xfd: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x456

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x47d

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x45d

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x444

0x111: Pop(2)
0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral" // @poff=89
0x114: Call2 0xca

0x115: Pop(1)
0x116: Push((int) 522879)
0x117: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x118: Pop(1)
0x119: @@@ ClearReplies(); Obj=0 // @poff=116
0x11a: Pop(0)
0x11b: Push((int) 522880)
0x11c: Push((int) 24069)
0x11d: Push((int) 24068)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Push((int) 522898)
0x121: Push((int) 24089)
0x122: Push((int) 24088)
0x123: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x124: Pop(3)
0x125: Push((int) 522900)
0x126: Push((int) 24091)
0x127: Push((int) 24090)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral" // @poff=89
0x12d: Call2 0xca

0x12e: Pop(1)
0x12f: Push((int) 540520)
0x130: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x131: Pop(1)
0x132: @@@ ClearReplies(); Obj=0 // @poff=116
0x133: Pop(0)
0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x48f

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: Push((int) 540521)
0x13a: Push((int) 42529)
0x13b: Push((int) 42528)
0x13c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13d: Pop(3)
0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x49b

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: Push((int) 540531)
0x144: Push((int) 42540)
0x145: Push((int) 42539)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Push((int) 540535)
0x149: Push((int) -1)
0x14a: Push((int) 42545)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Push((int) 523160)
0x14e: Push((int) -1)
0x14f: Push((int) 24362)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 42540)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral" // @poff=89
0x158: Call2 0xca

0x159: Pop(1)
0x15a: Push((int) 540532)
0x15b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15c: Pop(1)
0x15d: @@@ ClearReplies(); Obj=0 // @poff=116
0x15e: Pop(0)
0x15f: Push((int) 540533)
0x160: Push((int) 42534)
0x161: Push((int) 42541)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Push((int) 540534)
0x165: Push((int) 42531)
0x166: Push((int) 42543)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 42529)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=89
0x16f: Call2 0xca

0x170: Pop(1)
0x171: Push((int) 540522)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=116
0x175: Pop(0)
0x176: Push((int) 540523)
0x177: Push((int) 42531)
0x178: Push((int) 42530)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17a: Pop(3)
0x17b: Push((int) 540530)
0x17c: Push((int) 42531)
0x17d: Push((int) 42537)
0x17e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 42531)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral" // @poff=89
0x186: Call2 0xca

0x187: Pop(1)
0x188: Push((int) 540524)
0x189: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18a: Pop(1)
0x18b: @@@ ClearReplies(); Obj=0 // @poff=116
0x18c: Pop(0)
0x18d: Push((int) 540525)
0x18e: Push((int) -1)
0x18f: Push((int) 42532)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Push((int) 540526)
0x193: Push((int) 42534)
0x194: Push((int) 42533)
0x195: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 42534)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral" // @poff=89
0x19d: Call2 0xca

0x19e: Pop(1)
0x19f: Push((int) 540527)
0x1a0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a1: Pop(1)
0x1a2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a3: Pop(0)
0x1a4: Push((int) 540528)
0x1a5: Push((int) -1)
0x1a6: Push((int) 42535)
0x1a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a8: Pop(3)
0x1a9: Push((int) 540529)
0x1aa: Push((int) -1)
0x1ab: Push((int) 42536)
0x1ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 24091)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Neutral" // @poff=89
0x1b4: Call2 0xca

0x1b5: Pop(1)
0x1b6: Push((int) 522901)
0x1b7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b8: Pop(1)
0x1b9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ba: Pop(0)
0x1bb: Push((int) 522902)
0x1bc: Push((int) 24093)
0x1bd: Push((int) 24092)
0x1be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bf: Pop(3)
0x1c0: Push((int) 522910)
0x1c1: Push((int) -1)
0x1c2: Push((int) 24100)
0x1c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c4: Pop(3)
0x1c5: Return(); Pop(0)

0x1c6: Push((int) 24093)
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Neutral" // @poff=89
0x1cb: Call2 0xca

0x1cc: Pop(1)
0x1cd: Push((int) 522903)
0x1ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cf: Pop(1)
0x1d0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d1: Pop(0)
0x1d2: Push((int) 522904)
0x1d3: Push((int) 24095)
0x1d4: Push((int) 24094)
0x1d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d6: Pop(3)
0x1d7: Push((int) 522909)
0x1d8: Push((int) -1)
0x1d9: Push((int) 24099)
0x1da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 24095)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral" // @poff=89
0x1e2: Call2 0xca

0x1e3: Pop(1)
0x1e4: Push((int) 522905)
0x1e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e6: Pop(1)
0x1e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e8: Pop(0)
0x1e9: Push((int) 522906)
0x1ea: Push((int) -1)
0x1eb: Push((int) 24096)
0x1ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ed: Pop(3)
0x1ee: Push((int) 522908)
0x1ef: Push((int) -1)
0x1f0: Push((int) 24098)
0x1f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 24089)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral" // @poff=89
0x1f9: Call2 0xca

0x1fa: Pop(1)
0x1fb: Push((int) 522899)
0x1fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fd: Pop(1)
0x1fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ff: Pop(0)
0x200: Push((int) 522911)
0x201: Push((int) 24102)
0x202: Push((int) 24101)
0x203: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 24102)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral" // @poff=89
0x20b: Call2 0xca

0x20c: Pop(1)
0x20d: Push((int) 522912)
0x20e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20f: Pop(1)
0x210: @@@ ClearReplies(); Obj=0 // @poff=116
0x211: Pop(0)
0x212: Push((int) 522913)
0x213: Push((int) 24091)
0x214: Push((int) 24103)
0x215: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 24069)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral" // @poff=89
0x21d: Call2 0xca

0x21e: Pop(1)
0x21f: Push((int) 522881)
0x220: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x221: Pop(1)
0x222: @@@ ClearReplies(); Obj=0 // @poff=116
0x223: Pop(0)
0x224: Push((int) 522882)
0x225: Push((int) 24071)
0x226: Push((int) 24070)
0x227: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x228: Pop(3)
0x229: Push((int) 522897)
0x22a: Push((int) 24071)
0x22b: Push((int) 24086)
0x22c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 24071)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral" // @poff=89
0x234: Call2 0xca

0x235: Pop(1)
0x236: Push((int) 522883)
0x237: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x238: Pop(1)
0x239: @@@ ClearReplies(); Obj=0 // @poff=116
0x23a: Pop(0)
0x23b: Push((int) 522884)
0x23c: Push((int) 24073)
0x23d: Push((int) 24072)
0x23e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23f: Pop(3)
0x240: Push((int) 522896)
0x241: Push((int) 24073)
0x242: Push((int) 24084)
0x243: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x244: Pop(3)
0x245: Return(); Pop(0)

0x246: Push((int) 24073)
0x247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral" // @poff=89
0x24b: Call2 0xca

0x24c: Pop(1)
0x24d: Push((int) 522885)
0x24e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24f: Pop(1)
0x250: @@@ ClearReplies(); Obj=0 // @poff=116
0x251: Pop(0)
0x252: Push((int) 522886)
0x253: Push((int) 24075)
0x254: Push((int) 24074)
0x255: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x256: Pop(3)
0x257: Push((int) 522891)
0x258: Push((int) 24080)
0x259: Push((int) 24079)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: Return(); Pop(0)

0x25d: Push((int) 24080)
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x260: PushEmpty(string)
0x261: Stack[-1] = "Neutral" // @poff=89
0x262: Call2 0xca

0x263: Pop(1)
0x264: Push((int) 522892)
0x265: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x266: Pop(1)
0x267: @@@ ClearReplies(); Obj=0 // @poff=116
0x268: Pop(0)
0x269: Push((int) 522894)
0x26a: Push((int) -1)
0x26b: Push((int) 24082)
0x26c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26d: Pop(3)
0x26e: Push((int) 522895)
0x26f: Push((int) -1)
0x270: Push((int) 24083)
0x271: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 24075)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral" // @poff=89
0x279: Call2 0xca

0x27a: Pop(1)
0x27b: Push((int) 522887)
0x27c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x27d: Pop(1)
0x27e: @@@ ClearReplies(); Obj=0 // @poff=116
0x27f: Pop(0)
0x280: Push((int) 522889)
0x281: Push((int) -1)
0x282: Push((int) 24077)
0x283: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x284: Pop(3)
0x285: Push((int) 522890)
0x286: Push((int) -1)
0x287: Push((int) 24078)
0x288: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28c: PushEmpty(bool)
0x28d: Call2 0x507

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x290: @ lshStopAnimation()
0x291: Pop(0)
0x292: GOTO 0x295

0x293: @ StopAnimation()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: GOTO 0xe1

0x297: Return(); Pop(0)

0x298: PushEmpty(float, float)
0x299: Stack[-2] = (int) 300
0x29a: Stack[-1] = (int) 100
0x29b: Call2 0x2a9

0x29c: Pop(2)
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: PushEmpty()
0x2a0: Call2 0x339

0x2a1: Pop(0)
0x2a2: PushEmpty(int, object)
0x2a3: Stack[-3] = Stack[-1]
0x2a4: Push(-2, 1); TaskCall(0)
0x2a5: Call2 0x0

0x2a6: Pop(-2, 1); TaskReturn
0x2a7: Pop(2)
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(float, float)
0x2aa: PushEmpty(bool)
0x2ab: Call2 0x3a5

0x2ac: Pop(0)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: @ Hold()
0x2b0: Pop(0)
0x2b1: GOTO 0x2aa

0x2b2: Push((int) 3)
0x2b3: @ rand(Stack[-2], Stack[-1])
0x2b4: Pop(1)
0x2b5: Push((int) 3)
0x2b6: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2b7: @ Sleep(Stack[-1])
0x2b8: Pop(1)
0x2b9: PushEmpty(float, float)
0x2ba: Stack[-6] = Stack[-2]
0x2bb: Stack[-5] = Stack[-1]
0x2bc: Call2 0x2f8

0x2bd: Pop(2)
0x2be: @ sync()
0x2bf: Pop(0)
0x2c0: GOTO 0x2aa

0x2c1: Return(); Pop(2)

0x2c2: PushEmpty(bool, bool)
0x2c3: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x2c4: @ IsLoaded(Stack[-1])
0x2c5: Pop(0)
0x2c6: PushEmpty(bool)
0x2c7: Stack[-1] = (bool) 0
0x2c8: Pop(0); Push((bool) Stack[-2] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: PushEmpty(bool)
0x2cb: Call2 0x2f6

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: Stack[-1] = (bool) 1
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d0: PushEmpty(object)
0x2d1: Call2 0x41e

0x2d2: Pop(0)
0x2d3: @ RemoveActor(Stack[-1])
0x2d4: Pop(1)
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty()
0x2d7: Push("cleanup") // @poff=156
0x2d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: PushEmpty()
0x2db: Call2 0x2c2

0x2dc: Pop(0)
0x2dd: Return(); Pop(0)

0x2de: @ StopGroup0()
0x2df: Pop(0)
0x2e0: @ sync()
0x2e1: Pop(0)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: Call2 0x339

0x2e5: Pop(0)
0x2e6: PushEmpty(bool)
0x2e7: Stack[-1] = (bool) 0
0x2e8: Push( Stack[5 + Tasks[-1].StackPointer] )
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ea: PushEmpty(bool)
0x2eb: Call2 0x2f6

0x2ec: Pop(0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Stack[-1] = (bool) 1
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(object)
0x2f1: Call2 0x41e

0x2f2: Pop(0)
0x2f3: @ RemoveActor(Stack[-1])
0x2f4: Pop(1)
0x2f5: Return(); Pop(0)

0x2f6: Stack[-1] = (bool) 1
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty()
0x2f9: PushEmpty(bool)
0x2fa: Call2 0x3a5

0x2fb: Pop(0)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Return(); Pop(0)

0x2ff: Push("player") // @poff=172
0x300: @ FindActor(Stack[-4]T, Stack[-1])
0x301: Pop(1)
0x302: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x303: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x304: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x305: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x306: Push((int) 10)
0x307: Push((float)1.0)
0x308: @ SetTimer(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: PushEmpty()
0x30b: Call2 0x347

0x30c: Pop(0)
0x30d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30f: Push((int) 10)
0x310: @ KillTimer(Stack[-1])
0x311: Pop(1)
0x312: Return(); Pop(0)

0x313: PushEmpty(float, float)
0x314: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-3] = (bool) 0
0x317: Return(); Pop(2)

0x318: PushEmpty(float, object)
0x319: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x31a: Call2 0x39d

0x31b: Pop(1)
0x31c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x31d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x320: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x321: Return(); Pop(2)

0x322: PushEmpty()
0x323: Push((int) 10)
0x324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x326: PushEmpty(bool)
0x327: Call2 0x313

0x328: Pop(0)
0x329: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32c: PushEmpty(object)
0x32d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x32e: Call2 0x40c

0x32f: Pop(1)
0x330: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x331: GOTO 0x338

0x332: Push( Stack[2 + Tasks[-1].StackPointer] )
0x333: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x334: Push("head") // @poff=186
0x335: @ UnlookAsync(Stack[-1])
0x336: Pop(1)
0x337: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: Call2 0x398

0x33b: Pop(0)
0x33c: Push((int) 10)
0x33d: @ KillTimer(Stack[-1])
0x33e: Pop(1)
0x33f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x340: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x341: Push("head") // @poff=186
0x342: @ UnlookAsync(Stack[-1])
0x343: Pop(1)
0x344: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x345: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x346: Return(); Pop(0)

0x347: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x348: @ WaitForAnimEnd()
0x349: Pop(0)
0x34a: PushEmpty(bool)
0x34b: Call2 0x3a5

0x34c: Pop(0)
0x34d: Pop(1); Push((bool) Stack[-1] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: Return(); Pop(14)

0x350: PushEmpty(int)
0x351: Call2 0x510

0x352: Stack[-1] = Stack[-8]
0x353: Pop(1)
0x354: Stack[-6] = (int) 0
0x355: PushEmpty(bool)
0x356: Stack[-1] = (bool) 0
0x357: Push((int) 5)
0x358: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35a: PushEmpty(bool)
0x35b: Call2 0x3a5

0x35c: Pop(0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: Stack[-1] = (bool) 1
0x35f: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x360: Push((int) 3)
0x361: @ irand(Stack[-6], Stack[-1])
0x362: Pop(1)
0x363: Push((int) 0)
0x364: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x366: Push(Stack[-7])
0x367: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x368: @ irand(Stack[-4], Stack[-7])
0x369: Pop(0)
0x36a: Push("all") // @poff=138
0x36b: PushEmpty(string, int)
0x36c: Stack[-7] = Stack[-1]
0x36d: Call2 0x509

0x36e: Pop(1)
0x36f: @ PlayAnimation(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: @ WaitForAnimEnd(Stack[-3])
0x372: Pop(0)
0x373: Pop(0); Push((bool) Stack[-3] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x393

0x376: GOTO 0x388

0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37a: Push((int) 4)
0x37b: @ rand(Stack[-3], Stack[-1])
0x37c: Pop(1)
0x37d: Push((int) 1)
0x37e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x37f: @ Sleep(Stack[-1], Stack[-2])
0x380: Pop(1)
0x381: Pop(0); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: GOTO 0x393

0x384: GOTO 0x388

0x385: Push(Stack[-6])
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x393

0x388: PushEmpty(bool)
0x389: Call2 0x396

0x38a: Pop(0)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x393

0x38e: @ ResetAAS()
0x38f: Pop(0)
0x390: Push((int) 1)
0x391: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x392: GOTO 0x355

0x393: @ ResetAAS()
0x394: Pop(0)
0x395: Return(); Pop(14)

0x396: Stack[-1] = (bool) 1
0x397: Return(); Pop(0)

0x398: @ StopAnimation()
0x399: Pop(0)
0x39a: @ StopGroup0()
0x39b: Pop(0)
0x39c: Return(); Pop(0)

0x39d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x39e: @ GetPosition(Stack[-3])
0x39f: Pop(0)
0x3a0: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x3a1: Pop(0)
0x3a2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3a3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3a4: Return(); Pop(6)

0x3a5: PushEmpty(bool, bool)
0x3a6: @ IsLoaded(Stack[-1])
0x3a7: Pop(0)
0x3a8: Stack[-1] = Stack[-3]
0x3a9: Return(); Pop(2)

0x3aa: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3ab: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x3ac: Pop(0)
0x3ad: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x3ae: Pop(0)
0x3af: Push(CvectorIndex(Stack[-8], 1))
0x3b0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3b2: @ GetPosition(Stack[-7])
0x3b3: Pop(0)
0x3b4: @ GetEyesHeight(Stack[-9])
0x3b5: Pop(0)
0x3b6: Push(CvectorIndex(Stack[-7], 1))
0x3b7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3b9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3ba: Push(CvectorIndex(Stack[-6], 1))
0x3bb: Stack[-1] = (int) 0
0x3bc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3bd: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3be: Pop(1); Push(Sqrt(Stack[-1]))
0x3bf: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3c0: Stack[-5] = -Stack[-6]; Pop(0);
0x3c1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3c2: PushEmpty(cvector, cvector)
0x3c3: Push([0.0, 1.0, 0.0])
0x3c4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3c5: Call2 0x424

0x3c6: Pop(1)
0x3c7: Push((int) 25)
0x3c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ca: Push([0.0, 10.0, 0.0])
0x3cb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3cc: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3cd: @ IsOverrideActive(Stack[-2])
0x3ce: Pop(0)
0x3cf: Push(Stack[-2])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-21] = (bool) 0
0x3d2: Return(); Pop(18)

0x3d3: @ StopWorld()
0x3d4: Pop(0)
0x3d5: @ CameraTransit(Stack[-3], Stack[-5])
0x3d6: Pop(0)
0x3d7: Push(CvectorIndex(Stack[-4], 0))
0x3d8: Push(CvectorIndex(Stack[-5], 2))
0x3d9: @ Rotate(Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: PushEmpty(bool)
0x3dc: Call2 0x507

0x3dd: Pop(0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: GOTO 0x3e8

0x3e0: Push("head") // @poff=186
0x3e1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3e2: Pop(1)
0x3e3: Push(Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e5: Push("head") // @poff=186
0x3e6: @ LookAsyncCamera(Stack[-1])
0x3e7: Pop(1)
0x3e8: @ CameraWaitForPlayFinish()
0x3e9: Pop(0)
0x3ea: @ ResumeWorld()
0x3eb: Pop(0)
0x3ec: Stack[-21] = (bool) 1
0x3ed: Return(); Pop(18)

0x3ee: PushEmpty(bool, bool)
0x3ef: @ CameraSwitchToNormal()
0x3f0: Pop(0)
0x3f1: PushEmpty(bool)
0x3f2: Call2 0x507

0x3f3: Pop(0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: GOTO 0x3fe

0x3f6: Push("head") // @poff=186
0x3f7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3f8: Pop(1)
0x3f9: Push(Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fb: Push("head") // @poff=186
0x3fc: @ UnlookAsync(Stack[-1])
0x3fd: Pop(1)
0x3fe: Return(); Pop(2)

0x3ff: PushEmpty(float, float, float, float)
0x400: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x401: Pop(0)
0x402: Push((bool) 0)
0x403: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(1)
0x405: Return(); Pop(4)

0x406: PushEmpty(float, float, float, float)
0x407: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x408: Pop(0)
0x409: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x40a: Pop(0)
0x40b: Return(); Pop(4)

0x40c: PushEmpty(float, cvector, float, cvector)
0x40d: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x40e: Pop(0)
0x40f: Stack[-1] = [0.0, 0.0, 0.0]
0x410: Push(CvectorIndex(Stack[-1], 1))
0x411: Stack[-3] = Stack[-1]
0x412: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x413: Push("head") // @poff=186
0x414: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x415: Pop(1)
0x416: Return(); Pop(4)

0x417: PushEmpty(bool)
0x418: Call2 0x507

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: @ lshStopSpeech()
0x41c: Pop(0)
0x41d: Return(); Pop(0)

0x41e: PushEmpty(object, object)
0x41f: @ self(Stack[-1])
0x420: Pop(0)
0x421: Stack[-1] = Stack[-3]
0x422: Return(); Pop(2)

0x423: Stack[-1] = 0
0x424: PushEmpty(float, float)
0x425: Pop(0); Push(Stack[-3] | Stack[-3]);
0x426: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x427: Push((float)9.999999974752427e-07)
0x428: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-4] = [0.0, 0.0, 0.0]
0x42b: Return(); Pop(2)

0x42c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, int)
0x42f: @ GetVariable(Stack[-3], Stack[-1])
0x430: Pop(0)
0x431: Stack[-1] = Stack[-4]
0x432: Return(); Pop(2)

0x433: PushEmpty(object, object)
0x434: @ FindActor(Stack[-1], Stack[-4])
0x435: Pop(0)
0x436: Pop(0); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x438: Push("Door ") // @poff=222
0x439: Pop(1); Push(Stack[-1] + Stack[-5]);
0x43a: Push(" not found") // @poff=234
0x43b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43c: @ Trace(Stack[-1])
0x43d: Pop(1)
0x43e: GOTO 0x442

0x43f: Push("locked") // @poff=256
0x440: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=270
0x441: Pop(1)
0x442: Return(); Pop(2)

0x443: Stack[-1] = 0
0x444: PushEmpty()
0x445: Push("oob12Littleboy1") // @poff=282
0x446: Push((int) 1)
0x447: @ SetVariable(Stack[-2], Stack[-1])
0x448: Pop(2)
0x449: Return(); Pop(0)

0x44a: PushEmpty()
0x44b: Push("oob12Littleboy2") // @poff=314
0x44c: Push((int) 1)
0x44d: @ SetVariable(Stack[-2], Stack[-1])
0x44e: Pop(2)
0x44f: Return(); Pop(0)

0x450: PushEmpty()
0x451: Push("oob12Littleboy3") // @poff=346
0x452: Push((int) 1)
0x453: @ SetVariable(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: Return(); Pop(0)

0x456: PushEmpty()
0x457: PushEmpty(string, bool)
0x458: Stack[-2] = "mnogogrannik@door2" // @poff=378
0x459: Stack[-1] = (bool) 0
0x45a: Call2 0x433

0x45b: Pop(2)
0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: PushEmpty(int, string)
0x45f: Stack[-1] = "B_Mission5" // @poff=416
0x460: Call2 0x42e

0x461: Pop(1)
0x462: Push((int) 0)
0x463: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x465: Push("B_Mission5") // @poff=416
0x466: Push((int) 1)
0x467: @ SetVariable(Stack[-2], Stack[-1])
0x468: Pop(2)
0x469: PushEmpty()
0x46a: Call2 0x4a7

0x46b: Pop(0)
0x46c: PushEmpty(bool, int)
0x46d: Stack[-1] = (int) 562
0x46e: Call2 0x4dd

0x46f: Pop(2)
0x470: PushEmpty(bool, int)
0x471: Stack[-1] = (int) 563
0x472: Call2 0x4dd

0x473: Pop(2)
0x474: PushEmpty(bool, int)
0x475: Stack[-1] = (int) 564
0x476: Call2 0x4dd

0x477: Pop(2)
0x478: PushEmpty(bool, int)
0x479: Stack[-1] = (int) 565
0x47a: Call2 0x4dd

0x47b: Pop(2)
0x47c: Return(); Pop(0)

0x47d: PushEmpty()
0x47e: Push("b12q01ChildsAreVisited") // @poff=438
0x47f: Push((int) 1)
0x480: @ SetVariable(Stack[-2], Stack[-1])
0x481: Pop(2)
0x482: Return(); Pop(0)

0x483: PushEmpty()
0x484: PushEmpty(int, string)
0x485: Stack[-1] = "oob12Littleboy1" // @poff=282
0x486: Call2 0x42e

0x487: Pop(1)
0x488: Push((int) 0)
0x489: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-2] = (bool) 1
0x48c: Return(); Pop(0)

0x48d: Stack[-2] = (bool) 0
0x48e: Return(); Pop(0)

0x48f: PushEmpty()
0x490: PushEmpty(int, string)
0x491: Stack[-1] = "oob12Littleboy2" // @poff=314
0x492: Call2 0x42e

0x493: Pop(1)
0x494: Push((int) 0)
0x495: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: Stack[-2] = (bool) 1
0x498: Return(); Pop(0)

0x499: Stack[-2] = (bool) 0
0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: PushEmpty(int, string)
0x49d: Stack[-1] = "oob12Littleboy3" // @poff=346
0x49e: Call2 0x42e

0x49f: Pop(1)
0x4a0: Push((int) 0)
0x4a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-2] = (bool) 1
0x4a4: Return(); Pop(0)

0x4a5: Stack[-2] = (bool) 0
0x4a6: Return(); Pop(0)

0x4a7: PushEmpty(object, object)
0x4a8: Push((int) 566)
0x4a9: Push((int) 0)
0x4aa: Push((int) 530580)
0x4ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: PushEmpty(bool, object, int)
0x4ae: Stack[-4] = Stack[-2]
0x4af: Stack[-1] = (int) -1
0x4b0: Call2 0x4c1

0x4b1: Pop(3)
0x4b2: Return(); Pop(2)

0x4b3: Stack[-1] = 0
0x4b4: PushEmpty(object, object)
0x4b5: @ GetDiaryRoot(Stack[-1])
0x4b6: Pop(0)
0x4b7: Pop(0); Push((bool) Stack[-1] == 0)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b9: Push("Can't retrieve diary root") // @poff=484
0x4ba: @ Trace(Stack[-1])
0x4bb: Pop(1)
0x4bc: Stack[-3] = (bool) 0
0x4bd: Return(); Pop(2)

0x4be: Stack[-1] = Stack[-3]
0x4bf: Return(); Pop(2)

0x4c0: Stack[-1] = 0
0x4c1: PushEmpty(object, object, int, object, object, int)
0x4c2: PushEmpty(object)
0x4c3: Call2 0x4b4

0x4c4: Stack[-1] = Stack[-4]
0x4c5: Pop(1)
0x4c6: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=536
0x4c7: Pop(0)
0x4c8: Pop(0); Push((bool) Stack[-2] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ca: Push("Can't find diary parent with id: ") // @poff=541
0x4cb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4cc: @ Trace(Stack[-1])
0x4cd: Pop(1)
0x4ce: Stack[-9] = (bool) 0
0x4cf: Return(); Pop(6)

0x4d0: @@ AddChild(Stack[-8]); Obj=2 // @poff=609
0x4d1: Pop(0)
0x4d2: Push((int) 7)
0x4d3: @ SendWorldWndMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ GetCategory(Stack[-1]); Obj=8 // @poff=618
0x4d6: Pop(0)
0x4d7: @ SetDiarySection(Stack[-1])
0x4d8: Pop(0)
0x4d9: Stack[-9] = (bool) 0
0x4da: Return(); Pop(6)

0x4db: Stack[-2] = 0
0x4dc: Stack[-3] = 0
0x4dd: PushEmpty(object, object, object, object)
0x4de: PushEmpty(object)
0x4df: Call2 0x4b4

0x4e0: Stack[-1] = Stack[-3]
0x4e1: Pop(1)
0x4e2: @@ Find(Stack[-5], Stack[-1]); Obj=2 // @poff=536
0x4e3: Pop(0)
0x4e4: Pop(0); Push((bool) Stack[-1] == 0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-6] = (bool) 0
0x4e7: Return(); Pop(4)

0x4e8: @@ Remove(); Obj=1 // @poff=630
0x4e9: Pop(0)
0x4ea: Stack[-6] = (bool) 1
0x4eb: Return(); Pop(4)

0x4ec: Stack[-1] = 0
0x4ed: Stack[-2] = 0
0x4ee: PushEmpty(int, int)
0x4ef: Push("branch") // @poff=637
0x4f0: @ GetVariable(Stack[-1], Stack[-2])
0x4f1: Pop(1)
0x4f2: Push((int) 0)
0x4f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f5: Stack[-3] = (int) 1
0x4f6: Return(); Pop(2)

0x4f7: GOTO 0x4fd

0x4f8: Push((int) 1)
0x4f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fb: Stack[-3] = (int) 2
0x4fc: Return(); Pop(2)

0x4fd: Stack[-3] = (int) 3
0x4fe: Return(); Pop(2)

0x4ff: Stack[-1] = (int) 515560
0x500: Return(); Pop(0)

0x501: Stack[-1] = (int) 503345
0x502: Return(); Pop(0)

0x503: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=651
0x504: Return(); Pop(0)

0x505: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=691
0x506: Return(); Pop(0)

0x507: Stack[-1] = (bool) 0
0x508: Return(); Pop(0)

0x509: PushEmpty(string, string)
0x50a: Stack[-1] = "idle" // @poff=146
0x50b: Push(Stack[-3])
0x50c: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x50e: Stack[-1] = Stack[-4]
0x50f: Return(); Pop(2)

0x510: PushEmpty(int, bool, int, bool)
0x511: Stack[-2] = (int) 0
0x512: Push("all") // @poff=138
0x513: PushEmpty(string, int)
0x514: Stack[-5] = Stack[-1]
0x515: Call2 0x509

0x516: Pop(1)
0x517: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x518: Pop(2)
0x519: Pop(0); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: GOTO 0x51f

0x51c: Push((int) 1)
0x51d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x51e: GOTO 0x512

0x51f: Stack[-2] = Stack[-5]
0x520: Return(); Pop(4)

