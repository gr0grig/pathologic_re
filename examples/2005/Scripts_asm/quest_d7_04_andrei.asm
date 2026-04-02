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
	W:ood7AndreiPrisoned1
	W:quest_d7_04
	W:completed
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Andrei.png
	W:ui/NPC_Andrei_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006400370041006e00640072006500690050007200690073006f006e006500640031000000710075006500730074005f00640037005f0030003400000063006f006d0070006c0065007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0041006e0064007200650069002e0070006e0067000000750069002f004e00500043005f0041006e0064007200650069005f0062002e0070006e0067000000
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1f6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1ee Vars = (object)
		EVENT_26 Op = 0x1fa Vars = (string)
		EVENT_6 Op = 0x216 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x32a

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x27d

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x228

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x3b9

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x3b7

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x3bb

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x3bd

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x3a6

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
0x48: Call2 0x26c

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x364

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x354

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral" // @poff=89
0x63: Call2 0xa9

0x64: Pop(1)
0x65: Push((int) 533209)
0x66: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x67: Pop(1)
0x68: @@@ ClearReplies(); Obj=0 // @poff=116
0x69: Pop(0)
0x6a: Push((int) 535195)
0x6b: Push((int) 36867)
0x6c: Push((int) 36866)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: Push((int) 535202)
0x70: Push((int) 36867)
0x71: Push((int) 36873)
0x72: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral" // @poff=89
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 533219)
0x7a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7b: Pop(1)
0x7c: @@@ ClearReplies(); Obj=0 // @poff=116
0x7d: Pop(0)
0x7e: Push((int) 533220)
0x7f: Push((int) -1)
0x80: Push((int) 34740)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: Push((int) 535201)
0x84: Push((int) -1)
0x85: Push((int) 36872)
0x86: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x3bf

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x307

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all") // @poff=138
0x9b: Push("idle") // @poff=146
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all") // @poff=138
0xa4: Push("idle") // @poff=146
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x3bf

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-3] = Stack[-2]
0xb5: Push("") // @poff=102
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x30e

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x323

0xc4: Pop(0)
0xc5: Push((int) 34738)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x35a

0xcc: Pop(2)
0xcd: Push((int) 37544)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x35a

0xd4: Pop(2)
0xd5: Push((int) 34729)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x364

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x354

0xe1: Pop(2)
0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0xa9

0xe5: Pop(1)
0xe6: Push((int) 533209)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 535195)
0xec: Push((int) 36867)
0xed: Push((int) 36866)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Push((int) 535202)
0xf1: Push((int) 36867)
0xf2: Push((int) 36873)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral" // @poff=89
0xf8: Call2 0xa9

0xf9: Pop(1)
0xfa: Push((int) 533219)
0xfb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfc: Pop(1)
0xfd: @@@ ClearReplies(); Obj=0 // @poff=116
0xfe: Pop(0)
0xff: Push((int) 533220)
0x100: Push((int) -1)
0x101: Push((int) 34740)
0x102: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x103: Pop(3)
0x104: Push((int) 535201)
0x105: Push((int) -1)
0x106: Push((int) 36872)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 36867)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral" // @poff=89
0x10f: Call2 0xa9

0x110: Pop(1)
0x111: Push((int) 535196)
0x112: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x113: Pop(1)
0x114: @@@ ClearReplies(); Obj=0 // @poff=116
0x115: Pop(0)
0x116: Push((int) 535197)
0x117: Push((int) 36869)
0x118: Push((int) 36868)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Push((int) 535200)
0x11c: Push((int) 37527)
0x11d: Push((int) 36871)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 36869)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0xa9

0x127: Pop(1)
0x128: Push((int) 535198)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 535831)
0x12e: Push((int) 37526)
0x12f: Push((int) 37525)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Push((int) 535828)
0x133: Push((int) 37538)
0x134: Push((int) 37522)
0x135: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 37526)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral" // @poff=89
0x13d: Call2 0xa9

