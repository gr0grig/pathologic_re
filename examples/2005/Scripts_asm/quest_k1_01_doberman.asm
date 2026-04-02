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
	W:lockpick
	W:fdie
	A:GetPosition
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:fhit
	W:bhit
	W:hit_react
	W:1
	W:2
	A:add
	A:size
	A:get
	W:scripted
	W:blood_dir.xml
	W:ook1Lisa1
	W:k1q01
	W:branch
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:health
	W:quest_k1_01
	W:doberman_dead
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000680065006100640000006c006f0063006b007000690063006b00000066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c0000006f006f006b0031004c00690073006100310000006b00310071003000310000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e00670000006800650061006c00740068000000710075006500730074005f006b0031005f0030003100000064006f006200650072006d0061006e005f0064006500610064000000
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
	AddItem (4 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
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
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0x1a7
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbc Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1b1 Vars = (object)
		EVENT_7 Op = 0x1e6 Vars = (int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x27b Vars = (object)
		EVENT_22 Op = 0x2fa Vars = (object, int, float, float)
		EVENT_16 Op = 0x2fc Vars = (object, string)
		EVENT_41 Op = 0x2fe Vars = (object)

Events:
EVENT_22 Op = 0x4b6 Vars = (object, int, float, float)
EVENT_43 Op = 0x4be Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x4c8 Vars = (object, string)
EVENT_41 Op = 0x4d5 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x392

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4a6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4a4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4a8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4aa

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x480

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
0x41: Call2 0x3d6

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
0x4f: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x468

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x474

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x462

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral" // @poff=89
0x65: Call2 0xa6

0x66: Pop(1)
0x67: Push((int) 524677)
0x68: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x69: Pop(1)
0x6a: @@@ ClearReplies(); Obj=0 // @poff=116
0x6b: Pop(0)
0x6c: Push((int) 524678)
0x6d: Push((int) 28065)
0x6e: Push((int) 26017)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: GOTO 0x88

0x72: PushEmpty(string)
0x73: Stack[-1] = "Neutral" // @poff=89
0x74: Call2 0xa6

0x75: Pop(1)
0x76: Push((int) 524679)
0x77: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x78: Pop(1)
0x79: @@@ ClearReplies(); Obj=0 // @poff=116
0x7a: Pop(0)
0x7b: Push((int) 524680)
0x7c: Push((int) -1)
0x7d: Push((int) 26019)
0x7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7f: Pop(3)
0x80: Push((int) 526801)
0x81: Push((int) -1)
0x82: Push((int) 28081)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: GOTO 0x88

0x86: Return(); Pop(0)

0x87: GOTO 0x4e

0x88: PushEmpty(bool)
0x89: Call2 0x4ac

0x8a: Pop(0)
0x8b: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8c: @ lshWaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: PushEmpty(string)
0x92: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x93: Call2 0x3e7

0x94: Pop(1)
0x95: GOTO 0x8c

0x96: GOTO 0xa5

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: @ WaitForAnimEnd()
0x9c: Pop(0)
0x9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: GOTO 0xa5

0xa0: Push("all") // @poff=138
0xa1: Push("idle") // @poff=146
0xa2: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: GOTO 0x9b

0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: PushEmpty(bool)
0xa8: Call2 0x4ac

0xa9: Pop(0)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Return(); Pop(0)

0xad: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: PushEmpty(string, bool)
0xb1: Stack[-3] = Stack[-2]
0xb2: Push("") // @poff=102
0xb3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb5: Stack[-1] = (bool) 0
0xb6: GOTO 0xb8

0xb7: Stack[-1] = (bool) 1
0xb8: Call2 0x3ee

0xb9: Pop(2)
0xba: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: Push((int) 1)
0xbe: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0xbf: PushEmpty()
0xc0: Call2 0x3ff

0xc1: Pop(0)
0xc2: Push((int) 26016)
0xc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 0
0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x468

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call2 0x474

0xcf: Pop(1)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Stack[-1] = (bool) 1
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x462

0xd7: Pop(2)
0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0xa6

0xdb: Pop(1)
0xdc: Push((int) 524677)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 524678)
0xe2: Push((int) 28065)
0xe3: Push((int) 26017)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral" // @poff=89
0xe9: Call2 0xa6

0xea: Pop(1)
0xeb: Push((int) 524679)
0xec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xed: Pop(1)
0xee: @@@ ClearReplies(); Obj=0 // @poff=116
0xef: Pop(0)
0xf0: Push((int) 524680)
0xf1: Push((int) -1)
0xf2: Push((int) 26019)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Push((int) 526801)
0xf6: Push((int) -1)
0xf7: Push((int) 28081)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 28065)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral" // @poff=89
0x100: Call2 0xa6

