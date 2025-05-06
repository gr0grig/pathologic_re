GlobalVarCount = 2
	G_VAR_0 bool 
	G_VAR_1 object 

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
	woman
	worker
	butcher
	wasted_girl
	boy
	vaxxabitka
	unosha
	wasted_male
	alkash
	dohodyaga
	vaxxabit
	nudegirl
	morlok
	reputation
	battle
	god_mode
	idle
	class
	in
	branch
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	Knife
	lockpick
	rifle_ammo
	samopal_ammo
	revolver_ammo
	Samopal
	Revolver
	Rifle
	grabitel_mark

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
	IsInWalkMode (1 args)
	GetBrightness (1 args)
	rand (2 args)
	GetRandomPFPointInCircle (4 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
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
	AddItem (3 args)
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	RemoveActor (1 args)

RunOp = 0x477
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 2
		EVENT_17 Op = 0x6b Vars = (object)
		EVENT_30 Op = 0x71 Vars = (object, object, bool)
		EVENT_26 Op = 0x78 Vars = (string)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0xb6 Vars = (object)
		EVENT_30 Op = 0xbc Vars = (object, object, bool)
		EVENT_26 Op = 0xc3 Vars = (string)
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x35f Vars = (object)
		EVENT_30 Op = 0x365 Vars = (object, object, bool)
		EVENT_26 Op = 0x36c Vars = (string)
		EVENT_7 Op = 0x3a8 Vars = (int)
		EVENT_1 Op = 0x3c3 Vars = (object)
		EVENT_2 Op = 0x3d2 Vars = (object)
		EVENT_10 Op = 0x458 Vars = (object)
		EVENT_41 Op = 0x463 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_41 Op = 0x48b Vars = (object)
		EVENT_7 Op = 0x494 Vars = (int)
		EVENT_1 Op = 0x4bb Vars = (object)
		EVENT_3 Op = 0x4c9 Vars = (object)
		EVENT_17 Op = 0x4d7 Vars = (object)
		EVENT_30 Op = 0x4e0 Vars = (object, object, bool)
		EVENT_10 Op = 0x52c Vars = (object)
		EVENT_28 Op = 0x530 Vars = ()
	GTASK_4  Params = 0
		EVENT_1 Op = 0x549 Vars = (object)
		EVENT_3 Op = 0x557 Vars = (object)
		EVENT_17 Op = 0x565 Vars = (object)
		EVENT_30 Op = 0x56e Vars = (object, object, bool)
	GTASK_5  Params = 1
		EVENT_41 Op = 0x5d9 Vars = (object)
		EVENT_1 Op = 0x5e2 Vars = (object)
		EVENT_3 Op = 0x5f0 Vars = (object)
		EVENT_17 Op = 0x5fe Vars = (object)
		EVENT_30 Op = 0x607 Vars = (object, object, bool)
	GTASK_6 Vars = (bool, object, bool) Params = 1
		EVENT_41 Op = 0x651 Vars = (object)
		EVENT_17 Op = 0x65a Vars = (object)
		EVENT_7 Op = 0x6c9 Vars = (int)
		EVENT_10 Op = 0x6db Vars = (object)
	GTASK_7  Params = 2
	GTASK_8  Params = 1
		EVENT_0 Op = 0x745 Vars = (object)
		EVENT_22 Op = 0x7c4 Vars = (object, int, float, float)
		EVENT_16 Op = 0x7c6 Vars = (object, string)
		EVENT_41 Op = 0x7c8 Vars = (object)

Events:
EVENT_22 Op = 0xbca Vars = (object, int, float, float)
EVENT_43 Op = 0xbd2 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xbdc Vars = (object, string)
EVENT_41 Op = 0xbe9 Vars = (object)
EVENT_6 Op = 0xc94 Vars = ()

0x0: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x1: PushEmpty(object)
0x2: Stack[-1] = Stack[-16]
0x3: Call2 0xaa3

0x4: Pop(1)
0x5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6: PushEmpty(bool, object)
0x7: Stack[-1] = Stack[-17]
0x8: Call2 0x8e3

0x9: Pop(2)
0xa: PushEmpty(bool, object)
0xb: Stack[-1] = Stack[-17]
0xc: Call2 0x89f

0xd: Pop(1)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-16] = (bool) 0
0x11: Return(); Pop(14)

0x12: PushEmpty()
0x13: Call2 0xaac

0x14: Pop(0)
0x15: @ Face(Stack[-15])
0x16: Pop(0)
0x17: Push("all")
0x18: Push("aattack_begin1")
0x19: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: @ WaitForAnimEnd()
0x1c: Pop(0)
0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-17]
0x1f: Call2 0x89f

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: @ StopAsync()
0x24: Pop(0)
0x25: Stack[-16] = (bool) 0
0x26: Return(); Pop(14)

0x27: Push("all")
0x28: Push("aattack_end1")
0x29: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a: Pop(2)
0x2b: @ GetScene(Stack[-7])
0x2c: Pop(0)
0x2d: Push("knife")
0x2e: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x2f: Pop(1)
0x30: Push("scripted")
0x31: Push(CVector(0.0, 0.0, 1.0))
0x32: Push("grabitel_knife.xml")
0x33: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x34: Pop(3)
0x35: Push("Owner")
0x36: PushEmpty(object)
0x37: Call2 0xa1f

0x38: Pop(0)
0x39: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: Push("Target")
0x3c: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x3d: Pop(1)
0x3e: @@ GetPosition(Stack[-3])
0x3f: Pop(0)
0x40: @@ GetEyesHeight(Stack[-2])
0x41: Pop(0)
0x42: Push(CvectorIndex(Stack[-3], 1))
0x43: Push((int) 10)
0x44: Pop(1); Push(Stack[-4] - Stack[-1]);
0x45: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x46: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x47: PushEmpty(cvector, cvector, cvector, float)
0x48: Stack[-3] = Stack[-10]
0x49: Stack[-2] = Stack[-7]
0x4a: Stack[-1] = (float) 2000.0
0x4b: Call2 0xad5

0x4c: Stack[-5] = Stack[-4]
0x4d: Pop(4)
0x4e: Push("StartDirection")
0x4f: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x50: Pop(1)
0x51: @ WaitForAnimEnd()
0x52: Pop(0)
0x53: @ StopAsync()
0x54: Pop(0)
0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-16] = (bool) 1
0x58: Return(); Pop(14)

0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[-17]
0x5b: Call2 0x89f

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-16] = (bool) 0
0x60: Return(); Pop(14)

0x61: PushEmpty(bool, object)
0x62: Stack[-1] = Stack[-17]
0x63: Push(-2, 6); TaskCall(1)
0x64: Call2 0x7e

0x65: Pop(-2, 6); TaskReturn
0x66: Stack[-18] = Stack[-2]
0x67: Pop(2)
0x68: Return(); Pop(14)

0x69: Stack[-4] = 0
0x6a: Stack[-7] = 0
0x6b: PushEmpty()
0x6c: PushEmpty(object)
0x6d: Stack[-1] = Stack[-2]
0x6e: Call2 0xb6e

0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty()
0x72: PushEmpty(bool, object, object)
0x73: Stack[-2] = Stack[-6]
0x74: Stack[-1] = Stack[-5]
0x75: Call2 0xb97

0x76: Pop(3)
0x77: Return(); Pop(0)

0x78: PushEmpty()
0x79: Push("kill")
0x7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: Push(GlobalVars[0])
0x80: Stack[-1] = (bool) 0
0x81: GlobalVars[0] = Stack[-1]; Pop(1)
0x82: PushEmpty(object, bool, float)
0x83: Stack[-3] = Stack[-4]
0x84: Stack[-2] = (bool) 1
0x85: Stack[-1] = (float) 200.0
0x86: Call2 0xcb

0x87: Pop(3)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: Push(GlobalVars[0])
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x90: Push("all")
0x91: Push("attack_off")
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push(GlobalVars[0])
0x97: Stack[-3] = Stack[-1]
0x98: Pop(1)
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Stack[-3] = (float) 0.15
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Stack[-3] = (int) 0
0x9f: Return(); Pop(0)

0xa0: Stack[-1] = (int) 1
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Stack[-1] = (bool) 0
0xa5: Push((int) 0)
0xa6: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[-5]
0xaa: Call2 0x857

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Stack[-1] = (bool) 1
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: Push(GlobalVars[0])
0xb0: Stack[-1] = (bool) 1
0xb1: GlobalVars[0] = Stack[-1]; Pop(1)
0xb2: PushEmpty()
0xb3: Call2 0x283

0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[-2]
0xb9: Call2 0xb6e

0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object, object)
0xbe: Stack[-2] = Stack[-6]
0xbf: Stack[-1] = Stack[-5]
0xc0: Call2 0xb97

0xc1: Pop(3)
0xc2: Return(); Pop(0)

0xc3: PushEmpty()
0xc4: Push("kill")
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc7: Push(GlobalVars[0])
0xc8: Stack[-1] = (bool) 1
0xc9: GlobalVars[0] = Stack[-1]; Pop(1)
0xca: Return(); Pop(0)

0xcb: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xcc: PushEmpty()
0xcd: Call2 0x1b0

0xce: Pop(0)
0xcf: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xd0: Push("@GetAttackDistance")
0xd1: Push((int) 1)
0xd2: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: @@ GetAttackDistance(Stack[-11])
0xd5: Pop(0)
0xd6: Push((int) 50)
0xd7: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xd8: GOTO 0xda

0xd9: Stack[-11] = Stack[-23]
0xda: Push((int) 150)
0xdb: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-11] = (int) 150
0xde: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xe0: @ IsPlayerActor(Stack[-0], Stack[-8])
0xe1: Pop(0)
0xe2: Push(Stack[-8])
0xe3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe4: Push("attack")
0xe5: @ PlayGlobalMusic(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(object)
0xe8: Call2 0xa1f

0xe9: Pop(0)
0xea: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xeb: Pop(1)
0xec: Push(Stack[-24])
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-7] = (bool) 0
0xef: GOTO 0xf1

0xf0: Stack[-7] = (bool) 1
0xf1: Push((float)300.0)
0xf2: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x89f

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfa: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 1
0xfd: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0xfe: PushEmpty()
0xff: Call2 0x34f

0x100: Pop(0)
0x101: @@ GetPFPosition(Stack[-10])
0x102: Pop(0)
0x103: @ GetPFPosition(Stack[-9])
0x104: Pop(0)
0x105: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x106: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x107: Pop(0); Push(Stack[-6] * Stack[-6]);
0x108: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(bool, object, float, float, bool, bool)
0x10b: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Stack[-4] = Stack[-17]
0x10d: Stack[-3] = (float) 3000.0
0x10e: Stack[-2] = (bool) 1
0x10f: Stack[-1] = (bool) 0
0x110: Push(-6, 3); TaskCall(2)
0x111: Call2 0x377

0x112: Pop(-6, 3); TaskReturn
0x113: Pop(5)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: GOTO 0x19f

0x117: Stack[-7] = (bool) 0
0x118: GOTO 0x19e

