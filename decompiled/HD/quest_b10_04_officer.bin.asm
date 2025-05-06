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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	oob10Officer1
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

RunOp = 0x12d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x133 Vars = (object)
		EVENT_26 Op = 0x164 Vars = (string)
		EVENT_6 Op = 0x16c Vars = ()
		EVENT_7 Op = 0x1ad Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x235

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2ec

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2ea

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2ee

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2f0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x306

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
0x41: Call2 0x27a

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 530466)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2fa

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 530467)
0x5f: Push((int) 32813)
0x60: Push((int) 31833)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 530470)
0x64: Push((int) -1)
0x65: Push((int) 31836)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2f2

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x28c

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x2f2

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x29c

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2b6

0xa4: Pop(0)
0xa5: Push((int) 31833)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2f4

0xac: Pop(2)
0xad: Push((int) 31832)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 530466)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2fa

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 530467)
0xbf: Push((int) 32813)
0xc0: Push((int) 31833)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 530470)
0xc4: Push((int) -1)
0xc5: Push((int) 31836)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 32813)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 531463)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 531468)
0xd6: Push((int) 32819)
0xd7: Push((int) 32818)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 531464)
0xdb: Push((int) 31834)
0xdc: Push((int) 32814)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 531465)
0xe0: Push((int) 32816)
0xe1: Push((int) 32815)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 32816)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x89

0xeb: Pop(1)
0xec: Push((int) 531466)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 531467)
0xf2: Push((int) 32819)
0xf3: Push((int) 32817)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 32819)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call2 0x89

0xfd: Pop(1)
0xfe: Push((int) 531469)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 531470)
0x104: Push((int) -1)
0x105: Push((int) 32820)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 31834)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0x89

0x10f: Pop(1)
0x110: Push((int) 530468)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 530469)
0x116: Push((int) -1)
0x117: Push((int) 31835)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 531471)
0x11b: Push((int) -1)
0x11c: Push((int) 32822)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x121: PushEmpty(bool)
0x122: Call2 0x2f2

0x123: Pop(0)
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: @ lshStopAnimation()
0x126: Pop(0)
0x127: GOTO 0x12a

0x128: @ StopAnimation()
0x129: Pop(0)
0x12a: Return(); Pop(0)

0x12b: GOTO 0xa0

0x12c: Return(); Pop(0)

0x12d: PushEmpty(float, float)
0x12e: Stack[-2] = (int) 300
0x12f: Stack[-1] = (int) 100
0x130: Call2 0x13e

0x131: Pop(2)
0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: PushEmpty()
0x135: Call2 0x1c4

0x136: Pop(0)
0x137: PushEmpty(int, object)
0x138: Stack[-1] = Stack[-3]
0x139: Push(-2, 1); TaskCall(0)
0x13a: Call2 0x0

0x13b: Pop(-2, 1); TaskReturn
0x13c: Pop(2)
0x13d: Return(); Pop(0)

0x13e: PushEmpty(float, bool, float, bool)
0x13f: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x140: Push((int) 3)
0x141: @ rand(Stack[-3], Stack[-1])
0x142: Pop(1)
0x143: Push((int) 3)
0x144: Pop(1); Push(Stack[-3] + Stack[-1]);
0x145: @ Sleep(Stack[-1], Stack[-2])
0x146: Pop(1)
0x147: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x148: PushEmpty(float, float)
0x149: Stack[-2] = Stack[-8]
0x14a: Stack[-1] = Stack[-7]
0x14b: Call2 0x183

0x14c: Pop(2)
0x14d: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x14e: GOTO 0x140

0x14f: Return(); Pop(4)

0x150: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x151: PushEmpty(bool)
0x152: Stack[-1] = (bool) 0
0x153: PushEmpty(bool)
0x154: Call2 0x230

