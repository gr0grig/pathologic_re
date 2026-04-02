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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:oob10GirlLaska1
	W:b10q04GirlGotoKapella
	W:pt_map_kapella
	A:AddMark
	A:ShowMap
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e00670000006f006f006200310030004700690072006c004c00610073006b006100310000006200310030007100300034004700690072006c0047006f0074006f004b006100700065006c006c0061000000700074005f006d00610070005f006b006100700065006c006c00610000004164644d61726b0053686f774d617000430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	GetMainOutdoorScene (1 args)
	Trace (1 args)

RunOp = 0x107
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x10d Vars = (object)
		EVENT_26 Op = 0x145 Vars = (string)
		EVENT_5 Op = 0x14d Vars = ()
		EVENT_6 Op = 0x152 Vars = ()
		EVENT_7 Op = 0x191 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x219

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2c1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2bf

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2c3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2c5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x331

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
0x41: Call2 0x25d

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 530443)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2f3

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 530444)
0x5f: Push((int) 31811)
0x60: Push((int) 31810)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 530447)
0x64: Push((int) -1)
0x65: Push((int) 31813)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2c7

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x26e

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all") // @poff=138
0x7b: Push("idle") // @poff=146
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all") // @poff=138
0x84: Push("idle") // @poff=146
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x2c7

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-3] = Stack[-2]
0x95: Push("") // @poff=102
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x275

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x286

0xa4: Pop(0)
0xa5: Push((int) 31810)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2c9

0xac: Pop(2)
0xad: Push((int) 31812)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x2cf

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x2e3

0xb9: Pop(2)
0xba: Push((int) 32837)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x2cf

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x2e3

0xc6: Pop(2)
0xc7: Push((int) 31809)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral" // @poff=89
0xcc: Call2 0x89

0xcd: Pop(1)
0xce: Push((int) 530443)
0xcf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd0: Pop(1)
0xd1: @@@ ClearReplies(); Obj=0 // @poff=116
0xd2: Pop(0)
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x2f3

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: Push((int) 530444)
0xd9: Push((int) 31811)
0xda: Push((int) 31810)
0xdb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdc: Pop(3)
0xdd: Push((int) 530447)
0xde: Push((int) -1)
0xdf: Push((int) 31813)
0xe0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe1: Pop(3)
0xe2: Return(); Pop(0)

0xe3: Push((int) 31811)
0xe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral" // @poff=89
0xe8: Call2 0x89

0xe9: Pop(1)
0xea: Push((int) 530445)
0xeb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xec: Pop(1)
0xed: @@@ ClearReplies(); Obj=0 // @poff=116
0xee: Pop(0)
0xef: Push((int) 530446)
0xf0: Push((int) -1)
0xf1: Push((int) 31812)
0xf2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf3: Pop(3)
0xf4: Push((int) 531483)
0xf5: Push((int) -1)
0xf6: Push((int) 32837)
0xf7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfb: PushEmpty(bool)
0xfc: Call2 0x2c7

0xfd: Pop(0)
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: @ lshStopAnimation()
0x100: Pop(0)
0x101: GOTO 0x104

0x102: @ StopAnimation()
0x103: Pop(0)
0x104: Return(); Pop(0)

0x105: GOTO 0xa0

0x106: Return(); Pop(0)

0x107: PushEmpty(float, float)
0x108: Stack[-2] = (int) 300
0x109: Stack[-1] = (int) 100
0x10a: Call2 0x118

0x10b: Pop(2)
0x10c: Return(); Pop(0)

0x10d: PushEmpty()
0x10e: PushEmpty()
0x10f: Call2 0x1a8

0x110: Pop(0)
0x111: PushEmpty(int, object)
0x112: Stack[-3] = Stack[-1]
0x113: Push(-2, 1); TaskCall(0)
0x114: Call2 0x0

0x115: Pop(-2, 1); TaskReturn
0x116: Pop(2)
0x117: Return(); Pop(0)

0x118: PushEmpty(float, float)
0x119: PushEmpty(bool)
0x11a: Call2 0x214

