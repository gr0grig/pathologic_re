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
	W:mreport is given
	W:d7q01_mreport
	W:ood7MBirdmask1
	W:quest_d7_01
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006400370071003000310000006d007200650070006f0072007400200069007300200067006900760065006e000000640037007100300031005f006d007200650070006f007200740000006f006f00640037004d0042006900720064006d00610073006b0031000000710075006500730074005f00640037005f0030003100000073006f0062006f0072005f00740065006c00650070006f007200740000004765744974656d436f756e740062006900720064005f006d00610073006b00000062006900720064005f00620061006c00610068006f006e0000004765744974656d0049734974656d53656c656374656400430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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

RunOp = 0x299
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x29d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2a5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x417

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x415

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x419

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x41b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x404

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
0x41: Call2 0x2e9

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
0x4f: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x392

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0xc9

0x58: Pop(1)
0x59: Push((int) 513212)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 513213)
0x5f: Push((int) 14437)
0x60: Push((int) 14436)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0xab

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x37c

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x388

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x72: PushEmpty(string)
0x73: Stack[-1] = "Neutral" // @poff=89
0x74: Call2 0xc9

0x75: Pop(1)
0x76: Push((int) 513216)
0x77: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x78: Pop(1)
0x79: @@@ ClearReplies(); Obj=0 // @poff=116
0x7a: Pop(0)
0x7b: Push((int) 513217)
0x7c: Push((int) 14441)
0x7d: Push((int) 14440)
0x7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7f: Pop(3)
0x80: Push((int) 513220)
0x81: Push((int) 14444)
0x82: Push((int) 14443)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: Push((int) 513224)
0x86: Push((int) 14441)
0x87: Push((int) 14447)
0x88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89: Pop(3)
0x8a: GOTO 0xab

0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x37c

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x90: PushEmpty(string)
0x91: Stack[-1] = "Neutral" // @poff=89
0x92: Call2 0xc9

0x93: Pop(1)
0x94: Push((int) 513231)
0x95: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x96: Pop(1)
0x97: @@@ ClearReplies(); Obj=0 // @poff=116
0x98: Pop(0)
0x99: Push((int) 513232)
0x9a: Push((int) 14456)
0x9b: Push((int) 14455)
0x9c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9d: Pop(3)
0x9e: Push((int) 513248)
0x9f: Push((int) 16562)
0xa0: Push((int) 14473)
0xa1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa2: Pop(3)
0xa3: Push((int) 513249)
0xa4: Push((int) -1)
0xa5: Push((int) 14475)
0xa6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa7: Pop(3)
0xa8: GOTO 0xab

0xa9: Return(); Pop(0)

0xaa: GOTO 0x4e

0xab: PushEmpty(bool)
0xac: Call2 0x41d

0xad: Pop(0)
0xae: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xaf: @ lshWaitForAnimEnd()
0xb0: Pop(0)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb9

0xb4: PushEmpty(string)
0xb5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb6: Call2 0x2fa

0xb7: Pop(1)
0xb8: GOTO 0xaf

0xb9: GOTO 0xc8

0xba: Push("all") // @poff=138
0xbb: Push("idle") // @poff=146
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: @ WaitForAnimEnd()
0xbf: Pop(0)
0xc0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xc8

0xc3: Push("all") // @poff=138
0xc4: Push("idle") // @poff=146
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: GOTO 0xbe

0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: PushEmpty(bool)
0xcb: Call2 0x41d

0xcc: Pop(0)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: PushEmpty(string, bool)
0xd4: Stack[-3] = Stack[-2]
0xd5: Push("") // @poff=102
0xd6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-1] = (bool) 0
0xd9: GOTO 0xdb

0xda: Stack[-1] = (bool) 1
0xdb: Call2 0x301

0xdc: Pop(2)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Push((int) 1)
0xe1: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0xe2: PushEmpty()
0xe3: Call2 0x307

0xe4: Pop(0)
0xe5: Push((int) 14438)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x36f

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x364

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x355

0xf6: Pop(2)
0xf7: Push((int) 14485)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x35b

0xfe: Pop(2)
0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x375

0x103: Pop(2)
0x104: Push((int) 14446)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x35b

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x375

0x110: Pop(2)
0x111: Push((int) 16565)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x35b

0x118: Pop(2)
0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x375

0x11d: Pop(2)
0x11e: Push((int) 16566)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x35b

