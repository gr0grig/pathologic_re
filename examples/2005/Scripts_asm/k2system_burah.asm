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
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:klara2_npc_positioner
	W:remove_danko
	W:remove_burah
	W:k2system_klara_day
	W:k2system_burah_day
	W:k2system_danko_day
	W:k2system_burah_state
	W:k2system_danko_state
	W:k2system_klara_state
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006b006c0061007200610032005f006e00700063005f0070006f0073006900740069006f006e00650072000000720065006d006f00760065005f00640061006e006b006f000000720065006d006f00760065005f006200750072006100680000006b003200730079007300740065006d005f006b006c006100720061005f0064006100790000006b003200730079007300740065006d005f00620075007200610068005f0064006100790000006b003200730079007300740065006d005f00640061006e006b006f005f0064006100790000006b003200730079007300740065006d005f00620075007200610068005f007300740061007400650000006b003200730079007300740065006d005f00640061006e006b006f005f007300740061007400650000006b003200730079007300740065006d005f006b006c006100720061005f00730074006100740065000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetProperty (2 args)

RunOp = 0x2ef
RunTask = 5

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b8 Vars = (int, int)
	GTASK_5 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x2f7 Vars = (string)
		EVENT_6 Op = 0x30b Vars = ()
		EVENT_5 Op = 0x318 Vars = ()
		EVENT_7 Op = 0x367 Vars = (int)
		EVENT_45 Op = 0x3a9 Vars = (bool)
		EVENT_0 Op = 0x3b5 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x439

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
0x11: Call2 0x540

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x493

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x43e

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x57f

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x57d

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x581

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x583

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x625

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
0x55: Call2 0x482

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
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 539060)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 539061)
0x6e: Push((int) 43176)
0x6f: Push((int) 41009)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 541070)
0x73: Push((int) -1)
0x74: Push((int) 43175)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x585

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x51d

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all") // @poff=138
0x8a: Push("idle") // @poff=146
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all") // @poff=138
0x93: Push("idle") // @poff=146
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x585

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-3] = Stack[-2]
0xa4: Push("") // @poff=102
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x524

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x539

0xb3: Pop(0)
0xb4: Push((int) 41008)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 539060)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 539061)
0xc1: Push((int) 43176)
0xc2: Push((int) 41009)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 541070)
0xc6: Push((int) -1)
0xc7: Push((int) 43175)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 43176)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 541071)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 541072)
0xd8: Push((int) -1)
0xd9: Push((int) 43177)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 541073)
0xdd: Push((int) -1)
0xde: Push((int) 43178)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3: PushEmpty(bool)
0xe4: Call2 0x585

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ lshStopAnimation()
0xe8: Pop(0)
0xe9: GOTO 0xec

0xea: @ StopAnimation()
0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: GOTO 0xaf

0xee: Return(); Pop(0)

0xef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1: PushEmpty(bool, object)
0xf2: PushEmpty(object)
0xf3: Call2 0x540

0xf4: Stack[-1] = Stack[-2]
0xf5: Pop(1)
0xf6: Call2 0x493

0xf7: Pop(2)
0xf8: PushEmpty(bool, object, float)
0xf9: Stack[-12] = Stack[-2]
0xfa: Stack[-1] = (float) 70.0
0xfb: Call2 0x43e

0xfc: Pop(2)
0xfd: Pop(1); Push((bool) Stack[-1] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xff: Stack[-10] = (int) -2
0x100: Return(); Pop(8)

0x101: @ CreateDialog(Stack[-4])
0x102: Pop(0)
0x103: PushEmpty(int)
0x104: Call2 0x57f

0x105: Pop(0)
0x106: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x107: Pop(1)
0x108: PushEmpty(int)
0x109: Call2 0x57d

0x10a: Pop(0)
0x10b: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x10c: Pop(1)
0x10d: PushEmpty(string)
0x10e: Call2 0x581

0x10f: Pop(0)
0x110: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x111: Pop(1)
0x112: PushEmpty(string)
0x113: Call2 0x583

0x114: Pop(0)
0x115: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x116: Pop(1)
0x117: PushEmpty(int)
0x118: Call2 0x625

0x119: Pop(0)
0x11a: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x11b: Pop(1)
0x11c: Stack[-2] = (int) -1
0x11d: @ IsOverrideActive(Stack[-3])
0x11e: Pop(0)
0x11f: Push(Stack[-3])
0x120: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x121: Stack[-10] = (int) -2
0x122: Return(); Pop(8)

0x123: @ DoDialog(Stack[-4])
0x124: Pop(0)
0x125: PushEmpty(object, object)
0x126: Stack[-11] = Stack[-2]
0x127: Stack[-6] = Stack[-1]
0x128: Push(-2, 4); TaskCall(4)
0x129: Call2 0x140

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: @ sync()
0x131: Pop(0)
0x132: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x133: Pop(0)
0x134: GOTO 0x12e

0x135: PushEmpty(object)
0x136: Stack[-10] = Stack[-1]
0x137: Call2 0x482

0x138: Pop(1)
0x139: @ StopDialog(Stack[-4])
0x13a: Pop(0)
0x13b: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x13c: Pop(0)
0x13d: Stack[-2] = Stack[-10]
0x13e: Return(); Pop(8)

0x13f: Stack[-4] = 0
0x140: PushEmpty()
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0x1a2

0x149: Pop(1)
0x14a: Push((int) 539063)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x5a5

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 539064)
0x155: Push((int) 41700)
0x156: Push((int) 41012)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x5a5

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: Push((int) 539750)
0x15f: Push((int) 41703)
0x160: Push((int) 41702)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: PushEmpty(bool, object)
0x164: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x165: Call2 0x5af

0x166: Pop(1)
0x167: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x168: Push((int) 539753)
0x169: Push((int) 41706)
0x16a: Push((int) 41705)
0x16b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16c: Pop(3)
0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x5b9

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x172: Push((int) 539756)
0x173: Push((int) 41709)
0x174: Push((int) 41708)
0x175: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x176: Pop(3)
0x177: Push((int) 539759)
0x178: Push((int) -1)
0x179: Push((int) 41711)
0x17a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17b: Pop(3)
0x17c: Push((int) 541075)
0x17d: Push((int) -1)
0x17e: Push((int) 43180)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: GOTO 0x184

