GlobalVarCount = 0

Strings:
	trigger
	growl
	cleanup
	restore
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
	1
	2
	quest_d1_03
	butcher_death

Import:
	SensePlayerOnly (1 args)
	IsPlayerActor (2 args)
	PlayGlobalSound (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	FindActor (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
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
	GTASK_0 Vars = (bool) Params = 0
		EVENT_17 Op = 0x7 Vars = (object)
		EVENT_26 Op = 0x12 Vars = (string)
		EVENT_6 Op = 0x44 Vars = ()
	GTASK_1 Vars = (object, int, int, bool, int) Params = 0
		EVENT_6 Op = 0x68 Vars = ()
	GTASK_2 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x25b Vars = ()
		EVENT_7 Op = 0x2c9 Vars = (int)
		EVENT_10 Op = 0x2db Vars = (object)
		EVENT_41 Op = 0x2e6 Vars = (object)
	GTASK_3  Params = 1
		EVENT_22 Op = 0x370 Vars = (object, int, float, float)
		EVENT_16 Op = 0x372 Vars = (object, string)
		EVENT_41 Op = 0x374 Vars = (object)

Events:
EVENT_22 Op = 0x48a Vars = (object, int, float, float)
EVENT_16 Op = 0x492 Vars = (object, string)
EVENT_41 Op = 0x49f Vars = (object)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call 0x24

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty(bool, bool)
0x8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9: Pop(0)
0xa: Push(Stack[-1])
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty()
0xd: Push(-0, 5); TaskCall(1)
0xe: Call 0x56

0xf: Pop(-0, 5); TaskReturn
0x10: Pop(0)
0x11: Return(); Pop(2)

0x12: PushEmpty()
0x13: Push("trigger")
0x14: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x16: Push("growl")
0x17: @ PlayGlobalSound(Stack[-1])
0x18: Pop(1)
0x19: PushEmpty()
0x1a: Push(-0, 5); TaskCall(1)
0x1b: Call 0x56

0x1c: Pop(-0, 5); TaskReturn
0x1d: Pop(0)
0x1e: GOTO 0x23

0x1f: PushEmpty(string)
0x20: Stack[-1] = Stack[-2]
0x21: Call 0x28

0x22: Pop(1)
0x23: Return(); Pop(0)

0x24: @ Hold()
0x25: Pop(0)
0x26: GOTO 0x24

0x27: Return(); Pop(0)

0x28: PushEmpty(bool, bool)
0x29: Push("cleanup")
0x2a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x2c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2d: @ IsLoaded(Stack[-1])
0x2e: Pop(0)
0x2f: PushEmpty(bool)
0x30: Stack[-1] = (bool) 0
0x31: Pop(0); Push((bool) Stack[-2] == 0)
0x32: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x33: PushEmpty(bool)
0x34: Call 0x54

0x35: Pop(0)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: Stack[-1] = (bool) 1
0x38: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x39: PushEmpty(object)
0x3a: Call 0x459

0x3b: Pop(0)
0x3c: @ RemoveActor(Stack[-1])
0x3d: Pop(1)
0x3e: GOTO 0x43

0x3f: Push("restore")
0x40: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x43: Return(); Pop(2)

0x44: PushEmpty(bool)
0x45: Stack[-1] = (bool) 0
0x46: Push( Stack[0 + Tasks[-1].StackPointer] )
0x47: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x48: PushEmpty(bool)
0x49: Call 0x54

0x4a: Pop(0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Stack[-1] = (bool) 1
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: PushEmpty(object)
0x4f: Call 0x459

0x50: Pop(0)
0x51: @ RemoveActor(Stack[-1])
0x52: Pop(1)
0x53: Return(); Pop(0)

0x54: Stack[-1] = (bool) 1
0x55: Return(); Pop(0)

0x56: PushEmpty(object, object)
0x57: Push("player")
0x58: @ FindActor(Stack[-2], Stack[-1])
0x59: Pop(1)
0x5a: PushEmpty(object, bool, float)
0x5b: Stack[-3] = Stack[-4]
0x5c: Stack[-2] = (bool) 1
0x5d: Stack[-1] = (float) 180.0
0x5e: Call 0x70

0x5f: Pop(3)
0x60: Return(); Pop(2)

0x61: Stack[-1] = 0
0x62: PushEmpty()
0x63: Stack[-3] = (float) 0.1
0x64: Return(); Pop(0)

0x65: PushEmpty()
0x66: Stack[-3] = (int) 0
0x67: Return(); Pop(0)

0x68: PushEmpty(object)
0x69: Call 0x459

0x6a: Pop(0)
0x6b: @ RemoveActor(Stack[-1])
0x6c: Pop(1)
0x6d: @ Hold()
0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x71: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x72: Push("all")
0x73: Push("attack_begin")
0x74: Push((int) 1)
0x75: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x76: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: Pop(0); Push((bool) Stack[-10] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: GOTO 0x7f

0x7c: Push((int) 1)
0x7d: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x7e: GOTO 0x72

0x7f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x80: Push("attack")
0x81: Push((int) 1)
0x82: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x83: Pop(2); Push(Stack[-2] + Stack[-1]);
0x84: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x85: Pop(1)
0x86: Pop(0); Push((bool) Stack[-9] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x8c

0x89: Push((int) 1)
0x8a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x8b: GOTO 0x80

0x8c: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x8d: Push("@GetAttackDistance")
0x8e: Push((int) 1)
0x8f: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x90: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x91: @@ GetAttackDistance(Stack[-8])
0x92: Pop(0)
0x93: Push((int) 50)
0x94: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x95: GOTO 0x97

0x96: Stack[-8] = Stack[-21]
0x97: Push((int) 150)
0x98: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-8] = (int) 150
0x9b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9c: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x9d: @ IsPlayerActor(Stack[-0], Stack[-5])
0x9e: Pop(0)
0x9f: Push(Stack[-22])
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: Stack[-4] = (bool) 0
0xa2: GOTO 0xa4

0xa3: Stack[-4] = (bool) 1
0xa4: PushEmpty(bool)
0xa5: Stack[-1] = (bool) 0
0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa8: Call 0x3f3

0xa9: Pop(1)
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Stack[-1] = (bool) 1
0xae: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xaf: @@ GetPFPosition(Stack[-7])
0xb0: Pop(0)
0xb1: @ GetPFPosition(Stack[-6])
0xb2: Pop(0)
0xb3: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xb4: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xb5: Push((float)400.0)
0xb6: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb7: Push((float)400.0)
0xb8: Pop(1); Push(Stack[-1] + Stack[-10]);
0xb9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xba: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xbc: PushEmpty(bool, object, float, float, bool, bool)
0xbd: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Stack[-4] = Stack[-14]
0xbf: Stack[-3] = (float) 3000.0
0xc0: Stack[-2] = (bool) 1
0xc1: Stack[-1] = (bool) 0
0xc2: Push(-6, 2); TaskCall(2)
0xc3: Call 0x263

0xc4: Pop(-6, 2); TaskReturn
0xc5: Pop(5)
0xc6: Pop(1); Push((bool) Stack[-1] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: GOTO 0x12c

0xc9: Stack[-4] = (bool) 0
0xca: GOTO 0x12b

0xcb: Pop(0); Push(Stack[-21] * Stack[-21]);
0xcc: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0xce: Pop(0); Push((bool) Stack[-4] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd0: PushEmpty(object)
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call 0x44e

0xd3: Pop(1)
0xd4: Push("all")
0xd5: Push("attack_on")
0xd6: @ PlayAnimation(Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: @ WaitForAnimEnd()
0xd9: Pop(0)
0xda: @ StopAsync()
0xdb: Pop(0)
0xdc: Stack[-4] = (bool) 1
0xdd: @ rand(Stack[-1])
0xde: Pop(0)
0xdf: PushEmpty(bool)
0xe0: Stack[-1] = (bool) 1
0xe1: Push((float)0.6)
0xe2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: PushEmpty(bool)
0xe5: Call 0x228

0xe6: Pop(0)
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Stack[-1] = (bool) 0
0xe9: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xea: @ Face(Stack[-0])
0xeb: Pop(0)
0xec: Push("all")
0xed: Push("attack_stay")
0xee: @ PlayAnimation(Stack[-2], Stack[-1])
0xef: Pop(2)
0xf0: PushEmpty(bool, float)
0xf1: Stack[-1] = Stack[-23]
0xf2: Call 0x1cc

0xf3: Pop(2)
0xf4: @ StopAsync()
0xf5: Pop(0)
0xf6: GOTO 0x122

0xf7: @ Face(Stack[-0])
0xf8: Pop(0)
0xf9: Push("all")
0xfa: Push("fjump")
0xfb: @ PlayAnimation(Stack[-2], Stack[-1])
0xfc: Pop(2)
0xfd: @ WaitForAnimEnd()
0xfe: Pop(0)
0xff: Push(CVector(0.0, 0.0, 0.0))
0x100: @ SetSpeed(Stack[-1])
0x101: Pop(1)
0x102: @ Stop()
0x103: Pop(0)
0x104: @ StopAsync()
0x105: Pop(0)
0x106: PushEmpty(bool)
0x107: Call 0x228

0x108: Pop(0)
0x109: Pop(1); Push((bool) Stack[-1] == 0)
0x10a: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10b: PushEmpty(bool, object)
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call 0x3f3

0x10e: Pop(1)
0x10f: Pop(1); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: GOTO 0x12c

0x112: @@ GetPFPosition(Stack[-7])
0x113: Pop(0)
0x114: @ GetPFPosition(Stack[-6])
0x115: Pop(0)
0x116: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x117: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x118: Pop(0); Push(Stack[-21] * Stack[-21]);
0x119: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11b: PushEmpty(bool, float)
0x11c: Stack[-1] = Stack[-23]
0x11d: Call 0x164

0x11e: Pop(1)
0x11f: Pop(1); Push((bool) Stack[-1] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: GOTO 0x12c

0x122: GOTO 0x12b

0x123: PushEmpty(bool, float)
0x124: Stack[-1] = Stack[-23]
0x125: Call 0x164

0x126: Pop(1)
0x127: Pop(1); Push((bool) Stack[-1] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: GOTO 0x12c

0x12a: Stack[-4] = (bool) 1
0x12b: GOTO 0xa4

0x12c: @ WaitForAnimEnd()
0x12d: Pop(0)
0x12e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Return(); Pop(20)

0x131: Push("all")
0x132: Push("attack_off")
0x133: @ PlayAnimation(Stack[-2], Stack[-1])
0x134: Pop(2)
0x135: @ WaitForAnimEnd()
0x136: Pop(0)
0x137: Push(Stack[-5])
0x138: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x139: Push((float)2.0)
0x13a: @ Sleep(Stack[-1])
0x13b: Pop(1)
0x13c: Return(); Pop(20)

0x13d: PushEmpty(object, float, float, object, float, float)
0x13e: Push((float)0.9)
0x13f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x140: @ GetVictim(Stack[-1], Stack[-4])
0x141: Pop(1)
0x142: @ ReportAttack(Stack[-0])
0x143: Pop(0)
0x144: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x145: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x146: PushEmpty(float, object, int)
0x147: Stack[-2] = Stack[-6]
0x148: Stack[-1] = Stack[-10]
0x149: Call 0x62

0x14a: Stack[-5] = Stack[-3]
0x14b: Pop(3)
0x14c: PushEmpty(float, object, float, int)
0x14d: Stack[-3] = Stack[-7]
0x14e: Stack[-2] = Stack[-6]
0x14f: PushEmpty(int, object, int)
0x150: Stack[-2] = Stack[-10]
0x151: Stack[-1] = Stack[-14]
0x152: Call 0x65

0x153: Stack[-4] = Stack[-3]
0x154: Pop(3)
0x155: Call 0x38a

0x156: Stack[-5] = Stack[-4]
0x157: Pop(4)
0x158: PushEmpty(int)
0x159: Call 0x253

0x15a: Pop(0)
0x15b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x15c: Pop(1)
0x15d: PushEmpty(object, float)
0x15e: Stack[-2] = Stack[-5]
0x15f: Stack[-1] = Stack[-3]
0x160: Call 0x255

0x161: Pop(2)
0x162: Return(); Pop(6)

0x163: Stack[-3] = 0
0x164: PushEmpty(int, bool, int, bool)
0x165: @ irand(Stack[-2], Stack[-1])
0x166: Pop(0)
0x167: Push((int) 1)
0x168: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x169: @ Face(Stack[-0])
0x16a: Pop(0)
0x16b: Push((bool) 1)
0x16c: @ SetAttackState(Stack[-1])
0x16d: Pop(1)
0x16e: Push("all")
0x16f: Push("attack_begin")
0x170: Pop(1); Push(Stack[-1] + Stack[-4]);
0x171: @ PlayAnimation(Stack[-2], Stack[-1])
0x172: Pop(2)
0x173: @ WaitForAnimEnd()
0x174: Pop(0)
0x175: PushEmpty()
0x176: Call 0x233

0x177: Pop(0)
0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17a: Call 0x3f3

0x17b: Pop(1)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17e: @ StopAsync()
0x17f: Pop(0)
0x180: Stack[-6] = (bool) 0
0x181: Return(); Pop(4)

0x182: PushEmpty(float, int)
0x183: Stack[-2] = Stack[-7]
0x184: Stack[-1] = Stack[-4]
0x185: Call 0x13d

0x186: Pop(2)
0x187: Push("all")
0x188: Push("attack_middle")
0x189: Pop(1); Push(Stack[-1] + Stack[-4]);
0x18a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: Push(Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x18e: Push("all")
0x18f: Push("attack_middle")
0x190: Pop(1); Push(Stack[-1] + Stack[-4]);
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd()
0x194: Pop(0)
0x195: PushEmpty(bool, object)
0x196: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x197: Call 0x3f3

0x198: Pop(1)
0x199: Pop(1); Push((bool) Stack[-1] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19b: @ StopAsync()
0x19c: Pop(0)
0x19d: Stack[-6] = (bool) 0
0x19e: Return(); Pop(4)

0x19f: PushEmpty(float, int)
0x1a0: Stack[-2] = Stack[-7]
0x1a1: Stack[-1] = Stack[-4]
0x1a2: Call 0x13d

0x1a3: Pop(2)
0x1a4: Push((bool) 0)
0x1a5: @ SetAttackState(Stack[-1])
0x1a6: Pop(1)
0x1a7: Push("all")
0x1a8: Push("attack_end")
0x1a9: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: PushEmpty(bool, float)
0x1ad: Stack[-1] = (float) 0.75
0x1ae: Call 0x1b4

0x1af: Pop(2)
0x1b0: @ StopAsync()
0x1b1: Pop(0)
0x1b2: Stack[-6] = (bool) 1
0x1b3: Return(); Pop(4)

0x1b4: PushEmpty(float, bool, float, bool)
0x1b5: @ rand(Stack[-2])
0x1b6: Pop(0)
0x1b7: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: @ IsAnimationPlaying(Stack[-1])
0x1ba: Pop(0)
0x1bb: Pop(0); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: GOTO 0x1c7

0x1be: PushEmpty(bool)
0x1bf: Call 0x1f4

0x1c0: Pop(0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-6] = (bool) 1
0x1c3: Return(); Pop(4)

0x1c4: @ sync()
0x1c5: Pop(0)
0x1c6: GOTO 0x1b9

0x1c7: GOTO 0x1ca

0x1c8: @ WaitForAnimEnd()
0x1c9: Pop(0)
0x1ca: Stack[-6] = (bool) 0
0x1cb: Return(); Pop(4)

0x1cc: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x1cd: @ IsAnimationPlaying(Stack[-5])
0x1ce: Pop(0)
0x1cf: Pop(0); Push((bool) Stack[-5] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1f2

0x1d2: PushEmpty(bool)
0x1d3: Call 0x1f4

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-12] = (bool) 1
0x1d7: Return(); Pop(10)

0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1da: Call 0x3f3

0x1db: Pop(1)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: Stack[-12] = (bool) 0
0x1df: Return(); Pop(10)

0x1e0: @@ GetPFPosition(Stack[-4])
0x1e1: Pop(0)
0x1e2: @ GetPFPosition(Stack[-3])
0x1e3: Pop(0)
0x1e4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1e5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1e6: Pop(0); Push(Stack[-11] * Stack[-11]);
0x1e7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty(bool, float)
0x1ea: Stack[-1] = Stack[-13]
0x1eb: Call 0x164

0x1ec: Pop(2)
0x1ed: Stack[-12] = (bool) 1
0x1ee: Return(); Pop(10)

0x1ef: @ sync()
0x1f0: Pop(0)
0x1f1: GOTO 0x1cd

0x1f2: Stack[-12] = (bool) 0
0x1f3: Return(); Pop(10)

0x1f4: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f7: Call 0x3f3

0x1f8: Pop(1)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fb: Stack[-11] = (bool) 0
0x1fc: Return(); Pop(10)

0x1fd: PushEmpty(bool)
0x1fe: Call 0x228

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x201: @@ GetPFPosition(Stack[-5])
0x202: Pop(0)
0x203: @ GetPFPosition(Stack[-4])
0x204: Pop(0)
0x205: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x206: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x207: @@ GetAttackDistance(Stack[-1])
0x208: Pop(0)
0x209: Push((int) 50)
0x20a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x20b: Pop(0); Push(Stack[-1] * Stack[-1]);
0x20c: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: PushEmpty()
0x20f: Call 0x215

0x210: Pop(0)
0x211: Stack[-11] = (bool) 1
0x212: Return(); Pop(10)

0x213: Stack[-11] = (bool) 0
0x214: Return(); Pop(10)

0x215: PushEmpty(cvector, cvector, cvector, cvector)
0x216: @ Face(Stack[-0])
0x217: Pop(0)
0x218: Push("all")
0x219: Push("bjump")
0x21a: @ PlayAnimation(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: @@ GetPFPosition(Stack[-2])
0x21d: Pop(0)
0x21e: @ GetPFPosition(Stack[-1])
0x21f: Pop(0)
0x220: @ WaitForAnimEnd()
0x221: Pop(0)
0x222: @ StopAsync()
0x223: Pop(0)
0x224: Push(CVector(0.0, 0.0, 0.0))
0x225: @ SetSpeed(Stack[-1])
0x226: Pop(1)
0x227: Return(); Pop(4)

0x228: PushEmpty(bool, bool)
0x229: Push("IsAttacking")
0x22a: Push((int) 1)
0x22b: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x22c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22d: @@ IsAttacking(Stack[-1])
0x22e: Pop(0)
0x22f: Stack[-3] = Stack[-1]
0x230: Return(); Pop(2)

0x231: Stack[-3] = (bool) 0
0x232: Return(); Pop(2)

0x233: PushEmpty(float, int, float, int)
0x234: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Return(); Pop(4)

0x237: Push( Stack[4 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x239: Push((int) -1)
0x23a: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: Return(); Pop(4)

0x23f: @ rand(Stack[-2])
0x240: Pop(0)
0x241: PushEmpty(float)
0x242: Call 0x259

0x243: Pop(0)
0x244: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x246: @ irand(Stack[-1], Stack[-2])
0x247: Pop(0)
0x248: Push((int) 1)
0x249: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x24a: Push("attack")
0x24b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x24c: @ Speak(Stack[-1])
0x24d: Pop(1)
0x24e: PushEmpty(int)
0x24f: Call 0x257

0x250: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x251: Pop(1)
0x252: Return(); Pop(4)

0x253: Stack[-1] = (int) 0
0x254: Return(); Pop(0)

0x255: PushEmpty()
0x256: Return(); Pop(0)

0x257: Stack[-1] = (int) 1
0x258: Return(); Pop(0)

0x259: Stack[-1] = (float) 0.5
0x25a: Return(); Pop(0)

0x25b: PushEmpty(object)
0x25c: Call 0x459

0x25d: Pop(0)
0x25e: @ RemoveActor(Stack[-1])
0x25f: Pop(1)
0x260: @ Hold()
0x261: Pop(0)
0x262: Return(); Pop(0)

0x263: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x264: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x265: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x266: Stack[-7] = Stack[-17]
0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[-23]
0x269: Call 0x2ef

0x26a: Pop(1)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26d: Stack[-22] = (bool) 0
0x26e: Return(); Pop(16)

0x26f: @@ GetPosition(Stack[-5])
0x270: Pop(0)
0x271: @ GetPosition(Stack[-4])
0x272: Pop(0)
0x273: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x274: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x275: PushEmpty(bool)
0x276: Stack[-1] = (bool) 0
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27a: Pop(0); Push(Stack[-20] * Stack[-20]);
0x27b: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27f: @ Stop()
0x280: Pop(0)
0x281: Stack[-22] = (bool) 0
0x282: Return(); Pop(16)

0x283: Pop(0); Push(Stack[-20] * Stack[-20]);
0x284: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x286: @@ GetPFPosition(Stack[-5])
0x287: Pop(0)
0x288: @ FindPathTo(Stack[-1], Stack[-5])
0x289: Pop(0)
0x28a: Pop(0); Push(( Stack[-1] != 0 )
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-6] = Stack[-1]
0x28d: Stack[-1] = 0
0x28e: Pop(0); Push(( Stack[-6] != 0 )
0x28f: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x290: Push(Stack[-7])
0x291: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x292: Stack[-7] = (bool) 0
0x293: @ RotatePath(Stack[-6], Stack[-8])
0x294: Pop(0)
0x295: Pop(0); Push((bool) Stack[-8] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x2c7

0x298: Push((int) 0)
0x299: Push((float)0.3)
0x29a: @ SetTimer(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: PushEmpty(string)
0x29d: Call 0x2f6

0x29e: Pop(0)
0x29f: PushEmpty(string)
0x2a0: Call 0x2f8

0x2a1: Pop(0)
0x2a2: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: Pop(0); Push((bool) Stack[-8] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a8: Stack[-6] = 0
0x2a9: GOTO 0x2c7

0x2aa: GOTO 0x2ac

0x2ab: GOTO 0x2c6

0x2ac: GOTO 0x2ae

0x2ad: Stack[-6] = 0
0x2ae: GOTO 0x2bf

0x2af: Push((int) 0)
0x2b0: @ KillTimer(Stack[-1])
0x2b1: Pop(1)
0x2b2: Push((float)0.5)
0x2b3: @ Sleep(Stack[-1], Stack[-9])
0x2b4: Pop(1)
0x2b5: Pop(0); Push((bool) Stack[-8] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-6] = 0
0x2ba: GOTO 0x2c7

0x2bb: Push((int) 0)
0x2bc: Push((float)0.3)
0x2bd: @ SetTimer(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: Stack[-1] = 0
0x2c0: GOTO 0x2c5

0x2c1: Push((int) 0)
0x2c2: @ KillTimer(Stack[-1])
0x2c3: Pop(1)
0x2c4: GOTO 0x2c7

0x2c5: Stack[-6] = 0
0x2c6: GOTO 0x267

0x2c7: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2c8: Return(); Pop(16)

0x2c9: PushEmpty()
0x2ca: Push((int) 0)
0x2cb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Call 0x2ef

0x2d1: Pop(1)
0x2d2: Pop(1); Push((bool) Stack[-1] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2d5: Push((int) 0)
0x2d6: @ KillTimer(Stack[-1])
0x2d7: Pop(1)
0x2d8: @ Stop()
0x2d9: Pop(0)
0x2da: Return(); Pop(0)

0x2db: PushEmpty()
0x2dc: @ RequestClearPath(Stack[-1])
0x2dd: Pop(0)
0x2de: Return(); Pop(0)

0x2df: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2e0: Push((int) 0)
0x2e1: @ KillTimer(Stack[-1])
0x2e2: Pop(1)
0x2e3: @ Stop()
0x2e4: Pop(0)
0x2e5: Return(); Pop(0)

0x2e6: PushEmpty()
0x2e7: PushEmpty()
0x2e8: Call 0x2df

0x2e9: Pop(0)
0x2ea: PushEmpty(object)
0x2eb: Stack[-1] = Stack[-2]
0x2ec: Call 0x49f

0x2ed: Pop(1)
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[-3]
0x2f2: Call 0x3f3

0x2f3: Stack[-4] = Stack[-2]
0x2f4: Pop(2)
0x2f5: Return(); Pop(0)

0x2f6: Stack[-1] = "walk"
0x2f7: Return(); Pop(0)

0x2f8: Stack[-1] = "run"
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: PushEmpty(object)
0x2fc: Stack[-1] = Stack[-2]
0x2fd: Call 0x303

0x2fe: Pop(1)
0x2ff: @ Hold()
0x300: Pop(0)
0x301: GOTO 0x2ff

0x302: Return(); Pop(0)

0x303: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x304: Pop(0); Push((bool) Stack[-21] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: PushEmpty(string)
0x307: Stack[-1] = "fdie"
0x308: Call 0x35a

0x309: Pop(1)
0x30a: GOTO 0x359

0x30b: @@ GetPosition(Stack[-10])
0x30c: Pop(0)
0x30d: @ GetPosition(Stack[-9])
0x30e: Pop(0)
0x30f: @ GetDirection(Stack[-8])
0x310: Pop(0)
0x311: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x312: Push(CvectorIndex(Stack[-7], 0))
0x313: Push(CvectorIndex(Stack[-9], 0))
0x314: Pop(2); Push(Stack[-2] * Stack[-1]);
0x315: Push(CvectorIndex(Stack[-8], 2))
0x316: Push(CvectorIndex(Stack[-10], 2))
0x317: Pop(2); Push(Stack[-2] * Stack[-1]);
0x318: Pop(2); Push(Stack[-2] + Stack[-1]);
0x319: Push((int) 0)
0x31a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-6] = "fdie"
0x31d: GOTO 0x31f

0x31e: Stack[-6] = "bdie"
0x31f: @ RemoveRTEnvelope()
0x320: Pop(0)
0x321: @ SetDeathState()
0x322: Pop(0)
0x323: @ Stop()
0x324: Pop(0)
0x325: @ StopAsync()
0x326: Pop(0)
0x327: Stack[-5] = Stack[-21]
0x328: Push("GetScriptProperty")
0x329: Push((int) 2)
0x32a: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x32b: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32c: Push("Owner")
0x32d: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x32e: Pop(1)
0x32f: Push(Stack[-4])
0x330: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x331: Push("Owner")
0x332: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x333: Pop(1)
0x334: Pop(0); Push((bool) Stack[-5] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-5] = Stack[-21]
0x337: Push("@GetEyesHeight")
0x338: Push((int) 1)
0x339: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x33a: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x33b: @@ GetEyesHeight(Stack[-2])
0x33c: Pop(0)
0x33d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x33e: Push(CvectorIndex(Stack[-1], 1))
0x33f: Stack[-1] = Stack[-3]
0x340: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x341: Push("head")
0x342: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x343: Pop(1)
0x344: Stack[-3] = (bool) 1
0x345: GOTO 0x347

0x346: Stack[-3] = (bool) 0
0x347: Push("all")
0x348: @ PlayAnimation(Stack[-1], Stack[-7])
0x349: Pop(1)
0x34a: @ WaitForAnimEnd()
0x34b: Pop(0)
0x34c: Push(Stack[-3])
0x34d: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34e: @ StopAsync()
0x34f: Pop(0)
0x350: Push("head")
0x351: @ UnlookAsync(Stack[-1])
0x352: Pop(1)
0x353: Push("all")
0x354: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x355: Pop(1)
0x356: @ RemoveEnvelope()
0x357: Pop(0)
0x358: Stack[-5] = 0
0x359: Return(); Pop(20)

0x35a: PushEmpty()
0x35b: @ RemoveRTEnvelope()
0x35c: Pop(0)
0x35d: @ SetDeathState()
0x35e: Pop(0)
0x35f: @ Stop()
0x360: Pop(0)
0x361: @ StopAsync()
0x362: Pop(0)
0x363: @ StopSecondaryAnimation()
0x364: Pop(0)
0x365: Push("all")
0x366: @ PlayAnimation(Stack[-1], Stack[-2])
0x367: Pop(1)
0x368: @ WaitForAnimEnd()
0x369: Pop(0)
0x36a: Push("all")
0x36b: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x36c: Pop(1)
0x36d: @ RemoveEnvelope()
0x36e: Pop(0)
0x36f: Return(); Pop(0)

0x370: PushEmpty()
0x371: Return(); Pop(0)

0x372: PushEmpty()
0x373: Return(); Pop(0)

0x374: PushEmpty()
0x375: Return(); Pop(0)

0x376: PushEmpty()
0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Stack[-2] = "fire"
0x37b: Return(); Pop(0)

0x37c: Stack[-2] = "phys"
0x37d: Return(); Pop(0)

0x37e: PushEmpty(bool, bool)
0x37f: Push("HasProperty")
0x380: Push((int) 2)
0x381: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x382: Pop(1); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-5] = (bool) 0
0x385: Return(); Pop(2)

0x386: @@ HasProperty(Stack[-3], Stack[-1])
0x387: Pop(0)
0x388: Stack[-5] = Stack[-1]
0x389: Return(); Pop(2)

0x38a: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x38b: PushEmpty(bool, object, string)
0x38c: Stack[-2] = Stack[-18]
0x38d: Stack[-1] = "health"
0x38e: Call 0x37e

0x38f: Pop(2)
0x390: Pop(1); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-16] = (float) 0.0
0x393: Return(); Pop(12)

0x394: PushEmpty(bool, object, string)
0x395: Stack[-2] = Stack[-18]
0x396: Stack[-1] = "armor"
0x397: Call 0x37e

0x398: Pop(2)
0x399: Pop(1); Push((bool) Stack[-1] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-6] = (int) 0
0x39c: GOTO 0x3a0

0x39d: Push("armor")
0x39e: @@ GetProperty(Stack[-1], Stack[-7])
0x39f: Pop(1)
0x3a0: Push("armor_")
0x3a1: PushEmpty(string, int)
0x3a2: Stack[-1] = Stack[-16]
0x3a3: Call 0x376

0x3a4: Pop(1)
0x3a5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a6: PushEmpty(bool, object, string)
0x3a7: Stack[-2] = Stack[-18]
0x3a8: Stack[-1] = Stack[-8]
0x3a9: Call 0x37e

0x3aa: Pop(2)
0x3ab: Pop(1); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-4] = (int) 0
0x3ae: GOTO 0x3b1

0x3af: @@ GetProperty(Stack[-5], Stack[-4])
0x3b0: Pop(0)
0x3b1: PushEmpty(float, float, float)
0x3b2: Pop(0); Push(Stack[-9] + Stack[-7]);
0x3b3: Push((float)100.0)
0x3b4: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x3b5: Stack[-1] = (int) 1
0x3b6: Call 0x45f

0x3b7: Stack[-6] = Stack[-3]
0x3b8: Pop(3)
0x3b9: Push("health")
0x3ba: @@ GetProperty(Stack[-1], Stack[-3])
0x3bb: Pop(1)
0x3bc: Push((int) 1)
0x3bd: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3be: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3bf: Push("health")
0x3c0: PushEmpty(float, float, float, float)
0x3c1: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3c2: Stack[-2] = (int) 0
0x3c3: Stack[-1] = (int) 1
0x3c4: Call 0x466

0x3c5: Pop(3)
0x3c6: @@ SetProperty(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Stack[-16] = Stack[-1]
0x3c9: Return(); Pop(12)

0x3ca: PushEmpty(bool, bool)
0x3cb: @@ IsDead(Stack[-1])
0x3cc: Pop(0)
0x3cd: Stack[-4] = Stack[-1]
0x3ce: Return(); Pop(2)

0x3cf: PushEmpty(object, object, object, object)
0x3d0: Pop(0); Push((bool) Stack[-5] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: Stack[-6] = (bool) 0
0x3d3: Return(); Pop(4)

0x3d4: PushEmpty(bool)
0x3d5: Stack[-1] = (bool) 0
0x3d6: Push("IsDead")
0x3d7: Push((int) 1)
0x3d8: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3da: PushEmpty(bool, object)
0x3db: Stack[-1] = Stack[-8]
0x3dc: Call 0x3ca

0x3dd: Pop(1)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: Stack[-1] = (bool) 1
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-6] = (bool) 0
0x3e2: Return(); Pop(4)

0x3e3: @ GetScene(Stack[-2])
0x3e4: Pop(0)
0x3e5: Pop(0); Push((bool) Stack[-2] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-6] = (bool) 0
0x3e8: Return(); Pop(4)

0x3e9: @@ GetScene(Stack[-1])
0x3ea: Pop(0)
0x3eb: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-6] = (bool) 0
0x3ee: Return(); Pop(4)

0x3ef: Stack[-6] = (bool) 1
0x3f0: Return(); Pop(4)

0x3f1: Stack[-1] = 0
0x3f2: Stack[-2] = 0
0x3f3: PushEmpty(int, int)
0x3f4: PushEmpty(bool, object)
0x3f5: Stack[-1] = Stack[-5]
0x3f6: Call 0x3cf

0x3f7: Pop(1)
0x3f8: Pop(1); Push((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-4] = (bool) 0
0x3fb: Return(); Pop(2)

0x3fc: PushEmpty(bool, object, string)
0x3fd: Stack[-2] = Stack[-6]
0x3fe: Stack[-1] = "noaccess"
0x3ff: Call 0x37e

0x400: Pop(2)
0x401: Pop(1); Push((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-4] = (bool) 1
0x404: Return(); Pop(2)

0x405: Push("noaccess")
0x406: @@ GetProperty(Stack[-1], Stack[-2])
0x407: Pop(1)
0x408: Push((int) 0)
0x409: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x40a: Return(); Pop(2)

0x40b: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x40c: PushEmpty(bool)
0x40d: Stack[-1] = (bool) 0
0x40e: Push((int) 4)
0x40f: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x411: Push((int) 5)
0x412: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: Stack[-1] = (bool) 1
0x415: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x416: @ GetScene(Stack[-10])
0x417: Pop(0)
0x418: @ GetPosition(Stack[-8])
0x419: Pop(0)
0x41a: @ GetEyesHeight(Stack[-7])
0x41b: Pop(0)
0x41c: Push(CvectorIndex(Stack[-8], 1))
0x41d: Push((int) 2)
0x41e: Pop(1); Push(Stack[-9] / Stack[-1]);
0x41f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x420: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x421: Push("scripted")
0x422: Push(CVector(0.0, 0.0, 1.0))
0x423: Push("blood.xml")
0x424: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x425: Pop(3)
0x426: Stack[-9] = 0
0x427: Stack[-10] = 0
0x428: Pop(0); Push((bool) Stack[-23] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Return(); Pop(20)

0x42b: @ GetSecondaryAnimationType(Stack[-6])
0x42c: Pop(0)
0x42d: Push((int) 0)
0x42e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: Return(); Pop(20)

0x431: @@ GetPosition(Stack[-5])
0x432: Pop(0)
0x433: @ GetPosition(Stack[-4])
0x434: Pop(0)
0x435: @ GetDirection(Stack[-3])
0x436: Pop(0)
0x437: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x438: Push(CvectorIndex(Stack[-2], 0))
0x439: Push(CvectorIndex(Stack[-4], 0))
0x43a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43b: Push(CvectorIndex(Stack[-3], 2))
0x43c: Push(CvectorIndex(Stack[-5], 2))
0x43d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43f: Push((int) 0)
0x440: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-1] = "fhit"
0x443: GOTO 0x445

0x444: Stack[-1] = "bhit"
0x445: Push("hit_react")
0x446: Push("1")
0x447: Pop(1); Push(Stack[-3] + Stack[-1]);
0x448: Push("2")
0x449: Pop(1); Push(Stack[-4] + Stack[-1]);
0x44a: Push((int) -10)
0x44b: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(4)
0x44d: Return(); Pop(20)

0x44e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x44f: @@ GetPosition(Stack[-3])
0x450: Pop(0)
0x451: @ GetPosition(Stack[-2])
0x452: Pop(0)
0x453: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x454: Push(CvectorIndex(Stack[-1], 0))
0x455: Push(CvectorIndex(Stack[-2], 2))
0x456: @ RotateAsync(Stack[-2], Stack[-1])
0x457: Pop(2)
0x458: Return(); Pop(6)

0x459: PushEmpty(object, object)
0x45a: @ self(Stack[-1])
0x45b: Pop(0)
0x45c: Stack[-3] = Stack[-1]
0x45d: Return(); Pop(2)

0x45e: Stack[-1] = 0
0x45f: PushEmpty()
0x460: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-3] = Stack[-2]
0x463: GOTO 0x465

0x464: Stack[-3] = Stack[-1]
0x465: Return(); Pop(0)

0x466: PushEmpty()
0x467: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-4] = Stack[-2]
0x46a: Return(); Pop(0)

0x46b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-4] = Stack[-1]
0x46e: Return(); Pop(0)

0x46f: Stack[-4] = Stack[-3]
0x470: Return(); Pop(0)

0x471: PushEmpty(object, object)
0x472: @ FindActor(Stack[-1], Stack[-4])
0x473: Pop(0)
0x474: Pop(0); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-5] = (bool) 0
0x477: Return(); Pop(2)

0x478: @ Trigger(Stack[-1], Stack[-3])
0x479: Pop(0)
0x47a: Stack[-5] = (bool) 1
0x47b: Return(); Pop(2)

0x47c: Stack[-1] = 0
0x47d: PushEmpty()
0x47e: PushEmpty(bool, string, string)
0x47f: Stack[-2] = "quest_d1_03"
0x480: Stack[-1] = "butcher_death"
0x481: Call 0x471

0x482: Pop(3)
0x483: PushEmpty(object)
0x484: Stack[-1] = Stack[-2]
0x485: Push(-1, 0); TaskCall(3)
0x486: Call 0x2fa

0x487: Pop(-1, 0); TaskReturn
0x488: Pop(1)
0x489: Return(); Pop(0)

0x48a: PushEmpty()
0x48b: PushEmpty(object, int, float)
0x48c: Stack[-3] = Stack[-7]
0x48d: Stack[-2] = Stack[-6]
0x48e: Stack[-1] = Stack[-5]
0x48f: Call 0x40b

0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: PushEmpty(float, float)
0x493: Push("health")
0x494: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x496: Push("health")
0x497: @ GetProperty(Stack[-1], Stack[-2])
0x498: Pop(1)
0x499: Push((int) 0)
0x49a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49c: @ SignalDeath(Stack[-4])
0x49d: Pop(0)
0x49e: Return(); Pop(2)

0x49f: PushEmpty()
0x4a0: PushEmpty(object)
0x4a1: Stack[-1] = Stack[-2]
0x4a2: Call 0x47d

0x4a3: Pop(1)
0x4a4: Return(); Pop(0)

