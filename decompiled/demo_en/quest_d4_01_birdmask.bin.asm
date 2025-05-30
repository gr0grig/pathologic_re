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
	quest_d4_01
	birdmask_done
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	d4q01Whitemask
	pt_d4q01_key1_region
	AddMark
	ShowMap
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
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
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)

RunOp = 0x126
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x12f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x19d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2b0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2ae

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2b2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2b4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x29d

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
0x41: Call2 0x1e1

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
0x54: Push((int) 509650)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 509651)
0x5a: Push((int) 10621)
0x5b: Push((int) 10620)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 509665)
0x5f: Push((int) 10625)
0x60: Push((int) 10638)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x2b6

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1f2

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
0x86: Call2 0x2b6

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
0x96: Call2 0x202

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x211

0x9f: Pop(0)
0xa0: Push((int) 10626)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x24b

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x25b

0xac: Pop(2)
0xad: Push((int) 10627)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x24b

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x25b

0xb9: Pop(2)
0xba: Push((int) 10619)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call2 0x84

0xc0: Pop(1)
0xc1: Push((int) 509650)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: Push((int) 509651)
0xc7: Push((int) 10621)
0xc8: Push((int) 10620)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 509665)
0xcc: Push((int) 10625)
0xcd: Push((int) 10638)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Return(); Pop(0)

0xd1: Push((int) 10633)
0xd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd4: Push((int) 10621)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call2 0x84

0xda: Pop(1)
0xdb: Push((int) 509652)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 509653)
0xe1: Push((int) 10623)
0xe2: Push((int) 10622)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 509660)
0xe6: Push((int) 10625)
0xe7: Push((int) 10630)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 10623)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call2 0x84

0xf1: Pop(1)
0xf2: Push((int) 509654)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 509655)
0xf8: Push((int) 10625)
0xf9: Push((int) 10624)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 509659)
0xfd: Push((int) 10625)
0xfe: Push((int) 10628)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 10625)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call2 0x84

0x108: Pop(1)
0x109: Push((int) 509656)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 509657)
0x10f: Push((int) -1)
0x110: Push((int) 10626)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 509658)
0x114: Push((int) -1)
0x115: Push((int) 10627)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11a: PushEmpty(bool)
0x11b: Call2 0x2b6

0x11c: Pop(0)
0x11d: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11e: @ lshStopAnimation()
0x11f: Pop(0)
0x120: GOTO 0x123

0x121: @ StopAnimation()
0x122: Pop(0)
0x123: Return(); Pop(0)

0x124: GOTO 0x9b

0x125: Return(); Pop(0)

0x126: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x127: Push((int) 3)
0x128: @ Sleep(Stack[-1])
0x129: Pop(1)
0x12a: PushEmpty()
0x12b: Call2 0x142

0x12c: Pop(0)
0x12d: GOTO 0x127

0x12e: Return(); Pop(0)

0x12f: PushEmpty()
0x130: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x133: PushEmpty()
0x134: Call2 0x193

0x135: Pop(0)
0x136: PushEmpty(int, object)
0x137: Stack[-1] = Stack[-3]
0x138: Push(-2, 1); TaskCall(0)
0x139: Call2 0x0

0x13a: Pop(-2, 1); TaskReturn
0x13b: Pop(2)
0x13c: PushEmpty(bool, string, string)
0x13d: Stack[-2] = "quest_d4_01"
0x13e: Stack[-1] = "birdmask_done"
0x13f: Call2 0x222

0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x143: @ WaitForAnimEnd()
0x144: Pop(0)
0x145: PushEmpty(bool)
0x146: Call2 0x198

0x147: Pop(0)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Return(); Pop(14)

0x14b: PushEmpty(int)
0x14c: Call2 0x23a

0x14d: Stack[-8] = Stack[-1]
0x14e: Pop(1)
0x14f: Stack[-6] = (int) 0
0x150: PushEmpty(bool)
0x151: Stack[-1] = (bool) 0
0x152: Push((int) 5)
0x153: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x155: PushEmpty(bool)
0x156: Call2 0x198

