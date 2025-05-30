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
	quest_k4_01
	cutscene
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
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xfa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x100 Vars = (object)
		EVENT_26 Op = 0x131 Vars = (string)
		EVENT_6 Op = 0x139 Vars = ()
		EVENT_7 Op = 0x17a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x202

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2d8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2d6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2da

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2dc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2c5

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
0x41: Call2 0x247

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 529830)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 530225)
0x5a: Push((int) 31614)
0x5b: Push((int) 31613)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 530227)
0x5f: Push((int) 31616)
0x60: Push((int) 31615)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x2de

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x259

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x2de

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x269

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x283

0x9f: Pop(0)
0xa0: Push((int) 31278)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x2be

0xa7: Pop(2)
0xa8: Push((int) 31277)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 529830)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 530225)
0xb5: Push((int) 31614)
0xb6: Push((int) 31613)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: Push((int) 530227)
0xba: Push((int) 31616)
0xbb: Push((int) 31615)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Push((int) 31616)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x84

0xc5: Pop(1)
0xc6: Push((int) 530228)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: Push((int) 530229)
0xcc: Push((int) 31614)
0xcd: Push((int) 31617)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 530230)
0xd1: Push((int) -1)
0xd2: Push((int) 31618)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Push((int) 31614)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral"
0xdb: Call2 0x84

0xdc: Pop(1)
0xdd: Push((int) 530226)
0xde: @@ SetMessage(Stack[-1])
0xdf: Pop(1)
0xe0: @@ ClearReplies()
0xe1: Pop(0)
0xe2: Push((int) 529831)
0xe3: Push((int) -1)
0xe4: Push((int) 31278)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Push((int) 529832)
0xe8: Push((int) -1)
0xe9: Push((int) 31279)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xee: PushEmpty(bool)
0xef: Call2 0x2de

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: @ lshStopAnimation()
0xf3: Pop(0)
0xf4: GOTO 0xf7

0xf5: @ StopAnimation()
0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: GOTO 0x9b

0xf9: Return(); Pop(0)

0xfa: PushEmpty(float, float)
0xfb: Stack[-2] = (int) 300
0xfc: Stack[-1] = (int) 100
0xfd: Call2 0x10b

0xfe: Pop(2)
0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: PushEmpty()
0x102: Call2 0x191

0x103: Pop(0)
0x104: PushEmpty(int, object)
0x105: Stack[-1] = Stack[-3]
0x106: Push(-2, 1); TaskCall(0)
0x107: Call2 0x0

0x108: Pop(-2, 1); TaskReturn
0x109: Pop(2)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(float, bool, float, bool)
0x10c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x10d: Push((int) 3)
0x10e: @ rand(Stack[-3], Stack[-1])
0x10f: Pop(1)
0x110: Push((int) 3)
0x111: Pop(1); Push(Stack[-3] + Stack[-1]);
0x112: @ Sleep(Stack[-1], Stack[-2])
0x113: Pop(1)
0x114: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x115: PushEmpty(float, float)
0x116: Stack[-2] = Stack[-8]
0x117: Stack[-1] = Stack[-7]
0x118: Call2 0x150

0x119: Pop(2)
0x11a: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x11b: GOTO 0x10d

0x11c: Return(); Pop(4)

0x11d: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x11e: PushEmpty(bool)
0x11f: Stack[-1] = (bool) 0
0x120: PushEmpty(bool)
0x121: Call2 0x1fd

