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
	W:ui/NPC_Lara.png
	W:ui/NPC_Lara_b.png
	W:b11q01KnowWhoKilled
	W:b11q01VictimChoosed
	W:b11q01KillLara
	W:volonteers_danko
	W:kill
	W:lara
	W:Lara is dead
	W:oob11Lara1
	W:b11q01
	W:quest_b11_01
	W:open_well_exit
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004c006100720061002e0070006e0067000000750069002f004e00500043005f004c006100720061005f0062002e0070006e00670000006200310031007100300031004b006e006f007700570068006f004b0069006c006c00650064000000620031003100710030003100560069006300740069006d00430068006f006f0073006500640000006200310031007100300031004b0069006c006c004c00610072006100000076006f006c006f006e00740065006500720073005f00640061006e006b006f0000006b0069006c006c0000006c0061007200610000004c006100720061002000690073002000640065006100640000006f006f006200310031004c00610072006100310000006200310031007100300031000000710075006500730074005f006200310031005f003000310000006f00700065006e005f00770065006c006c005f0065007800690074000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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

RunOp = 0x28a
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfa Vars = (int, int)
	GTASK_3  Params = 0
		EVENT_6 Op = 0x29e Vars = ()
		EVENT_0 Op = 0x2a4 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2c7

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
0x11: Call2 0x3ce

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x321

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2cc

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x406

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x404

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x408

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x40a

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x495

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
0x55: Call2 0x310

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
0x68: Call2 0x43b

0x69: Pop(1)
0x6a: Pop(1); Push((bool) Stack[-1] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x447

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x73: PushEmpty(object, object)
0x74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x42a

0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xe4

0x7b: Pop(1)
0x7c: Push((int) 522012)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 523423)
0x82: Push((int) 24645)
0x83: Push((int) 24644)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0xc6

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x43b

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = "Neutral" // @poff=89
0x8f: Call2 0xe4

0x90: Pop(1)
0x91: Push((int) 522016)
0x92: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x93: Pop(1)
0x94: @@@ ClearReplies(); Obj=0 // @poff=116
0x95: Pop(0)
0x96: Push((int) 522017)
0x97: Push((int) -1)
0x98: Push((int) 23187)
0x99: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9a: Pop(3)
0x9b: Push((int) 522018)
0x9c: Push((int) -1)
0x9d: Push((int) 23188)
0x9e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9f: Pop(3)
0xa0: GOTO 0xc6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = "Neutral" // @poff=89
0xa3: Call2 0xe4

0xa4: Pop(1)
0xa5: Push((int) 522014)
0xa6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa7: Pop(1)
0xa8: @@@ ClearReplies(); Obj=0 // @poff=116
0xa9: Pop(0)
0xaa: Push((int) 523455)
0xab: Push((int) -1)
0xac: Push((int) 24681)
0xad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xae: Pop(3)
0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call2 0x453

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: Push((int) 522015)
0xb5: Push((int) -1)
0xb6: Push((int) 23185)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x453

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 523456)
0xbf: Push((int) -1)
0xc0: Push((int) 24682)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: GOTO 0xc6

0xc4: Return(); Pop(0)

0xc5: GOTO 0x62

0xc6: PushEmpty(bool)
0xc7: Call2 0x40c

0xc8: Pop(0)
0xc9: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xca: @ lshWaitForAnimEnd()
0xcb: Pop(0)
0xcc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: GOTO 0xd4

0xcf: PushEmpty(string)
0xd0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd1: Call2 0x3ab

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
0xe6: Call2 0x40c

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
0xf6: Call2 0x3b2

0xf7: Pop(2)
0xf8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: Push((int) 1)
0xfc: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0xfd: PushEmpty()
0xfe: Call2 0x3c7

0xff: Pop(0)
0x100: Push((int) 23190)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x417

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x430

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x40e

0x111: Pop(2)
0x112: Push((int) 23187)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x417

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x430

0x11e: Pop(2)
0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x40e

0x123: Pop(2)
0x124: Push((int) 23182)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x127: PushEmpty(bool)
0x128: Stack[-1] = (bool) 0
0x129: PushEmpty(bool, object)
0x12a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Call2 0x43b

