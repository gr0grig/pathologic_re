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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:oob12TWhitemask1
	W:itheater@door1
	W:b12q01TheaterIsVisited
	W:branch
	W:ui/NPC_wmask.png
	W:ui/NPC_wmask_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006f006f006200310032005400570068006900740065006d00610073006b003100000069007400680065006100740065007200400064006f006f00720031000000620031003200710030003100540068006500610074006500720049007300560069007300690074006500640000006200720061006e00630068000000750069002f004e00500043005f0077006d00610073006b002e0070006e0067000000750069002f004e00500043005f0077006d00610073006b005f0062002e0070006e0067000000
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
	Trace (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x170
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x176 Vars = (object)
		EVENT_26 Op = 0x1ae Vars = (string)
		EVENT_5 Op = 0x1b6 Vars = ()
		EVENT_6 Op = 0x1bb Vars = ()
		EVENT_7 Op = 0x1fa Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x282

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x366

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x364

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x368

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x36a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x353

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
0x41: Call2 0x2c6

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
0x4f: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x347

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x334

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x33a

0x5e: Pop(2)
0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x341

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xac

0x67: Pop(1)
0x68: Push((int) 522959)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 522960)
0x6e: Push((int) 24152)
0x6f: Push((int) 24151)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 522973)
0x73: Push((int) -1)
0x74: Push((int) 24164)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x8e

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=89
0x7a: Call2 0xac

0x7b: Pop(1)
0x7c: Push((int) 523196)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=116
0x80: Pop(0)
0x81: Push((int) 523197)
0x82: Push((int) -1)
0x83: Push((int) 24400)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: Push((int) 523198)
0x87: Push((int) -1)
0x88: Push((int) 24401)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x4e

0x8e: PushEmpty(bool)
0x8f: Call2 0x36c

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x2d7

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all") // @poff=138
0x9e: Push("idle") // @poff=146
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all") // @poff=138
0xa7: Push("idle") // @poff=146
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x36c

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-3] = Stack[-2]
0xb8: Push("") // @poff=102
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x2de

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x2ef

0xc7: Pop(0)
0xc8: Push((int) 24150)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x347

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x334

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x33a

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x341

0xde: Pop(2)
0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral" // @poff=89
0xe1: Call2 0xac

0xe2: Pop(1)
0xe3: Push((int) 522959)
0xe4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe5: Pop(1)
0xe6: @@@ ClearReplies(); Obj=0 // @poff=116
0xe7: Pop(0)
0xe8: Push((int) 522960)
0xe9: Push((int) 24152)
0xea: Push((int) 24151)
0xeb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xec: Pop(3)
0xed: Push((int) 522973)
0xee: Push((int) -1)
0xef: Push((int) 24164)
0xf0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral" // @poff=89
0xf5: Call2 0xac

0xf6: Pop(1)
0xf7: Push((int) 523196)
0xf8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf9: Pop(1)
0xfa: @@@ ClearReplies(); Obj=0 // @poff=116
0xfb: Pop(0)
0xfc: Push((int) 523197)
0xfd: Push((int) -1)
0xfe: Push((int) 24400)
0xff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x100: Pop(3)
0x101: Push((int) 523198)
0x102: Push((int) -1)
0x103: Push((int) 24401)
0x104: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 24152)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral" // @poff=89
0x10c: Call2 0xac

0x10d: Pop(1)
0x10e: Push((int) 522961)
0x10f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x110: Pop(1)
0x111: @@@ ClearReplies(); Obj=0 // @poff=116
0x112: Pop(0)
0x113: Push((int) 522962)
0x114: Push((int) 24154)
0x115: Push((int) 24153)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Push((int) 522972)
0x119: Push((int) -1)
0x11a: Push((int) 24163)
0x11b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 24154)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral" // @poff=89
0x123: Call2 0xac

0x124: Pop(1)
0x125: Push((int) 522963)
0x126: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x127: Pop(1)
0x128: @@@ ClearReplies(); Obj=0 // @poff=116
0x129: Pop(0)
0x12a: Push((int) 522964)
0x12b: Push((int) 24156)
0x12c: Push((int) 24155)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Push((int) 522968)
0x130: Push((int) 24160)
0x131: Push((int) 24159)
0x132: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 24160)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral" // @poff=89
0x13a: Call2 0xac

