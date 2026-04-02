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
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:b7q02
	W:quest_b7_02
	W:place_grabitels
	W:oob7Morlok1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e00750070000000476574506f736974696f6e00476574457965734865696768740068006500610064000000620037007100300032000000710075006500730074005f00620037005f0030003200000070006c006100630065005f0067007200610062006900740065006c00730000006f006f00620037004d006f0072006c006f006b0031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x175
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x16a Vars = (object)
		EVENT_26 Op = 0x19e Vars = (string)
		EVENT_5 Op = 0x1a6 Vars = ()
		EVENT_6 Op = 0x1ab Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x218

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x323

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x321

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x325

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x327

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x310

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
0x41: Call2 0x25c

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2ce

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2c8

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral" // @poff=89
0x5c: Call2 0x98

0x5d: Pop(1)
0x5e: Push((int) 521220)
0x5f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x60: Pop(1)
0x61: @@@ ClearReplies(); Obj=0 // @poff=116
0x62: Pop(0)
0x63: Push((int) 521221)
0x64: Push((int) 29945)
0x65: Push((int) 22415)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x7a

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0x98

0x6c: Pop(1)
0x6d: Push((int) 521222)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 521223)
0x73: Push((int) -1)
0x74: Push((int) 22417)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x329

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x26d

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
0x9a: Call2 0x329

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
0xaa: Call2 0x274

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x27a

0xb3: Pop(0)
0xb4: Push((int) 22419)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x2ba

0xbb: Pop(2)
0xbc: Push((int) 22414)
0xbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xbf: PushEmpty(bool, object)
0xc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Call2 0x2ce

0xc2: Pop(1)
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x2c8

0xc8: Pop(2)
0xc9: PushEmpty(string)
0xca: Stack[-1] = "Neutral" // @poff=89
0xcb: Call2 0x98

0xcc: Pop(1)
0xcd: Push((int) 521220)
0xce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xcf: Pop(1)
0xd0: @@@ ClearReplies(); Obj=0 // @poff=116
0xd1: Pop(0)
0xd2: Push((int) 521221)
0xd3: Push((int) 29945)
0xd4: Push((int) 22415)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x98

0xdb: Pop(1)
0xdc: Push((int) 521222)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 521223)
0xe2: Push((int) -1)
0xe3: Push((int) 22417)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 29945)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral" // @poff=89
0xec: Call2 0x98

0xed: Pop(1)
0xee: Push((int) 528551)
0xef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf0: Pop(1)
0xf1: @@@ ClearReplies(); Obj=0 // @poff=116
0xf2: Pop(0)
0xf3: Push((int) 528552)
0xf4: Push((int) 29947)
0xf5: Push((int) 29946)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 29947)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral" // @poff=89
0xfe: Call2 0x98

0xff: Pop(1)
0x100: Push((int) 528553)
0x101: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x102: Pop(1)
0x103: @@@ ClearReplies(); Obj=0 // @poff=116
0x104: Pop(0)
0x105: Push((int) 528554)
0x106: Push((int) 29949)
0x107: Push((int) 29948)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Push((int) 528564)
0x10b: Push((int) 29949)
0x10c: Push((int) 29959)
0x10d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 29949)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral" // @poff=89
0x115: Call2 0x98

0x116: Pop(1)
0x117: Push((int) 528555)
0x118: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x119: Pop(1)
0x11a: @@@ ClearReplies(); Obj=0 // @poff=116
0x11b: Pop(0)
0x11c: Push((int) 528560)
0x11d: Push((int) 29956)
0x11e: Push((int) 29955)
0x11f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 29956)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral" // @poff=89
0x127: Call2 0x98

0x128: Pop(1)
0x129: Push((int) 528561)
0x12a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12b: Pop(1)
0x12c: @@@ ClearReplies(); Obj=0 // @poff=116
0x12d: Pop(0)
0x12e: Push((int) 528556)
0x12f: Push((int) 29951)
0x130: Push((int) 29950)
0x131: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x132: Pop(3)
0x133: Push((int) 528558)
0x134: Push((int) 29951)
0x135: Push((int) 29952)
0x136: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 29951)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral" // @poff=89
0x13e: Call2 0x98

