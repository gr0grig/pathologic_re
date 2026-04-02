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
	W:dreport is given
	W:d7q01_dreport
	W:ood7DBirdmask1
	W:quest_d7_01
	W:kill_player
	W:d7q01
	A:GetItemCount
	W:bird_mask
	W:bird_balahon
	A:GetItem
	A:IsItemSelected
	W:branch
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e00476574457965734865696768740068006500610064000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d00000064007200650070006f0072007400200069007300200067006900760065006e000000640037007100300031005f0064007200650070006f007200740000006f006f0064003700440042006900720064006d00610073006b0031000000710075006500730074005f00640037005f003000310000006b0069006c006c005f0070006c00610079006500720000006400370071003000310000004765744974656d436f756e740062006900720064005f006d00610073006b00000062006900720064005f00620061006c00610068006f006e0000004765744974656d0049734974656d53656c6563746564006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	Trace (1 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)

RunOp = 0x2f5
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf7 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x2f9 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x301

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x44d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x44b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x44f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x451

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x43a

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
0x41: Call2 0x345

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
0x4f: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x3fb

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3e5

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral" // @poff=89
0x60: Call2 0xe1

0x61: Pop(1)
0x62: Push((int) 513261)
0x63: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x64: Pop(1)
0x65: @@@ ClearReplies(); Obj=0 // @poff=116
0x66: Pop(0)
0x67: Push((int) 513262)
0x68: Push((int) 14492)
0x69: Push((int) 14491)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: GOTO 0xc3

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x3d9

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x3f1

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral" // @poff=89
0x7d: Call2 0xe1

0x7e: Pop(1)
0x7f: Push((int) 513279)
0x80: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x81: Pop(1)
0x82: @@@ ClearReplies(); Obj=0 // @poff=116
0x83: Pop(0)
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x3cf

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: Push((int) 513280)
0x8a: Push((int) 14511)
0x8b: Push((int) 14510)
0x8c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8d: Pop(3)
0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x3cf

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: Push((int) 513284)
0x94: Push((int) 14515)
0x95: Push((int) 14514)
0x96: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x97: Pop(3)
0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call2 0x3cf

0x9b: Pop(1)
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: Push((int) 513288)
0x9e: Push((int) 14511)
0x9f: Push((int) 14518)
0xa0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa1: Pop(3)
0xa2: GOTO 0xc3

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x3d9

0xa6: Pop(1)
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral" // @poff=89
0xaa: Call2 0xe1

0xab: Pop(1)
0xac: Push((int) 513289)
0xad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xae: Pop(1)
0xaf: @@@ ClearReplies(); Obj=0 // @poff=116
0xb0: Pop(0)
0xb1: Push((int) 513290)
0xb2: Push((int) 14522)
0xb3: Push((int) 14521)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Push((int) 513304)
0xb7: Push((int) 14538)
0xb8: Push((int) 14535)
0xb9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xba: Pop(3)
0xbb: Push((int) 513305)
0xbc: Push((int) -1)
0xbd: Push((int) 14536)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: GOTO 0xc3

0xc1: Return(); Pop(0)

0xc2: GOTO 0x4e

0xc3: PushEmpty(bool)
0xc4: Call2 0x453

0xc5: Pop(0)
0xc6: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc7: @ lshWaitForAnimEnd()
0xc8: Pop(0)
0xc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: GOTO 0xd1

0xcc: PushEmpty(string)
0xcd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xce: Call2 0x356

0xcf: Pop(1)
0xd0: GOTO 0xc7

0xd1: GOTO 0xe0

