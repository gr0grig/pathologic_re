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
	W:d2q03
	W:cleanup
	W:restore
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:ood2Birdmask1
	W:d2q03BirdmaskGotoLara
	W:pt_map_lara
	A:AddMark
	W:KnowTheater
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000064003200710030003300000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e004765744579657348656967687400680065006100640000006f006f006400320042006900720064006d00610073006b00310000006400320071003000330042006900720064006d00610073006b0047006f0074006f004c006100720061000000700074005f006d00610070005f006c0061007200610000004164644d61726b004b006e006f00770054006800650061007400650072000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000
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
	GetVariable (2 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1b0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1b5 Vars = (object)
		EVENT_26 Op = 0x1cb Vars = (string)
		EVENT_6 Op = 0x1e7 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1f9

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x317

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x315

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x319

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x31b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x304

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
0x41: Call2 0x23d

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2a5

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 506910)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 506911)
0x5f: Push((int) 7618)
0x60: Push((int) 7617)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0x299

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 507249)
0x69: Push((int) 7993)
0x6a: Push((int) 7989)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x31d

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x24e

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all") // @poff=138
0x80: Push("idle") // @poff=146
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x31d

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-3] = Stack[-2]
0x9a: Push("") // @poff=102
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x255

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x25b

0xa9: Pop(0)
0xaa: Push((int) 7988)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x27c

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x282

0xb6: Pop(2)
0xb7: Push((int) 7990)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x27c

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x282

0xc3: Pop(2)
0xc4: Push((int) 7991)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x27c

0xcb: Pop(2)
0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x282

0xd0: Pop(2)
0xd1: Push((int) 7992)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x27c

0xd8: Pop(2)
0xd9: Push((int) 7616)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call2 0x2a5

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral" // @poff=89
0xe3: Call2 0x8e

0xe4: Pop(1)
0xe5: Push((int) 506910)
0xe6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe7: Pop(1)
0xe8: @@@ ClearReplies(); Obj=0 // @poff=116
0xe9: Pop(0)
0xea: Push((int) 506911)
0xeb: Push((int) 7618)
0xec: Push((int) 7617)
0xed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xee: Pop(3)
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0x299

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf4: Push((int) 507249)
0xf5: Push((int) 7993)
0xf6: Push((int) 7989)
0xf7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 7993)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Neutral" // @poff=89
0xff: Call2 0x8e

0x100: Pop(1)
0x101: Push((int) 507253)
0x102: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x103: Pop(1)
0x104: @@@ ClearReplies(); Obj=0 // @poff=116
0x105: Pop(0)
0x106: Push((int) 507254)
0x107: Push((int) 7995)
0x108: Push((int) 7994)
0x109: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 7995)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral" // @poff=89
0x111: Call2 0x8e

0x112: Pop(1)
0x113: Push((int) 507255)
0x114: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x115: Pop(1)
0x116: @@@ ClearReplies(); Obj=0 // @poff=116
0x117: Pop(0)
0x118: Push((int) 507256)
0x119: Push((int) 7997)
0x11a: Push((int) 7996)
0x11b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 7997)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral" // @poff=89
0x123: Call2 0x8e

0x124: Pop(1)
0x125: Push((int) 507257)
0x126: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x127: Pop(1)
0x128: @@@ ClearReplies(); Obj=0 // @poff=116
0x129: Pop(0)
0x12a: Push((int) 507258)
0x12b: Push((int) 7999)
0x12c: Push((int) 7998)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Push((int) 507261)
0x130: Push((int) 7618)
0x131: Push((int) 8002)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 7999)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0x8e

0x13b: Pop(1)
0x13c: Push((int) 507259)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 507260)
0x142: Push((int) 7618)
0x143: Push((int) 8000)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 7618)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0x8e

0x14d: Pop(1)
0x14e: Push((int) 506912)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 507242)
0x154: Push((int) 7983)
0x155: Push((int) 7982)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0x2b1

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15d: Push((int) 507252)
0x15e: Push((int) -1)
0x15f: Push((int) 7992)
0x160: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 7983)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral" // @poff=89
0x168: Call2 0x8e

0x169: Pop(1)
0x16a: Push((int) 507243)
0x16b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16c: Pop(1)
0x16d: @@@ ClearReplies(); Obj=0 // @poff=116
0x16e: Pop(0)
0x16f: Push((int) 507244)
0x170: Push((int) 7985)
0x171: Push((int) 7984)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Push((int) 507251)
0x175: Push((int) -1)
0x176: Push((int) 7991)
0x177: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 7985)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral" // @poff=89
0x17f: Call2 0x8e

