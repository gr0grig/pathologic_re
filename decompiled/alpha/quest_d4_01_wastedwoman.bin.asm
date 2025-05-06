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
	quest_d4_01
	wastedwoman_done
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	d4q01WastedMale
	pt_d4q01_key2
	AddMark
	pt_d4q01_wastedmale
	ShowMap
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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
	Sleep (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)

RunOp = 0x15a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x89 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x163 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1c5

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x2b0

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x2b2

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x29f

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
0x36: Call 0x1fd

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
0x44: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x79

0x48: Pop(1)
0x49: Push((int) 9726)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 9727)
0x4f: Push((int) 10711)
0x50: Push((int) 10710)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: Push((int) 9742)
0x54: Push((int) 10728)
0x55: Push((int) 10727)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x5b

0x59: Return(); Pop(0)

0x5a: GOTO 0x43

0x5b: PushEmpty(bool)
0x5c: Call 0x2b4

0x5d: Pop(0)
0x5e: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5f: @ lshWaitForAnimEnd()
0x60: Pop(0)
0x61: Push( Stack[3 + Tasks[-1].StackPointer] )
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x69

0x64: PushEmpty(string)
0x65: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x66: Call 0x201

0x67: Pop(1)
0x68: GOTO 0x5f

0x69: GOTO 0x78

0x6a: Push("all")
0x6b: Push("idle")
0x6c: @ PlayAnimation(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: @ WaitForAnimEnd()
0x6f: Pop(0)
0x70: Push( Stack[3 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: GOTO 0x78

0x73: Push("all")
0x74: Push("idle")
0x75: @ PlayAnimation(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: GOTO 0x6e

0x78: Return(); Pop(0)

0x79: PushEmpty()
0x7a: PushEmpty(bool)
0x7b: Call 0x2b4

0x7c: Pop(0)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Return(); Pop(0)

0x80: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Return(); Pop(0)

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[-2]
0x85: Call 0x201

0x86: Pop(1)
0x87: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: Push((int) 1)
0x8b: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x8c: PushEmpty()
0x8d: Call 0x213

0x8e: Pop(0)
0x8f: Push((int) 10714)
0x90: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x92: PushEmpty(object, object)
0x93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95: Call 0x24d

0x96: Pop(2)
0x97: PushEmpty(object, object)
0x98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Call 0x25d

0x9b: Pop(2)
0x9c: Push((int) 10717)
0x9d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x9f: PushEmpty(object, object)
0xa0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa2: Call 0x24d

0xa3: Pop(2)
0xa4: PushEmpty(object, object)
0xa5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7: Call 0x25d

0xa8: Pop(2)
0xa9: Push((int) 10718)
0xaa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xac: PushEmpty(object, object)
0xad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf: Call 0x24d

0xb0: Pop(2)
0xb1: PushEmpty(object, object)
0xb2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4: Call 0x25d

0xb5: Pop(2)
0xb6: Push((int) 10709)
0xb7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xb9: PushEmpty(string)
0xba: Stack[-1] = "Neutral"
0xbb: Call 0x79

0xbc: Pop(1)
0xbd: Push((int) 9726)
0xbe: @@ SetMessage(Stack[-1])
0xbf: Pop(1)
0xc0: @@ ClearReplies()
0xc1: Pop(0)
0xc2: Push((int) 9727)
0xc3: Push((int) 10711)
0xc4: Push((int) 10710)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Push((int) 9742)
0xc8: Push((int) 10728)
0xc9: Push((int) 10727)
0xca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: Return(); Pop(0)

0xcd: Push((int) 10728)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call 0x79

0xd3: Pop(1)
0xd4: Push((int) 9743)
0xd5: @@ SetMessage(Stack[-1])
0xd6: Pop(1)
0xd7: @@ ClearReplies()
0xd8: Pop(0)
0xd9: Push((int) 9744)
0xda: Push((int) 10711)
0xdb: Push((int) 10729)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 10711)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call 0x79

0xe5: Pop(1)
0xe6: Push((int) 9728)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 9729)
0xec: Push((int) 10713)
0xed: Push((int) 10712)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 9736)
0xf1: Push((int) 10720)
0xf2: Push((int) 10719)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 10720)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call 0x79

