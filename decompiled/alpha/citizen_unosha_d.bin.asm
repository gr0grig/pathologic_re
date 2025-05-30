GlobalVarCount = 1
	G_VAR_0 bool 

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
	dattack_begin
	dattack_end
	zwalk
	GetPFPosition
	run
	attack
	@GetAttackDistance
	GetAttackDistance
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	bjump
	IsAttacking
	IsAttacking
	fire
	phys
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	health
	armor
	armor_
	disease
	armor_disease
	immunity
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
	idle
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
	class
	rat
	dog

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
	StopAnimation (0 args)
	Face (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	rand (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
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
	Trace (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	CanSee (2 args)
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
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xac Vars = (object)
		EVENT_17 Op = 0xc0 Vars = (object)
		EVENT_30 Op = 0xd4 Vars = (object, object)
		EVENT_40 Op = 0xee Vars = (object)
		EVENT_42 Op = 0x102 Vars = (object, string)
		EVENT_1 Op = 0x118 Vars = (object)
		EVENT_3 Op = 0x11e Vars = (object)
		EVENT_7 Op = 0x124 Vars = (int)
		EVENT_6 Op = 0x130 Vars = ()
		EVENT_41 Op = 0x147 Vars = (object)
		EVENT_10 Op = 0x1b1 Vars = (object)
		EVENT_28 Op = 0x1b5 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1c8 Vars = (object)
		EVENT_17 Op = 0x1dc Vars = (object)
		EVENT_30 Op = 0x1f0 Vars = (object, object)
		EVENT_40 Op = 0x20a Vars = (object)
		EVENT_42 Op = 0x21e Vars = (object, string)
		EVENT_6 Op = 0x234 Vars = ()
	GTASK_3  Params = 1
		EVENT_17 Op = 0x290 Vars = (object)
		EVENT_6 Op = 0x2a4 Vars = ()
		EVENT_41 Op = 0x2e1 Vars = (object)
	GTASK_4 Vars = (bool, object) Params = 2
		EVENT_17 Op = 0x2ea Vars = (object)
		EVENT_6 Op = 0x2fe Vars = ()
		EVENT_7 Op = 0x378 Vars = (int)
		EVENT_10 Op = 0x38a Vars = (object)
		EVENT_41 Op = 0x395 Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, int) Params = 1
	GTASK_6 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x5a0 Vars = ()
		EVENT_7 Op = 0x60d Vars = (int)
		EVENT_10 Op = 0x61f Vars = (object)
		EVENT_41 Op = 0x62a Vars = (object)

Events:
EVENT_16 Op = 0x7a6 Vars = (object, string)
EVENT_41 Op = 0x7b3 Vars = (object)
EVENT_22 Op = 0x7b9 Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x934

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x80d

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x810

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x816

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

0x94: Push((bool) 1)
0x95: @ SensePlayerOnly(Stack[-1])
0x96: Pop(1)
0x97: PushEmpty()
0x98: Call 0x8e9

0x99: Pop(0)
0x9a: PushEmpty()
0x9b: Call 0xa3

0x9c: Pop(0)
0x9d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9e: PushEmpty()
0x9f: Call 0x178

0xa0: Pop(0)
0xa1: GOTO 0x9d

0xa2: Return(); Pop(0)

0xa3: PushEmpty(bool)
0xa4: Call 0x77e

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call 0x816

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(int, int)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-5]
0xaf: Call 0x80d

0xb0: Stack[-3] = Stack[-2]
0xb1: Pop(2)
0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call 0x137

0xba: Pop(0)
0xbb: PushEmpty(object)
0xbc: Stack[-1] = Stack[-4]
0xbd: Call 0x810

0xbe: Pop(1)
0xbf: Return(); Pop(2)

0xc0: PushEmpty(int, int)
0xc1: PushEmpty(int, object)
0xc2: Stack[-1] = Stack[-5]
0xc3: Call 0x7e4

0xc4: Stack[-3] = Stack[-2]
0xc5: Pop(2)
0xc6: Push((int) 0)
0xc7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc9: Push((int) 1)
0xca: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcc: PushEmpty()
0xcd: Call 0x137

0xce: Pop(0)
0xcf: PushEmpty(object)
0xd0: Stack[-1] = Stack[-4]
0xd1: Call 0x7ee

0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: PushEmpty(int, int)
0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[-7]
0xd7: Stack[-1] = Stack[-6]
0xd8: Call 0x906

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x7f6

0xde: Stack[-3] = Stack[-2]
0xdf: Pop(2)
0xe0: Push((int) 0)
0xe1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe3: Push((int) 1)
0xe4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe6: PushEmpty()
0xe7: Call 0x137

0xe8: Pop(0)
0xe9: PushEmpty(object)
0xea: Stack[-1] = Stack[-5]
0xeb: Call 0x7fd

0xec: Pop(1)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int)
0xef: PushEmpty(int, object)
0xf0: Stack[-1] = Stack[-5]
0xf1: Call 0x803

0xf2: Stack[-3] = Stack[-2]
0xf3: Pop(2)
0xf4: Push((int) 0)
0xf5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf7: Push((int) 1)
0xf8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfa: PushEmpty()
0xfb: Call 0x137

0xfc: Pop(0)
0xfd: PushEmpty(object)
0xfe: Stack[-1] = Stack[-4]
0xff: Call 0x806

0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty(int, int)
0x103: PushEmpty(int, string, object)
0x104: Stack[-2] = Stack[-6]
0x105: Stack[-1] = Stack[-7]
0x106: Call 0x808

0x107: Stack[-4] = Stack[-3]
0x108: Pop(3)
0x109: Push((int) 0)
0x10a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10c: Push((int) 1)
0x10d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10f: PushEmpty()
0x110: Call 0x137

0x111: Pop(0)
0x112: PushEmpty(string, object)
0x113: Stack[-2] = Stack[-5]
0x114: Stack[-1] = Stack[-6]
0x115: Call 0x80b

0x116: Pop(2)
0x117: Return(); Pop(2)

0x118: PushEmpty()
0x119: PushEmpty(object)
0x11a: Stack[-1] = Stack[-2]
0x11b: Call 0x150

0x11c: Pop(1)
0x11d: Return(); Pop(0)

0x11e: PushEmpty()
0x11f: PushEmpty(object)
0x120: Stack[-1] = Stack[-2]
0x121: Call 0x150

0x122: Pop(1)
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: Push((int) 110)
0x126: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: Return(); Pop(0)

0x129: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x12a: Push((int) 110)
0x12b: @ KillTimer(Stack[-1])
0x12c: Pop(1)
0x12d: @ ResetAAS()
0x12e: Pop(0)
0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: Call 0x137

0x132: Pop(0)
0x133: PushEmpty()
0x134: Call 0x816

0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: Push((int) 110)
0x138: @ KillTimer(Stack[-1])
0x139: Pop(1)
0x13a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13b: PushEmpty()
0x13c: Call 0x1b8

0x13d: Pop(0)
0x13e: Return(); Pop(0)

0x13f: Push((int) 110)
0x140: @ KillTimer(Stack[-1])
0x141: Pop(1)
0x142: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x143: PushEmpty()
0x144: Call 0x1bf

0x145: Pop(0)
0x146: Return(); Pop(0)

0x147: PushEmpty()
0x148: PushEmpty()
0x149: Call 0x137

0x14a: Pop(0)
0x14b: PushEmpty(object)
0x14c: Stack[-1] = Stack[-2]
0x14d: Call 0x7b3

0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, int, bool, int)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-7]
0x153: Call 0x718

0x154: Pop(1)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Return(); Pop(4)

0x158: Push( Stack[2 + Tasks[-1].StackPointer] )
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Return(); Pop(4)

