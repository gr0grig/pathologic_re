GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	player
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	all
	attack_on
	attack_stay
	fjump
	attack_off
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	head
	GetPosition
	walk
	run
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	fire
	bullet
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
	battle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	RemoveStationaryActor
	revolver_ammo
	alpha_pills

Import:
	IsPlayerActor (2 args)
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
	StopGroup0 (0 args)
	Stop (0 args)
	FindActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	CanReachByPF (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
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
	RotateAsync (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x2b
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (cvector, cvector) Params = 0
		EVENT_3 Op = 0x1 Vars = (object)
		EVENT_1 Op = 0xf Vars = (object)
		EVENT_17 Op = 0x1d Vars = (object)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x361 Vars = (int)
		EVENT_1 Op = 0x37c Vars = (object)
		EVENT_2 Op = 0x38b Vars = (object)
		EVENT_10 Op = 0x411 Vars = (object)
		EVENT_41 Op = 0x41c Vars = (object)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x43d Vars = (object)
		EVENT_22 Op = 0x4bc Vars = (object, int, float, float)
		EVENT_16 Op = 0x4be Vars = (object, string)
		EVENT_41 Op = 0x4c0 Vars = (object)

Events:
EVENT_22 Op = 0x6d8 Vars = (object, int, float, float)
EVENT_43 Op = 0x6e0 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6ea Vars = (object, string)
EVENT_41 Op = 0x6f7 Vars = (object)

0x0: Return(); Pop(0)

0x1: PushEmpty(bool, bool)
0x2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3: Pop(0)
0x4: Push(Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0x6: PushEmpty()
0x7: Call2 0x7f

0x8: Pop(0)
0x9: PushEmpty()
0xa: Push(-0, 6); TaskCall(1)
0xb: Call2 0x85

0xc: Pop(-0, 6); TaskReturn
0xd: Pop(0)
0xe: Return(); Pop(2)

0xf: PushEmpty(bool, bool)
0x10: @ IsPlayerActor(Stack[-3], Stack[-1])
0x11: Pop(0)
0x12: Push(Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x14: PushEmpty()
0x15: Call2 0x7f

0x16: Pop(0)
0x17: PushEmpty()
0x18: Push(-0, 6); TaskCall(1)
0x19: Call2 0x85

0x1a: Pop(-0, 6); TaskReturn
0x1b: Pop(0)
0x1c: Return(); Pop(2)

0x1d: PushEmpty(bool, bool)
0x1e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1f: Pop(0)
0x20: Push(Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x22: PushEmpty()
0x23: Call2 0x7f

0x24: Pop(0)
0x25: PushEmpty()
0x26: Push(-0, 6); TaskCall(1)
0x27: Call2 0x85

0x28: Pop(-0, 6); TaskReturn
0x29: Pop(0)
0x2a: Return(); Pop(2)

0x2b: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x2c: @ GetPFPosition(Stack[-1])
0x2d: Pop(0)
0x2e: @ GetDirection(Stack[-0])
0x2f: Pop(0)
0x30: PushEmpty()
0x31: Call2 0x84

0x32: Pop(0)
0x33: Push((int) 10)
0x34: @ irand(Stack[-5], Stack[-1])
0x35: Pop(1)
0x36: Push((int) 5)
0x37: Pop(1); Push(Stack[-5] + Stack[-1]);
0x38: @ Sleep(Stack[-1], Stack[-4])
0x39: Pop(1)
0x3a: Push(Stack[-3])
0x3b: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x0

0x3e: Pop(0)
0x3f: GOTO 0x7d

0x40: PushEmpty()
0x41: Call2 0x84

0x42: Pop(0)
0x43: @ GetPFPosition(Stack[-2])
0x44: Pop(0)
0x45: PushEmpty(float, cvector, cvector)
0x46: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47: Stack[-1] = Stack[-5]
0x48: Call2 0x63f

0x49: Pop(2)
0x4a: Push((int) 40000)
0x4b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x4d: @ FindPathTo(Stack[-1], Stack[-1])
0x4e: Pop(0)
0x4f: Pop(0); Push(( Stack[-1] != 0 )
0x50: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x51: @ RotatePath(Stack[-1], Stack[-3])
0x52: Pop(0)
0x53: Pop(0); Push((bool) Stack[-3] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: GOTO 0x7c

0x56: Push((bool) 0)
0x57: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x58: Pop(1)
0x59: Pop(0); Push((bool) Stack[-3] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: GOTO 0x7c

0x5c: Push(CvectorIndex(Stack[-0], 0))
0x5d: Push(CvectorIndex(Stack[-0], 2))
0x5e: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x5f: Pop(2)
0x60: Pop(0); Push((bool) Stack[-3] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: GOTO 0x7c

0x63: @ WaitForAnimEnd(Stack[-3])
0x64: Pop(0)
0x65: Pop(0); Push((bool) Stack[-3] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x67: GOTO 0x7c

0x68: GOTO 0x7d

0x69: GOTO 0x6d

0x6a: Push((int) 1)
0x6b: @ Sleep(Stack[-1])
0x6c: Pop(1)
0x6d: Stack[-1] = 0
0x6e: GOTO 0x7c

0x6f: Push(CvectorIndex(Stack[-0], 0))
0x70: Push(CvectorIndex(Stack[-0], 2))
0x71: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x72: Pop(2)
0x73: Pop(0); Push((bool) Stack[-3] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7c

0x76: @ WaitForAnimEnd(Stack[-3])
0x77: Pop(0)
0x78: Pop(0); Push((bool) Stack[-3] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x7c

0x7b: GOTO 0x7d

0x7c: GOTO 0x40

0x7d: GOTO 0x30

0x7e: Return(); Pop(8)

0x7f: @ StopGroup0()
0x80: Pop(0)
0x81: @ Stop()
0x82: Pop(0)
0x83: Return(); Pop(0)

0x84: Return(); Pop(0)

0x85: PushEmpty(object, object)
0x86: Push("player")
0x87: @ FindActor(Stack[-2], Stack[-1])
0x88: Pop(1)
0x89: Pop(0); Push((bool) Stack[-1] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Return(); Pop(2)

0x8c: PushEmpty(object, bool, float)
0x8d: Stack[-3] = Stack[-4]
0x8e: Stack[-2] = (bool) 1
0x8f: Stack[-1] = (float) 180.0
0x90: Call2 0x9a

0x91: Pop(3)
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
0x94: PushEmpty()
0x95: Stack[-3] = (float) 0.15
0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: Stack[-3] = (int) 0
0x99: Return(); Pop(0)

0x9a: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x9b: PushEmpty()
0x9c: Call2 0x17f

0x9d: Pop(0)
0x9e: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x9f: Push("@GetAttackDistance")
0xa0: Push((int) 1)
0xa1: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: @@ GetAttackDistance(Stack[-11])
0xa4: Pop(0)
0xa5: Push((int) 50)
0xa6: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa7: GOTO 0xa9

0xa8: Stack[-11] = Stack[-23]
0xa9: Push((int) 150)
0xaa: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-11] = (int) 150
0xad: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xae: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xaf: @ IsPlayerActor(Stack[-0], Stack[-8])
0xb0: Pop(0)
0xb1: Push(Stack[-8])
0xb2: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb3: Push("attack")
0xb4: @ PlayGlobalMusic(Stack[-1])
0xb5: Pop(1)
0xb6: PushEmpty(object)
0xb7: Call2 0x62f

0xb8: Pop(0)
0xb9: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xba: Pop(1)
0xbb: Push(Stack[-24])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-7] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-7] = (bool) 1
0xc0: Push((float)400.0)
0xc1: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xc2: PushEmpty(bool)
0xc3: Stack[-1] = (bool) 0
0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x55a

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Stack[-1] = (bool) 1
0xcc: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0xcd: PushEmpty()
0xce: Call2 0x31c

0xcf: Pop(0)
0xd0: @@ GetPFPosition(Stack[-10])
0xd1: Pop(0)
0xd2: @ GetPFPosition(Stack[-9])
0xd3: Pop(0)
0xd4: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xd5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd6: Pop(0); Push(Stack[-6] * Stack[-6]);
0xd7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xd9: PushEmpty(bool, object, float, float, bool, bool)
0xda: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Stack[-4] = Stack[-17]
0xdc: Stack[-3] = (float) 10000.0
0xdd: Stack[-2] = (bool) 1
0xde: Stack[-1] = (bool) 0
0xdf: Push(-6, 3); TaskCall(2)
0xe0: Call2 0x330

0xe1: Pop(-6, 3); TaskReturn
0xe2: Pop(5)
0xe3: Pop(1); Push((bool) Stack[-1] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: GOTO 0x16e

0xe6: Stack[-7] = (bool) 0
0xe7: GOTO 0x16d

0xe8: Pop(0); Push(Stack[-23] * Stack[-23]);
0xe9: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0xeb: @@ GetPFPosition(Stack[-3])
0xec: Pop(0)
0xed: @ CanReachByPF(Stack[-2], Stack[-3])
0xee: Pop(0)
0xef: Pop(0); Push((bool) Stack[-2] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf1: PushEmpty(bool, object, float, float, bool, bool)
0xf2: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Stack[-4] = Stack[-17]
0xf4: Stack[-3] = (float) 10000.0
0xf5: Stack[-2] = (bool) 1
0xf6: Stack[-1] = (bool) 0
0xf7: Push(-6, 3); TaskCall(2)
0xf8: Call2 0x330

0xf9: Pop(-6, 3); TaskReturn
0xfa: Pop(5)
0xfb: Pop(1); Push((bool) Stack[-1] == 0)
0xfc: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfd: GOTO 0x16e

0xfe: Stack[-7] = (bool) 0
0xff: GOTO 0xc2

0x100: Pop(0); Push((bool) Stack[-7] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x102: PushEmpty(object)
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x5f0

0x105: Pop(1)
0x106: Push("all")
0x107: Push("attack_on")
0x108: @ PlayAnimation(Stack[-2], Stack[-1])
0x109: Pop(2)
0x10a: @ WaitForAnimEnd()
0x10b: Pop(0)
0x10c: PushEmpty()
0x10d: Call2 0x31c

0x10e: Pop(0)
0x10f: @ StopAsync()
0x110: Pop(0)
0x111: Stack[-7] = (bool) 1
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x55a

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: GOTO 0x16e

0x119: @ rand(Stack[-1])
0x11a: Pop(0)
0x11b: PushEmpty(bool)
0x11c: Stack[-1] = (bool) 1
0x11d: Push((float)0.25)
0x11e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: PushEmpty(bool)
0x121: Call2 0x2f1

0x122: Pop(0)
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: Stack[-1] = (bool) 0
0x125: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x126: @ Face(Stack[-0])
0x127: Pop(0)
0x128: PushEmpty()
0x129: Call2 0x323

0x12a: Pop(0)
0x12b: Push("all")
0x12c: Push("attack_stay")
0x12d: @ PlayAnimation(Stack[-2], Stack[-1])
0x12e: Pop(2)
0x12f: PushEmpty(bool, float)
0x130: Stack[-1] = Stack[-25]
0x131: Call2 0x26d

0x132: Pop(2)
0x133: @ StopAsync()
0x134: Pop(0)
0x135: GOTO 0x164

0x136: @ Face(Stack[-0])
0x137: Pop(0)
0x138: Push("all")
0x139: Push("fjump")
0x13a: @ PlayAnimation(Stack[-2], Stack[-1])
0x13b: Pop(2)
0x13c: @ WaitForAnimEnd()
0x13d: Pop(0)
0x13e: PushEmpty()
0x13f: Call2 0x31c

0x140: Pop(0)
0x141: Push(CVector(0.0, 0.0, 0.0))
0x142: @ SetSpeed(Stack[-1])
0x143: Pop(1)
0x144: @ Stop()
0x145: Pop(0)
0x146: @ StopAsync()
0x147: Pop(0)
0x148: PushEmpty(bool)
0x149: Call2 0x2f1

0x14a: Pop(0)
0x14b: Pop(1); Push((bool) Stack[-1] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x55a

0x150: Pop(1)
0x151: Pop(1); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x153: GOTO 0x16e

0x154: @@ GetPFPosition(Stack[-10])
0x155: Pop(0)
0x156: @ GetPFPosition(Stack[-9])
0x157: Pop(0)
0x158: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x159: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x15a: Pop(0); Push(Stack[-23] * Stack[-23]);
0x15b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15d: PushEmpty(bool, float)
0x15e: Stack[-1] = Stack[-25]
0x15f: Call2 0x1c9

0x160: Pop(1)
0x161: Pop(1); Push((bool) Stack[-1] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: GOTO 0x16e

0x164: GOTO 0x16d

0x165: PushEmpty(bool, float)
0x166: Stack[-1] = Stack[-25]
0x167: Call2 0x1c9

0x168: Pop(1)
0x169: Pop(1); Push((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: GOTO 0x16e

0x16c: Stack[-7] = (bool) 1
0x16d: GOTO 0xc2

0x16e: @ WaitForAnimEnd()
0x16f: Pop(0)
0x170: Push( Stack[3 + Tasks[-1].StackPointer] )
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Return(); Pop(22)

0x173: Push("all")
0x174: Push("attack_off")
0x175: @ PlayAnimation(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: @ WaitForAnimEnd()
0x178: Pop(0)
0x179: Push(Stack[-8])
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: Push((float)2.0)
0x17c: @ Sleep(Stack[-1])
0x17d: Pop(1)
0x17e: Return(); Pop(22)

0x17f: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x180: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x181: Push("all")
0x182: Push("attack_begin")
0x183: Push((int) 1)
0x184: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x185: Pop(2); Push(Stack[-2] + Stack[-1]);
0x186: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: Pop(0); Push((bool) Stack[-3] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: GOTO 0x18e

0x18b: Push((int) 1)
0x18c: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x18d: GOTO 0x181

0x18e: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x18f: Push("attack")
0x190: Push((int) 1)
0x191: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x192: Pop(2); Push(Stack[-2] + Stack[-1]);
0x193: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x194: Pop(1)
0x195: Pop(0); Push((bool) Stack[-2] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x19b

0x198: Push((int) 1)
0x199: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x19a: GOTO 0x18f

0x19b: Push("all")
0x19c: Push("bjump")
0x19d: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: Push(CvectorIndex(Stack[-1], 2))
0x1a0: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1a1: Return(); Pop(6)

0x1a2: PushEmpty(object, float, float, object, float, float)
0x1a3: Push((float)0.9)
0x1a4: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1a5: @ GetVictim(Stack[-1], Stack[-4])
0x1a6: Pop(1)
0x1a7: @ ReportAttack(Stack[-0])
0x1a8: Pop(0)
0x1a9: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1ab: PushEmpty(float, object, int)
0x1ac: Stack[-2] = Stack[-6]
0x1ad: Stack[-1] = Stack[-10]
0x1ae: Call2 0x94

0x1af: Stack[-5] = Stack[-3]
0x1b0: Pop(3)
0x1b1: PushEmpty(float, object, float, int)
0x1b2: Stack[-3] = Stack[-7]
0x1b3: Stack[-2] = Stack[-6]
0x1b4: PushEmpty(int, object, int)
0x1b5: Stack[-2] = Stack[-10]
0x1b6: Stack[-1] = Stack[-14]
0x1b7: Call2 0x97

0x1b8: Stack[-4] = Stack[-3]
0x1b9: Pop(3)
0x1ba: Call2 0x4e8

0x1bb: Stack[-5] = Stack[-4]
0x1bc: Pop(4)
0x1bd: PushEmpty(int)
0x1be: Call2 0x321

0x1bf: Pop(0)
0x1c0: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1c1: Pop(1)
0x1c2: PushEmpty(object, float)
0x1c3: Stack[-2] = Stack[-5]
0x1c4: Stack[-1] = Stack[-3]
0x1c5: Call2 0x328

0x1c6: Pop(2)
0x1c7: Return(); Pop(6)

0x1c8: Stack[-3] = 0
0x1c9: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1ca: PushEmpty()
0x1cb: Call2 0x31c

0x1cc: Pop(0)
0x1cd: @ irand(Stack[-4], Stack[-1])
0x1ce: Pop(0)
0x1cf: Push((int) 1)
0x1d0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1d1: @ Face(Stack[-0])
0x1d2: Pop(0)
0x1d3: Push((bool) 1)
0x1d4: @ SetAttackState(Stack[-1])
0x1d5: Pop(1)
0x1d6: PushEmpty()
0x1d7: Call2 0x66f

0x1d8: Pop(0)
0x1d9: Push("all")
0x1da: Push("attack_begin")
0x1db: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: @ WaitForAnimEnd()
0x1df: Pop(0)
0x1e0: PushEmpty()
0x1e1: Call2 0x2fc

0x1e2: Pop(0)
0x1e3: PushEmpty(bool, object)
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x55a

0x1e6: Pop(1)
0x1e7: Pop(1); Push((bool) Stack[-1] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e9: @ StopAsync()
0x1ea: Pop(0)
0x1eb: Stack[-10] = (bool) 0
0x1ec: Return(); Pop(8)

0x1ed: PushEmpty(float, int)
0x1ee: Stack[-2] = Stack[-11]
0x1ef: Stack[-1] = Stack[-6]
0x1f0: Call2 0x1a2

0x1f1: Pop(2)
0x1f2: Push("all")
0x1f3: Push("attack_middle")
0x1f4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1f5: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: Push(Stack[-3])
0x1f8: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x1f9: PushEmpty()
0x1fa: Call2 0x66f

0x1fb: Pop(0)
0x1fc: Push("all")
0x1fd: Push("attack_middle")
0x1fe: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: @ WaitForAnimEnd()
0x202: Pop(0)
0x203: PushEmpty()
0x204: Call2 0x31c

0x205: Pop(0)
0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0x55a

0x209: Pop(1)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20c: @ StopAsync()
0x20d: Pop(0)
0x20e: Stack[-10] = (bool) 0
0x20f: Return(); Pop(8)

0x210: PushEmpty(float, int)
0x211: Stack[-2] = Stack[-11]
0x212: Stack[-1] = Stack[-6]
0x213: Call2 0x1a2

0x214: Pop(2)
0x215: Stack[-2] = (int) 1
0x216: Push("attack_middle")
0x217: Pop(1); Push(Stack[-1] + Stack[-5]);
0x218: Push("_")
0x219: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21a: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x21b: Push("all")
0x21c: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x21d: Pop(1)
0x21e: Pop(0); Push((bool) Stack[-3] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x23e

0x221: PushEmpty()
0x222: Call2 0x66f

0x223: Pop(0)
0x224: Push("all")
0x225: @ PlayAnimation(Stack[-1], Stack[-2])
0x226: Pop(1)
0x227: @ WaitForAnimEnd()
0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x31c

0x22b: Pop(0)
0x22c: PushEmpty(bool, object)
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0x55a

0x22f: Pop(1)
0x230: Pop(1); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x232: @ StopAsync()
0x233: Pop(0)
0x234: Stack[-10] = (bool) 0
0x235: Return(); Pop(8)

0x236: PushEmpty(float, int)
0x237: Stack[-2] = Stack[-11]
0x238: Stack[-1] = Stack[-6]
0x239: Call2 0x1a2

0x23a: Pop(2)
0x23b: Push((int) 1)
0x23c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x23d: GOTO 0x216

0x23e: Push((bool) 0)
0x23f: @ SetAttackState(Stack[-1])
0x240: Pop(1)
0x241: Push("all")
0x242: Push("attack_end")
0x243: Pop(1); Push(Stack[-1] + Stack[-6]);
0x244: @ PlayAnimation(Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: PushEmpty(bool)
0x247: Call2 0x32a

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24a: PushEmpty(bool, float)
0x24b: Stack[-1] = (float) 0.75
0x24c: Call2 0x252

0x24d: Pop(2)
0x24e: @ StopAsync()
0x24f: Pop(0)
0x250: Stack[-10] = (bool) 1
0x251: Return(); Pop(8)

0x252: PushEmpty(float, bool, float, bool)
0x253: @ rand(Stack[-2])
0x254: Pop(0)
0x255: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x256: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x257: @ IsAnimationPlaying(Stack[-1])
0x258: Pop(0)
0x259: Pop(0); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x265

0x25c: PushEmpty(bool)
0x25d: Call2 0x2b4

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-6] = (bool) 1
0x261: Return(); Pop(4)

0x262: @ sync()
0x263: Pop(0)
0x264: GOTO 0x257

0x265: GOTO 0x26b

0x266: @ WaitForAnimEnd()
0x267: Pop(0)
0x268: PushEmpty()
0x269: Call2 0x31c

0x26a: Pop(0)
0x26b: Stack[-6] = (bool) 0
0x26c: Return(); Pop(4)

0x26d: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x26e: @ IsAnimationPlaying(Stack[-5])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-5] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: GOTO 0x293

0x273: PushEmpty(bool)
0x274: Call2 0x2b4

0x275: Pop(0)
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: Stack[-12] = (bool) 1
0x278: Return(); Pop(10)

0x279: PushEmpty(bool, object)
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call2 0x55a

0x27c: Pop(1)
0x27d: Pop(1); Push((bool) Stack[-1] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-12] = (bool) 0
0x280: Return(); Pop(10)

0x281: @@ GetPFPosition(Stack[-4])
0x282: Pop(0)
0x283: @ GetPFPosition(Stack[-3])
0x284: Pop(0)
0x285: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x286: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x287: Pop(0); Push(Stack[-11] * Stack[-11]);
0x288: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28a: PushEmpty(bool, float)
0x28b: Stack[-1] = Stack[-13]
0x28c: Call2 0x1c9

0x28d: Pop(2)
0x28e: Stack[-12] = (bool) 1
0x28f: Return(); Pop(10)

0x290: @ sync()
0x291: Pop(0)
0x292: GOTO 0x26e

0x293: PushEmpty()
0x294: Call2 0x31c

0x295: Pop(0)
0x296: Stack[-12] = (bool) 0
0x297: Return(); Pop(10)

0x298: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0x55a

0x29c: Pop(1)
0x29d: Pop(1); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-11] = (bool) 0
0x2a0: Return(); Pop(10)

0x2a1: PushEmpty(bool)
0x2a2: Call2 0x2f1

0x2a3: Pop(0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a5: @@ GetPFPosition(Stack[-5])
0x2a6: Pop(0)
0x2a7: @ GetPFPosition(Stack[-4])
0x2a8: Pop(0)
0x2a9: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2aa: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2ab: @@ GetAttackDistance(Stack[-1])
0x2ac: Pop(0)
0x2ad: Push((int) 50)
0x2ae: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2af: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2b0: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2b1: Return(); Pop(10)

0x2b2: Stack[-11] = (bool) 0
0x2b3: Return(); Pop(10)

0x2b4: PushEmpty(bool)
0x2b5: Stack[-1] = (bool) 0
0x2b6: PushEmpty(bool)
0x2b7: Call2 0x298

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ba: PushEmpty(bool)
0x2bb: Call2 0x2c4

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[-1] = (bool) 1
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-1] = (bool) 1
0x2c1: Return(); Pop(0)

0x2c2: Stack[-1] = (bool) 0
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2c5: @ GetScene(Stack[-5])
0x2c6: Pop(0)
0x2c7: Stack[-4] = (bool) 0
0x2c8: PushEmpty(cvector, object)
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0x4d0

0x2cb: Pop(1)
0x2cc: Pop(1); Push(( -Stack[-1])
0x2cd: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x2ce: Pop(1)
0x2cf: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2ee

0x2d2: @ Face(Stack[-0])
0x2d3: Pop(0)
0x2d4: Push("all")
0x2d5: Push("bjump")
0x2d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: @@ GetPFPosition(Stack[-2])
0x2d9: Pop(0)
0x2da: @ GetPFPosition(Stack[-1])
0x2db: Pop(0)
0x2dc: @ WaitForAnimEnd()
0x2dd: Pop(0)
0x2de: PushEmpty()
0x2df: Call2 0x31c

0x2e0: Pop(0)
0x2e1: @ StopAsync()
0x2e2: Pop(0)
0x2e3: Push(CVector(0.0, 0.0, 0.0))
0x2e4: @ SetSpeed(Stack[-1])
0x2e5: Pop(1)
0x2e6: Stack[-4] = (bool) 1
0x2e7: PushEmpty(bool)
0x2e8: Call2 0x298

0x2e9: Pop(0)
0x2ea: Pop(1); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2ee

0x2ed: GOTO 0x2c8

0x2ee: Stack[-11] = Stack[-4]
0x2ef: Return(); Pop(10)

0x2f0: Stack[-5] = 0
0x2f1: PushEmpty(bool, bool)
0x2f2: Push("IsAttacking")
0x2f3: Push((int) 1)
0x2f4: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f6: @@ IsAttacking(Stack[-1])
0x2f7: Pop(0)
0x2f8: Stack[-3] = Stack[-1]
0x2f9: Return(); Pop(2)

0x2fa: Stack[-3] = (bool) 0
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(float, int, float, int)
0x2fd: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: Return(); Pop(4)

0x300: Push( Stack[5 + Tasks[-1].StackPointer] )
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: Push((int) -1)
0x303: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x304: Push((int) 0)
0x305: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Return(); Pop(4)

0x308: @ rand(Stack[-2])
0x309: Pop(0)
0x30a: PushEmpty(float)
0x30b: Call2 0x32e

0x30c: Pop(0)
0x30d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x30f: @ irand(Stack[-1], Stack[-2])
0x310: Pop(0)
0x311: Push((int) 1)
0x312: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x313: Push("attack")
0x314: Pop(1); Push(Stack[-1] + Stack[-2]);
0x315: @ Speak(Stack[-1])
0x316: Pop(1)
0x317: PushEmpty(int)
0x318: Call2 0x32c

0x319: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x31a: Pop(1)
0x31b: Return(); Pop(4)

0x31c: PushEmpty(object)
0x31d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31e: Call2 0x666

0x31f: Pop(1)
0x320: Return(); Pop(0)

0x321: Stack[-1] = (int) 0
0x322: Return(); Pop(0)

0x323: PushEmpty(string)
0x324: Stack[-1] = "attack_stay"
0x325: Call2 0x606

0x326: Pop(1)
0x327: Return(); Pop(0)

0x328: PushEmpty()
0x329: Return(); Pop(0)

0x32a: Stack[-1] = (bool) 1
0x32b: Return(); Pop(0)

0x32c: Stack[-1] = (int) 1
0x32d: Return(); Pop(0)

0x32e: Stack[-1] = (float) 0.5
0x32f: Return(); Pop(0)

0x330: PushEmpty(bool, bool, bool, bool)
0x331: PushEmpty(object)
0x332: Stack[-1] = Stack[-10]
0x333: Call2 0x666

0x334: Pop(1)
0x335: Push((int) 1)
0x336: Push((int) 5)
0x337: @ SetTimer(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: @ CanSee(Stack[-2], Stack[-9])
0x33a: Pop(0)
0x33b: Push(Stack[-2])
0x33c: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x33e: PushEmpty(object)
0x33f: Stack[-1] = Stack[-10]
0x340: Call2 0x5fb

0x341: Pop(1)
0x342: GOTO 0x344

0x343: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[-11]
0x346: Call2 0x4d7

0x347: Pop(1)
0x348: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x349: PushEmpty(object)
0x34a: Call2 0x62f

0x34b: Pop(0)
0x34c: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x34d: Pop(1)
0x34e: PushEmpty(bool, object, float, float, bool, bool)
0x34f: Stack[-5] = Stack[-15]
0x350: Stack[-4] = Stack[-14]
0x351: Stack[-3] = Stack[-13]
0x352: Stack[-2] = Stack[-12]
0x353: Stack[-1] = Stack[-11]
0x354: Call2 0x399

0x355: Stack[-7] = Stack[-6]
0x356: Pop(6)
0x357: Push( Stack[2 + Tasks[-1].StackPointer] )
0x358: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x359: Push("head")
0x35a: @ UnlookAsync(Stack[-1])
0x35b: Pop(1)
0x35c: Push((int) 1)
0x35d: @ KillTimer(Stack[-1])
0x35e: Pop(1)
0x35f: Stack[-10] = Stack[-1]
0x360: Return(); Pop(4)

0x361: PushEmpty()
0x362: Push((int) 1)
0x363: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x365: PushEmpty(object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0x666

0x368: Pop(1)
0x369: GOTO 0x36e

0x36a: PushEmpty(int)
0x36b: Stack[-1] = Stack[-2]
0x36c: Call2 0x3ff

0x36d: Pop(1)
0x36e: Return(); Pop(0)

0x36f: Push((int) 1)
0x370: @ KillTimer(Stack[-1])
0x371: Pop(1)
0x372: Push( Stack[2 + Tasks[-1].StackPointer] )
0x373: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x374: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x375: Push("head")
0x376: @ UnlookAsync(Stack[-1])
0x377: Pop(1)
0x378: PushEmpty()
0x379: Call2 0x415

0x37a: Pop(0)
0x37b: Return(); Pop(0)

0x37c: PushEmpty()
0x37d: PushEmpty(bool)
0x37e: Stack[-1] = (bool) 0
0x37f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x380: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x381: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[-1] = (bool) 1
0x384: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x385: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x386: PushEmpty(object)
0x387: Stack[-1] = Stack[-2]
0x388: Call2 0x5fb

0x389: Pop(1)
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: PushEmpty(bool)
0x38d: Stack[-1] = (bool) 0
0x38e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x38f: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x390: Push( Stack[2 + Tasks[-1].StackPointer] )
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: Stack[-1] = (bool) 1
0x393: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x394: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x395: Push("head")
0x396: @ UnlookAsync(Stack[-1])
0x397: Pop(1)
0x398: Return(); Pop(0)

0x399: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x39a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x39b: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x39c: Stack[-7] = Stack[-17]
0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[-23]
0x39f: Call2 0x425

0x3a0: Pop(1)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-22] = (bool) 0
0x3a4: Return(); Pop(16)

0x3a5: @@ GetPosition(Stack[-5])
0x3a6: Pop(0)
0x3a7: @ GetPosition(Stack[-4])
0x3a8: Pop(0)
0x3a9: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3aa: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ab: PushEmpty(bool)
0x3ac: Stack[-1] = (bool) 0
0x3ad: Push((int) 0)
0x3ae: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b0: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3b1: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Stack[-1] = (bool) 1
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b5: @ Stop()
0x3b6: Pop(0)
0x3b7: Stack[-22] = (bool) 0
0x3b8: Return(); Pop(16)

0x3b9: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3ba: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3bc: @@ GetPFPosition(Stack[-5])
0x3bd: Pop(0)
0x3be: @ FindPathTo(Stack[-1], Stack[-5])
0x3bf: Pop(0)
0x3c0: Pop(0); Push(( Stack[-1] != 0 )
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-6] = Stack[-1]
0x3c3: Stack[-1] = 0
0x3c4: Pop(0); Push(( Stack[-6] != 0 )
0x3c5: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3c6: Push(Stack[-7])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c8: Stack[-7] = (bool) 0
0x3c9: @ RotatePath(Stack[-6], Stack[-8])
0x3ca: Pop(0)
0x3cb: Pop(0); Push((bool) Stack[-8] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x3fd

0x3ce: Push((int) 0)
0x3cf: Push((float)0.3)
0x3d0: @ SetTimer(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: PushEmpty(string)
0x3d3: Call2 0x42c

0x3d4: Pop(0)
0x3d5: PushEmpty(string)
0x3d6: Call2 0x42e

0x3d7: Pop(0)
0x3d8: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3d9: Pop(2)
0x3da: Pop(0); Push((bool) Stack[-8] == 0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3de: Stack[-6] = 0
0x3df: GOTO 0x3fd

0x3e0: GOTO 0x3e2

0x3e1: GOTO 0x3fc

0x3e2: GOTO 0x3e4

0x3e3: Stack[-6] = 0
0x3e4: GOTO 0x3f5

0x3e5: Push((int) 0)
0x3e6: @ KillTimer(Stack[-1])
0x3e7: Pop(1)
0x3e8: Push((float)0.5)
0x3e9: @ Sleep(Stack[-1], Stack[-9])
0x3ea: Pop(1)
0x3eb: Pop(0); Push((bool) Stack[-8] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ed: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-6] = 0
0x3f0: GOTO 0x3fd

0x3f1: Push((int) 0)
0x3f2: Push((float)0.3)
0x3f3: @ SetTimer(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: Stack[-1] = 0
0x3f6: GOTO 0x3fb

0x3f7: Push((int) 0)
0x3f8: @ KillTimer(Stack[-1])
0x3f9: Pop(1)
0x3fa: GOTO 0x3fd

0x3fb: Stack[-6] = 0
0x3fc: GOTO 0x39d

0x3fd: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x3fe: Return(); Pop(16)

0x3ff: PushEmpty()
0x400: Push((int) 0)
0x401: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x403: Return(); Pop(0)

0x404: PushEmpty(bool, object)
0x405: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x406: Call2 0x425

0x407: Pop(1)
0x408: Pop(1); Push((bool) Stack[-1] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x40b: Push((int) 0)
0x40c: @ KillTimer(Stack[-1])
0x40d: Pop(1)
0x40e: @ Stop()
0x40f: Pop(0)
0x410: Return(); Pop(0)

0x411: PushEmpty()
0x412: @ RequestClearPath(Stack[-1])
0x413: Pop(0)
0x414: Return(); Pop(0)

0x415: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x416: Push((int) 0)
0x417: @ KillTimer(Stack[-1])
0x418: Pop(1)
0x419: @ Stop()
0x41a: Pop(0)
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: PushEmpty()
0x41e: Call2 0x36f

0x41f: Pop(0)
0x420: PushEmpty(object)
0x421: Stack[-1] = Stack[-2]
0x422: Call2 0x6f7

0x423: Pop(1)
0x424: Return(); Pop(0)

0x425: PushEmpty()
0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[-3]
0x428: Call2 0x55a

0x429: Stack[-4] = Stack[-2]
0x42a: Pop(2)
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = "walk"
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = "run"
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: PushEmpty(object)
0x432: Stack[-1] = Stack[-2]
0x433: Call2 0x447

0x434: Pop(1)
0x435: Push((int) 50)
0x436: Push((int) 40)
0x437: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x438: Pop(2)
0x439: @ Hold()
0x43a: Pop(0)
0x43b: GOTO 0x439

0x43c: Return(); Pop(0)

0x43d: PushEmpty(bool, bool)
0x43e: @ IsOverrideActive(Stack[-1])
0x43f: Pop(0)
0x440: Pop(0); Push((bool) Stack[-1] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x442: PushEmpty(object)
0x443: Stack[-1] = Stack[-4]
0x444: Call2 0x680

0x445: Pop(1)
0x446: Return(); Pop(2)

0x447: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x448: Pop(0); Push((bool) Stack[-21] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44a: PushEmpty(string)
0x44b: Stack[-1] = "fdie"
0x44c: Call2 0x4a2

0x44d: Pop(1)
0x44e: GOTO 0x4a1

0x44f: @@ GetPosition(Stack[-10])
0x450: Pop(0)
0x451: @ GetPosition(Stack[-9])
0x452: Pop(0)
0x453: @ GetDirection(Stack[-8])
0x454: Pop(0)
0x455: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x456: Push(CvectorIndex(Stack[-7], 0))
0x457: Push(CvectorIndex(Stack[-9], 0))
0x458: Pop(2); Push(Stack[-2] * Stack[-1]);
0x459: Push(CvectorIndex(Stack[-8], 2))
0x45a: Push(CvectorIndex(Stack[-10], 2))
0x45b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x45c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45d: Push((int) 0)
0x45e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-6] = "fdie"
0x461: GOTO 0x463

0x462: Stack[-6] = "bdie"
0x463: @ RemoveRTEnvelope()
0x464: Pop(0)
0x465: @ SetDeathState()
0x466: Pop(0)
0x467: @ Stop()
0x468: Pop(0)
0x469: @ StopAsync()
0x46a: Pop(0)
0x46b: Stack[-5] = Stack[-21]
0x46c: Push("GetScriptProperty")
0x46d: Push((int) 2)
0x46e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x46f: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x470: Push("Owner")
0x471: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x472: Pop(1)
0x473: Push(Stack[-4])
0x474: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x475: Push("Owner")
0x476: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x477: Pop(1)
0x478: Pop(0); Push((bool) Stack[-5] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-5] = Stack[-21]
0x47b: Push("@GetEyesHeight")
0x47c: Push((int) 1)
0x47d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x47e: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x47f: @@ GetEyesHeight(Stack[-2])
0x480: Pop(0)
0x481: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x482: Push(CvectorIndex(Stack[-1], 1))
0x483: Stack[-1] = Stack[-3]
0x484: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x485: Push("head")
0x486: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x487: Pop(1)
0x488: Stack[-3] = (bool) 1
0x489: GOTO 0x48b

0x48a: Stack[-3] = (bool) 0
0x48b: PushEmpty(string)
0x48c: Stack[-1] = Stack[-7]
0x48d: Call2 0x606

0x48e: Pop(1)
0x48f: Push("all")
0x490: @ PlayAnimation(Stack[-1], Stack[-7])
0x491: Pop(1)
0x492: @ WaitForAnimEnd()
0x493: Pop(0)
0x494: Push(Stack[-3])
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: @ StopAsync()
0x497: Pop(0)
0x498: Push("head")
0x499: @ UnlookAsync(Stack[-1])
0x49a: Pop(1)
0x49b: Push("all")
0x49c: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x49d: Pop(1)
0x49e: @ RemoveEnvelope()
0x49f: Pop(0)
0x4a0: Stack[-5] = 0
0x4a1: Return(); Pop(20)

0x4a2: PushEmpty()
0x4a3: @ RemoveRTEnvelope()
0x4a4: Pop(0)
0x4a5: @ SetDeathState()
0x4a6: Pop(0)
0x4a7: @ Stop()
0x4a8: Pop(0)
0x4a9: @ StopAsync()
0x4aa: Pop(0)
0x4ab: @ StopSecondaryAnimation()
0x4ac: Pop(0)
0x4ad: PushEmpty(string)
0x4ae: Stack[-1] = Stack[-2]
0x4af: Call2 0x606

0x4b0: Pop(1)
0x4b1: Push("all")
0x4b2: @ PlayAnimation(Stack[-1], Stack[-2])
0x4b3: Pop(1)
0x4b4: @ WaitForAnimEnd()
0x4b5: Pop(0)
0x4b6: Push("all")
0x4b7: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4b8: Pop(1)
0x4b9: @ RemoveEnvelope()
0x4ba: Pop(0)
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: Return(); Pop(0)

0x4be: PushEmpty()
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty()
0x4c1: Return(); Pop(0)

0x4c2: PushEmpty()
0x4c3: Push((int) 2)
0x4c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c6: Stack[-2] = "fire"
0x4c7: Return(); Pop(0)

0x4c8: GOTO 0x4ce

0x4c9: Push((int) 1)
0x4ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cc: Stack[-2] = "bullet"
0x4cd: Return(); Pop(0)

0x4ce: Stack[-2] = "phys"
0x4cf: Return(); Pop(0)

0x4d0: PushEmpty(cvector, cvector, cvector, cvector)
0x4d1: @ GetPosition(Stack[-2])
0x4d2: Pop(0)
0x4d3: @@ GetPosition(Stack[-1])
0x4d4: Pop(0)
0x4d5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4d6: Return(); Pop(4)

0x4d7: PushEmpty(bool, bool)
0x4d8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4d9: Pop(0)
0x4da: Stack[-4] = Stack[-1]
0x4db: Return(); Pop(2)

0x4dc: PushEmpty(bool, bool)
0x4dd: Push("HasProperty")
0x4de: Push((int) 2)
0x4df: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-5] = (bool) 0
0x4e3: Return(); Pop(2)

0x4e4: @@ HasProperty(Stack[-3], Stack[-1])
0x4e5: Pop(0)
0x4e6: Stack[-5] = Stack[-1]
0x4e7: Return(); Pop(2)

0x4e8: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4e9: PushEmpty(bool, object, string)
0x4ea: Stack[-2] = Stack[-18]
0x4eb: Stack[-1] = "health"
0x4ec: Call2 0x4dc

0x4ed: Pop(2)
0x4ee: Pop(1); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-16] = (float) 0.0
0x4f1: Return(); Pop(12)

0x4f2: PushEmpty(bool, object, string)
0x4f3: Stack[-2] = Stack[-18]
0x4f4: Stack[-1] = "armor"
0x4f5: Call2 0x4dc

0x4f6: Pop(2)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-6] = (int) 0
0x4fa: GOTO 0x4fe

0x4fb: Push("armor")
0x4fc: @@ GetProperty(Stack[-1], Stack[-7])
0x4fd: Pop(1)
0x4fe: Push("armor_")
0x4ff: PushEmpty(string, int)
0x500: Stack[-1] = Stack[-16]
0x501: Call2 0x4c2

0x502: Pop(1)
0x503: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x504: PushEmpty(bool, object, string)
0x505: Stack[-2] = Stack[-18]
0x506: Stack[-1] = Stack[-8]
0x507: Call2 0x4dc

0x508: Pop(2)
0x509: Pop(1); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-4] = (int) 0
0x50c: GOTO 0x50f

0x50d: @@ GetProperty(Stack[-5], Stack[-4])
0x50e: Pop(0)
0x50f: PushEmpty(float, float, float)
0x510: Pop(0); Push(Stack[-9] + Stack[-7]);
0x511: Push((float)100.0)
0x512: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x513: Stack[-1] = (int) 1
0x514: Call2 0x643

0x515: Stack[-6] = Stack[-3]
0x516: Pop(3)
0x517: Push("health")
0x518: @@ GetProperty(Stack[-1], Stack[-3])
0x519: Pop(1)
0x51a: Push((int) 1)
0x51b: Pop(1); Push(Stack[-1] - Stack[-4]);
0x51c: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x51d: Push("health")
0x51e: PushEmpty(float, float, float, float)
0x51f: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x520: Stack[-2] = (int) 0
0x521: Stack[-1] = (int) 1
0x522: Call2 0x64a

0x523: Pop(3)
0x524: @@ SetProperty(Stack[-2], Stack[-1])
0x525: Pop(2)
0x526: PushEmpty(bool, object)
0x527: Stack[-1] = Stack[-17]
0x528: Call2 0x4d7

0x529: Pop(1)
0x52a: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52b: PushEmpty(float)
0x52c: Stack[-1] = -Stack[-2]; Pop(0);
0x52d: Call2 0x655

0x52e: Pop(1)
0x52f: Stack[-16] = Stack[-1]
0x530: Return(); Pop(12)

0x531: PushEmpty(bool, bool)
0x532: @@ IsDead(Stack[-1])
0x533: Pop(0)
0x534: Stack[-4] = Stack[-1]
0x535: Return(); Pop(2)

0x536: PushEmpty(object, object, object, object)
0x537: Pop(0); Push((bool) Stack[-5] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x539: Stack[-6] = (bool) 0
0x53a: Return(); Pop(4)

0x53b: PushEmpty(bool)
0x53c: Stack[-1] = (bool) 0
0x53d: Push("IsDead")
0x53e: Push((int) 1)
0x53f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x540: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x541: PushEmpty(bool, object)
0x542: Stack[-1] = Stack[-8]
0x543: Call2 0x531

0x544: Pop(1)
0x545: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x546: Stack[-1] = (bool) 1
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-6] = (bool) 0
0x549: Return(); Pop(4)

0x54a: @ GetScene(Stack[-2])
0x54b: Pop(0)
0x54c: Pop(0); Push((bool) Stack[-2] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54e: Stack[-6] = (bool) 0
0x54f: Return(); Pop(4)

0x550: @@ GetScene(Stack[-1])
0x551: Pop(0)
0x552: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-6] = (bool) 0
0x555: Return(); Pop(4)

0x556: Stack[-6] = (bool) 1
0x557: Return(); Pop(4)

0x558: Stack[-1] = 0
0x559: Stack[-2] = 0
0x55a: PushEmpty(int, int)
0x55b: PushEmpty(bool, object)
0x55c: Stack[-1] = Stack[-5]
0x55d: Call2 0x536

0x55e: Pop(1)
0x55f: Pop(1); Push((bool) Stack[-1] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-4] = (bool) 0
0x562: Return(); Pop(2)

0x563: PushEmpty(bool, object, string)
0x564: Stack[-2] = Stack[-6]
0x565: Stack[-1] = "noaccess"
0x566: Call2 0x4dc

0x567: Pop(2)
0x568: Pop(1); Push((bool) Stack[-1] == 0)
0x569: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56a: Stack[-4] = (bool) 1
0x56b: Return(); Pop(2)

0x56c: Push("noaccess")
0x56d: @@ GetProperty(Stack[-1], Stack[-2])
0x56e: Pop(1)
0x56f: Push((int) 0)
0x570: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x571: Return(); Pop(2)

0x572: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x573: Pop(0); Push((bool) Stack[-15] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: Return(); Pop(14)

0x576: @ IsDead(Stack[-7])
0x577: Pop(0)
0x578: Push(Stack[-7])
0x579: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x57a: Return(); Pop(14)

0x57b: @ GetSecondaryAnimationType(Stack[-6])
0x57c: Pop(0)
0x57d: Push((int) 0)
0x57e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x580: Return(); Pop(14)

0x581: @@ GetPosition(Stack[-5])
0x582: Pop(0)
0x583: @ GetPosition(Stack[-4])
0x584: Pop(0)
0x585: @ GetDirection(Stack[-3])
0x586: Pop(0)
0x587: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x588: Push(CvectorIndex(Stack[-2], 0))
0x589: Push(CvectorIndex(Stack[-4], 0))
0x58a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58b: Push(CvectorIndex(Stack[-3], 2))
0x58c: Push(CvectorIndex(Stack[-5], 2))
0x58d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x58f: Push((int) 0)
0x590: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x592: Stack[-1] = "fhit"
0x593: GOTO 0x595

0x594: Stack[-1] = "bhit"
0x595: Push("hit_react")
0x596: Push("1")
0x597: Pop(1); Push(Stack[-3] + Stack[-1]);
0x598: Push("2")
0x599: Pop(1); Push(Stack[-4] + Stack[-1]);
0x59a: Push((int) -10)
0x59b: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(4)
0x59d: Return(); Pop(14)

0x59e: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x59f: PushEmpty(bool)
0x5a0: Stack[-1] = (bool) 0
0x5a1: PushEmpty(bool)
0x5a2: Stack[-1] = (bool) 0
0x5a3: Push(Stack[-23])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a5: Push((int) 4)
0x5a6: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: Stack[-1] = (bool) 1
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5aa: Push((int) 5)
0x5ab: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Stack[-1] = (bool) 1
0x5ae: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5af: PushEmpty(cvector, cvector)
0x5b0: PushEmpty(cvector, object)
0x5b1: Stack[-1] = Stack[-25]
0x5b2: Call2 0x4d0

0x5b3: Stack[-3] = Stack[-2]
0x5b4: Pop(2)
0x5b5: Call2 0x635

0x5b6: Stack[-11] = Stack[-2]
0x5b7: Pop(2)
0x5b8: @ CreateVectorVector(Stack[-8])
0x5b9: Pop(0)
0x5ba: Stack[-7] = (int) 1
0x5bb: Push("hit")
0x5bc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5bd: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5be: Pop(1)
0x5bf: Pop(0); Push((bool) Stack[-6] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: GOTO 0x5cb

0x5c2: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5c3: Push((float)0.70711)
0x5c4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: @@ add(Stack[-5])
0x5c7: Pop(0)
0x5c8: Push((int) 1)
0x5c9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5ca: GOTO 0x5bb

0x5cb: @@ size(Stack[-3])
0x5cc: Pop(0)
0x5cd: Push(Stack[-3])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5cf: @ irand(Stack[-2], Stack[-3])
0x5d0: Pop(0)
0x5d1: @@ get(Stack[-1], Stack[-2])
0x5d2: Pop(0)
0x5d3: PushEmpty(object, int, float, cvector, cvector)
0x5d4: Stack[-5] = Stack[-26]
0x5d5: Stack[-4] = Stack[-25]
0x5d6: Stack[-3] = Stack[-24]
0x5d7: Stack[-2] = Stack[-6]
0x5d8: Stack[-1] = -Stack[-14]; Pop(0);
0x5d9: Call2 0x5e2

0x5da: Pop(5)
0x5db: Return(); Pop(18)

0x5dc: Stack[-8] = 0
0x5dd: PushEmpty(object)
0x5de: Stack[-1] = Stack[-22]
0x5df: Call2 0x572

0x5e0: Pop(1)
0x5e1: Return(); Pop(18)

0x5e2: PushEmpty(object, object, object, object)
0x5e3: @ GetScene(Stack[-2])
0x5e4: Pop(0)
0x5e5: Push("scripted")
0x5e6: Push("blood_dir.xml")
0x5e7: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5e8: Pop(2)
0x5e9: PushEmpty(object)
0x5ea: Stack[-1] = Stack[-10]
0x5eb: Call2 0x572

0x5ec: Pop(1)
0x5ed: Return(); Pop(4)

0x5ee: Stack[-1] = 0
0x5ef: Stack[-2] = 0
0x5f0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5f1: @@ GetPosition(Stack[-3])
0x5f2: Pop(0)
0x5f3: @ GetPosition(Stack[-2])
0x5f4: Pop(0)
0x5f5: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5f6: Push(CvectorIndex(Stack[-1], 0))
0x5f7: Push(CvectorIndex(Stack[-2], 2))
0x5f8: @ RotateAsync(Stack[-2], Stack[-1])
0x5f9: Pop(2)
0x5fa: Return(); Pop(6)

0x5fb: PushEmpty(float, cvector, float, cvector)
0x5fc: @@ GetEyesHeight(Stack[-2])
0x5fd: Pop(0)
0x5fe: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5ff: Push(CvectorIndex(Stack[-1], 1))
0x600: Stack[-1] = Stack[-3]
0x601: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x602: Push("head")
0x603: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x604: Pop(1)
0x605: Return(); Pop(4)

0x606: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x607: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x608: Pop(0)
0x609: Pop(0); Push((bool) Stack[-8] == 0)
0x60a: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x60b: Stack[-7] = (int) 0
0x60c: Push((int) 1)
0x60d: Pop(1); Push(Stack[-8] + Stack[-1]);
0x60e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x60f: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x610: Pop(1)
0x611: Pop(0); Push((bool) Stack[-6] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: GOTO 0x617

0x614: Push((int) 1)
0x615: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x616: GOTO 0x60c

0x617: Pop(0); Push((bool) Stack[-7] == 0)
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: Return(); Pop(16)

0x61a: @ irand(Stack[-5], Stack[-7])
0x61b: Pop(0)
0x61c: Push((int) 1)
0x61d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x61e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x61f: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x620: Pop(0)
0x621: Push(Stack[-4])
0x622: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x623: @ GetEyesHeight(Stack[-3])
0x624: Pop(0)
0x625: @ GetDirection(Stack[-2])
0x626: Pop(0)
0x627: Push((int) 50)
0x628: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x629: Push(CvectorIndex(Stack[-1], 1))
0x62a: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x62b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x62c: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x62d: Pop(0)
0x62e: Return(); Pop(16)

0x62f: PushEmpty(object, object)
0x630: @ self(Stack[-1])
0x631: Pop(0)
0x632: Stack[-3] = Stack[-1]
0x633: Return(); Pop(2)

0x634: Stack[-1] = 0
0x635: PushEmpty(float, float)
0x636: Pop(0); Push(Stack[-3] | Stack[-3]);
0x637: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x638: Push((float)0.0)
0x639: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x63c: Return(); Pop(2)

0x63d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x63e: Return(); Pop(2)

0x63f: PushEmpty(cvector, cvector)
0x640: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x641: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x642: Return(); Pop(2)

0x643: PushEmpty()
0x644: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x646: Stack[-3] = Stack[-2]
0x647: GOTO 0x649

0x648: Stack[-3] = Stack[-1]
0x649: Return(); Pop(0)

0x64a: PushEmpty()
0x64b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x64c: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64d: Stack[-4] = Stack[-2]
0x64e: Return(); Pop(0)

0x64f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-4] = Stack[-1]
0x652: Return(); Pop(0)

0x653: Stack[-4] = Stack[-3]
0x654: Return(); Pop(0)

0x655: PushEmpty(object, object)
0x656: @ CreateFloatVector(Stack[-1])
0x657: Pop(0)
0x658: @@ add(Stack[-3])
0x659: Pop(0)
0x65a: Push((int) 0)
0x65b: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65d: Push((float)0.7)
0x65e: Push((int) 500)
0x65f: @ RumblePlay(Stack[-2], Stack[-1])
0x660: Pop(2)
0x661: Push((int) 15)
0x662: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x663: Pop(1)
0x664: Return(); Pop(2)

0x665: Stack[-1] = 0
0x666: PushEmpty(bool, bool)
0x667: @ IsPlayerActor(Stack[-3], Stack[-1])
0x668: Pop(0)
0x669: Push(Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66b: Push("attack")
0x66c: @ PlayGlobalMusic(Stack[-1])
0x66d: Pop(1)
0x66e: Return(); Pop(2)

0x66f: PushEmpty(object, object)
0x670: @ GetScene(Stack[-1])
0x671: Pop(0)
0x672: Push("battle")
0x673: PushEmpty(object)
0x674: Call2 0x62f

0x675: Pop(0)
0x676: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x677: Pop(2)
0x678: Return(); Pop(2)

0x679: Stack[-1] = 0
0x67a: PushEmpty(int, int)
0x67b: Push("branch")
0x67c: @ GetVariable(Stack[-1], Stack[-2])
0x67d: Pop(1)
0x67e: Stack[-3] = Stack[-1]
0x67f: Return(); Pop(2)

0x680: PushEmpty()
0x681: PushEmpty(int)
0x682: Call2 0x67a

0x683: Pop(0)
0x684: Push((int) 1)
0x685: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x687: @ WorkWithCorpse(Stack[-1])
0x688: Pop(0)
0x689: GOTO 0x68c

0x68a: @ Barter(Stack[-1])
0x68b: Pop(0)
0x68c: Return(); Pop(0)

0x68d: PushEmpty(object, int, bool, object, int, bool)
0x68e: @ CreateInvItem(Stack[-3])
0x68f: Pop(0)
0x690: @@ SetItemName(Stack[-7])
0x691: Pop(0)
0x692: Push("Organ")
0x693: Push((int) 1)
0x694: @@ SetProperty(Stack[-2], Stack[-1])
0x695: Pop(2)
0x696: @@ GetItemID(Stack[-2])
0x697: Pop(0)
0x698: Push((int) 0)
0x699: Push((int) 1)
0x69a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x69b: Pop(2)
0x69c: Return(); Pop(6)

0x69d: Stack[-3] = 0
0x69e: PushEmpty(int)
0x69f: Call2 0x67a

0x6a0: Pop(0)
0x6a1: Push((int) 1)
0x6a2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: Return(); Pop(0)

0x6a5: PushEmpty(string)
0x6a6: Stack[-1] = "liver"
0x6a7: Call2 0x68d

0x6a8: Pop(1)
0x6a9: PushEmpty(string)
0x6aa: Stack[-1] = "kidney"
0x6ab: Call2 0x68d

0x6ac: Pop(1)
0x6ad: PushEmpty(string)
0x6ae: Stack[-1] = "heart"
0x6af: Call2 0x68d

0x6b0: Pop(1)
0x6b1: PushEmpty(string)
0x6b2: Stack[-1] = "blood"
0x6b3: Call2 0x68d

0x6b4: Pop(1)
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty(object, object)
0x6b7: @ GetScene(Stack[-1])
0x6b8: Pop(0)
0x6b9: PushEmpty(object)
0x6ba: Call2 0x62f

0x6bb: Pop(0)
0x6bc: @@ RemoveStationaryActor(Stack[-1])
0x6bd: Pop(1)
0x6be: Return(); Pop(2)

0x6bf: Stack[-1] = 0
0x6c0: PushEmpty(bool, bool)
0x6c1: Push("revolver_ammo")
0x6c2: Push((int) 0)
0x6c3: Push((int) 2)
0x6c4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(3)
0x6c6: Push("alpha_pills")
0x6c7: Push((int) 0)
0x6c8: Push((int) 12)
0x6c9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: PushEmpty()
0x6cc: Call2 0x69e

0x6cd: Pop(0)
0x6ce: PushEmpty()
0x6cf: Call2 0x6b6

0x6d0: Pop(0)
0x6d1: PushEmpty(object)
0x6d2: Stack[-1] = Stack[-4]
0x6d3: Push(-1, 0); TaskCall(3)
0x6d4: Call2 0x430

0x6d5: Pop(-1, 0); TaskReturn
0x6d6: Pop(1)
0x6d7: Return(); Pop(2)

0x6d8: PushEmpty()
0x6d9: PushEmpty(object, int, float)
0x6da: Stack[-3] = Stack[-7]
0x6db: Stack[-2] = Stack[-6]
0x6dc: Stack[-1] = Stack[-5]
0x6dd: Call2 0x59e

0x6de: Pop(3)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty()
0x6e1: PushEmpty(object, int, float, cvector, cvector)
0x6e2: Stack[-5] = Stack[-11]
0x6e3: Stack[-4] = Stack[-10]
0x6e4: Stack[-3] = Stack[-9]
0x6e5: Stack[-2] = Stack[-7]
0x6e6: Stack[-1] = Stack[-6]
0x6e7: Call2 0x5e2

0x6e8: Pop(5)
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty(float, float)
0x6eb: Push("health")
0x6ec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6ee: Push("health")
0x6ef: @ GetProperty(Stack[-1], Stack[-2])
0x6f0: Pop(1)
0x6f1: Push((int) 0)
0x6f2: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f4: @ SignalDeath(Stack[-4])
0x6f5: Pop(0)
0x6f6: Return(); Pop(2)

0x6f7: PushEmpty()
0x6f8: PushEmpty(object)
0x6f9: Stack[-1] = Stack[-2]
0x6fa: Call2 0x6c0

0x6fb: Pop(1)
0x6fc: Return(); Pop(0)

