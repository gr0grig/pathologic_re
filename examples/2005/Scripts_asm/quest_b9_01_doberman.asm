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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:oob9MDoberman1
	W:b9q01
	W:b9q01MDobermanGotoFactory
	W:pt_gmap_factory
	A:AddMark
	W:quest_b9_01
	W:remove_mdoberman
	A:ShowMap
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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e00750070000000476574506f736974696f6e004765744579657348656967687400680065006100640000006f006f00620039004d0044006f006200650072006d0061006e0031000000620039007100300031000000620039007100300031004d0044006f006200650072006d0061006e0047006f0074006f0046006100630074006f00720079000000700074005f0067006d00610070005f0066006100630074006f007200790000004164644d61726b00710075006500730074005f00620039005f00300031000000720065006d006f00760065005f006d0064006f006200650072006d0061006e00000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
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

RunOp = 0x161
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa8 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x159 Vars = (object)
		EVENT_26 Op = 0x18a Vars = (string)
		EVENT_5 Op = 0x192 Vars = ()
		EVENT_6 Op = 0x197 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1ff

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x370

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x372

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35b

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
0x41: Call2 0x243

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
0x4f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x92

0x53: Pop(1)
0x54: Push((int) 521558)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x2db

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x2e7

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 521559)
0x68: Push((int) 22721)
0x69: Push((int) 22720)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: Push((int) 521562)
0x6d: Push((int) -1)
0x6e: Push((int) 22723)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: GOTO 0x74

0x72: Return(); Pop(0)

0x73: GOTO 0x4e

0x74: PushEmpty(bool)
0x75: Call2 0x374

0x76: Pop(0)
0x77: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x78: @ lshWaitForAnimEnd()
0x79: Pop(0)
0x7a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: GOTO 0x82

0x7d: PushEmpty(string)
0x7e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f: Call2 0x254

0x80: Pop(1)
0x81: GOTO 0x78

0x82: GOTO 0x91

0x83: Push("all") // @poff=138
0x84: Push("idle") // @poff=146
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: @ WaitForAnimEnd()
0x88: Pop(0)
0x89: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x91

0x8c: Push("all") // @poff=138
0x8d: Push("idle") // @poff=146
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: GOTO 0x87

0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: PushEmpty(bool)
0x94: Call2 0x374

0x95: Pop(0)
0x96: Pop(1); Push((bool) Stack[-1] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Return(); Pop(0)

0x99: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: PushEmpty(string, bool)
0x9d: Stack[-3] = Stack[-2]
0x9e: Push("") // @poff=102
0x9f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: Stack[-1] = (bool) 0
0xa2: GOTO 0xa4

0xa3: Stack[-1] = (bool) 1
0xa4: Call2 0x25b

0xa5: Pop(2)
0xa6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Push((int) 1)
0xaa: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0xab: PushEmpty()
0xac: Call2 0x261

0xad: Pop(0)
0xae: Push((int) 22720)
0xaf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: PushEmpty(object, object)
0xb2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4: Call2 0x2a6

0xb5: Pop(2)
0xb6: Push((int) 22722)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x2ac

0xbd: Pop(2)
0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x2cb

0xc2: Pop(2)
0xc3: Push((int) 22719)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Neutral" // @poff=89
0xc8: Call2 0x92

0xc9: Pop(1)
0xca: Push((int) 521558)
0xcb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xcc: Pop(1)
0xcd: @@@ ClearReplies(); Obj=0 // @poff=116
0xce: Pop(0)
0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 0
0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x2db

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x2e7

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Stack[-1] = (bool) 1
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: Push((int) 521559)
0xde: Push((int) 22721)
0xdf: Push((int) 22720)
0xe0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe1: Pop(3)
0xe2: Push((int) 521562)
0xe3: Push((int) -1)
0xe4: Push((int) 22723)
0xe5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: Push((int) 22721)
0xe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral" // @poff=89
0xed: Call2 0x92

0xee: Pop(1)
0xef: Push((int) 521560)
0xf0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf1: Pop(1)
0xf2: @@@ ClearReplies(); Obj=0 // @poff=116
0xf3: Pop(0)
0xf4: Push((int) 522279)
0xf5: Push((int) 23434)
0xf6: Push((int) 23433)
0xf7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf8: Pop(3)
0xf9: Push((int) 522272)
0xfa: Push((int) 23426)
0xfb: Push((int) 23425)
0xfc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: Push((int) 23426)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(string)
0x103: Stack[-1] = "Neutral" // @poff=89
0x104: Call2 0x92

0x105: Pop(1)
0x106: Push((int) 522273)
0x107: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x108: Pop(1)
0x109: @@@ ClearReplies(); Obj=0 // @poff=116
0x10a: Pop(0)
0x10b: Push((int) 522274)
0x10c: Push((int) 23431)
0x10d: Push((int) 23427)
0x10e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10f: Pop(3)
0x110: Push((int) 522275)
0x111: Push((int) 23429)
0x112: Push((int) 23428)
0x113: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 23429)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral" // @poff=89
0x11b: Call2 0x92

