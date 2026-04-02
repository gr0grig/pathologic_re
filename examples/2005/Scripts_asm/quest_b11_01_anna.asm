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
	W:ui/NPC_Anna.png
	W:ui/NPC_Anna_b.png
	W:b11q01KnowWhoKilled
	W:b11q01VictimChoosed
	W:b11q01KillAnna
	W:volonteers_danko
	W:kill
	W:anna
	W:Anna is dead
	W:oob11Anna1
	W:b11q01
	W:quest_b11_01
	W:open_well_exit
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0041006e006e0061002e0070006e0067000000750069002f004e00500043005f0041006e006e0061005f0062002e0070006e00670000006200310031007100300031004b006e006f007700570068006f004b0069006c006c00650064000000620031003100710030003100560069006300740069006d00430068006f006f0073006500640000006200310031007100300031004b0069006c006c0041006e006e006100000076006f006c006f006e00740065006500720073005f00640061006e006b006f0000006b0069006c006c00000061006e006e006100000041006e006e0061002000690073002000640065006100640000006f006f0062003100310041006e006e006100310000006200310031007100300031000000710075006500730074005f006200310031005f003000310000006f00700065006e005f00770065006c006c005f0065007800690074000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	FindActor (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x266
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfa Vars = (int, int)
	GTASK_3  Params = 0
		EVENT_6 Op = 0x27a Vars = ()
		EVENT_0 Op = 0x280 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2a3

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
0x11: Call2 0x3aa

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x2fd

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2a8

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x3e2

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x3e0

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x3e4

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x3e6

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x471

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
0x55: Call2 0x2ec

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
0x63: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x417

0x69: Pop(1)
0x6a: Pop(1); Push((bool) Stack[-1] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x423

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x73: PushEmpty(object, object)
0x74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x406

0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xe4

0x7b: Pop(1)
0x7c: Push((int) 522034)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 523328)
0x82: Push((int) 24543)
0x83: Push((int) 24542)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0xc6

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x417

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = "Neutral" // @poff=89
0x8f: Call2 0xe4

0x90: Pop(1)
0x91: Push((int) 522039)
0x92: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x93: Pop(1)
0x94: @@@ ClearReplies(); Obj=0 // @poff=116
0x95: Pop(0)
0x96: Push((int) 522040)
0x97: Push((int) -1)
0x98: Push((int) 23210)
0x99: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9a: Pop(3)
0x9b: Push((int) 522041)
0x9c: Push((int) -1)
0x9d: Push((int) 23211)
0x9e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9f: Pop(3)
0xa0: GOTO 0xc6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = "Neutral" // @poff=89
0xa3: Call2 0xe4

0xa4: Pop(1)
0xa5: Push((int) 522042)
0xa6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa7: Pop(1)
0xa8: @@@ ClearReplies(); Obj=0 // @poff=116
0xa9: Pop(0)
0xaa: Push((int) 522043)
0xab: Push((int) -1)
0xac: Push((int) 23213)
0xad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xae: Pop(3)
0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call2 0x42f

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: Push((int) 522602)
0xb5: Push((int) -1)
0xb6: Push((int) 23788)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x42f

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 522603)
0xbf: Push((int) -1)
0xc0: Push((int) 23789)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: GOTO 0xc6

0xc4: Return(); Pop(0)

0xc5: GOTO 0x62

0xc6: PushEmpty(bool)
0xc7: Call2 0x3e8

0xc8: Pop(0)
0xc9: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xca: @ lshWaitForAnimEnd()
0xcb: Pop(0)
0xcc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: GOTO 0xd4

0xcf: PushEmpty(string)
0xd0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd1: Call2 0x387

0xd2: Pop(1)
0xd3: GOTO 0xca

0xd4: GOTO 0xe3

0xd5: Push("all") // @poff=138
0xd6: Push("idle") // @poff=146
0xd7: @ PlayAnimation(Stack[-2], Stack[-1])
0xd8: Pop(2)
0xd9: @ WaitForAnimEnd()
0xda: Pop(0)
0xdb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: GOTO 0xe3

0xde: Push("all") // @poff=138
0xdf: Push("idle") // @poff=146
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: GOTO 0xd9

0xe3: Return(); Pop(0)

0xe4: PushEmpty()
0xe5: PushEmpty(bool)
0xe6: Call2 0x3e8

