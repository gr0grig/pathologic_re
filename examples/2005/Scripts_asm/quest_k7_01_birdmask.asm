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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:ook7Birdmask1
	W:k7q01CorpseMark
	W:k7q01BirdmaskGotoCorpse
	W:pt_d7q02_corpse
	A:AddMark
	W:quest_k7_01
	W:place_corpse
	A:ShowMap
	W:sobor@door1
	A:GetItemCount
	W:bird_mask
	W:bird_balahon
	A:GetItem
	A:GetItemID
	A:IsItemSelected
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e00670000006f006f006b00370042006900720064006d00610073006b00310000006b00370071003000310043006f0072007000730065004d00610072006b0000006b00370071003000310042006900720064006d00610073006b0047006f0074006f0043006f0072007000730065000000700074005f00640037007100300032005f0063006f00720070007300650000004164644d61726b00710075006500730074005f006b0037005f0030003100000070006c006100630065005f0063006f007200700073006500000053686f774d61700073006f0062006f007200400064006f006f007200310000004765744974656d436f756e740062006900720064005f006d00610073006b00000062006900720064005f00620061006c00610068006f006e0000004765744974656d004765744974656d49440049734974656d53656c656374656400430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x25a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x264 Vars = (object)
		EVENT_7 Op = 0x299 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x321

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3d9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3db

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3dd

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4de

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
0x41: Call2 0x365

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
0x4f: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x436

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3f9

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral" // @poff=89
0x5c: Call2 0xe7

0x5d: Pop(1)
0x5e: Push((int) 530193)
0x5f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x60: Pop(1)
0x61: @@@ ClearReplies(); Obj=0 // @poff=116
0x62: Pop(0)
0x63: Push((int) 526124)
0x64: Push((int) 27404)
0x65: Push((int) 27403)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0xc9

0x69: PushEmpty(bool)
0x6a: Stack[-1] = (bool) 0
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x44c

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x456

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral" // @poff=89
0x79: Call2 0xe7

0x7a: Pop(1)
0x7b: Push((int) 526123)
0x7c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7d: Pop(1)
0x7e: @@@ ClearReplies(); Obj=0 // @poff=116
0x7f: Pop(0)
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x442

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x85: Push((int) 528266)
0x86: Push((int) 29631)
0x87: Push((int) 29630)
0x88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x89: Pop(3)
0x8a: Push((int) 528258)
0x8b: Push((int) -1)
0x8c: Push((int) 29621)
0x8d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8e: Pop(3)
0x8f: Push((int) 526135)
0x90: Push((int) -1)
0x91: Push((int) 27414)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x93: Pop(3)
0x94: GOTO 0xc9

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x442

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0x9a: PushEmpty(object, object)
0x9b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d: Call2 0x42f

0x9e: Pop(2)
0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral" // @poff=89
0xa1: Call2 0xe7

0xa2: Pop(1)
0xa3: Push((int) 526136)
0xa4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa5: Pop(1)
0xa6: @@@ ClearReplies(); Obj=0 // @poff=116
0xa7: Pop(0)
0xa8: Push((int) 528269)
0xa9: Push((int) 29634)
0xaa: Push((int) 29633)
0xab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xac: Pop(3)
0xad: Push((int) 526137)
0xae: Push((int) -1)
0xaf: Push((int) 27416)
0xb0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb1: Pop(3)
0xb2: Push((int) 528259)
0xb3: Push((int) -1)
0xb4: Push((int) 29622)
0xb5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb6: Pop(3)
0xb7: GOTO 0xc9

0xb8: PushEmpty(string)
0xb9: Stack[-1] = "Neutral" // @poff=89
0xba: Call2 0xe7

0xbb: Pop(1)
0xbc: Push((int) 530191)
0xbd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbe: Pop(1)
0xbf: @@@ ClearReplies(); Obj=0 // @poff=116
0xc0: Pop(0)
0xc1: Push((int) 530192)
0xc2: Push((int) -1)
0xc3: Push((int) 31581)
0xc4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc5: Pop(3)
0xc6: GOTO 0xc9

0xc7: Return(); Pop(0)

0xc8: GOTO 0x4e

0xc9: PushEmpty(bool)
0xca: Call2 0x3df

0xcb: Pop(0)
0xcc: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xcd: @ lshWaitForAnimEnd()
0xce: Pop(0)
0xcf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: GOTO 0xd7