0x11c: Pop(1)
0x11d: Push((int) 522276)
0x11e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11f: Pop(1)
0x120: @@@ ClearReplies(); Obj=0 // @poff=116
0x121: Pop(0)
0x122: Push((int) 522277)
0x123: Push((int) 23431)
0x124: Push((int) 23430)
0x125: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 23431)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral" // @poff=89
0x12d: Call2 0x92

0x12e: Pop(1)
0x12f: Push((int) 522278)
0x130: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x131: Pop(1)
0x132: @@@ ClearReplies(); Obj=0 // @poff=116
0x133: Pop(0)
0x134: Push((int) 522281)
0x135: Push((int) 23434)
0x136: Push((int) 23435)
0x137: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 23434)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral" // @poff=89
0x13f: Call2 0x92

0x140: Pop(1)
0x141: Push((int) 522280)
0x142: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x143: Pop(1)
0x144: @@@ ClearReplies(); Obj=0 // @poff=116
0x145: Pop(0)
0x146: Push((int) 521561)
0x147: Push((int) -1)
0x148: Push((int) 22722)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14d: PushEmpty(bool)
0x14e: Call2 0x374

0x14f: Pop(0)
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: @ lshStopAnimation()
0x152: Pop(0)
0x153: GOTO 0x156

0x154: @ StopAnimation()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: GOTO 0xa9

0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: PushEmpty(int, object)
0x15b: Stack[-3] = Stack[-1]
0x15c: Push(-2, 1); TaskCall(0)
0x15d: Call2 0x0

0x15e: Pop(-2, 1); TaskReturn
0x15f: Pop(2)
0x160: Return(); Pop(0)

0x161: PushEmpty(float, float)
0x162: PushEmpty(bool)
0x163: Call2 0x1fa