0x125: Pop(2)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x375

0x12a: Pop(2)
0x12b: Push((int) 14435)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x12e: PushEmpty(bool, object)
0x12f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x130: Call2 0x392

0x131: Pop(1)
0x132: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral" // @poff=89
0x135: Call2 0xc9

0x136: Pop(1)
0x137: Push((int) 513212)
0x138: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x139: Pop(1)
0x13a: @@@ ClearReplies(); Obj=0 // @poff=116
0x13b: Pop(0)
0x13c: Push((int) 513213)
0x13d: Push((int) 14437)
0x13e: Push((int) 14436)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 0
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x37c

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x388

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 1
0x14f: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xc9

0x153: Pop(1)
0x154: Push((int) 513216)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 513217)
0x15a: Push((int) 14441)
0x15b: Push((int) 14440)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 513220)
0x15f: Push((int) 14444)
0x160: Push((int) 14443)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Push((int) 513224)
0x164: Push((int) 14441)
0x165: Push((int) 14447)
0x166: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call2 0x37c

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral" // @poff=89
0x170: Call2 0xc9

0x171: Pop(1)
0x172: Push((int) 513231)
0x173: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x174: Pop(1)
0x175: @@@ ClearReplies(); Obj=0 // @poff=116
0x176: Pop(0)
0x177: Push((int) 513232)
0x178: Push((int) 14456)
0x179: Push((int) 14455)
0x17a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17b: Pop(3)
0x17c: Push((int) 513248)
0x17d: Push((int) 16562)
0x17e: Push((int) 14473)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: Push((int) 513249)
0x182: Push((int) -1)
0x183: Push((int) 14475)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 14456)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral" // @poff=89
0x18c: Call2 0xc9

0x18d: Pop(1)
0x18e: Push((int) 513233)
0x18f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x190: Pop(1)
0x191: @@@ ClearReplies(); Obj=0 // @poff=116
0x192: Pop(0)
0x193: Push((int) 513234)
0x194: Push((int) 14458)
0x195: Push((int) 14457)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Push((int) 513240)
0x199: Push((int) 14469)
0x19a: Push((int) 14463)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Push((int) 513244)
0x19e: Push((int) 14464)
0x19f: Push((int) 14468)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 14464)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Neutral" // @poff=89
0x1a8: Call2 0xc9

0x1a9: Pop(1)
0x1aa: Push((int) 513241)
0x1ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ac: Pop(1)
0x1ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ae: Pop(0)
0x1af: Push((int) 513242)
0x1b0: Push((int) -1)
0x1b1: Push((int) 14465)
0x1b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b3: Pop(3)
0x1b4: Push((int) 513243)
0x1b5: Push((int) 16562)
0x1b6: Push((int) 14466)
0x1b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 14469)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral" // @poff=89
0x1bf: Call2 0xc9

0x1c0: Pop(1)
0x1c1: Push((int) 513245)
0x1c2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c3: Pop(1)
0x1c4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c5: Pop(0)
0x1c6: Push((int) 513246)
0x1c7: Push((int) -1)
0x1c8: Push((int) 14470)
0x1c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ca: Pop(3)
0x1cb: Push((int) 513247)
0x1cc: Push((int) 16562)
0x1cd: Push((int) 14471)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 14458)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral" // @poff=89
0x1d6: Call2 0xc9

0x1d7: Pop(1)
0x1d8: Push((int) 513235)
0x1d9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1da: Pop(1)
0x1db: @@@ ClearReplies(); Obj=0 // @poff=116
0x1dc: Pop(0)
0x1dd: Push((int) 513236)
0x1de: Push((int) 16562)
0x1df: Push((int) 14459)
0x1e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e1: Pop(3)
0x1e2: Push((int) 513239)
0x1e3: Push((int) -1)
0x1e4: Push((int) 14462)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 16562)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral" // @poff=89
0x1ed: Call2 0xc9

0x1ee: Pop(1)
0x1ef: Push((int) 515419)
0x1f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f1: Pop(1)
0x1f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f3: Pop(0)
0x1f4: Push((int) 515420)
0x1f5: Push((int) -1)
0x1f6: Push((int) 16565)
0x1f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f8: Pop(3)
0x1f9: Push((int) 515421)
0x1fa: Push((int) -1)
0x1fb: Push((int) 16566)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 14444)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral" // @poff=89
0x204: Call2 0xc9

