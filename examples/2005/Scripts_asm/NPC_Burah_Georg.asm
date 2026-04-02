GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	A:GetPosition
	A:GetProperty
	A:SetProperty
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	W:m
	A:add
	W:money
	W:Money
	W:ui/NPC_Georg.png
	W:ui/NPC_Georg_b.png
	W:b8q03
	W:b8q03GeorgGotoKaterina
	W:pt_map_katerina
	A:AddMark
	W:oob8Georg1
	W:oob8Georg2
	W:playsound
	W:givemoney
	W:b8GeorgVisit
	W:money3000 is given
	W:b8q03MladVladIsVictim
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f7065727479006d000000616464006d006f006e006500790000004d006f006e00650079000000750069002f004e00500043005f00470065006f00720067002e0070006e0067000000750069002f004e00500043005f00470065006f00720067005f0062002e0070006e006700000062003800710030003300000062003800710030003300470065006f007200670047006f0074006f004b00610074006500720069006e0061000000700074005f006d00610070005f006b00610074006500720069006e00610000004164644d61726b006f006f0062003800470065006f0072006700310000006f006f0062003800470065006f00720067003200000070006c006100790073006f0075006e006400000067006900760065006d006f006e0065007900000062003800470065006f00720067005600690073006900740000006d006f006e00650079003300300030003000200069007300200067006900760065006e000000620038007100300033004d006c006100640056006c006100640049007300560069006300740069006d000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000
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
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
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
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x644
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2e1 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x61a Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x696 Vars = (int)
		EVENT_6 Op = 0x6bc Vars = ()
		EVENT_5 Op = 0x6cb Vars = ()
		EVENT_45 Op = 0x6d8 Vars = (bool)
		EVENT_0 Op = 0x6e4 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x76f

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
0x11: Call2 0x876

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x7c9

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x774

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x8d8

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x8d6

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x8da

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x8dc

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x9ee

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
0x55: Call2 0x7b8

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
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 535231)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535232)
0x6e: Push((int) 36953)
0x6f: Push((int) 36907)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535233)
0x73: Push((int) -1)
0x74: Push((int) 36908)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535280)
0x78: Push((int) -1)
0x79: Push((int) 36956)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x8de

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x853

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x8de

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x85a

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x86f

0xb8: Pop(0)
0xb9: Push((int) 36906)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535231)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535232)
0xc6: Push((int) 36953)
0xc7: Push((int) 36907)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535233)
0xcb: Push((int) -1)
0xcc: Push((int) 36908)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535280)
0xd0: Push((int) -1)
0xd1: Push((int) 36956)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36953)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535277)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535278)
0xe2: Push((int) 36957)
0xe3: Push((int) 36954)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535279)
0xe7: Push((int) 36957)
0xe8: Push((int) 36955)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36957)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535281)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535282)
0xf9: Push((int) -1)
0xfa: Push((int) 36958)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535283)
0xfe: Push((int) -1)
0xff: Push((int) 36959)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x8de

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xb4

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object)
0x113: PushEmpty(object)
0x114: Call2 0x876

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x7c9

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x774

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x8d8

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x8d6

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x8da

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x8dc

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x9ee

0x13a: Pop(0)
0x13b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x13c: Pop(1)
0x13d: Stack[-2] = (int) -1
0x13e: @ IsOverrideActive(Stack[-3])
0x13f: Pop(0)
0x140: Push(Stack[-3])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ DoDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(object, object)
0x147: Stack[-11] = Stack[-2]
0x148: Stack[-6] = Stack[-1]
0x149: Push(-2, 4); TaskCall(4)
0x14a: Call2 0x161

0x14b: Pop(-2, 4); TaskReturn
0x14c: Pop(2)
0x14d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: @ sync()
0x152: Pop(0)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: GOTO 0x14f

0x156: PushEmpty(object)
0x157: Stack[-10] = Stack[-1]
0x158: Call2 0x7b8

0x159: Pop(1)
0x15a: @ StopDialog(Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x15d: Pop(0)
0x15e: Stack[-2] = Stack[-10]
0x15f: Return(); Pop(8)

0x160: Stack[-4] = 0
0x161: PushEmpty()
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x163: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x165: Push((int) 1)
0x166: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x19b

0x16a: Pop(1)
0x16b: Push((int) 518057)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 518058)
0x171: Push((int) 32643)
0x172: Push((int) 19191)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 531316)
0x176: Push((int) 32643)
0x177: Push((int) 32642)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0x8de

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x853

0x189: Pop(1)
0x18a: GOTO 0x181

0x18b: GOTO 0x19a

0x18c: Push("all") // @poff=138
0x18d: Push("idle") // @poff=146
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd()
0x191: Pop(0)
0x192: Push( Stack[3 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19a

0x195: Push("all") // @poff=138
0x196: Push("idle") // @poff=146
0x197: @ PlayAnimation(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: GOTO 0x190

0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool)
0x19d: Call2 0x8de

0x19e: Pop(0)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(string, bool)
0x1a6: Stack[-3] = Stack[-2]
0x1a7: Push("") // @poff=102
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-1] = (bool) 0
0x1ab: GOTO 0x1ad

0x1ac: Stack[-1] = (bool) 1
0x1ad: Call2 0x85a

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x86f

0x1b6: Pop(0)
0x1b7: Push((int) 19190)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 518057)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 518058)
0x1c4: Push((int) 32643)
0x1c5: Push((int) 19191)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 531316)
0x1c9: Push((int) 32643)
0x1ca: Push((int) 32642)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 32643)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x19b

0x1d4: Pop(1)
0x1d5: Push((int) 531317)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 531318)
0x1db: Push((int) -1)
0x1dc: Push((int) 32644)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Push((int) 531319)
0x1e0: Push((int) -1)
0x1e1: Push((int) 32645)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e6: PushEmpty(bool)
0x1e7: Call2 0x8de

0x1e8: Pop(0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: @ lshStopAnimation()
0x1eb: Pop(0)
0x1ec: GOTO 0x1ef

0x1ed: @ StopAnimation()
0x1ee: Pop(0)
0x1ef: Return(); Pop(0)

0x1f0: GOTO 0x1b2

0x1f1: Return(); Pop(0)

0x1f2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f4: PushEmpty(bool, object)
0x1f5: PushEmpty(object)
0x1f6: Call2 0x876

0x1f7: Stack[-1] = Stack[-2]
0x1f8: Pop(1)
0x1f9: Call2 0x7c9

0x1fa: Pop(2)
0x1fb: PushEmpty(bool, object, float)
0x1fc: Stack[-12] = Stack[-2]
0x1fd: Stack[-1] = (float) 70.0
0x1fe: Call2 0x774

0x1ff: Pop(2)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-10] = (int) -2
0x203: Return(); Pop(8)

0x204: @ CreateDialog(Stack[-4])
0x205: Pop(0)
0x206: PushEmpty(int)
0x207: Call2 0x8d8

0x208: Pop(0)
0x209: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x20a: Pop(1)
0x20b: PushEmpty(int)
0x20c: Call2 0x8d6

0x20d: Pop(0)
0x20e: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x20f: Pop(1)
0x210: PushEmpty(string)
0x211: Call2 0x8da

0x212: Pop(0)
0x213: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x214: Pop(1)
0x215: PushEmpty(string)
0x216: Call2 0x8dc

0x217: Pop(0)
0x218: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x219: Pop(1)
0x21a: PushEmpty(int)
0x21b: Call2 0x9ee

0x21c: Pop(0)
0x21d: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x21e: Pop(1)
0x21f: Stack[-2] = (int) -1
0x220: @ IsOverrideActive(Stack[-3])
0x221: Pop(0)
0x222: Push(Stack[-3])
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-10] = (int) -2
0x225: Return(); Pop(8)

0x226: @ DoDialog(Stack[-4])
0x227: Pop(0)
0x228: PushEmpty(object, object)
0x229: Stack[-11] = Stack[-2]
0x22a: Stack[-6] = Stack[-1]
0x22b: Push(-2, 4); TaskCall(6)
0x22c: Call2 0x243

0x22d: Pop(-2, 4); TaskReturn
0x22e: Pop(2)
0x22f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x230: Pop(0)
0x231: Pop(0); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: @ sync()
0x234: Pop(0)
0x235: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x236: Pop(0)
0x237: GOTO 0x231

0x238: PushEmpty(object)
0x239: Stack[-10] = Stack[-1]
0x23a: Call2 0x7b8

0x23b: Pop(1)
0x23c: @ StopDialog(Stack[-4])
0x23d: Pop(0)
0x23e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x23f: Pop(0)
0x240: Stack[-2] = Stack[-10]
0x241: Return(); Pop(8)

0x242: Stack[-4] = 0
0x243: PushEmpty()
0x244: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x245: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x246: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x247: Push((int) 1)
0x248: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x249: PushEmpty(bool, object)
0x24a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24b: Call2 0x92e

0x24c: Pop(1)
0x24d: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x24e: PushEmpty(object, object)
0x24f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x250: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x251: Call2 0x8fa

0x252: Pop(2)
0x253: PushEmpty(object, object)
0x254: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x255: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x256: Call2 0x90c

0x257: Pop(2)
0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral" // @poff=89
0x25a: Call2 0x2cb

