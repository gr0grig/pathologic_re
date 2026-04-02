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
	W:playsound
	W:giveitem
	W:oob2MariaKabak1
	W:b2q03_1
	W:quest_b2_03
	W:fail
	W:recipe5 is given
	W:recipe5
	W:money 5000 is given
	W:b2q03
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Maria.png
	W:ui/NPC_Maria_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f7065727479006d000000616464006d006f006e006500790000004d006f006e006500790000004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006f006f00620032004d0061007200690061004b006100620061006b0031000000620032007100300033005f0031000000710075006500730074005f00620032005f003000330000006600610069006c0000007200650063006900700065003500200069007300200067006900760065006e000000720065006300690070006500350000006d006f006e006500790020003500300030003000200069007300200067006900760065006e000000620032007100300033000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f004d0061007200690061002e0070006e0067000000750069002f004e00500043005f004d0061007200690061005f0062002e0070006e0067000000
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
	TriggerWorld (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x25a
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x103 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x25e Vars = (string)
		EVENT_6 Op = 0x272 Vars = ()
		EVENT_5 Op = 0x27f Vars = ()
		EVENT_7 Op = 0x2ce Vars = (int)
		EVENT_45 Op = 0x310 Vars = (bool)
		EVENT_0 Op = 0x31c Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3a7

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
0x11: Call2 0x4ae

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x401

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3ac

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x5fd

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x5fb

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x5ff

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x601

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x5ea

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
0x55: Call2 0x3f0

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
0x63: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x576

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x56a

0x6e: Pop(1)
0x6f: Pop(1); Push((bool) Stack[-1] == 0)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x73: PushEmpty(object, object)
0x74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x535

0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xed

0x7b: Pop(1)
0x7c: Push((int) 531063)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 531064)
0x82: Push((int) 32569)
0x83: Push((int) 32389)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: Push((int) 531269)
0x87: Push((int) 32569)
0x88: Push((int) 32581)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: GOTO 0xcf

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0x56a

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x91: PushEmpty(string)
0x92: Stack[-1] = "Neutral" // @poff=89
0x93: Call2 0xed

0x94: Pop(1)
0x95: Push((int) 531077)
0x96: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x97: Pop(1)
0x98: @@@ ClearReplies(); Obj=0 // @poff=116
0x99: Pop(0)
0x9a: Push((int) 531078)
0x9b: Push((int) -1)
0x9c: Push((int) 32400)
0x9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9e: Pop(3)
0x9f: Push((int) 531255)
0xa0: Push((int) -1)
0xa1: Push((int) 32571)
0xa2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa3: Pop(3)
0xa4: GOTO 0xcf

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral" // @poff=89
0xa7: Call2 0xed

0xa8: Pop(1)
0xa9: Push((int) 531066)
0xaa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xab: Pop(1)
0xac: @@@ ClearReplies(); Obj=0 // @poff=116
0xad: Pop(0)
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x582

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: Push((int) 531067)
0xb4: Push((int) 32395)
0xb5: Push((int) 32392)
0xb6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb7: Pop(3)
0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba: Call2 0x58e

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: Push((int) 531068)
0xbe: Push((int) 32397)
0xbf: Push((int) 32393)
0xc0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc1: Pop(3)
0xc2: Push((int) 531069)
0xc3: Push((int) -1)
0xc4: Push((int) 32394)
0xc5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc6: Pop(3)
0xc7: Push((int) 531256)
0xc8: Push((int) -1)
0xc9: Push((int) 32572)
0xca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcb: Pop(3)
0xcc: GOTO 0xcf

0xcd: Return(); Pop(0)

0xce: GOTO 0x62

0xcf: PushEmpty(bool)
0xd0: Call2 0x603

0xd1: Pop(0)
0xd2: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd3: @ lshWaitForAnimEnd()
0xd4: Pop(0)
0xd5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: GOTO 0xdd

0xd8: PushEmpty(string)
0xd9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xda: Call2 0x48b

0xdb: Pop(1)
0xdc: GOTO 0xd3

0xdd: GOTO 0xec

0xde: Push("all") // @poff=138
0xdf: Push("idle") // @poff=146
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: @ WaitForAnimEnd()
0xe3: Pop(0)
0xe4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: GOTO 0xec

0xe7: Push("all") // @poff=138
0xe8: Push("idle") // @poff=146
0xe9: @ PlayAnimation(Stack[-2], Stack[-1])
0xea: Pop(2)
0xeb: GOTO 0xe2

0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: PushEmpty(bool)
0xef: Call2 0x603

0xf0: Pop(0)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Return(); Pop(0)

0xf4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Return(); Pop(0)

0xf7: PushEmpty(string, bool)
0xf8: Stack[-3] = Stack[-2]
0xf9: Push("") // @poff=102
0xfa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfc: Stack[-1] = (bool) 0
0xfd: GOTO 0xff

0xfe: Stack[-1] = (bool) 1
0xff: Call2 0x492

0x100: Pop(2)
0x101: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x102: Return(); Pop(0)

0x103: PushEmpty()
0x104: Push((int) 1)
0x105: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x106: PushEmpty()
0x107: Call2 0x4a7

0x108: Pop(0)
0x109: Push((int) 32390)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x53b

0x110: Pop(2)
0x111: Push((int) 32396)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x53b

0x118: Pop(2)
0x119: Push((int) 32574)
0x11a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x53b

0x120: Pop(2)
0x121: Push((int) 32398)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x547

0x128: Pop(2)
0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x560

0x12d: Pop(2)
0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x555

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x52f

