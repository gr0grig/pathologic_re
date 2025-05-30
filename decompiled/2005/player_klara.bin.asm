GlobalVarCount = 4
	G_VAR_0 string 
	G_VAR_1 object 
	G_VAR_2 object 
	G_VAR_3 object 

Strings:
	unholster
	_unholster
	_holster
	scalpel
	attack
	_phase1
	health
	GetDirection
	GetDirection
	battack
	_back
	_hit
	in
	add
	_phase2
	use_begin
	lp
	GetProperty
	locked
	SetProperty
	uses
	use_success
	use_fail
	player_reputation_decrease.bin
	player_klara_dream.bin
	player_init
	empty
	lockpick
	gun
	effects
	player_disease.bin
	player_stat.bin
	player_hit.bin
	player_head.bin
	player_flashlight.bin
	player_visir.bin
	player_vis.bin
	player_eyes_height.bin
	player_gifts.bin
	size
	get
	walk
	idle
	healable
	heal_phase1
	heal
	heal_phase2
	punch_back
	punch
	punch_hit
	ammo
	revolver_ammo
	_noammo
	_reload
	attack1
	shot
	_shot
	scripted
	richochet.xml
	Material
	SetScriptProperty
	fire
	bullet
	phys
	HasProperty
	HasProperty
	armor
	armor_
	IsDead
	GetScene
	wood
	metal
	ground
	water
	carpet
	stone
	reputation
	god_mode
	kerosene
	branch
	step_
	player_death
	play_death_klara.bin
	durability
	die
	prc
	Reputation is not changed for enemy: 
	Can't find main outdoor oscene
	GetMap
	Can't find map
	GetName
	pt_gmap_
	GetLocator
	FIXME: No map locator for scene : 
	SetMapParams
	people.xml
	flashlight_off
	flashlight_on
	flashlight_nofuel
	visir
	vcharge
	player_shot

