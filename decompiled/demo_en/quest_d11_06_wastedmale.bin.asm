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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	HasItem
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	d11q06
	quest_d11_06
	place_maria
	d11q06KapellaBeads
	d11q06KlaraRing
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
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
	GetVariable (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xfa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x104 Vars = (object)
		EVENT_7 Op = 0x139 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1c1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x26b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x269

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x26d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x26f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2eb

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
0x41: Call2 0x205

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
0x54: Push((int) 534520)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x299

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 539598)
0x5f: Push((int) 41545)
0x60: Push((int) 41544)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 539597)
0x64: Push((int) -1)
0x65: Push((int) 41543)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x271

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x216

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
0x8b: Call2 0x271

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
0x9b: Call2 0x226

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x240

0xa4: Pop(0)
0xa5: Push((int) 36162)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x28b

0xac: Pop(2)
0xad: Push((int) 36161)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 534520)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x299

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 539598)
0xbf: Push((int) 41545)
0xc0: Push((int) 41544)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 539597)
0xc4: Push((int) -1)
0xc5: Push((int) 41543)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 41545)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 539599)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 540801)
0xd6: Push((int) 42853)
0xd7: Push((int) 42852)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 42853)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x89

0xe1: Pop(1)
0xe2: Push((int) 540802)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 534521)
0xe8: Push((int) -1)
0xe9: Push((int) 36162)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xee: PushEmpty(bool)
0xef: Call2 0x271

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: @ lshStopAnimation()
0xf3: Pop(0)
0xf4: GOTO 0xf7

0xf5: @ StopAnimation()
0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: GOTO 0xa0

0xf9: Return(); Pop(0)

0xfa: PushEmpty(float, float)
0xfb: Stack[-2] = (int) 300
0xfc: Stack[-1] = (int) 100
0xfd: Call2 0x10f

0xfe: Pop(2)
0xff: Push((int) 3)
0x100: @ Sleep(Stack[-1])
0x101: Pop(1)
0x102: GOTO 0xfa

0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: PushEmpty()
0x106: Call2 0x150

0x107: Pop(0)
0x108: PushEmpty(int, object)
0x109: Stack[-1] = Stack[-3]
0x10a: Push(-2, 1); TaskCall(0)
0x10b: Call2 0x0

0x10c: Pop(-2, 1); TaskReturn
0x10d: Pop(2)
0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty(bool)
0x111: Call2 0x1bc

