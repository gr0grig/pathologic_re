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
	quest_b9_01
	doberman_dead
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	factory_fight
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
	scripted
	blood_dir.xml
	reputation
	battle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood

Import:
	FindActor (2 args)
	IsPlayerActor (2 args)
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
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	RemoveActor (1 args)
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
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x459
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_1 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x2dc Vars = (int)
		EVENT_1 Op = 0x2f7 Vars = (object)
		EVENT_2 Op = 0x306 Vars = (object)
		EVENT_10 Op = 0x38c Vars = (object)
		EVENT_41 Op = 0x397 Vars = (object)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x3ca Vars = (object)
		EVENT_6 Op = 0x3d4 Vars = ()
		EVENT_22 Op = 0x451 Vars = (object, int, float, float)
		EVENT_16 Op = 0x453 Vars = (object, string)
		EVENT_41 Op = 0x455 Vars = (object)
	GTASK_3  Params = 0
		EVENT_0 Op = 0x45d Vars = (object)
		EVENT_17 Op = 0x469 Vars = (object)
		EVENT_26 Op = 0x474 Vars = (string)

Events:
EVENT_22 Op = 0x6bd Vars = (object, int, float, float)
EVENT_43 Op = 0x6c5 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6cf Vars = (object, string)
EVENT_41 Op = 0x6dc Vars = (object)