0x12c: Pop(1)
0x12d: Pop(1); Push((bool) Stack[-1] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x447

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 1
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x42a

0x13a: Pop(2)
0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral" // @poff=89
0x13d: Call2 0xe4

0x13e: Pop(1)
0x13f: Push((int) 522012)
0x140: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x141: Pop(1)
0x142: @@@ ClearReplies(); Obj=0 // @poff=116
0x143: Pop(0)
0x144: Push((int) 523423)
0x145: Push((int) 24645)
0x146: Push((int) 24644)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0x43b

0x14d: Pop(1)
0x14e: Pop(1); Push((bool) Stack[-1] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xe4

0x153: Pop(1)
0x154: Push((int) 522016)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 522017)
0x15a: Push((int) -1)
0x15b: Push((int) 23187)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 522018)
0x15f: Push((int) -1)
0x160: Push((int) 23188)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral" // @poff=89
0x166: Call2 0xe4

0x167: Pop(1)
0x168: Push((int) 522014)
0x169: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16a: Pop(1)
0x16b: @@@ ClearReplies(); Obj=0 // @poff=116
0x16c: Pop(0)
0x16d: Push((int) 523455)
0x16e: Push((int) -1)
0x16f: Push((int) 24681)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x453

0x175: Pop(1)
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: Push((int) 522015)
0x178: Push((int) -1)
0x179: Push((int) 23185)
0x17a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17b: Pop(3)
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x453

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Push((int) 523456)
0x182: Push((int) -1)
0x183: Push((int) 24682)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 24645)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral" // @poff=89
0x18c: Call2 0xe4

0x18d: Pop(1)
0x18e: Push((int) 523424)
0x18f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x190: Pop(1)
0x191: @@@ ClearReplies(); Obj=0 // @poff=116
0x192: Pop(0)
0x193: Push((int) 523425)
0x194: Push((int) 24647)
0x195: Push((int) 24646)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Push((int) 523435)
0x199: Push((int) 24659)
0x19a: Push((int) 24656)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Push((int) 523444)
0x19e: Push((int) 24669)
0x19f: Push((int) 24668)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 24669)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Neutral" // @poff=89
0x1a8: Call2 0xe4

0x1a9: Pop(1)
0x1aa: Push((int) 523445)
0x1ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ac: Pop(1)
0x1ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ae: Pop(0)
0x1af: Push((int) 523446)
0x1b0: Push((int) 24671)
0x1b1: Push((int) 24670)
0x1b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral" // @poff=89
0x1b7: Call2 0xe4

0x1b8: Pop(1)
0x1b9: Push((int) 523449)
0x1ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bb: Pop(1)
0x1bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bd: Pop(0)
0x1be: Push((int) 523459)
0x1bf: Push((int) 24686)
0x1c0: Push((int) 24685)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 24686)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral" // @poff=89
0x1c9: Call2 0xe4

0x1ca: Pop(1)
0x1cb: Push((int) 523460)
0x1cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cd: Pop(1)
0x1ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cf: Pop(0)
0x1d0: Push((int) 523450)
0x1d1: Push((int) 24663)
0x1d2: Push((int) 24675)
0x1d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 24671)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral" // @poff=89
0x1db: Call2 0xe4

0x1dc: Pop(1)
0x1dd: Push((int) 523447)
0x1de: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1df: Pop(1)
0x1e0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e1: Pop(0)
0x1e2: Push((int) 523457)
0x1e3: Push((int) 24684)
0x1e4: Push((int) 24683)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 24684)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral" // @poff=89
0x1ed: Call2 0xe4

0x1ee: Pop(1)
0x1ef: Push((int) 523458)
0x1f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f1: Pop(1)
0x1f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f3: Pop(0)
0x1f4: Push((int) 523461)
0x1f5: Push((int) 24688)
0x1f6: Push((int) 24687)
0x1f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 24688)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral" // @poff=89
0x1ff: Call2 0xe4

0x200: Pop(1)
0x201: Push((int) 523462)
0x202: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x203: Pop(1)
0x204: @@@ ClearReplies(); Obj=0 // @poff=116
0x205: Pop(0)
0x206: Push((int) 523448)
0x207: Push((int) 24663)
0x208: Push((int) 24672)
0x209: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 24659)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral" // @poff=89
0x211: Call2 0xe4