0x112: Pop(0)
0x113: Pop(1); Push((bool) Stack[-1] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Return(); Pop(0)

0x116: Push("player")
0x117: @ FindActor(Stack[-4], Stack[-1])
0x118: Pop(1)
0x119: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x11a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x11b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x11c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x11d: Push((int) 10)
0x11e: Push((float)1.0)
0x11f: @ SetTimer(Stack[-2], Stack[-1])
0x120: Pop(2)
0x121: PushEmpty()
0x122: Call2 0x15e

0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x126: Push((int) 10)
0x127: @ KillTimer(Stack[-1])
0x128: Pop(1)
0x129: Return(); Pop(0)

0x12a: PushEmpty(float, float)
0x12b: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x12c: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12d: Stack[-3] = (bool) 0
0x12e: Return(); Pop(2)

0x12f: PushEmpty(float, object)
0x130: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x131: Call2 0x1b4

0x132: Pop(1)
0x133: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x134: Push( Stack[2 + Tasks[-1].StackPointer] )
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x137: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x138: Return(); Pop(2)

0x139: PushEmpty()
0x13a: Push((int) 10)
0x13b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13d: PushEmpty(bool)
0x13e: Call2 0x12a

0x13f: Pop(0)
0x140: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x141: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(object)
0x144: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x145: Call2 0x235

0x146: Pop(1)
0x147: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x148: GOTO 0x14f

0x149: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14b: Push("head")
0x14c: @ UnlookAsync(Stack[-1])
0x14d: Pop(1)
0x14e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x14f: Return(); Pop(0)

0x150: PushEmpty()
0x151: Call2 0x1af

0x152: Pop(0)
0x153: Push((int) 10)
0x154: @ KillTimer(Stack[-1])
0x155: Pop(1)
0x156: Push( Stack[2 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x158: Push("head")
0x159: @ UnlookAsync(Stack[-1])
0x15a: Pop(1)
0x15b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15d: Return(); Pop(0)

0x15e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x15f: @ WaitForAnimEnd()
0x160: Pop(0)
0x161: PushEmpty(bool)
0x162: Call2 0x1bc

0x163: Pop(0)
0x164: Pop(1); Push((bool) Stack[-1] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Return(); Pop(14)

0x167: PushEmpty(int)
0x168: Call2 0x27a

0x169: Stack[-8] = Stack[-1]
0x16a: Pop(1)
0x16b: Stack[-6] = (int) 0
0x16c: PushEmpty(bool)
0x16d: Stack[-1] = (bool) 0
0x16e: Push((int) 5)
0x16f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: PushEmpty(bool)
0x172: Call2 0x1bc

0x173: Pop(0)
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Stack[-1] = (bool) 1
0x176: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x177: Push((int) 3)
0x178: @ irand(Stack[-6], Stack[-1])
0x179: Pop(1)
0x17a: Push((int) 0)
0x17b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17d: Push(Stack[-7])
0x17e: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17f: @ irand(Stack[-4], Stack[-7])
0x180: Pop(0)
0x181: Push("all")
0x182: PushEmpty(string, int)
0x183: Stack[-1] = Stack[-7]
0x184: Call2 0x273

0x185: Pop(1)
0x186: @ PlayAnimation(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: @ WaitForAnimEnd(Stack[-3])
0x189: Pop(0)
0x18a: Pop(0); Push((bool) Stack[-3] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x1aa

0x18d: GOTO 0x19f

0x18e: Push((int) 1)
0x18f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x191: Push((int) 4)
0x192: @ rand(Stack[-3], Stack[-1])
0x193: Pop(1)
0x194: Push((int) 1)
0x195: Pop(1); Push(Stack[-3] + Stack[-1]);
0x196: @ Sleep(Stack[-1], Stack[-2])
0x197: Pop(1)
0x198: Pop(0); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: GOTO 0x1aa

0x19b: GOTO 0x19f

0x19c: Push(Stack[-6])
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: GOTO 0x1aa

0x19f: PushEmpty(bool)
0x1a0: Call2 0x1ad

0x1a1: Pop(0)
0x1a2: Pop(1); Push((bool) Stack[-1] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1aa

0x1a5: @ ResetAAS()
0x1a6: Pop(0)
0x1a7: Push((int) 1)
0x1a8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1a9: GOTO 0x16c

0x1aa: @ ResetAAS()
0x1ab: Pop(0)
0x1ac: Return(); Pop(14)

0x1ad: Stack[-1] = (bool) 1
0x1ae: Return(); Pop(0)

0x1af: @ StopAnimation()
0x1b0: Pop(0)
0x1b1: @ StopGroup0()
0x1b2: Pop(0)
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1b5: @ GetPosition(Stack[-3])
0x1b6: Pop(0)
0x1b7: @@ GetPosition(Stack[-2])
0x1b8: Pop(0)
0x1b9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1ba: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1bb: Return(); Pop(6)

0x1bc: PushEmpty(bool, bool)
0x1bd: @ IsLoaded(Stack[-1])
0x1be: Pop(0)
0x1bf: Stack[-3] = Stack[-1]
0x1c0: Return(); Pop(2)

0x1c1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1c2: @@ GetPosition(Stack[-8])
0x1c3: Pop(0)
0x1c4: @@ GetEyesHeight(Stack[-9])
0x1c5: Pop(0)
0x1c6: Push(CvectorIndex(Stack[-8], 1))
0x1c7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1c9: @ GetPosition(Stack[-7])
0x1ca: Pop(0)
0x1cb: @ GetEyesHeight(Stack[-9])
0x1cc: Pop(0)
0x1cd: Push(CvectorIndex(Stack[-7], 1))
0x1ce: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1cf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1d0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1d1: Push(CvectorIndex(Stack[-6], 1))
0x1d2: Stack[-1] = (int) 0
0x1d3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1d5: Pop(1); Push(Sqrt(Stack[-1]))
0x1d6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1d7: Stack[-5] = -Stack[-6]; Pop(0);
0x1d8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1d9: PushEmpty(cvector, cvector)
0x1da: Push(CVector(0.0, 1.0, 0.0))
0x1db: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1dc: Call2 0x247

0x1dd: Pop(1)
0x1de: Push((int) 25)
0x1df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e1: Push(CVector(0.0, 10.0, 0.0))
0x1e2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1e3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1e4: @ IsOverrideActive(Stack[-2])
0x1e5: Pop(0)
0x1e6: Push(Stack[-2])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e8: Stack[-21] = (bool) 0
0x1e9: Return(); Pop(18)

0x1ea: @ StopWorld()
0x1eb: Pop(0)
0x1ec: @ CameraTransit(Stack[-3], Stack[-5])
0x1ed: Pop(0)
0x1ee: Push(CvectorIndex(Stack[-4], 0))
0x1ef: Push(CvectorIndex(Stack[-5], 2))
0x1f0: @ Rotate(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x271

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x1ff

0x1f7: Push("head")
0x1f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push(Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: Push("head")
0x1fd: @ LookAsyncCamera(Stack[-1])
0x1fe: Pop(1)
0x1ff: @ CameraWaitForPlayFinish()
0x200: Pop(0)
0x201: @ ResumeWorld()
0x202: Pop(0)
0x203: Stack[-21] = (bool) 1
0x204: Return(); Pop(18)

0x205: PushEmpty(bool, bool)
0x206: @ CameraSwitchToNormal()
0x207: Pop(0)
0x208: PushEmpty(bool)
0x209: Call2 0x271

0x20a: Pop(0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: GOTO 0x215

0x20d: Push("head")
0x20e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20f: Pop(1)
0x210: Push(Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x212: Push("head")
0x213: @ UnlookAsync(Stack[-1])
0x214: Pop(1)
0x215: Return(); Pop(2)

0x216: PushEmpty(bool, float, float, bool, float, float)
0x217: @ lshHasAnimation(Stack[-3], Stack[-7])
0x218: Pop(0)
0x219: Push(Stack[-3])
0x21a: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x21c: Pop(0)
0x21d: Push((bool) 0)
0x21e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(1)
0x220: GOTO 0x225

0x221: Push("Can't find lsh animation : ")
0x222: Pop(1); Push(Stack[-1] + Stack[-8]);
0x223: @ Trace(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(6)

0x226: PushEmpty(bool, float, float, bool, float, float)
0x227: @ lshHasAnimation(Stack[-3], Stack[-8])
0x228: Pop(0)
0x229: Push(Stack[-3])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x22c: Pop(0)
0x22d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x22e: Pop(0)
0x22f: GOTO 0x234

0x230: Push("Can't find lsh animation : ")
0x231: Pop(1); Push(Stack[-1] + Stack[-9]);
0x232: @ Trace(Stack[-1])
0x233: Pop(1)
0x234: Return(); Pop(6)

0x235: PushEmpty(float, cvector, float, cvector)
0x236: @@ GetEyesHeight(Stack[-2])
0x237: Pop(0)
0x238: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x239: Push(CvectorIndex(Stack[-1], 1))
0x23a: Stack[-1] = Stack[-3]
0x23b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x23c: Push("head")
0x23d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x23e: Pop(1)
0x23f: Return(); Pop(4)

0x240: PushEmpty(bool)
0x241: Call2 0x271

0x242: Pop(0)
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: @ lshStopSpeech()
0x245: Pop(0)
0x246: Return(); Pop(0)

0x247: PushEmpty(float, float)
0x248: Pop(0); Push(Stack[-3] | Stack[-3]);
0x249: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x24a: Push((float)0.0)
0x24b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x24e: Return(); Pop(2)

0x24f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x250: Return(); Pop(2)

0x251: PushEmpty(int, int)
0x252: @ GetVariable(Stack[-3], Stack[-1])
0x253: Pop(0)
0x254: Stack[-4] = Stack[-1]
0x255: Return(); Pop(2)

0x256: PushEmpty(int, bool, int, bool)
0x257: @ GetInvItemByName(Stack[-2], Stack[-5])
0x258: Pop(0)
0x259: @@ HasItem(Stack[-2], Stack[-1])
0x25a: Pop(0)
0x25b: Stack[-7] = Stack[-1]
0x25c: Return(); Pop(4)

0x25d: PushEmpty(object, object)
0x25e: @ FindActor(Stack[-1], Stack[-4])
0x25f: Pop(0)
0x260: Pop(0); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x262: Stack[-5] = (bool) 0
0x263: Return(); Pop(2)

0x264: @ Trigger(Stack[-1], Stack[-3])
0x265: Pop(0)
0x266: Stack[-5] = (bool) 1
0x267: Return(); Pop(2)

0x268: Stack[-1] = 0
0x269: Stack[-1] = (int) 515556
0x26a: Return(); Pop(0)

0x26b: Stack[-1] = (int) 503341
0x26c: Return(); Pop(0)

0x26d: Stack[-1] = "ui/NPC_Citizen3.png"
0x26e: Return(); Pop(0)

0x26f: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x270: Return(); Pop(0)

0x271: Stack[-1] = (bool) 0
0x272: Return(); Pop(0)

0x273: PushEmpty(string, string)
0x274: Stack[-1] = "idle"
0x275: Push(Stack[-3])
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x278: Stack[-4] = Stack[-1]
0x279: Return(); Pop(2)

0x27a: PushEmpty(int, bool, int, bool)
0x27b: Stack[-2] = (int) 0
0x27c: Push("all")
0x27d: PushEmpty(string, int)
0x27e: Stack[-1] = Stack[-5]
0x27f: Call2 0x273

0x280: Pop(1)
0x281: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: Pop(0); Push((bool) Stack[-1] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: GOTO 0x289

0x286: Push((int) 1)
0x287: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x288: GOTO 0x27c

0x289: Stack[-5] = Stack[-2]
0x28a: Return(); Pop(4)

0x28b: PushEmpty()
0x28c: Push("d11q06")
0x28d: Push((int) 3)
0x28e: @ SetVariable(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: PushEmpty()
0x291: Call2 0x2b5

0x292: Pop(0)
0x293: PushEmpty(bool, string, string)
0x294: Stack[-2] = "quest_d11_06"
0x295: Stack[-1] = "place_maria"
0x296: Call2 0x25d

0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: PushEmpty()
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: PushEmpty(bool, object, string)
0x29d: Stack[-2] = Stack[-5]
0x29e: Stack[-1] = "d11q06KapellaBeads"
0x29f: Call2 0x256

0x2a0: Pop(2)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a2: PushEmpty(bool, object, string)
0x2a3: Stack[-2] = Stack[-5]
0x2a4: Stack[-1] = "d11q06KlaraRing"
0x2a5: Call2 0x256

0x2a6: Pop(2)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 1
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2aa: PushEmpty(int, string)
0x2ab: Stack[-1] = "d11q06"
0x2ac: Call2 0x251

0x2ad: Pop(1)
0x2ae: Push((int) 2)
0x2af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-2] = (bool) 1
0x2b2: Return(); Pop(0)

0x2b3: Stack[-2] = (bool) 0
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(object, object)
0x2b6: Push((int) 691)
0x2b7: Push((int) 2)
0x2b8: Push((int) 534539)
0x2b9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(3)
0x2bb: PushEmpty(bool, object, int)
0x2bc: Stack[-2] = Stack[-4]
0x2bd: Stack[-1] = (int) 686
0x2be: Call2 0x2cf

0x2bf: Pop(3)
0x2c0: Return(); Pop(2)

0x2c1: Stack[-1] = 0
0x2c2: PushEmpty(object, object)
0x2c3: @ GetDiaryRoot(Stack[-1])
0x2c4: Pop(0)
0x2c5: Pop(0); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: Push("Can't retrieve diary root")
0x2c8: @ Trace(Stack[-1])
0x2c9: Pop(1)
0x2ca: Stack[-3] = (bool) 0
0x2cb: Return(); Pop(2)

0x2cc: Stack[-3] = Stack[-1]
0x2cd: Return(); Pop(2)

0x2ce: Stack[-1] = 0
0x2cf: PushEmpty(object, object, int, object, object, int)
0x2d0: PushEmpty(object)
0x2d1: Call2 0x2c2

0x2d2: Stack[-4] = Stack[-1]
0x2d3: Pop(1)
0x2d4: @@ Find(Stack[-7], Stack[-2])
0x2d5: Pop(0)
0x2d6: Pop(0); Push((bool) Stack[-2] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d8: Push("Can't find diary parent with id: ")
0x2d9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Stack[-9] = (bool) 0
0x2dd: Return(); Pop(6)

0x2de: @@ AddChild(Stack[-8])
0x2df: Pop(0)
0x2e0: Push((int) 7)
0x2e1: @ SendWorldWndMessage(Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ GetCategory(Stack[-1])
0x2e4: Pop(0)
0x2e5: @ SetDiarySection(Stack[-1])
0x2e6: Pop(0)
0x2e7: Stack[-9] = (bool) 0
0x2e8: Return(); Pop(6)

0x2e9: Stack[-2] = 0
0x2ea: Stack[-3] = 0
0x2eb: PushEmpty(int, int)
0x2ec: Push("branch")
0x2ed: @ GetVariable(Stack[-1], Stack[-2])
0x2ee: Pop(1)
0x2ef: Push((int) 0)
0x2f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f2: Stack[-3] = (int) 1
0x2f3: Return(); Pop(2)

0x2f4: GOTO 0x2fa

0x2f5: Push((int) 1)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-3] = (int) 2
0x2f9: Return(); Pop(2)

0x2fa: Stack[-3] = (int) 3
0x2fb: Return(); Pop(2)

