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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:d5q01
	W:d5q01BurahMeeting
	W:pt_d5q01_girl_corpse1
	A:AddMark
	W:quest_d5_01
	W:burah_free
	W:ood5Burah1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000064003500710030003100000064003500710030003100420075007200610068004d0065006500740069006e0067000000700074005f00640035007100300031005f006700690072006c005f0063006f007200700073006500310000004164644d61726b00710075006500730074005f00640035005f00300031000000620075007200610068005f00660072006500650000006f006f00640035004200750072006100680031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x21d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x215 Vars = (object)
		EVENT_26 Op = 0x221 Vars = (string)
		EVENT_6 Op = 0x23d Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x351

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x2a4

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x24f

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x408

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x406

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x40a

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x40c

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x3f5

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x293

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3a2

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral" // @poff=89
0x5e: Call2 0x95

0x5f: Pop(1)
0x60: Push((int) 510543)
0x61: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x62: Pop(1)
0x63: @@@ ClearReplies(); Obj=0 // @poff=116
0x64: Pop(0)
0x65: Push((int) 510544)
0x66: Push((int) 11634)
0x67: Push((int) 11633)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: Push((int) 510560)
0x6b: Push((int) 16756)
0x6c: Push((int) 11649)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: Push((int) 510566)
0x70: Push((int) 11634)
0x71: Push((int) 11655)
0x72: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x40e

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x32e

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all") // @poff=138
0x87: Push("idle") // @poff=146
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all") // @poff=138
0x90: Push("idle") // @poff=146
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x40e

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-3] = Stack[-2]
0xa1: Push("") // @poff=102
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x335

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x34a

0xb0: Pop(0)
0xb1: Push((int) 13708)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x39c

0xb8: Pop(2)
0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x380

0xbd: Pop(2)
0xbe: Push((int) 11632)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x3a2

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Neutral" // @poff=89
0xc8: Call2 0x95

0xc9: Pop(1)
0xca: Push((int) 510543)
0xcb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xcc: Pop(1)
0xcd: @@@ ClearReplies(); Obj=0 // @poff=116
0xce: Pop(0)
0xcf: Push((int) 510544)
0xd0: Push((int) 11634)
0xd1: Push((int) 11633)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Push((int) 510560)
0xd5: Push((int) 16756)
0xd6: Push((int) 11649)
0xd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd8: Pop(3)
0xd9: Push((int) 510566)
0xda: Push((int) 11634)
0xdb: Push((int) 11655)
0xdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 16756)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0x95

0xe5: Pop(1)
0xe6: Push((int) 515702)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 515703)
0xec: Push((int) 11650)
0xed: Push((int) 16757)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 11650)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral" // @poff=89
0xf6: Call2 0x95

0xf7: Pop(1)
0xf8: Push((int) 510561)
0xf9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfa: Pop(1)
0xfb: @@@ ClearReplies(); Obj=0 // @poff=116
0xfc: Pop(0)
0xfd: Push((int) 510562)
0xfe: Push((int) 11652)
0xff: Push((int) 11651)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 11652)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=89
0x108: Call2 0x95

0x109: Pop(1)
0x10a: Push((int) 510563)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=116
0x10e: Pop(0)
0x10f: Push((int) 510564)
0x110: Push((int) 16749)
0x111: Push((int) 11653)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Push((int) 510565)
0x115: Push((int) -1)
0x116: Push((int) 11654)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 11634)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral" // @poff=89
0x11f: Call2 0x95

0x120: Pop(1)
0x121: Push((int) 510545)
0x122: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x123: Pop(1)
0x124: @@@ ClearReplies(); Obj=0 // @poff=116
0x125: Pop(0)
0x126: Push((int) 510546)
0x127: Push((int) 11636)
0x128: Push((int) 11635)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Push((int) 510553)
0x12c: Push((int) 11643)
0x12d: Push((int) 11642)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Push((int) 510557)
0x131: Push((int) 11647)
0x132: Push((int) 11646)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 11647)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0x95