0xfc: Pop(1)
0xfd: Push((int) 9737)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 9738)
0x103: Push((int) 10722)
0x104: Push((int) 10721)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 9741)
0x108: Push((int) 10713)
0x109: Push((int) 10725)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 10722)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral"
0x112: Call 0x79

0x113: Pop(1)
0x114: Push((int) 9739)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 9740)
0x11a: Push((int) 10713)
0x11b: Push((int) 10723)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 10713)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call 0x79

0x125: Pop(1)
0x126: Push((int) 9730)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 9731)
0x12c: Push((int) -1)
0x12d: Push((int) 10714)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 9732)
0x131: Push((int) 10716)
0x132: Push((int) 10715)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 10716)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call 0x79

0x13c: Pop(1)
0x13d: Push((int) 9733)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 9734)
0x143: Push((int) -1)
0x144: Push((int) 10717)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 9735)
0x148: Push((int) -1)
0x149: Push((int) 10718)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14e: PushEmpty(bool)
0x14f: Call 0x2b4

0x150: Pop(0)
0x151: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x152: @ lshStopAnimation()
0x153: Pop(0)
0x154: GOTO 0x157

0x155: @ StopAnimation()
0x156: Pop(0)
0x157: Return(); Pop(0)

0x158: GOTO 0x8a

0x159: Return(); Pop(0)

0x15a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15b: Push((int) 3)
0x15c: @ Sleep(Stack[-1])
0x15d: Pop(1)
0x15e: PushEmpty()
0x15f: Call 0x176

0x160: Pop(0)
0x161: GOTO 0x15b

0x162: Return(); Pop(0)

0x163: PushEmpty()
0x164: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x167: PushEmpty()
0x168: Call 0x1bb

0x169: Pop(0)
0x16a: PushEmpty(int, object)
0x16b: Stack[-1] = Stack[-3]
0x16c: Push(-2, 1); TaskCall(0)
0x16d: Call 0x0

0x16e: Pop(-2, 1); TaskReturn
0x16f: Pop(2)
0x170: PushEmpty(bool, string, string)
0x171: Stack[-2] = "quest_d4_01"
0x172: Stack[-1] = "wastedwoman_done"
0x173: Call 0x224

0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x177: @ WaitForAnimEnd()
0x178: Pop(0)
0x179: PushEmpty(bool)
0x17a: Call 0x1c0

0x17b: Pop(0)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Return(); Pop(14)

0x17f: PushEmpty(int)
0x180: Call 0x23c

0x181: Stack[-8] = Stack[-1]
0x182: Pop(1)
0x183: Stack[-6] = (int) 0
0x184: PushEmpty(bool)
0x185: Stack[-1] = (bool) 0
0x186: Push((int) 5)
0x187: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: PushEmpty(bool)
0x18a: Call 0x1c0