0x15b: @ IsPlayerActor(Stack[-5], Stack[-2])
0x15c: Pop(0)
0x15d: Pop(0); Push((bool) Stack[-2] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(4)

0x160: PushEmpty(int, object)
0x161: Stack[-1] = Stack[-7]
0x162: Call 0x7d9

0x163: Stack[-3] = Stack[-2]
0x164: Pop(2)
0x165: Push((int) 0)
0x166: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: Push((int) 1)
0x169: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: PushEmpty()
0x16c: Call 0x13f

0x16d: Pop(0)
0x16e: PushEmpty(object)
0x16f: Stack[-1] = Stack[-6]
0x170: Call 0x7dc

0x171: Pop(1)
0x172: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x173: Push((int) 110)
0x174: Push((float)10.0)
0x175: @ SetTimer(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: Return(); Pop(4)

0x178: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x179: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x17a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x17b: Push((float)0.5)
0x17c: @ rand(Stack[-8], Stack[-1])
0x17d: Pop(1)
0x17e: @ Sleep(Stack[-7])
0x17f: Pop(0)
0x180: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x182: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x184: @ GetPosition(Stack[-5])
0x185: Pop(0)
0x186: @ GetCameraFarDistance(Stack[-4])
0x187: Pop(0)
0x188: Push((float)2.5)
0x189: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x18a: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x18b: Pop(0)
0x18c: Push(Stack[-3])
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: GOTO 0x193

0x18f: Push((int) 1)
0x190: @ Sleep(Stack[-1])
0x191: Pop(1)
0x192: GOTO 0x184

0x193: GOTO 0x195

0x194: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x195: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x196: Pop(0)
0x197: Pop(0); Push(( Stack[-2] != 0 )
0x198: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x199: @ RotatePath(Stack[-2], Stack[-1])
0x19a: Pop(0)
0x19b: Push(Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19d: PushEmpty(bool)
0x19e: Call 0x1c6

0x19f: Pop(0)
0x1a0: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1a1: Pop(1)
0x1a2: Stack[-2] = 0
0x1a3: Push(Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a5: PushEmpty()
0x1a6: Push(-0, 0); TaskCall(2)
0x1a7: Call 0x23b

0x1a8: Pop(-0, 0); TaskReturn
0x1a9: Pop(0)
0x1aa: GOTO 0x1ae

0x1ab: Push((int) 1)
0x1ac: @ Sleep(Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[-2] = 0
0x1af: GOTO 0x180

0x1b0: Return(); Pop(14)

0x1b1: PushEmpty()
0x1b2: @ RequestClearPath(Stack[-1])
0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: @ Stop()
0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ba: @ Stop()
0x1bb: Pop(0)
0x1bc: @ StopGroup0()
0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c1: @ Stop()
0x1c2: Pop(0)
0x1c3: @ StopGroup0()
0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: Stack[-1] = (bool) 0
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty(int, int)
0x1c9: PushEmpty(int, object)
0x1ca: Stack[-1] = Stack[-5]
0x1cb: Call 0x80d

0x1cc: Stack[-3] = Stack[-2]
0x1cd: Pop(2)
0x1ce: Push((int) 0)
0x1cf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call 0x280

0x1d6: Pop(0)
0x1d7: PushEmpty(object)
0x1d8: Stack[-1] = Stack[-4]
0x1d9: Call 0x810

0x1da: Pop(1)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: PushEmpty(int, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call 0x7e4

0x1e0: Stack[-3] = Stack[-2]
0x1e1: Pop(2)
0x1e2: Push((int) 0)
0x1e3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e5: Push((int) 1)
0x1e6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: PushEmpty()
0x1e9: Call 0x280

0x1ea: Pop(0)
0x1eb: PushEmpty(object)
0x1ec: Stack[-1] = Stack[-4]
0x1ed: Call 0x7ee

0x1ee: Pop(1)
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(int, int)
0x1f1: PushEmpty(bool, object, object)
0x1f2: Stack[-2] = Stack[-7]
0x1f3: Stack[-1] = Stack[-6]
0x1f4: Call 0x906

0x1f5: Pop(2)
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call 0x7f6

0x1fa: Stack[-3] = Stack[-2]
0x1fb: Pop(2)
0x1fc: Push((int) 0)
0x1fd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1ff: Push((int) 1)
0x200: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x202: PushEmpty()
0x203: Call 0x280

0x204: Pop(0)
0x205: PushEmpty(object)
0x206: Stack[-1] = Stack[-5]
0x207: Call 0x7fd

0x208: Pop(1)
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-5]
0x20d: Call 0x803

0x20e: Stack[-3] = Stack[-2]
0x20f: Pop(2)
0x210: Push((int) 0)
0x211: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x213: Push((int) 1)
0x214: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: PushEmpty()
0x217: Call 0x280

0x218: Pop(0)
0x219: PushEmpty(object)
0x21a: Stack[-1] = Stack[-4]
0x21b: Call 0x806

0x21c: Pop(1)
0x21d: Return(); Pop(2)

0x21e: PushEmpty(int, int)
0x21f: PushEmpty(int, string, object)
0x220: Stack[-2] = Stack[-6]
0x221: Stack[-1] = Stack[-7]
0x222: Call 0x808

0x223: Stack[-4] = Stack[-3]
0x224: Pop(3)
0x225: Push((int) 0)
0x226: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x228: Push((int) 1)
0x229: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22b: PushEmpty()
0x22c: Call 0x280

0x22d: Pop(0)
0x22e: PushEmpty(string, object)
0x22f: Stack[-2] = Stack[-5]
0x230: Stack[-1] = Stack[-6]
0x231: Call 0x80b

0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Call 0x280

0x236: Pop(0)
0x237: PushEmpty()
0x238: Call 0x816

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Call 0x77e

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(14)

0x244: PushEmpty(int)
0x245: Call 0x7c8

0x246: Stack[-8] = Stack[-1]
0x247: Pop(1)
0x248: Stack[-6] = (int) 0
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call 0x77e

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x254: Push((int) 3)
0x255: @ irand(Stack[-6], Stack[-1])
0x256: Pop(1)
0x257: Push((int) 0)
0x258: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x25a: Push(Stack[-7])
0x25b: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x25c: @ irand(Stack[-4], Stack[-7])
0x25d: Pop(0)
0x25e: Push("all")
0x25f: PushEmpty(string, int)
0x260: Stack[-1] = Stack[-7]
0x261: Call 0x7c1

0x262: Pop(1)
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: @ WaitForAnimEnd(Stack[-3])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-3] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x27f

0x26a: GOTO 0x27c

0x26b: Push((int) 1)
0x26c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26e: Push((int) 4)
0x26f: @ rand(Stack[-3], Stack[-1])
0x270: Pop(1)
0x271: Push((int) 1)
0x272: Pop(1); Push(Stack[-3] + Stack[-1]);
0x273: @ Sleep(Stack[-1], Stack[-2])
0x274: Pop(1)
0x275: Pop(0); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27f

0x278: GOTO 0x27c

0x279: Push(Stack[-6])
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x27f

0x27c: Push((int) 1)
0x27d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27e: GOTO 0x249

0x27f: Return(); Pop(14)

0x280: @ StopAnimation()
0x281: Pop(0)
0x282: @ StopGroup0()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty()
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[-3]
0x288: Call 0x8fc

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28b: PushEmpty(object)
0x28c: Stack[-1] = Stack[-2]
0x28d: Call 0x2ab

0x28e: Pop(1)
0x28f: Return(); Pop(0)

0x290: PushEmpty(int, int)
0x291: PushEmpty(int, object)
0x292: Stack[-1] = Stack[-5]
0x293: Call 0x901

0x294: Stack[-3] = Stack[-2]
0x295: Pop(2)
0x296: Push((int) 0)
0x297: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x299: Push((int) 1)
0x29a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: PushEmpty()
0x29d: Call 0x2dc

0x29e: Pop(0)
0x29f: PushEmpty(object)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Call 0x904

0x2a2: Pop(1)
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty()
0x2a5: Call 0x2dc

0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call 0x816

0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(bool, bool)
0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[-5]
0x2ae: Push(-2, 2); TaskCall(4)
0x2af: Call 0x305

0x2b0: Pop(-2, 2); TaskReturn
0x2b1: Pop(1)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2b3: @ Face(Stack[-3])
0x2b4: Pop(0)
0x2b5: @ WaitForAnimEnd(Stack[-1])
0x2b6: Pop(0)
0x2b7: Pop(0); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2db

0x2ba: Push("all")
0x2bb: Push("dattack_begin")
0x2bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: @ WaitForAnimEnd(Stack[-1])
0x2bf: Pop(0)
0x2c0: Pop(0); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2db

0x2c3: PushEmpty(float, object)
0x2c4: Stack[-1] = Stack[-5]
0x2c5: Call 0x646

0x2c6: Pop(1)
0x2c7: Push((float)90000.0)
0x2c8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: PushEmpty(float, object, float)
0x2cb: Stack[-2] = Stack[-6]
0x2cc: Stack[-1] = (float) 0.2
0x2cd: Call 0x6b0

0x2ce: Pop(3)
0x2cf: Push("all")
0x2d0: Push("dattack_end")
0x2d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: @ WaitForAnimEnd(Stack[-1])
0x2d4: Pop(0)
0x2d5: Pop(0); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: @ StopAsync()
0x2d9: Pop(0)
0x2da: GOTO 0x2ac

0x2db: Return(); Pop(2)

0x2dc: @ StopAsync()
0x2dd: Pop(0)
0x2de: @ StopAnimation()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty()
0x2e2: PushEmpty()
0x2e3: Call 0x2dc

0x2e4: Pop(0)
0x2e5: PushEmpty(object)
0x2e6: Stack[-1] = Stack[-2]
0x2e7: Call 0x7b3

0x2e8: Pop(1)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(int, int)
0x2eb: PushEmpty(int, object)
0x2ec: Stack[-1] = Stack[-5]
0x2ed: Call 0x901

0x2ee: Stack[-3] = Stack[-2]
0x2ef: Pop(2)
0x2f0: Push((int) 0)
0x2f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f3: Push((int) 1)
0x2f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f6: PushEmpty()
0x2f7: Call 0x38e

0x2f8: Pop(0)
0x2f9: PushEmpty(object)
0x2fa: Stack[-1] = Stack[-4]
0x2fb: Call 0x904

0x2fc: Pop(1)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty()
0x2ff: Call 0x38e

0x300: Pop(0)
0x301: PushEmpty()
0x302: Call 0x816

0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: PushEmpty(bool, object, float, float, bool, bool)
0x307: Stack[-5] = Stack[-7]
0x308: Stack[-4] = (int) 150
0x309: Stack[-3] = (int) 3000
0x30a: Stack[-2] = (bool) 0
0x30b: Stack[-1] = (bool) 1
0x30c: Call 0x312

0x30d: Stack[-8] = Stack[-6]
0x30e: Pop(6)
0x30f: Return(); Pop(0)

0x310: Stack[-1] = "zwalk"
0x311: Return(); Pop(0)

0x312: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x313: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x314: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x315: Stack[-7] = Stack[-17]
0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[-23]
0x318: Call 0x39e

0x319: Pop(1)
0x31a: Pop(1); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-22] = (bool) 0
0x31d: Return(); Pop(16)

0x31e: @@ GetPosition(Stack[-5])
0x31f: Pop(0)
0x320: @ GetPosition(Stack[-4])
0x321: Pop(0)
0x322: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x323: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x324: PushEmpty(bool)
0x325: Stack[-1] = (bool) 0
0x326: Push((int) 0)
0x327: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: Pop(0); Push(Stack[-20] * Stack[-20]);
0x32a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 1
0x32d: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32e: @ Stop()
0x32f: Pop(0)
0x330: Stack[-22] = (bool) 0
0x331: Return(); Pop(16)

0x332: Pop(0); Push(Stack[-20] * Stack[-20]);
0x333: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x335: @@ GetPFPosition(Stack[-5])
0x336: Pop(0)
0x337: @ FindPathTo(Stack[-1], Stack[-5])
0x338: Pop(0)
0x339: Pop(0); Push(( Stack[-1] != 0 )
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-6] = Stack[-1]
0x33c: Stack[-1] = 0
0x33d: Pop(0); Push(( Stack[-6] != 0 )
0x33e: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x33f: Push(Stack[-7])
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: Stack[-7] = (bool) 0
0x342: @ RotatePath(Stack[-6], Stack[-8])
0x343: Pop(0)
0x344: Pop(0); Push((bool) Stack[-8] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: GOTO 0x376

0x347: Push((int) 0)
0x348: Push((float)0.3)
0x349: @ SetTimer(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: PushEmpty(string)
0x34c: Call 0x310

0x34d: Pop(0)
0x34e: PushEmpty(string)
0x34f: Call 0x3a5

0x350: Pop(0)
0x351: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Pop(0); Push((bool) Stack[-8] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x355: Push( Stack[0 + Tasks[-1].StackPointer] )
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Stack[-6] = 0
0x358: GOTO 0x376

0x359: GOTO 0x35b

0x35a: GOTO 0x375

0x35b: GOTO 0x35d

0x35c: Stack[-6] = 0
0x35d: GOTO 0x36e

0x35e: Push((int) 0)
0x35f: @ KillTimer(Stack[-1])
0x360: Pop(1)
0x361: Push((float)0.5)
0x362: @ Sleep(Stack[-1], Stack[-9])
0x363: Pop(1)
0x364: Pop(0); Push((bool) Stack[-8] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x366: Push( Stack[0 + Tasks[-1].StackPointer] )
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-6] = 0
0x369: GOTO 0x376

0x36a: Push((int) 0)
0x36b: Push((float)0.3)
0x36c: @ SetTimer(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: Stack[-1] = 0
0x36f: GOTO 0x374

0x370: Push((int) 0)
0x371: @ KillTimer(Stack[-1])
0x372: Pop(1)
0x373: GOTO 0x376

0x374: Stack[-6] = 0
0x375: GOTO 0x316

0x376: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x377: Return(); Pop(16)

0x378: PushEmpty()
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37c: Return(); Pop(0)

0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37f: Call 0x39e

0x380: Pop(1)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x384: Push((int) 0)
0x385: @ KillTimer(Stack[-1])
0x386: Pop(1)
0x387: @ Stop()
0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: @ RequestClearPath(Stack[-1])
0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x38f: Push((int) 0)
0x390: @ KillTimer(Stack[-1])
0x391: Pop(1)
0x392: @ Stop()
0x393: Pop(0)
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: PushEmpty()
0x397: Call 0x38e

0x398: Pop(0)
0x399: PushEmpty(object)
0x39a: Stack[-1] = Stack[-2]
0x39b: Call 0x7b3

0x39c: Pop(1)
0x39d: Return(); Pop(0)

0x39e: PushEmpty()
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[-3]
0x3a1: Call 0x718

0x3a2: Stack[-4] = Stack[-2]
0x3a3: Pop(2)
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = "run"
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty()
0x3a8: PushEmpty(object, bool, float)
0x3a9: Stack[-3] = Stack[-4]
0x3aa: Stack[-2] = (bool) 1
0x3ab: Stack[-1] = (float) 180.0
0x3ac: Call 0x3b5

0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: PushEmpty()
0x3b0: Stack[-3] = (float) 0.05
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty()
0x3b3: Stack[-3] = (int) 0
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x3b6: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x3b7: Push("all")
0x3b8: Push("attack_begin")
0x3b9: Push((int) 1)
0x3ba: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x3bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3bc: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: Pop(0); Push((bool) Stack[-10] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c0: GOTO 0x3c4

0x3c1: Push((int) 1)
0x3c2: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3c3: GOTO 0x3b7

0x3c4: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x3c5: Push("attack")
0x3c6: Push((int) 1)
0x3c7: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x3c8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c9: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x3ca: Pop(1)
0x3cb: Pop(0); Push((bool) Stack[-9] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x3d1

0x3ce: Push((int) 1)
0x3cf: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3d0: GOTO 0x3c5

0x3d1: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x3d2: Push("@GetAttackDistance")
0x3d3: Push((int) 1)
0x3d4: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x3d5: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d6: @@ GetAttackDistance(Stack[-8])
0x3d7: Pop(0)
0x3d8: Push((int) 50)
0x3d9: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x3da: GOTO 0x3dc

0x3db: Stack[-8] = Stack[-21]
0x3dc: Push((int) 150)
0x3dd: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: Stack[-8] = (int) 150
0x3e0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x3e2: @ IsPlayerActor(Stack[-0], Stack[-5])
0x3e3: Pop(0)
0x3e4: Push(Stack[-22])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-4] = (bool) 0
0x3e7: GOTO 0x3e9

0x3e8: Stack[-4] = (bool) 1
0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ed: Call 0x718

0x3ee: Pop(1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f0: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x3f4: @@ GetPFPosition(Stack[-7])
0x3f5: Pop(0)
0x3f6: @ GetPFPosition(Stack[-6])
0x3f7: Pop(0)
0x3f8: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3f9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3fa: Push((float)400.0)
0x3fb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3fc: Push((float)400.0)
0x3fd: Pop(1); Push(Stack[-1] + Stack[-10]);
0x3fe: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ff: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x401: PushEmpty(bool, object, float, float, bool, bool)
0x402: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x403: Stack[-4] = Stack[-14]
0x404: Stack[-3] = (float) 3000.0
0x405: Stack[-2] = (bool) 1
0x406: Stack[-1] = (bool) 0
0x407: Push(-6, 2); TaskCall(6)
0x408: Call 0x5a7

0x409: Pop(-6, 2); TaskReturn
0x40a: Pop(5)
0x40b: Pop(1); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: GOTO 0x471

0x40e: Stack[-4] = (bool) 0
0x40f: GOTO 0x470

0x410: Pop(0); Push(Stack[-21] * Stack[-21]);
0x411: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x413: Pop(0); Push((bool) Stack[-4] == 0)
0x414: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x417: Call 0x773

0x418: Pop(1)
0x419: Push("all")
0x41a: Push("attack_on")
0x41b: @ PlayAnimation(Stack[-2], Stack[-1])
0x41c: Pop(2)
0x41d: @ WaitForAnimEnd()
0x41e: Pop(0)
0x41f: @ StopAsync()
0x420: Pop(0)
0x421: Stack[-4] = (bool) 1
0x422: @ rand(Stack[-1])
0x423: Pop(0)
0x424: PushEmpty(bool)
0x425: Stack[-1] = (bool) 1
0x426: Push((float)0.6)
0x427: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x429: PushEmpty(bool)
0x42a: Call 0x56d

0x42b: Pop(0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: Stack[-1] = (bool) 0
0x42e: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x42f: @ Face(Stack[-0])
0x430: Pop(0)
0x431: Push("all")
0x432: Push("attack_stay")
0x433: @ PlayAnimation(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: PushEmpty(bool, float)
0x436: Stack[-1] = Stack[-23]
0x437: Call 0x511

0x438: Pop(2)
0x439: @ StopAsync()
0x43a: Pop(0)
0x43b: GOTO 0x467

0x43c: @ Face(Stack[-0])
0x43d: Pop(0)
0x43e: Push("all")
0x43f: Push("fjump")
0x440: @ PlayAnimation(Stack[-2], Stack[-1])
0x441: Pop(2)
0x442: @ WaitForAnimEnd()
0x443: Pop(0)
0x444: Push(CVector(0.0, 0.0, 0.0))
0x445: @ SetSpeed(Stack[-1])
0x446: Pop(1)
0x447: @ Stop()
0x448: Pop(0)
0x449: @ StopAsync()
0x44a: Pop(0)
0x44b: PushEmpty(bool)
0x44c: Call 0x56d

0x44d: Pop(0)
0x44e: Pop(1); Push((bool) Stack[-1] == 0)
0x44f: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x450: PushEmpty(bool, object)
0x451: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x452: Call 0x718

0x453: Pop(1)
0x454: Pop(1); Push((bool) Stack[-1] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x456: GOTO 0x471

0x457: @@ GetPFPosition(Stack[-7])
0x458: Pop(0)
0x459: @ GetPFPosition(Stack[-6])
0x45a: Pop(0)
0x45b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x45c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x45d: Pop(0); Push(Stack[-21] * Stack[-21]);
0x45e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x460: PushEmpty(bool, float)
0x461: Stack[-1] = Stack[-23]
0x462: Call 0x4a9

0x463: Pop(1)
0x464: Pop(1); Push((bool) Stack[-1] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x466: GOTO 0x471

0x467: GOTO 0x470

0x468: PushEmpty(bool, float)
0x469: Stack[-1] = Stack[-23]
0x46a: Call 0x4a9

0x46b: Pop(1)
0x46c: Pop(1); Push((bool) Stack[-1] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: GOTO 0x471

0x46f: Stack[-4] = (bool) 1
0x470: GOTO 0x3e9

0x471: @ WaitForAnimEnd()
0x472: Pop(0)
0x473: Push( Stack[3 + Tasks[-1].StackPointer] )
0x474: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x475: Return(); Pop(20)

0x476: Push("all")
0x477: Push("attack_off")
0x478: @ PlayAnimation(Stack[-2], Stack[-1])
0x479: Pop(2)
0x47a: @ WaitForAnimEnd()
0x47b: Pop(0)
0x47c: Push(Stack[-5])
0x47d: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47e: Push((float)2.0)
0x47f: @ Sleep(Stack[-1])
0x480: Pop(1)
0x481: Return(); Pop(20)

0x482: PushEmpty(object, float, float, object, float, float)
0x483: Push((float)0.9)
0x484: Pop(1); Push(Stack[-9] * Stack[-1]);
0x485: @ GetVictim(Stack[-1], Stack[-4])
0x486: Pop(1)
0x487: @ ReportAttack(Stack[-0])
0x488: Pop(0)
0x489: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x48a: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x48b: PushEmpty(float, object, int)
0x48c: Stack[-2] = Stack[-6]
0x48d: Stack[-1] = Stack[-10]
0x48e: Call 0x3af

0x48f: Stack[-5] = Stack[-3]
0x490: Pop(3)
0x491: PushEmpty(float, object, float, int)
0x492: Stack[-3] = Stack[-7]
0x493: Stack[-2] = Stack[-6]
0x494: PushEmpty(int, object, int)
0x495: Stack[-2] = Stack[-10]
0x496: Stack[-1] = Stack[-14]
0x497: Call 0x3b2

0x498: Stack[-4] = Stack[-3]
0x499: Pop(3)
0x49a: Call 0x670

0x49b: Stack[-5] = Stack[-4]
0x49c: Pop(4)
0x49d: PushEmpty(int)
0x49e: Call 0x598

0x49f: Pop(0)
0x4a0: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x4a1: Pop(1)
0x4a2: PushEmpty(object, float)
0x4a3: Stack[-2] = Stack[-5]
0x4a4: Stack[-1] = Stack[-3]
0x4a5: Call 0x59a

0x4a6: Pop(2)
0x4a7: Return(); Pop(6)

0x4a8: Stack[-3] = 0
0x4a9: PushEmpty(int, bool, int, bool)
0x4aa: @ irand(Stack[-2], Stack[-1])
0x4ab: Pop(0)
0x4ac: Push((int) 1)
0x4ad: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4ae: @ Face(Stack[-0])
0x4af: Pop(0)
0x4b0: Push((bool) 1)
0x4b1: @ SetAttackState(Stack[-1])
0x4b2: Pop(1)
0x4b3: Push("all")
0x4b4: Push("attack_begin")
0x4b5: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b7: Pop(2)
0x4b8: @ WaitForAnimEnd()
0x4b9: Pop(0)
0x4ba: PushEmpty()
0x4bb: Call 0x578

0x4bc: Pop(0)
0x4bd: PushEmpty(bool, object)
0x4be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bf: Call 0x718

0x4c0: Pop(1)
0x4c1: Pop(1); Push((bool) Stack[-1] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c3: @ StopAsync()
0x4c4: Pop(0)
0x4c5: Stack[-6] = (bool) 0
0x4c6: Return(); Pop(4)

0x4c7: PushEmpty(float, int)
0x4c8: Stack[-2] = Stack[-7]
0x4c9: Stack[-1] = Stack[-4]
0x4ca: Call 0x482

0x4cb: Pop(2)
0x4cc: Push("all")
0x4cd: Push("attack_middle")
0x4ce: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4cf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(2)
0x4d1: Push(Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4d3: Push("all")
0x4d4: Push("attack_middle")
0x4d5: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d7: Pop(2)
0x4d8: @ WaitForAnimEnd()
0x4d9: Pop(0)
0x4da: PushEmpty(bool, object)
0x4db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4dc: Call 0x718

0x4dd: Pop(1)
0x4de: Pop(1); Push((bool) Stack[-1] == 0)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e0: @ StopAsync()
0x4e1: Pop(0)
0x4e2: Stack[-6] = (bool) 0
0x4e3: Return(); Pop(4)

0x4e4: PushEmpty(float, int)
0x4e5: Stack[-2] = Stack[-7]
0x4e6: Stack[-1] = Stack[-4]
0x4e7: Call 0x482

0x4e8: Pop(2)
0x4e9: Push((bool) 0)
0x4ea: @ SetAttackState(Stack[-1])
0x4eb: Pop(1)
0x4ec: Push("all")
0x4ed: Push("attack_end")
0x4ee: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f0: Pop(2)
0x4f1: PushEmpty(bool, float)
0x4f2: Stack[-1] = (float) 0.75
0x4f3: Call 0x4f9

0x4f4: Pop(2)
0x4f5: @ StopAsync()
0x4f6: Pop(0)
0x4f7: Stack[-6] = (bool) 1
0x4f8: Return(); Pop(4)

0x4f9: PushEmpty(float, bool, float, bool)
0x4fa: @ rand(Stack[-2])
0x4fb: Pop(0)
0x4fc: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4fd: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x4fe: @ IsAnimationPlaying(Stack[-1])
0x4ff: Pop(0)
0x500: Pop(0); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: GOTO 0x50c

0x503: PushEmpty(bool)
0x504: Call 0x539

0x505: Pop(0)
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: Stack[-6] = (bool) 1
0x508: Return(); Pop(4)

0x509: @ sync()
0x50a: Pop(0)
0x50b: GOTO 0x4fe

0x50c: GOTO 0x50f

0x50d: @ WaitForAnimEnd()
0x50e: Pop(0)
0x50f: Stack[-6] = (bool) 0
0x510: Return(); Pop(4)

0x511: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x512: @ IsAnimationPlaying(Stack[-5])
0x513: Pop(0)
0x514: Pop(0); Push((bool) Stack[-5] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: GOTO 0x537

0x517: PushEmpty(bool)
0x518: Call 0x539

0x519: Pop(0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51b: Stack[-12] = (bool) 1
0x51c: Return(); Pop(10)

0x51d: PushEmpty(bool, object)
0x51e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51f: Call 0x718

0x520: Pop(1)
0x521: Pop(1); Push((bool) Stack[-1] == 0)
0x522: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x523: Stack[-12] = (bool) 0
0x524: Return(); Pop(10)

0x525: @@ GetPFPosition(Stack[-4])
0x526: Pop(0)
0x527: @ GetPFPosition(Stack[-3])
0x528: Pop(0)
0x529: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x52a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x52b: Pop(0); Push(Stack[-11] * Stack[-11]);
0x52c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x52e: PushEmpty(bool, float)
0x52f: Stack[-1] = Stack[-13]
0x530: Call 0x4a9

0x531: Pop(2)
0x532: Stack[-12] = (bool) 1
0x533: Return(); Pop(10)

0x534: @ sync()
0x535: Pop(0)
0x536: GOTO 0x512

0x537: Stack[-12] = (bool) 0
0x538: Return(); Pop(10)

0x539: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x53a: PushEmpty(bool, object)
0x53b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53c: Call 0x718

0x53d: Pop(1)
0x53e: Pop(1); Push((bool) Stack[-1] == 0)
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: Stack[-11] = (bool) 0
0x541: Return(); Pop(10)

0x542: PushEmpty(bool)
0x543: Call 0x56d

0x544: Pop(0)
0x545: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x546: @@ GetPFPosition(Stack[-5])
0x547: Pop(0)
0x548: @ GetPFPosition(Stack[-4])
0x549: Pop(0)
0x54a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x54b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x54c: @@ GetAttackDistance(Stack[-1])
0x54d: Pop(0)
0x54e: Push((int) 50)
0x54f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x550: Pop(0); Push(Stack[-1] * Stack[-1]);
0x551: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x553: PushEmpty()
0x554: Call 0x55a

0x555: Pop(0)
0x556: Stack[-11] = (bool) 1
0x557: Return(); Pop(10)

0x558: Stack[-11] = (bool) 0
0x559: Return(); Pop(10)

0x55a: PushEmpty(cvector, cvector, cvector, cvector)
0x55b: @ Face(Stack[-0])
0x55c: Pop(0)
0x55d: Push("all")
0x55e: Push("bjump")
0x55f: @ PlayAnimation(Stack[-2], Stack[-1])
0x560: Pop(2)
0x561: @@ GetPFPosition(Stack[-2])
0x562: Pop(0)
0x563: @ GetPFPosition(Stack[-1])
0x564: Pop(0)
0x565: @ WaitForAnimEnd()
0x566: Pop(0)
0x567: @ StopAsync()
0x568: Pop(0)
0x569: Push(CVector(0.0, 0.0, 0.0))
0x56a: @ SetSpeed(Stack[-1])
0x56b: Pop(1)
0x56c: Return(); Pop(4)

0x56d: PushEmpty(bool, bool)
0x56e: Push("IsAttacking")
0x56f: Push((int) 1)
0x570: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x571: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x572: @@ IsAttacking(Stack[-1])
0x573: Pop(0)
0x574: Stack[-3] = Stack[-1]
0x575: Return(); Pop(2)

0x576: Stack[-3] = (bool) 0
0x577: Return(); Pop(2)

0x578: PushEmpty(float, int, float, int)
0x579: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x57a: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57b: Return(); Pop(4)

0x57c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x57d: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57e: Push((int) -1)
0x57f: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x580: Push((int) 0)
0x581: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: Return(); Pop(4)

0x584: @ rand(Stack[-2])
0x585: Pop(0)
0x586: PushEmpty(float)
0x587: Call 0x59e

0x588: Pop(0)
0x589: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x58b: @ irand(Stack[-1], Stack[-2])
0x58c: Pop(0)
0x58d: Push((int) 1)
0x58e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x58f: Push("attack")
0x590: Pop(1); Push(Stack[-1] + Stack[-2]);
0x591: @ Speak(Stack[-1])
0x592: Pop(1)
0x593: PushEmpty(int)
0x594: Call 0x59c

0x595: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x596: Pop(1)
0x597: Return(); Pop(4)

0x598: Stack[-1] = (int) 0
0x599: Return(); Pop(0)

0x59a: PushEmpty()
0x59b: Return(); Pop(0)

0x59c: Stack[-1] = (int) 1
0x59d: Return(); Pop(0)

0x59e: Stack[-1] = (float) 0.5
0x59f: Return(); Pop(0)

0x5a0: PushEmpty()
0x5a1: Call 0x623

0x5a2: Pop(0)
0x5a3: PushEmpty()
0x5a4: Call 0x816

0x5a5: Pop(0)
0x5a6: Return(); Pop(0)

0x5a7: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x5a8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x5aa: Stack[-7] = Stack[-17]
0x5ab: PushEmpty(bool, object)
0x5ac: Stack[-1] = Stack[-23]
0x5ad: Call 0x633

0x5ae: Pop(1)
0x5af: Pop(1); Push((bool) Stack[-1] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: Stack[-22] = (bool) 0
0x5b2: Return(); Pop(16)

0x5b3: @@ GetPosition(Stack[-5])
0x5b4: Pop(0)
0x5b5: @ GetPosition(Stack[-4])
0x5b6: Pop(0)
0x5b7: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5b8: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5b9: PushEmpty(bool)
0x5ba: Stack[-1] = (bool) 0
0x5bb: Push((int) 0)
0x5bc: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5be: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5bf: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: Stack[-1] = (bool) 1
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c3: @ Stop()
0x5c4: Pop(0)
0x5c5: Stack[-22] = (bool) 0
0x5c6: Return(); Pop(16)

0x5c7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5c8: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5ca: @@ GetPFPosition(Stack[-5])
0x5cb: Pop(0)
0x5cc: @ FindPathTo(Stack[-1], Stack[-5])
0x5cd: Pop(0)
0x5ce: Pop(0); Push(( Stack[-1] != 0 )
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-6] = Stack[-1]
0x5d1: Stack[-1] = 0
0x5d2: Pop(0); Push(( Stack[-6] != 0 )
0x5d3: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5d4: Push(Stack[-7])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d6: Stack[-7] = (bool) 0
0x5d7: @ RotatePath(Stack[-6], Stack[-8])
0x5d8: Pop(0)
0x5d9: Pop(0); Push((bool) Stack[-8] == 0)
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: GOTO 0x60b

0x5dc: Push((int) 0)
0x5dd: Push((float)0.3)
0x5de: @ SetTimer(Stack[-2], Stack[-1])
0x5df: Pop(2)
0x5e0: PushEmpty(string)
0x5e1: Call 0x63a

0x5e2: Pop(0)
0x5e3: PushEmpty(string)
0x5e4: Call 0x63c

0x5e5: Pop(0)
0x5e6: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5e7: Pop(2)
0x5e8: Pop(0); Push((bool) Stack[-8] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ea: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ec: Stack[-6] = 0
0x5ed: GOTO 0x60b

0x5ee: GOTO 0x5f0

0x5ef: GOTO 0x60a

0x5f0: GOTO 0x5f2

0x5f1: Stack[-6] = 0
0x5f2: GOTO 0x603

0x5f3: Push((int) 0)
0x5f4: @ KillTimer(Stack[-1])
0x5f5: Pop(1)
0x5f6: Push((float)0.5)
0x5f7: @ Sleep(Stack[-1], Stack[-9])
0x5f8: Pop(1)
0x5f9: Pop(0); Push((bool) Stack[-8] == 0)
0x5fa: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-6] = 0
0x5fe: GOTO 0x60b

0x5ff: Push((int) 0)
0x600: Push((float)0.3)
0x601: @ SetTimer(Stack[-2], Stack[-1])
0x602: Pop(2)
0x603: Stack[-1] = 0
0x604: GOTO 0x609

0x605: Push((int) 0)
0x606: @ KillTimer(Stack[-1])
0x607: Pop(1)
0x608: GOTO 0x60b

0x609: Stack[-6] = 0
0x60a: GOTO 0x5ab

0x60b: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x60c: Return(); Pop(16)

0x60d: PushEmpty()
0x60e: Push((int) 0)
0x60f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Return(); Pop(0)

0x612: PushEmpty(bool, object)
0x613: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x614: Call 0x633

0x615: Pop(1)
0x616: Pop(1); Push((bool) Stack[-1] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x619: Push((int) 0)
0x61a: @ KillTimer(Stack[-1])
0x61b: Pop(1)
0x61c: @ Stop()
0x61d: Pop(0)
0x61e: Return(); Pop(0)

0x61f: PushEmpty()
0x620: @ RequestClearPath(Stack[-1])
0x621: Pop(0)
0x622: Return(); Pop(0)

0x623: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x624: Push((int) 0)
0x625: @ KillTimer(Stack[-1])
0x626: Pop(1)
0x627: @ Stop()
0x628: Pop(0)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty()
0x62c: Call 0x623

0x62d: Pop(0)
0x62e: PushEmpty(object)
0x62f: Stack[-1] = Stack[-2]
0x630: Call 0x7b3

0x631: Pop(1)
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-3]
0x636: Call 0x718

0x637: Stack[-4] = Stack[-2]
0x638: Pop(2)
0x639: Return(); Pop(0)

0x63a: Stack[-1] = "walk"
0x63b: Return(); Pop(0)

0x63c: Stack[-1] = "run"
0x63d: Return(); Pop(0)

0x63e: PushEmpty()
0x63f: Push((int) 1)
0x640: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x642: Stack[-2] = "fire"
0x643: Return(); Pop(0)

0x644: Stack[-2] = "phys"
0x645: Return(); Pop(0)

0x646: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x647: @ GetPosition(Stack[-3])
0x648: Pop(0)
0x649: @@ GetPosition(Stack[-2])
0x64a: Pop(0)
0x64b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x64c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x64d: Return(); Pop(6)

0x64e: PushEmpty(bool, bool)
0x64f: Push("HasProperty")
0x650: Push((int) 2)
0x651: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x652: Pop(1); Push((bool) Stack[-1] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-5] = (bool) 0
0x655: Return(); Pop(2)

0x656: @@ HasProperty(Stack[-3], Stack[-1])
0x657: Pop(0)
0x658: Stack[-5] = Stack[-1]
0x659: Return(); Pop(2)

0x65a: PushEmpty(float, float)
0x65b: PushEmpty(bool, object, string)
0x65c: Stack[-2] = Stack[-10]
0x65d: Stack[-1] = Stack[-9]
0x65e: Call 0x64e

0x65f: Pop(2)
0x660: Pop(1); Push((bool) Stack[-1] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-8] = (bool) 0
0x663: Return(); Pop(2)

0x664: @@ GetProperty(Stack[-6], Stack[-1])
0x665: Pop(0)
0x666: PushEmpty(float, float, float, float)
0x667: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x668: Stack[-2] = Stack[-8]
0x669: Stack[-1] = Stack[-7]
0x66a: Call 0x78a

0x66b: Pop(3)
0x66c: @@ SetProperty(Stack[-7], Stack[-1])
0x66d: Pop(1)
0x66e: Stack[-8] = (bool) 1
0x66f: Return(); Pop(2)

0x670: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x671: PushEmpty(bool, object, string)
0x672: Stack[-2] = Stack[-18]
0x673: Stack[-1] = "health"
0x674: Call 0x64e

0x675: Pop(2)
0x676: Pop(1); Push((bool) Stack[-1] == 0)
0x677: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x678: Stack[-16] = (float) 0.0
0x679: Return(); Pop(12)

0x67a: PushEmpty(bool, object, string)
0x67b: Stack[-2] = Stack[-18]
0x67c: Stack[-1] = "armor"
0x67d: Call 0x64e

0x67e: Pop(2)
0x67f: Pop(1); Push((bool) Stack[-1] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-6] = (int) 0
0x682: GOTO 0x686

0x683: Push("armor")
0x684: @@ GetProperty(Stack[-1], Stack[-7])
0x685: Pop(1)
0x686: Push("armor_")
0x687: PushEmpty(string, int)
0x688: Stack[-1] = Stack[-16]
0x689: Call 0x63e

0x68a: Pop(1)
0x68b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x68c: PushEmpty(bool, object, string)
0x68d: Stack[-2] = Stack[-18]
0x68e: Stack[-1] = Stack[-8]
0x68f: Call 0x64e

0x690: Pop(2)
0x691: Pop(1); Push((bool) Stack[-1] == 0)
0x692: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x693: Stack[-4] = (int) 0
0x694: GOTO 0x697

0x695: @@ GetProperty(Stack[-5], Stack[-4])
0x696: Pop(0)
0x697: PushEmpty(float, float, float)
0x698: Pop(0); Push(Stack[-9] + Stack[-7]);
0x699: Push((float)100.0)
0x69a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x69b: Stack[-1] = (int) 1
0x69c: Call 0x783

0x69d: Stack[-6] = Stack[-3]
0x69e: Pop(3)
0x69f: Push("health")
0x6a0: @@ GetProperty(Stack[-1], Stack[-3])
0x6a1: Pop(1)
0x6a2: Push((int) 1)
0x6a3: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6a4: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6a5: Push("health")
0x6a6: PushEmpty(float, float, float, float)
0x6a7: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6a8: Stack[-2] = (int) 0
0x6a9: Stack[-1] = (int) 1
0x6aa: Call 0x78a

0x6ab: Pop(3)
0x6ac: @@ SetProperty(Stack[-2], Stack[-1])
0x6ad: Pop(2)
0x6ae: Stack[-16] = Stack[-1]
0x6af: Return(); Pop(12)

0x6b0: PushEmpty(int, float, float, int, float, float)
0x6b1: PushEmpty(bool, object, string)
0x6b2: Stack[-2] = Stack[-11]
0x6b3: Stack[-1] = "disease"
0x6b4: Call 0x64e

0x6b5: Pop(2)
0x6b6: Pop(1); Push((bool) Stack[-1] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-9] = (int) 0
0x6b9: Return(); Pop(6)

0x6ba: PushEmpty(bool, object, string)
0x6bb: Stack[-2] = Stack[-11]
0x6bc: Stack[-1] = "armor_disease"
0x6bd: Call 0x64e

0x6be: Pop(2)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c0: Push("armor_disease")
0x6c1: @@ GetProperty(Stack[-1], Stack[-4])
0x6c2: Pop(1)
0x6c3: Push((int) 100)
0x6c4: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c6: Push((int) 1)
0x6c7: Push((float)100.0)
0x6c8: Pop(1); Push(Stack[-5] / Stack[-1]);
0x6c9: Pop(2); Push(Stack[-2] - Stack[-1]);
0x6ca: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x6cb: GOTO 0x6ce

0x6cc: Stack[-9] = (int) 0
0x6cd: Return(); Pop(6)

0x6ce: PushEmpty(bool, object, string)
0x6cf: Stack[-2] = Stack[-11]
0x6d0: Stack[-1] = "immunity"
0x6d1: Call 0x64e

0x6d2: Pop(2)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6d4: Push("immunity")
0x6d5: @@ GetProperty(Stack[-1], Stack[-2])
0x6d6: Pop(1)
0x6d7: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6d9: Push("immunity")
0x6da: Push((int) 0)
0x6db: @@ SetProperty(Stack[-2], Stack[-1])
0x6dc: Pop(2)
0x6dd: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0x6de: GOTO 0x6e5

0x6df: Push("immunity")
0x6e0: Pop(0); Push(Stack[-2] - Stack[-8]);
0x6e1: @@ SetProperty(Stack[-2], Stack[-1])
0x6e2: Pop(2)
0x6e3: Stack[-9] = Stack[-7]
0x6e4: Return(); Pop(6)

0x6e5: PushEmpty(bool, object, string, float, float, float)
0x6e6: Stack[-5] = Stack[-14]
0x6e7: Stack[-4] = "disease"
0x6e8: Stack[-3] = Stack[-8]
0x6e9: Stack[-2] = (int) 0
0x6ea: Stack[-1] = (int) 1
0x6eb: Call 0x65a

0x6ec: Pop(6)
0x6ed: Stack[-9] = Stack[-7]
0x6ee: Return(); Pop(6)

0x6ef: PushEmpty(bool, bool)
0x6f0: @@ IsDead(Stack[-1])
0x6f1: Pop(0)
0x6f2: Stack[-4] = Stack[-1]
0x6f3: Return(); Pop(2)

0x6f4: PushEmpty(object, object, object, object)
0x6f5: Pop(0); Push((bool) Stack[-5] == 0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f7: Stack[-6] = (bool) 0
0x6f8: Return(); Pop(4)

0x6f9: PushEmpty(bool)
0x6fa: Stack[-1] = (bool) 0
0x6fb: Push("IsDead")
0x6fc: Push((int) 1)
0x6fd: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6fe: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6ff: PushEmpty(bool, object)
0x700: Stack[-1] = Stack[-8]
0x701: Call 0x6ef

0x702: Pop(1)
0x703: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x704: Stack[-1] = (bool) 1
0x705: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x706: Stack[-6] = (bool) 0
0x707: Return(); Pop(4)

0x708: @ GetScene(Stack[-2])
0x709: Pop(0)
0x70a: Pop(0); Push((bool) Stack[-2] == 0)
0x70b: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70c: Stack[-6] = (bool) 0
0x70d: Return(); Pop(4)

0x70e: @@ GetScene(Stack[-1])
0x70f: Pop(0)
0x710: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x712: Stack[-6] = (bool) 0
0x713: Return(); Pop(4)

0x714: Stack[-6] = (bool) 1
0x715: Return(); Pop(4)

0x716: Stack[-1] = 0
0x717: Stack[-2] = 0
0x718: PushEmpty(int, int)
0x719: PushEmpty(bool, object)
0x71a: Stack[-1] = Stack[-5]
0x71b: Call 0x6f4

0x71c: Pop(1)
0x71d: Pop(1); Push((bool) Stack[-1] == 0)
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-4] = (bool) 0
0x720: Return(); Pop(2)

0x721: PushEmpty(bool, object, string)
0x722: Stack[-2] = Stack[-6]
0x723: Stack[-1] = "noaccess"
0x724: Call 0x64e

0x725: Pop(2)
0x726: Pop(1); Push((bool) Stack[-1] == 0)
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-4] = (bool) 1
0x729: Return(); Pop(2)

0x72a: Push("noaccess")
0x72b: @@ GetProperty(Stack[-1], Stack[-2])
0x72c: Pop(1)
0x72d: Push((int) 0)
0x72e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x72f: Return(); Pop(2)

0x730: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x731: PushEmpty(bool)
0x732: Stack[-1] = (bool) 0
0x733: Push((int) 4)
0x734: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x736: Push((int) 5)
0x737: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: Stack[-1] = (bool) 1
0x73a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x73b: @ GetScene(Stack[-10])
0x73c: Pop(0)
0x73d: @ GetPosition(Stack[-8])
0x73e: Pop(0)
0x73f: @ GetEyesHeight(Stack[-7])
0x740: Pop(0)
0x741: Push(CvectorIndex(Stack[-8], 1))
0x742: Push((int) 2)
0x743: Pop(1); Push(Stack[-9] / Stack[-1]);
0x744: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x745: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x746: Push("scripted")
0x747: Push(CVector(0.0, 0.0, 1.0))
0x748: Push("blood.xml")
0x749: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Stack[-9] = 0
0x74c: Stack[-10] = 0
0x74d: Pop(0); Push((bool) Stack[-23] == 0)
0x74e: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74f: Return(); Pop(20)

0x750: @ GetSecondaryAnimationType(Stack[-6])
0x751: Pop(0)
0x752: Push((int) 0)
0x753: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x755: Return(); Pop(20)

0x756: @@ GetPosition(Stack[-5])
0x757: Pop(0)
0x758: @ GetPosition(Stack[-4])
0x759: Pop(0)
0x75a: @ GetDirection(Stack[-3])
0x75b: Pop(0)
0x75c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x75d: Push(CvectorIndex(Stack[-2], 0))
0x75e: Push(CvectorIndex(Stack[-4], 0))
0x75f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x760: Push(CvectorIndex(Stack[-3], 2))
0x761: Push(CvectorIndex(Stack[-5], 2))
0x762: Pop(2); Push(Stack[-2] * Stack[-1]);
0x763: Pop(2); Push(Stack[-2] + Stack[-1]);
0x764: Push((int) 0)
0x765: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x766: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x767: Stack[-1] = "fhit"
0x768: GOTO 0x76a

0x769: Stack[-1] = "bhit"
0x76a: Push("hit_react")
0x76b: Push("1")
0x76c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x76d: Push("2")
0x76e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x76f: Push((int) -10)
0x770: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(4)
0x772: Return(); Pop(20)

0x773: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x774: @@ GetPosition(Stack[-3])
0x775: Pop(0)
0x776: @ GetPosition(Stack[-2])
0x777: Pop(0)
0x778: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x779: Push(CvectorIndex(Stack[-1], 0))
0x77a: Push(CvectorIndex(Stack[-2], 2))
0x77b: @ RotateAsync(Stack[-2], Stack[-1])
0x77c: Pop(2)
0x77d: Return(); Pop(6)

0x77e: PushEmpty(bool, bool)
0x77f: @ IsLoaded(Stack[-1])
0x780: Pop(0)
0x781: Stack[-3] = Stack[-1]
0x782: Return(); Pop(2)

0x783: PushEmpty()
0x784: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x785: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x786: Stack[-3] = Stack[-2]
0x787: GOTO 0x789

0x788: Stack[-3] = Stack[-1]
0x789: Return(); Pop(0)

0x78a: PushEmpty()
0x78b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-4] = Stack[-2]
0x78e: Return(); Pop(0)

0x78f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-4] = Stack[-1]
0x792: Return(); Pop(0)

0x793: Stack[-4] = Stack[-3]
0x794: Return(); Pop(0)

0x795: PushEmpty(float, float)
0x796: @ GetGameTime(Stack[-1])
0x797: Pop(0)
0x798: Push((int) 1)
0x799: PushEmpty(int)
0x79a: Push((int) 24)
0x79b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x79c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x79d: Return(); Pop(2)

0x79e: PushEmpty()
0x79f: PushEmpty(object)
0x7a0: Stack[-1] = Stack[-2]
0x7a1: Push(-1, 0); TaskCall(0)
0x7a2: Call 0x0

0x7a3: Pop(-1, 0); TaskReturn
0x7a4: Pop(1)
0x7a5: Return(); Pop(0)

0x7a6: PushEmpty(float, float)
0x7a7: Push("health")
0x7a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7aa: Push("health")
0x7ab: @ GetProperty(Stack[-1], Stack[-2])
0x7ac: Pop(1)
0x7ad: Push((int) 0)
0x7ae: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b0: @ SignalDeath(Stack[-4])
0x7b1: Pop(0)
0x7b2: Return(); Pop(2)

0x7b3: PushEmpty()
0x7b4: PushEmpty(object)
0x7b5: Stack[-1] = Stack[-2]
0x7b6: Call 0x79e

0x7b7: Pop(1)
0x7b8: Return(); Pop(0)

0x7b9: PushEmpty()
0x7ba: PushEmpty(object, int, float)
0x7bb: Stack[-3] = Stack[-7]
0x7bc: Stack[-2] = Stack[-6]
0x7bd: Stack[-1] = Stack[-5]
0x7be: Call 0x730

0x7bf: Pop(3)
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty(string, string)
0x7c2: Stack[-1] = "idle"
0x7c3: Push(Stack[-3])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7c6: Stack[-4] = Stack[-1]
0x7c7: Return(); Pop(2)

0x7c8: PushEmpty(int, bool, int, bool)
0x7c9: Stack[-2] = (int) 0
0x7ca: Push("all")
0x7cb: PushEmpty(string, int)
0x7cc: Stack[-1] = Stack[-5]
0x7cd: Call 0x7c1

0x7ce: Pop(1)
0x7cf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7d0: Pop(2)
0x7d1: Pop(0); Push((bool) Stack[-1] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d3: GOTO 0x7d7

0x7d4: Push((int) 1)
0x7d5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7d6: GOTO 0x7ca

0x7d7: Stack[-5] = Stack[-2]
0x7d8: Return(); Pop(4)

0x7d9: PushEmpty()
0x7da: Stack[-2] = (int) 2
0x7db: Return(); Pop(0)

0x7dc: PushEmpty()
0x7dd: PushEmpty(object)
0x7de: Stack[-1] = Stack[-2]
0x7df: Push(-1, 0); TaskCall(3)
0x7e0: Call 0x285

0x7e1: Pop(-1, 0); TaskReturn
0x7e2: Pop(1)
0x7e3: Return(); Pop(0)

0x7e4: PushEmpty()
0x7e5: PushEmpty(bool, object)
0x7e6: Stack[-1] = Stack[-3]
0x7e7: Call 0x718

0x7e8: Pop(1)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-2] = (int) 2
0x7eb: GOTO 0x7ed

0x7ec: Stack[-2] = (int) 0
0x7ed: Return(); Pop(0)

0x7ee: PushEmpty()
0x7ef: PushEmpty(object)
0x7f0: Stack[-1] = Stack[-2]
0x7f1: Push(-1, 5); TaskCall(5)
0x7f2: Call 0x3a7

0x7f3: Pop(-1, 5); TaskReturn
0x7f4: Pop(1)
0x7f5: Return(); Pop(0)

0x7f6: PushEmpty()
0x7f7: PushEmpty(int, object)
0x7f8: Stack[-1] = Stack[-3]
0x7f9: Call 0x7e4

0x7fa: Stack[-4] = Stack[-2]
0x7fb: Pop(2)
0x7fc: Return(); Pop(0)

0x7fd: PushEmpty()
0x7fe: PushEmpty(object)
0x7ff: Stack[-1] = Stack[-2]
0x800: Call 0x7ee

0x801: Pop(1)
0x802: Return(); Pop(0)

0x803: PushEmpty()
0x804: Stack[-2] = (int) 0
0x805: Return(); Pop(0)

0x806: PushEmpty()
0x807: Return(); Pop(0)

0x808: PushEmpty()
0x809: Stack[-3] = (int) 0
0x80a: Return(); Pop(0)

0x80b: PushEmpty()
0x80c: Return(); Pop(0)

0x80d: PushEmpty()
0x80e: Stack[-2] = (int) 2
0x80f: Return(); Pop(0)

0x810: PushEmpty()
0x811: PushEmpty(object)
0x812: Stack[-1] = Stack[-2]
0x813: Call 0x8f1

0x814: Pop(1)
0x815: Return(); Pop(0)

0x816: Return(); Pop(0)

0x817: PushEmpty(int, int, int, bool, int, int, int, bool)
0x818: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x819: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81a: Push("GenerateMoney: iMin > iMax")
0x81b: @ Trace(Stack[-1])
0x81c: Pop(1)
0x81d: Return(); Pop(8)

0x81e: Stack[-4] = (int) 0
0x81f: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x820: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x821: Pop(0); Push(Stack[-9] - Stack[-10]);
0x822: @ irand(Stack[-4], Stack[-1])
0x823: Pop(1)
0x824: GOTO 0x829

0x825: Push((int) 0)
0x826: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x828: Return(); Pop(8)

0x829: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x82a: Push((int) 0)
0x82b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82d: Return(); Pop(8)

0x82e: Push("Money")
0x82f: @ GetInvItemByName(Stack[-3], Stack[-1])
0x830: Pop(1)
0x831: Push((int) 0)
0x832: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x833: Pop(1)
0x834: Return(); Pop(8)

0x835: PushEmpty(int, bool, int, bool)
0x836: Push(Stack[-5])
0x837: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x838: PushEmpty(int, int)
0x839: Stack[-2] = (int) 0
0x83a: Push((int) 100)
0x83b: PushEmpty(int)
0x83c: Call 0x795

0x83d: Pop(0)
0x83e: Push((int) 100)
0x83f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x840: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x841: Call 0x817

0x842: Pop(2)
0x843: Push((int) 9)
0x844: @ irand(Stack[-3], Stack[-1])
0x845: Pop(1)
0x846: Push((int) 0)
0x847: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x849: PushEmpty(int, string)
0x84a: Stack[-1] = "lemon"
0x84b: Call 0x8e4

0x84c: Pop(1)
0x84d: Push((int) 0)
0x84e: Push((int) 1)
0x84f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x850: Pop(3)
0x851: GOTO 0x88d

0x852: Push((int) 1)
0x853: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x855: PushEmpty(int, string)
0x856: Stack[-1] = "rusk"
0x857: Call 0x8e4

0x858: Pop(1)
0x859: Push((int) 0)
0x85a: Push((int) 1)
0x85b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x85c: Pop(3)
0x85d: GOTO 0x88d

0x85e: Push((int) 2)
0x85f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x861: PushEmpty(int, string)
0x862: Stack[-1] = "hook"
0x863: Call 0x8e4

0x864: Pop(1)
0x865: Push((int) 0)
0x866: Push((int) 1)
0x867: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x868: Pop(3)
0x869: GOTO 0x88d

0x86a: Push((int) 4)
0x86b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x86d: PushEmpty(int, string)
0x86e: Stack[-1] = "syringe"
0x86f: Call 0x8e4

0x870: Pop(1)
0x871: Push((int) 0)
0x872: Push((int) 1)
0x873: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x874: Pop(3)
0x875: GOTO 0x88d

0x876: Push((int) 5)
0x877: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x879: PushEmpty(int, string)
0x87a: Stack[-1] = "watch"
0x87b: Call 0x8e4

0x87c: Pop(1)
0x87d: Push((int) 0)
0x87e: Push((int) 1)
0x87f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: GOTO 0x88d

0x882: Push((int) 6)
0x883: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x885: PushEmpty(int, string)
0x886: Stack[-1] = "razor"
0x887: Call 0x8e4

0x888: Pop(1)
0x889: Push((int) 0)
0x88a: Push((int) 1)
0x88b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x88c: Pop(3)
0x88d: GOTO 0x8e3

0x88e: PushEmpty(int, int)
0x88f: Stack[-2] = (int) 0
0x890: Push((int) 50)
0x891: PushEmpty(int)
0x892: Call 0x795

0x893: Pop(0)
0x894: Push((int) 50)
0x895: Pop(2); Push(Stack[-2] * Stack[-1]);
0x896: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x897: Call 0x817

0x898: Pop(2)
0x899: Push((int) 8)
0x89a: @ irand(Stack[-3], Stack[-1])
0x89b: Pop(1)
0x89c: Push((int) 0)
0x89d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x89f: PushEmpty(int, string)
0x8a0: Stack[-1] = "beads"
0x8a1: Call 0x8e4

0x8a2: Pop(1)
0x8a3: Push((int) 0)
0x8a4: Push((int) 1)
0x8a5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8a6: Pop(3)
0x8a7: GOTO 0x8e3

0x8a8: Push((int) 1)
0x8a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8ab: PushEmpty(int, string)
0x8ac: Stack[-1] = "bracelet"
0x8ad: Call 0x8e4

0x8ae: Pop(1)
0x8af: Push((int) 0)
0x8b0: Push((int) 1)
0x8b1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8b2: Pop(3)
0x8b3: GOTO 0x8e3

0x8b4: Push((int) 2)
0x8b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8b7: PushEmpty(int, string)
0x8b8: Stack[-1] = "ear_ring"
0x8b9: Call 0x8e4

0x8ba: Pop(1)
0x8bb: Push((int) 0)
0x8bc: Push((int) 1)
0x8bd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: GOTO 0x8e3

0x8c0: Push((int) 3)
0x8c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c3: PushEmpty(int, string)
0x8c4: Stack[-1] = "gold_ring"
0x8c5: Call 0x8e4

0x8c6: Pop(1)
0x8c7: Push((int) 0)
0x8c8: Push((int) 1)
0x8c9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8ca: Pop(3)
0x8cb: GOTO 0x8e3

0x8cc: Push((int) 4)
0x8cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d8; Pop(1)

0x8cf: PushEmpty(int, string)
0x8d0: Stack[-1] = "silver_ring"
0x8d1: Call 0x8e4

0x8d2: Pop(1)
0x8d3: Push((int) 0)
0x8d4: Push((int) 1)
0x8d5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8d6: Pop(3)
0x8d7: GOTO 0x8e3

0x8d8: Push((int) 5)
0x8d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8db: PushEmpty(int, string)
0x8dc: Stack[-1] = "flower"
0x8dd: Call 0x8e4

0x8de: Pop(1)
0x8df: Push((int) 0)
0x8e0: Push((int) 1)
0x8e1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8e2: Pop(3)
0x8e3: Return(); Pop(4)

0x8e4: PushEmpty(int, int)
0x8e5: @ GetInvItemByName(Stack[-1], Stack[-3])
0x8e6: Pop(0)
0x8e7: Stack[-4] = Stack[-1]
0x8e8: Return(); Pop(2)

0x8e9: Push(GlobalVars[0])
0x8ea: Stack[-1] = (bool) 0
0x8eb: GlobalVars[0] = Stack[-1]; Pop(1)
0x8ec: PushEmpty(bool)
0x8ed: Stack[-1] = (bool) 1
0x8ee: Call 0x835

0x8ef: Pop(1)
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty(bool, bool)
0x8f2: Push(GlobalVars[0])
0x8f3: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f4: @ IsOverrideActive(Stack[-1])
0x8f5: Pop(0)
0x8f6: Pop(0); Push((bool) Stack[-1] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f8: @ WorkWithCorpse(Stack[-3])
0x8f9: Pop(0)
0x8fa: Return(); Pop(2)

0x8fb: Return(); Pop(2)

0x8fc: PushEmpty(bool, bool)
0x8fd: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8fe: Pop(0)
0x8ff: Stack[-4] = Stack[-1]
0x900: Return(); Pop(2)

0x901: PushEmpty()
0x902: Stack[-2] = (int) 0
0x903: Return(); Pop(0)

0x904: PushEmpty()
0x905: Return(); Pop(0)

0x906: PushEmpty(string, bool, string, bool)
0x907: PushEmpty(bool, object, string)
0x908: Stack[-2] = Stack[-8]
0x909: Stack[-1] = "class"
0x90a: Call 0x64e

0x90b: Pop(2)
0x90c: Pop(1); Push((bool) Stack[-1] == 0)
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-7] = (bool) 0
0x90f: Return(); Pop(4)

0x910: Push("class")
0x911: @@ GetProperty(Stack[-1], Stack[-3])
0x912: Pop(1)
0x913: Push("rat")
0x914: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x915: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x916: Stack[-7] = (bool) 0
0x917: Return(); Pop(4)

0x918: GOTO 0x91e

0x919: Push("dog")
0x91a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91c: Stack[-7] = (bool) 0
0x91d: Return(); Pop(4)

0x91e: @ CanSee(Stack[-1], Stack[-6])
0x91f: Pop(0)
0x920: PushEmpty(bool)
0x921: Stack[-1] = (bool) 1
0x922: Push(Stack[-2])
0x923: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x924: PushEmpty(float, object)
0x925: Stack[-1] = Stack[-9]
0x926: Call 0x646

0x927: Pop(1)
0x928: Push((float)250000.0)
0x929: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x92a: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x92b: Stack[-1] = (bool) 0
0x92c: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92d: Push((float)-0.3)
0x92e: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x92f: Pop(1)
0x930: Stack[-7] = (bool) 1
0x931: Return(); Pop(4)

0x932: Stack[-7] = (bool) 0
0x933: Return(); Pop(4)

0x934: PushEmpty()
0x935: Push(GlobalVars[0])
0x936: Stack[-1] = (bool) 1
0x937: GlobalVars[0] = Stack[-1]; Pop(1)
0x938: Push((int) 50)
0x939: Push((int) 40)
0x93a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x93b: Pop(2)
0x93c: Return(); Pop(0)

