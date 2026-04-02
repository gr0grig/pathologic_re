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
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
	W:b11q04
	W:b11q04SanitarGotoOfficer
	W:pt_gmap_vagon_army
	A:AddMark
	W:quest_b11_04
	W:place_officer
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e00670000006200310031007100300034000000620031003100710030003400530061006e00690074006100720047006f0074006f004f006600660069006300650072000000700074005f0067006d00610070005f007600610067006f006e005f00610072006d00790000004164644d61726b00710075006500730074005f006200310031005f0030003400000070006c006100630065005f006f00660066006900630065007200000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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

RunOp = 0x143
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x149 Vars = (object)
		EVENT_26 Op = 0x181 Vars = (string)
		EVENT_5 Op = 0x189 Vars = ()
		EVENT_6 Op = 0x18e Vars = ()
		EVENT_7 Op = 0x1cd Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x255

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x309

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x307

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x30b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x30d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b1

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
0x41: Call2 0x299

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
0x52: Call2 0x33d

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 530504)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 530505)
0x5f: Push((int) 31865)
0x60: Push((int) 31864)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 531423)
0x64: Push((int) -1)
0x65: Push((int) 32766)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 530512)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 530513)
0x73: Push((int) -1)
0x74: Push((int) 31872)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 531422)
0x78: Push((int) -1)
0x79: Push((int) 32765)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x30f

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2aa

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
0x9f: Call2 0x30f

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
0xaf: Call2 0x2b1

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2c2

0xb8: Pop(0)
0xb9: Push((int) 31870)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x311

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x32d

0xc5: Pop(2)
0xc6: Push((int) 31863)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x33d

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 530504)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 530505)
0xd8: Push((int) 31865)
0xd9: Push((int) 31864)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 531423)
0xdd: Push((int) -1)
0xde: Push((int) 32766)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 530512)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 530513)
0xec: Push((int) -1)
0xed: Push((int) 31872)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Push((int) 531422)
0xf1: Push((int) -1)
0xf2: Push((int) 32765)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 31865)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral" // @poff=89
0xfb: Call2 0x9d

0xfc: Pop(1)
0xfd: Push((int) 530506)
0xfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xff: Pop(1)
0x100: @@@ ClearReplies(); Obj=0 // @poff=116
0x101: Pop(0)
0x102: Push((int) 530507)
0x103: Push((int) 31867)
0x104: Push((int) 31866)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 531424)
0x108: Push((int) 31869)
0x109: Push((int) 32767)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 31867)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral" // @poff=89
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 530508)
0x115: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x116: Pop(1)
0x117: @@@ ClearReplies(); Obj=0 // @poff=116
0x118: Pop(0)
0x119: Push((int) 530509)
0x11a: Push((int) 31869)
0x11b: Push((int) 31868)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Push((int) 531425)
0x11f: Push((int) -1)
0x120: Push((int) 32769)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 31869)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=89
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 530510)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=116
0x12f: Pop(0)
0x130: Push((int) 530511)
0x131: Push((int) -1)
0x132: Push((int) 31870)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x137: PushEmpty(bool)
0x138: Call2 0x30f

0x139: Pop(0)
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: @ lshStopAnimation()
0x13c: Pop(0)
0x13d: GOTO 0x140

0x13e: @ StopAnimation()
0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: GOTO 0xb4

0x142: Return(); Pop(0)

0x143: PushEmpty(float, float)
0x144: Stack[-2] = (int) 300
0x145: Stack[-1] = (int) 100
0x146: Call2 0x154

0x147: Pop(2)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: PushEmpty()
0x14b: Call2 0x1e4

0x14c: Pop(0)
0x14d: PushEmpty(int, object)
0x14e: Stack[-3] = Stack[-1]
0x14f: Push(-2, 1); TaskCall(0)
0x150: Call2 0x0

0x151: Pop(-2, 1); TaskReturn
0x152: Pop(2)
0x153: Return(); Pop(0)

0x154: PushEmpty(float, float)
0x155: PushEmpty(bool)
0x156: Call2 0x250

