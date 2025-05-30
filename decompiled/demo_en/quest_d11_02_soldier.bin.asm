GlobalVarCount = 1
	G_VAR_0 object 

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
	shoot_begin
	shot
	shoot_end
	attack_off
	attack_on
	hunt
	@Stop hunt
	attack_begin1
	attack
	light-dynamic
	soldier_fire.xml
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	execute
	quest_d11_02
	soldier_attack
	cleanup
	restore
	in
	fire
	bullet
	phys
	player
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
	rifle_ammo
	rusk
	bandage
	tourniquet
	class
	patrol
	sanitar
	soldier
	little_girl
	bomber
	hunter
	grabitel
	disease
	dog
	actor_unload
	soldier_dead

Import:
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
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
	Face (1 args)
	Sleep (2 args)
	KillTimer (1 args)
	StopGroup0 (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	Speak (1 args)
	SetAttackState (1 args)
	Sleep (1 args)
	Trace (1 args)
	StopAnimation (0 args)
	ReportAttack (1 args)
	SendPlayerEnemy (2 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	RotateAsync (2 args)
	GetEyesHeight (1 args)
	AddItem (3 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	PlayGlobalMusic (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (4 args)
	ResetAAS (0 args)
	ReportReputationChange (3 args)

RunOp = 0x339
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x20 Vars = (object)
		EVENT_22 Op = 0x9f Vars = (object, int, float, float)
		EVENT_16 Op = 0xa1 Vars = (object, string)
		EVENT_41 Op = 0xa3 Vars = (object)
	GTASK_1 Vars = (object) Params = 1
		EVENT_41 Op = 0xc5 Vars = (object)
		EVENT_3 Op = 0xce Vars = (object)
		EVENT_4 Op = 0xd7 Vars = (object)
		EVENT_17 Op = 0xe3 Vars = (object)
		EVENT_30 Op = 0xf7 Vars = (object, object, bool)
		EVENT_1 Op = 0x104 Vars = (object)
		EVENT_7 Op = 0x112 Vars = (int)
	GTASK_2 Vars = (object, bool) Params = 1
		EVENT_17 Op = 0x193 Vars = (object)
		EVENT_30 Op = 0x1a7 Vars = (object, object, bool)
		EVENT_41 Op = 0x1bb Vars = (object)
	GTASK_3 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x254 Vars = (object)
		EVENT_1 Op = 0x262 Vars = (object)
		EVENT_17 Op = 0x2f1 Vars = (object)
		EVENT_30 Op = 0x309 Vars = (object, object, bool)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_26 Op = 0x316 Vars = (string)
		EVENT_17 Op = 0x332 Vars = (object)
		EVENT_6 Op = 0x359 Vars = ()
	GTASK_5 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x381 Vars = (object)
		EVENT_17 Op = 0x39f Vars = (object)
		EVENT_30 Op = 0x3b3 Vars = (object, object, bool)
		EVENT_1 Op = 0x3c0 Vars = (object)
	GTASK_6 Vars = (bool) Params = 0
		EVENT_17 Op = 0x460 Vars = (object)
		EVENT_26 Op = 0x467 Vars = (string)

Events:
EVENT_22 Op = 0x7a6 Vars = (object, int, float, float)
EVENT_43 Op = 0x7ae Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7b8 Vars = (object, string)
EVENT_41 Op = 0x7c5 Vars = (object)
EVENT_6 Op = 0x937 Vars = ()

0x0: PushEmpty()
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0x493

0x4: Pop(1)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: PushEmpty()
0x7: Call2 0x775

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x75d

0xb: Pop(0)
0xc: PushEmpty(object)
0xd: Stack[-1] = Stack[-2]
0xe: Call2 0x11

0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: EventDisable(0)
0x13: PushEmpty(object)
0x14: Stack[-1] = Stack[-2]
0x15: Call2 0x2a

0x16: Pop(1)
0x17: Push((int) 50)
0x18: Push((int) 40)
0x19: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: EventEnable(0)
0x1c: @ Hold()
0x1d: Pop(0)
0x1e: GOTO 0x1c

0x1f: Return(); Pop(0)

0x20: PushEmpty(bool, bool)
0x21: @ IsOverrideActive(Stack[-1])
0x22: Pop(0)
0x23: Pop(0); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x720

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2b: Pop(0); Push((bool) Stack[-21] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2d: PushEmpty(string)
0x2e: Stack[-1] = "fdie"
0x2f: Call2 0x85

0x30: Pop(1)
0x31: GOTO 0x84

0x32: @@ GetPosition(Stack[-10])
0x33: Pop(0)
0x34: @ GetPosition(Stack[-9])
0x35: Pop(0)
0x36: @ GetDirection(Stack[-8])
0x37: Pop(0)
0x38: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x39: Push(CvectorIndex(Stack[-7], 0))
0x3a: Push(CvectorIndex(Stack[-9], 0))
0x3b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c: Push(CvectorIndex(Stack[-8], 2))
0x3d: Push(CvectorIndex(Stack[-10], 2))
0x3e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push((int) 0)
0x41: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x43: Stack[-6] = "fdie"
0x44: GOTO 0x46

0x45: Stack[-6] = "bdie"
0x46: @ RemoveRTEnvelope()
0x47: Pop(0)
0x48: @ SetDeathState()
0x49: Pop(0)
0x4a: @ Stop()
0x4b: Pop(0)
0x4c: @ StopAsync()
0x4d: Pop(0)
0x4e: Stack[-5] = Stack[-21]
0x4f: Push("GetScriptProperty")
0x50: Push((int) 2)
0x51: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x52: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x53: Push("Owner")
0x54: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x55: Pop(1)
0x56: Push(Stack[-4])
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: Push("Owner")
0x59: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-5] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-5] = Stack[-21]
0x5e: Push("@GetEyesHeight")
0x5f: Push((int) 1)
0x60: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x61: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x62: @@ GetEyesHeight(Stack[-2])
0x63: Pop(0)
0x64: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x65: Push(CvectorIndex(Stack[-1], 1))
0x66: Stack[-1] = Stack[-3]
0x67: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x68: Push("head")
0x69: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6a: Pop(1)
0x6b: Stack[-3] = (bool) 1
0x6c: GOTO 0x6e

0x6d: Stack[-3] = (bool) 0
0x6e: PushEmpty(string)
0x6f: Stack[-1] = Stack[-7]
0x70: Call2 0x5ee

0x71: Pop(1)
0x72: Push("all")
0x73: @ PlayAnimation(Stack[-1], Stack[-7])
0x74: Pop(1)
0x75: @ WaitForAnimEnd()
0x76: Pop(0)
0x77: Push(Stack[-3])
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: @ StopAsync()
0x7a: Pop(0)
0x7b: Push("head")
0x7c: @ UnlookAsync(Stack[-1])
0x7d: Pop(1)
0x7e: Push("all")
0x7f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x80: Pop(1)
0x81: @ RemoveEnvelope()
0x82: Pop(0)
0x83: Stack[-5] = 0
0x84: Return(); Pop(20)

0x85: PushEmpty()
0x86: @ RemoveRTEnvelope()
0x87: Pop(0)
0x88: @ SetDeathState()
0x89: Pop(0)
0x8a: @ Stop()
0x8b: Pop(0)
0x8c: @ StopAsync()
0x8d: Pop(0)
0x8e: @ StopSecondaryAnimation()
0x8f: Pop(0)
0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[-2]
0x92: Call2 0x5ee

0x93: Pop(1)
0x94: Push("all")
0x95: @ PlayAnimation(Stack[-1], Stack[-2])
0x96: Pop(1)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push("all")
0x9a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: @ RemoveEnvelope()
0x9d: Pop(0)
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: Return(); Pop(0)

0xa5: PushEmpty(bool, bool)
0xa6: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xa7: @ Face(Stack[-3])
0xa8: Pop(0)
0xa9: Push((float)0.5)
0xaa: @ Sleep(Stack[-1], Stack[-2])
0xab: Pop(1)
0xac: PushEmpty(bool)
0xad: Stack[-1] = (bool) 1
0xae: Pop(0); Push((bool) Stack[-2] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb0: PushEmpty(bool, object)
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x52c

0xb3: Pop(1)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xba

0xb9: GOTO 0xa9

0xba: @ StopAsync()
0xbb: Pop(0)
0xbc: Return(); Pop(2)

0xbd: @ StopAsync()
0xbe: Pop(0)
0xbf: Push((int) 100)
0xc0: @ KillTimer(Stack[-1])
0xc1: Pop(1)
0xc2: @ StopGroup0()
0xc3: Pop(0)
0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty()
0xc7: Call2 0xbd

0xc8: Pop(0)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-2]
0xcb: Call2 0x7c5

0xcc: Pop(1)
0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 100)
0xd2: @ KillTimer(Stack[-1])
0xd3: Pop(1)
0xd4: @ Face(Stack[-0])
0xd5: Pop(0)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xd9: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xda: Push((int) 100)
0xdb: Push((float)3.0)
0xdc: @ SetTimer(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: PushEmpty(object)
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x5c2

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[-3]
0xe6: Call2 0x52c

0xe7: Pop(1)
0xe8: Pop(1); Push((bool) Stack[-1] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: PushEmpty(object)
0xeb: Stack[-1] = Stack[-2]
0xec: Call2 0x871

0xed: Pop(1)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Call2 0xbd

0xf1: Pop(0)
0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[-2]
0xf4: Call2 0x889

0xf5: Pop(1)
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: PushEmpty(bool, object, object, bool)
0xf9: Stack[-3] = Stack[-7]
0xfa: Stack[-2] = Stack[-6]
0xfb: Stack[-1] = Stack[-5]
0xfc: Call2 0x91d

0xfd: Pop(3)
0xfe: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xff: PushEmpty(object)
0x100: Stack[-1] = Stack[-4]
0x101: Call2 0xe3

0x102: Pop(1)
0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[-3]
0x107: Call2 0x901

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: PushEmpty()
0x10b: Call2 0xbd

0x10c: Pop(0)
0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[-2]
0x10f: Call2 0x917

0x110: Pop(1)
0x111: Return(); Pop(0)

0x112: PushEmpty()
0x113: Push((int) 100)
0x114: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Return(); Pop(0)

0x117: Push((int) 100)
0x118: @ KillTimer(Stack[-1])
0x119: Pop(1)
0x11a: @ StopGroup0()
0x11b: Pop(0)
0x11c: Return(); Pop(0)

0x11d: PushEmpty(bool, int, int, bool, int, int)
0x11e: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x11f: PushEmpty(object)
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call2 0x706

0x122: Pop(1)
0x123: @ CanSee(Stack[-1], Stack[-0])
0x124: Pop(0)
0x125: Push( Stack[1 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x8a9

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(object, bool)
0x12d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = (bool) 1
0x12f: Call2 0x866

0x130: Pop(2)
0x131: Return(); Pop(6)

0x132: @ Face(Stack[-0])
0x133: Pop(0)
0x134: PushEmpty()
0x135: Call2 0x70f

0x136: Pop(0)
0x137: Push("all")
0x138: Push("shoot_begin")
0x139: @ PlayAnimation(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: @ WaitForAnimEnd(Stack[-3])
0x13c: Pop(0)
0x13d: Pop(0); Push((bool) Stack[-3] == 0)
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: @ StopAsync()
0x140: Pop(0)
0x141: Return(); Pop(6)

0x142: Push("shot")
0x143: @ Speak(Stack[-1])
0x144: Pop(1)
0x145: Push("all")
0x146: Push("shoot_end")
0x147: @ PlayAnimation(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: @ WaitForAnimEnd(Stack[-3])
0x14a: Pop(0)
0x14b: Pop(0); Push((bool) Stack[-3] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14d: @ StopAsync()
0x14e: Pop(0)
0x14f: Return(); Pop(6)

0x150: Push("all")
0x151: Push("shoot_end")
0x152: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: Stack[-2] = (int) 0
0x155: Stack[-1] = (int) 0
0x156: Push((int) 20)
0x157: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x159: PushEmpty(object)
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0x706

0x15c: Pop(1)
0x15d: Push((float)0.5)
0x15e: @ Sleep(Stack[-1], Stack[-4])
0x15f: Pop(1)
0x160: Pop(0); Push((bool) Stack[-3] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: Return(); Pop(6)

0x163: @ CanSee(Stack[-1], Stack[-0])
0x164: Pop(0)
0x165: Push( Stack[1 + Tasks[-1].StackPointer] )
0x166: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x167: Stack[-2] = (int) 0
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x8a9

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16d: PushEmpty()
0x16e: Call2 0x1b4

0x16f: Pop(0)
0x170: PushEmpty(object, bool)
0x171: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x172: Stack[-1] = (bool) 0
0x173: Call2 0x866

0x174: Pop(2)
0x175: Return(); Pop(6)

0x176: @ Face(Stack[-0])
0x177: Pop(0)
0x178: GOTO 0x187

0x179: @ StopAsync()
0x17a: Pop(0)
0x17b: Push((int) 1)
0x17c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x17d: Push((int) 4)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x180: Push("all")
0x181: Push("attack_off")
0x182: @ PlayAnimation(Stack[-2], Stack[-1])
0x183: Pop(2)
0x184: @ WaitForAnimEnd()
0x185: Pop(0)
0x186: Return(); Pop(6)

0x187: Push((int) 1)
0x188: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x189: GOTO 0x156

0x18a: PushEmpty()
0x18b: Call2 0x1b4

0x18c: Pop(0)
0x18d: PushEmpty(object, bool)
0x18e: Stack[-2] = Stack[-9]
0x18f: Stack[-1] = (bool) 0
0x190: Call2 0x866

0x191: Pop(2)
0x192: Return(); Pop(6)

0x193: PushEmpty()
0x194: PushEmpty(bool, object)
0x195: Stack[-1] = Stack[-3]
0x196: Call2 0x52c

0x197: Pop(1)
0x198: Pop(1); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19a: PushEmpty(object)
0x19b: Stack[-1] = Stack[-2]
0x19c: Call2 0x871

0x19d: Pop(1)
0x19e: Return(); Pop(0)

0x19f: PushEmpty()
0x1a0: Call2 0x1b4

0x1a1: Pop(0)
0x1a2: PushEmpty(object)
0x1a3: Stack[-1] = Stack[-2]
0x1a4: Call2 0x889

0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty()
0x1a8: PushEmpty(bool, object, object, bool)
0x1a9: Stack[-3] = Stack[-7]
0x1aa: Stack[-2] = Stack[-6]
0x1ab: Stack[-1] = Stack[-5]
0x1ac: Call2 0x91d

0x1ad: Pop(3)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1af: PushEmpty(object)
0x1b0: Stack[-1] = Stack[-4]
0x1b1: Call2 0x193

0x1b2: Pop(1)
0x1b3: Return(); Pop(0)

0x1b4: @ StopAsync()
0x1b5: Pop(0)
0x1b6: @ StopGroup0()
0x1b7: Pop(0)
0x1b8: @ Stop()
0x1b9: Pop(0)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: PushEmpty()
0x1bd: Call2 0x1b4

0x1be: Pop(0)
0x1bf: PushEmpty(object)
0x1c0: Stack[-1] = Stack[-2]
0x1c1: Call2 0x7c5

0x1c2: Pop(1)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(bool, bool, bool, bool)
0x1c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x1c6: PushEmpty(object)
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x706

0x1c9: Pop(1)
0x1ca: PushEmpty()
0x1cb: Call2 0x70f

0x1cc: Pop(0)
0x1cd: @ Face(Stack[-0])
0x1ce: Pop(0)
0x1cf: Push(Stack[-5])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d1: Push("all")
0x1d2: Push("attack_on")
0x1d3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d4: Pop(2)
0x1d5: @ WaitForAnimEnd()
0x1d6: Pop(0)
0x1d7: Push("all")
0x1d8: Push("attack_on")
0x1d9: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: Push((bool) 1)
0x1dc: @ SetAttackState(Stack[-1])
0x1dd: Pop(1)
0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x52c

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x1e3: @ CanSee(Stack[-1], Stack[-0])
0x1e4: Pop(0)
0x1e5: Push(Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e7: PushEmpty(object)
0x1e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e9: Call2 0x706

0x1ea: Pop(1)
0x1eb: PushEmpty()
0x1ec: Call2 0x278

0x1ed: Pop(0)
0x1ee: GOTO 0x23e

0x1ef: PushEmpty(object)
0x1f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f1: Call2 0x5c2

0x1f2: Pop(1)
0x1f3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1f4: Push("all")
0x1f5: Push("hunt")
0x1f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: @ WaitForAnimEnd(Stack[-2])
0x1f9: Pop(0)
0x1fa: Pop(0); Push((bool) Stack[-2] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fc: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x1fd: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fe: PushEmpty()
0x1ff: Call2 0x273

0x200: Pop(0)
0x201: Push("all")
0x202: Push("attack_on")
0x203: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x204: Pop(2)
0x205: GOTO 0x1de

0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0x52c

0x209: Pop(1)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: GOTO 0x248

0x20d: @ CanSee(Stack[-1], Stack[-0])
0x20e: Pop(0)
0x20f: Push(Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x211: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x212: @ Face(Stack[-0])
0x213: Pop(0)
0x214: PushEmpty()
0x215: Call2 0x278

0x216: Pop(0)
0x217: GOTO 0x23e

0x218: Push("all")
0x219: Push("attack_on")
0x21a: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: Push((int) 3)
0x21d: @ Sleep(Stack[-1], Stack[-3])
0x21e: Pop(1)
0x21f: Pop(0); Push((bool) Stack[-2] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x221: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x222: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x223: PushEmpty()
0x224: Call2 0x273

0x225: Pop(0)
0x226: Push("all")
0x227: Push("attack_on")
0x228: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: GOTO 0x1de

0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22d: Call2 0x52c

0x22e: Pop(1)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x248

0x232: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x233: @ CanSee(Stack[-1], Stack[-0])
0x234: Pop(0)
0x235: Push(Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x237: @ Face(Stack[-0])
0x238: Pop(0)
0x239: PushEmpty()
0x23a: Call2 0x278

0x23b: Pop(0)
0x23c: GOTO 0x23e

0x23d: GOTO 0x248

0x23e: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x23f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x240: PushEmpty()
0x241: Call2 0x273

0x242: Pop(0)
0x243: GOTO 0x247

0x244: Push((int) 2)
0x245: @ Sleep(Stack[-1])
0x246: Pop(1)
0x247: GOTO 0x1de

0x248: Push((bool) 0)
0x249: @ SetAttackState(Stack[-1])
0x24a: Pop(1)
0x24b: @ StopAsync()
0x24c: Pop(0)
0x24d: Push("all")
0x24e: Push("attack_off")
0x24f: @ PlayAnimation(Stack[-2], Stack[-1])
0x250: Pop(2)
0x251: @ WaitForAnimEnd()
0x252: Pop(0)
0x253: Return(); Pop(4)

0x254: PushEmpty()
0x255: PushEmpty(bool)
0x256: Stack[-1] = (bool) 0
0x257: Push( Stack[2 + Tasks[-1].StackPointer] )
0x258: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x259: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: Stack[-1] = (bool) 1
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: PushEmpty(object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call2 0x5c2

0x260: Pop(1)
0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: PushEmpty(bool)
0x264: Stack[-1] = (bool) 0
0x265: Push( Stack[2 + Tasks[-1].StackPointer] )
0x266: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x267: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26b: Push("@Stop hunt")
0x26c: @ Trace(Stack[-1])
0x26d: Pop(1)
0x26e: @ StopAnimation()
0x26f: Pop(0)
0x270: @ StopGroup0()
0x271: Pop(0)
0x272: Return(); Pop(0)

0x273: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x274: Stack[1 + Tasks[-1].StackPointer] = 0
0x275: @ Face(Stack[-0])
0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: PushEmpty(cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object, cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object)
0x279: PushEmpty(object)
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call2 0x706

0x27c: Pop(1)
0x27d: @ ReportAttack(Stack[-0])
0x27e: Pop(0)
0x27f: PushEmpty(bool, object)
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call2 0x493

0x282: Pop(1)
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: PushEmpty(object)
0x285: Call2 0x66e

0x286: Pop(0)
0x287: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x288: Pop(1)
0x289: @ GetDirection(Stack[-14])
0x28a: Pop(0)
0x28b: PushEmpty(cvector, object)
0x28c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28d: Call2 0x47d

0x28e: Stack[-15] = Stack[-2]
0x28f: Pop(2)
0x290: PushEmpty(float, cvector, cvector)
0x291: Stack[-2] = Stack[-17]
0x292: Stack[-1] = Stack[-16]
0x293: Call2 0x6b2

0x294: Pop(2)
0x295: Push((float)0.99939)
0x296: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Return(); Pop(28)

0x299: PushEmpty()
0x29a: Call2 0x70f

0x29b: Pop(0)
0x29c: Push("all")
0x29d: Push("attack_begin1")
0x29e: @ PlayAnimation(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: Push("attack")
0x2a1: @ GetGeometryLocator(Stack[-1], Stack[-13], Stack[-12], Stack[-11])
0x2a2: Pop(1)
0x2a3: Push(Stack[-12])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a5: @ GetScene(Stack[-8])
0x2a6: Pop(0)
0x2a7: Push("light-dynamic")
0x2a8: Push("soldier_fire.xml")
0x2a9: @ AddActorByType(Stack[-11], Stack[-2], Stack[-10], Stack[-13], Stack[-12], Stack[-1])
0x2aa: Pop(2)
0x2ab: Stack[-8] = 0
0x2ac: Stack[-9] = 0
0x2ad: GOTO 0x2b0

0x2ae: @ WaitForAnimEnd()
0x2af: Pop(0)
0x2b0: Push("shot")
0x2b1: @ Speak(Stack[-1])
0x2b2: Pop(1)
0x2b3: @ GetDirection(Stack[-14])
0x2b4: Pop(0)
0x2b5: PushEmpty(cvector, object)
0x2b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b7: Call2 0x47d

0x2b8: Stack[-15] = Stack[-2]
0x2b9: Pop(2)
0x2ba: Push(CvectorIndex(Stack[-13], 1))
0x2bb: PushEmpty(float, object)
0x2bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bd: Call2 0x5cd

0x2be: Pop(1)
0x2bf: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2c0: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x2c1: Push((float)0.03491)
0x2c2: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x2c3: Pop(1)
0x2c4: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x2c5: Pop(0)
0x2c6: Pop(0); Push(( Stack[-6] != 0 )
0x2c7: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2c8: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2ca: PushEmpty(float, object, float, int)
0x2cb: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x2cc: Stack[-2] = (float) 1.5
0x2cd: Stack[-1] = (int) 1
0x2ce: Call2 0x4ba

0x2cf: Stack[-7] = Stack[-4]
0x2d0: Pop(4)
0x2d1: Push((int) 2)
0x2d2: Push((float)1.5)
0x2d3: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x2d4: Pop(2)
0x2d5: GOTO 0x2e5

0x2d6: Push((int) -1)
0x2d7: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d9: @ GetScene(Stack[-2])
0x2da: Pop(0)
0x2db: Push("scripted")
0x2dc: Push(CVector(0.0, 0.0, 1.0))
0x2dd: Push("richochet.xml")
0x2de: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Push("Material")
0x2e1: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x2e2: Pop(1)
0x2e3: Stack[-1] = 0
0x2e4: Stack[-2] = 0
0x2e5: Push("all")
0x2e6: Push("attack_end1")
0x2e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: @ WaitForAnimEnd()
0x2ea: Pop(0)
0x2eb: Push("all")
0x2ec: Push("attack_on")
0x2ed: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: Return(); Pop(28)

0x2f0: Stack[-6] = 0
0x2f1: PushEmpty()
0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-1] = Stack[-3]
0x2f4: Call2 0x52c

0x2f5: Pop(1)
0x2f6: Pop(1); Push((bool) Stack[-1] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Return(); Pop(0)

0x2f9: PushEmpty(object)
0x2fa: Stack[-1] = Stack[-2]
0x2fb: Call2 0x871

0x2fc: Pop(1)
0x2fd: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[1 + Tasks[-1].StackPointer] = 0
0x300: GOTO 0x308

0x301: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x302: Push( Stack[2 + Tasks[-1].StackPointer] )
0x303: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x304: @ StopAnimation()
0x305: Pop(0)
0x306: @ StopGroup0()
0x307: Pop(0)
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: PushEmpty(bool, object, object, bool)
0x30b: Stack[-3] = Stack[-7]
0x30c: Stack[-2] = Stack[-6]
0x30d: Stack[-1] = Stack[-5]
0x30e: Call2 0x91d

0x30f: Pop(3)
0x310: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x311: PushEmpty(object)
0x312: Stack[-1] = Stack[-4]
0x313: Call2 0x2f1

0x314: Pop(1)
0x315: Return(); Pop(0)

0x316: PushEmpty()
0x317: Push("attack")
0x318: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31a: PushEmpty(object)
0x31b: PushEmpty(object)
0x31c: Call2 0x48c

0x31d: Stack[-2] = Stack[-1]
0x31e: Pop(1)
0x31f: Push(-1, 2); TaskCall(5)
0x320: Call2 0x36b

0x321: Pop(-1, 2); TaskReturn
0x322: Pop(1)
0x323: GOTO 0x331

0x324: Push("execute")
0x325: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x327: PushEmpty()
0x328: Push(-0, 1); TaskCall(6)
0x329: Call2 0x428

0x32a: Pop(-0, 1); TaskReturn
0x32b: Pop(0)
0x32c: GOTO 0x331

0x32d: PushEmpty(string)
0x32e: Stack[-1] = Stack[-2]
0x32f: Call2 0x33d

0x330: Pop(1)
0x331: Return(); Pop(0)

0x332: PushEmpty()
0x333: PushEmpty(bool, string, string)
0x334: Stack[-2] = "quest_d11_02"
0x335: Stack[-1] = "soldier_attack"
0x336: Call2 0x6fa

0x337: Pop(3)
0x338: Return(); Pop(0)

0x339: @ Hold()
0x33a: Pop(0)
0x33b: GOTO 0x339

0x33c: Return(); Pop(0)

0x33d: PushEmpty(bool, bool)
0x33e: Push("cleanup")
0x33f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x341: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x342: @ IsLoaded(Stack[-1])
0x343: Pop(0)
0x344: PushEmpty(bool)
0x345: Stack[-1] = (bool) 0
0x346: Pop(0); Push((bool) Stack[-2] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x348: PushEmpty(bool)
0x349: Call2 0x369

0x34a: Pop(0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: Stack[-1] = (bool) 1
0x34d: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34e: PushEmpty(object)
0x34f: Call2 0x66e

0x350: Pop(0)
0x351: @ RemoveActor(Stack[-1])
0x352: Pop(1)
0x353: GOTO 0x358

0x354: Push("restore")
0x355: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x358: Return(); Pop(2)

0x359: PushEmpty(bool)
0x35a: Stack[-1] = (bool) 0
0x35b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: PushEmpty(bool)
0x35e: Call2 0x369

0x35f: Pop(0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = (bool) 1
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: PushEmpty(object)
0x364: Call2 0x66e

0x365: Pop(0)
0x366: @ RemoveActor(Stack[-1])
0x367: Pop(1)
0x368: Return(); Pop(0)

0x369: Stack[-1] = (bool) 1
0x36a: Return(); Pop(0)

0x36b: PushEmpty()
0x36c: PushEmpty()
0x36d: Call2 0x85f

0x36e: Pop(0)
0x36f: PushEmpty(object)
0x370: Stack[-1] = Stack[-2]
0x371: Call2 0x39f

0x372: Pop(1)
0x373: PushEmpty()
0x374: Call2 0x378

0x375: Pop(0)
0x376: GOTO 0x373

0x377: Return(); Pop(0)

0x378: PushEmpty()
0x379: Call2 0x85f

0x37a: Pop(0)
0x37b: PushEmpty()
0x37c: Call2 0x3ce

0x37d: Pop(0)
0x37e: GOTO 0x37b

0x37f: Return(); Pop(0)

0x380: Return(); Pop(0)

0x381: PushEmpty(bool, bool)
0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[-5]
0x384: Call2 0x52c

0x385: Pop(1)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Return(); Pop(2)

0x389: PushEmpty(bool, object)
0x38a: Stack[-1] = Stack[-5]
0x38b: Call2 0x8b1

0x38c: Pop(1)
0x38d: Pop(1); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38f: Push(GlobalVars[0])
0x390: @@ in(Stack[-2], Stack[-4])
0x391: Pop(1)
0x392: Pop(0); Push((bool) Stack[-1] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Return(); Pop(2)

0x395: PushEmpty()
0x396: Call2 0x422

0x397: Pop(0)
0x398: PushEmpty(object)
0x399: Stack[-1] = Stack[-4]
0x39a: Push(-1, 1); TaskCall(1)
0x39b: Call2 0xa5

0x39c: Pop(-1, 1); TaskReturn
0x39d: Pop(1)
0x39e: Return(); Pop(2)

0x39f: PushEmpty()
0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[-3]
0x3a2: Call2 0x52c

0x3a3: Pop(1)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a6: PushEmpty(object)
0x3a7: Stack[-1] = Stack[-2]
0x3a8: Call2 0x871

0x3a9: Pop(1)
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: Call2 0x422

0x3ad: Pop(0)
0x3ae: PushEmpty(object)
0x3af: Stack[-1] = Stack[-2]
0x3b0: Call2 0x889

0x3b1: Pop(1)
0x3b2: Return(); Pop(0)

0x3b3: PushEmpty()
0x3b4: PushEmpty(bool, object, object, bool)
0x3b5: Stack[-3] = Stack[-7]
0x3b6: Stack[-2] = Stack[-6]
0x3b7: Stack[-1] = Stack[-5]
0x3b8: Call2 0x91d

0x3b9: Pop(3)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bb: PushEmpty(object)
0x3bc: Stack[-1] = Stack[-4]
0x3bd: Call2 0x39f

0x3be: Pop(1)
0x3bf: Return(); Pop(0)

0x3c0: PushEmpty()
0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-1] = Stack[-3]
0x3c3: Call2 0x901

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c6: PushEmpty()
0x3c7: Call2 0x422

0x3c8: Pop(0)
0x3c9: PushEmpty(object)
0x3ca: Stack[-1] = Stack[-2]
0x3cb: Call2 0x944

0x3cc: Pop(1)
0x3cd: Return(); Pop(0)

0x3ce: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x3cf: @ GetPFPosition(Stack[-1])
0x3d0: Pop(0)
0x3d1: @ GetDirection(Stack[-0])
0x3d2: Pop(0)
0x3d3: PushEmpty()
0x3d4: Call2 0x427

0x3d5: Pop(0)
0x3d6: Push((int) 10)
0x3d7: @ irand(Stack[-5], Stack[-1])
0x3d8: Pop(1)
0x3d9: Push((int) 5)
0x3da: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3db: @ Sleep(Stack[-1], Stack[-4])
0x3dc: Pop(1)
0x3dd: Push(Stack[-3])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3df: PushEmpty()
0x3e0: Call2 0x380

0x3e1: Pop(0)
0x3e2: GOTO 0x420

0x3e3: PushEmpty()
0x3e4: Call2 0x427

0x3e5: Pop(0)
0x3e6: @ GetPFPosition(Stack[-2])
0x3e7: Pop(0)
0x3e8: PushEmpty(float, cvector, cvector)
0x3e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ea: Stack[-1] = Stack[-5]
0x3eb: Call2 0x67e

0x3ec: Pop(2)
0x3ed: Push((int) 40000)
0x3ee: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3f0: @ FindPathTo(Stack[-1], Stack[-1])
0x3f1: Pop(0)
0x3f2: Pop(0); Push(( Stack[-1] != 0 )
0x3f3: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f4: @ RotatePath(Stack[-1], Stack[-3])
0x3f5: Pop(0)
0x3f6: Pop(0); Push((bool) Stack[-3] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: GOTO 0x41f

0x3f9: Push((bool) 0)
0x3fa: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x3fb: Pop(1)
0x3fc: Pop(0); Push((bool) Stack[-3] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: GOTO 0x41f

0x3ff: Push(CvectorIndex(Stack[-0], 0))
0x400: Push(CvectorIndex(Stack[-0], 2))
0x401: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x402: Pop(2)
0x403: Pop(0); Push((bool) Stack[-3] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x41f

0x406: @ WaitForAnimEnd(Stack[-3])
0x407: Pop(0)
0x408: Pop(0); Push((bool) Stack[-3] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: GOTO 0x41f

0x40b: GOTO 0x420

0x40c: GOTO 0x410

0x40d: Push((int) 1)
0x40e: @ Sleep(Stack[-1])
0x40f: Pop(1)
0x410: Stack[-1] = 0
0x411: GOTO 0x41f

0x412: Push(CvectorIndex(Stack[-0], 0))
0x413: Push(CvectorIndex(Stack[-0], 2))
0x414: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x415: Pop(2)
0x416: Pop(0); Push((bool) Stack[-3] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x418: GOTO 0x41f

0x419: @ WaitForAnimEnd(Stack[-3])
0x41a: Pop(0)
0x41b: Pop(0); Push((bool) Stack[-3] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: GOTO 0x41f

0x41e: GOTO 0x420

0x41f: GOTO 0x3e3

0x420: GOTO 0x3d3

0x421: Return(); Pop(8)

0x422: @ StopGroup0()
0x423: Pop(0)
0x424: @ Stop()
0x425: Pop(0)
0x426: Return(); Pop(0)

0x427: Return(); Pop(0)

0x428: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x429: Push("all")
0x42a: Push("attack_on")
0x42b: @ PlayAnimation(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: @ WaitForAnimEnd()
0x42e: Pop(0)
0x42f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x430: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x431: Push("all")
0x432: Push("attack_on")
0x433: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: Push((int) 20)
0x436: @ Sleep(Stack[-1])
0x437: Pop(1)
0x438: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x43a: Push("all")
0x43b: Push("attack_begin1")
0x43c: @ PlayAnimation(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: @ WaitForAnimEnd()
0x43f: Pop(0)
0x440: PushEmpty(bool, string, string)
0x441: Stack[-2] = "quest_d11_02"
0x442: Stack[-1] = "execute"
0x443: Call2 0x6fa

0x444: Pop(3)
0x445: Push("shot")
0x446: @ Speak(Stack[-1])
0x447: Pop(1)
0x448: Push("all")
0x449: Push("attack_end1")
0x44a: @ PlayAnimation(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: @ WaitForAnimEnd()
0x44d: Pop(0)
0x44e: Push("all")
0x44f: Push("attack_off")
0x450: @ PlayAnimation(Stack[-2], Stack[-1])
0x451: Pop(2)
0x452: @ WaitForAnimEnd()
0x453: Pop(0)
0x454: Push( Stack[0 + Tasks[-1].StackPointer] )
0x455: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x456: PushEmpty(object)
0x457: PushEmpty(object)
0x458: Call2 0x48c

0x459: Stack[-2] = Stack[-1]
0x45a: Pop(1)
0x45b: Push(-1, 2); TaskCall(5)
0x45c: Call2 0x36b

0x45d: Pop(-1, 2); TaskReturn
0x45e: Pop(1)
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: PushEmpty(bool, string, string)
0x462: Stack[-2] = "quest_d11_02"
0x463: Stack[-1] = "soldier_attack"
0x464: Call2 0x6fa

0x465: Pop(3)
0x466: Return(); Pop(0)

0x467: PushEmpty()
0x468: Push("attack")
0x469: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46b: @ StopGroup0()
0x46c: Pop(0)
0x46d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x46e: Return(); Pop(0)

0x46f: PushEmpty()
0x470: Push((int) 2)
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x473: Stack[-2] = "fire"
0x474: Return(); Pop(0)

0x475: GOTO 0x47b

0x476: Push((int) 1)
0x477: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-2] = "bullet"
0x47a: Return(); Pop(0)

0x47b: Stack[-2] = "phys"
0x47c: Return(); Pop(0)

0x47d: PushEmpty(cvector, cvector, cvector, cvector)
0x47e: @ GetPosition(Stack[-2])
0x47f: Pop(0)
0x480: @@ GetPosition(Stack[-1])
0x481: Pop(0)
0x482: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x483: Return(); Pop(4)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x485: @ GetPosition(Stack[-3])
0x486: Pop(0)
0x487: @@ GetPosition(Stack[-2])
0x488: Pop(0)
0x489: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x48a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x48b: Return(); Pop(6)

0x48c: PushEmpty(object, object)
0x48d: Push("player")
0x48e: @ FindActor(Stack[-2], Stack[-1])
0x48f: Pop(1)
0x490: Stack[-3] = Stack[-1]
0x491: Return(); Pop(2)

0x492: Stack[-1] = 0
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
0x4b4: Call2 0x689

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
0x4d3: Call2 0x46f

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
0x4e6: Call2 0x682

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
0x4f4: Call2 0x689

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
0x4ff: Call2 0x6e6

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
0x584: Call2 0x47d

0x585: Stack[-3] = Stack[-2]
0x586: Pop(2)
0x587: Call2 0x674

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

0x5cd: PushEmpty(float, float, float, float)
0x5ce: @ GetEyesHeight(Stack[-2])
0x5cf: Pop(0)
0x5d0: @@ GetEyesHeight(Stack[-1])
0x5d1: Pop(0)
0x5d2: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5d3: Return(); Pop(4)

0x5d4: PushEmpty(bool, bool)
0x5d5: PushEmpty(bool, int, int)
0x5d6: Stack[-2] = Stack[-7]
0x5d7: Stack[-1] = Stack[-6]
0x5d8: Call2 0x694

0x5d9: Pop(2)
0x5da: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5db: Push((int) 0)
0x5dc: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x5dd: Pop(1)
0x5de: Return(); Pop(2)

0x5df: PushEmpty(int, bool, int, bool)
0x5e0: PushEmpty(bool, int, int)
0x5e1: Stack[-2] = Stack[-10]
0x5e2: Stack[-1] = Stack[-9]
0x5e3: Call2 0x694

0x5e4: Pop(2)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e6: @ irand(Stack[-2], Stack[-5])
0x5e7: Pop(0)
0x5e8: Push((int) 0)
0x5e9: Push((int) 1)
0x5ea: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5eb: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x5ec: Pop(2)
0x5ed: Return(); Pop(4)

0x5ee: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5ef: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5f0: Pop(0)
0x5f1: Pop(0); Push((bool) Stack[-8] == 0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5f3: Stack[-7] = (int) 0
0x5f4: Push((int) 1)
0x5f5: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5f6: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5f7: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5f8: Pop(1)
0x5f9: Pop(0); Push((bool) Stack[-6] == 0)
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fb: GOTO 0x5ff

0x5fc: Push((int) 1)
0x5fd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5fe: GOTO 0x5f4

0x5ff: Pop(0); Push((bool) Stack[-7] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x601: Return(); Pop(16)

0x602: @ irand(Stack[-5], Stack[-7])
0x603: Pop(0)
0x604: Push((int) 1)
0x605: Pop(1); Push(Stack[-6] + Stack[-1]);
0x606: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x607: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x608: Pop(0)
0x609: Push(Stack[-4])
0x60a: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x60b: @ GetEyesHeight(Stack[-3])
0x60c: Pop(0)
0x60d: @ GetDirection(Stack[-2])
0x60e: Pop(0)
0x60f: Push((int) 50)
0x610: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x611: Push(CvectorIndex(Stack[-1], 1))
0x612: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x613: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x614: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x615: Pop(0)
0x616: Return(); Pop(16)

0x617: PushEmpty()
0x618: Stack[-2] = (bool) 1
0x619: PushEmpty(bool)
0x61a: Stack[-1] = (bool) 1
0x61b: PushEmpty(bool)
0x61c: Stack[-1] = (bool) 1
0x61d: PushEmpty(bool)
0x61e: Stack[-1] = (bool) 1
0x61f: PushEmpty(bool)
0x620: Stack[-1] = (bool) 1
0x621: PushEmpty(bool)
0x622: Stack[-1] = (bool) 1
0x623: PushEmpty(bool)
0x624: Stack[-1] = (bool) 1
0x625: PushEmpty(bool)
0x626: Stack[-1] = (bool) 1
0x627: PushEmpty(bool)
0x628: Stack[-1] = (bool) 1
0x629: PushEmpty(bool)
0x62a: Stack[-1] = (bool) 1
0x62b: PushEmpty(bool)
0x62c: Stack[-1] = (bool) 1
0x62d: PushEmpty(bool)
0x62e: Stack[-1] = (bool) 1
0x62f: Push("woman")
0x630: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x632: Push("worker")
0x633: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x635: Stack[-1] = (bool) 0
0x636: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x637: Push("butcher")
0x638: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x63a: Stack[-1] = (bool) 0
0x63b: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63c: Push("wasted_girl")
0x63d: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: Stack[-1] = (bool) 0
0x640: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x641: Push("boy")
0x642: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x644: Stack[-1] = (bool) 0
0x645: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x646: Push("vaxxabitka")
0x647: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x649: Stack[-1] = (bool) 0
0x64a: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64b: Push("unosha")
0x64c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64e: Stack[-1] = (bool) 0
0x64f: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x650: Push("wasted_male")
0x651: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x653: Stack[-1] = (bool) 0
0x654: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x655: Push("alkash")
0x656: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x658: Stack[-1] = (bool) 0
0x659: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65a: Push("dohodyaga")
0x65b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65d: Stack[-1] = (bool) 0
0x65e: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x65f: Push("vaxxabit")
0x660: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x662: Stack[-1] = (bool) 0
0x663: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x664: Push("nudegirl")
0x665: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x667: Stack[-1] = (bool) 0
0x668: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x669: Push("morlok")
0x66a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66c: Stack[-2] = (bool) 0
0x66d: Return(); Pop(0)

0x66e: PushEmpty(object, object)
0x66f: @ self(Stack[-1])
0x670: Pop(0)
0x671: Stack[-3] = Stack[-1]
0x672: Return(); Pop(2)

0x673: Stack[-1] = 0
0x674: PushEmpty(float, float)
0x675: Pop(0); Push(Stack[-3] | Stack[-3]);
0x676: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x677: Push((float)0.0)
0x678: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x67b: Return(); Pop(2)

0x67c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x67d: Return(); Pop(2)

0x67e: PushEmpty(cvector, cvector)
0x67f: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x680: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x681: Return(); Pop(2)

0x682: PushEmpty()
0x683: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-3] = Stack[-2]
0x686: GOTO 0x688

0x687: Stack[-3] = Stack[-1]
0x688: Return(); Pop(0)

0x689: PushEmpty()
0x68a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-4] = Stack[-2]
0x68d: Return(); Pop(0)

0x68e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-4] = Stack[-1]
0x691: Return(); Pop(0)

0x692: Stack[-4] = Stack[-3]
0x693: Return(); Pop(0)

0x694: PushEmpty(int, int)
0x695: @ irand(Stack[-1], Stack[-3])
0x696: Pop(0)
0x697: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x698: Return(); Pop(2)

0x699: PushEmpty(object, object)
0x69a: @ CreateObjectSet(Stack[-1])
0x69b: Pop(0)
0x69c: Stack[-3] = Stack[-1]
0x69d: Return(); Pop(2)

0x69e: Stack[-1] = 0
0x69f: PushEmpty()
0x6a0: Push(CvectorIndex(Stack[-2], 0))
0x6a1: Push(CvectorIndex(Stack[-2], 0))
0x6a2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a3: Push(CvectorIndex(Stack[-3], 2))
0x6a4: Push(CvectorIndex(Stack[-3], 2))
0x6a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty()
0x6a9: Push(CvectorIndex(Stack[-1], 0))
0x6aa: Push(CvectorIndex(Stack[-2], 0))
0x6ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ac: Push(CvectorIndex(Stack[-2], 2))
0x6ad: Push(CvectorIndex(Stack[-3], 2))
0x6ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b0: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x6b1: Return(); Pop(0)

0x6b2: PushEmpty()
0x6b3: PushEmpty(float, cvector, cvector)
0x6b4: Stack[-2] = Stack[-5]
0x6b5: Stack[-1] = Stack[-4]
0x6b6: Call2 0x69f

0x6b7: Pop(2)
0x6b8: PushEmpty(float, cvector)
0x6b9: Stack[-1] = Stack[-5]
0x6ba: Call2 0x6a8

0x6bb: Pop(1)
0x6bc: PushEmpty(float, cvector)
0x6bd: Stack[-1] = Stack[-5]
0x6be: Call2 0x6a8

0x6bf: Pop(1)
0x6c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6c1: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x6c2: Return(); Pop(0)

0x6c3: PushEmpty()
0x6c4: Pop(0); Push((bool) Stack[-2] == 0)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c6: Stack[-3] = (bool) 0
0x6c7: Return(); Pop(0)

0x6c8: Push((int) 0)
0x6c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cb: Push((int) 8)
0x6cc: @ SendWorldWndMessage(Stack[-1])
0x6cd: Pop(1)
0x6ce: GOTO 0x6d8

0x6cf: Push((int) 0)
0x6d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d2: Push((int) 9)
0x6d3: @ SendWorldWndMessage(Stack[-1])
0x6d4: Pop(1)
0x6d5: GOTO 0x6d8

0x6d6: Stack[-3] = (bool) 0
0x6d7: Return(); Pop(0)

0x6d8: PushEmpty(float)
0x6d9: Stack[-1] = Stack[-2]
0x6da: Call2 0x6f0

0x6db: Pop(1)
0x6dc: PushEmpty(bool, object, string, float, float, float)
0x6dd: Stack[-5] = Stack[-8]
0x6de: Stack[-4] = "reputation"
0x6df: Stack[-3] = Stack[-7]
0x6e0: Stack[-2] = (int) 0
0x6e1: Stack[-1] = (int) 1
0x6e2: Call2 0x4a4

0x6e3: Pop(6)
0x6e4: Stack[-3] = (bool) 1
0x6e5: Return(); Pop(0)

0x6e6: PushEmpty(object, object)
0x6e7: @ CreateFloatVector(Stack[-1])
0x6e8: Pop(0)
0x6e9: @@ add(Stack[-3])
0x6ea: Pop(0)
0x6eb: Push((int) 15)
0x6ec: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6ed: Pop(1)
0x6ee: Return(); Pop(2)

0x6ef: Stack[-1] = 0
0x6f0: PushEmpty(object, object)
0x6f1: @ CreateFloatVector(Stack[-1])
0x6f2: Pop(0)
0x6f3: @@ add(Stack[-3])
0x6f4: Pop(0)
0x6f5: Push((int) 16)
0x6f6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6f7: Pop(1)
0x6f8: Return(); Pop(2)

0x6f9: Stack[-1] = 0
0x6fa: PushEmpty(object, object)
0x6fb: @ FindActor(Stack[-1], Stack[-4])
0x6fc: Pop(0)
0x6fd: Pop(0); Push((bool) Stack[-1] == 0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ff: Stack[-5] = (bool) 0
0x700: Return(); Pop(2)

0x701: @ Trigger(Stack[-1], Stack[-3])
0x702: Pop(0)
0x703: Stack[-5] = (bool) 1
0x704: Return(); Pop(2)

0x705: Stack[-1] = 0
0x706: PushEmpty(bool, bool)
0x707: @ IsPlayerActor(Stack[-3], Stack[-1])
0x708: Pop(0)
0x709: Push(Stack[-1])
0x70a: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70b: Push("attack")
0x70c: @ PlayGlobalMusic(Stack[-1])
0x70d: Pop(1)
0x70e: Return(); Pop(2)

0x70f: PushEmpty(object, object)
0x710: @ GetScene(Stack[-1])
0x711: Pop(0)
0x712: Push("battle")
0x713: PushEmpty(object)
0x714: Call2 0x66e

0x715: Pop(0)
0x716: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x717: Pop(2)
0x718: Return(); Pop(2)

0x719: Stack[-1] = 0
0x71a: PushEmpty(int, int)
0x71b: Push("branch")
0x71c: @ GetVariable(Stack[-1], Stack[-2])
0x71d: Pop(1)
0x71e: Stack[-3] = Stack[-1]
0x71f: Return(); Pop(2)

0x720: PushEmpty()
0x721: PushEmpty(int)
0x722: Call2 0x71a

0x723: Pop(0)
0x724: Push((int) 1)
0x725: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x727: @ WorkWithCorpse(Stack[-1])
0x728: Pop(0)
0x729: GOTO 0x72c

0x72a: @ Barter(Stack[-1])
0x72b: Pop(0)
0x72c: Return(); Pop(0)

0x72d: PushEmpty(int, bool, int, bool)
0x72e: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x72f: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x730: Push("GenerateMoney: iMin > iMax")
0x731: @ Trace(Stack[-1])
0x732: Pop(1)
0x733: Return(); Pop(4)

0x734: Stack[-2] = (int) 0
0x735: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x736: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x737: Pop(0); Push(Stack[-5] - Stack[-6]);
0x738: @ irand(Stack[-3], Stack[-1])
0x739: Pop(1)
0x73a: GOTO 0x73f

0x73b: Push((int) 0)
0x73c: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73e: Return(); Pop(4)

0x73f: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x740: Push((int) 0)
0x741: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: Return(); Pop(4)

0x744: PushEmpty(int, string)
0x745: Stack[-1] = "Money"
0x746: Call2 0x799

0x747: Pop(1)
0x748: Push((int) 0)
0x749: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x74a: Pop(2)
0x74b: Return(); Pop(4)

0x74c: PushEmpty(object, int, bool, object, int, bool)
0x74d: @ CreateInvItem(Stack[-3])
0x74e: Pop(0)
0x74f: @@ SetItemName(Stack[-7])
0x750: Pop(0)
0x751: Push("Organ")
0x752: Push((int) 1)
0x753: @@ SetProperty(Stack[-2], Stack[-1])
0x754: Pop(2)
0x755: @@ GetItemID(Stack[-2])
0x756: Pop(0)
0x757: Push((int) 0)
0x758: Push((int) 1)
0x759: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x75a: Pop(2)
0x75b: Return(); Pop(6)

0x75c: Stack[-3] = 0
0x75d: PushEmpty(int)
0x75e: Call2 0x71a

0x75f: Pop(0)
0x760: Push((int) 1)
0x761: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: Return(); Pop(0)

0x764: PushEmpty(string)
0x765: Stack[-1] = "liver"
0x766: Call2 0x74c

0x767: Pop(1)
0x768: PushEmpty(string)
0x769: Stack[-1] = "kidney"
0x76a: Call2 0x74c

0x76b: Pop(1)
0x76c: PushEmpty(string)
0x76d: Stack[-1] = "heart"
0x76e: Call2 0x74c

0x76f: Pop(1)
0x770: PushEmpty(string)
0x771: Stack[-1] = "blood"
0x772: Call2 0x74c

0x773: Pop(1)
0x774: Return(); Pop(0)

0x775: PushEmpty(int, bool, int, bool)
0x776: Push((int) 0)
0x777: @ ClearSubContainer(Stack[-1])
0x778: Pop(1)
0x779: PushEmpty(int, int)
0x77a: Stack[-2] = (int) 500
0x77b: Stack[-1] = (int) 1000
0x77c: Call2 0x72d

0x77d: Pop(2)
0x77e: PushEmpty(string, int, int, int)
0x77f: Stack[-4] = "rifle_ammo"
0x780: Stack[-3] = (int) 1
0x781: Stack[-2] = (int) 3
0x782: Stack[-1] = (int) 3
0x783: Call2 0x5df

0x784: Pop(4)
0x785: PushEmpty(string, int, int, int)
0x786: Stack[-4] = "rusk"
0x787: Stack[-3] = (int) 1
0x788: Stack[-2] = (int) 3
0x789: Stack[-1] = (int) 2
0x78a: Call2 0x5df

0x78b: Pop(4)
0x78c: PushEmpty(string, int, int)
0x78d: Stack[-3] = "bandage"
0x78e: Stack[-2] = (int) 1
0x78f: Stack[-1] = (int) 6
0x790: Call2 0x5d4

0x791: Pop(3)
0x792: PushEmpty(string, int, int)
0x793: Stack[-3] = "tourniquet"
0x794: Stack[-2] = (int) 1
0x795: Stack[-1] = (int) 6
0x796: Call2 0x5d4

0x797: Pop(3)
0x798: Return(); Pop(4)

0x799: PushEmpty(int, int)
0x79a: @ GetInvItemByName(Stack[-1], Stack[-3])
0x79b: Pop(0)
0x79c: Stack[-4] = Stack[-1]
0x79d: Return(); Pop(2)

0x79e: PushEmpty()
0x79f: PushEmpty(object)
0x7a0: Stack[-1] = Stack[-2]
0x7a1: Push(-1, 0); TaskCall(0)
0x7a2: Call2 0x0

0x7a3: Pop(-1, 0); TaskReturn
0x7a4: Pop(1)
0x7a5: Return(); Pop(0)

0x7a6: PushEmpty()
0x7a7: PushEmpty(object, int, float)
0x7a8: Stack[-3] = Stack[-7]
0x7a9: Stack[-2] = Stack[-6]
0x7aa: Stack[-1] = Stack[-5]
0x7ab: Call2 0x570

0x7ac: Pop(3)
0x7ad: Return(); Pop(0)

0x7ae: PushEmpty()
0x7af: PushEmpty(object, int, float, cvector, cvector)
0x7b0: Stack[-5] = Stack[-11]
0x7b1: Stack[-4] = Stack[-10]
0x7b2: Stack[-3] = Stack[-9]
0x7b3: Stack[-2] = Stack[-7]
0x7b4: Stack[-1] = Stack[-6]
0x7b5: Call2 0x5b4

0x7b6: Pop(5)
0x7b7: Return(); Pop(0)

0x7b8: PushEmpty(float, float)
0x7b9: Push("health")
0x7ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7bc: Push("health")
0x7bd: @ GetProperty(Stack[-1], Stack[-2])
0x7be: Pop(1)
0x7bf: Push((int) 0)
0x7c0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7c2: @ SignalDeath(Stack[-4])
0x7c3: Pop(0)
0x7c4: Return(); Pop(2)

0x7c5: PushEmpty()
0x7c6: PushEmpty(bool, object)
0x7c7: Stack[-1] = Stack[-3]
0x7c8: Call2 0x493

0x7c9: Pop(1)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7cb: PushEmpty(object)
0x7cc: Call2 0x66e

0x7cd: Pop(0)
0x7ce: Push((float)0.05)
0x7cf: Push((bool) 1)
0x7d0: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: PushEmpty(object)
0x7d3: Stack[-1] = Stack[-2]
0x7d4: Call2 0x94a

0x7d5: Pop(1)
0x7d6: Return(); Pop(0)

0x7d7: PushEmpty(string, string)
0x7d8: PushEmpty(bool, object, string)
0x7d9: Stack[-2] = Stack[-7]
0x7da: Stack[-1] = "class"
0x7db: Call2 0x498

0x7dc: Pop(2)
0x7dd: Pop(1); Push((bool) Stack[-1] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7df: Stack[-5] = (bool) 0
0x7e0: Return(); Pop(2)

0x7e1: Push("class")
0x7e2: @@ GetProperty(Stack[-1], Stack[-2])
0x7e3: Pop(1)
0x7e4: PushEmpty(bool)
0x7e5: Stack[-1] = (bool) 1
0x7e6: PushEmpty(bool)
0x7e7: Stack[-1] = (bool) 1
0x7e8: PushEmpty(bool)
0x7e9: Stack[-1] = (bool) 1
0x7ea: PushEmpty(bool)
0x7eb: Stack[-1] = (bool) 1
0x7ec: PushEmpty(bool)
0x7ed: Stack[-1] = (bool) 1
0x7ee: PushEmpty(bool)
0x7ef: Stack[-1] = (bool) 1
0x7f0: PushEmpty(bool)
0x7f1: Stack[-1] = (bool) 1
0x7f2: PushEmpty(bool)
0x7f3: Stack[-1] = (bool) 1
0x7f4: PushEmpty(bool)
0x7f5: Stack[-1] = (bool) 1
0x7f6: PushEmpty(bool)
0x7f7: Stack[-1] = (bool) 1
0x7f8: Push("patrol")
0x7f9: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fb: Push("sanitar")
0x7fc: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x7fd: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fe: Stack[-1] = (bool) 0
0x7ff: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x800: Push("soldier")
0x801: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x802: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x803: Stack[-1] = (bool) 0
0x804: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x805: Push("woman")
0x806: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x808: Stack[-1] = (bool) 0
0x809: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80a: Push("wasted_girl")
0x80b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80d: Stack[-1] = (bool) 0
0x80e: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x80f: Push("vaxxabitka")
0x810: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x811: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x812: Stack[-1] = (bool) 0
0x813: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x814: Push("vaxxabit")
0x815: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x817: Stack[-1] = (bool) 0
0x818: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x819: Push("little_girl")
0x81a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81c: Stack[-1] = (bool) 0
0x81d: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x81e: Push("girl")
0x81f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x821: Stack[-1] = (bool) 0
0x822: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x823: Push("dohodyaga")
0x824: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x826: Stack[-1] = (bool) 0
0x827: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x828: Push("nudegirl")
0x829: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82b: Stack[-1] = (bool) 0
0x82c: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82d: Stack[-5] = (bool) 1
0x82e: Return(); Pop(2)

0x82f: Push(Stack[-3])
0x830: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x831: Stack[-5] = (bool) 0
0x832: Return(); Pop(2)

0x833: Stack[-5] = (bool) 1
0x834: PushEmpty(bool)
0x835: Stack[-1] = (bool) 1
0x836: PushEmpty(bool)
0x837: Stack[-1] = (bool) 1
0x838: PushEmpty(bool)
0x839: Stack[-1] = (bool) 1
0x83a: PushEmpty(bool)
0x83b: Stack[-1] = (bool) 1
0x83c: PushEmpty(bool)
0x83d: Stack[-1] = (bool) 1
0x83e: Push("worker")
0x83f: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x840: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x841: Push("butcher")
0x842: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x844: Stack[-1] = (bool) 0
0x845: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x846: Push("boy")
0x847: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x849: Stack[-1] = (bool) 0
0x84a: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84b: Push("unosha")
0x84c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x84d: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84e: Stack[-1] = (bool) 0
0x84f: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x850: Push("wasted_male")
0x851: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x852: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x853: Stack[-1] = (bool) 0
0x854: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x855: Push("alkash")
0x856: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x858: Stack[-1] = (bool) 0
0x859: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85a: Push("morlok")
0x85b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85d: Stack[-5] = (bool) 0
0x85e: Return(); Pop(2)

0x85f: Push(GlobalVars[0])
0x860: PushEmpty(object)
0x861: Call2 0x699

0x862: Stack[-2] = Stack[-1]
0x863: Pop(1)
0x864: GlobalVars[0] = Stack[-1]; Pop(1)
0x865: Return(); Pop(0)

0x866: PushEmpty()
0x867: PushEmpty(object, bool)
0x868: Stack[-2] = Stack[-4]
0x869: Stack[-1] = Stack[-3]
0x86a: Push(-2, 3); TaskCall(3)
0x86b: Call2 0x1c4

0x86c: Pop(-2, 3); TaskReturn
0x86d: Pop(2)
0x86e: @ ResetAAS()
0x86f: Pop(0)
0x870: Return(); Pop(0)

0x871: PushEmpty(bool, bool)
0x872: Pop(0); Push((bool) Stack[-3] == 0)
0x873: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x874: Return(); Pop(2)

0x875: Push(GlobalVars[0])
0x876: @@ in(Stack[-2], Stack[-4])
0x877: Pop(1)
0x878: Pop(0); Push((bool) Stack[-1] == 0)
0x879: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87a: Push(GlobalVars[0])
0x87b: @@ add(Stack[-4])
0x87c: Pop(1)
0x87d: PushEmpty(bool, object)
0x87e: Stack[-1] = Stack[-5]
0x87f: Call2 0x493

0x880: Pop(1)
0x881: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x882: PushEmpty(object)
0x883: Call2 0x66e

0x884: Pop(0)
0x885: Push((float)0.0)
0x886: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x887: Pop(2)
0x888: Return(); Pop(2)

0x889: PushEmpty()
0x88a: PushEmpty(object)
0x88b: Stack[-1] = Stack[-2]
0x88c: Call2 0x871

0x88d: Pop(1)
0x88e: PushEmpty(object, bool)
0x88f: Stack[-2] = Stack[-3]
0x890: Stack[-1] = (bool) 1
0x891: Call2 0x866

0x892: Pop(2)
0x893: Return(); Pop(0)

0x894: PushEmpty(bool, bool)
0x895: Push(GlobalVars[0])
0x896: @@ in(Stack[-2], Stack[-4])
0x897: Pop(1)
0x898: Push(Stack[-1])
0x899: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89a: PushEmpty(object, bool)
0x89b: Stack[-2] = Stack[-5]
0x89c: Stack[-1] = (bool) 1
0x89d: Call2 0x866

0x89e: Pop(2)
0x89f: GOTO 0x8a8

0x8a0: PushEmpty(object)
0x8a1: Stack[-1] = Stack[-4]
0x8a2: Push(-1, 2); TaskCall(2)
0x8a3: Call2 0x11d

0x8a4: Pop(-1, 2); TaskReturn
0x8a5: Pop(1)
0x8a6: @ ResetAAS()
0x8a7: Pop(0)
0x8a8: Return(); Pop(2)

0x8a9: PushEmpty()
0x8aa: PushEmpty(float, object)
0x8ab: Stack[-1] = Stack[-3]
0x8ac: Call2 0x484

0x8ad: Pop(1)
0x8ae: Push((float)40000.0)
0x8af: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x8b0: Return(); Pop(0)

0x8b1: PushEmpty(float, string, float, float, string, float)
0x8b2: PushEmpty(bool, object)
0x8b3: Stack[-1] = Stack[-9]
0x8b4: Call2 0x52c

0x8b5: Pop(1)
0x8b6: Pop(1); Push((bool) Stack[-1] == 0)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b8: Stack[-8] = (bool) 0
0x8b9: Return(); Pop(6)

0x8ba: PushEmpty(bool, object)
0x8bb: Stack[-1] = Stack[-9]
0x8bc: Call2 0x493

0x8bd: Pop(1)
0x8be: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8bf: Push("reputation")
0x8c0: @@ GetProperty(Stack[-1], Stack[-4])
0x8c1: Pop(1)
0x8c2: Push((float)0.33)
0x8c3: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x8c4: Return(); Pop(6)

0x8c5: PushEmpty(bool, object, string)
0x8c6: Stack[-2] = Stack[-10]
0x8c7: Stack[-1] = "class"
0x8c8: Call2 0x498

0x8c9: Pop(2)
0x8ca: Pop(1); Push((bool) Stack[-1] == 0)
0x8cb: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cc: Stack[-8] = (bool) 0
0x8cd: Return(); Pop(6)

0x8ce: Push("class")
0x8cf: @@ GetProperty(Stack[-1], Stack[-3])
0x8d0: Pop(1)
0x8d1: PushEmpty(bool)
0x8d2: Stack[-1] = (bool) 1
0x8d3: PushEmpty(bool)
0x8d4: Stack[-1] = (bool) 1
0x8d5: Push("bomber")
0x8d6: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d8: Push("hunter")
0x8d9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8db: Stack[-1] = (bool) 0
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8dd: Push("grabitel")
0x8de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8df: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8e0: Stack[-1] = (bool) 0
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e2: Stack[-8] = (bool) 1
0x8e3: Return(); Pop(6)

0x8e4: PushEmpty(bool, object, string)
0x8e5: Stack[-2] = Stack[-10]
0x8e6: Stack[-1] = "disease"
0x8e7: Call2 0x498

0x8e8: Pop(2)
0x8e9: Pop(1); Push((bool) Stack[-1] == 0)
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8eb: Stack[-8] = (bool) 0
0x8ec: Return(); Pop(6)

0x8ed: PushEmpty(bool)
0x8ee: Stack[-1] = (bool) 1
0x8ef: PushEmpty(bool, string)
0x8f0: Stack[-1] = Stack[-5]
0x8f1: Call2 0x617

0x8f2: Pop(1)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f4: Push("dog")
0x8f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f7: Stack[-1] = (bool) 0
0x8f8: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8f9: Push("disease")
0x8fa: @@ GetProperty(Stack[-1], Stack[-2])
0x8fb: Pop(1)
0x8fc: Push((int) 0)
0x8fd: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x8fe: Return(); Pop(6)

0x8ff: Stack[-8] = (bool) 0
0x900: Return(); Pop(6)

0x901: PushEmpty(bool, bool)
0x902: PushEmpty(bool, object)
0x903: Stack[-1] = Stack[-5]
0x904: Call2 0x52c

0x905: Pop(1)
0x906: Pop(1); Push((bool) Stack[-1] == 0)
0x907: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x908: Stack[-4] = (bool) 0
0x909: Return(); Pop(2)

0x90a: Push(GlobalVars[0])
0x90b: @@ in(Stack[-2], Stack[-4])
0x90c: Pop(1)
0x90d: Push(Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90f: Stack[-4] = (bool) 1
0x910: Return(); Pop(2)

0x911: PushEmpty(bool, object)
0x912: Stack[-1] = Stack[-5]
0x913: Call2 0x8b1

0x914: Stack[-6] = Stack[-2]
0x915: Pop(2)
0x916: Return(); Pop(2)

0x917: PushEmpty()
0x918: PushEmpty(object)
0x919: Stack[-1] = Stack[-2]
0x91a: Call2 0x944

0x91b: Pop(1)
0x91c: Return(); Pop(0)

0x91d: PushEmpty(bool, bool)
0x91e: PushEmpty(bool, object, bool)
0x91f: Stack[-2] = Stack[-7]
0x920: Stack[-1] = !Stack[-6]; Pop(0);
0x921: Call2 0x7d7

0x922: Pop(2)
0x923: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x924: @ CanSee(Stack[-1], Stack[-5])
0x925: Pop(0)
0x926: PushEmpty(bool)
0x927: Stack[-1] = (bool) 1
0x928: Push(Stack[-2])
0x929: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92a: PushEmpty(float, object)
0x92b: Stack[-1] = Stack[-8]
0x92c: Call2 0x484

0x92d: Pop(1)
0x92e: Push((float)490000.0)
0x92f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x930: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x931: Stack[-1] = (bool) 0
0x932: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x933: Stack[-6] = (bool) 1
0x934: Return(); Pop(2)

0x935: Stack[-6] = (bool) 0
0x936: Return(); Pop(2)

0x937: PushEmpty(bool, string, string)
0x938: Stack[-2] = "quest_d11_02"
0x939: Stack[-1] = "actor_unload"
0x93a: Call2 0x6fa

0x93b: Pop(3)
0x93c: PushEmpty(object)
0x93d: Call2 0x66e

0x93e: Pop(0)
0x93f: @ RemoveActor(Stack[-1])
0x940: Pop(1)
0x941: @ Hold()
0x942: Pop(0)
0x943: Return(); Pop(0)

0x944: PushEmpty()
0x945: PushEmpty(object)
0x946: Stack[-1] = Stack[-2]
0x947: Call2 0x894

0x948: Pop(1)
0x949: Return(); Pop(0)

0x94a: PushEmpty()
0x94b: PushEmpty(bool, string, string)
0x94c: Stack[-2] = "quest_d11_02"
0x94d: Stack[-1] = "soldier_dead"
0x94e: Call2 0x6fa

0x94f: Pop(3)
0x950: PushEmpty(bool, object)
0x951: Stack[-1] = Stack[-3]
0x952: Call2 0x493

0x953: Pop(1)
0x954: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x955: PushEmpty(bool, object, float)
0x956: Stack[-2] = Stack[-4]
0x957: Stack[-1] = (float) 0.03
0x958: Call2 0x6c3

0x959: Pop(3)
0x95a: PushEmpty(object)
0x95b: Stack[-1] = Stack[-2]
0x95c: Call2 0x79e

0x95d: Pop(1)
0x95e: Return(); Pop(0)

