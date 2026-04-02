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
	W:k2q03
	W:quest_k2_03
	W:place_danko
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874006b0032007100300033000000710075006500730074005f006b0032005f0030003300000070006c006100630065005f00640061006e006b006f000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetVariable (2 args)

RunOp = 0x121
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x128 Vars = (object)
		EVENT_26 Op = 0x164 Vars = (string)
		EVENT_5 Op = 0x16c Vars = ()
		EVENT_6 Op = 0x171 Vars = ()
		EVENT_7 Op = 0x1b0 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x238

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x337

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x335

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x339

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x33b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x324

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
0x41: Call2 0x27c

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 525329)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 539404)
0x5a: Push((int) 41334)
0x5b: Push((int) 41333)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 539408)
0x5f: Push((int) 41334)
0x60: Push((int) 41337)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x33d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x28d

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x33d

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x294

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x2a5

0x9f: Pop(0)
0xa0: Push((int) 26698)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x2e0

0xa7: Pop(2)
0xa8: Push((int) 41343)
0xa9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x2e0

0xaf: Pop(2)
0xb0: Push((int) 41344)
0xb1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: PushEmpty(object, object)
0xb4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6: Call2 0x2e0

0xb7: Pop(2)
0xb8: Push((int) 26697)
0xb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xbb: PushEmpty(string)
0xbc: Stack[-1] = "Neutral" // @poff=89
0xbd: Call2 0x84

0xbe: Pop(1)
0xbf: Push((int) 525329)
0xc0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc1: Pop(1)
0xc2: @@@ ClearReplies(); Obj=0 // @poff=116
0xc3: Pop(0)
0xc4: Push((int) 539404)
0xc5: Push((int) 41334)
0xc6: Push((int) 41333)
0xc7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc8: Pop(3)
0xc9: Push((int) 539408)
0xca: Push((int) 41334)
0xcb: Push((int) 41337)
0xcc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcd: Pop(3)
0xce: Return(); Pop(0)

0xcf: Push((int) 41334)
0xd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral" // @poff=89
0xd4: Call2 0x84

0xd5: Pop(1)
0xd6: Push((int) 539405)
0xd7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd8: Pop(1)
0xd9: @@@ ClearReplies(); Obj=0 // @poff=116
0xda: Pop(0)
0xdb: Push((int) 539406)
0xdc: Push((int) 41336)
0xdd: Push((int) 41335)
0xde: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdf: Pop(3)
0xe0: Push((int) 539409)
0xe1: Push((int) 41336)
0xe2: Push((int) 41339)
0xe3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe4: Pop(3)
0xe5: Return(); Pop(0)

0xe6: Push((int) 41336)
0xe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral" // @poff=89
0xeb: Call2 0x84

0xec: Pop(1)
0xed: Push((int) 539407)
0xee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xef: Pop(1)
0xf0: @@@ ClearReplies(); Obj=0 // @poff=116
0xf1: Pop(0)
0xf2: Push((int) 525330)
0xf3: Push((int) -1)
0xf4: Push((int) 26698)
0xf5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf6: Pop(3)
0xf7: Push((int) 539410)
0xf8: Push((int) 41342)
0xf9: Push((int) 41341)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 41342)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0x84

0x103: Pop(1)
0x104: Push((int) 539411)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 539412)
0x10a: Push((int) -1)
0x10b: Push((int) 41343)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 539413)
0x10f: Push((int) -1)
0x110: Push((int) 41344)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x115: PushEmpty(bool)
0x116: Call2 0x33d

0x117: Pop(0)
0x118: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x119: @ lshStopAnimation()
0x11a: Pop(0)
0x11b: GOTO 0x11e

0x11c: @ StopAnimation()
0x11d: Pop(0)
0x11e: Return(); Pop(0)

0x11f: GOTO 0x9b

0x120: Return(); Pop(0)

0x121: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x122: PushEmpty(float, float)
0x123: Stack[-2] = (int) 300
0x124: Stack[-1] = (int) 100
0x125: Call2 0x137

0x126: Pop(2)
0x127: Return(); Pop(0)

