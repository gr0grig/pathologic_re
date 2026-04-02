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
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:pt_d5q01_girl_corpse1
	A:ShowMap
	W:d5q02
	W:d5q02NudeMeeting
	A:AddMark
	W:quest_d5_02
	W:remove_girl
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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400700074005f00640035007100300031005f006700690072006c005f0063006f0072007000730065003100000053686f774d617000640035007100300032000000640035007100300032004e007500640065004d0065006500740069006e00670000004164644d61726b00710075006500730074005f00640035005f00300032000000720065006d006f00760065005f006700690072006c000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x182
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x188 Vars = (object)
		EVENT_26 Op = 0x1bd Vars = (string)
		EVENT_5 Op = 0x1c5 Vars = ()
		EVENT_6 Op = 0x1ca Vars = ()
		EVENT_7 Op = 0x209 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x291

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3fa

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e3

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
0x41: Call2 0x2d5

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x36f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x84

0x58: Pop(1)
0x59: Push((int) 511988)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 511989)
0x5f: Push((int) 13205)
0x60: Push((int) 13204)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x3fc

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x2e6

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x3fc

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x2ed

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x2fe

0x9f: Pop(0)
0xa0: Push((int) 13218)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x353

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x343

0xac: Pop(2)
0xad: Push((int) 13214)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x353

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x343

0xb9: Pop(2)
0xba: Push((int) 13215)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x353

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x343

0xc6: Pop(2)
0xc7: Push((int) 13203)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Call2 0x36f

0xcd: Pop(1)
0xce: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral" // @poff=89
0xd1: Call2 0x84

0xd2: Pop(1)
0xd3: Push((int) 511988)
0xd4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd5: Pop(1)
0xd6: @@@ ClearReplies(); Obj=0 // @poff=116
0xd7: Pop(0)
0xd8: Push((int) 511989)
0xd9: Push((int) 13205)
0xda: Push((int) 13204)
0xdb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Push((int) 13205)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral" // @poff=89
0xe3: Call2 0x84

0xe4: Pop(1)
0xe5: Push((int) 511990)
0xe6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe7: Pop(1)
0xe8: @@@ ClearReplies(); Obj=0 // @poff=116
0xe9: Pop(0)
0xea: Push((int) 511991)
0xeb: Push((int) 13207)
0xec: Push((int) 13206)
0xed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xee: Pop(3)
0xef: Push((int) 512004)
0xf0: Push((int) 13207)
0xf1: Push((int) 13219)
0xf2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 13207)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral" // @poff=89
0xfa: Call2 0x84

0xfb: Pop(1)
0xfc: Push((int) 511992)
0xfd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfe: Pop(1)
0xff: @@@ ClearReplies(); Obj=0 // @poff=116
0x100: Pop(0)
0x101: Push((int) 511993)
0x102: Push((int) 13209)
0x103: Push((int) 13208)
0x104: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x105: Pop(3)
0x106: Push((int) 512005)
0x107: Push((int) 13209)
0x108: Push((int) 13221)
0x109: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 13209)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral" // @poff=89
0x111: Call2 0x84

0x112: Pop(1)
0x113: Push((int) 511994)
0x114: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x115: Pop(1)
0x116: @@@ ClearReplies(); Obj=0 // @poff=116
0x117: Pop(0)
0x118: Push((int) 511995)
0x119: Push((int) 13211)
0x11a: Push((int) 13210)
0x11b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11c: Pop(3)
0x11d: Push((int) 512006)
0x11e: Push((int) 13213)
0x11f: Push((int) 13223)
0x120: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 13211)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral" // @poff=89
0x128: Call2 0x84

0x129: Pop(1)
0x12a: Push((int) 511996)
0x12b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12c: Pop(1)
0x12d: @@@ ClearReplies(); Obj=0 // @poff=116
0x12e: Pop(0)
0x12f: Push((int) 511997)
0x130: Push((int) 13213)
0x131: Push((int) 13212)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 13213)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0x84

0x13b: Pop(1)
0x13c: Push((int) 511998)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 512001)
0x142: Push((int) 13217)
0x143: Push((int) 13216)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Push((int) 511999)
0x147: Push((int) -1)
0x148: Push((int) 13214)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: Push((int) 515782)
0x14c: Push((int) 16855)
0x14d: Push((int) 16854)
0x14e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 16855)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral" // @poff=89
0x156: Call2 0x84

