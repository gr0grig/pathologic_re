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
	player
	ui/NPC_Black.png

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

RunOp = 0x17b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x84 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x17f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x187

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x1f7

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x1f9

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x1e6

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
0x36: Call 0x1bf

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
0x49: Push((int) 15498)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 15499)
0x4f: Push((int) 16596)
0x50: Push((int) 16595)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: GOTO 0x56

0x54: Return(); Pop(0)

0x55: GOTO 0x43

0x56: PushEmpty(bool)
0x57: Call 0x1fb

0x58: Pop(0)
0x59: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5a: @ lshWaitForAnimEnd()
0x5b: Pop(0)
0x5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x64

0x5f: PushEmpty(string)
0x60: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61: Call 0x1c3

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
0x76: Call 0x1fb

0x77: Pop(0)
0x78: Pop(1); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Return(); Pop(0)

0x7b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(0)

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[-2]
0x80: Call 0x1c3

0x81: Pop(1)
0x82: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Push((int) 1)
0x86: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x87: PushEmpty()
0x88: Call 0x1d5

0x89: Pop(0)
0x8a: Push((int) 16594)
0x8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = "Neutral"
0x8f: Call 0x74

0x90: Pop(1)
0x91: Push((int) 15498)
0x92: @@ SetMessage(Stack[-1])
0x93: Pop(1)
0x94: @@ ClearReplies()
0x95: Pop(0)
0x96: Push((int) 15499)
0x97: Push((int) 16596)
0x98: Push((int) 16595)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: Return(); Pop(0)

0x9c: Push((int) 16596)
0x9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral"
0xa1: Call 0x74

0xa2: Pop(1)
0xa3: Push((int) 15500)
0xa4: @@ SetMessage(Stack[-1])
0xa5: Pop(1)
0xa6: @@ ClearReplies()
0xa7: Pop(0)
0xa8: Push((int) 15501)
0xa9: Push((int) 16598)
0xaa: Push((int) 16597)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: Push((int) 15523)
0xae: Push((int) 16620)
0xaf: Push((int) 16619)
0xb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(3)
0xb2: Return(); Pop(0)

0xb3: Push((int) 16620)
0xb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb6: PushEmpty(string)
0xb7: Stack[-1] = "Neutral"
0xb8: Call 0x74

0xb9: Pop(1)
0xba: Push((int) 15524)
0xbb: @@ SetMessage(Stack[-1])
0xbc: Pop(1)
0xbd: @@ ClearReplies()
0xbe: Pop(0)
0xbf: Push((int) 15525)
0xc0: Push((int) -1)
0xc1: Push((int) 16621)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: Return(); Pop(0)

0xc5: Push((int) 16598)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xc8: PushEmpty(string)
0xc9: Stack[-1] = "Neutral"
0xca: Call 0x74

0xcb: Pop(1)
0xcc: Push((int) 15502)
0xcd: @@ SetMessage(Stack[-1])
0xce: Pop(1)
0xcf: @@ ClearReplies()
0xd0: Pop(0)
0xd1: Push((int) 15503)
0xd2: Push((int) 16600)
0xd3: Push((int) 16599)
0xd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5: Pop(3)
0xd6: Push((int) 15522)
0xd7: Push((int) -1)
0xd8: Push((int) 16618)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Return(); Pop(0)

0xdc: Push((int) 16600)
0xdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call 0x74

0xe2: Pop(1)
0xe3: Push((int) 15504)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 15505)
0xe9: Push((int) 16602)
0xea: Push((int) 16601)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: Push((int) 16602)
0xef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf1: PushEmpty(string)
0xf2: Stack[-1] = "Neutral"
0xf3: Call 0x74

0xf4: Pop(1)
0xf5: Push((int) 15506)
0xf6: @@ SetMessage(Stack[-1])
0xf7: Pop(1)
0xf8: @@ ClearReplies()
0xf9: Pop(0)
0xfa: Push((int) 15507)
0xfb: Push((int) 16604)
0xfc: Push((int) 16603)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 15513)
0x100: Push((int) 16610)
0x101: Push((int) 16609)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 16610)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call 0x74

0x10b: Pop(1)
0x10c: Push((int) 15514)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 15515)
0x112: Push((int) -1)
0x113: Push((int) 16611)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 15516)
0x117: Push((int) 16613)
0x118: Push((int) 16612)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 16613)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call 0x74

0x122: Pop(1)
0x123: Push((int) 15517)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 15518)
0x129: Push((int) -1)
0x12a: Push((int) 16614)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 15519)
0x12e: Push((int) 16616)
0x12f: Push((int) 16615)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 16616)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call 0x74

0x139: Pop(1)
0x13a: Push((int) 15520)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 15521)
0x140: Push((int) -1)
0x141: Push((int) 16617)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Push((int) 16604)
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call 0x74

0x14b: Pop(1)
0x14c: Push((int) 15508)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 15509)
0x152: Push((int) 16606)
0x153: Push((int) 16605)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Push((int) 15512)
0x157: Push((int) -1)
0x158: Push((int) 16608)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 16606)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call 0x74

