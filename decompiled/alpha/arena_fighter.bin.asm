GlobalVarCount = 0

Strings:
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	all
	player
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
	walk
	run
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
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2

Import:
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	SensePlayerOnly (1 args)
	Sleep (1 args)
	FindActor (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	IsPlayerActor (2 args)
	GetPFPosition (1 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x7c
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_22 Op = 0x76 Vars = (object, int, float, float)
		EVENT_16 Op = 0x78 Vars = (object, string)
		EVENT_41 Op = 0x7a Vars = (object)
	GTASK_1 Vars = (object, int, int, bool, int) Params = 0
	GTASK_2 Vars = (bool, object) Params = 6
		EVENT_7 Op = 0x2f3 Vars = (int)
		EVENT_10 Op = 0x305 Vars = (object)
		EVENT_41 Op = 0x310 Vars = (object)

Events:
EVENT_22 Op = 0x402 Vars = (object, int, float, float)
EVENT_16 Op = 0x40a Vars = (object, string)
EVENT_41 Op = 0x417 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(object)
0x2: Stack[-1] = Stack[-2]
0x3: Call 0x9

0x4: Pop(1)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa: Pop(0); Push((bool) Stack[-21] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty(string)
0xd: Stack[-1] = "fdie"
0xe: Call 0x60

0xf: Pop(1)
0x10: GOTO 0x5f

0x11: @@ GetPosition(Stack[-10])
0x12: Pop(0)
0x13: @ GetPosition(Stack[-9])
0x14: Pop(0)
0x15: @ GetDirection(Stack[-8])
0x16: Pop(0)
0x17: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x18: Push(CvectorIndex(Stack[-7], 0))
0x19: Push(CvectorIndex(Stack[-9], 0))
0x1a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1b: Push(CvectorIndex(Stack[-8], 2))
0x1c: Push(CvectorIndex(Stack[-10], 2))
0x1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f: Push((int) 0)
0x20: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-6] = "fdie"
0x23: GOTO 0x25

0x24: Stack[-6] = "bdie"
0x25: @ RemoveRTEnvelope()
0x26: Pop(0)
0x27: @ SetDeathState()
0x28: Pop(0)
0x29: @ Stop()
0x2a: Pop(0)
0x2b: @ StopAsync()
0x2c: Pop(0)
0x2d: Stack[-5] = Stack[-21]
0x2e: Push("GetScriptProperty")
0x2f: Push((int) 2)
0x30: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x31: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x32: Push("Owner")
0x33: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x34: Pop(1)
0x35: Push(Stack[-4])
0x36: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x37: Push("Owner")
0x38: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x39: Pop(1)
0x3a: Pop(0); Push((bool) Stack[-5] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Stack[-5] = Stack[-21]
0x3d: Push("@GetEyesHeight")
0x3e: Push((int) 1)
0x3f: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x40: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x41: @@ GetEyesHeight(Stack[-2])
0x42: Pop(0)
0x43: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x44: Push(CvectorIndex(Stack[-1], 1))
0x45: Stack[-1] = Stack[-3]
0x46: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x47: Push("head")
0x48: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Stack[-3] = (bool) 1
0x4b: GOTO 0x4d

0x4c: Stack[-3] = (bool) 0
0x4d: Push("all")
0x4e: @ PlayAnimation(Stack[-1], Stack[-7])
0x4f: Pop(1)
0x50: @ WaitForAnimEnd()
0x51: Pop(0)
0x52: Push(Stack[-3])
0x53: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x54: @ StopAsync()
0x55: Pop(0)
0x56: Push("head")
0x57: @ UnlookAsync(Stack[-1])
0x58: Pop(1)
0x59: Push("all")
0x5a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5b: Pop(1)
0x5c: @ RemoveEnvelope()
0x5d: Pop(0)
0x5e: Stack[-5] = 0
0x5f: Return(); Pop(20)

0x60: PushEmpty()
0x61: @ RemoveRTEnvelope()
0x62: Pop(0)
0x63: @ SetDeathState()
0x64: Pop(0)
0x65: @ Stop()
0x66: Pop(0)
0x67: @ StopAsync()
0x68: Pop(0)
0x69: @ StopSecondaryAnimation()
0x6a: Pop(0)
0x6b: Push("all")
0x6c: @ PlayAnimation(Stack[-1], Stack[-2])
0x6d: Pop(1)
0x6e: @ WaitForAnimEnd()
0x6f: Pop(0)
0x70: Push("all")
0x71: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x72: Pop(1)
0x73: @ RemoveEnvelope()
0x74: Pop(0)
0x75: Return(); Pop(0)

0x76: PushEmpty()
0x77: Return(); Pop(0)

0x78: PushEmpty()
0x79: Return(); Pop(0)

0x7a: PushEmpty()
0x7b: Return(); Pop(0)

0x7c: PushEmpty(object, object)
0x7d: Push((bool) 1)
0x7e: @ SensePlayerOnly(Stack[-1])
0x7f: Pop(1)
0x80: Push((float)1.5)
0x81: @ Sleep(Stack[-1])
0x82: Pop(1)
0x83: Push("player")
0x84: @ FindActor(Stack[-2], Stack[-1])
0x85: Pop(1)
0x86: PushEmpty(object, bool, float)
0x87: Stack[-3] = Stack[-4]
0x88: Stack[-2] = (bool) 1
0x89: Stack[-1] = (float) 155.0
0x8a: Call 0x9b

0x8b: Pop(3)
0x8c: Return(); Pop(2)

0x8d: Stack[-1] = 0
0x8e: PushEmpty()
0x8f: Stack[-3] = (float) 0.1
0x90: Return(); Pop(0)

0x91: PushEmpty()
0x92: Stack[-3] = (int) 0
0x93: Return(); Pop(0)

0x94: PushEmpty()
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[-3]
0x97: Call 0x376

0x98: Stack[-4] = Stack[-2]
0x99: Pop(2)
0x9a: Return(); Pop(0)

0x9b: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x9c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x9d: Push("all")
0x9e: Push("attack_begin")
0x9f: Push((int) 1)
0xa0: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xa1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa2: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: Pop(0); Push((bool) Stack[-10] == 0)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: GOTO 0xaa

0xa7: Push((int) 1)
0xa8: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xa9: GOTO 0x9d

0xaa: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xab: Push("attack")
0xac: Push((int) 1)
0xad: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf: @ IsExisting3DSound(Stack[-10], Stack[-1])
0xb0: Pop(1)
0xb1: Pop(0); Push((bool) Stack[-9] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb7

0xb4: Push((int) 1)
0xb5: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb6: GOTO 0xab

0xb7: Stack[4 + Tasks[-1].StackPointer] = (int)0
0xb8: Push("@GetAttackDistance")
0xb9: Push((int) 1)
0xba: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: @@ GetAttackDistance(Stack[-8])
0xbd: Pop(0)
0xbe: Push((int) 50)
0xbf: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0xc0: GOTO 0xc2

0xc1: Stack[-8] = Stack[-21]
0xc2: Push((int) 150)
0xc3: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-8] = (int) 150
0xc6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc7: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0xc8: @ IsPlayerActor(Stack[-0], Stack[-5])
0xc9: Pop(0)
0xca: Push(Stack[-22])
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-4] = (bool) 0
0xcd: GOTO 0xcf

0xce: Stack[-4] = (bool) 1
0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 0
0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call 0x94

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Stack[-1] = (bool) 1
0xd9: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0xda: @@ GetPFPosition(Stack[-7])
0xdb: Pop(0)
0xdc: @ GetPFPosition(Stack[-6])
0xdd: Pop(0)
0xde: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xdf: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xe0: Push((float)300.0)
0xe1: Pop(1); Push(Stack[-1] + Stack[-9]);
0xe2: Push((float)300.0)
0xe3: Pop(1); Push(Stack[-1] + Stack[-10]);
0xe4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe7: PushEmpty(bool, object, float, float, bool, bool)
0xe8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Stack[-4] = Stack[-14]
0xea: Stack[-3] = (float) 3000.0
0xeb: Stack[-2] = (bool) 1
0xec: Stack[-1] = (bool) 0
0xed: Push(-6, 2); TaskCall(2)
0xee: Call 0x28d

0xef: Pop(-6, 2); TaskReturn
0xf0: Pop(5)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: GOTO 0x157

0xf4: Stack[-4] = (bool) 0
0xf5: GOTO 0x156

0xf6: Pop(0); Push(Stack[-21] * Stack[-21]);
0xf7: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0xf9: Pop(0); Push((bool) Stack[-4] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xfb: PushEmpty(object)
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call 0x3dd

0xfe: Pop(1)
0xff: Push("all")
0x100: Push("attack_on")
0x101: @ PlayAnimation(Stack[-2], Stack[-1])
0x102: Pop(2)
0x103: @ WaitForAnimEnd()
0x104: Pop(0)
0x105: @ StopAsync()
0x106: Pop(0)
0x107: Stack[-4] = (bool) 1
0x108: @ rand(Stack[-1])
0x109: Pop(0)
0x10a: PushEmpty(bool)
0x10b: Stack[-1] = (bool) 1
0x10c: Push((float)0.6)
0x10d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: PushEmpty(bool)
0x110: Call 0x253

0x111: Pop(0)
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: Stack[-1] = (bool) 0
0x114: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x115: @ Face(Stack[-0])
0x116: Pop(0)
0x117: Push("all")
0x118: Push("attack_stay")
0x119: @ PlayAnimation(Stack[-2], Stack[-1])
0x11a: Pop(2)
0x11b: PushEmpty(bool, float)
0x11c: Stack[-1] = Stack[-23]
0x11d: Call 0x1f7

0x11e: Pop(2)
0x11f: @ StopAsync()
0x120: Pop(0)
0x121: GOTO 0x14d

0x122: @ Face(Stack[-0])
0x123: Pop(0)
0x124: Push("all")
0x125: Push("fjump")
0x126: @ PlayAnimation(Stack[-2], Stack[-1])
0x127: Pop(2)
0x128: @ WaitForAnimEnd()
0x129: Pop(0)
0x12a: Push(CVector(0.0, 0.0, 0.0))
0x12b: @ SetSpeed(Stack[-1])
0x12c: Pop(1)
0x12d: @ Stop()
0x12e: Pop(0)
0x12f: @ StopAsync()
0x130: Pop(0)
0x131: PushEmpty(bool)
0x132: Call 0x253

0x133: Pop(0)
0x134: Pop(1); Push((bool) Stack[-1] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x138: Call 0x94

0x139: Pop(1)
0x13a: Pop(1); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: GOTO 0x157

0x13d: @@ GetPFPosition(Stack[-7])
0x13e: Pop(0)
0x13f: @ GetPFPosition(Stack[-6])
0x140: Pop(0)
0x141: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x142: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x143: Pop(0); Push(Stack[-21] * Stack[-21]);
0x144: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x146: PushEmpty(bool, float)
0x147: Stack[-1] = Stack[-23]
0x148: Call 0x18f

0x149: Pop(1)
0x14a: Pop(1); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: GOTO 0x157

0x14d: GOTO 0x156

0x14e: PushEmpty(bool, float)
0x14f: Stack[-1] = Stack[-23]
0x150: Call 0x18f

0x151: Pop(1)
0x152: Pop(1); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: GOTO 0x157

0x155: Stack[-4] = (bool) 1
0x156: GOTO 0xcf

0x157: @ WaitForAnimEnd()
0x158: Pop(0)
0x159: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Return(); Pop(20)

0x15c: Push("all")
0x15d: Push("attack_off")
0x15e: @ PlayAnimation(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: @ WaitForAnimEnd()
0x161: Pop(0)
0x162: Push(Stack[-5])
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: Push((float)2.0)
0x165: @ Sleep(Stack[-1])
0x166: Pop(1)
0x167: Return(); Pop(20)

0x168: PushEmpty(object, float, float, object, float, float)
0x169: Push((float)0.9)
0x16a: Pop(1); Push(Stack[-9] * Stack[-1]);
0x16b: @ GetVictim(Stack[-1], Stack[-4])
0x16c: Pop(1)
0x16d: @ ReportAttack(Stack[-0])
0x16e: Pop(0)
0x16f: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x170: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x171: PushEmpty(float, object, int)
0x172: Stack[-2] = Stack[-6]
0x173: Stack[-1] = Stack[-10]
0x174: Call 0x8e

0x175: Stack[-5] = Stack[-3]
0x176: Pop(3)
0x177: PushEmpty(float, object, float, int)
0x178: Stack[-3] = Stack[-7]
0x179: Stack[-2] = Stack[-6]
0x17a: PushEmpty(int, object, int)
0x17b: Stack[-2] = Stack[-10]
0x17c: Stack[-1] = Stack[-14]
0x17d: Call 0x91

0x17e: Stack[-4] = Stack[-3]
0x17f: Pop(3)
0x180: Call 0x331

0x181: Stack[-5] = Stack[-4]
0x182: Pop(4)
0x183: PushEmpty(int)
0x184: Call 0x27e

0x185: Pop(0)
0x186: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x187: Pop(1)
0x188: PushEmpty(object, float)
0x189: Stack[-2] = Stack[-5]
0x18a: Stack[-1] = Stack[-3]
0x18b: Call 0x280

0x18c: Pop(2)
0x18d: Return(); Pop(6)

0x18e: Stack[-3] = 0
0x18f: PushEmpty(int, bool, int, bool)
0x190: @ irand(Stack[-2], Stack[-1])
0x191: Pop(0)
0x192: Push((int) 1)
0x193: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x194: @ Face(Stack[-0])
0x195: Pop(0)
0x196: Push((bool) 1)
0x197: @ SetAttackState(Stack[-1])
0x198: Pop(1)
0x199: Push("all")
0x19a: Push("attack_begin")
0x19b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x19c: @ PlayAnimation(Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: @ WaitForAnimEnd()
0x19f: Pop(0)
0x1a0: PushEmpty()
0x1a1: Call 0x25e

0x1a2: Pop(0)
0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a5: Call 0x94

0x1a6: Pop(1)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a9: @ StopAsync()
0x1aa: Pop(0)
0x1ab: Stack[-6] = (bool) 0
0x1ac: Return(); Pop(4)

0x1ad: PushEmpty(float, int)
0x1ae: Stack[-2] = Stack[-7]
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call 0x168

0x1b1: Pop(2)
0x1b2: Push("all")
0x1b3: Push("attack_middle")
0x1b4: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1b5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: Push(Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1b9: Push("all")
0x1ba: Push("attack_middle")
0x1bb: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: @ WaitForAnimEnd()
0x1bf: Pop(0)
0x1c0: PushEmpty(bool, object)
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call 0x94

0x1c3: Pop(1)
0x1c4: Pop(1); Push((bool) Stack[-1] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c6: @ StopAsync()
0x1c7: Pop(0)
0x1c8: Stack[-6] = (bool) 0
0x1c9: Return(); Pop(4)

0x1ca: PushEmpty(float, int)
0x1cb: Stack[-2] = Stack[-7]
0x1cc: Stack[-1] = Stack[-4]
0x1cd: Call 0x168

0x1ce: Pop(2)
0x1cf: Push((bool) 0)
0x1d0: @ SetAttackState(Stack[-1])
0x1d1: Pop(1)
0x1d2: Push("all")
0x1d3: Push("attack_end")
0x1d4: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: PushEmpty(bool, float)
0x1d8: Stack[-1] = (float) 0.75
0x1d9: Call 0x1df

0x1da: Pop(2)
0x1db: @ StopAsync()
0x1dc: Pop(0)
0x1dd: Stack[-6] = (bool) 1
0x1de: Return(); Pop(4)

0x1df: PushEmpty(float, bool, float, bool)
0x1e0: @ rand(Stack[-2])
0x1e1: Pop(0)
0x1e2: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e4: @ IsAnimationPlaying(Stack[-1])
0x1e5: Pop(0)
0x1e6: Pop(0); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: GOTO 0x1f2

0x1e9: PushEmpty(bool)
0x1ea: Call 0x21f

0x1eb: Pop(0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-6] = (bool) 1
0x1ee: Return(); Pop(4)

0x1ef: @ sync()
0x1f0: Pop(0)
0x1f1: GOTO 0x1e4

0x1f2: GOTO 0x1f5

0x1f3: @ WaitForAnimEnd()
0x1f4: Pop(0)
0x1f5: Stack[-6] = (bool) 0
0x1f6: Return(); Pop(4)

0x1f7: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x1f8: @ IsAnimationPlaying(Stack[-5])
0x1f9: Pop(0)
0x1fa: Pop(0); Push((bool) Stack[-5] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: GOTO 0x21d

0x1fd: PushEmpty(bool)
0x1fe: Call 0x21f

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x201: Stack[-12] = (bool) 1
0x202: Return(); Pop(10)

0x203: PushEmpty(bool, object)
0x204: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x205: Call 0x94

0x206: Pop(1)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-12] = (bool) 0
0x20a: Return(); Pop(10)

0x20b: @@ GetPFPosition(Stack[-4])
0x20c: Pop(0)
0x20d: @ GetPFPosition(Stack[-3])
0x20e: Pop(0)
0x20f: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x210: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x211: Pop(0); Push(Stack[-11] * Stack[-11]);
0x212: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x214: PushEmpty(bool, float)
0x215: Stack[-1] = Stack[-13]
0x216: Call 0x18f

0x217: Pop(2)
0x218: Stack[-12] = (bool) 1
0x219: Return(); Pop(10)

0x21a: @ sync()
0x21b: Pop(0)
0x21c: GOTO 0x1f8

0x21d: Stack[-12] = (bool) 0
0x21e: Return(); Pop(10)

0x21f: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x222: Call 0x94

0x223: Pop(1)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-11] = (bool) 0
0x227: Return(); Pop(10)

0x228: PushEmpty(bool)
0x229: Call 0x253

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22c: @@ GetPFPosition(Stack[-5])
0x22d: Pop(0)
0x22e: @ GetPFPosition(Stack[-4])
0x22f: Pop(0)
0x230: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x231: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x232: @@ GetAttackDistance(Stack[-1])
0x233: Pop(0)
0x234: Push((int) 50)
0x235: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x236: Pop(0); Push(Stack[-1] * Stack[-1]);
0x237: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x239: PushEmpty()
0x23a: Call 0x240

0x23b: Pop(0)
0x23c: Stack[-11] = (bool) 1
0x23d: Return(); Pop(10)

0x23e: Stack[-11] = (bool) 0
0x23f: Return(); Pop(10)

0x240: PushEmpty(cvector, cvector, cvector, cvector)
0x241: @ Face(Stack[-0])
0x242: Pop(0)
0x243: Push("all")
0x244: Push("bjump")
0x245: @ PlayAnimation(Stack[-2], Stack[-1])
0x246: Pop(2)
0x247: @@ GetPFPosition(Stack[-2])
0x248: Pop(0)
0x249: @ GetPFPosition(Stack[-1])
0x24a: Pop(0)
0x24b: @ WaitForAnimEnd()
0x24c: Pop(0)
0x24d: @ StopAsync()
0x24e: Pop(0)
0x24f: Push(CVector(0.0, 0.0, 0.0))
0x250: @ SetSpeed(Stack[-1])
0x251: Pop(1)
0x252: Return(); Pop(4)

0x253: PushEmpty(bool, bool)
0x254: Push("IsAttacking")
0x255: Push((int) 1)
0x256: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x257: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x258: @@ IsAttacking(Stack[-1])
0x259: Pop(0)
0x25a: Stack[-3] = Stack[-1]
0x25b: Return(); Pop(2)

0x25c: Stack[-3] = (bool) 0
0x25d: Return(); Pop(2)

0x25e: PushEmpty(float, int, float, int)
0x25f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(4)

0x262: Push( Stack[4 + Tasks[-1].StackPointer] )
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: Push((int) -1)
0x265: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x266: Push((int) 0)
0x267: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Return(); Pop(4)

0x26a: @ rand(Stack[-2])
0x26b: Pop(0)
0x26c: PushEmpty(float)
0x26d: Call 0x284

0x26e: Pop(0)
0x26f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x271: @ irand(Stack[-1], Stack[-2])
0x272: Pop(0)
0x273: Push((int) 1)
0x274: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x275: Push("attack")
0x276: Pop(1); Push(Stack[-1] + Stack[-2]);
0x277: @ Speak(Stack[-1])
0x278: Pop(1)
0x279: PushEmpty(int)
0x27a: Call 0x282

0x27b: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x27c: Pop(1)
0x27d: Return(); Pop(4)

0x27e: Stack[-1] = (int) 0
0x27f: Return(); Pop(0)

0x280: PushEmpty()
0x281: Return(); Pop(0)

0x282: Stack[-1] = (int) 1
0x283: Return(); Pop(0)

0x284: Stack[-1] = (float) 0.5
0x285: Return(); Pop(0)

0x286: PushEmpty()
0x287: PushEmpty(bool, object)
0x288: Stack[-1] = Stack[-3]
0x289: Call 0x376

0x28a: Stack[-4] = Stack[-2]
0x28b: Pop(2)
0x28c: Return(); Pop(0)

0x28d: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x28e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28f: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x290: Stack[-7] = Stack[-17]
0x291: PushEmpty(bool, object)
0x292: Stack[-1] = Stack[-23]
0x293: Call 0x286

0x294: Pop(1)
0x295: Pop(1); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-22] = (bool) 0
0x298: Return(); Pop(16)

0x299: @@ GetPosition(Stack[-5])
0x29a: Pop(0)
0x29b: @ GetPosition(Stack[-4])
0x29c: Pop(0)
0x29d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x29e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x29f: PushEmpty(bool)
0x2a0: Stack[-1] = (bool) 0
0x2a1: Push((int) 0)
0x2a2: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a4: Pop(0); Push(Stack[-20] * Stack[-20]);
0x2a5: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (bool) 1
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a9: @ Stop()
0x2aa: Pop(0)
0x2ab: Stack[-22] = (bool) 0
0x2ac: Return(); Pop(16)

0x2ad: Pop(0); Push(Stack[-20] * Stack[-20]);
0x2ae: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2b0: @@ GetPFPosition(Stack[-5])
0x2b1: Pop(0)
0x2b2: @ FindPathTo(Stack[-1], Stack[-5])
0x2b3: Pop(0)
0x2b4: Pop(0); Push(( Stack[-1] != 0 )
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[-6] = Stack[-1]
0x2b7: Stack[-1] = 0
0x2b8: Pop(0); Push(( Stack[-6] != 0 )
0x2b9: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ba: Push(Stack[-7])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bc: Stack[-7] = (bool) 0
0x2bd: @ RotatePath(Stack[-6], Stack[-8])
0x2be: Pop(0)
0x2bf: Pop(0); Push((bool) Stack[-8] == 0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2f1

0x2c2: Push((int) 0)
0x2c3: Push((float)0.3)
0x2c4: @ SetTimer(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: PushEmpty(string)
0x2c7: Call 0x319

0x2c8: Pop(0)
0x2c9: PushEmpty(string)
0x2ca: Call 0x31b

0x2cb: Pop(0)
0x2cc: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: Pop(0); Push((bool) Stack[-8] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: Stack[-6] = 0
0x2d3: GOTO 0x2f1

0x2d4: GOTO 0x2d6

0x2d5: GOTO 0x2f0

0x2d6: GOTO 0x2d8

0x2d7: Stack[-6] = 0
0x2d8: GOTO 0x2e9

0x2d9: Push((int) 0)
0x2da: @ KillTimer(Stack[-1])
0x2db: Pop(1)
0x2dc: Push((float)0.5)
0x2dd: @ Sleep(Stack[-1], Stack[-9])
0x2de: Pop(1)
0x2df: Pop(0); Push((bool) Stack[-8] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-6] = 0
0x2e4: GOTO 0x2f1

0x2e5: Push((int) 0)
0x2e6: Push((float)0.3)
0x2e7: @ SetTimer(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: Stack[-1] = 0
0x2ea: GOTO 0x2ef

0x2eb: Push((int) 0)
0x2ec: @ KillTimer(Stack[-1])
0x2ed: Pop(1)
0x2ee: GOTO 0x2f1

0x2ef: Stack[-6] = 0
0x2f0: GOTO 0x291

0x2f1: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2f2: Return(); Pop(16)

0x2f3: PushEmpty()
0x2f4: Push((int) 0)
0x2f5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Call 0x286

0x2fb: Pop(1)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2ff: Push((int) 0)
0x300: @ KillTimer(Stack[-1])
0x301: Pop(1)
0x302: @ Stop()
0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: @ RequestClearPath(Stack[-1])
0x307: Pop(0)
0x308: Return(); Pop(0)

0x309: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x30a: Push((int) 0)
0x30b: @ KillTimer(Stack[-1])
0x30c: Pop(1)
0x30d: @ Stop()
0x30e: Pop(0)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: PushEmpty()
0x312: Call 0x309

0x313: Pop(0)
0x314: PushEmpty(object)
0x315: Stack[-1] = Stack[-2]
0x316: Call 0x417

0x317: Pop(1)
0x318: Return(); Pop(0)

0x319: Stack[-1] = "walk"
0x31a: Return(); Pop(0)

0x31b: Stack[-1] = "run"
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: Push((int) 1)
0x31f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-2] = "fire"
0x322: Return(); Pop(0)

0x323: Stack[-2] = "phys"
0x324: Return(); Pop(0)

0x325: PushEmpty(bool, bool)
0x326: Push("HasProperty")
0x327: Push((int) 2)
0x328: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x329: Pop(1); Push((bool) Stack[-1] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-5] = (bool) 0
0x32c: Return(); Pop(2)

0x32d: @@ HasProperty(Stack[-3], Stack[-1])
0x32e: Pop(0)
0x32f: Stack[-5] = Stack[-1]
0x330: Return(); Pop(2)

0x331: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x332: PushEmpty(bool, object, string)
0x333: Stack[-2] = Stack[-18]
0x334: Stack[-1] = "health"
0x335: Call 0x325

0x336: Pop(2)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x339: Stack[-16] = (float) 0.0
0x33a: Return(); Pop(12)

0x33b: PushEmpty(bool, object, string)
0x33c: Stack[-2] = Stack[-18]
0x33d: Stack[-1] = "armor"
0x33e: Call 0x325

0x33f: Pop(2)
0x340: Pop(1); Push((bool) Stack[-1] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-6] = (int) 0
0x343: GOTO 0x347

0x344: Push("armor")
0x345: @@ GetProperty(Stack[-1], Stack[-7])
0x346: Pop(1)
0x347: Push("armor_")
0x348: PushEmpty(string, int)
0x349: Stack[-1] = Stack[-16]
0x34a: Call 0x31d

0x34b: Pop(1)
0x34c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x34d: PushEmpty(bool, object, string)
0x34e: Stack[-2] = Stack[-18]
0x34f: Stack[-1] = Stack[-8]
0x350: Call 0x325

0x351: Pop(2)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-4] = (int) 0
0x355: GOTO 0x358

0x356: @@ GetProperty(Stack[-5], Stack[-4])
0x357: Pop(0)
0x358: PushEmpty(float, float, float)
0x359: Pop(0); Push(Stack[-9] + Stack[-7]);
0x35a: Push((float)100.0)
0x35b: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x35c: Stack[-1] = (int) 1
0x35d: Call 0x3e8

0x35e: Stack[-6] = Stack[-3]
0x35f: Pop(3)
0x360: Push("health")
0x361: @@ GetProperty(Stack[-1], Stack[-3])
0x362: Pop(1)
0x363: Push((int) 1)
0x364: Pop(1); Push(Stack[-1] - Stack[-4]);
0x365: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x366: Push("health")
0x367: PushEmpty(float, float, float, float)
0x368: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x369: Stack[-2] = (int) 0
0x36a: Stack[-1] = (int) 1
0x36b: Call 0x3ef

0x36c: Pop(3)
0x36d: @@ SetProperty(Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: Stack[-16] = Stack[-1]
0x370: Return(); Pop(12)

0x371: PushEmpty(bool, bool)
0x372: @@ IsDead(Stack[-1])
0x373: Pop(0)
0x374: Stack[-4] = Stack[-1]
0x375: Return(); Pop(2)

0x376: PushEmpty(object, object, object, object)
0x377: Pop(0); Push((bool) Stack[-5] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x379: Stack[-6] = (bool) 0
0x37a: Return(); Pop(4)

0x37b: PushEmpty(bool)
0x37c: Stack[-1] = (bool) 0
0x37d: Push("IsDead")
0x37e: Push((int) 1)
0x37f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x380: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x381: PushEmpty(bool, object)
0x382: Stack[-1] = Stack[-8]
0x383: Call 0x371

0x384: Pop(1)
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: Stack[-1] = (bool) 1
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-6] = (bool) 0
0x389: Return(); Pop(4)

0x38a: @ GetScene(Stack[-2])
0x38b: Pop(0)
0x38c: Pop(0); Push((bool) Stack[-2] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-6] = (bool) 0
0x38f: Return(); Pop(4)

0x390: @@ GetScene(Stack[-1])
0x391: Pop(0)
0x392: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-6] = (bool) 0
0x395: Return(); Pop(4)

0x396: Stack[-6] = (bool) 1
0x397: Return(); Pop(4)

0x398: Stack[-1] = 0
0x399: Stack[-2] = 0
0x39a: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x39b: PushEmpty(bool)
0x39c: Stack[-1] = (bool) 0
0x39d: Push((int) 4)
0x39e: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a0: Push((int) 5)
0x3a1: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: Stack[-1] = (bool) 1
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3a5: @ GetScene(Stack[-10])
0x3a6: Pop(0)
0x3a7: @ GetPosition(Stack[-8])
0x3a8: Pop(0)
0x3a9: @ GetEyesHeight(Stack[-7])
0x3aa: Pop(0)
0x3ab: Push(CvectorIndex(Stack[-8], 1))
0x3ac: Push((int) 2)
0x3ad: Pop(1); Push(Stack[-9] / Stack[-1]);
0x3ae: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3af: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3b0: Push("scripted")
0x3b1: Push(CVector(0.0, 0.0, 1.0))
0x3b2: Push("blood.xml")
0x3b3: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: Stack[-9] = 0
0x3b6: Stack[-10] = 0
0x3b7: Pop(0); Push((bool) Stack[-23] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b9: Return(); Pop(20)

0x3ba: @ GetSecondaryAnimationType(Stack[-6])
0x3bb: Pop(0)
0x3bc: Push((int) 0)
0x3bd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Return(); Pop(20)

0x3c0: @@ GetPosition(Stack[-5])
0x3c1: Pop(0)
0x3c2: @ GetPosition(Stack[-4])
0x3c3: Pop(0)
0x3c4: @ GetDirection(Stack[-3])
0x3c5: Pop(0)
0x3c6: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x3c7: Push(CvectorIndex(Stack[-2], 0))
0x3c8: Push(CvectorIndex(Stack[-4], 0))
0x3c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ca: Push(CvectorIndex(Stack[-3], 2))
0x3cb: Push(CvectorIndex(Stack[-5], 2))
0x3cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ce: Push((int) 0)
0x3cf: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-1] = "fhit"
0x3d2: GOTO 0x3d4

0x3d3: Stack[-1] = "bhit"
0x3d4: Push("hit_react")
0x3d5: Push("1")
0x3d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d7: Push("2")
0x3d8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3d9: Push((int) -10)
0x3da: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(4)
0x3dc: Return(); Pop(20)

0x3dd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3de: @@ GetPosition(Stack[-3])
0x3df: Pop(0)
0x3e0: @ GetPosition(Stack[-2])
0x3e1: Pop(0)
0x3e2: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x3e3: Push(CvectorIndex(Stack[-1], 0))
0x3e4: Push(CvectorIndex(Stack[-2], 2))
0x3e5: @ RotateAsync(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: Return(); Pop(6)

0x3e8: PushEmpty()
0x3e9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-3] = Stack[-2]
0x3ec: GOTO 0x3ee

0x3ed: Stack[-3] = Stack[-1]
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f2: Stack[-4] = Stack[-2]
0x3f3: Return(); Pop(0)

0x3f4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-4] = Stack[-1]
0x3f7: Return(); Pop(0)

0x3f8: Stack[-4] = Stack[-3]
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty()
0x3fb: PushEmpty(object)
0x3fc: Stack[-1] = Stack[-2]
0x3fd: Push(-1, 0); TaskCall(0)
0x3fe: Call 0x0

0x3ff: Pop(-1, 0); TaskReturn
0x400: Pop(1)
0x401: Return(); Pop(0)

0x402: PushEmpty()
0x403: PushEmpty(object, int, float)
0x404: Stack[-3] = Stack[-7]
0x405: Stack[-2] = Stack[-6]
0x406: Stack[-1] = Stack[-5]
0x407: Call 0x39a

0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: PushEmpty(float, float)
0x40b: Push("health")
0x40c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x40e: Push("health")
0x40f: @ GetProperty(Stack[-1], Stack[-2])
0x410: Pop(1)
0x411: Push((int) 0)
0x412: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: @ SignalDeath(Stack[-4])
0x415: Pop(0)
0x416: Return(); Pop(2)

0x417: PushEmpty()
0x418: PushEmpty(object)
0x419: Stack[-1] = Stack[-2]
0x41a: Call 0x3fa

0x41b: Pop(1)
0x41c: Return(); Pop(0)

