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

RunOp = 0xf0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xf5 Vars = (string)
		EVENT_5 Op = 0x10c Vars = ()
		EVENT_0 Op = 0x113 Vars = (object)
		EVENT_6 Op = 0x141 Vars = ()

Events:
EVENT_6 Op = 0x1ec Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x153

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x205

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x203

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x207

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x209

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1f2

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
0x41: Call2 0x198

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
0x54: Push((int) 514178)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 514179)
0x5a: Push((int) 41568)
0x5b: Push((int) 15393)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 539618)
0x5f: Push((int) 41566)
0x60: Push((int) 41565)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x20b

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1aa

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
0x86: Call2 0x20b

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
0x96: Call2 0x1ba

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x1c9

0x9f: Pop(0)
0xa0: Push((int) 15392)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 514178)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 514179)
0xad: Push((int) 41568)
0xae: Push((int) 15393)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 539618)
0xb2: Push((int) 41566)
0xb3: Push((int) 41565)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 41566)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 539619)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 539620)
0xc4: Push((int) -1)
0xc5: Push((int) 41567)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 41568)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x84

0xcf: Pop(1)
0xd0: Push((int) 539621)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 539622)
0xd6: Push((int) -1)
0xd7: Push((int) 41569)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdc: PushEmpty(bool)
0xdd: Call2 0x20b

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe0: @ lshStopAnimation()
0xe1: Pop(0)
0xe2: GOTO 0xe5

0xe3: @ StopAnimation()
0xe4: Pop(0)
0xe5: Return(); Pop(0)

0xe6: GOTO 0x9b

0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: PushEmpty(int, object)
0xea: Stack[-1] = Stack[-3]
0xeb: Push(-2, 1); TaskCall(0)
0xec: Call2 0x0

0xed: Pop(-2, 1); TaskReturn
0xee: Pop(2)
0xef: Return(); Pop(0)

0xf0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xf1: @ Hold()
0xf2: Pop(0)
0xf3: GOTO 0xf1

0xf4: Return(); Pop(0)

