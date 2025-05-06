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
	execute
	bdie
	d11q02
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	quest_d11_02
	actor_unload
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
	Hold (0 args)
	WaitForAnimEnd (1 args)
	LockAnimationEnd (2 args)
	GetVariable (2 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0xcc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xd1 Vars = (string)
		EVENT_5 Op = 0xe8 Vars = ()
		EVENT_0 Op = 0xef Vars = (object)
		EVENT_6 Op = 0x11d Vars = ()

Events:
EVENT_6 Op = 0x1c8 Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x12f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1e1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1df

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1e3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1e5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1ce

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
0x41: Call2 0x174

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
0x54: Push((int) 514172)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 514173)
0x5a: Push((int) -1)
0x5b: Push((int) 15387)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 539615)
0x5f: Push((int) -1)
0x60: Push((int) 41562)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x1e7

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x186

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
0x86: Call2 0x1e7

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
0x96: Call2 0x196

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x1a5

0x9f: Pop(0)
0xa0: Push((int) 15386)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 514172)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 514173)
0xad: Push((int) -1)
0xae: Push((int) 15387)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 539615)
0xb2: Push((int) -1)
0xb3: Push((int) 41562)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x1e7

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: PushEmpty(int, object)
0xc6: Stack[-1] = Stack[-3]
0xc7: Push(-2, 1); TaskCall(0)
0xc8: Call2 0x0

0xc9: Pop(-2, 1); TaskReturn
0xca: Pop(2)
0xcb: Return(); Pop(0)

0xcc: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xcd: @ Hold()
0xce: Pop(0)
0xcf: GOTO 0xcd

0xd0: Return(); Pop(0)