0x180: Pop(1)
0x181: Push((int) 507245)
0x182: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x183: Pop(1)
0x184: @@@ ClearReplies(); Obj=0 // @poff=116
0x185: Pop(0)
0x186: Push((int) 507246)
0x187: Push((int) 7987)
0x188: Push((int) 7986)
0x189: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18a: Pop(3)
0x18b: Push((int) 507250)
0x18c: Push((int) -1)
0x18d: Push((int) 7990)
0x18e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 7987)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral" // @poff=89
0x196: Call2 0x8e

0x197: Pop(1)
0x198: Push((int) 507247)
0x199: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19a: Pop(1)
0x19b: @@@ ClearReplies(); Obj=0 // @poff=116
0x19c: Pop(0)
0x19d: Push((int) 507248)
0x19e: Push((int) -1)
0x19f: Push((int) 7988)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x31d

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: @ lshStopAnimation()
0x1a9: Pop(0)
0x1aa: GOTO 0x1ad

0x1ab: @ StopAnimation()
0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: GOTO 0xa5

0x1af: Return(); Pop(0)

0x1b0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1b1: PushEmpty()
0x1b2: Call2 0x1c7

0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(int, int)
0x1b6: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Return(); Pop(2)

0x1b9: Push("d2q03") // @poff=156
0x1ba: @ GetVariable(Stack[-1], Stack[-2])
0x1bb: Pop(1)
0x1bc: Push((int) -1)
0x1bd: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1bf: PushEmpty(int, object)
0x1c0: Stack[-5] = Stack[-1]
0x1c1: Push(-2, 1); TaskCall(0)
0x1c2: Call2 0x0

0x1c3: Pop(-2, 1); TaskReturn
0x1c4: Pop(2)
0x1c5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c6: Return(); Pop(2)

0x1c7: @ Hold()
0x1c8: Pop(0)
0x1c9: GOTO 0x1c7

