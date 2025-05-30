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
	GetProperty
	SetProperty
	health
	armor
	armor_
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
	reputation
	battle

Import:
	SensePlayerOnly (1 args)
	Hold (0 args)
	IsPlayerActor (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
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
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetDirection (1 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_17 Op = 0xc Vars = (object)
		EVENT_6 Op = 0x17 Vars = ()
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x2f Vars = ()
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x2cb Vars = ()
		EVENT_7 Op = 0x302 Vars = (int)
		EVENT_1 Op = 0x31d Vars = (object)
		EVENT_2 Op = 0x32c Vars = (object)
		EVENT_10 Op = 0x3b2 Vars = (object)
		EVENT_41 Op = 0x3bd Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0x3d1 Vars = ()
		EVENT_22 Op = 0x455 Vars = (object, int, float, float)
		EVENT_16 Op = 0x457 Vars = (object, string)
		EVENT_41 Op = 0x459 Vars = (object)

Events:
EVENT_22 Op = 0x664 Vars = (object, int, float, float)
EVENT_43 Op = 0x66c Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x676 Vars = (object, string)
EVENT_41 Op = 0x683 Vars = (object)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Push(-0, 6); TaskCall(1)
0x5: Call2 0x1d

0x6: Pop(-0, 6); TaskReturn
0x7: Pop(0)
0x8: @ Hold()
0x9: Pop(0)
0xa: GOTO 0x8

0xb: Return(); Pop(0)

0xc: PushEmpty(bool, bool)
0xd: @ IsPlayerActor(Stack[-3], Stack[-1])
0xe: Pop(0)
0xf: Push(Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: PushEmpty()
0x12: Push(-0, 6); TaskCall(1)
0x13: Call2 0x1d

0x14: Pop(-0, 6); TaskReturn
0x15: Pop(0)
0x16: Return(); Pop(2)

0x17: PushEmpty(object)
0x18: Call2 0x5de

0x19: Pop(0)
0x1a: @ RemoveActor(Stack[-1])
0x1b: Pop(1)
0x1c: Return(); Pop(0)

0x1d: PushEmpty(object, object)
0x1e: Push("player")
0x1f: @ FindActor(Stack[-2], Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(object, bool, float)
0x22: Stack[-3] = Stack[-4]
0x23: Stack[-2] = (bool) 1
0x24: Stack[-1] = (float) 180.0
0x25: Call2 0x35

0x26: Pop(3)
0x27: Return(); Pop(2)

0x28: Stack[-1] = 0
0x29: PushEmpty()
0x2a: Stack[-3] = (float) 0.1
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Stack[-3] = (int) 0
0x2e: Return(); Pop(0)

0x2f: PushEmpty(object)
0x30: Call2 0x5de

0x31: Pop(0)
0x32: @ RemoveActor(Stack[-1])
0x33: Pop(1)
0x34: Return(); Pop(0)

0x35: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x36: PushEmpty()
0x37: Call2 0x11a

0x38: Pop(0)
0x39: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x3a: Push("@GetAttackDistance")
0x3b: Push((int) 1)
0x3c: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x3d: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3e: @@ GetAttackDistance(Stack[-11])
0x3f: Pop(0)
0x40: Push((int) 50)
0x41: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x42: GOTO 0x44

0x43: Stack[-11] = Stack[-23]
0x44: Push((int) 150)
0x45: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[-11] = (int) 150
0x48: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x49: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x4a: @ IsPlayerActor(Stack[-0], Stack[-8])
0x4b: Pop(0)
0x4c: Push(Stack[-8])
0x4d: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4e: Push("attack")
0x4f: @ PlayGlobalMusic(Stack[-1])
0x50: Pop(1)
0x51: PushEmpty(object)
0x52: Call2 0x5de

0x53: Pop(0)
0x54: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x55: Pop(1)
0x56: Push(Stack[-24])
0x57: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x58: Stack[-7] = (bool) 0
0x59: GOTO 0x5b

0x5a: Stack[-7] = (bool) 1
0x5b: Push((float)400.0)
0x5c: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x5d: PushEmpty(bool)
0x5e: Stack[-1] = (bool) 0
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x509

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x68: PushEmpty()
0x69: Call2 0x2b7

0x6a: Pop(0)
0x6b: @@ GetPFPosition(Stack[-10])
0x6c: Pop(0)
0x6d: @ GetPFPosition(Stack[-9])
0x6e: Pop(0)
0x6f: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x70: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x71: Pop(0); Push(Stack[-6] * Stack[-6]);
0x72: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x74: PushEmpty(bool, object, float, float, bool, bool)
0x75: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x76: Stack[-4] = Stack[-17]
0x77: Stack[-3] = (float) 3000.0
0x78: Stack[-2] = (bool) 1
0x79: Stack[-1] = (bool) 0
0x7a: Push(-6, 3); TaskCall(2)
0x7b: Call2 0x2d1

0x7c: Pop(-6, 3); TaskReturn
0x7d: Pop(5)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: GOTO 0x109

0x81: Stack[-7] = (bool) 0
0x82: GOTO 0x108

0x83: Pop(0); Push(Stack[-23] * Stack[-23]);
0x84: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0x86: @@ GetPFPosition(Stack[-3])
0x87: Pop(0)
0x88: @ CanReachByPF(Stack[-2], Stack[-3])
0x89: Pop(0)
0x8a: Pop(0); Push((bool) Stack[-2] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x8c: PushEmpty(bool, object, float, float, bool, bool)
0x8d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x8e: Stack[-4] = Stack[-17]
0x8f: Stack[-3] = (float) 3000.0
0x90: Stack[-2] = (bool) 1
0x91: Stack[-1] = (bool) 0
0x92: Push(-6, 3); TaskCall(2)
0x93: Call2 0x2d1

0x94: Pop(-6, 3); TaskReturn
0x95: Pop(5)
0x96: Pop(1); Push((bool) Stack[-1] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x109

0x99: Stack[-7] = (bool) 0
0x9a: GOTO 0x5d

0x9b: Pop(0); Push((bool) Stack[-7] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0x9d: PushEmpty(object)
0x9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f: Call2 0x59f

0xa0: Pop(1)
0xa1: Push("all")
0xa2: Push("attack_on")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: @ WaitForAnimEnd()
0xa6: Pop(0)
0xa7: PushEmpty()
0xa8: Call2 0x2b7

0xa9: Pop(0)
0xaa: @ StopAsync()
0xab: Pop(0)
0xac: Stack[-7] = (bool) 1
0xad: PushEmpty(bool, object)
0xae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf: Call2 0x509

0xb0: Pop(1)
0xb1: Pop(1); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0x109

0xb4: @ rand(Stack[-1])
0xb5: Pop(0)
0xb6: PushEmpty(bool)
0xb7: Stack[-1] = (bool) 1
0xb8: Push((float)0.25)
0xb9: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbb: PushEmpty(bool)
0xbc: Call2 0x28c

0xbd: Pop(0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-1] = (bool) 0
0xc0: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc1: @ Face(Stack[-0])
0xc2: Pop(0)
0xc3: PushEmpty()
0xc4: Call2 0x2be

0xc5: Pop(0)
0xc6: Push("all")
0xc7: Push("attack_stay")
0xc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: PushEmpty(bool, float)
0xcb: Stack[-1] = Stack[-25]
0xcc: Call2 0x208

0xcd: Pop(2)
0xce: @ StopAsync()
0xcf: Pop(0)
0xd0: GOTO 0xff

0xd1: @ Face(Stack[-0])
0xd2: Pop(0)
0xd3: Push("all")
0xd4: Push("fjump")
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: @ WaitForAnimEnd()
0xd8: Pop(0)
0xd9: PushEmpty()
0xda: Call2 0x2b7

0xdb: Pop(0)
0xdc: Push(CVector(0.0, 0.0, 0.0))
0xdd: @ SetSpeed(Stack[-1])
0xde: Pop(1)
0xdf: @ Stop()
0xe0: Pop(0)
0xe1: @ StopAsync()
0xe2: Pop(0)
0xe3: PushEmpty(bool)
0xe4: Call2 0x28c

0xe5: Pop(0)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x509

0xeb: Pop(1)
0xec: Pop(1); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: GOTO 0x109

0xef: @@ GetPFPosition(Stack[-10])
0xf0: Pop(0)
0xf1: @ GetPFPosition(Stack[-9])
0xf2: Pop(0)
0xf3: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xf4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf5: Pop(0); Push(Stack[-23] * Stack[-23]);
0xf6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf8: PushEmpty(bool, float)
0xf9: Stack[-1] = Stack[-25]
0xfa: Call2 0x164

0xfb: Pop(1)
0xfc: Pop(1); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: GOTO 0x109

0xff: GOTO 0x108

0x100: PushEmpty(bool, float)
0x101: Stack[-1] = Stack[-25]
0x102: Call2 0x164

0x103: Pop(1)
0x104: Pop(1); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: GOTO 0x109

0x107: Stack[-7] = (bool) 1
0x108: GOTO 0x5d

0x109: @ WaitForAnimEnd()
0x10a: Pop(0)
0x10b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10c: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10d: Return(); Pop(22)

0x10e: Push("all")
0x10f: Push("attack_off")
0x110: @ PlayAnimation(Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: @ WaitForAnimEnd()
0x113: Pop(0)
0x114: Push(Stack[-8])
0x115: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x116: Push((float)2.0)
0x117: @ Sleep(Stack[-1])
0x118: Pop(1)
0x119: Return(); Pop(22)

0x11a: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x11b: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x11c: Push("all")
0x11d: Push("attack_begin")
0x11e: Push((int) 1)
0x11f: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x120: Pop(2); Push(Stack[-2] + Stack[-1]);
0x121: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: Pop(0); Push((bool) Stack[-3] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: GOTO 0x129

0x126: Push((int) 1)
0x127: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x128: GOTO 0x11c

0x129: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x12a: Push("attack")
0x12b: Push((int) 1)
0x12c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x12d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x12f: Pop(1)
0x130: Pop(0); Push((bool) Stack[-2] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: GOTO 0x136

0x133: Push((int) 1)
0x134: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x135: GOTO 0x12a

0x136: Push("all")
0x137: Push("bjump")
0x138: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: Push(CvectorIndex(Stack[-1], 2))
0x13b: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x13c: Return(); Pop(6)

0x13d: PushEmpty(object, float, float, object, float, float)
0x13e: Push((float)0.9)
0x13f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x140: @ GetVictim(Stack[-1], Stack[-4])
0x141: Pop(1)
0x142: @ ReportAttack(Stack[-0])
0x143: Pop(0)
0x144: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x145: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x146: PushEmpty(float, object, int)
0x147: Stack[-2] = Stack[-6]
0x148: Stack[-1] = Stack[-10]
0x149: Call2 0x29

0x14a: Stack[-5] = Stack[-3]
0x14b: Pop(3)
0x14c: PushEmpty(float, object, float, int)
0x14d: Stack[-3] = Stack[-7]
0x14e: Stack[-2] = Stack[-6]
0x14f: PushEmpty(int, object, int)
0x150: Stack[-2] = Stack[-10]
0x151: Stack[-1] = Stack[-14]
0x152: Call2 0x2c

0x153: Stack[-4] = Stack[-3]
0x154: Pop(3)
0x155: Call2 0x497

0x156: Stack[-5] = Stack[-4]
0x157: Pop(4)
0x158: PushEmpty(int)
0x159: Call2 0x2bc

0x15a: Pop(0)
0x15b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x15c: Pop(1)
0x15d: PushEmpty(object, float)
0x15e: Stack[-2] = Stack[-5]
0x15f: Stack[-1] = Stack[-3]
0x160: Call2 0x2c3

0x161: Pop(2)
0x162: Return(); Pop(6)

0x163: Stack[-3] = 0
0x164: PushEmpty(int, bool, int, string, int, bool, int, string)
0x165: PushEmpty()
0x166: Call2 0x2b7

0x167: Pop(0)
0x168: @ irand(Stack[-4], Stack[-1])
0x169: Pop(0)
0x16a: Push((int) 1)
0x16b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x16c: @ Face(Stack[-0])
0x16d: Pop(0)
0x16e: Push((bool) 1)
0x16f: @ SetAttackState(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty()
0x172: Call2 0x647

0x173: Pop(0)
0x174: Push("all")
0x175: Push("attack_begin")
0x176: Pop(1); Push(Stack[-1] + Stack[-6]);
0x177: @ PlayAnimation(Stack[-2], Stack[-1])
0x178: Pop(2)
0x179: @ WaitForAnimEnd()
0x17a: Pop(0)
0x17b: PushEmpty()
0x17c: Call2 0x297

0x17d: Pop(0)
0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x180: Call2 0x509

0x181: Pop(1)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x184: @ StopAsync()
0x185: Pop(0)
0x186: Stack[-10] = (bool) 0
0x187: Return(); Pop(8)

0x188: PushEmpty(float, int)
0x189: Stack[-2] = Stack[-11]
0x18a: Stack[-1] = Stack[-6]
0x18b: Call2 0x13d

0x18c: Pop(2)
0x18d: Push("all")
0x18e: Push("attack_middle")
0x18f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x190: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: Push(Stack[-3])
0x193: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x194: PushEmpty()
0x195: Call2 0x647

0x196: Pop(0)
0x197: Push("all")
0x198: Push("attack_middle")
0x199: Pop(1); Push(Stack[-1] + Stack[-6]);
0x19a: @ PlayAnimation(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: @ WaitForAnimEnd()
0x19d: Pop(0)
0x19e: PushEmpty()
0x19f: Call2 0x2b7

0x1a0: Pop(0)
0x1a1: PushEmpty(bool, object)
0x1a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a3: Call2 0x509

0x1a4: Pop(1)
0x1a5: Pop(1); Push((bool) Stack[-1] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a7: @ StopAsync()
0x1a8: Pop(0)
0x1a9: Stack[-10] = (bool) 0
0x1aa: Return(); Pop(8)

0x1ab: PushEmpty(float, int)
0x1ac: Stack[-2] = Stack[-11]
0x1ad: Stack[-1] = Stack[-6]
0x1ae: Call2 0x13d

0x1af: Pop(2)
0x1b0: Stack[-2] = (int) 1
0x1b1: Push("attack_middle")
0x1b2: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1b3: Push("_")
0x1b4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b5: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x1b6: Push("all")
0x1b7: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x1b8: Pop(1)
0x1b9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1d9

0x1bc: PushEmpty()
0x1bd: Call2 0x647

0x1be: Pop(0)
0x1bf: Push("all")
0x1c0: @ PlayAnimation(Stack[-1], Stack[-2])
0x1c1: Pop(1)
0x1c2: @ WaitForAnimEnd()
0x1c3: Pop(0)
0x1c4: PushEmpty()
0x1c5: Call2 0x2b7

0x1c6: Pop(0)
0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0x509

0x1ca: Pop(1)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cd: @ StopAsync()
0x1ce: Pop(0)
0x1cf: Stack[-10] = (bool) 0
0x1d0: Return(); Pop(8)

0x1d1: PushEmpty(float, int)
0x1d2: Stack[-2] = Stack[-11]
0x1d3: Stack[-1] = Stack[-6]
0x1d4: Call2 0x13d

0x1d5: Pop(2)
0x1d6: Push((int) 1)
0x1d7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1d8: GOTO 0x1b1

0x1d9: Push((bool) 0)
0x1da: @ SetAttackState(Stack[-1])
0x1db: Pop(1)
0x1dc: Push("all")
0x1dd: Push("attack_end")
0x1de: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1df: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: PushEmpty(bool)
0x1e2: Call2 0x2c5

0x1e3: Pop(0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e5: PushEmpty(bool, float)
0x1e6: Stack[-1] = (float) 0.75
0x1e7: Call2 0x1ed

0x1e8: Pop(2)
0x1e9: @ StopAsync()
0x1ea: Pop(0)
0x1eb: Stack[-10] = (bool) 1
0x1ec: Return(); Pop(8)

0x1ed: PushEmpty(float, bool, float, bool)
0x1ee: @ rand(Stack[-2])
0x1ef: Pop(0)
0x1f0: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1f1: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f2: @ IsAnimationPlaying(Stack[-1])
0x1f3: Pop(0)
0x1f4: Pop(0); Push((bool) Stack[-1] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x200

0x1f7: PushEmpty(bool)
0x1f8: Call2 0x24f

0x1f9: Pop(0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fb: Stack[-6] = (bool) 1
0x1fc: Return(); Pop(4)

0x1fd: @ sync()
0x1fe: Pop(0)
0x1ff: GOTO 0x1f2

0x200: GOTO 0x206

0x201: @ WaitForAnimEnd()
0x202: Pop(0)
0x203: PushEmpty()
0x204: Call2 0x2b7

0x205: Pop(0)
0x206: Stack[-6] = (bool) 0
0x207: Return(); Pop(4)

0x208: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x209: @ IsAnimationPlaying(Stack[-5])
0x20a: Pop(0)
0x20b: Pop(0); Push((bool) Stack[-5] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: GOTO 0x22e

0x20e: PushEmpty(bool)
0x20f: Call2 0x24f

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x212: Stack[-12] = (bool) 1
0x213: Return(); Pop(10)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x509

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-12] = (bool) 0
0x21b: Return(); Pop(10)

0x21c: @@ GetPFPosition(Stack[-4])
0x21d: Pop(0)
0x21e: @ GetPFPosition(Stack[-3])
0x21f: Pop(0)
0x220: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x221: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x222: Pop(0); Push(Stack[-11] * Stack[-11]);
0x223: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x225: PushEmpty(bool, float)
0x226: Stack[-1] = Stack[-13]
0x227: Call2 0x164

0x228: Pop(2)
0x229: Stack[-12] = (bool) 1
0x22a: Return(); Pop(10)

0x22b: @ sync()
0x22c: Pop(0)
0x22d: GOTO 0x209

0x22e: PushEmpty()
0x22f: Call2 0x2b7

0x230: Pop(0)
0x231: Stack[-12] = (bool) 0
0x232: Return(); Pop(10)

0x233: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x236: Call2 0x509

0x237: Pop(1)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[-11] = (bool) 0
0x23b: Return(); Pop(10)

0x23c: PushEmpty(bool)
0x23d: Call2 0x28c

0x23e: Pop(0)
0x23f: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x240: @@ GetPFPosition(Stack[-5])
0x241: Pop(0)
0x242: @ GetPFPosition(Stack[-4])
0x243: Pop(0)
0x244: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x245: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x246: @@ GetAttackDistance(Stack[-1])
0x247: Pop(0)
0x248: Push((int) 50)
0x249: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x24a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x24b: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x24c: Return(); Pop(10)

0x24d: Stack[-11] = (bool) 0
0x24e: Return(); Pop(10)

0x24f: PushEmpty(bool)
0x250: Stack[-1] = (bool) 0
0x251: PushEmpty(bool)
0x252: Call2 0x233

0x253: Pop(0)
0x254: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x255: PushEmpty(bool)
0x256: Call2 0x25f

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Stack[-1] = (bool) 1
0x25a: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25b: Stack[-1] = (bool) 1
0x25c: Return(); Pop(0)

0x25d: Stack[-1] = (bool) 0
0x25e: Return(); Pop(0)

0x25f: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x260: @ GetScene(Stack[-5])
0x261: Pop(0)
0x262: Stack[-4] = (bool) 0
0x263: PushEmpty(cvector, object)
0x264: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x265: Call2 0x469

0x266: Pop(1)
0x267: Pop(1); Push(( -Stack[-1])
0x268: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x269: Pop(1)
0x26a: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x289

0x26d: @ Face(Stack[-0])
0x26e: Pop(0)
0x26f: Push("all")
0x270: Push("bjump")
0x271: @ PlayAnimation(Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: @@ GetPFPosition(Stack[-2])
0x274: Pop(0)
0x275: @ GetPFPosition(Stack[-1])
0x276: Pop(0)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: PushEmpty()
0x27a: Call2 0x2b7

0x27b: Pop(0)
0x27c: @ StopAsync()
0x27d: Pop(0)
0x27e: Push(CVector(0.0, 0.0, 0.0))
0x27f: @ SetSpeed(Stack[-1])
0x280: Pop(1)
0x281: Stack[-4] = (bool) 1
0x282: PushEmpty(bool)
0x283: Call2 0x233

0x284: Pop(0)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x289

0x288: GOTO 0x263

0x289: Stack[-11] = Stack[-4]
0x28a: Return(); Pop(10)

0x28b: Stack[-5] = 0
0x28c: PushEmpty(bool, bool)
0x28d: Push("IsAttacking")
0x28e: Push((int) 1)
0x28f: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x290: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x291: @@ IsAttacking(Stack[-1])
0x292: Pop(0)
0x293: Stack[-3] = Stack[-1]
0x294: Return(); Pop(2)

0x295: Stack[-3] = (bool) 0
0x296: Return(); Pop(2)

0x297: PushEmpty(float, int, float, int)
0x298: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: Return(); Pop(4)

0x29b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x29c: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29d: Push((int) -1)
0x29e: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x29f: Push((int) 0)
0x2a0: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Return(); Pop(4)

0x2a3: @ rand(Stack[-2])
0x2a4: Pop(0)
0x2a5: PushEmpty(float)
0x2a6: Call2 0x2c9

0x2a7: Pop(0)
0x2a8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2aa: @ irand(Stack[-1], Stack[-2])
0x2ab: Pop(0)
0x2ac: Push((int) 1)
0x2ad: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ae: Push("attack")
0x2af: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2b0: @ Speak(Stack[-1])
0x2b1: Pop(1)
0x2b2: PushEmpty(int)
0x2b3: Call2 0x2c7

0x2b4: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x2b5: Pop(1)
0x2b6: Return(); Pop(4)

0x2b7: PushEmpty(object)
0x2b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b9: Call2 0x63e

0x2ba: Pop(1)
0x2bb: Return(); Pop(0)

0x2bc: Stack[-1] = (int) 0
0x2bd: Return(); Pop(0)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "attack_stay"
0x2c0: Call2 0x5b5

0x2c1: Pop(1)
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: Return(); Pop(0)

0x2c5: Stack[-1] = (bool) 1
0x2c6: Return(); Pop(0)

0x2c7: Stack[-1] = (int) 1
0x2c8: Return(); Pop(0)

0x2c9: Stack[-1] = (float) 0.5
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(object)
0x2cc: Call2 0x5de

0x2cd: Pop(0)
0x2ce: @ RemoveActor(Stack[-1])
0x2cf: Pop(1)
0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(bool, bool, bool, bool)
0x2d2: PushEmpty(object)
0x2d3: Stack[-1] = Stack[-10]
0x2d4: Call2 0x63e

0x2d5: Pop(1)
0x2d6: Push((int) 1)
0x2d7: Push((int) 5)
0x2d8: @ SetTimer(Stack[-2], Stack[-1])
0x2d9: Pop(2)
0x2da: @ CanSee(Stack[-2], Stack[-9])
0x2db: Pop(0)
0x2dc: Push(Stack[-2])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2de: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2df: PushEmpty(object)
0x2e0: Stack[-1] = Stack[-10]
0x2e1: Call2 0x5aa

0x2e2: Pop(1)
0x2e3: GOTO 0x2e5

0x2e4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[-11]
0x2e7: Call2 0x470

0x2e8: Pop(1)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ea: PushEmpty(object)
0x2eb: Call2 0x5de

0x2ec: Pop(0)
0x2ed: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x2ee: Pop(1)
0x2ef: PushEmpty(bool, object, float, float, bool, bool)
0x2f0: Stack[-5] = Stack[-15]
0x2f1: Stack[-4] = Stack[-14]
0x2f2: Stack[-3] = Stack[-13]
0x2f3: Stack[-2] = Stack[-12]
0x2f4: Stack[-1] = Stack[-11]
0x2f5: Call2 0x33a

0x2f6: Stack[-7] = Stack[-6]
0x2f7: Pop(6)
0x2f8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fa: Push("head")
0x2fb: @ UnlookAsync(Stack[-1])
0x2fc: Pop(1)
0x2fd: Push((int) 1)
0x2fe: @ KillTimer(Stack[-1])
0x2ff: Pop(1)
0x300: Stack[-10] = Stack[-1]
0x301: Return(); Pop(4)

0x302: PushEmpty()
0x303: Push((int) 1)
0x304: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: PushEmpty(object)
0x307: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x308: Call2 0x63e

0x309: Pop(1)
0x30a: GOTO 0x30f

0x30b: PushEmpty(int)
0x30c: Stack[-1] = Stack[-2]
0x30d: Call2 0x3a0

0x30e: Pop(1)
0x30f: Return(); Pop(0)

0x310: Push((int) 1)
0x311: @ KillTimer(Stack[-1])
0x312: Pop(1)
0x313: Push( Stack[2 + Tasks[-1].StackPointer] )
0x314: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x315: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x316: Push("head")
0x317: @ UnlookAsync(Stack[-1])
0x318: Pop(1)
0x319: PushEmpty()
0x31a: Call2 0x3b6

0x31b: Pop(0)
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: PushEmpty(bool)
0x31f: Stack[-1] = (bool) 0
0x320: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x321: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x322: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Stack[-1] = (bool) 1
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x327: PushEmpty(object)
0x328: Stack[-1] = Stack[-2]
0x329: Call2 0x5aa

0x32a: Pop(1)
0x32b: Return(); Pop(0)

0x32c: PushEmpty()
0x32d: PushEmpty(bool)
0x32e: Stack[-1] = (bool) 0
0x32f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x330: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x331: Push( Stack[2 + Tasks[-1].StackPointer] )
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: Stack[-1] = (bool) 1
0x334: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x335: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x336: Push("head")
0x337: @ UnlookAsync(Stack[-1])
0x338: Pop(1)
0x339: Return(); Pop(0)

0x33a: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x33b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x33c: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x33d: Stack[-7] = Stack[-17]
0x33e: PushEmpty(bool, object)
0x33f: Stack[-1] = Stack[-23]
0x340: Call2 0x3c6

0x341: Pop(1)
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-22] = (bool) 0
0x345: Return(); Pop(16)

0x346: @@ GetPosition(Stack[-5])
0x347: Pop(0)
0x348: @ GetPosition(Stack[-4])
0x349: Pop(0)
0x34a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x34b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x34c: PushEmpty(bool)
0x34d: Stack[-1] = (bool) 0
0x34e: Push((int) 0)
0x34f: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x351: Pop(0); Push(Stack[-20] * Stack[-20]);
0x352: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Stack[-1] = (bool) 1
0x355: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x356: @ Stop()
0x357: Pop(0)
0x358: Stack[-22] = (bool) 0
0x359: Return(); Pop(16)

0x35a: Pop(0); Push(Stack[-20] * Stack[-20]);
0x35b: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x35d: @@ GetPFPosition(Stack[-5])
0x35e: Pop(0)
0x35f: @ FindPathTo(Stack[-1], Stack[-5])
0x360: Pop(0)
0x361: Pop(0); Push(( Stack[-1] != 0 )
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-6] = Stack[-1]
0x364: Stack[-1] = 0
0x365: Pop(0); Push(( Stack[-6] != 0 )
0x366: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x367: Push(Stack[-7])
0x368: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x369: Stack[-7] = (bool) 0
0x36a: @ RotatePath(Stack[-6], Stack[-8])
0x36b: Pop(0)
0x36c: Pop(0); Push((bool) Stack[-8] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x39e

0x36f: Push((int) 0)
0x370: Push((float)0.3)
0x371: @ SetTimer(Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: PushEmpty(string)
0x374: Call2 0x3cd

0x375: Pop(0)
0x376: PushEmpty(string)
0x377: Call2 0x3cf

0x378: Pop(0)
0x379: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: Pop(0); Push((bool) Stack[-8] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x37e: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37f: Stack[-6] = 0
0x380: GOTO 0x39e

0x381: GOTO 0x383

0x382: GOTO 0x39d

0x383: GOTO 0x385

0x384: Stack[-6] = 0
0x385: GOTO 0x396

0x386: Push((int) 0)
0x387: @ KillTimer(Stack[-1])
0x388: Pop(1)
0x389: Push((float)0.5)
0x38a: @ Sleep(Stack[-1], Stack[-9])
0x38b: Pop(1)
0x38c: Pop(0); Push((bool) Stack[-8] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: Stack[-6] = 0
0x391: GOTO 0x39e

0x392: Push((int) 0)
0x393: Push((float)0.3)
0x394: @ SetTimer(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: Stack[-1] = 0
0x397: GOTO 0x39c

0x398: Push((int) 0)
0x399: @ KillTimer(Stack[-1])
0x39a: Pop(1)
0x39b: GOTO 0x39e

0x39c: Stack[-6] = 0
0x39d: GOTO 0x33e

0x39e: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x39f: Return(); Pop(16)

0x3a0: PushEmpty()
0x3a1: Push((int) 0)
0x3a2: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Return(); Pop(0)

0x3a5: PushEmpty(bool, object)
0x3a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a7: Call2 0x3c6

0x3a8: Pop(1)
0x3a9: Pop(1); Push((bool) Stack[-1] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3ac: Push((int) 0)
0x3ad: @ KillTimer(Stack[-1])
0x3ae: Pop(1)
0x3af: @ Stop()
0x3b0: Pop(0)
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty()
0x3b3: @ RequestClearPath(Stack[-1])
0x3b4: Pop(0)
0x3b5: Return(); Pop(0)

0x3b6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3b7: Push((int) 0)
0x3b8: @ KillTimer(Stack[-1])
0x3b9: Pop(1)
0x3ba: @ Stop()
0x3bb: Pop(0)
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty()
0x3be: PushEmpty()
0x3bf: Call2 0x310

0x3c0: Pop(0)
0x3c1: PushEmpty(object)
0x3c2: Stack[-1] = Stack[-2]
0x3c3: Call2 0x683

0x3c4: Pop(1)
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty()
0x3c7: PushEmpty(bool, object)
0x3c8: Stack[-1] = Stack[-3]
0x3c9: Call2 0x509

0x3ca: Stack[-4] = Stack[-2]
0x3cb: Pop(2)
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = "walk"
0x3ce: Return(); Pop(0)

0x3cf: Stack[-1] = "run"
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty(object)
0x3d2: Call2 0x5de

0x3d3: Pop(0)
0x3d4: @ RemoveActor(Stack[-1])
0x3d5: Pop(1)
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: PushEmpty(object)
0x3d9: Stack[-1] = Stack[-2]
0x3da: Call2 0x3e0

0x3db: Pop(1)
0x3dc: @ Hold()
0x3dd: Pop(0)
0x3de: GOTO 0x3dc

0x3df: Return(); Pop(0)

0x3e0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3e1: Pop(0); Push((bool) Stack[-21] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e3: PushEmpty(string)
0x3e4: Stack[-1] = "fdie"
0x3e5: Call2 0x43b

0x3e6: Pop(1)
0x3e7: GOTO 0x43a

0x3e8: @@ GetPosition(Stack[-10])
0x3e9: Pop(0)
0x3ea: @ GetPosition(Stack[-9])
0x3eb: Pop(0)
0x3ec: @ GetDirection(Stack[-8])
0x3ed: Pop(0)
0x3ee: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3ef: Push(CvectorIndex(Stack[-7], 0))
0x3f0: Push(CvectorIndex(Stack[-9], 0))
0x3f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f2: Push(CvectorIndex(Stack[-8], 2))
0x3f3: Push(CvectorIndex(Stack[-10], 2))
0x3f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: Push((int) 0)
0x3f7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f9: Stack[-6] = "fdie"
0x3fa: GOTO 0x3fc

0x3fb: Stack[-6] = "bdie"
0x3fc: @ RemoveRTEnvelope()
0x3fd: Pop(0)
0x3fe: @ SetDeathState()
0x3ff: Pop(0)
0x400: @ Stop()
0x401: Pop(0)
0x402: @ StopAsync()
0x403: Pop(0)
0x404: Stack[-5] = Stack[-21]
0x405: Push("GetScriptProperty")
0x406: Push((int) 2)
0x407: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x408: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x409: Push("Owner")
0x40a: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x40b: Pop(1)
0x40c: Push(Stack[-4])
0x40d: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40e: Push("Owner")
0x40f: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x410: Pop(1)
0x411: Pop(0); Push((bool) Stack[-5] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: Stack[-5] = Stack[-21]
0x414: Push("@GetEyesHeight")
0x415: Push((int) 1)
0x416: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x417: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x418: @@ GetEyesHeight(Stack[-2])
0x419: Pop(0)
0x41a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x41b: Push(CvectorIndex(Stack[-1], 1))
0x41c: Stack[-1] = Stack[-3]
0x41d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x41e: Push("head")
0x41f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x420: Pop(1)
0x421: Stack[-3] = (bool) 1
0x422: GOTO 0x424

0x423: Stack[-3] = (bool) 0
0x424: PushEmpty(string)
0x425: Stack[-1] = Stack[-7]
0x426: Call2 0x5b5

0x427: Pop(1)
0x428: Push("all")
0x429: @ PlayAnimation(Stack[-1], Stack[-7])
0x42a: Pop(1)
0x42b: @ WaitForAnimEnd()
0x42c: Pop(0)
0x42d: Push(Stack[-3])
0x42e: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x42f: @ StopAsync()
0x430: Pop(0)
0x431: Push("head")
0x432: @ UnlookAsync(Stack[-1])
0x433: Pop(1)
0x434: Push("all")
0x435: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x436: Pop(1)
0x437: @ RemoveEnvelope()
0x438: Pop(0)
0x439: Stack[-5] = 0
0x43a: Return(); Pop(20)

0x43b: PushEmpty()
0x43c: @ RemoveRTEnvelope()
0x43d: Pop(0)
0x43e: @ SetDeathState()
0x43f: Pop(0)
0x440: @ Stop()
0x441: Pop(0)
0x442: @ StopAsync()
0x443: Pop(0)
0x444: @ StopSecondaryAnimation()
0x445: Pop(0)
0x446: PushEmpty(string)
0x447: Stack[-1] = Stack[-2]
0x448: Call2 0x5b5

0x449: Pop(1)
0x44a: Push("all")
0x44b: @ PlayAnimation(Stack[-1], Stack[-2])
0x44c: Pop(1)
0x44d: @ WaitForAnimEnd()
0x44e: Pop(0)
0x44f: Push("all")
0x450: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x451: Pop(1)
0x452: @ RemoveEnvelope()
0x453: Pop(0)
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: Return(); Pop(0)

0x459: PushEmpty()
0x45a: Return(); Pop(0)

0x45b: PushEmpty()
0x45c: Push((int) 2)
0x45d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45f: Stack[-2] = "fire"
0x460: Return(); Pop(0)

0x461: GOTO 0x467

0x462: Push((int) 1)
0x463: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-2] = "bullet"
0x466: Return(); Pop(0)

0x467: Stack[-2] = "phys"
0x468: Return(); Pop(0)

0x469: PushEmpty(cvector, cvector, cvector, cvector)
0x46a: @ GetPosition(Stack[-2])
0x46b: Pop(0)
0x46c: @@ GetPosition(Stack[-1])
0x46d: Pop(0)
0x46e: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x46f: Return(); Pop(4)

0x470: PushEmpty(bool, bool)
0x471: @ IsPlayerActor(Stack[-3], Stack[-1])
0x472: Pop(0)
0x473: Stack[-4] = Stack[-1]
0x474: Return(); Pop(2)

0x475: PushEmpty(bool, bool)
0x476: Push("HasProperty")
0x477: Push((int) 2)
0x478: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x479: Pop(1); Push((bool) Stack[-1] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-5] = (bool) 0
0x47c: Return(); Pop(2)

0x47d: @@ HasProperty(Stack[-3], Stack[-1])
0x47e: Pop(0)
0x47f: Stack[-5] = Stack[-1]
0x480: Return(); Pop(2)

0x481: PushEmpty(float, float)
0x482: PushEmpty(bool, object, string)
0x483: Stack[-2] = Stack[-10]
0x484: Stack[-1] = Stack[-9]
0x485: Call2 0x475

0x486: Pop(2)
0x487: Pop(1); Push((bool) Stack[-1] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-8] = (bool) 0
0x48a: Return(); Pop(2)

0x48b: @@ GetProperty(Stack[-6], Stack[-1])
0x48c: Pop(0)
0x48d: PushEmpty(float, float, float, float)
0x48e: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x48f: Stack[-2] = Stack[-8]
0x490: Stack[-1] = Stack[-7]
0x491: Call2 0x5f5

0x492: Pop(3)
0x493: @@ SetProperty(Stack[-7], Stack[-1])
0x494: Pop(1)
0x495: Stack[-8] = (bool) 1
0x496: Return(); Pop(2)

0x497: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x498: PushEmpty(bool, object, string)
0x499: Stack[-2] = Stack[-18]
0x49a: Stack[-1] = "health"
0x49b: Call2 0x475

0x49c: Pop(2)
0x49d: Pop(1); Push((bool) Stack[-1] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: Stack[-16] = (float) 0.0
0x4a0: Return(); Pop(12)

0x4a1: PushEmpty(bool, object, string)
0x4a2: Stack[-2] = Stack[-18]
0x4a3: Stack[-1] = "armor"
0x4a4: Call2 0x475

0x4a5: Pop(2)
0x4a6: Pop(1); Push((bool) Stack[-1] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: Stack[-6] = (int) 0
0x4a9: GOTO 0x4ad

0x4aa: Push("armor")
0x4ab: @@ GetProperty(Stack[-1], Stack[-7])
0x4ac: Pop(1)
0x4ad: Push("armor_")
0x4ae: PushEmpty(string, int)
0x4af: Stack[-1] = Stack[-16]
0x4b0: Call2 0x45b

0x4b1: Pop(1)
0x4b2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4b3: PushEmpty(bool, object, string)
0x4b4: Stack[-2] = Stack[-18]
0x4b5: Stack[-1] = Stack[-8]
0x4b6: Call2 0x475

0x4b7: Pop(2)
0x4b8: Pop(1); Push((bool) Stack[-1] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ba: Stack[-4] = (int) 0
0x4bb: GOTO 0x4be

0x4bc: @@ GetProperty(Stack[-5], Stack[-4])
0x4bd: Pop(0)
0x4be: PushEmpty(float, float, float)
0x4bf: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4c0: Push((float)100.0)
0x4c1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4c2: Stack[-1] = (int) 1
0x4c3: Call2 0x5ee

0x4c4: Stack[-6] = Stack[-3]
0x4c5: Pop(3)
0x4c6: Push("health")
0x4c7: @@ GetProperty(Stack[-1], Stack[-3])
0x4c8: Pop(1)
0x4c9: Push((int) 1)
0x4ca: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4cb: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4cc: Push("health")
0x4cd: PushEmpty(float, float, float, float)
0x4ce: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4cf: Stack[-2] = (int) 0
0x4d0: Stack[-1] = (int) 1
0x4d1: Call2 0x5f5

0x4d2: Pop(3)
0x4d3: @@ SetProperty(Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: PushEmpty(bool, object)
0x4d6: Stack[-1] = Stack[-17]
0x4d7: Call2 0x470

0x4d8: Pop(1)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4da: PushEmpty(float)
0x4db: Stack[-1] = -Stack[-2]; Pop(0);
0x4dc: Call2 0x623

0x4dd: Pop(1)
0x4de: Stack[-16] = Stack[-1]
0x4df: Return(); Pop(12)

0x4e0: PushEmpty(bool, bool)
0x4e1: @@ IsDead(Stack[-1])
0x4e2: Pop(0)
0x4e3: Stack[-4] = Stack[-1]
0x4e4: Return(); Pop(2)

0x4e5: PushEmpty(object, object, object, object)
0x4e6: Pop(0); Push((bool) Stack[-5] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-6] = (bool) 0
0x4e9: Return(); Pop(4)

0x4ea: PushEmpty(bool)
0x4eb: Stack[-1] = (bool) 0
0x4ec: Push("IsDead")
0x4ed: Push((int) 1)
0x4ee: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f0: PushEmpty(bool, object)
0x4f1: Stack[-1] = Stack[-8]
0x4f2: Call2 0x4e0

0x4f3: Pop(1)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: Stack[-1] = (bool) 1
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-6] = (bool) 0
0x4f8: Return(); Pop(4)

0x4f9: @ GetScene(Stack[-2])
0x4fa: Pop(0)
0x4fb: Pop(0); Push((bool) Stack[-2] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-6] = (bool) 0
0x4fe: Return(); Pop(4)

0x4ff: @@ GetScene(Stack[-1])
0x500: Pop(0)
0x501: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-6] = (bool) 0
0x504: Return(); Pop(4)

0x505: Stack[-6] = (bool) 1
0x506: Return(); Pop(4)

0x507: Stack[-1] = 0
0x508: Stack[-2] = 0
0x509: PushEmpty(int, int)
0x50a: PushEmpty(bool, object)
0x50b: Stack[-1] = Stack[-5]
0x50c: Call2 0x4e5

0x50d: Pop(1)
0x50e: Pop(1); Push((bool) Stack[-1] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-4] = (bool) 0
0x511: Return(); Pop(2)

0x512: PushEmpty(bool, object, string)
0x513: Stack[-2] = Stack[-6]
0x514: Stack[-1] = "noaccess"
0x515: Call2 0x475

0x516: Pop(2)
0x517: Pop(1); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-4] = (bool) 1
0x51a: Return(); Pop(2)

0x51b: Push("noaccess")
0x51c: @@ GetProperty(Stack[-1], Stack[-2])
0x51d: Pop(1)
0x51e: Push((int) 0)
0x51f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x520: Return(); Pop(2)

0x521: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x522: Pop(0); Push((bool) Stack[-15] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x524: Return(); Pop(14)

0x525: @ IsDead(Stack[-7])
0x526: Pop(0)
0x527: Push(Stack[-7])
0x528: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x529: Return(); Pop(14)

0x52a: @ GetSecondaryAnimationType(Stack[-6])
0x52b: Pop(0)
0x52c: Push((int) 0)
0x52d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52f: Return(); Pop(14)

0x530: @@ GetPosition(Stack[-5])
0x531: Pop(0)
0x532: @ GetPosition(Stack[-4])
0x533: Pop(0)
0x534: @ GetDirection(Stack[-3])
0x535: Pop(0)
0x536: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x537: Push(CvectorIndex(Stack[-2], 0))
0x538: Push(CvectorIndex(Stack[-4], 0))
0x539: Pop(2); Push(Stack[-2] * Stack[-1]);
0x53a: Push(CvectorIndex(Stack[-3], 2))
0x53b: Push(CvectorIndex(Stack[-5], 2))
0x53c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x53d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x53e: Push((int) 0)
0x53f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-1] = "fhit"
0x542: GOTO 0x544

0x543: Stack[-1] = "bhit"
0x544: Push("hit_react")
0x545: Push("1")
0x546: Pop(1); Push(Stack[-3] + Stack[-1]);
0x547: Push("2")
0x548: Pop(1); Push(Stack[-4] + Stack[-1]);
0x549: Push((int) -10)
0x54a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(4)
0x54c: Return(); Pop(14)

0x54d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x54e: PushEmpty(bool)
0x54f: Stack[-1] = (bool) 0
0x550: PushEmpty(bool)
0x551: Stack[-1] = (bool) 0
0x552: Push(Stack[-23])
0x553: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x554: Push((int) 4)
0x555: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x557: Stack[-1] = (bool) 1
0x558: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x559: Push((int) 5)
0x55a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55c: Stack[-1] = (bool) 1
0x55d: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x55e: PushEmpty(cvector, cvector)
0x55f: PushEmpty(cvector, object)
0x560: Stack[-1] = Stack[-25]
0x561: Call2 0x469

0x562: Stack[-3] = Stack[-2]
0x563: Pop(2)
0x564: Call2 0x5e4

0x565: Stack[-11] = Stack[-2]
0x566: Pop(2)
0x567: @ CreateVectorVector(Stack[-8])
0x568: Pop(0)
0x569: Stack[-7] = (int) 1
0x56a: Push("hit")
0x56b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x56c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x56d: Pop(1)
0x56e: Pop(0); Push((bool) Stack[-6] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x570: GOTO 0x57a

0x571: Pop(0); Push(Stack[-4] | Stack[-9]);
0x572: Push((float)0.70711)
0x573: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: @@ add(Stack[-5])
0x576: Pop(0)
0x577: Push((int) 1)
0x578: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x579: GOTO 0x56a

0x57a: @@ size(Stack[-3])
0x57b: Pop(0)
0x57c: Push(Stack[-3])
0x57d: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x57e: @ irand(Stack[-2], Stack[-3])
0x57f: Pop(0)
0x580: @@ get(Stack[-1], Stack[-2])
0x581: Pop(0)
0x582: PushEmpty(object, int, float, cvector, cvector)
0x583: Stack[-5] = Stack[-26]
0x584: Stack[-4] = Stack[-25]
0x585: Stack[-3] = Stack[-24]
0x586: Stack[-2] = Stack[-6]
0x587: Stack[-1] = -Stack[-14]; Pop(0);
0x588: Call2 0x591

0x589: Pop(5)
0x58a: Return(); Pop(18)

0x58b: Stack[-8] = 0
0x58c: PushEmpty(object)
0x58d: Stack[-1] = Stack[-22]
0x58e: Call2 0x521

0x58f: Pop(1)
0x590: Return(); Pop(18)

0x591: PushEmpty(object, object, object, object)
0x592: @ GetScene(Stack[-2])
0x593: Pop(0)
0x594: Push("scripted")
0x595: Push("blood_dir.xml")
0x596: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x597: Pop(2)
0x598: PushEmpty(object)
0x599: Stack[-1] = Stack[-10]
0x59a: Call2 0x521

0x59b: Pop(1)
0x59c: Return(); Pop(4)

0x59d: Stack[-1] = 0
0x59e: Stack[-2] = 0
0x59f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5a0: @@ GetPosition(Stack[-3])
0x5a1: Pop(0)
0x5a2: @ GetPosition(Stack[-2])
0x5a3: Pop(0)
0x5a4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5a5: Push(CvectorIndex(Stack[-1], 0))
0x5a6: Push(CvectorIndex(Stack[-2], 2))
0x5a7: @ RotateAsync(Stack[-2], Stack[-1])
0x5a8: Pop(2)
0x5a9: Return(); Pop(6)

0x5aa: PushEmpty(float, cvector, float, cvector)
0x5ab: @@ GetEyesHeight(Stack[-2])
0x5ac: Pop(0)
0x5ad: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5ae: Push(CvectorIndex(Stack[-1], 1))
0x5af: Stack[-1] = Stack[-3]
0x5b0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5b1: Push("head")
0x5b2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5b3: Pop(1)
0x5b4: Return(); Pop(4)

0x5b5: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5b6: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5b7: Pop(0)
0x5b8: Pop(0); Push((bool) Stack[-8] == 0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5ba: Stack[-7] = (int) 0
0x5bb: Push((int) 1)
0x5bc: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5bd: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5be: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5bf: Pop(1)
0x5c0: Pop(0); Push((bool) Stack[-6] == 0)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: GOTO 0x5c6

0x5c3: Push((int) 1)
0x5c4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5c5: GOTO 0x5bb

0x5c6: Pop(0); Push((bool) Stack[-7] == 0)
0x5c7: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c8: Return(); Pop(16)

0x5c9: @ irand(Stack[-5], Stack[-7])
0x5ca: Pop(0)
0x5cb: Push((int) 1)
0x5cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5cd: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5ce: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5cf: Pop(0)
0x5d0: Push(Stack[-4])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d2: @ GetEyesHeight(Stack[-3])
0x5d3: Pop(0)
0x5d4: @ GetDirection(Stack[-2])
0x5d5: Pop(0)
0x5d6: Push((int) 50)
0x5d7: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5d8: Push(CvectorIndex(Stack[-1], 1))
0x5d9: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5da: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5db: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5dc: Pop(0)
0x5dd: Return(); Pop(16)

0x5de: PushEmpty(object, object)
0x5df: @ self(Stack[-1])
0x5e0: Pop(0)
0x5e1: Stack[-3] = Stack[-1]
0x5e2: Return(); Pop(2)

0x5e3: Stack[-1] = 0
0x5e4: PushEmpty(float, float)
0x5e5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5e6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5e7: Push((float)0.0)
0x5e8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5ea: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5eb: Return(); Pop(2)

0x5ec: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5ed: Return(); Pop(2)

0x5ee: PushEmpty()
0x5ef: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f1: Stack[-3] = Stack[-2]
0x5f2: GOTO 0x5f4

0x5f3: Stack[-3] = Stack[-1]
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty()
0x5f6: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-4] = Stack[-2]
0x5f9: Return(); Pop(0)

0x5fa: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fc: Stack[-4] = Stack[-1]
0x5fd: Return(); Pop(0)

0x5fe: Stack[-4] = Stack[-3]
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: Pop(0); Push((bool) Stack[-2] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-3] = (bool) 0
0x604: Return(); Pop(0)

0x605: Push((int) 0)
0x606: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x608: Push((int) 8)
0x609: @ SendWorldWndMessage(Stack[-1])
0x60a: Pop(1)
0x60b: GOTO 0x615

0x60c: Push((int) 0)
0x60d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60f: Push((int) 9)
0x610: @ SendWorldWndMessage(Stack[-1])
0x611: Pop(1)
0x612: GOTO 0x615

0x613: Stack[-3] = (bool) 0
0x614: Return(); Pop(0)

0x615: PushEmpty(float)
0x616: Stack[-1] = Stack[-2]
0x617: Call2 0x634

0x618: Pop(1)
0x619: PushEmpty(bool, object, string, float, float, float)
0x61a: Stack[-5] = Stack[-8]
0x61b: Stack[-4] = "reputation"
0x61c: Stack[-3] = Stack[-7]
0x61d: Stack[-2] = (int) 0
0x61e: Stack[-1] = (int) 1
0x61f: Call2 0x481

0x620: Pop(6)
0x621: Stack[-3] = (bool) 1
0x622: Return(); Pop(0)

0x623: PushEmpty(object, object)
0x624: @ CreateFloatVector(Stack[-1])
0x625: Pop(0)
0x626: @@ add(Stack[-3])
0x627: Pop(0)
0x628: Push((int) 0)
0x629: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62b: Push((float)0.7)
0x62c: Push((int) 500)
0x62d: @ RumblePlay(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: Push((int) 15)
0x630: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x631: Pop(1)
0x632: Return(); Pop(2)

0x633: Stack[-1] = 0
0x634: PushEmpty(object, object)
0x635: @ CreateFloatVector(Stack[-1])
0x636: Pop(0)
0x637: @@ add(Stack[-3])
0x638: Pop(0)
0x639: Push((int) 16)
0x63a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x63b: Pop(1)
0x63c: Return(); Pop(2)

0x63d: Stack[-1] = 0
0x63e: PushEmpty(bool, bool)
0x63f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x640: Pop(0)
0x641: Push(Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x643: Push("attack")
0x644: @ PlayGlobalMusic(Stack[-1])
0x645: Pop(1)
0x646: Return(); Pop(2)

0x647: PushEmpty(object, object)
0x648: @ GetScene(Stack[-1])
0x649: Pop(0)
0x64a: Push("battle")
0x64b: PushEmpty(object)
0x64c: Call2 0x5de

0x64d: Pop(0)
0x64e: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x64f: Pop(2)
0x650: Return(); Pop(2)

0x651: Stack[-1] = 0
0x652: PushEmpty()
0x653: PushEmpty(bool, object)
0x654: Stack[-1] = Stack[-3]
0x655: Call2 0x470

0x656: Pop(1)
0x657: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x658: PushEmpty(bool, object, float)
0x659: Stack[-2] = Stack[-4]
0x65a: Stack[-1] = (float) 0.05
0x65b: Call2 0x600

0x65c: Pop(3)
0x65d: PushEmpty(object)
0x65e: Stack[-1] = Stack[-2]
0x65f: Push(-1, 0); TaskCall(3)
0x660: Call2 0x3d7

0x661: Pop(-1, 0); TaskReturn
0x662: Pop(1)
0x663: Return(); Pop(0)

0x664: PushEmpty()
0x665: PushEmpty(object, int, float)
0x666: Stack[-3] = Stack[-7]
0x667: Stack[-2] = Stack[-6]
0x668: Stack[-1] = Stack[-5]
0x669: Call2 0x54d

0x66a: Pop(3)
0x66b: Return(); Pop(0)

0x66c: PushEmpty()
0x66d: PushEmpty(object, int, float, cvector, cvector)
0x66e: Stack[-5] = Stack[-11]
0x66f: Stack[-4] = Stack[-10]
0x670: Stack[-3] = Stack[-9]
0x671: Stack[-2] = Stack[-7]
0x672: Stack[-1] = Stack[-6]
0x673: Call2 0x591

0x674: Pop(5)
0x675: Return(); Pop(0)

0x676: PushEmpty(float, float)
0x677: Push("health")
0x678: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67a: Push("health")
0x67b: @ GetProperty(Stack[-1], Stack[-2])
0x67c: Pop(1)
0x67d: Push((int) 0)
0x67e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: @ SignalDeath(Stack[-4])
0x681: Pop(0)
0x682: Return(); Pop(2)

0x683: PushEmpty()
0x684: PushEmpty(object)
0x685: Stack[-1] = Stack[-2]
0x686: Call2 0x652

0x687: Pop(1)
0x688: Return(); Pop(0)

