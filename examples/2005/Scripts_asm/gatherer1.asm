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
	W:Gatherer1_
	W:blood
	A:RemoveItemByType
	W:ookGatherer1
	W:k2q04MorlokGotoAndrei
	W:pt_map_andrei
	A:AddMark
	W:oobSysGatherer1_1
	W:playsound
	W:giveitem
	A:SetReturnValue
	W:k2q04
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:grass_black_tvir
	W:grass_blood_tvir
	W:grass_brown_tvir
	W:branch
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c00650000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c790063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874004861734974656d004700610074006800650072006500720031005f00000062006c006f006f006400000052656d6f76654974656d427954797065006f006f006b0047006100740068006500720065007200310000006b0032007100300034004d006f0072006c006f006b0047006f0074006f0041006e0064007200650069000000700074005f006d00610070005f0061006e00640072006500690000004164644d61726b006f006f0062005300790073004700610074006800650072006500720031005f003100000070006c006100790073006f0075006e006400000067006900760065006900740065006d00000053657452657475726e56616c7565006b0032007100300034000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d617000670072006100730073005f0062006c00610063006b005f0074007600690072000000670072006100730073005f0062006c006f006f0064005f0074007600690072000000670072006100730073005f00620072006f0077006e005f00740076006900720000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000

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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	ClearSubContainer (1 args)
	AddItem (4 args)

RunOp = 0x3d4
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd5 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b7 Vars = (int, int)
	GTASK_5 Vars = (int, int, bool, bool, object, bool, int) Params = 0
		EVENT_0 Op = 0x3e1 Vars = (object)
		EVENT_5 Op = 0x418 Vars = ()
		EVENT_26 Op = 0x455 Vars = (string)
		EVENT_6 Op = 0x462 Vars = ()
		EVENT_7 Op = 0x4a1 Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x724

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0x5b1

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
0x1c: Call2 0x724

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
0x2d: Call2 0x529

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x71e

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x71c

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x720

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x722

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x705

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
0x69: Call2 0x56d

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
0x77: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=0
0x7a: Call2 0xbf

0x7b: Pop(1)
0x7c: Push((int) 525385)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=134
0x80: Pop(0)
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x64b

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x657

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: Push((int) 525387)
0x90: Push((int) 40946)
0x91: Push((int) 26755)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x93: Pop(3)
0x94: Push((int) 539023)
0x95: Push((int) -1)
0x96: Push((int) 40966)
0x97: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x98: Pop(3)
0x99: Push((int) 539024)
0x9a: Push((int) -1)
0x9b: Push((int) 40967)
0x9c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x9d: Pop(3)
0x9e: GOTO 0xa1

0x9f: Return(); Pop(0)

0xa0: GOTO 0x76

0xa1: PushEmpty(bool)
0xa2: Call2 0x724

0xa3: Pop(0)
0xa4: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa5: @ lshWaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: PushEmpty(string)
0xab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xac: Call2 0x5b1

0xad: Pop(1)
0xae: GOTO 0xa5

0xaf: GOTO 0xbe

0xb0: Push("all") // @poff=16
0xb1: Push("idle") // @poff=24
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: @ WaitForAnimEnd()
0xb5: Pop(0)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbe

0xb9: Push("all") // @poff=16
0xba: Push("idle") // @poff=24
0xbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: GOTO 0xb4

0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: PushEmpty(bool)
0xc1: Call2 0x724

0xc2: Pop(0)
0xc3: Pop(1); Push((bool) Stack[-1] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Return(); Pop(0)

0xc6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: Return(); Pop(0)

0xc9: PushEmpty(string, bool)
0xca: Stack[-3] = Stack[-2]
0xcb: Push("") // @poff=13
0xcc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-1] = (bool) 0
0xcf: GOTO 0xd1

0xd0: Stack[-1] = (bool) 1
0xd1: Call2 0x5b8

0xd2: Pop(2)
0xd3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: Push((int) 1)
0xd7: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0xd8: PushEmpty()
0xd9: Call2 0x5c9

0xda: Pop(0)
0xdb: Push((int) 26755)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x621

0xe2: Pop(2)
0xe3: Push((int) 40957)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x627

0xea: Pop(2)
0xeb: Push((int) 40958)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x627

0xf2: Pop(2)
0xf3: Push((int) 40959)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x627

0xfa: Pop(2)
0xfb: Push((int) 26757)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x627

0x102: Pop(2)
0x103: Push((int) 26753)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=0
0x108: Call2 0xbf

0x109: Pop(1)
0x10a: Push((int) 525385)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=134
0x10e: Pop(0)
0x10f: PushEmpty(bool)
0x110: Stack[-1] = (bool) 0
0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x64b

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x657

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Stack[-1] = (bool) 1
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: Push((int) 525387)
0x11e: Push((int) 40946)
0x11f: Push((int) 26755)
0x120: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x121: Pop(3)
0x122: Push((int) 539023)
0x123: Push((int) -1)
0x124: Push((int) 40966)
0x125: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x126: Pop(3)
0x127: Push((int) 539024)
0x128: Push((int) -1)
0x129: Push((int) 40967)
0x12a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 40946)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral" // @poff=0
0x132: Call2 0xbf

0x133: Pop(1)
0x134: Push((int) 539004)
0x135: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x136: Pop(1)
0x137: @@@ ClearReplies(); Obj=0 // @poff=134
0x138: Pop(0)
0x139: Push((int) 539005)
0x13a: Push((int) 40948)
0x13b: Push((int) 40947)
0x13c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x13d: Pop(3)
0x13e: Push((int) 539022)
0x13f: Push((int) 40948)
0x140: Push((int) 40964)
0x141: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: Push((int) 40948)
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral" // @poff=0
0x149: Call2 0xbf

0x14a: Pop(1)
0x14b: Push((int) 539006)
0x14c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x14d: Pop(1)
0x14e: @@@ ClearReplies(); Obj=0 // @poff=134
0x14f: Pop(0)
0x150: Push((int) 539007)
0x151: Push((int) 40950)
0x152: Push((int) 40949)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: Push((int) 40950)
0x157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x159: PushEmpty(string)
0x15a: Stack[-1] = "Neutral" // @poff=0
0x15b: Call2 0xbf

0x15c: Pop(1)
0x15d: Push((int) 539008)
0x15e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x15f: Pop(1)
0x160: @@@ ClearReplies(); Obj=0 // @poff=134
0x161: Pop(0)
0x162: Push((int) 539009)
0x163: Push((int) 40952)
0x164: Push((int) 40951)
0x165: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x166: Pop(3)
0x167: Push((int) 539021)
0x168: Push((int) -1)
0x169: Push((int) 40963)
0x16a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 40952)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral" // @poff=0
0x172: Call2 0xbf

