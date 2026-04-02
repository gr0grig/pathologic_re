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
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:oob9Danko1
	W:oob9Danko2
	W:b9q01
	W:b9q01DankoAmmo
	W:oob9Danko3
	W:oob9Danko4
	W:map_chertez_state
	W:map_chertez_force
	W:pt_map_aglaja
	A:ShowMap
	W:b9q01DankoFree
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
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f0062003900440061006e006b006f00310000006f006f0062003900440061006e006b006f003200000062003900710030003100000062003900710030003100440061006e006b006f0041006d006d006f0000006f006f0062003900440061006e006b006f00330000006f006f0062003900440061006e006b006f00340000006d00610070005f006300680065007200740065007a005f007300740061007400650000006d00610070005f006300680065007200740065007a005f0066006f007200630065000000700074005f006d00610070005f00610067006c0061006a006100000053686f774d61700062003900710030003100440061006e006b006f0046007200650065000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x2d7
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfe Vars = (int, int)
	GTASK_3  Params = 0
		EVENT_6 Op = 0x2eb Vars = ()
		EVENT_0 Op = 0x2f1 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x314

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
0x11: Call2 0x41b

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x36e

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x319

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x538

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x536

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x53a

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x53c

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x525

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
0x55: Call2 0x35d

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
0x63: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x481

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x48d

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x72: PushEmpty(object, object)
0x73: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75: Call2 0x439

0x76: Pop(2)
0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral" // @poff=89
0x79: Call2 0xe8

0x7a: Pop(1)
0x7b: Push((int) 521581)
0x7c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7d: Pop(1)
0x7e: @@@ ClearReplies(); Obj=0 // @poff=116
0x7f: Pop(0)
0x80: Push((int) 531554)
0x81: Push((int) 32918)
0x82: Push((int) 32917)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: GOTO 0xca

0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x481

0x89: Pop(1)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x8c: PushEmpty(string)
0x8d: Stack[-1] = "Neutral" // @poff=89
0x8e: Call2 0xe8

0x8f: Pop(1)
0x90: Push((int) 521577)
0x91: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x92: Pop(1)
0x93: @@@ ClearReplies(); Obj=0 // @poff=116
0x94: Pop(0)
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x499

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 521578)
0x9b: Push((int) 22740)
0x9c: Push((int) 22739)
0x9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9e: Pop(3)
0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x4b1

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: Push((int) 522381)
0xa5: Push((int) 23547)
0xa6: Push((int) 23546)
0xa7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa8: Pop(3)
0xa9: Push((int) 521586)
0xaa: Push((int) -1)
0xab: Push((int) 22747)
0xac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xad: Pop(3)
0xae: GOTO 0xca

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral" // @poff=89
0xb1: Call2 0xe8

0xb2: Pop(1)
0xb3: Push((int) 521601)
0xb4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb5: Pop(1)
0xb6: @@@ ClearReplies(); Obj=0 // @poff=116
0xb7: Pop(0)
0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba: Call2 0x4a5

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: Push((int) 522385)
0xbe: Push((int) 23551)
0xbf: Push((int) 23550)
0xc0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc1: Pop(3)
0xc2: Push((int) 521602)
0xc3: Push((int) -1)
0xc4: Push((int) 22767)
0xc5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc6: Pop(3)
0xc7: GOTO 0xca

0xc8: Return(); Pop(0)

0xc9: GOTO 0x62

0xca: PushEmpty(bool)
0xcb: Call2 0x53e

