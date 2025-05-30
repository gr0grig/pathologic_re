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

RunOp = 0x15e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x93 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x162 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x16a

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x1da

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x1dc

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x1c9

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
0x36: Call 0x1a2

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
0x44: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x83

0x48: Pop(1)
0x49: Push((int) 14884)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 14885)
0x4f: Push((int) 16132)
0x50: Push((int) 16131)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: Push((int) 14905)
0x54: Push((int) 16132)
0x55: Push((int) 16151)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 14906)
0x59: Push((int) 16132)
0x5a: Push((int) 16153)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: Push((int) 14907)
0x5e: Push((int) 16132)
0x5f: Push((int) 16155)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: GOTO 0x65

0x63: Return(); Pop(0)

0x64: GOTO 0x43

0x65: PushEmpty(bool)
0x66: Call 0x1de

0x67: Pop(0)
0x68: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x69: @ lshWaitForAnimEnd()
0x6a: Pop(0)
0x6b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0x73

0x6e: PushEmpty(string)
0x6f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x70: Call 0x1a6

0x71: Pop(1)
0x72: GOTO 0x69

0x73: GOTO 0x82

0x74: Push("all")
0x75: Push("idle")
0x76: @ PlayAnimation(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: @ WaitForAnimEnd()
0x79: Pop(0)
0x7a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: GOTO 0x82

0x7d: Push("all")
0x7e: Push("idle")
0x7f: @ PlayAnimation(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: GOTO 0x78

0x82: Return(); Pop(0)

0x83: PushEmpty()
0x84: PushEmpty(bool)
0x85: Call 0x1de

0x86: Pop(0)
0x87: Pop(1); Push((bool) Stack[-1] == 0)
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Return(); Pop(0)

0x8a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[-2]
0x8f: Call 0x1a6

0x90: Pop(1)
0x91: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Push((int) 1)
0x95: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x96: PushEmpty()
0x97: Call 0x1b8

0x98: Pop(0)
0x99: Push((int) 16130)
0x9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x9c: PushEmpty(string)
0x9d: Stack[-1] = "Neutral"
0x9e: Call 0x83

0x9f: Pop(1)
0xa0: Push((int) 14884)
0xa1: @@ SetMessage(Stack[-1])
0xa2: Pop(1)
0xa3: @@ ClearReplies()
0xa4: Pop(0)
0xa5: Push((int) 14885)
0xa6: Push((int) 16132)
0xa7: Push((int) 16131)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: Push((int) 14905)
0xab: Push((int) 16132)
0xac: Push((int) 16151)
0xad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae: Pop(3)
0xaf: Push((int) 14906)
0xb0: Push((int) 16132)
0xb1: Push((int) 16153)
0xb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3: Pop(3)
0xb4: Push((int) 14907)
0xb5: Push((int) 16132)
0xb6: Push((int) 16155)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: Return(); Pop(0)

0xba: Push((int) 16132)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call 0x83

0xc0: Pop(1)
0xc1: Push((int) 14886)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: Push((int) 14887)
0xc7: Push((int) 16134)
0xc8: Push((int) 16133)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 14893)
0xcc: Push((int) 16140)
0xcd: Push((int) 16139)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 14899)
0xd1: Push((int) 16146)
0xd2: Push((int) 16145)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Push((int) 16146)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral"
0xdb: Call 0x83

0xdc: Pop(1)
0xdd: Push((int) 14900)
0xde: @@ SetMessage(Stack[-1])
0xdf: Pop(1)
0xe0: @@ ClearReplies()
0xe1: Pop(0)
0xe2: Push((int) 14901)
0xe3: Push((int) 16148)
0xe4: Push((int) 16147)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Push((int) 14904)
0xe8: Push((int) -1)
0xe9: Push((int) 16150)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Push((int) 16148)
0xee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call 0x83

0xf3: Pop(1)
0xf4: Push((int) 14902)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 14903)
0xfa: Push((int) -1)
0xfb: Push((int) 16149)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: Push((int) 16140)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(string)
0x103: Stack[-1] = "Neutral"
0x104: Call 0x83

0x105: Pop(1)
0x106: Push((int) 14894)
0x107: @@ SetMessage(Stack[-1])
0x108: Pop(1)
0x109: @@ ClearReplies()
0x10a: Pop(0)
0x10b: Push((int) 14895)
0x10c: Push((int) 16142)
0x10d: Push((int) 16141)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Push((int) 14898)
0x111: Push((int) -1)
0x112: Push((int) 16144)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 16142)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call 0x83

0x11c: Pop(1)
0x11d: Push((int) 14896)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 14897)
0x123: Push((int) -1)
0x124: Push((int) 16143)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 16134)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call 0x83

0x12e: Pop(1)
0x12f: Push((int) 14888)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 14889)
0x135: Push((int) 16136)
0x136: Push((int) 16135)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 14892)
0x13a: Push((int) -1)
0x13b: Push((int) 16138)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Push((int) 16136)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Neutral"
0x144: Call 0x83