0xd2: PushEmpty(string)
0xd3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd4: Call2 0x376

0xd5: Pop(1)
0xd6: GOTO 0xcd

0xd7: GOTO 0xe6

0xd8: Push("all") // @poff=138
0xd9: Push("idle") // @poff=146
0xda: @ PlayAnimation(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: @ WaitForAnimEnd()
0xdd: Pop(0)
0xde: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: GOTO 0xe6

0xe1: Push("all") // @poff=138
0xe2: Push("idle") // @poff=146
0xe3: @ PlayAnimation(Stack[-2], Stack[-1])
0xe4: Pop(2)
0xe5: GOTO 0xdc

0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: PushEmpty(bool)
0xe9: Call2 0x3df

0xea: Pop(0)
0xeb: Pop(1); Push((bool) Stack[-1] == 0)
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: Return(); Pop(0)

0xee: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Return(); Pop(0)

0xf1: PushEmpty(string, bool)
0xf2: Stack[-3] = Stack[-2]
0xf3: Push("") // @poff=102
0xf4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-1] = (bool) 0
0xf7: GOTO 0xf9

0xf8: Stack[-1] = (bool) 1
0xf9: Call2 0x37d

0xfa: Pop(2)
0xfb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: Push((int) 1)
0xff: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x100: PushEmpty()
0x101: Call2 0x38e

0x102: Pop(0)
0x103: Push((int) 27413)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x3ff

0x10a: Pop(2)
0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call2 0x41f

0x10f: Pop(2)
0x110: Push((int) 31582)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x113: PushEmpty(bool, object)
0x114: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x115: Call2 0x436

0x116: Pop(1)
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x3f9

0x11c: Pop(2)
0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral" // @poff=89
0x11f: Call2 0xe7

0x120: Pop(1)
0x121: Push((int) 530193)
0x122: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x123: Pop(1)
0x124: @@@ ClearReplies(); Obj=0 // @poff=116
0x125: Pop(0)
0x126: Push((int) 526124)
0x127: Push((int) 27404)
0x128: Push((int) 27403)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: PushEmpty(bool)
0x12d: Stack[-1] = (bool) 0
0x12e: PushEmpty(bool, object)
0x12f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x130: Call2 0x44c

0x131: Pop(1)
0x132: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x456

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Stack[-1] = (bool) 1
0x139: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral" // @poff=89
0x13c: Call2 0xe7

0x13d: Pop(1)
0x13e: Push((int) 526123)
0x13f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x140: Pop(1)
0x141: @@@ ClearReplies(); Obj=0 // @poff=116
0x142: Pop(0)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x442

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 528266)
0x149: Push((int) 29631)
0x14a: Push((int) 29630)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Push((int) 528258)
0x14e: Push((int) -1)
0x14f: Push((int) 29621)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Push((int) 526135)
0x153: Push((int) -1)
0x154: Push((int) 27414)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0x442

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x15d: PushEmpty(object, object)
0x15e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x160: Call2 0x42f

0x161: Pop(2)
0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0xe7

0x165: Pop(1)
0x166: Push((int) 526136)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 528269)
0x16c: Push((int) 29634)
0x16d: Push((int) 29633)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 526137)
0x171: Push((int) -1)
0x172: Push((int) 27416)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 528259)
0x176: Push((int) -1)
0x177: Push((int) 29622)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral" // @poff=89
0x17d: Call2 0xe7

0x17e: Pop(1)
0x17f: Push((int) 530191)
0x180: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x181: Pop(1)
0x182: @@@ ClearReplies(); Obj=0 // @poff=116
0x183: Pop(0)
0x184: Push((int) 530192)
0x185: Push((int) -1)
0x186: Push((int) 31581)
0x187: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 29634)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Neutral" // @poff=89
0x18f: Call2 0xe7

0x190: Pop(1)
0x191: Push((int) 528270)
0x192: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x193: Pop(1)
0x194: @@@ ClearReplies(); Obj=0 // @poff=116
0x195: Pop(0)
0x196: Push((int) 528271)
0x197: Push((int) 29636)
0x198: Push((int) 29635)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 29636)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral" // @poff=89
0x1a1: Call2 0xe7

