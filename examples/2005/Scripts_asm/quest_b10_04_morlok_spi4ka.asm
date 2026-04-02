GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:cleanup
	W:player
	W:head
	W:all
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
	W:idle
	A:GetPosition
	A:GetEyesHeight
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:avroks blood is given
	W:avroks_blood
	W:b10q04Spi4kaTalk
	W:b10q04MorlokGotoSpi4ka
	W:pt_map_spi4ka
	A:AddMark
	W:oob10MorlokSpi4ka1
	W:playsound
	W:giveitem
	A:ShowMap
	W:b10q04NotkinTalk
	W:b10q04MishkaTalk
	W:b10q04LaskaTalk
	W:b10q04
	W:b10q04MorlokTalk
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
// @pool_raw:63006c00650061006e0075007000000070006c00610079006500720000006800650061006400000061006c006c0000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c7900690064006c0065000000476574506f736974696f6e004765744579657348656967687400616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e00670000006100760072006f006b007300200062006c006f006f006400200069007300200067006900760065006e0000006100760072006f006b0073005f0062006c006f006f006400000062003100300071003000340053007000690034006b006100540061006c006b0000006200310030007100300034004d006f0072006c006f006b0047006f0074006f0053007000690034006b0061000000700074005f006d00610070005f0073007000690034006b00610000004164644d61726b006f006f006200310030004d006f0072006c006f006b0053007000690034006b0061003100000070006c006100790073006f0075006e006400000067006900760065006900740065006d00000053686f774d6170006200310030007100300034004e006f0074006b0069006e00540061006c006b0000006200310030007100300034004d006900730068006b006100540061006c006b0000006200310030007100300034004c00610073006b006100540061006c006b00000062003100300071003000340000006200310030007100300034004d006f0072006c006f006b00540061006c006b000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000

