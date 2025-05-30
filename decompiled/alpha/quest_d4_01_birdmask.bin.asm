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
	birdmask_done
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	d4q01Whitemask
	pt_d4q01_key1
	AddMark
	pt_d4q01_whitemask
	ShowMap
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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

RunOp = 0x133
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8e Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x13c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x19e

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x289

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x28b

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x278

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
0x36: Call 0x1d6

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
0x49: Push((int) 9650)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 9651)
0x4f: Push((int) 10621)
0x50: Push((int) 10620)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: Push((int) 9661)
0x54: Push((int) 10633)
0x55: Push((int) 10632)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 9665)
0x59: Push((int) 10625)
0x5a: Push((int) 10638)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x60

0x5e: Return(); Pop(0)

0x5f: GOTO 0x43

0x60: PushEmpty(bool)
0x61: Call 0x28d

0x62: Pop(0)
0x63: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x64: @ lshWaitForAnimEnd()
0x65: Pop(0)
0x66: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: GOTO 0x6e

0x69: PushEmpty(string)
0x6a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6b: Call 0x1da

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
0x80: Call 0x28d

0x81: Pop(0)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Return(); Pop(0)

0x85: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Return(); Pop(0)

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[-2]
0x8a: Call 0x1da

0x8b: Pop(1)
0x8c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Push((int) 1)
0x90: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x91: PushEmpty()
0x92: Call 0x1ec

0x93: Pop(0)
0x94: Push((int) 10626)
0x95: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x97: PushEmpty(object, object)
0x98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Call 0x226

0x9b: Pop(2)
0x9c: PushEmpty(object, object)
0x9d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f: Call 0x236

0xa0: Pop(2)
0xa1: Push((int) 10627)
0xa2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa4: PushEmpty(object, object)
0xa5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7: Call 0x226

0xa8: Pop(2)
0xa9: PushEmpty(object, object)
0xaa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xac: Call 0x236

0xad: Pop(2)
0xae: Push((int) 10619)
0xaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xb1: PushEmpty(string)
0xb2: Stack[-1] = "Neutral"
0xb3: Call 0x7e

0xb4: Pop(1)
0xb5: Push((int) 9650)
0xb6: @@ SetMessage(Stack[-1])
0xb7: Pop(1)
0xb8: @@ ClearReplies()
0xb9: Pop(0)
0xba: Push((int) 9651)
0xbb: Push((int) 10621)
0xbc: Push((int) 10620)
0xbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe: Pop(3)
0xbf: Push((int) 9661)
0xc0: Push((int) 10633)
0xc1: Push((int) 10632)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: Push((int) 9665)
0xc5: Push((int) 10625)
0xc6: Push((int) 10638)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Return(); Pop(0)

0xca: Push((int) 10633)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0x7e

0xd0: Pop(1)
0xd1: Push((int) 9662)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 9663)
0xd7: Push((int) 10625)
0xd8: Push((int) 10634)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 9664)
0xdc: Push((int) 10621)
0xdd: Push((int) 10636)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 10621)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0x7e

0xe7: Pop(1)
0xe8: Push((int) 9652)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 9653)
0xee: Push((int) 10623)
0xef: Push((int) 10622)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Push((int) 9660)
0xf3: Push((int) 10625)
0xf4: Push((int) 10630)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Return(); Pop(0)

0xf8: Push((int) 10623)
0xf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call 0x7e

0xfe: Pop(1)
0xff: Push((int) 9654)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 9655)
0x105: Push((int) 10625)
0x106: Push((int) 10624)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Push((int) 9659)
0x10a: Push((int) 10625)
0x10b: Push((int) 10628)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 10625)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call 0x7e

0x115: Pop(1)
0x116: Push((int) 9656)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 9657)
0x11c: Push((int) -1)
0x11d: Push((int) 10626)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 9658)
0x121: Push((int) -1)
0x122: Push((int) 10627)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x127: PushEmpty(bool)
0x128: Call 0x28d

