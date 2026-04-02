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
	W:k4q02
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006b0034007100300032000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1a0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1a6 Vars = (object)
		EVENT_26 Op = 0x1de Vars = (string)
		EVENT_5 Op = 0x1e6 Vars = ()
		EVENT_6 Op = 0x1eb Vars = ()
		EVENT_7 Op = 0x22a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2b2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3b1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3af

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3b3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3b5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x39e

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
0x41: Call2 0x2f6

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
0x52: Call2 0x35c

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x98

0x58: Pop(1)
0x59: Push((int) 525772)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 525773)
0x5f: Push((int) 27086)
0x60: Push((int) 27085)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 540955)
0x64: Push((int) 43044)
0x65: Push((int) 43040)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x7a

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0x98

0x6c: Pop(1)
0x6d: Push((int) 525779)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 525780)
0x73: Push((int) -1)
0x74: Push((int) 27092)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x3b7

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x307

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
0x9a: Call2 0x3b7

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
0xaa: Call2 0x30e

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x31f

0xb3: Pop(0)
0xb4: Push((int) 27089)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x353

0xbb: Pop(2)
0xbc: Push((int) 27090)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x353

0xc3: Pop(2)
0xc4: Push((int) 27084)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x35c

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x98

0xcf: Pop(1)
0xd0: Push((int) 525772)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: Push((int) 525773)
0xd6: Push((int) 27086)
0xd7: Push((int) 27085)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Push((int) 540955)
0xdb: Push((int) 43044)
0xdc: Push((int) 43040)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0x98

0xe3: Pop(1)
0xe4: Push((int) 525779)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: Push((int) 525780)
0xea: Push((int) -1)
0xeb: Push((int) 27092)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 27086)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 525774)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 540956)
0xfc: Push((int) 43044)
0xfd: Push((int) 43041)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Push((int) 540958)
0x101: Push((int) 43042)
0x102: Push((int) 43043)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 43042)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x98

0x10c: Pop(1)
0x10d: Push((int) 540957)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 540963)
0x113: Push((int) 43045)
0x114: Push((int) 43048)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 43044)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral" // @poff=89
0x11d: Call2 0x98

0x11e: Pop(1)
0x11f: Push((int) 540959)
0x120: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x121: Pop(1)
0x122: @@@ ClearReplies(); Obj=0 // @poff=116
0x123: Pop(0)
0x124: Push((int) 540960)
0x125: Push((int) 43046)
0x126: Push((int) 43045)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Push((int) 525775)
0x12a: Push((int) 27088)
0x12b: Push((int) 27087)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 27088)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral" // @poff=89
0x134: Call2 0x98

0x135: Pop(1)
0x136: Push((int) 525776)
0x137: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x138: Pop(1)
0x139: @@@ ClearReplies(); Obj=0 // @poff=116
0x13a: Pop(0)
0x13b: Push((int) 540969)
0x13c: Push((int) 43053)
0x13d: Push((int) 43056)
0x13e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 43046)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral" // @poff=89
0x146: Call2 0x98

0x147: Pop(1)
0x148: Push((int) 540961)
0x149: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14a: Pop(1)
0x14b: @@@ ClearReplies(); Obj=0 // @poff=116
0x14c: Pop(0)
0x14d: Push((int) 540962)
0x14e: Push((int) 43050)
0x14f: Push((int) 43047)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Push((int) 540967)
0x153: Push((int) 43055)
0x154: Push((int) 43054)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 43055)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral" // @poff=89
0x15d: Call2 0x98

0x15e: Pop(1)
0x15f: Push((int) 540968)
0x160: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x161: Pop(1)
0x162: @@@ ClearReplies(); Obj=0 // @poff=116
0x163: Pop(0)
0x164: Push((int) 540970)
0x165: Push((int) 43053)
0x166: Push((int) 43057)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 43050)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=89
0x16f: Call2 0x98

0x170: Pop(1)
0x171: Push((int) 540964)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=116
0x175: Pop(0)
0x176: Push((int) 540965)
0x177: Push((int) 43053)
0x178: Push((int) 43052)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 43053)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Neutral" // @poff=89
0x181: Call2 0x98