0xf5: PushEmpty(bool, bool)
0xf6: Push("execute")
0xf7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf9: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xfa: Push("all")
0xfb: Push("bdie")
0xfc: @ PlayAnimation(Stack[-2], Stack[-1])
0xfd: Pop(2)
0xfe: @ WaitForAnimEnd(Stack[-1])
0xff: Pop(0)
0x100: Push(Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x102: Push("all")
0x103: Push("bdie")
0x104: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x105: Pop(2)
0x106: GOTO 0x10b

0x107: PushEmpty(string)
0x108: Stack[-1] = Stack[-4]
0x109: Call2 0x125

0x10a: Pop(1)
0x10b: Return(); Pop(2)

0x10c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x10d: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10e: Push("all")
0x10f: Push("bdie")
0x110: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: Return(); Pop(0)

0x113: PushEmpty(int, int)
0x114: Push("d11q02")
0x115: @ GetVariable(Stack[-1], Stack[-2])
0x116: Pop(1)
0x117: PushEmpty(bool)
0x118: Stack[-1] = (bool) 0
0x119: Push((int) 2)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Stack[-1] = (bool) 1
0x11f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x120: PushEmpty(object)
0x121: Stack[-1] = Stack[-4]
0x122: Call2 0xe8

0x123: Pop(1)
0x124: Return(); Pop(2)

0x125: PushEmpty(bool, bool)
0x126: Push("cleanup")
0x127: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x129: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x12a: @ IsLoaded(Stack[-1])
0x12b: Pop(0)
0x12c: PushEmpty(bool)
0x12d: Stack[-1] = (bool) 0
0x12e: Pop(0); Push((bool) Stack[-2] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: PushEmpty(bool)
0x131: Call2 0x151

0x132: Pop(0)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 1
0x135: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x136: PushEmpty(object)
0x137: Call2 0x1d0

0x138: Pop(0)
0x139: @ RemoveActor(Stack[-1])
0x13a: Pop(1)
0x13b: GOTO 0x140

0x13c: Push("restore")
0x13d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x140: Return(); Pop(2)

0x141: PushEmpty(bool)
0x142: Stack[-1] = (bool) 0
0x143: Push( Stack[0 + Tasks[-1].StackPointer] )
0x144: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x145: PushEmpty(bool)
0x146: Call2 0x151

0x147: Pop(0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: PushEmpty(object)
0x14c: Call2 0x1d0

0x14d: Pop(0)
0x14e: @ RemoveActor(Stack[-1])
0x14f: Pop(1)
0x150: Return(); Pop(0)

0x151: Stack[-1] = (bool) 1
0x152: Return(); Pop(0)

0x153: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x154: @@ GetPosition(Stack[-8])
0x155: Pop(0)
0x156: @@ GetEyesHeight(Stack[-9])
0x157: Pop(0)
0x158: Push(CvectorIndex(Stack[-8], 1))
0x159: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x15a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x15b: @ GetPosition(Stack[-7])
0x15c: Pop(0)
0x15d: @ GetEyesHeight(Stack[-9])
0x15e: Pop(0)
0x15f: Push(CvectorIndex(Stack[-7], 1))
0x160: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x161: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x162: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x163: Push(CvectorIndex(Stack[-6], 1))
0x164: Stack[-1] = (int) 0
0x165: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x166: Pop(0); Push(Stack[-6] | Stack[-6]);
0x167: Pop(1); Push(Sqrt(Stack[-1]))
0x168: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x169: Stack[-5] = -Stack[-6]; Pop(0);
0x16a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x16b: PushEmpty(cvector, cvector)
0x16c: Push(CVector(0.0, 1.0, 0.0))
0x16d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x16e: Call2 0x1d6

0x16f: Pop(1)
0x170: Push((int) 25)
0x171: Pop(2); Push(Stack[-2] * Stack[-1]);
0x172: Pop(2); Push(Stack[-2] + Stack[-1]);
0x173: Push(CVector(0.0, 10.0, 0.0))
0x174: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x175: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x176: @ IsOverrideActive(Stack[-2])
0x177: Pop(0)
0x178: Push(Stack[-2])
0x179: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17a: Stack[-21] = (bool) 0
0x17b: Return(); Pop(18)

0x17c: @ StopWorld()
0x17d: Pop(0)
0x17e: Push((bool) 1)
0x17f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x180: Pop(1)
0x181: Push(CvectorIndex(Stack[-4], 0))
0x182: Push(CvectorIndex(Stack[-5], 2))
0x183: @ Rotate(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: PushEmpty(bool)
0x186: Call2 0x20b

0x187: Pop(0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: GOTO 0x192

0x18a: Push("head")
0x18b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x18c: Pop(1)
0x18d: Push(Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: Push("head")
0x190: @ LookAsyncCamera(Stack[-1])
0x191: Pop(1)
0x192: @ CameraWaitForPlayFinish()
0x193: Pop(0)
0x194: @ ResumeWorld()
0x195: Pop(0)
0x196: Stack[-21] = (bool) 1
0x197: Return(); Pop(18)

0x198: PushEmpty(bool, bool)
0x199: Push((bool) 1)
0x19a: @ CameraSwitchToNormal(Stack[-1])
0x19b: Pop(1)
0x19c: PushEmpty(bool)
0x19d: Call2 0x20b

0x19e: Pop(0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1a9

0x1a1: Push("head")
0x1a2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1a3: Pop(1)
0x1a4: Push(Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a6: Push("head")
0x1a7: @ UnlookAsync(Stack[-1])
0x1a8: Pop(1)
0x1a9: Return(); Pop(2)

0x1aa: PushEmpty(bool, float, float, bool, float, float)
0x1ab: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1ac: Pop(0)
0x1ad: Push(Stack[-3])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1af: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1b0: Pop(0)
0x1b1: Push((bool) 0)
0x1b2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(1)
0x1b4: GOTO 0x1b9

0x1b5: Push("Can't find lsh animation : ")
0x1b6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1b7: @ Trace(Stack[-1])
0x1b8: Pop(1)
0x1b9: Return(); Pop(6)

0x1ba: PushEmpty(bool, float, float, bool, float, float)
0x1bb: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1bc: Pop(0)
0x1bd: Push(Stack[-3])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bf: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1c0: Pop(0)
0x1c1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1c2: Pop(0)
0x1c3: GOTO 0x1c8

0x1c4: Push("Can't find lsh animation : ")
0x1c5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1c6: @ Trace(Stack[-1])
0x1c7: Pop(1)
0x1c8: Return(); Pop(6)

0x1c9: PushEmpty(bool)
0x1ca: Call2 0x20b

0x1cb: Pop(0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: @ lshStopSpeech()
0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(object, object)
0x1d1: @ self(Stack[-1])
0x1d2: Pop(0)
0x1d3: Stack[-3] = Stack[-1]
0x1d4: Return(); Pop(2)

0x1d5: Stack[-1] = 0
0x1d6: PushEmpty(float, float)
0x1d7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d9: Push((float)0.0)
0x1da: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1dd: Return(); Pop(2)

0x1de: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1df: Return(); Pop(2)

0x1e0: PushEmpty(object, object)
0x1e1: @ FindActor(Stack[-1], Stack[-4])
0x1e2: Pop(0)
0x1e3: Pop(0); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e5: Stack[-5] = (bool) 0
0x1e6: Return(); Pop(2)

0x1e7: @ Trigger(Stack[-1], Stack[-3])
0x1e8: Pop(0)
0x1e9: Stack[-5] = (bool) 1
0x1ea: Return(); Pop(2)

0x1eb: Stack[-1] = 0
0x1ec: PushEmpty(bool, string, string)
0x1ed: Stack[-2] = "quest_d11_02"
0x1ee: Stack[-1] = "actor_unload"
0x1ef: Call2 0x1e0

0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty(int, int)
0x1f3: Push("branch")
0x1f4: @ GetVariable(Stack[-1], Stack[-2])
0x1f5: Pop(1)
0x1f6: Push((int) 0)
0x1f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f9: Stack[-3] = (int) 1
0x1fa: Return(); Pop(2)

0x1fb: GOTO 0x201

0x1fc: Push((int) 1)
0x1fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ff: Stack[-3] = (int) 2
0x200: Return(); Pop(2)

0x201: Stack[-3] = (int) 3
0x202: Return(); Pop(2)

0x203: Stack[-1] = (int) 515564
0x204: Return(); Pop(0)

0x205: Stack[-1] = (int) 503349
0x206: Return(); Pop(0)

0x207: Stack[-1] = "ui/NPC_Citizen2.png"
0x208: Return(); Pop(0)

0x209: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x20a: Return(); Pop(0)

0x20b: Stack[-1] = (bool) 0
0x20c: Return(); Pop(0)

