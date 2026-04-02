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
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
	W:Late1
	W:klara2_positioner
	W:remove_klara
	W:klara2_svita_positioner
	W:place_svita
	W:klara_stay
	W:branch
	W:day
	W:K2S_Klara2
	W:mt_klara2
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e00670000004c00610074006500310000006b006c0061007200610032005f0070006f0073006900740069006f006e00650072000000720065006d006f00760065005f006b006c0061007200610000006b006c0061007200610032005f00730076006900740061005f0070006f0073006900740069006f006e0065007200000070006c006100630065005f007300760069007400610000006b006c006100720061005f00730074006100790000006200720061006e0063006800000064006100790000004b00320053005f004b006c00610072006100320000006d0074005f006b006c0061007200610032000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetProperty (2 args)

RunOp = 0x3b7
RunTask = 7

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1c1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x34d Vars = (int, int)
	GTASK_7 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x3bf Vars = (string)
		EVENT_6 Op = 0x3d3 Vars = ()
		EVENT_5 Op = 0x3e0 Vars = ()
		EVENT_7 Op = 0x42f Vars = (int)
		EVENT_45 Op = 0x471 Vars = (bool)
		EVENT_0 Op = 0x47d Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x501

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
0x11: Call2 0x608

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x55b

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x506

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x647

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x645

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x649

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x64b

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x692

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
0x55: Call2 0x54a

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
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 538516)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 538517)
0x6e: Push((int) 40400)
0x6f: Push((int) 40395)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 538518)
0x73: Push((int) 40397)
0x74: Push((int) 40396)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x64d

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x5e5

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all") // @poff=138
0x8a: Push("idle") // @poff=146
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all") // @poff=138
0x93: Push("idle") // @poff=146
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x64d

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-3] = Stack[-2]
0xa4: Push("") // @poff=102
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x5ec

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x601

0xb3: Pop(0)
0xb4: Push((int) 40394)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 538516)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 538517)
0xc1: Push((int) 40400)
0xc2: Push((int) 40395)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 538518)
0xc6: Push((int) 40397)
0xc7: Push((int) 40396)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 40397)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 538519)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 538520)
0xd8: Push((int) 40404)
0xd9: Push((int) 40398)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 538521)
0xdd: Push((int) 40404)
0xde: Push((int) 40399)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 40400)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0x98

0xe8: Pop(1)
0xe9: Push((int) 538522)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 538523)
0xef: Push((int) 40404)
0xf0: Push((int) 40401)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Push((int) 538524)
0xf4: Push((int) 40397)
0xf5: Push((int) 40402)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 40404)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral" // @poff=89
0xfe: Call2 0x98

0xff: Pop(1)
0x100: Push((int) 538525)
0x101: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x102: Pop(1)
0x103: @@@ ClearReplies(); Obj=0 // @poff=116
0x104: Pop(0)
0x105: Push((int) 538526)
0x106: Push((int) -1)
0x107: Push((int) 40407)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Push((int) 538527)
0x10b: Push((int) -1)
0x10c: Push((int) 40408)
0x10d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x111: PushEmpty(bool)
0x112: Call2 0x64d

0x113: Pop(0)
0x114: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x115: @ lshStopAnimation()
0x116: Pop(0)
0x117: GOTO 0x11a

0x118: @ StopAnimation()
0x119: Pop(0)
0x11a: Return(); Pop(0)

0x11b: GOTO 0xaf

0x11c: Return(); Pop(0)

0x11d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x11e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x11f: PushEmpty(bool, object, float)
0x120: Stack[-12] = Stack[-2]
0x121: Stack[-1] = (float) 70.0
0x122: Call2 0x506

0x123: Pop(2)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x126: Stack[-10] = (int) -2
0x127: Return(); Pop(8)

0x128: @ CreateDialog(Stack[-4])
0x129: Pop(0)
0x12a: PushEmpty(int)
0x12b: Call2 0x647

0x12c: Pop(0)
0x12d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x12e: Pop(1)
0x12f: PushEmpty(int)
0x130: Call2 0x645

0x131: Pop(0)
0x132: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x133: Pop(1)
0x134: PushEmpty(string)
0x135: Call2 0x649

0x136: Pop(0)
0x137: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x138: Pop(1)
0x139: PushEmpty(string)
0x13a: Call2 0x64b

0x13b: Pop(0)
0x13c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x13d: Pop(1)
0x13e: PushEmpty(int)
0x13f: Call2 0x692

0x140: Pop(0)
0x141: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x142: Pop(1)
0x143: Stack[-2] = (int) -1
0x144: @ IsOverrideActive(Stack[-3])
0x145: Pop(0)
0x146: Push(Stack[-3])
0x147: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x148: Stack[-10] = (int) -2
0x149: Return(); Pop(8)

0x14a: @ DoDialog(Stack[-4])
0x14b: Pop(0)
0x14c: PushEmpty(object, object)
0x14d: Stack[-11] = Stack[-2]
0x14e: Stack[-6] = Stack[-1]
0x14f: Push(-2, 4); TaskCall(4)
0x150: Call2 0x167

0x151: Pop(-2, 4); TaskReturn
0x152: Pop(2)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: Pop(0); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: @ sync()
0x158: Pop(0)
0x159: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x15a: Pop(0)
0x15b: GOTO 0x155

0x15c: PushEmpty(object)
0x15d: Stack[-10] = Stack[-1]
0x15e: Call2 0x54a

0x15f: Pop(1)
0x160: @ StopDialog(Stack[-4])
0x161: Pop(0)
0x162: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x163: Pop(0)
0x164: Stack[-2] = Stack[-10]
0x165: Return(); Pop(8)

0x166: Stack[-4] = 0
0x167: PushEmpty()
0x168: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x169: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x16a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16b: Push((int) 1)
0x16c: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=89
0x16f: Call2 0x1ab

0x170: Pop(1)
0x171: Push((int) 538529)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=116
0x175: Pop(0)
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178: Call2 0x67a