0x137: Pop(2)
0x138: Push((int) 32573)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x547

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x560

0x144: Pop(2)
0x145: PushEmpty(object, object)
0x146: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x147: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148: Call2 0x555

0x149: Pop(2)
0x14a: PushEmpty(object, object)
0x14b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14d: Call2 0x52f

0x14e: Pop(2)
0x14f: Push((int) 32388)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 0
0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call2 0x576

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x56a

0x15c: Pop(1)
0x15d: Pop(1); Push((bool) Stack[-1] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164: Call2 0x535

0x165: Pop(2)
0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral" // @poff=89
0x168: Call2 0xed

0x169: Pop(1)
0x16a: Push((int) 531063)
0x16b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16c: Pop(1)
0x16d: @@@ ClearReplies(); Obj=0 // @poff=116
0x16e: Pop(0)
0x16f: Push((int) 531064)
0x170: Push((int) 32569)
0x171: Push((int) 32389)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Push((int) 531269)
0x175: Push((int) 32569)
0x176: Push((int) 32581)
0x177: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x56a

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Neutral" // @poff=89
0x181: Call2 0xed

0x182: Pop(1)
0x183: Push((int) 531077)
0x184: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x185: Pop(1)
0x186: @@@ ClearReplies(); Obj=0 // @poff=116
0x187: Pop(0)
0x188: Push((int) 531078)
0x189: Push((int) -1)
0x18a: Push((int) 32400)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Push((int) 531255)
0x18e: Push((int) -1)
0x18f: Push((int) 32571)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Neutral" // @poff=89
0x195: Call2 0xed

0x196: Pop(1)
0x197: Push((int) 531066)
0x198: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x199: Pop(1)
0x19a: @@@ ClearReplies(); Obj=0 // @poff=116
0x19b: Pop(0)
0x19c: PushEmpty(bool, object)
0x19d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19e: Call2 0x582

0x19f: Pop(1)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: Push((int) 531067)
0x1a2: Push((int) 32395)
0x1a3: Push((int) 32392)
0x1a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a5: Pop(3)
0x1a6: PushEmpty(bool, object)
0x1a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Call2 0x58e

0x1a9: Pop(1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: Push((int) 531068)
0x1ac: Push((int) 32397)
0x1ad: Push((int) 32393)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Push((int) 531069)
0x1b1: Push((int) -1)
0x1b2: Push((int) 32394)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Push((int) 531256)
0x1b6: Push((int) -1)
0x1b7: Push((int) 32572)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 32397)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral" // @poff=89
0x1c0: Call2 0xed

0x1c1: Pop(1)
0x1c2: Push((int) 531072)
0x1c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c4: Pop(1)
0x1c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c6: Pop(0)
0x1c7: Push((int) 531073)
0x1c8: Push((int) -1)
0x1c9: Push((int) 32398)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Push((int) 531257)
0x1cd: Push((int) -1)
0x1ce: Push((int) 32573)
0x1cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 32395)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Neutral" // @poff=89
0x1d7: Call2 0xed

0x1d8: Pop(1)
0x1d9: Push((int) 531070)
0x1da: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1db: Pop(1)
0x1dc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1dd: Pop(0)
0x1de: Push((int) 531071)
0x1df: Push((int) -1)
0x1e0: Push((int) 32396)
0x1e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e2: Pop(3)
0x1e3: Push((int) 531258)
0x1e4: Push((int) -1)
0x1e5: Push((int) 32574)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 32569)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral" // @poff=89
0x1ee: Call2 0xed

0x1ef: Pop(1)
0x1f0: Push((int) 531253)
0x1f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f2: Pop(1)
0x1f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f4: Pop(0)
0x1f5: Push((int) 531254)
0x1f6: Push((int) 32576)
0x1f7: Push((int) 32570)
0x1f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f9: Pop(3)
0x1fa: Push((int) 531270)
0x1fb: Push((int) -1)
0x1fc: Push((int) 32583)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 32576)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral" // @poff=89
0x205: Call2 0xed

0x206: Pop(1)
0x207: Push((int) 531264)
0x208: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x209: Pop(1)
0x20a: @@@ ClearReplies(); Obj=0 // @poff=116
0x20b: Pop(0)
0x20c: Push((int) 531265)
0x20d: Push((int) 32578)
0x20e: Push((int) 32577)
0x20f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x210: Pop(3)
0x211: Push((int) 531271)
0x212: Push((int) -1)
0x213: Push((int) 32584)
0x214: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 32578)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Neutral" // @poff=89
0x21c: Call2 0xed

0x21d: Pop(1)
0x21e: Push((int) 531266)
0x21f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x220: Pop(1)
0x221: @@@ ClearReplies(); Obj=0 // @poff=116
0x222: Pop(0)
0x223: Push((int) 531267)
0x224: Push((int) 32580)
0x225: Push((int) 32579)
0x226: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x227: Pop(3)
0x228: Push((int) 531272)
0x229: Push((int) 32580)
0x22a: Push((int) 32585)
0x22b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 32580)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral" // @poff=89
0x233: Call2 0xed

0x234: Pop(1)
0x235: Push((int) 531268)
0x236: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x237: Pop(1)
0x238: @@@ ClearReplies(); Obj=0 // @poff=116
0x239: Pop(0)
0x23a: Push((int) 531065)
0x23b: Push((int) -1)
0x23c: Push((int) 32390)
0x23d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23e: Pop(3)
0x23f: Push((int) 531273)
0x240: Push((int) -1)
0x241: Push((int) 32587)
0x242: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x243: Pop(3)
0x244: Return(); Pop(0)