0x212: Pop(1)
0x213: Push((int) 523438)
0x214: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x215: Pop(1)
0x216: @@@ ClearReplies(); Obj=0 // @poff=116
0x217: Pop(0)
0x218: Push((int) 523439)
0x219: Push((int) 24651)
0x21a: Push((int) 24660)
0x21b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21c: Pop(3)
0x21d: Push((int) 523440)
0x21e: Push((int) 24663)
0x21f: Push((int) 24662)
0x220: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 24663)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral" // @poff=89
0x228: Call2 0xe4

0x229: Pop(1)
0x22a: Push((int) 523441)
0x22b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22c: Pop(1)
0x22d: @@@ ClearReplies(); Obj=0 // @poff=116
0x22e: Pop(0)
0x22f: Push((int) 523442)
0x230: Push((int) 24651)
0x231: Push((int) 24664)
0x232: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x233: Pop(3)
0x234: Push((int) 523443)
0x235: Push((int) 24651)
0x236: Push((int) 24666)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 24647)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral" // @poff=89
0x23f: Call2 0xe4

0x240: Pop(1)
0x241: Push((int) 523426)
0x242: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x243: Pop(1)
0x244: @@@ ClearReplies(); Obj=0 // @poff=116
0x245: Pop(0)
0x246: Push((int) 523427)
0x247: Push((int) 24649)
0x248: Push((int) 24648)
0x249: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 24649)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Neutral" // @poff=89
0x251: Call2 0xe4

0x252: Pop(1)
0x253: Push((int) 523428)
0x254: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x255: Pop(1)
0x256: @@@ ClearReplies(); Obj=0 // @poff=116
0x257: Pop(0)
0x258: Push((int) 523429)
0x259: Push((int) 24651)
0x25a: Push((int) 24650)
0x25b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Push((int) 24651)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral" // @poff=89
0x263: Call2 0xe4

0x264: Pop(1)
0x265: Push((int) 523430)
0x266: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x267: Pop(1)
0x268: @@@ ClearReplies(); Obj=0 // @poff=116
0x269: Pop(0)
0x26a: Push((int) 522020)
0x26b: Push((int) -1)
0x26c: Push((int) 23190)
0x26d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26e: Pop(3)
0x26f: Push((int) 523434)
0x270: Push((int) -1)
0x271: Push((int) 24655)
0x272: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x276: PushEmpty(bool)
0x277: Call2 0x40c

0x278: Pop(0)
0x279: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27a: @ lshStopAnimation()
0x27b: Pop(0)
0x27c: GOTO 0x27f

0x27d: @ StopAnimation()
0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: GOTO 0xfb

0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: PushEmpty(int, object)
0x284: Stack[-3] = Stack[-1]
0x285: Push(-2, 1); TaskCall(1)
0x286: Call2 0xd

0x287: Pop(-2, 1); TaskReturn
0x288: Pop(2)
0x289: Return(); Pop(0)

0x28a: PushEmpty(bool)
0x28b: Call2 0x2c7

0x28c: Pop(0)
0x28d: Pop(1); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28f: PushEmpty()
0x290: Push(-0, 0); TaskCall(0)
0x291: Call2 0x0

0x292: Pop(-0, 0); TaskReturn
0x293: Pop(0)
0x294: PushEmpty(string)
0x295: Stack[-1] = "Neutral" // @poff=89
0x296: Call2 0x3ab

0x297: Pop(1)
0x298: @ lshWaitForAnimEnd()
0x299: Pop(0)
0x29a: GOTO 0x294

0x29b: @ Hold()
0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: Push(-0, 0); TaskCall(0)
0x2a0: Call2 0x0

0x2a1: Pop(-0, 0); TaskReturn
0x2a2: Pop(0)
0x2a3: Return(); Pop(0)

0x2a4: PushEmpty(bool, bool)
0x2a5: @ IsOverrideActive(Stack[-1])
0x2a6: Pop(0)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2a9: EventDisable(0)
0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-5] = Stack[-1]
0x2ac: Call2 0x2be

0x2ad: Pop(2)
0x2ae: EventEnable(0)
0x2af: PushEmpty(object)
0x2b0: Stack[-4] = Stack[-1]
0x2b1: Call2 0x282

0x2b2: Pop(1)
0x2b3: Return(); Pop(2)

0x2b4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2b5: @ GetPosition(Stack[-3])
0x2b6: Pop(0)
0x2b7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2b8: Push(CvectorIndex(Stack[-2], 0))
0x2b9: Push(CvectorIndex(Stack[-3], 2))
0x2ba: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2bb: Pop(2)
0x2bc: Stack[-1] = Stack[-8]
0x2bd: Return(); Pop(6)

