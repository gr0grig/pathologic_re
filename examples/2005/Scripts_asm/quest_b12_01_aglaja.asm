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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:oob12AglajaSobor1
	W:oob12AglajaSobor2
	W:oob12AglajaSobor3
	W:oob12AglajaSobor4
	W:oob12AglajaSobor5
	W:oob12AglajaSobor6
	W:oob12AglajaSobor7
	W:b12q01ChildsAreVisited
	W:b12q01TheaterIsVisited
	W:game_final
	W:branch
	W:ui/NPC_Aglaja.png
	W:ui/NPC_Aglaja_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f00620031003200410067006c0061006a00610053006f0062006f007200310000006f006f00620031003200410067006c0061006a00610053006f0062006f007200320000006f006f00620031003200410067006c0061006a00610053006f0062006f007200330000006f006f00620031003200410067006c0061006a00610053006f0062006f007200340000006f006f00620031003200410067006c0061006a00610053006f0062006f007200350000006f006f00620031003200410067006c0061006a00610053006f0062006f007200360000006f006f00620031003200410067006c0061006a00610053006f0062006f007200370000006200310032007100300031004300680069006c00640073004100720065005600690073006900740065006400000062003100320071003000310054006800650061007400650072004900730056006900730069007400650064000000670061006d0065005f00660069006e0061006c0000006200720061006e00630068000000750069002f004e00500043005f00410067006c0061006a0061002e0070006e0067000000750069002f004e00500043005f00410067006c0061006a0061005f0062002e0070006e0067000000
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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0x4be
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x127 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x4c2 Vars = (object)
		EVENT_26 Op = 0x4ca Vars = (string)
		EVENT_6 Op = 0x4e6 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x5fa

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x54d

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x4f8

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x6cd

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x6cb

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x6cf

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x6d1

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x6ba

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x53c

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x6ae

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral" // @poff=89
0x5f: Call2 0x111

0x60: Pop(1)
0x61: Push((int) 522168)
0x62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x63: Pop(1)
0x64: @@@ ClearReplies(); Obj=0 // @poff=116
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x65a

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 522169)
0x6c: Push((int) 23901)
0x6d: Push((int) 23336)
0x6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x666

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 522721)
0x76: Push((int) 23904)
0x77: Push((int) 23902)
0x78: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x672

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 522722)
0x80: Push((int) 23905)
0x81: Push((int) 23903)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 0
0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 0
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x642

0x8b: Pop(1)
0x8c: Pop(1); Push((bool) Stack[-1] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x64e

0x91: Pop(1)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x67e

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Stack[-1] = (bool) 1
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: Push((int) 522728)
0x9e: Push((int) 23910)
0x9f: Push((int) 23909)
0xa0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa1: Pop(3)
0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x68a

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push((int) 522735)
0xa8: Push((int) 23921)
0xa9: Push((int) 23916)
0xaa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xab: Pop(3)
0xac: PushEmpty(bool)
0xad: Stack[-1] = (bool) 0
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x642

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb3: PushEmpty(bool, object)
0xb4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Call2 0x696

0xb6: Pop(1)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Stack[-1] = (bool) 1
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: Push((int) 522774)
0xbb: Push((int) 23968)
0xbc: Push((int) 23957)
0xbd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbe: Pop(3)
0xbf: PushEmpty(bool)
0xc0: Stack[-1] = (bool) 0
0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x64e

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call2 0x6a2

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Stack[-1] = (bool) 1
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: Push((int) 522784)
0xce: Push((int) 23978)
0xcf: Push((int) 23967)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Push((int) 522727)
0xd3: Push((int) -1)
0xd4: Push((int) 23908)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: GOTO 0xf3

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x111

0xdb: Pop(1)
0xdc: Push((int) 523161)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 523162)
0xe2: Push((int) -1)
0xe3: Push((int) 24364)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 523168)
0xe7: Push((int) -1)
0xe8: Push((int) 24370)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Push((int) 523169)
0xec: Push((int) -1)
0xed: Push((int) 24371)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: GOTO 0xf3

0xf1: Return(); Pop(0)

0xf2: GOTO 0x55

0xf3: PushEmpty(bool)
0xf4: Call2 0x6d3

0xf5: Pop(0)
0xf6: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf7: @ lshWaitForAnimEnd()
0xf8: Pop(0)
0xf9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: GOTO 0x101

0xfc: PushEmpty(string)
0xfd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfe: Call2 0x5d7

0xff: Pop(1)
0x100: GOTO 0xf7

0x101: GOTO 0x110

0x102: Push("all") // @poff=138
0x103: Push("idle") // @poff=146
0x104: @ PlayAnimation(Stack[-2], Stack[-1])
0x105: Pop(2)
0x106: @ WaitForAnimEnd()
0x107: Pop(0)
0x108: Push( Stack[3 + Tasks[-1].StackPointer] )
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: GOTO 0x110

0x10b: Push("all") // @poff=138
0x10c: Push("idle") // @poff=146
0x10d: @ PlayAnimation(Stack[-2], Stack[-1])
0x10e: Pop(2)
0x10f: GOTO 0x106

0x110: Return(); Pop(0)

0x111: PushEmpty()
0x112: PushEmpty(bool)
0x113: Call2 0x6d3

0x114: Pop(0)
0x115: Pop(1); Push((bool) Stack[-1] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Return(); Pop(0)

0x118: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Return(); Pop(0)

0x11b: PushEmpty(string, bool)
0x11c: Stack[-3] = Stack[-2]
0x11d: Push("") // @poff=102
0x11e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-1] = (bool) 0
0x121: GOTO 0x123

0x122: Stack[-1] = (bool) 1
0x123: Call2 0x5de

0x124: Pop(2)
0x125: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x126: Return(); Pop(0)

