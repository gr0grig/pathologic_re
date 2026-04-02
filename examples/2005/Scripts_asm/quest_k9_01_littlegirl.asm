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
	W:ook9Littlegirl1
	W:k9q01ChildTalk
	W:k9q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006f006f006b0039004c006900740074006c0065006700690072006c00310000006b0039007100300031004300680069006c006400540061006c006b0000006b0039007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x180
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x186 Vars = (object)
		EVENT_26 Op = 0x1be Vars = (string)
		EVENT_5 Op = 0x1c6 Vars = ()
		EVENT_6 Op = 0x1cb Vars = ()
		EVENT_7 Op = 0x20a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x292

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x38a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x388

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x38c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x38e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x377

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
0x41: Call2 0x2d6

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
0x4f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x335

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x31b

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x321

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral" // @poff=89
0x61: Call2 0xa7

0x62: Pop(1)
0x63: Push((int) 529769)
0x64: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65: Pop(1)
0x66: @@@ ClearReplies(); Obj=0 // @poff=116
0x67: Pop(0)
0x68: Push((int) 529773)
0x69: Push((int) 31230)
0x6a: Push((int) 31229)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: Push((int) 529776)
0x6e: Push((int) 31233)
0x6f: Push((int) 31232)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x89

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral" // @poff=89
0x75: Call2 0xa7

0x76: Pop(1)
0x77: Push((int) 529770)
0x78: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x79: Pop(1)
0x7a: @@@ ClearReplies(); Obj=0 // @poff=116
0x7b: Pop(0)
0x7c: Push((int) 529771)
0x7d: Push((int) -1)
0x7e: Push((int) 31227)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: Push((int) 529772)
0x82: Push((int) -1)
0x83: Push((int) 31228)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x390

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x2e7

0x95: Pop(1)
0x96: GOTO 0x8d

0x97: GOTO 0xa6

0x98: Push("all") // @poff=138
0x99: Push("idle") // @poff=146
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: Push("all") // @poff=138
0xa2: Push("idle") // @poff=146
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: GOTO 0x9c

0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool)
0xa9: Call2 0x390

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(string, bool)
0xb2: Stack[-3] = Stack[-2]
0xb3: Push("") // @poff=102
0xb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: GOTO 0xb9

0xb8: Stack[-1] = (bool) 1
0xb9: Call2 0x2ee

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x2ff

0xc2: Pop(0)
0xc3: Push((int) 31225)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call2 0x335

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x31b

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x321

0xd4: Pop(2)
0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral" // @poff=89
0xd7: Call2 0xa7

0xd8: Pop(1)
0xd9: Push((int) 529769)
0xda: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdb: Pop(1)
0xdc: @@@ ClearReplies(); Obj=0 // @poff=116
0xdd: Pop(0)
0xde: Push((int) 529773)
0xdf: Push((int) 31230)
0xe0: Push((int) 31229)
0xe1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe2: Pop(3)
0xe3: Push((int) 529776)
0xe4: Push((int) 31233)
0xe5: Push((int) 31232)
0xe6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral" // @poff=89
0xeb: Call2 0xa7

0xec: Pop(1)
0xed: Push((int) 529770)
0xee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xef: Pop(1)
0xf0: @@@ ClearReplies(); Obj=0 // @poff=116
0xf1: Pop(0)
0xf2: Push((int) 529771)
0xf3: Push((int) -1)
0xf4: Push((int) 31227)
0xf5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf6: Pop(3)
0xf7: Push((int) 529772)
0xf8: Push((int) -1)
0xf9: Push((int) 31228)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 31233)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 529777)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 529778)
0x10a: Push((int) 31230)
0x10b: Push((int) 31234)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 31230)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral" // @poff=89
0x114: Call2 0xa7

0x115: Pop(1)
0x116: Push((int) 529774)
0x117: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x118: Pop(1)
0x119: @@@ ClearReplies(); Obj=0 // @poff=116
0x11a: Pop(0)
0x11b: Push((int) 529775)
0x11c: Push((int) 31236)
0x11d: Push((int) 31231)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 31236)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0xa7

0x127: Pop(1)
0x128: Push((int) 529779)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 529780)
0x12e: Push((int) 31238)
0x12f: Push((int) 31237)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 31238)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral" // @poff=89
0x138: Call2 0xa7

0x139: Pop(1)
0x13a: Push((int) 529781)
0x13b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13c: Pop(1)
0x13d: @@@ ClearReplies(); Obj=0 // @poff=116
0x13e: Pop(0)
0x13f: Push((int) 529782)
0x140: Push((int) 31243)
0x141: Push((int) 31239)
0x142: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x143: Pop(3)
0x144: Push((int) 529783)
0x145: Push((int) 31241)
0x146: Push((int) 31240)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 31241)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral" // @poff=89
0x14f: Call2 0xa7