0x13c: Pop(1)
0x13d: Push((int) 510558)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 510559)
0x143: Push((int) 16743)
0x144: Push((int) 11648)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 11643)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=89
0x14d: Call2 0x95

0x14e: Pop(1)
0x14f: Push((int) 510554)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=116
0x153: Pop(0)
0x154: Push((int) 510555)
0x155: Push((int) 16743)
0x156: Push((int) 11644)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 510556)
0x15a: Push((int) -1)
0x15b: Push((int) 11645)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 11636)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0x95

0x165: Pop(1)
0x166: Push((int) 510547)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 510548)
0x16c: Push((int) 16743)
0x16d: Push((int) 11637)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 510549)
0x171: Push((int) 11639)
0x172: Push((int) 11638)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 11639)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0x95

0x17c: Pop(1)
0x17d: Push((int) 510550)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 510551)
0x183: Push((int) 16743)
0x184: Push((int) 11640)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Push((int) 510552)
0x188: Push((int) 16743)
0x189: Push((int) 11641)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 16743)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0x95

0x193: Pop(1)
0x194: Push((int) 515695)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 515696)
0x19a: Push((int) 16749)
0x19b: Push((int) 16748)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Push((int) 515701)
0x19f: Push((int) 16752)
0x1a0: Push((int) 16754)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 16749)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0x95

0x1aa: Pop(1)
0x1ab: Push((int) 515697)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 515698)
0x1b1: Push((int) 16752)
0x1b2: Push((int) 16750)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Push((int) 515699)
0x1b6: Push((int) 16752)
0x1b7: Push((int) 16751)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 16752)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral" // @poff=89
0x1c0: Call2 0x95

0x1c1: Pop(1)
0x1c2: Push((int) 515700)
0x1c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c4: Pop(1)
0x1c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c6: Pop(0)
0x1c7: Push((int) 515704)
0x1c8: Push((int) 16760)
0x1c9: Push((int) 16759)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 16760)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral" // @poff=89
0x1d2: Call2 0x95

0x1d3: Pop(1)
0x1d4: Push((int) 515705)
0x1d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d6: Pop(1)
0x1d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d8: Pop(0)
0x1d9: Push((int) 515706)
0x1da: Push((int) 16762)
0x1db: Push((int) 16761)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: Push((int) 515708)
0x1df: Push((int) 16764)
0x1e0: Push((int) 16763)
0x1e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e2: Pop(3)
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 16764)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Neutral" // @poff=89
0x1e9: Call2 0x95

0x1ea: Pop(1)
0x1eb: Push((int) 515709)
0x1ec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ed: Pop(1)
0x1ee: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ef: Pop(0)
0x1f0: Push((int) 515710)
0x1f1: Push((int) 16762)
0x1f2: Push((int) 16765)
0x1f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 16762)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral" // @poff=89
0x1fb: Call2 0x95

0x1fc: Pop(1)
0x1fd: Push((int) 515707)
0x1fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ff: Pop(1)
0x200: @@@ ClearReplies(); Obj=0 // @poff=116
0x201: Pop(0)
0x202: Push((int) 512539)
0x203: Push((int) -1)
0x204: Push((int) 13708)
0x205: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x209: PushEmpty(bool)
0x20a: Call2 0x40e

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: @ lshStopAnimation()
0x20e: Pop(0)
0x20f: GOTO 0x212

0x210: @ StopAnimation()
0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: GOTO 0xac

0x214: Return(); Pop(0)

0x215: PushEmpty()
0x216: PushEmpty(int, object)
0x217: Stack[-3] = Stack[-1]
0x218: Push(-2, 1); TaskCall(0)
0x219: Call2 0x0

0x21a: Pop(-2, 1); TaskReturn
0x21b: Pop(2)
0x21c: Return(); Pop(0)

0x21d: @ Hold()
0x21e: Pop(0)
0x21f: GOTO 0x21d

0x220: Return(); Pop(0)

