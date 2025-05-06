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
	retreat
	player
	head
	RemoveStationaryActor
	GetPosition
	Can't retreat, distance: 
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	fhit
	bhit
	hit_react
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	oob5GathererWife1
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	b5q01NudeDead
	quest_b5_01
	gwife_dead

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
	SignalDeath (1 args)
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
	GetScene (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	FindDirLength (3 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)

RunOp = 0x16e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x178 Vars = (object)
		EVENT_17 Op = 0x183 Vars = (object)
		EVENT_26 Op = 0x187 Vars = (string)
		EVENT_7 Op = 0x1be Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 0
		EVENT_17 Op = 0x24e Vars = (object)
		EVENT_7 Op = 0x2b9 Vars = (int)
		EVENT_41 Op = 0x2f4 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x31c Vars = (object)
		EVENT_22 Op = 0x39b Vars = (object, int, float, float)
		EVENT_16 Op = 0x39d Vars = (object, string)
		EVENT_41 Op = 0x39f Vars = (object)

Events:
EVENT_22 Op = 0x588 Vars = (object, int, float, float)
EVENT_43 Op = 0x590 Vars = (object, int, float, float, cvector, cvector)
EVENT_41 Op = 0x59a Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x43f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x567

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x565

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x569

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x56b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x541

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
0x41: Call2 0x483

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x535

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x52f

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 518656)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 518795)
0x64: Push((int) 19900)
0x65: Push((int) 19898)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 518796)
0x69: Push((int) 19900)
0x6a: Push((int) 19899)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 518660)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 518661)
0x78: Push((int) -1)
0x79: Push((int) 19753)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 518800)
0x7d: Push((int) -1)
0x7e: Push((int) 19903)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x56d

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x494

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x56d

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x4a4

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x4be

0xbd: Pop(0)
0xbe: Push((int) 19748)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x535

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x52f

0xca: Pop(2)
0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0xa2

0xce: Pop(1)
0xcf: Push((int) 518656)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 518795)
0xd5: Push((int) 19900)
0xd6: Push((int) 19898)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 518796)
0xda: Push((int) 19900)
0xdb: Push((int) 19899)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call2 0xa2

0xe2: Pop(1)
0xe3: Push((int) 518660)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 518661)
0xe9: Push((int) -1)
0xea: Push((int) 19753)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 518800)
0xee: Push((int) -1)
0xef: Push((int) 19903)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 19900)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa2

0xf9: Pop(1)
0xfa: Push((int) 518797)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 518799)
0x100: Push((int) 19750)
0x101: Push((int) 19902)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 518798)
0x105: Push((int) 19907)
0x106: Push((int) 19901)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 19907)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xa2

0x110: Pop(1)
0x111: Push((int) 518804)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 518805)
0x117: Push((int) 19750)
0x118: Push((int) 19908)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 518806)
0x11c: Push((int) -1)
0x11d: Push((int) 19909)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 19750)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call2 0xa2

0x127: Pop(1)
0x128: Push((int) 518658)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 518659)
0x12e: Push((int) 19904)
0x12f: Push((int) 19751)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 518802)
0x133: Push((int) -1)
0x134: Push((int) 19905)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 19904)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call2 0xa2

0x13e: Pop(1)
0x13f: Push((int) 518801)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 518807)
0x145: Push((int) 19911)
0x146: Push((int) 19910)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 19911)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral"
0x14f: Call2 0xa2

0x150: Pop(1)
0x151: Push((int) 518808)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 518809)
0x157: Push((int) -1)
0x158: Push((int) 19914)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 518810)
0x15c: Push((int) -1)
0x15d: Push((int) 19915)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x162: PushEmpty(bool)
0x163: Call2 0x56d

0x164: Pop(0)
0x165: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x166: @ lshStopAnimation()
0x167: Pop(0)
0x168: GOTO 0x16b

0x169: @ StopAnimation()
0x16a: Pop(0)
0x16b: Return(); Pop(0)

0x16c: GOTO 0xb9

0x16d: Return(); Pop(0)

0x16e: PushEmpty(float, float)
0x16f: Stack[-2] = (int) 300
0x170: Stack[-1] = (int) 100
0x171: Call2 0x194

0x172: Pop(2)
0x173: Push((int) 3)
0x174: @ Sleep(Stack[-1])
0x175: Pop(1)
0x176: GOTO 0x16e

0x177: Return(); Pop(0)

0x178: PushEmpty()
0x179: PushEmpty()
0x17a: Call2 0x1d5

0x17b: Pop(0)
0x17c: PushEmpty(int, object)
0x17d: Stack[-1] = Stack[-3]
0x17e: Push(-2, 1); TaskCall(0)
0x17f: Call2 0x0

0x180: Pop(-2, 1); TaskReturn
0x181: Pop(2)
0x182: Return(); Pop(0)

0x183: PushEmpty()
0x184: @ SignalDeath(Stack[-1])
0x185: Pop(0)
0x186: Return(); Pop(0)