0x2be: PushEmpty(cvector, cvector)
0x2bf: @@ GetPosition(Stack[-1]); Obj=3 // @poff=156
0x2c0: Pop(0)
0x2c1: PushEmpty(bool, cvector)
0x2c2: Stack[-3] = Stack[-1]
0x2c3: Call2 0x2b4

0x2c4: Stack[-2] = Stack[-6]
0x2c5: Pop(2)
0x2c6: Return(); Pop(2)

0x2c7: PushEmpty(bool, bool)
0x2c8: @ IsLoaded(Stack[-1])
0x2c9: Pop(0)
0x2ca: Stack[-1] = Stack[-3]
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2cd: @@ GetPosition(Stack[-8]); Obj=20 // @poff=156
0x2ce: Pop(0)
0x2cf: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=168
0x2d0: Pop(0)
0x2d1: Push(CvectorIndex(Stack[-8], 1))
0x2d2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2d4: @ GetPosition(Stack[-7])
0x2d5: Pop(0)
0x2d6: @ GetEyesHeight(Stack[-9])
0x2d7: Pop(0)
0x2d8: Push(CvectorIndex(Stack[-7], 1))
0x2d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2da: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2db: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2dc: Push(CvectorIndex(Stack[-6], 1))
0x2dd: Stack[-1] = (int) 0
0x2de: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2df: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e0: Pop(1); Push(Sqrt(Stack[-1]))
0x2e1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e2: Stack[-5] = -Stack[-6]; Pop(0);
0x2e3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2e4: PushEmpty(cvector, cvector)
0x2e5: Push([0.0, 1.0, 0.0])
0x2e6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2e7: Call2 0x3d4

0x2e8: Pop(1)
0x2e9: Push((int) 25)
0x2ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ec: Push([0.0, 10.0, 0.0])
0x2ed: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ee: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ef: @ IsOverrideActive(Stack[-2])
0x2f0: Pop(0)
0x2f1: Push(Stack[-2])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-21] = (bool) 0
0x2f4: Return(); Pop(18)

