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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:b11q04
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e00670000006200310031007100300034000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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

RunOp = 0x165
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x16b Vars = (object)
		EVENT_26 Op = 0x1a3 Vars = (string)
		EVENT_5 Op = 0x1ab Vars = ()
		EVENT_6 Op = 0x1b0 Vars = ()
		EVENT_7 Op = 0x1ef Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x277

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x31a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x318

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x31c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x31e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x36d

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
0x41: Call2 0x2bb

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
0x52: Call2 0x32b

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x98

0x58: Pop(1)
0x59: Push((int) 530515)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 530516)
0x5f: Push((int) 32774)
0x60: Push((int) 31875)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x7a

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 530523)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 530524)
0x6e: Push((int) -1)
0x6f: Push((int) 31883)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 531426)
0x73: Push((int) -1)
0x74: Push((int) 32770)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x320

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x2cc

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
0x9a: Call2 0x320

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
0xaa: Call2 0x2d3

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x2e4

0xb3: Pop(0)
0xb4: Push((int) 31881)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x322

0xbb: Pop(2)
0xbc: Push((int) 32782)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x322

0xc3: Pop(2)
0xc4: Push((int) 31874)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x32b

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x98

0xcf: Pop(1)
0xd0: Push((int) 530515)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: Push((int) 530516)
0xd6: Push((int) 32774)
0xd7: Push((int) 31875)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral" // @poff=89
0xdd: Call2 0x98

0xde: Pop(1)
0xdf: Push((int) 530523)
0xe0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe1: Pop(1)
0xe2: @@@ ClearReplies(); Obj=0 // @poff=116
0xe3: Pop(0)
0xe4: Push((int) 530524)
0xe5: Push((int) -1)
0xe6: Push((int) 31883)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Push((int) 531426)
0xea: Push((int) -1)
0xeb: Push((int) 32770)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 32774)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 531430)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 531431)
0xfc: Push((int) 32772)
0xfd: Push((int) 32775)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 32772)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral" // @poff=89
0x106: Call2 0x98

0x107: Pop(1)
0x108: Push((int) 531428)
0x109: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10a: Pop(1)
0x10b: @@@ ClearReplies(); Obj=0 // @poff=116
0x10c: Pop(0)
0x10d: Push((int) 531429)
0x10e: Push((int) 31876)
0x10f: Push((int) 32773)
0x110: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x111: Pop(3)
0x112: Push((int) 531432)
0x113: Push((int) 31876)
0x114: Push((int) 32776)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 31876)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral" // @poff=89
0x11d: Call2 0x98

0x11e: Pop(1)
0x11f: Push((int) 530517)
0x120: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x121: Pop(1)
0x122: @@@ ClearReplies(); Obj=0 // @poff=116
0x123: Pop(0)
0x124: Push((int) 530518)
0x125: Push((int) 31880)
0x126: Push((int) 31877)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Push((int) 531433)
0x12a: Push((int) 32779)
0x12b: Push((int) 32778)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 32779)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral" // @poff=89
0x134: Call2 0x98

0x135: Pop(1)
0x136: Push((int) 531434)
0x137: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x138: Pop(1)
0x139: @@@ ClearReplies(); Obj=0 // @poff=116
0x13a: Pop(0)
0x13b: Push((int) 531435)
0x13c: Push((int) 31880)
0x13d: Push((int) 32780)
0x13e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 31880)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral" // @poff=89
0x146: Call2 0x98

0x147: Pop(1)
0x148: Push((int) 530521)
0x149: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14a: Pop(1)
0x14b: @@@ ClearReplies(); Obj=0 // @poff=116
0x14c: Pop(0)
0x14d: Push((int) 530522)
0x14e: Push((int) -1)
0x14f: Push((int) 31881)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Push((int) 531436)
0x153: Push((int) -1)
0x154: Push((int) 32782)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x159: PushEmpty(bool)
0x15a: Call2 0x320

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15d: @ lshStopAnimation()
0x15e: Pop(0)
0x15f: GOTO 0x162

0x160: @ StopAnimation()
0x161: Pop(0)
0x162: Return(); Pop(0)