0xcc: Pop(0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xce: @ lshWaitForAnimEnd()
0xcf: Pop(0)
0xd0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: GOTO 0xd8

0xd3: PushEmpty(string)
0xd4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd5: Call2 0x3f8

0xd6: Pop(1)
0xd7: GOTO 0xce

0xd8: GOTO 0xe7

0xd9: Push("all") // @poff=138
0xda: Push("idle") // @poff=146
0xdb: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc: Pop(2)
0xdd: @ WaitForAnimEnd()
0xde: Pop(0)
0xdf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe0: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe1: GOTO 0xe7

0xe2: Push("all") // @poff=138
0xe3: Push("idle") // @poff=146
0xe4: @ PlayAnimation(Stack[-2], Stack[-1])
0xe5: Pop(2)
0xe6: GOTO 0xdd

0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: PushEmpty(bool)
0xea: Call2 0x53e

0xeb: Pop(0)
0xec: Pop(1); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: Return(); Pop(0)

0xef: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: Return(); Pop(0)

0xf2: PushEmpty(string, bool)
0xf3: Stack[-3] = Stack[-2]
0xf4: Push("") // @poff=102
0xf5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: Stack[-1] = (bool) 0
0xf8: GOTO 0xfa

0xf9: Stack[-1] = (bool) 1
0xfa: Call2 0x3ff

0xfb: Pop(2)
0xfc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfd: Return(); Pop(0)

0xfe: PushEmpty()
0xff: Push((int) 1)
0x100: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x101: PushEmpty()
0x102: Call2 0x414

0x103: Pop(0)
0x104: Push((int) 22745)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x445

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x460

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x471

0x115: Pop(2)
0x116: Push((int) 23541)
0x117: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x445

0x11d: Pop(2)
0x11e: PushEmpty(object, object)
0x11f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call2 0x460

0x122: Pop(2)
0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x471

0x127: Pop(2)
0x128: Push((int) 22739)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(object, object)
0x12c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Call2 0x43f

0x12f: Pop(2)
0x130: Push((int) 22741)
0x131: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x44e

0x137: Pop(2)
0x138: Push((int) 23549)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x44e

0x13f: Pop(2)
0x140: Push((int) 23546)
0x141: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(object, object)
0x144: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call2 0x45a

0x147: Pop(2)
0x148: Push((int) 23550)
0x149: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: PushEmpty(object, object)
0x14c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14e: Call2 0x454

0x14f: Pop(2)
0x150: Push((int) 22742)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 0
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x481

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x48d

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164: Call2 0x439

0x165: Pop(2)
0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral" // @poff=89
0x168: Call2 0xe8

0x169: Pop(1)
0x16a: Push((int) 521581)
0x16b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16c: Pop(1)
0x16d: @@@ ClearReplies(); Obj=0 // @poff=116
0x16e: Pop(0)
0x16f: Push((int) 531554)
0x170: Push((int) 32918)
0x171: Push((int) 32917)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0x481

0x178: Pop(1)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral" // @poff=89
0x17d: Call2 0xe8

0x17e: Pop(1)
0x17f: Push((int) 521577)
0x180: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x181: Pop(1)
0x182: @@@ ClearReplies(); Obj=0 // @poff=116
0x183: Pop(0)
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x499

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: Push((int) 521578)
0x18a: Push((int) 22740)
0x18b: Push((int) 22739)
0x18c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18d: Pop(3)
0x18e: PushEmpty(bool, object)
0x18f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x190: Call2 0x4b1

0x191: Pop(1)
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: Push((int) 522381)
0x194: Push((int) 23547)
0x195: Push((int) 23546)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Push((int) 521586)
0x199: Push((int) -1)
0x19a: Push((int) 22747)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: PushEmpty(string)
0x19f: Stack[-1] = "Neutral" // @poff=89
0x1a0: Call2 0xe8

0x1a1: Pop(1)
0x1a2: Push((int) 521601)
0x1a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a4: Pop(1)
0x1a5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a6: Pop(0)
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call2 0x4a5

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: Push((int) 522385)
0x1ad: Push((int) 23551)
0x1ae: Push((int) 23550)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b0: Pop(3)
0x1b1: Push((int) 521602)
0x1b2: Push((int) -1)
0x1b3: Push((int) 22767)
0x1b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b5: Pop(3)
0x1b6: Return(); Pop(0)

0x1b7: Push((int) 23551)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0xe8

0x1bd: Pop(1)
0x1be: Push((int) 522386)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 522387)
0x1c4: Push((int) 23553)
0x1c5: Push((int) 23552)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 23553)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Neutral" // @poff=89
0x1ce: Call2 0xe8

0x1cf: Pop(1)
0x1d0: Push((int) 522388)
0x1d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d2: Pop(1)
0x1d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d4: Pop(0)
0x1d5: Push((int) 522389)
0x1d6: Push((int) -1)
0x1d7: Push((int) 23554)
0x1d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d9: Pop(3)
0x1da: Return(); Pop(0)

0x1db: Push((int) 23547)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Neutral" // @poff=89
0x1e0: Call2 0xe8

0x1e1: Pop(1)
0x1e2: Push((int) 522382)
0x1e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e4: Pop(1)
0x1e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e6: Pop(0)
0x1e7: Push((int) 522383)
0x1e8: Push((int) -1)
0x1e9: Push((int) 23548)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 22740)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral" // @poff=89
0x1f2: Call2 0xe8