0x182: Pop(1)
0x183: Push((int) 540966)
0x184: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x185: Pop(1)
0x186: @@@ ClearReplies(); Obj=0 // @poff=116
0x187: Pop(0)
0x188: Push((int) 525777)
0x189: Push((int) -1)
0x18a: Push((int) 27089)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Push((int) 525778)
0x18e: Push((int) -1)
0x18f: Push((int) 27090)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x194: PushEmpty(bool)
0x195: Call2 0x3b7

0x196: Pop(0)
0x197: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x198: @ lshStopAnimation()
0x199: Pop(0)
0x19a: GOTO 0x19d

0x19b: @ StopAnimation()
0x19c: Pop(0)
0x19d: Return(); Pop(0)

0x19e: GOTO 0xaf

0x19f: Return(); Pop(0)

0x1a0: PushEmpty(float, float)
0x1a1: Stack[-2] = (int) 300
0x1a2: Stack[-1] = (int) 100
0x1a3: Call2 0x1b1

0x1a4: Pop(2)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty()
0x1a7: PushEmpty()
0x1a8: Call2 0x241

0x1a9: Pop(0)
0x1aa: PushEmpty(int, object)
0x1ab: Stack[-3] = Stack[-1]
0x1ac: Push(-2, 1); TaskCall(0)
0x1ad: Call2 0x0

0x1ae: Pop(-2, 1); TaskReturn
0x1af: Pop(2)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(float, float)
0x1b2: PushEmpty(bool)
0x1b3: Call2 0x2ad

0x1b4: Pop(0)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: @ Hold()
0x1b8: Pop(0)
0x1b9: GOTO 0x1b2

0x1ba: Push((int) 3)
0x1bb: @ rand(Stack[-2], Stack[-1])
0x1bc: Pop(1)
0x1bd: Push((int) 3)
0x1be: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1bf: @ Sleep(Stack[-1])
0x1c0: Pop(1)
0x1c1: PushEmpty(float, float)
0x1c2: Stack[-6] = Stack[-2]
0x1c3: Stack[-5] = Stack[-1]
0x1c4: Call2 0x200

0x1c5: Pop(2)
0x1c6: @ sync()
0x1c7: Pop(0)
0x1c8: GOTO 0x1b2

0x1c9: Return(); Pop(2)

0x1ca: PushEmpty(bool, bool)
0x1cb: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1cc: @ IsLoaded(Stack[-1])
0x1cd: Pop(0)
0x1ce: PushEmpty(bool)
0x1cf: Stack[-1] = (bool) 0
0x1d0: Pop(0); Push((bool) Stack[-2] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1fe

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[-1] = (bool) 1
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object)
0x1d9: Call2 0x326

0x1da: Pop(0)
0x1db: @ RemoveActor(Stack[-1])
0x1dc: Pop(1)
0x1dd: Return(); Pop(2)

0x1de: PushEmpty()
0x1df: Push("cleanup") // @poff=156
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e2: PushEmpty()
0x1e3: Call2 0x1ca

0x1e4: Pop(0)
0x1e5: Return(); Pop(0)

0x1e6: @ StopGroup0()
0x1e7: Pop(0)
0x1e8: @ sync()
0x1e9: Pop(0)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: Call2 0x241

0x1ed: Pop(0)
0x1ee: PushEmpty(bool)
0x1ef: Stack[-1] = (bool) 0
0x1f0: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: PushEmpty(bool)
0x1f3: Call2 0x1fe

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 1
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: PushEmpty(object)
0x1f9: Call2 0x326

0x1fa: Pop(0)
0x1fb: @ RemoveActor(Stack[-1])
0x1fc: Pop(1)
0x1fd: Return(); Pop(0)

0x1fe: Stack[-1] = (bool) 1
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: PushEmpty(bool)
0x202: Call2 0x2ad

0x203: Pop(0)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Return(); Pop(0)

0x207: Push("player") // @poff=172
0x208: @ FindActor(Stack[-4]T, Stack[-1])
0x209: Pop(1)
0x20a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x20c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x20d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x20e: Push((int) 10)
0x20f: Push((float)1.0)
0x210: @ SetTimer(Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: PushEmpty()
0x213: Call2 0x24f

0x214: Pop(0)
0x215: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: Push((int) 10)
0x218: @ KillTimer(Stack[-1])
0x219: Pop(1)
0x21a: Return(); Pop(0)

0x21b: PushEmpty(float, float)
0x21c: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-3] = (bool) 0
0x21f: Return(); Pop(2)