0x163: GOTO 0xaf

0x164: Return(); Pop(0)

0x165: PushEmpty(float, float)
0x166: Stack[-2] = (int) 300
0x167: Stack[-1] = (int) 100
0x168: Call2 0x176

0x169: Pop(2)
0x16a: Return(); Pop(0)

0x16b: PushEmpty()
0x16c: PushEmpty()
0x16d: Call2 0x206

0x16e: Pop(0)
0x16f: PushEmpty(int, object)
0x170: Stack[-3] = Stack[-1]
0x171: Push(-2, 1); TaskCall(0)
0x172: Call2 0x0

0x173: Pop(-2, 1); TaskReturn
0x174: Pop(2)
0x175: Return(); Pop(0)

0x176: PushEmpty(float, float)
0x177: PushEmpty(bool)
0x178: Call2 0x272

0x179: Pop(0)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17c: @ Hold()
0x17d: Pop(0)
0x17e: GOTO 0x177

0x17f: Push((int) 3)
0x180: @ rand(Stack[-2], Stack[-1])
0x181: Pop(1)
0x182: Push((int) 3)
0x183: Pop(1); Push(Stack[-2] + Stack[-1]);
0x184: @ Sleep(Stack[-1])
0x185: Pop(1)
0x186: PushEmpty(float, float)
0x187: Stack[-6] = Stack[-2]
0x188: Stack[-5] = Stack[-1]
0x189: Call2 0x1c5

0x18a: Pop(2)
0x18b: @ sync()
0x18c: Pop(0)
0x18d: GOTO 0x177

0x18e: Return(); Pop(2)