0x182: Return(); Pop(0)

0x183: GOTO 0x144

0x184: PushEmpty(bool)
0x185: Call2 0x585

0x186: Pop(0)
0x187: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x188: @ lshWaitForAnimEnd()
0x189: Pop(0)
0x18a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x192

0x18d: PushEmpty(string)
0x18e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18f: Call2 0x51d

0x190: Pop(1)
0x191: GOTO 0x188

0x192: GOTO 0x1a1

0x193: Push("all") // @poff=138
0x194: Push("idle") // @poff=146
0x195: @ PlayAnimation(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: @ WaitForAnimEnd()
0x198: Pop(0)
0x199: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: GOTO 0x1a1

0x19c: Push("all") // @poff=138
0x19d: Push("idle") // @poff=146
0x19e: @ PlayAnimation(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: GOTO 0x197

0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: PushEmpty(bool)
0x1a4: Call2 0x585

0x1a5: Pop(0)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Return(); Pop(0)

0x1a9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(string, bool)
0x1ad: Stack[-3] = Stack[-2]
0x1ae: Push("") // @poff=102
0x1af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: Stack[-1] = (bool) 0
0x1b2: GOTO 0x1b4

0x1b3: Stack[-1] = (bool) 1
0x1b4: Call2 0x524

0x1b5: Pop(2)
0x1b6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Push((int) 1)
0x1ba: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x1bb: PushEmpty()
0x1bc: Call2 0x539

0x1bd: Pop(0)
0x1be: Push((int) 41701)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0x587

0x1c5: Pop(2)
0x1c6: PushEmpty(object, object)
0x1c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0x59b

0x1ca: Pop(2)
0x1cb: Push((int) 41704)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0x58c

0x1d2: Pop(2)
0x1d3: Push((int) 41707)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d6: PushEmpty(object, object)
0x1d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0x591

0x1da: Pop(2)
0x1db: PushEmpty(object, object)
0x1dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1de: Call2 0x59b

0x1df: Pop(2)
0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0x5a0

0x1e4: Pop(2)
0x1e5: Push((int) 41710)
0x1e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(object, object)
0x1e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x596

0x1ec: Pop(2)
0x1ed: Push((int) 41011)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral" // @poff=89
0x1f2: Call2 0x1a2

0x1f3: Pop(1)
0x1f4: Push((int) 539063)
0x1f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f6: Pop(1)
0x1f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f8: Pop(0)
0x1f9: PushEmpty(bool, object)
0x1fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Call2 0x5a5

0x1fc: Pop(1)
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: Push((int) 539064)
0x1ff: Push((int) 41700)
0x200: Push((int) 41012)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: PushEmpty(bool, object)
0x204: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x205: Call2 0x5a5

0x206: Pop(1)
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: Push((int) 539750)
0x209: Push((int) 41703)
0x20a: Push((int) 41702)
0x20b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20c: Pop(3)
0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call2 0x5af

0x210: Pop(1)
0x211: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x212: Push((int) 539753)
0x213: Push((int) 41706)
0x214: Push((int) 41705)
0x215: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x216: Pop(3)
0x217: PushEmpty(bool, object)
0x218: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x219: Call2 0x5b9

0x21a: Pop(1)
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: Push((int) 539756)
0x21d: Push((int) 41709)
0x21e: Push((int) 41708)
0x21f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x220: Pop(3)
0x221: Push((int) 539759)
0x222: Push((int) -1)
0x223: Push((int) 41711)
0x224: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x225: Pop(3)
0x226: Push((int) 541075)
0x227: Push((int) -1)
0x228: Push((int) 43180)
0x229: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Push((int) 41709)
0x22d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral" // @poff=89
0x231: Call2 0x1a2

0x232: Pop(1)
0x233: Push((int) 539757)
0x234: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x235: Pop(1)
0x236: @@@ ClearReplies(); Obj=0 // @poff=116
0x237: Pop(0)
0x238: Push((int) 539758)
0x239: Push((int) -1)
0x23a: Push((int) 41710)
0x23b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23c: Pop(3)
0x23d: Return(); Pop(0)

0x23e: Push((int) 41706)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral" // @poff=89
0x243: Call2 0x1a2

0x244: Pop(1)
0x245: Push((int) 539754)
0x246: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x247: Pop(1)
0x248: @@@ ClearReplies(); Obj=0 // @poff=116
0x249: Pop(0)
0x24a: Push((int) 541088)
0x24b: Push((int) 43197)
0x24c: Push((int) 43196)
0x24d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24e: Pop(3)
0x24f: Push((int) 541090)
0x250: Push((int) 43197)
0x251: Push((int) 43198)
0x252: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 43197)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral" // @poff=89
0x25a: Call2 0x1a2

0x25b: Pop(1)
0x25c: Push((int) 541089)
0x25d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25e: Pop(1)
0x25f: @@@ ClearReplies(); Obj=0 // @poff=116
0x260: Pop(0)
0x261: Push((int) 539755)
0x262: Push((int) -1)
0x263: Push((int) 41707)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 41703)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral" // @poff=89
0x26c: Call2 0x1a2

0x26d: Pop(1)
0x26e: Push((int) 539751)
0x26f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x270: Pop(1)
0x271: @@@ ClearReplies(); Obj=0 // @poff=116
0x272: Pop(0)
0x273: Push((int) 541077)
0x274: Push((int) 43183)
0x275: Push((int) 43182)
0x276: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 43183)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Neutral" // @poff=89
0x27e: Call2 0x1a2

0x27f: Pop(1)
0x280: Push((int) 541078)
0x281: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x282: Pop(1)
0x283: @@@ ClearReplies(); Obj=0 // @poff=116
0x284: Pop(0)
0x285: Push((int) 541085)
0x286: Push((int) 43194)
0x287: Push((int) 43192)
0x288: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x289: Pop(3)
0x28a: Push((int) 541086)
0x28b: Push((int) 43194)
0x28c: Push((int) 43193)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 43194)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral" // @poff=89
0x295: Call2 0x1a2