0x127: PushEmpty()
0x128: Push((int) 1)
0x129: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x12a: PushEmpty()
0x12b: Call2 0x5f3

0x12c: Pop(0)
0x12d: Push((int) 23336)
0x12e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: PushEmpty(object, object)
0x131: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x132: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x133: Call2 0x618

0x134: Pop(2)
0x135: Push((int) 23902)
0x136: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x61e

0x13c: Pop(2)
0x13d: Push((int) 23903)
0x13e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x624

0x144: Pop(2)
0x145: Push((int) 23909)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x62a

0x14c: Pop(2)
0x14d: Push((int) 23916)
0x14e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: PushEmpty(object, object)
0x151: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x152: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x153: Call2 0x630

0x154: Pop(2)
0x155: Push((int) 23957)
0x156: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(object, object)
0x159: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0x636

0x15c: Pop(2)
0x15d: Push((int) 23967)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: PushEmpty(object, object)
0x161: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0x63c

0x164: Pop(2)
0x165: Push((int) 23335)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0x6ae

0x16b: Pop(1)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral" // @poff=89
0x170: Call2 0x111

0x171: Pop(1)
0x172: Push((int) 522168)
0x173: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x174: Pop(1)
0x175: @@@ ClearReplies(); Obj=0 // @poff=116
0x176: Pop(0)
0x177: PushEmpty(bool, object)
0x178: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x179: Call2 0x65a

0x17a: Pop(1)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: Push((int) 522169)
0x17d: Push((int) 23901)
0x17e: Push((int) 23336)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x666

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: Push((int) 522721)
0x187: Push((int) 23904)
0x188: Push((int) 23902)
0x189: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18a: Pop(3)
0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0x672

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: Push((int) 522722)
0x191: Push((int) 23905)
0x192: Push((int) 23903)
0x193: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x194: Pop(3)
0x195: PushEmpty(bool)
0x196: Stack[-1] = (bool) 0
0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: PushEmpty(bool, object)
0x19a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Call2 0x642

0x19c: Pop(1)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x64e

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call2 0x67e

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: Stack[-1] = (bool) 1
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: Push((int) 522728)
0x1af: Push((int) 23910)
0x1b0: Push((int) 23909)
0x1b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b2: Pop(3)
0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x68a

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: Push((int) 522735)
0x1b9: Push((int) 23921)
0x1ba: Push((int) 23916)
0x1bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bc: Pop(3)
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x642

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call2 0x696

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-1] = (bool) 1
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: Push((int) 522774)
0x1cc: Push((int) 23968)
0x1cd: Push((int) 23957)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: PushEmpty(bool)
0x1d1: Stack[-1] = (bool) 0
0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Call2 0x64e

0x1d5: Pop(1)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d7: PushEmpty(bool, object)
0x1d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Call2 0x6a2

0x1da: Pop(1)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: Push((int) 522784)
0x1df: Push((int) 23978)
0x1e0: Push((int) 23967)
0x1e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e2: Pop(3)
0x1e3: Push((int) 522727)
0x1e4: Push((int) -1)
0x1e5: Push((int) 23908)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Neutral" // @poff=89
0x1eb: Call2 0x111

0x1ec: Pop(1)
0x1ed: Push((int) 523161)
0x1ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ef: Pop(1)
0x1f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f1: Pop(0)
0x1f2: Push((int) 523162)
0x1f3: Push((int) -1)
0x1f4: Push((int) 24364)
0x1f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f6: Pop(3)
0x1f7: Push((int) 523168)
0x1f8: Push((int) -1)
0x1f9: Push((int) 24370)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Push((int) 523169)
0x1fd: Push((int) -1)
0x1fe: Push((int) 24371)
0x1ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 23978)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral" // @poff=89
0x207: Call2 0x111

0x208: Pop(1)
0x209: Push((int) 522795)
0x20a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20b: Pop(1)
0x20c: @@@ ClearReplies(); Obj=0 // @poff=116
0x20d: Pop(0)
0x20e: Push((int) 522798)
0x20f: Push((int) -1)
0x210: Push((int) 23981)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Push((int) 522796)
0x214: Push((int) 23980)
0x215: Push((int) 23979)
0x216: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 23980)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral" // @poff=89
0x21e: Call2 0x111

0x21f: Pop(1)
0x220: Push((int) 522797)
0x221: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x222: Pop(1)
0x223: @@@ ClearReplies(); Obj=0 // @poff=116
0x224: Pop(0)
0x225: Push((int) 522800)
0x226: Push((int) -1)
0x227: Push((int) 23983)
0x228: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x229: Pop(3)
0x22a: Push((int) 522799)
0x22b: Push((int) 23984)
0x22c: Push((int) 23982)
0x22d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Push((int) 23984)
0x231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x233: PushEmpty(string)
0x234: Stack[-1] = "Neutral" // @poff=89
0x235: Call2 0x111

0x236: Pop(1)
0x237: Push((int) 522801)
0x238: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x239: Pop(1)
0x23a: @@@ ClearReplies(); Obj=0 // @poff=116
0x23b: Pop(0)
0x23c: Push((int) 522802)
0x23d: Push((int) -1)
0x23e: Push((int) 23985)
0x23f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x240: Pop(3)
0x241: Push((int) 522803)
0x242: Push((int) 23987)
0x243: Push((int) 23986)
0x244: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 23987)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Neutral" // @poff=89
0x24c: Call2 0x111

0x24d: Pop(1)
0x24e: Push((int) 522804)
0x24f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x250: Pop(1)
0x251: @@@ ClearReplies(); Obj=0 // @poff=116
0x252: Pop(0)
0x253: Push((int) 522805)
0x254: Push((int) -1)
0x255: Push((int) 23988)
0x256: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x257: Pop(3)
0x258: Push((int) 522806)
0x259: Push((int) -1)
0x25a: Push((int) 23989)
0x25b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Push((int) 23968)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral" // @poff=89
0x263: Call2 0x111