0x1a2: Pop(1)
0x1a3: Push((int) 528272)
0x1a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a5: Pop(1)
0x1a6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a7: Pop(0)
0x1a8: Push((int) 528273)
0x1a9: Push((int) -1)
0x1aa: Push((int) 29637)
0x1ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ac: Pop(3)
0x1ad: Push((int) 528274)
0x1ae: Push((int) -1)
0x1af: Push((int) 29638)
0x1b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 29631)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral" // @poff=89
0x1b8: Call2 0xe7

0x1b9: Pop(1)
0x1ba: Push((int) 528267)
0x1bb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bc: Pop(1)
0x1bd: @@@ ClearReplies(); Obj=0 // @poff=116
0x1be: Pop(0)
0x1bf: Push((int) 526132)
0x1c0: Push((int) 27412)
0x1c1: Push((int) 27411)
0x1c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Push((int) 27412)
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c8: PushEmpty(string)
0x1c9: Stack[-1] = "Neutral" // @poff=89
0x1ca: Call2 0xe7

0x1cb: Pop(1)
0x1cc: Push((int) 526133)
0x1cd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ce: Pop(1)
0x1cf: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d0: Pop(0)
0x1d1: Push((int) 528268)
0x1d2: Push((int) -1)
0x1d3: Push((int) 29632)
0x1d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 27404)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral" // @poff=89
0x1dc: Call2 0xe7

0x1dd: Pop(1)
0x1de: Push((int) 526125)
0x1df: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e0: Pop(1)
0x1e1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e2: Pop(0)
0x1e3: Push((int) 528260)
0x1e4: Push((int) 29624)
0x1e5: Push((int) 29623)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 29624)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral" // @poff=89
0x1ee: Call2 0xe7

0x1ef: Pop(1)
0x1f0: Push((int) 528261)
0x1f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f2: Pop(1)
0x1f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f4: Pop(0)
0x1f5: Push((int) 526126)
0x1f6: Push((int) 27406)
0x1f7: Push((int) 27405)
0x1f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f9: Pop(3)
0x1fa: Push((int) 528262)
0x1fb: Push((int) 29626)
0x1fc: Push((int) 29625)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 29626)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral" // @poff=89
0x205: Call2 0xe7

0x206: Pop(1)
0x207: Push((int) 528263)
0x208: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x209: Pop(1)
0x20a: @@@ ClearReplies(); Obj=0 // @poff=116
0x20b: Pop(0)
0x20c: Push((int) 528264)
0x20d: Push((int) 27408)
0x20e: Push((int) 29627)
0x20f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 27406)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral" // @poff=89
0x217: Call2 0xe7

0x218: Pop(1)
0x219: Push((int) 526127)
0x21a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21b: Pop(1)
0x21c: @@@ ClearReplies(); Obj=0 // @poff=116
0x21d: Pop(0)
0x21e: Push((int) 526128)
0x21f: Push((int) 27408)
0x220: Push((int) 27407)
0x221: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Push((int) 27408)
0x225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral" // @poff=89
0x229: Call2 0xe7

0x22a: Pop(1)
0x22b: Push((int) 526129)
0x22c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22d: Pop(1)
0x22e: @@@ ClearReplies(); Obj=0 // @poff=116
0x22f: Pop(0)
0x230: Push((int) 526130)
0x231: Push((int) 27410)
0x232: Push((int) 27409)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Push((int) 528265)
0x236: Push((int) -1)
0x237: Push((int) 29629)
0x238: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 27410)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral" // @poff=89
0x240: Call2 0xe7

0x241: Pop(1)
0x242: Push((int) 526131)
0x243: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x244: Pop(1)
0x245: @@@ ClearReplies(); Obj=0 // @poff=116
0x246: Pop(0)
0x247: Push((int) 526134)
0x248: Push((int) -1)
0x249: Push((int) 27413)
0x24a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24e: PushEmpty(bool)
0x24f: Call2 0x3df

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x252: @ lshStopAnimation()
0x253: Pop(0)
0x254: GOTO 0x257

0x255: @ StopAnimation()
0x256: Pop(0)
0x257: Return(); Pop(0)

0x258: GOTO 0xfe

0x259: Return(); Pop(0)

0x25a: PushEmpty(float, float)
0x25b: Stack[-2] = (int) 300
0x25c: Stack[-1] = (int) 100
0x25d: Call2 0x26f

0x25e: Pop(2)
0x25f: Push((int) 3)
0x260: @ Sleep(Stack[-1])
0x261: Pop(1)
0x262: GOTO 0x25a

0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: PushEmpty()
0x266: Call2 0x2b0