0x296: Pop(1)
0x297: Push((int) 541087)
0x298: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x299: Pop(1)
0x29a: @@@ ClearReplies(); Obj=0 // @poff=116
0x29b: Pop(0)
0x29c: Push((int) 539752)
0x29d: Push((int) -1)
0x29e: Push((int) 41704)
0x29f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Push((int) 41700)
0x2a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=89
0x2a7: Call2 0x1a2

0x2a8: Pop(1)
0x2a9: Push((int) 539748)
0x2aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ab: Pop(1)
0x2ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ad: Pop(0)
0x2ae: Push((int) 541079)
0x2af: Push((int) 43186)
0x2b0: Push((int) 43184)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b2: Pop(3)
0x2b3: Push((int) 541080)
0x2b4: Push((int) 43186)
0x2b5: Push((int) 43185)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b7: Pop(3)
0x2b8: Return(); Pop(0)

0x2b9: Push((int) 43186)
0x2ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2bc: PushEmpty(string)
0x2bd: Stack[-1] = "Neutral" // @poff=89
0x2be: Call2 0x1a2

0x2bf: Pop(1)
0x2c0: Push((int) 541081)
0x2c1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c2: Pop(1)
0x2c3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c4: Pop(0)
0x2c5: Push((int) 541082)
0x2c6: Push((int) 43189)
0x2c7: Push((int) 43187)
0x2c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c9: Pop(3)
0x2ca: Push((int) 541083)
0x2cb: Push((int) 43189)
0x2cc: Push((int) 43188)
0x2cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ce: Pop(3)
0x2cf: Return(); Pop(0)

0x2d0: Push((int) 43189)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral" // @poff=89
0x2d5: Call2 0x1a2

0x2d6: Pop(1)
0x2d7: Push((int) 541084)
0x2d8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d9: Pop(1)
0x2da: @@@ ClearReplies(); Obj=0 // @poff=116
0x2db: Pop(0)
0x2dc: Push((int) 539749)
0x2dd: Push((int) -1)
0x2de: Push((int) 41701)
0x2df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x585

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e7: @ lshStopAnimation()
0x2e8: Pop(0)
0x2e9: GOTO 0x2ec

0x2ea: @ StopAnimation()
0x2eb: Pop(0)
0x2ec: Return(); Pop(0)

0x2ed: GOTO 0x1b9

0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: Call2 0x2f3

0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty()
0x2f4: Call2 0x31c

0x2f5: Pop(0)
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty(bool, bool)
0x2f8: Push("cleanup") // @poff=156
0x2f9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2fb: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x2fc: @ IsLoaded(Stack[-1])
0x2fd: Pop(0)
0x2fe: Pop(0); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: PushEmpty(object)
0x301: Call2 0x540

0x302: Pop(0)
0x303: @ RemoveActor(Stack[-1])
0x304: Pop(1)
0x305: GOTO 0x30a

0x306: Push("restore") // @poff=172
0x307: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x30a: Return(); Pop(2)

0x30b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x30c: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30d: PushEmpty(object)
0x30e: Call2 0x540

0x30f: Pop(0)
0x310: @ RemoveActor(Stack[-1])
0x311: Pop(1)
0x312: @ Hold()
0x313: Pop(0)
0x314: PushEmpty()
0x315: Call2 0x38d

0x316: Pop(0)
0x317: Return(); Pop(0)

0x318: PushEmpty()
0x319: Call2 0x39c

0x31a: Pop(0)
0x31b: Return(); Pop(0)

0x31c: PushEmpty(bool)
0x31d: Call2 0x439

0x31e: Pop(0)
0x31f: Pop(1); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x321: PushEmpty()
0x322: Push(-0, 0); TaskCall(0)
0x323: Call2 0x0

0x324: Pop(-0, 0); TaskReturn
0x325: Pop(0)
0x326: PushEmpty()
0x327: Call2 0x318

0x328: Pop(0)
0x329: @ GetDirection(Stack[-0]T)
0x32a: Pop(0)
0x32b: PushEmpty()
0x32c: Call2 0x3d2

0x32d: Pop(0)
0x32e: GOTO 0x32b

0x32f: Return(); Pop(0)

0x330: PushEmpty(object, object)
0x331: Push("player") // @poff=188
0x332: @ FindActor(Stack[-2], Stack[-1])
0x333: Pop(1)
0x334: Pop(0); Push((bool) Stack[-1] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: Stack[-3] = (bool) 0
0x337: Return(); Pop(2)

0x338: PushEmpty(bool, object)
0x339: Stack[-3] = Stack[-1]
0x33a: Call2 0x430

0x33b: Stack[-2] = Stack[-5]
0x33c: Pop(2)
0x33d: Return(); Pop(2)

0x33e: Stack[-1] = 0
0x33f: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x340: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x341: @ RotateAsync(Stack[-2], Stack[-1])
0x342: Pop(2)
0x343: Return(); Pop(0)

0x344: PushEmpty(object, bool, object, bool)
0x345: Push("player") // @poff=188
0x346: @ FindActor(Stack[-3], Stack[-1])
0x347: Pop(1)
0x348: Pop(0); Push((bool) Stack[-2] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-5] = (bool) 0
0x34b: Return(); Pop(4)

0x34c: PushEmpty(float, object)
0x34d: Stack[-4] = Stack[-1]
0x34e: Call2 0x41e

0x34f: Pop(1)
0x350: Push((float)90000.0)
0x351: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-5] = (bool) 0
0x354: Return(); Pop(4)

0x355: @ CanSee(Stack[-1], Stack[-2])
0x356: Pop(0)
0x357: Stack[-1] = Stack[-5]
0x358: Return(); Pop(4)

0x359: Stack[-2] = 0
0x35a: PushEmpty(float, float)
0x35b: Push((int) 8)
0x35c: Push((int) 16)
0x35d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: Push((int) 10)
0x360: @ SetTimer(Stack[-1], Stack[-2])
0x361: Pop(1)
0x362: Return(); Pop(2)

0x363: Push((int) 10)
0x364: @ KillTimer(Stack[-1])
0x365: Pop(1)
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: Push((int) 10)
0x369: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x36b: PushEmpty()
0x36c: Call2 0x363

0x36d: Pop(0)
0x36e: PushEmpty(bool)
0x36f: Stack[-1] = (bool) 0
0x370: PushEmpty(bool)
0x371: Call2 0x439

