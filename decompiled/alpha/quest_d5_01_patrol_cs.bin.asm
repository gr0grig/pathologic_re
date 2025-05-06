GlobalVarCount = 0

Strings:
	player
	all
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	attack_end
	bjump
	IsAttacking
	IsAttacking
	GetPosition
	walk
	run
	quest_d5_01
	dead
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	fire
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
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	2

Import:
	Sleep (1 args)
	FindActor (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	IsPlayerActor (2 args)
	GetPFPosition (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	self (1 args)
	Trigger (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (object, int, int, bool, int) Params = 0
	GTASK_2 Vars = (bool, object) Params = 6
		EVENT_7 Op = 0x270 Vars = (int)
		EVENT_10 Op = 0x282 Vars = (object)
		EVENT_41 Op = 0x28d Vars = (object)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x2b3 Vars = (object)
		EVENT_6 Op = 0x2bb Vars = ()
		EVENT_22 Op = 0x330 Vars = (object, int, float, float)
		EVENT_16 Op = 0x332 Vars = (object, string)
		EVENT_41 Op = 0x334 Vars = (object)

Events:
EVENT_22 Op = 0x445 Vars = (object, int, float, float)
EVENT_16 Op = 0x44d Vars = (object, string)
EVENT_41 Op = 0x45a Vars = (object)

0x0: PushEmpty()
0x1: Push(-0, 5); TaskCall(1)
0x2: Call 0xa

0x3: Pop(-0, 5); TaskReturn
0x4: Pop(0)
0x5: Push((float)0.5)
0x6: @ Sleep(Stack[-1])
0x7: Pop(1)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: PushEmpty(object, object)
0xb: Push("player")
0xc: @ FindActor(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: Pop(0); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Return(); Pop(2)

0x11: PushEmpty(object, bool, float)
0x12: Stack[-3] = Stack[-4]
0x13: Stack[-2] = (bool) 1
0x14: Stack[-1] = (float) 180.0
0x15: Call 0x1f

0x16: Pop(3)
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty()
0x1a: Stack[-3] = (float) 0.3
0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: Stack[-3] = (int) 0
0x1e: Return(); Pop(0)

0x1f: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x20: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x21: Push("all")
0x22: Push("attack_begin")
0x23: Push((int) 1)
0x24: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x25: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x27: Pop(2)
0x28: Pop(0); Push((bool) Stack[-10] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: GOTO 0x2e

0x2b: Push((int) 1)
0x2c: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2d: GOTO 0x21

0x2e: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2f: Push("attack")
0x30: Push((int) 1)
0x31: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x32: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x34: Pop(1)
0x35: Pop(0); Push((bool) Stack[-9] == 0)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: GOTO 0x3b

0x38: Push((int) 1)
0x39: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a: GOTO 0x2f

0x3b: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x3c: Push("@GetAttackDistance")
0x3d: Push((int) 1)
0x3e: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x3f: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x40: @@ GetAttackDistance(Stack[-8])
0x41: Pop(0)
0x42: Push((int) 50)
0x43: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x44: GOTO 0x46

0x45: Stack[-8] = Stack[-21]
0x46: Push((int) 150)
0x47: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x49: Stack[-8] = (int) 150
0x4a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x4c: @ IsPlayerActor(Stack[-0], Stack[-5])
0x4d: Pop(0)
0x4e: Push(Stack[-22])
0x4f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x50: Stack[-4] = (bool) 0
0x51: GOTO 0x53

0x52: Stack[-4] = (bool) 1
0x53: PushEmpty(bool)
0x54: Stack[-1] = (bool) 0
0x55: PushEmpty(bool, object)
0x56: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x57: Call 0x3b3

0x58: Pop(1)
0x59: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0x5e: @@ GetPFPosition(Stack[-7])
0x5f: Pop(0)
0x60: @ GetPFPosition(Stack[-6])
0x61: Pop(0)
0x62: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x63: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x64: Push((float)400.0)
0x65: Pop(1); Push(Stack[-1] + Stack[-9]);
0x66: Push((float)400.0)
0x67: Pop(1); Push(Stack[-1] + Stack[-10]);
0x68: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6b: PushEmpty(bool, object, float, float, bool, bool)
0x6c: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Stack[-4] = Stack[-14]
0x6e: Stack[-3] = (float) 10000.0
0x6f: Stack[-2] = (bool) 1
0x70: Stack[-1] = (bool) 0
0x71: Push(-6, 2); TaskCall(2)
0x72: Call 0x20a

0x73: Pop(-6, 2); TaskReturn
0x74: Pop(5)
0x75: Pop(1); Push((bool) Stack[-1] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0xdb

0x78: Stack[-4] = (bool) 0
0x79: GOTO 0xda

0x7a: Pop(0); Push(Stack[-21] * Stack[-21]);
0x7b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0x7d: Pop(0); Push((bool) Stack[-4] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x7f: PushEmpty(object)
0x80: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x81: Call 0x40e

0x82: Pop(1)
0x83: Push("all")
0x84: Push("attack_on")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: @ WaitForAnimEnd()
0x88: Pop(0)
0x89: @ StopAsync()
0x8a: Pop(0)
0x8b: Stack[-4] = (bool) 1
0x8c: @ rand(Stack[-1])
0x8d: Pop(0)
0x8e: PushEmpty(bool)
0x8f: Stack[-1] = (bool) 1
0x90: Push((float)0.6)
0x91: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: PushEmpty(bool)
0x94: Call 0x1d7

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 0
0x98: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x99: @ Face(Stack[-0])
0x9a: Pop(0)
0x9b: Push("all")
0x9c: Push("attack_stay")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: PushEmpty(bool, float)
0xa0: Stack[-1] = Stack[-23]
0xa1: Call 0x17b

0xa2: Pop(2)
0xa3: @ StopAsync()
0xa4: Pop(0)
0xa5: GOTO 0xd1

0xa6: @ Face(Stack[-0])
0xa7: Pop(0)
0xa8: Push("all")
0xa9: Push("fjump")
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: @ WaitForAnimEnd()
0xad: Pop(0)
0xae: Push(CVector(0.0, 0.0, 0.0))
0xaf: @ SetSpeed(Stack[-1])
0xb0: Pop(1)
0xb1: @ Stop()
0xb2: Pop(0)
0xb3: @ StopAsync()
0xb4: Pop(0)
0xb5: PushEmpty(bool)
0xb6: Call 0x1d7

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call 0x3b3

0xbd: Pop(1)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: GOTO 0xdb

0xc1: @@ GetPFPosition(Stack[-7])
0xc2: Pop(0)
0xc3: @ GetPFPosition(Stack[-6])
0xc4: Pop(0)
0xc5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xc6: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xc7: Pop(0); Push(Stack[-21] * Stack[-21]);
0xc8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xca: PushEmpty(bool, float)
0xcb: Stack[-1] = Stack[-23]
0xcc: Call 0x113

0xcd: Pop(1)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: GOTO 0xdb

0xd1: GOTO 0xda

0xd2: PushEmpty(bool, float)
0xd3: Stack[-1] = Stack[-23]
0xd4: Call 0x113

0xd5: Pop(1)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: GOTO 0xdb

0xd9: Stack[-4] = (bool) 1
0xda: GOTO 0x53

0xdb: @ WaitForAnimEnd()
0xdc: Pop(0)
0xdd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Return(); Pop(20)

0xe0: Push("all")
0xe1: Push("attack_off")
0xe2: @ PlayAnimation(Stack[-2], Stack[-1])
0xe3: Pop(2)
0xe4: @ WaitForAnimEnd()
0xe5: Pop(0)
0xe6: Push(Stack[-5])
0xe7: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe8: Push((float)2.0)
0xe9: @ Sleep(Stack[-1])
0xea: Pop(1)
0xeb: Return(); Pop(20)

0xec: PushEmpty(object, float, float, object, float, float)
0xed: Push((float)0.9)
0xee: Pop(1); Push(Stack[-9] * Stack[-1]);
0xef: @ GetVictim(Stack[-1], Stack[-4])
0xf0: Pop(1)
0xf1: @ ReportAttack(Stack[-0])
0xf2: Pop(0)
0xf3: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xf4: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xf5: PushEmpty(float, object, int)
0xf6: Stack[-2] = Stack[-6]
0xf7: Stack[-1] = Stack[-10]
0xf8: Call 0x19

0xf9: Stack[-5] = Stack[-3]
0xfa: Pop(3)
0xfb: PushEmpty(float, object, float, int)
0xfc: Stack[-3] = Stack[-7]
0xfd: Stack[-2] = Stack[-6]
0xfe: PushEmpty(int, object, int)
0xff: Stack[-2] = Stack[-10]
0x100: Stack[-1] = Stack[-14]
0x101: Call 0x1c

0x102: Stack[-4] = Stack[-3]
0x103: Pop(3)
0x104: Call 0x34a

0x105: Stack[-5] = Stack[-4]
0x106: Pop(4)
0x107: PushEmpty(int)
0x108: Call 0x202

0x109: Pop(0)
0x10a: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x10b: Pop(1)
0x10c: PushEmpty(object, float)
0x10d: Stack[-2] = Stack[-5]
0x10e: Stack[-1] = Stack[-3]
0x10f: Call 0x204

0x110: Pop(2)
0x111: Return(); Pop(6)

0x112: Stack[-3] = 0
0x113: PushEmpty(int, bool, int, bool)
0x114: @ irand(Stack[-2], Stack[-1])
0x115: Pop(0)
0x116: Push((int) 1)
0x117: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x118: @ Face(Stack[-0])
0x119: Pop(0)
0x11a: Push((bool) 1)
0x11b: @ SetAttackState(Stack[-1])
0x11c: Pop(1)
0x11d: Push("all")
0x11e: Push("attack_begin")
0x11f: Pop(1); Push(Stack[-1] + Stack[-4]);
0x120: @ PlayAnimation(Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: @ WaitForAnimEnd()
0x123: Pop(0)
0x124: PushEmpty()
0x125: Call 0x1e2

0x126: Pop(0)
0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call 0x3b3

0x12a: Pop(1)
0x12b: Pop(1); Push((bool) Stack[-1] == 0)
0x12c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12d: @ StopAsync()
0x12e: Pop(0)
0x12f: Stack[-6] = (bool) 0
0x130: Return(); Pop(4)

0x131: PushEmpty(float, int)
0x132: Stack[-2] = Stack[-7]
0x133: Stack[-1] = Stack[-4]
0x134: Call 0xec

0x135: Pop(2)
0x136: Push("all")
0x137: Push("attack_middle")
0x138: Pop(1); Push(Stack[-1] + Stack[-4]);
0x139: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: Push(Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13d: Push("all")
0x13e: Push("attack_middle")
0x13f: Pop(1); Push(Stack[-1] + Stack[-4]);
0x140: @ PlayAnimation(Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: @ WaitForAnimEnd()
0x143: Pop(0)
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call 0x3b3

0x147: Pop(1)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14a: @ StopAsync()
0x14b: Pop(0)
0x14c: Stack[-6] = (bool) 0
0x14d: Return(); Pop(4)

0x14e: PushEmpty(float, int)
0x14f: Stack[-2] = Stack[-7]
0x150: Stack[-1] = Stack[-4]
0x151: Call 0xec

0x152: Pop(2)
0x153: Push((bool) 0)
0x154: @ SetAttackState(Stack[-1])
0x155: Pop(1)
0x156: Push("all")
0x157: Push("attack_end")
0x158: Pop(1); Push(Stack[-1] + Stack[-4]);
0x159: @ PlayAnimation(Stack[-2], Stack[-1])
0x15a: Pop(2)
0x15b: PushEmpty(bool, float)
0x15c: Stack[-1] = (float) 0.75
0x15d: Call 0x163

0x15e: Pop(2)
0x15f: @ StopAsync()
0x160: Pop(0)
0x161: Stack[-6] = (bool) 1
0x162: Return(); Pop(4)

0x163: PushEmpty(float, bool, float, bool)
0x164: @ rand(Stack[-2])
0x165: Pop(0)
0x166: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: @ IsAnimationPlaying(Stack[-1])
0x169: Pop(0)
0x16a: Pop(0); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: GOTO 0x176

0x16d: PushEmpty(bool)
0x16e: Call 0x1a3

0x16f: Pop(0)
0x170: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x171: Stack[-6] = (bool) 1
0x172: Return(); Pop(4)

0x173: @ sync()
0x174: Pop(0)
0x175: GOTO 0x168

0x176: GOTO 0x179

0x177: @ WaitForAnimEnd()
0x178: Pop(0)
0x179: Stack[-6] = (bool) 0
0x17a: Return(); Pop(4)

0x17b: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x17c: @ IsAnimationPlaying(Stack[-5])
0x17d: Pop(0)
0x17e: Pop(0); Push((bool) Stack[-5] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: GOTO 0x1a1

0x181: PushEmpty(bool)
0x182: Call 0x1a3

0x183: Pop(0)
0x184: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x185: Stack[-12] = (bool) 1
0x186: Return(); Pop(10)

0x187: PushEmpty(bool, object)
0x188: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x189: Call 0x3b3

0x18a: Pop(1)
0x18b: Pop(1); Push((bool) Stack[-1] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18d: Stack[-12] = (bool) 0
0x18e: Return(); Pop(10)

0x18f: @@ GetPFPosition(Stack[-4])
0x190: Pop(0)
0x191: @ GetPFPosition(Stack[-3])
0x192: Pop(0)
0x193: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x194: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x195: Pop(0); Push(Stack[-11] * Stack[-11]);
0x196: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x198: PushEmpty(bool, float)
0x199: Stack[-1] = Stack[-13]
0x19a: Call 0x113

0x19b: Pop(2)
0x19c: Stack[-12] = (bool) 1
0x19d: Return(); Pop(10)

0x19e: @ sync()
0x19f: Pop(0)
0x1a0: GOTO 0x17c

0x1a1: Stack[-12] = (bool) 0
0x1a2: Return(); Pop(10)

0x1a3: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a6: Call 0x3b3

0x1a7: Pop(1)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-11] = (bool) 0
0x1ab: Return(); Pop(10)

0x1ac: PushEmpty(bool)
0x1ad: Call 0x1d7

0x1ae: Pop(0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b0: @@ GetPFPosition(Stack[-5])
0x1b1: Pop(0)
0x1b2: @ GetPFPosition(Stack[-4])
0x1b3: Pop(0)
0x1b4: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1b5: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1b6: @@ GetAttackDistance(Stack[-1])
0x1b7: Pop(0)
0x1b8: Push((int) 50)
0x1b9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1ba: Pop(0); Push(Stack[-1] * Stack[-1]);
0x1bb: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty()
0x1be: Call 0x1c4

0x1bf: Pop(0)
0x1c0: Stack[-11] = (bool) 1
0x1c1: Return(); Pop(10)

0x1c2: Stack[-11] = (bool) 0
0x1c3: Return(); Pop(10)

0x1c4: PushEmpty(cvector, cvector, cvector, cvector)
0x1c5: @ Face(Stack[-0])
0x1c6: Pop(0)
0x1c7: Push("all")
0x1c8: Push("bjump")
0x1c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: @@ GetPFPosition(Stack[-2])
0x1cc: Pop(0)
0x1cd: @ GetPFPosition(Stack[-1])
0x1ce: Pop(0)
0x1cf: @ WaitForAnimEnd()
0x1d0: Pop(0)
0x1d1: @ StopAsync()
0x1d2: Pop(0)
0x1d3: Push(CVector(0.0, 0.0, 0.0))
0x1d4: @ SetSpeed(Stack[-1])
0x1d5: Pop(1)
0x1d6: Return(); Pop(4)

0x1d7: PushEmpty(bool, bool)
0x1d8: Push("IsAttacking")
0x1d9: Push((int) 1)
0x1da: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x1db: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dc: @@ IsAttacking(Stack[-1])
0x1dd: Pop(0)
0x1de: Stack[-3] = Stack[-1]
0x1df: Return(); Pop(2)

0x1e0: Stack[-3] = (bool) 0
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty(float, int, float, int)
0x1e3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Return(); Pop(4)

0x1e6: Push( Stack[4 + Tasks[-1].StackPointer] )
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e8: Push((int) -1)
0x1e9: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1ea: Push((int) 0)
0x1eb: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Return(); Pop(4)

0x1ee: @ rand(Stack[-2])
0x1ef: Pop(0)
0x1f0: PushEmpty(float)
0x1f1: Call 0x208

0x1f2: Pop(0)
0x1f3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f5: @ irand(Stack[-1], Stack[-2])
0x1f6: Pop(0)
0x1f7: Push((int) 1)
0x1f8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1f9: Push("attack")
0x1fa: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1fb: @ Speak(Stack[-1])
0x1fc: Pop(1)
0x1fd: PushEmpty(int)
0x1fe: Call 0x206

0x1ff: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x200: Pop(1)
0x201: Return(); Pop(4)

0x202: Stack[-1] = (int) 0
0x203: Return(); Pop(0)

0x204: PushEmpty()
0x205: Return(); Pop(0)

0x206: Stack[-1] = (int) 1
0x207: Return(); Pop(0)

0x208: Stack[-1] = (float) 0.5
0x209: Return(); Pop(0)

0x20a: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x20b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x20c: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x20d: Stack[-7] = Stack[-17]
0x20e: PushEmpty(bool, object)
0x20f: Stack[-1] = Stack[-23]
0x210: Call 0x296

0x211: Pop(1)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-22] = (bool) 0
0x215: Return(); Pop(16)

0x216: @@ GetPosition(Stack[-5])
0x217: Pop(0)
0x218: @ GetPosition(Stack[-4])
0x219: Pop(0)
0x21a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x21b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x21c: PushEmpty(bool)
0x21d: Stack[-1] = (bool) 0
0x21e: Push((int) 0)
0x21f: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x221: Pop(0); Push(Stack[-20] * Stack[-20]);
0x222: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-1] = (bool) 1
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: @ Stop()
0x227: Pop(0)
0x228: Stack[-22] = (bool) 0
0x229: Return(); Pop(16)

0x22a: Pop(0); Push(Stack[-20] * Stack[-20]);
0x22b: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x22d: @@ GetPFPosition(Stack[-5])
0x22e: Pop(0)
0x22f: @ FindPathTo(Stack[-1], Stack[-5])
0x230: Pop(0)
0x231: Pop(0); Push(( Stack[-1] != 0 )
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-6] = Stack[-1]
0x234: Stack[-1] = 0
0x235: Pop(0); Push(( Stack[-6] != 0 )
0x236: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x237: Push(Stack[-7])
0x238: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x239: Stack[-7] = (bool) 0
0x23a: @ RotatePath(Stack[-6], Stack[-8])
0x23b: Pop(0)
0x23c: Pop(0); Push((bool) Stack[-8] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: GOTO 0x26e

0x23f: Push((int) 0)
0x240: Push((float)0.3)
0x241: @ SetTimer(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: PushEmpty(string)
0x244: Call 0x29d

0x245: Pop(0)
0x246: PushEmpty(string)
0x247: Call 0x29f

0x248: Pop(0)
0x249: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x24a: Pop(2)
0x24b: Pop(0); Push((bool) Stack[-8] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x24e: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24f: Stack[-6] = 0
0x250: GOTO 0x26e

0x251: GOTO 0x253

0x252: GOTO 0x26d

0x253: GOTO 0x255

0x254: Stack[-6] = 0
0x255: GOTO 0x266

0x256: Push((int) 0)
0x257: @ KillTimer(Stack[-1])
0x258: Pop(1)
0x259: Push((float)0.5)
0x25a: @ Sleep(Stack[-1], Stack[-9])
0x25b: Pop(1)
0x25c: Pop(0); Push((bool) Stack[-8] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-6] = 0
0x261: GOTO 0x26e

0x262: Push((int) 0)
0x263: Push((float)0.3)
0x264: @ SetTimer(Stack[-2], Stack[-1])
0x265: Pop(2)
0x266: Stack[-1] = 0
0x267: GOTO 0x26c

0x268: Push((int) 0)
0x269: @ KillTimer(Stack[-1])
0x26a: Pop(1)
0x26b: GOTO 0x26e

0x26c: Stack[-6] = 0
0x26d: GOTO 0x20e

0x26e: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x26f: Return(); Pop(16)

0x270: PushEmpty()
0x271: Push((int) 0)
0x272: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Return(); Pop(0)

0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x277: Call 0x296

0x278: Pop(1)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27c: Push((int) 0)
0x27d: @ KillTimer(Stack[-1])
0x27e: Pop(1)
0x27f: @ Stop()
0x280: Pop(0)
0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: @ RequestClearPath(Stack[-1])
0x284: Pop(0)
0x285: Return(); Pop(0)

0x286: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x287: Push((int) 0)
0x288: @ KillTimer(Stack[-1])
0x289: Pop(1)
0x28a: @ Stop()
0x28b: Pop(0)
0x28c: Return(); Pop(0)

0x28d: PushEmpty()
0x28e: PushEmpty()
0x28f: Call 0x286

0x290: Pop(0)
0x291: PushEmpty(object)
0x292: Stack[-1] = Stack[-2]
0x293: Call 0x45a

0x294: Pop(1)
0x295: Return(); Pop(0)

0x296: PushEmpty()
0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[-3]
0x299: Call 0x3b3

0x29a: Stack[-4] = Stack[-2]
0x29b: Pop(2)
0x29c: Return(); Pop(0)

0x29d: Stack[-1] = "walk"
0x29e: Return(); Pop(0)

0x29f: Stack[-1] = "run"
0x2a0: Return(); Pop(0)

0x2a1: PushEmpty()
0x2a2: PushEmpty(bool, string, string)
0x2a3: Stack[-2] = "quest_d5_01"
0x2a4: Stack[-1] = "dead"
0x2a5: Call 0x431

0x2a6: Pop(3)
0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[-2]
0x2a9: Call 0x2c3

0x2aa: Pop(1)
0x2ab: Push((int) 50)
0x2ac: Push((int) 40)
0x2ad: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: @ Hold()
0x2b0: Pop(0)
0x2b1: GOTO 0x2af

0x2b2: Return(); Pop(0)

0x2b3: PushEmpty(bool, bool)
0x2b4: @ IsOverrideActive(Stack[-1])
0x2b5: Pop(0)
0x2b6: Pop(0); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: @ WorkWithCorpse(Stack[-3])
0x2b9: Pop(0)
0x2ba: Return(); Pop(2)

0x2bb: PushEmpty(object)
0x2bc: Call 0x419

0x2bd: Pop(0)
0x2be: @ RemoveActor(Stack[-1])
0x2bf: Pop(1)
0x2c0: @ Hold()
0x2c1: Pop(0)
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2c4: Pop(0); Push((bool) Stack[-21] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c6: PushEmpty(string)
0x2c7: Stack[-1] = "fdie"
0x2c8: Call 0x31a

0x2c9: Pop(1)
0x2ca: GOTO 0x319

0x2cb: @@ GetPosition(Stack[-10])
0x2cc: Pop(0)
0x2cd: @ GetPosition(Stack[-9])
0x2ce: Pop(0)
0x2cf: @ GetDirection(Stack[-8])
0x2d0: Pop(0)
0x2d1: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2d2: Push(CvectorIndex(Stack[-7], 0))
0x2d3: Push(CvectorIndex(Stack[-9], 0))
0x2d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d5: Push(CvectorIndex(Stack[-8], 2))
0x2d6: Push(CvectorIndex(Stack[-10], 2))
0x2d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d9: Push((int) 0)
0x2da: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-6] = "fdie"
0x2dd: GOTO 0x2df

0x2de: Stack[-6] = "bdie"
0x2df: @ RemoveRTEnvelope()
0x2e0: Pop(0)
0x2e1: @ SetDeathState()
0x2e2: Pop(0)
0x2e3: @ Stop()
0x2e4: Pop(0)
0x2e5: @ StopAsync()
0x2e6: Pop(0)
0x2e7: Stack[-5] = Stack[-21]
0x2e8: Push("GetScriptProperty")
0x2e9: Push((int) 2)
0x2ea: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2ec: Push("Owner")
0x2ed: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2ee: Pop(1)
0x2ef: Push(Stack[-4])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f1: Push("Owner")
0x2f2: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2f3: Pop(1)
0x2f4: Pop(0); Push((bool) Stack[-5] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Stack[-5] = Stack[-21]
0x2f7: Push("@GetEyesHeight")
0x2f8: Push((int) 1)
0x2f9: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2fa: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2fb: @@ GetEyesHeight(Stack[-2])
0x2fc: Pop(0)
0x2fd: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2fe: Push(CvectorIndex(Stack[-1], 1))
0x2ff: Stack[-1] = Stack[-3]
0x300: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x301: Push("head")
0x302: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x303: Pop(1)
0x304: Stack[-3] = (bool) 1
0x305: GOTO 0x307

0x306: Stack[-3] = (bool) 0
0x307: Push("all")
0x308: @ PlayAnimation(Stack[-1], Stack[-7])
0x309: Pop(1)
0x30a: @ WaitForAnimEnd()
0x30b: Pop(0)
0x30c: Push(Stack[-3])
0x30d: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30e: @ StopAsync()
0x30f: Pop(0)
0x310: Push("head")
0x311: @ UnlookAsync(Stack[-1])
0x312: Pop(1)
0x313: Push("all")
0x314: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x315: Pop(1)
0x316: @ RemoveEnvelope()
0x317: Pop(0)
0x318: Stack[-5] = 0
0x319: Return(); Pop(20)

0x31a: PushEmpty()
0x31b: @ RemoveRTEnvelope()
0x31c: Pop(0)
0x31d: @ SetDeathState()
0x31e: Pop(0)
0x31f: @ Stop()
0x320: Pop(0)
0x321: @ StopAsync()
0x322: Pop(0)
0x323: @ StopSecondaryAnimation()
0x324: Pop(0)
0x325: Push("all")
0x326: @ PlayAnimation(Stack[-1], Stack[-2])
0x327: Pop(1)
0x328: @ WaitForAnimEnd()
0x329: Pop(0)
0x32a: Push("all")
0x32b: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x32c: Pop(1)
0x32d: @ RemoveEnvelope()
0x32e: Pop(0)
0x32f: Return(); Pop(0)

0x330: PushEmpty()
0x331: Return(); Pop(0)

0x332: PushEmpty()
0x333: Return(); Pop(0)

0x334: PushEmpty()
0x335: Return(); Pop(0)

0x336: PushEmpty()
0x337: Push((int) 1)
0x338: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: Stack[-2] = "fire"
0x33b: Return(); Pop(0)

0x33c: Stack[-2] = "phys"
0x33d: Return(); Pop(0)

0x33e: PushEmpty(bool, bool)
0x33f: Push("HasProperty")
0x340: Push((int) 2)
0x341: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-5] = (bool) 0
0x345: Return(); Pop(2)

0x346: @@ HasProperty(Stack[-3], Stack[-1])
0x347: Pop(0)
0x348: Stack[-5] = Stack[-1]
0x349: Return(); Pop(2)

0x34a: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x34b: PushEmpty(bool, object, string)
0x34c: Stack[-2] = Stack[-18]
0x34d: Stack[-1] = "health"
0x34e: Call 0x33e

0x34f: Pop(2)
0x350: Pop(1); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-16] = (float) 0.0
0x353: Return(); Pop(12)

0x354: PushEmpty(bool, object, string)
0x355: Stack[-2] = Stack[-18]
0x356: Stack[-1] = "armor"
0x357: Call 0x33e

0x358: Pop(2)
0x359: Pop(1); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35b: Stack[-6] = (int) 0
0x35c: GOTO 0x360

0x35d: Push("armor")
0x35e: @@ GetProperty(Stack[-1], Stack[-7])
0x35f: Pop(1)
0x360: Push("armor_")
0x361: PushEmpty(string, int)
0x362: Stack[-1] = Stack[-16]
0x363: Call 0x336

0x364: Pop(1)
0x365: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x366: PushEmpty(bool, object, string)
0x367: Stack[-2] = Stack[-18]
0x368: Stack[-1] = Stack[-8]
0x369: Call 0x33e

0x36a: Pop(2)
0x36b: Pop(1); Push((bool) Stack[-1] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-4] = (int) 0
0x36e: GOTO 0x371

0x36f: @@ GetProperty(Stack[-5], Stack[-4])
0x370: Pop(0)
0x371: PushEmpty(float, float, float)
0x372: Pop(0); Push(Stack[-9] + Stack[-7]);
0x373: Push((float)100.0)
0x374: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x375: Stack[-1] = (int) 1
0x376: Call 0x41f

0x377: Stack[-6] = Stack[-3]
0x378: Pop(3)
0x379: Push("health")
0x37a: @@ GetProperty(Stack[-1], Stack[-3])
0x37b: Pop(1)
0x37c: Push((int) 1)
0x37d: Pop(1); Push(Stack[-1] - Stack[-4]);
0x37e: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x37f: Push("health")
0x380: PushEmpty(float, float, float, float)
0x381: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x382: Stack[-2] = (int) 0
0x383: Stack[-1] = (int) 1
0x384: Call 0x426

0x385: Pop(3)
0x386: @@ SetProperty(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: Stack[-16] = Stack[-1]
0x389: Return(); Pop(12)

0x38a: PushEmpty(bool, bool)
0x38b: @@ IsDead(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-4] = Stack[-1]
0x38e: Return(); Pop(2)

0x38f: PushEmpty(object, object, object, object)
0x390: Pop(0); Push((bool) Stack[-5] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-6] = (bool) 0
0x393: Return(); Pop(4)

0x394: PushEmpty(bool)
0x395: Stack[-1] = (bool) 0
0x396: Push("IsDead")
0x397: Push((int) 1)
0x398: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x399: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39a: PushEmpty(bool, object)
0x39b: Stack[-1] = Stack[-8]
0x39c: Call 0x38a

0x39d: Pop(1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[-1] = (bool) 1
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-6] = (bool) 0
0x3a2: Return(); Pop(4)

0x3a3: @ GetScene(Stack[-2])
0x3a4: Pop(0)
0x3a5: Pop(0); Push((bool) Stack[-2] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: Stack[-6] = (bool) 0
0x3a8: Return(); Pop(4)

0x3a9: @@ GetScene(Stack[-1])
0x3aa: Pop(0)
0x3ab: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-6] = (bool) 0
0x3ae: Return(); Pop(4)

0x3af: Stack[-6] = (bool) 1
0x3b0: Return(); Pop(4)

0x3b1: Stack[-1] = 0
0x3b2: Stack[-2] = 0
0x3b3: PushEmpty(int, int)
0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[-5]
0x3b6: Call 0x38f

0x3b7: Pop(1)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-4] = (bool) 0
0x3bb: Return(); Pop(2)

0x3bc: PushEmpty(bool, object, string)
0x3bd: Stack[-2] = Stack[-6]
0x3be: Stack[-1] = "noaccess"
0x3bf: Call 0x33e

0x3c0: Pop(2)
0x3c1: Pop(1); Push((bool) Stack[-1] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-4] = (bool) 1
0x3c4: Return(); Pop(2)

0x3c5: Push("noaccess")
0x3c6: @@ GetProperty(Stack[-1], Stack[-2])
0x3c7: Pop(1)
0x3c8: Push((int) 0)
0x3c9: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x3cc: PushEmpty(bool)
0x3cd: Stack[-1] = (bool) 0
0x3ce: Push((int) 4)
0x3cf: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d1: Push((int) 5)
0x3d2: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: Stack[-1] = (bool) 1
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d6: @ GetScene(Stack[-10])
0x3d7: Pop(0)
0x3d8: @ GetPosition(Stack[-8])
0x3d9: Pop(0)
0x3da: @ GetEyesHeight(Stack[-7])
0x3db: Pop(0)
0x3dc: Push(CvectorIndex(Stack[-8], 1))
0x3dd: Push((int) 2)
0x3de: Pop(1); Push(Stack[-9] / Stack[-1]);
0x3df: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3e0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3e1: Push("scripted")
0x3e2: Push(CVector(0.0, 0.0, 1.0))
0x3e3: Push("blood.xml")
0x3e4: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Stack[-9] = 0
0x3e7: Stack[-10] = 0
0x3e8: Pop(0); Push((bool) Stack[-23] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: Return(); Pop(20)

0x3eb: @ GetSecondaryAnimationType(Stack[-6])
0x3ec: Pop(0)
0x3ed: Push((int) 0)
0x3ee: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3f0: Return(); Pop(20)

0x3f1: @@ GetPosition(Stack[-5])
0x3f2: Pop(0)
0x3f3: @ GetPosition(Stack[-4])
0x3f4: Pop(0)
0x3f5: @ GetDirection(Stack[-3])
0x3f6: Pop(0)
0x3f7: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x3f8: Push(CvectorIndex(Stack[-2], 0))
0x3f9: Push(CvectorIndex(Stack[-4], 0))
0x3fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3fb: Push(CvectorIndex(Stack[-3], 2))
0x3fc: Push(CvectorIndex(Stack[-5], 2))
0x3fd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3fe: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ff: Push((int) 0)
0x400: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-1] = "fhit"
0x403: GOTO 0x405

0x404: Stack[-1] = "bhit"
0x405: Push("hit_react")
0x406: Push("1")
0x407: Pop(1); Push(Stack[-3] + Stack[-1]);
0x408: Push("2")
0x409: Pop(1); Push(Stack[-4] + Stack[-1]);
0x40a: Push((int) -10)
0x40b: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(4)
0x40d: Return(); Pop(20)

0x40e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x40f: @@ GetPosition(Stack[-3])
0x410: Pop(0)
0x411: @ GetPosition(Stack[-2])
0x412: Pop(0)
0x413: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x414: Push(CvectorIndex(Stack[-1], 0))
0x415: Push(CvectorIndex(Stack[-2], 2))
0x416: @ RotateAsync(Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: Return(); Pop(6)

0x419: PushEmpty(object, object)
0x41a: @ self(Stack[-1])
0x41b: Pop(0)
0x41c: Stack[-3] = Stack[-1]
0x41d: Return(); Pop(2)

0x41e: Stack[-1] = 0
0x41f: PushEmpty()
0x420: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: Stack[-3] = Stack[-2]
0x423: GOTO 0x425

0x424: Stack[-3] = Stack[-1]
0x425: Return(); Pop(0)

0x426: PushEmpty()
0x427: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x428: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x429: Stack[-4] = Stack[-2]
0x42a: Return(); Pop(0)

0x42b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-4] = Stack[-1]
0x42e: Return(); Pop(0)

0x42f: Stack[-4] = Stack[-3]
0x430: Return(); Pop(0)

0x431: PushEmpty(object, object)
0x432: @ FindActor(Stack[-1], Stack[-4])
0x433: Pop(0)
0x434: Pop(0); Push((bool) Stack[-1] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-5] = (bool) 0
0x437: Return(); Pop(2)

0x438: @ Trigger(Stack[-1], Stack[-3])
0x439: Pop(0)
0x43a: Stack[-5] = (bool) 1
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = 0
0x43d: PushEmpty()
0x43e: PushEmpty(object)
0x43f: Stack[-1] = Stack[-2]
0x440: Push(-1, 0); TaskCall(3)
0x441: Call 0x2a1

0x442: Pop(-1, 0); TaskReturn
0x443: Pop(1)
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: PushEmpty(object, int, float)
0x447: Stack[-3] = Stack[-7]
0x448: Stack[-2] = Stack[-6]
0x449: Stack[-1] = Stack[-5]
0x44a: Call 0x3cb

0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: PushEmpty(float, float)
0x44e: Push("health")
0x44f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x451: Push("health")
0x452: @ GetProperty(Stack[-1], Stack[-2])
0x453: Pop(1)
0x454: Push((int) 0)
0x455: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: @ SignalDeath(Stack[-4])
0x458: Pop(0)
0x459: Return(); Pop(2)

0x45a: PushEmpty()
0x45b: PushEmpty(object)
0x45c: Stack[-1] = Stack[-2]
0x45d: Call 0x43d

0x45e: Pop(1)
0x45f: Return(); Pop(0)