0x128: PushEmpty()
0x129: Push( Stack[6 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: Return(); Pop(0)

0x12c: PushEmpty()
0x12d: Call2 0x1c7

0x12e: Pop(0)
0x12f: PushEmpty(int, object)
0x130: Stack[-3] = Stack[-1]
0x131: Push(-2, 1); TaskCall(0)
0x132: Call2 0x0

0x133: Pop(-2, 1); TaskReturn
0x134: Pop(2)
0x135: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x136: Return(); Pop(0)

0x137: PushEmpty(float, float)
0x138: PushEmpty(bool)
0x139: Call2 0x233

0x13a: Pop(0)
0x13b: Pop(1); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13d: @ Hold()
0x13e: Pop(0)
0x13f: GOTO 0x138

0x140: Push((int) 3)
0x141: @ rand(Stack[-2], Stack[-1])
0x142: Pop(1)
0x143: Push((int) 3)
0x144: Pop(1); Push(Stack[-2] + Stack[-1]);
0x145: @ Sleep(Stack[-1])
0x146: Pop(1)
0x147: PushEmpty(float, float)
0x148: Stack[-6] = Stack[-2]
0x149: Stack[-5] = Stack[-1]
0x14a: Call2 0x186

0x14b: Pop(2)
0x14c: @ sync()
0x14d: Pop(0)
0x14e: GOTO 0x138

0x14f: Return(); Pop(2)

0x150: PushEmpty(bool, bool)
0x151: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x152: @ IsLoaded(Stack[-1])
0x153: Pop(0)
0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: Pop(0); Push((bool) Stack[-2] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(bool)
0x159: Call2 0x184

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 1
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: PushEmpty(object)
0x15f: Call2 0x2ac

0x160: Pop(0)
0x161: @ RemoveActor(Stack[-1])
0x162: Pop(1)
0x163: Return(); Pop(2)

0x164: PushEmpty()
0x165: Push("cleanup") // @poff=156
0x166: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x168: PushEmpty()
0x169: Call2 0x150

0x16a: Pop(0)
0x16b: Return(); Pop(0)

0x16c: @ StopGroup0()
0x16d: Pop(0)
0x16e: @ sync()
0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: PushEmpty()
0x172: Call2 0x1c7

0x173: Pop(0)
0x174: PushEmpty(bool)
0x175: Stack[-1] = (bool) 0
0x176: Push( Stack[5 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: PushEmpty(bool)
0x179: Call2 0x184

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: Stack[-1] = (bool) 1
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(object)
0x17f: Call2 0x2ac

0x180: Pop(0)
0x181: @ RemoveActor(Stack[-1])
0x182: Pop(1)
0x183: Return(); Pop(0)

0x184: Stack[-1] = (bool) 1
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: PushEmpty(bool)
0x188: Call2 0x233

0x189: Pop(0)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Return(); Pop(0)

0x18d: Push("player") // @poff=172
0x18e: @ FindActor(Stack[-4]T, Stack[-1])
0x18f: Pop(1)
0x190: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x191: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x192: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x193: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x194: Push((int) 10)
0x195: Push((float)1.0)
0x196: @ SetTimer(Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: PushEmpty()
0x199: Call2 0x1d5

0x19a: Pop(0)
0x19b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: Push((int) 10)
0x19e: @ KillTimer(Stack[-1])
0x19f: Pop(1)
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(float, float)
0x1a2: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a4: Stack[-3] = (bool) 0
0x1a5: Return(); Pop(2)

0x1a6: PushEmpty(float, object)
0x1a7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1a8: Call2 0x22b

0x1a9: Pop(1)
0x1aa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ab: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ae: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1af: Return(); Pop(2)

0x1b0: PushEmpty()
0x1b1: Push((int) 10)
0x1b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x1a1

0x1b6: Pop(0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(object)
0x1bb: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1bc: Call2 0x29a

0x1bd: Pop(1)
0x1be: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1bf: GOTO 0x1c6

0x1c0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c2: Push("head") // @poff=186
0x1c3: @ UnlookAsync(Stack[-1])
0x1c4: Pop(1)
0x1c5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: Call2 0x226

0x1c9: Pop(0)
0x1ca: Push((int) 10)
0x1cb: @ KillTimer(Stack[-1])
0x1cc: Pop(1)
0x1cd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cf: Push("head") // @poff=186
0x1d0: @ UnlookAsync(Stack[-1])
0x1d1: Pop(1)
0x1d2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1d6: @ WaitForAnimEnd()
0x1d7: Pop(0)
0x1d8: PushEmpty(bool)
0x1d9: Call2 0x233

0x1da: Pop(0)
0x1db: Pop(1); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Return(); Pop(14)

0x1de: PushEmpty(int)
0x1df: Call2 0x2cf

0x1e0: Stack[-1] = Stack[-8]
0x1e1: Pop(1)
0x1e2: Stack[-6] = (int) 0
0x1e3: PushEmpty(bool)
0x1e4: Stack[-1] = (bool) 0
0x1e5: Push((int) 5)
0x1e6: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x233

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = (bool) 1
0x1ed: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x1ee: Push((int) 3)
0x1ef: @ irand(Stack[-6], Stack[-1])
0x1f0: Pop(1)
0x1f1: Push((int) 0)
0x1f2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f4: Push(Stack[-7])
0x1f5: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f6: @ irand(Stack[-4], Stack[-7])
0x1f7: Pop(0)
0x1f8: Push("all") // @poff=138
0x1f9: PushEmpty(string, int)
0x1fa: Stack[-7] = Stack[-1]
0x1fb: Call2 0x2c8

0x1fc: Pop(1)
0x1fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fe: Pop(2)
0x1ff: @ WaitForAnimEnd(Stack[-3])
0x200: Pop(0)
0x201: Pop(0); Push((bool) Stack[-3] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: GOTO 0x221

0x204: GOTO 0x216

0x205: Push((int) 1)
0x206: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x208: Push((int) 4)
0x209: @ rand(Stack[-3], Stack[-1])
0x20a: Pop(1)
0x20b: Push((int) 1)
0x20c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x20d: @ Sleep(Stack[-1], Stack[-2])
0x20e: Pop(1)
0x20f: Pop(0); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x221

0x212: GOTO 0x216

0x213: Push(Stack[-6])
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: GOTO 0x221

0x216: PushEmpty(bool)
0x217: Call2 0x224

0x218: Pop(0)
0x219: Pop(1); Push((bool) Stack[-1] == 0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: GOTO 0x221

0x21c: @ ResetAAS()
0x21d: Pop(0)
0x21e: Push((int) 1)
0x21f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x220: GOTO 0x1e3

0x221: @ ResetAAS()
0x222: Pop(0)
0x223: Return(); Pop(14)

0x224: Stack[-1] = (bool) 1
0x225: Return(); Pop(0)

0x226: @ StopAnimation()
0x227: Pop(0)
0x228: @ StopGroup0()
0x229: Pop(0)
0x22a: Return(); Pop(0)

0x22b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x22c: @ GetPosition(Stack[-3])
0x22d: Pop(0)
0x22e: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x22f: Pop(0)
0x230: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x231: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x232: Return(); Pop(6)

0x233: PushEmpty(bool, bool)
0x234: @ IsLoaded(Stack[-1])
0x235: Pop(0)
0x236: Stack[-1] = Stack[-3]
0x237: Return(); Pop(2)

0x238: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x239: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x23a: Pop(0)
0x23b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x23c: Pop(0)
0x23d: Push(CvectorIndex(Stack[-8], 1))
0x23e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x23f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x240: @ GetPosition(Stack[-7])
0x241: Pop(0)
0x242: @ GetEyesHeight(Stack[-9])
0x243: Pop(0)
0x244: Push(CvectorIndex(Stack[-7], 1))
0x245: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x246: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x247: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x248: Push(CvectorIndex(Stack[-6], 1))
0x249: Stack[-1] = (int) 0
0x24a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x24b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x24c: Pop(1); Push(Sqrt(Stack[-1]))
0x24d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x24e: Stack[-5] = -Stack[-6]; Pop(0);
0x24f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x250: PushEmpty(cvector, cvector)
0x251: Push([0.0, 1.0, 0.0])
0x252: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x253: Call2 0x2b2

0x254: Pop(1)
0x255: Push((int) 25)
0x256: Pop(2); Push(Stack[-2] * Stack[-1]);
0x257: Pop(2); Push(Stack[-2] + Stack[-1]);
0x258: Push([0.0, 10.0, 0.0])
0x259: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x25a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x25b: @ IsOverrideActive(Stack[-2])
0x25c: Pop(0)
0x25d: Push(Stack[-2])
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: Stack[-21] = (bool) 0
0x260: Return(); Pop(18)

0x261: @ StopWorld()
0x262: Pop(0)
0x263: @ CameraTransit(Stack[-3], Stack[-5])
0x264: Pop(0)
0x265: Push(CvectorIndex(Stack[-4], 0))
0x266: Push(CvectorIndex(Stack[-5], 2))
0x267: @ Rotate(Stack[-2], Stack[-1])
0x268: Pop(2)
0x269: PushEmpty(bool)
0x26a: Call2 0x33d

0x26b: Pop(0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: GOTO 0x276

0x26e: Push("head") // @poff=186
0x26f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x270: Pop(1)
0x271: Push(Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x273: Push("head") // @poff=186
0x274: @ LookAsyncCamera(Stack[-1])
0x275: Pop(1)
0x276: @ CameraWaitForPlayFinish()
0x277: Pop(0)
0x278: @ ResumeWorld()
0x279: Pop(0)
0x27a: Stack[-21] = (bool) 1
0x27b: Return(); Pop(18)

0x27c: PushEmpty(bool, bool)
0x27d: @ CameraSwitchToNormal()
0x27e: Pop(0)
0x27f: PushEmpty(bool)
0x280: Call2 0x33d

0x281: Pop(0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x28c

0x284: Push("head") // @poff=186
0x285: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x286: Pop(1)
0x287: Push(Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x289: Push("head") // @poff=186
0x28a: @ UnlookAsync(Stack[-1])
0x28b: Pop(1)
0x28c: Return(); Pop(2)

0x28d: PushEmpty(float, float, float, float)
0x28e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x28f: Pop(0)
0x290: Push((bool) 0)
0x291: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(1)
0x293: Return(); Pop(4)

0x294: PushEmpty(float, float, float, float)
0x295: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x296: Pop(0)
0x297: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x298: Pop(0)
0x299: Return(); Pop(4)

0x29a: PushEmpty(float, cvector, float, cvector)
0x29b: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x29c: Pop(0)
0x29d: Stack[-1] = [0.0, 0.0, 0.0]
0x29e: Push(CvectorIndex(Stack[-1], 1))
0x29f: Stack[-3] = Stack[-1]
0x2a0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2a1: Push("head") // @poff=186
0x2a2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2a3: Pop(1)
0x2a4: Return(); Pop(4)

0x2a5: PushEmpty(bool)
0x2a6: Call2 0x33d

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a9: @ lshStopSpeech()
0x2aa: Pop(0)
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(object, object)
0x2ad: @ self(Stack[-1])
0x2ae: Pop(0)
0x2af: Stack[-1] = Stack[-3]
0x2b0: Return(); Pop(2)

0x2b1: Stack[-1] = 0
0x2b2: PushEmpty(float, float)
0x2b3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2b4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2b5: Push((float)9.999999974752427e-07)
0x2b6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-4] = [0.0, 0.0, 0.0]
0x2b9: Return(); Pop(2)

0x2ba: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(object, object)
0x2bd: @ FindActor(Stack[-1], Stack[-4])
0x2be: Pop(0)
0x2bf: Pop(0); PushNull((bool) Stack[-1] == 0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-5] = (bool) 0
0x2c2: Return(); Pop(2)

0x2c3: @ Trigger(Stack[-1], Stack[-3])
0x2c4: Pop(0)
0x2c5: Stack[-5] = (bool) 1
0x2c6: Return(); Pop(2)

0x2c7: Stack[-1] = 0
0x2c8: PushEmpty(string, string)
0x2c9: Stack[-1] = "idle" // @poff=146
0x2ca: Push(Stack[-3])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2cd: Stack[-1] = Stack[-4]
0x2ce: Return(); Pop(2)

0x2cf: PushEmpty(int, bool, int, bool)
0x2d0: Stack[-2] = (int) 0
0x2d1: Push("all") // @poff=138
0x2d2: PushEmpty(string, int)
0x2d3: Stack[-5] = Stack[-1]
0x2d4: Call2 0x2c8

0x2d5: Pop(1)
0x2d6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: Pop(0); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: GOTO 0x2de

0x2db: Push((int) 1)
0x2dc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2dd: GOTO 0x2d1

0x2de: Stack[-2] = Stack[-5]
0x2df: Return(); Pop(4)

0x2e0: PushEmpty()
0x2e1: Push("k2q03") // @poff=222
0x2e2: Push((int) 2)
0x2e3: @ SetVariable(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: PushEmpty()
0x2e6: Call2 0x2ee

0x2e7: Pop(0)
0x2e8: PushEmpty(bool, string, string)
0x2e9: Stack[-2] = "quest_k2_03" // @poff=234
0x2ea: Stack[-1] = "place_danko" // @poff=258
0x2eb: Call2 0x2bc

0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty(object, object)
0x2ef: Push((int) 478)
0x2f0: Push((int) 2)
0x2f1: Push((int) 527794)
0x2f2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: PushEmpty(bool, object, int)
0x2f5: Stack[-4] = Stack[-2]
0x2f6: Stack[-1] = (int) 476
0x2f7: Call2 0x308

0x2f8: Pop(3)
0x2f9: Return(); Pop(2)

0x2fa: Stack[-1] = 0
0x2fb: PushEmpty(object, object)
0x2fc: @ GetDiaryRoot(Stack[-1])
0x2fd: Pop(0)
0x2fe: Pop(0); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: Push("Can't retrieve diary root") // @poff=282
0x301: @ Trace(Stack[-1])
0x302: Pop(1)
0x303: Stack[-3] = (bool) 0
0x304: Return(); Pop(2)

0x305: Stack[-1] = Stack[-3]
0x306: Return(); Pop(2)

0x307: Stack[-1] = 0
0x308: PushEmpty(object, object, int, object, object, int)
0x309: PushEmpty(object)
0x30a: Call2 0x2fb

0x30b: Stack[-1] = Stack[-4]
0x30c: Pop(1)
0x30d: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=334
0x30e: Pop(0)
0x30f: Pop(0); Push((bool) Stack[-2] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x311: Push("Can't find diary parent with id: ") // @poff=339
0x312: Pop(1); Push(Stack[-1] + Stack[-8]);
0x313: @ Trace(Stack[-1])
0x314: Pop(1)
0x315: Stack[-9] = (bool) 0
0x316: Return(); Pop(6)

0x317: @@ AddChild(Stack[-8]); Obj=2 // @poff=407
0x318: Pop(0)
0x319: Push((int) 7)
0x31a: @ SendWorldWndMessage(Stack[-1])
0x31b: Pop(1)
0x31c: @@ GetCategory(Stack[-1]); Obj=8 // @poff=416
0x31d: Pop(0)
0x31e: @ SetDiarySection(Stack[-1])
0x31f: Pop(0)
0x320: Stack[-9] = (bool) 0
0x321: Return(); Pop(6)

0x322: Stack[-2] = 0
0x323: Stack[-3] = 0
0x324: PushEmpty(int, int)
0x325: Push("branch") // @poff=428
0x326: @ GetVariable(Stack[-1], Stack[-2])
0x327: Pop(1)
0x328: Push((int) 0)
0x329: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32b: Stack[-3] = (int) 1
0x32c: Return(); Pop(2)

0x32d: GOTO 0x333

0x32e: Push((int) 1)
0x32f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-3] = (int) 2
0x332: Return(); Pop(2)

0x333: Stack[-3] = (int) 3
0x334: Return(); Pop(2)

0x335: Stack[-1] = (int) 515556
0x336: Return(); Pop(0)

0x337: Stack[-1] = (int) 503341
0x338: Return(); Pop(0)

0x339: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=442
0x33a: Return(); Pop(0)

0x33b: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=482
0x33c: Return(); Pop(0)

0x33d: Stack[-1] = (bool) 0
0x33e: Return(); Pop(0)

