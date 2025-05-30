GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	oob9Girl1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x14b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x151 Vars = (object)
		EVENT_26 Op = 0x182 Vars = (string)
		EVENT_6 Op = 0x18a Vars = ()
		EVENT_7 Op = 0x1cb Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x253

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x30a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x308

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x30c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x30e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35f

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
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
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x298

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x31d

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x312

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 530329)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 531028)
0x64: Push((int) 32359)
0x65: Push((int) 32357)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 531029)
0x69: Push((int) 32365)
0x6a: Push((int) 32358)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 530331)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 531033)
0x78: Push((int) -1)
0x79: Push((int) 32362)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x310

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2aa

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x310

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x2ba

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2d4

0xb8: Pop(0)
0xb9: Push((int) 31717)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x318

0xc0: Pop(2)
0xc1: Push((int) 31716)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x31d

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x312

0xcd: Pop(2)
0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 530329)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 531028)
0xd8: Push((int) 32359)
0xd9: Push((int) 32357)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 531029)
0xdd: Push((int) 32365)
0xde: Push((int) 32358)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 530331)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 531033)
0xec: Push((int) -1)
0xed: Push((int) 32362)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 32359)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call2 0x9d

0xf7: Pop(1)
0xf8: Push((int) 531030)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 531031)
0xfe: Push((int) 32361)
0xff: Push((int) 32360)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 530332)
0x103: Push((int) 32363)
0x104: Push((int) 31719)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 32363)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0x9d

0x10e: Pop(1)
0x10f: Push((int) 531034)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 531035)
0x115: Push((int) 32365)
0x116: Push((int) 32364)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 32365)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0x9d

0x120: Pop(1)
0x121: Push((int) 531036)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 531037)
0x127: Push((int) 32361)
0x128: Push((int) 32367)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 32361)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0x9d

0x132: Pop(1)
0x133: Push((int) 531032)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 530330)
0x139: Push((int) -1)
0x13a: Push((int) 31717)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13f: PushEmpty(bool)
0x140: Call2 0x310

0x141: Pop(0)
0x142: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x143: @ lshStopAnimation()
0x144: Pop(0)
0x145: GOTO 0x148

0x146: @ StopAnimation()
0x147: Pop(0)
0x148: Return(); Pop(0)

0x149: GOTO 0xb4

0x14a: Return(); Pop(0)

0x14b: PushEmpty(float, float)
0x14c: Stack[-2] = (int) 300
0x14d: Stack[-1] = (int) 100
0x14e: Call2 0x15c

0x14f: Pop(2)
0x150: Return(); Pop(0)

0x151: PushEmpty()
0x152: PushEmpty()
0x153: Call2 0x1e2

0x154: Pop(0)
0x155: PushEmpty(int, object)
0x156: Stack[-1] = Stack[-3]
0x157: Push(-2, 1); TaskCall(0)
0x158: Call2 0x0

0x159: Pop(-2, 1); TaskReturn
0x15a: Pop(2)
0x15b: Return(); Pop(0)

0x15c: PushEmpty(float, bool, float, bool)
0x15d: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x15e: Push((int) 3)
0x15f: @ rand(Stack[-3], Stack[-1])
0x160: Pop(1)
0x161: Push((int) 3)
0x162: Pop(1); Push(Stack[-3] + Stack[-1]);
0x163: @ Sleep(Stack[-1], Stack[-2])
0x164: Pop(1)
0x165: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x166: PushEmpty(float, float)
0x167: Stack[-2] = Stack[-8]
0x168: Stack[-1] = Stack[-7]
0x169: Call2 0x1a1

0x16a: Pop(2)
0x16b: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x16c: GOTO 0x15e

0x16d: Return(); Pop(4)

0x16e: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x16f: PushEmpty(bool)
0x170: Stack[-1] = (bool) 0
0x171: PushEmpty(bool)
0x172: Call2 0x24e