0x13b: Pop(1)
0x13c: Push((int) 522969)
0x13d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13e: Pop(1)
0x13f: @@@ ClearReplies(); Obj=0 // @poff=116
0x140: Pop(0)
0x141: Push((int) 522970)
0x142: Push((int) -1)
0x143: Push((int) 24161)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Push((int) 522971)
0x147: Push((int) -1)
0x148: Push((int) 24162)
0x149: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 24156)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral" // @poff=89
0x151: Call2 0xac

0x152: Pop(1)
0x153: Push((int) 522965)
0x154: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x155: Pop(1)
0x156: @@@ ClearReplies(); Obj=0 // @poff=116
0x157: Pop(0)
0x158: Push((int) 522966)
0x159: Push((int) -1)
0x15a: Push((int) 24157)
0x15b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15c: Pop(3)
0x15d: Push((int) 522967)
0x15e: Push((int) -1)
0x15f: Push((int) 24158)
0x160: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x164: PushEmpty(bool)
0x165: Call2 0x36c

0x166: Pop(0)
0x167: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x168: @ lshStopAnimation()
0x169: Pop(0)
0x16a: GOTO 0x16d

0x16b: @ StopAnimation()
0x16c: Pop(0)
0x16d: Return(); Pop(0)

0x16e: GOTO 0xc3

0x16f: Return(); Pop(0)

0x170: PushEmpty(float, float)
0x171: Stack[-2] = (int) 300
0x172: Stack[-1] = (int) 100
0x173: Call2 0x181

0x174: Pop(2)
0x175: Return(); Pop(0)

0x176: PushEmpty()
0x177: PushEmpty()
0x178: Call2 0x211

0x179: Pop(0)
0x17a: PushEmpty(int, object)
0x17b: Stack[-3] = Stack[-1]
0x17c: Push(-2, 1); TaskCall(0)
0x17d: Call2 0x0

0x17e: Pop(-2, 1); TaskReturn
0x17f: Pop(2)
0x180: Return(); Pop(0)

0x181: PushEmpty(float, float)
0x182: PushEmpty(bool)
0x183: Call2 0x27d

0x184: Pop(0)
0x185: Pop(1); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x187: @ Hold()
0x188: Pop(0)
0x189: GOTO 0x182

0x18a: Push((int) 3)
0x18b: @ rand(Stack[-2], Stack[-1])
0x18c: Pop(1)
0x18d: Push((int) 3)
0x18e: Pop(1); Push(Stack[-2] + Stack[-1]);
0x18f: @ Sleep(Stack[-1])
0x190: Pop(1)
0x191: PushEmpty(float, float)
0x192: Stack[-6] = Stack[-2]
0x193: Stack[-5] = Stack[-1]
0x194: Call2 0x1d0

0x195: Pop(2)
0x196: @ sync()
0x197: Pop(0)
0x198: GOTO 0x182

0x199: Return(); Pop(2)

