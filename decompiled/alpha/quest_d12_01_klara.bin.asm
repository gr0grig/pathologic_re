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
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	ood12Klara1
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
	GetVariable (2 args)
	SetVariable (2 args)

RunOp = 0x14a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8e Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x14e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x156

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x1dd

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x1df

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x1cc

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
0x36: Call 0x18e

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
0x44: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x7e

0x48: Pop(1)
0x49: Push((int) 14935)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50: Call 0x1c0

0x51: Pop(1)
0x52: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x53: Push((int) 14936)
0x54: Push((int) 16188)
0x55: Push((int) 16187)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 14954)
0x59: Push((int) -1)
0x5a: Push((int) 16207)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x60

0x5e: Return(); Pop(0)

0x5f: GOTO 0x43

0x60: PushEmpty(bool)
0x61: Call 0x1e1

0x62: Pop(0)
0x63: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x64: @ lshWaitForAnimEnd()
0x65: Pop(0)
0x66: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: GOTO 0x6e

0x69: PushEmpty(string)
0x6a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6b: Call 0x192

0x6c: Pop(1)
0x6d: GOTO 0x64

0x6e: GOTO 0x7d

0x6f: Push("all")
0x70: Push("idle")
0x71: @ PlayAnimation(Stack[-2], Stack[-1])
0x72: Pop(2)
0x73: @ WaitForAnimEnd()
0x74: Pop(0)
0x75: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x7d

0x78: Push("all")
0x79: Push("idle")
0x7a: @ PlayAnimation(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: GOTO 0x73

0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: PushEmpty(bool)
0x80: Call 0x1e1

0x81: Pop(0)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Return(); Pop(0)

0x85: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Return(); Pop(0)

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[-2]
0x8a: Call 0x192

0x8b: Pop(1)
0x8c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Push((int) 1)
0x90: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x91: PushEmpty()
0x92: Call 0x1a4

0x93: Pop(0)
0x94: Push((int) 16187)
0x95: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: PushEmpty(object, object)
0x98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Call 0x1ba

0x9b: Pop(2)
0x9c: Push((int) 16186)
0x9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral"
0xa1: Call 0x7e

0xa2: Pop(1)
0xa3: Push((int) 14935)
0xa4: @@ SetMessage(Stack[-1])
0xa5: Pop(1)
0xa6: @@ ClearReplies()
0xa7: Pop(0)
0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Call 0x1c0

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: Push((int) 14936)
0xae: Push((int) 16188)
0xaf: Push((int) 16187)
0xb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(3)
0xb2: Push((int) 14954)
0xb3: Push((int) -1)
0xb4: Push((int) 16207)
0xb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(3)
0xb7: Return(); Pop(0)

0xb8: Push((int) 16188)
0xb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xbb: PushEmpty(string)
0xbc: Stack[-1] = "Neutral"
0xbd: Call 0x7e

0xbe: Pop(1)
0xbf: Push((int) 14937)
0xc0: @@ SetMessage(Stack[-1])
0xc1: Pop(1)
0xc2: @@ ClearReplies()
0xc3: Pop(0)
0xc4: Push((int) 14938)
0xc5: Push((int) 16190)
0xc6: Push((int) 16189)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Push((int) 14946)
0xca: Push((int) 16198)
0xcb: Push((int) 16197)
0xcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd: Pop(3)
0xce: Push((int) 14950)
0xcf: Push((int) 16203)
0xd0: Push((int) 16202)
0xd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(3)
0xd3: Return(); Pop(0)

0xd4: Push((int) 16203)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call 0x7e

0xda: Pop(1)
0xdb: Push((int) 14951)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 14952)
0xe1: Push((int) 16190)
0xe2: Push((int) 16204)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 14953)
0xe6: Push((int) -1)
0xe7: Push((int) 16206)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 16198)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0x7e

0xf1: Pop(1)
0xf2: Push((int) 14947)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 14948)
0xf8: Push((int) 16190)
0xf9: Push((int) 16199)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 14949)
0xfd: Push((int) -1)
0xfe: Push((int) 16201)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 16190)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call 0x7e

0x108: Pop(1)
0x109: Push((int) 14939)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 14940)
0x10f: Push((int) 16192)
0x110: Push((int) 16191)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 16192)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call 0x7e

0x11a: Pop(1)
0x11b: Push((int) 14941)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 14942)
0x121: Push((int) 16194)
0x122: Push((int) 16193)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 14945)
0x126: Push((int) -1)
0x127: Push((int) 16196)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 16194)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call 0x7e

0x131: Pop(1)
0x132: Push((int) 14943)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 14944)
0x138: Push((int) -1)
0x139: Push((int) 16195)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13e: PushEmpty(bool)
0x13f: Call 0x1e1

0x140: Pop(0)
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: @ lshStopAnimation()
0x143: Pop(0)
0x144: GOTO 0x147

0x145: @ StopAnimation()
0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: GOTO 0x8f

0x149: Return(); Pop(0)

0x14a: @ Hold()
0x14b: Pop(0)
0x14c: GOTO 0x14a