0x173: Pop(0)
0x174: Pop(1); Push((bool) Stack[-1] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x19f

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Call2 0x2db

0x17e: Pop(0)
0x17f: @ RemoveActor(Stack[-1])
0x180: Pop(1)
0x181: Return(); Pop(0)

0x182: PushEmpty()
0x183: Push("cleanup")
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: PushEmpty()
0x187: Call2 0x16e

0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: Push( Stack[6 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18c: PushEmpty()
0x18d: Call2 0x1e2

0x18e: Pop(0)
0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: Push( Stack[5 + Tasks[-1].StackPointer] )
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(bool)
0x194: Call2 0x19f

0x195: Pop(0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: PushEmpty(object)
0x19a: Call2 0x2db

0x19b: Pop(0)
0x19c: @ RemoveActor(Stack[-1])
0x19d: Pop(1)
0x19e: Return(); Pop(0)

0x19f: Stack[-1] = (bool) 1
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty()
0x1a2: PushEmpty(bool)
0x1a3: Call2 0x24e

0x1a4: Pop(0)
0x1a5: Pop(1); Push((bool) Stack[-1] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Return(); Pop(0)

0x1a8: Push("player")
0x1a9: @ FindActor(Stack[-4], Stack[-1])
0x1aa: Pop(1)
0x1ab: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ac: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ae: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1af: Push((int) 10)
0x1b0: Push((float)1.0)
0x1b1: @ SetTimer(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: PushEmpty()
0x1b4: Call2 0x1f0

0x1b5: Pop(0)
0x1b6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b8: Push((int) 10)
0x1b9: @ KillTimer(Stack[-1])
0x1ba: Pop(1)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(float, float)
0x1bd: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bf: Stack[-3] = (bool) 0
0x1c0: Return(); Pop(2)

0x1c1: PushEmpty(float, object)
0x1c2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c3: Call2 0x246

0x1c4: Pop(1)
0x1c5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c9: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ca: Return(); Pop(2)

0x1cb: PushEmpty()
0x1cc: Push((int) 10)
0x1cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1cf: PushEmpty(bool)
0x1d0: Call2 0x1bc

0x1d1: Pop(0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: PushEmpty(object)
0x1d6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d7: Call2 0x2c9

0x1d8: Pop(1)
0x1d9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1da: GOTO 0x1e1

0x1db: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dd: Push("head")
0x1de: @ UnlookAsync(Stack[-1])
0x1df: Pop(1)
0x1e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: Call2 0x241

0x1e4: Pop(0)
0x1e5: Push((int) 10)
0x1e6: @ KillTimer(Stack[-1])
0x1e7: Pop(1)
0x1e8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ea: Push("head")
0x1eb: @ UnlookAsync(Stack[-1])
0x1ec: Pop(1)
0x1ed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ee: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ef: Return(); Pop(0)

0x1f0: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f1: @ WaitForAnimEnd()
0x1f2: Pop(0)
0x1f3: PushEmpty(bool)
0x1f4: Call2 0x24e

0x1f5: Pop(0)
0x1f6: Pop(1); Push((bool) Stack[-1] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Return(); Pop(14)

0x1f9: PushEmpty(int)
0x1fa: Call2 0x2f7

0x1fb: Stack[-8] = Stack[-1]
0x1fc: Pop(1)
0x1fd: Stack[-6] = (int) 0
0x1fe: PushEmpty(bool)
0x1ff: Stack[-1] = (bool) 0
0x200: Push((int) 5)
0x201: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x203: PushEmpty(bool)
0x204: Call2 0x24e

0x205: Pop(0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Stack[-1] = (bool) 1
0x208: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x209: Push((int) 3)
0x20a: @ irand(Stack[-6], Stack[-1])
0x20b: Pop(1)
0x20c: Push((int) 0)
0x20d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x20f: Push(Stack[-7])
0x210: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x211: @ irand(Stack[-4], Stack[-7])
0x212: Pop(0)
0x213: Push("all")
0x214: PushEmpty(string, int)
0x215: Stack[-1] = Stack[-7]
0x216: Call2 0x2f0

0x217: Pop(1)
0x218: @ PlayAnimation(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: @ WaitForAnimEnd(Stack[-3])
0x21b: Pop(0)
0x21c: Pop(0); Push((bool) Stack[-3] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: GOTO 0x23c

0x21f: GOTO 0x231

0x220: Push((int) 1)
0x221: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x223: Push((int) 4)
0x224: @ rand(Stack[-3], Stack[-1])
0x225: Pop(1)
0x226: Push((int) 1)
0x227: Pop(1); Push(Stack[-3] + Stack[-1]);
0x228: @ Sleep(Stack[-1], Stack[-2])
0x229: Pop(1)
0x22a: Pop(0); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: GOTO 0x23c

0x22d: GOTO 0x231

0x22e: Push(Stack[-6])
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: GOTO 0x23c

0x231: PushEmpty(bool)
0x232: Call2 0x23f

0x233: Pop(0)
0x234: Pop(1); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x23c

0x237: @ ResetAAS()
0x238: Pop(0)
0x239: Push((int) 1)
0x23a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x23b: GOTO 0x1fe

0x23c: @ ResetAAS()
0x23d: Pop(0)
0x23e: Return(); Pop(14)

0x23f: Stack[-1] = (bool) 1
0x240: Return(); Pop(0)

0x241: @ StopAnimation()
0x242: Pop(0)
0x243: @ StopGroup0()
0x244: Pop(0)
0x245: Return(); Pop(0)

0x246: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x247: @ GetPosition(Stack[-3])
0x248: Pop(0)
0x249: @@ GetPosition(Stack[-2])
0x24a: Pop(0)
0x24b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x24d: Return(); Pop(6)

0x24e: PushEmpty(bool, bool)
0x24f: @ IsLoaded(Stack[-1])
0x250: Pop(0)
0x251: Stack[-3] = Stack[-1]
0x252: Return(); Pop(2)

0x253: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x254: @@ GetPosition(Stack[-8])
0x255: Pop(0)
0x256: @@ GetEyesHeight(Stack[-9])
0x257: Pop(0)
0x258: Push(CvectorIndex(Stack[-8], 1))
0x259: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25b: @ GetPosition(Stack[-7])
0x25c: Pop(0)
0x25d: @ GetEyesHeight(Stack[-9])
0x25e: Pop(0)
0x25f: Push(CvectorIndex(Stack[-7], 1))
0x260: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x261: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x262: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x263: Push(CvectorIndex(Stack[-6], 1))
0x264: Stack[-1] = (int) 0
0x265: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x266: Pop(0); Push(Stack[-6] | Stack[-6]);
0x267: Pop(1); Push(Sqrt(Stack[-1]))
0x268: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x269: Stack[-5] = -Stack[-6]; Pop(0);
0x26a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26b: PushEmpty(cvector, cvector)
0x26c: Push(CVector(0.0, 1.0, 0.0))
0x26d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26e: Call2 0x2e1

0x26f: Pop(1)
0x270: Push((int) 25)
0x271: Pop(2); Push(Stack[-2] * Stack[-1]);
0x272: Pop(2); Push(Stack[-2] + Stack[-1]);
0x273: Push(CVector(0.0, 10.0, 0.0))
0x274: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x275: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x276: @ IsOverrideActive(Stack[-2])
0x277: Pop(0)
0x278: Push(Stack[-2])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-21] = (bool) 0
0x27b: Return(); Pop(18)

0x27c: @ StopWorld()
0x27d: Pop(0)
0x27e: Push((bool) 1)
0x27f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x280: Pop(1)
0x281: Push(CvectorIndex(Stack[-4], 0))
0x282: Push(CvectorIndex(Stack[-5], 2))
0x283: @ Rotate(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: PushEmpty(bool)
0x286: Call2 0x310

0x287: Pop(0)
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: GOTO 0x292

0x28a: Push("head")
0x28b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28c: Pop(1)
0x28d: Push(Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28f: Push("head")
0x290: @ LookAsyncCamera(Stack[-1])
0x291: Pop(1)
0x292: @ CameraWaitForPlayFinish()
0x293: Pop(0)
0x294: @ ResumeWorld()
0x295: Pop(0)
0x296: Stack[-21] = (bool) 1
0x297: Return(); Pop(18)

0x298: PushEmpty(bool, bool)
0x299: Push((bool) 1)
0x29a: @ CameraSwitchToNormal(Stack[-1])
0x29b: Pop(1)
0x29c: PushEmpty(bool)
0x29d: Call2 0x310

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: GOTO 0x2a9

0x2a1: Push("head")
0x2a2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: Push(Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a6: Push("head")
0x2a7: @ UnlookAsync(Stack[-1])
0x2a8: Pop(1)
0x2a9: Return(); Pop(2)

0x2aa: PushEmpty(bool, float, float, bool, float, float)
0x2ab: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2ac: Pop(0)
0x2ad: Push(Stack[-3])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2af: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b0: Pop(0)
0x2b1: Push((bool) 0)
0x2b2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(1)
0x2b4: GOTO 0x2b9

0x2b5: Push("Can't find lsh animation : ")
0x2b6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b7: @ Trace(Stack[-1])
0x2b8: Pop(1)
0x2b9: Return(); Pop(6)

0x2ba: PushEmpty(bool, float, float, bool, float, float)
0x2bb: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2bc: Pop(0)
0x2bd: Push(Stack[-3])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c0: Pop(0)
0x2c1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c2: Pop(0)
0x2c3: GOTO 0x2c8

0x2c4: Push("Can't find lsh animation : ")
0x2c5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c6: @ Trace(Stack[-1])
0x2c7: Pop(1)
0x2c8: Return(); Pop(6)

0x2c9: PushEmpty(float, cvector, float, cvector)
0x2ca: @@ GetEyesHeight(Stack[-2])
0x2cb: Pop(0)
0x2cc: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2cd: Push(CvectorIndex(Stack[-1], 1))
0x2ce: Stack[-1] = Stack[-3]
0x2cf: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2d0: Push("head")
0x2d1: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2d2: Pop(1)
0x2d3: Return(); Pop(4)

0x2d4: PushEmpty(bool)
0x2d5: Call2 0x310

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: @ lshStopSpeech()
0x2d9: Pop(0)
0x2da: Return(); Pop(0)

0x2db: PushEmpty(object, object)
0x2dc: @ self(Stack[-1])
0x2dd: Pop(0)
0x2de: Stack[-3] = Stack[-1]
0x2df: Return(); Pop(2)

0x2e0: Stack[-1] = 0
0x2e1: PushEmpty(float, float)
0x2e2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2e3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e4: Push((float)0.0)
0x2e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e8: Return(); Pop(2)

0x2e9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(int, int)
0x2ec: @ GetVariable(Stack[-3], Stack[-1])
0x2ed: Pop(0)
0x2ee: Stack[-4] = Stack[-1]
0x2ef: Return(); Pop(2)

0x2f0: PushEmpty(string, string)
0x2f1: Stack[-1] = "idle"
0x2f2: Push(Stack[-3])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f5: Stack[-4] = Stack[-1]
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, bool, int, bool)
0x2f8: Stack[-2] = (int) 0
0x2f9: Push("all")
0x2fa: PushEmpty(string, int)
0x2fb: Stack[-1] = Stack[-5]
0x2fc: Call2 0x2f0

0x2fd: Pop(1)
0x2fe: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: Pop(0); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x306

0x303: Push((int) 1)
0x304: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x305: GOTO 0x2f9

0x306: Stack[-5] = Stack[-2]
0x307: Return(); Pop(4)

0x308: Stack[-1] = (int) 515559
0x309: Return(); Pop(0)

0x30a: Stack[-1] = (int) 503344
0x30b: Return(); Pop(0)

0x30c: Stack[-1] = "ui/NPC_Citizen1.png"
0x30d: Return(); Pop(0)

0x30e: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x30f: Return(); Pop(0)

0x310: Stack[-1] = (bool) 0
0x311: Return(); Pop(0)

0x312: PushEmpty()
0x313: Push("oob9Girl1")
0x314: Push((int) 1)
0x315: @ SetVariable(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: Return(); Pop(0)

0x318: PushEmpty()
0x319: PushEmpty()
0x31a: Call2 0x329

0x31b: Pop(0)
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: PushEmpty(int, string)
0x31f: Stack[-1] = "oob9Girl1"
0x320: Call2 0x2eb

0x321: Pop(1)
0x322: Push((int) 0)
0x323: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-2] = (bool) 1
0x326: Return(); Pop(0)

0x327: Stack[-2] = (bool) 0
0x328: Return(); Pop(0)

0x329: PushEmpty(object, object)
0x32a: Push((int) 540)
0x32b: Push((int) 2)
0x32c: Push((int) 530352)
0x32d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: PushEmpty(bool, object, int)
0x330: Stack[-2] = Stack[-4]
0x331: Stack[-1] = (int) 532
0x332: Call2 0x343

0x333: Pop(3)
0x334: Return(); Pop(2)

0x335: Stack[-1] = 0
0x336: PushEmpty(object, object)
0x337: @ GetDiaryRoot(Stack[-1])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: Push("Can't retrieve diary root")
0x33c: @ Trace(Stack[-1])
0x33d: Pop(1)
0x33e: Stack[-3] = (bool) 0
0x33f: Return(); Pop(2)

0x340: Stack[-3] = Stack[-1]
0x341: Return(); Pop(2)

0x342: Stack[-1] = 0
0x343: PushEmpty(object, object, int, object, object, int)
0x344: PushEmpty(object)
0x345: Call2 0x336

0x346: Stack[-4] = Stack[-1]
0x347: Pop(1)
0x348: @@ Find(Stack[-7], Stack[-2])
0x349: Pop(0)
0x34a: Pop(0); Push((bool) Stack[-2] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34c: Push("Can't find diary parent with id: ")
0x34d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x34e: @ Trace(Stack[-1])
0x34f: Pop(1)
0x350: Stack[-9] = (bool) 0
0x351: Return(); Pop(6)

0x352: @@ AddChild(Stack[-8])
0x353: Pop(0)
0x354: Push((int) 7)
0x355: @ SendWorldWndMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ GetCategory(Stack[-1])
0x358: Pop(0)
0x359: @ SetDiarySection(Stack[-1])
0x35a: Pop(0)
0x35b: Stack[-9] = (bool) 0
0x35c: Return(); Pop(6)

0x35d: Stack[-2] = 0
0x35e: Stack[-3] = 0
0x35f: PushEmpty(int, int)
0x360: Push("branch")
0x361: @ GetVariable(Stack[-1], Stack[-2])
0x362: Pop(1)
0x363: Push((int) 0)
0x364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x366: Stack[-3] = (int) 1
0x367: Return(); Pop(2)

0x368: GOTO 0x36e

0x369: Push((int) 1)
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-3] = (int) 2
0x36d: Return(); Pop(2)

0x36e: Stack[-3] = (int) 3
0x36f: Return(); Pop(2)