0x122: Pop(0)
0x123: Pop(1); Push((bool) Stack[-1] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: PushEmpty(bool)
0x126: Call2 0x14e

0x127: Pop(0)
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: Stack[-1] = (bool) 1
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(object)
0x12c: Call2 0x28a

0x12d: Pop(0)
0x12e: @ RemoveActor(Stack[-1])
0x12f: Pop(1)
0x130: Return(); Pop(0)

0x131: PushEmpty()
0x132: Push("cleanup")
0x133: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x135: PushEmpty()
0x136: Call2 0x11d

0x137: Pop(0)
0x138: Return(); Pop(0)

0x139: Push( Stack[6 + Tasks[-1].StackPointer] )
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x191

0x13d: Pop(0)
0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: Push( Stack[5 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: PushEmpty(bool)
0x143: Call2 0x14e

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x146: Stack[-1] = (bool) 1
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: PushEmpty(object)
0x149: Call2 0x28a

0x14a: Pop(0)
0x14b: @ RemoveActor(Stack[-1])
0x14c: Pop(1)
0x14d: Return(); Pop(0)

0x14e: Stack[-1] = (bool) 1
0x14f: Return(); Pop(0)

0x150: PushEmpty()
0x151: PushEmpty(bool)
0x152: Call2 0x1fd

0x153: Pop(0)
0x154: Pop(1); Push((bool) Stack[-1] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: Return(); Pop(0)

0x157: Push("player")
0x158: @ FindActor(Stack[-4], Stack[-1])
0x159: Pop(1)
0x15a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x15d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x15e: Push((int) 10)
0x15f: Push((float)1.0)
0x160: @ SetTimer(Stack[-2], Stack[-1])
0x161: Pop(2)
0x162: PushEmpty()
0x163: Call2 0x19f

0x164: Pop(0)
0x165: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: Push((int) 10)
0x168: @ KillTimer(Stack[-1])
0x169: Pop(1)
0x16a: Return(); Pop(0)

0x16b: PushEmpty(float, float)
0x16c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16e: Stack[-3] = (bool) 0
0x16f: Return(); Pop(2)

0x170: PushEmpty(float, object)
0x171: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x172: Call2 0x1f5

0x173: Pop(1)
0x174: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x175: Push( Stack[2 + Tasks[-1].StackPointer] )
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x178: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x179: Return(); Pop(2)

0x17a: PushEmpty()
0x17b: Push((int) 10)
0x17c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17e: PushEmpty(bool)
0x17f: Call2 0x16b

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x182: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x186: Call2 0x278

0x187: Pop(1)
0x188: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x189: GOTO 0x190

0x18a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18c: Push("head")
0x18d: @ UnlookAsync(Stack[-1])
0x18e: Pop(1)
0x18f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: Call2 0x1f0

0x193: Pop(0)
0x194: Push((int) 10)
0x195: @ KillTimer(Stack[-1])
0x196: Pop(1)
0x197: Push( Stack[2 + Tasks[-1].StackPointer] )
0x198: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x199: Push("head")
0x19a: @ UnlookAsync(Stack[-1])
0x19b: Pop(1)
0x19c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19e: Return(); Pop(0)

0x19f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1a0: @ WaitForAnimEnd()
0x1a1: Pop(0)
0x1a2: PushEmpty(bool)
0x1a3: Call2 0x1fd

0x1a4: Pop(0)
0x1a5: Pop(1); Push((bool) Stack[-1] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Return(); Pop(14)

0x1a8: PushEmpty(int)
0x1a9: Call2 0x2ad

0x1aa: Stack[-8] = Stack[-1]
0x1ab: Pop(1)
0x1ac: Stack[-6] = (int) 0
0x1ad: PushEmpty(bool)
0x1ae: Stack[-1] = (bool) 0
0x1af: Push((int) 5)
0x1b0: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: PushEmpty(bool)
0x1b3: Call2 0x1fd

0x1b4: Pop(0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1b8: Push((int) 3)
0x1b9: @ irand(Stack[-6], Stack[-1])
0x1ba: Pop(1)
0x1bb: Push((int) 0)
0x1bc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1be: Push(Stack[-7])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c0: @ irand(Stack[-4], Stack[-7])
0x1c1: Pop(0)
0x1c2: Push("all")
0x1c3: PushEmpty(string, int)
0x1c4: Stack[-1] = Stack[-7]
0x1c5: Call2 0x2a6

0x1c6: Pop(1)
0x1c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c8: Pop(2)
0x1c9: @ WaitForAnimEnd(Stack[-3])
0x1ca: Pop(0)
0x1cb: Pop(0); Push((bool) Stack[-3] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1eb

0x1ce: GOTO 0x1e0

0x1cf: Push((int) 1)
0x1d0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d2: Push((int) 4)
0x1d3: @ rand(Stack[-3], Stack[-1])
0x1d4: Pop(1)
0x1d5: Push((int) 1)
0x1d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d7: @ Sleep(Stack[-1], Stack[-2])
0x1d8: Pop(1)
0x1d9: Pop(0); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: GOTO 0x1eb

0x1dc: GOTO 0x1e0

0x1dd: Push(Stack[-6])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: GOTO 0x1eb

0x1e0: PushEmpty(bool)
0x1e1: Call2 0x1ee

0x1e2: Pop(0)
0x1e3: Pop(1); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x1eb

0x1e6: @ ResetAAS()
0x1e7: Pop(0)
0x1e8: Push((int) 1)
0x1e9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ea: GOTO 0x1ad

0x1eb: @ ResetAAS()
0x1ec: Pop(0)
0x1ed: Return(); Pop(14)

0x1ee: Stack[-1] = (bool) 1
0x1ef: Return(); Pop(0)

0x1f0: @ StopAnimation()
0x1f1: Pop(0)
0x1f2: @ StopGroup0()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1f6: @ GetPosition(Stack[-3])
0x1f7: Pop(0)
0x1f8: @@ GetPosition(Stack[-2])
0x1f9: Pop(0)
0x1fa: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1fb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1fc: Return(); Pop(6)

0x1fd: PushEmpty(bool, bool)
0x1fe: @ IsLoaded(Stack[-1])
0x1ff: Pop(0)
0x200: Stack[-3] = Stack[-1]
0x201: Return(); Pop(2)

0x202: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x203: @@ GetPosition(Stack[-8])
0x204: Pop(0)
0x205: @@ GetEyesHeight(Stack[-9])
0x206: Pop(0)
0x207: Push(CvectorIndex(Stack[-8], 1))
0x208: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x209: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x20a: @ GetPosition(Stack[-7])
0x20b: Pop(0)
0x20c: @ GetEyesHeight(Stack[-9])
0x20d: Pop(0)
0x20e: Push(CvectorIndex(Stack[-7], 1))
0x20f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x210: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x211: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x212: Push(CvectorIndex(Stack[-6], 1))
0x213: Stack[-1] = (int) 0
0x214: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x215: Pop(0); Push(Stack[-6] | Stack[-6]);
0x216: Pop(1); Push(Sqrt(Stack[-1]))
0x217: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x218: Stack[-5] = -Stack[-6]; Pop(0);
0x219: Pop(0); Push(Stack[-6] * Stack[-19]);
0x21a: PushEmpty(cvector, cvector)
0x21b: Push(CVector(0.0, 1.0, 0.0))
0x21c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x21d: Call2 0x290

0x21e: Pop(1)
0x21f: Push((int) 25)
0x220: Pop(2); Push(Stack[-2] * Stack[-1]);
0x221: Pop(2); Push(Stack[-2] + Stack[-1]);
0x222: Push(CVector(0.0, 10.0, 0.0))
0x223: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x224: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x225: @ IsOverrideActive(Stack[-2])
0x226: Pop(0)
0x227: Push(Stack[-2])
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-21] = (bool) 0
0x22a: Return(); Pop(18)

0x22b: @ StopWorld()
0x22c: Pop(0)
0x22d: Push((bool) 1)
0x22e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x22f: Pop(1)
0x230: Push(CvectorIndex(Stack[-4], 0))
0x231: Push(CvectorIndex(Stack[-5], 2))
0x232: @ Rotate(Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: PushEmpty(bool)
0x235: Call2 0x2de

0x236: Pop(0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: GOTO 0x241

0x239: Push("head")
0x23a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x23b: Pop(1)
0x23c: Push(Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23e: Push("head")
0x23f: @ LookAsyncCamera(Stack[-1])
0x240: Pop(1)
0x241: @ CameraWaitForPlayFinish()
0x242: Pop(0)
0x243: @ ResumeWorld()
0x244: Pop(0)
0x245: Stack[-21] = (bool) 1
0x246: Return(); Pop(18)

0x247: PushEmpty(bool, bool)
0x248: Push((bool) 1)
0x249: @ CameraSwitchToNormal(Stack[-1])
0x24a: Pop(1)
0x24b: PushEmpty(bool)
0x24c: Call2 0x2de

0x24d: Pop(0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: GOTO 0x258

0x250: Push("head")
0x251: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x252: Pop(1)
0x253: Push(Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x255: Push("head")
0x256: @ UnlookAsync(Stack[-1])
0x257: Pop(1)
0x258: Return(); Pop(2)

0x259: PushEmpty(bool, float, float, bool, float, float)
0x25a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x25b: Pop(0)
0x25c: Push(Stack[-3])
0x25d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x25f: Pop(0)
0x260: Push((bool) 0)
0x261: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(1)
0x263: GOTO 0x268

0x264: Push("Can't find lsh animation : ")
0x265: Pop(1); Push(Stack[-1] + Stack[-8]);
0x266: @ Trace(Stack[-1])
0x267: Pop(1)
0x268: Return(); Pop(6)

0x269: PushEmpty(bool, float, float, bool, float, float)
0x26a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x26b: Pop(0)
0x26c: Push(Stack[-3])
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x26f: Pop(0)
0x270: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x271: Pop(0)
0x272: GOTO 0x277

0x273: Push("Can't find lsh animation : ")
0x274: Pop(1); Push(Stack[-1] + Stack[-9]);
0x275: @ Trace(Stack[-1])
0x276: Pop(1)
0x277: Return(); Pop(6)

0x278: PushEmpty(float, cvector, float, cvector)
0x279: @@ GetEyesHeight(Stack[-2])
0x27a: Pop(0)
0x27b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x27c: Push(CvectorIndex(Stack[-1], 1))
0x27d: Stack[-1] = Stack[-3]
0x27e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x27f: Push("head")
0x280: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x281: Pop(1)
0x282: Return(); Pop(4)

0x283: PushEmpty(bool)
0x284: Call2 0x2de

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x287: @ lshStopSpeech()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: PushEmpty(object, object)
0x28b: @ self(Stack[-1])
0x28c: Pop(0)
0x28d: Stack[-3] = Stack[-1]
0x28e: Return(); Pop(2)

0x28f: Stack[-1] = 0
0x290: PushEmpty(float, float)
0x291: Pop(0); Push(Stack[-3] | Stack[-3]);
0x292: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x293: Push((float)0.0)
0x294: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x297: Return(); Pop(2)

0x298: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x299: Return(); Pop(2)

0x29a: PushEmpty(object, object)
0x29b: @ FindActor(Stack[-1], Stack[-4])
0x29c: Pop(0)
0x29d: Pop(0); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-5] = (bool) 0
0x2a0: Return(); Pop(2)

0x2a1: @ Trigger(Stack[-1], Stack[-3])
0x2a2: Pop(0)
0x2a3: Stack[-5] = (bool) 1
0x2a4: Return(); Pop(2)

0x2a5: Stack[-1] = 0
0x2a6: PushEmpty(string, string)
0x2a7: Stack[-1] = "idle"
0x2a8: Push(Stack[-3])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ab: Stack[-4] = Stack[-1]
0x2ac: Return(); Pop(2)

0x2ad: PushEmpty(int, bool, int, bool)
0x2ae: Stack[-2] = (int) 0
0x2af: Push("all")
0x2b0: PushEmpty(string, int)
0x2b1: Stack[-1] = Stack[-5]
0x2b2: Call2 0x2a6

0x2b3: Pop(1)
0x2b4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: Pop(0); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2bc

0x2b9: Push((int) 1)
0x2ba: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2bb: GOTO 0x2af

0x2bc: Stack[-5] = Stack[-2]
0x2bd: Return(); Pop(4)

0x2be: PushEmpty()
0x2bf: PushEmpty(bool, string, string)
0x2c0: Stack[-2] = "quest_k4_01"
0x2c1: Stack[-1] = "cutscene"
0x2c2: Call2 0x29a

0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(int, int)
0x2c6: Push("branch")
0x2c7: @ GetVariable(Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: Push((int) 0)
0x2ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cc: Stack[-3] = (int) 1
0x2cd: Return(); Pop(2)

0x2ce: GOTO 0x2d4

0x2cf: Push((int) 1)
0x2d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-3] = (int) 2
0x2d3: Return(); Pop(2)

0x2d4: Stack[-3] = (int) 3
0x2d5: Return(); Pop(2)

0x2d6: Stack[-1] = (int) 529826
0x2d7: Return(); Pop(0)

0x2d8: Stack[-1] = (int) 529825
0x2d9: Return(); Pop(0)

0x2da: Stack[-1] = "ui/NPC_Citizen1.png"
0x2db: Return(); Pop(0)

0x2dc: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x2dd: Return(); Pop(0)

0x2de: Stack[-1] = (bool) 0
0x2df: Return(); Pop(0)