0x13e: Pop(1)
0x13f: Push((int) 535832)
0x140: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x141: Pop(1)
0x142: @@@ ClearReplies(); Obj=0 // @poff=116
0x143: Pop(0)
0x144: Push((int) 535199)
0x145: Push((int) 37527)
0x146: Push((int) 36870)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Push((int) 535194)
0x14a: Push((int) 34731)
0x14b: Push((int) 36865)
0x14c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 34731)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral" // @poff=89
0x154: Call2 0xa9

0x155: Pop(1)
0x156: Push((int) 533211)
0x157: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x158: Pop(1)
0x159: @@@ ClearReplies(); Obj=0 // @poff=116
0x15a: Pop(0)
0x15b: Push((int) 533212)
0x15c: Push((int) 34733)
0x15d: Push((int) 34732)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: Push((int) 535834)
0x161: Push((int) 37538)
0x162: Push((int) 37528)
0x163: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 37538)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral" // @poff=89
0x16b: Call2 0xa9

0x16c: Pop(1)
0x16d: Push((int) 535843)
0x16e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16f: Pop(1)
0x170: @@@ ClearReplies(); Obj=0 // @poff=116
0x171: Pop(0)
0x172: Push((int) 535844)
0x173: Push((int) 37533)
0x174: Push((int) 37539)
0x175: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 37527)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral" // @poff=89
0x17d: Call2 0xa9

0x17e: Pop(1)
0x17f: Push((int) 535833)
0x180: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x181: Pop(1)
0x182: @@@ ClearReplies(); Obj=0 // @poff=116
0x183: Pop(0)
0x184: Push((int) 535835)
0x185: Push((int) 34733)
0x186: Push((int) 37529)
0x187: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x188: Pop(3)
0x189: Push((int) 535845)
0x18a: Push((int) 37533)
0x18b: Push((int) 37542)
0x18c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 34733)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral" // @poff=89
0x194: Call2 0xa9

0x195: Pop(1)
0x196: Push((int) 533213)
0x197: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x198: Pop(1)
0x199: @@@ ClearReplies(); Obj=0 // @poff=116
0x19a: Pop(0)
0x19b: Push((int) 533214)
0x19c: Push((int) 34735)
0x19d: Push((int) 34734)
0x19e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19f: Pop(3)
0x1a0: Push((int) 535842)
0x1a1: Push((int) 34735)
0x1a2: Push((int) 37537)
0x1a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 34735)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral" // @poff=89
0x1ab: Call2 0xa9

0x1ac: Pop(1)
0x1ad: Push((int) 533215)
0x1ae: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1af: Pop(1)
0x1b0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b1: Pop(0)
0x1b2: Push((int) 533216)
0x1b3: Push((int) 37533)
0x1b4: Push((int) 34736)
0x1b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 37533)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Neutral" // @poff=89
0x1bd: Call2 0xa9

0x1be: Pop(1)
0x1bf: Push((int) 535838)
0x1c0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c1: Pop(1)
0x1c2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c3: Pop(0)
0x1c4: Push((int) 535840)
0x1c5: Push((int) 37536)
0x1c6: Push((int) 37535)
0x1c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c8: Pop(3)
0x1c9: Push((int) 535846)
0x1ca: Push((int) -1)
0x1cb: Push((int) 37544)
0x1cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 37536)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral" // @poff=89
0x1d4: Call2 0xa9

0x1d5: Pop(1)
0x1d6: Push((int) 535841)
0x1d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d8: Pop(1)
0x1d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1da: Pop(0)
0x1db: Push((int) 533218)
0x1dc: Push((int) -1)
0x1dd: Push((int) 34738)
0x1de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e2: PushEmpty(bool)
0x1e3: Call2 0x3bf