0x150: Pop(1)
0x151: Push((int) 529784)
0x152: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x153: Pop(1)
0x154: @@@ ClearReplies(); Obj=0 // @poff=116
0x155: Pop(0)
0x156: Push((int) 529785)
0x157: Push((int) 31243)
0x158: Push((int) 31242)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 31243)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral" // @poff=89
0x161: Call2 0xa7

0x162: Pop(1)
0x163: Push((int) 529786)
0x164: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x165: Pop(1)
0x166: @@@ ClearReplies(); Obj=0 // @poff=116
0x167: Pop(0)
0x168: Push((int) 529787)
0x169: Push((int) -1)
0x16a: Push((int) 31245)
0x16b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16c: Pop(3)
0x16d: Push((int) 529788)
0x16e: Push((int) -1)
0x16f: Push((int) 31246)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x174: PushEmpty(bool)
0x175: Call2 0x390

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x178: @ lshStopAnimation()
0x179: Pop(0)
0x17a: GOTO 0x17d

0x17b: @ StopAnimation()
0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: GOTO 0xbe

0x17f: Return(); Pop(0)

0x180: PushEmpty(float, float)
0x181: Stack[-2] = (int) 300
0x182: Stack[-1] = (int) 100
0x183: Call2 0x191

0x184: Pop(2)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: PushEmpty()
0x188: Call2 0x221

0x189: Pop(0)
0x18a: PushEmpty(int, object)
0x18b: Stack[-3] = Stack[-1]
0x18c: Push(-2, 1); TaskCall(0)
0x18d: Call2 0x0

0x18e: Pop(-2, 1); TaskReturn
0x18f: Pop(2)
0x190: Return(); Pop(0)

0x191: PushEmpty(float, float)
0x192: PushEmpty(bool)
0x193: Call2 0x28d

