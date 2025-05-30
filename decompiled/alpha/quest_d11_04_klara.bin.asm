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
	cleanup
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	ood11Klara1
	player
	ui/NPC_Klara.png

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
	GetVariable (2 args)
	SetVariable (2 args)

RunOp = 0x173
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9d Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x16b Vars = (object)
		EVENT_26 Op = 0x177 Vars = (string)
		EVENT_6 Op = 0x193 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1a5

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x232

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x234

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x221

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
0x36: Call 0x1dd

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
0x44: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x215

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x4a: PushEmpty(object, object)
0x4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x20f

0x4e: Pop(2)
0x4f: PushEmpty(string)
0x50: Stack[-1] = "Neutral"
0x51: Call 0x8d

0x52: Pop(1)
0x53: Push((int) 14350)
0x54: @@ SetMessage(Stack[-1])
0x55: Pop(1)
0x56: @@ ClearReplies()
0x57: Pop(0)
0x58: Push((int) 14351)
0x59: Push((int) 15575)
0x5a: Push((int) 15574)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x6f

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call 0x8d

0x61: Pop(1)
0x62: Push((int) 14514)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 14515)
0x68: Push((int) -1)
0x69: Push((int) 15754)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0x6f

0x6d: Return(); Pop(0)

0x6e: GOTO 0x43

0x6f: PushEmpty(bool)
0x70: Call 0x236

0x71: Pop(0)
0x72: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x73: @ lshWaitForAnimEnd()
0x74: Pop(0)
0x75: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x7d

0x78: PushEmpty(string)
0x79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7a: Call 0x1e1

0x7b: Pop(1)
0x7c: GOTO 0x73

0x7d: GOTO 0x8c

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: @ WaitForAnimEnd()
0x83: Pop(0)
0x84: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: GOTO 0x8c

0x87: Push("all")
0x88: Push("idle")
0x89: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a: Pop(2)
0x8b: GOTO 0x82

0x8c: Return(); Pop(0)

0x8d: PushEmpty()
0x8e: PushEmpty(bool)
0x8f: Call 0x236

0x90: Pop(0)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Return(); Pop(0)

0x94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[-2]
0x99: Call 0x1e1

0x9a: Pop(1)
0x9b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Push((int) 1)
0x9f: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0xa0: PushEmpty()
0xa1: Call 0x1f3

0xa2: Pop(0)
0xa3: Push((int) 15573)
0xa4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Call 0x215

0xa9: Pop(1)
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call 0x20f

0xaf: Pop(2)
0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call 0x8d

0xb3: Pop(1)
0xb4: Push((int) 14350)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: Push((int) 14351)
0xba: Push((int) 15575)
0xbb: Push((int) 15574)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: PushEmpty(string)
0xc0: Stack[-1] = "Neutral"
0xc1: Call 0x8d

0xc2: Pop(1)
0xc3: Push((int) 14514)
0xc4: @@ SetMessage(Stack[-1])
0xc5: Pop(1)
0xc6: @@ ClearReplies()
0xc7: Pop(0)
0xc8: Push((int) 14515)
0xc9: Push((int) -1)
0xca: Push((int) 15754)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 15575)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call 0x8d

0xd4: Pop(1)
0xd5: Push((int) 14352)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 14353)
0xdb: Push((int) 15577)
0xdc: Push((int) 15576)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 15577)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call 0x8d

0xe6: Pop(1)
0xe7: Push((int) 14354)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 14355)
0xed: Push((int) 15579)
0xee: Push((int) 15578)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 15579)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral"
0xf7: Call 0x8d

0xf8: Pop(1)
0xf9: Push((int) 14356)
0xfa: @@ SetMessage(Stack[-1])
0xfb: Pop(1)
0xfc: @@ ClearReplies()
0xfd: Pop(0)
0xfe: Push((int) 14357)
0xff: Push((int) 15581)
0x100: Push((int) 15580)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 15581)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral"
0x109: Call 0x8d

0x10a: Pop(1)
0x10b: Push((int) 14358)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 14359)
0x111: Push((int) 15583)
0x112: Push((int) 15582)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 15583)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call 0x8d

0x11c: Pop(1)
0x11d: Push((int) 14360)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 14361)
0x123: Push((int) 15585)
0x124: Push((int) 15584)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 15585)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call 0x8d

0x12e: Pop(1)
0x12f: Push((int) 14362)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 14363)
0x135: Push((int) 15587)
0x136: Push((int) 15586)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 15587)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call 0x8d

0x140: Pop(1)
0x141: Push((int) 14364)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 14365)
0x147: Push((int) 15589)
0x148: Push((int) 15588)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 15589)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call 0x8d

0x152: Pop(1)
0x153: Push((int) 14366)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 14367)
0x159: Push((int) -1)
0x15a: Push((int) 15590)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15f: PushEmpty(bool)
0x160: Call 0x236

0x161: Pop(0)
0x162: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x163: @ lshStopAnimation()
0x164: Pop(0)
0x165: GOTO 0x168

0x166: @ StopAnimation()
0x167: Pop(0)
0x168: Return(); Pop(0)

0x169: GOTO 0x9e

0x16a: Return(); Pop(0)

0x16b: PushEmpty()
0x16c: PushEmpty(int, object)
0x16d: Stack[-1] = Stack[-3]
0x16e: Push(-2, 1); TaskCall(0)
0x16f: Call 0x0

0x170: Pop(-2, 1); TaskReturn
0x171: Pop(2)
0x172: Return(); Pop(0)

0x173: @ Hold()
0x174: Pop(0)
0x175: GOTO 0x173

0x176: Return(); Pop(0)