0x25b: Pop(1)
0x25c: Push((int) 521502)
0x25d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25e: Pop(1)
0x25f: @@@ ClearReplies(); Obj=0 // @poff=116
0x260: Pop(0)
0x261: Push((int) 523951)
0x262: Push((int) 25235)
0x263: Push((int) 25234)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Push((int) 523957)
0x267: Push((int) 25241)
0x268: Push((int) 25240)
0x269: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26a: Pop(3)
0x26b: GOTO 0x2ad

0x26c: PushEmpty(string)
0x26d: Stack[-1] = "Neutral" // @poff=89
0x26e: Call2 0x2cb

0x26f: Pop(1)
0x270: Push((int) 521505)
0x271: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x272: Pop(1)
0x273: @@@ ClearReplies(); Obj=0 // @poff=116
0x274: Pop(0)
0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x277: Call2 0x93a

0x278: Pop(1)
0x279: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27a: Push((int) 521506)
0x27b: Push((int) 22668)
0x27c: Push((int) 22667)
0x27d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27e: Pop(3)
0x27f: PushEmpty(bool)
0x280: Stack[-1] = (bool) 0
0x281: PushEmpty(bool, object)
0x282: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x283: Call2 0x95d

0x284: Pop(1)
0x285: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x288: Call2 0x974

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-1] = (bool) 1
0x28c: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28d: Push((int) 521523)
0x28e: Push((int) 25213)
0x28f: Push((int) 22684)
0x290: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x291: Pop(3)
0x292: PushEmpty(bool)
0x293: Stack[-1] = (bool) 0
0x294: PushEmpty(bool, object)
0x295: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x296: Call2 0x946

0x297: Pop(1)
0x298: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29b: Call2 0x974

0x29c: Pop(1)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: Stack[-1] = (bool) 1
0x29f: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a0: Push((int) 521526)
0x2a1: Push((int) 22688)
0x2a2: Push((int) 22687)
0x2a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a4: Pop(3)
0x2a5: Push((int) 521509)
0x2a6: Push((int) -1)
0x2a7: Push((int) 22670)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: GOTO 0x2ad

0x2ab: Return(); Pop(0)

0x2ac: GOTO 0x247

0x2ad: PushEmpty(bool)
0x2ae: Call2 0x8de

0x2af: Pop(0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b1: @ lshWaitForAnimEnd()
0x2b2: Pop(0)
0x2b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: GOTO 0x2bb

0x2b6: PushEmpty(string)
0x2b7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2b8: Call2 0x853

0x2b9: Pop(1)
0x2ba: GOTO 0x2b1

0x2bb: GOTO 0x2ca

0x2bc: Push("all") // @poff=138
0x2bd: Push("idle") // @poff=146
0x2be: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bf: Pop(2)
0x2c0: @ WaitForAnimEnd()
0x2c1: Pop(0)
0x2c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: GOTO 0x2ca

0x2c5: Push("all") // @poff=138
0x2c6: Push("idle") // @poff=146
0x2c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: GOTO 0x2c0

0x2ca: Return(); Pop(0)

0x2cb: PushEmpty()
0x2cc: PushEmpty(bool)
0x2cd: Call2 0x8de

0x2ce: Pop(0)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Return(); Pop(0)

0x2d2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Return(); Pop(0)

0x2d5: PushEmpty(string, bool)
0x2d6: Stack[-3] = Stack[-2]
0x2d7: Push("") // @poff=102
0x2d8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-1] = (bool) 0
0x2db: GOTO 0x2dd

0x2dc: Stack[-1] = (bool) 1
0x2dd: Call2 0x85a

0x2de: Pop(2)
0x2df: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty()
0x2e2: Push((int) 1)
0x2e3: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x2e4: PushEmpty()
0x2e5: Call2 0x86f

0x2e6: Pop(0)
0x2e7: Push((int) 22664)
0x2e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ea: PushEmpty(object, object)
0x2eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ed: Call2 0x8e0

0x2ee: Pop(2)
0x2ef: Push((int) 22669)
0x2f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f2: PushEmpty(object, object)
0x2f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f5: Call2 0x8e0

0x2f6: Pop(2)
0x2f7: Push((int) 22684)
0x2f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(object, object)
0x2fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x900

0x2fe: Pop(2)
0x2ff: Push((int) 25222)
0x300: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x302: PushEmpty(object, object)
0x303: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x304: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x305: Call2 0x912

0x306: Pop(2)
0x307: Push((int) 25223)
0x308: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: PushEmpty(object, object)
0x30b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30d: Call2 0x912

0x30e: Pop(2)
0x30f: Push((int) 25224)
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x312: PushEmpty(object, object)
0x313: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x314: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x315: Call2 0x912

0x316: Pop(2)
0x317: Push((int) 25219)
0x318: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: PushEmpty(object, object)
0x31b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x912

0x31e: Pop(2)
0x31f: Push((int) 25220)
0x320: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x322: PushEmpty(object, object)
0x323: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x324: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x325: Call2 0x912

0x326: Pop(2)
0x327: Push((int) 22687)
0x328: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32a: PushEmpty(object, object)
0x32b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Call2 0x900

0x32e: Pop(2)
0x32f: Push((int) 22689)
0x330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x332: PushEmpty(object, object)
0x333: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x334: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x335: Call2 0x906

0x336: Pop(2)
0x337: PushEmpty(object, object)
0x338: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0x924

0x33b: Pop(2)
0x33c: PushEmpty(object, object)
0x33d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33f: Call2 0x91b

0x340: Pop(2)
0x341: Push((int) 25228)
0x342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x344: PushEmpty(object, object)
0x345: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x346: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x347: Call2 0x924

0x348: Pop(2)
0x349: PushEmpty(object, object)
0x34a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34c: Call2 0x906

0x34d: Pop(2)
0x34e: PushEmpty(object, object)
0x34f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x350: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x351: Call2 0x91b

0x352: Pop(2)
0x353: Push((int) 25229)
0x354: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: PushEmpty(object, object)
0x357: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x358: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x359: Call2 0x91b

0x35a: Pop(2)
0x35b: Push((int) 25231)
0x35c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: PushEmpty(object, object)
0x35f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x360: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x361: Call2 0x91b

0x362: Pop(2)
0x363: Push((int) 22663)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0x92e

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x36b: PushEmpty(object, object)
0x36c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36e: Call2 0x8fa

0x36f: Pop(2)
0x370: PushEmpty(object, object)
0x371: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x372: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x373: Call2 0x90c

0x374: Pop(2)
0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral" // @poff=89
0x377: Call2 0x2cb

0x378: Pop(1)
0x379: Push((int) 521502)
0x37a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37b: Pop(1)
0x37c: @@@ ClearReplies(); Obj=0 // @poff=116
0x37d: Pop(0)
0x37e: Push((int) 523951)
0x37f: Push((int) 25235)
0x380: Push((int) 25234)
0x381: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x382: Pop(3)
0x383: Push((int) 523957)
0x384: Push((int) 25241)
0x385: Push((int) 25240)
0x386: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x387: Pop(3)
0x388: Return(); Pop(0)

0x389: PushEmpty(string)
0x38a: Stack[-1] = "Neutral" // @poff=89
0x38b: Call2 0x2cb

0x38c: Pop(1)
0x38d: Push((int) 521505)
0x38e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38f: Pop(1)
0x390: @@@ ClearReplies(); Obj=0 // @poff=116
0x391: Pop(0)
0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call2 0x93a

0x395: Pop(1)
0x396: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x397: Push((int) 521506)
0x398: Push((int) 22668)
0x399: Push((int) 22667)
0x39a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39b: Pop(3)
0x39c: PushEmpty(bool)
0x39d: Stack[-1] = (bool) 0
0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a0: Call2 0x95d

0x3a1: Pop(1)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Call2 0x974

0x3a6: Pop(1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Stack[-1] = (bool) 1
0x3a9: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3aa: Push((int) 521523)
0x3ab: Push((int) 25213)
0x3ac: Push((int) 22684)
0x3ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ae: Pop(3)
0x3af: PushEmpty(bool)
0x3b0: Stack[-1] = (bool) 0
0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b3: Call2 0x946

0x3b4: Pop(1)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b8: Call2 0x974

0x3b9: Pop(1)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = (bool) 1
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bd: Push((int) 521526)
0x3be: Push((int) 22688)
0x3bf: Push((int) 22687)
0x3c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c1: Pop(3)
0x3c2: Push((int) 521509)
0x3c3: Push((int) -1)
0x3c4: Push((int) 22670)
0x3c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c6: Pop(3)
0x3c7: Return(); Pop(0)

0x3c8: Push((int) 22688)
0x3c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3cb: PushEmpty(string)
0x3cc: Stack[-1] = "Neutral" // @poff=89
0x3cd: Call2 0x2cb

0x3ce: Pop(1)
0x3cf: Push((int) 521527)
0x3d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d1: Pop(1)
0x3d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d3: Pop(0)
0x3d4: Push((int) 521528)
0x3d5: Push((int) -1)
0x3d6: Push((int) 22689)
0x3d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d8: Pop(3)
0x3d9: Push((int) 523942)
0x3da: Push((int) 25227)
0x3db: Push((int) 25225)
0x3dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3dd: Pop(3)
0x3de: Push((int) 523943)
0x3df: Push((int) 25230)
0x3e0: Push((int) 25226)
0x3e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 25230)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral" // @poff=89
0x3e9: Call2 0x2cb

