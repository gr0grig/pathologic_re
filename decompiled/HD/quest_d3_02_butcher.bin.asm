GlobalVarCount = 0

Strings:
	trigger
	growl
	cleanup
	player
	head
	all
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
	quest_d1_03
	butcher_death

Import:
	SensePlayerOnly (1 args)
	IsPlayerActor (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	Hold (0 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
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
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
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
	Is3DSoundLoaded (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_17 Op = 0x9 Vars = (object)
		EVENT_26 Op = 0x14 Vars = (string)
		EVENT_6 Op = 0x59 Vars = ()
		EVENT_7 Op = 0x9a Vars = (int)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x127 Vars = ()
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x3c5 Vars = ()
		EVENT_7 Op = 0x3fe Vars = (int)
		EVENT_1 Op = 0x419 Vars = (object)
		EVENT_2 Op = 0x428 Vars = (object)
		EVENT_10 Op = 0x4ae Vars = (object)
		EVENT_41 Op = 0x4b9 Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0x4cd Vars = ()
		EVENT_22 Op = 0x553 Vars = (object, int, float, float)
		EVENT_16 Op = 0x555 Vars = (object, string)
		EVENT_41 Op = 0x557 Vars = (object)

Events:
EVENT_22 Op = 0x74b Vars = (object, int, float, float)
EVENT_43 Op = 0x753 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x75d Vars = (object, string)
EVENT_41 Op = 0x76a Vars = (object)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(float, float)
0x4: Stack[-2] = (int) 300
0x5: Stack[-1] = (int) 100
0x6: Call2 0x2b

0x7: Pop(2)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, bool)
0xa: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb: Pop(0)
0xc: Push(Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 6); TaskCall(1)
0x10: Call2 0x115

0x11: Pop(-0, 6); TaskReturn
0x12: Pop(0)
0x13: Return(); Pop(2)

0x14: PushEmpty(float, cvector, float, cvector)
0x15: Push("trigger")
0x16: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x18: @ GetEyesHeight(Stack[-2])
0x19: Pop(0)
0x1a: Push(CvectorIndex(Stack[-1], 1))
0x1b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1d: Push("growl")
0x1e: @ PlayGlobalSound(Stack[-1], Stack[-2])
0x1f: Pop(1)
0x20: PushEmpty()
0x21: Push(-0, 6); TaskCall(1)
0x22: Call2 0x115

0x23: Pop(-0, 6); TaskReturn
0x24: Pop(0)
0x25: GOTO 0x2a

0x26: PushEmpty(string)
0x27: Stack[-1] = Stack[-6]
0x28: Call2 0x51

0x29: Pop(1)
0x2a: Return(); Pop(4)

0x2b: PushEmpty(float, bool, float, bool)
0x2c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x2d: Push((int) 3)
0x2e: @ rand(Stack[-3], Stack[-1])
0x2f: Pop(1)
0x30: Push((int) 3)
0x31: Pop(1); Push(Stack[-3] + Stack[-1]);
0x32: @ Sleep(Stack[-1], Stack[-2])
0x33: Pop(1)
0x34: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x35: PushEmpty(float, float)
0x36: Stack[-2] = Stack[-8]
0x37: Stack[-1] = Stack[-7]
0x38: Call2 0x70

0x39: Pop(2)
0x3a: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x3b: GOTO 0x2d

0x3c: Return(); Pop(4)

0x3d: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x3e: PushEmpty(bool)
0x3f: Stack[-1] = (bool) 0
0x40: PushEmpty(bool)
0x41: Call2 0x69a

0x42: Pop(0)
0x43: Pop(1); Push((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: PushEmpty(bool)
0x46: Call2 0x6e

0x47: Pop(0)
0x48: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x49: Stack[-1] = (bool) 1
0x4a: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4b: PushEmpty(object)
0x4c: Call2 0x6d3

0x4d: Pop(0)
0x4e: @ RemoveActor(Stack[-1])
0x4f: Pop(1)
0x50: Return(); Pop(0)

0x51: PushEmpty()
0x52: Push("cleanup")
0x53: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x55: PushEmpty()
0x56: Call2 0x3d

0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: Push( Stack[6 + Tasks[-1].StackPointer] )
0x5a: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5b: PushEmpty()
0x5c: Call2 0xb1

0x5d: Pop(0)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: Push( Stack[5 + Tasks[-1].StackPointer] )
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: PushEmpty(bool)
0x63: Call2 0x6e

0x64: Pop(0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: PushEmpty(object)
0x69: Call2 0x6d3

0x6a: Pop(0)
0x6b: @ RemoveActor(Stack[-1])
0x6c: Pop(1)
0x6d: Return(); Pop(0)

0x6e: Stack[-1] = (bool) 1
0x6f: Return(); Pop(0)

0x70: PushEmpty()
0x71: PushEmpty(bool)
0x72: Call2 0x69a

0x73: Pop(0)
0x74: Pop(1); Push((bool) Stack[-1] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Return(); Pop(0)

0x77: Push("player")
0x78: @ FindActor(Stack[-4], Stack[-1])
0x79: Pop(1)
0x7a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x7d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x7e: Push((int) 10)
0x7f: Push((float)1.0)
0x80: @ SetTimer(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: PushEmpty()
0x83: Call2 0xbf

0x84: Pop(0)
0x85: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x87: Push((int) 10)
0x88: @ KillTimer(Stack[-1])
0x89: Pop(1)
0x8a: Return(); Pop(0)

0x8b: PushEmpty(float, float)
0x8c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-3] = (bool) 0
0x8f: Return(); Pop(2)

0x90: PushEmpty(float, object)
0x91: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x92: Call2 0x56e

0x93: Pop(1)
0x94: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x95: Push( Stack[2 + Tasks[-1].StackPointer] )
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x98: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x99: Return(); Pop(2)

0x9a: PushEmpty()
0x9b: Push((int) 10)
0x9c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x9e: PushEmpty(bool)
0x9f: Call2 0x8b

0xa0: Pop(0)
0xa1: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: PushEmpty(object)
0xa5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xa6: Call2 0x69f

0xa7: Pop(1)
0xa8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa9: GOTO 0xb0

0xaa: Push( Stack[2 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xac: Push("head")
0xad: @ UnlookAsync(Stack[-1])
0xae: Pop(1)
0xaf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Call2 0x110

0xb3: Pop(0)
0xb4: Push((int) 10)
0xb5: @ KillTimer(Stack[-1])
0xb6: Pop(1)
0xb7: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb9: Push("head")
0xba: @ UnlookAsync(Stack[-1])
0xbb: Pop(1)
0xbc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbe: Return(); Pop(0)

0xbf: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xc0: @ WaitForAnimEnd()
0xc1: Pop(0)
0xc2: PushEmpty(bool)
0xc3: Call2 0x69a

0xc4: Pop(0)
0xc5: Pop(1); Push((bool) Stack[-1] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: Return(); Pop(14)

0xc8: PushEmpty(int)
0xc9: Call2 0x72d

0xca: Stack[-8] = Stack[-1]
0xcb: Pop(1)
0xcc: Stack[-6] = (int) 0
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 0
0xcf: Push((int) 5)
0xd0: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: PushEmpty(bool)
0xd3: Call2 0x69a

0xd4: Pop(0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Stack[-1] = (bool) 1
0xd7: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xd8: Push((int) 3)
0xd9: @ irand(Stack[-6], Stack[-1])
0xda: Pop(1)
0xdb: Push((int) 0)
0xdc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xde: Push(Stack[-7])
0xdf: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe0: @ irand(Stack[-4], Stack[-7])
0xe1: Pop(0)
0xe2: Push("all")
0xe3: PushEmpty(string, int)
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0x726

0xe6: Pop(1)
0xe7: @ PlayAnimation(Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: @ WaitForAnimEnd(Stack[-3])
0xea: Pop(0)
0xeb: Pop(0); Push((bool) Stack[-3] == 0)
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: GOTO 0x10b

0xee: GOTO 0x100

0xef: Push((int) 1)
0xf0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf2: Push((int) 4)
0xf3: @ rand(Stack[-3], Stack[-1])
0xf4: Pop(1)
0xf5: Push((int) 1)
0xf6: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf7: @ Sleep(Stack[-1], Stack[-2])
0xf8: Pop(1)
0xf9: Pop(0); Push((bool) Stack[-1] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: GOTO 0x10b

0xfc: GOTO 0x100

0xfd: Push(Stack[-6])
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: GOTO 0x10b

0x100: PushEmpty(bool)
0x101: Call2 0x10e

0x102: Pop(0)
0x103: Pop(1); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: GOTO 0x10b

0x106: @ ResetAAS()
0x107: Pop(0)
0x108: Push((int) 1)
0x109: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x10a: GOTO 0xcd

0x10b: @ ResetAAS()
0x10c: Pop(0)
0x10d: Return(); Pop(14)

0x10e: Stack[-1] = (bool) 1
0x10f: Return(); Pop(0)

0x110: @ StopAnimation()
0x111: Pop(0)
0x112: @ StopGroup0()
0x113: Pop(0)
0x114: Return(); Pop(0)

0x115: PushEmpty(object, object)
0x116: Push("player")
0x117: @ FindActor(Stack[-2], Stack[-1])
0x118: Pop(1)
0x119: PushEmpty(object, bool, float)
0x11a: Stack[-3] = Stack[-4]
0x11b: Stack[-2] = (bool) 1
0x11c: Stack[-1] = (float) 180.0
0x11d: Call2 0x12f

0x11e: Pop(3)
0x11f: Return(); Pop(2)

0x120: Stack[-1] = 0
0x121: PushEmpty()
0x122: Stack[-3] = (float) 0.1
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: Stack[-3] = (int) 0
0x126: Return(); Pop(0)

0x127: PushEmpty(object)
0x128: Call2 0x6d3

0x129: Pop(0)
0x12a: @ RemoveActor(Stack[-1])
0x12b: Pop(1)
0x12c: @ Hold()
0x12d: Pop(0)
0x12e: Return(); Pop(0)

0x12f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x130: PushEmpty()
0x131: Call2 0x214

0x132: Pop(0)
0x133: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x134: Push("@GetAttackDistance")
0x135: Push((int) 1)
0x136: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: @@ GetAttackDistance(Stack[-11])
0x139: Pop(0)
0x13a: Push((int) 50)
0x13b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x13c: GOTO 0x13e

0x13d: Stack[-11] = Stack[-23]
0x13e: Push((int) 150)
0x13f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-11] = (int) 150
0x142: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x143: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x144: @ IsPlayerActor(Stack[-0], Stack[-8])
0x145: Pop(0)
0x146: Push(Stack[-8])
0x147: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x148: Push("attack")
0x149: @ PlayGlobalMusic(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(object)
0x14c: Call2 0x6d3

0x14d: Pop(0)
0x14e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x14f: Pop(1)
0x150: Push(Stack[-24])
0x151: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x152: Stack[-7] = (bool) 0
0x153: GOTO 0x155

0x154: Stack[-7] = (bool) 1
0x155: Push((float)400.0)
0x156: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x157: PushEmpty(bool)
0x158: Stack[-1] = (bool) 0
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0x5f9

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x162: PushEmpty()
0x163: Call2 0x3b1

0x164: Pop(0)
0x165: @@ GetPFPosition(Stack[-10])
0x166: Pop(0)
0x167: @ GetPFPosition(Stack[-9])
0x168: Pop(0)
0x169: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x16a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x16b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x16c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(bool, object, float, float, bool, bool)
0x16f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x170: Stack[-4] = Stack[-17]
0x171: Stack[-3] = (float) 3000.0
0x172: Stack[-2] = (bool) 1
0x173: Stack[-1] = (bool) 0
0x174: Push(-6, 3); TaskCall(2)
0x175: Call2 0x3cd

0x176: Pop(-6, 3); TaskReturn
0x177: Pop(5)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: GOTO 0x203

0x17b: Stack[-7] = (bool) 0
0x17c: GOTO 0x202

0x17d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x17e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x180: @@ GetPFPosition(Stack[-3])
0x181: Pop(0)
0x182: @ CanReachByPF(Stack[-2], Stack[-3])
0x183: Pop(0)
0x184: Pop(0); Push((bool) Stack[-2] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x186: PushEmpty(bool, object, float, float, bool, bool)
0x187: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x188: Stack[-4] = Stack[-17]
0x189: Stack[-3] = (float) 3000.0
0x18a: Stack[-2] = (bool) 1
0x18b: Stack[-1] = (bool) 0
0x18c: Push(-6, 3); TaskCall(2)
0x18d: Call2 0x3cd

0x18e: Pop(-6, 3); TaskReturn
0x18f: Pop(5)
0x190: Pop(1); Push((bool) Stack[-1] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: GOTO 0x203

0x193: Stack[-7] = (bool) 0
0x194: GOTO 0x157

0x195: Pop(0); Push((bool) Stack[-7] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x197: PushEmpty(object)
0x198: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x199: Call2 0x68f

0x19a: Pop(1)
0x19b: Push("all")
0x19c: Push("attack_on")
0x19d: @ PlayAnimation(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: @ WaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: PushEmpty()
0x1a2: Call2 0x3b1

0x1a3: Pop(0)
0x1a4: @ StopAsync()
0x1a5: Pop(0)
0x1a6: Stack[-7] = (bool) 1
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a9: Call2 0x5f9

0x1aa: Pop(1)
0x1ab: Pop(1); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: GOTO 0x203

0x1ae: @ rand(Stack[-1])
0x1af: Pop(0)
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 1
0x1b2: Push((float)0.25)
0x1b3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(bool)
0x1b6: Call2 0x386

0x1b7: Pop(0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: Stack[-1] = (bool) 0
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1bb: @ Face(Stack[-0])
0x1bc: Pop(0)
0x1bd: PushEmpty()
0x1be: Call2 0x3b8

0x1bf: Pop(0)
0x1c0: Push("all")
0x1c1: Push("attack_stay")
0x1c2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: PushEmpty(bool, float)
0x1c5: Stack[-1] = Stack[-25]
0x1c6: Call2 0x302

0x1c7: Pop(2)
0x1c8: @ StopAsync()
0x1c9: Pop(0)
0x1ca: GOTO 0x1f9

0x1cb: @ Face(Stack[-0])
0x1cc: Pop(0)
0x1cd: Push("all")
0x1ce: Push("fjump")
0x1cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: @ WaitForAnimEnd()
0x1d2: Pop(0)
0x1d3: PushEmpty()
0x1d4: Call2 0x3b1

0x1d5: Pop(0)
0x1d6: Push(CVector(0.0, 0.0, 0.0))
0x1d7: @ SetSpeed(Stack[-1])
0x1d8: Pop(1)
0x1d9: @ Stop()
0x1da: Pop(0)
0x1db: @ StopAsync()
0x1dc: Pop(0)
0x1dd: PushEmpty(bool)
0x1de: Call2 0x386

0x1df: Pop(0)
0x1e0: Pop(1); Push((bool) Stack[-1] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e2: PushEmpty(bool, object)
0x1e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e4: Call2 0x5f9

0x1e5: Pop(1)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: GOTO 0x203

0x1e9: @@ GetPFPosition(Stack[-10])
0x1ea: Pop(0)
0x1eb: @ GetPFPosition(Stack[-9])
0x1ec: Pop(0)
0x1ed: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1ee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1ef: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1f0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f2: PushEmpty(bool, float)
0x1f3: Stack[-1] = Stack[-25]
0x1f4: Call2 0x25e

0x1f5: Pop(1)
0x1f6: Pop(1); Push((bool) Stack[-1] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: GOTO 0x203

0x1f9: GOTO 0x202

0x1fa: PushEmpty(bool, float)
0x1fb: Stack[-1] = Stack[-25]
0x1fc: Call2 0x25e

0x1fd: Pop(1)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: GOTO 0x203

0x201: Stack[-7] = (bool) 1
0x202: GOTO 0x157

0x203: @ WaitForAnimEnd()
0x204: Pop(0)
0x205: Push( Stack[3 + Tasks[-1].StackPointer] )
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Return(); Pop(22)

0x208: Push("all")
0x209: Push("attack_off")
0x20a: @ PlayAnimation(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: @ WaitForAnimEnd()
0x20d: Pop(0)
0x20e: Push(Stack[-8])
0x20f: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x210: Push((float)2.0)
0x211: @ Sleep(Stack[-1])
0x212: Pop(1)
0x213: Return(); Pop(22)

0x214: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x215: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x216: Push("all")
0x217: Push("attack_begin")
0x218: Push((int) 1)
0x219: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x21a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: Pop(0); Push((bool) Stack[-3] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: GOTO 0x223

0x220: Push((int) 1)
0x221: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x222: GOTO 0x216

0x223: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x224: Push("attack")
0x225: Push((int) 1)
0x226: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x227: Pop(2); Push(Stack[-2] + Stack[-1]);
0x228: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x229: Pop(1)
0x22a: Pop(0); Push((bool) Stack[-2] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: GOTO 0x230

0x22d: Push((int) 1)
0x22e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x22f: GOTO 0x224

0x230: Push("all")
0x231: Push("bjump")
0x232: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: Push(CvectorIndex(Stack[-1], 2))
0x235: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x236: Return(); Pop(6)

0x237: PushEmpty(object, float, float, object, float, float)
0x238: Push((float)0.9)
0x239: Pop(1); Push(Stack[-9] * Stack[-1]);
0x23a: @ GetVictim(Stack[-1], Stack[-4])
0x23b: Pop(1)
0x23c: @ ReportAttack(Stack[-0])
0x23d: Pop(0)
0x23e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x23f: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x240: PushEmpty(float, object, int)
0x241: Stack[-2] = Stack[-6]
0x242: Stack[-1] = Stack[-10]
0x243: Call2 0x121

0x244: Stack[-5] = Stack[-3]
0x245: Pop(3)
0x246: PushEmpty(float, object, float, int)
0x247: Stack[-3] = Stack[-7]
0x248: Stack[-2] = Stack[-6]
0x249: PushEmpty(int, object, int)
0x24a: Stack[-2] = Stack[-10]
0x24b: Stack[-1] = Stack[-14]
0x24c: Call2 0x124

0x24d: Stack[-4] = Stack[-3]
0x24e: Pop(3)
0x24f: Call2 0x587

0x250: Stack[-5] = Stack[-4]
0x251: Pop(4)
0x252: PushEmpty(int)
0x253: Call2 0x3b6

0x254: Pop(0)
0x255: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x256: Pop(1)
0x257: PushEmpty(object, float)
0x258: Stack[-2] = Stack[-5]
0x259: Stack[-1] = Stack[-3]
0x25a: Call2 0x3bd

0x25b: Pop(2)
0x25c: Return(); Pop(6)

0x25d: Stack[-3] = 0
0x25e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x25f: PushEmpty()
0x260: Call2 0x3b1

0x261: Pop(0)
0x262: @ irand(Stack[-4], Stack[-1])
0x263: Pop(0)
0x264: Push((int) 1)
0x265: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x266: @ Face(Stack[-0])
0x267: Pop(0)
0x268: Push((bool) 1)
0x269: @ SetAttackState(Stack[-1])
0x26a: Pop(1)
0x26b: PushEmpty()
0x26c: Call2 0x71b

0x26d: Pop(0)
0x26e: Push("all")
0x26f: Push("attack_begin")
0x270: Pop(1); Push(Stack[-1] + Stack[-6]);
0x271: @ PlayAnimation(Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: @ WaitForAnimEnd()
0x274: Pop(0)
0x275: PushEmpty()
0x276: Call2 0x391

0x277: Pop(0)
0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call2 0x5f9

0x27b: Pop(1)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27e: @ StopAsync()
0x27f: Pop(0)
0x280: Stack[-10] = (bool) 0
0x281: Return(); Pop(8)

0x282: PushEmpty(float, int)
0x283: Stack[-2] = Stack[-11]
0x284: Stack[-1] = Stack[-6]
0x285: Call2 0x237

0x286: Pop(2)
0x287: Push("all")
0x288: Push("attack_middle")
0x289: Pop(1); Push(Stack[-1] + Stack[-6]);
0x28a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x28b: Pop(2)
0x28c: Push(Stack[-3])
0x28d: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x28e: PushEmpty()
0x28f: Call2 0x71b

0x290: Pop(0)
0x291: Push("all")
0x292: Push("attack_middle")
0x293: Pop(1); Push(Stack[-1] + Stack[-6]);
0x294: @ PlayAnimation(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: @ WaitForAnimEnd()
0x297: Pop(0)
0x298: PushEmpty()
0x299: Call2 0x3b1

0x29a: Pop(0)
0x29b: PushEmpty(bool, object)
0x29c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29d: Call2 0x5f9

0x29e: Pop(1)
0x29f: Pop(1); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a1: @ StopAsync()
0x2a2: Pop(0)
0x2a3: Stack[-10] = (bool) 0
0x2a4: Return(); Pop(8)

0x2a5: PushEmpty(float, int)
0x2a6: Stack[-2] = Stack[-11]
0x2a7: Stack[-1] = Stack[-6]
0x2a8: Call2 0x237

0x2a9: Pop(2)
0x2aa: Stack[-2] = (int) 1
0x2ab: Push("attack_middle")
0x2ac: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2ad: Push("_")
0x2ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2af: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x2b0: Push("all")
0x2b1: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x2b2: Pop(1)
0x2b3: Pop(0); Push((bool) Stack[-3] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: GOTO 0x2d3

0x2b6: PushEmpty()
0x2b7: Call2 0x71b

0x2b8: Pop(0)
0x2b9: Push("all")
0x2ba: @ PlayAnimation(Stack[-1], Stack[-2])
0x2bb: Pop(1)
0x2bc: @ WaitForAnimEnd()
0x2bd: Pop(0)
0x2be: PushEmpty()
0x2bf: Call2 0x3b1

0x2c0: Pop(0)
0x2c1: PushEmpty(bool, object)
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x5f9

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
0x2ce: Call2 0x237

0x2cf: Pop(2)
0x2d0: Push((int) 1)
0x2d1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2d2: GOTO 0x2ab

0x2d3: Push((bool) 0)
0x2d4: @ SetAttackState(Stack[-1])
0x2d5: Pop(1)
0x2d6: Push("all")
0x2d7: Push("attack_end")
0x2d8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: PushEmpty(bool)
0x2dc: Call2 0x3bf

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2df: PushEmpty(bool, float)
0x2e0: Stack[-1] = (float) 0.75
0x2e1: Call2 0x2e7

0x2e2: Pop(2)
0x2e3: @ StopAsync()
0x2e4: Pop(0)
0x2e5: Stack[-10] = (bool) 1
0x2e6: Return(); Pop(8)

0x2e7: PushEmpty(float, bool, float, bool)
0x2e8: @ rand(Stack[-2])
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2ec: @ IsAnimationPlaying(Stack[-1])
0x2ed: Pop(0)
0x2ee: Pop(0); Push((bool) Stack[-1] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x2fa

0x2f1: PushEmpty(bool)
0x2f2: Call2 0x349

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: Stack[-6] = (bool) 1
0x2f6: Return(); Pop(4)

0x2f7: @ sync()
0x2f8: Pop(0)
0x2f9: GOTO 0x2ec

0x2fa: GOTO 0x300

0x2fb: @ WaitForAnimEnd()
0x2fc: Pop(0)
0x2fd: PushEmpty()
0x2fe: Call2 0x3b1

0x2ff: Pop(0)
0x300: Stack[-6] = (bool) 0
0x301: Return(); Pop(4)

0x302: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x303: @ IsAnimationPlaying(Stack[-5])
0x304: Pop(0)
0x305: Pop(0); Push((bool) Stack[-5] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x328

0x308: PushEmpty(bool)
0x309: Call2 0x349

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-12] = (bool) 1
0x30d: Return(); Pop(10)

0x30e: PushEmpty(bool, object)
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x5f9

0x311: Pop(1)
0x312: Pop(1); Push((bool) Stack[-1] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-12] = (bool) 0
0x315: Return(); Pop(10)

0x316: @@ GetPFPosition(Stack[-4])
0x317: Pop(0)
0x318: @ GetPFPosition(Stack[-3])
0x319: Pop(0)
0x31a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x31b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x31c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x31d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31f: PushEmpty(bool, float)
0x320: Stack[-1] = Stack[-13]
0x321: Call2 0x25e

0x322: Pop(2)
0x323: Stack[-12] = (bool) 1
0x324: Return(); Pop(10)

0x325: @ sync()
0x326: Pop(0)
0x327: GOTO 0x303

0x328: PushEmpty()
0x329: Call2 0x3b1

0x32a: Pop(0)
0x32b: Stack[-12] = (bool) 0
0x32c: Return(); Pop(10)

0x32d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x330: Call2 0x5f9

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-11] = (bool) 0
0x335: Return(); Pop(10)

0x336: PushEmpty(bool)
0x337: Call2 0x386

0x338: Pop(0)
0x339: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33a: @@ GetPFPosition(Stack[-5])
0x33b: Pop(0)
0x33c: @ GetPFPosition(Stack[-4])
0x33d: Pop(0)
0x33e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x33f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x340: @@ GetAttackDistance(Stack[-1])
0x341: Pop(0)
0x342: Push((int) 50)
0x343: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x344: Pop(0); Push(Stack[-1] * Stack[-1]);
0x345: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x346: Return(); Pop(10)

0x347: Stack[-11] = (bool) 0
0x348: Return(); Pop(10)

0x349: PushEmpty(bool)
0x34a: Stack[-1] = (bool) 0
0x34b: PushEmpty(bool)
0x34c: Call2 0x32d

0x34d: Pop(0)
0x34e: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34f: PushEmpty(bool)
0x350: Call2 0x359

0x351: Pop(0)
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: Stack[-1] = (bool) 1
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-1] = (bool) 1
0x356: Return(); Pop(0)

0x357: Stack[-1] = (bool) 0
0x358: Return(); Pop(0)

0x359: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x35a: @ GetScene(Stack[-5])
0x35b: Pop(0)
0x35c: Stack[-4] = (bool) 0
0x35d: PushEmpty(cvector, object)
0x35e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35f: Call2 0x567

0x360: Pop(1)
0x361: Pop(1); Push(( -Stack[-1])
0x362: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x363: Pop(1)
0x364: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: GOTO 0x383

0x367: @ Face(Stack[-0])
0x368: Pop(0)
0x369: Push("all")
0x36a: Push("bjump")
0x36b: @ PlayAnimation(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: @@ GetPFPosition(Stack[-2])
0x36e: Pop(0)
0x36f: @ GetPFPosition(Stack[-1])
0x370: Pop(0)
0x371: @ WaitForAnimEnd()
0x372: Pop(0)
0x373: PushEmpty()
0x374: Call2 0x3b1

0x375: Pop(0)
0x376: @ StopAsync()
0x377: Pop(0)
0x378: Push(CVector(0.0, 0.0, 0.0))
0x379: @ SetSpeed(Stack[-1])
0x37a: Pop(1)
0x37b: Stack[-4] = (bool) 1
0x37c: PushEmpty(bool)
0x37d: Call2 0x32d

0x37e: Pop(0)
0x37f: Pop(1); Push((bool) Stack[-1] == 0)
0x380: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x381: GOTO 0x383

0x382: GOTO 0x35d

0x383: Stack[-11] = Stack[-4]
0x384: Return(); Pop(10)

0x385: Stack[-5] = 0
0x386: PushEmpty(bool, bool)
0x387: Push("IsAttacking")
0x388: Push((int) 1)
0x389: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x38a: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38b: @@ IsAttacking(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-3] = Stack[-1]
0x38e: Return(); Pop(2)

0x38f: Stack[-3] = (bool) 0
0x390: Return(); Pop(2)

0x391: PushEmpty(float, int, float, int)
0x392: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Return(); Pop(4)

0x395: Push( Stack[5 + Tasks[-1].StackPointer] )
0x396: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x397: Push((int) -1)
0x398: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x399: Push((int) 0)
0x39a: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Return(); Pop(4)

0x39d: @ rand(Stack[-2])
0x39e: Pop(0)
0x39f: PushEmpty(float)
0x3a0: Call2 0x3c3

0x3a1: Pop(0)
0x3a2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a4: @ irand(Stack[-1], Stack[-2])
0x3a5: Pop(0)
0x3a6: Push((int) 1)
0x3a7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3a8: Push("attack")
0x3a9: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3aa: @ Speak(Stack[-1])
0x3ab: Pop(1)
0x3ac: PushEmpty(int)
0x3ad: Call2 0x3c1

0x3ae: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x3af: Pop(1)
0x3b0: Return(); Pop(4)

0x3b1: PushEmpty(object)
0x3b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b3: Call2 0x712

0x3b4: Pop(1)
0x3b5: Return(); Pop(0)

0x3b6: Stack[-1] = (int) 0
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty(string)
0x3b9: Stack[-1] = "attack_stay"
0x3ba: Call2 0x6aa

0x3bb: Pop(1)
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty()
0x3be: Return(); Pop(0)

0x3bf: Stack[-1] = (bool) 1
0x3c0: Return(); Pop(0)

0x3c1: Stack[-1] = (int) 1
0x3c2: Return(); Pop(0)

0x3c3: Stack[-1] = (float) 0.5
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty(object)
0x3c6: Call2 0x6d3

0x3c7: Pop(0)
0x3c8: @ RemoveActor(Stack[-1])
0x3c9: Pop(1)
0x3ca: @ Hold()
0x3cb: Pop(0)
0x3cc: Return(); Pop(0)

0x3cd: PushEmpty(bool, bool, bool, bool)
0x3ce: PushEmpty(object)
0x3cf: Stack[-1] = Stack[-10]
0x3d0: Call2 0x712

0x3d1: Pop(1)
0x3d2: Push((int) 1)
0x3d3: Push((int) 5)
0x3d4: @ SetTimer(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: @ CanSee(Stack[-2], Stack[-9])
0x3d7: Pop(0)
0x3d8: Push(Stack[-2])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3da: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3db: PushEmpty(object)
0x3dc: Stack[-1] = Stack[-10]
0x3dd: Call2 0x69f

0x3de: Pop(1)
0x3df: GOTO 0x3e1

0x3e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[-11]
0x3e3: Call2 0x576

0x3e4: Pop(1)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e6: PushEmpty(object)
0x3e7: Call2 0x6d3

0x3e8: Pop(0)
0x3e9: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3ea: Pop(1)
0x3eb: PushEmpty(bool, object, float, float, bool, bool)
0x3ec: Stack[-5] = Stack[-15]
0x3ed: Stack[-4] = Stack[-14]
0x3ee: Stack[-3] = Stack[-13]
0x3ef: Stack[-2] = Stack[-12]
0x3f0: Stack[-1] = Stack[-11]
0x3f1: Call2 0x436

0x3f2: Stack[-7] = Stack[-6]
0x3f3: Pop(6)
0x3f4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f6: Push("head")
0x3f7: @ UnlookAsync(Stack[-1])
0x3f8: Pop(1)
0x3f9: Push((int) 1)
0x3fa: @ KillTimer(Stack[-1])
0x3fb: Pop(1)
0x3fc: Stack[-10] = Stack[-1]
0x3fd: Return(); Pop(4)

0x3fe: PushEmpty()
0x3ff: Push((int) 1)
0x400: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x402: PushEmpty(object)
0x403: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x404: Call2 0x712

0x405: Pop(1)
0x406: GOTO 0x40b

0x407: PushEmpty(int)
0x408: Stack[-1] = Stack[-2]
0x409: Call2 0x49c

0x40a: Pop(1)
0x40b: Return(); Pop(0)

0x40c: Push((int) 1)
0x40d: @ KillTimer(Stack[-1])
0x40e: Pop(1)
0x40f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x410: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x411: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x412: Push("head")
0x413: @ UnlookAsync(Stack[-1])
0x414: Pop(1)
0x415: PushEmpty()
0x416: Call2 0x4b2

0x417: Pop(0)
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: PushEmpty(bool)
0x41b: Stack[-1] = (bool) 0
0x41c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x41d: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: Stack[-1] = (bool) 1
0x421: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x422: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x423: PushEmpty(object)
0x424: Stack[-1] = Stack[-2]
0x425: Call2 0x69f

0x426: Pop(1)
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: PushEmpty(bool)
0x42a: Stack[-1] = (bool) 0
0x42b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x42c: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: Stack[-1] = (bool) 1
0x430: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x431: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x432: Push("head")
0x433: @ UnlookAsync(Stack[-1])
0x434: Pop(1)
0x435: Return(); Pop(0)

0x436: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x437: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x438: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x439: Stack[-7] = Stack[-17]
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[-23]
0x43c: Call2 0x4c2

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-22] = (bool) 0
0x441: Return(); Pop(16)

0x442: @@ GetPosition(Stack[-5])
0x443: Pop(0)
0x444: @ GetPosition(Stack[-4])
0x445: Pop(0)
0x446: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x447: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x448: PushEmpty(bool)
0x449: Stack[-1] = (bool) 0
0x44a: Push((int) 0)
0x44b: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44d: Pop(0); Push(Stack[-20] * Stack[-20]);
0x44e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: Stack[-1] = (bool) 1
0x451: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x452: @ Stop()
0x453: Pop(0)
0x454: Stack[-22] = (bool) 0
0x455: Return(); Pop(16)

0x456: Pop(0); Push(Stack[-20] * Stack[-20]);
0x457: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x459: @@ GetPFPosition(Stack[-5])
0x45a: Pop(0)
0x45b: @ FindPathTo(Stack[-1], Stack[-5])
0x45c: Pop(0)
0x45d: Pop(0); Push(( Stack[-1] != 0 )
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-6] = Stack[-1]
0x460: Stack[-1] = 0
0x461: Pop(0); Push(( Stack[-6] != 0 )
0x462: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x463: Push(Stack[-7])
0x464: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x465: Stack[-7] = (bool) 0
0x466: @ RotatePath(Stack[-6], Stack[-8])
0x467: Pop(0)
0x468: Pop(0); Push((bool) Stack[-8] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: GOTO 0x49a

0x46b: Push((int) 0)
0x46c: Push((float)0.3)
0x46d: @ SetTimer(Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: PushEmpty(string)
0x470: Call2 0x4c9

0x471: Pop(0)
0x472: PushEmpty(string)
0x473: Call2 0x4cb

0x474: Pop(0)
0x475: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x476: Pop(2)
0x477: Pop(0); Push((bool) Stack[-8] == 0)
0x478: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x479: Push( Stack[0 + Tasks[-1].StackPointer] )
0x47a: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47b: Stack[-6] = 0
0x47c: GOTO 0x49a

0x47d: GOTO 0x47f

0x47e: GOTO 0x499

0x47f: GOTO 0x481

0x480: Stack[-6] = 0
0x481: GOTO 0x492

0x482: Push((int) 0)
0x483: @ KillTimer(Stack[-1])
0x484: Pop(1)
0x485: Push((float)0.5)
0x486: @ Sleep(Stack[-1], Stack[-9])
0x487: Pop(1)
0x488: Pop(0); Push((bool) Stack[-8] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-6] = 0
0x48d: GOTO 0x49a

0x48e: Push((int) 0)
0x48f: Push((float)0.3)
0x490: @ SetTimer(Stack[-2], Stack[-1])
0x491: Pop(2)
0x492: Stack[-1] = 0
0x493: GOTO 0x498

0x494: Push((int) 0)
0x495: @ KillTimer(Stack[-1])
0x496: Pop(1)
0x497: GOTO 0x49a

0x498: Stack[-6] = 0
0x499: GOTO 0x43a

0x49a: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x49b: Return(); Pop(16)

0x49c: PushEmpty()
0x49d: Push((int) 0)
0x49e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Return(); Pop(0)

0x4a1: PushEmpty(bool, object)
0x4a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a3: Call2 0x4c2

0x4a4: Pop(1)
0x4a5: Pop(1); Push((bool) Stack[-1] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4a8: Push((int) 0)
0x4a9: @ KillTimer(Stack[-1])
0x4aa: Pop(1)
0x4ab: @ Stop()
0x4ac: Pop(0)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: @ RequestClearPath(Stack[-1])
0x4b0: Pop(0)
0x4b1: Return(); Pop(0)

0x4b2: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4b3: Push((int) 0)
0x4b4: @ KillTimer(Stack[-1])
0x4b5: Pop(1)
0x4b6: @ Stop()
0x4b7: Pop(0)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty()
0x4ba: PushEmpty()
0x4bb: Call2 0x40c

0x4bc: Pop(0)
0x4bd: PushEmpty(object)
0x4be: Stack[-1] = Stack[-2]
0x4bf: Call2 0x76a

0x4c0: Pop(1)
0x4c1: Return(); Pop(0)

0x4c2: PushEmpty()
0x4c3: PushEmpty(bool, object)
0x4c4: Stack[-1] = Stack[-3]
0x4c5: Call2 0x5f9

0x4c6: Stack[-4] = Stack[-2]
0x4c7: Pop(2)
0x4c8: Return(); Pop(0)

0x4c9: Stack[-1] = "walk"
0x4ca: Return(); Pop(0)

0x4cb: Stack[-1] = "run"
0x4cc: Return(); Pop(0)

0x4cd: PushEmpty(object)
0x4ce: Call2 0x6d3

0x4cf: Pop(0)
0x4d0: @ RemoveActor(Stack[-1])
0x4d1: Pop(1)
0x4d2: @ Hold()
0x4d3: Pop(0)
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: PushEmpty(object)
0x4d7: Stack[-1] = Stack[-2]
0x4d8: Call2 0x4de

0x4d9: Pop(1)
0x4da: @ Hold()
0x4db: Pop(0)
0x4dc: GOTO 0x4da

0x4dd: Return(); Pop(0)

0x4de: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4df: Pop(0); Push((bool) Stack[-21] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "fdie"
0x4e3: Call2 0x539

0x4e4: Pop(1)
0x4e5: GOTO 0x538

0x4e6: @@ GetPosition(Stack[-10])
0x4e7: Pop(0)
0x4e8: @ GetPosition(Stack[-9])
0x4e9: Pop(0)
0x4ea: @ GetDirection(Stack[-8])
0x4eb: Pop(0)
0x4ec: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4ed: Push(CvectorIndex(Stack[-7], 0))
0x4ee: Push(CvectorIndex(Stack[-9], 0))
0x4ef: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f0: Push(CvectorIndex(Stack[-8], 2))
0x4f1: Push(CvectorIndex(Stack[-10], 2))
0x4f2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f4: Push((int) 0)
0x4f5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-6] = "fdie"
0x4f8: GOTO 0x4fa

0x4f9: Stack[-6] = "bdie"
0x4fa: @ RemoveRTEnvelope()
0x4fb: Pop(0)
0x4fc: @ SetDeathState()
0x4fd: Pop(0)
0x4fe: @ Stop()
0x4ff: Pop(0)
0x500: @ StopAsync()
0x501: Pop(0)
0x502: Stack[-5] = Stack[-21]
0x503: Push("GetScriptProperty")
0x504: Push((int) 2)
0x505: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x506: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x507: Push("Owner")
0x508: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x509: Pop(1)
0x50a: Push(Stack[-4])
0x50b: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x50c: Push("Owner")
0x50d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x50e: Pop(1)
0x50f: Pop(0); Push((bool) Stack[-5] == 0)
0x510: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x511: Stack[-5] = Stack[-21]
0x512: Push("@GetEyesHeight")
0x513: Push((int) 1)
0x514: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x515: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x516: @@ GetEyesHeight(Stack[-2])
0x517: Pop(0)
0x518: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x519: Push(CvectorIndex(Stack[-1], 1))
0x51a: Stack[-1] = Stack[-3]
0x51b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x51c: Push("head")
0x51d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x51e: Pop(1)
0x51f: Stack[-3] = (bool) 1
0x520: GOTO 0x522

0x521: Stack[-3] = (bool) 0
0x522: PushEmpty(string)
0x523: Stack[-1] = Stack[-7]
0x524: Call2 0x6aa

0x525: Pop(1)
0x526: Push("all")
0x527: @ PlayAnimation(Stack[-1], Stack[-7])
0x528: Pop(1)
0x529: @ WaitForAnimEnd()
0x52a: Pop(0)
0x52b: Push(Stack[-3])
0x52c: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52d: @ StopAsync()
0x52e: Pop(0)
0x52f: Push("head")
0x530: @ UnlookAsync(Stack[-1])
0x531: Pop(1)
0x532: Push("all")
0x533: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x534: Pop(1)
0x535: @ RemoveEnvelope()
0x536: Pop(0)
0x537: Stack[-5] = 0
0x538: Return(); Pop(20)

0x539: PushEmpty()
0x53a: @ RemoveRTEnvelope()
0x53b: Pop(0)
0x53c: @ SetDeathState()
0x53d: Pop(0)
0x53e: @ Stop()
0x53f: Pop(0)
0x540: @ StopAsync()
0x541: Pop(0)
0x542: @ StopSecondaryAnimation()
0x543: Pop(0)
0x544: PushEmpty(string)
0x545: Stack[-1] = Stack[-2]
0x546: Call2 0x6aa

0x547: Pop(1)
0x548: Push("all")
0x549: @ PlayAnimation(Stack[-1], Stack[-2])
0x54a: Pop(1)
0x54b: @ WaitForAnimEnd()
0x54c: Pop(0)
0x54d: Push("all")
0x54e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x54f: Pop(1)
0x550: @ RemoveEnvelope()
0x551: Pop(0)
0x552: Return(); Pop(0)

0x553: PushEmpty()
0x554: Return(); Pop(0)

0x555: PushEmpty()
0x556: Return(); Pop(0)

0x557: PushEmpty()
0x558: Return(); Pop(0)

0x559: PushEmpty()
0x55a: Push((int) 2)
0x55b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55d: Stack[-2] = "fire"
0x55e: Return(); Pop(0)

0x55f: GOTO 0x565

0x560: Push((int) 1)
0x561: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-2] = "bullet"
0x564: Return(); Pop(0)

0x565: Stack[-2] = "phys"
0x566: Return(); Pop(0)

0x567: PushEmpty(cvector, cvector, cvector, cvector)
0x568: @ GetPosition(Stack[-2])
0x569: Pop(0)
0x56a: @@ GetPosition(Stack[-1])
0x56b: Pop(0)
0x56c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x56d: Return(); Pop(4)

0x56e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x56f: @ GetPosition(Stack[-3])
0x570: Pop(0)
0x571: @@ GetPosition(Stack[-2])
0x572: Pop(0)
0x573: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x574: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x575: Return(); Pop(6)

0x576: PushEmpty(bool, bool)
0x577: @ IsPlayerActor(Stack[-3], Stack[-1])
0x578: Pop(0)
0x579: Stack[-4] = Stack[-1]
0x57a: Return(); Pop(2)

0x57b: PushEmpty(bool, bool)
0x57c: Push("HasProperty")
0x57d: Push((int) 2)
0x57e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x57f: Pop(1); Push((bool) Stack[-1] == 0)
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: Stack[-5] = (bool) 0
0x582: Return(); Pop(2)

0x583: @@ HasProperty(Stack[-3], Stack[-1])
0x584: Pop(0)
0x585: Stack[-5] = Stack[-1]
0x586: Return(); Pop(2)

0x587: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x588: PushEmpty(bool, object, string)
0x589: Stack[-2] = Stack[-18]
0x58a: Stack[-1] = "health"
0x58b: Call2 0x57b

0x58c: Pop(2)
0x58d: Pop(1); Push((bool) Stack[-1] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-16] = (float) 0.0
0x590: Return(); Pop(12)

0x591: PushEmpty(bool, object, string)
0x592: Stack[-2] = Stack[-18]
0x593: Stack[-1] = "armor"
0x594: Call2 0x57b

0x595: Pop(2)
0x596: Pop(1); Push((bool) Stack[-1] == 0)
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: Stack[-6] = (int) 0
0x599: GOTO 0x59d

0x59a: Push("armor")
0x59b: @@ GetProperty(Stack[-1], Stack[-7])
0x59c: Pop(1)
0x59d: Push("armor_")
0x59e: PushEmpty(string, int)
0x59f: Stack[-1] = Stack[-16]
0x5a0: Call2 0x559

0x5a1: Pop(1)
0x5a2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5a3: PushEmpty(bool, object, string)
0x5a4: Stack[-2] = Stack[-18]
0x5a5: Stack[-1] = Stack[-8]
0x5a6: Call2 0x57b

0x5a7: Pop(2)
0x5a8: Pop(1); Push((bool) Stack[-1] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-4] = (int) 0
0x5ab: GOTO 0x5ae

0x5ac: @@ GetProperty(Stack[-5], Stack[-4])
0x5ad: Pop(0)
0x5ae: PushEmpty(float, float, float)
0x5af: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5b0: Push((float)100.0)
0x5b1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5b2: Stack[-1] = (int) 1
0x5b3: Call2 0x6e3

0x5b4: Stack[-6] = Stack[-3]
0x5b5: Pop(3)
0x5b6: Push("health")
0x5b7: @@ GetProperty(Stack[-1], Stack[-3])
0x5b8: Pop(1)
0x5b9: Push((int) 1)
0x5ba: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5bb: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5bc: Push("health")
0x5bd: PushEmpty(float, float, float, float)
0x5be: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5bf: Stack[-2] = (int) 0
0x5c0: Stack[-1] = (int) 1
0x5c1: Call2 0x6ea

0x5c2: Pop(3)
0x5c3: @@ SetProperty(Stack[-2], Stack[-1])
0x5c4: Pop(2)
0x5c5: PushEmpty(bool, object)
0x5c6: Stack[-1] = Stack[-17]
0x5c7: Call2 0x576

0x5c8: Pop(1)
0x5c9: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5ca: PushEmpty(float)
0x5cb: Stack[-1] = -Stack[-2]; Pop(0);
0x5cc: Call2 0x6f5

0x5cd: Pop(1)
0x5ce: Stack[-16] = Stack[-1]
0x5cf: Return(); Pop(12)

0x5d0: PushEmpty(bool, bool)
0x5d1: @@ IsDead(Stack[-1])
0x5d2: Pop(0)
0x5d3: Stack[-4] = Stack[-1]
0x5d4: Return(); Pop(2)

0x5d5: PushEmpty(object, object, object, object)
0x5d6: Pop(0); Push((bool) Stack[-5] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-6] = (bool) 0
0x5d9: Return(); Pop(4)

0x5da: PushEmpty(bool)
0x5db: Stack[-1] = (bool) 0
0x5dc: Push("IsDead")
0x5dd: Push((int) 1)
0x5de: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5df: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e0: PushEmpty(bool, object)
0x5e1: Stack[-1] = Stack[-8]
0x5e2: Call2 0x5d0

0x5e3: Pop(1)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: Stack[-1] = (bool) 1
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: Stack[-6] = (bool) 0
0x5e8: Return(); Pop(4)

0x5e9: @ GetScene(Stack[-2])
0x5ea: Pop(0)
0x5eb: Pop(0); Push((bool) Stack[-2] == 0)
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: Stack[-6] = (bool) 0
0x5ee: Return(); Pop(4)

0x5ef: @@ GetScene(Stack[-1])
0x5f0: Pop(0)
0x5f1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f3: Stack[-6] = (bool) 0
0x5f4: Return(); Pop(4)

0x5f5: Stack[-6] = (bool) 1
0x5f6: Return(); Pop(4)

0x5f7: Stack[-1] = 0
0x5f8: Stack[-2] = 0
0x5f9: PushEmpty(int, int)
0x5fa: PushEmpty(bool, object)
0x5fb: Stack[-1] = Stack[-5]
0x5fc: Call2 0x5d5

0x5fd: Pop(1)
0x5fe: Pop(1); Push((bool) Stack[-1] == 0)
0x5ff: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x600: Stack[-4] = (bool) 0
0x601: Return(); Pop(2)

0x602: PushEmpty(bool, object, string)
0x603: Stack[-2] = Stack[-6]
0x604: Stack[-1] = "noaccess"
0x605: Call2 0x57b

0x606: Pop(2)
0x607: Pop(1); Push((bool) Stack[-1] == 0)
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: Stack[-4] = (bool) 1
0x60a: Return(); Pop(2)

0x60b: Push("noaccess")
0x60c: @@ GetProperty(Stack[-1], Stack[-2])
0x60d: Pop(1)
0x60e: Push((int) 0)
0x60f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x610: Return(); Pop(2)

0x611: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x612: Pop(0); Push((bool) Stack[-15] == 0)
0x613: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x614: Return(); Pop(14)

0x615: @ IsDead(Stack[-7])
0x616: Pop(0)
0x617: Push(Stack[-7])
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: Return(); Pop(14)

0x61a: @ GetSecondaryAnimationType(Stack[-6])
0x61b: Pop(0)
0x61c: Push((int) 0)
0x61d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61f: Return(); Pop(14)

0x620: @@ GetPosition(Stack[-5])
0x621: Pop(0)
0x622: @ GetPosition(Stack[-4])
0x623: Pop(0)
0x624: @ GetDirection(Stack[-3])
0x625: Pop(0)
0x626: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x627: Push(CvectorIndex(Stack[-2], 0))
0x628: Push(CvectorIndex(Stack[-4], 0))
0x629: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62a: Push(CvectorIndex(Stack[-3], 2))
0x62b: Push(CvectorIndex(Stack[-5], 2))
0x62c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62e: Push((int) 0)
0x62f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x631: Stack[-1] = "fhit"
0x632: GOTO 0x634

0x633: Stack[-1] = "bhit"
0x634: Push("hit_react")
0x635: Push("1")
0x636: Pop(1); Push(Stack[-3] + Stack[-1]);
0x637: Push("2")
0x638: Pop(1); Push(Stack[-4] + Stack[-1]);
0x639: Push((int) -10)
0x63a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(4)
0x63c: Return(); Pop(14)

0x63d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x63e: PushEmpty(bool)
0x63f: Stack[-1] = (bool) 0
0x640: PushEmpty(bool)
0x641: Stack[-1] = (bool) 0
0x642: Push(Stack[-23])
0x643: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x644: Push((int) 4)
0x645: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x647: Stack[-1] = (bool) 1
0x648: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x649: Push((int) 5)
0x64a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64c: Stack[-1] = (bool) 1
0x64d: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x64e: PushEmpty(cvector, cvector)
0x64f: PushEmpty(cvector, object)
0x650: Stack[-1] = Stack[-25]
0x651: Call2 0x567

0x652: Stack[-3] = Stack[-2]
0x653: Pop(2)
0x654: Call2 0x6d9

0x655: Stack[-11] = Stack[-2]
0x656: Pop(2)
0x657: @ CreateVectorVector(Stack[-8])
0x658: Pop(0)
0x659: Stack[-7] = (int) 1
0x65a: Push("hit")
0x65b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x65c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x65d: Pop(1)
0x65e: Pop(0); Push((bool) Stack[-6] == 0)
0x65f: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x660: GOTO 0x66a

0x661: Pop(0); Push(Stack[-4] | Stack[-9]);
0x662: Push((float)0.70711)
0x663: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: @@ add(Stack[-5])
0x666: Pop(0)
0x667: Push((int) 1)
0x668: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x669: GOTO 0x65a

0x66a: @@ size(Stack[-3])
0x66b: Pop(0)
0x66c: Push(Stack[-3])
0x66d: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x66e: @ irand(Stack[-2], Stack[-3])
0x66f: Pop(0)
0x670: @@ get(Stack[-1], Stack[-2])
0x671: Pop(0)
0x672: PushEmpty(object, int, float, cvector, cvector)
0x673: Stack[-5] = Stack[-26]
0x674: Stack[-4] = Stack[-25]
0x675: Stack[-3] = Stack[-24]
0x676: Stack[-2] = Stack[-6]
0x677: Stack[-1] = -Stack[-14]; Pop(0);
0x678: Call2 0x681

0x679: Pop(5)
0x67a: Return(); Pop(18)

0x67b: Stack[-8] = 0
0x67c: PushEmpty(object)
0x67d: Stack[-1] = Stack[-22]
0x67e: Call2 0x611

0x67f: Pop(1)
0x680: Return(); Pop(18)

0x681: PushEmpty(object, object, object, object)
0x682: @ GetScene(Stack[-2])
0x683: Pop(0)
0x684: Push("scripted")
0x685: Push("blood_dir.xml")
0x686: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x687: Pop(2)
0x688: PushEmpty(object)
0x689: Stack[-1] = Stack[-10]
0x68a: Call2 0x611

0x68b: Pop(1)
0x68c: Return(); Pop(4)

0x68d: Stack[-1] = 0
0x68e: Stack[-2] = 0
0x68f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x690: @@ GetPosition(Stack[-3])
0x691: Pop(0)
0x692: @ GetPosition(Stack[-2])
0x693: Pop(0)
0x694: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x695: Push(CvectorIndex(Stack[-1], 0))
0x696: Push(CvectorIndex(Stack[-2], 2))
0x697: @ RotateAsync(Stack[-2], Stack[-1])
0x698: Pop(2)
0x699: Return(); Pop(6)

0x69a: PushEmpty(bool, bool)
0x69b: @ IsLoaded(Stack[-1])
0x69c: Pop(0)
0x69d: Stack[-3] = Stack[-1]
0x69e: Return(); Pop(2)

0x69f: PushEmpty(float, cvector, float, cvector)
0x6a0: @@ GetEyesHeight(Stack[-2])
0x6a1: Pop(0)
0x6a2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6a3: Push(CvectorIndex(Stack[-1], 1))
0x6a4: Stack[-1] = Stack[-3]
0x6a5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6a6: Push("head")
0x6a7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6a8: Pop(1)
0x6a9: Return(); Pop(4)

0x6aa: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6ab: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6ac: Pop(0)
0x6ad: Pop(0); Push((bool) Stack[-8] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6af: Stack[-7] = (int) 0
0x6b0: Push((int) 1)
0x6b1: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6b2: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6b3: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6b4: Pop(1)
0x6b5: Pop(0); Push((bool) Stack[-6] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: GOTO 0x6bb

0x6b8: Push((int) 1)
0x6b9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6ba: GOTO 0x6b0

0x6bb: Pop(0); Push((bool) Stack[-7] == 0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bd: Return(); Pop(16)

0x6be: @ irand(Stack[-5], Stack[-7])
0x6bf: Pop(0)
0x6c0: Push((int) 1)
0x6c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c2: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x6c3: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x6c4: Pop(0)
0x6c5: Push(Stack[-4])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6c7: @ GetEyesHeight(Stack[-3])
0x6c8: Pop(0)
0x6c9: @ GetDirection(Stack[-2])
0x6ca: Pop(0)
0x6cb: Push((int) 50)
0x6cc: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x6cd: Push(CvectorIndex(Stack[-1], 1))
0x6ce: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x6cf: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6d0: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x6d1: Pop(0)
0x6d2: Return(); Pop(16)

0x6d3: PushEmpty(object, object)
0x6d4: @ self(Stack[-1])
0x6d5: Pop(0)
0x6d6: Stack[-3] = Stack[-1]
0x6d7: Return(); Pop(2)

0x6d8: Stack[-1] = 0
0x6d9: PushEmpty(float, float)
0x6da: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6db: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6dc: Push((float)0.0)
0x6dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6df: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x6e0: Return(); Pop(2)

0x6e1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6e2: Return(); Pop(2)

0x6e3: PushEmpty()
0x6e4: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e6: Stack[-3] = Stack[-2]
0x6e7: GOTO 0x6e9

0x6e8: Stack[-3] = Stack[-1]
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty()
0x6eb: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ed: Stack[-4] = Stack[-2]
0x6ee: Return(); Pop(0)

0x6ef: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f1: Stack[-4] = Stack[-1]
0x6f2: Return(); Pop(0)

0x6f3: Stack[-4] = Stack[-3]
0x6f4: Return(); Pop(0)

0x6f5: PushEmpty(object, object)
0x6f6: @ CreateFloatVector(Stack[-1])
0x6f7: Pop(0)
0x6f8: @@ add(Stack[-3])
0x6f9: Pop(0)
0x6fa: Push((int) 0)
0x6fb: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6fd: Push((float)0.7)
0x6fe: Push((int) 500)
0x6ff: @ RumblePlay(Stack[-2], Stack[-1])
0x700: Pop(2)
0x701: Push((int) 15)
0x702: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x703: Pop(1)
0x704: Return(); Pop(2)

0x705: Stack[-1] = 0
0x706: PushEmpty(object, object)
0x707: @ FindActor(Stack[-1], Stack[-4])
0x708: Pop(0)
0x709: Pop(0); Push((bool) Stack[-1] == 0)
0x70a: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70b: Stack[-5] = (bool) 0
0x70c: Return(); Pop(2)

0x70d: @ Trigger(Stack[-1], Stack[-3])
0x70e: Pop(0)
0x70f: Stack[-5] = (bool) 1
0x710: Return(); Pop(2)

0x711: Stack[-1] = 0
0x712: PushEmpty(bool, bool)
0x713: @ IsPlayerActor(Stack[-3], Stack[-1])
0x714: Pop(0)
0x715: Push(Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x717: Push("attack")
0x718: @ PlayGlobalMusic(Stack[-1])
0x719: Pop(1)
0x71a: Return(); Pop(2)

0x71b: PushEmpty(object, object)
0x71c: @ GetScene(Stack[-1])
0x71d: Pop(0)
0x71e: Push("battle")
0x71f: PushEmpty(object)
0x720: Call2 0x6d3

0x721: Pop(0)
0x722: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x723: Pop(2)
0x724: Return(); Pop(2)

0x725: Stack[-1] = 0
0x726: PushEmpty(string, string)
0x727: Stack[-1] = "idle"
0x728: Push(Stack[-3])
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x72b: Stack[-4] = Stack[-1]
0x72c: Return(); Pop(2)

0x72d: PushEmpty(int, bool, int, bool)
0x72e: Stack[-2] = (int) 0
0x72f: Push("all")
0x730: PushEmpty(string, int)
0x731: Stack[-1] = Stack[-5]
0x732: Call2 0x726

0x733: Pop(1)
0x734: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x735: Pop(2)
0x736: Pop(0); Push((bool) Stack[-1] == 0)
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: GOTO 0x73c

0x739: Push((int) 1)
0x73a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x73b: GOTO 0x72f

0x73c: Stack[-5] = Stack[-2]
0x73d: Return(); Pop(4)

0x73e: PushEmpty()
0x73f: PushEmpty(bool, string, string)
0x740: Stack[-2] = "quest_d1_03"
0x741: Stack[-1] = "butcher_death"
0x742: Call2 0x706

0x743: Pop(3)
0x744: PushEmpty(object)
0x745: Stack[-1] = Stack[-2]
0x746: Push(-1, 0); TaskCall(3)
0x747: Call2 0x4d5

0x748: Pop(-1, 0); TaskReturn
0x749: Pop(1)
0x74a: Return(); Pop(0)

0x74b: PushEmpty()
0x74c: PushEmpty(object, int, float)
0x74d: Stack[-3] = Stack[-7]
0x74e: Stack[-2] = Stack[-6]
0x74f: Stack[-1] = Stack[-5]
0x750: Call2 0x63d

0x751: Pop(3)
0x752: Return(); Pop(0)

0x753: PushEmpty()
0x754: PushEmpty(object, int, float, cvector, cvector)
0x755: Stack[-5] = Stack[-11]
0x756: Stack[-4] = Stack[-10]
0x757: Stack[-3] = Stack[-9]
0x758: Stack[-2] = Stack[-7]
0x759: Stack[-1] = Stack[-6]
0x75a: Call2 0x681

0x75b: Pop(5)
0x75c: Return(); Pop(0)

0x75d: PushEmpty(float, float)
0x75e: Push("health")
0x75f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x761: Push("health")
0x762: @ GetProperty(Stack[-1], Stack[-2])
0x763: Pop(1)
0x764: Push((int) 0)
0x765: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x766: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x767: @ SignalDeath(Stack[-4])
0x768: Pop(0)
0x769: Return(); Pop(2)

0x76a: PushEmpty()
0x76b: PushEmpty(object)
0x76c: Stack[-1] = Stack[-2]
0x76d: Call2 0x73e

0x76e: Pop(1)
0x76f: Return(); Pop(0)

