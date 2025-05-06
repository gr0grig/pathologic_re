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

RunOp = 0xe3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xe8 Vars = (string)
		EVENT_5 Op = 0xff Vars = ()
		EVENT_0 Op = 0x106 Vars = (object)
		EVENT_6 Op = 0x134 Vars = ()

Events:
EVENT_6 Op = 0x1df Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x146

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1f8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1f6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1fa

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1fc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1e5

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
0x41: Call2 0x18b

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
0x54: Push((int) 514181)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 514182)
0x5a: Push((int) 15397)
0x5b: Push((int) 15396)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 539616)
0x5f: Push((int) -1)
0x60: Push((int) 41563)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x1fe

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x19d

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
0x86: Call2 0x1fe

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
0x96: Call2 0x1ad

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x1bc

0x9f: Pop(0)
0xa0: Push((int) 15395)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 514181)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 514182)
0xad: Push((int) 15397)
0xae: Push((int) 15396)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 539616)
0xb2: Push((int) -1)
0xb3: Push((int) 41563)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 15397)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 514183)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 514184)
0xc4: Push((int) -1)
0xc5: Push((int) 15398)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 539617)
0xc9: Push((int) -1)
0xca: Push((int) 41564)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcf: PushEmpty(bool)
0xd0: Call2 0x1fe