0xd2: Push("all") // @poff=138
0xd3: Push("idle") // @poff=146
0xd4: @ PlayAnimation(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: @ WaitForAnimEnd()
0xd7: Pop(0)
0xd8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: GOTO 0xe0

0xdb: Push("all") // @poff=138
0xdc: Push("idle") // @poff=146
0xdd: @ PlayAnimation(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: GOTO 0xd6

0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: PushEmpty(bool)
0xe3: Call2 0x453

0xe4: Pop(0)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Return(); Pop(0)

0xe8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Return(); Pop(0)

0xeb: PushEmpty(string, bool)
0xec: Stack[-3] = Stack[-2]
0xed: Push("") // @poff=102
0xee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf0: Stack[-1] = (bool) 0
0xf1: GOTO 0xf3

0xf2: Stack[-1] = (bool) 1
0xf3: Call2 0x35d

0xf4: Pop(2)
0xf5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: Push((int) 1)
0xf9: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0xfa: PushEmpty()
0xfb: Call2 0x363

0xfc: Pop(0)
0xfd: Push((int) 14497)
0xfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x3b7

0x104: Pop(2)
0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x3c2

0x109: Pop(2)
0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x3b1

0x10e: Pop(2)
0x10f: Push((int) 14502)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x3b1

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x3c2

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x3b7

0x120: Pop(2)
0x121: Push((int) 14513)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x3c8

0x128: Pop(2)
0x129: Push((int) 14517)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call2 0x3c8

0x130: Pop(2)
0x131: Push((int) 14539)
0x132: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x134: PushEmpty(object, object)
0x135: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x136: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x137: Call2 0x3c8

0x138: Pop(2)
0x139: Push((int) 14490)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x13c: PushEmpty(bool)
0x13d: Stack[-1] = (bool) 0
0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x3fb

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x3e5

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-1] = (bool) 1
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0xe1

0x14d: Pop(1)
0x14e: Push((int) 513261)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 513262)
0x154: Push((int) 14492)
0x155: Push((int) 14491)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x3d9

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x3f1

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0xe1

0x16a: Pop(1)
0x16b: Push((int) 513279)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: PushEmpty(bool, object)
0x171: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x172: Call2 0x3cf

0x173: Pop(1)
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: Push((int) 513280)
0x176: Push((int) 14511)
0x177: Push((int) 14510)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x3cf

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: Push((int) 513284)
0x180: Push((int) 14515)
0x181: Push((int) 14514)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x183: Pop(3)
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x3cf

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: Push((int) 513288)
0x18a: Push((int) 14511)
0x18b: Push((int) 14518)
0x18c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: PushEmpty(bool, object)
0x190: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x191: Call2 0x3d9

0x192: Pop(1)
0x193: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral" // @poff=89
0x196: Call2 0xe1

0x197: Pop(1)
0x198: Push((int) 513289)
0x199: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19a: Pop(1)
0x19b: @@@ ClearReplies(); Obj=0 // @poff=116
0x19c: Pop(0)
0x19d: Push((int) 513290)
0x19e: Push((int) 14522)
0x19f: Push((int) 14521)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Push((int) 513304)
0x1a3: Push((int) 14538)
0x1a4: Push((int) 14535)
0x1a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a6: Pop(3)
0x1a7: Push((int) 513305)
0x1a8: Push((int) -1)
0x1a9: Push((int) 14536)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 14522)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Neutral" // @poff=89
0x1b2: Call2 0xe1

0x1b3: Pop(1)
0x1b4: Push((int) 513291)
0x1b5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b6: Pop(1)
0x1b7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b8: Pop(0)
0x1b9: Push((int) 513292)
0x1ba: Push((int) 14524)
0x1bb: Push((int) 14523)
0x1bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bd: Pop(3)
0x1be: Push((int) 513296)
0x1bf: Push((int) 14528)
0x1c0: Push((int) 14527)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Push((int) 513300)
0x1c4: Push((int) 14532)
0x1c5: Push((int) 14531)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 14532)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Neutral" // @poff=89
0x1ce: Call2 0xe1