0x221: PushEmpty(bool, bool)
0x222: Push("cleanup") // @poff=156
0x223: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x225: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x226: @ IsLoaded(Stack[-1])
0x227: Pop(0)
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 0
0x22a: Pop(0); Push((bool) Stack[-2] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22c: PushEmpty(bool)
0x22d: Call2 0x24d

0x22e: Pop(0)
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Stack[-1] = (bool) 1
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: PushEmpty(object)
0x233: Call2 0x351

0x234: Pop(0)
0x235: @ RemoveActor(Stack[-1])
0x236: Pop(1)
0x237: GOTO 0x23c

0x238: Push("restore") // @poff=172
0x239: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x23c: Return(); Pop(2)

0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: PushEmpty(bool)
0x242: Call2 0x24d

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(object)
0x248: Call2 0x351

0x249: Pop(0)
0x24a: @ RemoveActor(Stack[-1])
0x24b: Pop(1)
0x24c: Return(); Pop(0)

0x24d: Stack[-1] = (bool) 1
0x24e: Return(); Pop(0)

0x24f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x250: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x251: Pop(0)
0x252: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x253: Pop(0)
0x254: Push(CvectorIndex(Stack[-8], 1))
0x255: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x256: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x257: @ GetPosition(Stack[-7])
0x258: Pop(0)
0x259: @ GetEyesHeight(Stack[-9])
0x25a: Pop(0)
0x25b: Push(CvectorIndex(Stack[-7], 1))
0x25c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x25e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x25f: Push(CvectorIndex(Stack[-6], 1))
0x260: Stack[-1] = (int) 0
0x261: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x262: Pop(0); Push(Stack[-6] | Stack[-6]);
0x263: Pop(1); Push(Sqrt(Stack[-1]))
0x264: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x265: Stack[-5] = -Stack[-6]; Pop(0);
0x266: Pop(0); Push(Stack[-6] * Stack[-19]);
0x267: PushEmpty(cvector, cvector)
0x268: Push([0.0, 1.0, 0.0])
0x269: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26a: Call2 0x357

0x26b: Pop(1)
0x26c: Push((int) 25)
0x26d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26f: Push([0.0, 10.0, 0.0])
0x270: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x271: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x272: @ IsOverrideActive(Stack[-2])
0x273: Pop(0)
0x274: Push(Stack[-2])
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-21] = (bool) 0
0x277: Return(); Pop(18)

