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
	W:ook9DankoTermitnik2_1
	W:k9q01DankoTalk
	W:k9q01BurahTalk
	W:k9q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006b003900440061006e006b006f005400650072006d00690074006e0069006b0032005f00310000006b003900710030003100440061006e006b006f00540061006c006b0000006b00390071003000310042007500720061006800540061006c006b0000006b0039007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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

RunOp = 0x160
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc1 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x164 Vars = (string)
		EVENT_6 Op = 0x178 Vars = ()
		EVENT_5 Op = 0x185 Vars = ()
		EVENT_7 Op = 0x1d4 Vars = (int)
		EVENT_45 Op = 0x216 Vars = (bool)
		EVENT_0 Op = 0x222 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2a6

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
0x11: Call2 0x3ad

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x300

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2ab

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x46b

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x469

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x46d

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x46f

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x458

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
0x55: Call2 0x2ef

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
0x63: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xab

0x67: Pop(1)
0x68: Push((int) 526491)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x40a

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x416

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 526492)
0x7c: Push((int) 27759)
0x7d: Push((int) 27758)
0x7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7f: Pop(3)
0x80: Push((int) 526497)
0x81: Push((int) -1)
0x82: Push((int) 27763)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: Push((int) 528836)
0x86: Push((int) -1)
0x87: Push((int) 30254)
0x88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x62

0x8d: PushEmpty(bool)
0x8e: Call2 0x471

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call2 0x38a

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all") // @poff=138
0xa6: Push("idle") // @poff=146
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call2 0x471

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string, bool)
0xb6: Stack[-3] = Stack[-2]
0xb7: Push("") // @poff=102
0xb8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-1] = (bool) 0
0xbb: GOTO 0xbd

0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0x391

0xbe: Pop(2)
0xbf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: Push((int) 1)
0xc3: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0xc4: PushEmpty()
0xc5: Call2 0x3a6

0xc6: Pop(0)
0xc7: Push((int) 27758)
0xc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x3e3

0xce: Pop(2)
0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x3e9

0xd3: Pop(2)
0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x3ef

0xd8: Pop(2)
0xd9: Push((int) 27757)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = "Neutral" // @poff=89
0xde: Call2 0xab

0xdf: Pop(1)
0xe0: Push((int) 526491)
0xe1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe2: Pop(1)
0xe3: @@@ ClearReplies(); Obj=0 // @poff=116
0xe4: Pop(0)
0xe5: PushEmpty(bool)
0xe6: Stack[-1] = (bool) 0
0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call2 0x40a

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee: Call2 0x416

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: Stack[-1] = (bool) 1
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: Push((int) 526492)
0xf4: Push((int) 27759)
0xf5: Push((int) 27758)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Push((int) 526497)
0xf9: Push((int) -1)
0xfa: Push((int) 27763)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 528836)
0xfe: Push((int) -1)
0xff: Push((int) 30254)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 27759)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=89
0x108: Call2 0xab

0x109: Pop(1)
0x10a: Push((int) 526493)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=116
0x10e: Pop(0)
0x10f: Push((int) 528837)
0x110: Push((int) 30256)
0x111: Push((int) 30255)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 30256)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral" // @poff=89
0x11a: Call2 0xab

0x11b: Pop(1)
0x11c: Push((int) 528838)
0x11d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11e: Pop(1)
0x11f: @@@ ClearReplies(); Obj=0 // @poff=116
0x120: Pop(0)
0x121: Push((int) 528839)
0x122: Push((int) 30258)
0x123: Push((int) 30257)
0x124: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Push((int) 30258)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral" // @poff=89
0x12c: Call2 0xab

0x12d: Pop(1)
0x12e: Push((int) 528840)
0x12f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x130: Pop(1)
0x131: @@@ ClearReplies(); Obj=0 // @poff=116
0x132: Pop(0)
0x133: Push((int) 526494)
0x134: Push((int) 27761)
0x135: Push((int) 27760)
0x136: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 27761)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral" // @poff=89
0x13e: Call2 0xab