0x1cf: Pop(1)
0x1d0: Push((int) 513301)
0x1d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d2: Pop(1)
0x1d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d4: Pop(0)
0x1d5: Push((int) 513302)
0x1d6: Push((int) 14540)
0x1d7: Push((int) 14533)
0x1d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d9: Pop(3)
0x1da: Push((int) 513303)
0x1db: Push((int) 14538)
0x1dc: Push((int) 14534)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 14540)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral" // @poff=89
0x1e5: Call2 0xe1

0x1e6: Pop(1)
0x1e7: Push((int) 513309)
0x1e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e9: Pop(1)
0x1ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x1eb: Pop(0)
0x1ec: Push((int) 513310)
0x1ed: Push((int) 14524)
0x1ee: Push((int) 14541)
0x1ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 14528)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral" // @poff=89
0x1f7: Call2 0xe1

0x1f8: Pop(1)
0x1f9: Push((int) 513297)
0x1fa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fb: Pop(1)
0x1fc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fd: Pop(0)
0x1fe: Push((int) 513298)
0x1ff: Push((int) -1)
0x200: Push((int) 14529)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: Push((int) 513299)
0x204: Push((int) 14538)
0x205: Push((int) 14530)
0x206: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 14524)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral" // @poff=89
0x20e: Call2 0xe1

0x20f: Pop(1)
0x210: Push((int) 513293)
0x211: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x212: Pop(1)
0x213: @@@ ClearReplies(); Obj=0 // @poff=116
0x214: Pop(0)
0x215: Push((int) 513295)
0x216: Push((int) -1)
0x217: Push((int) 14526)
0x218: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x219: Pop(3)
0x21a: Push((int) 513306)
0x21b: Push((int) 14538)
0x21c: Push((int) 14537)
0x21d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: Push((int) 14538)
0x221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Neutral" // @poff=89
0x225: Call2 0xe1

0x226: Pop(1)
0x227: Push((int) 513307)
0x228: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x229: Pop(1)
0x22a: @@@ ClearReplies(); Obj=0 // @poff=116
0x22b: Pop(0)
0x22c: Push((int) 513308)
0x22d: Push((int) -1)
0x22e: Push((int) 14539)
0x22f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x230: Pop(3)
0x231: Return(); Pop(0)

0x232: Push((int) 14515)
0x233: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral" // @poff=89
0x237: Call2 0xe1

0x238: Pop(1)
0x239: Push((int) 513285)
0x23a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23b: Pop(1)
0x23c: @@@ ClearReplies(); Obj=0 // @poff=116
0x23d: Pop(0)
0x23e: Push((int) 513286)
0x23f: Push((int) -1)
0x240: Push((int) 14516)
0x241: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x242: Pop(3)
0x243: Push((int) 513287)
0x244: Push((int) -1)
0x245: Push((int) 14517)
0x246: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: Push((int) 14511)
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x24c: PushEmpty(string)
0x24d: Stack[-1] = "Neutral" // @poff=89
0x24e: Call2 0xe1

0x24f: Pop(1)
0x250: Push((int) 513281)
0x251: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x252: Pop(1)
0x253: @@@ ClearReplies(); Obj=0 // @poff=116
0x254: Pop(0)
0x255: Push((int) 513282)
0x256: Push((int) -1)
0x257: Push((int) 14512)
0x258: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x259: Pop(3)
0x25a: Push((int) 513283)
0x25b: Push((int) -1)
0x25c: Push((int) 14513)
0x25d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25e: Pop(3)
0x25f: Return(); Pop(0)

0x260: Push((int) 14492)
0x261: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x263: PushEmpty(string)
0x264: Stack[-1] = "Neutral" // @poff=89
0x265: Call2 0xe1

0x266: Pop(1)
0x267: Push((int) 513263)
0x268: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x269: Pop(1)
0x26a: @@@ ClearReplies(); Obj=0 // @poff=116
0x26b: Pop(0)
0x26c: Push((int) 513264)
0x26d: Push((int) 14494)
0x26e: Push((int) 14493)
0x26f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x270: Pop(3)
0x271: Push((int) 513269)
0x272: Push((int) 14506)
0x273: Push((int) 14498)
0x274: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x275: Pop(3)
0x276: Push((int) 513274)
0x277: Push((int) 14504)
0x278: Push((int) 14503)
0x279: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27a: Pop(3)
0x27b: Return(); Pop(0)