0x11b: Pop(0)
0x11c: Pop(1); Push((bool) Stack[-1] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11e: @ Hold()
0x11f: Pop(0)
0x120: GOTO 0x119

0x121: Push((int) 3)
0x122: @ rand(Stack[-2], Stack[-1])
0x123: Pop(1)
0x124: Push((int) 3)
0x125: Pop(1); Push(Stack[-2] + Stack[-1]);
0x126: @ Sleep(Stack[-1])
0x127: Pop(1)
0x128: PushEmpty(float, float)
0x129: Stack[-6] = Stack[-2]
0x12a: Stack[-5] = Stack[-1]
0x12b: Call2 0x167

0x12c: Pop(2)
0x12d: @ sync()
0x12e: Pop(0)
0x12f: GOTO 0x119

0x130: Return(); Pop(2)

0x131: PushEmpty(bool, bool)
0x132: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x133: @ IsLoaded(Stack[-1])
0x134: Pop(0)
0x135: PushEmpty(bool)
0x136: Stack[-1] = (bool) 0
0x137: Pop(0); Push((bool) Stack[-2] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: PushEmpty(bool)
0x13a: Call2 0x165

0x13b: Pop(0)
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: Stack[-1] = (bool) 1
0x13e: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13f: PushEmpty(object)
0x140: Call2 0x28d

0x141: Pop(0)
0x142: @ RemoveActor(Stack[-1])
0x143: Pop(1)
0x144: Return(); Pop(2)

0x145: PushEmpty()
0x146: Push("cleanup") // @poff=156
0x147: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x131

0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: @ StopGroup0()
0x14e: Pop(0)
0x14f: @ sync()
0x150: Pop(0)
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: Call2 0x1a8

0x154: Pop(0)
0x155: PushEmpty(bool)
0x156: Stack[-1] = (bool) 0
0x157: Push( Stack[5 + Tasks[-1].StackPointer] )
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: PushEmpty(bool)
0x15a: Call2 0x165

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Stack[-1] = (bool) 1
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(object)
0x160: Call2 0x28d

0x161: Pop(0)
0x162: @ RemoveActor(Stack[-1])
0x163: Pop(1)
0x164: Return(); Pop(0)

0x165: Stack[-1] = (bool) 1
0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: PushEmpty(bool)
0x169: Call2 0x214

0x16a: Pop(0)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Return(); Pop(0)

0x16e: Push("player") // @poff=172
0x16f: @ FindActor(Stack[-4]T, Stack[-1])
0x170: Pop(1)
0x171: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x172: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x173: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x174: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x175: Push((int) 10)
0x176: Push((float)1.0)
0x177: @ SetTimer(Stack[-2], Stack[-1])
0x178: Pop(2)
0x179: PushEmpty()
0x17a: Call2 0x1b6

0x17b: Pop(0)
0x17c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17e: Push((int) 10)
0x17f: @ KillTimer(Stack[-1])
0x180: Pop(1)
0x181: Return(); Pop(0)

0x182: PushEmpty(float, float)
0x183: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x184: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x185: Stack[-3] = (bool) 0
0x186: Return(); Pop(2)

0x187: PushEmpty(float, object)
0x188: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x189: Call2 0x20c

0x18a: Pop(1)
0x18b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x18c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x18f: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x190: Return(); Pop(2)

0x191: PushEmpty()
0x192: Push((int) 10)
0x193: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x195: PushEmpty(bool)
0x196: Call2 0x182

0x197: Pop(0)
0x198: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x199: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(object)
0x19c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x19d: Call2 0x27b

0x19e: Pop(1)
0x19f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1a0: GOTO 0x1a7

0x1a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a3: Push("head") // @poff=186
0x1a4: @ UnlookAsync(Stack[-1])
0x1a5: Pop(1)
0x1a6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty()
0x1a9: Call2 0x207

0x1aa: Pop(0)
0x1ab: Push((int) 10)
0x1ac: @ KillTimer(Stack[-1])
0x1ad: Pop(1)
0x1ae: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1af: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b0: Push("head") // @poff=186
0x1b1: @ UnlookAsync(Stack[-1])
0x1b2: Pop(1)
0x1b3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1b7: @ WaitForAnimEnd()
0x1b8: Pop(0)
0x1b9: PushEmpty(bool)
0x1ba: Call2 0x214

0x1bb: Pop(0)
0x1bc: Pop(1); Push((bool) Stack[-1] == 0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Return(); Pop(14)

0x1bf: PushEmpty(int)
0x1c0: Call2 0x2ae

0x1c1: Stack[-1] = Stack[-8]
0x1c2: Pop(1)
0x1c3: Stack[-6] = (int) 0
0x1c4: PushEmpty(bool)
0x1c5: Stack[-1] = (bool) 0
0x1c6: Push((int) 5)
0x1c7: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(bool)
0x1ca: Call2 0x214

0x1cb: Pop(0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1cf: Push((int) 3)
0x1d0: @ irand(Stack[-6], Stack[-1])
0x1d1: Pop(1)
0x1d2: Push((int) 0)
0x1d3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d5: Push(Stack[-7])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d7: @ irand(Stack[-4], Stack[-7])
0x1d8: Pop(0)
0x1d9: Push("all") // @poff=138
0x1da: PushEmpty(string, int)
0x1db: Stack[-7] = Stack[-1]
0x1dc: Call2 0x2a7

0x1dd: Pop(1)
0x1de: @ PlayAnimation(Stack[-2], Stack[-1])
0x1df: Pop(2)
0x1e0: @ WaitForAnimEnd(Stack[-3])
0x1e1: Pop(0)
0x1e2: Pop(0); Push((bool) Stack[-3] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: GOTO 0x202

0x1e5: GOTO 0x1f7

0x1e6: Push((int) 1)
0x1e7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e9: Push((int) 4)
0x1ea: @ rand(Stack[-3], Stack[-1])
0x1eb: Pop(1)
0x1ec: Push((int) 1)
0x1ed: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ee: @ Sleep(Stack[-1], Stack[-2])
0x1ef: Pop(1)
0x1f0: Pop(0); Push((bool) Stack[-1] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x202

0x1f3: GOTO 0x1f7

0x1f4: Push(Stack[-6])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x202

0x1f7: PushEmpty(bool)
0x1f8: Call2 0x205

0x1f9: Pop(0)
0x1fa: Pop(1); Push((bool) Stack[-1] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: GOTO 0x202

0x1fd: @ ResetAAS()
0x1fe: Pop(0)
0x1ff: Push((int) 1)
0x200: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x201: GOTO 0x1c4

0x202: @ ResetAAS()
0x203: Pop(0)
0x204: Return(); Pop(14)

0x205: Stack[-1] = (bool) 1
0x206: Return(); Pop(0)

0x207: @ StopAnimation()
0x208: Pop(0)
0x209: @ StopGroup0()
0x20a: Pop(0)
0x20b: Return(); Pop(0)

0x20c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x20d: @ GetPosition(Stack[-3])
0x20e: Pop(0)
0x20f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x210: Pop(0)
0x211: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x212: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x213: Return(); Pop(6)

0x214: PushEmpty(bool, bool)
0x215: @ IsLoaded(Stack[-1])
0x216: Pop(0)
0x217: Stack[-1] = Stack[-3]
0x218: Return(); Pop(2)

0x219: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x21a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x21b: Pop(0)
0x21c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x21d: Pop(0)
0x21e: Push(CvectorIndex(Stack[-8], 1))
0x21f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x220: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x221: @ GetPosition(Stack[-7])
0x222: Pop(0)
0x223: @ GetEyesHeight(Stack[-9])
0x224: Pop(0)
0x225: Push(CvectorIndex(Stack[-7], 1))
0x226: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x227: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x228: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x229: Push(CvectorIndex(Stack[-6], 1))
0x22a: Stack[-1] = (int) 0
0x22b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x22c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x22d: Pop(1); Push(Sqrt(Stack[-1]))
0x22e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x22f: Stack[-5] = -Stack[-6]; Pop(0);
0x230: Pop(0); Push(Stack[-6] * Stack[-19]);
0x231: PushEmpty(cvector, cvector)
0x232: Push([0.0, 1.0, 0.0])
0x233: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x234: Call2 0x293

0x235: Pop(1)
0x236: Push((int) 25)
0x237: Pop(2); Push(Stack[-2] * Stack[-1]);
0x238: Pop(2); Push(Stack[-2] + Stack[-1]);
0x239: Push([0.0, 10.0, 0.0])
0x23a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x23b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x23c: @ IsOverrideActive(Stack[-2])
0x23d: Pop(0)
0x23e: Push(Stack[-2])
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: Stack[-21] = (bool) 0
0x241: Return(); Pop(18)

0x242: @ StopWorld()
0x243: Pop(0)
0x244: @ CameraTransit(Stack[-3], Stack[-5])
0x245: Pop(0)
0x246: Push(CvectorIndex(Stack[-4], 0))
0x247: Push(CvectorIndex(Stack[-5], 2))
0x248: @ Rotate(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: PushEmpty(bool)
0x24b: Call2 0x2c7

0x24c: Pop(0)
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: GOTO 0x257

0x24f: Push("head") // @poff=186
0x250: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x251: Pop(1)
0x252: Push(Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x254: Push("head") // @poff=186
0x255: @ LookAsyncCamera(Stack[-1])
0x256: Pop(1)
0x257: @ CameraWaitForPlayFinish()
0x258: Pop(0)
0x259: @ ResumeWorld()
0x25a: Pop(0)
0x25b: Stack[-21] = (bool) 1
0x25c: Return(); Pop(18)

0x25d: PushEmpty(bool, bool)
0x25e: @ CameraSwitchToNormal()
0x25f: Pop(0)
0x260: PushEmpty(bool)
0x261: Call2 0x2c7

0x262: Pop(0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x26d

0x265: Push("head") // @poff=186
0x266: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x267: Pop(1)
0x268: Push(Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26a: Push("head") // @poff=186
0x26b: @ UnlookAsync(Stack[-1])
0x26c: Pop(1)
0x26d: Return(); Pop(2)

0x26e: PushEmpty(float, float, float, float)
0x26f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x270: Pop(0)
0x271: Push((bool) 0)
0x272: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(1)
0x274: Return(); Pop(4)

0x275: PushEmpty(float, float, float, float)
0x276: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x277: Pop(0)
0x278: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x279: Pop(0)
0x27a: Return(); Pop(4)

0x27b: PushEmpty(float, cvector, float, cvector)
0x27c: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x27d: Pop(0)
0x27e: Stack[-1] = [0.0, 0.0, 0.0]
0x27f: Push(CvectorIndex(Stack[-1], 1))
0x280: Stack[-3] = Stack[-1]
0x281: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x282: Push("head") // @poff=186
0x283: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x284: Pop(1)
0x285: Return(); Pop(4)

0x286: PushEmpty(bool)
0x287: Call2 0x2c7

0x288: Pop(0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: @ lshStopSpeech()
0x28b: Pop(0)
0x28c: Return(); Pop(0)

0x28d: PushEmpty(object, object)
0x28e: @ self(Stack[-1])
0x28f: Pop(0)
0x290: Stack[-1] = Stack[-3]
0x291: Return(); Pop(2)

0x292: Stack[-1] = 0
0x293: PushEmpty(float, float)
0x294: Pop(0); Push(Stack[-3] | Stack[-3]);
0x295: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x296: Push((float)9.999999974752427e-07)
0x297: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x299: Stack[-4] = [0.0, 0.0, 0.0]
0x29a: Return(); Pop(2)

0x29b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x29c: Return(); Pop(2)

0x29d: PushEmpty(int, int)
0x29e: @ GetVariable(Stack[-3], Stack[-1])
0x29f: Pop(0)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Return(); Pop(2)

0x2a2: PushEmpty(float, float)
0x2a3: @ GetGameTime(Stack[-1])
0x2a4: Pop(0)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(string, string)
0x2a8: Stack[-1] = "idle" // @poff=146
0x2a9: Push(Stack[-3])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ac: Stack[-1] = Stack[-4]
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(int, bool, int, bool)
0x2af: Stack[-2] = (int) 0
0x2b0: Push("all") // @poff=138
0x2b1: PushEmpty(string, int)
0x2b2: Stack[-5] = Stack[-1]
0x2b3: Call2 0x2a7

0x2b4: Pop(1)
0x2b5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: Pop(0); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2bd

0x2ba: Push((int) 1)
0x2bb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2bc: GOTO 0x2b0

0x2bd: Stack[-2] = Stack[-5]
0x2be: Return(); Pop(4)

0x2bf: Stack[-1] = (int) 515559
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = (int) 503344
0x2c2: Return(); Pop(0)

0x2c3: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=222
0x2c4: Return(); Pop(0)

0x2c5: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=262
0x2c6: Return(); Pop(0)

0x2c7: Stack[-1] = (bool) 0
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: Push("oob10GirlLaska1") // @poff=306
0x2cb: Push((int) 1)
0x2cc: @ SetVariable(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty(object, object)
0x2d0: Push("b10q04GirlGotoKapella") // @poff=338
0x2d1: Push((int) 1)
0x2d2: @ SetVariable(Stack[-2], Stack[-1])
0x2d3: Pop(2)
0x2d4: PushEmpty(object)
0x2d5: Call2 0x2ff

0x2d6: Stack[-1] = Stack[-2]
0x2d7: Pop(1)
0x2d8: Push("b10q04GirlGotoKapella") // @poff=338
0x2d9: Push("pt_map_kapella") // @poff=382
0x2da: Push((int) 0)
0x2db: Push((int) 530490)
0x2dc: PushEmpty(float)
0x2dd: Call2 0x2a2

0x2de: Pop(0)
0x2df: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=412
0x2e0: Pop(5)
0x2e1: Return(); Pop(2)

0x2e2: Stack[-1] = 0
0x2e3: PushEmpty()
0x2e4: PushEmpty(object, string, float)
0x2e5: PushEmpty(object)
0x2e6: Call2 0x2ff

0x2e7: Stack[-1] = Stack[-4]
0x2e8: Pop(1)
0x2e9: Stack[-2] = "pt_map_kapella" // @poff=382
0x2ea: Stack[-1] = (int) 2
0x2eb: Call2 0x310

0x2ec: Pop(3)
0x2ed: PushEmpty(object)
0x2ee: Call2 0x2ff

0x2ef: Pop(0)
0x2f0: @@ ShowMap(Stack[-1]); Obj=2 // @poff=420
0x2f1: Pop(1)
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty()
0x2f4: PushEmpty(int, string)
0x2f5: Stack[-1] = "oob10GirlLaska1" // @poff=306
0x2f6: Call2 0x29d

0x2f7: Pop(1)
0x2f8: Push((int) 0)
0x2f9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-2] = (bool) 1
0x2fc: Return(); Pop(0)

0x2fd: Stack[-2] = (bool) 0
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object, object, object, object)
0x300: @ GetMainOutdoorScene(Stack[-2])
0x301: Pop(0)
0x302: Pop(0); PushNull((bool) Stack[-2] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x304: Push("Can't find main outdoor scene") // @poff=428
0x305: @ Trace(Stack[-1])
0x306: Pop(1)
0x307: Stack[-1] = 0
0x308: Stack[-1] = Stack[-5]
0x309: Return(); Pop(4)

0x30a: @@ GetMap(Stack[-1]); Obj=2 // @poff=488
0x30b: Pop(0)
0x30c: Stack[-1] = Stack[-5]
0x30d: Return(); Pop(4)

0x30e: Stack[-1] = 0
0x30f: Stack[-2] = 0
0x310: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x311: @ GetMainOutdoorScene(Stack[-2])
0x312: Pop(0)
0x313: Pop(0); PushNull((bool) Stack[-2] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x315: Push("Can't find main outdoor scene") // @poff=428
0x316: @ Trace(Stack[-1])
0x317: Pop(1)
0x318: Return(); Pop(8)

0x319: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=495
0x31a: Pop(0)
0x31b: Pop(0); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31d: Push("Warning: outdoor scene locator ") // @poff=506
0x31e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x31f: Push(" doesnt exist") // @poff=570
0x320: Pop(2); Push(Stack[-2] + Stack[-1]);
0x321: @ Trace(Stack[-1])
0x322: Pop(1)
0x323: @@ GetMap(Stack[-11]); Obj=2 // @poff=488
0x324: Pop(0)
0x325: Pop(0); PushNull((bool) Stack[-11] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x327: Push("Can't find map") // @poff=598
0x328: @ Trace(Stack[-1])
0x329: Pop(1)
0x32a: Return(); Pop(8)

0x32b: Push(CvectorIndex(Stack[-4], 0))
0x32c: Push(CvectorIndex(Stack[-5], 2))
0x32d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=628
0x32e: Pop(2)
0x32f: Return(); Pop(8)

0x330: Stack[-2] = 0
0x331: PushEmpty(int, int)
0x332: Push("branch") // @poff=641
0x333: @ GetVariable(Stack[-1], Stack[-2])
0x334: Pop(1)
0x335: Push((int) 0)
0x336: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x338: Stack[-3] = (int) 1
0x339: Return(); Pop(2)

0x33a: GOTO 0x340

0x33b: Push((int) 1)
0x33c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-3] = (int) 2
0x33f: Return(); Pop(2)

0x340: Stack[-3] = (int) 3
0x341: Return(); Pop(2)