Import:
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x6 Vars = (object)
		EVENT_26 Op = 0x3c Vars = (string)
		EVENT_5 Op = 0x44 Vars = ()
		EVENT_6 Op = 0x49 Vars = ()
		EVENT_7 Op = 0x88 Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1e8 Vars = (int, int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0xf

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty()
0x8: Call2 0x9f

0x9: Pop(0)
0xa: PushEmpty(object)
0xb: Stack[-2] = Stack[-1]
0xc: Call2 0x4cd

0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty(float, float)
0x10: PushEmpty(bool)
0x11: Call2 0x2c0

0x12: Pop(0)
0x13: Pop(1); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x15: @ Hold()
0x16: Pop(0)
0x17: GOTO 0x10

0x18: Push((int) 3)
0x19: @ rand(Stack[-2], Stack[-1])
0x1a: Pop(1)
0x1b: Push((int) 3)
0x1c: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1d: @ Sleep(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(float, float)
0x20: Stack[-6] = Stack[-2]
0x21: Stack[-5] = Stack[-1]
0x22: Call2 0x5e

0x23: Pop(2)
0x24: @ sync()
0x25: Pop(0)
0x26: GOTO 0x10

0x27: Return(); Pop(2)

0x28: PushEmpty(bool, bool)
0x29: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x2a: @ IsLoaded(Stack[-1])
0x2b: Pop(0)
0x2c: PushEmpty(bool)
0x2d: Stack[-1] = (bool) 0
0x2e: Pop(0); Push((bool) Stack[-2] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: PushEmpty(bool)
0x31: Call2 0x5c

0x32: Pop(0)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[-1] = (bool) 1
0x35: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x36: PushEmpty(object)
0x37: Call2 0x339

0x38: Pop(0)
0x39: @ RemoveActor(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(2)

0x3c: PushEmpty()
0x3d: Push("cleanup") // @poff=0
0x3e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x28

0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: @ StopGroup0()
0x45: Pop(0)
0x46: @ sync()
0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: PushEmpty()
0x4a: Call2 0x9f

0x4b: Pop(0)
0x4c: PushEmpty(bool)
0x4d: Stack[-1] = (bool) 0
0x4e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4f: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x50: PushEmpty(bool)
0x51: Call2 0x5c

0x52: Pop(0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-1] = (bool) 1
0x55: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x56: PushEmpty(object)
0x57: Call2 0x339

0x58: Pop(0)
0x59: @ RemoveActor(Stack[-1])
0x5a: Pop(1)
0x5b: Return(); Pop(0)

0x5c: Stack[-1] = (bool) 1
0x5d: Return(); Pop(0)

0x5e: PushEmpty()
0x5f: PushEmpty(bool)
0x60: Call2 0x2c0

0x61: Pop(0)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Return(); Pop(0)

0x65: Push("player") // @poff=16
0x66: @ FindActor(Stack[-4]T, Stack[-1])
0x67: Pop(1)
0x68: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x69: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6c: Push((int) 10)
0x6d: Push((float)1.0)
0x6e: @ SetTimer(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: PushEmpty()
0x71: Call2 0xad

0x72: Pop(0)
0x73: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x75: Push((int) 10)
0x76: @ KillTimer(Stack[-1])
0x77: Pop(1)
0x78: Return(); Pop(0)

0x79: PushEmpty(float, float)
0x7a: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-3] = (bool) 0
0x7d: Return(); Pop(2)

0x7e: PushEmpty(float, object)
0x7f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x80: Call2 0x2b8

0x81: Pop(1)
0x82: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x83: Push( Stack[2 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x86: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x87: Return(); Pop(2)

0x88: PushEmpty()
0x89: Push((int) 10)
0x8a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x8c: PushEmpty(bool)
0x8d: Call2 0x79

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x90: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: PushEmpty(object)
0x93: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x94: Call2 0x327

0x95: Pop(1)
0x96: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x97: GOTO 0x9e

0x98: Push( Stack[2 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9a: Push("head") // @poff=30
0x9b: @ UnlookAsync(Stack[-1])
0x9c: Pop(1)
0x9d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Call2 0xfe

0xa1: Pop(0)
0xa2: Push((int) 10)
0xa3: @ KillTimer(Stack[-1])
0xa4: Pop(1)
0xa5: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa7: Push("head") // @poff=30
0xa8: @ UnlookAsync(Stack[-1])
0xa9: Pop(1)
0xaa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xab: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xac: Return(); Pop(0)

0xad: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: PushEmpty(bool)
0xb1: Call2 0x2c0

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(14)

0xb6: PushEmpty(int)
0xb7: Call2 0x386

0xb8: Stack[-1] = Stack[-8]
0xb9: Pop(1)
0xba: Stack[-6] = (int) 0
0xbb: PushEmpty(bool)
0xbc: Stack[-1] = (bool) 0
0xbd: Push((int) 5)
0xbe: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc0: PushEmpty(bool)
0xc1: Call2 0x2c0

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Stack[-1] = (bool) 1
0xc5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xc6: Push((int) 3)
0xc7: @ irand(Stack[-6], Stack[-1])
0xc8: Pop(1)
0xc9: Push((int) 0)
0xca: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xcc: Push(Stack[-7])
0xcd: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xce: @ irand(Stack[-4], Stack[-7])
0xcf: Pop(0)
0xd0: Push("all") // @poff=40
0xd1: PushEmpty(string, int)
0xd2: Stack[-7] = Stack[-1]
0xd3: Call2 0x37f

0xd4: Pop(1)
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: @ WaitForAnimEnd(Stack[-3])
0xd8: Pop(0)
0xd9: Pop(0); Push((bool) Stack[-3] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: GOTO 0xf9

0xdc: GOTO 0xee

0xdd: Push((int) 1)
0xde: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe0: Push((int) 4)
0xe1: @ rand(Stack[-3], Stack[-1])
0xe2: Pop(1)
0xe3: Push((int) 1)
0xe4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe5: @ Sleep(Stack[-1], Stack[-2])
0xe6: Pop(1)
0xe7: Pop(0); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: GOTO 0xf9

0xea: GOTO 0xee

0xeb: Push(Stack[-6])
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: GOTO 0xf9

0xee: PushEmpty(bool)
0xef: Call2 0xfc

0xf0: Pop(0)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: GOTO 0xf9

0xf4: @ ResetAAS()
0xf5: Pop(0)
0xf6: Push((int) 1)
0xf7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xf8: GOTO 0xbb

0xf9: @ ResetAAS()
0xfa: Pop(0)
0xfb: Return(); Pop(14)

0xfc: Stack[-1] = (bool) 1
0xfd: Return(); Pop(0)

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: @ StopGroup0()
0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-12] = Stack[-2]
0x107: Stack[-1] = (float) 110.0
0x108: Call2 0x2c5

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x399

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=48
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x397

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=59
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x39b

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=77
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x39d

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=86
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x4bc

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=96
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(object, object)
0x133: Stack[-11] = Stack[-2]
0x134: Stack[-6] = Stack[-1]
0x135: Push(-2, 4); TaskCall(2)
0x136: Call2 0x14d

0x137: Pop(-2, 4); TaskReturn
0x138: Pop(2)
0x139: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=110
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: @ sync()
0x13e: Pop(0)
0x13f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=110
0x140: Pop(0)
0x141: GOTO 0x13b

0x142: PushEmpty(object)
0x143: Stack[-10] = Stack[-1]
0x144: Call2 0x309

0x145: Pop(1)
0x146: @ StopDialog(Stack[-4])
0x147: Pop(0)
0x148: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=122
0x149: Pop(0)
0x14a: Stack[-2] = Stack[-10]
0x14b: Return(); Pop(8)

0x14c: Stack[-4] = 0
0x14d: PushEmpty()
0x14e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x150: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x151: Push((int) 1)
0x152: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call2 0x448

0x156: Pop(1)
0x157: Pop(1); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x159: PushEmpty(string)
0x15a: Stack[-1] = "Neutral" // @poff=137
0x15b: Call2 0x1d2

0x15c: Pop(1)
0x15d: Push((int) 530545)
0x15e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x15f: Pop(1)
0x160: @@@ ClearReplies(); Obj=0 // @poff=164
0x161: Pop(0)
0x162: Push((int) 530546)
0x163: Push((int) -1)
0x164: Push((int) 31893)
0x165: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x166: Pop(3)
0x167: GOTO 0x1b4

0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0x43c

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=137
0x16f: Call2 0x1d2

0x170: Pop(1)
0x171: Push((int) 530406)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=164
0x175: Pop(0)
0x176: Push((int) 530407)
0x177: Push((int) -1)
0x178: Push((int) 31779)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x17a: Pop(3)
0x17b: GOTO 0x1b4

0x17c: PushEmpty(string)
0x17d: Stack[-1] = "Neutral" // @poff=137
0x17e: Call2 0x1d2

0x17f: Pop(1)
0x180: Push((int) 530408)
0x181: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x182: Pop(1)
0x183: @@@ ClearReplies(); Obj=0 // @poff=164
0x184: Pop(0)
0x185: PushEmpty(bool)
0x186: Stack[-1] = (bool) 0
0x187: PushEmpty(bool)
0x188: Stack[-1] = (bool) 0
0x189: PushEmpty(bool)
0x18a: Stack[-1] = (bool) 0
0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0x40c

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x190: PushEmpty(bool, object)
0x191: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x192: Call2 0x430

0x193: Pop(1)
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: Stack[-1] = (bool) 1
0x196: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x199: Call2 0x424

0x19a: Pop(1)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Stack[-1] = (bool) 1
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x418

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 530409)
0x1a8: Push((int) 31782)
0x1a9: Push((int) 31781)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x1ab: Pop(3)
0x1ac: Push((int) 530414)
0x1ad: Push((int) -1)
0x1ae: Push((int) 31786)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x1b0: Pop(3)
0x1b1: GOTO 0x1b4

0x1b2: Return(); Pop(0)

0x1b3: GOTO 0x151

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x39f

0x1b6: Pop(0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b8: @ lshWaitForAnimEnd()
0x1b9: Pop(0)
0x1ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: GOTO 0x1c2

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1bf: Call2 0x31a

0x1c0: Pop(1)
0x1c1: GOTO 0x1b8

0x1c2: GOTO 0x1d1

0x1c3: Push("all") // @poff=40
0x1c4: Push("idle") // @poff=186
0x1c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: @ WaitForAnimEnd()
0x1c8: Pop(0)
0x1c9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: GOTO 0x1d1

0x1cc: Push("all") // @poff=40
0x1cd: Push("idle") // @poff=186
0x1ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: GOTO 0x1c7

0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: PushEmpty(bool)
0x1d4: Call2 0x39f

0x1d5: Pop(0)
0x1d6: Pop(1); Push((bool) Stack[-1] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Return(); Pop(0)

0x1d9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Return(); Pop(0)

0x1dc: PushEmpty(string, bool)
0x1dd: Stack[-3] = Stack[-2]
0x1de: Push("") // @poff=13
0x1df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e1: Stack[-1] = (bool) 0
0x1e2: GOTO 0x1e4

0x1e3: Stack[-1] = (bool) 1
0x1e4: Call2 0x321

0x1e5: Pop(2)
0x1e6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty()
0x1e9: Push((int) 1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x1eb: PushEmpty()
0x1ec: Call2 0x332

0x1ed: Pop(0)
0x1ee: Push((int) 31779)
0x1ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f1: PushEmpty(object, object)
0x1f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x3ac

0x1f5: Pop(2)
0x1f6: PushEmpty(object, object)
0x1f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f9: Call2 0x3cf

0x1fa: Pop(2)
0x1fb: Push((int) 31781)
0x1fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: PushEmpty(object, object)
0x1ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0x3c3

0x202: Pop(2)
0x203: Push((int) 31783)
0x204: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x206: PushEmpty(object, object)
0x207: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x208: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x209: Call2 0x3a1

0x20a: Pop(2)
0x20b: PushEmpty(object, object)
0x20c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20e: Call2 0x3c9

0x20f: Pop(2)
0x210: Push((int) 31785)
0x211: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x213: PushEmpty(object, object)
0x214: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x3a1

0x217: Pop(2)
0x218: PushEmpty(object, object)
0x219: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21b: Call2 0x3c9

0x21c: Pop(2)
0x21d: Push((int) 31892)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x222: Call2 0x448

0x223: Pop(1)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral" // @poff=137
0x228: Call2 0x1d2

0x229: Pop(1)
0x22a: Push((int) 530545)
0x22b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x22c: Pop(1)
0x22d: @@@ ClearReplies(); Obj=0 // @poff=164
0x22e: Pop(0)
0x22f: Push((int) 530546)
0x230: Push((int) -1)
0x231: Push((int) 31893)
0x232: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: PushEmpty(bool, object)
0x236: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x237: Call2 0x43c

0x238: Pop(1)
0x239: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral" // @poff=137
0x23c: Call2 0x1d2

0x23d: Pop(1)
0x23e: Push((int) 530406)
0x23f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x240: Pop(1)
0x241: @@@ ClearReplies(); Obj=0 // @poff=164
0x242: Pop(0)
0x243: Push((int) 530407)
0x244: Push((int) -1)
0x245: Push((int) 31779)
0x246: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral" // @poff=137
0x24b: Call2 0x1d2

0x24c: Pop(1)
0x24d: Push((int) 530408)
0x24e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x24f: Pop(1)
0x250: @@@ ClearReplies(); Obj=0 // @poff=164
0x251: Pop(0)
0x252: PushEmpty(bool)
0x253: Stack[-1] = (bool) 0
0x254: PushEmpty(bool)
0x255: Stack[-1] = (bool) 0
0x256: PushEmpty(bool)
0x257: Stack[-1] = (bool) 0
0x258: PushEmpty(bool, object)
0x259: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Call2 0x40c

0x25b: Pop(1)
0x25c: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25f: Call2 0x430

0x260: Pop(1)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Stack[-1] = (bool) 1
0x263: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x266: Call2 0x424

0x267: Pop(1)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: Stack[-1] = (bool) 1
0x26b: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26e: Call2 0x418

0x26f: Pop(1)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-1] = (bool) 1
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: Push((int) 530409)
0x275: Push((int) 31782)
0x276: Push((int) 31781)
0x277: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x278: Pop(3)
0x279: Push((int) 530414)
0x27a: Push((int) -1)
0x27b: Push((int) 31786)
0x27c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 31782)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x284: Call2 0x3df

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x287: PushEmpty(string)
0x288: Stack[-1] = "Neutral" // @poff=137
0x289: Call2 0x1d2

0x28a: Pop(1)
0x28b: Push((int) 530410)
0x28c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x28d: Pop(1)
0x28e: @@@ ClearReplies(); Obj=0 // @poff=164
0x28f: Pop(0)
0x290: Push((int) 530411)
0x291: Push((int) -1)
0x292: Push((int) 31783)
0x293: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x298: Call2 0x3df

0x299: Pop(1)
0x29a: Pop(1); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral" // @poff=137
0x29e: Call2 0x1d2

0x29f: Pop(1)
0x2a0: Push((int) 530412)
0x2a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x2a2: Pop(1)
0x2a3: @@@ ClearReplies(); Obj=0 // @poff=164
0x2a4: Pop(0)
0x2a5: Push((int) 530413)
0x2a6: Push((int) -1)
0x2a7: Push((int) 31785)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2a9: Pop(3)
0x2aa: Return(); Pop(0)

0x2ab: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ac: PushEmpty(bool)
0x2ad: Call2 0x39f

0x2ae: Pop(0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b0: @ lshStopAnimation()
0x2b1: Pop(0)
0x2b2: GOTO 0x2b5

0x2b3: @ StopAnimation()
0x2b4: Pop(0)
0x2b5: Return(); Pop(0)

0x2b6: GOTO 0x1e9

0x2b7: Return(); Pop(0)

0x2b8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b9: @ GetPosition(Stack[-3])
0x2ba: Pop(0)
0x2bb: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x2bc: Pop(0)
0x2bd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2be: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2bf: Return(); Pop(6)

0x2c0: PushEmpty(bool, bool)
0x2c1: @ IsLoaded(Stack[-1])
0x2c2: Pop(0)
0x2c3: Stack[-1] = Stack[-3]
0x2c4: Return(); Pop(2)

0x2c5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c6: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2c7: Pop(0)
0x2c8: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2c9: Pop(0)
0x2ca: Push(CvectorIndex(Stack[-8], 1))
0x2cb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2cc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2cd: @ GetPosition(Stack[-7])
0x2ce: Pop(0)
0x2cf: @ GetEyesHeight(Stack[-9])
0x2d0: Pop(0)
0x2d1: Push(CvectorIndex(Stack[-7], 1))
0x2d2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2d4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d5: Push(CvectorIndex(Stack[-6], 1))
0x2d6: Stack[-1] = (int) 0
0x2d7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d9: Pop(1); Push(Sqrt(Stack[-1]))
0x2da: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2db: Stack[-5] = -Stack[-6]; Pop(0);
0x2dc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2dd: PushEmpty(cvector, cvector)
0x2de: Push([0.0, 1.0, 0.0])
0x2df: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2e0: Call2 0x33f

0x2e1: Pop(1)
0x2e2: Push((int) 25)
0x2e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e5: Push([0.0, 10.0, 0.0])
0x2e6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e8: @ IsOverrideActive(Stack[-2])
0x2e9: Pop(0)
0x2ea: Push(Stack[-2])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-21] = (bool) 0
0x2ed: Return(); Pop(18)

0x2ee: @ StopWorld()
0x2ef: Pop(0)
0x2f0: @ CameraTransit(Stack[-3], Stack[-5])
0x2f1: Pop(0)
0x2f2: Push(CvectorIndex(Stack[-4], 0))
0x2f3: Push(CvectorIndex(Stack[-5], 2))
0x2f4: @ Rotate(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: PushEmpty(bool)
0x2f7: Call2 0x39f

0x2f8: Pop(0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x303

0x2fb: Push("head") // @poff=30
0x2fc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fd: Pop(1)
0x2fe: Push(Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x300: Push("head") // @poff=30
0x301: @ LookAsyncCamera(Stack[-1])
0x302: Pop(1)
0x303: @ CameraWaitForPlayFinish()
0x304: Pop(0)
0x305: @ ResumeWorld()
0x306: Pop(0)
0x307: Stack[-21] = (bool) 1
0x308: Return(); Pop(18)

0x309: PushEmpty(bool, bool)
0x30a: @ CameraSwitchToNormal()
0x30b: Pop(0)
0x30c: PushEmpty(bool)
0x30d: Call2 0x39f

0x30e: Pop(0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x319

0x311: Push("head") // @poff=30
0x312: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x313: Pop(1)
0x314: Push(Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x316: Push("head") // @poff=30
0x317: @ UnlookAsync(Stack[-1])
0x318: Pop(1)
0x319: Return(); Pop(2)

0x31a: PushEmpty(float, float, float, float)
0x31b: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x31c: Pop(0)
0x31d: Push((bool) 0)
0x31e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(4)

0x321: PushEmpty(float, float, float, float)
0x322: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x323: Pop(0)
0x324: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x325: Pop(0)
0x326: Return(); Pop(4)

0x327: PushEmpty(float, cvector, float, cvector)
0x328: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x329: Pop(0)
0x32a: Stack[-1] = [0.0, 0.0, 0.0]
0x32b: Push(CvectorIndex(Stack[-1], 1))
0x32c: Stack[-3] = Stack[-1]
0x32d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x32e: Push("head") // @poff=30
0x32f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x330: Pop(1)
0x331: Return(); Pop(4)

0x332: PushEmpty(bool)
0x333: Call2 0x39f

0x334: Pop(0)
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: @ lshStopSpeech()
0x337: Pop(0)
0x338: Return(); Pop(0)

0x339: PushEmpty(object, object)
0x33a: @ self(Stack[-1])
0x33b: Pop(0)
0x33c: Stack[-1] = Stack[-3]
0x33d: Return(); Pop(2)

0x33e: Stack[-1] = 0
0x33f: PushEmpty(float, float)
0x340: Pop(0); Push(Stack[-3] | Stack[-3]);
0x341: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x342: Push((float)9.999999974752427e-07)
0x343: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-4] = [0.0, 0.0, 0.0]
0x346: Return(); Pop(2)

0x347: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x348: Return(); Pop(2)

0x349: PushEmpty(int, int)
0x34a: @ GetVariable(Stack[-3], Stack[-1])
0x34b: Pop(0)
0x34c: Stack[-1] = Stack[-4]
0x34d: Return(); Pop(2)

0x34e: PushEmpty(object, object)
0x34f: @ CreateIntVector(Stack[-1])
0x350: Pop(0)
0x351: @@ add(Stack[-4]); Obj=1 // @poff=222
0x352: Pop(0)
0x353: @@ add(Stack[-3]); Obj=1 // @poff=222
0x354: Pop(0)
0x355: Push((int) 3)
0x356: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x357: Pop(1)
0x358: Return(); Pop(2)

0x359: Stack[-1] = 0
0x35a: PushEmpty(int, int, bool, int, int, bool)
0x35b: @@ GetItemID(Stack[-3]); Obj=8 // @poff=226
0x35c: Pop(0)
0x35d: Push("Category") // @poff=236
0x35e: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x35f: Pop(1)
0x360: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=254
0x361: Pop(0)
0x362: Pop(0); Push((bool) Stack[-1] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x364: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=262
0x365: Pop(0)
0x366: GOTO 0x36c

0x367: PushEmpty(int, int)
0x368: Stack[-5] = Stack[-2]
0x369: Stack[-9] = Stack[-1]
0x36a: Call2 0x34e

0x36b: Pop(2)
0x36c: Return(); Pop(6)

0x36d: PushEmpty(object, object)
0x36e: @ CreateInvItem(Stack[-1])
0x36f: Pop(0)
0x370: @@ SetItemName(Stack[-4]); Obj=1 // @poff=272
0x371: Pop(0)
0x372: PushEmpty(object, object, int)
0x373: Stack[-8] = Stack[-3]
0x374: Stack[-4] = Stack[-2]
0x375: Stack[-6] = Stack[-1]
0x376: Call2 0x35a

0x377: Pop(3)
0x378: Return(); Pop(2)

0x379: Stack[-1] = 0
0x37a: PushEmpty(float, float)
0x37b: @ GetGameTime(Stack[-1])
0x37c: Pop(0)
0x37d: Stack[-1] = Stack[-3]
0x37e: Return(); Pop(2)

0x37f: PushEmpty(string, string)
0x380: Stack[-1] = "idle" // @poff=186
0x381: Push(Stack[-3])
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x384: Stack[-1] = Stack[-4]
0x385: Return(); Pop(2)

0x386: PushEmpty(int, bool, int, bool)
0x387: Stack[-2] = (int) 0
0x388: Push("all") // @poff=40
0x389: PushEmpty(string, int)
0x38a: Stack[-5] = Stack[-1]
0x38b: Call2 0x37f

0x38c: Pop(1)
0x38d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38e: Pop(2)
0x38f: Pop(0); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: GOTO 0x395

0x392: Push((int) 1)
0x393: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x394: GOTO 0x388

0x395: Stack[-2] = Stack[-5]
0x396: Return(); Pop(4)

0x397: Stack[-1] = (int) 521048
0x398: Return(); Pop(0)

0x399: Stack[-1] = (int) 521047
0x39a: Return(); Pop(0)

0x39b: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=284
0x39c: Return(); Pop(0)

0x39d: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=324
0x39e: Return(); Pop(0)

0x39f: Stack[-1] = (bool) 0
0x3a0: Return(); Pop(0)

0x3a1: PushEmpty()
0x3a2: Push("avroks blood is given") // @poff=368
0x3a3: @ Trace(Stack[-1])
0x3a4: Pop(1)
0x3a5: PushEmpty(object, string, int)
0x3a6: Stack[-5] = Stack[-3]
0x3a7: Stack[-2] = "avroks_blood" // @poff=412
0x3a8: Stack[-1] = (int) 1
0x3a9: Call2 0x36d

0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: PushEmpty(object, object)
0x3ad: Push("b10q04Spi4kaTalk") // @poff=438
0x3ae: Push((int) 1)
0x3af: @ SetVariable(Stack[-2], Stack[-1])
0x3b0: Pop(2)
0x3b1: PushEmpty(object)
0x3b2: Call2 0x48a

0x3b3: Stack[-1] = Stack[-2]
0x3b4: Pop(1)
0x3b5: Push("b10q04MorlokGotoSpi4ka") // @poff=472
0x3b6: Push("pt_map_spi4ka") // @poff=518
0x3b7: Push((int) 0)
0x3b8: Push((int) 530552)
0x3b9: PushEmpty(float)
0x3ba: Call2 0x37a

0x3bb: Pop(0)
0x3bc: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=546
0x3bd: Pop(5)
0x3be: PushEmpty()
0x3bf: Call2 0x454

0x3c0: Pop(0)
0x3c1: Return(); Pop(2)

0x3c2: Stack[-1] = 0
0x3c3: PushEmpty()
0x3c4: Push("oob10MorlokSpi4ka1") // @poff=554
0x3c5: Push((int) 1)
0x3c6: @ SetVariable(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: Push("playsound") // @poff=592
0x3cb: Push("giveitem") // @poff=612
0x3cc: @ TriggerWorld(Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: PushEmpty(object, string, float)
0x3d1: PushEmpty(object)
0x3d2: Call2 0x48a

0x3d3: Stack[-1] = Stack[-4]
0x3d4: Pop(1)
0x3d5: Stack[-2] = "pt_map_spi4ka" // @poff=518
0x3d6: Stack[-1] = (int) 2
0x3d7: Call2 0x49b

0x3d8: Pop(3)
0x3d9: PushEmpty(object)
0x3da: Call2 0x48a

0x3db: Pop(0)
0x3dc: @@ ShowMap(Stack[-1]); Obj=2 // @poff=630
0x3dd: Pop(1)
0x3de: Return(); Pop(0)

0x3df: PushEmpty()
0x3e0: PushEmpty(bool)
0x3e1: Stack[-1] = (bool) 0
0x3e2: PushEmpty(bool)
0x3e3: Stack[-1] = (bool) 0
0x3e4: PushEmpty(bool)
0x3e5: Stack[-1] = (bool) 0
0x3e6: PushEmpty(int, string)
0x3e7: Stack[-1] = "b10q04NotkinTalk" // @poff=638
0x3e8: Call2 0x349

0x3e9: Pop(1)
0x3ea: Push((int) 9)
0x3eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3ed: PushEmpty(int, string)
0x3ee: Stack[-1] = "b10q04Spi4kaTalk" // @poff=438
0x3ef: Call2 0x349

0x3f0: Pop(1)
0x3f1: Push((int) 9)
0x3f2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: Stack[-1] = (bool) 1
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f6: PushEmpty(int, string)
0x3f7: Stack[-1] = "b10q04MishkaTalk" // @poff=672
0x3f8: Call2 0x349

0x3f9: Pop(1)
0x3fa: Push((int) 9)
0x3fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fd: Stack[-1] = (bool) 1
0x3fe: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3ff: PushEmpty(int, string)
0x400: Stack[-1] = "b10q04LaskaTalk" // @poff=706
0x401: Call2 0x349

0x402: Pop(1)
0x403: Push((int) 9)
0x404: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: Stack[-1] = (bool) 1
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: Stack[-2] = (bool) 1
0x409: Return(); Pop(0)

0x40a: Stack[-2] = (bool) 0
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(int, string)
0x40e: Stack[-1] = "b10q04Spi4kaTalk" // @poff=438
0x40f: Call2 0x349

0x410: Pop(1)
0x411: Push((int) 9)
0x412: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-2] = (bool) 1
0x415: Return(); Pop(0)

0x416: Stack[-2] = (bool) 0
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: PushEmpty(int, string)
0x41a: Stack[-1] = "b10q04" // @poff=738
0x41b: Call2 0x349

0x41c: Pop(1)
0x41d: Push((int) 1000)
0x41e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x420: Stack[-2] = (bool) 1
0x421: Return(); Pop(0)

0x422: Stack[-2] = (bool) 0
0x423: Return(); Pop(0)

0x424: PushEmpty()
0x425: PushEmpty(int, string)
0x426: Stack[-1] = "b10q04" // @poff=738
0x427: Call2 0x349

0x428: Pop(1)
0x429: Push((int) -1)
0x42a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-2] = (bool) 1
0x42d: Return(); Pop(0)

0x42e: Stack[-2] = (bool) 0
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: PushEmpty(int, string)
0x432: Stack[-1] = "oob10MorlokSpi4ka1" // @poff=554
0x433: Call2 0x349

0x434: Pop(1)
0x435: Push((int) 0)
0x436: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-2] = (bool) 1
0x439: Return(); Pop(0)

0x43a: Stack[-2] = (bool) 0
0x43b: Return(); Pop(0)

0x43c: PushEmpty()
0x43d: PushEmpty(int, string)
0x43e: Stack[-1] = "b10q04Spi4kaTalk" // @poff=438
0x43f: Call2 0x349

0x440: Pop(1)
0x441: Push((int) 0)
0x442: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Stack[-2] = (bool) 1
0x445: Return(); Pop(0)

0x446: Stack[-2] = (bool) 0
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: PushEmpty(int, string)
0x44a: Stack[-1] = "b10q04MorlokTalk" // @poff=752
0x44b: Call2 0x349

0x44c: Pop(1)
0x44d: Push((int) 0)
0x44e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-2] = (bool) 1
0x451: Return(); Pop(0)

0x452: Stack[-2] = (bool) 0
0x453: Return(); Pop(0)

0x454: PushEmpty(object, object)
0x455: Push((int) 548)
0x456: Push((int) 2)
0x457: Push((int) 530439)
0x458: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: PushEmpty(bool, object, int)
0x45b: Stack[-4] = Stack[-2]
0x45c: Stack[-1] = (int) 545
0x45d: Call2 0x46e

0x45e: Pop(3)
0x45f: Return(); Pop(2)

0x460: Stack[-1] = 0
0x461: PushEmpty(object, object)
0x462: @ GetDiaryRoot(Stack[-1])
0x463: Pop(0)
0x464: Pop(0); Push((bool) Stack[-1] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x466: Push("Can't retrieve diary root") // @poff=786
0x467: @ Trace(Stack[-1])
0x468: Pop(1)
0x469: Stack[-3] = (bool) 0
0x46a: Return(); Pop(2)

0x46b: Stack[-1] = Stack[-3]
0x46c: Return(); Pop(2)

0x46d: Stack[-1] = 0
0x46e: PushEmpty(object, object, int, object, object, int)
0x46f: PushEmpty(object)
0x470: Call2 0x461

0x471: Stack[-1] = Stack[-4]
0x472: Pop(1)
0x473: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=838
0x474: Pop(0)
0x475: Pop(0); Push((bool) Stack[-2] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x477: Push("Can't find diary parent with id: ") // @poff=843
0x478: Pop(1); Push(Stack[-1] + Stack[-8]);
0x479: @ Trace(Stack[-1])
0x47a: Pop(1)
0x47b: Stack[-9] = (bool) 0
0x47c: Return(); Pop(6)

0x47d: @@ AddChild(Stack[-8]); Obj=2 // @poff=911
0x47e: Pop(0)
0x47f: Push((int) 7)
0x480: @ SendWorldWndMessage(Stack[-1])
0x481: Pop(1)
0x482: @@ GetCategory(Stack[-1]); Obj=8 // @poff=920
0x483: Pop(0)
0x484: @ SetDiarySection(Stack[-1])
0x485: Pop(0)
0x486: Stack[-9] = (bool) 0
0x487: Return(); Pop(6)

0x488: Stack[-2] = 0
0x489: Stack[-3] = 0
0x48a: PushEmpty(object, object, object, object)
0x48b: @ GetMainOutdoorScene(Stack[-2])
0x48c: Pop(0)
0x48d: Pop(0); PushNull((bool) Stack[-2] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48f: Push("Can't find main outdoor scene") // @poff=932
0x490: @ Trace(Stack[-1])
0x491: Pop(1)
0x492: Stack[-1] = 0
0x493: Stack[-1] = Stack[-5]
0x494: Return(); Pop(4)

0x495: @@ GetMap(Stack[-1]); Obj=2 // @poff=992
0x496: Pop(0)
0x497: Stack[-1] = Stack[-5]
0x498: Return(); Pop(4)

0x499: Stack[-1] = 0
0x49a: Stack[-2] = 0
0x49b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x49c: @ GetMainOutdoorScene(Stack[-2])
0x49d: Pop(0)
0x49e: Pop(0); PushNull((bool) Stack[-2] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a0: Push("Can't find main outdoor scene") // @poff=932
0x4a1: @ Trace(Stack[-1])
0x4a2: Pop(1)
0x4a3: Return(); Pop(8)

0x4a4: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=999
0x4a5: Pop(0)
0x4a6: Pop(0); Push((bool) Stack[-1] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a8: Push("Warning: outdoor scene locator ") // @poff=1010
0x4a9: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4aa: Push(" doesnt exist") // @poff=1074
0x4ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ac: @ Trace(Stack[-1])
0x4ad: Pop(1)
0x4ae: @@ GetMap(Stack[-11]); Obj=2 // @poff=992
0x4af: Pop(0)
0x4b0: Pop(0); PushNull((bool) Stack[-11] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b2: Push("Can't find map") // @poff=1102
0x4b3: @ Trace(Stack[-1])
0x4b4: Pop(1)
0x4b5: Return(); Pop(8)

0x4b6: Push(CvectorIndex(Stack[-4], 0))
0x4b7: Push(CvectorIndex(Stack[-5], 2))
0x4b8: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=1132
0x4b9: Pop(2)
0x4ba: Return(); Pop(8)

0x4bb: Stack[-2] = 0
0x4bc: PushEmpty(int, int)
0x4bd: Push("branch") // @poff=1145
0x4be: @ GetVariable(Stack[-1], Stack[-2])
0x4bf: Pop(1)
0x4c0: Push((int) 0)
0x4c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c3: Stack[-3] = (int) 1
0x4c4: Return(); Pop(2)

0x4c5: GOTO 0x4cb

0x4c6: Push((int) 1)
0x4c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-3] = (int) 2
0x4ca: Return(); Pop(2)

0x4cb: Stack[-3] = (int) 3
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty()
0x4ce: PushEmpty(int, object)
0x4cf: Stack[-3] = Stack[-1]
0x4d0: Push(-2, 1); TaskCall(1)
0x4d1: Call2 0x103

0x4d2: Pop(-2, 1); TaskReturn
0x4d3: Pop(2)
0x4d4: Return(); Pop(0)

