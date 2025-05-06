GlobalVarCount = 0

Strings:
	quest_d4_03
	gang_attack
	cleanup
	restore
	player
	all
	attack_begin
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
	death

Import:
	SensePlayerOnly (1 args)
	IsPlayerActor (2 args)
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
		EVENT_26 Op = 0x17 Vars = (string)
		EVENT_6 Op = 0x46 Vars = ()
	GTASK_1 Vars = (object, int, int, bool, int) Params = 0
		EVENT_6 Op = 0x6a Vars = ()
	GTASK_2 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x25d Vars = ()
		EVENT_7 Op = 0x2cb Vars = (int)
		EVENT_10 Op = 0x2dd Vars = (object)
		EVENT_41 Op = 0x2e8 Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0x2fc Vars = ()
		EVENT_22 Op = 0x37a Vars = (object, int, float, float)
		EVENT_16 Op = 0x37c Vars = (object, string)
		EVENT_41 Op = 0x37e Vars = (object)

Events:
EVENT_22 Op = 0x494 Vars = (object, int, float, float)
EVENT_16 Op = 0x49c Vars = (object, string)
EVENT_41 Op = 0x4a9 Vars = (object)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call 0x26

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty(bool, bool)
0x8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9: Pop(0)
0xa: Push(Stack[-1])
0xb: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xc: PushEmpty(bool, string, string)
0xd: Stack[-2] = "quest_d4_03"
0xe: Stack[-1] = "gang_attack"
0xf: Call 0x47b

0x10: Pop(3)
0x11: PushEmpty()
0x12: Push(-0, 5); TaskCall(1)
0x13: Call 0x58

0x14: Pop(-0, 5); TaskReturn
0x15: Pop(0)
0x16: Return(); Pop(2)

0x17: PushEmpty()
0x18: Push("attack")
0x19: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1b: PushEmpty()
0x1c: Push(-0, 5); TaskCall(1)
0x1d: Call 0x58

0x1e: Pop(-0, 5); TaskReturn
0x1f: Pop(0)
0x20: GOTO 0x25

0x21: PushEmpty(string)
0x22: Stack[-1] = Stack[-2]
0x23: Call 0x2a

0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: @ Hold()
0x27: Pop(0)
0x28: GOTO 0x26

0x29: Return(); Pop(0)