0x177: PushEmpty(bool, bool)
0x178: Push("cleanup")
0x179: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x17c: @ IsLoaded(Stack[-1])
0x17d: Pop(0)
0x17e: PushEmpty(bool)
0x17f: Stack[-1] = (bool) 0
0x180: Pop(0); Push((bool) Stack[-2] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(bool)
0x183: Call 0x1a3

0x184: Pop(0)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: PushEmpty(object)
0x189: Call 0x1fa

0x18a: Pop(0)
0x18b: @ RemoveActor(Stack[-1])
0x18c: Pop(1)
0x18d: GOTO 0x192

0x18e: Push("restore")
0x18f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x192: Return(); Pop(2)

0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: Push( Stack[0 + Tasks[-1].StackPointer] )
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: PushEmpty(bool)
0x198: Call 0x1a3

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Call 0x1fa

0x19f: Pop(0)
0x1a0: @ RemoveActor(Stack[-1])
0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: Stack[-1] = (bool) 1
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1a6: @@ GetPosition(Stack[-7])
0x1a7: Pop(0)
0x1a8: @@ GetEyesHeight(Stack[-8])
0x1a9: Pop(0)
0x1aa: Push(CvectorIndex(Stack[-7], 1))
0x1ab: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ac: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ad: @ GetPosition(Stack[-6])
0x1ae: Pop(0)
0x1af: @ GetEyesHeight(Stack[-8])
0x1b0: Pop(0)
0x1b1: Push(CvectorIndex(Stack[-6], 1))
0x1b2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1b3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1b4: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1b5: Push(CvectorIndex(Stack[-5], 1))
0x1b6: Stack[-1] = (int) 0
0x1b7: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1b8: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1b9: Pop(1); Push(Sqrt(Stack[-1]))
0x1ba: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1bb: Stack[-4] = -Stack[-5]; Pop(0);
0x1bc: Push((int) 70)
0x1bd: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1be: PushEmpty(cvector, cvector)
0x1bf: Push(CVector(0.0, 1.0, 0.0))
0x1c0: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1c1: Call 0x200

0x1c2: Pop(1)
0x1c3: Push((int) 25)
0x1c4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c6: Push(CVector(0.0, 10.0, 0.0))
0x1c7: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1c8: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1c9: @ IsOverrideActive(Stack[-1])
0x1ca: Pop(0)
0x1cb: Push(Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: Stack[-18] = (bool) 0
0x1ce: Return(); Pop(16)

0x1cf: @ StopWorld()
0x1d0: Pop(0)
0x1d1: @ CameraTransit(Stack[-2], Stack[-4])
0x1d2: Pop(0)
0x1d3: Push(CvectorIndex(Stack[-3], 0))
0x1d4: Push(CvectorIndex(Stack[-4], 2))
0x1d5: @ Rotate(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: @ CameraWaitForPlayFinish()
0x1d8: Pop(0)
0x1d9: @ ResumeWorld()
0x1da: Pop(0)
0x1db: Stack[-18] = (bool) 1
0x1dc: Return(); Pop(16)

0x1dd: PushEmpty()
0x1de: @ CameraSwitchToNormal()
0x1df: Pop(0)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(float, float, float, float)
0x1e2: Push("playing ")
0x1e3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1e4: @ Trace(Stack[-1])
0x1e5: Pop(1)
0x1e6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1e7: Pop(0)
0x1e8: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1e9: Pop(0)
0x1ea: Push("start: ")
0x1eb: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1ec: @ Trace(Stack[-1])
0x1ed: Pop(1)
0x1ee: Push("end: ")
0x1ef: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1f0: @ Trace(Stack[-1])
0x1f1: Pop(1)
0x1f2: Return(); Pop(4)

0x1f3: PushEmpty(bool)
0x1f4: Call 0x236

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f7: @ lshStopSpeech()
0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(object, object)
0x1fb: @ self(Stack[-1])
0x1fc: Pop(0)
0x1fd: Stack[-3] = Stack[-1]
0x1fe: Return(); Pop(2)

0x1ff: Stack[-1] = 0
0x200: PushEmpty(float, float)
0x201: Pop(0); Push(Stack[-3] | Stack[-3]);
0x202: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x203: Push((float)0.0)
0x204: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x206: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x207: Return(); Pop(2)

0x208: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: @ GetVariable(Stack[-3], Stack[-1])
0x20c: Pop(0)
0x20d: Stack[-4] = Stack[-1]
0x20e: Return(); Pop(2)

0x20f: PushEmpty()
0x210: Push("ood11Klara1")
0x211: Push((int) 1)
0x212: @ SetVariable(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: Return(); Pop(0)

0x215: PushEmpty()
0x216: PushEmpty(int, string)
0x217: Stack[-1] = "ood11Klara1"
0x218: Call 0x20a

0x219: Pop(1)
0x21a: Push((int) 0)
0x21b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: Stack[-2] = (bool) 1
0x21e: Return(); Pop(0)

0x21f: Stack[-2] = (bool) 0
0x220: Return(); Pop(0)

0x221: PushEmpty(int, int)
0x222: Push("player")
0x223: @ GetVariable(Stack[-1], Stack[-2])
0x224: Pop(1)
0x225: Push((int) 0)
0x226: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x228: Stack[-3] = (int) 200001
0x229: Return(); Pop(2)

0x22a: GOTO 0x230

0x22b: Push((int) 1)
0x22c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: Stack[-3] = (int) 200002
0x22f: Return(); Pop(2)

0x230: Stack[-3] = (int) 200003
0x231: Return(); Pop(2)

0x232: Stack[-1] = (int) 2865
0x233: Return(); Pop(0)

0x234: Stack[-1] = "ui/NPC_Klara.png"
0x235: Return(); Pop(0)

0x236: Stack[-1] = (bool) 1
0x237: Return(); Pop(0)

