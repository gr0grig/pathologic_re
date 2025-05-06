GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	RemoveStationaryActor
	player
	head
	GetPosition
	Can't retreat, distance: 
	GetEyesHeight
	ui/NPC_None.png
	ui/NPC_Black_b.png
	pt_map_eva
	ShowMap
	b4q01BoyGotoDanko
	AddMark
	playsound
	mapmark
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

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
	GetScene (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	FindDirLength (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)

RunOp = 0xf0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xfa Vars = (object)
		EVENT_7 Op = 0x13d Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x21f Vars = (int)
		EVENT_41 Op = 0x25a Vars = (object)

Events:
EVENT_41 Op = 0x3a8 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x28c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x31f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x31d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x321

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x323

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x397

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x2d0

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 530185)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 530186)
0x5a: Push((int) 31577)
0x5b: Push((int) 31576)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 530190)
0x5f: Push((int) -1)
0x60: Push((int) 31579)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x325

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x2e1

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x325

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x2e8

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x2f9

0x9f: Pop(0)
0xa0: Push((int) 31578)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x34f

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x33f

0xac: Pop(2)
0xad: Push((int) 31579)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x34f

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x35f

0xb9: Pop(2)
0xba: Push((int) 31575)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call2 0x84

0xc0: Pop(1)
0xc1: Push((int) 530185)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: Push((int) 530186)
0xc7: Push((int) 31577)
0xc8: Push((int) 31576)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 530190)
0xcc: Push((int) -1)
0xcd: Push((int) 31579)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Return(); Pop(0)

0xd1: Push((int) 31577)
0xd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd4: PushEmpty(string)
0xd5: Stack[-1] = "Neutral"
0xd6: Call2 0x84

0xd7: Pop(1)
0xd8: Push((int) 530187)
0xd9: @@ SetMessage(Stack[-1])
0xda: Pop(1)
0xdb: @@ ClearReplies()
0xdc: Pop(0)
0xdd: Push((int) 530188)
0xde: Push((int) -1)
0xdf: Push((int) 31578)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Return(); Pop(0)

0xe3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe4: PushEmpty(bool)
0xe5: Call2 0x325

0xe6: Pop(0)
0xe7: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe8: @ lshStopAnimation()
0xe9: Pop(0)
0xea: GOTO 0xed

0xeb: @ StopAnimation()
0xec: Pop(0)
0xed: Return(); Pop(0)

0xee: GOTO 0x9b

0xef: Return(); Pop(0)

0xf0: PushEmpty(float, float)
0xf1: Stack[-2] = (int) 300
0xf2: Stack[-1] = (int) 100
0xf3: Call2 0x113

0xf4: Pop(2)
0xf5: Push((int) 3)
0xf6: @ Sleep(Stack[-1])
0xf7: Pop(1)
0xf8: GOTO 0xf0

0xf9: Return(); Pop(0)

0xfa: PushEmpty(object, object)
0xfb: PushEmpty()
0xfc: Call2 0x154

0xfd: Pop(0)
0xfe: PushEmpty(int, object)
0xff: Stack[-1] = Stack[-5]
0x100: Push(-2, 1); TaskCall(0)
0x101: Call2 0x0

0x102: Pop(-2, 1); TaskReturn
0x103: Pop(2)
0x104: @ GetScene(Stack[-1])
0x105: Pop(0)
0x106: PushEmpty(object)
0x107: Call2 0x300

