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
	ood12Whitemask1
	ood12Whitemask2
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
	SetVariable (2 args)

RunOp = 0x1df
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1e3 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1eb

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x284

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x286

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x273

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
0x36: Call 0x223

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
0x44: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x25b

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x4a: PushEmpty(object, object)
0x4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x24f

0x4e: Pop(2)
0x4f: PushEmpty(string)
0x50: Stack[-1] = "Neutral"
0x51: Call 0xb0

0x52: Pop(1)
0x53: Push((int) 15058)
0x54: @@ SetMessage(Stack[-1])
0x55: Pop(1)
0x56: @@ ClearReplies()
0x57: Pop(0)
0x58: Push((int) 15059)
0x59: Push((int) 16324)
0x5a: Push((int) 16323)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: Push((int) 15072)
0x5e: Push((int) -1)
0x5f: Push((int) 16336)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: GOTO 0x92

0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral"
0x65: Call 0xb0

0x66: Pop(1)
0x67: Push((int) 15073)
0x68: @@ SetMessage(Stack[-1])
0x69: Pop(1)
0x6a: @@ ClearReplies()
0x6b: Pop(0)
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call 0x267

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: Push((int) 15074)
0x72: Push((int) 16339)
0x73: Push((int) 16338)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78: Call 0x267

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 15085)
0x7c: Push((int) 16341)
0x7d: Push((int) 16349)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call 0x267

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x85: Push((int) 15086)
0x86: Push((int) 16341)
0x87: Push((int) 16351)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: Push((int) 15087)
0x8b: Push((int) -1)
0x8c: Push((int) 16353)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: GOTO 0x92

0x90: Return(); Pop(0)

0x91: GOTO 0x43

0x92: PushEmpty(bool)
0x93: Call 0x288

0x94: Pop(0)
0x95: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x96: @ lshWaitForAnimEnd()
0x97: Pop(0)
0x98: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: GOTO 0xa0

0x9b: PushEmpty(string)
0x9c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d: Call 0x227

0x9e: Pop(1)
0x9f: GOTO 0x96

0xa0: GOTO 0xaf

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: @ WaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: GOTO 0xa5

0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: PushEmpty(bool)
0xb2: Call 0x288

0xb3: Pop(0)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: PushEmpty(string)
0xbb: Stack[-1] = Stack[-2]
0xbc: Call 0x227

0xbd: Pop(1)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0xc3: PushEmpty()
0xc4: Call 0x239

0xc5: Pop(0)
0xc6: Push((int) 16338)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call 0x255

0xcd: Pop(2)
0xce: Push((int) 16349)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x255

0xd5: Pop(2)
0xd6: Push((int) 16351)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call 0x255

0xdd: Pop(2)
0xde: Push((int) 16322)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xe1: PushEmpty(bool, object)
0xe2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Call 0x25b

0xe4: Pop(1)
0xe5: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call 0x24f

0xea: Pop(2)
0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral"
0xed: Call 0xb0

0xee: Pop(1)
0xef: Push((int) 15058)
0xf0: @@ SetMessage(Stack[-1])
0xf1: Pop(1)
0xf2: @@ ClearReplies()
0xf3: Pop(0)
0xf4: Push((int) 15059)
0xf5: Push((int) 16324)
0xf6: Push((int) 16323)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Push((int) 15072)
0xfa: Push((int) -1)
0xfb: Push((int) 16336)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call 0xb0

0x102: Pop(1)
0x103: Push((int) 15073)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Call 0x267

0x10b: Pop(1)
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: Push((int) 15074)
0x10e: Push((int) 16339)
0x10f: Push((int) 16338)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call 0x267

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: Push((int) 15085)
0x118: Push((int) 16341)
0x119: Push((int) 16349)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call 0x267

0x11f: Pop(1)
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: Push((int) 15086)
0x122: Push((int) 16341)
0x123: Push((int) 16351)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 15087)
0x127: Push((int) -1)
0x128: Push((int) 16353)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 16339)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call 0xb0

