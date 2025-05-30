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
	d1q01bmask
	d1q01wmask
	quest_d1_01
	remove_masks
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png
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
	GetVariable (2 args)
	SetVariable (2 args)
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)

RunOp = 0x11b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x120 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x19f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x24c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x24a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x24e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x250

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x254

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
0x41: Call2 0x1e4

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
0x54: Push((int) 524904)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 524905)
0x5a: Push((int) 26232)
0x5b: Push((int) 26231)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 524911)
0x5f: Push((int) 26243)
0x60: Push((int) 26237)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x252

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1f6

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
0x86: Call2 0x252

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
0x96: Call2 0x206

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x215

0x9f: Pop(0)
0xa0: Push((int) 26230)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 524904)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 524905)
0xad: Push((int) 26232)
0xae: Push((int) 26231)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 524911)
0xb2: Push((int) 26243)
0xb3: Push((int) 26237)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 26243)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 524916)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 524917)
0xc4: Push((int) 26232)
0xc5: Push((int) 26244)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 524918)
0xc9: Push((int) 26234)
0xca: Push((int) 26245)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 26232)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call2 0x84

0xd4: Pop(1)
0xd5: Push((int) 524906)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 524907)
0xdb: Push((int) 26234)
0xdc: Push((int) 26233)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 524913)
0xe0: Push((int) -1)
0xe1: Push((int) 26239)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 26234)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x84

0xeb: Pop(1)
0xec: Push((int) 524908)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 524909)
0xf2: Push((int) -1)
0xf3: Push((int) 26235)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 524914)
0xf7: Push((int) 26242)
0xf8: Push((int) 26241)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 26242)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x84

0x102: Pop(1)
0x103: Push((int) 524915)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 524919)
0x109: Push((int) -1)
0x10a: Push((int) 26248)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10f: PushEmpty(bool)
0x110: Call2 0x252

0x111: Pop(0)
0x112: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x113: @ lshStopAnimation()
0x114: Pop(0)
0x115: GOTO 0x118

0x116: @ StopAnimation()
0x117: Pop(0)
0x118: Return(); Pop(0)

0x119: GOTO 0x9b

0x11a: Return(); Pop(0)

0x11b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11c: PushEmpty()
0x11d: Call2 0x13c

0x11e: Pop(0)
0x11f: Return(); Pop(0)

0x120: PushEmpty(int, int)
0x121: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x195

0x125: Pop(0)
0x126: PushEmpty(int, object)
0x127: Stack[-1] = Stack[-5]
0x128: Push(-2, 1); TaskCall(0)
0x129: Call2 0x0

