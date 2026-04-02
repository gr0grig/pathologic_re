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
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:k11q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b00310031007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1d1
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1d5 Vars = (string)
		EVENT_6 Op = 0x1e9 Vars = ()
		EVENT_5 Op = 0x1f6 Vars = ()
		EVENT_7 Op = 0x245 Vars = (int)
		EVENT_45 Op = 0x287 Vars = (bool)
		EVENT_0 Op = 0x293 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x317

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
0x11: Call2 0x41e

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x371

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x31c

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x4b2

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x4b0

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x4b4

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x4b6

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x49f

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
0x55: Call2 0x360

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
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 527220)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x45d

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 527221)
0x73: Push((int) 28839)
0x74: Push((int) 28529)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 527224)
0x78: Push((int) -1)
0x79: Push((int) 28532)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x4b8

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x3fb

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x4b8

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x402

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x417

0xb8: Pop(0)
0xb9: Push((int) 28869)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x454

0xc0: Pop(2)
0xc1: Push((int) 28870)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x454

0xc8: Pop(2)
0xc9: Push((int) 28528)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x9d

0xcf: Pop(1)
0xd0: Push((int) 527220)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x45d

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 527221)
0xdb: Push((int) 28839)
0xdc: Push((int) 28529)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Push((int) 527224)
0xe0: Push((int) -1)
0xe1: Push((int) 28532)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 28839)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral" // @poff=89
0xea: Call2 0x9d

0xeb: Pop(1)
0xec: Push((int) 527507)
0xed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xee: Pop(1)
0xef: @@@ ClearReplies(); Obj=0 // @poff=116
0xf0: Pop(0)
0xf1: Push((int) 527508)
0xf2: Push((int) 28842)
0xf3: Push((int) 28840)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: Push((int) 527509)
0xf7: Push((int) 28842)
0xf8: Push((int) 28841)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 28842)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral" // @poff=89
0x101: Call2 0x9d

0x102: Pop(1)
0x103: Push((int) 527510)
0x104: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x105: Pop(1)
0x106: @@@ ClearReplies(); Obj=0 // @poff=116
0x107: Pop(0)
0x108: Push((int) 527511)
0x109: Push((int) 28845)
0x10a: Push((int) 28843)
0x10b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10c: Pop(3)
0x10d: Push((int) 527512)
0x10e: Push((int) 28845)
0x10f: Push((int) 28844)
0x110: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 28845)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral" // @poff=89
0x118: Call2 0x9d

0x119: Pop(1)
0x11a: Push((int) 527513)
0x11b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11c: Pop(1)
0x11d: @@@ ClearReplies(); Obj=0 // @poff=116
0x11e: Pop(0)
0x11f: Push((int) 527514)
0x120: Push((int) 28850)
0x121: Push((int) 28846)
0x122: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 28850)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral" // @poff=89
0x12a: Call2 0x9d

0x12b: Pop(1)
0x12c: Push((int) 527516)
0x12d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12e: Pop(1)
0x12f: @@@ ClearReplies(); Obj=0 // @poff=116
0x130: Pop(0)
0x131: Push((int) 527517)
0x132: Push((int) 28853)
0x133: Push((int) 28851)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Push((int) 527518)
0x137: Push((int) 28853)
0x138: Push((int) 28852)
0x139: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 28853)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral" // @poff=89
0x141: Call2 0x9d

0x142: Pop(1)
0x143: Push((int) 527519)
0x144: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x145: Pop(1)
0x146: @@@ ClearReplies(); Obj=0 // @poff=116
0x147: Pop(0)
0x148: Push((int) 527520)
0x149: Push((int) 28530)
0x14a: Push((int) 28855)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Push((int) 527521)
0x14e: Push((int) 28530)
0x14f: Push((int) 28856)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 28530)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral" // @poff=89
0x158: Call2 0x9d

0x159: Pop(1)
0x15a: Push((int) 527222)
0x15b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15c: Pop(1)
0x15d: @@@ ClearReplies(); Obj=0 // @poff=116
0x15e: Pop(0)
0x15f: Push((int) 527223)
0x160: Push((int) 28863)
0x161: Push((int) 28531)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Push((int) 527523)
0x165: Push((int) -1)
0x166: Push((int) 28859)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 28863)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=89
0x16f: Call2 0x9d