0x132: Pop(1)
0x133: Push((int) 15075)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 15076)
0x139: Push((int) 16341)
0x13a: Push((int) 16340)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Push((int) 15081)
0x13e: Push((int) -1)
0x13f: Push((int) 16345)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Push((int) 15082)
0x143: Push((int) 16347)
0x144: Push((int) 16346)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 16347)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call 0xb0

0x14e: Pop(1)
0x14f: Push((int) 15083)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 15084)
0x155: Push((int) -1)
0x156: Push((int) 16348)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 16341)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call 0xb0

0x160: Pop(1)
0x161: Push((int) 15077)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 15078)
0x167: Push((int) -1)
0x168: Push((int) 16342)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 15079)
0x16c: Push((int) -1)
0x16d: Push((int) 16343)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 15080)
0x171: Push((int) -1)
0x172: Push((int) 16344)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 16324)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call 0xb0

0x17c: Pop(1)
0x17d: Push((int) 15060)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 15061)
0x183: Push((int) 16326)
0x184: Push((int) 16325)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 15071)
0x188: Push((int) -1)
0x189: Push((int) 16335)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 16326)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call 0xb0

0x193: Pop(1)
0x194: Push((int) 15062)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 15063)
0x19a: Push((int) 16328)
0x19b: Push((int) 16327)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 15067)
0x19f: Push((int) 16332)
0x1a0: Push((int) 16331)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 16332)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call 0xb0

0x1aa: Pop(1)
0x1ab: Push((int) 15068)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 15069)
0x1b1: Push((int) -1)
0x1b2: Push((int) 16333)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Push((int) 15070)
0x1b6: Push((int) -1)
0x1b7: Push((int) 16334)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 16328)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call 0xb0

0x1c1: Pop(1)
0x1c2: Push((int) 15064)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 15065)
0x1c8: Push((int) -1)
0x1c9: Push((int) 16329)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Push((int) 15066)
0x1cd: Push((int) -1)
0x1ce: Push((int) 16330)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d3: PushEmpty(bool)
0x1d4: Call 0x288