0x101: Pop(1)
0x102: Push((int) 526785)
0x103: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x104: Pop(1)
0x105: @@@ ClearReplies(); Obj=0 // @poff=116
0x106: Pop(0)
0x107: Push((int) 526786)
0x108: Push((int) 28067)
0x109: Push((int) 28066)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 28067)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral" // @poff=89
0x112: Call2 0xa6

0x113: Pop(1)
0x114: Push((int) 526787)
0x115: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x116: Pop(1)
0x117: @@@ ClearReplies(); Obj=0 // @poff=116
0x118: Pop(0)
0x119: Push((int) 526788)
0x11a: Push((int) 28069)
0x11b: Push((int) 28068)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 28069)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral" // @poff=89
0x124: Call2 0xa6

0x125: Pop(1)
0x126: Push((int) 526789)
0x127: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x128: Pop(1)
0x129: @@@ ClearReplies(); Obj=0 // @poff=116
0x12a: Pop(0)
0x12b: Push((int) 526795)
0x12c: Push((int) 28076)
0x12d: Push((int) 28075)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 28076)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral" // @poff=89
0x136: Call2 0xa6

0x137: Pop(1)
0x138: Push((int) 526796)
0x139: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13a: Pop(1)
0x13b: @@@ ClearReplies(); Obj=0 // @poff=116
0x13c: Pop(0)
0x13d: Push((int) 526797)
0x13e: Push((int) 28078)
0x13f: Push((int) 28077)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 28078)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral" // @poff=89
0x148: Call2 0xa6

0x149: Pop(1)
0x14a: Push((int) 526798)
0x14b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14c: Pop(1)
0x14d: @@@ ClearReplies(); Obj=0 // @poff=116
0x14e: Pop(0)
0x14f: Push((int) 526799)
0x150: Push((int) 28080)
0x151: Push((int) 28079)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 28080)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Neutral" // @poff=89
0x15a: Call2 0xa6

0x15b: Pop(1)
0x15c: Push((int) 526800)
0x15d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15e: Pop(1)
0x15f: @@@ ClearReplies(); Obj=0 // @poff=116
0x160: Pop(0)
0x161: Push((int) 526793)
0x162: Push((int) 28071)
0x163: Push((int) 28073)
0x164: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x165: Pop(3)
0x166: Push((int) 526790)
0x167: Push((int) 28082)
0x168: Push((int) 28070)
0x169: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 28082)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral" // @poff=89
0x171: Call2 0xa6

0x172: Pop(1)
0x173: Push((int) 526802)
0x174: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x175: Pop(1)
0x176: @@@ ClearReplies(); Obj=0 // @poff=116
0x177: Pop(0)
0x178: Push((int) 526803)
0x179: Push((int) -1)
0x17a: Push((int) 28083)
0x17b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17c: Pop(3)
0x17d: Push((int) 526804)
0x17e: Push((int) -1)
0x17f: Push((int) 28084)
0x180: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 28071)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral" // @poff=89
0x188: Call2 0xa6

0x189: Pop(1)
0x18a: Push((int) 526791)
0x18b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18c: Pop(1)
0x18d: @@@ ClearReplies(); Obj=0 // @poff=116
0x18e: Pop(0)
0x18f: Push((int) 526792)
0x190: Push((int) -1)
0x191: Push((int) 28072)
0x192: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x193: Pop(3)
0x194: Push((int) 526794)
0x195: Push((int) -1)
0x196: Push((int) 28074)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19b: PushEmpty(bool)
0x19c: Call2 0x4ac

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19f: @ lshStopAnimation()
0x1a0: Pop(0)
0x1a1: GOTO 0x1a4

0x1a2: @ StopAnimation()
0x1a3: Pop(0)
0x1a4: Return(); Pop(0)

0x1a5: GOTO 0xbd

0x1a6: Return(); Pop(0)

0x1a7: Push((int) 3)
0x1a8: @ Sleep(Stack[-1])
0x1a9: Pop(1)
0x1aa: PushEmpty(float, float)
0x1ab: Stack[-2] = (int) 300
0x1ac: Stack[-1] = (int) 100
0x1ad: Call2 0x1bc

0x1ae: Pop(2)
0x1af: GOTO 0x1a7

0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: PushEmpty()
0x1b3: Call2 0x1fd