0x3ea: Pop(1)
0x3eb: Push((int) 523947)
0x3ec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ed: Pop(1)
0x3ee: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ef: Pop(0)
0x3f0: Push((int) 523948)
0x3f1: Push((int) -1)
0x3f2: Push((int) 25231)
0x3f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f4: Pop(3)
0x3f5: Return(); Pop(0)

0x3f6: Push((int) 25227)
0x3f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f9: PushEmpty(string)
0x3fa: Stack[-1] = "Neutral" // @poff=89
0x3fb: Call2 0x2cb

0x3fc: Pop(1)
0x3fd: Push((int) 523944)
0x3fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ff: Pop(1)
0x400: @@@ ClearReplies(); Obj=0 // @poff=116
0x401: Pop(0)
0x402: Push((int) 523945)
0x403: Push((int) -1)
0x404: Push((int) 25228)
0x405: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x406: Pop(3)
0x407: Push((int) 523946)
0x408: Push((int) -1)
0x409: Push((int) 25229)
0x40a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 25213)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral" // @poff=89
0x412: Call2 0x2cb

0x413: Pop(1)
0x414: Push((int) 523930)
0x415: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x416: Pop(1)
0x417: @@@ ClearReplies(); Obj=0 // @poff=116
0x418: Pop(0)
0x419: Push((int) 523931)
0x41a: Push((int) 22685)
0x41b: Push((int) 25214)
0x41c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41d: Pop(3)
0x41e: Push((int) 523932)
0x41f: Push((int) 25216)
0x420: Push((int) 25215)
0x421: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 25216)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral" // @poff=89
0x429: Call2 0x2cb

0x42a: Pop(1)
0x42b: Push((int) 523933)
0x42c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42d: Pop(1)
0x42e: @@@ ClearReplies(); Obj=0 // @poff=116
0x42f: Pop(0)
0x430: Push((int) 530662)
0x431: Push((int) 22685)
0x432: Push((int) 31958)
0x433: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 22685)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Neutral" // @poff=89
0x43b: Call2 0x2cb

0x43c: Pop(1)
0x43d: Push((int) 521524)
0x43e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43f: Pop(1)
0x440: @@@ ClearReplies(); Obj=0 // @poff=116
0x441: Pop(0)
0x442: Push((int) 521525)
0x443: Push((int) 25221)
0x444: Push((int) 22686)
0x445: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x446: Pop(3)
0x447: Push((int) 523934)
0x448: Push((int) 25218)
0x449: Push((int) 25217)
0x44a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: Push((int) 25218)
0x44e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x450: PushEmpty(string)
0x451: Stack[-1] = "Neutral" // @poff=89
0x452: Call2 0x2cb

0x453: Pop(1)
0x454: Push((int) 523935)
0x455: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x456: Pop(1)
0x457: @@@ ClearReplies(); Obj=0 // @poff=116
0x458: Pop(0)
0x459: Push((int) 523936)
0x45a: Push((int) -1)
0x45b: Push((int) 25219)
0x45c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45d: Pop(3)
0x45e: Push((int) 523937)
0x45f: Push((int) -1)
0x460: Push((int) 25220)
0x461: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x462: Pop(3)
0x463: Return(); Pop(0)

0x464: Push((int) 25221)
0x465: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x467: PushEmpty(string)
0x468: Stack[-1] = "Neutral" // @poff=89
0x469: Call2 0x2cb

0x46a: Pop(1)
0x46b: Push((int) 523938)
0x46c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x46d: Pop(1)
0x46e: @@@ ClearReplies(); Obj=0 // @poff=116
0x46f: Pop(0)
0x470: Push((int) 523939)
0x471: Push((int) -1)
0x472: Push((int) 25222)
0x473: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x474: Pop(3)
0x475: Push((int) 523940)
0x476: Push((int) -1)
0x477: Push((int) 25223)
0x478: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x479: Pop(3)
0x47a: Push((int) 523941)
0x47b: Push((int) -1)
0x47c: Push((int) 25224)
0x47d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: Push((int) 22668)
0x481: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x483: PushEmpty(string)
0x484: Stack[-1] = "Neutral" // @poff=89
0x485: Call2 0x2cb

0x486: Pop(1)
0x487: Push((int) 521507)
0x488: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x489: Pop(1)
0x48a: @@@ ClearReplies(); Obj=0 // @poff=116
0x48b: Pop(0)
0x48c: Push((int) 523949)
0x48d: Push((int) 25233)
0x48e: Push((int) 25232)
0x48f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: Push((int) 25233)
0x493: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x495: PushEmpty(string)
0x496: Stack[-1] = "Neutral" // @poff=89
0x497: Call2 0x2cb

0x498: Pop(1)
0x499: Push((int) 523950)
0x49a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x49b: Pop(1)
0x49c: @@@ ClearReplies(); Obj=0 // @poff=116
0x49d: Pop(0)
0x49e: Push((int) 521508)
0x49f: Push((int) -1)
0x4a0: Push((int) 22669)
0x4a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a2: Pop(3)
0x4a3: Return(); Pop(0)

0x4a4: Push((int) 25241)
0x4a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4a7: PushEmpty(string)
0x4a8: Stack[-1] = "Neutral" // @poff=89
0x4a9: Call2 0x2cb

0x4aa: Pop(1)
0x4ab: Push((int) 523958)
0x4ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4ad: Pop(1)
0x4ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x4af: Pop(0)
0x4b0: Push((int) 523959)
0x4b1: Push((int) 25235)
0x4b2: Push((int) 25242)
0x4b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b4: Pop(3)
0x4b5: Return(); Pop(0)

0x4b6: Push((int) 25235)
0x4b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4b9: PushEmpty(string)
0x4ba: Stack[-1] = "Neutral" // @poff=89
0x4bb: Call2 0x2cb

0x4bc: Pop(1)
0x4bd: Push((int) 523952)
0x4be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4bf: Pop(1)
0x4c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c1: Pop(0)
0x4c2: Push((int) 523953)
0x4c3: Push((int) 25237)
0x4c4: Push((int) 25236)
0x4c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c6: Pop(3)
0x4c7: Push((int) 523960)
0x4c8: Push((int) 25245)
0x4c9: Push((int) 25244)
0x4ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: Push((int) 25245)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "Neutral" // @poff=89
0x4d2: Call2 0x2cb

0x4d3: Pop(1)
0x4d4: Push((int) 523961)
0x4d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d6: Pop(1)
0x4d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x4d8: Pop(0)
0x4d9: Push((int) 523962)
0x4da: Push((int) 25247)
0x4db: Push((int) 25246)
0x4dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4dd: Pop(3)
0x4de: Return(); Pop(0)

0x4df: Push((int) 25247)
0x4e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = "Neutral" // @poff=89
0x4e4: Call2 0x2cb

0x4e5: Pop(1)
0x4e6: Push((int) 523963)
0x4e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4e8: Pop(1)
0x4e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x4ea: Pop(0)
0x4eb: Push((int) 523964)
0x4ec: Push((int) 25237)
0x4ed: Push((int) 25248)
0x4ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ef: Pop(3)
0x4f0: Return(); Pop(0)

0x4f1: Push((int) 25237)
0x4f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4f4: PushEmpty(string)
0x4f5: Stack[-1] = "Neutral" // @poff=89
0x4f6: Call2 0x2cb

0x4f7: Pop(1)
0x4f8: Push((int) 523954)
0x4f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4fa: Pop(1)
0x4fb: @@@ ClearReplies(); Obj=0 // @poff=116
0x4fc: Pop(0)
0x4fd: Push((int) 523955)
0x4fe: Push((int) 25239)
0x4ff: Push((int) 25238)
0x500: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x501: Pop(3)
0x502: Return(); Pop(0)

0x503: Push((int) 25239)
0x504: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x506: PushEmpty(string)
0x507: Stack[-1] = "Neutral" // @poff=89
0x508: Call2 0x2cb

0x509: Pop(1)
0x50a: Push((int) 523956)
0x50b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x50c: Pop(1)
0x50d: @@@ ClearReplies(); Obj=0 // @poff=116
0x50e: Pop(0)
0x50f: Push((int) 523965)
0x510: Push((int) 25250)
0x511: Push((int) 25249)
0x512: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x513: Pop(3)
0x514: Push((int) 523970)
0x515: Push((int) 25261)
0x516: Push((int) 25254)
0x517: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x518: Pop(3)
0x519: Return(); Pop(0)

0x51a: Push((int) 25261)
0x51b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x51d: PushEmpty(string)
0x51e: Stack[-1] = "Neutral" // @poff=89
0x51f: Call2 0x2cb

0x520: Pop(1)
0x521: Push((int) 523974)
0x522: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x523: Pop(1)
0x524: @@@ ClearReplies(); Obj=0 // @poff=116
0x525: Pop(0)
0x526: Push((int) 523975)
0x527: Push((int) 25250)
0x528: Push((int) 25262)
0x529: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52a: Pop(3)
0x52b: Return(); Pop(0)

0x52c: Push((int) 25250)
0x52d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x52f: PushEmpty(string)
0x530: Stack[-1] = "Neutral" // @poff=89
0x531: Call2 0x2cb