0x1f3: Pop(1)
0x1f4: Push((int) 521579)
0x1f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f6: Pop(1)
0x1f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f8: Pop(0)
0x1f9: Push((int) 522377)
0x1fa: Push((int) 23543)
0x1fb: Push((int) 23542)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 23543)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral" // @poff=89
0x204: Call2 0xe8

0x205: Pop(1)
0x206: Push((int) 522378)
0x207: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x208: Pop(1)
0x209: @@@ ClearReplies(); Obj=0 // @poff=116
0x20a: Pop(0)
0x20b: Push((int) 521580)
0x20c: Push((int) -1)
0x20d: Push((int) 22741)
0x20e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20f: Pop(3)
0x210: Push((int) 522379)
0x211: Push((int) 23545)
0x212: Push((int) 23544)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 23545)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral" // @poff=89
0x21b: Call2 0xe8

0x21c: Pop(1)
0x21d: Push((int) 522380)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=116
0x221: Pop(0)
0x222: Push((int) 522384)
0x223: Push((int) -1)
0x224: Push((int) 23549)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 32918)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral" // @poff=89
0x22d: Call2 0xe8

0x22e: Pop(1)
0x22f: Push((int) 531555)
0x230: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x231: Pop(1)
0x232: @@@ ClearReplies(); Obj=0 // @poff=116
0x233: Pop(0)
0x234: Push((int) 521582)
0x235: Push((int) 23526)
0x236: Push((int) 22743)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 23526)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral" // @poff=89
0x23f: Call2 0xe8

0x240: Pop(1)
0x241: Push((int) 522363)
0x242: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x243: Pop(1)
0x244: @@@ ClearReplies(); Obj=0 // @poff=116
0x245: Pop(0)
0x246: Push((int) 522364)
0x247: Push((int) 23528)
0x248: Push((int) 23527)
0x249: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24a: Pop(3)
0x24b: Push((int) 522369)
0x24c: Push((int) 23533)
0x24d: Push((int) 23532)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Push((int) 23533)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral" // @poff=89
0x256: Call2 0xe8

0x257: Pop(1)
0x258: Push((int) 522370)
0x259: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25a: Pop(1)
0x25b: @@@ ClearReplies(); Obj=0 // @poff=116
0x25c: Pop(0)
0x25d: Push((int) 522371)
0x25e: Push((int) 22744)
0x25f: Push((int) 23534)
0x260: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 23528)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral" // @poff=89
0x268: Call2 0xe8

0x269: Pop(1)
0x26a: Push((int) 522365)
0x26b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26c: Pop(1)
0x26d: @@@ ClearReplies(); Obj=0 // @poff=116
0x26e: Pop(0)
0x26f: Push((int) 522366)
0x270: Push((int) 23530)
0x271: Push((int) 23529)
0x272: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 23530)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral" // @poff=89
0x27a: Call2 0xe8

0x27b: Pop(1)
0x27c: Push((int) 522367)
0x27d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x27e: Pop(1)
0x27f: @@@ ClearReplies(); Obj=0 // @poff=116
0x280: Pop(0)
0x281: Push((int) 522368)
0x282: Push((int) 22744)
0x283: Push((int) 23531)
0x284: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x285: Pop(3)
0x286: Return(); Pop(0)

0x287: Push((int) 22744)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral" // @poff=89
0x28c: Call2 0xe8

0x28d: Pop(1)
0x28e: Push((int) 521583)
0x28f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x290: Pop(1)
0x291: @@@ ClearReplies(); Obj=0 // @poff=116
0x292: Pop(0)
0x293: Push((int) 522372)
0x294: Push((int) 23538)
0x295: Push((int) 23537)
0x296: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 23538)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral" // @poff=89
0x29e: Call2 0xe8

0x29f: Pop(1)
0x2a0: Push((int) 522373)
0x2a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a2: Pop(1)
0x2a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a4: Pop(0)
0x2a5: Push((int) 522374)
0x2a6: Push((int) 23540)
0x2a7: Push((int) 23539)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: Return(); Pop(0)

0x2ab: Push((int) 23540)
0x2ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral" // @poff=89
0x2b0: Call2 0xe8

0x2b1: Pop(1)
0x2b2: Push((int) 522375)
0x2b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b4: Pop(1)
0x2b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b6: Pop(0)
0x2b7: Push((int) 521584)
0x2b8: Push((int) -1)
0x2b9: Push((int) 22745)
0x2ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bb: Pop(3)
0x2bc: Push((int) 522376)
0x2bd: Push((int) -1)
0x2be: Push((int) 23541)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x53e

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: @ lshStopAnimation()
0x2c8: Pop(0)
0x2c9: GOTO 0x2cc

