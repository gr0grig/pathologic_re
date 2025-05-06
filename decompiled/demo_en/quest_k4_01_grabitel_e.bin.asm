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
	player
	head
	fdie
	GetPosition
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
	ook4GrabitelEntrance1
	branch
	GenerateMoney: iMin > iMax
	Money
	Knife
	lockpick
	grabitel_mark
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	health
	quest_k4_01
	grabitel_entrance_dead

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
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
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
	GetScene (1 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xe8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xf2 Vars = (object)
		EVENT_7 Op = 0x127 Vars = (int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x1ba Vars = (object)
		EVENT_22 Op = 0x239 Vars = (object, int, float, float)
		EVENT_16 Op = 0x23b Vars = (object, string)
		EVENT_41 Op = 0x23d Vars = (object)

Events:
EVENT_22 Op = 0x44d Vars = (object, int, float, float)
EVENT_43 Op = 0x455 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x45f Vars = (object, string)
EVENT_41 Op = 0x46c Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2d1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x43d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x43b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x43f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x441

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3d5

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
0x41: Call2 0x315

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 525700)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x3c9

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 525701)
0x5f: Push((int) 27026)
0x60: Push((int) 27024)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 525702)
0x64: Push((int) -1)
0x65: Push((int) 27025)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x443

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x326

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x443

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x336

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x350

0xa4: Pop(0)
0xa5: Push((int) 27024)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x3c3

0xac: Pop(2)
0xad: Push((int) 27023)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 525700)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x3c9

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 525701)
0xbf: Push((int) 27026)
0xc0: Push((int) 27024)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 525702)
0xc4: Push((int) -1)
0xc5: Push((int) 27025)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 27026)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 525703)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 525704)
0xd6: Push((int) -1)
0xd7: Push((int) 27027)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdc: PushEmpty(bool)
0xdd: Call2 0x443

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe0: @ lshStopAnimation()
0xe1: Pop(0)
0xe2: GOTO 0xe5

0xe3: @ StopAnimation()
0xe4: Pop(0)
0xe5: Return(); Pop(0)

0xe6: GOTO 0xa0

0xe7: Return(); Pop(0)

0xe8: Push((int) 3)
0xe9: @ Sleep(Stack[-1])
0xea: Pop(1)
0xeb: PushEmpty(float, float)
0xec: Stack[-2] = (int) 300
0xed: Stack[-1] = (int) 100
0xee: Call2 0xfd

0xef: Pop(2)
0xf0: GOTO 0xe8

0xf1: Return(); Pop(0)

0xf2: PushEmpty()
0xf3: PushEmpty()
0xf4: Call2 0x13e

0xf5: Pop(0)
0xf6: PushEmpty(int, object)
0xf7: Stack[-1] = Stack[-3]
0xf8: Push(-2, 1); TaskCall(0)
0xf9: Call2 0x0

0xfa: Pop(-2, 1); TaskReturn
0xfb: Pop(2)
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: PushEmpty(bool)
0xff: Call2 0x2cc