0xd1: PushEmpty(bool, bool)
0xd2: Push("execute")
0xd3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xd6: Push("all")
0xd7: Push("bdie")
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ WaitForAnimEnd(Stack[-1])
0xdb: Pop(0)
0xdc: Push(Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xde: Push("all")
0xdf: Push("bdie")
0xe0: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: GOTO 0xe7

0xe3: PushEmpty(string)
0xe4: Stack[-1] = Stack[-4]
0xe5: Call2 0x101

0xe6: Pop(1)
0xe7: Return(); Pop(2)

0xe8: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xea: Push("all")
0xeb: Push("bdie")
0xec: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xed: Pop(2)
0xee: Return(); Pop(0)

0xef: PushEmpty(int, int)
0xf0: Push("d11q02")
0xf1: @ GetVariable(Stack[-1], Stack[-2])
0xf2: Pop(1)
0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: Push((int) 2)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf8: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: Stack[-1] = (bool) 1
0xfb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[-4]
0xfe: Call2 0xc4

0xff: Pop(1)
0x100: Return(); Pop(2)

0x101: PushEmpty(bool, bool)
0x102: Push("cleanup")
0x103: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x105: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x106: @ IsLoaded(Stack[-1])
0x107: Pop(0)
0x108: PushEmpty(bool)
0x109: Stack[-1] = (bool) 0
0x10a: Pop(0); Push((bool) Stack[-2] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(bool)
0x10d: Call2 0x12d

0x10e: Pop(0)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Stack[-1] = (bool) 1
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object)
0x113: Call2 0x1ac

0x114: Pop(0)
0x115: @ RemoveActor(Stack[-1])
0x116: Pop(1)
0x117: GOTO 0x11c

0x118: Push("restore")
0x119: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11c: Return(); Pop(2)

0x11d: PushEmpty(bool)
0x11e: Stack[-1] = (bool) 0
0x11f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(bool)
0x122: Call2 0x12d

0x123: Pop(0)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 1
0x126: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x127: PushEmpty(object)
0x128: Call2 0x1ac

0x129: Pop(0)
0x12a: @ RemoveActor(Stack[-1])
0x12b: Pop(1)
0x12c: Return(); Pop(0)

0x12d: Stack[-1] = (bool) 1
0x12e: Return(); Pop(0)

0x12f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x130: @@ GetPosition(Stack[-8])
0x131: Pop(0)
0x132: @@ GetEyesHeight(Stack[-9])
0x133: Pop(0)
0x134: Push(CvectorIndex(Stack[-8], 1))
0x135: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x136: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x137: @ GetPosition(Stack[-7])
0x138: Pop(0)
0x139: @ GetEyesHeight(Stack[-9])
0x13a: Pop(0)
0x13b: Push(CvectorIndex(Stack[-7], 1))
0x13c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x13d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x13e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x13f: Push(CvectorIndex(Stack[-6], 1))
0x140: Stack[-1] = (int) 0
0x141: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x142: Pop(0); Push(Stack[-6] | Stack[-6]);
0x143: Pop(1); Push(Sqrt(Stack[-1]))
0x144: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x145: Stack[-5] = -Stack[-6]; Pop(0);
0x146: Pop(0); Push(Stack[-6] * Stack[-19]);
0x147: PushEmpty(cvector, cvector)
0x148: Push(CVector(0.0, 1.0, 0.0))
0x149: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x14a: Call2 0x1b2

0x14b: Pop(1)
0x14c: Push((int) 25)
0x14d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14f: Push(CVector(0.0, 10.0, 0.0))
0x150: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x151: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x152: @ IsOverrideActive(Stack[-2])
0x153: Pop(0)
0x154: Push(Stack[-2])
0x155: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x156: Stack[-21] = (bool) 0
0x157: Return(); Pop(18)

0x158: @ StopWorld()
0x159: Pop(0)
0x15a: Push((bool) 1)
0x15b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x15c: Pop(1)
0x15d: Push(CvectorIndex(Stack[-4], 0))
0x15e: Push(CvectorIndex(Stack[-5], 2))
0x15f: @ Rotate(Stack[-2], Stack[-1])
0x160: Pop(2)
0x161: PushEmpty(bool)
0x162: Call2 0x1e7

0x163: Pop(0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: GOTO 0x16e

0x166: Push("head")
0x167: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x168: Pop(1)
0x169: Push(Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: Push("head")
0x16c: @ LookAsyncCamera(Stack[-1])
0x16d: Pop(1)
0x16e: @ CameraWaitForPlayFinish()
0x16f: Pop(0)
0x170: @ ResumeWorld()
0x171: Pop(0)
0x172: Stack[-21] = (bool) 1
0x173: Return(); Pop(18)

0x174: PushEmpty(bool, bool)
0x175: Push((bool) 1)
0x176: @ CameraSwitchToNormal(Stack[-1])
0x177: Pop(1)
0x178: PushEmpty(bool)
0x179: Call2 0x1e7

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x185

0x17d: Push("head")
0x17e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x17f: Pop(1)
0x180: Push(Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: Push("head")
0x183: @ UnlookAsync(Stack[-1])
0x184: Pop(1)
0x185: Return(); Pop(2)

0x186: PushEmpty(bool, float, float, bool, float, float)
0x187: @ lshHasAnimation(Stack[-3], Stack[-7])
0x188: Pop(0)
0x189: Push(Stack[-3])
0x18a: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x18c: Pop(0)
0x18d: Push((bool) 0)
0x18e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(1)
0x190: GOTO 0x195

0x191: Push("Can't find lsh animation : ")
0x192: Pop(1); Push(Stack[-1] + Stack[-8]);
0x193: @ Trace(Stack[-1])
0x194: Pop(1)
0x195: Return(); Pop(6)

0x196: PushEmpty(bool, float, float, bool, float, float)
0x197: @ lshHasAnimation(Stack[-3], Stack[-8])
0x198: Pop(0)
0x199: Push(Stack[-3])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x19c: Pop(0)
0x19d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x19e: Pop(0)
0x19f: GOTO 0x1a4

0x1a0: Push("Can't find lsh animation : ")
0x1a1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1a2: @ Trace(Stack[-1])
0x1a3: Pop(1)
0x1a4: Return(); Pop(6)

0x1a5: PushEmpty(bool)
0x1a6: Call2 0x1e7

0x1a7: Pop(0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a9: @ lshStopSpeech()
0x1aa: Pop(0)
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(object, object)
0x1ad: @ self(Stack[-1])
0x1ae: Pop(0)
0x1af: Stack[-3] = Stack[-1]
0x1b0: Return(); Pop(2)

0x1b1: Stack[-1] = 0
0x1b2: PushEmpty(float, float)
0x1b3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1b4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b5: Push((float)0.0)
0x1b6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1b9: Return(); Pop(2)

0x1ba: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1bb: Return(); Pop(2)

0x1bc: PushEmpty(object, object)
0x1bd: @ FindActor(Stack[-1], Stack[-4])
0x1be: Pop(0)
0x1bf: Pop(0); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-5] = (bool) 0
0x1c2: Return(); Pop(2)

0x1c3: @ Trigger(Stack[-1], Stack[-3])
0x1c4: Pop(0)
0x1c5: Stack[-5] = (bool) 1
0x1c6: Return(); Pop(2)

0x1c7: Stack[-1] = 0
0x1c8: PushEmpty(bool, string, string)
0x1c9: Stack[-2] = "quest_d11_02"
0x1ca: Stack[-1] = "actor_unload"
0x1cb: Call2 0x1bc

0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(int, int)
0x1cf: Push("branch")
0x1d0: @ GetVariable(Stack[-1], Stack[-2])
0x1d1: Pop(1)
0x1d2: Push((int) 0)
0x1d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d5: Stack[-3] = (int) 1
0x1d6: Return(); Pop(2)

0x1d7: GOTO 0x1dd

0x1d8: Push((int) 1)
0x1d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: Stack[-3] = (int) 2
0x1dc: Return(); Pop(2)

0x1dd: Stack[-3] = (int) 3
0x1de: Return(); Pop(2)

0x1df: Stack[-1] = (int) 515568
0x1e0: Return(); Pop(0)

0x1e1: Stack[-1] = (int) 503353
0x1e2: Return(); Pop(0)

0x1e3: Stack[-1] = "ui/NPC_Citizen1.png"
0x1e4: Return(); Pop(0)

0x1e5: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x1e6: Return(); Pop(0)

0x1e7: Stack[-1] = (bool) 0
0x1e8: Return(); Pop(0)