0x264: Pop(1)
0x265: Push((int) 522785)
0x266: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x267: Pop(1)
0x268: @@@ ClearReplies(); Obj=0 // @poff=116
0x269: Pop(0)
0x26a: Push((int) 522786)
0x26b: Push((int) 23970)
0x26c: Push((int) 23969)
0x26d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26e: Pop(3)
0x26f: Return(); Pop(0)

0x270: Push((int) 23970)
0x271: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x273: PushEmpty(string)
0x274: Stack[-1] = "Neutral" // @poff=89
0x275: Call2 0x111

0x276: Pop(1)
0x277: Push((int) 522787)
0x278: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x279: Pop(1)
0x27a: @@@ ClearReplies(); Obj=0 // @poff=116
0x27b: Pop(0)
0x27c: Push((int) 522788)
0x27d: Push((int) 23972)
0x27e: Push((int) 23971)
0x27f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 23972)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral" // @poff=89
0x287: Call2 0x111

0x288: Pop(1)
0x289: Push((int) 522789)
0x28a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28b: Pop(1)
0x28c: @@@ ClearReplies(); Obj=0 // @poff=116
0x28d: Pop(0)
0x28e: Push((int) 522790)
0x28f: Push((int) 23974)
0x290: Push((int) 23973)
0x291: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Push((int) 23974)
0x295: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x297: PushEmpty(string)
0x298: Stack[-1] = "Neutral" // @poff=89
0x299: Call2 0x111

0x29a: Pop(1)
0x29b: Push((int) 522791)
0x29c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29d: Pop(1)
0x29e: @@@ ClearReplies(); Obj=0 // @poff=116
0x29f: Pop(0)
0x2a0: Push((int) 522792)
0x2a1: Push((int) 23976)
0x2a2: Push((int) 23975)
0x2a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a4: Pop(3)
0x2a5: Push((int) 540111)
0x2a6: Push((int) -1)
0x2a7: Push((int) 42078)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: Return(); Pop(0)

0x2ab: Push((int) 23976)
0x2ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral" // @poff=89
0x2b0: Call2 0x111

0x2b1: Pop(1)
0x2b2: Push((int) 522793)
0x2b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b4: Pop(1)
0x2b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b6: Pop(0)
0x2b7: Push((int) 522794)
0x2b8: Push((int) -1)
0x2b9: Push((int) 23977)
0x2ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bb: Pop(3)
0x2bc: Return(); Pop(0)

0x2bd: Push((int) 23921)
0x2be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c0: PushEmpty(string)
0x2c1: Stack[-1] = "Neutral" // @poff=89
0x2c2: Call2 0x111

0x2c3: Pop(1)
0x2c4: Push((int) 522740)
0x2c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c6: Pop(1)
0x2c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c8: Pop(0)
0x2c9: Push((int) 522741)
0x2ca: Push((int) 23923)
0x2cb: Push((int) 23922)
0x2cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cd: Pop(3)
0x2ce: Return(); Pop(0)

0x2cf: Push((int) 23923)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral" // @poff=89
0x2d4: Call2 0x111

0x2d5: Pop(1)
0x2d6: Push((int) 522742)
0x2d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d8: Pop(1)
0x2d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x2da: Pop(0)
0x2db: Push((int) 522743)
0x2dc: Push((int) -1)
0x2dd: Push((int) 23924)
0x2de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2df: Pop(3)
0x2e0: Push((int) 522744)
0x2e1: Push((int) -1)
0x2e2: Push((int) 23925)
0x2e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e4: Pop(3)
0x2e5: Return(); Pop(0)

0x2e6: Push((int) 23910)
0x2e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2e9: PushEmpty(string)
0x2ea: Stack[-1] = "Neutral" // @poff=89
0x2eb: Call2 0x111

0x2ec: Pop(1)
0x2ed: Push((int) 522729)
0x2ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ef: Pop(1)
0x2f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f1: Pop(0)
0x2f2: Push((int) 522730)
0x2f3: Push((int) -1)
0x2f4: Push((int) 23911)
0x2f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f6: Pop(3)
0x2f7: Push((int) 540108)
0x2f8: Push((int) 42076)
0x2f9: Push((int) 42075)
0x2fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fb: Pop(3)
0x2fc: Return(); Pop(0)

0x2fd: Push((int) 42076)
0x2fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x300: PushEmpty(string)
0x301: Stack[-1] = "Neutral" // @poff=89
0x302: Call2 0x111

0x303: Pop(1)
0x304: Push((int) 540109)
0x305: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x306: Pop(1)
0x307: @@@ ClearReplies(); Obj=0 // @poff=116
0x308: Pop(0)
0x309: Push((int) 540110)
0x30a: Push((int) -1)
0x30b: Push((int) 42077)
0x30c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30d: Pop(3)
0x30e: Return(); Pop(0)

0x30f: Push((int) 23905)
0x310: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x312: PushEmpty(string)
0x313: Stack[-1] = "Neutral" // @poff=89
0x314: Call2 0x111

0x315: Pop(1)
0x316: Push((int) 522724)
0x317: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x318: Pop(1)
0x319: @@@ ClearReplies(); Obj=0 // @poff=116
0x31a: Pop(0)
0x31b: Push((int) 522725)
0x31c: Push((int) 23920)
0x31d: Push((int) 23906)
0x31e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31f: Pop(3)
0x320: Push((int) 522726)
0x321: Push((int) -1)
0x322: Push((int) 23907)
0x323: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 23920)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Neutral" // @poff=89
0x32b: Call2 0x111

