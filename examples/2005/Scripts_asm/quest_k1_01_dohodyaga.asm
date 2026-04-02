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
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:ook1Dohodyaga1
	W:ook1Dohodyaga2
	W:k1q01ooStationGotoLaska
	W:k1q01StationGotoLaska
	W:pt_map_laska
	A:AddMark
	A:ShowMap
	W:k1q01DobermanDead
	W:k1q01
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006f006f006b00310044006f0068006f0064007900610067006100310000006f006f006b00310044006f0068006f0064007900610067006100320000006b0031007100300031006f006f00530074006100740069006f006e0047006f0074006f004c00610073006b00610000006b003100710030003100530074006100740069006f006e0047006f0074006f004c00610073006b0061000000700074005f006d00610070005f006c00610073006b00610000004164644d61726b0053686f774d6170006b00310071003000310044006f006200650072006d0061006e00440065006100640000006b0031007100300031000000430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)

RunOp = 0x25c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x266 Vars = (object)
		EVENT_7 Op = 0x29b Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x323

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x476

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x474

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x478

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x47a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x463

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
0x41: Call2 0x367

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
0x4f: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x401

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x40d

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x3c3

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral" // @poff=89
0x65: Call2 0xd2

0x66: Pop(1)
0x67: Push((int) 524672)
0x68: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x69: Pop(1)
0x6a: @@@ ClearReplies(); Obj=0 // @poff=116
0x6b: Pop(0)
0x6c: Push((int) 526770)
0x6d: Push((int) 28048)
0x6e: Push((int) 28047)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: Push((int) 526776)
0x72: Push((int) 28048)
0x73: Push((int) 28053)
0x74: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75: Pop(3)
0x76: GOTO 0xb4

0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x419

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x425

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 1
0x86: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x40d

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x8f: PushEmpty(object, object)
0x90: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x91: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92: Call2 0x3c9

0x93: Pop(2)
0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral" // @poff=89
0x96: Call2 0xd2

0x97: Pop(1)
0x98: Push((int) 524668)
0x99: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x9a: Pop(1)
0x9b: @@@ ClearReplies(); Obj=0 // @poff=116
0x9c: Pop(0)
0x9d: Push((int) 526760)
0x9e: Push((int) 28045)
0x9f: Push((int) 28037)
0xa0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa1: Pop(3)
0xa2: GOTO 0xb4

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0xd2

0xa6: Pop(1)
0xa7: Push((int) 524670)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 524671)
0xad: Push((int) -1)
0xae: Push((int) 26010)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: GOTO 0xb4

0xb2: Return(); Pop(0)

0xb3: GOTO 0x4e

0xb4: PushEmpty(bool)
0xb5: Call2 0x47c

0xb6: Pop(0)
0xb7: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xb8: @ lshWaitForAnimEnd()
0xb9: Pop(0)
0xba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: GOTO 0xc2

0xbd: PushEmpty(string)
0xbe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbf: Call2 0x378

0xc0: Pop(1)
0xc1: GOTO 0xb8

0xc2: GOTO 0xd1

0xc3: Push("all") // @poff=138
0xc4: Push("idle") // @poff=146
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: @ WaitForAnimEnd()
0xc8: Pop(0)
0xc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: GOTO 0xd1

0xcc: Push("all") // @poff=138
0xcd: Push("idle") // @poff=146
0xce: @ PlayAnimation(Stack[-2], Stack[-1])
0xcf: Pop(2)
0xd0: GOTO 0xc7

0xd1: Return(); Pop(0)

0xd2: PushEmpty()
0xd3: PushEmpty(bool)
0xd4: Call2 0x47c

0xd5: Pop(0)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Return(); Pop(0)

0xd9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Return(); Pop(0)

0xdc: PushEmpty(string, bool)
0xdd: Stack[-3] = Stack[-2]
0xde: Push("") // @poff=102
0xdf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: Stack[-1] = (bool) 0
0xe2: GOTO 0xe4

0xe3: Stack[-1] = (bool) 1
0xe4: Call2 0x37f

0xe5: Pop(2)
0xe6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push((int) 1)
0xea: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0xeb: PushEmpty()
0xec: Call2 0x390

