GlobalVarCount = 4
	G_VAR_0 string 
	G_VAR_1 object 
	G_VAR_2 object 
	G_VAR_3 object 

Strings:
	unholster
	_unholster
	_holster
	block
	walkblock
	unblock
	armor_phys
	blocking
	hitblock
	punch
	b
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
	scalpel
	knife
	ammo
	rifle_ammo
	_noammo
	_reload
	rifle
	attack1
	shot
	_shot
	GetProperty
	scripted
	richochet.xml
	Material
	SetScriptProperty
	size
	get
	revolver_ammo
	revolver
	samopal_ammo
	samopal
	use_begin
	lp
	locked
	SetProperty
	uses
	use_success
	use_fail
	player_init
	empty
	lockpick
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
	walk
	idle
	fire
	bullet
	HasProperty
	HasProperty
	armor
	armor_
	IsDead
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
	play_death_burah.bin
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
	SetProperty (2 args)
	IsAltShooting (1 args)
	StopAnimation (0 args)
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
	GetWeaponProperty (3 args)
	SetWeaponProperty (3 args)
	TriggerWeapon (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterialExact (6 args)
	AddActorByType (6 args)
	GetWeaponItem (1 args)
	GetPlayerSelectedObject (1 args)
	SelectItem (3 args)
	RemoveItem (3 args)
	SetHandsItem (1 args)
	GetVariable (2 args)
	Diary (0 args)
	SetVariable (2 args)
	HasProperty (2 args)
	ApplyEffect (1 args)
	GetProperty (2 args)
	IsWalking (1 args)
	Sleep (1 args)
	KillTimer (1 args)
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
	CreateStringVector (1 args)
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

RunOp = 0x9ab
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (bool, bool, float) Params = 1
		EVENT_37 Op = 0x7f Vars = ()
		EVENT_13 Op = 0x84 Vars = ()
		EVENT_18 Op = 0x93 Vars = (int)
		EVENT_22 Op = 0xa2 Vars = (object, int, float, float)
		EVENT_32 Op = 0xa9 Vars = ()
	GTASK_2 Vars = (bool) Params = 1
		EVENT_18 Op = 0x1b1 Vars = (int)
	GTASK_3 Vars = (bool) Params = 0
		EVENT_18 Op = 0x2b9 Vars = (int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_18 Op = 0x3d2 Vars = (int)
	GTASK_5 Vars = (bool) Params = 0
		EVENT_18 Op = 0x4f0 Vars = (int)
	GTASK_6 Vars = (bool) Params = 0
		EVENT_18 Op = 0x635 Vars = (int)
	GTASK_7  Params = 0
	GTASK_8 Vars = (bool) Params = 0
		EVENT_18 Op = 0x6b6 Vars = (int)
	GTASK_9  Params = 0
	GTASK_10 Vars = (bool) Params = 0
		EVENT_18 Op = 0x824 Vars = (int)
	GTASK_11  Params = 0
	GTASK_12 Vars = (bool, bool) Params = 0
		EVENT_32 Op = 0x99f Vars = ()
	GTASK_13  Params = 0
		EVENT_13 Op = 0xa94 Vars = ()
		EVENT_36 Op = 0xaad Vars = ()
		EVENT_15 Op = 0xac6 Vars = ()
		EVENT_7 Op = 0xad2 Vars = (int)
		EVENT_18 Op = 0xafd Vars = (int)

Events:
EVENT_44 Op = 0xd33 Vars = ()
EVENT_20 Op = 0xd3a Vars = ()
EVENT_21 Op = 0xd41 Vars = ()
EVENT_45 Op = 0xd48 Vars = ()
EVENT_7 Op = 0xde1 Vars = (int)
EVENT_26 Op = 0xde7 Vars = (string)
EVENT_16 Op = 0xdef Vars = (object, string)
EVENT_41 Op = 0xe11 Vars = (object)
EVENT_31 Op = 0xe1b Vars = (object, float, bool)
EVENT_19 Op = 0xe3d Vars = ()
EVENT_17 Op = 0xe44 Vars = (object)
EVENT_39 Op = 0xe46 Vars = (float)
EVENT_18 Op = 0xe63 Vars = (int)

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
0xb: Call2 0xbbf

0xc: Pop(0)
0xd: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xe: Pop(2)
0xf: PushEmpty(string)
0x10: Push("_unholster")
0x11: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x12: Call2 0xc59

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
0x1f: Call2 0xbbf

0x20: Pop(0)
0x21: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x22: Pop(2)
0x23: PushEmpty(string)
0x24: Push("_holster")
0x25: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x26: Call2 0xc59

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
0x32: PushEmpty()
0x33: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x34: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x35: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x36: Push("block")
0x37: @ PlayAnimation(Stack[-1])
0x38: Pop(1)
0x39: @ WaitForAnimEnd()
0x3a: Pop(0)
0x3b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: Return(); Pop(0)

0x3e: PushEmpty()
0x3f: Call2 0x66

0x40: Pop(0)
0x41: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x42: PushEmpty(bool)
0x43: Stack[-1] = (bool) 0
0x44: PushEmpty(bool)
0x45: Call2 0x7a

0x46: Pop(0)
0x47: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x48: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x4a: Stack[-1] = (bool) 1
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: Push("walkblock")
0x4d: @ PlayAnimation(Stack[-1])
0x4e: Pop(1)
0x4f: @ WaitForAnimEnd()
0x50: Pop(0)
0x51: GOTO 0x42

0x52: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x53: PushEmpty()
0x54: Call2 0x70

0x55: Pop(0)
0x56: Push( Stack[0 + Tasks[-1].StackPointer] )
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: Return(); Pop(0)

0x59: Push("unblock")
0x5a: @ PlayAnimation(Stack[-1])
0x5b: Pop(1)
0x5c: @ WaitForAnimEnd()
0x5d: Pop(0)
0x5e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Return(); Pop(0)

0x61: PushEmpty(bool)
0x62: Call2 0x7a

0x63: Pop(0)
0x64: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x65: Return(); Pop(0)

0x66: PushEmpty(string, float)
0x67: Stack[-2] = "armor_phys"
0x68: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x69: Call2 0xb34

0x6a: Pop(2)
0x6b: Push("blocking")
0x6c: Push((bool) 1)
0x6d: @ SetProperty(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: Return(); Pop(0)

0x70: Push("blocking")
0x71: Push((bool) 0)
0x72: @ SetProperty(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: PushEmpty(string, float)
0x75: Stack[-2] = "armor_phys"
0x76: Stack[-1] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x77: Call2 0xb34

0x78: Pop(2)
0x79: Return(); Pop(0)

0x7a: PushEmpty(bool, bool)
0x7b: @ IsAltShooting(Stack[-1])
0x7c: Pop(0)
0x7d: Stack[-3] = Stack[-1]
0x7e: Return(); Pop(2)

0x7f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x81: @ StopAnimation()
0x82: Pop(0)
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Call2 0x70

0x86: Pop(0)
0x87: PushEmpty(bool)
0x88: Push(-1, 1); TaskCall(2)
0x89: Call2 0xb5

0x8a: Pop(-1, 1); TaskReturn
0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x8e: GOTO 0x92

0x8f: PushEmpty()
0x90: Call2 0x66

0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Push((int) 10)
0x95: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x97: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x98: Push( Stack[1 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: @ StopAnimation()
0x9b: Pop(0)
0x9c: GOTO 0xa1

0x9d: PushEmpty(int)
0x9e: Stack[-1] = Stack[-2]
0x9f: Call2 0xe63

0xa0: Pop(1)
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa5: Push("hitblock")
0xa6: @ PlayAnimation(Stack[-1])
0xa7: Pop(1)
0xa8: Return(); Pop(0)

0xa9: Push( Stack[1 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xab: PushEmpty(string, float)
0xac: Stack[-2] = "armor_phys"
0xad: Stack[-1] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xae: Call2 0xb34

0xaf: Pop(2)
0xb0: Push("blocking")
0xb1: Push((bool) 0)
0xb2: @ SetProperty(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: Call2 0xc9

0xb7: Pop(0)
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Return(); Pop(0)

0xba: Stack[-1] = "punch"
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: Push(Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[-2] = (float) 0.2
0xc0: GOTO 0xc2

0xc1: Stack[-2] = (float) 0.1
0xc2: Return(); Pop(0)

0xc3: Stack[-1] = (int) 0
0xc4: Return(); Pop(0)

0xc5: Stack[-1] = (int) 0
0xc6: Return(); Pop(0)

0xc7: Stack[-1] = "b"
0xc8: Return(); Pop(0)

0xc9: PushEmpty(int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0xca: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xcb: Stack[-20] = (int) 0
0xcc: Push((int) 1)
0xcd: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0xce: PushEmpty(string)
0xcf: Call2 0xc7

0xd0: Pop(0)
0xd1: Push("attack")
0xd2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd3: Pop(1); Push(Stack[-1] + Stack[-21]);
0xd4: Push("_phase1")
0xd5: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0xd6: @ HasAnimation(Stack[-18], Stack[-19])
0xd7: Pop(0)
0xd8: Pop(0); Push((bool) Stack[-18] == 0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: GOTO 0xdc

0xdb: GOTO 0xcc

0xdc: Push((int) -1)
0xdd: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0xde: Pop(0); Push((bool) Stack[-20] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Return(); Pop(40)

0xe1: @ GetCurrentWeapon(Stack[-17])
0xe2: Pop(0)
0xe3: @ GetAttackDistance(Stack[-16])
0xe4: Pop(0)
0xe5: @ GetDirection(Stack[-15])
0xe6: Pop(0)
0xe7: Stack[-11] = (bool) 0
0xe8: PushEmpty(bool)
0xe9: Call2 0x1bd

0xea: Pop(0)
0xeb: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xec: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0xed: Pop(0)
0xee: PushEmpty(bool)
0xef: Stack[-1] = (bool) 0
0xf0: PushEmpty(bool)
0xf1: Stack[-1] = (bool) 0
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 0
0xf4: Pop(0); Push(( Stack[-17] != 0 )
0xf5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf6: PushEmpty(bool, object, string)
0xf7: Stack[-2] = Stack[-20]
0xf8: Stack[-1] = "health"
0xf9: Call2 0xb28

0xfa: Pop(2)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 1
0xfd: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xfe: PushEmpty(bool, object)
0xff: Stack[-1] = Stack[-18]
0x100: Call2 0xb9a

0x101: Pop(1)
0x102: Pop(1); Push((bool) Stack[-1] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x104: Stack[-1] = (bool) 1
0x105: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x106: Push((int) 4)
0x107: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: Stack[-1] = (bool) 1
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: Push("GetDirection")
0x10c: Push((int) 1)
0x10d: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x10e: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10f: @ GetDirection(Stack[-10])
0x110: Pop(0)
0x111: @@ GetDirection(Stack[-9])
0x112: Pop(0)
0x113: PushEmpty(float, cvector, cvector)
0x114: Stack[-2] = Stack[-13]
0x115: Stack[-1] = Stack[-12]
0x116: Call2 0xc01

0x117: Pop(2)
0x118: Push((float)0.5)
0x119: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x11a: Push(Stack[-11])
0x11b: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11c: Stack[-8] = "battack"
0x11d: PushEmpty(string)
0x11e: Call2 0xba

0x11f: Pop(0)
0x120: Push("_back")
0x121: Pop(2); Push(Stack[-2] + Stack[-1]);
0x122: @ PlaySound(Stack[-1])
0x123: Pop(1)
0x124: GOTO 0x137

0x125: @ irand(Stack[-7], Stack[-20])
0x126: Pop(0)
0x127: PushEmpty(string)
0x128: Call2 0xc7

0x129: Pop(0)
0x12a: Push("attack")
0x12b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12c: Push((int) 1)
0x12d: Pop(1); Push(Stack[-9] + Stack[-1]);
0x12e: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x12f: PushEmpty(string)
0x130: Call2 0xba

0x131: Pop(0)
0x132: Push((int) 1)
0x133: Pop(1); Push(Stack[-9] + Stack[-1]);
0x134: Pop(2); Push(Stack[-2] + Stack[-1]);
0x135: @ PlaySound(Stack[-1])
0x136: Pop(1)
0x137: Push((bool) 1)
0x138: @ SetAttackState(Stack[-1])
0x139: Pop(1)
0x13a: Push("_phase1")
0x13b: Pop(1); Push(Stack[-9] + Stack[-1]);
0x13c: @ PlayAnimation(Stack[-1])
0x13d: Pop(1)
0x13e: @ WaitForAnimEnd()
0x13f: Pop(0)
0x140: Push( Stack[0 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Return(); Pop(40)

0x143: Push((bool) 0)
0x144: @ SetAttackState(Stack[-1])
0x145: Pop(1)
0x146: @ GetAttackDistance(Stack[-16])
0x147: Pop(0)
0x148: @ GetDirection(Stack[-15])
0x149: Pop(0)
0x14a: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x14b: Pop(0)
0x14c: Pop(0); Push(( Stack[-14] != 0 )
0x14d: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x14e: Push("GetDirection")
0x14f: Push((int) 1)
0x150: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x151: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x152: @ GetDirection(Stack[-6])
0x153: Pop(0)
0x154: @@ GetDirection(Stack[-5])
0x155: Pop(0)
0x156: PushEmpty(float, cvector, cvector)
0x157: Stack[-2] = Stack[-9]
0x158: Stack[-1] = Stack[-8]
0x159: Call2 0xc01

0x15a: Pop(2)
0x15b: Push((float)0.5)
0x15c: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x15d: GOTO 0x15f

0x15e: Stack[-11] = (bool) 0
0x15f: PushEmpty(float, bool)
0x160: Stack[-1] = Stack[-13]
0x161: Call2 0x1aa

0x162: Stack[-6] = Stack[-2]
0x163: Pop(2)
0x164: Push((int) 4)
0x165: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x167: Push((float)3.0)
0x168: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x169: PushEmpty(float, object, float, int)
0x16a: Stack[-3] = Stack[-18]
0x16b: Stack[-2] = Stack[-8]
0x16c: PushEmpty(int)
0x16d: Call2 0xc3

0x16e: Stack[-2] = Stack[-1]
0x16f: Pop(1)
0x170: Call2 0xb51

0x171: Stack[-7] = Stack[-4]
0x172: Pop(4)
0x173: Push(Stack[-3])
0x174: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x175: Push((int) 2)
0x176: @ irand(Stack[-3], Stack[-1])
0x177: Pop(1)
0x178: PushEmpty(string)
0x179: Call2 0xba

0x17a: Pop(0)
0x17b: Push("_hit")
0x17c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17d: Push((int) 1)
0x17e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x17f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x180: @ PlaySound(Stack[-1])
0x181: Pop(1)
0x182: @ ReportAttack(Stack[-14])
0x183: Pop(0)
0x184: PushEmpty(int)
0x185: Call2 0xc5

0x186: Pop(0)
0x187: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x188: Pop(1)
0x189: Push(GlobalVars[2])
0x18a: @@ in(Stack[-2], Stack[-15])
0x18b: Pop(1)
0x18c: Pop(0); Push((bool) Stack[-1] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18e: Push(GlobalVars[3])
0x18f: @@ add(Stack[-15])
0x190: Pop(1)
0x191: Push((bool) 0)
0x192: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x193: Pop(1)
0x194: GOTO 0x198

0x195: Push((bool) 1)
0x196: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x197: Pop(1)
0x198: PushEmpty()
0x199: Call2 0x1bc

0x19a: Pop(0)
0x19b: Push("_phase2")
0x19c: Pop(1); Push(Stack[-9] + Stack[-1]);
0x19d: @ PlayAnimation(Stack[-1])
0x19e: Pop(1)
0x19f: @ WaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Return(); Pop(40)

0x1a4: Stack[-14] = 0
0x1a5: PushEmpty(bool)
0x1a6: Call2 0x1bf

0x1a7: Pop(0)
0x1a8: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0x1a9: Return(); Pop(40)

0x1aa: PushEmpty()
0x1ab: PushEmpty(float, bool)
0x1ac: Stack[-1] = Stack[-3]
0x1ad: Call2 0xbc

0x1ae: Stack[-4] = Stack[-2]
0x1af: Pop(2)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 10)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b6: GOTO 0x1bb

0x1b7: PushEmpty(int)
0x1b8: Stack[-1] = Stack[-2]
0x1b9: Call2 0xe63

0x1ba: Pop(1)
0x1bb: Return(); Pop(0)

0x1bc: Return(); Pop(0)

0x1bd: Stack[-1] = (bool) 0
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(bool, bool)
0x1c0: @ IsShooting(Stack[-1])
0x1c1: Pop(0)
0x1c2: Stack[-3] = Stack[-1]
0x1c3: Return(); Pop(2)

0x1c4: Stack[-1] = "punch"
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: Push(Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-2] = (float) 0.3
0x1ca: GOTO 0x1cc

0x1cb: Stack[-2] = (float) 0.2
0x1cc: Return(); Pop(0)

0x1cd: Stack[-1] = (int) 0
0x1ce: Return(); Pop(0)

0x1cf: Stack[-1] = (int) 0
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0x1d2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d3: Stack[-20] = (int) 0
0x1d4: Push((int) 1)
0x1d5: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x1d6: PushEmpty(string)
0x1d7: Call2 0x2c7

0x1d8: Pop(0)
0x1d9: Push("attack")
0x1da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1db: Pop(1); Push(Stack[-1] + Stack[-21]);
0x1dc: Push("_phase1")
0x1dd: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x1de: @ HasAnimation(Stack[-18], Stack[-19])
0x1df: Pop(0)
0x1e0: Pop(0); Push((bool) Stack[-18] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: GOTO 0x1e4

0x1e3: GOTO 0x1d4

0x1e4: Push((int) -1)
0x1e5: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x1e6: Pop(0); Push((bool) Stack[-20] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(40)

0x1e9: @ GetCurrentWeapon(Stack[-17])
0x1ea: Pop(0)
0x1eb: @ GetAttackDistance(Stack[-16])
0x1ec: Pop(0)
0x1ed: @ GetDirection(Stack[-15])
0x1ee: Pop(0)
0x1ef: Stack[-11] = (bool) 0
0x1f0: PushEmpty(bool)
0x1f1: Call2 0x2c5

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x1f4: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x1f5: Pop(0)
0x1f6: PushEmpty(bool)
0x1f7: Stack[-1] = (bool) 0
0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: PushEmpty(bool)
0x1fb: Stack[-1] = (bool) 0
0x1fc: Pop(0); Push(( Stack[-17] != 0 )
0x1fd: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fe: PushEmpty(bool, object, string)
0x1ff: Stack[-2] = Stack[-20]
0x200: Stack[-1] = "health"
0x201: Call2 0xb28

0x202: Pop(2)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[-18]
0x208: Call2 0xb9a

0x209: Pop(1)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = (bool) 1
0x20d: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20e: Push((int) 4)
0x20f: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 1
0x212: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x213: Push("GetDirection")
0x214: Push((int) 1)
0x215: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x216: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x217: @ GetDirection(Stack[-10])
0x218: Pop(0)
0x219: @@ GetDirection(Stack[-9])
0x21a: Pop(0)
0x21b: PushEmpty(float, cvector, cvector)
0x21c: Stack[-2] = Stack[-13]
0x21d: Stack[-1] = Stack[-12]
0x21e: Call2 0xc01

0x21f: Pop(2)
0x220: Push((float)0.5)
0x221: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x222: Push(Stack[-11])
0x223: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x224: Stack[-8] = "battack"
0x225: PushEmpty(string)
0x226: Call2 0x1c4

0x227: Pop(0)
0x228: Push("_back")
0x229: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22a: @ PlaySound(Stack[-1])
0x22b: Pop(1)
0x22c: GOTO 0x23f

0x22d: @ irand(Stack[-7], Stack[-20])
0x22e: Pop(0)
0x22f: PushEmpty(string)
0x230: Call2 0x2c7

0x231: Pop(0)
0x232: Push("attack")
0x233: Pop(2); Push(Stack[-2] + Stack[-1]);
0x234: Push((int) 1)
0x235: Pop(1); Push(Stack[-9] + Stack[-1]);
0x236: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x237: PushEmpty(string)
0x238: Call2 0x1c4

0x239: Pop(0)
0x23a: Push((int) 1)
0x23b: Pop(1); Push(Stack[-9] + Stack[-1]);
0x23c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23d: @ PlaySound(Stack[-1])
0x23e: Pop(1)
0x23f: Push((bool) 1)
0x240: @ SetAttackState(Stack[-1])
0x241: Pop(1)
0x242: Push("_phase1")
0x243: Pop(1); Push(Stack[-9] + Stack[-1]);
0x244: @ PlayAnimation(Stack[-1])
0x245: Pop(1)
0x246: @ WaitForAnimEnd()
0x247: Pop(0)
0x248: Push( Stack[0 + Tasks[-1].StackPointer] )
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: Return(); Pop(40)

0x24b: Push((bool) 0)
0x24c: @ SetAttackState(Stack[-1])
0x24d: Pop(1)
0x24e: @ GetAttackDistance(Stack[-16])
0x24f: Pop(0)
0x250: @ GetDirection(Stack[-15])
0x251: Pop(0)
0x252: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x253: Pop(0)
0x254: Pop(0); Push(( Stack[-14] != 0 )
0x255: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x256: Push("GetDirection")
0x257: Push((int) 1)
0x258: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x259: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x25a: @ GetDirection(Stack[-6])
0x25b: Pop(0)
0x25c: @@ GetDirection(Stack[-5])
0x25d: Pop(0)
0x25e: PushEmpty(float, cvector, cvector)
0x25f: Stack[-2] = Stack[-9]
0x260: Stack[-1] = Stack[-8]
0x261: Call2 0xc01

0x262: Pop(2)
0x263: Push((float)0.5)
0x264: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x265: GOTO 0x267

0x266: Stack[-11] = (bool) 0
0x267: PushEmpty(float, bool)
0x268: Stack[-1] = Stack[-13]
0x269: Call2 0x2b2

0x26a: Stack[-6] = Stack[-2]
0x26b: Pop(2)
0x26c: Push((int) 4)
0x26d: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26f: Push((float)3.0)
0x270: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x271: PushEmpty(float, object, float, int)
0x272: Stack[-3] = Stack[-18]
0x273: Stack[-2] = Stack[-8]
0x274: PushEmpty(int)
0x275: Call2 0x1cd

0x276: Stack[-2] = Stack[-1]
0x277: Pop(1)
0x278: Call2 0xb51

0x279: Stack[-7] = Stack[-4]
0x27a: Pop(4)
0x27b: Push(Stack[-3])
0x27c: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x27d: Push((int) 2)
0x27e: @ irand(Stack[-3], Stack[-1])
0x27f: Pop(1)
0x280: PushEmpty(string)
0x281: Call2 0x1c4

0x282: Pop(0)
0x283: Push("_hit")
0x284: Pop(2); Push(Stack[-2] + Stack[-1]);
0x285: Push((int) 1)
0x286: Pop(1); Push(Stack[-4] + Stack[-1]);
0x287: Pop(2); Push(Stack[-2] + Stack[-1]);
0x288: @ PlaySound(Stack[-1])
0x289: Pop(1)
0x28a: @ ReportAttack(Stack[-14])
0x28b: Pop(0)
0x28c: PushEmpty(int)
0x28d: Call2 0x1cf

0x28e: Pop(0)
0x28f: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x290: Pop(1)
0x291: Push(GlobalVars[2])
0x292: @@ in(Stack[-2], Stack[-15])
0x293: Pop(1)
0x294: Pop(0); Push((bool) Stack[-1] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x296: Push(GlobalVars[3])
0x297: @@ add(Stack[-15])
0x298: Pop(1)
0x299: Push((bool) 0)
0x29a: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x29b: Pop(1)
0x29c: GOTO 0x2a0

0x29d: Push((bool) 1)
0x29e: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x29f: Pop(1)
0x2a0: PushEmpty()
0x2a1: Call2 0x2c4

0x2a2: Pop(0)
0x2a3: Push("_phase2")
0x2a4: Pop(1); Push(Stack[-9] + Stack[-1]);
0x2a5: @ PlayAnimation(Stack[-1])
0x2a6: Pop(1)
0x2a7: @ WaitForAnimEnd()
0x2a8: Pop(0)
0x2a9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: Return(); Pop(40)

0x2ac: Stack[-14] = 0
0x2ad: PushEmpty(bool)
0x2ae: Call2 0x2c9

0x2af: Pop(0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x2b1: Return(); Pop(40)

0x2b2: PushEmpty()
0x2b3: PushEmpty(float, bool)
0x2b4: Stack[-1] = Stack[-3]
0x2b5: Call2 0x1c6

0x2b6: Stack[-4] = Stack[-2]
0x2b7: Pop(2)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: Push((int) 10)
0x2bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2be: GOTO 0x2c3

0x2bf: PushEmpty(int)
0x2c0: Stack[-1] = Stack[-2]
0x2c1: Call2 0xe63

0x2c2: Pop(1)
0x2c3: Return(); Pop(0)

0x2c4: Return(); Pop(0)

0x2c5: Stack[-1] = (bool) 0
0x2c6: Return(); Pop(0)

0x2c7: Stack[-1] = ""
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(bool, bool)
0x2ca: @ IsShooting(Stack[-1])
0x2cb: Pop(0)
0x2cc: Stack[-3] = Stack[-1]
0x2cd: Return(); Pop(2)

0x2ce: Stack[-1] = "scalpel"
0x2cf: Return(); Pop(0)

0x2d0: PushEmpty()
0x2d1: Stack[-2] = (float) 0.6
0x2d2: Return(); Pop(0)

0x2d3: Stack[-1] = (float) 0.5
0x2d4: Return(); Pop(0)

0x2d5: Stack[-1] = (int) 2
0x2d6: Return(); Pop(0)

0x2d7: Stack[-1] = (int) 0
0x2d8: Return(); Pop(0)

0x2d9: Stack[-1] = (int) 1
0x2da: Return(); Pop(0)

0x2db: PushEmpty()
0x2dc: PushEmpty(float, bool)
0x2dd: Stack[-1] = Stack[-3]
0x2de: Call2 0x2d0

0x2df: Pop(1)
0x2e0: PushEmpty(float, float)
0x2e1: PushEmpty(float)
0x2e2: Call2 0x2d3

0x2e3: Stack[-2] = Stack[-1]
0x2e4: Pop(1)
0x2e5: Call2 0xd8d

0x2e6: Pop(1)
0x2e7: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty(int)
0x2ea: PushEmpty(int)
0x2eb: Call2 0x2d5

0x2ec: Stack[-2] = Stack[-1]
0x2ed: Pop(1)
0x2ee: Call2 0xd7b

0x2ef: Pop(1)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0x2f2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2f3: Stack[-20] = (int) 0
0x2f4: Push((int) 1)
0x2f5: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x2f6: PushEmpty(string)
0x2f7: Call2 0x3df

0x2f8: Pop(0)
0x2f9: Push("attack")
0x2fa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2fb: Pop(1); Push(Stack[-1] + Stack[-21]);
0x2fc: Push("_phase1")
0x2fd: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x2fe: @ HasAnimation(Stack[-18], Stack[-19])
0x2ff: Pop(0)
0x300: Pop(0); Push((bool) Stack[-18] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x304

0x303: GOTO 0x2f4

0x304: Push((int) -1)
0x305: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x306: Pop(0); Push((bool) Stack[-20] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: Return(); Pop(40)

0x309: @ GetCurrentWeapon(Stack[-17])
0x30a: Pop(0)
0x30b: @ GetAttackDistance(Stack[-16])
0x30c: Pop(0)
0x30d: @ GetDirection(Stack[-15])
0x30e: Pop(0)
0x30f: Stack[-11] = (bool) 0
0x310: PushEmpty(bool)
0x311: Call2 0x3dd

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x314: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x315: Pop(0)
0x316: PushEmpty(bool)
0x317: Stack[-1] = (bool) 0
0x318: PushEmpty(bool)
0x319: Stack[-1] = (bool) 0
0x31a: PushEmpty(bool)
0x31b: Stack[-1] = (bool) 0
0x31c: Pop(0); Push(( Stack[-17] != 0 )
0x31d: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31e: PushEmpty(bool, object, string)
0x31f: Stack[-2] = Stack[-20]
0x320: Stack[-1] = "health"
0x321: Call2 0xb28

0x322: Pop(2)
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Stack[-1] = (bool) 1
0x325: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[-18]
0x328: Call2 0xb9a

0x329: Pop(1)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 1
0x32d: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32e: Push((int) 4)
0x32f: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: Stack[-1] = (bool) 1
0x332: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x333: Push("GetDirection")
0x334: Push((int) 1)
0x335: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x336: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x337: @ GetDirection(Stack[-10])
0x338: Pop(0)
0x339: @@ GetDirection(Stack[-9])
0x33a: Pop(0)
0x33b: PushEmpty(float, cvector, cvector)
0x33c: Stack[-2] = Stack[-13]
0x33d: Stack[-1] = Stack[-12]
0x33e: Call2 0xc01

0x33f: Pop(2)
0x340: Push((float)0.5)
0x341: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x342: Push(Stack[-11])
0x343: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x344: Stack[-8] = "battack"
0x345: PushEmpty(string)
0x346: Call2 0x2ce

0x347: Pop(0)
0x348: Push("_back")
0x349: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34a: @ PlaySound(Stack[-1])
0x34b: Pop(1)
0x34c: GOTO 0x35f

0x34d: @ irand(Stack[-7], Stack[-20])
0x34e: Pop(0)
0x34f: PushEmpty(string)
0x350: Call2 0x3df

0x351: Pop(0)
0x352: Push("attack")
0x353: Pop(2); Push(Stack[-2] + Stack[-1]);
0x354: Push((int) 1)
0x355: Pop(1); Push(Stack[-9] + Stack[-1]);
0x356: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x357: PushEmpty(string)
0x358: Call2 0x2ce

0x359: Pop(0)
0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-9] + Stack[-1]);
0x35c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35d: @ PlaySound(Stack[-1])
0x35e: Pop(1)
0x35f: Push((bool) 1)
0x360: @ SetAttackState(Stack[-1])
0x361: Pop(1)
0x362: Push("_phase1")
0x363: Pop(1); Push(Stack[-9] + Stack[-1]);
0x364: @ PlayAnimation(Stack[-1])
0x365: Pop(1)
0x366: @ WaitForAnimEnd()
0x367: Pop(0)
0x368: Push( Stack[0 + Tasks[-1].StackPointer] )
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Return(); Pop(40)

0x36b: Push((bool) 0)
0x36c: @ SetAttackState(Stack[-1])
0x36d: Pop(1)
0x36e: @ GetAttackDistance(Stack[-16])
0x36f: Pop(0)
0x370: @ GetDirection(Stack[-15])
0x371: Pop(0)
0x372: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x373: Pop(0)
0x374: Pop(0); Push(( Stack[-14] != 0 )
0x375: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x376: Push("GetDirection")
0x377: Push((int) 1)
0x378: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x379: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37a: @ GetDirection(Stack[-6])
0x37b: Pop(0)
0x37c: @@ GetDirection(Stack[-5])
0x37d: Pop(0)
0x37e: PushEmpty(float, cvector, cvector)
0x37f: Stack[-2] = Stack[-9]
0x380: Stack[-1] = Stack[-8]
0x381: Call2 0xc01

0x382: Pop(2)
0x383: Push((float)0.5)
0x384: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x385: GOTO 0x387

0x386: Stack[-11] = (bool) 0
0x387: PushEmpty(float, bool)
0x388: Stack[-1] = Stack[-13]
0x389: Call2 0x2db

0x38a: Stack[-6] = Stack[-2]
0x38b: Pop(2)
0x38c: Push((int) 4)
0x38d: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Push((float)3.0)
0x390: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x391: PushEmpty(float, object, float, int)
0x392: Stack[-3] = Stack[-18]
0x393: Stack[-2] = Stack[-8]
0x394: PushEmpty(int)
0x395: Call2 0x2d7

0x396: Stack[-2] = Stack[-1]
0x397: Pop(1)
0x398: Call2 0xb51

0x399: Stack[-7] = Stack[-4]
0x39a: Pop(4)
0x39b: Push(Stack[-3])
0x39c: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x39d: Push((int) 2)
0x39e: @ irand(Stack[-3], Stack[-1])
0x39f: Pop(1)
0x3a0: PushEmpty(string)
0x3a1: Call2 0x2ce

0x3a2: Pop(0)
0x3a3: Push("_hit")
0x3a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a5: Push((int) 1)
0x3a6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a8: @ PlaySound(Stack[-1])
0x3a9: Pop(1)
0x3aa: @ ReportAttack(Stack[-14])
0x3ab: Pop(0)
0x3ac: PushEmpty(int)
0x3ad: Call2 0x2d9

0x3ae: Pop(0)
0x3af: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x3b0: Pop(1)
0x3b1: Push(GlobalVars[2])
0x3b2: @@ in(Stack[-2], Stack[-15])
0x3b3: Pop(1)
0x3b4: Pop(0); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b6: Push(GlobalVars[3])
0x3b7: @@ add(Stack[-15])
0x3b8: Pop(1)
0x3b9: Push((bool) 0)
0x3ba: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x3bb: Pop(1)
0x3bc: GOTO 0x3c0

0x3bd: Push((bool) 1)
0x3be: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x3bf: Pop(1)
0x3c0: PushEmpty()
0x3c1: Call2 0x2e9

0x3c2: Pop(0)
0x3c3: Push("_phase2")
0x3c4: Pop(1); Push(Stack[-9] + Stack[-1]);
0x3c5: @ PlayAnimation(Stack[-1])
0x3c6: Pop(1)
0x3c7: @ WaitForAnimEnd()
0x3c8: Pop(0)
0x3c9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Return(); Pop(40)

0x3cc: Stack[-14] = 0
0x3cd: PushEmpty(bool)
0x3ce: Call2 0x3e1

0x3cf: Pop(0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x3d1: Return(); Pop(40)

0x3d2: PushEmpty()
0x3d3: Push((int) 10)
0x3d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3d7: GOTO 0x3dc

0x3d8: PushEmpty(int)
0x3d9: Stack[-1] = Stack[-2]
0x3da: Call2 0xe63

0x3db: Pop(1)
0x3dc: Return(); Pop(0)

0x3dd: Stack[-1] = (bool) 0
0x3de: Return(); Pop(0)

0x3df: Stack[-1] = ""
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(bool, bool)
0x3e2: @ IsShooting(Stack[-1])
0x3e3: Pop(0)
0x3e4: Stack[-3] = Stack[-1]
0x3e5: Return(); Pop(2)

0x3e6: Stack[-1] = (bool) 1
0x3e7: Return(); Pop(0)

0x3e8: Stack[-1] = "knife"
0x3e9: Return(); Pop(0)

0x3ea: PushEmpty()
0x3eb: Push(Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-2] = (float) 0.7
0x3ee: GOTO 0x3f0

0x3ef: Stack[-2] = (float) 0.4
0x3f0: Return(); Pop(0)

0x3f1: Stack[-1] = (float) 0.5
0x3f2: Return(); Pop(0)

0x3f3: Stack[-1] = (int) 4
0x3f4: Return(); Pop(0)

0x3f5: Stack[-1] = (int) 0
0x3f6: Return(); Pop(0)

0x3f7: Stack[-1] = (int) 1
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: PushEmpty(float, bool)
0x3fb: Stack[-1] = Stack[-3]
0x3fc: Call2 0x3ea

0x3fd: Pop(1)
0x3fe: PushEmpty(float, float)
0x3ff: PushEmpty(float)
0x400: Call2 0x3f1

0x401: Stack[-2] = Stack[-1]
0x402: Pop(1)
0x403: Call2 0xd8d

0x404: Pop(1)
0x405: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x406: Return(); Pop(0)

0x407: PushEmpty(int)
0x408: PushEmpty(int)
0x409: Call2 0x3f3

0x40a: Stack[-2] = Stack[-1]
0x40b: Pop(1)
0x40c: Call2 0xd7b

0x40d: Pop(1)
0x40e: Return(); Pop(0)

0x40f: PushEmpty(int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool, int, string, bool, string, float, cvector, object, int, cvector, bool, cvector, cvector, string, int, cvector, cvector, float, float, int, bool)
0x410: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x411: Stack[-20] = (int) 0
0x412: Push((int) 1)
0x413: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x414: PushEmpty(string)
0x415: Call2 0x4fb

0x416: Pop(0)
0x417: Push("attack")
0x418: Pop(2); Push(Stack[-2] + Stack[-1]);
0x419: Pop(1); Push(Stack[-1] + Stack[-21]);
0x41a: Push("_phase1")
0x41b: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x41c: @ HasAnimation(Stack[-18], Stack[-19])
0x41d: Pop(0)
0x41e: Pop(0); Push((bool) Stack[-18] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: GOTO 0x422

0x421: GOTO 0x412

0x422: Push((int) -1)
0x423: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x424: Pop(0); Push((bool) Stack[-20] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: Return(); Pop(40)

0x427: @ GetCurrentWeapon(Stack[-17])
0x428: Pop(0)
0x429: @ GetAttackDistance(Stack[-16])
0x42a: Pop(0)
0x42b: @ GetDirection(Stack[-15])
0x42c: Pop(0)
0x42d: Stack[-11] = (bool) 0
0x42e: PushEmpty(bool)
0x42f: Call2 0x3e6

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x432: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x433: Pop(0)
0x434: PushEmpty(bool)
0x435: Stack[-1] = (bool) 0
0x436: PushEmpty(bool)
0x437: Stack[-1] = (bool) 0
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: Pop(0); Push(( Stack[-17] != 0 )
0x43b: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43c: PushEmpty(bool, object, string)
0x43d: Stack[-2] = Stack[-20]
0x43e: Stack[-1] = "health"
0x43f: Call2 0xb28

0x440: Pop(2)
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x444: PushEmpty(bool, object)
0x445: Stack[-1] = Stack[-18]
0x446: Call2 0xb9a

0x447: Pop(1)
0x448: Pop(1); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 1
0x44b: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44c: Push((int) 4)
0x44d: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: Stack[-1] = (bool) 1
0x450: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x451: Push("GetDirection")
0x452: Push((int) 1)
0x453: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x454: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x455: @ GetDirection(Stack[-10])
0x456: Pop(0)
0x457: @@ GetDirection(Stack[-9])
0x458: Pop(0)
0x459: PushEmpty(float, cvector, cvector)
0x45a: Stack[-2] = Stack[-13]
0x45b: Stack[-1] = Stack[-12]
0x45c: Call2 0xc01

0x45d: Pop(2)
0x45e: Push((float)0.5)
0x45f: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x460: Push(Stack[-11])
0x461: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x462: Stack[-8] = "battack"
0x463: PushEmpty(string)
0x464: Call2 0x3e8

0x465: Pop(0)
0x466: Push("_back")
0x467: Pop(2); Push(Stack[-2] + Stack[-1]);
0x468: @ PlaySound(Stack[-1])
0x469: Pop(1)
0x46a: GOTO 0x47d

0x46b: @ irand(Stack[-7], Stack[-20])
0x46c: Pop(0)
0x46d: PushEmpty(string)
0x46e: Call2 0x4fb

0x46f: Pop(0)
0x470: Push("attack")
0x471: Pop(2); Push(Stack[-2] + Stack[-1]);
0x472: Push((int) 1)
0x473: Pop(1); Push(Stack[-9] + Stack[-1]);
0x474: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x475: PushEmpty(string)
0x476: Call2 0x3e8

0x477: Pop(0)
0x478: Push((int) 1)
0x479: Pop(1); Push(Stack[-9] + Stack[-1]);
0x47a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47b: @ PlaySound(Stack[-1])
0x47c: Pop(1)
0x47d: Push((bool) 1)
0x47e: @ SetAttackState(Stack[-1])
0x47f: Pop(1)
0x480: Push("_phase1")
0x481: Pop(1); Push(Stack[-9] + Stack[-1]);
0x482: @ PlayAnimation(Stack[-1])
0x483: Pop(1)
0x484: @ WaitForAnimEnd()
0x485: Pop(0)
0x486: Push( Stack[0 + Tasks[-1].StackPointer] )
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: Return(); Pop(40)

0x489: Push((bool) 0)
0x48a: @ SetAttackState(Stack[-1])
0x48b: Pop(1)
0x48c: @ GetAttackDistance(Stack[-16])
0x48d: Pop(0)
0x48e: @ GetDirection(Stack[-15])
0x48f: Pop(0)
0x490: @ GetVictimMaterialExact(Stack[-14], Stack[-13], Stack[-12], Stack[-15], Stack[-16])
0x491: Pop(0)
0x492: Pop(0); Push(( Stack[-14] != 0 )
0x493: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x494: Push("GetDirection")
0x495: Push((int) 1)
0x496: Pop(2); Push(IsFuncExist(Stack[-16], Stack[-2], Stack[-1]))
0x497: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x498: @ GetDirection(Stack[-6])
0x499: Pop(0)
0x49a: @@ GetDirection(Stack[-5])
0x49b: Pop(0)
0x49c: PushEmpty(float, cvector, cvector)
0x49d: Stack[-2] = Stack[-9]
0x49e: Stack[-1] = Stack[-8]
0x49f: Call2 0xc01

0x4a0: Pop(2)
0x4a1: Push((float)0.5)
0x4a2: Stack[-13] = Stack[-2] >= Stack[-1]; Pop(2);
0x4a3: GOTO 0x4a5

0x4a4: Stack[-11] = (bool) 0
0x4a5: PushEmpty(float, bool)
0x4a6: Stack[-1] = Stack[-13]
0x4a7: Call2 0x3f9

0x4a8: Stack[-6] = Stack[-2]
0x4a9: Pop(2)
0x4aa: Push((int) 4)
0x4ab: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Push((float)3.0)
0x4ae: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x4af: PushEmpty(float, object, float, int)
0x4b0: Stack[-3] = Stack[-18]
0x4b1: Stack[-2] = Stack[-8]
0x4b2: PushEmpty(int)
0x4b3: Call2 0x3f5

0x4b4: Stack[-2] = Stack[-1]
0x4b5: Pop(1)
0x4b6: Call2 0xb51

0x4b7: Stack[-7] = Stack[-4]
0x4b8: Pop(4)
0x4b9: Push(Stack[-3])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4bb: Push((int) 2)
0x4bc: @ irand(Stack[-3], Stack[-1])
0x4bd: Pop(1)
0x4be: PushEmpty(string)
0x4bf: Call2 0x3e8

0x4c0: Pop(0)
0x4c1: Push("_hit")
0x4c2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c3: Push((int) 1)
0x4c4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c6: @ PlaySound(Stack[-1])
0x4c7: Pop(1)
0x4c8: @ ReportAttack(Stack[-14])
0x4c9: Pop(0)
0x4ca: PushEmpty(int)
0x4cb: Call2 0x3f7

0x4cc: Pop(0)
0x4cd: @ ReportHit(Stack[-15], Stack[-1], Stack[-4], Stack[-5], Stack[-13], Stack[-16])
0x4ce: Pop(1)
0x4cf: Push(GlobalVars[2])
0x4d0: @@ in(Stack[-2], Stack[-15])
0x4d1: Pop(1)
0x4d2: Pop(0); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d4: Push(GlobalVars[3])
0x4d5: @@ add(Stack[-15])
0x4d6: Pop(1)
0x4d7: Push((bool) 0)
0x4d8: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x4d9: Pop(1)
0x4da: GOTO 0x4de

0x4db: Push((bool) 1)
0x4dc: @ BroadcastPlayerDamage(Stack[-15], Stack[-1])
0x4dd: Pop(1)
0x4de: PushEmpty()
0x4df: Call2 0x407

0x4e0: Pop(0)
0x4e1: Push("_phase2")
0x4e2: Pop(1); Push(Stack[-9] + Stack[-1]);
0x4e3: @ PlayAnimation(Stack[-1])
0x4e4: Pop(1)
0x4e5: @ WaitForAnimEnd()
0x4e6: Pop(0)
0x4e7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Return(); Pop(40)

0x4ea: Stack[-14] = 0
0x4eb: PushEmpty(bool)
0x4ec: Call2 0x4fd

0x4ed: Pop(0)
0x4ee: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x4ef: Return(); Pop(40)

0x4f0: PushEmpty()
0x4f1: Push((int) 10)
0x4f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4f5: GOTO 0x4fa

0x4f6: PushEmpty(int)
0x4f7: Stack[-1] = Stack[-2]
0x4f8: Call2 0xe63

0x4f9: Pop(1)
0x4fa: Return(); Pop(0)

0x4fb: Stack[-1] = ""
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(bool, bool)
0x4fe: @ IsShooting(Stack[-1])
0x4ff: Pop(0)
0x500: Stack[-3] = Stack[-1]
0x501: Return(); Pop(2)

0x502: PushEmpty(bool, bool, bool, bool)
0x503: Push("ammo")
0x504: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x505: Pop(1)
0x506: PushEmpty(bool)
0x507: Stack[-1] = (bool) 1
0x508: Pop(0); Push((bool) Stack[-3] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50a: Pop(0); Push((bool) Stack[-2] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-1] = (bool) 0
0x50d: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x50e: PushEmpty(bool, string, int)
0x50f: Stack[-2] = "rifle_ammo"
0x510: Stack[-1] = (int) 1
0x511: Call2 0xd4c

0x512: Pop(2)
0x513: Pop(1); Push((bool) Stack[-1] == 0)
0x514: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x515: PushEmpty(string)
0x516: Call2 0x54b

0x517: Pop(0)
0x518: Push("_noammo")
0x519: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51a: @ PlaySound(Stack[-1])
0x51b: Pop(1)
0x51c: Push("noammo")
0x51d: @ PlayAnimation(Stack[-1])
0x51e: Pop(1)
0x51f: @ WaitForAnimEnd()
0x520: Pop(0)
0x521: Stack[-5] = (bool) 0
0x522: Return(); Pop(4)

0x523: Stack[-5] = (bool) 1
0x524: Return(); Pop(4)

0x525: Stack[-1] = (int) 1
0x526: Return(); Pop(0)

0x527: Stack[-1] = (float) 0.01745
0x528: Return(); Pop(0)

0x529: Stack[-1] = (bool) 1
0x52a: Return(); Pop(0)

0x52b: PushEmpty(bool, bool)
0x52c: Push("ammo")
0x52d: Push((bool) 0)
0x52e: @ SetWeaponProperty(Stack[-3], Stack[-2], Stack[-1])
0x52f: Pop(2)
0x530: PushEmpty()
0x531: Call2 0xf1e

0x532: Pop(0)
0x533: Return(); Pop(2)

0x534: PushEmpty()
0x535: Call2 0x538

0x536: Pop(0)
0x537: Return(); Pop(0)

0x538: PushEmpty(bool, string, int)
0x539: Stack[-2] = "rifle_ammo"
0x53a: Stack[-1] = (int) 1
0x53b: Call2 0xd4c

0x53c: Pop(2)
0x53d: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x53e: PushEmpty(string)
0x53f: Call2 0x54b

0x540: Pop(0)
0x541: Push("_reload")
0x542: Pop(2); Push(Stack[-2] + Stack[-1]);
0x543: @ PlaySound(Stack[-1])
0x544: Pop(1)
0x545: Push("reload")
0x546: @ PlayAnimation(Stack[-1])
0x547: Pop(1)
0x548: @ WaitForAnimEnd()
0x549: Pop(0)
0x54a: Return(); Pop(0)

0x54b: Stack[-1] = "rifle"
0x54c: Return(); Pop(0)

0x54d: Stack[-1] = (float) 1.5
0x54e: Return(); Pop(0)

0x54f: Stack[-1] = (int) 1
0x550: Return(); Pop(0)

0x551: Stack[-1] = (int) 2
0x552: Return(); Pop(0)

0x553: Stack[-1] = (int) 2
0x554: Return(); Pop(0)

0x555: PushEmpty(string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool, string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool)
0x556: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x557: PushEmpty(bool)
0x558: Call2 0x502

0x559: Pop(0)
0x55a: Pop(1); Push((bool) Stack[-1] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55c: GOTO 0x634

0x55d: @ GetCurrentWeapon(Stack[-24])
0x55e: Pop(0)
0x55f: Stack[-23] = "attack1"
0x560: Push((bool) 1)
0x561: @ SetAttackState(Stack[-1])
0x562: Pop(1)
0x563: PushEmpty()
0x564: Call2 0x52b

0x565: Pop(0)
0x566: Push("_phase1")
0x567: Pop(1); Push(Stack[-24] + Stack[-1]);
0x568: @ PlayAnimation(Stack[-1])
0x569: Pop(1)
0x56a: @ WaitForAnimEnd()
0x56b: Pop(0)
0x56c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: Return(); Pop(48)

0x56f: Push("shot")
0x570: @ TriggerWeapon(Stack[-1])
0x571: Pop(1)
0x572: PushEmpty(string)
0x573: Call2 0x54b

0x574: Pop(0)
0x575: Push("_shot")
0x576: Pop(2); Push(Stack[-2] + Stack[-1]);
0x577: @ PlaySound(Stack[-1])
0x578: Pop(1)
0x579: PushEmpty(int)
0x57a: PushEmpty(int)
0x57b: Call2 0x553

0x57c: Stack[-2] = Stack[-1]
0x57d: Pop(1)
0x57e: Call2 0xd7b

0x57f: Pop(1)
0x580: PushEmpty()
0x581: Call2 0x640

0x582: Pop(0)
0x583: Push((bool) 0)
0x584: @ SetAttackState(Stack[-1])
0x585: Pop(1)
0x586: PushEmpty(int)
0x587: Call2 0x525

0x588: Stack[-23] = Stack[-1]
0x589: Pop(1)
0x58a: Stack[-21] = (bool) 0
0x58b: PushEmpty(float)
0x58c: Call2 0x54d

0x58d: Pop(0)
0x58e: Stack[-21] = Stack[-1] / Stack[-23]; Pop(1);
0x58f: Push((float)1.0)
0x590: Push((float)1.5)
0x591: Push((float)1.0)
0x592: PushEmpty(float)
0x593: Call2 0x527

0x594: Pop(0)
0x595: Pop(2); Push(Stack[-2] / Stack[-1]);
0x596: Push((float)1.5)
0x597: Pop(2); Push(Stack[-2] - Stack[-1]);
0x598: PushEmpty(float)
0x599: Call2 0xd70

0x59a: Pop(0)
0x59b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59d: Stack[-21] = Stack[-2] / Stack[-1]; Pop(2);
0x59e: @ GetDirection(Stack[-18])
0x59f: Pop(0)
0x5a0: PushEmpty(object)
0x5a1: Call2 0xbe8

0x5a2: Stack[-18] = Stack[-1]
0x5a3: Pop(1)
0x5a4: Stack[-16] = (int) 0
0x5a5: Pop(0); Push((bool) Stack[-16] < Stack[-22])
0x5a6: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5a7: @ RandVecCone3D(Stack[-15], Stack[-18], Stack[-19])
0x5a8: Pop(0)
0x5a9: Push((int) 10000)
0x5aa: @ GetVictimMaterialExact(Stack[-15], Stack[-14], Stack[-13], Stack[-16], Stack[-1])
0x5ab: Pop(1)
0x5ac: Push(Stack[-14])
0x5ad: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5ae: Stack[-11] = Stack[-20]
0x5af: Push((int) 4)
0x5b0: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Push((float)3.0)
0x5b3: Stack[-12] = Stack[-12] * Stack[-1]; Pop(1);
0x5b4: PushEmpty(float, object, float, int)
0x5b5: Stack[-3] = Stack[-18]
0x5b6: Stack[-2] = Stack[-15]
0x5b7: PushEmpty(int)
0x5b8: Call2 0x54f

0x5b9: Stack[-2] = Stack[-1]
0x5ba: Pop(1)
0x5bb: Call2 0xb51

0x5bc: Stack[-14] = Stack[-4]
0x5bd: Pop(4)
0x5be: Push(Stack[-10])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5c0: @@ add(Stack[-14])
0x5c1: Pop(0)
0x5c2: PushEmpty(int)
0x5c3: Call2 0x551

0x5c4: Pop(0)
0x5c5: @ ReportHit(Stack[-15], Stack[-1], Stack[-11], Stack[-12], Stack[-13], Stack[-16])
0x5c6: Pop(1)
0x5c7: PushEmpty(bool)
0x5c8: Call2 0x529

0x5c9: Pop(0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5cb: Push("health")
0x5cc: @@ GetProperty(Stack[-1], Stack[-10])
0x5cd: Pop(1)
0x5ce: Pop(0); Push((bool) Stack[-9] == 0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5d0: Push((int) 10000)
0x5d1: @ GetVictimMaterialExact(Stack[-9], Stack[-14], Stack[-13], Stack[-16], Stack[-1], Stack[-15])
0x5d2: Pop(1)
0x5d3: PushEmpty(bool)
0x5d4: Stack[-1] = (bool) 0
0x5d5: Push(Stack[-9])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d7: Pop(0); Push((bool) Stack[-9] != Stack[-15])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: Stack[-1] = (bool) 1
0x5da: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5db: PushEmpty(float, object, float, int)
0x5dc: Stack[-3] = Stack[-12]
0x5dd: Push((float)0.75)
0x5de: Stack[-3] = Stack[-16] * Stack[-1]; Pop(1);
0x5df: PushEmpty(int)
0x5e0: Call2 0x54f

0x5e1: Stack[-2] = Stack[-1]
0x5e2: Pop(1)
0x5e3: Call2 0xb51

0x5e4: Stack[-11] = Stack[-4]
0x5e5: Pop(4)
0x5e6: Push(Stack[-7])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5e8: @@ add(Stack[-8])
0x5e9: Pop(0)
0x5ea: PushEmpty(int)
0x5eb: Call2 0x551

0x5ec: Pop(0)
0x5ed: @ ReportHit(Stack[-9], Stack[-1], Stack[-8], Stack[-12], Stack[-13], Stack[-16])
0x5ee: Pop(1)
0x5ef: Stack[-8] = 0
0x5f0: GOTO 0x603

0x5f1: Push((int) -1)
0x5f2: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5f4: Pop(0); Push((bool) Stack[-21] == 0)
0x5f5: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5f6: @ GetScene(Stack[-6])
0x5f7: Pop(0)
0x5f8: Push("scripted")
0x5f9: Push(CVector(0.0, 0.0, 1.0))
0x5fa: Push("richochet.xml")
0x5fb: @ AddActorByType(Stack[-8], Stack[-3], Stack[-9], Stack[-15], Stack[-2], Stack[-1])
0x5fc: Pop(3)
0x5fd: Push("Material")
0x5fe: @@ SetScriptProperty(Stack[-1], Stack[-14])
0x5ff: Pop(1)
0x600: Stack[-21] = (bool) 1
0x601: Stack[-5] = 0
0x602: Stack[-6] = 0
0x603: Stack[-14] = 0
0x604: Push((int) 1)
0x605: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x606: GOTO 0x5a5

0x607: @@ size(Stack[-4])
0x608: Pop(0)
0x609: Stack[-3] = (int) 0
0x60a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x60b: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x60c: @@ get(Stack[-2], Stack[-3])
0x60d: Pop(0)
0x60e: @ ReportAttack(Stack[-2])
0x60f: Pop(0)
0x610: Push(GlobalVars[2])
0x611: @@ in(Stack[-2], Stack[-3])
0x612: Pop(1)
0x613: Pop(0); Push((bool) Stack[-1] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x615: Push(GlobalVars[3])
0x616: @@ add(Stack[-3])
0x617: Pop(1)
0x618: Push((bool) 0)
0x619: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x61a: Pop(1)
0x61b: GOTO 0x61f

0x61c: Push((bool) 1)
0x61d: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x61e: Pop(1)
0x61f: Stack[-2] = 0
0x620: Push((int) 1)
0x621: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x622: GOTO 0x60a

0x623: Push("_phase2")
0x624: Pop(1); Push(Stack[-24] + Stack[-1]);
0x625: @ PlayAnimation(Stack[-1])
0x626: Pop(1)
0x627: @ WaitForAnimEnd()
0x628: Pop(0)
0x629: Push( Stack[0 + Tasks[-1].StackPointer] )
0x62a: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62b: Return(); Pop(48)

0x62c: PushEmpty()
0x62d: Call2 0x534

0x62e: Pop(0)
0x62f: Stack[-17] = 0
0x630: PushEmpty(bool)
0x631: Call2 0x641

0x632: Pop(0)
0x633: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x634: Return(); Pop(48)

0x635: PushEmpty()
0x636: Push((int) 10)
0x637: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x63a: GOTO 0x63f

0x63b: PushEmpty(int)
0x63c: Stack[-1] = Stack[-2]
0x63d: Call2 0xe63

0x63e: Pop(1)
0x63f: Return(); Pop(0)

0x640: Return(); Pop(0)

0x641: PushEmpty(bool, bool)
0x642: @ IsShooting(Stack[-1])
0x643: Pop(0)
0x644: Stack[-3] = Stack[-1]
0x645: Return(); Pop(2)

0x646: PushEmpty()
0x647: Call2 0x65e

0x648: Pop(0)
0x649: PushEmpty(bool, string, int)
0x64a: Stack[-2] = "rifle_ammo"
0x64b: Stack[-1] = (int) 1
0x64c: Call2 0xd4c

0x64d: Pop(2)
0x64e: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x64f: PushEmpty(string)
0x650: Call2 0x65c

0x651: Pop(0)
0x652: Push("_reload")
0x653: Pop(2); Push(Stack[-2] + Stack[-1]);
0x654: @ PlaySound(Stack[-1])
0x655: Pop(1)
0x656: Push("reload")
0x657: @ PlayAnimation(Stack[-1])
0x658: Pop(1)
0x659: @ WaitForAnimEnd()
0x65a: Pop(0)
0x65b: Return(); Pop(0)

0x65c: Stack[-1] = "rifle"
0x65d: Return(); Pop(0)

0x65e: Return(); Pop(0)

0x65f: PushEmpty(bool, bool, bool, bool)
0x660: Push("ammo")
0x661: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x662: Pop(1)
0x663: PushEmpty(bool)
0x664: Stack[-1] = (bool) 1
0x665: Pop(0); Push((bool) Stack[-3] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x667: Pop(0); Push((bool) Stack[-2] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Stack[-1] = (bool) 0
0x66a: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x66b: PushEmpty(bool, string, int)
0x66c: Stack[-2] = "revolver_ammo"
0x66d: Stack[-1] = (int) 6
0x66e: Call2 0xd4c

0x66f: Pop(2)
0x670: Pop(1); Push((bool) Stack[-1] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x672: PushEmpty(string)
0x673: Call2 0x6c2

0x674: Pop(0)
0x675: Push("_noammo")
0x676: Pop(2); Push(Stack[-2] + Stack[-1]);
0x677: @ PlaySound(Stack[-1])
0x678: Pop(1)
0x679: Push("noammo")
0x67a: @ PlayAnimation(Stack[-1])
0x67b: Pop(1)
0x67c: @ WaitForAnimEnd()
0x67d: Pop(0)
0x67e: Stack[-5] = (bool) 0
0x67f: Return(); Pop(4)

0x680: Stack[-5] = (bool) 1
0x681: Return(); Pop(4)

0x682: Stack[-1] = (int) 1
0x683: Return(); Pop(0)

0x684: Stack[-1] = (float) 0.02618
0x685: Return(); Pop(0)

0x686: PushEmpty(bool, int, bool, int)
0x687: Push("ammo")
0x688: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x689: Pop(1)
0x68a: Push("ammo")
0x68b: Push((int) 1)
0x68c: Pop(1); Push(Stack[-3] - Stack[-1]);
0x68d: @ SetWeaponProperty(Stack[-4], Stack[-2], Stack[-1])
0x68e: Pop(2)
0x68f: PushEmpty()
0x690: Call2 0xf1e

0x691: Pop(0)
0x692: Return(); Pop(4)

0x693: PushEmpty(bool, bool, bool, bool)
0x694: Push("ammo")
0x695: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x696: Pop(1)
0x697: PushEmpty(bool)
0x698: Stack[-1] = (bool) 1
0x699: Pop(0); Push((bool) Stack[-3] == 0)
0x69a: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69b: Pop(0); Push((bool) Stack[-2] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: Stack[-1] = (bool) 0
0x69e: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69f: PushEmpty()
0x6a0: Call2 0x6a3

0x6a1: Pop(0)
0x6a2: Return(); Pop(4)

0x6a3: PushEmpty(bool, string, int)
0x6a4: Stack[-2] = "revolver_ammo"
0x6a5: Stack[-1] = (int) 6
0x6a6: Call2 0xd4c

0x6a7: Pop(2)
0x6a8: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a9: PushEmpty(string)
0x6aa: Call2 0x6c2

0x6ab: Pop(0)
0x6ac: Push("_reload")
0x6ad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ae: @ PlaySound(Stack[-1])
0x6af: Pop(1)
0x6b0: Push("reload")
0x6b1: @ PlayAnimation(Stack[-1])
0x6b2: Pop(1)
0x6b3: @ WaitForAnimEnd()
0x6b4: Pop(0)
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty()
0x6b7: Push((int) 11)
0x6b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6ba: PushEmpty()
0x6bb: Call2 0x6a3

0x6bc: Pop(0)
0x6bd: PushEmpty(int)
0x6be: Stack[-1] = Stack[-2]
0x6bf: Call2 0xe63

0x6c0: Pop(1)
0x6c1: Return(); Pop(0)

0x6c2: Stack[-1] = "revolver"
0x6c3: Return(); Pop(0)

0x6c4: Stack[-1] = (float) 0.8
0x6c5: Return(); Pop(0)

0x6c6: Stack[-1] = (int) 1
0x6c7: Return(); Pop(0)

0x6c8: Stack[-1] = (int) 2
0x6c9: Return(); Pop(0)

0x6ca: Stack[-1] = (int) 2
0x6cb: Return(); Pop(0)

0x6cc: PushEmpty(string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool, string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool)
0x6cd: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6ce: PushEmpty(bool)
0x6cf: Call2 0x65f

0x6d0: Pop(0)
0x6d1: Pop(1); Push((bool) Stack[-1] == 0)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: GOTO 0x7ab

0x6d4: @ GetCurrentWeapon(Stack[-24])
0x6d5: Pop(0)
0x6d6: Stack[-23] = "attack1"
0x6d7: Push((bool) 1)
0x6d8: @ SetAttackState(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty()
0x6db: Call2 0x686

0x6dc: Pop(0)
0x6dd: Push("_phase1")
0x6de: Pop(1); Push(Stack[-24] + Stack[-1]);
0x6df: @ PlayAnimation(Stack[-1])
0x6e0: Pop(1)
0x6e1: @ WaitForAnimEnd()
0x6e2: Pop(0)
0x6e3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e5: Return(); Pop(48)

0x6e6: Push("shot")
0x6e7: @ TriggerWeapon(Stack[-1])
0x6e8: Pop(1)
0x6e9: PushEmpty(string)
0x6ea: Call2 0x6c2

0x6eb: Pop(0)
0x6ec: Push("_shot")
0x6ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ee: @ PlaySound(Stack[-1])
0x6ef: Pop(1)
0x6f0: PushEmpty(int)
0x6f1: PushEmpty(int)
0x6f2: Call2 0x6ca

0x6f3: Stack[-2] = Stack[-1]
0x6f4: Pop(1)
0x6f5: Call2 0xd7b

0x6f6: Pop(1)
0x6f7: PushEmpty()
0x6f8: Call2 0x7ac

0x6f9: Pop(0)
0x6fa: Push((bool) 0)
0x6fb: @ SetAttackState(Stack[-1])
0x6fc: Pop(1)
0x6fd: PushEmpty(int)
0x6fe: Call2 0x682

0x6ff: Stack[-23] = Stack[-1]
0x700: Pop(1)
0x701: Stack[-21] = (bool) 0
0x702: PushEmpty(float)
0x703: Call2 0x6c4

0x704: Pop(0)
0x705: Stack[-21] = Stack[-1] / Stack[-23]; Pop(1);
0x706: Push((float)1.0)
0x707: Push((float)1.5)
0x708: Push((float)1.0)
0x709: PushEmpty(float)
0x70a: Call2 0x684

0x70b: Pop(0)
0x70c: Pop(2); Push(Stack[-2] / Stack[-1]);
0x70d: Push((float)1.5)
0x70e: Pop(2); Push(Stack[-2] - Stack[-1]);
0x70f: PushEmpty(float)
0x710: Call2 0xd70

0x711: Pop(0)
0x712: Pop(2); Push(Stack[-2] * Stack[-1]);
0x713: Pop(2); Push(Stack[-2] + Stack[-1]);
0x714: Stack[-21] = Stack[-2] / Stack[-1]; Pop(2);
0x715: @ GetDirection(Stack[-18])
0x716: Pop(0)
0x717: PushEmpty(object)
0x718: Call2 0xbe8

0x719: Stack[-18] = Stack[-1]
0x71a: Pop(1)
0x71b: Stack[-16] = (int) 0
0x71c: Pop(0); Push((bool) Stack[-16] < Stack[-22])
0x71d: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x71e: @ RandVecCone3D(Stack[-15], Stack[-18], Stack[-19])
0x71f: Pop(0)
0x720: Push((int) 10000)
0x721: @ GetVictimMaterialExact(Stack[-15], Stack[-14], Stack[-13], Stack[-16], Stack[-1])
0x722: Pop(1)
0x723: Push(Stack[-14])
0x724: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x725: Stack[-11] = Stack[-20]
0x726: Push((int) 4)
0x727: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x729: Push((float)3.0)
0x72a: Stack[-12] = Stack[-12] * Stack[-1]; Pop(1);
0x72b: PushEmpty(float, object, float, int)
0x72c: Stack[-3] = Stack[-18]
0x72d: Stack[-2] = Stack[-15]
0x72e: PushEmpty(int)
0x72f: Call2 0x6c6

0x730: Stack[-2] = Stack[-1]
0x731: Pop(1)
0x732: Call2 0xb51

0x733: Stack[-14] = Stack[-4]
0x734: Pop(4)
0x735: Push(Stack[-10])
0x736: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x737: @@ add(Stack[-14])
0x738: Pop(0)
0x739: PushEmpty(int)
0x73a: Call2 0x6c8

0x73b: Pop(0)
0x73c: @ ReportHit(Stack[-15], Stack[-1], Stack[-11], Stack[-12], Stack[-13], Stack[-16])
0x73d: Pop(1)
0x73e: PushEmpty(bool)
0x73f: Call2 0x7ad

0x740: Pop(0)
0x741: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x742: Push("health")
0x743: @@ GetProperty(Stack[-1], Stack[-10])
0x744: Pop(1)
0x745: Pop(0); Push((bool) Stack[-9] == 0)
0x746: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x747: Push((int) 10000)
0x748: @ GetVictimMaterialExact(Stack[-9], Stack[-14], Stack[-13], Stack[-16], Stack[-1], Stack[-15])
0x749: Pop(1)
0x74a: PushEmpty(bool)
0x74b: Stack[-1] = (bool) 0
0x74c: Push(Stack[-9])
0x74d: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74e: Pop(0); Push((bool) Stack[-9] != Stack[-15])
0x74f: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x750: Stack[-1] = (bool) 1
0x751: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x752: PushEmpty(float, object, float, int)
0x753: Stack[-3] = Stack[-12]
0x754: Push((float)0.75)
0x755: Stack[-3] = Stack[-16] * Stack[-1]; Pop(1);
0x756: PushEmpty(int)
0x757: Call2 0x6c6

0x758: Stack[-2] = Stack[-1]
0x759: Pop(1)
0x75a: Call2 0xb51

0x75b: Stack[-11] = Stack[-4]
0x75c: Pop(4)
0x75d: Push(Stack[-7])
0x75e: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x75f: @@ add(Stack[-8])
0x760: Pop(0)
0x761: PushEmpty(int)
0x762: Call2 0x6c8

0x763: Pop(0)
0x764: @ ReportHit(Stack[-9], Stack[-1], Stack[-8], Stack[-12], Stack[-13], Stack[-16])
0x765: Pop(1)
0x766: Stack[-8] = 0
0x767: GOTO 0x77a

0x768: Push((int) -1)
0x769: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x76b: Pop(0); Push((bool) Stack[-21] == 0)
0x76c: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x76d: @ GetScene(Stack[-6])
0x76e: Pop(0)
0x76f: Push("scripted")
0x770: Push(CVector(0.0, 0.0, 1.0))
0x771: Push("richochet.xml")
0x772: @ AddActorByType(Stack[-8], Stack[-3], Stack[-9], Stack[-15], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Push("Material")
0x775: @@ SetScriptProperty(Stack[-1], Stack[-14])
0x776: Pop(1)
0x777: Stack[-21] = (bool) 1
0x778: Stack[-5] = 0
0x779: Stack[-6] = 0
0x77a: Stack[-14] = 0
0x77b: Push((int) 1)
0x77c: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x77d: GOTO 0x71c

0x77e: @@ size(Stack[-4])
0x77f: Pop(0)
0x780: Stack[-3] = (int) 0
0x781: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x782: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x783: @@ get(Stack[-2], Stack[-3])
0x784: Pop(0)
0x785: @ ReportAttack(Stack[-2])
0x786: Pop(0)
0x787: Push(GlobalVars[2])
0x788: @@ in(Stack[-2], Stack[-3])
0x789: Pop(1)
0x78a: Pop(0); Push((bool) Stack[-1] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x78c: Push(GlobalVars[3])
0x78d: @@ add(Stack[-3])
0x78e: Pop(1)
0x78f: Push((bool) 0)
0x790: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x791: Pop(1)
0x792: GOTO 0x796

0x793: Push((bool) 1)
0x794: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x795: Pop(1)
0x796: Stack[-2] = 0
0x797: Push((int) 1)
0x798: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x799: GOTO 0x781

0x79a: Push("_phase2")
0x79b: Pop(1); Push(Stack[-24] + Stack[-1]);
0x79c: @ PlayAnimation(Stack[-1])
0x79d: Pop(1)
0x79e: @ WaitForAnimEnd()
0x79f: Pop(0)
0x7a0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: Return(); Pop(48)

0x7a3: PushEmpty()
0x7a4: Call2 0x693

0x7a5: Pop(0)
0x7a6: Stack[-17] = 0
0x7a7: PushEmpty(bool)
0x7a8: Call2 0x7af

0x7a9: Pop(0)
0x7aa: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x7ab: Return(); Pop(48)

0x7ac: Return(); Pop(0)

0x7ad: Stack[-1] = (bool) 0
0x7ae: Return(); Pop(0)

0x7af: PushEmpty(bool, bool)
0x7b0: @ IsShooting(Stack[-1])
0x7b1: Pop(0)
0x7b2: Stack[-3] = Stack[-1]
0x7b3: Return(); Pop(2)

0x7b4: PushEmpty()
0x7b5: Call2 0x7cc

0x7b6: Pop(0)
0x7b7: PushEmpty(bool, string, int)
0x7b8: Stack[-2] = "revolver_ammo"
0x7b9: Stack[-1] = (int) 6
0x7ba: Call2 0xd4c

0x7bb: Pop(2)
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7bd: PushEmpty(string)
0x7be: Call2 0x7ca

0x7bf: Pop(0)
0x7c0: Push("_reload")
0x7c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7c2: @ PlaySound(Stack[-1])
0x7c3: Pop(1)
0x7c4: Push("reload")
0x7c5: @ PlayAnimation(Stack[-1])
0x7c6: Pop(1)
0x7c7: @ WaitForAnimEnd()
0x7c8: Pop(0)
0x7c9: Return(); Pop(0)

0x7ca: Stack[-1] = "revolver"
0x7cb: Return(); Pop(0)

0x7cc: Return(); Pop(0)

0x7cd: PushEmpty(bool, bool, bool, bool)
0x7ce: Push("ammo")
0x7cf: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x7d0: Pop(1)
0x7d1: PushEmpty(bool)
0x7d2: Stack[-1] = (bool) 1
0x7d3: Pop(0); Push((bool) Stack[-3] == 0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d5: Pop(0); Push((bool) Stack[-2] == 0)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d7: Stack[-1] = (bool) 0
0x7d8: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7d9: PushEmpty(bool, string, int)
0x7da: Stack[-2] = "samopal_ammo"
0x7db: Stack[-1] = (int) 2
0x7dc: Call2 0xd4c

0x7dd: Pop(2)
0x7de: Pop(1); Push((bool) Stack[-1] == 0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7e0: PushEmpty(string)
0x7e1: Call2 0x830

0x7e2: Pop(0)
0x7e3: Push("_noammo")
0x7e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7e5: @ PlaySound(Stack[-1])
0x7e6: Pop(1)
0x7e7: Push("noammo")
0x7e8: @ PlayAnimation(Stack[-1])
0x7e9: Pop(1)
0x7ea: @ WaitForAnimEnd()
0x7eb: Pop(0)
0x7ec: Stack[-5] = (bool) 0
0x7ed: Return(); Pop(4)

0x7ee: Stack[-5] = (bool) 1
0x7ef: Return(); Pop(4)

0x7f0: Stack[-1] = (int) 5
0x7f1: Return(); Pop(0)

0x7f2: Stack[-1] = (float) 0.03927
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty(bool, int, bool, int)
0x7f5: Push("ammo")
0x7f6: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x7f7: Pop(1)
0x7f8: Push("ammo")
0x7f9: Push((int) 1)
0x7fa: Pop(1); Push(Stack[-3] - Stack[-1]);
0x7fb: @ SetWeaponProperty(Stack[-4], Stack[-2], Stack[-1])
0x7fc: Pop(2)
0x7fd: PushEmpty()
0x7fe: Call2 0xf1e

0x7ff: Pop(0)
0x800: Return(); Pop(4)

0x801: PushEmpty(bool, bool, bool, bool)
0x802: Push("ammo")
0x803: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0x804: Pop(1)
0x805: PushEmpty(bool)
0x806: Stack[-1] = (bool) 1
0x807: Pop(0); Push((bool) Stack[-3] == 0)
0x808: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x809: Pop(0); Push((bool) Stack[-2] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: Stack[-1] = (bool) 0
0x80c: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80d: PushEmpty()
0x80e: Call2 0x811

0x80f: Pop(0)
0x810: Return(); Pop(4)

0x811: PushEmpty(bool, string, int)
0x812: Stack[-2] = "samopal_ammo"
0x813: Stack[-1] = (int) 2
0x814: Call2 0xd4c

0x815: Pop(2)
0x816: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x817: PushEmpty(string)
0x818: Call2 0x830

0x819: Pop(0)
0x81a: Push("_reload")
0x81b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x81c: @ PlaySound(Stack[-1])
0x81d: Pop(1)
0x81e: Push("reload")
0x81f: @ PlayAnimation(Stack[-1])
0x820: Pop(1)
0x821: @ WaitForAnimEnd()
0x822: Pop(0)
0x823: Return(); Pop(0)

0x824: PushEmpty()
0x825: Push((int) 11)
0x826: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x828: PushEmpty()
0x829: Call2 0x811

0x82a: Pop(0)
0x82b: PushEmpty(int)
0x82c: Stack[-1] = Stack[-2]
0x82d: Call2 0xe63

0x82e: Pop(1)
0x82f: Return(); Pop(0)

0x830: Stack[-1] = "samopal"
0x831: Return(); Pop(0)

0x832: Stack[-1] = (float) 1.8
0x833: Return(); Pop(0)

0x834: Stack[-1] = (int) 1
0x835: Return(); Pop(0)

0x836: Stack[-1] = (int) 2
0x837: Return(); Pop(0)

0x838: Stack[-1] = (int) 2
0x839: Return(); Pop(0)

0x83a: PushEmpty(string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool, string, string, int, bool, float, float, cvector, object, int, cvector, object, int, cvector, float, float, float, object, float, object, object, int, int, object, bool)
0x83b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x83c: PushEmpty(bool)
0x83d: Call2 0x7cd

0x83e: Pop(0)
0x83f: Pop(1); Push((bool) Stack[-1] == 0)
0x840: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x841: GOTO 0x919

0x842: @ GetCurrentWeapon(Stack[-24])
0x843: Pop(0)
0x844: Stack[-23] = "attack1"
0x845: Push((bool) 1)
0x846: @ SetAttackState(Stack[-1])
0x847: Pop(1)
0x848: PushEmpty()
0x849: Call2 0x7f4

0x84a: Pop(0)
0x84b: Push("_phase1")
0x84c: Pop(1); Push(Stack[-24] + Stack[-1]);
0x84d: @ PlayAnimation(Stack[-1])
0x84e: Pop(1)
0x84f: @ WaitForAnimEnd()
0x850: Pop(0)
0x851: Push( Stack[0 + Tasks[-1].StackPointer] )
0x852: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x853: Return(); Pop(48)

0x854: Push("shot")
0x855: @ TriggerWeapon(Stack[-1])
0x856: Pop(1)
0x857: PushEmpty(string)
0x858: Call2 0x830

0x859: Pop(0)
0x85a: Push("_shot")
0x85b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x85c: @ PlaySound(Stack[-1])
0x85d: Pop(1)
0x85e: PushEmpty(int)
0x85f: PushEmpty(int)
0x860: Call2 0x838

0x861: Stack[-2] = Stack[-1]
0x862: Pop(1)
0x863: Call2 0xd7b

0x864: Pop(1)
0x865: PushEmpty()
0x866: Call2 0x91a

0x867: Pop(0)
0x868: Push((bool) 0)
0x869: @ SetAttackState(Stack[-1])
0x86a: Pop(1)
0x86b: PushEmpty(int)
0x86c: Call2 0x7f0

0x86d: Stack[-23] = Stack[-1]
0x86e: Pop(1)
0x86f: Stack[-21] = (bool) 0
0x870: PushEmpty(float)
0x871: Call2 0x832

0x872: Pop(0)
0x873: Stack[-21] = Stack[-1] / Stack[-23]; Pop(1);
0x874: Push((float)1.0)
0x875: Push((float)1.5)
0x876: Push((float)1.0)
0x877: PushEmpty(float)
0x878: Call2 0x7f2

0x879: Pop(0)
0x87a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x87b: Push((float)1.5)
0x87c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x87d: PushEmpty(float)
0x87e: Call2 0xd70

0x87f: Pop(0)
0x880: Pop(2); Push(Stack[-2] * Stack[-1]);
0x881: Pop(2); Push(Stack[-2] + Stack[-1]);
0x882: Stack[-21] = Stack[-2] / Stack[-1]; Pop(2);
0x883: @ GetDirection(Stack[-18])
0x884: Pop(0)
0x885: PushEmpty(object)
0x886: Call2 0xbe8

0x887: Stack[-18] = Stack[-1]
0x888: Pop(1)
0x889: Stack[-16] = (int) 0
0x88a: Pop(0); Push((bool) Stack[-16] < Stack[-22])
0x88b: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x88c: @ RandVecCone3D(Stack[-15], Stack[-18], Stack[-19])
0x88d: Pop(0)
0x88e: Push((int) 10000)
0x88f: @ GetVictimMaterialExact(Stack[-15], Stack[-14], Stack[-13], Stack[-16], Stack[-1])
0x890: Pop(1)
0x891: Push(Stack[-14])
0x892: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x893: Stack[-11] = Stack[-20]
0x894: Push((int) 4)
0x895: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x897: Push((float)3.0)
0x898: Stack[-12] = Stack[-12] * Stack[-1]; Pop(1);
0x899: PushEmpty(float, object, float, int)
0x89a: Stack[-3] = Stack[-18]
0x89b: Stack[-2] = Stack[-15]
0x89c: PushEmpty(int)
0x89d: Call2 0x834

0x89e: Stack[-2] = Stack[-1]
0x89f: Pop(1)
0x8a0: Call2 0xb51

0x8a1: Stack[-14] = Stack[-4]
0x8a2: Pop(4)
0x8a3: Push(Stack[-10])
0x8a4: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8a5: @@ add(Stack[-14])
0x8a6: Pop(0)
0x8a7: PushEmpty(int)
0x8a8: Call2 0x836

0x8a9: Pop(0)
0x8aa: @ ReportHit(Stack[-15], Stack[-1], Stack[-11], Stack[-12], Stack[-13], Stack[-16])
0x8ab: Pop(1)
0x8ac: PushEmpty(bool)
0x8ad: Call2 0x91b

0x8ae: Pop(0)
0x8af: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8b0: Push("health")
0x8b1: @@ GetProperty(Stack[-1], Stack[-10])
0x8b2: Pop(1)
0x8b3: Pop(0); Push((bool) Stack[-9] == 0)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8b5: Push((int) 10000)
0x8b6: @ GetVictimMaterialExact(Stack[-9], Stack[-14], Stack[-13], Stack[-16], Stack[-1], Stack[-15])
0x8b7: Pop(1)
0x8b8: PushEmpty(bool)
0x8b9: Stack[-1] = (bool) 0
0x8ba: Push(Stack[-9])
0x8bb: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8bc: Pop(0); Push((bool) Stack[-9] != Stack[-15])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8be: Stack[-1] = (bool) 1
0x8bf: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8c0: PushEmpty(float, object, float, int)
0x8c1: Stack[-3] = Stack[-12]
0x8c2: Push((float)0.75)
0x8c3: Stack[-3] = Stack[-16] * Stack[-1]; Pop(1);
0x8c4: PushEmpty(int)
0x8c5: Call2 0x834

0x8c6: Stack[-2] = Stack[-1]
0x8c7: Pop(1)
0x8c8: Call2 0xb51

0x8c9: Stack[-11] = Stack[-4]
0x8ca: Pop(4)
0x8cb: Push(Stack[-7])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8cd: @@ add(Stack[-8])
0x8ce: Pop(0)
0x8cf: PushEmpty(int)
0x8d0: Call2 0x836

0x8d1: Pop(0)
0x8d2: @ ReportHit(Stack[-9], Stack[-1], Stack[-8], Stack[-12], Stack[-13], Stack[-16])
0x8d3: Pop(1)
0x8d4: Stack[-8] = 0
0x8d5: GOTO 0x8e8

0x8d6: Push((int) -1)
0x8d7: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8d9: Pop(0); Push((bool) Stack[-21] == 0)
0x8da: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8db: @ GetScene(Stack[-6])
0x8dc: Pop(0)
0x8dd: Push("scripted")
0x8de: Push(CVector(0.0, 0.0, 1.0))
0x8df: Push("richochet.xml")
0x8e0: @ AddActorByType(Stack[-8], Stack[-3], Stack[-9], Stack[-15], Stack[-2], Stack[-1])
0x8e1: Pop(3)
0x8e2: Push("Material")
0x8e3: @@ SetScriptProperty(Stack[-1], Stack[-14])
0x8e4: Pop(1)
0x8e5: Stack[-21] = (bool) 1
0x8e6: Stack[-5] = 0
0x8e7: Stack[-6] = 0
0x8e8: Stack[-14] = 0
0x8e9: Push((int) 1)
0x8ea: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x8eb: GOTO 0x88a

0x8ec: @@ size(Stack[-4])
0x8ed: Pop(0)
0x8ee: Stack[-3] = (int) 0
0x8ef: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x8f0: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8f1: @@ get(Stack[-2], Stack[-3])
0x8f2: Pop(0)
0x8f3: @ ReportAttack(Stack[-2])
0x8f4: Pop(0)
0x8f5: Push(GlobalVars[2])
0x8f6: @@ in(Stack[-2], Stack[-3])
0x8f7: Pop(1)
0x8f8: Pop(0); Push((bool) Stack[-1] == 0)
0x8f9: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fa: Push(GlobalVars[3])
0x8fb: @@ add(Stack[-3])
0x8fc: Pop(1)
0x8fd: Push((bool) 0)
0x8fe: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x8ff: Pop(1)
0x900: GOTO 0x904

0x901: Push((bool) 1)
0x902: @ BroadcastPlayerDamage(Stack[-3], Stack[-1])
0x903: Pop(1)
0x904: Stack[-2] = 0
0x905: Push((int) 1)
0x906: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x907: GOTO 0x8ef

0x908: Push("_phase2")
0x909: Pop(1); Push(Stack[-24] + Stack[-1]);
0x90a: @ PlayAnimation(Stack[-1])
0x90b: Pop(1)
0x90c: @ WaitForAnimEnd()
0x90d: Pop(0)
0x90e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x90f: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x910: Return(); Pop(48)

0x911: PushEmpty()
0x912: Call2 0x801

0x913: Pop(0)
0x914: Stack[-17] = 0
0x915: PushEmpty(bool)
0x916: Call2 0x91d

0x917: Pop(0)
0x918: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x919: Return(); Pop(48)

0x91a: Return(); Pop(0)

0x91b: Stack[-1] = (bool) 0
0x91c: Return(); Pop(0)

0x91d: PushEmpty(bool, bool)
0x91e: @ IsShooting(Stack[-1])
0x91f: Pop(0)
0x920: Stack[-3] = Stack[-1]
0x921: Return(); Pop(2)

0x922: PushEmpty()
0x923: Call2 0x93a

0x924: Pop(0)
0x925: PushEmpty(bool, string, int)
0x926: Stack[-2] = "samopal_ammo"
0x927: Stack[-1] = (int) 2
0x928: Call2 0xd4c

0x929: Pop(2)
0x92a: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x92b: PushEmpty(string)
0x92c: Call2 0x938

0x92d: Pop(0)
0x92e: Push("_reload")
0x92f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x930: @ PlaySound(Stack[-1])
0x931: Pop(1)
0x932: Push("reload")
0x933: @ PlayAnimation(Stack[-1])
0x934: Pop(1)
0x935: @ WaitForAnimEnd()
0x936: Pop(0)
0x937: Return(); Pop(0)

0x938: Stack[-1] = "samopal"
0x939: Return(); Pop(0)

0x93a: Return(); Pop(0)

0x93b: PushEmpty(int, int, object, bool, bool, bool, bool, int, int, int, int, object, bool, bool, bool, bool, int, int)
0x93c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x93d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x93e: @ GetWeaponItem(Stack[-9])
0x93f: Pop(0)
0x940: Push("use_begin")
0x941: @ PlayAnimation(Stack[-1])
0x942: Pop(1)
0x943: @ WaitForAnimEnd()
0x944: Pop(0)
0x945: Push( Stack[0 + Tasks[-1].StackPointer] )
0x946: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x947: Return(); Pop(18)

0x948: @ GetWeaponItem(Stack[-8])
0x949: Pop(0)
0x94a: @ GetPlayerSelectedObject(Stack[-7])
0x94b: Pop(0)
0x94c: Stack[-6] = (bool) 0
0x94d: Pop(0); Push((bool) Stack[-8] == Stack[-9])
0x94e: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x94f: PushEmpty(bool, object, string)
0x950: Stack[-2] = Stack[-10]
0x951: Stack[-1] = "lp"
0x952: Call2 0xb28

0x953: Pop(2)
0x954: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x955: Push("lp")
0x956: @@ GetProperty(Stack[-1], Stack[-6])
0x957: Pop(1)
0x958: Push(Stack[-5])
0x959: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x95a: Push("locked")
0x95b: @@ GetProperty(Stack[-1], Stack[-5])
0x95c: Pop(1)
0x95d: Push(Stack[-4])
0x95e: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x95f: Stack[-6] = (bool) 1
0x960: Push("locked")
0x961: Push((bool) 0)
0x962: @@ SetProperty(Stack[-2], Stack[-1])
0x963: Pop(2)
0x964: Stack[-2] = (int) 0
0x965: Push("uses")
0x966: @ GetWeaponProperty(Stack[-4], Stack[-1], Stack[-3])
0x967: Pop(1)
0x968: Push((int) 1)
0x969: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x96a: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x96b: @ GetWeaponItem(Stack[-1])
0x96c: Pop(0)
0x96d: Push((bool) 0)
0x96e: Push((int) 0)
0x96f: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0x970: Pop(2)
0x971: Push((int) 1)
0x972: Push((int) 0)
0x973: @ RemoveItem(Stack[-3], Stack[-2], Stack[-1])
0x974: Pop(2)
0x975: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x976: GOTO 0x97c

0x977: Push("uses")
0x978: Push((int) 1)
0x979: Pop(1); Push(Stack[-4] - Stack[-1]);
0x97a: @ SetWeaponProperty(Stack[-5], Stack[-2], Stack[-1])
0x97b: Pop(2)
0x97c: Push(Stack[-6])
0x97d: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x97e: Push("use_success")
0x97f: @ PlayAnimation(Stack[-1])
0x980: Pop(1)
0x981: GOTO 0x985

0x982: Push("use_fail")
0x983: @ PlayAnimation(Stack[-1])
0x984: Pop(1)
0x985: @ WaitForAnimEnd()
0x986: Pop(0)
0x987: Push( Stack[0 + Tasks[-1].StackPointer] )
0x988: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x989: Return(); Pop(18)

0x98a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x98b: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x98c: Push("holster")
0x98d: @ PlayAnimation(Stack[-1])
0x98e: Pop(1)
0x98f: @ WaitForAnimEnd()
0x990: Pop(0)
0x991: Push((int) -1)
0x992: @ SetHandsItem(Stack[-1])
0x993: Pop(1)
0x994: Push( Stack[0 + Tasks[-1].StackPointer] )
0x995: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x996: Return(); Pop(18)

0x997: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x998: Push("unholster")
0x999: @ PlayAnimation(Stack[-1])
0x99a: Pop(1)
0x99b: @ WaitForAnimEnd()
0x99c: Pop(0)
0x99d: Return(); Pop(18)

0x99e: Stack[-7] = 0
0x99f: PushEmpty(bool)
0x9a0: Stack[-1] = (bool) 0
0x9a1: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a3: Push( Stack[1 + Tasks[-1].StackPointer] )
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a5: Stack[-1] = (bool) 1
0x9a6: IF (Stack[-1] == 0) GOTO 0x9aa; Pop(1)

0x9a7: Push((int) -1)
0x9a8: @ SetHandsItem(Stack[-1])
0x9a9: Pop(1)
0x9aa: Return(); Pop(0)

0x9ab: PushEmpty(int, int)
0x9ac: Push("player_init")
0x9ad: @ GetVariable(Stack[-1], Stack[-2])
0x9ae: Pop(1)
0x9af: Pop(0); Push((bool) Stack[-1] == 0)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b1: @ Diary()
0x9b2: Pop(0)
0x9b3: Push("player_init")
0x9b4: Push((int) 1)
0x9b5: @ SetVariable(Stack[-2], Stack[-1])
0x9b6: Pop(2)
0x9b7: PushEmpty(object)
0x9b8: PushEmpty(object)
0x9b9: Call2 0xc67

0x9ba: Stack[-2] = Stack[-1]
0x9bb: Pop(1)
0x9bc: Call2 0xa26

0x9bd: Pop(1)
0x9be: Return(); Pop(2)

0x9bf: PushEmpty()
0x9c0: Push("empty")
0x9c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c3: PushEmpty()
0x9c4: Push(-0, 1); TaskCall(3)
0x9c5: Call2 0x1d1

0x9c6: Pop(-0, 1); TaskReturn
0x9c7: Pop(0)
0x9c8: GOTO 0x9fe

0x9c9: Push("scalpel")
0x9ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9cc: PushEmpty()
0x9cd: Push(-0, 1); TaskCall(4)
0x9ce: Call2 0x2f1

0x9cf: Pop(-0, 1); TaskReturn
0x9d0: Pop(0)
0x9d1: GOTO 0x9fe

0x9d2: Push("knife")
0x9d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d5: PushEmpty()
0x9d6: Push(-0, 1); TaskCall(5)
0x9d7: Call2 0x40f

0x9d8: Pop(-0, 1); TaskReturn
0x9d9: Pop(0)
0x9da: GOTO 0x9fe

0x9db: Push("rifle")
0x9dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9dd: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9de: PushEmpty()
0x9df: Push(-0, 1); TaskCall(6)
0x9e0: Call2 0x555

0x9e1: Pop(-0, 1); TaskReturn
0x9e2: Pop(0)
0x9e3: GOTO 0x9fe

0x9e4: Push("revolver")
0x9e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9e7: PushEmpty()
0x9e8: Push(-0, 1); TaskCall(8)
0x9e9: Call2 0x6cc

0x9ea: Pop(-0, 1); TaskReturn
0x9eb: Pop(0)
0x9ec: GOTO 0x9fe

0x9ed: Push("samopal")
0x9ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9f0: PushEmpty()
0x9f1: Push(-0, 1); TaskCall(10)
0x9f2: Call2 0x83a

0x9f3: Pop(-0, 1); TaskReturn
0x9f4: Pop(0)
0x9f5: GOTO 0x9fe

0x9f6: Push("lockpick")
0x9f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9f9: PushEmpty()
0x9fa: Push(-0, 2); TaskCall(12)
0x9fb: Call2 0x93b

0x9fc: Pop(-0, 2); TaskReturn
0x9fd: Pop(0)
0x9fe: Return(); Pop(0)

0x9ff: PushEmpty()
0xa00: Push("rifle")
0xa01: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa03: PushEmpty()
0xa04: Push(-0, 0); TaskCall(7)
0xa05: Call2 0x646

0xa06: Pop(-0, 0); TaskReturn
0xa07: Pop(0)
0xa08: GOTO 0xa1a

0xa09: Push("revolver")
0xa0a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0c: PushEmpty()
0xa0d: Push(-0, 0); TaskCall(9)
0xa0e: Call2 0x7b4

0xa0f: Pop(-0, 0); TaskReturn
0xa10: Pop(0)
0xa11: GOTO 0xa1a

0xa12: Push("samopal")
0xa13: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa14: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa15: PushEmpty()
0xa16: Push(-0, 0); TaskCall(11)
0xa17: Call2 0x922

0xa18: Pop(-0, 0); TaskReturn
0xa19: Pop(0)
0xa1a: Return(); Pop(0)

0xa1b: PushEmpty()
0xa1c: Push("empty")
0xa1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa1e: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa1f: PushEmpty(float)
0xa20: Stack[-1] = (float) 0.25
0xa21: Push(-1, 3); TaskCall(1)
0xa22: Call2 0x32

0xa23: Pop(-1, 3); TaskReturn
0xa24: Pop(1)
0xa25: Return(); Pop(0)

0xa26: PushEmpty(bool, int, int, string, float, bool, bool, bool, int, int, string, float, bool, bool)
0xa27: Push(GlobalVars[1])
0xa28: PushEmpty(object)
0xa29: Call2 0xbe2

0xa2a: Stack[-2] = Stack[-1]
0xa2b: Pop(1)
0xa2c: GlobalVars[1] = Stack[-1]; Pop(1)
0xa2d: Push(GlobalVars[2])
0xa2e: PushEmpty(object)
0xa2f: Call2 0xbe2

0xa30: Stack[-2] = Stack[-1]
0xa31: Pop(1)
0xa32: GlobalVars[2] = Stack[-1]; Pop(1)
0xa33: Push(GlobalVars[3])
0xa34: PushEmpty(object)
0xa35: Call2 0xbe2

0xa36: Stack[-2] = Stack[-1]
0xa37: Pop(1)
0xa38: GlobalVars[3] = Stack[-1]; Pop(1)
0xa39: Push("effects")
0xa3a: @ HasProperty(Stack[-1], Stack[-8])
0xa3b: Pop(1)
0xa3c: Pop(0); Push((bool) Stack[-7] == 0)
0xa3d: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa3e: Push("effects")
0xa3f: Push((bool) 1)
0xa40: @ SetProperty(Stack[-2], Stack[-1])
0xa41: Pop(2)
0xa42: Push("player_disease.bin")
0xa43: @ ApplyEffect(Stack[-1])
0xa44: Pop(1)
0xa45: Push("player_stat.bin")
0xa46: @ ApplyEffect(Stack[-1])
0xa47: Pop(1)
0xa48: Push("player_hit.bin")
0xa49: @ ApplyEffect(Stack[-1])
0xa4a: Pop(1)
0xa4b: Push("player_head.bin")
0xa4c: @ ApplyEffect(Stack[-1])
0xa4d: Pop(1)
0xa4e: Push("player_flashlight.bin")
0xa4f: @ ApplyEffect(Stack[-1])
0xa50: Pop(1)
0xa51: Push("player_visir.bin")
0xa52: @ ApplyEffect(Stack[-1])
0xa53: Pop(1)
0xa54: Push("player_vis.bin")
0xa55: @ ApplyEffect(Stack[-1])
0xa56: Pop(1)
0xa57: Push("player_eyes_height.bin")
0xa58: @ ApplyEffect(Stack[-1])
0xa59: Pop(1)
0xa5a: Push("player_gifts.bin")
0xa5b: @ ApplyEffect(Stack[-1])
0xa5c: Pop(1)
0xa5d: Push(Stack[-15])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa5f: @@ size(Stack[-6])
0xa60: Pop(0)
0xa61: Stack[-5] = (int) 0
0xa62: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0xa63: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa64: @@ get(Stack[-4], Stack[-5])
0xa65: Pop(0)
0xa66: @ ApplyEffect(Stack[-4])
0xa67: Pop(0)
0xa68: Push((int) 1)
0xa69: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa6a: GOTO 0xa62

0xa6b: PushEmpty()
0xa6c: Call2 0xb0d

0xa6d: Pop(0)
0xa6e: Push("health")
0xa6f: @ GetProperty(Stack[-1], Stack[-4])
0xa70: Pop(1)
0xa71: PushEmpty(bool)
0xa72: Stack[-1] = (bool) 0
0xa73: Push((int) 0)
0xa74: Pop(1); Push((bool) Stack[-5] <= Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa76: PushEmpty(bool)
0xa77: Call2 0xc61

0xa78: Pop(0)
0xa79: Pop(1); Push((bool) Stack[-1] == 0)
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7b: Stack[-1] = (bool) 1
0xa7c: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa7d: PushEmpty()
0xa7e: Call2 0xcd0

0xa7f: Pop(0)
0xa80: Return(); Pop(14)

0xa81: @ IsWeaponHolstered(Stack[-2])
0xa82: Pop(0)
0xa83: Pop(0); Push((bool) Stack[-2] == 0)
0xa84: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa85: @ IsWalking(Stack[-1])
0xa86: Pop(0)
0xa87: Push(Stack[-1])
0xa88: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa89: Push("walk")
0xa8a: @ PlayAnimation(Stack[-1])
0xa8b: Pop(1)
0xa8c: @ WaitForAnimEnd()
0xa8d: Pop(0)
0xa8e: GOTO 0xa92

0xa8f: Push((float)0.1)
0xa90: @ Sleep(Stack[-1])
0xa91: Pop(1)
0xa92: GOTO 0xa81

0xa93: Return(); Pop(14)

0xa94: PushEmpty(bool, string, bool, bool, string, bool)
0xa95: @ IsWeaponHolstered(Stack[-3])
0xa96: Pop(0)
0xa97: Pop(0); Push((bool) Stack[-3] == 0)
0xa98: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xa99: PushEmpty()
0xa9a: Call2 0xb11

0xa9b: Pop(0)
0xa9c: @ GetCurrentWeapon(Stack[-2])
0xa9d: Pop(0)
0xa9e: PushEmpty(string)
0xa9f: Stack[-1] = Stack[-3]
0xaa0: Call2 0x9bf

0xaa1: Pop(1)
0xaa2: PushEmpty()
0xaa3: Call2 0xb0d

0xaa4: Pop(0)
0xaa5: @ IsAltShooting(Stack[-1])
0xaa6: Pop(0)
0xaa7: Push(Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaa9: PushEmpty()
0xaaa: Call2 0xaad

0xaab: Pop(0)
0xaac: Return(); Pop(6)

0xaad: PushEmpty(bool, string, bool, bool, string, bool)
0xaae: @ IsWeaponHolstered(Stack[-3])
0xaaf: Pop(0)
0xab0: Pop(0); Push((bool) Stack[-3] == 0)
0xab1: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xab2: PushEmpty()
0xab3: Call2 0xb11

0xab4: Pop(0)
0xab5: @ GetCurrentWeapon(Stack[-2])
0xab6: Pop(0)
0xab7: PushEmpty(string)
0xab8: Stack[-1] = Stack[-3]
0xab9: Call2 0xa1b

0xaba: Pop(1)
0xabb: PushEmpty()
0xabc: Call2 0xb0d

0xabd: Pop(0)
0xabe: @ IsShooting(Stack[-1])
0xabf: Pop(0)
0xac0: Push(Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac2: PushEmpty()
0xac3: Call2 0xa94

0xac4: Pop(0)
0xac5: Return(); Pop(6)

0xac6: PushEmpty()
0xac7: Call2 0xb11

0xac8: Pop(0)
0xac9: PushEmpty()
0xaca: Push(-0, 0); TaskCall(0)
0xacb: Call2 0x0

0xacc: Pop(-0, 0); TaskReturn
0xacd: Pop(0)
0xace: PushEmpty()
0xacf: Call2 0xb0d

0xad0: Pop(0)
0xad1: Return(); Pop(0)

0xad2: PushEmpty(bool, int, bool, int, bool, int, bool, int)
0xad3: PushEmpty(bool, int)
0xad4: Stack[-1] = Stack[-11]
0xad5: Call2 0xd96

0xad6: Pop(1)
0xad7: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad8: Return(); Pop(8)

0xad9: PushEmpty()
0xada: Call2 0xb11

0xadb: Pop(0)
0xadc: @ IsWeaponHolstered(Stack[-4])
0xadd: Pop(0)
0xade: Pop(0); Push((bool) Stack[-4] == 0)
0xadf: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xae0: Stack[-3] = (int) 0
0xae1: Push("idle")
0xae2: Push((int) 1)
0xae3: Pop(1); Push(Stack[-5] + Stack[-1]);
0xae4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xae5: @ HasAnimation(Stack[-3], Stack[-1])
0xae6: Pop(1)
0xae7: Pop(0); Push((bool) Stack[-2] == 0)
0xae8: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae9: GOTO 0xaed

0xaea: Push((int) 1)
0xaeb: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xaec: GOTO 0xae1

0xaed: Push(Stack[-3])
0xaee: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaef: @ irand(Stack[-1], Stack[-3])
0xaf0: Pop(0)
0xaf1: Push("idle")
0xaf2: Push((int) 1)
0xaf3: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaf4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf5: @ PlayAnimation(Stack[-1])
0xaf6: Pop(1)
0xaf7: @ WaitForAnimEnd()
0xaf8: Pop(0)
0xaf9: PushEmpty()
0xafa: Call2 0xb0d

0xafb: Pop(0)
0xafc: Return(); Pop(8)

0xafd: PushEmpty(string, string)
0xafe: Push((int) 11)
0xaff: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xb01: @ GetCurrentWeapon(Stack[-1])
0xb02: Pop(0)
0xb03: PushEmpty(string)
0xb04: Stack[-1] = Stack[-2]
0xb05: Call2 0x9ff

0xb06: Pop(1)
0xb07: GOTO 0xb0c

0xb08: PushEmpty(int)
0xb09: Stack[-1] = Stack[-4]
0xb0a: Call2 0xe63

0xb0b: Pop(1)
0xb0c: Return(); Pop(2)

0xb0d: PushEmpty()
0xb0e: Call2 0xf15

0xb0f: Pop(0)
0xb10: Return(); Pop(0)

0xb11: Push((int) 0)
0xb12: @ KillTimer(Stack[-1])
0xb13: Pop(1)
0xb14: Return(); Pop(0)

0xb15: PushEmpty()
0xb16: Push((int) 2)
0xb17: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb18: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb19: Stack[-2] = "fire"
0xb1a: Return(); Pop(0)

0xb1b: GOTO 0xb21

0xb1c: Push((int) 1)
0xb1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1e: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1f: Stack[-2] = "bullet"
0xb20: Return(); Pop(0)

0xb21: Stack[-2] = "phys"
0xb22: Return(); Pop(0)

0xb23: PushEmpty(bool, bool)
0xb24: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb25: Pop(0)
0xb26: Stack[-4] = Stack[-1]
0xb27: Return(); Pop(2)

0xb28: PushEmpty(bool, bool)
0xb29: Push("HasProperty")
0xb2a: Push((int) 2)
0xb2b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb2c: Pop(1); Push((bool) Stack[-1] == 0)
0xb2d: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2e: Stack[-5] = (bool) 0
0xb2f: Return(); Pop(2)

0xb30: @@ HasProperty(Stack[-3], Stack[-1])
0xb31: Pop(0)
0xb32: Stack[-5] = Stack[-1]
0xb33: Return(); Pop(2)

0xb34: PushEmpty(float, float)
0xb35: @ GetProperty(Stack[-4], Stack[-1])
0xb36: Pop(0)
0xb37: Pop(0); Push(Stack[-1] + Stack[-3]);
0xb38: @ SetProperty(Stack[-5], Stack[-1])
0xb39: Pop(1)
0xb3a: Return(); Pop(2)

0xb3b: PushEmpty(float, float)
0xb3c: PushEmpty(bool, object, string)
0xb3d: Stack[-2] = Stack[-10]
0xb3e: Stack[-1] = Stack[-9]
0xb3f: Call2 0xb28

0xb40: Pop(2)
0xb41: Pop(1); Push((bool) Stack[-1] == 0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb43: Stack[-8] = (bool) 0
0xb44: Return(); Pop(2)

0xb45: @@ GetProperty(Stack[-6], Stack[-1])
0xb46: Pop(0)
0xb47: PushEmpty(float, float, float, float)
0xb48: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xb49: Stack[-2] = Stack[-8]
0xb4a: Stack[-1] = Stack[-7]
0xb4b: Call2 0xbcc

0xb4c: Pop(3)
0xb4d: @@ SetProperty(Stack[-7], Stack[-1])
0xb4e: Pop(1)
0xb4f: Stack[-8] = (bool) 1
0xb50: Return(); Pop(2)

0xb51: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xb52: PushEmpty(bool, object, string)
0xb53: Stack[-2] = Stack[-18]
0xb54: Stack[-1] = "health"
0xb55: Call2 0xb28

0xb56: Pop(2)
0xb57: Pop(1); Push((bool) Stack[-1] == 0)
0xb58: IF (Stack[-1] == 0) GOTO 0xb5b; Pop(1)

0xb59: Stack[-16] = (float) 0.0
0xb5a: Return(); Pop(12)

0xb5b: PushEmpty(bool, object, string)
0xb5c: Stack[-2] = Stack[-18]
0xb5d: Stack[-1] = "armor"
0xb5e: Call2 0xb28

0xb5f: Pop(2)
0xb60: Pop(1); Push((bool) Stack[-1] == 0)
0xb61: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb62: Stack[-6] = (int) 0
0xb63: GOTO 0xb67

0xb64: Push("armor")
0xb65: @@ GetProperty(Stack[-1], Stack[-7])
0xb66: Pop(1)
0xb67: Push("armor_")
0xb68: PushEmpty(string, int)
0xb69: Stack[-1] = Stack[-16]
0xb6a: Call2 0xb15

0xb6b: Pop(1)
0xb6c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xb6d: PushEmpty(bool, object, string)
0xb6e: Stack[-2] = Stack[-18]
0xb6f: Stack[-1] = Stack[-8]
0xb70: Call2 0xb28

0xb71: Pop(2)
0xb72: Pop(1); Push((bool) Stack[-1] == 0)
0xb73: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb74: Stack[-4] = (int) 0
0xb75: GOTO 0xb78

0xb76: @@ GetProperty(Stack[-5], Stack[-4])
0xb77: Pop(0)
0xb78: PushEmpty(float, float, float)
0xb79: Pop(0); Push(Stack[-9] + Stack[-7]);
0xb7a: Push((float)100.0)
0xb7b: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xb7c: Stack[-1] = (int) 1
0xb7d: Call2 0xbc5

0xb7e: Stack[-6] = Stack[-3]
0xb7f: Pop(3)
0xb80: Push("health")
0xb81: @@ GetProperty(Stack[-1], Stack[-3])
0xb82: Pop(1)
0xb83: Push((int) 1)
0xb84: Pop(1); Push(Stack[-1] - Stack[-4]);
0xb85: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xb86: Push("health")
0xb87: PushEmpty(float, float, float, float)
0xb88: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xb89: Stack[-2] = (int) 0
0xb8a: Stack[-1] = (int) 1
0xb8b: Call2 0xbcc

0xb8c: Pop(3)
0xb8d: @@ SetProperty(Stack[-2], Stack[-1])
0xb8e: Pop(2)
0xb8f: PushEmpty(bool, object)
0xb90: Stack[-1] = Stack[-17]
0xb91: Call2 0xb23

0xb92: Pop(1)
0xb93: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb94: PushEmpty(float)
0xb95: Stack[-1] = -Stack[-2]; Pop(0);
0xb96: Call2 0xc35

0xb97: Pop(1)
0xb98: Stack[-16] = Stack[-1]
0xb99: Return(); Pop(12)

0xb9a: PushEmpty(bool, bool)
0xb9b: @@ IsDead(Stack[-1])
0xb9c: Pop(0)
0xb9d: Stack[-4] = Stack[-1]
0xb9e: Return(); Pop(2)

0xb9f: PushEmpty()
0xba0: Push((int) 1)
0xba1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xba3: Stack[-2] = "wood"
0xba4: Return(); Pop(0)

0xba5: GOTO 0xbbd

0xba6: Push((int) 2)
0xba7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba8: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xba9: Stack[-2] = "metal"
0xbaa: Return(); Pop(0)

0xbab: GOTO 0xbbd

0xbac: Push((int) 3)
0xbad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbae: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbaf: Stack[-2] = "ground"
0xbb0: Return(); Pop(0)

0xbb1: GOTO 0xbbd

0xbb2: Push((int) 4)
0xbb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb5: Stack[-2] = "water"
0xbb6: Return(); Pop(0)

0xbb7: GOTO 0xbbd

0xbb8: Push((int) 5)
0xbb9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbba: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbbb: Stack[-2] = "carpet"
0xbbc: Return(); Pop(0)

0xbbd: Stack[-2] = "stone"
0xbbe: Return(); Pop(0)

0xbbf: PushEmpty(object, object)
0xbc0: @ self(Stack[-1])
0xbc1: Pop(0)
0xbc2: Stack[-3] = Stack[-1]
0xbc3: Return(); Pop(2)

0xbc4: Stack[-1] = 0
0xbc5: PushEmpty()
0xbc6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xbc7: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc8: Stack[-3] = Stack[-2]
0xbc9: GOTO 0xbcb

0xbca: Stack[-3] = Stack[-1]
0xbcb: Return(); Pop(0)

0xbcc: PushEmpty()
0xbcd: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xbce: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbcf: Stack[-4] = Stack[-2]
0xbd0: Return(); Pop(0)

0xbd1: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbd3: Stack[-4] = Stack[-1]
0xbd4: Return(); Pop(0)

0xbd5: Stack[-4] = Stack[-3]
0xbd6: Return(); Pop(0)

0xbd7: PushEmpty()
0xbd8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xbd9: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbda: Stack[-4] = Stack[-2]
0xbdb: Return(); Pop(0)

0xbdc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbdd: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbde: Stack[-4] = Stack[-1]
0xbdf: Return(); Pop(0)

0xbe0: Stack[-4] = Stack[-3]
0xbe1: Return(); Pop(0)

0xbe2: PushEmpty(object, object)
0xbe3: @ CreateObjectSet(Stack[-1])
0xbe4: Pop(0)
0xbe5: Stack[-3] = Stack[-1]
0xbe6: Return(); Pop(2)

0xbe7: Stack[-1] = 0
0xbe8: PushEmpty(object, object)
0xbe9: @ CreateObjectVector(Stack[-1])
0xbea: Pop(0)
0xbeb: Stack[-3] = Stack[-1]
0xbec: Return(); Pop(2)

0xbed: Stack[-1] = 0
0xbee: PushEmpty()
0xbef: Push(CvectorIndex(Stack[-2], 0))
0xbf0: Push(CvectorIndex(Stack[-2], 0))
0xbf1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbf2: Push(CvectorIndex(Stack[-3], 2))
0xbf3: Push(CvectorIndex(Stack[-3], 2))
0xbf4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbf5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbf6: Return(); Pop(0)

0xbf7: PushEmpty()
0xbf8: Push(CvectorIndex(Stack[-1], 0))
0xbf9: Push(CvectorIndex(Stack[-2], 0))
0xbfa: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbfb: Push(CvectorIndex(Stack[-2], 2))
0xbfc: Push(CvectorIndex(Stack[-3], 2))
0xbfd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbfe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbff: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xc00: Return(); Pop(0)

0xc01: PushEmpty()
0xc02: PushEmpty(float, cvector, cvector)
0xc03: Stack[-2] = Stack[-5]
0xc04: Stack[-1] = Stack[-4]
0xc05: Call2 0xbee

0xc06: Pop(2)
0xc07: PushEmpty(float, cvector)
0xc08: Stack[-1] = Stack[-5]
0xc09: Call2 0xbf7

0xc0a: Pop(1)
0xc0b: PushEmpty(float, cvector)
0xc0c: Stack[-1] = Stack[-5]
0xc0d: Call2 0xbf7

0xc0e: Pop(1)
0xc0f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc10: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xc11: Return(); Pop(0)

0xc12: PushEmpty()
0xc13: Pop(0); Push((bool) Stack[-2] == 0)
0xc14: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc15: Stack[-3] = (bool) 0
0xc16: Return(); Pop(0)

0xc17: Push((int) 0)
0xc18: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc19: IF (Stack[-1] == 0) GOTO 0xc1e; Pop(1)

0xc1a: Push((int) 8)
0xc1b: @ SendWorldWndMessage(Stack[-1])
0xc1c: Pop(1)
0xc1d: GOTO 0xc27

0xc1e: Push((int) 0)
0xc1f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc20: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc21: Push((int) 9)
0xc22: @ SendWorldWndMessage(Stack[-1])
0xc23: Pop(1)
0xc24: GOTO 0xc27

0xc25: Stack[-3] = (bool) 0
0xc26: Return(); Pop(0)

0xc27: PushEmpty(float)
0xc28: Stack[-1] = Stack[-2]
0xc29: Call2 0xc46

0xc2a: Pop(1)
0xc2b: PushEmpty(bool, object, string, float, float, float)
0xc2c: Stack[-5] = Stack[-8]
0xc2d: Stack[-4] = "reputation"
0xc2e: Stack[-3] = Stack[-7]
0xc2f: Stack[-2] = (int) 0
0xc30: Stack[-1] = (int) 1
0xc31: Call2 0xb3b

0xc32: Pop(6)
0xc33: Stack[-3] = (bool) 1
0xc34: Return(); Pop(0)

0xc35: PushEmpty(object, object)
0xc36: @ CreateFloatVector(Stack[-1])
0xc37: Pop(0)
0xc38: @@ add(Stack[-3])
0xc39: Pop(0)
0xc3a: Push((int) 0)
0xc3b: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xc3c: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc3d: Push((float)0.7)
0xc3e: Push((int) 500)
0xc3f: @ RumblePlay(Stack[-2], Stack[-1])
0xc40: Pop(2)
0xc41: Push((int) 15)
0xc42: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc43: Pop(1)
0xc44: Return(); Pop(2)

0xc45: Stack[-1] = 0
0xc46: PushEmpty(object, object)
0xc47: @ CreateFloatVector(Stack[-1])
0xc48: Pop(0)
0xc49: @@ add(Stack[-3])
0xc4a: Pop(0)
0xc4b: Push((int) 16)
0xc4c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc4d: Pop(1)
0xc4e: Return(); Pop(2)

0xc4f: Stack[-1] = 0
0xc50: PushEmpty(float, float)
0xc51: @ GetGameTime(Stack[-1])
0xc52: Pop(0)
0xc53: Push((int) 1)
0xc54: PushEmpty(int)
0xc55: Push((int) 24)
0xc56: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc57: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc58: Return(); Pop(2)

0xc59: PushEmpty(bool, bool)
0xc5a: @ IsExistingSound(Stack[-1], Stack[-3])
0xc5b: Pop(0)
0xc5c: Push(Stack[-1])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc60; Pop(1)

0xc5e: @ PlaySound(Stack[-3])
0xc5f: Pop(0)
0xc60: Return(); Pop(2)

0xc61: PushEmpty(bool, bool)
0xc62: Push("god_mode")
0xc63: @ GetVariable(Stack[-1], Stack[-2])
0xc64: Pop(1)
0xc65: Stack[-3] = Stack[-1]
0xc66: Return(); Pop(2)

0xc67: PushEmpty(object, object)
0xc68: Stack[-1] = 0
0xc69: Stack[-3] = Stack[-1]
0xc6a: Return(); Pop(2)

0xc6b: Stack[-1] = 0
0xc6c: PushEmpty(int, int)
0xc6d: Push("kerosene")
0xc6e: @ GetItemCountOfType(Stack[-2], Stack[-1])
0xc6f: Pop(1)
0xc70: Stack[-3] = Stack[-1]
0xc71: Return(); Pop(2)

0xc72: PushEmpty(int, int)
0xc73: Push("branch")
0xc74: @ GetVariable(Stack[-1], Stack[-2])
0xc75: Pop(1)
0xc76: Stack[-3] = Stack[-1]
0xc77: Return(); Pop(2)

0xc78: PushEmpty()
0xc79: Push((int) 10)
0xc7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7b: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc7c: PushEmpty()
0xc7d: Call2 0xd24

0xc7e: Pop(0)
0xc7f: Stack[-2] = (bool) 1
0xc80: Return(); Pop(0)

0xc81: GOTO 0xc93

0xc82: Push((int) 11)
0xc83: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc84: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc85: PushEmpty()
0xc86: Call2 0xd2c

0xc87: Pop(0)
0xc88: Stack[-2] = (bool) 1
0xc89: Return(); Pop(0)

0xc8a: GOTO 0xc93

0xc8b: Push((int) 12)
0xc8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8d: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc8e: PushEmpty()
0xc8f: Call2 0xd28

0xc90: Pop(0)
0xc91: Stack[-2] = (bool) 1
0xc92: Return(); Pop(0)

0xc93: Stack[-2] = (bool) 0
0xc94: Return(); Pop(0)

0xc95: PushEmpty(bool, int, string, int, bool, int, string, string, bool, int, string, int, bool, int, string, string)
0xc96: @ GetGroundMaterial(Stack[-8], Stack[-7])
0xc97: Pop(0)
0xc98: Pop(0); Push((bool) Stack[-8] == 0)
0xc99: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc9a: Stack[-7] = (int) -1
0xc9b: PushEmpty(string, int)
0xc9c: Stack[-1] = Stack[-9]
0xc9d: Call2 0xb9f

0xc9e: Stack[-8] = Stack[-2]
0xc9f: Pop(2)
0xca0: Stack[-5] = (int) 0
0xca1: Push("step_")
0xca2: Pop(1); Push(Stack[-1] + Stack[-7]);
0xca3: Push((int) 1)
0xca4: Pop(1); Push(Stack[-7] + Stack[-1]);
0xca5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xca6: @ IsExistingSound(Stack[-5], Stack[-1])
0xca7: Pop(1)
0xca8: Pop(0); Push((bool) Stack[-4] == 0)
0xca9: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xcaa: GOTO 0xcae

0xcab: Push((int) 1)
0xcac: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xcad: GOTO 0xca1

0xcae: Pop(0); Push((bool) Stack[-5] == 0)
0xcaf: IF (Stack[-1] == 0) GOTO 0xcb4; Pop(1)

0xcb0: Push(GlobalVars[0])
0xcb1: Stack[-1] = ""
0xcb2: GlobalVars[0] = Stack[-1]; Pop(1)
0xcb3: Return(); Pop(16)

0xcb4: Push((int) 1)
0xcb5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcb6: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb7: Stack[-3] = (int) 0
0xcb8: GOTO 0xcc5

0xcb9: @ irand(Stack[-3], Stack[-5])
0xcba: Pop(0)
0xcbb: Push("step_")
0xcbc: Pop(1); Push(Stack[-1] + Stack[-7]);
0xcbd: Push((int) 1)
0xcbe: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcbf: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xcc0: Push(GlobalVars[0])
0xcc1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xcc2: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc3: GOTO 0xcc5

0xcc4: GOTO 0xcb9

0xcc5: Push("step_")
0xcc6: Pop(1); Push(Stack[-1] + Stack[-7]);
0xcc7: Push((int) 1)
0xcc8: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcc9: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xcca: @ PlaySound(Stack[-1])
0xccb: Pop(0)
0xccc: Push(GlobalVars[0])
0xccd: Stack[-1] = Stack[-2]
0xcce: GlobalVars[0] = Stack[-1]; Pop(1)
0xccf: Return(); Pop(16)

0xcd0: PushEmpty(object, object, object, object)
0xcd1: PushEmpty(int)
0xcd2: Call2 0xc50

0xcd3: Pop(0)
0xcd4: Push((int) 12)
0xcd5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcd6: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd7: Push("ACHIEVEMENT_MIGHT")
0xcd8: @ UnlockAchievement(Stack[-1])
0xcd9: Pop(1)
0xcda: @ GetMainOutdoorScene(Stack[-2])
0xcdb: Pop(0)
0xcdc: Push("player_death")
0xcdd: Push("play_death_burah.bin")
0xcde: @ AddBlankActor(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0xcdf: Pop(2)
0xce0: @ SetDeathState()
0xce1: Pop(0)
0xce2: Return(); Pop(4)

0xce3: Stack[-1] = 0
0xce4: Stack[-2] = 0
0xce5: PushEmpty(bool, bool)
0xce6: Push((int) 11)
0xce7: @ KillTimer(Stack[-1], Stack[-2])
0xce8: Pop(1)
0xce9: Push(Stack[-1])
0xcea: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xceb: Push((int) -3)
0xcec: @ ModNoise(Stack[-1])
0xced: Pop(1)
0xcee: Return(); Pop(2)

0xcef: PushEmpty()
0xcf0: Call2 0xce5

0xcf1: Pop(0)
0xcf2: Push((int) 11)
0xcf3: Push((float)0.15)
0xcf4: @ SetTimer(Stack[-2], Stack[-1])
0xcf5: Pop(2)
0xcf6: Push((int) 3)
0xcf7: @ ModNoise(Stack[-1])
0xcf8: Pop(1)
0xcf9: Return(); Pop(0)

0xcfa: PushEmpty(bool, bool)
0xcfb: Push((int) 10)
0xcfc: @ KillTimer(Stack[-1], Stack[-2])
0xcfd: Pop(1)
0xcfe: Push(Stack[-1])
0xcff: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xd00: Push((int) -2)
0xd01: @ ModNoise(Stack[-1])
0xd02: Pop(1)
0xd03: Return(); Pop(2)

0xd04: PushEmpty(bool, bool)
0xd05: Push((int) 12)
0xd06: @ KillTimer(Stack[-1], Stack[-2])
0xd07: Pop(1)
0xd08: Push(Stack[-1])
0xd09: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd0a: Push((int) -1)
0xd0b: @ ModNoise(Stack[-1])
0xd0c: Pop(1)
0xd0d: Return(); Pop(2)

0xd0e: PushEmpty()
0xd0f: Call2 0xcfa

0xd10: Pop(0)
0xd11: Push((int) 10)
0xd12: Push((float)0.35)
0xd13: @ SetTimer(Stack[-2], Stack[-1])
0xd14: Pop(2)
0xd15: Push((int) 2)
0xd16: @ ModNoise(Stack[-1])
0xd17: Pop(1)
0xd18: Return(); Pop(0)

0xd19: PushEmpty()
0xd1a: Call2 0xd04

0xd1b: Pop(0)
0xd1c: Push((int) 12)
0xd1d: Push((float)0.6)
0xd1e: @ SetTimer(Stack[-2], Stack[-1])
0xd1f: Pop(2)
0xd20: Push((int) 1)
0xd21: @ ModNoise(Stack[-1])
0xd22: Pop(1)
0xd23: Return(); Pop(0)

0xd24: PushEmpty()
0xd25: Call2 0xc95

0xd26: Pop(0)
0xd27: Return(); Pop(0)

0xd28: PushEmpty()
0xd29: Call2 0xc95

0xd2a: Pop(0)
0xd2b: Return(); Pop(0)

0xd2c: PushEmpty()
0xd2d: Call2 0xc95

0xd2e: Pop(0)
0xd2f: PushEmpty()
0xd30: Call2 0xce5

0xd31: Pop(0)
0xd32: Return(); Pop(0)

0xd33: PushEmpty()
0xd34: Call2 0xd19

0xd35: Pop(0)
0xd36: PushEmpty()
0xd37: Call2 0xce5

0xd38: Pop(0)
0xd39: Return(); Pop(0)

0xd3a: PushEmpty()
0xd3b: Call2 0xd0e

0xd3c: Pop(0)
0xd3d: PushEmpty()
0xd3e: Call2 0xce5

0xd3f: Pop(0)
0xd40: Return(); Pop(0)

0xd41: PushEmpty()
0xd42: Call2 0xcfa

0xd43: Pop(0)
0xd44: PushEmpty()
0xd45: Call2 0xcef

0xd46: Pop(0)
0xd47: Return(); Pop(0)

0xd48: PushEmpty()
0xd49: Call2 0xd04

0xd4a: Pop(0)
0xd4b: Return(); Pop(0)

0xd4c: PushEmpty(bool, int, int, bool, bool, int, int, bool)
0xd4d: Push("ammo")
0xd4e: @ GetWeaponProperty(Stack[-5], Stack[-1], Stack[-4])
0xd4f: Pop(1)
0xd50: PushEmpty(bool)
0xd51: Stack[-1] = (bool) 0
0xd52: Push(Stack[-5])
0xd53: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd54: Pop(0); Push((bool) Stack[-4] >= Stack[-10])
0xd55: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd56: Stack[-1] = (bool) 1
0xd57: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd58: Stack[-11] = (bool) 0
0xd59: Return(); Pop(8)

0xd5a: @ GetInvItemByName(Stack[-2], Stack[-10])
0xd5b: Pop(0)
0xd5c: Pop(0); Push((bool) Stack[-3] < Stack[-9])
0xd5d: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd5e: Push((int) 1)
0xd5f: @ RemoveItemByType(Stack[-2], Stack[-3], Stack[-1])
0xd60: Pop(1)
0xd61: Pop(0); Push((bool) Stack[-1] == 0)
0xd62: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd63: GOTO 0xd67

0xd64: Push((int) 1)
0xd65: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xd66: GOTO 0xd5c

0xd67: Pop(0); Push((bool) Stack[-3] == 0)
0xd68: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd69: Stack[-11] = (bool) 0
0xd6a: Return(); Pop(8)

0xd6b: Push("ammo")
0xd6c: @ SetWeaponProperty(Stack[-5], Stack[-1], Stack[-4])
0xd6d: Pop(1)
0xd6e: Stack[-11] = (bool) 1
0xd6f: Return(); Pop(8)

0xd70: PushEmpty(bool, int, bool, int)
0xd71: Push("durability")
0xd72: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0xd73: Pop(1)
0xd74: Push(Stack[-2])
0xd75: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd76: Push((float)100.0)
0xd77: Stack[-6] = Stack[-2] / Stack[-1]; Pop(1);
0xd78: GOTO 0xd7a

0xd79: Stack[-5] = (float) 1.0
0xd7a: Return(); Pop(4)

0xd7b: PushEmpty(bool, int, bool, int)
0xd7c: Push("durability")
0xd7d: @ GetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0xd7e: Pop(1)
0xd7f: Pop(0); Push((bool) Stack[-2] == 0)
0xd80: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd81: Stack[-1] = (int) 100
0xd82: PushEmpty(int, int, int, int)
0xd83: Stack[-3] = Stack[-5] - Stack[-9]; Pop(0);
0xd84: Stack[-2] = (int) 0
0xd85: Stack[-1] = (int) 100
0xd86: Call2 0xbd7

0xd87: Stack[-5] = Stack[-4]
0xd88: Pop(4)
0xd89: Push("durability")
0xd8a: @ SetWeaponProperty(Stack[-3], Stack[-1], Stack[-2])
0xd8b: Pop(1)
0xd8c: Return(); Pop(4)

0xd8d: PushEmpty()
0xd8e: PushEmpty(float)
0xd8f: Call2 0xd70

0xd90: Pop(0)
0xd91: Push((int) 1)
0xd92: Pop(1); Push(Stack[-1] - Stack[-3]);
0xd93: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd94: Stack[-3] = Stack[-2] + Stack[-1]; Pop(1);
0xd95: Return(); Pop(0)

0xd96: PushEmpty(int, int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, int, bool, bool, int, object, int, bool, bool)
0xd97: PushEmpty(int)
0xd98: Call2 0xc72

0xd99: Pop(0)
0xd9a: Push((int) 0)
0xd9b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd9c: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xd9d: Stack[-11] = (int) 0
0xd9e: Push("birdMaskAchievement")
0xd9f: @ GetVariable(Stack[-1], Stack[-12])
0xda0: Pop(1)
0xda1: Push((int) 0)
0xda2: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xda3: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xda4: Push((int) 1)
0xda5: @ GetItemCount(Stack[-11], Stack[-1])
0xda6: Pop(1)
0xda7: Push("bird_mask")
0xda8: @ GetInvItemByName(Stack[-10], Stack[-1])
0xda9: Pop(1)
0xdaa: Push("bird_balahon")
0xdab: @ GetInvItemByName(Stack[-9], Stack[-1])
0xdac: Pop(1)
0xdad: Stack[-7] = (bool) 0
0xdae: Stack[-6] = (bool) 0
0xdaf: Stack[-5] = (int) 0
0xdb0: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdcc; Pop(1)

0xdb2: Push((int) 1)
0xdb3: @ GetItem(Stack[-5], Stack[-6], Stack[-1])
0xdb4: Pop(1)
0xdb5: @@ GetItemID(Stack[-3])
0xdb6: Pop(0)
0xdb7: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0xdb8: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdb9: Push((int) 1)
0xdba: @ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0xdbb: Pop(1)
0xdbc: Push(Stack[-2])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdbe: Stack[-7] = (bool) 1
0xdbf: GOTO 0xdc8

0xdc0: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0xdc1: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdc2: Push((int) 1)
0xdc3: @ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0xdc4: Pop(1)
0xdc5: Push(Stack[-1])
0xdc6: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdc7: Stack[-6] = (bool) 1
0xdc8: Stack[-4] = 0
0xdc9: Push((int) 1)
0xdca: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xdcb: GOTO 0xdb0

0xdcc: PushEmpty(bool)
0xdcd: Stack[-1] = (bool) 0
0xdce: Push(Stack[-8])
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd0: Push(Stack[-7])
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd2: Stack[-1] = (bool) 1
0xdd3: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdd4: Push("birdMaskAchievement")
0xdd5: Push((int) 1)
0xdd6: @ SetVariable(Stack[-2], Stack[-1])
0xdd7: Pop(2)
0xdd8: Push("ACHIEVEMENT_THEY")
0xdd9: @ UnlockAchievement(Stack[-1])
0xdda: Pop(1)
0xddb: PushEmpty(bool, int)
0xddc: Stack[-1] = Stack[-25]
0xddd: Call2 0xc78

0xdde: Stack[-26] = Stack[-2]
0xddf: Pop(2)
0xde0: Return(); Pop(22)

0xde1: PushEmpty()
0xde2: PushEmpty(bool, int)
0xde3: Stack[-1] = Stack[-3]
0xde4: Call2 0xd96

0xde5: Pop(2)
0xde6: Return(); Pop(0)

0xde7: PushEmpty()
0xde8: Push("die")
0xde9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdea: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdeb: PushEmpty()
0xdec: Call2 0xcd0

0xded: Pop(0)
0xdee: Return(); Pop(0)

0xdef: PushEmpty(float, object, object, float, object, object)
0xdf0: Push("health")
0xdf1: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xdf2: IF (Stack[-1] == 0) GOTO 0xdfc; Pop(1)

0xdf3: Push("health")
0xdf4: @ GetProperty(Stack[-1], Stack[-4])
0xdf5: Pop(1)
0xdf6: Push((float)0.001)
0xdf7: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xdf9: @ SignalDeath(Stack[-8])
0xdfa: Pop(0)
0xdfb: GOTO 0xe08

0xdfc: Push("reputation")
0xdfd: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xdfe: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xdff: @ GetScene(Stack[-2])
0xe00: Pop(0)
0xe01: Push("prc")
0xe02: PushEmpty(object)
0xe03: Call2 0xbbf

0xe04: Pop(0)
0xe05: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-4])
0xe06: Pop(2)
0xe07: Stack[-2] = 0
0xe08: @ CreateStringVector(Stack[-1])
0xe09: Pop(0)
0xe0a: @@ add(Stack[-7])
0xe0b: Pop(0)
0xe0c: Push((int) 10)
0xe0d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xe0e: Pop(1)
0xe0f: Return(); Pop(6)

0xe10: Stack[-1] = 0
0xe11: PushEmpty()
0xe12: PushEmpty(bool)
0xe13: Call2 0xc61

0xe14: Pop(0)
0xe15: Pop(1); Push((bool) Stack[-1] == 0)
0xe16: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe17: PushEmpty()
0xe18: Call2 0xcd0

0xe19: Pop(0)
0xe1a: Return(); Pop(0)

0xe1b: PushEmpty(bool, bool)
0xe1c: Pop(0); Push((bool) Stack[-5] == 0)
0xe1d: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1e: Return(); Pop(2)

0xe1f: Push(GlobalVars[2])
0xe20: @@ in(Stack[-2], Stack[-6])
0xe21: Pop(1)
0xe22: Push(Stack[-1])
0xe23: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe24: Push("Reputation is not changed for enemy: ")
0xe25: Pop(1); Push(Stack[-1] + Stack[-6]);
0xe26: @ Trace(Stack[-1])
0xe27: Pop(1)
0xe28: Return(); Pop(2)

0xe29: Pop(0); Push((bool) Stack[-3] == 0)
0xe2a: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2b: Push(GlobalVars[1])
0xe2c: @@ in(Stack[-2], Stack[-6])
0xe2d: Pop(1)
0xe2e: Push(Stack[-1])
0xe2f: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe30: Return(); Pop(2)

0xe31: Push(GlobalVars[1])
0xe32: @@ add(Stack[-6])
0xe33: Pop(1)
0xe34: PushEmpty(bool, object, float)
0xe35: PushEmpty(object)
0xe36: Call2 0xbbf

0xe37: Stack[-3] = Stack[-1]
0xe38: Pop(1)
0xe39: Stack[-1] = Stack[-7]
0xe3a: Call2 0xc12

0xe3b: Pop(3)
0xe3c: Return(); Pop(2)

0xe3d: PushEmpty()
0xe3e: Call2 0xf15

0xe3f: Pop(0)
0xe40: PushEmpty()
0xe41: Call2 0xcef

0xe42: Pop(0)
0xe43: Return(); Pop(0)

0xe44: PushEmpty()
0xe45: Return(); Pop(0)

0xe46: PushEmpty(float, float, float, float)
0xe47: Push((float)770.0)
0xe48: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0xe49: IF (Stack[-1] == 0) GOTO 0xe62; Pop(1)

0xe4a: @ Trace(Stack[-5])
0xe4b: Pop(0)
0xe4c: Push((float)770.0)
0xe4d: Pop(1); Push(Stack[-6] - Stack[-1]);
0xe4e: Push((float)0.0035)
0xe4f: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0xe50: PushEmpty(float, object, float, int)
0xe51: PushEmpty(object)
0xe52: Call2 0xbbf

0xe53: Stack[-4] = Stack[-1]
0xe54: Pop(1)
0xe55: Stack[-2] = Stack[-6]
0xe56: Stack[-1] = (int) 0
0xe57: Call2 0xb51

0xe58: Stack[-5] = Stack[-4]
0xe59: Pop(4)
0xe5a: PushEmpty(object)
0xe5b: Call2 0xbbf

0xe5c: Pop(0)
0xe5d: Push((int) 0)
0xe5e: Push(CVector(0.0, 0.0, 0.0))
0xe5f: Push(CVector(0.0, 0.0, 0.0))
0xe60: @ ReportHit(Stack[-4], Stack[-3], Stack[-5], Stack[-6], Stack[-2], Stack[-1])
0xe61: Pop(4)
0xe62: Return(); Pop(4)

0xe63: PushEmpty(object, object, object, cvector, string, bool, cvector, int, bool, bool, int, int, bool, int, object, object, object, cvector, string, bool, cvector, int, bool, bool, int, int, bool, int)
0xe64: Push((int) 0)
0xe65: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xe66: IF (Stack[-1] == 0) GOTO 0xe6a; Pop(1)

0xe67: @ Inventory()
0xe68: Pop(0)
0xe69: GOTO 0xf14

0xe6a: Push((int) 1)
0xe6b: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xe6c: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe6d: @ GetMainOutdoorScene(Stack[-14])
0xe6e: Pop(0)
0xe6f: @ GetActiveScene(Stack[-13])
0xe70: Pop(0)
0xe71: Pop(0); Push((bool) Stack[-14] == 0)
0xe72: IF (Stack[-1] == 0) GOTO 0xe77; Pop(1)

0xe73: Push("Can't find main outdoor oscene")
0xe74: @ Trace(Stack[-1])
0xe75: Pop(1)
0xe76: Return(); Pop(28)

0xe77: @@ GetMap(Stack[-12])
0xe78: Pop(0)
0xe79: Pop(0); Push((bool) Stack[-12] == 0)
0xe7a: IF (Stack[-1] == 0) GOTO 0xe7f; Pop(1)

0xe7b: Push("Can't find map")
0xe7c: @ Trace(Stack[-1])
0xe7d: Pop(1)
0xe7e: Return(); Pop(28)

0xe7f: Pop(0); Push((bool) Stack[-14] == Stack[-13])
0xe80: IF (Stack[-1] == 0) GOTO 0xe84; Pop(1)

0xe81: @ GetPosition(Stack[-11])
0xe82: Pop(0)
0xe83: GOTO 0xe91

0xe84: @@ GetName(Stack[-10])
0xe85: Pop(0)
0xe86: Push("pt_gmap_")
0xe87: Pop(1); Push(Stack[-1] + Stack[-11]);
0xe88: @@ GetLocator(Stack[-1], Stack[-10], Stack[-12], Stack[-9])
0xe89: Pop(1)
0xe8a: Pop(0); Push((bool) Stack[-9] == 0)
0xe8b: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe8c: Push("FIXME: No map locator for scene : ")
0xe8d: Pop(1); Push(Stack[-1] + Stack[-11]);
0xe8e: @ Trace(Stack[-1])
0xe8f: Pop(1)
0xe90: Stack[-11] = CVector(0.0, 0.0, 0.0)
0xe91: Push(CvectorIndex(Stack[-11], 0))
0xe92: Push(CvectorIndex(Stack[-12], 2))
0xe93: @@ SetMapParams(Stack[-2], Stack[-1])
0xe94: Pop(2)
0xe95: @ ShowMap(Stack[-12])
0xe96: Pop(0)
0xe97: Stack[-12] = 0
0xe98: Stack[-13] = 0
0xe99: Stack[-14] = 0
0xe9a: GOTO 0xf14

0xe9b: Push((int) 2)
0xe9c: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xe9d: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe9e: @ Diary()
0xe9f: Pop(0)
0xea0: GOTO 0xf14

0xea1: Push((int) 3)
0xea2: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xea3: IF (Stack[-1] == 0) GOTO 0xea7; Pop(1)

0xea4: @ ShowMessage()
0xea5: Pop(0)
0xea6: GOTO 0xf14

0xea7: Push((int) 4)
0xea8: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xea9: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xeaa: @ ShowPlayerStats(Stack[-7])
0xeab: Pop(0)
0xeac: Push((int) 1)
0xead: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xeae: IF (Stack[-1] == 0) GOTO 0xeb3; Pop(1)

0xeaf: Push("people.xml")
0xeb0: Push((bool) 1)
0xeb1: @ ShowWindow(Stack[-2], Stack[-1])
0xeb2: Pop(2)
0xeb3: GOTO 0xf14

0xeb4: Push((int) 5)
0xeb5: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xeb6: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xeb7: @ IsFlashlightOn(Stack[-6])
0xeb8: Pop(0)
0xeb9: Push(Stack[-6])
0xeba: IF (Stack[-1] == 0) GOTO 0xec2; Pop(1)

0xebb: Push((bool) 0)
0xebc: @ SwitchFlashlight(Stack[-1])
0xebd: Pop(1)
0xebe: Push("flashlight_off")
0xebf: @ PlaySound(Stack[-1])
0xec0: Pop(1)
0xec1: GOTO 0xed0

0xec2: PushEmpty(bool)
0xec3: Call2 0xc6c

0xec4: Pop(0)
0xec5: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xec6: Push((bool) 1)
0xec7: @ SwitchFlashlight(Stack[-1])
0xec8: Pop(1)
0xec9: Push("flashlight_on")
0xeca: @ PlaySound(Stack[-1])
0xecb: Pop(1)
0xecc: GOTO 0xed0

0xecd: Push("flashlight_nofuel")
0xece: @ PlaySound(Stack[-1])
0xecf: Pop(1)
0xed0: GOTO 0xf14

0xed1: Push((int) 6)
0xed2: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xed3: IF (Stack[-1] == 0) GOTO 0xef9; Pop(1)

0xed4: PushEmpty(int)
0xed5: Call2 0xc72

0xed6: Pop(0)
0xed7: Push((int) 0)
0xed8: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xed9: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xeda: Return(); Pop(28)

0xedb: @ IsVisirOn(Stack[-5])
0xedc: Pop(0)
0xedd: Push(Stack[-5])
0xede: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xedf: Push((bool) 0)
0xee0: @ SwitchVisir(Stack[-1])
0xee1: Pop(1)
0xee2: Push((int) 2)
0xee3: @ SendWorldWndMessage(Stack[-1])
0xee4: Pop(1)
0xee5: GOTO 0xef8

0xee6: Push("visir")
0xee7: @ GetProperty(Stack[-1], Stack[-5])
0xee8: Pop(1)
0xee9: Push(Stack[-4])
0xeea: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xeeb: Push("vcharge")
0xeec: @ GetProperty(Stack[-1], Stack[-4])
0xeed: Pop(1)
0xeee: Push((int) 10)
0xeef: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xef0: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xef1: Push((bool) 1)
0xef2: @ SwitchVisir(Stack[-1])
0xef3: Pop(1)
0xef4: Push((int) 1)
0xef5: @ SendWorldWndMessage(Stack[-1])
0xef6: Pop(1)
0xef7: GOTO 0xef8

0xef8: GOTO 0xf14

0xef9: Push((int) 7)
0xefa: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xefb: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xefc: @ IsOverrideActive(Stack[-2])
0xefd: Pop(0)
0xefe: Pop(0); Push((bool) Stack[-2] == 0)
0xeff: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf00: Push("people.xml")
0xf01: Push((bool) 1)
0xf02: @ ShowWindow(Stack[-2], Stack[-1])
0xf03: Pop(2)
0xf04: GOTO 0xf14

0xf05: Push((int) 21)
0xf06: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0xf07: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf08: @ GetWeaponItem(Stack[-1])
0xf09: Pop(0)
0xf0a: Push((int) -1)
0xf0b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xf0c: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf0d: Push((bool) 0)
0xf0e: Push((int) 0)
0xf0f: @ SelectItem(Stack[-3], Stack[-2], Stack[-1])
0xf10: Pop(2)
0xf11: Push((int) -1)
0xf12: @ SetHandsItem(Stack[-1])
0xf13: Pop(1)
0xf14: Return(); Pop(28)

0xf15: PushEmpty(float, float)
0xf16: Push((int) 10)
0xf17: Push((int) 30)
0xf18: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xf19: Pop(2)
0xf1a: Push((int) 0)
0xf1b: @ SetTimer(Stack[-1], Stack[-2])
0xf1c: Pop(1)
0xf1d: Return(); Pop(2)

0xf1e: PushEmpty(object, object)
0xf1f: @ GetScene(Stack[-1])
0xf20: Pop(0)
0xf21: Push("player_shot")
0xf22: PushEmpty(object)
0xf23: Call2 0xbbf

0xf24: Pop(0)
0xf25: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xf26: Pop(2)
0xf27: Return(); Pop(2)

0xf28: Stack[-1] = 0
