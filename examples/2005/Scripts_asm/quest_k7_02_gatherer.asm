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
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	A:HasItem
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:k7q02
	W:white plet 10 is given
	W:grass_white_plet
	W:playsound
	W:giveitem
	W:Samopal
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d65004861734974656d00750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e00670000006b003700710030003200000077006800690074006500200070006c0065007400200031003000200069007300200067006900760065006e000000670072006100730073005f00770068006900740065005f0070006c0065007400000070006c006100790073006f0075006e006400000067006900760065006900740065006d000000530061006d006f00700061006c000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	Trace (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x125
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x12f Vars = (object)
		EVENT_7 Op = 0x164 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x1ec

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2a4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2a2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2a6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2a8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x32b

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
0x41: Call2 0x230

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
0x4f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x97

0x53: Pop(1)
0x54: Push((int) 526360)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x2de

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x2ea

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 526361)
0x68: Push((int) 30084)
0x69: Push((int) 27646)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: Push((int) 526364)
0x6d: Push((int) -1)
0x6e: Push((int) 27649)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: Push((int) 528671)
0x72: Push((int) -1)
0x73: Push((int) 30083)
0x74: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75: Pop(3)
0x76: GOTO 0x79

0x77: Return(); Pop(0)

0x78: GOTO 0x4e

0x79: PushEmpty(bool)
0x7a: Call2 0x2aa

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x241

0x85: Pop(1)
0x86: GOTO 0x7d

0x87: GOTO 0x96

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: @ WaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: Push("all") // @poff=138
0x92: Push("idle") // @poff=146
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x8c

0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: PushEmpty(bool)
0x99: Call2 0x2aa

0x9a: Pop(0)
0x9b: Pop(1); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(0)

0x9e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: PushEmpty(string, bool)
0xa2: Stack[-3] = Stack[-2]
0xa3: Push("") // @poff=102
0xa4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: Stack[-1] = (bool) 0
0xa7: GOTO 0xa9

0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x248

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x259

0xb2: Pop(0)
0xb3: Push((int) 27648)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x2c4

0xba: Pop(2)
0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x2cd

0xbf: Pop(2)
0xc0: PushEmpty(object, object)
0xc1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3: Call2 0x2d8

0xc4: Pop(2)
0xc5: Push((int) 27645)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc8: PushEmpty(string)
0xc9: Stack[-1] = "Neutral" // @poff=89
0xca: Call2 0x97

0xcb: Pop(1)
0xcc: Push((int) 526360)
0xcd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xce: Pop(1)
0xcf: @@@ ClearReplies(); Obj=0 // @poff=116
0xd0: Pop(0)
0xd1: PushEmpty(bool)
0xd2: Stack[-1] = (bool) 0
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x2de

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x2ea

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-1] = (bool) 1
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: Push((int) 526361)
0xe0: Push((int) 30084)
0xe1: Push((int) 27646)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Push((int) 526364)
0xe5: Push((int) -1)
0xe6: Push((int) 27649)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Push((int) 528671)
0xea: Push((int) -1)
0xeb: Push((int) 30083)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 30084)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0x97

0xf5: Pop(1)
0xf6: Push((int) 528672)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 528673)
0xfc: Push((int) 27647)
0xfd: Push((int) 30085)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Push((int) 528674)
0x101: Push((int) 27647)
0x102: Push((int) 30086)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 27647)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x97

0x10c: Pop(1)
0x10d: Push((int) 526362)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 526363)
0x113: Push((int) -1)
0x114: Push((int) 27648)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x119: PushEmpty(bool)
0x11a: Call2 0x2aa

0x11b: Pop(0)
0x11c: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11d: @ lshStopAnimation()
0x11e: Pop(0)
0x11f: GOTO 0x122

0x120: @ StopAnimation()
0x121: Pop(0)
0x122: Return(); Pop(0)

0x123: GOTO 0xae

0x124: Return(); Pop(0)

0x125: PushEmpty(float, float)
0x126: Stack[-2] = (int) 300
0x127: Stack[-1] = (int) 100
0x128: Call2 0x13a

0x129: Pop(2)
0x12a: Push((int) 3)
0x12b: @ Sleep(Stack[-1])
0x12c: Pop(1)
0x12d: GOTO 0x125

0x12e: Return(); Pop(0)

0x12f: PushEmpty()
0x130: PushEmpty()
0x131: Call2 0x17b