0x187: PushEmpty()
0x188: Push("retreat")
0x189: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18b: PushEmpty()
0x18c: Call2 0x1d5

0x18d: Pop(0)
0x18e: PushEmpty()
0x18f: Push(-0, 3); TaskCall(3)
0x190: Call2 0x239

0x191: Pop(-0, 3); TaskReturn
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: PushEmpty()
0x195: PushEmpty(bool)
0x196: Call2 0x43a

0x197: Pop(0)
0x198: Pop(1); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Return(); Pop(0)

0x19b: Push("player")
0x19c: @ FindActor(Stack[-4], Stack[-1])
0x19d: Pop(1)
0x19e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a2: Push((int) 10)
0x1a3: Push((float)1.0)
0x1a4: @ SetTimer(Stack[-2], Stack[-1])
0x1a5: Pop(2)
0x1a6: PushEmpty()
0x1a7: Call2 0x1e3

0x1a8: Pop(0)
0x1a9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ab: Push((int) 10)
0x1ac: @ KillTimer(Stack[-1])
0x1ad: Pop(1)
0x1ae: Return(); Pop(0)

0x1af: PushEmpty(float, float)
0x1b0: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: Stack[-3] = (bool) 0
0x1b3: Return(); Pop(2)

0x1b4: PushEmpty(float, object)
0x1b5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b6: Call2 0x3ad

0x1b7: Pop(1)
0x1b8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1bc: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1bd: Return(); Pop(2)

0x1be: PushEmpty()
0x1bf: Push((int) 10)
0x1c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c2: PushEmpty(bool)
0x1c3: Call2 0x1af

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(object)
0x1c9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ca: Call2 0x4b3

0x1cb: Pop(1)
0x1cc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1cd: GOTO 0x1d4

0x1ce: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d0: Push("head")
0x1d1: @ UnlookAsync(Stack[-1])
0x1d2: Pop(1)
0x1d3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Call2 0x234

0x1d7: Pop(0)
0x1d8: Push((int) 10)
0x1d9: @ KillTimer(Stack[-1])
0x1da: Pop(1)
0x1db: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dd: Push("head")
0x1de: @ UnlookAsync(Stack[-1])
0x1df: Pop(1)
0x1e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e4: @ WaitForAnimEnd()
0x1e5: Pop(0)
0x1e6: PushEmpty(bool)
0x1e7: Call2 0x43a

0x1e8: Pop(0)
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Return(); Pop(14)

0x1ec: PushEmpty(int)
0x1ed: Call2 0x51e

0x1ee: Stack[-8] = Stack[-1]
0x1ef: Pop(1)
0x1f0: Stack[-6] = (int) 0
0x1f1: PushEmpty(bool)
0x1f2: Stack[-1] = (bool) 0
0x1f3: Push((int) 5)
0x1f4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(bool)
0x1f7: Call2 0x43a