0x12a: Pop(-2, 1); TaskReturn
0x12b: Pop(2)
0x12c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x12d: Push("d1q01bmask")
0x12e: @ GetVariable(Stack[-1], Stack[-2])
0x12f: Pop(1)
0x130: Push("d1q01wmask")
0x131: Push((int) 1)
0x132: @ SetVariable(Stack[-2], Stack[-1])
0x133: Pop(2)
0x134: Push(Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x136: PushEmpty(bool, string, string)
0x137: Stack[-2] = "quest_d1_01"
0x138: Stack[-1] = "remove_masks"
0x139: Call2 0x226

0x13a: Pop(3)
0x13b: Return(); Pop(2)

0x13c: PushEmpty()
0x13d: Call2 0x144

0x13e: Pop(0)
0x13f: Push((int) 3)
0x140: @ Sleep(Stack[-1])
0x141: Pop(1)
0x142: GOTO 0x13c

0x143: Return(); Pop(0)

0x144: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x145: @ WaitForAnimEnd()
0x146: Pop(0)
0x147: PushEmpty(bool)
0x148: Call2 0x19a

0x149: Pop(0)
0x14a: Pop(1); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Return(); Pop(14)

0x14d: PushEmpty(int)
0x14e: Call2 0x239

0x14f: Stack[-8] = Stack[-1]
0x150: Pop(1)
0x151: Stack[-6] = (int) 0
0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 0
0x154: Push((int) 5)
0x155: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: PushEmpty(bool)
0x158: Call2 0x19a

0x159: Pop(0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Stack[-1] = (bool) 1
0x15c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x15d: Push((int) 3)
0x15e: @ irand(Stack[-6], Stack[-1])
0x15f: Pop(1)
0x160: Push((int) 0)
0x161: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x163: Push(Stack[-7])
0x164: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x165: @ irand(Stack[-4], Stack[-7])
0x166: Pop(0)
0x167: Push("all")
0x168: PushEmpty(string, int)
0x169: Stack[-1] = Stack[-7]
0x16a: Call2 0x232

0x16b: Pop(1)
0x16c: @ PlayAnimation(Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: @ WaitForAnimEnd(Stack[-3])
0x16f: Pop(0)
0x170: Pop(0); Push((bool) Stack[-3] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: GOTO 0x190

0x173: GOTO 0x185

0x174: Push((int) 1)
0x175: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x177: Push((int) 4)
0x178: @ rand(Stack[-3], Stack[-1])
0x179: Pop(1)
0x17a: Push((int) 1)
0x17b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x17c: @ Sleep(Stack[-1], Stack[-2])
0x17d: Pop(1)
0x17e: Pop(0); Push((bool) Stack[-1] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: GOTO 0x190

0x181: GOTO 0x185

0x182: Push(Stack[-6])
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x190

0x185: PushEmpty(bool)
0x186: Call2 0x193

0x187: Pop(0)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: GOTO 0x190

0x18b: @ ResetAAS()
0x18c: Pop(0)
0x18d: Push((int) 1)
0x18e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x18f: GOTO 0x152

0x190: @ ResetAAS()
0x191: Pop(0)
0x192: Return(); Pop(14)

0x193: Stack[-1] = (bool) 1
0x194: Return(); Pop(0)

0x195: @ StopAnimation()
0x196: Pop(0)
0x197: @ StopGroup0()
0x198: Pop(0)
0x199: Return(); Pop(0)

0x19a: PushEmpty(bool, bool)
0x19b: @ IsLoaded(Stack[-1])
0x19c: Pop(0)
0x19d: Stack[-3] = Stack[-1]
0x19e: Return(); Pop(2)

0x19f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1a0: @@ GetPosition(Stack[-8])
0x1a1: Pop(0)
0x1a2: @@ GetEyesHeight(Stack[-9])
0x1a3: Pop(0)
0x1a4: Push(CvectorIndex(Stack[-8], 1))
0x1a5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1a6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1a7: @ GetPosition(Stack[-7])
0x1a8: Pop(0)
0x1a9: @ GetEyesHeight(Stack[-9])
0x1aa: Pop(0)
0x1ab: Push(CvectorIndex(Stack[-7], 1))
0x1ac: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ad: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ae: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1af: Push(CvectorIndex(Stack[-6], 1))
0x1b0: Stack[-1] = (int) 0
0x1b1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1b2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1b3: Pop(1); Push(Sqrt(Stack[-1]))
0x1b4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1b5: Stack[-5] = -Stack[-6]; Pop(0);
0x1b6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1b7: PushEmpty(cvector, cvector)
0x1b8: Push(CVector(0.0, 1.0, 0.0))
0x1b9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1ba: Call2 0x21c

0x1bb: Pop(1)
0x1bc: Push((int) 25)
0x1bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1be: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1bf: Push(CVector(0.0, 10.0, 0.0))
0x1c0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1c1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1c2: @ IsOverrideActive(Stack[-2])
0x1c3: Pop(0)
0x1c4: Push(Stack[-2])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-21] = (bool) 0
0x1c7: Return(); Pop(18)

0x1c8: @ StopWorld()
0x1c9: Pop(0)
0x1ca: Push((bool) 1)
0x1cb: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1cc: Pop(1)
0x1cd: Push(CvectorIndex(Stack[-4], 0))
0x1ce: Push(CvectorIndex(Stack[-5], 2))
0x1cf: @ Rotate(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: PushEmpty(bool)
0x1d2: Call2 0x252

0x1d3: Pop(0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: GOTO 0x1de

0x1d6: Push("head")
0x1d7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1d8: Pop(1)
0x1d9: Push(Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1db: Push("head")
0x1dc: @ LookAsyncCamera(Stack[-1])
0x1dd: Pop(1)
0x1de: @ CameraWaitForPlayFinish()
0x1df: Pop(0)
0x1e0: @ ResumeWorld()
0x1e1: Pop(0)
0x1e2: Stack[-21] = (bool) 1
0x1e3: Return(); Pop(18)

0x1e4: PushEmpty(bool, bool)
0x1e5: Push((bool) 1)
0x1e6: @ CameraSwitchToNormal(Stack[-1])
0x1e7: Pop(1)
0x1e8: PushEmpty(bool)
0x1e9: Call2 0x252

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: GOTO 0x1f5

0x1ed: Push("head")
0x1ee: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1ef: Pop(1)
0x1f0: Push(Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: Push("head")
0x1f3: @ UnlookAsync(Stack[-1])
0x1f4: Pop(1)
0x1f5: Return(); Pop(2)

0x1f6: PushEmpty(bool, float, float, bool, float, float)
0x1f7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1f8: Pop(0)
0x1f9: Push(Stack[-3])
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1fc: Pop(0)
0x1fd: Push((bool) 0)
0x1fe: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(1)
0x200: GOTO 0x205

0x201: Push("Can't find lsh animation : ")
0x202: Pop(1); Push(Stack[-1] + Stack[-8]);
0x203: @ Trace(Stack[-1])
0x204: Pop(1)
0x205: Return(); Pop(6)

0x206: PushEmpty(bool, float, float, bool, float, float)
0x207: @ lshHasAnimation(Stack[-3], Stack[-8])
0x208: Pop(0)
0x209: Push(Stack[-3])
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x20c: Pop(0)
0x20d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x20e: Pop(0)
0x20f: GOTO 0x214

0x210: Push("Can't find lsh animation : ")
0x211: Pop(1); Push(Stack[-1] + Stack[-9]);
0x212: @ Trace(Stack[-1])
0x213: Pop(1)
0x214: Return(); Pop(6)

0x215: PushEmpty(bool)
0x216: Call2 0x252

0x217: Pop(0)
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: @ lshStopSpeech()
0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: PushEmpty(float, float)
0x21d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x21e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21f: Push((float)0.0)
0x220: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x223: Return(); Pop(2)

0x224: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x225: Return(); Pop(2)

0x226: PushEmpty(object, object)
0x227: @ FindActor(Stack[-1], Stack[-4])
0x228: Pop(0)
0x229: Pop(0); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: Stack[-5] = (bool) 0
0x22c: Return(); Pop(2)

0x22d: @ Trigger(Stack[-1], Stack[-3])
0x22e: Pop(0)
0x22f: Stack[-5] = (bool) 1
0x230: Return(); Pop(2)

0x231: Stack[-1] = 0
0x232: PushEmpty(string, string)
0x233: Stack[-1] = "idle"
0x234: Push(Stack[-3])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x237: Stack[-4] = Stack[-1]
0x238: Return(); Pop(2)

0x239: PushEmpty(int, bool, int, bool)
0x23a: Stack[-2] = (int) 0
0x23b: Push("all")
0x23c: PushEmpty(string, int)
0x23d: Stack[-1] = Stack[-5]
0x23e: Call2 0x232

0x23f: Pop(1)
0x240: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(2)
0x242: Pop(0); Push((bool) Stack[-1] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x248

0x245: Push((int) 1)
0x246: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x247: GOTO 0x23b

0x248: Stack[-5] = Stack[-2]
0x249: Return(); Pop(4)

0x24a: Stack[-1] = (int) 515569
0x24b: Return(); Pop(0)

0x24c: Stack[-1] = (int) 503354
0x24d: Return(); Pop(0)

0x24e: Stack[-1] = "ui/NPC_wmask.png"
0x24f: Return(); Pop(0)

0x250: Stack[-1] = "ui/NPC_wmask_b.png"
0x251: Return(); Pop(0)

0x252: Stack[-1] = (bool) 0
0x253: Return(); Pop(0)

0x254: PushEmpty(int, int)
0x255: Push("branch")
0x256: @ GetVariable(Stack[-1], Stack[-2])
0x257: Pop(1)
0x258: Push((int) 0)
0x259: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25b: Stack[-3] = (int) 1
0x25c: Return(); Pop(2)

0x25d: GOTO 0x263

0x25e: Push((int) 1)
0x25f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: Stack[-3] = (int) 2
0x262: Return(); Pop(2)

0x263: Stack[-3] = (int) 3
0x264: Return(); Pop(2)

