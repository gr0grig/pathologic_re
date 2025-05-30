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
	d5q02
	d5q02NudeMeeting
	pt_d5q01_girl_corpse1
	AddMark
	quest_d5_02
	remove_girl
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x158
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x89 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x150 Vars = (object)
		EVENT_26 Op = 0x15c Vars = (string)
		EVENT_6 Op = 0x178 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x18a

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
0x17: Call 0x268

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
0x36: Call 0x1c2

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

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x221

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0x79

0x4d: Pop(1)
0x4e: Push((int) 11988)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 11989)
0x54: Push((int) 13205)
0x55: Push((int) 13204)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x5b

0x59: Return(); Pop(0)

0x5a: GOTO 0x43

0x5b: PushEmpty(bool)
0x5c: Call 0x28d

0x5d: Pop(0)
0x5e: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5f: @ lshWaitForAnimEnd()
0x60: Pop(0)
0x61: Push( Stack[3 + Tasks[-1].StackPointer] )
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x69

0x64: PushEmpty(string)
0x65: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x66: Call 0x1c6

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
0x7b: Call 0x28d

0x7c: Pop(0)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Return(); Pop(0)

0x80: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Return(); Pop(0)

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[-2]
0x85: Call 0x1c6

0x86: Pop(1)
0x87: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: Push((int) 1)
0x8b: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x8c: PushEmpty()
0x8d: Call 0x1d8

0x8e: Pop(0)
0x8f: Push((int) 13218)
0x90: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: PushEmpty(object, object)
0x93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95: Call 0x205

0x96: Pop(2)
0x97: Push((int) 13214)
0x98: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: PushEmpty(object, object)
0x9b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d: Call 0x205

0x9e: Pop(2)
0x9f: Push((int) 13215)
0xa0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa2: PushEmpty(object, object)
0xa3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5: Call 0x205

0xa6: Pop(2)
0xa7: Push((int) 13203)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(bool, object)
0xab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac: Call 0x221

0xad: Pop(1)
0xae: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call 0x79

0xb2: Pop(1)
0xb3: Push((int) 11988)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 11989)
0xb9: Push((int) 13205)
0xba: Push((int) 13204)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 13205)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call 0x79

0xc4: Pop(1)
0xc5: Push((int) 11990)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 11991)
0xcb: Push((int) 13207)
0xcc: Push((int) 13206)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 12004)
0xd0: Push((int) 13207)
0xd1: Push((int) 13219)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 13207)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call 0x79

0xdb: Pop(1)
0xdc: Push((int) 11992)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 11993)
0xe2: Push((int) 13209)
0xe3: Push((int) 13208)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 12005)
0xe7: Push((int) 13209)
0xe8: Push((int) 13221)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 13209)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call 0x79

0xf2: Pop(1)
0xf3: Push((int) 11994)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 11995)
0xf9: Push((int) 13211)
0xfa: Push((int) 13210)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 12006)
0xfe: Push((int) 13213)
0xff: Push((int) 13223)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 13211)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call 0x79

0x109: Pop(1)
0x10a: Push((int) 11996)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 11997)
0x110: Push((int) 13213)
0x111: Push((int) 13212)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 13213)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call 0x79

0x11b: Pop(1)
0x11c: Push((int) 11998)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 12001)
0x122: Push((int) 13217)
0x123: Push((int) 13216)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 11999)
0x127: Push((int) -1)
0x128: Push((int) 13214)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 12000)
0x12c: Push((int) -1)
0x12d: Push((int) 13215)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 13217)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral"
0x136: Call 0x79

0x137: Pop(1)
0x138: Push((int) 12002)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 12003)
0x13e: Push((int) -1)
0x13f: Push((int) 13218)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x144: PushEmpty(bool)
0x145: Call 0x28d

0x146: Pop(0)
0x147: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x148: @ lshStopAnimation()
0x149: Pop(0)
0x14a: GOTO 0x14d

0x14b: @ StopAnimation()
0x14c: Pop(0)
0x14d: Return(); Pop(0)

0x14e: GOTO 0x8a

0x14f: Return(); Pop(0)

0x150: PushEmpty()
0x151: PushEmpty(int, object)
0x152: Stack[-1] = Stack[-3]
0x153: Push(-2, 1); TaskCall(0)
0x154: Call 0x0

0x155: Pop(-2, 1); TaskReturn
0x156: Pop(2)
0x157: Return(); Pop(0)

0x158: @ Hold()
0x159: Pop(0)
0x15a: GOTO 0x158

0x15b: Return(); Pop(0)

