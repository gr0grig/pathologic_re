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
	ood12Burah1
	player
	ui/NPC_Burah.png

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

RunOp = 0x14f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8e Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x153 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x15b

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x1e2

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x1e4

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x1d1

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
0x36: Call 0x193

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
0x49: Push((int) 14909)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50: Call 0x1c5

0x51: Pop(1)
0x52: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x53: Push((int) 14910)
0x54: Push((int) 16160)
0x55: Push((int) 16159)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 14929)
0x59: Push((int) -1)
0x5a: Push((int) 16180)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x60

0x5e: Return(); Pop(0)

0x5f: GOTO 0x43

0x60: PushEmpty(bool)
0x61: Call 0x1e6

0x62: Pop(0)
0x63: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x64: @ lshWaitForAnimEnd()
0x65: Pop(0)
0x66: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: GOTO 0x6e

0x69: PushEmpty(string)
0x6a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6b: Call 0x197

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
0x80: Call 0x1e6

0x81: Pop(0)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Return(); Pop(0)

0x85: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Return(); Pop(0)

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[-2]
0x8a: Call 0x197

0x8b: Pop(1)
0x8c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Push((int) 1)
0x90: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x91: PushEmpty()
0x92: Call 0x1a9

0x93: Pop(0)
0x94: Push((int) 16159)
0x95: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: PushEmpty(object, object)
0x98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Call 0x1bf

0x9b: Pop(2)
0x9c: Push((int) 16158)
0x9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral"
0xa1: Call 0x7e

0xa2: Pop(1)
0xa3: Push((int) 14909)
0xa4: @@ SetMessage(Stack[-1])
0xa5: Pop(1)
0xa6: @@ ClearReplies()
0xa7: Pop(0)
0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Call 0x1c5

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: Push((int) 14910)
0xae: Push((int) 16160)
0xaf: Push((int) 16159)
0xb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(3)
0xb2: Push((int) 14929)
0xb3: Push((int) -1)
0xb4: Push((int) 16180)
0xb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(3)
0xb7: Return(); Pop(0)

0xb8: Push((int) 16160)
0xb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xbb: PushEmpty(string)
0xbc: Stack[-1] = "Neutral"
0xbd: Call 0x7e

0xbe: Pop(1)
0xbf: Push((int) 14911)
0xc0: @@ SetMessage(Stack[-1])
0xc1: Pop(1)
0xc2: @@ ClearReplies()
0xc3: Pop(0)
0xc4: Push((int) 14912)
0xc5: Push((int) 16162)
0xc6: Push((int) 16161)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Push((int) 14922)
0xca: Push((int) 16172)
0xcb: Push((int) 16171)
0xcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd: Pop(3)
0xce: Push((int) 14925)
0xcf: Push((int) 16176)
0xd0: Push((int) 16175)
0xd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(3)
0xd3: Return(); Pop(0)

0xd4: Push((int) 16176)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call 0x7e

0xda: Pop(1)
0xdb: Push((int) 14926)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 14927)
0xe1: Push((int) -1)
0xe2: Push((int) 16177)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 14928)
0xe6: Push((int) 16162)
0xe7: Push((int) 16178)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 16172)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0x7e

0xf1: Pop(1)
0xf2: Push((int) 14923)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 14924)
0xf8: Push((int) 16162)
0xf9: Push((int) 16173)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 16162)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call 0x7e

0x103: Pop(1)
0x104: Push((int) 14913)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 14914)
0x10a: Push((int) 16164)
0x10b: Push((int) 16163)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 14921)
0x10f: Push((int) -1)
0x110: Push((int) 16170)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 16164)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call 0x7e

0x11a: Pop(1)
0x11b: Push((int) 14915)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 14916)
0x121: Push((int) 16166)
0x122: Push((int) 16165)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 14920)
0x126: Push((int) -1)
0x127: Push((int) 16169)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 16166)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call 0x7e

0x131: Pop(1)
0x132: Push((int) 14917)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 14918)
0x138: Push((int) -1)
0x139: Push((int) 16167)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 14919)
0x13d: Push((int) -1)
0x13e: Push((int) 16168)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x143: PushEmpty(bool)
0x144: Call 0x1e6

0x145: Pop(0)
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: @ lshStopAnimation()
0x148: Pop(0)
0x149: GOTO 0x14c

0x14a: @ StopAnimation()
0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: GOTO 0x8f

0x14e: Return(); Pop(0)

0x14f: @ Hold()
0x150: Pop(0)
0x151: GOTO 0x14f

0x152: Return(); Pop(0)

0x153: PushEmpty()
0x154: PushEmpty(int, object)
0x155: Stack[-1] = Stack[-3]
0x156: Push(-2, 1); TaskCall(0)
0x157: Call 0x0