0x1b4: Pop(0)
0x1b5: PushEmpty(int, object)
0x1b6: Stack[-3] = Stack[-1]
0x1b7: Push(-2, 1); TaskCall(0)
0x1b8: Call2 0x0

0x1b9: Pop(-2, 1); TaskReturn
0x1ba: Pop(2)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty()
0x1bd: PushEmpty(bool)
0x1be: Call2 0x38d

0x1bf: Pop(0)
0x1c0: Pop(1); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Return(); Pop(0)

0x1c3: Push("player") // @poff=156
0x1c4: @ FindActor(Stack[-4]T, Stack[-1])
0x1c5: Pop(1)
0x1c6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c8: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1c9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ca: Push((int) 10)
0x1cb: Push((float)1.0)
0x1cc: @ SetTimer(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: PushEmpty()
0x1cf: Call2 0x20b

0x1d0: Pop(0)
0x1d1: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: Push((int) 10)
0x1d4: @ KillTimer(Stack[-1])
0x1d5: Pop(1)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(float, float)
0x1d8: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-3] = (bool) 0
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(float, object)
0x1dd: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1de: Call2 0x307

0x1df: Pop(1)
0x1e0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1e1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1e4: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1e5: Return(); Pop(2)

0x1e6: PushEmpty()
0x1e7: Push((int) 10)
0x1e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x1d7