0x245: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x246: PushEmpty(bool)
0x247: Call2 0x603

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24a: @ lshStopAnimation()
0x24b: Pop(0)
0x24c: GOTO 0x24f

0x24d: @ StopAnimation()
0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: GOTO 0x104

0x251: Return(); Pop(0)

0x252: PushEmpty()
0x253: PushEmpty(int, object)
0x254: Stack[-3] = Stack[-1]
0x255: Push(-2, 1); TaskCall(1)
0x256: Call2 0xd

0x257: Pop(-2, 1); TaskReturn
0x258: Pop(2)
0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: Call2 0x283

0x25c: Pop(0)
0x25d: Return(); Pop(0)

0x25e: PushEmpty(bool, bool)
0x25f: Push("cleanup") // @poff=156
0x260: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x262: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x263: @ IsLoaded(Stack[-1])
0x264: Pop(0)
0x265: Pop(0); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(object)
0x268: Call2 0x4ae

0x269: Pop(0)
0x26a: @ RemoveActor(Stack[-1])
0x26b: Pop(1)
0x26c: GOTO 0x271

0x26d: Push("restore") // @poff=172
0x26e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x271: Return(); Pop(2)

0x272: Push( Stack[1 + Tasks[-1].StackPointer] )
0x273: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x274: PushEmpty(object)
0x275: Call2 0x4ae

0x276: Pop(0)
0x277: @ RemoveActor(Stack[-1])
0x278: Pop(1)
0x279: @ Hold()
0x27a: Pop(0)
0x27b: PushEmpty()
0x27c: Call2 0x2f4

0x27d: Pop(0)
0x27e: Return(); Pop(0)

0x27f: PushEmpty()
0x280: Call2 0x303

0x281: Pop(0)
0x282: Return(); Pop(0)

0x283: PushEmpty(bool)
0x284: Call2 0x3a7

0x285: Pop(0)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: PushEmpty()
0x289: Push(-0, 0); TaskCall(0)
0x28a: Call2 0x0

0x28b: Pop(-0, 0); TaskReturn
0x28c: Pop(0)
0x28d: PushEmpty()
0x28e: Call2 0x27f

0x28f: Pop(0)
0x290: @ GetDirection(Stack[-0]T)
0x291: Pop(0)
0x292: PushEmpty()
0x293: Call2 0x339

0x294: Pop(0)
0x295: GOTO 0x292

0x296: Return(); Pop(0)

0x297: PushEmpty(object, object)
0x298: Push("player") // @poff=188
0x299: @ FindActor(Stack[-2], Stack[-1])
0x29a: Pop(1)
0x29b: Pop(0); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-3] = (bool) 0
0x29e: Return(); Pop(2)

0x29f: PushEmpty(bool, object)
0x2a0: Stack[-3] = Stack[-1]
0x2a1: Call2 0x39e

0x2a2: Stack[-2] = Stack[-5]
0x2a3: Pop(2)
0x2a4: Return(); Pop(2)