0x162: Pop(1)
0x163: Push((int) 15510)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 15511)
0x169: Push((int) -1)
0x16a: Push((int) 16607)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16f: PushEmpty(bool)
0x170: Call 0x1fb

0x171: Pop(0)
0x172: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x173: @ lshStopAnimation()
0x174: Pop(0)
0x175: GOTO 0x178

0x176: @ StopAnimation()
0x177: Pop(0)
0x178: Return(); Pop(0)

0x179: GOTO 0x85

0x17a: Return(); Pop(0)

0x17b: @ Hold()
0x17c: Pop(0)
0x17d: GOTO 0x17b

0x17e: Return(); Pop(0)

0x17f: PushEmpty()
0x180: PushEmpty(int, object)
0x181: Stack[-1] = Stack[-3]
0x182: Push(-2, 1); TaskCall(0)
0x183: Call 0x0

0x184: Pop(-2, 1); TaskReturn
0x185: Pop(2)
0x186: Return(); Pop(0)

0x187: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x188: @@ GetPosition(Stack[-7])
0x189: Pop(0)
0x18a: @@ GetEyesHeight(Stack[-8])
0x18b: Pop(0)
0x18c: Push(CvectorIndex(Stack[-7], 1))
0x18d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x18e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x18f: @ GetPosition(Stack[-6])
0x190: Pop(0)
0x191: @ GetEyesHeight(Stack[-8])
0x192: Pop(0)
0x193: Push(CvectorIndex(Stack[-6], 1))
0x194: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x195: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x196: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x197: Push(CvectorIndex(Stack[-5], 1))
0x198: Stack[-1] = (int) 0
0x199: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x19a: Pop(0); Push(Stack[-5] | Stack[-5]);
0x19b: Pop(1); Push(Sqrt(Stack[-1]))
0x19c: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x19d: Stack[-4] = -Stack[-5]; Pop(0);
0x19e: Push((int) 70)
0x19f: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1a0: PushEmpty(cvector, cvector)
0x1a1: Push(CVector(0.0, 1.0, 0.0))
0x1a2: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1a3: Call 0x1dc

0x1a4: Pop(1)
0x1a5: Push((int) 25)
0x1a6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a8: Push(CVector(0.0, 10.0, 0.0))
0x1a9: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1aa: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1ab: @ IsOverrideActive(Stack[-1])
0x1ac: Pop(0)
0x1ad: Push(Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1af: Stack[-18] = (bool) 0
0x1b0: Return(); Pop(16)

0x1b1: @ StopWorld()
0x1b2: Pop(0)
0x1b3: @ CameraTransit(Stack[-2], Stack[-4])
0x1b4: Pop(0)
0x1b5: Push(CvectorIndex(Stack[-3], 0))
0x1b6: Push(CvectorIndex(Stack[-4], 2))
0x1b7: @ Rotate(Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: @ CameraWaitForPlayFinish()
0x1ba: Pop(0)
0x1bb: @ ResumeWorld()
0x1bc: Pop(0)
0x1bd: Stack[-18] = (bool) 1
0x1be: Return(); Pop(16)

0x1bf: PushEmpty()
0x1c0: @ CameraSwitchToNormal()
0x1c1: Pop(0)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(float, float, float, float)
0x1c4: Push("playing ")
0x1c5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1c6: @ Trace(Stack[-1])
0x1c7: Pop(1)
0x1c8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1c9: Pop(0)
0x1ca: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1cb: Pop(0)
0x1cc: Push("start: ")
0x1cd: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1ce: @ Trace(Stack[-1])
0x1cf: Pop(1)
0x1d0: Push("end: ")
0x1d1: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1d2: @ Trace(Stack[-1])
0x1d3: Pop(1)
0x1d4: Return(); Pop(4)

0x1d5: PushEmpty(bool)
0x1d6: Call 0x1fb

0x1d7: Pop(0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d9: @ lshStopSpeech()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: PushEmpty(float, float)
0x1dd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1de: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1df: Push((float)0.0)
0x1e0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1e3: Return(); Pop(2)

0x1e4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1e5: Return(); Pop(2)

0x1e6: PushEmpty(int, int)
0x1e7: Push("player")
0x1e8: @ GetVariable(Stack[-1], Stack[-2])
0x1e9: Pop(1)
0x1ea: Push((int) 0)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: Stack[-3] = (int) 200001
0x1ee: Return(); Pop(2)

0x1ef: GOTO 0x1f5

0x1f0: Push((int) 1)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-3] = (int) 200002
0x1f4: Return(); Pop(2)

0x1f5: Stack[-3] = (int) 200003
0x1f6: Return(); Pop(2)

0x1f7: Stack[-1] = (int) 4029
0x1f8: Return(); Pop(0)

0x1f9: Stack[-1] = "ui/NPC_Black.png"
0x1fa: Return(); Pop(0)

0x1fb: Stack[-1] = (bool) 0
0x1fc: Return(); Pop(0)