0x170: Pop(1)
0x171: Push((int) 527526)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=116
0x175: Pop(0)
0x176: Push((int) 527527)
0x177: Push((int) 28866)
0x178: Push((int) 28864)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17a: Pop(3)
0x17b: Push((int) 527528)
0x17c: Push((int) 28866)
0x17d: Push((int) 28865)
0x17e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 28866)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral" // @poff=89
0x186: Call2 0x9d

0x187: Pop(1)
0x188: Push((int) 527529)
0x189: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18a: Pop(1)
0x18b: @@@ ClearReplies(); Obj=0 // @poff=116
0x18c: Pop(0)
0x18d: Push((int) 527530)
0x18e: Push((int) 28858)
0x18f: Push((int) 28867)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 28858)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral" // @poff=89
0x198: Call2 0x9d

0x199: Pop(1)
0x19a: Push((int) 527522)
0x19b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19c: Pop(1)
0x19d: @@@ ClearReplies(); Obj=0 // @poff=116
0x19e: Pop(0)
0x19f: Push((int) 527524)
0x1a0: Push((int) 28862)
0x1a1: Push((int) 28861)
0x1a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 28862)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral" // @poff=89
0x1aa: Call2 0x9d

0x1ab: Pop(1)
0x1ac: Push((int) 527525)
0x1ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ae: Pop(1)
0x1af: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b0: Pop(0)
0x1b1: Push((int) 527531)
0x1b2: Push((int) -1)
0x1b3: Push((int) 28869)
0x1b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b5: Pop(3)
0x1b6: Push((int) 527532)
0x1b7: Push((int) -1)
0x1b8: Push((int) 28870)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1bd: PushEmpty(bool)
0x1be: Call2 0x4b8

