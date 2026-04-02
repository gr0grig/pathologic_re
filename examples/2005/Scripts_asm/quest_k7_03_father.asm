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
	W:k7q03
	W:tvirin
	A:RemoveItemByType
	W:playsound
	W:giveitem
	A:GetItemCountOfType
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006b0037007100300033000000740076006900720069006e00000052656d6f76654974656d4279547970650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000004765744974656d436f756e744f665479706500430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x137
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x13d Vars = (object)
		EVENT_26 Op = 0x175 Vars = (string)
		EVENT_5 Op = 0x17d Vars = ()
		EVENT_6 Op = 0x182 Vars = ()
		EVENT_7 Op = 0x1c1 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x249

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x367

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x365

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x369

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x36b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x354

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
0x41: Call2 0x28d

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
0x4f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x97

0x53: Pop(1)
0x54: Push((int) 526382)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x2fd

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x309

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 526383)
0x68: Push((int) 27664)
0x69: Push((int) 27663)
0x6a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b: Pop(3)
0x6c: Push((int) 526386)
0x6d: Push((int) -1)
0x6e: Push((int) 27666)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: Push((int) 528664)
0x72: Push((int) -1)
0x73: Push((int) 30075)
0x74: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75: Pop(3)
0x76: GOTO 0x79

0x77: Return(); Pop(0)

0x78: GOTO 0x4e

0x79: PushEmpty(bool)
0x7a: Call2 0x36d

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x29e

0x85: Pop(1)
0x86: GOTO 0x7d

0x87: GOTO 0x96

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: @ WaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: Push("all") // @poff=138
0x92: Push("idle") // @poff=146
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x8c

0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: PushEmpty(bool)
0x99: Call2 0x36d

0x9a: Pop(0)
0x9b: Pop(1); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(0)

0x9e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: PushEmpty(string, bool)
0xa2: Stack[-3] = Stack[-2]
0xa3: Push("") // @poff=102
0xa4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: Stack[-1] = (bool) 0
0xa7: GOTO 0xa9

0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x2a5

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x2b6

0xb2: Pop(0)
0xb3: Push((int) 27665)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x2ea

0xba: Pop(2)
0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x2f7

0xbf: Pop(2)
0xc0: Push((int) 27662)
0xc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xc3: PushEmpty(string)
0xc4: Stack[-1] = "Neutral" // @poff=89
0xc5: Call2 0x97

0xc6: Pop(1)
0xc7: Push((int) 526382)
0xc8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc9: Pop(1)
0xca: @@@ ClearReplies(); Obj=0 // @poff=116
0xcb: Pop(0)
0xcc: PushEmpty(bool)
0xcd: Stack[-1] = (bool) 0
0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x2fd

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x309

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Stack[-1] = (bool) 1
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 526383)
0xdb: Push((int) 27664)
0xdc: Push((int) 27663)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Push((int) 526386)
0xe0: Push((int) -1)
0xe1: Push((int) 27666)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Push((int) 528664)
0xe5: Push((int) -1)
0xe6: Push((int) 30075)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 27664)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral" // @poff=89
0xef: Call2 0x97

0xf0: Pop(1)
0xf1: Push((int) 526384)
0xf2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf3: Pop(1)
0xf4: @@@ ClearReplies(); Obj=0 // @poff=116
0xf5: Pop(0)
0xf6: Push((int) 528665)
0xf7: Push((int) 30078)
0xf8: Push((int) 30076)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Push((int) 528666)
0xfc: Push((int) 30078)
0xfd: Push((int) 30077)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 30078)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral" // @poff=89
0x106: Call2 0x97

0x107: Pop(1)
0x108: Push((int) 528667)
0x109: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10a: Pop(1)
0x10b: @@@ ClearReplies(); Obj=0 // @poff=116
0x10c: Pop(0)
0x10d: Push((int) 528668)
0x10e: Push((int) 30082)
0x10f: Push((int) 30079)
0x110: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x111: Pop(3)
0x112: Push((int) 528669)
0x113: Push((int) -1)
0x114: Push((int) 30081)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 30082)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral" // @poff=89
0x11d: Call2 0x97

0x11e: Pop(1)
0x11f: Push((int) 528670)
0x120: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x121: Pop(1)
0x122: @@@ ClearReplies(); Obj=0 // @poff=116
0x123: Pop(0)
0x124: Push((int) 526385)
0x125: Push((int) -1)
0x126: Push((int) 27665)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12b: PushEmpty(bool)
0x12c: Call2 0x36d