0x2a5: Stack[-1] = 0
0x2a6: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2a7: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2a8: @ RotateAsync(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(object, bool, object, bool)
0x2ac: Push("player") // @poff=188
0x2ad: @ FindActor(Stack[-3], Stack[-1])
0x2ae: Pop(1)
0x2af: Pop(0); Push((bool) Stack[-2] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-5] = (bool) 0
0x2b2: Return(); Pop(4)

0x2b3: PushEmpty(float, object)
0x2b4: Stack[-4] = Stack[-1]
0x2b5: Call2 0x385

0x2b6: Pop(1)
0x2b7: Push((float)90000.0)
0x2b8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: Stack[-5] = (bool) 0
0x2bb: Return(); Pop(4)

0x2bc: @ CanSee(Stack[-1], Stack[-2])
0x2bd: Pop(0)
0x2be: Stack[-1] = Stack[-5]
0x2bf: Return(); Pop(4)

0x2c0: Stack[-2] = 0
0x2c1: PushEmpty(float, float)
0x2c2: Push((int) 8)
0x2c3: Push((int) 16)
0x2c4: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: Push((int) 10)
0x2c7: @ SetTimer(Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: Return(); Pop(2)

0x2ca: Push((int) 10)
0x2cb: @ KillTimer(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty()
0x2cf: Push((int) 10)
0x2d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2d2: PushEmpty()
0x2d3: Call2 0x2ca

0x2d4: Pop(0)
0x2d5: PushEmpty(bool)
0x2d6: Stack[-1] = (bool) 0
0x2d7: PushEmpty(bool)
0x2d8: Call2 0x3a7

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: PushEmpty(bool)
0x2dc: Call2 0x2ab

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-1] = (bool) 1
0x2e0: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e1: PushEmpty(bool)
0x2e2: Call2 0x297

0x2e3: Pop(0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: PushEmpty(object)
0x2e7: Call2 0x4ae

0x2e8: Stack[-1] = Stack[-2]
0x2e9: Pop(1)
0x2ea: Call2 0x43b

0x2eb: Pop(2)
0x2ec: GOTO 0x2f3

0x2ed: PushEmpty()
0x2ee: Call2 0x2a6

0x2ef: Pop(0)
0x2f0: PushEmpty()
0x2f1: Call2 0x2c1

0x2f2: Pop(0)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: Call2 0x380

0x2f6: Pop(0)
0x2f7: PushEmpty()
0x2f8: Call2 0x2ca

0x2f9: Pop(0)
0x2fa: @ lshStopSpeech()
0x2fb: Pop(0)
0x2fc: @ lshStopAnimation()
0x2fd: Pop(0)
0x2fe: @ StopAsync()
0x2ff: Pop(0)
0x300: @ Hold()
0x301: Pop(0)
0x302: Return(); Pop(0)

0x303: @ StopGroup0()
0x304: Pop(0)
0x305: PushEmpty()
0x306: Call2 0x2ca

0x307: Pop(0)
0x308: PushEmpty(string)
0x309: Stack[-1] = "Neutral" // @poff=89
0x30a: Call2 0x48b

0x30b: Pop(1)
0x30c: PushEmpty()
0x30d: Call2 0x2c1

0x30e: Pop(0)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: Push(Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x313: PushEmpty()
0x314: Call2 0x2c1

0x315: Pop(0)
0x316: GOTO 0x31b

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral" // @poff=89
0x319: Call2 0x48b

0x31a: Pop(1)
0x31b: Return(); Pop(0)

0x31c: PushEmpty(bool, bool)
0x31d: @ IsOverrideActive(Stack[-1])
0x31e: Pop(0)
0x31f: Pop(0); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x321: EventDisable(0)
0x322: PushEmpty()
0x323: Call2 0x380

0x324: Pop(0)
0x325: PushEmpty(bool, object)
0x326: Stack[-5] = Stack[-1]
0x327: Call2 0x39e

0x328: Pop(2)
0x329: EventEnable(0)
0x32a: PushEmpty(object)
0x32b: Stack[-4] = Stack[-1]
0x32c: Call2 0x252

0x32d: Pop(1)
0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral" // @poff=89
0x330: Call2 0x48b

0x331: Pop(1)
0x332: PushEmpty()
0x333: Call2 0x2ca

0x334: Pop(0)
0x335: PushEmpty()
0x336: Call2 0x2c1

0x337: Pop(0)
0x338: Return(); Pop(2)

0x339: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x33a: @ WaitForAnimEnd()
0x33b: Pop(0)
0x33c: PushEmpty(bool)
0x33d: Call2 0x3a7

0x33e: Pop(0)
0x33f: Pop(1); Push((bool) Stack[-1] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Return(); Pop(12)

0x342: PushEmpty(int)
0x343: Call2 0x51e

0x344: Stack[-1] = Stack[-7]
0x345: Pop(1)
0x346: Stack[-5] = (int) 0
0x347: PushEmpty(bool)
0x348: Stack[-1] = (bool) 0
0x349: Push((int) 5)
0x34a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: PushEmpty(bool)
0x34d: Call2 0x3a7

0x34e: Pop(0)
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Stack[-1] = (bool) 1
0x351: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x352: Pop(0); Push((bool) Stack[-6] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x354: Push((int) 3)
0x355: @ Sleep(Stack[-1], Stack[-5])
0x356: Pop(1)
0x357: Pop(0); Push((bool) Stack[-4] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x37b

0x35a: GOTO 0x370

0x35b: @ irand(Stack[-3], Stack[-6])
0x35c: Pop(0)
0x35d: Push((int) 5)
0x35e: @ irand(Stack[-3], Stack[-1])
0x35f: Pop(1)
0x360: Push((int) 0)
0x361: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: Stack[-3] = (int) 0
0x364: Push("all") // @poff=138
0x365: PushEmpty(string, int)
0x366: Stack[-6] = Stack[-1]
0x367: Call2 0x517

0x368: Pop(1)
0x369: @ PlayAnimation(Stack[-2], Stack[-1])
0x36a: Pop(2)
0x36b: @ WaitForAnimEnd(Stack[-1])
0x36c: Pop(0)
0x36d: Pop(0); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x37b

0x370: PushEmpty(bool)
0x371: Call2 0x37e

0x372: Pop(0)
0x373: Pop(1); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x37b

0x376: @ ResetAAS()
0x377: Pop(0)
0x378: Push((int) 1)
0x379: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x37a: GOTO 0x347

0x37b: @ ResetAAS()
0x37c: Pop(0)
0x37d: Return(); Pop(12)

0x37e: Stack[-1] = (bool) 1
0x37f: Return(); Pop(0)

0x380: @ StopAnimation()
0x381: Pop(0)
0x382: @ StopGroup0()
0x383: Pop(0)
0x384: Return(); Pop(0)

0x385: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x386: @ GetPosition(Stack[-3])
0x387: Pop(0)
0x388: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x389: Pop(0)
0x38a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x38b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x38c: Return(); Pop(6)

0x38d: PushEmpty(int, int)
0x38e: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=214
0x38f: Pop(0)
0x390: Pop(0); Push(Stack[-1] + Stack[-3]);
0x391: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=226
0x392: Pop(1)
0x393: Return(); Pop(2)

0x394: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x395: @ GetPosition(Stack[-3])
0x396: Pop(0)
0x397: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x398: Push(CvectorIndex(Stack[-2], 0))
0x399: Push(CvectorIndex(Stack[-3], 2))
0x39a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x39b: Pop(2)
0x39c: Stack[-1] = Stack[-8]
0x39d: Return(); Pop(6)

0x39e: PushEmpty(cvector, cvector)
0x39f: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x3a0: Pop(0)
0x3a1: PushEmpty(bool, cvector)
0x3a2: Stack[-3] = Stack[-1]
0x3a3: Call2 0x394

0x3a4: Stack[-2] = Stack[-6]
0x3a5: Pop(2)
0x3a6: Return(); Pop(2)

0x3a7: PushEmpty(bool, bool)
0x3a8: @ IsLoaded(Stack[-1])
0x3a9: Pop(0)
0x3aa: Stack[-1] = Stack[-3]
0x3ab: Return(); Pop(2)

0x3ac: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3ad: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x3ae: Pop(0)
0x3af: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=238
0x3b0: Pop(0)
0x3b1: Push(CvectorIndex(Stack[-8], 1))
0x3b2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3b4: @ GetPosition(Stack[-7])
0x3b5: Pop(0)
0x3b6: @ GetEyesHeight(Stack[-9])
0x3b7: Pop(0)
0x3b8: Push(CvectorIndex(Stack[-7], 1))
0x3b9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ba: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3bb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3bc: Push(CvectorIndex(Stack[-6], 1))
0x3bd: Stack[-1] = (int) 0
0x3be: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3bf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3c0: Pop(1); Push(Sqrt(Stack[-1]))
0x3c1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3c2: Stack[-5] = -Stack[-6]; Pop(0);
0x3c3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3c4: PushEmpty(cvector, cvector)
0x3c5: Push([0.0, 1.0, 0.0])
0x3c6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3c7: Call2 0x4b4

0x3c8: Pop(1)
0x3c9: Push((int) 25)
0x3ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cc: Push([0.0, 10.0, 0.0])
0x3cd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3ce: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3cf: @ IsOverrideActive(Stack[-2])
0x3d0: Pop(0)
0x3d1: Push(Stack[-2])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-21] = (bool) 0
0x3d4: Return(); Pop(18)

0x3d5: @ StopWorld()
0x3d6: Pop(0)
0x3d7: @ CameraTransit(Stack[-3], Stack[-5])
0x3d8: Pop(0)
0x3d9: Push(CvectorIndex(Stack[-4], 0))
0x3da: Push(CvectorIndex(Stack[-5], 2))
0x3db: @ Rotate(Stack[-2], Stack[-1])
0x3dc: Pop(2)
0x3dd: PushEmpty(bool)
0x3de: Call2 0x603

0x3df: Pop(0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: GOTO 0x3ea

0x3e2: Push("head") // @poff=252
0x3e3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3e4: Pop(1)
0x3e5: Push(Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e7: Push("head") // @poff=252
0x3e8: @ LookAsyncCamera(Stack[-1])
0x3e9: Pop(1)
0x3ea: @ CameraWaitForPlayFinish()
0x3eb: Pop(0)
0x3ec: @ ResumeWorld()
0x3ed: Pop(0)
0x3ee: Stack[-21] = (bool) 1
0x3ef: Return(); Pop(18)

0x3f0: PushEmpty(bool, bool)
0x3f1: @ CameraSwitchToNormal()
0x3f2: Pop(0)
0x3f3: PushEmpty(bool)
0x3f4: Call2 0x603

0x3f5: Pop(0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f7: GOTO 0x400

0x3f8: Push("head") // @poff=252
0x3f9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3fa: Pop(1)
0x3fb: Push(Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fd: Push("head") // @poff=252
0x3fe: @ UnlookAsync(Stack[-1])
0x3ff: Pop(1)
0x400: Return(); Pop(2)

0x401: PushEmpty(int, int, int, int)
0x402: Push("voice_common") // @poff=262
0x403: @ GetVariable(Stack[-1], Stack[-3])
0x404: Pop(1)
0x405: Push(Stack[-2])
0x406: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x407: PushEmpty(bool, object)
0x408: Stack[-7] = Stack[-1]
0x409: Call2 0x43b

0x40a: Pop(1)
0x40b: Pop(1); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40d: PushEmpty(bool, object)
0x40e: Stack[-7] = Stack[-1]
0x40f: Call2 0x460

0x410: Pop(1)
0x411: Pop(1); Push((bool) Stack[-1] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x413: Stack[-6] = (bool) 0
0x414: Return(); Pop(4)

0x415: Push((int) 2)
0x416: @ irand(Stack[-2], Stack[-1])
0x417: Pop(1)
0x418: Push(Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41a: Push("voice_common") // @poff=262
0x41b: Push((int) 1)
0x41c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x41d: Push((int) 3)
0x41e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x41f: @ SetVariable(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: GOTO 0x426

0x422: Push("voice_common") // @poff=262
0x423: Push((int) 0)
0x424: @ SetVariable(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: GOTO 0x439

0x427: PushEmpty(bool, object)
0x428: Stack[-7] = Stack[-1]
0x429: Call2 0x460

0x42a: Pop(1)
0x42b: Pop(1); Push((bool) Stack[-1] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x42d: PushEmpty(bool, object)
0x42e: Stack[-7] = Stack[-1]
0x42f: Call2 0x43b

0x430: Pop(1)
0x431: Pop(1); Push((bool) Stack[-1] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: Stack[-6] = (bool) 0
0x434: Return(); Pop(4)

0x435: Push("voice_common") // @poff=262
0x436: Push((int) 1)
0x437: @ SetVariable(Stack[-2], Stack[-1])
0x438: Pop(2)
0x439: Stack[-6] = (bool) 1
0x43a: Return(); Pop(4)

0x43b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x43c: Stack[-5] = "c" // @poff=288
0x43d: Stack[-4] = (int) 0
0x43e: Push((int) 1)
0x43f: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x440: Push((int) 1)
0x441: Pop(1); Push(Stack[-5] + Stack[-1]);
0x442: Pop(1); Push(Stack[-6] + Stack[-1]);
0x443: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=292
0x444: Pop(1)
0x445: Pop(0); Push((bool) Stack[-3] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x447: GOTO 0x44b

0x448: Push((int) 1)
0x449: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x44a: GOTO 0x43e

0x44b: Pop(0); Push((bool) Stack[-4] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-12] = (bool) 0
0x44e: Return(); Pop(10)

0x44f: Stack[-2] = (int) 0
0x450: Push((int) 1)
0x451: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: @ irand(Stack[-2], Stack[-4])
0x454: Pop(0)
0x455: Push((int) 1)
0x456: Pop(1); Push(Stack[-3] + Stack[-1]);
0x457: Pop(1); Push(Stack[-6] + Stack[-1]);
0x458: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=214
0x459: Pop(1)
0x45a: PushEmpty(bool, string)
0x45b: Stack[-3] = Stack[-1]
0x45c: Call2 0x498

0x45d: Stack[-2] = Stack[-14]
0x45e: Pop(2)
0x45f: Return(); Pop(10)

0x460: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x461: Push("d") // @poff=258
0x462: PushEmpty(int)
0x463: Call2 0x50e

0x464: Pop(0)
0x465: Pop(2); Push(Stack[-2] + Stack[-1]);
0x466: Push("m") // @poff=304
0x467: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x468: Stack[-4] = (int) 0
0x469: Push((int) 1)
0x46a: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x46b: Push((int) 1)
0x46c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x46d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x46e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=292
0x46f: Pop(1)
0x470: Pop(0); Push((bool) Stack[-3] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x476

0x473: Push((int) 1)
0x474: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x475: GOTO 0x469

0x476: Pop(0); Push((bool) Stack[-4] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-12] = (bool) 0
0x479: Return(); Pop(10)

0x47a: Stack[-2] = (int) 0
0x47b: Push((int) 1)
0x47c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47e: @ irand(Stack[-2], Stack[-4])
0x47f: Pop(0)
0x480: Push((int) 1)
0x481: Pop(1); Push(Stack[-3] + Stack[-1]);
0x482: Pop(1); Push(Stack[-6] + Stack[-1]);
0x483: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=214
0x484: Pop(1)
0x485: PushEmpty(bool, string)
0x486: Stack[-3] = Stack[-1]
0x487: Call2 0x498

0x488: Stack[-2] = Stack[-14]
0x489: Pop(2)
0x48a: Return(); Pop(10)

0x48b: PushEmpty(float, float, float, float)
0x48c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x48d: Pop(0)
0x48e: Push((bool) 0)
0x48f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(1)
0x491: Return(); Pop(4)

0x492: PushEmpty(float, float, float, float)
0x493: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x494: Pop(0)
0x495: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x496: Pop(0)
0x497: Return(); Pop(4)

0x498: PushEmpty(bool, bool)
0x499: PushEmpty(bool)
0x49a: Call2 0x603

0x49b: Pop(0)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x49d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x49e: Pop(0)
0x49f: Push(Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a1: @ lshPlaySpeech(Stack[-3])
0x4a2: Pop(0)
0x4a3: Stack[-4] = (bool) 1
0x4a4: Return(); Pop(2)

0x4a5: Stack[-4] = (bool) 0
0x4a6: Return(); Pop(2)

0x4a7: PushEmpty(bool)
0x4a8: Call2 0x603

0x4a9: Pop(0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: @ lshStopSpeech()
0x4ac: Pop(0)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty(object, object)
0x4af: @ self(Stack[-1])
0x4b0: Pop(0)
0x4b1: Stack[-1] = Stack[-3]
0x4b2: Return(); Pop(2)

0x4b3: Stack[-1] = 0
0x4b4: PushEmpty(float, float)
0x4b5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4b6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4b7: Push((float)9.999999974752427e-07)
0x4b8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ba: Stack[-4] = [0.0, 0.0, 0.0]
0x4bb: Return(); Pop(2)

0x4bc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4bd: Return(); Pop(2)

0x4be: PushEmpty(int, int)
0x4bf: @ GetVariable(Stack[-3], Stack[-1])
0x4c0: Pop(0)
0x4c1: Stack[-1] = Stack[-4]
0x4c2: Return(); Pop(2)

0x4c3: PushEmpty(object, object)
0x4c4: @ CreateIntVector(Stack[-1])
0x4c5: Pop(0)
0x4c6: @@ add(Stack[-4]); Obj=1 // @poff=308
0x4c7: Pop(0)
0x4c8: @@ add(Stack[-3]); Obj=1 // @poff=308
0x4c9: Pop(0)
0x4ca: Push((int) 3)
0x4cb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4cc: Pop(1)
0x4cd: Return(); Pop(2)

0x4ce: Stack[-1] = 0
0x4cf: PushEmpty(int, int)
0x4d0: PushEmpty(object, string, int)
0x4d1: Stack[-7] = Stack[-3]
0x4d2: Stack[-2] = "money" // @poff=312
0x4d3: Stack[-6] = Stack[-1]
0x4d4: Call2 0x38d

0x4d5: Pop(3)
0x4d6: Push((int) 0)
0x4d7: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4d9: Push("Money") // @poff=324
0x4da: @ GetInvItemByName(Stack[-2], Stack[-1])
0x4db: Pop(1)
0x4dc: PushEmpty(int, int)
0x4dd: Stack[-3] = Stack[-2]
0x4de: Stack[-5] = Stack[-1]
0x4df: Call2 0x4c3

0x4e0: Pop(2)
0x4e1: Return(); Pop(2)

0x4e2: PushEmpty(int, int, bool, int, int, bool)
0x4e3: @@ GetItemID(Stack[-3]); Obj=8 // @poff=336
0x4e4: Pop(0)
0x4e5: Push("Category") // @poff=346
0x4e6: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=364
0x4e9: Pop(0)
0x4ea: Pop(0); Push((bool) Stack[-1] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ec: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=372
0x4ed: Pop(0)
0x4ee: GOTO 0x4f4

0x4ef: PushEmpty(int, int)
0x4f0: Stack[-5] = Stack[-2]
0x4f1: Stack[-9] = Stack[-1]
0x4f2: Call2 0x4c3

0x4f3: Pop(2)
0x4f4: Return(); Pop(6)

0x4f5: PushEmpty(object, object)
0x4f6: @ CreateInvItem(Stack[-1])
0x4f7: Pop(0)
0x4f8: @@ SetItemName(Stack[-4]); Obj=1 // @poff=382
0x4f9: Pop(0)
0x4fa: PushEmpty(object, object, int)
0x4fb: Stack[-8] = Stack[-3]
0x4fc: Stack[-4] = Stack[-2]
0x4fd: Stack[-6] = Stack[-1]
0x4fe: Call2 0x4e2

0x4ff: Pop(3)
0x500: Return(); Pop(2)

0x501: Stack[-1] = 0
0x502: PushEmpty(object, object)
0x503: @ FindActor(Stack[-1], Stack[-4])
0x504: Pop(0)
0x505: Pop(0); PushNull((bool) Stack[-1] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: Stack[-5] = (bool) 0
0x508: Return(); Pop(2)

0x509: @ Trigger(Stack[-1], Stack[-3])
0x50a: Pop(0)
0x50b: Stack[-5] = (bool) 1
0x50c: Return(); Pop(2)

0x50d: Stack[-1] = 0
0x50e: PushEmpty(float, float)
0x50f: @ GetGameTime(Stack[-1])
0x510: Pop(0)
0x511: Push((int) 1)
0x512: PushEmpty(int)
0x513: Push((int) 24)
0x514: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x515: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x516: Return(); Pop(2)

0x517: PushEmpty(string, string)
0x518: Stack[-1] = "idle" // @poff=146
0x519: Push(Stack[-3])
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51c: Stack[-1] = Stack[-4]
0x51d: Return(); Pop(2)

0x51e: PushEmpty(int, bool, int, bool)
0x51f: Stack[-2] = (int) 0
0x520: Push("all") // @poff=138
0x521: PushEmpty(string, int)
0x522: Stack[-5] = Stack[-1]
0x523: Call2 0x517

0x524: Pop(1)
0x525: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: Pop(0); Push((bool) Stack[-1] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x529: GOTO 0x52d

0x52a: Push((int) 1)
0x52b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52c: GOTO 0x520

0x52d: Stack[-2] = Stack[-5]
0x52e: Return(); Pop(4)

0x52f: PushEmpty()
0x530: Push("playsound") // @poff=394
0x531: Push("giveitem") // @poff=414
0x532: @ TriggerWorld(Stack[-2], Stack[-1])
0x533: Pop(2)
0x534: Return(); Pop(0)

0x535: PushEmpty()
0x536: Push("oob2MariaKabak1") // @poff=432
0x537: Push((int) 1)
0x538: @ SetVariable(Stack[-2], Stack[-1])
0x539: Pop(2)
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: Push("b2q03_1") // @poff=464
0x53d: Push((int) 1)
0x53e: @ SetVariable(Stack[-2], Stack[-1])
0x53f: Pop(2)
0x540: PushEmpty()
0x541: Call2 0x59a

0x542: Pop(0)
0x543: PushEmpty()
0x544: Call2 0x5b4

0x545: Pop(0)
0x546: Return(); Pop(0)

0x547: PushEmpty()
0x548: Push("b2q03_1") // @poff=464
0x549: Push((int) 1000)
0x54a: @ SetVariable(Stack[-2], Stack[-1])
0x54b: Pop(2)
0x54c: PushEmpty()
0x54d: Call2 0x5a7

0x54e: Pop(0)
0x54f: PushEmpty(bool, string, string)
0x550: Stack[-2] = "quest_b2_03" // @poff=480
0x551: Stack[-1] = "fail" // @poff=504
0x552: Call2 0x502

0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: PushEmpty()
0x556: Push("recipe5 is given") // @poff=514
0x557: @ Trace(Stack[-1])
0x558: Pop(1)
0x559: PushEmpty(object, string, int)
0x55a: Stack[-5] = Stack[-3]
0x55b: Stack[-2] = "recipe5" // @poff=548
0x55c: Stack[-1] = (int) 1
0x55d: Call2 0x4f5

0x55e: Pop(3)
0x55f: Return(); Pop(0)

0x560: PushEmpty()
0x561: Push("money 5000 is given") // @poff=564
0x562: @ Trace(Stack[-1])
0x563: Pop(1)
0x564: PushEmpty(object, int)
0x565: Stack[-4] = Stack[-2]
0x566: Stack[-1] = (int) 5000
0x567: Call2 0x4cf

0x568: Pop(2)
0x569: Return(); Pop(0)

0x56a: PushEmpty()
0x56b: PushEmpty(int, string)
0x56c: Stack[-1] = "b2q03" // @poff=604
0x56d: Call2 0x4be

0x56e: Pop(1)
0x56f: Push((int) 1000)
0x570: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: Stack[-2] = (bool) 1
0x573: Return(); Pop(0)

0x574: Stack[-2] = (bool) 0
0x575: Return(); Pop(0)

0x576: PushEmpty()
0x577: PushEmpty(int, string)
0x578: Stack[-1] = "oob2MariaKabak1" // @poff=432
0x579: Call2 0x4be

0x57a: Pop(1)
0x57b: Push((int) 0)
0x57c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-2] = (bool) 1
0x57f: Return(); Pop(0)

0x580: Stack[-2] = (bool) 0
0x581: Return(); Pop(0)

0x582: PushEmpty()
0x583: PushEmpty(int, string)
0x584: Stack[-1] = "b2q03_1" // @poff=464
0x585: Call2 0x4be

0x586: Pop(1)
0x587: Push((int) 0)
0x588: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-2] = (bool) 1
0x58b: Return(); Pop(0)

0x58c: Stack[-2] = (bool) 0
0x58d: Return(); Pop(0)

0x58e: PushEmpty()
0x58f: PushEmpty(int, string)
0x590: Stack[-1] = "b2q03_1" // @poff=464
0x591: Call2 0x4be

0x592: Pop(1)
0x593: Push((int) 2)
0x594: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x595: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x596: Stack[-2] = (bool) 1
0x597: Return(); Pop(0)

0x598: Stack[-2] = (bool) 0
0x599: Return(); Pop(0)

0x59a: PushEmpty(object, object)
0x59b: Push((int) 588)
0x59c: Push((int) 2)
0x59d: Push((int) 531074)
0x59e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: PushEmpty(bool, object, int)
0x5a1: Stack[-4] = Stack[-2]
0x5a2: Stack[-1] = (int) -1
0x5a3: Call2 0x5ce

0x5a4: Pop(3)
0x5a5: Return(); Pop(2)

0x5a6: Stack[-1] = 0
0x5a7: PushEmpty(object, object)
0x5a8: Push((int) 590)
0x5a9: Push((int) 2)
0x5aa: Push((int) 531076)
0x5ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: PushEmpty(bool, object, int)
0x5ae: Stack[-4] = Stack[-2]
0x5af: Stack[-1] = (int) 588
0x5b0: Call2 0x5ce

0x5b1: Pop(3)
0x5b2: Return(); Pop(2)

0x5b3: Stack[-1] = 0
0x5b4: PushEmpty(object, object)
0x5b5: Push((int) 589)
0x5b6: Push((int) 2)
0x5b7: Push((int) 531075)
0x5b8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: PushEmpty(bool, object, int)
0x5bb: Stack[-4] = Stack[-2]
0x5bc: Stack[-1] = (int) 588
0x5bd: Call2 0x5ce

0x5be: Pop(3)
0x5bf: Return(); Pop(2)

0x5c0: Stack[-1] = 0
0x5c1: PushEmpty(object, object)
0x5c2: @ GetDiaryRoot(Stack[-1])
0x5c3: Pop(0)
0x5c4: Pop(0); Push((bool) Stack[-1] == 0)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c6: Push("Can't retrieve diary root") // @poff=616
0x5c7: @ Trace(Stack[-1])
0x5c8: Pop(1)
0x5c9: Stack[-3] = (bool) 0
0x5ca: Return(); Pop(2)

0x5cb: Stack[-1] = Stack[-3]
0x5cc: Return(); Pop(2)

0x5cd: Stack[-1] = 0
0x5ce: PushEmpty(object, object, int, object, object, int)
0x5cf: PushEmpty(object)
0x5d0: Call2 0x5c1

0x5d1: Stack[-1] = Stack[-4]
0x5d2: Pop(1)
0x5d3: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=668
0x5d4: Pop(0)
0x5d5: Pop(0); Push((bool) Stack[-2] == 0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d7: Push("Can't find diary parent with id: ") // @poff=673
0x5d8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5d9: @ Trace(Stack[-1])
0x5da: Pop(1)
0x5db: Stack[-9] = (bool) 0
0x5dc: Return(); Pop(6)

0x5dd: @@ AddChild(Stack[-8]); Obj=2 // @poff=741
0x5de: Pop(0)
0x5df: Push((int) 7)
0x5e0: @ SendWorldWndMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ GetCategory(Stack[-1]); Obj=8 // @poff=750
0x5e3: Pop(0)
0x5e4: @ SetDiarySection(Stack[-1])
0x5e5: Pop(0)
0x5e6: Stack[-9] = (bool) 0
0x5e7: Return(); Pop(6)

0x5e8: Stack[-2] = 0
0x5e9: Stack[-3] = 0
0x5ea: PushEmpty(int, int)
0x5eb: Push("branch") // @poff=762
0x5ec: @ GetVariable(Stack[-1], Stack[-2])
0x5ed: Pop(1)
0x5ee: Push((int) 0)
0x5ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f1: Stack[-3] = (int) 1
0x5f2: Return(); Pop(2)

0x5f3: GOTO 0x5f9

0x5f4: Push((int) 1)
0x5f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: Stack[-3] = (int) 2
0x5f8: Return(); Pop(2)

0x5f9: Stack[-3] = (int) 3
0x5fa: Return(); Pop(2)

0x5fb: Stack[-1] = (int) 515543
0x5fc: Return(); Pop(0)

0x5fd: Stack[-1] = (int) 502868
0x5fe: Return(); Pop(0)

0x5ff: Stack[-1] = "ui/NPC_Maria.png" // @poff=776
0x600: Return(); Pop(0)

0x601: Stack[-1] = "ui/NPC_Maria_b.png" // @poff=810
0x602: Return(); Pop(0)

0x603: Stack[-1] = (bool) 1
0x604: Return(); Pop(0)