0x532: Pop(1)
0x533: Push((int) 523966)
0x534: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x535: Pop(1)
0x536: @@@ ClearReplies(); Obj=0 // @poff=116
0x537: Pop(0)
0x538: Push((int) 523967)
0x539: Push((int) 25252)
0x53a: Push((int) 25251)
0x53b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53c: Pop(3)
0x53d: Return(); Pop(0)

0x53e: Push((int) 25252)
0x53f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x541: PushEmpty(string)
0x542: Stack[-1] = "Neutral" // @poff=89
0x543: Call2 0x2cb

0x544: Pop(1)
0x545: Push((int) 523968)
0x546: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x547: Pop(1)
0x548: @@@ ClearReplies(); Obj=0 // @poff=116
0x549: Pop(0)
0x54a: Push((int) 523971)
0x54b: Push((int) 25256)
0x54c: Push((int) 25255)
0x54d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54e: Pop(3)
0x54f: Push((int) 523973)
0x550: Push((int) 25256)
0x551: Push((int) 25257)
0x552: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: Push((int) 25256)
0x556: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x558: PushEmpty(string)
0x559: Stack[-1] = "Neutral" // @poff=89
0x55a: Call2 0x2cb

0x55b: Pop(1)
0x55c: Push((int) 523972)
0x55d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x55e: Pop(1)
0x55f: @@@ ClearReplies(); Obj=0 // @poff=116
0x560: Pop(0)
0x561: Push((int) 521503)
0x562: Push((int) -1)
0x563: Push((int) 22664)
0x564: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x565: Pop(3)
0x566: Push((int) 521504)
0x567: Push((int) -1)
0x568: Push((int) 22665)
0x569: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x56a: Pop(3)
0x56b: Return(); Pop(0)

0x56c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x56d: PushEmpty(bool)
0x56e: Call2 0x8de

0x56f: Pop(0)
0x570: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x571: @ lshStopAnimation()
0x572: Pop(0)
0x573: GOTO 0x576

0x574: @ StopAnimation()
0x575: Pop(0)
0x576: Return(); Pop(0)

0x577: GOTO 0x2e2

0x578: Return(); Pop(0)

0x579: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x57a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x57b: PushEmpty(bool, object)
0x57c: PushEmpty(object)
0x57d: Call2 0x876

0x57e: Stack[-1] = Stack[-2]
0x57f: Pop(1)
0x580: Call2 0x7c9

0x581: Pop(2)
0x582: PushEmpty(bool, object, float)
0x583: Stack[-12] = Stack[-2]
0x584: Stack[-1] = (float) 70.0
0x585: Call2 0x774

0x586: Pop(2)
0x587: Pop(1); Push((bool) Stack[-1] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: Stack[-10] = (int) -2
0x58a: Return(); Pop(8)

0x58b: @ CreateDialog(Stack[-4])
0x58c: Pop(0)
0x58d: PushEmpty(int)
0x58e: Call2 0x8d8

0x58f: Pop(0)
0x590: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x591: Pop(1)
0x592: PushEmpty(int)
0x593: Call2 0x8d6

0x594: Pop(0)
0x595: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x596: Pop(1)
0x597: PushEmpty(string)
0x598: Call2 0x8da

0x599: Pop(0)
0x59a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x59b: Pop(1)
0x59c: PushEmpty(string)
0x59d: Call2 0x8dc

0x59e: Pop(0)
0x59f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x5a0: Pop(1)
0x5a1: PushEmpty(int)
0x5a2: Call2 0x9ee

0x5a3: Pop(0)
0x5a4: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5a5: Pop(1)
0x5a6: Stack[-2] = (int) -1
0x5a7: @ IsOverrideActive(Stack[-3])
0x5a8: Pop(0)
0x5a9: Push(Stack[-3])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-10] = (int) -2
0x5ac: Return(); Pop(8)

0x5ad: @ DoDialog(Stack[-4])
0x5ae: Pop(0)
0x5af: PushEmpty(object, object)
0x5b0: Stack[-11] = Stack[-2]
0x5b1: Stack[-6] = Stack[-1]
0x5b2: Push(-2, 4); TaskCall(8)
0x5b3: Call2 0x5ca

0x5b4: Pop(-2, 4); TaskReturn
0x5b5: Pop(2)
0x5b6: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5b7: Pop(0)
0x5b8: Pop(0); Push((bool) Stack[-1] == 0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ba: @ sync()
0x5bb: Pop(0)
0x5bc: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5bd: Pop(0)
0x5be: GOTO 0x5b8

0x5bf: PushEmpty(object)
0x5c0: Stack[-10] = Stack[-1]
0x5c1: Call2 0x7b8

0x5c2: Pop(1)
0x5c3: @ StopDialog(Stack[-4])
0x5c4: Pop(0)
0x5c5: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5c6: Pop(0)
0x5c7: Stack[-2] = Stack[-10]
0x5c8: Return(); Pop(8)

0x5c9: Stack[-4] = 0
0x5ca: PushEmpty()
0x5cb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5cc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5cd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ce: Push((int) 1)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5d0: PushEmpty(string)
0x5d1: Stack[-1] = "Neutral" // @poff=89
0x5d2: Call2 0x604

0x5d3: Pop(1)
0x5d4: Push((int) 540554)
0x5d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d6: Pop(1)
0x5d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d8: Pop(0)
0x5d9: Push((int) 540555)
0x5da: Push((int) -1)
0x5db: Push((int) 42564)
0x5dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5dd: Pop(3)
0x5de: Push((int) 540794)
0x5df: Push((int) -1)
0x5e0: Push((int) 42843)
0x5e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e2: Pop(3)
0x5e3: GOTO 0x5e6

0x5e4: Return(); Pop(0)

0x5e5: GOTO 0x5ce

0x5e6: PushEmpty(bool)
0x5e7: Call2 0x8de

0x5e8: Pop(0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5ea: @ lshWaitForAnimEnd()
0x5eb: Pop(0)
0x5ec: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ed: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ee: GOTO 0x5f4

0x5ef: PushEmpty(string)
0x5f0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5f1: Call2 0x853

0x5f2: Pop(1)
0x5f3: GOTO 0x5ea

0x5f4: GOTO 0x603

0x5f5: Push("all") // @poff=138
0x5f6: Push("idle") // @poff=146
0x5f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f8: Pop(2)
0x5f9: @ WaitForAnimEnd()
0x5fa: Pop(0)
0x5fb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5fc: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fd: GOTO 0x603

0x5fe: Push("all") // @poff=138
0x5ff: Push("idle") // @poff=146
0x600: @ PlayAnimation(Stack[-2], Stack[-1])
0x601: Pop(2)
0x602: GOTO 0x5f9

0x603: Return(); Pop(0)

0x604: PushEmpty()
0x605: PushEmpty(bool)
0x606: Call2 0x8de

0x607: Pop(0)
0x608: Pop(1); Push((bool) Stack[-1] == 0)
0x609: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x60a: Return(); Pop(0)

0x60b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x60c: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60d: Return(); Pop(0)

0x60e: PushEmpty(string, bool)
0x60f: Stack[-3] = Stack[-2]
0x610: Push("") // @poff=102
0x611: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x613: Stack[-1] = (bool) 0
0x614: GOTO 0x616

0x615: Stack[-1] = (bool) 1
0x616: Call2 0x85a

0x617: Pop(2)
0x618: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x619: Return(); Pop(0)

0x61a: PushEmpty()
0x61b: Push((int) 1)
0x61c: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x61d: PushEmpty()
0x61e: Call2 0x86f

0x61f: Pop(0)
0x620: Push((int) 42563)
0x621: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x623: PushEmpty(string)
0x624: Stack[-1] = "Neutral" // @poff=89
0x625: Call2 0x604

0x626: Pop(1)
0x627: Push((int) 540554)
0x628: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x629: Pop(1)
0x62a: @@@ ClearReplies(); Obj=0 // @poff=116
0x62b: Pop(0)
0x62c: Push((int) 540555)
0x62d: Push((int) -1)
0x62e: Push((int) 42564)
0x62f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x630: Pop(3)
0x631: Push((int) 540794)
0x632: Push((int) -1)
0x633: Push((int) 42843)
0x634: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x635: Pop(3)
0x636: Return(); Pop(0)

0x637: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x638: PushEmpty(bool)
0x639: Call2 0x8de

0x63a: Pop(0)
0x63b: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63c: @ lshStopAnimation()
0x63d: Pop(0)
0x63e: GOTO 0x641

0x63f: @ StopAnimation()
0x640: Pop(0)
0x641: Return(); Pop(0)

0x642: GOTO 0x61b

0x643: Return(); Pop(0)

0x644: Push(GlobalVars[1])
0x645: Stack[-1] = (bool) 0
0x646: GlobalVars[1] = Stack[-1]; Pop(1)
0x647: PushEmpty()
0x648: Call2 0x64b

0x649: Pop(0)
0x64a: Return(); Pop(0)

0x64b: PushEmpty(bool)
0x64c: Call2 0x76f

0x64d: Pop(0)
0x64e: Pop(1); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x650: PushEmpty()
0x651: Push(-0, 0); TaskCall(0)
0x652: Call2 0x0

0x653: Pop(-0, 0); TaskReturn
0x654: Pop(0)
0x655: PushEmpty()
0x656: Call2 0x6cb

0x657: Pop(0)
0x658: @ GetDirection(Stack[-0]T)
0x659: Pop(0)
0x65a: PushEmpty()
0x65b: Call2 0x701

0x65c: Pop(0)
0x65d: GOTO 0x65a

0x65e: Return(); Pop(0)

0x65f: PushEmpty(object, object)
0x660: Push("player") // @poff=156
0x661: @ FindActor(Stack[-2], Stack[-1])
0x662: Pop(1)
0x663: Pop(0); Push((bool) Stack[-1] == 0)
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-3] = (bool) 0
0x666: Return(); Pop(2)

0x667: PushEmpty(bool, object)
0x668: Stack[-3] = Stack[-1]
0x669: Call2 0x766

0x66a: Stack[-2] = Stack[-5]
0x66b: Pop(2)
0x66c: Return(); Pop(2)

0x66d: Stack[-1] = 0
0x66e: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x66f: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x670: @ RotateAsync(Stack[-2], Stack[-1])
0x671: Pop(2)
0x672: Return(); Pop(0)

0x673: PushEmpty(object, bool, object, bool)
0x674: Push("player") // @poff=156
0x675: @ FindActor(Stack[-3], Stack[-1])
0x676: Pop(1)
0x677: Pop(0); Push((bool) Stack[-2] == 0)
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-5] = (bool) 0
0x67a: Return(); Pop(4)