0x157: Pop(1)
0x158: Push((int) 515783)
0x159: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15a: Pop(1)
0x15b: @@@ ClearReplies(); Obj=0 // @poff=116
0x15c: Pop(0)
0x15d: Push((int) 512000)
0x15e: Push((int) -1)
0x15f: Push((int) 13215)
0x160: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 13217)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral" // @poff=89
0x168: Call2 0x84

0x169: Pop(1)
0x16a: Push((int) 512002)
0x16b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16c: Pop(1)
0x16d: @@@ ClearReplies(); Obj=0 // @poff=116
0x16e: Pop(0)
0x16f: Push((int) 512003)
0x170: Push((int) -1)
0x171: Push((int) 13218)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x176: PushEmpty(bool)
0x177: Call2 0x3fc

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: @ lshStopAnimation()
0x17b: Pop(0)
0x17c: GOTO 0x17f

0x17d: @ StopAnimation()
0x17e: Pop(0)
0x17f: Return(); Pop(0)

0x180: GOTO 0x9b

0x181: Return(); Pop(0)

0x182: PushEmpty(float, float)
0x183: Stack[-2] = (int) 300
0x184: Stack[-1] = (int) 100
0x185: Call2 0x190

0x186: Pop(2)
0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: PushEmpty(int, object)
0x18a: Stack[-3] = Stack[-1]
0x18b: Push(-2, 1); TaskCall(0)
0x18c: Call2 0x0

0x18d: Pop(-2, 1); TaskReturn
0x18e: Pop(2)
0x18f: Return(); Pop(0)

0x190: PushEmpty(float, float)
0x191: PushEmpty(bool)
0x192: Call2 0x28c

0x193: Pop(0)
0x194: Pop(1); Push((bool) Stack[-1] == 0)
0x195: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x196: @ Hold()
0x197: Pop(0)
0x198: GOTO 0x191

0x199: Push((int) 3)
0x19a: @ rand(Stack[-2], Stack[-1])
0x19b: Pop(1)
0x19c: Push((int) 3)
0x19d: Pop(1); Push(Stack[-2] + Stack[-1]);
0x19e: @ Sleep(Stack[-1])
0x19f: Pop(1)
0x1a0: PushEmpty(float, float)
0x1a1: Stack[-6] = Stack[-2]
0x1a2: Stack[-5] = Stack[-1]
0x1a3: Call2 0x1df

0x1a4: Pop(2)
0x1a5: @ sync()
0x1a6: Pop(0)
0x1a7: GOTO 0x191

0x1a8: Return(); Pop(2)