0x18f: PushEmpty(bool, bool)
0x190: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x191: @ IsLoaded(Stack[-1])
0x192: Pop(0)
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: Pop(0); Push((bool) Stack[-2] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: PushEmpty(bool)
0x198: Call2 0x1c3

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Call2 0x2eb

0x19f: Pop(0)
0x1a0: @ RemoveActor(Stack[-1])
0x1a1: Pop(1)
0x1a2: Return(); Pop(2)

0x1a3: PushEmpty()
0x1a4: Push("cleanup") // @poff=156
0x1a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x18f

0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: @ StopGroup0()
0x1ac: Pop(0)
0x1ad: @ sync()
0x1ae: Pop(0)
0x1af: Return(); Pop(0)

0x1b0: PushEmpty()
0x1b1: Call2 0x206

0x1b2: Pop(0)
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: PushEmpty(bool)
0x1b8: Call2 0x1c3

0x1b9: Pop(0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Stack[-1] = (bool) 1
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object)
0x1be: Call2 0x2eb

0x1bf: Pop(0)
0x1c0: @ RemoveActor(Stack[-1])
0x1c1: Pop(1)
0x1c2: Return(); Pop(0)

0x1c3: Stack[-1] = (bool) 1
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: PushEmpty(bool)
0x1c7: Call2 0x272

0x1c8: Pop(0)
0x1c9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Return(); Pop(0)

0x1cc: Push("player") // @poff=172
0x1cd: @ FindActor(Stack[-4]T, Stack[-1])
0x1ce: Pop(1)
0x1cf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d1: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d3: Push((int) 10)
0x1d4: Push((float)1.0)
0x1d5: @ SetTimer(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: PushEmpty()
0x1d8: Call2 0x214

0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dc: Push((int) 10)
0x1dd: @ KillTimer(Stack[-1])
0x1de: Pop(1)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty(float, float)
0x1e1: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e3: Stack[-3] = (bool) 0
0x1e4: Return(); Pop(2)

0x1e5: PushEmpty(float, object)
0x1e6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e7: Call2 0x26a

0x1e8: Pop(1)
0x1e9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ea: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ed: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ee: Return(); Pop(2)

0x1ef: PushEmpty()
0x1f0: Push((int) 10)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f3: PushEmpty(bool)
0x1f4: Call2 0x1e0

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: PushEmpty(object)
0x1fa: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fb: Call2 0x2d9

0x1fc: Pop(1)
0x1fd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1fe: GOTO 0x205

0x1ff: Push( Stack[2 + Tasks[-1].StackPointer] )
0x200: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x201: Push("head") // @poff=186
0x202: @ UnlookAsync(Stack[-1])
0x203: Pop(1)
0x204: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x205: Return(); Pop(0)

0x206: PushEmpty()
0x207: Call2 0x265

0x208: Pop(0)
0x209: Push((int) 10)
0x20a: @ KillTimer(Stack[-1])
0x20b: Pop(1)
0x20c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20d: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20e: Push("head") // @poff=186
0x20f: @ UnlookAsync(Stack[-1])
0x210: Pop(1)
0x211: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x212: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x213: Return(); Pop(0)

0x214: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x215: @ WaitForAnimEnd()
0x216: Pop(0)
0x217: PushEmpty(bool)
0x218: Call2 0x272

0x219: Pop(0)
0x21a: Pop(1); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Return(); Pop(14)

0x21d: PushEmpty(int)
0x21e: Call2 0x307

0x21f: Stack[-1] = Stack[-8]
0x220: Pop(1)
0x221: Stack[-6] = (int) 0
0x222: PushEmpty(bool)
0x223: Stack[-1] = (bool) 0
0x224: Push((int) 5)
0x225: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: PushEmpty(bool)
0x228: Call2 0x272

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x22d: Push((int) 3)
0x22e: @ irand(Stack[-6], Stack[-1])
0x22f: Pop(1)
0x230: Push((int) 0)
0x231: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x233: Push(Stack[-7])
0x234: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x235: @ irand(Stack[-4], Stack[-7])
0x236: Pop(0)
0x237: Push("all") // @poff=138
0x238: PushEmpty(string, int)
0x239: Stack[-7] = Stack[-1]
0x23a: Call2 0x300

0x23b: Pop(1)
0x23c: @ PlayAnimation(Stack[-2], Stack[-1])
0x23d: Pop(2)
0x23e: @ WaitForAnimEnd(Stack[-3])
0x23f: Pop(0)
0x240: Pop(0); Push((bool) Stack[-3] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: GOTO 0x260

0x243: GOTO 0x255

0x244: Push((int) 1)
0x245: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x247: Push((int) 4)
0x248: @ rand(Stack[-3], Stack[-1])
0x249: Pop(1)
0x24a: Push((int) 1)
0x24b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x24c: @ Sleep(Stack[-1], Stack[-2])
0x24d: Pop(1)
0x24e: Pop(0); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x260

0x251: GOTO 0x255

0x252: Push(Stack[-6])
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x260

0x255: PushEmpty(bool)
0x256: Call2 0x263

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x260

0x25b: @ ResetAAS()
0x25c: Pop(0)
0x25d: Push((int) 1)
0x25e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x25f: GOTO 0x222

0x260: @ ResetAAS()
0x261: Pop(0)
0x262: Return(); Pop(14)

0x263: Stack[-1] = (bool) 1
0x264: Return(); Pop(0)

0x265: @ StopAnimation()
0x266: Pop(0)
0x267: @ StopGroup0()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x26b: @ GetPosition(Stack[-3])
0x26c: Pop(0)
0x26d: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x26e: Pop(0)
0x26f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x270: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x271: Return(); Pop(6)

0x272: PushEmpty(bool, bool)
0x273: @ IsLoaded(Stack[-1])
0x274: Pop(0)
0x275: Stack[-1] = Stack[-3]
0x276: Return(); Pop(2)

0x277: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x278: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x279: Pop(0)
0x27a: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-8], 1))
0x27d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27f: @ GetPosition(Stack[-7])
0x280: Pop(0)
0x281: @ GetEyesHeight(Stack[-9])
0x282: Pop(0)
0x283: Push(CvectorIndex(Stack[-7], 1))
0x284: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x285: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x286: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x287: Push(CvectorIndex(Stack[-6], 1))
0x288: Stack[-1] = (int) 0
0x289: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28b: Pop(1); Push(Sqrt(Stack[-1]))
0x28c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28d: Stack[-5] = -Stack[-6]; Pop(0);
0x28e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28f: PushEmpty(cvector, cvector)
0x290: Push([0.0, 1.0, 0.0])
0x291: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x292: Call2 0x2f1

