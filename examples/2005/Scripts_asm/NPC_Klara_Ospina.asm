GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Ospina.png
	W:ui/NPC_Ospina_b.png
	W:k2q01
	W:ook6Ospina1
	W:k8q01
	W:k11q01SoulCount
	W:ook11Ospina1
	W:k6q01
	W:k6q01DankoPos
	W:k11q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004f007300700069006e0061002e0070006e0067000000750069002f004e00500043005f004f007300700069006e0061005f0062002e0070006e00670000006b00320071003000310000006f006f006b0036004f007300700069006e006100310000006b00380071003000310000006b003100310071003000310053006f0075006c0043006f0075006e00740000006f006f006b00310031004f007300700069006e006100310000006b00360071003000310000006b003600710030003100440061006e006b006f0050006f00730000006b00310031007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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

RunOp = 0x903
RunTask = 15

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd1 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x271 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x393 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4ca Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x671 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x813 Vars = (int, int)
	GTASK_13 Vars = (object) Params = 2
	GTASK_14 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8d9 Vars = (int, int)
	GTASK_15 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x955 Vars = (int)
		EVENT_6 Op = 0x97b Vars = ()
		EVENT_5 Op = 0x98a Vars = ()
		EVENT_45 Op = 0x997 Vars = (bool)
		EVENT_0 Op = 0x9a3 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xa27

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
0x11: Call2 0xb2e

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0xa81

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0xa2c

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xb6c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xb6a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xb6e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xb70

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xcde

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
0x55: Call2 0xa70

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
0x63: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xbb

0x67: Pop(1)
0x68: Push((int) 525251)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0xbd3

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 525252)
0x73: Push((int) 26621)
0x74: Push((int) 26620)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0xbdf

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: Push((int) 525263)
0x7d: Push((int) 26632)
0x7e: Push((int) 26631)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: Push((int) 525255)
0x82: Push((int) -1)
0x83: Push((int) 26623)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x9d

0x87: PushEmpty(string)
0x88: Stack[-1] = "Neutral" // @poff=89
0x89: Call2 0xbb

0x8a: Pop(1)
0x8b: Push((int) 525280)
0x8c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8d: Pop(1)
0x8e: @@@ ClearReplies(); Obj=0 // @poff=116
0x8f: Pop(0)
0x90: Push((int) 525281)
0x91: Push((int) -1)
0x92: Push((int) 26649)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: Push((int) 528809)
0x96: Push((int) -1)
0x97: Push((int) 30223)
0x98: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x99: Pop(3)
0x9a: GOTO 0x9d

0x9b: Return(); Pop(0)

0x9c: GOTO 0x62

0x9d: PushEmpty(bool)
0x9e: Call2 0xb72

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa1: @ lshWaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: PushEmpty(string)
0xa7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa8: Call2 0xb0b

0xa9: Pop(1)
0xaa: GOTO 0xa1

0xab: GOTO 0xba

0xac: Push("all") // @poff=138
0xad: Push("idle") // @poff=146
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: @ WaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: Push("all") // @poff=138
0xb6: Push("idle") // @poff=146
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: GOTO 0xb0

0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(bool)
0xbd: Call2 0xb72

0xbe: Pop(0)
0xbf: Pop(1); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(0)

0xc2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: PushEmpty(string, bool)
0xc6: Stack[-3] = Stack[-2]
0xc7: Push("") // @poff=102
0xc8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-1] = (bool) 0
0xcb: GOTO 0xcd

0xcc: Stack[-1] = (bool) 1
0xcd: Call2 0xb12

0xce: Pop(2)
0xcf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: Push((int) 1)
0xd3: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0xb27

0xd6: Pop(0)
0xd7: Push((int) 26622)
0xd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0xb74

0xde: Pop(2)
0xdf: Push((int) 26641)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0xb7d

0xe6: Pop(2)
0xe7: Push((int) 26619)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral" // @poff=89
0xec: Call2 0xbb

0xed: Pop(1)
0xee: Push((int) 525251)
0xef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf0: Pop(1)
0xf1: @@@ ClearReplies(); Obj=0 // @poff=116
0xf2: Pop(0)
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0xbd3

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 525252)
0xf9: Push((int) 26621)
0xfa: Push((int) 26620)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call2 0xbdf

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) 525263)
0x103: Push((int) 26632)
0x104: Push((int) 26631)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 525255)
0x108: Push((int) -1)
0x109: Push((int) 26623)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral" // @poff=89
0x10f: Call2 0xbb

0x110: Pop(1)
0x111: Push((int) 525280)
0x112: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x113: Pop(1)
0x114: @@@ ClearReplies(); Obj=0 // @poff=116
0x115: Pop(0)
0x116: Push((int) 525281)
0x117: Push((int) -1)
0x118: Push((int) 26649)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Push((int) 528809)
0x11c: Push((int) -1)
0x11d: Push((int) 30223)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 26632)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0xbb

0x127: Pop(1)
0x128: Push((int) 525264)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 525265)
0x12e: Push((int) 26634)
0x12f: Push((int) 26633)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 26634)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral" // @poff=89
0x138: Call2 0xbb

0x139: Pop(1)
0x13a: Push((int) 525266)
0x13b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13c: Pop(1)
0x13d: @@@ ClearReplies(); Obj=0 // @poff=116
0x13e: Pop(0)
0x13f: Push((int) 529215)
0x140: Push((int) 30668)
0x141: Push((int) 30667)
0x142: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Push((int) 30668)
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral" // @poff=89
0x14a: Call2 0xbb

0x14b: Pop(1)
0x14c: Push((int) 529216)
0x14d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14e: Pop(1)
0x14f: @@@ ClearReplies(); Obj=0 // @poff=116
0x150: Pop(0)
0x151: Push((int) 529217)
0x152: Push((int) 30670)
0x153: Push((int) 30669)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 30670)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral" // @poff=89
0x15c: Call2 0xbb

0x15d: Pop(1)
0x15e: Push((int) 529218)
0x15f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x160: Pop(1)
0x161: @@@ ClearReplies(); Obj=0 // @poff=116
0x162: Pop(0)
0x163: Push((int) 525267)
0x164: Push((int) 26636)
0x165: Push((int) 26635)
0x166: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 26636)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0xbb

0x16f: Pop(1)
0x170: Push((int) 525268)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 525269)
0x176: Push((int) 26638)
0x177: Push((int) 26637)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 26638)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral" // @poff=89
0x180: Call2 0xbb

0x181: Pop(1)
0x182: Push((int) 525270)
0x183: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x184: Pop(1)
0x185: @@@ ClearReplies(); Obj=0 // @poff=116
0x186: Pop(0)
0x187: Push((int) 525271)
0x188: Push((int) 26640)
0x189: Push((int) 26639)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 26640)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0xbb

0x193: Pop(1)
0x194: Push((int) 525272)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 525273)
0x19a: Push((int) -1)
0x19b: Push((int) 26641)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 26621)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral" // @poff=89
0x1a4: Call2 0xbb

0x1a5: Pop(1)
0x1a6: Push((int) 525253)
0x1a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a8: Pop(1)
0x1a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1aa: Pop(0)
0x1ab: Push((int) 529213)
0x1ac: Push((int) 30666)
0x1ad: Push((int) 30665)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 30666)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0xbb

0x1b7: Pop(1)
0x1b8: Push((int) 529214)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 525254)
0x1be: Push((int) -1)
0x1bf: Push((int) 26622)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c4: PushEmpty(bool)
0x1c5: Call2 0xb72

0x1c6: Pop(0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c8: @ lshStopAnimation()
0x1c9: Pop(0)
0x1ca: GOTO 0x1cd

0x1cb: @ StopAnimation()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: GOTO 0xd2

0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1d1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d2: PushEmpty(bool, object)
0x1d3: PushEmpty(object)
0x1d4: Call2 0xb2e

0x1d5: Stack[-1] = Stack[-2]
0x1d6: Pop(1)
0x1d7: Call2 0xa81

0x1d8: Pop(2)
0x1d9: PushEmpty(bool, object, float)
0x1da: Stack[-12] = Stack[-2]
0x1db: Stack[-1] = (float) 70.0
0x1dc: Call2 0xa2c

0x1dd: Pop(2)
0x1de: Pop(1); Push((bool) Stack[-1] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-10] = (int) -2
0x1e1: Return(); Pop(8)

0x1e2: @ CreateDialog(Stack[-4])
0x1e3: Pop(0)
0x1e4: PushEmpty(int)
0x1e5: Call2 0xb6c

0x1e6: Pop(0)
0x1e7: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x1e8: Pop(1)
0x1e9: PushEmpty(int)
0x1ea: Call2 0xb6a

0x1eb: Pop(0)
0x1ec: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1ed: Pop(1)
0x1ee: PushEmpty(string)
0x1ef: Call2 0xb6e

0x1f0: Pop(0)
0x1f1: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1f2: Pop(1)
0x1f3: PushEmpty(string)
0x1f4: Call2 0xb70

0x1f5: Pop(0)
0x1f6: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x1f7: Pop(1)
0x1f8: PushEmpty(int)
0x1f9: Call2 0xcde

0x1fa: Pop(0)
0x1fb: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x1fc: Pop(1)
0x1fd: Stack[-2] = (int) -1
0x1fe: @ IsOverrideActive(Stack[-3])
0x1ff: Pop(0)
0x200: Push(Stack[-3])
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-10] = (int) -2
0x203: Return(); Pop(8)

0x204: @ DoDialog(Stack[-4])
0x205: Pop(0)
0x206: PushEmpty(object, object)
0x207: Stack[-11] = Stack[-2]
0x208: Stack[-6] = Stack[-1]
0x209: Push(-2, 4); TaskCall(4)
0x20a: Call2 0x221

0x20b: Pop(-2, 4); TaskReturn
0x20c: Pop(2)
0x20d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x20e: Pop(0)
0x20f: Pop(0); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: @ sync()
0x212: Pop(0)
0x213: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x214: Pop(0)
0x215: GOTO 0x20f

0x216: PushEmpty(object)
0x217: Stack[-10] = Stack[-1]
0x218: Call2 0xa70

0x219: Pop(1)
0x21a: @ StopDialog(Stack[-4])
0x21b: Pop(0)
0x21c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x21d: Pop(0)
0x21e: Stack[-2] = Stack[-10]
0x21f: Return(); Pop(8)

0x220: Stack[-4] = 0
0x221: PushEmpty()
0x222: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x223: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x224: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x225: Push((int) 1)
0x226: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral" // @poff=89
0x229: Call2 0x25b

0x22a: Pop(1)
0x22b: Push((int) 525519)
0x22c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22d: Pop(1)
0x22e: @@@ ClearReplies(); Obj=0 // @poff=116
0x22f: Pop(0)
0x230: Push((int) 525520)
0x231: Push((int) 30224)
0x232: Push((int) 26876)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Push((int) 528815)
0x236: Push((int) 30230)
0x237: Push((int) 30229)
0x238: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x239: Pop(3)
0x23a: GOTO 0x23d

0x23b: Return(); Pop(0)

0x23c: GOTO 0x225