0x1a9: PushEmpty(bool, bool)
0x1aa: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1ab: @ IsLoaded(Stack[-1])
0x1ac: Pop(0)
0x1ad: PushEmpty(bool)
0x1ae: Stack[-1] = (bool) 0
0x1af: Pop(0); Push((bool) Stack[-2] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(bool)
0x1b2: Call2 0x1dd

0x1b3: Pop(0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Stack[-1] = (bool) 1
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: PushEmpty(object)
0x1b8: Call2 0x305

0x1b9: Pop(0)
0x1ba: @ RemoveActor(Stack[-1])
0x1bb: Pop(1)
0x1bc: Return(); Pop(2)

0x1bd: PushEmpty()
0x1be: Push("cleanup") // @poff=156
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: PushEmpty()
0x1c2: Call2 0x1a9

0x1c3: Pop(0)
0x1c4: Return(); Pop(0)

0x1c5: @ StopGroup0()
0x1c6: Pop(0)
0x1c7: @ sync()
0x1c8: Pop(0)
0x1c9: Return(); Pop(0)

0x1ca: PushEmpty()
0x1cb: Call2 0x220

0x1cc: Pop(0)
0x1cd: PushEmpty(bool)
0x1ce: Stack[-1] = (bool) 0
0x1cf: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(bool)
0x1d2: Call2 0x1dd

0x1d3: Pop(0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 1
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(object)
0x1d8: Call2 0x305

0x1d9: Pop(0)
0x1da: @ RemoveActor(Stack[-1])
0x1db: Pop(1)
0x1dc: Return(); Pop(0)

0x1dd: Stack[-1] = (bool) 1
0x1de: Return(); Pop(0)

0x1df: PushEmpty()
0x1e0: PushEmpty(bool)
0x1e1: Call2 0x28c

0x1e2: Pop(0)
0x1e3: Pop(1); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Return(); Pop(0)

0x1e6: Push("player") // @poff=172
0x1e7: @ FindActor(Stack[-4]T, Stack[-1])
0x1e8: Pop(1)
0x1e9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ec: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ed: Push((int) 10)
0x1ee: Push((float)1.0)
0x1ef: @ SetTimer(Stack[-2], Stack[-1])
0x1f0: Pop(2)
0x1f1: PushEmpty()
0x1f2: Call2 0x22e

0x1f3: Pop(0)
0x1f4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f6: Push((int) 10)
0x1f7: @ KillTimer(Stack[-1])
0x1f8: Pop(1)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(float, float)
0x1fb: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-3] = (bool) 0
0x1fe: Return(); Pop(2)

0x1ff: PushEmpty(float, object)
0x200: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x201: Call2 0x284

0x202: Pop(1)
0x203: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x204: Push( Stack[2 + Tasks[-1].StackPointer] )
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x207: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x208: Return(); Pop(2)

0x209: PushEmpty()
0x20a: Push((int) 10)
0x20b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call2 0x1fa

0x20f: Pop(0)
0x210: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x211: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(object)
0x214: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x215: Call2 0x2f3

0x216: Pop(1)
0x217: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x218: GOTO 0x21f

0x219: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21b: Push("head") // @poff=186
0x21c: @ UnlookAsync(Stack[-1])
0x21d: Pop(1)
0x21e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21f: Return(); Pop(0)

0x220: PushEmpty()
0x221: Call2 0x27f

0x222: Pop(0)
0x223: Push((int) 10)
0x224: @ KillTimer(Stack[-1])
0x225: Pop(1)
0x226: Push( Stack[2 + Tasks[-1].StackPointer] )
0x227: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x228: Push("head") // @poff=186
0x229: @ UnlookAsync(Stack[-1])
0x22a: Pop(1)
0x22b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22d: Return(); Pop(0)

0x22e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x22f: @ WaitForAnimEnd()
0x230: Pop(0)
0x231: PushEmpty(bool)
0x232: Call2 0x28c

0x233: Pop(0)
0x234: Pop(1); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Return(); Pop(14)

0x237: PushEmpty(int)
0x238: Call2 0x332

0x239: Stack[-1] = Stack[-8]
0x23a: Pop(1)
0x23b: Stack[-6] = (int) 0
0x23c: PushEmpty(bool)
0x23d: Stack[-1] = (bool) 0
0x23e: Push((int) 5)
0x23f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: PushEmpty(bool)
0x242: Call2 0x28c

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x247: Push((int) 3)
0x248: @ irand(Stack[-6], Stack[-1])
0x249: Pop(1)
0x24a: Push((int) 0)
0x24b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24d: Push(Stack[-7])
0x24e: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x24f: @ irand(Stack[-4], Stack[-7])
0x250: Pop(0)
0x251: Push("all") // @poff=138
0x252: PushEmpty(string, int)
0x253: Stack[-7] = Stack[-1]
0x254: Call2 0x32b

0x255: Pop(1)
0x256: @ PlayAnimation(Stack[-2], Stack[-1])
0x257: Pop(2)
0x258: @ WaitForAnimEnd(Stack[-3])
0x259: Pop(0)
0x25a: Pop(0); Push((bool) Stack[-3] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: GOTO 0x27a

0x25d: GOTO 0x26f

0x25e: Push((int) 1)
0x25f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x261: Push((int) 4)
0x262: @ rand(Stack[-3], Stack[-1])
0x263: Pop(1)
0x264: Push((int) 1)
0x265: Pop(1); Push(Stack[-3] + Stack[-1]);
0x266: @ Sleep(Stack[-1], Stack[-2])
0x267: Pop(1)
0x268: Pop(0); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x27a

0x26b: GOTO 0x26f

0x26c: Push(Stack[-6])
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: GOTO 0x27a

0x26f: PushEmpty(bool)
0x270: Call2 0x27d

0x271: Pop(0)
0x272: Pop(1); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x27a

0x275: @ ResetAAS()
0x276: Pop(0)
0x277: Push((int) 1)
0x278: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x279: GOTO 0x23c

0x27a: @ ResetAAS()
0x27b: Pop(0)
0x27c: Return(); Pop(14)

0x27d: Stack[-1] = (bool) 1
0x27e: Return(); Pop(0)

0x27f: @ StopAnimation()
0x280: Pop(0)
0x281: @ StopGroup0()
0x282: Pop(0)
0x283: Return(); Pop(0)

0x284: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x285: @ GetPosition(Stack[-3])
0x286: Pop(0)
0x287: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x288: Pop(0)
0x289: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x28b: Return(); Pop(6)

0x28c: PushEmpty(bool, bool)
0x28d: @ IsLoaded(Stack[-1])
0x28e: Pop(0)
0x28f: Stack[-1] = Stack[-3]
0x290: Return(); Pop(2)

0x291: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x292: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x293: Pop(0)
0x294: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x295: Pop(0)
0x296: Push(CvectorIndex(Stack[-8], 1))
0x297: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x298: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x299: @ GetPosition(Stack[-7])
0x29a: Pop(0)
0x29b: @ GetEyesHeight(Stack[-9])
0x29c: Pop(0)
0x29d: Push(CvectorIndex(Stack[-7], 1))
0x29e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a1: Push(CvectorIndex(Stack[-6], 1))
0x2a2: Stack[-1] = (int) 0
0x2a3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a5: Pop(1); Push(Sqrt(Stack[-1]))
0x2a6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a7: Stack[-5] = -Stack[-6]; Pop(0);
0x2a8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a9: PushEmpty(cvector, cvector)
0x2aa: Push([0.0, 1.0, 0.0])
0x2ab: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ac: Call2 0x30b

0x2ad: Pop(1)
0x2ae: Push((int) 25)
0x2af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b1: Push([0.0, 10.0, 0.0])
0x2b2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b4: @ IsOverrideActive(Stack[-2])
0x2b5: Pop(0)
0x2b6: Push(Stack[-2])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-21] = (bool) 0
0x2b9: Return(); Pop(18)

0x2ba: @ StopWorld()
0x2bb: Pop(0)
0x2bc: @ CameraTransit(Stack[-3], Stack[-5])
0x2bd: Pop(0)
0x2be: Push(CvectorIndex(Stack[-4], 0))
0x2bf: Push(CvectorIndex(Stack[-5], 2))
0x2c0: @ Rotate(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: PushEmpty(bool)
0x2c3: Call2 0x3fc

0x2c4: Pop(0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c6: GOTO 0x2cf

0x2c7: Push("head") // @poff=186
0x2c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c9: Pop(1)
0x2ca: Push(Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cc: Push("head") // @poff=186
0x2cd: @ LookAsyncCamera(Stack[-1])
0x2ce: Pop(1)
0x2cf: @ CameraWaitForPlayFinish()
0x2d0: Pop(0)
0x2d1: @ ResumeWorld()
0x2d2: Pop(0)
0x2d3: Stack[-21] = (bool) 1
0x2d4: Return(); Pop(18)

0x2d5: PushEmpty(bool, bool)
0x2d6: @ CameraSwitchToNormal()
0x2d7: Pop(0)
0x2d8: PushEmpty(bool)
0x2d9: Call2 0x3fc

0x2da: Pop(0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: GOTO 0x2e5

0x2dd: Push("head") // @poff=186
0x2de: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2df: Pop(1)
0x2e0: Push(Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e2: Push("head") // @poff=186
0x2e3: @ UnlookAsync(Stack[-1])
0x2e4: Pop(1)
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(float, float, float, float)
0x2e7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2e8: Pop(0)
0x2e9: Push((bool) 0)
0x2ea: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(4)

0x2ed: PushEmpty(float, float, float, float)
0x2ee: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2ef: Pop(0)
0x2f0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f1: Pop(0)
0x2f2: Return(); Pop(4)

0x2f3: PushEmpty(float, cvector, float, cvector)
0x2f4: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2f5: Pop(0)
0x2f6: Stack[-1] = [0.0, 0.0, 0.0]
0x2f7: Push(CvectorIndex(Stack[-1], 1))
0x2f8: Stack[-3] = Stack[-1]
0x2f9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fa: Push("head") // @poff=186
0x2fb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2fc: Pop(1)
0x2fd: Return(); Pop(4)

0x2fe: PushEmpty(bool)
0x2ff: Call2 0x3fc

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: @ lshStopSpeech()
0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: PushEmpty(object, object)
0x306: @ self(Stack[-1])
0x307: Pop(0)
0x308: Stack[-1] = Stack[-3]
0x309: Return(); Pop(2)

0x30a: Stack[-1] = 0
0x30b: PushEmpty(float, float)
0x30c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30e: Push((float)9.999999974752427e-07)
0x30f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-4] = [0.0, 0.0, 0.0]
0x312: Return(); Pop(2)

0x313: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x314: Return(); Pop(2)

0x315: PushEmpty(int, int)
0x316: @ GetVariable(Stack[-3], Stack[-1])
0x317: Pop(0)
0x318: Stack[-1] = Stack[-4]
0x319: Return(); Pop(2)

0x31a: PushEmpty(object, object)
0x31b: @ FindActor(Stack[-1], Stack[-4])
0x31c: Pop(0)
0x31d: Pop(0); PushNull((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31f: Stack[-5] = (bool) 0
0x320: Return(); Pop(2)

0x321: @ Trigger(Stack[-1], Stack[-3])
0x322: Pop(0)
0x323: Stack[-5] = (bool) 1
0x324: Return(); Pop(2)

0x325: Stack[-1] = 0
0x326: PushEmpty(float, float)
0x327: @ GetGameTime(Stack[-1])
0x328: Pop(0)
0x329: Stack[-1] = Stack[-3]
0x32a: Return(); Pop(2)

0x32b: PushEmpty(string, string)
0x32c: Stack[-1] = "idle" // @poff=146
0x32d: Push(Stack[-3])
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x330: Stack[-1] = Stack[-4]
0x331: Return(); Pop(2)

0x332: PushEmpty(int, bool, int, bool)
0x333: Stack[-2] = (int) 0
0x334: Push("all") // @poff=138
0x335: PushEmpty(string, int)
0x336: Stack[-5] = Stack[-1]
0x337: Call2 0x32b

0x338: Pop(1)
0x339: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: Pop(0); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x341

0x33e: Push((int) 1)
0x33f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x340: GOTO 0x334

0x341: Stack[-2] = Stack[-5]
0x342: Return(); Pop(4)

0x343: PushEmpty()
0x344: PushEmpty(object, string, float)
0x345: PushEmpty(object)
0x346: Call2 0x3b1

0x347: Stack[-1] = Stack[-4]
0x348: Pop(1)
0x349: Stack[-2] = "pt_d5q01_girl_corpse1" // @poff=222
0x34a: Stack[-1] = (int) 2
0x34b: Call2 0x3c2

0x34c: Pop(3)
0x34d: PushEmpty(object)
0x34e: Call2 0x3b1

0x34f: Pop(0)
0x350: @@ ShowMap(Stack[-1]); Obj=2 // @poff=266
0x351: Pop(1)
0x352: Return(); Pop(0)

0x353: PushEmpty(object, object)
0x354: Push("d5q02") // @poff=274
0x355: Push((int) 4)
0x356: @ SetVariable(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: PushEmpty(object)
0x359: Call2 0x3b1

0x35a: Stack[-1] = Stack[-2]
0x35b: Pop(1)
0x35c: Push("d5q02NudeMeeting") // @poff=286
0x35d: Push("pt_d5q01_girl_corpse1") // @poff=222
0x35e: Push((int) 0)
0x35f: Push((int) 515364)
0x360: PushEmpty(float)
0x361: Call2 0x326

0x362: Pop(0)
0x363: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=320
0x364: Pop(5)
0x365: PushEmpty()
0x366: Call2 0x37b

0x367: Pop(0)
0x368: PushEmpty(bool, string, string)
0x369: Stack[-2] = "quest_d5_02" // @poff=328
0x36a: Stack[-1] = "remove_girl" // @poff=352
0x36b: Call2 0x31a

0x36c: Pop(3)
0x36d: Return(); Pop(2)

0x36e: Stack[-1] = 0
0x36f: PushEmpty()
0x370: PushEmpty(int, string)
0x371: Stack[-1] = "d5q02" // @poff=274
0x372: Call2 0x315

0x373: Pop(1)
0x374: Push((int) 3)
0x375: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x377: Stack[-2] = (bool) 1
0x378: Return(); Pop(0)

0x379: Stack[-2] = (bool) 0
0x37a: Return(); Pop(0)

0x37b: PushEmpty(object, object)
0x37c: Push((int) 152)
0x37d: Push((int) 2)
0x37e: Push((int) 515358)
0x37f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: PushEmpty(bool, object, int)
0x382: Stack[-4] = Stack[-2]
0x383: Stack[-1] = (int) 148
0x384: Call2 0x395

0x385: Pop(3)
0x386: Return(); Pop(2)

0x387: Stack[-1] = 0
0x388: PushEmpty(object, object)
0x389: @ GetDiaryRoot(Stack[-1])
0x38a: Pop(0)
0x38b: Pop(0); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38d: Push("Can't retrieve diary root") // @poff=376
0x38e: @ Trace(Stack[-1])
0x38f: Pop(1)
0x390: Stack[-3] = (bool) 0
0x391: Return(); Pop(2)

0x392: Stack[-1] = Stack[-3]
0x393: Return(); Pop(2)

0x394: Stack[-1] = 0
0x395: PushEmpty(object, object, int, object, object, int)
0x396: PushEmpty(object)
0x397: Call2 0x388

0x398: Stack[-1] = Stack[-4]
0x399: Pop(1)
0x39a: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=428
0x39b: Pop(0)
0x39c: Pop(0); Push((bool) Stack[-2] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39e: Push("Can't find diary parent with id: ") // @poff=433
0x39f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a0: @ Trace(Stack[-1])
0x3a1: Pop(1)
0x3a2: Stack[-9] = (bool) 0
0x3a3: Return(); Pop(6)

0x3a4: @@ AddChild(Stack[-8]); Obj=2 // @poff=501
0x3a5: Pop(0)
0x3a6: Push((int) 7)
0x3a7: @ SendWorldWndMessage(Stack[-1])
0x3a8: Pop(1)
0x3a9: @@ GetCategory(Stack[-1]); Obj=8 // @poff=510
0x3aa: Pop(0)
0x3ab: @ SetDiarySection(Stack[-1])
0x3ac: Pop(0)
0x3ad: Stack[-9] = (bool) 0
0x3ae: Return(); Pop(6)

0x3af: Stack[-2] = 0
0x3b0: Stack[-3] = 0
0x3b1: PushEmpty(object, object, object, object)
0x3b2: @ GetMainOutdoorScene(Stack[-2])
0x3b3: Pop(0)
0x3b4: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b6: Push("Can't find main outdoor scene") // @poff=522
0x3b7: @ Trace(Stack[-1])
0x3b8: Pop(1)
0x3b9: Stack[-1] = 0
0x3ba: Stack[-1] = Stack[-5]
0x3bb: Return(); Pop(4)

0x3bc: @@ GetMap(Stack[-1]); Obj=2 // @poff=582
0x3bd: Pop(0)
0x3be: Stack[-1] = Stack[-5]
0x3bf: Return(); Pop(4)

0x3c0: Stack[-1] = 0
0x3c1: Stack[-2] = 0
0x3c2: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3c3: @ GetMainOutdoorScene(Stack[-2])
0x3c4: Pop(0)
0x3c5: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c7: Push("Can't find main outdoor scene") // @poff=522
0x3c8: @ Trace(Stack[-1])
0x3c9: Pop(1)
0x3ca: Return(); Pop(8)

0x3cb: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=589
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: Push("Warning: outdoor scene locator ") // @poff=600
0x3d0: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3d1: Push(" doesnt exist") // @poff=664
0x3d2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d3: @ Trace(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ GetMap(Stack[-11]); Obj=2 // @poff=582
0x3d6: Pop(0)
0x3d7: Pop(0); PushNull((bool) Stack[-11] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d9: Push("Can't find map") // @poff=692
0x3da: @ Trace(Stack[-1])
0x3db: Pop(1)
0x3dc: Return(); Pop(8)

0x3dd: Push(CvectorIndex(Stack[-4], 0))
0x3de: Push(CvectorIndex(Stack[-5], 2))
0x3df: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=722
0x3e0: Pop(2)
0x3e1: Return(); Pop(8)

0x3e2: Stack[-2] = 0
0x3e3: PushEmpty(int, int)
0x3e4: Push("branch") // @poff=735
0x3e5: @ GetVariable(Stack[-1], Stack[-2])
0x3e6: Pop(1)
0x3e7: Push((int) 0)
0x3e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ea: Stack[-3] = (int) 1
0x3eb: Return(); Pop(2)

0x3ec: GOTO 0x3f2

0x3ed: Push((int) 1)
0x3ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: Stack[-3] = (int) 2
0x3f1: Return(); Pop(2)

0x3f2: Stack[-3] = (int) 3
0x3f3: Return(); Pop(2)

0x3f4: Stack[-1] = (int) 515593
0x3f5: Return(); Pop(0)

0x3f6: Stack[-1] = (int) 512582
0x3f7: Return(); Pop(0)

0x3f8: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=749
0x3f9: Return(); Pop(0)

0x3fa: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=789
0x3fb: Return(); Pop(0)

0x3fc: Stack[-1] = (bool) 0
0x3fd: Return(); Pop(0)