Import:
	GetCurrentWeapon (1 args)
	IsWeaponHolstered (1 args)
	GetScene (1 args)
	BroadcastMessage (3 args)
	SetWeaponHolster (1 args)
	PlayAnimation (1 args)
	WaitForAnimEnd (0 args)
	HasAnimation (2 args)
	GetAttackDistance (1 args)
	GetDirection (1 args)
	GetVictimMaterialExact (5 args)
	PlaySound (1 args)
	irand (2 args)
	SetAttackState (1 args)
	ReportAttack (1 args)
	ReportHit (6 args)
	BroadcastPlayerDamage (2 args)
	IsShooting (1 args)
	GetPlayerSelectedObject (1 args)
	GetWeaponProperty (3 args)
	GetWeaponItem (1 args)
	SelectItem (3 args)
	RemoveItem (3 args)
	SetWeaponProperty (3 args)
	SetHandsItem (1 args)
	CreateStringVector (1 args)
	GetVariable (2 args)
	Diary (0 args)
	SetVariable (2 args)
	HasProperty (2 args)
	SetProperty (2 args)
	ApplyEffect (1 args)
	GetProperty (2 args)
	IsWalking (1 args)
	Sleep (1 args)
	IsAltShooting (1 args)
	KillTimer (1 args)
	Trigger (2 args)
	TriggerWeapon (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterialExact (6 args)
	AddActorByType (6 args)
	IsPlayerActor (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateObjectVector (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	IsExistingSound (2 args)
	GetItemCountOfType (2 args)
	GetGroundMaterial (2 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	SetDeathState (0 args)
	KillTimer (2 args)
	ModNoise (1 args)
	SetTimer (2 args)
	GetInvItemByName (2 args)
	RemoveItemByType (3 args)
	SignalDeath (1 args)
	Trace (1 args)
	Inventory (0 args)
	GetActiveScene (1 args)
	GetPosition (1 args)
	ShowMap (1 args)
	ShowMessage (0 args)
	ShowPlayerStats (1 args)
	ShowWindow (2 args)
	IsFlashlightOn (1 args)
	SwitchFlashlight (1 args)
	IsVisirOn (1 args)
	SwitchVisir (1 args)
	IsOverrideActive (1 args)
	rand (3 args)

RunOp = 0x1b4
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (bool) Params = 0
		EVENT_18 Op = 0x136 Vars = (int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_32 Op = 0x1a8 Vars = ()
	GTASK_3  Params = 0
		EVENT_13 Op = 0x26d Vars = ()
		EVENT_36 Op = 0x286 Vars = ()
		EVENT_15 Op = 0x29f Vars = ()
		EVENT_7 Op = 0x2ab Vars = (int)
		EVENT_18 Op = 0x2d6 Vars = (int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_18 Op = 0x3ac Vars = (int)
	GTASK_5 Vars = (bool) Params = 0
		EVENT_18 Op = 0x41a Vars = (int)
	GTASK_6  Params = 0

Events:
EVENT_44 Op = 0x73f Vars = ()
EVENT_20 Op = 0x746 Vars = ()
EVENT_21 Op = 0x74d Vars = ()
EVENT_45 Op = 0x754 Vars = ()
EVENT_7 Op = 0x7a9 Vars = (int)
EVENT_26 Op = 0x7af Vars = (string)
EVENT_16 Op = 0x7b7 Vars = (object, string)
EVENT_41 Op = 0x7d9 Vars = (object)
EVENT_31 Op = 0x7e3 Vars = (object, float, bool)
EVENT_19 Op = 0x805 Vars = ()
EVENT_17 Op = 0x80c Vars = (object)
EVENT_39 Op = 0x80e Vars = (float)
EVENT_18 Op = 0x82b Vars = (int)

0x0: PushEmpty(string, bool, object, string, bool, object)
0x1: @ GetCurrentWeapon(Stack[-3])
0x2: Pop(0)
0x3: @ IsWeaponHolstered(Stack[-2])
0x4: Pop(0)
0x5: @ GetScene(Stack[-1])
0x6: Pop(0)
0x7: Push(Stack[-2])
0x8: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x9: Push("unholster")
0xa: PushEmpty(object)
0xb: Call2 0x5e9

0xc: Pop(0)
0xd: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xe: Pop(2)
0xf: PushEmpty(string)
0x10: Push("_unholster")
0x11: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x12: Call2 0x673

0x13: Pop(1)
0x14: Push((bool) 0)
0x15: @ SetWeaponHolster(Stack[-1])
0x16: Pop(1)
0x17: Push("unholster")
0x18: @ PlayAnimation(Stack[-1])
0x19: Pop(1)
0x1a: @ WaitForAnimEnd()
0x1b: Pop(0)
0x1c: GOTO 0x30

0x1d: Push("holster")
0x1e: PushEmpty(object)
0x1f: Call2 0x5e9

0x20: Pop(0)
0x21: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x22: Pop(2)
0x23: PushEmpty(string)
0x24: Push("_holster")
0x25: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x26: Call2 0x673

0x27: Pop(1)
0x28: Push("holster")
0x29: @ PlayAnimation(Stack[-1])
0x2a: Pop(1)
0x2b: @ WaitForAnimEnd()
0x2c: Pop(0)
0x2d: Push((bool) 1)
0x2e: @ SetWeaponHolster(Stack[-1])
0x2f: Pop(1)
0x30: Return(); Pop(6)

0x31: Stack[-1] = 0
0x32: Stack[-1] = "scalpel"
0x33: Return(); Pop(0)

0x34: PushEmpty()
0x35: Stack[-2] = (float) 0.6
0x36: Return(); Pop(0)

0x37: Stack[-1] = (float) 0.5
0x38: Return(); Pop(0)

0x39: Stack[-1] = (int) 2
0x3a: Return(); Pop(0)

0x3b: Stack[-1] = (int) 0
0x3c: Return(); Pop(0)

0x3d: Stack[-1] = (int) 1
0x3e: Return(); Pop(0)

0x3f: PushEmpty()
0x40: PushEmpty(float, bool)
0x41: Stack[-1] = Stack[-3]
0x42: Call2 0x34

0x43: Pop(1)
0x44: PushEmpty(float, float)
0x45: PushEmpty(float)
0x46: Call2 0x37

0x47: Stack[-2] = Stack[-1]
0x48: Pop(1)
0x49: Call2 0x799

0x4a: Pop(1)
0x4b: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x4c: Return(); Pop(0)

0x4d: PushEmpty(int)
0x4e: PushEmpty(int)
0x4f: Call2 0x39

0x50: Stack[-2] = Stack[-1]
0x51: Pop(1)
0x52: Call2 0x787

0x53: Pop(1)
0x54: Return(); Pop(0)

0x55: PushEmpty(int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0x56: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x57: Stack[-20] = (int) 0
0x58: Push((int) 1)
0x59: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x5a: PushEmpty(string)
0x5b: Call2 0x143

0x5c: Pop(0)
0x5d: Push("attack")
0x5e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f: Pop(1); Push(Stack[-1] + Stack[-21]);
0x60: Push("_phase1")
0x61: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x62: @ HasAnimation(Stack[-18], Stack[-19])
0x63: Pop(0)
0x64: Pop(0); Push((bool) Stack[-18] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: GOTO 0x68

0x67: GOTO 0x58

0x68: Push((int) -1)
0x69: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x6a: Pop(0); Push((bool) Stack[-20] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Return(); Pop(40)

0x6d: @ GetCurrentWeapon(Stack[-17])
0x6e: Pop(0)
0x6f: @ GetAttackDistance(Stack[-16])
0x70: Pop(0)
0x71: @ GetDirection(Stack[-15])
0x72: Pop(0)
0x73: Stack[-11] = (bool) 0
0x74: PushEmpty(bool)
0x75: Call2 0x141

0x76: Pop(0)
0x77: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x78: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x79: Pop(0)
0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 0
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 0
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: Pop(0); Push(( Stack[-17] != 0 )
0x81: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x82: PushEmpty(bool, object, string)
0x83: Stack[-2] = Stack[-20]
0x84: Stack[-1] = "health"
0x85: Call2 0x544

0x86: Pop(2)
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Stack[-1] = (bool) 1
0x89: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[-18]
0x8c: Call2 0x5af

0x8d: Pop(1)
0x8e: Pop(1); Push((bool) Stack[-1] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x92: Push((int) 4)
0x93: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 1
0x96: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x97: Push("GetDirection")
0x98: Push((int) 1)
0x99: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x9a: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9b: @ GetDirection(Stack[-10])
0x9c: Pop(0)
0x9d: @@ GetDirection(Stack[-9])
0x9e: Pop(0)
0x9f: PushEmpty(float, cvector, cvector)
0xa0: Stack[-2] = Stack[-13]
0xa1: Stack[-1] = Stack[-12]
0xa2: Call2 0x62b

0xa3: Pop(2)
0xa4: Push((float)0.5)
0xa5: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0xa6: Push(Stack[-11])
0xa7: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa8: Stack[-8] = "battack"
0xa9: PushEmpty(string)
0xaa: Call2 0x32

0xab: Pop(0)
0xac: Push("_back")
0xad: Pop(2); Push(Stack[-2] + Stack[-1]);
0xae: @ PlaySound(Stack[-1])
0xaf: Pop(1)
0xb0: GOTO 0xc3

0xb1: @ irand(Stack[-7], Stack[-20])
0xb2: Pop(0)
0xb3: PushEmpty(string)
0xb4: Call2 0x143

0xb5: Pop(0)
0xb6: Push("attack")
0xb7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb8: Push((int) 1)
0xb9: Pop(1); Push(Stack[-9] + Stack[-1]);
0xba: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0xbb: PushEmpty(string)
0xbc: Call2 0x32

0xbd: Pop(0)
0xbe: Push((int) 1)
0xbf: Pop(1); Push(Stack[-9] + Stack[-1]);
0xc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1: @ PlaySound(Stack[-1])
0xc2: Pop(1)
0xc3: Push((bool) 1)
0xc4: @ SetAttackState(Stack[-1])
0xc5: Pop(1)
0xc6: Push("_phase1")
0xc7: Pop(1); Push(Stack[-9] + Stack[-1]);
0xc8: @ PlayAnimation(Stack[-1])
0xc9: Pop(1)
0xca: @ WaitForAnimEnd()
0xcb: Pop(0)
0xcc: Push( Stack[0 + Tasks[-1].StackPointer] )
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(40)

0xcf: Push((bool) 0)
0xd0: @ SetAttackState(Stack[-1])
0xd1: Pop(1)
0xd2: @ GetAttackDistance(Stack[-16])
0xd3: Pop(0)
0xd4: @ GetDirection(Stack[-15])
0xd5: Pop(0)
0xd6: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0xd7: Pop(0)
0xd8: Pop(0); Push(( Stack[-14] != 0 )
0xd9: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0xda: Push("GetDirection")
0xdb: Push((int) 1)
0xdc: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0xdd: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xde: @ GetDirection(Stack[-6])
0xdf: Pop(0)
0xe0: @@ GetDirection(Stack[-5])
0xe1: Pop(0)
0xe2: PushEmpty(float, cvector, cvector)
0xe3: Stack[-2] = Stack[-9]
0xe4: Stack[-1] = Stack[-8]
0xe5: Call2 0x62b

0xe6: Pop(2)
0xe7: Push((float)0.5)
0xe8: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0xe9: GOTO 0xeb

0xea: Stack[-11] = (bool) 0
0xeb: PushEmpty(float, bool)
0xec: Stack[-1] = Stack[-13]
0xed: Call2 0x3f

0xee: Stack[-6] = Stack[-2]
0xef: Pop(2)
0xf0: Push((int) 4)
0xf1: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf3: Push((float)3.0)
0xf4: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0xf5: PushEmpty(float, object, float, int)
0xf6: Stack[-3] = Stack[-18]
0xf7: Stack[-2] = Stack[-8]
0xf8: PushEmpty(int)
0xf9: Call2 0x3b

0xfa: Stack[-2] = Stack[-1]
0xfb: Pop(1)
0xfc: Call2 0x566

0xfd: Stack[-7] = Stack[-4]
0xfe: Pop(4)
0xff: Push(Stack[-3])
0x100: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x101: Push((int) 2)
0x102: @ irand(Stack[-3], Stack[-1])
0x103: Pop(1)
0x104: PushEmpty(string)
0x105: Call2 0x32

0x106: Pop(0)
0x107: Push("_hit")
0x108: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109: Push((int) 1)
0x10a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x10b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10c: @ PlaySound(Stack[-1])
0x10d: Pop(1)
0x10e: @ ReportAttack(Stack[-14])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x3d

0x112: Pop(0)
0x113: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x114: Pop(1)
0x115: Push(GlobalVars[2])
0x116: @@ in(Stack[-2], Stack[-15])
0x117: Pop(1)
0x118: Pop(0); Push((bool) Stack[-1] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11a: Push(GlobalVars[3])
0x11b: @@ add(Stack[-15])
0x11c: Pop(1)
0x11d: Push((bool) 0)
0x11e: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x11f: Pop(1)
0x120: GOTO 0x124

0x121: Push((bool) 1)
0x122: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x123: Pop(1)
0x124: PushEmpty()
0x125: Call2 0x4d

0x126: Pop(0)
0x127: Push("_phase2")
0x128: Pop(1); Push(Stack[-9] + Stack[-1]);
0x129: @ PlayAnimation(Stack[-1])
0x12a: Pop(1)
0x12b: @ WaitForAnimEnd()
0x12c: Pop(0)
0x12d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Return(); Pop(40)

0x130: Stack[-14] = 0
0x131: PushEmpty(bool)
0x132: Call2 0x145

0x133: Pop(0)
0x134: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x135: Return(); Pop(40)

0x136: PushEmpty()
0x137: Push((int) 10)
0x138: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13b: GOTO 0x140

0x13c: PushEmpty(int)
0x13d: Stack[-1] = Stack[-2]
0x13e: Call2 0x82b

0x13f: Pop(1)
0x140: Return(); Pop(0)

0x141: Stack[-1] = (bool) 0
0x142: Return(); Pop(0)

0x143: Stack[-1] = ""
0x144: Return(); Pop(0)

0x145: PushEmpty(bool, bool)
0x146: @ IsShooting(Stack[-1])
0x147: Pop(0)
0x148: Stack[-3] = Stack[-1]
0x149: Return(); Pop(2)

0x14a: PushEmpty(object, bool, bool, bool, bool, int, int, object, bool, bool, bool, bool, int, int)
0x14b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x14c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14d: Push("use_begin")
0x14e: @ PlayAnimation(Stack[-1])
0x14f: Pop(1)
0x150: @ WaitForAnimEnd()
0x151: Pop(0)
0x152: Push( Stack[0 + Tasks[-1].StackPointer] )
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Return(); Pop(14)

0x155: @ GetPlayerSelectedObject(Stack[-7])
0x156: Pop(0)
0x157: Stack[-6] = (bool) 0
0x158: PushEmpty(bool, object, string)
0x159: Stack[-2] = Stack[-10]
0x15a: Stack[-1] = "lp"
0x15b: Call2 0x544

0x15c: Pop(2)
0x15d: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x15e: Push("lp")
0x15f: @@ GetProperty(Stack[-1], Stack[-6])
0x160: Pop(1)
0x161: Push(Stack[-5])
0x162: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x163: Push("locked")
0x164: @@ GetProperty(Stack[-1], Stack[-5])
0x165: Pop(1)
0x166: Push(Stack[-4])
0x167: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x168: Stack[-6] = (bool) 1
0x169: Push("locked")
0x16a: Push((bool) 0)
0x16b: @@ SetProperty(Stack[-2], Stack[-1])
0x16c: Pop(2)
0x16d: Stack[-2] = (int) 0
0x16e: Push("uses")
0x16f: @ GetWeaponProperty(Stack[-4], Stack[-1], Stack[-3])
0x170: Pop(1)
0x171: Push((int) 1)
0x172: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x174: @ GetWeaponItem(Stack[-1])
0x175: Pop(0)
0x176: Push((bool) 0)
0x177: Push((int) 0)
0x178: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(2)
0x17a: Push((int) 1)
0x17b: Push((int) 0)
0x17c: @ RemoveItem(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(2)
0x17e: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x17f: GOTO 0x185

0x180: Push("uses")
0x181: Push((int) 1)
0x182: Pop(1); Push(Stack[-4] - Stack[-1]);
0x183: @ SetWeaponProperty(Stack[-5], Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: Push(Stack[-6])
0x186: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x187: Push("use_success")
0x188: @ PlayAnimation(Stack[-1])
0x189: Pop(1)
0x18a: GOTO 0x18e

0x18b: Push("use_fail")
0x18c: @ PlayAnimation(Stack[-1])
0x18d: Pop(1)
0x18e: @ WaitForAnimEnd()
0x18f: Pop(0)
0x190: Push( Stack[0 + Tasks[-1].StackPointer] )
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Return(); Pop(14)

0x193: Push( Stack[1 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x195: Push("holster")
0x196: @ PlayAnimation(Stack[-1])
0x197: Pop(1)
0x198: @ WaitForAnimEnd()
0x199: Pop(0)
0x19a: Push((int) -1)
0x19b: @ SetHandsItem(Stack[-1])
0x19c: Pop(1)
0x19d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Return(); Pop(14)

0x1a0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1a1: Push("unholster")
0x1a2: @ PlayAnimation(Stack[-1])
0x1a3: Pop(1)
0x1a4: @ WaitForAnimEnd()
0x1a5: Pop(0)
0x1a6: Return(); Pop(14)

0x1a7: Stack[-7] = 0
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b0: Push((int) -1)
0x1b1: @ SetHandsItem(Stack[-1])
0x1b2: Pop(1)
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(object, int, object, int)
0x1b5: @ CreateStringVector(Stack[-2])
0x1b6: Pop(0)
0x1b7: Push("player_reputation_decrease.bin")
0x1b8: @@ add(Stack[-1])
0x1b9: Pop(1)
0x1ba: Push("player_klara_dream.bin")
0x1bb: @@ add(Stack[-1])
0x1bc: Pop(1)
0x1bd: Push("player_init")
0x1be: @ GetVariable(Stack[-1], Stack[-2])
0x1bf: Pop(1)
0x1c0: Pop(0); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c2: @ Diary()
0x1c3: Pop(0)
0x1c4: Push("player_init")
0x1c5: Push((int) 1)
0x1c6: @ SetVariable(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: PushEmpty(object)
0x1c9: Stack[-1] = Stack[-3]
0x1ca: Call2 0x1ff

0x1cb: Pop(1)
0x1cc: Return(); Pop(4)

0x1cd: Stack[-2] = 0
0x1ce: PushEmpty()
0x1cf: Push("empty")
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d2: PushEmpty()
0x1d3: Push(-0, 1); TaskCall(4)
0x1d4: Call2 0x2ee

0x1d5: Pop(-0, 1); TaskReturn
0x1d6: Pop(0)
0x1d7: GOTO 0x1f2

0x1d8: Push("scalpel")
0x1d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1db: PushEmpty()
0x1dc: Push(-0, 1); TaskCall(1)
0x1dd: Call2 0x55

0x1de: Pop(-0, 1); TaskReturn
0x1df: Pop(0)
0x1e0: GOTO 0x1f2

0x1e1: Push("lockpick")
0x1e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e4: PushEmpty()
0x1e5: Push(-0, 2); TaskCall(2)
0x1e6: Call2 0x14a

0x1e7: Pop(-0, 2); TaskReturn
0x1e8: Pop(0)
0x1e9: GOTO 0x1f2

0x1ea: Push("gun")
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ed: PushEmpty()
0x1ee: Push(-0, 1); TaskCall(5)
0x1ef: Call2 0x430

0x1f0: Pop(-0, 1); TaskReturn
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: Push("gun")
0x1f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: PushEmpty()
0x1f8: Push(-0, 0); TaskCall(6)
0x1f9: Call2 0x518

0x1fa: Pop(-0, 0); TaskReturn
0x1fb: Pop(0)
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty()
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty(bool, int, int, string, float, bool, bool, bool, int, int, string, float, bool, bool)
0x200: Push(GlobalVars[1])
0x201: PushEmpty(object)
0x202: Call2 0x60c

0x203: Stack[-2] = Stack[-1]
0x204: Pop(1)
0x205: GlobalVars[1] = Stack[-1]; Pop(1)
0x206: Push(GlobalVars[2])
0x207: PushEmpty(object)
0x208: Call2 0x60c

0x209: Stack[-2] = Stack[-1]
0x20a: Pop(1)
0x20b: GlobalVars[2] = Stack[-1]; Pop(1)
0x20c: Push(GlobalVars[3])
0x20d: PushEmpty(object)
0x20e: Call2 0x60c

0x20f: Stack[-2] = Stack[-1]
0x210: Pop(1)
0x211: GlobalVars[3] = Stack[-1]; Pop(1)
0x212: Push("effects")
0x213: @ HasProperty(Stack[-1], Stack[-8])
0x214: Pop(1)
0x215: Pop(0); Push((bool) Stack[-7] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x217: Push("effects")
0x218: Push((bool) 1)
0x219: @ SetProperty(Stack[-2], Stack[-1])
0x21a: Pop(2)
0x21b: Push("player_disease.bin")
0x21c: @ ApplyEffect(Stack[-1])
0x21d: Pop(1)
0x21e: Push("player_stat.bin")
0x21f: @ ApplyEffect(Stack[-1])
0x220: Pop(1)
0x221: Push("player_hit.bin")
0x222: @ ApplyEffect(Stack[-1])
0x223: Pop(1)
0x224: Push("player_head.bin")
0x225: @ ApplyEffect(Stack[-1])
0x226: Pop(1)
0x227: Push("player_flashlight.bin")
0x228: @ ApplyEffect(Stack[-1])
0x229: Pop(1)
0x22a: Push("player_visir.bin")
0x22b: @ ApplyEffect(Stack[-1])
0x22c: Pop(1)
0x22d: Push("player_vis.bin")
0x22e: @ ApplyEffect(Stack[-1])
0x22f: Pop(1)
0x230: Push("player_eyes_height.bin")
0x231: @ ApplyEffect(Stack[-1])
0x232: Pop(1)
0x233: Push("player_gifts.bin")
0x234: @ ApplyEffect(Stack[-1])
0x235: Pop(1)
0x236: Push(Stack[-15])
0x237: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x238: @@ size(Stack[-6])
0x239: Pop(0)
0x23a: Stack[-5] = (int) 0
0x23b: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x23c: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23d: @@ get(Stack[-4], Stack[-5])
0x23e: Pop(0)
0x23f: @ ApplyEffect(Stack[-4])
0x240: Pop(0)
0x241: Push((int) 1)
0x242: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x243: GOTO 0x23b

0x244: PushEmpty()
0x245: Call2 0x2e6

0x246: Pop(0)
0x247: Push("health")
0x248: @ GetProperty(Stack[-1], Stack[-4])
0x249: Pop(1)
0x24a: PushEmpty(bool)
0x24b: Stack[-1] = (bool) 0
0x24c: Push((int) 0)
0x24d: Pop(1); Push((bool) Stack[-5] <= Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x24f: PushEmpty(bool)
0x250: Call2 0x67b

0x251: Pop(0)
0x252: Pop(1); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x256: PushEmpty()
0x257: Call2 0x6e5

0x258: Pop(0)
0x259: Return(); Pop(14)

0x25a: @ IsWeaponHolstered(Stack[-2])
0x25b: Pop(0)
0x25c: Pop(0); Push((bool) Stack[-2] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x25e: @ IsWalking(Stack[-1])
0x25f: Pop(0)
0x260: Push(Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x262: Push("walk")
0x263: @ PlayAnimation(Stack[-1])
0x264: Pop(1)
0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: GOTO 0x26b

0x268: Push((float)0.1)
0x269: @ Sleep(Stack[-1])
0x26a: Pop(1)
0x26b: GOTO 0x25a

0x26c: Return(); Pop(14)

0x26d: PushEmpty(bool, string, bool, bool, string, bool)
0x26e: @ IsWeaponHolstered(Stack[-3])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-3] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x272: PushEmpty()
0x273: Call2 0x2ea

0x274: Pop(0)
0x275: @ GetCurrentWeapon(Stack[-2])
0x276: Pop(0)
0x277: PushEmpty(string)
0x278: Stack[-1] = Stack[-3]
0x279: Call2 0x1ce

0x27a: Pop(1)
0x27b: PushEmpty()
0x27c: Call2 0x2e6

0x27d: Pop(0)
0x27e: @ IsAltShooting(Stack[-1])
0x27f: Pop(0)
0x280: Push(Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x282: PushEmpty()
0x283: Call2 0x286

0x284: Pop(0)
0x285: Return(); Pop(6)

0x286: PushEmpty(bool, string, bool, bool, string, bool)
0x287: @ IsWeaponHolstered(Stack[-3])
0x288: Pop(0)
0x289: Pop(0); Push((bool) Stack[-3] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x28b: PushEmpty()
0x28c: Call2 0x2ea

0x28d: Pop(0)
0x28e: @ GetCurrentWeapon(Stack[-2])
0x28f: Pop(0)
0x290: PushEmpty(string)
0x291: Stack[-1] = Stack[-3]
0x292: Call2 0x1fd

0x293: Pop(1)
0x294: PushEmpty()
0x295: Call2 0x2e6

0x296: Pop(0)
0x297: @ IsShooting(Stack[-1])
0x298: Pop(0)
0x299: Push(Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x26d

0x29d: Pop(0)
0x29e: Return(); Pop(6)

0x29f: PushEmpty()
0x2a0: Call2 0x2ea

0x2a1: Pop(0)
0x2a2: PushEmpty()
0x2a3: Push(-0, 0); TaskCall(0)
0x2a4: Call2 0x0

0x2a5: Pop(-0, 0); TaskReturn
0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call2 0x2e6

0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(bool, int, bool, int, bool, int, bool, int)
0x2ac: PushEmpty(bool, int)
0x2ad: Stack[-1] = Stack[-11]
0x2ae: Call2 0x7a2

0x2af: Pop(1)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(8)

0x2b2: PushEmpty()
0x2b3: Call2 0x2ea

0x2b4: Pop(0)
0x2b5: @ IsWeaponHolstered(Stack[-4])
0x2b6: Pop(0)
0x2b7: Pop(0); Push((bool) Stack[-4] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2b9: Stack[-3] = (int) 0
0x2ba: Push("idle")
0x2bb: Push((int) 1)
0x2bc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2bd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2be: @ HasAnimation(Stack[-3], Stack[-1])
0x2bf: Pop(1)
0x2c0: Pop(0); Push((bool) Stack[-2] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2c6

0x2c3: Push((int) 1)
0x2c4: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2c5: GOTO 0x2ba

0x2c6: Push(Stack[-3])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c8: @ irand(Stack[-1], Stack[-3])
0x2c9: Pop(0)
0x2ca: Push("idle")
0x2cb: Push((int) 1)
0x2cc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ce: @ PlayAnimation(Stack[-1])
0x2cf: Pop(1)
0x2d0: @ WaitForAnimEnd()
0x2d1: Pop(0)
0x2d2: PushEmpty()
0x2d3: Call2 0x2e6

0x2d4: Pop(0)
0x2d5: Return(); Pop(8)

0x2d6: PushEmpty(string, string)
0x2d7: Push((int) 11)
0x2d8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2da: @ GetCurrentWeapon(Stack[-1])
0x2db: Pop(0)
0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = Stack[-2]
0x2de: Call2 0x1f3

0x2df: Pop(1)
0x2e0: GOTO 0x2e5

0x2e1: PushEmpty(int)
0x2e2: Stack[-1] = Stack[-4]
0x2e3: Call2 0x82b

0x2e4: Pop(1)
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty()
0x2e7: Call2 0x8dd

0x2e8: Pop(0)
0x2e9: Return(); Pop(0)

0x2ea: Push((int) 0)
0x2eb: @ KillTimer(Stack[-1])
0x2ec: Pop(1)
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty(int, string, bool, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0x2ef: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2f0: Stack[-19] = (int) 0
0x2f1: Push((int) 1)
0x2f2: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x2f3: Push("attack")
0x2f4: Pop(1); Push(Stack[-1] + Stack[-20]);
0x2f5: Push("_phase1")
0x2f6: Stack[-20] = Stack[-2] + Stack[-1]; Pop(2);
0x2f7: @ HasAnimation(Stack[-17], Stack[-18])
0x2f8: Pop(0)
0x2f9: Pop(0); Push((bool) Stack[-17] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: GOTO 0x2fd

0x2fc: GOTO 0x2f1

0x2fd: Push((int) -1)
0x2fe: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x2ff: Pop(0); Push((bool) Stack[-19] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: Return(); Pop(38)

0x302: @ GetAttackDistance(Stack[-16])
0x303: Pop(0)
0x304: Push((float)2.1875)
0x305: Stack[-17] = Stack[-17] * Stack[-1]; Pop(1);
0x306: @ GetDirection(Stack[-15])
0x307: Pop(0)
0x308: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x309: Pop(0)
0x30a: Pop(0); Push(( Stack[-14] != 0 )
0x30b: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x30c: PushEmpty(bool, object, string)
0x30d: Stack[-2] = Stack[-17]
0x30e: Stack[-1] = "healable"
0x30f: Call2 0x544

0x310: Pop(2)
0x311: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x312: Push("heal_phase1")
0x313: @ PlayAnimation(Stack[-1])
0x314: Pop(1)
0x315: @ WaitForAnimEnd()
0x316: Pop(0)
0x317: Push( Stack[0 + Tasks[-1].StackPointer] )
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: Return(); Pop(38)

0x31a: PushEmpty(bool, object)
0x31b: Stack[-1] = Stack[-16]
0x31c: Call2 0x5b4

0x31d: Pop(1)
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: Push("heal")
0x320: @ Trigger(Stack[-15], Stack[-1])
0x321: Pop(1)
0x322: Push("heal_phase2")
0x323: @ PlayAnimation(Stack[-1])
0x324: Pop(1)
0x325: @ WaitForAnimEnd()
0x326: Pop(0)
0x327: Push( Stack[0 + Tasks[-1].StackPointer] )
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: Return(); Pop(38)

0x32a: GOTO 0x3a7

0x32b: Push("GetDirection")
0x32c: Push((int) 1)
0x32d: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x32e: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x32f: @ GetDirection(Stack[-10])
0x330: Pop(0)
0x331: @@ GetDirection(Stack[-9])
0x332: Pop(0)
0x333: PushEmpty(float, cvector, cvector)
0x334: Stack[-2] = Stack[-13]
0x335: Stack[-1] = Stack[-12]
0x336: Call2 0x62b

0x337: Pop(2)
0x338: Push((float)0.5)
0x339: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x33a: GOTO 0x33c

0x33b: Stack[-11] = (bool) 0
0x33c: Push(Stack[-11])
0x33d: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33e: Stack[-8] = "battack"
0x33f: Push("punch_back")
0x340: @ PlaySound(Stack[-1])
0x341: Pop(1)
0x342: GOTO 0x34f

0x343: @ irand(Stack[-7], Stack[-19])
0x344: Pop(0)
0x345: Push("attack")
0x346: Push((int) 1)
0x347: Pop(1); Push(Stack[-9] + Stack[-1]);
0x348: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x349: Push("punch")
0x34a: Push((int) 1)
0x34b: Pop(1); Push(Stack[-9] + Stack[-1]);
0x34c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34d: @ PlaySound(Stack[-1])
0x34e: Pop(1)
0x34f: Push("_phase1")
0x350: Pop(1); Push(Stack[-9] + Stack[-1]);
0x351: @ PlayAnimation(Stack[-1])
0x352: Pop(1)
0x353: @ WaitForAnimEnd()
0x354: Pop(0)
0x355: Push( Stack[0 + Tasks[-1].StackPointer] )
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(38)

0x358: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x359: Pop(0)
0x35a: Pop(0); Push(( Stack[-14] != 0 )
0x35b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x35c: Push("GetDirection")
0x35d: Push((int) 1)
0x35e: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x35f: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x360: @ GetDirection(Stack[-6])
0x361: Pop(0)
0x362: @@ GetDirection(Stack[-5])
0x363: Pop(0)
0x364: PushEmpty(float, cvector, cvector)
0x365: Stack[-2] = Stack[-9]
0x366: Stack[-1] = Stack[-8]
0x367: Call2 0x62b

0x368: Pop(2)
0x369: Push((float)0.5)
0x36a: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x36b: GOTO 0x36d

0x36c: Stack[-11] = (bool) 0
0x36d: PushEmpty(float, bool)
0x36e: Stack[-1] = Stack[-13]
0x36f: Call2 0x3b7

0x370: Stack[-6] = Stack[-2]
0x371: Pop(2)
0x372: Push((int) 4)
0x373: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Push((float)3.0)
0x376: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x377: PushEmpty(float, object, float, int)
0x378: Stack[-3] = Stack[-18]
0x379: Stack[-2] = Stack[-8]
0x37a: Stack[-1] = (int) 0
0x37b: Call2 0x566

0x37c: Stack[-7] = Stack[-4]
0x37d: Pop(4)
0x37e: Push(Stack[-3])
0x37f: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x380: Push((int) 2)
0x381: @ irand(Stack[-3], Stack[-1])
0x382: Pop(1)
0x383: Push("punch_hit")
0x384: Push((int) 1)
0x385: Pop(1); Push(Stack[-4] + Stack[-1]);
0x386: Pop(2); Push(Stack[-2] + Stack[-1]);
0x387: @ PlaySound(Stack[-1])
0x388: Pop(1)
0x389: @ ReportAttack(Stack[-14])
0x38a: Pop(0)
0x38b: Push((int) 0)
0x38c: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x38d: Pop(1)
0x38e: Push(GlobalVars[2])
0x38f: @@ in(Stack[-2], Stack[-15])
0x390: Pop(1)
0x391: Pop(0); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x393: Push(GlobalVars[3])
0x394: @@ add(Stack[-15])
0x395: Pop(1)
0x396: Push((bool) 0)
0x397: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x398: Pop(1)
0x399: GOTO 0x39d

0x39a: Push((bool) 1)
0x39b: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x39c: Pop(1)
0x39d: Push("_phase2")
0x39e: Pop(1); Push(Stack[-9] + Stack[-1]);
0x39f: @ PlayAnimation(Stack[-1])
0x3a0: Pop(1)
0x3a1: @ WaitForAnimEnd()
0x3a2: Pop(0)
0x3a3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Return(); Pop(38)

0x3a6: Stack[-14] = 0
0x3a7: PushEmpty(bool)
0x3a8: Call2 0x3be

0x3a9: Pop(0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x3ab: Return(); Pop(38)

0x3ac: PushEmpty()
0x3ad: Push((int) 10)
0x3ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3b1: GOTO 0x3b6

0x3b2: PushEmpty(int)
0x3b3: Stack[-1] = Stack[-2]
0x3b4: Call2 0x82b

0x3b5: Pop(1)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: Push(Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-2] = (float) 0.4
0x3bb: GOTO 0x3bd

0x3bc: Stack[-2] = (float) 0.2
0x3bd: Return(); Pop(0)

0x3be: PushEmpty(bool, bool)
0x3bf: @ IsShooting(Stack[-1])
0x3c0: Pop(0)
0x3c1: Stack[-3] = Stack[-1]
0x3c2: Return(); Pop(2)

0x3c3: PushEmpty(bool, bool, bool, bool)
0x3c4: Push("ammo")
0x3c5: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x3c6: Pop(1)
0x3c7: PushEmpty(bool)
0x3c8: Stack[-1] = (bool) 1
0x3c9: Pop(0); Push((bool) Stack[-3] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cb: Pop(0); Push((bool) Stack[-2] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: Stack[-1] = (bool) 0
0x3ce: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3cf: PushEmpty(bool, string, int)
0x3d0: Stack[-2] = "revolver_ammo"
0x3d1: Stack[-1] = (int) 2
0x3d2: Call2 0x758

0x3d3: Pop(2)
0x3d4: Pop(1); Push((bool) Stack[-1] == 0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Call2 0x426

0x3d8: Pop(0)
0x3d9: Push("_noammo")
0x3da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3db: @ PlaySound(Stack[-1])
0x3dc: Pop(1)
0x3dd: Push("noammo")
0x3de: @ PlayAnimation(Stack[-1])
0x3df: Pop(1)
0x3e0: @ WaitForAnimEnd()
0x3e1: Pop(0)
0x3e2: Stack[-5] = (bool) 0
0x3e3: Return(); Pop(4)

0x3e4: Stack[-5] = (bool) 1
0x3e5: Return(); Pop(4)

0x3e6: Stack[-1] = (int) 3
0x3e7: Return(); Pop(0)

0x3e8: Stack[-1] = (float) 0.02618
0x3e9: Return(); Pop(0)

0x3ea: PushEmpty(bool, int, bool, int)
0x3eb: Push("ammo")
0x3ec: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x3ed: Pop(1)
0x3ee: Push("ammo")
0x3ef: Push((int) 1)
0x3f0: Pop(1); Push(Stack[-3] - Stack[-1]);
0x3f1: @ SetWeaponProperty(Stack[-4], Stack[-2], Stack[-1])
0x3f2: Pop(2)
0x3f3: PushEmpty()
0x3f4: Call2 0x8e6

0x3f5: Pop(0)
0x3f6: Return(); Pop(4)

0x3f7: PushEmpty(bool, bool, bool, bool)
0x3f8: Push("ammo")
0x3f9: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x3fa: Pop(1)
0x3fb: PushEmpty(bool)
0x3fc: Stack[-1] = (bool) 1
0x3fd: Pop(0); Push((bool) Stack[-3] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ff: Pop(0); Push((bool) Stack[-2] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-1] = (bool) 0
0x402: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x403: PushEmpty()
0x404: Call2 0x407

0x405: Pop(0)
0x406: Return(); Pop(4)

0x407: PushEmpty(bool, string, int)
0x408: Stack[-2] = "revolver_ammo"
0x409: Stack[-1] = (int) 2
0x40a: Call2 0x758

0x40b: Pop(2)
0x40c: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x40d: PushEmpty(string)
0x40e: Call2 0x426

0x40f: Pop(0)
0x410: Push("_reload")
0x411: Pop(2); Push(Stack[-2] + Stack[-1]);
0x412: @ PlaySound(Stack[-1])
0x413: Pop(1)
0x414: Push("reload")
0x415: @ PlayAnimation(Stack[-1])
0x416: Pop(1)
0x417: @ WaitForAnimEnd()
0x418: Pop(0)
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: Push((int) 11)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41e: PushEmpty()
0x41f: Call2 0x407

0x420: Pop(0)
0x421: PushEmpty(int)
0x422: Stack[-1] = Stack[-2]
0x423: Call2 0x82b

0x424: Pop(1)
0x425: Return(); Pop(0)

0x426: Stack[-1] = "gun"
0x427: Return(); Pop(0)

0x428: Stack[-1] = (float) 1.3
0x429: Return(); Pop(0)

0x42a: Stack[-1] = (int) 1
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = (int) 2
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = (int) 2
0x42f: Return(); Pop(0)

0x430: PushEmpty(string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool, string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool)
0x431: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x432: PushEmpty(bool)
0x433: Call2 0x3c3

0x434: Pop(0)
0x435: Pop(1); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: GOTO 0x50f

0x438: @ GetCurrentWeapon(Stack[-24])
0x439: Pop(0)
0x43a: Stack[-23] = "attack1"
0x43b: Push((bool) 1)
0x43c: @ SetAttackState(Stack[-1])
0x43d: Pop(1)
0x43e: PushEmpty()
0x43f: Call2 0x3ea

0x440: Pop(0)
0x441: Push("_phase1")
0x442: Pop(1); Push(Stack[-24] + Stack[-1]);
0x443: @ PlayAnimation(Stack[-1])
0x444: Pop(1)
0x445: @ WaitForAnimEnd()
0x446: Pop(0)
0x447: Push( Stack[0 + Tasks[-1].StackPointer] )
0x448: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x449: Return(); Pop(48)

0x44a: Push("shot")
0x44b: @ TriggerWeapon(Stack[-1])
0x44c: Pop(1)
0x44d: PushEmpty(string)
0x44e: Call2 0x426

0x44f: Pop(0)
0x450: Push("_shot")
0x451: Pop(2); Push(Stack[-2] + Stack[-1]);
0x452: @ PlaySound(Stack[-1])
0x453: Pop(1)
0x454: PushEmpty(int)
0x455: PushEmpty(int)
0x456: Call2 0x42e

0x457: Stack[-2] = Stack[-1]
0x458: Pop(1)
0x459: Call2 0x787

0x45a: Pop(1)
0x45b: PushEmpty()
0x45c: Call2 0x510

0x45d: Pop(0)
0x45e: Push((bool) 0)
0x45f: @ SetAttackState(Stack[-1])
0x460: Pop(1)
0x461: PushEmpty(int)
0x462: Call2 0x3e6

0x463: Stack[-23] = Stack[-1]
0x464: Pop(1)
0x465: Stack[-21] = (bool) 0
0x466: PushEmpty(float)
0x467: Call2 0x428

0x468: Pop(0)
0x469: Stack[-21] = Stack[-1] / Stack[-23]; Pop(1);
0x46a: Push((float)1.0)
0x46b: Push((float)1.5)
0x46c: Push((float)1.0)
0x46d: PushEmpty(float)
0x46e: Call2 0x3e8

0x46f: Pop(0)
0x470: Pop(2); Push(Stack[-2] / Stack[-1]);
0x471: Push((float)1.5)
0x472: Pop(2); Push(Stack[-2] - Stack[-1]);
0x473: PushEmpty(float)
0x474: Call2 0x77c

0x475: Pop(0)
0x476: Pop(2); Push(Stack[-2] * Stack[-1]);
0x477: Pop(2); Push(Stack[-2] + Stack[-1]);
0x478: Stack[-21] = Stack[-2] / Stack[-1]; Pop(2);
0x479: @ GetDirection(Stack[-18])
0x47a: Pop(0)
0x47b: PushEmpty(object)
0x47c: Call2 0x612

0x47d: Stack[-18] = Stack[-1]
0x47e: Pop(1)
0x47f: Stack[-16] = (int) 0
0x480: Pop(0); Push((bool) Stack[-16] < Stack[-22])
0x481: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x482: @ RandVecCone3D(Stack[-15], Stack[-18], Stack[-19])
0x483: Pop(0)
0x484: Push((int) 10000)
0x485: @ GetVictimMaterialExact(Stack[-15], Stack[-14], Stack[-13], Stack[-16], Stack[-1])
0x486: Pop(1)
0x487: Push(Stack[-14])
0x488: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x489: Stack[-11] = Stack[-20]
0x48a: Push((int) 4)
0x48b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Push((float)3.0)
0x48e: Stack[-12] = Stack[-12] * Stack[-1]; Pop(1);
0x48f: PushEmpty(float, object, float, int)
0x490: Stack[-3] = Stack[-18]
0x491: Stack[-2] = Stack[-15]
0x492: PushEmpty(int)
0x493: Call2 0x42a

0x494: Stack[-2] = Stack[-1]
0x495: Pop(1)
0x496: Call2 0x566

0x497: Stack[-14] = Stack[-4]
0x498: Pop(4)
0x499: Push(Stack[-10])
0x49a: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x49b: @@ add(Stack[-14])
0x49c: Pop(0)
0x49d: PushEmpty(int)
0x49e: Call2 0x42c

0x49f: Pop(0)
0x4a0: @ ReportHit(Stack[-15], Stack[-1], Stack[-11], Stack[-12], Stack[-13], Stack[-16])
0x4a1: Pop(1)
0x4a2: PushEmpty(bool)
0x4a3: Call2 0x511

0x4a4: Pop(0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4a6: Push("health")
0x4a7: @@ GetProperty(Stack[-1], Stack[-10])
0x4a8: Pop(1)
0x4a9: Pop(0); Push((bool) Stack[-9] == 0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ab: Push((int) 10000)
0x4ac: @ GetVictimMaterialExact(Stack[-9], Stack[-14], Stack[-13], Stack[-16], Stack[-1], Stack[-15])
0x4ad: Pop(1)
0x4ae: PushEmpty(bool)
0x4af: Stack[-1] = (bool) 0
0x4b0: Push(Stack[-9])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b2: Pop(0); Push((bool) Stack[-9] != Stack[-15])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Stack[-1] = (bool) 1
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4b6: PushEmpty(float, object, float, int)
0x4b7: Stack[-3] = Stack[-12]
0x4b8: Push((float)0.75)
0x4b9: Stack[-3] = Stack[-16] * Stack[-1]; Pop(1);
0x4ba: PushEmpty(int)
0x4bb: Call2 0x42a

0x4bc: Stack[-2] = Stack[-1]
0x4bd: Pop(1)
0x4be: Call2 0x566

0x4bf: Stack[-11] = Stack[-4]
0x4c0: Pop(4)
0x4c1: Push(Stack[-7])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c3: @@ add(Stack[-8])
0x4c4: Pop(0)
0x4c5: PushEmpty(int)
0x4c6: Call2 0x42c

0x4c7: Pop(0)
0x4c8: @ ReportHit(Stack[-9], Stack[-1], Stack[-8], Stack[-12], Stack[-13], Stack[-16])
0x4c9: Pop(1)
0x4ca: Stack[-8] = 0
0x4cb: GOTO 0x4de

0x4cc: Push((int) -1)
0x4cd: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4cf: Pop(0); Push((bool) Stack[-21] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d1: @ GetScene(Stack[-6])
0x4d2: Pop(0)
0x4d3: Push("scripted")
0x4d4: Push(CVector(0.0, 0.0, 1.0))
0x4d5: Push("richochet.xml")
0x4d6: @ AddActorByType(Stack[-8], Stack[-3], Stack[-9], Stack[-15], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Push("Material")
0x4d9: @@ SetScriptProperty(Stack[-1], Stack[-14])
0x4da: Pop(1)
0x4db: Stack[-21] = (bool) 1
0x4dc: Stack[-5] = 0
0x4dd: Stack[-6] = 0
0x4de: Stack[-14] = 0
0x4df: Push((int) 1)
0x4e0: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x4e1: GOTO 0x480

0x4e2: @@ size(Stack[-4])
0x4e3: Pop(0)
0x4e4: Stack[-3] = (int) 0
0x4e5: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4e7: @@ get(Stack[-2], Stack[-3])
0x4e8: Pop(0)
0x4e9: @ ReportAttack(Stack[-2])
0x4ea: Pop(0)
0x4eb: Push(GlobalVars[2])
0x4ec: @@ in(Stack[-2], Stack[-3])
0x4ed: Pop(1)
0x4ee: Pop(0); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f0: Push(GlobalVars[3])
0x4f1: @@ add(Stack[-3])
0x4f2: Pop(1)
0x4f3: Push((bool) 0)
0x4f4: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x4f5: Pop(1)
0x4f6: GOTO 0x4fa

0x4f7: Push((bool) 1)
0x4f8: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x4f9: Pop(1)
0x4fa: Stack[-2] = 0
0x4fb: Push((int) 1)
0x4fc: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x4fd: GOTO 0x4e5

0x4fe: Push("_phase2")
0x4ff: Pop(1); Push(Stack[-24] + Stack[-1]);
0x500: @ PlayAnimation(Stack[-1])
0x501: Pop(1)
0x502: @ WaitForAnimEnd()
0x503: Pop(0)
0x504: Push( Stack[0 + Tasks[-1].StackPointer] )
0x505: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x506: Return(); Pop(48)

0x507: PushEmpty()
0x508: Call2 0x3f7

0x509: Pop(0)
0x50a: Stack[-17] = 0
0x50b: PushEmpty(bool)
0x50c: Call2 0x513

0x50d: Pop(0)
0x50e: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x50f: Return(); Pop(48)

0x510: Return(); Pop(0)

0x511: Stack[-1] = (bool) 0
0x512: Return(); Pop(0)

0x513: PushEmpty(bool, bool)
0x514: @ IsShooting(Stack[-1])
0x515: Pop(0)
0x516: Stack[-3] = Stack[-1]
0x517: Return(); Pop(2)

0x518: PushEmpty()
0x519: Call2 0x530

0x51a: Pop(0)
0x51b: PushEmpty(bool, string, int)
0x51c: Stack[-2] = "revolver_ammo"
0x51d: Stack[-1] = (int) 2
0x51e: Call2 0x758

0x51f: Pop(2)
0x520: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x521: PushEmpty(string)
0x522: Call2 0x52e

0x523: Pop(0)
0x524: Push("_reload")
0x525: Pop(2); Push(Stack[-2] + Stack[-1]);
0x526: @ PlaySound(Stack[-1])
0x527: Pop(1)
0x528: Push("reload")
0x529: @ PlayAnimation(Stack[-1])
0x52a: Pop(1)
0x52b: @ WaitForAnimEnd()
0x52c: Pop(0)
0x52d: Return(); Pop(0)

0x52e: Stack[-1] = "gun"
0x52f: Return(); Pop(0)

0x530: Return(); Pop(0)

0x531: PushEmpty()
0x532: Push((int) 2)
0x533: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x535: Stack[-2] = "fire"
0x536: Return(); Pop(0)

0x537: GOTO 0x53d

0x538: Push((int) 1)
0x539: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-2] = "bullet"
0x53c: Return(); Pop(0)

0x53d: Stack[-2] = "phys"
0x53e: Return(); Pop(0)

0x53f: PushEmpty(bool, bool)
0x540: @ IsPlayerActor(Stack[-3], Stack[-1])
0x541: Pop(0)
0x542: Stack[-4] = Stack[-1]
0x543: Return(); Pop(2)

0x544: PushEmpty(bool, bool)
0x545: Push("HasProperty")
0x546: Push((int) 2)
0x547: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x548: Pop(1); Push((bool) Stack[-1] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: Stack[-5] = (bool) 0
0x54b: Return(); Pop(2)

0x54c: @@ HasProperty(Stack[-3], Stack[-1])
0x54d: Pop(0)
0x54e: Stack[-5] = Stack[-1]
0x54f: Return(); Pop(2)

0x550: PushEmpty(float, float)
0x551: PushEmpty(bool, object, string)
0x552: Stack[-2] = Stack[-10]
0x553: Stack[-1] = Stack[-9]
0x554: Call2 0x544

0x555: Pop(2)
0x556: Pop(1); Push((bool) Stack[-1] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: Stack[-8] = (bool) 0
0x559: Return(); Pop(2)

0x55a: @@ GetProperty(Stack[-6], Stack[-1])
0x55b: Pop(0)
0x55c: PushEmpty(float, float, float, float)
0x55d: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x55e: Stack[-2] = Stack[-8]
0x55f: Stack[-1] = Stack[-7]
0x560: Call2 0x5f6

0x561: Pop(3)
0x562: @@ SetProperty(Stack[-7], Stack[-1])
0x563: Pop(1)
0x564: Stack[-8] = (bool) 1
0x565: Return(); Pop(2)

0x566: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x567: PushEmpty(bool, object, string)
0x568: Stack[-2] = Stack[-18]
0x569: Stack[-1] = "health"
0x56a: Call2 0x544

0x56b: Pop(2)
0x56c: Pop(1); Push((bool) Stack[-1] == 0)
0x56d: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56e: Stack[-16] = (float) 0.0
0x56f: Return(); Pop(12)

0x570: PushEmpty(bool, object, string)
0x571: Stack[-2] = Stack[-18]
0x572: Stack[-1] = "armor"
0x573: Call2 0x544

0x574: Pop(2)
0x575: Pop(1); Push((bool) Stack[-1] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x577: Stack[-6] = (int) 0
0x578: GOTO 0x57c

0x579: Push("armor")
0x57a: @@ GetProperty(Stack[-1], Stack[-7])
0x57b: Pop(1)
0x57c: Push("armor_")
0x57d: PushEmpty(string, int)
0x57e: Stack[-1] = Stack[-16]
0x57f: Call2 0x531

0x580: Pop(1)
0x581: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x582: PushEmpty(bool, object, string)
0x583: Stack[-2] = Stack[-18]
0x584: Stack[-1] = Stack[-8]
0x585: Call2 0x544

0x586: Pop(2)
0x587: Pop(1); Push((bool) Stack[-1] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: Stack[-4] = (int) 0
0x58a: GOTO 0x58d

0x58b: @@ GetProperty(Stack[-5], Stack[-4])
0x58c: Pop(0)
0x58d: PushEmpty(float, float, float)
0x58e: Pop(0); Push(Stack[-9] + Stack[-7]);
0x58f: Push((float)100.0)
0x590: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x591: Stack[-1] = (int) 1
0x592: Call2 0x5ef

0x593: Stack[-6] = Stack[-3]
0x594: Pop(3)
0x595: Push("health")
0x596: @@ GetProperty(Stack[-1], Stack[-3])
0x597: Pop(1)
0x598: Push((int) 1)
0x599: Pop(1); Push(Stack[-1] - Stack[-4]);
0x59a: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x59b: Push("health")
0x59c: PushEmpty(float, float, float, float)
0x59d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x59e: Stack[-2] = (int) 0
0x59f: Stack[-1] = (int) 1
0x5a0: Call2 0x5f6

0x5a1: Pop(3)
0x5a2: @@ SetProperty(Stack[-2], Stack[-1])
0x5a3: Pop(2)
0x5a4: PushEmpty(bool, object)
0x5a5: Stack[-1] = Stack[-17]
0x5a6: Call2 0x53f

0x5a7: Pop(1)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5a9: PushEmpty(float)
0x5aa: Stack[-1] = -Stack[-2]; Pop(0);
0x5ab: Call2 0x65f

0x5ac: Pop(1)
0x5ad: Stack[-16] = Stack[-1]
0x5ae: Return(); Pop(12)

0x5af: PushEmpty(bool, bool)
0x5b0: @@ IsDead(Stack[-1])
0x5b1: Pop(0)
0x5b2: Stack[-4] = Stack[-1]
0x5b3: Return(); Pop(2)

0x5b4: PushEmpty(object, object, object, object)
0x5b5: Pop(0); Push((bool) Stack[-5] == 0)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b7: Stack[-6] = (bool) 0
0x5b8: Return(); Pop(4)

0x5b9: @ GetScene(Stack[-2])
0x5ba: Pop(0)
0x5bb: Pop(0); Push((bool) Stack[-2] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bd: Stack[-6] = (bool) 0
0x5be: Return(); Pop(4)

0x5bf: @@ GetScene(Stack[-1])
0x5c0: Pop(0)
0x5c1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c3: Stack[-6] = (bool) 0
0x5c4: Return(); Pop(4)

0x5c5: Stack[-6] = (bool) 1
0x5c6: Return(); Pop(4)

0x5c7: Stack[-1] = 0
0x5c8: Stack[-2] = 0
0x5c9: PushEmpty()
0x5ca: Push((int) 1)
0x5cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cd: Stack[-2] = "wood"
0x5ce: Return(); Pop(0)

0x5cf: GOTO 0x5e7

0x5d0: Push((int) 2)
0x5d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d3: Stack[-2] = "metal"
0x5d4: Return(); Pop(0)

0x5d5: GOTO 0x5e7

0x5d6: Push((int) 3)
0x5d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d9: Stack[-2] = "ground"
0x5da: Return(); Pop(0)

0x5db: GOTO 0x5e7

0x5dc: Push((int) 4)
0x5dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5df: Stack[-2] = "water"
0x5e0: Return(); Pop(0)

0x5e1: GOTO 0x5e7

0x5e2: Push((int) 5)
0x5e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e5: Stack[-2] = "carpet"
0x5e6: Return(); Pop(0)

0x5e7: Stack[-2] = "stone"
0x5e8: Return(); Pop(0)

0x5e9: PushEmpty(object, object)
0x5ea: @ self(Stack[-1])
0x5eb: Pop(0)
0x5ec: Stack[-3] = Stack[-1]
0x5ed: Return(); Pop(2)

0x5ee: Stack[-1] = 0
0x5ef: PushEmpty()
0x5f0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f2: Stack[-3] = Stack[-2]
0x5f3: GOTO 0x5f5

0x5f4: Stack[-3] = Stack[-1]
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty()
0x5f7: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f9: Stack[-4] = Stack[-2]
0x5fa: Return(); Pop(0)

0x5fb: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-4] = Stack[-1]
0x5fe: Return(); Pop(0)

0x5ff: Stack[-4] = Stack[-3]
0x600: Return(); Pop(0)

0x601: PushEmpty()
0x602: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-4] = Stack[-2]
0x605: Return(); Pop(0)

0x606: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-4] = Stack[-1]
0x609: Return(); Pop(0)

0x60a: Stack[-4] = Stack[-3]
0x60b: Return(); Pop(0)

0x60c: PushEmpty(object, object)
0x60d: @ CreateObjectSet(Stack[-1])
0x60e: Pop(0)
0x60f: Stack[-3] = Stack[-1]
0x610: Return(); Pop(2)

0x611: Stack[-1] = 0
0x612: PushEmpty(object, object)
0x613: @ CreateObjectVector(Stack[-1])
0x614: Pop(0)
0x615: Stack[-3] = Stack[-1]
0x616: Return(); Pop(2)

0x617: Stack[-1] = 0
0x618: PushEmpty()
0x619: Push(CvectorIndex(Stack[-2], 0))
0x61a: Push(CvectorIndex(Stack[-2], 0))
0x61b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x61c: Push(CvectorIndex(Stack[-3], 2))
0x61d: Push(CvectorIndex(Stack[-3], 2))
0x61e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x61f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x620: Return(); Pop(0)

0x621: PushEmpty()
0x622: Push(CvectorIndex(Stack[-1], 0))
0x623: Push(CvectorIndex(Stack[-2], 0))
0x624: Pop(2); Push(Stack[-2] * Stack[-1]);
0x625: Push(CvectorIndex(Stack[-2], 2))
0x626: Push(CvectorIndex(Stack[-3], 2))
0x627: Pop(2); Push(Stack[-2] * Stack[-1]);
0x628: Pop(2); Push(Stack[-2] + Stack[-1]);
0x629: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x62a: Return(); Pop(0)

0x62b: PushEmpty()
0x62c: PushEmpty(float, cvector, cvector)
0x62d: Stack[-2] = Stack[-5]
0x62e: Stack[-1] = Stack[-4]
0x62f: Call2 0x618

0x630: Pop(2)
0x631: PushEmpty(float, cvector)
0x632: Stack[-1] = Stack[-5]
0x633: Call2 0x621

0x634: Pop(1)
0x635: PushEmpty(float, cvector)
0x636: Stack[-1] = Stack[-5]
0x637: Call2 0x621

0x638: Pop(1)
0x639: Pop(2); Push(Stack[-2] * Stack[-1]);
0x63a: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x63b: Return(); Pop(0)

0x63c: PushEmpty()
0x63d: Pop(0); Push((bool) Stack[-2] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63f: Stack[-3] = (bool) 0
0x640: Return(); Pop(0)

0x641: Push((int) 0)
0x642: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x644: Push((int) 8)
0x645: @ SendWorldWndMessage(Stack[-1])
0x646: Pop(1)
0x647: GOTO 0x651

0x648: Push((int) 0)
0x649: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64b: Push((int) 9)
0x64c: @ SendWorldWndMessage(Stack[-1])
0x64d: Pop(1)
0x64e: GOTO 0x651

0x64f: Stack[-3] = (bool) 0
0x650: Return(); Pop(0)

0x651: PushEmpty(float)
0x652: Stack[-1] = Stack[-2]
0x653: Call2 0x669

0x654: Pop(1)
0x655: PushEmpty(bool, object, string, float, float, float)
0x656: Stack[-5] = Stack[-8]
0x657: Stack[-4] = "reputation"
0x658: Stack[-3] = Stack[-7]
0x659: Stack[-2] = (int) 0
0x65a: Stack[-1] = (int) 1
0x65b: Call2 0x550

0x65c: Pop(6)
0x65d: Stack[-3] = (bool) 1
0x65e: Return(); Pop(0)

0x65f: PushEmpty(object, object)
0x660: @ CreateFloatVector(Stack[-1])
0x661: Pop(0)
0x662: @@ add(Stack[-3])
0x663: Pop(0)
0x664: Push((int) 15)
0x665: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x666: Pop(1)
0x667: Return(); Pop(2)

0x668: Stack[-1] = 0
0x669: PushEmpty(object, object)
0x66a: @ CreateFloatVector(Stack[-1])
0x66b: Pop(0)
0x66c: @@ add(Stack[-3])
0x66d: Pop(0)
0x66e: Push((int) 16)
0x66f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x670: Pop(1)
0x671: Return(); Pop(2)

0x672: Stack[-1] = 0
0x673: PushEmpty(bool, bool)
0x674: @ IsExistingSound(Stack[-1], Stack[-3])
0x675: Pop(0)
0x676: Push(Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x678: @ PlaySound(Stack[-3])
0x679: Pop(0)
0x67a: Return(); Pop(2)

0x67b: PushEmpty(bool, bool)
0x67c: Push("god_mode")
0x67d: @ GetVariable(Stack[-1], Stack[-2])
0x67e: Pop(1)
0x67f: Stack[-3] = Stack[-1]
0x680: Return(); Pop(2)

0x681: PushEmpty(int, int)
0x682: Push("kerosene")
0x683: @ GetItemCountOfType(Stack[-2], Stack[-1])
0x684: Pop(1)
0x685: Stack[-3] = Stack[-1]
0x686: Return(); Pop(2)

0x687: PushEmpty(int, int)
0x688: Push("branch")
0x689: @ GetVariable(Stack[-1], Stack[-2])
0x68a: Pop(1)
0x68b: Stack[-3] = Stack[-1]
0x68c: Return(); Pop(2)

0x68d: PushEmpty()
0x68e: Push((int) 10)
0x68f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x691: PushEmpty()
0x692: Call2 0x730

0x693: Pop(0)
0x694: Stack[-2] = (bool) 1
0x695: Return(); Pop(0)

0x696: GOTO 0x6a8

0x697: Push((int) 11)
0x698: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69a: PushEmpty()
0x69b: Call2 0x738

0x69c: Pop(0)
0x69d: Stack[-2] = (bool) 1
0x69e: Return(); Pop(0)

0x69f: GOTO 0x6a8

0x6a0: Push((int) 12)
0x6a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a3: PushEmpty()
0x6a4: Call2 0x734

0x6a5: Pop(0)
0x6a6: Stack[-2] = (bool) 1
0x6a7: Return(); Pop(0)

0x6a8: Stack[-2] = (bool) 0
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty(bool, int, string, int, bool, int, string, string, bool, int, string, int, bool, int, string, string)
0x6ab: @ GetGroundMaterial(Stack[-8], Stack[-7])
0x6ac: Pop(0)
0x6ad: Pop(0); Push((bool) Stack[-8] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6af: Stack[-7] = (int) -1
0x6b0: PushEmpty(string, int)
0x6b1: Stack[-1] = Stack[-9]
0x6b2: Call2 0x5c9

0x6b3: Stack[-8] = Stack[-2]
0x6b4: Pop(2)
0x6b5: Stack[-5] = (int) 0
0x6b6: Push("step_")
0x6b7: Pop(1); Push(Stack[-1] + Stack[-7]);
0x6b8: Push((int) 1)
0x6b9: Pop(1); Push(Stack[-7] + Stack[-1]);
0x6ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6bb: @ IsExistingSound(Stack[-5], Stack[-1])
0x6bc: Pop(1)
0x6bd: Pop(0); Push((bool) Stack[-4] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: GOTO 0x6c3

0x6c0: Push((int) 1)
0x6c1: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x6c2: GOTO 0x6b6

0x6c3: Pop(0); Push((bool) Stack[-5] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c5: Push(GlobalVars[0])
0x6c6: Stack[-1] = ""
0x6c7: GlobalVars[0] = Stack[-1]; Pop(1)
0x6c8: Return(); Pop(16)

0x6c9: Push((int) 1)
0x6ca: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-3] = (int) 0
0x6cd: GOTO 0x6da

0x6ce: @ irand(Stack[-3], Stack[-5])
0x6cf: Pop(0)
0x6d0: Push("step_")
0x6d1: Pop(1); Push(Stack[-1] + Stack[-7]);
0x6d2: Push((int) 1)
0x6d3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6d4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x6d5: Push(GlobalVars[0])
0x6d6: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d8: GOTO 0x6da

0x6d9: GOTO 0x6ce

0x6da: Push("step_")
0x6db: Pop(1); Push(Stack[-1] + Stack[-7]);
0x6dc: Push((int) 1)
0x6dd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6de: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6df: @ PlaySound(Stack[-1])
0x6e0: Pop(0)
0x6e1: Push(GlobalVars[0])
0x6e2: Stack[-1] = Stack[-2]
0x6e3: GlobalVars[0] = Stack[-1]; Pop(1)
0x6e4: Return(); Pop(16)

0x6e5: PushEmpty(object, object, object, object)
0x6e6: @ GetMainOutdoorScene(Stack[-2])
0x6e7: Pop(0)
0x6e8: Push("player_death")
0x6e9: Push("play_death_klara.bin")
0x6ea: @ AddBlankActor(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x6eb: Pop(2)
0x6ec: @ SetDeathState()
0x6ed: Pop(0)
0x6ee: Return(); Pop(4)

0x6ef: Stack[-1] = 0
0x6f0: Stack[-2] = 0
0x6f1: PushEmpty(bool, bool)
0x6f2: Push((int) 11)
0x6f3: @ KillTimer(Stack[-1], Stack[-2])
0x6f4: Pop(1)
0x6f5: Push(Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f7: Push((int) -3)
0x6f8: @ ModNoise(Stack[-1])
0x6f9: Pop(1)
0x6fa: Return(); Pop(2)

0x6fb: PushEmpty()
0x6fc: Call2 0x6f1

0x6fd: Pop(0)
0x6fe: Push((int) 11)
0x6ff: Push((float)0.15)
0x700: @ SetTimer(Stack[-2], Stack[-1])
0x701: Pop(2)
0x702: Push((int) 3)
0x703: @ ModNoise(Stack[-1])
0x704: Pop(1)
0x705: Return(); Pop(0)

0x706: PushEmpty(bool, bool)
0x707: Push((int) 10)
0x708: @ KillTimer(Stack[-1], Stack[-2])
0x709: Pop(1)
0x70a: Push(Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70c: Push((int) -2)
0x70d: @ ModNoise(Stack[-1])
0x70e: Pop(1)
0x70f: Return(); Pop(2)

0x710: PushEmpty(bool, bool)
0x711: Push((int) 12)
0x712: @ KillTimer(Stack[-1], Stack[-2])
0x713: Pop(1)
0x714: Push(Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x716: Push((int) -1)
0x717: @ ModNoise(Stack[-1])
0x718: Pop(1)
0x719: Return(); Pop(2)

0x71a: PushEmpty()
0x71b: Call2 0x706

0x71c: Pop(0)
0x71d: Push((int) 10)
0x71e: Push((float)0.35)
0x71f: @ SetTimer(Stack[-2], Stack[-1])
0x720: Pop(2)
0x721: Push((int) 2)
0x722: @ ModNoise(Stack[-1])
0x723: Pop(1)
0x724: Return(); Pop(0)

0x725: PushEmpty()
0x726: Call2 0x710

0x727: Pop(0)
0x728: Push((int) 12)
0x729: Push((float)0.6)
0x72a: @ SetTimer(Stack[-2], Stack[-1])
0x72b: Pop(2)
0x72c: Push((int) 1)
0x72d: @ ModNoise(Stack[-1])
0x72e: Pop(1)
0x72f: Return(); Pop(0)

0x730: PushEmpty()
0x731: Call2 0x6aa

0x732: Pop(0)
0x733: Return(); Pop(0)

0x734: PushEmpty()
0x735: Call2 0x6aa

0x736: Pop(0)
0x737: Return(); Pop(0)

0x738: PushEmpty()
0x739: Call2 0x6aa

0x73a: Pop(0)
0x73b: PushEmpty()
0x73c: Call2 0x6f1

0x73d: Pop(0)
0x73e: Return(); Pop(0)

0x73f: PushEmpty()
0x740: Call2 0x725

0x741: Pop(0)
0x742: PushEmpty()
0x743: Call2 0x6f1

0x744: Pop(0)
0x745: Return(); Pop(0)

0x746: PushEmpty()
0x747: Call2 0x71a

0x748: Pop(0)
0x749: PushEmpty()
0x74a: Call2 0x6f1

0x74b: Pop(0)
0x74c: Return(); Pop(0)

0x74d: PushEmpty()
0x74e: Call2 0x706

0x74f: Pop(0)
0x750: PushEmpty()
0x751: Call2 0x6fb

0x752: Pop(0)
0x753: Return(); Pop(0)

0x754: PushEmpty()
0x755: Call2 0x710

0x756: Pop(0)
0x757: Return(); Pop(0)

0x758: PushEmpty(bool, int, int, bool, bool, int, int, bool)
0x759: Push("ammo")
0x75a: @ GetWeaponProperty(Stack[-5], Stack[-1], Stack[-4])
0x75b: Pop(1)
0x75c: PushEmpty(bool)
0x75d: Stack[-1] = (bool) 0
0x75e: Push(Stack[-5])
0x75f: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x760: Pop(0); Push((bool) Stack[-4] >= Stack[-10])
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: Stack[-1] = (bool) 1
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: Stack[-11] = (bool) 0
0x765: Return(); Pop(8)

0x766: @ GetInvItemByName(Stack[-2], Stack[-10])
0x767: Pop(0)
0x768: Pop(0); Push((bool) Stack[-3] < Stack[-9])
0x769: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x76a: Push((int) 1)
0x76b: @ RemoveItemByType(Stack[-2], Stack[-3], Stack[-1])
0x76c: Pop(1)
0x76d: Pop(0); Push((bool) Stack[-1] == 0)
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: GOTO 0x773

0x770: Push((int) 1)
0x771: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x772: GOTO 0x768

0x773: Pop(0); Push((bool) Stack[-3] == 0)
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-11] = (bool) 0
0x776: Return(); Pop(8)

0x777: Push("ammo")
0x778: @ SetWeaponProperty(Stack[-5], Stack[-1], Stack[-4])
0x779: Pop(1)
0x77a: Stack[-11] = (bool) 1
0x77b: Return(); Pop(8)

0x77c: PushEmpty(bool, int, bool, int)
0x77d: Push("durability")
0x77e: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x77f: Pop(1)
0x780: Push(Stack[-2])
0x781: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x782: Push((float)100.0)
0x783: Stack[-6] = Stack[-2] / Stack[-1]; Pop(1);
0x784: GOTO 0x786

0x785: Stack[-5] = (float) 1.0
0x786: Return(); Pop(4)

0x787: PushEmpty(bool, int, bool, int)
0x788: Push("durability")
0x789: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x78a: Pop(1)
0x78b: Pop(0); Push((bool) Stack[-2] == 0)
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: Stack[-1] = (int) 100
0x78e: PushEmpty(int, int, int, int)
0x78f: Stack[-3] = Stack[-5] - Stack[-9]; Pop(0);
0x790: Stack[-2] = (int) 0
0x791: Stack[-1] = (int) 100
0x792: Call2 0x601

0x793: Stack[-5] = Stack[-4]
0x794: Pop(4)
0x795: Push("durability")
0x796: @ SetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x797: Pop(1)
0x798: Return(); Pop(4)

0x799: PushEmpty()
0x79a: PushEmpty(float)
0x79b: Call2 0x77c

0x79c: Pop(0)
0x79d: Push((int) 1)
0x79e: Pop(1); Push(Stack[-1] - Stack[-3]);
0x79f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7a0: Stack[-3] = Stack[-2] + Stack[-1]; Pop(1);
0x7a1: Return(); Pop(0)

0x7a2: PushEmpty()
0x7a3: PushEmpty(bool, int)
0x7a4: Stack[-1] = Stack[-3]
0x7a5: Call2 0x68d

0x7a6: Stack[-4] = Stack[-2]
0x7a7: Pop(2)
0x7a8: Return(); Pop(0)

0x7a9: PushEmpty()
0x7aa: PushEmpty(bool, int)
0x7ab: Stack[-1] = Stack[-3]
0x7ac: Call2 0x7a2

0x7ad: Pop(2)
0x7ae: Return(); Pop(0)

0x7af: PushEmpty()
0x7b0: Push("die")
0x7b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b3: PushEmpty()
0x7b4: Call2 0x6e5

0x7b5: Pop(0)
0x7b6: Return(); Pop(0)

0x7b7: PushEmpty(float, object, object, float, object, object)
0x7b8: Push("health")
0x7b9: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7bb: Push("health")
0x7bc: @ GetProperty(Stack[-1], Stack[-4])
0x7bd: Pop(1)
0x7be: Push((float)0.001)
0x7bf: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: @ SignalDeath(Stack[-8])
0x7c2: Pop(0)
0x7c3: GOTO 0x7d0

0x7c4: Push("reputation")
0x7c5: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7c7: @ GetScene(Stack[-2])
0x7c8: Pop(0)
0x7c9: Push("prc")
0x7ca: PushEmpty(object)
0x7cb: Call2 0x5e9

0x7cc: Pop(0)
0x7cd: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-4])
0x7ce: Pop(2)
0x7cf: Stack[-2] = 0
0x7d0: @ CreateStringVector(Stack[-1])
0x7d1: Pop(0)
0x7d2: @@ add(Stack[-7])
0x7d3: Pop(0)
0x7d4: Push((int) 10)
0x7d5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7d6: Pop(1)
0x7d7: Return(); Pop(6)

0x7d8: Stack[-1] = 0
0x7d9: PushEmpty()
0x7da: PushEmpty(bool)
0x7db: Call2 0x67b

0x7dc: Pop(0)
0x7dd: Pop(1); Push((bool) Stack[-1] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7df: PushEmpty()
0x7e0: Call2 0x6e5

0x7e1: Pop(0)
0x7e2: Return(); Pop(0)

0x7e3: PushEmpty(bool, bool)
0x7e4: Pop(0); Push((bool) Stack[-5] == 0)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: Return(); Pop(2)

0x7e7: Push(GlobalVars[2])
0x7e8: @@ in(Stack[-2], Stack[-6])
0x7e9: Pop(1)
0x7ea: Push(Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ec: Push("Reputation is not changed for enemy: ")
0x7ed: Pop(1); Push(Stack[-1] + Stack[-6]);
0x7ee: @ Trace(Stack[-1])
0x7ef: Pop(1)
0x7f0: Return(); Pop(2)

0x7f1: Pop(0); Push((bool) Stack[-3] == 0)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f3: Push(GlobalVars[1])
0x7f4: @@ in(Stack[-2], Stack[-6])
0x7f5: Pop(1)
0x7f6: Push(Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f8: Return(); Pop(2)

0x7f9: Push(GlobalVars[1])
0x7fa: @@ add(Stack[-6])
0x7fb: Pop(1)
0x7fc: PushEmpty(bool, object, float)
0x7fd: PushEmpty(object)
0x7fe: Call2 0x5e9

0x7ff: Stack[-3] = Stack[-1]
0x800: Pop(1)
0x801: Stack[-1] = Stack[-7]
0x802: Call2 0x63c

0x803: Pop(3)
0x804: Return(); Pop(2)

0x805: PushEmpty()
0x806: Call2 0x8dd

0x807: Pop(0)
0x808: PushEmpty()
0x809: Call2 0x6fb

0x80a: Pop(0)
0x80b: Return(); Pop(0)

0x80c: PushEmpty()
0x80d: Return(); Pop(0)

0x80e: PushEmpty(float, float, float, float)
0x80f: Push((float)770.0)
0x810: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x811: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x812: @ Trace(Stack[-5])
0x813: Pop(0)
0x814: Push((float)770.0)
0x815: Pop(1); Push(Stack[-6] - Stack[-1]);
0x816: Push((float)0.0035)
0x817: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x818: PushEmpty(float, object, float, int)
0x819: PushEmpty(object)
0x81a: Call2 0x5e9

0x81b: Stack[-4] = Stack[-1]
0x81c: Pop(1)
0x81d: Stack[-2] = Stack[-6]
0x81e: Stack[-1] = (int) 0
0x81f: Call2 0x566

0x820: Stack[-5] = Stack[-4]
0x821: Pop(4)
0x822: PushEmpty(object)
0x823: Call2 0x5e9

0x824: Pop(0)
0x825: Push((int) 0)
0x826: Push(CVector(0.0, 0.0, 0.0))
0x827: Push(CVector(0.0, 0.0, 0.0))
0x828: @ ReportHit(Stack[-4], Stack[-3], Stack[-5], Stack[-6], Stack[-2], Stack[-1])
0x829: Pop(4)
0x82a: Return(); Pop(4)

0x82b: PushEmpty(object, object, object, cvector, string, bool, cvector, int, bool, bool, int, int, bool, int, object, object, object, cvector, string, bool, cvector, int, bool, bool, int, int, bool, int)
0x82c: Push((int) 0)
0x82d: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82f: @ Inventory()
0x830: Pop(0)
0x831: GOTO 0x8dc

0x832: Push((int) 1)
0x833: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x834: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x835: @ GetMainOutdoorScene(Stack[-14])
0x836: Pop(0)
0x837: @ GetActiveScene(Stack[-13])
0x838: Pop(0)
0x839: Pop(0); Push((bool) Stack[-14] == 0)
0x83a: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83b: Push("Can't find main outdoor oscene")
0x83c: @ Trace(Stack[-1])
0x83d: Pop(1)
0x83e: Return(); Pop(28)

0x83f: @@ GetMap(Stack[-12])
0x840: Pop(0)
0x841: Pop(0); Push((bool) Stack[-12] == 0)
0x842: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x843: Push("Can't find map")
0x844: @ Trace(Stack[-1])
0x845: Pop(1)
0x846: Return(); Pop(28)

0x847: Pop(0); Push((bool) Stack[-14] == Stack[-13])
0x848: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x849: @ GetPosition(Stack[-11])
0x84a: Pop(0)
0x84b: GOTO 0x859

0x84c: @@ GetName(Stack[-10])
0x84d: Pop(0)
0x84e: Push("pt_gmap_")
0x84f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x850: @@ GetLocator(Stack[-1], Stack[-10], Stack[-12], Stack[-9])
0x851: Pop(1)
0x852: Pop(0); Push((bool) Stack[-9] == 0)
0x853: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x854: Push("FIXME: No map locator for scene : ")
0x855: Pop(1); Push(Stack[-1] + Stack[-11]);
0x856: @ Trace(Stack[-1])
0x857: Pop(1)
0x858: Stack[-11] = CVector(0.0, 0.0, 0.0)
0x859: Push(CvectorIndex(Stack[-11], 0))
0x85a: Push(CvectorIndex(Stack[-12], 2))
0x85b: @@ SetMapParams(Stack[-2], Stack[-1])
0x85c: Pop(2)
0x85d: @ ShowMap(Stack[-12])
0x85e: Pop(0)
0x85f: Stack[-12] = 0
0x860: Stack[-13] = 0
0x861: Stack[-14] = 0
0x862: GOTO 0x8dc

0x863: Push((int) 2)
0x864: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x865: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x866: @ Diary()
0x867: Pop(0)
0x868: GOTO 0x8dc

0x869: Push((int) 3)
0x86a: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86c: @ ShowMessage()
0x86d: Pop(0)
0x86e: GOTO 0x8dc

0x86f: Push((int) 4)
0x870: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x872: @ ShowPlayerStats(Stack[-7])
0x873: Pop(0)
0x874: Push((int) 1)
0x875: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x877: Push("people.xml")
0x878: Push((bool) 1)
0x879: @ ShowWindow(Stack[-2], Stack[-1])
0x87a: Pop(2)
0x87b: GOTO 0x8dc

0x87c: Push((int) 5)
0x87d: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x87e: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x87f: @ IsFlashlightOn(Stack[-6])
0x880: Pop(0)
0x881: Push(Stack[-6])
0x882: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x883: Push((bool) 0)
0x884: @ SwitchFlashlight(Stack[-1])
0x885: Pop(1)
0x886: Push("flashlight_off")
0x887: @ PlaySound(Stack[-1])
0x888: Pop(1)
0x889: GOTO 0x898

0x88a: PushEmpty(bool)
0x88b: Call2 0x681

0x88c: Pop(0)
0x88d: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x88e: Push((bool) 1)
0x88f: @ SwitchFlashlight(Stack[-1])
0x890: Pop(1)
0x891: Push("flashlight_on")
0x892: @ PlaySound(Stack[-1])
0x893: Pop(1)
0x894: GOTO 0x898

0x895: Push("flashlight_nofuel")
0x896: @ PlaySound(Stack[-1])
0x897: Pop(1)
0x898: GOTO 0x8dc

0x899: Push((int) 6)
0x89a: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x89c: PushEmpty(int)
0x89d: Call2 0x687

0x89e: Pop(0)
0x89f: Push((int) 0)
0x8a0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: Return(); Pop(28)

0x8a3: @ IsVisirOn(Stack[-5])
0x8a4: Pop(0)
0x8a5: Push(Stack[-5])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8a7: Push((bool) 0)
0x8a8: @ SwitchVisir(Stack[-1])
0x8a9: Pop(1)
0x8aa: Push((int) 2)
0x8ab: @ SendWorldWndMessage(Stack[-1])
0x8ac: Pop(1)
0x8ad: GOTO 0x8c0

0x8ae: Push("visir")
0x8af: @ GetProperty(Stack[-1], Stack[-5])
0x8b0: Pop(1)
0x8b1: Push(Stack[-4])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8b3: Push("vcharge")
0x8b4: @ GetProperty(Stack[-1], Stack[-4])
0x8b5: Pop(1)
0x8b6: Push((int) 10)
0x8b7: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8b9: Push((bool) 1)
0x8ba: @ SwitchVisir(Stack[-1])
0x8bb: Pop(1)
0x8bc: Push((int) 1)
0x8bd: @ SendWorldWndMessage(Stack[-1])
0x8be: Pop(1)
0x8bf: GOTO 0x8c0

0x8c0: GOTO 0x8dc

0x8c1: Push((int) 7)
0x8c2: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8c4: @ IsOverrideActive(Stack[-2])
0x8c5: Pop(0)
0x8c6: Pop(0); Push((bool) Stack[-2] == 0)
0x8c7: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c8: Push("people.xml")
0x8c9: Push((bool) 1)
0x8ca: @ ShowWindow(Stack[-2], Stack[-1])
0x8cb: Pop(2)
0x8cc: GOTO 0x8dc

0x8cd: Push((int) 21)
0x8ce: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8cf: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d0: @ GetWeaponItem(Stack[-1])
0x8d1: Pop(0)
0x8d2: Push((int) -1)
0x8d3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d5: Push((bool) 0)
0x8d6: Push((int) 0)
0x8d7: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(2)
0x8d9: Push((int) -1)
0x8da: @ SetHandsItem(Stack[-1])
0x8db: Pop(1)
0x8dc: Return(); Pop(28)

0x8dd: PushEmpty(float, float)
0x8de: Push((int) 10)
0x8df: Push((int) 30)
0x8e0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x8e1: Pop(2)
0x8e2: Push((int) 0)
0x8e3: @ SetTimer(Stack[-1], Stack[-2])
0x8e4: Pop(1)
0x8e5: Return(); Pop(2)

0x8e6: PushEmpty(object, object)
0x8e7: @ GetScene(Stack[-1])
0x8e8: Pop(0)
0x8e9: Push("player_shot")
0x8ea: PushEmpty(object)
0x8eb: Call2 0x5e9

0x8ec: Pop(0)
0x8ed: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x8ee: Pop(2)
0x8ef: Return(); Pop(2)

0x8f0: Stack[-1] = 0