0x13f: Pop(1)
0x140: Push((int) 528557)
0x141: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x142: Pop(1)
0x143: @@@ ClearReplies(); Obj=0 // @poff=116
0x144: Pop(0)
0x145: Push((int) 528559)
0x146: Push((int) 29957)
0x147: Push((int) 29954)
0x148: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: Push((int) 29957)
0x14c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x14e: PushEmpty(string)
0x14f: Stack[-1] = "Neutral" // @poff=89
0x150: Call2 0x98

0x151: Pop(1)
0x152: Push((int) 528562)
0x153: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x154: Pop(1)
0x155: @@@ ClearReplies(); Obj=0 // @poff=116
0x156: Pop(0)
0x157: Push((int) 521225)
0x158: Push((int) -1)
0x159: Push((int) 22419)
0x15a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15e: PushEmpty(bool)
0x15f: Call2 0x329

0x160: Pop(0)
0x161: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x162: @ lshStopAnimation()
0x163: Pop(0)
0x164: GOTO 0x167

0x165: @ StopAnimation()
0x166: Pop(0)
0x167: Return(); Pop(0)

0x168: GOTO 0xaf

0x169: Return(); Pop(0)

0x16a: PushEmpty()
0x16b: PushEmpty()
0x16c: Call2 0x20e

0x16d: Pop(0)
0x16e: PushEmpty(int, object)
0x16f: Stack[-3] = Stack[-1]
0x170: Push(-2, 1); TaskCall(0)
0x171: Call2 0x0

0x172: Pop(-2, 1); TaskReturn
0x173: Pop(2)
0x174: Return(); Pop(0)

0x175: PushEmpty(float, float)
0x176: PushEmpty(bool)
0x177: Call2 0x213

0x178: Pop(0)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: @ Hold()
0x17c: Pop(0)
0x17d: GOTO 0x176

0x17e: Push((int) 3)
0x17f: @ rand(Stack[-2], Stack[-1])
0x180: Pop(1)
0x181: Push((int) 3)
0x182: Pop(1); Push(Stack[-2] + Stack[-1]);
0x183: @ Sleep(Stack[-1])
0x184: Pop(1)
0x185: PushEmpty()
0x186: Call2 0x1bd

0x187: Pop(0)
0x188: GOTO 0x176

0x189: Return(); Pop(2)

