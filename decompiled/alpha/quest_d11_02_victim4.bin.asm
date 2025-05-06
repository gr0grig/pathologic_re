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

RunOp = 0xc3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x84 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_26 Op = 0xc8 Vars = (string)
		EVENT_5 Op = 0xdf Vars = ()
		EVENT_0 Op = 0xe6 Vars = (object)
		EVENT_6 Op = 0x10e Vars = ()

Events:
EVENT_6 Op = 0x191 Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x120

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x1a8

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x1aa

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x197

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
0x36: Call 0x158

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
0x49: Push((int) 14181)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 14182)
0x4f: Push((int) 15397)
0x50: Push((int) 15396)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: GOTO 0x56

0x54: Return(); Pop(0)

0x55: GOTO 0x43

0x56: PushEmpty(bool)
0x57: Call 0x1ac

0x58: Pop(0)
0x59: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5a: @ lshWaitForAnimEnd()
0x5b: Pop(0)
0x5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x64

0x5f: PushEmpty(string)
0x60: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61: Call 0x15c

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
0x76: Call 0x1ac

0x77: Pop(0)
0x78: Pop(1); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Return(); Pop(0)

0x7b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(0)

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[-2]
0x80: Call 0x15c

0x81: Pop(1)
0x82: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Push((int) 1)
0x86: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x87: PushEmpty()
0x88: Call 0x16e

0x89: Pop(0)
0x8a: Push((int) 15395)
0x8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = "Neutral"
0x8f: Call 0x74

0x90: Pop(1)
0x91: Push((int) 14181)
0x92: @@ SetMessage(Stack[-1])
0x93: Pop(1)
0x94: @@ ClearReplies()
0x95: Pop(0)
0x96: Push((int) 14182)
0x97: Push((int) 15397)
0x98: Push((int) 15396)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: Return(); Pop(0)

0x9c: Push((int) 15397)
0x9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral"
0xa1: Call 0x74

0xa2: Pop(1)
0xa3: Push((int) 14183)
0xa4: @@ SetMessage(Stack[-1])
0xa5: Pop(1)
0xa6: @@ ClearReplies()
0xa7: Pop(0)
0xa8: Push((int) 14184)
0xa9: Push((int) -1)
0xaa: Push((int) 15398)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: Return(); Pop(0)

0xae: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaf: PushEmpty(bool)
0xb0: Call 0x1ac