0x2a: PushEmpty(bool, bool)
0x2b: Push("cleanup")
0x2c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x2e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2f: @ IsLoaded(Stack[-1])
0x30: Pop(0)
0x31: PushEmpty(bool)
0x32: Stack[-1] = (bool) 0
0x33: Pop(0); Push((bool) Stack[-2] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: PushEmpty(bool)
0x36: Call 0x56

0x37: Pop(0)
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[-1] = (bool) 1
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: PushEmpty(object)
0x3c: Call 0x463

0x3d: Pop(0)
0x3e: @ RemoveActor(Stack[-1])
0x3f: Pop(1)
0x40: GOTO 0x45

0x41: Push("restore")
0x42: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x44: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x45: Return(); Pop(2)

0x46: PushEmpty(bool)
0x47: Stack[-1] = (bool) 0
0x48: Push( Stack[0 + Tasks[-1].StackPointer] )
0x49: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4a: PushEmpty(bool)
0x4b: Call 0x56

0x4c: Pop(0)
0x4d: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4e: Stack[-1] = (bool) 1
0x4f: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x50: PushEmpty(object)
0x51: Call 0x463

0x52: Pop(0)
0x53: @ RemoveActor(Stack[-1])
0x54: Pop(1)
0x55: Return(); Pop(0)

0x56: Stack[-1] = (bool) 1
0x57: Return(); Pop(0)

0x58: PushEmpty(object, object)
0x59: Push("player")
0x5a: @ FindActor(Stack[-2], Stack[-1])
0x5b: Pop(1)
0x5c: PushEmpty(object, bool, float)
0x5d: Stack[-3] = Stack[-4]
0x5e: Stack[-2] = (bool) 1
0x5f: Stack[-1] = (float) 180.0
0x60: Call 0x72

0x61: Pop(3)
0x62: Return(); Pop(2)

0x63: Stack[-1] = 0
0x64: PushEmpty()
0x65: Stack[-3] = (float) 0.1
0x66: Return(); Pop(0)

0x67: PushEmpty()
0x68: Stack[-3] = (int) 1
0x69: Return(); Pop(0)

0x6a: PushEmpty(object)
0x6b: Call 0x463

0x6c: Pop(0)
0x6d: @ RemoveActor(Stack[-1])
0x6e: Pop(1)
0x6f: @ Hold()
0x70: Pop(0)
0x71: Return(); Pop(0)

0x72: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x73: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x74: Push("all")
0x75: Push("attack_begin")
0x76: Push((int) 1)
0x77: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x78: Pop(2); Push(Stack[-2] + Stack[-1]);
0x79: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: Pop(0); Push((bool) Stack[-10] == 0)
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x81

0x7e: Push((int) 1)
0x7f: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x80: GOTO 0x74

0x81: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x82: Push("attack")
0x83: Push((int) 1)
0x84: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x85: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x87: Pop(1)
0x88: Pop(0); Push((bool) Stack[-9] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: GOTO 0x8e

0x8b: Push((int) 1)
0x8c: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x8d: GOTO 0x82

0x8e: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x8f: Push("@GetAttackDistance")
0x90: Push((int) 1)
0x91: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: @@ GetAttackDistance(Stack[-8])
0x94: Pop(0)
0x95: Push((int) 50)
0x96: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x97: GOTO 0x99

0x98: Stack[-8] = Stack[-21]
0x99: Push((int) 150)
0x9a: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-8] = (int) 150
0x9d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9e: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x9f: @ IsPlayerActor(Stack[-0], Stack[-5])
0xa0: Pop(0)
0xa1: Push(Stack[-22])
0xa2: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa3: Stack[-4] = (bool) 0
0xa4: GOTO 0xa6

0xa5: Stack[-4] = (bool) 1
0xa6: PushEmpty(bool)
0xa7: Stack[-1] = (bool) 0
0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa: Call 0x3fd

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Stack[-1] = (bool) 1
0xb0: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0xb1: @@ GetPFPosition(Stack[-7])
0xb2: Pop(0)
0xb3: @ GetPFPosition(Stack[-6])
0xb4: Pop(0)
0xb5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xb6: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xb7: Push((float)400.0)
0xb8: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb9: Push((float)400.0)
0xba: Pop(1); Push(Stack[-1] + Stack[-10]);
0xbb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbc: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xbe: PushEmpty(bool, object, float, float, bool, bool)
0xbf: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Stack[-4] = Stack[-14]
0xc1: Stack[-3] = (float) 3000.0
0xc2: Stack[-2] = (bool) 1
0xc3: Stack[-1] = (bool) 0
0xc4: Push(-6, 2); TaskCall(2)
0xc5: Call 0x265

0xc6: Pop(-6, 2); TaskReturn
0xc7: Pop(5)
0xc8: Pop(1); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0x12e

0xcb: Stack[-4] = (bool) 0
0xcc: GOTO 0x12d

0xcd: Pop(0); Push(Stack[-21] * Stack[-21]);
0xce: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0xd0: Pop(0); Push((bool) Stack[-4] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd2: PushEmpty(object)
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x458

0xd5: Pop(1)
0xd6: Push("all")
0xd7: Push("attack_on")
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ WaitForAnimEnd()
0xdb: Pop(0)
0xdc: @ StopAsync()
0xdd: Pop(0)
0xde: Stack[-4] = (bool) 1
0xdf: @ rand(Stack[-1])
0xe0: Pop(0)
0xe1: PushEmpty(bool)
0xe2: Stack[-1] = (bool) 1
0xe3: Push((float)0.6)
0xe4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(bool)
0xe7: Call 0x22a

0xe8: Pop(0)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Stack[-1] = (bool) 0
0xeb: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xec: @ Face(Stack[-0])
0xed: Pop(0)
0xee: Push("all")
0xef: Push("attack_stay")
0xf0: @ PlayAnimation(Stack[-2], Stack[-1])
0xf1: Pop(2)
0xf2: PushEmpty(bool, float)
0xf3: Stack[-1] = Stack[-23]
0xf4: Call 0x1ce

0xf5: Pop(2)
0xf6: @ StopAsync()
0xf7: Pop(0)
0xf8: GOTO 0x124

0xf9: @ Face(Stack[-0])
0xfa: Pop(0)
0xfb: Push("all")
0xfc: Push("fjump")
0xfd: @ PlayAnimation(Stack[-2], Stack[-1])
0xfe: Pop(2)
0xff: @ WaitForAnimEnd()
0x100: Pop(0)
0x101: Push(CVector(0.0, 0.0, 0.0))
0x102: @ SetSpeed(Stack[-1])
0x103: Pop(1)
0x104: @ Stop()
0x105: Pop(0)
0x106: @ StopAsync()
0x107: Pop(0)
0x108: PushEmpty(bool)
0x109: Call 0x22a

0x10a: Pop(0)
0x10b: Pop(1); Push((bool) Stack[-1] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call 0x3fd

0x110: Pop(1)
0x111: Pop(1); Push((bool) Stack[-1] == 0)
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: GOTO 0x12e

0x114: @@ GetPFPosition(Stack[-7])
0x115: Pop(0)
0x116: @ GetPFPosition(Stack[-6])
0x117: Pop(0)
0x118: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x119: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x11a: Pop(0); Push(Stack[-21] * Stack[-21]);
0x11b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11d: PushEmpty(bool, float)
0x11e: Stack[-1] = Stack[-23]
0x11f: Call 0x166

0x120: Pop(1)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: GOTO 0x12e

0x124: GOTO 0x12d

0x125: PushEmpty(bool, float)
0x126: Stack[-1] = Stack[-23]
0x127: Call 0x166

0x128: Pop(1)
0x129: Pop(1); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: GOTO 0x12e

0x12c: Stack[-4] = (bool) 1
0x12d: GOTO 0xa6

0x12e: @ WaitForAnimEnd()
0x12f: Pop(0)
0x130: Push( Stack[3 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: Return(); Pop(20)

0x133: Push("all")
0x134: Push("attack_off")
0x135: @ PlayAnimation(Stack[-2], Stack[-1])
0x136: Pop(2)
0x137: @ WaitForAnimEnd()
0x138: Pop(0)
0x139: Push(Stack[-5])
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: Push((float)2.0)
0x13c: @ Sleep(Stack[-1])
0x13d: Pop(1)
0x13e: Return(); Pop(20)

0x13f: PushEmpty(object, float, float, object, float, float)
0x140: Push((float)0.9)
0x141: Pop(1); Push(Stack[-9] * Stack[-1]);
0x142: @ GetVictim(Stack[-1], Stack[-4])
0x143: Pop(1)
0x144: @ ReportAttack(Stack[-0])
0x145: Pop(0)
0x146: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x147: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x148: PushEmpty(float, object, int)
0x149: Stack[-2] = Stack[-6]
0x14a: Stack[-1] = Stack[-10]
0x14b: Call 0x64

0x14c: Stack[-5] = Stack[-3]
0x14d: Pop(3)
0x14e: PushEmpty(float, object, float, int)
0x14f: Stack[-3] = Stack[-7]
0x150: Stack[-2] = Stack[-6]
0x151: PushEmpty(int, object, int)
0x152: Stack[-2] = Stack[-10]
0x153: Stack[-1] = Stack[-14]
0x154: Call 0x67

0x155: Stack[-4] = Stack[-3]
0x156: Pop(3)
0x157: Call 0x394

0x158: Stack[-5] = Stack[-4]
0x159: Pop(4)
0x15a: PushEmpty(int)
0x15b: Call 0x255

0x15c: Pop(0)
0x15d: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x15e: Pop(1)
0x15f: PushEmpty(object, float)
0x160: Stack[-2] = Stack[-5]
0x161: Stack[-1] = Stack[-3]
0x162: Call 0x257

0x163: Pop(2)
0x164: Return(); Pop(6)

0x165: Stack[-3] = 0
0x166: PushEmpty(int, bool, int, bool)
0x167: @ irand(Stack[-2], Stack[-1])
0x168: Pop(0)
0x169: Push((int) 1)
0x16a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x16b: @ Face(Stack[-0])
0x16c: Pop(0)
0x16d: Push((bool) 1)
0x16e: @ SetAttackState(Stack[-1])
0x16f: Pop(1)
0x170: Push("all")
0x171: Push("attack_begin")
0x172: Pop(1); Push(Stack[-1] + Stack[-4]);
0x173: @ PlayAnimation(Stack[-2], Stack[-1])
0x174: Pop(2)
0x175: @ WaitForAnimEnd()
0x176: Pop(0)
0x177: PushEmpty()
0x178: Call 0x235

0x179: Pop(0)
0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17c: Call 0x3fd

0x17d: Pop(1)
0x17e: Pop(1); Push((bool) Stack[-1] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x180: @ StopAsync()
0x181: Pop(0)
0x182: Stack[-6] = (bool) 0
0x183: Return(); Pop(4)

0x184: PushEmpty(float, int)
0x185: Stack[-2] = Stack[-7]
0x186: Stack[-1] = Stack[-4]
0x187: Call 0x13f

0x188: Pop(2)
0x189: Push("all")
0x18a: Push("attack_middle")
0x18b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x18c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: Push(Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x190: Push("all")
0x191: Push("attack_middle")
0x192: Pop(1); Push(Stack[-1] + Stack[-4]);
0x193: @ PlayAnimation(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: @ WaitForAnimEnd()
0x196: Pop(0)
0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x199: Call 0x3fd

0x19a: Pop(1)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19d: @ StopAsync()
0x19e: Pop(0)
0x19f: Stack[-6] = (bool) 0
0x1a0: Return(); Pop(4)

0x1a1: PushEmpty(float, int)
0x1a2: Stack[-2] = Stack[-7]
0x1a3: Stack[-1] = Stack[-4]
0x1a4: Call 0x13f

0x1a5: Pop(2)
0x1a6: Push((bool) 0)
0x1a7: @ SetAttackState(Stack[-1])
0x1a8: Pop(1)
0x1a9: Push("all")
0x1aa: Push("attack_end")
0x1ab: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: PushEmpty(bool, float)
0x1af: Stack[-1] = (float) 0.75
0x1b0: Call 0x1b6

0x1b1: Pop(2)
0x1b2: @ StopAsync()
0x1b3: Pop(0)
0x1b4: Stack[-6] = (bool) 1
0x1b5: Return(); Pop(4)

0x1b6: PushEmpty(float, bool, float, bool)
0x1b7: @ rand(Stack[-2])
0x1b8: Pop(0)
0x1b9: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1bb: @ IsAnimationPlaying(Stack[-1])
0x1bc: Pop(0)
0x1bd: Pop(0); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: GOTO 0x1c9

0x1c0: PushEmpty(bool)
0x1c1: Call 0x1f6

0x1c2: Pop(0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c4: Stack[-6] = (bool) 1
0x1c5: Return(); Pop(4)

0x1c6: @ sync()
0x1c7: Pop(0)
0x1c8: GOTO 0x1bb

0x1c9: GOTO 0x1cc

0x1ca: @ WaitForAnimEnd()
0x1cb: Pop(0)
0x1cc: Stack[-6] = (bool) 0
0x1cd: Return(); Pop(4)

0x1ce: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x1cf: @ IsAnimationPlaying(Stack[-5])
0x1d0: Pop(0)
0x1d1: Pop(0); Push((bool) Stack[-5] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1f4

0x1d4: PushEmpty(bool)
0x1d5: Call 0x1f6

0x1d6: Pop(0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d8: Stack[-12] = (bool) 1
0x1d9: Return(); Pop(10)

0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call 0x3fd

0x1dd: Pop(1)
0x1de: Pop(1); Push((bool) Stack[-1] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-12] = (bool) 0
0x1e1: Return(); Pop(10)

0x1e2: @@ GetPFPosition(Stack[-4])
0x1e3: Pop(0)
0x1e4: @ GetPFPosition(Stack[-3])
0x1e5: Pop(0)
0x1e6: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1e7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1e8: Pop(0); Push(Stack[-11] * Stack[-11]);
0x1e9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1eb: PushEmpty(bool, float)
0x1ec: Stack[-1] = Stack[-13]
0x1ed: Call 0x166

0x1ee: Pop(2)
0x1ef: Stack[-12] = (bool) 1
0x1f0: Return(); Pop(10)

0x1f1: @ sync()
0x1f2: Pop(0)
0x1f3: GOTO 0x1cf

0x1f4: Stack[-12] = (bool) 0
0x1f5: Return(); Pop(10)

0x1f6: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f9: Call 0x3fd

0x1fa: Pop(1)
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-11] = (bool) 0
0x1fe: Return(); Pop(10)

0x1ff: PushEmpty(bool)
0x200: Call 0x22a

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x203: @@ GetPFPosition(Stack[-5])
0x204: Pop(0)
0x205: @ GetPFPosition(Stack[-4])
0x206: Pop(0)
0x207: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x208: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x209: @@ GetAttackDistance(Stack[-1])
0x20a: Pop(0)
0x20b: Push((int) 50)
0x20c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x20d: Pop(0); Push(Stack[-1] * Stack[-1]);
0x20e: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: PushEmpty()
0x211: Call 0x217

0x212: Pop(0)
0x213: Stack[-11] = (bool) 1
0x214: Return(); Pop(10)

0x215: Stack[-11] = (bool) 0
0x216: Return(); Pop(10)

0x217: PushEmpty(cvector, cvector, cvector, cvector)
0x218: @ Face(Stack[-0])
0x219: Pop(0)
0x21a: Push("all")
0x21b: Push("bjump")
0x21c: @ PlayAnimation(Stack[-2], Stack[-1])
0x21d: Pop(2)
0x21e: @@ GetPFPosition(Stack[-2])
0x21f: Pop(0)
0x220: @ GetPFPosition(Stack[-1])
0x221: Pop(0)
0x222: @ WaitForAnimEnd()
0x223: Pop(0)
0x224: @ StopAsync()
0x225: Pop(0)
0x226: Push(CVector(0.0, 0.0, 0.0))
0x227: @ SetSpeed(Stack[-1])
0x228: Pop(1)
0x229: Return(); Pop(4)

0x22a: PushEmpty(bool, bool)
0x22b: Push("IsAttacking")
0x22c: Push((int) 1)
0x22d: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x22e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22f: @@ IsAttacking(Stack[-1])
0x230: Pop(0)
0x231: Stack[-3] = Stack[-1]
0x232: Return(); Pop(2)

0x233: Stack[-3] = (bool) 0
0x234: Return(); Pop(2)

0x235: PushEmpty(float, int, float, int)
0x236: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Return(); Pop(4)

0x239: Push( Stack[4 + Tasks[-1].StackPointer] )
0x23a: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23b: Push((int) -1)
0x23c: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x23d: Push((int) 0)
0x23e: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: Return(); Pop(4)

0x241: @ rand(Stack[-2])
0x242: Pop(0)
0x243: PushEmpty(float)
0x244: Call 0x25b

0x245: Pop(0)
0x246: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x248: @ irand(Stack[-1], Stack[-2])
0x249: Pop(0)
0x24a: Push((int) 1)
0x24b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x24c: Push("attack")
0x24d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x24e: @ Speak(Stack[-1])
0x24f: Pop(1)
0x250: PushEmpty(int)
0x251: Call 0x259

0x252: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x253: Pop(1)
0x254: Return(); Pop(4)

0x255: Stack[-1] = (int) 0
0x256: Return(); Pop(0)

0x257: PushEmpty()
0x258: Return(); Pop(0)

0x259: Stack[-1] = (int) 1
0x25a: Return(); Pop(0)

0x25b: Stack[-1] = (float) 0.5
0x25c: Return(); Pop(0)

0x25d: PushEmpty(object)
0x25e: Call 0x463

0x25f: Pop(0)
0x260: @ RemoveActor(Stack[-1])
0x261: Pop(1)
0x262: @ Hold()
0x263: Pop(0)
0x264: Return(); Pop(0)

0x265: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x266: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x267: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x268: Stack[-7] = Stack[-17]
0x269: PushEmpty(bool, object)
0x26a: Stack[-1] = Stack[-23]
0x26b: Call 0x2f1

0x26c: Pop(1)
0x26d: Pop(1); Push((bool) Stack[-1] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26f: Stack[-22] = (bool) 0
0x270: Return(); Pop(16)

0x271: @@ GetPosition(Stack[-5])
0x272: Pop(0)
0x273: @ GetPosition(Stack[-4])
0x274: Pop(0)
0x275: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x276: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x277: PushEmpty(bool)
0x278: Stack[-1] = (bool) 0
0x279: Push((int) 0)
0x27a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x27d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: Stack[-1] = (bool) 1
0x280: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x281: @ Stop()
0x282: Pop(0)
0x283: Stack[-22] = (bool) 0
0x284: Return(); Pop(16)

0x285: Pop(0); Push(Stack[-20] * Stack[-20]);
0x286: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x288: @@ GetPFPosition(Stack[-5])
0x289: Pop(0)
0x28a: @ FindPathTo(Stack[-1], Stack[-5])
0x28b: Pop(0)
0x28c: Pop(0); Push(( Stack[-1] != 0 )
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-6] = Stack[-1]
0x28f: Stack[-1] = 0
0x290: Pop(0); Push(( Stack[-6] != 0 )
0x291: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x292: Push(Stack[-7])
0x293: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x294: Stack[-7] = (bool) 0
0x295: @ RotatePath(Stack[-6], Stack[-8])
0x296: Pop(0)
0x297: Pop(0); Push((bool) Stack[-8] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: GOTO 0x2c9

0x29a: Push((int) 0)
0x29b: Push((float)0.3)
0x29c: @ SetTimer(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: PushEmpty(string)
0x29f: Call 0x2f8

0x2a0: Pop(0)
0x2a1: PushEmpty(string)
0x2a2: Call 0x2fa

0x2a3: Pop(0)
0x2a4: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: Pop(0); Push((bool) Stack[-8] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2aa: Stack[-6] = 0
0x2ab: GOTO 0x2c9

0x2ac: GOTO 0x2ae

0x2ad: GOTO 0x2c8

0x2ae: GOTO 0x2b0

0x2af: Stack[-6] = 0
0x2b0: GOTO 0x2c1

0x2b1: Push((int) 0)
0x2b2: @ KillTimer(Stack[-1])
0x2b3: Pop(1)
0x2b4: Push((float)0.5)
0x2b5: @ Sleep(Stack[-1], Stack[-9])
0x2b6: Pop(1)
0x2b7: Pop(0); Push((bool) Stack[-8] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-6] = 0
0x2bc: GOTO 0x2c9

0x2bd: Push((int) 0)
0x2be: Push((float)0.3)
0x2bf: @ SetTimer(Stack[-2], Stack[-1])
0x2c0: Pop(2)
0x2c1: Stack[-1] = 0
0x2c2: GOTO 0x2c7

0x2c3: Push((int) 0)
0x2c4: @ KillTimer(Stack[-1])
0x2c5: Pop(1)
0x2c6: GOTO 0x2c9

0x2c7: Stack[-6] = 0
0x2c8: GOTO 0x269

0x2c9: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2ca: Return(); Pop(16)

0x2cb: PushEmpty()
0x2cc: Push((int) 0)
0x2cd: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Return(); Pop(0)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d2: Call 0x2f1

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2d7: Push((int) 0)
0x2d8: @ KillTimer(Stack[-1])
0x2d9: Pop(1)
0x2da: @ Stop()
0x2db: Pop(0)
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty()
0x2de: @ RequestClearPath(Stack[-1])
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2e2: Push((int) 0)
0x2e3: @ KillTimer(Stack[-1])
0x2e4: Pop(1)
0x2e5: @ Stop()
0x2e6: Pop(0)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty()
0x2ea: Call 0x2e1

0x2eb: Pop(0)
0x2ec: PushEmpty(object)
0x2ed: Stack[-1] = Stack[-2]
0x2ee: Call 0x4a9

0x2ef: Pop(1)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-1] = Stack[-3]
0x2f4: Call 0x3fd

0x2f5: Stack[-4] = Stack[-2]
0x2f6: Pop(2)
0x2f7: Return(); Pop(0)

0x2f8: Stack[-1] = "walk"
0x2f9: Return(); Pop(0)

0x2fa: Stack[-1] = "run"
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(object)
0x2fd: Call 0x463

0x2fe: Pop(0)
0x2ff: @ RemoveActor(Stack[-1])
0x300: Pop(1)
0x301: @ Hold()
0x302: Pop(0)
0x303: Return(); Pop(0)

0x304: PushEmpty()
0x305: PushEmpty(object)
0x306: Stack[-1] = Stack[-2]
0x307: Call 0x30d

0x308: Pop(1)
0x309: @ Hold()
0x30a: Pop(0)
0x30b: GOTO 0x309

0x30c: Return(); Pop(0)

0x30d: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x30e: Pop(0); Push((bool) Stack[-21] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "fdie"
0x312: Call 0x364

0x313: Pop(1)
0x314: GOTO 0x363

0x315: @@ GetPosition(Stack[-10])
0x316: Pop(0)
0x317: @ GetPosition(Stack[-9])
0x318: Pop(0)
0x319: @ GetDirection(Stack[-8])
0x31a: Pop(0)
0x31b: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x31c: Push(CvectorIndex(Stack[-7], 0))
0x31d: Push(CvectorIndex(Stack[-9], 0))
0x31e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x31f: Push(CvectorIndex(Stack[-8], 2))
0x320: Push(CvectorIndex(Stack[-10], 2))
0x321: Pop(2); Push(Stack[-2] * Stack[-1]);
0x322: Pop(2); Push(Stack[-2] + Stack[-1]);
0x323: Push((int) 0)
0x324: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Stack[-6] = "fdie"
0x327: GOTO 0x329

0x328: Stack[-6] = "bdie"
0x329: @ RemoveRTEnvelope()
0x32a: Pop(0)
0x32b: @ SetDeathState()
0x32c: Pop(0)
0x32d: @ Stop()
0x32e: Pop(0)
0x32f: @ StopAsync()
0x330: Pop(0)
0x331: Stack[-5] = Stack[-21]
0x332: Push("GetScriptProperty")
0x333: Push((int) 2)
0x334: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x335: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x336: Push("Owner")
0x337: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x338: Pop(1)
0x339: Push(Stack[-4])
0x33a: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33b: Push("Owner")
0x33c: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x33d: Pop(1)
0x33e: Pop(0); Push((bool) Stack[-5] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Stack[-5] = Stack[-21]
0x341: Push("@GetEyesHeight")
0x342: Push((int) 1)
0x343: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x344: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x345: @@ GetEyesHeight(Stack[-2])
0x346: Pop(0)
0x347: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x348: Push(CvectorIndex(Stack[-1], 1))
0x349: Stack[-1] = Stack[-3]
0x34a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x34b: Push("head")
0x34c: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x34d: Pop(1)
0x34e: Stack[-3] = (bool) 1
0x34f: GOTO 0x351

0x350: Stack[-3] = (bool) 0
0x351: Push("all")
0x352: @ PlayAnimation(Stack[-1], Stack[-7])
0x353: Pop(1)
0x354: @ WaitForAnimEnd()
0x355: Pop(0)
0x356: Push(Stack[-3])
0x357: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x358: @ StopAsync()
0x359: Pop(0)
0x35a: Push("head")
0x35b: @ UnlookAsync(Stack[-1])
0x35c: Pop(1)
0x35d: Push("all")
0x35e: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x35f: Pop(1)
0x360: @ RemoveEnvelope()
0x361: Pop(0)
0x362: Stack[-5] = 0
0x363: Return(); Pop(20)

0x364: PushEmpty()
0x365: @ RemoveRTEnvelope()
0x366: Pop(0)
0x367: @ SetDeathState()
0x368: Pop(0)
0x369: @ Stop()
0x36a: Pop(0)
0x36b: @ StopAsync()
0x36c: Pop(0)
0x36d: @ StopSecondaryAnimation()
0x36e: Pop(0)
0x36f: Push("all")
0x370: @ PlayAnimation(Stack[-1], Stack[-2])
0x371: Pop(1)
0x372: @ WaitForAnimEnd()
0x373: Pop(0)
0x374: Push("all")
0x375: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x376: Pop(1)
0x377: @ RemoveEnvelope()
0x378: Pop(0)
0x379: Return(); Pop(0)

0x37a: PushEmpty()
0x37b: Return(); Pop(0)

0x37c: PushEmpty()
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: Return(); Pop(0)

0x380: PushEmpty()
0x381: Push((int) 1)
0x382: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-2] = "fire"
0x385: Return(); Pop(0)

0x386: Stack[-2] = "phys"
0x387: Return(); Pop(0)

0x388: PushEmpty(bool, bool)
0x389: Push("HasProperty")
0x38a: Push((int) 2)
0x38b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x38c: Pop(1); Push((bool) Stack[-1] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-5] = (bool) 0
0x38f: Return(); Pop(2)

0x390: @@ HasProperty(Stack[-3], Stack[-1])
0x391: Pop(0)
0x392: Stack[-5] = Stack[-1]
0x393: Return(); Pop(2)

0x394: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x395: PushEmpty(bool, object, string)
0x396: Stack[-2] = Stack[-18]
0x397: Stack[-1] = "health"
0x398: Call 0x388

0x399: Pop(2)
0x39a: Pop(1); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-16] = (float) 0.0
0x39d: Return(); Pop(12)

0x39e: PushEmpty(bool, object, string)
0x39f: Stack[-2] = Stack[-18]
0x3a0: Stack[-1] = "armor"
0x3a1: Call 0x388

0x3a2: Pop(2)
0x3a3: Pop(1); Push((bool) Stack[-1] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-6] = (int) 0
0x3a6: GOTO 0x3aa

0x3a7: Push("armor")
0x3a8: @@ GetProperty(Stack[-1], Stack[-7])
0x3a9: Pop(1)
0x3aa: Push("armor_")
0x3ab: PushEmpty(string, int)
0x3ac: Stack[-1] = Stack[-16]
0x3ad: Call 0x380

0x3ae: Pop(1)
0x3af: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3b0: PushEmpty(bool, object, string)
0x3b1: Stack[-2] = Stack[-18]
0x3b2: Stack[-1] = Stack[-8]
0x3b3: Call 0x388

0x3b4: Pop(2)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-4] = (int) 0
0x3b8: GOTO 0x3bb

0x3b9: @@ GetProperty(Stack[-5], Stack[-4])
0x3ba: Pop(0)
0x3bb: PushEmpty(float, float, float)
0x3bc: Pop(0); Push(Stack[-9] + Stack[-7]);
0x3bd: Push((float)100.0)
0x3be: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x3bf: Stack[-1] = (int) 1
0x3c0: Call 0x469

0x3c1: Stack[-6] = Stack[-3]
0x3c2: Pop(3)
0x3c3: Push("health")
0x3c4: @@ GetProperty(Stack[-1], Stack[-3])
0x3c5: Pop(1)
0x3c6: Push((int) 1)
0x3c7: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3c8: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3c9: Push("health")
0x3ca: PushEmpty(float, float, float, float)
0x3cb: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3cc: Stack[-2] = (int) 0
0x3cd: Stack[-1] = (int) 1
0x3ce: Call 0x470

0x3cf: Pop(3)
0x3d0: @@ SetProperty(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: Stack[-16] = Stack[-1]
0x3d3: Return(); Pop(12)

0x3d4: PushEmpty(bool, bool)
0x3d5: @@ IsDead(Stack[-1])
0x3d6: Pop(0)
0x3d7: Stack[-4] = Stack[-1]
0x3d8: Return(); Pop(2)

0x3d9: PushEmpty(object, object, object, object)
0x3da: Pop(0); Push((bool) Stack[-5] == 0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: Stack[-6] = (bool) 0
0x3dd: Return(); Pop(4)

0x3de: PushEmpty(bool)
0x3df: Stack[-1] = (bool) 0
0x3e0: Push("IsDead")
0x3e1: Push((int) 1)
0x3e2: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3e3: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e4: PushEmpty(bool, object)
0x3e5: Stack[-1] = Stack[-8]
0x3e6: Call 0x3d4

0x3e7: Pop(1)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e9: Stack[-1] = (bool) 1
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-6] = (bool) 0
0x3ec: Return(); Pop(4)

0x3ed: @ GetScene(Stack[-2])
0x3ee: Pop(0)
0x3ef: Pop(0); Push((bool) Stack[-2] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-6] = (bool) 0
0x3f2: Return(); Pop(4)

0x3f3: @@ GetScene(Stack[-1])
0x3f4: Pop(0)
0x3f5: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: Stack[-6] = (bool) 0
0x3f8: Return(); Pop(4)

0x3f9: Stack[-6] = (bool) 1
0x3fa: Return(); Pop(4)

0x3fb: Stack[-1] = 0
0x3fc: Stack[-2] = 0
0x3fd: PushEmpty(int, int)
0x3fe: PushEmpty(bool, object)
0x3ff: Stack[-1] = Stack[-5]
0x400: Call 0x3d9

0x401: Pop(1)
0x402: Pop(1); Push((bool) Stack[-1] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x404: Stack[-4] = (bool) 0
0x405: Return(); Pop(2)

0x406: PushEmpty(bool, object, string)
0x407: Stack[-2] = Stack[-6]
0x408: Stack[-1] = "noaccess"
0x409: Call 0x388

0x40a: Pop(2)
0x40b: Pop(1); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-4] = (bool) 1
0x40e: Return(); Pop(2)

0x40f: Push("noaccess")
0x410: @@ GetProperty(Stack[-1], Stack[-2])
0x411: Pop(1)
0x412: Push((int) 0)
0x413: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x414: Return(); Pop(2)

0x415: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x416: PushEmpty(bool)
0x417: Stack[-1] = (bool) 0
0x418: Push((int) 4)
0x419: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41b: Push((int) 5)
0x41c: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: Stack[-1] = (bool) 1
0x41f: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x420: @ GetScene(Stack[-10])
0x421: Pop(0)
0x422: @ GetPosition(Stack[-8])
0x423: Pop(0)
0x424: @ GetEyesHeight(Stack[-7])
0x425: Pop(0)
0x426: Push(CvectorIndex(Stack[-8], 1))
0x427: Push((int) 2)
0x428: Pop(1); Push(Stack[-9] / Stack[-1]);
0x429: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x42a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x42b: Push("scripted")
0x42c: Push(CVector(0.0, 0.0, 1.0))
0x42d: Push("blood.xml")
0x42e: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Stack[-9] = 0
0x431: Stack[-10] = 0
0x432: Pop(0); Push((bool) Stack[-23] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(20)

0x435: @ GetSecondaryAnimationType(Stack[-6])
0x436: Pop(0)
0x437: Push((int) 0)
0x438: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Return(); Pop(20)

0x43b: @@ GetPosition(Stack[-5])
0x43c: Pop(0)
0x43d: @ GetPosition(Stack[-4])
0x43e: Pop(0)
0x43f: @ GetDirection(Stack[-3])
0x440: Pop(0)
0x441: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x442: Push(CvectorIndex(Stack[-2], 0))
0x443: Push(CvectorIndex(Stack[-4], 0))
0x444: Pop(2); Push(Stack[-2] * Stack[-1]);
0x445: Push(CvectorIndex(Stack[-3], 2))
0x446: Push(CvectorIndex(Stack[-5], 2))
0x447: Pop(2); Push(Stack[-2] * Stack[-1]);
0x448: Pop(2); Push(Stack[-2] + Stack[-1]);
0x449: Push((int) 0)
0x44a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-1] = "fhit"
0x44d: GOTO 0x44f

0x44e: Stack[-1] = "bhit"
0x44f: Push("hit_react")
0x450: Push("1")
0x451: Pop(1); Push(Stack[-3] + Stack[-1]);
0x452: Push("2")
0x453: Pop(1); Push(Stack[-4] + Stack[-1]);
0x454: Push((int) -10)
0x455: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x456: Pop(4)
0x457: Return(); Pop(20)

0x458: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x459: @@ GetPosition(Stack[-3])
0x45a: Pop(0)
0x45b: @ GetPosition(Stack[-2])
0x45c: Pop(0)
0x45d: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x45e: Push(CvectorIndex(Stack[-1], 0))
0x45f: Push(CvectorIndex(Stack[-2], 2))
0x460: @ RotateAsync(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: Return(); Pop(6)

0x463: PushEmpty(object, object)
0x464: @ self(Stack[-1])
0x465: Pop(0)
0x466: Stack[-3] = Stack[-1]
0x467: Return(); Pop(2)

0x468: Stack[-1] = 0
0x469: PushEmpty()
0x46a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: Stack[-3] = Stack[-2]
0x46d: GOTO 0x46f

0x46e: Stack[-3] = Stack[-1]
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-4] = Stack[-2]
0x474: Return(); Pop(0)

0x475: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-4] = Stack[-1]
0x478: Return(); Pop(0)

0x479: Stack[-4] = Stack[-3]
0x47a: Return(); Pop(0)

0x47b: PushEmpty(object, object)
0x47c: @ FindActor(Stack[-1], Stack[-4])
0x47d: Pop(0)
0x47e: Pop(0); Push((bool) Stack[-1] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: Stack[-5] = (bool) 0
0x481: Return(); Pop(2)

0x482: @ Trigger(Stack[-1], Stack[-3])
0x483: Pop(0)
0x484: Stack[-5] = (bool) 1
0x485: Return(); Pop(2)

0x486: Stack[-1] = 0
0x487: PushEmpty()
0x488: PushEmpty(bool, string, string)
0x489: Stack[-2] = "quest_d4_03"
0x48a: Stack[-1] = "death"
0x48b: Call 0x47b

0x48c: Pop(3)
0x48d: PushEmpty(object)
0x48e: Stack[-1] = Stack[-2]
0x48f: Push(-1, 0); TaskCall(3)
0x490: Call 0x304

0x491: Pop(-1, 0); TaskReturn
0x492: Pop(1)
0x493: Return(); Pop(0)

0x494: PushEmpty()
0x495: PushEmpty(object, int, float)
0x496: Stack[-3] = Stack[-7]
0x497: Stack[-2] = Stack[-6]
0x498: Stack[-1] = Stack[-5]
0x499: Call 0x415

0x49a: Pop(3)
0x49b: Return(); Pop(0)

0x49c: PushEmpty(float, float)
0x49d: Push("health")
0x49e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a0: Push("health")
0x4a1: @ GetProperty(Stack[-1], Stack[-2])
0x4a2: Pop(1)
0x4a3: Push((int) 0)
0x4a4: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: @ SignalDeath(Stack[-4])
0x4a7: Pop(0)
0x4a8: Return(); Pop(2)

0x4a9: PushEmpty()
0x4aa: PushEmpty(object)
0x4ab: Stack[-1] = Stack[-2]
0x4ac: Call 0x487

0x4ad: Pop(1)
0x4ae: Return(); Pop(0)