0x18b: Pop(0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x18f: Push((int) 3)
0x190: @ irand(Stack[-6], Stack[-1])
0x191: Pop(1)
0x192: Push((int) 0)
0x193: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x195: Push(Stack[-7])
0x196: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x197: @ irand(Stack[-4], Stack[-7])
0x198: Pop(0)
0x199: Push("all")
0x19a: PushEmpty(string, int)
0x19b: Stack[-1] = Stack[-7]
0x19c: Call 0x235

0x19d: Pop(1)
0x19e: @ PlayAnimation(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: @ WaitForAnimEnd(Stack[-3])
0x1a1: Pop(0)
0x1a2: Pop(0); Push((bool) Stack[-3] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1ba

0x1a5: GOTO 0x1b7

0x1a6: Push((int) 1)
0x1a7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a9: Push((int) 4)
0x1aa: @ rand(Stack[-3], Stack[-1])
0x1ab: Pop(1)
0x1ac: Push((int) 1)
0x1ad: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ae: @ Sleep(Stack[-1], Stack[-2])
0x1af: Pop(1)
0x1b0: Pop(0); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1ba

0x1b3: GOTO 0x1b7

0x1b4: Push(Stack[-6])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: GOTO 0x1ba

0x1b7: Push((int) 1)
0x1b8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b9: GOTO 0x184

0x1ba: Return(); Pop(14)

0x1bb: @ StopAnimation()
0x1bc: Pop(0)
0x1bd: @ StopGroup0()
0x1be: Pop(0)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty(bool, bool)
0x1c1: @ IsLoaded(Stack[-1])
0x1c2: Pop(0)
0x1c3: Stack[-3] = Stack[-1]
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1c6: @@ GetPosition(Stack[-7])
0x1c7: Pop(0)
0x1c8: @@ GetEyesHeight(Stack[-8])
0x1c9: Pop(0)
0x1ca: Push(CvectorIndex(Stack[-7], 1))
0x1cb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1cc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1cd: @ GetPosition(Stack[-6])
0x1ce: Pop(0)
0x1cf: @ GetEyesHeight(Stack[-8])
0x1d0: Pop(0)
0x1d1: Push(CvectorIndex(Stack[-6], 1))
0x1d2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1d3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d4: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1d5: Push(CvectorIndex(Stack[-5], 1))
0x1d6: Stack[-1] = (int) 0
0x1d7: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1d8: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1d9: Pop(1); Push(Sqrt(Stack[-1]))
0x1da: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1db: Stack[-4] = -Stack[-5]; Pop(0);
0x1dc: Push((int) 70)
0x1dd: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1de: PushEmpty(cvector, cvector)
0x1df: Push(CVector(0.0, 1.0, 0.0))
0x1e0: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1e1: Call 0x21a

0x1e2: Pop(1)
0x1e3: Push((int) 25)
0x1e4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e6: Push(CVector(0.0, 10.0, 0.0))
0x1e7: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1e8: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1e9: @ IsOverrideActive(Stack[-1])
0x1ea: Pop(0)
0x1eb: Push(Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-18] = (bool) 0
0x1ee: Return(); Pop(16)

0x1ef: @ StopWorld()
0x1f0: Pop(0)
0x1f1: @ CameraTransit(Stack[-2], Stack[-4])
0x1f2: Pop(0)
0x1f3: Push(CvectorIndex(Stack[-3], 0))
0x1f4: Push(CvectorIndex(Stack[-4], 2))
0x1f5: @ Rotate(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: @ CameraWaitForPlayFinish()
0x1f8: Pop(0)
0x1f9: @ ResumeWorld()
0x1fa: Pop(0)
0x1fb: Stack[-18] = (bool) 1
0x1fc: Return(); Pop(16)

0x1fd: PushEmpty()
0x1fe: @ CameraSwitchToNormal()
0x1ff: Pop(0)
0x200: Return(); Pop(0)

0x201: PushEmpty(float, float, float, float)
0x202: Push("playing ")
0x203: Pop(1); Push(Stack[-1] + Stack[-6]);
0x204: @ Trace(Stack[-1])
0x205: Pop(1)
0x206: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x207: Pop(0)
0x208: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x209: Pop(0)
0x20a: Push("start: ")
0x20b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x20c: @ Trace(Stack[-1])
0x20d: Pop(1)
0x20e: Push("end: ")
0x20f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x210: @ Trace(Stack[-1])
0x211: Pop(1)
0x212: Return(); Pop(4)

0x213: PushEmpty(bool)
0x214: Call 0x2b4

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x217: @ lshStopSpeech()
0x218: Pop(0)
0x219: Return(); Pop(0)

0x21a: PushEmpty(float, float)
0x21b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x21c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21d: Push((float)0.0)
0x21e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x221: Return(); Pop(2)

0x222: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x223: Return(); Pop(2)

0x224: PushEmpty(object, object)
0x225: @ FindActor(Stack[-1], Stack[-4])
0x226: Pop(0)
0x227: Pop(0); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-5] = (bool) 0
0x22a: Return(); Pop(2)

0x22b: @ Trigger(Stack[-1], Stack[-3])
0x22c: Pop(0)
0x22d: Stack[-5] = (bool) 1
0x22e: Return(); Pop(2)

0x22f: Stack[-1] = 0
0x230: PushEmpty(float, float)
0x231: @ GetGameTime(Stack[-1])
0x232: Pop(0)
0x233: Stack[-3] = Stack[-1]
0x234: Return(); Pop(2)

0x235: PushEmpty(string, string)
0x236: Stack[-1] = "idle"
0x237: Push(Stack[-3])
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x23a: Stack[-4] = Stack[-1]
0x23b: Return(); Pop(2)

0x23c: PushEmpty(int, bool, int, bool)
0x23d: Stack[-2] = (int) 0
0x23e: Push("all")
0x23f: PushEmpty(string, int)
0x240: Stack[-1] = Stack[-5]
0x241: Call 0x235

0x242: Pop(1)
0x243: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: Pop(0); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x24b

0x248: Push((int) 1)
0x249: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x24a: GOTO 0x23e

0x24b: Stack[-5] = Stack[-2]
0x24c: Return(); Pop(4)

0x24d: PushEmpty(object, object)
0x24e: PushEmpty(object)
0x24f: Call 0x26d

0x250: Stack[-2] = Stack[-1]
0x251: Pop(1)
0x252: Push("d4q01WastedMale")
0x253: Push("pt_d4q01_key2")
0x254: Push((int) 1)
0x255: Push((int) 11522)
0x256: PushEmpty(float)
0x257: Call 0x230

0x258: Pop(0)
0x259: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(5)
0x25b: Return(); Pop(2)

0x25c: Stack[-1] = 0
0x25d: PushEmpty()
0x25e: PushEmpty(object, string, float)
0x25f: PushEmpty(object)
0x260: Call 0x26d

0x261: Stack[-4] = Stack[-1]
0x262: Pop(1)
0x263: Stack[-2] = "pt_d4q01_wastedmale"
0x264: Stack[-1] = (int) 2
0x265: Call 0x27e

0x266: Pop(3)
0x267: PushEmpty(object)
0x268: Call 0x26d

0x269: Pop(0)
0x26a: @@ ShowMap(Stack[-1])
0x26b: Pop(1)
0x26c: Return(); Pop(0)

0x26d: PushEmpty(object, object, object, object)
0x26e: @ GetMainOutdoorScene(Stack[-2])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-2] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x272: Push("Can't find main outdoor scene")
0x273: @ Trace(Stack[-1])
0x274: Pop(1)
0x275: Stack[-1] = 0
0x276: Stack[-5] = Stack[-1]
0x277: Return(); Pop(4)

0x278: @@ GetMap(Stack[-1])
0x279: Pop(0)
0x27a: Stack[-5] = Stack[-1]
0x27b: Return(); Pop(4)

0x27c: Stack[-1] = 0
0x27d: Stack[-2] = 0
0x27e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x27f: @ GetMainOutdoorScene(Stack[-2])
0x280: Pop(0)
0x281: Pop(0); Push((bool) Stack[-2] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x283: Push("Can't find main outdoor scene")
0x284: @ Trace(Stack[-1])
0x285: Pop(1)
0x286: Return(); Pop(8)

0x287: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x288: Pop(0)
0x289: Pop(0); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28b: Push("Warning: outdoor scene locator ")
0x28c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x28d: Push(" doesnt exist")
0x28e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28f: @ Trace(Stack[-1])
0x290: Pop(1)
0x291: @@ GetMap(Stack[-11])
0x292: Pop(0)
0x293: Pop(0); Push((bool) Stack[-11] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x295: Push("Can't find map")
0x296: @ Trace(Stack[-1])
0x297: Pop(1)
0x298: Return(); Pop(8)

0x299: Push(CvectorIndex(Stack[-4], 0))
0x29a: Push(CvectorIndex(Stack[-5], 2))
0x29b: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x29c: Pop(2)
0x29d: Return(); Pop(8)

0x29e: Stack[-2] = 0
0x29f: PushEmpty(int, int)
0x2a0: Push("player")
0x2a1: @ GetVariable(Stack[-1], Stack[-2])
0x2a2: Pop(1)
0x2a3: Push((int) 0)
0x2a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a6: Stack[-3] = (int) 200001
0x2a7: Return(); Pop(2)

0x2a8: GOTO 0x2ae

0x2a9: Push((int) 1)
0x2aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-3] = (int) 200002
0x2ad: Return(); Pop(2)

0x2ae: Stack[-3] = (int) 200003
0x2af: Return(); Pop(2)

0x2b0: Stack[-1] = (int) 3340
0x2b1: Return(); Pop(0)

0x2b2: Stack[-1] = "ui/NPC_None.png"
0x2b3: Return(); Pop(0)

0x2b4: Stack[-1] = (bool) 0
0x2b5: Return(); Pop(0)

