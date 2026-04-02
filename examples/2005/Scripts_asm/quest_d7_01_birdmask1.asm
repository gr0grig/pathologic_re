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
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:playsound
	W:giveitem
	W:d7q01
	W:ood7UBirdmask1
	W:ureport is given
	W:d7q01_ureport
	W:quest_d7_01
	W:kill_player
	W:sobor_teleport
	A:GetItemCount
	W:bird_mask
	W:bird_balahon
	A:GetItem
	A:IsItemSelected
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006400370071003000310000006f006f0064003700550042006900720064006d00610073006b003100000075007200650070006f0072007400200069007300200067006900760065006e000000640037007100300031005f0075007200650070006f00720074000000710075006500730074005f00640037005f003000310000006b0069006c006c005f0070006c006100790065007200000073006f0062006f0072005f00740065006c00650070006f007200740000004765744974656d436f756e740062006900720064005f006d00610073006b00000062006900720064005f00620061006c00610068006f006e0000004765744974656d0049734974656d53656c656374656400430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	Trace (1 args)
	GetInvItemByName (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x28c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf2 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x290 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x298

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x41d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x41b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x41f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x421

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x40a

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
0x41: Call2 0x2dc

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
0x4f: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x382

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x398

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral" // @poff=89
0x60: Call2 0xdc

0x61: Pop(1)
0x62: Push((int) 512188)
0x63: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x64: Pop(1)
0x65: @@@ ClearReplies(); Obj=0 // @poff=116
0x66: Pop(0)
0x67: Push((int) 512189)
0x68: Push((int) 14396)
0x69: Push((int) 13344)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: GOTO 0xbe

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x38e

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x376

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral" // @poff=89
0x7d: Call2 0xdc

0x7e: Pop(1)
0x7f: Push((int) 513197)
0x80: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x81: Pop(1)
0x82: @@@ ClearReplies(); Obj=0 // @poff=116
0x83: Pop(0)
0x84: Push((int) 513198)
0x85: Push((int) 14433)
0x86: Push((int) 14421)
0x87: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x88: Pop(3)
0x89: Push((int) 513199)
0x8a: Push((int) 14428)
0x8b: Push((int) 14422)
0x8c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8d: Pop(3)
0x8e: Push((int) 513200)
0x8f: Push((int) 14424)
0x90: Push((int) 14423)
0x91: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x92: Pop(3)
0x93: Push((int) 513330)
0x94: Push((int) -1)
0x95: Push((int) 14562)
0x96: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x97: Pop(3)
0x98: Push((int) 513331)
0x99: Push((int) -1)
0x9a: Push((int) 14563)
0x9b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9c: Pop(3)
0x9d: GOTO 0xbe

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x376

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0xdc

0xa6: Pop(1)
0xa7: Push((int) 513175)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 513177)
0xad: Push((int) 14398)
0xae: Push((int) 14397)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: Push((int) 513195)
0xb2: Push((int) 14411)
0xb3: Push((int) 14417)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Push((int) 513193)
0xb7: Push((int) -1)
0xb8: Push((int) 14415)
0xb9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xba: Pop(3)
0xbb: GOTO 0xbe

0xbc: Return(); Pop(0)

0xbd: GOTO 0x4e

0xbe: PushEmpty(bool)
0xbf: Call2 0x423

0xc0: Pop(0)
0xc1: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc2: @ lshWaitForAnimEnd()
0xc3: Pop(0)
0xc4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xcc

0xc7: PushEmpty(string)
0xc8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc9: Call2 0x2ed

0xca: Pop(1)
0xcb: GOTO 0xc2

0xcc: GOTO 0xdb

0xcd: Push("all") // @poff=138
0xce: Push("idle") // @poff=146
0xcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: @ WaitForAnimEnd()
0xd2: Pop(0)
0xd3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: GOTO 0xdb

0xd6: Push("all") // @poff=138
0xd7: Push("idle") // @poff=146
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: GOTO 0xd1