0x2ca: @ StopAnimation()
0x2cb: Pop(0)
0x2cc: Return(); Pop(0)

0x2cd: GOTO 0xff

0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: PushEmpty(int, object)
0x2d1: Stack[-3] = Stack[-1]
0x2d2: Push(-2, 1); TaskCall(1)
0x2d3: Call2 0xd

0x2d4: Pop(-2, 1); TaskReturn
0x2d5: Pop(2)
0x2d6: Return(); Pop(0)

0x2d7: PushEmpty(bool)
0x2d8: Call2 0x314

0x2d9: Pop(0)
0x2da: Pop(1); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2dc: PushEmpty()
0x2dd: Push(-0, 0); TaskCall(0)
0x2de: Call2 0x0

0x2df: Pop(-0, 0); TaskReturn
0x2e0: Pop(0)
0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral" // @poff=89
0x2e3: Call2 0x3f8

0x2e4: Pop(1)
0x2e5: @ lshWaitForAnimEnd()
0x2e6: Pop(0)
0x2e7: GOTO 0x2e1

0x2e8: @ Hold()
0x2e9: Pop(0)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty()
0x2ec: Push(-0, 0); TaskCall(0)
0x2ed: Call2 0x0

0x2ee: Pop(-0, 0); TaskReturn
0x2ef: Pop(0)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(bool, bool)
0x2f2: @ IsOverrideActive(Stack[-1])
0x2f3: Pop(0)
0x2f4: Pop(0); Push((bool) Stack[-1] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f6: EventDisable(0)
0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-5] = Stack[-1]
0x2f9: Call2 0x30b

0x2fa: Pop(2)
0x2fb: EventEnable(0)
0x2fc: PushEmpty(object)
0x2fd: Stack[-4] = Stack[-1]
0x2fe: Call2 0x2cf

0x2ff: Pop(1)
0x300: Return(); Pop(2)

0x301: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x302: @ GetPosition(Stack[-3])
0x303: Pop(0)
0x304: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x305: Push(CvectorIndex(Stack[-2], 0))
0x306: Push(CvectorIndex(Stack[-3], 2))
0x307: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x308: Pop(2)
0x309: Stack[-1] = Stack[-8]
0x30a: Return(); Pop(6)

0x30b: PushEmpty(cvector, cvector)
0x30c: @@ GetPosition(Stack[-1]); Obj=3 // @poff=156
0x30d: Pop(0)
0x30e: PushEmpty(bool, cvector)
0x30f: Stack[-3] = Stack[-1]
0x310: Call2 0x301

0x311: Stack[-2] = Stack[-6]
0x312: Pop(2)
0x313: Return(); Pop(2)

0x314: PushEmpty(bool, bool)
0x315: @ IsLoaded(Stack[-1])
0x316: Pop(0)
0x317: Stack[-1] = Stack[-3]
0x318: Return(); Pop(2)

0x319: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x31a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x31b: Pop(0)
0x31c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x31d: Pop(0)
0x31e: Push(CvectorIndex(Stack[-8], 1))
0x31f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x320: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x321: @ GetPosition(Stack[-7])
0x322: Pop(0)
0x323: @ GetEyesHeight(Stack[-9])
0x324: Pop(0)
0x325: Push(CvectorIndex(Stack[-7], 1))
0x326: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x327: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x328: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x329: Push(CvectorIndex(Stack[-6], 1))
0x32a: Stack[-1] = (int) 0
0x32b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x32c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x32d: Pop(1); Push(Sqrt(Stack[-1]))
0x32e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x32f: Stack[-5] = -Stack[-6]; Pop(0);
0x330: Pop(0); Push(Stack[-6] * Stack[-19]);
0x331: PushEmpty(cvector, cvector)
0x332: Push([0.0, 1.0, 0.0])
0x333: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x334: Call2 0x421

0x335: Pop(1)
0x336: Push((int) 25)
0x337: Pop(2); Push(Stack[-2] * Stack[-1]);
0x338: Pop(2); Push(Stack[-2] + Stack[-1]);
0x339: Push([0.0, 10.0, 0.0])
0x33a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x33b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x33c: @ IsOverrideActive(Stack[-2])
0x33d: Pop(0)
0x33e: Push(Stack[-2])
0x33f: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x340: Stack[-21] = (bool) 0
0x341: Return(); Pop(18)