0x23d: PushEmpty(bool)
0x23e: Call2 0xb72

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x241: @ lshWaitForAnimEnd()
0x242: Pop(0)
0x243: Push( Stack[3 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x24b

0x246: PushEmpty(string)
0x247: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x248: Call2 0xb0b

0x249: Pop(1)
0x24a: GOTO 0x241

0x24b: GOTO 0x25a

0x24c: Push("all") // @poff=138
0x24d: Push("idle") // @poff=146
0x24e: @ PlayAnimation(Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: @ WaitForAnimEnd()
0x251: Pop(0)
0x252: Push( Stack[3 + Tasks[-1].StackPointer] )
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x25a

0x255: Push("all") // @poff=138
0x256: Push("idle") // @poff=146
0x257: @ PlayAnimation(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: GOTO 0x250

0x25a: Return(); Pop(0)

0x25b: PushEmpty()
0x25c: PushEmpty(bool)
0x25d: Call2 0xb72

0x25e: Pop(0)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(0)

0x262: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: Return(); Pop(0)

0x265: PushEmpty(string, bool)
0x266: Stack[-3] = Stack[-2]
0x267: Push("") // @poff=102
0x268: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-1] = (bool) 0
0x26b: GOTO 0x26d

0x26c: Stack[-1] = (bool) 1
0x26d: Call2 0xb12

0x26e: Pop(2)
0x26f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Push((int) 1)
0x273: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x274: PushEmpty()
0x275: Call2 0xb27

0x276: Pop(0)
0x277: Push((int) 26875)
0x278: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = "Neutral" // @poff=89
0x27c: Call2 0x25b

0x27d: Pop(1)
0x27e: Push((int) 525519)
0x27f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x280: Pop(1)
0x281: @@@ ClearReplies(); Obj=0 // @poff=116
0x282: Pop(0)
0x283: Push((int) 525520)
0x284: Push((int) 30224)
0x285: Push((int) 26876)
0x286: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x287: Pop(3)
0x288: Push((int) 528815)
0x289: Push((int) 30230)
0x28a: Push((int) 30229)
0x28b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28c: Pop(3)
0x28d: Return(); Pop(0)

0x28e: Push((int) 30230)
0x28f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x291: PushEmpty(string)
0x292: Stack[-1] = "Neutral" // @poff=89
0x293: Call2 0x25b

0x294: Pop(1)
0x295: Push((int) 528816)
0x296: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x297: Pop(1)
0x298: @@@ ClearReplies(); Obj=0 // @poff=116
0x299: Pop(0)
0x29a: Push((int) 528817)
0x29b: Push((int) 30224)
0x29c: Push((int) 30231)
0x29d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29e: Pop(3)
0x29f: Return(); Pop(0)

0x2a0: Push((int) 30224)
0x2a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral" // @poff=89
0x2a5: Call2 0x25b

0x2a6: Pop(1)
0x2a7: Push((int) 528810)
0x2a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a9: Pop(1)
0x2aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ab: Pop(0)
0x2ac: Push((int) 528811)
0x2ad: Push((int) 30226)
0x2ae: Push((int) 30225)
0x2af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b0: Pop(3)
0x2b1: Push((int) 528818)
0x2b2: Push((int) 30226)
0x2b3: Push((int) 30233)
0x2b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b5: Pop(3)
0x2b6: Return(); Pop(0)

0x2b7: Push((int) 30226)
0x2b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2ba: PushEmpty(string)
0x2bb: Stack[-1] = "Neutral" // @poff=89
0x2bc: Call2 0x25b

0x2bd: Pop(1)
0x2be: Push((int) 528812)
0x2bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c0: Pop(1)
0x2c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c2: Pop(0)
0x2c3: Push((int) 528813)
0x2c4: Push((int) -1)
0x2c5: Push((int) 30227)
0x2c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c7: Pop(3)
0x2c8: Push((int) 528814)
0x2c9: Push((int) -1)
0x2ca: Push((int) 30228)
0x2cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cc: Pop(3)
0x2cd: Return(); Pop(0)

0x2ce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2cf: PushEmpty(bool)
0x2d0: Call2 0xb72

0x2d1: Pop(0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: @ lshStopAnimation()
0x2d4: Pop(0)
0x2d5: GOTO 0x2d8

0x2d6: @ StopAnimation()
0x2d7: Pop(0)
0x2d8: Return(); Pop(0)

0x2d9: GOTO 0x272

0x2da: Return(); Pop(0)

0x2db: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2dd: PushEmpty(bool, object)
0x2de: PushEmpty(object)
0x2df: Call2 0xb2e

0x2e0: Stack[-1] = Stack[-2]
0x2e1: Pop(1)
0x2e2: Call2 0xa81

0x2e3: Pop(2)
0x2e4: PushEmpty(bool, object, float)
0x2e5: Stack[-12] = Stack[-2]
0x2e6: Stack[-1] = (float) 70.0
0x2e7: Call2 0xa2c

0x2e8: Pop(2)
0x2e9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2eb: Stack[-10] = (int) -2
0x2ec: Return(); Pop(8)

0x2ed: @ CreateDialog(Stack[-4])
0x2ee: Pop(0)
0x2ef: PushEmpty(int)
0x2f0: Call2 0xb6c

0x2f1: Pop(0)
0x2f2: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x2f3: Pop(1)
0x2f4: PushEmpty(int)
0x2f5: Call2 0xb6a

0x2f6: Pop(0)
0x2f7: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2f8: Pop(1)
0x2f9: PushEmpty(string)
0x2fa: Call2 0xb6e

0x2fb: Pop(0)
0x2fc: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2fd: Pop(1)
0x2fe: PushEmpty(string)
0x2ff: Call2 0xb70

0x300: Pop(0)
0x301: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x302: Pop(1)
0x303: PushEmpty(int)
0x304: Call2 0xcde

0x305: Pop(0)
0x306: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x307: Pop(1)
0x308: Stack[-2] = (int) -1
0x309: @ IsOverrideActive(Stack[-3])
0x30a: Pop(0)
0x30b: Push(Stack[-3])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-10] = (int) -2
0x30e: Return(); Pop(8)

0x30f: @ DoDialog(Stack[-4])
0x310: Pop(0)
0x311: PushEmpty(object, object)
0x312: Stack[-11] = Stack[-2]
0x313: Stack[-6] = Stack[-1]
0x314: Push(-2, 4); TaskCall(6)
0x315: Call2 0x32c

0x316: Pop(-2, 4); TaskReturn
0x317: Pop(2)
0x318: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x319: Pop(0)
0x31a: Pop(0); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: @ sync()
0x31d: Pop(0)
0x31e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x31f: Pop(0)
0x320: GOTO 0x31a

0x321: PushEmpty(object)
0x322: Stack[-10] = Stack[-1]
0x323: Call2 0xa70

0x324: Pop(1)
0x325: @ StopDialog(Stack[-4])
0x326: Pop(0)
0x327: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x328: Pop(0)
0x329: Stack[-2] = Stack[-10]
0x32a: Return(); Pop(8)

0x32b: Stack[-4] = 0
0x32c: PushEmpty()
0x32d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x32e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x32f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x330: Push((int) 1)
0x331: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x332: PushEmpty(string)
0x333: Stack[-1] = "Neutral" // @poff=89
0x334: Call2 0x37d

0x335: Pop(1)
0x336: Push((int) 526091)
0x337: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x338: Pop(1)
0x339: @@@ ClearReplies(); Obj=0 // @poff=116
0x33a: Pop(0)
0x33b: PushEmpty(bool)
0x33c: Stack[-1] = (bool) 0
0x33d: PushEmpty(bool)
0x33e: Stack[-1] = (bool) 0
0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x341: Call2 0xbeb

0x342: Pop(1)
0x343: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x346: Call2 0xbf7

0x347: Pop(1)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Stack[-1] = (bool) 1
0x34a: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Call2 0xc03

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Stack[-1] = (bool) 1
0x351: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x352: Push((int) 526092)
0x353: Push((int) 27379)
0x354: Push((int) 27378)
0x355: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x356: Pop(3)
0x357: Push((int) 526095)
0x358: Push((int) -1)
0x359: Push((int) 27381)
0x35a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35b: Pop(3)
0x35c: GOTO 0x35f

0x35d: Return(); Pop(0)

0x35e: GOTO 0x330

0x35f: PushEmpty(bool)
0x360: Call2 0xb72

0x361: Pop(0)
0x362: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x363: @ lshWaitForAnimEnd()
0x364: Pop(0)
0x365: Push( Stack[3 + Tasks[-1].StackPointer] )
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: GOTO 0x36d

0x368: PushEmpty(string)
0x369: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x36a: Call2 0xb0b

0x36b: Pop(1)
0x36c: GOTO 0x363

0x36d: GOTO 0x37c

0x36e: Push("all") // @poff=138
0x36f: Push("idle") // @poff=146
0x370: @ PlayAnimation(Stack[-2], Stack[-1])
0x371: Pop(2)
0x372: @ WaitForAnimEnd()
0x373: Pop(0)
0x374: Push( Stack[3 + Tasks[-1].StackPointer] )
0x375: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x376: GOTO 0x37c

0x377: Push("all") // @poff=138
0x378: Push("idle") // @poff=146
0x379: @ PlayAnimation(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: GOTO 0x372

0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(bool)
0x37f: Call2 0xb72

0x380: Pop(0)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Return(); Pop(0)

0x384: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: Return(); Pop(0)

0x387: PushEmpty(string, bool)
0x388: Stack[-3] = Stack[-2]
0x389: Push("") // @poff=102
0x38a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38c: Stack[-1] = (bool) 0
0x38d: GOTO 0x38f

0x38e: Stack[-1] = (bool) 1
0x38f: Call2 0xb12

0x390: Pop(2)
0x391: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: Push((int) 1)
0x395: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x396: PushEmpty()
0x397: Call2 0xb27

0x398: Pop(0)
0x399: Push((int) 27378)
0x39a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: PushEmpty(object, object)
0x39d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39f: Call2 0xb86

0x3a0: Pop(2)
0x3a1: Push((int) 27380)
0x3a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a4: PushEmpty(object, object)
0x3a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a7: Call2 0xb8c

0x3a8: Pop(2)
0x3a9: Push((int) 27377)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral" // @poff=89
0x3ae: Call2 0x37d

0x3af: Pop(1)
0x3b0: Push((int) 526091)
0x3b1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b2: Pop(1)
0x3b3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b4: Pop(0)
0x3b5: PushEmpty(bool)
0x3b6: Stack[-1] = (bool) 0
0x3b7: PushEmpty(bool)
0x3b8: Stack[-1] = (bool) 0
0x3b9: PushEmpty(bool, object)
0x3ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bb: Call2 0xbeb

0x3bc: Pop(1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3be: PushEmpty(bool, object)
0x3bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c0: Call2 0xbf7

0x3c1: Pop(1)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 1
0x3c4: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Call2 0xc03

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Stack[-1] = (bool) 1
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: Push((int) 526092)
0x3cd: Push((int) 27379)
0x3ce: Push((int) 27378)
0x3cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d0: Pop(3)
0x3d1: Push((int) 526095)
0x3d2: Push((int) -1)
0x3d3: Push((int) 27381)
0x3d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 27379)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Neutral" // @poff=89
0x3dc: Call2 0x37d

0x3dd: Pop(1)
0x3de: Push((int) 526093)
0x3df: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3e0: Pop(1)
0x3e1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3e2: Pop(0)
0x3e3: Push((int) 528804)
0x3e4: Push((int) 30219)
0x3e5: Push((int) 30218)
0x3e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 30219)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral" // @poff=89
0x3ee: Call2 0x37d

0x3ef: Pop(1)
0x3f0: Push((int) 528805)
0x3f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f2: Pop(1)
0x3f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f4: Pop(0)
0x3f5: Push((int) 528806)
0x3f6: Push((int) 30222)
0x3f7: Push((int) 30220)
0x3f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f9: Pop(3)
0x3fa: Push((int) 528807)
0x3fb: Push((int) -1)
0x3fc: Push((int) 30221)
0x3fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fe: Pop(3)
0x3ff: Return(); Pop(0)

0x400: Push((int) 30222)
0x401: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x403: PushEmpty(string)
0x404: Stack[-1] = "Neutral" // @poff=89
0x405: Call2 0x37d

0x406: Pop(1)
0x407: Push((int) 528808)
0x408: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x409: Pop(1)
0x40a: @@@ ClearReplies(); Obj=0 // @poff=116
0x40b: Pop(0)
0x40c: Push((int) 526094)
0x40d: Push((int) -1)
0x40e: Push((int) 27380)
0x40f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x413: PushEmpty(bool)
0x414: Call2 0xb72

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x417: @ lshStopAnimation()
0x418: Pop(0)
0x419: GOTO 0x41c

0x41a: @ StopAnimation()
0x41b: Pop(0)
0x41c: Return(); Pop(0)

0x41d: GOTO 0x394

0x41e: Return(); Pop(0)

0x41f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x420: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x421: PushEmpty(bool, object)
0x422: PushEmpty(object)
0x423: Call2 0xb2e

0x424: Stack[-1] = Stack[-2]
0x425: Pop(1)
0x426: Call2 0xa81

0x427: Pop(2)
0x428: PushEmpty(bool, object, float)
0x429: Stack[-12] = Stack[-2]
0x42a: Stack[-1] = (float) 70.0
0x42b: Call2 0xa2c

0x42c: Pop(2)
0x42d: Pop(1); Push((bool) Stack[-1] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-10] = (int) -2
0x430: Return(); Pop(8)

0x431: @ CreateDialog(Stack[-4])
0x432: Pop(0)
0x433: PushEmpty(int)
0x434: Call2 0xb6c

0x435: Pop(0)
0x436: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x437: Pop(1)
0x438: PushEmpty(int)
0x439: Call2 0xb6a

0x43a: Pop(0)
0x43b: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x43c: Pop(1)
0x43d: PushEmpty(string)
0x43e: Call2 0xb6e

0x43f: Pop(0)
0x440: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x441: Pop(1)
0x442: PushEmpty(string)
0x443: Call2 0xb70

0x444: Pop(0)
0x445: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x446: Pop(1)
0x447: PushEmpty(int)
0x448: Call2 0xcde

0x449: Pop(0)
0x44a: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x44b: Pop(1)
0x44c: Stack[-2] = (int) -1
0x44d: @ IsOverrideActive(Stack[-3])
0x44e: Pop(0)
0x44f: Push(Stack[-3])
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-10] = (int) -2
0x452: Return(); Pop(8)

0x453: @ DoDialog(Stack[-4])
0x454: Pop(0)
0x455: PushEmpty(object, object)
0x456: Stack[-11] = Stack[-2]
0x457: Stack[-6] = Stack[-1]
0x458: Push(-2, 4); TaskCall(8)
0x459: Call2 0x470

0x45a: Pop(-2, 4); TaskReturn
0x45b: Pop(2)
0x45c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x460: @ sync()
0x461: Pop(0)
0x462: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x463: Pop(0)
0x464: GOTO 0x45e

0x465: PushEmpty(object)
0x466: Stack[-10] = Stack[-1]
0x467: Call2 0xa70

0x468: Pop(1)
0x469: @ StopDialog(Stack[-4])
0x46a: Pop(0)
0x46b: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46c: Pop(0)
0x46d: Stack[-2] = Stack[-10]
0x46e: Return(); Pop(8)

0x46f: Stack[-4] = 0
0x470: PushEmpty()
0x471: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x472: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x473: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x474: Push((int) 1)
0x475: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Neutral" // @poff=89
0x478: Call2 0x4b4

0x479: Pop(1)
0x47a: Push((int) 526441)
0x47b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47c: Pop(1)
0x47d: @@@ ClearReplies(); Obj=0 // @poff=116
0x47e: Pop(0)
0x47f: PushEmpty(bool, object)
0x480: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x481: Call2 0xc0f

0x482: Pop(1)
0x483: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x484: Push((int) 526442)
0x485: Push((int) 27718)
0x486: Push((int) 27717)
0x487: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x488: Pop(3)
0x489: Push((int) 526449)
0x48a: Push((int) -1)
0x48b: Push((int) 27724)
0x48c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x48d: Pop(3)
0x48e: Push((int) 528982)
0x48f: Push((int) -1)
0x490: Push((int) 30419)
0x491: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x492: Pop(3)
0x493: GOTO 0x496

0x494: Return(); Pop(0)

0x495: GOTO 0x474

0x496: PushEmpty(bool)
0x497: Call2 0xb72

0x498: Pop(0)
0x499: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x49a: @ lshWaitForAnimEnd()
0x49b: Pop(0)
0x49c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x49d: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49e: GOTO 0x4a4

0x49f: PushEmpty(string)
0x4a0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4a1: Call2 0xb0b

0x4a2: Pop(1)
0x4a3: GOTO 0x49a

0x4a4: GOTO 0x4b3

0x4a5: Push("all") // @poff=138
0x4a6: Push("idle") // @poff=146
0x4a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a8: Pop(2)
0x4a9: @ WaitForAnimEnd()
0x4aa: Pop(0)
0x4ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: GOTO 0x4b3

0x4ae: Push("all") // @poff=138
0x4af: Push("idle") // @poff=146
0x4b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b1: Pop(2)
0x4b2: GOTO 0x4a9

0x4b3: Return(); Pop(0)

0x4b4: PushEmpty()
0x4b5: PushEmpty(bool)
0x4b6: Call2 0xb72

0x4b7: Pop(0)
0x4b8: Pop(1); Push((bool) Stack[-1] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: Return(); Pop(0)

0x4bb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: Return(); Pop(0)

0x4be: PushEmpty(string, bool)
0x4bf: Stack[-3] = Stack[-2]
0x4c0: Push("") // @poff=102
0x4c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-1] = (bool) 0
0x4c4: GOTO 0x4c6

0x4c5: Stack[-1] = (bool) 1
0x4c6: Call2 0xb12

0x4c7: Pop(2)
0x4c8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty()
0x4cb: Push((int) 1)
0x4cc: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x4cd: PushEmpty()
0x4ce: Call2 0xb27

0x4cf: Pop(0)
0x4d0: Push((int) 30428)
0x4d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d3: PushEmpty(object, object)
0x4d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d6: Call2 0xb91

0x4d7: Pop(2)
0x4d8: Push((int) 30433)
0x4d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4db: PushEmpty(object, object)
0x4dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4de: Call2 0xb91

0x4df: Pop(2)
0x4e0: Push((int) 27723)
0x4e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(object, object)
0x4e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e6: Call2 0xb91

0x4e7: Pop(2)
0x4e8: Push((int) 27716)
0x4e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4eb: PushEmpty(string)
0x4ec: Stack[-1] = "Neutral" // @poff=89
0x4ed: Call2 0x4b4

0x4ee: Pop(1)
0x4ef: Push((int) 526441)
0x4f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4f1: Pop(1)
0x4f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x4f3: Pop(0)
0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Call2 0xc0f

0x4f7: Pop(1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4f9: Push((int) 526442)
0x4fa: Push((int) 27718)
0x4fb: Push((int) 27717)
0x4fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4fd: Pop(3)
0x4fe: Push((int) 526449)
0x4ff: Push((int) -1)
0x500: Push((int) 27724)
0x501: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x502: Pop(3)
0x503: Push((int) 528982)
0x504: Push((int) -1)
0x505: Push((int) 30419)
0x506: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x507: Pop(3)
0x508: Return(); Pop(0)

0x509: Push((int) 27718)
0x50a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x50c: PushEmpty(string)
0x50d: Stack[-1] = "Neutral" // @poff=89
0x50e: Call2 0x4b4

0x50f: Pop(1)
0x510: Push((int) 526443)
0x511: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x512: Pop(1)
0x513: @@@ ClearReplies(); Obj=0 // @poff=116
0x514: Pop(0)
0x515: Push((int) 528983)
0x516: Push((int) 30421)
0x517: Push((int) 30420)
0x518: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x519: Pop(3)
0x51a: Return(); Pop(0)

0x51b: Push((int) 30421)
0x51c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x51e: PushEmpty(string)
0x51f: Stack[-1] = "Neutral" // @poff=89
0x520: Call2 0x4b4

0x521: Pop(1)
0x522: Push((int) 528984)
0x523: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x524: Pop(1)
0x525: @@@ ClearReplies(); Obj=0 // @poff=116
0x526: Pop(0)
0x527: Push((int) 528985)
0x528: Push((int) 30423)
0x529: Push((int) 30422)
0x52a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: Push((int) 30423)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral" // @poff=89
0x532: Call2 0x4b4

0x533: Pop(1)
0x534: Push((int) 528986)
0x535: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x536: Pop(1)
0x537: @@@ ClearReplies(); Obj=0 // @poff=116
0x538: Pop(0)
0x539: Push((int) 526444)
0x53a: Push((int) 27720)
0x53b: Push((int) 27719)
0x53c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53d: Pop(3)
0x53e: Return(); Pop(0)

0x53f: Push((int) 27720)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x542: PushEmpty(string)
0x543: Stack[-1] = "Neutral" // @poff=89
0x544: Call2 0x4b4

0x545: Pop(1)
0x546: Push((int) 526445)
0x547: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x548: Pop(1)
0x549: @@@ ClearReplies(); Obj=0 // @poff=116
0x54a: Pop(0)
0x54b: Push((int) 526446)
0x54c: Push((int) 27722)
0x54d: Push((int) 27721)
0x54e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54f: Pop(3)
0x550: Return(); Pop(0)

0x551: Push((int) 27722)
0x552: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x554: PushEmpty(string)
0x555: Stack[-1] = "Neutral" // @poff=89
0x556: Call2 0x4b4

0x557: Pop(1)
0x558: Push((int) 526447)
0x559: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x55a: Pop(1)
0x55b: @@@ ClearReplies(); Obj=0 // @poff=116
0x55c: Pop(0)
0x55d: Push((int) 528987)
0x55e: Push((int) 30425)
0x55f: Push((int) 30424)
0x560: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x561: Pop(3)
0x562: Push((int) 526448)
0x563: Push((int) -1)
0x564: Push((int) 27723)
0x565: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x566: Pop(3)
0x567: Return(); Pop(0)

0x568: Push((int) 30425)
0x569: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x56b: PushEmpty(string)
0x56c: Stack[-1] = "Neutral" // @poff=89
0x56d: Call2 0x4b4

0x56e: Pop(1)
0x56f: Push((int) 528988)
0x570: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x571: Pop(1)
0x572: @@@ ClearReplies(); Obj=0 // @poff=116
0x573: Pop(0)
0x574: Push((int) 528989)
0x575: Push((int) 30427)
0x576: Push((int) 30426)
0x577: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x578: Pop(3)
0x579: Return(); Pop(0)

0x57a: Push((int) 30427)
0x57b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x57d: PushEmpty(string)
0x57e: Stack[-1] = "Neutral" // @poff=89
0x57f: Call2 0x4b4

0x580: Pop(1)
0x581: Push((int) 528990)
0x582: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x583: Pop(1)
0x584: @@@ ClearReplies(); Obj=0 // @poff=116
0x585: Pop(0)
0x586: Push((int) 528991)
0x587: Push((int) -1)
0x588: Push((int) 30428)
0x589: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x58a: Pop(3)
0x58b: Push((int) 528992)
0x58c: Push((int) 30430)
0x58d: Push((int) 30429)
0x58e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x58f: Pop(3)
0x590: Return(); Pop(0)

0x591: Push((int) 30430)
0x592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x594: PushEmpty(string)
0x595: Stack[-1] = "Neutral" // @poff=89
0x596: Call2 0x4b4

0x597: Pop(1)
0x598: Push((int) 528993)
0x599: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x59a: Pop(1)
0x59b: @@@ ClearReplies(); Obj=0 // @poff=116
0x59c: Pop(0)
0x59d: Push((int) 528994)
0x59e: Push((int) 30432)
0x59f: Push((int) 30431)
0x5a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a1: Pop(3)
0x5a2: Return(); Pop(0)

0x5a3: Push((int) 30432)
0x5a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5a6: PushEmpty(string)
0x5a7: Stack[-1] = "Neutral" // @poff=89
0x5a8: Call2 0x4b4

0x5a9: Pop(1)
0x5aa: Push((int) 528995)
0x5ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ac: Pop(1)
0x5ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ae: Pop(0)
0x5af: Push((int) 528996)
0x5b0: Push((int) -1)
0x5b1: Push((int) 30433)
0x5b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b3: Pop(3)
0x5b4: Return(); Pop(0)

0x5b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5b6: PushEmpty(bool)
0x5b7: Call2 0xb72

0x5b8: Pop(0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5ba: @ lshStopAnimation()
0x5bb: Pop(0)
0x5bc: GOTO 0x5bf

0x5bd: @ StopAnimation()
0x5be: Pop(0)
0x5bf: Return(); Pop(0)

0x5c0: GOTO 0x4cb

0x5c1: Return(); Pop(0)

0x5c2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5c4: PushEmpty(bool, object)
0x5c5: PushEmpty(object)
0x5c6: Call2 0xb2e

0x5c7: Stack[-1] = Stack[-2]
0x5c8: Pop(1)
0x5c9: Call2 0xa81

0x5ca: Pop(2)
0x5cb: PushEmpty(bool, object, float)
0x5cc: Stack[-12] = Stack[-2]
0x5cd: Stack[-1] = (float) 70.0
0x5ce: Call2 0xa2c

0x5cf: Pop(2)
0x5d0: Pop(1); Push((bool) Stack[-1] == 0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d2: Stack[-10] = (int) -2
0x5d3: Return(); Pop(8)

0x5d4: @ CreateDialog(Stack[-4])
0x5d5: Pop(0)
0x5d6: PushEmpty(int)
0x5d7: Call2 0xb6c

0x5d8: Pop(0)
0x5d9: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x5da: Pop(1)
0x5db: PushEmpty(int)
0x5dc: Call2 0xb6a

0x5dd: Pop(0)
0x5de: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x5df: Pop(1)
0x5e0: PushEmpty(string)
0x5e1: Call2 0xb6e

0x5e2: Pop(0)
0x5e3: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x5e4: Pop(1)
0x5e5: PushEmpty(string)
0x5e6: Call2 0xb70

0x5e7: Pop(0)
0x5e8: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x5e9: Pop(1)
0x5ea: PushEmpty(int)
0x5eb: Call2 0xcde

0x5ec: Pop(0)
0x5ed: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5ee: Pop(1)
0x5ef: Stack[-2] = (int) -1
0x5f0: @ IsOverrideActive(Stack[-3])
0x5f1: Pop(0)
0x5f2: Push(Stack[-3])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-10] = (int) -2
0x5f5: Return(); Pop(8)

0x5f6: @ DoDialog(Stack[-4])
0x5f7: Pop(0)
0x5f8: PushEmpty(object, object)
0x5f9: Stack[-11] = Stack[-2]
0x5fa: Stack[-6] = Stack[-1]
0x5fb: Push(-2, 4); TaskCall(10)
0x5fc: Call2 0x613

0x5fd: Pop(-2, 4); TaskReturn
0x5fe: Pop(2)
0x5ff: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x600: Pop(0)
0x601: Pop(0); Push((bool) Stack[-1] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x603: @ sync()
0x604: Pop(0)
0x605: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x606: Pop(0)
0x607: GOTO 0x601

0x608: PushEmpty(object)
0x609: Stack[-10] = Stack[-1]
0x60a: Call2 0xa70

0x60b: Pop(1)
0x60c: @ StopDialog(Stack[-4])
0x60d: Pop(0)
0x60e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x60f: Pop(0)
0x610: Stack[-2] = Stack[-10]
0x611: Return(); Pop(8)

0x612: Stack[-4] = 0
0x613: PushEmpty()
0x614: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x615: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x616: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x617: Push((int) 1)
0x618: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Neutral" // @poff=89
0x61b: Call2 0x65b

0x61c: Pop(1)
0x61d: Push((int) 527613)
0x61e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x61f: Pop(1)
0x620: @@@ ClearReplies(); Obj=0 // @poff=116
0x621: Pop(0)
0x622: PushEmpty(bool)
0x623: Stack[-1] = (bool) 0
0x624: PushEmpty(bool, object)
0x625: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x626: Call2 0xc27

0x627: Pop(1)
0x628: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x629: PushEmpty(bool, object)
0x62a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62b: Call2 0xc1b

0x62c: Pop(1)
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: Stack[-1] = (bool) 1
0x62f: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x630: Push((int) 527615)
0x631: Push((int) 28961)
0x632: Push((int) 28960)
0x633: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x634: Pop(3)
0x635: Push((int) 527614)
0x636: Push((int) -1)
0x637: Push((int) 28959)
0x638: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x639: Pop(3)
0x63a: GOTO 0x63d

0x63b: Return(); Pop(0)

0x63c: GOTO 0x617

0x63d: PushEmpty(bool)
0x63e: Call2 0xb72

0x63f: Pop(0)
0x640: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x641: @ lshWaitForAnimEnd()
0x642: Pop(0)
0x643: Push( Stack[3 + Tasks[-1].StackPointer] )
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: GOTO 0x64b

0x646: PushEmpty(string)
0x647: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x648: Call2 0xb0b

0x649: Pop(1)
0x64a: GOTO 0x641

0x64b: GOTO 0x65a

0x64c: Push("all") // @poff=138
0x64d: Push("idle") // @poff=146
0x64e: @ PlayAnimation(Stack[-2], Stack[-1])
0x64f: Pop(2)
0x650: @ WaitForAnimEnd()
0x651: Pop(0)
0x652: Push( Stack[3 + Tasks[-1].StackPointer] )
0x653: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x654: GOTO 0x65a

0x655: Push("all") // @poff=138
0x656: Push("idle") // @poff=146
0x657: @ PlayAnimation(Stack[-2], Stack[-1])
0x658: Pop(2)
0x659: GOTO 0x650

0x65a: Return(); Pop(0)

0x65b: PushEmpty()
0x65c: PushEmpty(bool)
0x65d: Call2 0xb72

0x65e: Pop(0)
0x65f: Pop(1); Push((bool) Stack[-1] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x661: Return(); Pop(0)

0x662: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: Return(); Pop(0)

0x665: PushEmpty(string, bool)
0x666: Stack[-3] = Stack[-2]
0x667: Push("") // @poff=102
0x668: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-1] = (bool) 0
0x66b: GOTO 0x66d

0x66c: Stack[-1] = (bool) 1
0x66d: Call2 0xb12

0x66e: Pop(2)
0x66f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: Push((int) 1)
0x673: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x674: PushEmpty()
0x675: Call2 0xb27

0x676: Pop(0)
0x677: Push((int) 28960)
0x678: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67a: PushEmpty(object, object)
0x67b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67d: Call2 0xbcd

0x67e: Pop(2)
0x67f: Push((int) 28972)
0x680: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x682: PushEmpty(object, object)
0x683: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x684: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x685: Call2 0xb9a

0x686: Pop(2)
0x687: Push((int) 28958)
0x688: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x68a: PushEmpty(string)
0x68b: Stack[-1] = "Neutral" // @poff=89
0x68c: Call2 0x65b

0x68d: Pop(1)
0x68e: Push((int) 527613)
0x68f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x690: Pop(1)
0x691: @@@ ClearReplies(); Obj=0 // @poff=116
0x692: Pop(0)
0x693: PushEmpty(bool)
0x694: Stack[-1] = (bool) 0
0x695: PushEmpty(bool, object)
0x696: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x697: Call2 0xc27

0x698: Pop(1)
0x699: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69a: PushEmpty(bool, object)
0x69b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69c: Call2 0xc1b

0x69d: Pop(1)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69f: Stack[-1] = (bool) 1
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a1: Push((int) 527615)
0x6a2: Push((int) 28961)
0x6a3: Push((int) 28960)
0x6a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a5: Pop(3)
0x6a6: Push((int) 527614)
0x6a7: Push((int) -1)
0x6a8: Push((int) 28959)
0x6a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6aa: Pop(3)
0x6ab: Return(); Pop(0)

0x6ac: Push((int) 28961)
0x6ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = "Neutral" // @poff=89
0x6b1: Call2 0x65b

0x6b2: Pop(1)
0x6b3: Push((int) 527616)
0x6b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6b5: Pop(1)
0x6b6: @@@ ClearReplies(); Obj=0 // @poff=116
0x6b7: Pop(0)
0x6b8: Push((int) 527631)
0x6b9: Push((int) 28978)
0x6ba: Push((int) 28977)
0x6bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6bc: Pop(3)
0x6bd: Return(); Pop(0)

0x6be: Push((int) 28978)
0x6bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6c1: PushEmpty(string)
0x6c2: Stack[-1] = "Neutral" // @poff=89
0x6c3: Call2 0x65b

0x6c4: Pop(1)
0x6c5: Push((int) 527632)
0x6c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6c7: Pop(1)
0x6c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c9: Pop(0)
0x6ca: Push((int) 527617)
0x6cb: Push((int) 28963)
0x6cc: Push((int) 28962)
0x6cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ce: Pop(3)
0x6cf: Push((int) 527628)
0x6d0: Push((int) 28974)
0x6d1: Push((int) 28973)
0x6d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6d3: Pop(3)
0x6d4: Return(); Pop(0)

0x6d5: Push((int) 28974)
0x6d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6d8: PushEmpty(string)
0x6d9: Stack[-1] = "Neutral" // @poff=89
0x6da: Call2 0x65b

0x6db: Pop(1)
0x6dc: Push((int) 527629)
0x6dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6de: Pop(1)
0x6df: @@@ ClearReplies(); Obj=0 // @poff=116
0x6e0: Pop(0)
0x6e1: Push((int) 527633)
0x6e2: Push((int) 28980)
0x6e3: Push((int) 28979)
0x6e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e5: Pop(3)
0x6e6: Return(); Pop(0)

0x6e7: Push((int) 28980)
0x6e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6ea: PushEmpty(string)
0x6eb: Stack[-1] = "Neutral" // @poff=89
0x6ec: Call2 0x65b

0x6ed: Pop(1)
0x6ee: Push((int) 527634)
0x6ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f0: Pop(1)
0x6f1: @@@ ClearReplies(); Obj=0 // @poff=116
0x6f2: Pop(0)
0x6f3: Push((int) 527630)
0x6f4: Push((int) 28965)
0x6f5: Push((int) 28975)
0x6f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f7: Pop(3)
0x6f8: Return(); Pop(0)

0x6f9: Push((int) 28963)
0x6fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fb: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x6fc: PushEmpty(string)
0x6fd: Stack[-1] = "Neutral" // @poff=89
0x6fe: Call2 0x65b

0x6ff: Pop(1)
0x700: Push((int) 527618)
0x701: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x702: Pop(1)
0x703: @@@ ClearReplies(); Obj=0 // @poff=116
0x704: Pop(0)
0x705: Push((int) 527619)
0x706: Push((int) 28965)
0x707: Push((int) 28964)
0x708: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x709: Pop(3)
0x70a: Return(); Pop(0)

0x70b: Push((int) 28965)
0x70c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x70e: PushEmpty(string)
0x70f: Stack[-1] = "Neutral" // @poff=89
0x710: Call2 0x65b

0x711: Pop(1)
0x712: Push((int) 527620)
0x713: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x714: Pop(1)
0x715: @@@ ClearReplies(); Obj=0 // @poff=116
0x716: Pop(0)
0x717: Push((int) 527621)
0x718: Push((int) 28967)
0x719: Push((int) 28966)
0x71a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71b: Pop(3)
0x71c: Return(); Pop(0)

0x71d: Push((int) 28967)
0x71e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x720: PushEmpty(string)
0x721: Stack[-1] = "Neutral" // @poff=89
0x722: Call2 0x65b

0x723: Pop(1)
0x724: Push((int) 527622)
0x725: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x726: Pop(1)
0x727: @@@ ClearReplies(); Obj=0 // @poff=116
0x728: Pop(0)
0x729: Push((int) 527623)
0x72a: Push((int) 28969)
0x72b: Push((int) 28968)
0x72c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72d: Pop(3)
0x72e: Return(); Pop(0)

0x72f: Push((int) 28969)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x732: PushEmpty(string)
0x733: Stack[-1] = "Neutral" // @poff=89
0x734: Call2 0x65b

0x735: Pop(1)
0x736: Push((int) 527624)
0x737: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x738: Pop(1)
0x739: @@@ ClearReplies(); Obj=0 // @poff=116
0x73a: Pop(0)
0x73b: Push((int) 527625)
0x73c: Push((int) 28971)
0x73d: Push((int) 28970)
0x73e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73f: Pop(3)
0x740: Push((int) 527635)
0x741: Push((int) 28982)
0x742: Push((int) 28981)
0x743: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x744: Pop(3)
0x745: Return(); Pop(0)

0x746: Push((int) 28982)
0x747: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x749: PushEmpty(string)
0x74a: Stack[-1] = "Neutral" // @poff=89
0x74b: Call2 0x65b

0x74c: Pop(1)
0x74d: Push((int) 527636)
0x74e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74f: Pop(1)
0x750: @@@ ClearReplies(); Obj=0 // @poff=116
0x751: Pop(0)
0x752: Push((int) 527637)
0x753: Push((int) 28971)
0x754: Push((int) 28983)
0x755: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x756: Pop(3)
0x757: Return(); Pop(0)

0x758: Push((int) 28971)
0x759: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x75b: PushEmpty(string)
0x75c: Stack[-1] = "Neutral" // @poff=89
0x75d: Call2 0x65b

0x75e: Pop(1)
0x75f: Push((int) 527626)
0x760: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x761: Pop(1)
0x762: @@@ ClearReplies(); Obj=0 // @poff=116
0x763: Pop(0)
0x764: Push((int) 527627)
0x765: Push((int) -1)
0x766: Push((int) 28972)
0x767: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x768: Pop(3)
0x769: Return(); Pop(0)

0x76a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x76b: PushEmpty(bool)
0x76c: Call2 0xb72

0x76d: Pop(0)
0x76e: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x76f: @ lshStopAnimation()
0x770: Pop(0)
0x771: GOTO 0x774

0x772: @ StopAnimation()
0x773: Pop(0)
0x774: Return(); Pop(0)

0x775: GOTO 0x672

0x776: Return(); Pop(0)

0x777: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x778: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x779: PushEmpty(bool, object)
0x77a: PushEmpty(object)
0x77b: Call2 0xb2e

0x77c: Stack[-1] = Stack[-2]
0x77d: Pop(1)
0x77e: Call2 0xa81

0x77f: Pop(2)
0x780: PushEmpty(bool, object, float)
0x781: Stack[-12] = Stack[-2]
0x782: Stack[-1] = (float) 70.0
0x783: Call2 0xa2c

0x784: Pop(2)
0x785: Pop(1); Push((bool) Stack[-1] == 0)
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-10] = (int) -2
0x788: Return(); Pop(8)

0x789: @ CreateDialog(Stack[-4])
0x78a: Pop(0)
0x78b: PushEmpty(int)
0x78c: Call2 0xb6c

0x78d: Pop(0)
0x78e: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x78f: Pop(1)
0x790: PushEmpty(int)
0x791: Call2 0xb6a

0x792: Pop(0)
0x793: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x794: Pop(1)
0x795: PushEmpty(string)
0x796: Call2 0xb6e

0x797: Pop(0)
0x798: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x799: Pop(1)
0x79a: PushEmpty(string)
0x79b: Call2 0xb70

0x79c: Pop(0)
0x79d: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x79e: Pop(1)
0x79f: PushEmpty(int)
0x7a0: Call2 0xcde

0x7a1: Pop(0)
0x7a2: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x7a3: Pop(1)
0x7a4: Stack[-2] = (int) -1
0x7a5: @ IsOverrideActive(Stack[-3])
0x7a6: Pop(0)
0x7a7: Push(Stack[-3])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-10] = (int) -2
0x7aa: Return(); Pop(8)

0x7ab: @ DoDialog(Stack[-4])
0x7ac: Pop(0)
0x7ad: PushEmpty(object, object)
0x7ae: Stack[-11] = Stack[-2]
0x7af: Stack[-6] = Stack[-1]
0x7b0: Push(-2, 4); TaskCall(12)
0x7b1: Call2 0x7c8

0x7b2: Pop(-2, 4); TaskReturn
0x7b3: Pop(2)
0x7b4: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x7b5: Pop(0)
0x7b6: Pop(0); Push((bool) Stack[-1] == 0)
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b8: @ sync()
0x7b9: Pop(0)
0x7ba: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x7bb: Pop(0)
0x7bc: GOTO 0x7b6

0x7bd: PushEmpty(object)
0x7be: Stack[-10] = Stack[-1]
0x7bf: Call2 0xa70

0x7c0: Pop(1)
0x7c1: @ StopDialog(Stack[-4])
0x7c2: Pop(0)
0x7c3: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x7c4: Pop(0)
0x7c5: Stack[-2] = Stack[-10]
0x7c6: Return(); Pop(8)

0x7c7: Stack[-4] = 0
0x7c8: PushEmpty()
0x7c9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7ca: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7cb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7cc: Push((int) 1)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7ce: PushEmpty(string)
0x7cf: Stack[-1] = "Neutral" // @poff=89
0x7d0: Call2 0x7fd

0x7d1: Pop(1)
0x7d2: Push((int) 539297)
0x7d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7d4: Pop(1)
0x7d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x7d6: Pop(0)
0x7d7: Push((int) 539298)
0x7d8: Push((int) -1)
0x7d9: Push((int) 41241)
0x7da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7db: Pop(3)
0x7dc: GOTO 0x7df

0x7dd: Return(); Pop(0)

0x7de: GOTO 0x7cc

0x7df: PushEmpty(bool)
0x7e0: Call2 0xb72

0x7e1: Pop(0)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7e3: @ lshWaitForAnimEnd()
0x7e4: Pop(0)
0x7e5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e7: GOTO 0x7ed

0x7e8: PushEmpty(string)
0x7e9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7ea: Call2 0xb0b

0x7eb: Pop(1)
0x7ec: GOTO 0x7e3

0x7ed: GOTO 0x7fc

0x7ee: Push("all") // @poff=138
0x7ef: Push("idle") // @poff=146
0x7f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f1: Pop(2)
0x7f2: @ WaitForAnimEnd()
0x7f3: Pop(0)
0x7f4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f6: GOTO 0x7fc

0x7f7: Push("all") // @poff=138
0x7f8: Push("idle") // @poff=146
0x7f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x7fa: Pop(2)
0x7fb: GOTO 0x7f2

0x7fc: Return(); Pop(0)

0x7fd: PushEmpty()
0x7fe: PushEmpty(bool)
0x7ff: Call2 0xb72

0x800: Pop(0)
0x801: Pop(1); Push((bool) Stack[-1] == 0)
0x802: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x803: Return(); Pop(0)

0x804: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x805: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x806: Return(); Pop(0)

0x807: PushEmpty(string, bool)
0x808: Stack[-3] = Stack[-2]
0x809: Push("") // @poff=102
0x80a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80c: Stack[-1] = (bool) 0
0x80d: GOTO 0x80f

0x80e: Stack[-1] = (bool) 1
0x80f: Call2 0xb12

0x810: Pop(2)
0x811: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x812: Return(); Pop(0)

0x813: PushEmpty()
0x814: Push((int) 1)
0x815: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x816: PushEmpty()
0x817: Call2 0xb27

0x818: Pop(0)
0x819: Push((int) 41240)
0x81a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x81c: PushEmpty(string)
0x81d: Stack[-1] = "Neutral" // @poff=89
0x81e: Call2 0x7fd

0x81f: Pop(1)
0x820: Push((int) 539297)
0x821: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x822: Pop(1)
0x823: @@@ ClearReplies(); Obj=0 // @poff=116
0x824: Pop(0)
0x825: Push((int) 539298)
0x826: Push((int) -1)
0x827: Push((int) 41241)
0x828: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x829: Pop(3)
0x82a: Return(); Pop(0)

0x82b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x82c: PushEmpty(bool)
0x82d: Call2 0xb72

0x82e: Pop(0)
0x82f: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x830: @ lshStopAnimation()
0x831: Pop(0)
0x832: GOTO 0x835

0x833: @ StopAnimation()
0x834: Pop(0)
0x835: Return(); Pop(0)

0x836: GOTO 0x814

0x837: Return(); Pop(0)

0x838: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x839: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x83a: PushEmpty(bool, object)
0x83b: PushEmpty(object)
0x83c: Call2 0xb2e

0x83d: Stack[-1] = Stack[-2]
0x83e: Pop(1)
0x83f: Call2 0xa81

0x840: Pop(2)
0x841: PushEmpty(bool, object, float)
0x842: Stack[-12] = Stack[-2]
0x843: Stack[-1] = (float) 70.0
0x844: Call2 0xa2c

0x845: Pop(2)
0x846: Pop(1); Push((bool) Stack[-1] == 0)
0x847: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x848: Stack[-10] = (int) -2
0x849: Return(); Pop(8)

0x84a: @ CreateDialog(Stack[-4])
0x84b: Pop(0)
0x84c: PushEmpty(int)
0x84d: Call2 0xb6c

0x84e: Pop(0)
0x84f: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x850: Pop(1)
0x851: PushEmpty(int)
0x852: Call2 0xb6a

0x853: Pop(0)
0x854: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x855: Pop(1)
0x856: PushEmpty(string)
0x857: Call2 0xb6e

0x858: Pop(0)
0x859: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x85a: Pop(1)
0x85b: PushEmpty(string)
0x85c: Call2 0xb70

0x85d: Pop(0)
0x85e: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x85f: Pop(1)
0x860: PushEmpty(int)
0x861: Call2 0xcde

0x862: Pop(0)
0x863: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x864: Pop(1)
0x865: Stack[-2] = (int) -1
0x866: @ IsOverrideActive(Stack[-3])
0x867: Pop(0)
0x868: Push(Stack[-3])
0x869: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86a: Stack[-10] = (int) -2
0x86b: Return(); Pop(8)

0x86c: @ DoDialog(Stack[-4])
0x86d: Pop(0)
0x86e: PushEmpty(object, object)
0x86f: Stack[-11] = Stack[-2]
0x870: Stack[-6] = Stack[-1]
0x871: Push(-2, 4); TaskCall(14)
0x872: Call2 0x889

0x873: Pop(-2, 4); TaskReturn
0x874: Pop(2)
0x875: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x876: Pop(0)
0x877: Pop(0); Push((bool) Stack[-1] == 0)
0x878: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x879: @ sync()
0x87a: Pop(0)
0x87b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x87c: Pop(0)
0x87d: GOTO 0x877

0x87e: PushEmpty(object)
0x87f: Stack[-10] = Stack[-1]
0x880: Call2 0xa70

0x881: Pop(1)
0x882: @ StopDialog(Stack[-4])
0x883: Pop(0)
0x884: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x885: Pop(0)
0x886: Stack[-2] = Stack[-10]
0x887: Return(); Pop(8)

0x888: Stack[-4] = 0
0x889: PushEmpty()
0x88a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x88b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x88c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x88d: Push((int) 1)
0x88e: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x88f: PushEmpty(string)
0x890: Stack[-1] = "Neutral" // @poff=89
0x891: Call2 0x8c3

0x892: Pop(1)
0x893: Push((int) 540539)
0x894: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x895: Pop(1)
0x896: @@@ ClearReplies(); Obj=0 // @poff=116
0x897: Pop(0)
0x898: Push((int) 540540)
0x899: Push((int) -1)
0x89a: Push((int) 42549)
0x89b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89c: Pop(3)
0x89d: Push((int) 540799)
0x89e: Push((int) -1)
0x89f: Push((int) 42848)
0x8a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a1: Pop(3)
0x8a2: GOTO 0x8a5

0x8a3: Return(); Pop(0)

0x8a4: GOTO 0x88d

0x8a5: PushEmpty(bool)
0x8a6: Call2 0xb72

0x8a7: Pop(0)
0x8a8: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8a9: @ lshWaitForAnimEnd()
0x8aa: Pop(0)
0x8ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: GOTO 0x8b3

0x8ae: PushEmpty(string)
0x8af: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b0: Call2 0xb0b

0x8b1: Pop(1)
0x8b2: GOTO 0x8a9

0x8b3: GOTO 0x8c2

0x8b4: Push("all") // @poff=138
0x8b5: Push("idle") // @poff=146
0x8b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b7: Pop(2)
0x8b8: @ WaitForAnimEnd()
0x8b9: Pop(0)
0x8ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8bb: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8bc: GOTO 0x8c2

0x8bd: Push("all") // @poff=138
0x8be: Push("idle") // @poff=146
0x8bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c0: Pop(2)
0x8c1: GOTO 0x8b8

0x8c2: Return(); Pop(0)

0x8c3: PushEmpty()
0x8c4: PushEmpty(bool)
0x8c5: Call2 0xb72

0x8c6: Pop(0)
0x8c7: Pop(1); Push((bool) Stack[-1] == 0)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c9: Return(); Pop(0)

0x8ca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cc: Return(); Pop(0)

0x8cd: PushEmpty(string, bool)
0x8ce: Stack[-3] = Stack[-2]
0x8cf: Push("") // @poff=102
0x8d0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d2: Stack[-1] = (bool) 0
0x8d3: GOTO 0x8d5

0x8d4: Stack[-1] = (bool) 1
0x8d5: Call2 0xb12

0x8d6: Pop(2)
0x8d7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: Push((int) 1)
0x8db: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8dc: PushEmpty()
0x8dd: Call2 0xb27

0x8de: Pop(0)
0x8df: Push((int) 42548)
0x8e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "Neutral" // @poff=89
0x8e4: Call2 0x8c3

0x8e5: Pop(1)
0x8e6: Push((int) 540539)
0x8e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8e8: Pop(1)
0x8e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x8ea: Pop(0)
0x8eb: Push((int) 540540)
0x8ec: Push((int) -1)
0x8ed: Push((int) 42549)
0x8ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8ef: Pop(3)
0x8f0: Push((int) 540799)
0x8f1: Push((int) -1)
0x8f2: Push((int) 42848)
0x8f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f4: Pop(3)
0x8f5: Return(); Pop(0)

0x8f6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8f7: PushEmpty(bool)
0x8f8: Call2 0xb72

0x8f9: Pop(0)
0x8fa: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fb: @ lshStopAnimation()
0x8fc: Pop(0)
0x8fd: GOTO 0x900

0x8fe: @ StopAnimation()
0x8ff: Pop(0)
0x900: Return(); Pop(0)

0x901: GOTO 0x8da

0x902: Return(); Pop(0)

0x903: Push(GlobalVars[1])
0x904: Stack[-1] = (bool) 0
0x905: GlobalVars[1] = Stack[-1]; Pop(1)
0x906: PushEmpty()
0x907: Call2 0x90a

0x908: Pop(0)
0x909: Return(); Pop(0)

0x90a: PushEmpty(bool)
0x90b: Call2 0xa27

0x90c: Pop(0)
0x90d: Pop(1); Push((bool) Stack[-1] == 0)
0x90e: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90f: PushEmpty()
0x910: Push(-0, 0); TaskCall(0)
0x911: Call2 0x0

0x912: Pop(-0, 0); TaskReturn
0x913: Pop(0)
0x914: PushEmpty()
0x915: Call2 0x98a

0x916: Pop(0)
0x917: @ GetDirection(Stack[-0]T)
0x918: Pop(0)
0x919: PushEmpty()
0x91a: Call2 0x9c0

0x91b: Pop(0)
0x91c: GOTO 0x919

0x91d: Return(); Pop(0)

0x91e: PushEmpty(object, object)
0x91f: Push("player") // @poff=156
0x920: @ FindActor(Stack[-2], Stack[-1])
0x921: Pop(1)
0x922: Pop(0); Push((bool) Stack[-1] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x924: Stack[-3] = (bool) 0
0x925: Return(); Pop(2)

0x926: PushEmpty(bool, object)
0x927: Stack[-3] = Stack[-1]
0x928: Call2 0xa1e

0x929: Stack[-2] = Stack[-5]
0x92a: Pop(2)
0x92b: Return(); Pop(2)

0x92c: Stack[-1] = 0
0x92d: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x92e: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x92f: @ RotateAsync(Stack[-2], Stack[-1])
0x930: Pop(2)
0x931: Return(); Pop(0)

0x932: PushEmpty(object, bool, object, bool)
0x933: Push("player") // @poff=156
0x934: @ FindActor(Stack[-3], Stack[-1])
0x935: Pop(1)
0x936: Pop(0); Push((bool) Stack[-2] == 0)
0x937: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x938: Stack[-5] = (bool) 0
0x939: Return(); Pop(4)

0x93a: PushEmpty(float, object)
0x93b: Stack[-4] = Stack[-1]
0x93c: Call2 0xa0c

0x93d: Pop(1)
0x93e: Push((float)90000.0)
0x93f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x941: Stack[-5] = (bool) 0
0x942: Return(); Pop(4)

0x943: @ CanSee(Stack[-1], Stack[-2])
0x944: Pop(0)
0x945: Stack[-1] = Stack[-5]
0x946: Return(); Pop(4)

0x947: Stack[-2] = 0
0x948: PushEmpty(float, float)
0x949: Push((int) 8)
0x94a: Push((int) 16)
0x94b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x94c: Pop(2)
0x94d: Push((int) 10)
0x94e: @ SetTimer(Stack[-1], Stack[-2])
0x94f: Pop(1)
0x950: Return(); Pop(2)

0x951: Push((int) 10)
0x952: @ KillTimer(Stack[-1])
0x953: Pop(1)
0x954: Return(); Pop(0)

0x955: PushEmpty()
0x956: Push((int) 10)
0x957: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x959: PushEmpty()
0x95a: Call2 0x951

0x95b: Pop(0)
0x95c: PushEmpty(bool)
0x95d: Stack[-1] = (bool) 0
0x95e: PushEmpty(bool)
0x95f: Call2 0xa27

0x960: Pop(0)
0x961: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x962: PushEmpty(bool)
0x963: Call2 0x932

0x964: Pop(0)
0x965: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x966: Stack[-1] = (bool) 1
0x967: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x968: PushEmpty(bool)
0x969: Call2 0x91e

0x96a: Pop(0)
0x96b: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x96c: PushEmpty(bool, object)
0x96d: PushEmpty(object)
0x96e: Call2 0xb2e

0x96f: Stack[-1] = Stack[-2]
0x970: Pop(1)
0x971: Call2 0xabb

0x972: Pop(2)
0x973: GOTO 0x97a

0x974: PushEmpty()
0x975: Call2 0x92d

0x976: Pop(0)
0x977: PushEmpty()
0x978: Call2 0x948

0x979: Pop(0)
0x97a: Return(); Pop(0)

0x97b: PushEmpty()
0x97c: Call2 0xa07

0x97d: Pop(0)
0x97e: PushEmpty()
0x97f: Call2 0x951

0x980: Pop(0)
0x981: @ lshStopSpeech()
0x982: Pop(0)
0x983: @ lshStopAnimation()
0x984: Pop(0)
0x985: @ StopAsync()
0x986: Pop(0)
0x987: @ Hold()
0x988: Pop(0)
0x989: Return(); Pop(0)

0x98a: @ StopGroup0()
0x98b: Pop(0)
0x98c: PushEmpty()
0x98d: Call2 0x951

0x98e: Pop(0)
0x98f: PushEmpty(string)
0x990: Stack[-1] = "Neutral" // @poff=89
0x991: Call2 0xb0b

0x992: Pop(1)
0x993: PushEmpty()
0x994: Call2 0x948

0x995: Pop(0)
0x996: Return(); Pop(0)

0x997: PushEmpty()
0x998: Push(Stack[-1])
0x999: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99a: PushEmpty()
0x99b: Call2 0x948

0x99c: Pop(0)
0x99d: GOTO 0x9a2

0x99e: PushEmpty(string)
0x99f: Stack[-1] = "Neutral" // @poff=89
0x9a0: Call2 0xb0b

0x9a1: Pop(1)
0x9a2: Return(); Pop(0)

0x9a3: PushEmpty(bool, bool)
0x9a4: @ IsOverrideActive(Stack[-1])
0x9a5: Pop(0)
0x9a6: Pop(0); Push((bool) Stack[-1] == 0)
0x9a7: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9a8: EventDisable(0)
0x9a9: PushEmpty()
0x9aa: Call2 0xa07

0x9ab: Pop(0)
0x9ac: PushEmpty(bool, object)
0x9ad: Stack[-5] = Stack[-1]
0x9ae: Call2 0xa1e

0x9af: Pop(2)
0x9b0: EventEnable(0)
0x9b1: PushEmpty(object)
0x9b2: Stack[-4] = Stack[-1]
0x9b3: Call2 0xcef

0x9b4: Pop(1)
0x9b5: PushEmpty(string)
0x9b6: Stack[-1] = "Neutral" // @poff=89
0x9b7: Call2 0xb0b

0x9b8: Pop(1)
0x9b9: PushEmpty()
0x9ba: Call2 0x951

0x9bb: Pop(0)
0x9bc: PushEmpty()
0x9bd: Call2 0x948

0x9be: Pop(0)
0x9bf: Return(); Pop(2)

0x9c0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x9c1: @ WaitForAnimEnd()
0x9c2: Pop(0)
0x9c3: PushEmpty(bool)
0x9c4: Call2 0xa27

0x9c5: Pop(0)
0x9c6: Pop(1); Push((bool) Stack[-1] == 0)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c8: Return(); Pop(12)

0x9c9: PushEmpty(int)
0x9ca: Call2 0xb59

0x9cb: Stack[-1] = Stack[-7]
0x9cc: Pop(1)
0x9cd: Stack[-5] = (int) 0
0x9ce: PushEmpty(bool)
0x9cf: Stack[-1] = (bool) 0
0x9d0: Push((int) 5)
0x9d1: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d3: PushEmpty(bool)
0x9d4: Call2 0xa27

0x9d5: Pop(0)
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d7: Stack[-1] = (bool) 1
0x9d8: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0x9d9: Pop(0); Push((bool) Stack[-6] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9db: Push((int) 3)
0x9dc: @ Sleep(Stack[-1], Stack[-5])
0x9dd: Pop(1)
0x9de: Pop(0); Push((bool) Stack[-4] == 0)
0x9df: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9e0: GOTO 0xa02

0x9e1: GOTO 0x9f7

0x9e2: @ irand(Stack[-3], Stack[-6])
0x9e3: Pop(0)
0x9e4: Push((int) 5)
0x9e5: @ irand(Stack[-3], Stack[-1])
0x9e6: Pop(1)
0x9e7: Push((int) 0)
0x9e8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9e9: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9ea: Stack[-3] = (int) 0
0x9eb: Push("all") // @poff=138
0x9ec: PushEmpty(string, int)
0x9ed: Stack[-6] = Stack[-1]
0x9ee: Call2 0xb52

0x9ef: Pop(1)
0x9f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f1: Pop(2)
0x9f2: @ WaitForAnimEnd(Stack[-1])
0x9f3: Pop(0)
0x9f4: Pop(0); Push((bool) Stack[-1] == 0)
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f6: GOTO 0xa02

0x9f7: PushEmpty(bool)
0x9f8: Call2 0xa05

0x9f9: Pop(0)
0x9fa: Pop(1); Push((bool) Stack[-1] == 0)
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fc: GOTO 0xa02

0x9fd: @ ResetAAS()
0x9fe: Pop(0)
0x9ff: Push((int) 1)
0xa00: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa01: GOTO 0x9ce

0xa02: @ ResetAAS()
0xa03: Pop(0)
0xa04: Return(); Pop(12)

0xa05: Stack[-1] = (bool) 1
0xa06: Return(); Pop(0)

0xa07: @ StopAnimation()
0xa08: Pop(0)
0xa09: @ StopGroup0()
0xa0a: Pop(0)
0xa0b: Return(); Pop(0)

0xa0c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa0d: @ GetPosition(Stack[-3])
0xa0e: Pop(0)
0xa0f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0xa10: Pop(0)
0xa11: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa12: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa13: Return(); Pop(6)

0xa14: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa15: @ GetPosition(Stack[-3])
0xa16: Pop(0)
0xa17: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xa18: Push(CvectorIndex(Stack[-2], 0))
0xa19: Push(CvectorIndex(Stack[-3], 2))
0xa1a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xa1b: Pop(2)
0xa1c: Stack[-1] = Stack[-8]
0xa1d: Return(); Pop(6)

0xa1e: PushEmpty(cvector, cvector)
0xa1f: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0xa20: Pop(0)
0xa21: PushEmpty(bool, cvector)
0xa22: Stack[-3] = Stack[-1]
0xa23: Call2 0xa14

0xa24: Stack[-2] = Stack[-6]
0xa25: Pop(2)
0xa26: Return(); Pop(2)

0xa27: PushEmpty(bool, bool)
0xa28: @ IsLoaded(Stack[-1])
0xa29: Pop(0)
0xa2a: Stack[-1] = Stack[-3]
0xa2b: Return(); Pop(2)

0xa2c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa2d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0xa2e: Pop(0)
0xa2f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0xa30: Pop(0)
0xa31: Push(CvectorIndex(Stack[-8], 1))
0xa32: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa33: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa34: @ GetPosition(Stack[-7])
0xa35: Pop(0)
0xa36: @ GetEyesHeight(Stack[-9])
0xa37: Pop(0)
0xa38: Push(CvectorIndex(Stack[-7], 1))
0xa39: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa3a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa3b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa3c: Push(CvectorIndex(Stack[-6], 1))
0xa3d: Stack[-1] = (int) 0
0xa3e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa3f: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa40: Pop(1); Push(Sqrt(Stack[-1]))
0xa41: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa42: Stack[-5] = -Stack[-6]; Pop(0);
0xa43: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa44: PushEmpty(cvector, cvector)
0xa45: Push([0.0, 1.0, 0.0])
0xa46: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa47: Call2 0xb34

0xa48: Pop(1)
0xa49: Push((int) 25)
0xa4a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa4b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa4c: Push([0.0, 10.0, 0.0])
0xa4d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa4e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa4f: @ IsOverrideActive(Stack[-2])
0xa50: Pop(0)
0xa51: Push(Stack[-2])
0xa52: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa53: Stack[-21] = (bool) 0
0xa54: Return(); Pop(18)

0xa55: @ StopWorld()
0xa56: Pop(0)
0xa57: @ CameraTransit(Stack[-3], Stack[-5])
0xa58: Pop(0)
0xa59: Push(CvectorIndex(Stack[-4], 0))
0xa5a: Push(CvectorIndex(Stack[-5], 2))
0xa5b: @ Rotate(Stack[-2], Stack[-1])
0xa5c: Pop(2)
0xa5d: PushEmpty(bool)
0xa5e: Call2 0xb72

0xa5f: Pop(0)
0xa60: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa61: GOTO 0xa6a

0xa62: Push("head") // @poff=196
0xa63: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa64: Pop(1)
0xa65: Push(Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa67: Push("head") // @poff=196
0xa68: @ LookAsyncCamera(Stack[-1])
0xa69: Pop(1)
0xa6a: @ CameraWaitForPlayFinish()
0xa6b: Pop(0)
0xa6c: @ ResumeWorld()
0xa6d: Pop(0)
0xa6e: Stack[-21] = (bool) 1
0xa6f: Return(); Pop(18)

0xa70: PushEmpty(bool, bool)
0xa71: @ CameraSwitchToNormal()
0xa72: Pop(0)
0xa73: PushEmpty(bool)
0xa74: Call2 0xb72

0xa75: Pop(0)
0xa76: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa77: GOTO 0xa80

0xa78: Push("head") // @poff=196
0xa79: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa7a: Pop(1)
0xa7b: Push(Stack[-1])
0xa7c: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7d: Push("head") // @poff=196
0xa7e: @ UnlookAsync(Stack[-1])
0xa7f: Pop(1)
0xa80: Return(); Pop(2)

0xa81: PushEmpty(int, int, int, int)
0xa82: Push("voice_common") // @poff=206
0xa83: @ GetVariable(Stack[-1], Stack[-3])
0xa84: Pop(1)
0xa85: Push(Stack[-2])
0xa86: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xa87: PushEmpty(bool, object)
0xa88: Stack[-7] = Stack[-1]
0xa89: Call2 0xabb

0xa8a: Pop(1)
0xa8b: Pop(1); Push((bool) Stack[-1] == 0)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa8d: PushEmpty(bool, object)
0xa8e: Stack[-7] = Stack[-1]
0xa8f: Call2 0xae0

0xa90: Pop(1)
0xa91: Pop(1); Push((bool) Stack[-1] == 0)
0xa92: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa93: Stack[-6] = (bool) 0
0xa94: Return(); Pop(4)

0xa95: Push((int) 2)
0xa96: @ irand(Stack[-2], Stack[-1])
0xa97: Pop(1)
0xa98: Push(Stack[-1])
0xa99: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xa9a: Push("voice_common") // @poff=206
0xa9b: Push((int) 1)
0xa9c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa9d: Push((int) 3)
0xa9e: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa9f: @ SetVariable(Stack[-2], Stack[-1])
0xaa0: Pop(2)
0xaa1: GOTO 0xaa6

0xaa2: Push("voice_common") // @poff=206
0xaa3: Push((int) 0)
0xaa4: @ SetVariable(Stack[-2], Stack[-1])
0xaa5: Pop(2)
0xaa6: GOTO 0xab9

0xaa7: PushEmpty(bool, object)
0xaa8: Stack[-7] = Stack[-1]
0xaa9: Call2 0xae0

0xaaa: Pop(1)
0xaab: Pop(1); Push((bool) Stack[-1] == 0)
0xaac: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xaad: PushEmpty(bool, object)
0xaae: Stack[-7] = Stack[-1]
0xaaf: Call2 0xabb

0xab0: Pop(1)
0xab1: Pop(1); Push((bool) Stack[-1] == 0)
0xab2: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xab3: Stack[-6] = (bool) 0
0xab4: Return(); Pop(4)

0xab5: Push("voice_common") // @poff=206
0xab6: Push((int) 1)
0xab7: @ SetVariable(Stack[-2], Stack[-1])
0xab8: Pop(2)
0xab9: Stack[-6] = (bool) 1
0xaba: Return(); Pop(4)

0xabb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xabc: Stack[-5] = "c" // @poff=232
0xabd: Stack[-4] = (int) 0
0xabe: Push((int) 1)
0xabf: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac0: Push((int) 1)
0xac1: Pop(1); Push(Stack[-5] + Stack[-1]);
0xac2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xac3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xac4: Pop(1)
0xac5: Pop(0); Push((bool) Stack[-3] == 0)
0xac6: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac7: GOTO 0xacb

0xac8: Push((int) 1)
0xac9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xaca: GOTO 0xabe

0xacb: Pop(0); Push((bool) Stack[-4] == 0)
0xacc: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xacd: Stack[-12] = (bool) 0
0xace: Return(); Pop(10)

0xacf: Stack[-2] = (int) 0
0xad0: Push((int) 1)
0xad1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xad2: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xad3: @ irand(Stack[-2], Stack[-4])
0xad4: Pop(0)
0xad5: Push((int) 1)
0xad6: Pop(1); Push(Stack[-3] + Stack[-1]);
0xad7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xad8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xad9: Pop(1)
0xada: PushEmpty(bool, string)
0xadb: Stack[-3] = Stack[-1]
0xadc: Call2 0xb18

0xadd: Stack[-2] = Stack[-14]
0xade: Pop(2)
0xadf: Return(); Pop(10)

0xae0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xae1: Push("d") // @poff=202
0xae2: PushEmpty(int)
0xae3: Call2 0xb43

0xae4: Pop(0)
0xae5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xae6: Push("m") // @poff=260
0xae7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xae8: Stack[-4] = (int) 0
0xae9: Push((int) 1)
0xaea: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaeb: Push((int) 1)
0xaec: Pop(1); Push(Stack[-5] + Stack[-1]);
0xaed: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaee: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xaef: Pop(1)
0xaf0: Pop(0); Push((bool) Stack[-3] == 0)
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xaf2: GOTO 0xaf6

0xaf3: Push((int) 1)
0xaf4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xaf5: GOTO 0xae9

0xaf6: Pop(0); Push((bool) Stack[-4] == 0)
0xaf7: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xaf8: Stack[-12] = (bool) 0
0xaf9: Return(); Pop(10)

0xafa: Stack[-2] = (int) 0
0xafb: Push((int) 1)
0xafc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xafd: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xafe: @ irand(Stack[-2], Stack[-4])
0xaff: Pop(0)
0xb00: Push((int) 1)
0xb01: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb02: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb03: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xb04: Pop(1)
0xb05: PushEmpty(bool, string)
0xb06: Stack[-3] = Stack[-1]
0xb07: Call2 0xb18

0xb08: Stack[-2] = Stack[-14]
0xb09: Pop(2)
0xb0a: Return(); Pop(10)

0xb0b: PushEmpty(float, float, float, float)
0xb0c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xb0d: Pop(0)
0xb0e: Push((bool) 0)
0xb0f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb10: Pop(1)
0xb11: Return(); Pop(4)

0xb12: PushEmpty(float, float, float, float)
0xb13: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xb14: Pop(0)
0xb15: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xb16: Pop(0)
0xb17: Return(); Pop(4)

0xb18: PushEmpty(bool, bool)
0xb19: PushEmpty(bool)
0xb1a: Call2 0xb72

0xb1b: Pop(0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb1d: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb1e: Pop(0)
0xb1f: Push(Stack[-1])
0xb20: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb21: @ lshPlaySpeech(Stack[-3])
0xb22: Pop(0)
0xb23: Stack[-4] = (bool) 1
0xb24: Return(); Pop(2)

0xb25: Stack[-4] = (bool) 0
0xb26: Return(); Pop(2)

0xb27: PushEmpty(bool)
0xb28: Call2 0xb72

0xb29: Pop(0)
0xb2a: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2b: @ lshStopSpeech()
0xb2c: Pop(0)
0xb2d: Return(); Pop(0)

0xb2e: PushEmpty(object, object)
0xb2f: @ self(Stack[-1])
0xb30: Pop(0)
0xb31: Stack[-1] = Stack[-3]
0xb32: Return(); Pop(2)

0xb33: Stack[-1] = 0
0xb34: PushEmpty(float, float)
0xb35: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb36: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb37: Push((float)9.999999974752427e-07)
0xb38: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb39: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb3a: Stack[-4] = [0.0, 0.0, 0.0]
0xb3b: Return(); Pop(2)

0xb3c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb3d: Return(); Pop(2)

0xb3e: PushEmpty(int, int)
0xb3f: @ GetVariable(Stack[-3], Stack[-1])
0xb40: Pop(0)
0xb41: Stack[-1] = Stack[-4]
0xb42: Return(); Pop(2)

0xb43: PushEmpty(float, float)
0xb44: @ GetGameTime(Stack[-1])
0xb45: Pop(0)
0xb46: Push((int) 1)
0xb47: PushEmpty(int)
0xb48: Push((int) 24)
0xb49: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb4a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb4b: Return(); Pop(2)

0xb4c: PushEmpty()
0xb4d: PushEmpty(int)
0xb4e: Call2 0xb43

0xb4f: Pop(0)
0xb50: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb51: Return(); Pop(0)

0xb52: PushEmpty(string, string)
0xb53: Stack[-1] = "idle" // @poff=146
0xb54: Push(Stack[-3])
0xb55: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb56: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb57: Stack[-1] = Stack[-4]
0xb58: Return(); Pop(2)

0xb59: PushEmpty(int, bool, int, bool)
0xb5a: Stack[-2] = (int) 0
0xb5b: Push("all") // @poff=138
0xb5c: PushEmpty(string, int)
0xb5d: Stack[-5] = Stack[-1]
0xb5e: Call2 0xb52

0xb5f: Pop(1)
0xb60: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb61: Pop(2)
0xb62: Pop(0); Push((bool) Stack[-1] == 0)
0xb63: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb64: GOTO 0xb68

0xb65: Push((int) 1)
0xb66: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb67: GOTO 0xb5b

0xb68: Stack[-2] = Stack[-5]
0xb69: Return(); Pop(4)

0xb6a: Stack[-1] = (int) 515549
0xb6b: Return(); Pop(0)

0xb6c: Stack[-1] = (int) 502874
0xb6d: Return(); Pop(0)

0xb6e: Stack[-1] = "ui/NPC_Ospina.png" // @poff=264
0xb6f: Return(); Pop(0)

0xb70: Stack[-1] = "ui/NPC_Ospina_b.png" // @poff=300
0xb71: Return(); Pop(0)

0xb72: Stack[-1] = (bool) 1
0xb73: Return(); Pop(0)

0xb74: PushEmpty()
0xb75: Push("k2q01") // @poff=340
0xb76: Push((int) 4)
0xb77: @ SetVariable(Stack[-2], Stack[-1])
0xb78: Pop(2)
0xb79: PushEmpty()
0xb7a: Call2 0xc8e

0xb7b: Pop(0)
0xb7c: Return(); Pop(0)

0xb7d: PushEmpty()
0xb7e: Push("k2q01") // @poff=340
0xb7f: Push((int) 6)
0xb80: @ SetVariable(Stack[-2], Stack[-1])
0xb81: Pop(2)
0xb82: PushEmpty()
0xb83: Call2 0xc81

0xb84: Pop(0)
0xb85: Return(); Pop(0)

0xb86: PushEmpty()
0xb87: Push("ook6Ospina1") // @poff=352
0xb88: Push((int) 1)
0xb89: @ SetVariable(Stack[-2], Stack[-1])
0xb8a: Pop(2)
0xb8b: Return(); Pop(0)

0xb8c: PushEmpty()
0xb8d: PushEmpty()
0xb8e: Call2 0xc9b

0xb8f: Pop(0)
0xb90: Return(); Pop(0)

0xb91: PushEmpty()
0xb92: Push("k8q01") // @poff=376
0xb93: Push((int) 6)
0xb94: @ SetVariable(Stack[-2], Stack[-1])
0xb95: Pop(2)
0xb96: PushEmpty()
0xb97: Call2 0xca8

0xb98: Pop(0)
0xb99: Return(); Pop(0)

0xb9a: PushEmpty(int, int)
0xb9b: Push("k11q01SoulCount") // @poff=388
0xb9c: @ GetVariable(Stack[-1], Stack[-2])
0xb9d: Pop(1)
0xb9e: Push("k11q01SoulCount") // @poff=388
0xb9f: Push((int) 1)
0xba0: Pop(1); Push(Stack[-3] + Stack[-1]);
0xba1: @ SetVariable(Stack[-2], Stack[-1])
0xba2: Pop(2)
0xba3: Push((int) 2)
0xba4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba5: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba6: PushEmpty()
0xba7: Call2 0xc74

0xba8: Pop(0)
0xba9: GOTO 0xbcc

0xbaa: Push((int) 3)
0xbab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbac: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbad: PushEmpty()
0xbae: Call2 0xc67

0xbaf: Pop(0)
0xbb0: GOTO 0xbcc

0xbb1: Push((int) 4)
0xbb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb3: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb4: PushEmpty()
0xbb5: Call2 0xc5a

0xbb6: Pop(0)
0xbb7: GOTO 0xbcc

0xbb8: Push((int) 5)
0xbb9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbba: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbbb: PushEmpty()
0xbbc: Call2 0xc4d

0xbbd: Pop(0)
0xbbe: GOTO 0xbcc

0xbbf: Push((int) 6)
0xbc0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc1: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc2: PushEmpty()
0xbc3: Call2 0xc40

0xbc4: Pop(0)
0xbc5: GOTO 0xbcc

0xbc6: Push((int) 7)
0xbc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbc9: PushEmpty()
0xbca: Call2 0xc33

0xbcb: Pop(0)
0xbcc: Return(); Pop(2)

0xbcd: PushEmpty()
0xbce: Push("ook11Ospina1") // @poff=420
0xbcf: Push((int) 1)
0xbd0: @ SetVariable(Stack[-2], Stack[-1])
0xbd1: Pop(2)
0xbd2: Return(); Pop(0)

0xbd3: PushEmpty()
0xbd4: PushEmpty(int, string)
0xbd5: Stack[-1] = "k2q01" // @poff=340
0xbd6: Call2 0xb3e

0xbd7: Pop(1)
0xbd8: Push((int) 3)
0xbd9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbda: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbdb: Stack[-2] = (bool) 1
0xbdc: Return(); Pop(0)

0xbdd: Stack[-2] = (bool) 0
0xbde: Return(); Pop(0)

0xbdf: PushEmpty()
0xbe0: PushEmpty(int, string)
0xbe1: Stack[-1] = "k2q01" // @poff=340
0xbe2: Call2 0xb3e

0xbe3: Pop(1)
0xbe4: Push((int) 5)
0xbe5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe7: Stack[-2] = (bool) 1
0xbe8: Return(); Pop(0)

0xbe9: Stack[-2] = (bool) 0
0xbea: Return(); Pop(0)

0xbeb: PushEmpty()
0xbec: PushEmpty(int, string)
0xbed: Stack[-1] = "k6q01" // @poff=446
0xbee: Call2 0xb3e

0xbef: Pop(1)
0xbf0: Push((int) 2)
0xbf1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf2: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbf3: Stack[-2] = (bool) 1
0xbf4: Return(); Pop(0)

0xbf5: Stack[-2] = (bool) 0
0xbf6: Return(); Pop(0)

0xbf7: PushEmpty()
0xbf8: PushEmpty(int, string)
0xbf9: Stack[-1] = "k6q01DankoPos" // @poff=458
0xbfa: Call2 0xb3e

0xbfb: Pop(1)
0xbfc: Push((int) 3)
0xbfd: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xbfe: IF (Stack[-1] == 0) GOTO 0xc01; Pop(1)

0xbff: Stack[-2] = (bool) 1
0xc00: Return(); Pop(0)

0xc01: Stack[-2] = (bool) 0
0xc02: Return(); Pop(0)

0xc03: PushEmpty()
0xc04: PushEmpty(int, string)
0xc05: Stack[-1] = "ook6Ospina1" // @poff=352
0xc06: Call2 0xb3e

0xc07: Pop(1)
0xc08: Push((int) 0)
0xc09: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xc0b: Stack[-2] = (bool) 1
0xc0c: Return(); Pop(0)

0xc0d: Stack[-2] = (bool) 0
0xc0e: Return(); Pop(0)

0xc0f: PushEmpty()
0xc10: PushEmpty(int, string)
0xc11: Stack[-1] = "k8q01" // @poff=376
0xc12: Call2 0xb3e

0xc13: Pop(1)
0xc14: Push((int) 5)
0xc15: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc17: Stack[-2] = (bool) 1
0xc18: Return(); Pop(0)

0xc19: Stack[-2] = (bool) 0
0xc1a: Return(); Pop(0)

0xc1b: PushEmpty()
0xc1c: PushEmpty(int, string)
0xc1d: Stack[-1] = "k11q01" // @poff=486
0xc1e: Call2 0xb3e

0xc1f: Pop(1)
0xc20: Push((int) 9)
0xc21: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc22: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc23: Stack[-2] = (bool) 1
0xc24: Return(); Pop(0)

0xc25: Stack[-2] = (bool) 0
0xc26: Return(); Pop(0)

0xc27: PushEmpty()
0xc28: PushEmpty(int, string)
0xc29: Stack[-1] = "ook11Ospina1" // @poff=420
0xc2a: Call2 0xb3e

0xc2b: Pop(1)
0xc2c: Push((int) 0)
0xc2d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc2e: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc2f: Stack[-2] = (bool) 1
0xc30: Return(); Pop(0)

0xc31: Stack[-2] = (bool) 0
0xc32: Return(); Pop(0)

0xc33: PushEmpty(object, object)
0xc34: Push((int) 498)
0xc35: Push((int) 1)
0xc36: Push((int) 528065)
0xc37: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc38: Pop(3)
0xc39: PushEmpty(bool, object, int)
0xc3a: Stack[-4] = Stack[-2]
0xc3b: Stack[-1] = (int) 480
0xc3c: Call2 0xcc2

0xc3d: Pop(3)
0xc3e: Return(); Pop(2)

0xc3f: Stack[-1] = 0
0xc40: PushEmpty(object, object)
0xc41: Push((int) 497)
0xc42: Push((int) 1)
0xc43: Push((int) 528064)
0xc44: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc45: Pop(3)
0xc46: PushEmpty(bool, object, int)
0xc47: Stack[-4] = Stack[-2]
0xc48: Stack[-1] = (int) 480
0xc49: Call2 0xcc2

0xc4a: Pop(3)
0xc4b: Return(); Pop(2)

0xc4c: Stack[-1] = 0
0xc4d: PushEmpty(object, object)
0xc4e: Push((int) 496)
0xc4f: Push((int) 1)
0xc50: Push((int) 528063)
0xc51: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc52: Pop(3)
0xc53: PushEmpty(bool, object, int)
0xc54: Stack[-4] = Stack[-2]
0xc55: Stack[-1] = (int) 480
0xc56: Call2 0xcc2

0xc57: Pop(3)
0xc58: Return(); Pop(2)

0xc59: Stack[-1] = 0
0xc5a: PushEmpty(object, object)
0xc5b: Push((int) 495)
0xc5c: Push((int) 1)
0xc5d: Push((int) 528062)
0xc5e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc5f: Pop(3)
0xc60: PushEmpty(bool, object, int)
0xc61: Stack[-4] = Stack[-2]
0xc62: Stack[-1] = (int) 480
0xc63: Call2 0xcc2

0xc64: Pop(3)
0xc65: Return(); Pop(2)

0xc66: Stack[-1] = 0
0xc67: PushEmpty(object, object)
0xc68: Push((int) 494)
0xc69: Push((int) 1)
0xc6a: Push((int) 528061)
0xc6b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc6c: Pop(3)
0xc6d: PushEmpty(bool, object, int)
0xc6e: Stack[-4] = Stack[-2]
0xc6f: Stack[-1] = (int) 480
0xc70: Call2 0xcc2

0xc71: Pop(3)
0xc72: Return(); Pop(2)

0xc73: Stack[-1] = 0
0xc74: PushEmpty(object, object)
0xc75: Push((int) 493)
0xc76: Push((int) 1)
0xc77: Push((int) 528060)
0xc78: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc79: Pop(3)
0xc7a: PushEmpty(bool, object, int)
0xc7b: Stack[-4] = Stack[-2]
0xc7c: Stack[-1] = (int) 480
0xc7d: Call2 0xcc2

0xc7e: Pop(3)
0xc7f: Return(); Pop(2)

0xc80: Stack[-1] = 0
0xc81: PushEmpty(object, object)
0xc82: Push((int) 467)
0xc83: Push((int) 1)
0xc84: Push((int) 527783)
0xc85: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc86: Pop(3)
0xc87: PushEmpty(bool, object, int)
0xc88: Stack[-4] = Stack[-2]
0xc89: Stack[-1] = (int) 461
0xc8a: Call2 0xcc2

0xc8b: Pop(3)
0xc8c: Return(); Pop(2)

0xc8d: Stack[-1] = 0
0xc8e: PushEmpty(object, object)
0xc8f: Push((int) 465)
0xc90: Push((int) 1)
0xc91: Push((int) 527781)
0xc92: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc93: Pop(3)
0xc94: PushEmpty(bool, object, int)
0xc95: Stack[-4] = Stack[-2]
0xc96: Stack[-1] = (int) 461
0xc97: Call2 0xcc2

0xc98: Pop(3)
0xc99: Return(); Pop(2)

0xc9a: Stack[-1] = 0
0xc9b: PushEmpty(object, object)
0xc9c: Push((int) 414)
0xc9d: Push((int) 1)
0xc9e: Push((int) 526115)
0xc9f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca0: Pop(3)
0xca1: PushEmpty(bool, object, int)
0xca2: Stack[-4] = Stack[-2]
0xca3: Stack[-1] = (int) 408
0xca4: Call2 0xcc2

0xca5: Pop(3)
0xca6: Return(); Pop(2)

0xca7: Stack[-1] = 0
0xca8: PushEmpty(object, object)
0xca9: Push((int) 444)
0xcaa: Push((int) 1)
0xcab: Push((int) 526469)
0xcac: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcad: Pop(3)
0xcae: PushEmpty(bool, object, int)
0xcaf: Stack[-4] = Stack[-2]
0xcb0: Stack[-1] = (int) 438
0xcb1: Call2 0xcc2

0xcb2: Pop(3)
0xcb3: Return(); Pop(2)

0xcb4: Stack[-1] = 0
0xcb5: PushEmpty(object, object)
0xcb6: @ GetDiaryRoot(Stack[-1])
0xcb7: Pop(0)
0xcb8: Pop(0); Push((bool) Stack[-1] == 0)
0xcb9: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcba: Push("Can't retrieve diary root") // @poff=500
0xcbb: @ Trace(Stack[-1])
0xcbc: Pop(1)
0xcbd: Stack[-3] = (bool) 0
0xcbe: Return(); Pop(2)

0xcbf: Stack[-1] = Stack[-3]
0xcc0: Return(); Pop(2)

0xcc1: Stack[-1] = 0
0xcc2: PushEmpty(object, object, int, object, object, int)
0xcc3: PushEmpty(object)
0xcc4: Call2 0xcb5

0xcc5: Stack[-1] = Stack[-4]
0xcc6: Pop(1)
0xcc7: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=552
0xcc8: Pop(0)
0xcc9: Pop(0); Push((bool) Stack[-2] == 0)
0xcca: IF (Stack[-1] == 0) GOTO 0xcd1; Pop(1)

0xccb: Push("Can't find diary parent with id: ") // @poff=557
0xccc: Pop(1); Push(Stack[-1] + Stack[-8]);
0xccd: @ Trace(Stack[-1])
0xcce: Pop(1)
0xccf: Stack[-9] = (bool) 0
0xcd0: Return(); Pop(6)

0xcd1: @@ AddChild(Stack[-8]); Obj=2 // @poff=625
0xcd2: Pop(0)
0xcd3: Push((int) 7)
0xcd4: @ SendWorldWndMessage(Stack[-1])
0xcd5: Pop(1)
0xcd6: @@ GetCategory(Stack[-1]); Obj=8 // @poff=634
0xcd7: Pop(0)
0xcd8: @ SetDiarySection(Stack[-1])
0xcd9: Pop(0)
0xcda: Stack[-9] = (bool) 0
0xcdb: Return(); Pop(6)

0xcdc: Stack[-2] = 0
0xcdd: Stack[-3] = 0
0xcde: PushEmpty(int, int)
0xcdf: Push("branch") // @poff=646
0xce0: @ GetVariable(Stack[-1], Stack[-2])
0xce1: Pop(1)
0xce2: Push((int) 0)
0xce3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce4: IF (Stack[-1] == 0) GOTO 0xce8; Pop(1)

0xce5: Stack[-3] = (int) 1
0xce6: Return(); Pop(2)

0xce7: GOTO 0xced

0xce8: Push((int) 1)
0xce9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcea: IF (Stack[-1] == 0) GOTO 0xced; Pop(1)

0xceb: Stack[-3] = (int) 2
0xcec: Return(); Pop(2)

0xced: Stack[-3] = (int) 3
0xcee: Return(); Pop(2)

0xcef: PushEmpty()
0xcf0: Push(GlobalVars[1])
0xcf1: Pop(1); Push((bool) Stack[-1] == 0)
0xcf2: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xcf3: PushEmpty(int, object)
0xcf4: Stack[-3] = Stack[-1]
0xcf5: Push(-2, 1); TaskCall(3)
0xcf6: Call2 0x1d0

0xcf7: Pop(-2, 1); TaskReturn
0xcf8: Pop(2)
0xcf9: Push(GlobalVars[1])
0xcfa: Stack[-1] = (bool) 1
0xcfb: GlobalVars[1] = Stack[-1]; Pop(1)
0xcfc: PushEmpty(bool, int)
0xcfd: Stack[-1] = (int) 2
0xcfe: Call2 0xb4c

0xcff: Pop(1)
0xd00: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd01: PushEmpty(int, object)
0xd02: Stack[-3] = Stack[-1]
0xd03: Push(-2, 1); TaskCall(1)
0xd04: Call2 0xd

0xd05: Pop(-2, 1); TaskReturn
0xd06: Pop(2)
0xd07: Return(); Pop(0)

0xd08: PushEmpty(bool, int)
0xd09: Stack[-1] = (int) 6
0xd0a: Call2 0xb4c

0xd0b: Pop(1)
0xd0c: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd0d: PushEmpty(int, object)
0xd0e: Stack[-3] = Stack[-1]
0xd0f: Push(-2, 1); TaskCall(5)
0xd10: Call2 0x2db

0xd11: Pop(-2, 1); TaskReturn
0xd12: Pop(2)
0xd13: Return(); Pop(0)

0xd14: PushEmpty(bool, int)
0xd15: Stack[-1] = (int) 8
0xd16: Call2 0xb4c

0xd17: Pop(1)
0xd18: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd19: PushEmpty(int, object)
0xd1a: Stack[-3] = Stack[-1]
0xd1b: Push(-2, 1); TaskCall(7)
0xd1c: Call2 0x41f

0xd1d: Pop(-2, 1); TaskReturn
0xd1e: Pop(2)
0xd1f: Return(); Pop(0)

0xd20: PushEmpty(bool, int)
0xd21: Stack[-1] = (int) 11
0xd22: Call2 0xb4c

0xd23: Pop(1)
0xd24: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd25: PushEmpty(int, object)
0xd26: Stack[-3] = Stack[-1]
0xd27: Push(-2, 1); TaskCall(9)
0xd28: Call2 0x5c2

0xd29: Pop(-2, 1); TaskReturn
0xd2a: Pop(2)
0xd2b: Return(); Pop(0)

0xd2c: PushEmpty(bool, int)
0xd2d: Stack[-1] = (int) 12
0xd2e: Call2 0xb4c

0xd2f: Pop(1)
0xd30: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd31: PushEmpty(int, object)
0xd32: Stack[-3] = Stack[-1]
0xd33: Push(-2, 1); TaskCall(11)
0xd34: Call2 0x777

0xd35: Pop(-2, 1); TaskReturn
0xd36: Pop(2)
0xd37: Return(); Pop(0)

0xd38: PushEmpty(int, object)
0xd39: Stack[-3] = Stack[-1]
0xd3a: Push(-2, 1); TaskCall(13)
0xd3b: Call2 0x838

0xd3c: Pop(-2, 1); TaskReturn
0xd3d: Pop(2)
0xd3e: Return(); Pop(0)

