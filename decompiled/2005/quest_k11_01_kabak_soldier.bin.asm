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
	ook11KabakSoldier1
	k11q01
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x14e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x154 Vars = (object)
		EVENT_26 Op = 0x185 Vars = (string)
		EVENT_6 Op = 0x18d Vars = ()
		EVENT_7 Op = 0x1ce Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x256

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x33a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x338

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x33c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x33e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x327

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
0x41: Call2 0x29a

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
0x4f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x97

0x53: Pop(1)
0x54: Push((int) 528014)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x31b

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x30f

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 528015)
0x68: Push((int) 31621)
0x69: Push((int) 29377)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Push((int) 528016)
0x6d: Push((int) -1)
0x6e: Push((int) 29378)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: Push((int) 530232)
0x72: Push((int) -1)
0x73: Push((int) 31620)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0x79

0x77: Return(); Pop(0)

0x78: GOTO 0x4e

0x79: PushEmpty(bool)
0x7a: Call2 0x340

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x2ab

0x85: Pop(1)
0x86: GOTO 0x7d

0x87: GOTO 0x96

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: @ WaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: Push("all")
0x92: Push("idle")
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x8c

0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: PushEmpty(bool)
0x99: Call2 0x340

0x9a: Pop(0)
0x9b: Pop(1); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(0)

0x9e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: PushEmpty(string, bool)
0xa2: Stack[-2] = Stack[-3]
0xa3: Push("")
0xa4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: Stack[-1] = (bool) 0
0xa7: GOTO 0xa9

0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x2bb

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x2d5

0xb2: Pop(0)
0xb3: Push((int) 29377)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x309

0xba: Pop(2)
0xbb: Push((int) 29376)
0xbc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = "Neutral"
0xc0: Call2 0x97

0xc1: Pop(1)
0xc2: Push((int) 528014)
0xc3: @@ SetMessage(Stack[-1])
0xc4: Pop(1)
0xc5: @@ ClearReplies()
0xc6: Pop(0)
0xc7: PushEmpty(bool)
0xc8: Stack[-1] = (bool) 0
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x31b

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x30f

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 1
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: Push((int) 528015)
0xd6: Push((int) 31621)
0xd7: Push((int) 29377)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 528016)
0xdb: Push((int) -1)
0xdc: Push((int) 29378)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 530232)
0xe0: Push((int) -1)
0xe1: Push((int) 31620)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 31621)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x97

0xeb: Pop(1)
0xec: Push((int) 530233)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 530234)
0xf2: Push((int) 29379)
0xf3: Push((int) 31622)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 530235)
0xf7: Push((int) -1)
0xf8: Push((int) 31623)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 29379)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x97

0x102: Pop(1)
0x103: Push((int) 528017)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 528018)
0x109: Push((int) 31625)
0x10a: Push((int) 29380)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 530236)
0x10e: Push((int) -1)
0x10f: Push((int) 31624)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 31625)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0x97

0x119: Pop(1)
0x11a: Push((int) 530237)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 530238)
0x120: Push((int) 31628)
0x121: Push((int) 31626)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 530239)
0x125: Push((int) -1)
0x126: Push((int) 31627)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 31628)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0x97

0x130: Pop(1)
0x131: Push((int) 530240)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 530241)
0x137: Push((int) -1)
0x138: Push((int) 31629)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push((int) 530242)
0x13c: Push((int) -1)
0x13d: Push((int) 31630)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x142: PushEmpty(bool)
0x143: Call2 0x340

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: @ lshStopAnimation()
0x147: Pop(0)
0x148: GOTO 0x14b

0x149: @ StopAnimation()
0x14a: Pop(0)
0x14b: Return(); Pop(0)

0x14c: GOTO 0xae

0x14d: Return(); Pop(0)

0x14e: PushEmpty(float, float)
0x14f: Stack[-2] = (int) 300
0x150: Stack[-1] = (int) 100
0x151: Call2 0x15f

0x152: Pop(2)
0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: PushEmpty()
0x156: Call2 0x1e5

0x157: Pop(0)
0x158: PushEmpty(int, object)
0x159: Stack[-1] = Stack[-3]
0x15a: Push(-2, 1); TaskCall(0)
0x15b: Call2 0x0