0x32c: Pop(1)
0x32d: Push((int) 522739)
0x32e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x32f: Pop(1)
0x330: @@@ ClearReplies(); Obj=0 // @poff=116
0x331: Pop(0)
0x332: Push((int) 522770)
0x333: Push((int) 23954)
0x334: Push((int) 23953)
0x335: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x336: Pop(3)
0x337: Push((int) 522769)
0x338: Push((int) -1)
0x339: Push((int) 23952)
0x33a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 23954)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral" // @poff=89
0x342: Call2 0x111

0x343: Pop(1)
0x344: Push((int) 522771)
0x345: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x346: Pop(1)
0x347: @@@ ClearReplies(); Obj=0 // @poff=116
0x348: Pop(0)
0x349: Push((int) 522772)
0x34a: Push((int) -1)
0x34b: Push((int) 23955)
0x34c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x34d: Pop(3)
0x34e: Push((int) 522773)
0x34f: Push((int) -1)
0x350: Push((int) 23956)
0x351: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x352: Pop(3)
0x353: Return(); Pop(0)

0x354: Push((int) 23904)
0x355: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x357: PushEmpty(string)
0x358: Stack[-1] = "Neutral" // @poff=89
0x359: Call2 0x111

0x35a: Pop(1)
0x35b: Push((int) 522723)
0x35c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x35d: Pop(1)
0x35e: @@@ ClearReplies(); Obj=0 // @poff=116
0x35f: Pop(0)
0x360: Push((int) 522732)
0x361: Push((int) 23914)
0x362: Push((int) 23913)
0x363: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x364: Pop(3)
0x365: Return(); Pop(0)

0x366: Push((int) 23914)
0x367: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x369: PushEmpty(string)
0x36a: Stack[-1] = "Neutral" // @poff=89
0x36b: Call2 0x111

0x36c: Pop(1)
0x36d: Push((int) 522733)
0x36e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x36f: Pop(1)
0x370: @@@ ClearReplies(); Obj=0 // @poff=116
0x371: Pop(0)
0x372: Push((int) 522734)
0x373: Push((int) -1)
0x374: Push((int) 23915)
0x375: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: Push((int) 23901)
0x379: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Neutral" // @poff=89
0x37d: Call2 0x111

0x37e: Pop(1)
0x37f: Push((int) 522720)
0x380: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x381: Pop(1)
0x382: @@@ ClearReplies(); Obj=0 // @poff=116
0x383: Pop(0)
0x384: Push((int) 522731)
0x385: Push((int) 23917)
0x386: Push((int) 23912)
0x387: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x388: Pop(3)
0x389: Push((int) 522745)
0x38a: Push((int) 23927)
0x38b: Push((int) 23926)
0x38c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38d: Pop(3)
0x38e: Push((int) 522753)
0x38f: Push((int) 23936)
0x390: Push((int) 23935)
0x391: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x392: Pop(3)
0x393: Push((int) 522766)
0x394: Push((int) 23950)
0x395: Push((int) 23949)
0x396: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Push((int) 23950)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Neutral" // @poff=89
0x39e: Call2 0x111

0x39f: Pop(1)
0x3a0: Push((int) 522767)
0x3a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a2: Pop(1)
0x3a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a4: Pop(0)
0x3a5: Push((int) 522768)
0x3a6: Push((int) -1)
0x3a7: Push((int) 23951)
0x3a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a9: Pop(3)
0x3aa: Return(); Pop(0)

0x3ab: Push((int) 23936)
0x3ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3ae: PushEmpty(string)
0x3af: Stack[-1] = "Neutral" // @poff=89
0x3b0: Call2 0x111

0x3b1: Pop(1)
0x3b2: Push((int) 522754)
0x3b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b4: Pop(1)
0x3b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b6: Pop(0)
0x3b7: Push((int) 522755)
0x3b8: Push((int) 23938)
0x3b9: Push((int) 23937)
0x3ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bb: Pop(3)
0x3bc: Return(); Pop(0)

0x3bd: Push((int) 23938)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral" // @poff=89
0x3c2: Call2 0x111

0x3c3: Pop(1)
0x3c4: Push((int) 522756)
0x3c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c6: Pop(1)
0x3c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c8: Pop(0)
0x3c9: Push((int) 522757)
0x3ca: Push((int) -1)
0x3cb: Push((int) 23939)
0x3cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cd: Pop(3)
0x3ce: Push((int) 522758)
0x3cf: Push((int) -1)
0x3d0: Push((int) 23940)
0x3d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d2: Pop(3)
0x3d3: Return(); Pop(0)

0x3d4: Push((int) 23927)
0x3d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d7: PushEmpty(string)
0x3d8: Stack[-1] = "Neutral" // @poff=89
0x3d9: Call2 0x111

0x3da: Pop(1)
0x3db: Push((int) 522746)
0x3dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3dd: Pop(1)
0x3de: @@@ ClearReplies(); Obj=0 // @poff=116
0x3df: Pop(0)
0x3e0: Push((int) 522747)
0x3e1: Push((int) 23929)
0x3e2: Push((int) 23928)
0x3e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e4: Pop(3)
0x3e5: Push((int) 522775)
0x3e6: Push((int) 23959)
0x3e7: Push((int) 23958)
0x3e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e9: Pop(3)
0x3ea: Return(); Pop(0)

0x3eb: Push((int) 23959)
0x3ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3ee: PushEmpty(string)
0x3ef: Stack[-1] = "Neutral" // @poff=89
0x3f0: Call2 0x111

0x3f1: Pop(1)
0x3f2: Push((int) 522776)
0x3f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f4: Pop(1)
0x3f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f6: Pop(0)
0x3f7: Push((int) 522777)
0x3f8: Push((int) 23961)
0x3f9: Push((int) 23960)
0x3fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 23961)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral" // @poff=89
0x402: Call2 0x111

