GlobalVarCount = 15
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 object 
	G_VAR_3 object 
	G_VAR_4 object 
	G_VAR_5 object 
	G_VAR_6 object 
	G_VAR_7 object 
	G_VAR_8 object 
	G_VAR_9 object 
	G_VAR_10 object 
	G_VAR_11 object 
	G_VAR_12 object 
	G_VAR_13 object 
	G_VAR_14 object 

Strings:
	RemoveAllItems
	SelectWeapon
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
	boiny_arena
	NPC_Starshina
	boiny
	pt_Starshina
	quest_b11_01
	fight_win
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
	player
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
	scripted
	blood_dir.xml
	GetItemCount
	GetItem
	GetItemAmount
	IsItemSelected
	AddItem
	SelectItem
	GetLocator
	Teleport location '
	' not found in scene '
	battle

Import:
	SensePlayerOnly (1 args)
	Sleep (1 args)
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
	GetSceneByName (2 args)
	RemoveScene (1 args)
	Hold (0 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FindActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	CreateIntVector (1 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	Trace (1 args)
	Teleport (4 args)
	RemoveActor (1 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_1 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x36c Vars = (int)
		EVENT_1 Op = 0x387 Vars = (object)
		EVENT_2 Op = 0x396 Vars = (object)
		EVENT_10 Op = 0x41c Vars = (object)
		EVENT_41 Op = 0x427 Vars = (object)
	GTASK_2  Params = 1
		EVENT_22 Op = 0x51b Vars = (object, int, float, float)
		EVENT_16 Op = 0x51d Vars = (object, string)
		EVENT_41 Op = 0x51f Vars = (object)

Events:
EVENT_22 Op = 0x766 Vars = (object, int, float, float)
EVENT_43 Op = 0x76e Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x778 Vars = (object, string)
EVENT_41 Op = 0x785 Vars = (object)

0x0: PushEmpty(object, int, object, int)
0x1: PushEmpty(object)
0x2: Call2 0x536

0x3: Stack[-3] = Stack[-1]
0x4: Pop(1)
0x5: Push(GlobalVars[1])
0x6: PushEmpty(object)
0x7: Call2 0x704

0x8: Stack[-2] = Stack[-1]
0x9: Pop(1)
0xa: GlobalVars[1] = Stack[-1]; Pop(1)
0xb: Push(GlobalVars[3])
0xc: PushEmpty(object)
0xd: Call2 0x704

0xe: Stack[-2] = Stack[-1]
0xf: Pop(1)
0x10: GlobalVars[3] = Stack[-1]; Pop(1)
0x11: Push(GlobalVars[5])
0x12: PushEmpty(object)
0x13: Call2 0x704

0x14: Stack[-2] = Stack[-1]
0x15: Pop(1)
0x16: GlobalVars[5] = Stack[-1]; Pop(1)
0x17: Push(GlobalVars[7])
0x18: PushEmpty(object)
0x19: Call2 0x704

0x1a: Stack[-2] = Stack[-1]
0x1b: Pop(1)
0x1c: GlobalVars[7] = Stack[-1]; Pop(1)
0x1d: Push(GlobalVars[9])
0x1e: PushEmpty(object)
0x1f: Call2 0x704

0x20: Stack[-2] = Stack[-1]
0x21: Pop(1)
0x22: GlobalVars[9] = Stack[-1]; Pop(1)
0x23: Push(GlobalVars[0])
0x24: PushEmpty(object, object, int, object)
0x25: Stack[-3] = Stack[-7]
0x26: Stack[-2] = (int) 0
0x27: Push(GlobalVars[1])
0x28: Stack[-2] = Stack[-1]
0x29: Pop(1)
0x2a: Call2 0x661

0x2b: Stack[-5] = Stack[-4]
0x2c: Pop(4)
0x2d: GlobalVars[0] = Stack[-1]; Pop(1)
0x2e: Push(GlobalVars[2])
0x2f: PushEmpty(object, object, int, object)
0x30: Stack[-3] = Stack[-7]
0x31: Stack[-2] = (int) 1
0x32: Push(GlobalVars[3])
0x33: Stack[-2] = Stack[-1]
0x34: Pop(1)
0x35: Call2 0x661

0x36: Stack[-5] = Stack[-4]
0x37: Pop(4)
0x38: GlobalVars[2] = Stack[-1]; Pop(1)
0x39: Push(GlobalVars[4])
0x3a: PushEmpty(object, object, int, object)
0x3b: Stack[-3] = Stack[-7]
0x3c: Stack[-2] = (int) 2
0x3d: Push(GlobalVars[5])
0x3e: Stack[-2] = Stack[-1]
0x3f: Pop(1)
0x40: Call2 0x661

0x41: Stack[-5] = Stack[-4]
0x42: Pop(4)
0x43: GlobalVars[4] = Stack[-1]; Pop(1)
0x44: Push(GlobalVars[6])
0x45: PushEmpty(object, object, int, object)
0x46: Stack[-3] = Stack[-7]
0x47: Stack[-2] = (int) 3
0x48: Push(GlobalVars[7])
0x49: Stack[-2] = Stack[-1]
0x4a: Pop(1)
0x4b: Call2 0x661

0x4c: Stack[-5] = Stack[-4]
0x4d: Pop(4)
0x4e: GlobalVars[6] = Stack[-1]; Pop(1)
0x4f: Push(GlobalVars[8])
0x50: PushEmpty(object, object, int, object)
0x51: Stack[-3] = Stack[-7]
0x52: Stack[-2] = (int) 4
0x53: Push(GlobalVars[9])
0x54: Stack[-2] = Stack[-1]
0x55: Pop(1)
0x56: Call2 0x661

0x57: Stack[-5] = Stack[-4]
0x58: Pop(4)
0x59: GlobalVars[8] = Stack[-1]; Pop(1)
0x5a: Push(GlobalVars[10])
0x5b: PushEmpty(object, object, int)
0x5c: Stack[-2] = Stack[-6]
0x5d: Stack[-1] = (int) 0
0x5e: Call2 0x67a

0x5f: Stack[-4] = Stack[-3]
0x60: Pop(3)
0x61: GlobalVars[10] = Stack[-1]; Pop(1)
0x62: Push(GlobalVars[11])
0x63: PushEmpty(object, object, int)
0x64: Stack[-2] = Stack[-6]
0x65: Stack[-1] = (int) 1
0x66: Call2 0x67a

0x67: Stack[-4] = Stack[-3]
0x68: Pop(3)
0x69: GlobalVars[11] = Stack[-1]; Pop(1)
0x6a: Push(GlobalVars[12])
0x6b: PushEmpty(object, object, int)
0x6c: Stack[-2] = Stack[-6]
0x6d: Stack[-1] = (int) 2
0x6e: Call2 0x67a

0x6f: Stack[-4] = Stack[-3]
0x70: Pop(3)
0x71: GlobalVars[12] = Stack[-1]; Pop(1)
0x72: Push(GlobalVars[13])
0x73: PushEmpty(object, object, int)
0x74: Stack[-2] = Stack[-6]
0x75: Stack[-1] = (int) 3
0x76: Call2 0x67a

0x77: Stack[-4] = Stack[-3]
0x78: Pop(3)
0x79: GlobalVars[13] = Stack[-1]; Pop(1)
0x7a: Push(GlobalVars[14])
0x7b: PushEmpty(object, object, int)
0x7c: Stack[-2] = Stack[-6]
0x7d: Stack[-1] = (int) 4
0x7e: Call2 0x67a

0x7f: Stack[-4] = Stack[-3]
0x80: Pop(3)
0x81: GlobalVars[14] = Stack[-1]; Pop(1)
0x82: Stack[-1] = (int) 0
0x83: Push((int) 5)
0x84: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: @@ RemoveAllItems(Stack[-1])
0x87: Pop(0)
0x88: Push((int) 1)
0x89: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x8a: GOTO 0x83

0x8b: @@ SelectWeapon()
0x8c: Pop(0)
0x8d: Push((bool) 1)
0x8e: @ SensePlayerOnly(Stack[-1])
0x8f: Pop(1)
0x90: Push((float)1.5)
0x91: @ Sleep(Stack[-1])
0x92: Pop(1)
0x93: PushEmpty(object, bool, float)
0x94: Stack[-3] = Stack[-5]
0x95: Stack[-2] = (bool) 1
0x96: Stack[-1] = (float) 180.0
0x97: Call2 0xa5

0x98: Pop(3)
0x99: Push((int) 1)
0x9a: @ Sleep(Stack[-1])
0x9b: Pop(1)
0x9c: GOTO 0x93

0x9d: Return(); Pop(4)

0x9e: Stack[-2] = 0
0x9f: PushEmpty()
0xa0: Stack[-3] = (float) 0.25
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: Stack[-3] = (int) 0
0xa4: Return(); Pop(0)

0xa5: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xa6: PushEmpty()
0xa7: Call2 0x18a

0xa8: Pop(0)
0xa9: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xaa: Push("@GetAttackDistance")
0xab: Push((int) 1)
0xac: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: @@ GetAttackDistance(Stack[-11])
0xaf: Pop(0)
0xb0: Push((int) 50)
0xb1: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xb2: GOTO 0xb4

0xb3: Stack[-11] = Stack[-23]
0xb4: Push((int) 150)
0xb5: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[-11] = (int) 150
0xb8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb9: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xba: @ IsPlayerActor(Stack[-0], Stack[-8])
0xbb: Pop(0)
0xbc: Push(Stack[-8])
0xbd: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbe: Push("attack")
0xbf: @ PlayGlobalMusic(Stack[-1])
0xc0: Pop(1)
0xc1: PushEmpty(object)
0xc2: Call2 0x6e2

0xc3: Pop(0)
0xc4: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xc5: Pop(1)
0xc6: Push(Stack[-24])
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: Stack[-7] = (bool) 0
0xc9: GOTO 0xcb

0xca: Stack[-7] = (bool) 1
0xcb: Push((float)400.0)
0xcc: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 0
0xcf: PushEmpty(bool, object)
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x5c0

0xd2: Pop(1)
0xd3: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Stack[-1] = (bool) 1
0xd7: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0xd8: PushEmpty()
0xd9: Call2 0x327

0xda: Pop(0)
0xdb: @@ GetPFPosition(Stack[-10])
0xdc: Pop(0)
0xdd: @ GetPFPosition(Stack[-9])
0xde: Pop(0)
0xdf: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xe0: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe1: Pop(0); Push(Stack[-6] * Stack[-6]);
0xe2: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe4: PushEmpty(bool, object, float, float, bool, bool)
0xe5: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Stack[-4] = Stack[-17]
0xe7: Stack[-3] = (float) 10000.0
0xe8: Stack[-2] = (bool) 1
0xe9: Stack[-1] = (bool) 0
0xea: Push(-6, 3); TaskCall(1)
0xeb: Call2 0x33b

0xec: Pop(-6, 3); TaskReturn
0xed: Pop(5)
0xee: Pop(1); Push((bool) Stack[-1] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: GOTO 0x179

0xf1: Stack[-7] = (bool) 0
0xf2: GOTO 0x178

0xf3: Pop(0); Push(Stack[-23] * Stack[-23]);
0xf4: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0xf6: @@ GetPFPosition(Stack[-3])
0xf7: Pop(0)
0xf8: @ CanReachByPF(Stack[-2], Stack[-3])
0xf9: Pop(0)
0xfa: Pop(0); Push((bool) Stack[-2] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(bool, object, float, float, bool, bool)
0xfd: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Stack[-4] = Stack[-17]
0xff: Stack[-3] = (float) 10000.0
0x100: Stack[-2] = (bool) 1
0x101: Stack[-1] = (bool) 0
0x102: Push(-6, 3); TaskCall(1)
0x103: Call2 0x33b

0x104: Pop(-6, 3); TaskReturn
0x105: Pop(5)
0x106: Pop(1); Push((bool) Stack[-1] == 0)
0x107: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x108: GOTO 0x179

0x109: Stack[-7] = (bool) 0
0x10a: GOTO 0xcd

0x10b: Pop(0); Push((bool) Stack[-7] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x656

0x110: Pop(1)
0x111: Push("all")
0x112: Push("attack_on")
0x113: @ PlayAnimation(Stack[-2], Stack[-1])
0x114: Pop(2)
0x115: @ WaitForAnimEnd()
0x116: Pop(0)
0x117: PushEmpty()
0x118: Call2 0x327

0x119: Pop(0)
0x11a: @ StopAsync()
0x11b: Pop(0)
0x11c: Stack[-7] = (bool) 1
0x11d: PushEmpty(bool, object)
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x5c0

0x120: Pop(1)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: GOTO 0x179

0x124: @ rand(Stack[-1])
0x125: Pop(0)
0x126: PushEmpty(bool)
0x127: Stack[-1] = (bool) 1
0x128: Push((float)0.25)
0x129: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(bool)
0x12c: Call2 0x2fc

0x12d: Pop(0)
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Stack[-1] = (bool) 0
0x130: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x131: @ Face(Stack[-0])
0x132: Pop(0)
0x133: PushEmpty()
0x134: Call2 0x32e

0x135: Pop(0)
0x136: Push("all")
0x137: Push("attack_stay")
0x138: @ PlayAnimation(Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: PushEmpty(bool, float)
0x13b: Stack[-1] = Stack[-25]
0x13c: Call2 0x278

0x13d: Pop(2)
0x13e: @ StopAsync()
0x13f: Pop(0)
0x140: GOTO 0x16f

0x141: @ Face(Stack[-0])
0x142: Pop(0)
0x143: Push("all")
0x144: Push("fjump")
0x145: @ PlayAnimation(Stack[-2], Stack[-1])
0x146: Pop(2)
0x147: @ WaitForAnimEnd()
0x148: Pop(0)
0x149: PushEmpty()
0x14a: Call2 0x327

0x14b: Pop(0)
0x14c: Push(CVector(0.0, 0.0, 0.0))
0x14d: @ SetSpeed(Stack[-1])
0x14e: Pop(1)
0x14f: @ Stop()
0x150: Pop(0)
0x151: @ StopAsync()
0x152: Pop(0)
0x153: PushEmpty(bool)
0x154: Call2 0x2fc

0x155: Pop(0)
0x156: Pop(1); Push((bool) Stack[-1] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Call2 0x5c0

0x15b: Pop(1)
0x15c: Pop(1); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: GOTO 0x179

0x15f: @@ GetPFPosition(Stack[-10])
0x160: Pop(0)
0x161: @ GetPFPosition(Stack[-9])
0x162: Pop(0)
0x163: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x164: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x165: Pop(0); Push(Stack[-23] * Stack[-23]);
0x166: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x168: PushEmpty(bool, float)
0x169: Stack[-1] = Stack[-25]
0x16a: Call2 0x1d4

0x16b: Pop(1)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x179

0x16f: GOTO 0x178

0x170: PushEmpty(bool, float)
0x171: Stack[-1] = Stack[-25]
0x172: Call2 0x1d4

0x173: Pop(1)
0x174: Pop(1); Push((bool) Stack[-1] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x176: GOTO 0x179

0x177: Stack[-7] = (bool) 1
0x178: GOTO 0xcd

0x179: @ WaitForAnimEnd()
0x17a: Pop(0)
0x17b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Return(); Pop(22)

0x17e: Push("all")
0x17f: Push("attack_off")
0x180: @ PlayAnimation(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: @ WaitForAnimEnd()
0x183: Pop(0)
0x184: Push(Stack[-8])
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: Push((float)2.0)
0x187: @ Sleep(Stack[-1])
0x188: Pop(1)
0x189: Return(); Pop(22)

0x18a: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x18b: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x18c: Push("all")
0x18d: Push("attack_begin")
0x18e: Push((int) 1)
0x18f: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x190: Pop(2); Push(Stack[-2] + Stack[-1]);
0x191: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: Pop(0); Push((bool) Stack[-3] == 0)
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: GOTO 0x199

0x196: Push((int) 1)
0x197: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x198: GOTO 0x18c

0x199: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x19a: Push("attack")
0x19b: Push((int) 1)
0x19c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x19d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x19f: Pop(1)
0x1a0: Pop(0); Push((bool) Stack[-2] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: GOTO 0x1a6

0x1a3: Push((int) 1)
0x1a4: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1a5: GOTO 0x19a

0x1a6: Push("all")
0x1a7: Push("bjump")
0x1a8: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: Push(CvectorIndex(Stack[-1], 2))
0x1ab: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1ac: Return(); Pop(6)

0x1ad: PushEmpty(object, float, float, object, float, float)
0x1ae: Push((float)0.9)
0x1af: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1b0: @ GetVictim(Stack[-1], Stack[-4])
0x1b1: Pop(1)
0x1b2: @ ReportAttack(Stack[-0])
0x1b3: Pop(0)
0x1b4: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1b6: PushEmpty(float, object, int)
0x1b7: Stack[-2] = Stack[-6]
0x1b8: Stack[-1] = Stack[-10]
0x1b9: Call2 0x9f

0x1ba: Stack[-5] = Stack[-3]
0x1bb: Pop(3)
0x1bc: PushEmpty(float, object, float, int)
0x1bd: Stack[-3] = Stack[-7]
0x1be: Stack[-2] = Stack[-6]
0x1bf: PushEmpty(int, object, int)
0x1c0: Stack[-2] = Stack[-10]
0x1c1: Stack[-1] = Stack[-14]
0x1c2: Call2 0xa2

0x1c3: Stack[-4] = Stack[-3]
0x1c4: Pop(3)
0x1c5: Call2 0x54e

0x1c6: Stack[-5] = Stack[-4]
0x1c7: Pop(4)
0x1c8: PushEmpty(int)
0x1c9: Call2 0x32c

0x1ca: Pop(0)
0x1cb: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1cc: Pop(1)
0x1cd: PushEmpty(object, float)
0x1ce: Stack[-2] = Stack[-5]
0x1cf: Stack[-1] = Stack[-3]
0x1d0: Call2 0x333

0x1d1: Pop(2)
0x1d2: Return(); Pop(6)

0x1d3: Stack[-3] = 0
0x1d4: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1d5: PushEmpty()
0x1d6: Call2 0x327

0x1d7: Pop(0)
0x1d8: @ irand(Stack[-4], Stack[-1])
0x1d9: Pop(0)
0x1da: Push((int) 1)
0x1db: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1dc: @ Face(Stack[-0])
0x1dd: Pop(0)
0x1de: Push((bool) 1)
0x1df: @ SetAttackState(Stack[-1])
0x1e0: Pop(1)
0x1e1: PushEmpty()
0x1e2: Call2 0x753

0x1e3: Pop(0)
0x1e4: Push("all")
0x1e5: Push("attack_begin")
0x1e6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: @ WaitForAnimEnd()
0x1ea: Pop(0)
0x1eb: PushEmpty()
0x1ec: Call2 0x307

0x1ed: Pop(0)
0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f0: Call2 0x5c0

0x1f1: Pop(1)
0x1f2: Pop(1); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f4: @ StopAsync()
0x1f5: Pop(0)
0x1f6: Stack[-10] = (bool) 0
0x1f7: Return(); Pop(8)

0x1f8: PushEmpty(float, int)
0x1f9: Stack[-2] = Stack[-11]
0x1fa: Stack[-1] = Stack[-6]
0x1fb: Call2 0x1ad

0x1fc: Pop(2)
0x1fd: Push("all")
0x1fe: Push("attack_middle")
0x1ff: Pop(1); Push(Stack[-1] + Stack[-6]);
0x200: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x201: Pop(2)
0x202: Push(Stack[-3])
0x203: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x204: PushEmpty()
0x205: Call2 0x753

0x206: Pop(0)
0x207: Push("all")
0x208: Push("attack_middle")
0x209: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20a: @ PlayAnimation(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: @ WaitForAnimEnd()
0x20d: Pop(0)
0x20e: PushEmpty()
0x20f: Call2 0x327

0x210: Pop(0)
0x211: PushEmpty(bool, object)
0x212: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x213: Call2 0x5c0

0x214: Pop(1)
0x215: Pop(1); Push((bool) Stack[-1] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x217: @ StopAsync()
0x218: Pop(0)
0x219: Stack[-10] = (bool) 0
0x21a: Return(); Pop(8)

0x21b: PushEmpty(float, int)
0x21c: Stack[-2] = Stack[-11]
0x21d: Stack[-1] = Stack[-6]
0x21e: Call2 0x1ad

0x21f: Pop(2)
0x220: Stack[-2] = (int) 1
0x221: Push("attack_middle")
0x222: Pop(1); Push(Stack[-1] + Stack[-5]);
0x223: Push("_")
0x224: Pop(2); Push(Stack[-2] + Stack[-1]);
0x225: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x226: Push("all")
0x227: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x228: Pop(1)
0x229: Pop(0); Push((bool) Stack[-3] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x249

0x22c: PushEmpty()
0x22d: Call2 0x753

0x22e: Pop(0)
0x22f: Push("all")
0x230: @ PlayAnimation(Stack[-1], Stack[-2])
0x231: Pop(1)
0x232: @ WaitForAnimEnd()
0x233: Pop(0)
0x234: PushEmpty()
0x235: Call2 0x327

0x236: Pop(0)
0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x239: Call2 0x5c0

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
0x244: Call2 0x1ad

0x245: Pop(2)
0x246: Push((int) 1)
0x247: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x248: GOTO 0x221

0x249: Push((bool) 0)
0x24a: @ SetAttackState(Stack[-1])
0x24b: Pop(1)
0x24c: Push("all")
0x24d: Push("attack_end")
0x24e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x24f: @ PlayAnimation(Stack[-2], Stack[-1])
0x250: Pop(2)
0x251: PushEmpty(bool)
0x252: Call2 0x335

0x253: Pop(0)
0x254: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x255: PushEmpty(bool, float)
0x256: Stack[-1] = (float) 0.75
0x257: Call2 0x25d

0x258: Pop(2)
0x259: @ StopAsync()
0x25a: Pop(0)
0x25b: Stack[-10] = (bool) 1
0x25c: Return(); Pop(8)

0x25d: PushEmpty(float, bool, float, bool)
0x25e: @ rand(Stack[-2])
0x25f: Pop(0)
0x260: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x261: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x262: @ IsAnimationPlaying(Stack[-1])
0x263: Pop(0)
0x264: Pop(0); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x270

0x267: PushEmpty(bool)
0x268: Call2 0x2bf

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26b: Stack[-6] = (bool) 1
0x26c: Return(); Pop(4)

0x26d: @ sync()
0x26e: Pop(0)
0x26f: GOTO 0x262

0x270: GOTO 0x276

0x271: @ WaitForAnimEnd()
0x272: Pop(0)
0x273: PushEmpty()
0x274: Call2 0x327

0x275: Pop(0)
0x276: Stack[-6] = (bool) 0
0x277: Return(); Pop(4)

0x278: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x279: @ IsAnimationPlaying(Stack[-5])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-5] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x29e

0x27e: PushEmpty(bool)
0x27f: Call2 0x2bf

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-12] = (bool) 1
0x283: Return(); Pop(10)

0x284: PushEmpty(bool, object)
0x285: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x286: Call2 0x5c0

0x287: Pop(1)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-12] = (bool) 0
0x28b: Return(); Pop(10)

0x28c: @@ GetPFPosition(Stack[-4])
0x28d: Pop(0)
0x28e: @ GetPFPosition(Stack[-3])
0x28f: Pop(0)
0x290: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x291: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x292: Pop(0); Push(Stack[-11] * Stack[-11]);
0x293: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x295: PushEmpty(bool, float)
0x296: Stack[-1] = Stack[-13]
0x297: Call2 0x1d4

0x298: Pop(2)
0x299: Stack[-12] = (bool) 1
0x29a: Return(); Pop(10)

0x29b: @ sync()
0x29c: Pop(0)
0x29d: GOTO 0x279

0x29e: PushEmpty()
0x29f: Call2 0x327

0x2a0: Pop(0)
0x2a1: Stack[-12] = (bool) 0
0x2a2: Return(); Pop(10)

0x2a3: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a6: Call2 0x5c0

0x2a7: Pop(1)
0x2a8: Pop(1); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-11] = (bool) 0
0x2ab: Return(); Pop(10)

0x2ac: PushEmpty(bool)
0x2ad: Call2 0x2fc

0x2ae: Pop(0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b0: @@ GetPFPosition(Stack[-5])
0x2b1: Pop(0)
0x2b2: @ GetPFPosition(Stack[-4])
0x2b3: Pop(0)
0x2b4: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2b5: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2b6: @@ GetAttackDistance(Stack[-1])
0x2b7: Pop(0)
0x2b8: Push((int) 50)
0x2b9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ba: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2bb: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2bc: Return(); Pop(10)

0x2bd: Stack[-11] = (bool) 0
0x2be: Return(); Pop(10)

0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: PushEmpty(bool)
0x2c2: Call2 0x2a3

0x2c3: Pop(0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c5: PushEmpty(bool)
0x2c6: Call2 0x2cf

0x2c7: Pop(0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Stack[-1] = (bool) 1
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-1] = (bool) 1
0x2cc: Return(); Pop(0)

0x2cd: Stack[-1] = (bool) 0
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2d0: @ GetScene(Stack[-5])
0x2d1: Pop(0)
0x2d2: Stack[-4] = (bool) 0
0x2d3: PushEmpty(cvector, object)
0x2d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d5: Call2 0x52f

0x2d6: Pop(1)
0x2d7: Pop(1); Push(( -Stack[-1])
0x2d8: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x2d9: Pop(1)
0x2da: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: GOTO 0x2f9

0x2dd: @ Face(Stack[-0])
0x2de: Pop(0)
0x2df: Push("all")
0x2e0: Push("bjump")
0x2e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e2: Pop(2)
0x2e3: @@ GetPFPosition(Stack[-2])
0x2e4: Pop(0)
0x2e5: @ GetPFPosition(Stack[-1])
0x2e6: Pop(0)
0x2e7: @ WaitForAnimEnd()
0x2e8: Pop(0)
0x2e9: PushEmpty()
0x2ea: Call2 0x327

0x2eb: Pop(0)
0x2ec: @ StopAsync()
0x2ed: Pop(0)
0x2ee: Push(CVector(0.0, 0.0, 0.0))
0x2ef: @ SetSpeed(Stack[-1])
0x2f0: Pop(1)
0x2f1: Stack[-4] = (bool) 1
0x2f2: PushEmpty(bool)
0x2f3: Call2 0x2a3

0x2f4: Pop(0)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x2f9

0x2f8: GOTO 0x2d3

0x2f9: Stack[-11] = Stack[-4]
0x2fa: Return(); Pop(10)

0x2fb: Stack[-5] = 0
0x2fc: PushEmpty(bool, bool)
0x2fd: Push("IsAttacking")
0x2fe: Push((int) 1)
0x2ff: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x300: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x301: @@ IsAttacking(Stack[-1])
0x302: Pop(0)
0x303: Stack[-3] = Stack[-1]
0x304: Return(); Pop(2)

0x305: Stack[-3] = (bool) 0
0x306: Return(); Pop(2)

0x307: PushEmpty(float, int, float, int)
0x308: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Return(); Pop(4)

0x30b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x30c: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30d: Push((int) -1)
0x30e: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30f: Push((int) 0)
0x310: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: Return(); Pop(4)

0x313: @ rand(Stack[-2])
0x314: Pop(0)
0x315: PushEmpty(float)
0x316: Call2 0x339

0x317: Pop(0)
0x318: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31a: @ irand(Stack[-1], Stack[-2])
0x31b: Pop(0)
0x31c: Push((int) 1)
0x31d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x31e: Push("attack")
0x31f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x320: @ Speak(Stack[-1])
0x321: Pop(1)
0x322: PushEmpty(int)
0x323: Call2 0x337

0x324: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x325: Pop(1)
0x326: Return(); Pop(4)

0x327: PushEmpty(object)
0x328: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x329: Call2 0x74a

0x32a: Pop(1)
0x32b: Return(); Pop(0)

0x32c: Stack[-1] = (int) 0
0x32d: Return(); Pop(0)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "attack_stay"
0x330: Call2 0x6b9

0x331: Pop(1)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: Return(); Pop(0)

0x335: Stack[-1] = (bool) 1
0x336: Return(); Pop(0)

0x337: Stack[-1] = (int) 1
0x338: Return(); Pop(0)

0x339: Stack[-1] = (float) 0.5
0x33a: Return(); Pop(0)

0x33b: PushEmpty(bool, bool, bool, bool)
0x33c: PushEmpty(object)
0x33d: Stack[-1] = Stack[-10]
0x33e: Call2 0x74a

0x33f: Pop(1)
0x340: Push((int) 1)
0x341: Push((int) 5)
0x342: @ SetTimer(Stack[-2], Stack[-1])
0x343: Pop(2)
0x344: @ CanSee(Stack[-2], Stack[-9])
0x345: Pop(0)
0x346: Push(Stack[-2])
0x347: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x348: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x349: PushEmpty(object)
0x34a: Stack[-1] = Stack[-10]
0x34b: Call2 0x6ae

0x34c: Pop(1)
0x34d: GOTO 0x34f

0x34e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[-11]
0x351: Call2 0x53d

0x352: Pop(1)
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: PushEmpty(object)
0x355: Call2 0x6e2

0x356: Pop(0)
0x357: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x358: Pop(1)
0x359: PushEmpty(bool, object, float, float, bool, bool)
0x35a: Stack[-5] = Stack[-15]
0x35b: Stack[-4] = Stack[-14]
0x35c: Stack[-3] = Stack[-13]
0x35d: Stack[-2] = Stack[-12]
0x35e: Stack[-1] = Stack[-11]
0x35f: Call2 0x3a4

0x360: Stack[-7] = Stack[-6]
0x361: Pop(6)
0x362: Push( Stack[2 + Tasks[-1].StackPointer] )
0x363: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x364: Push("head")
0x365: @ UnlookAsync(Stack[-1])
0x366: Pop(1)
0x367: Push((int) 1)
0x368: @ KillTimer(Stack[-1])
0x369: Pop(1)
0x36a: Stack[-10] = Stack[-1]
0x36b: Return(); Pop(4)

0x36c: PushEmpty()
0x36d: Push((int) 1)
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x370: PushEmpty(object)
0x371: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x372: Call2 0x74a

0x373: Pop(1)
0x374: GOTO 0x379

0x375: PushEmpty(int)
0x376: Stack[-1] = Stack[-2]
0x377: Call2 0x40a

0x378: Pop(1)
0x379: Return(); Pop(0)

0x37a: Push((int) 1)
0x37b: @ KillTimer(Stack[-1])
0x37c: Pop(1)
0x37d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x37e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x380: Push("head")
0x381: @ UnlookAsync(Stack[-1])
0x382: Pop(1)
0x383: PushEmpty()
0x384: Call2 0x420

0x385: Pop(0)
0x386: Return(); Pop(0)

0x387: PushEmpty()
0x388: PushEmpty(bool)
0x389: Stack[-1] = (bool) 0
0x38a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x38b: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: Stack[-1] = (bool) 1
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x391: PushEmpty(object)
0x392: Stack[-1] = Stack[-2]
0x393: Call2 0x6ae

0x394: Pop(1)
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: PushEmpty(bool)
0x398: Stack[-1] = (bool) 0
0x399: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x39a: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x39c: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39d: Stack[-1] = (bool) 1
0x39e: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3a0: Push("head")
0x3a1: @ UnlookAsync(Stack[-1])
0x3a2: Pop(1)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3a5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3a6: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3a7: Stack[-7] = Stack[-17]
0x3a8: PushEmpty(bool, object)
0x3a9: Stack[-1] = Stack[-23]
0x3aa: Call2 0x430

0x3ab: Pop(1)
0x3ac: Pop(1); Push((bool) Stack[-1] == 0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ae: Stack[-22] = (bool) 0
0x3af: Return(); Pop(16)

0x3b0: @@ GetPosition(Stack[-5])
0x3b1: Pop(0)
0x3b2: @ GetPosition(Stack[-4])
0x3b3: Pop(0)
0x3b4: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3b5: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3b6: PushEmpty(bool)
0x3b7: Stack[-1] = (bool) 0
0x3b8: Push((int) 0)
0x3b9: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bb: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3bc: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: Stack[-1] = (bool) 1
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c0: @ Stop()
0x3c1: Pop(0)
0x3c2: Stack[-22] = (bool) 0
0x3c3: Return(); Pop(16)

0x3c4: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3c5: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3c7: @@ GetPFPosition(Stack[-5])
0x3c8: Pop(0)
0x3c9: @ FindPathTo(Stack[-1], Stack[-5])
0x3ca: Pop(0)
0x3cb: Pop(0); Push(( Stack[-1] != 0 )
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-6] = Stack[-1]
0x3ce: Stack[-1] = 0
0x3cf: Pop(0); Push(( Stack[-6] != 0 )
0x3d0: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3d1: Push(Stack[-7])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d3: Stack[-7] = (bool) 0
0x3d4: @ RotatePath(Stack[-6], Stack[-8])
0x3d5: Pop(0)
0x3d6: Pop(0); Push((bool) Stack[-8] == 0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: GOTO 0x408

0x3d9: Push((int) 0)
0x3da: Push((float)0.3)
0x3db: @ SetTimer(Stack[-2], Stack[-1])
0x3dc: Pop(2)
0x3dd: PushEmpty(string)
0x3de: Call2 0x437

0x3df: Pop(0)
0x3e0: PushEmpty(string)
0x3e1: Call2 0x439

0x3e2: Pop(0)
0x3e3: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3e4: Pop(2)
0x3e5: Pop(0); Push((bool) Stack[-8] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e9: Stack[-6] = 0
0x3ea: GOTO 0x408

0x3eb: GOTO 0x3ed

0x3ec: GOTO 0x407

0x3ed: GOTO 0x3ef

0x3ee: Stack[-6] = 0
0x3ef: GOTO 0x400

0x3f0: Push((int) 0)
0x3f1: @ KillTimer(Stack[-1])
0x3f2: Pop(1)
0x3f3: Push((float)0.5)
0x3f4: @ Sleep(Stack[-1], Stack[-9])
0x3f5: Pop(1)
0x3f6: Pop(0); Push((bool) Stack[-8] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-6] = 0
0x3fb: GOTO 0x408

0x3fc: Push((int) 0)
0x3fd: Push((float)0.3)
0x3fe: @ SetTimer(Stack[-2], Stack[-1])
0x3ff: Pop(2)
0x400: Stack[-1] = 0
0x401: GOTO 0x406

0x402: Push((int) 0)
0x403: @ KillTimer(Stack[-1])
0x404: Pop(1)
0x405: GOTO 0x408

0x406: Stack[-6] = 0
0x407: GOTO 0x3a8

0x408: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x409: Return(); Pop(16)

0x40a: PushEmpty()
0x40b: Push((int) 0)
0x40c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Return(); Pop(0)

0x40f: PushEmpty(bool, object)
0x410: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x411: Call2 0x430

0x412: Pop(1)
0x413: Pop(1); Push((bool) Stack[-1] == 0)
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x416: Push((int) 0)
0x417: @ KillTimer(Stack[-1])
0x418: Pop(1)
0x419: @ Stop()
0x41a: Pop(0)
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: @ RequestClearPath(Stack[-1])
0x41e: Pop(0)
0x41f: Return(); Pop(0)

0x420: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x421: Push((int) 0)
0x422: @ KillTimer(Stack[-1])
0x423: Pop(1)
0x424: @ Stop()
0x425: Pop(0)
0x426: Return(); Pop(0)

0x427: PushEmpty()
0x428: PushEmpty()
0x429: Call2 0x37a

0x42a: Pop(0)
0x42b: PushEmpty(object)
0x42c: Stack[-1] = Stack[-2]
0x42d: Call2 0x785

0x42e: Pop(1)
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: PushEmpty(bool, object)
0x432: Stack[-1] = Stack[-3]
0x433: Call2 0x5c0

0x434: Stack[-4] = Stack[-2]
0x435: Pop(2)
0x436: Return(); Pop(0)

0x437: Stack[-1] = "walk"
0x438: Return(); Pop(0)

0x439: Stack[-1] = "run"
0x43a: Return(); Pop(0)

0x43b: PushEmpty(object, object, object, object)
0x43c: PushEmpty(object)
0x43d: Stack[-1] = Stack[-6]
0x43e: Call2 0x4a6

0x43f: Pop(1)
0x440: Push("boiny_arena")
0x441: @ GetSceneByName(Stack[-3], Stack[-1])
0x442: Pop(1)
0x443: @ RemoveScene(Stack[-2])
0x444: Pop(0)
0x445: PushEmpty(bool, string)
0x446: Stack[-1] = "NPC_Starshina"
0x447: Call2 0x73e

0x448: Pop(2)
0x449: PushEmpty(object)
0x44a: Call2 0x536

0x44b: Stack[-2] = Stack[-1]
0x44c: Pop(1)
0x44d: PushEmpty(object, int, object, object, object)
0x44e: Stack[-5] = Stack[-6]
0x44f: Stack[-4] = (int) 0
0x450: Push(GlobalVars[0])
0x451: Stack[-4] = Stack[-1]
0x452: Pop(1)
0x453: Push(GlobalVars[1])
0x454: Stack[-3] = Stack[-1]
0x455: Pop(1)
0x456: Push(GlobalVars[10])
0x457: Stack[-2] = Stack[-1]
0x458: Pop(1)
0x459: Call2 0x68e

0x45a: Pop(5)
0x45b: PushEmpty(object, int, object, object, object)
0x45c: Stack[-5] = Stack[-6]
0x45d: Stack[-4] = (int) 1
0x45e: Push(GlobalVars[2])
0x45f: Stack[-4] = Stack[-1]
0x460: Pop(1)
0x461: Push(GlobalVars[3])
0x462: Stack[-3] = Stack[-1]
0x463: Pop(1)
0x464: Push(GlobalVars[11])
0x465: Stack[-2] = Stack[-1]
0x466: Pop(1)
0x467: Call2 0x68e

0x468: Pop(5)
0x469: PushEmpty(object, int, object, object, object)
0x46a: Stack[-5] = Stack[-6]
0x46b: Stack[-4] = (int) 2
0x46c: Push(GlobalVars[4])
0x46d: Stack[-4] = Stack[-1]
0x46e: Pop(1)
0x46f: Push(GlobalVars[5])
0x470: Stack[-3] = Stack[-1]
0x471: Pop(1)
0x472: Push(GlobalVars[12])
0x473: Stack[-2] = Stack[-1]
0x474: Pop(1)
0x475: Call2 0x68e

0x476: Pop(5)
0x477: PushEmpty(object, int, object, object, object)
0x478: Stack[-5] = Stack[-6]
0x479: Stack[-4] = (int) 3
0x47a: Push(GlobalVars[6])
0x47b: Stack[-4] = Stack[-1]
0x47c: Pop(1)
0x47d: Push(GlobalVars[7])
0x47e: Stack[-3] = Stack[-1]
0x47f: Pop(1)
0x480: Push(GlobalVars[13])
0x481: Stack[-2] = Stack[-1]
0x482: Pop(1)
0x483: Call2 0x68e

0x484: Pop(5)
0x485: PushEmpty(object, int, object, object, object)
0x486: Stack[-5] = Stack[-6]
0x487: Stack[-4] = (int) 4
0x488: Push(GlobalVars[8])
0x489: Stack[-4] = Stack[-1]
0x48a: Pop(1)
0x48b: Push(GlobalVars[9])
0x48c: Stack[-3] = Stack[-1]
0x48d: Pop(1)
0x48e: Push(GlobalVars[14])
0x48f: Stack[-2] = Stack[-1]
0x490: Pop(1)
0x491: Call2 0x68e

0x492: Pop(5)
0x493: @@ SelectWeapon()
0x494: Pop(0)
0x495: PushEmpty(object, string, string)
0x496: Stack[-3] = Stack[-4]
0x497: Stack[-2] = "boiny"
0x498: Stack[-1] = "pt_Starshina"
0x499: Call2 0x726

0x49a: Pop(3)
0x49b: PushEmpty(bool, string, string)
0x49c: Stack[-2] = "quest_b11_01"
0x49d: Stack[-1] = "fight_win"
0x49e: Call2 0x71a

0x49f: Pop(3)
0x4a0: @ Hold()
0x4a1: Pop(0)
0x4a2: GOTO 0x4a0

0x4a3: Return(); Pop(4)

0x4a4: Stack[-1] = 0
0x4a5: Stack[-2] = 0
0x4a6: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4a7: Pop(0); Push((bool) Stack[-21] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "fdie"
0x4ab: Call2 0x501

0x4ac: Pop(1)
0x4ad: GOTO 0x500

0x4ae: @@ GetPosition(Stack[-10])
0x4af: Pop(0)
0x4b0: @ GetPosition(Stack[-9])
0x4b1: Pop(0)
0x4b2: @ GetDirection(Stack[-8])
0x4b3: Pop(0)
0x4b4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4b5: Push(CvectorIndex(Stack[-7], 0))
0x4b6: Push(CvectorIndex(Stack[-9], 0))
0x4b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4b8: Push(CvectorIndex(Stack[-8], 2))
0x4b9: Push(CvectorIndex(Stack[-10], 2))
0x4ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4bc: Push((int) 0)
0x4bd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-6] = "fdie"
0x4c0: GOTO 0x4c2

0x4c1: Stack[-6] = "bdie"
0x4c2: @ RemoveRTEnvelope()
0x4c3: Pop(0)
0x4c4: @ SetDeathState()
0x4c5: Pop(0)
0x4c6: @ Stop()
0x4c7: Pop(0)
0x4c8: @ StopAsync()
0x4c9: Pop(0)
0x4ca: Stack[-5] = Stack[-21]
0x4cb: Push("GetScriptProperty")
0x4cc: Push((int) 2)
0x4cd: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4ce: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4cf: Push("Owner")
0x4d0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4d1: Pop(1)
0x4d2: Push(Stack[-4])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d4: Push("Owner")
0x4d5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4d6: Pop(1)
0x4d7: Pop(0); Push((bool) Stack[-5] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Stack[-5] = Stack[-21]
0x4da: Push("@GetEyesHeight")
0x4db: Push((int) 1)
0x4dc: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4de: @@ GetEyesHeight(Stack[-2])
0x4df: Pop(0)
0x4e0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4e1: Push(CvectorIndex(Stack[-1], 1))
0x4e2: Stack[-1] = Stack[-3]
0x4e3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4e4: Push("head")
0x4e5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4e6: Pop(1)
0x4e7: Stack[-3] = (bool) 1
0x4e8: GOTO 0x4ea

0x4e9: Stack[-3] = (bool) 0
0x4ea: PushEmpty(string)
0x4eb: Stack[-1] = Stack[-7]
0x4ec: Call2 0x6b9

0x4ed: Pop(1)
0x4ee: Push("all")
0x4ef: @ PlayAnimation(Stack[-1], Stack[-7])
0x4f0: Pop(1)
0x4f1: @ WaitForAnimEnd()
0x4f2: Pop(0)
0x4f3: Push(Stack[-3])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f5: @ StopAsync()
0x4f6: Pop(0)
0x4f7: Push("head")
0x4f8: @ UnlookAsync(Stack[-1])
0x4f9: Pop(1)
0x4fa: Push("all")
0x4fb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4fc: Pop(1)
0x4fd: @ RemoveEnvelope()
0x4fe: Pop(0)
0x4ff: Stack[-5] = 0
0x500: Return(); Pop(20)

0x501: PushEmpty()
0x502: @ RemoveRTEnvelope()
0x503: Pop(0)
0x504: @ SetDeathState()
0x505: Pop(0)
0x506: @ Stop()
0x507: Pop(0)
0x508: @ StopAsync()
0x509: Pop(0)
0x50a: @ StopSecondaryAnimation()
0x50b: Pop(0)
0x50c: PushEmpty(string)
0x50d: Stack[-1] = Stack[-2]
0x50e: Call2 0x6b9

0x50f: Pop(1)
0x510: Push("all")
0x511: @ PlayAnimation(Stack[-1], Stack[-2])
0x512: Pop(1)
0x513: @ WaitForAnimEnd()
0x514: Pop(0)
0x515: Push("all")
0x516: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x517: Pop(1)
0x518: @ RemoveEnvelope()
0x519: Pop(0)
0x51a: Return(); Pop(0)

0x51b: PushEmpty()
0x51c: Return(); Pop(0)

0x51d: PushEmpty()
0x51e: Return(); Pop(0)

0x51f: PushEmpty()
0x520: Return(); Pop(0)

0x521: PushEmpty()
0x522: Push((int) 2)
0x523: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x525: Stack[-2] = "fire"
0x526: Return(); Pop(0)

0x527: GOTO 0x52d

0x528: Push((int) 1)
0x529: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52b: Stack[-2] = "bullet"
0x52c: Return(); Pop(0)

0x52d: Stack[-2] = "phys"
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetPosition(Stack[-2])
0x531: Pop(0)
0x532: @@ GetPosition(Stack[-1])
0x533: Pop(0)
0x534: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x535: Return(); Pop(4)

0x536: PushEmpty(object, object)
0x537: Push("player")
0x538: @ FindActor(Stack[-2], Stack[-1])
0x539: Pop(1)
0x53a: Stack[-3] = Stack[-1]
0x53b: Return(); Pop(2)

0x53c: Stack[-1] = 0
0x53d: PushEmpty(bool, bool)
0x53e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x53f: Pop(0)
0x540: Stack[-4] = Stack[-1]
0x541: Return(); Pop(2)

0x542: PushEmpty(bool, bool)
0x543: Push("HasProperty")
0x544: Push((int) 2)
0x545: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x546: Pop(1); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-5] = (bool) 0
0x549: Return(); Pop(2)

0x54a: @@ HasProperty(Stack[-3], Stack[-1])
0x54b: Pop(0)
0x54c: Stack[-5] = Stack[-1]
0x54d: Return(); Pop(2)

0x54e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x54f: PushEmpty(bool, object, string)
0x550: Stack[-2] = Stack[-18]
0x551: Stack[-1] = "health"
0x552: Call2 0x542

0x553: Pop(2)
0x554: Pop(1); Push((bool) Stack[-1] == 0)
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-16] = (float) 0.0
0x557: Return(); Pop(12)

0x558: PushEmpty(bool, object, string)
0x559: Stack[-2] = Stack[-18]
0x55a: Stack[-1] = "armor"
0x55b: Call2 0x542

0x55c: Pop(2)
0x55d: Pop(1); Push((bool) Stack[-1] == 0)
0x55e: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55f: Stack[-6] = (int) 0
0x560: GOTO 0x564

0x561: Push("armor")
0x562: @@ GetProperty(Stack[-1], Stack[-7])
0x563: Pop(1)
0x564: Push("armor_")
0x565: PushEmpty(string, int)
0x566: Stack[-1] = Stack[-16]
0x567: Call2 0x521

0x568: Pop(1)
0x569: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x56a: PushEmpty(bool, object, string)
0x56b: Stack[-2] = Stack[-18]
0x56c: Stack[-1] = Stack[-8]
0x56d: Call2 0x542

0x56e: Pop(2)
0x56f: Pop(1); Push((bool) Stack[-1] == 0)
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Stack[-4] = (int) 0
0x572: GOTO 0x575

0x573: @@ GetProperty(Stack[-5], Stack[-4])
0x574: Pop(0)
0x575: PushEmpty(float, float, float)
0x576: Pop(0); Push(Stack[-9] + Stack[-7]);
0x577: Push((float)100.0)
0x578: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x579: Stack[-1] = (int) 1
0x57a: Call2 0x6f2

0x57b: Stack[-6] = Stack[-3]
0x57c: Pop(3)
0x57d: Push("health")
0x57e: @@ GetProperty(Stack[-1], Stack[-3])
0x57f: Pop(1)
0x580: Push((int) 1)
0x581: Pop(1); Push(Stack[-1] - Stack[-4]);
0x582: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x583: Push("health")
0x584: PushEmpty(float, float, float, float)
0x585: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x586: Stack[-2] = (int) 0
0x587: Stack[-1] = (int) 1
0x588: Call2 0x6f9

0x589: Pop(3)
0x58a: @@ SetProperty(Stack[-2], Stack[-1])
0x58b: Pop(2)
0x58c: PushEmpty(bool, object)
0x58d: Stack[-1] = Stack[-17]
0x58e: Call2 0x53d

0x58f: Pop(1)
0x590: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x591: PushEmpty(float)
0x592: Stack[-1] = -Stack[-2]; Pop(0);
0x593: Call2 0x710

0x594: Pop(1)
0x595: Stack[-16] = Stack[-1]
0x596: Return(); Pop(12)

0x597: PushEmpty(bool, bool)
0x598: @@ IsDead(Stack[-1])
0x599: Pop(0)
0x59a: Stack[-4] = Stack[-1]
0x59b: Return(); Pop(2)

0x59c: PushEmpty(object, object, object, object)
0x59d: Pop(0); Push((bool) Stack[-5] == 0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59f: Stack[-6] = (bool) 0
0x5a0: Return(); Pop(4)

0x5a1: PushEmpty(bool)
0x5a2: Stack[-1] = (bool) 0
0x5a3: Push("IsDead")
0x5a4: Push((int) 1)
0x5a5: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5a7: PushEmpty(bool, object)
0x5a8: Stack[-1] = Stack[-8]
0x5a9: Call2 0x597

0x5aa: Pop(1)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ac: Stack[-1] = (bool) 1
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ae: Stack[-6] = (bool) 0
0x5af: Return(); Pop(4)

0x5b0: @ GetScene(Stack[-2])
0x5b1: Pop(0)
0x5b2: Pop(0); Push((bool) Stack[-2] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b4: Stack[-6] = (bool) 0
0x5b5: Return(); Pop(4)

0x5b6: @@ GetScene(Stack[-1])
0x5b7: Pop(0)
0x5b8: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: Stack[-6] = (bool) 0
0x5bb: Return(); Pop(4)

0x5bc: Stack[-6] = (bool) 1
0x5bd: Return(); Pop(4)

0x5be: Stack[-1] = 0
0x5bf: Stack[-2] = 0
0x5c0: PushEmpty(int, int)
0x5c1: PushEmpty(bool, object)
0x5c2: Stack[-1] = Stack[-5]
0x5c3: Call2 0x59c

0x5c4: Pop(1)
0x5c5: Pop(1); Push((bool) Stack[-1] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-4] = (bool) 0
0x5c8: Return(); Pop(2)

0x5c9: PushEmpty(bool, object, string)
0x5ca: Stack[-2] = Stack[-6]
0x5cb: Stack[-1] = "noaccess"
0x5cc: Call2 0x542

0x5cd: Pop(2)
0x5ce: Pop(1); Push((bool) Stack[-1] == 0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-4] = (bool) 1
0x5d1: Return(); Pop(2)

0x5d2: Push("noaccess")
0x5d3: @@ GetProperty(Stack[-1], Stack[-2])
0x5d4: Pop(1)
0x5d5: Push((int) 0)
0x5d6: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5d7: Return(); Pop(2)

0x5d8: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x5d9: Pop(0); Push((bool) Stack[-15] == 0)
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: Return(); Pop(14)

0x5dc: @ IsDead(Stack[-7])
0x5dd: Pop(0)
0x5de: Push(Stack[-7])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5e0: Return(); Pop(14)

0x5e1: @ GetSecondaryAnimationType(Stack[-6])
0x5e2: Pop(0)
0x5e3: Push((int) 0)
0x5e4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e6: Return(); Pop(14)

0x5e7: @@ GetPosition(Stack[-5])
0x5e8: Pop(0)
0x5e9: @ GetPosition(Stack[-4])
0x5ea: Pop(0)
0x5eb: @ GetDirection(Stack[-3])
0x5ec: Pop(0)
0x5ed: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5ee: Push(CvectorIndex(Stack[-2], 0))
0x5ef: Push(CvectorIndex(Stack[-4], 0))
0x5f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f1: Push(CvectorIndex(Stack[-3], 2))
0x5f2: Push(CvectorIndex(Stack[-5], 2))
0x5f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f5: Push((int) 0)
0x5f6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-1] = "fhit"
0x5f9: GOTO 0x5fb

0x5fa: Stack[-1] = "bhit"
0x5fb: Push("hit_react")
0x5fc: Push("1")
0x5fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5fe: Push("2")
0x5ff: Pop(1); Push(Stack[-4] + Stack[-1]);
0x600: Push((int) -10)
0x601: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(4)
0x603: Return(); Pop(14)

0x604: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x605: PushEmpty(bool)
0x606: Stack[-1] = (bool) 0
0x607: PushEmpty(bool)
0x608: Stack[-1] = (bool) 0
0x609: Push(Stack[-23])
0x60a: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60b: Push((int) 4)
0x60c: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60e: Stack[-1] = (bool) 1
0x60f: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x610: Push((int) 5)
0x611: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: Stack[-1] = (bool) 1
0x614: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x615: PushEmpty(cvector, cvector)
0x616: PushEmpty(cvector, object)
0x617: Stack[-1] = Stack[-25]
0x618: Call2 0x52f

0x619: Stack[-3] = Stack[-2]
0x61a: Pop(2)
0x61b: Call2 0x6e8

0x61c: Stack[-11] = Stack[-2]
0x61d: Pop(2)
0x61e: @ CreateVectorVector(Stack[-8])
0x61f: Pop(0)
0x620: Stack[-7] = (int) 1
0x621: Push("hit")
0x622: Pop(1); Push(Stack[-1] + Stack[-8]);
0x623: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x624: Pop(1)
0x625: Pop(0); Push((bool) Stack[-6] == 0)
0x626: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x627: GOTO 0x631

0x628: Pop(0); Push(Stack[-4] | Stack[-9]);
0x629: Push((float)0.70711)
0x62a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: @@ add(Stack[-5])
0x62d: Pop(0)
0x62e: Push((int) 1)
0x62f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x630: GOTO 0x621

0x631: @@ size(Stack[-3])
0x632: Pop(0)
0x633: Push(Stack[-3])
0x634: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x635: @ irand(Stack[-2], Stack[-3])
0x636: Pop(0)
0x637: @@ get(Stack[-1], Stack[-2])
0x638: Pop(0)
0x639: PushEmpty(object, int, float, cvector, cvector)
0x63a: Stack[-5] = Stack[-26]
0x63b: Stack[-4] = Stack[-25]
0x63c: Stack[-3] = Stack[-24]
0x63d: Stack[-2] = Stack[-6]
0x63e: Stack[-1] = -Stack[-14]; Pop(0);
0x63f: Call2 0x648

0x640: Pop(5)
0x641: Return(); Pop(18)

0x642: Stack[-8] = 0
0x643: PushEmpty(object)
0x644: Stack[-1] = Stack[-22]
0x645: Call2 0x5d8

0x646: Pop(1)
0x647: Return(); Pop(18)

0x648: PushEmpty(object, object, object, object)
0x649: @ GetScene(Stack[-2])
0x64a: Pop(0)
0x64b: Push("scripted")
0x64c: Push("blood_dir.xml")
0x64d: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x64e: Pop(2)
0x64f: PushEmpty(object)
0x650: Stack[-1] = Stack[-10]
0x651: Call2 0x5d8

0x652: Pop(1)
0x653: Return(); Pop(4)

0x654: Stack[-1] = 0
0x655: Stack[-2] = 0
0x656: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x657: @@ GetPosition(Stack[-3])
0x658: Pop(0)
0x659: @ GetPosition(Stack[-2])
0x65a: Pop(0)
0x65b: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x65c: Push(CvectorIndex(Stack[-1], 0))
0x65d: Push(CvectorIndex(Stack[-2], 2))
0x65e: @ RotateAsync(Stack[-2], Stack[-1])
0x65f: Pop(2)
0x660: Return(); Pop(6)

0x661: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0x662: PushEmpty(object)
0x663: Call2 0x70a

0x664: Stack[-6] = Stack[-1]
0x665: Pop(1)
0x666: @@ GetItemCount(Stack[-4], Stack[-12])
0x667: Pop(0)
0x668: Stack[-3] = (int) 0
0x669: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x66a: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x66b: @@ GetItem(Stack[-2], Stack[-3], Stack[-12])
0x66c: Pop(0)
0x66d: @@ add(Stack[-2])
0x66e: Pop(0)
0x66f: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12])
0x670: Pop(0)
0x671: @@ add(Stack[-1])
0x672: Pop(0)
0x673: Stack[-2] = 0
0x674: Push((int) 1)
0x675: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x676: GOTO 0x669

0x677: Stack[-14] = Stack[-5]
0x678: Return(); Pop(10)

0x679: Stack[-5] = 0
0x67a: PushEmpty(object, int, int, bool, object, int, int, bool)
0x67b: @ CreateIntVector(Stack[-4])
0x67c: Pop(0)
0x67d: @@ GetItemCount(Stack[-3], Stack[-9])
0x67e: Pop(0)
0x67f: Stack[-2] = (int) 0
0x680: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x681: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x682: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9])
0x683: Pop(0)
0x684: Push(Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: @@ add(Stack[-2])
0x687: Pop(0)
0x688: Push((int) 1)
0x689: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x68a: GOTO 0x680

0x68b: Stack[-11] = Stack[-4]
0x68c: Return(); Pop(8)

0x68d: Stack[-4] = 0
0x68e: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0x68f: @@ RemoveAllItems(Stack[-18])
0x690: Pop(0)
0x691: @@ size(Stack[-7])
0x692: Pop(0)
0x693: Stack[-6] = (int) 0
0x694: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x695: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x696: @@ get(Stack[-5], Stack[-6])
0x697: Pop(0)
0x698: @@ get(Stack[-4], Stack[-6])
0x699: Pop(0)
0x69a: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4])
0x69b: Pop(0)
0x69c: Stack[-5] = 0
0x69d: Push((int) 1)
0x69e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x69f: GOTO 0x694

0x6a0: @@ size(Stack[-7])
0x6a1: Pop(0)
0x6a2: Stack[-2] = (int) 0
0x6a3: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a5: @@ get(Stack[-1], Stack[-2])
0x6a6: Pop(0)
0x6a7: Push((bool) 1)
0x6a8: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19])
0x6a9: Pop(1)
0x6aa: Push((int) 1)
0x6ab: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6ac: GOTO 0x6a3

0x6ad: Return(); Pop(14)

0x6ae: PushEmpty(float, cvector, float, cvector)
0x6af: @@ GetEyesHeight(Stack[-2])
0x6b0: Pop(0)
0x6b1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6b2: Push(CvectorIndex(Stack[-1], 1))
0x6b3: Stack[-1] = Stack[-3]
0x6b4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6b5: Push("head")
0x6b6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6b7: Pop(1)
0x6b8: Return(); Pop(4)

0x6b9: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6ba: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6bb: Pop(0)
0x6bc: Pop(0); Push((bool) Stack[-8] == 0)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6be: Stack[-7] = (int) 0
0x6bf: Push((int) 1)
0x6c0: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6c1: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6c2: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6c3: Pop(1)
0x6c4: Pop(0); Push((bool) Stack[-6] == 0)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c6: GOTO 0x6ca

0x6c7: Push((int) 1)
0x6c8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6c9: GOTO 0x6bf

0x6ca: Pop(0); Push((bool) Stack[-7] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cc: Return(); Pop(16)

0x6cd: @ irand(Stack[-5], Stack[-7])
0x6ce: Pop(0)
0x6cf: Push((int) 1)
0x6d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6d1: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x6d2: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x6d3: Pop(0)
0x6d4: Push(Stack[-4])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6d6: @ GetEyesHeight(Stack[-3])
0x6d7: Pop(0)
0x6d8: @ GetDirection(Stack[-2])
0x6d9: Pop(0)
0x6da: Push((int) 50)
0x6db: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x6dc: Push(CvectorIndex(Stack[-1], 1))
0x6dd: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x6de: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6df: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x6e0: Pop(0)
0x6e1: Return(); Pop(16)

0x6e2: PushEmpty(object, object)
0x6e3: @ self(Stack[-1])
0x6e4: Pop(0)
0x6e5: Stack[-3] = Stack[-1]
0x6e6: Return(); Pop(2)

0x6e7: Stack[-1] = 0
0x6e8: PushEmpty(float, float)
0x6e9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6ea: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6eb: Push((float)0.0)
0x6ec: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ee: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x6ef: Return(); Pop(2)

0x6f0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6f1: Return(); Pop(2)

0x6f2: PushEmpty()
0x6f3: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f5: Stack[-3] = Stack[-2]
0x6f6: GOTO 0x6f8

0x6f7: Stack[-3] = Stack[-1]
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty()
0x6fa: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fc: Stack[-4] = Stack[-2]
0x6fd: Return(); Pop(0)

0x6fe: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x700: Stack[-4] = Stack[-1]
0x701: Return(); Pop(0)

0x702: Stack[-4] = Stack[-3]
0x703: Return(); Pop(0)

0x704: PushEmpty(object, object)
0x705: @ CreateIntVector(Stack[-1])
0x706: Pop(0)
0x707: Stack[-3] = Stack[-1]
0x708: Return(); Pop(2)

0x709: Stack[-1] = 0
0x70a: PushEmpty(object, object)
0x70b: @ CreateObjectVector(Stack[-1])
0x70c: Pop(0)
0x70d: Stack[-3] = Stack[-1]
0x70e: Return(); Pop(2)

0x70f: Stack[-1] = 0
0x710: PushEmpty(object, object)
0x711: @ CreateFloatVector(Stack[-1])
0x712: Pop(0)
0x713: @@ add(Stack[-3])
0x714: Pop(0)
0x715: Push((int) 15)
0x716: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x717: Pop(1)
0x718: Return(); Pop(2)

0x719: Stack[-1] = 0
0x71a: PushEmpty(object, object)
0x71b: @ FindActor(Stack[-1], Stack[-4])
0x71c: Pop(0)
0x71d: Pop(0); Push((bool) Stack[-1] == 0)
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-5] = (bool) 0
0x720: Return(); Pop(2)

0x721: @ Trigger(Stack[-1], Stack[-3])
0x722: Pop(0)
0x723: Stack[-5] = (bool) 1
0x724: Return(); Pop(2)

0x725: Stack[-1] = 0
0x726: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x727: Pop(0); Push((bool) Stack[-11] == 0)
0x728: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x729: Return(); Pop(8)

0x72a: @ GetSceneByName(Stack[-4], Stack[-10])
0x72b: Pop(0)
0x72c: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(0)
0x72e: Pop(0); Push((bool) Stack[-3] == 0)
0x72f: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x730: Push("Teleport location '")
0x731: Pop(1); Push(Stack[-1] + Stack[-10]);
0x732: Push("' not found in scene '")
0x733: Pop(2); Push(Stack[-2] + Stack[-1]);
0x734: Pop(1); Push(Stack[-1] + Stack[-11]);
0x735: Push("'")
0x736: Pop(2); Push(Stack[-2] + Stack[-1]);
0x737: @ Trace(Stack[-1])
0x738: Pop(1)
0x739: GOTO 0x73c

0x73a: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x73b: Pop(0)
0x73c: Return(); Pop(8)

0x73d: Stack[-4] = 0
0x73e: PushEmpty(object, object)
0x73f: @ FindActor(Stack[-1], Stack[-3])
0x740: Pop(0)
0x741: Pop(0); Push((bool) Stack[-1] == 0)
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-4] = (bool) 0
0x744: Return(); Pop(2)

0x745: @ RemoveActor(Stack[-1])
0x746: Pop(0)
0x747: Stack[-4] = (bool) 1
0x748: Return(); Pop(2)

0x749: Stack[-1] = 0
0x74a: PushEmpty(bool, bool)
0x74b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x74c: Pop(0)
0x74d: Push(Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74f: Push("attack")
0x750: @ PlayGlobalMusic(Stack[-1])
0x751: Pop(1)
0x752: Return(); Pop(2)

0x753: PushEmpty(object, object)
0x754: @ GetScene(Stack[-1])
0x755: Pop(0)
0x756: Push("battle")
0x757: PushEmpty(object)
0x758: Call2 0x6e2

0x759: Pop(0)
0x75a: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x75b: Pop(2)
0x75c: Return(); Pop(2)

0x75d: Stack[-1] = 0
0x75e: PushEmpty()
0x75f: PushEmpty(object)
0x760: Stack[-1] = Stack[-2]
0x761: Push(-1, 0); TaskCall(2)
0x762: Call2 0x43b

0x763: Pop(-1, 0); TaskReturn
0x764: Pop(1)
0x765: Return(); Pop(0)

0x766: PushEmpty()
0x767: PushEmpty(object, int, float)
0x768: Stack[-3] = Stack[-7]
0x769: Stack[-2] = Stack[-6]
0x76a: Stack[-1] = Stack[-5]
0x76b: Call2 0x604

0x76c: Pop(3)
0x76d: Return(); Pop(0)

0x76e: PushEmpty()
0x76f: PushEmpty(object, int, float, cvector, cvector)
0x770: Stack[-5] = Stack[-11]
0x771: Stack[-4] = Stack[-10]
0x772: Stack[-3] = Stack[-9]
0x773: Stack[-2] = Stack[-7]
0x774: Stack[-1] = Stack[-6]
0x775: Call2 0x648

0x776: Pop(5)
0x777: Return(); Pop(0)

0x778: PushEmpty(float, float)
0x779: Push("health")
0x77a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x77c: Push("health")
0x77d: @ GetProperty(Stack[-1], Stack[-2])
0x77e: Pop(1)
0x77f: Push((int) 0)
0x780: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: @ SignalDeath(Stack[-4])
0x783: Pop(0)
0x784: Return(); Pop(2)

0x785: PushEmpty()
0x786: PushEmpty(object)
0x787: Stack[-1] = Stack[-2]
0x788: Call2 0x75e

0x789: Pop(1)
0x78a: Return(); Pop(0)