0x372: Pop(0)
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: PushEmpty(bool)
0x375: Call2 0x344

0x376: Pop(0)
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: Stack[-1] = (bool) 1
0x379: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37a: PushEmpty(bool)
0x37b: Call2 0x330

0x37c: Pop(0)
0x37d: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37e: PushEmpty(bool, object)
0x37f: PushEmpty(object)
0x380: Call2 0x540

0x381: Stack[-1] = Stack[-2]
0x382: Pop(1)
0x383: Call2 0x4cd

0x384: Pop(2)
0x385: GOTO 0x38c

0x386: PushEmpty()
0x387: Call2 0x33f

0x388: Pop(0)
0x389: PushEmpty()
0x38a: Call2 0x35a

0x38b: Pop(0)
0x38c: Return(); Pop(0)

0x38d: PushEmpty()
0x38e: Call2 0x419

0x38f: Pop(0)
0x390: PushEmpty()
0x391: Call2 0x363

0x392: Pop(0)
0x393: @ lshStopSpeech()
0x394: Pop(0)
0x395: @ lshStopAnimation()
0x396: Pop(0)
0x397: @ StopAsync()
0x398: Pop(0)
0x399: @ Hold()
0x39a: Pop(0)
0x39b: Return(); Pop(0)

0x39c: @ StopGroup0()
0x39d: Pop(0)
0x39e: PushEmpty()
0x39f: Call2 0x363

0x3a0: Pop(0)
0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Neutral" // @poff=89
0x3a3: Call2 0x51d

0x3a4: Pop(1)
0x3a5: PushEmpty()
0x3a6: Call2 0x35a