0x129: Pop(0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: @ lshStopAnimation()
0x12c: Pop(0)
0x12d: GOTO 0x130

0x12e: @ StopAnimation()
0x12f: Pop(0)
0x130: Return(); Pop(0)

0x131: GOTO 0x8f

0x132: Return(); Pop(0)

0x133: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x134: Push((int) 3)
0x135: @ Sleep(Stack[-1])
0x136: Pop(1)
0x137: PushEmpty()
0x138: Call 0x14f

0x139: Pop(0)
0x13a: GOTO 0x134

0x13b: Return(); Pop(0)

0x13c: PushEmpty()
0x13d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x140: PushEmpty()
0x141: Call 0x194

0x142: Pop(0)
0x143: PushEmpty(int, object)
0x144: Stack[-1] = Stack[-3]
0x145: Push(-2, 1); TaskCall(0)
0x146: Call 0x0

0x147: Pop(-2, 1); TaskReturn
0x148: Pop(2)
0x149: PushEmpty(bool, string, string)
0x14a: Stack[-2] = "quest_d4_01"
0x14b: Stack[-1] = "birdmask_done"
0x14c: Call 0x1fd

0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x150: @ WaitForAnimEnd()
0x151: Pop(0)
0x152: PushEmpty(bool)
0x153: Call 0x199

0x154: Pop(0)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Return(); Pop(14)

0x158: PushEmpty(int)
0x159: Call 0x215

0x15a: Stack[-8] = Stack[-1]
0x15b: Pop(1)
0x15c: Stack[-6] = (int) 0
0x15d: PushEmpty(bool)
0x15e: Stack[-1] = (bool) 0
0x15f: Push((int) 5)
0x160: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: PushEmpty(bool)
0x163: Call 0x199

0x164: Pop(0)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 1
0x167: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x168: Push((int) 3)
0x169: @ irand(Stack[-6], Stack[-1])
0x16a: Pop(1)
0x16b: Push((int) 0)
0x16c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16e: Push(Stack[-7])
0x16f: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x170: @ irand(Stack[-4], Stack[-7])
0x171: Pop(0)
0x172: Push("all")
0x173: PushEmpty(string, int)
0x174: Stack[-1] = Stack[-7]
0x175: Call 0x20e

0x176: Pop(1)
0x177: @ PlayAnimation(Stack[-2], Stack[-1])
0x178: Pop(2)
0x179: @ WaitForAnimEnd(Stack[-3])
0x17a: Pop(0)
0x17b: Pop(0); Push((bool) Stack[-3] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: GOTO 0x193

0x17e: GOTO 0x190

0x17f: Push((int) 1)
0x180: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x182: Push((int) 4)
0x183: @ rand(Stack[-3], Stack[-1])
0x184: Pop(1)
0x185: Push((int) 1)
0x186: Pop(1); Push(Stack[-3] + Stack[-1]);
0x187: @ Sleep(Stack[-1], Stack[-2])
0x188: Pop(1)
0x189: Pop(0); Push((bool) Stack[-1] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: GOTO 0x193

0x18c: GOTO 0x190

0x18d: Push(Stack[-6])
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: GOTO 0x193

0x190: Push((int) 1)
0x191: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x192: GOTO 0x15d

0x193: Return(); Pop(14)

0x194: @ StopAnimation()
0x195: Pop(0)
0x196: @ StopGroup0()
0x197: Pop(0)
0x198: Return(); Pop(0)

0x199: PushEmpty(bool, bool)
0x19a: @ IsLoaded(Stack[-1])
0x19b: Pop(0)
0x19c: Stack[-3] = Stack[-1]
0x19d: Return(); Pop(2)

0x19e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x19f: @@ GetPosition(Stack[-7])
0x1a0: Pop(0)
0x1a1: @@ GetEyesHeight(Stack[-8])
0x1a2: Pop(0)
0x1a3: Push(CvectorIndex(Stack[-7], 1))
0x1a4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1a5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1a6: @ GetPosition(Stack[-6])
0x1a7: Pop(0)
0x1a8: @ GetEyesHeight(Stack[-8])
0x1a9: Pop(0)
0x1aa: Push(CvectorIndex(Stack[-6], 1))
0x1ab: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ac: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1ad: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1ae: Push(CvectorIndex(Stack[-5], 1))
0x1af: Stack[-1] = (int) 0
0x1b0: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1b1: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1b2: Pop(1); Push(Sqrt(Stack[-1]))
0x1b3: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1b4: Stack[-4] = -Stack[-5]; Pop(0);
0x1b5: Push((int) 70)
0x1b6: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1b7: PushEmpty(cvector, cvector)
0x1b8: Push(CVector(0.0, 1.0, 0.0))
0x1b9: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1ba: Call 0x1f3

0x1bb: Pop(1)
0x1bc: Push((int) 25)
0x1bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1be: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1bf: Push(CVector(0.0, 10.0, 0.0))
0x1c0: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1c1: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1c2: @ IsOverrideActive(Stack[-1])
0x1c3: Pop(0)
0x1c4: Push(Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-18] = (bool) 0
0x1c7: Return(); Pop(16)

0x1c8: @ StopWorld()
0x1c9: Pop(0)
0x1ca: @ CameraTransit(Stack[-2], Stack[-4])
0x1cb: Pop(0)
0x1cc: Push(CvectorIndex(Stack[-3], 0))
0x1cd: Push(CvectorIndex(Stack[-4], 2))
0x1ce: @ Rotate(Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: @ CameraWaitForPlayFinish()
0x1d1: Pop(0)
0x1d2: @ ResumeWorld()
0x1d3: Pop(0)
0x1d4: Stack[-18] = (bool) 1
0x1d5: Return(); Pop(16)

0x1d6: PushEmpty()
0x1d7: @ CameraSwitchToNormal()
0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: PushEmpty(float, float, float, float)
0x1db: Push("playing ")
0x1dc: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1dd: @ Trace(Stack[-1])
0x1de: Pop(1)
0x1df: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1e0: Pop(0)
0x1e1: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1e2: Pop(0)
0x1e3: Push("start: ")
0x1e4: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1e5: @ Trace(Stack[-1])
0x1e6: Pop(1)
0x1e7: Push("end: ")
0x1e8: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1e9: @ Trace(Stack[-1])
0x1ea: Pop(1)
0x1eb: Return(); Pop(4)

0x1ec: PushEmpty(bool)
0x1ed: Call 0x28d

0x1ee: Pop(0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f0: @ lshStopSpeech()
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(float, float)
0x1f4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1f5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f6: Push((float)0.0)
0x1f7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1fa: Return(); Pop(2)

0x1fb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1fc: Return(); Pop(2)

0x1fd: PushEmpty(object, object)
0x1fe: @ FindActor(Stack[-1], Stack[-4])
0x1ff: Pop(0)
0x200: Pop(0); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-5] = (bool) 0
0x203: Return(); Pop(2)

0x204: @ Trigger(Stack[-1], Stack[-3])
0x205: Pop(0)
0x206: Stack[-5] = (bool) 1
0x207: Return(); Pop(2)

0x208: Stack[-1] = 0
0x209: PushEmpty(float, float)
0x20a: @ GetGameTime(Stack[-1])
0x20b: Pop(0)
0x20c: Stack[-3] = Stack[-1]
0x20d: Return(); Pop(2)

0x20e: PushEmpty(string, string)
0x20f: Stack[-1] = "idle"
0x210: Push(Stack[-3])
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x213: Stack[-4] = Stack[-1]
0x214: Return(); Pop(2)

0x215: PushEmpty(int, bool, int, bool)
0x216: Stack[-2] = (int) 0
0x217: Push("all")
0x218: PushEmpty(string, int)
0x219: Stack[-1] = Stack[-5]
0x21a: Call 0x20e

0x21b: Pop(1)
0x21c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(2)
0x21e: Pop(0); Push((bool) Stack[-1] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x224

0x221: Push((int) 1)
0x222: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x223: GOTO 0x217

0x224: Stack[-5] = Stack[-2]
0x225: Return(); Pop(4)

0x226: PushEmpty(object, object)
0x227: PushEmpty(object)
0x228: Call 0x246

0x229: Stack[-2] = Stack[-1]
0x22a: Pop(1)
0x22b: Push("d4q01Whitemask")
0x22c: Push("pt_d4q01_key1")
0x22d: Push((int) 1)
0x22e: Push((int) 11523)
0x22f: PushEmpty(float)
0x230: Call 0x209

0x231: Pop(0)
0x232: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(5)
0x234: Return(); Pop(2)

0x235: Stack[-1] = 0
0x236: PushEmpty()
0x237: PushEmpty(object, string, float)
0x238: PushEmpty(object)
0x239: Call 0x246

0x23a: Stack[-4] = Stack[-1]
0x23b: Pop(1)
0x23c: Stack[-2] = "pt_d4q01_whitemask"
0x23d: Stack[-1] = (int) 2
0x23e: Call 0x257

0x23f: Pop(3)
0x240: PushEmpty(object)
0x241: Call 0x246

0x242: Pop(0)
0x243: @@ ShowMap(Stack[-1])
0x244: Pop(1)
0x245: Return(); Pop(0)

0x246: PushEmpty(object, object, object, object)
0x247: @ GetMainOutdoorScene(Stack[-2])
0x248: Pop(0)
0x249: Pop(0); Push((bool) Stack[-2] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: Push("Can't find main outdoor scene")
0x24c: @ Trace(Stack[-1])
0x24d: Pop(1)
0x24e: Stack[-1] = 0
0x24f: Stack[-5] = Stack[-1]
0x250: Return(); Pop(4)

0x251: @@ GetMap(Stack[-1])
0x252: Pop(0)
0x253: Stack[-5] = Stack[-1]
0x254: Return(); Pop(4)

0x255: Stack[-1] = 0
0x256: Stack[-2] = 0
0x257: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x258: @ GetMainOutdoorScene(Stack[-2])
0x259: Pop(0)
0x25a: Pop(0); Push((bool) Stack[-2] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25c: Push("Can't find main outdoor scene")
0x25d: @ Trace(Stack[-1])
0x25e: Pop(1)
0x25f: Return(); Pop(8)

0x260: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x261: Pop(0)
0x262: Pop(0); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: Push("Warning: outdoor scene locator ")
0x265: Pop(1); Push(Stack[-1] + Stack[-11]);
0x266: Push(" doesnt exist")
0x267: Pop(2); Push(Stack[-2] + Stack[-1]);
0x268: @ Trace(Stack[-1])
0x269: Pop(1)
0x26a: @@ GetMap(Stack[-11])
0x26b: Pop(0)
0x26c: Pop(0); Push((bool) Stack[-11] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26e: Push("Can't find map")
0x26f: @ Trace(Stack[-1])
0x270: Pop(1)
0x271: Return(); Pop(8)

0x272: Push(CvectorIndex(Stack[-4], 0))
0x273: Push(CvectorIndex(Stack[-5], 2))
0x274: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x275: Pop(2)
0x276: Return(); Pop(8)

0x277: Stack[-2] = 0
0x278: PushEmpty(int, int)
0x279: Push("player")
0x27a: @ GetVariable(Stack[-1], Stack[-2])
0x27b: Pop(1)
0x27c: Push((int) 0)
0x27d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27f: Stack[-3] = (int) 200001
0x280: Return(); Pop(2)

0x281: GOTO 0x287

0x282: Push((int) 1)
0x283: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: Stack[-3] = (int) 200002
0x286: Return(); Pop(2)

0x287: Stack[-3] = (int) 200003
0x288: Return(); Pop(2)

0x289: Stack[-1] = (int) 4029
0x28a: Return(); Pop(0)

0x28b: Stack[-1] = "ui/NPC_Black.png"
0x28c: Return(); Pop(0)

0x28d: Stack[-1] = (bool) 0
0x28e: Return(); Pop(0)