0x27c: Push((int) 14504)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x27f: PushEmpty(string)
0x280: Stack[-1] = "Neutral" // @poff=89
0x281: Call2 0xe1

0x282: Pop(1)
0x283: Push((int) 513275)
0x284: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x285: Pop(1)
0x286: @@@ ClearReplies(); Obj=0 // @poff=116
0x287: Pop(0)
0x288: Push((int) 513276)
0x289: Push((int) 14499)
0x28a: Push((int) 14505)
0x28b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28c: Pop(3)
0x28d: Return(); Pop(0)

0x28e: Push((int) 14506)
0x28f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x291: PushEmpty(string)
0x292: Stack[-1] = "Neutral" // @poff=89
0x293: Call2 0xe1

0x294: Pop(1)
0x295: Push((int) 513277)
0x296: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x297: Pop(1)
0x298: @@@ ClearReplies(); Obj=0 // @poff=116
0x299: Pop(0)
0x29a: Push((int) 513278)
0x29b: Push((int) 14499)
0x29c: Push((int) 14507)
0x29d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29e: Pop(3)
0x29f: Return(); Pop(0)

0x2a0: Push((int) 14499)
0x2a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral" // @poff=89
0x2a5: Call2 0xe1

0x2a6: Pop(1)
0x2a7: Push((int) 513270)
0x2a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a9: Pop(1)
0x2aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ab: Pop(0)
0x2ac: Push((int) 513271)
0x2ad: Push((int) 14501)
0x2ae: Push((int) 14500)
0x2af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 14501)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral" // @poff=89
0x2b7: Call2 0xe1

0x2b8: Pop(1)
0x2b9: Push((int) 513272)
0x2ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bb: Pop(1)
0x2bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bd: Pop(0)
0x2be: Push((int) 513273)
0x2bf: Push((int) -1)
0x2c0: Push((int) 14502)
0x2c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 14494)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral" // @poff=89
0x2c9: Call2 0xe1

0x2ca: Pop(1)
0x2cb: Push((int) 513265)
0x2cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2cd: Pop(1)
0x2ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x2cf: Pop(0)
0x2d0: Push((int) 513266)
0x2d1: Push((int) 14496)
0x2d2: Push((int) 14495)
0x2d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 14496)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Neutral" // @poff=89
0x2db: Call2 0xe1

0x2dc: Pop(1)
0x2dd: Push((int) 513267)
0x2de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2df: Pop(1)
0x2e0: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e1: Pop(0)
0x2e2: Push((int) 513268)
0x2e3: Push((int) -1)
0x2e4: Push((int) 14497)
0x2e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x453

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: @ lshStopAnimation()
0x2ee: Pop(0)
0x2ef: GOTO 0x2f2

0x2f0: @ StopAnimation()
0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: GOTO 0xf8

0x2f4: Return(); Pop(0)

0x2f5: @ Hold()
0x2f6: Pop(0)
0x2f7: GOTO 0x2f5

0x2f8: Return(); Pop(0)

0x2f9: PushEmpty()
0x2fa: PushEmpty(int, object)
0x2fb: Stack[-3] = Stack[-1]
0x2fc: Push(-2, 1); TaskCall(0)
0x2fd: Call2 0x0

0x2fe: Pop(-2, 1); TaskReturn
0x2ff: Pop(2)
0x300: Return(); Pop(0)