0xe7: Pop(0)
0xe8: Pop(1); Push((bool) Stack[-1] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Return(); Pop(0)

0xeb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: Return(); Pop(0)

0xee: PushEmpty(string, bool)
0xef: Stack[-3] = Stack[-2]
0xf0: Push("") // @poff=102
0xf1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf3: Stack[-1] = (bool) 0
0xf4: GOTO 0xf6

0xf5: Stack[-1] = (bool) 1
0xf6: Call2 0x38e

0xf7: Pop(2)
0xf8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: Push((int) 1)
0xfc: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0xfd: PushEmpty()
0xfe: Call2 0x3a3

0xff: Pop(0)
0x100: Push((int) 23207)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x3f3

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x40c

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x3ea

0x111: Pop(2)
0x112: Push((int) 23210)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x3f3

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x40c

0x11e: Pop(2)
0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x3ea

0x123: Pop(2)
0x124: Push((int) 23204)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x127: PushEmpty(bool)
0x128: Stack[-1] = (bool) 0
0x129: PushEmpty(bool, object)
0x12a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Call2 0x417

0x12c: Pop(1)
0x12d: Pop(1); Push((bool) Stack[-1] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x423

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 1
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x406

0x13a: Pop(2)
0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral" // @poff=89
0x13d: Call2 0xe4

0x13e: Pop(1)
0x13f: Push((int) 522034)
0x140: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x141: Pop(1)
0x142: @@@ ClearReplies(); Obj=0 // @poff=116
0x143: Pop(0)
0x144: Push((int) 523328)
0x145: Push((int) 24543)
0x146: Push((int) 24542)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0x417

0x14d: Pop(1)
0x14e: Pop(1); Push((bool) Stack[-1] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xe4

0x153: Pop(1)
0x154: Push((int) 522039)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 522040)
0x15a: Push((int) -1)
0x15b: Push((int) 23210)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 522041)
0x15f: Push((int) -1)
0x160: Push((int) 23211)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral" // @poff=89
0x166: Call2 0xe4

0x167: Pop(1)
0x168: Push((int) 522042)
0x169: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16a: Pop(1)
0x16b: @@@ ClearReplies(); Obj=0 // @poff=116
0x16c: Pop(0)
0x16d: Push((int) 522043)
0x16e: Push((int) -1)
0x16f: Push((int) 23213)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x42f

0x175: Pop(1)
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: Push((int) 522602)
0x178: Push((int) -1)
0x179: Push((int) 23788)
0x17a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17b: Pop(3)
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x42f

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Push((int) 522603)
0x182: Push((int) -1)
0x183: Push((int) 23789)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 24543)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral" // @poff=89
0x18c: Call2 0xe4

0x18d: Pop(1)
0x18e: Push((int) 523329)
0x18f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x190: Pop(1)
0x191: @@@ ClearReplies(); Obj=0 // @poff=116
0x192: Pop(0)
0x193: Push((int) 523323)
0x194: Push((int) 24540)
0x195: Push((int) 24537)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Push((int) 523322)
0x199: Push((int) 24538)
0x19a: Push((int) 24536)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Push((int) 522035)
0x19e: Push((int) 24546)
0x19f: Push((int) 23205)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 24546)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Neutral" // @poff=89
0x1a8: Call2 0xe4

0x1a9: Pop(1)
0x1aa: Push((int) 523332)
0x1ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ac: Pop(1)
0x1ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ae: Pop(0)
0x1af: Push((int) 523337)
0x1b0: Push((int) 24555)
0x1b1: Push((int) 24551)
0x1b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral" // @poff=89
0x1b7: Call2 0xe4

0x1b8: Pop(1)
0x1b9: Push((int) 523334)
0x1ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bb: Pop(1)
0x1bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bd: Pop(0)
0x1be: Push((int) 523335)
0x1bf: Push((int) 24550)
0x1c0: Push((int) 24549)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 24555)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral" // @poff=89
0x1c9: Call2 0xe4

0x1ca: Pop(1)
0x1cb: Push((int) 523340)
0x1cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cd: Pop(1)
0x1ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cf: Pop(0)
0x1d0: Push((int) 523341)
0x1d1: Push((int) 24550)
0x1d2: Push((int) 24556)
0x1d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 24538)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral" // @poff=89
0x1db: Call2 0xe4