0x1e4: Pop(0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e6: @ lshStopAnimation()
0x1e7: Pop(0)
0x1e8: GOTO 0x1eb

0x1e9: @ StopAnimation()
0x1ea: Pop(0)
0x1eb: Return(); Pop(0)

0x1ec: GOTO 0xc0

0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: PushEmpty(int, object)
0x1f0: Stack[-3] = Stack[-1]
0x1f1: Push(-2, 1); TaskCall(0)
0x1f2: Call2 0x0

0x1f3: Pop(-2, 1); TaskReturn
0x1f4: Pop(2)
0x1f5: Return(); Pop(0)

0x1f6: @ Hold()
0x1f7: Pop(0)
0x1f8: GOTO 0x1f6

0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(bool, bool)
0x1fb: Push("cleanup") // @poff=156
0x1fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1fe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ff: @ IsLoaded(Stack[-1])
0x200: Pop(0)
0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Pop(0); Push((bool) Stack[-2] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x226

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: PushEmpty(object)
0x20c: Call2 0x32a

0x20d: Pop(0)
0x20e: @ RemoveActor(Stack[-1])
0x20f: Pop(1)
0x210: GOTO 0x215

0x211: Push("restore") // @poff=172
0x212: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x215: Return(); Pop(2)

0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: Push( Stack[0 + Tasks[-1].StackPointer] )
0x219: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21a: PushEmpty(bool)
0x21b: Call2 0x226

0x21c: Pop(0)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: Stack[-1] = (bool) 1
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: PushEmpty(object)
0x221: Call2 0x32a

0x222: Pop(0)
0x223: @ RemoveActor(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(0)

0x226: Stack[-1] = (bool) 1
0x227: Return(); Pop(0)

0x228: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x229: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x22a: Pop(0)
0x22b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x22c: Pop(0)
0x22d: Push(CvectorIndex(Stack[-8], 1))
0x22e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x22f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x230: @ GetPosition(Stack[-7])
0x231: Pop(0)
0x232: @ GetEyesHeight(Stack[-9])
0x233: Pop(0)
0x234: Push(CvectorIndex(Stack[-7], 1))
0x235: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x236: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x237: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x238: Push(CvectorIndex(Stack[-6], 1))
0x239: Stack[-1] = (int) 0
0x23a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x23b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x23c: Pop(1); Push(Sqrt(Stack[-1]))
0x23d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x23e: Stack[-5] = -Stack[-6]; Pop(0);
0x23f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x240: PushEmpty(cvector, cvector)
0x241: Push([0.0, 1.0, 0.0])
0x242: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x243: Call2 0x330

0x244: Pop(1)
0x245: Push((int) 25)
0x246: Pop(2); Push(Stack[-2] * Stack[-1]);
0x247: Pop(2); Push(Stack[-2] + Stack[-1]);
0x248: Push([0.0, 10.0, 0.0])
0x249: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x24a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x24b: @ IsOverrideActive(Stack[-2])
0x24c: Pop(0)
0x24d: Push(Stack[-2])
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-21] = (bool) 0
0x250: Return(); Pop(18)

0x251: @ StopWorld()
0x252: Pop(0)
0x253: @ CameraTransit(Stack[-3], Stack[-5])
0x254: Pop(0)
0x255: Push(CvectorIndex(Stack[-4], 0))
0x256: Push(CvectorIndex(Stack[-5], 2))
0x257: @ Rotate(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: PushEmpty(bool)
0x25a: Call2 0x3bf

0x25b: Pop(0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x266

0x25e: Push("head") // @poff=214
0x25f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x260: Pop(1)
0x261: Push(Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x263: Push("head") // @poff=214
0x264: @ LookAsyncCamera(Stack[-1])
0x265: Pop(1)
0x266: @ CameraWaitForPlayFinish()
0x267: Pop(0)
0x268: @ ResumeWorld()
0x269: Pop(0)
0x26a: Stack[-21] = (bool) 1
0x26b: Return(); Pop(18)

0x26c: PushEmpty(bool, bool)
0x26d: @ CameraSwitchToNormal()
0x26e: Pop(0)
0x26f: PushEmpty(bool)
0x270: Call2 0x3bf

0x271: Pop(0)
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x27c

0x274: Push("head") // @poff=214
0x275: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x276: Pop(1)
0x277: Push(Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x279: Push("head") // @poff=214
0x27a: @ UnlookAsync(Stack[-1])
0x27b: Pop(1)
0x27c: Return(); Pop(2)

0x27d: PushEmpty(int, int, int, int)
0x27e: Push("voice_common") // @poff=224
0x27f: @ GetVariable(Stack[-1], Stack[-3])
0x280: Pop(1)
0x281: Push(Stack[-2])
0x282: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x283: PushEmpty(bool, object)
0x284: Stack[-7] = Stack[-1]
0x285: Call2 0x2b7

0x286: Pop(1)
0x287: Pop(1); Push((bool) Stack[-1] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x289: PushEmpty(bool, object)
0x28a: Stack[-7] = Stack[-1]
0x28b: Call2 0x2dc

0x28c: Pop(1)
0x28d: Pop(1); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28f: Stack[-6] = (bool) 0
0x290: Return(); Pop(4)

0x291: Push((int) 2)
0x292: @ irand(Stack[-2], Stack[-1])
0x293: Pop(1)
0x294: Push(Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x296: Push("voice_common") // @poff=224
0x297: Push((int) 1)
0x298: Pop(1); Push(Stack[-4] + Stack[-1]);
0x299: Push((int) 3)
0x29a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x29b: @ SetVariable(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: GOTO 0x2a2

0x29e: Push("voice_common") // @poff=224
0x29f: Push((int) 0)
0x2a0: @ SetVariable(Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: GOTO 0x2b5

0x2a3: PushEmpty(bool, object)
0x2a4: Stack[-7] = Stack[-1]
0x2a5: Call2 0x2dc

0x2a6: Pop(1)
0x2a7: Pop(1); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-7] = Stack[-1]
0x2ab: Call2 0x2b7

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-6] = (bool) 0
0x2b0: Return(); Pop(4)

0x2b1: Push("voice_common") // @poff=224
0x2b2: Push((int) 1)
0x2b3: @ SetVariable(Stack[-2], Stack[-1])
0x2b4: Pop(2)
0x2b5: Stack[-6] = (bool) 1
0x2b6: Return(); Pop(4)

0x2b7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2b8: Stack[-5] = "c" // @poff=250
0x2b9: Stack[-4] = (int) 0
0x2ba: Push((int) 1)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2bc: Push((int) 1)
0x2bd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2be: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2bf: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2c0: Pop(1)
0x2c1: Pop(0); Push((bool) Stack[-3] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: GOTO 0x2c7

0x2c4: Push((int) 1)
0x2c5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2c6: GOTO 0x2ba

0x2c7: Pop(0); Push((bool) Stack[-4] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-12] = (bool) 0
0x2ca: Return(); Pop(10)

0x2cb: Stack[-2] = (int) 0
0x2cc: Push((int) 1)
0x2cd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: @ irand(Stack[-2], Stack[-4])
0x2d0: Pop(0)
0x2d1: Push((int) 1)
0x2d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2d5: Pop(1)
0x2d6: PushEmpty(bool, string)
0x2d7: Stack[-3] = Stack[-1]
0x2d8: Call2 0x314

0x2d9: Stack[-2] = Stack[-14]
0x2da: Pop(2)
0x2db: Return(); Pop(10)

0x2dc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2dd: Push("d") // @poff=220
0x2de: PushEmpty(int)
0x2df: Call2 0x34b

0x2e0: Pop(0)
0x2e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e2: Push("m") // @poff=278
0x2e3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2e4: Stack[-4] = (int) 0
0x2e5: Push((int) 1)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2e7: Push((int) 1)
0x2e8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ea: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2eb: Pop(1)
0x2ec: Pop(0); Push((bool) Stack[-3] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: GOTO 0x2f2

0x2ef: Push((int) 1)
0x2f0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2f1: GOTO 0x2e5

0x2f2: Pop(0); Push((bool) Stack[-4] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f4: Stack[-12] = (bool) 0
0x2f5: Return(); Pop(10)

0x2f6: Stack[-2] = (int) 0
0x2f7: Push((int) 1)
0x2f8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: @ irand(Stack[-2], Stack[-4])
0x2fb: Pop(0)
0x2fc: Push((int) 1)
0x2fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ff: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x300: Pop(1)
0x301: PushEmpty(bool, string)
0x302: Stack[-3] = Stack[-1]
0x303: Call2 0x314

0x304: Stack[-2] = Stack[-14]
0x305: Pop(2)
0x306: Return(); Pop(10)

0x307: PushEmpty(float, float, float, float)
0x308: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x309: Pop(0)
0x30a: Push((bool) 0)
0x30b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(1)
0x30d: Return(); Pop(4)

0x30e: PushEmpty(float, float, float, float)
0x30f: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x310: Pop(0)
0x311: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x312: Pop(0)
0x313: Return(); Pop(4)

0x314: PushEmpty(bool, bool)
0x315: PushEmpty(bool)
0x316: Call2 0x3bf

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x319: @ lshHasSpeech(Stack[-1], Stack[-3])
0x31a: Pop(0)
0x31b: Push(Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31d: @ lshPlaySpeech(Stack[-3])
0x31e: Pop(0)
0x31f: Stack[-4] = (bool) 1
0x320: Return(); Pop(2)

0x321: Stack[-4] = (bool) 0
0x322: Return(); Pop(2)

0x323: PushEmpty(bool)
0x324: Call2 0x3bf

0x325: Pop(0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: @ lshStopSpeech()
0x328: Pop(0)
0x329: Return(); Pop(0)

0x32a: PushEmpty(object, object)
0x32b: @ self(Stack[-1])
0x32c: Pop(0)
0x32d: Stack[-1] = Stack[-3]
0x32e: Return(); Pop(2)

0x32f: Stack[-1] = 0
0x330: PushEmpty(float, float)
0x331: Pop(0); Push(Stack[-3] | Stack[-3]);
0x332: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x333: Push((float)9.999999974752427e-07)
0x334: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: Stack[-4] = [0.0, 0.0, 0.0]
0x337: Return(); Pop(2)

0x338: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x339: Return(); Pop(2)

0x33a: PushEmpty(int, int)
0x33b: @ GetVariable(Stack[-3], Stack[-1])
0x33c: Pop(0)
0x33d: Stack[-1] = Stack[-4]
0x33e: Return(); Pop(2)

0x33f: PushEmpty(object, object)
0x340: @ FindActor(Stack[-1], Stack[-4])
0x341: Pop(0)
0x342: Pop(0); PushNull((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-5] = (bool) 0
0x345: Return(); Pop(2)

0x346: @ Trigger(Stack[-1], Stack[-3])
0x347: Pop(0)
0x348: Stack[-5] = (bool) 1
0x349: Return(); Pop(2)

0x34a: Stack[-1] = 0
0x34b: PushEmpty(float, float)
0x34c: @ GetGameTime(Stack[-1])
0x34d: Pop(0)
0x34e: Push((int) 1)
0x34f: PushEmpty(int)
0x350: Push((int) 24)
0x351: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x352: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x353: Return(); Pop(2)

0x354: PushEmpty()
0x355: Push("ood7AndreiPrisoned1") // @poff=282
0x356: Push((int) 1)
0x357: @ SetVariable(Stack[-2], Stack[-1])
0x358: Pop(2)
0x359: Return(); Pop(0)

0x35a: PushEmpty()
0x35b: PushEmpty()
0x35c: Call2 0x370

0x35d: Pop(0)
0x35e: PushEmpty(bool, string, string)
0x35f: Stack[-2] = "quest_d7_04" // @poff=322
0x360: Stack[-1] = "completed" // @poff=346
0x361: Call2 0x33f

0x362: Pop(3)
0x363: Return(); Pop(0)

0x364: PushEmpty()
0x365: PushEmpty(int, string)
0x366: Stack[-1] = "ood7AndreiPrisoned1" // @poff=282
0x367: Call2 0x33a

0x368: Pop(1)
0x369: Push((int) 0)
0x36a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-2] = (bool) 1
0x36d: Return(); Pop(0)

0x36e: Stack[-2] = (bool) 0
0x36f: Return(); Pop(0)

0x370: PushEmpty(object, object)
0x371: Push((int) 640)
0x372: Push((int) 2)
0x373: Push((int) 533226)
0x374: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: PushEmpty(bool, object, int)
0x377: Stack[-4] = Stack[-2]
0x378: Stack[-1] = (int) 637
0x379: Call2 0x38a

0x37a: Pop(3)
0x37b: Return(); Pop(2)

0x37c: Stack[-1] = 0
0x37d: PushEmpty(object, object)
0x37e: @ GetDiaryRoot(Stack[-1])
0x37f: Pop(0)
0x380: Pop(0); Push((bool) Stack[-1] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x382: Push("Can't retrieve diary root") // @poff=366
0x383: @ Trace(Stack[-1])
0x384: Pop(1)
0x385: Stack[-3] = (bool) 0
0x386: Return(); Pop(2)

0x387: Stack[-1] = Stack[-3]
0x388: Return(); Pop(2)

0x389: Stack[-1] = 0
0x38a: PushEmpty(object, object, int, object, object, int)
0x38b: PushEmpty(object)
0x38c: Call2 0x37d

0x38d: Stack[-1] = Stack[-4]
0x38e: Pop(1)
0x38f: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=418
0x390: Pop(0)
0x391: Pop(0); Push((bool) Stack[-2] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x393: Push("Can't find diary parent with id: ") // @poff=423
0x394: Pop(1); Push(Stack[-1] + Stack[-8]);
0x395: @ Trace(Stack[-1])
0x396: Pop(1)
0x397: Stack[-9] = (bool) 0
0x398: Return(); Pop(6)

0x399: @@ AddChild(Stack[-8]); Obj=2 // @poff=491
0x39a: Pop(0)
0x39b: Push((int) 7)
0x39c: @ SendWorldWndMessage(Stack[-1])
0x39d: Pop(1)
0x39e: @@ GetCategory(Stack[-1]); Obj=8 // @poff=500
0x39f: Pop(0)
0x3a0: @ SetDiarySection(Stack[-1])
0x3a1: Pop(0)
0x3a2: Stack[-9] = (bool) 0
0x3a3: Return(); Pop(6)

0x3a4: Stack[-2] = 0
0x3a5: Stack[-3] = 0
0x3a6: PushEmpty(int, int)
0x3a7: Push("branch") // @poff=512
0x3a8: @ GetVariable(Stack[-1], Stack[-2])
0x3a9: Pop(1)
0x3aa: Push((int) 0)
0x3ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ad: Stack[-3] = (int) 1
0x3ae: Return(); Pop(2)

0x3af: GOTO 0x3b5

0x3b0: Push((int) 1)
0x3b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-3] = (int) 2
0x3b4: Return(); Pop(2)

0x3b5: Stack[-3] = (int) 3
0x3b6: Return(); Pop(2)

0x3b7: Stack[-1] = (int) 515529
0x3b8: Return(); Pop(0)

0x3b9: Stack[-1] = (int) 502855
0x3ba: Return(); Pop(0)

0x3bb: Stack[-1] = "ui/NPC_Andrei.png" // @poff=526
0x3bc: Return(); Pop(0)

0x3bd: Stack[-1] = "ui/NPC_Andrei_b.png" // @poff=562
0x3be: Return(); Pop(0)

0x3bf: Stack[-1] = (bool) 1
0x3c0: Return(); Pop(0)