0x12d: Pop(0)
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: @ lshStopAnimation()
0x130: Pop(0)
0x131: GOTO 0x134

0x132: @ StopAnimation()
0x133: Pop(0)
0x134: Return(); Pop(0)

0x135: GOTO 0xae

0x136: Return(); Pop(0)

0x137: PushEmpty(float, float)
0x138: Stack[-2] = (int) 300
0x139: Stack[-1] = (int) 100
0x13a: Call2 0x148

0x13b: Pop(2)
0x13c: Return(); Pop(0)

0x13d: PushEmpty()
0x13e: PushEmpty()
0x13f: Call2 0x1d8

0x140: Pop(0)
0x141: PushEmpty(int, object)
0x142: Stack[-3] = Stack[-1]
0x143: Push(-2, 1); TaskCall(0)
0x144: Call2 0x0

0x145: Pop(-2, 1); TaskReturn
0x146: Pop(2)
0x147: Return(); Pop(0)

0x148: PushEmpty(float, float)
0x149: PushEmpty(bool)
0x14a: Call2 0x244

0x14b: Pop(0)
0x14c: Pop(1); Push((bool) Stack[-1] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14e: @ Hold()
0x14f: Pop(0)
0x150: GOTO 0x149

0x151: Push((int) 3)
0x152: @ rand(Stack[-2], Stack[-1])
0x153: Pop(1)
0x154: Push((int) 3)
0x155: Pop(1); Push(Stack[-2] + Stack[-1]);
0x156: @ Sleep(Stack[-1])
0x157: Pop(1)
0x158: PushEmpty(float, float)
0x159: Stack[-6] = Stack[-2]
0x15a: Stack[-5] = Stack[-1]
0x15b: Call2 0x197

0x15c: Pop(2)
0x15d: @ sync()
0x15e: Pop(0)
0x15f: GOTO 0x149

0x160: Return(); Pop(2)

0x161: PushEmpty(bool, bool)
0x162: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x163: @ IsLoaded(Stack[-1])
0x164: Pop(0)
0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: Pop(0); Push((bool) Stack[-2] == 0)
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: PushEmpty(bool)
0x16a: Call2 0x195

0x16b: Pop(0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Stack[-1] = (bool) 1
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: PushEmpty(object)
0x170: Call2 0x2bd

0x171: Pop(0)
0x172: @ RemoveActor(Stack[-1])
0x173: Pop(1)
0x174: Return(); Pop(2)

0x175: PushEmpty()
0x176: Push("cleanup") // @poff=156
0x177: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x179: PushEmpty()
0x17a: Call2 0x161

0x17b: Pop(0)
0x17c: Return(); Pop(0)

0x17d: @ StopGroup0()
0x17e: Pop(0)
0x17f: @ sync()
0x180: Pop(0)
0x181: Return(); Pop(0)

0x182: PushEmpty()
0x183: Call2 0x1d8

0x184: Pop(0)
0x185: PushEmpty(bool)
0x186: Stack[-1] = (bool) 0
0x187: Push( Stack[5 + Tasks[-1].StackPointer] )
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: PushEmpty(bool)
0x18a: Call2 0x195

0x18b: Pop(0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty(object)
0x190: Call2 0x2bd

0x191: Pop(0)
0x192: @ RemoveActor(Stack[-1])
0x193: Pop(1)
0x194: Return(); Pop(0)

0x195: Stack[-1] = (bool) 1
0x196: Return(); Pop(0)

0x197: PushEmpty()
0x198: PushEmpty(bool)
0x199: Call2 0x244

0x19a: Pop(0)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Return(); Pop(0)

0x19e: Push("player") // @poff=172
0x19f: @ FindActor(Stack[-4]T, Stack[-1])
0x1a0: Pop(1)
0x1a1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a3: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1a4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a5: Push((int) 10)
0x1a6: Push((float)1.0)
0x1a7: @ SetTimer(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: PushEmpty()
0x1aa: Call2 0x1e6

0x1ab: Pop(0)
0x1ac: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ae: Push((int) 10)
0x1af: @ KillTimer(Stack[-1])
0x1b0: Pop(1)
0x1b1: Return(); Pop(0)

0x1b2: PushEmpty(float, float)
0x1b3: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b5: Stack[-3] = (bool) 0
0x1b6: Return(); Pop(2)

0x1b7: PushEmpty(float, object)
0x1b8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b9: Call2 0x23c

0x1ba: Pop(1)
0x1bb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1bc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1bf: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1c0: Return(); Pop(2)

0x1c1: PushEmpty()
0x1c2: Push((int) 10)
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c5: PushEmpty(bool)
0x1c6: Call2 0x1b2

0x1c7: Pop(0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: PushEmpty(object)
0x1cc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1cd: Call2 0x2ab

0x1ce: Pop(1)
0x1cf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d0: GOTO 0x1d7

0x1d1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d3: Push("head") // @poff=186
0x1d4: @ UnlookAsync(Stack[-1])
0x1d5: Pop(1)
0x1d6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty()
0x1d9: Call2 0x237

0x1da: Pop(0)
0x1db: Push((int) 10)
0x1dc: @ KillTimer(Stack[-1])
0x1dd: Pop(1)
0x1de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1df: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e0: Push("head") // @poff=186
0x1e1: @ UnlookAsync(Stack[-1])
0x1e2: Pop(1)
0x1e3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e7: @ WaitForAnimEnd()
0x1e8: Pop(0)
0x1e9: PushEmpty(bool)
0x1ea: Call2 0x244

0x1eb: Pop(0)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Return(); Pop(14)

0x1ef: PushEmpty(int)
0x1f0: Call2 0x2d9

0x1f1: Stack[-1] = Stack[-8]
0x1f2: Pop(1)
0x1f3: Stack[-6] = (int) 0
0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 0
0x1f6: Push((int) 5)
0x1f7: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: PushEmpty(bool)
0x1fa: Call2 0x244

0x1fb: Pop(0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = (bool) 1
0x1fe: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x1ff: Push((int) 3)
0x200: @ irand(Stack[-6], Stack[-1])
0x201: Pop(1)
0x202: Push((int) 0)
0x203: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x205: Push(Stack[-7])
0x206: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x207: @ irand(Stack[-4], Stack[-7])
0x208: Pop(0)
0x209: Push("all") // @poff=138
0x20a: PushEmpty(string, int)
0x20b: Stack[-7] = Stack[-1]
0x20c: Call2 0x2d2

0x20d: Pop(1)
0x20e: @ PlayAnimation(Stack[-2], Stack[-1])
0x20f: Pop(2)
0x210: @ WaitForAnimEnd(Stack[-3])
0x211: Pop(0)
0x212: Pop(0); Push((bool) Stack[-3] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: GOTO 0x232

0x215: GOTO 0x227

0x216: Push((int) 1)
0x217: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x219: Push((int) 4)
0x21a: @ rand(Stack[-3], Stack[-1])
0x21b: Pop(1)
0x21c: Push((int) 1)
0x21d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x21e: @ Sleep(Stack[-1], Stack[-2])
0x21f: Pop(1)
0x220: Pop(0); Push((bool) Stack[-1] == 0)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: GOTO 0x232

0x223: GOTO 0x227

0x224: Push(Stack[-6])
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x232

0x227: PushEmpty(bool)
0x228: Call2 0x235

0x229: Pop(0)
0x22a: Pop(1); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: GOTO 0x232

0x22d: @ ResetAAS()
0x22e: Pop(0)
0x22f: Push((int) 1)
0x230: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x231: GOTO 0x1f4

0x232: @ ResetAAS()
0x233: Pop(0)
0x234: Return(); Pop(14)

0x235: Stack[-1] = (bool) 1
0x236: Return(); Pop(0)

0x237: @ StopAnimation()
0x238: Pop(0)
0x239: @ StopGroup0()
0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x23d: @ GetPosition(Stack[-3])
0x23e: Pop(0)
0x23f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x240: Pop(0)
0x241: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x242: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x243: Return(); Pop(6)

0x244: PushEmpty(bool, bool)
0x245: @ IsLoaded(Stack[-1])
0x246: Pop(0)
0x247: Stack[-1] = Stack[-3]
0x248: Return(); Pop(2)

0x249: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x24a: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x24b: Pop(0)
0x24c: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x24d: Pop(0)
0x24e: Push(CvectorIndex(Stack[-8], 1))
0x24f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x250: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x251: @ GetPosition(Stack[-7])
0x252: Pop(0)
0x253: @ GetEyesHeight(Stack[-9])
0x254: Pop(0)
0x255: Push(CvectorIndex(Stack[-7], 1))
0x256: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x257: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x258: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x259: Push(CvectorIndex(Stack[-6], 1))
0x25a: Stack[-1] = (int) 0
0x25b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25d: Pop(1); Push(Sqrt(Stack[-1]))
0x25e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x25f: Stack[-5] = -Stack[-6]; Pop(0);
0x260: Pop(0); Push(Stack[-6] * Stack[-19]);
0x261: PushEmpty(cvector, cvector)
0x262: Push([0.0, 1.0, 0.0])
0x263: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x264: Call2 0x2c3

0x265: Pop(1)
0x266: Push((int) 25)
0x267: Pop(2); Push(Stack[-2] * Stack[-1]);
0x268: Pop(2); Push(Stack[-2] + Stack[-1]);
0x269: Push([0.0, 10.0, 0.0])
0x26a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x26b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x26c: @ IsOverrideActive(Stack[-2])
0x26d: Pop(0)
0x26e: Push(Stack[-2])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-21] = (bool) 0
0x271: Return(); Pop(18)

0x272: @ StopWorld()
0x273: Pop(0)
0x274: @ CameraTransit(Stack[-3], Stack[-5])
0x275: Pop(0)
0x276: Push(CvectorIndex(Stack[-4], 0))
0x277: Push(CvectorIndex(Stack[-5], 2))
0x278: @ Rotate(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: PushEmpty(bool)
0x27b: Call2 0x36d

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x287

0x27f: Push("head") // @poff=186
0x280: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x281: Pop(1)
0x282: Push(Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: Push("head") // @poff=186
0x285: @ LookAsyncCamera(Stack[-1])
0x286: Pop(1)
0x287: @ CameraWaitForPlayFinish()
0x288: Pop(0)
0x289: @ ResumeWorld()
0x28a: Pop(0)
0x28b: Stack[-21] = (bool) 1
0x28c: Return(); Pop(18)

0x28d: PushEmpty(bool, bool)
0x28e: @ CameraSwitchToNormal()
0x28f: Pop(0)
0x290: PushEmpty(bool)
0x291: Call2 0x36d

0x292: Pop(0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: GOTO 0x29d

0x295: Push("head") // @poff=186
0x296: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x297: Pop(1)
0x298: Push(Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29a: Push("head") // @poff=186
0x29b: @ UnlookAsync(Stack[-1])
0x29c: Pop(1)
0x29d: Return(); Pop(2)

0x29e: PushEmpty(float, float, float, float)
0x29f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2a0: Pop(0)
0x2a1: Push((bool) 0)
0x2a2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: Return(); Pop(4)

0x2a5: PushEmpty(float, float, float, float)
0x2a6: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2a7: Pop(0)
0x2a8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2a9: Pop(0)
0x2aa: Return(); Pop(4)

0x2ab: PushEmpty(float, cvector, float, cvector)
0x2ac: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2ad: Pop(0)
0x2ae: Stack[-1] = [0.0, 0.0, 0.0]
0x2af: Push(CvectorIndex(Stack[-1], 1))
0x2b0: Stack[-3] = Stack[-1]
0x2b1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2b2: Push("head") // @poff=186
0x2b3: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2b4: Pop(1)
0x2b5: Return(); Pop(4)

0x2b6: PushEmpty(bool)
0x2b7: Call2 0x36d

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: @ lshStopSpeech()
0x2bb: Pop(0)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(object, object)
0x2be: @ self(Stack[-1])
0x2bf: Pop(0)
0x2c0: Stack[-1] = Stack[-3]
0x2c1: Return(); Pop(2)

0x2c2: Stack[-1] = 0
0x2c3: PushEmpty(float, float)
0x2c4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2c5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2c6: Push((float)9.999999974752427e-07)
0x2c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-4] = [0.0, 0.0, 0.0]
0x2ca: Return(); Pop(2)

0x2cb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(int, int)
0x2ce: @ GetVariable(Stack[-3], Stack[-1])
0x2cf: Pop(0)
0x2d0: Stack[-1] = Stack[-4]
0x2d1: Return(); Pop(2)

0x2d2: PushEmpty(string, string)
0x2d3: Stack[-1] = "idle" // @poff=146
0x2d4: Push(Stack[-3])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2d7: Stack[-1] = Stack[-4]
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(int, bool, int, bool)
0x2da: Stack[-2] = (int) 0
0x2db: Push("all") // @poff=138
0x2dc: PushEmpty(string, int)
0x2dd: Stack[-5] = Stack[-1]
0x2de: Call2 0x2d2

0x2df: Pop(1)
0x2e0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: Pop(0); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2e8

0x2e5: Push((int) 1)
0x2e6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e7: GOTO 0x2db

0x2e8: Stack[-2] = Stack[-5]
0x2e9: Return(); Pop(4)

0x2ea: PushEmpty(int, int)
0x2eb: Push("k7q03") // @poff=222
0x2ec: Push((int) 2)
0x2ed: @ SetVariable(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: PushEmpty()
0x2f0: Call2 0x31e

0x2f1: Pop(0)
0x2f2: Push("tvirin") // @poff=234
0x2f3: Push((int) 5)
0x2f4: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=248
0x2f5: Pop(2)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty()
0x2f8: Push("playsound") // @poff=265
0x2f9: Push("giveitem") // @poff=285
0x2fa: @ TriggerWorld(Stack[-2], Stack[-1])
0x2fb: Pop(2)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty()
0x2fe: PushEmpty(int, string)
0x2ff: Stack[-1] = "k7q03" // @poff=222
0x300: Call2 0x2cd

0x301: Pop(1)
0x302: Push((int) 1)
0x303: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-2] = (bool) 1
0x306: Return(); Pop(0)

0x307: Stack[-2] = (bool) 0
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: PushEmpty(bool, object)
0x30b: Stack[-3] = Stack[-1]
0x30c: Call2 0x313

0x30d: Pop(1)
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-2] = (bool) 1
0x310: Return(); Pop(0)

0x311: Stack[-2] = (bool) 0
0x312: Return(); Pop(0)

0x313: PushEmpty(int, int)
0x314: Push("tvirin") // @poff=234
0x315: @@ GetItemCountOfType(Stack[-2], Stack[-1]); Obj=4 // @poff=303
0x316: Pop(1)
0x317: Push((int) 5)
0x318: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Stack[-4] = (bool) 1
0x31b: Return(); Pop(2)

0x31c: Stack[-4] = (bool) 0
0x31d: Return(); Pop(2)

0x31e: PushEmpty(object, object)
0x31f: Push((int) 436)
0x320: Push((int) 2)
0x321: Push((int) 526392)
0x322: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(3)
0x324: PushEmpty(bool, object, int)
0x325: Stack[-4] = Stack[-2]
0x326: Stack[-1] = (int) 434
0x327: Call2 0x338

0x328: Pop(3)
0x329: Return(); Pop(2)

0x32a: Stack[-1] = 0
0x32b: PushEmpty(object, object)
0x32c: @ GetDiaryRoot(Stack[-1])
0x32d: Pop(0)
0x32e: Pop(0); Push((bool) Stack[-1] == 0)
0x32f: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x330: Push("Can't retrieve diary root") // @poff=322
0x331: @ Trace(Stack[-1])
0x332: Pop(1)
0x333: Stack[-3] = (bool) 0
0x334: Return(); Pop(2)

0x335: Stack[-1] = Stack[-3]
0x336: Return(); Pop(2)

0x337: Stack[-1] = 0
0x338: PushEmpty(object, object, int, object, object, int)
0x339: PushEmpty(object)
0x33a: Call2 0x32b

0x33b: Stack[-1] = Stack[-4]
0x33c: Pop(1)
0x33d: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=374
0x33e: Pop(0)
0x33f: Pop(0); Push((bool) Stack[-2] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: Push("Can't find diary parent with id: ") // @poff=379
0x342: Pop(1); Push(Stack[-1] + Stack[-8]);
0x343: @ Trace(Stack[-1])
0x344: Pop(1)
0x345: Stack[-9] = (bool) 0
0x346: Return(); Pop(6)

0x347: @@ AddChild(Stack[-8]); Obj=2 // @poff=447
0x348: Pop(0)
0x349: Push((int) 7)
0x34a: @ SendWorldWndMessage(Stack[-1])
0x34b: Pop(1)
0x34c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=456
0x34d: Pop(0)
0x34e: @ SetDiarySection(Stack[-1])
0x34f: Pop(0)
0x350: Stack[-9] = (bool) 0
0x351: Return(); Pop(6)

0x352: Stack[-2] = 0
0x353: Stack[-3] = 0
0x354: PushEmpty(int, int)
0x355: Push("branch") // @poff=468
0x356: @ GetVariable(Stack[-1], Stack[-2])
0x357: Pop(1)
0x358: Push((int) 0)
0x359: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35b: Stack[-3] = (int) 1
0x35c: Return(); Pop(2)

0x35d: GOTO 0x363

0x35e: Push((int) 1)
0x35f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-3] = (int) 2
0x362: Return(); Pop(2)

0x363: Stack[-3] = (int) 3
0x364: Return(); Pop(2)

0x365: Stack[-1] = (int) 515564
0x366: Return(); Pop(0)

0x367: Stack[-1] = (int) 503349
0x368: Return(); Pop(0)

0x369: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=482
0x36a: Return(); Pop(0)

0x36b: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=522
0x36c: Return(); Pop(0)

0x36d: Stack[-1] = (bool) 0
0x36e: Return(); Pop(0)

