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
	ood1SalesmanLaska1
	d1q02
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

RunOp = 0x178
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x17e Vars = (object)
		EVENT_26 Op = 0x1af Vars = (string)
		EVENT_6 Op = 0x1b7 Vars = ()
		EVENT_7 Op = 0x1f8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x280

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x31f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x31d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x321

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x323

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35d

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
0x41: Call2 0x2c5

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
0x4f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x345

0x55: Pop(1)
0x56: Pop(1); Push((bool) Stack[-1] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: PushEmpty(bool, object)
0x59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a: Call2 0x351

0x5b: Pop(1)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x33f

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0xa7

0x67: Pop(1)
0x68: Push((int) 532726)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 532727)
0x6e: Push((int) 34279)
0x6f: Push((int) 34202)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 532802)
0x73: Push((int) 34282)
0x74: Push((int) 34278)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x89

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xa7

0x7b: Pop(1)
0x7c: Push((int) 532809)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: Push((int) 532810)
0x82: Push((int) -1)
0x83: Push((int) 34287)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x325

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x2d7

0x95: Pop(1)
0x96: GOTO 0x8d

0x97: GOTO 0xa6

0x98: Push("all")
0x99: Push("idle")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: GOTO 0x9c

0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool)
0xa9: Call2 0x325

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(string, bool)
0xb2: Stack[-2] = Stack[-3]
0xb3: Push("")
0xb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: GOTO 0xb9

0xb8: Stack[-1] = (bool) 1
0xb9: Call2 0x2e7

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x301

0xc2: Pop(0)
0xc3: Push((int) 34201)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(bool)
0xc7: Stack[-1] = (bool) 0
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x345

0xcb: Pop(1)
0xcc: Pop(1); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x351

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 1
0xd4: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x33f

0xd9: Pop(2)
0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call2 0xa7

0xdd: Pop(1)
0xde: Push((int) 532726)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 532727)
0xe4: Push((int) 34279)
0xe5: Push((int) 34202)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 532802)
0xe9: Push((int) 34282)
0xea: Push((int) 34278)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call2 0xa7

0xf1: Pop(1)
0xf2: Push((int) 532809)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 532810)
0xf8: Push((int) -1)
0xf9: Push((int) 34287)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 34279)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 532803)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 532805)
0x10a: Push((int) 34282)
0x10b: Push((int) 34281)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 532804)
0x10f: Push((int) 34577)
0x110: Push((int) 34280)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 34577)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call2 0xa7

0x11a: Pop(1)
0x11b: Push((int) 533066)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 533067)
0x121: Push((int) 34580)
0x122: Push((int) 34578)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 533068)
0x126: Push((int) -1)
0x127: Push((int) 34579)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 34580)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call2 0xa7

0x131: Pop(1)
0x132: Push((int) 533069)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 533070)
0x138: Push((int) 34282)
0x139: Push((int) 34581)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Push((int) 34282)
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral"
0x142: Call2 0xa7

0x143: Pop(1)
0x144: Push((int) 532806)
0x145: @@ SetMessage(Stack[-1])
0x146: Pop(1)
0x147: @@ ClearReplies()
0x148: Pop(0)
0x149: Push((int) 532808)
0x14a: Push((int) 34288)
0x14b: Push((int) 34285)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Push((int) 532807)
0x14f: Push((int) -1)
0x150: Push((int) 34284)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 34288)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0xa7

0x15a: Pop(1)
0x15b: Push((int) 532811)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 532812)
0x161: Push((int) -1)
0x162: Push((int) 34289)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 532813)
0x166: Push((int) -1)
0x167: Push((int) 34290)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16c: PushEmpty(bool)
0x16d: Call2 0x325

0x16e: Pop(0)
0x16f: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x170: @ lshStopAnimation()
0x171: Pop(0)
0x172: GOTO 0x175

0x173: @ StopAnimation()
0x174: Pop(0)
0x175: Return(); Pop(0)

0x176: GOTO 0xbe

0x177: Return(); Pop(0)

0x178: PushEmpty(float, float)
0x179: Stack[-2] = (int) 300
0x17a: Stack[-1] = (int) 100
0x17b: Call2 0x189

0x17c: Pop(2)
0x17d: Return(); Pop(0)

0x17e: PushEmpty()
0x17f: PushEmpty()
0x180: Call2 0x20f

0x181: Pop(0)
0x182: PushEmpty(int, object)
0x183: Stack[-1] = Stack[-3]
0x184: Push(-2, 1); TaskCall(0)
0x185: Call2 0x0

0x186: Pop(-2, 1); TaskReturn
0x187: Pop(2)
0x188: Return(); Pop(0)

