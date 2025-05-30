GlobalVarCount = 2
	G_VAR_0 string 
	G_VAR_1 object 

Strings:
	unholster
	block
	armor_phys
	walkblock
	unblock
	hitblock
	punch
	attack
	_phase1
	GetDirection
	GetDirection
	_hit
	_phase2
	scalpel
	hammer
	knife
	trost
	ammo
	rifle_ammo
	noammo
	_reload
	rifle
	attack1
	_shot
	add
	scripted
	richochet.xml
	Material
	SetScriptProperty
	iterator
	Next
	revolver_ammo
	revolver
	samopal_ammo
	samopal
	flame
	Attach
	SetLength
	GetActualLength
	Intersect
	disease
	GetProperty
	SetProperty
	fire
	ognemet_ammo
	player_grenade.xml
	Owner
	StartVelocity
	DamageAmount
	DamageType
	bottle_weapon
	attack2
	aunholster
	use_begin
	lp
	locked
	uses
	use_success
	use_fail
	empty
	ognemet
	bottle
	lockpick
	effects
	player_disease.bin
	player_stat.bin
	player_hit.bin
	player_head.bin
	player_flashlight.bin
	player_visir.bin
	health
	walk
	idle
	HasProperty
	HasProperty
	armor
	armor_
	wood
	metal
	ground
	stone
	kerosene
	durability
	step_
	player_death
	play_death_danko.bin
	die
	in
	reputation
	Can't find main outdoor oscene
	GetMap
	Can't find map
	GetName
	pt_gmap_
	GetLocator
	FIXME: No map locator for scene : 
	SetMapParams
	flashlight_off
	flashlight_on
	flashlight_nofuel
	visir
	vcharge
	people.xml