0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: PushEmpty(bool)
0xde: Call2 0x423

0xdf: Pop(0)
0xe0: Pop(1); Push((bool) Stack[-1] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(0)

0xe3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Return(); Pop(0)

0xe6: PushEmpty(string, bool)
0xe7: Stack[-3] = Stack[-2]
0xe8: Push("") // @poff=102
0xe9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-1] = (bool) 0
0xec: GOTO 0xee

0xed: Stack[-1] = (bool) 1
0xee: Call2 0x2f4

0xef: Pop(2)
0xf0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf1: Return(); Pop(0)

0xf2: PushEmpty()
0xf3: Push((int) 1)
0xf4: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0xf5: PushEmpty()
0xf6: Call2 0x2fa

0xf7: Pop(0)
0xf8: Push((int) 14419)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x357

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x35d

0x104: Pop(2)
0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x348

0x109: Pop(2)
0x10a: Push((int) 14487)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x368

0x111: Pop(2)
0x112: Push((int) 14432)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x368

0x119: Pop(2)
0x11a: Push((int) 14562)
0x11b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x368

0x121: Pop(2)
0x122: Push((int) 14563)
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0x36f

0x129: Pop(2)
0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x34e

0x12e: Pop(2)
0x12f: Push((int) 13343)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x132: PushEmpty(bool)
0x133: Stack[-1] = (bool) 0
0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x382

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x398

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: Stack[-1] = (bool) 1
0x13f: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral" // @poff=89
0x142: Call2 0xdc

0x143: Pop(1)
0x144: Push((int) 512188)
0x145: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x146: Pop(1)
0x147: @@@ ClearReplies(); Obj=0 // @poff=116
0x148: Pop(0)
0x149: Push((int) 512189)
0x14a: Push((int) 14396)
0x14b: Push((int) 13344)
0x14c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: PushEmpty(bool)
0x150: Stack[-1] = (bool) 0
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x153: Call2 0x38e

0x154: Pop(1)
0x155: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x376

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Stack[-1] = (bool) 1
0x15c: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral" // @poff=89
0x15f: Call2 0xdc

0x160: Pop(1)
0x161: Push((int) 513197)
0x162: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x163: Pop(1)
0x164: @@@ ClearReplies(); Obj=0 // @poff=116
0x165: Pop(0)
0x166: Push((int) 513198)
0x167: Push((int) 14433)
0x168: Push((int) 14421)
0x169: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16a: Pop(3)
0x16b: Push((int) 513199)
0x16c: Push((int) 14428)
0x16d: Push((int) 14422)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 513200)
0x171: Push((int) 14424)
0x172: Push((int) 14423)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 513330)
0x176: Push((int) -1)
0x177: Push((int) 14562)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 513331)
0x17b: Push((int) -1)
0x17c: Push((int) 14563)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: PushEmpty(bool, object)
0x181: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x182: Call2 0x376

0x183: Pop(1)
0x184: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral" // @poff=89
0x187: Call2 0xdc

0x188: Pop(1)
0x189: Push((int) 513175)
0x18a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18b: Pop(1)
0x18c: @@@ ClearReplies(); Obj=0 // @poff=116
0x18d: Pop(0)
0x18e: Push((int) 513177)
0x18f: Push((int) 14398)
0x190: Push((int) 14397)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: Push((int) 513195)
0x194: Push((int) 14411)
0x195: Push((int) 14417)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Push((int) 513193)
0x199: Push((int) -1)
0x19a: Push((int) 14415)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Push((int) 14398)
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Neutral" // @poff=89
0x1a3: Call2 0xdc

