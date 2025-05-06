GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	all
	idle
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	attack_on
	attack_stay
	attack_off
	Can't retreat, distance: 
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	playing 
	start: 
	end: 
	health
	player
	GenerateMoney: iMin > iMax
	Money
	lemon
	rusk
	hook
	syringe
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	flower
	ui/NPC_None.png
	class
	rat
	dog

Import:
	DoTrade (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	WorkWithCorpse (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)
	SetRTEnvelope (2 args)

RunOp = 0xaa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0xf Vars = (int)
	GTASK_1  Params = 1
		EVENT_0 Op = 0x25 Vars = (object)
		EVENT_6 Op = 0x33 Vars = ()
		EVENT_22 Op = 0xa4 Vars = (object, int, float, float)
		EVENT_16 Op = 0xa6 Vars = (object, string)
		EVENT_41 Op = 0xa8 Vars = (object)
	GTASK_2 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xc2 Vars = (object)
		EVENT_17 Op = 0xd6 Vars = (object)
		EVENT_30 Op = 0xea Vars = (object, object)
		EVENT_40 Op = 0x104 Vars = (object)
		EVENT_42 Op = 0x118 Vars = (object, string)
		EVENT_1 Op = 0x12e Vars = (object)
		EVENT_3 Op = 0x134 Vars = (object)
		EVENT_7 Op = 0x13a Vars = (int)
		EVENT_6 Op = 0x146 Vars = ()
		EVENT_41 Op = 0x15d Vars = (object)
		EVENT_10 Op = 0x1c7 Vars = (object)
		EVENT_28 Op = 0x1cb Vars = ()
	GTASK_3  Params = 0
		EVENT_0 Op = 0x1de Vars = (object)
		EVENT_17 Op = 0x1f2 Vars = (object)
		EVENT_30 Op = 0x206 Vars = (object, object)
		EVENT_40 Op = 0x220 Vars = (object)
		EVENT_42 Op = 0x234 Vars = (object, string)
		EVENT_6 Op = 0x24a Vars = ()
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0x2d3 Vars = (object)
		EVENT_17 Op = 0x2e7 Vars = (object)
		EVENT_30 Op = 0x2fb Vars = (object, object)
		EVENT_40 Op = 0x315 Vars = (object)
		EVENT_42 Op = 0x329 Vars = (object, string)
		EVENT_41 Op = 0x34a Vars = (object)
		EVENT_7 Op = 0x353 Vars = (int)
		EVENT_6 Op = 0x376 Vars = ()
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x399 Vars = ()
		EVENT_7 Op = 0x3fe Vars = (int)
		EVENT_41 Op = 0x439 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4b0 Vars = (int)
		EVENT_41 Op = 0x4eb Vars = (object)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x588 Vars = (int, int)

Events:
EVENT_16 Op = 0x73c Vars = (object, string)
EVENT_41 Op = 0x749 Vars = (object)
EVENT_22 Op = 0x74f Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: @ WaitForAnimEnd()
0x5: Pop(0)
0x6: Push("all")
0x7: Push("idle")
0x8: @ PlayAnimation(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: Return(); Pop(0)

0xd: GOTO 0x4

0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: @ StopAnimation()
0x11: Pop(0)
0x12: @ StopTrade()
0x13: Pop(0)
0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: EventDisable(0)
0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-2]
0x1a: Call 0x37

0x1b: Pop(1)
0x1c: PushEmpty(object)
0x1d: Stack[-1] = Stack[-2]
0x1e: Call 0x8ff

0x1f: Pop(1)
0x20: EventEnable(0)
0x21: @ Hold()
0x22: Pop(0)
0x23: GOTO 0x21

0x24: Return(); Pop(0)

0x25: PushEmpty(int, int)
0x26: PushEmpty(int, object)
0x27: Stack[-1] = Stack[-5]
0x28: Call 0x7ae

0x29: Stack[-3] = Stack[-2]
0x2a: Pop(2)
0x2b: Push((int) 0)
0x2c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: PushEmpty(object)
0x2f: Stack[-1] = Stack[-4]
0x30: Call 0x7b1

0x31: Pop(1)
0x32: Return(); Pop(2)

0x33: PushEmpty()
0x34: Call 0x7b7

0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x38: Pop(0); Push((bool) Stack[-21] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(string)
0x3b: Stack[-1] = "fdie"
0x3c: Call 0x8e

0x3d: Pop(1)
0x3e: GOTO 0x8d

0x3f: @@ GetPosition(Stack[-10])
0x40: Pop(0)
0x41: @ GetPosition(Stack[-9])
0x42: Pop(0)
0x43: @ GetDirection(Stack[-8])
0x44: Pop(0)
0x45: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x46: Push(CvectorIndex(Stack[-7], 0))
0x47: Push(CvectorIndex(Stack[-9], 0))
0x48: Pop(2); Push(Stack[-2] * Stack[-1]);
0x49: Push(CvectorIndex(Stack[-8], 2))
0x4a: Push(CvectorIndex(Stack[-10], 2))
0x4b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d: Push((int) 0)
0x4e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x50: Stack[-6] = "fdie"
0x51: GOTO 0x53

0x52: Stack[-6] = "bdie"
0x53: @ RemoveRTEnvelope()
0x54: Pop(0)
0x55: @ SetDeathState()
0x56: Pop(0)
0x57: @ Stop()
0x58: Pop(0)
0x59: @ StopAsync()
0x5a: Pop(0)
0x5b: Stack[-5] = Stack[-21]
0x5c: Push("GetScriptProperty")
0x5d: Push((int) 2)
0x5e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: Push("Owner")
0x61: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x62: Pop(1)
0x63: Push(Stack[-4])
0x64: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x65: Push("Owner")
0x66: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x67: Pop(1)
0x68: Pop(0); Push((bool) Stack[-5] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-5] = Stack[-21]
0x6b: Push("@GetEyesHeight")
0x6c: Push((int) 1)
0x6d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @@ GetEyesHeight(Stack[-2])
0x70: Pop(0)
0x71: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x72: Push(CvectorIndex(Stack[-1], 1))
0x73: Stack[-1] = Stack[-3]
0x74: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x75: Push("head")
0x76: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x77: Pop(1)
0x78: Stack[-3] = (bool) 1
0x79: GOTO 0x7b

0x7a: Stack[-3] = (bool) 0
0x7b: Push("all")
0x7c: @ PlayAnimation(Stack[-1], Stack[-7])
0x7d: Pop(1)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push(Stack[-3])
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: @ StopAsync()
0x83: Pop(0)
0x84: Push("head")
0x85: @ UnlookAsync(Stack[-1])
0x86: Pop(1)
0x87: Push("all")
0x88: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x89: Pop(1)
0x8a: @ RemoveEnvelope()
0x8b: Pop(0)
0x8c: Stack[-5] = 0
0x8d: Return(); Pop(20)

0x8e: PushEmpty()
0x8f: @ RemoveRTEnvelope()
0x90: Pop(0)
0x91: @ SetDeathState()
0x92: Pop(0)
0x93: @ Stop()
0x94: Pop(0)
0x95: @ StopAsync()
0x96: Pop(0)
0x97: @ StopSecondaryAnimation()
0x98: Pop(0)
0x99: Push("all")
0x9a: @ PlayAnimation(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push("all")
0x9f: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xa0: Pop(1)
0xa1: @ RemoveEnvelope()
0xa2: Pop(0)
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Return(); Pop(0)

0xaa: Push((bool) 1)
0xab: @ SensePlayerOnly(Stack[-1])
0xac: Pop(1)
0xad: PushEmpty()
0xae: Call 0x8a1

0xaf: Pop(0)
0xb0: PushEmpty()
0xb1: Call 0xb9

0xb2: Pop(0)
0xb3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb4: PushEmpty()
0xb5: Call 0x18e

0xb6: Pop(0)
0xb7: GOTO 0xb3

0xb8: Return(); Pop(0)

0xb9: PushEmpty(bool)
0xba: Call 0x65c

0xbb: Pop(0)
0xbc: Pop(1); Push((bool) Stack[-1] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: PushEmpty()
0xbf: Call 0x7b7

0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: PushEmpty(int, int)
0xc3: PushEmpty(int, object)
0xc4: Stack[-1] = Stack[-5]
0xc5: Call 0x7ae

0xc6: Stack[-3] = Stack[-2]
0xc7: Pop(2)
0xc8: Push((int) 0)
0xc9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcb: Push((int) 1)
0xcc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: PushEmpty()
0xcf: Call 0x14d

0xd0: Pop(0)
0xd1: PushEmpty(object)
0xd2: Stack[-1] = Stack[-4]
0xd3: Call 0x7b1

0xd4: Pop(1)
0xd5: Return(); Pop(2)

0xd6: PushEmpty(int, int)
0xd7: PushEmpty(int, object)
0xd8: Stack[-1] = Stack[-5]
0xd9: Call 0x780

0xda: Stack[-3] = Stack[-2]
0xdb: Pop(2)
0xdc: Push((int) 0)
0xdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdf: Push((int) 1)
0xe0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: PushEmpty()
0xe3: Call 0x14d

0xe4: Pop(0)
0xe5: PushEmpty(object)
0xe6: Stack[-1] = Stack[-4]
0xe7: Call 0x78a

0xe8: Pop(1)
0xe9: Return(); Pop(2)

0xea: PushEmpty(int, int)
0xeb: PushEmpty(bool, object, object)
0xec: Stack[-2] = Stack[-7]
0xed: Stack[-1] = Stack[-6]
0xee: Call 0x8d1

0xef: Pop(2)
0xf0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf1: PushEmpty(int, object)
0xf2: Stack[-1] = Stack[-6]
0xf3: Call 0x792

0xf4: Stack[-3] = Stack[-2]
0xf5: Pop(2)
0xf6: Push((int) 0)
0xf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf9: Push((int) 1)
0xfa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: PushEmpty()
0xfd: Call 0x14d

0xfe: Pop(0)
0xff: PushEmpty(object)
0x100: Stack[-1] = Stack[-5]
0x101: Call 0x79c

0x102: Pop(1)
0x103: Return(); Pop(2)

0x104: PushEmpty(int, int)
0x105: PushEmpty(int, object)
0x106: Stack[-1] = Stack[-5]
0x107: Call 0x7a4

0x108: Stack[-3] = Stack[-2]
0x109: Pop(2)
0x10a: Push((int) 0)
0x10b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10d: Push((int) 1)
0x10e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: PushEmpty()
0x111: Call 0x14d

0x112: Pop(0)
0x113: PushEmpty(object)
0x114: Stack[-1] = Stack[-4]
0x115: Call 0x7a7

0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: PushEmpty(int, int)
0x119: PushEmpty(int, string, object)
0x11a: Stack[-2] = Stack[-6]
0x11b: Stack[-1] = Stack[-7]
0x11c: Call 0x7a9

0x11d: Stack[-4] = Stack[-3]
0x11e: Pop(3)
0x11f: Push((int) 0)
0x120: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x122: Push((int) 1)
0x123: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: PushEmpty()
0x126: Call 0x14d

0x127: Pop(0)
0x128: PushEmpty(string, object)
0x129: Stack[-2] = Stack[-5]
0x12a: Stack[-1] = Stack[-6]
0x12b: Call 0x7ac

0x12c: Pop(2)
0x12d: Return(); Pop(2)

0x12e: PushEmpty()
0x12f: PushEmpty(object)
0x130: Stack[-1] = Stack[-2]
0x131: Call 0x166

0x132: Pop(1)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: PushEmpty(object)
0x136: Stack[-1] = Stack[-2]
0x137: Call 0x166

0x138: Pop(1)
0x139: Return(); Pop(0)

0x13a: PushEmpty()
0x13b: Push((int) 110)
0x13c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: Return(); Pop(0)

0x13f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x140: Push((int) 110)
0x141: @ KillTimer(Stack[-1])
0x142: Pop(1)
0x143: @ ResetAAS()
0x144: Pop(0)
0x145: Return(); Pop(0)

0x146: PushEmpty()
0x147: Call 0x14d

0x148: Pop(0)
0x149: PushEmpty()
0x14a: Call 0x7b7

0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: Push((int) 110)
0x14e: @ KillTimer(Stack[-1])
0x14f: Pop(1)
0x150: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x151: PushEmpty()
0x152: Call 0x1ce

0x153: Pop(0)
0x154: Return(); Pop(0)

0x155: Push((int) 110)
0x156: @ KillTimer(Stack[-1])
0x157: Pop(1)
0x158: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x159: PushEmpty()
0x15a: Call 0x1d5

0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty()
0x15f: Call 0x14d

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[-2]
0x163: Call 0x749

0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty(bool, int, bool, int)
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[-7]
0x169: Call 0x5f6

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Return(); Pop(4)

0x16e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: Return(); Pop(4)

0x171: @ IsPlayerActor(Stack[-5], Stack[-2])
0x172: Pop(0)
0x173: Pop(0); Push((bool) Stack[-2] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Return(); Pop(4)

0x176: PushEmpty(int, object)
0x177: Stack[-1] = Stack[-7]
0x178: Call 0x76f

0x179: Stack[-3] = Stack[-2]
0x17a: Pop(2)
0x17b: Push((int) 0)
0x17c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17e: Push((int) 1)
0x17f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: PushEmpty()
0x182: Call 0x155

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-6]
0x186: Call 0x778

0x187: Pop(1)
0x188: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x189: Push((int) 110)
0x18a: Push((float)10.0)
0x18b: @ SetTimer(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: Return(); Pop(4)

0x18e: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x18f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x190: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x191: Push((float)0.5)
0x192: @ rand(Stack[-8], Stack[-1])
0x193: Pop(1)
0x194: @ Sleep(Stack[-7])
0x195: Pop(0)
0x196: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x198: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19a: @ GetPosition(Stack[-5])
0x19b: Pop(0)
0x19c: @ GetCameraFarDistance(Stack[-4])
0x19d: Pop(0)
0x19e: Push((float)2.5)
0x19f: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x1a0: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x1a1: Pop(0)
0x1a2: Push(Stack[-3])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1a9

0x1a5: Push((int) 1)
0x1a6: @ Sleep(Stack[-1])
0x1a7: Pop(1)
0x1a8: GOTO 0x19a

0x1a9: GOTO 0x1ab

0x1aa: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ab: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x1ac: Pop(0)
0x1ad: Pop(0); Push(( Stack[-2] != 0 )
0x1ae: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1af: @ RotatePath(Stack[-2], Stack[-1])
0x1b0: Pop(0)
0x1b1: Push(Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b3: PushEmpty(bool)
0x1b4: Call 0x1dc

0x1b5: Pop(0)
0x1b6: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1b7: Pop(1)
0x1b8: Stack[-2] = 0
0x1b9: Push(Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty()
0x1bc: Push(-0, 0); TaskCall(3)
0x1bd: Call 0x251

0x1be: Pop(-0, 0); TaskReturn
0x1bf: Pop(0)
0x1c0: GOTO 0x1c4

0x1c1: Push((int) 1)
0x1c2: @ Sleep(Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-2] = 0
0x1c5: GOTO 0x196

0x1c6: Return(); Pop(14)

0x1c7: PushEmpty()
0x1c8: @ RequestClearPath(Stack[-1])
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: @ Stop()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1cf: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1d0: @ Stop()
0x1d1: Pop(0)
0x1d2: @ StopGroup0()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d6: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1d7: @ Stop()
0x1d8: Pop(0)
0x1d9: @ StopGroup0()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: Stack[-1] = (bool) 0
0x1dd: Return(); Pop(0)

0x1de: PushEmpty(int, int)
0x1df: PushEmpty(int, object)
0x1e0: Stack[-1] = Stack[-5]
0x1e1: Call 0x7ae

0x1e2: Stack[-3] = Stack[-2]
0x1e3: Pop(2)
0x1e4: Push((int) 0)
0x1e5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e7: Push((int) 1)
0x1e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: PushEmpty()
0x1eb: Call 0x296

0x1ec: Pop(0)
0x1ed: PushEmpty(object)
0x1ee: Stack[-1] = Stack[-4]
0x1ef: Call 0x7b1

0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty(int, int)
0x1f3: PushEmpty(int, object)
0x1f4: Stack[-1] = Stack[-5]
0x1f5: Call 0x780

0x1f6: Stack[-3] = Stack[-2]
0x1f7: Pop(2)
0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fb: Push((int) 1)
0x1fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fe: PushEmpty()
0x1ff: Call 0x296

0x200: Pop(0)
0x201: PushEmpty(object)
0x202: Stack[-1] = Stack[-4]
0x203: Call 0x78a

0x204: Pop(1)
0x205: Return(); Pop(2)

0x206: PushEmpty(int, int)
0x207: PushEmpty(bool, object, object)
0x208: Stack[-2] = Stack[-7]
0x209: Stack[-1] = Stack[-6]
0x20a: Call 0x8d1

0x20b: Pop(2)
0x20c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20d: PushEmpty(int, object)
0x20e: Stack[-1] = Stack[-6]
0x20f: Call 0x792

0x210: Stack[-3] = Stack[-2]
0x211: Pop(2)
0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x215: Push((int) 1)
0x216: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x218: PushEmpty()
0x219: Call 0x296

0x21a: Pop(0)
0x21b: PushEmpty(object)
0x21c: Stack[-1] = Stack[-5]
0x21d: Call 0x79c

0x21e: Pop(1)
0x21f: Return(); Pop(2)

0x220: PushEmpty(int, int)
0x221: PushEmpty(int, object)
0x222: Stack[-1] = Stack[-5]
0x223: Call 0x7a4

0x224: Stack[-3] = Stack[-2]
0x225: Pop(2)
0x226: Push((int) 0)
0x227: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x229: Push((int) 1)
0x22a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22c: PushEmpty()
0x22d: Call 0x296

0x22e: Pop(0)
0x22f: PushEmpty(object)
0x230: Stack[-1] = Stack[-4]
0x231: Call 0x7a7

0x232: Pop(1)
0x233: Return(); Pop(2)

0x234: PushEmpty(int, int)
0x235: PushEmpty(int, string, object)
0x236: Stack[-2] = Stack[-6]
0x237: Stack[-1] = Stack[-7]
0x238: Call 0x7a9

0x239: Stack[-4] = Stack[-3]
0x23a: Pop(3)
0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23e: Push((int) 1)
0x23f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: PushEmpty()
0x242: Call 0x296

0x243: Pop(0)
0x244: PushEmpty(string, object)
0x245: Stack[-2] = Stack[-5]
0x246: Stack[-1] = Stack[-6]
0x247: Call 0x7ac

0x248: Pop(2)
0x249: Return(); Pop(2)

0x24a: PushEmpty()
0x24b: Call 0x296

0x24c: Pop(0)
0x24d: PushEmpty()
0x24e: Call 0x7b7

0x24f: Pop(0)
0x250: Return(); Pop(0)

0x251: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x252: @ WaitForAnimEnd()
0x253: Pop(0)
0x254: PushEmpty(bool)
0x255: Call 0x65c

0x256: Pop(0)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(14)

0x25a: PushEmpty(int)
0x25b: Call 0x75e

0x25c: Stack[-8] = Stack[-1]
0x25d: Pop(1)
0x25e: Stack[-6] = (int) 0
0x25f: PushEmpty(bool)
0x260: Stack[-1] = (bool) 0
0x261: Push((int) 5)
0x262: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: PushEmpty(bool)
0x265: Call 0x65c

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x26a: Push((int) 3)
0x26b: @ irand(Stack[-6], Stack[-1])
0x26c: Pop(1)
0x26d: Push((int) 0)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x270: Push(Stack[-7])
0x271: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x272: @ irand(Stack[-4], Stack[-7])
0x273: Pop(0)
0x274: Push("all")
0x275: PushEmpty(string, int)
0x276: Stack[-1] = Stack[-7]
0x277: Call 0x757

0x278: Pop(1)
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: @ WaitForAnimEnd(Stack[-3])
0x27c: Pop(0)
0x27d: Pop(0); Push((bool) Stack[-3] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x295

0x280: GOTO 0x292

0x281: Push((int) 1)
0x282: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x284: Push((int) 4)
0x285: @ rand(Stack[-3], Stack[-1])
0x286: Pop(1)
0x287: Push((int) 1)
0x288: Pop(1); Push(Stack[-3] + Stack[-1]);
0x289: @ Sleep(Stack[-1], Stack[-2])
0x28a: Pop(1)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x295

0x28e: GOTO 0x292

0x28f: Push(Stack[-6])
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x295

0x292: Push((int) 1)
0x293: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x294: GOTO 0x25f

0x295: Return(); Pop(14)

0x296: @ StopAnimation()
0x297: Pop(0)
0x298: @ StopGroup0()
0x299: Pop(0)
0x29a: Return(); Pop(0)

0x29b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x29c: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x29d: PushEmpty()
0x29e: Call 0x2ce

0x29f: Pop(0)
0x2a0: @ GetDirection(Stack[-3])
0x2a1: Pop(0)
0x2a2: PushEmpty(cvector, object)
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call 0x5b2

0x2a5: Stack[-4] = Stack[-2]
0x2a6: Pop(2)
0x2a7: PushEmpty(float, cvector, cvector)
0x2a8: Stack[-2] = Stack[-6]
0x2a9: Stack[-1] = Stack[-5]
0x2aa: Call 0x71a

0x2ab: Pop(2)
0x2ac: Push((int) 0)
0x2ad: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2af: PushEmpty(object)
0x2b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b1: Call 0x651

0x2b2: Pop(1)
0x2b3: Stack[-1] = (bool) 1
0x2b4: GOTO 0x2b8

0x2b5: Push((float)1.5)
0x2b6: @ Sleep(Stack[-1], Stack[-2])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2ba: PushEmpty(object)
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call 0x651

0x2bd: Pop(1)
0x2be: Push((int) 111)
0x2bf: Push((float)0.5)
0x2c0: @ SetTimer(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: Push((float)5.0)
0x2c3: @ Sleep(Stack[-1])
0x2c4: Pop(1)
0x2c5: Push((int) 111)
0x2c6: @ KillTimer(Stack[-1])
0x2c7: Pop(1)
0x2c8: @ StopAsync()
0x2c9: Pop(0)
0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(object)
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call 0x6e3

0x2d1: Pop(1)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(int, int)
0x2d4: PushEmpty(int, object)
0x2d5: Stack[-1] = Stack[-5]
0x2d6: Call 0x7ae

0x2d7: Stack[-3] = Stack[-2]
0x2d8: Pop(2)
0x2d9: Push((int) 0)
0x2da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2dc: Push((int) 1)
0x2dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: PushEmpty()
0x2e0: Call 0x33f

0x2e1: Pop(0)
0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[-4]
0x2e4: Call 0x7b1

0x2e5: Pop(1)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(int, int)
0x2e8: PushEmpty(int, object)
0x2e9: Stack[-1] = Stack[-5]
0x2ea: Call 0x780

0x2eb: Stack[-3] = Stack[-2]
0x2ec: Pop(2)
0x2ed: Push((int) 0)
0x2ee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f0: Push((int) 1)
0x2f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: PushEmpty()
0x2f4: Call 0x33f

0x2f5: Pop(0)
0x2f6: PushEmpty(object)
0x2f7: Stack[-1] = Stack[-4]
0x2f8: Call 0x78a

0x2f9: Pop(1)
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(int, int)
0x2fc: PushEmpty(bool, object, object)
0x2fd: Stack[-2] = Stack[-7]
0x2fe: Stack[-1] = Stack[-6]
0x2ff: Call 0x8d1

0x300: Pop(2)
0x301: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x302: PushEmpty(int, object)
0x303: Stack[-1] = Stack[-6]
0x304: Call 0x792

0x305: Stack[-3] = Stack[-2]
0x306: Pop(2)
0x307: Push((int) 0)
0x308: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30a: Push((int) 1)
0x30b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: PushEmpty()
0x30e: Call 0x33f

0x30f: Pop(0)
0x310: PushEmpty(object)
0x311: Stack[-1] = Stack[-5]
0x312: Call 0x79c

0x313: Pop(1)
0x314: Return(); Pop(2)

0x315: PushEmpty(int, int)
0x316: PushEmpty(int, object)
0x317: Stack[-1] = Stack[-5]
0x318: Call 0x7a4

0x319: Stack[-3] = Stack[-2]
0x31a: Pop(2)
0x31b: Push((int) 0)
0x31c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x31e: Push((int) 1)
0x31f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x321: PushEmpty()
0x322: Call 0x33f

0x323: Pop(0)
0x324: PushEmpty(object)
0x325: Stack[-1] = Stack[-4]
0x326: Call 0x7a7

0x327: Pop(1)
0x328: Return(); Pop(2)

0x329: PushEmpty(int, int)
0x32a: PushEmpty(int, string, object)
0x32b: Stack[-2] = Stack[-6]
0x32c: Stack[-1] = Stack[-7]
0x32d: Call 0x7a9

0x32e: Stack[-4] = Stack[-3]
0x32f: Pop(3)
0x330: Push((int) 0)
0x331: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x333: Push((int) 1)
0x334: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x336: PushEmpty()
0x337: Call 0x33f

0x338: Pop(0)
0x339: PushEmpty(string, object)
0x33a: Stack[-2] = Stack[-5]
0x33b: Stack[-1] = Stack[-6]
0x33c: Call 0x7ac

0x33d: Pop(2)
0x33e: Return(); Pop(2)

0x33f: @ StopGroup0()
0x340: Pop(0)
0x341: @ StopAsync()
0x342: Pop(0)
0x343: Push("head")
0x344: @ UnlookAsync(Stack[-1])
0x345: Pop(1)
0x346: Push((int) 111)
0x347: @ KillTimer(Stack[-1])
0x348: Pop(1)
0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty()
0x34c: Call 0x33f

0x34d: Pop(0)
0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-2]
0x350: Call 0x749

0x351: Pop(1)
0x352: Return(); Pop(0)

0x353: PushEmpty(cvector, cvector, cvector, cvector)
0x354: Push((int) 111)
0x355: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(4)

0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35a: Call 0x5f6

0x35b: Pop(1)
0x35c: Pop(1); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35e: PushEmpty()
0x35f: Call 0x33f

0x360: Pop(0)
0x361: Return(); Pop(4)

0x362: @ GetDirection(Stack[-2])
0x363: Pop(0)
0x364: PushEmpty(cvector, object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call 0x5b2

0x367: Stack[-3] = Stack[-2]
0x368: Pop(2)
0x369: PushEmpty(float, cvector, cvector)
0x36a: Stack[-2] = Stack[-5]
0x36b: Stack[-1] = Stack[-4]
0x36c: Call 0x71a

0x36d: Pop(2)
0x36e: Push((float)0.5)
0x36f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x371: PushEmpty(object)
0x372: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x373: Call 0x651

0x374: Pop(1)
0x375: Return(); Pop(4)

0x376: PushEmpty()
0x377: Call 0x33f

0x378: Pop(0)
0x379: PushEmpty()
0x37a: Call 0x7b7

0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: @ Face(Stack[-1])
0x37f: Pop(0)
0x380: Push("all")
0x381: Push("attack_on")
0x382: @ PlayAnimation(Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: @ WaitForAnimEnd()
0x385: Pop(0)
0x386: Push("all")
0x387: Push("attack_stay")
0x388: @ PlayAnimation(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: @ WaitForAnimEnd()
0x38b: Pop(0)
0x38c: Push("all")
0x38d: Push("attack_off")
0x38e: @ PlayAnimation(Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: @ WaitForAnimEnd()
0x391: Pop(0)
0x392: @ StopAsync()
0x393: Pop(0)
0x394: PushEmpty(object)
0x395: Stack[-1] = Stack[-2]
0x396: Call 0x3be

0x397: Pop(1)
0x398: Return(); Pop(0)

0x399: PushEmpty()
0x39a: Call 0x432

0x39b: Pop(0)
0x39c: PushEmpty()
0x39d: Call 0x7b7

0x39e: Pop(0)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3a1: @ GetPosition(Stack[-6])
0x3a2: Pop(0)
0x3a3: @@ GetPosition(Stack[-5])
0x3a4: Pop(0)
0x3a5: @ GetDirection(Stack[-4])
0x3a6: Pop(0)
0x3a7: PushEmpty(cvector, cvector)
0x3a8: PushEmpty(cvector, cvector)
0x3a9: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3aa: Call 0x6f5

0x3ab: Pop(1)
0x3ac: Push((float)0.75)
0x3ad: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3ae: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3af: Call 0x6f5

0x3b0: Stack[-5] = Stack[-2]
0x3b1: Pop(2)
0x3b2: Push((int) 32)
0x3b3: Push((float)7000.0)
0x3b4: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: Push((int) 100)
0x3b7: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3b8: Push((int) 0)
0x3b9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = (int) 0
0x3bc: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3bd: Return(); Pop(12)

0x3be: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3bf: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3c0: PushEmpty(cvector, float)
0x3c1: Stack[-1] = (float) 1.74533
0x3c2: Call 0x3a0

0x3c3: Stack[-7] = Stack[-2]
0x3c4: Pop(2)
0x3c5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3c6: Push((float)10000.0)
0x3c7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c9: Push("Can't retreat, distance: ")
0x3ca: Pop(0); Push(Sqrt(Stack[-5]))
0x3cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cc: @ Trace(Stack[-1])
0x3cd: Pop(1)
0x3ce: Push((float)0.5)
0x3cf: @ Sleep(Stack[-1])
0x3d0: Pop(1)
0x3d1: Return(); Pop(10)

0x3d2: Push(CvectorIndex(Stack[-5], 0))
0x3d3: Push(CvectorIndex(Stack[-6], 2))
0x3d4: @ Rotate(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: PushEmpty(cvector)
0x3d7: Call 0x5ad

0x3d8: Pop(0)
0x3d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3da: Push((int) 120)
0x3db: Push((float)0.5)
0x3dc: @ SetTimer(Stack[-2], Stack[-1])
0x3dd: Pop(2)
0x3de: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3df: Push((int) 1)
0x3e0: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3e1: Pop(1)
0x3e2: Push(Stack[-3])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: GOTO 0x3fd

0x3e7: GOTO 0x3fb

0x3e8: PushEmpty(cvector, float)
0x3e9: Stack[-1] = (float) 2.61799
0x3ea: Call 0x3a0

0x3eb: Stack[-4] = Stack[-2]
0x3ec: Pop(2)
0x3ed: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ee: Push((float)10000.0)
0x3ef: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f1: PushEmpty(cvector)
0x3f2: Call 0x5ad

0x3f3: Pop(0)
0x3f4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3f5: Push((int) 120)
0x3f6: Push((float)0.5)
0x3f7: @ SetTimer(Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: GOTO 0x3fb

0x3fa: GOTO 0x3fd

0x3fb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3fd: Return(); Pop(10)

0x3fe: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3ff: Push((int) 120)
0x400: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Return(); Pop(8)

0x403: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x405: @ Stop()
0x406: Pop(0)
0x407: Push((int) 1)
0x408: @ KillTimer(Stack[-1])
0x409: Pop(1)
0x40a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x40b: GOTO 0x431

0x40c: @ GetDirection(Stack[-4])
0x40d: Pop(0)
0x40e: Push((float)7000.0)
0x40f: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x410: Pop(1)
0x411: PushEmpty(cvector, float)
0x412: Stack[-1] = (float) 1.74533
0x413: Call 0x3a0

0x414: Stack[-4] = Stack[-2]
0x415: Pop(2)
0x416: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x417: PushEmpty(bool)
0x418: Stack[-1] = (bool) 0
0x419: Push((float)10000.0)
0x41a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41c: PushEmpty(bool)
0x41d: Stack[-1] = (bool) 1
0x41e: Pop(0); Push(Stack[-5] * Stack[-5]);
0x41f: Push((float)2.25)
0x420: Pop(2); Push(Stack[-2] * Stack[-1]);
0x421: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: PushEmpty(bool)
0x424: Call 0x442

0x425: Pop(0)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 0
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[-1] = (bool) 1
0x42a: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42b: @ Stop()
0x42c: Pop(0)
0x42d: PushEmpty(cvector)
0x42e: Call 0x5ad

0x42f: Pop(0)
0x430: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x431: Return(); Pop(8)

0x432: @ Stop()
0x433: Pop(0)
0x434: Push((int) 120)
0x435: @ KillTimer(Stack[-1])
0x436: Pop(1)
0x437: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: PushEmpty()
0x43b: Call 0x432

0x43c: Pop(0)
0x43d: PushEmpty(object)
0x43e: Stack[-1] = Stack[-2]
0x43f: Call 0x749

0x440: Pop(1)
0x441: Return(); Pop(0)

0x442: PushEmpty(cvector, cvector, cvector, cvector)
0x443: @ GetDirection(Stack[-2])
0x444: Pop(0)
0x445: PushEmpty(cvector, object)
0x446: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x447: Call 0x5b2

0x448: Stack[-3] = Stack[-2]
0x449: Pop(2)
0x44a: PushEmpty(float, cvector, cvector)
0x44b: Stack[-2] = Stack[-5]
0x44c: Stack[-1] = Stack[-4]
0x44d: Call 0x6ff

0x44e: Pop(2)
0x44f: Push((float)-0.34202)
0x450: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x451: Return(); Pop(4)

0x452: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x453: @ GetPosition(Stack[-6])
0x454: Pop(0)
0x455: @@ GetPosition(Stack[-5])
0x456: Pop(0)
0x457: @ GetDirection(Stack[-4])
0x458: Pop(0)
0x459: PushEmpty(cvector, cvector)
0x45a: PushEmpty(cvector, cvector)
0x45b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x45c: Call 0x6f5

0x45d: Pop(1)
0x45e: Push((float)0.75)
0x45f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x460: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x461: Call 0x6f5

0x462: Stack[-5] = Stack[-2]
0x463: Pop(2)
0x464: Push((int) 32)
0x465: Push((float)7000.0)
0x466: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: Push((int) 100)
0x469: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x46a: Push((int) 0)
0x46b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (int) 0
0x46e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x46f: Return(); Pop(12)

0x470: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x471: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x472: PushEmpty(cvector, float)
0x473: Stack[-1] = (float) 1.74533
0x474: Call 0x452

0x475: Stack[-7] = Stack[-2]
0x476: Pop(2)
0x477: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x478: Push((float)10000.0)
0x479: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47b: Push("Can't retreat, distance: ")
0x47c: Pop(0); Push(Sqrt(Stack[-5]))
0x47d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47e: @ Trace(Stack[-1])
0x47f: Pop(1)
0x480: Push((float)0.5)
0x481: @ Sleep(Stack[-1])
0x482: Pop(1)
0x483: Return(); Pop(10)

0x484: Push(CvectorIndex(Stack[-5], 0))
0x485: Push(CvectorIndex(Stack[-6], 2))
0x486: @ Rotate(Stack[-2], Stack[-1])
0x487: Pop(2)
0x488: PushEmpty(cvector)
0x489: Call 0x5ad

0x48a: Pop(0)
0x48b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x48c: Push((int) 120)
0x48d: Push((float)0.5)
0x48e: @ SetTimer(Stack[-2], Stack[-1])
0x48f: Pop(2)
0x490: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x491: Push((int) 1)
0x492: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x493: Pop(1)
0x494: Push(Stack[-3])
0x495: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x496: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: GOTO 0x4af

0x499: GOTO 0x4ad

0x49a: PushEmpty(cvector, float)
0x49b: Stack[-1] = (float) 2.61799
0x49c: Call 0x452

0x49d: Stack[-4] = Stack[-2]
0x49e: Pop(2)
0x49f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4a0: Push((float)10000.0)
0x4a1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a3: PushEmpty(cvector)
0x4a4: Call 0x5ad

0x4a5: Pop(0)
0x4a6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4a7: Push((int) 120)
0x4a8: Push((float)0.5)
0x4a9: @ SetTimer(Stack[-2], Stack[-1])
0x4aa: Pop(2)
0x4ab: GOTO 0x4ad

0x4ac: GOTO 0x4af

0x4ad: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x4af: Return(); Pop(10)

0x4b0: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4b1: Push((int) 120)
0x4b2: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Return(); Pop(8)

0x4b5: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b7: @ Stop()
0x4b8: Pop(0)
0x4b9: Push((int) 1)
0x4ba: @ KillTimer(Stack[-1])
0x4bb: Pop(1)
0x4bc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4bd: GOTO 0x4e3

0x4be: @ GetDirection(Stack[-4])
0x4bf: Pop(0)
0x4c0: Push((float)7000.0)
0x4c1: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4c2: Pop(1)
0x4c3: PushEmpty(cvector, float)
0x4c4: Stack[-1] = (float) 1.74533
0x4c5: Call 0x452

0x4c6: Stack[-4] = Stack[-2]
0x4c7: Pop(2)
0x4c8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4c9: PushEmpty(bool)
0x4ca: Stack[-1] = (bool) 0
0x4cb: Push((float)10000.0)
0x4cc: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4ce: PushEmpty(bool)
0x4cf: Stack[-1] = (bool) 1
0x4d0: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4d1: Push((float)2.25)
0x4d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d3: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d5: PushEmpty(bool)
0x4d6: Call 0x4f4

0x4d7: Pop(0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Stack[-1] = (bool) 0
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: Stack[-1] = (bool) 1
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4dd: @ Stop()
0x4de: Pop(0)
0x4df: PushEmpty(cvector)
0x4e0: Call 0x5ad

0x4e1: Pop(0)
0x4e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e3: Return(); Pop(8)

0x4e4: @ Stop()
0x4e5: Pop(0)
0x4e6: Push((int) 120)
0x4e7: @ KillTimer(Stack[-1])
0x4e8: Pop(1)
0x4e9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty()
0x4ec: PushEmpty()
0x4ed: Call 0x4e4

0x4ee: Pop(0)
0x4ef: PushEmpty(object)
0x4f0: Stack[-1] = Stack[-2]
0x4f1: Call 0x749

0x4f2: Pop(1)
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(cvector, cvector, cvector, cvector)
0x4f5: @ GetDirection(Stack[-2])
0x4f6: Pop(0)
0x4f7: PushEmpty(cvector, object)
0x4f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f9: Call 0x5b2

0x4fa: Stack[-3] = Stack[-2]
0x4fb: Pop(2)
0x4fc: PushEmpty(float, cvector, cvector)
0x4fd: Stack[-2] = Stack[-5]
0x4fe: Stack[-1] = Stack[-4]
0x4ff: Call 0x6ff

0x500: Pop(2)
0x501: Push((float)-0.34202)
0x502: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x503: Return(); Pop(4)

0x504: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x505: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x506: PushEmpty(bool, object)
0x507: Stack[-1] = Stack[-11]
0x508: Call 0x661

0x509: Pop(1)
0x50a: Pop(1); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50c: Stack[-10] = (int) -2
0x50d: Return(); Pop(8)

0x50e: @ CreateDialog(Stack[-4])
0x50f: Pop(0)
0x510: PushEmpty(int)
0x511: Call 0x89b

0x512: Pop(0)
0x513: @@ SetNPCName(Stack[-1])
0x514: Pop(1)
0x515: PushEmpty(string)
0x516: Call 0x89d

0x517: Pop(0)
0x518: @@ SetPhoto(Stack[-1])
0x519: Pop(1)
0x51a: PushEmpty(int)
0x51b: Call 0x7b8

0x51c: Pop(0)
0x51d: @@ SetPlayerName(Stack[-1])
0x51e: Pop(1)
0x51f: Stack[-2] = (int) -1
0x520: @ IsOverrideActive(Stack[-3])
0x521: Pop(0)
0x522: Push(Stack[-3])
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-10] = (int) -2
0x525: Return(); Pop(8)

0x526: @ DoDialog(Stack[-4])
0x527: Pop(0)
0x528: PushEmpty(object, object)
0x529: Stack[-2] = Stack[-11]
0x52a: Stack[-1] = Stack[-6]
0x52b: Push(-2, 4); TaskCall(8)
0x52c: Call 0x543

0x52d: Pop(-2, 4); TaskReturn
0x52e: Pop(2)
0x52f: @@ IsDialogEnd(Stack[-1])
0x530: Pop(0)
0x531: Pop(0); Push((bool) Stack[-1] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x533: @ sync()
0x534: Pop(0)
0x535: @@ IsDialogEnd(Stack[-1])
0x536: Pop(0)
0x537: GOTO 0x531

0x538: PushEmpty(object)
0x539: Stack[-1] = Stack[-10]
0x53a: Call 0x699

0x53b: Pop(1)
0x53c: @ StopDialog(Stack[-4])
0x53d: Pop(0)
0x53e: @@ GetReturnValue(Stack[-2])
0x53f: Pop(0)
0x540: Stack[-10] = Stack[-2]
0x541: Return(); Pop(8)

0x542: Stack[-4] = 0
0x543: PushEmpty()
0x544: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x545: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x546: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x547: Push((int) 1)
0x548: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x549: PushEmpty(string)
0x54a: Stack[-1] = "Neutral"
0x54b: Call 0x578

0x54c: Pop(1)
0x54d: Push((int) 15228)
0x54e: @@ SetMessage(Stack[-1])
0x54f: Pop(1)
0x550: @@ ClearReplies()
0x551: Pop(0)
0x552: Push((int) 15229)
0x553: Push((int) -1)
0x554: Push((int) 16506)
0x555: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x556: Pop(3)
0x557: GOTO 0x55a

0x558: Return(); Pop(0)

0x559: GOTO 0x547

0x55a: PushEmpty(bool)
0x55b: Call 0x89f

0x55c: Pop(0)
0x55d: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x55e: @ lshWaitForAnimEnd()
0x55f: Pop(0)
0x560: Push( Stack[3 + Tasks[-1].StackPointer] )
0x561: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x562: GOTO 0x568

0x563: PushEmpty(string)
0x564: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x565: Call 0x6d1

0x566: Pop(1)
0x567: GOTO 0x55e

0x568: GOTO 0x577

0x569: Push("all")
0x56a: Push("idle")
0x56b: @ PlayAnimation(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: @ WaitForAnimEnd()
0x56e: Pop(0)
0x56f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: GOTO 0x577

0x572: Push("all")
0x573: Push("idle")
0x574: @ PlayAnimation(Stack[-2], Stack[-1])
0x575: Pop(2)
0x576: GOTO 0x56d

0x577: Return(); Pop(0)

0x578: PushEmpty()
0x579: PushEmpty(bool)
0x57a: Call 0x89f

0x57b: Pop(0)
0x57c: Pop(1); Push((bool) Stack[-1] == 0)
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Return(); Pop(0)

0x57f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x580: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x581: Return(); Pop(0)

0x582: PushEmpty(string)
0x583: Stack[-1] = Stack[-2]
0x584: Call 0x6d1

0x585: Pop(1)
0x586: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x587: Return(); Pop(0)

0x588: PushEmpty()
0x589: Push((int) 1)
0x58a: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x58b: PushEmpty()
0x58c: Call 0x6ee

0x58d: Pop(0)
0x58e: Push((int) 16505)
0x58f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x591: PushEmpty(string)
0x592: Stack[-1] = "Neutral"
0x593: Call 0x578

0x594: Pop(1)
0x595: Push((int) 15228)
0x596: @@ SetMessage(Stack[-1])
0x597: Pop(1)
0x598: @@ ClearReplies()
0x599: Pop(0)
0x59a: Push((int) 15229)
0x59b: Push((int) -1)
0x59c: Push((int) 16506)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Return(); Pop(0)

0x5a0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5a1: PushEmpty(bool)
0x5a2: Call 0x89f

0x5a3: Pop(0)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a5: @ lshStopAnimation()
0x5a6: Pop(0)
0x5a7: GOTO 0x5aa

0x5a8: @ StopAnimation()
0x5a9: Pop(0)
0x5aa: Return(); Pop(0)

0x5ab: GOTO 0x589

0x5ac: Return(); Pop(0)

0x5ad: PushEmpty(cvector, cvector)
0x5ae: @ GetPosition(Stack[-1])
0x5af: Pop(0)
0x5b0: Stack[-3] = Stack[-1]
0x5b1: Return(); Pop(2)

0x5b2: PushEmpty(cvector, cvector, cvector, cvector)
0x5b3: @ GetPosition(Stack[-2])
0x5b4: Pop(0)
0x5b5: @@ GetPosition(Stack[-1])
0x5b6: Pop(0)
0x5b7: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5b8: Return(); Pop(4)

0x5b9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5ba: @ GetPosition(Stack[-3])
0x5bb: Pop(0)
0x5bc: @@ GetPosition(Stack[-2])
0x5bd: Pop(0)
0x5be: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5bf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5c0: Return(); Pop(6)

0x5c1: PushEmpty(bool, bool)
0x5c2: Push("HasProperty")
0x5c3: Push((int) 2)
0x5c4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5c5: Pop(1); Push((bool) Stack[-1] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-5] = (bool) 0
0x5c8: Return(); Pop(2)

0x5c9: @@ HasProperty(Stack[-3], Stack[-1])
0x5ca: Pop(0)
0x5cb: Stack[-5] = Stack[-1]
0x5cc: Return(); Pop(2)

0x5cd: PushEmpty(bool, bool)
0x5ce: @@ IsDead(Stack[-1])
0x5cf: Pop(0)
0x5d0: Stack[-4] = Stack[-1]
0x5d1: Return(); Pop(2)

0x5d2: PushEmpty(object, object, object, object)
0x5d3: Pop(0); Push((bool) Stack[-5] == 0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d5: Stack[-6] = (bool) 0
0x5d6: Return(); Pop(4)

0x5d7: PushEmpty(bool)
0x5d8: Stack[-1] = (bool) 0
0x5d9: Push("IsDead")
0x5da: Push((int) 1)
0x5db: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5dc: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5dd: PushEmpty(bool, object)
0x5de: Stack[-1] = Stack[-8]
0x5df: Call 0x5cd

0x5e0: Pop(1)
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e2: Stack[-1] = (bool) 1
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e4: Stack[-6] = (bool) 0
0x5e5: Return(); Pop(4)

0x5e6: @ GetScene(Stack[-2])
0x5e7: Pop(0)
0x5e8: Pop(0); Push((bool) Stack[-2] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5ea: Stack[-6] = (bool) 0
0x5eb: Return(); Pop(4)

0x5ec: @@ GetScene(Stack[-1])
0x5ed: Pop(0)
0x5ee: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: Stack[-6] = (bool) 0
0x5f1: Return(); Pop(4)

0x5f2: Stack[-6] = (bool) 1
0x5f3: Return(); Pop(4)

0x5f4: Stack[-1] = 0
0x5f5: Stack[-2] = 0
0x5f6: PushEmpty(int, int)
0x5f7: PushEmpty(bool, object)
0x5f8: Stack[-1] = Stack[-5]
0x5f9: Call 0x5d2

0x5fa: Pop(1)
0x5fb: Pop(1); Push((bool) Stack[-1] == 0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-4] = (bool) 0
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(bool, object, string)
0x600: Stack[-2] = Stack[-6]
0x601: Stack[-1] = "noaccess"
0x602: Call 0x5c1

0x603: Pop(2)
0x604: Pop(1); Push((bool) Stack[-1] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-4] = (bool) 1
0x607: Return(); Pop(2)

0x608: Push("noaccess")
0x609: @@ GetProperty(Stack[-1], Stack[-2])
0x60a: Pop(1)
0x60b: Push((int) 0)
0x60c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x60d: Return(); Pop(2)

0x60e: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x60f: PushEmpty(bool)
0x610: Stack[-1] = (bool) 0
0x611: Push((int) 4)
0x612: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x614: Push((int) 5)
0x615: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x617: Stack[-1] = (bool) 1
0x618: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x619: @ GetScene(Stack[-10])
0x61a: Pop(0)
0x61b: @ GetPosition(Stack[-8])
0x61c: Pop(0)
0x61d: @ GetEyesHeight(Stack[-7])
0x61e: Pop(0)
0x61f: Push(CvectorIndex(Stack[-8], 1))
0x620: Push((int) 2)
0x621: Pop(1); Push(Stack[-9] / Stack[-1]);
0x622: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x623: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x624: Push("scripted")
0x625: Push(CVector(0.0, 0.0, 1.0))
0x626: Push("blood.xml")
0x627: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Stack[-9] = 0
0x62a: Stack[-10] = 0
0x62b: Pop(0); Push((bool) Stack[-23] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62d: Return(); Pop(20)

0x62e: @ GetSecondaryAnimationType(Stack[-6])
0x62f: Pop(0)
0x630: Push((int) 0)
0x631: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x633: Return(); Pop(20)

0x634: @@ GetPosition(Stack[-5])
0x635: Pop(0)
0x636: @ GetPosition(Stack[-4])
0x637: Pop(0)
0x638: @ GetDirection(Stack[-3])
0x639: Pop(0)
0x63a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x63b: Push(CvectorIndex(Stack[-2], 0))
0x63c: Push(CvectorIndex(Stack[-4], 0))
0x63d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x63e: Push(CvectorIndex(Stack[-3], 2))
0x63f: Push(CvectorIndex(Stack[-5], 2))
0x640: Pop(2); Push(Stack[-2] * Stack[-1]);
0x641: Pop(2); Push(Stack[-2] + Stack[-1]);
0x642: Push((int) 0)
0x643: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x645: Stack[-1] = "fhit"
0x646: GOTO 0x648

0x647: Stack[-1] = "bhit"
0x648: Push("hit_react")
0x649: Push("1")
0x64a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x64b: Push("2")
0x64c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x64d: Push((int) -10)
0x64e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(4)
0x650: Return(); Pop(20)

0x651: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x652: @@ GetPosition(Stack[-3])
0x653: Pop(0)
0x654: @ GetPosition(Stack[-2])
0x655: Pop(0)
0x656: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x657: Push(CvectorIndex(Stack[-1], 0))
0x658: Push(CvectorIndex(Stack[-2], 2))
0x659: @ RotateAsync(Stack[-2], Stack[-1])
0x65a: Pop(2)
0x65b: Return(); Pop(6)

0x65c: PushEmpty(bool, bool)
0x65d: @ IsLoaded(Stack[-1])
0x65e: Pop(0)
0x65f: Stack[-3] = Stack[-1]
0x660: Return(); Pop(2)

0x661: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x662: @@ GetPosition(Stack[-7])
0x663: Pop(0)
0x664: @@ GetEyesHeight(Stack[-8])
0x665: Pop(0)
0x666: Push(CvectorIndex(Stack[-7], 1))
0x667: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x668: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x669: @ GetPosition(Stack[-6])
0x66a: Pop(0)
0x66b: @ GetEyesHeight(Stack[-8])
0x66c: Pop(0)
0x66d: Push(CvectorIndex(Stack[-6], 1))
0x66e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x66f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x670: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x671: Push(CvectorIndex(Stack[-5], 1))
0x672: Stack[-1] = (int) 0
0x673: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x674: Pop(0); Push(Stack[-5] | Stack[-5]);
0x675: Pop(1); Push(Sqrt(Stack[-1]))
0x676: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x677: Stack[-4] = -Stack[-5]; Pop(0);
0x678: Push((int) 70)
0x679: Pop(1); Push(Stack[-6] * Stack[-1]);
0x67a: PushEmpty(cvector, cvector)
0x67b: Push(CVector(0.0, 1.0, 0.0))
0x67c: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x67d: Call 0x6f5

0x67e: Pop(1)
0x67f: Push((int) 25)
0x680: Pop(2); Push(Stack[-2] * Stack[-1]);
0x681: Pop(2); Push(Stack[-2] + Stack[-1]);
0x682: Push(CVector(0.0, 10.0, 0.0))
0x683: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x684: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x685: @ IsOverrideActive(Stack[-1])
0x686: Pop(0)
0x687: Push(Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-18] = (bool) 0
0x68a: Return(); Pop(16)

0x68b: @ StopWorld()
0x68c: Pop(0)
0x68d: @ CameraTransit(Stack[-2], Stack[-4])
0x68e: Pop(0)
0x68f: Push(CvectorIndex(Stack[-3], 0))
0x690: Push(CvectorIndex(Stack[-4], 2))
0x691: @ Rotate(Stack[-2], Stack[-1])
0x692: Pop(2)
0x693: @ CameraWaitForPlayFinish()
0x694: Pop(0)
0x695: @ ResumeWorld()
0x696: Pop(0)
0x697: Stack[-18] = (bool) 1
0x698: Return(); Pop(16)

0x699: PushEmpty()
0x69a: @ CameraSwitchToNormal()
0x69b: Pop(0)
0x69c: Return(); Pop(0)

0x69d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x69e: @@ GetPosition(Stack[-7])
0x69f: Pop(0)
0x6a0: @@ GetEyesHeight(Stack[-8])
0x6a1: Pop(0)
0x6a2: Push(CvectorIndex(Stack[-7], 1))
0x6a3: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x6a4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6a5: @ GetPosition(Stack[-6])
0x6a6: Pop(0)
0x6a7: @ GetEyesHeight(Stack[-8])
0x6a8: Pop(0)
0x6a9: Push(CvectorIndex(Stack[-6], 1))
0x6aa: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x6ab: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6ac: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x6ad: Push(CvectorIndex(Stack[-5], 1))
0x6ae: Stack[-1] = (int) 0
0x6af: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x6b0: Pop(0); Push(Stack[-5] | Stack[-5]);
0x6b1: Pop(1); Push(Sqrt(Stack[-1]))
0x6b2: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x6b3: Stack[-4] = -Stack[-5]; Pop(0);
0x6b4: Push((int) 70)
0x6b5: Pop(1); Push(Stack[-6] * Stack[-1]);
0x6b6: Push(CVector(0.0, 10.0, 0.0))
0x6b7: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x6b8: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x6b9: @ IsOverrideActive(Stack[-1])
0x6ba: Pop(0)
0x6bb: Push(Stack[-1])
0x6bc: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6bd: Stack[-18] = (bool) 0
0x6be: Return(); Pop(16)

0x6bf: @ StopWorld()
0x6c0: Pop(0)
0x6c1: @ CameraTransit(Stack[-2], Stack[-4])
0x6c2: Pop(0)
0x6c3: Push(CvectorIndex(Stack[-3], 0))
0x6c4: Push(CvectorIndex(Stack[-4], 2))
0x6c5: @ Rotate(Stack[-2], Stack[-1])
0x6c6: Pop(2)
0x6c7: @ CameraWaitForPlayFinish()
0x6c8: Pop(0)
0x6c9: @ ResumeWorld()
0x6ca: Pop(0)
0x6cb: Stack[-18] = (bool) 1
0x6cc: Return(); Pop(16)

0x6cd: PushEmpty()
0x6ce: @ CameraSwitchToNormal()
0x6cf: Pop(0)
0x6d0: Return(); Pop(0)

0x6d1: PushEmpty(float, float, float, float)
0x6d2: Push("playing ")
0x6d3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6d4: @ Trace(Stack[-1])
0x6d5: Pop(1)
0x6d6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x6d7: Pop(0)
0x6d8: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x6d9: Pop(0)
0x6da: Push("start: ")
0x6db: Pop(1); Push(Stack[-1] + Stack[-3]);
0x6dc: @ Trace(Stack[-1])
0x6dd: Pop(1)
0x6de: Push("end: ")
0x6df: Pop(1); Push(Stack[-1] + Stack[-2]);
0x6e0: @ Trace(Stack[-1])
0x6e1: Pop(1)
0x6e2: Return(); Pop(4)

0x6e3: PushEmpty(float, cvector, float, cvector)
0x6e4: @@ GetEyesHeight(Stack[-2])
0x6e5: Pop(0)
0x6e6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6e7: Push(CvectorIndex(Stack[-1], 1))
0x6e8: Stack[-1] = Stack[-3]
0x6e9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6ea: Push("head")
0x6eb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6ec: Pop(1)
0x6ed: Return(); Pop(4)

0x6ee: PushEmpty(bool)
0x6ef: Call 0x89f

0x6f0: Pop(0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: @ lshStopSpeech()
0x6f3: Pop(0)
0x6f4: Return(); Pop(0)

0x6f5: PushEmpty(float, float)
0x6f6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6f7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6f8: Push((float)0.0)
0x6f9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x6fc: Return(); Pop(2)

0x6fd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6fe: Return(); Pop(2)

0x6ff: PushEmpty()
0x700: Pop(0); Push(Stack[-2] | Stack[-1]);
0x701: Pop(0); Push(Stack[-3] | Stack[-3]);
0x702: Pop(0); Push(Stack[-3] | Stack[-3]);
0x703: Pop(2); Push(Stack[-2] * Stack[-1]);
0x704: Pop(1); Push(Sqrt(Stack[-1]))
0x705: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x706: Return(); Pop(0)

0x707: PushEmpty()
0x708: Push(CvectorIndex(Stack[-2], 0))
0x709: Push(CvectorIndex(Stack[-2], 0))
0x70a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x70b: Push(CvectorIndex(Stack[-3], 2))
0x70c: Push(CvectorIndex(Stack[-3], 2))
0x70d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x70e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: Push(CvectorIndex(Stack[-1], 0))
0x712: Push(CvectorIndex(Stack[-2], 0))
0x713: Pop(2); Push(Stack[-2] * Stack[-1]);
0x714: Push(CvectorIndex(Stack[-2], 2))
0x715: Push(CvectorIndex(Stack[-3], 2))
0x716: Pop(2); Push(Stack[-2] * Stack[-1]);
0x717: Pop(2); Push(Stack[-2] + Stack[-1]);
0x718: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x719: Return(); Pop(0)

0x71a: PushEmpty()
0x71b: PushEmpty(float, cvector, cvector)
0x71c: Stack[-2] = Stack[-5]
0x71d: Stack[-1] = Stack[-4]
0x71e: Call 0x707

0x71f: Pop(2)
0x720: PushEmpty(float, cvector)
0x721: Stack[-1] = Stack[-5]
0x722: Call 0x710

0x723: Pop(1)
0x724: PushEmpty(float, cvector)
0x725: Stack[-1] = Stack[-5]
0x726: Call 0x710

0x727: Pop(1)
0x728: Pop(2); Push(Stack[-2] * Stack[-1]);
0x729: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x72a: Return(); Pop(0)

0x72b: PushEmpty(float, float)
0x72c: @ GetGameTime(Stack[-1])
0x72d: Pop(0)
0x72e: Push((int) 1)
0x72f: PushEmpty(int)
0x730: Push((int) 24)
0x731: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x732: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x733: Return(); Pop(2)

0x734: PushEmpty()
0x735: PushEmpty(object)
0x736: Stack[-1] = Stack[-2]
0x737: Push(-1, 0); TaskCall(1)
0x738: Call 0x16

0x739: Pop(-1, 0); TaskReturn
0x73a: Pop(1)
0x73b: Return(); Pop(0)

0x73c: PushEmpty(float, float)
0x73d: Push("health")
0x73e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x740: Push("health")
0x741: @ GetProperty(Stack[-1], Stack[-2])
0x742: Pop(1)
0x743: Push((int) 0)
0x744: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x746: @ SignalDeath(Stack[-4])
0x747: Pop(0)
0x748: Return(); Pop(2)

0x749: PushEmpty()
0x74a: PushEmpty(object)
0x74b: Stack[-1] = Stack[-2]
0x74c: Call 0x734

0x74d: Pop(1)
0x74e: Return(); Pop(0)

0x74f: PushEmpty()
0x750: PushEmpty(object, int, float)
0x751: Stack[-3] = Stack[-7]
0x752: Stack[-2] = Stack[-6]
0x753: Stack[-1] = Stack[-5]
0x754: Call 0x60e

0x755: Pop(3)
0x756: Return(); Pop(0)

0x757: PushEmpty(string, string)
0x758: Stack[-1] = "idle"
0x759: Push(Stack[-3])
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x75c: Stack[-4] = Stack[-1]
0x75d: Return(); Pop(2)

0x75e: PushEmpty(int, bool, int, bool)
0x75f: Stack[-2] = (int) 0
0x760: Push("all")
0x761: PushEmpty(string, int)
0x762: Stack[-1] = Stack[-5]
0x763: Call 0x757

0x764: Pop(1)
0x765: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(2)
0x767: Pop(0); Push((bool) Stack[-1] == 0)
0x768: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x769: GOTO 0x76d

0x76a: Push((int) 1)
0x76b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x76c: GOTO 0x760

0x76d: Stack[-5] = Stack[-2]
0x76e: Return(); Pop(4)

0x76f: PushEmpty()
0x770: PushEmpty(bool)
0x771: Call 0x8cf

0x772: Pop(0)
0x773: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x774: Stack[-2] = (int) 2
0x775: GOTO 0x777

0x776: Stack[-2] = (int) 0
0x777: Return(); Pop(0)

0x778: PushEmpty()
0x779: PushEmpty(object)
0x77a: Stack[-1] = Stack[-2]
0x77b: Push(-1, 1); TaskCall(4)
0x77c: Call 0x29b

0x77d: Pop(-1, 1); TaskReturn
0x77e: Pop(1)
0x77f: Return(); Pop(0)

0x780: PushEmpty()
0x781: PushEmpty(bool, object)
0x782: Stack[-1] = Stack[-3]
0x783: Call 0x5f6

0x784: Pop(1)
0x785: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x786: Stack[-2] = (int) 2
0x787: GOTO 0x789

0x788: Stack[-2] = (int) 0
0x789: Return(); Pop(0)

0x78a: PushEmpty()
0x78b: PushEmpty(object)
0x78c: Stack[-1] = Stack[-2]
0x78d: Push(-1, 3); TaskCall(5)
0x78e: Call 0x37d

0x78f: Pop(-1, 3); TaskReturn
0x790: Pop(1)
0x791: Return(); Pop(0)

0x792: PushEmpty()
0x793: PushEmpty(bool, object)
0x794: Stack[-1] = Stack[-3]
0x795: Call 0x5f6

0x796: Pop(1)
0x797: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x798: Stack[-2] = (int) 2
0x799: GOTO 0x79b

0x79a: Stack[-2] = (int) 0
0x79b: Return(); Pop(0)

0x79c: PushEmpty()
0x79d: PushEmpty(object)
0x79e: Stack[-1] = Stack[-2]
0x79f: Push(-1, 3); TaskCall(6)
0x7a0: Call 0x470

0x7a1: Pop(-1, 3); TaskReturn
0x7a2: Pop(1)
0x7a3: Return(); Pop(0)

0x7a4: PushEmpty()
0x7a5: Stack[-2] = (int) 0
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty()
0x7a8: Return(); Pop(0)

0x7a9: PushEmpty()
0x7aa: Stack[-3] = (int) 0
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty()
0x7ad: Return(); Pop(0)

0x7ae: PushEmpty()
0x7af: Stack[-2] = (int) 2
0x7b0: Return(); Pop(0)

0x7b1: PushEmpty()
0x7b2: PushEmpty(object)
0x7b3: Stack[-1] = Stack[-2]
0x7b4: Call 0x8a9

0x7b5: Pop(1)
0x7b6: Return(); Pop(0)

0x7b7: Return(); Pop(0)

0x7b8: PushEmpty(int, int)
0x7b9: Push("player")
0x7ba: @ GetVariable(Stack[-1], Stack[-2])
0x7bb: Pop(1)
0x7bc: Push((int) 0)
0x7bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bf: Stack[-3] = (int) 200001
0x7c0: Return(); Pop(2)

0x7c1: GOTO 0x7c7

0x7c2: Push((int) 1)
0x7c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: Stack[-3] = (int) 200002
0x7c6: Return(); Pop(2)

0x7c7: Stack[-3] = (int) 200003
0x7c8: Return(); Pop(2)

0x7c9: PushEmpty(int, int, int, bool, int, int, int, bool)
0x7ca: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cc: Push("GenerateMoney: iMin > iMax")
0x7cd: @ Trace(Stack[-1])
0x7ce: Pop(1)
0x7cf: Return(); Pop(8)

0x7d0: Stack[-4] = (int) 0
0x7d1: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d3: Pop(0); Push(Stack[-9] - Stack[-10]);
0x7d4: @ irand(Stack[-4], Stack[-1])
0x7d5: Pop(1)
0x7d6: GOTO 0x7db

0x7d7: Push((int) 0)
0x7d8: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7da: Return(); Pop(8)

0x7db: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x7dc: Push((int) 0)
0x7dd: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7df: Return(); Pop(8)

0x7e0: Push("Money")
0x7e1: @ GetInvItemByName(Stack[-3], Stack[-1])
0x7e2: Pop(1)
0x7e3: Push((int) 0)
0x7e4: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x7e5: Pop(1)
0x7e6: Return(); Pop(8)

0x7e7: PushEmpty(int, bool, int, bool)
0x7e8: Push(Stack[-5])
0x7e9: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x7ea: PushEmpty(int, int)
0x7eb: Stack[-2] = (int) 0
0x7ec: Push((int) 100)
0x7ed: PushEmpty(int)
0x7ee: Call 0x72b

0x7ef: Pop(0)
0x7f0: Push((int) 100)
0x7f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7f2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x7f3: Call 0x7c9

0x7f4: Pop(2)
0x7f5: Push((int) 9)
0x7f6: @ irand(Stack[-3], Stack[-1])
0x7f7: Pop(1)
0x7f8: Push((int) 0)
0x7f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7fb: PushEmpty(int, string)
0x7fc: Stack[-1] = "lemon"
0x7fd: Call 0x896

0x7fe: Pop(1)
0x7ff: Push((int) 0)
0x800: Push((int) 1)
0x801: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x802: Pop(3)
0x803: GOTO 0x83f

0x804: Push((int) 1)
0x805: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x806: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x807: PushEmpty(int, string)
0x808: Stack[-1] = "rusk"
0x809: Call 0x896

0x80a: Pop(1)
0x80b: Push((int) 0)
0x80c: Push((int) 1)
0x80d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: GOTO 0x83f

0x810: Push((int) 2)
0x811: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x813: PushEmpty(int, string)
0x814: Stack[-1] = "hook"
0x815: Call 0x896

0x816: Pop(1)
0x817: Push((int) 0)
0x818: Push((int) 1)
0x819: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: GOTO 0x83f

0x81c: Push((int) 4)
0x81d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x81f: PushEmpty(int, string)
0x820: Stack[-1] = "syringe"
0x821: Call 0x896

0x822: Pop(1)
0x823: Push((int) 0)
0x824: Push((int) 1)
0x825: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: GOTO 0x83f

0x828: Push((int) 5)
0x829: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x82b: PushEmpty(int, string)
0x82c: Stack[-1] = "watch"
0x82d: Call 0x896

0x82e: Pop(1)
0x82f: Push((int) 0)
0x830: Push((int) 1)
0x831: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x832: Pop(3)
0x833: GOTO 0x83f

0x834: Push((int) 6)
0x835: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x836: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x837: PushEmpty(int, string)
0x838: Stack[-1] = "razor"
0x839: Call 0x896

0x83a: Pop(1)
0x83b: Push((int) 0)
0x83c: Push((int) 1)
0x83d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: GOTO 0x895

0x840: PushEmpty(int, int)
0x841: Stack[-2] = (int) 0
0x842: Push((int) 50)
0x843: PushEmpty(int)
0x844: Call 0x72b

0x845: Pop(0)
0x846: Push((int) 50)
0x847: Pop(2); Push(Stack[-2] * Stack[-1]);
0x848: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x849: Call 0x7c9

0x84a: Pop(2)
0x84b: Push((int) 8)
0x84c: @ irand(Stack[-3], Stack[-1])
0x84d: Pop(1)
0x84e: Push((int) 0)
0x84f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x851: PushEmpty(int, string)
0x852: Stack[-1] = "beads"
0x853: Call 0x896

0x854: Pop(1)
0x855: Push((int) 0)
0x856: Push((int) 1)
0x857: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x858: Pop(3)
0x859: GOTO 0x895

0x85a: Push((int) 1)
0x85b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x85d: PushEmpty(int, string)
0x85e: Stack[-1] = "bracelet"
0x85f: Call 0x896

0x860: Pop(1)
0x861: Push((int) 0)
0x862: Push((int) 1)
0x863: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: GOTO 0x895

0x866: Push((int) 2)
0x867: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x869: PushEmpty(int, string)
0x86a: Stack[-1] = "ear_ring"
0x86b: Call 0x896

0x86c: Pop(1)
0x86d: Push((int) 0)
0x86e: Push((int) 1)
0x86f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: GOTO 0x895

0x872: Push((int) 3)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x875: PushEmpty(int, string)
0x876: Stack[-1] = "gold_ring"
0x877: Call 0x896

0x878: Pop(1)
0x879: Push((int) 0)
0x87a: Push((int) 1)
0x87b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x87c: Pop(3)
0x87d: GOTO 0x895

0x87e: Push((int) 4)
0x87f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x881: PushEmpty(int, string)
0x882: Stack[-1] = "silver_ring"
0x883: Call 0x896

0x884: Pop(1)
0x885: Push((int) 0)
0x886: Push((int) 1)
0x887: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x888: Pop(3)
0x889: GOTO 0x895

0x88a: Push((int) 5)
0x88b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x88d: PushEmpty(int, string)
0x88e: Stack[-1] = "flower"
0x88f: Call 0x896

0x890: Pop(1)
0x891: Push((int) 0)
0x892: Push((int) 1)
0x893: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Return(); Pop(4)

0x896: PushEmpty(int, int)
0x897: @ GetInvItemByName(Stack[-1], Stack[-3])
0x898: Pop(0)
0x899: Stack[-4] = Stack[-1]
0x89a: Return(); Pop(2)

0x89b: Stack[-1] = (int) 3350
0x89c: Return(); Pop(0)

0x89d: Stack[-1] = "ui/NPC_None.png"
0x89e: Return(); Pop(0)

0x89f: Stack[-1] = (bool) 0
0x8a0: Return(); Pop(0)

0x8a1: Push(GlobalVars[0])
0x8a2: Stack[-1] = (bool) 0
0x8a3: GlobalVars[0] = Stack[-1]; Pop(1)
0x8a4: PushEmpty(bool)
0x8a5: Stack[-1] = (bool) 1
0x8a6: Call 0x7e7

0x8a7: Pop(1)
0x8a8: Return(); Pop(0)

0x8a9: PushEmpty(bool, bool)
0x8aa: Push(GlobalVars[0])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8ac: @ IsOverrideActive(Stack[-1])
0x8ad: Pop(0)
0x8ae: Pop(0); Push((bool) Stack[-1] == 0)
0x8af: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8b0: @ WorkWithCorpse(Stack[-3])
0x8b1: Pop(0)
0x8b2: Return(); Pop(2)

0x8b3: GOTO 0x8ce

0x8b4: Push((int) 1000)
0x8b5: PushEmpty(int, object)
0x8b6: Stack[-1] = Stack[-6]
0x8b7: Push(-2, 1); TaskCall(7)
0x8b8: Call 0x504

0x8b9: Pop(-2, 1); TaskReturn
0x8ba: Pop(1)
0x8bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8bc: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8bd: PushEmpty(bool, object)
0x8be: Stack[-1] = Stack[-5]
0x8bf: Call 0x69d

0x8c0: Pop(1)
0x8c1: Pop(1); Push((bool) Stack[-1] == 0)
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: Return(); Pop(2)

0x8c4: PushEmpty(object)
0x8c5: Stack[-1] = Stack[-4]
0x8c6: Push(-1, 1); TaskCall(0)
0x8c7: Call 0x0

0x8c8: Pop(-1, 1); TaskReturn
0x8c9: Pop(1)
0x8ca: PushEmpty(object)
0x8cb: Stack[-1] = Stack[-4]
0x8cc: Call 0x6cd

0x8cd: Pop(1)
0x8ce: Return(); Pop(2)

0x8cf: Stack[-1] = (bool) 1
0x8d0: Return(); Pop(0)

0x8d1: PushEmpty(string, bool, string, bool)
0x8d2: PushEmpty(bool, object, string)
0x8d3: Stack[-2] = Stack[-8]
0x8d4: Stack[-1] = "class"
0x8d5: Call 0x5c1

0x8d6: Pop(2)
0x8d7: Pop(1); Push((bool) Stack[-1] == 0)
0x8d8: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d9: Stack[-7] = (bool) 0
0x8da: Return(); Pop(4)

0x8db: Push("class")
0x8dc: @@ GetProperty(Stack[-1], Stack[-3])
0x8dd: Pop(1)
0x8de: Push("rat")
0x8df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e1: Stack[-7] = (bool) 0
0x8e2: Return(); Pop(4)

0x8e3: GOTO 0x8e9

0x8e4: Push("dog")
0x8e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e7: Stack[-7] = (bool) 0
0x8e8: Return(); Pop(4)

0x8e9: @ CanSee(Stack[-1], Stack[-6])
0x8ea: Pop(0)
0x8eb: PushEmpty(bool)
0x8ec: Stack[-1] = (bool) 1
0x8ed: Push(Stack[-2])
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8ef: PushEmpty(float, object)
0x8f0: Stack[-1] = Stack[-9]
0x8f1: Call 0x5b9

0x8f2: Pop(1)
0x8f3: Push((float)250000.0)
0x8f4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f6: Stack[-1] = (bool) 0
0x8f7: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8f8: Push((float)-0.3)
0x8f9: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x8fa: Pop(1)
0x8fb: Stack[-7] = (bool) 1
0x8fc: Return(); Pop(4)

0x8fd: Stack[-7] = (bool) 0
0x8fe: Return(); Pop(4)

0x8ff: PushEmpty()
0x900: Push(GlobalVars[0])
0x901: Stack[-1] = (bool) 1
0x902: GlobalVars[0] = Stack[-1]; Pop(1)
0x903: Push((int) 50)
0x904: Push((int) 40)
0x905: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x906: Pop(2)
0x907: Return(); Pop(0)