0x108: Pop(0)
0x109: @@ RemoveStationaryActor(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(object)
0x10c: Stack[-1] = Stack[-4]
0x10d: Push(-1, 3); TaskCall(3)
0x10e: Call2 0x1d6

0x10f: Pop(-1, 3); TaskReturn
0x110: Pop(1)
0x111: Return(); Pop(2)

0x112: Stack[-1] = 0
0x113: PushEmpty()
0x114: PushEmpty(bool)
0x115: Call2 0x287

0x116: Pop(0)
0x117: Pop(1); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: Return(); Pop(0)

0x11a: Push("player")
0x11b: @ FindActor(Stack[-4], Stack[-1])
0x11c: Pop(1)
0x11d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x11e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x11f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x120: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x121: Push((int) 10)
0x122: Push((float)1.0)
0x123: @ SetTimer(Stack[-2], Stack[-1])
0x124: Pop(2)
0x125: PushEmpty()
0x126: Call2 0x162

0x127: Pop(0)
0x128: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12a: Push((int) 10)
0x12b: @ KillTimer(Stack[-1])
0x12c: Pop(1)
0x12d: Return(); Pop(0)

0x12e: PushEmpty(float, float)
0x12f: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x131: Stack[-3] = (bool) 0
0x132: Return(); Pop(2)

0x133: PushEmpty(float, object)
0x134: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x135: Call2 0x27f

0x136: Pop(1)
0x137: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x138: Push( Stack[2 + Tasks[-1].StackPointer] )
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x13b: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x13c: Return(); Pop(2)

0x13d: PushEmpty()
0x13e: Push((int) 10)
0x13f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x141: PushEmpty(bool)
0x142: Call2 0x12e

0x143: Pop(0)
0x144: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x145: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: PushEmpty(object)
0x148: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x149: Call2 0x2ee

0x14a: Pop(1)
0x14b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x14c: GOTO 0x153

0x14d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14f: Push("head")
0x150: @ UnlookAsync(Stack[-1])
0x151: Pop(1)
0x152: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: Call2 0x1b3

0x156: Pop(0)
0x157: Push((int) 10)
0x158: @ KillTimer(Stack[-1])
0x159: Pop(1)
0x15a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x15b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15c: Push("head")
0x15d: @ UnlookAsync(Stack[-1])
0x15e: Pop(1)
0x15f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x160: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x161: Return(); Pop(0)

0x162: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x163: @ WaitForAnimEnd()
0x164: Pop(0)
0x165: PushEmpty(bool)
0x166: Call2 0x287

0x167: Pop(0)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Return(); Pop(14)

0x16b: PushEmpty(int)
0x16c: Call2 0x32e

0x16d: Stack[-8] = Stack[-1]
0x16e: Pop(1)
0x16f: Stack[-6] = (int) 0
0x170: PushEmpty(bool)
0x171: Stack[-1] = (bool) 0
0x172: Push((int) 5)
0x173: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: PushEmpty(bool)
0x176: Call2 0x287

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Stack[-1] = (bool) 1
0x17a: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x17b: Push((int) 3)
0x17c: @ irand(Stack[-6], Stack[-1])
0x17d: Pop(1)
0x17e: Push((int) 0)
0x17f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x181: Push(Stack[-7])
0x182: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x183: @ irand(Stack[-4], Stack[-7])
0x184: Pop(0)
0x185: Push("all")
0x186: PushEmpty(string, int)
0x187: Stack[-1] = Stack[-7]
0x188: Call2 0x327

0x189: Pop(1)
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: @ WaitForAnimEnd(Stack[-3])
0x18d: Pop(0)
0x18e: Pop(0); Push((bool) Stack[-3] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: GOTO 0x1ae

0x191: GOTO 0x1a3

0x192: Push((int) 1)
0x193: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x195: Push((int) 4)
0x196: @ rand(Stack[-3], Stack[-1])
0x197: Pop(1)
0x198: Push((int) 1)
0x199: Pop(1); Push(Stack[-3] + Stack[-1]);
0x19a: @ Sleep(Stack[-1], Stack[-2])
0x19b: Pop(1)
0x19c: Pop(0); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: GOTO 0x1ae

0x19f: GOTO 0x1a3

0x1a0: Push(Stack[-6])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: GOTO 0x1ae

0x1a3: PushEmpty(bool)
0x1a4: Call2 0x1b1

0x1a5: Pop(0)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: GOTO 0x1ae

0x1a9: @ ResetAAS()
0x1aa: Pop(0)
0x1ab: Push((int) 1)
0x1ac: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ad: GOTO 0x170

0x1ae: @ ResetAAS()
0x1af: Pop(0)
0x1b0: Return(); Pop(14)

0x1b1: Stack[-1] = (bool) 1
0x1b2: Return(); Pop(0)

0x1b3: @ StopAnimation()
0x1b4: Pop(0)
0x1b5: @ StopGroup0()
0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1b9: @ GetPosition(Stack[-6])
0x1ba: Pop(0)
0x1bb: @@ GetPosition(Stack[-5])
0x1bc: Pop(0)
0x1bd: @ GetDirection(Stack[-4])
0x1be: Pop(0)
0x1bf: PushEmpty(cvector, cvector)
0x1c0: PushEmpty(cvector, cvector)
0x1c1: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x1c2: Call2 0x306

0x1c3: Pop(1)
0x1c4: Push((float)0.75)
0x1c5: Pop(1); Push(Stack[-8] * Stack[-1]);
0x1c6: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1c7: Call2 0x306

0x1c8: Stack[-5] = Stack[-2]
0x1c9: Pop(2)
0x1ca: Push((int) 32)
0x1cb: Push((float)7000.0)
0x1cc: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Push((int) 100)
0x1cf: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1d0: Push((int) 0)
0x1d1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: Stack[-1] = (int) 0
0x1d4: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x1d5: Return(); Pop(12)

0x1d6: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x1d7: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x1d8: PushEmpty(cvector, float)
0x1d9: Stack[-1] = (float) 1.74533
0x1da: Call2 0x1b8

0x1db: Stack[-7] = Stack[-2]
0x1dc: Pop(2)
0x1dd: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1de: Push((float)2500.0)
0x1df: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e1: PushEmpty(cvector, float)
0x1e2: Stack[-1] = (float) 2.61799
0x1e3: Call2 0x1b8

0x1e4: Stack[-7] = Stack[-2]
0x1e5: Pop(2)
0x1e6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1e7: Push((float)2500.0)
0x1e8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ea: Push("Can't retreat, distance: ")
0x1eb: Pop(0); Push(Sqrt(Stack[-5]))
0x1ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ed: @ Trace(Stack[-1])
0x1ee: Pop(1)
0x1ef: Push((float)0.5)
0x1f0: @ Sleep(Stack[-1])
0x1f1: Pop(1)
0x1f2: Return(); Pop(10)

0x1f3: Push(CvectorIndex(Stack[-5], 0))
0x1f4: Push(CvectorIndex(Stack[-6], 2))
0x1f5: @ Rotate(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: PushEmpty(cvector)
0x1f8: Call2 0x273

0x1f9: Pop(0)
0x1fa: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x1fb: Push((int) 120)
0x1fc: Push((float)0.5)
0x1fd: @ SetTimer(Stack[-2], Stack[-1])
0x1fe: Pop(2)
0x1ff: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x200: Push((int) 1)
0x201: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x202: Pop(1)
0x203: Push(Stack[-3])
0x204: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x205: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: GOTO 0x21e

0x208: GOTO 0x21c

0x209: PushEmpty(cvector, float)
0x20a: Stack[-1] = (float) 2.61799
0x20b: Call2 0x1b8

0x20c: Stack[-4] = Stack[-2]
0x20d: Pop(2)
0x20e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x20f: Push((float)2500.0)
0x210: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x212: PushEmpty(cvector)
0x213: Call2 0x273

0x214: Pop(0)
0x215: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x216: Push((int) 120)
0x217: Push((float)0.5)
0x218: @ SetTimer(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: GOTO 0x21c

0x21b: GOTO 0x21e

0x21c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x21e: Return(); Pop(10)

0x21f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x220: Push((int) 120)
0x221: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Return(); Pop(8)

0x224: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x226: @ Stop()
0x227: Pop(0)
0x228: Push((int) 1)
0x229: @ KillTimer(Stack[-1])
0x22a: Pop(1)
0x22b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x22c: GOTO 0x252

0x22d: @ GetDirection(Stack[-4])
0x22e: Pop(0)
0x22f: Push((float)7000.0)
0x230: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x231: Pop(1)
0x232: PushEmpty(cvector, float)
0x233: Stack[-1] = (float) 1.74533
0x234: Call2 0x1b8

0x235: Stack[-4] = Stack[-2]
0x236: Pop(2)
0x237: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x238: PushEmpty(bool)
0x239: Stack[-1] = (bool) 0
0x23a: Push((float)2500.0)
0x23b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 1
0x23f: Pop(0); Push(Stack[-5] * Stack[-5]);
0x240: Push((float)2.25)
0x241: Pop(2); Push(Stack[-2] * Stack[-1]);
0x242: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x244: PushEmpty(bool)
0x245: Call2 0x263

0x246: Pop(0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Stack[-1] = (bool) 0
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: Stack[-1] = (bool) 1
0x24b: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24c: @ Stop()
0x24d: Pop(0)
0x24e: PushEmpty(cvector)
0x24f: Call2 0x273

0x250: Pop(0)
0x251: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x252: Return(); Pop(8)

0x253: @ Stop()
0x254: Pop(0)
0x255: Push((int) 120)
0x256: @ KillTimer(Stack[-1])
0x257: Pop(1)
0x258: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: PushEmpty()
0x25c: Call2 0x253

0x25d: Pop(0)
0x25e: PushEmpty(object)
0x25f: Stack[-1] = Stack[-2]
0x260: Call2 0x3a8

0x261: Pop(1)
0x262: Return(); Pop(0)

0x263: PushEmpty(cvector, cvector, cvector, cvector)
0x264: @ GetDirection(Stack[-2])
0x265: Pop(0)
0x266: PushEmpty(cvector, object)
0x267: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x268: Call2 0x278

0x269: Stack[-3] = Stack[-2]
0x26a: Pop(2)
0x26b: PushEmpty(float, cvector, cvector)
0x26c: Stack[-2] = Stack[-5]
0x26d: Stack[-1] = Stack[-4]
0x26e: Call2 0x310

0x26f: Pop(2)
0x270: Push((float)-0.34202)
0x271: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x272: Return(); Pop(4)

0x273: PushEmpty(cvector, cvector)
0x274: @ GetPosition(Stack[-1])
0x275: Pop(0)
0x276: Stack[-3] = Stack[-1]
0x277: Return(); Pop(2)

0x278: PushEmpty(cvector, cvector, cvector, cvector)
0x279: @ GetPosition(Stack[-2])
0x27a: Pop(0)
0x27b: @@ GetPosition(Stack[-1])
0x27c: Pop(0)
0x27d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x27e: Return(); Pop(4)

0x27f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x280: @ GetPosition(Stack[-3])
0x281: Pop(0)
0x282: @@ GetPosition(Stack[-2])
0x283: Pop(0)
0x284: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x285: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x286: Return(); Pop(6)

0x287: PushEmpty(bool, bool)
0x288: @ IsLoaded(Stack[-1])
0x289: Pop(0)
0x28a: Stack[-3] = Stack[-1]
0x28b: Return(); Pop(2)

0x28c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28d: @@ GetPosition(Stack[-8])
0x28e: Pop(0)
0x28f: @@ GetEyesHeight(Stack[-9])
0x290: Pop(0)
0x291: Push(CvectorIndex(Stack[-8], 1))
0x292: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x293: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x294: @ GetPosition(Stack[-7])
0x295: Pop(0)
0x296: @ GetEyesHeight(Stack[-9])
0x297: Pop(0)
0x298: Push(CvectorIndex(Stack[-7], 1))
0x299: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x29b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x29c: Push(CvectorIndex(Stack[-6], 1))
0x29d: Stack[-1] = (int) 0
0x29e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a0: Pop(1); Push(Sqrt(Stack[-1]))
0x2a1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a2: Stack[-5] = -Stack[-6]; Pop(0);
0x2a3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a4: PushEmpty(cvector, cvector)
0x2a5: Push(CVector(0.0, 1.0, 0.0))
0x2a6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a7: Call2 0x306

0x2a8: Pop(1)
0x2a9: Push((int) 25)
0x2aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ac: Push(CVector(0.0, 10.0, 0.0))
0x2ad: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ae: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2af: @ IsOverrideActive(Stack[-2])
0x2b0: Pop(0)
0x2b1: Push(Stack[-2])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-21] = (bool) 0
0x2b4: Return(); Pop(18)

0x2b5: @ StopWorld()
0x2b6: Pop(0)
0x2b7: @ CameraTransit(Stack[-3], Stack[-5])
0x2b8: Pop(0)
0x2b9: Push(CvectorIndex(Stack[-4], 0))
0x2ba: Push(CvectorIndex(Stack[-5], 2))
0x2bb: @ Rotate(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: PushEmpty(bool)
0x2be: Call2 0x325

0x2bf: Pop(0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2ca

0x2c2: Push("head")
0x2c3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c4: Pop(1)
0x2c5: Push(Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: Push("head")
0x2c8: @ LookAsyncCamera(Stack[-1])
0x2c9: Pop(1)
0x2ca: @ CameraWaitForPlayFinish()
0x2cb: Pop(0)
0x2cc: @ ResumeWorld()
0x2cd: Pop(0)
0x2ce: Stack[-21] = (bool) 1
0x2cf: Return(); Pop(18)

0x2d0: PushEmpty(bool, bool)
0x2d1: @ CameraSwitchToNormal()
0x2d2: Pop(0)
0x2d3: PushEmpty(bool)
0x2d4: Call2 0x325

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2e0

0x2d8: Push("head")
0x2d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Push(Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: Push("head")
0x2de: @ UnlookAsync(Stack[-1])
0x2df: Pop(1)
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty(float, float, float, float)
0x2e2: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2e3: Pop(0)
0x2e4: Push((bool) 0)
0x2e5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(1)
0x2e7: Return(); Pop(4)

0x2e8: PushEmpty(float, float, float, float)
0x2e9: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2ea: Pop(0)
0x2eb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2ec: Pop(0)
0x2ed: Return(); Pop(4)

0x2ee: PushEmpty(float, cvector, float, cvector)
0x2ef: @@ GetEyesHeight(Stack[-2])
0x2f0: Pop(0)
0x2f1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2f2: Push(CvectorIndex(Stack[-1], 1))
0x2f3: Stack[-1] = Stack[-3]
0x2f4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f5: Push("head")
0x2f6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f7: Pop(1)
0x2f8: Return(); Pop(4)

0x2f9: PushEmpty(bool)
0x2fa: Call2 0x325

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fd: @ lshStopSpeech()
0x2fe: Pop(0)
0x2ff: Return(); Pop(0)

0x300: PushEmpty(object, object)
0x301: @ self(Stack[-1])
0x302: Pop(0)
0x303: Stack[-3] = Stack[-1]
0x304: Return(); Pop(2)

0x305: Stack[-1] = 0
0x306: PushEmpty(float, float)
0x307: Pop(0); Push(Stack[-3] | Stack[-3]);
0x308: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x309: Push((float)0.0)
0x30a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x30d: Return(); Pop(2)

0x30e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30f: Return(); Pop(2)

0x310: PushEmpty()
0x311: Pop(0); Push(Stack[-2] | Stack[-1]);
0x312: Pop(0); Push(Stack[-3] | Stack[-3]);
0x313: Pop(0); Push(Stack[-3] | Stack[-3]);
0x314: Pop(2); Push(Stack[-2] * Stack[-1]);
0x315: Pop(1); Push(Sqrt(Stack[-1]))
0x316: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x317: Return(); Pop(0)

0x318: PushEmpty(float, float)
0x319: @ GetGameTime(Stack[-1])
0x31a: Pop(0)
0x31b: Stack[-3] = Stack[-1]
0x31c: Return(); Pop(2)

0x31d: Stack[-1] = (int) 515558
0x31e: Return(); Pop(0)

0x31f: Stack[-1] = (int) 503343
0x320: Return(); Pop(0)

0x321: Stack[-1] = "ui/NPC_None.png"
0x322: Return(); Pop(0)

0x323: Stack[-1] = "ui/NPC_Black_b.png"
0x324: Return(); Pop(0)

0x325: Stack[-1] = (bool) 0
0x326: Return(); Pop(0)

0x327: PushEmpty(string, string)
0x328: Stack[-1] = "idle"
0x329: Push(Stack[-3])
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x32c: Stack[-4] = Stack[-1]
0x32d: Return(); Pop(2)

0x32e: PushEmpty(int, bool, int, bool)
0x32f: Stack[-2] = (int) 0
0x330: Push("all")
0x331: PushEmpty(string, int)
0x332: Stack[-1] = Stack[-5]
0x333: Call2 0x327

0x334: Pop(1)
0x335: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: Pop(0); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33d

0x33a: Push((int) 1)
0x33b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33c: GOTO 0x330

0x33d: Stack[-5] = Stack[-2]
0x33e: Return(); Pop(4)

0x33f: PushEmpty()
0x340: PushEmpty(object, string, float)
0x341: PushEmpty(object)
0x342: Call2 0x365

0x343: Stack[-4] = Stack[-1]
0x344: Pop(1)
0x345: Stack[-2] = "pt_map_eva"
0x346: Stack[-1] = (int) 2
0x347: Call2 0x376

0x348: Pop(3)
0x349: PushEmpty(object)
0x34a: Call2 0x365

0x34b: Pop(0)
0x34c: @@ ShowMap(Stack[-1])
0x34d: Pop(1)
0x34e: Return(); Pop(0)

0x34f: PushEmpty(object, object)
0x350: PushEmpty(object)
0x351: Call2 0x365

0x352: Stack[-2] = Stack[-1]
0x353: Pop(1)
0x354: Push("b4q01BoyGotoDanko")
0x355: Push("pt_map_eva")
0x356: Push((int) 3)
0x357: Push((int) 530189)
0x358: PushEmpty(float)
0x359: Call2 0x318

0x35a: Pop(0)
0x35b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(5)
0x35d: Return(); Pop(2)

0x35e: Stack[-1] = 0
0x35f: PushEmpty()
0x360: Push("playsound")
0x361: Push("mapmark")
0x362: @ TriggerWorld(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: Return(); Pop(0)

0x365: PushEmpty(object, object, object, object)
0x366: @ GetMainOutdoorScene(Stack[-2])
0x367: Pop(0)
0x368: Pop(0); Push((bool) Stack[-2] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: Push("Can't find main outdoor scene")
0x36b: @ Trace(Stack[-1])
0x36c: Pop(1)
0x36d: Stack[-1] = 0
0x36e: Stack[-5] = Stack[-1]
0x36f: Return(); Pop(4)

0x370: @@ GetMap(Stack[-1])
0x371: Pop(0)
0x372: Stack[-5] = Stack[-1]
0x373: Return(); Pop(4)

0x374: Stack[-1] = 0
0x375: Stack[-2] = 0
0x376: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x377: @ GetMainOutdoorScene(Stack[-2])
0x378: Pop(0)
0x379: Pop(0); Push((bool) Stack[-2] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37b: Push("Can't find main outdoor scene")
0x37c: @ Trace(Stack[-1])
0x37d: Pop(1)
0x37e: Return(); Pop(8)

0x37f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x380: Pop(0)
0x381: Pop(0); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: Push("Warning: outdoor scene locator ")
0x384: Pop(1); Push(Stack[-1] + Stack[-11]);
0x385: Push(" doesnt exist")
0x386: Pop(2); Push(Stack[-2] + Stack[-1]);
0x387: @ Trace(Stack[-1])
0x388: Pop(1)
0x389: @@ GetMap(Stack[-11])
0x38a: Pop(0)
0x38b: Pop(0); Push((bool) Stack[-11] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38d: Push("Can't find map")
0x38e: @ Trace(Stack[-1])
0x38f: Pop(1)
0x390: Return(); Pop(8)

0x391: Push(CvectorIndex(Stack[-4], 0))
0x392: Push(CvectorIndex(Stack[-5], 2))
0x393: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x394: Pop(2)
0x395: Return(); Pop(8)

0x396: Stack[-2] = 0
0x397: PushEmpty(int, int)
0x398: Push("branch")
0x399: @ GetVariable(Stack[-1], Stack[-2])
0x39a: Pop(1)
0x39b: Push((int) 0)
0x39c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39e: Stack[-3] = (int) 1
0x39f: Return(); Pop(2)

0x3a0: GOTO 0x3a6

0x3a1: Push((int) 1)
0x3a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: Stack[-3] = (int) 2
0x3a5: Return(); Pop(2)

0x3a6: Stack[-3] = (int) 3
0x3a7: Return(); Pop(2)

0x3a8: PushEmpty()
0x3a9: Return(); Pop(0)