0x342: @ StopWorld()
0x343: Pop(0)
0x344: @ CameraTransit(Stack[-3], Stack[-5])
0x345: Pop(0)
0x346: Push(CvectorIndex(Stack[-4], 0))
0x347: Push(CvectorIndex(Stack[-5], 2))
0x348: @ Rotate(Stack[-2], Stack[-1])
0x349: Pop(2)
0x34a: PushEmpty(bool)
0x34b: Call2 0x53e

0x34c: Pop(0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x357

0x34f: Push("head") // @poff=182
0x350: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x351: Pop(1)
0x352: Push(Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x354: Push("head") // @poff=182
0x355: @ LookAsyncCamera(Stack[-1])
0x356: Pop(1)
0x357: @ CameraWaitForPlayFinish()
0x358: Pop(0)
0x359: @ ResumeWorld()
0x35a: Pop(0)
0x35b: Stack[-21] = (bool) 1
0x35c: Return(); Pop(18)

0x35d: PushEmpty(bool, bool)
0x35e: @ CameraSwitchToNormal()
0x35f: Pop(0)
0x360: PushEmpty(bool)
0x361: Call2 0x53e

0x362: Pop(0)
0x363: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x364: GOTO 0x36d

0x365: Push("head") // @poff=182
0x366: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x367: Pop(1)
0x368: Push(Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36a: Push("head") // @poff=182
0x36b: @ UnlookAsync(Stack[-1])
0x36c: Pop(1)
0x36d: Return(); Pop(2)

0x36e: PushEmpty(int, int, int, int)
0x36f: Push("voice_common") // @poff=192
0x370: @ GetVariable(Stack[-1], Stack[-3])
0x371: Pop(1)
0x372: Push(Stack[-2])
0x373: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x374: PushEmpty(bool, object)
0x375: Stack[-7] = Stack[-1]
0x376: Call2 0x3a8

0x377: Pop(1)
0x378: Pop(1); Push((bool) Stack[-1] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37a: PushEmpty(bool, object)
0x37b: Stack[-7] = Stack[-1]
0x37c: Call2 0x3cd

0x37d: Pop(1)
0x37e: Pop(1); Push((bool) Stack[-1] == 0)
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-6] = (bool) 0
0x381: Return(); Pop(4)

0x382: Push((int) 2)
0x383: @ irand(Stack[-2], Stack[-1])
0x384: Pop(1)
0x385: Push(Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x387: Push("voice_common") // @poff=192
0x388: Push((int) 1)
0x389: Pop(1); Push(Stack[-4] + Stack[-1]);
0x38a: Push((int) 3)
0x38b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x38c: @ SetVariable(Stack[-2], Stack[-1])
0x38d: Pop(2)
0x38e: GOTO 0x393

0x38f: Push("voice_common") // @poff=192
0x390: Push((int) 0)
0x391: @ SetVariable(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: GOTO 0x3a6

0x394: PushEmpty(bool, object)
0x395: Stack[-7] = Stack[-1]
0x396: Call2 0x3cd

0x397: Pop(1)
0x398: Pop(1); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39a: PushEmpty(bool, object)
0x39b: Stack[-7] = Stack[-1]
0x39c: Call2 0x3a8

0x39d: Pop(1)
0x39e: Pop(1); Push((bool) Stack[-1] == 0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a0: Stack[-6] = (bool) 0
0x3a1: Return(); Pop(4)

0x3a2: Push("voice_common") // @poff=192
0x3a3: Push((int) 1)
0x3a4: @ SetVariable(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: Stack[-6] = (bool) 1
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a9: Stack[-5] = "c" // @poff=218
0x3aa: Stack[-4] = (int) 0
0x3ab: Push((int) 1)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3ad: Push((int) 1)
0x3ae: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x3b1: Pop(1)
0x3b2: Pop(0); Push((bool) Stack[-3] == 0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: GOTO 0x3b8

0x3b5: Push((int) 1)
0x3b6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b7: GOTO 0x3ab

0x3b8: Pop(0); Push((bool) Stack[-4] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-12] = (bool) 0
0x3bb: Return(); Pop(10)

0x3bc: Stack[-2] = (int) 0
0x3bd: Push((int) 1)
0x3be: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: @ irand(Stack[-2], Stack[-4])
0x3c1: Pop(0)
0x3c2: Push((int) 1)
0x3c3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x3c6: Pop(1)
0x3c7: PushEmpty(bool, string)
0x3c8: Stack[-3] = Stack[-1]
0x3c9: Call2 0x405

0x3ca: Stack[-2] = Stack[-14]
0x3cb: Pop(2)
0x3cc: Return(); Pop(10)

0x3cd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ce: Push("d") // @poff=188
0x3cf: PushEmpty(int)
0x3d0: Call2 0x430

0x3d1: Pop(0)
0x3d2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d3: Push("m") // @poff=246
0x3d4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3d5: Stack[-4] = (int) 0
0x3d6: Push((int) 1)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3d8: Push((int) 1)
0x3d9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3da: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3db: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x3dc: Pop(1)
0x3dd: Pop(0); Push((bool) Stack[-3] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: GOTO 0x3e3

0x3e0: Push((int) 1)
0x3e1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3e2: GOTO 0x3d6

0x3e3: Pop(0); Push((bool) Stack[-4] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: Stack[-12] = (bool) 0
0x3e6: Return(); Pop(10)

0x3e7: Stack[-2] = (int) 0
0x3e8: Push((int) 1)
0x3e9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: @ irand(Stack[-2], Stack[-4])
0x3ec: Pop(0)
0x3ed: Push((int) 1)
0x3ee: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f0: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x3f1: Pop(1)
0x3f2: PushEmpty(bool, string)
0x3f3: Stack[-3] = Stack[-1]
0x3f4: Call2 0x405

0x3f5: Stack[-2] = Stack[-14]
0x3f6: Pop(2)
0x3f7: Return(); Pop(10)

0x3f8: PushEmpty(float, float, float, float)
0x3f9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3fa: Pop(0)
0x3fb: Push((bool) 0)
0x3fc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: Return(); Pop(4)

0x3ff: PushEmpty(float, float, float, float)
0x400: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x401: Pop(0)
0x402: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x403: Pop(0)
0x404: Return(); Pop(4)

0x405: PushEmpty(bool, bool)
0x406: PushEmpty(bool)
0x407: Call2 0x53e

0x408: Pop(0)
0x409: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40a: @ lshHasSpeech(Stack[-1], Stack[-3])
0x40b: Pop(0)
0x40c: Push(Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40e: @ lshPlaySpeech(Stack[-3])
0x40f: Pop(0)
0x410: Stack[-4] = (bool) 1
0x411: Return(); Pop(2)

0x412: Stack[-4] = (bool) 0
0x413: Return(); Pop(2)

0x414: PushEmpty(bool)
0x415: Call2 0x53e

0x416: Pop(0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: @ lshStopSpeech()
0x419: Pop(0)
0x41a: Return(); Pop(0)

0x41b: PushEmpty(object, object)
0x41c: @ self(Stack[-1])
0x41d: Pop(0)
0x41e: Stack[-1] = Stack[-3]
0x41f: Return(); Pop(2)

0x420: Stack[-1] = 0
0x421: PushEmpty(float, float)
0x422: Pop(0); Push(Stack[-3] | Stack[-3]);
0x423: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x424: Push((float)9.999999974752427e-07)
0x425: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: Stack[-4] = [0.0, 0.0, 0.0]
0x428: Return(); Pop(2)

0x429: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42a: Return(); Pop(2)

0x42b: PushEmpty(int, int)
0x42c: @ GetVariable(Stack[-3], Stack[-1])
0x42d: Pop(0)
0x42e: Stack[-1] = Stack[-4]
0x42f: Return(); Pop(2)

0x430: PushEmpty(float, float)
0x431: @ GetGameTime(Stack[-1])
0x432: Pop(0)
0x433: Push((int) 1)
0x434: PushEmpty(int)
0x435: Push((int) 24)
0x436: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x437: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x438: Return(); Pop(2)

0x439: PushEmpty()
0x43a: Push("oob9Danko1") // @poff=250
0x43b: Push((int) 1)
0x43c: @ SetVariable(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: Return(); Pop(0)

0x43f: PushEmpty()
0x440: Push("oob9Danko2") // @poff=272
0x441: Push((int) 1)
0x442: @ SetVariable(Stack[-2], Stack[-1])
0x443: Pop(2)
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: Push("b9q01") // @poff=294
0x447: Push((int) 3)
0x448: @ SetVariable(Stack[-2], Stack[-1])
0x449: Pop(2)
0x44a: PushEmpty()
0x44b: Call2 0x4bd

0x44c: Pop(0)
0x44d: Return(); Pop(0)

0x44e: PushEmpty()
0x44f: Push("b9q01DankoAmmo") // @poff=306
0x450: Push((int) 1)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: Push("oob9Danko3") // @poff=336
0x456: Push((int) 1)
0x457: @ SetVariable(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: Push("oob9Danko4") // @poff=358
0x45c: Push((int) 1)
0x45d: @ SetVariable(Stack[-2], Stack[-1])
0x45e: Pop(2)
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: PushEmpty(int, string)
0x462: Stack[-1] = "map_chertez_state" // @poff=380
0x463: Call2 0x42b

0x464: Pop(1)
0x465: Push((int) 4)
0x466: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x468: Push("map_chertez_state") // @poff=380
0x469: Push((int) 4)
0x46a: @ SetVariable(Stack[-2], Stack[-1])
0x46b: Pop(2)
0x46c: Push("map_chertez_force") // @poff=416
0x46d: Push((int) 1)
0x46e: @ SetVariable(Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Return(); Pop(0)

0x471: PushEmpty()
0x472: PushEmpty(object, string, float)
0x473: PushEmpty(object)
0x474: Call2 0x4f3

0x475: Stack[-1] = Stack[-4]
0x476: Pop(1)
0x477: Stack[-2] = "pt_map_aglaja" // @poff=452
0x478: Stack[-1] = (int) -1
0x479: Call2 0x504

0x47a: Pop(3)
0x47b: PushEmpty(object)
0x47c: Call2 0x4f3

0x47d: Pop(0)
0x47e: @@ ShowMap(Stack[-1]); Obj=2 // @poff=480
0x47f: Pop(1)
0x480: Return(); Pop(0)

0x481: PushEmpty()
0x482: PushEmpty(int, string)
0x483: Stack[-1] = "b9q01DankoFree" // @poff=488
0x484: Call2 0x42b

0x485: Pop(1)
0x486: Push((int) 0)
0x487: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-2] = (bool) 1
0x48a: Return(); Pop(0)

0x48b: Stack[-2] = (bool) 0
0x48c: Return(); Pop(0)

0x48d: PushEmpty()
0x48e: PushEmpty(int, string)
0x48f: Stack[-1] = "oob9Danko1" // @poff=250
0x490: Call2 0x42b

0x491: Pop(1)
0x492: Push((int) 0)
0x493: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x495: Stack[-2] = (bool) 1
0x496: Return(); Pop(0)

0x497: Stack[-2] = (bool) 0
0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: PushEmpty(int, string)
0x49b: Stack[-1] = "oob9Danko2" // @poff=272
0x49c: Call2 0x42b

0x49d: Pop(1)
0x49e: Push((int) 0)
0x49f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-2] = (bool) 1
0x4a2: Return(); Pop(0)

0x4a3: Stack[-2] = (bool) 0
0x4a4: Return(); Pop(0)

0x4a5: PushEmpty()
0x4a6: PushEmpty(int, string)
0x4a7: Stack[-1] = "oob9Danko3" // @poff=336
0x4a8: Call2 0x42b

0x4a9: Pop(1)
0x4aa: Push((int) 0)
0x4ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-2] = (bool) 1
0x4ae: Return(); Pop(0)

0x4af: Stack[-2] = (bool) 0
0x4b0: Return(); Pop(0)

0x4b1: PushEmpty()
0x4b2: PushEmpty(int, string)
0x4b3: Stack[-1] = "oob9Danko4" // @poff=358
0x4b4: Call2 0x42b

0x4b5: Pop(1)
0x4b6: Push((int) 0)
0x4b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-2] = (bool) 1
0x4ba: Return(); Pop(0)

0x4bb: Stack[-2] = (bool) 0
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty(object, object)
0x4be: Push((int) 303)
0x4bf: Push((int) 1)
0x4c0: Push((int) 521618)
0x4c1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4c2: Pop(3)
0x4c3: PushEmpty(bool, object, int)
0x4c4: Stack[-4] = Stack[-2]
0x4c5: Stack[-1] = (int) 297
0x4c6: Call2 0x4d7

0x4c7: Pop(3)
0x4c8: Return(); Pop(2)

0x4c9: Stack[-1] = 0
0x4ca: PushEmpty(object, object)
0x4cb: @ GetDiaryRoot(Stack[-1])
0x4cc: Pop(0)
0x4cd: Pop(0); Push((bool) Stack[-1] == 0)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4cf: Push("Can't retrieve diary root") // @poff=518
0x4d0: @ Trace(Stack[-1])
0x4d1: Pop(1)
0x4d2: Stack[-3] = (bool) 0
0x4d3: Return(); Pop(2)

0x4d4: Stack[-1] = Stack[-3]
0x4d5: Return(); Pop(2)

0x4d6: Stack[-1] = 0
0x4d7: PushEmpty(object, object, int, object, object, int)
0x4d8: PushEmpty(object)
0x4d9: Call2 0x4ca

0x4da: Stack[-1] = Stack[-4]
0x4db: Pop(1)
0x4dc: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=570
0x4dd: Pop(0)
0x4de: Pop(0); Push((bool) Stack[-2] == 0)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e0: Push("Can't find diary parent with id: ") // @poff=575
0x4e1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4e2: @ Trace(Stack[-1])
0x4e3: Pop(1)
0x4e4: Stack[-9] = (bool) 0
0x4e5: Return(); Pop(6)

0x4e6: @@ AddChild(Stack[-8]); Obj=2 // @poff=643
0x4e7: Pop(0)
0x4e8: Push((int) 7)
0x4e9: @ SendWorldWndMessage(Stack[-1])
0x4ea: Pop(1)
0x4eb: @@ GetCategory(Stack[-1]); Obj=8 // @poff=652
0x4ec: Pop(0)
0x4ed: @ SetDiarySection(Stack[-1])
0x4ee: Pop(0)
0x4ef: Stack[-9] = (bool) 0
0x4f0: Return(); Pop(6)

0x4f1: Stack[-2] = 0
0x4f2: Stack[-3] = 0
0x4f3: PushEmpty(object, object, object, object)
0x4f4: @ GetMainOutdoorScene(Stack[-2])
0x4f5: Pop(0)
0x4f6: Pop(0); PushNull((bool) Stack[-2] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4f8: Push("Can't find main outdoor scene") // @poff=664
0x4f9: @ Trace(Stack[-1])
0x4fa: Pop(1)
0x4fb: Stack[-1] = 0
0x4fc: Stack[-1] = Stack[-5]
0x4fd: Return(); Pop(4)

0x4fe: @@ GetMap(Stack[-1]); Obj=2 // @poff=724
0x4ff: Pop(0)
0x500: Stack[-1] = Stack[-5]
0x501: Return(); Pop(4)

0x502: Stack[-1] = 0
0x503: Stack[-2] = 0
0x504: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x505: @ GetMainOutdoorScene(Stack[-2])
0x506: Pop(0)
0x507: Pop(0); PushNull((bool) Stack[-2] == 0)
0x508: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x509: Push("Can't find main outdoor scene") // @poff=664
0x50a: @ Trace(Stack[-1])
0x50b: Pop(1)
0x50c: Return(); Pop(8)

0x50d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=731
0x50e: Pop(0)
0x50f: Pop(0); Push((bool) Stack[-1] == 0)
0x510: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x511: Push("Warning: outdoor scene locator ") // @poff=742
0x512: Pop(1); Push(Stack[-1] + Stack[-11]);
0x513: Push(" doesnt exist") // @poff=806
0x514: Pop(2); Push(Stack[-2] + Stack[-1]);
0x515: @ Trace(Stack[-1])
0x516: Pop(1)
0x517: @@ GetMap(Stack[-11]); Obj=2 // @poff=724
0x518: Pop(0)
0x519: Pop(0); PushNull((bool) Stack[-11] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51b: Push("Can't find map") // @poff=834
0x51c: @ Trace(Stack[-1])
0x51d: Pop(1)
0x51e: Return(); Pop(8)

0x51f: Push(CvectorIndex(Stack[-4], 0))
0x520: Push(CvectorIndex(Stack[-5], 2))
0x521: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=864
0x522: Pop(2)
0x523: Return(); Pop(8)

0x524: Stack[-2] = 0
0x525: PushEmpty(int, int)
0x526: Push("branch") // @poff=877
0x527: @ GetVariable(Stack[-1], Stack[-2])
0x528: Pop(1)
0x529: Push((int) 0)
0x52a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52c: Stack[-3] = (int) 1
0x52d: Return(); Pop(2)

0x52e: GOTO 0x534

0x52f: Push((int) 1)
0x530: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x532: Stack[-3] = (int) 2
0x533: Return(); Pop(2)

0x534: Stack[-3] = (int) 3
0x535: Return(); Pop(2)

0x536: Stack[-1] = (int) 515573
0x537: Return(); Pop(0)

0x538: Stack[-1] = (int) 504032
0x539: Return(); Pop(0)

0x53a: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=891
0x53b: Return(); Pop(0)

0x53c: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=931
0x53d: Return(); Pop(0)

0x53e: Stack[-1] = (bool) 1
0x53f: Return(); Pop(0)