0x293: Pop(1)
0x294: Push((int) 25)
0x295: Pop(2); Push(Stack[-2] * Stack[-1]);
0x296: Pop(2); Push(Stack[-2] + Stack[-1]);
0x297: Push([0.0, 10.0, 0.0])
0x298: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x299: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29a: @ IsOverrideActive(Stack[-2])
0x29b: Pop(0)
0x29c: Push(Stack[-2])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-21] = (bool) 0
0x29f: Return(); Pop(18)

0x2a0: @ StopWorld()
0x2a1: Pop(0)
0x2a2: @ CameraTransit(Stack[-3], Stack[-5])
0x2a3: Pop(0)
0x2a4: Push(CvectorIndex(Stack[-4], 0))
0x2a5: Push(CvectorIndex(Stack[-5], 2))
0x2a6: @ Rotate(Stack[-2], Stack[-1])
0x2a7: Pop(2)
0x2a8: PushEmpty(bool)
0x2a9: Call2 0x320

0x2aa: Pop(0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b5

0x2ad: Push("head") // @poff=186
0x2ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Push("head") // @poff=186
0x2b3: @ LookAsyncCamera(Stack[-1])
0x2b4: Pop(1)
0x2b5: @ CameraWaitForPlayFinish()
0x2b6: Pop(0)
0x2b7: @ ResumeWorld()
0x2b8: Pop(0)
0x2b9: Stack[-21] = (bool) 1
0x2ba: Return(); Pop(18)

0x2bb: PushEmpty(bool, bool)
0x2bc: @ CameraSwitchToNormal()
0x2bd: Pop(0)
0x2be: PushEmpty(bool)
0x2bf: Call2 0x320

0x2c0: Pop(0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2cb

0x2c3: Push("head") // @poff=186
0x2c4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push(Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c8: Push("head") // @poff=186
0x2c9: @ UnlookAsync(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(float, float, float, float)
0x2cd: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ce: Pop(0)
0x2cf: Push((bool) 0)
0x2d0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(4)

0x2d3: PushEmpty(float, float, float, float)
0x2d4: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2d5: Pop(0)
0x2d6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2d7: Pop(0)
0x2d8: Return(); Pop(4)

0x2d9: PushEmpty(float, cvector, float, cvector)
0x2da: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2db: Pop(0)
0x2dc: Stack[-1] = [0.0, 0.0, 0.0]
0x2dd: Push(CvectorIndex(Stack[-1], 1))
0x2de: Stack[-3] = Stack[-1]
0x2df: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e0: Push("head") // @poff=186
0x2e1: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2e2: Pop(1)
0x2e3: Return(); Pop(4)

0x2e4: PushEmpty(bool)
0x2e5: Call2 0x320

0x2e6: Pop(0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: @ lshStopSpeech()
0x2e9: Pop(0)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty(object, object)
0x2ec: @ self(Stack[-1])
0x2ed: Pop(0)
0x2ee: Stack[-1] = Stack[-3]
0x2ef: Return(); Pop(2)

0x2f0: Stack[-1] = 0
0x2f1: PushEmpty(float, float)
0x2f2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2f3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2f4: Push((float)9.999999974752427e-07)
0x2f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-4] = [0.0, 0.0, 0.0]
0x2f8: Return(); Pop(2)

0x2f9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(int, int)
0x2fc: @ GetVariable(Stack[-3], Stack[-1])
0x2fd: Pop(0)
0x2fe: Stack[-1] = Stack[-4]
0x2ff: Return(); Pop(2)

0x300: PushEmpty(string, string)
0x301: Stack[-1] = "idle" // @poff=146
0x302: Push(Stack[-3])
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x305: Stack[-1] = Stack[-4]
0x306: Return(); Pop(2)

0x307: PushEmpty(int, bool, int, bool)
0x308: Stack[-2] = (int) 0
0x309: Push("all") // @poff=138
0x30a: PushEmpty(string, int)
0x30b: Stack[-5] = Stack[-1]
0x30c: Call2 0x300

0x30d: Pop(1)
0x30e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: Pop(0); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: GOTO 0x316

0x313: Push((int) 1)
0x314: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x315: GOTO 0x309

0x316: Stack[-2] = Stack[-5]
0x317: Return(); Pop(4)

0x318: Stack[-1] = (int) 515597
0x319: Return(); Pop(0)

0x31a: Stack[-1] = (int) 514841
0x31b: Return(); Pop(0)

0x31c: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=222
0x31d: Return(); Pop(0)

0x31e: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=262
0x31f: Return(); Pop(0)

0x320: Stack[-1] = (bool) 0
0x321: Return(); Pop(0)

0x322: PushEmpty()
0x323: Push("b11q04") // @poff=306
0x324: Push((int) 3)
0x325: @ SetVariable(Stack[-2], Stack[-1])
0x326: Pop(2)
0x327: PushEmpty()
0x328: Call2 0x337

0x329: Pop(0)
0x32a: Return(); Pop(0)

0x32b: PushEmpty()
0x32c: PushEmpty(int, string)
0x32d: Stack[-1] = "b11q04" // @poff=306
0x32e: Call2 0x2fb

0x32f: Pop(1)
0x330: Push((int) 2)
0x331: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-2] = (bool) 1
0x334: Return(); Pop(0)

0x335: Stack[-2] = (bool) 0
0x336: Return(); Pop(0)

0x337: PushEmpty(object, object)
0x338: Push((int) 554)
0x339: Push((int) 2)
0x33a: Push((int) 530529)
0x33b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: PushEmpty(bool, object, int)
0x33e: Stack[-4] = Stack[-2]
0x33f: Stack[-1] = (int) 551
0x340: Call2 0x351

0x341: Pop(3)
0x342: Return(); Pop(2)

0x343: Stack[-1] = 0
0x344: PushEmpty(object, object)
0x345: @ GetDiaryRoot(Stack[-1])
0x346: Pop(0)
0x347: Pop(0); Push((bool) Stack[-1] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x349: Push("Can't retrieve diary root") // @poff=320
0x34a: @ Trace(Stack[-1])
0x34b: Pop(1)
0x34c: Stack[-3] = (bool) 0
0x34d: Return(); Pop(2)

0x34e: Stack[-1] = Stack[-3]
0x34f: Return(); Pop(2)

0x350: Stack[-1] = 0
0x351: PushEmpty(object, object, int, object, object, int)
0x352: PushEmpty(object)
0x353: Call2 0x344

0x354: Stack[-1] = Stack[-4]
0x355: Pop(1)
0x356: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=372
0x357: Pop(0)
0x358: Pop(0); Push((bool) Stack[-2] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35a: Push("Can't find diary parent with id: ") // @poff=377
0x35b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x35c: @ Trace(Stack[-1])
0x35d: Pop(1)
0x35e: Stack[-9] = (bool) 0
0x35f: Return(); Pop(6)

0x360: @@ AddChild(Stack[-8]); Obj=2 // @poff=445
0x361: Pop(0)
0x362: Push((int) 7)
0x363: @ SendWorldWndMessage(Stack[-1])
0x364: Pop(1)
0x365: @@ GetCategory(Stack[-1]); Obj=8 // @poff=454
0x366: Pop(0)
0x367: @ SetDiarySection(Stack[-1])
0x368: Pop(0)
0x369: Stack[-9] = (bool) 0
0x36a: Return(); Pop(6)

0x36b: Stack[-2] = 0
0x36c: Stack[-3] = 0
0x36d: PushEmpty(int, int)
0x36e: Push("branch") // @poff=466
0x36f: @ GetVariable(Stack[-1], Stack[-2])
0x370: Pop(1)
0x371: Push((int) 0)
0x372: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x374: Stack[-3] = (int) 1
0x375: Return(); Pop(2)

0x376: GOTO 0x37c

0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Stack[-3] = (int) 2
0x37b: Return(); Pop(2)

0x37c: Stack[-3] = (int) 3
0x37d: Return(); Pop(2)

