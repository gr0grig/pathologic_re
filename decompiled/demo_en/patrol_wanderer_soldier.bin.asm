GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	all
	head
	GetPosition
	GetPFPosition
	walk
	run
	@GetAttackDistance
	GetAttackDistance
	attack
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
	idle
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
	tourniquet
	bandage
	packet
	bottle_water
	rusk
	hook
	watch
	alpha_pills
	beta_pills
	gamma_pills
	revolver_ammo
	rifle_ammo
	patrol_mark
	fresh_meat
	dried_meat
	smoked_meat
	vegetables
	samopal_ammo
	class
	patrol
	sanitar
	soldier
	woman
	wasted_girl
	vaxxabitka
	vaxxabit
	little_girl
	dohodyaga
	nudegirl
	worker
	butcher
	boy
	unosha
	wasted_male
	alkash
	morlok
	in
	prc
	reputation
	bomber
	hunter
	grabitel

Import:
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
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
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	AddItem (3 args)
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	ReportReputationChange (3 args)
	ReportReputationChange (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xb Vars = (object)
		EVENT_1 Op = 0xd Vars = (object)
		EVENT_3 Op = 0x1b Vars = (object)
		EVENT_17 Op = 0x29 Vars = (object)
		EVENT_30 Op = 0x3d Vars = (object, object, bool)
		EVENT_10 Op = 0x8a Vars = (object)
		EVENT_28 Op = 0x8e Vars = ()
		EVENT_41 Op = 0x98 Vars = (object)
	GTASK_1  Params = 0
		EVENT_0 Op = 0xa9 Vars = (object)
		EVENT_1 Op = 0xae Vars = (object)
		EVENT_3 Op = 0xbc Vars = (object)
		EVENT_17 Op = 0xca Vars = (object)
		EVENT_30 Op = 0xde Vars = (object, object, bool)
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x141 Vars = (object)
		EVENT_30 Op = 0x147 Vars = (object, object, bool)
		EVENT_7 Op = 0x180 Vars = (int)
		EVENT_1 Op = 0x19b Vars = (object)
		EVENT_2 Op = 0x1aa Vars = (object)
		EVENT_10 Op = 0x230 Vars = (object)
		EVENT_41 Op = 0x23b Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x25d Vars = (object)
		EVENT_30 Op = 0x263 Vars = (object, object, bool)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x524 Vars = (object)
		EVENT_22 Op = 0x5a3 Vars = (object, int, float, float)
		EVENT_16 Op = 0x5a5 Vars = (object, string)
		EVENT_41 Op = 0x5a7 Vars = (object)

Events:
EVENT_22 Op = 0x9f8 Vars = (object, int, float, float)
EVENT_43 Op = 0xa00 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xa0a Vars = (object, string)
EVENT_42 Op = 0xa17 Vars = (object, string)
EVENT_41 Op = 0xa1e Vars = (object)

0x0: PushEmpty()
0x1: Call2 0x991

0x2: Pop(0)
0x3: PushEmpty()
0x4: Call2 0x8ca

0x5: Pop(0)
0x6: PushEmpty()
0x7: Call2 0x4a

0x8: Pop(0)
0x9: GOTO 0x6

0xa: Return(); Pop(0)

0xb: PushEmpty()
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: PushEmpty(bool, object)
0xf: Stack[-1] = Stack[-3]
0x10: Call2 0x9a5

0x11: Pop(1)
0x12: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x13: PushEmpty()
0x14: Call2 0x91

0x15: Pop(0)
0x16: PushEmpty(object)
0x17: Stack[-1] = Stack[-2]
0x18: Call2 0x9ac

0x19: Pop(1)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: PushEmpty(bool, object)
0x1d: Stack[-1] = Stack[-3]
0x1e: Call2 0x998

0x1f: Pop(1)
0x20: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x21: PushEmpty()
0x22: Call2 0x91

0x23: Pop(0)
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call2 0x99f

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call2 0x649

0x2d: Pop(1)
0x2e: Pop(1); Push((bool) Stack[-1] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: PushEmpty(object)
0x31: Stack[-1] = Stack[-2]
0x32: Call2 0x9bd

0x33: Pop(1)
0x34: Return(); Pop(0)

0x35: PushEmpty()
0x36: Call2 0x91

0x37: Pop(0)
0x38: PushEmpty(object)
0x39: Stack[-1] = Stack[-2]
0x3a: Call2 0x9d5

0x3b: Pop(1)
0x3c: Return(); Pop(0)

0x3d: PushEmpty()
0x3e: PushEmpty(bool, object, object, bool)
0x3f: Stack[-3] = Stack[-7]
0x40: Stack[-2] = Stack[-6]
0x41: Stack[-1] = Stack[-5]
0x42: Call2 0xa24

0x43: Pop(3)
0x44: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x45: PushEmpty(object)
0x46: Stack[-1] = Stack[-4]
0x47: Call2 0x29

0x48: Pop(1)
0x49: Return(); Pop(0)

0x4a: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x4b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x4d: Push((float)0.5)
0x4e: @ rand(Stack[-7], Stack[-1])
0x4f: Pop(1)
0x50: @ Sleep(Stack[-6])
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x54: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x56: @ GetPosition(Stack[-4])
0x57: Pop(0)
0x58: PushEmpty(float)
0x59: Call2 0x85

0x5a: Pop(0)
0x5b: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x5c: Pop(1)
0x5d: Push(Stack[-3])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: GOTO 0x64

0x60: Push((int) 1)
0x61: @ Sleep(Stack[-1])
0x62: Pop(1)
0x63: GOTO 0x56

0x64: GOTO 0x66

0x65: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x66: PushEmpty(object, cvector)
0x67: Stack[-1] = Stack[-7]
0x68: Call2 0xa3

0x69: Stack[-4] = Stack[-2]
0x6a: Pop(2)
0x6b: Pop(0); Push(( Stack[-2] != 0 )
0x6c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x6d: @ RotatePath(Stack[-2], Stack[-1])
0x6e: Pop(0)
0x6f: Push(Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x71: PushEmpty(bool)
0x72: Call2 0xa1

0x73: Pop(0)
0x74: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: Stack[-2] = 0
0x77: Push(Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: PushEmpty()
0x7a: Push(-0, 0); TaskCall(1)
0x7b: Call2 0xeb

0x7c: Pop(-0, 0); TaskReturn
0x7d: Pop(0)
0x7e: GOTO 0x82

0x7f: Push((int) 1)
0x80: @ Sleep(Stack[-1])
0x81: Pop(1)
0x82: Stack[-2] = 0
0x83: GOTO 0x52

0x84: Return(); Pop(12)

0x85: PushEmpty(float, float)
0x86: @ GetCameraFarDistance(Stack[-1])
0x87: Pop(0)
0x88: Stack[-3] = Stack[-1]
0x89: Return(); Pop(2)

0x8a: PushEmpty()
0x8b: @ RequestClearPath(Stack[-1])
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: @ Stop()
0x8f: Pop(0)
0x90: Return(); Pop(0)

0x91: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x92: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x93: @ Stop()
0x94: Pop(0)
0x95: @ StopGroup0()
0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty()
0x9a: Call2 0x91

0x9b: Pop(0)
0x9c: PushEmpty(object)
0x9d: Stack[-1] = Stack[-2]
0x9e: Call2 0xa1e

0x9f: Pop(1)
0xa0: Return(); Pop(0)

0xa1: Stack[-1] = (bool) 0
0xa2: Return(); Pop(0)

0xa3: PushEmpty(object, object)
0xa4: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xa5: Pop(0)
0xa6: Stack[-4] = Stack[-1]
0xa7: Return(); Pop(2)

0xa8: Stack[-1] = 0
0xa9: PushEmpty()
0xaa: PushEmpty()
0xab: Call2 0x13c

0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[-3]
0xb1: Call2 0x9a5

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0x13c

0xb6: Pop(0)
0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[-2]
0xb9: Call2 0x9ac

0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object)
0xbe: Stack[-1] = Stack[-3]
0xbf: Call2 0x998

0xc0: Pop(1)
0xc1: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x13c

0xc4: Pop(0)
0xc5: PushEmpty(object)
0xc6: Stack[-1] = Stack[-2]
0xc7: Call2 0x99f

0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[-3]
0xcd: Call2 0x649

0xce: Pop(1)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object)
0xd2: Stack[-1] = Stack[-2]
0xd3: Call2 0x9bd

0xd4: Pop(1)
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Call2 0x13c

0xd8: Pop(0)
0xd9: PushEmpty(object)
0xda: Stack[-1] = Stack[-2]
0xdb: Call2 0x9d5

0xdc: Pop(1)
0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: PushEmpty(bool, object, object, bool)
0xe0: Stack[-3] = Stack[-7]
0xe1: Stack[-2] = Stack[-6]
0xe2: Stack[-1] = Stack[-5]
0xe3: Call2 0xa24

0xe4: Pop(3)
0xe5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe6: PushEmpty(object)
0xe7: Stack[-1] = Stack[-4]
0xe8: Call2 0xca

0xe9: Pop(1)
0xea: Return(); Pop(0)

0xeb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xec: @ WaitForAnimEnd()
0xed: Pop(0)
0xee: PushEmpty(bool)
0xef: Call2 0x6ea

0xf0: Pop(0)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Return(); Pop(14)

0xf4: PushEmpty(int)
0xf5: Call2 0x798

0xf6: Stack[-8] = Stack[-1]
0xf7: Pop(1)
0xf8: Stack[-6] = (int) 0
0xf9: PushEmpty(bool)
0xfa: Stack[-1] = (bool) 0
0xfb: Push((int) 5)
0xfc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(bool)
0xff: Call2 0x6ea

0x100: Pop(0)
0x101: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x102: Stack[-1] = (bool) 1
0x103: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x104: Push((int) 3)
0x105: @ irand(Stack[-6], Stack[-1])
0x106: Pop(1)
0x107: Push((int) 0)
0x108: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10a: Push(Stack[-7])
0x10b: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10c: @ irand(Stack[-4], Stack[-7])
0x10d: Pop(0)
0x10e: Push("all")
0x10f: PushEmpty(string, int)
0x110: Stack[-1] = Stack[-7]
0x111: Call2 0x791

0x112: Pop(1)
0x113: @ PlayAnimation(Stack[-2], Stack[-1])
0x114: Pop(2)
0x115: @ WaitForAnimEnd(Stack[-3])
0x116: Pop(0)
0x117: Pop(0); Push((bool) Stack[-3] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: GOTO 0x137

0x11a: GOTO 0x12c

0x11b: Push((int) 1)
0x11c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11e: Push((int) 4)
0x11f: @ rand(Stack[-3], Stack[-1])
0x120: Pop(1)
0x121: Push((int) 1)
0x122: Pop(1); Push(Stack[-3] + Stack[-1]);
0x123: @ Sleep(Stack[-1], Stack[-2])
0x124: Pop(1)
0x125: Pop(0); Push((bool) Stack[-1] == 0)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: GOTO 0x137

0x128: GOTO 0x12c

0x129: Push(Stack[-6])
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: GOTO 0x137

0x12c: PushEmpty(bool)
0x12d: Call2 0x13a

0x12e: Pop(0)
0x12f: Pop(1); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: GOTO 0x137

0x132: @ ResetAAS()
0x133: Pop(0)
0x134: Push((int) 1)
0x135: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x136: GOTO 0xf9

0x137: @ ResetAAS()
0x138: Pop(0)
0x139: Return(); Pop(14)

0x13a: Stack[-1] = (bool) 1
0x13b: Return(); Pop(0)

0x13c: @ StopAnimation()
0x13d: Pop(0)
0x13e: @ StopGroup0()
0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: PushEmpty()
0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[-2]
0x144: Call2 0x9bd

0x145: Pop(1)
0x146: Return(); Pop(0)

0x147: PushEmpty()
0x148: PushEmpty(bool, object, object, bool)
0x149: Stack[-3] = Stack[-7]
0x14a: Stack[-2] = Stack[-6]
0x14b: Stack[-1] = Stack[-5]
0x14c: Call2 0xa24

0x14d: Pop(4)
0x14e: Return(); Pop(0)

0x14f: PushEmpty(bool, bool, bool, bool)
0x150: PushEmpty(object)
0x151: Stack[-1] = Stack[-10]
0x152: Call2 0x77d

0x153: Pop(1)
0x154: Push((int) 1)
0x155: Push((int) 5)
0x156: @ SetTimer(Stack[-2], Stack[-1])
0x157: Pop(2)
0x158: @ CanSee(Stack[-2], Stack[-9])
0x159: Pop(0)
0x15a: Push(Stack[-2])
0x15b: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x15d: PushEmpty(object)
0x15e: Stack[-1] = Stack[-10]
0x15f: Call2 0x6ef

0x160: Pop(1)
0x161: GOTO 0x163

0x162: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x163: PushEmpty(bool, object)
0x164: Stack[-1] = Stack[-11]
0x165: Call2 0x5c6

0x166: Pop(1)
0x167: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x168: PushEmpty(object)
0x169: Call2 0x73d

0x16a: Pop(0)
0x16b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x16c: Pop(1)
0x16d: PushEmpty(bool, object, float, float, bool, bool)
0x16e: Stack[-5] = Stack[-15]
0x16f: Stack[-4] = Stack[-14]
0x170: Stack[-3] = Stack[-13]
0x171: Stack[-2] = Stack[-12]
0x172: Stack[-1] = Stack[-11]
0x173: Call2 0x1b8

0x174: Stack[-7] = Stack[-6]
0x175: Pop(6)
0x176: Push( Stack[2 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x178: Push("head")
0x179: @ UnlookAsync(Stack[-1])
0x17a: Pop(1)
0x17b: Push((int) 1)
0x17c: @ KillTimer(Stack[-1])
0x17d: Pop(1)
0x17e: Stack[-10] = Stack[-1]
0x17f: Return(); Pop(4)

0x180: PushEmpty()
0x181: Push((int) 1)
0x182: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x77d

0x187: Pop(1)
0x188: GOTO 0x18d

0x189: PushEmpty(int)
0x18a: Stack[-1] = Stack[-2]
0x18b: Call2 0x21e

0x18c: Pop(1)
0x18d: Return(); Pop(0)

0x18e: Push((int) 1)
0x18f: @ KillTimer(Stack[-1])
0x190: Pop(1)
0x191: Push( Stack[2 + Tasks[-1].StackPointer] )
0x192: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x193: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x194: Push("head")
0x195: @ UnlookAsync(Stack[-1])
0x196: Pop(1)
0x197: PushEmpty()
0x198: Call2 0x234

0x199: Pop(0)
0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 0
0x19e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1a5: PushEmpty(object)
0x1a6: Stack[-1] = Stack[-2]
0x1a7: Call2 0x6ef

0x1a8: Pop(1)
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1af: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Stack[-1] = (bool) 1
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b4: Push("head")
0x1b5: @ UnlookAsync(Stack[-1])
0x1b6: Pop(1)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x1b9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1ba: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1bb: Stack[-7] = Stack[-17]
0x1bc: PushEmpty(bool, object)
0x1bd: Stack[-1] = Stack[-23]
0x1be: Call2 0x244

0x1bf: Pop(1)
0x1c0: Pop(1); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-22] = (bool) 0
0x1c3: Return(); Pop(16)

0x1c4: @@ GetPosition(Stack[-5])
0x1c5: Pop(0)
0x1c6: @ GetPosition(Stack[-4])
0x1c7: Pop(0)
0x1c8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1c9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1ca: PushEmpty(bool)
0x1cb: Stack[-1] = (bool) 0
0x1cc: Push((int) 0)
0x1cd: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cf: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1d0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = (bool) 1
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d4: @ Stop()
0x1d5: Pop(0)
0x1d6: Stack[-22] = (bool) 0
0x1d7: Return(); Pop(16)

0x1d8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1d9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x1db: @@ GetPFPosition(Stack[-5])
0x1dc: Pop(0)
0x1dd: @ FindPathTo(Stack[-1], Stack[-5])
0x1de: Pop(0)
0x1df: Pop(0); Push(( Stack[-1] != 0 )
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e1: Stack[-6] = Stack[-1]
0x1e2: Stack[-1] = 0
0x1e3: Pop(0); Push(( Stack[-6] != 0 )
0x1e4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1e5: Push(Stack[-7])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e7: Stack[-7] = (bool) 0
0x1e8: @ RotatePath(Stack[-6], Stack[-8])
0x1e9: Pop(0)
0x1ea: Pop(0); Push((bool) Stack[-8] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: GOTO 0x21c

0x1ed: Push((int) 0)
0x1ee: Push((float)0.3)
0x1ef: @ SetTimer(Stack[-2], Stack[-1])
0x1f0: Pop(2)
0x1f1: PushEmpty(string)
0x1f2: Call2 0x24b

0x1f3: Pop(0)
0x1f4: PushEmpty(string)
0x1f5: Call2 0x24d

0x1f6: Pop(0)
0x1f7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x1f8: Pop(2)
0x1f9: Pop(0); Push((bool) Stack[-8] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1fc: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fd: Stack[-6] = 0
0x1fe: GOTO 0x21c

0x1ff: GOTO 0x201

0x200: GOTO 0x21b

0x201: GOTO 0x203

0x202: Stack[-6] = 0
0x203: GOTO 0x214

0x204: Push((int) 0)
0x205: @ KillTimer(Stack[-1])
0x206: Pop(1)
0x207: Push((float)0.5)
0x208: @ Sleep(Stack[-1], Stack[-9])
0x209: Pop(1)
0x20a: Pop(0); Push((bool) Stack[-8] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x20d: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20e: Stack[-6] = 0
0x20f: GOTO 0x21c

0x210: Push((int) 0)
0x211: Push((float)0.3)
0x212: @ SetTimer(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: Stack[-1] = 0
0x215: GOTO 0x21a

0x216: Push((int) 0)
0x217: @ KillTimer(Stack[-1])
0x218: Pop(1)
0x219: GOTO 0x21c

0x21a: Stack[-6] = 0
0x21b: GOTO 0x1bc

0x21c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x21d: Return(); Pop(16)

0x21e: PushEmpty()
0x21f: Push((int) 0)
0x220: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Return(); Pop(0)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x244

0x226: Pop(1)
0x227: Pop(1); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x22a: Push((int) 0)
0x22b: @ KillTimer(Stack[-1])
0x22c: Pop(1)
0x22d: @ Stop()
0x22e: Pop(0)
0x22f: Return(); Pop(0)

0x230: PushEmpty()
0x231: @ RequestClearPath(Stack[-1])
0x232: Pop(0)
0x233: Return(); Pop(0)

0x234: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x235: Push((int) 0)
0x236: @ KillTimer(Stack[-1])
0x237: Pop(1)
0x238: @ Stop()
0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty()
0x23c: PushEmpty()
0x23d: Call2 0x18e

0x23e: Pop(0)
0x23f: PushEmpty(object)
0x240: Stack[-1] = Stack[-2]
0x241: Call2 0xa1e

0x242: Pop(1)
0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[-3]
0x247: Call2 0x649

0x248: Stack[-4] = Stack[-2]
0x249: Pop(2)
0x24a: Return(); Pop(0)

0x24b: Stack[-1] = "walk"
0x24c: Return(); Pop(0)

0x24d: Stack[-1] = "run"
0x24e: Return(); Pop(0)

0x24f: PushEmpty()
0x250: PushEmpty(object, bool, float)
0x251: Stack[-3] = Stack[-5]
0x252: Stack[-2] = Stack[-4]
0x253: Stack[-1] = (float) 180.0
0x254: Call2 0x26b

0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: PushEmpty()
0x258: Stack[-3] = (float) 0.1
0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: Stack[-3] = (int) 0
0x25c: Return(); Pop(0)

0x25d: PushEmpty()
0x25e: PushEmpty(object)
0x25f: Stack[-1] = Stack[-2]
0x260: Call2 0x9bd

0x261: Pop(1)
0x262: Return(); Pop(0)

0x263: PushEmpty()
0x264: PushEmpty(bool, object, object, bool)
0x265: Stack[-3] = Stack[-7]
0x266: Stack[-2] = Stack[-6]
0x267: Stack[-1] = Stack[-5]
0x268: Call2 0xa24

0x269: Pop(4)
0x26a: Return(); Pop(0)

0x26b: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x26c: PushEmpty()
0x26d: Call2 0x350

0x26e: Pop(0)
0x26f: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x270: Push("@GetAttackDistance")
0x271: Push((int) 1)
0x272: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: @@ GetAttackDistance(Stack[-11])
0x275: Pop(0)
0x276: Push((int) 50)
0x277: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x278: GOTO 0x27a

0x279: Stack[-11] = Stack[-23]
0x27a: Push((int) 150)
0x27b: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-11] = (int) 150
0x27e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x27f: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x280: @ IsPlayerActor(Stack[-0], Stack[-8])
0x281: Pop(0)
0x282: Push(Stack[-8])
0x283: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x284: Push("attack")
0x285: @ PlayGlobalMusic(Stack[-1])
0x286: Pop(1)
0x287: PushEmpty(object)
0x288: Call2 0x73d

0x289: Pop(0)
0x28a: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x28b: Pop(1)
0x28c: Push(Stack[-24])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-7] = (bool) 0
0x28f: GOTO 0x291

0x290: Stack[-7] = (bool) 1
0x291: Push((float)300.0)
0x292: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x293: PushEmpty(bool)
0x294: Stack[-1] = (bool) 0
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x297: Call2 0x649

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-1] = (bool) 1
0x29d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x29e: PushEmpty()
0x29f: Call2 0x4ed

0x2a0: Pop(0)
0x2a1: @@ GetPFPosition(Stack[-10])
0x2a2: Pop(0)
0x2a3: @ GetPFPosition(Stack[-9])
0x2a4: Pop(0)
0x2a5: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2a6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2a7: Pop(0); Push(Stack[-6] * Stack[-6]);
0x2a8: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2aa: PushEmpty(bool, object, float, float, bool, bool)
0x2ab: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Stack[-4] = Stack[-17]
0x2ad: Stack[-3] = (float) 3000.0
0x2ae: Stack[-2] = (bool) 1
0x2af: Stack[-1] = (bool) 0
0x2b0: Push(-6, 3); TaskCall(2)
0x2b1: Call2 0x14f

0x2b2: Pop(-6, 3); TaskReturn
0x2b3: Pop(5)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x33f

0x2b7: Stack[-7] = (bool) 0
0x2b8: GOTO 0x33e

0x2b9: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2ba: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x2bc: @@ GetPFPosition(Stack[-3])
0x2bd: Pop(0)
0x2be: @ CanReachByPF(Stack[-2], Stack[-3])
0x2bf: Pop(0)
0x2c0: Pop(0); Push((bool) Stack[-2] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c2: PushEmpty(bool, object, float, float, bool, bool)
0x2c3: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2c4: Stack[-4] = Stack[-17]
0x2c5: Stack[-3] = (float) 3000.0
0x2c6: Stack[-2] = (bool) 1
0x2c7: Stack[-1] = (bool) 0
0x2c8: Push(-6, 3); TaskCall(2)
0x2c9: Call2 0x14f

0x2ca: Pop(-6, 3); TaskReturn
0x2cb: Pop(5)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x33f

0x2cf: Stack[-7] = (bool) 0
0x2d0: GOTO 0x293

0x2d1: Pop(0); Push((bool) Stack[-7] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2d3: PushEmpty(object)
0x2d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d5: Call2 0x6df

0x2d6: Pop(1)
0x2d7: Push("all")
0x2d8: Push("attack_on")
0x2d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: @ WaitForAnimEnd()
0x2dc: Pop(0)
0x2dd: PushEmpty()
0x2de: Call2 0x4ed

0x2df: Pop(0)
0x2e0: @ StopAsync()
0x2e1: Pop(0)
0x2e2: Stack[-7] = (bool) 1
0x2e3: PushEmpty(bool, object)
0x2e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e5: Call2 0x649

0x2e6: Pop(1)
0x2e7: Pop(1); Push((bool) Stack[-1] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x33f

0x2ea: @ rand(Stack[-1])
0x2eb: Pop(0)
0x2ec: PushEmpty(bool)
0x2ed: Stack[-1] = (bool) 1
0x2ee: Push((float)0.6)
0x2ef: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: PushEmpty(bool)
0x2f2: Call2 0x4c2

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = (bool) 0
0x2f6: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f7: @ Face(Stack[-0])
0x2f8: Pop(0)
0x2f9: PushEmpty()
0x2fa: Call2 0x4f4

0x2fb: Pop(0)
0x2fc: Push("all")
0x2fd: Push("attack_stay")
0x2fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: PushEmpty(bool, float)
0x301: Stack[-1] = Stack[-25]
0x302: Call2 0x43e

0x303: Pop(2)
0x304: @ StopAsync()
0x305: Pop(0)
0x306: GOTO 0x335

0x307: @ Face(Stack[-0])
0x308: Pop(0)
0x309: Push("all")
0x30a: Push("fjump")
0x30b: @ PlayAnimation(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: @ WaitForAnimEnd()
0x30e: Pop(0)
0x30f: PushEmpty()
0x310: Call2 0x4ed

0x311: Pop(0)
0x312: Push(CVector(0.0, 0.0, 0.0))
0x313: @ SetSpeed(Stack[-1])
0x314: Pop(1)
0x315: @ Stop()
0x316: Pop(0)
0x317: @ StopAsync()
0x318: Pop(0)
0x319: PushEmpty(bool)
0x31a: Call2 0x4c2

0x31b: Pop(0)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x31e: PushEmpty(bool, object)
0x31f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x320: Call2 0x649

0x321: Pop(1)
0x322: Pop(1); Push((bool) Stack[-1] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: GOTO 0x33f

0x325: @@ GetPFPosition(Stack[-10])
0x326: Pop(0)
0x327: @ GetPFPosition(Stack[-9])
0x328: Pop(0)
0x329: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x32a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x32b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x32c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32e: PushEmpty(bool, float)
0x32f: Stack[-1] = Stack[-25]
0x330: Call2 0x39a

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x33f

0x335: GOTO 0x33e

0x336: PushEmpty(bool, float)
0x337: Stack[-1] = Stack[-25]
0x338: Call2 0x39a

0x339: Pop(1)
0x33a: Pop(1); Push((bool) Stack[-1] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: GOTO 0x33f

0x33d: Stack[-7] = (bool) 1
0x33e: GOTO 0x293

0x33f: @ WaitForAnimEnd()
0x340: Pop(0)
0x341: Push( Stack[3 + Tasks[-1].StackPointer] )
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: Return(); Pop(22)

0x344: Push("all")
0x345: Push("attack_off")
0x346: @ PlayAnimation(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: @ WaitForAnimEnd()
0x349: Pop(0)
0x34a: Push(Stack[-8])
0x34b: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34c: Push((float)2.0)
0x34d: @ Sleep(Stack[-1])
0x34e: Pop(1)
0x34f: Return(); Pop(22)

0x350: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x351: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x352: Push("all")
0x353: Push("attack_begin")
0x354: Push((int) 1)
0x355: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x356: Pop(2); Push(Stack[-2] + Stack[-1]);
0x357: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x358: Pop(2)
0x359: Pop(0); Push((bool) Stack[-3] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: GOTO 0x35f

0x35c: Push((int) 1)
0x35d: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x35e: GOTO 0x352

0x35f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x360: Push("attack")
0x361: Push((int) 1)
0x362: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x363: Pop(2); Push(Stack[-2] + Stack[-1]);
0x364: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x365: Pop(1)
0x366: Pop(0); Push((bool) Stack[-2] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36c

0x369: Push((int) 1)
0x36a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x36b: GOTO 0x360

0x36c: Push("all")
0x36d: Push("bjump")
0x36e: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(2)
0x370: Push(CvectorIndex(Stack[-1], 2))
0x371: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x372: Return(); Pop(6)

0x373: PushEmpty(object, float, float, object, float, float)
0x374: Push((float)0.9)
0x375: Pop(1); Push(Stack[-9] * Stack[-1]);
0x376: @ GetVictim(Stack[-1], Stack[-4])
0x377: Pop(1)
0x378: @ ReportAttack(Stack[-0])
0x379: Pop(0)
0x37a: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x37b: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x37c: PushEmpty(float, object, int)
0x37d: Stack[-2] = Stack[-6]
0x37e: Stack[-1] = Stack[-10]
0x37f: Call2 0x257

0x380: Stack[-5] = Stack[-3]
0x381: Pop(3)
0x382: PushEmpty(float, object, float, int)
0x383: Stack[-3] = Stack[-7]
0x384: Stack[-2] = Stack[-6]
0x385: PushEmpty(int, object, int)
0x386: Stack[-2] = Stack[-10]
0x387: Stack[-1] = Stack[-14]
0x388: Call2 0x25a

0x389: Stack[-4] = Stack[-3]
0x38a: Pop(3)
0x38b: Call2 0x5d7

0x38c: Stack[-5] = Stack[-4]
0x38d: Pop(4)
0x38e: PushEmpty(int)
0x38f: Call2 0x4f2

0x390: Pop(0)
0x391: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x392: Pop(1)
0x393: PushEmpty(object, float)
0x394: Stack[-2] = Stack[-5]
0x395: Stack[-1] = Stack[-3]
0x396: Call2 0x4f9

0x397: Pop(2)
0x398: Return(); Pop(6)

0x399: Stack[-3] = 0
0x39a: PushEmpty(int, bool, int, string, int, bool, int, string)
0x39b: PushEmpty()
0x39c: Call2 0x4ed

0x39d: Pop(0)
0x39e: @ irand(Stack[-4], Stack[-1])
0x39f: Pop(0)
0x3a0: Push((int) 1)
0x3a1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a2: @ Face(Stack[-0])
0x3a3: Pop(0)
0x3a4: Push((bool) 1)
0x3a5: @ SetAttackState(Stack[-1])
0x3a6: Pop(1)
0x3a7: PushEmpty()
0x3a8: Call2 0x786

0x3a9: Pop(0)
0x3aa: Push("all")
0x3ab: Push("attack_begin")
0x3ac: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: @ WaitForAnimEnd()
0x3b0: Pop(0)
0x3b1: PushEmpty()
0x3b2: Call2 0x4cd

0x3b3: Pop(0)
0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b6: Call2 0x649

0x3b7: Pop(1)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3ba: @ StopAsync()
0x3bb: Pop(0)
0x3bc: Stack[-10] = (bool) 0
0x3bd: Return(); Pop(8)

0x3be: PushEmpty(float, int)
0x3bf: Stack[-2] = Stack[-11]
0x3c0: Stack[-1] = Stack[-6]
0x3c1: Call2 0x373

0x3c2: Pop(2)
0x3c3: Push("all")
0x3c4: Push("attack_middle")
0x3c5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3c6: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Push(Stack[-3])
0x3c9: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x3ca: PushEmpty()
0x3cb: Call2 0x786

0x3cc: Pop(0)
0x3cd: Push("all")
0x3ce: Push("attack_middle")
0x3cf: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: @ WaitForAnimEnd()
0x3d3: Pop(0)
0x3d4: PushEmpty()
0x3d5: Call2 0x4ed

0x3d6: Pop(0)
0x3d7: PushEmpty(bool, object)
0x3d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Call2 0x649

0x3da: Pop(1)
0x3db: Pop(1); Push((bool) Stack[-1] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3dd: @ StopAsync()
0x3de: Pop(0)
0x3df: Stack[-10] = (bool) 0
0x3e0: Return(); Pop(8)

0x3e1: PushEmpty(float, int)
0x3e2: Stack[-2] = Stack[-11]
0x3e3: Stack[-1] = Stack[-6]
0x3e4: Call2 0x373

0x3e5: Pop(2)
0x3e6: Stack[-2] = (int) 1
0x3e7: Push("attack_middle")
0x3e8: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3e9: Push("_")
0x3ea: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3eb: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3ec: Push("all")
0x3ed: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3ee: Pop(1)
0x3ef: Pop(0); Push((bool) Stack[-3] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f1: GOTO 0x40f

0x3f2: PushEmpty()
0x3f3: Call2 0x786

0x3f4: Pop(0)
0x3f5: Push("all")
0x3f6: @ PlayAnimation(Stack[-1], Stack[-2])
0x3f7: Pop(1)
0x3f8: @ WaitForAnimEnd()
0x3f9: Pop(0)
0x3fa: PushEmpty()
0x3fb: Call2 0x4ed

0x3fc: Pop(0)
0x3fd: PushEmpty(bool, object)
0x3fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ff: Call2 0x649

0x400: Pop(1)
0x401: Pop(1); Push((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x403: @ StopAsync()
0x404: Pop(0)
0x405: Stack[-10] = (bool) 0
0x406: Return(); Pop(8)

0x407: PushEmpty(float, int)
0x408: Stack[-2] = Stack[-11]
0x409: Stack[-1] = Stack[-6]
0x40a: Call2 0x373

0x40b: Pop(2)
0x40c: Push((int) 1)
0x40d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x40e: GOTO 0x3e7

0x40f: Push((bool) 0)
0x410: @ SetAttackState(Stack[-1])
0x411: Pop(1)
0x412: Push("all")
0x413: Push("attack_end")
0x414: Pop(1); Push(Stack[-1] + Stack[-6]);
0x415: @ PlayAnimation(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: PushEmpty(bool)
0x418: Call2 0x4fb

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41b: PushEmpty(bool, float)
0x41c: Stack[-1] = (float) 0.75
0x41d: Call2 0x423

0x41e: Pop(2)
0x41f: @ StopAsync()
0x420: Pop(0)
0x421: Stack[-10] = (bool) 1
0x422: Return(); Pop(8)

0x423: PushEmpty(float, bool, float, bool)
0x424: @ rand(Stack[-2])
0x425: Pop(0)
0x426: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x427: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x428: @ IsAnimationPlaying(Stack[-1])
0x429: Pop(0)
0x42a: Pop(0); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: GOTO 0x436

0x42d: PushEmpty(bool)
0x42e: Call2 0x485

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x431: Stack[-6] = (bool) 1
0x432: Return(); Pop(4)

0x433: @ sync()
0x434: Pop(0)
0x435: GOTO 0x428

0x436: GOTO 0x43c

0x437: @ WaitForAnimEnd()
0x438: Pop(0)
0x439: PushEmpty()
0x43a: Call2 0x4ed

0x43b: Pop(0)
0x43c: Stack[-6] = (bool) 0
0x43d: Return(); Pop(4)

0x43e: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x43f: @ IsAnimationPlaying(Stack[-5])
0x440: Pop(0)
0x441: Pop(0); Push((bool) Stack[-5] == 0)
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: GOTO 0x464

0x444: PushEmpty(bool)
0x445: Call2 0x485

0x446: Pop(0)
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-12] = (bool) 1
0x449: Return(); Pop(10)

0x44a: PushEmpty(bool, object)
0x44b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44c: Call2 0x649

0x44d: Pop(1)
0x44e: Pop(1); Push((bool) Stack[-1] == 0)
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-12] = (bool) 0
0x451: Return(); Pop(10)

0x452: @@ GetPFPosition(Stack[-4])
0x453: Pop(0)
0x454: @ GetPFPosition(Stack[-3])
0x455: Pop(0)
0x456: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x457: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x458: Pop(0); Push(Stack[-11] * Stack[-11]);
0x459: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45b: PushEmpty(bool, float)
0x45c: Stack[-1] = Stack[-13]
0x45d: Call2 0x39a

0x45e: Pop(2)
0x45f: Stack[-12] = (bool) 1
0x460: Return(); Pop(10)

0x461: @ sync()
0x462: Pop(0)
0x463: GOTO 0x43f

0x464: PushEmpty()
0x465: Call2 0x4ed

0x466: Pop(0)
0x467: Stack[-12] = (bool) 0
0x468: Return(); Pop(10)

0x469: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x46a: PushEmpty(bool, object)
0x46b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46c: Call2 0x649

0x46d: Pop(1)
0x46e: Pop(1); Push((bool) Stack[-1] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-11] = (bool) 0
0x471: Return(); Pop(10)

0x472: PushEmpty(bool)
0x473: Call2 0x4c2

0x474: Pop(0)
0x475: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x476: @@ GetPFPosition(Stack[-5])
0x477: Pop(0)
0x478: @ GetPFPosition(Stack[-4])
0x479: Pop(0)
0x47a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x47b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x47c: @@ GetAttackDistance(Stack[-1])
0x47d: Pop(0)
0x47e: Push((int) 50)
0x47f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x480: Pop(0); Push(Stack[-1] * Stack[-1]);
0x481: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x482: Return(); Pop(10)

0x483: Stack[-11] = (bool) 0
0x484: Return(); Pop(10)

0x485: PushEmpty(bool)
0x486: Stack[-1] = (bool) 0
0x487: PushEmpty(bool)
0x488: Call2 0x469

0x489: Pop(0)
0x48a: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48b: PushEmpty(bool)
0x48c: Call2 0x495

0x48d: Pop(0)
0x48e: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48f: Stack[-1] = (bool) 1
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-1] = (bool) 1
0x492: Return(); Pop(0)

0x493: Stack[-1] = (bool) 0
0x494: Return(); Pop(0)

0x495: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x496: @ GetScene(Stack[-5])
0x497: Pop(0)
0x498: Stack[-4] = (bool) 0
0x499: PushEmpty(cvector, object)
0x49a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49b: Call2 0x5b7

0x49c: Pop(1)
0x49d: Pop(1); Push(( -Stack[-1])
0x49e: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x49f: Pop(1)
0x4a0: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: GOTO 0x4bf

0x4a3: @ Face(Stack[-0])
0x4a4: Pop(0)
0x4a5: Push("all")
0x4a6: Push("bjump")
0x4a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a8: Pop(2)
0x4a9: @@ GetPFPosition(Stack[-2])
0x4aa: Pop(0)
0x4ab: @ GetPFPosition(Stack[-1])
0x4ac: Pop(0)
0x4ad: @ WaitForAnimEnd()
0x4ae: Pop(0)
0x4af: PushEmpty()
0x4b0: Call2 0x4ed

0x4b1: Pop(0)
0x4b2: @ StopAsync()
0x4b3: Pop(0)
0x4b4: Push(CVector(0.0, 0.0, 0.0))
0x4b5: @ SetSpeed(Stack[-1])
0x4b6: Pop(1)
0x4b7: Stack[-4] = (bool) 1
0x4b8: PushEmpty(bool)
0x4b9: Call2 0x469

0x4ba: Pop(0)
0x4bb: Pop(1); Push((bool) Stack[-1] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: GOTO 0x4bf

0x4be: GOTO 0x499

0x4bf: Stack[-11] = Stack[-4]
0x4c0: Return(); Pop(10)

0x4c1: Stack[-5] = 0
0x4c2: PushEmpty(bool, bool)
0x4c3: Push("IsAttacking")
0x4c4: Push((int) 1)
0x4c5: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c7: @@ IsAttacking(Stack[-1])
0x4c8: Pop(0)
0x4c9: Stack[-3] = Stack[-1]
0x4ca: Return(); Pop(2)

0x4cb: Stack[-3] = (bool) 0
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty(float, int, float, int)
0x4ce: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4d0: Return(); Pop(4)

0x4d1: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d3: Push((int) -1)
0x4d4: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4d5: Push((int) 0)
0x4d6: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: Return(); Pop(4)

0x4d9: @ rand(Stack[-2])
0x4da: Pop(0)
0x4db: PushEmpty(float)
0x4dc: Call2 0x4ff

0x4dd: Pop(0)
0x4de: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e0: @ irand(Stack[-1], Stack[-2])
0x4e1: Pop(0)
0x4e2: Push((int) 1)
0x4e3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4e4: Push("attack")
0x4e5: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4e6: @ Speak(Stack[-1])
0x4e7: Pop(1)
0x4e8: PushEmpty(int)
0x4e9: Call2 0x4fd

0x4ea: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4eb: Pop(1)
0x4ec: Return(); Pop(4)

0x4ed: PushEmpty(object)
0x4ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ef: Call2 0x77d

0x4f0: Pop(1)
0x4f1: Return(); Pop(0)

0x4f2: Stack[-1] = (int) 0
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(string)
0x4f5: Stack[-1] = "attack_stay"
0x4f6: Call2 0x714

0x4f7: Pop(1)
0x4f8: Return(); Pop(0)

0x4f9: PushEmpty()
0x4fa: Return(); Pop(0)

0x4fb: Stack[-1] = (bool) 1
0x4fc: Return(); Pop(0)

0x4fd: Stack[-1] = (int) 1
0x4fe: Return(); Pop(0)

0x4ff: Stack[-1] = (float) 0.5
0x500: Return(); Pop(0)

0x501: PushEmpty(bool, bool)
0x502: @ IsPlayerActor(Stack[-3], Stack[-1])
0x503: Pop(0)
0x504: Push(Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x506: PushEmpty()
0x507: Call2 0x804

0x508: Pop(0)
0x509: GOTO 0x50d

0x50a: PushEmpty()
0x50b: Call2 0x883

0x50c: Pop(0)
0x50d: PushEmpty()
0x50e: Call2 0x7ec

0x50f: Pop(0)
0x510: PushEmpty(object)
0x511: Stack[-1] = Stack[-4]
0x512: Call2 0x515

0x513: Pop(1)
0x514: Return(); Pop(2)

0x515: PushEmpty()
0x516: EventDisable(0)
0x517: PushEmpty(object)
0x518: Stack[-1] = Stack[-2]
0x519: Call2 0x52e

0x51a: Pop(1)
0x51b: Push((int) 50)
0x51c: Push((int) 40)
0x51d: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x51e: Pop(2)
0x51f: EventEnable(0)
0x520: @ Hold()
0x521: Pop(0)
0x522: GOTO 0x520

0x523: Return(); Pop(0)

0x524: PushEmpty(bool, bool)
0x525: @ IsOverrideActive(Stack[-1])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-1] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x529: PushEmpty(object)
0x52a: Stack[-1] = Stack[-4]
0x52b: Call2 0x7af

0x52c: Pop(1)
0x52d: Return(); Pop(2)

0x52e: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x52f: Pop(0); Push((bool) Stack[-21] == 0)
0x530: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "fdie"
0x533: Call2 0x589

0x534: Pop(1)
0x535: GOTO 0x588

0x536: @@ GetPosition(Stack[-10])
0x537: Pop(0)
0x538: @ GetPosition(Stack[-9])
0x539: Pop(0)
0x53a: @ GetDirection(Stack[-8])
0x53b: Pop(0)
0x53c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x53d: Push(CvectorIndex(Stack[-7], 0))
0x53e: Push(CvectorIndex(Stack[-9], 0))
0x53f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x540: Push(CvectorIndex(Stack[-8], 2))
0x541: Push(CvectorIndex(Stack[-10], 2))
0x542: Pop(2); Push(Stack[-2] * Stack[-1]);
0x543: Pop(2); Push(Stack[-2] + Stack[-1]);
0x544: Push((int) 0)
0x545: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-6] = "fdie"
0x548: GOTO 0x54a

0x549: Stack[-6] = "bdie"
0x54a: @ RemoveRTEnvelope()
0x54b: Pop(0)
0x54c: @ SetDeathState()
0x54d: Pop(0)
0x54e: @ Stop()
0x54f: Pop(0)
0x550: @ StopAsync()
0x551: Pop(0)
0x552: Stack[-5] = Stack[-21]
0x553: Push("GetScriptProperty")
0x554: Push((int) 2)
0x555: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x556: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x557: Push("Owner")
0x558: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x559: Pop(1)
0x55a: Push(Stack[-4])
0x55b: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55c: Push("Owner")
0x55d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x55e: Pop(1)
0x55f: Pop(0); Push((bool) Stack[-5] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-5] = Stack[-21]
0x562: Push("@GetEyesHeight")
0x563: Push((int) 1)
0x564: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x565: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x566: @@ GetEyesHeight(Stack[-2])
0x567: Pop(0)
0x568: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x569: Push(CvectorIndex(Stack[-1], 1))
0x56a: Stack[-1] = Stack[-3]
0x56b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x56c: Push("head")
0x56d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x56e: Pop(1)
0x56f: Stack[-3] = (bool) 1
0x570: GOTO 0x572

0x571: Stack[-3] = (bool) 0
0x572: PushEmpty(string)
0x573: Stack[-1] = Stack[-7]
0x574: Call2 0x714

0x575: Pop(1)
0x576: Push("all")
0x577: @ PlayAnimation(Stack[-1], Stack[-7])
0x578: Pop(1)
0x579: @ WaitForAnimEnd()
0x57a: Pop(0)
0x57b: Push(Stack[-3])
0x57c: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57d: @ StopAsync()
0x57e: Pop(0)
0x57f: Push("head")
0x580: @ UnlookAsync(Stack[-1])
0x581: Pop(1)
0x582: Push("all")
0x583: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x584: Pop(1)
0x585: @ RemoveEnvelope()
0x586: Pop(0)
0x587: Stack[-5] = 0
0x588: Return(); Pop(20)

0x589: PushEmpty()
0x58a: @ RemoveRTEnvelope()
0x58b: Pop(0)
0x58c: @ SetDeathState()
0x58d: Pop(0)
0x58e: @ Stop()
0x58f: Pop(0)
0x590: @ StopAsync()
0x591: Pop(0)
0x592: @ StopSecondaryAnimation()
0x593: Pop(0)
0x594: PushEmpty(string)
0x595: Stack[-1] = Stack[-2]
0x596: Call2 0x714

0x597: Pop(1)
0x598: Push("all")
0x599: @ PlayAnimation(Stack[-1], Stack[-2])
0x59a: Pop(1)
0x59b: @ WaitForAnimEnd()
0x59c: Pop(0)
0x59d: Push("all")
0x59e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x59f: Pop(1)
0x5a0: @ RemoveEnvelope()
0x5a1: Pop(0)
0x5a2: Return(); Pop(0)

0x5a3: PushEmpty()
0x5a4: Return(); Pop(0)

0x5a5: PushEmpty()
0x5a6: Return(); Pop(0)

0x5a7: PushEmpty()
0x5a8: Return(); Pop(0)

0x5a9: PushEmpty()
0x5aa: Push((int) 2)
0x5ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ad: Stack[-2] = "fire"
0x5ae: Return(); Pop(0)

0x5af: GOTO 0x5b5

0x5b0: Push((int) 1)
0x5b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b3: Stack[-2] = "bullet"
0x5b4: Return(); Pop(0)

0x5b5: Stack[-2] = "phys"
0x5b6: Return(); Pop(0)

0x5b7: PushEmpty(cvector, cvector, cvector, cvector)
0x5b8: @ GetPosition(Stack[-2])
0x5b9: Pop(0)
0x5ba: @@ GetPosition(Stack[-1])
0x5bb: Pop(0)
0x5bc: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5bd: Return(); Pop(4)

0x5be: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5bf: @ GetPosition(Stack[-3])
0x5c0: Pop(0)
0x5c1: @@ GetPosition(Stack[-2])
0x5c2: Pop(0)
0x5c3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5c4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5c5: Return(); Pop(6)

0x5c6: PushEmpty(bool, bool)
0x5c7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5c8: Pop(0)
0x5c9: Stack[-4] = Stack[-1]
0x5ca: Return(); Pop(2)

0x5cb: PushEmpty(bool, bool)
0x5cc: Push("HasProperty")
0x5cd: Push((int) 2)
0x5ce: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5cf: Pop(1); Push((bool) Stack[-1] == 0)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-5] = (bool) 0
0x5d2: Return(); Pop(2)

0x5d3: @@ HasProperty(Stack[-3], Stack[-1])
0x5d4: Pop(0)
0x5d5: Stack[-5] = Stack[-1]
0x5d6: Return(); Pop(2)

0x5d7: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5d8: PushEmpty(bool, object, string)
0x5d9: Stack[-2] = Stack[-18]
0x5da: Stack[-1] = "health"
0x5db: Call2 0x5cb

0x5dc: Pop(2)
0x5dd: Pop(1); Push((bool) Stack[-1] == 0)
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-16] = (float) 0.0
0x5e0: Return(); Pop(12)

0x5e1: PushEmpty(bool, object, string)
0x5e2: Stack[-2] = Stack[-18]
0x5e3: Stack[-1] = "armor"
0x5e4: Call2 0x5cb

0x5e5: Pop(2)
0x5e6: Pop(1); Push((bool) Stack[-1] == 0)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e8: Stack[-6] = (int) 0
0x5e9: GOTO 0x5ed

0x5ea: Push("armor")
0x5eb: @@ GetProperty(Stack[-1], Stack[-7])
0x5ec: Pop(1)
0x5ed: Push("armor_")
0x5ee: PushEmpty(string, int)
0x5ef: Stack[-1] = Stack[-16]
0x5f0: Call2 0x5a9

0x5f1: Pop(1)
0x5f2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5f3: PushEmpty(bool, object, string)
0x5f4: Stack[-2] = Stack[-18]
0x5f5: Stack[-1] = Stack[-8]
0x5f6: Call2 0x5cb

0x5f7: Pop(2)
0x5f8: Pop(1); Push((bool) Stack[-1] == 0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-4] = (int) 0
0x5fb: GOTO 0x5fe

0x5fc: @@ GetProperty(Stack[-5], Stack[-4])
0x5fd: Pop(0)
0x5fe: PushEmpty(float, float, float)
0x5ff: Pop(0); Push(Stack[-9] + Stack[-7]);
0x600: Push((float)100.0)
0x601: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x602: Stack[-1] = (int) 1
0x603: Call2 0x74d

0x604: Stack[-6] = Stack[-3]
0x605: Pop(3)
0x606: Push("health")
0x607: @@ GetProperty(Stack[-1], Stack[-3])
0x608: Pop(1)
0x609: Push((int) 1)
0x60a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x60b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x60c: Push("health")
0x60d: PushEmpty(float, float, float, float)
0x60e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x60f: Stack[-2] = (int) 0
0x610: Stack[-1] = (int) 1
0x611: Call2 0x754

0x612: Pop(3)
0x613: @@ SetProperty(Stack[-2], Stack[-1])
0x614: Pop(2)
0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[-17]
0x617: Call2 0x5c6

0x618: Pop(1)
0x619: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61a: PushEmpty(float)
0x61b: Stack[-1] = -Stack[-2]; Pop(0);
0x61c: Call2 0x76a

0x61d: Pop(1)
0x61e: Stack[-16] = Stack[-1]
0x61f: Return(); Pop(12)

0x620: PushEmpty(bool, bool)
0x621: @@ IsDead(Stack[-1])
0x622: Pop(0)
0x623: Stack[-4] = Stack[-1]
0x624: Return(); Pop(2)

0x625: PushEmpty(object, object, object, object)
0x626: Pop(0); Push((bool) Stack[-5] == 0)
0x627: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x628: Stack[-6] = (bool) 0
0x629: Return(); Pop(4)

0x62a: PushEmpty(bool)
0x62b: Stack[-1] = (bool) 0
0x62c: Push("IsDead")
0x62d: Push((int) 1)
0x62e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x62f: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x630: PushEmpty(bool, object)
0x631: Stack[-1] = Stack[-8]
0x632: Call2 0x620

0x633: Pop(1)
0x634: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x635: Stack[-1] = (bool) 1
0x636: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x637: Stack[-6] = (bool) 0
0x638: Return(); Pop(4)

0x639: @ GetScene(Stack[-2])
0x63a: Pop(0)
0x63b: Pop(0); Push((bool) Stack[-2] == 0)
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-6] = (bool) 0
0x63e: Return(); Pop(4)

0x63f: @@ GetScene(Stack[-1])
0x640: Pop(0)
0x641: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x643: Stack[-6] = (bool) 0
0x644: Return(); Pop(4)

0x645: Stack[-6] = (bool) 1
0x646: Return(); Pop(4)

0x647: Stack[-1] = 0
0x648: Stack[-2] = 0
0x649: PushEmpty(int, int)
0x64a: PushEmpty(bool, object)
0x64b: Stack[-1] = Stack[-5]
0x64c: Call2 0x625

0x64d: Pop(1)
0x64e: Pop(1); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: Stack[-4] = (bool) 0
0x651: Return(); Pop(2)

0x652: PushEmpty(bool, object, string)
0x653: Stack[-2] = Stack[-6]
0x654: Stack[-1] = "noaccess"
0x655: Call2 0x5cb

0x656: Pop(2)
0x657: Pop(1); Push((bool) Stack[-1] == 0)
0x658: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x659: Stack[-4] = (bool) 1
0x65a: Return(); Pop(2)

0x65b: Push("noaccess")
0x65c: @@ GetProperty(Stack[-1], Stack[-2])
0x65d: Pop(1)
0x65e: Push((int) 0)
0x65f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x660: Return(); Pop(2)

0x661: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x662: Pop(0); Push((bool) Stack[-15] == 0)
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: Return(); Pop(14)

0x665: @ IsDead(Stack[-7])
0x666: Pop(0)
0x667: Push(Stack[-7])
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Return(); Pop(14)

0x66a: @ GetSecondaryAnimationType(Stack[-6])
0x66b: Pop(0)
0x66c: Push((int) 0)
0x66d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66f: Return(); Pop(14)

0x670: @@ GetPosition(Stack[-5])
0x671: Pop(0)
0x672: @ GetPosition(Stack[-4])
0x673: Pop(0)
0x674: @ GetDirection(Stack[-3])
0x675: Pop(0)
0x676: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x677: Push(CvectorIndex(Stack[-2], 0))
0x678: Push(CvectorIndex(Stack[-4], 0))
0x679: Pop(2); Push(Stack[-2] * Stack[-1]);
0x67a: Push(CvectorIndex(Stack[-3], 2))
0x67b: Push(CvectorIndex(Stack[-5], 2))
0x67c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x67d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x67e: Push((int) 0)
0x67f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-1] = "fhit"
0x682: GOTO 0x684

0x683: Stack[-1] = "bhit"
0x684: Push("hit_react")
0x685: Push("1")
0x686: Pop(1); Push(Stack[-3] + Stack[-1]);
0x687: Push("2")
0x688: Pop(1); Push(Stack[-4] + Stack[-1]);
0x689: Push((int) -10)
0x68a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(4)
0x68c: Return(); Pop(14)

0x68d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x68e: PushEmpty(bool)
0x68f: Stack[-1] = (bool) 0
0x690: PushEmpty(bool)
0x691: Stack[-1] = (bool) 0
0x692: Push(Stack[-23])
0x693: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x694: Push((int) 4)
0x695: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x697: Stack[-1] = (bool) 1
0x698: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x699: Push((int) 5)
0x69a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x69b: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69c: Stack[-1] = (bool) 1
0x69d: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x69e: PushEmpty(cvector, cvector)
0x69f: PushEmpty(cvector, object)
0x6a0: Stack[-1] = Stack[-25]
0x6a1: Call2 0x5b7

0x6a2: Stack[-3] = Stack[-2]
0x6a3: Pop(2)
0x6a4: Call2 0x743

0x6a5: Stack[-11] = Stack[-2]
0x6a6: Pop(2)
0x6a7: @ CreateVectorVector(Stack[-8])
0x6a8: Pop(0)
0x6a9: Stack[-7] = (int) 1
0x6aa: Push("hit")
0x6ab: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ac: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6ad: Pop(1)
0x6ae: Pop(0); Push((bool) Stack[-6] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6b0: GOTO 0x6ba

0x6b1: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6b2: Push((float)0.70711)
0x6b3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b5: @@ add(Stack[-5])
0x6b6: Pop(0)
0x6b7: Push((int) 1)
0x6b8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6b9: GOTO 0x6aa

0x6ba: @@ size(Stack[-3])
0x6bb: Pop(0)
0x6bc: Push(Stack[-3])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6be: @ irand(Stack[-2], Stack[-3])
0x6bf: Pop(0)
0x6c0: @@ get(Stack[-1], Stack[-2])
0x6c1: Pop(0)
0x6c2: PushEmpty(object, int, float, cvector, cvector)
0x6c3: Stack[-5] = Stack[-26]
0x6c4: Stack[-4] = Stack[-25]
0x6c5: Stack[-3] = Stack[-24]
0x6c6: Stack[-2] = Stack[-6]
0x6c7: Stack[-1] = -Stack[-14]; Pop(0);
0x6c8: Call2 0x6d1

0x6c9: Pop(5)
0x6ca: Return(); Pop(18)

0x6cb: Stack[-8] = 0
0x6cc: PushEmpty(object)
0x6cd: Stack[-1] = Stack[-22]
0x6ce: Call2 0x661

0x6cf: Pop(1)
0x6d0: Return(); Pop(18)

0x6d1: PushEmpty(object, object, object, object)
0x6d2: @ GetScene(Stack[-2])
0x6d3: Pop(0)
0x6d4: Push("scripted")
0x6d5: Push("blood_dir.xml")
0x6d6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6d7: Pop(2)
0x6d8: PushEmpty(object)
0x6d9: Stack[-1] = Stack[-10]
0x6da: Call2 0x661

0x6db: Pop(1)
0x6dc: Return(); Pop(4)

0x6dd: Stack[-1] = 0
0x6de: Stack[-2] = 0
0x6df: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6e0: @@ GetPosition(Stack[-3])
0x6e1: Pop(0)
0x6e2: @ GetPosition(Stack[-2])
0x6e3: Pop(0)
0x6e4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6e5: Push(CvectorIndex(Stack[-1], 0))
0x6e6: Push(CvectorIndex(Stack[-2], 2))
0x6e7: @ RotateAsync(Stack[-2], Stack[-1])
0x6e8: Pop(2)
0x6e9: Return(); Pop(6)

0x6ea: PushEmpty(bool, bool)
0x6eb: @ IsLoaded(Stack[-1])
0x6ec: Pop(0)
0x6ed: Stack[-3] = Stack[-1]
0x6ee: Return(); Pop(2)

0x6ef: PushEmpty(float, cvector, float, cvector)
0x6f0: @@ GetEyesHeight(Stack[-2])
0x6f1: Pop(0)
0x6f2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6f3: Push(CvectorIndex(Stack[-1], 1))
0x6f4: Stack[-1] = Stack[-3]
0x6f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6f6: Push("head")
0x6f7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6f8: Pop(1)
0x6f9: Return(); Pop(4)

0x6fa: PushEmpty(bool, bool)
0x6fb: PushEmpty(bool, int, int)
0x6fc: Stack[-2] = Stack[-7]
0x6fd: Stack[-1] = Stack[-6]
0x6fe: Call2 0x75f

0x6ff: Pop(2)
0x700: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x701: Push((int) 0)
0x702: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x703: Pop(1)
0x704: Return(); Pop(2)

0x705: PushEmpty(int, bool, int, bool)
0x706: PushEmpty(bool, int, int)
0x707: Stack[-2] = Stack[-10]
0x708: Stack[-1] = Stack[-9]
0x709: Call2 0x75f

0x70a: Pop(2)
0x70b: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x70c: @ irand(Stack[-2], Stack[-5])
0x70d: Pop(0)
0x70e: Push((int) 0)
0x70f: Push((int) 1)
0x710: Pop(1); Push(Stack[-4] + Stack[-1]);
0x711: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x712: Pop(2)
0x713: Return(); Pop(4)

0x714: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x715: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x716: Pop(0)
0x717: Pop(0); Push((bool) Stack[-8] == 0)
0x718: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x719: Stack[-7] = (int) 0
0x71a: Push((int) 1)
0x71b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x71c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x71d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x71e: Pop(1)
0x71f: Pop(0); Push((bool) Stack[-6] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: GOTO 0x725

0x722: Push((int) 1)
0x723: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x724: GOTO 0x71a

0x725: Pop(0); Push((bool) Stack[-7] == 0)
0x726: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x727: Return(); Pop(16)

0x728: @ irand(Stack[-5], Stack[-7])
0x729: Pop(0)
0x72a: Push((int) 1)
0x72b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x72c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x72d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x72e: Pop(0)
0x72f: Push(Stack[-4])
0x730: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x731: @ GetEyesHeight(Stack[-3])
0x732: Pop(0)
0x733: @ GetDirection(Stack[-2])
0x734: Pop(0)
0x735: Push((int) 50)
0x736: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x737: Push(CvectorIndex(Stack[-1], 1))
0x738: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x739: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x73a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x73b: Pop(0)
0x73c: Return(); Pop(16)

0x73d: PushEmpty(object, object)
0x73e: @ self(Stack[-1])
0x73f: Pop(0)
0x740: Stack[-3] = Stack[-1]
0x741: Return(); Pop(2)

0x742: Stack[-1] = 0
0x743: PushEmpty(float, float)
0x744: Pop(0); Push(Stack[-3] | Stack[-3]);
0x745: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x746: Push((float)0.0)
0x747: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x749: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x74a: Return(); Pop(2)

0x74b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x74c: Return(); Pop(2)

0x74d: PushEmpty()
0x74e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x750: Stack[-3] = Stack[-2]
0x751: GOTO 0x753

0x752: Stack[-3] = Stack[-1]
0x753: Return(); Pop(0)

0x754: PushEmpty()
0x755: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-4] = Stack[-2]
0x758: Return(); Pop(0)

0x759: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: Stack[-4] = Stack[-1]
0x75c: Return(); Pop(0)

0x75d: Stack[-4] = Stack[-3]
0x75e: Return(); Pop(0)

0x75f: PushEmpty(int, int)
0x760: @ irand(Stack[-1], Stack[-3])
0x761: Pop(0)
0x762: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x763: Return(); Pop(2)

0x764: PushEmpty(object, object)
0x765: @ CreateObjectSet(Stack[-1])
0x766: Pop(0)
0x767: Stack[-3] = Stack[-1]
0x768: Return(); Pop(2)

0x769: Stack[-1] = 0
0x76a: PushEmpty(object, object)
0x76b: @ CreateFloatVector(Stack[-1])
0x76c: Pop(0)
0x76d: @@ add(Stack[-3])
0x76e: Pop(0)
0x76f: Push((int) 15)
0x770: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x771: Pop(1)
0x772: Return(); Pop(2)

0x773: Stack[-1] = 0
0x774: PushEmpty(float, float)
0x775: @ GetGameTime(Stack[-1])
0x776: Pop(0)
0x777: Push((int) 1)
0x778: PushEmpty(int)
0x779: Push((int) 24)
0x77a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x77b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x77c: Return(); Pop(2)

0x77d: PushEmpty(bool, bool)
0x77e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x77f: Pop(0)
0x780: Push(Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x782: Push("attack")
0x783: @ PlayGlobalMusic(Stack[-1])
0x784: Pop(1)
0x785: Return(); Pop(2)

0x786: PushEmpty(object, object)
0x787: @ GetScene(Stack[-1])
0x788: Pop(0)
0x789: Push("battle")
0x78a: PushEmpty(object)
0x78b: Call2 0x73d

0x78c: Pop(0)
0x78d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x78e: Pop(2)
0x78f: Return(); Pop(2)

0x790: Stack[-1] = 0
0x791: PushEmpty(string, string)
0x792: Stack[-1] = "idle"
0x793: Push(Stack[-3])
0x794: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x795: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x796: Stack[-4] = Stack[-1]
0x797: Return(); Pop(2)

0x798: PushEmpty(int, bool, int, bool)
0x799: Stack[-2] = (int) 0
0x79a: Push("all")
0x79b: PushEmpty(string, int)
0x79c: Stack[-1] = Stack[-5]
0x79d: Call2 0x791

0x79e: Pop(1)
0x79f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7a0: Pop(2)
0x7a1: Pop(0); Push((bool) Stack[-1] == 0)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: GOTO 0x7a7

0x7a4: Push((int) 1)
0x7a5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7a6: GOTO 0x79a

0x7a7: Stack[-5] = Stack[-2]
0x7a8: Return(); Pop(4)

0x7a9: PushEmpty(int, int)
0x7aa: Push("branch")
0x7ab: @ GetVariable(Stack[-1], Stack[-2])
0x7ac: Pop(1)
0x7ad: Stack[-3] = Stack[-1]
0x7ae: Return(); Pop(2)

0x7af: PushEmpty()
0x7b0: PushEmpty(int)
0x7b1: Call2 0x7a9

0x7b2: Pop(0)
0x7b3: Push((int) 1)
0x7b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b6: @ WorkWithCorpse(Stack[-1])
0x7b7: Pop(0)
0x7b8: GOTO 0x7bb

0x7b9: @ Barter(Stack[-1])
0x7ba: Pop(0)
0x7bb: Return(); Pop(0)

0x7bc: PushEmpty(int, bool, int, bool)
0x7bd: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7bf: Push("GenerateMoney: iMin > iMax")
0x7c0: @ Trace(Stack[-1])
0x7c1: Pop(1)
0x7c2: Return(); Pop(4)

0x7c3: Stack[-2] = (int) 0
0x7c4: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c6: Pop(0); Push(Stack[-5] - Stack[-6]);
0x7c7: @ irand(Stack[-3], Stack[-1])
0x7c8: Pop(1)
0x7c9: GOTO 0x7ce

0x7ca: Push((int) 0)
0x7cb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cd: Return(); Pop(4)

0x7ce: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x7cf: Push((int) 0)
0x7d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d2: Return(); Pop(4)

0x7d3: PushEmpty(int, string)
0x7d4: Stack[-1] = "Money"
0x7d5: Call2 0x904

0x7d6: Pop(1)
0x7d7: Push((int) 0)
0x7d8: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x7d9: Pop(2)
0x7da: Return(); Pop(4)

0x7db: PushEmpty(object, int, bool, object, int, bool)
0x7dc: @ CreateInvItem(Stack[-3])
0x7dd: Pop(0)
0x7de: @@ SetItemName(Stack[-7])
0x7df: Pop(0)
0x7e0: Push("Organ")
0x7e1: Push((int) 1)
0x7e2: @@ SetProperty(Stack[-2], Stack[-1])
0x7e3: Pop(2)
0x7e4: @@ GetItemID(Stack[-2])
0x7e5: Pop(0)
0x7e6: Push((int) 0)
0x7e7: Push((int) 1)
0x7e8: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x7e9: Pop(2)
0x7ea: Return(); Pop(6)

0x7eb: Stack[-3] = 0
0x7ec: PushEmpty(int)
0x7ed: Call2 0x7a9

0x7ee: Pop(0)
0x7ef: Push((int) 1)
0x7f0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Return(); Pop(0)

0x7f3: PushEmpty(string)
0x7f4: Stack[-1] = "liver"
0x7f5: Call2 0x7db

0x7f6: Pop(1)
0x7f7: PushEmpty(string)
0x7f8: Stack[-1] = "kidney"
0x7f9: Call2 0x7db

0x7fa: Pop(1)
0x7fb: PushEmpty(string)
0x7fc: Stack[-1] = "heart"
0x7fd: Call2 0x7db

0x7fe: Pop(1)
0x7ff: PushEmpty(string)
0x800: Stack[-1] = "blood"
0x801: Call2 0x7db

0x802: Pop(1)
0x803: Return(); Pop(0)

0x804: PushEmpty(int, bool, int, int, bool, int)
0x805: Push((int) 0)
0x806: @ ClearSubContainer(Stack[-1])
0x807: Pop(1)
0x808: PushEmpty(int)
0x809: Call2 0x774

0x80a: Stack[-2] = Stack[-1]
0x80b: Pop(1)
0x80c: PushEmpty(int, int)
0x80d: Stack[-2] = (int) 0
0x80e: Push((int) 100)
0x80f: Push((int) 100)
0x810: Pop(1); Push(Stack[-5] * Stack[-1]);
0x811: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x812: Call2 0x7bc

0x813: Pop(2)
0x814: PushEmpty(string, int, int)
0x815: Stack[-3] = "tourniquet"
0x816: Stack[-2] = (int) 1
0x817: Stack[-1] = (int) 7
0x818: Call2 0x6fa

0x819: Pop(3)
0x81a: PushEmpty(string, int, int)
0x81b: Stack[-3] = "bandage"
0x81c: Stack[-2] = (int) 1
0x81d: Stack[-1] = (int) 7
0x81e: Call2 0x6fa

0x81f: Pop(3)
0x820: PushEmpty(string, int, int)
0x821: Stack[-3] = "packet"
0x822: Stack[-2] = (int) 1
0x823: Stack[-1] = (int) 10
0x824: Call2 0x6fa

0x825: Pop(3)
0x826: PushEmpty(string, int, int)
0x827: Stack[-3] = "bottle_water"
0x828: Stack[-2] = (int) 1
0x829: Stack[-1] = (int) 3
0x82a: Call2 0x6fa

0x82b: Pop(3)
0x82c: PushEmpty(string, int, int, int)
0x82d: Stack[-4] = "rusk"
0x82e: Stack[-3] = (int) 1
0x82f: Stack[-2] = (int) 3
0x830: Stack[-1] = (int) 4
0x831: Call2 0x705

0x832: Pop(4)
0x833: PushEmpty(string, int, int)
0x834: Stack[-3] = "hook"
0x835: Stack[-2] = (int) 1
0x836: Stack[-1] = (int) 20
0x837: Call2 0x6fa

0x838: Pop(3)
0x839: PushEmpty(string, int, int)
0x83a: Stack[-3] = "watch"
0x83b: Stack[-2] = (int) 1
0x83c: Stack[-1] = (int) 20
0x83d: Call2 0x6fa

0x83e: Pop(3)
0x83f: PushEmpty(bool)
0x840: Stack[-1] = (bool) 0
0x841: Push((int) 3)
0x842: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x844: Push((int) 6)
0x845: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x847: Stack[-1] = (bool) 1
0x848: IF (Stack[-1] == 0) GOTO 0x850; Pop(1)

0x849: PushEmpty(string, int, int, int)
0x84a: Stack[-4] = "alpha_pills"
0x84b: Stack[-3] = (int) 1
0x84c: Stack[-2] = (int) 2
0x84d: Stack[-1] = (int) 3
0x84e: Call2 0x705

0x84f: Pop(4)
0x850: Push((int) 4)
0x851: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x852: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x853: PushEmpty(string, int, int, int)
0x854: Stack[-4] = "beta_pills"
0x855: Stack[-3] = (int) 1
0x856: Stack[-2] = (int) 4
0x857: Stack[-1] = (int) 3
0x858: Call2 0x705

0x859: Pop(4)
0x85a: Push((int) 6)
0x85b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x85d: PushEmpty(string, int, int, int)
0x85e: Stack[-4] = "alpha_pills"
0x85f: Stack[-3] = (int) 1
0x860: Stack[-2] = (int) 2
0x861: Stack[-1] = (int) 8
0x862: Call2 0x705

0x863: Pop(4)
0x864: PushEmpty(string, int, int, int)
0x865: Stack[-4] = "gamma_pills"
0x866: Stack[-3] = (int) 1
0x867: Stack[-2] = (int) 8
0x868: Stack[-1] = (int) 3
0x869: Call2 0x705

0x86a: Pop(4)
0x86b: Push((int) 8)
0x86c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x86d: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x86e: PushEmpty(string, int, int)
0x86f: Stack[-3] = "revolver_ammo"
0x870: Stack[-2] = (int) 1
0x871: Stack[-1] = (int) 3
0x872: Call2 0x6fa

0x873: Pop(3)
0x874: PushEmpty(string, int, int)
0x875: Stack[-3] = "rifle_ammo"
0x876: Stack[-2] = (int) 1
0x877: Stack[-1] = (int) 3
0x878: Call2 0x6fa

0x879: Pop(3)
0x87a: PushEmpty(int, string)
0x87b: Stack[-1] = "patrol_mark"
0x87c: Call2 0x904

0x87d: Pop(1)
0x87e: Push((int) 0)
0x87f: Push((int) 1)
0x880: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: Return(); Pop(6)

0x883: PushEmpty(int, bool, int, int, bool, int)
0x884: Push((int) 0)
0x885: @ ClearSubContainer(Stack[-1])
0x886: Pop(1)
0x887: PushEmpty(int)
0x888: Call2 0x774

0x889: Stack[-2] = Stack[-1]
0x88a: Pop(1)
0x88b: PushEmpty(int, int)
0x88c: Stack[-2] = (int) 0
0x88d: Push((int) 10)
0x88e: Push((int) 5)
0x88f: Pop(1); Push(Stack[-5] * Stack[-1]);
0x890: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x891: Call2 0x7bc

0x892: Pop(2)
0x893: PushEmpty(string, int, int)
0x894: Stack[-3] = "bottle_water"
0x895: Stack[-2] = (int) 1
0x896: Stack[-1] = (int) 3
0x897: Call2 0x6fa

0x898: Pop(3)
0x899: PushEmpty(string, int, int)
0x89a: Stack[-3] = "rusk"
0x89b: Stack[-2] = (int) 1
0x89c: Stack[-1] = (int) 20
0x89d: Call2 0x6fa

0x89e: Pop(3)
0x89f: PushEmpty(string, int, int)
0x8a0: Stack[-3] = "hook"
0x8a1: Stack[-2] = (int) 1
0x8a2: Stack[-1] = (int) 30
0x8a3: Call2 0x6fa

0x8a4: Pop(3)
0x8a5: PushEmpty(string, int, int)
0x8a6: Stack[-3] = "watch"
0x8a7: Stack[-2] = (int) 1
0x8a8: Stack[-1] = (int) 30
0x8a9: Call2 0x6fa

0x8aa: Pop(3)
0x8ab: Push((int) 3)
0x8ac: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8ae: PushEmpty(string, int, int, int)
0x8af: Stack[-4] = "alpha_pills"
0x8b0: Stack[-3] = (int) 1
0x8b1: Stack[-2] = (int) 4
0x8b2: Stack[-1] = (int) 3
0x8b3: Call2 0x705

0x8b4: Pop(4)
0x8b5: Push((int) 4)
0x8b6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8b7: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8b8: PushEmpty(string, int, int, int)
0x8b9: Stack[-4] = "beta_pills"
0x8ba: Stack[-3] = (int) 1
0x8bb: Stack[-2] = (int) 8
0x8bc: Stack[-1] = (int) 3
0x8bd: Call2 0x705

0x8be: Pop(4)
0x8bf: Push((int) 6)
0x8c0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c2: PushEmpty(string, int, int, int)
0x8c3: Stack[-4] = "gamma_pills"
0x8c4: Stack[-3] = (int) 1
0x8c5: Stack[-2] = (int) 16
0x8c6: Stack[-1] = (int) 3
0x8c7: Call2 0x705

0x8c8: Pop(4)
0x8c9: Return(); Pop(6)

0x8ca: PushEmpty(int, bool, int, int, bool, int)
0x8cb: Push((int) 0)
0x8cc: @ ClearSubContainer(Stack[-1])
0x8cd: Pop(1)
0x8ce: PushEmpty(int)
0x8cf: Call2 0x774

0x8d0: Stack[-2] = Stack[-1]
0x8d1: Pop(1)
0x8d2: PushEmpty(string, int, int, int)
0x8d3: Stack[-4] = "fresh_meat"
0x8d4: Stack[-3] = (int) 1
0x8d5: Stack[-2] = (int) 4
0x8d6: Stack[-1] = (int) 3
0x8d7: Call2 0x705

0x8d8: Pop(4)
0x8d9: PushEmpty(string, int, int, int)
0x8da: Stack[-4] = "dried_meat"
0x8db: Stack[-3] = (int) 1
0x8dc: Stack[-2] = (int) 4
0x8dd: Stack[-1] = (int) 3
0x8de: Call2 0x705

0x8df: Pop(4)
0x8e0: PushEmpty(string, int, int, int)
0x8e1: Stack[-4] = "smoked_meat"
0x8e2: Stack[-3] = (int) 1
0x8e3: Stack[-2] = (int) 4
0x8e4: Stack[-1] = (int) 3
0x8e5: Call2 0x705

0x8e6: Pop(4)
0x8e7: PushEmpty(string, int, int, int)
0x8e8: Stack[-4] = "vegetables"
0x8e9: Stack[-3] = (int) 1
0x8ea: Stack[-2] = (int) 3
0x8eb: Stack[-1] = (int) 3
0x8ec: Call2 0x705

0x8ed: Pop(4)
0x8ee: Push((int) 3)
0x8ef: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x8f1: PushEmpty(string, int, int)
0x8f2: Stack[-3] = "revolver_ammo"
0x8f3: Stack[-2] = (int) 1
0x8f4: Stack[-1] = (int) 5
0x8f5: Call2 0x6fa

0x8f6: Pop(3)
0x8f7: PushEmpty(string, int, int)
0x8f8: Stack[-3] = "rifle_ammo"
0x8f9: Stack[-2] = (int) 1
0x8fa: Stack[-1] = (int) 5
0x8fb: Call2 0x6fa

0x8fc: Pop(3)
0x8fd: PushEmpty(string, int, int)
0x8fe: Stack[-3] = "samopal_ammo"
0x8ff: Stack[-2] = (int) 1
0x900: Stack[-1] = (int) 5
0x901: Call2 0x6fa

0x902: Pop(3)
0x903: Return(); Pop(6)

0x904: PushEmpty(int, int)
0x905: @ GetInvItemByName(Stack[-1], Stack[-3])
0x906: Pop(0)
0x907: Stack[-4] = Stack[-1]
0x908: Return(); Pop(2)

0x909: PushEmpty(string, string)
0x90a: PushEmpty(bool, object, string)
0x90b: Stack[-2] = Stack[-7]
0x90c: Stack[-1] = "class"
0x90d: Call2 0x5cb

0x90e: Pop(2)
0x90f: Pop(1); Push((bool) Stack[-1] == 0)
0x910: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x911: Stack[-5] = (bool) 0
0x912: Return(); Pop(2)

0x913: Push("class")
0x914: @@ GetProperty(Stack[-1], Stack[-2])
0x915: Pop(1)
0x916: PushEmpty(bool)
0x917: Stack[-1] = (bool) 1
0x918: PushEmpty(bool)
0x919: Stack[-1] = (bool) 1
0x91a: PushEmpty(bool)
0x91b: Stack[-1] = (bool) 1
0x91c: PushEmpty(bool)
0x91d: Stack[-1] = (bool) 1
0x91e: PushEmpty(bool)
0x91f: Stack[-1] = (bool) 1
0x920: PushEmpty(bool)
0x921: Stack[-1] = (bool) 1
0x922: PushEmpty(bool)
0x923: Stack[-1] = (bool) 1
0x924: PushEmpty(bool)
0x925: Stack[-1] = (bool) 1
0x926: PushEmpty(bool)
0x927: Stack[-1] = (bool) 1
0x928: PushEmpty(bool)
0x929: Stack[-1] = (bool) 1
0x92a: Push("patrol")
0x92b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x92c: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92d: Push("sanitar")
0x92e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: Stack[-1] = (bool) 0
0x931: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x932: Push("soldier")
0x933: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x935: Stack[-1] = (bool) 0
0x936: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x937: Push("woman")
0x938: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x939: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x93a: Stack[-1] = (bool) 0
0x93b: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93c: Push("wasted_girl")
0x93d: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x93e: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93f: Stack[-1] = (bool) 0
0x940: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x941: Push("vaxxabitka")
0x942: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x944: Stack[-1] = (bool) 0
0x945: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x946: Push("vaxxabit")
0x947: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x948: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x949: Stack[-1] = (bool) 0
0x94a: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94b: Push("little_girl")
0x94c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x94d: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94e: Stack[-1] = (bool) 0
0x94f: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x950: Push("girl")
0x951: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x952: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x953: Stack[-1] = (bool) 0
0x954: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x955: Push("dohodyaga")
0x956: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x958: Stack[-1] = (bool) 0
0x959: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95a: Push("nudegirl")
0x95b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95d: Stack[-1] = (bool) 0
0x95e: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x95f: Stack[-5] = (bool) 1
0x960: Return(); Pop(2)

0x961: Push(Stack[-3])
0x962: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x963: Stack[-5] = (bool) 0
0x964: Return(); Pop(2)

0x965: Stack[-5] = (bool) 1
0x966: PushEmpty(bool)
0x967: Stack[-1] = (bool) 1
0x968: PushEmpty(bool)
0x969: Stack[-1] = (bool) 1
0x96a: PushEmpty(bool)
0x96b: Stack[-1] = (bool) 1
0x96c: PushEmpty(bool)
0x96d: Stack[-1] = (bool) 1
0x96e: PushEmpty(bool)
0x96f: Stack[-1] = (bool) 1
0x970: Push("worker")
0x971: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x972: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x973: Push("butcher")
0x974: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x975: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x976: Stack[-1] = (bool) 0
0x977: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x978: Push("boy")
0x979: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: Stack[-1] = (bool) 0
0x97c: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x97d: Push("unosha")
0x97e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x980: Stack[-1] = (bool) 0
0x981: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x982: Push("wasted_male")
0x983: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x985: Stack[-1] = (bool) 0
0x986: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x987: Push("alkash")
0x988: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x989: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x98a: Stack[-1] = (bool) 0
0x98b: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98c: Push("morlok")
0x98d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x98e: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98f: Stack[-5] = (bool) 0
0x990: Return(); Pop(2)

0x991: Push(GlobalVars[0])
0x992: PushEmpty(object)
0x993: Call2 0x764

0x994: Stack[-2] = Stack[-1]
0x995: Pop(1)
0x996: GlobalVars[0] = Stack[-1]; Pop(1)
0x997: Return(); Pop(0)

0x998: PushEmpty()
0x999: PushEmpty(bool, object)
0x99a: Stack[-1] = Stack[-3]
0x99b: Call2 0xa3e

0x99c: Stack[-4] = Stack[-2]
0x99d: Pop(2)
0x99e: Return(); Pop(0)

0x99f: PushEmpty()
0x9a0: PushEmpty(object)
0x9a1: Stack[-1] = Stack[-2]
0x9a2: Call2 0x9b2

0x9a3: Pop(1)
0x9a4: Return(); Pop(0)

0x9a5: PushEmpty()
0x9a6: PushEmpty(bool, object)
0x9a7: Stack[-1] = Stack[-3]
0x9a8: Call2 0xa3e

0x9a9: Stack[-4] = Stack[-2]
0x9aa: Pop(2)
0x9ab: Return(); Pop(0)

0x9ac: PushEmpty()
0x9ad: PushEmpty(object)
0x9ae: Stack[-1] = Stack[-2]
0x9af: Call2 0x9b2

0x9b0: Pop(1)
0x9b1: Return(); Pop(0)

0x9b2: PushEmpty()
0x9b3: PushEmpty(object, bool)
0x9b4: Stack[-2] = Stack[-3]
0x9b5: Stack[-1] = (bool) 1
0x9b6: Push(-2, 6); TaskCall(3)
0x9b7: Call2 0x24f

0x9b8: Pop(-2, 6); TaskReturn
0x9b9: Pop(2)
0x9ba: @ ResetAAS()
0x9bb: Pop(0)
0x9bc: Return(); Pop(0)

0x9bd: PushEmpty(bool, bool)
0x9be: Pop(0); Push((bool) Stack[-3] == 0)
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9c0: Return(); Pop(2)

0x9c1: Push(GlobalVars[0])
0x9c2: @@ in(Stack[-2], Stack[-4])
0x9c3: Pop(1)
0x9c4: Pop(0); Push((bool) Stack[-1] == 0)
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c6: Push(GlobalVars[0])
0x9c7: @@ add(Stack[-4])
0x9c8: Pop(1)
0x9c9: PushEmpty(bool, object)
0x9ca: Stack[-1] = Stack[-5]
0x9cb: Call2 0x5c6

0x9cc: Pop(1)
0x9cd: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9ce: PushEmpty(object)
0x9cf: Call2 0x73d

0x9d0: Pop(0)
0x9d1: Push((float)-0.07)
0x9d2: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x9d3: Pop(2)
0x9d4: Return(); Pop(2)

0x9d5: PushEmpty()
0x9d6: PushEmpty(object)
0x9d7: Stack[-1] = Stack[-2]
0x9d8: Call2 0x9bd

0x9d9: Pop(1)
0x9da: PushEmpty(object, bool)
0x9db: Stack[-2] = Stack[-3]
0x9dc: Stack[-1] = (bool) 1
0x9dd: Push(-2, 6); TaskCall(3)
0x9de: Call2 0x24f

0x9df: Pop(-2, 6); TaskReturn
0x9e0: Pop(2)
0x9e1: @ ResetAAS()
0x9e2: Pop(0)
0x9e3: Return(); Pop(0)

0x9e4: PushEmpty()
0x9e5: PushEmpty(bool, object)
0x9e6: Stack[-1] = Stack[-3]
0x9e7: Call2 0x5c6

0x9e8: Pop(1)
0x9e9: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ea: PushEmpty(object)
0x9eb: Call2 0x73d

0x9ec: Pop(0)
0x9ed: Push((float)-0.13)
0x9ee: Push((bool) 1)
0x9ef: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9f0: Pop(3)
0x9f1: PushEmpty(object)
0x9f2: Stack[-1] = Stack[-2]
0x9f3: Push(-1, 0); TaskCall(4)
0x9f4: Call2 0x501

0x9f5: Pop(-1, 0); TaskReturn
0x9f6: Pop(1)
0x9f7: Return(); Pop(0)

0x9f8: PushEmpty()
0x9f9: PushEmpty(object, int, float)
0x9fa: Stack[-3] = Stack[-7]
0x9fb: Stack[-2] = Stack[-6]
0x9fc: Stack[-1] = Stack[-5]
0x9fd: Call2 0x68d

0x9fe: Pop(3)
0x9ff: Return(); Pop(0)

0xa00: PushEmpty()
0xa01: PushEmpty(object, int, float, cvector, cvector)
0xa02: Stack[-5] = Stack[-11]
0xa03: Stack[-4] = Stack[-10]
0xa04: Stack[-3] = Stack[-9]
0xa05: Stack[-2] = Stack[-7]
0xa06: Stack[-1] = Stack[-6]
0xa07: Call2 0x6d1

0xa08: Pop(5)
0xa09: Return(); Pop(0)

0xa0a: PushEmpty(float, float)
0xa0b: Push("health")
0xa0c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa0e: Push("health")
0xa0f: @ GetProperty(Stack[-1], Stack[-2])
0xa10: Pop(1)
0xa11: Push((int) 0)
0xa12: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa13: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa14: @ SignalDeath(Stack[-4])
0xa15: Pop(0)
0xa16: Return(); Pop(2)

0xa17: PushEmpty()
0xa18: Push("prc")
0xa19: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1b: @ ResetAAS()
0xa1c: Pop(0)
0xa1d: Return(); Pop(0)

0xa1e: PushEmpty()
0xa1f: PushEmpty(object)
0xa20: Stack[-1] = Stack[-2]
0xa21: Call2 0x9e4

0xa22: Pop(1)
0xa23: Return(); Pop(0)

0xa24: PushEmpty(bool, bool)
0xa25: PushEmpty(bool, object, bool)
0xa26: Stack[-2] = Stack[-7]
0xa27: Stack[-1] = !Stack[-6]; Pop(0);
0xa28: Call2 0x909

0xa29: Pop(2)
0xa2a: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa2b: @ CanSee(Stack[-1], Stack[-5])
0xa2c: Pop(0)
0xa2d: PushEmpty(bool)
0xa2e: Stack[-1] = (bool) 1
0xa2f: Push(Stack[-2])
0xa30: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa31: PushEmpty(float, object)
0xa32: Stack[-1] = Stack[-8]
0xa33: Call2 0x5be

0xa34: Pop(1)
0xa35: Push((float)160000.0)
0xa36: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa38: Stack[-1] = (bool) 0
0xa39: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3a: Stack[-6] = (bool) 1
0xa3b: Return(); Pop(2)

0xa3c: Stack[-6] = (bool) 0
0xa3d: Return(); Pop(2)

0xa3e: PushEmpty(bool, float, string, bool, float, string)
0xa3f: PushEmpty(bool, object)
0xa40: Stack[-1] = Stack[-9]
0xa41: Call2 0x649

0xa42: Pop(1)
0xa43: Pop(1); Push((bool) Stack[-1] == 0)
0xa44: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa45: Stack[-8] = (bool) 0
0xa46: Return(); Pop(6)

0xa47: Push(GlobalVars[0])
0xa48: @@ in(Stack[-4], Stack[-8])
0xa49: Pop(1)
0xa4a: Push(Stack[-3])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4c: Stack[-8] = (bool) 1
0xa4d: Return(); Pop(6)

0xa4e: PushEmpty(bool, object)
0xa4f: Stack[-1] = Stack[-9]
0xa50: Call2 0x5c6

0xa51: Pop(1)
0xa52: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa53: Push("reputation")
0xa54: @@ GetProperty(Stack[-1], Stack[-3])
0xa55: Pop(1)
0xa56: Push((float)0.33)
0xa57: Stack[-9] = Stack[-3] < Stack[-1]; Pop(1);
0xa58: Return(); Pop(6)

0xa59: PushEmpty(bool, object, string)
0xa5a: Stack[-2] = Stack[-10]
0xa5b: Stack[-1] = "class"
0xa5c: Call2 0x5cb

0xa5d: Pop(2)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa5f: Push("class")
0xa60: @@ GetProperty(Stack[-1], Stack[-2])
0xa61: Pop(1)
0xa62: Stack[-8] = (bool) 1
0xa63: PushEmpty(bool)
0xa64: Stack[-1] = (bool) 1
0xa65: Push("bomber")
0xa66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa67: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa68: Push("hunter")
0xa69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa6b: Stack[-1] = (bool) 0
0xa6c: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6d: Push("grabitel")
0xa6e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa70: Stack[-8] = (bool) 0
0xa71: Return(); Pop(6)

0xa72: Stack[-8] = (bool) 0
0xa73: Return(); Pop(6)