0x19a: PushEmpty(bool, bool)
0x19b: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x19c: @ IsLoaded(Stack[-1])
0x19d: Pop(0)
0x19e: PushEmpty(bool)
0x19f: Stack[-1] = (bool) 0
0x1a0: Pop(0); Push((bool) Stack[-2] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a2: PushEmpty(bool)
0x1a3: Call2 0x1ce

0x1a4: Pop(0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: Stack[-1] = (bool) 1
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a8: PushEmpty(object)
0x1a9: Call2 0x2f6

0x1aa: Pop(0)
0x1ab: @ RemoveActor(Stack[-1])
0x1ac: Pop(1)
0x1ad: Return(); Pop(2)

0x1ae: PushEmpty()
0x1af: Push("cleanup") // @poff=156
0x1b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b2: PushEmpty()
0x1b3: Call2 0x19a

0x1b4: Pop(0)
0x1b5: Return(); Pop(0)

0x1b6: @ StopGroup0()
0x1b7: Pop(0)
0x1b8: @ sync()
0x1b9: Pop(0)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: Call2 0x211

0x1bd: Pop(0)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: PushEmpty(bool)
0x1c3: Call2 0x1ce

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: Stack[-1] = (bool) 1
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(object)
0x1c9: Call2 0x2f6

0x1ca: Pop(0)
0x1cb: @ RemoveActor(Stack[-1])
0x1cc: Pop(1)
0x1cd: Return(); Pop(0)

0x1ce: Stack[-1] = (bool) 1
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: PushEmpty(bool)
0x1d2: Call2 0x27d

0x1d3: Pop(0)
0x1d4: Pop(1); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Return(); Pop(0)

0x1d7: Push("player") // @poff=172
0x1d8: @ FindActor(Stack[-4]T, Stack[-1])
0x1d9: Pop(1)
0x1da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1db: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1dd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1de: Push((int) 10)
0x1df: Push((float)1.0)
0x1e0: @ SetTimer(Stack[-2], Stack[-1])
0x1e1: Pop(2)
0x1e2: PushEmpty()
0x1e3: Call2 0x21f

0x1e4: Pop(0)
0x1e5: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e7: Push((int) 10)
0x1e8: @ KillTimer(Stack[-1])
0x1e9: Pop(1)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(float, float)
0x1ec: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-3] = (bool) 0
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(float, object)
0x1f1: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f2: Call2 0x275

0x1f3: Pop(1)
0x1f4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f8: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f9: Return(); Pop(2)

0x1fa: PushEmpty()
0x1fb: Push((int) 10)
0x1fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fe: PushEmpty(bool)
0x1ff: Call2 0x1eb

0x200: Pop(0)
0x201: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x202: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: PushEmpty(object)
0x205: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x206: Call2 0x2e4

0x207: Pop(1)
0x208: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x209: GOTO 0x210

0x20a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20b: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20c: Push("head") // @poff=186
0x20d: @ UnlookAsync(Stack[-1])
0x20e: Pop(1)
0x20f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x210: Return(); Pop(0)

0x211: PushEmpty()
0x212: Call2 0x270

0x213: Pop(0)
0x214: Push((int) 10)
0x215: @ KillTimer(Stack[-1])
0x216: Pop(1)
0x217: Push( Stack[2 + Tasks[-1].StackPointer] )
0x218: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x219: Push("head") // @poff=186
0x21a: @ UnlookAsync(Stack[-1])
0x21b: Pop(1)
0x21c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21e: Return(); Pop(0)

0x21f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x220: @ WaitForAnimEnd()
0x221: Pop(0)
0x222: PushEmpty(bool)
0x223: Call2 0x27d

0x224: Pop(0)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: Return(); Pop(14)

0x228: PushEmpty(int)
0x229: Call2 0x323

0x22a: Stack[-1] = Stack[-8]
0x22b: Pop(1)
0x22c: Stack[-6] = (int) 0
0x22d: PushEmpty(bool)
0x22e: Stack[-1] = (bool) 0
0x22f: Push((int) 5)
0x230: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: PushEmpty(bool)
0x233: Call2 0x27d

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Stack[-1] = (bool) 1
0x237: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x238: Push((int) 3)
0x239: @ irand(Stack[-6], Stack[-1])
0x23a: Pop(1)
0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x23e: Push(Stack[-7])
0x23f: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x240: @ irand(Stack[-4], Stack[-7])
0x241: Pop(0)
0x242: Push("all") // @poff=138
0x243: PushEmpty(string, int)
0x244: Stack[-7] = Stack[-1]
0x245: Call2 0x31c

0x246: Pop(1)
0x247: @ PlayAnimation(Stack[-2], Stack[-1])
0x248: Pop(2)
0x249: @ WaitForAnimEnd(Stack[-3])
0x24a: Pop(0)
0x24b: Pop(0); Push((bool) Stack[-3] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x26b

0x24e: GOTO 0x260

0x24f: Push((int) 1)
0x250: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x252: Push((int) 4)
0x253: @ rand(Stack[-3], Stack[-1])
0x254: Pop(1)
0x255: Push((int) 1)
0x256: Pop(1); Push(Stack[-3] + Stack[-1]);
0x257: @ Sleep(Stack[-1], Stack[-2])
0x258: Pop(1)
0x259: Pop(0); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x26b

0x25c: GOTO 0x260

0x25d: Push(Stack[-6])
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x26b

0x260: PushEmpty(bool)
0x261: Call2 0x26e

0x262: Pop(0)
0x263: Pop(1); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x26b

0x266: @ ResetAAS()
0x267: Pop(0)
0x268: Push((int) 1)
0x269: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x26a: GOTO 0x22d

0x26b: @ ResetAAS()
0x26c: Pop(0)
0x26d: Return(); Pop(14)

0x26e: Stack[-1] = (bool) 1
0x26f: Return(); Pop(0)

0x270: @ StopAnimation()
0x271: Pop(0)
0x272: @ StopGroup0()
0x273: Pop(0)
0x274: Return(); Pop(0)

0x275: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x276: @ GetPosition(Stack[-3])
0x277: Pop(0)
0x278: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x279: Pop(0)
0x27a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x27b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x27c: Return(); Pop(6)

0x27d: PushEmpty(bool, bool)
0x27e: @ IsLoaded(Stack[-1])
0x27f: Pop(0)
0x280: Stack[-1] = Stack[-3]
0x281: Return(); Pop(2)

0x282: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x283: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x284: Pop(0)
0x285: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x286: Pop(0)
0x287: Push(CvectorIndex(Stack[-8], 1))
0x288: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x289: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x28a: @ GetPosition(Stack[-7])
0x28b: Pop(0)
0x28c: @ GetEyesHeight(Stack[-9])
0x28d: Pop(0)
0x28e: Push(CvectorIndex(Stack[-7], 1))
0x28f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x290: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x291: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x292: Push(CvectorIndex(Stack[-6], 1))
0x293: Stack[-1] = (int) 0
0x294: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x295: Pop(0); Push(Stack[-6] | Stack[-6]);
0x296: Pop(1); Push(Sqrt(Stack[-1]))
0x297: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x298: Stack[-5] = -Stack[-6]; Pop(0);
0x299: Pop(0); Push(Stack[-6] * Stack[-19]);
0x29a: PushEmpty(cvector, cvector)
0x29b: Push([0.0, 1.0, 0.0])
0x29c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x29d: Call2 0x2fc

0x29e: Pop(1)
0x29f: Push((int) 25)
0x2a0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a2: Push([0.0, 10.0, 0.0])
0x2a3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a5: @ IsOverrideActive(Stack[-2])
0x2a6: Pop(0)
0x2a7: Push(Stack[-2])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a9: Stack[-21] = (bool) 0
0x2aa: Return(); Pop(18)

0x2ab: @ StopWorld()
0x2ac: Pop(0)
0x2ad: @ CameraTransit(Stack[-3], Stack[-5])
0x2ae: Pop(0)
0x2af: Push(CvectorIndex(Stack[-4], 0))
0x2b0: Push(CvectorIndex(Stack[-5], 2))
0x2b1: @ Rotate(Stack[-2], Stack[-1])
0x2b2: Pop(2)
0x2b3: PushEmpty(bool)
0x2b4: Call2 0x36c

0x2b5: Pop(0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: GOTO 0x2c0

0x2b8: Push("head") // @poff=186
0x2b9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ba: Pop(1)
0x2bb: Push(Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bd: Push("head") // @poff=186
0x2be: @ LookAsyncCamera(Stack[-1])
0x2bf: Pop(1)
0x2c0: @ CameraWaitForPlayFinish()
0x2c1: Pop(0)
0x2c2: @ ResumeWorld()
0x2c3: Pop(0)
0x2c4: Stack[-21] = (bool) 1
0x2c5: Return(); Pop(18)

0x2c6: PushEmpty(bool, bool)
0x2c7: @ CameraSwitchToNormal()
0x2c8: Pop(0)
0x2c9: PushEmpty(bool)
0x2ca: Call2 0x36c

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d6

0x2ce: Push("head") // @poff=186
0x2cf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d0: Pop(1)
0x2d1: Push(Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Push("head") // @poff=186
0x2d4: @ UnlookAsync(Stack[-1])
0x2d5: Pop(1)
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty(float, float, float, float)
0x2d8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2d9: Pop(0)
0x2da: Push((bool) 0)
0x2db: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(4)

0x2de: PushEmpty(float, float, float, float)
0x2df: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2e0: Pop(0)
0x2e1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2e2: Pop(0)
0x2e3: Return(); Pop(4)

0x2e4: PushEmpty(float, cvector, float, cvector)
0x2e5: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x2e6: Pop(0)
0x2e7: Stack[-1] = [0.0, 0.0, 0.0]
0x2e8: Push(CvectorIndex(Stack[-1], 1))
0x2e9: Stack[-3] = Stack[-1]
0x2ea: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2eb: Push("head") // @poff=186
0x2ec: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ed: Pop(1)
0x2ee: Return(); Pop(4)

0x2ef: PushEmpty(bool)
0x2f0: Call2 0x36c

0x2f1: Pop(0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: @ lshStopSpeech()
0x2f4: Pop(0)
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty(object, object)
0x2f7: @ self(Stack[-1])
0x2f8: Pop(0)
0x2f9: Stack[-1] = Stack[-3]
0x2fa: Return(); Pop(2)

0x2fb: Stack[-1] = 0
0x2fc: PushEmpty(float, float)
0x2fd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fe: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ff: Push((float)9.999999974752427e-07)
0x300: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-4] = [0.0, 0.0, 0.0]
0x303: Return(); Pop(2)

0x304: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x305: Return(); Pop(2)

0x306: PushEmpty(int, int)
0x307: @ GetVariable(Stack[-3], Stack[-1])
0x308: Pop(0)
0x309: Stack[-1] = Stack[-4]
0x30a: Return(); Pop(2)

0x30b: PushEmpty(object, object)
0x30c: @ FindActor(Stack[-1], Stack[-4])
0x30d: Pop(0)
0x30e: Pop(0); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x310: Push("Door ") // @poff=222
0x311: Pop(1); Push(Stack[-1] + Stack[-5]);
0x312: Push(" not found") // @poff=234
0x313: Pop(2); Push(Stack[-2] + Stack[-1]);
0x314: @ Trace(Stack[-1])
0x315: Pop(1)
0x316: GOTO 0x31a

0x317: Push("locked") // @poff=256
0x318: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=270
0x319: Pop(1)
0x31a: Return(); Pop(2)

0x31b: Stack[-1] = 0
0x31c: PushEmpty(string, string)
0x31d: Stack[-1] = "idle" // @poff=146
0x31e: Push(Stack[-3])
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x321: Stack[-1] = Stack[-4]
0x322: Return(); Pop(2)

0x323: PushEmpty(int, bool, int, bool)
0x324: Stack[-2] = (int) 0
0x325: Push("all") // @poff=138
0x326: PushEmpty(string, int)
0x327: Stack[-5] = Stack[-1]
0x328: Call2 0x31c

0x329: Pop(1)
0x32a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: Pop(0); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: GOTO 0x332

0x32f: Push((int) 1)
0x330: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x331: GOTO 0x325

0x332: Stack[-2] = Stack[-5]
0x333: Return(); Pop(4)

0x334: PushEmpty()
0x335: Push("oob12TWhitemask1") // @poff=282
0x336: Push((int) 1)
0x337: @ SetVariable(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: Return(); Pop(0)

0x33a: PushEmpty()
0x33b: PushEmpty(string, bool)
0x33c: Stack[-2] = "itheater@door1" // @poff=316
0x33d: Stack[-1] = (bool) 0
0x33e: Call2 0x30b

0x33f: Pop(2)
0x340: Return(); Pop(0)

0x341: PushEmpty()
0x342: Push("b12q01TheaterIsVisited") // @poff=346
0x343: Push((int) 1)
0x344: @ SetVariable(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: PushEmpty(int, string)
0x349: Stack[-1] = "oob12TWhitemask1" // @poff=282
0x34a: Call2 0x306

0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: Stack[-2] = (bool) 1
0x350: Return(); Pop(0)

0x351: Stack[-2] = (bool) 0
0x352: Return(); Pop(0)

0x353: PushEmpty(int, int)
0x354: Push("branch") // @poff=392
0x355: @ GetVariable(Stack[-1], Stack[-2])
0x356: Pop(1)
0x357: Push((int) 0)
0x358: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: Stack[-3] = (int) 1
0x35b: Return(); Pop(2)

0x35c: GOTO 0x362

0x35d: Push((int) 1)
0x35e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-3] = (int) 2
0x361: Return(); Pop(2)

0x362: Stack[-3] = (int) 3
0x363: Return(); Pop(2)

0x364: Stack[-1] = (int) 515569
0x365: Return(); Pop(0)

0x366: Stack[-1] = (int) 503354
0x367: Return(); Pop(0)

0x368: Stack[-1] = "ui/NPC_wmask.png" // @poff=406
0x369: Return(); Pop(0)

0x36a: Stack[-1] = "ui/NPC_wmask_b.png" // @poff=440
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = (bool) 0
0x36d: Return(); Pop(0)