0x220: PushEmpty(float, object)
0x221: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x222: Call2 0x2a5

0x223: Pop(1)
0x224: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x225: Push( Stack[2 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x228: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x229: Return(); Pop(2)

0x22a: PushEmpty()
0x22b: Push((int) 10)
0x22c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x21b

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x232: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: PushEmpty(object)
0x235: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x236: Call2 0x314

0x237: Pop(1)
0x238: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x239: GOTO 0x240

0x23a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23b: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23c: Push("head") // @poff=186
0x23d: @ UnlookAsync(Stack[-1])
0x23e: Pop(1)
0x23f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: Call2 0x2a0

0x243: Pop(0)
0x244: Push((int) 10)
0x245: @ KillTimer(Stack[-1])
0x246: Pop(1)
0x247: Push( Stack[2 + Tasks[-1].StackPointer] )
0x248: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x249: Push("head") // @poff=186
0x24a: @ UnlookAsync(Stack[-1])
0x24b: Pop(1)
0x24c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24e: Return(); Pop(0)

0x24f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x250: @ WaitForAnimEnd()
0x251: Pop(0)
0x252: PushEmpty(bool)
0x253: Call2 0x2ad

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Return(); Pop(14)

0x258: PushEmpty(int)
0x259: Call2 0x342

0x25a: Stack[-1] = Stack[-8]
0x25b: Pop(1)
0x25c: Stack[-6] = (int) 0
0x25d: PushEmpty(bool)
0x25e: Stack[-1] = (bool) 0
0x25f: Push((int) 5)
0x260: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(bool)
0x263: Call2 0x2ad

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 1
0x267: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x268: Push((int) 3)
0x269: @ irand(Stack[-6], Stack[-1])
0x26a: Pop(1)
0x26b: Push((int) 0)
0x26c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x26e: Push(Stack[-7])
0x26f: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x270: @ irand(Stack[-4], Stack[-7])
0x271: Pop(0)
0x272: Push("all") // @poff=138
0x273: PushEmpty(string, int)
0x274: Stack[-7] = Stack[-1]
0x275: Call2 0x33b

0x276: Pop(1)
0x277: @ PlayAnimation(Stack[-2], Stack[-1])
0x278: Pop(2)
0x279: @ WaitForAnimEnd(Stack[-3])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-3] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x29b

0x27e: GOTO 0x290

0x27f: Push((int) 1)
0x280: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x282: Push((int) 4)
0x283: @ rand(Stack[-3], Stack[-1])
0x284: Pop(1)
0x285: Push((int) 1)
0x286: Pop(1); Push(Stack[-3] + Stack[-1]);
0x287: @ Sleep(Stack[-1], Stack[-2])
0x288: Pop(1)
0x289: Pop(0); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x29b

0x28c: GOTO 0x290

0x28d: Push(Stack[-6])
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: GOTO 0x29b

0x290: PushEmpty(bool)
0x291: Call2 0x29e

0x292: Pop(0)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x29b

0x296: @ ResetAAS()
0x297: Pop(0)
0x298: Push((int) 1)
0x299: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x29a: GOTO 0x25d

0x29b: @ ResetAAS()
0x29c: Pop(0)
0x29d: Return(); Pop(14)

0x29e: Stack[-1] = (bool) 1
0x29f: Return(); Pop(0)

0x2a0: @ StopAnimation()
0x2a1: Pop(0)
0x2a2: @ StopGroup0()
0x2a3: Pop(0)
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2a6: @ GetPosition(Stack[-3])
0x2a7: Pop(0)
0x2a8: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x2a9: Pop(0)
0x2aa: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2ab: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ac: Return(); Pop(6)

0x2ad: PushEmpty(bool, bool)
0x2ae: @ IsLoaded(Stack[-1])
0x2af: Pop(0)
0x2b0: Stack[-1] = Stack[-3]
0x2b1: Return(); Pop(2)

0x2b2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b3: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x2b4: Pop(0)
0x2b5: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x2b6: Pop(0)
0x2b7: Push(CvectorIndex(Stack[-8], 1))
0x2b8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ba: @ GetPosition(Stack[-7])
0x2bb: Pop(0)
0x2bc: @ GetEyesHeight(Stack[-9])
0x2bd: Pop(0)
0x2be: Push(CvectorIndex(Stack[-7], 1))
0x2bf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2c1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2c2: Push(CvectorIndex(Stack[-6], 1))
0x2c3: Stack[-1] = (int) 0
0x2c4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c6: Pop(1); Push(Sqrt(Stack[-1]))
0x2c7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c8: Stack[-5] = -Stack[-6]; Pop(0);
0x2c9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ca: PushEmpty(cvector, cvector)
0x2cb: Push([0.0, 1.0, 0.0])
0x2cc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2cd: Call2 0x32c

0x2ce: Pop(1)
0x2cf: Push((int) 25)
0x2d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d2: Push([0.0, 10.0, 0.0])
0x2d3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d5: @ IsOverrideActive(Stack[-2])
0x2d6: Pop(0)
0x2d7: Push(Stack[-2])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-21] = (bool) 0
0x2da: Return(); Pop(18)