0x157: Pop(0)
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Stack[-1] = (bool) 1
0x15a: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x15b: Push((int) 3)
0x15c: @ irand(Stack[-6], Stack[-1])
0x15d: Pop(1)
0x15e: Push((int) 0)
0x15f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x161: Push(Stack[-7])
0x162: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x163: @ irand(Stack[-4], Stack[-7])
0x164: Pop(0)
0x165: Push("all")
0x166: PushEmpty(string, int)
0x167: Stack[-1] = Stack[-7]
0x168: Call2 0x233

0x169: Pop(1)
0x16a: @ PlayAnimation(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: @ WaitForAnimEnd(Stack[-3])
0x16d: Pop(0)
0x16e: Pop(0); Push((bool) Stack[-3] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: GOTO 0x18e

0x171: GOTO 0x183

0x172: Push((int) 1)
0x173: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x175: Push((int) 4)
0x176: @ rand(Stack[-3], Stack[-1])
0x177: Pop(1)
0x178: Push((int) 1)
0x179: Pop(1); Push(Stack[-3] + Stack[-1]);
0x17a: @ Sleep(Stack[-1], Stack[-2])
0x17b: Pop(1)
0x17c: Pop(0); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: GOTO 0x18e

0x17f: GOTO 0x183

0x180: Push(Stack[-6])
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: GOTO 0x18e

0x183: PushEmpty(bool)
0x184: Call2 0x191

0x185: Pop(0)
0x186: Pop(1); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: GOTO 0x18e

0x189: @ ResetAAS()
0x18a: Pop(0)
0x18b: Push((int) 1)
0x18c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x18d: GOTO 0x150

0x18e: @ ResetAAS()
0x18f: Pop(0)
0x190: Return(); Pop(14)

0x191: Stack[-1] = (bool) 1
0x192: Return(); Pop(0)

0x193: @ StopAnimation()
0x194: Pop(0)
0x195: @ StopGroup0()
0x196: Pop(0)
0x197: Return(); Pop(0)

0x198: PushEmpty(bool, bool)
0x199: @ IsLoaded(Stack[-1])
0x19a: Pop(0)
0x19b: Stack[-3] = Stack[-1]
0x19c: Return(); Pop(2)

0x19d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x19e: @@ GetPosition(Stack[-8])
0x19f: Pop(0)
0x1a0: @@ GetEyesHeight(Stack[-9])
0x1a1: Pop(0)
0x1a2: Push(CvectorIndex(Stack[-8], 1))
0x1a3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1a4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1a5: @ GetPosition(Stack[-7])
0x1a6: Pop(0)
0x1a7: @ GetEyesHeight(Stack[-9])
0x1a8: Pop(0)
0x1a9: Push(CvectorIndex(Stack[-7], 1))
0x1aa: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ab: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ac: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1ad: Push(CvectorIndex(Stack[-6], 1))
0x1ae: Stack[-1] = (int) 0
0x1af: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1b0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1b1: Pop(1); Push(Sqrt(Stack[-1]))
0x1b2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1b3: Stack[-5] = -Stack[-6]; Pop(0);
0x1b4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1b5: PushEmpty(cvector, cvector)
0x1b6: Push(CVector(0.0, 1.0, 0.0))
0x1b7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1b8: Call2 0x218

0x1b9: Pop(1)
0x1ba: Push((int) 25)
0x1bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1bc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1bd: Push(CVector(0.0, 10.0, 0.0))
0x1be: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1bf: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1c0: @ IsOverrideActive(Stack[-2])
0x1c1: Pop(0)
0x1c2: Push(Stack[-2])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c4: Stack[-21] = (bool) 0
0x1c5: Return(); Pop(18)

0x1c6: @ StopWorld()
0x1c7: Pop(0)
0x1c8: @ CameraTransit(Stack[-3], Stack[-5])
0x1c9: Pop(0)
0x1ca: Push(CvectorIndex(Stack[-4], 0))
0x1cb: Push(CvectorIndex(Stack[-5], 2))
0x1cc: @ Rotate(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: PushEmpty(bool)
0x1cf: Call2 0x2b6

0x1d0: Pop(0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: GOTO 0x1db

0x1d3: Push("head")
0x1d4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1d5: Pop(1)
0x1d6: Push(Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: Push("head")
0x1d9: @ LookAsyncCamera(Stack[-1])
0x1da: Pop(1)
0x1db: @ CameraWaitForPlayFinish()
0x1dc: Pop(0)
0x1dd: @ ResumeWorld()
0x1de: Pop(0)
0x1df: Stack[-21] = (bool) 1
0x1e0: Return(); Pop(18)

0x1e1: PushEmpty(bool, bool)
0x1e2: @ CameraSwitchToNormal()
0x1e3: Pop(0)
0x1e4: PushEmpty(bool)
0x1e5: Call2 0x2b6

0x1e6: Pop(0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: GOTO 0x1f1

0x1e9: Push("head")
0x1ea: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1eb: Pop(1)
0x1ec: Push(Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ee: Push("head")
0x1ef: @ UnlookAsync(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty(bool, float, float, bool, float, float)
0x1f3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1f4: Pop(0)
0x1f5: Push(Stack[-3])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1f8: Pop(0)
0x1f9: Push((bool) 0)
0x1fa: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(1)
0x1fc: GOTO 0x201

0x1fd: Push("Can't find lsh animation : ")
0x1fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1ff: @ Trace(Stack[-1])
0x200: Pop(1)
0x201: Return(); Pop(6)

0x202: PushEmpty(bool, float, float, bool, float, float)
0x203: @ lshHasAnimation(Stack[-3], Stack[-8])
0x204: Pop(0)
0x205: Push(Stack[-3])
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x208: Pop(0)
0x209: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x20a: Pop(0)
0x20b: GOTO 0x210

0x20c: Push("Can't find lsh animation : ")
0x20d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x20e: @ Trace(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(6)

0x211: PushEmpty(bool)
0x212: Call2 0x2b6

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x215: @ lshStopSpeech()
0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty(float, float)
0x219: Pop(0); Push(Stack[-3] | Stack[-3]);
0x21a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21b: Push((float)0.0)
0x21c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x21f: Return(); Pop(2)

0x220: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x221: Return(); Pop(2)

0x222: PushEmpty(object, object)
0x223: @ FindActor(Stack[-1], Stack[-4])
0x224: Pop(0)
0x225: Pop(0); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: Stack[-5] = (bool) 0
0x228: Return(); Pop(2)

0x229: @ Trigger(Stack[-1], Stack[-3])
0x22a: Pop(0)
0x22b: Stack[-5] = (bool) 1
0x22c: Return(); Pop(2)

0x22d: Stack[-1] = 0
0x22e: PushEmpty(float, float)
0x22f: @ GetGameTime(Stack[-1])
0x230: Pop(0)
0x231: Stack[-3] = Stack[-1]
0x232: Return(); Pop(2)

0x233: PushEmpty(string, string)
0x234: Stack[-1] = "idle"
0x235: Push(Stack[-3])
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x238: Stack[-4] = Stack[-1]
0x239: Return(); Pop(2)

0x23a: PushEmpty(int, bool, int, bool)
0x23b: Stack[-2] = (int) 0
0x23c: Push("all")
0x23d: PushEmpty(string, int)
0x23e: Stack[-1] = Stack[-5]
0x23f: Call2 0x233

0x240: Pop(1)
0x241: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x249

0x246: Push((int) 1)
0x247: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x248: GOTO 0x23c

0x249: Stack[-5] = Stack[-2]
0x24a: Return(); Pop(4)

0x24b: PushEmpty(object, object)
0x24c: PushEmpty(object)
0x24d: Call2 0x26b

0x24e: Stack[-2] = Stack[-1]
0x24f: Pop(1)
0x250: Push("d4q01Whitemask")
0x251: Push("pt_d4q01_key1_region")
0x252: Push((int) 1)
0x253: Push((int) 511523)
0x254: PushEmpty(float)
0x255: Call2 0x22e

0x256: Pop(0)
0x257: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(5)
0x259: Return(); Pop(2)

0x25a: Stack[-1] = 0
0x25b: PushEmpty()
0x25c: PushEmpty(object, string, float)
0x25d: PushEmpty(object)
0x25e: Call2 0x26b

0x25f: Stack[-4] = Stack[-1]
0x260: Pop(1)
0x261: Stack[-2] = "pt_d4q01_key1_region"
0x262: Stack[-1] = (int) 2
0x263: Call2 0x27c

0x264: Pop(3)
0x265: PushEmpty(object)
0x266: Call2 0x26b

0x267: Pop(0)
0x268: @@ ShowMap(Stack[-1])
0x269: Pop(1)
0x26a: Return(); Pop(0)

0x26b: PushEmpty(object, object, object, object)
0x26c: @ GetMainOutdoorScene(Stack[-2])
0x26d: Pop(0)
0x26e: Pop(0); Push((bool) Stack[-2] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: Push("Can't find main outdoor scene")
0x271: @ Trace(Stack[-1])
0x272: Pop(1)
0x273: Stack[-1] = 0
0x274: Stack[-5] = Stack[-1]
0x275: Return(); Pop(4)

0x276: @@ GetMap(Stack[-1])
0x277: Pop(0)
0x278: Stack[-5] = Stack[-1]
0x279: Return(); Pop(4)

0x27a: Stack[-1] = 0
0x27b: Stack[-2] = 0
0x27c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x27d: @ GetMainOutdoorScene(Stack[-2])
0x27e: Pop(0)
0x27f: Pop(0); Push((bool) Stack[-2] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x281: Push("Can't find main outdoor scene")
0x282: @ Trace(Stack[-1])
0x283: Pop(1)
0x284: Return(); Pop(8)

0x285: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x286: Pop(0)
0x287: Pop(0); Push((bool) Stack[-1] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x289: Push("Warning: outdoor scene locator ")
0x28a: Pop(1); Push(Stack[-1] + Stack[-11]);
0x28b: Push(" doesnt exist")
0x28c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28d: @ Trace(Stack[-1])
0x28e: Pop(1)
0x28f: @@ GetMap(Stack[-11])
0x290: Pop(0)
0x291: Pop(0); Push((bool) Stack[-11] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x293: Push("Can't find map")
0x294: @ Trace(Stack[-1])
0x295: Pop(1)
0x296: Return(); Pop(8)

0x297: Push(CvectorIndex(Stack[-4], 0))
0x298: Push(CvectorIndex(Stack[-5], 2))
0x299: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x29a: Pop(2)
0x29b: Return(); Pop(8)

0x29c: Stack[-2] = 0
0x29d: PushEmpty(int, int)
0x29e: Push("branch")
0x29f: @ GetVariable(Stack[-1], Stack[-2])
0x2a0: Pop(1)
0x2a1: Push((int) 0)
0x2a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: Stack[-3] = (int) 1
0x2a5: Return(); Pop(2)

0x2a6: GOTO 0x2ac

0x2a7: Push((int) 1)
0x2a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-3] = (int) 2
0x2ab: Return(); Pop(2)

0x2ac: Stack[-3] = (int) 3
0x2ad: Return(); Pop(2)

0x2ae: Stack[-1] = (int) 515571
0x2af: Return(); Pop(0)

0x2b0: Stack[-1] = (int) 504029
0x2b1: Return(); Pop(0)

0x2b2: Stack[-1] = "ui/NPC_bmask.png"
0x2b3: Return(); Pop(0)

0x2b4: Stack[-1] = "ui/NPC_bmask_b.png"
0x2b5: Return(); Pop(0)

0x2b6: Stack[-1] = (bool) 0
0x2b7: Return(); Pop(0)