0x1d5: Pop(0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: @ lshStopAnimation()
0x1d8: Pop(0)
0x1d9: GOTO 0x1dc

0x1da: @ StopAnimation()
0x1db: Pop(0)
0x1dc: Return(); Pop(0)

0x1dd: GOTO 0xc1

0x1de: Return(); Pop(0)

0x1df: @ Hold()
0x1e0: Pop(0)
0x1e1: GOTO 0x1df

0x1e2: Return(); Pop(0)

0x1e3: PushEmpty()
0x1e4: PushEmpty(int, object)
0x1e5: Stack[-1] = Stack[-3]
0x1e6: Push(-2, 1); TaskCall(0)
0x1e7: Call 0x0

0x1e8: Pop(-2, 1); TaskReturn
0x1e9: Pop(2)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1ec: @@ GetPosition(Stack[-7])
0x1ed: Pop(0)
0x1ee: @@ GetEyesHeight(Stack[-8])
0x1ef: Pop(0)
0x1f0: Push(CvectorIndex(Stack[-7], 1))
0x1f1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1f2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1f3: @ GetPosition(Stack[-6])
0x1f4: Pop(0)
0x1f5: @ GetEyesHeight(Stack[-8])
0x1f6: Pop(0)
0x1f7: Push(CvectorIndex(Stack[-6], 1))
0x1f8: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1f9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1fa: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1fb: Push(CvectorIndex(Stack[-5], 1))
0x1fc: Stack[-1] = (int) 0
0x1fd: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1fe: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1ff: Pop(1); Push(Sqrt(Stack[-1]))
0x200: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x201: Stack[-4] = -Stack[-5]; Pop(0);
0x202: Push((int) 70)
0x203: Pop(1); Push(Stack[-6] * Stack[-1]);
0x204: PushEmpty(cvector, cvector)
0x205: Push(CVector(0.0, 1.0, 0.0))
0x206: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x207: Call 0x240

0x208: Pop(1)
0x209: Push((int) 25)
0x20a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20c: Push(CVector(0.0, 10.0, 0.0))
0x20d: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x20e: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x20f: @ IsOverrideActive(Stack[-1])
0x210: Pop(0)
0x211: Push(Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-18] = (bool) 0
0x214: Return(); Pop(16)

0x215: @ StopWorld()
0x216: Pop(0)
0x217: @ CameraTransit(Stack[-2], Stack[-4])
0x218: Pop(0)
0x219: Push(CvectorIndex(Stack[-3], 0))
0x21a: Push(CvectorIndex(Stack[-4], 2))
0x21b: @ Rotate(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: @ CameraWaitForPlayFinish()
0x21e: Pop(0)
0x21f: @ ResumeWorld()
0x220: Pop(0)
0x221: Stack[-18] = (bool) 1
0x222: Return(); Pop(16)

0x223: PushEmpty()
0x224: @ CameraSwitchToNormal()
0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty(float, float, float, float)
0x228: Push("playing ")
0x229: Pop(1); Push(Stack[-1] + Stack[-6]);
0x22a: @ Trace(Stack[-1])
0x22b: Pop(1)
0x22c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x22d: Pop(0)
0x22e: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x22f: Pop(0)
0x230: Push("start: ")
0x231: Pop(1); Push(Stack[-1] + Stack[-3]);
0x232: @ Trace(Stack[-1])
0x233: Pop(1)
0x234: Push("end: ")
0x235: Pop(1); Push(Stack[-1] + Stack[-2]);
0x236: @ Trace(Stack[-1])
0x237: Pop(1)
0x238: Return(); Pop(4)

0x239: PushEmpty(bool)
0x23a: Call 0x288

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: @ lshStopSpeech()
0x23e: Pop(0)
0x23f: Return(); Pop(0)

0x240: PushEmpty(float, float)
0x241: Pop(0); Push(Stack[-3] | Stack[-3]);
0x242: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x243: Push((float)0.0)
0x244: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x247: Return(); Pop(2)

0x248: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x249: Return(); Pop(2)

0x24a: PushEmpty(int, int)
0x24b: @ GetVariable(Stack[-3], Stack[-1])
0x24c: Pop(0)
0x24d: Stack[-4] = Stack[-1]
0x24e: Return(); Pop(2)

0x24f: PushEmpty()
0x250: Push("ood12Whitemask1")
0x251: Push((int) 1)
0x252: @ SetVariable(Stack[-2], Stack[-1])
0x253: Pop(2)
0x254: Return(); Pop(0)

0x255: PushEmpty()
0x256: Push("ood12Whitemask2")
0x257: Push((int) 1)
0x258: @ SetVariable(Stack[-2], Stack[-1])
0x259: Pop(2)
0x25a: Return(); Pop(0)

0x25b: PushEmpty()
0x25c: PushEmpty(int, string)
0x25d: Stack[-1] = "ood12Whitemask1"
0x25e: Call 0x24a

0x25f: Pop(1)
0x260: Push((int) 0)
0x261: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x263: Stack[-2] = (bool) 1
0x264: Return(); Pop(0)

0x265: Stack[-2] = (bool) 0
0x266: Return(); Pop(0)

0x267: PushEmpty()
0x268: PushEmpty(int, string)
0x269: Stack[-1] = "ood12Whitemask2"
0x26a: Call 0x24a

0x26b: Pop(1)
0x26c: Push((int) 0)
0x26d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26f: Stack[-2] = (bool) 1
0x270: Return(); Pop(0)

0x271: Stack[-2] = (bool) 0
0x272: Return(); Pop(0)

0x273: PushEmpty(int, int)
0x274: Push("player")
0x275: @ GetVariable(Stack[-1], Stack[-2])
0x276: Pop(1)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27a: Stack[-3] = (int) 200001
0x27b: Return(); Pop(2)

0x27c: GOTO 0x282

0x27d: Push((int) 1)
0x27e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-3] = (int) 200002
0x281: Return(); Pop(2)

0x282: Stack[-3] = (int) 200003
0x283: Return(); Pop(2)

0x284: Stack[-1] = (int) 3354
0x285: Return(); Pop(0)

0x286: Stack[-1] = "ui/NPC_Black.png"
0x287: Return(); Pop(0)

0x288: Stack[-1] = (bool) 0
0x289: Return(); Pop(0)

