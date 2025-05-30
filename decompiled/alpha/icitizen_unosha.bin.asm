GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
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
	all
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	attack_end
	bjump
	IsAttacking
	IsAttacking
	walk
	run
	fire
	phys
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
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
	idle
	class
	littleboy
	littlegirl
	wasted_girl
	woman
	unosha

Import:
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	SensePlayerOnly (1 args)
	irand (2 args)
	ResetAAS (0 args)
	Sleep (1 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	CanSee (2 args)
	Trace (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	StopAnimation (0 args)
	ReportReputationChange (3 args)
	SetRTEnvelope (2 args)

RunOp = 0x94
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x8e Vars = (object, int, float, float)
		EVENT_16 Op = 0x90 Vars = (object, string)
		EVENT_41 Op = 0x92 Vars = (object)
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xbf Vars = (object)
		EVENT_17 Op = 0xd3 Vars = (object)
		EVENT_30 Op = 0xe7 Vars = (object, object)
		EVENT_40 Op = 0x101 Vars = (object)
		EVENT_42 Op = 0x115 Vars = (object, string)
		EVENT_1 Op = 0x12b Vars = (object)
		EVENT_3 Op = 0x134 Vars = (object)
		EVENT_7 Op = 0x13d Vars = (int)
		EVENT_6 Op = 0x149 Vars = ()
		EVENT_41 Op = 0x15d Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_0 Op = 0x1bf Vars = (object)
		EVENT_17 Op = 0x1d3 Vars = (object)
		EVENT_30 Op = 0x1e7 Vars = (object, object)
		EVENT_40 Op = 0x201 Vars = (object)
		EVENT_42 Op = 0x215 Vars = (object, string)
		EVENT_41 Op = 0x236 Vars = (object)
		EVENT_7 Op = 0x23f Vars = (int)
		EVENT_6 Op = 0x262 Vars = ()
	GTASK_3 Vars = (object, int, int, bool, int) Params = 1
	GTASK_4 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x462 Vars = ()
		EVENT_7 Op = 0x4cf Vars = (int)
		EVENT_10 Op = 0x4e1 Vars = (object)
		EVENT_41 Op = 0x4ec Vars = (object)

Events:
EVENT_16 Op = 0x649 Vars = (object, string)
EVENT_41 Op = 0x656 Vars = (object)
EVENT_22 Op = 0x65c Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x814

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x694

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x697

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x69d

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x22: Pop(0); Push((bool) Stack[-21] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(string)
0x25: Stack[-1] = "fdie"
0x26: Call 0x78

0x27: Pop(1)
0x28: GOTO 0x77

0x29: @@ GetPosition(Stack[-10])
0x2a: Pop(0)
0x2b: @ GetPosition(Stack[-9])
0x2c: Pop(0)
0x2d: @ GetDirection(Stack[-8])
0x2e: Pop(0)
0x2f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x30: Push(CvectorIndex(Stack[-7], 0))
0x31: Push(CvectorIndex(Stack[-9], 0))
0x32: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33: Push(CvectorIndex(Stack[-8], 2))
0x34: Push(CvectorIndex(Stack[-10], 2))
0x35: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Push((int) 0)
0x38: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-6] = "fdie"
0x3b: GOTO 0x3d

0x3c: Stack[-6] = "bdie"
0x3d: @ RemoveRTEnvelope()
0x3e: Pop(0)
0x3f: @ SetDeathState()
0x40: Pop(0)
0x41: @ Stop()
0x42: Pop(0)
0x43: @ StopAsync()
0x44: Pop(0)
0x45: Stack[-5] = Stack[-21]
0x46: Push("GetScriptProperty")
0x47: Push((int) 2)
0x48: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x49: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4a: Push("Owner")
0x4b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c: Pop(1)
0x4d: Push(Stack[-4])
0x4e: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4f: Push("Owner")
0x50: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x51: Pop(1)
0x52: Pop(0); Push((bool) Stack[-5] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-5] = Stack[-21]
0x55: Push("@GetEyesHeight")
0x56: Push((int) 1)
0x57: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x58: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x59: @@ GetEyesHeight(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c: Push(CvectorIndex(Stack[-1], 1))
0x5d: Stack[-1] = Stack[-3]
0x5e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5f: Push("head")
0x60: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Stack[-3] = (bool) 1
0x63: GOTO 0x65

0x64: Stack[-3] = (bool) 0
0x65: Push("all")
0x66: @ PlayAnimation(Stack[-1], Stack[-7])
0x67: Pop(1)
0x68: @ WaitForAnimEnd()
0x69: Pop(0)
0x6a: Push(Stack[-3])
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: @ StopAsync()
0x6d: Pop(0)
0x6e: Push("head")
0x6f: @ UnlookAsync(Stack[-1])
0x70: Pop(1)
0x71: Push("all")
0x72: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x73: Pop(1)
0x74: @ RemoveEnvelope()
0x75: Pop(0)
0x76: Stack[-5] = 0
0x77: Return(); Pop(20)

0x78: PushEmpty()
0x79: @ RemoveRTEnvelope()
0x7a: Pop(0)
0x7b: @ SetDeathState()
0x7c: Pop(0)
0x7d: @ Stop()
0x7e: Pop(0)
0x7f: @ StopAsync()
0x80: Pop(0)
0x81: @ StopSecondaryAnimation()
0x82: Pop(0)
0x83: Push("all")
0x84: @ PlayAnimation(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: @ WaitForAnimEnd()
0x87: Pop(0)
0x88: Push("all")
0x89: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: @ RemoveEnvelope()
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: Return(); Pop(0)

0x94: PushEmpty(int, int, int, int)
0x95: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x96: Push((bool) 1)
0x97: @ SensePlayerOnly(Stack[-1])
0x98: Pop(1)
0x99: PushEmpty()
0x9a: Call 0x78f

0x9b: Pop(0)
0x9c: PushEmpty()
0x9d: Call 0xb6

0x9e: Pop(0)
0x9f: Push((int) 2)
0xa0: @ irand(Stack[-3], Stack[-1])
0xa1: Pop(1)
0xa2: Push((int) 0)
0xa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa6: PushEmpty()
0xa7: Call 0x7a2

0xa8: Pop(0)
0xa9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xaa: @ ResetAAS()
0xab: Pop(0)
0xac: GOTO 0xb4

0xad: Push((int) 4)
0xae: @ irand(Stack[-2], Stack[-1])
0xaf: Pop(1)
0xb0: Push((int) 1)
0xb1: Pop(1); Push(Stack[-2] + Stack[-1]);
0xb2: @ Sleep(Stack[-1])
0xb3: Pop(1)
0xb4: GOTO 0x9f

0xb5: Return(); Pop(4)

0xb6: PushEmpty(bool)
0xb7: Call 0x5f2

0xb8: Pop(0)
0xb9: Pop(1); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbb: PushEmpty()
0xbc: Call 0x69d

0xbd: Pop(0)
0xbe: Return(); Pop(0)

0xbf: PushEmpty(int, int)
0xc0: PushEmpty(int, object)
0xc1: Stack[-1] = Stack[-5]
0xc2: Call 0x694

0xc3: Stack[-3] = Stack[-2]
0xc4: Pop(2)
0xc5: Push((int) 0)
0xc6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc8: Push((int) 1)
0xc9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcb: PushEmpty()
0xcc: Call 0x150

0xcd: Pop(0)
0xce: PushEmpty(object)
0xcf: Stack[-1] = Stack[-4]
0xd0: Call 0x697

0xd1: Pop(1)
0xd2: Return(); Pop(2)

0xd3: PushEmpty(int, int)
0xd4: PushEmpty(int, object)
0xd5: Stack[-1] = Stack[-5]
0xd6: Call 0x675

0xd7: Stack[-3] = Stack[-2]
0xd8: Pop(2)
0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xdc: Push((int) 1)
0xdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdf: PushEmpty()
0xe0: Call 0x150

0xe1: Pop(0)
0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[-4]
0xe4: Call 0x67f

0xe5: Pop(1)
0xe6: Return(); Pop(2)

0xe7: PushEmpty(int, int)
0xe8: PushEmpty(bool, object, object)
0xe9: Stack[-2] = Stack[-7]
0xea: Stack[-1] = Stack[-6]
0xeb: Call 0x7c2

0xec: Pop(2)
0xed: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xee: PushEmpty(int, object)
0xef: Stack[-1] = Stack[-6]
0xf0: Call 0x687

0xf1: Stack[-3] = Stack[-2]
0xf2: Pop(2)
0xf3: Push((int) 0)
0xf4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf6: Push((int) 1)
0xf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf9: PushEmpty()
0xfa: Call 0x150

0xfb: Pop(0)
0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[-5]
0xfe: Call 0x68e

0xff: Pop(1)
0x100: Return(); Pop(2)

0x101: PushEmpty(int, int)
0x102: PushEmpty(int, object)
0x103: Stack[-1] = Stack[-5]
0x104: Call 0x69e

0x105: Stack[-3] = Stack[-2]
0x106: Pop(2)
0x107: Push((int) 0)
0x108: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10a: Push((int) 1)
0x10b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10d: PushEmpty()
0x10e: Call 0x150

0x10f: Pop(0)
0x110: PushEmpty(object)
0x111: Stack[-1] = Stack[-4]
0x112: Call 0x6ab

0x113: Pop(1)
0x114: Return(); Pop(2)

0x115: PushEmpty(int, int)
0x116: PushEmpty(int, string, object)
0x117: Stack[-2] = Stack[-6]
0x118: Stack[-1] = Stack[-7]
0x119: Call 0x6b1

0x11a: Stack[-4] = Stack[-3]
0x11b: Pop(3)
0x11c: Push((int) 0)
0x11d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11f: Push((int) 1)
0x120: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: PushEmpty()
0x123: Call 0x150

0x124: Pop(0)
0x125: PushEmpty(string, object)
0x126: Stack[-2] = Stack[-5]
0x127: Stack[-1] = Stack[-6]
0x128: Call 0x6b4

0x129: Pop(2)
0x12a: Return(); Pop(2)

0x12b: PushEmpty()
0x12c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Return(); Pop(0)

0x12f: PushEmpty(object)
0x130: Stack[-1] = Stack[-2]
0x131: Call 0x166

0x132: Pop(1)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: Push( Stack[0 + Tasks[-1].StackPointer] )
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: Return(); Pop(0)

0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[-2]
0x13a: Call 0x166

0x13b: Pop(1)
0x13c: Return(); Pop(0)

0x13d: PushEmpty()
0x13e: Push((int) 110)
0x13f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Return(); Pop(0)

0x142: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x143: Push((int) 110)
0x144: @ KillTimer(Stack[-1])
0x145: Pop(1)
0x146: @ ResetAAS()
0x147: Pop(0)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: Call 0x150

0x14b: Pop(0)
0x14c: PushEmpty()
0x14d: Call 0x69d

0x14e: Pop(0)
0x14f: Return(); Pop(0)

0x150: Push((int) 110)
0x151: @ KillTimer(Stack[-1])
0x152: Pop(1)
0x153: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x154: Push( Stack[0 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x156: PushEmpty()
0x157: Call 0x7bd

0x158: Pop(0)
0x159: GOTO 0x15c

0x15a: @ Stop()
0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty()
0x15f: Call 0x150

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[-2]
0x163: Call 0x656

0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty(bool, int, bool, int)
0x167: Push( Stack[1 + Tasks[-1].StackPointer] )
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: Return(); Pop(4)

0x16a: @ IsPlayerActor(Stack[-5], Stack[-2])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-2] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Return(); Pop(4)

0x16f: PushEmpty(int, object)
0x170: Stack[-1] = Stack[-7]
0x171: Call 0x664

0x172: Stack[-3] = Stack[-2]
0x173: Pop(2)
0x174: Push((int) 0)
0x175: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: Push((int) 1)
0x178: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: PushEmpty()
0x17b: Call 0x150

0x17c: Pop(0)
0x17d: PushEmpty(object)
0x17e: Stack[-1] = Stack[-6]
0x17f: Call 0x66d

0x180: Pop(1)
0x181: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x182: Push((int) 110)
0x183: Push((float)5.0)
0x184: @ SetTimer(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: Return(); Pop(4)

0x187: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x188: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x189: PushEmpty()
0x18a: Call 0x1ba

0x18b: Pop(0)
0x18c: @ GetDirection(Stack[-3])
0x18d: Pop(0)
0x18e: PushEmpty(cvector, object)
0x18f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x190: Call 0x508

0x191: Stack[-4] = Stack[-2]
0x192: Pop(2)
0x193: PushEmpty(float, cvector, cvector)
0x194: Stack[-2] = Stack[-6]
0x195: Stack[-1] = Stack[-5]
0x196: Call 0x627

0x197: Pop(2)
0x198: Push((int) 0)
0x199: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(object)
0x19c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19d: Call 0x5e7

0x19e: Pop(1)
0x19f: Stack[-1] = (bool) 1
0x1a0: GOTO 0x1a4

0x1a1: Push((float)1.5)
0x1a2: @ Sleep(Stack[-1], Stack[-2])
0x1a3: Pop(1)
0x1a4: Push(Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a6: PushEmpty(object)
0x1a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a8: Call 0x5e7

0x1a9: Pop(1)
0x1aa: Push((int) 111)
0x1ab: Push((float)0.5)
0x1ac: @ SetTimer(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: Push((float)5.0)
0x1af: @ Sleep(Stack[-1])
0x1b0: Pop(1)
0x1b1: Push((int) 111)
0x1b2: @ KillTimer(Stack[-1])
0x1b3: Pop(1)
0x1b4: @ StopAsync()
0x1b5: Pop(0)
0x1b6: Push("head")
0x1b7: @ UnlookAsync(Stack[-1])
0x1b8: Pop(1)
0x1b9: Return(); Pop(6)

0x1ba: PushEmpty(object)
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call 0x5f7

0x1bd: Pop(1)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(int, int)
0x1c0: PushEmpty(int, object)
0x1c1: Stack[-1] = Stack[-5]
0x1c2: Call 0x694

0x1c3: Stack[-3] = Stack[-2]
0x1c4: Pop(2)
0x1c5: Push((int) 0)
0x1c6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c8: Push((int) 1)
0x1c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cb: PushEmpty()
0x1cc: Call 0x22b

0x1cd: Pop(0)
0x1ce: PushEmpty(object)
0x1cf: Stack[-1] = Stack[-4]
0x1d0: Call 0x697

0x1d1: Pop(1)
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty(int, int)
0x1d4: PushEmpty(int, object)
0x1d5: Stack[-1] = Stack[-5]
0x1d6: Call 0x675

0x1d7: Stack[-3] = Stack[-2]
0x1d8: Pop(2)
0x1d9: Push((int) 0)
0x1da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1dc: Push((int) 1)
0x1dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1df: PushEmpty()
0x1e0: Call 0x22b

0x1e1: Pop(0)
0x1e2: PushEmpty(object)
0x1e3: Stack[-1] = Stack[-4]
0x1e4: Call 0x67f

0x1e5: Pop(1)
0x1e6: Return(); Pop(2)

0x1e7: PushEmpty(int, int)
0x1e8: PushEmpty(bool, object, object)
0x1e9: Stack[-2] = Stack[-7]
0x1ea: Stack[-1] = Stack[-6]
0x1eb: Call 0x7c2

0x1ec: Pop(2)
0x1ed: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ee: PushEmpty(int, object)
0x1ef: Stack[-1] = Stack[-6]
0x1f0: Call 0x687

0x1f1: Stack[-3] = Stack[-2]
0x1f2: Pop(2)
0x1f3: Push((int) 0)
0x1f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f6: Push((int) 1)
0x1f7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f9: PushEmpty()
0x1fa: Call 0x22b

0x1fb: Pop(0)
0x1fc: PushEmpty(object)
0x1fd: Stack[-1] = Stack[-5]
0x1fe: Call 0x68e

0x1ff: Pop(1)
0x200: Return(); Pop(2)

0x201: PushEmpty(int, int)
0x202: PushEmpty(int, object)
0x203: Stack[-1] = Stack[-5]
0x204: Call 0x69e

0x205: Stack[-3] = Stack[-2]
0x206: Pop(2)
0x207: Push((int) 0)
0x208: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20a: Push((int) 1)
0x20b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: PushEmpty()
0x20e: Call 0x22b

0x20f: Pop(0)
0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[-4]
0x212: Call 0x6ab

0x213: Pop(1)
0x214: Return(); Pop(2)

0x215: PushEmpty(int, int)
0x216: PushEmpty(int, string, object)
0x217: Stack[-2] = Stack[-6]
0x218: Stack[-1] = Stack[-7]
0x219: Call 0x6b1

0x21a: Stack[-4] = Stack[-3]
0x21b: Pop(3)
0x21c: Push((int) 0)
0x21d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21f: Push((int) 1)
0x220: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x222: PushEmpty()
0x223: Call 0x22b

0x224: Pop(0)
0x225: PushEmpty(string, object)
0x226: Stack[-2] = Stack[-5]
0x227: Stack[-1] = Stack[-6]
0x228: Call 0x6b4

0x229: Pop(2)
0x22a: Return(); Pop(2)

0x22b: @ StopGroup0()
0x22c: Pop(0)
0x22d: @ StopAsync()
0x22e: Pop(0)
0x22f: Push("head")
0x230: @ UnlookAsync(Stack[-1])
0x231: Pop(1)
0x232: Push((int) 111)
0x233: @ KillTimer(Stack[-1])
0x234: Pop(1)
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: PushEmpty()
0x238: Call 0x22b

0x239: Pop(0)
0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-2]
0x23c: Call 0x656

0x23d: Pop(1)
0x23e: Return(); Pop(0)

0x23f: PushEmpty(cvector, cvector, cvector, cvector)
0x240: Push((int) 111)
0x241: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(4)

0x244: PushEmpty(bool, object)
0x245: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x246: Call 0x58c

0x247: Pop(1)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24a: PushEmpty()
0x24b: Call 0x22b

0x24c: Pop(0)
0x24d: Return(); Pop(4)

0x24e: @ GetDirection(Stack[-2])
0x24f: Pop(0)
0x250: PushEmpty(cvector, object)
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call 0x508

0x253: Stack[-3] = Stack[-2]
0x254: Pop(2)
0x255: PushEmpty(float, cvector, cvector)
0x256: Stack[-2] = Stack[-5]
0x257: Stack[-1] = Stack[-4]
0x258: Call 0x627

0x259: Pop(2)
0x25a: Push((float)0.5)
0x25b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: PushEmpty(object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call 0x5e7

0x260: Pop(1)
0x261: Return(); Pop(4)

0x262: PushEmpty()
0x263: Call 0x22b

0x264: Pop(0)
0x265: PushEmpty()
0x266: Call 0x69d

0x267: Pop(0)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: PushEmpty(object, bool, float)
0x26b: Stack[-3] = Stack[-4]
0x26c: Stack[-2] = (bool) 1
0x26d: Stack[-1] = (float) 180.0
0x26e: Call 0x277

0x26f: Pop(3)
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Stack[-3] = (float) 0.05
0x273: Return(); Pop(0)

0x274: PushEmpty()
0x275: Stack[-3] = (int) 0
0x276: Return(); Pop(0)

0x277: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x278: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x279: Push("all")
0x27a: Push("attack_begin")
0x27b: Push((int) 1)
0x27c: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x27d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27e: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: Pop(0); Push((bool) Stack[-10] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: GOTO 0x286

0x283: Push((int) 1)
0x284: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x285: GOTO 0x279

0x286: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x287: Push("attack")
0x288: Push((int) 1)
0x289: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x28a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28b: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x28c: Pop(1)
0x28d: Pop(0); Push((bool) Stack[-9] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: GOTO 0x293

0x290: Push((int) 1)
0x291: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x292: GOTO 0x287

0x293: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x294: Push("@GetAttackDistance")
0x295: Push((int) 1)
0x296: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: @@ GetAttackDistance(Stack[-8])
0x299: Pop(0)
0x29a: Push((int) 50)
0x29b: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x29c: GOTO 0x29e

0x29d: Stack[-8] = Stack[-21]
0x29e: Push((int) 150)
0x29f: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Stack[-8] = (int) 150
0x2a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2a3: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x2a4: @ IsPlayerActor(Stack[-0], Stack[-5])
0x2a5: Pop(0)
0x2a6: Push(Stack[-22])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-4] = (bool) 0
0x2a9: GOTO 0x2ab

0x2aa: Stack[-4] = (bool) 1
0x2ab: PushEmpty(bool)
0x2ac: Stack[-1] = (bool) 0
0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2af: Call 0x58c

0x2b0: Pop(1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: Stack[-1] = (bool) 1
0x2b5: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x2b6: @@ GetPFPosition(Stack[-7])
0x2b7: Pop(0)
0x2b8: @ GetPFPosition(Stack[-6])
0x2b9: Pop(0)
0x2ba: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x2bb: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2bc: Push((float)400.0)
0x2bd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2be: Push((float)400.0)
0x2bf: Pop(1); Push(Stack[-1] + Stack[-10]);
0x2c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c3: PushEmpty(bool, object, float, float, bool, bool)
0x2c4: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2c5: Stack[-4] = Stack[-14]
0x2c6: Stack[-3] = (float) 3000.0
0x2c7: Stack[-2] = (bool) 1
0x2c8: Stack[-1] = (bool) 0
0x2c9: Push(-6, 2); TaskCall(4)
0x2ca: Call 0x469

0x2cb: Pop(-6, 2); TaskReturn
0x2cc: Pop(5)
0x2cd: Pop(1); Push((bool) Stack[-1] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: GOTO 0x333

0x2d0: Stack[-4] = (bool) 0
0x2d1: GOTO 0x332

0x2d2: Pop(0); Push(Stack[-21] * Stack[-21]);
0x2d3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x2d5: Pop(0); Push((bool) Stack[-4] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2d7: PushEmpty(object)
0x2d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d9: Call 0x5e7

0x2da: Pop(1)
0x2db: Push("all")
0x2dc: Push("attack_on")
0x2dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2de: Pop(2)
0x2df: @ WaitForAnimEnd()
0x2e0: Pop(0)
0x2e1: @ StopAsync()
0x2e2: Pop(0)
0x2e3: Stack[-4] = (bool) 1
0x2e4: @ rand(Stack[-1])
0x2e5: Pop(0)
0x2e6: PushEmpty(bool)
0x2e7: Stack[-1] = (bool) 1
0x2e8: Push((float)0.6)
0x2e9: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2eb: PushEmpty(bool)
0x2ec: Call 0x42f

0x2ed: Pop(0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: Stack[-1] = (bool) 0
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f1: @ Face(Stack[-0])
0x2f2: Pop(0)
0x2f3: Push("all")
0x2f4: Push("attack_stay")
0x2f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: PushEmpty(bool, float)
0x2f8: Stack[-1] = Stack[-23]
0x2f9: Call 0x3d3

0x2fa: Pop(2)
0x2fb: @ StopAsync()
0x2fc: Pop(0)
0x2fd: GOTO 0x329

0x2fe: @ Face(Stack[-0])
0x2ff: Pop(0)
0x300: Push("all")
0x301: Push("fjump")
0x302: @ PlayAnimation(Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: @ WaitForAnimEnd()
0x305: Pop(0)
0x306: Push(CVector(0.0, 0.0, 0.0))
0x307: @ SetSpeed(Stack[-1])
0x308: Pop(1)
0x309: @ Stop()
0x30a: Pop(0)
0x30b: @ StopAsync()
0x30c: Pop(0)
0x30d: PushEmpty(bool)
0x30e: Call 0x42f

0x30f: Pop(0)
0x310: Pop(1); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x314: Call 0x58c

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x333

0x319: @@ GetPFPosition(Stack[-7])
0x31a: Pop(0)
0x31b: @ GetPFPosition(Stack[-6])
0x31c: Pop(0)
0x31d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x31e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x31f: Pop(0); Push(Stack[-21] * Stack[-21]);
0x320: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x322: PushEmpty(bool, float)
0x323: Stack[-1] = Stack[-23]
0x324: Call 0x36b

0x325: Pop(1)
0x326: Pop(1); Push((bool) Stack[-1] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: GOTO 0x333

0x329: GOTO 0x332

0x32a: PushEmpty(bool, float)
0x32b: Stack[-1] = Stack[-23]
0x32c: Call 0x36b

0x32d: Pop(1)
0x32e: Pop(1); Push((bool) Stack[-1] == 0)
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: GOTO 0x333

0x331: Stack[-4] = (bool) 1
0x332: GOTO 0x2ab

0x333: @ WaitForAnimEnd()
0x334: Pop(0)
0x335: Push( Stack[3 + Tasks[-1].StackPointer] )
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Return(); Pop(20)

0x338: Push("all")
0x339: Push("attack_off")
0x33a: @ PlayAnimation(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: @ WaitForAnimEnd()
0x33d: Pop(0)
0x33e: Push(Stack[-5])
0x33f: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x340: Push((float)2.0)
0x341: @ Sleep(Stack[-1])
0x342: Pop(1)
0x343: Return(); Pop(20)

0x344: PushEmpty(object, float, float, object, float, float)
0x345: Push((float)0.9)
0x346: Pop(1); Push(Stack[-9] * Stack[-1]);
0x347: @ GetVictim(Stack[-1], Stack[-4])
0x348: Pop(1)
0x349: @ ReportAttack(Stack[-0])
0x34a: Pop(0)
0x34b: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x34c: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x34d: PushEmpty(float, object, int)
0x34e: Stack[-2] = Stack[-6]
0x34f: Stack[-1] = Stack[-10]
0x350: Call 0x271

0x351: Stack[-5] = Stack[-3]
0x352: Pop(3)
0x353: PushEmpty(float, object, float, int)
0x354: Stack[-3] = Stack[-7]
0x355: Stack[-2] = Stack[-6]
0x356: PushEmpty(int, object, int)
0x357: Stack[-2] = Stack[-10]
0x358: Stack[-1] = Stack[-14]
0x359: Call 0x274

0x35a: Stack[-4] = Stack[-3]
0x35b: Pop(3)
0x35c: Call 0x523

0x35d: Stack[-5] = Stack[-4]
0x35e: Pop(4)
0x35f: PushEmpty(int)
0x360: Call 0x45a

0x361: Pop(0)
0x362: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x363: Pop(1)
0x364: PushEmpty(object, float)
0x365: Stack[-2] = Stack[-5]
0x366: Stack[-1] = Stack[-3]
0x367: Call 0x45c

0x368: Pop(2)
0x369: Return(); Pop(6)

0x36a: Stack[-3] = 0
0x36b: PushEmpty(int, bool, int, bool)
0x36c: @ irand(Stack[-2], Stack[-1])
0x36d: Pop(0)
0x36e: Push((int) 1)
0x36f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x370: @ Face(Stack[-0])
0x371: Pop(0)
0x372: Push((bool) 1)
0x373: @ SetAttackState(Stack[-1])
0x374: Pop(1)
0x375: Push("all")
0x376: Push("attack_begin")
0x377: Pop(1); Push(Stack[-1] + Stack[-4]);
0x378: @ PlayAnimation(Stack[-2], Stack[-1])
0x379: Pop(2)
0x37a: @ WaitForAnimEnd()
0x37b: Pop(0)
0x37c: PushEmpty()
0x37d: Call 0x43a

0x37e: Pop(0)
0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Call 0x58c

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x385: @ StopAsync()
0x386: Pop(0)
0x387: Stack[-6] = (bool) 0
0x388: Return(); Pop(4)

0x389: PushEmpty(float, int)
0x38a: Stack[-2] = Stack[-7]
0x38b: Stack[-1] = Stack[-4]
0x38c: Call 0x344

0x38d: Pop(2)
0x38e: Push("all")
0x38f: Push("attack_middle")
0x390: Pop(1); Push(Stack[-1] + Stack[-4]);
0x391: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: Push(Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x395: Push("all")
0x396: Push("attack_middle")
0x397: Pop(1); Push(Stack[-1] + Stack[-4]);
0x398: @ PlayAnimation(Stack[-2], Stack[-1])
0x399: Pop(2)
0x39a: @ WaitForAnimEnd()
0x39b: Pop(0)
0x39c: PushEmpty(bool, object)
0x39d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39e: Call 0x58c

0x39f: Pop(1)
0x3a0: Pop(1); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a2: @ StopAsync()
0x3a3: Pop(0)
0x3a4: Stack[-6] = (bool) 0
0x3a5: Return(); Pop(4)

0x3a6: PushEmpty(float, int)
0x3a7: Stack[-2] = Stack[-7]
0x3a8: Stack[-1] = Stack[-4]
0x3a9: Call 0x344

0x3aa: Pop(2)
0x3ab: Push((bool) 0)
0x3ac: @ SetAttackState(Stack[-1])
0x3ad: Pop(1)
0x3ae: Push("all")
0x3af: Push("attack_end")
0x3b0: Pop(1); Push(Stack[-1] + Stack[-4]);
0x3b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: PushEmpty(bool, float)
0x3b4: Stack[-1] = (float) 0.75
0x3b5: Call 0x3bb

0x3b6: Pop(2)
0x3b7: @ StopAsync()
0x3b8: Pop(0)
0x3b9: Stack[-6] = (bool) 1
0x3ba: Return(); Pop(4)

0x3bb: PushEmpty(float, bool, float, bool)
0x3bc: @ rand(Stack[-2])
0x3bd: Pop(0)
0x3be: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c0: @ IsAnimationPlaying(Stack[-1])
0x3c1: Pop(0)
0x3c2: Pop(0); Push((bool) Stack[-1] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: GOTO 0x3ce

0x3c5: PushEmpty(bool)
0x3c6: Call 0x3fb

0x3c7: Pop(0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-6] = (bool) 1
0x3ca: Return(); Pop(4)

0x3cb: @ sync()
0x3cc: Pop(0)
0x3cd: GOTO 0x3c0

0x3ce: GOTO 0x3d1

0x3cf: @ WaitForAnimEnd()
0x3d0: Pop(0)
0x3d1: Stack[-6] = (bool) 0
0x3d2: Return(); Pop(4)

0x3d3: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3d4: @ IsAnimationPlaying(Stack[-5])
0x3d5: Pop(0)
0x3d6: Pop(0); Push((bool) Stack[-5] == 0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: GOTO 0x3f9

0x3d9: PushEmpty(bool)
0x3da: Call 0x3fb

0x3db: Pop(0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: Stack[-12] = (bool) 1
0x3de: Return(); Pop(10)

0x3df: PushEmpty(bool, object)
0x3e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e1: Call 0x58c

0x3e2: Pop(1)
0x3e3: Pop(1); Push((bool) Stack[-1] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: Stack[-12] = (bool) 0
0x3e6: Return(); Pop(10)

0x3e7: @@ GetPFPosition(Stack[-4])
0x3e8: Pop(0)
0x3e9: @ GetPFPosition(Stack[-3])
0x3ea: Pop(0)
0x3eb: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3ec: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ed: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3ee: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f0: PushEmpty(bool, float)
0x3f1: Stack[-1] = Stack[-13]
0x3f2: Call 0x36b

0x3f3: Pop(2)
0x3f4: Stack[-12] = (bool) 1
0x3f5: Return(); Pop(10)

0x3f6: @ sync()
0x3f7: Pop(0)
0x3f8: GOTO 0x3d4

0x3f9: Stack[-12] = (bool) 0
0x3fa: Return(); Pop(10)

0x3fb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fe: Call 0x58c

0x3ff: Pop(1)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-11] = (bool) 0
0x403: Return(); Pop(10)

0x404: PushEmpty(bool)
0x405: Call 0x42f

0x406: Pop(0)
0x407: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x408: @@ GetPFPosition(Stack[-5])
0x409: Pop(0)
0x40a: @ GetPFPosition(Stack[-4])
0x40b: Pop(0)
0x40c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x40d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x40e: @@ GetAttackDistance(Stack[-1])
0x40f: Pop(0)
0x410: Push((int) 50)
0x411: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x412: Pop(0); Push(Stack[-1] * Stack[-1]);
0x413: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x415: PushEmpty()
0x416: Call 0x41c

0x417: Pop(0)
0x418: Stack[-11] = (bool) 1
0x419: Return(); Pop(10)

0x41a: Stack[-11] = (bool) 0
0x41b: Return(); Pop(10)

0x41c: PushEmpty(cvector, cvector, cvector, cvector)
0x41d: @ Face(Stack[-0])
0x41e: Pop(0)
0x41f: Push("all")
0x420: Push("bjump")
0x421: @ PlayAnimation(Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: @@ GetPFPosition(Stack[-2])
0x424: Pop(0)
0x425: @ GetPFPosition(Stack[-1])
0x426: Pop(0)
0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: @ StopAsync()
0x42a: Pop(0)
0x42b: Push(CVector(0.0, 0.0, 0.0))
0x42c: @ SetSpeed(Stack[-1])
0x42d: Pop(1)
0x42e: Return(); Pop(4)

0x42f: PushEmpty(bool, bool)
0x430: Push("IsAttacking")
0x431: Push((int) 1)
0x432: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x433: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x434: @@ IsAttacking(Stack[-1])
0x435: Pop(0)
0x436: Stack[-3] = Stack[-1]
0x437: Return(); Pop(2)

0x438: Stack[-3] = (bool) 0
0x439: Return(); Pop(2)

0x43a: PushEmpty(float, int, float, int)
0x43b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Return(); Pop(4)

0x43e: Push( Stack[4 + Tasks[-1].StackPointer] )
0x43f: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x440: Push((int) -1)
0x441: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x442: Push((int) 0)
0x443: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x445: Return(); Pop(4)

0x446: @ rand(Stack[-2])
0x447: Pop(0)
0x448: PushEmpty(float)
0x449: Call 0x460

0x44a: Pop(0)
0x44b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x44d: @ irand(Stack[-1], Stack[-2])
0x44e: Pop(0)
0x44f: Push((int) 1)
0x450: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x451: Push("attack")
0x452: Pop(1); Push(Stack[-1] + Stack[-2]);
0x453: @ Speak(Stack[-1])
0x454: Pop(1)
0x455: PushEmpty(int)
0x456: Call 0x45e

0x457: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x458: Pop(1)
0x459: Return(); Pop(4)

0x45a: Stack[-1] = (int) 0
0x45b: Return(); Pop(0)

0x45c: PushEmpty()
0x45d: Return(); Pop(0)

0x45e: Stack[-1] = (int) 1
0x45f: Return(); Pop(0)

0x460: Stack[-1] = (float) 0.5
0x461: Return(); Pop(0)

0x462: PushEmpty()
0x463: Call 0x4e5

0x464: Pop(0)
0x465: PushEmpty()
0x466: Call 0x69d

0x467: Pop(0)
0x468: Return(); Pop(0)

0x469: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x46a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x46b: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x46c: Stack[-7] = Stack[-17]
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[-23]
0x46f: Call 0x4f5

0x470: Pop(1)
0x471: Pop(1); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-22] = (bool) 0
0x474: Return(); Pop(16)

0x475: @@ GetPosition(Stack[-5])
0x476: Pop(0)
0x477: @ GetPosition(Stack[-4])
0x478: Pop(0)
0x479: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x47a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x47b: PushEmpty(bool)
0x47c: Stack[-1] = (bool) 0
0x47d: Push((int) 0)
0x47e: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x480: Pop(0); Push(Stack[-20] * Stack[-20]);
0x481: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: Stack[-1] = (bool) 1
0x484: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x485: @ Stop()
0x486: Pop(0)
0x487: Stack[-22] = (bool) 0
0x488: Return(); Pop(16)

0x489: Pop(0); Push(Stack[-20] * Stack[-20]);
0x48a: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x48c: @@ GetPFPosition(Stack[-5])
0x48d: Pop(0)
0x48e: @ FindPathTo(Stack[-1], Stack[-5])
0x48f: Pop(0)
0x490: Pop(0); Push(( Stack[-1] != 0 )
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-6] = Stack[-1]
0x493: Stack[-1] = 0
0x494: Pop(0); Push(( Stack[-6] != 0 )
0x495: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x496: Push(Stack[-7])
0x497: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x498: Stack[-7] = (bool) 0
0x499: @ RotatePath(Stack[-6], Stack[-8])
0x49a: Pop(0)
0x49b: Pop(0); Push((bool) Stack[-8] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: GOTO 0x4cd

0x49e: Push((int) 0)
0x49f: Push((float)0.3)
0x4a0: @ SetTimer(Stack[-2], Stack[-1])
0x4a1: Pop(2)
0x4a2: PushEmpty(string)
0x4a3: Call 0x4fc

0x4a4: Pop(0)
0x4a5: PushEmpty(string)
0x4a6: Call 0x4fe

0x4a7: Pop(0)
0x4a8: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4a9: Pop(2)
0x4aa: Pop(0); Push((bool) Stack[-8] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ac: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4ae: Stack[-6] = 0
0x4af: GOTO 0x4cd

0x4b0: GOTO 0x4b2

0x4b1: GOTO 0x4cc

0x4b2: GOTO 0x4b4

0x4b3: Stack[-6] = 0
0x4b4: GOTO 0x4c5

0x4b5: Push((int) 0)
0x4b6: @ KillTimer(Stack[-1])
0x4b7: Pop(1)
0x4b8: Push((float)0.5)
0x4b9: @ Sleep(Stack[-1], Stack[-9])
0x4ba: Pop(1)
0x4bb: Pop(0); Push((bool) Stack[-8] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-6] = 0
0x4c0: GOTO 0x4cd

0x4c1: Push((int) 0)
0x4c2: Push((float)0.3)
0x4c3: @ SetTimer(Stack[-2], Stack[-1])
0x4c4: Pop(2)
0x4c5: Stack[-1] = 0
0x4c6: GOTO 0x4cb

0x4c7: Push((int) 0)
0x4c8: @ KillTimer(Stack[-1])
0x4c9: Pop(1)
0x4ca: GOTO 0x4cd

0x4cb: Stack[-6] = 0
0x4cc: GOTO 0x46d

0x4cd: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4ce: Return(); Pop(16)

0x4cf: PushEmpty()
0x4d0: Push((int) 0)
0x4d1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: Return(); Pop(0)

0x4d4: PushEmpty(bool, object)
0x4d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d6: Call 0x4f5

0x4d7: Pop(1)
0x4d8: Pop(1); Push((bool) Stack[-1] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4da: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4db: Push((int) 0)
0x4dc: @ KillTimer(Stack[-1])
0x4dd: Pop(1)
0x4de: @ Stop()
0x4df: Pop(0)
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty()
0x4e2: @ RequestClearPath(Stack[-1])
0x4e3: Pop(0)
0x4e4: Return(); Pop(0)

0x4e5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4e6: Push((int) 0)
0x4e7: @ KillTimer(Stack[-1])
0x4e8: Pop(1)
0x4e9: @ Stop()
0x4ea: Pop(0)
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty()
0x4ed: PushEmpty()
0x4ee: Call 0x4e5

0x4ef: Pop(0)
0x4f0: PushEmpty(object)
0x4f1: Stack[-1] = Stack[-2]
0x4f2: Call 0x656

0x4f3: Pop(1)
0x4f4: Return(); Pop(0)

0x4f5: PushEmpty()
0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[-3]
0x4f8: Call 0x58c

0x4f9: Stack[-4] = Stack[-2]
0x4fa: Pop(2)
0x4fb: Return(); Pop(0)

0x4fc: Stack[-1] = "walk"
0x4fd: Return(); Pop(0)

0x4fe: Stack[-1] = "run"
0x4ff: Return(); Pop(0)

0x500: PushEmpty()
0x501: Push((int) 1)
0x502: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x504: Stack[-2] = "fire"
0x505: Return(); Pop(0)

0x506: Stack[-2] = "phys"
0x507: Return(); Pop(0)

0x508: PushEmpty(cvector, cvector, cvector, cvector)
0x509: @ GetPosition(Stack[-2])
0x50a: Pop(0)
0x50b: @@ GetPosition(Stack[-1])
0x50c: Pop(0)
0x50d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x50e: Return(); Pop(4)

0x50f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x510: @ GetPosition(Stack[-3])
0x511: Pop(0)
0x512: @@ GetPosition(Stack[-2])
0x513: Pop(0)
0x514: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x515: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x516: Return(); Pop(6)

0x517: PushEmpty(bool, bool)
0x518: Push("HasProperty")
0x519: Push((int) 2)
0x51a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x51b: Pop(1); Push((bool) Stack[-1] == 0)
0x51c: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51d: Stack[-5] = (bool) 0
0x51e: Return(); Pop(2)

0x51f: @@ HasProperty(Stack[-3], Stack[-1])
0x520: Pop(0)
0x521: Stack[-5] = Stack[-1]
0x522: Return(); Pop(2)

0x523: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x524: PushEmpty(bool, object, string)
0x525: Stack[-2] = Stack[-18]
0x526: Stack[-1] = "health"
0x527: Call 0x517

0x528: Pop(2)
0x529: Pop(1); Push((bool) Stack[-1] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52b: Stack[-16] = (float) 0.0
0x52c: Return(); Pop(12)

0x52d: PushEmpty(bool, object, string)
0x52e: Stack[-2] = Stack[-18]
0x52f: Stack[-1] = "armor"
0x530: Call 0x517

0x531: Pop(2)
0x532: Pop(1); Push((bool) Stack[-1] == 0)
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: Stack[-6] = (int) 0
0x535: GOTO 0x539

0x536: Push("armor")
0x537: @@ GetProperty(Stack[-1], Stack[-7])
0x538: Pop(1)
0x539: Push("armor_")
0x53a: PushEmpty(string, int)
0x53b: Stack[-1] = Stack[-16]
0x53c: Call 0x500

0x53d: Pop(1)
0x53e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x53f: PushEmpty(bool, object, string)
0x540: Stack[-2] = Stack[-18]
0x541: Stack[-1] = Stack[-8]
0x542: Call 0x517

0x543: Pop(2)
0x544: Pop(1); Push((bool) Stack[-1] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-4] = (int) 0
0x547: GOTO 0x54a

0x548: @@ GetProperty(Stack[-5], Stack[-4])
0x549: Pop(0)
0x54a: PushEmpty(float, float, float)
0x54b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x54c: Push((float)100.0)
0x54d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x54e: Stack[-1] = (int) 1
0x54f: Call 0x602

0x550: Stack[-6] = Stack[-3]
0x551: Pop(3)
0x552: Push("health")
0x553: @@ GetProperty(Stack[-1], Stack[-3])
0x554: Pop(1)
0x555: Push((int) 1)
0x556: Pop(1); Push(Stack[-1] - Stack[-4]);
0x557: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x558: Push("health")
0x559: PushEmpty(float, float, float, float)
0x55a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x55b: Stack[-2] = (int) 0
0x55c: Stack[-1] = (int) 1
0x55d: Call 0x609

0x55e: Pop(3)
0x55f: @@ SetProperty(Stack[-2], Stack[-1])
0x560: Pop(2)
0x561: Stack[-16] = Stack[-1]
0x562: Return(); Pop(12)

0x563: PushEmpty(bool, bool)
0x564: @@ IsDead(Stack[-1])
0x565: Pop(0)
0x566: Stack[-4] = Stack[-1]
0x567: Return(); Pop(2)

0x568: PushEmpty(object, object, object, object)
0x569: Pop(0); Push((bool) Stack[-5] == 0)
0x56a: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56b: Stack[-6] = (bool) 0
0x56c: Return(); Pop(4)

0x56d: PushEmpty(bool)
0x56e: Stack[-1] = (bool) 0
0x56f: Push("IsDead")
0x570: Push((int) 1)
0x571: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x572: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x573: PushEmpty(bool, object)
0x574: Stack[-1] = Stack[-8]
0x575: Call 0x563

0x576: Pop(1)
0x577: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x578: Stack[-1] = (bool) 1
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-6] = (bool) 0
0x57b: Return(); Pop(4)

0x57c: @ GetScene(Stack[-2])
0x57d: Pop(0)
0x57e: Pop(0); Push((bool) Stack[-2] == 0)
0x57f: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x580: Stack[-6] = (bool) 0
0x581: Return(); Pop(4)

0x582: @@ GetScene(Stack[-1])
0x583: Pop(0)
0x584: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-6] = (bool) 0
0x587: Return(); Pop(4)

0x588: Stack[-6] = (bool) 1
0x589: Return(); Pop(4)

0x58a: Stack[-1] = 0
0x58b: Stack[-2] = 0
0x58c: PushEmpty(int, int)
0x58d: PushEmpty(bool, object)
0x58e: Stack[-1] = Stack[-5]
0x58f: Call 0x568

0x590: Pop(1)
0x591: Pop(1); Push((bool) Stack[-1] == 0)
0x592: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x593: Stack[-4] = (bool) 0
0x594: Return(); Pop(2)

0x595: PushEmpty(bool, object, string)
0x596: Stack[-2] = Stack[-6]
0x597: Stack[-1] = "noaccess"
0x598: Call 0x517

0x599: Pop(2)
0x59a: Pop(1); Push((bool) Stack[-1] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-4] = (bool) 1
0x59d: Return(); Pop(2)

0x59e: Push("noaccess")
0x59f: @@ GetProperty(Stack[-1], Stack[-2])
0x5a0: Pop(1)
0x5a1: Push((int) 0)
0x5a2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5a3: Return(); Pop(2)

0x5a4: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x5a5: PushEmpty(bool)
0x5a6: Stack[-1] = (bool) 0
0x5a7: Push((int) 4)
0x5a8: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5aa: Push((int) 5)
0x5ab: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Stack[-1] = (bool) 1
0x5ae: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5af: @ GetScene(Stack[-10])
0x5b0: Pop(0)
0x5b1: @ GetPosition(Stack[-8])
0x5b2: Pop(0)
0x5b3: @ GetEyesHeight(Stack[-7])
0x5b4: Pop(0)
0x5b5: Push(CvectorIndex(Stack[-8], 1))
0x5b6: Push((int) 2)
0x5b7: Pop(1); Push(Stack[-9] / Stack[-1]);
0x5b8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5b9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5ba: Push("scripted")
0x5bb: Push(CVector(0.0, 0.0, 1.0))
0x5bc: Push("blood.xml")
0x5bd: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Stack[-9] = 0
0x5c0: Stack[-10] = 0
0x5c1: Pop(0); Push((bool) Stack[-23] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: Return(); Pop(20)

0x5c4: @ GetSecondaryAnimationType(Stack[-6])
0x5c5: Pop(0)
0x5c6: Push((int) 0)
0x5c7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: Return(); Pop(20)

0x5ca: @@ GetPosition(Stack[-5])
0x5cb: Pop(0)
0x5cc: @ GetPosition(Stack[-4])
0x5cd: Pop(0)
0x5ce: @ GetDirection(Stack[-3])
0x5cf: Pop(0)
0x5d0: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5d1: Push(CvectorIndex(Stack[-2], 0))
0x5d2: Push(CvectorIndex(Stack[-4], 0))
0x5d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d4: Push(CvectorIndex(Stack[-3], 2))
0x5d5: Push(CvectorIndex(Stack[-5], 2))
0x5d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d8: Push((int) 0)
0x5d9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5db: Stack[-1] = "fhit"
0x5dc: GOTO 0x5de

0x5dd: Stack[-1] = "bhit"
0x5de: Push("hit_react")
0x5df: Push("1")
0x5e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5e1: Push("2")
0x5e2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5e3: Push((int) -10)
0x5e4: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e5: Pop(4)
0x5e6: Return(); Pop(20)

0x5e7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e8: @@ GetPosition(Stack[-3])
0x5e9: Pop(0)
0x5ea: @ GetPosition(Stack[-2])
0x5eb: Pop(0)
0x5ec: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5ed: Push(CvectorIndex(Stack[-1], 0))
0x5ee: Push(CvectorIndex(Stack[-2], 2))
0x5ef: @ RotateAsync(Stack[-2], Stack[-1])
0x5f0: Pop(2)
0x5f1: Return(); Pop(6)

0x5f2: PushEmpty(bool, bool)
0x5f3: @ IsLoaded(Stack[-1])
0x5f4: Pop(0)
0x5f5: Stack[-3] = Stack[-1]
0x5f6: Return(); Pop(2)

0x5f7: PushEmpty(float, cvector, float, cvector)
0x5f8: @@ GetEyesHeight(Stack[-2])
0x5f9: Pop(0)
0x5fa: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5fb: Push(CvectorIndex(Stack[-1], 1))
0x5fc: Stack[-1] = Stack[-3]
0x5fd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5fe: Push("head")
0x5ff: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x600: Pop(1)
0x601: Return(); Pop(4)

0x602: PushEmpty()
0x603: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-3] = Stack[-2]
0x606: GOTO 0x608

0x607: Stack[-3] = Stack[-1]
0x608: Return(); Pop(0)

0x609: PushEmpty()
0x60a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x60b: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60c: Stack[-4] = Stack[-2]
0x60d: Return(); Pop(0)

0x60e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[-4] = Stack[-1]
0x611: Return(); Pop(0)

0x612: Stack[-4] = Stack[-3]
0x613: Return(); Pop(0)

0x614: PushEmpty()
0x615: Push(CvectorIndex(Stack[-2], 0))
0x616: Push(CvectorIndex(Stack[-2], 0))
0x617: Pop(2); Push(Stack[-2] * Stack[-1]);
0x618: Push(CvectorIndex(Stack[-3], 2))
0x619: Push(CvectorIndex(Stack[-3], 2))
0x61a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x61b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x61c: Return(); Pop(0)

0x61d: PushEmpty()
0x61e: Push(CvectorIndex(Stack[-1], 0))
0x61f: Push(CvectorIndex(Stack[-2], 0))
0x620: Pop(2); Push(Stack[-2] * Stack[-1]);
0x621: Push(CvectorIndex(Stack[-2], 2))
0x622: Push(CvectorIndex(Stack[-3], 2))
0x623: Pop(2); Push(Stack[-2] * Stack[-1]);
0x624: Pop(2); Push(Stack[-2] + Stack[-1]);
0x625: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: PushEmpty(float, cvector, cvector)
0x629: Stack[-2] = Stack[-5]
0x62a: Stack[-1] = Stack[-4]
0x62b: Call 0x614

0x62c: Pop(2)
0x62d: PushEmpty(float, cvector)
0x62e: Stack[-1] = Stack[-5]
0x62f: Call 0x61d

0x630: Pop(1)
0x631: PushEmpty(float, cvector)
0x632: Stack[-1] = Stack[-5]
0x633: Call 0x61d

0x634: Pop(1)
0x635: Pop(2); Push(Stack[-2] * Stack[-1]);
0x636: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x637: Return(); Pop(0)

0x638: PushEmpty(float, float)
0x639: @ GetGameTime(Stack[-1])
0x63a: Pop(0)
0x63b: Push((int) 1)
0x63c: PushEmpty(int)
0x63d: Push((int) 24)
0x63e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x63f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x640: Return(); Pop(2)

0x641: PushEmpty()
0x642: PushEmpty(object)
0x643: Stack[-1] = Stack[-2]
0x644: Push(-1, 0); TaskCall(0)
0x645: Call 0x0

0x646: Pop(-1, 0); TaskReturn
0x647: Pop(1)
0x648: Return(); Pop(0)

0x649: PushEmpty(float, float)
0x64a: Push("health")
0x64b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x64d: Push("health")
0x64e: @ GetProperty(Stack[-1], Stack[-2])
0x64f: Pop(1)
0x650: Push((int) 0)
0x651: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: @ SignalDeath(Stack[-4])
0x654: Pop(0)
0x655: Return(); Pop(2)

0x656: PushEmpty()
0x657: PushEmpty(object)
0x658: Stack[-1] = Stack[-2]
0x659: Call 0x641

0x65a: Pop(1)
0x65b: Return(); Pop(0)

0x65c: PushEmpty()
0x65d: PushEmpty(object, int, float)
0x65e: Stack[-3] = Stack[-7]
0x65f: Stack[-2] = Stack[-6]
0x660: Stack[-1] = Stack[-5]
0x661: Call 0x5a4

0x662: Pop(3)
0x663: Return(); Pop(0)

0x664: PushEmpty()
0x665: PushEmpty(bool)
0x666: Call 0x7c0

0x667: Pop(0)
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: Stack[-2] = (int) 2
0x66a: GOTO 0x66c

0x66b: Stack[-2] = (int) 0
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: PushEmpty(object)
0x66f: Stack[-1] = Stack[-2]
0x670: Push(-1, 1); TaskCall(2)
0x671: Call 0x187

0x672: Pop(-1, 1); TaskReturn
0x673: Pop(1)
0x674: Return(); Pop(0)

0x675: PushEmpty()
0x676: PushEmpty(bool, object)
0x677: Stack[-1] = Stack[-3]
0x678: Call 0x58c

0x679: Pop(1)
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = (int) 2
0x67c: GOTO 0x67e

0x67d: Stack[-2] = (int) 0
0x67e: Return(); Pop(0)

0x67f: PushEmpty()
0x680: PushEmpty(object)
0x681: Stack[-1] = Stack[-2]
0x682: Push(-1, 5); TaskCall(3)
0x683: Call 0x269

0x684: Pop(-1, 5); TaskReturn
0x685: Pop(1)
0x686: Return(); Pop(0)

0x687: PushEmpty()
0x688: PushEmpty(int, object)
0x689: Stack[-1] = Stack[-3]
0x68a: Call 0x675

0x68b: Stack[-4] = Stack[-2]
0x68c: Pop(2)
0x68d: Return(); Pop(0)

0x68e: PushEmpty()
0x68f: PushEmpty(object)
0x690: Stack[-1] = Stack[-2]
0x691: Call 0x67f

0x692: Pop(1)
0x693: Return(); Pop(0)

0x694: PushEmpty()
0x695: Stack[-2] = (int) 2
0x696: Return(); Pop(0)

0x697: PushEmpty()
0x698: PushEmpty(object)
0x699: Stack[-1] = Stack[-2]
0x69a: Call 0x797

0x69b: Pop(1)
0x69c: Return(); Pop(0)

0x69d: Return(); Pop(0)

0x69e: PushEmpty(bool, bool)
0x69f: @ CanSee(Stack[-1], Stack[-3])
0x6a0: Pop(0)
0x6a1: Push(Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a3: PushEmpty(int, object)
0x6a4: Stack[-1] = Stack[-5]
0x6a5: Call 0x675

0x6a6: Stack[-6] = Stack[-2]
0x6a7: Pop(2)
0x6a8: Return(); Pop(2)

0x6a9: Stack[-4] = (int) 0
0x6aa: Return(); Pop(2)

0x6ab: PushEmpty()
0x6ac: PushEmpty(object)
0x6ad: Stack[-1] = Stack[-2]
0x6ae: Call 0x67f

0x6af: Pop(1)
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty()
0x6b2: Stack[-3] = (int) 0
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty()
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty(int, int, int, bool, int, int, int, bool)
0x6b7: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b9: Push("GenerateMoney: iMin > iMax")
0x6ba: @ Trace(Stack[-1])
0x6bb: Pop(1)
0x6bc: Return(); Pop(8)

0x6bd: Stack[-4] = (int) 0
0x6be: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c0: Pop(0); Push(Stack[-9] - Stack[-10]);
0x6c1: @ irand(Stack[-4], Stack[-1])
0x6c2: Pop(1)
0x6c3: GOTO 0x6c8

0x6c4: Push((int) 0)
0x6c5: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c7: Return(); Pop(8)

0x6c8: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x6c9: Push((int) 0)
0x6ca: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cc: Return(); Pop(8)

0x6cd: Push("Money")
0x6ce: @ GetInvItemByName(Stack[-3], Stack[-1])
0x6cf: Pop(1)
0x6d0: Push((int) 0)
0x6d1: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x6d2: Pop(1)
0x6d3: Return(); Pop(8)

0x6d4: PushEmpty(int, bool, int, bool)
0x6d5: Push(Stack[-5])
0x6d6: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x6d7: PushEmpty(int, int)
0x6d8: Stack[-2] = (int) 0
0x6d9: Push((int) 100)
0x6da: PushEmpty(int)
0x6db: Call 0x638

0x6dc: Pop(0)
0x6dd: Push((int) 100)
0x6de: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6df: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6e0: Call 0x6b6

0x6e1: Pop(2)
0x6e2: Push((int) 9)
0x6e3: @ irand(Stack[-3], Stack[-1])
0x6e4: Pop(1)
0x6e5: Push((int) 0)
0x6e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6e8: PushEmpty(int, string)
0x6e9: Stack[-1] = "lemon"
0x6ea: Call 0x783

0x6eb: Pop(1)
0x6ec: Push((int) 0)
0x6ed: Push((int) 1)
0x6ee: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: GOTO 0x72c

0x6f1: Push((int) 1)
0x6f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f3: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6f4: PushEmpty(int, string)
0x6f5: Stack[-1] = "rusk"
0x6f6: Call 0x783

0x6f7: Pop(1)
0x6f8: Push((int) 0)
0x6f9: Push((int) 1)
0x6fa: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6fb: Pop(3)
0x6fc: GOTO 0x72c

0x6fd: Push((int) 2)
0x6fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x700: PushEmpty(int, string)
0x701: Stack[-1] = "hook"
0x702: Call 0x783

0x703: Pop(1)
0x704: Push((int) 0)
0x705: Push((int) 1)
0x706: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: GOTO 0x72c

0x709: Push((int) 4)
0x70a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x70c: PushEmpty(int, string)
0x70d: Stack[-1] = "syringe"
0x70e: Call 0x783

0x70f: Pop(1)
0x710: Push((int) 0)
0x711: Push((int) 1)
0x712: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x713: Pop(3)
0x714: GOTO 0x72c

0x715: Push((int) 5)
0x716: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x718: PushEmpty(int, string)
0x719: Stack[-1] = "watch"
0x71a: Call 0x783

0x71b: Pop(1)
0x71c: Push((int) 0)
0x71d: Push((int) 1)
0x71e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x71f: Pop(3)
0x720: GOTO 0x72c

0x721: Push((int) 6)
0x722: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x723: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x724: PushEmpty(int, string)
0x725: Stack[-1] = "razor"
0x726: Call 0x783

0x727: Pop(1)
0x728: Push((int) 0)
0x729: Push((int) 1)
0x72a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x72b: Pop(3)
0x72c: GOTO 0x782

0x72d: PushEmpty(int, int)
0x72e: Stack[-2] = (int) 0
0x72f: Push((int) 50)
0x730: PushEmpty(int)
0x731: Call 0x638

0x732: Pop(0)
0x733: Push((int) 50)
0x734: Pop(2); Push(Stack[-2] * Stack[-1]);
0x735: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x736: Call 0x6b6

0x737: Pop(2)
0x738: Push((int) 8)
0x739: @ irand(Stack[-3], Stack[-1])
0x73a: Pop(1)
0x73b: Push((int) 0)
0x73c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x73e: PushEmpty(int, string)
0x73f: Stack[-1] = "beads"
0x740: Call 0x783

0x741: Pop(1)
0x742: Push((int) 0)
0x743: Push((int) 1)
0x744: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: GOTO 0x782

0x747: Push((int) 1)
0x748: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x749: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x74a: PushEmpty(int, string)
0x74b: Stack[-1] = "bracelet"
0x74c: Call 0x783

0x74d: Pop(1)
0x74e: Push((int) 0)
0x74f: Push((int) 1)
0x750: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: GOTO 0x782

0x753: Push((int) 2)
0x754: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x755: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x756: PushEmpty(int, string)
0x757: Stack[-1] = "ear_ring"
0x758: Call 0x783

0x759: Pop(1)
0x75a: Push((int) 0)
0x75b: Push((int) 1)
0x75c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(3)
0x75e: GOTO 0x782

0x75f: Push((int) 3)
0x760: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x762: PushEmpty(int, string)
0x763: Stack[-1] = "gold_ring"
0x764: Call 0x783

0x765: Pop(1)
0x766: Push((int) 0)
0x767: Push((int) 1)
0x768: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x769: Pop(3)
0x76a: GOTO 0x782

0x76b: Push((int) 4)
0x76c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x76e: PushEmpty(int, string)
0x76f: Stack[-1] = "silver_ring"
0x770: Call 0x783

0x771: Pop(1)
0x772: Push((int) 0)
0x773: Push((int) 1)
0x774: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: GOTO 0x782

0x777: Push((int) 5)
0x778: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77a: PushEmpty(int, string)
0x77b: Stack[-1] = "flower"
0x77c: Call 0x783

0x77d: Pop(1)
0x77e: Push((int) 0)
0x77f: Push((int) 1)
0x780: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x781: Pop(3)
0x782: Return(); Pop(4)

0x783: PushEmpty(int, int)
0x784: @ GetInvItemByName(Stack[-1], Stack[-3])
0x785: Pop(0)
0x786: Stack[-4] = Stack[-1]
0x787: Return(); Pop(2)

0x788: PushEmpty(string, string)
0x789: Stack[-1] = "idle"
0x78a: Push(Stack[-3])
0x78b: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x78d: Stack[-4] = Stack[-1]
0x78e: Return(); Pop(2)

0x78f: Push(GlobalVars[1])
0x790: Stack[-1] = (bool) 0
0x791: GlobalVars[1] = Stack[-1]; Pop(1)
0x792: PushEmpty(bool)
0x793: Stack[-1] = (bool) 1
0x794: Call 0x6d4

0x795: Pop(1)
0x796: Return(); Pop(0)

0x797: PushEmpty(bool, bool)
0x798: Push(GlobalVars[1])
0x799: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79a: @ IsOverrideActive(Stack[-1])
0x79b: Pop(0)
0x79c: Pop(0); Push((bool) Stack[-1] == 0)
0x79d: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79e: @ WorkWithCorpse(Stack[-3])
0x79f: Pop(0)
0x7a0: Return(); Pop(2)

0x7a1: Return(); Pop(2)

0x7a2: PushEmpty(int, bool, int, int, bool, int)
0x7a3: Stack[-3] = (int) 0
0x7a4: Push("all")
0x7a5: PushEmpty(string, int)
0x7a6: Stack[-1] = Stack[-6]
0x7a7: Call 0x788

0x7a8: Pop(1)
0x7a9: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0x7aa: Pop(2)
0x7ab: Pop(0); Push((bool) Stack[-2] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ad: GOTO 0x7b1

0x7ae: Push((int) 1)
0x7af: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x7b0: GOTO 0x7a4

0x7b1: @ irand(Stack[-1], Stack[-3])
0x7b2: Pop(0)
0x7b3: Push("all")
0x7b4: PushEmpty(string, int)
0x7b5: Stack[-1] = Stack[-4]
0x7b6: Call 0x788

0x7b7: Pop(1)
0x7b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x7b9: Pop(2)
0x7ba: @ WaitForAnimEnd()
0x7bb: Pop(0)
0x7bc: Return(); Pop(6)

0x7bd: @ StopAnimation()
0x7be: Pop(0)
0x7bf: Return(); Pop(0)

0x7c0: Stack[-1] = (bool) 1
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(string, bool, string, bool)
0x7c3: PushEmpty(bool, object, string)
0x7c4: Stack[-2] = Stack[-8]
0x7c5: Stack[-1] = "class"
0x7c6: Call 0x517

0x7c7: Pop(2)
0x7c8: Pop(1); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-7] = (bool) 0
0x7cb: Return(); Pop(4)

0x7cc: Push("class")
0x7cd: @@ GetProperty(Stack[-1], Stack[-3])
0x7ce: Pop(1)
0x7cf: PushEmpty(bool)
0x7d0: Stack[-1] = (bool) 0
0x7d1: PushEmpty(bool)
0x7d2: Stack[-1] = (bool) 0
0x7d3: PushEmpty(bool)
0x7d4: Stack[-1] = (bool) 0
0x7d5: PushEmpty(bool)
0x7d6: Stack[-1] = (bool) 0
0x7d7: PushEmpty(bool)
0x7d8: Stack[-1] = (bool) 0
0x7d9: PushEmpty(bool)
0x7da: Stack[-1] = (bool) 0
0x7db: Push("littleboy")
0x7dc: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7de: Push("littlegirl")
0x7df: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Stack[-1] = (bool) 1
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e3: Push("boy")
0x7e4: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: Stack[-1] = (bool) 1
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e8: Push("girl")
0x7e9: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7eb: Stack[-1] = (bool) 1
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ed: Push("wasted_girl")
0x7ee: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Stack[-1] = (bool) 1
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f2: Push("woman")
0x7f3: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: Stack[-1] = (bool) 1
0x7f6: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f7: Push("unosha")
0x7f8: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: Stack[-1] = (bool) 1
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fc: Stack[-7] = (bool) 0
0x7fd: Return(); Pop(4)

0x7fe: @ CanSee(Stack[-1], Stack[-6])
0x7ff: Pop(0)
0x800: PushEmpty(bool)
0x801: Stack[-1] = (bool) 1
0x802: Push(Stack[-2])
0x803: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x804: PushEmpty(float, object)
0x805: Stack[-1] = Stack[-9]
0x806: Call 0x50f

0x807: Pop(1)
0x808: Push((float)250000.0)
0x809: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: Stack[-1] = (bool) 0
0x80c: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80d: Push((float)-0.3)
0x80e: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x80f: Pop(1)
0x810: Stack[-7] = (bool) 1
0x811: Return(); Pop(4)

0x812: Stack[-7] = (bool) 0
0x813: Return(); Pop(4)

0x814: PushEmpty()
0x815: Push(GlobalVars[1])
0x816: Stack[-1] = (bool) 1
0x817: GlobalVars[1] = Stack[-1]; Pop(1)
0x818: Push((int) 50)
0x819: Push((int) 40)
0x81a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x81b: Pop(2)
0x81c: Return(); Pop(0)

