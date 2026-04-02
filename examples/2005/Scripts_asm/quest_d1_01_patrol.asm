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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:d1q01
	W:d1q01PatrolGotoAlexandr
	W:pt_map_alexandr
	A:AddMark
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e00670000006400310071003000310000006400310071003000310050006100740072006f006c0047006f0074006f0041006c006500780061006e00640072000000700074005f006d00610070005f0061006c006500780061006e006400720000004164644d61726b0053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x16c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x172 Vars = (object)
		EVENT_26 Op = 0x1aa Vars = (string)
		EVENT_5 Op = 0x1b2 Vars = ()
		EVENT_6 Op = 0x1b7 Vars = ()
		EVENT_7 Op = 0x1f6 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x27e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x326

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x324

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x328

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x32a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3c9

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
0x41: Call2 0x2c2

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x355

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 531679)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 533040)
0x5f: Push((int) 34551)
0x60: Push((int) 34550)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 533055)
0x64: Push((int) 34553)
0x65: Push((int) 34561)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 531681)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 531682)
0x73: Push((int) -1)
0x74: Push((int) 33066)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 533033)
0x78: Push((int) -1)
0x79: Push((int) 34543)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x32c

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2d3

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
0x9f: Call2 0x32c

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
0xaf: Call2 0x2da

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2eb

0xb8: Pop(0)
0xb9: Push((int) 33064)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x32e

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x345

0xc5: Pop(2)
0xc6: Push((int) 33063)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x355

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 531679)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 533040)
0xd8: Push((int) 34551)
0xd9: Push((int) 34550)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 533055)
0xdd: Push((int) 34553)
0xde: Push((int) 34561)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 531681)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 531682)
0xec: Push((int) -1)
0xed: Push((int) 33066)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Push((int) 533033)
0xf1: Push((int) -1)
0xf2: Push((int) 34543)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 34551)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral" // @poff=89
0xfb: Call2 0x9d

0xfc: Pop(1)
0xfd: Push((int) 533041)
0xfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xff: Pop(1)
0x100: @@@ ClearReplies(); Obj=0 // @poff=116
0x101: Pop(0)
0x102: Push((int) 533042)
0x103: Push((int) 34553)
0x104: Push((int) 34552)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 533056)
0x108: Push((int) 34545)
0x109: Push((int) 34562)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 34553)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral" // @poff=89
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 533043)
0x115: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x116: Pop(1)
0x117: @@@ ClearReplies(); Obj=0 // @poff=116
0x118: Pop(0)
0x119: Push((int) 533034)
0x11a: Push((int) 34545)
0x11b: Push((int) 34544)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Push((int) 533058)
0x11f: Push((int) 34547)
0x120: Push((int) 34567)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 34545)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=89
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 533035)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=116
0x12f: Pop(0)
0x130: Push((int) 533036)
0x131: Push((int) 34547)
0x132: Push((int) 34546)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 34547)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0x9d

0x13c: Pop(1)
0x13d: Push((int) 533037)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 533038)
0x143: Push((int) 34549)
0x144: Push((int) 34548)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Push((int) 533059)
0x148: Push((int) 34549)
0x149: Push((int) 34569)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 34549)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0x9d

0x153: Pop(1)
0x154: Push((int) 533039)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 531680)
0x15a: Push((int) -1)
0x15b: Push((int) 33064)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x160: PushEmpty(bool)
0x161: Call2 0x32c

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: @ lshStopAnimation()
0x165: Pop(0)
0x166: GOTO 0x169

0x167: @ StopAnimation()
0x168: Pop(0)
0x169: Return(); Pop(0)

0x16a: GOTO 0xb4

0x16b: Return(); Pop(0)

0x16c: PushEmpty(float, float)
0x16d: Stack[-2] = (int) 300
0x16e: Stack[-1] = (int) 100
0x16f: Call2 0x17d

0x170: Pop(2)
0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty()
0x174: Call2 0x20d

