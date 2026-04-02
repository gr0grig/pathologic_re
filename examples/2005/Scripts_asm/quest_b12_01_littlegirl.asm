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
	W:oob12Littlegirl1
	W:oob12Littlegirl2
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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006f006f006200310032004c006900740074006c0065006700690072006c00310000006f006f006200310032004c006900740074006c0065006700690072006c00320000006d006e006f0067006f006700720061006e006e0069006b00400064006f006f0072003200000042005f004d0069007300730069006f006e00350000006200310032007100300031004300680069006c006400730041007200650056006900730069007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f72790052656d6f7665006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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

RunOp = 0x195
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x19b Vars = (object)
		EVENT_26 Op = 0x1d3 Vars = (string)
		EVENT_5 Op = 0x1db Vars = ()
		EVENT_6 Op = 0x1e0 Vars = ()
		EVENT_7 Op = 0x21f Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2a7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3ec

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ea

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3ee

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3f0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3d9

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
0x41: Call2 0x2eb

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x34d

0x54: Pop(2)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x374

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x354

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral" // @poff=89
0x61: Call2 0xa2

0x62: Pop(1)
0x63: Push((int) 522914)
0x64: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65: Pop(1)
0x66: @@@ ClearReplies(); Obj=0 // @poff=116
0x67: Pop(0)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x37a

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 522915)
0x6e: Push((int) 37091)
0x6f: Push((int) 24105)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x386

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 522927)
0x78: Push((int) 24119)
0x79: Push((int) 24118)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 522926)
0x7d: Push((int) -1)
0x7e: Push((int) 24117)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x3f2

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x2fc

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all") // @poff=138
0x94: Push("idle") // @poff=146
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x3f2

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-3] = Stack[-2]
0xae: Push("") // @poff=102
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x303

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x314

0xbd: Pop(0)
0xbe: Push((int) 24105)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x341

0xc5: Pop(2)
0xc6: Push((int) 24118)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x347

0xcd: Pop(2)
0xce: Push((int) 24104)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x34d

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x374

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x354

0xdf: Pop(2)
0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0xa2

0xe3: Pop(1)
0xe4: Push((int) 522914)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Call2 0x37a

0xec: Pop(1)
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: Push((int) 522915)
0xef: Push((int) 37091)
0xf0: Push((int) 24105)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x386

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 522927)
0xf9: Push((int) 24119)
0xfa: Push((int) 24118)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 522926)
0xfe: Push((int) -1)
0xff: Push((int) 24117)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 24119)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=89
0x108: Call2 0xa2

0x109: Pop(1)
0x10a: Push((int) 522928)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=116
0x10e: Pop(0)
0x10f: Push((int) 522929)
0x110: Push((int) -1)
0x111: Push((int) 24120)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Push((int) 522930)
0x115: Push((int) -1)
0x116: Push((int) 24121)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 37091)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral" // @poff=89
0x11f: Call2 0xa2

0x120: Pop(1)
0x121: Push((int) 535411)
0x122: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x123: Pop(1)
0x124: @@@ ClearReplies(); Obj=0 // @poff=116
0x125: Pop(0)
0x126: Push((int) 535412)
0x127: Push((int) 37093)
0x128: Push((int) 37092)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 37093)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral" // @poff=89
0x131: Call2 0xa2

0x132: Pop(1)
0x133: Push((int) 535413)
0x134: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x135: Pop(1)
0x136: @@@ ClearReplies(); Obj=0 // @poff=116
0x137: Pop(0)
0x138: Push((int) 535414)
0x139: Push((int) 24106)
0x13a: Push((int) 37094)
0x13b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13c: Pop(3)
0x13d: Push((int) 535415)
0x13e: Push((int) -1)
0x13f: Push((int) 37095)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 24106)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0xa2

0x149: Pop(1)
0x14a: Push((int) 522916)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: Push((int) 522917)
0x150: Push((int) 24108)
0x151: Push((int) 24107)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 24108)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Neutral" // @poff=89
0x15a: Call2 0xa2

