GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
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
	playing 
	start: 
	end: 
	quest_d11_02
	actor_unload
	player
	ui/NPC_None.png

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
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0xb1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x84 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xb6 Vars = (string)
		EVENT_5 Op = 0xcd Vars = ()
		EVENT_0 Op = 0xd4 Vars = (object)
		EVENT_6 Op = 0xfc Vars = ()

Events:
EVENT_6 Op = 0x17f Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x10e

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x196

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x198

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x185

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x146

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x74

0x48: Pop(1)
0x49: Push((int) 14175)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 14176)
0x4f: Push((int) -1)
0x50: Push((int) 15390)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: GOTO 0x56

0x54: Return(); Pop(0)

0x55: GOTO 0x43

0x56: PushEmpty(bool)
0x57: Call 0x19a

0x58: Pop(0)
0x59: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5a: @ lshWaitForAnimEnd()
0x5b: Pop(0)
0x5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x64

0x5f: PushEmpty(string)
0x60: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61: Call 0x14a

0x62: Pop(1)
0x63: GOTO 0x5a

0x64: GOTO 0x73

0x65: Push("all")
0x66: Push("idle")
0x67: @ PlayAnimation(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: @ WaitForAnimEnd()
0x6a: Pop(0)
0x6b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0x73

0x6e: Push("all")
0x6f: Push("idle")
0x70: @ PlayAnimation(Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: GOTO 0x69

0x73: Return(); Pop(0)

0x74: PushEmpty()
0x75: PushEmpty(bool)
0x76: Call 0x19a

0x77: Pop(0)
0x78: Pop(1); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Return(); Pop(0)

0x7b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(0)

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[-2]
0x80: Call 0x14a

0x81: Pop(1)
0x82: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Push((int) 1)
0x86: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x87: PushEmpty()
0x88: Call 0x15c

0x89: Pop(0)
0x8a: Push((int) 15389)
0x8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = "Neutral"
0x8f: Call 0x74

0x90: Pop(1)
0x91: Push((int) 14175)
0x92: @@ SetMessage(Stack[-1])
0x93: Pop(1)
0x94: @@ ClearReplies()
0x95: Pop(0)
0x96: Push((int) 14176)
0x97: Push((int) -1)
0x98: Push((int) 15390)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: Return(); Pop(0)

0x9c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9d: PushEmpty(bool)
0x9e: Call 0x19a

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa1: @ lshStopAnimation()
0xa2: Pop(0)
0xa3: GOTO 0xa6

0xa4: @ StopAnimation()
0xa5: Pop(0)
0xa6: Return(); Pop(0)

0xa7: GOTO 0x85

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(int, object)
0xab: Stack[-1] = Stack[-3]
0xac: Push(-2, 1); TaskCall(0)
0xad: Call 0x0

0xae: Pop(-2, 1); TaskReturn
0xaf: Pop(2)
0xb0: Return(); Pop(0)

0xb1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xb2: @ Hold()
0xb3: Pop(0)
0xb4: GOTO 0xb2

0xb5: Return(); Pop(0)

0xb6: PushEmpty(bool, bool)
0xb7: Push("execute")
0xb8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xba: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xbb: Push("all")
0xbc: Push("bdie")
0xbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: @ WaitForAnimEnd(Stack[-1])
0xc0: Pop(0)
0xc1: Push(Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc3: Push("all")
0xc4: Push("bdie")
0xc5: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: GOTO 0xcc

0xc8: PushEmpty(string)
0xc9: Stack[-1] = Stack[-4]
0xca: Call 0xe0

0xcb: Pop(1)
0xcc: Return(); Pop(2)

0xcd: Push( Stack[1 + Tasks[-1].StackPointer] )
0xce: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcf: Push("all")
0xd0: Push("bdie")
0xd1: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: Return(); Pop(0)

0xd4: PushEmpty(int, int)
0xd5: Push("d11q02")
0xd6: @ GetVariable(Stack[-1], Stack[-2])
0xd7: Pop(1)
0xd8: Push((int) 2)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xdb: PushEmpty(object)
0xdc: Stack[-1] = Stack[-4]
0xdd: Call 0xa9

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(bool, bool)
0xe1: Push("cleanup")
0xe2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe5: @ IsLoaded(Stack[-1])
0xe6: Pop(0)
0xe7: PushEmpty(bool)
0xe8: Stack[-1] = (bool) 0
0xe9: Pop(0); Push((bool) Stack[-2] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: PushEmpty(bool)
0xec: Call 0x10c

0xed: Pop(0)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Stack[-1] = (bool) 1
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: PushEmpty(object)
0xf2: Call 0x163

0xf3: Pop(0)
0xf4: @ RemoveActor(Stack[-1])
0xf5: Pop(1)
0xf6: GOTO 0xfb

0xf7: Push("restore")
0xf8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xfb: Return(); Pop(2)

0xfc: PushEmpty(bool)
0xfd: Stack[-1] = (bool) 0
0xfe: Push( Stack[0 + Tasks[-1].StackPointer] )
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(bool)
0x101: Call 0x10c

0x102: Pop(0)
0x103: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x104: Stack[-1] = (bool) 1
0x105: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x106: PushEmpty(object)
0x107: Call 0x163

0x108: Pop(0)
0x109: @ RemoveActor(Stack[-1])
0x10a: Pop(1)
0x10b: Return(); Pop(0)

0x10c: Stack[-1] = (bool) 1
0x10d: Return(); Pop(0)

0x10e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x10f: @@ GetPosition(Stack[-7])
0x110: Pop(0)
0x111: @@ GetEyesHeight(Stack[-8])
0x112: Pop(0)
0x113: Push(CvectorIndex(Stack[-7], 1))
0x114: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x115: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x116: @ GetPosition(Stack[-6])
0x117: Pop(0)
0x118: @ GetEyesHeight(Stack[-8])
0x119: Pop(0)
0x11a: Push(CvectorIndex(Stack[-6], 1))
0x11b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x11c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x11d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x11e: Push(CvectorIndex(Stack[-5], 1))
0x11f: Stack[-1] = (int) 0
0x120: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x121: Pop(0); Push(Stack[-5] | Stack[-5]);
0x122: Pop(1); Push(Sqrt(Stack[-1]))
0x123: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x124: Stack[-4] = -Stack[-5]; Pop(0);
0x125: Push((int) 70)
0x126: Pop(1); Push(Stack[-6] * Stack[-1]);
0x127: PushEmpty(cvector, cvector)
0x128: Push(CVector(0.0, 1.0, 0.0))
0x129: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x12a: Call 0x169

0x12b: Pop(1)
0x12c: Push((int) 25)
0x12d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12f: Push(CVector(0.0, 10.0, 0.0))
0x130: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x131: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x132: @ IsOverrideActive(Stack[-1])
0x133: Pop(0)
0x134: Push(Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x136: Stack[-18] = (bool) 0
0x137: Return(); Pop(16)

0x138: @ StopWorld()
0x139: Pop(0)
0x13a: @ CameraTransit(Stack[-2], Stack[-4])
0x13b: Pop(0)
0x13c: Push(CvectorIndex(Stack[-3], 0))
0x13d: Push(CvectorIndex(Stack[-4], 2))
0x13e: @ Rotate(Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: @ CameraWaitForPlayFinish()
0x141: Pop(0)
0x142: @ ResumeWorld()
0x143: Pop(0)
0x144: Stack[-18] = (bool) 1
0x145: Return(); Pop(16)

0x146: PushEmpty()
0x147: @ CameraSwitchToNormal()
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: PushEmpty(float, float, float, float)
0x14b: Push("playing ")
0x14c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x14d: @ Trace(Stack[-1])
0x14e: Pop(1)
0x14f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x150: Pop(0)
0x151: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x152: Pop(0)
0x153: Push("start: ")
0x154: Pop(1); Push(Stack[-1] + Stack[-3]);
0x155: @ Trace(Stack[-1])
0x156: Pop(1)
0x157: Push("end: ")
0x158: Pop(1); Push(Stack[-1] + Stack[-2]);
0x159: @ Trace(Stack[-1])
0x15a: Pop(1)
0x15b: Return(); Pop(4)

0x15c: PushEmpty(bool)
0x15d: Call 0x19a

0x15e: Pop(0)
0x15f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x160: @ lshStopSpeech()
0x161: Pop(0)
0x162: Return(); Pop(0)

0x163: PushEmpty(object, object)
0x164: @ self(Stack[-1])
0x165: Pop(0)
0x166: Stack[-3] = Stack[-1]
0x167: Return(); Pop(2)

0x168: Stack[-1] = 0
0x169: PushEmpty(float, float)
0x16a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x16b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x16c: Push((float)0.0)
0x16d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x170: Return(); Pop(2)

0x171: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x172: Return(); Pop(2)

0x173: PushEmpty(object, object)
0x174: @ FindActor(Stack[-1], Stack[-4])
0x175: Pop(0)
0x176: Pop(0); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x178: Stack[-5] = (bool) 0
0x179: Return(); Pop(2)

0x17a: @ Trigger(Stack[-1], Stack[-3])
0x17b: Pop(0)
0x17c: Stack[-5] = (bool) 1
0x17d: Return(); Pop(2)

0x17e: Stack[-1] = 0
0x17f: PushEmpty(bool, string, string)
0x180: Stack[-2] = "quest_d11_02"
0x181: Stack[-1] = "actor_unload"
0x182: Call 0x173

0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: PushEmpty(int, int)
0x186: Push("player")
0x187: @ GetVariable(Stack[-1], Stack[-2])
0x188: Pop(1)
0x189: Push((int) 0)
0x18a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18c: Stack[-3] = (int) 200001
0x18d: Return(); Pop(2)

0x18e: GOTO 0x194

0x18f: Push((int) 1)
0x190: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x192: Stack[-3] = (int) 200002
0x193: Return(); Pop(2)

0x194: Stack[-3] = (int) 200003
0x195: Return(); Pop(2)

0x196: Stack[-1] = (int) 3353
0x197: Return(); Pop(0)

0x198: Stack[-1] = "ui/NPC_None.png"
0x199: Return(); Pop(0)

0x19a: Stack[-1] = (bool) 0
0x19b: Return(); Pop(0)

