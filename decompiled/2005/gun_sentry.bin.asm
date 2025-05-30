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
	in
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
	reputation
	bomber
	hunter
	grabitel
	disease
	dog

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
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
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
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
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

RunOp = 0x316
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
	GTASK_4 Vars = (cvector, cvector) Params = 0
		EVENT_3 Op = 0x31f Vars = (object)
		EVENT_17 Op = 0x33d Vars = (object)
		EVENT_30 Op = 0x351 Vars = (object, object, bool)
		EVENT_1 Op = 0x35e Vars = (object)

Events:
EVENT_22 Op = 0x6a7 Vars = (object, int, float, float)
EVENT_43 Op = 0x6af Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6b9 Vars = (object, string)
EVENT_41 Op = 0x6c6 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0x3e3

0x4: Pop(1)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: PushEmpty()
0x7: Call2 0x676

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x65e

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
0x27: Call2 0x621

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
0x70: Call2 0x528

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
0x92: Call2 0x528

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
0xb2: Call2 0x466

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
0xcb: Call2 0x6c6

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
0xe0: Call2 0x4fc

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[-3]
0xe6: Call2 0x466

0xe7: Pop(1)
0xe8: Pop(1); Push((bool) Stack[-1] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: PushEmpty(object)
0xeb: Stack[-1] = Stack[-2]
0xec: Call2 0x772

0xed: Pop(1)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Call2 0xbd

0xf1: Pop(0)
0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[-2]
0xf4: Call2 0x78a

0xf5: Pop(1)
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: PushEmpty(bool, object, object, bool)
0xf9: Stack[-3] = Stack[-7]
0xfa: Stack[-2] = Stack[-6]
0xfb: Stack[-1] = Stack[-5]
0xfc: Call2 0x81e

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
0x107: Call2 0x802

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: PushEmpty()
0x10b: Call2 0xbd

0x10c: Pop(0)
0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[-2]
0x10f: Call2 0x818

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
0x121: Call2 0x607

0x122: Pop(1)
0x123: @ CanSee(Stack[-1], Stack[-0])
0x124: Pop(0)
0x125: Push( Stack[1 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x7aa

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(object, bool)
0x12d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = (bool) 1
0x12f: Call2 0x767

0x130: Pop(2)
0x131: Return(); Pop(6)

0x132: @ Face(Stack[-0])
0x133: Pop(0)
0x134: PushEmpty()
0x135: Call2 0x610

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
0x15b: Call2 0x607

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
0x16a: Call2 0x7aa

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16d: PushEmpty()
0x16e: Call2 0x1b4

0x16f: Pop(0)
0x170: PushEmpty(object, bool)
0x171: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x172: Stack[-1] = (bool) 0
0x173: Call2 0x767

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
0x190: Call2 0x767

0x191: Pop(2)
0x192: Return(); Pop(6)

0x193: PushEmpty()
0x194: PushEmpty(bool, object)
0x195: Stack[-1] = Stack[-3]
0x196: Call2 0x466

0x197: Pop(1)
0x198: Pop(1); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19a: PushEmpty(object)
0x19b: Stack[-1] = Stack[-2]
0x19c: Call2 0x772

0x19d: Pop(1)
0x19e: Return(); Pop(0)

0x19f: PushEmpty()
0x1a0: Call2 0x1b4

0x1a1: Pop(0)
0x1a2: PushEmpty(object)
0x1a3: Stack[-1] = Stack[-2]
0x1a4: Call2 0x78a

0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty()
0x1a8: PushEmpty(bool, object, object, bool)
0x1a9: Stack[-3] = Stack[-7]
0x1aa: Stack[-2] = Stack[-6]
0x1ab: Stack[-1] = Stack[-5]
0x1ac: Call2 0x81e

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
0x1c1: Call2 0x6c6

0x1c2: Pop(1)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(bool, bool, bool, bool)
0x1c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x1c6: PushEmpty(object)
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x607

0x1c9: Pop(1)
0x1ca: PushEmpty()
0x1cb: Call2 0x610

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
0x1e0: Call2 0x466

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x1e3: @ CanSee(Stack[-1], Stack[-0])
0x1e4: Pop(0)
0x1e5: Push(Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e7: PushEmpty(object)
0x1e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e9: Call2 0x607

0x1ea: Pop(1)
0x1eb: PushEmpty()
0x1ec: Call2 0x278

0x1ed: Pop(0)
0x1ee: GOTO 0x23e

0x1ef: PushEmpty(object)
0x1f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f1: Call2 0x4fc

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
0x208: Call2 0x466

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
0x22d: Call2 0x466

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
0x25f: Call2 0x4fc

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
0x27b: Call2 0x607

0x27c: Pop(1)
0x27d: @ ReportAttack(Stack[-0])
0x27e: Pop(0)
0x27f: PushEmpty(bool, object)
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call2 0x3e3

0x282: Pop(1)
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: PushEmpty(object)
0x285: Call2 0x5a8

0x286: Pop(0)
0x287: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x288: Pop(1)
0x289: @ GetDirection(Stack[-14])
0x28a: Pop(0)
0x28b: PushEmpty(cvector, object)
0x28c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28d: Call2 0x3d4

0x28e: Stack[-15] = Stack[-2]
0x28f: Pop(2)
0x290: PushEmpty(float, cvector, cvector)
0x291: Stack[-2] = Stack[-17]
0x292: Stack[-1] = Stack[-16]
0x293: Call2 0x5ec

0x294: Pop(2)
0x295: Push((float)0.99939)
0x296: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Return(); Pop(28)

0x299: PushEmpty()
0x29a: Call2 0x610

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
0x2b7: Call2 0x3d4

0x2b8: Stack[-15] = Stack[-2]
0x2b9: Pop(2)
0x2ba: Push(CvectorIndex(Stack[-13], 1))
0x2bb: PushEmpty(float, object)
0x2bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bd: Call2 0x507

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
0x2ce: Call2 0x3f4

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
0x2f4: Call2 0x466

0x2f5: Pop(1)
0x2f6: Pop(1); Push((bool) Stack[-1] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Return(); Pop(0)

0x2f9: PushEmpty(object)
0x2fa: Stack[-1] = Stack[-2]
0x2fb: Call2 0x772

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
0x30e: Call2 0x81e

0x30f: Pop(3)
0x310: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x311: PushEmpty(object)
0x312: Stack[-1] = Stack[-4]
0x313: Call2 0x2f1

0x314: Pop(1)
0x315: Return(); Pop(0)

0x316: PushEmpty()
0x317: Call2 0x760

0x318: Pop(0)
0x319: PushEmpty()
0x31a: Call2 0x36c

0x31b: Pop(0)
0x31c: GOTO 0x319

0x31d: Return(); Pop(0)

0x31e: Return(); Pop(0)

0x31f: PushEmpty(bool, bool)
0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[-5]
0x322: Call2 0x466

0x323: Pop(1)
0x324: Pop(1); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Return(); Pop(2)

0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[-5]
0x329: Call2 0x7b2

0x32a: Pop(1)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: Push(GlobalVars[0])
0x32e: @@ in(Stack[-2], Stack[-4])
0x32f: Pop(1)
0x330: Pop(0); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Return(); Pop(2)

0x333: PushEmpty()
0x334: Call2 0x3c0

0x335: Pop(0)
0x336: PushEmpty(object)
0x337: Stack[-1] = Stack[-4]
0x338: Push(-1, 1); TaskCall(1)
0x339: Call2 0xa5

0x33a: Pop(-1, 1); TaskReturn
0x33b: Pop(1)
0x33c: Return(); Pop(2)

0x33d: PushEmpty()
0x33e: PushEmpty(bool, object)
0x33f: Stack[-1] = Stack[-3]
0x340: Call2 0x466

0x341: Pop(1)
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x344: PushEmpty(object)
0x345: Stack[-1] = Stack[-2]
0x346: Call2 0x772

0x347: Pop(1)
0x348: Return(); Pop(0)

0x349: PushEmpty()
0x34a: Call2 0x3c0

0x34b: Pop(0)
0x34c: PushEmpty(object)
0x34d: Stack[-1] = Stack[-2]
0x34e: Call2 0x78a

0x34f: Pop(1)
0x350: Return(); Pop(0)

0x351: PushEmpty()
0x352: PushEmpty(bool, object, object, bool)
0x353: Stack[-3] = Stack[-7]
0x354: Stack[-2] = Stack[-6]
0x355: Stack[-1] = Stack[-5]
0x356: Call2 0x81e

0x357: Pop(3)
0x358: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x359: PushEmpty(object)
0x35a: Stack[-1] = Stack[-4]
0x35b: Call2 0x33d

0x35c: Pop(1)
0x35d: Return(); Pop(0)

0x35e: PushEmpty()
0x35f: PushEmpty(bool, object)
0x360: Stack[-1] = Stack[-3]
0x361: Call2 0x802

0x362: Pop(1)
0x363: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x364: PushEmpty()
0x365: Call2 0x3c0

0x366: Pop(0)
0x367: PushEmpty(object)
0x368: Stack[-1] = Stack[-2]
0x369: Call2 0x838

0x36a: Pop(1)
0x36b: Return(); Pop(0)

0x36c: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x36d: @ GetPFPosition(Stack[-1])
0x36e: Pop(0)
0x36f: @ GetDirection(Stack[-0])
0x370: Pop(0)
0x371: PushEmpty()
0x372: Call2 0x3c5

0x373: Pop(0)
0x374: Push((int) 10)
0x375: @ irand(Stack[-5], Stack[-1])
0x376: Pop(1)
0x377: Push((int) 5)
0x378: Pop(1); Push(Stack[-5] + Stack[-1]);
0x379: @ Sleep(Stack[-1], Stack[-4])
0x37a: Pop(1)
0x37b: Push(Stack[-3])
0x37c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37d: PushEmpty()
0x37e: Call2 0x31e

0x37f: Pop(0)
0x380: GOTO 0x3be

0x381: PushEmpty()
0x382: Call2 0x3c5

0x383: Pop(0)
0x384: @ GetPFPosition(Stack[-2])
0x385: Pop(0)
0x386: PushEmpty(float, cvector, cvector)
0x387: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x388: Stack[-1] = Stack[-5]
0x389: Call2 0x5b8

0x38a: Pop(2)
0x38b: Push((int) 40000)
0x38c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x38e: @ FindPathTo(Stack[-1], Stack[-1])
0x38f: Pop(0)
0x390: Pop(0); Push(( Stack[-1] != 0 )
0x391: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x392: @ RotatePath(Stack[-1], Stack[-3])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[-3] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: GOTO 0x3bd

0x397: Push((bool) 0)
0x398: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x399: Pop(1)
0x39a: Pop(0); Push((bool) Stack[-3] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3bd

0x39d: Push(CvectorIndex(Stack[-0], 0))
0x39e: Push(CvectorIndex(Stack[-0], 2))
0x39f: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3a0: Pop(2)
0x3a1: Pop(0); Push((bool) Stack[-3] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3bd

0x3a4: @ WaitForAnimEnd(Stack[-3])
0x3a5: Pop(0)
0x3a6: Pop(0); Push((bool) Stack[-3] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: GOTO 0x3bd

0x3a9: GOTO 0x3be

0x3aa: GOTO 0x3ae

0x3ab: Push((int) 1)
0x3ac: @ Sleep(Stack[-1])
0x3ad: Pop(1)
0x3ae: Stack[-1] = 0
0x3af: GOTO 0x3bd

0x3b0: Push(CvectorIndex(Stack[-0], 0))
0x3b1: Push(CvectorIndex(Stack[-0], 2))
0x3b2: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3b3: Pop(2)
0x3b4: Pop(0); Push((bool) Stack[-3] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: GOTO 0x3bd

0x3b7: @ WaitForAnimEnd(Stack[-3])
0x3b8: Pop(0)
0x3b9: Pop(0); Push((bool) Stack[-3] == 0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: GOTO 0x3bd

0x3bc: GOTO 0x3be

0x3bd: GOTO 0x381

0x3be: GOTO 0x371

0x3bf: Return(); Pop(8)

0x3c0: @ StopGroup0()
0x3c1: Pop(0)
0x3c2: @ Stop()
0x3c3: Pop(0)
0x3c4: Return(); Pop(0)

0x3c5: Return(); Pop(0)

0x3c6: PushEmpty()
0x3c7: Push((int) 2)
0x3c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3ca: Stack[-2] = "fire"
0x3cb: Return(); Pop(0)

0x3cc: GOTO 0x3d2

0x3cd: Push((int) 1)
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-2] = "bullet"
0x3d1: Return(); Pop(0)

0x3d2: Stack[-2] = "phys"
0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(cvector, cvector, cvector, cvector)
0x3d5: @ GetPosition(Stack[-2])
0x3d6: Pop(0)
0x3d7: @@ GetPosition(Stack[-1])
0x3d8: Pop(0)
0x3d9: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3da: Return(); Pop(4)

0x3db: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3dc: @ GetPosition(Stack[-3])
0x3dd: Pop(0)
0x3de: @@ GetPosition(Stack[-2])
0x3df: Pop(0)
0x3e0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3e1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3e2: Return(); Pop(6)

0x3e3: PushEmpty(bool, bool)
0x3e4: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3e5: Pop(0)
0x3e6: Stack[-4] = Stack[-1]
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty(bool, bool)
0x3e9: Push("HasProperty")
0x3ea: Push((int) 2)
0x3eb: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3ec: Pop(1); Push((bool) Stack[-1] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-5] = (bool) 0
0x3ef: Return(); Pop(2)

0x3f0: @@ HasProperty(Stack[-3], Stack[-1])
0x3f1: Pop(0)
0x3f2: Stack[-5] = Stack[-1]
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x3f5: PushEmpty(bool, object, string)
0x3f6: Stack[-2] = Stack[-18]
0x3f7: Stack[-1] = "health"
0x3f8: Call2 0x3e8

0x3f9: Pop(2)
0x3fa: Pop(1); Push((bool) Stack[-1] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fc: Stack[-16] = (float) 0.0
0x3fd: Return(); Pop(12)

0x3fe: PushEmpty(bool, object, string)
0x3ff: Stack[-2] = Stack[-18]
0x400: Stack[-1] = "armor"
0x401: Call2 0x3e8

0x402: Pop(2)
0x403: Pop(1); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x405: Stack[-6] = (int) 0
0x406: GOTO 0x40a

0x407: Push("armor")
0x408: @@ GetProperty(Stack[-1], Stack[-7])
0x409: Pop(1)
0x40a: Push("armor_")
0x40b: PushEmpty(string, int)
0x40c: Stack[-1] = Stack[-16]
0x40d: Call2 0x3c6

0x40e: Pop(1)
0x40f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x410: PushEmpty(bool, object, string)
0x411: Stack[-2] = Stack[-18]
0x412: Stack[-1] = Stack[-8]
0x413: Call2 0x3e8

0x414: Pop(2)
0x415: Pop(1); Push((bool) Stack[-1] == 0)
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-4] = (int) 0
0x418: GOTO 0x41b

0x419: @@ GetProperty(Stack[-5], Stack[-4])
0x41a: Pop(0)
0x41b: PushEmpty(float, float, float)
0x41c: Pop(0); Push(Stack[-9] + Stack[-7]);
0x41d: Push((float)100.0)
0x41e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x41f: Stack[-1] = (int) 1
0x420: Call2 0x5bc

0x421: Stack[-6] = Stack[-3]
0x422: Pop(3)
0x423: Push("health")
0x424: @@ GetProperty(Stack[-1], Stack[-3])
0x425: Pop(1)
0x426: Push((int) 1)
0x427: Pop(1); Push(Stack[-1] - Stack[-4]);
0x428: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x429: Push("health")
0x42a: PushEmpty(float, float, float, float)
0x42b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x42c: Stack[-2] = (int) 0
0x42d: Stack[-1] = (int) 1
0x42e: Call2 0x5c3

0x42f: Pop(3)
0x430: @@ SetProperty(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: PushEmpty(bool, object)
0x433: Stack[-1] = Stack[-17]
0x434: Call2 0x3e3

0x435: Pop(1)
0x436: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x437: PushEmpty(float)
0x438: Stack[-1] = -Stack[-2]; Pop(0);
0x439: Call2 0x5fd

0x43a: Pop(1)
0x43b: Stack[-16] = Stack[-1]
0x43c: Return(); Pop(12)

0x43d: PushEmpty(bool, bool)
0x43e: @@ IsDead(Stack[-1])
0x43f: Pop(0)
0x440: Stack[-4] = Stack[-1]
0x441: Return(); Pop(2)

0x442: PushEmpty(object, object, object, object)
0x443: Pop(0); Push((bool) Stack[-5] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-6] = (bool) 0
0x446: Return(); Pop(4)

0x447: PushEmpty(bool)
0x448: Stack[-1] = (bool) 0
0x449: Push("IsDead")
0x44a: Push((int) 1)
0x44b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x44c: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44d: PushEmpty(bool, object)
0x44e: Stack[-1] = Stack[-8]
0x44f: Call2 0x43d

0x450: Pop(1)
0x451: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x452: Stack[-1] = (bool) 1
0x453: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x454: Stack[-6] = (bool) 0
0x455: Return(); Pop(4)

0x456: @ GetScene(Stack[-2])
0x457: Pop(0)
0x458: Pop(0); Push((bool) Stack[-2] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-6] = (bool) 0
0x45b: Return(); Pop(4)

0x45c: @@ GetScene(Stack[-1])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-6] = (bool) 0
0x461: Return(); Pop(4)

0x462: Stack[-6] = (bool) 1
0x463: Return(); Pop(4)

0x464: Stack[-1] = 0
0x465: Stack[-2] = 0
0x466: PushEmpty(int, int)
0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[-5]
0x469: Call2 0x442

0x46a: Pop(1)
0x46b: Pop(1); Push((bool) Stack[-1] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-4] = (bool) 0
0x46e: Return(); Pop(2)

0x46f: PushEmpty(bool, object, string)
0x470: Stack[-2] = Stack[-6]
0x471: Stack[-1] = "noaccess"
0x472: Call2 0x3e8

0x473: Pop(2)
0x474: Pop(1); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-4] = (bool) 1
0x477: Return(); Pop(2)

0x478: Push("noaccess")
0x479: @@ GetProperty(Stack[-1], Stack[-2])
0x47a: Pop(1)
0x47b: Push((int) 0)
0x47c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x47d: Return(); Pop(2)

0x47e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x47f: Pop(0); Push((bool) Stack[-15] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x481: Return(); Pop(14)

0x482: @ IsDead(Stack[-7])
0x483: Pop(0)
0x484: Push(Stack[-7])
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Return(); Pop(14)

0x487: @ GetSecondaryAnimationType(Stack[-6])
0x488: Pop(0)
0x489: Push((int) 0)
0x48a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: Return(); Pop(14)

0x48d: @@ GetPosition(Stack[-5])
0x48e: Pop(0)
0x48f: @ GetPosition(Stack[-4])
0x490: Pop(0)
0x491: @ GetDirection(Stack[-3])
0x492: Pop(0)
0x493: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x494: Push(CvectorIndex(Stack[-2], 0))
0x495: Push(CvectorIndex(Stack[-4], 0))
0x496: Pop(2); Push(Stack[-2] * Stack[-1]);
0x497: Push(CvectorIndex(Stack[-3], 2))
0x498: Push(CvectorIndex(Stack[-5], 2))
0x499: Pop(2); Push(Stack[-2] * Stack[-1]);
0x49a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x49b: Push((int) 0)
0x49c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49e: Stack[-1] = "fhit"
0x49f: GOTO 0x4a1

0x4a0: Stack[-1] = "bhit"
0x4a1: Push("hit_react")
0x4a2: Push("1")
0x4a3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4a4: Push("2")
0x4a5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4a6: Push((int) -10)
0x4a7: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(4)
0x4a9: Return(); Pop(14)

0x4aa: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4ab: PushEmpty(bool)
0x4ac: Stack[-1] = (bool) 0
0x4ad: PushEmpty(bool)
0x4ae: Stack[-1] = (bool) 0
0x4af: Push(Stack[-23])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b1: Push((int) 4)
0x4b2: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Stack[-1] = (bool) 1
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b6: Push((int) 5)
0x4b7: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Stack[-1] = (bool) 1
0x4ba: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4bb: PushEmpty(cvector, cvector)
0x4bc: PushEmpty(cvector, object)
0x4bd: Stack[-1] = Stack[-25]
0x4be: Call2 0x3d4

0x4bf: Stack[-3] = Stack[-2]
0x4c0: Pop(2)
0x4c1: Call2 0x5ae

0x4c2: Stack[-11] = Stack[-2]
0x4c3: Pop(2)
0x4c4: @ CreateVectorVector(Stack[-8])
0x4c5: Pop(0)
0x4c6: Stack[-7] = (int) 1
0x4c7: Push("hit")
0x4c8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c9: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4ca: Pop(1)
0x4cb: Pop(0); Push((bool) Stack[-6] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4d7

0x4ce: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4cf: Push((float)0.70711)
0x4d0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: @@ add(Stack[-5])
0x4d3: Pop(0)
0x4d4: Push((int) 1)
0x4d5: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4d6: GOTO 0x4c7

0x4d7: @@ size(Stack[-3])
0x4d8: Pop(0)
0x4d9: Push(Stack[-3])
0x4da: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4db: @ irand(Stack[-2], Stack[-3])
0x4dc: Pop(0)
0x4dd: @@ get(Stack[-1], Stack[-2])
0x4de: Pop(0)
0x4df: PushEmpty(object, int, float, cvector, cvector)
0x4e0: Stack[-5] = Stack[-26]
0x4e1: Stack[-4] = Stack[-25]
0x4e2: Stack[-3] = Stack[-24]
0x4e3: Stack[-2] = Stack[-6]
0x4e4: Stack[-1] = -Stack[-14]; Pop(0);
0x4e5: Call2 0x4ee

0x4e6: Pop(5)
0x4e7: Return(); Pop(18)

0x4e8: Stack[-8] = 0
0x4e9: PushEmpty(object)
0x4ea: Stack[-1] = Stack[-22]
0x4eb: Call2 0x47e

0x4ec: Pop(1)
0x4ed: Return(); Pop(18)

0x4ee: PushEmpty(object, object, object, object)
0x4ef: @ GetScene(Stack[-2])
0x4f0: Pop(0)
0x4f1: Push("scripted")
0x4f2: Push("blood_dir.xml")
0x4f3: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x4f4: Pop(2)
0x4f5: PushEmpty(object)
0x4f6: Stack[-1] = Stack[-10]
0x4f7: Call2 0x47e

0x4f8: Pop(1)
0x4f9: Return(); Pop(4)

0x4fa: Stack[-1] = 0
0x4fb: Stack[-2] = 0
0x4fc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4fd: @@ GetPosition(Stack[-3])
0x4fe: Pop(0)
0x4ff: @ GetPosition(Stack[-2])
0x500: Pop(0)
0x501: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x502: Push(CvectorIndex(Stack[-1], 0))
0x503: Push(CvectorIndex(Stack[-2], 2))
0x504: @ RotateAsync(Stack[-2], Stack[-1])
0x505: Pop(2)
0x506: Return(); Pop(6)

0x507: PushEmpty(float, float, float, float)
0x508: @ GetEyesHeight(Stack[-2])
0x509: Pop(0)
0x50a: @@ GetEyesHeight(Stack[-1])
0x50b: Pop(0)
0x50c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x50d: Return(); Pop(4)

0x50e: PushEmpty(bool, bool)
0x50f: PushEmpty(bool, int, int)
0x510: Stack[-2] = Stack[-7]
0x511: Stack[-1] = Stack[-6]
0x512: Call2 0x5ce

0x513: Pop(2)
0x514: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x515: Push((int) 0)
0x516: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x517: Pop(1)
0x518: Return(); Pop(2)

0x519: PushEmpty(int, bool, int, bool)
0x51a: PushEmpty(bool, int, int)
0x51b: Stack[-2] = Stack[-10]
0x51c: Stack[-1] = Stack[-9]
0x51d: Call2 0x5ce

0x51e: Pop(2)
0x51f: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x520: @ irand(Stack[-2], Stack[-5])
0x521: Pop(0)
0x522: Push((int) 0)
0x523: Push((int) 1)
0x524: Pop(1); Push(Stack[-4] + Stack[-1]);
0x525: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: Return(); Pop(4)

0x528: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x529: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x52a: Pop(0)
0x52b: Pop(0); Push((bool) Stack[-8] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x52d: Stack[-7] = (int) 0
0x52e: Push((int) 1)
0x52f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x530: Pop(1); Push(Stack[-18] + Stack[-1]);
0x531: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x532: Pop(1)
0x533: Pop(0); Push((bool) Stack[-6] == 0)
0x534: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x535: GOTO 0x539

0x536: Push((int) 1)
0x537: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x538: GOTO 0x52e

0x539: Pop(0); Push((bool) Stack[-7] == 0)
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Return(); Pop(16)

0x53c: @ irand(Stack[-5], Stack[-7])
0x53d: Pop(0)
0x53e: Push((int) 1)
0x53f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x540: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x541: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x542: Pop(0)
0x543: Push(Stack[-4])
0x544: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x545: @ GetEyesHeight(Stack[-3])
0x546: Pop(0)
0x547: @ GetDirection(Stack[-2])
0x548: Pop(0)
0x549: Push((int) 50)
0x54a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x54b: Push(CvectorIndex(Stack[-1], 1))
0x54c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x54d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x54e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x54f: Pop(0)
0x550: Return(); Pop(16)

0x551: PushEmpty()
0x552: Stack[-2] = (bool) 1
0x553: PushEmpty(bool)
0x554: Stack[-1] = (bool) 1
0x555: PushEmpty(bool)
0x556: Stack[-1] = (bool) 1
0x557: PushEmpty(bool)
0x558: Stack[-1] = (bool) 1
0x559: PushEmpty(bool)
0x55a: Stack[-1] = (bool) 1
0x55b: PushEmpty(bool)
0x55c: Stack[-1] = (bool) 1
0x55d: PushEmpty(bool)
0x55e: Stack[-1] = (bool) 1
0x55f: PushEmpty(bool)
0x560: Stack[-1] = (bool) 1
0x561: PushEmpty(bool)
0x562: Stack[-1] = (bool) 1
0x563: PushEmpty(bool)
0x564: Stack[-1] = (bool) 1
0x565: PushEmpty(bool)
0x566: Stack[-1] = (bool) 1
0x567: PushEmpty(bool)
0x568: Stack[-1] = (bool) 1
0x569: Push("woman")
0x56a: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56c: Push("worker")
0x56d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56f: Stack[-1] = (bool) 0
0x570: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x571: Push("butcher")
0x572: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x574: Stack[-1] = (bool) 0
0x575: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x576: Push("wasted_girl")
0x577: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x579: Stack[-1] = (bool) 0
0x57a: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57b: Push("boy")
0x57c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Stack[-1] = (bool) 0
0x57f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x580: Push("vaxxabitka")
0x581: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: Stack[-1] = (bool) 0
0x584: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x585: Push("unosha")
0x586: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Stack[-1] = (bool) 0
0x589: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58a: Push("wasted_male")
0x58b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58d: Stack[-1] = (bool) 0
0x58e: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58f: Push("alkash")
0x590: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x592: Stack[-1] = (bool) 0
0x593: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x594: Push("dohodyaga")
0x595: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x597: Stack[-1] = (bool) 0
0x598: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x599: Push("vaxxabit")
0x59a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: Stack[-1] = (bool) 0
0x59d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59e: Push("nudegirl")
0x59f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Stack[-1] = (bool) 0
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a3: Push("morlok")
0x5a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a6: Stack[-2] = (bool) 0
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty(object, object)
0x5a9: @ self(Stack[-1])
0x5aa: Pop(0)
0x5ab: Stack[-3] = Stack[-1]
0x5ac: Return(); Pop(2)

0x5ad: Stack[-1] = 0
0x5ae: PushEmpty(float, float)
0x5af: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5b0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5b1: Push((float)0.0)
0x5b2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5b5: Return(); Pop(2)

0x5b6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5b7: Return(); Pop(2)

0x5b8: PushEmpty(cvector, cvector)
0x5b9: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5ba: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5bb: Return(); Pop(2)

0x5bc: PushEmpty()
0x5bd: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-3] = Stack[-2]
0x5c0: GOTO 0x5c2

0x5c1: Stack[-3] = Stack[-1]
0x5c2: Return(); Pop(0)

0x5c3: PushEmpty()
0x5c4: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: Stack[-4] = Stack[-2]
0x5c7: Return(); Pop(0)

0x5c8: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5ca: Stack[-4] = Stack[-1]
0x5cb: Return(); Pop(0)

0x5cc: Stack[-4] = Stack[-3]
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty(int, int)
0x5cf: @ irand(Stack[-1], Stack[-3])
0x5d0: Pop(0)
0x5d1: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x5d2: Return(); Pop(2)

0x5d3: PushEmpty(object, object)
0x5d4: @ CreateObjectSet(Stack[-1])
0x5d5: Pop(0)
0x5d6: Stack[-3] = Stack[-1]
0x5d7: Return(); Pop(2)

0x5d8: Stack[-1] = 0
0x5d9: PushEmpty()
0x5da: Push(CvectorIndex(Stack[-2], 0))
0x5db: Push(CvectorIndex(Stack[-2], 0))
0x5dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5dd: Push(CvectorIndex(Stack[-3], 2))
0x5de: Push(CvectorIndex(Stack[-3], 2))
0x5df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5e1: Return(); Pop(0)

0x5e2: PushEmpty()
0x5e3: Push(CvectorIndex(Stack[-1], 0))
0x5e4: Push(CvectorIndex(Stack[-2], 0))
0x5e5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e6: Push(CvectorIndex(Stack[-2], 2))
0x5e7: Push(CvectorIndex(Stack[-3], 2))
0x5e8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5ea: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x5eb: Return(); Pop(0)

0x5ec: PushEmpty()
0x5ed: PushEmpty(float, cvector, cvector)
0x5ee: Stack[-2] = Stack[-5]
0x5ef: Stack[-1] = Stack[-4]
0x5f0: Call2 0x5d9

0x5f1: Pop(2)
0x5f2: PushEmpty(float, cvector)
0x5f3: Stack[-1] = Stack[-5]
0x5f4: Call2 0x5e2

0x5f5: Pop(1)
0x5f6: PushEmpty(float, cvector)
0x5f7: Stack[-1] = Stack[-5]
0x5f8: Call2 0x5e2

0x5f9: Pop(1)
0x5fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5fb: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty(object, object)
0x5fe: @ CreateFloatVector(Stack[-1])
0x5ff: Pop(0)
0x600: @@ add(Stack[-3])
0x601: Pop(0)
0x602: Push((int) 15)
0x603: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x604: Pop(1)
0x605: Return(); Pop(2)

0x606: Stack[-1] = 0
0x607: PushEmpty(bool, bool)
0x608: @ IsPlayerActor(Stack[-3], Stack[-1])
0x609: Pop(0)
0x60a: Push(Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60c: Push("attack")
0x60d: @ PlayGlobalMusic(Stack[-1])
0x60e: Pop(1)
0x60f: Return(); Pop(2)

0x610: PushEmpty(object, object)
0x611: @ GetScene(Stack[-1])
0x612: Pop(0)
0x613: Push("battle")
0x614: PushEmpty(object)
0x615: Call2 0x5a8

0x616: Pop(0)
0x617: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x618: Pop(2)
0x619: Return(); Pop(2)

0x61a: Stack[-1] = 0
0x61b: PushEmpty(int, int)
0x61c: Push("branch")
0x61d: @ GetVariable(Stack[-1], Stack[-2])
0x61e: Pop(1)
0x61f: Stack[-3] = Stack[-1]
0x620: Return(); Pop(2)

0x621: PushEmpty()
0x622: PushEmpty(int)
0x623: Call2 0x61b

0x624: Pop(0)
0x625: Push((int) 1)
0x626: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x628: @ WorkWithCorpse(Stack[-1])
0x629: Pop(0)
0x62a: GOTO 0x62d

0x62b: @ Barter(Stack[-1])
0x62c: Pop(0)
0x62d: Return(); Pop(0)

0x62e: PushEmpty(int, bool, int, bool)
0x62f: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x630: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x631: Push("GenerateMoney: iMin > iMax")
0x632: @ Trace(Stack[-1])
0x633: Pop(1)
0x634: Return(); Pop(4)

0x635: Stack[-2] = (int) 0
0x636: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x637: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x638: Pop(0); Push(Stack[-5] - Stack[-6]);
0x639: @ irand(Stack[-3], Stack[-1])
0x63a: Pop(1)
0x63b: GOTO 0x640

0x63c: Push((int) 0)
0x63d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: Return(); Pop(4)

0x640: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x641: Push((int) 0)
0x642: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x644: Return(); Pop(4)

0x645: PushEmpty(int, string)
0x646: Stack[-1] = "Money"
0x647: Call2 0x69a

0x648: Pop(1)
0x649: Push((int) 0)
0x64a: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x64b: Pop(2)
0x64c: Return(); Pop(4)

0x64d: PushEmpty(object, int, bool, object, int, bool)
0x64e: @ CreateInvItem(Stack[-3])
0x64f: Pop(0)
0x650: @@ SetItemName(Stack[-7])
0x651: Pop(0)
0x652: Push("Organ")
0x653: Push((int) 1)
0x654: @@ SetProperty(Stack[-2], Stack[-1])
0x655: Pop(2)
0x656: @@ GetItemID(Stack[-2])
0x657: Pop(0)
0x658: Push((int) 0)
0x659: Push((int) 1)
0x65a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x65b: Pop(2)
0x65c: Return(); Pop(6)

0x65d: Stack[-3] = 0
0x65e: PushEmpty(int)
0x65f: Call2 0x61b

0x660: Pop(0)
0x661: Push((int) 1)
0x662: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: Return(); Pop(0)

0x665: PushEmpty(string)
0x666: Stack[-1] = "liver"
0x667: Call2 0x64d

0x668: Pop(1)
0x669: PushEmpty(string)
0x66a: Stack[-1] = "kidney"
0x66b: Call2 0x64d

0x66c: Pop(1)
0x66d: PushEmpty(string)
0x66e: Stack[-1] = "heart"
0x66f: Call2 0x64d

0x670: Pop(1)
0x671: PushEmpty(string)
0x672: Stack[-1] = "blood"
0x673: Call2 0x64d

0x674: Pop(1)
0x675: Return(); Pop(0)

0x676: PushEmpty(int, bool, int, bool)
0x677: Push((int) 0)
0x678: @ ClearSubContainer(Stack[-1])
0x679: Pop(1)
0x67a: PushEmpty(int, int)
0x67b: Stack[-2] = (int) 500
0x67c: Stack[-1] = (int) 1000
0x67d: Call2 0x62e

0x67e: Pop(2)
0x67f: PushEmpty(string, int, int, int)
0x680: Stack[-4] = "rifle_ammo"
0x681: Stack[-3] = (int) 1
0x682: Stack[-2] = (int) 3
0x683: Stack[-1] = (int) 3
0x684: Call2 0x519

0x685: Pop(4)
0x686: PushEmpty(string, int, int, int)
0x687: Stack[-4] = "rusk"
0x688: Stack[-3] = (int) 1
0x689: Stack[-2] = (int) 3
0x68a: Stack[-1] = (int) 2
0x68b: Call2 0x519

0x68c: Pop(4)
0x68d: PushEmpty(string, int, int)
0x68e: Stack[-3] = "bandage"
0x68f: Stack[-2] = (int) 1
0x690: Stack[-1] = (int) 6
0x691: Call2 0x50e

0x692: Pop(3)
0x693: PushEmpty(string, int, int)
0x694: Stack[-3] = "tourniquet"
0x695: Stack[-2] = (int) 1
0x696: Stack[-1] = (int) 6
0x697: Call2 0x50e

0x698: Pop(3)
0x699: Return(); Pop(4)

0x69a: PushEmpty(int, int)
0x69b: @ GetInvItemByName(Stack[-1], Stack[-3])
0x69c: Pop(0)
0x69d: Stack[-4] = Stack[-1]
0x69e: Return(); Pop(2)

0x69f: PushEmpty()
0x6a0: PushEmpty(object)
0x6a1: Stack[-1] = Stack[-2]
0x6a2: Push(-1, 0); TaskCall(0)
0x6a3: Call2 0x0

0x6a4: Pop(-1, 0); TaskReturn
0x6a5: Pop(1)
0x6a6: Return(); Pop(0)

0x6a7: PushEmpty()
0x6a8: PushEmpty(object, int, float)
0x6a9: Stack[-3] = Stack[-7]
0x6aa: Stack[-2] = Stack[-6]
0x6ab: Stack[-1] = Stack[-5]
0x6ac: Call2 0x4aa

0x6ad: Pop(3)
0x6ae: Return(); Pop(0)

0x6af: PushEmpty()
0x6b0: PushEmpty(object, int, float, cvector, cvector)
0x6b1: Stack[-5] = Stack[-11]
0x6b2: Stack[-4] = Stack[-10]
0x6b3: Stack[-3] = Stack[-9]
0x6b4: Stack[-2] = Stack[-7]
0x6b5: Stack[-1] = Stack[-6]
0x6b6: Call2 0x4ee

0x6b7: Pop(5)
0x6b8: Return(); Pop(0)

0x6b9: PushEmpty(float, float)
0x6ba: Push("health")
0x6bb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6bc: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6bd: Push("health")
0x6be: @ GetProperty(Stack[-1], Stack[-2])
0x6bf: Pop(1)
0x6c0: Push((int) 0)
0x6c1: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c3: @ SignalDeath(Stack[-4])
0x6c4: Pop(0)
0x6c5: Return(); Pop(2)

0x6c6: PushEmpty()
0x6c7: PushEmpty(bool, object)
0x6c8: Stack[-1] = Stack[-3]
0x6c9: Call2 0x3e3

0x6ca: Pop(1)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6cc: PushEmpty(object)
0x6cd: Call2 0x5a8

0x6ce: Pop(0)
0x6cf: Push((float)-0.13)
0x6d0: Push((bool) 1)
0x6d1: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: PushEmpty(object)
0x6d4: Stack[-1] = Stack[-2]
0x6d5: Call2 0x83e

0x6d6: Pop(1)
0x6d7: Return(); Pop(0)

0x6d8: PushEmpty(string, string)
0x6d9: PushEmpty(bool, object, string)
0x6da: Stack[-2] = Stack[-7]
0x6db: Stack[-1] = "class"
0x6dc: Call2 0x3e8

0x6dd: Pop(2)
0x6de: Pop(1); Push((bool) Stack[-1] == 0)
0x6df: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e0: Stack[-5] = (bool) 0
0x6e1: Return(); Pop(2)

0x6e2: Push("class")
0x6e3: @@ GetProperty(Stack[-1], Stack[-2])
0x6e4: Pop(1)
0x6e5: PushEmpty(bool)
0x6e6: Stack[-1] = (bool) 1
0x6e7: PushEmpty(bool)
0x6e8: Stack[-1] = (bool) 1
0x6e9: PushEmpty(bool)
0x6ea: Stack[-1] = (bool) 1
0x6eb: PushEmpty(bool)
0x6ec: Stack[-1] = (bool) 1
0x6ed: PushEmpty(bool)
0x6ee: Stack[-1] = (bool) 1
0x6ef: PushEmpty(bool)
0x6f0: Stack[-1] = (bool) 1
0x6f1: PushEmpty(bool)
0x6f2: Stack[-1] = (bool) 1
0x6f3: PushEmpty(bool)
0x6f4: Stack[-1] = (bool) 1
0x6f5: PushEmpty(bool)
0x6f6: Stack[-1] = (bool) 1
0x6f7: PushEmpty(bool)
0x6f8: Stack[-1] = (bool) 1
0x6f9: Push("patrol")
0x6fa: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6fb: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fc: Push("sanitar")
0x6fd: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6ff: Stack[-1] = (bool) 0
0x700: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x701: Push("soldier")
0x702: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x704: Stack[-1] = (bool) 0
0x705: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x706: Push("woman")
0x707: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: Stack[-1] = (bool) 0
0x70a: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70b: Push("wasted_girl")
0x70c: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70e: Stack[-1] = (bool) 0
0x70f: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x710: Push("vaxxabitka")
0x711: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x713: Stack[-1] = (bool) 0
0x714: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x715: Push("vaxxabit")
0x716: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: Stack[-1] = (bool) 0
0x719: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71a: Push("little_girl")
0x71b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71d: Stack[-1] = (bool) 0
0x71e: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x71f: Push("girl")
0x720: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x722: Stack[-1] = (bool) 0
0x723: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x724: Push("dohodyaga")
0x725: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x727: Stack[-1] = (bool) 0
0x728: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x729: Push("nudegirl")
0x72a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72b: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72c: Stack[-1] = (bool) 0
0x72d: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72e: Stack[-5] = (bool) 1
0x72f: Return(); Pop(2)

0x730: Push(Stack[-3])
0x731: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x732: Stack[-5] = (bool) 0
0x733: Return(); Pop(2)

0x734: Stack[-5] = (bool) 1
0x735: PushEmpty(bool)
0x736: Stack[-1] = (bool) 1
0x737: PushEmpty(bool)
0x738: Stack[-1] = (bool) 1
0x739: PushEmpty(bool)
0x73a: Stack[-1] = (bool) 1
0x73b: PushEmpty(bool)
0x73c: Stack[-1] = (bool) 1
0x73d: PushEmpty(bool)
0x73e: Stack[-1] = (bool) 1
0x73f: Push("worker")
0x740: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x742: Push("butcher")
0x743: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x745: Stack[-1] = (bool) 0
0x746: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x747: Push("boy")
0x748: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x749: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x74a: Stack[-1] = (bool) 0
0x74b: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74c: Push("unosha")
0x74d: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74f: Stack[-1] = (bool) 0
0x750: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x751: Push("wasted_male")
0x752: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x754: Stack[-1] = (bool) 0
0x755: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x756: Push("alkash")
0x757: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x759: Stack[-1] = (bool) 0
0x75a: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75b: Push("morlok")
0x75c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: Stack[-5] = (bool) 0
0x75f: Return(); Pop(2)

0x760: Push(GlobalVars[0])
0x761: PushEmpty(object)
0x762: Call2 0x5d3

0x763: Stack[-2] = Stack[-1]
0x764: Pop(1)
0x765: GlobalVars[0] = Stack[-1]; Pop(1)
0x766: Return(); Pop(0)

0x767: PushEmpty()
0x768: PushEmpty(object, bool)
0x769: Stack[-2] = Stack[-4]
0x76a: Stack[-1] = Stack[-3]
0x76b: Push(-2, 3); TaskCall(3)
0x76c: Call2 0x1c4

0x76d: Pop(-2, 3); TaskReturn
0x76e: Pop(2)
0x76f: @ ResetAAS()
0x770: Pop(0)
0x771: Return(); Pop(0)

0x772: PushEmpty(bool, bool)
0x773: Pop(0); Push((bool) Stack[-3] == 0)
0x774: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x775: Return(); Pop(2)

0x776: Push(GlobalVars[0])
0x777: @@ in(Stack[-2], Stack[-4])
0x778: Pop(1)
0x779: Pop(0); Push((bool) Stack[-1] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77b: Push(GlobalVars[0])
0x77c: @@ add(Stack[-4])
0x77d: Pop(1)
0x77e: PushEmpty(bool, object)
0x77f: Stack[-1] = Stack[-5]
0x780: Call2 0x3e3

0x781: Pop(1)
0x782: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x783: PushEmpty(object)
0x784: Call2 0x5a8

0x785: Pop(0)
0x786: Push((float)-0.07)
0x787: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x788: Pop(2)
0x789: Return(); Pop(2)

0x78a: PushEmpty()
0x78b: PushEmpty(object)
0x78c: Stack[-1] = Stack[-2]
0x78d: Call2 0x772

0x78e: Pop(1)
0x78f: PushEmpty(object, bool)
0x790: Stack[-2] = Stack[-3]
0x791: Stack[-1] = (bool) 1
0x792: Call2 0x767

0x793: Pop(2)
0x794: Return(); Pop(0)

0x795: PushEmpty(bool, bool)
0x796: Push(GlobalVars[0])
0x797: @@ in(Stack[-2], Stack[-4])
0x798: Pop(1)
0x799: Push(Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79b: PushEmpty(object, bool)
0x79c: Stack[-2] = Stack[-5]
0x79d: Stack[-1] = (bool) 1
0x79e: Call2 0x767

0x79f: Pop(2)
0x7a0: GOTO 0x7a9

0x7a1: PushEmpty(object)
0x7a2: Stack[-1] = Stack[-4]
0x7a3: Push(-1, 2); TaskCall(2)
0x7a4: Call2 0x11d

0x7a5: Pop(-1, 2); TaskReturn
0x7a6: Pop(1)
0x7a7: @ ResetAAS()
0x7a8: Pop(0)
0x7a9: Return(); Pop(2)

0x7aa: PushEmpty()
0x7ab: PushEmpty(float, object)
0x7ac: Stack[-1] = Stack[-3]
0x7ad: Call2 0x3db

0x7ae: Pop(1)
0x7af: Push((float)40000.0)
0x7b0: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty(float, string, float, float, string, float)
0x7b3: PushEmpty(bool, object)
0x7b4: Stack[-1] = Stack[-9]
0x7b5: Call2 0x466

0x7b6: Pop(1)
0x7b7: Pop(1); Push((bool) Stack[-1] == 0)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b9: Stack[-8] = (bool) 0
0x7ba: Return(); Pop(6)

0x7bb: PushEmpty(bool, object)
0x7bc: Stack[-1] = Stack[-9]
0x7bd: Call2 0x3e3

0x7be: Pop(1)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c0: Push("reputation")
0x7c1: @@ GetProperty(Stack[-1], Stack[-4])
0x7c2: Pop(1)
0x7c3: Push((float)0.33)
0x7c4: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x7c5: Return(); Pop(6)

0x7c6: PushEmpty(bool, object, string)
0x7c7: Stack[-2] = Stack[-10]
0x7c8: Stack[-1] = "class"
0x7c9: Call2 0x3e8

0x7ca: Pop(2)
0x7cb: Pop(1); Push((bool) Stack[-1] == 0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: Stack[-8] = (bool) 0
0x7ce: Return(); Pop(6)

0x7cf: Push("class")
0x7d0: @@ GetProperty(Stack[-1], Stack[-3])
0x7d1: Pop(1)
0x7d2: PushEmpty(bool)
0x7d3: Stack[-1] = (bool) 1
0x7d4: PushEmpty(bool)
0x7d5: Stack[-1] = (bool) 1
0x7d6: Push("bomber")
0x7d7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d9: Push("hunter")
0x7da: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7dc: Stack[-1] = (bool) 0
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7de: Push("grabitel")
0x7df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Stack[-1] = (bool) 0
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e3: Stack[-8] = (bool) 1
0x7e4: Return(); Pop(6)

0x7e5: PushEmpty(bool, object, string)
0x7e6: Stack[-2] = Stack[-10]
0x7e7: Stack[-1] = "disease"
0x7e8: Call2 0x3e8

0x7e9: Pop(2)
0x7ea: Pop(1); Push((bool) Stack[-1] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ec: Stack[-8] = (bool) 0
0x7ed: Return(); Pop(6)

0x7ee: PushEmpty(bool)
0x7ef: Stack[-1] = (bool) 1
0x7f0: PushEmpty(bool, string)
0x7f1: Stack[-1] = Stack[-5]
0x7f2: Call2 0x551

0x7f3: Pop(1)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f5: Push("dog")
0x7f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f8: Stack[-1] = (bool) 0
0x7f9: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fa: Push("disease")
0x7fb: @@ GetProperty(Stack[-1], Stack[-2])
0x7fc: Pop(1)
0x7fd: Push((int) 0)
0x7fe: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x7ff: Return(); Pop(6)

0x800: Stack[-8] = (bool) 0
0x801: Return(); Pop(6)

0x802: PushEmpty(bool, bool)
0x803: PushEmpty(bool, object)
0x804: Stack[-1] = Stack[-5]
0x805: Call2 0x466

0x806: Pop(1)
0x807: Pop(1); Push((bool) Stack[-1] == 0)
0x808: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x809: Stack[-4] = (bool) 0
0x80a: Return(); Pop(2)

0x80b: Push(GlobalVars[0])
0x80c: @@ in(Stack[-2], Stack[-4])
0x80d: Pop(1)
0x80e: Push(Stack[-1])
0x80f: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x810: Stack[-4] = (bool) 1
0x811: Return(); Pop(2)

0x812: PushEmpty(bool, object)
0x813: Stack[-1] = Stack[-5]
0x814: Call2 0x7b2

0x815: Stack[-6] = Stack[-2]
0x816: Pop(2)
0x817: Return(); Pop(2)

0x818: PushEmpty()
0x819: PushEmpty(object)
0x81a: Stack[-1] = Stack[-2]
0x81b: Call2 0x838

0x81c: Pop(1)
0x81d: Return(); Pop(0)

0x81e: PushEmpty(bool, bool)
0x81f: PushEmpty(bool, object, bool)
0x820: Stack[-2] = Stack[-7]
0x821: Stack[-1] = !Stack[-6]; Pop(0);
0x822: Call2 0x6d8

0x823: Pop(2)
0x824: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x825: @ CanSee(Stack[-1], Stack[-5])
0x826: Pop(0)
0x827: PushEmpty(bool)
0x828: Stack[-1] = (bool) 1
0x829: Push(Stack[-2])
0x82a: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82b: PushEmpty(float, object)
0x82c: Stack[-1] = Stack[-8]
0x82d: Call2 0x3db

0x82e: Pop(1)
0x82f: Push((float)490000.0)
0x830: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x831: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x832: Stack[-1] = (bool) 0
0x833: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x834: Stack[-6] = (bool) 1
0x835: Return(); Pop(2)

0x836: Stack[-6] = (bool) 0
0x837: Return(); Pop(2)

0x838: PushEmpty()
0x839: PushEmpty(object)
0x83a: Stack[-1] = Stack[-2]
0x83b: Call2 0x795

0x83c: Pop(1)
0x83d: Return(); Pop(0)

0x83e: PushEmpty()
0x83f: PushEmpty(object)
0x840: Stack[-1] = Stack[-2]
0x841: Call2 0x69f

0x842: Pop(1)
0x843: Return(); Pop(0)

