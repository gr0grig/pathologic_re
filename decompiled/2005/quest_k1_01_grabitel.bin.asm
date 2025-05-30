GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	all
	aattack_begin1
	aattack_end1
	knife
	scripted
	grabitel_knife.xml
	Owner
	SetScriptProperty
	Target
	GetPosition
	GetEyesHeight
	StartDirection
	kill
	attack_off
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	head
	walk
	run
	hunt
	b1q04_dead
	fdie
	bdie
	GetScriptProperty
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
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
	2
	add
	size
	get
	blood_dir.xml
	reputation
	battle
	god_mode
	branch
	b1q04_attack
	RemoveStationaryActor

Import:
	Face (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	GetScene (1 args)
	GetGeometryLocator (3 args)
	AddActorByType (6 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
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
	WaitForAnimEnd (1 args)
	rand (2 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	SetVariable (2 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)

RunOp = 0x4a8
RunTask = 5

GlobalTasks: 
	GTASK_0  Params = 2
	GTASK_1 Vars = (bool) Params = 2
		EVENT_17 Op = 0x90 Vars = (object)
		EVENT_30 Op = 0x96 Vars = (object, object, bool)
		EVENT_26 Op = 0x9d Vars = (string)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0xdb Vars = (object)
		EVENT_30 Op = 0xe1 Vars = (object, object, bool)
		EVENT_26 Op = 0xe8 Vars = (string)
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x384 Vars = (object)
		EVENT_30 Op = 0x38a Vars = (object, object, bool)
		EVENT_26 Op = 0x391 Vars = (string)
		EVENT_7 Op = 0x3cd Vars = (int)
		EVENT_1 Op = 0x3e8 Vars = (object)
		EVENT_2 Op = 0x3f7 Vars = (object)
		EVENT_10 Op = 0x47d Vars = (object)
		EVENT_41 Op = 0x488 Vars = (object)
	GTASK_4  Params = 1
	GTASK_5  Params = 0
		EVENT_17 Op = 0x4b7 Vars = (object)
		EVENT_1 Op = 0x4c5 Vars = (object)
		EVENT_3 Op = 0x4cf Vars = (object)
	GTASK_6  Params = 1
		EVENT_0 Op = 0x548 Vars = (object)
		EVENT_22 Op = 0x5c7 Vars = (object, int, float, float)
		EVENT_16 Op = 0x5c9 Vars = (object, string)
		EVENT_41 Op = 0x5cb Vars = (object)

Events:
EVENT_22 Op = 0x82a Vars = (object, int, float, float)
EVENT_43 Op = 0x832 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x83c Vars = (object, string)
EVENT_41 Op = 0x849 Vars = (object)

0x0: PushEmpty(float, float)
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-5]
0x3: Call2 0x6a2

0x4: Pop(1)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x7: Stack[-4] = (bool) 0
0x8: Return(); Pop(2)

0x9: PushEmpty(float, object)
0xa: Stack[-1] = Stack[-5]
0xb: Call2 0x5e2

0xc: Stack[-3] = Stack[-2]
0xd: Pop(2)
0xe: PushEmpty(bool, float, float, float)
0xf: Stack[-3] = Stack[-5]
0x10: Stack[-2] = (float) 250000.0
0x11: Stack[-1] = (float) 3240000.0
0x12: Call2 0x7c9

0x13: Pop(3)
0x14: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x15: PushEmpty(bool, object)
0x16: Stack[-1] = Stack[-5]
0x17: Push(-2, 1); TaskCall(1)
0x18: Call2 0x25

0x19: Pop(-2, 1); TaskReturn
0x1a: Stack[-6] = Stack[-2]
0x1b: Pop(2)
0x1c: Return(); Pop(2)

0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-5]
0x1f: Push(-2, 6); TaskCall(2)
0x20: Call2 0xa3

0x21: Pop(-2, 6); TaskReturn
0x22: Stack[-6] = Stack[-2]
0x23: Pop(2)
0x24: Return(); Pop(2)

0x25: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x26: PushEmpty(object)
0x27: Stack[-1] = Stack[-16]
0x28: Call2 0x808

0x29: Pop(1)
0x2a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2b: PushEmpty(bool, object)
0x2c: Stack[-1] = Stack[-17]
0x2d: Call2 0x6c4

0x2e: Pop(2)
0x2f: PushEmpty(bool, object)
0x30: Stack[-1] = Stack[-17]
0x31: Call2 0x6a2

0x32: Pop(1)
0x33: Pop(1); Push((bool) Stack[-1] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x35: Stack[-16] = (bool) 0
0x36: Return(); Pop(14)

0x37: PushEmpty()
0x38: Call2 0x811

0x39: Pop(0)
0x3a: @ Face(Stack[-15])
0x3b: Pop(0)
0x3c: Push("all")
0x3d: Push("aattack_begin1")
0x3e: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: @ WaitForAnimEnd()
0x41: Pop(0)
0x42: PushEmpty(bool, object)
0x43: Stack[-1] = Stack[-17]
0x44: Call2 0x6a2

0x45: Pop(1)
0x46: Pop(1); Push((bool) Stack[-1] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: @ StopAsync()
0x49: Pop(0)
0x4a: Stack[-16] = (bool) 0
0x4b: Return(); Pop(14)

0x4c: Push("all")
0x4d: Push("aattack_end1")
0x4e: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f: Pop(2)
0x50: @ GetScene(Stack[-7])
0x51: Pop(0)
0x52: Push("knife")
0x53: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x54: Pop(1)
0x55: Push("scripted")
0x56: Push(CVector(0.0, 0.0, 1.0))
0x57: Push("grabitel_knife.xml")
0x58: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x59: Pop(3)
0x5a: Push("Owner")
0x5b: PushEmpty(object)
0x5c: Call2 0x78f

0x5d: Pop(0)
0x5e: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: Push("Target")
0x61: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x62: Pop(1)
0x63: @@ GetPosition(Stack[-3])
0x64: Pop(0)
0x65: @@ GetEyesHeight(Stack[-2])
0x66: Pop(0)
0x67: Push(CvectorIndex(Stack[-3], 1))
0x68: Push((int) 10)
0x69: Pop(1); Push(Stack[-4] - Stack[-1]);
0x6a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6b: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x6c: PushEmpty(cvector, cvector, cvector, float)
0x6d: Stack[-3] = Stack[-10]
0x6e: Stack[-2] = Stack[-7]
0x6f: Stack[-1] = (float) 2000.0
0x70: Call2 0x86f

0x71: Stack[-5] = Stack[-4]
0x72: Pop(4)
0x73: Push("StartDirection")
0x74: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: @ WaitForAnimEnd()
0x77: Pop(0)
0x78: @ StopAsync()
0x79: Pop(0)
0x7a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-16] = (bool) 1
0x7d: Return(); Pop(14)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[-17]
0x80: Call2 0x6a2

0x81: Pop(1)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: Stack[-16] = (bool) 0
0x85: Return(); Pop(14)

0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[-17]
0x88: Push(-2, 6); TaskCall(2)
0x89: Call2 0xa3

0x8a: Pop(-2, 6); TaskReturn
0x8b: Stack[-18] = Stack[-2]
0x8c: Pop(2)
0x8d: Return(); Pop(14)

0x8e: Stack[-4] = 0
0x8f: Stack[-7] = 0
0x90: PushEmpty()
0x91: PushEmpty(object)
0x92: Stack[-1] = Stack[-2]
0x93: Call2 0x892

0x94: Pop(1)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: PushEmpty(bool, object, object)
0x98: Stack[-2] = Stack[-6]
0x99: Stack[-1] = Stack[-5]
0x9a: Call2 0x894

0x9b: Pop(3)
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Push("kill")
0x9f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: Push(GlobalVars[0])
0xa5: Stack[-1] = (bool) 0
0xa6: GlobalVars[0] = Stack[-1]; Pop(1)
0xa7: PushEmpty(object, bool, float)
0xa8: Stack[-3] = Stack[-4]
0xa9: Stack[-2] = (bool) 1
0xaa: Stack[-1] = (float) 200.0
0xab: Call2 0xf0

0xac: Pop(3)
0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 0
0xaf: Push(GlobalVars[0])
0xb0: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb5: Push("all")
0xb6: Push("attack_off")
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: @ WaitForAnimEnd()
0xba: Pop(0)
0xbb: Push(GlobalVars[0])
0xbc: Stack[-3] = Stack[-1]
0xbd: Pop(1)
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Stack[-3] = (float) 0.15
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Stack[-3] = (int) 0
0xc4: Return(); Pop(0)

0xc5: Stack[-1] = (int) 1
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: PushEmpty(bool)
0xc9: Stack[-1] = (bool) 0
0xca: Push((int) 0)
0xcb: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0x65a

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Stack[-1] = (bool) 1
0xd3: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd4: Push(GlobalVars[0])
0xd5: Stack[-1] = (bool) 1
0xd6: GlobalVars[0] = Stack[-1]; Pop(1)
0xd7: PushEmpty()
0xd8: Call2 0x2a8

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: PushEmpty(object)
0xdd: Stack[-1] = Stack[-2]
0xde: Call2 0x892

0xdf: Pop(1)
0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: PushEmpty(bool, object, object)
0xe3: Stack[-2] = Stack[-6]
0xe4: Stack[-1] = Stack[-5]
0xe5: Call2 0x894

0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push("kill")
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xec: Push(GlobalVars[0])
0xed: Stack[-1] = (bool) 1
0xee: GlobalVars[0] = Stack[-1]; Pop(1)
0xef: Return(); Pop(0)

0xf0: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xf1: PushEmpty()
0xf2: Call2 0x1d5

0xf3: Pop(0)
0xf4: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xf5: Push("@GetAttackDistance")
0xf6: Push((int) 1)
0xf7: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xf8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf9: @@ GetAttackDistance(Stack[-11])
0xfa: Pop(0)
0xfb: Push((int) 50)
0xfc: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xfd: GOTO 0xff

0xfe: Stack[-11] = Stack[-23]
0xff: Push((int) 150)
0x100: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x102: Stack[-11] = (int) 150
0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x105: @ IsPlayerActor(Stack[-0], Stack[-8])
0x106: Pop(0)
0x107: Push(Stack[-8])
0x108: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x109: Push("attack")
0x10a: @ PlayGlobalMusic(Stack[-1])
0x10b: Pop(1)
0x10c: PushEmpty(object)
0x10d: Call2 0x78f

0x10e: Pop(0)
0x10f: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x110: Pop(1)
0x111: Push(Stack[-24])
0x112: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x113: Stack[-7] = (bool) 0
0x114: GOTO 0x116

0x115: Stack[-7] = (bool) 1
0x116: Push((float)300.0)
0x117: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x118: PushEmpty(bool)
0x119: Stack[-1] = (bool) 0
0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x6a2

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Stack[-1] = (bool) 1
0x122: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x374

0x125: Pop(0)
0x126: @@ GetPFPosition(Stack[-10])
0x127: Pop(0)
0x128: @ GetPFPosition(Stack[-9])
0x129: Pop(0)
0x12a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x12b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x12c: Pop(0); Push(Stack[-6] * Stack[-6]);
0x12d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(bool, object, float, float, bool, bool)
0x130: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x131: Stack[-4] = Stack[-17]
0x132: Stack[-3] = (float) 3000.0
0x133: Stack[-2] = (bool) 1
0x134: Stack[-1] = (bool) 0
0x135: Push(-6, 3); TaskCall(3)
0x136: Call2 0x39c

0x137: Pop(-6, 3); TaskReturn
0x138: Pop(5)
0x139: Pop(1); Push((bool) Stack[-1] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: GOTO 0x1c4

0x13c: Stack[-7] = (bool) 0
0x13d: GOTO 0x1c3

0x13e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x13f: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x141: @@ GetPFPosition(Stack[-3])
0x142: Pop(0)
0x143: @ CanReachByPF(Stack[-2], Stack[-3])
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-2] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x147: PushEmpty(bool, object, float, float, bool, bool)
0x148: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x149: Stack[-4] = Stack[-17]
0x14a: Stack[-3] = (float) 3000.0
0x14b: Stack[-2] = (bool) 1
0x14c: Stack[-1] = (bool) 0
0x14d: Push(-6, 3); TaskCall(3)
0x14e: Call2 0x39c

0x14f: Pop(-6, 3); TaskReturn
0x150: Pop(5)
0x151: Pop(1); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x153: GOTO 0x1c4

0x154: Stack[-7] = (bool) 0
0x155: GOTO 0x118

0x156: Pop(0); Push((bool) Stack[-7] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x158: PushEmpty(object)
0x159: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Call2 0x74b

0x15b: Pop(1)
0x15c: Push("all")
0x15d: Push("attack_on")
0x15e: @ PlayAnimation(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: @ WaitForAnimEnd()
0x161: Pop(0)
0x162: PushEmpty()
0x163: Call2 0x374

0x164: Pop(0)
0x165: @ StopAsync()
0x166: Pop(0)
0x167: Stack[-7] = (bool) 1
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x6a2

0x16b: Pop(1)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x1c4

0x16f: @ rand(Stack[-1])
0x170: Pop(0)
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 1
0x173: Push((float)0.2)
0x174: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x349

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 0
0x17b: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x17c: @ Face(Stack[-0])
0x17d: Pop(0)
0x17e: PushEmpty()
0x17f: Call2 0x379

0x180: Pop(0)
0x181: Push("all")
0x182: Push("attack_stay")
0x183: @ PlayAnimation(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: PushEmpty(bool, float)
0x186: Stack[-1] = Stack[-25]
0x187: Call2 0x2c5

0x188: Pop(2)
0x189: @ StopAsync()
0x18a: Pop(0)
0x18b: GOTO 0x1ba

0x18c: @ Face(Stack[-0])
0x18d: Pop(0)
0x18e: Push("all")
0x18f: Push("fjump")
0x190: @ PlayAnimation(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: @ WaitForAnimEnd()
0x193: Pop(0)
0x194: PushEmpty()
0x195: Call2 0x374

0x196: Pop(0)
0x197: Push(CVector(0.0, 0.0, 0.0))
0x198: @ SetSpeed(Stack[-1])
0x199: Pop(1)
0x19a: @ Stop()
0x19b: Pop(0)
0x19c: @ StopAsync()
0x19d: Pop(0)
0x19e: PushEmpty(bool)
0x19f: Call2 0x349

0x1a0: Pop(0)
0x1a1: Pop(1); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a5: Call2 0x6a2

0x1a6: Pop(1)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1c4

0x1aa: @@ GetPFPosition(Stack[-10])
0x1ab: Pop(0)
0x1ac: @ GetPFPosition(Stack[-9])
0x1ad: Pop(0)
0x1ae: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1af: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1b0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1b1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b3: PushEmpty(bool, float)
0x1b4: Stack[-1] = Stack[-25]
0x1b5: Call2 0x21f

0x1b6: Pop(1)
0x1b7: Pop(1); Push((bool) Stack[-1] == 0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: GOTO 0x1c4

0x1ba: GOTO 0x1c3

0x1bb: PushEmpty(bool, float)
0x1bc: Stack[-1] = Stack[-25]
0x1bd: Call2 0x21f

0x1be: Pop(1)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1c4

0x1c2: Stack[-7] = (bool) 1
0x1c3: GOTO 0x118

0x1c4: @ WaitForAnimEnd()
0x1c5: Pop(0)
0x1c6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Return(); Pop(22)

0x1c9: Push("all")
0x1ca: Push("attack_off")
0x1cb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: @ WaitForAnimEnd()
0x1ce: Pop(0)
0x1cf: Push(Stack[-8])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d1: Push((float)2.0)
0x1d2: @ Sleep(Stack[-1])
0x1d3: Pop(1)
0x1d4: Return(); Pop(22)

0x1d5: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1d6: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1d7: Push("all")
0x1d8: Push("attack_begin")
0x1d9: Push((int) 1)
0x1da: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1dc: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Pop(0); Push((bool) Stack[-3] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: GOTO 0x1e4

0x1e1: Push((int) 1)
0x1e2: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1d7

0x1e4: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1e5: Push("attack")
0x1e6: Push((int) 1)
0x1e7: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e9: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1ea: Pop(1)
0x1eb: Pop(0); Push((bool) Stack[-2] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f1

0x1ee: Push((int) 1)
0x1ef: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f0: GOTO 0x1e5

0x1f1: Push("all")
0x1f2: Push("bjump")
0x1f3: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Push(CvectorIndex(Stack[-1], 2))
0x1f6: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1f7: Return(); Pop(6)

0x1f8: PushEmpty(object, float, float, object, float, float)
0x1f9: Push((float)0.9)
0x1fa: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1fb: @ GetVictim(Stack[-1], Stack[-4])
0x1fc: Pop(1)
0x1fd: @ ReportAttack(Stack[-0])
0x1fe: Pop(0)
0x1ff: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x200: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x201: PushEmpty(float, object, int)
0x202: Stack[-2] = Stack[-6]
0x203: Stack[-1] = Stack[-10]
0x204: Call2 0xbf

0x205: Stack[-5] = Stack[-3]
0x206: Pop(3)
0x207: PushEmpty(float, object, float, int)
0x208: Stack[-3] = Stack[-7]
0x209: Stack[-2] = Stack[-6]
0x20a: PushEmpty(int, object, int)
0x20b: Stack[-2] = Stack[-10]
0x20c: Stack[-1] = Stack[-14]
0x20d: Call2 0xc2

0x20e: Stack[-4] = Stack[-3]
0x20f: Pop(3)
0x210: Call2 0x611

0x211: Stack[-5] = Stack[-4]
0x212: Pop(4)
0x213: PushEmpty(int)
0x214: Call2 0xc5

0x215: Pop(0)
0x216: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x217: Pop(1)
0x218: PushEmpty(object, float)
0x219: Stack[-2] = Stack[-5]
0x21a: Stack[-1] = Stack[-3]
0x21b: Call2 0xc7

0x21c: Pop(2)
0x21d: Return(); Pop(6)

0x21e: Stack[-3] = 0
0x21f: PushEmpty(int, bool, int, string, int, bool, int, string)
0x220: PushEmpty()
0x221: Call2 0x374

0x222: Pop(0)
0x223: @ irand(Stack[-4], Stack[-1])
0x224: Pop(0)
0x225: Push((int) 1)
0x226: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x227: @ Face(Stack[-0])
0x228: Pop(0)
0x229: Push((bool) 1)
0x22a: @ SetAttackState(Stack[-1])
0x22b: Pop(1)
0x22c: PushEmpty()
0x22d: Call2 0x811

0x22e: Pop(0)
0x22f: Push("all")
0x230: Push("attack_begin")
0x231: Pop(1); Push(Stack[-1] + Stack[-6]);
0x232: @ PlayAnimation(Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: @ WaitForAnimEnd()
0x235: Pop(0)
0x236: PushEmpty()
0x237: Call2 0x354

0x238: Pop(0)
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23b: Call2 0x6a2

0x23c: Pop(1)
0x23d: Pop(1); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23f: @ StopAsync()
0x240: Pop(0)
0x241: Stack[-10] = (bool) 0
0x242: Return(); Pop(8)

0x243: PushEmpty(float, int)
0x244: Stack[-2] = Stack[-11]
0x245: Stack[-1] = Stack[-6]
0x246: Call2 0x1f8

0x247: Pop(2)
0x248: Push("all")
0x249: Push("attack_middle")
0x24a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x24b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Push(Stack[-3])
0x24e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x24f: PushEmpty()
0x250: Call2 0x811

0x251: Pop(0)
0x252: Push("all")
0x253: Push("attack_middle")
0x254: Pop(1); Push(Stack[-1] + Stack[-6]);
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: @ WaitForAnimEnd()
0x258: Pop(0)
0x259: PushEmpty()
0x25a: Call2 0x374

0x25b: Pop(0)
0x25c: PushEmpty(bool, object)
0x25d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25e: Call2 0x6a2

0x25f: Pop(1)
0x260: Pop(1); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x262: @ StopAsync()
0x263: Pop(0)
0x264: Stack[-10] = (bool) 0
0x265: Return(); Pop(8)

0x266: PushEmpty(float, int)
0x267: Stack[-2] = Stack[-11]
0x268: Stack[-1] = Stack[-6]
0x269: Call2 0x1f8

0x26a: Pop(2)
0x26b: Stack[-2] = (int) 1
0x26c: Push("attack_middle")
0x26d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x26e: Push("_")
0x26f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x270: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x271: Push("all")
0x272: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x273: Pop(1)
0x274: Pop(0); Push((bool) Stack[-3] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x294

0x277: PushEmpty()
0x278: Call2 0x811

0x279: Pop(0)
0x27a: Push("all")
0x27b: @ PlayAnimation(Stack[-1], Stack[-2])
0x27c: Pop(1)
0x27d: @ WaitForAnimEnd()
0x27e: Pop(0)
0x27f: PushEmpty()
0x280: Call2 0x374

0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x6a2

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x288: @ StopAsync()
0x289: Pop(0)
0x28a: Stack[-10] = (bool) 0
0x28b: Return(); Pop(8)

0x28c: PushEmpty(float, int)
0x28d: Stack[-2] = Stack[-11]
0x28e: Stack[-1] = Stack[-6]
0x28f: Call2 0x1f8

0x290: Pop(2)
0x291: Push((int) 1)
0x292: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x293: GOTO 0x26c

0x294: Push((bool) 0)
0x295: @ SetAttackState(Stack[-1])
0x296: Pop(1)
0x297: Push("all")
0x298: Push("attack_end")
0x299: Pop(1); Push(Stack[-1] + Stack[-6]);
0x29a: @ PlayAnimation(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: PushEmpty(bool)
0x29d: Call2 0x37e

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a0: PushEmpty(bool, float)
0x2a1: Stack[-1] = (float) 0.45
0x2a2: Call2 0x2aa

0x2a3: Pop(2)
0x2a4: @ StopAsync()
0x2a5: Pop(0)
0x2a6: Stack[-10] = (bool) 1
0x2a7: Return(); Pop(8)

0x2a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(float, bool, float, bool)
0x2ab: @ rand(Stack[-2])
0x2ac: Pop(0)
0x2ad: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2af: @ IsAnimationPlaying(Stack[-1])
0x2b0: Pop(0)
0x2b1: Pop(0); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: GOTO 0x2bd

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x30c

0x2b6: Pop(0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-6] = (bool) 1
0x2b9: Return(); Pop(4)

0x2ba: @ sync()
0x2bb: Pop(0)
0x2bc: GOTO 0x2af

0x2bd: GOTO 0x2c3

0x2be: @ WaitForAnimEnd()
0x2bf: Pop(0)
0x2c0: PushEmpty()
0x2c1: Call2 0x374

0x2c2: Pop(0)
0x2c3: Stack[-6] = (bool) 0
0x2c4: Return(); Pop(4)

0x2c5: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2c6: @ IsAnimationPlaying(Stack[-5])
0x2c7: Pop(0)
0x2c8: Pop(0); Push((bool) Stack[-5] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2ca: GOTO 0x2eb

0x2cb: PushEmpty(bool)
0x2cc: Call2 0x30c

0x2cd: Pop(0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-12] = (bool) 1
0x2d0: Return(); Pop(10)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d3: Call2 0x6a2

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-12] = (bool) 0
0x2d8: Return(); Pop(10)

0x2d9: @@ GetPFPosition(Stack[-4])
0x2da: Pop(0)
0x2db: @ GetPFPosition(Stack[-3])
0x2dc: Pop(0)
0x2dd: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2de: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2df: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2e0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e2: PushEmpty(bool, float)
0x2e3: Stack[-1] = Stack[-13]
0x2e4: Call2 0x21f

0x2e5: Pop(2)
0x2e6: Stack[-12] = (bool) 1
0x2e7: Return(); Pop(10)

0x2e8: @ sync()
0x2e9: Pop(0)
0x2ea: GOTO 0x2c6

0x2eb: PushEmpty()
0x2ec: Call2 0x374

0x2ed: Pop(0)
0x2ee: Stack[-12] = (bool) 0
0x2ef: Return(); Pop(10)

0x2f0: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2f1: PushEmpty(bool, object)
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call2 0x6a2

0x2f4: Pop(1)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-11] = (bool) 0
0x2f8: Return(); Pop(10)

0x2f9: PushEmpty(bool)
0x2fa: Call2 0x349

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2fd: @@ GetPFPosition(Stack[-5])
0x2fe: Pop(0)
0x2ff: @ GetPFPosition(Stack[-4])
0x300: Pop(0)
0x301: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x302: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x303: @@ GetAttackDistance(Stack[-1])
0x304: Pop(0)
0x305: Push((int) 50)
0x306: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x307: Pop(0); Push(Stack[-1] * Stack[-1]);
0x308: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x309: Return(); Pop(10)

0x30a: Stack[-11] = (bool) 0
0x30b: Return(); Pop(10)

0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: PushEmpty(bool)
0x30f: Call2 0x2f0

0x310: Pop(0)
0x311: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x312: PushEmpty(bool)
0x313: Call2 0x31c

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: Stack[-1] = (bool) 1
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-1] = (bool) 1
0x319: Return(); Pop(0)

0x31a: Stack[-1] = (bool) 0
0x31b: Return(); Pop(0)

0x31c: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x31d: @ GetScene(Stack[-5])
0x31e: Pop(0)
0x31f: Stack[-4] = (bool) 0
0x320: PushEmpty(cvector, object)
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call2 0x5db

0x323: Pop(1)
0x324: Pop(1); Push(( -Stack[-1])
0x325: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x326: Pop(1)
0x327: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x346

0x32a: @ Face(Stack[-0])
0x32b: Pop(0)
0x32c: Push("all")
0x32d: Push("bjump")
0x32e: @ PlayAnimation(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: @@ GetPFPosition(Stack[-2])
0x331: Pop(0)
0x332: @ GetPFPosition(Stack[-1])
0x333: Pop(0)
0x334: @ WaitForAnimEnd()
0x335: Pop(0)
0x336: PushEmpty()
0x337: Call2 0x374

0x338: Pop(0)
0x339: @ StopAsync()
0x33a: Pop(0)
0x33b: Push(CVector(0.0, 0.0, 0.0))
0x33c: @ SetSpeed(Stack[-1])
0x33d: Pop(1)
0x33e: Stack[-4] = (bool) 1
0x33f: PushEmpty(bool)
0x340: Call2 0x2f0

0x341: Pop(0)
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: GOTO 0x346

0x345: GOTO 0x320

0x346: Stack[-11] = Stack[-4]
0x347: Return(); Pop(10)

0x348: Stack[-5] = 0
0x349: PushEmpty(bool, bool)
0x34a: Push("IsAttacking")
0x34b: Push((int) 1)
0x34c: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x34d: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34e: @@ IsAttacking(Stack[-1])
0x34f: Pop(0)
0x350: Stack[-3] = Stack[-1]
0x351: Return(); Pop(2)

0x352: Stack[-3] = (bool) 0
0x353: Return(); Pop(2)

0x354: PushEmpty(float, int, float, int)
0x355: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(4)

0x358: Push( Stack[5 + Tasks[-1].StackPointer] )
0x359: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35a: Push((int) -1)
0x35b: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x35c: Push((int) 0)
0x35d: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: Return(); Pop(4)

0x360: @ rand(Stack[-2])
0x361: Pop(0)
0x362: PushEmpty(float)
0x363: Call2 0x382

0x364: Pop(0)
0x365: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x367: @ irand(Stack[-1], Stack[-2])
0x368: Pop(0)
0x369: Push((int) 1)
0x36a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x36b: Push("attack")
0x36c: Pop(1); Push(Stack[-1] + Stack[-2]);
0x36d: @ Speak(Stack[-1])
0x36e: Pop(1)
0x36f: PushEmpty(int)
0x370: Call2 0x380

0x371: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x372: Pop(1)
0x373: Return(); Pop(4)

0x374: PushEmpty(object)
0x375: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x376: Call2 0x808

0x377: Pop(1)
0x378: Return(); Pop(0)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "attack_stay"
0x37b: Call2 0x766

0x37c: Pop(1)
0x37d: Return(); Pop(0)

0x37e: Stack[-1] = (bool) 1
0x37f: Return(); Pop(0)

0x380: Stack[-1] = (int) 1
0x381: Return(); Pop(0)

0x382: Stack[-1] = (float) 0.5
0x383: Return(); Pop(0)

0x384: PushEmpty()
0x385: PushEmpty(object)
0x386: Stack[-1] = Stack[-2]
0x387: Call2 0x892

0x388: Pop(1)
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: PushEmpty(bool, object, object)
0x38c: Stack[-2] = Stack[-6]
0x38d: Stack[-1] = Stack[-5]
0x38e: Call2 0x894

0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: Push("kill")
0x393: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x395: Push(GlobalVars[0])
0x396: Stack[-1] = (bool) 1
0x397: GlobalVars[0] = Stack[-1]; Pop(1)
0x398: PushEmpty()
0x399: Call2 0x3db

0x39a: Pop(0)
0x39b: Return(); Pop(0)

0x39c: PushEmpty(bool, bool, bool, bool)
0x39d: PushEmpty(object)
0x39e: Stack[-1] = Stack[-10]
0x39f: Call2 0x808

0x3a0: Pop(1)
0x3a1: Push((int) 1)
0x3a2: Push((int) 5)
0x3a3: @ SetTimer(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: @ CanSee(Stack[-2], Stack[-9])
0x3a6: Pop(0)
0x3a7: Push(Stack[-2])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3aa: PushEmpty(object)
0x3ab: Stack[-1] = Stack[-10]
0x3ac: Call2 0x75b

0x3ad: Pop(1)
0x3ae: GOTO 0x3b0

0x3af: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[-11]
0x3b2: Call2 0x5ea

0x3b3: Pop(1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: PushEmpty(object)
0x3b6: Call2 0x78f

0x3b7: Pop(0)
0x3b8: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3b9: Pop(1)
0x3ba: PushEmpty(bool, object, float, float, bool, bool)
0x3bb: Stack[-5] = Stack[-15]
0x3bc: Stack[-4] = Stack[-14]
0x3bd: Stack[-3] = Stack[-13]
0x3be: Stack[-2] = Stack[-12]
0x3bf: Stack[-1] = Stack[-11]
0x3c0: Call2 0x405

0x3c1: Stack[-7] = Stack[-6]
0x3c2: Pop(6)
0x3c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c5: Push("head")
0x3c6: @ UnlookAsync(Stack[-1])
0x3c7: Pop(1)
0x3c8: Push((int) 1)
0x3c9: @ KillTimer(Stack[-1])
0x3ca: Pop(1)
0x3cb: Stack[-10] = Stack[-1]
0x3cc: Return(); Pop(4)

0x3cd: PushEmpty()
0x3ce: Push((int) 1)
0x3cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: PushEmpty(object)
0x3d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d3: Call2 0x808

0x3d4: Pop(1)
0x3d5: GOTO 0x3da

0x3d6: PushEmpty(int)
0x3d7: Stack[-1] = Stack[-2]
0x3d8: Call2 0x46b

0x3d9: Pop(1)
0x3da: Return(); Pop(0)

0x3db: Push((int) 1)
0x3dc: @ KillTimer(Stack[-1])
0x3dd: Pop(1)
0x3de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3df: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e1: Push("head")
0x3e2: @ UnlookAsync(Stack[-1])
0x3e3: Pop(1)
0x3e4: PushEmpty()
0x3e5: Call2 0x481

0x3e6: Pop(0)
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty()
0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ed: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ef: Stack[-1] = (bool) 1
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3f2: PushEmpty(object)
0x3f3: Stack[-1] = Stack[-2]
0x3f4: Call2 0x75b

0x3f5: Pop(1)
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 0
0x3fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: Stack[-1] = (bool) 1
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x401: Push("head")
0x402: @ UnlookAsync(Stack[-1])
0x403: Pop(1)
0x404: Return(); Pop(0)

0x405: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x406: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x407: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x408: Stack[-7] = Stack[-17]
0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[-23]
0x40b: Call2 0x491

0x40c: Pop(1)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-22] = (bool) 0
0x410: Return(); Pop(16)

0x411: @@ GetPosition(Stack[-5])
0x412: Pop(0)
0x413: @ GetPosition(Stack[-4])
0x414: Pop(0)
0x415: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x416: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x417: PushEmpty(bool)
0x418: Stack[-1] = (bool) 0
0x419: Push((int) 0)
0x41a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x41d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: Stack[-1] = (bool) 1
0x420: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x421: @ Stop()
0x422: Pop(0)
0x423: Stack[-22] = (bool) 0
0x424: Return(); Pop(16)

0x425: Pop(0); Push(Stack[-20] * Stack[-20]);
0x426: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x428: @@ GetPFPosition(Stack[-5])
0x429: Pop(0)
0x42a: @ FindPathTo(Stack[-1], Stack[-5])
0x42b: Pop(0)
0x42c: Pop(0); Push(( Stack[-1] != 0 )
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-6] = Stack[-1]
0x42f: Stack[-1] = 0
0x430: Pop(0); Push(( Stack[-6] != 0 )
0x431: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x432: Push(Stack[-7])
0x433: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x434: Stack[-7] = (bool) 0
0x435: @ RotatePath(Stack[-6], Stack[-8])
0x436: Pop(0)
0x437: Pop(0); Push((bool) Stack[-8] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: GOTO 0x469

0x43a: Push((int) 0)
0x43b: Push((float)0.3)
0x43c: @ SetTimer(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: PushEmpty(string)
0x43f: Call2 0x498

0x440: Pop(0)
0x441: PushEmpty(string)
0x442: Call2 0x49a

0x443: Pop(0)
0x444: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x445: Pop(2)
0x446: Pop(0); Push((bool) Stack[-8] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x448: Push( Stack[0 + Tasks[-1].StackPointer] )
0x449: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44a: Stack[-6] = 0
0x44b: GOTO 0x469

0x44c: GOTO 0x44e

0x44d: GOTO 0x468

0x44e: GOTO 0x450

0x44f: Stack[-6] = 0
0x450: GOTO 0x461

0x451: Push((int) 0)
0x452: @ KillTimer(Stack[-1])
0x453: Pop(1)
0x454: Push((float)0.5)
0x455: @ Sleep(Stack[-1], Stack[-9])
0x456: Pop(1)
0x457: Pop(0); Push((bool) Stack[-8] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x459: Push( Stack[0 + Tasks[-1].StackPointer] )
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-6] = 0
0x45c: GOTO 0x469

0x45d: Push((int) 0)
0x45e: Push((float)0.3)
0x45f: @ SetTimer(Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: Stack[-1] = 0
0x462: GOTO 0x467

0x463: Push((int) 0)
0x464: @ KillTimer(Stack[-1])
0x465: Pop(1)
0x466: GOTO 0x469

0x467: Stack[-6] = 0
0x468: GOTO 0x409

0x469: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x46a: Return(); Pop(16)

0x46b: PushEmpty()
0x46c: Push((int) 0)
0x46d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46f: Return(); Pop(0)

0x470: PushEmpty(bool, object)
0x471: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x472: Call2 0x491

0x473: Pop(1)
0x474: Pop(1); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x477: Push((int) 0)
0x478: @ KillTimer(Stack[-1])
0x479: Pop(1)
0x47a: @ Stop()
0x47b: Pop(0)
0x47c: Return(); Pop(0)

0x47d: PushEmpty()
0x47e: @ RequestClearPath(Stack[-1])
0x47f: Pop(0)
0x480: Return(); Pop(0)

0x481: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x482: Push((int) 0)
0x483: @ KillTimer(Stack[-1])
0x484: Pop(1)
0x485: @ Stop()
0x486: Pop(0)
0x487: Return(); Pop(0)

0x488: PushEmpty()
0x489: PushEmpty()
0x48a: Call2 0x3db

0x48b: Pop(0)
0x48c: PushEmpty(object)
0x48d: Stack[-1] = Stack[-2]
0x48e: Call2 0x849

0x48f: Pop(1)
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[-3]
0x494: Call2 0x6a2

0x495: Stack[-4] = Stack[-2]
0x496: Pop(2)
0x497: Return(); Pop(0)

0x498: Stack[-1] = "walk"
0x499: Return(); Pop(0)

0x49a: Stack[-1] = "run"
0x49b: Return(); Pop(0)

0x49c: PushEmpty()
0x49d: PushEmpty(bool, object)
0x49e: Stack[-1] = Stack[-3]
0x49f: Push(-2, 0); TaskCall(0)
0x4a0: Call2 0x0

0x4a1: Pop(-2, 0); TaskReturn
0x4a2: Pop(2)
0x4a3: Push((int) 1)
0x4a4: @ Sleep(Stack[-1])
0x4a5: Pop(1)
0x4a6: GOTO 0x49d

0x4a7: Return(); Pop(0)

0x4a8: PushEmpty(string)
0x4a9: Stack[-1] = "hunt"
0x4aa: Call2 0x4ad

0x4ab: Pop(1)
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty()
0x4ae: Push((int) 3)
0x4af: @ Sleep(Stack[-1])
0x4b0: Pop(1)
0x4b1: PushEmpty(string)
0x4b2: Stack[-1] = Stack[-2]
0x4b3: Call2 0x4d9

0x4b4: Pop(1)
0x4b5: GOTO 0x4ae

0x4b6: Return(); Pop(0)

0x4b7: PushEmpty()
0x4b8: PushEmpty(bool, object)
0x4b9: Stack[-1] = Stack[-3]
0x4ba: Call2 0x84f

0x4bb: Pop(1)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4bd: PushEmpty()
0x4be: Call2 0x520

0x4bf: Pop(0)
0x4c0: PushEmpty(object)
0x4c1: Stack[-1] = Stack[-2]
0x4c2: Call2 0x856

0x4c3: Pop(1)
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty(bool, bool)
0x4c6: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4c7: Pop(0)
0x4c8: Push(Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4ca: PushEmpty(object)
0x4cb: Stack[-1] = Stack[-4]
0x4cc: Call2 0x4b7

0x4cd: Pop(1)
0x4ce: Return(); Pop(2)

0x4cf: PushEmpty(bool, bool)
0x4d0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4d1: Pop(0)
0x4d2: Push(Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d4: PushEmpty(object)
0x4d5: Stack[-1] = Stack[-4]
0x4d6: Call2 0x4b7

0x4d7: Pop(1)
0x4d8: Return(); Pop(2)

0x4d9: PushEmpty(bool, int, int, bool, float, bool, bool, int, int, bool, float, bool)
0x4da: @ WaitForAnimEnd()
0x4db: Pop(0)
0x4dc: PushEmpty(bool)
0x4dd: Call2 0x756

0x4de: Pop(0)
0x4df: Pop(1); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: Return(); Pop(12)

0x4e2: Push("all")
0x4e3: @ HasAnimation(Stack[-7], Stack[-1], Stack[-14])
0x4e4: Pop(1)
0x4e5: Pop(0); Push((bool) Stack[-6] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Return(); Pop(12)

0x4e8: Stack[-5] = (int) 0
0x4e9: PushEmpty(bool)
0x4ea: Stack[-1] = (bool) 0
0x4eb: Push((int) 5)
0x4ec: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ee: PushEmpty(bool)
0x4ef: Call2 0x756

0x4f0: Pop(0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f2: Stack[-1] = (bool) 1
0x4f3: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x4f4: Push((int) 3)
0x4f5: @ irand(Stack[-5], Stack[-1])
0x4f6: Pop(1)
0x4f7: Push((int) 0)
0x4f8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fa: Push("all")
0x4fb: @ PlayAnimation(Stack[-1], Stack[-14])
0x4fc: Pop(1)
0x4fd: @ WaitForAnimEnd(Stack[-3])
0x4fe: Pop(0)
0x4ff: Pop(0); Push((bool) Stack[-3] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: GOTO 0x51d

0x502: GOTO 0x514

0x503: Push((int) 1)
0x504: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x506: Push((int) 4)
0x507: @ rand(Stack[-3], Stack[-1])
0x508: Pop(1)
0x509: Push((int) 1)
0x50a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x50b: @ Sleep(Stack[-1], Stack[-2])
0x50c: Pop(1)
0x50d: Pop(0); Push((bool) Stack[-1] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: GOTO 0x51d

0x510: GOTO 0x514

0x511: Push(Stack[-5])
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: GOTO 0x51d

0x514: PushEmpty(bool)
0x515: Call2 0x51e

0x516: Pop(0)
0x517: Pop(1); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x519: GOTO 0x51d

0x51a: Push((int) 1)
0x51b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x51c: GOTO 0x4e9

0x51d: Return(); Pop(12)

0x51e: Stack[-1] = (bool) 1
0x51f: Return(); Pop(0)

0x520: @ StopAnimation()
0x521: Pop(0)
0x522: @ StopGroup0()
0x523: Pop(0)
0x524: Return(); Pop(0)

0x525: PushEmpty()
0x526: Push("b1q04_dead")
0x527: Push((int) 1)
0x528: @ SetVariable(Stack[-2], Stack[-1])
0x529: Pop(2)
0x52a: PushEmpty(bool, object)
0x52b: Stack[-1] = Stack[-3]
0x52c: Call2 0x5ea

0x52d: Pop(1)
0x52e: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x52f: PushEmpty(bool, object, float)
0x530: Stack[-2] = Stack[-4]
0x531: Stack[-1] = (float) 0.03
0x532: Call2 0x7d1

0x533: Pop(3)
0x534: PushEmpty(object)
0x535: Stack[-1] = Stack[-2]
0x536: Call2 0x539

0x537: Pop(1)
0x538: Return(); Pop(0)

0x539: PushEmpty()
0x53a: EventDisable(0)
0x53b: PushEmpty(object)
0x53c: Stack[-1] = Stack[-2]
0x53d: Call2 0x552

0x53e: Pop(1)
0x53f: Push((int) 50)
0x540: Push((int) 40)
0x541: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x542: Pop(2)
0x543: EventEnable(0)
0x544: @ Hold()
0x545: Pop(0)
0x546: GOTO 0x544

0x547: Return(); Pop(0)

0x548: PushEmpty(bool, bool)
0x549: @ IsOverrideActive(Stack[-1])
0x54a: Pop(0)
0x54b: Pop(0); Push((bool) Stack[-1] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54d: PushEmpty(object)
0x54e: Stack[-1] = Stack[-4]
0x54f: Call2 0x862

0x550: Pop(1)
0x551: Return(); Pop(2)

0x552: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x553: Pop(0); Push((bool) Stack[-21] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x555: PushEmpty(string)
0x556: Stack[-1] = "fdie"
0x557: Call2 0x5ad

0x558: Pop(1)
0x559: GOTO 0x5ac

0x55a: @@ GetPosition(Stack[-10])
0x55b: Pop(0)
0x55c: @ GetPosition(Stack[-9])
0x55d: Pop(0)
0x55e: @ GetDirection(Stack[-8])
0x55f: Pop(0)
0x560: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x561: Push(CvectorIndex(Stack[-7], 0))
0x562: Push(CvectorIndex(Stack[-9], 0))
0x563: Pop(2); Push(Stack[-2] * Stack[-1]);
0x564: Push(CvectorIndex(Stack[-8], 2))
0x565: Push(CvectorIndex(Stack[-10], 2))
0x566: Pop(2); Push(Stack[-2] * Stack[-1]);
0x567: Pop(2); Push(Stack[-2] + Stack[-1]);
0x568: Push((int) 0)
0x569: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56b: Stack[-6] = "fdie"
0x56c: GOTO 0x56e

0x56d: Stack[-6] = "bdie"
0x56e: @ RemoveRTEnvelope()
0x56f: Pop(0)
0x570: @ SetDeathState()
0x571: Pop(0)
0x572: @ Stop()
0x573: Pop(0)
0x574: @ StopAsync()
0x575: Pop(0)
0x576: Stack[-5] = Stack[-21]
0x577: Push("GetScriptProperty")
0x578: Push((int) 2)
0x579: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x57a: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x57b: Push("Owner")
0x57c: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x57d: Pop(1)
0x57e: Push(Stack[-4])
0x57f: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x580: Push("Owner")
0x581: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x582: Pop(1)
0x583: Pop(0); Push((bool) Stack[-5] == 0)
0x584: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x585: Stack[-5] = Stack[-21]
0x586: Push("@GetEyesHeight")
0x587: Push((int) 1)
0x588: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x589: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x58a: @@ GetEyesHeight(Stack[-2])
0x58b: Pop(0)
0x58c: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x58d: Push(CvectorIndex(Stack[-1], 1))
0x58e: Stack[-1] = Stack[-3]
0x58f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x590: Push("head")
0x591: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x592: Pop(1)
0x593: Stack[-3] = (bool) 1
0x594: GOTO 0x596

0x595: Stack[-3] = (bool) 0
0x596: PushEmpty(string)
0x597: Stack[-1] = Stack[-7]
0x598: Call2 0x766

0x599: Pop(1)
0x59a: Push("all")
0x59b: @ PlayAnimation(Stack[-1], Stack[-7])
0x59c: Pop(1)
0x59d: @ WaitForAnimEnd()
0x59e: Pop(0)
0x59f: Push(Stack[-3])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a1: @ StopAsync()
0x5a2: Pop(0)
0x5a3: Push("head")
0x5a4: @ UnlookAsync(Stack[-1])
0x5a5: Pop(1)
0x5a6: Push("all")
0x5a7: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5a8: Pop(1)
0x5a9: @ RemoveEnvelope()
0x5aa: Pop(0)
0x5ab: Stack[-5] = 0
0x5ac: Return(); Pop(20)

0x5ad: PushEmpty()
0x5ae: @ RemoveRTEnvelope()
0x5af: Pop(0)
0x5b0: @ SetDeathState()
0x5b1: Pop(0)
0x5b2: @ Stop()
0x5b3: Pop(0)
0x5b4: @ StopAsync()
0x5b5: Pop(0)
0x5b6: @ StopSecondaryAnimation()
0x5b7: Pop(0)
0x5b8: PushEmpty(string)
0x5b9: Stack[-1] = Stack[-2]
0x5ba: Call2 0x766

0x5bb: Pop(1)
0x5bc: Push("all")
0x5bd: @ PlayAnimation(Stack[-1], Stack[-2])
0x5be: Pop(1)
0x5bf: @ WaitForAnimEnd()
0x5c0: Pop(0)
0x5c1: Push("all")
0x5c2: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5c3: Pop(1)
0x5c4: @ RemoveEnvelope()
0x5c5: Pop(0)
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty()
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty()
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty()
0x5ce: Push((int) 2)
0x5cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d1: Stack[-2] = "fire"
0x5d2: Return(); Pop(0)

0x5d3: GOTO 0x5d9

0x5d4: Push((int) 1)
0x5d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d7: Stack[-2] = "bullet"
0x5d8: Return(); Pop(0)

0x5d9: Stack[-2] = "phys"
0x5da: Return(); Pop(0)

0x5db: PushEmpty(cvector, cvector, cvector, cvector)
0x5dc: @ GetPosition(Stack[-2])
0x5dd: Pop(0)
0x5de: @@ GetPosition(Stack[-1])
0x5df: Pop(0)
0x5e0: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e1: Return(); Pop(4)

0x5e2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e3: @ GetPosition(Stack[-3])
0x5e4: Pop(0)
0x5e5: @@ GetPosition(Stack[-2])
0x5e6: Pop(0)
0x5e7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5e8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5e9: Return(); Pop(6)

0x5ea: PushEmpty(bool, bool)
0x5eb: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5ec: Pop(0)
0x5ed: Stack[-4] = Stack[-1]
0x5ee: Return(); Pop(2)

0x5ef: PushEmpty(bool, bool)
0x5f0: Push("HasProperty")
0x5f1: Push((int) 2)
0x5f2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f3: Pop(1); Push((bool) Stack[-1] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f5: Stack[-5] = (bool) 0
0x5f6: Return(); Pop(2)

0x5f7: @@ HasProperty(Stack[-3], Stack[-1])
0x5f8: Pop(0)
0x5f9: Stack[-5] = Stack[-1]
0x5fa: Return(); Pop(2)

0x5fb: PushEmpty(float, float)
0x5fc: PushEmpty(bool, object, string)
0x5fd: Stack[-2] = Stack[-10]
0x5fe: Stack[-1] = Stack[-9]
0x5ff: Call2 0x5ef

0x600: Pop(2)
0x601: Pop(1); Push((bool) Stack[-1] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-8] = (bool) 0
0x604: Return(); Pop(2)

0x605: @@ GetProperty(Stack[-6], Stack[-1])
0x606: Pop(0)
0x607: PushEmpty(float, float, float, float)
0x608: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x609: Stack[-2] = Stack[-8]
0x60a: Stack[-1] = Stack[-7]
0x60b: Call2 0x7be

0x60c: Pop(3)
0x60d: @@ SetProperty(Stack[-7], Stack[-1])
0x60e: Pop(1)
0x60f: Stack[-8] = (bool) 1
0x610: Return(); Pop(2)

0x611: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x612: PushEmpty(bool, object, string)
0x613: Stack[-2] = Stack[-18]
0x614: Stack[-1] = "health"
0x615: Call2 0x5ef

0x616: Pop(2)
0x617: Pop(1); Push((bool) Stack[-1] == 0)
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-16] = (float) 0.0
0x61a: Return(); Pop(12)

0x61b: PushEmpty(bool, object, string)
0x61c: Stack[-2] = Stack[-18]
0x61d: Stack[-1] = "armor"
0x61e: Call2 0x5ef

0x61f: Pop(2)
0x620: Pop(1); Push((bool) Stack[-1] == 0)
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: Stack[-6] = (int) 0
0x623: GOTO 0x627

0x624: Push("armor")
0x625: @@ GetProperty(Stack[-1], Stack[-7])
0x626: Pop(1)
0x627: Push("armor_")
0x628: PushEmpty(string, int)
0x629: Stack[-1] = Stack[-16]
0x62a: Call2 0x5cd

0x62b: Pop(1)
0x62c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x62d: PushEmpty(bool, object, string)
0x62e: Stack[-2] = Stack[-18]
0x62f: Stack[-1] = Stack[-8]
0x630: Call2 0x5ef

0x631: Pop(2)
0x632: Pop(1); Push((bool) Stack[-1] == 0)
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-4] = (int) 0
0x635: GOTO 0x638

0x636: @@ GetProperty(Stack[-5], Stack[-4])
0x637: Pop(0)
0x638: PushEmpty(float, float, float)
0x639: Pop(0); Push(Stack[-9] + Stack[-7]);
0x63a: Push((float)100.0)
0x63b: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x63c: Stack[-1] = (int) 1
0x63d: Call2 0x79f

0x63e: Stack[-6] = Stack[-3]
0x63f: Pop(3)
0x640: Push("health")
0x641: @@ GetProperty(Stack[-1], Stack[-3])
0x642: Pop(1)
0x643: Push((int) 1)
0x644: Pop(1); Push(Stack[-1] - Stack[-4]);
0x645: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x646: Push("health")
0x647: PushEmpty(float, float, float, float)
0x648: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x649: Stack[-2] = (int) 0
0x64a: Stack[-1] = (int) 1
0x64b: Call2 0x7be

0x64c: Pop(3)
0x64d: @@ SetProperty(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: PushEmpty(bool, object)
0x650: Stack[-1] = Stack[-17]
0x651: Call2 0x5ea

0x652: Pop(1)
0x653: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x654: PushEmpty(float)
0x655: Stack[-1] = -Stack[-2]; Pop(0);
0x656: Call2 0x7f4

0x657: Pop(1)
0x658: Stack[-16] = Stack[-1]
0x659: Return(); Pop(12)

0x65a: PushEmpty(float, float)
0x65b: PushEmpty(bool, object, string)
0x65c: Stack[-2] = Stack[-6]
0x65d: Stack[-1] = "health"
0x65e: Call2 0x5ef

0x65f: Pop(2)
0x660: Pop(1); Push((bool) Stack[-1] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-4] = (bool) 0
0x663: Return(); Pop(2)

0x664: PushEmpty(bool)
0x665: Stack[-1] = (bool) 0
0x666: PushEmpty(bool, object)
0x667: Stack[-1] = Stack[-6]
0x668: Call2 0x5ea

0x669: Pop(1)
0x66a: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66b: PushEmpty(bool)
0x66c: Call2 0x81c

0x66d: Pop(0)
0x66e: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66f: Stack[-1] = (bool) 1
0x670: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x671: Stack[-4] = (bool) 0
0x672: Return(); Pop(2)

0x673: Push("health")
0x674: @@ GetProperty(Stack[-1], Stack[-2])
0x675: Pop(1)
0x676: Push((float)0.0)
0x677: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x678: Return(); Pop(2)

0x679: PushEmpty(bool, bool)
0x67a: @@ IsDead(Stack[-1])
0x67b: Pop(0)
0x67c: Stack[-4] = Stack[-1]
0x67d: Return(); Pop(2)

0x67e: PushEmpty(object, object, object, object)
0x67f: Pop(0); Push((bool) Stack[-5] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-6] = (bool) 0
0x682: Return(); Pop(4)

0x683: PushEmpty(bool)
0x684: Stack[-1] = (bool) 0
0x685: Push("IsDead")
0x686: Push((int) 1)
0x687: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x688: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x689: PushEmpty(bool, object)
0x68a: Stack[-1] = Stack[-8]
0x68b: Call2 0x679

0x68c: Pop(1)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: Stack[-1] = (bool) 1
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-6] = (bool) 0
0x691: Return(); Pop(4)

0x692: @ GetScene(Stack[-2])
0x693: Pop(0)
0x694: Pop(0); Push((bool) Stack[-2] == 0)
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-6] = (bool) 0
0x697: Return(); Pop(4)

0x698: @@ GetScene(Stack[-1])
0x699: Pop(0)
0x69a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-6] = (bool) 0
0x69d: Return(); Pop(4)

0x69e: Stack[-6] = (bool) 1
0x69f: Return(); Pop(4)

0x6a0: Stack[-1] = 0
0x6a1: Stack[-2] = 0
0x6a2: PushEmpty(int, int)
0x6a3: PushEmpty(bool, object)
0x6a4: Stack[-1] = Stack[-5]
0x6a5: Call2 0x67e

0x6a6: Pop(1)
0x6a7: Pop(1); Push((bool) Stack[-1] == 0)
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: Stack[-4] = (bool) 0
0x6aa: Return(); Pop(2)

0x6ab: PushEmpty(bool, object, string)
0x6ac: Stack[-2] = Stack[-6]
0x6ad: Stack[-1] = "noaccess"
0x6ae: Call2 0x5ef

0x6af: Pop(2)
0x6b0: Pop(1); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b2: Stack[-4] = (bool) 1
0x6b3: Return(); Pop(2)

0x6b4: Push("noaccess")
0x6b5: @@ GetProperty(Stack[-1], Stack[-2])
0x6b6: Pop(1)
0x6b7: Push((int) 0)
0x6b8: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6b9: Return(); Pop(2)

0x6ba: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6bb: @ GetPosition(Stack[-3])
0x6bc: Pop(0)
0x6bd: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6be: Push(CvectorIndex(Stack[-2], 0))
0x6bf: Push(CvectorIndex(Stack[-3], 2))
0x6c0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6c1: Pop(2)
0x6c2: Stack[-8] = Stack[-1]
0x6c3: Return(); Pop(6)

0x6c4: PushEmpty(cvector, cvector)
0x6c5: @@ GetPosition(Stack[-1])
0x6c6: Pop(0)
0x6c7: PushEmpty(bool, cvector)
0x6c8: Stack[-1] = Stack[-3]
0x6c9: Call2 0x6ba

0x6ca: Stack[-6] = Stack[-2]
0x6cb: Pop(2)
0x6cc: Return(); Pop(2)

0x6cd: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6ce: Pop(0); Push((bool) Stack[-15] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6d0: Return(); Pop(14)

0x6d1: @ IsDead(Stack[-7])
0x6d2: Pop(0)
0x6d3: Push(Stack[-7])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: Return(); Pop(14)

0x6d6: @ GetSecondaryAnimationType(Stack[-6])
0x6d7: Pop(0)
0x6d8: Push((int) 0)
0x6d9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6db: Return(); Pop(14)

0x6dc: @@ GetPosition(Stack[-5])
0x6dd: Pop(0)
0x6de: @ GetPosition(Stack[-4])
0x6df: Pop(0)
0x6e0: @ GetDirection(Stack[-3])
0x6e1: Pop(0)
0x6e2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6e3: Push(CvectorIndex(Stack[-2], 0))
0x6e4: Push(CvectorIndex(Stack[-4], 0))
0x6e5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e6: Push(CvectorIndex(Stack[-3], 2))
0x6e7: Push(CvectorIndex(Stack[-5], 2))
0x6e8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ea: Push((int) 0)
0x6eb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ed: Stack[-1] = "fhit"
0x6ee: GOTO 0x6f0

0x6ef: Stack[-1] = "bhit"
0x6f0: Push("hit_react")
0x6f1: Push("1")
0x6f2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f3: Push("2")
0x6f4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6f5: Push((int) -10)
0x6f6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(4)
0x6f8: Return(); Pop(14)

0x6f9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6fa: PushEmpty(bool)
0x6fb: Stack[-1] = (bool) 0
0x6fc: PushEmpty(bool)
0x6fd: Stack[-1] = (bool) 0
0x6fe: Push(Stack[-23])
0x6ff: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x700: Push((int) 4)
0x701: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x703: Stack[-1] = (bool) 1
0x704: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x705: Push((int) 5)
0x706: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x708: Stack[-1] = (bool) 1
0x709: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x70a: PushEmpty(cvector, cvector)
0x70b: PushEmpty(cvector, object)
0x70c: Stack[-1] = Stack[-25]
0x70d: Call2 0x5db

0x70e: Stack[-3] = Stack[-2]
0x70f: Pop(2)
0x710: Call2 0x795

0x711: Stack[-11] = Stack[-2]
0x712: Pop(2)
0x713: @ CreateVectorVector(Stack[-8])
0x714: Pop(0)
0x715: Stack[-7] = (int) 1
0x716: Push("hit")
0x717: Pop(1); Push(Stack[-1] + Stack[-8]);
0x718: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x719: Pop(1)
0x71a: Pop(0); Push((bool) Stack[-6] == 0)
0x71b: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71c: GOTO 0x726

0x71d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x71e: Push((float)0.70711)
0x71f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x721: @@ add(Stack[-5])
0x722: Pop(0)
0x723: Push((int) 1)
0x724: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x725: GOTO 0x716

0x726: @@ size(Stack[-3])
0x727: Pop(0)
0x728: Push(Stack[-3])
0x729: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x72a: @ irand(Stack[-2], Stack[-3])
0x72b: Pop(0)
0x72c: @@ get(Stack[-1], Stack[-2])
0x72d: Pop(0)
0x72e: PushEmpty(object, int, float, cvector, cvector)
0x72f: Stack[-5] = Stack[-26]
0x730: Stack[-4] = Stack[-25]
0x731: Stack[-3] = Stack[-24]
0x732: Stack[-2] = Stack[-6]
0x733: Stack[-1] = -Stack[-14]; Pop(0);
0x734: Call2 0x73d

0x735: Pop(5)
0x736: Return(); Pop(18)

0x737: Stack[-8] = 0
0x738: PushEmpty(object)
0x739: Stack[-1] = Stack[-22]
0x73a: Call2 0x6cd

0x73b: Pop(1)
0x73c: Return(); Pop(18)

0x73d: PushEmpty(object, object, object, object)
0x73e: @ GetScene(Stack[-2])
0x73f: Pop(0)
0x740: Push("scripted")
0x741: Push("blood_dir.xml")
0x742: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x743: Pop(2)
0x744: PushEmpty(object)
0x745: Stack[-1] = Stack[-10]
0x746: Call2 0x6cd

0x747: Pop(1)
0x748: Return(); Pop(4)

0x749: Stack[-1] = 0
0x74a: Stack[-2] = 0
0x74b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x74c: @@ GetPosition(Stack[-3])
0x74d: Pop(0)
0x74e: @ GetPosition(Stack[-2])
0x74f: Pop(0)
0x750: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x751: Push(CvectorIndex(Stack[-1], 0))
0x752: Push(CvectorIndex(Stack[-2], 2))
0x753: @ RotateAsync(Stack[-2], Stack[-1])
0x754: Pop(2)
0x755: Return(); Pop(6)

0x756: PushEmpty(bool, bool)
0x757: @ IsLoaded(Stack[-1])
0x758: Pop(0)
0x759: Stack[-3] = Stack[-1]
0x75a: Return(); Pop(2)

0x75b: PushEmpty(float, cvector, float, cvector)
0x75c: @@ GetEyesHeight(Stack[-2])
0x75d: Pop(0)
0x75e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x75f: Push(CvectorIndex(Stack[-1], 1))
0x760: Stack[-1] = Stack[-3]
0x761: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x762: Push("head")
0x763: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x764: Pop(1)
0x765: Return(); Pop(4)

0x766: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x767: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x768: Pop(0)
0x769: Pop(0); Push((bool) Stack[-8] == 0)
0x76a: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x76b: Stack[-7] = (int) 0
0x76c: Push((int) 1)
0x76d: Pop(1); Push(Stack[-8] + Stack[-1]);
0x76e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x76f: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x770: Pop(1)
0x771: Pop(0); Push((bool) Stack[-6] == 0)
0x772: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x773: GOTO 0x777

0x774: Push((int) 1)
0x775: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x776: GOTO 0x76c

0x777: Pop(0); Push((bool) Stack[-7] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: Return(); Pop(16)

0x77a: @ irand(Stack[-5], Stack[-7])
0x77b: Pop(0)
0x77c: Push((int) 1)
0x77d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x77e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x77f: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x780: Pop(0)
0x781: Push(Stack[-4])
0x782: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x783: @ GetEyesHeight(Stack[-3])
0x784: Pop(0)
0x785: @ GetDirection(Stack[-2])
0x786: Pop(0)
0x787: Push((int) 50)
0x788: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x789: Push(CvectorIndex(Stack[-1], 1))
0x78a: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x78b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x78c: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x78d: Pop(0)
0x78e: Return(); Pop(16)

0x78f: PushEmpty(object, object)
0x790: @ self(Stack[-1])
0x791: Pop(0)
0x792: Stack[-3] = Stack[-1]
0x793: Return(); Pop(2)

0x794: Stack[-1] = 0
0x795: PushEmpty(float, float)
0x796: Pop(0); Push(Stack[-3] | Stack[-3]);
0x797: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x798: Push((float)0.0)
0x799: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x79c: Return(); Pop(2)

0x79d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x79e: Return(); Pop(2)

0x79f: PushEmpty()
0x7a0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a2: Stack[-3] = Stack[-2]
0x7a3: GOTO 0x7a5

0x7a4: Stack[-3] = Stack[-1]
0x7a5: Return(); Pop(0)

0x7a6: PushEmpty()
0x7a7: Pop(0); Push(Stack[-2] * Stack[-2]);
0x7a8: Push((int) 4)
0x7a9: Pop(1); Push(Stack[-1] * Stack[-5]);
0x7aa: Pop(1); Push(Stack[-1] * Stack[-3]);
0x7ab: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7ac: Return(); Pop(0)

0x7ad: PushEmpty(float, float)
0x7ae: Pop(0); Push(( -Stack[-5])
0x7af: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7b0: Push((int) 2)
0x7b1: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7b2: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7b3: Push((int) 0)
0x7b4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-7] = Stack[-1]
0x7b7: Return(); Pop(2)

0x7b8: Pop(0); Push(( -Stack[-5])
0x7b9: Pop(1); Push(Stack[-1] + Stack[-4]);
0x7ba: Push((int) 2)
0x7bb: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7bc: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x7bd: Return(); Pop(2)

0x7be: PushEmpty()
0x7bf: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: Stack[-4] = Stack[-2]
0x7c2: Return(); Pop(0)

0x7c3: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: Stack[-4] = Stack[-1]
0x7c6: Return(); Pop(0)

0x7c7: Stack[-4] = Stack[-3]
0x7c8: Return(); Pop(0)

0x7c9: PushEmpty()
0x7ca: Stack[-4] = (bool) 0
0x7cb: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cd: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: Stack[-4] = (bool) 1
0x7d0: Return(); Pop(0)

0x7d1: PushEmpty()
0x7d2: Pop(0); Push((bool) Stack[-2] == 0)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-3] = (bool) 0
0x7d5: Return(); Pop(0)

0x7d6: Push((int) 0)
0x7d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d9: Push((int) 8)
0x7da: @ SendWorldWndMessage(Stack[-1])
0x7db: Pop(1)
0x7dc: GOTO 0x7e6

0x7dd: Push((int) 0)
0x7de: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7df: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e0: Push((int) 9)
0x7e1: @ SendWorldWndMessage(Stack[-1])
0x7e2: Pop(1)
0x7e3: GOTO 0x7e6

0x7e4: Stack[-3] = (bool) 0
0x7e5: Return(); Pop(0)

0x7e6: PushEmpty(float)
0x7e7: Stack[-1] = Stack[-2]
0x7e8: Call2 0x7fe

0x7e9: Pop(1)
0x7ea: PushEmpty(bool, object, string, float, float, float)
0x7eb: Stack[-5] = Stack[-8]
0x7ec: Stack[-4] = "reputation"
0x7ed: Stack[-3] = Stack[-7]
0x7ee: Stack[-2] = (int) 0
0x7ef: Stack[-1] = (int) 1
0x7f0: Call2 0x5fb

0x7f1: Pop(6)
0x7f2: Stack[-3] = (bool) 1
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty(object, object)
0x7f5: @ CreateFloatVector(Stack[-1])
0x7f6: Pop(0)
0x7f7: @@ add(Stack[-3])
0x7f8: Pop(0)
0x7f9: Push((int) 15)
0x7fa: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7fb: Pop(1)
0x7fc: Return(); Pop(2)

0x7fd: Stack[-1] = 0
0x7fe: PushEmpty(object, object)
0x7ff: @ CreateFloatVector(Stack[-1])
0x800: Pop(0)
0x801: @@ add(Stack[-3])
0x802: Pop(0)
0x803: Push((int) 16)
0x804: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x805: Pop(1)
0x806: Return(); Pop(2)

0x807: Stack[-1] = 0
0x808: PushEmpty(bool, bool)
0x809: @ IsPlayerActor(Stack[-3], Stack[-1])
0x80a: Pop(0)
0x80b: Push(Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80d: Push("attack")
0x80e: @ PlayGlobalMusic(Stack[-1])
0x80f: Pop(1)
0x810: Return(); Pop(2)

0x811: PushEmpty(object, object)
0x812: @ GetScene(Stack[-1])
0x813: Pop(0)
0x814: Push("battle")
0x815: PushEmpty(object)
0x816: Call2 0x78f

0x817: Pop(0)
0x818: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x819: Pop(2)
0x81a: Return(); Pop(2)

0x81b: Stack[-1] = 0
0x81c: PushEmpty(bool, bool)
0x81d: Push("god_mode")
0x81e: @ GetVariable(Stack[-1], Stack[-2])
0x81f: Pop(1)
0x820: Stack[-3] = Stack[-1]
0x821: Return(); Pop(2)

0x822: PushEmpty()
0x823: PushEmpty(object)
0x824: Stack[-1] = Stack[-2]
0x825: Push(-1, 0); TaskCall(6)
0x826: Call2 0x525

0x827: Pop(-1, 0); TaskReturn
0x828: Pop(1)
0x829: Return(); Pop(0)

0x82a: PushEmpty()
0x82b: PushEmpty(object, int, float)
0x82c: Stack[-3] = Stack[-7]
0x82d: Stack[-2] = Stack[-6]
0x82e: Stack[-1] = Stack[-5]
0x82f: Call2 0x6f9

0x830: Pop(3)
0x831: Return(); Pop(0)

0x832: PushEmpty()
0x833: PushEmpty(object, int, float, cvector, cvector)
0x834: Stack[-5] = Stack[-11]
0x835: Stack[-4] = Stack[-10]
0x836: Stack[-3] = Stack[-9]
0x837: Stack[-2] = Stack[-7]
0x838: Stack[-1] = Stack[-6]
0x839: Call2 0x73d

0x83a: Pop(5)
0x83b: Return(); Pop(0)

0x83c: PushEmpty(float, float)
0x83d: Push("health")
0x83e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x840: Push("health")
0x841: @ GetProperty(Stack[-1], Stack[-2])
0x842: Pop(1)
0x843: Push((int) 0)
0x844: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x846: @ SignalDeath(Stack[-4])
0x847: Pop(0)
0x848: Return(); Pop(2)

0x849: PushEmpty()
0x84a: PushEmpty(object)
0x84b: Stack[-1] = Stack[-2]
0x84c: Call2 0x822

0x84d: Pop(1)
0x84e: Return(); Pop(0)

0x84f: PushEmpty()
0x850: PushEmpty(bool, object)
0x851: Stack[-1] = Stack[-3]
0x852: Call2 0x6a2

0x853: Stack[-4] = Stack[-2]
0x854: Pop(2)
0x855: Return(); Pop(0)

0x856: PushEmpty()
0x857: PushEmpty(object)
0x858: Stack[-1] = Stack[-2]
0x859: Call2 0x897

0x85a: Pop(1)
0x85b: Return(); Pop(0)

0x85c: PushEmpty(int, int)
0x85d: Push("branch")
0x85e: @ GetVariable(Stack[-1], Stack[-2])
0x85f: Pop(1)
0x860: Stack[-3] = Stack[-1]
0x861: Return(); Pop(2)

0x862: PushEmpty()
0x863: PushEmpty(int)
0x864: Call2 0x85c

0x865: Pop(0)
0x866: Push((int) 1)
0x867: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x869: @ WorkWithCorpse(Stack[-1])
0x86a: Pop(0)
0x86b: GOTO 0x86e

0x86c: @ Barter(Stack[-1])
0x86d: Pop(0)
0x86e: Return(); Pop(0)

0x86f: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x870: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x871: Stack[-5] = (int) 250000
0x872: Push(CvectorIndex(Stack[-6], 1))
0x873: Push((int) 1000)
0x874: Pop(2); Push(Stack[-2] * Stack[-1]);
0x875: Pop(0); Push(Stack[-14] * Stack[-14]);
0x876: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x877: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x878: PushEmpty(float, float, float, float)
0x879: Stack[-3] = Stack[-9]
0x87a: Stack[-2] = Stack[-8]
0x87b: Stack[-1] = Stack[-7]
0x87c: Call2 0x7a6

0x87d: Stack[-6] = Stack[-4]
0x87e: Pop(4)
0x87f: Push((int) 0)
0x880: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-1] = (int) 1
0x883: GOTO 0x88c

0x884: PushEmpty(float, float, float, float, float)
0x885: Stack[-4] = Stack[-10]
0x886: Stack[-3] = Stack[-9]
0x887: Stack[-2] = Stack[-8]
0x888: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x889: Call2 0x7ad

0x88a: Pop(4)
0x88b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x88c: Push(CVector(0.0, 500.0, 0.0))
0x88d: Pop(1); Push(Stack[-1] * Stack[-2]);
0x88e: Pop(1); Push(Stack[-1] * Stack[-2]);
0x88f: Pop(1); Push(Stack[-7] + Stack[-1]);
0x890: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x891: Return(); Pop(12)

0x892: PushEmpty()
0x893: Return(); Pop(0)

0x894: PushEmpty()
0x895: Stack[-3] = (bool) 0
0x896: Return(); Pop(0)

0x897: PushEmpty(object, object)
0x898: Push("b1q04_attack")
0x899: Push((int) 1)
0x89a: @ SetVariable(Stack[-2], Stack[-1])
0x89b: Pop(2)
0x89c: @ GetScene(Stack[-1])
0x89d: Pop(0)
0x89e: PushEmpty(object)
0x89f: Call2 0x78f

0x8a0: Pop(0)
0x8a1: @@ RemoveStationaryActor(Stack[-1])
0x8a2: Pop(1)
0x8a3: PushEmpty(object)
0x8a4: Stack[-1] = Stack[-4]
0x8a5: Push(-1, 0); TaskCall(4)
0x8a6: Call2 0x49c

0x8a7: Pop(-1, 0); TaskReturn
0x8a8: Pop(1)
0x8a9: Return(); Pop(2)

0x8aa: Stack[-1] = 0