0x205: Pop(1)
0x206: Push((int) 513221)
0x207: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x208: Pop(1)
0x209: @@@ ClearReplies(); Obj=0 // @poff=116
0x20a: Pop(0)
0x20b: Push((int) 513222)
0x20c: Push((int) -1)
0x20d: Push((int) 14445)
0x20e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20f: Pop(3)
0x210: Push((int) 513223)
0x211: Push((int) -1)
0x212: Push((int) 14446)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 14441)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral" // @poff=89
0x21b: Call2 0xc9

0x21c: Pop(1)
0x21d: Push((int) 513218)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=116
0x221: Pop(0)
0x222: Push((int) 513219)
0x223: Push((int) -1)
0x224: Push((int) 14442)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Push((int) 513259)
0x228: Push((int) -1)
0x229: Push((int) 14485)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 14437)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=89
0x232: Call2 0xc9

0x233: Pop(1)
0x234: Push((int) 513214)
0x235: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x236: Pop(1)
0x237: @@@ ClearReplies(); Obj=0 // @poff=116
0x238: Pop(0)
0x239: Push((int) 513250)
0x23a: Push((int) 14478)
0x23b: Push((int) 14476)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Push((int) 513251)
0x23f: Push((int) 14482)
0x240: Push((int) 14477)
0x241: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 14482)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral" // @poff=89
0x249: Call2 0xc9

0x24a: Pop(1)
0x24b: Push((int) 513256)
0x24c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24d: Pop(1)
0x24e: @@@ ClearReplies(); Obj=0 // @poff=116
0x24f: Pop(0)
0x250: Push((int) 513257)
0x251: Push((int) 14484)
0x252: Push((int) 14483)
0x253: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 14484)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral" // @poff=89
0x25b: Call2 0xc9

0x25c: Pop(1)
0x25d: Push((int) 513258)
0x25e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25f: Pop(1)
0x260: @@@ ClearReplies(); Obj=0 // @poff=116
0x261: Pop(0)
0x262: Push((int) 513215)
0x263: Push((int) -1)
0x264: Push((int) 14438)
0x265: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: Push((int) 14478)
0x269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Neutral" // @poff=89
0x26d: Call2 0xc9

0x26e: Pop(1)
0x26f: Push((int) 513252)
0x270: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x271: Pop(1)
0x272: @@@ ClearReplies(); Obj=0 // @poff=116
0x273: Pop(0)
0x274: Push((int) 513253)
0x275: Push((int) 14480)
0x276: Push((int) 14479)
0x277: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x278: Pop(3)
0x279: Return(); Pop(0)

0x27a: Push((int) 14480)
0x27b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral" // @poff=89
0x27f: Call2 0xc9

0x280: Pop(1)
0x281: Push((int) 513254)
0x282: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x283: Pop(1)
0x284: @@@ ClearReplies(); Obj=0 // @poff=116
0x285: Pop(0)
0x286: Push((int) 513255)
0x287: Push((int) -1)
0x288: Push((int) 14481)
0x289: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28d: PushEmpty(bool)
0x28e: Call2 0x41d

0x28f: Pop(0)
0x290: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x291: @ lshStopAnimation()
0x292: Pop(0)
0x293: GOTO 0x296

0x294: @ StopAnimation()
0x295: Pop(0)
0x296: Return(); Pop(0)

0x297: GOTO 0xe0

0x298: Return(); Pop(0)

0x299: @ Hold()
0x29a: Pop(0)
0x29b: GOTO 0x299

0x29c: Return(); Pop(0)

0x29d: PushEmpty()
0x29e: PushEmpty(int, object)
0x29f: Stack[-3] = Stack[-1]
0x2a0: Push(-2, 1); TaskCall(0)
0x2a1: Call2 0x0

0x2a2: Pop(-2, 1); TaskReturn
0x2a3: Pop(2)
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a6: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x2a7: Pop(0)
0x2a8: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x2a9: Pop(0)
0x2aa: Push(CvectorIndex(Stack[-8], 1))
0x2ab: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ac: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ad: @ GetPosition(Stack[-7])
0x2ae: Pop(0)
0x2af: @ GetEyesHeight(Stack[-9])
0x2b0: Pop(0)
0x2b1: Push(CvectorIndex(Stack[-7], 1))
0x2b2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b5: Push(CvectorIndex(Stack[-6], 1))
0x2b6: Stack[-1] = (int) 0
0x2b7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b9: Pop(1); Push(Sqrt(Stack[-1]))
0x2ba: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2bb: Stack[-5] = -Stack[-6]; Pop(0);
0x2bc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2bd: PushEmpty(cvector, cvector)
0x2be: Push([0.0, 1.0, 0.0])
0x2bf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c0: Call2 0x30e

