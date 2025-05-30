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
	idle
	class
	guard

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	SensePlayerOnly (1 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	irand (2 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	Stop (0 args)
	GetPosition (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	IsPlayerActor (2 args)
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
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	RequestClearPath (1 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	StopAnimation (0 args)
	WorkWithCorpse (1 args)
	CanSee (2 args)
	SetRTEnvelope (2 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x1e Vars = (object)
		EVENT_17 Op = 0x32 Vars = (object)
		EVENT_30 Op = 0x46 Vars = (object, object)
		EVENT_40 Op = 0x60 Vars = (object)
		EVENT_42 Op = 0x74 Vars = (object, string)
		EVENT_6 Op = 0x8a Vars = ()
		EVENT_41 Op = 0x9b Vars = (object)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x10c Vars = (object)
		EVENT_6 Op = 0x11a Vars = ()
		EVENT_22 Op = 0x18b Vars = (object, int, float, float)
		EVENT_16 Op = 0x18d Vars = (object, string)
		EVENT_41 Op = 0x18f Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, int) Params = 1
	GTASK_4 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x38a Vars = ()
		EVENT_7 Op = 0x3f7 Vars = (int)
		EVENT_10 Op = 0x409 Vars = (object)
		EVENT_41 Op = 0x414 Vars = (object)

Events:
EVENT_16 Op = 0x536 Vars = (object, string)
EVENT_41 Op = 0x543 Vars = (object)
EVENT_22 Op = 0x549 Vars = (object, int, float, float)

0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7: Push((bool) 1)
0x8: @ SensePlayerOnly(Stack[-1])
0x9: Pop(1)
0xa: PushEmpty()
0xb: Call 0x5b8

0xc: Pop(0)
0xd: PushEmpty()
0xe: Call 0x15

0xf: Pop(0)
0x10: PushEmpty()
0x11: Call 0xaa

0x12: Pop(0)
0x13: GOTO 0x10

0x14: Return(); Pop(0)

0x15: PushEmpty(bool)
0x16: Call 0x513

0x17: Pop(0)
0x18: Pop(1); Push((bool) Stack[-1] == 0)
0x19: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1a: PushEmpty()
0x1b: Call 0x59f

0x1c: Pop(0)
0x1d: Return(); Pop(0)

0x1e: PushEmpty(int, int)
0x1f: PushEmpty(int, object)
0x20: Stack[-1] = Stack[-5]
0x21: Call 0x5a5

0x22: Stack[-3] = Stack[-2]
0x23: Pop(2)
0x24: Push((int) 0)
0x25: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x27: Push((int) 1)
0x28: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: PushEmpty()
0x2b: Call 0x91

0x2c: Pop(0)
0x2d: PushEmpty(object)
0x2e: Stack[-1] = Stack[-4]
0x2f: Call 0x5a8

0x30: Pop(1)
0x31: Return(); Pop(2)

0x32: PushEmpty(int, int)
0x33: PushEmpty(int, object)
0x34: Stack[-1] = Stack[-5]
0x35: Call 0x580

0x36: Stack[-3] = Stack[-2]
0x37: Pop(2)
0x38: Push((int) 0)
0x39: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3b: Push((int) 1)
0x3c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: PushEmpty()
0x3f: Call 0x91

0x40: Pop(0)
0x41: PushEmpty(object)
0x42: Stack[-1] = Stack[-4]
0x43: Call 0x58a

0x44: Pop(1)
0x45: Return(); Pop(2)

0x46: PushEmpty(int, int)
0x47: PushEmpty(bool, object, object)
0x48: Stack[-2] = Stack[-7]
0x49: Stack[-1] = Stack[-6]
0x4a: Call 0x5c3

0x4b: Pop(2)
0x4c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x4d: PushEmpty(int, object)
0x4e: Stack[-1] = Stack[-6]
0x4f: Call 0x592

0x50: Stack[-3] = Stack[-2]
0x51: Pop(2)
0x52: Push((int) 0)
0x53: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x55: Push((int) 1)
0x56: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: PushEmpty()
0x59: Call 0x91

0x5a: Pop(0)
0x5b: PushEmpty(object)
0x5c: Stack[-1] = Stack[-5]
0x5d: Call 0x599

0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: PushEmpty(int, int)
0x61: PushEmpty(int, object)
0x62: Stack[-1] = Stack[-5]
0x63: Call 0x5ae

0x64: Stack[-3] = Stack[-2]
0x65: Pop(2)
0x66: Push((int) 0)
0x67: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x69: Push((int) 1)
0x6a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: PushEmpty()
0x6d: Call 0x91

0x6e: Pop(0)
0x6f: PushEmpty(object)
0x70: Stack[-1] = Stack[-4]
0x71: Call 0x5b1

0x72: Pop(1)
0x73: Return(); Pop(2)

0x74: PushEmpty(int, int)
0x75: PushEmpty(int, string, object)
0x76: Stack[-2] = Stack[-6]
0x77: Stack[-1] = Stack[-7]
0x78: Call 0x5b3

0x79: Stack[-4] = Stack[-3]
0x7a: Pop(3)
0x7b: Push((int) 0)
0x7c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: Push((int) 1)
0x7f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x81: PushEmpty()
0x82: Call 0x91

0x83: Pop(0)
0x84: PushEmpty(string, object)
0x85: Stack[-2] = Stack[-5]
0x86: Stack[-1] = Stack[-6]
0x87: Call 0x5b6

0x88: Pop(2)
0x89: Return(); Pop(2)

0x8a: PushEmpty()
0x8b: Call 0x91

0x8c: Pop(0)
0x8d: PushEmpty()
0x8e: Call 0x59f

0x8f: Pop(0)
0x90: Return(); Pop(0)

0x91: Push( Stack[2 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x93: PushEmpty()
0x94: Call 0x569

0x95: Pop(0)
0x96: GOTO 0x9a

0x97: PushEmpty()
0x98: Call 0xf8

0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: PushEmpty()
0x9c: PushEmpty()
0x9d: Call 0x91

0x9e: Pop(0)
0x9f: PushEmpty(object)
0xa0: Stack[-1] = Stack[-2]
0xa1: Call 0x543

0xa2: Pop(1)
0xa3: Return(); Pop(0)

0xa4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa5: PushEmpty()
0xa6: Call 0x56c

0xa7: Pop(0)
0xa8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa9: Return(); Pop(0)

0xaa: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0xab: @ GetPFPosition(Stack[-1])
0xac: Pop(0)
0xad: @ GetDirection(Stack[-0])
0xae: Pop(0)
0xaf: Push((int) 60)
0xb0: @ irand(Stack[-5], Stack[-1])
0xb1: Pop(1)
0xb2: Push((int) 30)
0xb3: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb4: @ Sleep(Stack[-1], Stack[-4])
0xb5: Pop(1)
0xb6: Push(Stack[-3])
0xb7: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb8: PushEmpty()
0xb9: Call 0xa4

0xba: Pop(0)
0xbb: GOTO 0xf6

0xbc: @ GetPFPosition(Stack[-2])
0xbd: Pop(0)
0xbe: PushEmpty(float, cvector, cvector)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[-5]
0xc1: Call 0x518

0xc2: Pop(2)
0xc3: Push((int) 40000)
0xc4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xc6: @ FindPathTo(Stack[-1], Stack[-1])
0xc7: Pop(0)
0xc8: Pop(0); Push(( Stack[-1] != 0 )
0xc9: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xca: @ RotatePath(Stack[-1], Stack[-3])
0xcb: Pop(0)
0xcc: Pop(0); Push((bool) Stack[-3] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: GOTO 0xf5

0xcf: Push((bool) 0)
0xd0: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0xd1: Pop(1)
0xd2: Pop(0); Push((bool) Stack[-3] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: GOTO 0xf5

0xd5: Push(CvectorIndex(Stack[-0], 0))
0xd6: Push(CvectorIndex(Stack[-0], 2))
0xd7: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0xd8: Pop(2)
0xd9: Pop(0); Push((bool) Stack[-3] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: GOTO 0xf5

0xdc: @ WaitForAnimEnd(Stack[-3])
0xdd: Pop(0)
0xde: Pop(0); Push((bool) Stack[-3] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: GOTO 0xf5

0xe1: GOTO 0xf6

0xe2: GOTO 0xe6

0xe3: Push((int) 1)
0xe4: @ Sleep(Stack[-1])
0xe5: Pop(1)
0xe6: Stack[-1] = 0
0xe7: GOTO 0xf5

0xe8: Push(CvectorIndex(Stack[-0], 0))
0xe9: Push(CvectorIndex(Stack[-0], 2))
0xea: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0xeb: Pop(2)
0xec: Pop(0); Push((bool) Stack[-3] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: GOTO 0xf5

0xef: @ WaitForAnimEnd(Stack[-3])
0xf0: Pop(0)
0xf1: Pop(0); Push((bool) Stack[-3] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: GOTO 0xf5

0xf4: GOTO 0xf6

0xf5: GOTO 0xbc

0xf6: GOTO 0xaf

0xf7: Return(); Pop(8)

0xf8: @ StopGroup0()
0xf9: Pop(0)
0xfa: @ Stop()
0xfb: Pop(0)
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: EventDisable(0)
0xff: PushEmpty(object)
0x100: Stack[-1] = Stack[-2]
0x101: Call 0x11e

0x102: Pop(1)
0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-2]
0x105: Call 0x5e8

0x106: Pop(1)
0x107: EventEnable(0)
0x108: @ Hold()
0x109: Pop(0)
0x10a: GOTO 0x108

0x10b: Return(); Pop(0)

0x10c: PushEmpty(int, int)
0x10d: PushEmpty(int, object)
0x10e: Stack[-1] = Stack[-5]
0x10f: Call 0x5a5

0x110: Stack[-3] = Stack[-2]
0x111: Pop(2)
0x112: Push((int) 0)
0x113: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x115: PushEmpty(object)
0x116: Stack[-1] = Stack[-4]
0x117: Call 0x5a8

0x118: Pop(1)
0x119: Return(); Pop(2)

0x11a: PushEmpty()
0x11b: Call 0x59f

0x11c: Pop(0)
0x11d: Return(); Pop(0)

0x11e: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x11f: Pop(0); Push((bool) Stack[-21] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "fdie"
0x123: Call 0x175

0x124: Pop(1)
0x125: GOTO 0x174

0x126: @@ GetPosition(Stack[-10])
0x127: Pop(0)
0x128: @ GetPosition(Stack[-9])
0x129: Pop(0)
0x12a: @ GetDirection(Stack[-8])
0x12b: Pop(0)
0x12c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x12d: Push(CvectorIndex(Stack[-7], 0))
0x12e: Push(CvectorIndex(Stack[-9], 0))
0x12f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x130: Push(CvectorIndex(Stack[-8], 2))
0x131: Push(CvectorIndex(Stack[-10], 2))
0x132: Pop(2); Push(Stack[-2] * Stack[-1]);
0x133: Pop(2); Push(Stack[-2] + Stack[-1]);
0x134: Push((int) 0)
0x135: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x137: Stack[-6] = "fdie"
0x138: GOTO 0x13a

0x139: Stack[-6] = "bdie"
0x13a: @ RemoveRTEnvelope()
0x13b: Pop(0)
0x13c: @ SetDeathState()
0x13d: Pop(0)
0x13e: @ Stop()
0x13f: Pop(0)
0x140: @ StopAsync()
0x141: Pop(0)
0x142: Stack[-5] = Stack[-21]
0x143: Push("GetScriptProperty")
0x144: Push((int) 2)
0x145: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x146: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x147: Push("Owner")
0x148: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x149: Pop(1)
0x14a: Push(Stack[-4])
0x14b: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14c: Push("Owner")
0x14d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x14e: Pop(1)
0x14f: Pop(0); Push((bool) Stack[-5] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Stack[-5] = Stack[-21]
0x152: Push("@GetEyesHeight")
0x153: Push((int) 1)
0x154: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x155: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x156: @@ GetEyesHeight(Stack[-2])
0x157: Pop(0)
0x158: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x159: Push(CvectorIndex(Stack[-1], 1))
0x15a: Stack[-1] = Stack[-3]
0x15b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x15c: Push("head")
0x15d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x15e: Pop(1)
0x15f: Stack[-3] = (bool) 1
0x160: GOTO 0x162

0x161: Stack[-3] = (bool) 0
0x162: Push("all")
0x163: @ PlayAnimation(Stack[-1], Stack[-7])
0x164: Pop(1)
0x165: @ WaitForAnimEnd()
0x166: Pop(0)
0x167: Push(Stack[-3])
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: @ StopAsync()
0x16a: Pop(0)
0x16b: Push("head")
0x16c: @ UnlookAsync(Stack[-1])
0x16d: Pop(1)
0x16e: Push("all")
0x16f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x170: Pop(1)
0x171: @ RemoveEnvelope()
0x172: Pop(0)
0x173: Stack[-5] = 0
0x174: Return(); Pop(20)

0x175: PushEmpty()
0x176: @ RemoveRTEnvelope()
0x177: Pop(0)
0x178: @ SetDeathState()
0x179: Pop(0)
0x17a: @ Stop()
0x17b: Pop(0)
0x17c: @ StopAsync()
0x17d: Pop(0)
0x17e: @ StopSecondaryAnimation()
0x17f: Pop(0)
0x180: Push("all")
0x181: @ PlayAnimation(Stack[-1], Stack[-2])
0x182: Pop(1)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push("all")
0x186: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x187: Pop(1)
0x188: @ RemoveEnvelope()
0x189: Pop(0)
0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: Return(); Pop(0)

0x18d: PushEmpty()
0x18e: Return(); Pop(0)

0x18f: PushEmpty()
0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: PushEmpty(object, bool, float)
0x193: Stack[-3] = Stack[-4]
0x194: Stack[-2] = (bool) 1
0x195: Stack[-1] = (float) 180.0
0x196: Call 0x19f

0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Stack[-3] = (float) 0.05
0x19b: Return(); Pop(0)

0x19c: PushEmpty()
0x19d: Stack[-3] = (int) 0
0x19e: Return(); Pop(0)

0x19f: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x1a0: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1a1: Push("all")
0x1a2: Push("attack_begin")
0x1a3: Push((int) 1)
0x1a4: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a6: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: Pop(0); Push((bool) Stack[-10] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: GOTO 0x1ae

0x1ab: Push((int) 1)
0x1ac: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1ad: GOTO 0x1a1

0x1ae: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1af: Push("attack")
0x1b0: Push((int) 1)
0x1b1: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1b2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b3: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x1b4: Pop(1)
0x1b5: Pop(0); Push((bool) Stack[-9] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: GOTO 0x1bb

0x1b8: Push((int) 1)
0x1b9: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1ba: GOTO 0x1af

0x1bb: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x1bc: Push("@GetAttackDistance")
0x1bd: Push((int) 1)
0x1be: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: @@ GetAttackDistance(Stack[-8])
0x1c1: Pop(0)
0x1c2: Push((int) 50)
0x1c3: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x1c4: GOTO 0x1c6

0x1c5: Stack[-8] = Stack[-21]
0x1c6: Push((int) 150)
0x1c7: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-8] = (int) 150
0x1ca: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1cb: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x1cc: @ IsPlayerActor(Stack[-0], Stack[-5])
0x1cd: Pop(0)
0x1ce: Push(Stack[-22])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-4] = (bool) 0
0x1d1: GOTO 0x1d3

0x1d2: Stack[-4] = (bool) 1
0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 0
0x1d5: PushEmpty(bool, object)
0x1d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d7: Call 0x4ad

0x1d8: Pop(1)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1da: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x1de: @@ GetPFPosition(Stack[-7])
0x1df: Pop(0)
0x1e0: @ GetPFPosition(Stack[-6])
0x1e1: Pop(0)
0x1e2: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x1e3: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1e4: Push((float)400.0)
0x1e5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1e6: Push((float)400.0)
0x1e7: Pop(1); Push(Stack[-1] + Stack[-10]);
0x1e8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e9: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(bool, object, float, float, bool, bool)
0x1ec: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Stack[-4] = Stack[-14]
0x1ee: Stack[-3] = (float) 3000.0
0x1ef: Stack[-2] = (bool) 1
0x1f0: Stack[-1] = (bool) 0
0x1f1: Push(-6, 2); TaskCall(4)
0x1f2: Call 0x391

0x1f3: Pop(-6, 2); TaskReturn
0x1f4: Pop(5)
0x1f5: Pop(1); Push((bool) Stack[-1] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: GOTO 0x25b

0x1f8: Stack[-4] = (bool) 0
0x1f9: GOTO 0x25a

0x1fa: Pop(0); Push(Stack[-21] * Stack[-21]);
0x1fb: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x1fd: Pop(0); Push((bool) Stack[-4] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1ff: PushEmpty(object)
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call 0x508

0x202: Pop(1)
0x203: Push("all")
0x204: Push("attack_on")
0x205: @ PlayAnimation(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: @ WaitForAnimEnd()
0x208: Pop(0)
0x209: @ StopAsync()
0x20a: Pop(0)
0x20b: Stack[-4] = (bool) 1
0x20c: @ rand(Stack[-1])
0x20d: Pop(0)
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 1
0x210: Push((float)0.6)
0x211: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(bool)
0x214: Call 0x357

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (bool) 0
0x218: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x219: @ Face(Stack[-0])
0x21a: Pop(0)
0x21b: Push("all")
0x21c: Push("attack_stay")
0x21d: @ PlayAnimation(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: PushEmpty(bool, float)
0x220: Stack[-1] = Stack[-23]
0x221: Call 0x2fb

0x222: Pop(2)
0x223: @ StopAsync()
0x224: Pop(0)
0x225: GOTO 0x251

0x226: @ Face(Stack[-0])
0x227: Pop(0)
0x228: Push("all")
0x229: Push("fjump")
0x22a: @ PlayAnimation(Stack[-2], Stack[-1])
0x22b: Pop(2)
0x22c: @ WaitForAnimEnd()
0x22d: Pop(0)
0x22e: Push(CVector(0.0, 0.0, 0.0))
0x22f: @ SetSpeed(Stack[-1])
0x230: Pop(1)
0x231: @ Stop()
0x232: Pop(0)
0x233: @ StopAsync()
0x234: Pop(0)
0x235: PushEmpty(bool)
0x236: Call 0x357

0x237: Pop(0)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23c: Call 0x4ad

0x23d: Pop(1)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x25b

0x241: @@ GetPFPosition(Stack[-7])
0x242: Pop(0)
0x243: @ GetPFPosition(Stack[-6])
0x244: Pop(0)
0x245: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x246: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x247: Pop(0); Push(Stack[-21] * Stack[-21]);
0x248: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24a: PushEmpty(bool, float)
0x24b: Stack[-1] = Stack[-23]
0x24c: Call 0x293

0x24d: Pop(1)
0x24e: Pop(1); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x25b

0x251: GOTO 0x25a

0x252: PushEmpty(bool, float)
0x253: Stack[-1] = Stack[-23]
0x254: Call 0x293

0x255: Pop(1)
0x256: Pop(1); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: GOTO 0x25b

0x259: Stack[-4] = (bool) 1
0x25a: GOTO 0x1d3

0x25b: @ WaitForAnimEnd()
0x25c: Pop(0)
0x25d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Return(); Pop(20)

0x260: Push("all")
0x261: Push("attack_off")
0x262: @ PlayAnimation(Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: @ WaitForAnimEnd()
0x265: Pop(0)
0x266: Push(Stack[-5])
0x267: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x268: Push((float)2.0)
0x269: @ Sleep(Stack[-1])
0x26a: Pop(1)
0x26b: Return(); Pop(20)

0x26c: PushEmpty(object, float, float, object, float, float)
0x26d: Push((float)0.9)
0x26e: Pop(1); Push(Stack[-9] * Stack[-1]);
0x26f: @ GetVictim(Stack[-1], Stack[-4])
0x270: Pop(1)
0x271: @ ReportAttack(Stack[-0])
0x272: Pop(0)
0x273: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x274: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x275: PushEmpty(float, object, int)
0x276: Stack[-2] = Stack[-6]
0x277: Stack[-1] = Stack[-10]
0x278: Call 0x199

0x279: Stack[-5] = Stack[-3]
0x27a: Pop(3)
0x27b: PushEmpty(float, object, float, int)
0x27c: Stack[-3] = Stack[-7]
0x27d: Stack[-2] = Stack[-6]
0x27e: PushEmpty(int, object, int)
0x27f: Stack[-2] = Stack[-10]
0x280: Stack[-1] = Stack[-14]
0x281: Call 0x19c

0x282: Stack[-4] = Stack[-3]
0x283: Pop(3)
0x284: Call 0x444

0x285: Stack[-5] = Stack[-4]
0x286: Pop(4)
0x287: PushEmpty(int)
0x288: Call 0x382

0x289: Pop(0)
0x28a: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x28b: Pop(1)
0x28c: PushEmpty(object, float)
0x28d: Stack[-2] = Stack[-5]
0x28e: Stack[-1] = Stack[-3]
0x28f: Call 0x384

0x290: Pop(2)
0x291: Return(); Pop(6)

0x292: Stack[-3] = 0
0x293: PushEmpty(int, bool, int, bool)
0x294: @ irand(Stack[-2], Stack[-1])
0x295: Pop(0)
0x296: Push((int) 1)
0x297: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x298: @ Face(Stack[-0])
0x299: Pop(0)
0x29a: Push((bool) 1)
0x29b: @ SetAttackState(Stack[-1])
0x29c: Pop(1)
0x29d: Push("all")
0x29e: Push("attack_begin")
0x29f: Pop(1); Push(Stack[-1] + Stack[-4]);
0x2a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: @ WaitForAnimEnd()
0x2a3: Pop(0)
0x2a4: PushEmpty()
0x2a5: Call 0x362

0x2a6: Pop(0)
0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call 0x4ad

0x2aa: Pop(1)
0x2ab: Pop(1); Push((bool) Stack[-1] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ad: @ StopAsync()
0x2ae: Pop(0)
0x2af: Stack[-6] = (bool) 0
0x2b0: Return(); Pop(4)

0x2b1: PushEmpty(float, int)
0x2b2: Stack[-2] = Stack[-7]
0x2b3: Stack[-1] = Stack[-4]
0x2b4: Call 0x26c

0x2b5: Pop(2)
0x2b6: Push("all")
0x2b7: Push("attack_middle")
0x2b8: Pop(1); Push(Stack[-1] + Stack[-4]);
0x2b9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(2)
0x2bb: Push(Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2bd: Push("all")
0x2be: Push("attack_middle")
0x2bf: Pop(1); Push(Stack[-1] + Stack[-4]);
0x2c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: @ WaitForAnimEnd()
0x2c3: Pop(0)
0x2c4: PushEmpty(bool, object)
0x2c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c6: Call 0x4ad

0x2c7: Pop(1)
0x2c8: Pop(1); Push((bool) Stack[-1] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2ca: @ StopAsync()
0x2cb: Pop(0)
0x2cc: Stack[-6] = (bool) 0
0x2cd: Return(); Pop(4)

0x2ce: PushEmpty(float, int)
0x2cf: Stack[-2] = Stack[-7]
0x2d0: Stack[-1] = Stack[-4]
0x2d1: Call 0x26c

0x2d2: Pop(2)
0x2d3: Push((bool) 0)
0x2d4: @ SetAttackState(Stack[-1])
0x2d5: Pop(1)
0x2d6: Push("all")
0x2d7: Push("attack_end")
0x2d8: Pop(1); Push(Stack[-1] + Stack[-4]);
0x2d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: PushEmpty(bool, float)
0x2dc: Stack[-1] = (float) 0.75
0x2dd: Call 0x2e3

0x2de: Pop(2)
0x2df: @ StopAsync()
0x2e0: Pop(0)
0x2e1: Stack[-6] = (bool) 1
0x2e2: Return(); Pop(4)

0x2e3: PushEmpty(float, bool, float, bool)
0x2e4: @ rand(Stack[-2])
0x2e5: Pop(0)
0x2e6: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2e8: @ IsAnimationPlaying(Stack[-1])
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2f6

0x2ed: PushEmpty(bool)
0x2ee: Call 0x323

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-6] = (bool) 1
0x2f2: Return(); Pop(4)

0x2f3: @ sync()
0x2f4: Pop(0)
0x2f5: GOTO 0x2e8

0x2f6: GOTO 0x2f9

0x2f7: @ WaitForAnimEnd()
0x2f8: Pop(0)
0x2f9: Stack[-6] = (bool) 0
0x2fa: Return(); Pop(4)

0x2fb: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2fc: @ IsAnimationPlaying(Stack[-5])
0x2fd: Pop(0)
0x2fe: Pop(0); Push((bool) Stack[-5] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: GOTO 0x321

0x301: PushEmpty(bool)
0x302: Call 0x323

0x303: Pop(0)
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-12] = (bool) 1
0x306: Return(); Pop(10)

0x307: PushEmpty(bool, object)
0x308: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x309: Call 0x4ad

0x30a: Pop(1)
0x30b: Pop(1); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-12] = (bool) 0
0x30e: Return(); Pop(10)

0x30f: @@ GetPFPosition(Stack[-4])
0x310: Pop(0)
0x311: @ GetPFPosition(Stack[-3])
0x312: Pop(0)
0x313: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x314: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x315: Pop(0); Push(Stack[-11] * Stack[-11]);
0x316: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x318: PushEmpty(bool, float)
0x319: Stack[-1] = Stack[-13]
0x31a: Call 0x293

0x31b: Pop(2)
0x31c: Stack[-12] = (bool) 1
0x31d: Return(); Pop(10)

0x31e: @ sync()
0x31f: Pop(0)
0x320: GOTO 0x2fc

0x321: Stack[-12] = (bool) 0
0x322: Return(); Pop(10)

0x323: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x324: PushEmpty(bool, object)
0x325: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x326: Call 0x4ad

0x327: Pop(1)
0x328: Pop(1); Push((bool) Stack[-1] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32a: Stack[-11] = (bool) 0
0x32b: Return(); Pop(10)

0x32c: PushEmpty(bool)
0x32d: Call 0x357

0x32e: Pop(0)
0x32f: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x330: @@ GetPFPosition(Stack[-5])
0x331: Pop(0)
0x332: @ GetPFPosition(Stack[-4])
0x333: Pop(0)
0x334: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x335: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x336: @@ GetAttackDistance(Stack[-1])
0x337: Pop(0)
0x338: Push((int) 50)
0x339: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x33a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x33b: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33d: PushEmpty()
0x33e: Call 0x344

0x33f: Pop(0)
0x340: Stack[-11] = (bool) 1
0x341: Return(); Pop(10)

0x342: Stack[-11] = (bool) 0
0x343: Return(); Pop(10)

0x344: PushEmpty(cvector, cvector, cvector, cvector)
0x345: @ Face(Stack[-0])
0x346: Pop(0)
0x347: Push("all")
0x348: Push("bjump")
0x349: @ PlayAnimation(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: @@ GetPFPosition(Stack[-2])
0x34c: Pop(0)
0x34d: @ GetPFPosition(Stack[-1])
0x34e: Pop(0)
0x34f: @ WaitForAnimEnd()
0x350: Pop(0)
0x351: @ StopAsync()
0x352: Pop(0)
0x353: Push(CVector(0.0, 0.0, 0.0))
0x354: @ SetSpeed(Stack[-1])
0x355: Pop(1)
0x356: Return(); Pop(4)

0x357: PushEmpty(bool, bool)
0x358: Push("IsAttacking")
0x359: Push((int) 1)
0x35a: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x35b: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35c: @@ IsAttacking(Stack[-1])
0x35d: Pop(0)
0x35e: Stack[-3] = Stack[-1]
0x35f: Return(); Pop(2)

0x360: Stack[-3] = (bool) 0
0x361: Return(); Pop(2)

0x362: PushEmpty(float, int, float, int)
0x363: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: Return(); Pop(4)

0x366: Push( Stack[4 + Tasks[-1].StackPointer] )
0x367: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x368: Push((int) -1)
0x369: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x36a: Push((int) 0)
0x36b: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: Return(); Pop(4)

0x36e: @ rand(Stack[-2])
0x36f: Pop(0)
0x370: PushEmpty(float)
0x371: Call 0x388

0x372: Pop(0)
0x373: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x375: @ irand(Stack[-1], Stack[-2])
0x376: Pop(0)
0x377: Push((int) 1)
0x378: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x379: Push("attack")
0x37a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x37b: @ Speak(Stack[-1])
0x37c: Pop(1)
0x37d: PushEmpty(int)
0x37e: Call 0x386

0x37f: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x380: Pop(1)
0x381: Return(); Pop(4)

0x382: Stack[-1] = (int) 0
0x383: Return(); Pop(0)

0x384: PushEmpty()
0x385: Return(); Pop(0)

0x386: Stack[-1] = (int) 1
0x387: Return(); Pop(0)

0x388: Stack[-1] = (float) 0.5
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: Call 0x40d

0x38c: Pop(0)
0x38d: PushEmpty()
0x38e: Call 0x59f

0x38f: Pop(0)
0x390: Return(); Pop(0)

0x391: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x392: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x393: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x394: Stack[-7] = Stack[-17]
0x395: PushEmpty(bool, object)
0x396: Stack[-1] = Stack[-23]
0x397: Call 0x41d

0x398: Pop(1)
0x399: Pop(1); Push((bool) Stack[-1] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-22] = (bool) 0
0x39c: Return(); Pop(16)

0x39d: @@ GetPosition(Stack[-5])
0x39e: Pop(0)
0x39f: @ GetPosition(Stack[-4])
0x3a0: Pop(0)
0x3a1: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3a2: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3a3: PushEmpty(bool)
0x3a4: Stack[-1] = (bool) 0
0x3a5: Push((int) 0)
0x3a6: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3a9: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Stack[-1] = (bool) 1
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ad: @ Stop()
0x3ae: Pop(0)
0x3af: Stack[-22] = (bool) 0
0x3b0: Return(); Pop(16)

0x3b1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3b2: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3b4: @@ GetPFPosition(Stack[-5])
0x3b5: Pop(0)
0x3b6: @ FindPathTo(Stack[-1], Stack[-5])
0x3b7: Pop(0)
0x3b8: Pop(0); Push(( Stack[-1] != 0 )
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-6] = Stack[-1]
0x3bb: Stack[-1] = 0
0x3bc: Pop(0); Push(( Stack[-6] != 0 )
0x3bd: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3be: Push(Stack[-7])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c0: Stack[-7] = (bool) 0
0x3c1: @ RotatePath(Stack[-6], Stack[-8])
0x3c2: Pop(0)
0x3c3: Pop(0); Push((bool) Stack[-8] == 0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: GOTO 0x3f5

0x3c6: Push((int) 0)
0x3c7: Push((float)0.3)
0x3c8: @ SetTimer(Stack[-2], Stack[-1])
0x3c9: Pop(2)
0x3ca: PushEmpty(string)
0x3cb: Call 0x424

0x3cc: Pop(0)
0x3cd: PushEmpty(string)
0x3ce: Call 0x426

0x3cf: Pop(0)
0x3d0: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: Pop(0); Push((bool) Stack[-8] == 0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d4: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d6: Stack[-6] = 0
0x3d7: GOTO 0x3f5

0x3d8: GOTO 0x3da

0x3d9: GOTO 0x3f4

0x3da: GOTO 0x3dc

0x3db: Stack[-6] = 0
0x3dc: GOTO 0x3ed

0x3dd: Push((int) 0)
0x3de: @ KillTimer(Stack[-1])
0x3df: Pop(1)
0x3e0: Push((float)0.5)
0x3e1: @ Sleep(Stack[-1], Stack[-9])
0x3e2: Pop(1)
0x3e3: Pop(0); Push((bool) Stack[-8] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-6] = 0
0x3e8: GOTO 0x3f5

0x3e9: Push((int) 0)
0x3ea: Push((float)0.3)
0x3eb: @ SetTimer(Stack[-2], Stack[-1])
0x3ec: Pop(2)
0x3ed: Stack[-1] = 0
0x3ee: GOTO 0x3f3

0x3ef: Push((int) 0)
0x3f0: @ KillTimer(Stack[-1])
0x3f1: Pop(1)
0x3f2: GOTO 0x3f5

0x3f3: Stack[-6] = 0
0x3f4: GOTO 0x395

0x3f5: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x3f6: Return(); Pop(16)

0x3f7: PushEmpty()
0x3f8: Push((int) 0)
0x3f9: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: Return(); Pop(0)

0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fe: Call 0x41d

0x3ff: Pop(1)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x403: Push((int) 0)
0x404: @ KillTimer(Stack[-1])
0x405: Pop(1)
0x406: @ Stop()
0x407: Pop(0)
0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: @ RequestClearPath(Stack[-1])
0x40b: Pop(0)
0x40c: Return(); Pop(0)

0x40d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x40e: Push((int) 0)
0x40f: @ KillTimer(Stack[-1])
0x410: Pop(1)
0x411: @ Stop()
0x412: Pop(0)
0x413: Return(); Pop(0)

0x414: PushEmpty()
0x415: PushEmpty()
0x416: Call 0x40d

0x417: Pop(0)
0x418: PushEmpty(object)
0x419: Stack[-1] = Stack[-2]
0x41a: Call 0x543

0x41b: Pop(1)
0x41c: Return(); Pop(0)

0x41d: PushEmpty()
0x41e: PushEmpty(bool, object)
0x41f: Stack[-1] = Stack[-3]
0x420: Call 0x4ad

0x421: Stack[-4] = Stack[-2]
0x422: Pop(2)
0x423: Return(); Pop(0)

0x424: Stack[-1] = "walk"
0x425: Return(); Pop(0)

0x426: Stack[-1] = "run"
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: Push((int) 1)
0x42a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-2] = "fire"
0x42d: Return(); Pop(0)

0x42e: Stack[-2] = "phys"
0x42f: Return(); Pop(0)

0x430: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x431: @ GetPosition(Stack[-3])
0x432: Pop(0)
0x433: @@ GetPosition(Stack[-2])
0x434: Pop(0)
0x435: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x436: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x437: Return(); Pop(6)

0x438: PushEmpty(bool, bool)
0x439: Push("HasProperty")
0x43a: Push((int) 2)
0x43b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x43c: Pop(1); Push((bool) Stack[-1] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-5] = (bool) 0
0x43f: Return(); Pop(2)

0x440: @@ HasProperty(Stack[-3], Stack[-1])
0x441: Pop(0)
0x442: Stack[-5] = Stack[-1]
0x443: Return(); Pop(2)

0x444: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x445: PushEmpty(bool, object, string)
0x446: Stack[-2] = Stack[-18]
0x447: Stack[-1] = "health"
0x448: Call 0x438

0x449: Pop(2)
0x44a: Pop(1); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-16] = (float) 0.0
0x44d: Return(); Pop(12)

0x44e: PushEmpty(bool, object, string)
0x44f: Stack[-2] = Stack[-18]
0x450: Stack[-1] = "armor"
0x451: Call 0x438

0x452: Pop(2)
0x453: Pop(1); Push((bool) Stack[-1] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x455: Stack[-6] = (int) 0
0x456: GOTO 0x45a

0x457: Push("armor")
0x458: @@ GetProperty(Stack[-1], Stack[-7])
0x459: Pop(1)
0x45a: Push("armor_")
0x45b: PushEmpty(string, int)
0x45c: Stack[-1] = Stack[-16]
0x45d: Call 0x428

0x45e: Pop(1)
0x45f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x460: PushEmpty(bool, object, string)
0x461: Stack[-2] = Stack[-18]
0x462: Stack[-1] = Stack[-8]
0x463: Call 0x438

0x464: Pop(2)
0x465: Pop(1); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-4] = (int) 0
0x468: GOTO 0x46b

0x469: @@ GetProperty(Stack[-5], Stack[-4])
0x46a: Pop(0)
0x46b: PushEmpty(float, float, float)
0x46c: Pop(0); Push(Stack[-9] + Stack[-7]);
0x46d: Push((float)100.0)
0x46e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x46f: Stack[-1] = (int) 1
0x470: Call 0x51c

0x471: Stack[-6] = Stack[-3]
0x472: Pop(3)
0x473: Push("health")
0x474: @@ GetProperty(Stack[-1], Stack[-3])
0x475: Pop(1)
0x476: Push((int) 1)
0x477: Pop(1); Push(Stack[-1] - Stack[-4]);
0x478: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x479: Push("health")
0x47a: PushEmpty(float, float, float, float)
0x47b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x47c: Stack[-2] = (int) 0
0x47d: Stack[-1] = (int) 1
0x47e: Call 0x523

0x47f: Pop(3)
0x480: @@ SetProperty(Stack[-2], Stack[-1])
0x481: Pop(2)
0x482: Stack[-16] = Stack[-1]
0x483: Return(); Pop(12)

0x484: PushEmpty(bool, bool)
0x485: @@ IsDead(Stack[-1])
0x486: Pop(0)
0x487: Stack[-4] = Stack[-1]
0x488: Return(); Pop(2)

0x489: PushEmpty(object, object, object, object)
0x48a: Pop(0); Push((bool) Stack[-5] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-6] = (bool) 0
0x48d: Return(); Pop(4)

0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: Push("IsDead")
0x491: Push((int) 1)
0x492: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x493: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x494: PushEmpty(bool, object)
0x495: Stack[-1] = Stack[-8]
0x496: Call 0x484

0x497: Pop(1)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: Stack[-1] = (bool) 1
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-6] = (bool) 0
0x49c: Return(); Pop(4)

0x49d: @ GetScene(Stack[-2])
0x49e: Pop(0)
0x49f: Pop(0); Push((bool) Stack[-2] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-6] = (bool) 0
0x4a2: Return(); Pop(4)

0x4a3: @@ GetScene(Stack[-1])
0x4a4: Pop(0)
0x4a5: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a7: Stack[-6] = (bool) 0
0x4a8: Return(); Pop(4)

0x4a9: Stack[-6] = (bool) 1
0x4aa: Return(); Pop(4)

0x4ab: Stack[-1] = 0
0x4ac: Stack[-2] = 0
0x4ad: PushEmpty(int, int)
0x4ae: PushEmpty(bool, object)
0x4af: Stack[-1] = Stack[-5]
0x4b0: Call 0x489

0x4b1: Pop(1)
0x4b2: Pop(1); Push((bool) Stack[-1] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b4: Stack[-4] = (bool) 0
0x4b5: Return(); Pop(2)

0x4b6: PushEmpty(bool, object, string)
0x4b7: Stack[-2] = Stack[-6]
0x4b8: Stack[-1] = "noaccess"
0x4b9: Call 0x438

0x4ba: Pop(2)
0x4bb: Pop(1); Push((bool) Stack[-1] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-4] = (bool) 1
0x4be: Return(); Pop(2)

0x4bf: Push("noaccess")
0x4c0: @@ GetProperty(Stack[-1], Stack[-2])
0x4c1: Pop(1)
0x4c2: Push((int) 0)
0x4c3: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4c4: Return(); Pop(2)

0x4c5: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x4c6: PushEmpty(bool)
0x4c7: Stack[-1] = (bool) 0
0x4c8: Push((int) 4)
0x4c9: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cb: Push((int) 5)
0x4cc: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d0: @ GetScene(Stack[-10])
0x4d1: Pop(0)
0x4d2: @ GetPosition(Stack[-8])
0x4d3: Pop(0)
0x4d4: @ GetEyesHeight(Stack[-7])
0x4d5: Pop(0)
0x4d6: Push(CvectorIndex(Stack[-8], 1))
0x4d7: Push((int) 2)
0x4d8: Pop(1); Push(Stack[-9] / Stack[-1]);
0x4d9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4da: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4db: Push("scripted")
0x4dc: Push(CVector(0.0, 0.0, 1.0))
0x4dd: Push("blood.xml")
0x4de: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x4df: Pop(3)
0x4e0: Stack[-9] = 0
0x4e1: Stack[-10] = 0
0x4e2: Pop(0); Push((bool) Stack[-23] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e4: Return(); Pop(20)

0x4e5: @ GetSecondaryAnimationType(Stack[-6])
0x4e6: Pop(0)
0x4e7: Push((int) 0)
0x4e8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4ea: Return(); Pop(20)

0x4eb: @@ GetPosition(Stack[-5])
0x4ec: Pop(0)
0x4ed: @ GetPosition(Stack[-4])
0x4ee: Pop(0)
0x4ef: @ GetDirection(Stack[-3])
0x4f0: Pop(0)
0x4f1: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4f2: Push(CvectorIndex(Stack[-2], 0))
0x4f3: Push(CvectorIndex(Stack[-4], 0))
0x4f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f5: Push(CvectorIndex(Stack[-3], 2))
0x4f6: Push(CvectorIndex(Stack[-5], 2))
0x4f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f9: Push((int) 0)
0x4fa: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: Stack[-1] = "fhit"
0x4fd: GOTO 0x4ff

0x4fe: Stack[-1] = "bhit"
0x4ff: Push("hit_react")
0x500: Push("1")
0x501: Pop(1); Push(Stack[-3] + Stack[-1]);
0x502: Push("2")
0x503: Pop(1); Push(Stack[-4] + Stack[-1]);
0x504: Push((int) -10)
0x505: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(4)
0x507: Return(); Pop(20)

0x508: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x509: @@ GetPosition(Stack[-3])
0x50a: Pop(0)
0x50b: @ GetPosition(Stack[-2])
0x50c: Pop(0)
0x50d: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x50e: Push(CvectorIndex(Stack[-1], 0))
0x50f: Push(CvectorIndex(Stack[-2], 2))
0x510: @ RotateAsync(Stack[-2], Stack[-1])
0x511: Pop(2)
0x512: Return(); Pop(6)

0x513: PushEmpty(bool, bool)
0x514: @ IsLoaded(Stack[-1])
0x515: Pop(0)
0x516: Stack[-3] = Stack[-1]
0x517: Return(); Pop(2)

0x518: PushEmpty(cvector, cvector)
0x519: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x51a: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x51b: Return(); Pop(2)

0x51c: PushEmpty()
0x51d: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-3] = Stack[-2]
0x520: GOTO 0x522

0x521: Stack[-3] = Stack[-1]
0x522: Return(); Pop(0)

0x523: PushEmpty()
0x524: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: Stack[-4] = Stack[-2]
0x527: Return(); Pop(0)

0x528: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-4] = Stack[-1]
0x52b: Return(); Pop(0)

0x52c: Stack[-4] = Stack[-3]
0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: PushEmpty(object)
0x530: Stack[-1] = Stack[-2]
0x531: Push(-1, 0); TaskCall(2)
0x532: Call 0xfd

0x533: Pop(-1, 0); TaskReturn
0x534: Pop(1)
0x535: Return(); Pop(0)

0x536: PushEmpty(float, float)
0x537: Push("health")
0x538: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53a: Push("health")
0x53b: @ GetProperty(Stack[-1], Stack[-2])
0x53c: Pop(1)
0x53d: Push((int) 0)
0x53e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: @ SignalDeath(Stack[-4])
0x541: Pop(0)
0x542: Return(); Pop(2)

0x543: PushEmpty()
0x544: PushEmpty(object)
0x545: Stack[-1] = Stack[-2]
0x546: Call 0x52e

0x547: Pop(1)
0x548: Return(); Pop(0)

0x549: PushEmpty()
0x54a: PushEmpty(object, int, float)
0x54b: Stack[-3] = Stack[-7]
0x54c: Stack[-2] = Stack[-6]
0x54d: Stack[-1] = Stack[-5]
0x54e: Call 0x4c5

0x54f: Pop(3)
0x550: Return(); Pop(0)

0x551: PushEmpty(string, string)
0x552: Stack[-1] = "idle"
0x553: Push(Stack[-3])
0x554: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x555: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x556: Stack[-4] = Stack[-1]
0x557: Return(); Pop(2)

0x558: PushEmpty(int, bool, int, bool)
0x559: Stack[-2] = (int) 0
0x55a: Push("all")
0x55b: PushEmpty(string, int)
0x55c: Stack[-1] = Stack[-5]
0x55d: Call 0x551

0x55e: Pop(1)
0x55f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(2)
0x561: Pop(0); Push((bool) Stack[-1] == 0)
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: GOTO 0x567

0x564: Push((int) 1)
0x565: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x566: GOTO 0x55a

0x567: Stack[-5] = Stack[-2]
0x568: Return(); Pop(4)

0x569: @ StopAnimation()
0x56a: Pop(0)
0x56b: Return(); Pop(0)

0x56c: PushEmpty(int, int, int, int)
0x56d: PushEmpty(int)
0x56e: Call 0x558

0x56f: Stack[-3] = Stack[-1]
0x570: Pop(1)
0x571: Pop(0); Push((bool) Stack[-2] == 0)
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: Return(); Pop(4)

0x574: @ irand(Stack[-1], Stack[-2])
0x575: Pop(0)
0x576: Push("all")
0x577: PushEmpty(string, int)
0x578: Stack[-1] = Stack[-4]
0x579: Call 0x551

0x57a: Pop(1)
0x57b: @ PlayAnimation(Stack[-2], Stack[-1])
0x57c: Pop(2)
0x57d: @ WaitForAnimEnd()
0x57e: Pop(0)
0x57f: Return(); Pop(4)

0x580: PushEmpty()
0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[-3]
0x583: Call 0x4ad

0x584: Pop(1)
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-2] = (int) 2
0x587: GOTO 0x589

0x588: Stack[-2] = (int) 0
0x589: Return(); Pop(0)

0x58a: PushEmpty()
0x58b: PushEmpty(object)
0x58c: Stack[-1] = Stack[-2]
0x58d: Push(-1, 5); TaskCall(3)
0x58e: Call 0x191

0x58f: Pop(-1, 5); TaskReturn
0x590: Pop(1)
0x591: Return(); Pop(0)

0x592: PushEmpty()
0x593: PushEmpty(int, object)
0x594: Stack[-1] = Stack[-3]
0x595: Call 0x580

0x596: Stack[-4] = Stack[-2]
0x597: Pop(2)
0x598: Return(); Pop(0)

0x599: PushEmpty()
0x59a: PushEmpty(object)
0x59b: Stack[-1] = Stack[-2]
0x59c: Call 0x58a

0x59d: Pop(1)
0x59e: Return(); Pop(0)

0x59f: PushEmpty()
0x5a0: Push(-0, 0); TaskCall(0)
0x5a1: Call 0x0

0x5a2: Pop(-0, 0); TaskReturn
0x5a3: Pop(0)
0x5a4: Return(); Pop(0)

0x5a5: PushEmpty()
0x5a6: Stack[-2] = (int) 2
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: PushEmpty(object)
0x5aa: Stack[-1] = Stack[-2]
0x5ab: Call 0x5bc

0x5ac: Pop(1)
0x5ad: Return(); Pop(0)

0x5ae: PushEmpty()
0x5af: Stack[-2] = (int) 0
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty()
0x5b2: Return(); Pop(0)

0x5b3: PushEmpty()
0x5b4: Stack[-3] = (int) 0
0x5b5: Return(); Pop(0)

0x5b6: PushEmpty()
0x5b7: Return(); Pop(0)

0x5b8: Push(GlobalVars[0])
0x5b9: Stack[-1] = (bool) 0
0x5ba: GlobalVars[0] = Stack[-1]; Pop(1)
0x5bb: Return(); Pop(0)

0x5bc: PushEmpty()
0x5bd: Push(GlobalVars[0])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5bf: @ WorkWithCorpse(Stack[-1])
0x5c0: Pop(0)
0x5c1: Return(); Pop(0)

0x5c2: Return(); Pop(0)

0x5c3: PushEmpty(string, bool, string, bool)
0x5c4: PushEmpty(bool, object, string)
0x5c5: Stack[-2] = Stack[-8]
0x5c6: Stack[-1] = "class"
0x5c7: Call 0x438

0x5c8: Pop(2)
0x5c9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cb: Stack[-7] = (bool) 0
0x5cc: Return(); Pop(4)

0x5cd: Push("class")
0x5ce: @@ GetProperty(Stack[-1], Stack[-3])
0x5cf: Pop(1)
0x5d0: Push("guard")
0x5d1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-7] = (bool) 0
0x5d4: Return(); Pop(4)

0x5d5: @ CanSee(Stack[-1], Stack[-6])
0x5d6: Pop(0)
0x5d7: PushEmpty(bool)
0x5d8: Stack[-1] = (bool) 1
0x5d9: Push(Stack[-2])
0x5da: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5db: PushEmpty(float, object)
0x5dc: Stack[-1] = Stack[-9]
0x5dd: Call 0x430

0x5de: Pop(1)
0x5df: Push((float)1000000.0)
0x5e0: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e2: Stack[-1] = (bool) 0
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e4: Stack[-7] = (bool) 1
0x5e5: Return(); Pop(4)

0x5e6: Stack[-7] = (bool) 0
0x5e7: Return(); Pop(4)

0x5e8: PushEmpty()
0x5e9: Push(GlobalVars[0])
0x5ea: Stack[-1] = (bool) 1
0x5eb: GlobalVars[0] = Stack[-1]; Pop(1)
0x5ec: Push((int) 50)
0x5ed: Push((int) 40)
0x5ee: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: Return(); Pop(0)