0x194: Pop(0)
0x195: Pop(1); Push((bool) Stack[-1] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x197: @ Hold()
0x198: Pop(0)
0x199: GOTO 0x192

0x19a: Push((int) 3)
0x19b: @ rand(Stack[-2], Stack[-1])
0x19c: Pop(1)
0x19d: Push((int) 3)
0x19e: Pop(1); Push(Stack[-2] + Stack[-1]);
0x19f: @ Sleep(Stack[-1])
0x1a0: Pop(1)
0x1a1: PushEmpty(float, float)
0x1a2: Stack[-6] = Stack[-2]
0x1a3: Stack[-5] = Stack[-1]
0x1a4: Call2 0x1e0

0x1a5: Pop(2)
0x1a6: @ sync()
0x1a7: Pop(0)
0x1a8: GOTO 0x192

0x1a9: Return(); Pop(2)

0x1aa: PushEmpty(bool, bool)
0x1ab: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1ac: @ IsLoaded(Stack[-1])
0x1ad: Pop(0)
0x1ae: PushEmpty(bool)
0x1af: Stack[-1] = (bool) 0
0x1b0: Pop(0); Push((bool) Stack[-2] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: PushEmpty(bool)
0x1b3: Call2 0x1de

0x1b4: Pop(0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: PushEmpty(object)
0x1b9: Call2 0x306

0x1ba: Pop(0)
0x1bb: @ RemoveActor(Stack[-1])
0x1bc: Pop(1)
0x1bd: Return(); Pop(2)

0x1be: PushEmpty()
0x1bf: Push("cleanup") // @poff=156
0x1c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: PushEmpty()
0x1c3: Call2 0x1aa

0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: @ StopGroup0()
0x1c7: Pop(0)
0x1c8: @ sync()
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty()
0x1cc: Call2 0x221

0x1cd: Pop(0)
0x1ce: PushEmpty(bool)
0x1cf: Stack[-1] = (bool) 0
0x1d0: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1de

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[-1] = (bool) 1
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object)
0x1d9: Call2 0x306

0x1da: Pop(0)
0x1db: @ RemoveActor(Stack[-1])
0x1dc: Pop(1)
0x1dd: Return(); Pop(0)

0x1de: Stack[-1] = (bool) 1
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: PushEmpty(bool)
0x1e2: Call2 0x28d

0x1e3: Pop(0)
0x1e4: Pop(1); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Return(); Pop(0)

0x1e7: Push("player") // @poff=172
0x1e8: @ FindActor(Stack[-4]T, Stack[-1])
0x1e9: Pop(1)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ed: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ee: Push((int) 10)
0x1ef: Push((float)1.0)
0x1f0: @ SetTimer(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: PushEmpty()
0x1f3: Call2 0x22f

0x1f4: Pop(0)
0x1f5: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f7: Push((int) 10)
0x1f8: @ KillTimer(Stack[-1])
0x1f9: Pop(1)
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty(float, float)
0x1fc: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: Stack[-3] = (bool) 0
0x1ff: Return(); Pop(2)

0x200: PushEmpty(float, object)
0x201: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x202: Call2 0x285

0x203: Pop(1)
0x204: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x205: Push( Stack[2 + Tasks[-1].StackPointer] )
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x208: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x209: Return(); Pop(2)

0x20a: PushEmpty()
0x20b: Push((int) 10)
0x20c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x20e: PushEmpty(bool)
0x20f: Call2 0x1fb

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x212: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x216: Call2 0x2f4

0x217: Pop(1)
0x218: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x219: GOTO 0x220

0x21a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21c: Push("head") // @poff=186
0x21d: @ UnlookAsync(Stack[-1])
0x21e: Pop(1)
0x21f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: Call2 0x280

0x223: Pop(0)
0x224: Push((int) 10)
0x225: @ KillTimer(Stack[-1])
0x226: Pop(1)
0x227: Push( Stack[2 + Tasks[-1].StackPointer] )
0x228: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x229: Push("head") // @poff=186
0x22a: @ UnlookAsync(Stack[-1])
0x22b: Pop(1)
0x22c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22e: Return(); Pop(0)

0x22f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x230: @ WaitForAnimEnd()
0x231: Pop(0)
0x232: PushEmpty(bool)
0x233: Call2 0x28d

0x234: Pop(0)
0x235: Pop(1); Push((bool) Stack[-1] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Return(); Pop(14)

0x238: PushEmpty(int)
0x239: Call2 0x399

0x23a: Stack[-1] = Stack[-8]
0x23b: Pop(1)
0x23c: Stack[-6] = (int) 0
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: Push((int) 5)
0x240: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: PushEmpty(bool)
0x243: Call2 0x28d

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Stack[-1] = (bool) 1
0x247: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x248: Push((int) 3)
0x249: @ irand(Stack[-6], Stack[-1])
0x24a: Pop(1)
0x24b: Push((int) 0)
0x24c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x24e: Push(Stack[-7])
0x24f: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x250: @ irand(Stack[-4], Stack[-7])
0x251: Pop(0)
0x252: Push("all") // @poff=138
0x253: PushEmpty(string, int)
0x254: Stack[-7] = Stack[-1]
0x255: Call2 0x392

0x256: Pop(1)
0x257: @ PlayAnimation(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: @ WaitForAnimEnd(Stack[-3])
0x25a: Pop(0)
0x25b: Pop(0); Push((bool) Stack[-3] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x27b

0x25e: GOTO 0x270

0x25f: Push((int) 1)
0x260: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x262: Push((int) 4)
0x263: @ rand(Stack[-3], Stack[-1])
0x264: Pop(1)
0x265: Push((int) 1)
0x266: Pop(1); Push(Stack[-3] + Stack[-1]);
0x267: @ Sleep(Stack[-1], Stack[-2])
0x268: Pop(1)
0x269: Pop(0); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x27b

0x26c: GOTO 0x270

0x26d: Push(Stack[-6])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x27b

0x270: PushEmpty(bool)
0x271: Call2 0x27e

0x272: Pop(0)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x27b

0x276: @ ResetAAS()
0x277: Pop(0)
0x278: Push((int) 1)
0x279: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27a: GOTO 0x23d

0x27b: @ ResetAAS()
0x27c: Pop(0)
0x27d: Return(); Pop(14)

0x27e: Stack[-1] = (bool) 1
0x27f: Return(); Pop(0)

0x280: @ StopAnimation()
0x281: Pop(0)
0x282: @ StopGroup0()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x286: @ GetPosition(Stack[-3])
0x287: Pop(0)
0x288: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x289: Pop(0)
0x28a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x28c: Return(); Pop(6)

0x28d: PushEmpty(bool, bool)
0x28e: @ IsLoaded(Stack[-1])
0x28f: Pop(0)
0x290: Stack[-1] = Stack[-3]
0x291: Return(); Pop(2)

0x292: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x293: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x294: Pop(0)
0x295: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x296: Pop(0)
0x297: Push(CvectorIndex(Stack[-8], 1))
0x298: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x299: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29a: @ GetPosition(Stack[-7])
0x29b: Pop(0)
0x29c: @ GetEyesHeight(Stack[-9])
0x29d: Pop(0)
0x29e: Push(CvectorIndex(Stack[-7], 1))
0x29f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a2: Push(CvectorIndex(Stack[-6], 1))
0x2a3: Stack[-1] = (int) 0
0x2a4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a6: Pop(1); Push(Sqrt(Stack[-1]))
0x2a7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a8: Stack[-5] = -Stack[-6]; Pop(0);
0x2a9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2aa: PushEmpty(cvector, cvector)
0x2ab: Push([0.0, 1.0, 0.0])
0x2ac: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ad: Call2 0x30c

0x2ae: Pop(1)
0x2af: Push((int) 25)
0x2b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b2: Push([0.0, 10.0, 0.0])
0x2b3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b5: @ IsOverrideActive(Stack[-2])
0x2b6: Pop(0)
0x2b7: Push(Stack[-2])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-21] = (bool) 0
0x2ba: Return(); Pop(18)

0x2bb: @ StopWorld()
0x2bc: Pop(0)
0x2bd: @ CameraTransit(Stack[-3], Stack[-5])
0x2be: Pop(0)
0x2bf: Push(CvectorIndex(Stack[-4], 0))
0x2c0: Push(CvectorIndex(Stack[-5], 2))
0x2c1: @ Rotate(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x390

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: GOTO 0x2d0

0x2c8: Push("head") // @poff=186
0x2c9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ca: Pop(1)
0x2cb: Push(Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cd: Push("head") // @poff=186
0x2ce: @ LookAsyncCamera(Stack[-1])
0x2cf: Pop(1)
0x2d0: @ CameraWaitForPlayFinish()
0x2d1: Pop(0)
0x2d2: @ ResumeWorld()
0x2d3: Pop(0)
0x2d4: Stack[-21] = (bool) 1
0x2d5: Return(); Pop(18)

0x2d6: PushEmpty(bool, bool)
0x2d7: @ CameraSwitchToNormal()
0x2d8: Pop(0)
0x2d9: PushEmpty(bool)
0x2da: Call2 0x390

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2e6

0x2de: Push("head") // @poff=186
0x2df: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e0: Pop(1)
0x2e1: Push(Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e3: Push("head") // @poff=186
0x2e4: @ UnlookAsync(Stack[-1])
0x2e5: Pop(1)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(float, float, float, float)
0x2e8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2e9: Pop(0)
0x2ea: Push((bool) 0)
0x2eb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(1)
0x2ed: Return(); Pop(4)

0x2ee: PushEmpty(float, float, float, float)
0x2ef: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f0: Pop(0)
0x2f1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f2: Pop(0)
0x2f3: Return(); Pop(4)

0x2f4: PushEmpty(float, cvector, float, cvector)
0x2f5: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2f6: Pop(0)
0x2f7: Stack[-1] = [0.0, 0.0, 0.0]
0x2f8: Push(CvectorIndex(Stack[-1], 1))
0x2f9: Stack[-3] = Stack[-1]
0x2fa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fb: Push("head") // @poff=186
0x2fc: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2fd: Pop(1)
0x2fe: Return(); Pop(4)

0x2ff: PushEmpty(bool)
0x300: Call2 0x390

0x301: Pop(0)
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: @ lshStopSpeech()
0x304: Pop(0)
0x305: Return(); Pop(0)

0x306: PushEmpty(object, object)
0x307: @ self(Stack[-1])
0x308: Pop(0)
0x309: Stack[-1] = Stack[-3]
0x30a: Return(); Pop(2)

0x30b: Stack[-1] = 0
0x30c: PushEmpty(float, float)
0x30d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30f: Push((float)9.999999974752427e-07)
0x310: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Stack[-4] = [0.0, 0.0, 0.0]
0x313: Return(); Pop(2)

0x314: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x315: Return(); Pop(2)

0x316: PushEmpty(int, int)
0x317: @ GetVariable(Stack[-3], Stack[-1])
0x318: Pop(0)
0x319: Stack[-1] = Stack[-4]
0x31a: Return(); Pop(2)

0x31b: PushEmpty()
0x31c: Push("ook9Littlegirl1") // @poff=222
0x31d: Push((int) 1)
0x31e: @ SetVariable(Stack[-2], Stack[-1])
0x31f: Pop(2)
0x320: Return(); Pop(0)

0x321: PushEmpty()
0x322: PushEmpty(int, string)
0x323: Stack[-1] = "k9q01ChildTalk" // @poff=254
0x324: Call2 0x316

0x325: Pop(1)
0x326: Push((int) 0)
0x327: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x329: Push("k9q01ChildTalk") // @poff=254
0x32a: Push((int) 1)
0x32b: @ SetVariable(Stack[-2], Stack[-1])
0x32c: Pop(2)
0x32d: Push("k9q01") // @poff=284
0x32e: Push((int) 7)
0x32f: @ SetVariable(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: PushEmpty()
0x332: Call2 0x341

0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: PushEmpty(int, string)
0x337: Stack[-1] = "ook9Littlegirl1" // @poff=222
0x338: Call2 0x316

0x339: Pop(1)
0x33a: Push((int) 0)
0x33b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-2] = (bool) 1
0x33e: Return(); Pop(0)

0x33f: Stack[-2] = (bool) 0
0x340: Return(); Pop(0)

0x341: PushEmpty(object, object)
0x342: Push((int) 524)
0x343: Push((int) 1)
0x344: Push((int) 529816)
0x345: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: PushEmpty(bool, object, int)
0x348: Stack[-4] = Stack[-2]
0x349: Stack[-1] = (int) 517
0x34a: Call2 0x35b

0x34b: Pop(3)
0x34c: Return(); Pop(2)

0x34d: Stack[-1] = 0
0x34e: PushEmpty(object, object)
0x34f: @ GetDiaryRoot(Stack[-1])
0x350: Pop(0)
0x351: Pop(0); Push((bool) Stack[-1] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x353: Push("Can't retrieve diary root") // @poff=296
0x354: @ Trace(Stack[-1])
0x355: Pop(1)
0x356: Stack[-3] = (bool) 0
0x357: Return(); Pop(2)

0x358: Stack[-1] = Stack[-3]
0x359: Return(); Pop(2)

0x35a: Stack[-1] = 0
0x35b: PushEmpty(object, object, int, object, object, int)
0x35c: PushEmpty(object)
0x35d: Call2 0x34e

0x35e: Stack[-1] = Stack[-4]
0x35f: Pop(1)
0x360: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=348
0x361: Pop(0)
0x362: Pop(0); Push((bool) Stack[-2] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x364: Push("Can't find diary parent with id: ") // @poff=353
0x365: Pop(1); Push(Stack[-1] + Stack[-8]);
0x366: @ Trace(Stack[-1])
0x367: Pop(1)
0x368: Stack[-9] = (bool) 0
0x369: Return(); Pop(6)

0x36a: @@ AddChild(Stack[-8]); Obj=2 // @poff=421
0x36b: Pop(0)
0x36c: Push((int) 7)
0x36d: @ SendWorldWndMessage(Stack[-1])
0x36e: Pop(1)
0x36f: @@ GetCategory(Stack[-1]); Obj=8 // @poff=430
0x370: Pop(0)
0x371: @ SetDiarySection(Stack[-1])
0x372: Pop(0)
0x373: Stack[-9] = (bool) 0
0x374: Return(); Pop(6)

0x375: Stack[-2] = 0
0x376: Stack[-3] = 0
0x377: PushEmpty(int, int)
0x378: Push("branch") // @poff=442
0x379: @ GetVariable(Stack[-1], Stack[-2])
0x37a: Pop(1)
0x37b: Push((int) 0)
0x37c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37e: Stack[-3] = (int) 1
0x37f: Return(); Pop(2)

0x380: GOTO 0x386

0x381: Push((int) 1)
0x382: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-3] = (int) 2
0x385: Return(); Pop(2)

0x386: Stack[-3] = (int) 3
0x387: Return(); Pop(2)

0x388: Stack[-1] = (int) 515561
0x389: Return(); Pop(0)

0x38a: Stack[-1] = (int) 503346
0x38b: Return(); Pop(0)

0x38c: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=456
0x38d: Return(); Pop(0)

0x38e: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=496
0x38f: Return(); Pop(0)

0x390: Stack[-1] = (bool) 0
0x391: Return(); Pop(0)

0x392: PushEmpty(string, string)
0x393: Stack[-1] = "idle" // @poff=146
0x394: Push(Stack[-3])
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x397: Stack[-1] = Stack[-4]
0x398: Return(); Pop(2)

0x399: PushEmpty(int, bool, int, bool)
0x39a: Stack[-2] = (int) 0
0x39b: Push("all") // @poff=138
0x39c: PushEmpty(string, int)
0x39d: Stack[-5] = Stack[-1]
0x39e: Call2 0x392

0x39f: Pop(1)
0x3a0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(2)
0x3a2: Pop(0); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3a8

0x3a5: Push((int) 1)
0x3a6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3a7: GOTO 0x39b

0x3a8: Stack[-2] = Stack[-5]
0x3a9: Return(); Pop(4)