0x67b: PushEmpty(float, object)
0x67c: Stack[-4] = Stack[-1]
0x67d: Call2 0x74d

0x67e: Pop(1)
0x67f: Push((float)90000.0)
0x680: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x682: Stack[-5] = (bool) 0
0x683: Return(); Pop(4)

0x684: @ CanSee(Stack[-1], Stack[-2])
0x685: Pop(0)
0x686: Stack[-1] = Stack[-5]
0x687: Return(); Pop(4)

0x688: Stack[-2] = 0
0x689: PushEmpty(float, float)
0x68a: Push((int) 8)
0x68b: Push((int) 16)
0x68c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(2)
0x68e: Push((int) 10)
0x68f: @ SetTimer(Stack[-1], Stack[-2])
0x690: Pop(1)
0x691: Return(); Pop(2)

0x692: Push((int) 10)
0x693: @ KillTimer(Stack[-1])
0x694: Pop(1)
0x695: Return(); Pop(0)

0x696: PushEmpty()
0x697: Push((int) 10)
0x698: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x69a: PushEmpty()
0x69b: Call2 0x692

0x69c: Pop(0)
0x69d: PushEmpty(bool)
0x69e: Stack[-1] = (bool) 0
0x69f: PushEmpty(bool)
0x6a0: Call2 0x76f

0x6a1: Pop(0)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a3: PushEmpty(bool)
0x6a4: Call2 0x673

0x6a5: Pop(0)
0x6a6: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a7: Stack[-1] = (bool) 1
0x6a8: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a9: PushEmpty(bool)
0x6aa: Call2 0x65f

0x6ab: Pop(0)
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6ad: PushEmpty(bool, object)
0x6ae: PushEmpty(object)
0x6af: Call2 0x876

0x6b0: Stack[-1] = Stack[-2]
0x6b1: Pop(1)
0x6b2: Call2 0x803

0x6b3: Pop(2)
0x6b4: GOTO 0x6bb

0x6b5: PushEmpty()
0x6b6: Call2 0x66e

0x6b7: Pop(0)
0x6b8: PushEmpty()
0x6b9: Call2 0x689

0x6ba: Pop(0)
0x6bb: Return(); Pop(0)

0x6bc: PushEmpty()
0x6bd: Call2 0x748

0x6be: Pop(0)
0x6bf: PushEmpty()
0x6c0: Call2 0x692

0x6c1: Pop(0)
0x6c2: @ lshStopSpeech()
0x6c3: Pop(0)
0x6c4: @ lshStopAnimation()
0x6c5: Pop(0)
0x6c6: @ StopAsync()
0x6c7: Pop(0)
0x6c8: @ Hold()
0x6c9: Pop(0)
0x6ca: Return(); Pop(0)

0x6cb: @ StopGroup0()
0x6cc: Pop(0)
0x6cd: PushEmpty()
0x6ce: Call2 0x692

0x6cf: Pop(0)
0x6d0: PushEmpty(string)
0x6d1: Stack[-1] = "Neutral" // @poff=89
0x6d2: Call2 0x853

0x6d3: Pop(1)
0x6d4: PushEmpty()
0x6d5: Call2 0x689

0x6d6: Pop(0)
0x6d7: Return(); Pop(0)

