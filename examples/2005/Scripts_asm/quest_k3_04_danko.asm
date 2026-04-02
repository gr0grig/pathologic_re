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
	W:restore
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
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:k3q04
	W:quest_k3_04
	W:place_burah_lopuh
	W:completed
	W:k3q04Promise
	W:k3q04SendBurahMail
	W:money2000 is given
	W:playsound
	W:givemoney
	W:neomicin is given
	W:neomicin
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f7065727479006d000000616464006d006f006e006500790000004d006f006e006500790000004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d65006b0033007100300034000000710075006500730074005f006b0033005f0030003400000070006c006100630065005f00620075007200610068005f006c006f00700075006800000063006f006d0070006c00650074006500640000006b003300710030003400500072006f006d0069007300650000006b003300710030003400530065006e006400420075007200610068004d00610069006c0000006d006f006e00650079003200300030003000200069007300200067006900760065006e00000070006c006100790073006f0075006e006400000067006900760065006d006f006e006500790000006e0065006f006d006900630069006e00200069007300200067006900760065006e0000006e0065006f006d006900630069006e000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x274
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdb Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x278 Vars = (string)
		EVENT_6 Op = 0x28c Vars = ()
		EVENT_5 Op = 0x299 Vars = ()
		EVENT_7 Op = 0x2e8 Vars = (int)
		EVENT_45 Op = 0x32a Vars = (bool)
		EVENT_0 Op = 0x336 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3c1

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
0x11: Call2 0x4c8

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x41b

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3c6

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x60a

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x608

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x60c

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x60e

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x5f7

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
0x55: Call2 0x40a

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
0x63: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x59b

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xc5

0x6c: Pop(1)
0x6d: Push((int) 525642)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 525640)
0x73: Push((int) 26983)
0x74: Push((int) 26982)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 539159)
0x78: Push((int) 41099)
0x79: Push((int) 41098)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0xa7

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call2 0x58f

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xc5

0x85: Pop(1)
0x86: Push((int) 525624)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 525625)
0x8c: Push((int) 41108)
0x8d: Push((int) 26967)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: GOTO 0xa7

0x91: PushEmpty(string)
0x92: Stack[-1] = "Neutral" // @poff=89
0x93: Call2 0xc5

0x94: Pop(1)
0x95: Push((int) 525632)
0x96: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x97: Pop(1)
0x98: @@@ ClearReplies(); Obj=0 // @poff=116
0x99: Pop(0)
0x9a: Push((int) 525633)
0x9b: Push((int) -1)
0x9c: Push((int) 26975)
0x9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9e: Pop(3)
0x9f: Push((int) 539168)
0xa0: Push((int) -1)
0xa1: Push((int) 41107)
0xa2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa3: Pop(3)
0xa4: GOTO 0xa7

0xa5: Return(); Pop(0)

0xa6: GOTO 0x62

0xa7: PushEmpty(bool)
0xa8: Call2 0x610

0xa9: Pop(0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xab: @ lshWaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: PushEmpty(string)
0xb1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb2: Call2 0x4a5

0xb3: Pop(1)
0xb4: GOTO 0xab

0xb5: GOTO 0xc4

0xb6: Push("all") // @poff=138
0xb7: Push("idle") // @poff=146
0xb8: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: @ WaitForAnimEnd()
0xbb: Pop(0)
0xbc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: GOTO 0xc4

0xbf: Push("all") // @poff=138
0xc0: Push("idle") // @poff=146
0xc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: GOTO 0xba

0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty(bool)
0xc7: Call2 0x610

0xc8: Pop(0)
0xc9: Pop(1); Push((bool) Stack[-1] == 0)
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Return(); Pop(0)

0xcc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(0)

0xcf: PushEmpty(string, bool)
0xd0: Stack[-3] = Stack[-2]
0xd1: Push("") // @poff=102
0xd2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-1] = (bool) 0
0xd5: GOTO 0xd7

0xd6: Stack[-1] = (bool) 1
0xd7: Call2 0x4ac

0xd8: Pop(2)
0xd9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: Push((int) 1)
0xdd: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0xde: PushEmpty()
0xdf: Call2 0x4c1

0xe0: Pop(0)
0xe1: Push((int) 26986)
0xe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x561

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x574

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x584

0xf2: Pop(2)
0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x57e

0xf7: Pop(2)
0xf8: Push((int) 41106)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x561

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x574

0x104: Pop(2)
0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x57e

0x109: Pop(2)
0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x584

0x10e: Pop(2)
0x10f: Push((int) 26985)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x557

0x116: Pop(2)
0x117: Push((int) 41103)
0x118: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x557

0x11e: Pop(2)
0x11f: Push((int) 41102)
0x120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x557

0x126: Pop(2)
0x127: Push((int) 41122)
0x128: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x549

0x12e: Pop(2)
0x12f: Push((int) 26973)
0x130: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object, object)
0x133: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x134: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x135: Call2 0x549

0x136: Pop(2)
0x137: Push((int) 41121)
0x138: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: PushEmpty(object, object)
0x13b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13d: Call2 0x549

0x13e: Pop(2)
0x13f: Push((int) 26984)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x59b

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral" // @poff=89
0x149: Call2 0xc5