0x145: Pop(1)
0x146: Push((int) 14890)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: Push((int) 14891)
0x14c: Push((int) -1)
0x14d: Push((int) 16137)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x152: PushEmpty(bool)
0x153: Call 0x1de

0x154: Pop(0)
0x155: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x156: @ lshStopAnimation()
0x157: Pop(0)
0x158: GOTO 0x15b

0x159: @ StopAnimation()
0x15a: Pop(0)
0x15b: Return(); Pop(0)

0x15c: GOTO 0x94

0x15d: Return(); Pop(0)

0x15e: @ Hold()
0x15f: Pop(0)
0x160: GOTO 0x15e

0x161: Return(); Pop(0)

0x162: PushEmpty()
0x163: PushEmpty(int, object)
0x164: Stack[-1] = Stack[-3]
0x165: Push(-2, 1); TaskCall(0)
0x166: Call 0x0

0x167: Pop(-2, 1); TaskReturn
0x168: Pop(2)
0x169: Return(); Pop(0)

0x16a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x16b: @@ GetPosition(Stack[-7])
0x16c: Pop(0)
0x16d: @@ GetEyesHeight(Stack[-8])
0x16e: Pop(0)
0x16f: Push(CvectorIndex(Stack[-7], 1))
0x170: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x171: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x172: @ GetPosition(Stack[-6])
0x173: Pop(0)
0x174: @ GetEyesHeight(Stack[-8])
0x175: Pop(0)
0x176: Push(CvectorIndex(Stack[-6], 1))
0x177: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x178: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x179: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x17a: Push(CvectorIndex(Stack[-5], 1))
0x17b: Stack[-1] = (int) 0
0x17c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x17d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x17e: Pop(1); Push(Sqrt(Stack[-1]))
0x17f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x180: Stack[-4] = -Stack[-5]; Pop(0);
0x181: Push((int) 70)
0x182: Pop(1); Push(Stack[-6] * Stack[-1]);
0x183: PushEmpty(cvector, cvector)
0x184: Push(CVector(0.0, 1.0, 0.0))
0x185: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x186: Call 0x1bf

0x187: Pop(1)
0x188: Push((int) 25)
0x189: Pop(2); Push(Stack[-2] * Stack[-1]);
0x18a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18b: Push(CVector(0.0, 10.0, 0.0))
0x18c: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x18d: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x18e: @ IsOverrideActive(Stack[-1])
0x18f: Pop(0)
0x190: Push(Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x192: Stack[-18] = (bool) 0
0x193: Return(); Pop(16)

0x194: @ StopWorld()
0x195: Pop(0)
0x196: @ CameraTransit(Stack[-2], Stack[-4])
0x197: Pop(0)
0x198: Push(CvectorIndex(Stack[-3], 0))
0x199: Push(CvectorIndex(Stack[-4], 2))
0x19a: @ Rotate(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: @ CameraWaitForPlayFinish()
0x19d: Pop(0)
0x19e: @ ResumeWorld()
0x19f: Pop(0)
0x1a0: Stack[-18] = (bool) 1
0x1a1: Return(); Pop(16)

0x1a2: PushEmpty()
0x1a3: @ CameraSwitchToNormal()
0x1a4: Pop(0)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(float, float, float, float)
0x1a7: Push("playing ")
0x1a8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1a9: @ Trace(Stack[-1])
0x1aa: Pop(1)
0x1ab: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1ac: Pop(0)
0x1ad: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1ae: Pop(0)
0x1af: Push("start: ")
0x1b0: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1b1: @ Trace(Stack[-1])
0x1b2: Pop(1)
0x1b3: Push("end: ")
0x1b4: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1b5: @ Trace(Stack[-1])
0x1b6: Pop(1)
0x1b7: Return(); Pop(4)

0x1b8: PushEmpty(bool)
0x1b9: Call 0x1de

0x1ba: Pop(0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bc: @ lshStopSpeech()
0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(float, float)
0x1c0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1c1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c2: Push((float)0.0)
0x1c3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1c6: Return(); Pop(2)

0x1c7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1c8: Return(); Pop(2)

0x1c9: PushEmpty(int, int)
0x1ca: Push("player")
0x1cb: @ GetVariable(Stack[-1], Stack[-2])
0x1cc: Pop(1)
0x1cd: Push((int) 0)
0x1ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d0: Stack[-3] = (int) 200001
0x1d1: Return(); Pop(2)

0x1d2: GOTO 0x1d8

0x1d3: Push((int) 1)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-3] = (int) 200002
0x1d7: Return(); Pop(2)

0x1d8: Stack[-3] = (int) 200003
0x1d9: Return(); Pop(2)

0x1da: Stack[-1] = (int) 14840
0x1db: Return(); Pop(0)

0x1dc: Stack[-1] = "ui/NPC_Black.png"
0x1dd: Return(); Pop(0)

0x1de: Stack[-1] = (bool) 1
0x1df: Return(); Pop(0)