0xed: Pop(0)
0xee: Push((int) 28060)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x3cf

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x3e6

0xfa: Pop(2)
0xfb: Push((int) 28061)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x3cf

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x3e6

0x107: Pop(2)
0x108: Push((int) 28062)
0x109: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call2 0x3cf

0x10f: Pop(2)
0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x3e6

0x114: Pop(2)
0x115: Push((int) 26008)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x3cf

0x11c: Pop(2)
0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x3e6

0x121: Pop(2)
0x122: Push((int) 26011)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x125: PushEmpty(bool)
0x126: Stack[-1] = (bool) 0
0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0x401

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x40d

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Stack[-1] = (bool) 1
0x132: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x3c3

0x137: Pop(2)
0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0xd2

0x13b: Pop(1)
0x13c: Push((int) 524672)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 526770)
0x142: Push((int) 28048)
0x143: Push((int) 28047)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Push((int) 526776)
0x147: Push((int) 28048)
0x148: Push((int) 28053)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0x419

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x425

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Stack[-1] = (bool) 1
0x15b: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0x40d

0x15f: Pop(1)
0x160: Pop(1); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: Stack[-1] = (bool) 1
0x163: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x164: PushEmpty(object, object)
0x165: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x166: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x167: Call2 0x3c9

0x168: Pop(2)
0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral" // @poff=89
0x16b: Call2 0xd2

0x16c: Pop(1)
0x16d: Push((int) 524668)
0x16e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16f: Pop(1)
0x170: @@@ ClearReplies(); Obj=0 // @poff=116
0x171: Pop(0)
0x172: Push((int) 526760)
0x173: Push((int) 28045)
0x174: Push((int) 28037)
0x175: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral" // @poff=89
0x17a: Call2 0xd2

0x17b: Pop(1)
0x17c: Push((int) 524670)
0x17d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17e: Pop(1)
0x17f: @@@ ClearReplies(); Obj=0 // @poff=116
0x180: Pop(0)
0x181: Push((int) 524671)
0x182: Push((int) -1)
0x183: Push((int) 26010)
0x184: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 28045)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral" // @poff=89
0x18c: Call2 0xd2

0x18d: Pop(1)
0x18e: Push((int) 526768)
0x18f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x190: Pop(1)
0x191: @@@ ClearReplies(); Obj=0 // @poff=116
0x192: Pop(0)
0x193: Push((int) 526769)
0x194: Push((int) 28038)
0x195: Push((int) 28046)
0x196: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 28038)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral" // @poff=89
0x19e: Call2 0xd2

0x19f: Pop(1)
0x1a0: Push((int) 526761)
0x1a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a2: Pop(1)
0x1a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a4: Pop(0)
0x1a5: Push((int) 526762)
0x1a6: Push((int) 28040)
0x1a7: Push((int) 28039)
0x1a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 28040)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral" // @poff=89
0x1b0: Call2 0xd2

0x1b1: Pop(1)
0x1b2: Push((int) 526763)
0x1b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b4: Pop(1)
0x1b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b6: Pop(0)
0x1b7: Push((int) 526764)
0x1b8: Push((int) 28042)
0x1b9: Push((int) 28041)
0x1ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 28042)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral" // @poff=89
0x1c2: Call2 0xd2

0x1c3: Pop(1)
0x1c4: Push((int) 526765)
0x1c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c6: Pop(1)
0x1c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c8: Pop(0)
0x1c9: Push((int) 526766)
0x1ca: Push((int) 28044)
0x1cb: Push((int) 28043)
0x1cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 28044)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral" // @poff=89
0x1d4: Call2 0xd2

0x1d5: Pop(1)
0x1d6: Push((int) 526767)
0x1d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d8: Pop(1)
0x1d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1da: Pop(0)
0x1db: Push((int) 524669)
0x1dc: Push((int) -1)
0x1dd: Push((int) 26008)
0x1de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 28048)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral" // @poff=89
0x1e6: Call2 0xd2