0x14a: Pop(1)
0x14b: Push((int) 525642)
0x14c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14d: Pop(1)
0x14e: @@@ ClearReplies(); Obj=0 // @poff=116
0x14f: Pop(0)
0x150: Push((int) 525640)
0x151: Push((int) 26983)
0x152: Push((int) 26982)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x154: Pop(3)
0x155: Push((int) 539159)
0x156: Push((int) 41099)
0x157: Push((int) 41098)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x58f

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral" // @poff=89
0x162: Call2 0xc5

0x163: Pop(1)
0x164: Push((int) 525624)
0x165: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x166: Pop(1)
0x167: @@@ ClearReplies(); Obj=0 // @poff=116
0x168: Pop(0)
0x169: Push((int) 525625)
0x16a: Push((int) 41108)
0x16b: Push((int) 26967)
0x16c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral" // @poff=89
0x171: Call2 0xc5

0x172: Pop(1)
0x173: Push((int) 525632)
0x174: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x175: Pop(1)
0x176: @@@ ClearReplies(); Obj=0 // @poff=116
0x177: Pop(0)
0x178: Push((int) 525633)
0x179: Push((int) -1)
0x17a: Push((int) 26975)
0x17b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17c: Pop(3)
0x17d: Push((int) 539168)
0x17e: Push((int) -1)
0x17f: Push((int) 41107)
0x180: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 41108)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral" // @poff=89
0x188: Call2 0xc5

0x189: Pop(1)
0x18a: Push((int) 539169)
0x18b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18c: Pop(1)
0x18d: @@@ ClearReplies(); Obj=0 // @poff=116
0x18e: Pop(0)
0x18f: Push((int) 539170)
0x190: Push((int) 41111)
0x191: Push((int) 41109)
0x192: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x193: Pop(3)
0x194: Push((int) 539171)
0x195: Push((int) -1)
0x196: Push((int) 41110)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 41111)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral" // @poff=89
0x19f: Call2 0xc5

0x1a0: Pop(1)
0x1a1: Push((int) 539172)
0x1a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a3: Pop(1)
0x1a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a5: Pop(0)
0x1a6: Push((int) 539173)
0x1a7: Push((int) 26968)
0x1a8: Push((int) 41112)
0x1a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1aa: Pop(3)
0x1ab: Push((int) 539174)
0x1ac: Push((int) 26968)
0x1ad: Push((int) 41113)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 26968)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0xc5

0x1b7: Pop(1)
0x1b8: Push((int) 525626)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 539175)
0x1be: Push((int) 41116)
0x1bf: Push((int) 41115)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Push((int) 539177)
0x1c3: Push((int) 41118)
0x1c4: Push((int) 41117)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 41118)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0xc5

0x1ce: Pop(1)
0x1cf: Push((int) 539178)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: Push((int) 539179)
0x1d5: Push((int) 41116)
0x1d6: Push((int) 41119)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d8: Pop(3)
0x1d9: Push((int) 539180)
0x1da: Push((int) -1)
0x1db: Push((int) 41121)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 41116)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral" // @poff=89
0x1e4: Call2 0xc5

0x1e5: Pop(1)
0x1e6: Push((int) 539176)
0x1e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e8: Pop(1)
0x1e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ea: Pop(0)
0x1eb: Push((int) 525627)
0x1ec: Push((int) 26970)
0x1ed: Push((int) 26969)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Push((int) 525631)
0x1f1: Push((int) -1)
0x1f2: Push((int) 26973)
0x1f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 26970)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral" // @poff=89
0x1fb: Call2 0xc5

0x1fc: Pop(1)
0x1fd: Push((int) 525628)
0x1fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ff: Pop(1)
0x200: @@@ ClearReplies(); Obj=0 // @poff=116
0x201: Pop(0)
0x202: Push((int) 539181)
0x203: Push((int) -1)
0x204: Push((int) 41122)
0x205: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 41099)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Neutral" // @poff=89
0x20d: Call2 0xc5

0x20e: Pop(1)
0x20f: Push((int) 539160)
0x210: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x211: Pop(1)
0x212: @@@ ClearReplies(); Obj=0 // @poff=116
0x213: Pop(0)
0x214: Push((int) 539161)
0x215: Push((int) 41101)
0x216: Push((int) 41100)
0x217: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x218: Pop(3)
0x219: Push((int) 539163)
0x21a: Push((int) -1)
0x21b: Push((int) 41102)
0x21c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 41101)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Neutral" // @poff=89
0x224: Call2 0xc5

0x225: Pop(1)
0x226: Push((int) 539162)
0x227: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x228: Pop(1)
0x229: @@@ ClearReplies(); Obj=0 // @poff=116
0x22a: Pop(0)
0x22b: Push((int) 525643)
0x22c: Push((int) -1)
0x22d: Push((int) 26985)
0x22e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22f: Pop(3)
0x230: Push((int) 539164)
0x231: Push((int) -1)
0x232: Push((int) 41103)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: Push((int) 26983)
0x237: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x239: PushEmpty(string)
0x23a: Stack[-1] = "Neutral" // @poff=89
0x23b: Call2 0xc5

0x23c: Pop(1)
0x23d: Push((int) 525641)
0x23e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23f: Pop(1)
0x240: @@@ ClearReplies(); Obj=0 // @poff=116
0x241: Pop(0)
0x242: Push((int) 525644)
0x243: Push((int) -1)
0x244: Push((int) 26986)
0x245: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x246: Pop(3)
0x247: Push((int) 539165)
0x248: Push((int) 41105)
0x249: Push((int) 41104)
0x24a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 41105)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Neutral" // @poff=89
0x252: Call2 0xc5

