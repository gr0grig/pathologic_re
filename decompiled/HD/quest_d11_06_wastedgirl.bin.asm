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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
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
	GetVariable (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xff
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x109 Vars = (object)
		EVENT_7 Op = 0x13e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1c6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x272

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x270

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x274

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x276

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2f2

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
0x41: Call2 0x20b

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
0x54: Push((int) 534525)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2a0

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 539591)
0x5f: Push((int) 41538)
0x60: Push((int) 41537)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 539590)
0x64: Push((int) -1)
0x65: Push((int) 41536)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x278

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x21d

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
0x8b: Call2 0x278

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
0x9b: Call2 0x22d

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x247

0xa4: Pop(0)
0xa5: Push((int) 36167)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x292

0xac: Pop(2)
0xad: Push((int) 36166)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 534525)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2a0

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 539591)
0xbf: Push((int) 41538)
0xc0: Push((int) 41537)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 539590)
0xc4: Push((int) -1)
0xc5: Push((int) 41536)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 41538)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 539592)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 539593)
0xd6: Push((int) 41540)
0xd7: Push((int) 41539)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 539596)
0xdb: Push((int) -1)
0xdc: Push((int) 41542)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 41540)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0x89

0xe6: Pop(1)
0xe7: Push((int) 539594)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 534526)
0xed: Push((int) -1)
0xee: Push((int) 36167)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf3: PushEmpty(bool)
0xf4: Call2 0x278

0xf5: Pop(0)
0xf6: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf7: @ lshStopAnimation()
0xf8: Pop(0)
0xf9: GOTO 0xfc

0xfa: @ StopAnimation()
0xfb: Pop(0)
0xfc: Return(); Pop(0)

0xfd: GOTO 0xa0

0xfe: Return(); Pop(0)

0xff: PushEmpty(float, float)
0x100: Stack[-2] = (int) 300
0x101: Stack[-1] = (int) 100
0x102: Call2 0x114

0x103: Pop(2)
0x104: Push((int) 3)
0x105: @ Sleep(Stack[-1])
0x106: Pop(1)
0x107: GOTO 0xff

0x108: Return(); Pop(0)

0x109: PushEmpty()
0x10a: PushEmpty()
0x10b: Call2 0x155

0x10c: Pop(0)
0x10d: PushEmpty(int, object)
0x10e: Stack[-1] = Stack[-3]
0x10f: Push(-2, 1); TaskCall(0)
0x110: Call2 0x0

0x111: Pop(-2, 1); TaskReturn
0x112: Pop(2)
0x113: Return(); Pop(0)

0x114: PushEmpty()
0x115: PushEmpty(bool)
0x116: Call2 0x1c1