0x403: Pop(1)
0x404: Push((int) 522778)
0x405: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x406: Pop(1)
0x407: @@@ ClearReplies(); Obj=0 // @poff=116
0x408: Pop(0)
0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40b: Call2 0x642

0x40c: Pop(1)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40f: Push((int) 522779)
0x410: Push((int) -1)
0x411: Push((int) 23962)
0x412: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x413: Pop(3)
0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x416: Call2 0x642

0x417: Pop(1)
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: Push((int) 522780)
0x41a: Push((int) 23964)
0x41b: Push((int) 23963)
0x41c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 23964)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Neutral" // @poff=89
0x424: Call2 0x111

0x425: Pop(1)
0x426: Push((int) 522781)
0x427: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x428: Pop(1)
0x429: @@@ ClearReplies(); Obj=0 // @poff=116
0x42a: Pop(0)
0x42b: Push((int) 522783)
0x42c: Push((int) -1)
0x42d: Push((int) 23966)
0x42e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x42f: Pop(3)
0x430: Push((int) 522782)
0x431: Push((int) -1)
0x432: Push((int) 23965)
0x433: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 23929)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Neutral" // @poff=89
0x43b: Call2 0x111

0x43c: Pop(1)
0x43d: Push((int) 522748)
0x43e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43f: Pop(1)
0x440: @@@ ClearReplies(); Obj=0 // @poff=116
0x441: Pop(0)
0x442: Push((int) 522749)
0x443: Push((int) 23932)
0x444: Push((int) 23930)
0x445: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x446: Pop(3)
0x447: Push((int) 522750)
0x448: Push((int) -1)
0x449: Push((int) 23931)
0x44a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: Push((int) 23932)
0x44e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x450: PushEmpty(string)
0x451: Stack[-1] = "Neutral" // @poff=89
0x452: Call2 0x111

0x453: Pop(1)
0x454: Push((int) 522751)
0x455: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x456: Pop(1)
0x457: @@@ ClearReplies(); Obj=0 // @poff=116
0x458: Pop(0)
0x459: Push((int) 522752)
0x45a: Push((int) 23917)
0x45b: Push((int) 23933)
0x45c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45d: Pop(3)
0x45e: Return(); Pop(0)

0x45f: Push((int) 23917)
0x460: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x462: PushEmpty(string)
0x463: Stack[-1] = "Neutral" // @poff=89
0x464: Call2 0x111

0x465: Pop(1)
0x466: Push((int) 522736)
0x467: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x468: Pop(1)
0x469: @@@ ClearReplies(); Obj=0 // @poff=116
0x46a: Pop(0)
0x46b: Push((int) 522737)
0x46c: Push((int) 23919)
0x46d: Push((int) 23918)
0x46e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 23919)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Neutral" // @poff=89
0x476: Call2 0x111

0x477: Pop(1)
0x478: Push((int) 522738)
0x479: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47a: Pop(1)
0x47b: @@@ ClearReplies(); Obj=0 // @poff=116
0x47c: Pop(0)
0x47d: Push((int) 522759)
0x47e: Push((int) 23945)
0x47f: Push((int) 23941)
0x480: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x481: Pop(3)
0x482: Push((int) 522760)
0x483: Push((int) 23943)
0x484: Push((int) 23942)
0x485: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 23943)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Neutral" // @poff=89
0x48d: Call2 0x111

0x48e: Pop(1)
0x48f: Push((int) 522761)
0x490: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x491: Pop(1)
0x492: @@@ ClearReplies(); Obj=0 // @poff=116
0x493: Pop(0)
0x494: Push((int) 522762)
0x495: Push((int) 23945)
0x496: Push((int) 23944)
0x497: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x498: Pop(3)
0x499: Return(); Pop(0)

0x49a: Push((int) 23945)
0x49b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "Neutral" // @poff=89
0x49f: Call2 0x111

0x4a0: Pop(1)
0x4a1: Push((int) 522763)
0x4a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a3: Pop(1)
0x4a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a5: Pop(0)
0x4a6: Push((int) 522764)
0x4a7: Push((int) -1)
0x4a8: Push((int) 23947)
0x4a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4aa: Pop(3)
0x4ab: Push((int) 522765)
0x4ac: Push((int) -1)
0x4ad: Push((int) 23948)
0x4ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4af: Pop(3)
0x4b0: Return(); Pop(0)

0x4b1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4b2: PushEmpty(bool)
0x4b3: Call2 0x6d3