0x100: Pop(0)
0x101: Pop(1); Push((bool) Stack[-1] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x103: Return(); Pop(0)

0x104: Push("player")
0x105: @ FindActor(Stack[-4], Stack[-1])
0x106: Pop(1)
0x107: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x108: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x109: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x10a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x10b: Push((int) 10)
0x10c: Push((float)1.0)
0x10d: @ SetTimer(Stack[-2], Stack[-1])
0x10e: Pop(2)
0x10f: PushEmpty()
0x110: Call2 0x14c

0x111: Pop(0)
0x112: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x114: Push((int) 10)
0x115: @ KillTimer(Stack[-1])
0x116: Pop(1)
0x117: Return(); Pop(0)

0x118: PushEmpty(float, float)
0x119: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11b: Stack[-3] = (bool) 0
0x11c: Return(); Pop(2)

0x11d: PushEmpty(float, object)
0x11e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x11f: Call2 0x246

0x120: Pop(1)
0x121: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x122: Push( Stack[2 + Tasks[-1].StackPointer] )
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x125: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x126: Return(); Pop(2)

0x127: PushEmpty()
0x128: Push((int) 10)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x12b: PushEmpty(bool)
0x12c: Call2 0x118

0x12d: Pop(0)
0x12e: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x12f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: PushEmpty(object)
0x132: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x133: Call2 0x345

0x134: Pop(1)
0x135: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x136: GOTO 0x13d

0x137: Push( Stack[2 + Tasks[-1].StackPointer] )
0x138: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x139: Push("head")
0x13a: @ UnlookAsync(Stack[-1])
0x13b: Pop(1)
0x13c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13d: Return(); Pop(0)

0x13e: PushEmpty()
0x13f: Call2 0x19d

0x140: Pop(0)
0x141: Push((int) 10)
0x142: @ KillTimer(Stack[-1])
0x143: Pop(1)
0x144: Push( Stack[2 + Tasks[-1].StackPointer] )
0x145: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x146: Push("head")
0x147: @ UnlookAsync(Stack[-1])
0x148: Pop(1)
0x149: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x14a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14b: Return(); Pop(0)

0x14c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x14d: @ WaitForAnimEnd()
0x14e: Pop(0)
0x14f: PushEmpty(bool)
0x150: Call2 0x2cc

0x151: Pop(0)
0x152: Pop(1); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Return(); Pop(14)

0x155: PushEmpty(int)
0x156: Call2 0x3b2

0x157: Stack[-8] = Stack[-1]
0x158: Pop(1)
0x159: Stack[-6] = (int) 0
0x15a: PushEmpty(bool)
0x15b: Stack[-1] = (bool) 0
0x15c: Push((int) 5)
0x15d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(bool)
0x160: Call2 0x2cc

0x161: Pop(0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 1
0x164: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x165: Push((int) 3)
0x166: @ irand(Stack[-6], Stack[-1])
0x167: Pop(1)
0x168: Push((int) 0)
0x169: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16b: Push(Stack[-7])
0x16c: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16d: @ irand(Stack[-4], Stack[-7])
0x16e: Pop(0)
0x16f: Push("all")
0x170: PushEmpty(string, int)
0x171: Stack[-1] = Stack[-7]
0x172: Call2 0x3ab

0x173: Pop(1)
0x174: @ PlayAnimation(Stack[-2], Stack[-1])
0x175: Pop(2)
0x176: @ WaitForAnimEnd(Stack[-3])
0x177: Pop(0)
0x178: Pop(0); Push((bool) Stack[-3] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: GOTO 0x198

0x17b: GOTO 0x18d

0x17c: Push((int) 1)
0x17d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17f: Push((int) 4)
0x180: @ rand(Stack[-3], Stack[-1])
0x181: Pop(1)
0x182: Push((int) 1)
0x183: Pop(1); Push(Stack[-3] + Stack[-1]);
0x184: @ Sleep(Stack[-1], Stack[-2])
0x185: Pop(1)
0x186: Pop(0); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: GOTO 0x198

0x189: GOTO 0x18d

0x18a: Push(Stack[-6])
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x198

0x18d: PushEmpty(bool)
0x18e: Call2 0x19b

0x18f: Pop(0)
0x190: Pop(1); Push((bool) Stack[-1] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: GOTO 0x198

0x193: @ ResetAAS()
0x194: Pop(0)
0x195: Push((int) 1)
0x196: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x197: GOTO 0x15a

0x198: @ ResetAAS()
0x199: Pop(0)
0x19a: Return(); Pop(14)

0x19b: Stack[-1] = (bool) 1
0x19c: Return(); Pop(0)

0x19d: @ StopAnimation()
0x19e: Pop(0)
0x19f: @ StopGroup0()
0x1a0: Pop(0)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: PushEmpty()
0x1a4: Call2 0x418

0x1a5: Pop(0)
0x1a6: PushEmpty(object)
0x1a7: Stack[-1] = Stack[-2]
0x1a8: Call2 0x1ab

0x1a9: Pop(1)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: EventDisable(0)
0x1ad: PushEmpty(object)
0x1ae: Stack[-1] = Stack[-2]
0x1af: Call2 0x1c4

0x1b0: Pop(1)
0x1b1: Push((int) 50)
0x1b2: Push((int) 40)
0x1b3: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: EventEnable(0)
0x1b6: @ Hold()
0x1b7: Pop(0)
0x1b8: GOTO 0x1b6

0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(bool, bool)
0x1bb: @ IsOverrideActive(Stack[-1])
0x1bc: Pop(0)
0x1bd: Pop(0); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1bf: PushEmpty(object)
0x1c0: Stack[-1] = Stack[-4]
0x1c1: Call2 0x3ec

0x1c2: Pop(1)
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x1c5: Pop(0); Push((bool) Stack[-21] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "fdie"
0x1c9: Call2 0x21f

0x1ca: Pop(1)
0x1cb: GOTO 0x21e

0x1cc: @@ GetPosition(Stack[-10])
0x1cd: Pop(0)
0x1ce: @ GetPosition(Stack[-9])
0x1cf: Pop(0)
0x1d0: @ GetDirection(Stack[-8])
0x1d1: Pop(0)
0x1d2: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x1d3: Push(CvectorIndex(Stack[-7], 0))
0x1d4: Push(CvectorIndex(Stack[-9], 0))
0x1d5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d6: Push(CvectorIndex(Stack[-8], 2))
0x1d7: Push(CvectorIndex(Stack[-10], 2))
0x1d8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1da: Push((int) 0)
0x1db: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dd: Stack[-6] = "fdie"
0x1de: GOTO 0x1e0

0x1df: Stack[-6] = "bdie"
0x1e0: @ RemoveRTEnvelope()
0x1e1: Pop(0)
0x1e2: @ SetDeathState()
0x1e3: Pop(0)
0x1e4: @ Stop()
0x1e5: Pop(0)
0x1e6: @ StopAsync()
0x1e7: Pop(0)
0x1e8: Stack[-5] = Stack[-21]
0x1e9: Push("GetScriptProperty")
0x1ea: Push((int) 2)
0x1eb: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1ed: Push("Owner")
0x1ee: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x1ef: Pop(1)
0x1f0: Push(Stack[-4])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: Push("Owner")
0x1f3: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x1f4: Pop(1)
0x1f5: Pop(0); Push((bool) Stack[-5] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-5] = Stack[-21]
0x1f8: Push("@GetEyesHeight")
0x1f9: Push((int) 1)
0x1fa: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x1fb: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fc: @@ GetEyesHeight(Stack[-2])
0x1fd: Pop(0)
0x1fe: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1ff: Push(CvectorIndex(Stack[-1], 1))
0x200: Stack[-1] = Stack[-3]
0x201: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x202: Push("head")
0x203: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x204: Pop(1)
0x205: Stack[-3] = (bool) 1
0x206: GOTO 0x208

0x207: Stack[-3] = (bool) 0
0x208: PushEmpty(string)
0x209: Stack[-1] = Stack[-7]
0x20a: Call2 0x362

0x20b: Pop(1)
0x20c: Push("all")
0x20d: @ PlayAnimation(Stack[-1], Stack[-7])
0x20e: Pop(1)
0x20f: @ WaitForAnimEnd()
0x210: Pop(0)
0x211: Push(Stack[-3])
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: @ StopAsync()
0x214: Pop(0)
0x215: Push("head")
0x216: @ UnlookAsync(Stack[-1])
0x217: Pop(1)
0x218: Push("all")
0x219: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x21a: Pop(1)
0x21b: @ RemoveEnvelope()
0x21c: Pop(0)
0x21d: Stack[-5] = 0
0x21e: Return(); Pop(20)

0x21f: PushEmpty()
0x220: @ RemoveRTEnvelope()
0x221: Pop(0)
0x222: @ SetDeathState()
0x223: Pop(0)
0x224: @ Stop()
0x225: Pop(0)
0x226: @ StopAsync()
0x227: Pop(0)
0x228: @ StopSecondaryAnimation()
0x229: Pop(0)
0x22a: PushEmpty(string)
0x22b: Stack[-1] = Stack[-2]
0x22c: Call2 0x362

0x22d: Pop(1)
0x22e: Push("all")
0x22f: @ PlayAnimation(Stack[-1], Stack[-2])
0x230: Pop(1)
0x231: @ WaitForAnimEnd()
0x232: Pop(0)
0x233: Push("all")
0x234: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x235: Pop(1)
0x236: @ RemoveEnvelope()
0x237: Pop(0)
0x238: Return(); Pop(0)

0x239: PushEmpty()
0x23a: Return(); Pop(0)

0x23b: PushEmpty()
0x23c: Return(); Pop(0)

0x23d: PushEmpty()
0x23e: Return(); Pop(0)

0x23f: PushEmpty(cvector, cvector, cvector, cvector)
0x240: @ GetPosition(Stack[-2])
0x241: Pop(0)
0x242: @@ GetPosition(Stack[-1])
0x243: Pop(0)
0x244: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x245: Return(); Pop(4)

0x246: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x247: @ GetPosition(Stack[-3])
0x248: Pop(0)
0x249: @@ GetPosition(Stack[-2])
0x24a: Pop(0)
0x24b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x24d: Return(); Pop(6)

0x24e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x24f: Pop(0); Push((bool) Stack[-15] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: Return(); Pop(14)

0x252: @ IsDead(Stack[-7])
0x253: Pop(0)
0x254: Push(Stack[-7])
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Return(); Pop(14)

0x257: @ GetSecondaryAnimationType(Stack[-6])
0x258: Pop(0)
0x259: Push((int) 0)
0x25a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Return(); Pop(14)

0x25d: @@ GetPosition(Stack[-5])
0x25e: Pop(0)
0x25f: @ GetPosition(Stack[-4])
0x260: Pop(0)
0x261: @ GetDirection(Stack[-3])
0x262: Pop(0)
0x263: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x264: Push(CvectorIndex(Stack[-2], 0))
0x265: Push(CvectorIndex(Stack[-4], 0))
0x266: Pop(2); Push(Stack[-2] * Stack[-1]);
0x267: Push(CvectorIndex(Stack[-3], 2))
0x268: Push(CvectorIndex(Stack[-5], 2))
0x269: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26b: Push((int) 0)
0x26c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: Stack[-1] = "fhit"
0x26f: GOTO 0x271

0x270: Stack[-1] = "bhit"
0x271: Push("hit_react")
0x272: Push("1")
0x273: Pop(1); Push(Stack[-3] + Stack[-1]);
0x274: Push("2")
0x275: Pop(1); Push(Stack[-4] + Stack[-1]);
0x276: Push((int) -10)
0x277: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(4)
0x279: Return(); Pop(14)

0x27a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x27b: PushEmpty(bool)
0x27c: Stack[-1] = (bool) 0
0x27d: PushEmpty(bool)
0x27e: Stack[-1] = (bool) 0
0x27f: Push(Stack[-23])
0x280: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x281: Push((int) 4)
0x282: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: Stack[-1] = (bool) 1
0x285: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x286: Push((int) 5)
0x287: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: Stack[-1] = (bool) 1
0x28a: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x28b: PushEmpty(cvector, cvector)
0x28c: PushEmpty(cvector, object)
0x28d: Stack[-1] = Stack[-25]
0x28e: Call2 0x23f

0x28f: Stack[-3] = Stack[-2]
0x290: Pop(2)
0x291: Call2 0x38b

0x292: Stack[-11] = Stack[-2]
0x293: Pop(2)
0x294: @ CreateVectorVector(Stack[-8])
0x295: Pop(0)
0x296: Stack[-7] = (int) 1
0x297: Push("hit")
0x298: Pop(1); Push(Stack[-1] + Stack[-8]);
0x299: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x29a: Pop(1)
0x29b: Pop(0); Push((bool) Stack[-6] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a7

0x29e: Pop(0); Push(Stack[-4] | Stack[-9]);
0x29f: Push((float)0.70711)
0x2a0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: @@ add(Stack[-5])
0x2a3: Pop(0)
0x2a4: Push((int) 1)
0x2a5: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x2a6: GOTO 0x297

0x2a7: @@ size(Stack[-3])
0x2a8: Pop(0)
0x2a9: Push(Stack[-3])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ab: @ irand(Stack[-2], Stack[-3])
0x2ac: Pop(0)
0x2ad: @@ get(Stack[-1], Stack[-2])
0x2ae: Pop(0)
0x2af: PushEmpty(object, int, float, cvector, cvector)
0x2b0: Stack[-5] = Stack[-26]
0x2b1: Stack[-4] = Stack[-25]
0x2b2: Stack[-3] = Stack[-24]
0x2b3: Stack[-2] = Stack[-6]
0x2b4: Stack[-1] = -Stack[-14]; Pop(0);
0x2b5: Call2 0x2be

0x2b6: Pop(5)
0x2b7: Return(); Pop(18)

0x2b8: Stack[-8] = 0
0x2b9: PushEmpty(object)
0x2ba: Stack[-1] = Stack[-22]
0x2bb: Call2 0x24e

0x2bc: Pop(1)
0x2bd: Return(); Pop(18)

0x2be: PushEmpty(object, object, object, object)
0x2bf: @ GetScene(Stack[-2])
0x2c0: Pop(0)
0x2c1: Push("scripted")
0x2c2: Push("blood_dir.xml")
0x2c3: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x2c4: Pop(2)
0x2c5: PushEmpty(object)
0x2c6: Stack[-1] = Stack[-10]
0x2c7: Call2 0x24e

0x2c8: Pop(1)
0x2c9: Return(); Pop(4)

0x2ca: Stack[-1] = 0
0x2cb: Stack[-2] = 0
0x2cc: PushEmpty(bool, bool)
0x2cd: @ IsLoaded(Stack[-1])
0x2ce: Pop(0)
0x2cf: Stack[-3] = Stack[-1]
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2d2: @@ GetPosition(Stack[-8])
0x2d3: Pop(0)
0x2d4: @@ GetEyesHeight(Stack[-9])
0x2d5: Pop(0)
0x2d6: Push(CvectorIndex(Stack[-8], 1))
0x2d7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2d9: @ GetPosition(Stack[-7])
0x2da: Pop(0)
0x2db: @ GetEyesHeight(Stack[-9])
0x2dc: Pop(0)
0x2dd: Push(CvectorIndex(Stack[-7], 1))
0x2de: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2df: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e1: Push(CvectorIndex(Stack[-6], 1))
0x2e2: Stack[-1] = (int) 0
0x2e3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e5: Pop(1); Push(Sqrt(Stack[-1]))
0x2e6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e7: Stack[-5] = -Stack[-6]; Pop(0);
0x2e8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2e9: PushEmpty(cvector, cvector)
0x2ea: Push(CVector(0.0, 1.0, 0.0))
0x2eb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ec: Call2 0x38b

0x2ed: Pop(1)
0x2ee: Push((int) 25)
0x2ef: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f1: Push(CVector(0.0, 10.0, 0.0))
0x2f2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2f3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f4: @ IsOverrideActive(Stack[-2])
0x2f5: Pop(0)
0x2f6: Push(Stack[-2])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-21] = (bool) 0
0x2f9: Return(); Pop(18)

0x2fa: @ StopWorld()
0x2fb: Pop(0)
0x2fc: @ CameraTransit(Stack[-3], Stack[-5])
0x2fd: Pop(0)
0x2fe: Push(CvectorIndex(Stack[-4], 0))
0x2ff: Push(CvectorIndex(Stack[-5], 2))
0x300: @ Rotate(Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: PushEmpty(bool)
0x303: Call2 0x443

0x304: Pop(0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: GOTO 0x30f

0x307: Push("head")
0x308: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x309: Pop(1)
0x30a: Push(Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30c: Push("head")
0x30d: @ LookAsyncCamera(Stack[-1])
0x30e: Pop(1)
0x30f: @ CameraWaitForPlayFinish()
0x310: Pop(0)
0x311: @ ResumeWorld()
0x312: Pop(0)
0x313: Stack[-21] = (bool) 1
0x314: Return(); Pop(18)

0x315: PushEmpty(bool, bool)
0x316: @ CameraSwitchToNormal()
0x317: Pop(0)
0x318: PushEmpty(bool)
0x319: Call2 0x443

0x31a: Pop(0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: GOTO 0x325

0x31d: Push("head")
0x31e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x31f: Pop(1)
0x320: Push(Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x322: Push("head")
0x323: @ UnlookAsync(Stack[-1])
0x324: Pop(1)
0x325: Return(); Pop(2)

0x326: PushEmpty(bool, float, float, bool, float, float)
0x327: @ lshHasAnimation(Stack[-3], Stack[-7])
0x328: Pop(0)
0x329: Push(Stack[-3])
0x32a: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x32c: Pop(0)
0x32d: Push((bool) 0)
0x32e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(1)
0x330: GOTO 0x335

0x331: Push("Can't find lsh animation : ")
0x332: Pop(1); Push(Stack[-1] + Stack[-8]);
0x333: @ Trace(Stack[-1])
0x334: Pop(1)
0x335: Return(); Pop(6)

0x336: PushEmpty(bool, float, float, bool, float, float)
0x337: @ lshHasAnimation(Stack[-3], Stack[-8])
0x338: Pop(0)
0x339: Push(Stack[-3])
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x33c: Pop(0)
0x33d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x33e: Pop(0)
0x33f: GOTO 0x344

0x340: Push("Can't find lsh animation : ")
0x341: Pop(1); Push(Stack[-1] + Stack[-9]);
0x342: @ Trace(Stack[-1])
0x343: Pop(1)
0x344: Return(); Pop(6)

0x345: PushEmpty(float, cvector, float, cvector)
0x346: @@ GetEyesHeight(Stack[-2])
0x347: Pop(0)
0x348: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x349: Push(CvectorIndex(Stack[-1], 1))
0x34a: Stack[-1] = Stack[-3]
0x34b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x34c: Push("head")
0x34d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x34e: Pop(1)
0x34f: Return(); Pop(4)

0x350: PushEmpty(bool)
0x351: Call2 0x443

0x352: Pop(0)
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: @ lshStopSpeech()
0x355: Pop(0)
0x356: Return(); Pop(0)

0x357: PushEmpty(bool, bool)
0x358: PushEmpty(bool, int, int)
0x359: Stack[-2] = Stack[-7]
0x35a: Stack[-1] = Stack[-6]
0x35b: Call2 0x395

0x35c: Pop(2)
0x35d: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35e: Push((int) 0)
0x35f: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x360: Pop(1)
0x361: Return(); Pop(2)

0x362: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x363: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x364: Pop(0)
0x365: Pop(0); Push((bool) Stack[-8] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x367: Stack[-7] = (int) 0
0x368: Push((int) 1)
0x369: Pop(1); Push(Stack[-8] + Stack[-1]);
0x36a: Pop(1); Push(Stack[-18] + Stack[-1]);
0x36b: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x36c: Pop(1)
0x36d: Pop(0); Push((bool) Stack[-6] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x373

0x370: Push((int) 1)
0x371: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x372: GOTO 0x368

0x373: Pop(0); Push((bool) Stack[-7] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Return(); Pop(16)

0x376: @ irand(Stack[-5], Stack[-7])
0x377: Pop(0)
0x378: Push((int) 1)
0x379: Pop(1); Push(Stack[-6] + Stack[-1]);
0x37a: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x37b: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x37c: Pop(0)
0x37d: Push(Stack[-4])
0x37e: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37f: @ GetEyesHeight(Stack[-3])
0x380: Pop(0)
0x381: @ GetDirection(Stack[-2])
0x382: Pop(0)
0x383: Push((int) 50)
0x384: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x385: Push(CvectorIndex(Stack[-1], 1))
0x386: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x387: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x388: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x389: Pop(0)
0x38a: Return(); Pop(16)

0x38b: PushEmpty(float, float)
0x38c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x38d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x38e: Push((float)0.0)
0x38f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x392: Return(); Pop(2)

0x393: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x394: Return(); Pop(2)

0x395: PushEmpty(int, int)
0x396: @ irand(Stack[-1], Stack[-3])
0x397: Pop(0)
0x398: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x399: Return(); Pop(2)

0x39a: PushEmpty(int, int)
0x39b: @ GetVariable(Stack[-3], Stack[-1])
0x39c: Pop(0)
0x39d: Stack[-4] = Stack[-1]
0x39e: Return(); Pop(2)

0x39f: PushEmpty(object, object)
0x3a0: @ FindActor(Stack[-1], Stack[-4])
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: Stack[-5] = (bool) 0
0x3a5: Return(); Pop(2)

0x3a6: @ Trigger(Stack[-1], Stack[-3])
0x3a7: Pop(0)
0x3a8: Stack[-5] = (bool) 1
0x3a9: Return(); Pop(2)

0x3aa: Stack[-1] = 0
0x3ab: PushEmpty(string, string)
0x3ac: Stack[-1] = "idle"
0x3ad: Push(Stack[-3])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3b0: Stack[-4] = Stack[-1]
0x3b1: Return(); Pop(2)

0x3b2: PushEmpty(int, bool, int, bool)
0x3b3: Stack[-2] = (int) 0
0x3b4: Push("all")
0x3b5: PushEmpty(string, int)
0x3b6: Stack[-1] = Stack[-5]
0x3b7: Call2 0x3ab

0x3b8: Pop(1)
0x3b9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: Pop(0); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3c1

0x3be: Push((int) 1)
0x3bf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c0: GOTO 0x3b4

0x3c1: Stack[-5] = Stack[-2]
0x3c2: Return(); Pop(4)

0x3c3: PushEmpty()
0x3c4: Push("ook4GrabitelEntrance1")
0x3c5: Push((int) 1)
0x3c6: @ SetVariable(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: PushEmpty(int, string)
0x3cb: Stack[-1] = "ook4GrabitelEntrance1"
0x3cc: Call2 0x39a

0x3cd: Pop(1)
0x3ce: Push((int) 0)
0x3cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-2] = (bool) 1
0x3d2: Return(); Pop(0)

0x3d3: Stack[-2] = (bool) 0
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty(int, int)
0x3d6: Push("branch")
0x3d7: @ GetVariable(Stack[-1], Stack[-2])
0x3d8: Pop(1)
0x3d9: Push((int) 0)
0x3da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dc: Stack[-3] = (int) 1
0x3dd: Return(); Pop(2)

0x3de: GOTO 0x3e4

0x3df: Push((int) 1)
0x3e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-3] = (int) 2
0x3e3: Return(); Pop(2)

0x3e4: Stack[-3] = (int) 3
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty(int, int)
0x3e7: Push("branch")
0x3e8: @ GetVariable(Stack[-1], Stack[-2])
0x3e9: Pop(1)
0x3ea: Stack[-3] = Stack[-1]
0x3eb: Return(); Pop(2)

0x3ec: PushEmpty()
0x3ed: PushEmpty(int)
0x3ee: Call2 0x3e6

0x3ef: Pop(0)
0x3f0: Push((int) 1)
0x3f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f3: @ WorkWithCorpse(Stack[-1])
0x3f4: Pop(0)
0x3f5: GOTO 0x3f8

0x3f6: @ Barter(Stack[-1])
0x3f7: Pop(0)
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty(int, bool, int, bool)
0x3fa: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x3fb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fc: Push("GenerateMoney: iMin > iMax")
0x3fd: @ Trace(Stack[-1])
0x3fe: Pop(1)
0x3ff: Return(); Pop(4)

0x400: Stack[-2] = (int) 0
0x401: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x402: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x403: Pop(0); Push(Stack[-5] - Stack[-6]);
0x404: @ irand(Stack[-3], Stack[-1])
0x405: Pop(1)
0x406: GOTO 0x40b

0x407: Push((int) 0)
0x408: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Return(); Pop(4)

0x40b: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x40c: Push((int) 0)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Return(); Pop(4)

0x410: PushEmpty(int, string)
0x411: Stack[-1] = "Money"
0x412: Call2 0x436

0x413: Pop(1)
0x414: Push((int) 0)
0x415: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x416: Pop(2)
0x417: Return(); Pop(4)

0x418: PushEmpty(int, bool, int, bool)
0x419: Push((int) 0)
0x41a: @ ClearSubContainer(Stack[-1])
0x41b: Pop(1)
0x41c: PushEmpty(int, int)
0x41d: Stack[-2] = (int) 300
0x41e: Stack[-1] = (int) 750
0x41f: Call2 0x3f9

0x420: Pop(2)
0x421: PushEmpty(string, int, int)
0x422: Stack[-3] = "Knife"
0x423: Stack[-2] = (int) 1
0x424: Stack[-1] = (int) 8
0x425: Call2 0x357

0x426: Pop(3)
0x427: PushEmpty(string, int, int)
0x428: Stack[-3] = "lockpick"
0x429: Stack[-2] = (int) 1
0x42a: Stack[-1] = (int) 6
0x42b: Call2 0x357

0x42c: Pop(3)
0x42d: PushEmpty(int, string)
0x42e: Stack[-1] = "grabitel_mark"
0x42f: Call2 0x436

0x430: Pop(1)
0x431: Push((int) 0)
0x432: Push((int) 1)
0x433: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(4)

0x436: PushEmpty(int, int)
0x437: @ GetInvItemByName(Stack[-1], Stack[-3])
0x438: Pop(0)
0x439: Stack[-4] = Stack[-1]
0x43a: Return(); Pop(2)

0x43b: Stack[-1] = (int) 518411
0x43c: Return(); Pop(0)

0x43d: Stack[-1] = (int) 518410
0x43e: Return(); Pop(0)

0x43f: Stack[-1] = "ui/NPC_Citizen1.png"
0x440: Return(); Pop(0)

0x441: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x442: Return(); Pop(0)

0x443: Stack[-1] = (bool) 0
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: PushEmpty(object)
0x447: Stack[-1] = Stack[-2]
0x448: Push(-1, 0); TaskCall(3)
0x449: Call2 0x1a2

0x44a: Pop(-1, 0); TaskReturn
0x44b: Pop(1)
0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: PushEmpty(object, int, float)
0x44f: Stack[-3] = Stack[-7]
0x450: Stack[-2] = Stack[-6]
0x451: Stack[-1] = Stack[-5]
0x452: Call2 0x27a

0x453: Pop(3)
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: PushEmpty(object, int, float, cvector, cvector)
0x457: Stack[-5] = Stack[-11]
0x458: Stack[-4] = Stack[-10]
0x459: Stack[-3] = Stack[-9]
0x45a: Stack[-2] = Stack[-7]
0x45b: Stack[-1] = Stack[-6]
0x45c: Call2 0x2be

0x45d: Pop(5)
0x45e: Return(); Pop(0)

0x45f: PushEmpty(float, float)
0x460: Push("health")
0x461: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x463: Push("health")
0x464: @ GetProperty(Stack[-1], Stack[-2])
0x465: Pop(1)
0x466: Push((int) 0)
0x467: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: @ SignalDeath(Stack[-4])
0x46a: Pop(0)
0x46b: Return(); Pop(2)

0x46c: PushEmpty()
0x46d: PushEmpty(bool, string, string)
0x46e: Stack[-2] = "quest_k4_01"
0x46f: Stack[-1] = "grabitel_entrance_dead"
0x470: Call2 0x39f

0x471: Pop(3)
0x472: PushEmpty(object)
0x473: Stack[-1] = Stack[-2]
0x474: Call2 0x445

0x475: Pop(1)
0x476: Return(); Pop(0)