0x278: @ StopWorld()
0x279: Pop(0)
0x27a: @ CameraTransit(Stack[-3], Stack[-5])
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-4], 0))
0x27d: Push(CvectorIndex(Stack[-5], 2))
0x27e: @ Rotate(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: PushEmpty(bool)
0x281: Call2 0x40e

0x282: Pop(0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: GOTO 0x28d

0x285: Push("head") // @poff=214
0x286: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x287: Pop(1)
0x288: Push(Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28a: Push("head") // @poff=214
0x28b: @ LookAsyncCamera(Stack[-1])
0x28c: Pop(1)
0x28d: @ CameraWaitForPlayFinish()
0x28e: Pop(0)
0x28f: @ ResumeWorld()
0x290: Pop(0)
0x291: Stack[-21] = (bool) 1
0x292: Return(); Pop(18)

0x293: PushEmpty(bool, bool)
0x294: @ CameraSwitchToNormal()
0x295: Pop(0)
0x296: PushEmpty(bool)
0x297: Call2 0x40e

0x298: Pop(0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x2a3

0x29b: Push("head") // @poff=214
0x29c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x29d: Pop(1)
0x29e: Push(Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a0: Push("head") // @poff=214
0x2a1: @ UnlookAsync(Stack[-1])
0x2a2: Pop(1)
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty(int, int, int, int)
0x2a5: Push("voice_common") // @poff=224
0x2a6: @ GetVariable(Stack[-1], Stack[-3])
0x2a7: Pop(1)
0x2a8: Push(Stack[-2])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-7] = Stack[-1]
0x2ac: Call2 0x2de

0x2ad: Pop(1)
0x2ae: Pop(1); Push((bool) Stack[-1] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b0: PushEmpty(bool, object)
0x2b1: Stack[-7] = Stack[-1]
0x2b2: Call2 0x303

0x2b3: Pop(1)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[-6] = (bool) 0
0x2b7: Return(); Pop(4)

0x2b8: Push((int) 2)
0x2b9: @ irand(Stack[-2], Stack[-1])
0x2ba: Pop(1)
0x2bb: Push(Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2bd: Push("voice_common") // @poff=224
0x2be: Push((int) 1)
0x2bf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2c0: Push((int) 3)
0x2c1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2c2: @ SetVariable(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: GOTO 0x2c9

0x2c5: Push("voice_common") // @poff=224
0x2c6: Push((int) 0)
0x2c7: @ SetVariable(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: GOTO 0x2dc

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-7] = Stack[-1]
0x2cc: Call2 0x303

0x2cd: Pop(1)
0x2ce: Pop(1); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-7] = Stack[-1]
0x2d2: Call2 0x2de

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-6] = (bool) 0
0x2d7: Return(); Pop(4)

0x2d8: Push("voice_common") // @poff=224
0x2d9: Push((int) 1)
0x2da: @ SetVariable(Stack[-2], Stack[-1])
0x2db: Pop(2)
0x2dc: Stack[-6] = (bool) 1
0x2dd: Return(); Pop(4)

0x2de: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2df: Stack[-5] = "c" // @poff=250
0x2e0: Stack[-4] = (int) 0
0x2e1: Push((int) 1)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e3: Push((int) 1)
0x2e4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e6: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2e7: Pop(1)
0x2e8: Pop(0); Push((bool) Stack[-3] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: GOTO 0x2ee

0x2eb: Push((int) 1)
0x2ec: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ed: GOTO 0x2e1

0x2ee: Pop(0); Push((bool) Stack[-4] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-12] = (bool) 0
0x2f1: Return(); Pop(10)

0x2f2: Stack[-2] = (int) 0
0x2f3: Push((int) 1)
0x2f4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f6: @ irand(Stack[-2], Stack[-4])
0x2f7: Pop(0)
0x2f8: Push((int) 1)
0x2f9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2fa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2fb: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2fc: Pop(1)
0x2fd: PushEmpty(bool, string)
0x2fe: Stack[-3] = Stack[-1]
0x2ff: Call2 0x33b

0x300: Stack[-2] = Stack[-14]
0x301: Pop(2)
0x302: Return(); Pop(10)

0x303: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x304: Push("d") // @poff=220
0x305: PushEmpty(int)
0x306: Call2 0x377

0x307: Pop(0)
0x308: Pop(2); Push(Stack[-2] + Stack[-1]);
0x309: Push("m") // @poff=278
0x30a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x30b: Stack[-4] = (int) 0
0x30c: Push((int) 1)
0x30d: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x30e: Push((int) 1)
0x30f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x310: Pop(1); Push(Stack[-6] + Stack[-1]);
0x311: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x312: Pop(1)
0x313: Pop(0); Push((bool) Stack[-3] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: GOTO 0x319

0x316: Push((int) 1)
0x317: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x318: GOTO 0x30c

0x319: Pop(0); Push((bool) Stack[-4] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-12] = (bool) 0
0x31c: Return(); Pop(10)

0x31d: Stack[-2] = (int) 0
0x31e: Push((int) 1)
0x31f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: @ irand(Stack[-2], Stack[-4])
0x322: Pop(0)
0x323: Push((int) 1)
0x324: Pop(1); Push(Stack[-3] + Stack[-1]);
0x325: Pop(1); Push(Stack[-6] + Stack[-1]);
0x326: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x327: Pop(1)
0x328: PushEmpty(bool, string)
0x329: Stack[-3] = Stack[-1]
0x32a: Call2 0x33b

0x32b: Stack[-2] = Stack[-14]
0x32c: Pop(2)
0x32d: Return(); Pop(10)

0x32e: PushEmpty(float, float, float, float)
0x32f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x330: Pop(0)
0x331: Push((bool) 0)
0x332: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(1)
0x334: Return(); Pop(4)

0x335: PushEmpty(float, float, float, float)
0x336: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x337: Pop(0)
0x338: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x339: Pop(0)
0x33a: Return(); Pop(4)

0x33b: PushEmpty(bool, bool)
0x33c: PushEmpty(bool)
0x33d: Call2 0x40e

0x33e: Pop(0)
0x33f: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x340: @ lshHasSpeech(Stack[-1], Stack[-3])
0x341: Pop(0)
0x342: Push(Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x344: @ lshPlaySpeech(Stack[-3])
0x345: Pop(0)
0x346: Stack[-4] = (bool) 1
0x347: Return(); Pop(2)

0x348: Stack[-4] = (bool) 0
0x349: Return(); Pop(2)

0x34a: PushEmpty(bool)
0x34b: Call2 0x40e

0x34c: Pop(0)
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: @ lshStopSpeech()
0x34f: Pop(0)
0x350: Return(); Pop(0)

0x351: PushEmpty(object, object)
0x352: @ self(Stack[-1])
0x353: Pop(0)
0x354: Stack[-1] = Stack[-3]
0x355: Return(); Pop(2)

0x356: Stack[-1] = 0
0x357: PushEmpty(float, float)
0x358: Pop(0); Push(Stack[-3] | Stack[-3]);
0x359: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x35a: Push((float)9.999999974752427e-07)
0x35b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-4] = [0.0, 0.0, 0.0]
0x35e: Return(); Pop(2)

0x35f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x360: Return(); Pop(2)

0x361: PushEmpty(int, int)
0x362: @ GetVariable(Stack[-3], Stack[-1])
0x363: Pop(0)
0x364: Stack[-1] = Stack[-4]
0x365: Return(); Pop(2)

0x366: PushEmpty(object, object)
0x367: @ FindActor(Stack[-1], Stack[-4])
0x368: Pop(0)
0x369: Pop(0); PushNull((bool) Stack[-1] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36b: Stack[-5] = (bool) 0
0x36c: Return(); Pop(2)

0x36d: @ Trigger(Stack[-1], Stack[-3])
0x36e: Pop(0)
0x36f: Stack[-5] = (bool) 1
0x370: Return(); Pop(2)

0x371: Stack[-1] = 0
0x372: PushEmpty(float, float)
0x373: @ GetGameTime(Stack[-1])
0x374: Pop(0)
0x375: Stack[-1] = Stack[-3]
0x376: Return(); Pop(2)

0x377: PushEmpty(float, float)
0x378: @ GetGameTime(Stack[-1])
0x379: Pop(0)
0x37a: Push((int) 1)
0x37b: PushEmpty(int)
0x37c: Push((int) 24)
0x37d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x37e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x37f: Return(); Pop(2)

0x380: PushEmpty(object, object)
0x381: Push("d5q01") // @poff=282
0x382: Push((int) 7)
0x383: @ SetVariable(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: PushEmpty(object)
0x386: Call2 0x3e4

0x387: Stack[-1] = Stack[-2]
0x388: Pop(1)
0x389: Push("d5q01BurahMeeting") // @poff=294
0x38a: Push("pt_d5q01_girl_corpse1") // @poff=330
0x38b: Push((int) 1)
0x38c: Push((int) 515351)
0x38d: PushEmpty(float)
0x38e: Call2 0x372

0x38f: Pop(0)
0x390: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=374
0x391: Pop(5)
0x392: PushEmpty()
0x393: Call2 0x3ae

0x394: Pop(0)
0x395: PushEmpty(bool, string, string)
0x396: Stack[-2] = "quest_d5_01" // @poff=382
0x397: Stack[-1] = "burah_free" // @poff=406
0x398: Call2 0x366

0x399: Pop(3)
0x39a: Return(); Pop(2)

0x39b: Stack[-1] = 0
0x39c: PushEmpty()
0x39d: Push("ood5Burah1") // @poff=428
0x39e: Push((int) 1)
0x39f: @ SetVariable(Stack[-2], Stack[-1])
0x3a0: Pop(2)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty()
0x3a3: PushEmpty(int, string)
0x3a4: Stack[-1] = "ood5Burah1" // @poff=428
0x3a5: Call2 0x361

0x3a6: Pop(1)
0x3a7: Push((int) 0)
0x3a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-2] = (bool) 1
0x3ab: Return(); Pop(0)

0x3ac: Stack[-2] = (bool) 0
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(object, object)
0x3af: Push((int) 146)
0x3b0: Push((int) 1)
0x3b1: Push((int) 515346)
0x3b2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: PushEmpty(bool, object, int)
0x3b5: Stack[-4] = Stack[-2]
0x3b6: Stack[-1] = (int) 139
0x3b7: Call2 0x3c8

0x3b8: Pop(3)
0x3b9: Return(); Pop(2)

0x3ba: Stack[-1] = 0
0x3bb: PushEmpty(object, object)
0x3bc: @ GetDiaryRoot(Stack[-1])
0x3bd: Pop(0)
0x3be: Pop(0); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c0: Push("Can't retrieve diary root") // @poff=450
0x3c1: @ Trace(Stack[-1])
0x3c2: Pop(1)
0x3c3: Stack[-3] = (bool) 0
0x3c4: Return(); Pop(2)

0x3c5: Stack[-1] = Stack[-3]
0x3c6: Return(); Pop(2)

0x3c7: Stack[-1] = 0
0x3c8: PushEmpty(object, object, int, object, object, int)
0x3c9: PushEmpty(object)
0x3ca: Call2 0x3bb

0x3cb: Stack[-1] = Stack[-4]
0x3cc: Pop(1)
0x3cd: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=502
0x3ce: Pop(0)
0x3cf: Pop(0); Push((bool) Stack[-2] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d1: Push("Can't find diary parent with id: ") // @poff=507
0x3d2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d3: @ Trace(Stack[-1])
0x3d4: Pop(1)
0x3d5: Stack[-9] = (bool) 0
0x3d6: Return(); Pop(6)

0x3d7: @@ AddChild(Stack[-8]); Obj=2 // @poff=575
0x3d8: Pop(0)
0x3d9: Push((int) 7)
0x3da: @ SendWorldWndMessage(Stack[-1])
0x3db: Pop(1)
0x3dc: @@ GetCategory(Stack[-1]); Obj=8 // @poff=584
0x3dd: Pop(0)
0x3de: @ SetDiarySection(Stack[-1])
0x3df: Pop(0)
0x3e0: Stack[-9] = (bool) 0
0x3e1: Return(); Pop(6)

0x3e2: Stack[-2] = 0
0x3e3: Stack[-3] = 0
0x3e4: PushEmpty(object, object, object, object)
0x3e5: @ GetMainOutdoorScene(Stack[-2])
0x3e6: Pop(0)
0x3e7: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e9: Push("Can't find main outdoor scene") // @poff=596
0x3ea: @ Trace(Stack[-1])
0x3eb: Pop(1)
0x3ec: Stack[-1] = 0
0x3ed: Stack[-1] = Stack[-5]
0x3ee: Return(); Pop(4)

0x3ef: @@ GetMap(Stack[-1]); Obj=2 // @poff=656
0x3f0: Pop(0)
0x3f1: Stack[-1] = Stack[-5]
0x3f2: Return(); Pop(4)

0x3f3: Stack[-1] = 0
0x3f4: Stack[-2] = 0
0x3f5: PushEmpty(int, int)
0x3f6: Push("branch") // @poff=663
0x3f7: @ GetVariable(Stack[-1], Stack[-2])
0x3f8: Pop(1)
0x3f9: Push((int) 0)
0x3fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fc: Stack[-3] = (int) 1
0x3fd: Return(); Pop(2)

0x3fe: GOTO 0x404

0x3ff: Push((int) 1)
0x400: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-3] = (int) 2
0x403: Return(); Pop(2)

0x404: Stack[-3] = (int) 3
0x405: Return(); Pop(2)

0x406: Stack[-1] = (int) 515592
0x407: Return(); Pop(0)

0x408: Stack[-1] = (int) 511961
0x409: Return(); Pop(0)

0x40a: Stack[-1] = "ui/NPC_Burah.png" // @poff=677
0x40b: Return(); Pop(0)

0x40c: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=711
0x40d: Return(); Pop(0)

0x40e: Stack[-1] = (bool) 1
0x40f: Return(); Pop(0)