0x155: Pop(0)
0x156: Pop(1); Push((bool) Stack[-1] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(bool)
0x159: Call2 0x181

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 1
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: PushEmpty(object)
0x15f: Call2 0x2bd

0x160: Pop(0)
0x161: @ RemoveActor(Stack[-1])
0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: Push("cleanup")
0x166: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x168: PushEmpty()
0x169: Call2 0x150

0x16a: Pop(0)
0x16b: Return(); Pop(0)

0x16c: Push( Stack[6 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16e: PushEmpty()
0x16f: Call2 0x1c4

0x170: Pop(0)
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: Push( Stack[5 + Tasks[-1].StackPointer] )
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: PushEmpty(bool)
0x176: Call2 0x181

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Stack[-1] = (bool) 1
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: PushEmpty(object)
0x17c: Call2 0x2bd

0x17d: Pop(0)
0x17e: @ RemoveActor(Stack[-1])
0x17f: Pop(1)
0x180: Return(); Pop(0)

0x181: Stack[-1] = (bool) 1
0x182: Return(); Pop(0)

0x183: PushEmpty()
0x184: PushEmpty(bool)
0x185: Call2 0x230

0x186: Pop(0)
0x187: Pop(1); Push((bool) Stack[-1] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Return(); Pop(0)

0x18a: Push("player")
0x18b: @ FindActor(Stack[-4], Stack[-1])
0x18c: Pop(1)
0x18d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x18e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x190: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x191: Push((int) 10)
0x192: Push((float)1.0)
0x193: @ SetTimer(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: PushEmpty()
0x196: Call2 0x1d2

0x197: Pop(0)
0x198: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19a: Push((int) 10)
0x19b: @ KillTimer(Stack[-1])
0x19c: Pop(1)
0x19d: Return(); Pop(0)

0x19e: PushEmpty(float, float)
0x19f: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-3] = (bool) 0
0x1a2: Return(); Pop(2)

0x1a3: PushEmpty(float, object)
0x1a4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1a5: Call2 0x228

0x1a6: Pop(1)
0x1a7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1a8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ab: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty()
0x1ae: Push((int) 10)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b1: PushEmpty(bool)
0x1b2: Call2 0x19e

0x1b3: Pop(0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: PushEmpty(object)
0x1b8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b9: Call2 0x2ab

0x1ba: Pop(1)
0x1bb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1bc: GOTO 0x1c3

0x1bd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1be: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1bf: Push("head")
0x1c0: @ UnlookAsync(Stack[-1])
0x1c1: Pop(1)
0x1c2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty()
0x1c5: Call2 0x223

0x1c6: Pop(0)
0x1c7: Push((int) 10)
0x1c8: @ KillTimer(Stack[-1])
0x1c9: Pop(1)
0x1ca: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cc: Push("head")
0x1cd: @ UnlookAsync(Stack[-1])
0x1ce: Pop(1)
0x1cf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1d3: @ WaitForAnimEnd()
0x1d4: Pop(0)
0x1d5: PushEmpty(bool)
0x1d6: Call2 0x230

0x1d7: Pop(0)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Return(); Pop(14)

0x1db: PushEmpty(int)
0x1dc: Call2 0x2d9

0x1dd: Stack[-8] = Stack[-1]
0x1de: Pop(1)
0x1df: Stack[-6] = (int) 0
0x1e0: PushEmpty(bool)
0x1e1: Stack[-1] = (bool) 0
0x1e2: Push((int) 5)
0x1e3: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: PushEmpty(bool)
0x1e6: Call2 0x230

0x1e7: Pop(0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[-1] = (bool) 1
0x1ea: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x1eb: Push((int) 3)
0x1ec: @ irand(Stack[-6], Stack[-1])
0x1ed: Pop(1)
0x1ee: Push((int) 0)
0x1ef: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f1: Push(Stack[-7])
0x1f2: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f3: @ irand(Stack[-4], Stack[-7])
0x1f4: Pop(0)
0x1f5: Push("all")
0x1f6: PushEmpty(string, int)
0x1f7: Stack[-1] = Stack[-7]
0x1f8: Call2 0x2d2

0x1f9: Pop(1)
0x1fa: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fb: Pop(2)
0x1fc: @ WaitForAnimEnd(Stack[-3])
0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[-3] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: GOTO 0x21e

0x201: GOTO 0x213

0x202: Push((int) 1)
0x203: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x205: Push((int) 4)
0x206: @ rand(Stack[-3], Stack[-1])
0x207: Pop(1)
0x208: Push((int) 1)
0x209: Pop(1); Push(Stack[-3] + Stack[-1]);
0x20a: @ Sleep(Stack[-1], Stack[-2])
0x20b: Pop(1)
0x20c: Pop(0); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: GOTO 0x21e

0x20f: GOTO 0x213

0x210: Push(Stack[-6])
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: GOTO 0x21e

0x213: PushEmpty(bool)
0x214: Call2 0x221

0x215: Pop(0)
0x216: Pop(1); Push((bool) Stack[-1] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: GOTO 0x21e

0x219: @ ResetAAS()
0x21a: Pop(0)
0x21b: Push((int) 1)
0x21c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x21d: GOTO 0x1e0

0x21e: @ ResetAAS()
0x21f: Pop(0)
0x220: Return(); Pop(14)

0x221: Stack[-1] = (bool) 1
0x222: Return(); Pop(0)

0x223: @ StopAnimation()
0x224: Pop(0)
0x225: @ StopGroup0()
0x226: Pop(0)
0x227: Return(); Pop(0)

0x228: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x229: @ GetPosition(Stack[-3])
0x22a: Pop(0)
0x22b: @@ GetPosition(Stack[-2])
0x22c: Pop(0)
0x22d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x22e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x22f: Return(); Pop(6)

0x230: PushEmpty(bool, bool)
0x231: @ IsLoaded(Stack[-1])
0x232: Pop(0)
0x233: Stack[-3] = Stack[-1]
0x234: Return(); Pop(2)

0x235: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x236: @@ GetPosition(Stack[-8])
0x237: Pop(0)
0x238: @@ GetEyesHeight(Stack[-9])
0x239: Pop(0)
0x23a: Push(CvectorIndex(Stack[-8], 1))
0x23b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x23c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x23d: @ GetPosition(Stack[-7])
0x23e: Pop(0)
0x23f: @ GetEyesHeight(Stack[-9])
0x240: Pop(0)
0x241: Push(CvectorIndex(Stack[-7], 1))
0x242: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x243: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x244: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x245: Push(CvectorIndex(Stack[-6], 1))
0x246: Stack[-1] = (int) 0
0x247: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x248: Pop(0); Push(Stack[-6] | Stack[-6]);
0x249: Pop(1); Push(Sqrt(Stack[-1]))
0x24a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x24b: Stack[-5] = -Stack[-6]; Pop(0);
0x24c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x24d: PushEmpty(cvector, cvector)
0x24e: Push(CVector(0.0, 1.0, 0.0))
0x24f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x250: Call2 0x2c3

0x251: Pop(1)
0x252: Push((int) 25)
0x253: Pop(2); Push(Stack[-2] * Stack[-1]);
0x254: Pop(2); Push(Stack[-2] + Stack[-1]);
0x255: Push(CVector(0.0, 10.0, 0.0))
0x256: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x257: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x258: @ IsOverrideActive(Stack[-2])
0x259: Pop(0)
0x25a: Push(Stack[-2])
0x25b: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25c: Stack[-21] = (bool) 0
0x25d: Return(); Pop(18)

0x25e: @ StopWorld()
0x25f: Pop(0)
0x260: Push((bool) 1)
0x261: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x262: Pop(1)
0x263: Push(CvectorIndex(Stack[-4], 0))
0x264: Push(CvectorIndex(Stack[-5], 2))
0x265: @ Rotate(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: PushEmpty(bool)
0x268: Call2 0x2f2

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x274

0x26c: Push("head")
0x26d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26e: Pop(1)
0x26f: Push(Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x271: Push("head")
0x272: @ LookAsyncCamera(Stack[-1])
0x273: Pop(1)
0x274: @ CameraWaitForPlayFinish()
0x275: Pop(0)
0x276: @ ResumeWorld()
0x277: Pop(0)
0x278: Stack[-21] = (bool) 1
0x279: Return(); Pop(18)

0x27a: PushEmpty(bool, bool)
0x27b: Push((bool) 1)
0x27c: @ CameraSwitchToNormal(Stack[-1])
0x27d: Pop(1)
0x27e: PushEmpty(bool)
0x27f: Call2 0x2f2

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: GOTO 0x28b

0x283: Push("head")
0x284: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x285: Pop(1)
0x286: Push(Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x288: Push("head")
0x289: @ UnlookAsync(Stack[-1])
0x28a: Pop(1)
0x28b: Return(); Pop(2)

0x28c: PushEmpty(bool, float, float, bool, float, float)
0x28d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x28e: Pop(0)
0x28f: Push(Stack[-3])
0x290: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x291: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x292: Pop(0)
0x293: Push((bool) 0)
0x294: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(1)
0x296: GOTO 0x29b

0x297: Push("Can't find lsh animation : ")
0x298: Pop(1); Push(Stack[-1] + Stack[-8]);
0x299: @ Trace(Stack[-1])
0x29a: Pop(1)
0x29b: Return(); Pop(6)

0x29c: PushEmpty(bool, float, float, bool, float, float)
0x29d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x29e: Pop(0)
0x29f: Push(Stack[-3])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2a2: Pop(0)
0x2a3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a4: Pop(0)
0x2a5: GOTO 0x2aa

0x2a6: Push("Can't find lsh animation : ")
0x2a7: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2a8: @ Trace(Stack[-1])
0x2a9: Pop(1)
0x2aa: Return(); Pop(6)

0x2ab: PushEmpty(float, cvector, float, cvector)
0x2ac: @@ GetEyesHeight(Stack[-2])
0x2ad: Pop(0)
0x2ae: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2af: Push(CvectorIndex(Stack[-1], 1))
0x2b0: Stack[-1] = Stack[-3]
0x2b1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2b2: Push("head")
0x2b3: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2b4: Pop(1)
0x2b5: Return(); Pop(4)

0x2b6: PushEmpty(bool)
0x2b7: Call2 0x2f2

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: @ lshStopSpeech()
0x2bb: Pop(0)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(object, object)
0x2be: @ self(Stack[-1])
0x2bf: Pop(0)
0x2c0: Stack[-3] = Stack[-1]
0x2c1: Return(); Pop(2)

0x2c2: Stack[-1] = 0
0x2c3: PushEmpty(float, float)
0x2c4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2c5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2c6: Push((float)0.0)
0x2c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2ca: Return(); Pop(2)

0x2cb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(int, int)
0x2ce: @ GetVariable(Stack[-3], Stack[-1])
0x2cf: Pop(0)
0x2d0: Stack[-4] = Stack[-1]
0x2d1: Return(); Pop(2)

0x2d2: PushEmpty(string, string)
0x2d3: Stack[-1] = "idle"
0x2d4: Push(Stack[-3])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2d7: Stack[-4] = Stack[-1]
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(int, bool, int, bool)
0x2da: Stack[-2] = (int) 0
0x2db: Push("all")
0x2dc: PushEmpty(string, int)
0x2dd: Stack[-1] = Stack[-5]
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

0x2e8: Stack[-5] = Stack[-2]
0x2e9: Return(); Pop(4)

0x2ea: Stack[-1] = (int) 515597
0x2eb: Return(); Pop(0)

0x2ec: Stack[-1] = (int) 514841
0x2ed: Return(); Pop(0)

0x2ee: Stack[-1] = "ui/NPC_Citizen2.png"
0x2ef: Return(); Pop(0)

0x2f0: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2f1: Return(); Pop(0)

0x2f2: Stack[-1] = (bool) 0
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: Push("oob10Officer1")
0x2f6: Push((int) 1)
0x2f7: @ SetVariable(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: PushEmpty(int, string)
0x2fc: Stack[-1] = "oob10Officer1"
0x2fd: Call2 0x2cd

0x2fe: Pop(1)
0x2ff: Push((int) 0)
0x300: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-2] = (bool) 1
0x303: Return(); Pop(0)

0x304: Stack[-2] = (bool) 0
0x305: Return(); Pop(0)

0x306: PushEmpty(int, int)
0x307: Push("branch")
0x308: @ GetVariable(Stack[-1], Stack[-2])
0x309: Pop(1)
0x30a: Push((int) 0)
0x30b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: Stack[-3] = (int) 1
0x30e: Return(); Pop(2)

0x30f: GOTO 0x315

0x310: Push((int) 1)
0x311: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-3] = (int) 2
0x314: Return(); Pop(2)

0x315: Stack[-3] = (int) 3
0x316: Return(); Pop(2)