0x117: Pop(0)
0x118: Pop(1); Push((bool) Stack[-1] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Return(); Pop(0)

0x11b: Push("player")
0x11c: @ FindActor(Stack[-4], Stack[-1])
0x11d: Pop(1)
0x11e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x120: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x121: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x122: Push((int) 10)
0x123: Push((float)1.0)
0x124: @ SetTimer(Stack[-2], Stack[-1])
0x125: Pop(2)
0x126: PushEmpty()
0x127: Call2 0x163

0x128: Pop(0)
0x129: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: Push((int) 10)
0x12c: @ KillTimer(Stack[-1])
0x12d: Pop(1)
0x12e: Return(); Pop(0)

0x12f: PushEmpty(float, float)
0x130: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x132: Stack[-3] = (bool) 0
0x133: Return(); Pop(2)

0x134: PushEmpty(float, object)
0x135: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x136: Call2 0x1b9

0x137: Pop(1)
0x138: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x139: Push( Stack[2 + Tasks[-1].StackPointer] )
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x13c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x13d: Return(); Pop(2)

0x13e: PushEmpty()
0x13f: Push((int) 10)
0x140: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x142: PushEmpty(bool)
0x143: Call2 0x12f

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x146: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: PushEmpty(object)
0x149: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x14a: Call2 0x23c

0x14b: Pop(1)
0x14c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x14d: GOTO 0x154

0x14e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14f: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x150: Push("head")
0x151: @ UnlookAsync(Stack[-1])
0x152: Pop(1)
0x153: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x154: Return(); Pop(0)

0x155: PushEmpty()
0x156: Call2 0x1b4

0x157: Pop(0)
0x158: Push((int) 10)
0x159: @ KillTimer(Stack[-1])
0x15a: Pop(1)
0x15b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x15c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15d: Push("head")
0x15e: @ UnlookAsync(Stack[-1])
0x15f: Pop(1)
0x160: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x161: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x162: Return(); Pop(0)

0x163: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x164: @ WaitForAnimEnd()
0x165: Pop(0)
0x166: PushEmpty(bool)
0x167: Call2 0x1c1

0x168: Pop(0)
0x169: Pop(1); Push((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: Return(); Pop(14)

0x16c: PushEmpty(int)
0x16d: Call2 0x281

0x16e: Stack[-8] = Stack[-1]
0x16f: Pop(1)
0x170: Stack[-6] = (int) 0
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: Push((int) 5)
0x174: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x1c1

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x17c: Push((int) 3)
0x17d: @ irand(Stack[-6], Stack[-1])
0x17e: Pop(1)
0x17f: Push((int) 0)
0x180: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x182: Push(Stack[-7])
0x183: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x184: @ irand(Stack[-4], Stack[-7])
0x185: Pop(0)
0x186: Push("all")
0x187: PushEmpty(string, int)
0x188: Stack[-1] = Stack[-7]
0x189: Call2 0x27a

0x18a: Pop(1)
0x18b: @ PlayAnimation(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: @ WaitForAnimEnd(Stack[-3])
0x18e: Pop(0)
0x18f: Pop(0); Push((bool) Stack[-3] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: GOTO 0x1af

0x192: GOTO 0x1a4

0x193: Push((int) 1)
0x194: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x196: Push((int) 4)
0x197: @ rand(Stack[-3], Stack[-1])
0x198: Pop(1)
0x199: Push((int) 1)
0x19a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x19b: @ Sleep(Stack[-1], Stack[-2])
0x19c: Pop(1)
0x19d: Pop(0); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: GOTO 0x1af

0x1a0: GOTO 0x1a4

0x1a1: Push(Stack[-6])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1af

0x1a4: PushEmpty(bool)
0x1a5: Call2 0x1b2

0x1a6: Pop(0)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1af

0x1aa: @ ResetAAS()
0x1ab: Pop(0)
0x1ac: Push((int) 1)
0x1ad: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ae: GOTO 0x171

0x1af: @ ResetAAS()
0x1b0: Pop(0)
0x1b1: Return(); Pop(14)

0x1b2: Stack[-1] = (bool) 1
0x1b3: Return(); Pop(0)

0x1b4: @ StopAnimation()
0x1b5: Pop(0)
0x1b6: @ StopGroup0()
0x1b7: Pop(0)
0x1b8: Return(); Pop(0)

0x1b9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ba: @ GetPosition(Stack[-3])
0x1bb: Pop(0)
0x1bc: @@ GetPosition(Stack[-2])
0x1bd: Pop(0)
0x1be: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1bf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1c0: Return(); Pop(6)

0x1c1: PushEmpty(bool, bool)
0x1c2: @ IsLoaded(Stack[-1])
0x1c3: Pop(0)
0x1c4: Stack[-3] = Stack[-1]
0x1c5: Return(); Pop(2)

0x1c6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1c7: @@ GetPosition(Stack[-8])
0x1c8: Pop(0)
0x1c9: @@ GetEyesHeight(Stack[-9])
0x1ca: Pop(0)
0x1cb: Push(CvectorIndex(Stack[-8], 1))
0x1cc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1cd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1ce: @ GetPosition(Stack[-7])
0x1cf: Pop(0)
0x1d0: @ GetEyesHeight(Stack[-9])
0x1d1: Pop(0)
0x1d2: Push(CvectorIndex(Stack[-7], 1))
0x1d3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1d5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1d6: Push(CvectorIndex(Stack[-6], 1))
0x1d7: Stack[-1] = (int) 0
0x1d8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1da: Pop(1); Push(Sqrt(Stack[-1]))
0x1db: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1dc: Stack[-5] = -Stack[-6]; Pop(0);
0x1dd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1de: PushEmpty(cvector, cvector)
0x1df: Push(CVector(0.0, 1.0, 0.0))
0x1e0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1e1: Call2 0x24e

0x1e2: Pop(1)
0x1e3: Push((int) 25)
0x1e4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e6: Push(CVector(0.0, 10.0, 0.0))
0x1e7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1e8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1e9: @ IsOverrideActive(Stack[-2])
0x1ea: Pop(0)
0x1eb: Push(Stack[-2])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-21] = (bool) 0
0x1ee: Return(); Pop(18)

0x1ef: @ StopWorld()
0x1f0: Pop(0)
0x1f1: Push((bool) 1)
0x1f2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1f3: Pop(1)
0x1f4: Push(CvectorIndex(Stack[-4], 0))
0x1f5: Push(CvectorIndex(Stack[-5], 2))
0x1f6: @ Rotate(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: PushEmpty(bool)
0x1f9: Call2 0x278

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: GOTO 0x205

0x1fd: Push("head")
0x1fe: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1ff: Pop(1)
0x200: Push(Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x202: Push("head")
0x203: @ LookAsyncCamera(Stack[-1])
0x204: Pop(1)
0x205: @ CameraWaitForPlayFinish()
0x206: Pop(0)
0x207: @ ResumeWorld()
0x208: Pop(0)
0x209: Stack[-21] = (bool) 1
0x20a: Return(); Pop(18)

0x20b: PushEmpty(bool, bool)
0x20c: Push((bool) 1)
0x20d: @ CameraSwitchToNormal(Stack[-1])
0x20e: Pop(1)
0x20f: PushEmpty(bool)
0x210: Call2 0x278

0x211: Pop(0)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: GOTO 0x21c

0x214: Push("head")
0x215: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x216: Pop(1)
0x217: Push(Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x219: Push("head")
0x21a: @ UnlookAsync(Stack[-1])
0x21b: Pop(1)
0x21c: Return(); Pop(2)

0x21d: PushEmpty(bool, float, float, bool, float, float)
0x21e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x21f: Pop(0)
0x220: Push(Stack[-3])
0x221: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x222: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x223: Pop(0)
0x224: Push((bool) 0)
0x225: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(1)
0x227: GOTO 0x22c

0x228: Push("Can't find lsh animation : ")
0x229: Pop(1); Push(Stack[-1] + Stack[-8]);
0x22a: @ Trace(Stack[-1])
0x22b: Pop(1)
0x22c: Return(); Pop(6)

0x22d: PushEmpty(bool, float, float, bool, float, float)
0x22e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x22f: Pop(0)
0x230: Push(Stack[-3])
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x233: Pop(0)
0x234: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x235: Pop(0)
0x236: GOTO 0x23b

0x237: Push("Can't find lsh animation : ")
0x238: Pop(1); Push(Stack[-1] + Stack[-9]);
0x239: @ Trace(Stack[-1])
0x23a: Pop(1)
0x23b: Return(); Pop(6)

0x23c: PushEmpty(float, cvector, float, cvector)
0x23d: @@ GetEyesHeight(Stack[-2])
0x23e: Pop(0)
0x23f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x240: Push(CvectorIndex(Stack[-1], 1))
0x241: Stack[-1] = Stack[-3]
0x242: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x243: Push("head")
0x244: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x245: Pop(1)
0x246: Return(); Pop(4)

0x247: PushEmpty(bool)
0x248: Call2 0x278

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24b: @ lshStopSpeech()
0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: PushEmpty(float, float)
0x24f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x250: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x251: Push((float)0.0)
0x252: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x255: Return(); Pop(2)

0x256: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x257: Return(); Pop(2)

0x258: PushEmpty(int, int)
0x259: @ GetVariable(Stack[-3], Stack[-1])
0x25a: Pop(0)
0x25b: Stack[-4] = Stack[-1]
0x25c: Return(); Pop(2)

0x25d: PushEmpty(int, bool, int, bool)
0x25e: @ GetInvItemByName(Stack[-2], Stack[-5])
0x25f: Pop(0)
0x260: @@ HasItem(Stack[-2], Stack[-1])
0x261: Pop(0)
0x262: Stack[-7] = Stack[-1]
0x263: Return(); Pop(4)

0x264: PushEmpty(object, object)
0x265: @ FindActor(Stack[-1], Stack[-4])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-5] = (bool) 0
0x26a: Return(); Pop(2)

0x26b: @ Trigger(Stack[-1], Stack[-3])
0x26c: Pop(0)
0x26d: Stack[-5] = (bool) 1
0x26e: Return(); Pop(2)

0x26f: Stack[-1] = 0
0x270: Stack[-1] = (int) 515555
0x271: Return(); Pop(0)

0x272: Stack[-1] = (int) 503340
0x273: Return(); Pop(0)

0x274: Stack[-1] = "ui/NPC_Citizen2.png"
0x275: Return(); Pop(0)

0x276: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x277: Return(); Pop(0)

0x278: Stack[-1] = (bool) 0
0x279: Return(); Pop(0)

0x27a: PushEmpty(string, string)
0x27b: Stack[-1] = "idle"
0x27c: Push(Stack[-3])
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x27f: Stack[-4] = Stack[-1]
0x280: Return(); Pop(2)

0x281: PushEmpty(int, bool, int, bool)
0x282: Stack[-2] = (int) 0
0x283: Push("all")
0x284: PushEmpty(string, int)
0x285: Stack[-1] = Stack[-5]
0x286: Call2 0x27a

0x287: Pop(1)
0x288: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(2)
0x28a: Pop(0); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x290

0x28d: Push((int) 1)
0x28e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x28f: GOTO 0x283

0x290: Stack[-5] = Stack[-2]
0x291: Return(); Pop(4)

0x292: PushEmpty()
0x293: Push("d11q06")
0x294: Push((int) 3)
0x295: @ SetVariable(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: PushEmpty()
0x298: Call2 0x2bc

0x299: Pop(0)
0x29a: PushEmpty(bool, string, string)
0x29b: Stack[-2] = "quest_d11_06"
0x29c: Stack[-1] = "place_maria"
0x29d: Call2 0x264

0x29e: Pop(3)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: PushEmpty(bool)
0x2a2: Stack[-1] = (bool) 0
0x2a3: PushEmpty(bool, object, string)
0x2a4: Stack[-2] = Stack[-5]
0x2a5: Stack[-1] = "d11q06KapellaBeads"
0x2a6: Call2 0x25d

0x2a7: Pop(2)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty(bool, object, string)
0x2aa: Stack[-2] = Stack[-5]
0x2ab: Stack[-1] = "d11q06KlaraRing"
0x2ac: Call2 0x25d

0x2ad: Pop(2)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Stack[-1] = (bool) 1
0x2b0: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b1: PushEmpty(int, string)
0x2b2: Stack[-1] = "d11q06"
0x2b3: Call2 0x258

0x2b4: Pop(1)
0x2b5: Push((int) 2)
0x2b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-2] = (bool) 1
0x2b9: Return(); Pop(0)

0x2ba: Stack[-2] = (bool) 0
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(object, object)
0x2bd: Push((int) 691)
0x2be: Push((int) 2)
0x2bf: Push((int) 534539)
0x2c0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: PushEmpty(bool, object, int)
0x2c3: Stack[-2] = Stack[-4]
0x2c4: Stack[-1] = (int) 686
0x2c5: Call2 0x2d6

0x2c6: Pop(3)
0x2c7: Return(); Pop(2)

0x2c8: Stack[-1] = 0
0x2c9: PushEmpty(object, object)
0x2ca: @ GetDiaryRoot(Stack[-1])
0x2cb: Pop(0)
0x2cc: Pop(0); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ce: Push("Can't retrieve diary root")
0x2cf: @ Trace(Stack[-1])
0x2d0: Pop(1)
0x2d1: Stack[-3] = (bool) 0
0x2d2: Return(); Pop(2)

0x2d3: Stack[-3] = Stack[-1]
0x2d4: Return(); Pop(2)

0x2d5: Stack[-1] = 0
0x2d6: PushEmpty(object, object, int, object, object, int)
0x2d7: PushEmpty(object)
0x2d8: Call2 0x2c9

0x2d9: Stack[-4] = Stack[-1]
0x2da: Pop(1)
0x2db: @@ Find(Stack[-7], Stack[-2])
0x2dc: Pop(0)
0x2dd: Pop(0); Push((bool) Stack[-2] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2df: Push("Can't find diary parent with id: ")
0x2e0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2e1: @ Trace(Stack[-1])
0x2e2: Pop(1)
0x2e3: Stack[-9] = (bool) 0
0x2e4: Return(); Pop(6)

0x2e5: @@ AddChild(Stack[-8])
0x2e6: Pop(0)
0x2e7: Push((int) 7)
0x2e8: @ SendWorldWndMessage(Stack[-1])
0x2e9: Pop(1)
0x2ea: @@ GetCategory(Stack[-1])
0x2eb: Pop(0)
0x2ec: @ SetDiarySection(Stack[-1])
0x2ed: Pop(0)
0x2ee: Stack[-9] = (bool) 0
0x2ef: Return(); Pop(6)

0x2f0: Stack[-2] = 0
0x2f1: Stack[-3] = 0
0x2f2: PushEmpty(int, int)
0x2f3: Push("branch")
0x2f4: @ GetVariable(Stack[-1], Stack[-2])
0x2f5: Pop(1)
0x2f6: Push((int) 0)
0x2f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f9: Stack[-3] = (int) 1
0x2fa: Return(); Pop(2)

0x2fb: GOTO 0x301

0x2fc: Push((int) 1)
0x2fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-3] = (int) 2
0x300: Return(); Pop(2)

0x301: Stack[-3] = (int) 3
0x302: Return(); Pop(2)