0x4b4: Pop(0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b6: @ lshStopAnimation()
0x4b7: Pop(0)
0x4b8: GOTO 0x4bb

0x4b9: @ StopAnimation()
0x4ba: Pop(0)
0x4bb: Return(); Pop(0)

0x4bc: GOTO 0x128

0x4bd: Return(); Pop(0)

0x4be: @ Hold()
0x4bf: Pop(0)
0x4c0: GOTO 0x4be

0x4c1: Return(); Pop(0)

0x4c2: PushEmpty()
0x4c3: PushEmpty(int, object)
0x4c4: Stack[-3] = Stack[-1]
0x4c5: Push(-2, 1); TaskCall(0)
0x4c6: Call2 0x0

0x4c7: Pop(-2, 1); TaskReturn
0x4c8: Pop(2)
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty(bool, bool)
0x4cb: Push("cleanup") // @poff=156
0x4cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4ce: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4cf: @ IsLoaded(Stack[-1])
0x4d0: Pop(0)
0x4d1: PushEmpty(bool)
0x4d2: Stack[-1] = (bool) 0
0x4d3: Pop(0); Push((bool) Stack[-2] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d5: PushEmpty(bool)
0x4d6: Call2 0x4f6

0x4d7: Pop(0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Stack[-1] = (bool) 1
0x4da: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4db: PushEmpty(object)
0x4dc: Call2 0x5fa

0x4dd: Pop(0)
0x4de: @ RemoveActor(Stack[-1])
0x4df: Pop(1)
0x4e0: GOTO 0x4e5

0x4e1: Push("restore") // @poff=172
0x4e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4e5: Return(); Pop(2)

0x4e6: PushEmpty(bool)
0x4e7: Stack[-1] = (bool) 0
0x4e8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ea: PushEmpty(bool)
0x4eb: Call2 0x4f6

0x4ec: Pop(0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ee: Stack[-1] = (bool) 1
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f0: PushEmpty(object)
0x4f1: Call2 0x5fa

0x4f2: Pop(0)
0x4f3: @ RemoveActor(Stack[-1])
0x4f4: Pop(1)
0x4f5: Return(); Pop(0)

0x4f6: Stack[-1] = (bool) 1
0x4f7: Return(); Pop(0)

0x4f8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4f9: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x4fa: Pop(0)
0x4fb: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x4fc: Pop(0)
0x4fd: Push(CvectorIndex(Stack[-8], 1))
0x4fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4ff: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x500: @ GetPosition(Stack[-7])
0x501: Pop(0)
0x502: @ GetEyesHeight(Stack[-9])
0x503: Pop(0)
0x504: Push(CvectorIndex(Stack[-7], 1))
0x505: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x506: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x507: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x508: Push(CvectorIndex(Stack[-6], 1))
0x509: Stack[-1] = (int) 0
0x50a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x50b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x50c: Pop(1); Push(Sqrt(Stack[-1]))
0x50d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x50e: Stack[-5] = -Stack[-6]; Pop(0);
0x50f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x510: PushEmpty(cvector, cvector)
0x511: Push([0.0, 1.0, 0.0])
0x512: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x513: Call2 0x600

0x514: Pop(1)
0x515: Push((int) 25)
0x516: Pop(2); Push(Stack[-2] * Stack[-1]);
0x517: Pop(2); Push(Stack[-2] + Stack[-1]);
0x518: Push([0.0, 10.0, 0.0])
0x519: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x51a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x51b: @ IsOverrideActive(Stack[-2])
0x51c: Pop(0)
0x51d: Push(Stack[-2])
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-21] = (bool) 0
0x520: Return(); Pop(18)

0x521: @ StopWorld()
0x522: Pop(0)
0x523: @ CameraTransit(Stack[-3], Stack[-5])
0x524: Pop(0)
0x525: Push(CvectorIndex(Stack[-4], 0))
0x526: Push(CvectorIndex(Stack[-5], 2))
0x527: @ Rotate(Stack[-2], Stack[-1])
0x528: Pop(2)
0x529: PushEmpty(bool)
0x52a: Call2 0x6d3

0x52b: Pop(0)
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: GOTO 0x536

0x52e: Push("head") // @poff=214
0x52f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x530: Pop(1)
0x531: Push(Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x533: Push("head") // @poff=214
0x534: @ LookAsyncCamera(Stack[-1])
0x535: Pop(1)
0x536: @ CameraWaitForPlayFinish()
0x537: Pop(0)
0x538: @ ResumeWorld()
0x539: Pop(0)
0x53a: Stack[-21] = (bool) 1
0x53b: Return(); Pop(18)

0x53c: PushEmpty(bool, bool)
0x53d: @ CameraSwitchToNormal()
0x53e: Pop(0)
0x53f: PushEmpty(bool)
0x540: Call2 0x6d3

0x541: Pop(0)
0x542: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x543: GOTO 0x54c

0x544: Push("head") // @poff=214
0x545: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x546: Pop(1)
0x547: Push(Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x549: Push("head") // @poff=214
0x54a: @ UnlookAsync(Stack[-1])
0x54b: Pop(1)
0x54c: Return(); Pop(2)

0x54d: PushEmpty(int, int, int, int)
0x54e: Push("voice_common") // @poff=224
0x54f: @ GetVariable(Stack[-1], Stack[-3])
0x550: Pop(1)
0x551: Push(Stack[-2])
0x552: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x553: PushEmpty(bool, object)
0x554: Stack[-7] = Stack[-1]
0x555: Call2 0x587

0x556: Pop(1)
0x557: Pop(1); Push((bool) Stack[-1] == 0)
0x558: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x559: PushEmpty(bool, object)
0x55a: Stack[-7] = Stack[-1]
0x55b: Call2 0x5ac

0x55c: Pop(1)
0x55d: Pop(1); Push((bool) Stack[-1] == 0)
0x55e: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55f: Stack[-6] = (bool) 0
0x560: Return(); Pop(4)

0x561: Push((int) 2)
0x562: @ irand(Stack[-2], Stack[-1])
0x563: Pop(1)
0x564: Push(Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x566: Push("voice_common") // @poff=224
0x567: Push((int) 1)
0x568: Pop(1); Push(Stack[-4] + Stack[-1]);
0x569: Push((int) 3)
0x56a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x56b: @ SetVariable(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: GOTO 0x572

0x56e: Push("voice_common") // @poff=224
0x56f: Push((int) 0)
0x570: @ SetVariable(Stack[-2], Stack[-1])
0x571: Pop(2)
0x572: GOTO 0x585

0x573: PushEmpty(bool, object)
0x574: Stack[-7] = Stack[-1]
0x575: Call2 0x5ac

0x576: Pop(1)
0x577: Pop(1); Push((bool) Stack[-1] == 0)
0x578: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x579: PushEmpty(bool, object)
0x57a: Stack[-7] = Stack[-1]
0x57b: Call2 0x587

0x57c: Pop(1)
0x57d: Pop(1); Push((bool) Stack[-1] == 0)
0x57e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57f: Stack[-6] = (bool) 0
0x580: Return(); Pop(4)

0x581: Push("voice_common") // @poff=224
0x582: Push((int) 1)
0x583: @ SetVariable(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: Stack[-6] = (bool) 1
0x586: Return(); Pop(4)

0x587: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x588: Stack[-5] = "c" // @poff=250
0x589: Stack[-4] = (int) 0
0x58a: Push((int) 1)
0x58b: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x58c: Push((int) 1)
0x58d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x58e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x58f: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x590: Pop(1)
0x591: Pop(0); Push((bool) Stack[-3] == 0)
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: GOTO 0x597

0x594: Push((int) 1)
0x595: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x596: GOTO 0x58a

0x597: Pop(0); Push((bool) Stack[-4] == 0)
0x598: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x599: Stack[-12] = (bool) 0
0x59a: Return(); Pop(10)

0x59b: Stack[-2] = (int) 0
0x59c: Push((int) 1)
0x59d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59f: @ irand(Stack[-2], Stack[-4])
0x5a0: Pop(0)
0x5a1: Push((int) 1)
0x5a2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5a3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x5a5: Pop(1)
0x5a6: PushEmpty(bool, string)
0x5a7: Stack[-3] = Stack[-1]
0x5a8: Call2 0x5e4

0x5a9: Stack[-2] = Stack[-14]
0x5aa: Pop(2)
0x5ab: Return(); Pop(10)

0x5ac: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5ad: Push("d") // @poff=220
0x5ae: PushEmpty(int)
0x5af: Call2 0x60f

0x5b0: Pop(0)
0x5b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5b2: Push("m") // @poff=278
0x5b3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5b4: Stack[-4] = (int) 0
0x5b5: Push((int) 1)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5b7: Push((int) 1)
0x5b8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ba: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x5bb: Pop(1)
0x5bc: Pop(0); Push((bool) Stack[-3] == 0)
0x5bd: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5be: GOTO 0x5c2

0x5bf: Push((int) 1)
0x5c0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5c1: GOTO 0x5b5

0x5c2: Pop(0); Push((bool) Stack[-4] == 0)
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c4: Stack[-12] = (bool) 0
0x5c5: Return(); Pop(10)

0x5c6: Stack[-2] = (int) 0
0x5c7: Push((int) 1)
0x5c8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5ca: @ irand(Stack[-2], Stack[-4])
0x5cb: Pop(0)
0x5cc: Push((int) 1)
0x5cd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5cf: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x5d0: Pop(1)
0x5d1: PushEmpty(bool, string)
0x5d2: Stack[-3] = Stack[-1]
0x5d3: Call2 0x5e4

0x5d4: Stack[-2] = Stack[-14]
0x5d5: Pop(2)
0x5d6: Return(); Pop(10)

0x5d7: PushEmpty(float, float, float, float)
0x5d8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5d9: Pop(0)
0x5da: Push((bool) 0)
0x5db: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(1)
0x5dd: Return(); Pop(4)

0x5de: PushEmpty(float, float, float, float)
0x5df: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x5e0: Pop(0)
0x5e1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x5e2: Pop(0)
0x5e3: Return(); Pop(4)

0x5e4: PushEmpty(bool, bool)
0x5e5: PushEmpty(bool)
0x5e6: Call2 0x6d3

0x5e7: Pop(0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5e9: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5ea: Pop(0)
0x5eb: Push(Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ed: @ lshPlaySpeech(Stack[-3])
0x5ee: Pop(0)
0x5ef: Stack[-4] = (bool) 1
0x5f0: Return(); Pop(2)

0x5f1: Stack[-4] = (bool) 0
0x5f2: Return(); Pop(2)

0x5f3: PushEmpty(bool)
0x5f4: Call2 0x6d3

0x5f5: Pop(0)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: @ lshStopSpeech()
0x5f8: Pop(0)
0x5f9: Return(); Pop(0)

0x5fa: PushEmpty(object, object)
0x5fb: @ self(Stack[-1])
0x5fc: Pop(0)
0x5fd: Stack[-1] = Stack[-3]
0x5fe: Return(); Pop(2)

0x5ff: Stack[-1] = 0
0x600: PushEmpty(float, float)
0x601: Pop(0); Push(Stack[-3] | Stack[-3]);
0x602: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x603: Push((float)9.999999974752427e-07)
0x604: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-4] = [0.0, 0.0, 0.0]
0x607: Return(); Pop(2)

0x608: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x609: Return(); Pop(2)

0x60a: PushEmpty(int, int)
0x60b: @ GetVariable(Stack[-3], Stack[-1])
0x60c: Pop(0)
0x60d: Stack[-1] = Stack[-4]
0x60e: Return(); Pop(2)

0x60f: PushEmpty(float, float)
0x610: @ GetGameTime(Stack[-1])
0x611: Pop(0)
0x612: Push((int) 1)
0x613: PushEmpty(int)
0x614: Push((int) 24)
0x615: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x616: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Return(); Pop(2)

0x618: PushEmpty()
0x619: Push("oob12AglajaSobor1") // @poff=282
0x61a: Push((int) 1)
0x61b: @ SetVariable(Stack[-2], Stack[-1])
0x61c: Pop(2)
0x61d: Return(); Pop(0)

0x61e: PushEmpty()
0x61f: Push("oob12AglajaSobor2") // @poff=318
0x620: Push((int) 1)
0x621: @ SetVariable(Stack[-2], Stack[-1])
0x622: Pop(2)
0x623: Return(); Pop(0)

0x624: PushEmpty()
0x625: Push("oob12AglajaSobor3") // @poff=354
0x626: Push((int) 1)
0x627: @ SetVariable(Stack[-2], Stack[-1])
0x628: Pop(2)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: Push("oob12AglajaSobor4") // @poff=390
0x62c: Push((int) 1)
0x62d: @ SetVariable(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: Push("oob12AglajaSobor5") // @poff=426
0x632: Push((int) 1)
0x633: @ SetVariable(Stack[-2], Stack[-1])
0x634: Pop(2)
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: Push("oob12AglajaSobor6") // @poff=462
0x638: Push((int) 1)
0x639: @ SetVariable(Stack[-2], Stack[-1])
0x63a: Pop(2)
0x63b: Return(); Pop(0)

0x63c: PushEmpty()
0x63d: Push("oob12AglajaSobor7") // @poff=498
0x63e: Push((int) 1)
0x63f: @ SetVariable(Stack[-2], Stack[-1])
0x640: Pop(2)
0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: PushEmpty(int, string)
0x644: Stack[-1] = "b12q01ChildsAreVisited" // @poff=534
0x645: Call2 0x60a

0x646: Pop(1)
0x647: Push((int) 0)
0x648: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: Stack[-2] = (bool) 1
0x64b: Return(); Pop(0)

0x64c: Stack[-2] = (bool) 0
0x64d: Return(); Pop(0)

0x64e: PushEmpty()
0x64f: PushEmpty(int, string)
0x650: Stack[-1] = "b12q01TheaterIsVisited" // @poff=580
0x651: Call2 0x60a

0x652: Pop(1)
0x653: Push((int) 0)
0x654: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x656: Stack[-2] = (bool) 1
0x657: Return(); Pop(0)

0x658: Stack[-2] = (bool) 0
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: PushEmpty(int, string)
0x65c: Stack[-1] = "oob12AglajaSobor1" // @poff=282
0x65d: Call2 0x60a

0x65e: Pop(1)
0x65f: Push((int) 0)
0x660: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-2] = (bool) 1
0x663: Return(); Pop(0)

0x664: Stack[-2] = (bool) 0
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: PushEmpty(int, string)
0x668: Stack[-1] = "oob12AglajaSobor2" // @poff=318
0x669: Call2 0x60a

0x66a: Pop(1)
0x66b: Push((int) 0)
0x66c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-2] = (bool) 1
0x66f: Return(); Pop(0)

0x670: Stack[-2] = (bool) 0
0x671: Return(); Pop(0)

0x672: PushEmpty()
0x673: PushEmpty(int, string)
0x674: Stack[-1] = "oob12AglajaSobor3" // @poff=354
0x675: Call2 0x60a

0x676: Pop(1)
0x677: Push((int) 0)
0x678: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67a: Stack[-2] = (bool) 1
0x67b: Return(); Pop(0)

0x67c: Stack[-2] = (bool) 0
0x67d: Return(); Pop(0)

0x67e: PushEmpty()
0x67f: PushEmpty(int, string)
0x680: Stack[-1] = "oob12AglajaSobor4" // @poff=390
0x681: Call2 0x60a

0x682: Pop(1)
0x683: Push((int) 0)
0x684: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-2] = (bool) 1
0x687: Return(); Pop(0)

0x688: Stack[-2] = (bool) 0
0x689: Return(); Pop(0)

0x68a: PushEmpty()
0x68b: PushEmpty(int, string)
0x68c: Stack[-1] = "oob12AglajaSobor5" // @poff=426
0x68d: Call2 0x60a

0x68e: Pop(1)
0x68f: Push((int) 0)
0x690: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x692: Stack[-2] = (bool) 1
0x693: Return(); Pop(0)

0x694: Stack[-2] = (bool) 0
0x695: Return(); Pop(0)

0x696: PushEmpty()
0x697: PushEmpty(int, string)
0x698: Stack[-1] = "oob12AglajaSobor6" // @poff=462
0x699: Call2 0x60a

0x69a: Pop(1)
0x69b: Push((int) 0)
0x69c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-2] = (bool) 1
0x69f: Return(); Pop(0)

0x6a0: Stack[-2] = (bool) 0
0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: PushEmpty(int, string)
0x6a4: Stack[-1] = "oob12AglajaSobor7" // @poff=498
0x6a5: Call2 0x60a

0x6a6: Pop(1)
0x6a7: Push((int) 0)
0x6a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6aa: Stack[-2] = (bool) 1
0x6ab: Return(); Pop(0)

0x6ac: Stack[-2] = (bool) 0
0x6ad: Return(); Pop(0)

0x6ae: PushEmpty()
0x6af: PushEmpty(int, string)
0x6b0: Stack[-1] = "game_final" // @poff=626
0x6b1: Call2 0x60a

0x6b2: Pop(1)
0x6b3: Push((int) 0)
0x6b4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b6: Stack[-2] = (bool) 1
0x6b7: Return(); Pop(0)

0x6b8: Stack[-2] = (bool) 0
0x6b9: Return(); Pop(0)

0x6ba: PushEmpty(int, int)
0x6bb: Push("branch") // @poff=648
0x6bc: @ GetVariable(Stack[-1], Stack[-2])
0x6bd: Pop(1)
0x6be: Push((int) 0)
0x6bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c1: Stack[-3] = (int) 1
0x6c2: Return(); Pop(2)

0x6c3: GOTO 0x6c9

0x6c4: Push((int) 1)
0x6c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c7: Stack[-3] = (int) 2
0x6c8: Return(); Pop(2)

0x6c9: Stack[-3] = (int) 3
0x6ca: Return(); Pop(2)

0x6cb: Stack[-1] = (int) 515527
0x6cc: Return(); Pop(0)

0x6cd: Stack[-1] = (int) 513334
0x6ce: Return(); Pop(0)

0x6cf: Stack[-1] = "ui/NPC_Aglaja.png" // @poff=662
0x6d0: Return(); Pop(0)

0x6d1: Stack[-1] = "ui/NPC_Aglaja_b.png" // @poff=698
0x6d2: Return(); Pop(0)

0x6d3: Stack[-1] = (bool) 1
0x6d4: Return(); Pop(0)