0x1dc: Pop(1)
0x1dd: Push((int) 523324)
0x1de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1df: Pop(1)
0x1e0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e1: Pop(0)
0x1e2: Push((int) 523325)
0x1e3: Push((int) 23214)
0x1e4: Push((int) 24539)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 23214)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral" // @poff=89
0x1ed: Call2 0xe4

0x1ee: Pop(1)
0x1ef: Push((int) 522044)
0x1f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f1: Pop(1)
0x1f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f3: Pop(0)
0x1f4: Push((int) 522045)
0x1f5: Push((int) -1)
0x1f6: Push((int) 23215)
0x1f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f8: Pop(3)
0x1f9: Push((int) 523321)
0x1fa: Push((int) 24550)
0x1fb: Push((int) 24535)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 24550)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral" // @poff=89
0x204: Call2 0xe4

0x205: Pop(1)
0x206: Push((int) 523336)
0x207: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x208: Pop(1)
0x209: @@@ ClearReplies(); Obj=0 // @poff=116
0x20a: Pop(0)
0x20b: Push((int) 523338)
0x20c: Push((int) -1)
0x20d: Push((int) 24553)
0x20e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20f: Pop(3)
0x210: Push((int) 523339)
0x211: Push((int) -1)
0x212: Push((int) 24554)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 24540)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral" // @poff=89
0x21b: Call2 0xe4

0x21c: Pop(1)
0x21d: Push((int) 523326)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=116
0x221: Pop(0)
0x222: Push((int) 523327)
0x223: Push((int) 24544)
0x224: Push((int) 24541)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 24544)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral" // @poff=89
0x22d: Call2 0xe4

0x22e: Pop(1)
0x22f: Push((int) 523330)
0x230: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x231: Pop(1)
0x232: @@@ ClearReplies(); Obj=0 // @poff=116
0x233: Pop(0)
0x234: Push((int) 523331)
0x235: Push((int) 23206)
0x236: Push((int) 24545)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 23206)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral" // @poff=89
0x23f: Call2 0xe4

0x240: Pop(1)
0x241: Push((int) 522036)
0x242: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x243: Pop(1)
0x244: @@@ ClearReplies(); Obj=0 // @poff=116
0x245: Pop(0)
0x246: Push((int) 522037)
0x247: Push((int) -1)
0x248: Push((int) 23207)
0x249: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24a: Pop(3)
0x24b: Push((int) 522038)
0x24c: Push((int) -1)
0x24d: Push((int) 23208)
0x24e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x252: PushEmpty(bool)
0x253: Call2 0x3e8

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x256: @ lshStopAnimation()
0x257: Pop(0)
0x258: GOTO 0x25b

0x259: @ StopAnimation()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: GOTO 0xfb

0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: PushEmpty(int, object)
0x260: Stack[-3] = Stack[-1]
0x261: Push(-2, 1); TaskCall(1)
0x262: Call2 0xd

0x263: Pop(-2, 1); TaskReturn
0x264: Pop(2)
0x265: Return(); Pop(0)

0x266: PushEmpty(bool)
0x267: Call2 0x2a3

0x268: Pop(0)
0x269: Pop(1); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: PushEmpty()
0x26c: Push(-0, 0); TaskCall(0)
0x26d: Call2 0x0

0x26e: Pop(-0, 0); TaskReturn
0x26f: Pop(0)
0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral" // @poff=89
0x272: Call2 0x387

0x273: Pop(1)
0x274: @ lshWaitForAnimEnd()
0x275: Pop(0)
0x276: GOTO 0x270

0x277: @ Hold()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: PushEmpty()
0x27b: Push(-0, 0); TaskCall(0)
0x27c: Call2 0x0