Import:
	IsWeaponHolstered (1 args)
	SetWeaponHolster (1 args)
	PlayAnimation (1 args)
	WaitForAnimEnd (0 args)
	IsAltShooting (1 args)
	StopAnimation (0 args)
	HasAnimation (2 args)
	GetCurrentWeapon (1 args)
	irand (2 args)
	PlaySound (1 args)
	SetAttackState (1 args)
	GetAttackDistance (1 args)
	GetVictim (2 args)
	GetDirection (1 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	BroadcastPlayerDamage (1 args)
	IsShooting (1 args)
	GetWeaponProperty (3 args)
	SetWeaponProperty (3 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	AddActorByType (4 args)
	SetTimer (2 args)
	KillTimer (1 args)
	RemoveActor (1 args)
	RemoveAttachPoint (1 args)
	CreateAttachPoint (2 args)
	GetInvItemByName (2 args)
	RemoveItemByType (3 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	SelectAnyItemByID (3 args)
	SetHandsItem (1 args)
	GetPlayerSelectedObject (1 args)
	GetWeaponItem (1 args)
	SelectItem (3 args)
	RemoveItem (3 args)
	HasProperty (2 args)
	SetProperty (2 args)
	ApplyEffect (1 args)
	GetProperty (2 args)
	IsWalking (1 args)
	Sleep (1 args)
	self (1 args)
	CreateObjectSet (1 args)
	GetItemCountOfType (2 args)
	GetGroundMaterial (2 args)
	IsExistingSound (2 args)
	IsDead (1 args)
	SetDeathState (0 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	KillTimer (2 args)
	ModNoise (1 args)
	SignalDeath (1 args)
	Trace (1 args)
	Inventory (0 args)
	GetActiveScene (1 args)
	ShowMap (1 args)
	Diary (0 args)
	ShowMessage (0 args)
	ShowPlayerStats (0 args)
	IsFlashlightOn (1 args)
	SwitchFlashlight (1 args)
	IsVisirOn (1 args)
	SwitchVisir (1 args)
	IsOverrideActive (1 args)
	ShowWindow (2 args)
	rand (3 args)

RunOp = 0x9a3
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_7 Op = 0x17 Vars = (int)
	GTASK_1 Vars = (bool, bool) Params = 1
		EVENT_37 Op = 0x62 Vars = ()
		EVENT_18 Op = 0x67 Vars = (int)
		EVENT_22 Op = 0x76 Vars = (object, int, float, float)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_18 Op = 0x114 Vars = (int)
		EVENT_7 Op = 0x11f Vars = (int)
	GTASK_3 Vars = (bool) Params = 0
		EVENT_18 Op = 0x1de Vars = (int)
		EVENT_7 Op = 0x1e9 Vars = (int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_18 Op = 0x2a7 Vars = (int)
		EVENT_7 Op = 0x2b2 Vars = (int)
	GTASK_5 Vars = (bool) Params = 0
		EVENT_18 Op = 0x370 Vars = (int)
		EVENT_7 Op = 0x37b Vars = (int)
	GTASK_6 Vars = (bool) Params = 0
		EVENT_18 Op = 0x439 Vars = (int)
		EVENT_7 Op = 0x444 Vars = (int)
	GTASK_7 Vars = (bool) Params = 0
		EVENT_18 Op = 0x528 Vars = (int)
		EVENT_7 Op = 0x533 Vars = (int)
	GTASK_8 Vars = (bool) Params = 0
		EVENT_18 Op = 0x628 Vars = (int)
		EVENT_7 Op = 0x633 Vars = (int)
	GTASK_9 Vars = (bool) Params = 0
		EVENT_18 Op = 0x728 Vars = (int)
		EVENT_7 Op = 0x733 Vars = (int)
	GTASK_10 Vars = (object, bool, bool) Params = 0
		EVENT_32 Op = 0x79a Vars = ()
		EVENT_18 Op = 0x7a2 Vars = (int)
		EVENT_13 Op = 0x7ad Vars = ()
		EVENT_14 Op = 0x7b6 Vars = ()
		EVENT_7 Op = 0x7bf Vars = (int)
	GTASK_11 Vars = (bool) Params = 0
		EVENT_18 Op = 0x8bb Vars = (int)
	GTASK_12 Vars = (bool, bool) Params = 0
		EVENT_32 Op = 0x928 Vars = ()
	GTASK_13  Params = 0
		EVENT_13 Op = 0x9e5 Vars = ()
		EVENT_36 Op = 0x9fe Vars = ()
		EVENT_15 Op = 0xa17 Vars = ()
		EVENT_7 Op = 0xa23 Vars = (int)

Events:
EVENT_26 Op = 0xbe5 Vars = (string)
EVENT_16 Op = 0xbed Vars = (object, string)
EVENT_41 Op = 0xbfa Vars = (object)
EVENT_31 Op = 0xbff Vars = (object, float)
EVENT_19 Op = 0xc11 Vars = ()
EVENT_20 Op = 0xc18 Vars = ()
EVENT_21 Op = 0xc1f Vars = ()
EVENT_17 Op = 0xc26 Vars = (object)
EVENT_39 Op = 0xc28 Vars = (float)
EVENT_18 Op = 0xc43 Vars = (int)

0x0: PushEmpty(bool, bool)
0x1: @ IsWeaponHolstered(Stack[-1])
0x2: Pop(0)
0x3: Push(Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0x5: Push((bool) 0)
0x6: @ SetWeaponHolster(Stack[-1])
0x7: Pop(1)
0x8: Push("unholster")
0x9: @ PlayAnimation(Stack[-1])
0xa: Pop(1)
0xb: @ WaitForAnimEnd()
0xc: Pop(0)
0xd: GOTO 0x16

0xe: Push("holster")
0xf: @ PlayAnimation(Stack[-1])
0x10: Pop(1)
0x11: @ WaitForAnimEnd()
0x12: Pop(0)
0x13: Push((bool) 1)
0x14: @ SetWeaponHolster(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(2)

0x17: PushEmpty()
0x18: Push((int) 10)
0x19: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: PushEmpty()
0x1c: Call 0xbda

0x1d: Pop(0)
0x1e: GOTO 0x25

0x1f: Push((int) 11)
0x20: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x22: PushEmpty()
0x23: Call 0xbde

0x24: Pop(0)
0x25: Return(); Pop(0)

0x26: PushEmpty()
0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x29: Push("block")
0x2a: @ PlayAnimation(Stack[-1])
0x2b: Pop(1)
0x2c: @ WaitForAnimEnd()
0x2d: Pop(0)
0x2e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2f: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x30: Return(); Pop(0)

0x31: PushEmpty(string, float)
0x32: Stack[-2] = "armor_phys"
0x33: Stack[-1] = Stack[-3]
0x34: Call 0xa65

0x35: Pop(2)
0x36: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x37: PushEmpty(bool)
0x38: Stack[-1] = (bool) 0
0x39: PushEmpty(bool)
0x3a: Call 0x5d

0x3b: Pop(0)
0x3c: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: Stack[-1] = (bool) 1
0x40: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x41: Push("walkblock")
0x42: @ PlayAnimation(Stack[-1])
0x43: Pop(1)
0x44: @ WaitForAnimEnd()
0x45: Pop(0)
0x46: GOTO 0x37

0x47: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x48: PushEmpty(string, float)
0x49: Stack[-2] = "armor_phys"
0x4a: Stack[-1] = -Stack[-3]; Pop(0);
0x4b: Call 0xa65

0x4c: Pop(2)
0x4d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Return(); Pop(0)

0x50: Push("unblock")
0x51: @ PlayAnimation(Stack[-1])
0x52: Pop(1)
0x53: @ WaitForAnimEnd()
0x54: Pop(0)
0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Return(); Pop(0)

0x58: PushEmpty(bool)
0x59: Call 0x5d

0x5a: Pop(0)
0x5b: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x5c: Return(); Pop(0)

0x5d: PushEmpty(bool, bool)
0x5e: @ IsAltShooting(Stack[-1])
0x5f: Pop(0)
0x60: Stack[-3] = Stack[-1]
0x61: Return(); Pop(2)

0x62: Push( Stack[1 + Tasks[-1].StackPointer] )
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: @ StopAnimation()
0x65: Pop(0)
0x66: Return(); Pop(0)

0x67: PushEmpty()
0x68: Push((int) 10)
0x69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @ StopAnimation()
0x6f: Pop(0)
0x70: GOTO 0x75

0x71: PushEmpty(int)
0x72: Stack[-1] = Stack[-2]
0x73: Call 0xc43

0x74: Pop(1)
0x75: Return(); Pop(0)

0x76: PushEmpty()
0x77: Push( Stack[1 + Tasks[-1].StackPointer] )
0x78: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x79: Push("hitblock")
0x7a: @ PlayAnimation(Stack[-1])
0x7b: Pop(1)
0x7c: Return(); Pop(0)

0x7d: Stack[-1] = "punch"
0x7e: Return(); Pop(0)

0x7f: PushEmpty()
0x80: Push(Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-2] = (float) 0.4
0x83: GOTO 0x85

0x84: Stack[-2] = (float) 0.2
0x85: Return(); Pop(0)

0x86: Stack[-1] = (int) 0
0x87: Return(); Pop(0)

0x88: Stack[-1] = (int) 0
0x89: Return(); Pop(0)

0x8a: PushEmpty(int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int, int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int)
0x8b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8c: Stack[-14] = (int) 0
0x8d: Push((int) 1)
0x8e: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x8f: Push("attack")
0x90: Pop(1); Push(Stack[-1] + Stack[-15]);
0x91: Push("_phase1")
0x92: Stack[-15] = Stack[-2] + Stack[-1]; Pop(2);
0x93: @ HasAnimation(Stack[-12], Stack[-13])
0x94: Pop(0)
0x95: Pop(0); Push((bool) Stack[-12] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: GOTO 0x99

0x98: GOTO 0x8d

0x99: Push((int) -1)
0x9a: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x9b: Pop(0); Push((bool) Stack[-14] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(28)

0x9e: @ GetCurrentWeapon(Stack[-11])
0x9f: Pop(0)
0xa0: @ irand(Stack[-10], Stack[-14])
0xa1: Pop(0)
0xa2: Push("attack")
0xa3: Push((int) 1)
0xa4: Pop(1); Push(Stack[-12] + Stack[-1]);
0xa5: Stack[-11] = Stack[-2] + Stack[-1]; Pop(2);
0xa6: PushEmpty(string)
0xa7: Call 0x7d

0xa8: Pop(0)
0xa9: Push((int) 1)
0xaa: Pop(1); Push(Stack[-12] + Stack[-1]);
0xab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xac: @ PlaySound(Stack[-1])
0xad: Pop(1)
0xae: Push((bool) 1)
0xaf: @ SetAttackState(Stack[-1])
0xb0: Pop(1)
0xb1: Push("_phase1")
0xb2: Pop(1); Push(Stack[-10] + Stack[-1]);
0xb3: @ PlayAnimation(Stack[-1])
0xb4: Pop(1)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(28)

0xba: Push((bool) 0)
0xbb: @ SetAttackState(Stack[-1])
0xbc: Pop(1)
0xbd: @ GetAttackDistance(Stack[-8])
0xbe: Pop(0)
0xbf: @ GetVictim(Stack[-8], Stack[-7])
0xc0: Pop(0)
0xc1: Pop(0); Push(( Stack[-7] != 0 )
0xc2: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xc3: Push("GetDirection")
0xc4: Push((int) 1)
0xc5: Pop(2); Push(IsFuncExist(Stack[-9], Stack[-2], Stack[-1]))
0xc6: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc7: @ GetDirection(Stack[-5])
0xc8: Pop(0)
0xc9: @@ GetDirection(Stack[-4])
0xca: Pop(0)
0xcb: PushEmpty(float, cvector, cvector)
0xcc: Stack[-2] = Stack[-8]
0xcd: Stack[-1] = Stack[-7]
0xce: Call 0xb0f

0xcf: Pop(2)
0xd0: Push((float)0.5)
0xd1: Stack[-8] = Stack[-2] >= Stack[-1]; Pop(2);
0xd2: GOTO 0xd4

0xd3: Stack[-6] = (bool) 0
0xd4: PushEmpty(float, bool)
0xd5: Stack[-1] = Stack[-8]
0xd6: Call 0x10d

0xd7: Stack[-5] = Stack[-2]
0xd8: Pop(2)
0xd9: PushEmpty(float, object, float, int)
0xda: Stack[-3] = Stack[-11]
0xdb: Stack[-2] = Stack[-7]
0xdc: PushEmpty(int)
0xdd: Call 0x86

0xde: Stack[-2] = Stack[-1]
0xdf: Pop(1)
0xe0: Call 0xa7f

0xe1: Stack[-6] = Stack[-4]
0xe2: Pop(4)
0xe3: Push(Stack[-2])
0xe4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe5: Push((int) 2)
0xe6: @ irand(Stack[-2], Stack[-1])
0xe7: Pop(1)
0xe8: PushEmpty(string)
0xe9: Call 0x7d

0xea: Pop(0)
0xeb: Push("_hit")
0xec: Pop(2); Push(Stack[-2] + Stack[-1]);
0xed: Push((int) 1)
0xee: Pop(1); Push(Stack[-3] + Stack[-1]);
0xef: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf0: @ PlaySound(Stack[-1])
0xf1: Pop(1)
0xf2: @ ReportAttack(Stack[-7])
0xf3: Pop(0)
0xf4: PushEmpty(int)
0xf5: Call 0x88

0xf6: Pop(0)
0xf7: @ ReportHit(Stack[-8], Stack[-1], Stack[-3], Stack[-4])
0xf8: Pop(1)
0xf9: @ BroadcastPlayerDamage(Stack[-7])
0xfa: Pop(0)
0xfb: PushEmpty()
0xfc: Call 0x12e

0xfd: Pop(0)
0xfe: Push("_phase2")
0xff: Pop(1); Push(Stack[-10] + Stack[-1]);
0x100: @ PlayAnimation(Stack[-1])
0x101: Pop(1)
0x102: @ WaitForAnimEnd()
0x103: Pop(0)
0x104: Push( Stack[0 + Tasks[-1].StackPointer] )
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Return(); Pop(28)

0x107: Stack[-7] = 0
0x108: PushEmpty(bool)
0x109: Call 0x12f

0x10a: Pop(0)
0x10b: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x10c: Return(); Pop(28)

0x10d: PushEmpty()
0x10e: PushEmpty(float, bool)
0x10f: Stack[-1] = Stack[-3]
0x110: Call 0x7f

0x111: Stack[-4] = Stack[-2]
0x112: Pop(2)
0x113: Return(); Pop(0)

0x114: PushEmpty()
0x115: Push((int) 10)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x118: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x119: GOTO 0x11e

0x11a: PushEmpty(int)
0x11b: Stack[-1] = Stack[-2]
0x11c: Call 0xc43

0x11d: Pop(1)
0x11e: Return(); Pop(0)

0x11f: PushEmpty()
0x120: Push((int) 10)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x123: PushEmpty()
0x124: Call 0xbda

0x125: Pop(0)
0x126: GOTO 0x12d

0x127: Push((int) 11)
0x128: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12a: PushEmpty()
0x12b: Call 0xbde

0x12c: Pop(0)
0x12d: Return(); Pop(0)

0x12e: Return(); Pop(0)

0x12f: PushEmpty(bool, bool)
0x130: @ IsShooting(Stack[-1])
0x131: Pop(0)
0x132: Stack[-3] = Stack[-1]
0x133: Return(); Pop(2)

0x134: Stack[-1] = "scalpel"
0x135: Return(); Pop(0)

0x136: PushEmpty()
0x137: Push(Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x139: Stack[-2] = (float) 0.2
0x13a: GOTO 0x13c

0x13b: Stack[-2] = (float) 0.4
0x13c: Return(); Pop(0)

0x13d: Stack[-1] = (float) 0.5
0x13e: Return(); Pop(0)

0x13f: Stack[-1] = (int) 1
0x140: Return(); Pop(0)

0x141: Stack[-1] = (int) 0
0x142: Return(); Pop(0)

0x143: Stack[-1] = (int) 1
0x144: Return(); Pop(0)

0x145: PushEmpty()
0x146: PushEmpty(float, bool)
0x147: Stack[-1] = Stack[-3]
0x148: Call 0x136

0x149: Pop(1)
0x14a: PushEmpty(float, float)
0x14b: PushEmpty(float)
0x14c: Call 0x13d

0x14d: Stack[-2] = Stack[-1]
0x14e: Pop(1)
0x14f: Call 0xb5c

0x150: Pop(1)
0x151: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x152: Return(); Pop(0)

0x153: PushEmpty(int)
0x154: PushEmpty(int)
0x155: Call 0x13f

0x156: Stack[-2] = Stack[-1]
0x157: Pop(1)
0x158: Call 0xb49

0x159: Pop(1)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int, int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int)
0x15c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15d: Stack[-14] = (int) 0
0x15e: Push((int) 1)
0x15f: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x160: Push("attack")
0x161: Pop(1); Push(Stack[-1] + Stack[-15]);
0x162: Push("_phase1")
0x163: Stack[-15] = Stack[-2] + Stack[-1]; Pop(2);
0x164: @ HasAnimation(Stack[-12], Stack[-13])
0x165: Pop(0)
0x166: Pop(0); Push((bool) Stack[-12] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: GOTO 0x16a

0x169: GOTO 0x15e

0x16a: Push((int) -1)
0x16b: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x16c: Pop(0); Push((bool) Stack[-14] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Return(); Pop(28)

0x16f: @ GetCurrentWeapon(Stack[-11])
0x170: Pop(0)
0x171: @ irand(Stack[-10], Stack[-14])
0x172: Pop(0)
0x173: Push("attack")
0x174: Push((int) 1)
0x175: Pop(1); Push(Stack[-12] + Stack[-1]);
0x176: Stack[-11] = Stack[-2] + Stack[-1]; Pop(2);
0x177: PushEmpty(string)
0x178: Call 0x134

0x179: Pop(0)
0x17a: Push((int) 1)
0x17b: Pop(1); Push(Stack[-12] + Stack[-1]);
0x17c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17d: @ PlaySound(Stack[-1])
0x17e: Pop(1)
0x17f: Push((bool) 1)
0x180: @ SetAttackState(Stack[-1])
0x181: Pop(1)
0x182: Push("_phase1")
0x183: Pop(1); Push(Stack[-10] + Stack[-1]);
0x184: @ PlayAnimation(Stack[-1])
0x185: Pop(1)
0x186: @ WaitForAnimEnd()
0x187: Pop(0)
0x188: Push( Stack[0 + Tasks[-1].StackPointer] )
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(28)

0x18b: Push((bool) 0)
0x18c: @ SetAttackState(Stack[-1])
0x18d: Pop(1)
0x18e: @ GetAttackDistance(Stack[-8])
0x18f: Pop(0)
0x190: @ GetVictim(Stack[-8], Stack[-7])
0x191: Pop(0)
0x192: Pop(0); Push(( Stack[-7] != 0 )
0x193: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x194: Push("GetDirection")
0x195: Push((int) 1)
0x196: Pop(2); Push(IsFuncExist(Stack[-9], Stack[-2], Stack[-1]))
0x197: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x198: @ GetDirection(Stack[-5])
0x199: Pop(0)
0x19a: @@ GetDirection(Stack[-4])
0x19b: Pop(0)
0x19c: PushEmpty(float, cvector, cvector)
0x19d: Stack[-2] = Stack[-8]
0x19e: Stack[-1] = Stack[-7]
0x19f: Call 0xb0f

0x1a0: Pop(2)
0x1a1: Push((float)0.5)
0x1a2: Stack[-8] = Stack[-2] >= Stack[-1]; Pop(2);
0x1a3: GOTO 0x1a5

0x1a4: Stack[-6] = (bool) 0
0x1a5: PushEmpty(float, bool)
0x1a6: Stack[-1] = Stack[-8]
0x1a7: Call 0x145

0x1a8: Stack[-5] = Stack[-2]
0x1a9: Pop(2)
0x1aa: PushEmpty(float, object, float, int)
0x1ab: Stack[-3] = Stack[-11]
0x1ac: Stack[-2] = Stack[-7]
0x1ad: PushEmpty(int)
0x1ae: Call 0x141

0x1af: Stack[-2] = Stack[-1]
0x1b0: Pop(1)
0x1b1: Call 0xa7f

0x1b2: Stack[-6] = Stack[-4]
0x1b3: Pop(4)
0x1b4: Push(Stack[-2])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1b6: Push((int) 2)
0x1b7: @ irand(Stack[-2], Stack[-1])
0x1b8: Pop(1)
0x1b9: PushEmpty(string)
0x1ba: Call 0x134

0x1bb: Pop(0)
0x1bc: Push("_hit")
0x1bd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1be: Push((int) 1)
0x1bf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c1: @ PlaySound(Stack[-1])
0x1c2: Pop(1)
0x1c3: @ ReportAttack(Stack[-7])
0x1c4: Pop(0)
0x1c5: PushEmpty(int)
0x1c6: Call 0x143

0x1c7: Pop(0)
0x1c8: @ ReportHit(Stack[-8], Stack[-1], Stack[-3], Stack[-4])
0x1c9: Pop(1)
0x1ca: @ BroadcastPlayerDamage(Stack[-7])
0x1cb: Pop(0)
0x1cc: PushEmpty()
0x1cd: Call 0x153

0x1ce: Pop(0)
0x1cf: Push("_phase2")
0x1d0: Pop(1); Push(Stack[-10] + Stack[-1]);
0x1d1: @ PlayAnimation(Stack[-1])
0x1d2: Pop(1)
0x1d3: @ WaitForAnimEnd()
0x1d4: Pop(0)
0x1d5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Return(); Pop(28)

0x1d8: Stack[-7] = 0
0x1d9: PushEmpty(bool)
0x1da: Call 0x1f8

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x1dd: Return(); Pop(28)

0x1de: PushEmpty()
0x1df: Push((int) 10)
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e3: GOTO 0x1e8

0x1e4: PushEmpty(int)
0x1e5: Stack[-1] = Stack[-2]
0x1e6: Call 0xc43

0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: Push((int) 10)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call 0xbda

0x1ef: Pop(0)
0x1f0: GOTO 0x1f7

0x1f1: Push((int) 11)
0x1f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f4: PushEmpty()
0x1f5: Call 0xbde

0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(bool, bool)
0x1f9: @ IsShooting(Stack[-1])
0x1fa: Pop(0)
0x1fb: Stack[-3] = Stack[-1]
0x1fc: Return(); Pop(2)

0x1fd: Stack[-1] = "hammer"
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty()
0x200: Push(Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-2] = (float) 0.6
0x203: GOTO 0x205

0x204: Stack[-2] = (float) 0.3
0x205: Return(); Pop(0)

0x206: Stack[-1] = (float) 0.5
0x207: Return(); Pop(0)

0x208: Stack[-1] = (int) 1
0x209: Return(); Pop(0)

0x20a: Stack[-1] = (int) 0
0x20b: Return(); Pop(0)

0x20c: Stack[-1] = (int) 0
0x20d: Return(); Pop(0)

0x20e: PushEmpty()
0x20f: PushEmpty(float, bool)
0x210: Stack[-1] = Stack[-3]
0x211: Call 0x1ff

0x212: Pop(1)
0x213: PushEmpty(float, float)
0x214: PushEmpty(float)
0x215: Call 0x206

0x216: Stack[-2] = Stack[-1]
0x217: Pop(1)
0x218: Call 0xb5c

0x219: Pop(1)
0x21a: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x21b: Return(); Pop(0)

0x21c: PushEmpty(int)
0x21d: PushEmpty(int)
0x21e: Call 0x208

0x21f: Stack[-2] = Stack[-1]
0x220: Pop(1)
0x221: Call 0xb49

0x222: Pop(1)
0x223: Return(); Pop(0)

0x224: PushEmpty(int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int, int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int)
0x225: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x226: Stack[-14] = (int) 0
0x227: Push((int) 1)
0x228: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x229: Push("attack")
0x22a: Pop(1); Push(Stack[-1] + Stack[-15]);
0x22b: Push("_phase1")
0x22c: Stack[-15] = Stack[-2] + Stack[-1]; Pop(2);
0x22d: @ HasAnimation(Stack[-12], Stack[-13])
0x22e: Pop(0)
0x22f: Pop(0); Push((bool) Stack[-12] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x233

0x232: GOTO 0x227

0x233: Push((int) -1)
0x234: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x235: Pop(0); Push((bool) Stack[-14] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Return(); Pop(28)

0x238: @ GetCurrentWeapon(Stack[-11])
0x239: Pop(0)
0x23a: @ irand(Stack[-10], Stack[-14])
0x23b: Pop(0)
0x23c: Push("attack")
0x23d: Push((int) 1)
0x23e: Pop(1); Push(Stack[-12] + Stack[-1]);
0x23f: Stack[-11] = Stack[-2] + Stack[-1]; Pop(2);
0x240: PushEmpty(string)
0x241: Call 0x1fd

0x242: Pop(0)
0x243: Push((int) 1)
0x244: Pop(1); Push(Stack[-12] + Stack[-1]);
0x245: Pop(2); Push(Stack[-2] + Stack[-1]);
0x246: @ PlaySound(Stack[-1])
0x247: Pop(1)
0x248: Push((bool) 1)
0x249: @ SetAttackState(Stack[-1])
0x24a: Pop(1)
0x24b: Push("_phase1")
0x24c: Pop(1); Push(Stack[-10] + Stack[-1]);
0x24d: @ PlayAnimation(Stack[-1])
0x24e: Pop(1)
0x24f: @ WaitForAnimEnd()
0x250: Pop(0)
0x251: Push( Stack[0 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Return(); Pop(28)

0x254: Push((bool) 0)
0x255: @ SetAttackState(Stack[-1])
0x256: Pop(1)
0x257: @ GetAttackDistance(Stack[-8])
0x258: Pop(0)
0x259: @ GetVictim(Stack[-8], Stack[-7])
0x25a: Pop(0)
0x25b: Pop(0); Push(( Stack[-7] != 0 )
0x25c: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x25d: Push("GetDirection")
0x25e: Push((int) 1)
0x25f: Pop(2); Push(IsFuncExist(Stack[-9], Stack[-2], Stack[-1]))
0x260: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x261: @ GetDirection(Stack[-5])
0x262: Pop(0)
0x263: @@ GetDirection(Stack[-4])
0x264: Pop(0)
0x265: PushEmpty(float, cvector, cvector)
0x266: Stack[-2] = Stack[-8]
0x267: Stack[-1] = Stack[-7]
0x268: Call 0xb0f

0x269: Pop(2)
0x26a: Push((float)0.5)
0x26b: Stack[-8] = Stack[-2] >= Stack[-1]; Pop(2);
0x26c: GOTO 0x26e

0x26d: Stack[-6] = (bool) 0
0x26e: PushEmpty(float, bool)
0x26f: Stack[-1] = Stack[-8]
0x270: Call 0x20e

0x271: Stack[-5] = Stack[-2]
0x272: Pop(2)
0x273: PushEmpty(float, object, float, int)
0x274: Stack[-3] = Stack[-11]
0x275: Stack[-2] = Stack[-7]
0x276: PushEmpty(int)
0x277: Call 0x20a

0x278: Stack[-2] = Stack[-1]
0x279: Pop(1)
0x27a: Call 0xa7f

0x27b: Stack[-6] = Stack[-4]
0x27c: Pop(4)
0x27d: Push(Stack[-2])
0x27e: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x27f: Push((int) 2)
0x280: @ irand(Stack[-2], Stack[-1])
0x281: Pop(1)
0x282: PushEmpty(string)
0x283: Call 0x1fd

0x284: Pop(0)
0x285: Push("_hit")
0x286: Pop(2); Push(Stack[-2] + Stack[-1]);
0x287: Push((int) 1)
0x288: Pop(1); Push(Stack[-3] + Stack[-1]);
0x289: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28a: @ PlaySound(Stack[-1])
0x28b: Pop(1)
0x28c: @ ReportAttack(Stack[-7])
0x28d: Pop(0)
0x28e: PushEmpty(int)
0x28f: Call 0x20c

0x290: Pop(0)
0x291: @ ReportHit(Stack[-8], Stack[-1], Stack[-3], Stack[-4])
0x292: Pop(1)
0x293: @ BroadcastPlayerDamage(Stack[-7])
0x294: Pop(0)
0x295: PushEmpty()
0x296: Call 0x21c

0x297: Pop(0)
0x298: Push("_phase2")
0x299: Pop(1); Push(Stack[-10] + Stack[-1]);
0x29a: @ PlayAnimation(Stack[-1])
0x29b: Pop(1)
0x29c: @ WaitForAnimEnd()
0x29d: Pop(0)
0x29e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: Return(); Pop(28)

0x2a1: Stack[-7] = 0
0x2a2: PushEmpty(bool)
0x2a3: Call 0x2c1

0x2a4: Pop(0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x2a6: Return(); Pop(28)

0x2a7: PushEmpty()
0x2a8: Push((int) 10)
0x2a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ab: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2ac: GOTO 0x2b1

0x2ad: PushEmpty(int)
0x2ae: Stack[-1] = Stack[-2]
0x2af: Call 0xc43

0x2b0: Pop(1)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: Push((int) 10)
0x2b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b6: PushEmpty()
0x2b7: Call 0xbda

0x2b8: Pop(0)
0x2b9: GOTO 0x2c0

0x2ba: Push((int) 11)
0x2bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bd: PushEmpty()
0x2be: Call 0xbde

0x2bf: Pop(0)
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty(bool, bool)
0x2c2: @ IsShooting(Stack[-1])
0x2c3: Pop(0)
0x2c4: Stack[-3] = Stack[-1]
0x2c5: Return(); Pop(2)

0x2c6: Stack[-1] = "knife"
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty()
0x2c9: Push(Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-2] = (float) 0.3
0x2cc: GOTO 0x2ce

0x2cd: Stack[-2] = (float) 0.3
0x2ce: Return(); Pop(0)

0x2cf: Stack[-1] = (float) 0.5
0x2d0: Return(); Pop(0)

0x2d1: Stack[-1] = (int) 1
0x2d2: Return(); Pop(0)

0x2d3: Stack[-1] = (int) 0
0x2d4: Return(); Pop(0)

0x2d5: Stack[-1] = (int) 1
0x2d6: Return(); Pop(0)

0x2d7: PushEmpty()
0x2d8: PushEmpty(float, bool)
0x2d9: Stack[-1] = Stack[-3]
0x2da: Call 0x2c8

0x2db: Pop(1)
0x2dc: PushEmpty(float, float)
0x2dd: PushEmpty(float)
0x2de: Call 0x2cf

0x2df: Stack[-2] = Stack[-1]
0x2e0: Pop(1)
0x2e1: Call 0xb5c

0x2e2: Pop(1)
0x2e3: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x2e4: Return(); Pop(0)

0x2e5: PushEmpty(int)
0x2e6: PushEmpty(int)
0x2e7: Call 0x2d1

0x2e8: Stack[-2] = Stack[-1]
0x2e9: Pop(1)
0x2ea: Call 0xb49

0x2eb: Pop(1)
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty(int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int, int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int)
0x2ee: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2ef: Stack[-14] = (int) 0
0x2f0: Push((int) 1)
0x2f1: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x2f2: Push("attack")
0x2f3: Pop(1); Push(Stack[-1] + Stack[-15]);
0x2f4: Push("_phase1")
0x2f5: Stack[-15] = Stack[-2] + Stack[-1]; Pop(2);
0x2f6: @ HasAnimation(Stack[-12], Stack[-13])
0x2f7: Pop(0)
0x2f8: Pop(0); Push((bool) Stack[-12] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x2fc

0x2fb: GOTO 0x2f0

0x2fc: Push((int) -1)
0x2fd: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x2fe: Pop(0); Push((bool) Stack[-14] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: Return(); Pop(28)

0x301: @ GetCurrentWeapon(Stack[-11])
0x302: Pop(0)
0x303: @ irand(Stack[-10], Stack[-14])
0x304: Pop(0)
0x305: Push("attack")
0x306: Push((int) 1)
0x307: Pop(1); Push(Stack[-12] + Stack[-1]);
0x308: Stack[-11] = Stack[-2] + Stack[-1]; Pop(2);
0x309: PushEmpty(string)
0x30a: Call 0x2c6

0x30b: Pop(0)
0x30c: Push((int) 1)
0x30d: Pop(1); Push(Stack[-12] + Stack[-1]);
0x30e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30f: @ PlaySound(Stack[-1])
0x310: Pop(1)
0x311: Push((bool) 1)
0x312: @ SetAttackState(Stack[-1])
0x313: Pop(1)
0x314: Push("_phase1")
0x315: Pop(1); Push(Stack[-10] + Stack[-1]);
0x316: @ PlayAnimation(Stack[-1])
0x317: Pop(1)
0x318: @ WaitForAnimEnd()
0x319: Pop(0)
0x31a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Return(); Pop(28)

0x31d: Push((bool) 0)
0x31e: @ SetAttackState(Stack[-1])
0x31f: Pop(1)
0x320: @ GetAttackDistance(Stack[-8])
0x321: Pop(0)
0x322: @ GetVictim(Stack[-8], Stack[-7])
0x323: Pop(0)
0x324: Pop(0); Push(( Stack[-7] != 0 )
0x325: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x326: Push("GetDirection")
0x327: Push((int) 1)
0x328: Pop(2); Push(IsFuncExist(Stack[-9], Stack[-2], Stack[-1]))
0x329: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32a: @ GetDirection(Stack[-5])
0x32b: Pop(0)
0x32c: @@ GetDirection(Stack[-4])
0x32d: Pop(0)
0x32e: PushEmpty(float, cvector, cvector)
0x32f: Stack[-2] = Stack[-8]
0x330: Stack[-1] = Stack[-7]
0x331: Call 0xb0f

0x332: Pop(2)
0x333: Push((float)0.5)
0x334: Stack[-8] = Stack[-2] >= Stack[-1]; Pop(2);
0x335: GOTO 0x337

0x336: Stack[-6] = (bool) 0
0x337: PushEmpty(float, bool)
0x338: Stack[-1] = Stack[-8]
0x339: Call 0x2d7

0x33a: Stack[-5] = Stack[-2]
0x33b: Pop(2)
0x33c: PushEmpty(float, object, float, int)
0x33d: Stack[-3] = Stack[-11]
0x33e: Stack[-2] = Stack[-7]
0x33f: PushEmpty(int)
0x340: Call 0x2d3

0x341: Stack[-2] = Stack[-1]
0x342: Pop(1)
0x343: Call 0xa7f

0x344: Stack[-6] = Stack[-4]
0x345: Pop(4)
0x346: Push(Stack[-2])
0x347: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x348: Push((int) 2)
0x349: @ irand(Stack[-2], Stack[-1])
0x34a: Pop(1)
0x34b: PushEmpty(string)
0x34c: Call 0x2c6

0x34d: Pop(0)
0x34e: Push("_hit")
0x34f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x350: Push((int) 1)
0x351: Pop(1); Push(Stack[-3] + Stack[-1]);
0x352: Pop(2); Push(Stack[-2] + Stack[-1]);
0x353: @ PlaySound(Stack[-1])
0x354: Pop(1)
0x355: @ ReportAttack(Stack[-7])
0x356: Pop(0)
0x357: PushEmpty(int)
0x358: Call 0x2d5

0x359: Pop(0)
0x35a: @ ReportHit(Stack[-8], Stack[-1], Stack[-3], Stack[-4])
0x35b: Pop(1)
0x35c: @ BroadcastPlayerDamage(Stack[-7])
0x35d: Pop(0)
0x35e: PushEmpty()
0x35f: Call 0x2e5

0x360: Pop(0)
0x361: Push("_phase2")
0x362: Pop(1); Push(Stack[-10] + Stack[-1]);
0x363: @ PlayAnimation(Stack[-1])
0x364: Pop(1)
0x365: @ WaitForAnimEnd()
0x366: Pop(0)
0x367: Push( Stack[0 + Tasks[-1].StackPointer] )
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: Return(); Pop(28)

0x36a: Stack[-7] = 0
0x36b: PushEmpty(bool)
0x36c: Call 0x38a

0x36d: Pop(0)
0x36e: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x36f: Return(); Pop(28)

0x370: PushEmpty()
0x371: Push((int) 10)
0x372: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x375: GOTO 0x37a

0x376: PushEmpty(int)
0x377: Stack[-1] = Stack[-2]
0x378: Call 0xc43

0x379: Pop(1)
0x37a: Return(); Pop(0)

0x37b: PushEmpty()
0x37c: Push((int) 10)
0x37d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37f: PushEmpty()
0x380: Call 0xbda

0x381: Pop(0)
0x382: GOTO 0x389

0x383: Push((int) 11)
0x384: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x386: PushEmpty()
0x387: Call 0xbde

0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty(bool, bool)
0x38b: @ IsShooting(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-3] = Stack[-1]
0x38e: Return(); Pop(2)

0x38f: Stack[-1] = "trost"
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: Push(Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-2] = (float) 0.3
0x395: GOTO 0x397

0x396: Stack[-2] = (float) 0.2
0x397: Return(); Pop(0)

0x398: Stack[-1] = (float) 0.5
0x399: Return(); Pop(0)

0x39a: Stack[-1] = (int) 1
0x39b: Return(); Pop(0)

0x39c: Stack[-1] = (int) 0
0x39d: Return(); Pop(0)

0x39e: Stack[-1] = (int) 0
0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: PushEmpty(float, bool)
0x3a2: Stack[-1] = Stack[-3]
0x3a3: Call 0x391

0x3a4: Pop(1)
0x3a5: PushEmpty(float, float)
0x3a6: PushEmpty(float)
0x3a7: Call 0x398

0x3a8: Stack[-2] = Stack[-1]
0x3a9: Pop(1)
0x3aa: Call 0xb5c

0x3ab: Pop(1)
0x3ac: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(int)
0x3af: PushEmpty(int)
0x3b0: Call 0x39a

0x3b1: Stack[-2] = Stack[-1]
0x3b2: Pop(1)
0x3b3: Call 0xb49

0x3b4: Pop(1)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int, int, string, bool, string, int, string, float, object, bool, cvector, cvector, float, float, int)
0x3b7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3b8: Stack[-14] = (int) 0
0x3b9: Push((int) 1)
0x3ba: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x3bb: Push("attack")
0x3bc: Pop(1); Push(Stack[-1] + Stack[-15]);
0x3bd: Push("_phase1")
0x3be: Stack[-15] = Stack[-2] + Stack[-1]; Pop(2);
0x3bf: @ HasAnimation(Stack[-12], Stack[-13])
0x3c0: Pop(0)
0x3c1: Pop(0); Push((bool) Stack[-12] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: GOTO 0x3c5

0x3c4: GOTO 0x3b9

0x3c5: Push((int) -1)
0x3c6: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x3c7: Pop(0); Push((bool) Stack[-14] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: Return(); Pop(28)

0x3ca: @ GetCurrentWeapon(Stack[-11])
0x3cb: Pop(0)
0x3cc: @ irand(Stack[-10], Stack[-14])
0x3cd: Pop(0)
0x3ce: Push("attack")
0x3cf: Push((int) 1)
0x3d0: Pop(1); Push(Stack[-12] + Stack[-1]);
0x3d1: Stack[-11] = Stack[-2] + Stack[-1]; Pop(2);
0x3d2: PushEmpty(string)
0x3d3: Call 0x38f

0x3d4: Pop(0)
0x3d5: Push((int) 1)
0x3d6: Pop(1); Push(Stack[-12] + Stack[-1]);
0x3d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d8: @ PlaySound(Stack[-1])
0x3d9: Pop(1)
0x3da: Push((bool) 1)
0x3db: @ SetAttackState(Stack[-1])
0x3dc: Pop(1)
0x3dd: Push("_phase1")
0x3de: Pop(1); Push(Stack[-10] + Stack[-1]);
0x3df: @ PlayAnimation(Stack[-1])
0x3e0: Pop(1)
0x3e1: @ WaitForAnimEnd()
0x3e2: Pop(0)
0x3e3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: Return(); Pop(28)

0x3e6: Push((bool) 0)
0x3e7: @ SetAttackState(Stack[-1])
0x3e8: Pop(1)
0x3e9: @ GetAttackDistance(Stack[-8])
0x3ea: Pop(0)
0x3eb: @ GetVictim(Stack[-8], Stack[-7])
0x3ec: Pop(0)
0x3ed: Pop(0); Push(( Stack[-7] != 0 )
0x3ee: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x3ef: Push("GetDirection")
0x3f0: Push((int) 1)
0x3f1: Pop(2); Push(IsFuncExist(Stack[-9], Stack[-2], Stack[-1]))
0x3f2: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f3: @ GetDirection(Stack[-5])
0x3f4: Pop(0)
0x3f5: @@ GetDirection(Stack[-4])
0x3f6: Pop(0)
0x3f7: PushEmpty(float, cvector, cvector)
0x3f8: Stack[-2] = Stack[-8]
0x3f9: Stack[-1] = Stack[-7]
0x3fa: Call 0xb0f

0x3fb: Pop(2)
0x3fc: Push((float)0.5)
0x3fd: Stack[-8] = Stack[-2] >= Stack[-1]; Pop(2);
0x3fe: GOTO 0x400

0x3ff: Stack[-6] = (bool) 0
0x400: PushEmpty(float, bool)
0x401: Stack[-1] = Stack[-8]
0x402: Call 0x3a0

0x403: Stack[-5] = Stack[-2]
0x404: Pop(2)
0x405: PushEmpty(float, object, float, int)
0x406: Stack[-3] = Stack[-11]
0x407: Stack[-2] = Stack[-7]
0x408: PushEmpty(int)
0x409: Call 0x39c

0x40a: Stack[-2] = Stack[-1]
0x40b: Pop(1)
0x40c: Call 0xa7f

0x40d: Stack[-6] = Stack[-4]
0x40e: Pop(4)
0x40f: Push(Stack[-2])
0x410: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x411: Push((int) 2)
0x412: @ irand(Stack[-2], Stack[-1])
0x413: Pop(1)
0x414: PushEmpty(string)
0x415: Call 0x38f

0x416: Pop(0)
0x417: Push("_hit")
0x418: Pop(2); Push(Stack[-2] + Stack[-1]);
0x419: Push((int) 1)
0x41a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x41b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41c: @ PlaySound(Stack[-1])
0x41d: Pop(1)
0x41e: @ ReportAttack(Stack[-7])
0x41f: Pop(0)
0x420: PushEmpty(int)
0x421: Call 0x39e

0x422: Pop(0)
0x423: @ ReportHit(Stack[-8], Stack[-1], Stack[-3], Stack[-4])
0x424: Pop(1)
0x425: @ BroadcastPlayerDamage(Stack[-7])
0x426: Pop(0)
0x427: PushEmpty()
0x428: Call 0x3ae

0x429: Pop(0)
0x42a: Push("_phase2")
0x42b: Pop(1); Push(Stack[-10] + Stack[-1]);
0x42c: @ PlayAnimation(Stack[-1])
0x42d: Pop(1)
0x42e: @ WaitForAnimEnd()
0x42f: Pop(0)
0x430: Push( Stack[0 + Tasks[-1].StackPointer] )
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: Return(); Pop(28)

0x433: Stack[-7] = 0
0x434: PushEmpty(bool)
0x435: Call 0x453

0x436: Pop(0)
0x437: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x438: Return(); Pop(28)

0x439: PushEmpty()
0x43a: Push((int) 10)
0x43b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x43e: GOTO 0x443

0x43f: PushEmpty(int)
0x440: Stack[-1] = Stack[-2]
0x441: Call 0xc43

0x442: Pop(1)
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: Push((int) 10)
0x446: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x448: PushEmpty()
0x449: Call 0xbda

0x44a: Pop(0)
0x44b: GOTO 0x452

0x44c: Push((int) 11)
0x44d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44f: PushEmpty()
0x450: Call 0xbde

0x451: Pop(0)
0x452: Return(); Pop(0)

0x453: PushEmpty(bool, bool)
0x454: @ IsShooting(Stack[-1])
0x455: Pop(0)
0x456: Stack[-3] = Stack[-1]
0x457: Return(); Pop(2)

0x458: PushEmpty(bool, bool, bool, bool)
0x459: Push("ammo")
0x45a: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x45b: Pop(1)
0x45c: PushEmpty(bool)
0x45d: Stack[-1] = (bool) 1
0x45e: Pop(0); Push((bool) Stack[-3] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x460: Pop(0); Push((bool) Stack[-2] == 0)
0x461: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x462: Stack[-1] = (bool) 0
0x463: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x464: PushEmpty(bool, string, int)
0x465: Stack[-2] = "rifle_ammo"
0x466: Stack[-1] = (int) 1
0x467: Call 0xb26

0x468: Pop(2)
0x469: Pop(1); Push((bool) Stack[-1] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46b: Push("noammo")
0x46c: @ PlayAnimation(Stack[-1])
0x46d: Pop(1)
0x46e: @ WaitForAnimEnd()
0x46f: Pop(0)
0x470: Stack[-5] = (bool) 0
0x471: Return(); Pop(4)

0x472: Stack[-5] = (bool) 1
0x473: Return(); Pop(4)

0x474: Stack[-1] = (int) 1
0x475: Return(); Pop(0)

0x476: Stack[-1] = (float) 0.01745
0x477: Return(); Pop(0)

0x478: PushEmpty(bool, bool)
0x479: Push("ammo")
0x47a: Push((bool) 0)
0x47b: @ SetWeaponProperty(Stack[-3], Stack[-2], Stack[-1])
0x47c: Pop(2)
0x47d: Return(); Pop(2)

0x47e: PushEmpty(bool, string, int)
0x47f: Stack[-2] = "rifle_ammo"
0x480: Stack[-1] = (int) 1
0x481: Call 0xb26

0x482: Pop(2)
0x483: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x484: PushEmpty(string)
0x485: Call 0x491

0x486: Pop(0)
0x487: Push("_reload")
0x488: Pop(2); Push(Stack[-2] + Stack[-1]);
0x489: @ PlaySound(Stack[-1])
0x48a: Pop(1)
0x48b: Push("reload")
0x48c: @ PlayAnimation(Stack[-1])
0x48d: Pop(1)
0x48e: @ WaitForAnimEnd()
0x48f: Pop(0)
0x490: Return(); Pop(0)

0x491: Stack[-1] = "rifle"
0x492: Return(); Pop(0)

0x493: Stack[-1] = (float) 1.5
0x494: Return(); Pop(0)

0x495: Stack[-1] = (int) 0
0x496: Return(); Pop(0)

0x497: Stack[-1] = (int) 2
0x498: Return(); Pop(0)

0x499: PushEmpty(string, int, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, object, object, object, object, bool, string, int, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, object, object, object, object, bool)
0x49a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x49b: PushEmpty(bool)
0x49c: Call 0x458

0x49d: Pop(0)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: GOTO 0x527

0x4a1: @ GetCurrentWeapon(Stack[-20])
0x4a2: Pop(0)
0x4a3: Push((int) 2)
0x4a4: @ irand(Stack[-20], Stack[-1])
0x4a5: Pop(1)
0x4a6: Stack[-18] = "attack1"
0x4a7: Push((bool) 1)
0x4a8: @ SetAttackState(Stack[-1])
0x4a9: Pop(1)
0x4aa: PushEmpty()
0x4ab: Call 0x478

0x4ac: Pop(0)
0x4ad: Push("_phase1")
0x4ae: Pop(1); Push(Stack[-19] + Stack[-1]);
0x4af: @ PlayAnimation(Stack[-1])
0x4b0: Pop(1)
0x4b1: @ WaitForAnimEnd()
0x4b2: Pop(0)
0x4b3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Return(); Pop(40)

0x4b6: PushEmpty(string)
0x4b7: Call 0x491

0x4b8: Pop(0)
0x4b9: Push("_shot")
0x4ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4bb: @ PlaySound(Stack[-1])
0x4bc: Pop(1)
0x4bd: PushEmpty()
0x4be: Call 0x542

0x4bf: Pop(0)
0x4c0: Push((bool) 0)
0x4c1: @ SetAttackState(Stack[-1])
0x4c2: Pop(1)
0x4c3: PushEmpty(int)
0x4c4: Call 0x474

0x4c5: Stack[-18] = Stack[-1]
0x4c6: Pop(1)
0x4c7: Stack[-16] = (bool) 0
0x4c8: PushEmpty(float)
0x4c9: Call 0x493

0x4ca: Pop(0)
0x4cb: Stack[-16] = Stack[-1] / Stack[-18]; Pop(1);
0x4cc: PushEmpty(float)
0x4cd: Call 0x476

0x4ce: Stack[-15] = Stack[-1]
0x4cf: Pop(1)
0x4d0: @ GetDirection(Stack[-13])
0x4d1: Pop(0)
0x4d2: PushEmpty(object)
0x4d3: Call 0xaf6

0x4d4: Stack[-13] = Stack[-1]
0x4d5: Pop(1)
0x4d6: Stack[-11] = (int) 0
0x4d7: Pop(0); Push((bool) Stack[-11] < Stack[-17])
0x4d8: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4d9: @ RandVecCone3D(Stack[-10], Stack[-13], Stack[-14])
0x4da: Pop(0)
0x4db: @ GetVictimMaterial(Stack[-9], Stack[-8], Stack[-7], Stack[-10])
0x4dc: Pop(0)
0x4dd: Pop(0); Push(( Stack[-9] != 0 )
0x4de: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4df: PushEmpty(float, object, float, int)
0x4e0: Stack[-3] = Stack[-13]
0x4e1: Stack[-2] = Stack[-19]
0x4e2: PushEmpty(int)
0x4e3: Call 0x495

0x4e4: Stack[-2] = Stack[-1]
0x4e5: Pop(1)
0x4e6: Call 0xa7f

0x4e7: Stack[-10] = Stack[-4]
0x4e8: Pop(4)
0x4e9: Push(Stack[-6])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4eb: @@ add(Stack[-9])
0x4ec: Pop(0)
0x4ed: PushEmpty(int)
0x4ee: Call 0x497

0x4ef: Pop(0)
0x4f0: @ ReportHit(Stack[-10], Stack[-1], Stack[-7], Stack[-16])
0x4f1: Pop(1)
0x4f2: GOTO 0x505

0x4f3: Push((int) -1)
0x4f4: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f6: Pop(0); Push((bool) Stack[-16] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f8: @ GetScene(Stack[-5])
0x4f9: Pop(0)
0x4fa: Push("scripted")
0x4fb: Push(CVector(0.0, 0.0, 1.0))
0x4fc: Push("richochet.xml")
0x4fd: @ AddActorByType(Stack[-7], Stack[-3], Stack[-8], Stack[-10], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Push("Material")
0x500: @@ SetScriptProperty(Stack[-1], Stack[-9])
0x501: Pop(1)
0x502: Stack[-16] = (bool) 1
0x503: Stack[-4] = 0
0x504: Stack[-5] = 0
0x505: Stack[-9] = 0
0x506: Push((int) 1)
0x507: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x508: GOTO 0x4d7

0x509: @@ iterator(Stack[-3])
0x50a: Pop(0)
0x50b: @@ Next(Stack[-1], Stack[-2])
0x50c: Pop(0)
0x50d: Push(Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x50f: @ ReportAttack(Stack[-2])
0x510: Pop(0)
0x511: @ BroadcastPlayerDamage(Stack[-2])
0x512: Pop(0)
0x513: GOTO 0x50b

0x514: Push("_phase2")
0x515: Pop(1); Push(Stack[-19] + Stack[-1]);
0x516: @ PlayAnimation(Stack[-1])
0x517: Pop(1)
0x518: @ WaitForAnimEnd()
0x519: Pop(0)
0x51a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: Return(); Pop(40)

0x51d: PushEmpty()
0x51e: Call 0x47e

0x51f: Pop(0)
0x520: Stack[-2] = 0
0x521: Stack[-3] = 0
0x522: Stack[-12] = 0
0x523: PushEmpty(bool)
0x524: Call 0x543

0x525: Pop(0)
0x526: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x527: Return(); Pop(40)

0x528: PushEmpty()
0x529: Push((int) 10)
0x52a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x52d: GOTO 0x532

0x52e: PushEmpty(int)
0x52f: Stack[-1] = Stack[-2]
0x530: Call 0xc43

0x531: Pop(1)
0x532: Return(); Pop(0)

0x533: PushEmpty()
0x534: Push((int) 10)
0x535: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x537: PushEmpty()
0x538: Call 0xbda

0x539: Pop(0)
0x53a: GOTO 0x541

0x53b: Push((int) 11)
0x53c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53e: PushEmpty()
0x53f: Call 0xbde

0x540: Pop(0)
0x541: Return(); Pop(0)

0x542: Return(); Pop(0)

0x543: PushEmpty(bool, bool)
0x544: @ IsShooting(Stack[-1])
0x545: Pop(0)
0x546: Stack[-3] = Stack[-1]
0x547: Return(); Pop(2)

0x548: PushEmpty(bool, bool, bool, bool)
0x549: Push("ammo")
0x54a: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x54b: Pop(1)
0x54c: PushEmpty(bool)
0x54d: Stack[-1] = (bool) 1
0x54e: Pop(0); Push((bool) Stack[-3] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x550: Pop(0); Push((bool) Stack[-2] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: Stack[-1] = (bool) 0
0x553: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x554: PushEmpty(bool, string, int)
0x555: Stack[-2] = "revolver_ammo"
0x556: Stack[-1] = (int) 6
0x557: Call 0xb26

0x558: Pop(2)
0x559: Pop(1); Push((bool) Stack[-1] == 0)
0x55a: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55b: Push("noammo")
0x55c: @ PlayAnimation(Stack[-1])
0x55d: Pop(1)
0x55e: @ WaitForAnimEnd()
0x55f: Pop(0)
0x560: Stack[-5] = (bool) 0
0x561: Return(); Pop(4)

0x562: Stack[-5] = (bool) 1
0x563: Return(); Pop(4)

0x564: Stack[-1] = (int) 1
0x565: Return(); Pop(0)

0x566: Stack[-1] = (float) 0.02618
0x567: Return(); Pop(0)

0x568: PushEmpty(bool, int, bool, int)
0x569: Push("ammo")
0x56a: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x56b: Pop(1)
0x56c: Push("ammo")
0x56d: Push((int) 1)
0x56e: Pop(1); Push(Stack[-3] - Stack[-1]);
0x56f: @ SetWeaponProperty(Stack[-4], Stack[-2], Stack[-1])
0x570: Pop(2)
0x571: Return(); Pop(4)

0x572: PushEmpty(bool, bool, bool, bool)
0x573: Push("ammo")
0x574: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x575: Pop(1)
0x576: PushEmpty(bool)
0x577: Stack[-1] = (bool) 1
0x578: Pop(0); Push((bool) Stack[-3] == 0)
0x579: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57a: Pop(0); Push((bool) Stack[-2] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: Stack[-1] = (bool) 0
0x57d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x57e: PushEmpty(bool, string, int)
0x57f: Stack[-2] = "revolver_ammo"
0x580: Stack[-1] = (int) 6
0x581: Call 0xb26

0x582: Pop(2)
0x583: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x584: PushEmpty(string)
0x585: Call 0x591

0x586: Pop(0)
0x587: Push("_reload")
0x588: Pop(2); Push(Stack[-2] + Stack[-1]);
0x589: @ PlaySound(Stack[-1])
0x58a: Pop(1)
0x58b: Push("reload")
0x58c: @ PlayAnimation(Stack[-1])
0x58d: Pop(1)
0x58e: @ WaitForAnimEnd()
0x58f: Pop(0)
0x590: Return(); Pop(4)

0x591: Stack[-1] = "revolver"
0x592: Return(); Pop(0)

0x593: Stack[-1] = (float) 0.8
0x594: Return(); Pop(0)

0x595: Stack[-1] = (int) 0
0x596: Return(); Pop(0)

0x597: Stack[-1] = (int) 2
0x598: Return(); Pop(0)

0x599: PushEmpty(string, int, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, object, object, object, object, bool, string, int, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, object, object, object, object, bool)
0x59a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x59b: PushEmpty(bool)
0x59c: Call 0x548

0x59d: Pop(0)
0x59e: Pop(1); Push((bool) Stack[-1] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: GOTO 0x627

0x5a1: @ GetCurrentWeapon(Stack[-20])
0x5a2: Pop(0)
0x5a3: Push((int) 2)
0x5a4: @ irand(Stack[-20], Stack[-1])
0x5a5: Pop(1)
0x5a6: Stack[-18] = "attack1"
0x5a7: Push((bool) 1)
0x5a8: @ SetAttackState(Stack[-1])
0x5a9: Pop(1)
0x5aa: PushEmpty()
0x5ab: Call 0x568

0x5ac: Pop(0)
0x5ad: Push("_phase1")
0x5ae: Pop(1); Push(Stack[-19] + Stack[-1]);
0x5af: @ PlayAnimation(Stack[-1])
0x5b0: Pop(1)
0x5b1: @ WaitForAnimEnd()
0x5b2: Pop(0)
0x5b3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: Return(); Pop(40)

0x5b6: PushEmpty(string)
0x5b7: Call 0x591

0x5b8: Pop(0)
0x5b9: Push("_shot")
0x5ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5bb: @ PlaySound(Stack[-1])
0x5bc: Pop(1)
0x5bd: PushEmpty()
0x5be: Call 0x642

0x5bf: Pop(0)
0x5c0: Push((bool) 0)
0x5c1: @ SetAttackState(Stack[-1])
0x5c2: Pop(1)
0x5c3: PushEmpty(int)
0x5c4: Call 0x564

0x5c5: Stack[-18] = Stack[-1]
0x5c6: Pop(1)
0x5c7: Stack[-16] = (bool) 0
0x5c8: PushEmpty(float)
0x5c9: Call 0x593

0x5ca: Pop(0)
0x5cb: Stack[-16] = Stack[-1] / Stack[-18]; Pop(1);
0x5cc: PushEmpty(float)
0x5cd: Call 0x566

0x5ce: Stack[-15] = Stack[-1]
0x5cf: Pop(1)
0x5d0: @ GetDirection(Stack[-13])
0x5d1: Pop(0)
0x5d2: PushEmpty(object)
0x5d3: Call 0xaf6

0x5d4: Stack[-13] = Stack[-1]
0x5d5: Pop(1)
0x5d6: Stack[-11] = (int) 0
0x5d7: Pop(0); Push((bool) Stack[-11] < Stack[-17])
0x5d8: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x5d9: @ RandVecCone3D(Stack[-10], Stack[-13], Stack[-14])
0x5da: Pop(0)
0x5db: @ GetVictimMaterial(Stack[-9], Stack[-8], Stack[-7], Stack[-10])
0x5dc: Pop(0)
0x5dd: Pop(0); Push(( Stack[-9] != 0 )
0x5de: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5df: PushEmpty(float, object, float, int)
0x5e0: Stack[-3] = Stack[-13]
0x5e1: Stack[-2] = Stack[-19]
0x5e2: PushEmpty(int)
0x5e3: Call 0x595

0x5e4: Stack[-2] = Stack[-1]
0x5e5: Pop(1)
0x5e6: Call 0xa7f

0x5e7: Stack[-10] = Stack[-4]
0x5e8: Pop(4)
0x5e9: Push(Stack[-6])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5eb: @@ add(Stack[-9])
0x5ec: Pop(0)
0x5ed: PushEmpty(int)
0x5ee: Call 0x597

0x5ef: Pop(0)
0x5f0: @ ReportHit(Stack[-10], Stack[-1], Stack[-7], Stack[-16])
0x5f1: Pop(1)
0x5f2: GOTO 0x605

0x5f3: Push((int) -1)
0x5f4: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5f6: Pop(0); Push((bool) Stack[-16] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5f8: @ GetScene(Stack[-5])
0x5f9: Pop(0)
0x5fa: Push("scripted")
0x5fb: Push(CVector(0.0, 0.0, 1.0))
0x5fc: Push("richochet.xml")
0x5fd: @ AddActorByType(Stack[-7], Stack[-3], Stack[-8], Stack[-10], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: Push("Material")
0x600: @@ SetScriptProperty(Stack[-1], Stack[-9])
0x601: Pop(1)
0x602: Stack[-16] = (bool) 1
0x603: Stack[-4] = 0
0x604: Stack[-5] = 0
0x605: Stack[-9] = 0
0x606: Push((int) 1)
0x607: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x608: GOTO 0x5d7

0x609: @@ iterator(Stack[-3])
0x60a: Pop(0)
0x60b: @@ Next(Stack[-1], Stack[-2])
0x60c: Pop(0)
0x60d: Push(Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60f: @ ReportAttack(Stack[-2])
0x610: Pop(0)
0x611: @ BroadcastPlayerDamage(Stack[-2])
0x612: Pop(0)
0x613: GOTO 0x60b

0x614: Push("_phase2")
0x615: Pop(1); Push(Stack[-19] + Stack[-1]);
0x616: @ PlayAnimation(Stack[-1])
0x617: Pop(1)
0x618: @ WaitForAnimEnd()
0x619: Pop(0)
0x61a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x61b: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61c: Return(); Pop(40)

0x61d: PushEmpty()
0x61e: Call 0x572

0x61f: Pop(0)
0x620: Stack[-2] = 0
0x621: Stack[-3] = 0
0x622: Stack[-12] = 0
0x623: PushEmpty(bool)
0x624: Call 0x643

0x625: Pop(0)
0x626: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x627: Return(); Pop(40)

0x628: PushEmpty()
0x629: Push((int) 10)
0x62a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x62d: GOTO 0x632

0x62e: PushEmpty(int)
0x62f: Stack[-1] = Stack[-2]
0x630: Call 0xc43

0x631: Pop(1)
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: Push((int) 10)
0x635: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x637: PushEmpty()
0x638: Call 0xbda

0x639: Pop(0)
0x63a: GOTO 0x641

0x63b: Push((int) 11)
0x63c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63e: PushEmpty()
0x63f: Call 0xbde

0x640: Pop(0)
0x641: Return(); Pop(0)

0x642: Return(); Pop(0)

0x643: PushEmpty(bool, bool)
0x644: @ IsShooting(Stack[-1])
0x645: Pop(0)
0x646: Stack[-3] = Stack[-1]
0x647: Return(); Pop(2)

0x648: PushEmpty(bool, bool, bool, bool)
0x649: Push("ammo")
0x64a: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x64b: Pop(1)
0x64c: PushEmpty(bool)
0x64d: Stack[-1] = (bool) 1
0x64e: Pop(0); Push((bool) Stack[-3] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x650: Pop(0); Push((bool) Stack[-2] == 0)
0x651: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x652: Stack[-1] = (bool) 0
0x653: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x654: PushEmpty(bool, string, int)
0x655: Stack[-2] = "samopal_ammo"
0x656: Stack[-1] = (int) 2
0x657: Call 0xb26

0x658: Pop(2)
0x659: Pop(1); Push((bool) Stack[-1] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x65b: Push("noammo")
0x65c: @ PlayAnimation(Stack[-1])
0x65d: Pop(1)
0x65e: @ WaitForAnimEnd()
0x65f: Pop(0)
0x660: Stack[-5] = (bool) 0
0x661: Return(); Pop(4)

0x662: Stack[-5] = (bool) 1
0x663: Return(); Pop(4)

0x664: Stack[-1] = (int) 5
0x665: Return(); Pop(0)

0x666: Stack[-1] = (float) 0.17453
0x667: Return(); Pop(0)

0x668: PushEmpty(bool, int, bool, int)
0x669: Push("ammo")
0x66a: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x66b: Pop(1)
0x66c: Push("ammo")
0x66d: Push((int) 1)
0x66e: Pop(1); Push(Stack[-3] - Stack[-1]);
0x66f: @ SetWeaponProperty(Stack[-4], Stack[-2], Stack[-1])
0x670: Pop(2)
0x671: Return(); Pop(4)

0x672: PushEmpty(bool, bool, bool, bool)
0x673: Push("ammo")
0x674: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x675: Pop(1)
0x676: PushEmpty(bool)
0x677: Stack[-1] = (bool) 1
0x678: Pop(0); Push((bool) Stack[-3] == 0)
0x679: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67a: Pop(0); Push((bool) Stack[-2] == 0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67c: Stack[-1] = (bool) 0
0x67d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x67e: PushEmpty(bool, string, int)
0x67f: Stack[-2] = "samopal_ammo"
0x680: Stack[-1] = (int) 2
0x681: Call 0xb26

0x682: Pop(2)
0x683: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x684: PushEmpty(string)
0x685: Call 0x691

0x686: Pop(0)
0x687: Push("_reload")
0x688: Pop(2); Push(Stack[-2] + Stack[-1]);
0x689: @ PlaySound(Stack[-1])
0x68a: Pop(1)
0x68b: Push("reload")
0x68c: @ PlayAnimation(Stack[-1])
0x68d: Pop(1)
0x68e: @ WaitForAnimEnd()
0x68f: Pop(0)
0x690: Return(); Pop(4)

0x691: Stack[-1] = "samopal"
0x692: Return(); Pop(0)

0x693: Stack[-1] = (float) 0.8
0x694: Return(); Pop(0)

0x695: Stack[-1] = (int) 0
0x696: Return(); Pop(0)

0x697: Stack[-1] = (int) 2
0x698: Return(); Pop(0)

0x699: PushEmpty(string, int, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, object, object, object, object, bool, string, int, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, object, object, object, object, bool)
0x69a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x69b: PushEmpty(bool)
0x69c: Call 0x648

0x69d: Pop(0)
0x69e: Pop(1); Push((bool) Stack[-1] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: GOTO 0x727

0x6a1: @ GetCurrentWeapon(Stack[-20])
0x6a2: Pop(0)
0x6a3: Push((int) 2)
0x6a4: @ irand(Stack[-20], Stack[-1])
0x6a5: Pop(1)
0x6a6: Stack[-18] = "attack1"
0x6a7: Push((bool) 1)
0x6a8: @ SetAttackState(Stack[-1])
0x6a9: Pop(1)
0x6aa: PushEmpty()
0x6ab: Call 0x668

0x6ac: Pop(0)
0x6ad: Push("_phase1")
0x6ae: Pop(1); Push(Stack[-19] + Stack[-1]);
0x6af: @ PlayAnimation(Stack[-1])
0x6b0: Pop(1)
0x6b1: @ WaitForAnimEnd()
0x6b2: Pop(0)
0x6b3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b5: Return(); Pop(40)

0x6b6: PushEmpty(string)
0x6b7: Call 0x691

0x6b8: Pop(0)
0x6b9: Push("_shot")
0x6ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6bb: @ PlaySound(Stack[-1])
0x6bc: Pop(1)
0x6bd: PushEmpty()
0x6be: Call 0x742

0x6bf: Pop(0)
0x6c0: Push((bool) 0)
0x6c1: @ SetAttackState(Stack[-1])
0x6c2: Pop(1)
0x6c3: PushEmpty(int)
0x6c4: Call 0x664

0x6c5: Stack[-18] = Stack[-1]
0x6c6: Pop(1)
0x6c7: Stack[-16] = (bool) 0
0x6c8: PushEmpty(float)
0x6c9: Call 0x693

0x6ca: Pop(0)
0x6cb: Stack[-16] = Stack[-1] / Stack[-18]; Pop(1);
0x6cc: PushEmpty(float)
0x6cd: Call 0x666

0x6ce: Stack[-15] = Stack[-1]
0x6cf: Pop(1)
0x6d0: @ GetDirection(Stack[-13])
0x6d1: Pop(0)
0x6d2: PushEmpty(object)
0x6d3: Call 0xaf6

0x6d4: Stack[-13] = Stack[-1]
0x6d5: Pop(1)
0x6d6: Stack[-11] = (int) 0
0x6d7: Pop(0); Push((bool) Stack[-11] < Stack[-17])
0x6d8: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x6d9: @ RandVecCone3D(Stack[-10], Stack[-13], Stack[-14])
0x6da: Pop(0)
0x6db: @ GetVictimMaterial(Stack[-9], Stack[-8], Stack[-7], Stack[-10])
0x6dc: Pop(0)
0x6dd: Pop(0); Push(( Stack[-9] != 0 )
0x6de: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6df: PushEmpty(float, object, float, int)
0x6e0: Stack[-3] = Stack[-13]
0x6e1: Stack[-2] = Stack[-19]
0x6e2: PushEmpty(int)
0x6e3: Call 0x695

0x6e4: Stack[-2] = Stack[-1]
0x6e5: Pop(1)
0x6e6: Call 0xa7f

0x6e7: Stack[-10] = Stack[-4]
0x6e8: Pop(4)
0x6e9: Push(Stack[-6])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6eb: @@ add(Stack[-9])
0x6ec: Pop(0)
0x6ed: PushEmpty(int)
0x6ee: Call 0x697

0x6ef: Pop(0)
0x6f0: @ ReportHit(Stack[-10], Stack[-1], Stack[-7], Stack[-16])
0x6f1: Pop(1)
0x6f2: GOTO 0x705

0x6f3: Push((int) -1)
0x6f4: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6f6: Pop(0); Push((bool) Stack[-16] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6f8: @ GetScene(Stack[-5])
0x6f9: Pop(0)
0x6fa: Push("scripted")
0x6fb: Push(CVector(0.0, 0.0, 1.0))
0x6fc: Push("richochet.xml")
0x6fd: @ AddActorByType(Stack[-7], Stack[-3], Stack[-8], Stack[-10], Stack[-2], Stack[-1])
0x6fe: Pop(3)
0x6ff: Push("Material")
0x700: @@ SetScriptProperty(Stack[-1], Stack[-9])
0x701: Pop(1)
0x702: Stack[-16] = (bool) 1
0x703: Stack[-4] = 0
0x704: Stack[-5] = 0
0x705: Stack[-9] = 0
0x706: Push((int) 1)
0x707: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x708: GOTO 0x6d7

0x709: @@ iterator(Stack[-3])
0x70a: Pop(0)
0x70b: @@ Next(Stack[-1], Stack[-2])
0x70c: Pop(0)
0x70d: Push(Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70f: @ ReportAttack(Stack[-2])
0x710: Pop(0)
0x711: @ BroadcastPlayerDamage(Stack[-2])
0x712: Pop(0)
0x713: GOTO 0x70b

0x714: Push("_phase2")
0x715: Pop(1); Push(Stack[-19] + Stack[-1]);
0x716: @ PlayAnimation(Stack[-1])
0x717: Pop(1)
0x718: @ WaitForAnimEnd()
0x719: Pop(0)
0x71a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x71b: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71c: Return(); Pop(40)

0x71d: PushEmpty()
0x71e: Call 0x672

0x71f: Pop(0)
0x720: Stack[-2] = 0
0x721: Stack[-3] = 0
0x722: Stack[-12] = 0
0x723: PushEmpty(bool)
0x724: Call 0x743

0x725: Pop(0)
0x726: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x727: Return(); Pop(40)

0x728: PushEmpty()
0x729: Push((int) 10)
0x72a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72b: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x72d: GOTO 0x732

0x72e: PushEmpty(int)
0x72f: Stack[-1] = Stack[-2]
0x730: Call 0xc43

0x731: Pop(1)
0x732: Return(); Pop(0)

0x733: PushEmpty()
0x734: Push((int) 10)
0x735: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x737: PushEmpty()
0x738: Call 0xbda

0x739: Pop(0)
0x73a: GOTO 0x741

0x73b: Push((int) 11)
0x73c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73e: PushEmpty()
0x73f: Call 0xbde

0x740: Pop(0)
0x741: Return(); Pop(0)

0x742: Return(); Pop(0)

0x743: PushEmpty(bool, bool)
0x744: @ IsShooting(Stack[-1])
0x745: Pop(0)
0x746: Stack[-3] = Stack[-1]
0x747: Return(); Pop(2)

0x748: PushEmpty(object, float, object, float)
0x749: PushEmpty(bool)
0x74a: Call 0x84f

0x74b: Pop(0)
0x74c: Pop(1); Push((bool) Stack[-1] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74e: Return(); Pop(4)

0x74f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x750: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x751: PushEmpty()
0x752: Call 0x78c

0x753: Pop(0)
0x754: @ GetScene(Stack[-2])
0x755: Pop(0)
0x756: Push("flame")
0x757: Push(CVector(0.0, 0.0, 0.0))
0x758: @ AddActorByType(Stack[-0], Stack[-2], Stack[-4], Stack[-1])
0x759: Pop(2)
0x75a: PushEmpty(object)
0x75b: Call 0xad3

0x75c: Pop(0)
0x75d: Push("flame")
0x75e: @@ Attach(Stack[-2], Stack[-1])
0x75f: Pop(2)
0x760: Push((float)0.83333)
0x761: @@ SetLength(Stack[-1])
0x762: Pop(1)
0x763: Push((int) 20)
0x764: Push((float)0.1)
0x765: @ SetTimer(Stack[-2], Stack[-1])
0x766: Pop(2)
0x767: Push("attack")
0x768: @ PlayAnimation(Stack[-1])
0x769: Pop(1)
0x76a: @ WaitForAnimEnd()
0x76b: Pop(0)
0x76c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: GOTO 0x782

0x76f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x770: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x771: @@ GetActualLength(Stack[-1])
0x772: Pop(0)
0x773: Push((float)0.01667)
0x774: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x776: GOTO 0x782

0x777: PushEmpty(bool)
0x778: Call 0x85e

0x779: Pop(0)
0x77a: Pop(1); Push((bool) Stack[-1] == 0)
0x77b: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x77d: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77e: PushEmpty()
0x77f: Call 0x7ba

0x780: Pop(0)
0x781: GOTO 0x767

0x782: Push((int) 20)
0x783: @ KillTimer(Stack[-1])
0x784: Pop(1)
0x785: @ RemoveActor(Stack[-0])
0x786: Pop(0)
0x787: Push("flame")
0x788: @ RemoveAttachPoint(Stack[-1])
0x789: Pop(1)
0x78a: Return(); Pop(4)

0x78b: Stack[-2] = 0
0x78c: PushEmpty(cvector, cvector)
0x78d: Push(CvectorIndex(Stack[-1], 1))
0x78e: Stack[-1] = (int) 0
0x78f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x790: Push(CvectorIndex(Stack[-1], 0))
0x791: Stack[-1] = (int) 0
0x792: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x793: Push(CvectorIndex(Stack[-1], 2))
0x794: Stack[-1] = (int) 0
0x795: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x796: Push("flame")
0x797: @ CreateAttachPoint(Stack[-1], Stack[-2])
0x798: Pop(1)
0x799: Return(); Pop(2)

0x79a: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0x79b: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79c: @ RemoveActor(Stack[-0])
0x79d: Pop(0)
0x79e: Push("flame")
0x79f: @ RemoveAttachPoint(Stack[-1])
0x7a0: Pop(1)
0x7a1: Return(); Pop(0)

0x7a2: PushEmpty()
0x7a3: Push((int) 10)
0x7a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x7a7: GOTO 0x7ac

0x7a8: PushEmpty(int)
0x7a9: Stack[-1] = Stack[-2]
0x7aa: Call 0xc43

0x7ab: Pop(1)
0x7ac: Return(); Pop(0)

0x7ad: PushEmpty(bool)
0x7ae: Call 0x84f

0x7af: Pop(0)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7b2: Push((float)0.83333)
0x7b3: @@ SetLength(Stack[-1])
0x7b4: Pop(1)
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty()
0x7b7: Call 0x7ba

0x7b8: Pop(0)
0x7b9: Return(); Pop(0)

0x7ba: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x7bb: Push((float)0.0)
0x7bc: @@ SetLength(Stack[-1])
0x7bd: Pop(1)
0x7be: Return(); Pop(0)

0x7bf: PushEmpty()
0x7c0: Push((int) 10)
0x7c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c3: PushEmpty()
0x7c4: Call 0xbda

0x7c5: Pop(0)
0x7c6: GOTO 0x7d4

0x7c7: Push((int) 11)
0x7c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7ca: PushEmpty()
0x7cb: Call 0xbde

0x7cc: Pop(0)
0x7cd: GOTO 0x7d4

0x7ce: Push((int) 20)
0x7cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d1: PushEmpty()
0x7d2: Call 0x7d5

0x7d3: Pop(0)
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty(object, float, float, bool, object, bool, float, float, float, object, float, float, bool, object, bool, float, float, float)
0x7d6: @@ Intersect(Stack[-9], Stack[-8])
0x7d7: Pop(0)
0x7d8: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x7d9: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7da: PushEmpty(float, float, float)
0x7db: Stack[-2] = Stack[-11]
0x7dc: Stack[-1] = (float) 0.83333
0x7dd: Call 0xad9

0x7de: Pop(2)
0x7df: @@ SetLength(Stack[-1])
0x7e0: Pop(1)
0x7e1: PushEmpty(float)
0x7e2: Call 0x858

0x7e3: Stack[-8] = Stack[-1]
0x7e4: Pop(1)
0x7e5: Stack[-6] = (bool) 0
0x7e6: @@ Next(Stack[-4], Stack[-5])
0x7e7: Pop(0)
0x7e8: Push(Stack[-4])
0x7e9: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x7ea: PushEmpty(bool)
0x7eb: Stack[-1] = (bool) 0
0x7ec: Pop(0); Push(( Stack[-6] != 0 )
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ee: PushEmpty(object)
0x7ef: Call 0xad3

0x7f0: Pop(0)
0x7f1: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f3: Stack[-1] = (bool) 1
0x7f4: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x7f5: Stack[-6] = (bool) 1
0x7f6: PushEmpty(float, object, float, int)
0x7f7: Stack[-3] = Stack[-9]
0x7f8: Stack[-2] = Stack[-11]
0x7f9: PushEmpty(int)
0x7fa: Call 0x85a

0x7fb: Stack[-2] = Stack[-1]
0x7fc: Pop(1)
0x7fd: Call 0xa7f

0x7fe: Stack[-7] = Stack[-4]
0x7ff: Pop(4)
0x800: PushEmpty(bool, object, string)
0x801: Stack[-2] = Stack[-8]
0x802: Stack[-1] = "disease"
0x803: Call 0xa59

0x804: Pop(2)
0x805: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x806: Push("disease")
0x807: @@ GetProperty(Stack[-1], Stack[-3])
0x808: Pop(1)
0x809: Push((float)0.1)
0x80a: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80c: Stack[-2] = (int) 0
0x80d: GOTO 0x810

0x80e: Push((float)0.1)
0x80f: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0x810: Push("disease")
0x811: @@ SetProperty(Stack[-1], Stack[-3])
0x812: Pop(1)
0x813: PushEmpty(bool, object, string)
0x814: Stack[-2] = Stack[-8]
0x815: Stack[-1] = "fire"
0x816: Call 0xa59

0x817: Pop(2)
0x818: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x819: Push("fire")
0x81a: @@ GetProperty(Stack[-1], Stack[-2])
0x81b: Pop(1)
0x81c: Push("fire")
0x81d: Push((float)0.1)
0x81e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x81f: @@ SetProperty(Stack[-2], Stack[-1])
0x820: Pop(2)
0x821: @ ReportAttack(Stack[-5])
0x822: Pop(0)
0x823: PushEmpty(int)
0x824: Call 0x85c

0x825: Pop(0)
0x826: @ ReportHit(Stack[-6], Stack[-1], Stack[-4], Stack[-8])
0x827: Pop(1)
0x828: @ BroadcastPlayerDamage(Stack[-5])
0x829: Pop(0)
0x82a: GOTO 0x7e6

0x82b: PushEmpty(bool)
0x82c: Stack[-1] = (bool) 0
0x82d: PushEmpty(bool)
0x82e: Stack[-1] = (bool) 0
0x82f: Push(Stack[-8])
0x830: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x831: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x833: Stack[-1] = (bool) 1
0x834: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x835: Push((float)0.1)
0x836: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x838: Stack[-1] = (bool) 1
0x839: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x83a: PushEmpty(float, object, float, int)
0x83b: PushEmpty(object)
0x83c: Call 0xad3

0x83d: Stack[-4] = Stack[-1]
0x83e: Pop(1)
0x83f: Stack[-2] = Stack[-11]
0x840: PushEmpty(int)
0x841: Call 0x85a

0x842: Stack[-2] = Stack[-1]
0x843: Pop(1)
0x844: Call 0xa7f

0x845: Pop(4)
0x846: PushEmpty(bool)
0x847: Call 0x84f

0x848: Pop(0)
0x849: Pop(1); Push((bool) Stack[-1] == 0)
0x84a: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x84c: Return(); Pop(18)

0x84d: Stack[-5] = 0
0x84e: Stack[-9] = 0
0x84f: PushEmpty(int, bool, int, bool)
0x850: Push("ognemet_ammo")
0x851: @ GetInvItemByName(Stack[-3], Stack[-1])
0x852: Pop(1)
0x853: Push((int) 1)
0x854: @ RemoveItemByType(Stack[-2], Stack[-3], Stack[-1])
0x855: Pop(1)
0x856: Stack[-5] = Stack[-1]
0x857: Return(); Pop(4)

0x858: Stack[-1] = (float) 0.065
0x859: Return(); Pop(0)

0x85a: Stack[-1] = (int) 1
0x85b: Return(); Pop(0)

0x85c: Stack[-1] = (int) 4
0x85d: Return(); Pop(0)

0x85e: PushEmpty(bool, bool)
0x85f: @ IsShooting(Stack[-1])
0x860: Pop(0)
0x861: Stack[-3] = Stack[-1]
0x862: Return(); Pop(2)

0x863: PushEmpty(cvector, cvector, float, object, object, int, bool, cvector, cvector, float, object, object, int, bool)
0x864: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x865: Push("attack1")
0x866: @ PlayAnimation(Stack[-1])
0x867: Pop(1)
0x868: @ WaitForAnimEnd()
0x869: Pop(0)
0x86a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x86b: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x86c: Return(); Pop(14)

0x86d: @ GetDirection(Stack[-7])
0x86e: Pop(0)
0x86f: @ GetPosition(Stack[-6])
0x870: Pop(0)
0x871: @ GetEyesHeight(Stack[-5])
0x872: Pop(0)
0x873: Push(CvectorIndex(Stack[-6], 1))
0x874: Stack[-1] = Stack[-1] + Stack[-6]; Pop(0);
0x875: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x876: Push((int) 10)
0x877: Pop(1); Push(Stack[-8] * Stack[-1]);
0x878: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x879: @ GetScene(Stack[-4])
0x87a: Pop(0)
0x87b: Push("scripted")
0x87c: Push(CVector(0.0, 0.0, 1.0))
0x87d: Push("player_grenade.xml")
0x87e: @ AddActorByType(Stack[-6], Stack[-3], Stack[-7], Stack[-9], Stack[-2], Stack[-1])
0x87f: Pop(3)
0x880: Push("Owner")
0x881: PushEmpty(object)
0x882: Call 0xad3

0x883: Pop(0)
0x884: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x885: Pop(2)
0x886: Push("StartVelocity")
0x887: Push((int) 1000)
0x888: Pop(1); Push(Stack[-9] * Stack[-1]);
0x889: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x88a: Pop(2)
0x88b: Push("DamageAmount")
0x88c: PushEmpty(float)
0x88d: Call 0x8c6

0x88e: Pop(0)
0x88f: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x890: Pop(2)
0x891: Push("DamageType")
0x892: PushEmpty(int)
0x893: Call 0x8c8

0x894: Pop(0)
0x895: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x896: Pop(2)
0x897: Push("bottle_weapon")
0x898: @ GetInvItemByName(Stack[-3], Stack[-1])
0x899: Pop(1)
0x89a: Push((int) 1)
0x89b: @ RemoveItemByType(Stack[-2], Stack[-3], Stack[-1])
0x89c: Pop(1)
0x89d: Push((int) 0)
0x89e: @ SelectAnyItemByID(Stack[-2], Stack[-3], Stack[-1])
0x89f: Pop(1)
0x8a0: Push("attack2")
0x8a1: @ PlayAnimation(Stack[-1])
0x8a2: Pop(1)
0x8a3: @ WaitForAnimEnd()
0x8a4: Pop(0)
0x8a5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a7: Return(); Pop(14)

0x8a8: Push(Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8aa: Push("aunholster")
0x8ab: @ PlayAnimation(Stack[-1])
0x8ac: Pop(1)
0x8ad: @ WaitForAnimEnd()
0x8ae: Pop(0)
0x8af: GOTO 0x8b8

0x8b0: Push((int) -1)
0x8b1: @ SetHandsItem(Stack[-1])
0x8b2: Pop(1)
0x8b3: Push("unholster")
0x8b4: @ PlayAnimation(Stack[-1])
0x8b5: Pop(1)
0x8b6: @ WaitForAnimEnd()
0x8b7: Pop(0)
0x8b8: Return(); Pop(14)

0x8b9: Stack[-3] = 0
0x8ba: Stack[-4] = 0
0x8bb: PushEmpty()
0x8bc: Push((int) 10)
0x8bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8be: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8bf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x8c0: GOTO 0x8c5

0x8c1: PushEmpty(int)
0x8c2: Stack[-1] = Stack[-2]
0x8c3: Call 0xc43

0x8c4: Pop(1)
0x8c5: Return(); Pop(0)

0x8c6: Stack[-1] = (float) 0.5
0x8c7: Return(); Pop(0)

0x8c8: Stack[-1] = (int) 0
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty(object, bool, bool, bool, bool, int, int, object, bool, bool, bool, bool, int, int)
0x8cb: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8cc: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x8cd: Push("use_begin")
0x8ce: @ PlayAnimation(Stack[-1])
0x8cf: Pop(1)
0x8d0: @ WaitForAnimEnd()
0x8d1: Pop(0)
0x8d2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d4: Return(); Pop(14)

0x8d5: @ GetPlayerSelectedObject(Stack[-7])
0x8d6: Pop(0)
0x8d7: Stack[-6] = (bool) 0
0x8d8: PushEmpty(bool, object, string)
0x8d9: Stack[-2] = Stack[-10]
0x8da: Stack[-1] = "lp"
0x8db: Call 0xa59

0x8dc: Pop(2)
0x8dd: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x8de: Push("lp")
0x8df: @@ GetProperty(Stack[-1], Stack[-6])
0x8e0: Pop(1)
0x8e1: Push(Stack[-5])
0x8e2: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x8e3: Push("locked")
0x8e4: @@ GetProperty(Stack[-1], Stack[-5])
0x8e5: Pop(1)
0x8e6: Push(Stack[-4])
0x8e7: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x8e8: Stack[-6] = (bool) 1
0x8e9: Push("locked")
0x8ea: Push((bool) 0)
0x8eb: @@ SetProperty(Stack[-2], Stack[-1])
0x8ec: Pop(2)
0x8ed: Stack[-2] = (int) 0
0x8ee: Push("uses")
0x8ef: @ GetWeaponProperty(Stack[-4], Stack[-1], Stack[-3])
0x8f0: Pop(1)
0x8f1: Push((int) 1)
0x8f2: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x8f3: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8f4: @ GetWeaponItem(Stack[-1])
0x8f5: Pop(0)
0x8f6: Push((bool) 0)
0x8f7: Push((int) 0)
0x8f8: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(2)
0x8fa: Push((int) 1)
0x8fb: Push((int) 0)
0x8fc: @ RemoveItem(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(2)
0x8fe: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x8ff: GOTO 0x905

0x900: Push("uses")
0x901: Push((int) 1)
0x902: Pop(1); Push(Stack[-4] - Stack[-1]);
0x903: @ SetWeaponProperty(Stack[-5], Stack[-2], Stack[-1])
0x904: Pop(2)
0x905: Push(Stack[-6])
0x906: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x907: Push("use_success")
0x908: @ PlayAnimation(Stack[-1])
0x909: Pop(1)
0x90a: GOTO 0x90e

0x90b: Push("use_fail")
0x90c: @ PlayAnimation(Stack[-1])
0x90d: Pop(1)
0x90e: @ WaitForAnimEnd()
0x90f: Pop(0)
0x910: Push( Stack[0 + Tasks[-1].StackPointer] )
0x911: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x912: Return(); Pop(14)

0x913: Push( Stack[1 + Tasks[-1].StackPointer] )
0x914: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x915: Push("holster")
0x916: @ PlayAnimation(Stack[-1])
0x917: Pop(1)
0x918: @ WaitForAnimEnd()
0x919: Pop(0)
0x91a: Push((int) -1)
0x91b: @ SetHandsItem(Stack[-1])
0x91c: Pop(1)
0x91d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x91e: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x91f: Return(); Pop(14)

0x920: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x921: Push("unholster")
0x922: @ PlayAnimation(Stack[-1])
0x923: Pop(1)
0x924: @ WaitForAnimEnd()
0x925: Pop(0)
0x926: Return(); Pop(14)

0x927: Stack[-7] = 0
0x928: PushEmpty(bool)
0x929: Stack[-1] = (bool) 0
0x92a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x92b: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x92d: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92e: Stack[-1] = (bool) 1
0x92f: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x930: Push((int) -1)
0x931: @ SetHandsItem(Stack[-1])
0x932: Pop(1)
0x933: Return(); Pop(0)

0x934: PushEmpty()
0x935: Push("empty")
0x936: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x938: PushEmpty()
0x939: Push(-0, 1); TaskCall(2)
0x93a: Call 0x8a

0x93b: Pop(-0, 1); TaskReturn
0x93c: Pop(0)
0x93d: GOTO 0x997

0x93e: Push("scalpel")
0x93f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x941: PushEmpty()
0x942: Push(-0, 1); TaskCall(3)
0x943: Call 0x15b

0x944: Pop(-0, 1); TaskReturn
0x945: Pop(0)
0x946: GOTO 0x997

0x947: Push("hammer")
0x948: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x949: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x94a: PushEmpty()
0x94b: Push(-0, 1); TaskCall(4)
0x94c: Call 0x224

0x94d: Pop(-0, 1); TaskReturn
0x94e: Pop(0)
0x94f: GOTO 0x997

0x950: Push("knife")
0x951: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x952: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x953: PushEmpty()
0x954: Push(-0, 1); TaskCall(5)
0x955: Call 0x2ed

0x956: Pop(-0, 1); TaskReturn
0x957: Pop(0)
0x958: GOTO 0x997

0x959: Push("trost")
0x95a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x95b: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x95c: PushEmpty()
0x95d: Push(-0, 1); TaskCall(6)
0x95e: Call 0x3b6

0x95f: Pop(-0, 1); TaskReturn
0x960: Pop(0)
0x961: GOTO 0x997

0x962: Push("rifle")
0x963: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x964: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x965: PushEmpty()
0x966: Push(-0, 1); TaskCall(7)
0x967: Call 0x499

0x968: Pop(-0, 1); TaskReturn
0x969: Pop(0)
0x96a: GOTO 0x997

0x96b: Push("revolver")
0x96c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x96e: PushEmpty()
0x96f: Push(-0, 1); TaskCall(8)
0x970: Call 0x599

0x971: Pop(-0, 1); TaskReturn
0x972: Pop(0)
0x973: GOTO 0x997

0x974: Push("samopal")
0x975: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x976: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x977: PushEmpty()
0x978: Push(-0, 1); TaskCall(9)
0x979: Call 0x699

0x97a: Pop(-0, 1); TaskReturn
0x97b: Pop(0)
0x97c: GOTO 0x997

0x97d: Push("ognemet")
0x97e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x980: PushEmpty()
0x981: Push(-0, 3); TaskCall(10)
0x982: Call 0x748

0x983: Pop(-0, 3); TaskReturn
0x984: Pop(0)
0x985: GOTO 0x997

0x986: Push("bottle")
0x987: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x989: PushEmpty()
0x98a: Push(-0, 1); TaskCall(11)
0x98b: Call 0x863

0x98c: Pop(-0, 1); TaskReturn
0x98d: Pop(0)
0x98e: GOTO 0x997

0x98f: Push("lockpick")
0x990: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x991: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x992: PushEmpty()
0x993: Push(-0, 2); TaskCall(12)
0x994: Call 0x8ca

0x995: Pop(-0, 2); TaskReturn
0x996: Pop(0)
0x997: Return(); Pop(0)

0x998: PushEmpty()
0x999: Push("empty")
0x99a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99b: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99c: PushEmpty(float)
0x99d: Stack[-1] = (float) 0.25
0x99e: Push(-1, 2); TaskCall(1)
0x99f: Call 0x26

0x9a0: Pop(-1, 2); TaskReturn
0x9a1: Pop(1)
0x9a2: Return(); Pop(0)

0x9a3: PushEmpty(bool, float, bool, bool, bool, float, bool, bool)
0x9a4: Push(GlobalVars[1])
0x9a5: PushEmpty(object)
0x9a6: Call 0xaf6

0x9a7: Stack[-2] = Stack[-1]
0x9a8: Pop(1)
0x9a9: GlobalVars[1] = Stack[-1]; Pop(1)
0x9aa: Push("effects")
0x9ab: @ HasProperty(Stack[-1], Stack[-5])
0x9ac: Pop(1)
0x9ad: Pop(0); Push((bool) Stack[-4] == 0)
0x9ae: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9af: Push("effects")
0x9b0: Push((bool) 1)
0x9b1: @ SetProperty(Stack[-2], Stack[-1])
0x9b2: Pop(2)
0x9b3: Push("player_disease.bin")
0x9b4: @ ApplyEffect(Stack[-1])
0x9b5: Pop(1)
0x9b6: Push("player_stat.bin")
0x9b7: @ ApplyEffect(Stack[-1])
0x9b8: Pop(1)
0x9b9: Push("player_hit.bin")
0x9ba: @ ApplyEffect(Stack[-1])
0x9bb: Pop(1)
0x9bc: Push("player_head.bin")
0x9bd: @ ApplyEffect(Stack[-1])
0x9be: Pop(1)
0x9bf: Push("player_flashlight.bin")
0x9c0: @ ApplyEffect(Stack[-1])
0x9c1: Pop(1)
0x9c2: Push("player_visir.bin")
0x9c3: @ ApplyEffect(Stack[-1])
0x9c4: Pop(1)
0x9c5: PushEmpty()
0x9c6: Call 0xa49

0x9c7: Pop(0)
0x9c8: Push("health")
0x9c9: @ GetProperty(Stack[-1], Stack[-4])
0x9ca: Pop(1)
0x9cb: Push((int) 0)
0x9cc: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9ce: PushEmpty()
0x9cf: Call 0xba0

0x9d0: Pop(0)
0x9d1: Return(); Pop(8)

0x9d2: @ IsWeaponHolstered(Stack[-2])
0x9d3: Pop(0)
0x9d4: Pop(0); Push((bool) Stack[-2] == 0)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9d6: @ IsWalking(Stack[-1])
0x9d7: Pop(0)
0x9d8: Push(Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9da: Push("walk")
0x9db: @ PlayAnimation(Stack[-1])
0x9dc: Pop(1)
0x9dd: @ WaitForAnimEnd()
0x9de: Pop(0)
0x9df: GOTO 0x9e3

0x9e0: Push((float)0.1)
0x9e1: @ Sleep(Stack[-1])
0x9e2: Pop(1)
0x9e3: GOTO 0x9d2

0x9e4: Return(); Pop(8)

0x9e5: PushEmpty(bool, string, bool, bool, string, bool)
0x9e6: @ IsWeaponHolstered(Stack[-3])
0x9e7: Pop(0)
0x9e8: Pop(0); Push((bool) Stack[-3] == 0)
0x9e9: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9ea: PushEmpty()
0x9eb: Call 0xa4d

0x9ec: Pop(0)
0x9ed: @ GetCurrentWeapon(Stack[-2])
0x9ee: Pop(0)
0x9ef: PushEmpty(string)
0x9f0: Stack[-1] = Stack[-3]
0x9f1: Call 0x934

0x9f2: Pop(1)
0x9f3: PushEmpty()
0x9f4: Call 0xa49

0x9f5: Pop(0)
0x9f6: @ IsAltShooting(Stack[-1])
0x9f7: Pop(0)
0x9f8: Push(Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fa: PushEmpty()
0x9fb: Call 0x9fe

0x9fc: Pop(0)
0x9fd: Return(); Pop(6)

0x9fe: PushEmpty(bool, string, bool, bool, string, bool)
0x9ff: @ IsWeaponHolstered(Stack[-3])
0xa00: Pop(0)
0xa01: Pop(0); Push((bool) Stack[-3] == 0)
0xa02: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa03: PushEmpty()
0xa04: Call 0xa4d

0xa05: Pop(0)
0xa06: @ GetCurrentWeapon(Stack[-2])
0xa07: Pop(0)
0xa08: PushEmpty(string)
0xa09: Stack[-1] = Stack[-3]
0xa0a: Call 0x998

0xa0b: Pop(1)
0xa0c: PushEmpty()
0xa0d: Call 0xa49

0xa0e: Pop(0)
0xa0f: @ IsShooting(Stack[-1])
0xa10: Pop(0)
0xa11: Push(Stack[-1])
0xa12: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa13: PushEmpty()
0xa14: Call 0x9e5

0xa15: Pop(0)
0xa16: Return(); Pop(6)

0xa17: PushEmpty()
0xa18: Call 0xa4d

0xa19: Pop(0)
0xa1a: PushEmpty()
0xa1b: Push(-0, 0); TaskCall(0)
0xa1c: Call 0x0

0xa1d: Pop(-0, 0); TaskReturn
0xa1e: Pop(0)
0xa1f: PushEmpty()
0xa20: Call 0xa49

0xa21: Pop(0)
0xa22: Return(); Pop(0)

0xa23: PushEmpty(bool, int, bool, int)
0xa24: Push((int) 10)
0xa25: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa26: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa27: PushEmpty()
0xa28: Call 0xbda

0xa29: Pop(0)
0xa2a: Return(); Pop(4)

0xa2b: GOTO 0xa33

0xa2c: Push((int) 11)
0xa2d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa2e: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa2f: PushEmpty()
0xa30: Call 0xbde

0xa31: Pop(0)
0xa32: Return(); Pop(4)

0xa33: PushEmpty()
0xa34: Call 0xa4d

0xa35: Pop(0)
0xa36: @ IsWeaponHolstered(Stack[-2])
0xa37: Pop(0)
0xa38: Pop(0); Push((bool) Stack[-2] == 0)
0xa39: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa3a: Push((int) 2)
0xa3b: @ irand(Stack[-2], Stack[-1])
0xa3c: Pop(1)
0xa3d: Push("idle")
0xa3e: Push((int) 1)
0xa3f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa40: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa41: @ PlayAnimation(Stack[-1])
0xa42: Pop(1)
0xa43: @ WaitForAnimEnd()
0xa44: Pop(0)
0xa45: PushEmpty()
0xa46: Call 0xa49

0xa47: Pop(0)
0xa48: Return(); Pop(4)

0xa49: PushEmpty()
0xa4a: Call 0xcd1

0xa4b: Pop(0)
0xa4c: Return(); Pop(0)

0xa4d: Push((int) 0)
0xa4e: @ KillTimer(Stack[-1])
0xa4f: Pop(1)
0xa50: Return(); Pop(0)

0xa51: PushEmpty()
0xa52: Push((int) 1)
0xa53: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa54: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa55: Stack[-2] = "fire"
0xa56: Return(); Pop(0)

0xa57: Stack[-2] = "phys"
0xa58: Return(); Pop(0)

0xa59: PushEmpty(bool, bool)
0xa5a: Push("HasProperty")
0xa5b: Push((int) 2)
0xa5c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xa5d: Pop(1); Push((bool) Stack[-1] == 0)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa5f: Stack[-5] = (bool) 0
0xa60: Return(); Pop(2)

0xa61: @@ HasProperty(Stack[-3], Stack[-1])
0xa62: Pop(0)
0xa63: Stack[-5] = Stack[-1]
0xa64: Return(); Pop(2)

0xa65: PushEmpty(float, float)
0xa66: @ GetProperty(Stack[-4], Stack[-1])
0xa67: Pop(0)
0xa68: Pop(0); Push(Stack[-1] + Stack[-3]);
0xa69: @ SetProperty(Stack[-5], Stack[-1])
0xa6a: Pop(1)
0xa6b: Return(); Pop(2)

0xa6c: PushEmpty(bool, float, bool, float)
0xa6d: @ HasProperty(Stack[-8], Stack[-2])
0xa6e: Pop(0)
0xa6f: Pop(0); Push((bool) Stack[-2] == 0)
0xa70: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa71: Stack[-9] = (bool) 0
0xa72: Return(); Pop(4)

0xa73: @ GetProperty(Stack[-8], Stack[-1])
0xa74: Pop(0)
0xa75: PushEmpty(float, float, float, float)
0xa76: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0xa77: Stack[-2] = Stack[-10]
0xa78: Stack[-1] = Stack[-9]
0xa79: Call 0xae0

0xa7a: Pop(3)
0xa7b: @ SetProperty(Stack[-9], Stack[-1])
0xa7c: Pop(1)
0xa7d: Stack[-9] = (bool) 1
0xa7e: Return(); Pop(4)

0xa7f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xa80: PushEmpty(bool, object, string)
0xa81: Stack[-2] = Stack[-18]
0xa82: Stack[-1] = "health"
0xa83: Call 0xa59

0xa84: Pop(2)
0xa85: Pop(1); Push((bool) Stack[-1] == 0)
0xa86: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa87: Stack[-16] = (float) 0.0
0xa88: Return(); Pop(12)

0xa89: PushEmpty(bool, object, string)
0xa8a: Stack[-2] = Stack[-18]
0xa8b: Stack[-1] = "armor"
0xa8c: Call 0xa59

0xa8d: Pop(2)
0xa8e: Pop(1); Push((bool) Stack[-1] == 0)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa90: Stack[-6] = (int) 0
0xa91: GOTO 0xa95

0xa92: Push("armor")
0xa93: @@ GetProperty(Stack[-1], Stack[-7])
0xa94: Pop(1)
0xa95: Push("armor_")
0xa96: PushEmpty(string, int)
0xa97: Stack[-1] = Stack[-16]
0xa98: Call 0xa51

0xa99: Pop(1)
0xa9a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa9b: PushEmpty(bool, object, string)
0xa9c: Stack[-2] = Stack[-18]
0xa9d: Stack[-1] = Stack[-8]
0xa9e: Call 0xa59

0xa9f: Pop(2)
0xaa0: Pop(1); Push((bool) Stack[-1] == 0)
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa2: Stack[-4] = (int) 0
0xaa3: GOTO 0xaa6

0xaa4: @@ GetProperty(Stack[-5], Stack[-4])
0xaa5: Pop(0)
0xaa6: PushEmpty(float, float, float)
0xaa7: Pop(0); Push(Stack[-9] + Stack[-7]);
0xaa8: Push((float)100.0)
0xaa9: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xaaa: Stack[-1] = (int) 1
0xaab: Call 0xad9

0xaac: Stack[-6] = Stack[-3]
0xaad: Pop(3)
0xaae: Push("health")
0xaaf: @@ GetProperty(Stack[-1], Stack[-3])
0xab0: Pop(1)
0xab1: Push((int) 1)
0xab2: Pop(1); Push(Stack[-1] - Stack[-4]);
0xab3: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xab4: Push("health")
0xab5: PushEmpty(float, float, float, float)
0xab6: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xab7: Stack[-2] = (int) 0
0xab8: Stack[-1] = (int) 1
0xab9: Call 0xae0

0xaba: Pop(3)
0xabb: @@ SetProperty(Stack[-2], Stack[-1])
0xabc: Pop(2)
0xabd: Stack[-16] = Stack[-1]
0xabe: Return(); Pop(12)

0xabf: PushEmpty()
0xac0: Push((int) 1)
0xac1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac2: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac3: Stack[-2] = "wood"
0xac4: Return(); Pop(0)

0xac5: GOTO 0xad1

0xac6: Push((int) 2)
0xac7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac8: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac9: Stack[-2] = "metal"
0xaca: Return(); Pop(0)

0xacb: GOTO 0xad1

0xacc: Push((int) 3)
0xacd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xace: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacf: Stack[-2] = "ground"
0xad0: Return(); Pop(0)

0xad1: Stack[-2] = "stone"
0xad2: Return(); Pop(0)

0xad3: PushEmpty(object, object)
0xad4: @ self(Stack[-1])
0xad5: Pop(0)
0xad6: Stack[-3] = Stack[-1]
0xad7: Return(); Pop(2)

0xad8: Stack[-1] = 0
0xad9: PushEmpty()
0xada: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadc: Stack[-3] = Stack[-2]
0xadd: GOTO 0xadf

0xade: Stack[-3] = Stack[-1]
0xadf: Return(); Pop(0)

0xae0: PushEmpty()
0xae1: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xae2: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae3: Stack[-4] = Stack[-2]
0xae4: Return(); Pop(0)

0xae5: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xae6: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xae7: Stack[-4] = Stack[-1]
0xae8: Return(); Pop(0)

0xae9: Stack[-4] = Stack[-3]
0xaea: Return(); Pop(0)

0xaeb: PushEmpty()
0xaec: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xaed: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xaee: Stack[-4] = Stack[-2]
0xaef: Return(); Pop(0)

0xaf0: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaf2: Stack[-4] = Stack[-1]
0xaf3: Return(); Pop(0)

0xaf4: Stack[-4] = Stack[-3]
0xaf5: Return(); Pop(0)

0xaf6: PushEmpty(object, object)
0xaf7: @ CreateObjectSet(Stack[-1])
0xaf8: Pop(0)
0xaf9: Stack[-3] = Stack[-1]
0xafa: Return(); Pop(2)

0xafb: Stack[-1] = 0
0xafc: PushEmpty()
0xafd: Push(CvectorIndex(Stack[-2], 0))
0xafe: Push(CvectorIndex(Stack[-2], 0))
0xaff: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb00: Push(CvectorIndex(Stack[-3], 2))
0xb01: Push(CvectorIndex(Stack[-3], 2))
0xb02: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb03: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb04: Return(); Pop(0)

0xb05: PushEmpty()
0xb06: Push(CvectorIndex(Stack[-1], 0))
0xb07: Push(CvectorIndex(Stack[-2], 0))
0xb08: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb09: Push(CvectorIndex(Stack[-2], 2))
0xb0a: Push(CvectorIndex(Stack[-3], 2))
0xb0b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb0c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0d: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xb0e: Return(); Pop(0)

0xb0f: PushEmpty()
0xb10: PushEmpty(float, cvector, cvector)
0xb11: Stack[-2] = Stack[-5]
0xb12: Stack[-1] = Stack[-4]
0xb13: Call 0xafc

0xb14: Pop(2)
0xb15: PushEmpty(float, cvector)
0xb16: Stack[-1] = Stack[-5]
0xb17: Call 0xb05

0xb18: Pop(1)
0xb19: PushEmpty(float, cvector)
0xb1a: Stack[-1] = Stack[-5]
0xb1b: Call 0xb05

0xb1c: Pop(1)
0xb1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb1e: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb1f: Return(); Pop(0)

0xb20: PushEmpty(int, int)
0xb21: Push("kerosene")
0xb22: @ GetItemCountOfType(Stack[-2], Stack[-1])
0xb23: Pop(1)
0xb24: Stack[-3] = Stack[-1]
0xb25: Return(); Pop(2)

0xb26: PushEmpty(int, int, bool, bool, int, int, bool, bool)
0xb27: @ GetInvItemByName(Stack[-4], Stack[-10])
0xb28: Pop(0)
0xb29: Stack[-3] = (int) 0
0xb2a: Pop(0); Push((bool) Stack[-3] < Stack[-9])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb2c: Push((int) 1)
0xb2d: @ RemoveItemByType(Stack[-3], Stack[-5], Stack[-1])
0xb2e: Pop(1)
0xb2f: Pop(0); Push((bool) Stack[-2] == 0)
0xb30: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb31: GOTO 0xb35

0xb32: Push((int) 1)
0xb33: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xb34: GOTO 0xb2a

0xb35: Pop(0); Push((bool) Stack[-3] == 0)
0xb36: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb37: Stack[-11] = (bool) 0
0xb38: Return(); Pop(8)

0xb39: Push("ammo")
0xb3a: @ SetWeaponProperty(Stack[-2], Stack[-1], Stack[-4])
0xb3b: Pop(1)
0xb3c: Stack[-11] = (bool) 1
0xb3d: Return(); Pop(8)

0xb3e: PushEmpty(bool, int, bool, int)
0xb3f: Push("durability")
0xb40: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0xb41: Pop(1)
0xb42: Push(Stack[-2])
0xb43: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb44: Push((float)100.0)
0xb45: Stack[-6] = Stack[-2] / Stack[-1]; Pop(1);
0xb46: GOTO 0xb48

0xb47: Stack[-5] = (float) 1.0
0xb48: Return(); Pop(4)

0xb49: PushEmpty(bool, int, bool, int)
0xb4a: Push("durability")
0xb4b: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0xb4c: Pop(1)
0xb4d: Push(Stack[-2])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb4f: PushEmpty(int, int, int, int)
0xb50: Stack[-3] = Stack[-5] - Stack[-9]; Pop(0);
0xb51: Stack[-2] = (int) 0
0xb52: Stack[-1] = (int) 100
0xb53: Call 0xaeb

0xb54: Stack[-5] = Stack[-4]
0xb55: Pop(4)
0xb56: GOTO 0xb58

0xb57: Stack[-1] = (int) 100
0xb58: Push("durability")
0xb59: @ SetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0xb5a: Pop(1)
0xb5b: Return(); Pop(4)

0xb5c: PushEmpty()
0xb5d: PushEmpty(float)
0xb5e: Call 0xb3e

0xb5f: Pop(0)
0xb60: Push((int) 1)
0xb61: Pop(1); Push(Stack[-1] - Stack[-3]);
0xb62: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb63: Stack[-3] = Stack[-2] + Stack[-1]; Pop(1);
0xb64: Return(); Pop(0)

0xb65: PushEmpty(bool, int, string, int, bool, int, string, string, bool, int, string, int, bool, int, string, string)
0xb66: @ GetGroundMaterial(Stack[-8], Stack[-7])
0xb67: Pop(0)
0xb68: Pop(0); Push((bool) Stack[-8] == 0)
0xb69: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb6a: Stack[-7] = (int) -1
0xb6b: PushEmpty(string, int)
0xb6c: Stack[-1] = Stack[-9]
0xb6d: Call 0xabf

0xb6e: Stack[-8] = Stack[-2]
0xb6f: Pop(2)
0xb70: Stack[-5] = (int) 0
0xb71: Push("step_")
0xb72: Pop(1); Push(Stack[-1] + Stack[-7]);
0xb73: Push((int) 1)
0xb74: Pop(1); Push(Stack[-7] + Stack[-1]);
0xb75: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb76: @ IsExistingSound(Stack[-5], Stack[-1])
0xb77: Pop(1)
0xb78: Pop(0); Push((bool) Stack[-4] == 0)
0xb79: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb7a: GOTO 0xb7e

0xb7b: Push((int) 1)
0xb7c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb7d: GOTO 0xb71

0xb7e: Pop(0); Push((bool) Stack[-5] == 0)
0xb7f: IF (Stack[-1] == 0) GOTO 0xb84; Pop(1)

0xb80: Push(GlobalVars[0])
0xb81: Stack[-1] = ""
0xb82: GlobalVars[0] = Stack[-1]; Pop(1)
0xb83: Return(); Pop(16)

0xb84: Push((int) 1)
0xb85: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb87: Stack[-3] = (int) 0
0xb88: GOTO 0xb95

0xb89: @ irand(Stack[-3], Stack[-5])
0xb8a: Pop(0)
0xb8b: Push("step_")
0xb8c: Pop(1); Push(Stack[-1] + Stack[-7]);
0xb8d: Push((int) 1)
0xb8e: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb8f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xb90: Push(GlobalVars[0])
0xb91: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xb92: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb93: GOTO 0xb95

0xb94: GOTO 0xb89

0xb95: Push("step_")
0xb96: Pop(1); Push(Stack[-1] + Stack[-7]);
0xb97: Push((int) 1)
0xb98: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb99: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb9a: @ PlaySound(Stack[-1])
0xb9b: Pop(0)
0xb9c: Push(GlobalVars[0])
0xb9d: Stack[-1] = Stack[-2]
0xb9e: GlobalVars[0] = Stack[-1]; Pop(1)
0xb9f: Return(); Pop(16)

0xba0: PushEmpty(bool, object, object, bool, object, object)
0xba1: @ IsDead(Stack[-3])
0xba2: Pop(0)
0xba3: Pop(0); Push((bool) Stack[-3] == 0)
0xba4: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xba5: @ SetDeathState()
0xba6: Pop(0)
0xba7: @ GetMainOutdoorScene(Stack[-2])
0xba8: Pop(0)
0xba9: Push("player_death")
0xbaa: Push("play_death_danko.bin")
0xbab: @ AddBlankActor(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0xbac: Pop(2)
0xbad: Stack[-1] = 0
0xbae: Stack[-2] = 0
0xbaf: Return(); Pop(6)

0xbb0: PushEmpty(bool, bool)
0xbb1: Push((int) 11)
0xbb2: @ KillTimer(Stack[-1], Stack[-2])
0xbb3: Pop(1)
0xbb4: Push(Stack[-1])
0xbb5: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb6: Push((int) -2)
0xbb7: @ ModNoise(Stack[-1])
0xbb8: Pop(1)
0xbb9: Return(); Pop(2)

0xbba: PushEmpty()
0xbbb: Call 0xbb0

0xbbc: Pop(0)
0xbbd: Push((int) 11)
0xbbe: Push((float)0.15)
0xbbf: @ SetTimer(Stack[-2], Stack[-1])
0xbc0: Pop(2)
0xbc1: Push((int) 2)
0xbc2: @ ModNoise(Stack[-1])
0xbc3: Pop(1)
0xbc4: Return(); Pop(0)

0xbc5: PushEmpty(bool, bool)
0xbc6: Push((int) 10)
0xbc7: @ KillTimer(Stack[-1], Stack[-2])
0xbc8: Pop(1)
0xbc9: Push(Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbcb: Push((int) -1)
0xbcc: @ ModNoise(Stack[-1])
0xbcd: Pop(1)
0xbce: Return(); Pop(2)

0xbcf: PushEmpty()
0xbd0: Call 0xbc5

0xbd1: Pop(0)
0xbd2: Push((int) 10)
0xbd3: Push((float)0.35)
0xbd4: @ SetTimer(Stack[-2], Stack[-1])
0xbd5: Pop(2)
0xbd6: Push((int) 1)
0xbd7: @ ModNoise(Stack[-1])
0xbd8: Pop(1)
0xbd9: Return(); Pop(0)

0xbda: PushEmpty()
0xbdb: Call 0xb65

0xbdc: Pop(0)
0xbdd: Return(); Pop(0)

0xbde: PushEmpty()
0xbdf: Call 0xb65

0xbe0: Pop(0)
0xbe1: PushEmpty()
0xbe2: Call 0xbb0

0xbe3: Pop(0)
0xbe4: Return(); Pop(0)

0xbe5: PushEmpty()
0xbe6: Push("die")
0xbe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe8: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbe9: PushEmpty()
0xbea: Call 0xba0

0xbeb: Pop(0)
0xbec: Return(); Pop(0)

0xbed: PushEmpty(float, float)
0xbee: Push("health")
0xbef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf1: Push("health")
0xbf2: @ GetProperty(Stack[-1], Stack[-2])
0xbf3: Pop(1)
0xbf4: Push((int) 0)
0xbf5: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xbf6: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf7: @ SignalDeath(Stack[-4])
0xbf8: Pop(0)
0xbf9: Return(); Pop(2)

0xbfa: PushEmpty()
0xbfb: PushEmpty()
0xbfc: Call 0xba0

0xbfd: Pop(0)
0xbfe: Return(); Pop(0)

0xbff: PushEmpty(bool, bool)
0xc00: Push(GlobalVars[1])
0xc01: @@ in(Stack[-2], Stack[-5])
0xc02: Pop(1)
0xc03: Push(Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xc05: Return(); Pop(2)

0xc06: Push(GlobalVars[1])
0xc07: @@ add(Stack[-5])
0xc08: Pop(1)
0xc09: PushEmpty(bool, string, float, float, float)
0xc0a: Stack[-4] = "reputation"
0xc0b: Stack[-3] = Stack[-8]
0xc0c: Stack[-2] = (int) 0
0xc0d: Stack[-1] = (int) 1
0xc0e: Call 0xa6c

0xc0f: Pop(5)
0xc10: Return(); Pop(2)

0xc11: PushEmpty()
0xc12: Call 0xcd1

0xc13: Pop(0)
0xc14: PushEmpty()
0xc15: Call 0xbba

0xc16: Pop(0)
0xc17: Return(); Pop(0)

0xc18: PushEmpty()
0xc19: Call 0xbcf

0xc1a: Pop(0)
0xc1b: PushEmpty()
0xc1c: Call 0xbb0

0xc1d: Pop(0)
0xc1e: Return(); Pop(0)

0xc1f: PushEmpty()
0xc20: Call 0xbc5

0xc21: Pop(0)
0xc22: PushEmpty()
0xc23: Call 0xbba

0xc24: Pop(0)
0xc25: Return(); Pop(0)

0xc26: PushEmpty()
0xc27: Return(); Pop(0)

0xc28: PushEmpty(float, float, float, float)
0xc29: Push((float)770.0)
0xc2a: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0xc2b: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc2c: @ Trace(Stack[-5])
0xc2d: Pop(0)
0xc2e: Push((float)770.0)
0xc2f: Pop(1); Push(Stack[-6] - Stack[-1]);
0xc30: Push((float)0.0035)
0xc31: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0xc32: PushEmpty(float, object, float, int)
0xc33: PushEmpty(object)
0xc34: Call 0xad3

0xc35: Stack[-4] = Stack[-1]
0xc36: Pop(1)
0xc37: Stack[-2] = Stack[-6]
0xc38: Stack[-1] = (int) 0
0xc39: Call 0xa7f

0xc3a: Stack[-5] = Stack[-4]
0xc3b: Pop(4)
0xc3c: PushEmpty(object)
0xc3d: Call 0xad3

0xc3e: Pop(0)
0xc3f: Push((int) 0)
0xc40: @ ReportHit(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0xc41: Pop(2)
0xc42: Return(); Pop(4)

0xc43: PushEmpty(object, object, object, cvector, string, bool, cvector, bool, bool, int, int, bool, object, object, object, cvector, string, bool, cvector, bool, bool, int, int, bool)
0xc44: Push((int) 0)
0xc45: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc46: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc47: @ Inventory()
0xc48: Pop(0)
0xc49: GOTO 0xcd0

0xc4a: Push((int) 1)
0xc4b: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc4c: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc4d: @ GetMainOutdoorScene(Stack[-12])
0xc4e: Pop(0)
0xc4f: @ GetActiveScene(Stack[-11])
0xc50: Pop(0)
0xc51: Pop(0); Push((bool) Stack[-12] == 0)
0xc52: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc53: Push("Can't find main outdoor oscene")
0xc54: @ Trace(Stack[-1])
0xc55: Pop(1)
0xc56: Return(); Pop(24)

0xc57: @@ GetMap(Stack[-10])
0xc58: Pop(0)
0xc59: Pop(0); Push((bool) Stack[-10] == 0)
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5b: Push("Can't find map")
0xc5c: @ Trace(Stack[-1])
0xc5d: Pop(1)
0xc5e: Return(); Pop(24)

0xc5f: Pop(0); Push((bool) Stack[-12] == Stack[-11])
0xc60: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc61: @ GetPosition(Stack[-9])
0xc62: Pop(0)
0xc63: GOTO 0xc71

0xc64: @@ GetName(Stack[-8])
0xc65: Pop(0)
0xc66: Push("pt_gmap_")
0xc67: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc68: @@ GetLocator(Stack[-1], Stack[-8], Stack[-10], Stack[-7])
0xc69: Pop(1)
0xc6a: Pop(0); Push((bool) Stack[-7] == 0)
0xc6b: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6c: Push("FIXME: No map locator for scene : ")
0xc6d: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc6e: @ Trace(Stack[-1])
0xc6f: Pop(1)
0xc70: Stack[-9] = CVector(0.0, 0.0, 0.0)
0xc71: Push(CvectorIndex(Stack[-9], 0))
0xc72: Push(CvectorIndex(Stack[-10], 2))
0xc73: @@ SetMapParams(Stack[-2], Stack[-1])
0xc74: Pop(2)
0xc75: @ ShowMap(Stack[-10])
0xc76: Pop(0)
0xc77: Stack[-10] = 0
0xc78: Stack[-11] = 0
0xc79: Stack[-12] = 0
0xc7a: GOTO 0xcd0

0xc7b: Push((int) 2)
0xc7c: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc7d: IF (Stack[-1] == 0) GOTO 0xc81; Pop(1)

0xc7e: @ Diary()
0xc7f: Pop(0)
0xc80: GOTO 0xcd0

0xc81: Push((int) 3)
0xc82: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc83: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc84: @ ShowMessage()
0xc85: Pop(0)
0xc86: GOTO 0xcd0

0xc87: Push((int) 4)
0xc88: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc89: IF (Stack[-1] == 0) GOTO 0xc8d; Pop(1)

0xc8a: @ ShowPlayerStats()
0xc8b: Pop(0)
0xc8c: GOTO 0xcd0

0xc8d: Push((int) 5)
0xc8e: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc8f: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xc90: @ IsFlashlightOn(Stack[-5])
0xc91: Pop(0)
0xc92: Push(Stack[-5])
0xc93: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc94: Push((bool) 0)
0xc95: @ SwitchFlashlight(Stack[-1])
0xc96: Pop(1)
0xc97: Push("flashlight_off")
0xc98: @ PlaySound(Stack[-1])
0xc99: Pop(1)
0xc9a: GOTO 0xca9

0xc9b: PushEmpty(bool)
0xc9c: Call 0xb20

0xc9d: Pop(0)
0xc9e: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xc9f: Push((bool) 1)
0xca0: @ SwitchFlashlight(Stack[-1])
0xca1: Pop(1)
0xca2: Push("flashlight_on")
0xca3: @ PlaySound(Stack[-1])
0xca4: Pop(1)
0xca5: GOTO 0xca9

0xca6: Push("flashlight_nofuel")
0xca7: @ PlaySound(Stack[-1])
0xca8: Pop(1)
0xca9: GOTO 0xcd0

0xcaa: Push((int) 6)
0xcab: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xcac: IF (Stack[-1] == 0) GOTO 0xcc5; Pop(1)

0xcad: @ IsVisirOn(Stack[-4])
0xcae: Pop(0)
0xcaf: Push(Stack[-4])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb1: Push((bool) 0)
0xcb2: @ SwitchVisir(Stack[-1])
0xcb3: Pop(1)
0xcb4: GOTO 0xcc4

0xcb5: Push("visir")
0xcb6: @ GetProperty(Stack[-1], Stack[-4])
0xcb7: Pop(1)
0xcb8: Push(Stack[-3])
0xcb9: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcba: Push("vcharge")
0xcbb: @ GetProperty(Stack[-1], Stack[-3])
0xcbc: Pop(1)
0xcbd: Push((int) 10)
0xcbe: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc0: Push((bool) 1)
0xcc1: @ SwitchVisir(Stack[-1])
0xcc2: Pop(1)
0xcc3: GOTO 0xcc4

0xcc4: GOTO 0xcd0

0xcc5: Push((int) 7)
0xcc6: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xcc7: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcc8: @ IsOverrideActive(Stack[-1])
0xcc9: Pop(0)
0xcca: Pop(0); Push((bool) Stack[-1] == 0)
0xccb: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xccc: Push("people.xml")
0xccd: Push((bool) 1)
0xcce: @ ShowWindow(Stack[-2], Stack[-1])
0xccf: Pop(2)
0xcd0: Return(); Pop(24)

0xcd1: PushEmpty(float, float)
0xcd2: Push((int) 10)
0xcd3: Push((int) 30)
0xcd4: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xcd5: Pop(2)
0xcd6: Push((int) 0)
0xcd7: @ SetTimer(Stack[-1], Stack[-2])
0xcd8: Pop(1)
0xcd9: Return(); Pop(2)