0x2f5: @ StopWorld()
0x2f6: Pop(0)
0x2f7: @ CameraTransit(Stack[-3], Stack[-5])
0x2f8: Pop(0)
0x2f9: Push(CvectorIndex(Stack[-4], 0))
0x2fa: Push(CvectorIndex(Stack[-5], 2))
0x2fb: @ Rotate(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: PushEmpty(bool)
0x2fe: Call2 0x40c

0x2ff: Pop(0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: GOTO 0x30a

0x302: Push("head") // @poff=182
0x303: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x304: Pop(1)
0x305: Push(Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x307: Push("head") // @poff=182
0x308: @ LookAsyncCamera(Stack[-1])
0x309: Pop(1)
0x30a: @ CameraWaitForPlayFinish()
0x30b: Pop(0)
0x30c: @ ResumeWorld()
0x30d: Pop(0)
0x30e: Stack[-21] = (bool) 1
0x30f: Return(); Pop(18)

0x310: PushEmpty(bool, bool)
0x311: @ CameraSwitchToNormal()
0x312: Pop(0)
0x313: PushEmpty(bool)
0x314: Call2 0x40c

0x315: Pop(0)
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: GOTO 0x320

0x318: Push("head") // @poff=182
0x319: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x31a: Pop(1)
0x31b: Push(Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31d: Push("head") // @poff=182
0x31e: @ UnlookAsync(Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(2)

0x321: PushEmpty(int, int, int, int)
0x322: Push("voice_common") // @poff=192
0x323: @ GetVariable(Stack[-1], Stack[-3])
0x324: Pop(1)
0x325: Push(Stack[-2])
0x326: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x327: PushEmpty(bool, object)
0x328: Stack[-7] = Stack[-1]
0x329: Call2 0x35b

0x32a: Pop(1)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32d: PushEmpty(bool, object)
0x32e: Stack[-7] = Stack[-1]
0x32f: Call2 0x380

0x330: Pop(1)
0x331: Pop(1); Push((bool) Stack[-1] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-6] = (bool) 0
0x334: Return(); Pop(4)

0x335: Push((int) 2)
0x336: @ irand(Stack[-2], Stack[-1])
0x337: Pop(1)
0x338: Push(Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33a: Push("voice_common") // @poff=192
0x33b: Push((int) 1)
0x33c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x33d: Push((int) 3)
0x33e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x33f: @ SetVariable(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: GOTO 0x346

0x342: Push("voice_common") // @poff=192
0x343: Push((int) 0)
0x344: @ SetVariable(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: GOTO 0x359

0x347: PushEmpty(bool, object)
0x348: Stack[-7] = Stack[-1]
0x349: Call2 0x380

0x34a: Pop(1)
0x34b: Pop(1); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x34d: PushEmpty(bool, object)
0x34e: Stack[-7] = Stack[-1]
0x34f: Call2 0x35b

0x350: Pop(1)
0x351: Pop(1); Push((bool) Stack[-1] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-6] = (bool) 0
0x354: Return(); Pop(4)

0x355: Push("voice_common") // @poff=192
0x356: Push((int) 1)
0x357: @ SetVariable(Stack[-2], Stack[-1])
0x358: Pop(2)
0x359: Stack[-6] = (bool) 1
0x35a: Return(); Pop(4)

0x35b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x35c: Stack[-5] = "c" // @poff=218
0x35d: Stack[-4] = (int) 0
0x35e: Push((int) 1)
0x35f: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x360: Push((int) 1)
0x361: Pop(1); Push(Stack[-5] + Stack[-1]);
0x362: Pop(1); Push(Stack[-6] + Stack[-1]);
0x363: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x364: Pop(1)
0x365: Pop(0); Push((bool) Stack[-3] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: GOTO 0x36b

0x368: Push((int) 1)
0x369: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x36a: GOTO 0x35e

0x36b: Pop(0); Push((bool) Stack[-4] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-12] = (bool) 0
0x36e: Return(); Pop(10)

0x36f: Stack[-2] = (int) 0
0x370: Push((int) 1)
0x371: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: @ irand(Stack[-2], Stack[-4])
0x374: Pop(0)
0x375: Push((int) 1)
0x376: Pop(1); Push(Stack[-3] + Stack[-1]);
0x377: Pop(1); Push(Stack[-6] + Stack[-1]);
0x378: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x379: Pop(1)
0x37a: PushEmpty(bool, string)
0x37b: Stack[-3] = Stack[-1]
0x37c: Call2 0x3b8

0x37d: Stack[-2] = Stack[-14]
0x37e: Pop(2)
0x37f: Return(); Pop(10)

0x380: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x381: Push("d") // @poff=188
0x382: PushEmpty(int)
0x383: Call2 0x3fb

0x384: Pop(0)
0x385: Pop(2); Push(Stack[-2] + Stack[-1]);
0x386: Push("m") // @poff=246
0x387: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x388: Stack[-4] = (int) 0
0x389: Push((int) 1)
0x38a: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38b: Push((int) 1)
0x38c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x38d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=222
0x38f: Pop(1)
0x390: Pop(0); Push((bool) Stack[-3] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: GOTO 0x396

0x393: Push((int) 1)
0x394: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x395: GOTO 0x389

0x396: Pop(0); Push((bool) Stack[-4] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x398: Stack[-12] = (bool) 0
0x399: Return(); Pop(10)

0x39a: Stack[-2] = (int) 0
0x39b: Push((int) 1)
0x39c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: @ irand(Stack[-2], Stack[-4])
0x39f: Pop(0)
0x3a0: Push((int) 1)
0x3a1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a3: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x3a4: Pop(1)
0x3a5: PushEmpty(bool, string)
0x3a6: Stack[-3] = Stack[-1]
0x3a7: Call2 0x3b8

0x3a8: Stack[-2] = Stack[-14]
0x3a9: Pop(2)
0x3aa: Return(); Pop(10)

0x3ab: PushEmpty(float, float, float, float)
0x3ac: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3ad: Pop(0)
0x3ae: Push((bool) 0)
0x3af: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(1)
0x3b1: Return(); Pop(4)

0x3b2: PushEmpty(float, float, float, float)
0x3b3: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3b4: Pop(0)
0x3b5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3b6: Pop(0)
0x3b7: Return(); Pop(4)

0x3b8: PushEmpty(bool, bool)
0x3b9: PushEmpty(bool)
0x3ba: Call2 0x40c

0x3bb: Pop(0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3bd: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3be: Pop(0)
0x3bf: Push(Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c1: @ lshPlaySpeech(Stack[-3])
0x3c2: Pop(0)
0x3c3: Stack[-4] = (bool) 1
0x3c4: Return(); Pop(2)

0x3c5: Stack[-4] = (bool) 0
0x3c6: Return(); Pop(2)

0x3c7: PushEmpty(bool)
0x3c8: Call2 0x40c

0x3c9: Pop(0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: @ lshStopSpeech()
0x3cc: Pop(0)
0x3cd: Return(); Pop(0)

0x3ce: PushEmpty(object, object)
0x3cf: @ self(Stack[-1])
0x3d0: Pop(0)
0x3d1: Stack[-1] = Stack[-3]
0x3d2: Return(); Pop(2)

0x3d3: Stack[-1] = 0
0x3d4: PushEmpty(float, float)
0x3d5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3d6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3d7: Push((float)9.999999974752427e-07)
0x3d8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3da: Stack[-4] = [0.0, 0.0, 0.0]
0x3db: Return(); Pop(2)

0x3dc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3dd: Return(); Pop(2)

0x3de: PushEmpty(int, int)
0x3df: @ GetVariable(Stack[-3], Stack[-1])
0x3e0: Pop(0)
0x3e1: Stack[-1] = Stack[-4]
0x3e2: Return(); Pop(2)

0x3e3: PushEmpty(object, object)
0x3e4: @ FindActor(Stack[-1], Stack[-4])
0x3e5: Pop(0)
0x3e6: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e8: Stack[-5] = (bool) 0
0x3e9: Return(); Pop(2)

0x3ea: @ Trigger(Stack[-1], Stack[-3])
0x3eb: Pop(0)
0x3ec: Stack[-5] = (bool) 1
0x3ed: Return(); Pop(2)

0x3ee: Stack[-1] = 0
0x3ef: PushEmpty(object, object)
0x3f0: @ FindActor(Stack[-1], Stack[-5])
0x3f1: Pop(0)
0x3f2: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-6] = (bool) 0
0x3f5: Return(); Pop(2)

0x3f6: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3f7: Pop(0)
0x3f8: Stack[-6] = (bool) 1
0x3f9: Return(); Pop(2)

0x3fa: Stack[-1] = 0
0x3fb: PushEmpty(float, float)
0x3fc: @ GetGameTime(Stack[-1])
0x3fd: Pop(0)
0x3fe: Push((int) 1)
0x3ff: PushEmpty(int)
0x400: Push((int) 24)
0x401: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x402: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x403: Return(); Pop(2)

0x404: Stack[-1] = (int) 515541
0x405: Return(); Pop(0)

0x406: Stack[-1] = (int) 502866
0x407: Return(); Pop(0)

0x408: Stack[-1] = "ui/NPC_Lara.png" // @poff=250
0x409: Return(); Pop(0)

0x40a: Stack[-1] = "ui/NPC_Lara_b.png" // @poff=282
0x40b: Return(); Pop(0)

0x40c: Stack[-1] = (bool) 1
0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: Push("b11q01KnowWhoKilled") // @poff=318
0x410: Push((int) 1)
0x411: @ SetVariable(Stack[-2], Stack[-1])
0x412: Pop(2)
0x413: PushEmpty()
0x414: Call2 0x45f

0x415: Pop(0)
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: Push("b11q01VictimChoosed") // @poff=358
0x419: Push((int) 1)
0x41a: @ SetVariable(Stack[-2], Stack[-1])
0x41b: Pop(2)
0x41c: Push("b11q01KillLara") // @poff=398
0x41d: Push((int) 1)
0x41e: @ SetVariable(Stack[-2], Stack[-1])
0x41f: Pop(2)
0x420: PushEmpty(bool, string, string, string)
0x421: Stack[-3] = "volonteers_danko" // @poff=428
0x422: Stack[-2] = "kill" // @poff=462
0x423: Stack[-1] = "lara" // @poff=472
0x424: Call2 0x3ef

0x425: Pop(4)
0x426: Push("Lara is dead") // @poff=482
0x427: @ Trace(Stack[-1])
0x428: Pop(1)
0x429: Return(); Pop(0)

0x42a: PushEmpty()
0x42b: Push("oob11Lara1") // @poff=508
0x42c: Push((int) 1)
0x42d: @ SetVariable(Stack[-2], Stack[-1])
0x42e: Pop(2)
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: Push("b11q01") // @poff=530
0x432: Push((int) 2)
0x433: @ SetVariable(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: PushEmpty(bool, string, string)
0x436: Stack[-2] = "quest_b11_01" // @poff=544
0x437: Stack[-1] = "open_well_exit" // @poff=570
0x438: Call2 0x3e3

0x439: Pop(3)
0x43a: Return(); Pop(0)

0x43b: PushEmpty()
0x43c: PushEmpty(int, string)
0x43d: Stack[-1] = "b11q01VictimChoosed" // @poff=358
0x43e: Call2 0x3de

0x43f: Pop(1)
0x440: Push((int) 0)
0x441: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-2] = (bool) 1
0x444: Return(); Pop(0)

0x445: Stack[-2] = (bool) 0
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: PushEmpty(int, string)
0x449: Stack[-1] = "oob11Lara1" // @poff=508
0x44a: Call2 0x3de

0x44b: Pop(1)
0x44c: Push((int) 0)
0x44d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-2] = (bool) 1
0x450: Return(); Pop(0)

0x451: Stack[-2] = (bool) 0
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: PushEmpty(int, string)
0x455: Stack[-1] = "b11q01KillLara" // @poff=398
0x456: Call2 0x3de

0x457: Pop(1)
0x458: Push((int) 0)
0x459: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-2] = (bool) 1
0x45c: Return(); Pop(0)

0x45d: Stack[-2] = (bool) 0
0x45e: Return(); Pop(0)

0x45f: PushEmpty(object, object)
0x460: Push((int) 315)
0x461: Push((int) 1)
0x462: Push((int) 522057)
0x463: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x464: Pop(3)
0x465: PushEmpty(bool, object, int)
0x466: Stack[-4] = Stack[-2]
0x467: Stack[-1] = (int) 313
0x468: Call2 0x479

0x469: Pop(3)
0x46a: Return(); Pop(2)

0x46b: Stack[-1] = 0
0x46c: PushEmpty(object, object)
0x46d: @ GetDiaryRoot(Stack[-1])
0x46e: Pop(0)
0x46f: Pop(0); Push((bool) Stack[-1] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x471: Push("Can't retrieve diary root") // @poff=600
0x472: @ Trace(Stack[-1])
0x473: Pop(1)
0x474: Stack[-3] = (bool) 0
0x475: Return(); Pop(2)

0x476: Stack[-1] = Stack[-3]
0x477: Return(); Pop(2)

0x478: Stack[-1] = 0
0x479: PushEmpty(object, object, int, object, object, int)
0x47a: PushEmpty(object)
0x47b: Call2 0x46c

0x47c: Stack[-1] = Stack[-4]
0x47d: Pop(1)
0x47e: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=652
0x47f: Pop(0)
0x480: Pop(0); Push((bool) Stack[-2] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x482: Push("Can't find diary parent with id: ") // @poff=657
0x483: Pop(1); Push(Stack[-1] + Stack[-8]);
0x484: @ Trace(Stack[-1])
0x485: Pop(1)
0x486: Stack[-9] = (bool) 0
0x487: Return(); Pop(6)

0x488: @@ AddChild(Stack[-8]); Obj=2 // @poff=725
0x489: Pop(0)
0x48a: Push((int) 7)
0x48b: @ SendWorldWndMessage(Stack[-1])
0x48c: Pop(1)
0x48d: @@ GetCategory(Stack[-1]); Obj=8 // @poff=734
0x48e: Pop(0)
0x48f: @ SetDiarySection(Stack[-1])
0x490: Pop(0)
0x491: Stack[-9] = (bool) 0
0x492: Return(); Pop(6)

0x493: Stack[-2] = 0
0x494: Stack[-3] = 0
0x495: PushEmpty(int, int)
0x496: Push("branch") // @poff=746
0x497: @ GetVariable(Stack[-1], Stack[-2])
0x498: Pop(1)
0x499: Push((int) 0)
0x49a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49c: Stack[-3] = (int) 1
0x49d: Return(); Pop(2)

0x49e: GOTO 0x4a4

0x49f: Push((int) 1)
0x4a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-3] = (int) 2
0x4a3: Return(); Pop(2)

0x4a4: Stack[-3] = (int) 3
0x4a5: Return(); Pop(2)

