GlobalVarCount = 1
	G_VAR_0 bool 

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
	reputation
	battle
	god_mode
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
	Knife
	lockpick
	grabitel_mark
	RemoveStationaryActor

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
	WaitForAnimEnd (1 args)
	rand (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
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
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
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
	AddItem (4 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)

RunOp = 0x49c
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 2
	GTASK_1 Vars = (bool) Params = 2
		EVENT_17 Op = 0x90 Vars = (object)
		EVENT_30 Op = 0x96 Vars = (object, object, bool)
		EVENT_26 Op = 0x9d Vars = (string)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0xdb Vars = (object)
		EVENT_30 Op = 0xe1 Vars = (object, object, bool)
		EVENT_26 Op = 0xe8 Vars = (string)
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x384 Vars = (object)
		EVENT_30 Op = 0x38a Vars = (object, object, bool)
		EVENT_26 Op = 0x391 Vars = (string)
		EVENT_7 Op = 0x3cd Vars = (int)
		EVENT_1 Op = 0x3e8 Vars = (object)
		EVENT_2 Op = 0x3f7 Vars = (object)
		EVENT_10 Op = 0x47d Vars = (object)
		EVENT_41 Op = 0x488 Vars = (object)
	GTASK_4  Params = 0
		EVENT_17 Op = 0x4a4 Vars = (object)
		EVENT_1 Op = 0x4b2 Vars = (object)
		EVENT_3 Op = 0x4bc Vars = (object)
	GTASK_5  Params = 1
	GTASK_6  Params = 1
		EVENT_0 Op = 0x54d Vars = (object)
		EVENT_22 Op = 0x5cc Vars = (object, int, float, float)
		EVENT_16 Op = 0x5ce Vars = (object, string)
		EVENT_41 Op = 0x5d0 Vars = (object)

Events:
EVENT_22 Op = 0x857 Vars = (object, int, float, float)
EVENT_43 Op = 0x85f Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x869 Vars = (object, string)
EVENT_41 Op = 0x876 Vars = (object)

0x0: PushEmpty(float, float)
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-5]
0x3: Call2 0x6a7

0x4: Pop(1)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x7: Stack[-4] = (bool) 0
0x8: Return(); Pop(2)

0x9: PushEmpty(float, object)
0xa: Stack[-1] = Stack[-5]
0xb: Call2 0x5e7

0xc: Stack[-3] = Stack[-2]
0xd: Pop(2)
0xe: PushEmpty(bool, float, float, float)
0xf: Stack[-3] = Stack[-5]
0x10: Stack[-2] = (float) 250000.0
0x11: Stack[-1] = (float) 3240000.0
0x12: Call2 0x7d9

0x13: Pop(3)
0x14: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x15: PushEmpty(bool, object)
0x16: Stack[-1] = Stack[-5]
0x17: Push(-2, 1); TaskCall(1)
0x18: Call2 0x25

0x19: Pop(-2, 1); TaskReturn
0x1a: Stack[-6] = Stack[-2]
0x1b: Pop(2)
0x1c: Return(); Pop(2)

0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-5]
0x1f: Push(-2, 6); TaskCall(2)
0x20: Call2 0xa3

0x21: Pop(-2, 6); TaskReturn
0x22: Stack[-6] = Stack[-2]
0x23: Pop(2)
0x24: Return(); Pop(2)

0x25: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x26: PushEmpty(object)
0x27: Stack[-1] = Stack[-16]
0x28: Call2 0x81d

0x29: Pop(1)
0x2a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2b: PushEmpty(bool, object)
0x2c: Stack[-1] = Stack[-17]
0x2d: Call2 0x6c9

0x2e: Pop(2)
0x2f: PushEmpty(bool, object)
0x30: Stack[-1] = Stack[-17]
0x31: Call2 0x6a7