0x1f8: Pop(0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Stack[-1] = (bool) 1
0x1fb: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x1fc: Push((int) 3)
0x1fd: @ irand(Stack[-6], Stack[-1])
0x1fe: Pop(1)
0x1ff: Push((int) 0)
0x200: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x202: Push(Stack[-7])
0x203: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x204: @ irand(Stack[-4], Stack[-7])
0x205: Pop(0)
0x206: Push("all")
0x207: PushEmpty(string, int)
0x208: Stack[-1] = Stack[-7]
0x209: Call2 0x517

0x20a: Pop(1)
0x20b: @ PlayAnimation(Stack[-2], Stack[-1])
0x20c: Pop(2)
0x20d: @ WaitForAnimEnd(Stack[-3])
0x20e: Pop(0)
0x20f: Pop(0); Push((bool) Stack[-3] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x22f

0x212: GOTO 0x224

0x213: Push((int) 1)
0x214: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x216: Push((int) 4)
0x217: @ rand(Stack[-3], Stack[-1])
0x218: Pop(1)
0x219: Push((int) 1)
0x21a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x21b: @ Sleep(Stack[-1], Stack[-2])
0x21c: Pop(1)
0x21d: Pop(0); Push((bool) Stack[-1] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: GOTO 0x22f

0x220: GOTO 0x224

0x221: Push(Stack[-6])
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x22f

0x224: PushEmpty(bool)
0x225: Call2 0x232

0x226: Pop(0)
0x227: Pop(1); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x22f

0x22a: @ ResetAAS()
0x22b: Pop(0)
0x22c: Push((int) 1)
0x22d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x22e: GOTO 0x1f1

0x22f: @ ResetAAS()
0x230: Pop(0)
0x231: Return(); Pop(14)

0x232: Stack[-1] = (bool) 1
0x233: Return(); Pop(0)

0x234: @ StopAnimation()
0x235: Pop(0)
0x236: @ StopGroup0()
0x237: Pop(0)
0x238: Return(); Pop(0)

0x239: PushEmpty(object, object)
0x23a: @ GetScene(Stack[-1])
0x23b: Pop(0)
0x23c: PushEmpty(object)
0x23d: Call2 0x4ee

0x23e: Pop(0)
0x23f: @@ RemoveStationaryActor(Stack[-1])
0x240: Pop(1)
0x241: PushEmpty(object)
0x242: PushEmpty(object)
0x243: Call2 0x3b5

0x244: Stack[-2] = Stack[-1]
0x245: Pop(1)
0x246: Call2 0x270

0x247: Pop(1)
0x248: Push((int) 1)
0x249: @ Sleep(Stack[-1])
0x24a: Pop(1)
0x24b: GOTO 0x241

0x24c: Return(); Pop(2)

0x24d: Stack[-1] = 0
0x24e: PushEmpty()
0x24f: @ SignalDeath(Stack[-1])
0x250: Pop(0)
0x251: Return(); Pop(0)

0x252: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x253: @ GetPosition(Stack[-6])
0x254: Pop(0)
0x255: @@ GetPosition(Stack[-5])
0x256: Pop(0)
0x257: @ GetDirection(Stack[-4])
0x258: Pop(0)
0x259: PushEmpty(cvector, cvector)
0x25a: PushEmpty(cvector, cvector)
0x25b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x25c: Call2 0x4f4

0x25d: Pop(1)
0x25e: Push((float)0.75)
0x25f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x260: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x261: Call2 0x4f4

0x262: Stack[-5] = Stack[-2]
0x263: Pop(2)
0x264: Push((int) 32)
0x265: Push((float)7000.0)
0x266: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: Push((int) 100)
0x269: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x26a: Push((int) 0)
0x26b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: Stack[-1] = (int) 0
0x26e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x26f: Return(); Pop(12)

0x270: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x271: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x272: PushEmpty(cvector, float)
0x273: Stack[-1] = (float) 1.74533
0x274: Call2 0x252

0x275: Stack[-7] = Stack[-2]
0x276: Pop(2)
0x277: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x278: Push((float)2500.0)
0x279: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x27b: PushEmpty(cvector, float)
0x27c: Stack[-1] = (float) 2.61799
0x27d: Call2 0x252

0x27e: Stack[-7] = Stack[-2]
0x27f: Pop(2)
0x280: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x281: Push((float)2500.0)
0x282: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x284: Push("Can't retreat, distance: ")
0x285: Pop(0); Push(Sqrt(Stack[-5]))
0x286: Pop(2); Push(Stack[-2] + Stack[-1]);
0x287: @ Trace(Stack[-1])
0x288: Pop(1)
0x289: Push((float)0.5)
0x28a: @ Sleep(Stack[-1])
0x28b: Pop(1)
0x28c: Return(); Pop(10)

0x28d: Push(CvectorIndex(Stack[-5], 0))
0x28e: Push(CvectorIndex(Stack[-6], 2))
0x28f: @ Rotate(Stack[-2], Stack[-1])
0x290: Pop(2)
0x291: PushEmpty(cvector)
0x292: Call2 0x3a1

0x293: Pop(0)
0x294: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x295: Push((int) 120)
0x296: Push((float)0.5)
0x297: @ SetTimer(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x29a: Push((int) 1)
0x29b: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x29c: Pop(1)
0x29d: Push(Stack[-3])
0x29e: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x29f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: GOTO 0x2b8

0x2a2: GOTO 0x2b6

0x2a3: PushEmpty(cvector, float)
0x2a4: Stack[-1] = (float) 2.61799
0x2a5: Call2 0x252

0x2a6: Stack[-4] = Stack[-2]
0x2a7: Pop(2)
0x2a8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2a9: Push((float)2500.0)
0x2aa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2ac: PushEmpty(cvector)
0x2ad: Call2 0x3a1

0x2ae: Pop(0)
0x2af: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2b0: Push((int) 120)
0x2b1: Push((float)0.5)
0x2b2: @ SetTimer(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: GOTO 0x2b6

0x2b5: GOTO 0x2b8

0x2b6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x2b8: Return(); Pop(10)

0x2b9: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2ba: Push((int) 120)
0x2bb: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: Return(); Pop(8)

0x2be: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c0: @ Stop()
0x2c1: Pop(0)
0x2c2: Push((int) 1)
0x2c3: @ KillTimer(Stack[-1])
0x2c4: Pop(1)
0x2c5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2c6: GOTO 0x2ec

0x2c7: @ GetDirection(Stack[-4])
0x2c8: Pop(0)
0x2c9: Push((float)7000.0)
0x2ca: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2cb: Pop(1)
0x2cc: PushEmpty(cvector, float)
0x2cd: Stack[-1] = (float) 1.74533
0x2ce: Call2 0x252

0x2cf: Stack[-4] = Stack[-2]
0x2d0: Pop(2)
0x2d1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2d2: PushEmpty(bool)
0x2d3: Stack[-1] = (bool) 0
0x2d4: Push((float)2500.0)
0x2d5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d7: PushEmpty(bool)
0x2d8: Stack[-1] = (bool) 1
0x2d9: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2da: Push((float)2.25)
0x2db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2dc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: PushEmpty(bool)
0x2df: Call2 0x2fd

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: Stack[-1] = (bool) 0
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: Stack[-1] = (bool) 1
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: @ Stop()
0x2e7: Pop(0)
0x2e8: PushEmpty(cvector)
0x2e9: Call2 0x3a1

0x2ea: Pop(0)
0x2eb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2ec: Return(); Pop(8)

0x2ed: @ Stop()
0x2ee: Pop(0)
0x2ef: Push((int) 120)
0x2f0: @ KillTimer(Stack[-1])
0x2f1: Pop(1)
0x2f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: PushEmpty()
0x2f6: Call2 0x2ed

0x2f7: Pop(0)
0x2f8: PushEmpty(object)
0x2f9: Stack[-1] = Stack[-2]
0x2fa: Call2 0x59a

0x2fb: Pop(1)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty(cvector, cvector, cvector, cvector)
0x2fe: @ GetDirection(Stack[-2])
0x2ff: Pop(0)
0x300: PushEmpty(cvector, object)
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call2 0x3a6

0x303: Stack[-3] = Stack[-2]
0x304: Pop(2)
0x305: PushEmpty(float, cvector, cvector)
0x306: Stack[-2] = Stack[-5]
0x307: Stack[-1] = Stack[-4]
0x308: Call2 0x4fe

0x309: Pop(2)
0x30a: Push((float)-0.34202)
0x30b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x30c: Return(); Pop(4)

0x30d: PushEmpty()
0x30e: EventDisable(0)
0x30f: PushEmpty(object)
0x310: Stack[-1] = Stack[-2]
0x311: Call2 0x326

0x312: Pop(1)
0x313: Push((int) 50)
0x314: Push((int) 40)
0x315: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: EventEnable(0)
0x318: @ Hold()
0x319: Pop(0)
0x31a: GOTO 0x318

0x31b: Return(); Pop(0)

0x31c: PushEmpty(bool, bool)
0x31d: @ IsOverrideActive(Stack[-1])
0x31e: Pop(0)
0x31f: Pop(0); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x321: PushEmpty(object)
0x322: Stack[-1] = Stack[-4]
0x323: Call2 0x558

0x324: Pop(1)
0x325: Return(); Pop(2)

0x326: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x327: Pop(0); Push((bool) Stack[-21] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "fdie"
0x32b: Call2 0x381

0x32c: Pop(1)
0x32d: GOTO 0x380

0x32e: @@ GetPosition(Stack[-10])
0x32f: Pop(0)
0x330: @ GetPosition(Stack[-9])
0x331: Pop(0)
0x332: @ GetDirection(Stack[-8])
0x333: Pop(0)
0x334: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x335: Push(CvectorIndex(Stack[-7], 0))
0x336: Push(CvectorIndex(Stack[-9], 0))
0x337: Pop(2); Push(Stack[-2] * Stack[-1]);
0x338: Push(CvectorIndex(Stack[-8], 2))
0x339: Push(CvectorIndex(Stack[-10], 2))
0x33a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33c: Push((int) 0)
0x33d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-6] = "fdie"
0x340: GOTO 0x342

0x341: Stack[-6] = "bdie"
0x342: @ RemoveRTEnvelope()
0x343: Pop(0)
0x344: @ SetDeathState()
0x345: Pop(0)
0x346: @ Stop()
0x347: Pop(0)
0x348: @ StopAsync()
0x349: Pop(0)
0x34a: Stack[-5] = Stack[-21]
0x34b: Push("GetScriptProperty")
0x34c: Push((int) 2)
0x34d: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x34e: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x34f: Push("Owner")
0x350: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x351: Pop(1)
0x352: Push(Stack[-4])
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: Push("Owner")
0x355: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x356: Pop(1)
0x357: Pop(0); Push((bool) Stack[-5] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: Stack[-5] = Stack[-21]
0x35a: Push("@GetEyesHeight")
0x35b: Push((int) 1)
0x35c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x35d: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x35e: @@ GetEyesHeight(Stack[-2])
0x35f: Pop(0)
0x360: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x361: Push(CvectorIndex(Stack[-1], 1))
0x362: Stack[-1] = Stack[-3]
0x363: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x364: Push("head")
0x365: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x366: Pop(1)
0x367: Stack[-3] = (bool) 1
0x368: GOTO 0x36a

0x369: Stack[-3] = (bool) 0
0x36a: PushEmpty(string)
0x36b: Stack[-1] = Stack[-7]
0x36c: Call2 0x4c5

0x36d: Pop(1)
0x36e: Push("all")
0x36f: @ PlayAnimation(Stack[-1], Stack[-7])
0x370: Pop(1)
0x371: @ WaitForAnimEnd()
0x372: Pop(0)
0x373: Push(Stack[-3])
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: @ StopAsync()
0x376: Pop(0)
0x377: Push("head")
0x378: @ UnlookAsync(Stack[-1])
0x379: Pop(1)
0x37a: Push("all")
0x37b: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x37c: Pop(1)
0x37d: @ RemoveEnvelope()
0x37e: Pop(0)
0x37f: Stack[-5] = 0
0x380: Return(); Pop(20)

0x381: PushEmpty()
0x382: @ RemoveRTEnvelope()
0x383: Pop(0)
0x384: @ SetDeathState()
0x385: Pop(0)
0x386: @ Stop()
0x387: Pop(0)
0x388: @ StopAsync()
0x389: Pop(0)
0x38a: @ StopSecondaryAnimation()
0x38b: Pop(0)
0x38c: PushEmpty(string)
0x38d: Stack[-1] = Stack[-2]
0x38e: Call2 0x4c5

0x38f: Pop(1)
0x390: Push("all")
0x391: @ PlayAnimation(Stack[-1], Stack[-2])
0x392: Pop(1)
0x393: @ WaitForAnimEnd()
0x394: Pop(0)
0x395: Push("all")
0x396: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x397: Pop(1)
0x398: @ RemoveEnvelope()
0x399: Pop(0)
0x39a: Return(); Pop(0)

0x39b: PushEmpty()
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: Return(); Pop(0)

0x3a1: PushEmpty(cvector, cvector)
0x3a2: @ GetPosition(Stack[-1])
0x3a3: Pop(0)
0x3a4: Stack[-3] = Stack[-1]
0x3a5: Return(); Pop(2)

0x3a6: PushEmpty(cvector, cvector, cvector, cvector)
0x3a7: @ GetPosition(Stack[-2])
0x3a8: Pop(0)
0x3a9: @@ GetPosition(Stack[-1])
0x3aa: Pop(0)
0x3ab: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3ac: Return(); Pop(4)

0x3ad: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3ae: @ GetPosition(Stack[-3])
0x3af: Pop(0)
0x3b0: @@ GetPosition(Stack[-2])
0x3b1: Pop(0)
0x3b2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3b3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3b4: Return(); Pop(6)

0x3b5: PushEmpty(object, object)
0x3b6: Push("player")
0x3b7: @ FindActor(Stack[-2], Stack[-1])
0x3b8: Pop(1)
0x3b9: Stack[-3] = Stack[-1]
0x3ba: Return(); Pop(2)

0x3bb: Stack[-1] = 0
0x3bc: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x3bd: Pop(0); Push((bool) Stack[-15] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Return(); Pop(14)

0x3c0: @ IsDead(Stack[-7])
0x3c1: Pop(0)
0x3c2: Push(Stack[-7])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: Return(); Pop(14)

0x3c5: @ GetSecondaryAnimationType(Stack[-6])
0x3c6: Pop(0)
0x3c7: Push((int) 0)
0x3c8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Return(); Pop(14)

0x3cb: @@ GetPosition(Stack[-5])
0x3cc: Pop(0)
0x3cd: @ GetPosition(Stack[-4])
0x3ce: Pop(0)
0x3cf: @ GetDirection(Stack[-3])
0x3d0: Pop(0)
0x3d1: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x3d2: Push(CvectorIndex(Stack[-2], 0))
0x3d3: Push(CvectorIndex(Stack[-4], 0))
0x3d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d5: Push(CvectorIndex(Stack[-3], 2))
0x3d6: Push(CvectorIndex(Stack[-5], 2))
0x3d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d9: Push((int) 0)
0x3da: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: Stack[-1] = "fhit"
0x3dd: GOTO 0x3df

0x3de: Stack[-1] = "bhit"
0x3df: Push("hit_react")
0x3e0: Push("1")
0x3e1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e2: Push("2")
0x3e3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3e4: Push((int) -10)
0x3e5: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(4)
0x3e7: Return(); Pop(14)

0x3e8: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: PushEmpty(bool)
0x3ec: Stack[-1] = (bool) 0
0x3ed: Push(Stack[-23])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ef: Push((int) 4)
0x3f0: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f4: Push((int) 5)
0x3f5: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f7: Stack[-1] = (bool) 1
0x3f8: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x3f9: PushEmpty(cvector, cvector)
0x3fa: PushEmpty(cvector, object)
0x3fb: Stack[-1] = Stack[-25]
0x3fc: Call2 0x3a6

0x3fd: Stack[-3] = Stack[-2]
0x3fe: Pop(2)
0x3ff: Call2 0x4f4

0x400: Stack[-11] = Stack[-2]
0x401: Pop(2)
0x402: @ CreateVectorVector(Stack[-8])
0x403: Pop(0)
0x404: Stack[-7] = (int) 1
0x405: Push("hit")
0x406: Pop(1); Push(Stack[-1] + Stack[-8]);
0x407: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x408: Pop(1)
0x409: Pop(0); Push((bool) Stack[-6] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: GOTO 0x415

0x40c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x40d: Push((float)0.70711)
0x40e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: @@ add(Stack[-5])
0x411: Pop(0)
0x412: Push((int) 1)
0x413: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x414: GOTO 0x405

0x415: @@ size(Stack[-3])
0x416: Pop(0)
0x417: Push(Stack[-3])
0x418: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x419: @ irand(Stack[-2], Stack[-3])
0x41a: Pop(0)
0x41b: @@ get(Stack[-1], Stack[-2])
0x41c: Pop(0)
0x41d: PushEmpty(object, int, float, cvector, cvector)
0x41e: Stack[-5] = Stack[-26]
0x41f: Stack[-4] = Stack[-25]
0x420: Stack[-3] = Stack[-24]
0x421: Stack[-2] = Stack[-6]
0x422: Stack[-1] = -Stack[-14]; Pop(0);
0x423: Call2 0x42c

0x424: Pop(5)
0x425: Return(); Pop(18)

0x426: Stack[-8] = 0
0x427: PushEmpty(object)
0x428: Stack[-1] = Stack[-22]
0x429: Call2 0x3bc

0x42a: Pop(1)
0x42b: Return(); Pop(18)

0x42c: PushEmpty(object, object, object, object)
0x42d: @ GetScene(Stack[-2])
0x42e: Pop(0)
0x42f: Push("scripted")
0x430: Push("blood_dir.xml")
0x431: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x432: Pop(2)
0x433: PushEmpty(object)
0x434: Stack[-1] = Stack[-10]
0x435: Call2 0x3bc

0x436: Pop(1)
0x437: Return(); Pop(4)

0x438: Stack[-1] = 0
0x439: Stack[-2] = 0
0x43a: PushEmpty(bool, bool)
0x43b: @ IsLoaded(Stack[-1])
0x43c: Pop(0)
0x43d: Stack[-3] = Stack[-1]
0x43e: Return(); Pop(2)

0x43f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x440: @@ GetPosition(Stack[-8])
0x441: Pop(0)
0x442: @@ GetEyesHeight(Stack[-9])
0x443: Pop(0)
0x444: Push(CvectorIndex(Stack[-8], 1))
0x445: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x446: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x447: @ GetPosition(Stack[-7])
0x448: Pop(0)
0x449: @ GetEyesHeight(Stack[-9])
0x44a: Pop(0)
0x44b: Push(CvectorIndex(Stack[-7], 1))
0x44c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x44d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x44e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x44f: Push(CvectorIndex(Stack[-6], 1))
0x450: Stack[-1] = (int) 0
0x451: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x452: Pop(0); Push(Stack[-6] | Stack[-6]);
0x453: Pop(1); Push(Sqrt(Stack[-1]))
0x454: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x455: Stack[-5] = -Stack[-6]; Pop(0);
0x456: Pop(0); Push(Stack[-6] * Stack[-19]);
0x457: PushEmpty(cvector, cvector)
0x458: Push(CVector(0.0, 1.0, 0.0))
0x459: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x45a: Call2 0x4f4

0x45b: Pop(1)
0x45c: Push((int) 25)
0x45d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x45e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45f: Push(CVector(0.0, 10.0, 0.0))
0x460: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x461: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x462: @ IsOverrideActive(Stack[-2])
0x463: Pop(0)
0x464: Push(Stack[-2])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-21] = (bool) 0
0x467: Return(); Pop(18)

0x468: @ StopWorld()
0x469: Pop(0)
0x46a: @ CameraTransit(Stack[-3], Stack[-5])
0x46b: Pop(0)
0x46c: Push(CvectorIndex(Stack[-4], 0))
0x46d: Push(CvectorIndex(Stack[-5], 2))
0x46e: @ Rotate(Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: PushEmpty(bool)
0x471: Call2 0x56d

0x472: Pop(0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x47d

0x475: Push("head")
0x476: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x477: Pop(1)
0x478: Push(Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47a: Push("head")
0x47b: @ LookAsyncCamera(Stack[-1])
0x47c: Pop(1)
0x47d: @ CameraWaitForPlayFinish()
0x47e: Pop(0)
0x47f: @ ResumeWorld()
0x480: Pop(0)
0x481: Stack[-21] = (bool) 1
0x482: Return(); Pop(18)

0x483: PushEmpty(bool, bool)
0x484: @ CameraSwitchToNormal()
0x485: Pop(0)
0x486: PushEmpty(bool)
0x487: Call2 0x56d

0x488: Pop(0)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: GOTO 0x493

0x48b: Push("head")
0x48c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x48d: Pop(1)
0x48e: Push(Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x490: Push("head")
0x491: @ UnlookAsync(Stack[-1])
0x492: Pop(1)
0x493: Return(); Pop(2)

0x494: PushEmpty(bool, float, float, bool, float, float)
0x495: @ lshHasAnimation(Stack[-3], Stack[-7])
0x496: Pop(0)
0x497: Push(Stack[-3])
0x498: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x499: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x49a: Pop(0)
0x49b: Push((bool) 0)
0x49c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x49d: Pop(1)
0x49e: GOTO 0x4a3

0x49f: Push("Can't find lsh animation : ")
0x4a0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4a1: @ Trace(Stack[-1])
0x4a2: Pop(1)
0x4a3: Return(); Pop(6)

0x4a4: PushEmpty(bool, float, float, bool, float, float)
0x4a5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4a6: Pop(0)
0x4a7: Push(Stack[-3])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4aa: Pop(0)
0x4ab: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4ac: Pop(0)
0x4ad: GOTO 0x4b2

0x4ae: Push("Can't find lsh animation : ")
0x4af: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4b0: @ Trace(Stack[-1])
0x4b1: Pop(1)
0x4b2: Return(); Pop(6)

0x4b3: PushEmpty(float, cvector, float, cvector)
0x4b4: @@ GetEyesHeight(Stack[-2])
0x4b5: Pop(0)
0x4b6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4b7: Push(CvectorIndex(Stack[-1], 1))
0x4b8: Stack[-1] = Stack[-3]
0x4b9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4ba: Push("head")
0x4bb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4bc: Pop(1)
0x4bd: Return(); Pop(4)

0x4be: PushEmpty(bool)
0x4bf: Call2 0x56d

0x4c0: Pop(0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c2: @ lshStopSpeech()
0x4c3: Pop(0)
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x4c6: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x4c7: Pop(0)
0x4c8: Pop(0); Push((bool) Stack[-8] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4ca: Stack[-7] = (int) 0
0x4cb: Push((int) 1)
0x4cc: Pop(1); Push(Stack[-8] + Stack[-1]);
0x4cd: Pop(1); Push(Stack[-18] + Stack[-1]);
0x4ce: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x4cf: Pop(1)
0x4d0: Pop(0); Push((bool) Stack[-6] == 0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d2: GOTO 0x4d6

0x4d3: Push((int) 1)
0x4d4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4d5: GOTO 0x4cb

0x4d6: Pop(0); Push((bool) Stack[-7] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: Return(); Pop(16)

0x4d9: @ irand(Stack[-5], Stack[-7])
0x4da: Pop(0)
0x4db: Push((int) 1)
0x4dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4dd: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x4de: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x4df: Pop(0)
0x4e0: Push(Stack[-4])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e2: @ GetEyesHeight(Stack[-3])
0x4e3: Pop(0)
0x4e4: @ GetDirection(Stack[-2])
0x4e5: Pop(0)
0x4e6: Push((int) 50)
0x4e7: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x4e8: Push(CvectorIndex(Stack[-1], 1))
0x4e9: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x4ea: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4eb: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x4ec: Pop(0)
0x4ed: Return(); Pop(16)

0x4ee: PushEmpty(object, object)
0x4ef: @ self(Stack[-1])
0x4f0: Pop(0)
0x4f1: Stack[-3] = Stack[-1]
0x4f2: Return(); Pop(2)

0x4f3: Stack[-1] = 0
0x4f4: PushEmpty(float, float)
0x4f5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4f6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4f7: Push((float)0.0)
0x4f8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4fb: Return(); Pop(2)

0x4fc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4fd: Return(); Pop(2)

0x4fe: PushEmpty()
0x4ff: Pop(0); Push(Stack[-2] | Stack[-1]);
0x500: Pop(0); Push(Stack[-3] | Stack[-3]);
0x501: Pop(0); Push(Stack[-3] | Stack[-3]);
0x502: Pop(2); Push(Stack[-2] * Stack[-1]);
0x503: Pop(1); Push(Sqrt(Stack[-1]))
0x504: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x505: Return(); Pop(0)

0x506: PushEmpty(int, int)
0x507: @ GetVariable(Stack[-3], Stack[-1])
0x508: Pop(0)
0x509: Stack[-4] = Stack[-1]
0x50a: Return(); Pop(2)

0x50b: PushEmpty(object, object)
0x50c: @ FindActor(Stack[-1], Stack[-4])
0x50d: Pop(0)
0x50e: Pop(0); Push((bool) Stack[-1] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-5] = (bool) 0
0x511: Return(); Pop(2)

0x512: @ Trigger(Stack[-1], Stack[-3])
0x513: Pop(0)
0x514: Stack[-5] = (bool) 1
0x515: Return(); Pop(2)

0x516: Stack[-1] = 0
0x517: PushEmpty(string, string)
0x518: Stack[-1] = "idle"
0x519: Push(Stack[-3])
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51c: Stack[-4] = Stack[-1]
0x51d: Return(); Pop(2)

0x51e: PushEmpty(int, bool, int, bool)
0x51f: Stack[-2] = (int) 0
0x520: Push("all")
0x521: PushEmpty(string, int)
0x522: Stack[-1] = Stack[-5]
0x523: Call2 0x517

0x524: Pop(1)
0x525: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: Pop(0); Push((bool) Stack[-1] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x529: GOTO 0x52d

0x52a: Push((int) 1)
0x52b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52c: GOTO 0x520

0x52d: Stack[-5] = Stack[-2]
0x52e: Return(); Pop(4)

0x52f: PushEmpty()
0x530: Push("oob5GathererWife1")
0x531: Push((int) 1)
0x532: @ SetVariable(Stack[-2], Stack[-1])
0x533: Pop(2)
0x534: Return(); Pop(0)

0x535: PushEmpty()
0x536: PushEmpty(int, string)
0x537: Stack[-1] = "oob5GathererWife1"
0x538: Call2 0x506

0x539: Pop(1)
0x53a: Push((int) 0)
0x53b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-2] = (bool) 1
0x53e: Return(); Pop(0)

0x53f: Stack[-2] = (bool) 0
0x540: Return(); Pop(0)

0x541: PushEmpty(int, int)
0x542: Push("branch")
0x543: @ GetVariable(Stack[-1], Stack[-2])
0x544: Pop(1)
0x545: Push((int) 0)
0x546: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x548: Stack[-3] = (int) 1
0x549: Return(); Pop(2)

0x54a: GOTO 0x550

0x54b: Push((int) 1)
0x54c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54d: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54e: Stack[-3] = (int) 2
0x54f: Return(); Pop(2)

0x550: Stack[-3] = (int) 3
0x551: Return(); Pop(2)

0x552: PushEmpty(int, int)
0x553: Push("branch")
0x554: @ GetVariable(Stack[-1], Stack[-2])
0x555: Pop(1)
0x556: Stack[-3] = Stack[-1]
0x557: Return(); Pop(2)

0x558: PushEmpty()
0x559: PushEmpty(int)
0x55a: Call2 0x552

0x55b: Pop(0)
0x55c: Push((int) 1)
0x55d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55f: @ WorkWithCorpse(Stack[-1])
0x560: Pop(0)
0x561: GOTO 0x564

0x562: @ Barter(Stack[-1])
0x563: Pop(0)
0x564: Return(); Pop(0)

0x565: Stack[-1] = (int) 518607
0x566: Return(); Pop(0)

0x567: Stack[-1] = (int) 518606
0x568: Return(); Pop(0)

0x569: Stack[-1] = "ui/NPC_Citizen2.png"
0x56a: Return(); Pop(0)

0x56b: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x56c: Return(); Pop(0)

0x56d: Stack[-1] = (bool) 0
0x56e: Return(); Pop(0)

0x56f: PushEmpty(object, object)
0x570: @ GetScene(Stack[-1])
0x571: Pop(0)
0x572: PushEmpty(object)
0x573: Call2 0x4ee

0x574: Pop(0)
0x575: @@ RemoveStationaryActor(Stack[-1])
0x576: Pop(1)
0x577: Push("b5q01NudeDead")
0x578: Push((bool) 1)
0x579: @ SetVariable(Stack[-2], Stack[-1])
0x57a: Pop(2)
0x57b: PushEmpty(bool, string, string)
0x57c: Stack[-2] = "quest_b5_01"
0x57d: Stack[-1] = "gwife_dead"
0x57e: Call2 0x50b

0x57f: Pop(3)
0x580: PushEmpty(object)
0x581: Stack[-1] = Stack[-4]
0x582: Push(-1, 0); TaskCall(4)
0x583: Call2 0x30d

0x584: Pop(-1, 0); TaskReturn
0x585: Pop(1)
0x586: Return(); Pop(2)

0x587: Stack[-1] = 0
0x588: PushEmpty()
0x589: PushEmpty(object, int, float)
0x58a: Stack[-3] = Stack[-7]
0x58b: Stack[-2] = Stack[-6]
0x58c: Stack[-1] = Stack[-5]
0x58d: Call2 0x3e8

0x58e: Pop(3)
0x58f: Return(); Pop(0)

0x590: PushEmpty()
0x591: PushEmpty(object, int, float, cvector, cvector)
0x592: Stack[-5] = Stack[-11]
0x593: Stack[-4] = Stack[-10]
0x594: Stack[-3] = Stack[-9]
0x595: Stack[-2] = Stack[-7]
0x596: Stack[-1] = Stack[-6]
0x597: Call2 0x42c

0x598: Pop(5)
0x599: Return(); Pop(0)

0x59a: PushEmpty()
0x59b: PushEmpty(object)
0x59c: Stack[-1] = Stack[-2]
0x59d: Call2 0x56f

0x59e: Pop(1)
0x59f: Return(); Pop(0)