0x158: Pop(-2, 1); TaskReturn
0x159: Pop(2)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x15c: @@ GetPosition(Stack[-7])
0x15d: Pop(0)
0x15e: @@ GetEyesHeight(Stack[-8])
0x15f: Pop(0)
0x160: Push(CvectorIndex(Stack[-7], 1))
0x161: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x162: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x163: @ GetPosition(Stack[-6])
0x164: Pop(0)
0x165: @ GetEyesHeight(Stack[-8])
0x166: Pop(0)
0x167: Push(CvectorIndex(Stack[-6], 1))
0x168: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x169: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x16a: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x16b: Push(CvectorIndex(Stack[-5], 1))
0x16c: Stack[-1] = (int) 0
0x16d: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x16e: Pop(0); Push(Stack[-5] | Stack[-5]);
0x16f: Pop(1); Push(Sqrt(Stack[-1]))
0x170: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x171: Stack[-4] = -Stack[-5]; Pop(0);
0x172: Push((int) 70)
0x173: Pop(1); Push(Stack[-6] * Stack[-1]);
0x174: PushEmpty(cvector, cvector)
0x175: Push(CVector(0.0, 1.0, 0.0))
0x176: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x177: Call 0x1b0

0x178: Pop(1)
0x179: Push((int) 25)
0x17a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x17b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17c: Push(CVector(0.0, 10.0, 0.0))
0x17d: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x17e: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x17f: @ IsOverrideActive(Stack[-1])
0x180: Pop(0)
0x181: Push(Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x183: Stack[-18] = (bool) 0
0x184: Return(); Pop(16)

0x185: @ StopWorld()
0x186: Pop(0)
0x187: @ CameraTransit(Stack[-2], Stack[-4])
0x188: Pop(0)
0x189: Push(CvectorIndex(Stack[-3], 0))
0x18a: Push(CvectorIndex(Stack[-4], 2))
0x18b: @ Rotate(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: @ CameraWaitForPlayFinish()
0x18e: Pop(0)
0x18f: @ ResumeWorld()
0x190: Pop(0)
0x191: Stack[-18] = (bool) 1
0x192: Return(); Pop(16)

0x193: PushEmpty()
0x194: @ CameraSwitchToNormal()
0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: PushEmpty(float, float, float, float)
0x198: Push("playing ")
0x199: Pop(1); Push(Stack[-1] + Stack[-6]);
0x19a: @ Trace(Stack[-1])
0x19b: Pop(1)
0x19c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x19d: Pop(0)
0x19e: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x19f: Pop(0)
0x1a0: Push("start: ")
0x1a1: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1a2: @ Trace(Stack[-1])
0x1a3: Pop(1)
0x1a4: Push("end: ")
0x1a5: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1a6: @ Trace(Stack[-1])
0x1a7: Pop(1)
0x1a8: Return(); Pop(4)

0x1a9: PushEmpty(bool)
0x1aa: Call 0x1e6

0x1ab: Pop(0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: @ lshStopSpeech()
0x1ae: Pop(0)
0x1af: Return(); Pop(0)

0x1b0: PushEmpty(float, float)
0x1b1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1b2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b3: Push((float)0.0)
0x1b4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b6: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1b7: Return(); Pop(2)

0x1b8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1b9: Return(); Pop(2)

0x1ba: PushEmpty(int, int)
0x1bb: @ GetVariable(Stack[-3], Stack[-1])
0x1bc: Pop(0)
0x1bd: Stack[-4] = Stack[-1]
0x1be: Return(); Pop(2)

0x1bf: PushEmpty()
0x1c0: Push("ood12Burah1")
0x1c1: Push((int) 1)
0x1c2: @ SetVariable(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: PushEmpty(int, string)
0x1c7: Stack[-1] = "ood12Burah1"
0x1c8: Call 0x1ba

0x1c9: Pop(1)
0x1ca: Push((int) 0)
0x1cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: Stack[-2] = (bool) 1
0x1ce: Return(); Pop(0)

0x1cf: Stack[-2] = (bool) 0
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(int, int)
0x1d2: Push("player")
0x1d3: @ GetVariable(Stack[-1], Stack[-2])
0x1d4: Pop(1)
0x1d5: Push((int) 0)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: Stack[-3] = (int) 200001
0x1d9: Return(); Pop(2)

0x1da: GOTO 0x1e0

0x1db: Push((int) 1)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: Stack[-3] = (int) 200002
0x1df: Return(); Pop(2)

0x1e0: Stack[-3] = (int) 200003
0x1e1: Return(); Pop(2)

0x1e2: Stack[-1] = (int) 11961
0x1e3: Return(); Pop(0)

0x1e4: Stack[-1] = "ui/NPC_Burah.png"
0x1e5: Return(); Pop(0)

0x1e6: Stack[-1] = (bool) 1
0x1e7: Return(); Pop(0)