0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty(int, object)
0x150: Stack[-1] = Stack[-3]
0x151: Push(-2, 1); TaskCall(0)
0x152: Call 0x0

0x153: Pop(-2, 1); TaskReturn
0x154: Pop(2)
0x155: Return(); Pop(0)

0x156: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x157: @@ GetPosition(Stack[-7])
0x158: Pop(0)
0x159: @@ GetEyesHeight(Stack[-8])
0x15a: Pop(0)
0x15b: Push(CvectorIndex(Stack[-7], 1))
0x15c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x15d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x15e: @ GetPosition(Stack[-6])
0x15f: Pop(0)
0x160: @ GetEyesHeight(Stack[-8])
0x161: Pop(0)
0x162: Push(CvectorIndex(Stack[-6], 1))
0x163: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x164: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x165: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x166: Push(CvectorIndex(Stack[-5], 1))
0x167: Stack[-1] = (int) 0
0x168: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x169: Pop(0); Push(Stack[-5] | Stack[-5]);
0x16a: Pop(1); Push(Sqrt(Stack[-1]))
0x16b: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x16c: Stack[-4] = -Stack[-5]; Pop(0);
0x16d: Push((int) 70)
0x16e: Pop(1); Push(Stack[-6] * Stack[-1]);
0x16f: PushEmpty(cvector, cvector)
0x170: Push(CVector(0.0, 1.0, 0.0))
0x171: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x172: Call 0x1ab

0x173: Pop(1)
0x174: Push((int) 25)
0x175: Pop(2); Push(Stack[-2] * Stack[-1]);
0x176: Pop(2); Push(Stack[-2] + Stack[-1]);
0x177: Push(CVector(0.0, 10.0, 0.0))
0x178: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x179: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x17a: @ IsOverrideActive(Stack[-1])
0x17b: Pop(0)
0x17c: Push(Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17e: Stack[-18] = (bool) 0
0x17f: Return(); Pop(16)

0x180: @ StopWorld()
0x181: Pop(0)
0x182: @ CameraTransit(Stack[-2], Stack[-4])
0x183: Pop(0)
0x184: Push(CvectorIndex(Stack[-3], 0))
0x185: Push(CvectorIndex(Stack[-4], 2))
0x186: @ Rotate(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: @ CameraWaitForPlayFinish()
0x189: Pop(0)
0x18a: @ ResumeWorld()
0x18b: Pop(0)
0x18c: Stack[-18] = (bool) 1
0x18d: Return(); Pop(16)

0x18e: PushEmpty()
0x18f: @ CameraSwitchToNormal()
0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: PushEmpty(float, float, float, float)
0x193: Push("playing ")
0x194: Pop(1); Push(Stack[-1] + Stack[-6]);
0x195: @ Trace(Stack[-1])
0x196: Pop(1)
0x197: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x198: Pop(0)
0x199: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x19a: Pop(0)
0x19b: Push("start: ")
0x19c: Pop(1); Push(Stack[-1] + Stack[-3]);
0x19d: @ Trace(Stack[-1])
0x19e: Pop(1)
0x19f: Push("end: ")
0x1a0: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1a1: @ Trace(Stack[-1])
0x1a2: Pop(1)
0x1a3: Return(); Pop(4)

0x1a4: PushEmpty(bool)
0x1a5: Call 0x1e1

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a8: @ lshStopSpeech()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(float, float)
0x1ac: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1ad: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ae: Push((float)0.0)
0x1af: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1b2: Return(); Pop(2)

0x1b3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1b4: Return(); Pop(2)

0x1b5: PushEmpty(int, int)
0x1b6: @ GetVariable(Stack[-3], Stack[-1])
0x1b7: Pop(0)
0x1b8: Stack[-4] = Stack[-1]
0x1b9: Return(); Pop(2)

0x1ba: PushEmpty()
0x1bb: Push("ood12Klara1")
0x1bc: Push((int) 1)
0x1bd: @ SetVariable(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty()
0x1c1: PushEmpty(int, string)
0x1c2: Stack[-1] = "ood12Klara1"
0x1c3: Call 0x1b5

0x1c4: Pop(1)
0x1c5: Push((int) 0)
0x1c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c8: Stack[-2] = (bool) 1
0x1c9: Return(); Pop(0)

0x1ca: Stack[-2] = (bool) 0
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty(int, int)
0x1cd: Push("player")
0x1ce: @ GetVariable(Stack[-1], Stack[-2])
0x1cf: Pop(1)
0x1d0: Push((int) 0)
0x1d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: Stack[-3] = (int) 200001
0x1d4: Return(); Pop(2)

0x1d5: GOTO 0x1db

0x1d6: Push((int) 1)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d9: Stack[-3] = (int) 200002
0x1da: Return(); Pop(2)

0x1db: Stack[-3] = (int) 200003
0x1dc: Return(); Pop(2)

0x1dd: Stack[-1] = (int) 2865
0x1de: Return(); Pop(0)

0x1df: Stack[-1] = "ui/NPC_Klara.png"
0x1e0: Return(); Pop(0)

0x1e1: Stack[-1] = (bool) 1
0x1e2: Return(); Pop(0)