0x1e7: Pop(1)
0x1e8: Push((int) 526771)
0x1e9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ea: Pop(1)
0x1eb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ec: Pop(0)
0x1ed: Push((int) 526772)
0x1ee: Push((int) 28050)
0x1ef: Push((int) 28049)
0x1f0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f1: Pop(3)
0x1f2: Push((int) 526777)
0x1f3: Push((int) 28050)
0x1f4: Push((int) 28055)
0x1f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 28050)
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "Neutral" // @poff=89
0x1fd: Call2 0xd2

0x1fe: Pop(1)
0x1ff: Push((int) 526773)
0x200: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x201: Pop(1)
0x202: @@@ ClearReplies(); Obj=0 // @poff=116
0x203: Pop(0)
0x204: Push((int) 526774)
0x205: Push((int) 28052)
0x206: Push((int) 28051)
0x207: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x208: Pop(3)
0x209: Push((int) 526778)
0x20a: Push((int) 28052)
0x20b: Push((int) 28056)
0x20c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20d: Pop(3)
0x20e: Return(); Pop(0)

0x20f: Push((int) 28052)
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral" // @poff=89
0x214: Call2 0xd2

0x215: Pop(1)
0x216: Push((int) 526775)
0x217: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x218: Pop(1)
0x219: @@@ ClearReplies(); Obj=0 // @poff=116
0x21a: Pop(0)
0x21b: Push((int) 524673)
0x21c: Push((int) 26013)
0x21d: Push((int) 26012)
0x21e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 26013)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral" // @poff=89
0x226: Call2 0xd2

0x227: Pop(1)
0x228: Push((int) 524674)
0x229: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22a: Pop(1)
0x22b: @@@ ClearReplies(); Obj=0 // @poff=116
0x22c: Pop(0)
0x22d: Push((int) 524675)
0x22e: Push((int) 28059)
0x22f: Push((int) 26014)
0x230: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x231: Pop(3)
0x232: Push((int) 526782)
0x233: Push((int) -1)
0x234: Push((int) 28062)
0x235: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Push((int) 28059)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral" // @poff=89
0x23d: Call2 0xd2

0x23e: Pop(1)
0x23f: Push((int) 526779)
0x240: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x241: Pop(1)
0x242: @@@ ClearReplies(); Obj=0 // @poff=116
0x243: Pop(0)
0x244: Push((int) 526780)
0x245: Push((int) -1)
0x246: Push((int) 28060)
0x247: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x248: Pop(3)
0x249: Push((int) 526781)
0x24a: Push((int) -1)
0x24b: Push((int) 28061)
0x24c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24d: Pop(3)
0x24e: Return(); Pop(0)

0x24f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x250: PushEmpty(bool)
0x251: Call2 0x47c

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x254: @ lshStopAnimation()
0x255: Pop(0)
0x256: GOTO 0x259

0x257: @ StopAnimation()
0x258: Pop(0)
0x259: Return(); Pop(0)

0x25a: GOTO 0xe9

0x25b: Return(); Pop(0)

0x25c: Push((int) 3)
0x25d: @ Sleep(Stack[-1])
0x25e: Pop(1)
0x25f: PushEmpty(float, float)
0x260: Stack[-2] = (int) 300
0x261: Stack[-1] = (int) 100
0x262: Call2 0x271

0x263: Pop(2)
0x264: GOTO 0x25c

0x265: Return(); Pop(0)

0x266: PushEmpty()
0x267: PushEmpty()
0x268: Call2 0x2b2

0x269: Pop(0)
0x26a: PushEmpty(int, object)
0x26b: Stack[-3] = Stack[-1]
0x26c: Push(-2, 1); TaskCall(0)
0x26d: Call2 0x0

0x26e: Pop(-2, 1); TaskReturn
0x26f: Pop(2)
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: PushEmpty(bool)
0x273: Call2 0x31e

0x274: Pop(0)
0x275: Pop(1); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: Return(); Pop(0)