0x173: Pop(1)
0x174: Push((int) 539010)
0x175: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x176: Pop(1)
0x177: @@@ ClearReplies(); Obj=0 // @poff=134
0x178: Pop(0)
0x179: Push((int) 539011)
0x17a: Push((int) 40954)
0x17b: Push((int) 40953)
0x17c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x17d: Pop(3)
0x17e: Push((int) 539018)
0x17f: Push((int) 40961)
0x180: Push((int) 40960)
0x181: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 40961)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral" // @poff=0
0x189: Call2 0xbf

0x18a: Pop(1)
0x18b: Push((int) 539019)
0x18c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x18d: Pop(1)
0x18e: @@@ ClearReplies(); Obj=0 // @poff=134
0x18f: Pop(0)
0x190: Push((int) 525389)
0x191: Push((int) -1)
0x192: Push((int) 26757)
0x193: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 40954)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Neutral" // @poff=0
0x19b: Call2 0xbf

0x19c: Pop(1)
0x19d: Push((int) 539012)
0x19e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x19f: Pop(1)
0x1a0: @@@ ClearReplies(); Obj=0 // @poff=134
0x1a1: Pop(0)
0x1a2: Push((int) 539013)
0x1a3: Push((int) 40956)
0x1a4: Push((int) 40955)
0x1a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1a6: Pop(3)
0x1a7: Push((int) 539017)
0x1a8: Push((int) -1)
0x1a9: Push((int) 40959)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 40956)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Neutral" // @poff=0
0x1b2: Call2 0xbf

0x1b3: Pop(1)
0x1b4: Push((int) 539014)
0x1b5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x1b6: Pop(1)
0x1b7: @@@ ClearReplies(); Obj=0 // @poff=134
0x1b8: Pop(0)
0x1b9: Push((int) 539015)
0x1ba: Push((int) -1)
0x1bb: Push((int) 40957)
0x1bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1bd: Pop(3)
0x1be: Push((int) 539016)
0x1bf: Push((int) -1)
0x1c0: Push((int) 40958)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x724

0x1c7: Pop(0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: @ lshStopAnimation()
0x1ca: Pop(0)
0x1cb: GOTO 0x1ce

0x1cc: @ StopAnimation()
0x1cd: Pop(0)
0x1ce: Return(); Pop(0)

0x1cf: GOTO 0xd6

0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1d2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d3: PushEmpty(bool, object, float)
0x1d4: Stack[-12] = Stack[-2]
0x1d5: Stack[-1] = (float) 110.0
0x1d6: Call2 0x529

0x1d7: Pop(2)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-10] = (int) -2
0x1db: Return(); Pop(8)

0x1dc: @ CreateDialog(Stack[-4])
0x1dd: Pop(0)
0x1de: PushEmpty(int)
0x1df: Call2 0x71e

0x1e0: Pop(0)
0x1e1: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x1e2: Pop(1)
0x1e3: PushEmpty(int)
0x1e4: Call2 0x71c

0x1e5: Pop(0)
0x1e6: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x1e7: Pop(1)
0x1e8: PushEmpty(string)
0x1e9: Call2 0x720

0x1ea: Pop(0)
0x1eb: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x1ec: Pop(1)
0x1ed: PushEmpty(string)
0x1ee: Call2 0x722

0x1ef: Pop(0)
0x1f0: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x1f1: Pop(1)
0x1f2: PushEmpty(int)
0x1f3: Call2 0x705

0x1f4: Pop(0)
0x1f5: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x1f6: Pop(1)
0x1f7: Stack[-2] = (int) -1
0x1f8: @ IsOverrideActive(Stack[-3])
0x1f9: Pop(0)
0x1fa: Push(Stack[-3])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-10] = (int) -2
0x1fd: Return(); Pop(8)

0x1fe: @ DoDialog(Stack[-4])
0x1ff: Pop(0)
0x200: PushEmpty(object, object)
0x201: Stack[-11] = Stack[-2]
0x202: Stack[-6] = Stack[-1]
0x203: Push(-2, 4); TaskCall(4)
0x204: Call2 0x21b

0x205: Pop(-2, 4); TaskReturn
0x206: Pop(2)
0x207: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x208: Pop(0)
0x209: Pop(0); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: @ sync()
0x20c: Pop(0)
0x20d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x20e: Pop(0)
0x20f: GOTO 0x209

0x210: PushEmpty(object)
0x211: Stack[-10] = Stack[-1]
0x212: Call2 0x56d

0x213: Pop(1)
0x214: @ StopDialog(Stack[-4])
0x215: Pop(0)
0x216: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x217: Pop(0)
0x218: Stack[-2] = Stack[-10]
0x219: Return(); Pop(8)

0x21a: Stack[-4] = 0
0x21b: PushEmpty()
0x21c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x21d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x21e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x21f: Push((int) 1)
0x220: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x221: PushEmpty(bool)
0x222: Stack[-1] = (bool) 0
0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x67a

0x226: Pop(1)
0x227: Pop(1); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x229: PushEmpty(bool, object)
0x22a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22b: Call2 0x66f

0x22c: Pop(1)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral" // @poff=0
0x233: Call2 0x2a1

0x234: Pop(1)
0x235: Push((int) 518145)
0x236: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x237: Pop(1)
0x238: @@@ ClearReplies(); Obj=0 // @poff=134
0x239: Pop(0)
0x23a: Push((int) 518146)
0x23b: Push((int) 19260)
0x23c: Push((int) 19259)
0x23d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x23e: Pop(3)
0x23f: Push((int) 529952)
0x240: Push((int) -1)
0x241: Push((int) 31336)
0x242: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x243: Pop(3)
0x244: GOTO 0x283

0x245: PushEmpty(bool)
0x246: Stack[-1] = (bool) 0
0x247: PushEmpty(bool, object)
0x248: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x249: Call2 0x66f

0x24a: Pop(1)
0x24b: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Call2 0x67a

0x24f: Pop(1)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral" // @poff=0
0x256: Call2 0x2a1

0x257: Pop(1)
0x258: Push((int) 518150)
0x259: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x25a: Pop(1)
0x25b: @@@ ClearReplies(); Obj=0 // @poff=134
0x25c: Pop(0)
0x25d: Push((int) 518151)
0x25e: Push((int) 19265)
0x25f: Push((int) 19264)
0x260: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x261: Pop(3)
0x262: GOTO 0x283