0x119: Pop(0); Push(Stack[-23] * Stack[-23]);
0x11a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x11c: @@ GetPFPosition(Stack[-3])
0x11d: Pop(0)
0x11e: @ CanReachByPF(Stack[-2], Stack[-3])
0x11f: Pop(0)
0x120: Pop(0); Push((bool) Stack[-2] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(bool, object, float, float, bool, bool)
0x123: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x124: Stack[-4] = Stack[-17]
0x125: Stack[-3] = (float) 3000.0
0x126: Stack[-2] = (bool) 1
0x127: Stack[-1] = (bool) 0
0x128: Push(-6, 3); TaskCall(2)
0x129: Call2 0x377

0x12a: Pop(-6, 3); TaskReturn
0x12b: Pop(5)
0x12c: Pop(1); Push((bool) Stack[-1] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: GOTO 0x19f

0x12f: Stack[-7] = (bool) 0
0x130: GOTO 0xf3

0x131: Pop(0); Push((bool) Stack[-7] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x133: PushEmpty(object)
0x134: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x135: Call2 0x96a

0x136: Pop(1)
0x137: Push("all")
0x138: Push("attack_on")
0x139: @ PlayAnimation(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: @ WaitForAnimEnd()
0x13c: Pop(0)
0x13d: PushEmpty()
0x13e: Call2 0x34f

0x13f: Pop(0)
0x140: @ StopAsync()
0x141: Pop(0)
0x142: Stack[-7] = (bool) 1
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x89f

0x146: Pop(1)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: GOTO 0x19f

0x14a: @ rand(Stack[-1])
0x14b: Pop(0)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 1
0x14e: Push((float)0.2)
0x14f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x324

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 0
0x156: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x157: @ Face(Stack[-0])
0x158: Pop(0)
0x159: PushEmpty()
0x15a: Call2 0x354

0x15b: Pop(0)
0x15c: Push("all")
0x15d: Push("attack_stay")
0x15e: @ PlayAnimation(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: PushEmpty(bool, float)
0x161: Stack[-1] = Stack[-25]
0x162: Call2 0x2a0

0x163: Pop(2)
0x164: @ StopAsync()
0x165: Pop(0)
0x166: GOTO 0x195

0x167: @ Face(Stack[-0])
0x168: Pop(0)
0x169: Push("all")
0x16a: Push("fjump")
0x16b: @ PlayAnimation(Stack[-2], Stack[-1])
0x16c: Pop(2)
0x16d: @ WaitForAnimEnd()
0x16e: Pop(0)
0x16f: PushEmpty()
0x170: Call2 0x34f

0x171: Pop(0)
0x172: Push(CVector(0.0, 0.0, 0.0))
0x173: @ SetSpeed(Stack[-1])
0x174: Pop(1)
0x175: @ Stop()
0x176: Pop(0)
0x177: @ StopAsync()
0x178: Pop(0)
0x179: PushEmpty(bool)
0x17a: Call2 0x324

0x17b: Pop(0)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x180: Call2 0x89f

0x181: Pop(1)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x19f

0x185: @@ GetPFPosition(Stack[-10])
0x186: Pop(0)
0x187: @ GetPFPosition(Stack[-9])
0x188: Pop(0)
0x189: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x18a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x18b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x18c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18e: PushEmpty(bool, float)
0x18f: Stack[-1] = Stack[-25]
0x190: Call2 0x1fa

0x191: Pop(1)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19f

0x195: GOTO 0x19e

0x196: PushEmpty(bool, float)
0x197: Stack[-1] = Stack[-25]
0x198: Call2 0x1fa

0x199: Pop(1)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x19f

0x19d: Stack[-7] = (bool) 1
0x19e: GOTO 0xf3

0x19f: @ WaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Return(); Pop(22)

0x1a4: Push("all")
0x1a5: Push("attack_off")
0x1a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: Push(Stack[-8])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: Push((float)2.0)
0x1ad: @ Sleep(Stack[-1])
0x1ae: Pop(1)
0x1af: Return(); Pop(22)

0x1b0: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1b1: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1b2: Push("all")
0x1b3: Push("attack_begin")
0x1b4: Push((int) 1)
0x1b5: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b7: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1bf

0x1bc: Push((int) 1)
0x1bd: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1be: GOTO 0x1b2

0x1bf: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1c0: Push("attack")
0x1c1: Push((int) 1)
0x1c2: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1c3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c4: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1c5: Pop(1)
0x1c6: Pop(0); Push((bool) Stack[-2] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: GOTO 0x1cc

0x1c9: Push((int) 1)
0x1ca: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1cb: GOTO 0x1c0

0x1cc: Push("all")
0x1cd: Push("bjump")
0x1ce: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: Push(CvectorIndex(Stack[-1], 2))
0x1d1: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1d2: Return(); Pop(6)

0x1d3: PushEmpty(object, float, float, object, float, float)
0x1d4: Push((float)0.9)
0x1d5: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1d6: @ GetVictim(Stack[-1], Stack[-4])
0x1d7: Pop(1)
0x1d8: @ ReportAttack(Stack[-0])
0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1dc: PushEmpty(float, object, int)
0x1dd: Stack[-2] = Stack[-6]
0x1de: Stack[-1] = Stack[-10]
0x1df: Call2 0x9a

0x1e0: Stack[-5] = Stack[-3]
0x1e1: Pop(3)
0x1e2: PushEmpty(float, object, float, int)
0x1e3: Stack[-3] = Stack[-7]
0x1e4: Stack[-2] = Stack[-6]
0x1e5: PushEmpty(int, object, int)
0x1e6: Stack[-2] = Stack[-10]
0x1e7: Stack[-1] = Stack[-14]
0x1e8: Call2 0x9d

0x1e9: Stack[-4] = Stack[-3]
0x1ea: Pop(3)
0x1eb: Call2 0x80e

0x1ec: Stack[-5] = Stack[-4]
0x1ed: Pop(4)
0x1ee: PushEmpty(int)
0x1ef: Call2 0xa0

0x1f0: Pop(0)
0x1f1: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1f2: Pop(1)
0x1f3: PushEmpty(object, float)
0x1f4: Stack[-2] = Stack[-5]
0x1f5: Stack[-1] = Stack[-3]
0x1f6: Call2 0xa2

0x1f7: Pop(2)
0x1f8: Return(); Pop(6)

0x1f9: Stack[-3] = 0
0x1fa: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1fb: PushEmpty()
0x1fc: Call2 0x34f

0x1fd: Pop(0)
0x1fe: @ irand(Stack[-4], Stack[-1])
0x1ff: Pop(0)
0x200: Push((int) 1)
0x201: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x202: @ Face(Stack[-0])
0x203: Pop(0)
0x204: Push((bool) 1)
0x205: @ SetAttackState(Stack[-1])
0x206: Pop(1)
0x207: PushEmpty()
0x208: Call2 0xaac

0x209: Pop(0)
0x20a: Push("all")
0x20b: Push("attack_begin")
0x20c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20d: @ PlayAnimation(Stack[-2], Stack[-1])
0x20e: Pop(2)
0x20f: @ WaitForAnimEnd()
0x210: Pop(0)
0x211: PushEmpty()
0x212: Call2 0x32f

0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x89f

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21a: @ StopAsync()
0x21b: Pop(0)
0x21c: Stack[-10] = (bool) 0
0x21d: Return(); Pop(8)

0x21e: PushEmpty(float, int)
0x21f: Stack[-2] = Stack[-11]
0x220: Stack[-1] = Stack[-6]
0x221: Call2 0x1d3

0x222: Pop(2)
0x223: Push("all")
0x224: Push("attack_middle")
0x225: Pop(1); Push(Stack[-1] + Stack[-6]);
0x226: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: Push(Stack[-3])
0x229: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0xaac

0x22c: Pop(0)
0x22d: Push("all")
0x22e: Push("attack_middle")
0x22f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x230: @ PlayAnimation(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: @ WaitForAnimEnd()
0x233: Pop(0)
0x234: PushEmpty()
0x235: Call2 0x34f

0x236: Pop(0)
0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x239: Call2 0x89f

0x23a: Pop(1)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23d: @ StopAsync()
0x23e: Pop(0)
0x23f: Stack[-10] = (bool) 0
0x240: Return(); Pop(8)

0x241: PushEmpty(float, int)
0x242: Stack[-2] = Stack[-11]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0x1d3

0x245: Pop(2)
0x246: Stack[-2] = (int) 1
0x247: Push("attack_middle")
0x248: Pop(1); Push(Stack[-1] + Stack[-5]);
0x249: Push("_")
0x24a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24b: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x24c: Push("all")
0x24d: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x24e: Pop(1)
0x24f: Pop(0); Push((bool) Stack[-3] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x26f

0x252: PushEmpty()
0x253: Call2 0xaac

0x254: Pop(0)
0x255: Push("all")
0x256: @ PlayAnimation(Stack[-1], Stack[-2])
0x257: Pop(1)
0x258: @ WaitForAnimEnd()
0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x34f

0x25c: Pop(0)
0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call2 0x89f

0x260: Pop(1)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x263: @ StopAsync()
0x264: Pop(0)
0x265: Stack[-10] = (bool) 0
0x266: Return(); Pop(8)

0x267: PushEmpty(float, int)
0x268: Stack[-2] = Stack[-11]
0x269: Stack[-1] = Stack[-6]
0x26a: Call2 0x1d3

0x26b: Pop(2)
0x26c: Push((int) 1)
0x26d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26e: GOTO 0x247

0x26f: Push((bool) 0)
0x270: @ SetAttackState(Stack[-1])
0x271: Pop(1)
0x272: Push("all")
0x273: Push("attack_end")
0x274: Pop(1); Push(Stack[-1] + Stack[-6]);
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: PushEmpty(bool)
0x278: Call2 0x359

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27b: PushEmpty(bool, float)
0x27c: Stack[-1] = (float) 0.45
0x27d: Call2 0x285

0x27e: Pop(2)
0x27f: @ StopAsync()
0x280: Pop(0)
0x281: Stack[-10] = (bool) 1
0x282: Return(); Pop(8)

0x283: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x284: Return(); Pop(0)

0x285: PushEmpty(float, bool, float, bool)
0x286: @ rand(Stack[-2])
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: @ IsAnimationPlaying(Stack[-1])
0x28b: Pop(0)
0x28c: Pop(0); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x298

0x28f: PushEmpty(bool)
0x290: Call2 0x2e7

0x291: Pop(0)
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-6] = (bool) 1
0x294: Return(); Pop(4)

0x295: @ sync()
0x296: Pop(0)
0x297: GOTO 0x28a

0x298: GOTO 0x29e

0x299: @ WaitForAnimEnd()
0x29a: Pop(0)
0x29b: PushEmpty()
0x29c: Call2 0x34f

0x29d: Pop(0)
0x29e: Stack[-6] = (bool) 0
0x29f: Return(); Pop(4)

0x2a0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2a1: @ IsAnimationPlaying(Stack[-5])
0x2a2: Pop(0)
0x2a3: Pop(0); Push((bool) Stack[-5] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2c6

0x2a6: PushEmpty(bool)
0x2a7: Call2 0x2e7

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-12] = (bool) 1
0x2ab: Return(); Pop(10)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call2 0x89f

0x2af: Pop(1)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-12] = (bool) 0
0x2b3: Return(); Pop(10)

0x2b4: @@ GetPFPosition(Stack[-4])
0x2b5: Pop(0)
0x2b6: @ GetPFPosition(Stack[-3])
0x2b7: Pop(0)
0x2b8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2b9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2ba: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2bb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bd: PushEmpty(bool, float)
0x2be: Stack[-1] = Stack[-13]
0x2bf: Call2 0x1fa

0x2c0: Pop(2)
0x2c1: Stack[-12] = (bool) 1
0x2c2: Return(); Pop(10)

0x2c3: @ sync()
0x2c4: Pop(0)
0x2c5: GOTO 0x2a1

0x2c6: PushEmpty()
0x2c7: Call2 0x34f

0x2c8: Pop(0)
0x2c9: Stack[-12] = (bool) 0
0x2ca: Return(); Pop(10)

0x2cb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call2 0x89f

0x2cf: Pop(1)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-11] = (bool) 0
0x2d3: Return(); Pop(10)

0x2d4: PushEmpty(bool)
0x2d5: Call2 0x324

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d8: @@ GetPFPosition(Stack[-5])
0x2d9: Pop(0)
0x2da: @ GetPFPosition(Stack[-4])
0x2db: Pop(0)
0x2dc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2dd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2de: @@ GetAttackDistance(Stack[-1])
0x2df: Pop(0)
0x2e0: Push((int) 50)
0x2e1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2e2: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2e3: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2e4: Return(); Pop(10)

0x2e5: Stack[-11] = (bool) 0
0x2e6: Return(); Pop(10)

0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 0
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x2cb

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2f7

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = (bool) 1
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-1] = (bool) 1
0x2f4: Return(); Pop(0)

0x2f5: Stack[-1] = (bool) 0
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2f8: @ GetScene(Stack[-5])
0x2f9: Pop(0)
0x2fa: Stack[-4] = (bool) 0
0x2fb: PushEmpty(cvector, object)
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x7d8

0x2fe: Pop(1)
0x2ff: Pop(1); Push(( -Stack[-1])
0x300: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x301: Pop(1)
0x302: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: GOTO 0x321

0x305: @ Face(Stack[-0])
0x306: Pop(0)
0x307: Push("all")
0x308: Push("bjump")
0x309: @ PlayAnimation(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: @@ GetPFPosition(Stack[-2])
0x30c: Pop(0)
0x30d: @ GetPFPosition(Stack[-1])
0x30e: Pop(0)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x34f

0x313: Pop(0)
0x314: @ StopAsync()
0x315: Pop(0)
0x316: Push(CVector(0.0, 0.0, 0.0))
0x317: @ SetSpeed(Stack[-1])
0x318: Pop(1)
0x319: Stack[-4] = (bool) 1
0x31a: PushEmpty(bool)
0x31b: Call2 0x2cb

0x31c: Pop(0)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: GOTO 0x321

0x320: GOTO 0x2fb

0x321: Stack[-11] = Stack[-4]
0x322: Return(); Pop(10)

0x323: Stack[-5] = 0
0x324: PushEmpty(bool, bool)
0x325: Push("IsAttacking")
0x326: Push((int) 1)
0x327: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: @@ IsAttacking(Stack[-1])
0x32a: Pop(0)
0x32b: Stack[-3] = Stack[-1]
0x32c: Return(); Pop(2)

0x32d: Stack[-3] = (bool) 0
0x32e: Return(); Pop(2)

0x32f: PushEmpty(float, int, float, int)
0x330: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Return(); Pop(4)

0x333: Push( Stack[5 + Tasks[-1].StackPointer] )
0x334: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x335: Push((int) -1)
0x336: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x337: Push((int) 0)
0x338: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Return(); Pop(4)

0x33b: @ rand(Stack[-2])
0x33c: Pop(0)
0x33d: PushEmpty(float)
0x33e: Call2 0x35d

0x33f: Pop(0)
0x340: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x342: @ irand(Stack[-1], Stack[-2])
0x343: Pop(0)
0x344: Push((int) 1)
0x345: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x346: Push("attack")
0x347: Pop(1); Push(Stack[-1] + Stack[-2]);
0x348: @ Speak(Stack[-1])
0x349: Pop(1)
0x34a: PushEmpty(int)
0x34b: Call2 0x35b

0x34c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x34d: Pop(1)
0x34e: Return(); Pop(4)

0x34f: PushEmpty(object)
0x350: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x351: Call2 0xaa3

0x352: Pop(1)
0x353: Return(); Pop(0)

0x354: PushEmpty(string)
0x355: Stack[-1] = "attack_stay"
0x356: Call2 0x99f

0x357: Pop(1)
0x358: Return(); Pop(0)

0x359: Stack[-1] = (bool) 1
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = (int) 1
0x35c: Return(); Pop(0)

0x35d: Stack[-1] = (float) 0.5
0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: PushEmpty(object)
0x361: Stack[-1] = Stack[-2]
0x362: Call2 0xb6e

0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(bool, object, object)
0x367: Stack[-2] = Stack[-6]
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0xb97

0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: PushEmpty()
0x36d: Push("kill")
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: Push(GlobalVars[0])
0x371: Stack[-1] = (bool) 1
0x372: GlobalVars[0] = Stack[-1]; Pop(1)
0x373: PushEmpty()
0x374: Call2 0x3b6

0x375: Pop(0)
0x376: Return(); Pop(0)

0x377: PushEmpty(bool, bool, bool, bool)
0x378: PushEmpty(object)
0x379: Stack[-1] = Stack[-10]
0x37a: Call2 0xaa3

0x37b: Pop(1)
0x37c: Push((int) 1)
0x37d: Push((int) 5)
0x37e: @ SetTimer(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: @ CanSee(Stack[-2], Stack[-9])
0x381: Pop(0)
0x382: Push(Stack[-2])
0x383: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x384: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x385: PushEmpty(object)
0x386: Stack[-1] = Stack[-10]
0x387: Call2 0x97a

0x388: Pop(1)
0x389: GOTO 0x38b

0x38a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[-11]
0x38d: Call2 0x7e7

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: PushEmpty(object)
0x391: Call2 0xa1f

0x392: Pop(0)
0x393: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x394: Pop(1)
0x395: PushEmpty(bool, object, float, float, bool, bool)
0x396: Stack[-5] = Stack[-15]
0x397: Stack[-4] = Stack[-14]
0x398: Stack[-3] = Stack[-13]
0x399: Stack[-2] = Stack[-12]
0x39a: Stack[-1] = Stack[-11]
0x39b: Call2 0x3e0

0x39c: Stack[-7] = Stack[-6]
0x39d: Pop(6)
0x39e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x39f: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a0: Push("head")
0x3a1: @ UnlookAsync(Stack[-1])
0x3a2: Pop(1)
0x3a3: Push((int) 1)
0x3a4: @ KillTimer(Stack[-1])
0x3a5: Pop(1)
0x3a6: Stack[-10] = Stack[-1]
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty()
0x3a9: Push((int) 1)
0x3aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ae: Call2 0xaa3

0x3af: Pop(1)
0x3b0: GOTO 0x3b5

0x3b1: PushEmpty(int)
0x3b2: Stack[-1] = Stack[-2]
0x3b3: Call2 0x446

0x3b4: Pop(1)
0x3b5: Return(); Pop(0)

0x3b6: Push((int) 1)
0x3b7: @ KillTimer(Stack[-1])
0x3b8: Pop(1)
0x3b9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3bc: Push("head")
0x3bd: @ UnlookAsync(Stack[-1])
0x3be: Pop(1)
0x3bf: PushEmpty()
0x3c0: Call2 0x45c

0x3c1: Pop(0)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: PushEmpty(bool)
0x3c5: Stack[-1] = (bool) 0
0x3c6: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Stack[-1] = (bool) 1
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3cd: PushEmpty(object)
0x3ce: Stack[-1] = Stack[-2]
0x3cf: Call2 0x97a

0x3d0: Pop(1)
0x3d1: Return(); Pop(0)

0x3d2: PushEmpty()
0x3d3: PushEmpty(bool)
0x3d4: Stack[-1] = (bool) 0
0x3d5: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Stack[-1] = (bool) 1
0x3da: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3db: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3dc: Push("head")
0x3dd: @ UnlookAsync(Stack[-1])
0x3de: Pop(1)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3e1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3e3: Stack[-7] = Stack[-17]
0x3e4: PushEmpty(bool, object)
0x3e5: Stack[-1] = Stack[-23]
0x3e6: Call2 0x46c

0x3e7: Pop(1)
0x3e8: Pop(1); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-22] = (bool) 0
0x3eb: Return(); Pop(16)

0x3ec: @@ GetPosition(Stack[-5])
0x3ed: Pop(0)
0x3ee: @ GetPosition(Stack[-4])
0x3ef: Pop(0)
0x3f0: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f1: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3f2: PushEmpty(bool)
0x3f3: Stack[-1] = (bool) 0
0x3f4: Push((int) 0)
0x3f5: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: Stack[-1] = (bool) 1
0x3fb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fc: @ Stop()
0x3fd: Pop(0)
0x3fe: Stack[-22] = (bool) 0
0x3ff: Return(); Pop(16)

0x400: Pop(0); Push(Stack[-20] * Stack[-20]);
0x401: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x403: @@ GetPFPosition(Stack[-5])
0x404: Pop(0)
0x405: @ FindPathTo(Stack[-1], Stack[-5])
0x406: Pop(0)
0x407: Pop(0); Push(( Stack[-1] != 0 )
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-6] = Stack[-1]
0x40a: Stack[-1] = 0
0x40b: Pop(0); Push(( Stack[-6] != 0 )
0x40c: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x40d: Push(Stack[-7])
0x40e: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40f: Stack[-7] = (bool) 0
0x410: @ RotatePath(Stack[-6], Stack[-8])
0x411: Pop(0)
0x412: Pop(0); Push((bool) Stack[-8] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: GOTO 0x444

0x415: Push((int) 0)
0x416: Push((float)0.3)
0x417: @ SetTimer(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: PushEmpty(string)
0x41a: Call2 0x473

0x41b: Pop(0)
0x41c: PushEmpty(string)
0x41d: Call2 0x475

0x41e: Pop(0)
0x41f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: Pop(0); Push((bool) Stack[-8] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x423: Push( Stack[0 + Tasks[-1].StackPointer] )
0x424: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x425: Stack[-6] = 0
0x426: GOTO 0x444

0x427: GOTO 0x429

0x428: GOTO 0x443

0x429: GOTO 0x42b

0x42a: Stack[-6] = 0
0x42b: GOTO 0x43c

0x42c: Push((int) 0)
0x42d: @ KillTimer(Stack[-1])
0x42e: Pop(1)
0x42f: Push((float)0.5)
0x430: @ Sleep(Stack[-1], Stack[-9])
0x431: Pop(1)
0x432: Pop(0); Push((bool) Stack[-8] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x434: Push( Stack[0 + Tasks[-1].StackPointer] )
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-6] = 0
0x437: GOTO 0x444

0x438: Push((int) 0)
0x439: Push((float)0.3)
0x43a: @ SetTimer(Stack[-2], Stack[-1])
0x43b: Pop(2)
0x43c: Stack[-1] = 0
0x43d: GOTO 0x442

0x43e: Push((int) 0)
0x43f: @ KillTimer(Stack[-1])
0x440: Pop(1)
0x441: GOTO 0x444

0x442: Stack[-6] = 0
0x443: GOTO 0x3e4

0x444: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x445: Return(); Pop(16)

0x446: PushEmpty()
0x447: Push((int) 0)
0x448: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Return(); Pop(0)

0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x46c

0x44e: Pop(1)
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x451: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x452: Push((int) 0)
0x453: @ KillTimer(Stack[-1])
0x454: Pop(1)
0x455: @ Stop()
0x456: Pop(0)
0x457: Return(); Pop(0)

0x458: PushEmpty()
0x459: @ RequestClearPath(Stack[-1])
0x45a: Pop(0)
0x45b: Return(); Pop(0)

0x45c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45d: Push((int) 0)
0x45e: @ KillTimer(Stack[-1])
0x45f: Pop(1)
0x460: @ Stop()
0x461: Pop(0)
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: PushEmpty()
0x465: Call2 0x3b6

0x466: Pop(0)
0x467: PushEmpty(object)
0x468: Stack[-1] = Stack[-2]
0x469: Call2 0xbe9

0x46a: Pop(1)
0x46b: Return(); Pop(0)

0x46c: PushEmpty()
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[-3]
0x46f: Call2 0x89f

0x470: Stack[-4] = Stack[-2]
0x471: Pop(2)
0x472: Return(); Pop(0)

0x473: Stack[-1] = "walk"
0x474: Return(); Pop(0)

0x475: Stack[-1] = "run"
0x476: Return(); Pop(0)

0x477: PushEmpty()
0x478: Call2 0xb0a

0x479: Pop(0)
0x47a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x47b: Push((int) 130)
0x47c: Push((float)0.3)
0x47d: @ SetTimer(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: PushEmpty()
0x480: Call2 0x4ec

0x481: Pop(0)
0x482: GOTO 0x47b

0x483: Return(); Pop(0)

0x484: PushEmpty()
0x485: Call2 0x533

0x486: Pop(0)
0x487: Push((int) 130)
0x488: @ KillTimer(Stack[-1])
0x489: Pop(1)
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: PushEmpty()
0x48d: Call2 0x484

0x48e: Pop(0)
0x48f: PushEmpty(object)
0x490: Stack[-1] = Stack[-2]
0x491: Call2 0xbe9

0x492: Pop(1)
0x493: Return(); Pop(0)

0x494: PushEmpty(bool, float, bool, bool, float, bool)
0x495: Push((int) 130)
0x496: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x498: Return(); Pop(6)

0x499: @ IsInWalkMode(Stack[-3])
0x49a: Pop(0)
0x49b: Push(Stack[-3])
0x49c: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x49d: @ GetBrightness(Stack[-2])
0x49e: Pop(0)
0x49f: Push((float)0.2)
0x4a0: Stack[-2] = Stack[-3] <= Stack[-1]; Pop(1);
0x4a1: Pop(0); Push((bool) Stack[-1] != Stack[2 + Tasks[-1].StackPointer])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4a4: Push(Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4a6: PushEmpty()
0x4a7: Call2 0x53a

0x4a8: Pop(0)
0x4a9: Push((int) 130)
0x4aa: @ KillTimer(Stack[-1])
0x4ab: Pop(1)
0x4ac: PushEmpty(bool)
0x4ad: Push(-1, 0); TaskCall(5)
0x4ae: Call2 0x5d0

0x4af: Pop(-1, 0); TaskReturn
0x4b0: Pop(0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b2: PushEmpty()
0x4b3: Call2 0x533

0x4b4: Pop(0)
0x4b5: GOTO 0x4ba

0x4b6: Push((int) 130)
0x4b7: Push((float)0.3)
0x4b8: @ SetTimer(Stack[-2], Stack[-1])
0x4b9: Pop(2)
0x4ba: Return(); Pop(6)

0x4bb: PushEmpty()
0x4bc: PushEmpty(bool, object)
0x4bd: Stack[-1] = Stack[-3]
0x4be: Call2 0xb56

0x4bf: Pop(1)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c1: PushEmpty()
0x4c2: Call2 0x484

0x4c3: Pop(0)
0x4c4: PushEmpty(object)
0x4c5: Stack[-1] = Stack[-2]
0x4c6: Call2 0xb5d

0x4c7: Pop(1)
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty()
0x4ca: PushEmpty(bool, object)
0x4cb: Stack[-1] = Stack[-3]
0x4cc: Call2 0xb3e

0x4cd: Pop(1)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4cf: PushEmpty()
0x4d0: Call2 0x484

0x4d1: Pop(0)
0x4d2: PushEmpty(object)
0x4d3: Stack[-1] = Stack[-2]
0x4d4: Call2 0xb45

0x4d5: Pop(1)
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: PushEmpty()
0x4d9: Call2 0x484

0x4da: Pop(0)
0x4db: PushEmpty(object)
0x4dc: Stack[-1] = Stack[-2]
0x4dd: Call2 0xb7b

0x4de: Pop(1)
0x4df: Return(); Pop(0)

0x4e0: PushEmpty()
0x4e1: PushEmpty(bool, object, object)
0x4e2: Stack[-2] = Stack[-6]
0x4e3: Stack[-1] = Stack[-5]
0x4e4: Call2 0xb97

0x4e5: Pop(2)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e7: PushEmpty(object)
0x4e8: Stack[-1] = Stack[-4]
0x4e9: Call2 0x4d7

0x4ea: Pop(1)
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x4ed: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4ee: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x4ef: Push((float)0.5)
0x4f0: @ rand(Stack[-7], Stack[-1])
0x4f1: Pop(1)
0x4f2: @ Sleep(Stack[-6])
0x4f3: Pop(0)
0x4f4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x4f6: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4f8: @ GetPosition(Stack[-4])
0x4f9: Pop(0)
0x4fa: PushEmpty(float)
0x4fb: Call2 0x527

0x4fc: Pop(0)
0x4fd: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x4fe: Pop(1)
0x4ff: Push(Stack[-3])
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: GOTO 0x506

0x502: Push((int) 1)
0x503: @ Sleep(Stack[-1])
0x504: Pop(1)
0x505: GOTO 0x4f8

0x506: GOTO 0x508

0x507: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x508: PushEmpty(object, cvector)
0x509: Stack[-1] = Stack[-7]
0x50a: Call2 0x543

0x50b: Stack[-4] = Stack[-2]
0x50c: Pop(2)
0x50d: Pop(0); Push(( Stack[-2] != 0 )
0x50e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x50f: @ RotatePath(Stack[-2], Stack[-1])
0x510: Pop(0)
0x511: Push(Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x513: PushEmpty(bool)
0x514: Call2 0x541

0x515: Pop(0)
0x516: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x517: Pop(1)
0x518: Stack[-2] = 0
0x519: Push(Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51b: PushEmpty()
0x51c: Push(-0, 0); TaskCall(4)
0x51d: Call2 0x57a

0x51e: Pop(-0, 0); TaskReturn
0x51f: Pop(0)
0x520: GOTO 0x524

0x521: Push((int) 1)
0x522: @ Sleep(Stack[-1])
0x523: Pop(1)
0x524: Stack[-2] = 0
0x525: GOTO 0x4f4

0x526: Return(); Pop(12)

0x527: PushEmpty(float, float)
0x528: @ GetCameraFarDistance(Stack[-1])
0x529: Pop(0)
0x52a: Stack[-3] = Stack[-1]
0x52b: Return(); Pop(2)

0x52c: PushEmpty()
0x52d: @ RequestClearPath(Stack[-1])
0x52e: Pop(0)
0x52f: Return(); Pop(0)

0x530: @ Stop()
0x531: Pop(0)
0x532: Return(); Pop(0)

0x533: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x534: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x535: @ Stop()
0x536: Pop(0)
0x537: @ StopGroup0()
0x538: Pop(0)
0x539: Return(); Pop(0)

0x53a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x53b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x53c: @ Stop()
0x53d: Pop(0)
0x53e: @ StopGroup0()
0x53f: Pop(0)
0x540: Return(); Pop(0)

0x541: Stack[-1] = (bool) 0
0x542: Return(); Pop(0)

0x543: PushEmpty(object, object)
0x544: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x545: Pop(0)
0x546: Stack[-4] = Stack[-1]
0x547: Return(); Pop(2)

0x548: Stack[-1] = 0
0x549: PushEmpty()
0x54a: PushEmpty(bool, object)
0x54b: Stack[-1] = Stack[-3]
0x54c: Call2 0xb56

0x54d: Pop(1)
0x54e: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x54f: PushEmpty()
0x550: Call2 0x5cb

0x551: Pop(0)
0x552: PushEmpty(object)
0x553: Stack[-1] = Stack[-2]
0x554: Call2 0xb5d

0x555: Pop(1)
0x556: Return(); Pop(0)

0x557: PushEmpty()
0x558: PushEmpty(bool, object)
0x559: Stack[-1] = Stack[-3]
0x55a: Call2 0xb3e

0x55b: Pop(1)
0x55c: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55d: PushEmpty()
0x55e: Call2 0x5cb

0x55f: Pop(0)
0x560: PushEmpty(object)
0x561: Stack[-1] = Stack[-2]
0x562: Call2 0xb45

0x563: Pop(1)
0x564: Return(); Pop(0)

0x565: PushEmpty()
0x566: PushEmpty()
0x567: Call2 0x5cb

0x568: Pop(0)
0x569: PushEmpty(object)
0x56a: Stack[-1] = Stack[-2]
0x56b: Call2 0xb7b

0x56c: Pop(1)
0x56d: Return(); Pop(0)

0x56e: PushEmpty()
0x56f: PushEmpty(bool, object, object)
0x570: Stack[-2] = Stack[-6]
0x571: Stack[-1] = Stack[-5]
0x572: Call2 0xb97

0x573: Pop(2)
0x574: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x575: PushEmpty(object)
0x576: Stack[-1] = Stack[-4]
0x577: Call2 0x565

0x578: Pop(1)
0x579: Return(); Pop(0)

0x57a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x57b: @ WaitForAnimEnd()
0x57c: Pop(0)
0x57d: PushEmpty(bool)
0x57e: Call2 0x975

0x57f: Pop(0)
0x580: Pop(1); Push((bool) Stack[-1] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Return(); Pop(14)

0x583: PushEmpty(int)
0x584: Call2 0xac4

0x585: Stack[-8] = Stack[-1]
0x586: Pop(1)
0x587: Stack[-6] = (int) 0
0x588: PushEmpty(bool)
0x589: Stack[-1] = (bool) 0
0x58a: Push((int) 5)
0x58b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58d: PushEmpty(bool)
0x58e: Call2 0x975

0x58f: Pop(0)
0x590: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x591: Stack[-1] = (bool) 1
0x592: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x593: Push((int) 3)
0x594: @ irand(Stack[-6], Stack[-1])
0x595: Pop(1)
0x596: Push((int) 0)
0x597: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x599: Push(Stack[-7])
0x59a: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x59b: @ irand(Stack[-4], Stack[-7])
0x59c: Pop(0)
0x59d: Push("all")
0x59e: PushEmpty(string, int)
0x59f: Stack[-1] = Stack[-7]
0x5a0: Call2 0xabd

0x5a1: Pop(1)
0x5a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5a3: Pop(2)
0x5a4: @ WaitForAnimEnd(Stack[-3])
0x5a5: Pop(0)
0x5a6: Pop(0); Push((bool) Stack[-3] == 0)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: GOTO 0x5c6

0x5a9: GOTO 0x5bb

0x5aa: Push((int) 1)
0x5ab: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5ad: Push((int) 4)
0x5ae: @ rand(Stack[-3], Stack[-1])
0x5af: Pop(1)
0x5b0: Push((int) 1)
0x5b1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b2: @ Sleep(Stack[-1], Stack[-2])
0x5b3: Pop(1)
0x5b4: Pop(0); Push((bool) Stack[-1] == 0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b6: GOTO 0x5c6

0x5b7: GOTO 0x5bb

0x5b8: Push(Stack[-6])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ba: GOTO 0x5c6

0x5bb: PushEmpty(bool)
0x5bc: Call2 0x5c9

0x5bd: Pop(0)
0x5be: Pop(1); Push((bool) Stack[-1] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5c0: GOTO 0x5c6

0x5c1: @ ResetAAS()
0x5c2: Pop(0)
0x5c3: Push((int) 1)
0x5c4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x5c5: GOTO 0x588

0x5c6: @ ResetAAS()
0x5c7: Pop(0)
0x5c8: Return(); Pop(14)

0x5c9: Stack[-1] = (bool) 1
0x5ca: Return(); Pop(0)

0x5cb: @ StopAnimation()
0x5cc: Pop(0)
0x5cd: @ StopGroup0()
0x5ce: Pop(0)
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty(bool, bool)
0x5d1: Push((int) 5)
0x5d2: @ Sleep(Stack[-1], Stack[-2])
0x5d3: Pop(1)
0x5d4: Stack[-3] = !Stack[-1]; Pop(0);
0x5d5: Return(); Pop(2)

0x5d6: @ StopGroup0()
0x5d7: Pop(0)
0x5d8: Return(); Pop(0)

0x5d9: PushEmpty()
0x5da: PushEmpty()
0x5db: Call2 0x5d6

0x5dc: Pop(0)
0x5dd: PushEmpty(object)
0x5de: Stack[-1] = Stack[-2]
0x5df: Call2 0xbe9

0x5e0: Pop(1)
0x5e1: Return(); Pop(0)

0x5e2: PushEmpty()
0x5e3: PushEmpty(bool, object)
0x5e4: Stack[-1] = Stack[-3]
0x5e5: Call2 0xb56

0x5e6: Pop(1)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5e8: PushEmpty()
0x5e9: Call2 0x5d6

0x5ea: Pop(0)
0x5eb: PushEmpty(object)
0x5ec: Stack[-1] = Stack[-2]
0x5ed: Call2 0xb5d

0x5ee: Pop(1)
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: PushEmpty(bool, object)
0x5f2: Stack[-1] = Stack[-3]
0x5f3: Call2 0xb3e

0x5f4: Pop(1)
0x5f5: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f6: PushEmpty()
0x5f7: Call2 0x5d6

0x5f8: Pop(0)
0x5f9: PushEmpty(object)
0x5fa: Stack[-1] = Stack[-2]
0x5fb: Call2 0xb45

0x5fc: Pop(1)
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: PushEmpty()
0x600: Call2 0x5d6

0x601: Pop(0)
0x602: PushEmpty(object)
0x603: Stack[-1] = Stack[-2]
0x604: Call2 0xb7b

0x605: Pop(1)
0x606: Return(); Pop(0)

0x607: PushEmpty()
0x608: PushEmpty(bool, object, object)
0x609: Stack[-2] = Stack[-6]
0x60a: Stack[-1] = Stack[-5]
0x60b: Call2 0xb97

0x60c: Pop(2)
0x60d: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x60e: PushEmpty(object)
0x60f: Stack[-1] = Stack[-4]
0x610: Call2 0x5fe

0x611: Pop(1)
0x612: Return(); Pop(0)

0x613: PushEmpty(bool, bool)
0x614: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x615: Push((int) 1)
0x616: @ Sleep(Stack[-1], Stack[-2])
0x617: Pop(1)
0x618: Pop(0); Push((bool) Stack[-1] == 0)
0x619: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x61a: Return(); Pop(2)

0x61b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x61c: PushEmpty(bool, object, float, float, bool, bool)
0x61d: Stack[-5] = Stack[-9]
0x61e: Stack[-4] = (int) 200
0x61f: Stack[-3] = (int) 2000
0x620: Stack[-2] = (bool) 1
0x621: Stack[-1] = (bool) 1
0x622: Call2 0x663

0x623: Pop(5)
0x624: Pop(1); Push((bool) Stack[-1] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x626: Return(); Pop(2)

0x627: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x628: @ Face(Stack[-3])
0x629: Pop(0)
0x62a: @ WaitForAnimEnd(Stack[-1])
0x62b: Pop(0)
0x62c: Pop(0); Push((bool) Stack[-1] == 0)
0x62d: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62e: @ StopAsync()
0x62f: Pop(0)
0x630: Return(); Pop(2)

0x631: Push("all")
0x632: Push("hunt")
0x633: @ PlayAnimation(Stack[-2], Stack[-1])
0x634: Pop(2)
0x635: @ WaitForAnimEnd(Stack[-1])
0x636: Pop(0)
0x637: @ StopAsync()
0x638: Pop(0)
0x639: Pop(0); Push((bool) Stack[-1] == 0)
0x63a: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63b: Return(); Pop(2)

0x63c: Return(); Pop(2)

0x63d: PushEmpty()
0x63e: PushEmpty(bool, object)
0x63f: Stack[-1] = Stack[-3]
0x640: Call2 0x8b7

0x641: Stack[-4] = Stack[-2]
0x642: Pop(2)
0x643: Return(); Pop(0)

0x644: Push( Stack[2 + Tasks[-1].StackPointer] )
0x645: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x646: PushEmpty()
0x647: Call2 0x6df

0x648: Pop(0)
0x649: GOTO 0x650

0x64a: @ StopGroup0()
0x64b: Pop(0)
0x64c: @ StopAnimation()
0x64d: Pop(0)
0x64e: @ StopAsync()
0x64f: Pop(0)
0x650: Return(); Pop(0)

0x651: PushEmpty()
0x652: PushEmpty()
0x653: Call2 0x644

0x654: Pop(0)
0x655: PushEmpty(object)
0x656: Stack[-1] = Stack[-2]
0x657: Call2 0xbe9

0x658: Pop(1)
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: PushEmpty()
0x65c: Call2 0x644

0x65d: Pop(0)
0x65e: PushEmpty(object)
0x65f: Stack[-1] = Stack[-2]
0x660: Call2 0xb7b

0x661: Pop(1)
0x662: Return(); Pop(0)

0x663: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x664: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x666: Stack[-7] = Stack[-17]
0x667: PushEmpty(bool, object)
0x668: Stack[-1] = Stack[-23]
0x669: Call2 0x63d

0x66a: Pop(1)
0x66b: Pop(1); Push((bool) Stack[-1] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66d: Stack[-22] = (bool) 0
0x66e: Return(); Pop(16)

0x66f: @@ GetPosition(Stack[-5])
0x670: Pop(0)
0x671: @ GetPosition(Stack[-4])
0x672: Pop(0)
0x673: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x674: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x675: PushEmpty(bool)
0x676: Stack[-1] = (bool) 0
0x677: Push((int) 0)
0x678: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67a: Pop(0); Push(Stack[-20] * Stack[-20]);
0x67b: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67d: Stack[-1] = (bool) 1
0x67e: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67f: @ Stop()
0x680: Pop(0)
0x681: Stack[-22] = (bool) 0
0x682: Return(); Pop(16)

0x683: Pop(0); Push(Stack[-20] * Stack[-20]);
0x684: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x686: @@ GetPFPosition(Stack[-5])
0x687: Pop(0)
0x688: @ FindPathTo(Stack[-1], Stack[-5])
0x689: Pop(0)
0x68a: Pop(0); Push(( Stack[-1] != 0 )
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-6] = Stack[-1]
0x68d: Stack[-1] = 0
0x68e: Pop(0); Push(( Stack[-6] != 0 )
0x68f: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x690: Push(Stack[-7])
0x691: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x692: Stack[-7] = (bool) 0
0x693: @ RotatePath(Stack[-6], Stack[-8])
0x694: Pop(0)
0x695: Pop(0); Push((bool) Stack[-8] == 0)
0x696: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x697: GOTO 0x6c7

0x698: Push((int) 0)
0x699: Push((float)0.3)
0x69a: @ SetTimer(Stack[-2], Stack[-1])
0x69b: Pop(2)
0x69c: PushEmpty(string)
0x69d: Call2 0x6e6

0x69e: Pop(0)
0x69f: PushEmpty(string)
0x6a0: Call2 0x6e8

0x6a1: Pop(0)
0x6a2: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x6a3: Pop(2)
0x6a4: Pop(0); Push((bool) Stack[-8] == 0)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a8: Stack[-6] = 0
0x6a9: GOTO 0x6c7

0x6aa: GOTO 0x6ac

0x6ab: GOTO 0x6c6

0x6ac: GOTO 0x6ae

0x6ad: Stack[-6] = 0
0x6ae: GOTO 0x6bf

0x6af: Push((int) 0)
0x6b0: @ KillTimer(Stack[-1])
0x6b1: Pop(1)
0x6b2: Push((float)0.5)
0x6b3: @ Sleep(Stack[-1], Stack[-9])
0x6b4: Pop(1)
0x6b5: Pop(0); Push((bool) Stack[-8] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: Stack[-6] = 0
0x6ba: GOTO 0x6c7

0x6bb: Push((int) 0)
0x6bc: Push((float)0.3)
0x6bd: @ SetTimer(Stack[-2], Stack[-1])
0x6be: Pop(2)
0x6bf: Stack[-1] = 0
0x6c0: GOTO 0x6c5

0x6c1: Push((int) 0)
0x6c2: @ KillTimer(Stack[-1])
0x6c3: Pop(1)
0x6c4: GOTO 0x6c7

0x6c5: Stack[-6] = 0
0x6c6: GOTO 0x667

0x6c7: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x6c8: Return(); Pop(16)

0x6c9: PushEmpty()
0x6ca: Push((int) 0)
0x6cb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cd: Return(); Pop(0)

0x6ce: PushEmpty(bool, object)
0x6cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d0: Call2 0x63d

0x6d1: Pop(1)
0x6d2: Pop(1); Push((bool) Stack[-1] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6d5: Push((int) 0)
0x6d6: @ KillTimer(Stack[-1])
0x6d7: Pop(1)
0x6d8: @ Stop()
0x6d9: Pop(0)
0x6da: Return(); Pop(0)

0x6db: PushEmpty()
0x6dc: @ RequestClearPath(Stack[-1])
0x6dd: Pop(0)
0x6de: Return(); Pop(0)

0x6df: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6e0: Push((int) 0)
0x6e1: @ KillTimer(Stack[-1])
0x6e2: Pop(1)
0x6e3: @ Stop()
0x6e4: Pop(0)
0x6e5: Return(); Pop(0)

0x6e6: Stack[-1] = "walk"
0x6e7: Return(); Pop(0)

0x6e8: Stack[-1] = "run"
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty()
0x6eb: PushEmpty(bool, object)
0x6ec: Stack[-1] = Stack[-3]
0x6ed: Call2 0x7e7

0x6ee: Pop(1)
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f0: PushEmpty(object)
0x6f1: Call2 0xa1f

0x6f2: Pop(0)
0x6f3: @ SendPlayerEnemy(Stack[-2], Stack[-1])
0x6f4: Pop(1)
0x6f5: PushEmpty(bool, object)
0x6f6: Stack[-1] = Stack[-3]
0x6f7: Call2 0x6fb

0x6f8: Stack[-4] = Stack[-2]
0x6f9: Pop(2)
0x6fa: Return(); Pop(0)

0x6fb: PushEmpty(float, float)
0x6fc: PushEmpty(bool, object)
0x6fd: Stack[-1] = Stack[-5]
0x6fe: Call2 0x89f

0x6ff: Pop(1)
0x700: Pop(1); Push((bool) Stack[-1] == 0)
0x701: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x702: Stack[-4] = (bool) 0
0x703: Return(); Pop(2)

0x704: PushEmpty(float, object)
0x705: Stack[-1] = Stack[-5]
0x706: Call2 0x7df

0x707: Stack[-3] = Stack[-2]
0x708: Pop(2)
0x709: PushEmpty(bool, float, float, float)
0x70a: Stack[-3] = Stack[-5]
0x70b: Stack[-2] = (float) 250000.0
0x70c: Stack[-1] = (float) 3240000.0
0x70d: Call2 0xa59

0x70e: Pop(3)
0x70f: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x710: PushEmpty(bool, object)
0x711: Stack[-1] = Stack[-5]
0x712: Push(-2, 1); TaskCall(0)
0x713: Call2 0x0

0x714: Pop(-2, 1); TaskReturn
0x715: Stack[-6] = Stack[-2]
0x716: Pop(2)
0x717: Return(); Pop(2)

0x718: PushEmpty(bool, object)
0x719: Stack[-1] = Stack[-5]
0x71a: Push(-2, 6); TaskCall(1)
0x71b: Call2 0x7e

0x71c: Pop(-2, 6); TaskReturn
0x71d: Stack[-6] = Stack[-2]
0x71e: Pop(2)
0x71f: Return(); Pop(2)

0x720: PushEmpty()
0x721: PushEmpty()
0x722: Call2 0xc4a

0x723: Pop(0)
0x724: PushEmpty()
0x725: Call2 0xc32

0x726: Pop(0)
0x727: PushEmpty(bool, object)
0x728: Stack[-1] = Stack[-3]
0x729: Call2 0x7e7

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72c: PushEmpty(bool, object, float)
0x72d: Stack[-2] = Stack[-4]
0x72e: Stack[-1] = (float) 0.01
0x72f: Call2 0xa6c

0x730: Pop(3)
0x731: PushEmpty(object)
0x732: Stack[-1] = Stack[-2]
0x733: Call2 0x736

0x734: Pop(1)
0x735: Return(); Pop(0)

0x736: PushEmpty()
0x737: EventDisable(0)
0x738: PushEmpty(object)
0x739: Stack[-1] = Stack[-2]
0x73a: Call2 0x74f

0x73b: Pop(1)
0x73c: Push((int) 50)
0x73d: Push((int) 40)
0x73e: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x73f: Pop(2)
0x740: EventEnable(0)
0x741: @ Hold()
0x742: Pop(0)
0x743: GOTO 0x741

0x744: Return(); Pop(0)

0x745: PushEmpty(bool, bool)
0x746: @ IsOverrideActive(Stack[-1])
0x747: Pop(0)
0x748: Pop(0); Push((bool) Stack[-1] == 0)
0x749: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74a: PushEmpty(object)
0x74b: Stack[-1] = Stack[-4]
0x74c: Call2 0xbf5

0x74d: Pop(1)
0x74e: Return(); Pop(2)

0x74f: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x750: Pop(0); Push((bool) Stack[-21] == 0)
0x751: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x752: PushEmpty(string)
0x753: Stack[-1] = "fdie"
0x754: Call2 0x7aa

0x755: Pop(1)
0x756: GOTO 0x7a9

0x757: @@ GetPosition(Stack[-10])
0x758: Pop(0)
0x759: @ GetPosition(Stack[-9])
0x75a: Pop(0)
0x75b: @ GetDirection(Stack[-8])
0x75c: Pop(0)
0x75d: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x75e: Push(CvectorIndex(Stack[-7], 0))
0x75f: Push(CvectorIndex(Stack[-9], 0))
0x760: Pop(2); Push(Stack[-2] * Stack[-1]);
0x761: Push(CvectorIndex(Stack[-8], 2))
0x762: Push(CvectorIndex(Stack[-10], 2))
0x763: Pop(2); Push(Stack[-2] * Stack[-1]);
0x764: Pop(2); Push(Stack[-2] + Stack[-1]);
0x765: Push((int) 0)
0x766: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x768: Stack[-6] = "fdie"
0x769: GOTO 0x76b

0x76a: Stack[-6] = "bdie"
0x76b: @ RemoveRTEnvelope()
0x76c: Pop(0)
0x76d: @ SetDeathState()
0x76e: Pop(0)
0x76f: @ Stop()
0x770: Pop(0)
0x771: @ StopAsync()
0x772: Pop(0)
0x773: Stack[-5] = Stack[-21]
0x774: Push("GetScriptProperty")
0x775: Push((int) 2)
0x776: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x777: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x778: Push("Owner")
0x779: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x77a: Pop(1)
0x77b: Push(Stack[-4])
0x77c: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x77d: Push("Owner")
0x77e: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x77f: Pop(1)
0x780: Pop(0); Push((bool) Stack[-5] == 0)
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: Stack[-5] = Stack[-21]
0x783: Push("@GetEyesHeight")
0x784: Push((int) 1)
0x785: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x786: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x787: @@ GetEyesHeight(Stack[-2])
0x788: Pop(0)
0x789: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x78a: Push(CvectorIndex(Stack[-1], 1))
0x78b: Stack[-1] = Stack[-3]
0x78c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x78d: Push("head")
0x78e: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x78f: Pop(1)
0x790: Stack[-3] = (bool) 1
0x791: GOTO 0x793

0x792: Stack[-3] = (bool) 0
0x793: PushEmpty(string)
0x794: Stack[-1] = Stack[-7]
0x795: Call2 0x99f

0x796: Pop(1)
0x797: Push("all")
0x798: @ PlayAnimation(Stack[-1], Stack[-7])
0x799: Pop(1)
0x79a: @ WaitForAnimEnd()
0x79b: Pop(0)
0x79c: Push(Stack[-3])
0x79d: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x79e: @ StopAsync()
0x79f: Pop(0)
0x7a0: Push("head")
0x7a1: @ UnlookAsync(Stack[-1])
0x7a2: Pop(1)
0x7a3: Push("all")
0x7a4: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x7a5: Pop(1)
0x7a6: @ RemoveEnvelope()
0x7a7: Pop(0)
0x7a8: Stack[-5] = 0
0x7a9: Return(); Pop(20)

0x7aa: PushEmpty()
0x7ab: @ RemoveRTEnvelope()
0x7ac: Pop(0)
0x7ad: @ SetDeathState()
0x7ae: Pop(0)
0x7af: @ Stop()
0x7b0: Pop(0)
0x7b1: @ StopAsync()
0x7b2: Pop(0)
0x7b3: @ StopSecondaryAnimation()
0x7b4: Pop(0)
0x7b5: PushEmpty(string)
0x7b6: Stack[-1] = Stack[-2]
0x7b7: Call2 0x99f

0x7b8: Pop(1)
0x7b9: Push("all")
0x7ba: @ PlayAnimation(Stack[-1], Stack[-2])
0x7bb: Pop(1)
0x7bc: @ WaitForAnimEnd()
0x7bd: Pop(0)
0x7be: Push("all")
0x7bf: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x7c0: Pop(1)
0x7c1: @ RemoveEnvelope()
0x7c2: Pop(0)
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty()
0x7c5: Return(); Pop(0)

0x7c6: PushEmpty()
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty()
0x7c9: Return(); Pop(0)

0x7ca: PushEmpty()
0x7cb: Push((int) 2)
0x7cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7ce: Stack[-2] = "fire"
0x7cf: Return(); Pop(0)

0x7d0: GOTO 0x7d6

0x7d1: Push((int) 1)
0x7d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-2] = "bullet"
0x7d5: Return(); Pop(0)

0x7d6: Stack[-2] = "phys"
0x7d7: Return(); Pop(0)

0x7d8: PushEmpty(cvector, cvector, cvector, cvector)
0x7d9: @ GetPosition(Stack[-2])
0x7da: Pop(0)
0x7db: @@ GetPosition(Stack[-1])
0x7dc: Pop(0)
0x7dd: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x7de: Return(); Pop(4)

0x7df: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7e0: @ GetPosition(Stack[-3])
0x7e1: Pop(0)
0x7e2: @@ GetPosition(Stack[-2])
0x7e3: Pop(0)
0x7e4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x7e5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x7e6: Return(); Pop(6)

0x7e7: PushEmpty(bool, bool)
0x7e8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7e9: Pop(0)
0x7ea: Stack[-4] = Stack[-1]
0x7eb: Return(); Pop(2)

0x7ec: PushEmpty(bool, bool)
0x7ed: Push("HasProperty")
0x7ee: Push((int) 2)
0x7ef: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x7f0: Pop(1); Push((bool) Stack[-1] == 0)
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f2: Stack[-5] = (bool) 0
0x7f3: Return(); Pop(2)

0x7f4: @@ HasProperty(Stack[-3], Stack[-1])
0x7f5: Pop(0)
0x7f6: Stack[-5] = Stack[-1]
0x7f7: Return(); Pop(2)

0x7f8: PushEmpty(float, float)
0x7f9: PushEmpty(bool, object, string)
0x7fa: Stack[-2] = Stack[-10]
0x7fb: Stack[-1] = Stack[-9]
0x7fc: Call2 0x7ec

0x7fd: Pop(2)
0x7fe: Pop(1); Push((bool) Stack[-1] == 0)
0x7ff: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x800: Stack[-8] = (bool) 0
0x801: Return(); Pop(2)

0x802: @@ GetProperty(Stack[-6], Stack[-1])
0x803: Pop(0)
0x804: PushEmpty(float, float, float, float)
0x805: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x806: Stack[-2] = Stack[-8]
0x807: Stack[-1] = Stack[-7]
0x808: Call2 0xa4e

0x809: Pop(3)
0x80a: @@ SetProperty(Stack[-7], Stack[-1])
0x80b: Pop(1)
0x80c: Stack[-8] = (bool) 1
0x80d: Return(); Pop(2)

0x80e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x80f: PushEmpty(bool, object, string)
0x810: Stack[-2] = Stack[-18]
0x811: Stack[-1] = "health"
0x812: Call2 0x7ec

0x813: Pop(2)
0x814: Pop(1); Push((bool) Stack[-1] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-16] = (float) 0.0
0x817: Return(); Pop(12)

0x818: PushEmpty(bool, object, string)
0x819: Stack[-2] = Stack[-18]
0x81a: Stack[-1] = "armor"
0x81b: Call2 0x7ec

0x81c: Pop(2)
0x81d: Pop(1); Push((bool) Stack[-1] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81f: Stack[-6] = (int) 0
0x820: GOTO 0x824

0x821: Push("armor")
0x822: @@ GetProperty(Stack[-1], Stack[-7])
0x823: Pop(1)
0x824: Push("armor_")
0x825: PushEmpty(string, int)
0x826: Stack[-1] = Stack[-16]
0x827: Call2 0x7ca

0x828: Pop(1)
0x829: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x82a: PushEmpty(bool, object, string)
0x82b: Stack[-2] = Stack[-18]
0x82c: Stack[-1] = Stack[-8]
0x82d: Call2 0x7ec

0x82e: Pop(2)
0x82f: Pop(1); Push((bool) Stack[-1] == 0)
0x830: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x831: Stack[-4] = (int) 0
0x832: GOTO 0x835

0x833: @@ GetProperty(Stack[-5], Stack[-4])
0x834: Pop(0)
0x835: PushEmpty(float, float, float)
0x836: Pop(0); Push(Stack[-9] + Stack[-7]);
0x837: Push((float)100.0)
0x838: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x839: Stack[-1] = (int) 1
0x83a: Call2 0xa2f

0x83b: Stack[-6] = Stack[-3]
0x83c: Pop(3)
0x83d: Push("health")
0x83e: @@ GetProperty(Stack[-1], Stack[-3])
0x83f: Pop(1)
0x840: Push((int) 1)
0x841: Pop(1); Push(Stack[-1] - Stack[-4]);
0x842: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x843: Push("health")
0x844: PushEmpty(float, float, float, float)
0x845: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x846: Stack[-2] = (int) 0
0x847: Stack[-1] = (int) 1
0x848: Call2 0xa4e

0x849: Pop(3)
0x84a: @@ SetProperty(Stack[-2], Stack[-1])
0x84b: Pop(2)
0x84c: PushEmpty(bool, object)
0x84d: Stack[-1] = Stack[-17]
0x84e: Call2 0x7e7

0x84f: Pop(1)
0x850: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x851: PushEmpty(float)
0x852: Stack[-1] = -Stack[-2]; Pop(0);
0x853: Call2 0xa8f

0x854: Pop(1)
0x855: Stack[-16] = Stack[-1]
0x856: Return(); Pop(12)

0x857: PushEmpty(float, float)
0x858: PushEmpty(bool, object, string)
0x859: Stack[-2] = Stack[-6]
0x85a: Stack[-1] = "health"
0x85b: Call2 0x7ec

0x85c: Pop(2)
0x85d: Pop(1); Push((bool) Stack[-1] == 0)
0x85e: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x85f: Stack[-4] = (bool) 0
0x860: Return(); Pop(2)

0x861: PushEmpty(bool)
0x862: Stack[-1] = (bool) 0
0x863: PushEmpty(bool, object)
0x864: Stack[-1] = Stack[-6]
0x865: Call2 0x7e7

0x866: Pop(1)
0x867: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x868: PushEmpty(bool)
0x869: Call2 0xab7

0x86a: Pop(0)
0x86b: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x86c: Stack[-1] = (bool) 1
0x86d: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86e: Stack[-4] = (bool) 0
0x86f: Return(); Pop(2)

0x870: Push("health")
0x871: @@ GetProperty(Stack[-1], Stack[-2])
0x872: Pop(1)
0x873: Push((float)0.0)
0x874: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x875: Return(); Pop(2)

0x876: PushEmpty(bool, bool)
0x877: @@ IsDead(Stack[-1])
0x878: Pop(0)
0x879: Stack[-4] = Stack[-1]
0x87a: Return(); Pop(2)

0x87b: PushEmpty(object, object, object, object)
0x87c: Pop(0); Push((bool) Stack[-5] == 0)
0x87d: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87e: Stack[-6] = (bool) 0
0x87f: Return(); Pop(4)

0x880: PushEmpty(bool)
0x881: Stack[-1] = (bool) 0
0x882: Push("IsDead")
0x883: Push((int) 1)
0x884: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x885: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x886: PushEmpty(bool, object)
0x887: Stack[-1] = Stack[-8]
0x888: Call2 0x876

0x889: Pop(1)
0x88a: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x88b: Stack[-1] = (bool) 1
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: Stack[-6] = (bool) 0
0x88e: Return(); Pop(4)

0x88f: @ GetScene(Stack[-2])
0x890: Pop(0)
0x891: Pop(0); Push((bool) Stack[-2] == 0)
0x892: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x893: Stack[-6] = (bool) 0
0x894: Return(); Pop(4)

0x895: @@ GetScene(Stack[-1])
0x896: Pop(0)
0x897: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x899: Stack[-6] = (bool) 0
0x89a: Return(); Pop(4)

0x89b: Stack[-6] = (bool) 1
0x89c: Return(); Pop(4)

0x89d: Stack[-1] = 0
0x89e: Stack[-2] = 0
0x89f: PushEmpty(int, int)
0x8a0: PushEmpty(bool, object)
0x8a1: Stack[-1] = Stack[-5]
0x8a2: Call2 0x87b

0x8a3: Pop(1)
0x8a4: Pop(1); Push((bool) Stack[-1] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a6: Stack[-4] = (bool) 0
0x8a7: Return(); Pop(2)

0x8a8: PushEmpty(bool, object, string)
0x8a9: Stack[-2] = Stack[-6]
0x8aa: Stack[-1] = "noaccess"
0x8ab: Call2 0x7ec

0x8ac: Pop(2)
0x8ad: Pop(1); Push((bool) Stack[-1] == 0)
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8af: Stack[-4] = (bool) 1
0x8b0: Return(); Pop(2)

0x8b1: Push("noaccess")
0x8b2: @@ GetProperty(Stack[-1], Stack[-2])
0x8b3: Pop(1)
0x8b4: Push((int) 0)
0x8b5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x8b6: Return(); Pop(2)

0x8b7: PushEmpty(object, object, int, object, object, int)
0x8b8: Pop(0); Push((bool) Stack[-7] == 0)
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8ba: Stack[-8] = (bool) 0
0x8bb: Return(); Pop(6)

0x8bc: @ GetScene(Stack[-3])
0x8bd: Pop(0)
0x8be: Pop(0); Push((bool) Stack[-3] == 0)
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8c0: Stack[-8] = (bool) 0
0x8c1: Return(); Pop(6)

0x8c2: @@ GetScene(Stack[-2])
0x8c3: Pop(0)
0x8c4: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c6: Stack[-8] = (bool) 0
0x8c7: Return(); Pop(6)

0x8c8: PushEmpty(bool, object, string)
0x8c9: Stack[-2] = Stack[-10]
0x8ca: Stack[-1] = "noaccess"
0x8cb: Call2 0x7ec

0x8cc: Pop(2)
0x8cd: Pop(1); Push((bool) Stack[-1] == 0)
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8cf: Stack[-8] = (bool) 1
0x8d0: Return(); Pop(6)

0x8d1: Push("noaccess")
0x8d2: @@ GetProperty(Stack[-1], Stack[-2])
0x8d3: Pop(1)
0x8d4: Push((int) 0)
0x8d5: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x8d6: Return(); Pop(6)

0x8d7: Stack[-2] = 0
0x8d8: Stack[-3] = 0
0x8d9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8da: @ GetPosition(Stack[-3])
0x8db: Pop(0)
0x8dc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8dd: Push(CvectorIndex(Stack[-2], 0))
0x8de: Push(CvectorIndex(Stack[-3], 2))
0x8df: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8e0: Pop(2)
0x8e1: Stack[-8] = Stack[-1]
0x8e2: Return(); Pop(6)

0x8e3: PushEmpty(cvector, cvector)
0x8e4: @@ GetPosition(Stack[-1])
0x8e5: Pop(0)
0x8e6: PushEmpty(bool, cvector)
0x8e7: Stack[-1] = Stack[-3]
0x8e8: Call2 0x8d9

0x8e9: Stack[-6] = Stack[-2]
0x8ea: Pop(2)
0x8eb: Return(); Pop(2)

0x8ec: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x8ed: Pop(0); Push((bool) Stack[-15] == 0)
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ef: Return(); Pop(14)

0x8f0: @ IsDead(Stack[-7])
0x8f1: Pop(0)
0x8f2: Push(Stack[-7])
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f4: Return(); Pop(14)

0x8f5: @ GetSecondaryAnimationType(Stack[-6])
0x8f6: Pop(0)
0x8f7: Push((int) 0)
0x8f8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8fa: Return(); Pop(14)

0x8fb: @@ GetPosition(Stack[-5])
0x8fc: Pop(0)
0x8fd: @ GetPosition(Stack[-4])
0x8fe: Pop(0)
0x8ff: @ GetDirection(Stack[-3])
0x900: Pop(0)
0x901: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x902: Push(CvectorIndex(Stack[-2], 0))
0x903: Push(CvectorIndex(Stack[-4], 0))
0x904: Pop(2); Push(Stack[-2] * Stack[-1]);
0x905: Push(CvectorIndex(Stack[-3], 2))
0x906: Push(CvectorIndex(Stack[-5], 2))
0x907: Pop(2); Push(Stack[-2] * Stack[-1]);
0x908: Pop(2); Push(Stack[-2] + Stack[-1]);
0x909: Push((int) 0)
0x90a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x90b: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x90c: Stack[-1] = "fhit"
0x90d: GOTO 0x90f

0x90e: Stack[-1] = "bhit"
0x90f: Push("hit_react")
0x910: Push("1")
0x911: Pop(1); Push(Stack[-3] + Stack[-1]);
0x912: Push("2")
0x913: Pop(1); Push(Stack[-4] + Stack[-1]);
0x914: Push((int) -10)
0x915: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x916: Pop(4)
0x917: Return(); Pop(14)

0x918: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x919: PushEmpty(bool)
0x91a: Stack[-1] = (bool) 0
0x91b: PushEmpty(bool)
0x91c: Stack[-1] = (bool) 0
0x91d: Push(Stack[-23])
0x91e: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x91f: Push((int) 4)
0x920: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x922: Stack[-1] = (bool) 1
0x923: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x924: Push((int) 5)
0x925: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x926: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x927: Stack[-1] = (bool) 1
0x928: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x929: PushEmpty(cvector, cvector)
0x92a: PushEmpty(cvector, object)
0x92b: Stack[-1] = Stack[-25]
0x92c: Call2 0x7d8

0x92d: Stack[-3] = Stack[-2]
0x92e: Pop(2)
0x92f: Call2 0xa25

0x930: Stack[-11] = Stack[-2]
0x931: Pop(2)
0x932: @ CreateVectorVector(Stack[-8])
0x933: Pop(0)
0x934: Stack[-7] = (int) 1
0x935: Push("hit")
0x936: Pop(1); Push(Stack[-1] + Stack[-8]);
0x937: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x938: Pop(1)
0x939: Pop(0); Push((bool) Stack[-6] == 0)
0x93a: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x93b: GOTO 0x945

0x93c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x93d: Push((float)0.70711)
0x93e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x940: @@ add(Stack[-5])
0x941: Pop(0)
0x942: Push((int) 1)
0x943: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x944: GOTO 0x935

0x945: @@ size(Stack[-3])
0x946: Pop(0)
0x947: Push(Stack[-3])
0x948: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x949: @ irand(Stack[-2], Stack[-3])
0x94a: Pop(0)
0x94b: @@ get(Stack[-1], Stack[-2])
0x94c: Pop(0)
0x94d: PushEmpty(object, int, float, cvector, cvector)
0x94e: Stack[-5] = Stack[-26]
0x94f: Stack[-4] = Stack[-25]
0x950: Stack[-3] = Stack[-24]
0x951: Stack[-2] = Stack[-6]
0x952: Stack[-1] = -Stack[-14]; Pop(0);
0x953: Call2 0x95c

0x954: Pop(5)
0x955: Return(); Pop(18)

0x956: Stack[-8] = 0
0x957: PushEmpty(object)
0x958: Stack[-1] = Stack[-22]
0x959: Call2 0x8ec

0x95a: Pop(1)
0x95b: Return(); Pop(18)

0x95c: PushEmpty(object, object, object, object)
0x95d: @ GetScene(Stack[-2])
0x95e: Pop(0)
0x95f: Push("scripted")
0x960: Push("blood_dir.xml")
0x961: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x962: Pop(2)
0x963: PushEmpty(object)
0x964: Stack[-1] = Stack[-10]
0x965: Call2 0x8ec

0x966: Pop(1)
0x967: Return(); Pop(4)

0x968: Stack[-1] = 0
0x969: Stack[-2] = 0
0x96a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x96b: @@ GetPosition(Stack[-3])
0x96c: Pop(0)
0x96d: @ GetPosition(Stack[-2])
0x96e: Pop(0)
0x96f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x970: Push(CvectorIndex(Stack[-1], 0))
0x971: Push(CvectorIndex(Stack[-2], 2))
0x972: @ RotateAsync(Stack[-2], Stack[-1])
0x973: Pop(2)
0x974: Return(); Pop(6)

0x975: PushEmpty(bool, bool)
0x976: @ IsLoaded(Stack[-1])
0x977: Pop(0)
0x978: Stack[-3] = Stack[-1]
0x979: Return(); Pop(2)

0x97a: PushEmpty(float, cvector, float, cvector)
0x97b: @@ GetEyesHeight(Stack[-2])
0x97c: Pop(0)
0x97d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x97e: Push(CvectorIndex(Stack[-1], 1))
0x97f: Stack[-1] = Stack[-3]
0x980: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x981: Push("head")
0x982: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x983: Pop(1)
0x984: Return(); Pop(4)

0x985: PushEmpty(bool, bool)
0x986: PushEmpty(bool, int, int)
0x987: Stack[-2] = Stack[-7]
0x988: Stack[-1] = Stack[-6]
0x989: Call2 0xa61

0x98a: Pop(2)
0x98b: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98c: Push((int) 0)
0x98d: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x98e: Pop(1)
0x98f: Return(); Pop(2)

0x990: PushEmpty(int, bool, int, bool)
0x991: PushEmpty(bool, int, int)
0x992: Stack[-2] = Stack[-10]
0x993: Stack[-1] = Stack[-9]
0x994: Call2 0xa61

0x995: Pop(2)
0x996: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x997: @ irand(Stack[-2], Stack[-5])
0x998: Pop(0)
0x999: Push((int) 0)
0x99a: Push((int) 1)
0x99b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x99c: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x99d: Pop(2)
0x99e: Return(); Pop(4)

0x99f: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x9a0: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x9a1: Pop(0)
0x9a2: Pop(0); Push((bool) Stack[-8] == 0)
0x9a3: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9a4: Stack[-7] = (int) 0
0x9a5: Push((int) 1)
0x9a6: Pop(1); Push(Stack[-8] + Stack[-1]);
0x9a7: Pop(1); Push(Stack[-18] + Stack[-1]);
0x9a8: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x9a9: Pop(1)
0x9aa: Pop(0); Push((bool) Stack[-6] == 0)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ac: GOTO 0x9b0

0x9ad: Push((int) 1)
0x9ae: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x9af: GOTO 0x9a5

0x9b0: Pop(0); Push((bool) Stack[-7] == 0)
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b2: Return(); Pop(16)

0x9b3: @ irand(Stack[-5], Stack[-7])
0x9b4: Pop(0)
0x9b5: Push((int) 1)
0x9b6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b7: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x9b8: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x9b9: Pop(0)
0x9ba: Push(Stack[-4])
0x9bb: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9bc: @ GetEyesHeight(Stack[-3])
0x9bd: Pop(0)
0x9be: @ GetDirection(Stack[-2])
0x9bf: Pop(0)
0x9c0: Push((int) 50)
0x9c1: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x9c2: Push(CvectorIndex(Stack[-1], 1))
0x9c3: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x9c4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x9c5: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x9c6: Pop(0)
0x9c7: Return(); Pop(16)

0x9c8: PushEmpty()
0x9c9: Stack[-2] = (bool) 1
0x9ca: PushEmpty(bool)
0x9cb: Stack[-1] = (bool) 1
0x9cc: PushEmpty(bool)
0x9cd: Stack[-1] = (bool) 1
0x9ce: PushEmpty(bool)
0x9cf: Stack[-1] = (bool) 1
0x9d0: PushEmpty(bool)
0x9d1: Stack[-1] = (bool) 1
0x9d2: PushEmpty(bool)
0x9d3: Stack[-1] = (bool) 1
0x9d4: PushEmpty(bool)
0x9d5: Stack[-1] = (bool) 1
0x9d6: PushEmpty(bool)
0x9d7: Stack[-1] = (bool) 1
0x9d8: PushEmpty(bool)
0x9d9: Stack[-1] = (bool) 1
0x9da: PushEmpty(bool)
0x9db: Stack[-1] = (bool) 1
0x9dc: PushEmpty(bool)
0x9dd: Stack[-1] = (bool) 1
0x9de: PushEmpty(bool)
0x9df: Stack[-1] = (bool) 1
0x9e0: Push("woman")
0x9e1: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x9e2: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e3: Push("worker")
0x9e4: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e6: Stack[-1] = (bool) 0
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9e8: Push("butcher")
0x9e9: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9eb: Stack[-1] = (bool) 0
0x9ec: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ed: Push("wasted_girl")
0x9ee: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9f0: Stack[-1] = (bool) 0
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9f2: Push("boy")
0x9f3: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x9f4: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9f5: Stack[-1] = (bool) 0
0x9f6: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f7: Push("vaxxabitka")
0x9f8: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9fa: Stack[-1] = (bool) 0
0x9fb: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fc: Push("unosha")
0x9fd: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9ff: Stack[-1] = (bool) 0
0xa00: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa01: Push("wasted_male")
0xa02: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa04: Stack[-1] = (bool) 0
0xa05: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa06: Push("alkash")
0xa07: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa08: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa09: Stack[-1] = (bool) 0
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0b: Push("dohodyaga")
0xa0c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0e: Stack[-1] = (bool) 0
0xa0f: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa10: Push("vaxxabit")
0xa11: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa12: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa13: Stack[-1] = (bool) 0
0xa14: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa15: Push("nudegirl")
0xa16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa18: Stack[-1] = (bool) 0
0xa19: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1a: Push("morlok")
0xa1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1d: Stack[-2] = (bool) 0
0xa1e: Return(); Pop(0)

0xa1f: PushEmpty(object, object)
0xa20: @ self(Stack[-1])
0xa21: Pop(0)
0xa22: Stack[-3] = Stack[-1]
0xa23: Return(); Pop(2)

0xa24: Stack[-1] = 0
0xa25: PushEmpty(float, float)
0xa26: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa27: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa28: Push((float)0.0)
0xa29: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa2a: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa2b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa2c: Return(); Pop(2)

0xa2d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa2e: Return(); Pop(2)

0xa2f: PushEmpty()
0xa30: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa32: Stack[-3] = Stack[-2]
0xa33: GOTO 0xa35

0xa34: Stack[-3] = Stack[-1]
0xa35: Return(); Pop(0)

0xa36: PushEmpty()
0xa37: Pop(0); Push(Stack[-2] * Stack[-2]);
0xa38: Push((int) 4)
0xa39: Pop(1); Push(Stack[-1] * Stack[-5]);
0xa3a: Pop(1); Push(Stack[-1] * Stack[-3]);
0xa3b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa3c: Return(); Pop(0)

0xa3d: PushEmpty(float, float)
0xa3e: Pop(0); Push(( -Stack[-5])
0xa3f: Pop(1); Push(Stack[-1] - Stack[-4]);
0xa40: Push((int) 2)
0xa41: Pop(1); Push(Stack[-1] * Stack[-8]);
0xa42: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0xa43: Push((int) 0)
0xa44: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa45: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa46: Stack[-7] = Stack[-1]
0xa47: Return(); Pop(2)

0xa48: Pop(0); Push(( -Stack[-5])
0xa49: Pop(1); Push(Stack[-1] + Stack[-4]);
0xa4a: Push((int) 2)
0xa4b: Pop(1); Push(Stack[-1] * Stack[-8]);
0xa4c: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0xa4d: Return(); Pop(2)

0xa4e: PushEmpty()
0xa4f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xa50: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa51: Stack[-4] = Stack[-2]
0xa52: Return(); Pop(0)

0xa53: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa54: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa55: Stack[-4] = Stack[-1]
0xa56: Return(); Pop(0)

0xa57: Stack[-4] = Stack[-3]
0xa58: Return(); Pop(0)

0xa59: PushEmpty()
0xa5a: Stack[-4] = (bool) 0
0xa5b: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5d: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5f: Stack[-4] = (bool) 1
0xa60: Return(); Pop(0)

0xa61: PushEmpty(int, int)
0xa62: @ irand(Stack[-1], Stack[-3])
0xa63: Pop(0)
0xa64: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xa65: Return(); Pop(2)

0xa66: PushEmpty(object, object)
0xa67: @ CreateObjectSet(Stack[-1])
0xa68: Pop(0)
0xa69: Stack[-3] = Stack[-1]
0xa6a: Return(); Pop(2)

0xa6b: Stack[-1] = 0
0xa6c: PushEmpty()
0xa6d: Pop(0); Push((bool) Stack[-2] == 0)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6f: Stack[-3] = (bool) 0
0xa70: Return(); Pop(0)

0xa71: Push((int) 0)
0xa72: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa74: Push((int) 8)
0xa75: @ SendWorldWndMessage(Stack[-1])
0xa76: Pop(1)
0xa77: GOTO 0xa81

0xa78: Push((int) 0)
0xa79: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7b: Push((int) 9)
0xa7c: @ SendWorldWndMessage(Stack[-1])
0xa7d: Pop(1)
0xa7e: GOTO 0xa81

0xa7f: Stack[-3] = (bool) 0
0xa80: Return(); Pop(0)

0xa81: PushEmpty(float)
0xa82: Stack[-1] = Stack[-2]
0xa83: Call2 0xa99

0xa84: Pop(1)
0xa85: PushEmpty(bool, object, string, float, float, float)
0xa86: Stack[-5] = Stack[-8]
0xa87: Stack[-4] = "reputation"
0xa88: Stack[-3] = Stack[-7]
0xa89: Stack[-2] = (int) 0
0xa8a: Stack[-1] = (int) 1
0xa8b: Call2 0x7f8

0xa8c: Pop(6)
0xa8d: Stack[-3] = (bool) 1
0xa8e: Return(); Pop(0)

0xa8f: PushEmpty(object, object)
0xa90: @ CreateFloatVector(Stack[-1])
0xa91: Pop(0)
0xa92: @@ add(Stack[-3])
0xa93: Pop(0)
0xa94: Push((int) 15)
0xa95: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa96: Pop(1)
0xa97: Return(); Pop(2)

0xa98: Stack[-1] = 0
0xa99: PushEmpty(object, object)
0xa9a: @ CreateFloatVector(Stack[-1])
0xa9b: Pop(0)
0xa9c: @@ add(Stack[-3])
0xa9d: Pop(0)
0xa9e: Push((int) 16)
0xa9f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xaa0: Pop(1)
0xaa1: Return(); Pop(2)

0xaa2: Stack[-1] = 0
0xaa3: PushEmpty(bool, bool)
0xaa4: @ IsPlayerActor(Stack[-3], Stack[-1])
0xaa5: Pop(0)
0xaa6: Push(Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa8: Push("attack")
0xaa9: @ PlayGlobalMusic(Stack[-1])
0xaaa: Pop(1)
0xaab: Return(); Pop(2)

0xaac: PushEmpty(object, object)
0xaad: @ GetScene(Stack[-1])
0xaae: Pop(0)
0xaaf: Push("battle")
0xab0: PushEmpty(object)
0xab1: Call2 0xa1f

0xab2: Pop(0)
0xab3: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xab4: Pop(2)
0xab5: Return(); Pop(2)

0xab6: Stack[-1] = 0
0xab7: PushEmpty(bool, bool)
0xab8: Push("god_mode")
0xab9: @ GetVariable(Stack[-1], Stack[-2])
0xaba: Pop(1)
0xabb: Stack[-3] = Stack[-1]
0xabc: Return(); Pop(2)

0xabd: PushEmpty(string, string)
0xabe: Stack[-1] = "idle"
0xabf: Push(Stack[-3])
0xac0: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xac1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xac2: Stack[-4] = Stack[-1]
0xac3: Return(); Pop(2)

0xac4: PushEmpty(int, bool, int, bool)
0xac5: Stack[-2] = (int) 0
0xac6: Push("all")
0xac7: PushEmpty(string, int)
0xac8: Stack[-1] = Stack[-5]
0xac9: Call2 0xabd

0xaca: Pop(1)
0xacb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xacc: Pop(2)
0xacd: Pop(0); Push((bool) Stack[-1] == 0)
0xace: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xacf: GOTO 0xad3

0xad0: Push((int) 1)
0xad1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xad2: GOTO 0xac6

0xad3: Stack[-5] = Stack[-2]
0xad4: Return(); Pop(4)

0xad5: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0xad6: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0xad7: Stack[-5] = (int) 250000
0xad8: Push(CvectorIndex(Stack[-6], 1))
0xad9: Push((int) 1000)
0xada: Pop(2); Push(Stack[-2] * Stack[-1]);
0xadb: Pop(0); Push(Stack[-14] * Stack[-14]);
0xadc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xadd: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0xade: PushEmpty(float, float, float, float)
0xadf: Stack[-3] = Stack[-9]
0xae0: Stack[-2] = Stack[-8]
0xae1: Stack[-1] = Stack[-7]
0xae2: Call2 0xa36

0xae3: Stack[-6] = Stack[-4]
0xae4: Pop(4)
0xae5: Push((int) 0)
0xae6: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xae7: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae8: Stack[-1] = (int) 1
0xae9: GOTO 0xaf2

0xaea: PushEmpty(float, float, float, float, float)
0xaeb: Stack[-4] = Stack[-10]
0xaec: Stack[-3] = Stack[-9]
0xaed: Stack[-2] = Stack[-8]
0xaee: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0xaef: Call2 0xa3d

0xaf0: Pop(4)
0xaf1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xaf2: Push(CVector(0.0, 500.0, 0.0))
0xaf3: Pop(1); Push(Stack[-1] * Stack[-2]);
0xaf4: Pop(1); Push(Stack[-1] * Stack[-2]);
0xaf5: Pop(1); Push(Stack[-7] + Stack[-1]);
0xaf6: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0xaf7: Return(); Pop(12)

0xaf8: PushEmpty(string, string, string, string)
0xaf9: PushEmpty(bool, object, string)
0xafa: Stack[-2] = Stack[-8]
0xafb: Stack[-1] = "class"
0xafc: Call2 0x7ec

0xafd: Pop(2)
0xafe: Pop(1); Push((bool) Stack[-1] == 0)
0xaff: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xb00: Stack[-6] = (bool) 0
0xb01: Return(); Pop(4)

0xb02: Push("class")
0xb03: @ GetProperty(Stack[-1], Stack[-3])
0xb04: Pop(1)
0xb05: Push("class")
0xb06: @@ GetProperty(Stack[-1], Stack[-2])
0xb07: Pop(1)
0xb08: Stack[-6] = Stack[-1] == Stack[-2]; Pop(0);
0xb09: Return(); Pop(4)

0xb0a: Push(GlobalVars[1])
0xb0b: PushEmpty(object)
0xb0c: Call2 0xa66

0xb0d: Stack[-2] = Stack[-1]
0xb0e: Pop(1)
0xb0f: GlobalVars[1] = Stack[-1]; Pop(1)
0xb10: Return(); Pop(0)

0xb11: PushEmpty(bool, float, string, bool, float, string)
0xb12: PushEmpty(bool, object)
0xb13: Stack[-1] = Stack[-9]
0xb14: Call2 0x89f

0xb15: Pop(1)
0xb16: Pop(1); Push((bool) Stack[-1] == 0)
0xb17: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb18: Stack[-8] = (bool) 0
0xb19: Return(); Pop(6)

0xb1a: Push(GlobalVars[1])
0xb1b: @@ in(Stack[-4], Stack[-8])
0xb1c: Pop(1)
0xb1d: Push(Stack[-3])
0xb1e: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1f: Stack[-8] = (bool) 1
0xb20: Return(); Pop(6)

0xb21: PushEmpty(bool, object)
0xb22: Stack[-1] = Stack[-9]
0xb23: Call2 0x7e7

0xb24: Pop(1)
0xb25: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb26: Push("reputation")
0xb27: @@ GetProperty(Stack[-1], Stack[-3])
0xb28: Pop(1)
0xb29: Push((float)0.33)
0xb2a: Stack[-9] = Stack[-3] >= Stack[-1]; Pop(1);
0xb2b: Return(); Pop(6)

0xb2c: PushEmpty(bool, object, string)
0xb2d: Stack[-2] = Stack[-10]
0xb2e: Stack[-1] = "class"
0xb2f: Call2 0x7ec

0xb30: Pop(2)
0xb31: Pop(1); Push((bool) Stack[-1] == 0)
0xb32: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb33: Stack[-8] = (bool) 0
0xb34: Return(); Pop(6)

0xb35: Push("class")
0xb36: @@ GetProperty(Stack[-1], Stack[-2])
0xb37: Pop(1)
0xb38: PushEmpty(bool, string)
0xb39: Stack[-1] = Stack[-3]
0xb3a: Call2 0x9c8

0xb3b: Stack[-10] = Stack[-2]
0xb3c: Pop(2)
0xb3d: Return(); Pop(6)

0xb3e: PushEmpty()
0xb3f: PushEmpty(bool, object)
0xb40: Stack[-1] = Stack[-3]
0xb41: Call2 0xb11

0xb42: Stack[-4] = Stack[-2]
0xb43: Pop(2)
0xb44: Return(); Pop(0)

0xb45: PushEmpty()
0xb46: PushEmpty(bool, object)
0xb47: Stack[-1] = Stack[-3]
0xb48: Push(-2, 0); TaskCall(7)
0xb49: Call2 0x6ea

0xb4a: Pop(-2, 0); TaskReturn
0xb4b: Pop(1)
0xb4c: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb4d: PushEmpty(object)
0xb4e: Stack[-1] = Stack[-2]
0xb4f: Push(-1, 3); TaskCall(6)
0xb50: Call2 0x613

0xb51: Pop(-1, 3); TaskReturn
0xb52: Pop(1)
0xb53: @ ResetAAS()
0xb54: Pop(0)
0xb55: Return(); Pop(0)

0xb56: PushEmpty()
0xb57: PushEmpty(bool, object)
0xb58: Stack[-1] = Stack[-3]
0xb59: Call2 0xb11

0xb5a: Stack[-4] = Stack[-2]
0xb5b: Pop(2)
0xb5c: Return(); Pop(0)

0xb5d: PushEmpty()
0xb5e: PushEmpty(bool, object)
0xb5f: Stack[-1] = Stack[-3]
0xb60: Push(-2, 0); TaskCall(7)
0xb61: Call2 0x6ea

0xb62: Pop(-2, 0); TaskReturn
0xb63: Pop(1)
0xb64: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb65: PushEmpty(object)
0xb66: Stack[-1] = Stack[-2]
0xb67: Push(-1, 3); TaskCall(6)
0xb68: Call2 0x613

0xb69: Pop(-1, 3); TaskReturn
0xb6a: Pop(1)
0xb6b: @ ResetAAS()
0xb6c: Pop(0)
0xb6d: Return(); Pop(0)

0xb6e: PushEmpty(bool, bool)
0xb6f: Pop(0); Push((bool) Stack[-3] == 0)
0xb70: IF (Stack[-1] == 0) GOTO 0xb72; Pop(1)

0xb71: Return(); Pop(2)

0xb72: Push(GlobalVars[1])
0xb73: @@ in(Stack[-2], Stack[-4])
0xb74: Pop(1)
0xb75: Pop(0); Push((bool) Stack[-1] == 0)
0xb76: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb77: Push(GlobalVars[1])
0xb78: @@ add(Stack[-4])
0xb79: Pop(1)
0xb7a: Return(); Pop(2)

0xb7b: PushEmpty()
0xb7c: PushEmpty(object)
0xb7d: Stack[-1] = Stack[-2]
0xb7e: Call2 0xb6e

0xb7f: Pop(1)
0xb80: PushEmpty(bool, object)
0xb81: Stack[-1] = Stack[-3]
0xb82: Call2 0x89f

0xb83: Pop(1)
0xb84: Pop(1); Push((bool) Stack[-1] == 0)
0xb85: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb86: Return(); Pop(0)

0xb87: PushEmpty(bool, object)
0xb88: Stack[-1] = Stack[-3]
0xb89: Push(-2, 0); TaskCall(7)
0xb8a: Call2 0x6ea

0xb8b: Pop(-2, 0); TaskReturn
0xb8c: Pop(1)
0xb8d: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb8e: PushEmpty(object)
0xb8f: Stack[-1] = Stack[-2]
0xb90: Push(-1, 3); TaskCall(6)
0xb91: Call2 0x613

0xb92: Pop(-1, 3); TaskReturn
0xb93: Pop(1)
0xb94: @ ResetAAS()
0xb95: Pop(0)
0xb96: Return(); Pop(0)

0xb97: PushEmpty(bool, float, bool, float)
0xb98: PushEmpty(bool, object)
0xb99: Stack[-1] = Stack[-7]
0xb9a: Call2 0xaf8

0xb9b: Pop(1)
0xb9c: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xb9d: @ CanSee(Stack[-2], Stack[-6])
0xb9e: Pop(0)
0xb9f: PushEmpty(float, object)
0xba0: Stack[-1] = Stack[-8]
0xba1: Call2 0x7df

0xba2: Stack[-3] = Stack[-2]
0xba3: Pop(2)
0xba4: PushEmpty(bool)
0xba5: Stack[-1] = (bool) 0
0xba6: Push((float)1000000.0)
0xba7: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xba8: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xba9: PushEmpty(bool)
0xbaa: Stack[-1] = (bool) 1
0xbab: Push(Stack[-4])
0xbac: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbad: Push((float)490000.0)
0xbae: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0xbaf: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbb0: Stack[-1] = (bool) 0
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xbb2: Stack[-1] = (bool) 1
0xbb3: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xbb4: Stack[-7] = (bool) 1
0xbb5: Return(); Pop(4)

0xbb6: Stack[-7] = (bool) 0
0xbb7: Return(); Pop(4)

0xbb8: PushEmpty()
0xbb9: PushEmpty(bool, object)
0xbba: Stack[-1] = Stack[-3]
0xbbb: Call2 0x7e7

0xbbc: Pop(1)
0xbbd: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbbe: PushEmpty(bool, object, float)
0xbbf: Stack[-2] = Stack[-4]
0xbc0: Stack[-1] = (float) 0.05
0xbc1: Call2 0xa6c

0xbc2: Pop(3)
0xbc3: PushEmpty(object)
0xbc4: Stack[-1] = Stack[-2]
0xbc5: Push(-1, 0); TaskCall(8)
0xbc6: Call2 0x720

0xbc7: Pop(-1, 0); TaskReturn
0xbc8: Pop(1)
0xbc9: Return(); Pop(0)

0xbca: PushEmpty()
0xbcb: PushEmpty(object, int, float)
0xbcc: Stack[-3] = Stack[-7]
0xbcd: Stack[-2] = Stack[-6]
0xbce: Stack[-1] = Stack[-5]
0xbcf: Call2 0x918

0xbd0: Pop(3)
0xbd1: Return(); Pop(0)

0xbd2: PushEmpty()
0xbd3: PushEmpty(object, int, float, cvector, cvector)
0xbd4: Stack[-5] = Stack[-11]
0xbd5: Stack[-4] = Stack[-10]
0xbd6: Stack[-3] = Stack[-9]
0xbd7: Stack[-2] = Stack[-7]
0xbd8: Stack[-1] = Stack[-6]
0xbd9: Call2 0x95c

0xbda: Pop(5)
0xbdb: Return(); Pop(0)

0xbdc: PushEmpty(float, float)
0xbdd: Push("health")
0xbde: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbdf: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe0: Push("health")
0xbe1: @ GetProperty(Stack[-1], Stack[-2])
0xbe2: Pop(1)
0xbe3: Push((int) 0)
0xbe4: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xbe5: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe6: @ SignalDeath(Stack[-4])
0xbe7: Pop(0)
0xbe8: Return(); Pop(2)

0xbe9: PushEmpty()
0xbea: PushEmpty(object)
0xbeb: Stack[-1] = Stack[-2]
0xbec: Call2 0xbb8

0xbed: Pop(1)
0xbee: Return(); Pop(0)

0xbef: PushEmpty(int, int)
0xbf0: Push("branch")
0xbf1: @ GetVariable(Stack[-1], Stack[-2])
0xbf2: Pop(1)
0xbf3: Stack[-3] = Stack[-1]
0xbf4: Return(); Pop(2)

0xbf5: PushEmpty()
0xbf6: PushEmpty(int)
0xbf7: Call2 0xbef

0xbf8: Pop(0)
0xbf9: Push((int) 1)
0xbfa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbfb: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbfc: @ WorkWithCorpse(Stack[-1])
0xbfd: Pop(0)
0xbfe: GOTO 0xc01

0xbff: @ Barter(Stack[-1])
0xc00: Pop(0)
0xc01: Return(); Pop(0)

0xc02: PushEmpty(int, bool, int, bool)
0xc03: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xc04: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc05: Push("GenerateMoney: iMin > iMax")
0xc06: @ Trace(Stack[-1])
0xc07: Pop(1)
0xc08: Return(); Pop(4)

0xc09: Stack[-2] = (int) 0
0xc0a: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0c: Pop(0); Push(Stack[-5] - Stack[-6]);
0xc0d: @ irand(Stack[-3], Stack[-1])
0xc0e: Pop(1)
0xc0f: GOTO 0xc14

0xc10: Push((int) 0)
0xc11: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc12: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xc13: Return(); Pop(4)

0xc14: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xc15: Push((int) 0)
0xc16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc18: Return(); Pop(4)

0xc19: PushEmpty(int, string)
0xc1a: Stack[-1] = "Money"
0xc1b: Call2 0xc8f

0xc1c: Pop(1)
0xc1d: Push((int) 0)
0xc1e: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xc1f: Pop(2)
0xc20: Return(); Pop(4)

0xc21: PushEmpty(object, int, bool, object, int, bool)
0xc22: @ CreateInvItem(Stack[-3])
0xc23: Pop(0)
0xc24: @@ SetItemName(Stack[-7])
0xc25: Pop(0)
0xc26: Push("Organ")
0xc27: Push((int) 1)
0xc28: @@ SetProperty(Stack[-2], Stack[-1])
0xc29: Pop(2)
0xc2a: @@ GetItemID(Stack[-2])
0xc2b: Pop(0)
0xc2c: Push((int) 0)
0xc2d: Push((int) 1)
0xc2e: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xc2f: Pop(2)
0xc30: Return(); Pop(6)

0xc31: Stack[-3] = 0
0xc32: PushEmpty(int)
0xc33: Call2 0xbef

0xc34: Pop(0)
0xc35: Push((int) 1)
0xc36: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc37: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc38: Return(); Pop(0)

0xc39: PushEmpty(string)
0xc3a: Stack[-1] = "liver"
0xc3b: Call2 0xc21

0xc3c: Pop(1)
0xc3d: PushEmpty(string)
0xc3e: Stack[-1] = "kidney"
0xc3f: Call2 0xc21

0xc40: Pop(1)
0xc41: PushEmpty(string)
0xc42: Stack[-1] = "heart"
0xc43: Call2 0xc21

0xc44: Pop(1)
0xc45: PushEmpty(string)
0xc46: Stack[-1] = "blood"
0xc47: Call2 0xc21

0xc48: Pop(1)
0xc49: Return(); Pop(0)

0xc4a: PushEmpty(int, bool, int, bool)
0xc4b: Push((int) 0)
0xc4c: @ ClearSubContainer(Stack[-1])
0xc4d: Pop(1)
0xc4e: PushEmpty(int, int)
0xc4f: Stack[-2] = (int) 1500
0xc50: Stack[-1] = (int) 3000
0xc51: Call2 0xc02

0xc52: Pop(2)
0xc53: PushEmpty(string, int, int)
0xc54: Stack[-3] = "Knife"
0xc55: Stack[-2] = (int) 1
0xc56: Stack[-1] = (int) 4
0xc57: Call2 0x985

0xc58: Pop(3)
0xc59: PushEmpty(string, int, int)
0xc5a: Stack[-3] = "lockpick"
0xc5b: Stack[-2] = (int) 1
0xc5c: Stack[-1] = (int) 3
0xc5d: Call2 0x985

0xc5e: Pop(3)
0xc5f: PushEmpty(string, int, int, int)
0xc60: Stack[-4] = "rifle_ammo"
0xc61: Stack[-3] = (int) 1
0xc62: Stack[-2] = (int) 3
0xc63: Stack[-1] = (int) 3
0xc64: Call2 0x990

0xc65: Pop(4)
0xc66: PushEmpty(string, int, int, int)
0xc67: Stack[-4] = "samopal_ammo"
0xc68: Stack[-3] = (int) 1
0xc69: Stack[-2] = (int) 3
0xc6a: Stack[-1] = (int) 3
0xc6b: Call2 0x990

0xc6c: Pop(4)
0xc6d: PushEmpty(string, int, int, int)
0xc6e: Stack[-4] = "revolver_ammo"
0xc6f: Stack[-3] = (int) 1
0xc70: Stack[-2] = (int) 3
0xc71: Stack[-1] = (int) 3
0xc72: Call2 0x990

0xc73: Pop(4)
0xc74: PushEmpty(string, int, int)
0xc75: Stack[-3] = "Samopal"
0xc76: Stack[-2] = (int) 1
0xc77: Stack[-1] = (int) 20
0xc78: Call2 0x985

0xc79: Pop(3)
0xc7a: PushEmpty(string, int, int)
0xc7b: Stack[-3] = "Revolver"
0xc7c: Stack[-2] = (int) 1
0xc7d: Stack[-1] = (int) 20
0xc7e: Call2 0x985

0xc7f: Pop(3)
0xc80: PushEmpty(string, int, int)
0xc81: Stack[-3] = "Rifle"
0xc82: Stack[-2] = (int) 1
0xc83: Stack[-1] = (int) 20
0xc84: Call2 0x985

0xc85: Pop(3)
0xc86: PushEmpty(int, string)
0xc87: Stack[-1] = "grabitel_mark"
0xc88: Call2 0xc8f

0xc89: Pop(1)
0xc8a: Push((int) 0)
0xc8b: Push((int) 1)
0xc8c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc8d: Pop(3)
0xc8e: Return(); Pop(4)

0xc8f: PushEmpty(int, int)
0xc90: @ GetInvItemByName(Stack[-1], Stack[-3])
0xc91: Pop(0)
0xc92: Stack[-4] = Stack[-1]
0xc93: Return(); Pop(2)

0xc94: PushEmpty(object)
0xc95: Call2 0xa1f

0xc96: Pop(0)
0xc97: @ RemoveActor(Stack[-1])
0xc98: Pop(1)
0xc99: @ Hold()
0xc9a: Pop(0)
0xc9b: Return(); Pop(0)