0xd1: Pop(0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: @ lshStopAnimation()
0xd4: Pop(0)
0xd5: GOTO 0xd8

0xd6: @ StopAnimation()
0xd7: Pop(0)
0xd8: Return(); Pop(0)

0xd9: GOTO 0x9b

0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: PushEmpty(int, object)
0xdd: Stack[-1] = Stack[-3]
0xde: Push(-2, 1); TaskCall(0)
0xdf: Call2 0x0

0xe0: Pop(-2, 1); TaskReturn
0xe1: Pop(2)
0xe2: Return(); Pop(0)

0xe3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xe4: @ Hold()
0xe5: Pop(0)
0xe6: GOTO 0xe4

0xe7: Return(); Pop(0)

0xe8: PushEmpty(bool, bool)
0xe9: Push("execute")
0xea: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xec: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xed: Push("all")
0xee: Push("bdie")
0xef: @ PlayAnimation(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: @ WaitForAnimEnd(Stack[-1])
0xf2: Pop(0)
0xf3: Push(Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf5: Push("all")
0xf6: Push("bdie")
0xf7: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xf8: Pop(2)
0xf9: GOTO 0xfe

0xfa: PushEmpty(string)
0xfb: Stack[-1] = Stack[-4]
0xfc: Call2 0x118

0xfd: Pop(1)
0xfe: Return(); Pop(2)

0xff: Push( Stack[1 + Tasks[-1].StackPointer] )
0x100: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x101: Push("all")
0x102: Push("bdie")
0x103: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x104: Pop(2)
0x105: Return(); Pop(0)

0x106: PushEmpty(int, int)
0x107: Push("d11q02")
0x108: @ GetVariable(Stack[-1], Stack[-2])
0x109: Pop(1)
0x10a: PushEmpty(bool)
0x10b: Stack[-1] = (bool) 0
0x10c: Push((int) 2)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Stack[-1] = (bool) 1
0x112: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x113: PushEmpty(object)
0x114: Stack[-1] = Stack[-4]
0x115: Call2 0xdb

0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: PushEmpty(bool, bool)
0x119: Push("cleanup")
0x11a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x11d: @ IsLoaded(Stack[-1])
0x11e: Pop(0)
0x11f: PushEmpty(bool)
0x120: Stack[-1] = (bool) 0
0x121: Pop(0); Push((bool) Stack[-2] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: PushEmpty(bool)
0x124: Call2 0x144

0x125: Pop(0)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(object)
0x12a: Call2 0x1c3

0x12b: Pop(0)
0x12c: @ RemoveActor(Stack[-1])
0x12d: Pop(1)
0x12e: GOTO 0x133

0x12f: Push("restore")
0x130: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x133: Return(); Pop(2)

0x134: PushEmpty(bool)
0x135: Stack[-1] = (bool) 0
0x136: Push( Stack[0 + Tasks[-1].StackPointer] )
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(bool)
0x139: Call2 0x144

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Stack[-1] = (bool) 1
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: PushEmpty(object)
0x13f: Call2 0x1c3

0x140: Pop(0)
0x141: @ RemoveActor(Stack[-1])
0x142: Pop(1)
0x143: Return(); Pop(0)

0x144: Stack[-1] = (bool) 1
0x145: Return(); Pop(0)

0x146: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x147: @@ GetPosition(Stack[-8])
0x148: Pop(0)
0x149: @@ GetEyesHeight(Stack[-9])
0x14a: Pop(0)
0x14b: Push(CvectorIndex(Stack[-8], 1))
0x14c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x14d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x14e: @ GetPosition(Stack[-7])
0x14f: Pop(0)
0x150: @ GetEyesHeight(Stack[-9])
0x151: Pop(0)
0x152: Push(CvectorIndex(Stack[-7], 1))
0x153: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x154: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x155: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x156: Push(CvectorIndex(Stack[-6], 1))
0x157: Stack[-1] = (int) 0
0x158: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x159: Pop(0); Push(Stack[-6] | Stack[-6]);
0x15a: Pop(1); Push(Sqrt(Stack[-1]))
0x15b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x15c: Stack[-5] = -Stack[-6]; Pop(0);
0x15d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x15e: PushEmpty(cvector, cvector)
0x15f: Push(CVector(0.0, 1.0, 0.0))
0x160: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x161: Call2 0x1c9

0x162: Pop(1)
0x163: Push((int) 25)
0x164: Pop(2); Push(Stack[-2] * Stack[-1]);
0x165: Pop(2); Push(Stack[-2] + Stack[-1]);
0x166: Push(CVector(0.0, 10.0, 0.0))
0x167: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x168: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x169: @ IsOverrideActive(Stack[-2])
0x16a: Pop(0)
0x16b: Push(Stack[-2])
0x16c: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16d: Stack[-21] = (bool) 0
0x16e: Return(); Pop(18)

0x16f: @ StopWorld()
0x170: Pop(0)
0x171: Push((bool) 1)
0x172: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x173: Pop(1)
0x174: Push(CvectorIndex(Stack[-4], 0))
0x175: Push(CvectorIndex(Stack[-5], 2))
0x176: @ Rotate(Stack[-2], Stack[-1])
0x177: Pop(2)
0x178: PushEmpty(bool)
0x179: Call2 0x1fe

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x185

0x17d: Push("head")
0x17e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x17f: Pop(1)
0x180: Push(Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: Push("head")
0x183: @ LookAsyncCamera(Stack[-1])
0x184: Pop(1)
0x185: @ CameraWaitForPlayFinish()
0x186: Pop(0)
0x187: @ ResumeWorld()
0x188: Pop(0)
0x189: Stack[-21] = (bool) 1
0x18a: Return(); Pop(18)

0x18b: PushEmpty(bool, bool)
0x18c: Push((bool) 1)
0x18d: @ CameraSwitchToNormal(Stack[-1])
0x18e: Pop(1)
0x18f: PushEmpty(bool)
0x190: Call2 0x1fe

0x191: Pop(0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: GOTO 0x19c

0x194: Push("head")
0x195: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x196: Pop(1)
0x197: Push(Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x199: Push("head")
0x19a: @ UnlookAsync(Stack[-1])
0x19b: Pop(1)
0x19c: Return(); Pop(2)

0x19d: PushEmpty(bool, float, float, bool, float, float)
0x19e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x19f: Pop(0)
0x1a0: Push(Stack[-3])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1a3: Pop(0)
0x1a4: Push((bool) 0)
0x1a5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(1)
0x1a7: GOTO 0x1ac

0x1a8: Push("Can't find lsh animation : ")
0x1a9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1aa: @ Trace(Stack[-1])
0x1ab: Pop(1)
0x1ac: Return(); Pop(6)

0x1ad: PushEmpty(bool, float, float, bool, float, float)
0x1ae: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1af: Pop(0)
0x1b0: Push(Stack[-3])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1b3: Pop(0)
0x1b4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1b5: Pop(0)
0x1b6: GOTO 0x1bb

0x1b7: Push("Can't find lsh animation : ")
0x1b8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1b9: @ Trace(Stack[-1])
0x1ba: Pop(1)
0x1bb: Return(); Pop(6)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x1fe

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c0: @ lshStopSpeech()
0x1c1: Pop(0)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(object, object)
0x1c4: @ self(Stack[-1])
0x1c5: Pop(0)
0x1c6: Stack[-3] = Stack[-1]
0x1c7: Return(); Pop(2)

0x1c8: Stack[-1] = 0
0x1c9: PushEmpty(float, float)
0x1ca: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1cb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1cc: Push((float)0.0)
0x1cd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1d0: Return(); Pop(2)

0x1d1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty(object, object)
0x1d4: @ FindActor(Stack[-1], Stack[-4])
0x1d5: Pop(0)
0x1d6: Pop(0); Push((bool) Stack[-1] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d8: Stack[-5] = (bool) 0
0x1d9: Return(); Pop(2)

0x1da: @ Trigger(Stack[-1], Stack[-3])
0x1db: Pop(0)
0x1dc: Stack[-5] = (bool) 1
0x1dd: Return(); Pop(2)

0x1de: Stack[-1] = 0
0x1df: PushEmpty(bool, string, string)
0x1e0: Stack[-2] = "quest_d11_02"
0x1e1: Stack[-1] = "actor_unload"
0x1e2: Call2 0x1d3

0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(int, int)
0x1e6: Push("branch")
0x1e7: @ GetVariable(Stack[-1], Stack[-2])
0x1e8: Pop(1)
0x1e9: Push((int) 0)
0x1ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ec: Stack[-3] = (int) 1
0x1ed: Return(); Pop(2)

0x1ee: GOTO 0x1f4

0x1ef: Push((int) 1)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f2: Stack[-3] = (int) 2
0x1f3: Return(); Pop(2)

0x1f4: Stack[-3] = (int) 3
0x1f5: Return(); Pop(2)

0x1f6: Stack[-1] = (int) 515564
0x1f7: Return(); Pop(0)

0x1f8: Stack[-1] = (int) 503349
0x1f9: Return(); Pop(0)

0x1fa: Stack[-1] = "ui/NPC_Citizen2.png"
0x1fb: Return(); Pop(0)

0x1fc: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x1fd: Return(); Pop(0)

0x1fe: Stack[-1] = (bool) 0
0x1ff: Return(); Pop(0)