0xb1: Pop(0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb3: @ lshStopAnimation()
0xb4: Pop(0)
0xb5: GOTO 0xb8

0xb6: @ StopAnimation()
0xb7: Pop(0)
0xb8: Return(); Pop(0)

0xb9: GOTO 0x85

0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(int, object)
0xbd: Stack[-1] = Stack[-3]
0xbe: Push(-2, 1); TaskCall(0)
0xbf: Call 0x0

0xc0: Pop(-2, 1); TaskReturn
0xc1: Pop(2)
0xc2: Return(); Pop(0)

0xc3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc4: @ Hold()
0xc5: Pop(0)
0xc6: GOTO 0xc4

0xc7: Return(); Pop(0)

0xc8: PushEmpty(bool, bool)
0xc9: Push("execute")
0xca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcc: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xcd: Push("all")
0xce: Push("bdie")
0xcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: @ WaitForAnimEnd(Stack[-1])
0xd2: Pop(0)
0xd3: Push(Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd5: Push("all")
0xd6: Push("bdie")
0xd7: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xd8: Pop(2)
0xd9: GOTO 0xde

0xda: PushEmpty(string)
0xdb: Stack[-1] = Stack[-4]
0xdc: Call 0xf2

0xdd: Pop(1)
0xde: Return(); Pop(2)

0xdf: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe1: Push("all")
0xe2: Push("bdie")
0xe3: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xe4: Pop(2)
0xe5: Return(); Pop(0)

0xe6: PushEmpty(int, int)
0xe7: Push("d11q02")
0xe8: @ GetVariable(Stack[-1], Stack[-2])
0xe9: Pop(1)
0xea: Push((int) 2)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xed: PushEmpty(object)
0xee: Stack[-1] = Stack[-4]
0xef: Call 0xbb

0xf0: Pop(1)
0xf1: Return(); Pop(2)

0xf2: PushEmpty(bool, bool)
0xf3: Push("cleanup")
0xf4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf7: @ IsLoaded(Stack[-1])
0xf8: Pop(0)
0xf9: PushEmpty(bool)
0xfa: Stack[-1] = (bool) 0
0xfb: Pop(0); Push((bool) Stack[-2] == 0)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: PushEmpty(bool)
0xfe: Call 0x11e

0xff: Pop(0)
0x100: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x101: Stack[-1] = (bool) 1
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: PushEmpty(object)
0x104: Call 0x175

0x105: Pop(0)
0x106: @ RemoveActor(Stack[-1])
0x107: Pop(1)
0x108: GOTO 0x10d

0x109: Push("restore")
0x10a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x10d: Return(); Pop(2)

0x10e: PushEmpty(bool)
0x10f: Stack[-1] = (bool) 0
0x110: Push( Stack[0 + Tasks[-1].StackPointer] )
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(bool)
0x113: Call 0x11e

0x114: Pop(0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Stack[-1] = (bool) 1
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object)
0x119: Call 0x175

0x11a: Pop(0)
0x11b: @ RemoveActor(Stack[-1])
0x11c: Pop(1)
0x11d: Return(); Pop(0)

0x11e: Stack[-1] = (bool) 1
0x11f: Return(); Pop(0)

0x120: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x121: @@ GetPosition(Stack[-7])
0x122: Pop(0)
0x123: @@ GetEyesHeight(Stack[-8])
0x124: Pop(0)
0x125: Push(CvectorIndex(Stack[-7], 1))
0x126: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x127: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x128: @ GetPosition(Stack[-6])
0x129: Pop(0)
0x12a: @ GetEyesHeight(Stack[-8])
0x12b: Pop(0)
0x12c: Push(CvectorIndex(Stack[-6], 1))
0x12d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x12e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x12f: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x130: Push(CvectorIndex(Stack[-5], 1))
0x131: Stack[-1] = (int) 0
0x132: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x133: Pop(0); Push(Stack[-5] | Stack[-5]);
0x134: Pop(1); Push(Sqrt(Stack[-1]))
0x135: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x136: Stack[-4] = -Stack[-5]; Pop(0);
0x137: Push((int) 70)
0x138: Pop(1); Push(Stack[-6] * Stack[-1]);
0x139: PushEmpty(cvector, cvector)
0x13a: Push(CVector(0.0, 1.0, 0.0))
0x13b: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x13c: Call 0x17b

0x13d: Pop(1)
0x13e: Push((int) 25)
0x13f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x140: Pop(2); Push(Stack[-2] + Stack[-1]);
0x141: Push(CVector(0.0, 10.0, 0.0))
0x142: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x143: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x144: @ IsOverrideActive(Stack[-1])
0x145: Pop(0)
0x146: Push(Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x148: Stack[-18] = (bool) 0
0x149: Return(); Pop(16)

0x14a: @ StopWorld()
0x14b: Pop(0)
0x14c: @ CameraTransit(Stack[-2], Stack[-4])
0x14d: Pop(0)
0x14e: Push(CvectorIndex(Stack[-3], 0))
0x14f: Push(CvectorIndex(Stack[-4], 2))
0x150: @ Rotate(Stack[-2], Stack[-1])
0x151: Pop(2)
0x152: @ CameraWaitForPlayFinish()
0x153: Pop(0)
0x154: @ ResumeWorld()
0x155: Pop(0)
0x156: Stack[-18] = (bool) 1
0x157: Return(); Pop(16)

0x158: PushEmpty()
0x159: @ CameraSwitchToNormal()
0x15a: Pop(0)
0x15b: Return(); Pop(0)

0x15c: PushEmpty(float, float, float, float)
0x15d: Push("playing ")
0x15e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x15f: @ Trace(Stack[-1])
0x160: Pop(1)
0x161: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x162: Pop(0)
0x163: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x164: Pop(0)
0x165: Push("start: ")
0x166: Pop(1); Push(Stack[-1] + Stack[-3]);
0x167: @ Trace(Stack[-1])
0x168: Pop(1)
0x169: Push("end: ")
0x16a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x16b: @ Trace(Stack[-1])
0x16c: Pop(1)
0x16d: Return(); Pop(4)

0x16e: PushEmpty(bool)
0x16f: Call 0x1ac

0x170: Pop(0)
0x171: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x172: @ lshStopSpeech()
0x173: Pop(0)
0x174: Return(); Pop(0)

0x175: PushEmpty(object, object)
0x176: @ self(Stack[-1])
0x177: Pop(0)
0x178: Stack[-3] = Stack[-1]
0x179: Return(); Pop(2)

0x17a: Stack[-1] = 0
0x17b: PushEmpty(float, float)
0x17c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x17d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x17e: Push((float)0.0)
0x17f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x182: Return(); Pop(2)

0x183: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x184: Return(); Pop(2)

0x185: PushEmpty(object, object)
0x186: @ FindActor(Stack[-1], Stack[-4])
0x187: Pop(0)
0x188: Pop(0); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18a: Stack[-5] = (bool) 0
0x18b: Return(); Pop(2)

0x18c: @ Trigger(Stack[-1], Stack[-3])
0x18d: Pop(0)
0x18e: Stack[-5] = (bool) 1
0x18f: Return(); Pop(2)

0x190: Stack[-1] = 0
0x191: PushEmpty(bool, string, string)
0x192: Stack[-2] = "quest_d11_02"
0x193: Stack[-1] = "actor_unload"
0x194: Call 0x185

0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: PushEmpty(int, int)
0x198: Push("player")
0x199: @ GetVariable(Stack[-1], Stack[-2])
0x19a: Pop(1)
0x19b: Push((int) 0)
0x19c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19e: Stack[-3] = (int) 200001
0x19f: Return(); Pop(2)

0x1a0: GOTO 0x1a6

0x1a1: Push((int) 1)
0x1a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a4: Stack[-3] = (int) 200002
0x1a5: Return(); Pop(2)

0x1a6: Stack[-3] = (int) 200003
0x1a7: Return(); Pop(2)

0x1a8: Stack[-1] = (int) 3349
0x1a9: Return(); Pop(0)

0x1aa: Stack[-1] = "ui/NPC_None.png"
0x1ab: Return(); Pop(0)

0x1ac: Stack[-1] = (bool) 0
0x1ad: Return(); Pop(0)