0x175: Pop(0)
0x176: PushEmpty(int, object)
0x177: Stack[-3] = Stack[-1]
0x178: Push(-2, 1); TaskCall(0)
0x179: Call2 0x0

0x17a: Pop(-2, 1); TaskReturn
0x17b: Pop(2)
0x17c: Return(); Pop(0)

0x17d: PushEmpty(float, float)
0x17e: PushEmpty(bool)
0x17f: Call2 0x279

0x180: Pop(0)
0x181: Pop(1); Push((bool) Stack[-1] == 0)
0x182: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x183: @ Hold()
0x184: Pop(0)
0x185: GOTO 0x17e

0x186: Push((int) 3)
0x187: @ rand(Stack[-2], Stack[-1])
0x188: Pop(1)
0x189: Push((int) 3)
0x18a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x18b: @ Sleep(Stack[-1])
0x18c: Pop(1)
0x18d: PushEmpty(float, float)
0x18e: Stack[-6] = Stack[-2]
0x18f: Stack[-5] = Stack[-1]
0x190: Call2 0x1cc

0x191: Pop(2)
0x192: @ sync()
0x193: Pop(0)
0x194: GOTO 0x17e

0x195: Return(); Pop(2)

0x196: PushEmpty(bool, bool)
0x197: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x198: @ IsLoaded(Stack[-1])
0x199: Pop(0)
0x19a: PushEmpty(bool)
0x19b: Stack[-1] = (bool) 0
0x19c: Pop(0); Push((bool) Stack[-2] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(bool)
0x19f: Call2 0x1ca

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: PushEmpty(object)
0x1a5: Call2 0x2f2

0x1a6: Pop(0)
0x1a7: @ RemoveActor(Stack[-1])
0x1a8: Pop(1)
0x1a9: Return(); Pop(2)

0x1aa: PushEmpty()
0x1ab: Push("cleanup") // @poff=156
0x1ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ae: PushEmpty()
0x1af: Call2 0x196

0x1b0: Pop(0)
0x1b1: Return(); Pop(0)

0x1b2: @ StopGroup0()
0x1b3: Pop(0)
0x1b4: @ sync()
0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: Call2 0x20d

0x1b9: Pop(0)
0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 0
0x1bc: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: PushEmpty(bool)
0x1bf: Call2 0x1ca

0x1c0: Pop(0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Stack[-1] = (bool) 1
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c4: PushEmpty(object)
0x1c5: Call2 0x2f2

0x1c6: Pop(0)
0x1c7: @ RemoveActor(Stack[-1])
0x1c8: Pop(1)
0x1c9: Return(); Pop(0)

0x1ca: Stack[-1] = (bool) 1
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: PushEmpty(bool)
0x1ce: Call2 0x279

0x1cf: Pop(0)
0x1d0: Pop(1); Push((bool) Stack[-1] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Return(); Pop(0)

0x1d3: Push("player") // @poff=172
0x1d4: @ FindActor(Stack[-4]T, Stack[-1])
0x1d5: Pop(1)
0x1d6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d8: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1da: Push((int) 10)
0x1db: Push((float)1.0)
0x1dc: @ SetTimer(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: PushEmpty()
0x1df: Call2 0x21b

0x1e0: Pop(0)
0x1e1: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e3: Push((int) 10)
0x1e4: @ KillTimer(Stack[-1])
0x1e5: Pop(1)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(float, float)
0x1e8: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ea: Stack[-3] = (bool) 0
0x1eb: Return(); Pop(2)

0x1ec: PushEmpty(float, object)
0x1ed: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ee: Call2 0x271

0x1ef: Pop(1)
0x1f0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f4: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f5: Return(); Pop(2)

0x1f6: PushEmpty()
0x1f7: Push((int) 10)
0x1f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fa: PushEmpty(bool)
0x1fb: Call2 0x1e7

0x1fc: Pop(0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fe: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(object)
0x201: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x202: Call2 0x2e0

0x203: Pop(1)
0x204: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x205: GOTO 0x20c

0x206: Push( Stack[2 + Tasks[-1].StackPointer] )
0x207: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x208: Push("head") // @poff=186
0x209: @ UnlookAsync(Stack[-1])
0x20a: Pop(1)
0x20b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Call2 0x26c

0x20f: Pop(0)
0x210: Push((int) 10)
0x211: @ KillTimer(Stack[-1])
0x212: Pop(1)
0x213: Push( Stack[2 + Tasks[-1].StackPointer] )
0x214: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x215: Push("head") // @poff=186
0x216: @ UnlookAsync(Stack[-1])
0x217: Pop(1)
0x218: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x219: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21a: Return(); Pop(0)

0x21b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x21c: @ WaitForAnimEnd()
0x21d: Pop(0)
0x21e: PushEmpty(bool)
0x21f: Call2 0x279

0x220: Pop(0)
0x221: Pop(1); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Return(); Pop(14)

0x224: PushEmpty(int)
0x225: Call2 0x313

0x226: Stack[-1] = Stack[-8]
0x227: Pop(1)
0x228: Stack[-6] = (int) 0
0x229: PushEmpty(bool)
0x22a: Stack[-1] = (bool) 0
0x22b: Push((int) 5)
0x22c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x279

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x234: Push((int) 3)
0x235: @ irand(Stack[-6], Stack[-1])
0x236: Pop(1)
0x237: Push((int) 0)
0x238: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x23a: Push(Stack[-7])
0x23b: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23c: @ irand(Stack[-4], Stack[-7])
0x23d: Pop(0)
0x23e: Push("all") // @poff=138
0x23f: PushEmpty(string, int)
0x240: Stack[-7] = Stack[-1]
0x241: Call2 0x30c

0x242: Pop(1)
0x243: @ PlayAnimation(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: @ WaitForAnimEnd(Stack[-3])
0x246: Pop(0)
0x247: Pop(0); Push((bool) Stack[-3] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x267

0x24a: GOTO 0x25c

0x24b: Push((int) 1)
0x24c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24e: Push((int) 4)
0x24f: @ rand(Stack[-3], Stack[-1])
0x250: Pop(1)
0x251: Push((int) 1)
0x252: Pop(1); Push(Stack[-3] + Stack[-1]);
0x253: @ Sleep(Stack[-1], Stack[-2])
0x254: Pop(1)
0x255: Pop(0); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x267

0x258: GOTO 0x25c

0x259: Push(Stack[-6])
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x267

0x25c: PushEmpty(bool)
0x25d: Call2 0x26a

0x25e: Pop(0)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x267

0x262: @ ResetAAS()
0x263: Pop(0)
0x264: Push((int) 1)
0x265: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x266: GOTO 0x229

0x267: @ ResetAAS()
0x268: Pop(0)
0x269: Return(); Pop(14)

0x26a: Stack[-1] = (bool) 1
0x26b: Return(); Pop(0)

0x26c: @ StopAnimation()
0x26d: Pop(0)
0x26e: @ StopGroup0()
0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x272: @ GetPosition(Stack[-3])
0x273: Pop(0)
0x274: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x275: Pop(0)
0x276: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x277: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x278: Return(); Pop(6)

0x279: PushEmpty(bool, bool)
0x27a: @ IsLoaded(Stack[-1])
0x27b: Pop(0)
0x27c: Stack[-1] = Stack[-3]
0x27d: Return(); Pop(2)

0x27e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x27f: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x280: Pop(0)
0x281: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x282: Pop(0)
0x283: Push(CvectorIndex(Stack[-8], 1))
0x284: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x285: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x286: @ GetPosition(Stack[-7])
0x287: Pop(0)
0x288: @ GetEyesHeight(Stack[-9])
0x289: Pop(0)
0x28a: Push(CvectorIndex(Stack[-7], 1))
0x28b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x28d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x28e: Push(CvectorIndex(Stack[-6], 1))
0x28f: Stack[-1] = (int) 0
0x290: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x291: Pop(0); Push(Stack[-6] | Stack[-6]);
0x292: Pop(1); Push(Sqrt(Stack[-1]))
0x293: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x294: Stack[-5] = -Stack[-6]; Pop(0);
0x295: Pop(0); Push(Stack[-6] * Stack[-19]);
0x296: PushEmpty(cvector, cvector)
0x297: Push([0.0, 1.0, 0.0])
0x298: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x299: Call2 0x2f8

0x29a: Pop(1)
0x29b: Push((int) 25)
0x29c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29e: Push([0.0, 10.0, 0.0])
0x29f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a1: @ IsOverrideActive(Stack[-2])
0x2a2: Pop(0)
0x2a3: Push(Stack[-2])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: Stack[-21] = (bool) 0
0x2a6: Return(); Pop(18)

0x2a7: @ StopWorld()
0x2a8: Pop(0)
0x2a9: @ CameraTransit(Stack[-3], Stack[-5])
0x2aa: Pop(0)
0x2ab: Push(CvectorIndex(Stack[-4], 0))
0x2ac: Push(CvectorIndex(Stack[-5], 2))
0x2ad: @ Rotate(Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: PushEmpty(bool)
0x2b0: Call2 0x32c

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: GOTO 0x2bc

0x2b4: Push("head") // @poff=186
0x2b5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b6: Pop(1)
0x2b7: Push(Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b9: Push("head") // @poff=186
0x2ba: @ LookAsyncCamera(Stack[-1])
0x2bb: Pop(1)
0x2bc: @ CameraWaitForPlayFinish()
0x2bd: Pop(0)
0x2be: @ ResumeWorld()
0x2bf: Pop(0)
0x2c0: Stack[-21] = (bool) 1
0x2c1: Return(); Pop(18)

0x2c2: PushEmpty(bool, bool)
0x2c3: @ CameraSwitchToNormal()
0x2c4: Pop(0)
0x2c5: PushEmpty(bool)
0x2c6: Call2 0x32c

0x2c7: Pop(0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2d2

0x2ca: Push("head") // @poff=186
0x2cb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cc: Pop(1)
0x2cd: Push(Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cf: Push("head") // @poff=186
0x2d0: @ UnlookAsync(Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(float, float, float, float)
0x2d4: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2d5: Pop(0)
0x2d6: Push((bool) 0)
0x2d7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(1)
0x2d9: Return(); Pop(4)

0x2da: PushEmpty(float, float, float, float)
0x2db: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2dc: Pop(0)
0x2dd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2de: Pop(0)
0x2df: Return(); Pop(4)

0x2e0: PushEmpty(float, cvector, float, cvector)
0x2e1: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2e2: Pop(0)
0x2e3: Stack[-1] = [0.0, 0.0, 0.0]
0x2e4: Push(CvectorIndex(Stack[-1], 1))
0x2e5: Stack[-3] = Stack[-1]
0x2e6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e7: Push("head") // @poff=186
0x2e8: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2e9: Pop(1)
0x2ea: Return(); Pop(4)

0x2eb: PushEmpty(bool)
0x2ec: Call2 0x32c

0x2ed: Pop(0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: @ lshStopSpeech()
0x2f0: Pop(0)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty(object, object)
0x2f3: @ self(Stack[-1])
0x2f4: Pop(0)
0x2f5: Stack[-1] = Stack[-3]
0x2f6: Return(); Pop(2)

0x2f7: Stack[-1] = 0
0x2f8: PushEmpty(float, float)
0x2f9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2fb: Push((float)9.999999974752427e-07)
0x2fc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-4] = [0.0, 0.0, 0.0]
0x2ff: Return(); Pop(2)

0x300: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x301: Return(); Pop(2)

0x302: PushEmpty(int, int)
0x303: @ GetVariable(Stack[-3], Stack[-1])
0x304: Pop(0)
0x305: Stack[-1] = Stack[-4]
0x306: Return(); Pop(2)

0x307: PushEmpty(float, float)
0x308: @ GetGameTime(Stack[-1])
0x309: Pop(0)
0x30a: Stack[-1] = Stack[-3]
0x30b: Return(); Pop(2)

0x30c: PushEmpty(string, string)
0x30d: Stack[-1] = "idle" // @poff=146
0x30e: Push(Stack[-3])
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x311: Stack[-1] = Stack[-4]
0x312: Return(); Pop(2)

0x313: PushEmpty(int, bool, int, bool)
0x314: Stack[-2] = (int) 0
0x315: Push("all") // @poff=138
0x316: PushEmpty(string, int)
0x317: Stack[-5] = Stack[-1]
0x318: Call2 0x30c

0x319: Pop(1)
0x31a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: Pop(0); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: GOTO 0x322

0x31f: Push((int) 1)
0x320: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x321: GOTO 0x315

0x322: Stack[-2] = Stack[-5]
0x323: Return(); Pop(4)

0x324: Stack[-1] = (int) 515572
0x325: Return(); Pop(0)

0x326: Stack[-1] = (int) 504031
0x327: Return(); Pop(0)

0x328: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=222
0x329: Return(); Pop(0)

0x32a: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=262
0x32b: Return(); Pop(0)

0x32c: Stack[-1] = (bool) 0
0x32d: Return(); Pop(0)

0x32e: PushEmpty(object, object)
0x32f: Push("d1q01") // @poff=306
0x330: Push((int) 3)
0x331: @ SetVariable(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: PushEmpty(object)
0x334: Call2 0x397

0x335: Stack[-1] = Stack[-2]
0x336: Pop(1)
0x337: Push("d1q01PatrolGotoAlexandr") // @poff=318
0x338: Push("pt_map_alexandr") // @poff=366
0x339: Push((int) 1)
0x33a: Push((int) 508632)
0x33b: PushEmpty(float)
0x33c: Call2 0x307

0x33d: Pop(0)
0x33e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=398
0x33f: Pop(5)
0x340: PushEmpty()
0x341: Call2 0x361

0x342: Pop(0)
0x343: Return(); Pop(2)

0x344: Stack[-1] = 0
0x345: PushEmpty()
0x346: PushEmpty(object, string, float)
0x347: PushEmpty(object)
0x348: Call2 0x397

0x349: Stack[-1] = Stack[-4]
0x34a: Pop(1)
0x34b: Stack[-2] = "pt_map_alexandr" // @poff=366
0x34c: Stack[-1] = (int) 2
0x34d: Call2 0x3a8

0x34e: Pop(3)
0x34f: PushEmpty(object)
0x350: Call2 0x397

0x351: Pop(0)
0x352: @@ ShowMap(Stack[-1]); Obj=2 // @poff=406
0x353: Pop(1)
0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: PushEmpty(int, string)
0x357: Stack[-1] = "d1q01" // @poff=306
0x358: Call2 0x302

0x359: Pop(1)
0x35a: Push((int) 2)
0x35b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-2] = (bool) 1
0x35e: Return(); Pop(0)

0x35f: Stack[-2] = (bool) 0
0x360: Return(); Pop(0)

0x361: PushEmpty(object, object)
0x362: Push((int) 33)
0x363: Push((int) 1)
0x364: Push((int) 512115)
0x365: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: PushEmpty(bool, object, int)
0x368: Stack[-4] = Stack[-2]
0x369: Stack[-1] = (int) 2
0x36a: Call2 0x37b

0x36b: Pop(3)
0x36c: Return(); Pop(2)

0x36d: Stack[-1] = 0
0x36e: PushEmpty(object, object)
0x36f: @ GetDiaryRoot(Stack[-1])
0x370: Pop(0)
0x371: Pop(0); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x373: Push("Can't retrieve diary root") // @poff=414
0x374: @ Trace(Stack[-1])
0x375: Pop(1)
0x376: Stack[-3] = (bool) 0
0x377: Return(); Pop(2)

0x378: Stack[-1] = Stack[-3]
0x379: Return(); Pop(2)

0x37a: Stack[-1] = 0
0x37b: PushEmpty(object, object, int, object, object, int)
0x37c: PushEmpty(object)
0x37d: Call2 0x36e

0x37e: Stack[-1] = Stack[-4]
0x37f: Pop(1)
0x380: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=466
0x381: Pop(0)
0x382: Pop(0); Push((bool) Stack[-2] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x384: Push("Can't find diary parent with id: ") // @poff=471
0x385: Pop(1); Push(Stack[-1] + Stack[-8]);
0x386: @ Trace(Stack[-1])
0x387: Pop(1)
0x388: Stack[-9] = (bool) 0
0x389: Return(); Pop(6)

0x38a: @@ AddChild(Stack[-8]); Obj=2 // @poff=539
0x38b: Pop(0)
0x38c: Push((int) 7)
0x38d: @ SendWorldWndMessage(Stack[-1])
0x38e: Pop(1)
0x38f: @@ GetCategory(Stack[-1]); Obj=8 // @poff=548
0x390: Pop(0)
0x391: @ SetDiarySection(Stack[-1])
0x392: Pop(0)
0x393: Stack[-9] = (bool) 0
0x394: Return(); Pop(6)

0x395: Stack[-2] = 0
0x396: Stack[-3] = 0
0x397: PushEmpty(object, object, object, object)
0x398: @ GetMainOutdoorScene(Stack[-2])
0x399: Pop(0)
0x39a: Pop(0); PushNull((bool) Stack[-2] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39c: Push("Can't find main outdoor scene") // @poff=560
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Stack[-1] = 0
0x3a0: Stack[-1] = Stack[-5]
0x3a1: Return(); Pop(4)

0x3a2: @@ GetMap(Stack[-1]); Obj=2 // @poff=620
0x3a3: Pop(0)
0x3a4: Stack[-1] = Stack[-5]
0x3a5: Return(); Pop(4)

0x3a6: Stack[-1] = 0
0x3a7: Stack[-2] = 0
0x3a8: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3a9: @ GetMainOutdoorScene(Stack[-2])
0x3aa: Pop(0)
0x3ab: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ad: Push("Can't find main outdoor scene") // @poff=560
0x3ae: @ Trace(Stack[-1])
0x3af: Pop(1)
0x3b0: Return(); Pop(8)

0x3b1: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=627
0x3b2: Pop(0)
0x3b3: Pop(0); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b5: Push("Warning: outdoor scene locator ") // @poff=638
0x3b6: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3b7: Push(" doesnt exist") // @poff=702
0x3b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b9: @ Trace(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ GetMap(Stack[-11]); Obj=2 // @poff=620
0x3bc: Pop(0)
0x3bd: Pop(0); PushNull((bool) Stack[-11] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bf: Push("Can't find map") // @poff=730
0x3c0: @ Trace(Stack[-1])
0x3c1: Pop(1)
0x3c2: Return(); Pop(8)

0x3c3: Push(CvectorIndex(Stack[-4], 0))
0x3c4: Push(CvectorIndex(Stack[-5], 2))
0x3c5: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=760
0x3c6: Pop(2)
0x3c7: Return(); Pop(8)

0x3c8: Stack[-2] = 0
0x3c9: PushEmpty(int, int)
0x3ca: Push("branch") // @poff=773
0x3cb: @ GetVariable(Stack[-1], Stack[-2])
0x3cc: Pop(1)
0x3cd: Push((int) 0)
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d0: Stack[-3] = (int) 1
0x3d1: Return(); Pop(2)

0x3d2: GOTO 0x3d8

0x3d3: Push((int) 1)
0x3d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-3] = (int) 2
0x3d7: Return(); Pop(2)

0x3d8: Stack[-3] = (int) 3
0x3d9: Return(); Pop(2)

