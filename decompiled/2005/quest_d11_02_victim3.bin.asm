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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0xd7
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x95 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xdc Vars = (string)
		EVENT_5 Op = 0xf3 Vars = ()
		EVENT_0 Op = 0xfa Vars = (object)
		EVENT_6 Op = 0x128 Vars = ()

Events:
EVENT_6 Op = 0x1d1 Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x13a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1ea

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1e8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1ec

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1ee

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1d7

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
0x41: Call2 0x17e

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
0x4f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x7f

0x53: Pop(1)
0x54: Push((int) 514178)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 539618)
0x5a: Push((int) 41566)
0x5b: Push((int) 41565)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: GOTO 0x61

0x5f: Return(); Pop(0)

0x60: GOTO 0x4e

0x61: PushEmpty(bool)
0x62: Call2 0x1f0

0x63: Pop(0)
0x64: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x65: @ lshWaitForAnimEnd()
0x66: Pop(0)
0x67: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: GOTO 0x6f

0x6a: PushEmpty(string)
0x6b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6c: Call2 0x18f

0x6d: Pop(1)
0x6e: GOTO 0x65

0x6f: GOTO 0x7e

0x70: Push("all")
0x71: Push("idle")
0x72: @ PlayAnimation(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: @ WaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: Push("all")
0x7a: Push("idle")
0x7b: @ PlayAnimation(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: GOTO 0x74

0x7e: Return(); Pop(0)

0x7f: PushEmpty()
0x80: PushEmpty(bool)
0x81: Call2 0x1f0

0x82: Pop(0)
0x83: Pop(1); Push((bool) Stack[-1] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Return(); Pop(0)

0x86: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Return(); Pop(0)

0x89: PushEmpty(string, bool)
0x8a: Stack[-2] = Stack[-3]
0x8b: Push("")
0x8c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-1] = (bool) 0
0x8f: GOTO 0x91

0x90: Stack[-1] = (bool) 1
0x91: Call2 0x19f

0x92: Pop(2)
0x93: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: Push((int) 1)
0x97: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0x98: PushEmpty()
0x99: Call2 0x1ae

0x9a: Pop(0)
0x9b: Push((int) 15392)
0x9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x9e: PushEmpty(string)
0x9f: Stack[-1] = "Neutral"
0xa0: Call2 0x7f

0xa1: Pop(1)
0xa2: Push((int) 514178)
0xa3: @@ SetMessage(Stack[-1])
0xa4: Pop(1)
0xa5: @@ ClearReplies()
0xa6: Pop(0)
0xa7: Push((int) 539618)
0xa8: Push((int) 41566)
0xa9: Push((int) 41565)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: Return(); Pop(0)

0xad: Push((int) 41566)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x7f

0xb3: Pop(1)
0xb4: Push((int) 539619)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: Push((int) 539620)
0xba: Push((int) -1)
0xbb: Push((int) 41567)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Push((int) 41568)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc3: PushEmpty(bool)
0xc4: Call2 0x1f0

0xc5: Pop(0)
0xc6: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc7: @ lshStopAnimation()
0xc8: Pop(0)
0xc9: GOTO 0xcc

0xca: @ StopAnimation()
0xcb: Pop(0)
0xcc: Return(); Pop(0)

0xcd: GOTO 0x96

0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(int, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Push(-2, 1); TaskCall(0)
0xd3: Call2 0x0

0xd4: Pop(-2, 1); TaskReturn
0xd5: Pop(2)
0xd6: Return(); Pop(0)

0xd7: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xd8: @ Hold()
0xd9: Pop(0)
0xda: GOTO 0xd8

0xdb: Return(); Pop(0)

0xdc: PushEmpty(bool, bool)
0xdd: Push("execute")
0xde: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xe1: Push("all")
0xe2: Push("bdie")
0xe3: @ PlayAnimation(Stack[-2], Stack[-1])
0xe4: Pop(2)
0xe5: @ WaitForAnimEnd(Stack[-1])
0xe6: Pop(0)
0xe7: Push(Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe9: Push("all")
0xea: Push("bdie")
0xeb: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xec: Pop(2)
0xed: GOTO 0xf2

0xee: PushEmpty(string)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x10c

0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xf4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf5: Push("all")
0xf6: Push("bdie")
0xf7: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xf8: Pop(2)
0xf9: Return(); Pop(0)

0xfa: PushEmpty(int, int)
0xfb: Push("d11q02")
0xfc: @ GetVariable(Stack[-1], Stack[-2])
0xfd: Pop(1)
0xfe: PushEmpty(bool)
0xff: Stack[-1] = (bool) 0
0x100: Push((int) 2)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x103: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: Stack[-1] = (bool) 1
0x106: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x107: PushEmpty(object)
0x108: Stack[-1] = Stack[-4]
0x109: Call2 0xcf

0x10a: Pop(1)
0x10b: Return(); Pop(2)

0x10c: PushEmpty(bool, bool)
0x10d: Push("cleanup")
0x10e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x110: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x111: @ IsLoaded(Stack[-1])
0x112: Pop(0)
0x113: PushEmpty(bool)
0x114: Stack[-1] = (bool) 0
0x115: Pop(0); Push((bool) Stack[-2] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: PushEmpty(bool)
0x118: Call2 0x138

0x119: Pop(0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Stack[-1] = (bool) 1
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: PushEmpty(object)
0x11e: Call2 0x1b5

0x11f: Pop(0)
0x120: @ RemoveActor(Stack[-1])
0x121: Pop(1)
0x122: GOTO 0x127

0x123: Push("restore")
0x124: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x126: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x127: Return(); Pop(2)

0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(bool)
0x12d: Call2 0x138

0x12e: Pop(0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object)
0x133: Call2 0x1b5

0x134: Pop(0)
0x135: @ RemoveActor(Stack[-1])
0x136: Pop(1)
0x137: Return(); Pop(0)

0x138: Stack[-1] = (bool) 1
0x139: Return(); Pop(0)

0x13a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x13b: @@ GetPosition(Stack[-8])
0x13c: Pop(0)
0x13d: @@ GetEyesHeight(Stack[-9])
0x13e: Pop(0)
0x13f: Push(CvectorIndex(Stack[-8], 1))
0x140: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x141: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x142: @ GetPosition(Stack[-7])
0x143: Pop(0)
0x144: @ GetEyesHeight(Stack[-9])
0x145: Pop(0)
0x146: Push(CvectorIndex(Stack[-7], 1))
0x147: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x148: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x149: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x14a: Push(CvectorIndex(Stack[-6], 1))
0x14b: Stack[-1] = (int) 0
0x14c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x14d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x14e: Pop(1); Push(Sqrt(Stack[-1]))
0x14f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x150: Stack[-5] = -Stack[-6]; Pop(0);
0x151: Pop(0); Push(Stack[-6] * Stack[-19]);
0x152: PushEmpty(cvector, cvector)
0x153: Push(CVector(0.0, 1.0, 0.0))
0x154: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x155: Call2 0x1bb

0x156: Pop(1)
0x157: Push((int) 25)
0x158: Pop(2); Push(Stack[-2] * Stack[-1]);
0x159: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15a: Push(CVector(0.0, 10.0, 0.0))
0x15b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x15c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x15d: @ IsOverrideActive(Stack[-2])
0x15e: Pop(0)
0x15f: Push(Stack[-2])
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: Stack[-21] = (bool) 0
0x162: Return(); Pop(18)

0x163: @ StopWorld()
0x164: Pop(0)
0x165: @ CameraTransit(Stack[-3], Stack[-5])
0x166: Pop(0)
0x167: Push(CvectorIndex(Stack[-4], 0))
0x168: Push(CvectorIndex(Stack[-5], 2))
0x169: @ Rotate(Stack[-2], Stack[-1])
0x16a: Pop(2)
0x16b: PushEmpty(bool)
0x16c: Call2 0x1f0

0x16d: Pop(0)
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: GOTO 0x178

0x170: Push("head")
0x171: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x172: Pop(1)
0x173: Push(Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x175: Push("head")
0x176: @ LookAsyncCamera(Stack[-1])
0x177: Pop(1)
0x178: @ CameraWaitForPlayFinish()
0x179: Pop(0)
0x17a: @ ResumeWorld()
0x17b: Pop(0)
0x17c: Stack[-21] = (bool) 1
0x17d: Return(); Pop(18)

0x17e: PushEmpty(bool, bool)
0x17f: @ CameraSwitchToNormal()
0x180: Pop(0)
0x181: PushEmpty(bool)
0x182: Call2 0x1f0

0x183: Pop(0)
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18e

0x186: Push("head")
0x187: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x188: Pop(1)
0x189: Push(Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18b: Push("head")
0x18c: @ UnlookAsync(Stack[-1])
0x18d: Pop(1)
0x18e: Return(); Pop(2)

0x18f: PushEmpty(bool, float, float, bool, float, float)
0x190: @ lshHasAnimation(Stack[-3], Stack[-7])
0x191: Pop(0)
0x192: Push(Stack[-3])
0x193: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x194: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x195: Pop(0)
0x196: Push((bool) 0)
0x197: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(1)
0x199: GOTO 0x19e

0x19a: Push("Can't find lsh animation : ")
0x19b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x19c: @ Trace(Stack[-1])
0x19d: Pop(1)
0x19e: Return(); Pop(6)

0x19f: PushEmpty(bool, float, float, bool, float, float)
0x1a0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1a1: Pop(0)
0x1a2: Push(Stack[-3])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1a5: Pop(0)
0x1a6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1a7: Pop(0)
0x1a8: GOTO 0x1ad

0x1a9: Push("Can't find lsh animation : ")
0x1aa: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1ab: @ Trace(Stack[-1])
0x1ac: Pop(1)
0x1ad: Return(); Pop(6)

0x1ae: PushEmpty(bool)
0x1af: Call2 0x1f0

0x1b0: Pop(0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: @ lshStopSpeech()
0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(object, object)
0x1b6: @ self(Stack[-1])
0x1b7: Pop(0)
0x1b8: Stack[-3] = Stack[-1]
0x1b9: Return(); Pop(2)

0x1ba: Stack[-1] = 0
0x1bb: PushEmpty(float, float)
0x1bc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1bd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1be: Push((float)0.0)
0x1bf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1c2: Return(); Pop(2)

0x1c3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(object, object)
0x1c6: @ FindActor(Stack[-1], Stack[-4])
0x1c7: Pop(0)
0x1c8: Pop(0); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ca: Stack[-5] = (bool) 0
0x1cb: Return(); Pop(2)

0x1cc: @ Trigger(Stack[-1], Stack[-3])
0x1cd: Pop(0)
0x1ce: Stack[-5] = (bool) 1
0x1cf: Return(); Pop(2)

0x1d0: Stack[-1] = 0
0x1d1: PushEmpty(bool, string, string)
0x1d2: Stack[-2] = "quest_d11_02"
0x1d3: Stack[-1] = "actor_unload"
0x1d4: Call2 0x1c5

0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(int, int)
0x1d8: Push("branch")
0x1d9: @ GetVariable(Stack[-1], Stack[-2])
0x1da: Pop(1)
0x1db: Push((int) 0)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1de: Stack[-3] = (int) 1
0x1df: Return(); Pop(2)

0x1e0: GOTO 0x1e6

0x1e1: Push((int) 1)
0x1e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e4: Stack[-3] = (int) 2
0x1e5: Return(); Pop(2)

0x1e6: Stack[-3] = (int) 3
0x1e7: Return(); Pop(2)

0x1e8: Stack[-1] = (int) 515564
0x1e9: Return(); Pop(0)

0x1ea: Stack[-1] = (int) 503349
0x1eb: Return(); Pop(0)

0x1ec: Stack[-1] = "ui/NPC_Citizen2.png"
0x1ed: Return(); Pop(0)

0x1ee: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x1ef: Return(); Pop(0)

0x1f0: Stack[-1] = (bool) 0
0x1f1: Return(); Pop(0)