0x253: Pop(1)
0x254: Push((int) 539166)
0x255: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x256: Pop(1)
0x257: @@@ ClearReplies(); Obj=0 // @poff=116
0x258: Pop(0)
0x259: Push((int) 539167)
0x25a: Push((int) -1)
0x25b: Push((int) 41106)
0x25c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x260: PushEmpty(bool)
0x261: Call2 0x610

0x262: Pop(0)
0x263: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x264: @ lshStopAnimation()
0x265: Pop(0)
0x266: GOTO 0x269

0x267: @ StopAnimation()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: GOTO 0xdc

0x26b: Return(); Pop(0)

0x26c: PushEmpty()
0x26d: PushEmpty(int, object)
0x26e: Stack[-3] = Stack[-1]
0x26f: Push(-2, 1); TaskCall(1)
0x270: Call2 0xd

0x271: Pop(-2, 1); TaskReturn
0x272: Pop(2)
0x273: Return(); Pop(0)

0x274: PushEmpty()
0x275: Call2 0x29d

0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: PushEmpty(bool, bool)
0x279: Push("cleanup") // @poff=156
0x27a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x27c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x27d: @ IsLoaded(Stack[-1])
0x27e: Pop(0)
0x27f: Pop(0); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: PushEmpty(object)
0x282: Call2 0x4c8

0x283: Pop(0)
0x284: @ RemoveActor(Stack[-1])
0x285: Pop(1)
0x286: GOTO 0x28b

0x287: Push("restore") // @poff=172
0x288: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x28b: Return(); Pop(2)

0x28c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x28d: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28e: PushEmpty(object)
0x28f: Call2 0x4c8

0x290: Pop(0)
0x291: @ RemoveActor(Stack[-1])
0x292: Pop(1)
0x293: @ Hold()
0x294: Pop(0)
0x295: PushEmpty()
0x296: Call2 0x30e

0x297: Pop(0)
0x298: Return(); Pop(0)

0x299: PushEmpty()
0x29a: Call2 0x31d

0x29b: Pop(0)
0x29c: Return(); Pop(0)

0x29d: PushEmpty(bool)
0x29e: Call2 0x3c1

0x29f: Pop(0)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: PushEmpty()
0x2a3: Push(-0, 0); TaskCall(0)
0x2a4: Call2 0x0

0x2a5: Pop(-0, 0); TaskReturn
0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call2 0x299

0x2a9: Pop(0)
0x2aa: @ GetDirection(Stack[-0]T)
0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x353

0x2ae: Pop(0)
0x2af: GOTO 0x2ac

0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(object, object)
0x2b2: Push("player") // @poff=188
0x2b3: @ FindActor(Stack[-2], Stack[-1])
0x2b4: Pop(1)
0x2b5: Pop(0); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: Stack[-3] = (bool) 0
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(bool, object)
0x2ba: Stack[-3] = Stack[-1]
0x2bb: Call2 0x3b8

0x2bc: Stack[-2] = Stack[-5]
0x2bd: Pop(2)
0x2be: Return(); Pop(2)