0x2db: @ StopWorld()
0x2dc: Pop(0)
0x2dd: @ CameraTransit(Stack[-3], Stack[-5])
0x2de: Pop(0)
0x2df: Push(CvectorIndex(Stack[-4], 0))
0x2e0: Push(CvectorIndex(Stack[-5], 2))
0x2e1: @ Rotate(Stack[-2], Stack[-1])
0x2e2: Pop(2)
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x3b7

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x2f0

0x2e8: Push("head") // @poff=186
0x2e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: Push(Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: Push("head") // @poff=186
0x2ee: @ LookAsyncCamera(Stack[-1])
0x2ef: Pop(1)
0x2f0: @ CameraWaitForPlayFinish()
0x2f1: Pop(0)
0x2f2: @ ResumeWorld()
0x2f3: Pop(0)
0x2f4: Stack[-21] = (bool) 1
0x2f5: Return(); Pop(18)

0x2f6: PushEmpty(bool, bool)
0x2f7: @ CameraSwitchToNormal()
0x2f8: Pop(0)
0x2f9: PushEmpty(bool)
0x2fa: Call2 0x3b7

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: GOTO 0x306

0x2fe: Push("head") // @poff=186
0x2ff: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x300: Pop(1)
0x301: Push(Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x303: Push("head") // @poff=186
0x304: @ UnlookAsync(Stack[-1])
0x305: Pop(1)
0x306: Return(); Pop(2)

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

0x314: PushEmpty(float, cvector, float, cvector)
0x315: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x316: Pop(0)
0x317: Stack[-1] = [0.0, 0.0, 0.0]
0x318: Push(CvectorIndex(Stack[-1], 1))
0x319: Stack[-3] = Stack[-1]
0x31a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x31b: Push("head") // @poff=186
0x31c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x31d: Pop(1)
0x31e: Return(); Pop(4)

0x31f: PushEmpty(bool)
0x320: Call2 0x3b7

0x321: Pop(0)
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: @ lshStopSpeech()
0x324: Pop(0)
0x325: Return(); Pop(0)

0x326: PushEmpty(object, object)
0x327: @ self(Stack[-1])
0x328: Pop(0)
0x329: Stack[-1] = Stack[-3]
0x32a: Return(); Pop(2)

0x32b: Stack[-1] = 0
0x32c: PushEmpty(float, float)
0x32d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x32e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32f: Push((float)9.999999974752427e-07)
0x330: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-4] = [0.0, 0.0, 0.0]
0x333: Return(); Pop(2)

0x334: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x335: Return(); Pop(2)

0x336: PushEmpty(int, int)
0x337: @ GetVariable(Stack[-3], Stack[-1])
0x338: Pop(0)
0x339: Stack[-1] = Stack[-4]
0x33a: Return(); Pop(2)

0x33b: PushEmpty(string, string)
0x33c: Stack[-1] = "idle" // @poff=146
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x340: Stack[-1] = Stack[-4]
0x341: Return(); Pop(2)

0x342: PushEmpty(int, bool, int, bool)
0x343: Stack[-2] = (int) 0
0x344: Push("all") // @poff=138
0x345: PushEmpty(string, int)
0x346: Stack[-5] = Stack[-1]
0x347: Call2 0x33b

0x348: Pop(1)
0x349: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: Pop(0); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x351

0x34e: Push((int) 1)
0x34f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x350: GOTO 0x344

0x351: Stack[-2] = Stack[-5]
0x352: Return(); Pop(4)

0x353: PushEmpty()
0x354: Push("k4q02") // @poff=222
0x355: Push((int) 3)
0x356: @ SetVariable(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: PushEmpty()
0x359: Call2 0x368

0x35a: Pop(0)
0x35b: Return(); Pop(0)

0x35c: PushEmpty()
0x35d: PushEmpty(int, string)
0x35e: Stack[-1] = "k4q02" // @poff=222
0x35f: Call2 0x336

0x360: Pop(1)
0x361: Push((int) 2)
0x362: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-2] = (bool) 1
0x365: Return(); Pop(0)

0x366: Stack[-2] = (bool) 0
0x367: Return(); Pop(0)

0x368: PushEmpty(object, object)
0x369: Push((int) 382)
0x36a: Push((int) 2)
0x36b: Push((int) 525788)
0x36c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36d: Pop(3)
0x36e: PushEmpty(bool, object, int)
0x36f: Stack[-4] = Stack[-2]
0x370: Stack[-1] = (int) 378
0x371: Call2 0x382

0x372: Pop(3)
0x373: Return(); Pop(2)

0x374: Stack[-1] = 0
0x375: PushEmpty(object, object)
0x376: @ GetDiaryRoot(Stack[-1])
0x377: Pop(0)
0x378: Pop(0); Push((bool) Stack[-1] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: Push("Can't retrieve diary root") // @poff=234
0x37b: @ Trace(Stack[-1])
0x37c: Pop(1)
0x37d: Stack[-3] = (bool) 0
0x37e: Return(); Pop(2)

0x37f: Stack[-1] = Stack[-3]
0x380: Return(); Pop(2)

0x381: Stack[-1] = 0
0x382: PushEmpty(object, object, int, object, object, int)
0x383: PushEmpty(object)
0x384: Call2 0x375

0x385: Stack[-1] = Stack[-4]
0x386: Pop(1)
0x387: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=286
0x388: Pop(0)
0x389: Pop(0); Push((bool) Stack[-2] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38b: Push("Can't find diary parent with id: ") // @poff=291
0x38c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38d: @ Trace(Stack[-1])
0x38e: Pop(1)
0x38f: Stack[-9] = (bool) 0
0x390: Return(); Pop(6)

0x391: @@ AddChild(Stack[-8]); Obj=2 // @poff=359
0x392: Pop(0)
0x393: Push((int) 7)
0x394: @ SendWorldWndMessage(Stack[-1])
0x395: Pop(1)
0x396: @@ GetCategory(Stack[-1]); Obj=8 // @poff=368
0x397: Pop(0)
0x398: @ SetDiarySection(Stack[-1])
0x399: Pop(0)
0x39a: Stack[-9] = (bool) 0
0x39b: Return(); Pop(6)

0x39c: Stack[-2] = 0
0x39d: Stack[-3] = 0
0x39e: PushEmpty(int, int)
0x39f: Push("branch") // @poff=380
0x3a0: @ GetVariable(Stack[-1], Stack[-2])
0x3a1: Pop(1)
0x3a2: Push((int) 0)
0x3a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a5: Stack[-3] = (int) 1
0x3a6: Return(); Pop(2)

0x3a7: GOTO 0x3ad

0x3a8: Push((int) 1)
0x3a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[-3] = (int) 2
0x3ac: Return(); Pop(2)

0x3ad: Stack[-3] = (int) 3
0x3ae: Return(); Pop(2)

0x3af: Stack[-1] = (int) 518716
0x3b0: Return(); Pop(0)

0x3b1: Stack[-1] = (int) 518715
0x3b2: Return(); Pop(0)

0x3b3: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=394
0x3b4: Return(); Pop(0)

0x3b5: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=434
0x3b6: Return(); Pop(0)

0x3b7: Stack[-1] = (bool) 0
0x3b8: Return(); Pop(0)