0x27d: Pop(-0, 0); TaskReturn
0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: PushEmpty(bool, bool)
0x281: @ IsOverrideActive(Stack[-1])
0x282: Pop(0)
0x283: Pop(0); Push((bool) Stack[-1] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x285: EventDisable(0)
0x286: PushEmpty(bool, object)
0x287: Stack[-5] = Stack[-1]
0x288: Call2 0x29a

0x289: Pop(2)
0x28a: EventEnable(0)
0x28b: PushEmpty(object)
0x28c: Stack[-4] = Stack[-1]
0x28d: Call2 0x25e

0x28e: Pop(1)
0x28f: Return(); Pop(2)

0x290: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x291: @ GetPosition(Stack[-3])
0x292: Pop(0)
0x293: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x294: Push(CvectorIndex(Stack[-2], 0))
0x295: Push(CvectorIndex(Stack[-3], 2))
0x296: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x297: Pop(2)
0x298: Stack[-1] = Stack[-8]
0x299: Return(); Pop(6)

0x29a: PushEmpty(cvector, cvector)
0x29b: @@ GetPosition(Stack[-1]); Obj=3 // @poff=156
0x29c: Pop(0)
0x29d: PushEmpty(bool, cvector)
0x29e: Stack[-3] = Stack[-1]
0x29f: Call2 0x290

0x2a0: Stack[-2] = Stack[-6]
0x2a1: Pop(2)
0x2a2: Return(); Pop(2)

0x2a3: PushEmpty(bool, bool)
0x2a4: @ IsLoaded(Stack[-1])
0x2a5: Pop(0)
0x2a6: Stack[-1] = Stack[-3]
0x2a7: Return(); Pop(2)

0x2a8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a9: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x2aa: Pop(0)
0x2ab: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x2ac: Pop(0)
0x2ad: Push(CvectorIndex(Stack[-8], 1))
0x2ae: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2af: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b0: @ GetPosition(Stack[-7])
0x2b1: Pop(0)
0x2b2: @ GetEyesHeight(Stack[-9])
0x2b3: Pop(0)
0x2b4: Push(CvectorIndex(Stack[-7], 1))
0x2b5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b8: Push(CvectorIndex(Stack[-6], 1))
0x2b9: Stack[-1] = (int) 0
0x2ba: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2bb: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2bc: Pop(1); Push(Sqrt(Stack[-1]))
0x2bd: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2be: Stack[-5] = -Stack[-6]; Pop(0);
0x2bf: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c0: PushEmpty(cvector, cvector)
0x2c1: Push([0.0, 1.0, 0.0])
0x2c2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c3: Call2 0x3b0

0x2c4: Pop(1)
0x2c5: Push((int) 25)
0x2c6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c8: Push([0.0, 10.0, 0.0])
0x2c9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ca: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2cb: @ IsOverrideActive(Stack[-2])
0x2cc: Pop(0)
0x2cd: Push(Stack[-2])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-21] = (bool) 0
0x2d0: Return(); Pop(18)