0x15b: Pop(1)
0x15c: Push((int) 522918)
0x15d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15e: Pop(1)
0x15f: @@@ ClearReplies(); Obj=0 // @poff=116
0x160: Pop(0)
0x161: Push((int) 522920)
0x162: Push((int) -1)
0x163: Push((int) 24110)
0x164: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x165: Pop(3)
0x166: Push((int) 522921)
0x167: Push((int) 24112)
0x168: Push((int) 24111)
0x169: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16a: Pop(3)
0x16b: Push((int) 522925)
0x16c: Push((int) 24112)
0x16d: Push((int) 24115)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 24112)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral" // @poff=89
0x176: Call2 0xa2

0x177: Pop(1)
0x178: Push((int) 522922)
0x179: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17a: Pop(1)
0x17b: @@@ ClearReplies(); Obj=0 // @poff=116
0x17c: Pop(0)
0x17d: Push((int) 522923)
0x17e: Push((int) -1)
0x17f: Push((int) 24113)
0x180: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x181: Pop(3)
0x182: Push((int) 522924)
0x183: Push((int) -1)
0x184: Push((int) 24114)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x189: PushEmpty(bool)
0x18a: Call2 0x3f2

0x18b: Pop(0)
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: @ lshStopAnimation()
0x18e: Pop(0)
0x18f: GOTO 0x192

0x190: @ StopAnimation()
0x191: Pop(0)
0x192: Return(); Pop(0)

0x193: GOTO 0xb9

0x194: Return(); Pop(0)

0x195: PushEmpty(float, float)
0x196: Stack[-2] = (int) 300
0x197: Stack[-1] = (int) 100
0x198: Call2 0x1a6

0x199: Pop(2)
0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty()
0x19d: Call2 0x236

0x19e: Pop(0)
0x19f: PushEmpty(int, object)
0x1a0: Stack[-3] = Stack[-1]
0x1a1: Push(-2, 1); TaskCall(0)
0x1a2: Call2 0x0

0x1a3: Pop(-2, 1); TaskReturn
0x1a4: Pop(2)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(float, float)
0x1a7: PushEmpty(bool)
0x1a8: Call2 0x2a2

0x1a9: Pop(0)
0x1aa: Pop(1); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: @ Hold()
0x1ad: Pop(0)
0x1ae: GOTO 0x1a7

0x1af: Push((int) 3)
0x1b0: @ rand(Stack[-2], Stack[-1])
0x1b1: Pop(1)
0x1b2: Push((int) 3)
0x1b3: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1b4: @ Sleep(Stack[-1])
0x1b5: Pop(1)
0x1b6: PushEmpty(float, float)
0x1b7: Stack[-6] = Stack[-2]
0x1b8: Stack[-5] = Stack[-1]
0x1b9: Call2 0x1f5

0x1ba: Pop(2)
0x1bb: @ sync()
0x1bc: Pop(0)
0x1bd: GOTO 0x1a7

0x1be: Return(); Pop(2)