0x2c1: Pop(1)
0x2c2: Push((int) 25)
0x2c3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c5: Push([0.0, 10.0, 0.0])
0x2c6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c8: @ IsOverrideActive(Stack[-2])
0x2c9: Pop(0)
0x2ca: Push(Stack[-2])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-21] = (bool) 0
0x2cd: Return(); Pop(18)

0x2ce: @ StopWorld()
0x2cf: Pop(0)
0x2d0: @ CameraTransit(Stack[-3], Stack[-5])
0x2d1: Pop(0)
0x2d2: Push(CvectorIndex(Stack[-4], 0))
0x2d3: Push(CvectorIndex(Stack[-5], 2))
0x2d4: @ Rotate(Stack[-2], Stack[-1])
0x2d5: Pop(2)
0x2d6: PushEmpty(bool)
0x2d7: Call2 0x41d

0x2d8: Pop(0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: GOTO 0x2e3

0x2db: Push("head") // @poff=182
0x2dc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2dd: Pop(1)
0x2de: Push(Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e0: Push("head") // @poff=182
0x2e1: @ LookAsyncCamera(Stack[-1])
0x2e2: Pop(1)
0x2e3: @ CameraWaitForPlayFinish()
0x2e4: Pop(0)
0x2e5: @ ResumeWorld()
0x2e6: Pop(0)
0x2e7: Stack[-21] = (bool) 1
0x2e8: Return(); Pop(18)

0x2e9: PushEmpty(bool, bool)
0x2ea: @ CameraSwitchToNormal()
0x2eb: Pop(0)
0x2ec: PushEmpty(bool)
0x2ed: Call2 0x41d

0x2ee: Pop(0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x2f9

0x2f1: Push("head") // @poff=182
0x2f2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f3: Pop(1)
0x2f4: Push(Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f6: Push("head") // @poff=182
0x2f7: @ UnlookAsync(Stack[-1])
0x2f8: Pop(1)
0x2f9: Return(); Pop(2)

0x2fa: PushEmpty(float, float, float, float)
0x2fb: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2fc: Pop(0)
0x2fd: Push((bool) 0)
0x2fe: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(1)
0x300: Return(); Pop(4)

0x301: PushEmpty(float, float, float, float)
0x302: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x303: Pop(0)
0x304: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x305: Pop(0)
0x306: Return(); Pop(4)

0x307: PushEmpty(bool)
0x308: Call2 0x41d

0x309: Pop(0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: @ lshStopSpeech()
0x30c: Pop(0)
0x30d: Return(); Pop(0)

0x30e: PushEmpty(float, float)
0x30f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x310: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x311: Push((float)9.999999974752427e-07)
0x312: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-4] = [0.0, 0.0, 0.0]
0x315: Return(); Pop(2)

0x316: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x317: Return(); Pop(2)

0x318: PushEmpty(int, int)
0x319: @ GetVariable(Stack[-3], Stack[-1])
0x31a: Pop(0)
0x31b: Stack[-1] = Stack[-4]
0x31c: Return(); Pop(2)

0x31d: PushEmpty(object, object)
0x31e: @ CreateIntVector(Stack[-1])
0x31f: Pop(0)
0x320: @@ add(Stack[-4]); Obj=1 // @poff=192
0x321: Pop(0)
0x322: @@ add(Stack[-3]); Obj=1 // @poff=192
0x323: Pop(0)
0x324: Push((int) 3)
0x325: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x326: Pop(1)
0x327: Return(); Pop(2)

0x328: Stack[-1] = 0
0x329: PushEmpty(int, int, bool, int, int, bool)
0x32a: @@ GetItemID(Stack[-3]); Obj=8 // @poff=196
0x32b: Pop(0)
0x32c: Push("Category") // @poff=206
0x32d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x32e: Pop(1)
0x32f: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=224
0x330: Pop(0)
0x331: Pop(0); Push((bool) Stack[-1] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x333: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=232
0x334: Pop(0)
0x335: GOTO 0x33b

0x336: PushEmpty(int, int)
0x337: Stack[-5] = Stack[-2]
0x338: Stack[-9] = Stack[-1]
0x339: Call2 0x31d

0x33a: Pop(2)
0x33b: Return(); Pop(6)

0x33c: PushEmpty(object, object)
0x33d: @ CreateInvItem(Stack[-1])
0x33e: Pop(0)
0x33f: @@ SetItemName(Stack[-4]); Obj=1 // @poff=242
0x340: Pop(0)
0x341: PushEmpty(object, object, int)
0x342: Stack[-8] = Stack[-3]
0x343: Stack[-4] = Stack[-2]
0x344: Stack[-6] = Stack[-1]
0x345: Call2 0x329

0x346: Pop(3)
0x347: Return(); Pop(2)

0x348: Stack[-1] = 0
0x349: PushEmpty(object, object)
0x34a: @ FindActor(Stack[-1], Stack[-4])
0x34b: Pop(0)
0x34c: Pop(0); PushNull((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-5] = (bool) 0
0x34f: Return(); Pop(2)

0x350: @ Trigger(Stack[-1], Stack[-3])
0x351: Pop(0)
0x352: Stack[-5] = (bool) 1
0x353: Return(); Pop(2)

0x354: Stack[-1] = 0
0x355: PushEmpty()
0x356: Push("playsound") // @poff=254
0x357: Push("giveitem") // @poff=274
0x358: @ TriggerWorld(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: Push("d7q01") // @poff=292
0x35d: Push((int) 3)
0x35e: @ SetVariable(Stack[-2], Stack[-1])
0x35f: Pop(2)
0x360: PushEmpty()
0x361: Call2 0x3ce

0x362: Pop(0)
0x363: Return(); Pop(0)

0x364: PushEmpty()
0x365: Push("mreport is given") // @poff=304
0x366: @ Trace(Stack[-1])
0x367: Pop(1)
0x368: PushEmpty(object, string, int)
0x369: Stack[-5] = Stack[-3]
0x36a: Stack[-2] = "d7q01_mreport" // @poff=338
0x36b: Stack[-1] = (int) 1
0x36c: Call2 0x33c

0x36d: Pop(3)
0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: Push("ood7MBirdmask1") // @poff=366
0x371: Push((int) 1)
0x372: @ SetVariable(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: PushEmpty(bool, string, string)
0x377: Stack[-2] = "quest_d7_01" // @poff=396
0x378: Stack[-1] = "sobor_teleport" // @poff=420
0x379: Call2 0x349

0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: PushEmpty()
0x37d: PushEmpty(int, string)
0x37e: Stack[-1] = "d7q01" // @poff=292
0x37f: Call2 0x318

0x380: Pop(1)
0x381: Push((int) 2)
0x382: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-2] = (bool) 1
0x385: Return(); Pop(0)

0x386: Stack[-2] = (bool) 0
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: PushEmpty(bool, object)
0x38a: Stack[-3] = Stack[-1]
0x38b: Call2 0x39e

0x38c: Pop(1)
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-2] = (bool) 1
0x38f: Return(); Pop(0)

0x390: Stack[-2] = (bool) 0
0x391: Return(); Pop(0)

0x392: PushEmpty()
0x393: PushEmpty(int, string)
0x394: Stack[-1] = "ood7MBirdmask1" // @poff=366
0x395: Call2 0x318

0x396: Pop(1)
0x397: Push((int) 0)
0x398: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-2] = (bool) 1
0x39b: Return(); Pop(0)

0x39c: Stack[-2] = (bool) 0
0x39d: Return(); Pop(0)

0x39e: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x39f: Push((int) 1)
0x3a0: @@ GetItemCount(Stack[-11], Stack[-1]); Obj=22 // @poff=450
0x3a1: Pop(1)
0x3a2: Push("bird_mask") // @poff=463
0x3a3: @ GetInvItemByName(Stack[-10], Stack[-1])
0x3a4: Pop(1)
0x3a5: Push("bird_balahon") // @poff=483
0x3a6: @ GetInvItemByName(Stack[-9], Stack[-1])
0x3a7: Pop(1)
0x3a8: Stack[-7] = (bool) 0
0x3a9: Stack[-6] = (bool) 0
0x3aa: Stack[-5] = (int) 0
0x3ab: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3ad: Push((int) 1)
0x3ae: @@ GetItem(Stack[-5], Stack[-6], Stack[-1]); Obj=22 // @poff=509
0x3af: Pop(1)
0x3b0: @@ GetItemID(Stack[-3]); Obj=4 // @poff=196
0x3b1: Pop(0)
0x3b2: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b4: Push((int) 1)
0x3b5: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1]); Obj=22 // @poff=517
0x3b6: Pop(1)
0x3b7: Push(Stack[-2])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b9: Stack[-7] = (bool) 1
0x3ba: GOTO 0x3c3

0x3bb: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bd: Push((int) 1)
0x3be: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1]); Obj=22 // @poff=517
0x3bf: Pop(1)
0x3c0: Push(Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: Stack[-6] = (bool) 1
0x3c3: Stack[-4] = 0
0x3c4: Push((int) 1)
0x3c5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3c6: GOTO 0x3ab

0x3c7: Stack[-22] = (bool) 0
0x3c8: Push(Stack[-7])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3ca: Push(Stack[-6])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: Stack[-22] = (bool) 1
0x3cd: Return(); Pop(20)

0x3ce: PushEmpty(object, object)
0x3cf: Push((int) 169)
0x3d0: Push((int) 1)
0x3d1: Push((int) 515418)
0x3d2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: PushEmpty(bool, object, int)
0x3d5: Stack[-4] = Stack[-2]
0x3d6: Stack[-1] = (int) 165
0x3d7: Call2 0x3e8

0x3d8: Pop(3)
0x3d9: Return(); Pop(2)

0x3da: Stack[-1] = 0
0x3db: PushEmpty(object, object)
0x3dc: @ GetDiaryRoot(Stack[-1])
0x3dd: Pop(0)
0x3de: Pop(0); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e0: Push("Can't retrieve diary root") // @poff=532
0x3e1: @ Trace(Stack[-1])
0x3e2: Pop(1)
0x3e3: Stack[-3] = (bool) 0
0x3e4: Return(); Pop(2)

0x3e5: Stack[-1] = Stack[-3]
0x3e6: Return(); Pop(2)

0x3e7: Stack[-1] = 0
0x3e8: PushEmpty(object, object, int, object, object, int)
0x3e9: PushEmpty(object)
0x3ea: Call2 0x3db

0x3eb: Stack[-1] = Stack[-4]
0x3ec: Pop(1)
0x3ed: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=584
0x3ee: Pop(0)
0x3ef: Pop(0); Push((bool) Stack[-2] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f1: Push("Can't find diary parent with id: ") // @poff=589
0x3f2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f3: @ Trace(Stack[-1])
0x3f4: Pop(1)
0x3f5: Stack[-9] = (bool) 0
0x3f6: Return(); Pop(6)

0x3f7: @@ AddChild(Stack[-8]); Obj=2 // @poff=657
0x3f8: Pop(0)
0x3f9: Push((int) 7)
0x3fa: @ SendWorldWndMessage(Stack[-1])
0x3fb: Pop(1)
0x3fc: @@ GetCategory(Stack[-1]); Obj=8 // @poff=666
0x3fd: Pop(0)
0x3fe: @ SetDiarySection(Stack[-1])
0x3ff: Pop(0)
0x400: Stack[-9] = (bool) 0
0x401: Return(); Pop(6)

0x402: Stack[-2] = 0
0x403: Stack[-3] = 0
0x404: PushEmpty(int, int)
0x405: Push("branch") // @poff=678
0x406: @ GetVariable(Stack[-1], Stack[-2])
0x407: Pop(1)
0x408: Push((int) 0)
0x409: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: Stack[-3] = (int) 1
0x40c: Return(); Pop(2)

0x40d: GOTO 0x413

0x40e: Push((int) 1)
0x40f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Stack[-3] = (int) 2
0x412: Return(); Pop(2)

0x413: Stack[-3] = (int) 3
0x414: Return(); Pop(2)

0x415: Stack[-1] = (int) 515571
0x416: Return(); Pop(0)

0x417: Stack[-1] = (int) 504029
0x418: Return(); Pop(0)

0x419: Stack[-1] = "ui/NPC_bmask.png" // @poff=692
0x41a: Return(); Pop(0)

0x41b: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=726
0x41c: Return(); Pop(0)

0x41d: Stack[-1] = (bool) 0
0x41e: Return(); Pop(0)