0x2d1: @ StopWorld()
0x2d2: Pop(0)
0x2d3: @ CameraTransit(Stack[-3], Stack[-5])
0x2d4: Pop(0)
0x2d5: Push(CvectorIndex(Stack[-4], 0))
0x2d6: Push(CvectorIndex(Stack[-5], 2))
0x2d7: @ Rotate(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: PushEmpty(bool)
0x2da: Call2 0x3e8

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2e6

0x2de: Push("head") // @poff=182
0x2df: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e0: Pop(1)
0x2e1: Push(Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e3: Push("head") // @poff=182
0x2e4: @ LookAsyncCamera(Stack[-1])
0x2e5: Pop(1)
0x2e6: @ CameraWaitForPlayFinish()
0x2e7: Pop(0)
0x2e8: @ ResumeWorld()
0x2e9: Pop(0)
0x2ea: Stack[-21] = (bool) 1
0x2eb: Return(); Pop(18)

0x2ec: PushEmpty(bool, bool)
0x2ed: @ CameraSwitchToNormal()
0x2ee: Pop(0)
0x2ef: PushEmpty(bool)
0x2f0: Call2 0x3e8

0x2f1: Pop(0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x2fc

0x2f4: Push("head") // @poff=182
0x2f5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f6: Pop(1)
0x2f7: Push(Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f9: Push("head") // @poff=182
0x2fa: @ UnlookAsync(Stack[-1])
0x2fb: Pop(1)
0x2fc: Return(); Pop(2)

0x2fd: PushEmpty(int, int, int, int)
0x2fe: Push("voice_common") // @poff=192
0x2ff: @ GetVariable(Stack[-1], Stack[-3])
0x300: Pop(1)
0x301: Push(Stack[-2])
0x302: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x303: PushEmpty(bool, object)
0x304: Stack[-7] = Stack[-1]
0x305: Call2 0x337

0x306: Pop(1)
0x307: Pop(1); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x309: PushEmpty(bool, object)
0x30a: Stack[-7] = Stack[-1]
0x30b: Call2 0x35c

0x30c: Pop(1)
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-6] = (bool) 0
0x310: Return(); Pop(4)

0x311: Push((int) 2)
0x312: @ irand(Stack[-2], Stack[-1])
0x313: Pop(1)
0x314: Push(Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x316: Push("voice_common") // @poff=192
0x317: Push((int) 1)
0x318: Pop(1); Push(Stack[-4] + Stack[-1]);
0x319: Push((int) 3)
0x31a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x31b: @ SetVariable(Stack[-2], Stack[-1])
0x31c: Pop(2)
0x31d: GOTO 0x322

0x31e: Push("voice_common") // @poff=192
0x31f: Push((int) 0)
0x320: @ SetVariable(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: GOTO 0x335

0x323: PushEmpty(bool, object)
0x324: Stack[-7] = Stack[-1]
0x325: Call2 0x35c

0x326: Pop(1)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x329: PushEmpty(bool, object)
0x32a: Stack[-7] = Stack[-1]
0x32b: Call2 0x337

0x32c: Pop(1)
0x32d: Pop(1); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-6] = (bool) 0
0x330: Return(); Pop(4)

0x331: Push("voice_common") // @poff=192
0x332: Push((int) 1)
0x333: @ SetVariable(Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: Stack[-6] = (bool) 1
0x336: Return(); Pop(4)

0x337: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x338: Stack[-5] = "c" // @poff=218
0x339: Stack[-4] = (int) 0
0x33a: Push((int) 1)
0x33b: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33c: Push((int) 1)
0x33d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x33e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x33f: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x340: Pop(1)
0x341: Pop(0); Push((bool) Stack[-3] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x347

0x344: Push((int) 1)
0x345: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x346: GOTO 0x33a

0x347: Pop(0); Push((bool) Stack[-4] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-12] = (bool) 0
0x34a: Return(); Pop(10)

0x34b: Stack[-2] = (int) 0
0x34c: Push((int) 1)
0x34d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: @ irand(Stack[-2], Stack[-4])
0x350: Pop(0)
0x351: Push((int) 1)
0x352: Pop(1); Push(Stack[-3] + Stack[-1]);
0x353: Pop(1); Push(Stack[-6] + Stack[-1]);
0x354: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x355: Pop(1)
0x356: PushEmpty(bool, string)
0x357: Stack[-3] = Stack[-1]
0x358: Call2 0x394

0x359: Stack[-2] = Stack[-14]
0x35a: Pop(2)
0x35b: Return(); Pop(10)

0x35c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x35d: Push("d") // @poff=188
0x35e: PushEmpty(int)
0x35f: Call2 0x3d7

0x360: Pop(0)
0x361: Pop(2); Push(Stack[-2] + Stack[-1]);
0x362: Push("m") // @poff=246
0x363: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x364: Stack[-4] = (int) 0
0x365: Push((int) 1)
0x366: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x367: Push((int) 1)
0x368: Pop(1); Push(Stack[-5] + Stack[-1]);
0x369: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36a: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x36b: Pop(1)
0x36c: Pop(0); Push((bool) Stack[-3] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x372

0x36f: Push((int) 1)
0x370: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x371: GOTO 0x365

0x372: Pop(0); Push((bool) Stack[-4] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: Stack[-12] = (bool) 0
0x375: Return(); Pop(10)

0x376: Stack[-2] = (int) 0
0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: @ irand(Stack[-2], Stack[-4])
0x37b: Pop(0)
0x37c: Push((int) 1)
0x37d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x37e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x37f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x380: Pop(1)
0x381: PushEmpty(bool, string)
0x382: Stack[-3] = Stack[-1]
0x383: Call2 0x394

0x384: Stack[-2] = Stack[-14]
0x385: Pop(2)
0x386: Return(); Pop(10)

0x387: PushEmpty(float, float, float, float)
0x388: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x389: Pop(0)
0x38a: Push((bool) 0)
0x38b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(1)
0x38d: Return(); Pop(4)

0x38e: PushEmpty(float, float, float, float)
0x38f: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x390: Pop(0)
0x391: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x392: Pop(0)
0x393: Return(); Pop(4)

0x394: PushEmpty(bool, bool)
0x395: PushEmpty(bool)
0x396: Call2 0x3e8

0x397: Pop(0)
0x398: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x399: @ lshHasSpeech(Stack[-1], Stack[-3])
0x39a: Pop(0)
0x39b: Push(Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39d: @ lshPlaySpeech(Stack[-3])
0x39e: Pop(0)
0x39f: Stack[-4] = (bool) 1
0x3a0: Return(); Pop(2)

0x3a1: Stack[-4] = (bool) 0
0x3a2: Return(); Pop(2)

0x3a3: PushEmpty(bool)
0x3a4: Call2 0x3e8

0x3a5: Pop(0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: @ lshStopSpeech()
0x3a8: Pop(0)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty(object, object)
0x3ab: @ self(Stack[-1])
0x3ac: Pop(0)
0x3ad: Stack[-1] = Stack[-3]
0x3ae: Return(); Pop(2)

0x3af: Stack[-1] = 0
0x3b0: PushEmpty(float, float)
0x3b1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3b2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b3: Push((float)9.999999974752427e-07)
0x3b4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-4] = [0.0, 0.0, 0.0]
0x3b7: Return(); Pop(2)

0x3b8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3b9: Return(); Pop(2)

0x3ba: PushEmpty(int, int)
0x3bb: @ GetVariable(Stack[-3], Stack[-1])
0x3bc: Pop(0)
0x3bd: Stack[-1] = Stack[-4]
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(object, object)
0x3c0: @ FindActor(Stack[-1], Stack[-4])
0x3c1: Pop(0)
0x3c2: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-5] = (bool) 0
0x3c5: Return(); Pop(2)

0x3c6: @ Trigger(Stack[-1], Stack[-3])
0x3c7: Pop(0)
0x3c8: Stack[-5] = (bool) 1
0x3c9: Return(); Pop(2)

0x3ca: Stack[-1] = 0
0x3cb: PushEmpty(object, object)
0x3cc: @ FindActor(Stack[-1], Stack[-5])
0x3cd: Pop(0)
0x3ce: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-6] = (bool) 0
0x3d1: Return(); Pop(2)

0x3d2: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3d3: Pop(0)
0x3d4: Stack[-6] = (bool) 1
0x3d5: Return(); Pop(2)

0x3d6: Stack[-1] = 0
0x3d7: PushEmpty(float, float)
0x3d8: @ GetGameTime(Stack[-1])
0x3d9: Pop(0)
0x3da: Push((int) 1)
0x3db: PushEmpty(int)
0x3dc: Push((int) 24)
0x3dd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3de: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3df: Return(); Pop(2)

0x3e0: Stack[-1] = (int) 515530
0x3e1: Return(); Pop(0)

0x3e2: Stack[-1] = (int) 502856
0x3e3: Return(); Pop(0)

0x3e4: Stack[-1] = "ui/NPC_Anna.png" // @poff=250
0x3e5: Return(); Pop(0)

0x3e6: Stack[-1] = "ui/NPC_Anna_b.png" // @poff=282
0x3e7: Return(); Pop(0)

0x3e8: Stack[-1] = (bool) 1
0x3e9: Return(); Pop(0)

0x3ea: PushEmpty()
0x3eb: Push("b11q01KnowWhoKilled") // @poff=318
0x3ec: Push((int) 1)
0x3ed: @ SetVariable(Stack[-2], Stack[-1])
0x3ee: Pop(2)
0x3ef: PushEmpty()
0x3f0: Call2 0x43b

0x3f1: Pop(0)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty()
0x3f4: Push("b11q01VictimChoosed") // @poff=358
0x3f5: Push((int) 1)
0x3f6: @ SetVariable(Stack[-2], Stack[-1])
0x3f7: Pop(2)
0x3f8: Push("b11q01KillAnna") // @poff=398
0x3f9: Push((int) 1)
0x3fa: @ SetVariable(Stack[-2], Stack[-1])
0x3fb: Pop(2)
0x3fc: PushEmpty(bool, string, string, string)
0x3fd: Stack[-3] = "volonteers_danko" // @poff=428
0x3fe: Stack[-2] = "kill" // @poff=462
0x3ff: Stack[-1] = "anna" // @poff=472
0x400: Call2 0x3cb

0x401: Pop(4)
0x402: Push("Anna is dead") // @poff=482
0x403: @ Trace(Stack[-1])
0x404: Pop(1)
0x405: Return(); Pop(0)

0x406: PushEmpty()
0x407: Push("oob11Anna1") // @poff=508
0x408: Push((int) 1)
0x409: @ SetVariable(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: Push("b11q01") // @poff=530
0x40e: Push((int) 2)
0x40f: @ SetVariable(Stack[-2], Stack[-1])
0x410: Pop(2)
0x411: PushEmpty(bool, string, string)
0x412: Stack[-2] = "quest_b11_01" // @poff=544
0x413: Stack[-1] = "open_well_exit" // @poff=570
0x414: Call2 0x3bf

0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: PushEmpty(int, string)
0x419: Stack[-1] = "b11q01VictimChoosed" // @poff=358
0x41a: Call2 0x3ba

0x41b: Pop(1)
0x41c: Push((int) 0)
0x41d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41f: Stack[-2] = (bool) 1
0x420: Return(); Pop(0)

0x421: Stack[-2] = (bool) 0
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: PushEmpty(int, string)
0x425: Stack[-1] = "oob11Anna1" // @poff=508
0x426: Call2 0x3ba

0x427: Pop(1)
0x428: Push((int) 0)
0x429: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-2] = (bool) 1
0x42c: Return(); Pop(0)

0x42d: Stack[-2] = (bool) 0
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(int, string)
0x431: Stack[-1] = "b11q01KillAnna" // @poff=398
0x432: Call2 0x3ba

0x433: Pop(1)
0x434: Push((int) 0)
0x435: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = (bool) 1
0x438: Return(); Pop(0)

0x439: Stack[-2] = (bool) 0
0x43a: Return(); Pop(0)

0x43b: PushEmpty(object, object)
0x43c: Push((int) 315)
0x43d: Push((int) 1)
0x43e: Push((int) 522057)
0x43f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: PushEmpty(bool, object, int)
0x442: Stack[-4] = Stack[-2]
0x443: Stack[-1] = (int) 313
0x444: Call2 0x455

0x445: Pop(3)
0x446: Return(); Pop(2)

0x447: Stack[-1] = 0
0x448: PushEmpty(object, object)
0x449: @ GetDiaryRoot(Stack[-1])
0x44a: Pop(0)
0x44b: Pop(0); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44d: Push("Can't retrieve diary root") // @poff=600
0x44e: @ Trace(Stack[-1])
0x44f: Pop(1)
0x450: Stack[-3] = (bool) 0
0x451: Return(); Pop(2)

0x452: Stack[-1] = Stack[-3]
0x453: Return(); Pop(2)

0x454: Stack[-1] = 0
0x455: PushEmpty(object, object, int, object, object, int)
0x456: PushEmpty(object)
0x457: Call2 0x448

0x458: Stack[-1] = Stack[-4]
0x459: Pop(1)
0x45a: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=652
0x45b: Pop(0)
0x45c: Pop(0); Push((bool) Stack[-2] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45e: Push("Can't find diary parent with id: ") // @poff=657
0x45f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x460: @ Trace(Stack[-1])
0x461: Pop(1)
0x462: Stack[-9] = (bool) 0
0x463: Return(); Pop(6)

0x464: @@ AddChild(Stack[-8]); Obj=2 // @poff=725
0x465: Pop(0)
0x466: Push((int) 7)
0x467: @ SendWorldWndMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ GetCategory(Stack[-1]); Obj=8 // @poff=734
0x46a: Pop(0)
0x46b: @ SetDiarySection(Stack[-1])
0x46c: Pop(0)
0x46d: Stack[-9] = (bool) 0
0x46e: Return(); Pop(6)

0x46f: Stack[-2] = 0
0x470: Stack[-3] = 0
0x471: PushEmpty(int, int)
0x472: Push("branch") // @poff=746
0x473: @ GetVariable(Stack[-1], Stack[-2])
0x474: Pop(1)
0x475: Push((int) 0)
0x476: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x478: Stack[-3] = (int) 1
0x479: Return(); Pop(2)

0x47a: GOTO 0x480

0x47b: Push((int) 1)
0x47c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47e: Stack[-3] = (int) 2
0x47f: Return(); Pop(2)

0x480: Stack[-3] = (int) 3
0x481: Return(); Pop(2)