0x263: PushEmpty(string)
0x264: Stack[-1] = "Neutral" // @poff=0
0x265: Call2 0x2a1

0x266: Pop(1)
0x267: Push((int) 518155)
0x268: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x269: Pop(1)
0x26a: @@@ ClearReplies(); Obj=0 // @poff=134
0x26b: Pop(0)
0x26c: Push((int) 518156)
0x26d: Push((int) -1)
0x26e: Push((int) 19269)
0x26f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x270: Pop(3)
0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x273: Call2 0x663

0x274: Pop(1)
0x275: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x276: Push((int) 518199)
0x277: Push((int) 19313)
0x278: Push((int) 19312)
0x279: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x27a: Pop(3)
0x27b: Push((int) 518157)
0x27c: Push((int) -1)
0x27d: Push((int) 19270)
0x27e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x27f: Pop(3)
0x280: GOTO 0x283

0x281: Return(); Pop(0)

0x282: GOTO 0x21f

0x283: PushEmpty(bool)
0x284: Call2 0x724

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x287: @ lshWaitForAnimEnd()
0x288: Pop(0)
0x289: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x291

0x28c: PushEmpty(string)
0x28d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28e: Call2 0x5b1

0x28f: Pop(1)
0x290: GOTO 0x287

0x291: GOTO 0x2a0

0x292: Push("all") // @poff=16
0x293: Push("idle") // @poff=24
0x294: @ PlayAnimation(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: @ WaitForAnimEnd()
0x297: Pop(0)
0x298: Push( Stack[3 + Tasks[-1].StackPointer] )
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x2a0

0x29b: Push("all") // @poff=16
0x29c: Push("idle") // @poff=24
0x29d: @ PlayAnimation(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: GOTO 0x296

0x2a0: Return(); Pop(0)

0x2a1: PushEmpty()
0x2a2: PushEmpty(bool)
0x2a3: Call2 0x724

0x2a4: Pop(0)
0x2a5: Pop(1); Push((bool) Stack[-1] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Return(); Pop(0)

0x2a8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(string, bool)
0x2ac: Stack[-3] = Stack[-2]
0x2ad: Push("") // @poff=13
0x2ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-1] = (bool) 0
0x2b1: GOTO 0x2b3

0x2b2: Stack[-1] = (bool) 1
0x2b3: Call2 0x5b8

0x2b4: Pop(2)
0x2b5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty()
0x2b8: Push((int) 1)
0x2b9: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x2ba: PushEmpty()
0x2bb: Call2 0x5c9

0x2bc: Pop(0)
0x2bd: Push((int) 19266)
0x2be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c0: PushEmpty(object, object)
0x2c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x612

0x2c4: Pop(2)
0x2c5: PushEmpty(object, object)
0x2c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x640

0x2c9: Pop(2)
0x2ca: Push((int) 19269)
0x2cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cd: PushEmpty(object, object)
0x2ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call2 0x646

0x2d1: Pop(2)
0x2d2: Push((int) 19312)
0x2d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: PushEmpty(object, object)
0x2d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d8: Call2 0x63a

0x2d9: Pop(2)
0x2da: Push((int) 19258)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x2dd: PushEmpty(bool)
0x2de: Stack[-1] = (bool) 0
0x2df: PushEmpty(bool, object)
0x2e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e1: Call2 0x67a

0x2e2: Pop(1)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call2 0x66f

0x2e8: Pop(1)
0x2e9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ed: PushEmpty(string)
0x2ee: Stack[-1] = "Neutral" // @poff=0
0x2ef: Call2 0x2a1

0x2f0: Pop(1)
0x2f1: Push((int) 518145)
0x2f2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x2f3: Pop(1)
0x2f4: @@@ ClearReplies(); Obj=0 // @poff=134
0x2f5: Pop(0)
0x2f6: Push((int) 518146)
0x2f7: Push((int) 19260)
0x2f8: Push((int) 19259)
0x2f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2fa: Pop(3)
0x2fb: Push((int) 529952)
0x2fc: Push((int) -1)
0x2fd: Push((int) 31336)
0x2fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: PushEmpty(bool)
0x302: Stack[-1] = (bool) 0
0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x305: Call2 0x66f

0x306: Pop(1)
0x307: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x308: PushEmpty(bool, object)
0x309: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Call2 0x67a

0x30b: Pop(1)
0x30c: Pop(1); Push((bool) Stack[-1] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: Stack[-1] = (bool) 1
0x30f: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "Neutral" // @poff=0
0x312: Call2 0x2a1

0x313: Pop(1)
0x314: Push((int) 518150)
0x315: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x316: Pop(1)
0x317: @@@ ClearReplies(); Obj=0 // @poff=134
0x318: Pop(0)
0x319: Push((int) 518151)
0x31a: Push((int) 19265)
0x31b: Push((int) 19264)
0x31c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Neutral" // @poff=0
0x321: Call2 0x2a1

0x322: Pop(1)
0x323: Push((int) 518155)
0x324: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x325: Pop(1)
0x326: @@@ ClearReplies(); Obj=0 // @poff=134
0x327: Pop(0)
0x328: Push((int) 518156)
0x329: Push((int) -1)
0x32a: Push((int) 19269)
0x32b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x32c: Pop(3)
0x32d: PushEmpty(bool, object)
0x32e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32f: Call2 0x663

0x330: Pop(1)
0x331: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x332: Push((int) 518199)
0x333: Push((int) 19313)
0x334: Push((int) 19312)
0x335: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x336: Pop(3)
0x337: Push((int) 518157)
0x338: Push((int) -1)
0x339: Push((int) 19270)
0x33a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 19313)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral" // @poff=0
0x342: Call2 0x2a1

0x343: Pop(1)
0x344: Push((int) 518200)
0x345: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x346: Pop(1)
0x347: @@@ ClearReplies(); Obj=0 // @poff=134
0x348: Pop(0)
0x349: Push((int) 534598)
0x34a: Push((int) 36237)
0x34b: Push((int) 36236)
0x34c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x34d: Pop(3)
0x34e: Push((int) 518201)
0x34f: Push((int) -1)
0x350: Push((int) 19314)
0x351: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x352: Pop(3)
0x353: Return(); Pop(0)

0x354: Push((int) 36237)
0x355: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x357: PushEmpty(string)
0x358: Stack[-1] = "Neutral" // @poff=0
0x359: Call2 0x2a1

0x35a: Pop(1)
0x35b: Push((int) 534599)
0x35c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x35d: Pop(1)
0x35e: @@@ ClearReplies(); Obj=0 // @poff=134
0x35f: Pop(0)
0x360: Push((int) 534600)
0x361: Push((int) -1)
0x362: Push((int) 36238)
0x363: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x364: Pop(3)
0x365: Push((int) 534601)
0x366: Push((int) 36240)
0x367: Push((int) 36239)
0x368: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 36240)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral" // @poff=0
0x370: Call2 0x2a1

0x371: Pop(1)
0x372: Push((int) 534602)
0x373: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x374: Pop(1)
0x375: @@@ ClearReplies(); Obj=0 // @poff=134
0x376: Pop(0)
0x377: Push((int) 534603)
0x378: Push((int) -1)
0x379: Push((int) 36241)
0x37a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x37b: Pop(3)
0x37c: Push((int) 534604)
0x37d: Push((int) -1)
0x37e: Push((int) 36242)
0x37f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 19265)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral" // @poff=0
0x387: Call2 0x2a1