0x1ec: Pop(0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ee: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(object)
0x1f1: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f2: Call2 0x3f4

0x1f3: Pop(1)
0x1f4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1f5: GOTO 0x1fc

0x1f6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f8: Push("head") // @poff=170
0x1f9: @ UnlookAsync(Stack[-1])
0x1fa: Pop(1)
0x1fb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty()
0x1fe: Call2 0x25c

0x1ff: Pop(0)
0x200: Push((int) 10)
0x201: @ KillTimer(Stack[-1])
0x202: Pop(1)
0x203: Push( Stack[2 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x205: Push("head") // @poff=170
0x206: @ UnlookAsync(Stack[-1])
0x207: Pop(1)
0x208: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x209: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x20a: Return(); Pop(0)

0x20b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x20c: @ WaitForAnimEnd()
0x20d: Pop(0)
0x20e: PushEmpty(bool)
0x20f: Call2 0x38d

0x210: Pop(0)
0x211: Pop(1); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Return(); Pop(14)

0x214: PushEmpty(int)
0x215: Call2 0x451

0x216: Stack[-1] = Stack[-8]
0x217: Pop(1)
0x218: Stack[-6] = (int) 0
0x219: PushEmpty(bool)
0x21a: Stack[-1] = (bool) 0
0x21b: Push((int) 5)
0x21c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: PushEmpty(bool)
0x21f: Call2 0x38d

0x220: Pop(0)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Stack[-1] = (bool) 1
0x223: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x224: Push((int) 3)
0x225: @ irand(Stack[-6], Stack[-1])
0x226: Pop(1)
0x227: Push((int) 0)
0x228: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x22a: Push(Stack[-7])
0x22b: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22c: @ irand(Stack[-4], Stack[-7])
0x22d: Pop(0)
0x22e: Push("all") // @poff=138
0x22f: PushEmpty(string, int)
0x230: Stack[-7] = Stack[-1]
0x231: Call2 0x44a

0x232: Pop(1)
0x233: @ PlayAnimation(Stack[-2], Stack[-1])
0x234: Pop(2)
0x235: @ WaitForAnimEnd(Stack[-3])
0x236: Pop(0)
0x237: Pop(0); Push((bool) Stack[-3] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x257

0x23a: GOTO 0x24c

0x23b: Push((int) 1)
0x23c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23e: Push((int) 4)
0x23f: @ rand(Stack[-3], Stack[-1])
0x240: Pop(1)
0x241: Push((int) 1)
0x242: Pop(1); Push(Stack[-3] + Stack[-1]);
0x243: @ Sleep(Stack[-1], Stack[-2])
0x244: Pop(1)
0x245: Pop(0); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x257

0x248: GOTO 0x24c

0x249: Push(Stack[-6])
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: GOTO 0x257

0x24c: PushEmpty(bool)
0x24d: Call2 0x25a

0x24e: Pop(0)
0x24f: Pop(1); Push((bool) Stack[-1] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x257

0x252: @ ResetAAS()
0x253: Pop(0)
0x254: Push((int) 1)
0x255: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x256: GOTO 0x219

0x257: @ ResetAAS()
0x258: Pop(0)
0x259: Return(); Pop(14)

0x25a: Stack[-1] = (bool) 1
0x25b: Return(); Pop(0)

0x25c: @ StopAnimation()
0x25d: Pop(0)
0x25e: @ StopGroup0()
0x25f: Pop(0)
0x260: Return(); Pop(0)

0x261: PushEmpty(bool, bool)
0x262: Push("lockpick") // @poff=180
0x263: Push((int) 0)
0x264: Push((int) 1)
0x265: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: PushEmpty(object)
0x268: Stack[-4] = Stack[-1]
0x269: Call2 0x26c

0x26a: Pop(1)
0x26b: Return(); Pop(2)

0x26c: PushEmpty()
0x26d: EventDisable(0)
0x26e: PushEmpty(object)
0x26f: Stack[-2] = Stack[-1]
0x270: Call2 0x285

0x271: Pop(1)
0x272: Push((int) 50)
0x273: Push((int) 40)
0x274: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: EventEnable(0)
0x277: @ Hold()
0x278: Pop(0)
0x279: GOTO 0x277

0x27a: Return(); Pop(0)

0x27b: PushEmpty(bool, bool)
0x27c: @ IsOverrideActive(Stack[-1])
0x27d: Pop(0)
0x27e: Pop(0); Push((bool) Stack[-1] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x280: PushEmpty(object)
0x281: Stack[-4] = Stack[-1]
0x282: Call2 0x497

0x283: Pop(1)
0x284: Return(); Pop(2)

0x285: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x286: Pop(0); PushNull((bool) Stack[-21] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "fdie" // @poff=198
0x28a: Call2 0x2e0

0x28b: Pop(1)
0x28c: GOTO 0x2df

0x28d: @@ GetPosition(Stack[-10]); Obj=21 // @poff=208
0x28e: Pop(0)
0x28f: @ GetPosition(Stack[-9])
0x290: Pop(0)
0x291: @ GetDirection(Stack[-8])
0x292: Pop(0)
0x293: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x294: Push(CvectorIndex(Stack[-7], 0))
0x295: Push(CvectorIndex(Stack[-9], 0))
0x296: Pop(2); Push(Stack[-2] * Stack[-1]);
0x297: Push(CvectorIndex(Stack[-8], 2))
0x298: Push(CvectorIndex(Stack[-10], 2))
0x299: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29b: Push((int) 0)
0x29c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-6] = "fdie" // @poff=198
0x29f: GOTO 0x2a1

0x2a0: Stack[-6] = "bdie" // @poff=220
0x2a1: @ RemoveRTEnvelope()
0x2a2: Pop(0)
0x2a3: @ SetDeathState()
0x2a4: Pop(0)
0x2a5: @ Stop()
0x2a6: Pop(0)
0x2a7: @ StopAsync()
0x2a8: Pop(0)
0x2a9: Stack[-21] = Stack[-5]
0x2aa: Push("GetScriptProperty") // @poff=230
0x2ab: Push((int) 2)
0x2ac: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2ae: Push("Owner") // @poff=266
0x2af: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=278
0x2b0: Pop(1)
0x2b1: Push(Stack[-4])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b3: Push("Owner") // @poff=266
0x2b4: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=296
0x2b5: Pop(1)
0x2b6: Pop(0); PushNull((bool) Stack[-5] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Stack[-21] = Stack[-5]
0x2b9: Push("@GetEyesHeight") // @poff=314
0x2ba: Push((int) 1)
0x2bb: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2bd: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=344
0x2be: Pop(0)
0x2bf: Stack[-1] = [0.0, 0.0, 0.0]
0x2c0: Push(CvectorIndex(Stack[-1], 1))
0x2c1: Stack[-3] = Stack[-1]
0x2c2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c3: Push("head") // @poff=170
0x2c4: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2c5: Pop(1)
0x2c6: Stack[-3] = (bool) 1
0x2c7: GOTO 0x2c9

0x2c8: Stack[-3] = (bool) 0
0x2c9: PushEmpty(string)
0x2ca: Stack[-7] = Stack[-1]
0x2cb: Call2 0x406

0x2cc: Pop(1)
0x2cd: Push("all") // @poff=138
0x2ce: @ PlayAnimation(Stack[-1], Stack[-7])
0x2cf: Pop(1)
0x2d0: @ WaitForAnimEnd()
0x2d1: Pop(0)
0x2d2: Push(Stack[-3])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d4: @ StopAsync()
0x2d5: Pop(0)
0x2d6: Push("head") // @poff=170
0x2d7: @ UnlookAsync(Stack[-1])
0x2d8: Pop(1)
0x2d9: Push("all") // @poff=138
0x2da: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2db: Pop(1)
0x2dc: @ RemoveEnvelope()
0x2dd: Pop(0)
0x2de: Stack[-5] = 0
0x2df: Return(); Pop(20)

0x2e0: PushEmpty()
0x2e1: @ RemoveRTEnvelope()
0x2e2: Pop(0)
0x2e3: @ SetDeathState()
0x2e4: Pop(0)
0x2e5: @ Stop()
0x2e6: Pop(0)
0x2e7: @ StopAsync()
0x2e8: Pop(0)
0x2e9: @ StopSecondaryAnimation()
0x2ea: Pop(0)
0x2eb: PushEmpty(string)
0x2ec: Stack[-2] = Stack[-1]
0x2ed: Call2 0x406

0x2ee: Pop(1)
0x2ef: Push("all") // @poff=138
0x2f0: @ PlayAnimation(Stack[-1], Stack[-2])
0x2f1: Pop(1)
0x2f2: @ WaitForAnimEnd()
0x2f3: Pop(0)
0x2f4: Push("all") // @poff=138
0x2f5: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x2f6: Pop(1)
0x2f7: @ RemoveEnvelope()
0x2f8: Pop(0)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: Return(); Pop(0)

0x300: PushEmpty(cvector, cvector, cvector, cvector)
0x301: @ GetPosition(Stack[-2])
0x302: Pop(0)
0x303: @@ GetPosition(Stack[-1]); Obj=5 // @poff=208
0x304: Pop(0)
0x305: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x306: Return(); Pop(4)

0x307: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x308: @ GetPosition(Stack[-3])
0x309: Pop(0)
0x30a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=208
0x30b: Pop(0)
0x30c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x30d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x30e: Return(); Pop(6)

0x30f: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x310: Pop(0); PushNull((bool) Stack[-15] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: Return(); Pop(14)

0x313: @ IsDead(Stack[-7])
0x314: Pop(0)
0x315: Push(Stack[-7])
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Return(); Pop(14)

0x318: @ GetSecondaryAnimationType(Stack[-6])
0x319: Pop(0)
0x31a: Push((int) 0)
0x31b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: Return(); Pop(14)

0x31e: @@ GetPosition(Stack[-5]); Obj=15 // @poff=208
0x31f: Pop(0)
0x320: @ GetPosition(Stack[-4])
0x321: Pop(0)
0x322: @ GetDirection(Stack[-3])
0x323: Pop(0)
0x324: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x325: Push(CvectorIndex(Stack[-2], 0))
0x326: Push(CvectorIndex(Stack[-4], 0))
0x327: Pop(2); Push(Stack[-2] * Stack[-1]);
0x328: Push(CvectorIndex(Stack[-3], 2))
0x329: Push(CvectorIndex(Stack[-5], 2))
0x32a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x32b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32c: Push((int) 0)
0x32d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-1] = "fhit" // @poff=358
0x330: GOTO 0x332

0x331: Stack[-1] = "bhit" // @poff=368
0x332: Push("hit_react") // @poff=378
0x333: Push("1") // @poff=398
0x334: Pop(1); Push(Stack[-3] + Stack[-1]);
0x335: Push("2") // @poff=402
0x336: Pop(1); Push(Stack[-4] + Stack[-1]);
0x337: Push((int) -10)
0x338: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(4)
0x33a: Return(); Pop(14)

0x33b: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x33c: PushEmpty(bool)
0x33d: Stack[-1] = (bool) 0
0x33e: PushEmpty(bool)
0x33f: Stack[-1] = (bool) 0
0x340: Push(Stack[-23])
0x341: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x342: Push((int) 4)
0x343: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: Stack[-1] = (bool) 1
0x346: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x347: Push((int) 5)
0x348: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Stack[-1] = (bool) 1
0x34b: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x34c: PushEmpty(cvector, cvector)
0x34d: PushEmpty(cvector, object)
0x34e: Stack[-25] = Stack[-1]
0x34f: Call2 0x300

0x350: Stack[-2] = Stack[-3]
0x351: Pop(2)
0x352: Call2 0x42f

0x353: Stack[-2] = Stack[-11]
0x354: Pop(2)
0x355: @ CreateVectorVector(Stack[-8])
0x356: Pop(0)
0x357: Stack[-7] = (int) 1
0x358: Push("hit") // @poff=360
0x359: Pop(1); Push(Stack[-1] + Stack[-8]);
0x35a: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x35b: Pop(1)
0x35c: Pop(0); Push((bool) Stack[-6] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: GOTO 0x368

0x35f: Pop(0); Push(Stack[-4] | Stack[-9]);
0x360: Push((float)0.7071067690849304)
0x361: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: @@ add(Stack[-5]); Obj=8 // @poff=406
0x364: Pop(0)
0x365: Push((int) 1)
0x366: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x367: GOTO 0x358

0x368: @@ size(Stack[-3]); Obj=8 // @poff=410
0x369: Pop(0)
0x36a: Push(Stack[-3])
0x36b: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x36c: @ irand(Stack[-2], Stack[-3])
0x36d: Pop(0)
0x36e: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=415
0x36f: Pop(0)
0x370: PushEmpty(object, int, float, cvector, cvector)
0x371: Stack[-26] = Stack[-5]
0x372: Stack[-25] = Stack[-4]
0x373: Stack[-24] = Stack[-3]
0x374: Stack[-6] = Stack[-2]
0x375: Stack[-1] = -Stack[-14]; Pop(0);
0x376: Call2 0x37f

0x377: Pop(5)
0x378: Return(); Pop(18)

0x379: Stack[-8] = 0
0x37a: PushEmpty(object)
0x37b: Stack[-22] = Stack[-1]
0x37c: Call2 0x30f

0x37d: Pop(1)
0x37e: Return(); Pop(18)

0x37f: PushEmpty(object, object, object, object)
0x380: @ GetScene(Stack[-2])
0x381: Pop(0)
0x382: Push("scripted") // @poff=419
0x383: Push("blood_dir.xml") // @poff=437
0x384: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x385: Pop(2)
0x386: PushEmpty(object)
0x387: Stack[-10] = Stack[-1]
0x388: Call2 0x30f

0x389: Pop(1)
0x38a: Return(); Pop(4)

0x38b: Stack[-1] = 0
0x38c: Stack[-2] = 0
0x38d: PushEmpty(bool, bool)
0x38e: @ IsLoaded(Stack[-1])
0x38f: Pop(0)
0x390: Stack[-1] = Stack[-3]
0x391: Return(); Pop(2)

0x392: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x393: @@ GetPosition(Stack[-8]); Obj=20 // @poff=208
0x394: Pop(0)
0x395: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=344
0x396: Pop(0)
0x397: Push(CvectorIndex(Stack[-8], 1))
0x398: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x399: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x39a: @ GetPosition(Stack[-7])
0x39b: Pop(0)
0x39c: @ GetEyesHeight(Stack[-9])
0x39d: Pop(0)
0x39e: Push(CvectorIndex(Stack[-7], 1))
0x39f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3a0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3a1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3a2: Push(CvectorIndex(Stack[-6], 1))
0x3a3: Stack[-1] = (int) 0
0x3a4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3a5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3a6: Pop(1); Push(Sqrt(Stack[-1]))
0x3a7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3a8: Stack[-5] = -Stack[-6]; Pop(0);
0x3a9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3aa: PushEmpty(cvector, cvector)
0x3ab: Push([0.0, 1.0, 0.0])
0x3ac: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ad: Call2 0x42f

0x3ae: Pop(1)
0x3af: Push((int) 25)
0x3b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b2: Push([0.0, 10.0, 0.0])
0x3b3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3b4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3b5: @ IsOverrideActive(Stack[-2])
0x3b6: Pop(0)
0x3b7: Push(Stack[-2])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-21] = (bool) 0
0x3ba: Return(); Pop(18)

0x3bb: @ StopWorld()
0x3bc: Pop(0)
0x3bd: @ CameraTransit(Stack[-3], Stack[-5])
0x3be: Pop(0)
0x3bf: Push(CvectorIndex(Stack[-4], 0))
0x3c0: Push(CvectorIndex(Stack[-5], 2))
0x3c1: @ Rotate(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: PushEmpty(bool)
0x3c4: Call2 0x4ac

0x3c5: Pop(0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: GOTO 0x3d0

0x3c8: Push("head") // @poff=170
0x3c9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ca: Pop(1)
0x3cb: Push(Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cd: Push("head") // @poff=170
0x3ce: @ LookAsyncCamera(Stack[-1])
0x3cf: Pop(1)
0x3d0: @ CameraWaitForPlayFinish()
0x3d1: Pop(0)
0x3d2: @ ResumeWorld()
0x3d3: Pop(0)
0x3d4: Stack[-21] = (bool) 1
0x3d5: Return(); Pop(18)

0x3d6: PushEmpty(bool, bool)
0x3d7: @ CameraSwitchToNormal()
0x3d8: Pop(0)
0x3d9: PushEmpty(bool)
0x3da: Call2 0x4ac

0x3db: Pop(0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: GOTO 0x3e6

0x3de: Push("head") // @poff=170
0x3df: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3e0: Pop(1)
0x3e1: Push(Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e3: Push("head") // @poff=170
0x3e4: @ UnlookAsync(Stack[-1])
0x3e5: Pop(1)
0x3e6: Return(); Pop(2)

0x3e7: PushEmpty(float, float, float, float)
0x3e8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3e9: Pop(0)
0x3ea: Push((bool) 0)
0x3eb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(1)
0x3ed: Return(); Pop(4)

0x3ee: PushEmpty(float, float, float, float)
0x3ef: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3f0: Pop(0)
0x3f1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3f2: Pop(0)
0x3f3: Return(); Pop(4)

0x3f4: PushEmpty(float, cvector, float, cvector)
0x3f5: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=344
0x3f6: Pop(0)
0x3f7: Stack[-1] = [0.0, 0.0, 0.0]
0x3f8: Push(CvectorIndex(Stack[-1], 1))
0x3f9: Stack[-3] = Stack[-1]
0x3fa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3fb: Push("head") // @poff=170
0x3fc: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3fd: Pop(1)
0x3fe: Return(); Pop(4)

0x3ff: PushEmpty(bool)
0x400: Call2 0x4ac

0x401: Pop(0)
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: @ lshStopSpeech()
0x404: Pop(0)
0x405: Return(); Pop(0)

0x406: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x407: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x408: Pop(0)
0x409: Pop(0); Push((bool) Stack[-8] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x40b: Stack[-7] = (int) 0
0x40c: Push((int) 1)
0x40d: Pop(1); Push(Stack[-8] + Stack[-1]);
0x40e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x40f: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x410: Pop(1)
0x411: Pop(0); Push((bool) Stack[-6] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: GOTO 0x417

0x414: Push((int) 1)
0x415: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x416: GOTO 0x40c

0x417: Pop(0); Push((bool) Stack[-7] == 0)
0x418: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x419: Return(); Pop(16)

0x41a: @ irand(Stack[-5], Stack[-7])
0x41b: Pop(0)
0x41c: Push((int) 1)
0x41d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x41e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x41f: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x420: Pop(0)
0x421: Push(Stack[-4])
0x422: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x423: @ GetEyesHeight(Stack[-3])
0x424: Pop(0)
0x425: @ GetDirection(Stack[-2])
0x426: Pop(0)
0x427: Push((int) 50)
0x428: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x429: Push(CvectorIndex(Stack[-1], 1))
0x42a: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x42b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x42c: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x42d: Pop(0)
0x42e: Return(); Pop(16)

0x42f: PushEmpty(float, float)
0x430: Pop(0); Push(Stack[-3] | Stack[-3]);
0x431: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x432: Push((float)9.999999974752427e-07)
0x433: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x435: Stack[-4] = [0.0, 0.0, 0.0]
0x436: Return(); Pop(2)

0x437: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x438: Return(); Pop(2)

0x439: PushEmpty(int, int)
0x43a: @ GetVariable(Stack[-3], Stack[-1])
0x43b: Pop(0)
0x43c: Stack[-1] = Stack[-4]
0x43d: Return(); Pop(2)

0x43e: PushEmpty(object, object)
0x43f: @ FindActor(Stack[-1], Stack[-4])
0x440: Pop(0)
0x441: Pop(0); PushNull((bool) Stack[-1] == 0)
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-5] = (bool) 0
0x444: Return(); Pop(2)

0x445: @ Trigger(Stack[-1], Stack[-3])
0x446: Pop(0)
0x447: Stack[-5] = (bool) 1
0x448: Return(); Pop(2)

0x449: Stack[-1] = 0
0x44a: PushEmpty(string, string)
0x44b: Stack[-1] = "idle" // @poff=146
0x44c: Push(Stack[-3])
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x44f: Stack[-1] = Stack[-4]
0x450: Return(); Pop(2)

0x451: PushEmpty(int, bool, int, bool)
0x452: Stack[-2] = (int) 0
0x453: Push("all") // @poff=138
0x454: PushEmpty(string, int)
0x455: Stack[-5] = Stack[-1]
0x456: Call2 0x44a

0x457: Pop(1)
0x458: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: Pop(0); Push((bool) Stack[-1] == 0)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: GOTO 0x460

0x45d: Push((int) 1)
0x45e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x45f: GOTO 0x453

0x460: Stack[-2] = Stack[-5]
0x461: Return(); Pop(4)

0x462: PushEmpty()
0x463: Push("ook1Lisa1") // @poff=465
0x464: Push((int) 1)
0x465: @ SetVariable(Stack[-2], Stack[-1])
0x466: Pop(2)
0x467: Return(); Pop(0)

0x468: PushEmpty()
0x469: PushEmpty(int, string)
0x46a: Stack[-1] = "k1q01" // @poff=485
0x46b: Call2 0x439

0x46c: Pop(1)
0x46d: Push((int) 4)
0x46e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-2] = (bool) 1
0x471: Return(); Pop(0)

0x472: Stack[-2] = (bool) 0
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: PushEmpty(int, string)
0x476: Stack[-1] = "ook1Lisa1" // @poff=465
0x477: Call2 0x439

0x478: Pop(1)
0x479: Push((int) 0)
0x47a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-2] = (bool) 1
0x47d: Return(); Pop(0)

0x47e: Stack[-2] = (bool) 0
0x47f: Return(); Pop(0)

0x480: PushEmpty(int, int)
0x481: Push("branch") // @poff=497
0x482: @ GetVariable(Stack[-1], Stack[-2])
0x483: Pop(1)
0x484: Push((int) 0)
0x485: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x487: Stack[-3] = (int) 1
0x488: Return(); Pop(2)

0x489: GOTO 0x48f

0x48a: Push((int) 1)
0x48b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-3] = (int) 2
0x48e: Return(); Pop(2)

0x48f: Stack[-3] = (int) 3
0x490: Return(); Pop(2)

0x491: PushEmpty(int, int)
0x492: Push("branch") // @poff=497
0x493: @ GetVariable(Stack[-1], Stack[-2])
0x494: Pop(1)
0x495: Stack[-1] = Stack[-3]
0x496: Return(); Pop(2)

0x497: PushEmpty()
0x498: PushEmpty(int)
0x499: Call2 0x491

0x49a: Pop(0)
0x49b: Push((int) 1)
0x49c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49e: @ WorkWithCorpse(Stack[-1])
0x49f: Pop(0)
0x4a0: GOTO 0x4a3

0x4a1: @ Barter(Stack[-1])
0x4a2: Pop(0)
0x4a3: Return(); Pop(0)

0x4a4: Stack[-1] = (int) 518097
0x4a5: Return(); Pop(0)

0x4a6: Stack[-1] = (int) 518096
0x4a7: Return(); Pop(0)

0x4a8: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=511
0x4a9: Return(); Pop(0)

0x4aa: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=551
0x4ab: Return(); Pop(0)

0x4ac: Stack[-1] = (bool) 0
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: PushEmpty(object)
0x4b0: Stack[-2] = Stack[-1]
0x4b1: Push(-1, 0); TaskCall(3)
0x4b2: Call2 0x261

0x4b3: Pop(-1, 0); TaskReturn
0x4b4: Pop(1)
0x4b5: Return(); Pop(0)

0x4b6: PushEmpty()
0x4b7: PushEmpty(object, int, float)
0x4b8: Stack[-7] = Stack[-3]
0x4b9: Stack[-6] = Stack[-2]
0x4ba: Stack[-5] = Stack[-1]
0x4bb: Call2 0x33b

0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: PushEmpty()
0x4bf: PushEmpty(object, int, float, cvector, cvector)
0x4c0: Stack[-11] = Stack[-5]
0x4c1: Stack[-10] = Stack[-4]
0x4c2: Stack[-9] = Stack[-3]
0x4c3: Stack[-7] = Stack[-2]
0x4c4: Stack[-6] = Stack[-1]
0x4c5: Call2 0x37f

0x4c6: Pop(5)
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty(float, float)
0x4c9: Push("health") // @poff=595
0x4ca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4cc: Push("health") // @poff=595
0x4cd: @ GetProperty(Stack[-1], Stack[-2])
0x4ce: Pop(1)
0x4cf: Push((int) 0)
0x4d0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: @ SignalDeath(Stack[-4])
0x4d3: Pop(0)
0x4d4: Return(); Pop(2)

0x4d5: PushEmpty(bool, bool)
0x4d6: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4d7: Pop(0)
0x4d8: Push(Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4da: PushEmpty(bool, string, string)
0x4db: Stack[-2] = "quest_k1_01" // @poff=609
0x4dc: Stack[-1] = "doberman_dead" // @poff=633
0x4dd: Call2 0x43e

0x4de: Pop(3)
0x4df: PushEmpty(object)
0x4e0: Stack[-4] = Stack[-1]
0x4e1: Call2 0x4ae

0x4e2: Pop(1)
0x4e3: Return(); Pop(2)