0x1a4: Pop(1)
0x1a5: Push((int) 513178)
0x1a6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a7: Pop(1)
0x1a8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a9: Pop(0)
0x1aa: Push((int) 513179)
0x1ab: Push((int) 14402)
0x1ac: Push((int) 14399)
0x1ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ae: Pop(3)
0x1af: Push((int) 513180)
0x1b0: Push((int) 14403)
0x1b1: Push((int) 14400)
0x1b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b3: Pop(3)
0x1b4: Push((int) 513181)
0x1b5: Push((int) 14404)
0x1b6: Push((int) 14401)
0x1b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 14404)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral" // @poff=89
0x1bf: Call2 0xdc

0x1c0: Pop(1)
0x1c1: Push((int) 513184)
0x1c2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c3: Pop(1)
0x1c4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c5: Pop(0)
0x1c6: Push((int) 513189)
0x1c7: Push((int) -1)
0x1c8: Push((int) 14409)
0x1c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ca: Pop(3)
0x1cb: Push((int) 513190)
0x1cc: Push((int) 14411)
0x1cd: Push((int) 14410)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 14403)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral" // @poff=89
0x1d6: Call2 0xdc

0x1d7: Pop(1)
0x1d8: Push((int) 513183)
0x1d9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1da: Pop(1)
0x1db: @@@ ClearReplies(); Obj=0 // @poff=116
0x1dc: Pop(0)
0x1dd: Push((int) 513187)
0x1de: Push((int) -1)
0x1df: Push((int) 14407)
0x1e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e1: Pop(3)
0x1e2: Push((int) 513188)
0x1e3: Push((int) 14411)
0x1e4: Push((int) 14408)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 14402)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral" // @poff=89
0x1ed: Call2 0xdc

0x1ee: Pop(1)
0x1ef: Push((int) 513182)
0x1f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f1: Pop(1)
0x1f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f3: Pop(0)
0x1f4: Push((int) 513185)
0x1f5: Push((int) 14411)
0x1f6: Push((int) 14405)
0x1f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f8: Pop(3)
0x1f9: Push((int) 513186)
0x1fa: Push((int) -1)
0x1fb: Push((int) 14406)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 14411)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral" // @poff=89
0x204: Call2 0xdc

0x205: Pop(1)
0x206: Push((int) 513191)
0x207: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x208: Pop(1)
0x209: @@@ ClearReplies(); Obj=0 // @poff=116
0x20a: Pop(0)
0x20b: Push((int) 513192)
0x20c: Push((int) -1)
0x20d: Push((int) 14414)
0x20e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Push((int) 14424)
0x212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x214: PushEmpty(string)
0x215: Stack[-1] = "Neutral" // @poff=89
0x216: Call2 0xdc

0x217: Pop(1)
0x218: Push((int) 513201)
0x219: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21a: Pop(1)
0x21b: @@@ ClearReplies(); Obj=0 // @poff=116
0x21c: Pop(0)
0x21d: Push((int) 513202)
0x21e: Push((int) 14429)
0x21f: Push((int) 14425)
0x220: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x221: Pop(3)
0x222: Push((int) 513203)
0x223: Push((int) 14433)
0x224: Push((int) 14426)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Push((int) 513204)
0x228: Push((int) 14428)
0x229: Push((int) 14427)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 14429)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=89
0x232: Call2 0xdc

0x233: Pop(1)
0x234: Push((int) 513206)
0x235: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x236: Pop(1)
0x237: @@@ ClearReplies(); Obj=0 // @poff=116
0x238: Pop(0)
0x239: Push((int) 513207)
0x23a: Push((int) -1)
0x23b: Push((int) 14430)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 14428)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral" // @poff=89
0x244: Call2 0xdc

0x245: Pop(1)
0x246: Push((int) 513205)
0x247: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x248: Pop(1)
0x249: @@@ ClearReplies(); Obj=0 // @poff=116
0x24a: Pop(0)
0x24b: Push((int) 513208)
0x24c: Push((int) -1)
0x24d: Push((int) 14431)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24f: Pop(3)
0x250: Push((int) 513209)
0x251: Push((int) -1)
0x252: Push((int) 14432)
0x253: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 14433)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral" // @poff=89
0x25b: Call2 0xdc