0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(bool, bool)
0x1cc: Push("cleanup") // @poff=168
0x1cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1cf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d0: @ IsLoaded(Stack[-1])
0x1d1: Pop(0)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Pop(0); Push((bool) Stack[-2] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x1f7

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Stack[-1] = (bool) 1
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(object)
0x1dd: Call2 0x262

0x1de: Pop(0)
0x1df: @ RemoveActor(Stack[-1])
0x1e0: Pop(1)
0x1e1: GOTO 0x1e6

0x1e2: Push("restore") // @poff=184
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1e6: Return(); Pop(2)

0x1e7: PushEmpty(bool)
0x1e8: Stack[-1] = (bool) 0
0x1e9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: PushEmpty(bool)
0x1ec: Call2 0x1f7

0x1ed: Pop(0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: Stack[-1] = (bool) 1
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f1: PushEmpty(object)
0x1f2: Call2 0x262

0x1f3: Pop(0)
0x1f4: @ RemoveActor(Stack[-1])
0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: Stack[-1] = (bool) 1
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1fa: @@ GetPosition(Stack[-8]); Obj=20 // @poff=200
0x1fb: Pop(0)
0x1fc: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=212
0x1fd: Pop(0)
0x1fe: Push(CvectorIndex(Stack[-8], 1))
0x1ff: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x200: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x201: @ GetPosition(Stack[-7])
0x202: Pop(0)
0x203: @ GetEyesHeight(Stack[-9])
0x204: Pop(0)
0x205: Push(CvectorIndex(Stack[-7], 1))
0x206: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x207: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x208: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x209: Push(CvectorIndex(Stack[-6], 1))
0x20a: Stack[-1] = (int) 0
0x20b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x20c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x20d: Pop(1); Push(Sqrt(Stack[-1]))
0x20e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x20f: Stack[-5] = -Stack[-6]; Pop(0);
0x210: Pop(0); Push(Stack[-6] * Stack[-19]);
0x211: PushEmpty(cvector, cvector)
0x212: Push([0.0, 1.0, 0.0])
0x213: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x214: Call2 0x268

0x215: Pop(1)
0x216: Push((int) 25)
0x217: Pop(2); Push(Stack[-2] * Stack[-1]);
0x218: Pop(2); Push(Stack[-2] + Stack[-1]);
0x219: Push([0.0, 10.0, 0.0])
0x21a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x21b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x21c: @ IsOverrideActive(Stack[-2])
0x21d: Pop(0)
0x21e: Push(Stack[-2])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-21] = (bool) 0
0x221: Return(); Pop(18)

0x222: @ StopWorld()
0x223: Pop(0)
0x224: @ CameraTransit(Stack[-3], Stack[-5])
0x225: Pop(0)
0x226: Push(CvectorIndex(Stack[-4], 0))
0x227: Push(CvectorIndex(Stack[-5], 2))
0x228: @ Rotate(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: PushEmpty(bool)
0x22b: Call2 0x31d

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x237

0x22f: Push("head") // @poff=226
0x230: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x231: Pop(1)
0x232: Push(Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x234: Push("head") // @poff=226
0x235: @ LookAsyncCamera(Stack[-1])
0x236: Pop(1)
0x237: @ CameraWaitForPlayFinish()
0x238: Pop(0)
0x239: @ ResumeWorld()
0x23a: Pop(0)
0x23b: Stack[-21] = (bool) 1
0x23c: Return(); Pop(18)

0x23d: PushEmpty(bool, bool)
0x23e: @ CameraSwitchToNormal()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x31d

0x242: Pop(0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x24d

0x245: Push("head") // @poff=226
0x246: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x247: Pop(1)
0x248: Push(Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24a: Push("head") // @poff=226
0x24b: @ UnlookAsync(Stack[-1])
0x24c: Pop(1)
0x24d: Return(); Pop(2)

0x24e: PushEmpty(float, float, float, float)
0x24f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x250: Pop(0)
0x251: Push((bool) 0)
0x252: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(1)
0x254: Return(); Pop(4)

0x255: PushEmpty(float, float, float, float)
0x256: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x257: Pop(0)
0x258: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x259: Pop(0)
0x25a: Return(); Pop(4)

0x25b: PushEmpty(bool)
0x25c: Call2 0x31d

0x25d: Pop(0)
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: @ lshStopSpeech()
0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: PushEmpty(object, object)
0x263: @ self(Stack[-1])
0x264: Pop(0)
0x265: Stack[-1] = Stack[-3]
0x266: Return(); Pop(2)

0x267: Stack[-1] = 0
0x268: PushEmpty(float, float)
0x269: Pop(0); Push(Stack[-3] | Stack[-3]);
0x26a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x26b: Push((float)9.999999974752427e-07)
0x26c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: Stack[-4] = [0.0, 0.0, 0.0]
0x26f: Return(); Pop(2)

0x270: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x271: Return(); Pop(2)

0x272: PushEmpty(int, int)
0x273: @ GetVariable(Stack[-3], Stack[-1])
0x274: Pop(0)
0x275: Stack[-1] = Stack[-4]
0x276: Return(); Pop(2)

0x277: PushEmpty(float, float)
0x278: @ GetGameTime(Stack[-1])
0x279: Pop(0)
0x27a: Stack[-1] = Stack[-3]
0x27b: Return(); Pop(2)

0x27c: PushEmpty()
0x27d: Push("ood2Birdmask1") // @poff=236
0x27e: Push((int) 1)
0x27f: @ SetVariable(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: Return(); Pop(0)

0x282: PushEmpty(object, object)
0x283: Push("d2q03") // @poff=156
0x284: Push((int) 3)
0x285: @ SetVariable(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: PushEmpty(object)
0x288: Call2 0x2f3

0x289: Stack[-1] = Stack[-2]
0x28a: Pop(1)
0x28b: Push("d2q03BirdmaskGotoLara") // @poff=264
0x28c: Push("pt_map_lara") // @poff=308
0x28d: Push((int) 0)
0x28e: Push((int) 515293)
0x28f: PushEmpty(float)
0x290: Call2 0x277

0x291: Pop(0)
0x292: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=332
0x293: Pop(5)
0x294: PushEmpty()
0x295: Call2 0x2bd

0x296: Pop(0)
0x297: Return(); Pop(2)

0x298: Stack[-1] = 0
0x299: PushEmpty()
0x29a: PushEmpty(int, string)
0x29b: Stack[-1] = "KnowTheater" // @poff=340
0x29c: Call2 0x272

0x29d: Pop(1)
0x29e: Push((int) 1)
0x29f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-2] = (bool) 1
0x2a2: Return(); Pop(0)

0x2a3: Stack[-2] = (bool) 0
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty()
0x2a6: PushEmpty(int, string)
0x2a7: Stack[-1] = "ood2Birdmask1" // @poff=236
0x2a8: Call2 0x272

0x2a9: Pop(1)
0x2aa: Push((int) 0)
0x2ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-2] = (bool) 1
0x2ae: Return(); Pop(0)

0x2af: Stack[-2] = (bool) 0
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(int, string)
0x2b3: Stack[-1] = "d2q03" // @poff=156
0x2b4: Call2 0x272

0x2b5: Pop(1)
0x2b6: Push((int) 3)
0x2b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-2] = (bool) 1
0x2ba: Return(); Pop(0)

0x2bb: Stack[-2] = (bool) 0
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(object, object)
0x2be: Push((int) 133)
0x2bf: Push((int) 2)
0x2c0: Push((int) 515270)
0x2c1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: PushEmpty(bool, object, int)
0x2c4: Stack[-4] = Stack[-2]
0x2c5: Stack[-1] = (int) 12
0x2c6: Call2 0x2d7

0x2c7: Pop(3)
0x2c8: Return(); Pop(2)

0x2c9: Stack[-1] = 0
0x2ca: PushEmpty(object, object)
0x2cb: @ GetDiaryRoot(Stack[-1])
0x2cc: Pop(0)
0x2cd: Pop(0); Push((bool) Stack[-1] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cf: Push("Can't retrieve diary root") // @poff=364
0x2d0: @ Trace(Stack[-1])
0x2d1: Pop(1)
0x2d2: Stack[-3] = (bool) 0
0x2d3: Return(); Pop(2)

0x2d4: Stack[-1] = Stack[-3]
0x2d5: Return(); Pop(2)

0x2d6: Stack[-1] = 0
0x2d7: PushEmpty(object, object, int, object, object, int)
0x2d8: PushEmpty(object)
0x2d9: Call2 0x2ca

0x2da: Stack[-1] = Stack[-4]
0x2db: Pop(1)
0x2dc: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=416
0x2dd: Pop(0)
0x2de: Pop(0); Push((bool) Stack[-2] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e0: Push("Can't find diary parent with id: ") // @poff=421
0x2e1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2e2: @ Trace(Stack[-1])
0x2e3: Pop(1)
0x2e4: Stack[-9] = (bool) 0
0x2e5: Return(); Pop(6)

0x2e6: @@ AddChild(Stack[-8]); Obj=2 // @poff=489
0x2e7: Pop(0)
0x2e8: Push((int) 7)
0x2e9: @ SendWorldWndMessage(Stack[-1])
0x2ea: Pop(1)
0x2eb: @@ GetCategory(Stack[-1]); Obj=8 // @poff=498
0x2ec: Pop(0)
0x2ed: @ SetDiarySection(Stack[-1])
0x2ee: Pop(0)
0x2ef: Stack[-9] = (bool) 0
0x2f0: Return(); Pop(6)

0x2f1: Stack[-2] = 0
0x2f2: Stack[-3] = 0
0x2f3: PushEmpty(object, object, object, object)
0x2f4: @ GetMainOutdoorScene(Stack[-2])
0x2f5: Pop(0)
0x2f6: Pop(0); PushNull((bool) Stack[-2] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f8: Push("Can't find main outdoor scene") // @poff=510
0x2f9: @ Trace(Stack[-1])
0x2fa: Pop(1)
0x2fb: Stack[-1] = 0
0x2fc: Stack[-1] = Stack[-5]
0x2fd: Return(); Pop(4)

0x2fe: @@ GetMap(Stack[-1]); Obj=2 // @poff=570
0x2ff: Pop(0)
0x300: Stack[-1] = Stack[-5]
0x301: Return(); Pop(4)

0x302: Stack[-1] = 0
0x303: Stack[-2] = 0
0x304: PushEmpty(int, int)
0x305: Push("branch") // @poff=577
0x306: @ GetVariable(Stack[-1], Stack[-2])
0x307: Pop(1)
0x308: Push((int) 0)
0x309: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: Stack[-3] = (int) 1
0x30c: Return(); Pop(2)

0x30d: GOTO 0x313

0x30e: Push((int) 1)
0x30f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-3] = (int) 2
0x312: Return(); Pop(2)

0x313: Stack[-3] = (int) 3
0x314: Return(); Pop(2)

0x315: Stack[-1] = (int) 515571
0x316: Return(); Pop(0)

0x317: Stack[-1] = (int) 504029
0x318: Return(); Pop(0)

0x319: Stack[-1] = "ui/NPC_bmask.png" // @poff=591
0x31a: Return(); Pop(0)

0x31b: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=625
0x31c: Return(); Pop(0)

0x31d: Stack[-1] = (bool) 0
0x31e: Return(); Pop(0)