0x18a: PushEmpty(bool, bool)
0x18b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18c: @ IsLoaded(Stack[-1])
0x18d: Pop(0)
0x18e: PushEmpty(bool)
0x18f: Stack[-1] = (bool) 0
0x190: Pop(0); Push((bool) Stack[-2] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: PushEmpty(bool)
0x193: Call2 0x1bb

0x194: Pop(0)
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: Stack[-1] = (bool) 1
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: PushEmpty(object)
0x199: Call2 0x281

0x19a: Pop(0)
0x19b: @ RemoveActor(Stack[-1])
0x19c: Pop(1)
0x19d: Return(); Pop(2)

0x19e: PushEmpty()
0x19f: Push("cleanup") // @poff=156
0x1a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a2: PushEmpty()
0x1a3: Call2 0x18a

0x1a4: Pop(0)
0x1a5: Return(); Pop(0)

0x1a6: @ StopGroup0()
0x1a7: Pop(0)
0x1a8: @ sync()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: PushEmpty(bool)
0x1b0: Call2 0x1bb

0x1b1: Pop(0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(object)
0x1b6: Call2 0x281

0x1b7: Pop(0)
0x1b8: @ RemoveActor(Stack[-1])
0x1b9: Pop(1)
0x1ba: Return(); Pop(0)

0x1bb: Stack[-1] = (bool) 1
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1be: @ WaitForAnimEnd()
0x1bf: Pop(0)
0x1c0: PushEmpty(bool)
0x1c1: Call2 0x213

0x1c2: Pop(0)
0x1c3: Pop(1); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Return(); Pop(14)

0x1c6: PushEmpty(int)
0x1c7: Call2 0x2a9

0x1c8: Stack[-1] = Stack[-8]
0x1c9: Pop(1)
0x1ca: Stack[-6] = (int) 0
0x1cb: PushEmpty(bool)
0x1cc: Stack[-1] = (bool) 0
0x1cd: Push((int) 5)
0x1ce: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d0: PushEmpty(bool)
0x1d1: Call2 0x213

0x1d2: Pop(0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Stack[-1] = (bool) 1
0x1d5: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1d6: Push((int) 3)
0x1d7: @ irand(Stack[-6], Stack[-1])
0x1d8: Pop(1)
0x1d9: Push((int) 0)
0x1da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1dc: Push(Stack[-7])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1de: @ irand(Stack[-4], Stack[-7])
0x1df: Pop(0)
0x1e0: Push("all") // @poff=138
0x1e1: PushEmpty(string, int)
0x1e2: Stack[-7] = Stack[-1]
0x1e3: Call2 0x2a2

0x1e4: Pop(1)
0x1e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: @ WaitForAnimEnd(Stack[-3])
0x1e8: Pop(0)
0x1e9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: GOTO 0x209

0x1ec: GOTO 0x1fe

0x1ed: Push((int) 1)
0x1ee: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f0: Push((int) 4)
0x1f1: @ rand(Stack[-3], Stack[-1])
0x1f2: Pop(1)
0x1f3: Push((int) 1)
0x1f4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1f5: @ Sleep(Stack[-1], Stack[-2])
0x1f6: Pop(1)
0x1f7: Pop(0); Push((bool) Stack[-1] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: GOTO 0x209

0x1fa: GOTO 0x1fe

0x1fb: Push(Stack[-6])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: GOTO 0x209

0x1fe: PushEmpty(bool)
0x1ff: Call2 0x20c

0x200: Pop(0)
0x201: Pop(1); Push((bool) Stack[-1] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: GOTO 0x209

0x204: @ ResetAAS()
0x205: Pop(0)
0x206: Push((int) 1)
0x207: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x208: GOTO 0x1cb

0x209: @ ResetAAS()
0x20a: Pop(0)
0x20b: Return(); Pop(14)

0x20c: Stack[-1] = (bool) 1
0x20d: Return(); Pop(0)

0x20e: @ StopAnimation()
0x20f: Pop(0)
0x210: @ StopGroup0()
0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: PushEmpty(bool, bool)
0x214: @ IsLoaded(Stack[-1])
0x215: Pop(0)
0x216: Stack[-1] = Stack[-3]
0x217: Return(); Pop(2)

0x218: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x219: @@ GetPosition(Stack[-8]); Obj=20 // @poff=172
0x21a: Pop(0)
0x21b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=184
0x21c: Pop(0)
0x21d: Push(CvectorIndex(Stack[-8], 1))
0x21e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x220: @ GetPosition(Stack[-7])
0x221: Pop(0)
0x222: @ GetEyesHeight(Stack[-9])
0x223: Pop(0)
0x224: Push(CvectorIndex(Stack[-7], 1))
0x225: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x226: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x227: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x228: Push(CvectorIndex(Stack[-6], 1))
0x229: Stack[-1] = (int) 0
0x22a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x22b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x22c: Pop(1); Push(Sqrt(Stack[-1]))
0x22d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x22e: Stack[-5] = -Stack[-6]; Pop(0);
0x22f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x230: PushEmpty(cvector, cvector)
0x231: Push([0.0, 1.0, 0.0])
0x232: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x233: Call2 0x287

0x234: Pop(1)
0x235: Push((int) 25)
0x236: Pop(2); Push(Stack[-2] * Stack[-1]);
0x237: Pop(2); Push(Stack[-2] + Stack[-1]);
0x238: Push([0.0, 10.0, 0.0])
0x239: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x23a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x23b: @ IsOverrideActive(Stack[-2])
0x23c: Pop(0)
0x23d: Push(Stack[-2])
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-21] = (bool) 0
0x240: Return(); Pop(18)

0x241: @ StopWorld()
0x242: Pop(0)
0x243: @ CameraTransit(Stack[-3], Stack[-5])
0x244: Pop(0)
0x245: Push(CvectorIndex(Stack[-4], 0))
0x246: Push(CvectorIndex(Stack[-5], 2))
0x247: @ Rotate(Stack[-2], Stack[-1])
0x248: Pop(2)
0x249: PushEmpty(bool)
0x24a: Call2 0x329

0x24b: Pop(0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x256

0x24e: Push("head") // @poff=198
0x24f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x250: Pop(1)
0x251: Push(Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x253: Push("head") // @poff=198
0x254: @ LookAsyncCamera(Stack[-1])
0x255: Pop(1)
0x256: @ CameraWaitForPlayFinish()
0x257: Pop(0)
0x258: @ ResumeWorld()
0x259: Pop(0)
0x25a: Stack[-21] = (bool) 1
0x25b: Return(); Pop(18)

0x25c: PushEmpty(bool, bool)
0x25d: @ CameraSwitchToNormal()
0x25e: Pop(0)
0x25f: PushEmpty(bool)
0x260: Call2 0x329

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x26c

0x264: Push("head") // @poff=198
0x265: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x266: Pop(1)
0x267: Push(Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x269: Push("head") // @poff=198
0x26a: @ UnlookAsync(Stack[-1])
0x26b: Pop(1)
0x26c: Return(); Pop(2)

0x26d: PushEmpty(float, float, float, float)
0x26e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x26f: Pop(0)
0x270: Push((bool) 0)
0x271: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(1)
0x273: Return(); Pop(4)

0x274: PushEmpty(float, float, float, float)
0x275: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x276: Pop(0)
0x277: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x278: Pop(0)
0x279: Return(); Pop(4)

0x27a: PushEmpty(bool)
0x27b: Call2 0x329

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: @ lshStopSpeech()
0x27f: Pop(0)
0x280: Return(); Pop(0)

0x281: PushEmpty(object, object)
0x282: @ self(Stack[-1])
0x283: Pop(0)
0x284: Stack[-1] = Stack[-3]
0x285: Return(); Pop(2)

0x286: Stack[-1] = 0
0x287: PushEmpty(float, float)
0x288: Pop(0); Push(Stack[-3] | Stack[-3]);
0x289: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x28a: Push((float)9.999999974752427e-07)
0x28b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-4] = [0.0, 0.0, 0.0]
0x28e: Return(); Pop(2)

0x28f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x290: Return(); Pop(2)

0x291: PushEmpty(int, int)
0x292: @ GetVariable(Stack[-3], Stack[-1])
0x293: Pop(0)
0x294: Stack[-1] = Stack[-4]
0x295: Return(); Pop(2)

0x296: PushEmpty(object, object)
0x297: @ FindActor(Stack[-1], Stack[-4])
0x298: Pop(0)
0x299: Pop(0); PushNull((bool) Stack[-1] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-5] = (bool) 0
0x29c: Return(); Pop(2)

0x29d: @ Trigger(Stack[-1], Stack[-3])
0x29e: Pop(0)
0x29f: Stack[-5] = (bool) 1
0x2a0: Return(); Pop(2)

0x2a1: Stack[-1] = 0
0x2a2: PushEmpty(string, string)
0x2a3: Stack[-1] = "idle" // @poff=146
0x2a4: Push(Stack[-3])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2a7: Stack[-1] = Stack[-4]
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(int, bool, int, bool)
0x2aa: Stack[-2] = (int) 0
0x2ab: Push("all") // @poff=138
0x2ac: PushEmpty(string, int)
0x2ad: Stack[-5] = Stack[-1]
0x2ae: Call2 0x2a2

0x2af: Pop(1)
0x2b0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Pop(0); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: GOTO 0x2b8

0x2b5: Push((int) 1)
0x2b6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b7: GOTO 0x2ab

0x2b8: Stack[-2] = Stack[-5]
0x2b9: Return(); Pop(4)

0x2ba: PushEmpty()
0x2bb: Push("b7q02") // @poff=208
0x2bc: Push((int) 2)
0x2bd: @ SetVariable(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: PushEmpty()
0x2c0: Call2 0x2da

0x2c1: Pop(0)
0x2c2: PushEmpty(bool, string, string)
0x2c3: Stack[-2] = "quest_b7_02" // @poff=220
0x2c4: Stack[-1] = "place_grabitels" // @poff=244
0x2c5: Call2 0x296

0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty()
0x2c9: Push("oob7Morlok1") // @poff=276
0x2ca: Push((int) 1)
0x2cb: @ SetVariable(Stack[-2], Stack[-1])
0x2cc: Pop(2)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty()
0x2cf: PushEmpty(int, string)
0x2d0: Stack[-1] = "oob7Morlok1" // @poff=276
0x2d1: Call2 0x291

0x2d2: Pop(1)
0x2d3: Push((int) 0)
0x2d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-2] = (bool) 1
0x2d7: Return(); Pop(0)

0x2d8: Stack[-2] = (bool) 0
0x2d9: Return(); Pop(0)

0x2da: PushEmpty(object, object)
0x2db: Push((int) 272)
0x2dc: Push((int) 2)
0x2dd: Push((int) 521226)
0x2de: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: PushEmpty(bool, object, int)
0x2e1: Stack[-4] = Stack[-2]
0x2e2: Stack[-1] = (int) 270
0x2e3: Call2 0x2f4

0x2e4: Pop(3)
0x2e5: Return(); Pop(2)

0x2e6: Stack[-1] = 0
0x2e7: PushEmpty(object, object)
0x2e8: @ GetDiaryRoot(Stack[-1])
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: Push("Can't retrieve diary root") // @poff=300
0x2ed: @ Trace(Stack[-1])
0x2ee: Pop(1)
0x2ef: Stack[-3] = (bool) 0
0x2f0: Return(); Pop(2)

0x2f1: Stack[-1] = Stack[-3]
0x2f2: Return(); Pop(2)

0x2f3: Stack[-1] = 0
0x2f4: PushEmpty(object, object, int, object, object, int)
0x2f5: PushEmpty(object)
0x2f6: Call2 0x2e7

0x2f7: Stack[-1] = Stack[-4]
0x2f8: Pop(1)
0x2f9: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=352
0x2fa: Pop(0)
0x2fb: Pop(0); Push((bool) Stack[-2] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fd: Push("Can't find diary parent with id: ") // @poff=357
0x2fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ff: @ Trace(Stack[-1])
0x300: Pop(1)
0x301: Stack[-9] = (bool) 0
0x302: Return(); Pop(6)

0x303: @@ AddChild(Stack[-8]); Obj=2 // @poff=425
0x304: Pop(0)
0x305: Push((int) 7)
0x306: @ SendWorldWndMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ GetCategory(Stack[-1]); Obj=8 // @poff=434
0x309: Pop(0)
0x30a: @ SetDiarySection(Stack[-1])
0x30b: Pop(0)
0x30c: Stack[-9] = (bool) 0
0x30d: Return(); Pop(6)

0x30e: Stack[-2] = 0
0x30f: Stack[-3] = 0
0x310: PushEmpty(int, int)
0x311: Push("branch") // @poff=446
0x312: @ GetVariable(Stack[-1], Stack[-2])
0x313: Pop(1)
0x314: Push((int) 0)
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x317: Stack[-3] = (int) 1
0x318: Return(); Pop(2)

0x319: GOTO 0x31f

0x31a: Push((int) 1)
0x31b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-3] = (int) 2
0x31e: Return(); Pop(2)

0x31f: Stack[-3] = (int) 3
0x320: Return(); Pop(2)

0x321: Stack[-1] = (int) 521048
0x322: Return(); Pop(0)

0x323: Stack[-1] = (int) 521047
0x324: Return(); Pop(0)

0x325: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=460
0x326: Return(); Pop(0)

0x327: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=500
0x328: Return(); Pop(0)

0x329: Stack[-1] = (bool) 0
0x32a: Return(); Pop(0)