0x1bf: Pop(0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: @ lshStopAnimation()
0x1c2: Pop(0)
0x1c3: GOTO 0x1c6

0x1c4: @ StopAnimation()
0x1c5: Pop(0)
0x1c6: Return(); Pop(0)

0x1c7: GOTO 0xb4

0x1c8: Return(); Pop(0)

0x1c9: PushEmpty()
0x1ca: PushEmpty(int, object)
0x1cb: Stack[-3] = Stack[-1]
0x1cc: Push(-2, 1); TaskCall(1)
0x1cd: Call2 0xd

0x1ce: Pop(-2, 1); TaskReturn
0x1cf: Pop(2)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty()
0x1d2: Call2 0x1fa

0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty(bool, bool)
0x1d6: Push("cleanup") // @poff=156
0x1d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d9: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1da: @ IsLoaded(Stack[-1])
0x1db: Pop(0)
0x1dc: Pop(0); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(object)
0x1df: Call2 0x41e

0x1e0: Pop(0)
0x1e1: @ RemoveActor(Stack[-1])
0x1e2: Pop(1)
0x1e3: GOTO 0x1e8

0x1e4: Push("restore") // @poff=172
0x1e5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1e8: Return(); Pop(2)

0x1e9: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1eb: PushEmpty(object)
0x1ec: Call2 0x41e

0x1ed: Pop(0)
0x1ee: @ RemoveActor(Stack[-1])
0x1ef: Pop(1)
0x1f0: @ Hold()
0x1f1: Pop(0)
0x1f2: PushEmpty()
0x1f3: Call2 0x26b

0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: Call2 0x27a

0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(bool)
0x1fb: Call2 0x317

0x1fc: Pop(0)
0x1fd: Pop(1); Push((bool) Stack[-1] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: PushEmpty()
0x200: Push(-0, 0); TaskCall(0)
0x201: Call2 0x0

0x202: Pop(-0, 0); TaskReturn
0x203: Pop(0)
0x204: PushEmpty()
0x205: Call2 0x1f6

0x206: Pop(0)
0x207: @ GetDirection(Stack[-0]T)
0x208: Pop(0)
0x209: PushEmpty()
0x20a: Call2 0x2b0

0x20b: Pop(0)
0x20c: GOTO 0x209

0x20d: Return(); Pop(0)

0x20e: PushEmpty(object, object)
0x20f: Push("player") // @poff=188
0x210: @ FindActor(Stack[-2], Stack[-1])
0x211: Pop(1)
0x212: Pop(0); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-3] = (bool) 0
0x215: Return(); Pop(2)

0x216: PushEmpty(bool, object)
0x217: Stack[-3] = Stack[-1]
0x218: Call2 0x30e

0x219: Stack[-2] = Stack[-5]
0x21a: Pop(2)
0x21b: Return(); Pop(2)

0x21c: Stack[-1] = 0
0x21d: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x21e: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x21f: @ RotateAsync(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: Return(); Pop(0)

0x222: PushEmpty(object, bool, object, bool)
0x223: Push("player") // @poff=188
0x224: @ FindActor(Stack[-3], Stack[-1])
0x225: Pop(1)
0x226: Pop(0); Push((bool) Stack[-2] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: Stack[-5] = (bool) 0
0x229: Return(); Pop(4)

0x22a: PushEmpty(float, object)
0x22b: Stack[-4] = Stack[-1]
0x22c: Call2 0x2fc

0x22d: Pop(1)
0x22e: Push((float)90000.0)
0x22f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: Stack[-5] = (bool) 0
0x232: Return(); Pop(4)

0x233: @ CanSee(Stack[-1], Stack[-2])
0x234: Pop(0)
0x235: Stack[-1] = Stack[-5]
0x236: Return(); Pop(4)

0x237: Stack[-2] = 0
0x238: PushEmpty(float, float)
0x239: Push((int) 8)
0x23a: Push((int) 16)
0x23b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: Push((int) 10)
0x23e: @ SetTimer(Stack[-1], Stack[-2])
0x23f: Pop(1)
0x240: Return(); Pop(2)

0x241: Push((int) 10)
0x242: @ KillTimer(Stack[-1])
0x243: Pop(1)
0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: Push((int) 10)
0x247: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x249: PushEmpty()
0x24a: Call2 0x241

0x24b: Pop(0)
0x24c: PushEmpty(bool)
0x24d: Stack[-1] = (bool) 0
0x24e: PushEmpty(bool)
0x24f: Call2 0x317

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: PushEmpty(bool)
0x253: Call2 0x222

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Stack[-1] = (bool) 1
0x257: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x258: PushEmpty(bool)
0x259: Call2 0x20e

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25c: PushEmpty(bool, object)
0x25d: PushEmpty(object)
0x25e: Call2 0x41e

0x25f: Stack[-1] = Stack[-2]
0x260: Pop(1)
0x261: Call2 0x3ab

0x262: Pop(2)
0x263: GOTO 0x26a

0x264: PushEmpty()
0x265: Call2 0x21d

0x266: Pop(0)
0x267: PushEmpty()
0x268: Call2 0x238

0x269: Pop(0)
0x26a: Return(); Pop(0)

0x26b: PushEmpty()
0x26c: Call2 0x2f7

0x26d: Pop(0)
0x26e: PushEmpty()
0x26f: Call2 0x241

0x270: Pop(0)
0x271: @ lshStopSpeech()
0x272: Pop(0)
0x273: @ lshStopAnimation()
0x274: Pop(0)
0x275: @ StopAsync()
0x276: Pop(0)
0x277: @ Hold()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: @ StopGroup0()
0x27b: Pop(0)
0x27c: PushEmpty()
0x27d: Call2 0x241

0x27e: Pop(0)
0x27f: PushEmpty(string)
0x280: Stack[-1] = "Neutral" // @poff=89
0x281: Call2 0x3fb

0x282: Pop(1)
0x283: PushEmpty()
0x284: Call2 0x238

0x285: Pop(0)
0x286: Return(); Pop(0)

0x287: PushEmpty()
0x288: Push(Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28a: PushEmpty()
0x28b: Call2 0x238

0x28c: Pop(0)
0x28d: GOTO 0x292

0x28e: PushEmpty(string)
0x28f: Stack[-1] = "Neutral" // @poff=89
0x290: Call2 0x3fb

0x291: Pop(1)
0x292: Return(); Pop(0)

0x293: PushEmpty(bool, bool)
0x294: @ IsOverrideActive(Stack[-1])
0x295: Pop(0)
0x296: Pop(0); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x298: EventDisable(0)
0x299: PushEmpty()
0x29a: Call2 0x2f7

0x29b: Pop(0)
0x29c: PushEmpty(bool, object)
0x29d: Stack[-5] = Stack[-1]
0x29e: Call2 0x30e

0x29f: Pop(2)
0x2a0: EventEnable(0)
0x2a1: PushEmpty(object)
0x2a2: Stack[-4] = Stack[-1]
0x2a3: Call2 0x1c9

0x2a4: Pop(1)
0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=89
0x2a7: Call2 0x3fb

0x2a8: Pop(1)
0x2a9: PushEmpty()
0x2aa: Call2 0x241

0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x238

0x2ae: Pop(0)
0x2af: Return(); Pop(2)

0x2b0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2b1: @ WaitForAnimEnd()
0x2b2: Pop(0)
0x2b3: PushEmpty(bool)
0x2b4: Call2 0x317

0x2b5: Pop(0)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Return(); Pop(12)

0x2b9: PushEmpty(int)
0x2ba: Call2 0x443

0x2bb: Stack[-1] = Stack[-7]
0x2bc: Pop(1)
0x2bd: Stack[-5] = (int) 0
0x2be: PushEmpty(bool)
0x2bf: Stack[-1] = (bool) 0
0x2c0: Push((int) 5)
0x2c1: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: PushEmpty(bool)
0x2c4: Call2 0x317

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: Stack[-1] = (bool) 1
0x2c8: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2c9: Pop(0); Push((bool) Stack[-6] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cb: Push((int) 3)
0x2cc: @ Sleep(Stack[-1], Stack[-5])
0x2cd: Pop(1)
0x2ce: Pop(0); Push((bool) Stack[-4] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2f2

0x2d1: GOTO 0x2e7

0x2d2: @ irand(Stack[-3], Stack[-6])
0x2d3: Pop(0)
0x2d4: Push((int) 5)
0x2d5: @ irand(Stack[-3], Stack[-1])
0x2d6: Pop(1)
0x2d7: Push((int) 0)
0x2d8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: Stack[-3] = (int) 0
0x2db: Push("all") // @poff=138
0x2dc: PushEmpty(string, int)
0x2dd: Stack[-6] = Stack[-1]
0x2de: Call2 0x43c

0x2df: Pop(1)
0x2e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: @ WaitForAnimEnd(Stack[-1])
0x2e3: Pop(0)
0x2e4: Pop(0); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x2f2

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x2f5

0x2e9: Pop(0)
0x2ea: Pop(1); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2f2

0x2ed: @ ResetAAS()
0x2ee: Pop(0)
0x2ef: Push((int) 1)
0x2f0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2f1: GOTO 0x2be

0x2f2: @ ResetAAS()
0x2f3: Pop(0)
0x2f4: Return(); Pop(12)

0x2f5: Stack[-1] = (bool) 1
0x2f6: Return(); Pop(0)

0x2f7: @ StopAnimation()
0x2f8: Pop(0)
0x2f9: @ StopGroup0()
0x2fa: Pop(0)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2fd: @ GetPosition(Stack[-3])
0x2fe: Pop(0)
0x2ff: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x300: Pop(0)
0x301: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x302: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x303: Return(); Pop(6)

0x304: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x305: @ GetPosition(Stack[-3])
0x306: Pop(0)
0x307: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x308: Push(CvectorIndex(Stack[-2], 0))
0x309: Push(CvectorIndex(Stack[-3], 2))
0x30a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x30b: Pop(2)
0x30c: Stack[-1] = Stack[-8]
0x30d: Return(); Pop(6)

0x30e: PushEmpty(cvector, cvector)
0x30f: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x310: Pop(0)
0x311: PushEmpty(bool, cvector)
0x312: Stack[-3] = Stack[-1]
0x313: Call2 0x304

0x314: Stack[-2] = Stack[-6]
0x315: Pop(2)
0x316: Return(); Pop(2)

0x317: PushEmpty(bool, bool)
0x318: @ IsLoaded(Stack[-1])
0x319: Pop(0)
0x31a: Stack[-1] = Stack[-3]
0x31b: Return(); Pop(2)

0x31c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x31d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x31e: Pop(0)
0x31f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x320: Pop(0)
0x321: Push(CvectorIndex(Stack[-8], 1))
0x322: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x323: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x324: @ GetPosition(Stack[-7])
0x325: Pop(0)
0x326: @ GetEyesHeight(Stack[-9])
0x327: Pop(0)
0x328: Push(CvectorIndex(Stack[-7], 1))
0x329: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x32b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x32c: Push(CvectorIndex(Stack[-6], 1))
0x32d: Stack[-1] = (int) 0
0x32e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x32f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x330: Pop(1); Push(Sqrt(Stack[-1]))
0x331: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x332: Stack[-5] = -Stack[-6]; Pop(0);
0x333: Pop(0); Push(Stack[-6] * Stack[-19]);
0x334: PushEmpty(cvector, cvector)
0x335: Push([0.0, 1.0, 0.0])
0x336: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x337: Call2 0x424

0x338: Pop(1)
0x339: Push((int) 25)
0x33a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33c: Push([0.0, 10.0, 0.0])
0x33d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x33e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x33f: @ IsOverrideActive(Stack[-2])
0x340: Pop(0)
0x341: Push(Stack[-2])
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-21] = (bool) 0
0x344: Return(); Pop(18)

0x345: @ StopWorld()
0x346: Pop(0)
0x347: @ CameraTransit(Stack[-3], Stack[-5])
0x348: Pop(0)
0x349: Push(CvectorIndex(Stack[-4], 0))
0x34a: Push(CvectorIndex(Stack[-5], 2))
0x34b: @ Rotate(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: PushEmpty(bool)
0x34e: Call2 0x4b8

0x34f: Pop(0)
0x350: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x351: GOTO 0x35a

0x352: Push("head") // @poff=228
0x353: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x354: Pop(1)
0x355: Push(Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Push("head") // @poff=228
0x358: @ LookAsyncCamera(Stack[-1])
0x359: Pop(1)
0x35a: @ CameraWaitForPlayFinish()
0x35b: Pop(0)
0x35c: @ ResumeWorld()
0x35d: Pop(0)
0x35e: Stack[-21] = (bool) 1
0x35f: Return(); Pop(18)

0x360: PushEmpty(bool, bool)
0x361: @ CameraSwitchToNormal()
0x362: Pop(0)
0x363: PushEmpty(bool)
0x364: Call2 0x4b8

0x365: Pop(0)
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: GOTO 0x370

0x368: Push("head") // @poff=228
0x369: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x36a: Pop(1)
0x36b: Push(Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36d: Push("head") // @poff=228
0x36e: @ UnlookAsync(Stack[-1])
0x36f: Pop(1)
0x370: Return(); Pop(2)

0x371: PushEmpty(int, int, int, int)
0x372: Push("voice_common") // @poff=238
0x373: @ GetVariable(Stack[-1], Stack[-3])
0x374: Pop(1)
0x375: Push(Stack[-2])
0x376: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x377: PushEmpty(bool, object)
0x378: Stack[-7] = Stack[-1]
0x379: Call2 0x3ab

0x37a: Pop(1)
0x37b: Pop(1); Push((bool) Stack[-1] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37d: PushEmpty(bool, object)
0x37e: Stack[-7] = Stack[-1]
0x37f: Call2 0x3d0

0x380: Pop(1)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: Stack[-6] = (bool) 0
0x384: Return(); Pop(4)

0x385: Push((int) 2)
0x386: @ irand(Stack[-2], Stack[-1])
0x387: Pop(1)
0x388: Push(Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38a: Push("voice_common") // @poff=238
0x38b: Push((int) 1)
0x38c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x38d: Push((int) 3)
0x38e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x38f: @ SetVariable(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: GOTO 0x396

0x392: Push("voice_common") // @poff=238
0x393: Push((int) 0)
0x394: @ SetVariable(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: GOTO 0x3a9

0x397: PushEmpty(bool, object)
0x398: Stack[-7] = Stack[-1]
0x399: Call2 0x3d0

0x39a: Pop(1)
0x39b: Pop(1); Push((bool) Stack[-1] == 0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39d: PushEmpty(bool, object)
0x39e: Stack[-7] = Stack[-1]
0x39f: Call2 0x3ab

0x3a0: Pop(1)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-6] = (bool) 0
0x3a4: Return(); Pop(4)

0x3a5: Push("voice_common") // @poff=238
0x3a6: Push((int) 1)
0x3a7: @ SetVariable(Stack[-2], Stack[-1])
0x3a8: Pop(2)
0x3a9: Stack[-6] = (bool) 1
0x3aa: Return(); Pop(4)

0x3ab: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ac: Stack[-5] = "c" // @poff=264
0x3ad: Stack[-4] = (int) 0
0x3ae: Push((int) 1)
0x3af: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b0: Push((int) 1)
0x3b1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3b4: Pop(1)
0x3b5: Pop(0); Push((bool) Stack[-3] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: GOTO 0x3bb

0x3b8: Push((int) 1)
0x3b9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ba: GOTO 0x3ae

0x3bb: Pop(0); Push((bool) Stack[-4] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: Stack[-12] = (bool) 0
0x3be: Return(); Pop(10)

0x3bf: Stack[-2] = (int) 0
0x3c0: Push((int) 1)
0x3c1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: @ irand(Stack[-2], Stack[-4])
0x3c4: Pop(0)
0x3c5: Push((int) 1)
0x3c6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3c9: Pop(1)
0x3ca: PushEmpty(bool, string)
0x3cb: Stack[-3] = Stack[-1]
0x3cc: Call2 0x408

0x3cd: Stack[-2] = Stack[-14]
0x3ce: Pop(2)
0x3cf: Return(); Pop(10)

0x3d0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d1: Push("d") // @poff=234
0x3d2: PushEmpty(int)
0x3d3: Call2 0x433

0x3d4: Pop(0)
0x3d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d6: Push("m") // @poff=292
0x3d7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Stack[-4] = (int) 0
0x3d9: Push((int) 1)
0x3da: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3db: Push((int) 1)
0x3dc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3dd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3de: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3df: Pop(1)
0x3e0: Pop(0); Push((bool) Stack[-3] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: GOTO 0x3e6

0x3e3: Push((int) 1)
0x3e4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3e5: GOTO 0x3d9

0x3e6: Pop(0); Push((bool) Stack[-4] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e8: Stack[-12] = (bool) 0
0x3e9: Return(); Pop(10)

0x3ea: Stack[-2] = (int) 0
0x3eb: Push((int) 1)
0x3ec: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: @ irand(Stack[-2], Stack[-4])
0x3ef: Pop(0)
0x3f0: Push((int) 1)
0x3f1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f3: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3f4: Pop(1)
0x3f5: PushEmpty(bool, string)
0x3f6: Stack[-3] = Stack[-1]
0x3f7: Call2 0x408

0x3f8: Stack[-2] = Stack[-14]
0x3f9: Pop(2)
0x3fa: Return(); Pop(10)

0x3fb: PushEmpty(float, float, float, float)
0x3fc: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3fd: Pop(0)
0x3fe: Push((bool) 0)
0x3ff: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(1)
0x401: Return(); Pop(4)

0x402: PushEmpty(float, float, float, float)
0x403: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x404: Pop(0)
0x405: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x406: Pop(0)
0x407: Return(); Pop(4)

0x408: PushEmpty(bool, bool)
0x409: PushEmpty(bool)
0x40a: Call2 0x4b8

0x40b: Pop(0)
0x40c: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x40e: Pop(0)
0x40f: Push(Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x411: @ lshPlaySpeech(Stack[-3])
0x412: Pop(0)
0x413: Stack[-4] = (bool) 1
0x414: Return(); Pop(2)

0x415: Stack[-4] = (bool) 0
0x416: Return(); Pop(2)

0x417: PushEmpty(bool)
0x418: Call2 0x4b8

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: @ lshStopSpeech()
0x41c: Pop(0)
0x41d: Return(); Pop(0)

0x41e: PushEmpty(object, object)
0x41f: @ self(Stack[-1])
0x420: Pop(0)
0x421: Stack[-1] = Stack[-3]
0x422: Return(); Pop(2)

0x423: Stack[-1] = 0
0x424: PushEmpty(float, float)
0x425: Pop(0); Push(Stack[-3] | Stack[-3]);
0x426: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x427: Push((float)9.999999974752427e-07)
0x428: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-4] = [0.0, 0.0, 0.0]
0x42b: Return(); Pop(2)

0x42c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, int)
0x42f: @ GetVariable(Stack[-3], Stack[-1])
0x430: Pop(0)
0x431: Stack[-1] = Stack[-4]
0x432: Return(); Pop(2)

0x433: PushEmpty(float, float)
0x434: @ GetGameTime(Stack[-1])
0x435: Pop(0)
0x436: Push((int) 1)
0x437: PushEmpty(int)
0x438: Push((int) 24)
0x439: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x43a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x43b: Return(); Pop(2)

0x43c: PushEmpty(string, string)
0x43d: Stack[-1] = "idle" // @poff=146
0x43e: Push(Stack[-3])
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x441: Stack[-1] = Stack[-4]
0x442: Return(); Pop(2)

0x443: PushEmpty(int, bool, int, bool)
0x444: Stack[-2] = (int) 0
0x445: Push("all") // @poff=138
0x446: PushEmpty(string, int)
0x447: Stack[-5] = Stack[-1]
0x448: Call2 0x43c

0x449: Pop(1)
0x44a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: Pop(0); Push((bool) Stack[-1] == 0)
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: GOTO 0x452

0x44f: Push((int) 1)
0x450: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x451: GOTO 0x445

0x452: Stack[-2] = Stack[-5]
0x453: Return(); Pop(4)

0x454: PushEmpty()
0x455: Push("k11q01") // @poff=296
0x456: Push((int) 7)
0x457: @ SetVariable(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: PushEmpty()
0x45a: Call2 0x469

0x45b: Pop(0)
0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: PushEmpty(int, string)
0x45f: Stack[-1] = "k11q01" // @poff=296
0x460: Call2 0x42e

0x461: Pop(1)
0x462: Push((int) 6)
0x463: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-2] = (bool) 1
0x466: Return(); Pop(0)

0x467: Stack[-2] = (bool) 0
0x468: Return(); Pop(0)

0x469: PushEmpty(object, object)
0x46a: Push((int) 490)
0x46b: Push((int) 1)
0x46c: Push((int) 528057)
0x46d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: PushEmpty(bool, object, int)
0x470: Stack[-4] = Stack[-2]
0x471: Stack[-1] = (int) 480
0x472: Call2 0x483

0x473: Pop(3)
0x474: Return(); Pop(2)

0x475: Stack[-1] = 0
0x476: PushEmpty(object, object)
0x477: @ GetDiaryRoot(Stack[-1])
0x478: Pop(0)
0x479: Pop(0); Push((bool) Stack[-1] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47b: Push("Can't retrieve diary root") // @poff=310
0x47c: @ Trace(Stack[-1])
0x47d: Pop(1)
0x47e: Stack[-3] = (bool) 0
0x47f: Return(); Pop(2)

0x480: Stack[-1] = Stack[-3]
0x481: Return(); Pop(2)

0x482: Stack[-1] = 0
0x483: PushEmpty(object, object, int, object, object, int)
0x484: PushEmpty(object)
0x485: Call2 0x476

0x486: Stack[-1] = Stack[-4]
0x487: Pop(1)
0x488: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=362
0x489: Pop(0)
0x48a: Pop(0); Push((bool) Stack[-2] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48c: Push("Can't find diary parent with id: ") // @poff=367
0x48d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x48e: @ Trace(Stack[-1])
0x48f: Pop(1)
0x490: Stack[-9] = (bool) 0
0x491: Return(); Pop(6)

0x492: @@ AddChild(Stack[-8]); Obj=2 // @poff=435
0x493: Pop(0)
0x494: Push((int) 7)
0x495: @ SendWorldWndMessage(Stack[-1])
0x496: Pop(1)
0x497: @@ GetCategory(Stack[-1]); Obj=8 // @poff=444
0x498: Pop(0)
0x499: @ SetDiarySection(Stack[-1])
0x49a: Pop(0)
0x49b: Stack[-9] = (bool) 0
0x49c: Return(); Pop(6)

0x49d: Stack[-2] = 0
0x49e: Stack[-3] = 0
0x49f: PushEmpty(int, int)
0x4a0: Push("branch") // @poff=456
0x4a1: @ GetVariable(Stack[-1], Stack[-2])
0x4a2: Pop(1)
0x4a3: Push((int) 0)
0x4a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a6: Stack[-3] = (int) 1
0x4a7: Return(); Pop(2)

0x4a8: GOTO 0x4ae

0x4a9: Push((int) 1)
0x4aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-3] = (int) 2
0x4ad: Return(); Pop(2)

0x4ae: Stack[-3] = (int) 3
0x4af: Return(); Pop(2)

0x4b0: Stack[-1] = (int) 515592
0x4b1: Return(); Pop(0)

0x4b2: Stack[-1] = (int) 511961
0x4b3: Return(); Pop(0)

0x4b4: Stack[-1] = "ui/NPC_Burah.png" // @poff=470
0x4b5: Return(); Pop(0)

0x4b6: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=504
0x4b7: Return(); Pop(0)

0x4b8: Stack[-1] = (bool) 1
0x4b9: Return(); Pop(0)