0x15c: PushEmpty(bool, bool)
0x15d: Push("cleanup")
0x15e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x160: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x161: @ IsLoaded(Stack[-1])
0x162: Pop(0)
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: Pop(0); Push((bool) Stack[-2] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: PushEmpty(bool)
0x168: Call 0x188

0x169: Pop(0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: Stack[-1] = (bool) 1
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: PushEmpty(object)
0x16e: Call 0x1df

0x16f: Pop(0)
0x170: @ RemoveActor(Stack[-1])
0x171: Pop(1)
0x172: GOTO 0x177

0x173: Push("restore")
0x174: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x176: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x177: Return(); Pop(2)

0x178: PushEmpty(bool)
0x179: Stack[-1] = (bool) 0
0x17a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(bool)
0x17d: Call 0x188

0x17e: Pop(0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[-1] = (bool) 1
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(object)
0x183: Call 0x1df

0x184: Pop(0)
0x185: @ RemoveActor(Stack[-1])
0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: Stack[-1] = (bool) 1
0x189: Return(); Pop(0)

0x18a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x18b: @@ GetPosition(Stack[-7])
0x18c: Pop(0)
0x18d: @@ GetEyesHeight(Stack[-8])
0x18e: Pop(0)
0x18f: Push(CvectorIndex(Stack[-7], 1))
0x190: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x191: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x192: @ GetPosition(Stack[-6])
0x193: Pop(0)
0x194: @ GetEyesHeight(Stack[-8])
0x195: Pop(0)
0x196: Push(CvectorIndex(Stack[-6], 1))
0x197: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x198: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x199: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x19a: Push(CvectorIndex(Stack[-5], 1))
0x19b: Stack[-1] = (int) 0
0x19c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x19d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x19e: Pop(1); Push(Sqrt(Stack[-1]))
0x19f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1a0: Stack[-4] = -Stack[-5]; Pop(0);
0x1a1: Push((int) 70)
0x1a2: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1a3: PushEmpty(cvector, cvector)
0x1a4: Push(CVector(0.0, 1.0, 0.0))
0x1a5: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1a6: Call 0x1e5

0x1a7: Pop(1)
0x1a8: Push((int) 25)
0x1a9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1aa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ab: Push(CVector(0.0, 10.0, 0.0))
0x1ac: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1ad: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1ae: @ IsOverrideActive(Stack[-1])
0x1af: Pop(0)
0x1b0: Push(Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: Stack[-18] = (bool) 0
0x1b3: Return(); Pop(16)

0x1b4: @ StopWorld()
0x1b5: Pop(0)
0x1b6: @ CameraTransit(Stack[-2], Stack[-4])
0x1b7: Pop(0)
0x1b8: Push(CvectorIndex(Stack[-3], 0))
0x1b9: Push(CvectorIndex(Stack[-4], 2))
0x1ba: @ Rotate(Stack[-2], Stack[-1])
0x1bb: Pop(2)
0x1bc: @ CameraWaitForPlayFinish()
0x1bd: Pop(0)
0x1be: @ ResumeWorld()
0x1bf: Pop(0)
0x1c0: Stack[-18] = (bool) 1
0x1c1: Return(); Pop(16)

0x1c2: PushEmpty()
0x1c3: @ CameraSwitchToNormal()
0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(float, float, float, float)
0x1c7: Push("playing ")
0x1c8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1c9: @ Trace(Stack[-1])
0x1ca: Pop(1)
0x1cb: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1cc: Pop(0)
0x1cd: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1ce: Pop(0)
0x1cf: Push("start: ")
0x1d0: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1d1: @ Trace(Stack[-1])
0x1d2: Pop(1)
0x1d3: Push("end: ")
0x1d4: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1d5: @ Trace(Stack[-1])
0x1d6: Pop(1)
0x1d7: Return(); Pop(4)

0x1d8: PushEmpty(bool)
0x1d9: Call 0x28d

0x1da: Pop(0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dc: @ lshStopSpeech()
0x1dd: Pop(0)
0x1de: Return(); Pop(0)

0x1df: PushEmpty(object, object)
0x1e0: @ self(Stack[-1])
0x1e1: Pop(0)
0x1e2: Stack[-3] = Stack[-1]
0x1e3: Return(); Pop(2)

0x1e4: Stack[-1] = 0
0x1e5: PushEmpty(float, float)
0x1e6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1e7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1e8: Push((float)0.0)
0x1e9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1eb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1ec: Return(); Pop(2)

0x1ed: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1ee: Return(); Pop(2)

0x1ef: PushEmpty(int, int)
0x1f0: @ GetVariable(Stack[-3], Stack[-1])
0x1f1: Pop(0)
0x1f2: Stack[-4] = Stack[-1]
0x1f3: Return(); Pop(2)

0x1f4: PushEmpty(object, object)
0x1f5: @ FindActor(Stack[-1], Stack[-4])
0x1f6: Pop(0)
0x1f7: Pop(0); Push((bool) Stack[-1] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-5] = (bool) 0
0x1fa: Return(); Pop(2)

0x1fb: @ Trigger(Stack[-1], Stack[-3])
0x1fc: Pop(0)
0x1fd: Stack[-5] = (bool) 1
0x1fe: Return(); Pop(2)

0x1ff: Stack[-1] = 0
0x200: PushEmpty(float, float)
0x201: @ GetGameTime(Stack[-1])
0x202: Pop(0)
0x203: Stack[-3] = Stack[-1]
0x204: Return(); Pop(2)

0x205: PushEmpty(object, object)
0x206: Push("d5q02")
0x207: Push((int) 4)
0x208: @ SetVariable(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: PushEmpty(object)
0x20b: Call 0x257

0x20c: Stack[-2] = Stack[-1]
0x20d: Pop(1)
0x20e: Push("d5q02NudeMeeting")
0x20f: Push("pt_d5q01_girl_corpse1")
0x210: Push((int) 0)
0x211: Push((int) 15364)
0x212: PushEmpty(float)
0x213: Call 0x200

0x214: Pop(0)
0x215: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(5)
0x217: PushEmpty()
0x218: Call 0x279

0x219: Pop(0)
0x21a: PushEmpty(bool, string, string)
0x21b: Stack[-2] = "quest_d5_02"
0x21c: Stack[-1] = "remove_girl"
0x21d: Call 0x1f4

0x21e: Pop(3)
0x21f: Return(); Pop(2)

0x220: Stack[-1] = 0
0x221: PushEmpty()
0x222: PushEmpty(int, string)
0x223: Stack[-1] = "d5q02"
0x224: Call 0x1ef

0x225: Pop(1)
0x226: Push((int) 3)
0x227: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-2] = (bool) 1
0x22a: Return(); Pop(0)

0x22b: Stack[-2] = (bool) 0
0x22c: Return(); Pop(0)

0x22d: PushEmpty(object, object)
0x22e: @ GetDiaryRoot(Stack[-1])
0x22f: Pop(0)
0x230: Pop(0); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: Push("Can't retrieve diary root")
0x233: @ Trace(Stack[-1])
0x234: Pop(1)
0x235: Stack[-3] = (bool) 0
0x236: Return(); Pop(2)

0x237: Stack[-3] = Stack[-1]
0x238: Return(); Pop(2)

0x239: Stack[-1] = 0
0x23a: PushEmpty(object, object, int, object, object, int)
0x23b: PushEmpty(object)
0x23c: Call 0x22d

0x23d: Stack[-4] = Stack[-1]
0x23e: Pop(1)
0x23f: @@ Find(Stack[-7], Stack[-2])
0x240: Pop(0)
0x241: Pop(0); Push((bool) Stack[-2] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x243: Push("Can't find diary parent with id: ")
0x244: Pop(1); Push(Stack[-1] + Stack[-8]);
0x245: @ Trace(Stack[-1])
0x246: Pop(1)
0x247: Stack[-9] = (bool) 0
0x248: Return(); Pop(6)

0x249: @@ AddChild(Stack[-8])
0x24a: Pop(0)
0x24b: Push("player_diary")
0x24c: Push((int) 1)
0x24d: @ SetVariable(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: @@ GetCategory(Stack[-1])
0x250: Pop(0)
0x251: @ SetDiarySection(Stack[-1])
0x252: Pop(0)
0x253: Stack[-9] = (bool) 0
0x254: Return(); Pop(6)

0x255: Stack[-2] = 0
0x256: Stack[-3] = 0
0x257: PushEmpty(object, object, object, object)
0x258: @ GetMainOutdoorScene(Stack[-2])
0x259: Pop(0)
0x25a: Pop(0); Push((bool) Stack[-2] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25c: Push("Can't find main outdoor scene")
0x25d: @ Trace(Stack[-1])
0x25e: Pop(1)
0x25f: Stack[-1] = 0
0x260: Stack[-5] = Stack[-1]
0x261: Return(); Pop(4)

0x262: @@ GetMap(Stack[-1])
0x263: Pop(0)
0x264: Stack[-5] = Stack[-1]
0x265: Return(); Pop(4)

0x266: Stack[-1] = 0
0x267: Stack[-2] = 0
0x268: PushEmpty(int, int)
0x269: Push("player")
0x26a: @ GetVariable(Stack[-1], Stack[-2])
0x26b: Pop(1)
0x26c: Push((int) 0)
0x26d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26f: Stack[-3] = (int) 200001
0x270: Return(); Pop(2)

0x271: GOTO 0x277

0x272: Push((int) 1)
0x273: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: Stack[-3] = (int) 200002
0x276: Return(); Pop(2)

0x277: Stack[-3] = (int) 200003
0x278: Return(); Pop(2)

0x279: PushEmpty(object, object)
0x27a: Push("Adding diary entry")
0x27b: @ Trace(Stack[-1])
0x27c: Pop(1)
0x27d: Push((int) 152)
0x27e: Push((int) 2)
0x27f: Push((int) 15358)
0x280: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: PushEmpty(bool, object, int)
0x283: Stack[-2] = Stack[-4]
0x284: Stack[-1] = (int) 148
0x285: Call 0x23a

0x286: Pop(3)
0x287: Return(); Pop(2)

0x288: Stack[-1] = 0
0x289: Stack[-1] = (int) 12582
0x28a: Return(); Pop(0)

0x28b: Stack[-1] = "ui/NPC_Black.png"
0x28c: Return(); Pop(0)

0x28d: Stack[-1] = (bool) 0
0x28e: Return(); Pop(0)