0x179: Pop(1)
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: Push((int) 538538)
0x17c: Push((int) 40420)
0x17d: Push((int) 40419)
0x17e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17f: Pop(3)
0x180: Push((int) 538535)
0x181: Push((int) -1)
0x182: Push((int) 40416)
0x183: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x184: Pop(3)
0x185: Push((int) 538536)
0x186: Push((int) -1)
0x187: Push((int) 40417)
0x188: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x189: Pop(3)
0x18a: GOTO 0x18d

0x18b: Return(); Pop(0)

0x18c: GOTO 0x16b

0x18d: PushEmpty(bool)
0x18e: Call2 0x64d

0x18f: Pop(0)
0x190: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x191: @ lshWaitForAnimEnd()
0x192: Pop(0)
0x193: Push( Stack[3 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: GOTO 0x19b

0x196: PushEmpty(string)
0x197: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x198: Call2 0x5e5

0x199: Pop(1)
0x19a: GOTO 0x191

0x19b: GOTO 0x1aa

0x19c: Push("all") // @poff=138
0x19d: Push("idle") // @poff=146
0x19e: @ PlayAnimation(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: @ WaitForAnimEnd()
0x1a1: Pop(0)
0x1a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1aa

0x1a5: Push("all") // @poff=138
0x1a6: Push("idle") // @poff=146
0x1a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: GOTO 0x1a0

0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x64d

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(0)

0x1b2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(string, bool)
0x1b6: Stack[-3] = Stack[-2]
0x1b7: Push("") // @poff=102
0x1b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ba: Stack[-1] = (bool) 0
0x1bb: GOTO 0x1bd

0x1bc: Stack[-1] = (bool) 1
0x1bd: Call2 0x5ec

0x1be: Pop(2)
0x1bf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: Push((int) 1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x1c4: PushEmpty()
0x1c5: Call2 0x601

0x1c6: Pop(0)
0x1c7: Push((int) 40419)
0x1c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ca: PushEmpty(object, object)
0x1cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cd: Call2 0x655

0x1ce: Pop(2)
0x1cf: Push((int) 40477)
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d2: PushEmpty(object, object)
0x1d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d5: Call2 0x65b

0x1d6: Pop(2)
0x1d7: PushEmpty(object, object)
0x1d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1da: Call2 0x662

0x1db: Pop(2)
0x1dc: Push((int) 40478)
0x1dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1df: PushEmpty(object, object)
0x1e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e2: Call2 0x65b

0x1e3: Pop(2)
0x1e4: PushEmpty(object, object)
0x1e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e7: Call2 0x662

0x1e8: Pop(2)
0x1e9: Push((int) 40479)
0x1ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ec: PushEmpty(object, object)
0x1ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ef: Call2 0x662

0x1f0: Pop(2)
0x1f1: PushEmpty(object, object)
0x1f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x669

0x1f5: Pop(2)
0x1f6: Push((int) 40476)
0x1f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f9: PushEmpty(object, object)
0x1fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fc: Call2 0x65b

0x1fd: Pop(2)
0x1fe: PushEmpty(object, object)
0x1ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0x662

0x202: Pop(2)
0x203: Push((int) 40410)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral" // @poff=89
0x208: Call2 0x1ab

0x209: Pop(1)
0x20a: Push((int) 538529)
0x20b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20c: Pop(1)
0x20d: @@@ ClearReplies(); Obj=0 // @poff=116
0x20e: Pop(0)
0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x211: Call2 0x67a

0x212: Pop(1)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: Push((int) 538538)
0x215: Push((int) 40420)
0x216: Push((int) 40419)
0x217: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x218: Pop(3)
0x219: Push((int) 538535)
0x21a: Push((int) -1)
0x21b: Push((int) 40416)
0x21c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21d: Pop(3)
0x21e: Push((int) 538536)
0x21f: Push((int) -1)
0x220: Push((int) 40417)
0x221: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Push((int) 40420)
0x225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral" // @poff=89
0x229: Call2 0x1ab

0x22a: Pop(1)
0x22b: Push((int) 538539)
0x22c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22d: Pop(1)
0x22e: @@@ ClearReplies(); Obj=0 // @poff=116
0x22f: Pop(0)
0x230: Push((int) 538540)
0x231: Push((int) 40426)
0x232: Push((int) 40421)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Push((int) 538541)
0x236: Push((int) 40424)
0x237: Push((int) 40422)
0x238: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x239: Pop(3)
0x23a: Push((int) 538542)
0x23b: Push((int) 40425)
0x23c: Push((int) 40423)
0x23d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 40425)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Neutral" // @poff=89
0x245: Call2 0x1ab

0x246: Pop(1)
0x247: Push((int) 538544)
0x248: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x249: Pop(1)
0x24a: @@@ ClearReplies(); Obj=0 // @poff=116
0x24b: Pop(0)
0x24c: Push((int) 538587)
0x24d: Push((int) 40474)
0x24e: Push((int) 40473)
0x24f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x250: Pop(3)
0x251: Push((int) 538589)
0x252: Push((int) -1)
0x253: Push((int) 40476)
0x254: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Push((int) 40424)
0x258: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral" // @poff=89
0x25c: Call2 0x1ab

0x25d: Pop(1)
0x25e: Push((int) 538543)
0x25f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x260: Pop(1)
0x261: @@@ ClearReplies(); Obj=0 // @poff=116
0x262: Pop(0)
0x263: Push((int) 538592)
0x264: Push((int) -1)
0x265: Push((int) 40479)
0x266: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x267: Pop(3)
0x268: Push((int) 538593)
0x269: Push((int) 40425)
0x26a: Push((int) 40480)
0x26b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Push((int) 40426)
0x26f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x271: PushEmpty(string)
0x272: Stack[-1] = "Neutral" // @poff=89
0x273: Call2 0x1ab

0x274: Pop(1)
0x275: Push((int) 538545)
0x276: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x277: Pop(1)
0x278: @@@ ClearReplies(); Obj=0 // @poff=116
0x279: Pop(0)
0x27a: Push((int) 538585)
0x27b: Push((int) 40424)
0x27c: Push((int) 40470)
0x27d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27e: Pop(3)
0x27f: Push((int) 538586)
0x280: Push((int) 40474)
0x281: Push((int) 40471)
0x282: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 40474)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral" // @poff=89
0x28a: Call2 0x1ab

0x28b: Pop(1)
0x28c: Push((int) 538588)
0x28d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28e: Pop(1)
0x28f: @@@ ClearReplies(); Obj=0 // @poff=116
0x290: Pop(0)
0x291: Push((int) 538590)
0x292: Push((int) -1)
0x293: Push((int) 40477)
0x294: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x295: Pop(3)
0x296: Push((int) 538591)
0x297: Push((int) -1)
0x298: Push((int) 40478)
0x299: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x29d: PushEmpty(bool)
0x29e: Call2 0x64d

0x29f: Pop(0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a1: @ lshStopAnimation()
0x2a2: Pop(0)
0x2a3: GOTO 0x2a6

0x2a4: @ StopAnimation()
0x2a5: Pop(0)
0x2a6: Return(); Pop(0)

0x2a7: GOTO 0x1c2

0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2aa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2ab: PushEmpty(bool, object, float)
0x2ac: Stack[-12] = Stack[-2]
0x2ad: Stack[-1] = (float) 70.0
0x2ae: Call2 0x506

0x2af: Pop(2)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-10] = (int) -2
0x2b3: Return(); Pop(8)

0x2b4: @ CreateDialog(Stack[-4])
0x2b5: Pop(0)
0x2b6: PushEmpty(int)
0x2b7: Call2 0x647

0x2b8: Pop(0)
0x2b9: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x2ba: Pop(1)
0x2bb: PushEmpty(int)
0x2bc: Call2 0x645

0x2bd: Pop(0)
0x2be: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2bf: Pop(1)
0x2c0: PushEmpty(string)
0x2c1: Call2 0x649

0x2c2: Pop(0)
0x2c3: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2c4: Pop(1)
0x2c5: PushEmpty(string)
0x2c6: Call2 0x64b

0x2c7: Pop(0)
0x2c8: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x2c9: Pop(1)
0x2ca: PushEmpty(int)
0x2cb: Call2 0x692

0x2cc: Pop(0)
0x2cd: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2ce: Pop(1)
0x2cf: Stack[-2] = (int) -1
0x2d0: @ IsOverrideActive(Stack[-3])
0x2d1: Pop(0)
0x2d2: Push(Stack[-3])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d4: Stack[-10] = (int) -2
0x2d5: Return(); Pop(8)

0x2d6: @ DoDialog(Stack[-4])
0x2d7: Pop(0)
0x2d8: PushEmpty(object, object)
0x2d9: Stack[-11] = Stack[-2]
0x2da: Stack[-6] = Stack[-1]
0x2db: Push(-2, 4); TaskCall(6)
0x2dc: Call2 0x2f3

0x2dd: Pop(-2, 4); TaskReturn
0x2de: Pop(2)
0x2df: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2e0: Pop(0)
0x2e1: Pop(0); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e3: @ sync()
0x2e4: Pop(0)
0x2e5: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2e6: Pop(0)
0x2e7: GOTO 0x2e1

0x2e8: PushEmpty(object)
0x2e9: Stack[-10] = Stack[-1]
0x2ea: Call2 0x54a

0x2eb: Pop(1)
0x2ec: @ StopDialog(Stack[-4])
0x2ed: Pop(0)
0x2ee: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x2ef: Pop(0)
0x2f0: Stack[-2] = Stack[-10]
0x2f1: Return(); Pop(8)

0x2f2: Stack[-4] = 0
0x2f3: PushEmpty()
0x2f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2f5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2f6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2f7: Push((int) 1)
0x2f8: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = "Neutral" // @poff=89
0x2fb: Call2 0x337

0x2fc: Pop(1)
0x2fd: Push((int) 538575)
0x2fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ff: Pop(1)
0x300: @@@ ClearReplies(); Obj=0 // @poff=116
0x301: Pop(0)
0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x304: Call2 0x670

0x305: Pop(1)
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: Push((int) 538576)
0x308: Push((int) 40462)
0x309: Push((int) 40461)
0x30a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30b: Pop(3)
0x30c: Push((int) 538581)
0x30d: Push((int) -1)
0x30e: Push((int) 40466)
0x30f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x310: Pop(3)
0x311: Push((int) 538582)
0x312: Push((int) -1)
0x313: Push((int) 40467)
0x314: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x315: Pop(3)
0x316: GOTO 0x319

0x317: Return(); Pop(0)

0x318: GOTO 0x2f7

0x319: PushEmpty(bool)
0x31a: Call2 0x64d

0x31b: Pop(0)
0x31c: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x31d: @ lshWaitForAnimEnd()
0x31e: Pop(0)
0x31f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x327

0x322: PushEmpty(string)
0x323: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x324: Call2 0x5e5

0x325: Pop(1)
0x326: GOTO 0x31d

0x327: GOTO 0x336

0x328: Push("all") // @poff=138
0x329: Push("idle") // @poff=146
0x32a: @ PlayAnimation(Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: @ WaitForAnimEnd()
0x32d: Pop(0)
0x32e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: GOTO 0x336

0x331: Push("all") // @poff=138
0x332: Push("idle") // @poff=146
0x333: @ PlayAnimation(Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: GOTO 0x32c

0x336: Return(); Pop(0)

0x337: PushEmpty()
0x338: PushEmpty(bool)
0x339: Call2 0x64d

0x33a: Pop(0)
0x33b: Pop(1); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: Return(); Pop(0)

0x33e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Return(); Pop(0)

0x341: PushEmpty(string, bool)
0x342: Stack[-3] = Stack[-2]
0x343: Push("") // @poff=102
0x344: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-1] = (bool) 0
0x347: GOTO 0x349

0x348: Stack[-1] = (bool) 1
0x349: Call2 0x5ec

0x34a: Pop(2)
0x34b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: Push((int) 1)
0x34f: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x350: PushEmpty()
0x351: Call2 0x601

0x352: Pop(0)
0x353: Push((int) 40461)
0x354: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: PushEmpty(object, object)
0x357: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x358: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x359: Call2 0x64f

0x35a: Pop(2)
0x35b: Push((int) 40460)
0x35c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Neutral" // @poff=89
0x360: Call2 0x337

0x361: Pop(1)
0x362: Push((int) 538575)
0x363: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x364: Pop(1)
0x365: @@@ ClearReplies(); Obj=0 // @poff=116
0x366: Pop(0)
0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x369: Call2 0x670

0x36a: Pop(1)
0x36b: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36c: Push((int) 538576)
0x36d: Push((int) 40462)
0x36e: Push((int) 40461)
0x36f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x370: Pop(3)
0x371: Push((int) 538581)
0x372: Push((int) -1)
0x373: Push((int) 40466)
0x374: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x375: Pop(3)
0x376: Push((int) 538582)
0x377: Push((int) -1)
0x378: Push((int) 40467)
0x379: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: Push((int) 40462)
0x37d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x37f: PushEmpty(string)
0x380: Stack[-1] = "Neutral" // @poff=89
0x381: Call2 0x337

0x382: Pop(1)
0x383: Push((int) 538577)
0x384: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x385: Pop(1)
0x386: @@@ ClearReplies(); Obj=0 // @poff=116
0x387: Pop(0)
0x388: Push((int) 538578)
0x389: Push((int) 40464)
0x38a: Push((int) 40463)
0x38b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38c: Pop(3)
0x38d: Push((int) 538583)
0x38e: Push((int) -1)
0x38f: Push((int) 40468)
0x390: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: Push((int) 40464)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Neutral" // @poff=89
0x398: Call2 0x337

0x399: Pop(1)
0x39a: Push((int) 538579)
0x39b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x39c: Pop(1)
0x39d: @@@ ClearReplies(); Obj=0 // @poff=116
0x39e: Pop(0)
0x39f: Push((int) 538580)
0x3a0: Push((int) -1)
0x3a1: Push((int) 40465)
0x3a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a3: Pop(3)
0x3a4: Push((int) 538584)
0x3a5: Push((int) -1)
0x3a6: Push((int) 40469)
0x3a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a8: Pop(3)
0x3a9: Return(); Pop(0)

0x3aa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3ab: PushEmpty(bool)
0x3ac: Call2 0x64d

0x3ad: Pop(0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3af: @ lshStopAnimation()
0x3b0: Pop(0)
0x3b1: GOTO 0x3b4

0x3b2: @ StopAnimation()
0x3b3: Pop(0)
0x3b4: Return(); Pop(0)

0x3b5: GOTO 0x34e

0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: Call2 0x3bb

0x3b9: Pop(0)
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: Call2 0x3e4

0x3bd: Pop(0)
0x3be: Return(); Pop(0)

0x3bf: PushEmpty(bool, bool)
0x3c0: Push("cleanup") // @poff=156
0x3c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c3: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3c4: @ IsLoaded(Stack[-1])
0x3c5: Pop(0)
0x3c6: Pop(0); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c8: PushEmpty(object)
0x3c9: Call2 0x608

0x3ca: Pop(0)
0x3cb: @ RemoveActor(Stack[-1])
0x3cc: Pop(1)
0x3cd: GOTO 0x3d2

0x3ce: Push("restore") // @poff=172
0x3cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3d2: Return(); Pop(2)

0x3d3: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3d4: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d5: PushEmpty(object)
0x3d6: Call2 0x608

0x3d7: Pop(0)
0x3d8: @ RemoveActor(Stack[-1])
0x3d9: Pop(1)
0x3da: @ Hold()
0x3db: Pop(0)
0x3dc: PushEmpty()
0x3dd: Call2 0x455

0x3de: Pop(0)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty()
0x3e1: Call2 0x464

0x3e2: Pop(0)
0x3e3: Return(); Pop(0)

0x3e4: PushEmpty(bool)
0x3e5: Call2 0x501

0x3e6: Pop(0)
0x3e7: Pop(1); Push((bool) Stack[-1] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e9: PushEmpty()
0x3ea: Push(-0, 0); TaskCall(0)
0x3eb: Call2 0x0

0x3ec: Pop(-0, 0); TaskReturn
0x3ed: Pop(0)
0x3ee: PushEmpty()
0x3ef: Call2 0x3e0

0x3f0: Pop(0)
0x3f1: @ GetDirection(Stack[-0]T)
0x3f2: Pop(0)
0x3f3: PushEmpty()
0x3f4: Call2 0x49a

0x3f5: Pop(0)
0x3f6: GOTO 0x3f3

0x3f7: Return(); Pop(0)

0x3f8: PushEmpty(object, object)
0x3f9: Push("player") // @poff=188
0x3fa: @ FindActor(Stack[-2], Stack[-1])
0x3fb: Pop(1)
0x3fc: Pop(0); Push((bool) Stack[-1] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-3] = (bool) 0
0x3ff: Return(); Pop(2)

0x400: PushEmpty(bool, object)
0x401: Stack[-3] = Stack[-1]
0x402: Call2 0x4f8

0x403: Stack[-2] = Stack[-5]
0x404: Pop(2)
0x405: Return(); Pop(2)

0x406: Stack[-1] = 0
0x407: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x408: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x409: @ RotateAsync(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: Return(); Pop(0)

0x40c: PushEmpty(object, bool, object, bool)
0x40d: Push("player") // @poff=188
0x40e: @ FindActor(Stack[-3], Stack[-1])
0x40f: Pop(1)
0x410: Pop(0); Push((bool) Stack[-2] == 0)
0x411: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x412: Stack[-5] = (bool) 0
0x413: Return(); Pop(4)

0x414: PushEmpty(float, object)
0x415: Stack[-4] = Stack[-1]
0x416: Call2 0x4e6

0x417: Pop(1)
0x418: Push((float)90000.0)
0x419: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: Stack[-5] = (bool) 0
0x41c: Return(); Pop(4)

0x41d: @ CanSee(Stack[-1], Stack[-2])
0x41e: Pop(0)
0x41f: Stack[-1] = Stack[-5]
0x420: Return(); Pop(4)

0x421: Stack[-2] = 0
0x422: PushEmpty(float, float)
0x423: Push((int) 8)
0x424: Push((int) 16)
0x425: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: Push((int) 10)
0x428: @ SetTimer(Stack[-1], Stack[-2])
0x429: Pop(1)
0x42a: Return(); Pop(2)

0x42b: Push((int) 10)
0x42c: @ KillTimer(Stack[-1])
0x42d: Pop(1)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: Push((int) 10)
0x431: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x433: PushEmpty()
0x434: Call2 0x42b

0x435: Pop(0)
0x436: PushEmpty(bool)
0x437: Stack[-1] = (bool) 0
0x438: PushEmpty(bool)
0x439: Call2 0x501

0x43a: Pop(0)
0x43b: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43c: PushEmpty(bool)
0x43d: Call2 0x40c

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Stack[-1] = (bool) 1
0x441: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x442: PushEmpty(bool)
0x443: Call2 0x3f8

0x444: Pop(0)
0x445: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x446: PushEmpty(bool, object)
0x447: PushEmpty(object)
0x448: Call2 0x608

0x449: Stack[-1] = Stack[-2]
0x44a: Pop(1)
0x44b: Call2 0x595

0x44c: Pop(2)
0x44d: GOTO 0x454

0x44e: PushEmpty()
0x44f: Call2 0x407

0x450: Pop(0)
0x451: PushEmpty()
0x452: Call2 0x422

0x453: Pop(0)
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: Call2 0x4e1

0x457: Pop(0)
0x458: PushEmpty()
0x459: Call2 0x42b

0x45a: Pop(0)
0x45b: @ lshStopSpeech()
0x45c: Pop(0)
0x45d: @ lshStopAnimation()
0x45e: Pop(0)
0x45f: @ StopAsync()
0x460: Pop(0)
0x461: @ Hold()
0x462: Pop(0)
0x463: Return(); Pop(0)

0x464: @ StopGroup0()
0x465: Pop(0)
0x466: PushEmpty()
0x467: Call2 0x42b

0x468: Pop(0)
0x469: PushEmpty(string)
0x46a: Stack[-1] = "Neutral" // @poff=89
0x46b: Call2 0x5e5

0x46c: Pop(1)
0x46d: PushEmpty()
0x46e: Call2 0x422

0x46f: Pop(0)
0x470: Return(); Pop(0)

0x471: PushEmpty()
0x472: Push(Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x474: PushEmpty()
0x475: Call2 0x422

0x476: Pop(0)
0x477: GOTO 0x47c

0x478: PushEmpty(string)
0x479: Stack[-1] = "Neutral" // @poff=89
0x47a: Call2 0x5e5

0x47b: Pop(1)
0x47c: Return(); Pop(0)

0x47d: PushEmpty(bool, bool)
0x47e: @ IsOverrideActive(Stack[-1])
0x47f: Pop(0)
0x480: Pop(0); Push((bool) Stack[-1] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x482: EventDisable(0)
0x483: PushEmpty()
0x484: Call2 0x4e1

0x485: Pop(0)
0x486: PushEmpty(bool, object)
0x487: Stack[-5] = Stack[-1]
0x488: Call2 0x4f8

0x489: Pop(2)
0x48a: EventEnable(0)
0x48b: PushEmpty(object)
0x48c: Stack[-4] = Stack[-1]
0x48d: Call2 0x6ba

0x48e: Pop(1)
0x48f: PushEmpty(string)
0x490: Stack[-1] = "Neutral" // @poff=89
0x491: Call2 0x5e5

0x492: Pop(1)
0x493: PushEmpty()
0x494: Call2 0x42b

0x495: Pop(0)
0x496: PushEmpty()
0x497: Call2 0x422

0x498: Pop(0)
0x499: Return(); Pop(2)

0x49a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x49b: @ WaitForAnimEnd()
0x49c: Pop(0)
0x49d: PushEmpty(bool)
0x49e: Call2 0x501

0x49f: Pop(0)
0x4a0: Pop(1); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Return(); Pop(12)

0x4a3: PushEmpty(int)
0x4a4: Call2 0x634

0x4a5: Stack[-1] = Stack[-7]
0x4a6: Pop(1)
0x4a7: Stack[-5] = (int) 0
0x4a8: PushEmpty(bool)
0x4a9: Stack[-1] = (bool) 0
0x4aa: Push((int) 5)
0x4ab: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ad: PushEmpty(bool)
0x4ae: Call2 0x501

0x4af: Pop(0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b1: Stack[-1] = (bool) 1
0x4b2: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4b3: Pop(0); Push((bool) Stack[-6] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4b5: Push((int) 3)
0x4b6: @ Sleep(Stack[-1], Stack[-5])
0x4b7: Pop(1)
0x4b8: Pop(0); Push((bool) Stack[-4] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: GOTO 0x4dc

0x4bb: GOTO 0x4d1

0x4bc: @ irand(Stack[-3], Stack[-6])
0x4bd: Pop(0)
0x4be: Push((int) 5)
0x4bf: @ irand(Stack[-3], Stack[-1])
0x4c0: Pop(1)
0x4c1: Push((int) 0)
0x4c2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: Stack[-3] = (int) 0
0x4c5: Push("all") // @poff=138
0x4c6: PushEmpty(string, int)
0x4c7: Stack[-6] = Stack[-1]
0x4c8: Call2 0x62d

0x4c9: Pop(1)
0x4ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x4cb: Pop(2)
0x4cc: @ WaitForAnimEnd(Stack[-1])
0x4cd: Pop(0)
0x4ce: Pop(0); Push((bool) Stack[-1] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4d0: GOTO 0x4dc

0x4d1: PushEmpty(bool)
0x4d2: Call2 0x4df

0x4d3: Pop(0)
0x4d4: Pop(1); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4dc

0x4d7: @ ResetAAS()
0x4d8: Pop(0)
0x4d9: Push((int) 1)
0x4da: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4db: GOTO 0x4a8

0x4dc: @ ResetAAS()
0x4dd: Pop(0)
0x4de: Return(); Pop(12)

0x4df: Stack[-1] = (bool) 1
0x4e0: Return(); Pop(0)

0x4e1: @ StopAnimation()
0x4e2: Pop(0)
0x4e3: @ StopGroup0()
0x4e4: Pop(0)
0x4e5: Return(); Pop(0)

0x4e6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4e7: @ GetPosition(Stack[-3])
0x4e8: Pop(0)
0x4e9: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x4ea: Pop(0)
0x4eb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4ec: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4ed: Return(); Pop(6)

0x4ee: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4ef: @ GetPosition(Stack[-3])
0x4f0: Pop(0)
0x4f1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4f2: Push(CvectorIndex(Stack[-2], 0))
0x4f3: Push(CvectorIndex(Stack[-3], 2))
0x4f4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4f5: Pop(2)
0x4f6: Stack[-1] = Stack[-8]
0x4f7: Return(); Pop(6)

0x4f8: PushEmpty(cvector, cvector)
0x4f9: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x4fa: Pop(0)
0x4fb: PushEmpty(bool, cvector)
0x4fc: Stack[-3] = Stack[-1]
0x4fd: Call2 0x4ee

0x4fe: Stack[-2] = Stack[-6]
0x4ff: Pop(2)
0x500: Return(); Pop(2)

0x501: PushEmpty(bool, bool)
0x502: @ IsLoaded(Stack[-1])
0x503: Pop(0)
0x504: Stack[-1] = Stack[-3]
0x505: Return(); Pop(2)

0x506: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x507: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x508: Pop(0)
0x509: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x50a: Pop(0)
0x50b: Push(CvectorIndex(Stack[-8], 1))
0x50c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x50d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x50e: @ GetPosition(Stack[-7])
0x50f: Pop(0)
0x510: @ GetEyesHeight(Stack[-9])
0x511: Pop(0)
0x512: Push(CvectorIndex(Stack[-7], 1))
0x513: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x514: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x515: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x516: Push(CvectorIndex(Stack[-6], 1))
0x517: Stack[-1] = (int) 0
0x518: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x519: Pop(0); Push(Stack[-6] | Stack[-6]);
0x51a: Pop(1); Push(Sqrt(Stack[-1]))
0x51b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x51c: Stack[-5] = -Stack[-6]; Pop(0);
0x51d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x51e: PushEmpty(cvector, cvector)
0x51f: Push([0.0, 1.0, 0.0])
0x520: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x521: Call2 0x60e

0x522: Pop(1)
0x523: Push((int) 25)
0x524: Pop(2); Push(Stack[-2] * Stack[-1]);
0x525: Pop(2); Push(Stack[-2] + Stack[-1]);
0x526: Push([0.0, 10.0, 0.0])
0x527: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x528: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x529: @ IsOverrideActive(Stack[-2])
0x52a: Pop(0)
0x52b: Push(Stack[-2])
0x52c: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52d: Stack[-21] = (bool) 0
0x52e: Return(); Pop(18)

0x52f: @ StopWorld()
0x530: Pop(0)
0x531: @ CameraTransit(Stack[-3], Stack[-5])
0x532: Pop(0)
0x533: Push(CvectorIndex(Stack[-4], 0))
0x534: Push(CvectorIndex(Stack[-5], 2))
0x535: @ Rotate(Stack[-2], Stack[-1])
0x536: Pop(2)
0x537: PushEmpty(bool)
0x538: Call2 0x64d

0x539: Pop(0)
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: GOTO 0x544

0x53c: Push("head") // @poff=228
0x53d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x53e: Pop(1)
0x53f: Push(Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x541: Push("head") // @poff=228
0x542: @ LookAsyncCamera(Stack[-1])
0x543: Pop(1)
0x544: @ CameraWaitForPlayFinish()
0x545: Pop(0)
0x546: @ ResumeWorld()
0x547: Pop(0)
0x548: Stack[-21] = (bool) 1
0x549: Return(); Pop(18)

0x54a: PushEmpty(bool, bool)
0x54b: @ CameraSwitchToNormal()
0x54c: Pop(0)
0x54d: PushEmpty(bool)
0x54e: Call2 0x64d

0x54f: Pop(0)
0x550: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x551: GOTO 0x55a

0x552: Push("head") // @poff=228
0x553: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x554: Pop(1)
0x555: Push(Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x557: Push("head") // @poff=228
0x558: @ UnlookAsync(Stack[-1])
0x559: Pop(1)
0x55a: Return(); Pop(2)

0x55b: PushEmpty(int, int, int, int)
0x55c: Push("voice_common") // @poff=238
0x55d: @ GetVariable(Stack[-1], Stack[-3])
0x55e: Pop(1)
0x55f: Push(Stack[-2])
0x560: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x561: PushEmpty(bool, object)
0x562: Stack[-7] = Stack[-1]
0x563: Call2 0x595

0x564: Pop(1)
0x565: Pop(1); Push((bool) Stack[-1] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x567: PushEmpty(bool, object)
0x568: Stack[-7] = Stack[-1]
0x569: Call2 0x5ba

0x56a: Pop(1)
0x56b: Pop(1); Push((bool) Stack[-1] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: Stack[-6] = (bool) 0
0x56e: Return(); Pop(4)

0x56f: Push((int) 2)
0x570: @ irand(Stack[-2], Stack[-1])
0x571: Pop(1)
0x572: Push(Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x574: Push("voice_common") // @poff=238
0x575: Push((int) 1)
0x576: Pop(1); Push(Stack[-4] + Stack[-1]);
0x577: Push((int) 3)
0x578: Pop(2); Push(Stack[-2] % Stack[-1]);
0x579: @ SetVariable(Stack[-2], Stack[-1])
0x57a: Pop(2)
0x57b: GOTO 0x580

0x57c: Push("voice_common") // @poff=238
0x57d: Push((int) 0)
0x57e: @ SetVariable(Stack[-2], Stack[-1])
0x57f: Pop(2)
0x580: GOTO 0x593

0x581: PushEmpty(bool, object)
0x582: Stack[-7] = Stack[-1]
0x583: Call2 0x5ba

0x584: Pop(1)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x587: PushEmpty(bool, object)
0x588: Stack[-7] = Stack[-1]
0x589: Call2 0x595

0x58a: Pop(1)
0x58b: Pop(1); Push((bool) Stack[-1] == 0)
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-6] = (bool) 0
0x58e: Return(); Pop(4)

0x58f: Push("voice_common") // @poff=238
0x590: Push((int) 1)
0x591: @ SetVariable(Stack[-2], Stack[-1])
0x592: Pop(2)
0x593: Stack[-6] = (bool) 1
0x594: Return(); Pop(4)

0x595: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x596: Stack[-5] = "c" // @poff=264
0x597: Stack[-4] = (int) 0
0x598: Push((int) 1)
0x599: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x59a: Push((int) 1)
0x59b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x59c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x59d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x59e: Pop(1)
0x59f: Pop(0); Push((bool) Stack[-3] == 0)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: GOTO 0x5a5

0x5a2: Push((int) 1)
0x5a3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5a4: GOTO 0x598

0x5a5: Pop(0); Push((bool) Stack[-4] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-12] = (bool) 0
0x5a8: Return(); Pop(10)

0x5a9: Stack[-2] = (int) 0
0x5aa: Push((int) 1)
0x5ab: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ad: @ irand(Stack[-2], Stack[-4])
0x5ae: Pop(0)
0x5af: Push((int) 1)
0x5b0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5b2: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x5b3: Pop(1)
0x5b4: PushEmpty(bool, string)
0x5b5: Stack[-3] = Stack[-1]
0x5b6: Call2 0x5f2

0x5b7: Stack[-2] = Stack[-14]
0x5b8: Pop(2)
0x5b9: Return(); Pop(10)

0x5ba: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5bb: Push("d") // @poff=234
0x5bc: PushEmpty(int)
0x5bd: Call2 0x624

0x5be: Pop(0)
0x5bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c0: Push("m") // @poff=292
0x5c1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5c2: Stack[-4] = (int) 0
0x5c3: Push((int) 1)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5c5: Push((int) 1)
0x5c6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5c7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5c8: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x5c9: Pop(1)
0x5ca: Pop(0); Push((bool) Stack[-3] == 0)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cc: GOTO 0x5d0

0x5cd: Push((int) 1)
0x5ce: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5cf: GOTO 0x5c3

0x5d0: Pop(0); Push((bool) Stack[-4] == 0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d2: Stack[-12] = (bool) 0
0x5d3: Return(); Pop(10)

0x5d4: Stack[-2] = (int) 0
0x5d5: Push((int) 1)
0x5d6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: @ irand(Stack[-2], Stack[-4])
0x5d9: Pop(0)
0x5da: Push((int) 1)
0x5db: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5dd: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x5de: Pop(1)
0x5df: PushEmpty(bool, string)
0x5e0: Stack[-3] = Stack[-1]
0x5e1: Call2 0x5f2

0x5e2: Stack[-2] = Stack[-14]
0x5e3: Pop(2)
0x5e4: Return(); Pop(10)

0x5e5: PushEmpty(float, float, float, float)
0x5e6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5e7: Pop(0)
0x5e8: Push((bool) 0)
0x5e9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(1)
0x5eb: Return(); Pop(4)

0x5ec: PushEmpty(float, float, float, float)
0x5ed: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x5ee: Pop(0)
0x5ef: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x5f0: Pop(0)
0x5f1: Return(); Pop(4)

0x5f2: PushEmpty(bool, bool)
0x5f3: PushEmpty(bool)
0x5f4: Call2 0x64d

0x5f5: Pop(0)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5f8: Pop(0)
0x5f9: Push(Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fb: @ lshPlaySpeech(Stack[-3])
0x5fc: Pop(0)
0x5fd: Stack[-4] = (bool) 1
0x5fe: Return(); Pop(2)

0x5ff: Stack[-4] = (bool) 0
0x600: Return(); Pop(2)

0x601: PushEmpty(bool)
0x602: Call2 0x64d

0x603: Pop(0)
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: @ lshStopSpeech()
0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: PushEmpty(object, object)
0x609: @ self(Stack[-1])
0x60a: Pop(0)
0x60b: Stack[-1] = Stack[-3]
0x60c: Return(); Pop(2)

0x60d: Stack[-1] = 0
0x60e: PushEmpty(float, float)
0x60f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x610: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x611: Push((float)9.999999974752427e-07)
0x612: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x614: Stack[-4] = [0.0, 0.0, 0.0]
0x615: Return(); Pop(2)

0x616: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x617: Return(); Pop(2)

0x618: PushEmpty(object, object)
0x619: @ FindActor(Stack[-1], Stack[-4])
0x61a: Pop(0)
0x61b: Pop(0); PushNull((bool) Stack[-1] == 0)
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: Stack[-5] = (bool) 0
0x61e: Return(); Pop(2)

0x61f: @ Trigger(Stack[-1], Stack[-3])
0x620: Pop(0)
0x621: Stack[-5] = (bool) 1
0x622: Return(); Pop(2)

0x623: Stack[-1] = 0
0x624: PushEmpty(float, float)
0x625: @ GetGameTime(Stack[-1])
0x626: Pop(0)
0x627: Push((int) 1)
0x628: PushEmpty(int)
0x629: Push((int) 24)
0x62a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x62b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x62c: Return(); Pop(2)

0x62d: PushEmpty(string, string)
0x62e: Stack[-1] = "idle" // @poff=146
0x62f: Push(Stack[-3])
0x630: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x631: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x632: Stack[-1] = Stack[-4]
0x633: Return(); Pop(2)

0x634: PushEmpty(int, bool, int, bool)
0x635: Stack[-2] = (int) 0
0x636: Push("all") // @poff=138
0x637: PushEmpty(string, int)
0x638: Stack[-5] = Stack[-1]
0x639: Call2 0x62d

0x63a: Pop(1)
0x63b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x63c: Pop(2)
0x63d: Pop(0); Push((bool) Stack[-1] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: GOTO 0x643

0x640: Push((int) 1)
0x641: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x642: GOTO 0x636

0x643: Stack[-2] = Stack[-5]
0x644: Return(); Pop(4)

0x645: Stack[-1] = (int) 515540
0x646: Return(); Pop(0)

0x647: Stack[-1] = (int) 502865
0x648: Return(); Pop(0)

0x649: Stack[-1] = "ui/NPC_Klara.png" // @poff=296
0x64a: Return(); Pop(0)

0x64b: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=330
0x64c: Return(); Pop(0)

0x64d: Stack[-1] = (bool) 1
0x64e: Return(); Pop(0)

0x64f: PushEmpty()
0x650: PushEmpty(string)
0x651: Stack[-1] = "Late1" // @poff=368
0x652: Call2 0x6a3

0x653: Pop(1)
0x654: Return(); Pop(0)

0x655: PushEmpty()
0x656: PushEmpty(string)
0x657: Stack[-1] = "1" // @poff=376
0x658: Call2 0x6a3

0x659: Pop(1)
0x65a: Return(); Pop(0)

0x65b: PushEmpty()
0x65c: PushEmpty(bool, string, string)
0x65d: Stack[-2] = "klara2_positioner" // @poff=380
0x65e: Stack[-1] = "remove_klara" // @poff=416
0x65f: Call2 0x618

0x660: Pop(3)
0x661: Return(); Pop(0)

0x662: PushEmpty()
0x663: PushEmpty(bool, string, string)
0x664: Stack[-2] = "klara2_svita_positioner" // @poff=442
0x665: Stack[-1] = "place_svita" // @poff=490
0x666: Call2 0x618

0x667: Pop(3)
0x668: Return(); Pop(0)

0x669: PushEmpty()
0x66a: PushEmpty(bool, string, string)
0x66b: Stack[-2] = "klara2_positioner" // @poff=380
0x66c: Stack[-1] = "klara_stay" // @poff=514
0x66d: Call2 0x618

0x66e: Pop(3)
0x66f: Return(); Pop(0)

0x670: PushEmpty()
0x671: PushEmpty(bool, object)
0x672: Stack[-3] = Stack[-1]
0x673: Call2 0x684

0x674: Pop(1)
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-2] = (bool) 1
0x677: Return(); Pop(0)

0x678: Stack[-2] = (bool) 0
0x679: Return(); Pop(0)

0x67a: PushEmpty()
0x67b: PushEmpty(bool, object)
0x67c: Stack[-3] = Stack[-1]
0x67d: Call2 0x68b

0x67e: Pop(1)
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-2] = (bool) 1
0x681: Return(); Pop(0)

0x682: Stack[-2] = (bool) 0
0x683: Return(); Pop(0)

0x684: PushEmpty()
0x685: PushEmpty(bool, string)
0x686: Stack[-1] = "Late1" // @poff=368
0x687: Call2 0x6ae

0x688: Stack[-2] = Stack[-4]
0x689: Pop(2)
0x68a: Return(); Pop(0)

0x68b: PushEmpty()
0x68c: PushEmpty(bool, string)
0x68d: Stack[-1] = "1" // @poff=376
0x68e: Call2 0x6ae

0x68f: Stack[-2] = Stack[-4]
0x690: Pop(2)
0x691: Return(); Pop(0)

0x692: PushEmpty(int, int)
0x693: Push("branch") // @poff=536
0x694: @ GetVariable(Stack[-1], Stack[-2])
0x695: Pop(1)
0x696: Push((int) 0)
0x697: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x699: Stack[-3] = (int) 1
0x69a: Return(); Pop(2)

0x69b: GOTO 0x6a1

0x69c: Push((int) 1)
0x69d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69f: Stack[-3] = (int) 2
0x6a0: Return(); Pop(2)

0x6a1: Stack[-3] = (int) 3
0x6a2: Return(); Pop(2)

0x6a3: PushEmpty(int, int)
0x6a4: Push("day") // @poff=550
0x6a5: @ GetProperty(Stack[-1], Stack[-2])
0x6a6: Pop(1)
0x6a7: Push("K2S_Klara2") // @poff=558
0x6a8: Pop(1); Push(Stack[-1] + Stack[-4]);
0x6a9: Pop(1); Push(Stack[-1] + Stack[-2]);
0x6aa: Push((int) 1)
0x6ab: @ SetVariable(Stack[-2], Stack[-1])
0x6ac: Pop(2)
0x6ad: Return(); Pop(2)

0x6ae: PushEmpty(int, int, int, int)
0x6af: Push("day") // @poff=550
0x6b0: @ GetProperty(Stack[-1], Stack[-3])
0x6b1: Pop(1)
0x6b2: Push("K2S_Klara2") // @poff=558
0x6b3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6b4: Pop(1); Push(Stack[-1] + Stack[-3]);
0x6b5: @ GetVariable(Stack[-1], Stack[-2])
0x6b6: Pop(1)
0x6b7: Push((int) 0)
0x6b8: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x6b9: Return(); Pop(4)

0x6ba: PushEmpty(int, int, int, int)
0x6bb: Push("mt_klara2") // @poff=580
0x6bc: @ GetVariable(Stack[-1], Stack[-3])
0x6bd: Pop(1)
0x6be: Pop(0); Push((bool) Stack[-2] == 0)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c0: PushEmpty(int, object)
0x6c1: Stack[-7] = Stack[-1]
0x6c2: Push(-2, 1); TaskCall(1)
0x6c3: Call2 0xd

0x6c4: Pop(-2, 1); TaskReturn
0x6c5: Pop(2)
0x6c6: Push("mt_klara2") // @poff=580
0x6c7: Push((int) 1)
0x6c8: @ SetVariable(Stack[-2], Stack[-1])
0x6c9: Pop(2)
0x6ca: Push("day") // @poff=550
0x6cb: @ GetProperty(Stack[-1], Stack[-2])
0x6cc: Pop(1)
0x6cd: PushEmpty(int)
0x6ce: Call2 0x624

0x6cf: Pop(0)
0x6d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d2: PushEmpty(int, object)
0x6d3: Stack[-7] = Stack[-1]
0x6d4: Push(-2, 1); TaskCall(3)
0x6d5: Call2 0x11d

0x6d6: Pop(-2, 1); TaskReturn
0x6d7: Pop(2)
0x6d8: GOTO 0x6df

0x6d9: PushEmpty(int, object)
0x6da: Stack[-7] = Stack[-1]
0x6db: Push(-2, 1); TaskCall(5)
0x6dc: Call2 0x2a9

0x6dd: Pop(-2, 1); TaskReturn
0x6de: Pop(2)
0x6df: Return(); Pop(4)