0x267: Pop(0)
0x268: PushEmpty(int, object)
0x269: Stack[-3] = Stack[-1]
0x26a: Push(-2, 1); TaskCall(0)
0x26b: Call2 0x0

0x26c: Pop(-2, 1); TaskReturn
0x26d: Pop(2)
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: PushEmpty(bool)
0x271: Call2 0x31c

0x272: Pop(0)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Return(); Pop(0)

0x276: Push("player") // @poff=156
0x277: @ FindActor(Stack[-4]T, Stack[-1])
0x278: Pop(1)
0x279: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x27a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x27b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x27c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x27d: Push((int) 10)
0x27e: Push((float)1.0)
0x27f: @ SetTimer(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: PushEmpty()
0x282: Call2 0x2be

0x283: Pop(0)
0x284: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x286: Push((int) 10)
0x287: @ KillTimer(Stack[-1])
0x288: Pop(1)
0x289: Return(); Pop(0)

0x28a: PushEmpty(float, float)
0x28b: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-3] = (bool) 0
0x28e: Return(); Pop(2)

0x28f: PushEmpty(float, object)
0x290: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x291: Call2 0x314

0x292: Pop(1)
0x293: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x294: Push( Stack[2 + Tasks[-1].StackPointer] )
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x297: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x298: Return(); Pop(2)

0x299: PushEmpty()
0x29a: Push((int) 10)
0x29b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29c: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x29d: PushEmpty(bool)
0x29e: Call2 0x28a