0x3a7: Pop(0)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: Push(Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ac: PushEmpty()
0x3ad: Call2 0x35a

0x3ae: Pop(0)
0x3af: GOTO 0x3b4

0x3b0: PushEmpty(string)
0x3b1: Stack[-1] = "Neutral" // @poff=89
0x3b2: Call2 0x51d

0x3b3: Pop(1)
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty(bool, bool)
0x3b6: @ IsOverrideActive(Stack[-1])
0x3b7: Pop(0)
0x3b8: Pop(0); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3ba: EventDisable(0)
0x3bb: PushEmpty()
0x3bc: Call2 0x419

0x3bd: Pop(0)
0x3be: PushEmpty(bool, object)
0x3bf: Stack[-5] = Stack[-1]
0x3c0: Call2 0x430

0x3c1: Pop(2)
0x3c2: EventEnable(0)
0x3c3: PushEmpty(object)
0x3c4: Stack[-4] = Stack[-1]
0x3c5: Call2 0x6c2

0x3c6: Pop(1)
0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Neutral" // @poff=89
0x3c9: Call2 0x51d

0x3ca: Pop(1)
0x3cb: PushEmpty()
0x3cc: Call2 0x363

0x3cd: Pop(0)
0x3ce: PushEmpty()
0x3cf: Call2 0x35a

0x3d0: Pop(0)
0x3d1: Return(); Pop(2)

0x3d2: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x3d3: @ WaitForAnimEnd()
0x3d4: Pop(0)
0x3d5: PushEmpty(bool)
0x3d6: Call2 0x439

0x3d7: Pop(0)
0x3d8: Pop(1); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3da: Return(); Pop(12)

0x3db: PushEmpty(int)
0x3dc: Call2 0x56c

0x3dd: Stack[-1] = Stack[-7]
0x3de: Pop(1)
0x3df: Stack[-5] = (int) 0
0x3e0: PushEmpty(bool)
0x3e1: Stack[-1] = (bool) 0
0x3e2: Push((int) 5)
0x3e3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: PushEmpty(bool)
0x3e6: Call2 0x439

0x3e7: Pop(0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e9: Stack[-1] = (bool) 1
0x3ea: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x3eb: Pop(0); Push((bool) Stack[-6] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ed: Push((int) 3)
0x3ee: @ Sleep(Stack[-1], Stack[-5])
0x3ef: Pop(1)
0x3f0: Pop(0); Push((bool) Stack[-4] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: GOTO 0x414

0x3f3: GOTO 0x409

0x3f4: @ irand(Stack[-3], Stack[-6])
0x3f5: Pop(0)
0x3f6: Push((int) 5)
0x3f7: @ irand(Stack[-3], Stack[-1])
0x3f8: Pop(1)
0x3f9: Push((int) 0)
0x3fa: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fc: Stack[-3] = (int) 0
0x3fd: Push("all") // @poff=138
0x3fe: PushEmpty(string, int)
0x3ff: Stack[-6] = Stack[-1]
0x400: Call2 0x565

0x401: Pop(1)
0x402: @ PlayAnimation(Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: @ WaitForAnimEnd(Stack[-1])
0x405: Pop(0)
0x406: Pop(0); Push((bool) Stack[-1] == 0)
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: GOTO 0x414

0x409: PushEmpty(bool)
0x40a: Call2 0x417

0x40b: Pop(0)
0x40c: Pop(1); Push((bool) Stack[-1] == 0)
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: GOTO 0x414

0x40f: @ ResetAAS()
0x410: Pop(0)
0x411: Push((int) 1)
0x412: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x413: GOTO 0x3e0

0x414: @ ResetAAS()
0x415: Pop(0)
0x416: Return(); Pop(12)

0x417: Stack[-1] = (bool) 1
0x418: Return(); Pop(0)

0x419: @ StopAnimation()
0x41a: Pop(0)
0x41b: @ StopGroup0()
0x41c: Pop(0)
0x41d: Return(); Pop(0)

0x41e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x41f: @ GetPosition(Stack[-3])
0x420: Pop(0)
0x421: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x422: Pop(0)
0x423: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x424: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x425: Return(); Pop(6)

0x426: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x427: @ GetPosition(Stack[-3])
0x428: Pop(0)
0x429: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x42a: Push(CvectorIndex(Stack[-2], 0))
0x42b: Push(CvectorIndex(Stack[-3], 2))
0x42c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x42d: Pop(2)
0x42e: Stack[-1] = Stack[-8]
0x42f: Return(); Pop(6)

0x430: PushEmpty(cvector, cvector)
0x431: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x432: Pop(0)
0x433: PushEmpty(bool, cvector)
0x434: Stack[-3] = Stack[-1]
0x435: Call2 0x426

0x436: Stack[-2] = Stack[-6]
0x437: Pop(2)
0x438: Return(); Pop(2)

0x439: PushEmpty(bool, bool)
0x43a: @ IsLoaded(Stack[-1])
0x43b: Pop(0)
0x43c: Stack[-1] = Stack[-3]
0x43d: Return(); Pop(2)

0x43e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x43f: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x440: Pop(0)
0x441: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x442: Pop(0)
0x443: Push(CvectorIndex(Stack[-8], 1))
0x444: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x445: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x446: @ GetPosition(Stack[-7])
0x447: Pop(0)
0x448: @ GetEyesHeight(Stack[-9])
0x449: Pop(0)
0x44a: Push(CvectorIndex(Stack[-7], 1))
0x44b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x44c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x44d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x44e: Push(CvectorIndex(Stack[-6], 1))
0x44f: Stack[-1] = (int) 0
0x450: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x451: Pop(0); Push(Stack[-6] | Stack[-6]);
0x452: Pop(1); Push(Sqrt(Stack[-1]))
0x453: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x454: Stack[-5] = -Stack[-6]; Pop(0);
0x455: Pop(0); Push(Stack[-6] * Stack[-19]);
0x456: PushEmpty(cvector, cvector)
0x457: Push([0.0, 1.0, 0.0])
0x458: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x459: Call2 0x546

0x45a: Pop(1)
0x45b: Push((int) 25)
0x45c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x45d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45e: Push([0.0, 10.0, 0.0])
0x45f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x460: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x461: @ IsOverrideActive(Stack[-2])
0x462: Pop(0)
0x463: Push(Stack[-2])
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-21] = (bool) 0
0x466: Return(); Pop(18)

0x467: @ StopWorld()
0x468: Pop(0)
0x469: @ CameraTransit(Stack[-3], Stack[-5])
0x46a: Pop(0)
0x46b: Push(CvectorIndex(Stack[-4], 0))
0x46c: Push(CvectorIndex(Stack[-5], 2))
0x46d: @ Rotate(Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: PushEmpty(bool)
0x470: Call2 0x585

0x471: Pop(0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: GOTO 0x47c

0x474: Push("head") // @poff=228
0x475: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x476: Pop(1)
0x477: Push(Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x479: Push("head") // @poff=228
0x47a: @ LookAsyncCamera(Stack[-1])
0x47b: Pop(1)
0x47c: @ CameraWaitForPlayFinish()
0x47d: Pop(0)
0x47e: @ ResumeWorld()
0x47f: Pop(0)
0x480: Stack[-21] = (bool) 1
0x481: Return(); Pop(18)

0x482: PushEmpty(bool, bool)
0x483: @ CameraSwitchToNormal()
0x484: Pop(0)
0x485: PushEmpty(bool)
0x486: Call2 0x585

0x487: Pop(0)
0x488: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x489: GOTO 0x492

0x48a: Push("head") // @poff=228
0x48b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x48c: Pop(1)
0x48d: Push(Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48f: Push("head") // @poff=228
0x490: @ UnlookAsync(Stack[-1])
0x491: Pop(1)
0x492: Return(); Pop(2)

0x493: PushEmpty(int, int, int, int)
0x494: Push("voice_common") // @poff=238
0x495: @ GetVariable(Stack[-1], Stack[-3])
0x496: Pop(1)
0x497: Push(Stack[-2])
0x498: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x499: PushEmpty(bool, object)
0x49a: Stack[-7] = Stack[-1]
0x49b: Call2 0x4cd

0x49c: Pop(1)
0x49d: Pop(1); Push((bool) Stack[-1] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x49f: PushEmpty(bool, object)
0x4a0: Stack[-7] = Stack[-1]
0x4a1: Call2 0x4f2

0x4a2: Pop(1)
0x4a3: Pop(1); Push((bool) Stack[-1] == 0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-6] = (bool) 0
0x4a6: Return(); Pop(4)

0x4a7: Push((int) 2)
0x4a8: @ irand(Stack[-2], Stack[-1])
0x4a9: Pop(1)
0x4aa: Push(Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4ac: Push("voice_common") // @poff=238
0x4ad: Push((int) 1)
0x4ae: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4af: Push((int) 3)
0x4b0: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4b1: @ SetVariable(Stack[-2], Stack[-1])
0x4b2: Pop(2)
0x4b3: GOTO 0x4b8

0x4b4: Push("voice_common") // @poff=238
0x4b5: Push((int) 0)
0x4b6: @ SetVariable(Stack[-2], Stack[-1])
0x4b7: Pop(2)
0x4b8: GOTO 0x4cb

0x4b9: PushEmpty(bool, object)
0x4ba: Stack[-7] = Stack[-1]
0x4bb: Call2 0x4f2

0x4bc: Pop(1)
0x4bd: Pop(1); Push((bool) Stack[-1] == 0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4bf: PushEmpty(bool, object)
0x4c0: Stack[-7] = Stack[-1]
0x4c1: Call2 0x4cd

0x4c2: Pop(1)
0x4c3: Pop(1); Push((bool) Stack[-1] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-6] = (bool) 0
0x4c6: Return(); Pop(4)

0x4c7: Push("voice_common") // @poff=238
0x4c8: Push((int) 1)
0x4c9: @ SetVariable(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Stack[-6] = (bool) 1
0x4cc: Return(); Pop(4)

0x4cd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4ce: Stack[-5] = "c" // @poff=264
0x4cf: Stack[-4] = (int) 0
0x4d0: Push((int) 1)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d2: Push((int) 1)
0x4d3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4d4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4d5: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x4d6: Pop(1)
0x4d7: Pop(0); Push((bool) Stack[-3] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: GOTO 0x4dd

0x4da: Push((int) 1)
0x4db: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4dc: GOTO 0x4d0

0x4dd: Pop(0); Push((bool) Stack[-4] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-12] = (bool) 0
0x4e0: Return(); Pop(10)

0x4e1: Stack[-2] = (int) 0
0x4e2: Push((int) 1)
0x4e3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: @ irand(Stack[-2], Stack[-4])
0x4e6: Pop(0)
0x4e7: Push((int) 1)
0x4e8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4ea: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x4eb: Pop(1)
0x4ec: PushEmpty(bool, string)
0x4ed: Stack[-3] = Stack[-1]
0x4ee: Call2 0x52a

0x4ef: Stack[-2] = Stack[-14]
0x4f0: Pop(2)
0x4f1: Return(); Pop(10)

0x4f2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4f3: Push("d") // @poff=234
0x4f4: PushEmpty(int)
0x4f5: Call2 0x55c

0x4f6: Pop(0)
0x4f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f8: Push("m") // @poff=292
0x4f9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4fa: Stack[-4] = (int) 0
0x4fb: Push((int) 1)
0x4fc: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x4fd: Push((int) 1)
0x4fe: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4ff: Pop(1); Push(Stack[-6] + Stack[-1]);
0x500: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x501: Pop(1)
0x502: Pop(0); Push((bool) Stack[-3] == 0)
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: GOTO 0x508

0x505: Push((int) 1)
0x506: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x507: GOTO 0x4fb

0x508: Pop(0); Push((bool) Stack[-4] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-12] = (bool) 0
0x50b: Return(); Pop(10)

0x50c: Stack[-2] = (int) 0
0x50d: Push((int) 1)
0x50e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: @ irand(Stack[-2], Stack[-4])
0x511: Pop(0)
0x512: Push((int) 1)
0x513: Pop(1); Push(Stack[-3] + Stack[-1]);
0x514: Pop(1); Push(Stack[-6] + Stack[-1]);
0x515: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x516: Pop(1)
0x517: PushEmpty(bool, string)
0x518: Stack[-3] = Stack[-1]
0x519: Call2 0x52a

0x51a: Stack[-2] = Stack[-14]
0x51b: Pop(2)
0x51c: Return(); Pop(10)

0x51d: PushEmpty(float, float, float, float)
0x51e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x51f: Pop(0)
0x520: Push((bool) 0)
0x521: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(1)
0x523: Return(); Pop(4)

0x524: PushEmpty(float, float, float, float)
0x525: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x526: Pop(0)
0x527: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x528: Pop(0)
0x529: Return(); Pop(4)

0x52a: PushEmpty(bool, bool)
0x52b: PushEmpty(bool)
0x52c: Call2 0x585

0x52d: Pop(0)
0x52e: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x52f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x530: Pop(0)
0x531: Push(Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x533: @ lshPlaySpeech(Stack[-3])
0x534: Pop(0)
0x535: Stack[-4] = (bool) 1
0x536: Return(); Pop(2)

0x537: Stack[-4] = (bool) 0
0x538: Return(); Pop(2)

0x539: PushEmpty(bool)
0x53a: Call2 0x585

0x53b: Pop(0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: @ lshStopSpeech()
0x53e: Pop(0)
0x53f: Return(); Pop(0)

0x540: PushEmpty(object, object)
0x541: @ self(Stack[-1])
0x542: Pop(0)
0x543: Stack[-1] = Stack[-3]
0x544: Return(); Pop(2)

0x545: Stack[-1] = 0
0x546: PushEmpty(float, float)
0x547: Pop(0); Push(Stack[-3] | Stack[-3]);
0x548: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x549: Push((float)9.999999974752427e-07)
0x54a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54c: Stack[-4] = [0.0, 0.0, 0.0]
0x54d: Return(); Pop(2)

0x54e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x54f: Return(); Pop(2)

0x550: PushEmpty(object, object)
0x551: @ FindActor(Stack[-1], Stack[-4])
0x552: Pop(0)
0x553: Pop(0); PushNull((bool) Stack[-1] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-5] = (bool) 0
0x556: Return(); Pop(2)

0x557: @ Trigger(Stack[-1], Stack[-3])
0x558: Pop(0)
0x559: Stack[-5] = (bool) 1
0x55a: Return(); Pop(2)

0x55b: Stack[-1] = 0
0x55c: PushEmpty(float, float)
0x55d: @ GetGameTime(Stack[-1])
0x55e: Pop(0)
0x55f: Push((int) 1)
0x560: PushEmpty(int)
0x561: Push((int) 24)
0x562: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x563: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x564: Return(); Pop(2)

0x565: PushEmpty(string, string)
0x566: Stack[-1] = "idle" // @poff=146
0x567: Push(Stack[-3])
0x568: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x569: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x56a: Stack[-1] = Stack[-4]
0x56b: Return(); Pop(2)

0x56c: PushEmpty(int, bool, int, bool)
0x56d: Stack[-2] = (int) 0
0x56e: Push("all") // @poff=138
0x56f: PushEmpty(string, int)
0x570: Stack[-5] = Stack[-1]
0x571: Call2 0x565

0x572: Pop(1)
0x573: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: Pop(0); Push((bool) Stack[-1] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x577: GOTO 0x57b

0x578: Push((int) 1)
0x579: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x57a: GOTO 0x56e

0x57b: Stack[-2] = Stack[-5]
0x57c: Return(); Pop(4)

0x57d: Stack[-1] = (int) 515592
0x57e: Return(); Pop(0)

0x57f: Stack[-1] = (int) 511961
0x580: Return(); Pop(0)

0x581: Stack[-1] = "ui/NPC_Burah.png" // @poff=296
0x582: Return(); Pop(0)

0x583: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=330
0x584: Return(); Pop(0)

0x585: Stack[-1] = (bool) 1
0x586: Return(); Pop(0)

0x587: PushEmpty()
0x588: PushEmpty()
0x589: Call2 0x6a1

0x58a: Pop(0)
0x58b: Return(); Pop(0)

0x58c: PushEmpty()
0x58d: PushEmpty()
0x58e: Call2 0x6a9

0x58f: Pop(0)
0x590: Return(); Pop(0)

0x591: PushEmpty()
0x592: PushEmpty()
0x593: Call2 0x693

0x594: Pop(0)
0x595: Return(); Pop(0)

0x596: PushEmpty()
0x597: PushEmpty()
0x598: Call2 0x6bd

0x599: Pop(0)
0x59a: Return(); Pop(0)

0x59b: PushEmpty()
0x59c: PushEmpty()
0x59d: Call2 0x63c

0x59e: Pop(0)
0x59f: Return(); Pop(0)

0x5a0: PushEmpty()
0x5a1: PushEmpty()
0x5a2: Call2 0x636

0x5a3: Pop(0)
0x5a4: Return(); Pop(0)

0x5a5: PushEmpty()
0x5a6: PushEmpty(bool, object)
0x5a7: Stack[-3] = Stack[-1]
0x5a8: Call2 0x5c3

0x5a9: Pop(1)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-2] = (bool) 1
0x5ac: Return(); Pop(0)

0x5ad: Stack[-2] = (bool) 0
0x5ae: Return(); Pop(0)

0x5af: PushEmpty()
0x5b0: PushEmpty(bool, object)
0x5b1: Stack[-3] = Stack[-1]
0x5b2: Call2 0x5c9

0x5b3: Pop(1)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b5: Stack[-2] = (bool) 1
0x5b6: Return(); Pop(0)

0x5b7: Stack[-2] = (bool) 0
0x5b8: Return(); Pop(0)

0x5b9: PushEmpty()
0x5ba: PushEmpty(bool, object)
0x5bb: Stack[-3] = Stack[-1]
0x5bc: Call2 0x5cf

0x5bd: Pop(1)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-2] = (bool) 1
0x5c0: Return(); Pop(0)

0x5c1: Stack[-2] = (bool) 0
0x5c2: Return(); Pop(0)

0x5c3: PushEmpty()
0x5c4: PushEmpty(bool)
0x5c5: Call2 0x6b1

0x5c6: Stack[-1] = Stack[-3]
0x5c7: Pop(1)
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: PushEmpty(bool)
0x5cb: Call2 0x69b

0x5cc: Stack[-1] = Stack[-3]
0x5cd: Pop(1)
0x5ce: Return(); Pop(0)

0x5cf: PushEmpty()
0x5d0: PushEmpty(bool)
0x5d1: Call2 0x6b7

0x5d2: Stack[-1] = Stack[-3]
0x5d3: Pop(1)
0x5d4: Return(); Pop(0)

0x5d5: PushEmpty(object, object)
0x5d6: Push((int) 753)
0x5d7: Push((int) 2)
0x5d8: Push((int) 539738)
0x5d9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(3)
0x5db: PushEmpty(bool, object, int)
0x5dc: Stack[-4] = Stack[-2]
0x5dd: Stack[-1] = (int) 751
0x5de: Call2 0x609

0x5df: Pop(3)
0x5e0: Return(); Pop(2)

0x5e1: Stack[-1] = 0
0x5e2: PushEmpty(object, object)
0x5e3: Push((int) 754)
0x5e4: Push((int) 2)
0x5e5: Push((int) 539739)
0x5e6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e7: Pop(3)
0x5e8: PushEmpty(bool, object, int)
0x5e9: Stack[-4] = Stack[-2]
0x5ea: Stack[-1] = (int) 751
0x5eb: Call2 0x609

0x5ec: Pop(3)
0x5ed: Return(); Pop(2)

0x5ee: Stack[-1] = 0
0x5ef: PushEmpty(object, object)
0x5f0: Push((int) 761)
0x5f1: Push((int) 2)
0x5f2: Push((int) 539746)
0x5f3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f4: Pop(3)
0x5f5: PushEmpty(bool, object, int)
0x5f6: Stack[-4] = Stack[-2]
0x5f7: Stack[-1] = (int) 757
0x5f8: Call2 0x609

0x5f9: Pop(3)
0x5fa: Return(); Pop(2)

0x5fb: Stack[-1] = 0
0x5fc: PushEmpty(object, object)
0x5fd: @ GetDiaryRoot(Stack[-1])
0x5fe: Pop(0)
0x5ff: Pop(0); Push((bool) Stack[-1] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x601: Push("Can't retrieve diary root") // @poff=368
0x602: @ Trace(Stack[-1])
0x603: Pop(1)
0x604: Stack[-3] = (bool) 0
0x605: Return(); Pop(2)

0x606: Stack[-1] = Stack[-3]
0x607: Return(); Pop(2)

0x608: Stack[-1] = 0
0x609: PushEmpty(object, object, int, object, object, int)
0x60a: PushEmpty(object)
0x60b: Call2 0x5fc

0x60c: Stack[-1] = Stack[-4]
0x60d: Pop(1)
0x60e: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=420
0x60f: Pop(0)
0x610: Pop(0); Push((bool) Stack[-2] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x612: Push("Can't find diary parent with id: ") // @poff=425
0x613: Pop(1); Push(Stack[-1] + Stack[-8]);
0x614: @ Trace(Stack[-1])
0x615: Pop(1)
0x616: Stack[-9] = (bool) 0
0x617: Return(); Pop(6)

0x618: @@ AddChild(Stack[-8]); Obj=2 // @poff=493
0x619: Pop(0)
0x61a: Push((int) 7)
0x61b: @ SendWorldWndMessage(Stack[-1])
0x61c: Pop(1)
0x61d: @@ GetCategory(Stack[-1]); Obj=8 // @poff=502
0x61e: Pop(0)
0x61f: @ SetDiarySection(Stack[-1])
0x620: Pop(0)
0x621: Stack[-9] = (bool) 0
0x622: Return(); Pop(6)

0x623: Stack[-2] = 0
0x624: Stack[-3] = 0
0x625: PushEmpty(int, int)
0x626: Push("branch") // @poff=514
0x627: @ GetVariable(Stack[-1], Stack[-2])
0x628: Pop(1)
0x629: Push((int) 0)
0x62a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62c: Stack[-3] = (int) 1
0x62d: Return(); Pop(2)

0x62e: GOTO 0x634

0x62f: Push((int) 1)
0x630: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-3] = (int) 2
0x633: Return(); Pop(2)

0x634: Stack[-3] = (int) 3
0x635: Return(); Pop(2)

0x636: PushEmpty(bool, string, string)
0x637: Stack[-2] = "klara2_npc_positioner" // @poff=528
0x638: Stack[-1] = "remove_danko" // @poff=572
0x639: Call2 0x550

0x63a: Pop(3)
0x63b: Return(); Pop(0)

0x63c: PushEmpty(bool, string, string)
0x63d: Stack[-2] = "klara2_npc_positioner" // @poff=528
0x63e: Stack[-1] = "remove_burah" // @poff=598
0x63f: Call2 0x550

0x640: Pop(3)
0x641: Return(); Pop(0)

0x642: PushEmpty(int, int)
0x643: Push("k2system_klara_day") // @poff=624
0x644: @ GetVariable(Stack[-1], Stack[-2])
0x645: Pop(1)
0x646: Stack[-1] = Stack[-3]
0x647: Return(); Pop(2)

0x648: PushEmpty(int, int)
0x649: Push("k2system_burah_day") // @poff=662
0x64a: @ GetVariable(Stack[-1], Stack[-2])
0x64b: Pop(1)
0x64c: Stack[-1] = Stack[-3]
0x64d: Return(); Pop(2)

0x64e: PushEmpty(int, int)
0x64f: Push("k2system_danko_day") // @poff=700
0x650: @ GetVariable(Stack[-1], Stack[-2])
0x651: Pop(1)
0x652: Stack[-1] = Stack[-3]
0x653: Return(); Pop(2)

0x654: PushEmpty(int, int, int, int)
0x655: PushEmpty(int)
0x656: Call2 0x648

0x657: Stack[-1] = Stack[-3]
0x658: Pop(1)
0x659: Push("k2system_burah_state") // @poff=738
0x65a: Pop(1); Push(Stack[-1] + Stack[-3]);
0x65b: @ GetVariable(Stack[-1], Stack[-2])
0x65c: Pop(1)
0x65d: Stack[-1] = Stack[-5]
0x65e: Return(); Pop(4)

0x65f: PushEmpty(int, int)
0x660: PushEmpty(int)
0x661: Call2 0x648

0x662: Stack[-1] = Stack[-2]
0x663: Pop(1)
0x664: Push("k2system_burah_state") // @poff=738
0x665: Pop(1); Push(Stack[-1] + Stack[-2]);
0x666: @ SetVariable(Stack[-1], Stack[-4])
0x667: Pop(1)
0x668: Return(); Pop(2)

0x669: PushEmpty(int, int, int, int)
0x66a: PushEmpty(int)
0x66b: Call2 0x64e

0x66c: Stack[-1] = Stack[-3]
0x66d: Pop(1)
0x66e: Push("k2system_danko_state") // @poff=780
0x66f: Pop(1); Push(Stack[-1] + Stack[-3]);
0x670: @ GetVariable(Stack[-1], Stack[-2])
0x671: Pop(1)
0x672: Stack[-1] = Stack[-5]
0x673: Return(); Pop(4)

0x674: PushEmpty(int, int)
0x675: PushEmpty(int)
0x676: Call2 0x64e

0x677: Stack[-1] = Stack[-2]
0x678: Pop(1)
0x679: Push("k2system_danko_state") // @poff=780
0x67a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x67b: @ SetVariable(Stack[-1], Stack[-4])
0x67c: Pop(1)
0x67d: Return(); Pop(2)

0x67e: PushEmpty(int, int, int, int)
0x67f: PushEmpty(int)
0x680: Call2 0x642

0x681: Stack[-1] = Stack[-3]
0x682: Pop(1)
0x683: Push("k2system_klara_state") // @poff=822
0x684: Pop(1); Push(Stack[-1] + Stack[-3]);
0x685: @ GetVariable(Stack[-1], Stack[-2])
0x686: Pop(1)
0x687: Stack[-1] = Stack[-5]
0x688: Return(); Pop(4)

0x689: PushEmpty(int, int)
0x68a: PushEmpty(int)
0x68b: Call2 0x642

0x68c: Stack[-1] = Stack[-2]
0x68d: Pop(1)
0x68e: Push("k2system_klara_state") // @poff=822
0x68f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x690: @ SetVariable(Stack[-1], Stack[-4])
0x691: Pop(1)
0x692: Return(); Pop(2)

0x693: PushEmpty()
0x694: Call2 0x5ef

0x695: Pop(0)
0x696: PushEmpty(int)
0x697: Stack[-1] = (int) 3
0x698: Call2 0x674

0x699: Pop(1)
0x69a: Return(); Pop(0)

0x69b: PushEmpty(int)
0x69c: Call2 0x669

0x69d: Pop(0)
0x69e: Push((int) 1)
0x69f: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x6a0: Return(); Pop(0)

0x6a1: PushEmpty()
0x6a2: Call2 0x5d5

0x6a3: Pop(0)
0x6a4: PushEmpty(int)
0x6a5: Stack[-1] = (int) 2
0x6a6: Call2 0x65f

0x6a7: Pop(1)
0x6a8: Return(); Pop(0)

0x6a9: PushEmpty()
0x6aa: Call2 0x5e2

0x6ab: Pop(0)
0x6ac: PushEmpty(int)
0x6ad: Stack[-1] = (int) 1
0x6ae: Call2 0x65f

0x6af: Pop(1)
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty(int)
0x6b2: Call2 0x654

0x6b3: Pop(0)
0x6b4: Push((int) 0)
0x6b5: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x6b6: Return(); Pop(0)

0x6b7: PushEmpty(int)
0x6b8: Call2 0x67e

0x6b9: Pop(0)
0x6ba: Push((int) 1)
0x6bb: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x6bc: Return(); Pop(0)

0x6bd: PushEmpty(int)
0x6be: Stack[-1] = (int) 3
0x6bf: Call2 0x689

0x6c0: Pop(1)
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty(int, int)
0x6c3: Push("day") // @poff=654
0x6c4: @ GetProperty(Stack[-1], Stack[-2])
0x6c5: Pop(1)
0x6c6: PushEmpty(int)
0x6c7: Call2 0x55c

0x6c8: Pop(0)
0x6c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6cb: PushEmpty(int, object)
0x6cc: Stack[-5] = Stack[-1]
0x6cd: Push(-2, 1); TaskCall(3)
0x6ce: Call2 0xef

0x6cf: Pop(-2, 1); TaskReturn
0x6d0: Pop(2)
0x6d1: GOTO 0x6d8

0x6d2: PushEmpty(int, object)
0x6d3: Stack[-5] = Stack[-1]
0x6d4: Push(-2, 1); TaskCall(1)
0x6d5: Call2 0xd

0x6d6: Pop(-2, 1); TaskReturn
0x6d7: Pop(2)
0x6d8: Return(); Pop(2)