0x388: Pop(1)
0x389: Push((int) 518152)
0x38a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x38b: Pop(1)
0x38c: @@@ ClearReplies(); Obj=0 // @poff=134
0x38d: Pop(0)
0x38e: Push((int) 518153)
0x38f: Push((int) -1)
0x390: Push((int) 19266)
0x391: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x392: Pop(3)
0x393: Push((int) 518154)
0x394: Push((int) -1)
0x395: Push((int) 19267)
0x396: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Push((int) 19260)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Neutral" // @poff=0
0x39e: Call2 0x2a1

0x39f: Pop(1)
0x3a0: Push((int) 518147)
0x3a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x3a2: Pop(1)
0x3a3: @@@ ClearReplies(); Obj=0 // @poff=134
0x3a4: Pop(0)
0x3a5: Push((int) 529953)
0x3a6: Push((int) 31339)
0x3a7: Push((int) 31337)
0x3a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3a9: Pop(3)
0x3aa: Push((int) 529954)
0x3ab: Push((int) -1)
0x3ac: Push((int) 31338)
0x3ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 31339)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Neutral" // @poff=0
0x3b5: Call2 0x2a1

0x3b6: Pop(1)
0x3b7: Push((int) 529955)
0x3b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x3b9: Pop(1)
0x3ba: @@@ ClearReplies(); Obj=0 // @poff=134
0x3bb: Pop(0)
0x3bc: Push((int) 518148)
0x3bd: Push((int) -1)
0x3be: Push((int) 19261)
0x3bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3c0: Pop(3)
0x3c1: Push((int) 518162)
0x3c2: Push((int) -1)
0x3c3: Push((int) 19275)
0x3c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c8: PushEmpty(bool)
0x3c9: Call2 0x724

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cc: @ lshStopAnimation()
0x3cd: Pop(0)
0x3ce: GOTO 0x3d1

0x3cf: @ StopAnimation()
0x3d0: Pop(0)
0x3d1: Return(); Pop(0)

0x3d2: GOTO 0x2b8

0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(int)
0x3d5: Call2 0x5f1

0x3d6: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x3d7: Pop(1)
0x3d8: PushEmpty()
0x3d9: Call2 0x6d7

0x3da: Pop(0)
0x3db: PushEmpty(float, float)
0x3dc: Stack[-2] = (int) 300
0x3dd: Stack[-1] = (int) 100
0x3de: Call2 0x428

0x3df: Pop(2)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(int, int)
0x3e2: PushEmpty()
0x3e3: Call2 0x4b8

0x3e4: Pop(0)
0x3e5: PushEmpty(int)
0x3e6: Call2 0x716

0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: PushEmpty(int, object)
0x3ec: Stack[-5] = Stack[-1]
0x3ed: Push(-2, 1); TaskCall(3)
0x3ee: Call2 0x1d1

0x3ef: Pop(-2, 1); TaskReturn
0x3f0: Stack[-2] = Stack[-3]
0x3f1: Pop(2)
0x3f2: GOTO 0x402

0x3f3: PushEmpty(int)
0x3f4: Call2 0x716

0x3f5: Pop(0)
0x3f6: Push((int) 2)
0x3f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f9: PushEmpty(int, object)
0x3fa: Stack[-5] = Stack[-1]
0x3fb: Push(-2, 1); TaskCall(1)
0x3fc: Call2 0x28

0x3fd: Pop(-2, 1); TaskReturn
0x3fe: Stack[-2] = Stack[-3]
0x3ff: Pop(2)
0x400: GOTO 0x402

0x401: Return(); Pop(2)

0x402: Push((int) 1000)
0x403: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0x404: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x405: PushEmpty(bool, object, float)
0x406: Stack[-6] = Stack[-2]
0x407: Stack[-1] = (float) 110.0
0x408: Call2 0x57e

0x409: Pop(2)
0x40a: Pop(1); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: Return(); Pop(2)

0x40d: PushEmpty(object)
0x40e: Stack[-4] = Stack[-1]
0x40f: Push(-1, 1); TaskCall(0)
0x410: Call2 0x0

0x411: Pop(-1, 1); TaskReturn
0x412: Pop(1)
0x413: PushEmpty(object)
0x414: Stack[-4] = Stack[-1]
0x415: Call2 0x5ad

0x416: Pop(1)
0x417: Return(); Pop(2)

0x418: PushEmpty(int)
0x419: Call2 0x5f1

0x41a: Pop(0)
0x41b: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] != Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41d: PushEmpty()
0x41e: Call2 0x6d7

0x41f: Pop(0)
0x420: PushEmpty(int)
0x421: Call2 0x5f1

0x422: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x423: Pop(1)
0x424: PushEmpty()
0x425: Call2 0x45d

0x426: Pop(0)
0x427: Return(); Pop(0)

0x428: PushEmpty(float, float)
0x429: PushEmpty(bool)
0x42a: Call2 0x524