0x29f: Pop(0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: PushEmpty(object)
0x2a4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2a5: Call2 0x383

0x2a6: Pop(1)
0x2a7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2a8: GOTO 0x2af

0x2a9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ab: Push("head") // @poff=170
0x2ac: @ UnlookAsync(Stack[-1])
0x2ad: Pop(1)
0x2ae: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2af: Return(); Pop(0)

0x2b0: PushEmpty()
0x2b1: Call2 0x30f

0x2b2: Pop(0)
0x2b3: Push((int) 10)
0x2b4: @ KillTimer(Stack[-1])
0x2b5: Pop(1)
0x2b6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b8: Push("head") // @poff=170
0x2b9: @ UnlookAsync(Stack[-1])
0x2ba: Pop(1)
0x2bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2bc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2bd: Return(); Pop(0)

0x2be: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2bf: @ WaitForAnimEnd()
0x2c0: Pop(0)
0x2c1: PushEmpty(bool)
0x2c2: Call2 0x31c

0x2c3: Pop(0)
0x2c4: Pop(1); Push((bool) Stack[-1] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c6: Return(); Pop(14)

0x2c7: PushEmpty(int)
0x2c8: Call2 0x3e8

0x2c9: Stack[-1] = Stack[-8]
0x2ca: Pop(1)
0x2cb: Stack[-6] = (int) 0
0x2cc: PushEmpty(bool)
0x2cd: Stack[-1] = (bool) 0
0x2ce: Push((int) 5)
0x2cf: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d1: PushEmpty(bool)
0x2d2: Call2 0x31c

0x2d3: Pop(0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: Stack[-1] = (bool) 1
0x2d6: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2d7: Push((int) 3)
0x2d8: @ irand(Stack[-6], Stack[-1])
0x2d9: Pop(1)
0x2da: Push((int) 0)
0x2db: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2dd: Push(Stack[-7])
0x2de: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2df: @ irand(Stack[-4], Stack[-7])
0x2e0: Pop(0)
0x2e1: Push("all") // @poff=138
0x2e2: PushEmpty(string, int)
0x2e3: Stack[-7] = Stack[-1]
0x2e4: Call2 0x3e1

0x2e5: Pop(1)
0x2e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: @ WaitForAnimEnd(Stack[-3])
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-3] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x30a

0x2ed: GOTO 0x2ff

0x2ee: Push((int) 1)
0x2ef: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f1: Push((int) 4)
0x2f2: @ rand(Stack[-3], Stack[-1])
0x2f3: Pop(1)
0x2f4: Push((int) 1)
0x2f5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f6: @ Sleep(Stack[-1], Stack[-2])
0x2f7: Pop(1)
0x2f8: Pop(0); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x30a

0x2fb: GOTO 0x2ff

0x2fc: Push(Stack[-6])
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: GOTO 0x30a

0x2ff: PushEmpty(bool)
0x300: Call2 0x30d

0x301: Pop(0)
0x302: Pop(1); Push((bool) Stack[-1] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: GOTO 0x30a

0x305: @ ResetAAS()
0x306: Pop(0)
0x307: Push((int) 1)
0x308: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x309: GOTO 0x2cc

0x30a: @ ResetAAS()
0x30b: Pop(0)
0x30c: Return(); Pop(14)

0x30d: Stack[-1] = (bool) 1
0x30e: Return(); Pop(0)

0x30f: @ StopAnimation()
0x310: Pop(0)
0x311: @ StopGroup0()
0x312: Pop(0)
0x313: Return(); Pop(0)

0x314: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x315: @ GetPosition(Stack[-3])
0x316: Pop(0)
0x317: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x318: Pop(0)
0x319: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31b: Return(); Pop(6)

0x31c: PushEmpty(bool, bool)
0x31d: @ IsLoaded(Stack[-1])
0x31e: Pop(0)
0x31f: Stack[-1] = Stack[-3]
0x320: Return(); Pop(2)

0x321: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x322: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x323: Pop(0)
0x324: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x325: Pop(0)
0x326: Push(CvectorIndex(Stack[-8], 1))
0x327: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x328: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x329: @ GetPosition(Stack[-7])
0x32a: Pop(0)
0x32b: @ GetEyesHeight(Stack[-9])
0x32c: Pop(0)
0x32d: Push(CvectorIndex(Stack[-7], 1))
0x32e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x330: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x331: Push(CvectorIndex(Stack[-6], 1))
0x332: Stack[-1] = (int) 0
0x333: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x334: Pop(0); Push(Stack[-6] | Stack[-6]);
0x335: Pop(1); Push(Sqrt(Stack[-1]))
0x336: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x337: Stack[-5] = -Stack[-6]; Pop(0);
0x338: Pop(0); Push(Stack[-6] * Stack[-19]);
0x339: PushEmpty(cvector, cvector)
0x33a: Push([0.0, 1.0, 0.0])
0x33b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x33c: Call2 0x395

0x33d: Pop(1)
0x33e: Push((int) 25)
0x33f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x340: Pop(2); Push(Stack[-2] + Stack[-1]);
0x341: Push([0.0, 10.0, 0.0])
0x342: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x343: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x344: @ IsOverrideActive(Stack[-2])
0x345: Pop(0)
0x346: Push(Stack[-2])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-21] = (bool) 0
0x349: Return(); Pop(18)

0x34a: @ StopWorld()
0x34b: Pop(0)
0x34c: @ CameraTransit(Stack[-3], Stack[-5])
0x34d: Pop(0)
0x34e: Push(CvectorIndex(Stack[-4], 0))
0x34f: Push(CvectorIndex(Stack[-5], 2))
0x350: @ Rotate(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: PushEmpty(bool)
0x353: Call2 0x3df

0x354: Pop(0)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: GOTO 0x35f

0x357: Push("head") // @poff=170
0x358: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x359: Pop(1)
0x35a: Push(Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: Push("head") // @poff=170
0x35d: @ LookAsyncCamera(Stack[-1])
0x35e: Pop(1)
0x35f: @ CameraWaitForPlayFinish()
0x360: Pop(0)
0x361: @ ResumeWorld()
0x362: Pop(0)
0x363: Stack[-21] = (bool) 1
0x364: Return(); Pop(18)

0x365: PushEmpty(bool, bool)
0x366: @ CameraSwitchToNormal()
0x367: Pop(0)
0x368: PushEmpty(bool)
0x369: Call2 0x3df

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: GOTO 0x375

0x36d: Push("head") // @poff=170
0x36e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x36f: Pop(1)
0x370: Push(Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x372: Push("head") // @poff=170
0x373: @ UnlookAsync(Stack[-1])
0x374: Pop(1)
0x375: Return(); Pop(2)

0x376: PushEmpty(float, float, float, float)
0x377: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x378: Pop(0)
0x379: Push((bool) 0)
0x37a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(1)
0x37c: Return(); Pop(4)

0x37d: PushEmpty(float, float, float, float)
0x37e: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x37f: Pop(0)
0x380: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x381: Pop(0)
0x382: Return(); Pop(4)

0x383: PushEmpty(float, cvector, float, cvector)
0x384: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x385: Pop(0)
0x386: Stack[-1] = [0.0, 0.0, 0.0]
0x387: Push(CvectorIndex(Stack[-1], 1))
0x388: Stack[-3] = Stack[-1]
0x389: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x38a: Push("head") // @poff=170
0x38b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x38c: Pop(1)
0x38d: Return(); Pop(4)

0x38e: PushEmpty(bool)
0x38f: Call2 0x3df

0x390: Pop(0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: @ lshStopSpeech()
0x393: Pop(0)
0x394: Return(); Pop(0)

0x395: PushEmpty(float, float)
0x396: Pop(0); Push(Stack[-3] | Stack[-3]);
0x397: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x398: Push((float)9.999999974752427e-07)
0x399: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-4] = [0.0, 0.0, 0.0]
0x39c: Return(); Pop(2)

0x39d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x39e: Return(); Pop(2)

0x39f: PushEmpty(int, int)
0x3a0: @ GetVariable(Stack[-3], Stack[-1])
0x3a1: Pop(0)
0x3a2: Stack[-1] = Stack[-4]
0x3a3: Return(); Pop(2)

0x3a4: PushEmpty(object, object)
0x3a5: @ FindActor(Stack[-1], Stack[-4])
0x3a6: Pop(0)
0x3a7: Pop(0); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a9: Push("Door ") // @poff=206
0x3aa: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3ab: Push(" not found") // @poff=218
0x3ac: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ad: @ Trace(Stack[-1])
0x3ae: Pop(1)
0x3af: GOTO 0x3b3

0x3b0: Push("locked") // @poff=240
0x3b1: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=254
0x3b2: Pop(1)
0x3b3: Return(); Pop(2)

0x3b4: Stack[-1] = 0
0x3b5: PushEmpty(object, object)
0x3b6: @ FindActor(Stack[-1], Stack[-4])
0x3b7: Pop(0)
0x3b8: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-5] = (bool) 0
0x3bb: Return(); Pop(2)

0x3bc: @ Trigger(Stack[-1], Stack[-3])
0x3bd: Pop(0)
0x3be: Stack[-5] = (bool) 1
0x3bf: Return(); Pop(2)

0x3c0: Stack[-1] = 0
0x3c1: PushEmpty(float, float)
0x3c2: @ GetGameTime(Stack[-1])
0x3c3: Pop(0)
0x3c4: Stack[-1] = Stack[-3]
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty(float, float)
0x3c7: @ GetGameTime(Stack[-1])
0x3c8: Pop(0)
0x3c9: Push((int) 1)
0x3ca: PushEmpty(int)
0x3cb: Push((int) 24)
0x3cc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3cd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3ce: Return(); Pop(2)

0x3cf: PushEmpty(float, float)
0x3d0: @ GetGameTime(Stack[-1])
0x3d1: Pop(0)
0x3d2: PushEmpty(int)
0x3d3: Stack[-2] = Stack[-1]
0x3d4: Push((int) 24)
0x3d5: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x3d6: Return(); Pop(2)

0x3d7: Stack[-1] = (int) 515571
0x3d8: Return(); Pop(0)

0x3d9: Stack[-1] = (int) 504029
0x3da: Return(); Pop(0)

0x3db: Stack[-1] = "ui/NPC_bmask.png" // @poff=266
0x3dc: Return(); Pop(0)

0x3dd: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=300
0x3de: Return(); Pop(0)

0x3df: Stack[-1] = (bool) 0
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(string, string)
0x3e2: Stack[-1] = "idle" // @poff=146
0x3e3: Push(Stack[-3])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3e6: Stack[-1] = Stack[-4]
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty(int, bool, int, bool)
0x3e9: Stack[-2] = (int) 0
0x3ea: Push("all") // @poff=138
0x3eb: PushEmpty(string, int)
0x3ec: Stack[-5] = Stack[-1]
0x3ed: Call2 0x3e1

0x3ee: Pop(1)
0x3ef: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(2)
0x3f1: Pop(0); Push((bool) Stack[-1] == 0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: GOTO 0x3f7

0x3f4: Push((int) 1)
0x3f5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3f6: GOTO 0x3ea

0x3f7: Stack[-2] = Stack[-5]
0x3f8: Return(); Pop(4)

0x3f9: PushEmpty()
0x3fa: Push("ook7Birdmask1") // @poff=338
0x3fb: Push((int) 1)
0x3fc: @ SetVariable(Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty(object, object)
0x400: PushEmpty(int, string)
0x401: Stack[-1] = "k7q01CorpseMark" // @poff=366
0x402: Call2 0x39f

0x403: Pop(1)
0x404: Push((int) 0)
0x405: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x407: Push("k7q01CorpseMark") // @poff=366
0x408: Push((int) 1)
0x409: @ SetVariable(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: PushEmpty(object)
0x40c: Call2 0x4ac

0x40d: Stack[-1] = Stack[-2]
0x40e: Pop(1)
0x40f: Push("k7q01BirdmaskGotoCorpse") // @poff=398
0x410: Push("pt_d7q02_corpse") // @poff=446
0x411: Push((int) 3)
0x412: Push((int) 526214)
0x413: PushEmpty(float)
0x414: Call2 0x3c1

0x415: Pop(0)
0x416: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=478
0x417: Pop(5)
0x418: PushEmpty(bool, string, string)
0x419: Stack[-2] = "quest_k7_01" // @poff=486
0x41a: Stack[-1] = "place_corpse" // @poff=510
0x41b: Call2 0x3b5

0x41c: Pop(3)
0x41d: Stack[-1] = 0
0x41e: Return(); Pop(2)

0x41f: PushEmpty()
0x420: PushEmpty(object, string, float)
0x421: PushEmpty(object)
0x422: Call2 0x4ac

0x423: Stack[-1] = Stack[-4]
0x424: Pop(1)
0x425: Stack[-2] = "pt_d7q02_corpse" // @poff=446
0x426: Stack[-1] = (int) 2
0x427: Call2 0x4bd

0x428: Pop(3)
0x429: PushEmpty(object)
0x42a: Call2 0x4ac

0x42b: Pop(0)
0x42c: @@ ShowMap(Stack[-1]); Obj=2 // @poff=536
0x42d: Pop(1)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(string, bool)
0x431: Stack[-2] = "sobor@door1" // @poff=544
0x432: Stack[-1] = (bool) 0
0x433: Call2 0x3a4

0x434: Pop(2)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: PushEmpty(int, string)
0x438: Stack[-1] = "ook7Birdmask1" // @poff=338
0x439: Call2 0x39f

0x43a: Pop(1)
0x43b: Push((int) 0)
0x43c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-2] = (bool) 1
0x43f: Return(); Pop(0)

0x440: Stack[-2] = (bool) 0
0x441: Return(); Pop(0)

0x442: PushEmpty()
0x443: PushEmpty(bool, object)
0x444: Stack[-3] = Stack[-1]
0x445: Call2 0x460

0x446: Pop(1)
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-2] = (bool) 1
0x449: Return(); Pop(0)

0x44a: Stack[-2] = (bool) 0
0x44b: Return(); Pop(0)

0x44c: PushEmpty()
0x44d: PushEmpty(bool, object)
0x44e: Stack[-3] = Stack[-1]
0x44f: Call2 0x490

0x450: Pop(1)
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: Stack[-2] = (bool) 1
0x453: Return(); Pop(0)

0x454: Stack[-2] = (bool) 0
0x455: Return(); Pop(0)

0x456: PushEmpty()
0x457: PushEmpty(bool, object)
0x458: Stack[-3] = Stack[-1]
0x459: Call2 0x497

0x45a: Pop(1)
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-2] = (bool) 1
0x45d: Return(); Pop(0)

0x45e: Stack[-2] = (bool) 0
0x45f: Return(); Pop(0)

0x460: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x461: Push((int) 1)
0x462: @@ GetItemCount(Stack[-11], Stack[-1]); Obj=22 // @poff=568
0x463: Pop(1)
0x464: Push("bird_mask") // @poff=581
0x465: @ GetInvItemByName(Stack[-10], Stack[-1])
0x466: Pop(1)
0x467: Push("bird_balahon") // @poff=601
0x468: @ GetInvItemByName(Stack[-9], Stack[-1])
0x469: Pop(1)
0x46a: Stack[-7] = (bool) 0
0x46b: Stack[-6] = (bool) 0
0x46c: Stack[-5] = (int) 0
0x46d: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x46e: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x46f: Push((int) 1)
0x470: @@ GetItem(Stack[-5], Stack[-6], Stack[-1]); Obj=22 // @poff=627
0x471: Pop(1)
0x472: @@ GetItemID(Stack[-3]); Obj=4 // @poff=635
0x473: Pop(0)
0x474: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x475: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x476: Push((int) 1)
0x477: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1]); Obj=22 // @poff=645
0x478: Pop(1)
0x479: Push(Stack[-2])
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Stack[-7] = (bool) 1
0x47c: GOTO 0x485

0x47d: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x47e: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x47f: Push((int) 1)
0x480: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1]); Obj=22 // @poff=645
0x481: Pop(1)
0x482: Push(Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x484: Stack[-6] = (bool) 1
0x485: Stack[-4] = 0
0x486: Push((int) 1)
0x487: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x488: GOTO 0x46d

0x489: Stack[-22] = (bool) 0
0x48a: Push(Stack[-7])
0x48b: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48c: Push(Stack[-6])
0x48d: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48e: Stack[-22] = (bool) 1
0x48f: Return(); Pop(20)

0x490: PushEmpty()
0x491: PushEmpty(int)
0x492: Call2 0x3c6

0x493: Pop(0)
0x494: Push((int) 7)
0x495: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x496: Return(); Pop(0)

0x497: PushEmpty()
0x498: PushEmpty(bool)
0x499: Stack[-1] = (bool) 0
0x49a: PushEmpty(int)
0x49b: Call2 0x3cf

0x49c: Pop(0)
0x49d: Push((int) 0)
0x49e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a0: PushEmpty(int)
0x4a1: Call2 0x3cf

0x4a2: Pop(0)
0x4a3: Push((int) 12)
0x4a4: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Stack[-1] = (bool) 1
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: Stack[-2] = (bool) 1
0x4a9: Return(); Pop(0)

0x4aa: Stack[-2] = (bool) 0
0x4ab: Return(); Pop(0)

0x4ac: PushEmpty(object, object, object, object)
0x4ad: @ GetMainOutdoorScene(Stack[-2])
0x4ae: Pop(0)
0x4af: Pop(0); PushNull((bool) Stack[-2] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b1: Push("Can't find main outdoor scene") // @poff=660
0x4b2: @ Trace(Stack[-1])
0x4b3: Pop(1)
0x4b4: Stack[-1] = 0
0x4b5: Stack[-1] = Stack[-5]
0x4b6: Return(); Pop(4)

0x4b7: @@ GetMap(Stack[-1]); Obj=2 // @poff=720
0x4b8: Pop(0)
0x4b9: Stack[-1] = Stack[-5]
0x4ba: Return(); Pop(4)

0x4bb: Stack[-1] = 0
0x4bc: Stack[-2] = 0
0x4bd: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4be: @ GetMainOutdoorScene(Stack[-2])
0x4bf: Pop(0)
0x4c0: Pop(0); PushNull((bool) Stack[-2] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c2: Push("Can't find main outdoor scene") // @poff=660
0x4c3: @ Trace(Stack[-1])
0x4c4: Pop(1)
0x4c5: Return(); Pop(8)

0x4c6: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=727
0x4c7: Pop(0)
0x4c8: Pop(0); Push((bool) Stack[-1] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ca: Push("Warning: outdoor scene locator ") // @poff=738
0x4cb: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4cc: Push(" doesnt exist") // @poff=802
0x4cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ce: @ Trace(Stack[-1])
0x4cf: Pop(1)
0x4d0: @@ GetMap(Stack[-11]); Obj=2 // @poff=720
0x4d1: Pop(0)
0x4d2: Pop(0); PushNull((bool) Stack[-11] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d4: Push("Can't find map") // @poff=830
0x4d5: @ Trace(Stack[-1])
0x4d6: Pop(1)
0x4d7: Return(); Pop(8)

0x4d8: Push(CvectorIndex(Stack[-4], 0))
0x4d9: Push(CvectorIndex(Stack[-5], 2))
0x4da: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=860
0x4db: Pop(2)
0x4dc: Return(); Pop(8)

0x4dd: Stack[-2] = 0
0x4de: PushEmpty(int, int)
0x4df: Push("branch") // @poff=873
0x4e0: @ GetVariable(Stack[-1], Stack[-2])
0x4e1: Pop(1)
0x4e2: Push((int) 0)
0x4e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e5: Stack[-3] = (int) 1
0x4e6: Return(); Pop(2)

0x4e7: GOTO 0x4ed

0x4e8: Push((int) 1)
0x4e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-3] = (int) 2
0x4ec: Return(); Pop(2)

0x4ed: Stack[-3] = (int) 3
0x4ee: Return(); Pop(2)