0x2bf: Stack[-1] = 0
0x2c0: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2c1: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2c2: @ RotateAsync(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(object, bool, object, bool)
0x2c6: Push("player") // @poff=188
0x2c7: @ FindActor(Stack[-3], Stack[-1])
0x2c8: Pop(1)
0x2c9: Pop(0); Push((bool) Stack[-2] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-5] = (bool) 0
0x2cc: Return(); Pop(4)

0x2cd: PushEmpty(float, object)
0x2ce: Stack[-4] = Stack[-1]
0x2cf: Call2 0x39f

0x2d0: Pop(1)
0x2d1: Push((float)90000.0)
0x2d2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d4: Stack[-5] = (bool) 0
0x2d5: Return(); Pop(4)

0x2d6: @ CanSee(Stack[-1], Stack[-2])
0x2d7: Pop(0)
0x2d8: Stack[-1] = Stack[-5]
0x2d9: Return(); Pop(4)

0x2da: Stack[-2] = 0
0x2db: PushEmpty(float, float)
0x2dc: Push((int) 8)
0x2dd: Push((int) 16)
0x2de: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(2)
0x2e0: Push((int) 10)
0x2e1: @ SetTimer(Stack[-1], Stack[-2])
0x2e2: Pop(1)
0x2e3: Return(); Pop(2)

0x2e4: Push((int) 10)
0x2e5: @ KillTimer(Stack[-1])
0x2e6: Pop(1)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: Push((int) 10)
0x2ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2ec: PushEmpty()
0x2ed: Call2 0x2e4

0x2ee: Pop(0)
0x2ef: PushEmpty(bool)
0x2f0: Stack[-1] = (bool) 0
0x2f1: PushEmpty(bool)
0x2f2: Call2 0x3c1

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f5: PushEmpty(bool)
0x2f6: Call2 0x2c5

0x2f7: Pop(0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f9: Stack[-1] = (bool) 1
0x2fa: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2fb: PushEmpty(bool)
0x2fc: Call2 0x2b1

0x2fd: Pop(0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2ff: PushEmpty(bool, object)
0x300: PushEmpty(object)
0x301: Call2 0x4c8

0x302: Stack[-1] = Stack[-2]
0x303: Pop(1)
0x304: Call2 0x455

0x305: Pop(2)
0x306: GOTO 0x30d

0x307: PushEmpty()
0x308: Call2 0x2c0

0x309: Pop(0)
0x30a: PushEmpty()
0x30b: Call2 0x2db

0x30c: Pop(0)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: Call2 0x39a

0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x2e4

0x313: Pop(0)
0x314: @ lshStopSpeech()
0x315: Pop(0)
0x316: @ lshStopAnimation()
0x317: Pop(0)
0x318: @ StopAsync()
0x319: Pop(0)
0x31a: @ Hold()
0x31b: Pop(0)
0x31c: Return(); Pop(0)

0x31d: @ StopGroup0()
0x31e: Pop(0)
0x31f: PushEmpty()
0x320: Call2 0x2e4

0x321: Pop(0)
0x322: PushEmpty(string)
0x323: Stack[-1] = "Neutral" // @poff=89
0x324: Call2 0x4a5

0x325: Pop(1)
0x326: PushEmpty()
0x327: Call2 0x2db

0x328: Pop(0)
0x329: Return(); Pop(0)

0x32a: PushEmpty()
0x32b: Push(Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32d: PushEmpty()
0x32e: Call2 0x2db

0x32f: Pop(0)
0x330: GOTO 0x335

0x331: PushEmpty(string)
0x332: Stack[-1] = "Neutral" // @poff=89
0x333: Call2 0x4a5

0x334: Pop(1)
0x335: Return(); Pop(0)

0x336: PushEmpty(bool, bool)
0x337: @ IsOverrideActive(Stack[-1])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x33b: EventDisable(0)
0x33c: PushEmpty()
0x33d: Call2 0x39a

0x33e: Pop(0)
0x33f: PushEmpty(bool, object)
0x340: Stack[-5] = Stack[-1]
0x341: Call2 0x3b8

0x342: Pop(2)
0x343: EventEnable(0)
0x344: PushEmpty(object)
0x345: Stack[-4] = Stack[-1]
0x346: Call2 0x26c

0x347: Pop(1)
0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral" // @poff=89
0x34a: Call2 0x4a5

0x34b: Pop(1)
0x34c: PushEmpty()
0x34d: Call2 0x2e4

0x34e: Pop(0)
0x34f: PushEmpty()
0x350: Call2 0x2db

0x351: Pop(0)
0x352: Return(); Pop(2)

0x353: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x354: @ WaitForAnimEnd()
0x355: Pop(0)
0x356: PushEmpty(bool)
0x357: Call2 0x3c1

0x358: Pop(0)
0x359: Pop(1); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: Return(); Pop(12)

0x35c: PushEmpty(int)
0x35d: Call2 0x538

0x35e: Stack[-1] = Stack[-7]
0x35f: Pop(1)
0x360: Stack[-5] = (int) 0
0x361: PushEmpty(bool)
0x362: Stack[-1] = (bool) 0
0x363: Push((int) 5)
0x364: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: PushEmpty(bool)
0x367: Call2 0x3c1

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Stack[-1] = (bool) 1
0x36b: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x36c: Pop(0); Push((bool) Stack[-6] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36e: Push((int) 3)
0x36f: @ Sleep(Stack[-1], Stack[-5])
0x370: Pop(1)
0x371: Pop(0); Push((bool) Stack[-4] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: GOTO 0x395

0x374: GOTO 0x38a

0x375: @ irand(Stack[-3], Stack[-6])
0x376: Pop(0)
0x377: Push((int) 5)
0x378: @ irand(Stack[-3], Stack[-1])
0x379: Pop(1)
0x37a: Push((int) 0)
0x37b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-3] = (int) 0
0x37e: Push("all") // @poff=138
0x37f: PushEmpty(string, int)
0x380: Stack[-6] = Stack[-1]
0x381: Call2 0x531

0x382: Pop(1)
0x383: @ PlayAnimation(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: @ WaitForAnimEnd(Stack[-1])
0x386: Pop(0)
0x387: Pop(0); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: GOTO 0x395

0x38a: PushEmpty(bool)
0x38b: Call2 0x398

0x38c: Pop(0)
0x38d: Pop(1); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: GOTO 0x395

0x390: @ ResetAAS()
0x391: Pop(0)
0x392: Push((int) 1)
0x393: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x394: GOTO 0x361

0x395: @ ResetAAS()
0x396: Pop(0)
0x397: Return(); Pop(12)

0x398: Stack[-1] = (bool) 1
0x399: Return(); Pop(0)

0x39a: @ StopAnimation()
0x39b: Pop(0)
0x39c: @ StopGroup0()
0x39d: Pop(0)
0x39e: Return(); Pop(0)

0x39f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3a0: @ GetPosition(Stack[-3])
0x3a1: Pop(0)
0x3a2: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x3a3: Pop(0)
0x3a4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3a5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3a6: Return(); Pop(6)

0x3a7: PushEmpty(int, int)
0x3a8: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=214
0x3a9: Pop(0)
0x3aa: Pop(0); Push(Stack[-1] + Stack[-3]);
0x3ab: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=226
0x3ac: Pop(1)
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3af: @ GetPosition(Stack[-3])
0x3b0: Pop(0)
0x3b1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3b2: Push(CvectorIndex(Stack[-2], 0))
0x3b3: Push(CvectorIndex(Stack[-3], 2))
0x3b4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3b5: Pop(2)
0x3b6: Stack[-1] = Stack[-8]
0x3b7: Return(); Pop(6)

0x3b8: PushEmpty(cvector, cvector)
0x3b9: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x3ba: Pop(0)
0x3bb: PushEmpty(bool, cvector)
0x3bc: Stack[-3] = Stack[-1]
0x3bd: Call2 0x3ae

0x3be: Stack[-2] = Stack[-6]
0x3bf: Pop(2)
0x3c0: Return(); Pop(2)

0x3c1: PushEmpty(bool, bool)
0x3c2: @ IsLoaded(Stack[-1])
0x3c3: Pop(0)
0x3c4: Stack[-1] = Stack[-3]
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3c7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x3c8: Pop(0)
0x3c9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=238
0x3ca: Pop(0)
0x3cb: Push(CvectorIndex(Stack[-8], 1))
0x3cc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3cd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ce: @ GetPosition(Stack[-7])
0x3cf: Pop(0)
0x3d0: @ GetEyesHeight(Stack[-9])
0x3d1: Pop(0)
0x3d2: Push(CvectorIndex(Stack[-7], 1))
0x3d3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3d4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3d5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3d6: Push(CvectorIndex(Stack[-6], 1))
0x3d7: Stack[-1] = (int) 0
0x3d8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3d9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3da: Pop(1); Push(Sqrt(Stack[-1]))
0x3db: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3dc: Stack[-5] = -Stack[-6]; Pop(0);
0x3dd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3de: PushEmpty(cvector, cvector)
0x3df: Push([0.0, 1.0, 0.0])
0x3e0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3e1: Call2 0x4ce

0x3e2: Pop(1)
0x3e3: Push((int) 25)
0x3e4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e6: Push([0.0, 10.0, 0.0])
0x3e7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3e8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3e9: @ IsOverrideActive(Stack[-2])
0x3ea: Pop(0)
0x3eb: Push(Stack[-2])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-21] = (bool) 0
0x3ee: Return(); Pop(18)

0x3ef: @ StopWorld()
0x3f0: Pop(0)
0x3f1: @ CameraTransit(Stack[-3], Stack[-5])
0x3f2: Pop(0)
0x3f3: Push(CvectorIndex(Stack[-4], 0))
0x3f4: Push(CvectorIndex(Stack[-5], 2))
0x3f5: @ Rotate(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: PushEmpty(bool)
0x3f8: Call2 0x610

0x3f9: Pop(0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: GOTO 0x404

0x3fc: Push("head") // @poff=252
0x3fd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3fe: Pop(1)
0x3ff: Push(Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x401: Push("head") // @poff=252
0x402: @ LookAsyncCamera(Stack[-1])
0x403: Pop(1)
0x404: @ CameraWaitForPlayFinish()
0x405: Pop(0)
0x406: @ ResumeWorld()
0x407: Pop(0)
0x408: Stack[-21] = (bool) 1
0x409: Return(); Pop(18)

0x40a: PushEmpty(bool, bool)
0x40b: @ CameraSwitchToNormal()
0x40c: Pop(0)
0x40d: PushEmpty(bool)
0x40e: Call2 0x610

0x40f: Pop(0)
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: GOTO 0x41a

0x412: Push("head") // @poff=252
0x413: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x414: Pop(1)
0x415: Push(Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x417: Push("head") // @poff=252
0x418: @ UnlookAsync(Stack[-1])
0x419: Pop(1)
0x41a: Return(); Pop(2)

0x41b: PushEmpty(int, int, int, int)
0x41c: Push("voice_common") // @poff=262
0x41d: @ GetVariable(Stack[-1], Stack[-3])
0x41e: Pop(1)
0x41f: Push(Stack[-2])
0x420: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x421: PushEmpty(bool, object)
0x422: Stack[-7] = Stack[-1]
0x423: Call2 0x455

0x424: Pop(1)
0x425: Pop(1); Push((bool) Stack[-1] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x427: PushEmpty(bool, object)
0x428: Stack[-7] = Stack[-1]
0x429: Call2 0x47a

0x42a: Pop(1)
0x42b: Pop(1); Push((bool) Stack[-1] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-6] = (bool) 0
0x42e: Return(); Pop(4)

0x42f: Push((int) 2)
0x430: @ irand(Stack[-2], Stack[-1])
0x431: Pop(1)
0x432: Push(Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x434: Push("voice_common") // @poff=262
0x435: Push((int) 1)
0x436: Pop(1); Push(Stack[-4] + Stack[-1]);
0x437: Push((int) 3)
0x438: Pop(2); Push(Stack[-2] % Stack[-1]);
0x439: @ SetVariable(Stack[-2], Stack[-1])
0x43a: Pop(2)
0x43b: GOTO 0x440

0x43c: Push("voice_common") // @poff=262
0x43d: Push((int) 0)
0x43e: @ SetVariable(Stack[-2], Stack[-1])
0x43f: Pop(2)
0x440: GOTO 0x453

0x441: PushEmpty(bool, object)
0x442: Stack[-7] = Stack[-1]
0x443: Call2 0x47a

0x444: Pop(1)
0x445: Pop(1); Push((bool) Stack[-1] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x447: PushEmpty(bool, object)
0x448: Stack[-7] = Stack[-1]
0x449: Call2 0x455

0x44a: Pop(1)
0x44b: Pop(1); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-6] = (bool) 0
0x44e: Return(); Pop(4)

0x44f: Push("voice_common") // @poff=262
0x450: Push((int) 1)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Stack[-6] = (bool) 1
0x454: Return(); Pop(4)

0x455: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x456: Stack[-5] = "c" // @poff=288
0x457: Stack[-4] = (int) 0
0x458: Push((int) 1)
0x459: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45a: Push((int) 1)
0x45b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x45c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x45d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=292
0x45e: Pop(1)
0x45f: Pop(0); Push((bool) Stack[-3] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: GOTO 0x465

0x462: Push((int) 1)
0x463: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x464: GOTO 0x458

0x465: Pop(0); Push((bool) Stack[-4] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-12] = (bool) 0
0x468: Return(); Pop(10)

0x469: Stack[-2] = (int) 0
0x46a: Push((int) 1)
0x46b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: @ irand(Stack[-2], Stack[-4])
0x46e: Pop(0)
0x46f: Push((int) 1)
0x470: Pop(1); Push(Stack[-3] + Stack[-1]);
0x471: Pop(1); Push(Stack[-6] + Stack[-1]);
0x472: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=214
0x473: Pop(1)
0x474: PushEmpty(bool, string)
0x475: Stack[-3] = Stack[-1]
0x476: Call2 0x4b2

0x477: Stack[-2] = Stack[-14]
0x478: Pop(2)
0x479: Return(); Pop(10)

0x47a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x47b: Push("d") // @poff=258
0x47c: PushEmpty(int)
0x47d: Call2 0x528

0x47e: Pop(0)
0x47f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x480: Push("m") // @poff=304
0x481: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x482: Stack[-4] = (int) 0
0x483: Push((int) 1)
0x484: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x485: Push((int) 1)
0x486: Pop(1); Push(Stack[-5] + Stack[-1]);
0x487: Pop(1); Push(Stack[-6] + Stack[-1]);
0x488: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=292
0x489: Pop(1)
0x48a: Pop(0); Push((bool) Stack[-3] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: GOTO 0x490

0x48d: Push((int) 1)
0x48e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x48f: GOTO 0x483

0x490: Pop(0); Push((bool) Stack[-4] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-12] = (bool) 0
0x493: Return(); Pop(10)

0x494: Stack[-2] = (int) 0
0x495: Push((int) 1)
0x496: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: @ irand(Stack[-2], Stack[-4])
0x499: Pop(0)
0x49a: Push((int) 1)
0x49b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x49c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=214
0x49e: Pop(1)
0x49f: PushEmpty(bool, string)
0x4a0: Stack[-3] = Stack[-1]
0x4a1: Call2 0x4b2

0x4a2: Stack[-2] = Stack[-14]
0x4a3: Pop(2)
0x4a4: Return(); Pop(10)

0x4a5: PushEmpty(float, float, float, float)
0x4a6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4a7: Pop(0)
0x4a8: Push((bool) 0)
0x4a9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(1)
0x4ab: Return(); Pop(4)

0x4ac: PushEmpty(float, float, float, float)
0x4ad: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4ae: Pop(0)
0x4af: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4b0: Pop(0)
0x4b1: Return(); Pop(4)

0x4b2: PushEmpty(bool, bool)
0x4b3: PushEmpty(bool)
0x4b4: Call2 0x610

0x4b5: Pop(0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4b8: Pop(0)
0x4b9: Push(Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bb: @ lshPlaySpeech(Stack[-3])
0x4bc: Pop(0)
0x4bd: Stack[-4] = (bool) 1
0x4be: Return(); Pop(2)

0x4bf: Stack[-4] = (bool) 0
0x4c0: Return(); Pop(2)

0x4c1: PushEmpty(bool)
0x4c2: Call2 0x610

0x4c3: Pop(0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: @ lshStopSpeech()
0x4c6: Pop(0)
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty(object, object)
0x4c9: @ self(Stack[-1])
0x4ca: Pop(0)
0x4cb: Stack[-1] = Stack[-3]
0x4cc: Return(); Pop(2)

0x4cd: Stack[-1] = 0
0x4ce: PushEmpty(float, float)
0x4cf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4d0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4d1: Push((float)9.999999974752427e-07)
0x4d2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-4] = [0.0, 0.0, 0.0]
0x4d5: Return(); Pop(2)

0x4d6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4d7: Return(); Pop(2)

0x4d8: PushEmpty(int, int)
0x4d9: @ GetVariable(Stack[-3], Stack[-1])
0x4da: Pop(0)
0x4db: Stack[-1] = Stack[-4]
0x4dc: Return(); Pop(2)

0x4dd: PushEmpty(object, object)
0x4de: @ CreateIntVector(Stack[-1])
0x4df: Pop(0)
0x4e0: @@ add(Stack[-4]); Obj=1 // @poff=308
0x4e1: Pop(0)
0x4e2: @@ add(Stack[-3]); Obj=1 // @poff=308
0x4e3: Pop(0)
0x4e4: Push((int) 3)
0x4e5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4e6: Pop(1)
0x4e7: Return(); Pop(2)

0x4e8: Stack[-1] = 0
0x4e9: PushEmpty(int, int)
0x4ea: PushEmpty(object, string, int)
0x4eb: Stack[-7] = Stack[-3]
0x4ec: Stack[-2] = "money" // @poff=312
0x4ed: Stack[-6] = Stack[-1]
0x4ee: Call2 0x3a7

0x4ef: Pop(3)
0x4f0: Push((int) 0)
0x4f1: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f3: Push("Money") // @poff=324
0x4f4: @ GetInvItemByName(Stack[-2], Stack[-1])
0x4f5: Pop(1)
0x4f6: PushEmpty(int, int)
0x4f7: Stack[-3] = Stack[-2]
0x4f8: Stack[-5] = Stack[-1]
0x4f9: Call2 0x4dd

0x4fa: Pop(2)
0x4fb: Return(); Pop(2)

0x4fc: PushEmpty(int, int, bool, int, int, bool)
0x4fd: @@ GetItemID(Stack[-3]); Obj=8 // @poff=336
0x4fe: Pop(0)
0x4ff: Push("Category") // @poff=346
0x500: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x501: Pop(1)
0x502: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=364
0x503: Pop(0)
0x504: Pop(0); Push((bool) Stack[-1] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x506: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=372
0x507: Pop(0)
0x508: GOTO 0x50e

0x509: PushEmpty(int, int)
0x50a: Stack[-5] = Stack[-2]
0x50b: Stack[-9] = Stack[-1]
0x50c: Call2 0x4dd

0x50d: Pop(2)
0x50e: Return(); Pop(6)

0x50f: PushEmpty(object, object)
0x510: @ CreateInvItem(Stack[-1])
0x511: Pop(0)
0x512: @@ SetItemName(Stack[-4]); Obj=1 // @poff=382
0x513: Pop(0)
0x514: PushEmpty(object, object, int)
0x515: Stack[-8] = Stack[-3]
0x516: Stack[-4] = Stack[-2]
0x517: Stack[-6] = Stack[-1]
0x518: Call2 0x4fc

0x519: Pop(3)
0x51a: Return(); Pop(2)

0x51b: Stack[-1] = 0
0x51c: PushEmpty(object, object)
0x51d: @ FindActor(Stack[-1], Stack[-4])
0x51e: Pop(0)
0x51f: Pop(0); PushNull((bool) Stack[-1] == 0)
0x520: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x521: Stack[-5] = (bool) 0
0x522: Return(); Pop(2)

0x523: @ Trigger(Stack[-1], Stack[-3])
0x524: Pop(0)
0x525: Stack[-5] = (bool) 1
0x526: Return(); Pop(2)

0x527: Stack[-1] = 0
0x528: PushEmpty(float, float)
0x529: @ GetGameTime(Stack[-1])
0x52a: Pop(0)
0x52b: Push((int) 1)
0x52c: PushEmpty(int)
0x52d: Push((int) 24)
0x52e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x52f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x530: Return(); Pop(2)

0x531: PushEmpty(string, string)
0x532: Stack[-1] = "idle" // @poff=146
0x533: Push(Stack[-3])
0x534: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x535: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x536: Stack[-1] = Stack[-4]
0x537: Return(); Pop(2)

0x538: PushEmpty(int, bool, int, bool)
0x539: Stack[-2] = (int) 0
0x53a: Push("all") // @poff=138
0x53b: PushEmpty(string, int)
0x53c: Stack[-5] = Stack[-1]
0x53d: Call2 0x531

0x53e: Pop(1)
0x53f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(2)
0x541: Pop(0); Push((bool) Stack[-1] == 0)
0x542: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x543: GOTO 0x547

0x544: Push((int) 1)
0x545: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x546: GOTO 0x53a

0x547: Stack[-2] = Stack[-5]
0x548: Return(); Pop(4)

0x549: PushEmpty()
0x54a: Push("k3q04") // @poff=394
0x54b: Push((int) 2)
0x54c: @ SetVariable(Stack[-2], Stack[-1])
0x54d: Pop(2)
0x54e: PushEmpty()
0x54f: Call2 0x5c1

0x550: Pop(0)
0x551: PushEmpty(bool, string, string)
0x552: Stack[-2] = "quest_k3_04" // @poff=406
0x553: Stack[-1] = "place_burah_lopuh" // @poff=430
0x554: Call2 0x51c

0x555: Pop(3)
0x556: Return(); Pop(0)

0x557: PushEmpty()
0x558: PushEmpty()
0x559: Call2 0x5b4

0x55a: Pop(0)
0x55b: PushEmpty(bool, string, string)
0x55c: Stack[-2] = "quest_k3_04" // @poff=406
0x55d: Stack[-1] = "completed" // @poff=466
0x55e: Call2 0x51c

0x55f: Pop(3)
0x560: Return(); Pop(0)

0x561: PushEmpty(int, int)
0x562: PushEmpty()
0x563: Call2 0x5a7

0x564: Pop(0)
0x565: PushEmpty(bool, string, string)
0x566: Stack[-2] = "quest_k3_04" // @poff=406
0x567: Stack[-1] = "completed" // @poff=466
0x568: Call2 0x51c

0x569: Pop(3)
0x56a: Push("k3q04Promise") // @poff=486
0x56b: @ GetVariable(Stack[-1], Stack[-2])
0x56c: Pop(1)
0x56d: Push(Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x56f: Push("k3q04SendBurahMail") // @poff=512
0x570: Push((int) 1)
0x571: @ SetVariable(Stack[-2], Stack[-1])
0x572: Pop(2)
0x573: Return(); Pop(2)

0x574: PushEmpty()
0x575: Push("money2000 is given") // @poff=550
0x576: @ Trace(Stack[-1])
0x577: Pop(1)
0x578: PushEmpty(object, int)
0x579: Stack[-4] = Stack[-2]
0x57a: Stack[-1] = (int) 2000
0x57b: Call2 0x4e9

0x57c: Pop(2)
0x57d: Return(); Pop(0)

0x57e: PushEmpty()
0x57f: Push("playsound") // @poff=588
0x580: Push("givemoney") // @poff=608
0x581: @ TriggerWorld(Stack[-2], Stack[-1])
0x582: Pop(2)
0x583: Return(); Pop(0)

0x584: PushEmpty()
0x585: Push("neomicin is given") // @poff=628
0x586: @ Trace(Stack[-1])
0x587: Pop(1)
0x588: PushEmpty(object, string, int)
0x589: Stack[-5] = Stack[-3]
0x58a: Stack[-2] = "neomicin" // @poff=664
0x58b: Stack[-1] = (int) 1
0x58c: Call2 0x50f

0x58d: Pop(3)
0x58e: Return(); Pop(0)

0x58f: PushEmpty()
0x590: PushEmpty(int, string)
0x591: Stack[-1] = "k3q04" // @poff=394
0x592: Call2 0x4d8

0x593: Pop(1)
0x594: Push((int) 1)
0x595: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-2] = (bool) 1
0x598: Return(); Pop(0)

0x599: Stack[-2] = (bool) 0
0x59a: Return(); Pop(0)

0x59b: PushEmpty()
0x59c: PushEmpty(int, string)
0x59d: Stack[-1] = "k3q04" // @poff=394
0x59e: Call2 0x4d8

0x59f: Pop(1)
0x5a0: Push((int) 3)
0x5a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-2] = (bool) 1
0x5a4: Return(); Pop(0)

0x5a5: Stack[-2] = (bool) 0
0x5a6: Return(); Pop(0)

0x5a7: PushEmpty(object, object)
0x5a8: Push((int) 359)
0x5a9: Push((int) 2)
0x5aa: Push((int) 525659)
0x5ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: PushEmpty(bool, object, int)
0x5ae: Stack[-4] = Stack[-2]
0x5af: Stack[-1] = (int) 354
0x5b0: Call2 0x5db

0x5b1: Pop(3)
0x5b2: Return(); Pop(2)

0x5b3: Stack[-1] = 0
0x5b4: PushEmpty(object, object)
0x5b5: Push((int) 358)
0x5b6: Push((int) 2)
0x5b7: Push((int) 525658)
0x5b8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: PushEmpty(bool, object, int)
0x5bb: Stack[-4] = Stack[-2]
0x5bc: Stack[-1] = (int) 354
0x5bd: Call2 0x5db

0x5be: Pop(3)
0x5bf: Return(); Pop(2)

0x5c0: Stack[-1] = 0
0x5c1: PushEmpty(object, object)
0x5c2: Push((int) 356)
0x5c3: Push((int) 2)
0x5c4: Push((int) 525656)
0x5c5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: PushEmpty(bool, object, int)
0x5c8: Stack[-4] = Stack[-2]
0x5c9: Stack[-1] = (int) 354
0x5ca: Call2 0x5db

0x5cb: Pop(3)
0x5cc: Return(); Pop(2)

0x5cd: Stack[-1] = 0
0x5ce: PushEmpty(object, object)
0x5cf: @ GetDiaryRoot(Stack[-1])
0x5d0: Pop(0)
0x5d1: Pop(0); Push((bool) Stack[-1] == 0)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d3: Push("Can't retrieve diary root") // @poff=682
0x5d4: @ Trace(Stack[-1])
0x5d5: Pop(1)
0x5d6: Stack[-3] = (bool) 0
0x5d7: Return(); Pop(2)

0x5d8: Stack[-1] = Stack[-3]
0x5d9: Return(); Pop(2)

0x5da: Stack[-1] = 0
0x5db: PushEmpty(object, object, int, object, object, int)
0x5dc: PushEmpty(object)
0x5dd: Call2 0x5ce

0x5de: Stack[-1] = Stack[-4]
0x5df: Pop(1)
0x5e0: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=734
0x5e1: Pop(0)
0x5e2: Pop(0); Push((bool) Stack[-2] == 0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e4: Push("Can't find diary parent with id: ") // @poff=739
0x5e5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5e6: @ Trace(Stack[-1])
0x5e7: Pop(1)
0x5e8: Stack[-9] = (bool) 0
0x5e9: Return(); Pop(6)

0x5ea: @@ AddChild(Stack[-8]); Obj=2 // @poff=807
0x5eb: Pop(0)
0x5ec: Push((int) 7)
0x5ed: @ SendWorldWndMessage(Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ GetCategory(Stack[-1]); Obj=8 // @poff=816
0x5f0: Pop(0)
0x5f1: @ SetDiarySection(Stack[-1])
0x5f2: Pop(0)
0x5f3: Stack[-9] = (bool) 0
0x5f4: Return(); Pop(6)

0x5f5: Stack[-2] = 0
0x5f6: Stack[-3] = 0
0x5f7: PushEmpty(int, int)
0x5f8: Push("branch") // @poff=828
0x5f9: @ GetVariable(Stack[-1], Stack[-2])
0x5fa: Pop(1)
0x5fb: Push((int) 0)
0x5fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fe: Stack[-3] = (int) 1
0x5ff: Return(); Pop(2)

0x600: GOTO 0x606

0x601: Push((int) 1)
0x602: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-3] = (int) 2
0x605: Return(); Pop(2)

0x606: Stack[-3] = (int) 3
0x607: Return(); Pop(2)

0x608: Stack[-1] = (int) 515573
0x609: Return(); Pop(0)

0x60a: Stack[-1] = (int) 504032
0x60b: Return(); Pop(0)

0x60c: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=842
0x60d: Return(); Pop(0)

0x60e: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=882
0x60f: Return(); Pop(0)

0x610: Stack[-1] = (bool) 1
0x611: Return(); Pop(0)