0x164: Pop(0)
0x165: Pop(1); Push((bool) Stack[-1] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: @ Hold()
0x168: Pop(0)
0x169: GOTO 0x162

0x16a: Push((int) 3)
0x16b: @ rand(Stack[-2], Stack[-1])
0x16c: Pop(1)
0x16d: Push((int) 3)
0x16e: Pop(1); Push(Stack[-2] + Stack[-1]);
0x16f: @ Sleep(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty()
0x172: Call2 0x1a9

0x173: Pop(0)
0x174: GOTO 0x162

0x175: Return(); Pop(2)

0x176: PushEmpty(bool, bool)
0x177: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x178: @ IsLoaded(Stack[-1])
0x179: Pop(0)
0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: Pop(0); Push((bool) Stack[-2] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(bool)
0x17f: Call2 0x1a7

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Stack[-1] = (bool) 1
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Call2 0x268

0x186: Pop(0)
0x187: @ RemoveActor(Stack[-1])
0x188: Pop(1)
0x189: Return(); Pop(2)

0x18a: PushEmpty()
0x18b: Push("cleanup") // @poff=156
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0x176

0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: @ StopGroup0()
0x193: Pop(0)
0x194: @ sync()
0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x1a7

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Call2 0x268

0x1a3: Pop(0)
0x1a4: @ RemoveActor(Stack[-1])
0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: Stack[-1] = (bool) 1
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x1fa

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(14)

0x1b2: PushEmpty(int)
0x1b3: Call2 0x295

0x1b4: Stack[-1] = Stack[-8]
0x1b5: Pop(1)
0x1b6: Stack[-6] = (int) 0
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 0
0x1b9: Push((int) 5)
0x1ba: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x1fa

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1c2: Push((int) 3)
0x1c3: @ irand(Stack[-6], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push((int) 0)
0x1c6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c8: Push(Stack[-7])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ca: @ irand(Stack[-4], Stack[-7])
0x1cb: Pop(0)
0x1cc: Push("all") // @poff=138
0x1cd: PushEmpty(string, int)
0x1ce: Stack[-7] = Stack[-1]
0x1cf: Call2 0x28e

0x1d0: Pop(1)
0x1d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: @ WaitForAnimEnd(Stack[-3])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-3] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1f5

0x1d8: GOTO 0x1ea

0x1d9: Push((int) 1)
0x1da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1dc: Push((int) 4)
0x1dd: @ rand(Stack[-3], Stack[-1])
0x1de: Pop(1)
0x1df: Push((int) 1)
0x1e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e1: @ Sleep(Stack[-1], Stack[-2])
0x1e2: Pop(1)
0x1e3: Pop(0); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x1f5

0x1e6: GOTO 0x1ea

0x1e7: Push(Stack[-6])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: GOTO 0x1f5

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x1f8

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x1f5

0x1f0: @ ResetAAS()
0x1f1: Pop(0)
0x1f2: Push((int) 1)
0x1f3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f4: GOTO 0x1b7

0x1f5: @ ResetAAS()
0x1f6: Pop(0)
0x1f7: Return(); Pop(14)

0x1f8: Stack[-1] = (bool) 1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(bool, bool)
0x1fb: @ IsLoaded(Stack[-1])
0x1fc: Pop(0)
0x1fd: Stack[-1] = Stack[-3]
0x1fe: Return(); Pop(2)

0x1ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x200: @@ GetPosition(Stack[-8]); Obj=20 // @poff=172
0x201: Pop(0)
0x202: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=184
0x203: Pop(0)
0x204: Push(CvectorIndex(Stack[-8], 1))
0x205: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x206: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x207: @ GetPosition(Stack[-7])
0x208: Pop(0)
0x209: @ GetEyesHeight(Stack[-9])
0x20a: Pop(0)
0x20b: Push(CvectorIndex(Stack[-7], 1))
0x20c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x20e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x20f: Push(CvectorIndex(Stack[-6], 1))
0x210: Stack[-1] = (int) 0
0x211: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x212: Pop(0); Push(Stack[-6] | Stack[-6]);
0x213: Pop(1); Push(Sqrt(Stack[-1]))
0x214: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x215: Stack[-5] = -Stack[-6]; Pop(0);
0x216: Pop(0); Push(Stack[-6] * Stack[-19]);
0x217: PushEmpty(cvector, cvector)
0x218: Push([0.0, 1.0, 0.0])
0x219: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x21a: Call2 0x26e

0x21b: Pop(1)
0x21c: Push((int) 25)
0x21d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21f: Push([0.0, 10.0, 0.0])
0x220: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x221: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x222: @ IsOverrideActive(Stack[-2])
0x223: Pop(0)
0x224: Push(Stack[-2])
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-21] = (bool) 0
0x227: Return(); Pop(18)

0x228: @ StopWorld()
0x229: Pop(0)
0x22a: @ CameraTransit(Stack[-3], Stack[-5])
0x22b: Pop(0)
0x22c: Push(CvectorIndex(Stack[-4], 0))
0x22d: Push(CvectorIndex(Stack[-5], 2))
0x22e: @ Rotate(Stack[-2], Stack[-1])
0x22f: Pop(2)
0x230: PushEmpty(bool)
0x231: Call2 0x374

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x23d

0x235: Push("head") // @poff=198
0x236: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x237: Pop(1)
0x238: Push(Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23a: Push("head") // @poff=198
0x23b: @ LookAsyncCamera(Stack[-1])
0x23c: Pop(1)
0x23d: @ CameraWaitForPlayFinish()
0x23e: Pop(0)
0x23f: @ ResumeWorld()
0x240: Pop(0)
0x241: Stack[-21] = (bool) 1
0x242: Return(); Pop(18)

0x243: PushEmpty(bool, bool)
0x244: @ CameraSwitchToNormal()
0x245: Pop(0)
0x246: PushEmpty(bool)
0x247: Call2 0x374

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x253

0x24b: Push("head") // @poff=198
0x24c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24d: Pop(1)
0x24e: Push(Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x250: Push("head") // @poff=198
0x251: @ UnlookAsync(Stack[-1])
0x252: Pop(1)
0x253: Return(); Pop(2)

0x254: PushEmpty(float, float, float, float)
0x255: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x256: Pop(0)
0x257: Push((bool) 0)
0x258: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(1)
0x25a: Return(); Pop(4)

0x25b: PushEmpty(float, float, float, float)
0x25c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x25d: Pop(0)
0x25e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x25f: Pop(0)
0x260: Return(); Pop(4)

0x261: PushEmpty(bool)
0x262: Call2 0x374

0x263: Pop(0)
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: @ lshStopSpeech()
0x266: Pop(0)
0x267: Return(); Pop(0)

0x268: PushEmpty(object, object)
0x269: @ self(Stack[-1])
0x26a: Pop(0)
0x26b: Stack[-1] = Stack[-3]
0x26c: Return(); Pop(2)

0x26d: Stack[-1] = 0
0x26e: PushEmpty(float, float)
0x26f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x270: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x271: Push((float)9.999999974752427e-07)
0x272: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: Stack[-4] = [0.0, 0.0, 0.0]
0x275: Return(); Pop(2)

0x276: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x277: Return(); Pop(2)

0x278: PushEmpty(int, int)
0x279: @ GetVariable(Stack[-3], Stack[-1])
0x27a: Pop(0)
0x27b: Stack[-1] = Stack[-4]
0x27c: Return(); Pop(2)

0x27d: PushEmpty(object, object)
0x27e: @ FindActor(Stack[-1], Stack[-4])
0x27f: Pop(0)
0x280: Pop(0); PushNull((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-5] = (bool) 0
0x283: Return(); Pop(2)

0x284: @ Trigger(Stack[-1], Stack[-3])
0x285: Pop(0)
0x286: Stack[-5] = (bool) 1
0x287: Return(); Pop(2)

0x288: Stack[-1] = 0
0x289: PushEmpty(float, float)
0x28a: @ GetGameTime(Stack[-1])
0x28b: Pop(0)
0x28c: Stack[-1] = Stack[-3]
0x28d: Return(); Pop(2)

0x28e: PushEmpty(string, string)
0x28f: Stack[-1] = "idle" // @poff=146
0x290: Push(Stack[-3])
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x293: Stack[-1] = Stack[-4]
0x294: Return(); Pop(2)

0x295: PushEmpty(int, bool, int, bool)
0x296: Stack[-2] = (int) 0
0x297: Push("all") // @poff=138
0x298: PushEmpty(string, int)
0x299: Stack[-5] = Stack[-1]
0x29a: Call2 0x28e

0x29b: Pop(1)
0x29c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: Pop(0); Push((bool) Stack[-1] == 0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: GOTO 0x2a4

0x2a1: Push((int) 1)
0x2a2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a3: GOTO 0x297

0x2a4: Stack[-2] = Stack[-5]
0x2a5: Return(); Pop(4)

0x2a6: PushEmpty()
0x2a7: Push("oob9MDoberman1") // @poff=208
0x2a8: Push((int) 1)
0x2a9: @ SetVariable(Stack[-2], Stack[-1])
0x2aa: Pop(2)
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(object, object)
0x2ad: PushEmpty(int, string)
0x2ae: Stack[-1] = "b9q01" // @poff=238
0x2af: Call2 0x278

0x2b0: Pop(1)
0x2b1: Push((int) 2)
0x2b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2b4: PushEmpty(object)
0x2b5: Call2 0x329

0x2b6: Stack[-1] = Stack[-2]
0x2b7: Pop(1)
0x2b8: Push("b9q01MDobermanGotoFactory") // @poff=250
0x2b9: Push("pt_gmap_factory") // @poff=302
0x2ba: Push((int) 1)
0x2bb: Push((int) 530198)
0x2bc: PushEmpty(float)
0x2bd: Call2 0x289

0x2be: Pop(0)
0x2bf: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=334
0x2c0: Pop(5)
0x2c1: PushEmpty()
0x2c2: Call2 0x2f3

0x2c3: Pop(0)
0x2c4: PushEmpty(bool, string, string)
0x2c5: Stack[-2] = "quest_b9_01" // @poff=342
0x2c6: Stack[-1] = "remove_mdoberman" // @poff=366
0x2c7: Call2 0x27d

0x2c8: Pop(3)
0x2c9: Stack[-1] = 0
0x2ca: Return(); Pop(2)

0x2cb: PushEmpty()
0x2cc: PushEmpty(object, string, float)
0x2cd: PushEmpty(object)
0x2ce: Call2 0x329

0x2cf: Stack[-1] = Stack[-4]
0x2d0: Pop(1)
0x2d1: Stack[-2] = "pt_gmap_factory" // @poff=302
0x2d2: Stack[-1] = (int) 2
0x2d3: Call2 0x33a

0x2d4: Pop(3)
0x2d5: PushEmpty(object)
0x2d6: Call2 0x329

0x2d7: Pop(0)
0x2d8: @@ ShowMap(Stack[-1]); Obj=2 // @poff=400
0x2d9: Pop(1)
0x2da: Return(); Pop(0)

0x2db: PushEmpty()
0x2dc: PushEmpty(int, string)
0x2dd: Stack[-1] = "b9q01" // @poff=238
0x2de: Call2 0x278

0x2df: Pop(1)
0x2e0: Push((int) 2)
0x2e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-2] = (bool) 1
0x2e4: Return(); Pop(0)

0x2e5: Stack[-2] = (bool) 0
0x2e6: Return(); Pop(0)

0x2e7: PushEmpty()
0x2e8: PushEmpty(int, string)
0x2e9: Stack[-1] = "oob9MDoberman1" // @poff=208
0x2ea: Call2 0x278

0x2eb: Pop(1)
0x2ec: Push((int) 0)
0x2ed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: Stack[-2] = (bool) 1
0x2f0: Return(); Pop(0)

0x2f1: Stack[-2] = (bool) 0
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(object, object)
0x2f4: Push((int) 300)
0x2f5: Push((int) 1)
0x2f6: Push((int) 521615)
0x2f7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: PushEmpty(bool, object, int)
0x2fa: Stack[-4] = Stack[-2]
0x2fb: Stack[-1] = (int) 297
0x2fc: Call2 0x30d

0x2fd: Pop(3)
0x2fe: Return(); Pop(2)

0x2ff: Stack[-1] = 0
0x300: PushEmpty(object, object)
0x301: @ GetDiaryRoot(Stack[-1])
0x302: Pop(0)
0x303: Pop(0); Push((bool) Stack[-1] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x305: Push("Can't retrieve diary root") // @poff=408
0x306: @ Trace(Stack[-1])
0x307: Pop(1)
0x308: Stack[-3] = (bool) 0
0x309: Return(); Pop(2)

0x30a: Stack[-1] = Stack[-3]
0x30b: Return(); Pop(2)

0x30c: Stack[-1] = 0
0x30d: PushEmpty(object, object, int, object, object, int)
0x30e: PushEmpty(object)
0x30f: Call2 0x300

0x310: Stack[-1] = Stack[-4]
0x311: Pop(1)
0x312: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=460
0x313: Pop(0)
0x314: Pop(0); Push((bool) Stack[-2] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: Push("Can't find diary parent with id: ") // @poff=465
0x317: Pop(1); Push(Stack[-1] + Stack[-8]);
0x318: @ Trace(Stack[-1])
0x319: Pop(1)
0x31a: Stack[-9] = (bool) 0
0x31b: Return(); Pop(6)

0x31c: @@ AddChild(Stack[-8]); Obj=2 // @poff=533
0x31d: Pop(0)
0x31e: Push((int) 7)
0x31f: @ SendWorldWndMessage(Stack[-1])
0x320: Pop(1)
0x321: @@ GetCategory(Stack[-1]); Obj=8 // @poff=542
0x322: Pop(0)
0x323: @ SetDiarySection(Stack[-1])
0x324: Pop(0)
0x325: Stack[-9] = (bool) 0
0x326: Return(); Pop(6)

0x327: Stack[-2] = 0
0x328: Stack[-3] = 0
0x329: PushEmpty(object, object, object, object)
0x32a: @ GetMainOutdoorScene(Stack[-2])
0x32b: Pop(0)
0x32c: Pop(0); PushNull((bool) Stack[-2] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32e: Push("Can't find main outdoor scene") // @poff=554
0x32f: @ Trace(Stack[-1])
0x330: Pop(1)
0x331: Stack[-1] = 0
0x332: Stack[-1] = Stack[-5]
0x333: Return(); Pop(4)

0x334: @@ GetMap(Stack[-1]); Obj=2 // @poff=614
0x335: Pop(0)
0x336: Stack[-1] = Stack[-5]
0x337: Return(); Pop(4)

0x338: Stack[-1] = 0
0x339: Stack[-2] = 0
0x33a: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x33b: @ GetMainOutdoorScene(Stack[-2])
0x33c: Pop(0)
0x33d: Pop(0); PushNull((bool) Stack[-2] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33f: Push("Can't find main outdoor scene") // @poff=554
0x340: @ Trace(Stack[-1])
0x341: Pop(1)
0x342: Return(); Pop(8)

0x343: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=621
0x344: Pop(0)
0x345: Pop(0); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x347: Push("Warning: outdoor scene locator ") // @poff=632
0x348: Pop(1); Push(Stack[-1] + Stack[-11]);
0x349: Push(" doesnt exist") // @poff=696
0x34a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34b: @ Trace(Stack[-1])
0x34c: Pop(1)
0x34d: @@ GetMap(Stack[-11]); Obj=2 // @poff=614
0x34e: Pop(0)
0x34f: Pop(0); PushNull((bool) Stack[-11] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x351: Push("Can't find map") // @poff=724
0x352: @ Trace(Stack[-1])
0x353: Pop(1)
0x354: Return(); Pop(8)

0x355: Push(CvectorIndex(Stack[-4], 0))
0x356: Push(CvectorIndex(Stack[-5], 2))
0x357: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=754
0x358: Pop(2)
0x359: Return(); Pop(8)

0x35a: Stack[-2] = 0
0x35b: PushEmpty(int, int)
0x35c: Push("branch") // @poff=767
0x35d: @ GetVariable(Stack[-1], Stack[-2])
0x35e: Pop(1)
0x35f: Push((int) 0)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x362: Stack[-3] = (int) 1
0x363: Return(); Pop(2)

0x364: GOTO 0x36a

0x365: Push((int) 1)
0x366: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-3] = (int) 2
0x369: Return(); Pop(2)

0x36a: Stack[-3] = (int) 3
0x36b: Return(); Pop(2)

0x36c: Stack[-1] = (int) 518097
0x36d: Return(); Pop(0)

0x36e: Stack[-1] = (int) 518096
0x36f: Return(); Pop(0)

0x370: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=781
0x371: Return(); Pop(0)

0x372: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=821
0x373: Return(); Pop(0)

0x374: Stack[-1] = (bool) 0
0x375: Return(); Pop(0)