0x13f: Pop(1)
0x140: Push((int) 526495)
0x141: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x142: Pop(1)
0x143: @@@ ClearReplies(); Obj=0 // @poff=116
0x144: Pop(0)
0x145: Push((int) 526496)
0x146: Push((int) -1)
0x147: Push((int) 27762)
0x148: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14c: PushEmpty(bool)
0x14d: Call2 0x471

0x14e: Pop(0)
0x14f: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x150: @ lshStopAnimation()
0x151: Pop(0)
0x152: GOTO 0x155

0x153: @ StopAnimation()
0x154: Pop(0)
0x155: Return(); Pop(0)

0x156: GOTO 0xc2

0x157: Return(); Pop(0)

0x158: PushEmpty()
0x159: PushEmpty(int, object)
0x15a: Stack[-3] = Stack[-1]
0x15b: Push(-2, 1); TaskCall(1)
0x15c: Call2 0xd

0x15d: Pop(-2, 1); TaskReturn
0x15e: Pop(2)
0x15f: Return(); Pop(0)

0x160: PushEmpty()
0x161: Call2 0x189

0x162: Pop(0)
0x163: Return(); Pop(0)

0x164: PushEmpty(bool, bool)
0x165: Push("cleanup") // @poff=156
0x166: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x168: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x169: @ IsLoaded(Stack[-1])
0x16a: Pop(0)
0x16b: Pop(0); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: PushEmpty(object)
0x16e: Call2 0x3ad

0x16f: Pop(0)
0x170: @ RemoveActor(Stack[-1])
0x171: Pop(1)
0x172: GOTO 0x177

0x173: Push("restore") // @poff=172
0x174: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x176: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x177: Return(); Pop(2)

0x178: Push( Stack[1 + Tasks[-1].StackPointer] )
0x179: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17a: PushEmpty(object)
0x17b: Call2 0x3ad

0x17c: Pop(0)
0x17d: @ RemoveActor(Stack[-1])
0x17e: Pop(1)
0x17f: @ Hold()
0x180: Pop(0)
0x181: PushEmpty()
0x182: Call2 0x1fa

0x183: Pop(0)
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: Call2 0x209

0x187: Pop(0)
0x188: Return(); Pop(0)

0x189: PushEmpty(bool)
0x18a: Call2 0x2a6