0x0: PushEmpty(object, object)
0x1: Push("player")
0x2: @ FindActor(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Pop(0); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x6: Return(); Pop(2)

0x7: PushEmpty(object, bool, float)
0x8: Stack[-3] = Stack[-4]
0x9: Stack[-2] = (bool) 1
0xa: Stack[-1] = (float) 180.0
0xb: Call2 0x15

0xc: Pop(3)
0xd: Return(); Pop(2)

0xe: Stack[-1] = 0
0xf: PushEmpty()
0x10: Stack[-3] = (float) 0.3
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Stack[-3] = (int) 0
0x14: Return(); Pop(0)

0x15: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x16: PushEmpty()
0x17: Call2 0xfa

0x18: Pop(0)
0x19: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1a: Push("@GetAttackDistance")
0x1b: Push((int) 1)
0x1c: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1d: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1e: @@ GetAttackDistance(Stack[-11])
0x1f: Pop(0)
0x20: Push((int) 50)
0x21: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x22: GOTO 0x24

0x23: Stack[-11] = Stack[-23]
0x24: Push((int) 150)
0x25: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Stack[-11] = (int) 150
0x28: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x2a: @ IsPlayerActor(Stack[-0], Stack[-8])
0x2b: Pop(0)
0x2c: Push(Stack[-8])
0x2d: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2e: Push("attack")
0x2f: @ PlayGlobalMusic(Stack[-1])
0x30: Pop(1)
0x31: PushEmpty(object)
0x32: Call2 0x601

0x33: Pop(0)
0x34: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x35: Pop(1)
0x36: Push(Stack[-24])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[-7] = (bool) 0
0x39: GOTO 0x3b

0x3a: Stack[-7] = (bool) 1
0x3b: Push((float)400.0)
0x3c: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x3d: PushEmpty(bool)
0x3e: Stack[-1] = (bool) 0
0x3f: PushEmpty(bool, object)
0x40: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41: Call2 0x52c

0x42: Pop(1)
0x43: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x44: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x45: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x46: Stack[-1] = (bool) 1
0x47: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0x48: PushEmpty()
0x49: Call2 0x297

0x4a: Pop(0)
0x4b: @@ GetPFPosition(Stack[-10])
0x4c: Pop(0)
0x4d: @ GetPFPosition(Stack[-9])
0x4e: Pop(0)
0x4f: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x50: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x51: Pop(0); Push(Stack[-6] * Stack[-6]);
0x52: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x54: PushEmpty(bool, object, float, float, bool, bool)
0x55: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x56: Stack[-4] = Stack[-17]
0x57: Stack[-3] = (float) 10000.0
0x58: Stack[-2] = (bool) 1
0x59: Stack[-1] = (bool) 0
0x5a: Push(-6, 3); TaskCall(1)
0x5b: Call2 0x2ab

0x5c: Pop(-6, 3); TaskReturn
0x5d: Pop(5)
0x5e: Pop(1); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: GOTO 0xe9

0x61: Stack[-7] = (bool) 0
0x62: GOTO 0xe8

0x63: Pop(0); Push(Stack[-23] * Stack[-23]);
0x64: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0x66: @@ GetPFPosition(Stack[-3])
0x67: Pop(0)
0x68: @ CanReachByPF(Stack[-2], Stack[-3])
0x69: Pop(0)
0x6a: Pop(0); Push((bool) Stack[-2] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x6c: PushEmpty(bool, object, float, float, bool, bool)
0x6d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Stack[-4] = Stack[-17]
0x6f: Stack[-3] = (float) 10000.0
0x70: Stack[-2] = (bool) 1
0x71: Stack[-1] = (bool) 0
0x72: Push(-6, 3); TaskCall(1)
0x73: Call2 0x2ab

0x74: Pop(-6, 3); TaskReturn
0x75: Pop(5)
0x76: Pop(1); Push((bool) Stack[-1] == 0)
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0xe9

0x79: Stack[-7] = (bool) 0
0x7a: GOTO 0x3d

0x7b: Pop(0); Push((bool) Stack[-7] == 0)
0x7c: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x7d: PushEmpty(object)
0x7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7f: Call2 0x5c2

0x80: Pop(1)
0x81: Push("all")
0x82: Push("attack_on")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: PushEmpty()
0x88: Call2 0x297

0x89: Pop(0)
0x8a: @ StopAsync()
0x8b: Pop(0)
0x8c: Stack[-7] = (bool) 1
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f: Call2 0x52c

0x90: Pop(1)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0xe9

0x94: @ rand(Stack[-1])
0x95: Pop(0)
0x96: PushEmpty(bool)
0x97: Stack[-1] = (bool) 1
0x98: Push((float)0.25)
0x99: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: PushEmpty(bool)
0x9c: Call2 0x26c

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa1: @ Face(Stack[-0])
0xa2: Pop(0)
0xa3: PushEmpty()
0xa4: Call2 0x29e

0xa5: Pop(0)
0xa6: Push("all")
0xa7: Push("attack_stay")
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: PushEmpty(bool, float)
0xab: Stack[-1] = Stack[-25]
0xac: Call2 0x1e8

0xad: Pop(2)
0xae: @ StopAsync()
0xaf: Pop(0)
0xb0: GOTO 0xdf

0xb1: @ Face(Stack[-0])
0xb2: Pop(0)
0xb3: Push("all")
0xb4: Push("fjump")
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: @ WaitForAnimEnd()
0xb8: Pop(0)
0xb9: PushEmpty()
0xba: Call2 0x297

0xbb: Pop(0)
0xbc: Push(CVector(0.0, 0.0, 0.0))
0xbd: @ SetSpeed(Stack[-1])
0xbe: Pop(1)
0xbf: @ Stop()
0xc0: Pop(0)
0xc1: @ StopAsync()
0xc2: Pop(0)
0xc3: PushEmpty(bool)
0xc4: Call2 0x26c

0xc5: Pop(0)
0xc6: Pop(1); Push((bool) Stack[-1] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x52c

0xcb: Pop(1)
0xcc: Pop(1); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: GOTO 0xe9

0xcf: @@ GetPFPosition(Stack[-10])
0xd0: Pop(0)
0xd1: @ GetPFPosition(Stack[-9])
0xd2: Pop(0)
0xd3: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xd4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd5: Pop(0); Push(Stack[-23] * Stack[-23]);
0xd6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd8: PushEmpty(bool, float)
0xd9: Stack[-1] = Stack[-25]
0xda: Call2 0x144

0xdb: Pop(1)
0xdc: Pop(1); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: GOTO 0xe9

0xdf: GOTO 0xe8

0xe0: PushEmpty(bool, float)
0xe1: Stack[-1] = Stack[-25]
0xe2: Call2 0x144

0xe3: Pop(1)
0xe4: Pop(1); Push((bool) Stack[-1] == 0)
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: GOTO 0xe9

0xe7: Stack[-7] = (bool) 1
0xe8: GOTO 0x3d

0xe9: @ WaitForAnimEnd()
0xea: Pop(0)
0xeb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: Return(); Pop(22)

0xee: Push("all")
0xef: Push("attack_off")
0xf0: @ PlayAnimation(Stack[-2], Stack[-1])
0xf1: Pop(2)
0xf2: @ WaitForAnimEnd()
0xf3: Pop(0)
0xf4: Push(Stack[-8])
0xf5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf6: Push((float)2.0)
0xf7: @ Sleep(Stack[-1])
0xf8: Pop(1)
0xf9: Return(); Pop(22)

0xfa: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xfb: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xfc: Push("all")
0xfd: Push("attack_begin")
0xfe: Push((int) 1)
0xff: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x100: Pop(2); Push(Stack[-2] + Stack[-1]);
0x101: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x102: Pop(2)
0x103: Pop(0); Push((bool) Stack[-3] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: GOTO 0x109

0x106: Push((int) 1)
0x107: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x108: GOTO 0xfc

0x109: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x10a: Push("attack")
0x10b: Push((int) 1)
0x10c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x10d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x10f: Pop(1)
0x110: Pop(0); Push((bool) Stack[-2] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: GOTO 0x116

0x113: Push((int) 1)
0x114: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x115: GOTO 0x10a

0x116: Push("all")
0x117: Push("bjump")
0x118: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(2)
0x11a: Push(CvectorIndex(Stack[-1], 2))
0x11b: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x11c: Return(); Pop(6)

0x11d: PushEmpty(object, float, float, object, float, float)
0x11e: Push((float)0.9)
0x11f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x120: @ GetVictim(Stack[-1], Stack[-4])
0x121: Pop(1)
0x122: @ ReportAttack(Stack[-0])
0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x125: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x126: PushEmpty(float, object, int)
0x127: Stack[-2] = Stack[-6]
0x128: Stack[-1] = Stack[-10]
0x129: Call2 0xf

0x12a: Stack[-5] = Stack[-3]
0x12b: Pop(3)
0x12c: PushEmpty(float, object, float, int)
0x12d: Stack[-3] = Stack[-7]
0x12e: Stack[-2] = Stack[-6]
0x12f: PushEmpty(int, object, int)
0x130: Stack[-2] = Stack[-10]
0x131: Stack[-1] = Stack[-14]
0x132: Call2 0x12

0x133: Stack[-4] = Stack[-3]
0x134: Pop(3)
0x135: Call2 0x4ba

0x136: Stack[-5] = Stack[-4]
0x137: Pop(4)
0x138: PushEmpty(int)
0x139: Call2 0x29c

0x13a: Pop(0)
0x13b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x13c: Pop(1)
0x13d: PushEmpty(object, float)
0x13e: Stack[-2] = Stack[-5]
0x13f: Stack[-1] = Stack[-3]
0x140: Call2 0x2a3

0x141: Pop(2)
0x142: Return(); Pop(6)

0x143: Stack[-3] = 0
0x144: PushEmpty(int, bool, int, string, int, bool, int, string)
0x145: PushEmpty()
0x146: Call2 0x297

0x147: Pop(0)
0x148: @ irand(Stack[-4], Stack[-1])
0x149: Pop(0)
0x14a: Push((int) 1)
0x14b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x14c: @ Face(Stack[-0])
0x14d: Pop(0)
0x14e: Push((bool) 1)
0x14f: @ SetAttackState(Stack[-1])
0x150: Pop(1)
0x151: PushEmpty()
0x152: Call2 0x676

0x153: Pop(0)
0x154: Push("all")
0x155: Push("attack_begin")
0x156: Pop(1); Push(Stack[-1] + Stack[-6]);
0x157: @ PlayAnimation(Stack[-2], Stack[-1])
0x158: Pop(2)
0x159: @ WaitForAnimEnd()
0x15a: Pop(0)
0x15b: PushEmpty()
0x15c: Call2 0x277

0x15d: Pop(0)
0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x160: Call2 0x52c

0x161: Pop(1)
0x162: Pop(1); Push((bool) Stack[-1] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x164: @ StopAsync()
0x165: Pop(0)
0x166: Stack[-10] = (bool) 0
0x167: Return(); Pop(8)

0x168: PushEmpty(float, int)
0x169: Stack[-2] = Stack[-11]
0x16a: Stack[-1] = Stack[-6]
0x16b: Call2 0x11d

0x16c: Pop(2)
0x16d: Push("all")
0x16e: Push("attack_middle")
0x16f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x170: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x171: Pop(2)
0x172: Push(Stack[-3])
0x173: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x174: PushEmpty()
0x175: Call2 0x676

0x176: Pop(0)
0x177: Push("all")
0x178: Push("attack_middle")
0x179: Pop(1); Push(Stack[-1] + Stack[-6]);
0x17a: @ PlayAnimation(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: @ WaitForAnimEnd()
0x17d: Pop(0)
0x17e: PushEmpty()
0x17f: Call2 0x297

0x180: Pop(0)
0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x183: Call2 0x52c

0x184: Pop(1)
0x185: Pop(1); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x187: @ StopAsync()
0x188: Pop(0)
0x189: Stack[-10] = (bool) 0
0x18a: Return(); Pop(8)

0x18b: PushEmpty(float, int)
0x18c: Stack[-2] = Stack[-11]
0x18d: Stack[-1] = Stack[-6]
0x18e: Call2 0x11d

0x18f: Pop(2)
0x190: Stack[-2] = (int) 1
0x191: Push("attack_middle")
0x192: Pop(1); Push(Stack[-1] + Stack[-5]);
0x193: Push("_")
0x194: Pop(2); Push(Stack[-2] + Stack[-1]);
0x195: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x196: Push("all")
0x197: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x198: Pop(1)
0x199: Pop(0); Push((bool) Stack[-3] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: GOTO 0x1b9

0x19c: PushEmpty()
0x19d: Call2 0x676

0x19e: Pop(0)
0x19f: Push("all")
0x1a0: @ PlayAnimation(Stack[-1], Stack[-2])
0x1a1: Pop(1)
0x1a2: @ WaitForAnimEnd()
0x1a3: Pop(0)
0x1a4: PushEmpty()
0x1a5: Call2 0x297

0x1a6: Pop(0)
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a9: Call2 0x52c

0x1aa: Pop(1)
0x1ab: Pop(1); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ad: @ StopAsync()
0x1ae: Pop(0)
0x1af: Stack[-10] = (bool) 0
0x1b0: Return(); Pop(8)

0x1b1: PushEmpty(float, int)
0x1b2: Stack[-2] = Stack[-11]
0x1b3: Stack[-1] = Stack[-6]
0x1b4: Call2 0x11d

0x1b5: Pop(2)
0x1b6: Push((int) 1)
0x1b7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1b8: GOTO 0x191

0x1b9: Push((bool) 0)
0x1ba: @ SetAttackState(Stack[-1])
0x1bb: Pop(1)
0x1bc: Push("all")
0x1bd: Push("attack_end")
0x1be: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: PushEmpty(bool)
0x1c2: Call2 0x2a5

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c5: PushEmpty(bool, float)
0x1c6: Stack[-1] = (float) 0.75
0x1c7: Call2 0x1cd

0x1c8: Pop(2)
0x1c9: @ StopAsync()
0x1ca: Pop(0)
0x1cb: Stack[-10] = (bool) 1
0x1cc: Return(); Pop(8)

0x1cd: PushEmpty(float, bool, float, bool)
0x1ce: @ rand(Stack[-2])
0x1cf: Pop(0)
0x1d0: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: @ IsAnimationPlaying(Stack[-1])
0x1d3: Pop(0)
0x1d4: Pop(0); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: GOTO 0x1e0

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x22f

0x1d9: Pop(0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: Stack[-6] = (bool) 1
0x1dc: Return(); Pop(4)

0x1dd: @ sync()
0x1de: Pop(0)
0x1df: GOTO 0x1d2

0x1e0: GOTO 0x1e6

0x1e1: @ WaitForAnimEnd()
0x1e2: Pop(0)
0x1e3: PushEmpty()
0x1e4: Call2 0x297

0x1e5: Pop(0)
0x1e6: Stack[-6] = (bool) 0
0x1e7: Return(); Pop(4)

0x1e8: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x1e9: @ IsAnimationPlaying(Stack[-5])
0x1ea: Pop(0)
0x1eb: Pop(0); Push((bool) Stack[-5] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x20e

0x1ee: PushEmpty(bool)
0x1ef: Call2 0x22f

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f2: Stack[-12] = (bool) 1
0x1f3: Return(); Pop(10)

0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f6: Call2 0x52c

0x1f7: Pop(1)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: Stack[-12] = (bool) 0
0x1fb: Return(); Pop(10)

0x1fc: @@ GetPFPosition(Stack[-4])
0x1fd: Pop(0)
0x1fe: @ GetPFPosition(Stack[-3])
0x1ff: Pop(0)
0x200: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x201: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x202: Pop(0); Push(Stack[-11] * Stack[-11]);
0x203: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x205: PushEmpty(bool, float)
0x206: Stack[-1] = Stack[-13]
0x207: Call2 0x144

0x208: Pop(2)
0x209: Stack[-12] = (bool) 1
0x20a: Return(); Pop(10)

0x20b: @ sync()
0x20c: Pop(0)
0x20d: GOTO 0x1e9

0x20e: PushEmpty()
0x20f: Call2 0x297

0x210: Pop(0)
0x211: Stack[-12] = (bool) 0
0x212: Return(); Pop(10)

0x213: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x52c

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-11] = (bool) 0
0x21b: Return(); Pop(10)

0x21c: PushEmpty(bool)
0x21d: Call2 0x26c

0x21e: Pop(0)
0x21f: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x220: @@ GetPFPosition(Stack[-5])
0x221: Pop(0)
0x222: @ GetPFPosition(Stack[-4])
0x223: Pop(0)
0x224: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x225: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x226: @@ GetAttackDistance(Stack[-1])
0x227: Pop(0)
0x228: Push((int) 50)
0x229: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x22a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x22b: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x22c: Return(); Pop(10)

0x22d: Stack[-11] = (bool) 0
0x22e: Return(); Pop(10)

0x22f: PushEmpty(bool)
0x230: Stack[-1] = (bool) 0
0x231: PushEmpty(bool)
0x232: Call2 0x213

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x235: PushEmpty(bool)
0x236: Call2 0x23f

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Stack[-1] = (bool) 1
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-1] = (bool) 1
0x23c: Return(); Pop(0)

0x23d: Stack[-1] = (bool) 0
0x23e: Return(); Pop(0)

0x23f: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x240: @ GetScene(Stack[-5])
0x241: Pop(0)
0x242: Stack[-4] = (bool) 0
0x243: PushEmpty(cvector, object)
0x244: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x245: Call2 0x48c

0x246: Pop(1)
0x247: Pop(1); Push(( -Stack[-1])
0x248: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x249: Pop(1)
0x24a: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: GOTO 0x269

0x24d: @ Face(Stack[-0])
0x24e: Pop(0)
0x24f: Push("all")
0x250: Push("bjump")
0x251: @ PlayAnimation(Stack[-2], Stack[-1])
0x252: Pop(2)
0x253: @@ GetPFPosition(Stack[-2])
0x254: Pop(0)
0x255: @ GetPFPosition(Stack[-1])
0x256: Pop(0)
0x257: @ WaitForAnimEnd()
0x258: Pop(0)
0x259: PushEmpty()
0x25a: Call2 0x297

0x25b: Pop(0)
0x25c: @ StopAsync()
0x25d: Pop(0)
0x25e: Push(CVector(0.0, 0.0, 0.0))
0x25f: @ SetSpeed(Stack[-1])
0x260: Pop(1)
0x261: Stack[-4] = (bool) 1
0x262: PushEmpty(bool)
0x263: Call2 0x213

0x264: Pop(0)
0x265: Pop(1); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x269

0x268: GOTO 0x243

0x269: Stack[-11] = Stack[-4]
0x26a: Return(); Pop(10)

0x26b: Stack[-5] = 0
0x26c: PushEmpty(bool, bool)
0x26d: Push("IsAttacking")
0x26e: Push((int) 1)
0x26f: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x270: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x271: @@ IsAttacking(Stack[-1])
0x272: Pop(0)
0x273: Stack[-3] = Stack[-1]
0x274: Return(); Pop(2)

0x275: Stack[-3] = (bool) 0
0x276: Return(); Pop(2)

0x277: PushEmpty(float, int, float, int)
0x278: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Return(); Pop(4)

0x27b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x27c: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27d: Push((int) -1)
0x27e: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x27f: Push((int) 0)
0x280: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Return(); Pop(4)

0x283: @ rand(Stack[-2])
0x284: Pop(0)
0x285: PushEmpty(float)
0x286: Call2 0x2a9

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x28a: @ irand(Stack[-1], Stack[-2])
0x28b: Pop(0)
0x28c: Push((int) 1)
0x28d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x28e: Push("attack")
0x28f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x290: @ Speak(Stack[-1])
0x291: Pop(1)
0x292: PushEmpty(int)
0x293: Call2 0x2a7

0x294: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x295: Pop(1)
0x296: Return(); Pop(4)

0x297: PushEmpty(object)
0x298: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x299: Call2 0x66d

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: Stack[-1] = (int) 0
0x29d: Return(); Pop(0)

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "attack_stay"
0x2a0: Call2 0x5d8

0x2a1: Pop(1)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: Return(); Pop(0)

0x2a5: Stack[-1] = (bool) 1
0x2a6: Return(); Pop(0)

0x2a7: Stack[-1] = (int) 1
0x2a8: Return(); Pop(0)

0x2a9: Stack[-1] = (float) 0.5
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(bool, bool, bool, bool)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-10]
0x2ae: Call2 0x66d

0x2af: Pop(1)
0x2b0: Push((int) 1)
0x2b1: Push((int) 5)
0x2b2: @ SetTimer(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: @ CanSee(Stack[-2], Stack[-9])
0x2b5: Pop(0)
0x2b6: Push(Stack[-2])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2b9: PushEmpty(object)
0x2ba: Stack[-1] = Stack[-10]
0x2bb: Call2 0x5cd

0x2bc: Pop(1)
0x2bd: GOTO 0x2bf

0x2be: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[-11]
0x2c1: Call2 0x493

0x2c2: Pop(1)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(object)
0x2c5: Call2 0x601

0x2c6: Pop(0)
0x2c7: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x2c8: Pop(1)
0x2c9: PushEmpty(bool, object, float, float, bool, bool)
0x2ca: Stack[-5] = Stack[-15]
0x2cb: Stack[-4] = Stack[-14]
0x2cc: Stack[-3] = Stack[-13]
0x2cd: Stack[-2] = Stack[-12]
0x2ce: Stack[-1] = Stack[-11]
0x2cf: Call2 0x314

0x2d0: Stack[-7] = Stack[-6]
0x2d1: Pop(6)
0x2d2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d4: Push("head")
0x2d5: @ UnlookAsync(Stack[-1])
0x2d6: Pop(1)
0x2d7: Push((int) 1)
0x2d8: @ KillTimer(Stack[-1])
0x2d9: Pop(1)
0x2da: Stack[-10] = Stack[-1]
0x2db: Return(); Pop(4)

0x2dc: PushEmpty()
0x2dd: Push((int) 1)
0x2de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Call2 0x66d

0x2e3: Pop(1)
0x2e4: GOTO 0x2e9

0x2e5: PushEmpty(int)
0x2e6: Stack[-1] = Stack[-2]
0x2e7: Call2 0x37a

0x2e8: Pop(1)
0x2e9: Return(); Pop(0)

0x2ea: Push((int) 1)
0x2eb: @ KillTimer(Stack[-1])
0x2ec: Pop(1)
0x2ed: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2f0: Push("head")
0x2f1: @ UnlookAsync(Stack[-1])
0x2f2: Pop(1)
0x2f3: PushEmpty()
0x2f4: Call2 0x390

0x2f5: Pop(0)
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty()
0x2f8: PushEmpty(bool)
0x2f9: Stack[-1] = (bool) 0
0x2fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Stack[-1] = (bool) 1
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x301: PushEmpty(object)
0x302: Stack[-1] = Stack[-2]
0x303: Call2 0x5cd

0x304: Pop(1)
0x305: Return(); Pop(0)

0x306: PushEmpty()
0x307: PushEmpty(bool)
0x308: Stack[-1] = (bool) 0
0x309: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Stack[-1] = (bool) 1
0x30e: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x310: Push("head")
0x311: @ UnlookAsync(Stack[-1])
0x312: Pop(1)
0x313: Return(); Pop(0)

0x314: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x315: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x316: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x317: Stack[-7] = Stack[-17]
0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[-23]
0x31a: Call2 0x3a0

0x31b: Pop(1)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-22] = (bool) 0
0x31f: Return(); Pop(16)

0x320: @@ GetPosition(Stack[-5])
0x321: Pop(0)
0x322: @ GetPosition(Stack[-4])
0x323: Pop(0)
0x324: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x325: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x326: PushEmpty(bool)
0x327: Stack[-1] = (bool) 0
0x328: Push((int) 0)
0x329: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x32c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Stack[-1] = (bool) 1
0x32f: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x330: @ Stop()
0x331: Pop(0)
0x332: Stack[-22] = (bool) 0
0x333: Return(); Pop(16)

0x334: Pop(0); Push(Stack[-20] * Stack[-20]);
0x335: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x337: @@ GetPFPosition(Stack[-5])
0x338: Pop(0)
0x339: @ FindPathTo(Stack[-1], Stack[-5])
0x33a: Pop(0)
0x33b: Pop(0); Push(( Stack[-1] != 0 )
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-6] = Stack[-1]
0x33e: Stack[-1] = 0
0x33f: Pop(0); Push(( Stack[-6] != 0 )
0x340: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x341: Push(Stack[-7])
0x342: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x343: Stack[-7] = (bool) 0
0x344: @ RotatePath(Stack[-6], Stack[-8])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-8] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x378

0x349: Push((int) 0)
0x34a: Push((float)0.3)
0x34b: @ SetTimer(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: PushEmpty(string)
0x34e: Call2 0x3a7

0x34f: Pop(0)
0x350: PushEmpty(string)
0x351: Call2 0x3a9

0x352: Pop(0)
0x353: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x354: Pop(2)
0x355: Pop(0); Push((bool) Stack[-8] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x357: Push( Stack[0 + Tasks[-1].StackPointer] )
0x358: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x359: Stack[-6] = 0
0x35a: GOTO 0x378

0x35b: GOTO 0x35d

0x35c: GOTO 0x377

0x35d: GOTO 0x35f

0x35e: Stack[-6] = 0
0x35f: GOTO 0x370

0x360: Push((int) 0)
0x361: @ KillTimer(Stack[-1])
0x362: Pop(1)
0x363: Push((float)0.5)
0x364: @ Sleep(Stack[-1], Stack[-9])
0x365: Pop(1)
0x366: Pop(0); Push((bool) Stack[-8] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x368: Push( Stack[0 + Tasks[-1].StackPointer] )
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-6] = 0
0x36b: GOTO 0x378

0x36c: Push((int) 0)
0x36d: Push((float)0.3)
0x36e: @ SetTimer(Stack[-2], Stack[-1])
0x36f: Pop(2)
0x370: Stack[-1] = 0
0x371: GOTO 0x376

0x372: Push((int) 0)
0x373: @ KillTimer(Stack[-1])
0x374: Pop(1)
0x375: GOTO 0x378

0x376: Stack[-6] = 0
0x377: GOTO 0x318

0x378: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x379: Return(); Pop(16)

0x37a: PushEmpty()
0x37b: Push((int) 0)
0x37c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Return(); Pop(0)

0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x381: Call2 0x3a0

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x386: Push((int) 0)
0x387: @ KillTimer(Stack[-1])
0x388: Pop(1)
0x389: @ Stop()
0x38a: Pop(0)
0x38b: Return(); Pop(0)

0x38c: PushEmpty()
0x38d: @ RequestClearPath(Stack[-1])
0x38e: Pop(0)
0x38f: Return(); Pop(0)

0x390: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x391: Push((int) 0)
0x392: @ KillTimer(Stack[-1])
0x393: Pop(1)
0x394: @ Stop()
0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: PushEmpty()
0x398: PushEmpty()
0x399: Call2 0x2ea

0x39a: Pop(0)
0x39b: PushEmpty(object)
0x39c: Stack[-1] = Stack[-2]
0x39d: Call2 0x6dc

0x39e: Pop(1)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: PushEmpty(bool, object)
0x3a2: Stack[-1] = Stack[-3]
0x3a3: Call2 0x52c

0x3a4: Stack[-4] = Stack[-2]
0x3a5: Pop(2)
0x3a6: Return(); Pop(0)

0x3a7: Stack[-1] = "walk"
0x3a8: Return(); Pop(0)

0x3a9: Stack[-1] = "run"
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: PushEmpty(bool, string, string)
0x3ad: Stack[-2] = "quest_b9_01"
0x3ae: Stack[-1] = "doberman_dead"
0x3af: Call2 0x661

0x3b0: Pop(3)
0x3b1: PushEmpty(object)
0x3b2: Stack[-1] = Stack[-2]
0x3b3: Call2 0x3dc

0x3b4: Pop(1)
0x3b5: Push((int) 50)
0x3b6: Push((int) 40)
0x3b7: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: PushEmpty()
0x3ba: Call2 0x6a5

0x3bb: Pop(0)
0x3bc: PushEmpty(bool, object)
0x3bd: Stack[-1] = Stack[-3]
0x3be: Call2 0x493

0x3bf: Pop(1)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c1: PushEmpty(bool, object, float)
0x3c2: Stack[-2] = Stack[-4]
0x3c3: Stack[-1] = (float) -0.03
0x3c4: Call2 0x623

0x3c5: Pop(3)
0x3c6: @ Hold()
0x3c7: Pop(0)
0x3c8: GOTO 0x3c6

0x3c9: Return(); Pop(0)

0x3ca: PushEmpty(bool, bool)
0x3cb: @ IsOverrideActive(Stack[-1])
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cf: PushEmpty(object)
0x3d0: Stack[-1] = Stack[-4]
0x3d1: Call2 0x687

0x3d2: Pop(1)
0x3d3: Return(); Pop(2)

0x3d4: PushEmpty(object)
0x3d5: Call2 0x601

0x3d6: Pop(0)
0x3d7: @ RemoveActor(Stack[-1])
0x3d8: Pop(1)
0x3d9: @ Hold()
0x3da: Pop(0)
0x3db: Return(); Pop(0)

0x3dc: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3dd: Pop(0); Push((bool) Stack[-21] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3df: PushEmpty(string)
0x3e0: Stack[-1] = "fdie"
0x3e1: Call2 0x437

0x3e2: Pop(1)
0x3e3: GOTO 0x436

0x3e4: @@ GetPosition(Stack[-10])
0x3e5: Pop(0)
0x3e6: @ GetPosition(Stack[-9])
0x3e7: Pop(0)
0x3e8: @ GetDirection(Stack[-8])
0x3e9: Pop(0)
0x3ea: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3eb: Push(CvectorIndex(Stack[-7], 0))
0x3ec: Push(CvectorIndex(Stack[-9], 0))
0x3ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ee: Push(CvectorIndex(Stack[-8], 2))
0x3ef: Push(CvectorIndex(Stack[-10], 2))
0x3f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f2: Push((int) 0)
0x3f3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-6] = "fdie"
0x3f6: GOTO 0x3f8

0x3f7: Stack[-6] = "bdie"
0x3f8: @ RemoveRTEnvelope()
0x3f9: Pop(0)
0x3fa: @ SetDeathState()
0x3fb: Pop(0)
0x3fc: @ Stop()
0x3fd: Pop(0)
0x3fe: @ StopAsync()
0x3ff: Pop(0)
0x400: Stack[-5] = Stack[-21]
0x401: Push("GetScriptProperty")
0x402: Push((int) 2)
0x403: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x404: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x405: Push("Owner")
0x406: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x407: Pop(1)
0x408: Push(Stack[-4])
0x409: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40a: Push("Owner")
0x40b: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x40c: Pop(1)
0x40d: Pop(0); Push((bool) Stack[-5] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Stack[-5] = Stack[-21]
0x410: Push("@GetEyesHeight")
0x411: Push((int) 1)
0x412: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x413: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x414: @@ GetEyesHeight(Stack[-2])
0x415: Pop(0)
0x416: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x417: Push(CvectorIndex(Stack[-1], 1))
0x418: Stack[-1] = Stack[-3]
0x419: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x41a: Push("head")
0x41b: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x41c: Pop(1)
0x41d: Stack[-3] = (bool) 1
0x41e: GOTO 0x420

0x41f: Stack[-3] = (bool) 0
0x420: PushEmpty(string)
0x421: Stack[-1] = Stack[-7]
0x422: Call2 0x5d8

0x423: Pop(1)
0x424: Push("all")
0x425: @ PlayAnimation(Stack[-1], Stack[-7])
0x426: Pop(1)
0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: Push(Stack[-3])
0x42a: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42b: @ StopAsync()
0x42c: Pop(0)
0x42d: Push("head")
0x42e: @ UnlookAsync(Stack[-1])
0x42f: Pop(1)
0x430: Push("all")
0x431: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x432: Pop(1)
0x433: @ RemoveEnvelope()
0x434: Pop(0)
0x435: Stack[-5] = 0
0x436: Return(); Pop(20)

0x437: PushEmpty()
0x438: @ RemoveRTEnvelope()
0x439: Pop(0)
0x43a: @ SetDeathState()
0x43b: Pop(0)
0x43c: @ Stop()
0x43d: Pop(0)
0x43e: @ StopAsync()
0x43f: Pop(0)
0x440: @ StopSecondaryAnimation()
0x441: Pop(0)
0x442: PushEmpty(string)
0x443: Stack[-1] = Stack[-2]
0x444: Call2 0x5d8

0x445: Pop(1)
0x446: Push("all")
0x447: @ PlayAnimation(Stack[-1], Stack[-2])
0x448: Pop(1)
0x449: @ WaitForAnimEnd()
0x44a: Pop(0)
0x44b: Push("all")
0x44c: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x44d: Pop(1)
0x44e: @ RemoveEnvelope()
0x44f: Pop(0)
0x450: Return(); Pop(0)

0x451: PushEmpty()
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: Return(); Pop(0)

0x459: @ Hold()
0x45a: Pop(0)
0x45b: GOTO 0x459

0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: PushEmpty(bool)
0x45f: Call2 0x467

0x460: Pop(0)
0x461: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x462: PushEmpty(object)
0x463: Stack[-1] = Stack[-2]
0x464: Call2 0x457

0x465: Pop(1)
0x466: Return(); Pop(0)

0x467: Stack[-1] = (bool) 1
0x468: Return(); Pop(0)

0x469: PushEmpty(bool, bool)
0x46a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x46b: Pop(0)
0x46c: Push(Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46e: PushEmpty(bool, string, string)
0x46f: Stack[-2] = "quest_b9_01"
0x470: Stack[-1] = "factory_fight"
0x471: Call2 0x661

0x472: Pop(3)
0x473: Return(); Pop(2)

0x474: PushEmpty()
0x475: Push("attack")
0x476: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x478: PushEmpty()
0x479: Push(-0, 6); TaskCall(0)
0x47a: Call2 0x0

0x47b: Pop(-0, 6); TaskReturn
0x47c: Pop(0)
0x47d: Return(); Pop(0)

0x47e: PushEmpty()
0x47f: Push((int) 2)
0x480: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x482: Stack[-2] = "fire"
0x483: Return(); Pop(0)

0x484: GOTO 0x48a

0x485: Push((int) 1)
0x486: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-2] = "bullet"
0x489: Return(); Pop(0)

0x48a: Stack[-2] = "phys"
0x48b: Return(); Pop(0)

0x48c: PushEmpty(cvector, cvector, cvector, cvector)
0x48d: @ GetPosition(Stack[-2])
0x48e: Pop(0)
0x48f: @@ GetPosition(Stack[-1])
0x490: Pop(0)
0x491: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x492: Return(); Pop(4)

0x493: PushEmpty(bool, bool)
0x494: @ IsPlayerActor(Stack[-3], Stack[-1])
0x495: Pop(0)
0x496: Stack[-4] = Stack[-1]
0x497: Return(); Pop(2)

0x498: PushEmpty(bool, bool)
0x499: Push("HasProperty")
0x49a: Push((int) 2)
0x49b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x49c: Pop(1); Push((bool) Stack[-1] == 0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49e: Stack[-5] = (bool) 0
0x49f: Return(); Pop(2)

0x4a0: @@ HasProperty(Stack[-3], Stack[-1])
0x4a1: Pop(0)
0x4a2: Stack[-5] = Stack[-1]
0x4a3: Return(); Pop(2)

0x4a4: PushEmpty(float, float)
0x4a5: PushEmpty(bool, object, string)
0x4a6: Stack[-2] = Stack[-10]
0x4a7: Stack[-1] = Stack[-9]
0x4a8: Call2 0x498

0x4a9: Pop(2)
0x4aa: Pop(1); Push((bool) Stack[-1] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-8] = (bool) 0
0x4ad: Return(); Pop(2)

0x4ae: @@ GetProperty(Stack[-6], Stack[-1])
0x4af: Pop(0)
0x4b0: PushEmpty(float, float, float, float)
0x4b1: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4b2: Stack[-2] = Stack[-8]
0x4b3: Stack[-1] = Stack[-7]
0x4b4: Call2 0x618

0x4b5: Pop(3)
0x4b6: @@ SetProperty(Stack[-7], Stack[-1])
0x4b7: Pop(1)
0x4b8: Stack[-8] = (bool) 1
0x4b9: Return(); Pop(2)

0x4ba: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4bb: PushEmpty(bool, object, string)
0x4bc: Stack[-2] = Stack[-18]
0x4bd: Stack[-1] = "health"
0x4be: Call2 0x498

0x4bf: Pop(2)
0x4c0: Pop(1); Push((bool) Stack[-1] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c2: Stack[-16] = (float) 0.0
0x4c3: Return(); Pop(12)

0x4c4: PushEmpty(bool, object, string)
0x4c5: Stack[-2] = Stack[-18]
0x4c6: Stack[-1] = "armor"
0x4c7: Call2 0x498

0x4c8: Pop(2)
0x4c9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-6] = (int) 0
0x4cc: GOTO 0x4d0

0x4cd: Push("armor")
0x4ce: @@ GetProperty(Stack[-1], Stack[-7])
0x4cf: Pop(1)
0x4d0: Push("armor_")
0x4d1: PushEmpty(string, int)
0x4d2: Stack[-1] = Stack[-16]
0x4d3: Call2 0x47e

0x4d4: Pop(1)
0x4d5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4d6: PushEmpty(bool, object, string)
0x4d7: Stack[-2] = Stack[-18]
0x4d8: Stack[-1] = Stack[-8]
0x4d9: Call2 0x498

0x4da: Pop(2)
0x4db: Pop(1); Push((bool) Stack[-1] == 0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-4] = (int) 0
0x4de: GOTO 0x4e1

0x4df: @@ GetProperty(Stack[-5], Stack[-4])
0x4e0: Pop(0)
0x4e1: PushEmpty(float, float, float)
0x4e2: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4e3: Push((float)100.0)
0x4e4: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4e5: Stack[-1] = (int) 1
0x4e6: Call2 0x611

0x4e7: Stack[-6] = Stack[-3]
0x4e8: Pop(3)
0x4e9: Push("health")
0x4ea: @@ GetProperty(Stack[-1], Stack[-3])
0x4eb: Pop(1)
0x4ec: Push((int) 1)
0x4ed: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4ee: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4ef: Push("health")
0x4f0: PushEmpty(float, float, float, float)
0x4f1: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4f2: Stack[-2] = (int) 0
0x4f3: Stack[-1] = (int) 1
0x4f4: Call2 0x618

0x4f5: Pop(3)
0x4f6: @@ SetProperty(Stack[-2], Stack[-1])
0x4f7: Pop(2)
0x4f8: PushEmpty(bool, object)
0x4f9: Stack[-1] = Stack[-17]
0x4fa: Call2 0x493

0x4fb: Pop(1)
0x4fc: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fd: PushEmpty(float)
0x4fe: Stack[-1] = -Stack[-2]; Pop(0);
0x4ff: Call2 0x646

0x500: Pop(1)
0x501: Stack[-16] = Stack[-1]
0x502: Return(); Pop(12)

0x503: PushEmpty(bool, bool)
0x504: @@ IsDead(Stack[-1])
0x505: Pop(0)
0x506: Stack[-4] = Stack[-1]
0x507: Return(); Pop(2)

0x508: PushEmpty(object, object, object, object)
0x509: Pop(0); Push((bool) Stack[-5] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-6] = (bool) 0
0x50c: Return(); Pop(4)

0x50d: PushEmpty(bool)
0x50e: Stack[-1] = (bool) 0
0x50f: Push("IsDead")
0x510: Push((int) 1)
0x511: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x512: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x513: PushEmpty(bool, object)
0x514: Stack[-1] = Stack[-8]
0x515: Call2 0x503

0x516: Pop(1)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: Stack[-1] = (bool) 1
0x519: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51a: Stack[-6] = (bool) 0
0x51b: Return(); Pop(4)

0x51c: @ GetScene(Stack[-2])
0x51d: Pop(0)
0x51e: Pop(0); Push((bool) Stack[-2] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-6] = (bool) 0
0x521: Return(); Pop(4)

0x522: @@ GetScene(Stack[-1])
0x523: Pop(0)
0x524: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: Stack[-6] = (bool) 0
0x527: Return(); Pop(4)

0x528: Stack[-6] = (bool) 1
0x529: Return(); Pop(4)

0x52a: Stack[-1] = 0
0x52b: Stack[-2] = 0
0x52c: PushEmpty(int, int)
0x52d: PushEmpty(bool, object)
0x52e: Stack[-1] = Stack[-5]
0x52f: Call2 0x508

0x530: Pop(1)
0x531: Pop(1); Push((bool) Stack[-1] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x533: Stack[-4] = (bool) 0
0x534: Return(); Pop(2)

0x535: PushEmpty(bool, object, string)
0x536: Stack[-2] = Stack[-6]
0x537: Stack[-1] = "noaccess"
0x538: Call2 0x498

0x539: Pop(2)
0x53a: Pop(1); Push((bool) Stack[-1] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-4] = (bool) 1
0x53d: Return(); Pop(2)

0x53e: Push("noaccess")
0x53f: @@ GetProperty(Stack[-1], Stack[-2])
0x540: Pop(1)
0x541: Push((int) 0)
0x542: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x543: Return(); Pop(2)

0x544: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x545: Pop(0); Push((bool) Stack[-15] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x547: Return(); Pop(14)

0x548: @ IsDead(Stack[-7])
0x549: Pop(0)
0x54a: Push(Stack[-7])
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: Return(); Pop(14)

0x54d: @ GetSecondaryAnimationType(Stack[-6])
0x54e: Pop(0)
0x54f: Push((int) 0)
0x550: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: Return(); Pop(14)

0x553: @@ GetPosition(Stack[-5])
0x554: Pop(0)
0x555: @ GetPosition(Stack[-4])
0x556: Pop(0)
0x557: @ GetDirection(Stack[-3])
0x558: Pop(0)
0x559: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x55a: Push(CvectorIndex(Stack[-2], 0))
0x55b: Push(CvectorIndex(Stack[-4], 0))
0x55c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x55d: Push(CvectorIndex(Stack[-3], 2))
0x55e: Push(CvectorIndex(Stack[-5], 2))
0x55f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x560: Pop(2); Push(Stack[-2] + Stack[-1]);
0x561: Push((int) 0)
0x562: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x564: Stack[-1] = "fhit"
0x565: GOTO 0x567

0x566: Stack[-1] = "bhit"
0x567: Push("hit_react")
0x568: Push("1")
0x569: Pop(1); Push(Stack[-3] + Stack[-1]);
0x56a: Push("2")
0x56b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x56c: Push((int) -10)
0x56d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x56e: Pop(4)
0x56f: Return(); Pop(14)

0x570: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x571: PushEmpty(bool)
0x572: Stack[-1] = (bool) 0
0x573: PushEmpty(bool)
0x574: Stack[-1] = (bool) 0
0x575: Push(Stack[-23])
0x576: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x577: Push((int) 4)
0x578: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x57a: Stack[-1] = (bool) 1
0x57b: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57c: Push((int) 5)
0x57d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57f: Stack[-1] = (bool) 1
0x580: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x581: PushEmpty(cvector, cvector)
0x582: PushEmpty(cvector, object)
0x583: Stack[-1] = Stack[-25]
0x584: Call2 0x48c

0x585: Stack[-3] = Stack[-2]
0x586: Pop(2)
0x587: Call2 0x607

0x588: Stack[-11] = Stack[-2]
0x589: Pop(2)
0x58a: @ CreateVectorVector(Stack[-8])
0x58b: Pop(0)
0x58c: Stack[-7] = (int) 1
0x58d: Push("hit")
0x58e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x58f: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x590: Pop(1)
0x591: Pop(0); Push((bool) Stack[-6] == 0)
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: GOTO 0x59d

0x594: Pop(0); Push(Stack[-4] | Stack[-9]);
0x595: Push((float)0.70711)
0x596: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: @@ add(Stack[-5])
0x599: Pop(0)
0x59a: Push((int) 1)
0x59b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x59c: GOTO 0x58d

0x59d: @@ size(Stack[-3])
0x59e: Pop(0)
0x59f: Push(Stack[-3])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a1: @ irand(Stack[-2], Stack[-3])
0x5a2: Pop(0)
0x5a3: @@ get(Stack[-1], Stack[-2])
0x5a4: Pop(0)
0x5a5: PushEmpty(object, int, float, cvector, cvector)
0x5a6: Stack[-5] = Stack[-26]
0x5a7: Stack[-4] = Stack[-25]
0x5a8: Stack[-3] = Stack[-24]
0x5a9: Stack[-2] = Stack[-6]
0x5aa: Stack[-1] = -Stack[-14]; Pop(0);
0x5ab: Call2 0x5b4

0x5ac: Pop(5)
0x5ad: Return(); Pop(18)

0x5ae: Stack[-8] = 0
0x5af: PushEmpty(object)
0x5b0: Stack[-1] = Stack[-22]
0x5b1: Call2 0x544

0x5b2: Pop(1)
0x5b3: Return(); Pop(18)

0x5b4: PushEmpty(object, object, object, object)
0x5b5: @ GetScene(Stack[-2])
0x5b6: Pop(0)
0x5b7: Push("scripted")
0x5b8: Push("blood_dir.xml")
0x5b9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5ba: Pop(2)
0x5bb: PushEmpty(object)
0x5bc: Stack[-1] = Stack[-10]
0x5bd: Call2 0x544

0x5be: Pop(1)
0x5bf: Return(); Pop(4)

0x5c0: Stack[-1] = 0
0x5c1: Stack[-2] = 0
0x5c2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5c3: @@ GetPosition(Stack[-3])
0x5c4: Pop(0)
0x5c5: @ GetPosition(Stack[-2])
0x5c6: Pop(0)
0x5c7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5c8: Push(CvectorIndex(Stack[-1], 0))
0x5c9: Push(CvectorIndex(Stack[-2], 2))
0x5ca: @ RotateAsync(Stack[-2], Stack[-1])
0x5cb: Pop(2)
0x5cc: Return(); Pop(6)

0x5cd: PushEmpty(float, cvector, float, cvector)
0x5ce: @@ GetEyesHeight(Stack[-2])
0x5cf: Pop(0)
0x5d0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5d1: Push(CvectorIndex(Stack[-1], 1))
0x5d2: Stack[-1] = Stack[-3]
0x5d3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5d4: Push("head")
0x5d5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5d6: Pop(1)
0x5d7: Return(); Pop(4)

0x5d8: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5d9: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5da: Pop(0)
0x5db: Pop(0); Push((bool) Stack[-8] == 0)
0x5dc: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5dd: Stack[-7] = (int) 0
0x5de: Push((int) 1)
0x5df: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5e0: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5e1: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5e2: Pop(1)
0x5e3: Pop(0); Push((bool) Stack[-6] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: GOTO 0x5e9

0x5e6: Push((int) 1)
0x5e7: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5e8: GOTO 0x5de

0x5e9: Pop(0); Push((bool) Stack[-7] == 0)
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5eb: Return(); Pop(16)

0x5ec: @ irand(Stack[-5], Stack[-7])
0x5ed: Pop(0)
0x5ee: Push((int) 1)
0x5ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5f0: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5f1: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5f2: Pop(0)
0x5f3: Push(Stack[-4])
0x5f4: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5f5: @ GetEyesHeight(Stack[-3])
0x5f6: Pop(0)
0x5f7: @ GetDirection(Stack[-2])
0x5f8: Pop(0)
0x5f9: Push((int) 50)
0x5fa: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5fb: Push(CvectorIndex(Stack[-1], 1))
0x5fc: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5fd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5fe: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5ff: Pop(0)
0x600: Return(); Pop(16)

0x601: PushEmpty(object, object)
0x602: @ self(Stack[-1])
0x603: Pop(0)
0x604: Stack[-3] = Stack[-1]
0x605: Return(); Pop(2)

0x606: Stack[-1] = 0
0x607: PushEmpty(float, float)
0x608: Pop(0); Push(Stack[-3] | Stack[-3]);
0x609: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x60a: Push((float)0.0)
0x60b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x60e: Return(); Pop(2)

0x60f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x610: Return(); Pop(2)

0x611: PushEmpty()
0x612: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x614: Stack[-3] = Stack[-2]
0x615: GOTO 0x617

0x616: Stack[-3] = Stack[-1]
0x617: Return(); Pop(0)

0x618: PushEmpty()
0x619: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-4] = Stack[-2]
0x61c: Return(); Pop(0)

0x61d: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: Stack[-4] = Stack[-1]
0x620: Return(); Pop(0)

0x621: Stack[-4] = Stack[-3]
0x622: Return(); Pop(0)

0x623: PushEmpty()
0x624: Pop(0); Push((bool) Stack[-2] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-3] = (bool) 0
0x627: Return(); Pop(0)

0x628: Push((int) 0)
0x629: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62b: Push((int) 8)
0x62c: @ SendWorldWndMessage(Stack[-1])
0x62d: Pop(1)
0x62e: GOTO 0x638

0x62f: Push((int) 0)
0x630: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x632: Push((int) 9)
0x633: @ SendWorldWndMessage(Stack[-1])
0x634: Pop(1)
0x635: GOTO 0x638

0x636: Stack[-3] = (bool) 0
0x637: Return(); Pop(0)

0x638: PushEmpty(float)
0x639: Stack[-1] = Stack[-2]
0x63a: Call2 0x657

0x63b: Pop(1)
0x63c: PushEmpty(bool, object, string, float, float, float)
0x63d: Stack[-5] = Stack[-8]
0x63e: Stack[-4] = "reputation"
0x63f: Stack[-3] = Stack[-7]
0x640: Stack[-2] = (int) 0
0x641: Stack[-1] = (int) 1
0x642: Call2 0x4a4

0x643: Pop(6)
0x644: Stack[-3] = (bool) 1
0x645: Return(); Pop(0)

0x646: PushEmpty(object, object)
0x647: @ CreateFloatVector(Stack[-1])
0x648: Pop(0)
0x649: @@ add(Stack[-3])
0x64a: Pop(0)
0x64b: Push((int) 0)
0x64c: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64e: Push((float)0.7)
0x64f: Push((int) 500)
0x650: @ RumblePlay(Stack[-2], Stack[-1])
0x651: Pop(2)
0x652: Push((int) 15)
0x653: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x654: Pop(1)
0x655: Return(); Pop(2)

0x656: Stack[-1] = 0
0x657: PushEmpty(object, object)
0x658: @ CreateFloatVector(Stack[-1])
0x659: Pop(0)
0x65a: @@ add(Stack[-3])
0x65b: Pop(0)
0x65c: Push((int) 16)
0x65d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x65e: Pop(1)
0x65f: Return(); Pop(2)

0x660: Stack[-1] = 0
0x661: PushEmpty(object, object)
0x662: @ FindActor(Stack[-1], Stack[-4])
0x663: Pop(0)
0x664: Pop(0); Push((bool) Stack[-1] == 0)
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: Stack[-5] = (bool) 0
0x667: Return(); Pop(2)

0x668: @ Trigger(Stack[-1], Stack[-3])
0x669: Pop(0)
0x66a: Stack[-5] = (bool) 1
0x66b: Return(); Pop(2)

0x66c: Stack[-1] = 0
0x66d: PushEmpty(bool, bool)
0x66e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x66f: Pop(0)
0x670: Push(Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x672: Push("attack")
0x673: @ PlayGlobalMusic(Stack[-1])
0x674: Pop(1)
0x675: Return(); Pop(2)

0x676: PushEmpty(object, object)
0x677: @ GetScene(Stack[-1])
0x678: Pop(0)
0x679: Push("battle")
0x67a: PushEmpty(object)
0x67b: Call2 0x601

0x67c: Pop(0)
0x67d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x67e: Pop(2)
0x67f: Return(); Pop(2)

0x680: Stack[-1] = 0
0x681: PushEmpty(int, int)
0x682: Push("branch")
0x683: @ GetVariable(Stack[-1], Stack[-2])
0x684: Pop(1)
0x685: Stack[-3] = Stack[-1]
0x686: Return(); Pop(2)

0x687: PushEmpty()
0x688: PushEmpty(int)
0x689: Call2 0x681

0x68a: Pop(0)
0x68b: Push((int) 1)
0x68c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68e: @ WorkWithCorpse(Stack[-1])
0x68f: Pop(0)
0x690: GOTO 0x693

0x691: @ Barter(Stack[-1])
0x692: Pop(0)
0x693: Return(); Pop(0)

0x694: PushEmpty(object, int, bool, object, int, bool)
0x695: @ CreateInvItem(Stack[-3])
0x696: Pop(0)
0x697: @@ SetItemName(Stack[-7])
0x698: Pop(0)
0x699: Push("Organ")
0x69a: Push((int) 1)
0x69b: @@ SetProperty(Stack[-2], Stack[-1])
0x69c: Pop(2)
0x69d: @@ GetItemID(Stack[-2])
0x69e: Pop(0)
0x69f: Push((int) 0)
0x6a0: Push((int) 1)
0x6a1: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x6a2: Pop(2)
0x6a3: Return(); Pop(6)

0x6a4: Stack[-3] = 0
0x6a5: PushEmpty(int)
0x6a6: Call2 0x681

0x6a7: Pop(0)
0x6a8: Push((int) 1)
0x6a9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(string)
0x6ad: Stack[-1] = "liver"
0x6ae: Call2 0x694

0x6af: Pop(1)
0x6b0: PushEmpty(string)
0x6b1: Stack[-1] = "kidney"
0x6b2: Call2 0x694

0x6b3: Pop(1)
0x6b4: PushEmpty(string)
0x6b5: Stack[-1] = "heart"
0x6b6: Call2 0x694

0x6b7: Pop(1)
0x6b8: PushEmpty(string)
0x6b9: Stack[-1] = "blood"
0x6ba: Call2 0x694

0x6bb: Pop(1)
0x6bc: Return(); Pop(0)

0x6bd: PushEmpty()
0x6be: PushEmpty(object, int, float)
0x6bf: Stack[-3] = Stack[-7]
0x6c0: Stack[-2] = Stack[-6]
0x6c1: Stack[-1] = Stack[-5]
0x6c2: Call2 0x570

0x6c3: Pop(3)
0x6c4: Return(); Pop(0)

0x6c5: PushEmpty()
0x6c6: PushEmpty(object, int, float, cvector, cvector)
0x6c7: Stack[-5] = Stack[-11]
0x6c8: Stack[-4] = Stack[-10]
0x6c9: Stack[-3] = Stack[-9]
0x6ca: Stack[-2] = Stack[-7]
0x6cb: Stack[-1] = Stack[-6]
0x6cc: Call2 0x5b4

0x6cd: Pop(5)
0x6ce: Return(); Pop(0)

0x6cf: PushEmpty(float, float)
0x6d0: Push("health")
0x6d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6d3: Push("health")
0x6d4: @ GetProperty(Stack[-1], Stack[-2])
0x6d5: Pop(1)
0x6d6: Push((int) 0)
0x6d7: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6d9: @ SignalDeath(Stack[-4])
0x6da: Pop(0)
0x6db: Return(); Pop(2)

0x6dc: PushEmpty()
0x6dd: PushEmpty(object)
0x6de: Stack[-1] = Stack[-2]
0x6df: Call2 0x6e2

0x6e0: Pop(1)
0x6e1: Return(); Pop(0)

0x6e2: PushEmpty()
0x6e3: PushEmpty(object)
0x6e4: Stack[-1] = Stack[-2]
0x6e5: Push(-1, 0); TaskCall(2)
0x6e6: Call2 0x3ab

0x6e7: Pop(-1, 0); TaskReturn
0x6e8: Pop(1)
0x6e9: Return(); Pop(0)