0x42b: Pop(0)
0x42c: Pop(1); Push((bool) Stack[-1] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42e: @ Hold()
0x42f: Pop(0)
0x430: GOTO 0x429

0x431: Push((int) 3)
0x432: @ rand(Stack[-2], Stack[-1])
0x433: Pop(1)
0x434: Push((int) 3)
0x435: Pop(1); Push(Stack[-2] + Stack[-1]);
0x436: @ Sleep(Stack[-1])
0x437: Pop(1)
0x438: PushEmpty(float, float)
0x439: Stack[-6] = Stack[-2]
0x43a: Stack[-5] = Stack[-1]
0x43b: Call2 0x477

0x43c: Pop(2)
0x43d: @ sync()
0x43e: Pop(0)
0x43f: GOTO 0x429

0x440: Return(); Pop(2)

0x441: PushEmpty(bool, bool)
0x442: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x443: @ IsLoaded(Stack[-1])
0x444: Pop(0)
0x445: PushEmpty(bool)
0x446: Stack[-1] = (bool) 0
0x447: Pop(0); Push((bool) Stack[-2] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x449: PushEmpty(bool)
0x44a: Call2 0x475

0x44b: Pop(0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (bool) 1
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: PushEmpty(object)
0x450: Call2 0x5d0

0x451: Pop(0)
0x452: @ RemoveActor(Stack[-1])
0x453: Pop(1)
0x454: Return(); Pop(2)

0x455: PushEmpty()
0x456: Push("cleanup") // @poff=156
0x457: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: PushEmpty()
0x45a: Call2 0x441

0x45b: Pop(0)
0x45c: Return(); Pop(0)

0x45d: @ StopGroup0()
0x45e: Pop(0)
0x45f: @ sync()
0x460: Pop(0)
0x461: Return(); Pop(0)

0x462: PushEmpty()
0x463: Call2 0x4b8

0x464: Pop(0)
0x465: PushEmpty(bool)
0x466: Stack[-1] = (bool) 0
0x467: Push( Stack[5 + Tasks[-1].StackPointer] )
0x468: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x469: PushEmpty(bool)
0x46a: Call2 0x475

0x46b: Pop(0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (bool) 1
0x46e: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46f: PushEmpty(object)
0x470: Call2 0x5d0

0x471: Pop(0)
0x472: @ RemoveActor(Stack[-1])
0x473: Pop(1)
0x474: Return(); Pop(0)

0x475: Stack[-1] = (bool) 1
0x476: Return(); Pop(0)

0x477: PushEmpty()
0x478: PushEmpty(bool)
0x479: Call2 0x524

0x47a: Pop(0)
0x47b: Pop(1); Push((bool) Stack[-1] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: Return(); Pop(0)

0x47e: Push("player") // @poff=172
0x47f: @ FindActor(Stack[-4]T, Stack[-1])
0x480: Pop(1)
0x481: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x482: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x483: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x484: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x485: Push((int) 10)
0x486: Push((float)1.0)
0x487: @ SetTimer(Stack[-2], Stack[-1])
0x488: Pop(2)
0x489: PushEmpty()
0x48a: Call2 0x4c6

0x48b: Pop(0)
0x48c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48e: Push((int) 10)
0x48f: @ KillTimer(Stack[-1])
0x490: Pop(1)
0x491: Return(); Pop(0)

0x492: PushEmpty(float, float)
0x493: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x495: Stack[-3] = (bool) 0
0x496: Return(); Pop(2)

0x497: PushEmpty(float, object)
0x498: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x499: Call2 0x51c

0x49a: Pop(1)
0x49b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x49c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x49d: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49e: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x49f: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty()
0x4a2: Push((int) 10)
0x4a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4a5: PushEmpty(bool)
0x4a6: Call2 0x492

0x4a7: Pop(0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ab: PushEmpty(object)
0x4ac: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x4ad: Call2 0x5be

0x4ae: Pop(1)
0x4af: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4b0: GOTO 0x4b7

0x4b1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b3: Push("head") // @poff=186
0x4b4: @ UnlookAsync(Stack[-1])
0x4b5: Pop(1)
0x4b6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4b7: Return(); Pop(0)

0x4b8: PushEmpty()
0x4b9: Call2 0x517

0x4ba: Pop(0)
0x4bb: Push((int) 10)
0x4bc: @ KillTimer(Stack[-1])
0x4bd: Pop(1)
0x4be: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c0: Push("head") // @poff=186
0x4c1: @ UnlookAsync(Stack[-1])
0x4c2: Pop(1)
0x4c3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4c4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4c5: Return(); Pop(0)

0x4c6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4c7: @ WaitForAnimEnd()
0x4c8: Pop(0)
0x4c9: PushEmpty(bool)
0x4ca: Call2 0x524

0x4cb: Pop(0)
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Return(); Pop(14)

0x4cf: PushEmpty(int)
0x4d0: Call2 0x601

0x4d1: Stack[-1] = Stack[-8]
0x4d2: Pop(1)
0x4d3: Stack[-6] = (int) 0
0x4d4: PushEmpty(bool)
0x4d5: Stack[-1] = (bool) 0
0x4d6: Push((int) 5)
0x4d7: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d9: PushEmpty(bool)
0x4da: Call2 0x524

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Stack[-1] = (bool) 1
0x4de: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4df: Push((int) 3)
0x4e0: @ irand(Stack[-6], Stack[-1])
0x4e1: Pop(1)
0x4e2: Push((int) 0)
0x4e3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4e5: Push(Stack[-7])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e7: @ irand(Stack[-4], Stack[-7])
0x4e8: Pop(0)
0x4e9: Push("all") // @poff=16
0x4ea: PushEmpty(string, int)
0x4eb: Stack[-7] = Stack[-1]
0x4ec: Call2 0x5fa

0x4ed: Pop(1)
0x4ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ef: Pop(2)
0x4f0: @ WaitForAnimEnd(Stack[-3])
0x4f1: Pop(0)
0x4f2: Pop(0); Push((bool) Stack[-3] == 0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: GOTO 0x512

0x4f5: GOTO 0x507

0x4f6: Push((int) 1)
0x4f7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4f9: Push((int) 4)
0x4fa: @ rand(Stack[-3], Stack[-1])
0x4fb: Pop(1)
0x4fc: Push((int) 1)
0x4fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4fe: @ Sleep(Stack[-1], Stack[-2])
0x4ff: Pop(1)
0x500: Pop(0); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: GOTO 0x512

0x503: GOTO 0x507

0x504: Push(Stack[-6])
0x505: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x506: GOTO 0x512

0x507: PushEmpty(bool)
0x508: Call2 0x515

0x509: Pop(0)
0x50a: Pop(1); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: GOTO 0x512

0x50d: @ ResetAAS()
0x50e: Pop(0)
0x50f: Push((int) 1)
0x510: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x511: GOTO 0x4d4

0x512: @ ResetAAS()
0x513: Pop(0)
0x514: Return(); Pop(14)

0x515: Stack[-1] = (bool) 1
0x516: Return(); Pop(0)

0x517: @ StopAnimation()
0x518: Pop(0)
0x519: @ StopGroup0()
0x51a: Pop(0)
0x51b: Return(); Pop(0)

0x51c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x51d: @ GetPosition(Stack[-3])
0x51e: Pop(0)
0x51f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x520: Pop(0)
0x521: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x522: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x523: Return(); Pop(6)

0x524: PushEmpty(bool, bool)
0x525: @ IsLoaded(Stack[-1])
0x526: Pop(0)
0x527: Stack[-1] = Stack[-3]
0x528: Return(); Pop(2)

0x529: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x52a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x52b: Pop(0)
0x52c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x52d: Pop(0)
0x52e: Push(CvectorIndex(Stack[-8], 1))
0x52f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x530: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x531: @ GetPosition(Stack[-7])
0x532: Pop(0)
0x533: @ GetEyesHeight(Stack[-9])
0x534: Pop(0)
0x535: Push(CvectorIndex(Stack[-7], 1))
0x536: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x537: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x538: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x539: Push(CvectorIndex(Stack[-6], 1))
0x53a: Stack[-1] = (int) 0
0x53b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x53c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x53d: Pop(1); Push(Sqrt(Stack[-1]))
0x53e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x53f: Stack[-5] = -Stack[-6]; Pop(0);
0x540: Pop(0); Push(Stack[-6] * Stack[-19]);
0x541: PushEmpty(cvector, cvector)
0x542: Push([0.0, 1.0, 0.0])
0x543: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x544: Call2 0x5d6

0x545: Pop(1)
0x546: Push((int) 25)
0x547: Pop(2); Push(Stack[-2] * Stack[-1]);
0x548: Pop(2); Push(Stack[-2] + Stack[-1]);
0x549: Push([0.0, 10.0, 0.0])
0x54a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x54b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x54c: @ IsOverrideActive(Stack[-2])
0x54d: Pop(0)
0x54e: Push(Stack[-2])
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-21] = (bool) 0
0x551: Return(); Pop(18)

0x552: @ StopWorld()
0x553: Pop(0)
0x554: @ CameraTransit(Stack[-3], Stack[-5])
0x555: Pop(0)
0x556: Push(CvectorIndex(Stack[-4], 0))
0x557: Push(CvectorIndex(Stack[-5], 2))
0x558: @ Rotate(Stack[-2], Stack[-1])
0x559: Pop(2)
0x55a: PushEmpty(bool)
0x55b: Call2 0x724

0x55c: Pop(0)
0x55d: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55e: GOTO 0x567

0x55f: Push("head") // @poff=186
0x560: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x561: Pop(1)
0x562: Push(Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x564: Push("head") // @poff=186
0x565: @ LookAsyncCamera(Stack[-1])
0x566: Pop(1)
0x567: @ CameraWaitForPlayFinish()
0x568: Pop(0)
0x569: @ ResumeWorld()
0x56a: Pop(0)
0x56b: Stack[-21] = (bool) 1
0x56c: Return(); Pop(18)

0x56d: PushEmpty(bool, bool)
0x56e: @ CameraSwitchToNormal()
0x56f: Pop(0)
0x570: PushEmpty(bool)
0x571: Call2 0x724

0x572: Pop(0)
0x573: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x574: GOTO 0x57d

0x575: Push("head") // @poff=186
0x576: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x577: Pop(1)
0x578: Push(Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57a: Push("head") // @poff=186
0x57b: @ UnlookAsync(Stack[-1])
0x57c: Pop(1)
0x57d: Return(); Pop(2)

0x57e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x57f: @@ GetPosition(Stack[-7]); Obj=18 // @poff=196
0x580: Pop(0)
0x581: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=208
0x582: Pop(0)
0x583: Push(CvectorIndex(Stack[-7], 1))
0x584: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x585: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x586: @ GetPosition(Stack[-6])
0x587: Pop(0)
0x588: @ GetEyesHeight(Stack[-8])
0x589: Pop(0)
0x58a: Push(CvectorIndex(Stack[-6], 1))
0x58b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x58c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x58d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x58e: Push(CvectorIndex(Stack[-5], 1))
0x58f: Stack[-1] = (int) 0
0x590: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x591: Pop(0); Push(Stack[-5] | Stack[-5]);
0x592: Pop(1); Push(Sqrt(Stack[-1]))
0x593: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x594: Stack[-4] = -Stack[-5]; Pop(0);
0x595: Pop(0); Push(Stack[-5] * Stack[-17]);
0x596: Push([0.0, 10.0, 0.0])
0x597: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x598: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x599: @ IsOverrideActive(Stack[-1])
0x59a: Pop(0)
0x59b: Push(Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59d: Stack[-19] = (bool) 0
0x59e: Return(); Pop(16)

0x59f: @ StopWorld()
0x5a0: Pop(0)
0x5a1: @ CameraTransit(Stack[-2], Stack[-4])
0x5a2: Pop(0)
0x5a3: Push(CvectorIndex(Stack[-3], 0))
0x5a4: Push(CvectorIndex(Stack[-4], 2))
0x5a5: @ Rotate(Stack[-2], Stack[-1])
0x5a6: Pop(2)
0x5a7: @ CameraWaitForPlayFinish()
0x5a8: Pop(0)
0x5a9: @ ResumeWorld()
0x5aa: Pop(0)
0x5ab: Stack[-19] = (bool) 1
0x5ac: Return(); Pop(16)

0x5ad: PushEmpty()
0x5ae: @ CameraSwitchToNormal()
0x5af: Pop(0)
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty(float, float, float, float)
0x5b2: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5b3: Pop(0)
0x5b4: Push((bool) 0)
0x5b5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(1)
0x5b7: Return(); Pop(4)

0x5b8: PushEmpty(float, float, float, float)
0x5b9: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x5ba: Pop(0)
0x5bb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x5bc: Pop(0)
0x5bd: Return(); Pop(4)

0x5be: PushEmpty(float, cvector, float, cvector)
0x5bf: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x5c0: Pop(0)
0x5c1: Stack[-1] = [0.0, 0.0, 0.0]
0x5c2: Push(CvectorIndex(Stack[-1], 1))
0x5c3: Stack[-3] = Stack[-1]
0x5c4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5c5: Push("head") // @poff=186
0x5c6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5c7: Pop(1)
0x5c8: Return(); Pop(4)

0x5c9: PushEmpty(bool)
0x5ca: Call2 0x724

0x5cb: Pop(0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: @ lshStopSpeech()
0x5ce: Pop(0)
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty(object, object)
0x5d1: @ self(Stack[-1])
0x5d2: Pop(0)
0x5d3: Stack[-1] = Stack[-3]
0x5d4: Return(); Pop(2)

0x5d5: Stack[-1] = 0
0x5d6: PushEmpty(float, float)
0x5d7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5d9: Push((float)9.999999974752427e-07)
0x5da: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dc: Stack[-4] = [0.0, 0.0, 0.0]
0x5dd: Return(); Pop(2)

0x5de: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5df: Return(); Pop(2)

0x5e0: PushEmpty(int, int)
0x5e1: @ GetVariable(Stack[-3], Stack[-1])
0x5e2: Pop(0)
0x5e3: Stack[-1] = Stack[-4]
0x5e4: Return(); Pop(2)

0x5e5: PushEmpty(int, bool, int, bool)
0x5e6: @ GetInvItemByName(Stack[-2], Stack[-5])
0x5e7: Pop(0)
0x5e8: @@ HasItem(Stack[-2], Stack[-1]); Obj=6 // @poff=222
0x5e9: Pop(0)
0x5ea: Stack[-1] = Stack[-7]
0x5eb: Return(); Pop(4)

0x5ec: PushEmpty(float, float)
0x5ed: @ GetGameTime(Stack[-1])
0x5ee: Pop(0)
0x5ef: Stack[-1] = Stack[-3]
0x5f0: Return(); Pop(2)

0x5f1: PushEmpty(float, float)
0x5f2: @ GetGameTime(Stack[-1])
0x5f3: Pop(0)
0x5f4: Push((int) 1)
0x5f5: PushEmpty(int)
0x5f6: Push((int) 24)
0x5f7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5f8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(string, string)
0x5fb: Stack[-1] = "idle" // @poff=24
0x5fc: Push(Stack[-3])
0x5fd: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fe: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5ff: Stack[-1] = Stack[-4]
0x600: Return(); Pop(2)

0x601: PushEmpty(int, bool, int, bool)
0x602: Stack[-2] = (int) 0
0x603: Push("all") // @poff=16
0x604: PushEmpty(string, int)
0x605: Stack[-5] = Stack[-1]
0x606: Call2 0x5fa

0x607: Pop(1)
0x608: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x609: Pop(2)
0x60a: Pop(0); Push((bool) Stack[-1] == 0)
0x60b: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60c: GOTO 0x610

0x60d: Push((int) 1)
0x60e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x60f: GOTO 0x603

0x610: Stack[-2] = Stack[-5]
0x611: Return(); Pop(4)

0x612: PushEmpty(int, int, int, int)
0x613: PushEmpty(int)
0x614: Call2 0x5f1

0x615: Stack[-1] = Stack[-3]
0x616: Pop(1)
0x617: Push("Gatherer1_") // @poff=230
0x618: Pop(1); Push(Stack[-1] + Stack[-3]);
0x619: Push((int) 1)
0x61a: @ SetVariable(Stack[-2], Stack[-1])
0x61b: Pop(2)
0x61c: Push("blood") // @poff=252
0x61d: Push((int) 1)
0x61e: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1]); Obj=8 // @poff=264
0x61f: Pop(2)
0x620: Return(); Pop(4)

0x621: PushEmpty()
0x622: Push("ookGatherer1") // @poff=281
0x623: Push((int) 1)
0x624: @ SetVariable(Stack[-2], Stack[-1])
0x625: Pop(2)
0x626: Return(); Pop(0)

0x627: PushEmpty(object, object)
0x628: PushEmpty(object)
0x629: Call2 0x6c6

0x62a: Stack[-1] = Stack[-2]
0x62b: Pop(1)
0x62c: Push("k2q04MorlokGotoAndrei") // @poff=307
0x62d: Push("pt_map_andrei") // @poff=351
0x62e: Push((int) 0)
0x62f: Push((int) 539378)
0x630: PushEmpty(float)
0x631: Call2 0x5ec

0x632: Pop(0)
0x633: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=379
0x634: Pop(5)
0x635: PushEmpty()
0x636: Call2 0x690

0x637: Pop(0)
0x638: Return(); Pop(2)

0x639: Stack[-1] = 0
0x63a: PushEmpty()
0x63b: Push("oobSysGatherer1_1") // @poff=387
0x63c: Push((int) 1)
0x63d: @ SetVariable(Stack[-2], Stack[-1])
0x63e: Pop(2)
0x63f: Return(); Pop(0)

0x640: PushEmpty()
0x641: Push("playsound") // @poff=423
0x642: Push("giveitem") // @poff=443
0x643: @ TriggerWorld(Stack[-2], Stack[-1])
0x644: Pop(2)
0x645: Return(); Pop(0)

0x646: PushEmpty()
0x647: Push((int) 1000)
0x648: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=461
0x649: Pop(1)
0x64a: Return(); Pop(0)

0x64b: PushEmpty()
0x64c: PushEmpty(int, string)
0x64d: Stack[-1] = "k2q04" // @poff=476
0x64e: Call2 0x5e0

0x64f: Pop(1)
0x650: Push((int) 2)
0x651: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-2] = (bool) 1
0x654: Return(); Pop(0)

0x655: Stack[-2] = (bool) 0
0x656: Return(); Pop(0)

0x657: PushEmpty()
0x658: PushEmpty(int, string)
0x659: Stack[-1] = "ookGatherer1" // @poff=281
0x65a: Call2 0x5e0

0x65b: Pop(1)
0x65c: Push((int) 0)
0x65d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65f: Stack[-2] = (bool) 1
0x660: Return(); Pop(0)

0x661: Stack[-2] = (bool) 0
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty(int, string)
0x665: Stack[-1] = "oobSysGatherer1_1" // @poff=387
0x666: Call2 0x5e0

0x667: Pop(1)
0x668: Push((int) 0)
0x669: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66b: Stack[-2] = (bool) 1
0x66c: Return(); Pop(0)

0x66d: Stack[-2] = (bool) 0
0x66e: Return(); Pop(0)

0x66f: PushEmpty()
0x670: PushEmpty(bool, object, string)
0x671: Stack[-4] = Stack[-2]
0x672: Stack[-1] = "blood" // @poff=252
0x673: Call2 0x5e5

0x674: Pop(2)
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-2] = (bool) 1
0x677: Return(); Pop(0)

0x678: Stack[-2] = (bool) 0
0x679: Return(); Pop(0)

0x67a: PushEmpty()
0x67b: PushEmpty(bool, object)
0x67c: Stack[-3] = Stack[-1]
0x67d: Call2 0x684

0x67e: Pop(1)
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-2] = (bool) 1
0x681: Return(); Pop(0)

0x682: Stack[-2] = (bool) 0
0x683: Return(); Pop(0)

0x684: PushEmpty(int, int, int, int)
0x685: PushEmpty(int)
0x686: Call2 0x5f1

0x687: Stack[-1] = Stack[-3]
0x688: Pop(1)
0x689: Push("Gatherer1_") // @poff=230
0x68a: Pop(1); Push(Stack[-1] + Stack[-3]);
0x68b: @ GetVariable(Stack[-1], Stack[-2])
0x68c: Pop(1)
0x68d: Push((int) 0)
0x68e: Stack[-7] = Stack[-2] != Stack[-1]; Pop(1);
0x68f: Return(); Pop(4)

0x690: PushEmpty(object, object)
0x691: Push((int) 511)
0x692: Push((int) 2)
0x693: Push((int) 529710)
0x694: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x695: Pop(3)
0x696: PushEmpty(bool, object, int)
0x697: Stack[-4] = Stack[-2]
0x698: Stack[-1] = (int) 507
0x699: Call2 0x6aa

0x69a: Pop(3)
0x69b: Return(); Pop(2)

0x69c: Stack[-1] = 0
0x69d: PushEmpty(object, object)
0x69e: @ GetDiaryRoot(Stack[-1])
0x69f: Pop(0)
0x6a0: Pop(0); Push((bool) Stack[-1] == 0)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a2: Push("Can't retrieve diary root") // @poff=488
0x6a3: @ Trace(Stack[-1])
0x6a4: Pop(1)
0x6a5: Stack[-3] = (bool) 0
0x6a6: Return(); Pop(2)

0x6a7: Stack[-1] = Stack[-3]
0x6a8: Return(); Pop(2)

0x6a9: Stack[-1] = 0
0x6aa: PushEmpty(object, object, int, object, object, int)
0x6ab: PushEmpty(object)
0x6ac: Call2 0x69d

0x6ad: Stack[-1] = Stack[-4]
0x6ae: Pop(1)
0x6af: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=540
0x6b0: Pop(0)
0x6b1: Pop(0); Push((bool) Stack[-2] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b3: Push("Can't find diary parent with id: ") // @poff=545
0x6b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6b5: @ Trace(Stack[-1])
0x6b6: Pop(1)
0x6b7: Stack[-9] = (bool) 0
0x6b8: Return(); Pop(6)

0x6b9: @@ AddChild(Stack[-8]); Obj=2 // @poff=613
0x6ba: Pop(0)
0x6bb: Push((int) 7)
0x6bc: @ SendWorldWndMessage(Stack[-1])
0x6bd: Pop(1)
0x6be: @@ GetCategory(Stack[-1]); Obj=8 // @poff=622
0x6bf: Pop(0)
0x6c0: @ SetDiarySection(Stack[-1])
0x6c1: Pop(0)
0x6c2: Stack[-9] = (bool) 0
0x6c3: Return(); Pop(6)

0x6c4: Stack[-2] = 0
0x6c5: Stack[-3] = 0
0x6c6: PushEmpty(object, object, object, object)
0x6c7: @ GetMainOutdoorScene(Stack[-2])
0x6c8: Pop(0)
0x6c9: Pop(0); PushNull((bool) Stack[-2] == 0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cb: Push("Can't find main outdoor scene") // @poff=634
0x6cc: @ Trace(Stack[-1])
0x6cd: Pop(1)
0x6ce: Stack[-1] = 0
0x6cf: Stack[-1] = Stack[-5]
0x6d0: Return(); Pop(4)

0x6d1: @@ GetMap(Stack[-1]); Obj=2 // @poff=694
0x6d2: Pop(0)
0x6d3: Stack[-1] = Stack[-5]
0x6d4: Return(); Pop(4)

0x6d5: Stack[-1] = 0
0x6d6: Stack[-2] = 0
0x6d7: PushEmpty(bool, int, bool, int)
0x6d8: Push((int) 0)
0x6d9: @ ClearSubContainer(Stack[-1])
0x6da: Pop(1)
0x6db: Push((int) 15)
0x6dc: @ irand(Stack[-2], Stack[-1])
0x6dd: Pop(1)
0x6de: Push((int) 5)
0x6df: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6e0: PushEmpty(int, string)
0x6e1: Stack[-1] = "grass_black_tvir" // @poff=701
0x6e2: Call2 0x700

0x6e3: Pop(1)
0x6e4: Push((int) 0)
0x6e5: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6e6: Pop(2)
0x6e7: Push((int) 15)
0x6e8: @ irand(Stack[-2], Stack[-1])
0x6e9: Pop(1)
0x6ea: Push((int) 5)
0x6eb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6ec: PushEmpty(int, string)
0x6ed: Stack[-1] = "grass_blood_tvir" // @poff=735
0x6ee: Call2 0x700

0x6ef: Pop(1)
0x6f0: Push((int) 0)
0x6f1: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6f2: Pop(2)
0x6f3: Push((int) 15)
0x6f4: @ irand(Stack[-2], Stack[-1])
0x6f5: Pop(1)
0x6f6: Push((int) 5)
0x6f7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6f8: PushEmpty(int, string)
0x6f9: Stack[-1] = "grass_brown_tvir" // @poff=769
0x6fa: Call2 0x700

0x6fb: Pop(1)
0x6fc: Push((int) 0)
0x6fd: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6fe: Pop(2)
0x6ff: Return(); Pop(4)

0x700: PushEmpty(int, int)
0x701: @ GetInvItemByName(Stack[-1], Stack[-3])
0x702: Pop(0)
0x703: Stack[-1] = Stack[-4]
0x704: Return(); Pop(2)

0x705: PushEmpty(int, int)
0x706: Push("branch") // @poff=803
0x707: @ GetVariable(Stack[-1], Stack[-2])
0x708: Pop(1)
0x709: Push((int) 0)
0x70a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70c: Stack[-3] = (int) 1
0x70d: Return(); Pop(2)

0x70e: GOTO 0x714

0x70f: Push((int) 1)
0x710: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x712: Stack[-3] = (int) 2
0x713: Return(); Pop(2)

0x714: Stack[-3] = (int) 3
0x715: Return(); Pop(2)

0x716: PushEmpty(int, int)
0x717: Push("branch") // @poff=803
0x718: @ GetVariable(Stack[-1], Stack[-2])
0x719: Pop(1)
0x71a: Stack[-1] = Stack[-3]
0x71b: Return(); Pop(2)

0x71c: Stack[-1] = (int) 521048
0x71d: Return(); Pop(0)

0x71e: Stack[-1] = (int) 521047
0x71f: Return(); Pop(0)

0x720: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=817
0x721: Return(); Pop(0)

0x722: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=857
0x723: Return(); Pop(0)

0x724: Stack[-1] = (bool) 0
0x725: Return(); Pop(0)