0x18b: Pop(0)
0x18c: Pop(1); Push((bool) Stack[-1] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: PushEmpty()
0x18f: Push(-0, 0); TaskCall(0)
0x190: Call2 0x0

0x191: Pop(-0, 0); TaskReturn
0x192: Pop(0)
0x193: PushEmpty()
0x194: Call2 0x185

0x195: Pop(0)
0x196: @ GetDirection(Stack[-0]T)
0x197: Pop(0)
0x198: PushEmpty()
0x199: Call2 0x23f

0x19a: Pop(0)
0x19b: GOTO 0x198

0x19c: Return(); Pop(0)

0x19d: PushEmpty(object, object)
0x19e: Push("player") // @poff=188
0x19f: @ FindActor(Stack[-2], Stack[-1])
0x1a0: Pop(1)
0x1a1: Pop(0); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a3: Stack[-3] = (bool) 0
0x1a4: Return(); Pop(2)

0x1a5: PushEmpty(bool, object)
0x1a6: Stack[-3] = Stack[-1]
0x1a7: Call2 0x29d

0x1a8: Stack[-2] = Stack[-5]
0x1a9: Pop(2)
0x1aa: Return(); Pop(2)

0x1ab: Stack[-1] = 0
0x1ac: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1ad: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1ae: @ RotateAsync(Stack[-2], Stack[-1])
0x1af: Pop(2)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(object, bool, object, bool)
0x1b2: Push("player") // @poff=188
0x1b3: @ FindActor(Stack[-3], Stack[-1])
0x1b4: Pop(1)
0x1b5: Pop(0); Push((bool) Stack[-2] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b7: Stack[-5] = (bool) 0
0x1b8: Return(); Pop(4)

0x1b9: PushEmpty(float, object)
0x1ba: Stack[-4] = Stack[-1]
0x1bb: Call2 0x28b

0x1bc: Pop(1)
0x1bd: Push((float)90000.0)
0x1be: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c0: Stack[-5] = (bool) 0
0x1c1: Return(); Pop(4)

0x1c2: @ CanSee(Stack[-1], Stack[-2])
0x1c3: Pop(0)
0x1c4: Stack[-1] = Stack[-5]
0x1c5: Return(); Pop(4)

0x1c6: Stack[-2] = 0
0x1c7: PushEmpty(float, float)
0x1c8: Push((int) 8)
0x1c9: Push((int) 16)
0x1ca: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(2)
0x1cc: Push((int) 10)
0x1cd: @ SetTimer(Stack[-1], Stack[-2])
0x1ce: Pop(1)
0x1cf: Return(); Pop(2)

0x1d0: Push((int) 10)
0x1d1: @ KillTimer(Stack[-1])
0x1d2: Pop(1)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: Push((int) 10)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call2 0x1d0

0x1da: Pop(0)
0x1db: PushEmpty(bool)
0x1dc: Stack[-1] = (bool) 0
0x1dd: PushEmpty(bool)
0x1de: Call2 0x2a6

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty(bool)
0x1e2: Call2 0x1b1

0x1e3: Pop(0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[-1] = (bool) 1
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e7: PushEmpty(bool)
0x1e8: Call2 0x19d

0x1e9: Pop(0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1eb: PushEmpty(bool, object)
0x1ec: PushEmpty(object)
0x1ed: Call2 0x3ad

0x1ee: Stack[-1] = Stack[-2]
0x1ef: Pop(1)
0x1f0: Call2 0x33a

0x1f1: Pop(2)
0x1f2: GOTO 0x1f9

0x1f3: PushEmpty()
0x1f4: Call2 0x1ac

0x1f5: Pop(0)
0x1f6: PushEmpty()
0x1f7: Call2 0x1c7

0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: Call2 0x286

0x1fc: Pop(0)
0x1fd: PushEmpty()
0x1fe: Call2 0x1d0

0x1ff: Pop(0)
0x200: @ lshStopSpeech()
0x201: Pop(0)
0x202: @ lshStopAnimation()
0x203: Pop(0)
0x204: @ StopAsync()
0x205: Pop(0)
0x206: @ Hold()
0x207: Pop(0)
0x208: Return(); Pop(0)

0x209: @ StopGroup0()
0x20a: Pop(0)
0x20b: PushEmpty()
0x20c: Call2 0x1d0

0x20d: Pop(0)
0x20e: PushEmpty(string)
0x20f: Stack[-1] = "Neutral" // @poff=89
0x210: Call2 0x38a

0x211: Pop(1)
0x212: PushEmpty()
0x213: Call2 0x1c7

0x214: Pop(0)
0x215: Return(); Pop(0)

0x216: PushEmpty()
0x217: Push(Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x219: PushEmpty()
0x21a: Call2 0x1c7

0x21b: Pop(0)
0x21c: GOTO 0x221

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Neutral" // @poff=89
0x21f: Call2 0x38a

0x220: Pop(1)
0x221: Return(); Pop(0)

0x222: PushEmpty(bool, bool)
0x223: @ IsOverrideActive(Stack[-1])
0x224: Pop(0)
0x225: Pop(0); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x227: EventDisable(0)
0x228: PushEmpty()
0x229: Call2 0x286

0x22a: Pop(0)
0x22b: PushEmpty(bool, object)
0x22c: Stack[-5] = Stack[-1]
0x22d: Call2 0x29d

0x22e: Pop(2)
0x22f: EventEnable(0)
0x230: PushEmpty(object)
0x231: Stack[-4] = Stack[-1]
0x232: Call2 0x158

0x233: Pop(1)
0x234: PushEmpty(string)
0x235: Stack[-1] = "Neutral" // @poff=89
0x236: Call2 0x38a

0x237: Pop(1)
0x238: PushEmpty()
0x239: Call2 0x1d0

0x23a: Pop(0)
0x23b: PushEmpty()
0x23c: Call2 0x1c7

0x23d: Pop(0)
0x23e: Return(); Pop(2)

0x23f: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x240: @ WaitForAnimEnd()
0x241: Pop(0)
0x242: PushEmpty(bool)
0x243: Call2 0x2a6

0x244: Pop(0)
0x245: Pop(1); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: Return(); Pop(12)

0x248: PushEmpty(int)
0x249: Call2 0x3d2

0x24a: Stack[-1] = Stack[-7]
0x24b: Pop(1)
0x24c: Stack[-5] = (int) 0
0x24d: PushEmpty(bool)
0x24e: Stack[-1] = (bool) 0
0x24f: Push((int) 5)
0x250: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: PushEmpty(bool)
0x253: Call2 0x2a6

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Stack[-1] = (bool) 1
0x257: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x258: Pop(0); Push((bool) Stack[-6] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25a: Push((int) 3)
0x25b: @ Sleep(Stack[-1], Stack[-5])
0x25c: Pop(1)
0x25d: Pop(0); Push((bool) Stack[-4] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x281

0x260: GOTO 0x276

0x261: @ irand(Stack[-3], Stack[-6])
0x262: Pop(0)
0x263: Push((int) 5)
0x264: @ irand(Stack[-3], Stack[-1])
0x265: Pop(1)
0x266: Push((int) 0)
0x267: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-3] = (int) 0
0x26a: Push("all") // @poff=138
0x26b: PushEmpty(string, int)
0x26c: Stack[-6] = Stack[-1]
0x26d: Call2 0x3cb

0x26e: Pop(1)
0x26f: @ PlayAnimation(Stack[-2], Stack[-1])
0x270: Pop(2)
0x271: @ WaitForAnimEnd(Stack[-1])
0x272: Pop(0)
0x273: Pop(0); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x281

0x276: PushEmpty(bool)
0x277: Call2 0x284

0x278: Pop(0)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x281

0x27c: @ ResetAAS()
0x27d: Pop(0)
0x27e: Push((int) 1)
0x27f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x280: GOTO 0x24d

0x281: @ ResetAAS()
0x282: Pop(0)
0x283: Return(); Pop(12)

0x284: Stack[-1] = (bool) 1
0x285: Return(); Pop(0)

0x286: @ StopAnimation()
0x287: Pop(0)
0x288: @ StopGroup0()
0x289: Pop(0)
0x28a: Return(); Pop(0)

0x28b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28c: @ GetPosition(Stack[-3])
0x28d: Pop(0)
0x28e: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x28f: Pop(0)
0x290: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x291: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x292: Return(); Pop(6)

0x293: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x294: @ GetPosition(Stack[-3])
0x295: Pop(0)
0x296: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x297: Push(CvectorIndex(Stack[-2], 0))
0x298: Push(CvectorIndex(Stack[-3], 2))
0x299: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x29a: Pop(2)
0x29b: Stack[-1] = Stack[-8]
0x29c: Return(); Pop(6)

0x29d: PushEmpty(cvector, cvector)
0x29e: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x29f: Pop(0)
0x2a0: PushEmpty(bool, cvector)
0x2a1: Stack[-3] = Stack[-1]
0x2a2: Call2 0x293

0x2a3: Stack[-2] = Stack[-6]
0x2a4: Pop(2)
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(bool, bool)
0x2a7: @ IsLoaded(Stack[-1])
0x2a8: Pop(0)
0x2a9: Stack[-1] = Stack[-3]
0x2aa: Return(); Pop(2)

0x2ab: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ac: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2ad: Pop(0)
0x2ae: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2af: Pop(0)
0x2b0: Push(CvectorIndex(Stack[-8], 1))
0x2b1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b3: @ GetPosition(Stack[-7])
0x2b4: Pop(0)
0x2b5: @ GetEyesHeight(Stack[-9])
0x2b6: Pop(0)
0x2b7: Push(CvectorIndex(Stack[-7], 1))
0x2b8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ba: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2bb: Push(CvectorIndex(Stack[-6], 1))
0x2bc: Stack[-1] = (int) 0
0x2bd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2be: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2bf: Pop(1); Push(Sqrt(Stack[-1]))
0x2c0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c1: Stack[-5] = -Stack[-6]; Pop(0);
0x2c2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c3: PushEmpty(cvector, cvector)
0x2c4: Push([0.0, 1.0, 0.0])
0x2c5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c6: Call2 0x3b3

0x2c7: Pop(1)
0x2c8: Push((int) 25)
0x2c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cb: Push([0.0, 10.0, 0.0])
0x2cc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2cd: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ce: @ IsOverrideActive(Stack[-2])
0x2cf: Pop(0)
0x2d0: Push(Stack[-2])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-21] = (bool) 0
0x2d3: Return(); Pop(18)

0x2d4: @ StopWorld()
0x2d5: Pop(0)
0x2d6: @ CameraTransit(Stack[-3], Stack[-5])
0x2d7: Pop(0)
0x2d8: Push(CvectorIndex(Stack[-4], 0))
0x2d9: Push(CvectorIndex(Stack[-5], 2))
0x2da: @ Rotate(Stack[-2], Stack[-1])
0x2db: Pop(2)
0x2dc: PushEmpty(bool)
0x2dd: Call2 0x471

0x2de: Pop(0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: GOTO 0x2e9

0x2e1: Push("head") // @poff=228
0x2e2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e3: Pop(1)
0x2e4: Push(Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e6: Push("head") // @poff=228
0x2e7: @ LookAsyncCamera(Stack[-1])
0x2e8: Pop(1)
0x2e9: @ CameraWaitForPlayFinish()
0x2ea: Pop(0)
0x2eb: @ ResumeWorld()
0x2ec: Pop(0)
0x2ed: Stack[-21] = (bool) 1
0x2ee: Return(); Pop(18)

0x2ef: PushEmpty(bool, bool)
0x2f0: @ CameraSwitchToNormal()
0x2f1: Pop(0)
0x2f2: PushEmpty(bool)
0x2f3: Call2 0x471

0x2f4: Pop(0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x2ff

0x2f7: Push("head") // @poff=228
0x2f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: Push(Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: Push("head") // @poff=228
0x2fd: @ UnlookAsync(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(2)

0x300: PushEmpty(int, int, int, int)
0x301: Push("voice_common") // @poff=238
0x302: @ GetVariable(Stack[-1], Stack[-3])
0x303: Pop(1)
0x304: Push(Stack[-2])
0x305: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x306: PushEmpty(bool, object)
0x307: Stack[-7] = Stack[-1]
0x308: Call2 0x33a

0x309: Pop(1)
0x30a: Pop(1); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30c: PushEmpty(bool, object)
0x30d: Stack[-7] = Stack[-1]
0x30e: Call2 0x35f

0x30f: Pop(1)
0x310: Pop(1); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Stack[-6] = (bool) 0
0x313: Return(); Pop(4)

0x314: Push((int) 2)
0x315: @ irand(Stack[-2], Stack[-1])
0x316: Pop(1)
0x317: Push(Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x319: Push("voice_common") // @poff=238
0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x31c: Push((int) 3)
0x31d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x31e: @ SetVariable(Stack[-2], Stack[-1])
0x31f: Pop(2)
0x320: GOTO 0x325

0x321: Push("voice_common") // @poff=238
0x322: Push((int) 0)
0x323: @ SetVariable(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: GOTO 0x338

0x326: PushEmpty(bool, object)
0x327: Stack[-7] = Stack[-1]
0x328: Call2 0x35f

0x329: Pop(1)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32c: PushEmpty(bool, object)
0x32d: Stack[-7] = Stack[-1]
0x32e: Call2 0x33a

0x32f: Pop(1)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-6] = (bool) 0
0x333: Return(); Pop(4)

0x334: Push("voice_common") // @poff=238
0x335: Push((int) 1)
0x336: @ SetVariable(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: Stack[-6] = (bool) 1
0x339: Return(); Pop(4)

0x33a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x33b: Stack[-5] = "c" // @poff=264
0x33c: Stack[-4] = (int) 0
0x33d: Push((int) 1)
0x33e: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x33f: Push((int) 1)
0x340: Pop(1); Push(Stack[-5] + Stack[-1]);
0x341: Pop(1); Push(Stack[-6] + Stack[-1]);
0x342: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x343: Pop(1)
0x344: Pop(0); Push((bool) Stack[-3] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: GOTO 0x34a

0x347: Push((int) 1)
0x348: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x349: GOTO 0x33d

0x34a: Pop(0); Push((bool) Stack[-4] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-12] = (bool) 0
0x34d: Return(); Pop(10)

0x34e: Stack[-2] = (int) 0
0x34f: Push((int) 1)
0x350: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: @ irand(Stack[-2], Stack[-4])
0x353: Pop(0)
0x354: Push((int) 1)
0x355: Pop(1); Push(Stack[-3] + Stack[-1]);
0x356: Pop(1); Push(Stack[-6] + Stack[-1]);
0x357: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x358: Pop(1)
0x359: PushEmpty(bool, string)
0x35a: Stack[-3] = Stack[-1]
0x35b: Call2 0x397

0x35c: Stack[-2] = Stack[-14]
0x35d: Pop(2)
0x35e: Return(); Pop(10)

0x35f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x360: Push("d") // @poff=234
0x361: PushEmpty(int)
0x362: Call2 0x3c2

0x363: Pop(0)
0x364: Pop(2); Push(Stack[-2] + Stack[-1]);
0x365: Push("m") // @poff=292
0x366: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x367: Stack[-4] = (int) 0
0x368: Push((int) 1)
0x369: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36a: Push((int) 1)
0x36b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x36c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x36e: Pop(1)
0x36f: Pop(0); Push((bool) Stack[-3] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: GOTO 0x375

0x372: Push((int) 1)
0x373: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x374: GOTO 0x368

0x375: Pop(0); Push((bool) Stack[-4] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x377: Stack[-12] = (bool) 0
0x378: Return(); Pop(10)

0x379: Stack[-2] = (int) 0
0x37a: Push((int) 1)
0x37b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: @ irand(Stack[-2], Stack[-4])
0x37e: Pop(0)
0x37f: Push((int) 1)
0x380: Pop(1); Push(Stack[-3] + Stack[-1]);
0x381: Pop(1); Push(Stack[-6] + Stack[-1]);
0x382: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x383: Pop(1)
0x384: PushEmpty(bool, string)
0x385: Stack[-3] = Stack[-1]
0x386: Call2 0x397

0x387: Stack[-2] = Stack[-14]
0x388: Pop(2)
0x389: Return(); Pop(10)

0x38a: PushEmpty(float, float, float, float)
0x38b: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x38c: Pop(0)
0x38d: Push((bool) 0)
0x38e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty(float, float, float, float)
0x392: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x393: Pop(0)
0x394: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x395: Pop(0)
0x396: Return(); Pop(4)

0x397: PushEmpty(bool, bool)
0x398: PushEmpty(bool)
0x399: Call2 0x471

0x39a: Pop(0)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39c: @ lshHasSpeech(Stack[-1], Stack[-3])
0x39d: Pop(0)
0x39e: Push(Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a0: @ lshPlaySpeech(Stack[-3])
0x3a1: Pop(0)
0x3a2: Stack[-4] = (bool) 1
0x3a3: Return(); Pop(2)

0x3a4: Stack[-4] = (bool) 0
0x3a5: Return(); Pop(2)

0x3a6: PushEmpty(bool)
0x3a7: Call2 0x471

0x3a8: Pop(0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: @ lshStopSpeech()
0x3ab: Pop(0)
0x3ac: Return(); Pop(0)

0x3ad: PushEmpty(object, object)
0x3ae: @ self(Stack[-1])
0x3af: Pop(0)
0x3b0: Stack[-1] = Stack[-3]
0x3b1: Return(); Pop(2)

0x3b2: Stack[-1] = 0
0x3b3: PushEmpty(float, float)
0x3b4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3b5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b6: Push((float)9.999999974752427e-07)
0x3b7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-4] = [0.0, 0.0, 0.0]
0x3ba: Return(); Pop(2)

0x3bb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3bc: Return(); Pop(2)

0x3bd: PushEmpty(int, int)
0x3be: @ GetVariable(Stack[-3], Stack[-1])
0x3bf: Pop(0)
0x3c0: Stack[-1] = Stack[-4]
0x3c1: Return(); Pop(2)

0x3c2: PushEmpty(float, float)
0x3c3: @ GetGameTime(Stack[-1])
0x3c4: Pop(0)
0x3c5: Push((int) 1)
0x3c6: PushEmpty(int)
0x3c7: Push((int) 24)
0x3c8: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3c9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(string, string)
0x3cc: Stack[-1] = "idle" // @poff=146
0x3cd: Push(Stack[-3])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3d0: Stack[-1] = Stack[-4]
0x3d1: Return(); Pop(2)

0x3d2: PushEmpty(int, bool, int, bool)
0x3d3: Stack[-2] = (int) 0
0x3d4: Push("all") // @poff=138
0x3d5: PushEmpty(string, int)
0x3d6: Stack[-5] = Stack[-1]
0x3d7: Call2 0x3cb

0x3d8: Pop(1)
0x3d9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: Pop(0); Push((bool) Stack[-1] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: GOTO 0x3e1

0x3de: Push((int) 1)
0x3df: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3e0: GOTO 0x3d4

0x3e1: Stack[-2] = Stack[-5]
0x3e2: Return(); Pop(4)

0x3e3: PushEmpty()
0x3e4: Push("ook9DankoTermitnik2_1") // @poff=296
0x3e5: Push((int) 1)
0x3e6: @ SetVariable(Stack[-2], Stack[-1])
0x3e7: Pop(2)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: Push("k9q01DankoTalk") // @poff=340
0x3eb: Push((int) 1)
0x3ec: @ SetVariable(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: PushEmpty(bool)
0x3f1: Stack[-1] = (bool) 0
0x3f2: PushEmpty(int, string)
0x3f3: Stack[-1] = "k9q01BurahTalk" // @poff=370
0x3f4: Call2 0x3bd

0x3f5: Pop(1)
0x3f6: Push((int) 0)
0x3f7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f9: PushEmpty(int, string)
0x3fa: Stack[-1] = "k9q01DankoTalk" // @poff=340
0x3fb: Call2 0x3bd

0x3fc: Pop(1)
0x3fd: Push((int) 0)
0x3fe: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: Stack[-1] = (bool) 1
0x401: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x402: Push("k9q01") // @poff=400
0x403: Push((int) 3)
0x404: @ SetVariable(Stack[-2], Stack[-1])
0x405: Pop(2)
0x406: PushEmpty()
0x407: Call2 0x422

0x408: Pop(0)
0x409: Return(); Pop(0)

0x40a: PushEmpty()
0x40b: PushEmpty(int, string)
0x40c: Stack[-1] = "k9q01" // @poff=400
0x40d: Call2 0x3bd

0x40e: Pop(1)
0x40f: Push((int) 2)
0x410: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x412: Stack[-2] = (bool) 1
0x413: Return(); Pop(0)

0x414: Stack[-2] = (bool) 0
0x415: Return(); Pop(0)

0x416: PushEmpty()
0x417: PushEmpty(int, string)
0x418: Stack[-1] = "ook9DankoTermitnik2_1" // @poff=296
0x419: Call2 0x3bd

0x41a: Pop(1)
0x41b: Push((int) 0)
0x41c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-2] = (bool) 1
0x41f: Return(); Pop(0)

0x420: Stack[-2] = (bool) 0
0x421: Return(); Pop(0)

0x422: PushEmpty(object, object)
0x423: Push((int) 520)
0x424: Push((int) 1)
0x425: Push((int) 529812)
0x426: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: PushEmpty(bool, object, int)
0x429: Stack[-4] = Stack[-2]
0x42a: Stack[-1] = (int) 517
0x42b: Call2 0x43c

0x42c: Pop(3)
0x42d: Return(); Pop(2)

0x42e: Stack[-1] = 0
0x42f: PushEmpty(object, object)
0x430: @ GetDiaryRoot(Stack[-1])
0x431: Pop(0)
0x432: Pop(0); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x434: Push("Can't retrieve diary root") // @poff=412
0x435: @ Trace(Stack[-1])
0x436: Pop(1)
0x437: Stack[-3] = (bool) 0
0x438: Return(); Pop(2)

0x439: Stack[-1] = Stack[-3]
0x43a: Return(); Pop(2)

0x43b: Stack[-1] = 0
0x43c: PushEmpty(object, object, int, object, object, int)
0x43d: PushEmpty(object)
0x43e: Call2 0x42f

0x43f: Stack[-1] = Stack[-4]
0x440: Pop(1)
0x441: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=464
0x442: Pop(0)
0x443: Pop(0); Push((bool) Stack[-2] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x445: Push("Can't find diary parent with id: ") // @poff=469
0x446: Pop(1); Push(Stack[-1] + Stack[-8]);
0x447: @ Trace(Stack[-1])
0x448: Pop(1)
0x449: Stack[-9] = (bool) 0
0x44a: Return(); Pop(6)

0x44b: @@ AddChild(Stack[-8]); Obj=2 // @poff=537
0x44c: Pop(0)
0x44d: Push((int) 7)
0x44e: @ SendWorldWndMessage(Stack[-1])
0x44f: Pop(1)
0x450: @@ GetCategory(Stack[-1]); Obj=8 // @poff=546
0x451: Pop(0)
0x452: @ SetDiarySection(Stack[-1])
0x453: Pop(0)
0x454: Stack[-9] = (bool) 0
0x455: Return(); Pop(6)

0x456: Stack[-2] = 0
0x457: Stack[-3] = 0
0x458: PushEmpty(int, int)
0x459: Push("branch") // @poff=558
0x45a: @ GetVariable(Stack[-1], Stack[-2])
0x45b: Pop(1)
0x45c: Push((int) 0)
0x45d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45f: Stack[-3] = (int) 1
0x460: Return(); Pop(2)

0x461: GOTO 0x467

0x462: Push((int) 1)
0x463: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-3] = (int) 2
0x466: Return(); Pop(2)

0x467: Stack[-3] = (int) 3
0x468: Return(); Pop(2)

0x469: Stack[-1] = (int) 515573
0x46a: Return(); Pop(0)

0x46b: Stack[-1] = (int) 504032
0x46c: Return(); Pop(0)

0x46d: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=572
0x46e: Return(); Pop(0)

0x46f: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=612
0x470: Return(); Pop(0)

0x471: Stack[-1] = (bool) 1
0x472: Return(); Pop(0)