0x301: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x302: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x303: Pop(0)
0x304: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x305: Pop(0)
0x306: Push(CvectorIndex(Stack[-8], 1))
0x307: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x308: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x309: @ GetPosition(Stack[-7])
0x30a: Pop(0)
0x30b: @ GetEyesHeight(Stack[-9])
0x30c: Pop(0)
0x30d: Push(CvectorIndex(Stack[-7], 1))
0x30e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x30f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x310: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x311: Push(CvectorIndex(Stack[-6], 1))
0x312: Stack[-1] = (int) 0
0x313: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x314: Pop(0); Push(Stack[-6] | Stack[-6]);
0x315: Pop(1); Push(Sqrt(Stack[-1]))
0x316: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x317: Stack[-5] = -Stack[-6]; Pop(0);
0x318: Pop(0); Push(Stack[-6] * Stack[-19]);
0x319: PushEmpty(cvector, cvector)
0x31a: Push([0.0, 1.0, 0.0])
0x31b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x31c: Call2 0x36a

0x31d: Pop(1)
0x31e: Push((int) 25)
0x31f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x320: Pop(2); Push(Stack[-2] + Stack[-1]);
0x321: Push([0.0, 10.0, 0.0])
0x322: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x323: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x324: @ IsOverrideActive(Stack[-2])
0x325: Pop(0)
0x326: Push(Stack[-2])
0x327: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x328: Stack[-21] = (bool) 0
0x329: Return(); Pop(18)

0x32a: @ StopWorld()
0x32b: Pop(0)
0x32c: @ CameraTransit(Stack[-3], Stack[-5])
0x32d: Pop(0)
0x32e: Push(CvectorIndex(Stack[-4], 0))
0x32f: Push(CvectorIndex(Stack[-5], 2))
0x330: @ Rotate(Stack[-2], Stack[-1])
0x331: Pop(2)
0x332: PushEmpty(bool)
0x333: Call2 0x453