0x32: Pop(1)
0x33: Pop(1); Push((bool) Stack[-1] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x35: Stack[-16] = (bool) 0
0x36: Return(); Pop(14)

0x37: PushEmpty()
0x38: Call2 0x826

0x39: Pop(0)
0x3a: @ Face(Stack[-15])
0x3b: Pop(0)
0x3c: Push("all")
0x3d: Push("aattack_begin1")
0x3e: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: @ WaitForAnimEnd()
0x41: Pop(0)
0x42: PushEmpty(bool, object)
0x43: Stack[-1] = Stack[-17]
0x44: Call2 0x6a7

0x45: Pop(1)
0x46: Pop(1); Push((bool) Stack[-1] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: @ StopAsync()
0x49: Pop(0)
0x4a: Stack[-16] = (bool) 0
0x4b: Return(); Pop(14)

0x4c: Push("all")
0x4d: Push("aattack_end1")
0x4e: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f: Pop(2)
0x50: @ GetScene(Stack[-7])
0x51: Pop(0)
0x52: Push("knife")
0x53: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x54: Pop(1)
0x55: Push("scripted")
0x56: Push(CVector(0.0, 0.0, 1.0))
0x57: Push("grabitel_knife.xml")
0x58: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x59: Pop(3)
0x5a: Push("Owner")
0x5b: PushEmpty(object)
0x5c: Call2 0x79f

0x5d: Pop(0)
0x5e: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: Push("Target")
0x61: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x62: Pop(1)
0x63: @@ GetPosition(Stack[-3])
0x64: Pop(0)
0x65: @@ GetEyesHeight(Stack[-2])
0x66: Pop(0)
0x67: Push(CvectorIndex(Stack[-3], 1))
0x68: Push((int) 10)
0x69: Pop(1); Push(Stack[-4] - Stack[-1]);
0x6a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6b: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x6c: PushEmpty(cvector, cvector, cvector, float)
0x6d: Stack[-3] = Stack[-10]
0x6e: Stack[-2] = Stack[-7]
0x6f: Stack[-1] = (float) 2000.0
0x70: Call2 0x907

0x71: Stack[-5] = Stack[-4]
0x72: Pop(4)
0x73: Push("StartDirection")
0x74: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: @ WaitForAnimEnd()
0x77: Pop(0)
0x78: @ StopAsync()
0x79: Pop(0)
0x7a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-16] = (bool) 1
0x7d: Return(); Pop(14)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[-17]
0x80: Call2 0x6a7

0x81: Pop(1)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: Stack[-16] = (bool) 0
0x85: Return(); Pop(14)

0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[-17]
0x88: Push(-2, 6); TaskCall(2)
0x89: Call2 0xa3

0x8a: Pop(-2, 6); TaskReturn
0x8b: Stack[-18] = Stack[-2]
0x8c: Pop(2)
0x8d: Return(); Pop(14)

0x8e: Stack[-4] = 0
0x8f: Stack[-7] = 0
0x90: PushEmpty()
0x91: PushEmpty(object)
0x92: Stack[-1] = Stack[-2]
0x93: Call2 0x93a

0x94: Pop(1)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: PushEmpty(bool, object, object)
0x98: Stack[-2] = Stack[-6]
0x99: Stack[-1] = Stack[-5]
0x9a: Call2 0x93c

0x9b: Pop(3)
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Push("kill")
0x9f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: Push(GlobalVars[0])
0xa5: Stack[-1] = (bool) 0
0xa6: GlobalVars[0] = Stack[-1]; Pop(1)
0xa7: PushEmpty(object, bool, float)
0xa8: Stack[-3] = Stack[-4]
0xa9: Stack[-2] = (bool) 1
0xaa: Stack[-1] = (float) 200.0
0xab: Call2 0xf0

0xac: Pop(3)
0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 0
0xaf: Push(GlobalVars[0])
0xb0: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb5: Push("all")
0xb6: Push("attack_off")
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: @ WaitForAnimEnd()
0xba: Pop(0)
0xbb: Push(GlobalVars[0])
0xbc: Stack[-3] = Stack[-1]
0xbd: Pop(1)
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Stack[-3] = (float) 0.15
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Stack[-3] = (int) 0
0xc4: Return(); Pop(0)

0xc5: Stack[-1] = (int) 1
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: PushEmpty(bool)
0xc9: Stack[-1] = (bool) 0
0xca: Push((int) 0)
0xcb: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0x65f

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Stack[-1] = (bool) 1
0xd3: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd4: Push(GlobalVars[0])
0xd5: Stack[-1] = (bool) 1
0xd6: GlobalVars[0] = Stack[-1]; Pop(1)
0xd7: PushEmpty()
0xd8: Call2 0x2a8

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: PushEmpty(object)
0xdd: Stack[-1] = Stack[-2]
0xde: Call2 0x93a

0xdf: Pop(1)
0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: PushEmpty(bool, object, object)
0xe3: Stack[-2] = Stack[-6]
0xe4: Stack[-1] = Stack[-5]
0xe5: Call2 0x93c

0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push("kill")
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xec: Push(GlobalVars[0])
0xed: Stack[-1] = (bool) 1
0xee: GlobalVars[0] = Stack[-1]; Pop(1)
0xef: Return(); Pop(0)

0xf0: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xf1: PushEmpty()
0xf2: Call2 0x1d5

0xf3: Pop(0)
0xf4: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xf5: Push("@GetAttackDistance")
0xf6: Push((int) 1)
0xf7: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xf8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf9: @@ GetAttackDistance(Stack[-11])
0xfa: Pop(0)
0xfb: Push((int) 50)
0xfc: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xfd: GOTO 0xff

0xfe: Stack[-11] = Stack[-23]
0xff: Push((int) 150)
0x100: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x102: Stack[-11] = (int) 150
0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x105: @ IsPlayerActor(Stack[-0], Stack[-8])
0x106: Pop(0)
0x107: Push(Stack[-8])
0x108: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x109: Push("attack")
0x10a: @ PlayGlobalMusic(Stack[-1])
0x10b: Pop(1)
0x10c: PushEmpty(object)
0x10d: Call2 0x79f

0x10e: Pop(0)
0x10f: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x110: Pop(1)
0x111: Push(Stack[-24])
0x112: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x113: Stack[-7] = (bool) 0
0x114: GOTO 0x116

0x115: Stack[-7] = (bool) 1
0x116: Push((float)300.0)
0x117: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x118: PushEmpty(bool)
0x119: Stack[-1] = (bool) 0
0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x6a7

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Stack[-1] = (bool) 1
0x122: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x374

0x125: Pop(0)
0x126: @@ GetPFPosition(Stack[-10])
0x127: Pop(0)
0x128: @ GetPFPosition(Stack[-9])
0x129: Pop(0)
0x12a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x12b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x12c: Pop(0); Push(Stack[-6] * Stack[-6]);
0x12d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(bool, object, float, float, bool, bool)
0x130: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x131: Stack[-4] = Stack[-17]
0x132: Stack[-3] = (float) 3000.0
0x133: Stack[-2] = (bool) 1
0x134: Stack[-1] = (bool) 0
0x135: Push(-6, 3); TaskCall(3)
0x136: Call2 0x39c

0x137: Pop(-6, 3); TaskReturn
0x138: Pop(5)
0x139: Pop(1); Push((bool) Stack[-1] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: GOTO 0x1c4

0x13c: Stack[-7] = (bool) 0
0x13d: GOTO 0x1c3

0x13e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x13f: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x141: @@ GetPFPosition(Stack[-3])
0x142: Pop(0)
0x143: @ CanReachByPF(Stack[-2], Stack[-3])
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-2] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x147: PushEmpty(bool, object, float, float, bool, bool)
0x148: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x149: Stack[-4] = Stack[-17]
0x14a: Stack[-3] = (float) 3000.0
0x14b: Stack[-2] = (bool) 1
0x14c: Stack[-1] = (bool) 0
0x14d: Push(-6, 3); TaskCall(3)
0x14e: Call2 0x39c

0x14f: Pop(-6, 3); TaskReturn
0x150: Pop(5)
0x151: Pop(1); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x153: GOTO 0x1c4

0x154: Stack[-7] = (bool) 0
0x155: GOTO 0x118

0x156: Pop(0); Push((bool) Stack[-7] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x158: PushEmpty(object)
0x159: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Call2 0x750

0x15b: Pop(1)
0x15c: Push("all")
0x15d: Push("attack_on")
0x15e: @ PlayAnimation(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: @ WaitForAnimEnd()
0x161: Pop(0)
0x162: PushEmpty()
0x163: Call2 0x374

0x164: Pop(0)
0x165: @ StopAsync()
0x166: Pop(0)
0x167: Stack[-7] = (bool) 1
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x6a7

0x16b: Pop(1)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x1c4

0x16f: @ rand(Stack[-1])
0x170: Pop(0)
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 1
0x173: Push((float)0.2)
0x174: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x349

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 0
0x17b: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x17c: @ Face(Stack[-0])
0x17d: Pop(0)
0x17e: PushEmpty()
0x17f: Call2 0x379

0x180: Pop(0)
0x181: Push("all")
0x182: Push("attack_stay")
0x183: @ PlayAnimation(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: PushEmpty(bool, float)
0x186: Stack[-1] = Stack[-25]
0x187: Call2 0x2c5

0x188: Pop(2)
0x189: @ StopAsync()
0x18a: Pop(0)
0x18b: GOTO 0x1ba

0x18c: @ Face(Stack[-0])
0x18d: Pop(0)
0x18e: Push("all")
0x18f: Push("fjump")
0x190: @ PlayAnimation(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: @ WaitForAnimEnd()
0x193: Pop(0)
0x194: PushEmpty()
0x195: Call2 0x374

0x196: Pop(0)
0x197: Push(CVector(0.0, 0.0, 0.0))
0x198: @ SetSpeed(Stack[-1])
0x199: Pop(1)
0x19a: @ Stop()
0x19b: Pop(0)
0x19c: @ StopAsync()
0x19d: Pop(0)
0x19e: PushEmpty(bool)
0x19f: Call2 0x349

0x1a0: Pop(0)
0x1a1: Pop(1); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a5: Call2 0x6a7

0x1a6: Pop(1)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1c4

0x1aa: @@ GetPFPosition(Stack[-10])
0x1ab: Pop(0)
0x1ac: @ GetPFPosition(Stack[-9])
0x1ad: Pop(0)
0x1ae: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1af: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1b0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1b1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b3: PushEmpty(bool, float)
0x1b4: Stack[-1] = Stack[-25]
0x1b5: Call2 0x21f

0x1b6: Pop(1)
0x1b7: Pop(1); Push((bool) Stack[-1] == 0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: GOTO 0x1c4

0x1ba: GOTO 0x1c3

0x1bb: PushEmpty(bool, float)
0x1bc: Stack[-1] = Stack[-25]
0x1bd: Call2 0x21f

0x1be: Pop(1)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1c4

0x1c2: Stack[-7] = (bool) 1
0x1c3: GOTO 0x118

0x1c4: @ WaitForAnimEnd()
0x1c5: Pop(0)
0x1c6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Return(); Pop(22)

0x1c9: Push("all")
0x1ca: Push("attack_off")
0x1cb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: @ WaitForAnimEnd()
0x1ce: Pop(0)
0x1cf: Push(Stack[-8])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d1: Push((float)2.0)
0x1d2: @ Sleep(Stack[-1])
0x1d3: Pop(1)
0x1d4: Return(); Pop(22)

0x1d5: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1d6: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1d7: Push("all")
0x1d8: Push("attack_begin")
0x1d9: Push((int) 1)
0x1da: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1dc: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Pop(0); Push((bool) Stack[-3] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: GOTO 0x1e4

0x1e1: Push((int) 1)
0x1e2: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1d7

0x1e4: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1e5: Push("attack")
0x1e6: Push((int) 1)
0x1e7: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e9: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1ea: Pop(1)
0x1eb: Pop(0); Push((bool) Stack[-2] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f1

0x1ee: Push((int) 1)
0x1ef: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f0: GOTO 0x1e5

0x1f1: Push("all")
0x1f2: Push("bjump")
0x1f3: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Push(CvectorIndex(Stack[-1], 2))
0x1f6: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1f7: Return(); Pop(6)

0x1f8: PushEmpty(object, float, float, object, float, float)
0x1f9: Push((float)0.9)
0x1fa: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1fb: @ GetVictim(Stack[-1], Stack[-4])
0x1fc: Pop(1)
0x1fd: @ ReportAttack(Stack[-0])
0x1fe: Pop(0)
0x1ff: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x200: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x201: PushEmpty(float, object, int)
0x202: Stack[-2] = Stack[-6]
0x203: Stack[-1] = Stack[-10]
0x204: Call2 0xbf

0x205: Stack[-5] = Stack[-3]
0x206: Pop(3)
0x207: PushEmpty(float, object, float, int)
0x208: Stack[-3] = Stack[-7]
0x209: Stack[-2] = Stack[-6]
0x20a: PushEmpty(int, object, int)
0x20b: Stack[-2] = Stack[-10]
0x20c: Stack[-1] = Stack[-14]
0x20d: Call2 0xc2

0x20e: Stack[-4] = Stack[-3]
0x20f: Pop(3)
0x210: Call2 0x616

0x211: Stack[-5] = Stack[-4]
0x212: Pop(4)
0x213: PushEmpty(int)
0x214: Call2 0xc5

0x215: Pop(0)
0x216: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x217: Pop(1)
0x218: PushEmpty(object, float)
0x219: Stack[-2] = Stack[-5]
0x21a: Stack[-1] = Stack[-3]
0x21b: Call2 0xc7

0x21c: Pop(2)
0x21d: Return(); Pop(6)

0x21e: Stack[-3] = 0
0x21f: PushEmpty(int, bool, int, string, int, bool, int, string)
0x220: PushEmpty()
0x221: Call2 0x374

0x222: Pop(0)
0x223: @ irand(Stack[-4], Stack[-1])
0x224: Pop(0)
0x225: Push((int) 1)
0x226: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x227: @ Face(Stack[-0])
0x228: Pop(0)
0x229: Push((bool) 1)
0x22a: @ SetAttackState(Stack[-1])
0x22b: Pop(1)
0x22c: PushEmpty()
0x22d: Call2 0x826

0x22e: Pop(0)
0x22f: Push("all")
0x230: Push("attack_begin")
0x231: Pop(1); Push(Stack[-1] + Stack[-6]);
0x232: @ PlayAnimation(Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: @ WaitForAnimEnd()
0x235: Pop(0)
0x236: PushEmpty()
0x237: Call2 0x354

0x238: Pop(0)
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23b: Call2 0x6a7

0x23c: Pop(1)
0x23d: Pop(1); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23f: @ StopAsync()
0x240: Pop(0)
0x241: Stack[-10] = (bool) 0
0x242: Return(); Pop(8)

0x243: PushEmpty(float, int)
0x244: Stack[-2] = Stack[-11]
0x245: Stack[-1] = Stack[-6]
0x246: Call2 0x1f8

0x247: Pop(2)
0x248: Push("all")
0x249: Push("attack_middle")
0x24a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x24b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Push(Stack[-3])
0x24e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x24f: PushEmpty()
0x250: Call2 0x826

0x251: Pop(0)
0x252: Push("all")
0x253: Push("attack_middle")
0x254: Pop(1); Push(Stack[-1] + Stack[-6]);
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: @ WaitForAnimEnd()
0x258: Pop(0)
0x259: PushEmpty()
0x25a: Call2 0x374

0x25b: Pop(0)
0x25c: PushEmpty(bool, object)
0x25d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25e: Call2 0x6a7

0x25f: Pop(1)
0x260: Pop(1); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x262: @ StopAsync()
0x263: Pop(0)
0x264: Stack[-10] = (bool) 0
0x265: Return(); Pop(8)

0x266: PushEmpty(float, int)
0x267: Stack[-2] = Stack[-11]
0x268: Stack[-1] = Stack[-6]
0x269: Call2 0x1f8

0x26a: Pop(2)
0x26b: Stack[-2] = (int) 1
0x26c: Push("attack_middle")
0x26d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x26e: Push("_")
0x26f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x270: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x271: Push("all")
0x272: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x273: Pop(1)
0x274: Pop(0); Push((bool) Stack[-3] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x294

0x277: PushEmpty()
0x278: Call2 0x826

0x279: Pop(0)
0x27a: Push("all")
0x27b: @ PlayAnimation(Stack[-1], Stack[-2])
0x27c: Pop(1)
0x27d: @ WaitForAnimEnd()
0x27e: Pop(0)
0x27f: PushEmpty()
0x280: Call2 0x374

0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x6a7

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x288: @ StopAsync()
0x289: Pop(0)
0x28a: Stack[-10] = (bool) 0
0x28b: Return(); Pop(8)

0x28c: PushEmpty(float, int)
0x28d: Stack[-2] = Stack[-11]
0x28e: Stack[-1] = Stack[-6]
0x28f: Call2 0x1f8

0x290: Pop(2)
0x291: Push((int) 1)
0x292: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x293: GOTO 0x26c

0x294: Push((bool) 0)
0x295: @ SetAttackState(Stack[-1])
0x296: Pop(1)
0x297: Push("all")
0x298: Push("attack_end")
0x299: Pop(1); Push(Stack[-1] + Stack[-6]);
0x29a: @ PlayAnimation(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: PushEmpty(bool)
0x29d: Call2 0x37e

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a0: PushEmpty(bool, float)
0x2a1: Stack[-1] = (float) 0.45
0x2a2: Call2 0x2aa

0x2a3: Pop(2)
0x2a4: @ StopAsync()
0x2a5: Pop(0)
0x2a6: Stack[-10] = (bool) 1
0x2a7: Return(); Pop(8)

0x2a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(float, bool, float, bool)
0x2ab: @ rand(Stack[-2])
0x2ac: Pop(0)
0x2ad: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2af: @ IsAnimationPlaying(Stack[-1])
0x2b0: Pop(0)
0x2b1: Pop(0); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: GOTO 0x2bd

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x30c

0x2b6: Pop(0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-6] = (bool) 1
0x2b9: Return(); Pop(4)

0x2ba: @ sync()
0x2bb: Pop(0)
0x2bc: GOTO 0x2af

0x2bd: GOTO 0x2c3

0x2be: @ WaitForAnimEnd()
0x2bf: Pop(0)
0x2c0: PushEmpty()
0x2c1: Call2 0x374

0x2c2: Pop(0)
0x2c3: Stack[-6] = (bool) 0
0x2c4: Return(); Pop(4)

0x2c5: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2c6: @ IsAnimationPlaying(Stack[-5])
0x2c7: Pop(0)
0x2c8: Pop(0); Push((bool) Stack[-5] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2ca: GOTO 0x2eb

0x2cb: PushEmpty(bool)
0x2cc: Call2 0x30c

0x2cd: Pop(0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-12] = (bool) 1
0x2d0: Return(); Pop(10)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d3: Call2 0x6a7

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-12] = (bool) 0
0x2d8: Return(); Pop(10)

0x2d9: @@ GetPFPosition(Stack[-4])
0x2da: Pop(0)
0x2db: @ GetPFPosition(Stack[-3])
0x2dc: Pop(0)
0x2dd: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2de: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2df: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2e0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e2: PushEmpty(bool, float)
0x2e3: Stack[-1] = Stack[-13]
0x2e4: Call2 0x21f

0x2e5: Pop(2)
0x2e6: Stack[-12] = (bool) 1
0x2e7: Return(); Pop(10)

0x2e8: @ sync()
0x2e9: Pop(0)
0x2ea: GOTO 0x2c6

0x2eb: PushEmpty()
0x2ec: Call2 0x374

0x2ed: Pop(0)
0x2ee: Stack[-12] = (bool) 0
0x2ef: Return(); Pop(10)

0x2f0: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2f1: PushEmpty(bool, object)
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call2 0x6a7

0x2f4: Pop(1)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-11] = (bool) 0
0x2f8: Return(); Pop(10)

0x2f9: PushEmpty(bool)
0x2fa: Call2 0x349

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2fd: @@ GetPFPosition(Stack[-5])
0x2fe: Pop(0)
0x2ff: @ GetPFPosition(Stack[-4])
0x300: Pop(0)
0x301: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x302: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x303: @@ GetAttackDistance(Stack[-1])
0x304: Pop(0)
0x305: Push((int) 50)
0x306: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x307: Pop(0); Push(Stack[-1] * Stack[-1]);
0x308: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x309: Return(); Pop(10)

0x30a: Stack[-11] = (bool) 0
0x30b: Return(); Pop(10)

0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: PushEmpty(bool)
0x30f: Call2 0x2f0

0x310: Pop(0)
0x311: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x312: PushEmpty(bool)
0x313: Call2 0x31c

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: Stack[-1] = (bool) 1
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-1] = (bool) 1
0x319: Return(); Pop(0)

0x31a: Stack[-1] = (bool) 0
0x31b: Return(); Pop(0)

0x31c: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x31d: @ GetScene(Stack[-5])
0x31e: Pop(0)
0x31f: Stack[-4] = (bool) 0
0x320: PushEmpty(cvector, object)
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call2 0x5e0

0x323: Pop(1)
0x324: Pop(1); Push(( -Stack[-1])
0x325: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x326: Pop(1)
0x327: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x346

0x32a: @ Face(Stack[-0])
0x32b: Pop(0)
0x32c: Push("all")
0x32d: Push("bjump")
0x32e: @ PlayAnimation(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: @@ GetPFPosition(Stack[-2])
0x331: Pop(0)
0x332: @ GetPFPosition(Stack[-1])
0x333: Pop(0)
0x334: @ WaitForAnimEnd()
0x335: Pop(0)
0x336: PushEmpty()
0x337: Call2 0x374

0x338: Pop(0)
0x339: @ StopAsync()
0x33a: Pop(0)
0x33b: Push(CVector(0.0, 0.0, 0.0))
0x33c: @ SetSpeed(Stack[-1])
0x33d: Pop(1)
0x33e: Stack[-4] = (bool) 1
0x33f: PushEmpty(bool)
0x340: Call2 0x2f0

0x341: Pop(0)
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: GOTO 0x346

0x345: GOTO 0x320

0x346: Stack[-11] = Stack[-4]
0x347: Return(); Pop(10)

0x348: Stack[-5] = 0
0x349: PushEmpty(bool, bool)
0x34a: Push("IsAttacking")
0x34b: Push((int) 1)
0x34c: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x34d: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34e: @@ IsAttacking(Stack[-1])
0x34f: Pop(0)
0x350: Stack[-3] = Stack[-1]
0x351: Return(); Pop(2)

0x352: Stack[-3] = (bool) 0
0x353: Return(); Pop(2)

0x354: PushEmpty(float, int, float, int)
0x355: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(4)

0x358: Push( Stack[5 + Tasks[-1].StackPointer] )
0x359: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35a: Push((int) -1)
0x35b: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x35c: Push((int) 0)
0x35d: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: Return(); Pop(4)

0x360: @ rand(Stack[-2])
0x361: Pop(0)
0x362: PushEmpty(float)
0x363: Call2 0x382

0x364: Pop(0)
0x365: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x367: @ irand(Stack[-1], Stack[-2])
0x368: Pop(0)
0x369: Push((int) 1)
0x36a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x36b: Push("attack")
0x36c: Pop(1); Push(Stack[-1] + Stack[-2]);
0x36d: @ Speak(Stack[-1])
0x36e: Pop(1)
0x36f: PushEmpty(int)
0x370: Call2 0x380

0x371: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x372: Pop(1)
0x373: Return(); Pop(4)

0x374: PushEmpty(object)
0x375: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x376: Call2 0x81d

0x377: Pop(1)
0x378: Return(); Pop(0)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "attack_stay"
0x37b: Call2 0x776

0x37c: Pop(1)
0x37d: Return(); Pop(0)

0x37e: Stack[-1] = (bool) 1
0x37f: Return(); Pop(0)

0x380: Stack[-1] = (int) 1
0x381: Return(); Pop(0)

0x382: Stack[-1] = (float) 0.5
0x383: Return(); Pop(0)

0x384: PushEmpty()
0x385: PushEmpty(object)
0x386: Stack[-1] = Stack[-2]
0x387: Call2 0x93a

0x388: Pop(1)
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: PushEmpty(bool, object, object)
0x38c: Stack[-2] = Stack[-6]
0x38d: Stack[-1] = Stack[-5]
0x38e: Call2 0x93c

0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: Push("kill")
0x393: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x395: Push(GlobalVars[0])
0x396: Stack[-1] = (bool) 1
0x397: GlobalVars[0] = Stack[-1]; Pop(1)
0x398: PushEmpty()
0x399: Call2 0x3db

0x39a: Pop(0)
0x39b: Return(); Pop(0)

0x39c: PushEmpty(bool, bool, bool, bool)
0x39d: PushEmpty(object)
0x39e: Stack[-1] = Stack[-10]
0x39f: Call2 0x81d

0x3a0: Pop(1)
0x3a1: Push((int) 1)
0x3a2: Push((int) 5)
0x3a3: @ SetTimer(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: @ CanSee(Stack[-2], Stack[-9])
0x3a6: Pop(0)
0x3a7: Push(Stack[-2])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3aa: PushEmpty(object)
0x3ab: Stack[-1] = Stack[-10]
0x3ac: Call2 0x760

0x3ad: Pop(1)
0x3ae: GOTO 0x3b0

0x3af: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[-11]
0x3b2: Call2 0x5ef

0x3b3: Pop(1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: PushEmpty(object)
0x3b6: Call2 0x79f

0x3b7: Pop(0)
0x3b8: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3b9: Pop(1)
0x3ba: PushEmpty(bool, object, float, float, bool, bool)
0x3bb: Stack[-5] = Stack[-15]
0x3bc: Stack[-4] = Stack[-14]
0x3bd: Stack[-3] = Stack[-13]
0x3be: Stack[-2] = Stack[-12]
0x3bf: Stack[-1] = Stack[-11]
0x3c0: Call2 0x405

0x3c1: Stack[-7] = Stack[-6]
0x3c2: Pop(6)
0x3c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c5: Push("head")
0x3c6: @ UnlookAsync(Stack[-1])
0x3c7: Pop(1)
0x3c8: Push((int) 1)
0x3c9: @ KillTimer(Stack[-1])
0x3ca: Pop(1)
0x3cb: Stack[-10] = Stack[-1]
0x3cc: Return(); Pop(4)

0x3cd: PushEmpty()
0x3ce: Push((int) 1)
0x3cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: PushEmpty(object)
0x3d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d3: Call2 0x81d

0x3d4: Pop(1)
0x3d5: GOTO 0x3da

0x3d6: PushEmpty(int)
0x3d7: Stack[-1] = Stack[-2]
0x3d8: Call2 0x46b

0x3d9: Pop(1)
0x3da: Return(); Pop(0)

0x3db: Push((int) 1)
0x3dc: @ KillTimer(Stack[-1])
0x3dd: Pop(1)
0x3de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3df: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e1: Push("head")
0x3e2: @ UnlookAsync(Stack[-1])
0x3e3: Pop(1)
0x3e4: PushEmpty()
0x3e5: Call2 0x481

0x3e6: Pop(0)
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty()
0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ed: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ef: Stack[-1] = (bool) 1
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3f2: PushEmpty(object)
0x3f3: Stack[-1] = Stack[-2]
0x3f4: Call2 0x760

0x3f5: Pop(1)
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 0
0x3fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: Stack[-1] = (bool) 1
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x401: Push("head")
0x402: @ UnlookAsync(Stack[-1])
0x403: Pop(1)
0x404: Return(); Pop(0)

0x405: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x406: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x407: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x408: Stack[-7] = Stack[-17]
0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[-23]
0x40b: Call2 0x491

0x40c: Pop(1)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-22] = (bool) 0
0x410: Return(); Pop(16)

0x411: @@ GetPosition(Stack[-5])
0x412: Pop(0)
0x413: @ GetPosition(Stack[-4])
0x414: Pop(0)
0x415: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x416: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x417: PushEmpty(bool)
0x418: Stack[-1] = (bool) 0
0x419: Push((int) 0)
0x41a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x41d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: Stack[-1] = (bool) 1
0x420: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x421: @ Stop()
0x422: Pop(0)
0x423: Stack[-22] = (bool) 0
0x424: Return(); Pop(16)

0x425: Pop(0); Push(Stack[-20] * Stack[-20]);
0x426: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x428: @@ GetPFPosition(Stack[-5])
0x429: Pop(0)
0x42a: @ FindPathTo(Stack[-1], Stack[-5])
0x42b: Pop(0)
0x42c: Pop(0); Push(( Stack[-1] != 0 )
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-6] = Stack[-1]
0x42f: Stack[-1] = 0
0x430: Pop(0); Push(( Stack[-6] != 0 )
0x431: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x432: Push(Stack[-7])
0x433: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x434: Stack[-7] = (bool) 0
0x435: @ RotatePath(Stack[-6], Stack[-8])
0x436: Pop(0)
0x437: Pop(0); Push((bool) Stack[-8] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: GOTO 0x469

0x43a: Push((int) 0)
0x43b: Push((float)0.3)
0x43c: @ SetTimer(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: PushEmpty(string)
0x43f: Call2 0x498

0x440: Pop(0)
0x441: PushEmpty(string)
0x442: Call2 0x49a

0x443: Pop(0)
0x444: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x445: Pop(2)
0x446: Pop(0); Push((bool) Stack[-8] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x448: Push( Stack[0 + Tasks[-1].StackPointer] )
0x449: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44a: Stack[-6] = 0
0x44b: GOTO 0x469

0x44c: GOTO 0x44e

0x44d: GOTO 0x468

0x44e: GOTO 0x450

0x44f: Stack[-6] = 0
0x450: GOTO 0x461

0x451: Push((int) 0)
0x452: @ KillTimer(Stack[-1])
0x453: Pop(1)
0x454: Push((float)0.5)
0x455: @ Sleep(Stack[-1], Stack[-9])
0x456: Pop(1)
0x457: Pop(0); Push((bool) Stack[-8] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x459: Push( Stack[0 + Tasks[-1].StackPointer] )
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-6] = 0
0x45c: GOTO 0x469

0x45d: Push((int) 0)
0x45e: Push((float)0.3)
0x45f: @ SetTimer(Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: Stack[-1] = 0
0x462: GOTO 0x467

0x463: Push((int) 0)
0x464: @ KillTimer(Stack[-1])
0x465: Pop(1)
0x466: GOTO 0x469

0x467: Stack[-6] = 0
0x468: GOTO 0x409

0x469: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x46a: Return(); Pop(16)

0x46b: PushEmpty()
0x46c: Push((int) 0)
0x46d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46f: Return(); Pop(0)

0x470: PushEmpty(bool, object)
0x471: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x472: Call2 0x491

0x473: Pop(1)
0x474: Pop(1); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x477: Push((int) 0)
0x478: @ KillTimer(Stack[-1])
0x479: Pop(1)
0x47a: @ Stop()
0x47b: Pop(0)
0x47c: Return(); Pop(0)

0x47d: PushEmpty()
0x47e: @ RequestClearPath(Stack[-1])
0x47f: Pop(0)
0x480: Return(); Pop(0)

0x481: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x482: Push((int) 0)
0x483: @ KillTimer(Stack[-1])
0x484: Pop(1)
0x485: @ Stop()
0x486: Pop(0)
0x487: Return(); Pop(0)

0x488: PushEmpty()
0x489: PushEmpty()
0x48a: Call2 0x3db

0x48b: Pop(0)
0x48c: PushEmpty(object)
0x48d: Stack[-1] = Stack[-2]
0x48e: Call2 0x876

0x48f: Pop(1)
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[-3]
0x494: Call2 0x6a7

0x495: Stack[-4] = Stack[-2]
0x496: Pop(2)
0x497: Return(); Pop(0)

0x498: Stack[-1] = "walk"
0x499: Return(); Pop(0)

0x49a: Stack[-1] = "run"
0x49b: Return(); Pop(0)

0x49c: Push((int) 3)
0x49d: @ Sleep(Stack[-1])
0x49e: Pop(1)
0x49f: PushEmpty()
0x4a0: Call2 0x4c6

0x4a1: Pop(0)
0x4a2: GOTO 0x49c

0x4a3: Return(); Pop(0)

0x4a4: PushEmpty()
0x4a5: PushEmpty(bool, object)
0x4a6: Stack[-1] = Stack[-3]
0x4a7: Call2 0x87c

0x4a8: Pop(1)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4aa: PushEmpty()
0x4ab: Call2 0x517

0x4ac: Pop(0)
0x4ad: PushEmpty(object)
0x4ae: Stack[-1] = Stack[-2]
0x4af: Call2 0x883

0x4b0: Pop(1)
0x4b1: Return(); Pop(0)

0x4b2: PushEmpty(bool, bool)
0x4b3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4b4: Pop(0)
0x4b5: Push(Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b7: PushEmpty(object)
0x4b8: Stack[-1] = Stack[-4]
0x4b9: Call2 0x4a4

0x4ba: Pop(1)
0x4bb: Return(); Pop(2)

0x4bc: PushEmpty(bool, bool)
0x4bd: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4be: Pop(0)
0x4bf: Push(Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c1: PushEmpty(object)
0x4c2: Stack[-1] = Stack[-4]
0x4c3: Call2 0x4a4

0x4c4: Pop(1)
0x4c5: Return(); Pop(2)

0x4c6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4c7: @ WaitForAnimEnd()
0x4c8: Pop(0)
0x4c9: PushEmpty(bool)
0x4ca: Call2 0x75b

0x4cb: Pop(0)
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Return(); Pop(14)

0x4cf: PushEmpty(int)
0x4d0: Call2 0x83e

0x4d1: Stack[-8] = Stack[-1]
0x4d2: Pop(1)
0x4d3: Stack[-6] = (int) 0
0x4d4: PushEmpty(bool)
0x4d5: Stack[-1] = (bool) 0
0x4d6: Push((int) 5)
0x4d7: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d9: PushEmpty(bool)
0x4da: Call2 0x75b

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Stack[-1] = (bool) 1
0x4de: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4df: Push((int) 3)
0x4e0: @ irand(Stack[-6], Stack[-1])
0x4e1: Pop(1)
0x4e2: Push((int) 0)
0x4e3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4e5: Push(Stack[-7])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e7: @ irand(Stack[-4], Stack[-7])
0x4e8: Pop(0)
0x4e9: Push("all")
0x4ea: PushEmpty(string, int)
0x4eb: Stack[-1] = Stack[-7]
0x4ec: Call2 0x837

0x4ed: Pop(1)
0x4ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ef: Pop(2)
0x4f0: @ WaitForAnimEnd(Stack[-3])
0x4f1: Pop(0)
0x4f2: Pop(0); Push((bool) Stack[-3] == 0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: GOTO 0x512

0x4f5: GOTO 0x507

0x4f6: Push((int) 1)
0x4f7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4f9: Push((int) 4)
0x4fa: @ rand(Stack[-3], Stack[-1])
0x4fb: Pop(1)
0x4fc: Push((int) 1)
0x4fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4fe: @ Sleep(Stack[-1], Stack[-2])
0x4ff: Pop(1)
0x500: Pop(0); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: GOTO 0x512

0x503: GOTO 0x507

0x504: Push(Stack[-6])
0x505: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x506: GOTO 0x512

0x507: PushEmpty(bool)
0x508: Call2 0x515

0x509: Pop(0)
0x50a: Pop(1); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: GOTO 0x512

0x50d: @ ResetAAS()
0x50e: Pop(0)
0x50f: Push((int) 1)
0x510: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x511: GOTO 0x4d4

0x512: @ ResetAAS()
0x513: Pop(0)
0x514: Return(); Pop(14)

0x515: Stack[-1] = (bool) 1
0x516: Return(); Pop(0)

0x517: @ StopAnimation()
0x518: Pop(0)
0x519: @ StopGroup0()
0x51a: Pop(0)
0x51b: Return(); Pop(0)

0x51c: PushEmpty()
0x51d: PushEmpty(bool, object)
0x51e: Stack[-1] = Stack[-3]
0x51f: Push(-2, 0); TaskCall(0)
0x520: Call2 0x0

0x521: Pop(-2, 0); TaskReturn
0x522: Pop(2)
0x523: Push((int) 1)
0x524: @ Sleep(Stack[-1])
0x525: Pop(1)
0x526: GOTO 0x51d

0x527: Return(); Pop(0)

0x528: PushEmpty()
0x529: PushEmpty()
0x52a: Call2 0x8e4

0x52b: Pop(0)
0x52c: PushEmpty()
0x52d: Call2 0x8cc

0x52e: Pop(0)
0x52f: PushEmpty(bool, object)
0x530: Stack[-1] = Stack[-3]
0x531: Call2 0x5ef

0x532: Pop(1)
0x533: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x534: PushEmpty(bool, object, float)
0x535: Stack[-2] = Stack[-4]
0x536: Stack[-1] = (float) 0.02
0x537: Call2 0x7e6

0x538: Pop(3)
0x539: PushEmpty(object)
0x53a: Stack[-1] = Stack[-2]
0x53b: Call2 0x53e

0x53c: Pop(1)
0x53d: Return(); Pop(0)

0x53e: PushEmpty()
0x53f: EventDisable(0)
0x540: PushEmpty(object)
0x541: Stack[-1] = Stack[-2]
0x542: Call2 0x557

0x543: Pop(1)
0x544: Push((int) 50)
0x545: Push((int) 40)
0x546: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x547: Pop(2)
0x548: EventEnable(0)
0x549: @ Hold()
0x54a: Pop(0)
0x54b: GOTO 0x549

0x54c: Return(); Pop(0)

0x54d: PushEmpty(bool, bool)
0x54e: @ IsOverrideActive(Stack[-1])
0x54f: Pop(0)
0x550: Pop(0); Push((bool) Stack[-1] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x552: PushEmpty(object)
0x553: Stack[-1] = Stack[-4]
0x554: Call2 0x88f

0x555: Pop(1)
0x556: Return(); Pop(2)

0x557: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x558: Pop(0); Push((bool) Stack[-21] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55a: PushEmpty(string)
0x55b: Stack[-1] = "fdie"
0x55c: Call2 0x5b2

0x55d: Pop(1)
0x55e: GOTO 0x5b1

0x55f: @@ GetPosition(Stack[-10])
0x560: Pop(0)
0x561: @ GetPosition(Stack[-9])
0x562: Pop(0)
0x563: @ GetDirection(Stack[-8])
0x564: Pop(0)
0x565: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x566: Push(CvectorIndex(Stack[-7], 0))
0x567: Push(CvectorIndex(Stack[-9], 0))
0x568: Pop(2); Push(Stack[-2] * Stack[-1]);
0x569: Push(CvectorIndex(Stack[-8], 2))
0x56a: Push(CvectorIndex(Stack[-10], 2))
0x56b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x56c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x56d: Push((int) 0)
0x56e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-6] = "fdie"
0x571: GOTO 0x573

0x572: Stack[-6] = "bdie"
0x573: @ RemoveRTEnvelope()
0x574: Pop(0)
0x575: @ SetDeathState()
0x576: Pop(0)
0x577: @ Stop()
0x578: Pop(0)
0x579: @ StopAsync()
0x57a: Pop(0)
0x57b: Stack[-5] = Stack[-21]
0x57c: Push("GetScriptProperty")
0x57d: Push((int) 2)
0x57e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x57f: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x580: Push("Owner")
0x581: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x582: Pop(1)
0x583: Push(Stack[-4])
0x584: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x585: Push("Owner")
0x586: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x587: Pop(1)
0x588: Pop(0); Push((bool) Stack[-5] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x58a: Stack[-5] = Stack[-21]
0x58b: Push("@GetEyesHeight")
0x58c: Push((int) 1)
0x58d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x58e: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58f: @@ GetEyesHeight(Stack[-2])
0x590: Pop(0)
0x591: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x592: Push(CvectorIndex(Stack[-1], 1))
0x593: Stack[-1] = Stack[-3]
0x594: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x595: Push("head")
0x596: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x597: Pop(1)
0x598: Stack[-3] = (bool) 1
0x599: GOTO 0x59b

0x59a: Stack[-3] = (bool) 0
0x59b: PushEmpty(string)
0x59c: Stack[-1] = Stack[-7]
0x59d: Call2 0x776

0x59e: Pop(1)
0x59f: Push("all")
0x5a0: @ PlayAnimation(Stack[-1], Stack[-7])
0x5a1: Pop(1)
0x5a2: @ WaitForAnimEnd()
0x5a3: Pop(0)
0x5a4: Push(Stack[-3])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a6: @ StopAsync()
0x5a7: Pop(0)
0x5a8: Push("head")
0x5a9: @ UnlookAsync(Stack[-1])
0x5aa: Pop(1)
0x5ab: Push("all")
0x5ac: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5ad: Pop(1)
0x5ae: @ RemoveEnvelope()
0x5af: Pop(0)
0x5b0: Stack[-5] = 0
0x5b1: Return(); Pop(20)

0x5b2: PushEmpty()
0x5b3: @ RemoveRTEnvelope()
0x5b4: Pop(0)
0x5b5: @ SetDeathState()
0x5b6: Pop(0)
0x5b7: @ Stop()
0x5b8: Pop(0)
0x5b9: @ StopAsync()
0x5ba: Pop(0)
0x5bb: @ StopSecondaryAnimation()
0x5bc: Pop(0)
0x5bd: PushEmpty(string)
0x5be: Stack[-1] = Stack[-2]
0x5bf: Call2 0x776

0x5c0: Pop(1)
0x5c1: Push("all")
0x5c2: @ PlayAnimation(Stack[-1], Stack[-2])
0x5c3: Pop(1)
0x5c4: @ WaitForAnimEnd()
0x5c5: Pop(0)
0x5c6: Push("all")
0x5c7: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5c8: Pop(1)
0x5c9: @ RemoveEnvelope()
0x5ca: Pop(0)
0x5cb: Return(); Pop(0)

0x5cc: PushEmpty()
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty()
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty()
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: Push((int) 2)
0x5d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d6: Stack[-2] = "fire"
0x5d7: Return(); Pop(0)

0x5d8: GOTO 0x5de

0x5d9: Push((int) 1)
0x5da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dc: Stack[-2] = "bullet"
0x5dd: Return(); Pop(0)

0x5de: Stack[-2] = "phys"
0x5df: Return(); Pop(0)

0x5e0: PushEmpty(cvector, cvector, cvector, cvector)
0x5e1: @ GetPosition(Stack[-2])
0x5e2: Pop(0)
0x5e3: @@ GetPosition(Stack[-1])
0x5e4: Pop(0)
0x5e5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e6: Return(); Pop(4)

0x5e7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e8: @ GetPosition(Stack[-3])
0x5e9: Pop(0)
0x5ea: @@ GetPosition(Stack[-2])
0x5eb: Pop(0)
0x5ec: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5ed: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5ee: Return(); Pop(6)

0x5ef: PushEmpty(bool, bool)
0x5f0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5f1: Pop(0)
0x5f2: Stack[-4] = Stack[-1]
0x5f3: Return(); Pop(2)

0x5f4: PushEmpty(bool, bool)
0x5f5: Push("HasProperty")
0x5f6: Push((int) 2)
0x5f7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f8: Pop(1); Push((bool) Stack[-1] == 0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-5] = (bool) 0
0x5fb: Return(); Pop(2)

0x5fc: @@ HasProperty(Stack[-3], Stack[-1])
0x5fd: Pop(0)
0x5fe: Stack[-5] = Stack[-1]
0x5ff: Return(); Pop(2)

0x600: PushEmpty(float, float)
0x601: PushEmpty(bool, object, string)
0x602: Stack[-2] = Stack[-10]
0x603: Stack[-1] = Stack[-9]
0x604: Call2 0x5f4

0x605: Pop(2)
0x606: Pop(1); Push((bool) Stack[-1] == 0)
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-8] = (bool) 0
0x609: Return(); Pop(2)

0x60a: @@ GetProperty(Stack[-6], Stack[-1])
0x60b: Pop(0)
0x60c: PushEmpty(float, float, float, float)
0x60d: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x60e: Stack[-2] = Stack[-8]
0x60f: Stack[-1] = Stack[-7]
0x610: Call2 0x7ce

0x611: Pop(3)
0x612: @@ SetProperty(Stack[-7], Stack[-1])
0x613: Pop(1)
0x614: Stack[-8] = (bool) 1
0x615: Return(); Pop(2)

0x616: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x617: PushEmpty(bool, object, string)
0x618: Stack[-2] = Stack[-18]
0x619: Stack[-1] = "health"
0x61a: Call2 0x5f4

0x61b: Pop(2)
0x61c: Pop(1); Push((bool) Stack[-1] == 0)
0x61d: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61e: Stack[-16] = (float) 0.0
0x61f: Return(); Pop(12)

0x620: PushEmpty(bool, object, string)
0x621: Stack[-2] = Stack[-18]
0x622: Stack[-1] = "armor"
0x623: Call2 0x5f4

0x624: Pop(2)
0x625: Pop(1); Push((bool) Stack[-1] == 0)
0x626: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x627: Stack[-6] = (int) 0
0x628: GOTO 0x62c

0x629: Push("armor")
0x62a: @@ GetProperty(Stack[-1], Stack[-7])
0x62b: Pop(1)
0x62c: Push("armor_")
0x62d: PushEmpty(string, int)
0x62e: Stack[-1] = Stack[-16]
0x62f: Call2 0x5d2

0x630: Pop(1)
0x631: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x632: PushEmpty(bool, object, string)
0x633: Stack[-2] = Stack[-18]
0x634: Stack[-1] = Stack[-8]
0x635: Call2 0x5f4

0x636: Pop(2)
0x637: Pop(1); Push((bool) Stack[-1] == 0)
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-4] = (int) 0
0x63a: GOTO 0x63d

0x63b: @@ GetProperty(Stack[-5], Stack[-4])
0x63c: Pop(0)
0x63d: PushEmpty(float, float, float)
0x63e: Pop(0); Push(Stack[-9] + Stack[-7]);
0x63f: Push((float)100.0)
0x640: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x641: Stack[-1] = (int) 1
0x642: Call2 0x7af

0x643: Stack[-6] = Stack[-3]
0x644: Pop(3)
0x645: Push("health")
0x646: @@ GetProperty(Stack[-1], Stack[-3])
0x647: Pop(1)
0x648: Push((int) 1)
0x649: Pop(1); Push(Stack[-1] - Stack[-4]);
0x64a: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x64b: Push("health")
0x64c: PushEmpty(float, float, float, float)
0x64d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x64e: Stack[-2] = (int) 0
0x64f: Stack[-1] = (int) 1
0x650: Call2 0x7ce

0x651: Pop(3)
0x652: @@ SetProperty(Stack[-2], Stack[-1])
0x653: Pop(2)
0x654: PushEmpty(bool, object)
0x655: Stack[-1] = Stack[-17]
0x656: Call2 0x5ef

0x657: Pop(1)
0x658: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x659: PushEmpty(float)
0x65a: Stack[-1] = -Stack[-2]; Pop(0);
0x65b: Call2 0x809

0x65c: Pop(1)
0x65d: Stack[-16] = Stack[-1]
0x65e: Return(); Pop(12)

0x65f: PushEmpty(float, float)
0x660: PushEmpty(bool, object, string)
0x661: Stack[-2] = Stack[-6]
0x662: Stack[-1] = "health"
0x663: Call2 0x5f4

0x664: Pop(2)
0x665: Pop(1); Push((bool) Stack[-1] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-4] = (bool) 0
0x668: Return(); Pop(2)

0x669: PushEmpty(bool)
0x66a: Stack[-1] = (bool) 0
0x66b: PushEmpty(bool, object)
0x66c: Stack[-1] = Stack[-6]
0x66d: Call2 0x5ef

0x66e: Pop(1)
0x66f: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x670: PushEmpty(bool)
0x671: Call2 0x831

0x672: Pop(0)
0x673: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x674: Stack[-1] = (bool) 1
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-4] = (bool) 0
0x677: Return(); Pop(2)

0x678: Push("health")
0x679: @@ GetProperty(Stack[-1], Stack[-2])
0x67a: Pop(1)
0x67b: Push((float)0.0)
0x67c: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x67d: Return(); Pop(2)

0x67e: PushEmpty(bool, bool)
0x67f: @@ IsDead(Stack[-1])
0x680: Pop(0)
0x681: Stack[-4] = Stack[-1]
0x682: Return(); Pop(2)

0x683: PushEmpty(object, object, object, object)
0x684: Pop(0); Push((bool) Stack[-5] == 0)
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-6] = (bool) 0
0x687: Return(); Pop(4)

0x688: PushEmpty(bool)
0x689: Stack[-1] = (bool) 0
0x68a: Push("IsDead")
0x68b: Push((int) 1)
0x68c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x68d: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x68e: PushEmpty(bool, object)
0x68f: Stack[-1] = Stack[-8]
0x690: Call2 0x67e

0x691: Pop(1)
0x692: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x693: Stack[-1] = (bool) 1
0x694: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x695: Stack[-6] = (bool) 0
0x696: Return(); Pop(4)

0x697: @ GetScene(Stack[-2])
0x698: Pop(0)
0x699: Pop(0); Push((bool) Stack[-2] == 0)
0x69a: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69b: Stack[-6] = (bool) 0
0x69c: Return(); Pop(4)

0x69d: @@ GetScene(Stack[-1])
0x69e: Pop(0)
0x69f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-6] = (bool) 0
0x6a2: Return(); Pop(4)

0x6a3: Stack[-6] = (bool) 1
0x6a4: Return(); Pop(4)

0x6a5: Stack[-1] = 0
0x6a6: Stack[-2] = 0
0x6a7: PushEmpty(int, int)
0x6a8: PushEmpty(bool, object)
0x6a9: Stack[-1] = Stack[-5]
0x6aa: Call2 0x683

0x6ab: Pop(1)
0x6ac: Pop(1); Push((bool) Stack[-1] == 0)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ae: Stack[-4] = (bool) 0
0x6af: Return(); Pop(2)

0x6b0: PushEmpty(bool, object, string)
0x6b1: Stack[-2] = Stack[-6]
0x6b2: Stack[-1] = "noaccess"
0x6b3: Call2 0x5f4

0x6b4: Pop(2)
0x6b5: Pop(1); Push((bool) Stack[-1] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b7: Stack[-4] = (bool) 1
0x6b8: Return(); Pop(2)

0x6b9: Push("noaccess")
0x6ba: @@ GetProperty(Stack[-1], Stack[-2])
0x6bb: Pop(1)
0x6bc: Push((int) 0)
0x6bd: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6be: Return(); Pop(2)

0x6bf: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6c0: @ GetPosition(Stack[-3])
0x6c1: Pop(0)
0x6c2: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6c3: Push(CvectorIndex(Stack[-2], 0))
0x6c4: Push(CvectorIndex(Stack[-3], 2))
0x6c5: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6c6: Pop(2)
0x6c7: Stack[-8] = Stack[-1]
0x6c8: Return(); Pop(6)

0x6c9: PushEmpty(cvector, cvector)
0x6ca: @@ GetPosition(Stack[-1])
0x6cb: Pop(0)
0x6cc: PushEmpty(bool, cvector)
0x6cd: Stack[-1] = Stack[-3]
0x6ce: Call2 0x6bf

0x6cf: Stack[-6] = Stack[-2]
0x6d0: Pop(2)
0x6d1: Return(); Pop(2)

0x6d2: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6d3: Pop(0); Push((bool) Stack[-15] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: Return(); Pop(14)

0x6d6: @ IsDead(Stack[-7])
0x6d7: Pop(0)
0x6d8: Push(Stack[-7])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6da: Return(); Pop(14)

0x6db: @ GetSecondaryAnimationType(Stack[-6])
0x6dc: Pop(0)
0x6dd: Push((int) 0)
0x6de: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6e0: Return(); Pop(14)

0x6e1: @@ GetPosition(Stack[-5])
0x6e2: Pop(0)
0x6e3: @ GetPosition(Stack[-4])
0x6e4: Pop(0)
0x6e5: @ GetDirection(Stack[-3])
0x6e6: Pop(0)
0x6e7: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6e8: Push(CvectorIndex(Stack[-2], 0))
0x6e9: Push(CvectorIndex(Stack[-4], 0))
0x6ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6eb: Push(CvectorIndex(Stack[-3], 2))
0x6ec: Push(CvectorIndex(Stack[-5], 2))
0x6ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ef: Push((int) 0)
0x6f0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-1] = "fhit"
0x6f3: GOTO 0x6f5

0x6f4: Stack[-1] = "bhit"
0x6f5: Push("hit_react")
0x6f6: Push("1")
0x6f7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f8: Push("2")
0x6f9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6fa: Push((int) -10)
0x6fb: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(4)
0x6fd: Return(); Pop(14)

0x6fe: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6ff: PushEmpty(bool)
0x700: Stack[-1] = (bool) 0
0x701: PushEmpty(bool)
0x702: Stack[-1] = (bool) 0
0x703: Push(Stack[-23])
0x704: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x705: Push((int) 4)
0x706: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x708: Stack[-1] = (bool) 1
0x709: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70a: Push((int) 5)
0x70b: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: Stack[-1] = (bool) 1
0x70e: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x70f: PushEmpty(cvector, cvector)
0x710: PushEmpty(cvector, object)
0x711: Stack[-1] = Stack[-25]
0x712: Call2 0x5e0

0x713: Stack[-3] = Stack[-2]
0x714: Pop(2)
0x715: Call2 0x7a5

0x716: Stack[-11] = Stack[-2]
0x717: Pop(2)
0x718: @ CreateVectorVector(Stack[-8])
0x719: Pop(0)
0x71a: Stack[-7] = (int) 1
0x71b: Push("hit")
0x71c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x71d: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x71e: Pop(1)
0x71f: Pop(0); Push((bool) Stack[-6] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: GOTO 0x72b

0x722: Pop(0); Push(Stack[-4] | Stack[-9]);
0x723: Push((float)0.70711)
0x724: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x726: @@ add(Stack[-5])
0x727: Pop(0)
0x728: Push((int) 1)
0x729: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x72a: GOTO 0x71b

0x72b: @@ size(Stack[-3])
0x72c: Pop(0)
0x72d: Push(Stack[-3])
0x72e: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x72f: @ irand(Stack[-2], Stack[-3])
0x730: Pop(0)
0x731: @@ get(Stack[-1], Stack[-2])
0x732: Pop(0)
0x733: PushEmpty(object, int, float, cvector, cvector)
0x734: Stack[-5] = Stack[-26]
0x735: Stack[-4] = Stack[-25]
0x736: Stack[-3] = Stack[-24]
0x737: Stack[-2] = Stack[-6]
0x738: Stack[-1] = -Stack[-14]; Pop(0);
0x739: Call2 0x742

0x73a: Pop(5)
0x73b: Return(); Pop(18)

0x73c: Stack[-8] = 0
0x73d: PushEmpty(object)
0x73e: Stack[-1] = Stack[-22]
0x73f: Call2 0x6d2

0x740: Pop(1)
0x741: Return(); Pop(18)

0x742: PushEmpty(object, object, object, object)
0x743: @ GetScene(Stack[-2])
0x744: Pop(0)
0x745: Push("scripted")
0x746: Push("blood_dir.xml")
0x747: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x748: Pop(2)
0x749: PushEmpty(object)
0x74a: Stack[-1] = Stack[-10]
0x74b: Call2 0x6d2

0x74c: Pop(1)
0x74d: Return(); Pop(4)

0x74e: Stack[-1] = 0
0x74f: Stack[-2] = 0
0x750: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x751: @@ GetPosition(Stack[-3])
0x752: Pop(0)
0x753: @ GetPosition(Stack[-2])
0x754: Pop(0)
0x755: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x756: Push(CvectorIndex(Stack[-1], 0))
0x757: Push(CvectorIndex(Stack[-2], 2))
0x758: @ RotateAsync(Stack[-2], Stack[-1])
0x759: Pop(2)
0x75a: Return(); Pop(6)

0x75b: PushEmpty(bool, bool)
0x75c: @ IsLoaded(Stack[-1])
0x75d: Pop(0)
0x75e: Stack[-3] = Stack[-1]
0x75f: Return(); Pop(2)

0x760: PushEmpty(float, cvector, float, cvector)
0x761: @@ GetEyesHeight(Stack[-2])
0x762: Pop(0)
0x763: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x764: Push(CvectorIndex(Stack[-1], 1))
0x765: Stack[-1] = Stack[-3]
0x766: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x767: Push("head")
0x768: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x769: Pop(1)
0x76a: Return(); Pop(4)

0x76b: PushEmpty(bool, bool)
0x76c: PushEmpty(bool, int, int)
0x76d: Stack[-2] = Stack[-7]
0x76e: Stack[-1] = Stack[-6]
0x76f: Call2 0x7e1

0x770: Pop(2)
0x771: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x772: Push((int) 0)
0x773: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x774: Pop(1)
0x775: Return(); Pop(2)

0x776: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x777: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x778: Pop(0)
0x779: Pop(0); Push((bool) Stack[-8] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x77b: Stack[-7] = (int) 0
0x77c: Push((int) 1)
0x77d: Pop(1); Push(Stack[-8] + Stack[-1]);
0x77e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x77f: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x780: Pop(1)
0x781: Pop(0); Push((bool) Stack[-6] == 0)
0x782: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x783: GOTO 0x787

0x784: Push((int) 1)
0x785: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x786: GOTO 0x77c

0x787: Pop(0); Push((bool) Stack[-7] == 0)
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: Return(); Pop(16)

0x78a: @ irand(Stack[-5], Stack[-7])
0x78b: Pop(0)
0x78c: Push((int) 1)
0x78d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x78e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x78f: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x790: Pop(0)
0x791: Push(Stack[-4])
0x792: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x793: @ GetEyesHeight(Stack[-3])
0x794: Pop(0)
0x795: @ GetDirection(Stack[-2])
0x796: Pop(0)
0x797: Push((int) 50)
0x798: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x799: Push(CvectorIndex(Stack[-1], 1))
0x79a: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x79b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x79c: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x79d: Pop(0)
0x79e: Return(); Pop(16)

0x79f: PushEmpty(object, object)
0x7a0: @ self(Stack[-1])
0x7a1: Pop(0)
0x7a2: Stack[-3] = Stack[-1]
0x7a3: Return(); Pop(2)

0x7a4: Stack[-1] = 0
0x7a5: PushEmpty(float, float)
0x7a6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7a7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7a8: Push((float)0.0)
0x7a9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7ac: Return(); Pop(2)

0x7ad: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7ae: Return(); Pop(2)

0x7af: PushEmpty()
0x7b0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b2: Stack[-3] = Stack[-2]
0x7b3: GOTO 0x7b5

0x7b4: Stack[-3] = Stack[-1]
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty()
0x7b7: Pop(0); Push(Stack[-2] * Stack[-2]);
0x7b8: Push((int) 4)
0x7b9: Pop(1); Push(Stack[-1] * Stack[-5]);
0x7ba: Pop(1); Push(Stack[-1] * Stack[-3]);
0x7bb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7bc: Return(); Pop(0)

0x7bd: PushEmpty(float, float)
0x7be: Pop(0); Push(( -Stack[-5])
0x7bf: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7c0: Push((int) 2)
0x7c1: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7c2: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7c3: Push((int) 0)
0x7c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c6: Stack[-7] = Stack[-1]
0x7c7: Return(); Pop(2)

0x7c8: Pop(0); Push(( -Stack[-5])
0x7c9: Pop(1); Push(Stack[-1] + Stack[-4]);
0x7ca: Push((int) 2)
0x7cb: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7cc: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x7cd: Return(); Pop(2)

0x7ce: PushEmpty()
0x7cf: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d1: Stack[-4] = Stack[-2]
0x7d2: Return(); Pop(0)

0x7d3: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d5: Stack[-4] = Stack[-1]
0x7d6: Return(); Pop(0)

0x7d7: Stack[-4] = Stack[-3]
0x7d8: Return(); Pop(0)

0x7d9: PushEmpty()
0x7da: Stack[-4] = (bool) 0
0x7db: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7dd: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7df: Stack[-4] = (bool) 1
0x7e0: Return(); Pop(0)

0x7e1: PushEmpty(int, int)
0x7e2: @ irand(Stack[-1], Stack[-3])
0x7e3: Pop(0)
0x7e4: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x7e5: Return(); Pop(2)

0x7e6: PushEmpty()
0x7e7: Pop(0); Push((bool) Stack[-2] == 0)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: Stack[-3] = (bool) 0
0x7ea: Return(); Pop(0)

0x7eb: Push((int) 0)
0x7ec: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ee: Push((int) 8)
0x7ef: @ SendWorldWndMessage(Stack[-1])
0x7f0: Pop(1)
0x7f1: GOTO 0x7fb

0x7f2: Push((int) 0)
0x7f3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f5: Push((int) 9)
0x7f6: @ SendWorldWndMessage(Stack[-1])
0x7f7: Pop(1)
0x7f8: GOTO 0x7fb

0x7f9: Stack[-3] = (bool) 0
0x7fa: Return(); Pop(0)

0x7fb: PushEmpty(float)
0x7fc: Stack[-1] = Stack[-2]
0x7fd: Call2 0x813

0x7fe: Pop(1)
0x7ff: PushEmpty(bool, object, string, float, float, float)
0x800: Stack[-5] = Stack[-8]
0x801: Stack[-4] = "reputation"
0x802: Stack[-3] = Stack[-7]
0x803: Stack[-2] = (int) 0
0x804: Stack[-1] = (int) 1
0x805: Call2 0x600

0x806: Pop(6)
0x807: Stack[-3] = (bool) 1
0x808: Return(); Pop(0)

0x809: PushEmpty(object, object)
0x80a: @ CreateFloatVector(Stack[-1])
0x80b: Pop(0)
0x80c: @@ add(Stack[-3])
0x80d: Pop(0)
0x80e: Push((int) 15)
0x80f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x810: Pop(1)
0x811: Return(); Pop(2)

0x812: Stack[-1] = 0
0x813: PushEmpty(object, object)
0x814: @ CreateFloatVector(Stack[-1])
0x815: Pop(0)
0x816: @@ add(Stack[-3])
0x817: Pop(0)
0x818: Push((int) 16)
0x819: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x81a: Pop(1)
0x81b: Return(); Pop(2)

0x81c: Stack[-1] = 0
0x81d: PushEmpty(bool, bool)
0x81e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x81f: Pop(0)
0x820: Push(Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x822: Push("attack")
0x823: @ PlayGlobalMusic(Stack[-1])
0x824: Pop(1)
0x825: Return(); Pop(2)

0x826: PushEmpty(object, object)
0x827: @ GetScene(Stack[-1])
0x828: Pop(0)
0x829: Push("battle")
0x82a: PushEmpty(object)
0x82b: Call2 0x79f

0x82c: Pop(0)
0x82d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x82e: Pop(2)
0x82f: Return(); Pop(2)

0x830: Stack[-1] = 0
0x831: PushEmpty(bool, bool)
0x832: Push("god_mode")
0x833: @ GetVariable(Stack[-1], Stack[-2])
0x834: Pop(1)
0x835: Stack[-3] = Stack[-1]
0x836: Return(); Pop(2)

0x837: PushEmpty(string, string)
0x838: Stack[-1] = "idle"
0x839: Push(Stack[-3])
0x83a: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x83c: Stack[-4] = Stack[-1]
0x83d: Return(); Pop(2)

0x83e: PushEmpty(int, bool, int, bool)
0x83f: Stack[-2] = (int) 0
0x840: Push("all")
0x841: PushEmpty(string, int)
0x842: Stack[-1] = Stack[-5]
0x843: Call2 0x837

0x844: Pop(1)
0x845: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x846: Pop(2)
0x847: Pop(0); Push((bool) Stack[-1] == 0)
0x848: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x849: GOTO 0x84d

0x84a: Push((int) 1)
0x84b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x84c: GOTO 0x840

0x84d: Stack[-5] = Stack[-2]
0x84e: Return(); Pop(4)

0x84f: PushEmpty()
0x850: PushEmpty(object)
0x851: Stack[-1] = Stack[-2]
0x852: Push(-1, 0); TaskCall(6)
0x853: Call2 0x528

0x854: Pop(-1, 0); TaskReturn
0x855: Pop(1)
0x856: Return(); Pop(0)

0x857: PushEmpty()
0x858: PushEmpty(object, int, float)
0x859: Stack[-3] = Stack[-7]
0x85a: Stack[-2] = Stack[-6]
0x85b: Stack[-1] = Stack[-5]
0x85c: Call2 0x6fe

0x85d: Pop(3)
0x85e: Return(); Pop(0)

0x85f: PushEmpty()
0x860: PushEmpty(object, int, float, cvector, cvector)
0x861: Stack[-5] = Stack[-11]
0x862: Stack[-4] = Stack[-10]
0x863: Stack[-3] = Stack[-9]
0x864: Stack[-2] = Stack[-7]
0x865: Stack[-1] = Stack[-6]
0x866: Call2 0x742

0x867: Pop(5)
0x868: Return(); Pop(0)

0x869: PushEmpty(float, float)
0x86a: Push("health")
0x86b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x86d: Push("health")
0x86e: @ GetProperty(Stack[-1], Stack[-2])
0x86f: Pop(1)
0x870: Push((int) 0)
0x871: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x873: @ SignalDeath(Stack[-4])
0x874: Pop(0)
0x875: Return(); Pop(2)

0x876: PushEmpty()
0x877: PushEmpty(object)
0x878: Stack[-1] = Stack[-2]
0x879: Call2 0x84f

0x87a: Pop(1)
0x87b: Return(); Pop(0)

0x87c: PushEmpty()
0x87d: PushEmpty(bool, object)
0x87e: Stack[-1] = Stack[-3]
0x87f: Call2 0x6a7

0x880: Stack[-4] = Stack[-2]
0x881: Pop(2)
0x882: Return(); Pop(0)

0x883: PushEmpty()
0x884: PushEmpty(object)
0x885: Stack[-1] = Stack[-2]
0x886: Call2 0x92a

0x887: Pop(1)
0x888: Return(); Pop(0)

0x889: PushEmpty(int, int)
0x88a: Push("branch")
0x88b: @ GetVariable(Stack[-1], Stack[-2])
0x88c: Pop(1)
0x88d: Stack[-3] = Stack[-1]
0x88e: Return(); Pop(2)

0x88f: PushEmpty()
0x890: PushEmpty(int)
0x891: Call2 0x889

0x892: Pop(0)
0x893: Push((int) 1)
0x894: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x896: @ WorkWithCorpse(Stack[-1])
0x897: Pop(0)
0x898: GOTO 0x89b

0x899: @ Barter(Stack[-1])
0x89a: Pop(0)
0x89b: Return(); Pop(0)

0x89c: PushEmpty(int, bool, int, bool)
0x89d: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89f: Push("GenerateMoney: iMin > iMax")
0x8a0: @ Trace(Stack[-1])
0x8a1: Pop(1)
0x8a2: Return(); Pop(4)

0x8a3: Stack[-2] = (int) 0
0x8a4: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x8a5: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a6: Pop(0); Push(Stack[-5] - Stack[-6]);
0x8a7: @ irand(Stack[-3], Stack[-1])
0x8a8: Pop(1)
0x8a9: GOTO 0x8ae

0x8aa: Push((int) 0)
0x8ab: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: Return(); Pop(4)

0x8ae: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x8af: Push((int) 0)
0x8b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b2: Return(); Pop(4)

0x8b3: PushEmpty(int, string)
0x8b4: Stack[-1] = "Money"
0x8b5: Call2 0x902

0x8b6: Pop(1)
0x8b7: Push((int) 0)
0x8b8: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x8b9: Pop(2)
0x8ba: Return(); Pop(4)

0x8bb: PushEmpty(object, int, bool, object, int, bool)
0x8bc: @ CreateInvItem(Stack[-3])
0x8bd: Pop(0)
0x8be: @@ SetItemName(Stack[-7])
0x8bf: Pop(0)
0x8c0: Push("Organ")
0x8c1: Push((int) 1)
0x8c2: @@ SetProperty(Stack[-2], Stack[-1])
0x8c3: Pop(2)
0x8c4: @@ GetItemID(Stack[-2])
0x8c5: Pop(0)
0x8c6: Push((int) 0)
0x8c7: Push((int) 1)
0x8c8: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8c9: Pop(2)
0x8ca: Return(); Pop(6)

0x8cb: Stack[-3] = 0
0x8cc: PushEmpty(int)
0x8cd: Call2 0x889

0x8ce: Pop(0)
0x8cf: Push((int) 1)
0x8d0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d2: Return(); Pop(0)

0x8d3: PushEmpty(string)
0x8d4: Stack[-1] = "liver"
0x8d5: Call2 0x8bb

0x8d6: Pop(1)
0x8d7: PushEmpty(string)
0x8d8: Stack[-1] = "kidney"
0x8d9: Call2 0x8bb

0x8da: Pop(1)
0x8db: PushEmpty(string)
0x8dc: Stack[-1] = "heart"
0x8dd: Call2 0x8bb

0x8de: Pop(1)
0x8df: PushEmpty(string)
0x8e0: Stack[-1] = "blood"
0x8e1: Call2 0x8bb

0x8e2: Pop(1)
0x8e3: Return(); Pop(0)

0x8e4: PushEmpty(int, bool, int, bool)
0x8e5: Push((int) 0)
0x8e6: @ ClearSubContainer(Stack[-1])
0x8e7: Pop(1)
0x8e8: PushEmpty(int, int)
0x8e9: Stack[-2] = (int) 300
0x8ea: Stack[-1] = (int) 750
0x8eb: Call2 0x89c

0x8ec: Pop(2)
0x8ed: PushEmpty(string, int, int)
0x8ee: Stack[-3] = "Knife"
0x8ef: Stack[-2] = (int) 1
0x8f0: Stack[-1] = (int) 8
0x8f1: Call2 0x76b

0x8f2: Pop(3)
0x8f3: PushEmpty(string, int, int)
0x8f4: Stack[-3] = "lockpick"
0x8f5: Stack[-2] = (int) 1
0x8f6: Stack[-1] = (int) 6
0x8f7: Call2 0x76b

0x8f8: Pop(3)
0x8f9: PushEmpty(int, string)
0x8fa: Stack[-1] = "grabitel_mark"
0x8fb: Call2 0x902

0x8fc: Pop(1)
0x8fd: Push((int) 0)
0x8fe: Push((int) 1)
0x8ff: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x900: Pop(3)
0x901: Return(); Pop(4)

0x902: PushEmpty(int, int)
0x903: @ GetInvItemByName(Stack[-1], Stack[-3])
0x904: Pop(0)
0x905: Stack[-4] = Stack[-1]
0x906: Return(); Pop(2)

0x907: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x908: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x909: Stack[-5] = (int) 250000
0x90a: Push(CvectorIndex(Stack[-6], 1))
0x90b: Push((int) 1000)
0x90c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x90d: Pop(0); Push(Stack[-14] * Stack[-14]);
0x90e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x90f: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x910: PushEmpty(float, float, float, float)
0x911: Stack[-3] = Stack[-9]
0x912: Stack[-2] = Stack[-8]
0x913: Stack[-1] = Stack[-7]
0x914: Call2 0x7b6

0x915: Stack[-6] = Stack[-4]
0x916: Pop(4)
0x917: Push((int) 0)
0x918: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91a: Stack[-1] = (int) 1
0x91b: GOTO 0x924

0x91c: PushEmpty(float, float, float, float, float)
0x91d: Stack[-4] = Stack[-10]
0x91e: Stack[-3] = Stack[-9]
0x91f: Stack[-2] = Stack[-8]
0x920: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x921: Call2 0x7bd

0x922: Pop(4)
0x923: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x924: Push(CVector(0.0, 500.0, 0.0))
0x925: Pop(1); Push(Stack[-1] * Stack[-2]);
0x926: Pop(1); Push(Stack[-1] * Stack[-2]);
0x927: Pop(1); Push(Stack[-7] + Stack[-1]);
0x928: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x929: Return(); Pop(12)

0x92a: PushEmpty(object, object)
0x92b: @ GetScene(Stack[-1])
0x92c: Pop(0)
0x92d: PushEmpty(object)
0x92e: Call2 0x79f

0x92f: Pop(0)
0x930: @@ RemoveStationaryActor(Stack[-1])
0x931: Pop(1)
0x932: PushEmpty(object)
0x933: Stack[-1] = Stack[-4]
0x934: Push(-1, 0); TaskCall(5)
0x935: Call2 0x51c

0x936: Pop(-1, 0); TaskReturn
0x937: Pop(1)
0x938: Return(); Pop(2)

0x939: Stack[-1] = 0
0x93a: PushEmpty()
0x93b: Return(); Pop(0)

0x93c: PushEmpty()
0x93d: Stack[-3] = (bool) 0
0x93e: Return(); Pop(0)