0x1bf: PushEmpty(bool, bool)
0x1c0: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1c1: @ IsLoaded(Stack[-1])
0x1c2: Pop(0)
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: Pop(0); Push((bool) Stack[-2] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c7: PushEmpty(bool)
0x1c8: Call2 0x1f3

0x1c9: Pop(0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty(object)
0x1ce: Call2 0x31b

0x1cf: Pop(0)
0x1d0: @ RemoveActor(Stack[-1])
0x1d1: Pop(1)
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty()
0x1d4: Push("cleanup") // @poff=156
0x1d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: PushEmpty()
0x1d8: Call2 0x1bf

0x1d9: Pop(0)
0x1da: Return(); Pop(0)

0x1db: @ StopGroup0()
0x1dc: Pop(0)
0x1dd: @ sync()
0x1de: Pop(0)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: Call2 0x236

0x1e2: Pop(0)
0x1e3: PushEmpty(bool)
0x1e4: Stack[-1] = (bool) 0
0x1e5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: PushEmpty(bool)
0x1e8: Call2 0x1f3

0x1e9: Pop(0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = (bool) 1
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ed: PushEmpty(object)
0x1ee: Call2 0x31b

0x1ef: Pop(0)
0x1f0: @ RemoveActor(Stack[-1])
0x1f1: Pop(1)
0x1f2: Return(); Pop(0)

0x1f3: Stack[-1] = (bool) 1
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: PushEmpty(bool)
0x1f7: Call2 0x2a2

0x1f8: Pop(0)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Return(); Pop(0)

0x1fc: Push("player") // @poff=172
0x1fd: @ FindActor(Stack[-4]T, Stack[-1])
0x1fe: Pop(1)
0x1ff: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x200: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x201: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x202: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x203: Push((int) 10)
0x204: Push((float)1.0)
0x205: @ SetTimer(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: PushEmpty()
0x208: Call2 0x244

0x209: Pop(0)
0x20a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20c: Push((int) 10)
0x20d: @ KillTimer(Stack[-1])
0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty(float, float)
0x211: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-3] = (bool) 0
0x214: Return(); Pop(2)

0x215: PushEmpty(float, object)
0x216: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x217: Call2 0x29a

0x218: Pop(1)
0x219: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x21d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x21e: Return(); Pop(2)

0x21f: PushEmpty()
0x220: Push((int) 10)
0x221: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x223: PushEmpty(bool)
0x224: Call2 0x210

0x225: Pop(0)
0x226: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x227: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: PushEmpty(object)
0x22a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22b: Call2 0x309

0x22c: Pop(1)
0x22d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x22e: GOTO 0x235

0x22f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x230: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x231: Push("head") // @poff=186
0x232: @ UnlookAsync(Stack[-1])
0x233: Pop(1)
0x234: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: Call2 0x295

0x238: Pop(0)
0x239: Push((int) 10)
0x23a: @ KillTimer(Stack[-1])
0x23b: Pop(1)
0x23c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23e: Push("head") // @poff=186
0x23f: @ UnlookAsync(Stack[-1])
0x240: Pop(1)
0x241: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x242: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x243: Return(); Pop(0)

0x244: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x245: @ WaitForAnimEnd()
0x246: Pop(0)
0x247: PushEmpty(bool)
0x248: Call2 0x2a2

0x249: Pop(0)
0x24a: Pop(1); Push((bool) Stack[-1] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Return(); Pop(14)

0x24d: PushEmpty(int)
0x24e: Call2 0x3fb

0x24f: Stack[-1] = Stack[-8]
0x250: Pop(1)
0x251: Stack[-6] = (int) 0
0x252: PushEmpty(bool)
0x253: Stack[-1] = (bool) 0
0x254: Push((int) 5)
0x255: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: PushEmpty(bool)
0x258: Call2 0x2a2

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: Stack[-1] = (bool) 1
0x25c: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x25d: Push((int) 3)
0x25e: @ irand(Stack[-6], Stack[-1])
0x25f: Pop(1)
0x260: Push((int) 0)
0x261: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x263: Push(Stack[-7])
0x264: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x265: @ irand(Stack[-4], Stack[-7])
0x266: Pop(0)
0x267: Push("all") // @poff=138
0x268: PushEmpty(string, int)
0x269: Stack[-7] = Stack[-1]
0x26a: Call2 0x3f4

0x26b: Pop(1)
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: @ WaitForAnimEnd(Stack[-3])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-3] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: GOTO 0x290

0x273: GOTO 0x285

0x274: Push((int) 1)
0x275: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x277: Push((int) 4)
0x278: @ rand(Stack[-3], Stack[-1])
0x279: Pop(1)
0x27a: Push((int) 1)
0x27b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27c: @ Sleep(Stack[-1], Stack[-2])
0x27d: Pop(1)
0x27e: Pop(0); Push((bool) Stack[-1] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x290

0x281: GOTO 0x285

0x282: Push(Stack[-6])
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: GOTO 0x290

0x285: PushEmpty(bool)
0x286: Call2 0x293

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x290

0x28b: @ ResetAAS()
0x28c: Pop(0)
0x28d: Push((int) 1)
0x28e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x28f: GOTO 0x252

0x290: @ ResetAAS()
0x291: Pop(0)
0x292: Return(); Pop(14)

0x293: Stack[-1] = (bool) 1
0x294: Return(); Pop(0)

0x295: @ StopAnimation()
0x296: Pop(0)
0x297: @ StopGroup0()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x29b: @ GetPosition(Stack[-3])
0x29c: Pop(0)
0x29d: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x29e: Pop(0)
0x29f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a1: Return(); Pop(6)

0x2a2: PushEmpty(bool, bool)
0x2a3: @ IsLoaded(Stack[-1])
0x2a4: Pop(0)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a8: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2a9: Pop(0)
0x2aa: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2ab: Pop(0)
0x2ac: Push(CvectorIndex(Stack[-8], 1))
0x2ad: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ae: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2af: @ GetPosition(Stack[-7])
0x2b0: Pop(0)
0x2b1: @ GetEyesHeight(Stack[-9])
0x2b2: Pop(0)
0x2b3: Push(CvectorIndex(Stack[-7], 1))
0x2b4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b7: Push(CvectorIndex(Stack[-6], 1))
0x2b8: Stack[-1] = (int) 0
0x2b9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ba: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2bb: Pop(1); Push(Sqrt(Stack[-1]))
0x2bc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2bd: Stack[-5] = -Stack[-6]; Pop(0);
0x2be: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2bf: PushEmpty(cvector, cvector)
0x2c0: Push([0.0, 1.0, 0.0])
0x2c1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c2: Call2 0x321

0x2c3: Pop(1)
0x2c4: Push((int) 25)
0x2c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c7: Push([0.0, 10.0, 0.0])
0x2c8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ca: @ IsOverrideActive(Stack[-2])
0x2cb: Pop(0)
0x2cc: Push(Stack[-2])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-21] = (bool) 0
0x2cf: Return(); Pop(18)

0x2d0: @ StopWorld()
0x2d1: Pop(0)
0x2d2: @ CameraTransit(Stack[-3], Stack[-5])
0x2d3: Pop(0)
0x2d4: Push(CvectorIndex(Stack[-4], 0))
0x2d5: Push(CvectorIndex(Stack[-5], 2))
0x2d6: @ Rotate(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: PushEmpty(bool)
0x2d9: Call2 0x3f2

0x2da: Pop(0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: GOTO 0x2e5

0x2dd: Push("head") // @poff=186
0x2de: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2df: Pop(1)
0x2e0: Push(Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e2: Push("head") // @poff=186
0x2e3: @ LookAsyncCamera(Stack[-1])
0x2e4: Pop(1)
0x2e5: @ CameraWaitForPlayFinish()
0x2e6: Pop(0)
0x2e7: @ ResumeWorld()
0x2e8: Pop(0)
0x2e9: Stack[-21] = (bool) 1
0x2ea: Return(); Pop(18)

0x2eb: PushEmpty(bool, bool)
0x2ec: @ CameraSwitchToNormal()
0x2ed: Pop(0)
0x2ee: PushEmpty(bool)
0x2ef: Call2 0x3f2

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: GOTO 0x2fb

0x2f3: Push("head") // @poff=186
0x2f4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f5: Pop(1)
0x2f6: Push(Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f8: Push("head") // @poff=186
0x2f9: @ UnlookAsync(Stack[-1])
0x2fa: Pop(1)
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(float, float, float, float)
0x2fd: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2fe: Pop(0)
0x2ff: Push((bool) 0)
0x300: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(1)
0x302: Return(); Pop(4)

0x303: PushEmpty(float, float, float, float)
0x304: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x305: Pop(0)
0x306: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x307: Pop(0)
0x308: Return(); Pop(4)

0x309: PushEmpty(float, cvector, float, cvector)
0x30a: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x30b: Pop(0)
0x30c: Stack[-1] = [0.0, 0.0, 0.0]
0x30d: Push(CvectorIndex(Stack[-1], 1))
0x30e: Stack[-3] = Stack[-1]
0x30f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x310: Push("head") // @poff=186
0x311: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x312: Pop(1)
0x313: Return(); Pop(4)

0x314: PushEmpty(bool)
0x315: Call2 0x3f2

0x316: Pop(0)
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: @ lshStopSpeech()
0x319: Pop(0)
0x31a: Return(); Pop(0)

0x31b: PushEmpty(object, object)
0x31c: @ self(Stack[-1])
0x31d: Pop(0)
0x31e: Stack[-1] = Stack[-3]
0x31f: Return(); Pop(2)

0x320: Stack[-1] = 0
0x321: PushEmpty(float, float)
0x322: Pop(0); Push(Stack[-3] | Stack[-3]);
0x323: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x324: Push((float)9.999999974752427e-07)
0x325: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-4] = [0.0, 0.0, 0.0]
0x328: Return(); Pop(2)

0x329: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x32a: Return(); Pop(2)

0x32b: PushEmpty(int, int)
0x32c: @ GetVariable(Stack[-3], Stack[-1])
0x32d: Pop(0)
0x32e: Stack[-1] = Stack[-4]
0x32f: Return(); Pop(2)

0x330: PushEmpty(object, object)
0x331: @ FindActor(Stack[-1], Stack[-4])
0x332: Pop(0)
0x333: Pop(0); Push((bool) Stack[-1] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x335: Push("Door ") // @poff=222
0x336: Pop(1); Push(Stack[-1] + Stack[-5]);
0x337: Push(" not found") // @poff=234
0x338: Pop(2); Push(Stack[-2] + Stack[-1]);
0x339: @ Trace(Stack[-1])
0x33a: Pop(1)
0x33b: GOTO 0x33f

0x33c: Push("locked") // @poff=256
0x33d: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=270
0x33e: Pop(1)
0x33f: Return(); Pop(2)

0x340: Stack[-1] = 0
0x341: PushEmpty()
0x342: Push("oob12Littlegirl1") // @poff=282
0x343: Push((int) 1)
0x344: @ SetVariable(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: Push("oob12Littlegirl2") // @poff=316
0x349: Push((int) 1)
0x34a: @ SetVariable(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: PushEmpty(string, bool)
0x34f: Stack[-2] = "mnogogrannik@door2" // @poff=350
0x350: Stack[-1] = (bool) 0
0x351: Call2 0x330

0x352: Pop(2)
0x353: Return(); Pop(0)

0x354: PushEmpty()
0x355: PushEmpty(int, string)
0x356: Stack[-1] = "B_Mission5" // @poff=388
0x357: Call2 0x32b

0x358: Pop(1)
0x359: Push((int) 0)
0x35a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x35c: Push("B_Mission5") // @poff=388
0x35d: Push((int) 1)
0x35e: @ SetVariable(Stack[-2], Stack[-1])
0x35f: Pop(2)
0x360: PushEmpty()
0x361: Call2 0x392

0x362: Pop(0)
0x363: PushEmpty(bool, int)
0x364: Stack[-1] = (int) 562
0x365: Call2 0x3c8

0x366: Pop(2)
0x367: PushEmpty(bool, int)
0x368: Stack[-1] = (int) 563
0x369: Call2 0x3c8

0x36a: Pop(2)
0x36b: PushEmpty(bool, int)
0x36c: Stack[-1] = (int) 564
0x36d: Call2 0x3c8

0x36e: Pop(2)
0x36f: PushEmpty(bool, int)
0x370: Stack[-1] = (int) 565
0x371: Call2 0x3c8

0x372: Pop(2)
0x373: Return(); Pop(0)

0x374: PushEmpty()
0x375: Push("b12q01ChildsAreVisited") // @poff=410
0x376: Push((int) 1)
0x377: @ SetVariable(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: Return(); Pop(0)

0x37a: PushEmpty()
0x37b: PushEmpty(int, string)
0x37c: Stack[-1] = "oob12Littlegirl1" // @poff=282
0x37d: Call2 0x32b

0x37e: Pop(1)
0x37f: Push((int) 0)
0x380: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x382: Stack[-2] = (bool) 1
0x383: Return(); Pop(0)

0x384: Stack[-2] = (bool) 0
0x385: Return(); Pop(0)

0x386: PushEmpty()
0x387: PushEmpty(int, string)
0x388: Stack[-1] = "oob12Littlegirl2" // @poff=316
0x389: Call2 0x32b

0x38a: Pop(1)
0x38b: Push((int) 0)
0x38c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-2] = (bool) 1
0x38f: Return(); Pop(0)

0x390: Stack[-2] = (bool) 0
0x391: Return(); Pop(0)

0x392: PushEmpty(object, object)
0x393: Push((int) 566)
0x394: Push((int) 0)
0x395: Push((int) 530580)
0x396: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: PushEmpty(bool, object, int)
0x399: Stack[-4] = Stack[-2]
0x39a: Stack[-1] = (int) -1
0x39b: Call2 0x3ac

0x39c: Pop(3)
0x39d: Return(); Pop(2)

0x39e: Stack[-1] = 0
0x39f: PushEmpty(object, object)
0x3a0: @ GetDiaryRoot(Stack[-1])
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a4: Push("Can't retrieve diary root") // @poff=456
0x3a5: @ Trace(Stack[-1])
0x3a6: Pop(1)
0x3a7: Stack[-3] = (bool) 0
0x3a8: Return(); Pop(2)

0x3a9: Stack[-1] = Stack[-3]
0x3aa: Return(); Pop(2)

0x3ab: Stack[-1] = 0
0x3ac: PushEmpty(object, object, int, object, object, int)
0x3ad: PushEmpty(object)
0x3ae: Call2 0x39f

0x3af: Stack[-1] = Stack[-4]
0x3b0: Pop(1)
0x3b1: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=508
0x3b2: Pop(0)
0x3b3: Pop(0); Push((bool) Stack[-2] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b5: Push("Can't find diary parent with id: ") // @poff=513
0x3b6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b7: @ Trace(Stack[-1])
0x3b8: Pop(1)
0x3b9: Stack[-9] = (bool) 0
0x3ba: Return(); Pop(6)

0x3bb: @@ AddChild(Stack[-8]); Obj=2 // @poff=581
0x3bc: Pop(0)
0x3bd: Push((int) 7)
0x3be: @ SendWorldWndMessage(Stack[-1])
0x3bf: Pop(1)
0x3c0: @@ GetCategory(Stack[-1]); Obj=8 // @poff=590
0x3c1: Pop(0)
0x3c2: @ SetDiarySection(Stack[-1])
0x3c3: Pop(0)
0x3c4: Stack[-9] = (bool) 0
0x3c5: Return(); Pop(6)

0x3c6: Stack[-2] = 0
0x3c7: Stack[-3] = 0
0x3c8: PushEmpty(object, object, object, object)
0x3c9: PushEmpty(object)
0x3ca: Call2 0x39f

0x3cb: Stack[-1] = Stack[-3]
0x3cc: Pop(1)
0x3cd: @@ Find(Stack[-5], Stack[-1]); Obj=2 // @poff=508
0x3ce: Pop(0)
0x3cf: Pop(0); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-6] = (bool) 0
0x3d2: Return(); Pop(4)

0x3d3: @@ Remove(); Obj=1 // @poff=602
0x3d4: Pop(0)
0x3d5: Stack[-6] = (bool) 1
0x3d6: Return(); Pop(4)

0x3d7: Stack[-1] = 0
0x3d8: Stack[-2] = 0
0x3d9: PushEmpty(int, int)
0x3da: Push("branch") // @poff=609
0x3db: @ GetVariable(Stack[-1], Stack[-2])
0x3dc: Pop(1)
0x3dd: Push((int) 0)
0x3de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e0: Stack[-3] = (int) 1
0x3e1: Return(); Pop(2)

0x3e2: GOTO 0x3e8

0x3e3: Push((int) 1)
0x3e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-3] = (int) 2
0x3e7: Return(); Pop(2)

0x3e8: Stack[-3] = (int) 3
0x3e9: Return(); Pop(2)

0x3ea: Stack[-1] = (int) 515561
0x3eb: Return(); Pop(0)

0x3ec: Stack[-1] = (int) 503346
0x3ed: Return(); Pop(0)

0x3ee: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=623
0x3ef: Return(); Pop(0)

0x3f0: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=663
0x3f1: Return(); Pop(0)

0x3f2: Stack[-1] = (bool) 0
0x3f3: Return(); Pop(0)

0x3f4: PushEmpty(string, string)
0x3f5: Stack[-1] = "idle" // @poff=146
0x3f6: Push(Stack[-3])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3f9: Stack[-1] = Stack[-4]
0x3fa: Return(); Pop(2)

0x3fb: PushEmpty(int, bool, int, bool)
0x3fc: Stack[-2] = (int) 0
0x3fd: Push("all") // @poff=138
0x3fe: PushEmpty(string, int)
0x3ff: Stack[-5] = Stack[-1]
0x400: Call2 0x3f4

0x401: Pop(1)
0x402: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: Pop(0); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: GOTO 0x40a

0x407: Push((int) 1)
0x408: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x409: GOTO 0x3fd

0x40a: Stack[-2] = Stack[-5]
0x40b: Return(); Pop(4)