0x189: PushEmpty(float, bool, float, bool)
0x18a: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x18b: Push((int) 3)
0x18c: @ rand(Stack[-3], Stack[-1])
0x18d: Pop(1)
0x18e: Push((int) 3)
0x18f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x190: @ Sleep(Stack[-1], Stack[-2])
0x191: Pop(1)
0x192: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x193: PushEmpty(float, float)
0x194: Stack[-2] = Stack[-8]
0x195: Stack[-1] = Stack[-7]
0x196: Call2 0x1ce

0x197: Pop(2)
0x198: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x199: GOTO 0x18b

0x19a: Return(); Pop(4)

0x19b: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 0
0x19e: PushEmpty(bool)
0x19f: Call2 0x27b

0x1a0: Pop(0)
0x1a1: Pop(1); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: PushEmpty(bool)
0x1a4: Call2 0x1cc

0x1a5: Pop(0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[-1] = (bool) 1
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a9: PushEmpty(object)
0x1aa: Call2 0x308

0x1ab: Pop(0)
0x1ac: @ RemoveActor(Stack[-1])
0x1ad: Pop(1)
0x1ae: Return(); Pop(0)

0x1af: PushEmpty()
0x1b0: Push("cleanup")
0x1b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b3: PushEmpty()
0x1b4: Call2 0x19b

0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b9: PushEmpty()
0x1ba: Call2 0x20f

0x1bb: Pop(0)
0x1bc: PushEmpty(bool)
0x1bd: Stack[-1] = (bool) 0
0x1be: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: PushEmpty(bool)
0x1c1: Call2 0x1cc

0x1c2: Pop(0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(object)
0x1c7: Call2 0x308

0x1c8: Pop(0)
0x1c9: @ RemoveActor(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(0)

0x1cc: Stack[-1] = (bool) 1
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: PushEmpty(bool)
0x1d0: Call2 0x27b

0x1d1: Pop(0)
0x1d2: Pop(1); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Return(); Pop(0)

0x1d5: Push("player")
0x1d6: @ FindActor(Stack[-4], Stack[-1])
0x1d7: Pop(1)
0x1d8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1da: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1db: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1dc: Push((int) 10)
0x1dd: Push((float)1.0)
0x1de: @ SetTimer(Stack[-2], Stack[-1])
0x1df: Pop(2)
0x1e0: PushEmpty()
0x1e1: Call2 0x21d

0x1e2: Pop(0)
0x1e3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e5: Push((int) 10)
0x1e6: @ KillTimer(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(float, float)
0x1ea: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ec: Stack[-3] = (bool) 0
0x1ed: Return(); Pop(2)

0x1ee: PushEmpty(float, object)
0x1ef: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f0: Call2 0x273

0x1f1: Pop(1)
0x1f2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f7: Return(); Pop(2)

0x1f8: PushEmpty()
0x1f9: Push((int) 10)
0x1fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x1e9

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x200: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(object)
0x203: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x204: Call2 0x2f6

0x205: Pop(1)
0x206: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x207: GOTO 0x20e

0x208: Push( Stack[2 + Tasks[-1].StackPointer] )
0x209: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20a: Push("head")
0x20b: @ UnlookAsync(Stack[-1])
0x20c: Pop(1)
0x20d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20e: Return(); Pop(0)

0x20f: PushEmpty()
0x210: Call2 0x26e

0x211: Pop(0)
0x212: Push((int) 10)
0x213: @ KillTimer(Stack[-1])
0x214: Pop(1)
0x215: Push( Stack[2 + Tasks[-1].StackPointer] )
0x216: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x217: Push("head")
0x218: @ UnlookAsync(Stack[-1])
0x219: Pop(1)
0x21a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21c: Return(); Pop(0)

0x21d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x21e: @ WaitForAnimEnd()
0x21f: Pop(0)
0x220: PushEmpty(bool)
0x221: Call2 0x27b

0x222: Pop(0)
0x223: Pop(1); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Return(); Pop(14)

0x226: PushEmpty(int)
0x227: Call2 0x32e

0x228: Stack[-8] = Stack[-1]
0x229: Pop(1)
0x22a: Stack[-6] = (int) 0
0x22b: PushEmpty(bool)
0x22c: Stack[-1] = (bool) 0
0x22d: Push((int) 5)
0x22e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x230: PushEmpty(bool)
0x231: Call2 0x27b

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = (bool) 1
0x235: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x236: Push((int) 3)
0x237: @ irand(Stack[-6], Stack[-1])
0x238: Pop(1)
0x239: Push((int) 0)
0x23a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23c: Push(Stack[-7])
0x23d: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x23e: @ irand(Stack[-4], Stack[-7])
0x23f: Pop(0)
0x240: Push("all")
0x241: PushEmpty(string, int)
0x242: Stack[-1] = Stack[-7]
0x243: Call2 0x327

0x244: Pop(1)
0x245: @ PlayAnimation(Stack[-2], Stack[-1])
0x246: Pop(2)
0x247: @ WaitForAnimEnd(Stack[-3])
0x248: Pop(0)
0x249: Pop(0); Push((bool) Stack[-3] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: GOTO 0x269

0x24c: GOTO 0x25e

0x24d: Push((int) 1)
0x24e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x250: Push((int) 4)
0x251: @ rand(Stack[-3], Stack[-1])
0x252: Pop(1)
0x253: Push((int) 1)
0x254: Pop(1); Push(Stack[-3] + Stack[-1]);
0x255: @ Sleep(Stack[-1], Stack[-2])
0x256: Pop(1)
0x257: Pop(0); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: GOTO 0x269

0x25a: GOTO 0x25e

0x25b: Push(Stack[-6])
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x269

0x25e: PushEmpty(bool)
0x25f: Call2 0x26c

0x260: Pop(0)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x269

0x264: @ ResetAAS()
0x265: Pop(0)
0x266: Push((int) 1)
0x267: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x268: GOTO 0x22b

0x269: @ ResetAAS()
0x26a: Pop(0)
0x26b: Return(); Pop(14)

0x26c: Stack[-1] = (bool) 1
0x26d: Return(); Pop(0)

0x26e: @ StopAnimation()
0x26f: Pop(0)
0x270: @ StopGroup0()
0x271: Pop(0)
0x272: Return(); Pop(0)

0x273: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x274: @ GetPosition(Stack[-3])
0x275: Pop(0)
0x276: @@ GetPosition(Stack[-2])
0x277: Pop(0)
0x278: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x279: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x27a: Return(); Pop(6)

0x27b: PushEmpty(bool, bool)
0x27c: @ IsLoaded(Stack[-1])
0x27d: Pop(0)
0x27e: Stack[-3] = Stack[-1]
0x27f: Return(); Pop(2)

0x280: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x281: @@ GetPosition(Stack[-8])
0x282: Pop(0)
0x283: @@ GetEyesHeight(Stack[-9])
0x284: Pop(0)
0x285: Push(CvectorIndex(Stack[-8], 1))
0x286: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x287: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x288: @ GetPosition(Stack[-7])
0x289: Pop(0)
0x28a: @ GetEyesHeight(Stack[-9])
0x28b: Pop(0)
0x28c: Push(CvectorIndex(Stack[-7], 1))
0x28d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x28f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x290: Push(CvectorIndex(Stack[-6], 1))
0x291: Stack[-1] = (int) 0
0x292: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x293: Pop(0); Push(Stack[-6] | Stack[-6]);
0x294: Pop(1); Push(Sqrt(Stack[-1]))
0x295: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x296: Stack[-5] = -Stack[-6]; Pop(0);
0x297: Pop(0); Push(Stack[-6] * Stack[-19]);
0x298: PushEmpty(cvector, cvector)
0x299: Push(CVector(0.0, 1.0, 0.0))
0x29a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x29b: Call2 0x30e

0x29c: Pop(1)
0x29d: Push((int) 25)
0x29e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a0: Push(CVector(0.0, 10.0, 0.0))
0x2a1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a3: @ IsOverrideActive(Stack[-2])
0x2a4: Pop(0)
0x2a5: Push(Stack[-2])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a7: Stack[-21] = (bool) 0
0x2a8: Return(); Pop(18)

0x2a9: @ StopWorld()
0x2aa: Pop(0)
0x2ab: Push((bool) 1)
0x2ac: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2ad: Pop(1)
0x2ae: Push(CvectorIndex(Stack[-4], 0))
0x2af: Push(CvectorIndex(Stack[-5], 2))
0x2b0: @ Rotate(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: PushEmpty(bool)
0x2b3: Call2 0x325

0x2b4: Pop(0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2bf

0x2b7: Push("head")
0x2b8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b9: Pop(1)
0x2ba: Push(Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bc: Push("head")
0x2bd: @ LookAsyncCamera(Stack[-1])
0x2be: Pop(1)
0x2bf: @ CameraWaitForPlayFinish()
0x2c0: Pop(0)
0x2c1: @ ResumeWorld()
0x2c2: Pop(0)
0x2c3: Stack[-21] = (bool) 1
0x2c4: Return(); Pop(18)

0x2c5: PushEmpty(bool, bool)
0x2c6: Push((bool) 1)
0x2c7: @ CameraSwitchToNormal(Stack[-1])
0x2c8: Pop(1)
0x2c9: PushEmpty(bool)
0x2ca: Call2 0x325

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d6

0x2ce: Push("head")
0x2cf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d0: Pop(1)
0x2d1: Push(Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Push("head")
0x2d4: @ UnlookAsync(Stack[-1])
0x2d5: Pop(1)
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty(bool, float, float, bool, float, float)
0x2d8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2d9: Pop(0)
0x2da: Push(Stack[-3])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2dd: Pop(0)
0x2de: Push((bool) 0)
0x2df: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(1)
0x2e1: GOTO 0x2e6

0x2e2: Push("Can't find lsh animation : ")
0x2e3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2e4: @ Trace(Stack[-1])
0x2e5: Pop(1)
0x2e6: Return(); Pop(6)

0x2e7: PushEmpty(bool, float, float, bool, float, float)
0x2e8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2e9: Pop(0)
0x2ea: Push(Stack[-3])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2ed: Pop(0)
0x2ee: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2ef: Pop(0)
0x2f0: GOTO 0x2f5

0x2f1: Push("Can't find lsh animation : ")
0x2f2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2f3: @ Trace(Stack[-1])
0x2f4: Pop(1)
0x2f5: Return(); Pop(6)

0x2f6: PushEmpty(float, cvector, float, cvector)
0x2f7: @@ GetEyesHeight(Stack[-2])
0x2f8: Pop(0)
0x2f9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2fa: Push(CvectorIndex(Stack[-1], 1))
0x2fb: Stack[-1] = Stack[-3]
0x2fc: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fd: Push("head")
0x2fe: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ff: Pop(1)
0x300: Return(); Pop(4)

0x301: PushEmpty(bool)
0x302: Call2 0x325

0x303: Pop(0)
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: @ lshStopSpeech()
0x306: Pop(0)
0x307: Return(); Pop(0)

0x308: PushEmpty(object, object)
0x309: @ self(Stack[-1])
0x30a: Pop(0)
0x30b: Stack[-3] = Stack[-1]
0x30c: Return(); Pop(2)

0x30d: Stack[-1] = 0
0x30e: PushEmpty(float, float)
0x30f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x310: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x311: Push((float)0.0)
0x312: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x315: Return(); Pop(2)

0x316: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x317: Return(); Pop(2)

0x318: PushEmpty(int, int)
0x319: @ GetVariable(Stack[-3], Stack[-1])
0x31a: Pop(0)
0x31b: Stack[-4] = Stack[-1]
0x31c: Return(); Pop(2)

0x31d: Stack[-1] = (int) 541572
0x31e: Return(); Pop(0)

0x31f: Stack[-1] = (int) 541571
0x320: Return(); Pop(0)

0x321: Stack[-1] = "ui/NPC_Citizen1.png"
0x322: Return(); Pop(0)

0x323: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x324: Return(); Pop(0)

0x325: Stack[-1] = (bool) 0
0x326: Return(); Pop(0)

0x327: PushEmpty(string, string)
0x328: Stack[-1] = "idle"
0x329: Push(Stack[-3])
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x32c: Stack[-4] = Stack[-1]
0x32d: Return(); Pop(2)

0x32e: PushEmpty(int, bool, int, bool)
0x32f: Stack[-2] = (int) 0
0x330: Push("all")
0x331: PushEmpty(string, int)
0x332: Stack[-1] = Stack[-5]
0x333: Call2 0x327

0x334: Pop(1)
0x335: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: Pop(0); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33d

0x33a: Push((int) 1)
0x33b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33c: GOTO 0x330

0x33d: Stack[-5] = Stack[-2]
0x33e: Return(); Pop(4)

0x33f: PushEmpty()
0x340: Push("ood1SalesmanLaska1")
0x341: Push((int) 1)
0x342: @ SetVariable(Stack[-2], Stack[-1])
0x343: Pop(2)
0x344: Return(); Pop(0)

0x345: PushEmpty()
0x346: PushEmpty(int, string)
0x347: Stack[-1] = "d1q02"
0x348: Call2 0x318

0x349: Pop(1)
0x34a: Push((int) 1000)
0x34b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-2] = (bool) 1
0x34e: Return(); Pop(0)

0x34f: Stack[-2] = (bool) 0
0x350: Return(); Pop(0)

0x351: PushEmpty()
0x352: PushEmpty(int, string)
0x353: Stack[-1] = "ood1SalesmanLaska1"
0x354: Call2 0x318

0x355: Pop(1)
0x356: Push((int) 0)
0x357: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-2] = (bool) 1
0x35a: Return(); Pop(0)

0x35b: Stack[-2] = (bool) 0
0x35c: Return(); Pop(0)

0x35d: PushEmpty(int, int)
0x35e: Push("branch")
0x35f: @ GetVariable(Stack[-1], Stack[-2])
0x360: Pop(1)
0x361: Push((int) 0)
0x362: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x364: Stack[-3] = (int) 1
0x365: Return(); Pop(2)

0x366: GOTO 0x36c

0x367: Push((int) 1)
0x368: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-3] = (int) 2
0x36b: Return(); Pop(2)

0x36c: Stack[-3] = (int) 3
0x36d: Return(); Pop(2)

