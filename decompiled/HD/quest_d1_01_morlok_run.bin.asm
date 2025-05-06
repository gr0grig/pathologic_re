GlobalVarCount = 0

Strings:
	player
	head
	all
	pt_d1q01_morlok_run_path
	GetLocator
	Can't find path to point 
	Error rotating path
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
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
	GetPosition
	walk
	run
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
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood

Import:
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	Hold (0 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RotateAsync (2 args)
	FindPathTo (2 args)
	Stop (0 args)
	StopAsync (0 args)
	Sleep (1 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
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
	CanSee (2 args)
	GetPosition (1 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
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
	IsLoaded (1 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	RemoveActor (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xe3
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_1 Op = 0x9 Vars = (object)
		EVENT_3 Op = 0x22 Vars = (object)
		EVENT_7 Op = 0x65 Vars = (int)
	GTASK_1 Vars = (bool) Params = 0
		EVENT_5 Op = 0xe0 Vars = ()
		EVENT_17 Op = 0x138 Vars = (object)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x41c Vars = (int)
		EVENT_1 Op = 0x437 Vars = (object)
		EVENT_2 Op = 0x446 Vars = (object)
		EVENT_10 Op = 0x4cc Vars = (object)
		EVENT_41 Op = 0x4d7 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x4fa Vars = (object)
		EVENT_22 Op = 0x579 Vars = (object, int, float, float)
		EVENT_16 Op = 0x57b Vars = (object, string)
		EVENT_41 Op = 0x57d Vars = (object)

Events:
EVENT_6 Op = 0x794 Vars = ()
EVENT_22 Op = 0x7aa Vars = (object, int, float, float)
EVENT_43 Op = 0x7b2 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7bc Vars = (object, string)
EVENT_41 Op = 0x7c9 Vars = (object)

0x0: Push((bool) 1)
0x1: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x2: PushEmpty(float, float)
0x3: Stack[-2] = (int) 300
0x4: Stack[-1] = (int) 100
0x5: Call2 0x3b

0x6: Pop(2)
0x7: GOTO 0x0

0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: PushEmpty(bool)
0xb: Stack[-1] = (bool) 0
0xc: PushEmpty(bool, object)
0xd: Stack[-1] = Stack[-4]
0xe: Call2 0x59c

0xf: Pop(1)
0x10: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x11: PushEmpty(bool, object)
0x12: Stack[-1] = Stack[-4]
0x13: Call2 0x61f

0x14: Pop(1)
0x15: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x16: Stack[-1] = (bool) 1
0x17: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x18: PushEmpty()
0x19: Call2 0x7c

0x1a: Pop(0)
0x1b: PushEmpty(object)
0x1c: Stack[-1] = Stack[-2]
0x1d: Push(-1, 6); TaskCall(2)
0x1e: Call2 0x143

0x1f: Pop(-1, 6); TaskReturn
0x20: Pop(1)
0x21: Return(); Pop(0)

0x22: PushEmpty()
0x23: PushEmpty(bool)
0x24: Stack[-1] = (bool) 0
0x25: PushEmpty(bool, object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x59c

0x28: Pop(1)
0x29: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-4]
0x2c: Call2 0x61f

0x2d: Pop(1)
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Stack[-1] = (bool) 1
0x30: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x31: PushEmpty()
0x32: Call2 0x7c

0x33: Pop(0)
0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-2]
0x36: Push(-1, 6); TaskCall(2)
0x37: Call2 0x143

0x38: Pop(-1, 6); TaskReturn
0x39: Pop(1)
0x3a: Return(); Pop(0)

0x3b: PushEmpty()
0x3c: PushEmpty(bool)
0x3d: Call2 0x6c0

0x3e: Pop(0)
0x3f: Pop(1); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Return(); Pop(0)

0x42: Push("player")
0x43: @ FindActor(Stack[-4], Stack[-1])
0x44: Pop(1)
0x45: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x46: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x47: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x48: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x49: Push((int) 10)
0x4a: Push((float)1.0)
0x4b: @ SetTimer(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: PushEmpty()
0x4e: Call2 0x8a

0x4f: Pop(0)
0x50: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: Push((int) 10)
0x53: @ KillTimer(Stack[-1])
0x54: Pop(1)
0x55: Return(); Pop(0)

0x56: PushEmpty(float, float)
0x57: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x58: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x59: Stack[-3] = (bool) 0
0x5a: Return(); Pop(2)

0x5b: PushEmpty(float, object)
0x5c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x5d: Call2 0x594

0x5e: Pop(1)
0x5f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x60: Push( Stack[2 + Tasks[-1].StackPointer] )
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x63: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x64: Return(); Pop(2)

0x65: PushEmpty()
0x66: Push((int) 10)
0x67: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x69: PushEmpty(bool)
0x6a: Call2 0x56

0x6b: Pop(0)
0x6c: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: PushEmpty(object)
0x70: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x71: Call2 0x6c5

0x72: Pop(1)
0x73: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x74: GOTO 0x7b

0x75: Push( Stack[2 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x77: Push("head")
0x78: @ UnlookAsync(Stack[-1])
0x79: Pop(1)
0x7a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7b: Return(); Pop(0)

0x7c: PushEmpty()
0x7d: Call2 0xdb

0x7e: Pop(0)
0x7f: Push((int) 10)
0x80: @ KillTimer(Stack[-1])
0x81: Pop(1)
0x82: Push( Stack[2 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x84: Push("head")
0x85: @ UnlookAsync(Stack[-1])
0x86: Pop(1)
0x87: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x88: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x89: Return(); Pop(0)

0x8a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x8b: @ WaitForAnimEnd()
0x8c: Pop(0)
0x8d: PushEmpty(bool)
0x8e: Call2 0x6c0

0x8f: Pop(0)
0x90: Pop(1); Push((bool) Stack[-1] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(14)

0x93: PushEmpty(int)
0x94: Call2 0x747

0x95: Stack[-8] = Stack[-1]
0x96: Pop(1)
0x97: Stack[-6] = (int) 0
0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 0
0x9a: Push((int) 5)
0x9b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: PushEmpty(bool)
0x9e: Call2 0x6c0

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xa3: Push((int) 3)
0xa4: @ irand(Stack[-6], Stack[-1])
0xa5: Pop(1)
0xa6: Push((int) 0)
0xa7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa9: Push(Stack[-7])
0xaa: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xab: @ irand(Stack[-4], Stack[-7])
0xac: Pop(0)
0xad: Push("all")
0xae: PushEmpty(string, int)
0xaf: Stack[-1] = Stack[-7]
0xb0: Call2 0x740

0xb1: Pop(1)
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: @ WaitForAnimEnd(Stack[-3])
0xb5: Pop(0)
0xb6: Pop(0); Push((bool) Stack[-3] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xd6

0xb9: GOTO 0xcb

0xba: Push((int) 1)
0xbb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbd: Push((int) 4)
0xbe: @ rand(Stack[-3], Stack[-1])
0xbf: Pop(1)
0xc0: Push((int) 1)
0xc1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc2: @ Sleep(Stack[-1], Stack[-2])
0xc3: Pop(1)
0xc4: Pop(0); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xd6

0xc7: GOTO 0xcb

0xc8: Push(Stack[-6])
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd6

0xcb: PushEmpty(bool)
0xcc: Call2 0xd9

0xcd: Pop(0)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: GOTO 0xd6

0xd1: @ ResetAAS()
0xd2: Pop(0)
0xd3: Push((int) 1)
0xd4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xd5: GOTO 0x98

0xd6: @ ResetAAS()
0xd7: Pop(0)
0xd8: Return(); Pop(14)

0xd9: Stack[-1] = (bool) 1
0xda: Return(); Pop(0)

0xdb: @ StopAnimation()
0xdc: Pop(0)
0xdd: @ StopGroup0()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: @ StopGroup0()
0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: PushEmpty(object, int, cvector, cvector, bool, object, bool, object, int, cvector, cvector, bool, object, bool)
0xe4: @ Hold()
0xe5: Pop(0)
0xe6: @ GetMainOutdoorScene(Stack[-7])
0xe7: Pop(0)
0xe8: Stack[-6] = (int) 0
0xe9: Push((bool) 1)
0xea: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xeb: Push((int) 1)
0xec: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xed: Push("pt_d1q01_morlok_run_path")
0xee: Pop(1); Push(Stack[-1] + Stack[-7]);
0xef: @@ GetLocator(Stack[-1], Stack[-4], Stack[-6], Stack[-5])
0xf0: Pop(1)
0xf1: Pop(0); Push((bool) Stack[-3] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: GOTO 0x117

0xf4: Push("pt_d1q01_morlok_run_path")
0xf5: Pop(1); Push(Stack[-1] + Stack[-7]);
0xf6: @ Trace(Stack[-1])
0xf7: Pop(1)
0xf8: PushEmpty(object, cvector)
0xf9: Stack[-1] = Stack[-7]
0xfa: Call2 0x12a

0xfb: Stack[-4] = Stack[-2]
0xfc: Pop(2)
0xfd: Pop(0); Push((bool) Stack[-2] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xff: Push("Can't find path to point ")
0x100: Pop(1); Push(Stack[-1] + Stack[-7]);
0x101: @ Trace(Stack[-1])
0x102: Pop(1)
0x103: GOTO 0x117

0x104: GOTO 0x115

0x105: @ RotatePath(Stack[-2], Stack[-1])
0x106: Pop(0)
0x107: Push(Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x109: Push((bool) 1)
0x10a: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x10b: Pop(1)
0x10c: Stack[-2] = 0
0x10d: Pop(0); Push((bool) Stack[-1] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x117

0x110: GOTO 0x115

0x111: Push("Error rotating path")
0x112: Pop(1); Push(Stack[-1] + Stack[-7]);
0x113: @ Trace(Stack[-1])
0x114: Pop(1)
0x115: Stack[-2] = 0
0x116: GOTO 0xe9

0x117: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x119: Push(CvectorIndex(Stack[-4], 0))
0x11a: Push(CvectorIndex(Stack[-5], 2))
0x11b: @ RotateAsync(Stack[-2], Stack[-1])
0x11c: Pop(2)
0x11d: PushEmpty()
0x11e: Push(-0, 5); TaskCall(0)
0x11f: Call2 0x0

0x120: Pop(-0, 5); TaskReturn
0x121: Pop(0)
0x122: GOTO 0x128

0x123: Push((bool) 1)
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: @ Hold()
0x126: Pop(0)
0x127: GOTO 0x123

0x128: Return(); Pop(14)

0x129: Stack[-7] = 0
0x12a: PushEmpty(object, object)
0x12b: @ FindPathTo(Stack[-1], Stack[-3])
0x12c: Pop(0)
0x12d: Stack[-4] = Stack[-1]
0x12e: Return(); Pop(2)

0x12f: Stack[-1] = 0
0x130: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x131: @ Stop()
0x132: Pop(0)
0x133: @ StopGroup0()
0x134: Pop(0)
0x135: @ StopAsync()
0x136: Pop(0)
0x137: Return(); Pop(0)

0x138: PushEmpty()
0x139: PushEmpty()
0x13a: Call2 0x130

0x13b: Pop(0)
0x13c: PushEmpty(object)
0x13d: Stack[-1] = Stack[-2]
0x13e: Push(-1, 6); TaskCall(2)
0x13f: Call2 0x143

0x140: Pop(-1, 6); TaskReturn
0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(object, bool, float)
0x145: Stack[-3] = Stack[-4]
0x146: Stack[-2] = (bool) 1
0x147: Stack[-1] = (float) 180.0
0x148: Call2 0x155

0x149: Pop(3)
0x14a: Push((int) 1)
0x14b: @ Sleep(Stack[-1])
0x14c: Pop(1)
0x14d: GOTO 0x144

0x14e: Return(); Pop(0)

0x14f: PushEmpty()
0x150: Stack[-3] = (float) 0.2
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: Stack[-3] = (int) 0
0x154: Return(); Pop(0)

0x155: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x156: PushEmpty()
0x157: Call2 0x23a

0x158: Pop(0)
0x159: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x15a: Push("@GetAttackDistance")
0x15b: Push((int) 1)
0x15c: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: @@ GetAttackDistance(Stack[-11])
0x15f: Pop(0)
0x160: Push((int) 50)
0x161: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x162: GOTO 0x164

0x163: Stack[-11] = Stack[-23]
0x164: Push((int) 150)
0x165: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-11] = (int) 150
0x168: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x169: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x16a: @ IsPlayerActor(Stack[-0], Stack[-8])
0x16b: Pop(0)
0x16c: Push(Stack[-8])
0x16d: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16e: Push("attack")
0x16f: @ PlayGlobalMusic(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty(object)
0x172: Call2 0x6f9

0x173: Pop(0)
0x174: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x175: Pop(1)
0x176: Push(Stack[-24])
0x177: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x178: Stack[-7] = (bool) 0
0x179: GOTO 0x17b

0x17a: Stack[-7] = (bool) 1
0x17b: Push((float)400.0)
0x17c: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x17d: PushEmpty(bool)
0x17e: Stack[-1] = (bool) 0
0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181: Call2 0x61f

0x182: Pop(1)
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x188: PushEmpty()
0x189: Call2 0x3d7

0x18a: Pop(0)
0x18b: @@ GetPFPosition(Stack[-10])
0x18c: Pop(0)
0x18d: @ GetPFPosition(Stack[-9])
0x18e: Pop(0)
0x18f: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x190: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x191: Pop(0); Push(Stack[-6] * Stack[-6]);
0x192: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(bool, object, float, float, bool, bool)
0x195: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x196: Stack[-4] = Stack[-17]
0x197: Stack[-3] = (float) 10000.0
0x198: Stack[-2] = (bool) 1
0x199: Stack[-1] = (bool) 0
0x19a: Push(-6, 3); TaskCall(3)
0x19b: Call2 0x3eb

0x19c: Pop(-6, 3); TaskReturn
0x19d: Pop(5)
0x19e: Pop(1); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x229

0x1a1: Stack[-7] = (bool) 0
0x1a2: GOTO 0x228

0x1a3: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1a4: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x1a6: @@ GetPFPosition(Stack[-3])
0x1a7: Pop(0)
0x1a8: @ CanReachByPF(Stack[-2], Stack[-3])
0x1a9: Pop(0)
0x1aa: Pop(0); Push((bool) Stack[-2] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(bool, object, float, float, bool, bool)
0x1ad: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1ae: Stack[-4] = Stack[-17]
0x1af: Stack[-3] = (float) 10000.0
0x1b0: Stack[-2] = (bool) 1
0x1b1: Stack[-1] = (bool) 0
0x1b2: Push(-6, 3); TaskCall(3)
0x1b3: Call2 0x3eb

0x1b4: Pop(-6, 3); TaskReturn
0x1b5: Pop(5)
0x1b6: Pop(1); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x229

0x1b9: Stack[-7] = (bool) 0
0x1ba: GOTO 0x17d

0x1bb: Pop(0); Push((bool) Stack[-7] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1bd: PushEmpty(object)
0x1be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bf: Call2 0x6b5

0x1c0: Pop(1)
0x1c1: Push("all")
0x1c2: Push("attack_on")
0x1c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c4: Pop(2)
0x1c5: @ WaitForAnimEnd()
0x1c6: Pop(0)
0x1c7: PushEmpty()
0x1c8: Call2 0x3d7

0x1c9: Pop(0)
0x1ca: @ StopAsync()
0x1cb: Pop(0)
0x1cc: Stack[-7] = (bool) 1
0x1cd: PushEmpty(bool, object)
0x1ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Call2 0x61f

0x1d0: Pop(1)
0x1d1: Pop(1); Push((bool) Stack[-1] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x229

0x1d4: @ rand(Stack[-1])
0x1d5: Pop(0)
0x1d6: PushEmpty(bool)
0x1d7: Stack[-1] = (bool) 1
0x1d8: Push((float)0.25)
0x1d9: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: PushEmpty(bool)
0x1dc: Call2 0x3ac

0x1dd: Pop(0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[-1] = (bool) 0
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e1: @ Face(Stack[-0])
0x1e2: Pop(0)
0x1e3: PushEmpty()
0x1e4: Call2 0x3de

0x1e5: Pop(0)
0x1e6: Push("all")
0x1e7: Push("attack_stay")
0x1e8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: PushEmpty(bool, float)
0x1eb: Stack[-1] = Stack[-25]
0x1ec: Call2 0x328

0x1ed: Pop(2)
0x1ee: @ StopAsync()
0x1ef: Pop(0)
0x1f0: GOTO 0x21f

0x1f1: @ Face(Stack[-0])
0x1f2: Pop(0)
0x1f3: Push("all")
0x1f4: Push("fjump")
0x1f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: @ WaitForAnimEnd()
0x1f8: Pop(0)
0x1f9: PushEmpty()
0x1fa: Call2 0x3d7

0x1fb: Pop(0)
0x1fc: Push(CVector(0.0, 0.0, 0.0))
0x1fd: @ SetSpeed(Stack[-1])
0x1fe: Pop(1)
0x1ff: @ Stop()
0x200: Pop(0)
0x201: @ StopAsync()
0x202: Pop(0)
0x203: PushEmpty(bool)
0x204: Call2 0x3ac

0x205: Pop(0)
0x206: Pop(1); Push((bool) Stack[-1] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x208: PushEmpty(bool, object)
0x209: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20a: Call2 0x61f

0x20b: Pop(1)
0x20c: Pop(1); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: GOTO 0x229

0x20f: @@ GetPFPosition(Stack[-10])
0x210: Pop(0)
0x211: @ GetPFPosition(Stack[-9])
0x212: Pop(0)
0x213: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x214: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x215: Pop(0); Push(Stack[-23] * Stack[-23]);
0x216: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x218: PushEmpty(bool, float)
0x219: Stack[-1] = Stack[-25]
0x21a: Call2 0x284

0x21b: Pop(1)
0x21c: Pop(1); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: GOTO 0x229

0x21f: GOTO 0x228

0x220: PushEmpty(bool, float)
0x221: Stack[-1] = Stack[-25]
0x222: Call2 0x284

0x223: Pop(1)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x229

0x227: Stack[-7] = (bool) 1
0x228: GOTO 0x17d

0x229: @ WaitForAnimEnd()
0x22a: Pop(0)
0x22b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Return(); Pop(22)

0x22e: Push("all")
0x22f: Push("attack_off")
0x230: @ PlayAnimation(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: @ WaitForAnimEnd()
0x233: Pop(0)
0x234: Push(Stack[-8])
0x235: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x236: Push((float)2.0)
0x237: @ Sleep(Stack[-1])
0x238: Pop(1)
0x239: Return(); Pop(22)

0x23a: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x23b: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x23c: Push("all")
0x23d: Push("attack_begin")
0x23e: Push((int) 1)
0x23f: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x240: Pop(2); Push(Stack[-2] + Stack[-1]);
0x241: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: Pop(0); Push((bool) Stack[-3] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x249

0x246: Push((int) 1)
0x247: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x248: GOTO 0x23c

0x249: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x24a: Push("attack")
0x24b: Push((int) 1)
0x24c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x24d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x24f: Pop(1)
0x250: Pop(0); Push((bool) Stack[-2] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x256

0x253: Push((int) 1)
0x254: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x255: GOTO 0x24a

0x256: Push("all")
0x257: Push("bjump")
0x258: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(2)
0x25a: Push(CvectorIndex(Stack[-1], 2))
0x25b: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x25c: Return(); Pop(6)

0x25d: PushEmpty(object, float, float, object, float, float)
0x25e: Push((float)0.9)
0x25f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x260: @ GetVictim(Stack[-1], Stack[-4])
0x261: Pop(1)
0x262: @ ReportAttack(Stack[-0])
0x263: Pop(0)
0x264: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x265: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x266: PushEmpty(float, object, int)
0x267: Stack[-2] = Stack[-6]
0x268: Stack[-1] = Stack[-10]
0x269: Call2 0x14f

0x26a: Stack[-5] = Stack[-3]
0x26b: Pop(3)
0x26c: PushEmpty(float, object, float, int)
0x26d: Stack[-3] = Stack[-7]
0x26e: Stack[-2] = Stack[-6]
0x26f: PushEmpty(int, object, int)
0x270: Stack[-2] = Stack[-10]
0x271: Stack[-1] = Stack[-14]
0x272: Call2 0x152

0x273: Stack[-4] = Stack[-3]
0x274: Pop(3)
0x275: Call2 0x5ad

0x276: Stack[-5] = Stack[-4]
0x277: Pop(4)
0x278: PushEmpty(int)
0x279: Call2 0x3dc

0x27a: Pop(0)
0x27b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x27c: Pop(1)
0x27d: PushEmpty(object, float)
0x27e: Stack[-2] = Stack[-5]
0x27f: Stack[-1] = Stack[-3]
0x280: Call2 0x3e3

0x281: Pop(2)
0x282: Return(); Pop(6)

0x283: Stack[-3] = 0
0x284: PushEmpty(int, bool, int, string, int, bool, int, string)
0x285: PushEmpty()
0x286: Call2 0x3d7

0x287: Pop(0)
0x288: @ irand(Stack[-4], Stack[-1])
0x289: Pop(0)
0x28a: Push((int) 1)
0x28b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x28c: @ Face(Stack[-0])
0x28d: Pop(0)
0x28e: Push((bool) 1)
0x28f: @ SetAttackState(Stack[-1])
0x290: Pop(1)
0x291: PushEmpty()
0x292: Call2 0x735

0x293: Pop(0)
0x294: Push("all")
0x295: Push("attack_begin")
0x296: Pop(1); Push(Stack[-1] + Stack[-6]);
0x297: @ PlayAnimation(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: @ WaitForAnimEnd()
0x29a: Pop(0)
0x29b: PushEmpty()
0x29c: Call2 0x3b7

0x29d: Pop(0)
0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a0: Call2 0x61f

0x2a1: Pop(1)
0x2a2: Pop(1); Push((bool) Stack[-1] == 0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a4: @ StopAsync()
0x2a5: Pop(0)
0x2a6: Stack[-10] = (bool) 0
0x2a7: Return(); Pop(8)

0x2a8: PushEmpty(float, int)
0x2a9: Stack[-2] = Stack[-11]
0x2aa: Stack[-1] = Stack[-6]
0x2ab: Call2 0x25d

0x2ac: Pop(2)
0x2ad: Push("all")
0x2ae: Push("attack_middle")
0x2af: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2b0: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Push(Stack[-3])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2b4: PushEmpty()
0x2b5: Call2 0x735

0x2b6: Pop(0)
0x2b7: Push("all")
0x2b8: Push("attack_middle")
0x2b9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: @ WaitForAnimEnd()
0x2bd: Pop(0)
0x2be: PushEmpty()
0x2bf: Call2 0x3d7

0x2c0: Pop(0)
0x2c1: PushEmpty(bool, object)
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x61f

0x2c4: Pop(1)
0x2c5: Pop(1); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c7: @ StopAsync()
0x2c8: Pop(0)
0x2c9: Stack[-10] = (bool) 0
0x2ca: Return(); Pop(8)

0x2cb: PushEmpty(float, int)
0x2cc: Stack[-2] = Stack[-11]
0x2cd: Stack[-1] = Stack[-6]
0x2ce: Call2 0x25d

0x2cf: Pop(2)
0x2d0: Stack[-2] = (int) 1
0x2d1: Push("attack_middle")
0x2d2: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2d3: Push("_")
0x2d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d5: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x2d6: Push("all")
0x2d7: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x2d8: Pop(1)
0x2d9: Pop(0); Push((bool) Stack[-3] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2f9

0x2dc: PushEmpty()
0x2dd: Call2 0x735

0x2de: Pop(0)
0x2df: Push("all")
0x2e0: @ PlayAnimation(Stack[-1], Stack[-2])
0x2e1: Pop(1)
0x2e2: @ WaitForAnimEnd()
0x2e3: Pop(0)
0x2e4: PushEmpty()
0x2e5: Call2 0x3d7

0x2e6: Pop(0)
0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e9: Call2 0x61f

0x2ea: Pop(1)
0x2eb: Pop(1); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ed: @ StopAsync()
0x2ee: Pop(0)
0x2ef: Stack[-10] = (bool) 0
0x2f0: Return(); Pop(8)

0x2f1: PushEmpty(float, int)
0x2f2: Stack[-2] = Stack[-11]
0x2f3: Stack[-1] = Stack[-6]
0x2f4: Call2 0x25d

0x2f5: Pop(2)
0x2f6: Push((int) 1)
0x2f7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2f8: GOTO 0x2d1

0x2f9: Push((bool) 0)
0x2fa: @ SetAttackState(Stack[-1])
0x2fb: Pop(1)
0x2fc: Push("all")
0x2fd: Push("attack_end")
0x2fe: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: PushEmpty(bool)
0x302: Call2 0x3e5

0x303: Pop(0)
0x304: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x305: PushEmpty(bool, float)
0x306: Stack[-1] = (float) 0.75
0x307: Call2 0x30d

0x308: Pop(2)
0x309: @ StopAsync()
0x30a: Pop(0)
0x30b: Stack[-10] = (bool) 1
0x30c: Return(); Pop(8)

0x30d: PushEmpty(float, bool, float, bool)
0x30e: @ rand(Stack[-2])
0x30f: Pop(0)
0x310: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x311: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x312: @ IsAnimationPlaying(Stack[-1])
0x313: Pop(0)
0x314: Pop(0); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: GOTO 0x320

0x317: PushEmpty(bool)
0x318: Call2 0x36f

0x319: Pop(0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-6] = (bool) 1
0x31c: Return(); Pop(4)

0x31d: @ sync()
0x31e: Pop(0)
0x31f: GOTO 0x312

0x320: GOTO 0x326

0x321: @ WaitForAnimEnd()
0x322: Pop(0)
0x323: PushEmpty()
0x324: Call2 0x3d7

0x325: Pop(0)
0x326: Stack[-6] = (bool) 0
0x327: Return(); Pop(4)

0x328: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x329: @ IsAnimationPlaying(Stack[-5])
0x32a: Pop(0)
0x32b: Pop(0); Push((bool) Stack[-5] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: GOTO 0x34e

0x32e: PushEmpty(bool)
0x32f: Call2 0x36f

0x330: Pop(0)
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-12] = (bool) 1
0x333: Return(); Pop(10)

0x334: PushEmpty(bool, object)
0x335: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x336: Call2 0x61f

0x337: Pop(1)
0x338: Pop(1); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: Stack[-12] = (bool) 0
0x33b: Return(); Pop(10)

0x33c: @@ GetPFPosition(Stack[-4])
0x33d: Pop(0)
0x33e: @ GetPFPosition(Stack[-3])
0x33f: Pop(0)
0x340: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x341: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x342: Pop(0); Push(Stack[-11] * Stack[-11]);
0x343: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: PushEmpty(bool, float)
0x346: Stack[-1] = Stack[-13]
0x347: Call2 0x284

0x348: Pop(2)
0x349: Stack[-12] = (bool) 1
0x34a: Return(); Pop(10)

0x34b: @ sync()
0x34c: Pop(0)
0x34d: GOTO 0x329

0x34e: PushEmpty()
0x34f: Call2 0x3d7

0x350: Pop(0)
0x351: Stack[-12] = (bool) 0
0x352: Return(); Pop(10)

0x353: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x354: PushEmpty(bool, object)
0x355: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x356: Call2 0x61f

0x357: Pop(1)
0x358: Pop(1); Push((bool) Stack[-1] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-11] = (bool) 0
0x35b: Return(); Pop(10)

0x35c: PushEmpty(bool)
0x35d: Call2 0x3ac

0x35e: Pop(0)
0x35f: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x360: @@ GetPFPosition(Stack[-5])
0x361: Pop(0)
0x362: @ GetPFPosition(Stack[-4])
0x363: Pop(0)
0x364: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x365: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x366: @@ GetAttackDistance(Stack[-1])
0x367: Pop(0)
0x368: Push((int) 50)
0x369: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x36a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x36b: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x36c: Return(); Pop(10)

0x36d: Stack[-11] = (bool) 0
0x36e: Return(); Pop(10)

0x36f: PushEmpty(bool)
0x370: Stack[-1] = (bool) 0
0x371: PushEmpty(bool)
0x372: Call2 0x353

0x373: Pop(0)
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: PushEmpty(bool)
0x376: Call2 0x37f

0x377: Pop(0)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: Stack[-1] = (bool) 1
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-1] = (bool) 1
0x37c: Return(); Pop(0)

0x37d: Stack[-1] = (bool) 0
0x37e: Return(); Pop(0)

0x37f: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x380: @ GetScene(Stack[-5])
0x381: Pop(0)
0x382: Stack[-4] = (bool) 0
0x383: PushEmpty(cvector, object)
0x384: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x385: Call2 0x58d

0x386: Pop(1)
0x387: Pop(1); Push(( -Stack[-1])
0x388: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x389: Pop(1)
0x38a: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x3a9

0x38d: @ Face(Stack[-0])
0x38e: Pop(0)
0x38f: Push("all")
0x390: Push("bjump")
0x391: @ PlayAnimation(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: @@ GetPFPosition(Stack[-2])
0x394: Pop(0)
0x395: @ GetPFPosition(Stack[-1])
0x396: Pop(0)
0x397: @ WaitForAnimEnd()
0x398: Pop(0)
0x399: PushEmpty()
0x39a: Call2 0x3d7

0x39b: Pop(0)
0x39c: @ StopAsync()
0x39d: Pop(0)
0x39e: Push(CVector(0.0, 0.0, 0.0))
0x39f: @ SetSpeed(Stack[-1])
0x3a0: Pop(1)
0x3a1: Stack[-4] = (bool) 1
0x3a2: PushEmpty(bool)
0x3a3: Call2 0x353

0x3a4: Pop(0)
0x3a5: Pop(1); Push((bool) Stack[-1] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: GOTO 0x3a9

0x3a8: GOTO 0x383

0x3a9: Stack[-11] = Stack[-4]
0x3aa: Return(); Pop(10)

0x3ab: Stack[-5] = 0
0x3ac: PushEmpty(bool, bool)
0x3ad: Push("IsAttacking")
0x3ae: Push((int) 1)
0x3af: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b1: @@ IsAttacking(Stack[-1])
0x3b2: Pop(0)
0x3b3: Stack[-3] = Stack[-1]
0x3b4: Return(); Pop(2)

0x3b5: Stack[-3] = (bool) 0
0x3b6: Return(); Pop(2)

0x3b7: PushEmpty(float, int, float, int)
0x3b8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Return(); Pop(4)

0x3bb: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bd: Push((int) -1)
0x3be: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3bf: Push((int) 0)
0x3c0: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: Return(); Pop(4)

0x3c3: @ rand(Stack[-2])
0x3c4: Pop(0)
0x3c5: PushEmpty(float)
0x3c6: Call2 0x3e9

0x3c7: Pop(0)
0x3c8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3ca: @ irand(Stack[-1], Stack[-2])
0x3cb: Pop(0)
0x3cc: Push((int) 1)
0x3cd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3ce: Push("attack")
0x3cf: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3d0: @ Speak(Stack[-1])
0x3d1: Pop(1)
0x3d2: PushEmpty(int)
0x3d3: Call2 0x3e7

0x3d4: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x3d5: Pop(1)
0x3d6: Return(); Pop(4)

0x3d7: PushEmpty(object)
0x3d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Call2 0x72c

0x3da: Pop(1)
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = (int) 0
0x3dd: Return(); Pop(0)

0x3de: PushEmpty(string)
0x3df: Stack[-1] = "attack_stay"
0x3e0: Call2 0x6d0

0x3e1: Pop(1)
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty()
0x3e4: Return(); Pop(0)

0x3e5: Stack[-1] = (bool) 1
0x3e6: Return(); Pop(0)

0x3e7: Stack[-1] = (int) 1
0x3e8: Return(); Pop(0)

0x3e9: Stack[-1] = (float) 0.5
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty(bool, bool, bool, bool)
0x3ec: PushEmpty(object)
0x3ed: Stack[-1] = Stack[-10]
0x3ee: Call2 0x72c

0x3ef: Pop(1)
0x3f0: Push((int) 1)
0x3f1: Push((int) 5)
0x3f2: @ SetTimer(Stack[-2], Stack[-1])
0x3f3: Pop(2)
0x3f4: @ CanSee(Stack[-2], Stack[-9])
0x3f5: Pop(0)
0x3f6: Push(Stack[-2])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3f9: PushEmpty(object)
0x3fa: Stack[-1] = Stack[-10]
0x3fb: Call2 0x6c5

0x3fc: Pop(1)
0x3fd: GOTO 0x3ff

0x3fe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3ff: PushEmpty(bool, object)
0x400: Stack[-1] = Stack[-11]
0x401: Call2 0x59c

0x402: Pop(1)
0x403: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x404: PushEmpty(object)
0x405: Call2 0x6f9

0x406: Pop(0)
0x407: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x408: Pop(1)
0x409: PushEmpty(bool, object, float, float, bool, bool)
0x40a: Stack[-5] = Stack[-15]
0x40b: Stack[-4] = Stack[-14]
0x40c: Stack[-3] = Stack[-13]
0x40d: Stack[-2] = Stack[-12]
0x40e: Stack[-1] = Stack[-11]
0x40f: Call2 0x454

0x410: Stack[-7] = Stack[-6]
0x411: Pop(6)
0x412: Push( Stack[2 + Tasks[-1].StackPointer] )
0x413: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x414: Push("head")
0x415: @ UnlookAsync(Stack[-1])
0x416: Pop(1)
0x417: Push((int) 1)
0x418: @ KillTimer(Stack[-1])
0x419: Pop(1)
0x41a: Stack[-10] = Stack[-1]
0x41b: Return(); Pop(4)

0x41c: PushEmpty()
0x41d: Push((int) 1)
0x41e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x420: PushEmpty(object)
0x421: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x422: Call2 0x72c

0x423: Pop(1)
0x424: GOTO 0x429

0x425: PushEmpty(int)
0x426: Stack[-1] = Stack[-2]
0x427: Call2 0x4ba

0x428: Pop(1)
0x429: Return(); Pop(0)

0x42a: Push((int) 1)
0x42b: @ KillTimer(Stack[-1])
0x42c: Pop(1)
0x42d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x42e: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x430: Push("head")
0x431: @ UnlookAsync(Stack[-1])
0x432: Pop(1)
0x433: PushEmpty()
0x434: Call2 0x4d0

0x435: Pop(0)
0x436: Return(); Pop(0)

0x437: PushEmpty()
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x43b: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43e: Stack[-1] = (bool) 1
0x43f: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x440: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x441: PushEmpty(object)
0x442: Stack[-1] = Stack[-2]
0x443: Call2 0x6c5

0x444: Pop(1)
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: PushEmpty(bool)
0x448: Stack[-1] = (bool) 0
0x449: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x44a: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (bool) 1
0x44e: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x450: Push("head")
0x451: @ UnlookAsync(Stack[-1])
0x452: Pop(1)
0x453: Return(); Pop(0)

0x454: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x455: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x456: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x457: Stack[-7] = Stack[-17]
0x458: PushEmpty(bool, object)
0x459: Stack[-1] = Stack[-23]
0x45a: Call2 0x4e0

0x45b: Pop(1)
0x45c: Pop(1); Push((bool) Stack[-1] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45e: Stack[-22] = (bool) 0
0x45f: Return(); Pop(16)

0x460: @@ GetPosition(Stack[-5])
0x461: Pop(0)
0x462: @ GetPosition(Stack[-4])
0x463: Pop(0)
0x464: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x465: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x466: PushEmpty(bool)
0x467: Stack[-1] = (bool) 0
0x468: Push((int) 0)
0x469: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x46c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: Stack[-1] = (bool) 1
0x46f: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x470: @ Stop()
0x471: Pop(0)
0x472: Stack[-22] = (bool) 0
0x473: Return(); Pop(16)

0x474: Pop(0); Push(Stack[-20] * Stack[-20]);
0x475: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x477: @@ GetPFPosition(Stack[-5])
0x478: Pop(0)
0x479: @ FindPathTo(Stack[-1], Stack[-5])
0x47a: Pop(0)
0x47b: Pop(0); Push(( Stack[-1] != 0 )
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: Stack[-6] = Stack[-1]
0x47e: Stack[-1] = 0
0x47f: Pop(0); Push(( Stack[-6] != 0 )
0x480: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x481: Push(Stack[-7])
0x482: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x483: Stack[-7] = (bool) 0
0x484: @ RotatePath(Stack[-6], Stack[-8])
0x485: Pop(0)
0x486: Pop(0); Push((bool) Stack[-8] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: GOTO 0x4b8

0x489: Push((int) 0)
0x48a: Push((float)0.3)
0x48b: @ SetTimer(Stack[-2], Stack[-1])
0x48c: Pop(2)
0x48d: PushEmpty(string)
0x48e: Call2 0x4e7

0x48f: Pop(0)
0x490: PushEmpty(string)
0x491: Call2 0x4e9

0x492: Pop(0)
0x493: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x494: Pop(2)
0x495: Pop(0); Push((bool) Stack[-8] == 0)
0x496: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x497: Push( Stack[0 + Tasks[-1].StackPointer] )
0x498: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x499: Stack[-6] = 0
0x49a: GOTO 0x4b8

0x49b: GOTO 0x49d

0x49c: GOTO 0x4b7

0x49d: GOTO 0x49f

0x49e: Stack[-6] = 0
0x49f: GOTO 0x4b0

0x4a0: Push((int) 0)
0x4a1: @ KillTimer(Stack[-1])
0x4a2: Pop(1)
0x4a3: Push((float)0.5)
0x4a4: @ Sleep(Stack[-1], Stack[-9])
0x4a5: Pop(1)
0x4a6: Pop(0); Push((bool) Stack[-8] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-6] = 0
0x4ab: GOTO 0x4b8

0x4ac: Push((int) 0)
0x4ad: Push((float)0.3)
0x4ae: @ SetTimer(Stack[-2], Stack[-1])
0x4af: Pop(2)
0x4b0: Stack[-1] = 0
0x4b1: GOTO 0x4b6

0x4b2: Push((int) 0)
0x4b3: @ KillTimer(Stack[-1])
0x4b4: Pop(1)
0x4b5: GOTO 0x4b8

0x4b6: Stack[-6] = 0
0x4b7: GOTO 0x458

0x4b8: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4b9: Return(); Pop(16)

0x4ba: PushEmpty()
0x4bb: Push((int) 0)
0x4bc: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: Return(); Pop(0)

0x4bf: PushEmpty(bool, object)
0x4c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c1: Call2 0x4e0

0x4c2: Pop(1)
0x4c3: Pop(1); Push((bool) Stack[-1] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4c6: Push((int) 0)
0x4c7: @ KillTimer(Stack[-1])
0x4c8: Pop(1)
0x4c9: @ Stop()
0x4ca: Pop(0)
0x4cb: Return(); Pop(0)

0x4cc: PushEmpty()
0x4cd: @ RequestClearPath(Stack[-1])
0x4ce: Pop(0)
0x4cf: Return(); Pop(0)

0x4d0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4d1: Push((int) 0)
0x4d2: @ KillTimer(Stack[-1])
0x4d3: Pop(1)
0x4d4: @ Stop()
0x4d5: Pop(0)
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: PushEmpty()
0x4d9: Call2 0x42a

0x4da: Pop(0)
0x4db: PushEmpty(object)
0x4dc: Stack[-1] = Stack[-2]
0x4dd: Call2 0x7c9

0x4de: Pop(1)
0x4df: Return(); Pop(0)

0x4e0: PushEmpty()
0x4e1: PushEmpty(bool, object)
0x4e2: Stack[-1] = Stack[-3]
0x4e3: Call2 0x61f

0x4e4: Stack[-4] = Stack[-2]
0x4e5: Pop(2)
0x4e6: Return(); Pop(0)

0x4e7: Stack[-1] = "walk"
0x4e8: Return(); Pop(0)

0x4e9: Stack[-1] = "run"
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty()
0x4ec: EventDisable(0)
0x4ed: PushEmpty(object)
0x4ee: Stack[-1] = Stack[-2]
0x4ef: Call2 0x504

0x4f0: Pop(1)
0x4f1: Push((int) 50)
0x4f2: Push((int) 40)
0x4f3: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x4f4: Pop(2)
0x4f5: EventEnable(0)
0x4f6: @ Hold()
0x4f7: Pop(0)
0x4f8: GOTO 0x4f6

0x4f9: Return(); Pop(0)

0x4fa: PushEmpty(bool, bool)
0x4fb: @ IsOverrideActive(Stack[-1])
0x4fc: Pop(0)
0x4fd: Pop(0); Push((bool) Stack[-1] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4ff: PushEmpty(object)
0x500: Stack[-1] = Stack[-4]
0x501: Call2 0x75e

0x502: Pop(1)
0x503: Return(); Pop(2)

0x504: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x505: Pop(0); Push((bool) Stack[-21] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x507: PushEmpty(string)
0x508: Stack[-1] = "fdie"
0x509: Call2 0x55f

0x50a: Pop(1)
0x50b: GOTO 0x55e

0x50c: @@ GetPosition(Stack[-10])
0x50d: Pop(0)
0x50e: @ GetPosition(Stack[-9])
0x50f: Pop(0)
0x510: @ GetDirection(Stack[-8])
0x511: Pop(0)
0x512: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x513: Push(CvectorIndex(Stack[-7], 0))
0x514: Push(CvectorIndex(Stack[-9], 0))
0x515: Pop(2); Push(Stack[-2] * Stack[-1]);
0x516: Push(CvectorIndex(Stack[-8], 2))
0x517: Push(CvectorIndex(Stack[-10], 2))
0x518: Pop(2); Push(Stack[-2] * Stack[-1]);
0x519: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51a: Push((int) 0)
0x51b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51d: Stack[-6] = "fdie"
0x51e: GOTO 0x520

0x51f: Stack[-6] = "bdie"
0x520: @ RemoveRTEnvelope()
0x521: Pop(0)
0x522: @ SetDeathState()
0x523: Pop(0)
0x524: @ Stop()
0x525: Pop(0)
0x526: @ StopAsync()
0x527: Pop(0)
0x528: Stack[-5] = Stack[-21]
0x529: Push("GetScriptProperty")
0x52a: Push((int) 2)
0x52b: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x52c: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x52d: Push("Owner")
0x52e: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x52f: Pop(1)
0x530: Push(Stack[-4])
0x531: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x532: Push("Owner")
0x533: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x534: Pop(1)
0x535: Pop(0); Push((bool) Stack[-5] == 0)
0x536: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x537: Stack[-5] = Stack[-21]
0x538: Push("@GetEyesHeight")
0x539: Push((int) 1)
0x53a: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x53b: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x53c: @@ GetEyesHeight(Stack[-2])
0x53d: Pop(0)
0x53e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x53f: Push(CvectorIndex(Stack[-1], 1))
0x540: Stack[-1] = Stack[-3]
0x541: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x542: Push("head")
0x543: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x544: Pop(1)
0x545: Stack[-3] = (bool) 1
0x546: GOTO 0x548

0x547: Stack[-3] = (bool) 0
0x548: PushEmpty(string)
0x549: Stack[-1] = Stack[-7]
0x54a: Call2 0x6d0

0x54b: Pop(1)
0x54c: Push("all")
0x54d: @ PlayAnimation(Stack[-1], Stack[-7])
0x54e: Pop(1)
0x54f: @ WaitForAnimEnd()
0x550: Pop(0)
0x551: Push(Stack[-3])
0x552: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x553: @ StopAsync()
0x554: Pop(0)
0x555: Push("head")
0x556: @ UnlookAsync(Stack[-1])
0x557: Pop(1)
0x558: Push("all")
0x559: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x55a: Pop(1)
0x55b: @ RemoveEnvelope()
0x55c: Pop(0)
0x55d: Stack[-5] = 0
0x55e: Return(); Pop(20)

0x55f: PushEmpty()
0x560: @ RemoveRTEnvelope()
0x561: Pop(0)
0x562: @ SetDeathState()
0x563: Pop(0)
0x564: @ Stop()
0x565: Pop(0)
0x566: @ StopAsync()
0x567: Pop(0)
0x568: @ StopSecondaryAnimation()
0x569: Pop(0)
0x56a: PushEmpty(string)
0x56b: Stack[-1] = Stack[-2]
0x56c: Call2 0x6d0

0x56d: Pop(1)
0x56e: Push("all")
0x56f: @ PlayAnimation(Stack[-1], Stack[-2])
0x570: Pop(1)
0x571: @ WaitForAnimEnd()
0x572: Pop(0)
0x573: Push("all")
0x574: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x575: Pop(1)
0x576: @ RemoveEnvelope()
0x577: Pop(0)
0x578: Return(); Pop(0)

0x579: PushEmpty()
0x57a: Return(); Pop(0)

0x57b: PushEmpty()
0x57c: Return(); Pop(0)

0x57d: PushEmpty()
0x57e: Return(); Pop(0)

0x57f: PushEmpty()
0x580: Push((int) 2)
0x581: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x583: Stack[-2] = "fire"
0x584: Return(); Pop(0)

0x585: GOTO 0x58b

0x586: Push((int) 1)
0x587: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: Stack[-2] = "bullet"
0x58a: Return(); Pop(0)

0x58b: Stack[-2] = "phys"
0x58c: Return(); Pop(0)

0x58d: PushEmpty(cvector, cvector, cvector, cvector)
0x58e: @ GetPosition(Stack[-2])
0x58f: Pop(0)
0x590: @@ GetPosition(Stack[-1])
0x591: Pop(0)
0x592: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x593: Return(); Pop(4)

0x594: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x595: @ GetPosition(Stack[-3])
0x596: Pop(0)
0x597: @@ GetPosition(Stack[-2])
0x598: Pop(0)
0x599: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x59a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x59b: Return(); Pop(6)

0x59c: PushEmpty(bool, bool)
0x59d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x59e: Pop(0)
0x59f: Stack[-4] = Stack[-1]
0x5a0: Return(); Pop(2)

0x5a1: PushEmpty(bool, bool)
0x5a2: Push("HasProperty")
0x5a3: Push((int) 2)
0x5a4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5a5: Pop(1); Push((bool) Stack[-1] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-5] = (bool) 0
0x5a8: Return(); Pop(2)

0x5a9: @@ HasProperty(Stack[-3], Stack[-1])
0x5aa: Pop(0)
0x5ab: Stack[-5] = Stack[-1]
0x5ac: Return(); Pop(2)

0x5ad: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5ae: PushEmpty(bool, object, string)
0x5af: Stack[-2] = Stack[-18]
0x5b0: Stack[-1] = "health"
0x5b1: Call2 0x5a1

0x5b2: Pop(2)
0x5b3: Pop(1); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b5: Stack[-16] = (float) 0.0
0x5b6: Return(); Pop(12)

0x5b7: PushEmpty(bool, object, string)
0x5b8: Stack[-2] = Stack[-18]
0x5b9: Stack[-1] = "armor"
0x5ba: Call2 0x5a1

0x5bb: Pop(2)
0x5bc: Pop(1); Push((bool) Stack[-1] == 0)
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5be: Stack[-6] = (int) 0
0x5bf: GOTO 0x5c3

0x5c0: Push("armor")
0x5c1: @@ GetProperty(Stack[-1], Stack[-7])
0x5c2: Pop(1)
0x5c3: Push("armor_")
0x5c4: PushEmpty(string, int)
0x5c5: Stack[-1] = Stack[-16]
0x5c6: Call2 0x57f

0x5c7: Pop(1)
0x5c8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5c9: PushEmpty(bool, object, string)
0x5ca: Stack[-2] = Stack[-18]
0x5cb: Stack[-1] = Stack[-8]
0x5cc: Call2 0x5a1

0x5cd: Pop(2)
0x5ce: Pop(1); Push((bool) Stack[-1] == 0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-4] = (int) 0
0x5d1: GOTO 0x5d4

0x5d2: @@ GetProperty(Stack[-5], Stack[-4])
0x5d3: Pop(0)
0x5d4: PushEmpty(float, float, float)
0x5d5: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5d6: Push((float)100.0)
0x5d7: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5d8: Stack[-1] = (int) 1
0x5d9: Call2 0x709

0x5da: Stack[-6] = Stack[-3]
0x5db: Pop(3)
0x5dc: Push("health")
0x5dd: @@ GetProperty(Stack[-1], Stack[-3])
0x5de: Pop(1)
0x5df: Push((int) 1)
0x5e0: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5e1: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5e2: Push("health")
0x5e3: PushEmpty(float, float, float, float)
0x5e4: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5e5: Stack[-2] = (int) 0
0x5e6: Stack[-1] = (int) 1
0x5e7: Call2 0x710

0x5e8: Pop(3)
0x5e9: @@ SetProperty(Stack[-2], Stack[-1])
0x5ea: Pop(2)
0x5eb: PushEmpty(bool, object)
0x5ec: Stack[-1] = Stack[-17]
0x5ed: Call2 0x59c

0x5ee: Pop(1)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f0: PushEmpty(float)
0x5f1: Stack[-1] = -Stack[-2]; Pop(0);
0x5f2: Call2 0x71b

0x5f3: Pop(1)
0x5f4: Stack[-16] = Stack[-1]
0x5f5: Return(); Pop(12)

0x5f6: PushEmpty(bool, bool)
0x5f7: @@ IsDead(Stack[-1])
0x5f8: Pop(0)
0x5f9: Stack[-4] = Stack[-1]
0x5fa: Return(); Pop(2)

0x5fb: PushEmpty(object, object, object, object)
0x5fc: Pop(0); Push((bool) Stack[-5] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-6] = (bool) 0
0x5ff: Return(); Pop(4)

0x600: PushEmpty(bool)
0x601: Stack[-1] = (bool) 0
0x602: Push("IsDead")
0x603: Push((int) 1)
0x604: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x605: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x606: PushEmpty(bool, object)
0x607: Stack[-1] = Stack[-8]
0x608: Call2 0x5f6

0x609: Pop(1)
0x60a: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60b: Stack[-1] = (bool) 1
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-6] = (bool) 0
0x60e: Return(); Pop(4)

0x60f: @ GetScene(Stack[-2])
0x610: Pop(0)
0x611: Pop(0); Push((bool) Stack[-2] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x613: Stack[-6] = (bool) 0
0x614: Return(); Pop(4)

0x615: @@ GetScene(Stack[-1])
0x616: Pop(0)
0x617: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-6] = (bool) 0
0x61a: Return(); Pop(4)

0x61b: Stack[-6] = (bool) 1
0x61c: Return(); Pop(4)

0x61d: Stack[-1] = 0
0x61e: Stack[-2] = 0
0x61f: PushEmpty(int, int)
0x620: PushEmpty(bool, object)
0x621: Stack[-1] = Stack[-5]
0x622: Call2 0x5fb

0x623: Pop(1)
0x624: Pop(1); Push((bool) Stack[-1] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-4] = (bool) 0
0x627: Return(); Pop(2)

0x628: PushEmpty(bool, object, string)
0x629: Stack[-2] = Stack[-6]
0x62a: Stack[-1] = "noaccess"
0x62b: Call2 0x5a1

0x62c: Pop(2)
0x62d: Pop(1); Push((bool) Stack[-1] == 0)
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-4] = (bool) 1
0x630: Return(); Pop(2)

0x631: Push("noaccess")
0x632: @@ GetProperty(Stack[-1], Stack[-2])
0x633: Pop(1)
0x634: Push((int) 0)
0x635: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x636: Return(); Pop(2)

0x637: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x638: Pop(0); Push((bool) Stack[-15] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x63a: Return(); Pop(14)

0x63b: @ IsDead(Stack[-7])
0x63c: Pop(0)
0x63d: Push(Stack[-7])
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: Return(); Pop(14)

0x640: @ GetSecondaryAnimationType(Stack[-6])
0x641: Pop(0)
0x642: Push((int) 0)
0x643: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: Return(); Pop(14)

0x646: @@ GetPosition(Stack[-5])
0x647: Pop(0)
0x648: @ GetPosition(Stack[-4])
0x649: Pop(0)
0x64a: @ GetDirection(Stack[-3])
0x64b: Pop(0)
0x64c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x64d: Push(CvectorIndex(Stack[-2], 0))
0x64e: Push(CvectorIndex(Stack[-4], 0))
0x64f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x650: Push(CvectorIndex(Stack[-3], 2))
0x651: Push(CvectorIndex(Stack[-5], 2))
0x652: Pop(2); Push(Stack[-2] * Stack[-1]);
0x653: Pop(2); Push(Stack[-2] + Stack[-1]);
0x654: Push((int) 0)
0x655: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: Stack[-1] = "fhit"
0x658: GOTO 0x65a

0x659: Stack[-1] = "bhit"
0x65a: Push("hit_react")
0x65b: Push("1")
0x65c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x65d: Push("2")
0x65e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x65f: Push((int) -10)
0x660: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x661: Pop(4)
0x662: Return(); Pop(14)

0x663: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x664: PushEmpty(bool)
0x665: Stack[-1] = (bool) 0
0x666: PushEmpty(bool)
0x667: Stack[-1] = (bool) 0
0x668: Push(Stack[-23])
0x669: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66a: Push((int) 4)
0x66b: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Stack[-1] = (bool) 1
0x66e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66f: Push((int) 5)
0x670: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: Stack[-1] = (bool) 1
0x673: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x674: PushEmpty(cvector, cvector)
0x675: PushEmpty(cvector, object)
0x676: Stack[-1] = Stack[-25]
0x677: Call2 0x58d

0x678: Stack[-3] = Stack[-2]
0x679: Pop(2)
0x67a: Call2 0x6ff

0x67b: Stack[-11] = Stack[-2]
0x67c: Pop(2)
0x67d: @ CreateVectorVector(Stack[-8])
0x67e: Pop(0)
0x67f: Stack[-7] = (int) 1
0x680: Push("hit")
0x681: Pop(1); Push(Stack[-1] + Stack[-8]);
0x682: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x683: Pop(1)
0x684: Pop(0); Push((bool) Stack[-6] == 0)
0x685: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x686: GOTO 0x690

0x687: Pop(0); Push(Stack[-4] | Stack[-9]);
0x688: Push((float)0.70711)
0x689: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: @@ add(Stack[-5])
0x68c: Pop(0)
0x68d: Push((int) 1)
0x68e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x68f: GOTO 0x680

0x690: @@ size(Stack[-3])
0x691: Pop(0)
0x692: Push(Stack[-3])
0x693: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x694: @ irand(Stack[-2], Stack[-3])
0x695: Pop(0)
0x696: @@ get(Stack[-1], Stack[-2])
0x697: Pop(0)
0x698: PushEmpty(object, int, float, cvector, cvector)
0x699: Stack[-5] = Stack[-26]
0x69a: Stack[-4] = Stack[-25]
0x69b: Stack[-3] = Stack[-24]
0x69c: Stack[-2] = Stack[-6]
0x69d: Stack[-1] = -Stack[-14]; Pop(0);
0x69e: Call2 0x6a7

0x69f: Pop(5)
0x6a0: Return(); Pop(18)

0x6a1: Stack[-8] = 0
0x6a2: PushEmpty(object)
0x6a3: Stack[-1] = Stack[-22]
0x6a4: Call2 0x637

0x6a5: Pop(1)
0x6a6: Return(); Pop(18)

0x6a7: PushEmpty(object, object, object, object)
0x6a8: @ GetScene(Stack[-2])
0x6a9: Pop(0)
0x6aa: Push("scripted")
0x6ab: Push("blood_dir.xml")
0x6ac: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6ad: Pop(2)
0x6ae: PushEmpty(object)
0x6af: Stack[-1] = Stack[-10]
0x6b0: Call2 0x637

0x6b1: Pop(1)
0x6b2: Return(); Pop(4)

0x6b3: Stack[-1] = 0
0x6b4: Stack[-2] = 0
0x6b5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6b6: @@ GetPosition(Stack[-3])
0x6b7: Pop(0)
0x6b8: @ GetPosition(Stack[-2])
0x6b9: Pop(0)
0x6ba: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6bb: Push(CvectorIndex(Stack[-1], 0))
0x6bc: Push(CvectorIndex(Stack[-2], 2))
0x6bd: @ RotateAsync(Stack[-2], Stack[-1])
0x6be: Pop(2)
0x6bf: Return(); Pop(6)

0x6c0: PushEmpty(bool, bool)
0x6c1: @ IsLoaded(Stack[-1])
0x6c2: Pop(0)
0x6c3: Stack[-3] = Stack[-1]
0x6c4: Return(); Pop(2)

0x6c5: PushEmpty(float, cvector, float, cvector)
0x6c6: @@ GetEyesHeight(Stack[-2])
0x6c7: Pop(0)
0x6c8: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6c9: Push(CvectorIndex(Stack[-1], 1))
0x6ca: Stack[-1] = Stack[-3]
0x6cb: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6cc: Push("head")
0x6cd: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6ce: Pop(1)
0x6cf: Return(); Pop(4)

0x6d0: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6d1: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6d2: Pop(0)
0x6d3: Pop(0); Push((bool) Stack[-8] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6d5: Stack[-7] = (int) 0
0x6d6: Push((int) 1)
0x6d7: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6d8: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6d9: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6da: Pop(1)
0x6db: Pop(0); Push((bool) Stack[-6] == 0)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dd: GOTO 0x6e1

0x6de: Push((int) 1)
0x6df: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6e0: GOTO 0x6d6

0x6e1: Pop(0); Push((bool) Stack[-7] == 0)
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e3: Return(); Pop(16)

0x6e4: @ irand(Stack[-5], Stack[-7])
0x6e5: Pop(0)
0x6e6: Push((int) 1)
0x6e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6e8: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x6e9: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x6ea: Pop(0)
0x6eb: Push(Stack[-4])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6ed: @ GetEyesHeight(Stack[-3])
0x6ee: Pop(0)
0x6ef: @ GetDirection(Stack[-2])
0x6f0: Pop(0)
0x6f1: Push((int) 50)
0x6f2: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x6f3: Push(CvectorIndex(Stack[-1], 1))
0x6f4: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x6f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6f6: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x6f7: Pop(0)
0x6f8: Return(); Pop(16)

0x6f9: PushEmpty(object, object)
0x6fa: @ self(Stack[-1])
0x6fb: Pop(0)
0x6fc: Stack[-3] = Stack[-1]
0x6fd: Return(); Pop(2)

0x6fe: Stack[-1] = 0
0x6ff: PushEmpty(float, float)
0x700: Pop(0); Push(Stack[-3] | Stack[-3]);
0x701: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x702: Push((float)0.0)
0x703: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x705: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x706: Return(); Pop(2)

0x707: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x708: Return(); Pop(2)

0x709: PushEmpty()
0x70a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70c: Stack[-3] = Stack[-2]
0x70d: GOTO 0x70f

0x70e: Stack[-3] = Stack[-1]
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-4] = Stack[-2]
0x714: Return(); Pop(0)

0x715: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x717: Stack[-4] = Stack[-1]
0x718: Return(); Pop(0)

0x719: Stack[-4] = Stack[-3]
0x71a: Return(); Pop(0)

0x71b: PushEmpty(object, object)
0x71c: @ CreateFloatVector(Stack[-1])
0x71d: Pop(0)
0x71e: @@ add(Stack[-3])
0x71f: Pop(0)
0x720: Push((int) 0)
0x721: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x723: Push((float)0.7)
0x724: Push((int) 500)
0x725: @ RumblePlay(Stack[-2], Stack[-1])
0x726: Pop(2)
0x727: Push((int) 15)
0x728: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x729: Pop(1)
0x72a: Return(); Pop(2)

0x72b: Stack[-1] = 0
0x72c: PushEmpty(bool, bool)
0x72d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x72e: Pop(0)
0x72f: Push(Stack[-1])
0x730: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x731: Push("attack")
0x732: @ PlayGlobalMusic(Stack[-1])
0x733: Pop(1)
0x734: Return(); Pop(2)

0x735: PushEmpty(object, object)
0x736: @ GetScene(Stack[-1])
0x737: Pop(0)
0x738: Push("battle")
0x739: PushEmpty(object)
0x73a: Call2 0x6f9

0x73b: Pop(0)
0x73c: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x73d: Pop(2)
0x73e: Return(); Pop(2)

0x73f: Stack[-1] = 0
0x740: PushEmpty(string, string)
0x741: Stack[-1] = "idle"
0x742: Push(Stack[-3])
0x743: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x744: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x745: Stack[-4] = Stack[-1]
0x746: Return(); Pop(2)

0x747: PushEmpty(int, bool, int, bool)
0x748: Stack[-2] = (int) 0
0x749: Push("all")
0x74a: PushEmpty(string, int)
0x74b: Stack[-1] = Stack[-5]
0x74c: Call2 0x740

0x74d: Pop(1)
0x74e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x74f: Pop(2)
0x750: Pop(0); Push((bool) Stack[-1] == 0)
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: GOTO 0x756

0x753: Push((int) 1)
0x754: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x755: GOTO 0x749

0x756: Stack[-5] = Stack[-2]
0x757: Return(); Pop(4)

0x758: PushEmpty(int, int)
0x759: Push("branch")
0x75a: @ GetVariable(Stack[-1], Stack[-2])
0x75b: Pop(1)
0x75c: Stack[-3] = Stack[-1]
0x75d: Return(); Pop(2)

0x75e: PushEmpty()
0x75f: PushEmpty(int)
0x760: Call2 0x758

0x761: Pop(0)
0x762: Push((int) 1)
0x763: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x765: @ WorkWithCorpse(Stack[-1])
0x766: Pop(0)
0x767: GOTO 0x76a

0x768: @ Barter(Stack[-1])
0x769: Pop(0)
0x76a: Return(); Pop(0)

0x76b: PushEmpty(object, int, bool, object, int, bool)
0x76c: @ CreateInvItem(Stack[-3])
0x76d: Pop(0)
0x76e: @@ SetItemName(Stack[-7])
0x76f: Pop(0)
0x770: Push("Organ")
0x771: Push((int) 1)
0x772: @@ SetProperty(Stack[-2], Stack[-1])
0x773: Pop(2)
0x774: @@ GetItemID(Stack[-2])
0x775: Pop(0)
0x776: Push((int) 0)
0x777: Push((int) 1)
0x778: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x779: Pop(2)
0x77a: Return(); Pop(6)

0x77b: Stack[-3] = 0
0x77c: PushEmpty(int)
0x77d: Call2 0x758

0x77e: Pop(0)
0x77f: Push((int) 1)
0x780: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: Return(); Pop(0)

0x783: PushEmpty(string)
0x784: Stack[-1] = "liver"
0x785: Call2 0x76b

0x786: Pop(1)
0x787: PushEmpty(string)
0x788: Stack[-1] = "kidney"
0x789: Call2 0x76b

0x78a: Pop(1)
0x78b: PushEmpty(string)
0x78c: Stack[-1] = "heart"
0x78d: Call2 0x76b

0x78e: Pop(1)
0x78f: PushEmpty(string)
0x790: Stack[-1] = "blood"
0x791: Call2 0x76b

0x792: Pop(1)
0x793: Return(); Pop(0)

0x794: PushEmpty(object)
0x795: Call2 0x6f9

0x796: Pop(0)
0x797: @ RemoveActor(Stack[-1])
0x798: Pop(1)
0x799: @ Hold()
0x79a: Pop(0)
0x79b: Return(); Pop(0)

0x79c: PushEmpty(object, object)
0x79d: @ GetScene(Stack[-1])
0x79e: Pop(0)
0x79f: PushEmpty()
0x7a0: Call2 0x77c

0x7a1: Pop(0)
0x7a2: PushEmpty(object)
0x7a3: Stack[-1] = Stack[-4]
0x7a4: Push(-1, 0); TaskCall(4)
0x7a5: Call2 0x4eb

0x7a6: Pop(-1, 0); TaskReturn
0x7a7: Pop(1)
0x7a8: Return(); Pop(2)

0x7a9: Stack[-1] = 0
0x7aa: PushEmpty()
0x7ab: PushEmpty(object, int, float)
0x7ac: Stack[-3] = Stack[-7]
0x7ad: Stack[-2] = Stack[-6]
0x7ae: Stack[-1] = Stack[-5]
0x7af: Call2 0x663

0x7b0: Pop(3)
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty()
0x7b3: PushEmpty(object, int, float, cvector, cvector)
0x7b4: Stack[-5] = Stack[-11]
0x7b5: Stack[-4] = Stack[-10]
0x7b6: Stack[-3] = Stack[-9]
0x7b7: Stack[-2] = Stack[-7]
0x7b8: Stack[-1] = Stack[-6]
0x7b9: Call2 0x6a7

0x7ba: Pop(5)
0x7bb: Return(); Pop(0)

0x7bc: PushEmpty(float, float)
0x7bd: Push("health")
0x7be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c0: Push("health")
0x7c1: @ GetProperty(Stack[-1], Stack[-2])
0x7c2: Pop(1)
0x7c3: Push((int) 0)
0x7c4: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c6: @ SignalDeath(Stack[-4])
0x7c7: Pop(0)
0x7c8: Return(); Pop(2)

0x7c9: PushEmpty()
0x7ca: PushEmpty(object)
0x7cb: Stack[-1] = Stack[-2]
0x7cc: Call2 0x79c

0x7cd: Pop(1)
0x7ce: Return(); Pop(0)