0x132: Pop(0)
0x133: PushEmpty(int, object)
0x134: Stack[-3] = Stack[-1]
0x135: Push(-2, 1); TaskCall(0)
0x136: Call2 0x0

0x137: Pop(-2, 1); TaskReturn
0x138: Pop(2)
0x139: Return(); Pop(0)

0x13a: PushEmpty()
0x13b: PushEmpty(bool)
0x13c: Call2 0x1e7

0x13d: Pop(0)
0x13e: Pop(1); Push((bool) Stack[-1] == 0)
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: Return(); Pop(0)

0x141: Push("player") // @poff=156
0x142: @ FindActor(Stack[-4]T, Stack[-1])
0x143: Pop(1)
0x144: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x145: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x146: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x147: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x148: Push((int) 10)
0x149: Push((float)1.0)
0x14a: @ SetTimer(Stack[-2], Stack[-1])
0x14b: Pop(2)
0x14c: PushEmpty()
0x14d: Call2 0x189

0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: Push((int) 10)
0x152: @ KillTimer(Stack[-1])
0x153: Pop(1)
0x154: Return(); Pop(0)

0x155: PushEmpty(float, float)
0x156: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x158: Stack[-3] = (bool) 0
0x159: Return(); Pop(2)

0x15a: PushEmpty(float, object)
0x15b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x15c: Call2 0x1df

0x15d: Pop(1)
0x15e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x15f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x160: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x161: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x162: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x163: Return(); Pop(2)

0x164: PushEmpty()
0x165: Push((int) 10)
0x166: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x168: PushEmpty(bool)
0x169: Call2 0x155

0x16a: Pop(0)
0x16b: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: PushEmpty(object)
0x16f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x170: Call2 0x24e

0x171: Pop(1)
0x172: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x173: GOTO 0x17a

0x174: Push( Stack[2 + Tasks[-1].StackPointer] )
0x175: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x176: Push("head") // @poff=170
0x177: @ UnlookAsync(Stack[-1])
0x178: Pop(1)
0x179: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: Call2 0x1da

0x17d: Pop(0)
0x17e: Push((int) 10)
0x17f: @ KillTimer(Stack[-1])
0x180: Pop(1)
0x181: Push( Stack[2 + Tasks[-1].StackPointer] )
0x182: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x183: Push("head") // @poff=170
0x184: @ UnlookAsync(Stack[-1])
0x185: Pop(1)
0x186: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x187: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x188: Return(); Pop(0)

0x189: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18a: @ WaitForAnimEnd()
0x18b: Pop(0)
0x18c: PushEmpty(bool)
0x18d: Call2 0x1e7

0x18e: Pop(0)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Return(); Pop(14)

0x192: PushEmpty(int)
0x193: Call2 0x2b3

0x194: Stack[-1] = Stack[-8]
0x195: Pop(1)
0x196: Stack[-6] = (int) 0
0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push((int) 5)
0x19a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: PushEmpty(bool)
0x19d: Call2 0x1e7