0x25c: Pop(1)
0x25d: Push((int) 513210)
0x25e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25f: Pop(1)
0x260: @@@ ClearReplies(); Obj=0 // @poff=116
0x261: Pop(0)
0x262: Push((int) 513211)
0x263: Push((int) -1)
0x264: Push((int) 14434)
0x265: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x266: Pop(3)
0x267: Push((int) 513260)
0x268: Push((int) -1)
0x269: Push((int) 14487)
0x26a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 14396)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral" // @poff=89
0x272: Call2 0xdc

0x273: Pop(1)
0x274: Push((int) 513176)
0x275: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x276: Pop(1)
0x277: @@@ ClearReplies(); Obj=0 // @poff=116
0x278: Pop(0)
0x279: Push((int) 513196)
0x27a: Push((int) -1)
0x27b: Push((int) 14419)
0x27c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x280: PushEmpty(bool)
0x281: Call2 0x423

0x282: Pop(0)
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: @ lshStopAnimation()
0x285: Pop(0)
0x286: GOTO 0x289

0x287: @ StopAnimation()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: GOTO 0xf3

0x28b: Return(); Pop(0)

0x28c: @ Hold()
0x28d: Pop(0)
0x28e: GOTO 0x28c

0x28f: Return(); Pop(0)

0x290: PushEmpty()
0x291: PushEmpty(int, object)
0x292: Stack[-3] = Stack[-1]
0x293: Push(-2, 1); TaskCall(0)
0x294: Call2 0x0

0x295: Pop(-2, 1); TaskReturn
0x296: Pop(2)
0x297: Return(); Pop(0)

0x298: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x299: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x29a: Pop(0)
0x29b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x29c: Pop(0)
0x29d: Push(CvectorIndex(Stack[-8], 1))
0x29e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a0: @ GetPosition(Stack[-7])
0x2a1: Pop(0)
0x2a2: @ GetEyesHeight(Stack[-9])
0x2a3: Pop(0)
0x2a4: Push(CvectorIndex(Stack[-7], 1))
0x2a5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a8: Push(CvectorIndex(Stack[-6], 1))
0x2a9: Stack[-1] = (int) 0
0x2aa: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ab: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ac: Pop(1); Push(Sqrt(Stack[-1]))
0x2ad: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ae: Stack[-5] = -Stack[-6]; Pop(0);
0x2af: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b0: PushEmpty(cvector, cvector)
0x2b1: Push([0.0, 1.0, 0.0])
0x2b2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b3: Call2 0x301

0x2b4: Pop(1)
0x2b5: Push((int) 25)
0x2b6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b8: Push([0.0, 10.0, 0.0])
0x2b9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ba: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2bb: @ IsOverrideActive(Stack[-2])
0x2bc: Pop(0)
0x2bd: Push(Stack[-2])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bf: Stack[-21] = (bool) 0
0x2c0: Return(); Pop(18)