0x15c: Pop(-2, 1); TaskReturn
0x15d: Pop(2)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(float, bool, float, bool)
0x160: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x161: Push((int) 3)
0x162: @ rand(Stack[-3], Stack[-1])
0x163: Pop(1)
0x164: Push((int) 3)
0x165: Pop(1); Push(Stack[-3] + Stack[-1]);
0x166: @ Sleep(Stack[-1], Stack[-2])
0x167: Pop(1)
0x168: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x169: PushEmpty(float, float)
0x16a: Stack[-2] = Stack[-8]
0x16b: Stack[-1] = Stack[-7]
0x16c: Call2 0x1a4

0x16d: Pop(2)
0x16e: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x16f: GOTO 0x161

0x170: Return(); Pop(4)

0x171: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 0
0x174: PushEmpty(bool)
0x175: Call2 0x251

0x176: Pop(0)
0x177: Pop(1); Push((bool) Stack[-1] == 0)
0x178: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x179: PushEmpty(bool)
0x17a: Call2 0x1a2

0x17b: Pop(0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 1
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: PushEmpty(object)
0x180: Call2 0x2dc

0x181: Pop(0)
0x182: @ RemoveActor(Stack[-1])
0x183: Pop(1)
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: Push("cleanup")
0x187: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x189: PushEmpty()
0x18a: Call2 0x171

0x18b: Pop(0)
0x18c: Return(); Pop(0)

0x18d: Push( Stack[6 + Tasks[-1].StackPointer] )
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: PushEmpty()
0x190: Call2 0x1e5

0x191: Pop(0)
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: Push( Stack[5 + Tasks[-1].StackPointer] )
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: PushEmpty(bool)
0x197: Call2 0x1a2

0x198: Pop(0)
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Stack[-1] = (bool) 1
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: PushEmpty(object)
0x19d: Call2 0x2dc

0x19e: Pop(0)
0x19f: @ RemoveActor(Stack[-1])
0x1a0: Pop(1)
0x1a1: Return(); Pop(0)

0x1a2: Stack[-1] = (bool) 1
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: PushEmpty(bool)
0x1a6: Call2 0x251

0x1a7: Pop(0)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Return(); Pop(0)

0x1ab: Push("player")
0x1ac: @ FindActor(Stack[-4], Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1af: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b2: Push((int) 10)
0x1b3: Push((float)1.0)
0x1b4: @ SetTimer(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: PushEmpty()
0x1b7: Call2 0x1f3

0x1b8: Pop(0)
0x1b9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: Push((int) 10)
0x1bc: @ KillTimer(Stack[-1])
0x1bd: Pop(1)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(float, float)
0x1c0: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-3] = (bool) 0
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty(float, object)
0x1c5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c6: Call2 0x249

0x1c7: Pop(1)
0x1c8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1cc: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1cd: Return(); Pop(2)

0x1ce: PushEmpty()
0x1cf: Push((int) 10)
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1bf

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object)
0x1d9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1da: Call2 0x2ca

0x1db: Pop(1)
0x1dc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1dd: GOTO 0x1e4

0x1de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1df: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e0: Push("head")
0x1e1: @ UnlookAsync(Stack[-1])
0x1e2: Pop(1)
0x1e3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty()
0x1e6: Call2 0x244

0x1e7: Pop(0)
0x1e8: Push((int) 10)
0x1e9: @ KillTimer(Stack[-1])
0x1ea: Pop(1)
0x1eb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: Push("head")
0x1ee: @ UnlookAsync(Stack[-1])
0x1ef: Pop(1)
0x1f0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f4: @ WaitForAnimEnd()
0x1f5: Pop(0)
0x1f6: PushEmpty(bool)
0x1f7: Call2 0x251

0x1f8: Pop(0)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Return(); Pop(14)

0x1fc: PushEmpty(int)
0x1fd: Call2 0x2f8

0x1fe: Stack[-8] = Stack[-1]
0x1ff: Pop(1)
0x200: Stack[-6] = (int) 0
0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Push((int) 5)
0x204: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x251

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x20c: Push((int) 3)
0x20d: @ irand(Stack[-6], Stack[-1])
0x20e: Pop(1)
0x20f: Push((int) 0)
0x210: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x212: Push(Stack[-7])
0x213: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x214: @ irand(Stack[-4], Stack[-7])
0x215: Pop(0)
0x216: Push("all")
0x217: PushEmpty(string, int)
0x218: Stack[-1] = Stack[-7]
0x219: Call2 0x2f1

0x21a: Pop(1)
0x21b: @ PlayAnimation(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: @ WaitForAnimEnd(Stack[-3])
0x21e: Pop(0)
0x21f: Pop(0); Push((bool) Stack[-3] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x23f

0x222: GOTO 0x234

0x223: Push((int) 1)
0x224: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x226: Push((int) 4)
0x227: @ rand(Stack[-3], Stack[-1])
0x228: Pop(1)
0x229: Push((int) 1)
0x22a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22b: @ Sleep(Stack[-1], Stack[-2])
0x22c: Pop(1)
0x22d: Pop(0); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x23f

0x230: GOTO 0x234

0x231: Push(Stack[-6])
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: GOTO 0x23f

0x234: PushEmpty(bool)
0x235: Call2 0x242

0x236: Pop(0)
0x237: Pop(1); Push((bool) Stack[-1] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x23f

0x23a: @ ResetAAS()
0x23b: Pop(0)
0x23c: Push((int) 1)
0x23d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x23e: GOTO 0x201

0x23f: @ ResetAAS()
0x240: Pop(0)
0x241: Return(); Pop(14)

0x242: Stack[-1] = (bool) 1
0x243: Return(); Pop(0)

0x244: @ StopAnimation()
0x245: Pop(0)
0x246: @ StopGroup0()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x24a: @ GetPosition(Stack[-3])
0x24b: Pop(0)
0x24c: @@ GetPosition(Stack[-2])
0x24d: Pop(0)
0x24e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x250: Return(); Pop(6)

0x251: PushEmpty(bool, bool)
0x252: @ IsLoaded(Stack[-1])
0x253: Pop(0)
0x254: Stack[-3] = Stack[-1]
0x255: Return(); Pop(2)

0x256: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x257: @@ GetPosition(Stack[-8])
0x258: Pop(0)
0x259: @@ GetEyesHeight(Stack[-9])
0x25a: Pop(0)
0x25b: Push(CvectorIndex(Stack[-8], 1))
0x25c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25e: @ GetPosition(Stack[-7])
0x25f: Pop(0)
0x260: @ GetEyesHeight(Stack[-9])
0x261: Pop(0)
0x262: Push(CvectorIndex(Stack[-7], 1))
0x263: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x264: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x265: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x266: Push(CvectorIndex(Stack[-6], 1))
0x267: Stack[-1] = (int) 0
0x268: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x269: Pop(0); Push(Stack[-6] | Stack[-6]);
0x26a: Pop(1); Push(Sqrt(Stack[-1]))
0x26b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x26c: Stack[-5] = -Stack[-6]; Pop(0);
0x26d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26e: PushEmpty(cvector, cvector)
0x26f: Push(CVector(0.0, 1.0, 0.0))
0x270: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x271: Call2 0x2e2

0x272: Pop(1)
0x273: Push((int) 25)
0x274: Pop(2); Push(Stack[-2] * Stack[-1]);
0x275: Pop(2); Push(Stack[-2] + Stack[-1]);
0x276: Push(CVector(0.0, 10.0, 0.0))
0x277: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x278: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x279: @ IsOverrideActive(Stack[-2])
0x27a: Pop(0)
0x27b: Push(Stack[-2])
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: Stack[-21] = (bool) 0
0x27e: Return(); Pop(18)

0x27f: @ StopWorld()
0x280: Pop(0)
0x281: @ CameraTransit(Stack[-3], Stack[-5])
0x282: Pop(0)
0x283: Push(CvectorIndex(Stack[-4], 0))
0x284: Push(CvectorIndex(Stack[-5], 2))
0x285: @ Rotate(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: PushEmpty(bool)
0x288: Call2 0x340

0x289: Pop(0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x294

0x28c: Push("head")
0x28d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28e: Pop(1)
0x28f: Push(Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x291: Push("head")
0x292: @ LookAsyncCamera(Stack[-1])
0x293: Pop(1)
0x294: @ CameraWaitForPlayFinish()
0x295: Pop(0)
0x296: @ ResumeWorld()
0x297: Pop(0)
0x298: Stack[-21] = (bool) 1
0x299: Return(); Pop(18)

0x29a: PushEmpty(bool, bool)
0x29b: @ CameraSwitchToNormal()
0x29c: Pop(0)
0x29d: PushEmpty(bool)
0x29e: Call2 0x340

0x29f: Pop(0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2aa

0x2a2: Push("head")
0x2a3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a4: Pop(1)
0x2a5: Push(Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a7: Push("head")
0x2a8: @ UnlookAsync(Stack[-1])
0x2a9: Pop(1)
0x2aa: Return(); Pop(2)

0x2ab: PushEmpty(bool, float, float, bool, float, float)
0x2ac: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2ad: Pop(0)
0x2ae: Push(Stack[-3])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b1: Pop(0)
0x2b2: Push((bool) 0)
0x2b3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(1)
0x2b5: GOTO 0x2ba

0x2b6: Push("Can't find lsh animation : ")
0x2b7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b8: @ Trace(Stack[-1])
0x2b9: Pop(1)
0x2ba: Return(); Pop(6)

0x2bb: PushEmpty(bool, float, float, bool, float, float)
0x2bc: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2bd: Pop(0)
0x2be: Push(Stack[-3])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c1: Pop(0)
0x2c2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c3: Pop(0)
0x2c4: GOTO 0x2c9

0x2c5: Push("Can't find lsh animation : ")
0x2c6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c7: @ Trace(Stack[-1])
0x2c8: Pop(1)
0x2c9: Return(); Pop(6)

0x2ca: PushEmpty(float, cvector, float, cvector)
0x2cb: @@ GetEyesHeight(Stack[-2])
0x2cc: Pop(0)
0x2cd: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2ce: Push(CvectorIndex(Stack[-1], 1))
0x2cf: Stack[-1] = Stack[-3]
0x2d0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2d1: Push("head")
0x2d2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2d3: Pop(1)
0x2d4: Return(); Pop(4)

0x2d5: PushEmpty(bool)
0x2d6: Call2 0x340

0x2d7: Pop(0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: @ lshStopSpeech()
0x2da: Pop(0)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(object, object)
0x2dd: @ self(Stack[-1])
0x2de: Pop(0)
0x2df: Stack[-3] = Stack[-1]
0x2e0: Return(); Pop(2)

0x2e1: Stack[-1] = 0
0x2e2: PushEmpty(float, float)
0x2e3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2e4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e5: Push((float)0.0)
0x2e6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e9: Return(); Pop(2)

0x2ea: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2eb: Return(); Pop(2)

0x2ec: PushEmpty(int, int)
0x2ed: @ GetVariable(Stack[-3], Stack[-1])
0x2ee: Pop(0)
0x2ef: Stack[-4] = Stack[-1]
0x2f0: Return(); Pop(2)

0x2f1: PushEmpty(string, string)
0x2f2: Stack[-1] = "idle"
0x2f3: Push(Stack[-3])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f6: Stack[-4] = Stack[-1]
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(int, bool, int, bool)
0x2f9: Stack[-2] = (int) 0
0x2fa: Push("all")
0x2fb: PushEmpty(string, int)
0x2fc: Stack[-1] = Stack[-5]
0x2fd: Call2 0x2f1

0x2fe: Pop(1)
0x2ff: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: Pop(0); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x303: GOTO 0x307

0x304: Push((int) 1)
0x305: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x306: GOTO 0x2fa

0x307: Stack[-5] = Stack[-2]
0x308: Return(); Pop(4)

0x309: PushEmpty()
0x30a: Push("ook11KabakSoldier1")
0x30b: Push((int) 1)
0x30c: @ SetVariable(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: PushEmpty(int, string)
0x311: Stack[-1] = "k11q01"
0x312: Call2 0x2ec

0x313: Pop(1)
0x314: Push((int) 2)
0x315: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-2] = (bool) 1
0x318: Return(); Pop(0)

0x319: Stack[-2] = (bool) 0
0x31a: Return(); Pop(0)

0x31b: PushEmpty()
0x31c: PushEmpty(int, string)
0x31d: Stack[-1] = "ook11KabakSoldier1"
0x31e: Call2 0x2ec

0x31f: Pop(1)
0x320: Push((int) 0)
0x321: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-2] = (bool) 1
0x324: Return(); Pop(0)

0x325: Stack[-2] = (bool) 0
0x326: Return(); Pop(0)

0x327: PushEmpty(int, int)
0x328: Push("branch")
0x329: @ GetVariable(Stack[-1], Stack[-2])
0x32a: Pop(1)
0x32b: Push((int) 0)
0x32c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32e: Stack[-3] = (int) 1
0x32f: Return(); Pop(2)

0x330: GOTO 0x336

0x331: Push((int) 1)
0x332: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-3] = (int) 2
0x335: Return(); Pop(2)

0x336: Stack[-3] = (int) 3
0x337: Return(); Pop(2)

0x338: Stack[-1] = (int) 527721
0x339: Return(); Pop(0)

0x33a: Stack[-1] = (int) 527720
0x33b: Return(); Pop(0)

0x33c: Stack[-1] = "ui/NPC_Citizen1.png"
0x33d: Return(); Pop(0)

0x33e: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x33f: Return(); Pop(0)

0x340: Stack[-1] = (bool) 0
0x341: Return(); Pop(0)