0x278: Push("player") // @poff=156
0x279: @ FindActor(Stack[-4]T, Stack[-1])
0x27a: Pop(1)
0x27b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x27c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x27d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x27e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x27f: Push((int) 10)
0x280: Push((float)1.0)
0x281: @ SetTimer(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: PushEmpty()
0x284: Call2 0x2c0

0x285: Pop(0)
0x286: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x288: Push((int) 10)
0x289: @ KillTimer(Stack[-1])
0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: PushEmpty(float, float)
0x28d: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28f: Stack[-3] = (bool) 0
0x290: Return(); Pop(2)

0x291: PushEmpty(float, object)
0x292: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x293: Call2 0x316

0x294: Pop(1)
0x295: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x296: Push( Stack[2 + Tasks[-1].StackPointer] )
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x299: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x29a: Return(); Pop(2)

0x29b: PushEmpty()
0x29c: Push((int) 10)
0x29d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x29f: PushEmpty(bool)
0x2a0: Call2 0x28c

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a5: PushEmpty(object)
0x2a6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2a7: Call2 0x385

0x2a8: Pop(1)
0x2a9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2aa: GOTO 0x2b1

0x2ab: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ad: Push("head") // @poff=170
0x2ae: @ UnlookAsync(Stack[-1])
0x2af: Pop(1)
0x2b0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: Call2 0x311

0x2b4: Pop(0)
0x2b5: Push((int) 10)
0x2b6: @ KillTimer(Stack[-1])
0x2b7: Pop(1)
0x2b8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2b9: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2ba: Push("head") // @poff=170
0x2bb: @ UnlookAsync(Stack[-1])
0x2bc: Pop(1)
0x2bd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2be: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2bf: Return(); Pop(0)

0x2c0: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2c1: @ WaitForAnimEnd()
0x2c2: Pop(0)
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x31e

0x2c5: Pop(0)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Return(); Pop(14)

0x2c9: PushEmpty(int)
0x2ca: Call2 0x3b2

0x2cb: Stack[-1] = Stack[-8]
0x2cc: Pop(1)
0x2cd: Stack[-6] = (int) 0
0x2ce: PushEmpty(bool)
0x2cf: Stack[-1] = (bool) 0
0x2d0: Push((int) 5)
0x2d1: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: PushEmpty(bool)
0x2d4: Call2 0x31e

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: Stack[-1] = (bool) 1
0x2d8: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2d9: Push((int) 3)
0x2da: @ irand(Stack[-6], Stack[-1])
0x2db: Pop(1)
0x2dc: Push((int) 0)
0x2dd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2df: Push(Stack[-7])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e1: @ irand(Stack[-4], Stack[-7])
0x2e2: Pop(0)
0x2e3: Push("all") // @poff=138
0x2e4: PushEmpty(string, int)
0x2e5: Stack[-7] = Stack[-1]
0x2e6: Call2 0x3ab

0x2e7: Pop(1)
0x2e8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: @ WaitForAnimEnd(Stack[-3])
0x2eb: Pop(0)
0x2ec: Pop(0); Push((bool) Stack[-3] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: GOTO 0x30c

0x2ef: GOTO 0x301

0x2f0: Push((int) 1)
0x2f1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f3: Push((int) 4)
0x2f4: @ rand(Stack[-3], Stack[-1])
0x2f5: Pop(1)
0x2f6: Push((int) 1)
0x2f7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f8: @ Sleep(Stack[-1], Stack[-2])
0x2f9: Pop(1)
0x2fa: Pop(0); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x30c

0x2fd: GOTO 0x301

0x2fe: Push(Stack[-6])
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: GOTO 0x30c

0x301: PushEmpty(bool)
0x302: Call2 0x30f

0x303: Pop(0)
0x304: Pop(1); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: GOTO 0x30c

0x307: @ ResetAAS()
0x308: Pop(0)
0x309: Push((int) 1)
0x30a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x30b: GOTO 0x2ce

0x30c: @ ResetAAS()
0x30d: Pop(0)
0x30e: Return(); Pop(14)

0x30f: Stack[-1] = (bool) 1
0x310: Return(); Pop(0)

0x311: @ StopAnimation()
0x312: Pop(0)
0x313: @ StopGroup0()
0x314: Pop(0)
0x315: Return(); Pop(0)

0x316: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x317: @ GetPosition(Stack[-3])
0x318: Pop(0)
0x319: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x31a: Pop(0)
0x31b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31d: Return(); Pop(6)

0x31e: PushEmpty(bool, bool)
0x31f: @ IsLoaded(Stack[-1])
0x320: Pop(0)
0x321: Stack[-1] = Stack[-3]
0x322: Return(); Pop(2)

0x323: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x324: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x325: Pop(0)
0x326: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x327: Pop(0)
0x328: Push(CvectorIndex(Stack[-8], 1))
0x329: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x32b: @ GetPosition(Stack[-7])
0x32c: Pop(0)
0x32d: @ GetEyesHeight(Stack[-9])
0x32e: Pop(0)
0x32f: Push(CvectorIndex(Stack[-7], 1))
0x330: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x331: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x332: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x333: Push(CvectorIndex(Stack[-6], 1))
0x334: Stack[-1] = (int) 0
0x335: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x336: Pop(0); Push(Stack[-6] | Stack[-6]);
0x337: Pop(1); Push(Sqrt(Stack[-1]))
0x338: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x339: Stack[-5] = -Stack[-6]; Pop(0);
0x33a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x33b: PushEmpty(cvector, cvector)
0x33c: Push([0.0, 1.0, 0.0])
0x33d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x33e: Call2 0x397

0x33f: Pop(1)
0x340: Push((int) 25)
0x341: Pop(2); Push(Stack[-2] * Stack[-1]);
0x342: Pop(2); Push(Stack[-2] + Stack[-1]);
0x343: Push([0.0, 10.0, 0.0])
0x344: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x345: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x346: @ IsOverrideActive(Stack[-2])
0x347: Pop(0)
0x348: Push(Stack[-2])
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-21] = (bool) 0
0x34b: Return(); Pop(18)

0x34c: @ StopWorld()
0x34d: Pop(0)
0x34e: @ CameraTransit(Stack[-3], Stack[-5])
0x34f: Pop(0)
0x350: Push(CvectorIndex(Stack[-4], 0))
0x351: Push(CvectorIndex(Stack[-5], 2))
0x352: @ Rotate(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: PushEmpty(bool)
0x355: Call2 0x47c

0x356: Pop(0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x361

0x359: Push("head") // @poff=170
0x35a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35b: Pop(1)
0x35c: Push(Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35e: Push("head") // @poff=170
0x35f: @ LookAsyncCamera(Stack[-1])
0x360: Pop(1)
0x361: @ CameraWaitForPlayFinish()
0x362: Pop(0)
0x363: @ ResumeWorld()
0x364: Pop(0)
0x365: Stack[-21] = (bool) 1
0x366: Return(); Pop(18)

0x367: PushEmpty(bool, bool)
0x368: @ CameraSwitchToNormal()
0x369: Pop(0)
0x36a: PushEmpty(bool)
0x36b: Call2 0x47c

0x36c: Pop(0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x377

0x36f: Push("head") // @poff=170
0x370: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x371: Pop(1)
0x372: Push(Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x374: Push("head") // @poff=170
0x375: @ UnlookAsync(Stack[-1])
0x376: Pop(1)
0x377: Return(); Pop(2)

0x378: PushEmpty(float, float, float, float)
0x379: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x37a: Pop(0)
0x37b: Push((bool) 0)
0x37c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(1)
0x37e: Return(); Pop(4)

0x37f: PushEmpty(float, float, float, float)
0x380: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x381: Pop(0)
0x382: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x383: Pop(0)
0x384: Return(); Pop(4)

0x385: PushEmpty(float, cvector, float, cvector)
0x386: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x387: Pop(0)
0x388: Stack[-1] = [0.0, 0.0, 0.0]
0x389: Push(CvectorIndex(Stack[-1], 1))
0x38a: Stack[-3] = Stack[-1]
0x38b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x38c: Push("head") // @poff=170
0x38d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x38e: Pop(1)
0x38f: Return(); Pop(4)

0x390: PushEmpty(bool)
0x391: Call2 0x47c

0x392: Pop(0)
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: @ lshStopSpeech()
0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: PushEmpty(float, float)
0x398: Pop(0); Push(Stack[-3] | Stack[-3]);
0x399: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x39a: Push((float)9.999999974752427e-07)
0x39b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39d: Stack[-4] = [0.0, 0.0, 0.0]
0x39e: Return(); Pop(2)

0x39f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a0: Return(); Pop(2)

0x3a1: PushEmpty(int, int)
0x3a2: @ GetVariable(Stack[-3], Stack[-1])
0x3a3: Pop(0)
0x3a4: Stack[-1] = Stack[-4]
0x3a5: Return(); Pop(2)

0x3a6: PushEmpty(float, float)
0x3a7: @ GetGameTime(Stack[-1])
0x3a8: Pop(0)
0x3a9: Stack[-1] = Stack[-3]
0x3aa: Return(); Pop(2)

0x3ab: PushEmpty(string, string)
0x3ac: Stack[-1] = "idle" // @poff=146
0x3ad: Push(Stack[-3])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3b0: Stack[-1] = Stack[-4]
0x3b1: Return(); Pop(2)

0x3b2: PushEmpty(int, bool, int, bool)
0x3b3: Stack[-2] = (int) 0
0x3b4: Push("all") // @poff=138
0x3b5: PushEmpty(string, int)
0x3b6: Stack[-5] = Stack[-1]
0x3b7: Call2 0x3ab

0x3b8: Pop(1)
0x3b9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: Pop(0); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3c1

0x3be: Push((int) 1)
0x3bf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c0: GOTO 0x3b4

0x3c1: Stack[-2] = Stack[-5]
0x3c2: Return(); Pop(4)

0x3c3: PushEmpty()
0x3c4: Push("ook1Dohodyaga1") // @poff=206
0x3c5: Push((int) 1)
0x3c6: @ SetVariable(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: Push("ook1Dohodyaga2") // @poff=236
0x3cb: Push((int) 1)
0x3cc: @ SetVariable(Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty(object, object)
0x3d0: PushEmpty(int, string)
0x3d1: Stack[-1] = "k1q01ooStationGotoLaska" // @poff=266
0x3d2: Call2 0x3a1

0x3d3: Pop(1)
0x3d4: Push((int) 0)
0x3d5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3d7: PushEmpty(object)
0x3d8: Call2 0x431

0x3d9: Stack[-1] = Stack[-2]
0x3da: Pop(1)
0x3db: Push("k1q01StationGotoLaska") // @poff=314
0x3dc: Push("pt_map_laska") // @poff=358
0x3dd: Push((int) 1)
0x3de: Push((int) 524730)
0x3df: PushEmpty(float)
0x3e0: Call2 0x3a6

0x3e1: Pop(0)
0x3e2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=384
0x3e3: Pop(5)
0x3e4: Stack[-1] = 0
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty()
0x3e7: PushEmpty(int, string)
0x3e8: Stack[-1] = "k1q01ooStationGotoLaska" // @poff=266
0x3e9: Call2 0x3a1

0x3ea: Pop(1)
0x3eb: Push((int) 0)
0x3ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ee: Push("k1q01ooStationGotoLaska") // @poff=266
0x3ef: Push((int) 1)
0x3f0: @ SetVariable(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: PushEmpty(object, string, float)
0x3f3: PushEmpty(object)
0x3f4: Call2 0x431

0x3f5: Stack[-1] = Stack[-4]
0x3f6: Pop(1)
0x3f7: Stack[-2] = "pt_map_laska" // @poff=358
0x3f8: Stack[-1] = (int) 2
0x3f9: Call2 0x442

0x3fa: Pop(3)
0x3fb: PushEmpty(object)
0x3fc: Call2 0x431

0x3fd: Pop(0)
0x3fe: @@ ShowMap(Stack[-1]); Obj=2 // @poff=392
0x3ff: Pop(1)
0x400: Return(); Pop(0)

0x401: PushEmpty()
0x402: PushEmpty(int, string)
0x403: Stack[-1] = "ook1Dohodyaga1" // @poff=206
0x404: Call2 0x3a1

0x405: Pop(1)
0x406: Push((int) 0)
0x407: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-2] = (bool) 1
0x40a: Return(); Pop(0)

0x40b: Stack[-2] = (bool) 0
0x40c: Return(); Pop(0)

0x40d: PushEmpty()
0x40e: PushEmpty(int, string)
0x40f: Stack[-1] = "k1q01DobermanDead" // @poff=400
0x410: Call2 0x3a1

0x411: Pop(1)
0x412: Push((int) 0)
0x413: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-2] = (bool) 1
0x416: Return(); Pop(0)

0x417: Stack[-2] = (bool) 0
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: PushEmpty(int, string)
0x41b: Stack[-1] = "k1q01" // @poff=436
0x41c: Call2 0x3a1

0x41d: Pop(1)
0x41e: Push((int) 4)
0x41f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-2] = (bool) 1
0x422: Return(); Pop(0)

0x423: Stack[-2] = (bool) 0
0x424: Return(); Pop(0)

0x425: PushEmpty()
0x426: PushEmpty(int, string)
0x427: Stack[-1] = "ook1Dohodyaga2" // @poff=236
0x428: Call2 0x3a1

0x429: Pop(1)
0x42a: Push((int) 0)
0x42b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-2] = (bool) 1
0x42e: Return(); Pop(0)

0x42f: Stack[-2] = (bool) 0
0x430: Return(); Pop(0)

0x431: PushEmpty(object, object, object, object)
0x432: @ GetMainOutdoorScene(Stack[-2])
0x433: Pop(0)
0x434: Pop(0); PushNull((bool) Stack[-2] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x436: Push("Can't find main outdoor scene") // @poff=448
0x437: @ Trace(Stack[-1])
0x438: Pop(1)
0x439: Stack[-1] = 0
0x43a: Stack[-1] = Stack[-5]
0x43b: Return(); Pop(4)

0x43c: @@ GetMap(Stack[-1]); Obj=2 // @poff=508
0x43d: Pop(0)
0x43e: Stack[-1] = Stack[-5]
0x43f: Return(); Pop(4)

0x440: Stack[-1] = 0
0x441: Stack[-2] = 0
0x442: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x443: @ GetMainOutdoorScene(Stack[-2])
0x444: Pop(0)
0x445: Pop(0); PushNull((bool) Stack[-2] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x447: Push("Can't find main outdoor scene") // @poff=448
0x448: @ Trace(Stack[-1])
0x449: Pop(1)
0x44a: Return(); Pop(8)

0x44b: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=515
0x44c: Pop(0)
0x44d: Pop(0); Push((bool) Stack[-1] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44f: Push("Warning: outdoor scene locator ") // @poff=526
0x450: Pop(1); Push(Stack[-1] + Stack[-11]);
0x451: Push(" doesnt exist") // @poff=590
0x452: Pop(2); Push(Stack[-2] + Stack[-1]);
0x453: @ Trace(Stack[-1])
0x454: Pop(1)
0x455: @@ GetMap(Stack[-11]); Obj=2 // @poff=508
0x456: Pop(0)
0x457: Pop(0); PushNull((bool) Stack[-11] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x459: Push("Can't find map") // @poff=618
0x45a: @ Trace(Stack[-1])
0x45b: Pop(1)
0x45c: Return(); Pop(8)

0x45d: Push(CvectorIndex(Stack[-4], 0))
0x45e: Push(CvectorIndex(Stack[-5], 2))
0x45f: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=648
0x460: Pop(2)
0x461: Return(); Pop(8)

0x462: Stack[-2] = 0
0x463: PushEmpty(int, int)
0x464: Push("branch") // @poff=661
0x465: @ GetVariable(Stack[-1], Stack[-2])
0x466: Pop(1)
0x467: Push((int) 0)
0x468: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46a: Stack[-3] = (int) 1
0x46b: Return(); Pop(2)

0x46c: GOTO 0x472

0x46d: Push((int) 1)
0x46e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-3] = (int) 2
0x471: Return(); Pop(2)

0x472: Stack[-3] = (int) 3
0x473: Return(); Pop(2)

0x474: Stack[-1] = (int) 515563
0x475: Return(); Pop(0)

0x476: Stack[-1] = (int) 503348
0x477: Return(); Pop(0)

0x478: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=675
0x479: Return(); Pop(0)

0x47a: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=715
0x47b: Return(); Pop(0)

0x47c: Stack[-1] = (bool) 0
0x47d: Return(); Pop(0)