0x334: Pop(0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33f

0x337: Push("head") // @poff=182
0x338: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x339: Pop(1)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33c: Push("head") // @poff=182
0x33d: @ LookAsyncCamera(Stack[-1])
0x33e: Pop(1)
0x33f: @ CameraWaitForPlayFinish()
0x340: Pop(0)
0x341: @ ResumeWorld()
0x342: Pop(0)
0x343: Stack[-21] = (bool) 1
0x344: Return(); Pop(18)

0x345: PushEmpty(bool, bool)
0x346: @ CameraSwitchToNormal()
0x347: Pop(0)
0x348: PushEmpty(bool)
0x349: Call2 0x453

0x34a: Pop(0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x355

0x34d: Push("head") // @poff=182
0x34e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34f: Pop(1)
0x350: Push(Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x352: Push("head") // @poff=182
0x353: @ UnlookAsync(Stack[-1])
0x354: Pop(1)
0x355: Return(); Pop(2)

0x356: PushEmpty(float, float, float, float)
0x357: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x358: Pop(0)
0x359: Push((bool) 0)
0x35a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x35b: Pop(1)
0x35c: Return(); Pop(4)

0x35d: PushEmpty(float, float, float, float)
0x35e: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x35f: Pop(0)
0x360: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x361: Pop(0)
0x362: Return(); Pop(4)

0x363: PushEmpty(bool)
0x364: Call2 0x453

0x365: Pop(0)
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: @ lshStopSpeech()
0x368: Pop(0)
0x369: Return(); Pop(0)

0x36a: PushEmpty(float, float)
0x36b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x36c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x36d: Push((float)9.999999974752427e-07)
0x36e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-4] = [0.0, 0.0, 0.0]
0x371: Return(); Pop(2)

0x372: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x373: Return(); Pop(2)

0x374: PushEmpty(int, int)
0x375: @ GetVariable(Stack[-3], Stack[-1])
0x376: Pop(0)
0x377: Stack[-1] = Stack[-4]
0x378: Return(); Pop(2)

0x379: PushEmpty(object, object)
0x37a: @ CreateIntVector(Stack[-1])
0x37b: Pop(0)
0x37c: @@ add(Stack[-4]); Obj=1 // @poff=192
0x37d: Pop(0)
0x37e: @@ add(Stack[-3]); Obj=1 // @poff=192
0x37f: Pop(0)
0x380: Push((int) 3)
0x381: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x382: Pop(1)
0x383: Return(); Pop(2)

0x384: Stack[-1] = 0
0x385: PushEmpty(int, int, bool, int, int, bool)
0x386: @@ GetItemID(Stack[-3]); Obj=8 // @poff=196
0x387: Pop(0)
0x388: Push("Category") // @poff=206
0x389: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x38a: Pop(1)
0x38b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=224
0x38c: Pop(0)
0x38d: Pop(0); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38f: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=232
0x390: Pop(0)
0x391: GOTO 0x397

0x392: PushEmpty(int, int)
0x393: Stack[-5] = Stack[-2]
0x394: Stack[-9] = Stack[-1]
0x395: Call2 0x379

0x396: Pop(2)
0x397: Return(); Pop(6)

0x398: PushEmpty(object, object)
0x399: @ CreateInvItem(Stack[-1])
0x39a: Pop(0)
0x39b: @@ SetItemName(Stack[-4]); Obj=1 // @poff=242
0x39c: Pop(0)
0x39d: PushEmpty(object, object, int)
0x39e: Stack[-8] = Stack[-3]
0x39f: Stack[-4] = Stack[-2]
0x3a0: Stack[-6] = Stack[-1]
0x3a1: Call2 0x385

0x3a2: Pop(3)
0x3a3: Return(); Pop(2)

0x3a4: Stack[-1] = 0
0x3a5: PushEmpty(object, object)
0x3a6: @ FindActor(Stack[-1], Stack[-4])
0x3a7: Pop(0)
0x3a8: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-5] = (bool) 0
0x3ab: Return(); Pop(2)

0x3ac: @ Trigger(Stack[-1], Stack[-3])
0x3ad: Pop(0)
0x3ae: Stack[-5] = (bool) 1
0x3af: Return(); Pop(2)

0x3b0: Stack[-1] = 0
0x3b1: PushEmpty()
0x3b2: Push("playsound") // @poff=254
0x3b3: Push("giveitem") // @poff=274
0x3b4: @ TriggerWorld(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: Push("dreport is given") // @poff=292
0x3b9: @ Trace(Stack[-1])
0x3ba: Pop(1)
0x3bb: PushEmpty(object, string, int)
0x3bc: Stack[-5] = Stack[-3]
0x3bd: Stack[-2] = "d7q01_dreport" // @poff=326
0x3be: Stack[-1] = (int) 1
0x3bf: Call2 0x398

0x3c0: Pop(3)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Push("ood7DBirdmask1") // @poff=354
0x3c4: Push((int) 1)
0x3c5: @ SetVariable(Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: Return(); Pop(0)

0x3c8: PushEmpty()
0x3c9: PushEmpty(bool, string, string)
0x3ca: Stack[-2] = "quest_d7_01" // @poff=384
0x3cb: Stack[-1] = "kill_player" // @poff=408
0x3cc: Call2 0x3a5

0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: PushEmpty(bool, object)
0x3d1: Stack[-3] = Stack[-1]
0x3d2: Call2 0x407

0x3d3: Pop(1)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-2] = (bool) 1
0x3d6: Return(); Pop(0)

0x3d7: Stack[-2] = (bool) 0
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty()
0x3da: PushEmpty(int, string)
0x3db: Stack[-1] = "d7q01" // @poff=432
0x3dc: Call2 0x374

0x3dd: Pop(1)
0x3de: Push((int) 2)
0x3df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-2] = (bool) 1
0x3e2: Return(); Pop(0)

0x3e3: Stack[-2] = (bool) 0
0x3e4: Return(); Pop(0)

0x3e5: PushEmpty()
0x3e6: PushEmpty(int, string)
0x3e7: Stack[-1] = "d7q01" // @poff=432
0x3e8: Call2 0x374

0x3e9: Pop(1)
0x3ea: Push((int) 1)
0x3eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-2] = (bool) 1
0x3ee: Return(); Pop(0)

