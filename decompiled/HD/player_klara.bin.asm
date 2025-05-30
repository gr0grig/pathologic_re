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
	ACHIEVEMENT_MIGHT
	player_death
	play_death_klara.bin
	durability
	birdMaskAchievement
	bird_mask
	bird_balahon
	GetItemID
	ACHIEVEMENT_THEY
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
	GetWeaponItem (1 args)
	GetPlayerSelectedObject (1 args)
	GetWeaponProperty (3 args)
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
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	IsExistingSound (2 args)
	GetItemCountOfType (2 args)
	GetGroundMaterial (2 args)
	UnlockAchievement (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	SetDeathState (0 args)
	KillTimer (2 args)
	ModNoise (1 args)
	SetTimer (2 args)
	GetInvItemByName (2 args)
	RemoveItemByType (3 args)
	GetItemCount (2 args)
	GetItem (3 args)
	IsItemSelected (3 args)
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

RunOp = 0x1ba
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (bool) Params = 0
		EVENT_18 Op = 0x136 Vars = (int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_32 Op = 0x1ae Vars = ()
	GTASK_3  Params = 0
		EVENT_13 Op = 0x273 Vars = ()
		EVENT_36 Op = 0x28c Vars = ()
		EVENT_15 Op = 0x2a5 Vars = ()
		EVENT_7 Op = 0x2b1 Vars = (int)
		EVENT_18 Op = 0x2dc Vars = (int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_18 Op = 0x3b2 Vars = (int)
	GTASK_5 Vars = (bool) Params = 0
		EVENT_18 Op = 0x420 Vars = (int)
	GTASK_6  Params = 0

Events:
EVENT_44 Op = 0x75e Vars = ()
EVENT_20 Op = 0x765 Vars = ()
EVENT_21 Op = 0x76c Vars = ()
EVENT_45 Op = 0x773 Vars = ()
EVENT_7 Op = 0x80c Vars = (int)
EVENT_26 Op = 0x812 Vars = (string)
EVENT_16 Op = 0x81a Vars = (object, string)
EVENT_41 Op = 0x83c Vars = (object)
EVENT_31 Op = 0x846 Vars = (object, float, bool)
EVENT_19 Op = 0x868 Vars = ()
EVENT_17 Op = 0x86f Vars = (object)
EVENT_39 Op = 0x871 Vars = (float)
EVENT_18 Op = 0x88e Vars = (int)

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
0xb: Call2 0x5ef

0xc: Pop(0)
0xd: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xe: Pop(2)
0xf: PushEmpty(string)
0x10: Push("_unholster")
0x11: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x12: Call2 0x689

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
0x1f: Call2 0x5ef

0x20: Pop(0)
0x21: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x22: Pop(2)
0x23: PushEmpty(string)
0x24: Push("_holster")
0x25: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x26: Call2 0x689

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
0x49: Call2 0x7b8

0x4a: Pop(1)
0x4b: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x4c: Return(); Pop(0)

0x4d: PushEmpty(int)
0x4e: PushEmpty(int)
0x4f: Call2 0x39

0x50: Stack[-2] = Stack[-1]
0x51: Pop(1)
0x52: Call2 0x7a6

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
0x85: Call2 0x54a

0x86: Pop(2)
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Stack[-1] = (bool) 1
0x89: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[-18]
0x8c: Call2 0x5b5

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
0xa2: Call2 0x631

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
0xe5: Call2 0x631

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
0xfc: Call2 0x56c

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
0x13e: Call2 0x88e

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

0x14a: PushEmpty(int, int, object, bool, bool, bool, bool, int, int, int, int, object, bool, bool, bool, bool, int, int)
0x14b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x14c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14d: @ GetWeaponItem(Stack[-9])
0x14e: Pop(0)
0x14f: Push("use_begin")
0x150: @ PlayAnimation(Stack[-1])
0x151: Pop(1)
0x152: @ WaitForAnimEnd()
0x153: Pop(0)
0x154: Push( Stack[0 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: Return(); Pop(18)

0x157: @ GetWeaponItem(Stack[-8])
0x158: Pop(0)
0x159: @ GetPlayerSelectedObject(Stack[-7])
0x15a: Pop(0)
0x15b: Stack[-6] = (bool) 0
0x15c: Pop(0); Push((bool) Stack[-8] == Stack[-9])
0x15d: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x15e: PushEmpty(bool, object, string)
0x15f: Stack[-2] = Stack[-10]
0x160: Stack[-1] = "lp"
0x161: Call2 0x54a

0x162: Pop(2)
0x163: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x164: Push("lp")
0x165: @@ GetProperty(Stack[-1], Stack[-6])
0x166: Pop(1)
0x167: Push(Stack[-5])
0x168: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x169: Push("locked")
0x16a: @@ GetProperty(Stack[-1], Stack[-5])
0x16b: Pop(1)
0x16c: Push(Stack[-4])
0x16d: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x16e: Stack[-6] = (bool) 1
0x16f: Push("locked")
0x170: Push((bool) 0)
0x171: @@ SetProperty(Stack[-2], Stack[-1])
0x172: Pop(2)
0x173: Stack[-2] = (int) 0
0x174: Push("uses")
0x175: @ GetWeaponProperty(Stack[-4], Stack[-1], Stack[-3])
0x176: Pop(1)
0x177: Push((int) 1)
0x178: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x17a: @ GetWeaponItem(Stack[-1])
0x17b: Pop(0)
0x17c: Push((bool) 0)
0x17d: Push((int) 0)
0x17e: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(2)
0x180: Push((int) 1)
0x181: Push((int) 0)
0x182: @ RemoveItem(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(2)
0x184: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x185: GOTO 0x18b

0x186: Push("uses")
0x187: Push((int) 1)
0x188: Pop(1); Push(Stack[-4] - Stack[-1]);
0x189: @ SetWeaponProperty(Stack[-5], Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: Push(Stack[-6])
0x18c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18d: Push("use_success")
0x18e: @ PlayAnimation(Stack[-1])
0x18f: Pop(1)
0x190: GOTO 0x194

0x191: Push("use_fail")
0x192: @ PlayAnimation(Stack[-1])
0x193: Pop(1)
0x194: @ WaitForAnimEnd()
0x195: Pop(0)
0x196: Push( Stack[0 + Tasks[-1].StackPointer] )
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Return(); Pop(18)

0x199: Push( Stack[1 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19b: Push("holster")
0x19c: @ PlayAnimation(Stack[-1])
0x19d: Pop(1)
0x19e: @ WaitForAnimEnd()
0x19f: Pop(0)
0x1a0: Push((int) -1)
0x1a1: @ SetHandsItem(Stack[-1])
0x1a2: Pop(1)
0x1a3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Return(); Pop(18)

0x1a6: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1a7: Push("unholster")
0x1a8: @ PlayAnimation(Stack[-1])
0x1a9: Pop(1)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: Return(); Pop(18)

0x1ad: Stack[-7] = 0
0x1ae: PushEmpty(bool)
0x1af: Stack[-1] = (bool) 0
0x1b0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b2: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b6: Push((int) -1)
0x1b7: @ SetHandsItem(Stack[-1])
0x1b8: Pop(1)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(object, int, object, int)
0x1bb: @ CreateStringVector(Stack[-2])
0x1bc: Pop(0)
0x1bd: Push("player_reputation_decrease.bin")
0x1be: @@ add(Stack[-1])
0x1bf: Pop(1)
0x1c0: Push("player_klara_dream.bin")
0x1c1: @@ add(Stack[-1])
0x1c2: Pop(1)
0x1c3: Push("player_init")
0x1c4: @ GetVariable(Stack[-1], Stack[-2])
0x1c5: Pop(1)
0x1c6: Pop(0); Push((bool) Stack[-1] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c8: @ Diary()
0x1c9: Pop(0)
0x1ca: Push("player_init")
0x1cb: Push((int) 1)
0x1cc: @ SetVariable(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: PushEmpty(object)
0x1cf: Stack[-1] = Stack[-3]
0x1d0: Call2 0x205

0x1d1: Pop(1)
0x1d2: Return(); Pop(4)

0x1d3: Stack[-2] = 0
0x1d4: PushEmpty()
0x1d5: Push("empty")
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d8: PushEmpty()
0x1d9: Push(-0, 1); TaskCall(4)
0x1da: Call2 0x2f4

0x1db: Pop(-0, 1); TaskReturn
0x1dc: Pop(0)
0x1dd: GOTO 0x1f8

0x1de: Push("scalpel")
0x1df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e1: PushEmpty()
0x1e2: Push(-0, 1); TaskCall(1)
0x1e3: Call2 0x55

0x1e4: Pop(-0, 1); TaskReturn
0x1e5: Pop(0)
0x1e6: GOTO 0x1f8

0x1e7: Push("lockpick")
0x1e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ea: PushEmpty()
0x1eb: Push(-0, 2); TaskCall(2)
0x1ec: Call2 0x14a

0x1ed: Pop(-0, 2); TaskReturn
0x1ee: Pop(0)
0x1ef: GOTO 0x1f8

0x1f0: Push("gun")
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: PushEmpty()
0x1f4: Push(-0, 1); TaskCall(5)
0x1f5: Call2 0x436

0x1f6: Pop(-0, 1); TaskReturn
0x1f7: Pop(0)
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty()
0x1fa: Push("gun")
0x1fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: PushEmpty()
0x1fe: Push(-0, 0); TaskCall(6)
0x1ff: Call2 0x51e

0x200: Pop(-0, 0); TaskReturn
0x201: Pop(0)
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: Return(); Pop(0)

0x205: PushEmpty(bool, int, int, string, float, bool, bool, bool, int, int, string, float, bool, bool)
0x206: Push(GlobalVars[1])
0x207: PushEmpty(object)
0x208: Call2 0x612

0x209: Stack[-2] = Stack[-1]
0x20a: Pop(1)
0x20b: GlobalVars[1] = Stack[-1]; Pop(1)
0x20c: Push(GlobalVars[2])
0x20d: PushEmpty(object)
0x20e: Call2 0x612

0x20f: Stack[-2] = Stack[-1]
0x210: Pop(1)
0x211: GlobalVars[2] = Stack[-1]; Pop(1)
0x212: Push(GlobalVars[3])
0x213: PushEmpty(object)
0x214: Call2 0x612

0x215: Stack[-2] = Stack[-1]
0x216: Pop(1)
0x217: GlobalVars[3] = Stack[-1]; Pop(1)
0x218: Push("effects")
0x219: @ HasProperty(Stack[-1], Stack[-8])
0x21a: Pop(1)
0x21b: Pop(0); Push((bool) Stack[-7] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x21d: Push("effects")
0x21e: Push((bool) 1)
0x21f: @ SetProperty(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: Push("player_disease.bin")
0x222: @ ApplyEffect(Stack[-1])
0x223: Pop(1)
0x224: Push("player_stat.bin")
0x225: @ ApplyEffect(Stack[-1])
0x226: Pop(1)
0x227: Push("player_hit.bin")
0x228: @ ApplyEffect(Stack[-1])
0x229: Pop(1)
0x22a: Push("player_head.bin")
0x22b: @ ApplyEffect(Stack[-1])
0x22c: Pop(1)
0x22d: Push("player_flashlight.bin")
0x22e: @ ApplyEffect(Stack[-1])
0x22f: Pop(1)
0x230: Push("player_visir.bin")
0x231: @ ApplyEffect(Stack[-1])
0x232: Pop(1)
0x233: Push("player_vis.bin")
0x234: @ ApplyEffect(Stack[-1])
0x235: Pop(1)
0x236: Push("player_eyes_height.bin")
0x237: @ ApplyEffect(Stack[-1])
0x238: Pop(1)
0x239: Push("player_gifts.bin")
0x23a: @ ApplyEffect(Stack[-1])
0x23b: Pop(1)
0x23c: Push(Stack[-15])
0x23d: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23e: @@ size(Stack[-6])
0x23f: Pop(0)
0x240: Stack[-5] = (int) 0
0x241: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x242: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x243: @@ get(Stack[-4], Stack[-5])
0x244: Pop(0)
0x245: @ ApplyEffect(Stack[-4])
0x246: Pop(0)
0x247: Push((int) 1)
0x248: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x249: GOTO 0x241

0x24a: PushEmpty()
0x24b: Call2 0x2ec

0x24c: Pop(0)
0x24d: Push("health")
0x24e: @ GetProperty(Stack[-1], Stack[-4])
0x24f: Pop(1)
0x250: PushEmpty(bool)
0x251: Stack[-1] = (bool) 0
0x252: Push((int) 0)
0x253: Pop(1); Push((bool) Stack[-5] <= Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x255: PushEmpty(bool)
0x256: Call2 0x691

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: Stack[-1] = (bool) 1
0x25b: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25c: PushEmpty()
0x25d: Call2 0x6fb

0x25e: Pop(0)
0x25f: Return(); Pop(14)

0x260: @ IsWeaponHolstered(Stack[-2])
0x261: Pop(0)
0x262: Pop(0); Push((bool) Stack[-2] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x264: @ IsWalking(Stack[-1])
0x265: Pop(0)
0x266: Push(Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x268: Push("walk")
0x269: @ PlayAnimation(Stack[-1])
0x26a: Pop(1)
0x26b: @ WaitForAnimEnd()
0x26c: Pop(0)
0x26d: GOTO 0x271

0x26e: Push((float)0.1)
0x26f: @ Sleep(Stack[-1])
0x270: Pop(1)
0x271: GOTO 0x260

0x272: Return(); Pop(14)

0x273: PushEmpty(bool, string, bool, bool, string, bool)
0x274: @ IsWeaponHolstered(Stack[-3])
0x275: Pop(0)
0x276: Pop(0); Push((bool) Stack[-3] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x278: PushEmpty()
0x279: Call2 0x2f0

0x27a: Pop(0)
0x27b: @ GetCurrentWeapon(Stack[-2])
0x27c: Pop(0)
0x27d: PushEmpty(string)
0x27e: Stack[-1] = Stack[-3]
0x27f: Call2 0x1d4

0x280: Pop(1)
0x281: PushEmpty()
0x282: Call2 0x2ec

0x283: Pop(0)
0x284: @ IsAltShooting(Stack[-1])
0x285: Pop(0)
0x286: Push(Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x288: PushEmpty()
0x289: Call2 0x28c

0x28a: Pop(0)
0x28b: Return(); Pop(6)

0x28c: PushEmpty(bool, string, bool, bool, string, bool)
0x28d: @ IsWeaponHolstered(Stack[-3])
0x28e: Pop(0)
0x28f: Pop(0); Push((bool) Stack[-3] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x291: PushEmpty()
0x292: Call2 0x2f0

0x293: Pop(0)
0x294: @ GetCurrentWeapon(Stack[-2])
0x295: Pop(0)
0x296: PushEmpty(string)
0x297: Stack[-1] = Stack[-3]
0x298: Call2 0x203

0x299: Pop(1)
0x29a: PushEmpty()
0x29b: Call2 0x2ec

0x29c: Pop(0)
0x29d: @ IsShooting(Stack[-1])
0x29e: Pop(0)
0x29f: Push(Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a1: PushEmpty()
0x2a2: Call2 0x273

0x2a3: Pop(0)
0x2a4: Return(); Pop(6)

0x2a5: PushEmpty()
0x2a6: Call2 0x2f0

0x2a7: Pop(0)
0x2a8: PushEmpty()
0x2a9: Push(-0, 0); TaskCall(0)
0x2aa: Call2 0x0

0x2ab: Pop(-0, 0); TaskReturn
0x2ac: Pop(0)
0x2ad: PushEmpty()
0x2ae: Call2 0x2ec

0x2af: Pop(0)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(bool, int, bool, int, bool, int, bool, int)
0x2b2: PushEmpty(bool, int)
0x2b3: Stack[-1] = Stack[-11]
0x2b4: Call2 0x7c1

0x2b5: Pop(1)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: Return(); Pop(8)

0x2b8: PushEmpty()
0x2b9: Call2 0x2f0

0x2ba: Pop(0)
0x2bb: @ IsWeaponHolstered(Stack[-4])
0x2bc: Pop(0)
0x2bd: Pop(0); Push((bool) Stack[-4] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2bf: Stack[-3] = (int) 0
0x2c0: Push("idle")
0x2c1: Push((int) 1)
0x2c2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2c3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c4: @ HasAnimation(Stack[-3], Stack[-1])
0x2c5: Pop(1)
0x2c6: Pop(0); Push((bool) Stack[-2] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2cc

0x2c9: Push((int) 1)
0x2ca: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2cb: GOTO 0x2c0

0x2cc: Push(Stack[-3])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2ce: @ irand(Stack[-1], Stack[-3])
0x2cf: Pop(0)
0x2d0: Push("idle")
0x2d1: Push((int) 1)
0x2d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d4: @ PlayAnimation(Stack[-1])
0x2d5: Pop(1)
0x2d6: @ WaitForAnimEnd()
0x2d7: Pop(0)
0x2d8: PushEmpty()
0x2d9: Call2 0x2ec

0x2da: Pop(0)
0x2db: Return(); Pop(8)

0x2dc: PushEmpty(string, string)
0x2dd: Push((int) 11)
0x2de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e0: @ GetCurrentWeapon(Stack[-1])
0x2e1: Pop(0)
0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = Stack[-2]
0x2e4: Call2 0x1f9

0x2e5: Pop(1)
0x2e6: GOTO 0x2eb

0x2e7: PushEmpty(int)
0x2e8: Stack[-1] = Stack[-4]
0x2e9: Call2 0x88e

0x2ea: Pop(1)
0x2eb: Return(); Pop(2)

0x2ec: PushEmpty()
0x2ed: Call2 0x940

0x2ee: Pop(0)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 0)
0x2f1: @ KillTimer(Stack[-1])
0x2f2: Pop(1)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(int, string, bool, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0x2f5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2f6: Stack[-19] = (int) 0
0x2f7: Push((int) 1)
0x2f8: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x2f9: Push("attack")
0x2fa: Pop(1); Push(Stack[-1] + Stack[-20]);
0x2fb: Push("_phase1")
0x2fc: Stack[-20] = Stack[-2] + Stack[-1]; Pop(2);
0x2fd: @ HasAnimation(Stack[-17], Stack[-18])
0x2fe: Pop(0)
0x2ff: Pop(0); Push((bool) Stack[-17] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: GOTO 0x303

0x302: GOTO 0x2f7

0x303: Push((int) -1)
0x304: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x305: Pop(0); Push((bool) Stack[-19] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Return(); Pop(38)

0x308: @ GetAttackDistance(Stack[-16])
0x309: Pop(0)
0x30a: Push((float)2.1875)
0x30b: Stack[-17] = Stack[-17] * Stack[-1]; Pop(1);
0x30c: @ GetDirection(Stack[-15])
0x30d: Pop(0)
0x30e: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x30f: Pop(0)
0x310: Pop(0); Push(( Stack[-14] != 0 )
0x311: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x312: PushEmpty(bool, object, string)
0x313: Stack[-2] = Stack[-17]
0x314: Stack[-1] = "healable"
0x315: Call2 0x54a

0x316: Pop(2)
0x317: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x318: Push("heal_phase1")
0x319: @ PlayAnimation(Stack[-1])
0x31a: Pop(1)
0x31b: @ WaitForAnimEnd()
0x31c: Pop(0)
0x31d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Return(); Pop(38)

0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[-16]
0x322: Call2 0x5ba

0x323: Pop(1)
0x324: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x325: Push("heal")
0x326: @ Trigger(Stack[-15], Stack[-1])
0x327: Pop(1)
0x328: Push("heal_phase2")
0x329: @ PlayAnimation(Stack[-1])
0x32a: Pop(1)
0x32b: @ WaitForAnimEnd()
0x32c: Pop(0)
0x32d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: Return(); Pop(38)

0x330: GOTO 0x3ad

0x331: Push("GetDirection")
0x332: Push((int) 1)
0x333: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x334: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x335: @ GetDirection(Stack[-10])
0x336: Pop(0)
0x337: @@ GetDirection(Stack[-9])
0x338: Pop(0)
0x339: PushEmpty(float, cvector, cvector)
0x33a: Stack[-2] = Stack[-13]
0x33b: Stack[-1] = Stack[-12]
0x33c: Call2 0x631

0x33d: Pop(2)
0x33e: Push((float)0.5)
0x33f: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x340: GOTO 0x342

0x341: Stack[-11] = (bool) 0
0x342: Push(Stack[-11])
0x343: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x344: Stack[-8] = "battack"
0x345: Push("punch_back")
0x346: @ PlaySound(Stack[-1])
0x347: Pop(1)
0x348: GOTO 0x355

0x349: @ irand(Stack[-7], Stack[-19])
0x34a: Pop(0)
0x34b: Push("attack")
0x34c: Push((int) 1)
0x34d: Pop(1); Push(Stack[-9] + Stack[-1]);
0x34e: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x34f: Push("punch")
0x350: Push((int) 1)
0x351: Pop(1); Push(Stack[-9] + Stack[-1]);
0x352: Pop(2); Push(Stack[-2] + Stack[-1]);
0x353: @ PlaySound(Stack[-1])
0x354: Pop(1)
0x355: Push("_phase1")
0x356: Pop(1); Push(Stack[-9] + Stack[-1]);
0x357: @ PlayAnimation(Stack[-1])
0x358: Pop(1)
0x359: @ WaitForAnimEnd()
0x35a: Pop(0)
0x35b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: Return(); Pop(38)

0x35e: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x35f: Pop(0)
0x360: Pop(0); Push(( Stack[-14] != 0 )
0x361: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x362: Push("GetDirection")
0x363: Push((int) 1)
0x364: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x365: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x366: @ GetDirection(Stack[-6])
0x367: Pop(0)
0x368: @@ GetDirection(Stack[-5])
0x369: Pop(0)
0x36a: PushEmpty(float, cvector, cvector)
0x36b: Stack[-2] = Stack[-9]
0x36c: Stack[-1] = Stack[-8]
0x36d: Call2 0x631

0x36e: Pop(2)
0x36f: Push((float)0.5)
0x370: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x371: GOTO 0x373

0x372: Stack[-11] = (bool) 0
0x373: PushEmpty(float, bool)
0x374: Stack[-1] = Stack[-13]
0x375: Call2 0x3bd

0x376: Stack[-6] = Stack[-2]
0x377: Pop(2)
0x378: Push((int) 4)
0x379: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Push((float)3.0)
0x37c: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x37d: PushEmpty(float, object, float, int)
0x37e: Stack[-3] = Stack[-18]
0x37f: Stack[-2] = Stack[-8]
0x380: Stack[-1] = (int) 0
0x381: Call2 0x56c

0x382: Stack[-7] = Stack[-4]
0x383: Pop(4)
0x384: Push(Stack[-3])
0x385: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x386: Push((int) 2)
0x387: @ irand(Stack[-3], Stack[-1])
0x388: Pop(1)
0x389: Push("punch_hit")
0x38a: Push((int) 1)
0x38b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x38c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38d: @ PlaySound(Stack[-1])
0x38e: Pop(1)
0x38f: @ ReportAttack(Stack[-14])
0x390: Pop(0)
0x391: Push((int) 0)
0x392: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x393: Pop(1)
0x394: Push(GlobalVars[2])
0x395: @@ in(Stack[-2], Stack[-15])
0x396: Pop(1)
0x397: Pop(0); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x399: Push(GlobalVars[3])
0x39a: @@ add(Stack[-15])
0x39b: Pop(1)
0x39c: Push((bool) 0)
0x39d: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x39e: Pop(1)
0x39f: GOTO 0x3a3

0x3a0: Push((bool) 1)
0x3a1: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push("_phase2")
0x3a4: Pop(1); Push(Stack[-9] + Stack[-1]);
0x3a5: @ PlayAnimation(Stack[-1])
0x3a6: Pop(1)
0x3a7: @ WaitForAnimEnd()
0x3a8: Pop(0)
0x3a9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Return(); Pop(38)

0x3ac: Stack[-14] = 0
0x3ad: PushEmpty(bool)
0x3ae: Call2 0x3c4

0x3af: Pop(0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x3b1: Return(); Pop(38)

0x3b2: PushEmpty()
0x3b3: Push((int) 10)
0x3b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3b7: GOTO 0x3bc

0x3b8: PushEmpty(int)
0x3b9: Stack[-1] = Stack[-2]
0x3ba: Call2 0x88e

0x3bb: Pop(1)
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty()
0x3be: Push(Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-2] = (float) 0.4
0x3c1: GOTO 0x3c3

0x3c2: Stack[-2] = (float) 0.2
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty(bool, bool)
0x3c5: @ IsShooting(Stack[-1])
0x3c6: Pop(0)
0x3c7: Stack[-3] = Stack[-1]
0x3c8: Return(); Pop(2)

0x3c9: PushEmpty(bool, bool, bool, bool)
0x3ca: Push("ammo")
0x3cb: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x3cc: Pop(1)
0x3cd: PushEmpty(bool)
0x3ce: Stack[-1] = (bool) 1
0x3cf: Pop(0); Push((bool) Stack[-3] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d1: Pop(0); Push((bool) Stack[-2] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Stack[-1] = (bool) 0
0x3d4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d5: PushEmpty(bool, string, int)
0x3d6: Stack[-2] = "revolver_ammo"
0x3d7: Stack[-1] = (int) 2
0x3d8: Call2 0x777

0x3d9: Pop(2)
0x3da: Pop(1); Push((bool) Stack[-1] == 0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3dc: PushEmpty(string)
0x3dd: Call2 0x42c

0x3de: Pop(0)
0x3df: Push("_noammo")
0x3e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e1: @ PlaySound(Stack[-1])
0x3e2: Pop(1)
0x3e3: Push("noammo")
0x3e4: @ PlayAnimation(Stack[-1])
0x3e5: Pop(1)
0x3e6: @ WaitForAnimEnd()
0x3e7: Pop(0)
0x3e8: Stack[-5] = (bool) 0
0x3e9: Return(); Pop(4)

0x3ea: Stack[-5] = (bool) 1
0x3eb: Return(); Pop(4)

0x3ec: Stack[-1] = (int) 3
0x3ed: Return(); Pop(0)

0x3ee: Stack[-1] = (float) 0.02618
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty(bool, int, bool, int)
0x3f1: Push("ammo")
0x3f2: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x3f3: Pop(1)
0x3f4: Push("ammo")
0x3f5: Push((int) 1)
0x3f6: Pop(1); Push(Stack[-3] - Stack[-1]);
0x3f7: @ SetWeaponProperty(Stack[-4], Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: PushEmpty()
0x3fa: Call2 0x949

0x3fb: Pop(0)
0x3fc: Return(); Pop(4)

0x3fd: PushEmpty(bool, bool, bool, bool)
0x3fe: Push("ammo")
0x3ff: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x400: Pop(1)
0x401: PushEmpty(bool)
0x402: Stack[-1] = (bool) 1
0x403: Pop(0); Push((bool) Stack[-3] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x405: Pop(0); Push((bool) Stack[-2] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: Stack[-1] = (bool) 0
0x408: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x409: PushEmpty()
0x40a: Call2 0x40d

0x40b: Pop(0)
0x40c: Return(); Pop(4)

0x40d: PushEmpty(bool, string, int)
0x40e: Stack[-2] = "revolver_ammo"
0x40f: Stack[-1] = (int) 2
0x410: Call2 0x777

0x411: Pop(2)
0x412: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x413: PushEmpty(string)
0x414: Call2 0x42c

0x415: Pop(0)
0x416: Push("_reload")
0x417: Pop(2); Push(Stack[-2] + Stack[-1]);
0x418: @ PlaySound(Stack[-1])
0x419: Pop(1)
0x41a: Push("reload")
0x41b: @ PlayAnimation(Stack[-1])
0x41c: Pop(1)
0x41d: @ WaitForAnimEnd()
0x41e: Pop(0)
0x41f: Return(); Pop(0)

0x420: PushEmpty()
0x421: Push((int) 11)
0x422: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: PushEmpty()
0x425: Call2 0x40d

0x426: Pop(0)
0x427: PushEmpty(int)
0x428: Stack[-1] = Stack[-2]
0x429: Call2 0x88e

0x42a: Pop(1)
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = "gun"
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = (float) 1.3
0x42f: Return(); Pop(0)

0x430: Stack[-1] = (int) 1
0x431: Return(); Pop(0)

0x432: Stack[-1] = (int) 2
0x433: Return(); Pop(0)

0x434: Stack[-1] = (int) 2
0x435: Return(); Pop(0)

0x436: PushEmpty(string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool, string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool)
0x437: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x438: PushEmpty(bool)
0x439: Call2 0x3c9

0x43a: Pop(0)
0x43b: Pop(1); Push((bool) Stack[-1] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: GOTO 0x515

0x43e: @ GetCurrentWeapon(Stack[-24])
0x43f: Pop(0)
0x440: Stack[-23] = "attack1"
0x441: Push((bool) 1)
0x442: @ SetAttackState(Stack[-1])
0x443: Pop(1)
0x444: PushEmpty()
0x445: Call2 0x3f0

0x446: Pop(0)
0x447: Push("_phase1")
0x448: Pop(1); Push(Stack[-24] + Stack[-1]);
0x449: @ PlayAnimation(Stack[-1])
0x44a: Pop(1)
0x44b: @ WaitForAnimEnd()
0x44c: Pop(0)
0x44d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: Return(); Pop(48)

0x450: Push("shot")
0x451: @ TriggerWeapon(Stack[-1])
0x452: Pop(1)
0x453: PushEmpty(string)
0x454: Call2 0x42c

0x455: Pop(0)
0x456: Push("_shot")
0x457: Pop(2); Push(Stack[-2] + Stack[-1]);
0x458: @ PlaySound(Stack[-1])
0x459: Pop(1)
0x45a: PushEmpty(int)
0x45b: PushEmpty(int)
0x45c: Call2 0x434

0x45d: Stack[-2] = Stack[-1]
0x45e: Pop(1)
0x45f: Call2 0x7a6

0x460: Pop(1)
0x461: PushEmpty()
0x462: Call2 0x516

0x463: Pop(0)
0x464: Push((bool) 0)
0x465: @ SetAttackState(Stack[-1])
0x466: Pop(1)
0x467: PushEmpty(int)
0x468: Call2 0x3ec

0x469: Stack[-23] = Stack[-1]
0x46a: Pop(1)
0x46b: Stack[-21] = (bool) 0
0x46c: PushEmpty(float)
0x46d: Call2 0x42e

0x46e: Pop(0)
0x46f: Stack[-21] = Stack[-1] / Stack[-23]; Pop(1);
0x470: Push((float)1.0)
0x471: Push((float)1.5)
0x472: Push((float)1.0)
0x473: PushEmpty(float)
0x474: Call2 0x3ee

0x475: Pop(0)
0x476: Pop(2); Push(Stack[-2] / Stack[-1]);
0x477: Push((float)1.5)
0x478: Pop(2); Push(Stack[-2] - Stack[-1]);
0x479: PushEmpty(float)
0x47a: Call2 0x79b

0x47b: Pop(0)
0x47c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x47d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47e: Stack[-21] = Stack[-2] / Stack[-1]; Pop(2);
0x47f: @ GetDirection(Stack[-18])
0x480: Pop(0)
0x481: PushEmpty(object)
0x482: Call2 0x618

0x483: Stack[-18] = Stack[-1]
0x484: Pop(1)
0x485: Stack[-16] = (int) 0
0x486: Pop(0); Push((bool) Stack[-16] < Stack[-22])
0x487: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x488: @ RandVecCone3D(Stack[-15], Stack[-18], Stack[-19])
0x489: Pop(0)
0x48a: Push((int) 10000)
0x48b: @ GetVictimMaterialExact(Stack[-15], Stack[-14], Stack[-13], Stack[-16], Stack[-1])
0x48c: Pop(1)
0x48d: Push(Stack[-14])
0x48e: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x48f: Stack[-11] = Stack[-20]
0x490: Push((int) 4)
0x491: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Push((float)3.0)
0x494: Stack[-12] = Stack[-12] * Stack[-1]; Pop(1);
0x495: PushEmpty(float, object, float, int)
0x496: Stack[-3] = Stack[-18]
0x497: Stack[-2] = Stack[-15]
0x498: PushEmpty(int)
0x499: Call2 0x430

0x49a: Stack[-2] = Stack[-1]
0x49b: Pop(1)
0x49c: Call2 0x56c

0x49d: Stack[-14] = Stack[-4]
0x49e: Pop(4)
0x49f: Push(Stack[-10])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4a1: @@ add(Stack[-14])
0x4a2: Pop(0)
0x4a3: PushEmpty(int)
0x4a4: Call2 0x432

0x4a5: Pop(0)
0x4a6: @ ReportHit(Stack[-15], Stack[-1], Stack[-11], Stack[-12], Stack[-13], Stack[-16])
0x4a7: Pop(1)
0x4a8: PushEmpty(bool)
0x4a9: Call2 0x517

0x4aa: Pop(0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4ac: Push("health")
0x4ad: @@ GetProperty(Stack[-1], Stack[-10])
0x4ae: Pop(1)
0x4af: Pop(0); Push((bool) Stack[-9] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4b1: Push((int) 10000)
0x4b2: @ GetVictimMaterialExact(Stack[-9], Stack[-14], Stack[-13], Stack[-16], Stack[-1], Stack[-15])
0x4b3: Pop(1)
0x4b4: PushEmpty(bool)
0x4b5: Stack[-1] = (bool) 0
0x4b6: Push(Stack[-9])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b8: Pop(0); Push((bool) Stack[-9] != Stack[-15])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: Stack[-1] = (bool) 1
0x4bb: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4bc: PushEmpty(float, object, float, int)
0x4bd: Stack[-3] = Stack[-12]
0x4be: Push((float)0.75)
0x4bf: Stack[-3] = Stack[-16] * Stack[-1]; Pop(1);
0x4c0: PushEmpty(int)
0x4c1: Call2 0x430

0x4c2: Stack[-2] = Stack[-1]
0x4c3: Pop(1)
0x4c4: Call2 0x56c

0x4c5: Stack[-11] = Stack[-4]
0x4c6: Pop(4)
0x4c7: Push(Stack[-7])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c9: @@ add(Stack[-8])
0x4ca: Pop(0)
0x4cb: PushEmpty(int)
0x4cc: Call2 0x432

0x4cd: Pop(0)
0x4ce: @ ReportHit(Stack[-9], Stack[-1], Stack[-8], Stack[-12], Stack[-13], Stack[-16])
0x4cf: Pop(1)
0x4d0: Stack[-8] = 0
0x4d1: GOTO 0x4e4

0x4d2: Push((int) -1)
0x4d3: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d5: Pop(0); Push((bool) Stack[-21] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d7: @ GetScene(Stack[-6])
0x4d8: Pop(0)
0x4d9: Push("scripted")
0x4da: Push(CVector(0.0, 0.0, 1.0))
0x4db: Push("richochet.xml")
0x4dc: @ AddActorByType(Stack[-8], Stack[-3], Stack[-9], Stack[-15], Stack[-2], Stack[-1])
0x4dd: Pop(3)
0x4de: Push("Material")
0x4df: @@ SetScriptProperty(Stack[-1], Stack[-14])
0x4e0: Pop(1)
0x4e1: Stack[-21] = (bool) 1
0x4e2: Stack[-5] = 0
0x4e3: Stack[-6] = 0
0x4e4: Stack[-14] = 0
0x4e5: Push((int) 1)
0x4e6: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x4e7: GOTO 0x486

0x4e8: @@ size(Stack[-4])
0x4e9: Pop(0)
0x4ea: Stack[-3] = (int) 0
0x4eb: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x4ec: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4ed: @@ get(Stack[-2], Stack[-3])
0x4ee: Pop(0)
0x4ef: @ ReportAttack(Stack[-2])
0x4f0: Pop(0)
0x4f1: Push(GlobalVars[2])
0x4f2: @@ in(Stack[-2], Stack[-3])
0x4f3: Pop(1)
0x4f4: Pop(0); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f6: Push(GlobalVars[3])
0x4f7: @@ add(Stack[-3])
0x4f8: Pop(1)
0x4f9: Push((bool) 0)
0x4fa: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x4fb: Pop(1)
0x4fc: GOTO 0x500

0x4fd: Push((bool) 1)
0x4fe: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x4ff: Pop(1)
0x500: Stack[-2] = 0
0x501: Push((int) 1)
0x502: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x503: GOTO 0x4eb

0x504: Push("_phase2")
0x505: Pop(1); Push(Stack[-24] + Stack[-1]);
0x506: @ PlayAnimation(Stack[-1])
0x507: Pop(1)
0x508: @ WaitForAnimEnd()
0x509: Pop(0)
0x50a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Return(); Pop(48)

0x50d: PushEmpty()
0x50e: Call2 0x3fd

0x50f: Pop(0)
0x510: Stack[-17] = 0
0x511: PushEmpty(bool)
0x512: Call2 0x519

0x513: Pop(0)
0x514: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x515: Return(); Pop(48)

0x516: Return(); Pop(0)

0x517: Stack[-1] = (bool) 0
0x518: Return(); Pop(0)

0x519: PushEmpty(bool, bool)
0x51a: @ IsShooting(Stack[-1])
0x51b: Pop(0)
0x51c: Stack[-3] = Stack[-1]
0x51d: Return(); Pop(2)

0x51e: PushEmpty()
0x51f: Call2 0x536

0x520: Pop(0)
0x521: PushEmpty(bool, string, int)
0x522: Stack[-2] = "revolver_ammo"
0x523: Stack[-1] = (int) 2
0x524: Call2 0x777

0x525: Pop(2)
0x526: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x527: PushEmpty(string)
0x528: Call2 0x534

0x529: Pop(0)
0x52a: Push("_reload")
0x52b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52c: @ PlaySound(Stack[-1])
0x52d: Pop(1)
0x52e: Push("reload")
0x52f: @ PlayAnimation(Stack[-1])
0x530: Pop(1)
0x531: @ WaitForAnimEnd()
0x532: Pop(0)
0x533: Return(); Pop(0)

0x534: Stack[-1] = "gun"
0x535: Return(); Pop(0)

0x536: Return(); Pop(0)

0x537: PushEmpty()
0x538: Push((int) 2)
0x539: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53b: Stack[-2] = "fire"
0x53c: Return(); Pop(0)

0x53d: GOTO 0x543

0x53e: Push((int) 1)
0x53f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-2] = "bullet"
0x542: Return(); Pop(0)

0x543: Stack[-2] = "phys"
0x544: Return(); Pop(0)

0x545: PushEmpty(bool, bool)
0x546: @ IsPlayerActor(Stack[-3], Stack[-1])
0x547: Pop(0)
0x548: Stack[-4] = Stack[-1]
0x549: Return(); Pop(2)

0x54a: PushEmpty(bool, bool)
0x54b: Push("HasProperty")
0x54c: Push((int) 2)
0x54d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x54e: Pop(1); Push((bool) Stack[-1] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-5] = (bool) 0
0x551: Return(); Pop(2)

0x552: @@ HasProperty(Stack[-3], Stack[-1])
0x553: Pop(0)
0x554: Stack[-5] = Stack[-1]
0x555: Return(); Pop(2)

0x556: PushEmpty(float, float)
0x557: PushEmpty(bool, object, string)
0x558: Stack[-2] = Stack[-10]
0x559: Stack[-1] = Stack[-9]
0x55a: Call2 0x54a

0x55b: Pop(2)
0x55c: Pop(1); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-8] = (bool) 0
0x55f: Return(); Pop(2)

0x560: @@ GetProperty(Stack[-6], Stack[-1])
0x561: Pop(0)
0x562: PushEmpty(float, float, float, float)
0x563: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x564: Stack[-2] = Stack[-8]
0x565: Stack[-1] = Stack[-7]
0x566: Call2 0x5fc

0x567: Pop(3)
0x568: @@ SetProperty(Stack[-7], Stack[-1])
0x569: Pop(1)
0x56a: Stack[-8] = (bool) 1
0x56b: Return(); Pop(2)

0x56c: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x56d: PushEmpty(bool, object, string)
0x56e: Stack[-2] = Stack[-18]
0x56f: Stack[-1] = "health"
0x570: Call2 0x54a

0x571: Pop(2)
0x572: Pop(1); Push((bool) Stack[-1] == 0)
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-16] = (float) 0.0
0x575: Return(); Pop(12)

0x576: PushEmpty(bool, object, string)
0x577: Stack[-2] = Stack[-18]
0x578: Stack[-1] = "armor"
0x579: Call2 0x54a

0x57a: Pop(2)
0x57b: Pop(1); Push((bool) Stack[-1] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57d: Stack[-6] = (int) 0
0x57e: GOTO 0x582

0x57f: Push("armor")
0x580: @@ GetProperty(Stack[-1], Stack[-7])
0x581: Pop(1)
0x582: Push("armor_")
0x583: PushEmpty(string, int)
0x584: Stack[-1] = Stack[-16]
0x585: Call2 0x537

0x586: Pop(1)
0x587: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x588: PushEmpty(bool, object, string)
0x589: Stack[-2] = Stack[-18]
0x58a: Stack[-1] = Stack[-8]
0x58b: Call2 0x54a

0x58c: Pop(2)
0x58d: Pop(1); Push((bool) Stack[-1] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-4] = (int) 0
0x590: GOTO 0x593

0x591: @@ GetProperty(Stack[-5], Stack[-4])
0x592: Pop(0)
0x593: PushEmpty(float, float, float)
0x594: Pop(0); Push(Stack[-9] + Stack[-7]);
0x595: Push((float)100.0)
0x596: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x597: Stack[-1] = (int) 1
0x598: Call2 0x5f5

0x599: Stack[-6] = Stack[-3]
0x59a: Pop(3)
0x59b: Push("health")
0x59c: @@ GetProperty(Stack[-1], Stack[-3])
0x59d: Pop(1)
0x59e: Push((int) 1)
0x59f: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5a0: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5a1: Push("health")
0x5a2: PushEmpty(float, float, float, float)
0x5a3: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5a4: Stack[-2] = (int) 0
0x5a5: Stack[-1] = (int) 1
0x5a6: Call2 0x5fc

0x5a7: Pop(3)
0x5a8: @@ SetProperty(Stack[-2], Stack[-1])
0x5a9: Pop(2)
0x5aa: PushEmpty(bool, object)
0x5ab: Stack[-1] = Stack[-17]
0x5ac: Call2 0x545

0x5ad: Pop(1)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5af: PushEmpty(float)
0x5b0: Stack[-1] = -Stack[-2]; Pop(0);
0x5b1: Call2 0x665

0x5b2: Pop(1)
0x5b3: Stack[-16] = Stack[-1]
0x5b4: Return(); Pop(12)

0x5b5: PushEmpty(bool, bool)
0x5b6: @@ IsDead(Stack[-1])
0x5b7: Pop(0)
0x5b8: Stack[-4] = Stack[-1]
0x5b9: Return(); Pop(2)

0x5ba: PushEmpty(object, object, object, object)
0x5bb: Pop(0); Push((bool) Stack[-5] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bd: Stack[-6] = (bool) 0
0x5be: Return(); Pop(4)

0x5bf: @ GetScene(Stack[-2])
0x5c0: Pop(0)
0x5c1: Pop(0); Push((bool) Stack[-2] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c3: Stack[-6] = (bool) 0
0x5c4: Return(); Pop(4)

0x5c5: @@ GetScene(Stack[-1])
0x5c6: Pop(0)
0x5c7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c9: Stack[-6] = (bool) 0
0x5ca: Return(); Pop(4)

0x5cb: Stack[-6] = (bool) 1
0x5cc: Return(); Pop(4)

0x5cd: Stack[-1] = 0
0x5ce: Stack[-2] = 0
0x5cf: PushEmpty()
0x5d0: Push((int) 1)
0x5d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d3: Stack[-2] = "wood"
0x5d4: Return(); Pop(0)

0x5d5: GOTO 0x5ed

0x5d6: Push((int) 2)
0x5d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d9: Stack[-2] = "metal"
0x5da: Return(); Pop(0)

0x5db: GOTO 0x5ed

0x5dc: Push((int) 3)
0x5dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5df: Stack[-2] = "ground"
0x5e0: Return(); Pop(0)

0x5e1: GOTO 0x5ed

0x5e2: Push((int) 4)
0x5e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e5: Stack[-2] = "water"
0x5e6: Return(); Pop(0)

0x5e7: GOTO 0x5ed

0x5e8: Push((int) 5)
0x5e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5eb: Stack[-2] = "carpet"
0x5ec: Return(); Pop(0)

0x5ed: Stack[-2] = "stone"
0x5ee: Return(); Pop(0)

0x5ef: PushEmpty(object, object)
0x5f0: @ self(Stack[-1])
0x5f1: Pop(0)
0x5f2: Stack[-3] = Stack[-1]
0x5f3: Return(); Pop(2)

0x5f4: Stack[-1] = 0
0x5f5: PushEmpty()
0x5f6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-3] = Stack[-2]
0x5f9: GOTO 0x5fb

0x5fa: Stack[-3] = Stack[-1]
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty()
0x5fd: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5fe: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ff: Stack[-4] = Stack[-2]
0x600: Return(); Pop(0)

0x601: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-4] = Stack[-1]
0x604: Return(); Pop(0)

0x605: Stack[-4] = Stack[-3]
0x606: Return(); Pop(0)

0x607: PushEmpty()
0x608: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x609: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60a: Stack[-4] = Stack[-2]
0x60b: Return(); Pop(0)

0x60c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: Stack[-4] = Stack[-1]
0x60f: Return(); Pop(0)

0x610: Stack[-4] = Stack[-3]
0x611: Return(); Pop(0)

0x612: PushEmpty(object, object)
0x613: @ CreateObjectSet(Stack[-1])
0x614: Pop(0)
0x615: Stack[-3] = Stack[-1]
0x616: Return(); Pop(2)

0x617: Stack[-1] = 0
0x618: PushEmpty(object, object)
0x619: @ CreateObjectVector(Stack[-1])
0x61a: Pop(0)
0x61b: Stack[-3] = Stack[-1]
0x61c: Return(); Pop(2)

0x61d: Stack[-1] = 0
0x61e: PushEmpty()
0x61f: Push(CvectorIndex(Stack[-2], 0))
0x620: Push(CvectorIndex(Stack[-2], 0))
0x621: Pop(2); Push(Stack[-2] * Stack[-1]);
0x622: Push(CvectorIndex(Stack[-3], 2))
0x623: Push(CvectorIndex(Stack[-3], 2))
0x624: Pop(2); Push(Stack[-2] * Stack[-1]);
0x625: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: Push(CvectorIndex(Stack[-1], 0))
0x629: Push(CvectorIndex(Stack[-2], 0))
0x62a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62b: Push(CvectorIndex(Stack[-2], 2))
0x62c: Push(CvectorIndex(Stack[-3], 2))
0x62d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62f: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x630: Return(); Pop(0)

0x631: PushEmpty()
0x632: PushEmpty(float, cvector, cvector)
0x633: Stack[-2] = Stack[-5]
0x634: Stack[-1] = Stack[-4]
0x635: Call2 0x61e

0x636: Pop(2)
0x637: PushEmpty(float, cvector)
0x638: Stack[-1] = Stack[-5]
0x639: Call2 0x627

0x63a: Pop(1)
0x63b: PushEmpty(float, cvector)
0x63c: Stack[-1] = Stack[-5]
0x63d: Call2 0x627

0x63e: Pop(1)
0x63f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x640: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: Pop(0); Push((bool) Stack[-2] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x645: Stack[-3] = (bool) 0
0x646: Return(); Pop(0)

0x647: Push((int) 0)
0x648: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64a: Push((int) 8)
0x64b: @ SendWorldWndMessage(Stack[-1])
0x64c: Pop(1)
0x64d: GOTO 0x657

0x64e: Push((int) 0)
0x64f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x651: Push((int) 9)
0x652: @ SendWorldWndMessage(Stack[-1])
0x653: Pop(1)
0x654: GOTO 0x657

0x655: Stack[-3] = (bool) 0
0x656: Return(); Pop(0)

0x657: PushEmpty(float)
0x658: Stack[-1] = Stack[-2]
0x659: Call2 0x676

0x65a: Pop(1)
0x65b: PushEmpty(bool, object, string, float, float, float)
0x65c: Stack[-5] = Stack[-8]
0x65d: Stack[-4] = "reputation"
0x65e: Stack[-3] = Stack[-7]
0x65f: Stack[-2] = (int) 0
0x660: Stack[-1] = (int) 1
0x661: Call2 0x556

0x662: Pop(6)
0x663: Stack[-3] = (bool) 1
0x664: Return(); Pop(0)

0x665: PushEmpty(object, object)
0x666: @ CreateFloatVector(Stack[-1])
0x667: Pop(0)
0x668: @@ add(Stack[-3])
0x669: Pop(0)
0x66a: Push((int) 0)
0x66b: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66d: Push((float)0.7)
0x66e: Push((int) 500)
0x66f: @ RumblePlay(Stack[-2], Stack[-1])
0x670: Pop(2)
0x671: Push((int) 15)
0x672: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x673: Pop(1)
0x674: Return(); Pop(2)

0x675: Stack[-1] = 0
0x676: PushEmpty(object, object)
0x677: @ CreateFloatVector(Stack[-1])
0x678: Pop(0)
0x679: @@ add(Stack[-3])
0x67a: Pop(0)
0x67b: Push((int) 16)
0x67c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x67d: Pop(1)
0x67e: Return(); Pop(2)

0x67f: Stack[-1] = 0
0x680: PushEmpty(float, float)
0x681: @ GetGameTime(Stack[-1])
0x682: Pop(0)
0x683: Push((int) 1)
0x684: PushEmpty(int)
0x685: Push((int) 24)
0x686: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x687: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x688: Return(); Pop(2)

0x689: PushEmpty(bool, bool)
0x68a: @ IsExistingSound(Stack[-1], Stack[-3])
0x68b: Pop(0)
0x68c: Push(Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: @ PlaySound(Stack[-3])
0x68f: Pop(0)
0x690: Return(); Pop(2)

0x691: PushEmpty(bool, bool)
0x692: Push("god_mode")
0x693: @ GetVariable(Stack[-1], Stack[-2])
0x694: Pop(1)
0x695: Stack[-3] = Stack[-1]
0x696: Return(); Pop(2)

0x697: PushEmpty(int, int)
0x698: Push("kerosene")
0x699: @ GetItemCountOfType(Stack[-2], Stack[-1])
0x69a: Pop(1)
0x69b: Stack[-3] = Stack[-1]
0x69c: Return(); Pop(2)

0x69d: PushEmpty(int, int)
0x69e: Push("branch")
0x69f: @ GetVariable(Stack[-1], Stack[-2])
0x6a0: Pop(1)
0x6a1: Stack[-3] = Stack[-1]
0x6a2: Return(); Pop(2)

0x6a3: PushEmpty()
0x6a4: Push((int) 10)
0x6a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a6: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a7: PushEmpty()
0x6a8: Call2 0x74f

0x6a9: Pop(0)
0x6aa: Stack[-2] = (bool) 1
0x6ab: Return(); Pop(0)

0x6ac: GOTO 0x6be

0x6ad: Push((int) 11)
0x6ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6af: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b0: PushEmpty()
0x6b1: Call2 0x757

0x6b2: Pop(0)
0x6b3: Stack[-2] = (bool) 1
0x6b4: Return(); Pop(0)

0x6b5: GOTO 0x6be

0x6b6: Push((int) 12)
0x6b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b9: PushEmpty()
0x6ba: Call2 0x753

0x6bb: Pop(0)
0x6bc: Stack[-2] = (bool) 1
0x6bd: Return(); Pop(0)

0x6be: Stack[-2] = (bool) 0
0x6bf: Return(); Pop(0)

0x6c0: PushEmpty(bool, int, string, int, bool, int, string, string, bool, int, string, int, bool, int, string, string)
0x6c1: @ GetGroundMaterial(Stack[-8], Stack[-7])
0x6c2: Pop(0)
0x6c3: Pop(0); Push((bool) Stack[-8] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Stack[-7] = (int) -1
0x6c6: PushEmpty(string, int)
0x6c7: Stack[-1] = Stack[-9]
0x6c8: Call2 0x5cf

0x6c9: Stack[-8] = Stack[-2]
0x6ca: Pop(2)
0x6cb: Stack[-5] = (int) 0
0x6cc: Push("step_")
0x6cd: Pop(1); Push(Stack[-1] + Stack[-7]);
0x6ce: Push((int) 1)
0x6cf: Pop(1); Push(Stack[-7] + Stack[-1]);
0x6d0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d1: @ IsExistingSound(Stack[-5], Stack[-1])
0x6d2: Pop(1)
0x6d3: Pop(0); Push((bool) Stack[-4] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: GOTO 0x6d9

0x6d6: Push((int) 1)
0x6d7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x6d8: GOTO 0x6cc

0x6d9: Pop(0); Push((bool) Stack[-5] == 0)
0x6da: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6db: Push(GlobalVars[0])
0x6dc: Stack[-1] = ""
0x6dd: GlobalVars[0] = Stack[-1]; Pop(1)
0x6de: Return(); Pop(16)

0x6df: Push((int) 1)
0x6e0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e2: Stack[-3] = (int) 0
0x6e3: GOTO 0x6f0

0x6e4: @ irand(Stack[-3], Stack[-5])
0x6e5: Pop(0)
0x6e6: Push("step_")
0x6e7: Pop(1); Push(Stack[-1] + Stack[-7]);
0x6e8: Push((int) 1)
0x6e9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6ea: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x6eb: Push(GlobalVars[0])
0x6ec: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: GOTO 0x6f0

0x6ef: GOTO 0x6e4

0x6f0: Push("step_")
0x6f1: Pop(1); Push(Stack[-1] + Stack[-7]);
0x6f2: Push((int) 1)
0x6f3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6f4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6f5: @ PlaySound(Stack[-1])
0x6f6: Pop(0)
0x6f7: Push(GlobalVars[0])
0x6f8: Stack[-1] = Stack[-2]
0x6f9: GlobalVars[0] = Stack[-1]; Pop(1)
0x6fa: Return(); Pop(16)

0x6fb: PushEmpty(object, object, object, object)
0x6fc: PushEmpty(int)
0x6fd: Call2 0x680

0x6fe: Pop(0)
0x6ff: Push((int) 12)
0x700: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x702: Push("ACHIEVEMENT_MIGHT")
0x703: @ UnlockAchievement(Stack[-1])
0x704: Pop(1)
0x705: @ GetMainOutdoorScene(Stack[-2])
0x706: Pop(0)
0x707: Push("player_death")
0x708: Push("play_death_klara.bin")
0x709: @ AddBlankActor(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x70a: Pop(2)
0x70b: @ SetDeathState()
0x70c: Pop(0)
0x70d: Return(); Pop(4)

0x70e: Stack[-1] = 0
0x70f: Stack[-2] = 0
0x710: PushEmpty(bool, bool)
0x711: Push((int) 11)
0x712: @ KillTimer(Stack[-1], Stack[-2])
0x713: Pop(1)
0x714: Push(Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x716: Push((int) -3)
0x717: @ ModNoise(Stack[-1])
0x718: Pop(1)
0x719: Return(); Pop(2)

0x71a: PushEmpty()
0x71b: Call2 0x710

0x71c: Pop(0)
0x71d: Push((int) 11)
0x71e: Push((float)0.15)
0x71f: @ SetTimer(Stack[-2], Stack[-1])
0x720: Pop(2)
0x721: Push((int) 3)
0x722: @ ModNoise(Stack[-1])
0x723: Pop(1)
0x724: Return(); Pop(0)

0x725: PushEmpty(bool, bool)
0x726: Push((int) 10)
0x727: @ KillTimer(Stack[-1], Stack[-2])
0x728: Pop(1)
0x729: Push(Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72b: Push((int) -2)
0x72c: @ ModNoise(Stack[-1])
0x72d: Pop(1)
0x72e: Return(); Pop(2)

0x72f: PushEmpty(bool, bool)
0x730: Push((int) 12)
0x731: @ KillTimer(Stack[-1], Stack[-2])
0x732: Pop(1)
0x733: Push(Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x735: Push((int) -1)
0x736: @ ModNoise(Stack[-1])
0x737: Pop(1)
0x738: Return(); Pop(2)

0x739: PushEmpty()
0x73a: Call2 0x725

0x73b: Pop(0)
0x73c: Push((int) 10)
0x73d: Push((float)0.35)
0x73e: @ SetTimer(Stack[-2], Stack[-1])
0x73f: Pop(2)
0x740: Push((int) 2)
0x741: @ ModNoise(Stack[-1])
0x742: Pop(1)
0x743: Return(); Pop(0)

0x744: PushEmpty()
0x745: Call2 0x72f

0x746: Pop(0)
0x747: Push((int) 12)
0x748: Push((float)0.6)
0x749: @ SetTimer(Stack[-2], Stack[-1])
0x74a: Pop(2)
0x74b: Push((int) 1)
0x74c: @ ModNoise(Stack[-1])
0x74d: Pop(1)
0x74e: Return(); Pop(0)

0x74f: PushEmpty()
0x750: Call2 0x6c0

0x751: Pop(0)
0x752: Return(); Pop(0)

0x753: PushEmpty()
0x754: Call2 0x6c0

0x755: Pop(0)
0x756: Return(); Pop(0)

0x757: PushEmpty()
0x758: Call2 0x6c0

0x759: Pop(0)
0x75a: PushEmpty()
0x75b: Call2 0x710

0x75c: Pop(0)
0x75d: Return(); Pop(0)

0x75e: PushEmpty()
0x75f: Call2 0x744

0x760: Pop(0)
0x761: PushEmpty()
0x762: Call2 0x710

0x763: Pop(0)
0x764: Return(); Pop(0)

0x765: PushEmpty()
0x766: Call2 0x739

0x767: Pop(0)
0x768: PushEmpty()
0x769: Call2 0x710

0x76a: Pop(0)
0x76b: Return(); Pop(0)

0x76c: PushEmpty()
0x76d: Call2 0x725

0x76e: Pop(0)
0x76f: PushEmpty()
0x770: Call2 0x71a

0x771: Pop(0)
0x772: Return(); Pop(0)

0x773: PushEmpty()
0x774: Call2 0x72f

0x775: Pop(0)
0x776: Return(); Pop(0)

0x777: PushEmpty(bool, int, int, bool, bool, int, int, bool)
0x778: Push("ammo")
0x779: @ GetWeaponProperty(Stack[-5], Stack[-1], Stack[-4])
0x77a: Pop(1)
0x77b: PushEmpty(bool)
0x77c: Stack[-1] = (bool) 0
0x77d: Push(Stack[-5])
0x77e: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77f: Pop(0); Push((bool) Stack[-4] >= Stack[-10])
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: Stack[-1] = (bool) 1
0x782: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x783: Stack[-11] = (bool) 0
0x784: Return(); Pop(8)

0x785: @ GetInvItemByName(Stack[-2], Stack[-10])
0x786: Pop(0)
0x787: Pop(0); Push((bool) Stack[-3] < Stack[-9])
0x788: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x789: Push((int) 1)
0x78a: @ RemoveItemByType(Stack[-2], Stack[-3], Stack[-1])
0x78b: Pop(1)
0x78c: Pop(0); Push((bool) Stack[-1] == 0)
0x78d: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78e: GOTO 0x792

0x78f: Push((int) 1)
0x790: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x791: GOTO 0x787

0x792: Pop(0); Push((bool) Stack[-3] == 0)
0x793: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x794: Stack[-11] = (bool) 0
0x795: Return(); Pop(8)

0x796: Push("ammo")
0x797: @ SetWeaponProperty(Stack[-5], Stack[-1], Stack[-4])
0x798: Pop(1)
0x799: Stack[-11] = (bool) 1
0x79a: Return(); Pop(8)

0x79b: PushEmpty(bool, int, bool, int)
0x79c: Push("durability")
0x79d: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x79e: Pop(1)
0x79f: Push(Stack[-2])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a1: Push((float)100.0)
0x7a2: Stack[-6] = Stack[-2] / Stack[-1]; Pop(1);
0x7a3: GOTO 0x7a5

0x7a4: Stack[-5] = (float) 1.0
0x7a5: Return(); Pop(4)

0x7a6: PushEmpty(bool, int, bool, int)
0x7a7: Push("durability")
0x7a8: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x7a9: Pop(1)
0x7aa: Pop(0); Push((bool) Stack[-2] == 0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ac: Stack[-1] = (int) 100
0x7ad: PushEmpty(int, int, int, int)
0x7ae: Stack[-3] = Stack[-5] - Stack[-9]; Pop(0);
0x7af: Stack[-2] = (int) 0
0x7b0: Stack[-1] = (int) 100
0x7b1: Call2 0x607

0x7b2: Stack[-5] = Stack[-4]
0x7b3: Pop(4)
0x7b4: Push("durability")
0x7b5: @ SetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x7b6: Pop(1)
0x7b7: Return(); Pop(4)

0x7b8: PushEmpty()
0x7b9: PushEmpty(float)
0x7ba: Call2 0x79b

0x7bb: Pop(0)
0x7bc: Push((int) 1)
0x7bd: Pop(1); Push(Stack[-1] - Stack[-3]);
0x7be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7bf: Stack[-3] = Stack[-2] + Stack[-1]; Pop(1);
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty(int, int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, int, bool, bool, int, object, int, bool, bool)
0x7c2: PushEmpty(int)
0x7c3: Call2 0x69d

0x7c4: Pop(0)
0x7c5: Push((int) 0)
0x7c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7c8: Stack[-11] = (int) 0
0x7c9: Push("birdMaskAchievement")
0x7ca: @ GetVariable(Stack[-1], Stack[-12])
0x7cb: Pop(1)
0x7cc: Push((int) 0)
0x7cd: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7cf: Push((int) 1)
0x7d0: @ GetItemCount(Stack[-11], Stack[-1])
0x7d1: Pop(1)
0x7d2: Push("bird_mask")
0x7d3: @ GetInvItemByName(Stack[-10], Stack[-1])
0x7d4: Pop(1)
0x7d5: Push("bird_balahon")
0x7d6: @ GetInvItemByName(Stack[-9], Stack[-1])
0x7d7: Pop(1)
0x7d8: Stack[-7] = (bool) 0
0x7d9: Stack[-6] = (bool) 0
0x7da: Stack[-5] = (int) 0
0x7db: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7dd: Push((int) 1)
0x7de: @ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x7df: Pop(1)
0x7e0: @@ GetItemID(Stack[-3])
0x7e1: Pop(0)
0x7e2: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e4: Push((int) 1)
0x7e5: @ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x7e6: Pop(1)
0x7e7: Push(Stack[-2])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e9: Stack[-7] = (bool) 1
0x7ea: GOTO 0x7f3

0x7eb: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7ed: Push((int) 1)
0x7ee: @ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x7ef: Pop(1)
0x7f0: Push(Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Stack[-6] = (bool) 1
0x7f3: Stack[-4] = 0
0x7f4: Push((int) 1)
0x7f5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x7f6: GOTO 0x7db

0x7f7: PushEmpty(bool)
0x7f8: Stack[-1] = (bool) 0
0x7f9: Push(Stack[-8])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fb: Push(Stack[-7])
0x7fc: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fd: Stack[-1] = (bool) 1
0x7fe: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7ff: Push("birdMaskAchievement")
0x800: Push((int) 1)
0x801: @ SetVariable(Stack[-2], Stack[-1])
0x802: Pop(2)
0x803: Push("ACHIEVEMENT_THEY")
0x804: @ UnlockAchievement(Stack[-1])
0x805: Pop(1)
0x806: PushEmpty(bool, int)
0x807: Stack[-1] = Stack[-25]
0x808: Call2 0x6a3

0x809: Stack[-26] = Stack[-2]
0x80a: Pop(2)
0x80b: Return(); Pop(22)

0x80c: PushEmpty()
0x80d: PushEmpty(bool, int)
0x80e: Stack[-1] = Stack[-3]
0x80f: Call2 0x7c1

0x810: Pop(2)
0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: Push("die")
0x814: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x816: PushEmpty()
0x817: Call2 0x6fb

0x818: Pop(0)
0x819: Return(); Pop(0)

0x81a: PushEmpty(float, object, object, float, object, object)
0x81b: Push("health")
0x81c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x81d: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x81e: Push("health")
0x81f: @ GetProperty(Stack[-1], Stack[-4])
0x820: Pop(1)
0x821: Push((float)0.001)
0x822: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x824: @ SignalDeath(Stack[-8])
0x825: Pop(0)
0x826: GOTO 0x833

0x827: Push("reputation")
0x828: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x829: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82a: @ GetScene(Stack[-2])
0x82b: Pop(0)
0x82c: Push("prc")
0x82d: PushEmpty(object)
0x82e: Call2 0x5ef

0x82f: Pop(0)
0x830: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-4])
0x831: Pop(2)
0x832: Stack[-2] = 0
0x833: @ CreateStringVector(Stack[-1])
0x834: Pop(0)
0x835: @@ add(Stack[-7])
0x836: Pop(0)
0x837: Push((int) 10)
0x838: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x839: Pop(1)
0x83a: Return(); Pop(6)

0x83b: Stack[-1] = 0
0x83c: PushEmpty()
0x83d: PushEmpty(bool)
0x83e: Call2 0x691

0x83f: Pop(0)
0x840: Pop(1); Push((bool) Stack[-1] == 0)
0x841: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x842: PushEmpty()
0x843: Call2 0x6fb

0x844: Pop(0)
0x845: Return(); Pop(0)

0x846: PushEmpty(bool, bool)
0x847: Pop(0); Push((bool) Stack[-5] == 0)
0x848: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x849: Return(); Pop(2)

0x84a: Push(GlobalVars[2])
0x84b: @@ in(Stack[-2], Stack[-6])
0x84c: Pop(1)
0x84d: Push(Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x84f: Push("Reputation is not changed for enemy: ")
0x850: Pop(1); Push(Stack[-1] + Stack[-6]);
0x851: @ Trace(Stack[-1])
0x852: Pop(1)
0x853: Return(); Pop(2)

0x854: Pop(0); Push((bool) Stack[-3] == 0)
0x855: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x856: Push(GlobalVars[1])
0x857: @@ in(Stack[-2], Stack[-6])
0x858: Pop(1)
0x859: Push(Stack[-1])
0x85a: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x85b: Return(); Pop(2)

0x85c: Push(GlobalVars[1])
0x85d: @@ add(Stack[-6])
0x85e: Pop(1)
0x85f: PushEmpty(bool, object, float)
0x860: PushEmpty(object)
0x861: Call2 0x5ef

0x862: Stack[-3] = Stack[-1]
0x863: Pop(1)
0x864: Stack[-1] = Stack[-7]
0x865: Call2 0x642

0x866: Pop(3)
0x867: Return(); Pop(2)

0x868: PushEmpty()
0x869: Call2 0x940

0x86a: Pop(0)
0x86b: PushEmpty()
0x86c: Call2 0x71a

0x86d: Pop(0)
0x86e: Return(); Pop(0)

0x86f: PushEmpty()
0x870: Return(); Pop(0)

0x871: PushEmpty(float, float, float, float)
0x872: Push((float)770.0)
0x873: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x875: @ Trace(Stack[-5])
0x876: Pop(0)
0x877: Push((float)770.0)
0x878: Pop(1); Push(Stack[-6] - Stack[-1]);
0x879: Push((float)0.0035)
0x87a: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x87b: PushEmpty(float, object, float, int)
0x87c: PushEmpty(object)
0x87d: Call2 0x5ef

0x87e: Stack[-4] = Stack[-1]
0x87f: Pop(1)
0x880: Stack[-2] = Stack[-6]
0x881: Stack[-1] = (int) 0
0x882: Call2 0x56c

0x883: Stack[-5] = Stack[-4]
0x884: Pop(4)
0x885: PushEmpty(object)
0x886: Call2 0x5ef

0x887: Pop(0)
0x888: Push((int) 0)
0x889: Push(CVector(0.0, 0.0, 0.0))
0x88a: Push(CVector(0.0, 0.0, 0.0))
0x88b: @ ReportHit(Stack[-4], Stack[-3], Stack[-5], Stack[-6], Stack[-2], Stack[-1])
0x88c: Pop(4)
0x88d: Return(); Pop(4)

0x88e: PushEmpty(object, object, object, cvector, string, bool, cvector, int, bool, bool, int, int, bool, int, object, object, object, cvector, string, bool, cvector, int, bool, bool, int, int, bool, int)
0x88f: Push((int) 0)
0x890: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x892: @ Inventory()
0x893: Pop(0)
0x894: GOTO 0x93f

0x895: Push((int) 1)
0x896: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x897: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x898: @ GetMainOutdoorScene(Stack[-14])
0x899: Pop(0)
0x89a: @ GetActiveScene(Stack[-13])
0x89b: Pop(0)
0x89c: Pop(0); Push((bool) Stack[-14] == 0)
0x89d: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x89e: Push("Can't find main outdoor oscene")
0x89f: @ Trace(Stack[-1])
0x8a0: Pop(1)
0x8a1: Return(); Pop(28)

0x8a2: @@ GetMap(Stack[-12])
0x8a3: Pop(0)
0x8a4: Pop(0); Push((bool) Stack[-12] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a6: Push("Can't find map")
0x8a7: @ Trace(Stack[-1])
0x8a8: Pop(1)
0x8a9: Return(); Pop(28)

0x8aa: Pop(0); Push((bool) Stack[-14] == Stack[-13])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ac: @ GetPosition(Stack[-11])
0x8ad: Pop(0)
0x8ae: GOTO 0x8bc

0x8af: @@ GetName(Stack[-10])
0x8b0: Pop(0)
0x8b1: Push("pt_gmap_")
0x8b2: Pop(1); Push(Stack[-1] + Stack[-11]);
0x8b3: @@ GetLocator(Stack[-1], Stack[-10], Stack[-12], Stack[-9])
0x8b4: Pop(1)
0x8b5: Pop(0); Push((bool) Stack[-9] == 0)
0x8b6: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b7: Push("FIXME: No map locator for scene : ")
0x8b8: Pop(1); Push(Stack[-1] + Stack[-11]);
0x8b9: @ Trace(Stack[-1])
0x8ba: Pop(1)
0x8bb: Stack[-11] = CVector(0.0, 0.0, 0.0)
0x8bc: Push(CvectorIndex(Stack[-11], 0))
0x8bd: Push(CvectorIndex(Stack[-12], 2))
0x8be: @@ SetMapParams(Stack[-2], Stack[-1])
0x8bf: Pop(2)
0x8c0: @ ShowMap(Stack[-12])
0x8c1: Pop(0)
0x8c2: Stack[-12] = 0
0x8c3: Stack[-13] = 0
0x8c4: Stack[-14] = 0
0x8c5: GOTO 0x93f

0x8c6: Push((int) 2)
0x8c7: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c9: @ Diary()
0x8ca: Pop(0)
0x8cb: GOTO 0x93f

0x8cc: Push((int) 3)
0x8cd: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8cf: @ ShowMessage()
0x8d0: Pop(0)
0x8d1: GOTO 0x93f

0x8d2: Push((int) 4)
0x8d3: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d5: @ ShowPlayerStats(Stack[-7])
0x8d6: Pop(0)
0x8d7: Push((int) 1)
0x8d8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x8d9: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8da: Push("people.xml")
0x8db: Push((bool) 1)
0x8dc: @ ShowWindow(Stack[-2], Stack[-1])
0x8dd: Pop(2)
0x8de: GOTO 0x93f

0x8df: Push((int) 5)
0x8e0: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8e2: @ IsFlashlightOn(Stack[-6])
0x8e3: Pop(0)
0x8e4: Push(Stack[-6])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8e6: Push((bool) 0)
0x8e7: @ SwitchFlashlight(Stack[-1])
0x8e8: Pop(1)
0x8e9: Push("flashlight_off")
0x8ea: @ PlaySound(Stack[-1])
0x8eb: Pop(1)
0x8ec: GOTO 0x8fb

0x8ed: PushEmpty(bool)
0x8ee: Call2 0x697

0x8ef: Pop(0)
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f1: Push((bool) 1)
0x8f2: @ SwitchFlashlight(Stack[-1])
0x8f3: Pop(1)
0x8f4: Push("flashlight_on")
0x8f5: @ PlaySound(Stack[-1])
0x8f6: Pop(1)
0x8f7: GOTO 0x8fb

0x8f8: Push("flashlight_nofuel")
0x8f9: @ PlaySound(Stack[-1])
0x8fa: Pop(1)
0x8fb: GOTO 0x93f

0x8fc: Push((int) 6)
0x8fd: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x8ff: PushEmpty(int)
0x900: Call2 0x69d

0x901: Pop(0)
0x902: Push((int) 0)
0x903: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x905: Return(); Pop(28)

0x906: @ IsVisirOn(Stack[-5])
0x907: Pop(0)
0x908: Push(Stack[-5])
0x909: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90a: Push((bool) 0)
0x90b: @ SwitchVisir(Stack[-1])
0x90c: Pop(1)
0x90d: Push((int) 2)
0x90e: @ SendWorldWndMessage(Stack[-1])
0x90f: Pop(1)
0x910: GOTO 0x923

0x911: Push("visir")
0x912: @ GetProperty(Stack[-1], Stack[-5])
0x913: Pop(1)
0x914: Push(Stack[-4])
0x915: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x916: Push("vcharge")
0x917: @ GetProperty(Stack[-1], Stack[-4])
0x918: Pop(1)
0x919: Push((int) 10)
0x91a: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x91c: Push((bool) 1)
0x91d: @ SwitchVisir(Stack[-1])
0x91e: Pop(1)
0x91f: Push((int) 1)
0x920: @ SendWorldWndMessage(Stack[-1])
0x921: Pop(1)
0x922: GOTO 0x923

0x923: GOTO 0x93f

0x924: Push((int) 7)
0x925: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x926: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x927: @ IsOverrideActive(Stack[-2])
0x928: Pop(0)
0x929: Pop(0); Push((bool) Stack[-2] == 0)
0x92a: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92b: Push("people.xml")
0x92c: Push((bool) 1)
0x92d: @ ShowWindow(Stack[-2], Stack[-1])
0x92e: Pop(2)
0x92f: GOTO 0x93f

0x930: Push((int) 21)
0x931: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x932: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x933: @ GetWeaponItem(Stack[-1])
0x934: Pop(0)
0x935: Push((int) -1)
0x936: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x938: Push((bool) 0)
0x939: Push((int) 0)
0x93a: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0x93b: Pop(2)
0x93c: Push((int) -1)
0x93d: @ SetHandsItem(Stack[-1])
0x93e: Pop(1)
0x93f: Return(); Pop(28)

0x940: PushEmpty(float, float)
0x941: Push((int) 10)
0x942: Push((int) 30)
0x943: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x944: Pop(2)
0x945: Push((int) 0)
0x946: @ SetTimer(Stack[-1], Stack[-2])
0x947: Pop(1)
0x948: Return(); Pop(2)

0x949: PushEmpty(object, object)
0x94a: @ GetScene(Stack[-1])
0x94b: Pop(0)
0x94c: Push("player_shot")
0x94d: PushEmpty(object)
0x94e: Call2 0x5ef

0x94f: Pop(0)
0x950: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x951: Pop(2)
0x952: Return(); Pop(2)

0x953: Stack[-1] = 0