0x6d8: PushEmpty()
0x6d9: Push(Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6db: PushEmpty()
0x6dc: Call2 0x689

0x6dd: Pop(0)
0x6de: GOTO 0x6e3

0x6df: PushEmpty(string)
0x6e0: Stack[-1] = "Neutral" // @poff=89
0x6e1: Call2 0x853

0x6e2: Pop(1)
0x6e3: Return(); Pop(0)

0x6e4: PushEmpty(bool, bool)
0x6e5: @ IsOverrideActive(Stack[-1])
0x6e6: Pop(0)
0x6e7: Pop(0); Push((bool) Stack[-1] == 0)
0x6e8: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6e9: EventDisable(0)
0x6ea: PushEmpty()
0x6eb: Call2 0x748

0x6ec: Pop(0)
0x6ed: PushEmpty(bool, object)
0x6ee: Stack[-5] = Stack[-1]
0x6ef: Call2 0x766

0x6f0: Pop(2)
0x6f1: EventEnable(0)
0x6f2: PushEmpty(object)
0x6f3: Stack[-4] = Stack[-1]
0x6f4: Call2 0x9ff

0x6f5: Pop(1)
0x6f6: PushEmpty(string)
0x6f7: Stack[-1] = "Neutral" // @poff=89
0x6f8: Call2 0x853

0x6f9: Pop(1)
0x6fa: PushEmpty()
0x6fb: Call2 0x692

0x6fc: Pop(0)
0x6fd: PushEmpty()
0x6fe: Call2 0x689

0x6ff: Pop(0)
0x700: Return(); Pop(2)

0x701: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x702: @ WaitForAnimEnd()
0x703: Pop(0)
0x704: PushEmpty(bool)
0x705: Call2 0x76f

0x706: Pop(0)
0x707: Pop(1); Push((bool) Stack[-1] == 0)
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: Return(); Pop(12)

0x70a: PushEmpty(int)
0x70b: Call2 0x8c5

0x70c: Stack[-1] = Stack[-7]
0x70d: Pop(1)
0x70e: Stack[-5] = (int) 0
0x70f: PushEmpty(bool)
0x710: Stack[-1] = (bool) 0
0x711: Push((int) 5)
0x712: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x714: PushEmpty(bool)
0x715: Call2 0x76f

0x716: Pop(0)
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: Stack[-1] = (bool) 1
0x719: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x71a: Pop(0); Push((bool) Stack[-6] == 0)
0x71b: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x71c: Push((int) 3)
0x71d: @ Sleep(Stack[-1], Stack[-5])
0x71e: Pop(1)
0x71f: Pop(0); Push((bool) Stack[-4] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: GOTO 0x743

0x722: GOTO 0x738

0x723: @ irand(Stack[-3], Stack[-6])
0x724: Pop(0)
0x725: Push((int) 5)
0x726: @ irand(Stack[-3], Stack[-1])
0x727: Pop(1)
0x728: Push((int) 0)
0x729: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72b: Stack[-3] = (int) 0
0x72c: Push("all") // @poff=138
0x72d: PushEmpty(string, int)
0x72e: Stack[-6] = Stack[-1]
0x72f: Call2 0x8be

0x730: Pop(1)
0x731: @ PlayAnimation(Stack[-2], Stack[-1])
0x732: Pop(2)
0x733: @ WaitForAnimEnd(Stack[-1])
0x734: Pop(0)
0x735: Pop(0); Push((bool) Stack[-1] == 0)
0x736: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x737: GOTO 0x743

0x738: PushEmpty(bool)
0x739: Call2 0x746

0x73a: Pop(0)
0x73b: Pop(1); Push((bool) Stack[-1] == 0)
0x73c: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73d: GOTO 0x743

0x73e: @ ResetAAS()
0x73f: Pop(0)
0x740: Push((int) 1)
0x741: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x742: GOTO 0x70f

0x743: @ ResetAAS()
0x744: Pop(0)
0x745: Return(); Pop(12)

0x746: Stack[-1] = (bool) 1
0x747: Return(); Pop(0)

0x748: @ StopAnimation()
0x749: Pop(0)
0x74a: @ StopGroup0()
0x74b: Pop(0)
0x74c: Return(); Pop(0)

0x74d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x74e: @ GetPosition(Stack[-3])
0x74f: Pop(0)
0x750: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x751: Pop(0)
0x752: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x753: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x754: Return(); Pop(6)

0x755: PushEmpty(int, int)
0x756: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=182
0x757: Pop(0)
0x758: Pop(0); Push(Stack[-1] + Stack[-3]);
0x759: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=194
0x75a: Pop(1)
0x75b: Return(); Pop(2)

0x75c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x75d: @ GetPosition(Stack[-3])
0x75e: Pop(0)
0x75f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x760: Push(CvectorIndex(Stack[-2], 0))
0x761: Push(CvectorIndex(Stack[-3], 2))
0x762: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x763: Pop(2)
0x764: Stack[-1] = Stack[-8]
0x765: Return(); Pop(6)

0x766: PushEmpty(cvector, cvector)
0x767: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x768: Pop(0)
0x769: PushEmpty(bool, cvector)
0x76a: Stack[-3] = Stack[-1]
0x76b: Call2 0x75c

0x76c: Stack[-2] = Stack[-6]
0x76d: Pop(2)
0x76e: Return(); Pop(2)

0x76f: PushEmpty(bool, bool)
0x770: @ IsLoaded(Stack[-1])
0x771: Pop(0)
0x772: Stack[-1] = Stack[-3]
0x773: Return(); Pop(2)

0x774: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x775: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x776: Pop(0)
0x777: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=206
0x778: Pop(0)
0x779: Push(CvectorIndex(Stack[-8], 1))
0x77a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x77b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x77c: @ GetPosition(Stack[-7])
0x77d: Pop(0)
0x77e: @ GetEyesHeight(Stack[-9])
0x77f: Pop(0)
0x780: Push(CvectorIndex(Stack[-7], 1))
0x781: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x782: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x783: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x784: Push(CvectorIndex(Stack[-6], 1))
0x785: Stack[-1] = (int) 0
0x786: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x787: Pop(0); Push(Stack[-6] | Stack[-6]);
0x788: Pop(1); Push(Sqrt(Stack[-1]))
0x789: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x78a: Stack[-5] = -Stack[-6]; Pop(0);
0x78b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x78c: PushEmpty(cvector, cvector)
0x78d: Push([0.0, 1.0, 0.0])
0x78e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x78f: Call2 0x87c

0x790: Pop(1)
0x791: Push((int) 25)
0x792: Pop(2); Push(Stack[-2] * Stack[-1]);
0x793: Pop(2); Push(Stack[-2] + Stack[-1]);
0x794: Push([0.0, 10.0, 0.0])
0x795: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x796: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x797: @ IsOverrideActive(Stack[-2])
0x798: Pop(0)
0x799: Push(Stack[-2])
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-21] = (bool) 0
0x79c: Return(); Pop(18)

0x79d: @ StopWorld()
0x79e: Pop(0)
0x79f: @ CameraTransit(Stack[-3], Stack[-5])
0x7a0: Pop(0)
0x7a1: Push(CvectorIndex(Stack[-4], 0))
0x7a2: Push(CvectorIndex(Stack[-5], 2))
0x7a3: @ Rotate(Stack[-2], Stack[-1])
0x7a4: Pop(2)
0x7a5: PushEmpty(bool)
0x7a6: Call2 0x8de

0x7a7: Pop(0)
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: GOTO 0x7b2

0x7aa: Push("head") // @poff=220
0x7ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7ac: Pop(1)
0x7ad: Push(Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7af: Push("head") // @poff=220
0x7b0: @ LookAsyncCamera(Stack[-1])
0x7b1: Pop(1)
0x7b2: @ CameraWaitForPlayFinish()
0x7b3: Pop(0)
0x7b4: @ ResumeWorld()
0x7b5: Pop(0)
0x7b6: Stack[-21] = (bool) 1
0x7b7: Return(); Pop(18)

0x7b8: PushEmpty(bool, bool)
0x7b9: @ CameraSwitchToNormal()
0x7ba: Pop(0)
0x7bb: PushEmpty(bool)
0x7bc: Call2 0x8de

0x7bd: Pop(0)
0x7be: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bf: GOTO 0x7c8

0x7c0: Push("head") // @poff=220
0x7c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7c2: Pop(1)
0x7c3: Push(Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c5: Push("head") // @poff=220
0x7c6: @ UnlookAsync(Stack[-1])
0x7c7: Pop(1)
0x7c8: Return(); Pop(2)

0x7c9: PushEmpty(int, int, int, int)
0x7ca: Push("voice_common") // @poff=230
0x7cb: @ GetVariable(Stack[-1], Stack[-3])
0x7cc: Pop(1)
0x7cd: Push(Stack[-2])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7cf: PushEmpty(bool, object)
0x7d0: Stack[-7] = Stack[-1]
0x7d1: Call2 0x803

0x7d2: Pop(1)
0x7d3: Pop(1); Push((bool) Stack[-1] == 0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d5: PushEmpty(bool, object)
0x7d6: Stack[-7] = Stack[-1]
0x7d7: Call2 0x828

0x7d8: Pop(1)
0x7d9: Pop(1); Push((bool) Stack[-1] == 0)
0x7da: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7db: Stack[-6] = (bool) 0
0x7dc: Return(); Pop(4)

0x7dd: Push((int) 2)
0x7de: @ irand(Stack[-2], Stack[-1])
0x7df: Pop(1)
0x7e0: Push(Stack[-1])
0x7e1: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e2: Push("voice_common") // @poff=230
0x7e3: Push((int) 1)
0x7e4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7e5: Push((int) 3)
0x7e6: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7e7: @ SetVariable(Stack[-2], Stack[-1])
0x7e8: Pop(2)
0x7e9: GOTO 0x7ee

0x7ea: Push("voice_common") // @poff=230
0x7eb: Push((int) 0)
0x7ec: @ SetVariable(Stack[-2], Stack[-1])
0x7ed: Pop(2)
0x7ee: GOTO 0x801

0x7ef: PushEmpty(bool, object)
0x7f0: Stack[-7] = Stack[-1]
0x7f1: Call2 0x828

0x7f2: Pop(1)
0x7f3: Pop(1); Push((bool) Stack[-1] == 0)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f5: PushEmpty(bool, object)
0x7f6: Stack[-7] = Stack[-1]
0x7f7: Call2 0x803

0x7f8: Pop(1)
0x7f9: Pop(1); Push((bool) Stack[-1] == 0)
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fb: Stack[-6] = (bool) 0
0x7fc: Return(); Pop(4)

0x7fd: Push("voice_common") // @poff=230
0x7fe: Push((int) 1)
0x7ff: @ SetVariable(Stack[-2], Stack[-1])
0x800: Pop(2)
0x801: Stack[-6] = (bool) 1
0x802: Return(); Pop(4)

0x803: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x804: Stack[-5] = "c" // @poff=256
0x805: Stack[-4] = (int) 0
0x806: Push((int) 1)
0x807: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x808: Push((int) 1)
0x809: Pop(1); Push(Stack[-5] + Stack[-1]);
0x80a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x80b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=260
0x80c: Pop(1)
0x80d: Pop(0); Push((bool) Stack[-3] == 0)
0x80e: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80f: GOTO 0x813

0x810: Push((int) 1)
0x811: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x812: GOTO 0x806

0x813: Pop(0); Push((bool) Stack[-4] == 0)
0x814: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x815: Stack[-12] = (bool) 0
0x816: Return(); Pop(10)

0x817: Stack[-2] = (int) 0
0x818: Push((int) 1)
0x819: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: @ irand(Stack[-2], Stack[-4])
0x81c: Pop(0)
0x81d: Push((int) 1)
0x81e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x81f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x820: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=182
0x821: Pop(1)
0x822: PushEmpty(bool, string)
0x823: Stack[-3] = Stack[-1]
0x824: Call2 0x860

0x825: Stack[-2] = Stack[-14]
0x826: Pop(2)
0x827: Return(); Pop(10)

0x828: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x829: Push("d") // @poff=226
0x82a: PushEmpty(int)
0x82b: Call2 0x8af

0x82c: Pop(0)
0x82d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x82e: Push("m") // @poff=272
0x82f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x830: Stack[-4] = (int) 0
0x831: Push((int) 1)
0x832: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x833: Push((int) 1)
0x834: Pop(1); Push(Stack[-5] + Stack[-1]);
0x835: Pop(1); Push(Stack[-6] + Stack[-1]);
0x836: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=260
0x837: Pop(1)
0x838: Pop(0); Push((bool) Stack[-3] == 0)
0x839: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x83a: GOTO 0x83e

0x83b: Push((int) 1)
0x83c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x83d: GOTO 0x831

0x83e: Pop(0); Push((bool) Stack[-4] == 0)
0x83f: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x840: Stack[-12] = (bool) 0
0x841: Return(); Pop(10)

0x842: Stack[-2] = (int) 0
0x843: Push((int) 1)
0x844: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x846: @ irand(Stack[-2], Stack[-4])
0x847: Pop(0)
0x848: Push((int) 1)
0x849: Pop(1); Push(Stack[-3] + Stack[-1]);
0x84a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x84b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=182
0x84c: Pop(1)
0x84d: PushEmpty(bool, string)
0x84e: Stack[-3] = Stack[-1]
0x84f: Call2 0x860

0x850: Stack[-2] = Stack[-14]
0x851: Pop(2)
0x852: Return(); Pop(10)

0x853: PushEmpty(float, float, float, float)
0x854: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x855: Pop(0)
0x856: Push((bool) 0)
0x857: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x858: Pop(1)
0x859: Return(); Pop(4)

0x85a: PushEmpty(float, float, float, float)
0x85b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x85c: Pop(0)
0x85d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x85e: Pop(0)
0x85f: Return(); Pop(4)

0x860: PushEmpty(bool, bool)
0x861: PushEmpty(bool)
0x862: Call2 0x8de

0x863: Pop(0)
0x864: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x865: @ lshHasSpeech(Stack[-1], Stack[-3])
0x866: Pop(0)
0x867: Push(Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x869: @ lshPlaySpeech(Stack[-3])
0x86a: Pop(0)
0x86b: Stack[-4] = (bool) 1
0x86c: Return(); Pop(2)

0x86d: Stack[-4] = (bool) 0
0x86e: Return(); Pop(2)

0x86f: PushEmpty(bool)
0x870: Call2 0x8de

0x871: Pop(0)
0x872: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x873: @ lshStopSpeech()
0x874: Pop(0)
0x875: Return(); Pop(0)

0x876: PushEmpty(object, object)
0x877: @ self(Stack[-1])
0x878: Pop(0)
0x879: Stack[-1] = Stack[-3]
0x87a: Return(); Pop(2)

0x87b: Stack[-1] = 0
0x87c: PushEmpty(float, float)
0x87d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x87e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x87f: Push((float)9.999999974752427e-07)
0x880: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-4] = [0.0, 0.0, 0.0]
0x883: Return(); Pop(2)

0x884: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x885: Return(); Pop(2)

0x886: PushEmpty(int, int)
0x887: @ GetVariable(Stack[-3], Stack[-1])
0x888: Pop(0)
0x889: Stack[-1] = Stack[-4]
0x88a: Return(); Pop(2)

0x88b: PushEmpty(object, object)
0x88c: @ CreateIntVector(Stack[-1])
0x88d: Pop(0)
0x88e: @@ add(Stack[-4]); Obj=1 // @poff=276
0x88f: Pop(0)
0x890: @@ add(Stack[-3]); Obj=1 // @poff=276
0x891: Pop(0)
0x892: Push((int) 3)
0x893: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x894: Pop(1)
0x895: Return(); Pop(2)

0x896: Stack[-1] = 0
0x897: PushEmpty(int, int)
0x898: PushEmpty(object, string, int)
0x899: Stack[-7] = Stack[-3]
0x89a: Stack[-2] = "money" // @poff=280
0x89b: Stack[-6] = Stack[-1]
0x89c: Call2 0x755

0x89d: Pop(3)
0x89e: Push((int) 0)
0x89f: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a1: Push("Money") // @poff=292
0x8a2: @ GetInvItemByName(Stack[-2], Stack[-1])
0x8a3: Pop(1)
0x8a4: PushEmpty(int, int)
0x8a5: Stack[-3] = Stack[-2]
0x8a6: Stack[-5] = Stack[-1]
0x8a7: Call2 0x88b

0x8a8: Pop(2)
0x8a9: Return(); Pop(2)

0x8aa: PushEmpty(float, float)
0x8ab: @ GetGameTime(Stack[-1])
0x8ac: Pop(0)
0x8ad: Stack[-1] = Stack[-3]
0x8ae: Return(); Pop(2)

0x8af: PushEmpty(float, float)
0x8b0: @ GetGameTime(Stack[-1])
0x8b1: Pop(0)
0x8b2: Push((int) 1)
0x8b3: PushEmpty(int)
0x8b4: Push((int) 24)
0x8b5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x8b6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8b7: Return(); Pop(2)

0x8b8: PushEmpty()
0x8b9: PushEmpty(int)
0x8ba: Call2 0x8af

0x8bb: Pop(0)
0x8bc: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x8bd: Return(); Pop(0)

0x8be: PushEmpty(string, string)
0x8bf: Stack[-1] = "idle" // @poff=146
0x8c0: Push(Stack[-3])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8c2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8c3: Stack[-1] = Stack[-4]
0x8c4: Return(); Pop(2)

0x8c5: PushEmpty(int, bool, int, bool)
0x8c6: Stack[-2] = (int) 0
0x8c7: Push("all") // @poff=138
0x8c8: PushEmpty(string, int)
0x8c9: Stack[-5] = Stack[-1]
0x8ca: Call2 0x8be

0x8cb: Pop(1)
0x8cc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(2)
0x8ce: Pop(0); Push((bool) Stack[-1] == 0)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8d0: GOTO 0x8d4

0x8d1: Push((int) 1)
0x8d2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8d3: GOTO 0x8c7

0x8d4: Stack[-2] = Stack[-5]
0x8d5: Return(); Pop(4)

0x8d6: Stack[-1] = (int) 515534
0x8d7: Return(); Pop(0)

0x8d8: Stack[-1] = (int) 502859
0x8d9: Return(); Pop(0)

0x8da: Stack[-1] = "ui/NPC_Georg.png" // @poff=304
0x8db: Return(); Pop(0)

0x8dc: Stack[-1] = "ui/NPC_Georg_b.png" // @poff=338
0x8dd: Return(); Pop(0)

0x8de: Stack[-1] = (bool) 1
0x8df: Return(); Pop(0)

0x8e0: PushEmpty(object, object)
0x8e1: Push("b8q03") // @poff=376
0x8e2: Push((int) 1)
0x8e3: @ SetVariable(Stack[-2], Stack[-1])
0x8e4: Pop(2)
0x8e5: PushEmpty(object)
0x8e6: Call2 0x9dd

0x8e7: Stack[-1] = Stack[-2]
0x8e8: Pop(1)
0x8e9: Push("b8q03GeorgGotoKaterina") // @poff=388
0x8ea: Push("pt_map_katerina") // @poff=434
0x8eb: Push((int) 0)
0x8ec: Push((int) 530663)
0x8ed: PushEmpty(float)
0x8ee: Call2 0x8aa

0x8ef: Pop(0)
0x8f0: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=466
0x8f1: Pop(5)
0x8f2: PushEmpty()
0x8f3: Call2 0x980

0x8f4: Pop(0)
0x8f5: PushEmpty()
0x8f6: Call2 0x98d

0x8f7: Pop(0)
0x8f8: Return(); Pop(2)

0x8f9: Stack[-1] = 0
0x8fa: PushEmpty()
0x8fb: Push("oob8Georg1") // @poff=474
0x8fc: Push((int) 1)
0x8fd: @ SetVariable(Stack[-2], Stack[-1])
0x8fe: Pop(2)
0x8ff: Return(); Pop(0)

0x900: PushEmpty()
0x901: Push("oob8Georg2") // @poff=496
0x902: Push((int) 1)
0x903: @ SetVariable(Stack[-2], Stack[-1])
0x904: Pop(2)
0x905: Return(); Pop(0)

0x906: PushEmpty()
0x907: Push("playsound") // @poff=518
0x908: Push("givemoney") // @poff=538
0x909: @ TriggerWorld(Stack[-2], Stack[-1])
0x90a: Pop(2)
0x90b: Return(); Pop(0)

0x90c: PushEmpty()
0x90d: Push("b8GeorgVisit") // @poff=558
0x90e: Push((int) 1)
0x90f: @ SetVariable(Stack[-2], Stack[-1])
0x910: Pop(2)
0x911: Return(); Pop(0)

0x912: PushEmpty()
0x913: Push("b8q03") // @poff=376
0x914: Push((int) 1000)
0x915: @ SetVariable(Stack[-2], Stack[-1])
0x916: Pop(2)
0x917: PushEmpty()
0x918: Call2 0x99a

0x919: Pop(0)
0x91a: Return(); Pop(0)

0x91b: PushEmpty()
0x91c: Push("b8q03") // @poff=376
0x91d: Push((int) 1000)
0x91e: @ SetVariable(Stack[-2], Stack[-1])
0x91f: Pop(2)
0x920: PushEmpty()
0x921: Call2 0x9a7

0x922: Pop(0)
0x923: Return(); Pop(0)

0x924: PushEmpty()
0x925: Push("money3000 is given") // @poff=584
0x926: @ Trace(Stack[-1])
0x927: Pop(1)
0x928: PushEmpty(object, int)
0x929: Stack[-4] = Stack[-2]
0x92a: Stack[-1] = (int) 3000
0x92b: Call2 0x897

0x92c: Pop(2)
0x92d: Return(); Pop(0)

0x92e: PushEmpty()
0x92f: PushEmpty(int, string)
0x930: Stack[-1] = "oob8Georg1" // @poff=474
0x931: Call2 0x886

0x932: Pop(1)
0x933: Push((int) 0)
0x934: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x935: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x936: Stack[-2] = (bool) 1
0x937: Return(); Pop(0)

0x938: Stack[-2] = (bool) 0
0x939: Return(); Pop(0)

0x93a: PushEmpty()
0x93b: PushEmpty(int, string)
0x93c: Stack[-1] = "b8q03" // @poff=376
0x93d: Call2 0x886

0x93e: Pop(1)
0x93f: Push((int) 0)
0x940: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x942: Stack[-2] = (bool) 1
0x943: Return(); Pop(0)

0x944: Stack[-2] = (bool) 0
0x945: Return(); Pop(0)

0x946: PushEmpty()
0x947: PushEmpty(bool)
0x948: Stack[-1] = (bool) 0
0x949: PushEmpty(int, string)
0x94a: Stack[-1] = "b8q03" // @poff=376
0x94b: Call2 0x886

0x94c: Pop(1)
0x94d: Push((int) 3)
0x94e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x94f: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x950: PushEmpty(int, string)
0x951: Stack[-1] = "b8q03MladVladIsVictim" // @poff=622
0x952: Call2 0x886

0x953: Pop(1)
0x954: Push((int) 0)
0x955: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x956: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x957: Stack[-1] = (bool) 1
0x958: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x959: Stack[-2] = (bool) 1
0x95a: Return(); Pop(0)

0x95b: Stack[-2] = (bool) 0
0x95c: Return(); Pop(0)

0x95d: PushEmpty()
0x95e: PushEmpty(bool)
0x95f: Stack[-1] = (bool) 0
0x960: PushEmpty(int, string)
0x961: Stack[-1] = "b8q03" // @poff=376
0x962: Call2 0x886

0x963: Pop(1)
0x964: Push((int) 3)
0x965: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x967: PushEmpty(int, string)
0x968: Stack[-1] = "b8q03MladVladIsVictim" // @poff=622
0x969: Call2 0x886

0x96a: Pop(1)
0x96b: Push((int) 0)
0x96c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96e: Stack[-1] = (bool) 1
0x96f: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x970: Stack[-2] = (bool) 1
0x971: Return(); Pop(0)

0x972: Stack[-2] = (bool) 0
0x973: Return(); Pop(0)

0x974: PushEmpty()
0x975: PushEmpty(int, string)
0x976: Stack[-1] = "oob8Georg2" // @poff=496
0x977: Call2 0x886

0x978: Pop(1)
0x979: Push((int) 0)
0x97a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x97b: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x97c: Stack[-2] = (bool) 1
0x97d: Return(); Pop(0)

0x97e: Stack[-2] = (bool) 0
0x97f: Return(); Pop(0)

0x980: PushEmpty(object, object)
0x981: Push((int) 575)
0x982: Push((int) 2)
0x983: Push((int) 530655)
0x984: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x985: Pop(3)
0x986: PushEmpty(bool, object, int)
0x987: Stack[-4] = Stack[-2]
0x988: Stack[-1] = (int) -1
0x989: Call2 0x9c1

0x98a: Pop(3)
0x98b: Return(); Pop(2)

0x98c: Stack[-1] = 0
0x98d: PushEmpty(object, object)
0x98e: Push((int) 576)
0x98f: Push((int) 2)
0x990: Push((int) 530656)
0x991: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: PushEmpty(bool, object, int)
0x994: Stack[-4] = Stack[-2]
0x995: Stack[-1] = (int) 575
0x996: Call2 0x9c1

0x997: Pop(3)
0x998: Return(); Pop(2)

0x999: Stack[-1] = 0
0x99a: PushEmpty(object, object)
0x99b: Push((int) 580)
0x99c: Push((int) 2)
0x99d: Push((int) 530660)
0x99e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: PushEmpty(bool, object, int)
0x9a1: Stack[-4] = Stack[-2]
0x9a2: Stack[-1] = (int) 575
0x9a3: Call2 0x9c1

0x9a4: Pop(3)
0x9a5: Return(); Pop(2)

0x9a6: Stack[-1] = 0
0x9a7: PushEmpty(object, object)
0x9a8: Push((int) 581)
0x9a9: Push((int) 2)
0x9aa: Push((int) 530661)
0x9ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9ac: Pop(3)
0x9ad: PushEmpty(bool, object, int)
0x9ae: Stack[-4] = Stack[-2]
0x9af: Stack[-1] = (int) 575
0x9b0: Call2 0x9c1

0x9b1: Pop(3)
0x9b2: Return(); Pop(2)

0x9b3: Stack[-1] = 0
0x9b4: PushEmpty(object, object)
0x9b5: @ GetDiaryRoot(Stack[-1])
0x9b6: Pop(0)
0x9b7: Pop(0); Push((bool) Stack[-1] == 0)
0x9b8: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9b9: Push("Can't retrieve diary root") // @poff=666
0x9ba: @ Trace(Stack[-1])
0x9bb: Pop(1)
0x9bc: Stack[-3] = (bool) 0
0x9bd: Return(); Pop(2)

0x9be: Stack[-1] = Stack[-3]
0x9bf: Return(); Pop(2)

0x9c0: Stack[-1] = 0
0x9c1: PushEmpty(object, object, int, object, object, int)
0x9c2: PushEmpty(object)
0x9c3: Call2 0x9b4

0x9c4: Stack[-1] = Stack[-4]
0x9c5: Pop(1)
0x9c6: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=718
0x9c7: Pop(0)
0x9c8: Pop(0); Push((bool) Stack[-2] == 0)
0x9c9: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9ca: Push("Can't find diary parent with id: ") // @poff=723
0x9cb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9cc: @ Trace(Stack[-1])
0x9cd: Pop(1)
0x9ce: Stack[-9] = (bool) 0
0x9cf: Return(); Pop(6)

0x9d0: @@ AddChild(Stack[-8]); Obj=2 // @poff=791
0x9d1: Pop(0)
0x9d2: Push((int) 7)
0x9d3: @ SendWorldWndMessage(Stack[-1])
0x9d4: Pop(1)
0x9d5: @@ GetCategory(Stack[-1]); Obj=8 // @poff=800
0x9d6: Pop(0)
0x9d7: @ SetDiarySection(Stack[-1])
0x9d8: Pop(0)
0x9d9: Stack[-9] = (bool) 0
0x9da: Return(); Pop(6)

0x9db: Stack[-2] = 0
0x9dc: Stack[-3] = 0
0x9dd: PushEmpty(object, object, object, object)
0x9de: @ GetMainOutdoorScene(Stack[-2])
0x9df: Pop(0)
0x9e0: Pop(0); PushNull((bool) Stack[-2] == 0)
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e2: Push("Can't find main outdoor scene") // @poff=812
0x9e3: @ Trace(Stack[-1])
0x9e4: Pop(1)
0x9e5: Stack[-1] = 0
0x9e6: Stack[-1] = Stack[-5]
0x9e7: Return(); Pop(4)

0x9e8: @@ GetMap(Stack[-1]); Obj=2 // @poff=872
0x9e9: Pop(0)
0x9ea: Stack[-1] = Stack[-5]
0x9eb: Return(); Pop(4)

0x9ec: Stack[-1] = 0
0x9ed: Stack[-2] = 0
0x9ee: PushEmpty(int, int)
0x9ef: Push("branch") // @poff=879
0x9f0: @ GetVariable(Stack[-1], Stack[-2])
0x9f1: Pop(1)
0x9f2: Push((int) 0)
0x9f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f4: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f5: Stack[-3] = (int) 1
0x9f6: Return(); Pop(2)

0x9f7: GOTO 0x9fd

0x9f8: Push((int) 1)
0x9f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9fa: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fb: Stack[-3] = (int) 2
0x9fc: Return(); Pop(2)

0x9fd: Stack[-3] = (int) 3
0x9fe: Return(); Pop(2)

0x9ff: PushEmpty()
0xa00: Push(GlobalVars[1])
0xa01: Pop(1); Push((bool) Stack[-1] == 0)
0xa02: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa03: PushEmpty(int, object)
0xa04: Stack[-3] = Stack[-1]
0xa05: Push(-2, 1); TaskCall(3)
0xa06: Call2 0x110

0xa07: Pop(-2, 1); TaskReturn
0xa08: Pop(2)
0xa09: Push(GlobalVars[1])
0xa0a: Stack[-1] = (bool) 1
0xa0b: GlobalVars[1] = Stack[-1]; Pop(1)
0xa0c: PushEmpty(bool, int)
0xa0d: Stack[-1] = (int) 8
0xa0e: Call2 0x8b8

0xa0f: Pop(1)
0xa10: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa11: PushEmpty(int, object)
0xa12: Stack[-3] = Stack[-1]
0xa13: Push(-2, 1); TaskCall(5)
0xa14: Call2 0x1f2

0xa15: Pop(-2, 1); TaskReturn
0xa16: Pop(2)
0xa17: Return(); Pop(0)

0xa18: PushEmpty(bool)
0xa19: Stack[-1] = (bool) 0
0xa1a: PushEmpty(bool, int)
0xa1b: Stack[-1] = (int) 12
0xa1c: Call2 0x8b8

0xa1d: Pop(1)
0xa1e: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa1f: Push(GlobalVars[2])
0xa20: Pop(1); Push((bool) Stack[-1] == 0)
0xa21: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa22: Stack[-1] = (bool) 1
0xa23: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa24: PushEmpty(int, object)
0xa25: Stack[-3] = Stack[-1]
0xa26: Push(-2, 1); TaskCall(1)
0xa27: Call2 0xd

0xa28: Pop(-2, 1); TaskReturn
0xa29: Pop(2)
0xa2a: Push(GlobalVars[2])
0xa2b: Stack[-1] = (bool) 1
0xa2c: GlobalVars[2] = Stack[-1]; Pop(1)
0xa2d: Return(); Pop(0)

0xa2e: PushEmpty(int, object)
0xa2f: Stack[-3] = Stack[-1]
0xa30: Push(-2, 1); TaskCall(7)
0xa31: Call2 0x579

0xa32: Pop(-2, 1); TaskReturn
0xa33: Pop(2)
0xa34: Return(); Pop(0)