0x3ef: Stack[-2] = (bool) 0
0x3f0: Return(); Pop(0)

0x3f1: PushEmpty()
0x3f2: PushEmpty(bool, object)
0x3f3: Stack[-3] = Stack[-1]
0x3f4: Call2 0x40a

0x3f5: Pop(1)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: Stack[-2] = (bool) 1
0x3f8: Return(); Pop(0)

0x3f9: Stack[-2] = (bool) 0
0x3fa: Return(); Pop(0)

0x3fb: PushEmpty()
0x3fc: PushEmpty(int, string)
0x3fd: Stack[-1] = "ood7DBirdmask1" // @poff=354
0x3fe: Call2 0x374

0x3ff: Pop(1)
0x400: Push((int) 0)
0x401: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-2] = (bool) 1
0x404: Return(); Pop(0)

0x405: Stack[-2] = (bool) 0
0x406: Return(); Pop(0)

0x407: PushEmpty()
0x408: Stack[-2] = (bool) 0
0x409: Return(); Pop(0)

0x40a: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x40b: Push((int) 1)
0x40c: @@ GetItemCount(Stack[-11], Stack[-1]); Obj=22 // @poff=444
0x40d: Pop(1)
0x40e: Push("bird_mask") // @poff=457
0x40f: @ GetInvItemByName(Stack[-10], Stack[-1])
0x410: Pop(1)
0x411: Push("bird_balahon") // @poff=477
0x412: @ GetInvItemByName(Stack[-9], Stack[-1])
0x413: Pop(1)
0x414: Stack[-7] = (bool) 0
0x415: Stack[-6] = (bool) 0
0x416: Stack[-5] = (int) 0
0x417: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x418: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x419: Push((int) 1)
0x41a: @@ GetItem(Stack[-5], Stack[-6], Stack[-1]); Obj=22 // @poff=503
0x41b: Pop(1)
0x41c: @@ GetItemID(Stack[-3]); Obj=4 // @poff=196
0x41d: Pop(0)
0x41e: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x41f: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x420: Push((int) 1)
0x421: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1]); Obj=22 // @poff=511
0x422: Pop(1)
0x423: Push(Stack[-2])
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-7] = (bool) 1
0x426: GOTO 0x42f

0x427: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x428: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x429: Push((int) 1)
0x42a: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1]); Obj=22 // @poff=511
0x42b: Pop(1)
0x42c: Push(Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Stack[-6] = (bool) 1
0x42f: Stack[-4] = 0
0x430: Push((int) 1)
0x431: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x432: GOTO 0x417

0x433: Stack[-22] = (bool) 0
0x434: Push(Stack[-7])
0x435: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x436: Push(Stack[-6])
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: Stack[-22] = (bool) 1
0x439: Return(); Pop(20)

0x43a: PushEmpty(int, int)
0x43b: Push("branch") // @poff=526
0x43c: @ GetVariable(Stack[-1], Stack[-2])
0x43d: Pop(1)
0x43e: Push((int) 0)
0x43f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x441: Stack[-3] = (int) 1
0x442: Return(); Pop(2)

0x443: GOTO 0x449

0x444: Push((int) 1)
0x445: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x447: Stack[-3] = (int) 2
0x448: Return(); Pop(2)

0x449: Stack[-3] = (int) 3
0x44a: Return(); Pop(2)

0x44b: Stack[-1] = (int) 515571
0x44c: Return(); Pop(0)

0x44d: Stack[-1] = (int) 504029
0x44e: Return(); Pop(0)

0x44f: Stack[-1] = "ui/NPC_bmask.png" // @poff=540
0x450: Return(); Pop(0)

0x451: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=574
0x452: Return(); Pop(0)

0x453: Stack[-1] = (bool) 0
0x454: Return(); Pop(0)