0x2c1: @ StopWorld()
0x2c2: Pop(0)
0x2c3: @ CameraTransit(Stack[-3], Stack[-5])
0x2c4: Pop(0)
0x2c5: Push(CvectorIndex(Stack[-4], 0))
0x2c6: Push(CvectorIndex(Stack[-5], 2))
0x2c7: @ Rotate(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: PushEmpty(bool)
0x2ca: Call2 0x423

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d6

0x2ce: Push("head") // @poff=182
0x2cf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d0: Pop(1)
0x2d1: Push(Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Push("head") // @poff=182
0x2d4: @ LookAsyncCamera(Stack[-1])
0x2d5: Pop(1)
0x2d6: @ CameraWaitForPlayFinish()
0x2d7: Pop(0)
0x2d8: @ ResumeWorld()
0x2d9: Pop(0)
0x2da: Stack[-21] = (bool) 1
0x2db: Return(); Pop(18)

0x2dc: PushEmpty(bool, bool)
0x2dd: @ CameraSwitchToNormal()
0x2de: Pop(0)
0x2df: PushEmpty(bool)
0x2e0: Call2 0x423

0x2e1: Pop(0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2ec

0x2e4: Push("head") // @poff=182
0x2e5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e6: Pop(1)
0x2e7: Push(Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e9: Push("head") // @poff=182
0x2ea: @ UnlookAsync(Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(2)

0x2ed: PushEmpty(float, float, float, float)
0x2ee: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ef: Pop(0)
0x2f0: Push((bool) 0)
0x2f1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(1)
0x2f3: Return(); Pop(4)

0x2f4: PushEmpty(float, float, float, float)
0x2f5: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f6: Pop(0)
0x2f7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f8: Pop(0)
0x2f9: Return(); Pop(4)

0x2fa: PushEmpty(bool)
0x2fb: Call2 0x423

0x2fc: Pop(0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: @ lshStopSpeech()
0x2ff: Pop(0)
0x300: Return(); Pop(0)

0x301: PushEmpty(float, float)
0x302: Pop(0); Push(Stack[-3] | Stack[-3]);
0x303: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x304: Push((float)9.999999974752427e-07)
0x305: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-4] = [0.0, 0.0, 0.0]
0x308: Return(); Pop(2)

0x309: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30a: Return(); Pop(2)

0x30b: PushEmpty(int, int)
0x30c: @ GetVariable(Stack[-3], Stack[-1])
0x30d: Pop(0)
0x30e: Stack[-1] = Stack[-4]
0x30f: Return(); Pop(2)

0x310: PushEmpty(object, object)
0x311: @ CreateIntVector(Stack[-1])
0x312: Pop(0)
0x313: @@ add(Stack[-4]); Obj=1 // @poff=192
0x314: Pop(0)
0x315: @@ add(Stack[-3]); Obj=1 // @poff=192
0x316: Pop(0)
0x317: Push((int) 3)
0x318: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x319: Pop(1)
0x31a: Return(); Pop(2)

0x31b: Stack[-1] = 0
0x31c: PushEmpty(int, int, bool, int, int, bool)
0x31d: @@ GetItemID(Stack[-3]); Obj=8 // @poff=196
0x31e: Pop(0)
0x31f: Push("Category") // @poff=206
0x320: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x321: Pop(1)
0x322: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=224
0x323: Pop(0)
0x324: Pop(0); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=232
0x327: Pop(0)
0x328: GOTO 0x32e

0x329: PushEmpty(int, int)
0x32a: Stack[-5] = Stack[-2]
0x32b: Stack[-9] = Stack[-1]
0x32c: Call2 0x310

0x32d: Pop(2)
0x32e: Return(); Pop(6)

0x32f: PushEmpty(object, object)
0x330: @ CreateInvItem(Stack[-1])
0x331: Pop(0)
0x332: @@ SetItemName(Stack[-4]); Obj=1 // @poff=242
0x333: Pop(0)
0x334: PushEmpty(object, object, int)
0x335: Stack[-8] = Stack[-3]
0x336: Stack[-4] = Stack[-2]
0x337: Stack[-6] = Stack[-1]
0x338: Call2 0x31c

0x339: Pop(3)
0x33a: Return(); Pop(2)

0x33b: Stack[-1] = 0
0x33c: PushEmpty(object, object)
0x33d: @ FindActor(Stack[-1], Stack[-4])
0x33e: Pop(0)
0x33f: Pop(0); PushNull((bool) Stack[-1] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x341: Stack[-5] = (bool) 0
0x342: Return(); Pop(2)

0x343: @ Trigger(Stack[-1], Stack[-3])
0x344: Pop(0)
0x345: Stack[-5] = (bool) 1
0x346: Return(); Pop(2)

0x347: Stack[-1] = 0
0x348: PushEmpty()
0x349: Push("playsound") // @poff=254
0x34a: Push("giveitem") // @poff=274
0x34b: @ TriggerWorld(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: Return(); Pop(0)

0x34e: PushEmpty()
0x34f: Push("d7q01") // @poff=292
0x350: Push((int) 3)
0x351: @ SetVariable(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: PushEmpty()
0x354: Call2 0x3d4

0x355: Pop(0)
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: Push("ood7UBirdmask1") // @poff=304
0x359: Push((int) 1)
0x35a: @ SetVariable(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: Push("ureport is given") // @poff=334
0x35f: @ Trace(Stack[-1])
0x360: Pop(1)
0x361: PushEmpty(object, string, int)
0x362: Stack[-5] = Stack[-3]
0x363: Stack[-2] = "d7q01_ureport" // @poff=368
0x364: Stack[-1] = (int) 1
0x365: Call2 0x32f

0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: PushEmpty()
0x369: PushEmpty(bool, string, string)
0x36a: Stack[-2] = "quest_d7_01" // @poff=396
0x36b: Stack[-1] = "kill_player" // @poff=420
0x36c: Call2 0x33c

0x36d: Pop(3)
0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: PushEmpty(bool, string, string)
0x371: Stack[-2] = "quest_d7_01" // @poff=396
0x372: Stack[-1] = "sobor_teleport" // @poff=444
0x373: Call2 0x33c

0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: PushEmpty()
0x377: PushEmpty(int, string)
0x378: Stack[-1] = "d7q01" // @poff=292
0x379: Call2 0x30b

0x37a: Pop(1)
0x37b: Push((int) 2)
0x37c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-2] = (bool) 1
0x37f: Return(); Pop(0)

0x380: Stack[-2] = (bool) 0
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: PushEmpty(int, string)
0x384: Stack[-1] = "d7q01" // @poff=292
0x385: Call2 0x30b

0x386: Pop(1)
0x387: Push((int) 1)
0x388: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-2] = (bool) 1
0x38b: Return(); Pop(0)

0x38c: Stack[-2] = (bool) 0
0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: PushEmpty(bool, object)
0x390: Stack[-3] = Stack[-1]
0x391: Call2 0x3a4

0x392: Pop(1)
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-2] = (bool) 1
0x395: Return(); Pop(0)

0x396: Stack[-2] = (bool) 0
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(int, string)
0x39a: Stack[-1] = "ood7UBirdmask1" // @poff=304
0x39b: Call2 0x30b

0x39c: Pop(1)
0x39d: Push((int) 0)
0x39e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a0: Stack[-2] = (bool) 1
0x3a1: Return(); Pop(0)

0x3a2: Stack[-2] = (bool) 0
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x3a5: Push((int) 1)
0x3a6: @@ GetItemCount(Stack[-11], Stack[-1]); Obj=22 // @poff=474
0x3a7: Pop(1)
0x3a8: Push("bird_mask") // @poff=487
0x3a9: @ GetInvItemByName(Stack[-10], Stack[-1])
0x3aa: Pop(1)
0x3ab: Push("bird_balahon") // @poff=507
0x3ac: @ GetInvItemByName(Stack[-9], Stack[-1])
0x3ad: Pop(1)
0x3ae: Stack[-7] = (bool) 0
0x3af: Stack[-6] = (bool) 0
0x3b0: Stack[-5] = (int) 0
0x3b1: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3b3: Push((int) 1)
0x3b4: @@ GetItem(Stack[-5], Stack[-6], Stack[-1]); Obj=22 // @poff=533
0x3b5: Pop(1)
0x3b6: @@ GetItemID(Stack[-3]); Obj=4 // @poff=196
0x3b7: Pop(0)
0x3b8: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3ba: Push((int) 1)
0x3bb: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1]); Obj=22 // @poff=541
0x3bc: Pop(1)
0x3bd: Push(Stack[-2])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Stack[-7] = (bool) 1
0x3c0: GOTO 0x3c9

0x3c1: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c3: Push((int) 1)
0x3c4: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1]); Obj=22 // @poff=541
0x3c5: Pop(1)
0x3c6: Push(Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: Stack[-6] = (bool) 1
0x3c9: Stack[-4] = 0
0x3ca: Push((int) 1)
0x3cb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3cc: GOTO 0x3b1

0x3cd: Stack[-22] = (bool) 0
0x3ce: Push(Stack[-7])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d0: Push(Stack[-6])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-22] = (bool) 1
0x3d3: Return(); Pop(20)

0x3d4: PushEmpty(object, object)
0x3d5: Push((int) 169)
0x3d6: Push((int) 1)
0x3d7: Push((int) 515418)
0x3d8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: PushEmpty(bool, object, int)
0x3db: Stack[-4] = Stack[-2]
0x3dc: Stack[-1] = (int) 165
0x3dd: Call2 0x3ee

0x3de: Pop(3)
0x3df: Return(); Pop(2)

0x3e0: Stack[-1] = 0
0x3e1: PushEmpty(object, object)
0x3e2: @ GetDiaryRoot(Stack[-1])
0x3e3: Pop(0)
0x3e4: Pop(0); Push((bool) Stack[-1] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e6: Push("Can't retrieve diary root") // @poff=556
0x3e7: @ Trace(Stack[-1])
0x3e8: Pop(1)
0x3e9: Stack[-3] = (bool) 0
0x3ea: Return(); Pop(2)

0x3eb: Stack[-1] = Stack[-3]
0x3ec: Return(); Pop(2)

0x3ed: Stack[-1] = 0
0x3ee: PushEmpty(object, object, int, object, object, int)
0x3ef: PushEmpty(object)
0x3f0: Call2 0x3e1

0x3f1: Stack[-1] = Stack[-4]
0x3f2: Pop(1)
0x3f3: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=608
0x3f4: Pop(0)
0x3f5: Pop(0); Push((bool) Stack[-2] == 0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f7: Push("Can't find diary parent with id: ") // @poff=613
0x3f8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f9: @ Trace(Stack[-1])
0x3fa: Pop(1)
0x3fb: Stack[-9] = (bool) 0
0x3fc: Return(); Pop(6)

0x3fd: @@ AddChild(Stack[-8]); Obj=2 // @poff=681
0x3fe: Pop(0)
0x3ff: Push((int) 7)
0x400: @ SendWorldWndMessage(Stack[-1])
0x401: Pop(1)
0x402: @@ GetCategory(Stack[-1]); Obj=8 // @poff=690
0x403: Pop(0)
0x404: @ SetDiarySection(Stack[-1])
0x405: Pop(0)
0x406: Stack[-9] = (bool) 0
0x407: Return(); Pop(6)

0x408: Stack[-2] = 0
0x409: Stack[-3] = 0
0x40a: PushEmpty(int, int)
0x40b: Push("branch") // @poff=702
0x40c: @ GetVariable(Stack[-1], Stack[-2])
0x40d: Pop(1)
0x40e: Push((int) 0)
0x40f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x411: Stack[-3] = (int) 1
0x412: Return(); Pop(2)

0x413: GOTO 0x419

0x414: Push((int) 1)
0x415: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-3] = (int) 2
0x418: Return(); Pop(2)

0x419: Stack[-3] = (int) 3
0x41a: Return(); Pop(2)

0x41b: Stack[-1] = (int) 515571
0x41c: Return(); Pop(0)

0x41d: Stack[-1] = (int) 504029
0x41e: Return(); Pop(0)

0x41f: Stack[-1] = "ui/NPC_bmask.png" // @poff=716
0x420: Return(); Pop(0)

0x421: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=750
0x422: Return(); Pop(0)

0x423: Stack[-1] = (bool) 0
0x424: Return(); Pop(0)