0x157: Pop(0)
0x158: Pop(1); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15a: @ Hold()
0x15b: Pop(0)
0x15c: GOTO 0x155

0x15d: Push((int) 3)
0x15e: @ rand(Stack[-2], Stack[-1])
0x15f: Pop(1)
0x160: Push((int) 3)
0x161: Pop(1); Push(Stack[-2] + Stack[-1]);
0x162: @ Sleep(Stack[-1])
0x163: Pop(1)
0x164: PushEmpty(float, float)
0x165: Stack[-6] = Stack[-2]
0x166: Stack[-5] = Stack[-1]
0x167: Call2 0x1a3

0x168: Pop(2)
0x169: @ sync()
0x16a: Pop(0)
0x16b: GOTO 0x155

0x16c: Return(); Pop(2)

0x16d: PushEmpty(bool, bool)
0x16e: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x16f: @ IsLoaded(Stack[-1])
0x170: Pop(0)
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: Pop(0); Push((bool) Stack[-2] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: PushEmpty(bool)
0x176: Call2 0x1a1

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Stack[-1] = (bool) 1
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: PushEmpty(object)
0x17c: Call2 0x2c9

0x17d: Pop(0)
0x17e: @ RemoveActor(Stack[-1])
0x17f: Pop(1)
0x180: Return(); Pop(2)

0x181: PushEmpty()
0x182: Push("cleanup") // @poff=156
0x183: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x185: PushEmpty()
0x186: Call2 0x16d

0x187: Pop(0)
0x188: Return(); Pop(0)

0x189: @ StopGroup0()
0x18a: Pop(0)
0x18b: @ sync()
0x18c: Pop(0)
0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: Call2 0x1e4

0x190: Pop(0)
0x191: PushEmpty(bool)
0x192: Stack[-1] = (bool) 0
0x193: Push( Stack[5 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x195: PushEmpty(bool)
0x196: Call2 0x1a1

0x197: Pop(0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Stack[-1] = (bool) 1
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(object)
0x19c: Call2 0x2c9

0x19d: Pop(0)
0x19e: @ RemoveActor(Stack[-1])
0x19f: Pop(1)
0x1a0: Return(); Pop(0)

0x1a1: Stack[-1] = (bool) 1
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x250

0x1a6: Pop(0)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Return(); Pop(0)

0x1aa: Push("player") // @poff=172
0x1ab: @ FindActor(Stack[-4]T, Stack[-1])
0x1ac: Pop(1)
0x1ad: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ae: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1af: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b1: Push((int) 10)
0x1b2: Push((float)1.0)
0x1b3: @ SetTimer(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: PushEmpty()
0x1b6: Call2 0x1f2

0x1b7: Pop(0)
0x1b8: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ba: Push((int) 10)
0x1bb: @ KillTimer(Stack[-1])
0x1bc: Pop(1)
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(float, float)
0x1bf: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-3] = (bool) 0
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(float, object)
0x1c4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c5: Call2 0x248

0x1c6: Pop(1)
0x1c7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1cb: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty()
0x1ce: Push((int) 10)
0x1cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d1: PushEmpty(bool)
0x1d2: Call2 0x1be

0x1d3: Pop(0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(object)
0x1d8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d9: Call2 0x2b7

0x1da: Pop(1)
0x1db: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1dc: GOTO 0x1e3

0x1dd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1de: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1df: Push("head") // @poff=186
0x1e0: @ UnlookAsync(Stack[-1])
0x1e1: Pop(1)
0x1e2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: Call2 0x243

0x1e6: Pop(0)
0x1e7: Push((int) 10)
0x1e8: @ KillTimer(Stack[-1])
0x1e9: Pop(1)
0x1ea: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ec: Push("head") // @poff=186
0x1ed: @ UnlookAsync(Stack[-1])
0x1ee: Pop(1)
0x1ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f3: @ WaitForAnimEnd()
0x1f4: Pop(0)
0x1f5: PushEmpty(bool)
0x1f6: Call2 0x250

0x1f7: Pop(0)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Return(); Pop(14)

0x1fb: PushEmpty(int)
0x1fc: Call2 0x2f6

0x1fd: Stack[-1] = Stack[-8]
0x1fe: Pop(1)
0x1ff: Stack[-6] = (int) 0
0x200: PushEmpty(bool)
0x201: Stack[-1] = (bool) 0
0x202: Push((int) 5)
0x203: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x250

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x20b: Push((int) 3)
0x20c: @ irand(Stack[-6], Stack[-1])
0x20d: Pop(1)
0x20e: Push((int) 0)
0x20f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x211: Push(Stack[-7])
0x212: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x213: @ irand(Stack[-4], Stack[-7])
0x214: Pop(0)
0x215: Push("all") // @poff=138
0x216: PushEmpty(string, int)
0x217: Stack[-7] = Stack[-1]
0x218: Call2 0x2ef

0x219: Pop(1)
0x21a: @ PlayAnimation(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: @ WaitForAnimEnd(Stack[-3])
0x21d: Pop(0)
0x21e: Pop(0); Push((bool) Stack[-3] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x23e

0x221: GOTO 0x233

0x222: Push((int) 1)
0x223: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x225: Push((int) 4)
0x226: @ rand(Stack[-3], Stack[-1])
0x227: Pop(1)
0x228: Push((int) 1)
0x229: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22a: @ Sleep(Stack[-1], Stack[-2])
0x22b: Pop(1)
0x22c: Pop(0); Push((bool) Stack[-1] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x23e

0x22f: GOTO 0x233

0x230: Push(Stack[-6])
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x23e

0x233: PushEmpty(bool)
0x234: Call2 0x241

0x235: Pop(0)
0x236: Pop(1); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: GOTO 0x23e

0x239: @ ResetAAS()
0x23a: Pop(0)
0x23b: Push((int) 1)
0x23c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x23d: GOTO 0x200

0x23e: @ ResetAAS()
0x23f: Pop(0)
0x240: Return(); Pop(14)

0x241: Stack[-1] = (bool) 1
0x242: Return(); Pop(0)

0x243: @ StopAnimation()
0x244: Pop(0)
0x245: @ StopGroup0()
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x249: @ GetPosition(Stack[-3])
0x24a: Pop(0)
0x24b: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x24c: Pop(0)
0x24d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x24f: Return(); Pop(6)

0x250: PushEmpty(bool, bool)
0x251: @ IsLoaded(Stack[-1])
0x252: Pop(0)
0x253: Stack[-1] = Stack[-3]
0x254: Return(); Pop(2)

0x255: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x256: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x257: Pop(0)
0x258: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x259: Pop(0)
0x25a: Push(CvectorIndex(Stack[-8], 1))
0x25b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25d: @ GetPosition(Stack[-7])
0x25e: Pop(0)
0x25f: @ GetEyesHeight(Stack[-9])
0x260: Pop(0)
0x261: Push(CvectorIndex(Stack[-7], 1))
0x262: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x263: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x264: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x265: Push(CvectorIndex(Stack[-6], 1))
0x266: Stack[-1] = (int) 0
0x267: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x268: Pop(0); Push(Stack[-6] | Stack[-6]);
0x269: Pop(1); Push(Sqrt(Stack[-1]))
0x26a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x26b: Stack[-5] = -Stack[-6]; Pop(0);
0x26c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26d: PushEmpty(cvector, cvector)
0x26e: Push([0.0, 1.0, 0.0])
0x26f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x270: Call2 0x2cf

0x271: Pop(1)
0x272: Push((int) 25)
0x273: Pop(2); Push(Stack[-2] * Stack[-1]);
0x274: Pop(2); Push(Stack[-2] + Stack[-1]);
0x275: Push([0.0, 10.0, 0.0])
0x276: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x277: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x278: @ IsOverrideActive(Stack[-2])
0x279: Pop(0)
0x27a: Push(Stack[-2])
0x27b: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27c: Stack[-21] = (bool) 0
0x27d: Return(); Pop(18)

0x27e: @ StopWorld()
0x27f: Pop(0)
0x280: @ CameraTransit(Stack[-3], Stack[-5])
0x281: Pop(0)
0x282: Push(CvectorIndex(Stack[-4], 0))
0x283: Push(CvectorIndex(Stack[-5], 2))
0x284: @ Rotate(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: PushEmpty(bool)
0x287: Call2 0x30f

0x288: Pop(0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x293

0x28b: Push("head") // @poff=186
0x28c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28d: Pop(1)
0x28e: Push(Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x290: Push("head") // @poff=186
0x291: @ LookAsyncCamera(Stack[-1])
0x292: Pop(1)
0x293: @ CameraWaitForPlayFinish()
0x294: Pop(0)
0x295: @ ResumeWorld()
0x296: Pop(0)
0x297: Stack[-21] = (bool) 1
0x298: Return(); Pop(18)

0x299: PushEmpty(bool, bool)
0x29a: @ CameraSwitchToNormal()
0x29b: Pop(0)
0x29c: PushEmpty(bool)
0x29d: Call2 0x30f

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: GOTO 0x2a9

0x2a1: Push("head") // @poff=186
0x2a2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: Push(Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a6: Push("head") // @poff=186
0x2a7: @ UnlookAsync(Stack[-1])
0x2a8: Pop(1)
0x2a9: Return(); Pop(2)

0x2aa: PushEmpty(float, float, float, float)
0x2ab: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ac: Pop(0)
0x2ad: Push((bool) 0)
0x2ae: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: Return(); Pop(4)

0x2b1: PushEmpty(float, float, float, float)
0x2b2: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2b3: Pop(0)
0x2b4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2b5: Pop(0)
0x2b6: Return(); Pop(4)

0x2b7: PushEmpty(float, cvector, float, cvector)
0x2b8: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2b9: Pop(0)
0x2ba: Stack[-1] = [0.0, 0.0, 0.0]
0x2bb: Push(CvectorIndex(Stack[-1], 1))
0x2bc: Stack[-3] = Stack[-1]
0x2bd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2be: Push("head") // @poff=186
0x2bf: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2c0: Pop(1)
0x2c1: Return(); Pop(4)

0x2c2: PushEmpty(bool)
0x2c3: Call2 0x30f

0x2c4: Pop(0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: @ lshStopSpeech()
0x2c7: Pop(0)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(object, object)
0x2ca: @ self(Stack[-1])
0x2cb: Pop(0)
0x2cc: Stack[-1] = Stack[-3]
0x2cd: Return(); Pop(2)

0x2ce: Stack[-1] = 0
0x2cf: PushEmpty(float, float)
0x2d0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2d1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2d2: Push((float)9.999999974752427e-07)
0x2d3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d5: Stack[-4] = [0.0, 0.0, 0.0]
0x2d6: Return(); Pop(2)

0x2d7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(int, int)
0x2da: @ GetVariable(Stack[-3], Stack[-1])
0x2db: Pop(0)
0x2dc: Stack[-1] = Stack[-4]
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(object, object)
0x2df: @ FindActor(Stack[-1], Stack[-4])
0x2e0: Pop(0)
0x2e1: Pop(0); PushNull((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-5] = (bool) 0
0x2e4: Return(); Pop(2)

0x2e5: @ Trigger(Stack[-1], Stack[-3])
0x2e6: Pop(0)
0x2e7: Stack[-5] = (bool) 1
0x2e8: Return(); Pop(2)

0x2e9: Stack[-1] = 0
0x2ea: PushEmpty(float, float)
0x2eb: @ GetGameTime(Stack[-1])
0x2ec: Pop(0)
0x2ed: Stack[-1] = Stack[-3]
0x2ee: Return(); Pop(2)

0x2ef: PushEmpty(string, string)
0x2f0: Stack[-1] = "idle" // @poff=146
0x2f1: Push(Stack[-3])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f4: Stack[-1] = Stack[-4]
0x2f5: Return(); Pop(2)

0x2f6: PushEmpty(int, bool, int, bool)
0x2f7: Stack[-2] = (int) 0
0x2f8: Push("all") // @poff=138
0x2f9: PushEmpty(string, int)
0x2fa: Stack[-5] = Stack[-1]
0x2fb: Call2 0x2ef

0x2fc: Pop(1)
0x2fd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(2)
0x2ff: Pop(0); Push((bool) Stack[-1] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: GOTO 0x305

0x302: Push((int) 1)
0x303: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x304: GOTO 0x2f8

0x305: Stack[-2] = Stack[-5]
0x306: Return(); Pop(4)

0x307: Stack[-1] = (int) 530494
0x308: Return(); Pop(0)

0x309: Stack[-1] = (int) 530493
0x30a: Return(); Pop(0)

0x30b: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=222
0x30c: Return(); Pop(0)

0x30d: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=262
0x30e: Return(); Pop(0)

0x30f: Stack[-1] = (bool) 0
0x310: Return(); Pop(0)

0x311: PushEmpty(object, object)
0x312: Push("b11q04") // @poff=306
0x313: Push((int) 2)
0x314: @ SetVariable(Stack[-2], Stack[-1])
0x315: Pop(2)
0x316: PushEmpty(object)
0x317: Call2 0x37f

0x318: Stack[-1] = Stack[-2]
0x319: Pop(1)
0x31a: Push("b11q04SanitarGotoOfficer") // @poff=320
0x31b: Push("pt_gmap_vagon_army") // @poff=370
0x31c: Push((int) 0)
0x31d: Push((int) 530531)
0x31e: PushEmpty(float)
0x31f: Call2 0x2ea

0x320: Pop(0)
0x321: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=408
0x322: Pop(5)
0x323: PushEmpty()
0x324: Call2 0x349

0x325: Pop(0)
0x326: PushEmpty(bool, string, string)
0x327: Stack[-2] = "quest_b11_04" // @poff=416
0x328: Stack[-1] = "place_officer" // @poff=442
0x329: Call2 0x2de

0x32a: Pop(3)
0x32b: Return(); Pop(2)

0x32c: Stack[-1] = 0
0x32d: PushEmpty()
0x32e: PushEmpty(object, string, float)
0x32f: PushEmpty(object)
0x330: Call2 0x37f

0x331: Stack[-1] = Stack[-4]
0x332: Pop(1)
0x333: Stack[-2] = "pt_gmap_vagon_army" // @poff=370
0x334: Stack[-1] = (int) 2
0x335: Call2 0x390

0x336: Pop(3)
0x337: PushEmpty(object)
0x338: Call2 0x37f

0x339: Pop(0)
0x33a: @@ ShowMap(Stack[-1]); Obj=2 // @poff=470
0x33b: Pop(1)
0x33c: Return(); Pop(0)

0x33d: PushEmpty()
0x33e: PushEmpty(int, string)
0x33f: Stack[-1] = "b11q04" // @poff=306
0x340: Call2 0x2d9

0x341: Pop(1)
0x342: Push((int) 1)
0x343: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-2] = (bool) 1
0x346: Return(); Pop(0)

0x347: Stack[-2] = (bool) 0
0x348: Return(); Pop(0)

0x349: PushEmpty(object, object)
0x34a: Push((int) 553)
0x34b: Push((int) 2)
0x34c: Push((int) 530528)
0x34d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x34e: Pop(3)
0x34f: PushEmpty(bool, object, int)
0x350: Stack[-4] = Stack[-2]
0x351: Stack[-1] = (int) 551
0x352: Call2 0x363

0x353: Pop(3)
0x354: Return(); Pop(2)

0x355: Stack[-1] = 0
0x356: PushEmpty(object, object)
0x357: @ GetDiaryRoot(Stack[-1])
0x358: Pop(0)
0x359: Pop(0); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35b: Push("Can't retrieve diary root") // @poff=478
0x35c: @ Trace(Stack[-1])
0x35d: Pop(1)
0x35e: Stack[-3] = (bool) 0
0x35f: Return(); Pop(2)

0x360: Stack[-1] = Stack[-3]
0x361: Return(); Pop(2)

0x362: Stack[-1] = 0
0x363: PushEmpty(object, object, int, object, object, int)
0x364: PushEmpty(object)
0x365: Call2 0x356

0x366: Stack[-1] = Stack[-4]
0x367: Pop(1)
0x368: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=530
0x369: Pop(0)
0x36a: Pop(0); Push((bool) Stack[-2] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36c: Push("Can't find diary parent with id: ") // @poff=535
0x36d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x36e: @ Trace(Stack[-1])
0x36f: Pop(1)
0x370: Stack[-9] = (bool) 0
0x371: Return(); Pop(6)

0x372: @@ AddChild(Stack[-8]); Obj=2 // @poff=603
0x373: Pop(0)
0x374: Push((int) 7)
0x375: @ SendWorldWndMessage(Stack[-1])
0x376: Pop(1)
0x377: @@ GetCategory(Stack[-1]); Obj=8 // @poff=612
0x378: Pop(0)
0x379: @ SetDiarySection(Stack[-1])
0x37a: Pop(0)
0x37b: Stack[-9] = (bool) 0
0x37c: Return(); Pop(6)

0x37d: Stack[-2] = 0
0x37e: Stack[-3] = 0
0x37f: PushEmpty(object, object, object, object)
0x380: @ GetMainOutdoorScene(Stack[-2])
0x381: Pop(0)
0x382: Pop(0); PushNull((bool) Stack[-2] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x384: Push("Can't find main outdoor scene") // @poff=624
0x385: @ Trace(Stack[-1])
0x386: Pop(1)
0x387: Stack[-1] = 0
0x388: Stack[-1] = Stack[-5]
0x389: Return(); Pop(4)

0x38a: @@ GetMap(Stack[-1]); Obj=2 // @poff=684
0x38b: Pop(0)
0x38c: Stack[-1] = Stack[-5]
0x38d: Return(); Pop(4)

0x38e: Stack[-1] = 0
0x38f: Stack[-2] = 0
0x390: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x391: @ GetMainOutdoorScene(Stack[-2])
0x392: Pop(0)
0x393: Pop(0); PushNull((bool) Stack[-2] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x395: Push("Can't find main outdoor scene") // @poff=624
0x396: @ Trace(Stack[-1])
0x397: Pop(1)
0x398: Return(); Pop(8)

0x399: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=691
0x39a: Pop(0)
0x39b: Pop(0); Push((bool) Stack[-1] == 0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39d: Push("Warning: outdoor scene locator ") // @poff=702
0x39e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x39f: Push(" doesnt exist") // @poff=766
0x3a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a1: @ Trace(Stack[-1])
0x3a2: Pop(1)
0x3a3: @@ GetMap(Stack[-11]); Obj=2 // @poff=684
0x3a4: Pop(0)
0x3a5: Pop(0); PushNull((bool) Stack[-11] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a7: Push("Can't find map") // @poff=794
0x3a8: @ Trace(Stack[-1])
0x3a9: Pop(1)
0x3aa: Return(); Pop(8)

0x3ab: Push(CvectorIndex(Stack[-4], 0))
0x3ac: Push(CvectorIndex(Stack[-5], 2))
0x3ad: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=824
0x3ae: Pop(2)
0x3af: Return(); Pop(8)

0x3b0: Stack[-2] = 0
0x3b1: PushEmpty(int, int)
0x3b2: Push("branch") // @poff=837
0x3b3: @ GetVariable(Stack[-1], Stack[-2])
0x3b4: Pop(1)
0x3b5: Push((int) 0)
0x3b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b8: Stack[-3] = (int) 1
0x3b9: Return(); Pop(2)

0x3ba: GOTO 0x3c0

0x3bb: Push((int) 1)
0x3bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-3] = (int) 2
0x3bf: Return(); Pop(2)

0x3c0: Stack[-3] = (int) 3
0x3c1: Return(); Pop(2)