0x19e: Pop(0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1a2: Push((int) 3)
0x1a3: @ irand(Stack[-6], Stack[-1])
0x1a4: Pop(1)
0x1a5: Push((int) 0)
0x1a6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1a8: Push(Stack[-7])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1aa: @ irand(Stack[-4], Stack[-7])
0x1ab: Pop(0)
0x1ac: Push("all") // @poff=138
0x1ad: PushEmpty(string, int)
0x1ae: Stack[-7] = Stack[-1]
0x1af: Call2 0x2ac

0x1b0: Pop(1)
0x1b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: @ WaitForAnimEnd(Stack[-3])
0x1b4: Pop(0)
0x1b5: Pop(0); Push((bool) Stack[-3] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: GOTO 0x1d5

0x1b8: GOTO 0x1ca

0x1b9: Push((int) 1)
0x1ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1bc: Push((int) 4)
0x1bd: @ rand(Stack[-3], Stack[-1])
0x1be: Pop(1)
0x1bf: Push((int) 1)
0x1c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c1: @ Sleep(Stack[-1], Stack[-2])
0x1c2: Pop(1)
0x1c3: Pop(0); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: GOTO 0x1d5

0x1c6: GOTO 0x1ca

0x1c7: Push(Stack[-6])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: GOTO 0x1d5

0x1ca: PushEmpty(bool)
0x1cb: Call2 0x1d8

0x1cc: Pop(0)
0x1cd: Pop(1); Push((bool) Stack[-1] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: GOTO 0x1d5

0x1d0: @ ResetAAS()
0x1d1: Pop(0)
0x1d2: Push((int) 1)
0x1d3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d4: GOTO 0x197

0x1d5: @ ResetAAS()
0x1d6: Pop(0)
0x1d7: Return(); Pop(14)

0x1d8: Stack[-1] = (bool) 1
0x1d9: Return(); Pop(0)

0x1da: @ StopAnimation()
0x1db: Pop(0)
0x1dc: @ StopGroup0()
0x1dd: Pop(0)
0x1de: Return(); Pop(0)

0x1df: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1e0: @ GetPosition(Stack[-3])
0x1e1: Pop(0)
0x1e2: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x1e3: Pop(0)
0x1e4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1e5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1e6: Return(); Pop(6)

0x1e7: PushEmpty(bool, bool)
0x1e8: @ IsLoaded(Stack[-1])
0x1e9: Pop(0)
0x1ea: Stack[-1] = Stack[-3]
0x1eb: Return(); Pop(2)

0x1ec: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1ed: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x1ee: Pop(0)
0x1ef: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x1f0: Pop(0)
0x1f1: Push(CvectorIndex(Stack[-8], 1))
0x1f2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1f4: @ GetPosition(Stack[-7])
0x1f5: Pop(0)
0x1f6: @ GetEyesHeight(Stack[-9])
0x1f7: Pop(0)
0x1f8: Push(CvectorIndex(Stack[-7], 1))
0x1f9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1fa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1fb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1fc: Push(CvectorIndex(Stack[-6], 1))
0x1fd: Stack[-1] = (int) 0
0x1fe: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1ff: Pop(0); Push(Stack[-6] | Stack[-6]);
0x200: Pop(1); Push(Sqrt(Stack[-1]))
0x201: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x202: Stack[-5] = -Stack[-6]; Pop(0);
0x203: Pop(0); Push(Stack[-6] * Stack[-19]);
0x204: PushEmpty(cvector, cvector)
0x205: Push([0.0, 1.0, 0.0])
0x206: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x207: Call2 0x260

0x208: Pop(1)
0x209: Push((int) 25)
0x20a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20c: Push([0.0, 10.0, 0.0])
0x20d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x20e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x20f: @ IsOverrideActive(Stack[-2])
0x210: Pop(0)
0x211: Push(Stack[-2])
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-21] = (bool) 0
0x214: Return(); Pop(18)

0x215: @ StopWorld()
0x216: Pop(0)
0x217: @ CameraTransit(Stack[-3], Stack[-5])
0x218: Pop(0)
0x219: Push(CvectorIndex(Stack[-4], 0))
0x21a: Push(CvectorIndex(Stack[-5], 2))
0x21b: @ Rotate(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: PushEmpty(bool)
0x21e: Call2 0x2aa

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x22a

0x222: Push("head") // @poff=170
0x223: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x224: Pop(1)
0x225: Push(Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x227: Push("head") // @poff=170
0x228: @ LookAsyncCamera(Stack[-1])
0x229: Pop(1)
0x22a: @ CameraWaitForPlayFinish()
0x22b: Pop(0)
0x22c: @ ResumeWorld()
0x22d: Pop(0)
0x22e: Stack[-21] = (bool) 1
0x22f: Return(); Pop(18)

0x230: PushEmpty(bool, bool)
0x231: @ CameraSwitchToNormal()
0x232: Pop(0)
0x233: PushEmpty(bool)
0x234: Call2 0x2aa

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: GOTO 0x240

0x238: Push("head") // @poff=170
0x239: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x23a: Pop(1)
0x23b: Push(Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: Push("head") // @poff=170
0x23e: @ UnlookAsync(Stack[-1])
0x23f: Pop(1)
0x240: Return(); Pop(2)

0x241: PushEmpty(float, float, float, float)
0x242: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x243: Pop(0)
0x244: Push((bool) 0)
0x245: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x246: Pop(1)
0x247: Return(); Pop(4)

0x248: PushEmpty(float, float, float, float)
0x249: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x24a: Pop(0)
0x24b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x24c: Pop(0)
0x24d: Return(); Pop(4)

0x24e: PushEmpty(float, cvector, float, cvector)
0x24f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x250: Pop(0)
0x251: Stack[-1] = [0.0, 0.0, 0.0]
0x252: Push(CvectorIndex(Stack[-1], 1))
0x253: Stack[-3] = Stack[-1]
0x254: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x255: Push("head") // @poff=170
0x256: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x257: Pop(1)
0x258: Return(); Pop(4)

0x259: PushEmpty(bool)
0x25a: Call2 0x2aa

0x25b: Pop(0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: @ lshStopSpeech()
0x25e: Pop(0)
0x25f: Return(); Pop(0)

0x260: PushEmpty(float, float)
0x261: Pop(0); Push(Stack[-3] | Stack[-3]);
0x262: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x263: Push((float)9.999999974752427e-07)
0x264: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: Stack[-4] = [0.0, 0.0, 0.0]
0x267: Return(); Pop(2)

0x268: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x269: Return(); Pop(2)

0x26a: PushEmpty(int, int)
0x26b: @ GetVariable(Stack[-3], Stack[-1])
0x26c: Pop(0)
0x26d: Stack[-1] = Stack[-4]
0x26e: Return(); Pop(2)

0x26f: PushEmpty(object, object)
0x270: @ CreateIntVector(Stack[-1])
0x271: Pop(0)
0x272: @@ add(Stack[-4]); Obj=1 // @poff=206
0x273: Pop(0)
0x274: @@ add(Stack[-3]); Obj=1 // @poff=206
0x275: Pop(0)
0x276: Push((int) 3)
0x277: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x278: Pop(1)
0x279: Return(); Pop(2)

0x27a: Stack[-1] = 0
0x27b: PushEmpty(int, int, bool, int, int, bool)
0x27c: @@ GetItemID(Stack[-3]); Obj=8 // @poff=210
0x27d: Pop(0)
0x27e: Push("Category") // @poff=220
0x27f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x280: Pop(1)
0x281: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=238
0x282: Pop(0)
0x283: Pop(0); Push((bool) Stack[-1] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x285: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=246
0x286: Pop(0)
0x287: GOTO 0x28d

0x288: PushEmpty(int, int)
0x289: Stack[-5] = Stack[-2]
0x28a: Stack[-9] = Stack[-1]
0x28b: Call2 0x26f

0x28c: Pop(2)
0x28d: Return(); Pop(6)

0x28e: PushEmpty(object, object)
0x28f: @ CreateInvItem(Stack[-1])
0x290: Pop(0)
0x291: @@ SetItemName(Stack[-4]); Obj=1 // @poff=256
0x292: Pop(0)
0x293: PushEmpty(object, object, int)
0x294: Stack[-8] = Stack[-3]
0x295: Stack[-4] = Stack[-2]
0x296: Stack[-6] = Stack[-1]
0x297: Call2 0x27b

0x298: Pop(3)
0x299: Return(); Pop(2)

0x29a: Stack[-1] = 0
0x29b: PushEmpty(int, bool, int, bool)
0x29c: @ GetInvItemByName(Stack[-2], Stack[-5])
0x29d: Pop(0)
0x29e: @@ HasItem(Stack[-2], Stack[-1]); Obj=6 // @poff=268
0x29f: Pop(0)
0x2a0: Stack[-1] = Stack[-7]
0x2a1: Return(); Pop(4)

0x2a2: Stack[-1] = (int) 521048
0x2a3: Return(); Pop(0)

0x2a4: Stack[-1] = (int) 521047
0x2a5: Return(); Pop(0)

0x2a6: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=276
0x2a7: Return(); Pop(0)

0x2a8: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=316
0x2a9: Return(); Pop(0)

0x2aa: Stack[-1] = (bool) 0
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(string, string)
0x2ad: Stack[-1] = "idle" // @poff=146
0x2ae: Push(Stack[-3])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2b1: Stack[-1] = Stack[-4]
0x2b2: Return(); Pop(2)

0x2b3: PushEmpty(int, bool, int, bool)
0x2b4: Stack[-2] = (int) 0
0x2b5: Push("all") // @poff=138
0x2b6: PushEmpty(string, int)
0x2b7: Stack[-5] = Stack[-1]
0x2b8: Call2 0x2ac

0x2b9: Pop(1)
0x2ba: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: Pop(0); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c2

0x2bf: Push((int) 1)
0x2c0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c1: GOTO 0x2b5

0x2c2: Stack[-2] = Stack[-5]
0x2c3: Return(); Pop(4)

0x2c4: PushEmpty()
0x2c5: Push("k7q02") // @poff=360
0x2c6: Push((int) 2)
0x2c7: @ SetVariable(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: PushEmpty()
0x2ca: Call2 0x2f5

0x2cb: Pop(0)
0x2cc: Return(); Pop(0)

0x2cd: PushEmpty()
0x2ce: Push("white plet 10 is given") // @poff=372
0x2cf: @ Trace(Stack[-1])
0x2d0: Pop(1)
0x2d1: PushEmpty(object, string, int)
0x2d2: Stack[-5] = Stack[-3]
0x2d3: Stack[-2] = "grass_white_plet" // @poff=418
0x2d4: Stack[-1] = (int) 10
0x2d5: Call2 0x28e

0x2d6: Pop(3)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: Push("playsound") // @poff=452
0x2da: Push("giveitem") // @poff=472
0x2db: @ TriggerWorld(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: Return(); Pop(0)

0x2de: PushEmpty()
0x2df: PushEmpty(int, string)
0x2e0: Stack[-1] = "k7q02" // @poff=360
0x2e1: Call2 0x26a

0x2e2: Pop(1)
0x2e3: Push((int) 1)
0x2e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-2] = (bool) 1
0x2e7: Return(); Pop(0)

0x2e8: Stack[-2] = (bool) 0
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: PushEmpty(bool, object, string)
0x2ec: Stack[-4] = Stack[-2]
0x2ed: Stack[-1] = "Samopal" // @poff=490
0x2ee: Call2 0x29b

0x2ef: Pop(2)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-2] = (bool) 1
0x2f2: Return(); Pop(0)

0x2f3: Stack[-2] = (bool) 0
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(object, object)
0x2f6: Push((int) 432)
0x2f7: Push((int) 2)
0x2f8: Push((int) 526370)
0x2f9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: PushEmpty(bool, object, int)
0x2fc: Stack[-4] = Stack[-2]
0x2fd: Stack[-1] = (int) 430
0x2fe: Call2 0x30f

0x2ff: Pop(3)
0x300: Return(); Pop(2)

0x301: Stack[-1] = 0
0x302: PushEmpty(object, object)
0x303: @ GetDiaryRoot(Stack[-1])
0x304: Pop(0)
0x305: Pop(0); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: Push("Can't retrieve diary root") // @poff=506
0x308: @ Trace(Stack[-1])
0x309: Pop(1)
0x30a: Stack[-3] = (bool) 0
0x30b: Return(); Pop(2)

0x30c: Stack[-1] = Stack[-3]
0x30d: Return(); Pop(2)

0x30e: Stack[-1] = 0
0x30f: PushEmpty(object, object, int, object, object, int)
0x310: PushEmpty(object)
0x311: Call2 0x302

0x312: Stack[-1] = Stack[-4]
0x313: Pop(1)
0x314: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=558
0x315: Pop(0)
0x316: Pop(0); Push((bool) Stack[-2] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x318: Push("Can't find diary parent with id: ") // @poff=563
0x319: Pop(1); Push(Stack[-1] + Stack[-8]);
0x31a: @ Trace(Stack[-1])
0x31b: Pop(1)
0x31c: Stack[-9] = (bool) 0
0x31d: Return(); Pop(6)

0x31e: @@ AddChild(Stack[-8]); Obj=2 // @poff=631
0x31f: Pop(0)
0x320: Push((int) 7)
0x321: @ SendWorldWndMessage(Stack[-1])
0x322: Pop(1)
0x323: @@ GetCategory(Stack[-1]); Obj=8 // @poff=640
0x324: Pop(0)
0x325: @ SetDiarySection(Stack[-1])
0x326: Pop(0)
0x327: Stack[-9] = (bool) 0
0x328: Return(); Pop(6)

0x329: Stack[-2] = 0
0x32a: Stack[-3] = 0
0x32b: PushEmpty(int, int)
0x32c: Push("branch") // @poff=652
0x32d: @ GetVariable(Stack[-1], Stack[-2])
0x32e: Pop(1)
0x32f: Push((int) 0)
0x330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x332: Stack[-3] = (int) 1
0x333: Return(); Pop(2)

0x334: GOTO 0x33a

0x335: Push((int) 1)
0x336: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-3] = (int) 2
0x339: Return(); Pop(2)

0x33a: Stack[-3] = (int) 3
0x33b: Return(); Pop(2)

