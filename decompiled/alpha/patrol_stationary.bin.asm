GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	all
	hunt
	GetPosition
	GetPFPosition
	walk
	run
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	attack_end
	bjump
	IsAttacking
	IsAttacking
	reputation
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
	GetProperty
	SetProperty
	health
	armor
	armor_
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
	GenerateMoney: iMin > iMax
	Money
	bottle_water
	rusk
	bandage
	tourniquet
	packet
	hook
	watch
	alpha_pills
	beta_pills
	gamma_pills
	revolver_ammo
	rifle_ammo
	in
	add

Import:
	GetSeeThreshold (1 args)
	GetSeeFOV (1 args)
	SetSeeThreshold (1 args)
	SetSeeFOV (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Face (1 args)
	SetTimer (2 args)
	irand (2 args)
	Sleep (2 args)
	StopAsync (0 args)
	KillTimer (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	Sleep (1 args)
	GetPosition (1 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	IsPlayerActor (2 args)
	WaitForAnimEnd (0 args)
	rand (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
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
	CreateObjectSet (1 args)
	GetGameTime (1 args)
	Trace (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	ResetAAS (0 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)

RunOp = 0xa7
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (object, float, float) Params = 1
		EVENT_1 Op = 0xe Vars = (object)
		EVENT_17 Op = 0x1c Vars = (object)
		EVENT_7 Op = 0x30 Vars = (int)
		EVENT_30 Op = 0x39 Vars = (object, object)
		EVENT_41 Op = 0x4d Vars = (object)
		EVENT_3 Op = 0x80 Vars = (object)
		EVENT_4 Op = 0x93 Vars = (object)
	GTASK_1 Vars = (cvector, cvector) Params = 0
		EVENT_41 Op = 0xb2 Vars = (object)
		EVENT_1 Op = 0xbc Vars = (object)
		EVENT_3 Op = 0xca Vars = (object)
		EVENT_17 Op = 0xd8 Vars = (object)
		EVENT_30 Op = 0xec Vars = (object, object)
	GTASK_2 Vars = (bool, object) Params = 6
		EVENT_17 Op = 0x14b Vars = (object)
		EVENT_30 Op = 0x151 Vars = (object, object)
		EVENT_7 Op = 0x1be Vars = (int)
		EVENT_10 Op = 0x1d0 Vars = (object)
		EVENT_41 Op = 0x1db Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, int) Params = 2
		EVENT_17 Op = 0x1fd Vars = (object)
		EVENT_30 Op = 0x203 Vars = (object, object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x419 Vars = (object)
		EVENT_22 Op = 0x48e Vars = (object, int, float, float)
		EVENT_16 Op = 0x490 Vars = (object, string)
		EVENT_41 Op = 0x492 Vars = (object)

Events:
EVENT_22 Op = 0x716 Vars = (object, int, float, float)
EVENT_16 Op = 0x71e Vars = (object, string)
EVENT_41 Op = 0x72b Vars = (object)

0x0: PushEmpty()
0x1: @ GetSeeThreshold(Stack[-1])
0x2: Pop(0)
0x3: @ GetSeeFOV(Stack[-2])
0x4: Pop(0)
0x5: Push((float)1.5)
0x6: Pop(1); Push(Stack[1 + StackPtr] / Stack[-1]);
0x7: @ SetSeeThreshold(Stack[-1])
0x8: Pop(1)
0x9: PushEmpty(object)
0xa: Stack[-1] = Stack[-2]
0xb: Call 0x65

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: PushEmpty(bool, object)
0x10: Stack[-1] = Stack[-3]
0x11: Call 0x6e0

0x12: Pop(1)
0x13: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x14: PushEmpty()
0x15: Call 0x45

0x16: Pop(0)
0x17: PushEmpty(object)
0x18: Stack[-1] = Stack[-2]
0x19: Call 0x6e7

0x1a: Pop(1)
0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-3]
0x1f: Call 0x52f

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: PushEmpty(object)
0x24: Stack[-1] = Stack[-2]
0x25: Call 0x6f2

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: Call 0x45

0x2a: Pop(0)
0x2b: PushEmpty(object)
0x2c: Stack[-1] = Stack[-2]
0x2d: Call 0x6ff

0x2e: Pop(1)
0x2f: Return(); Pop(0)

0x30: PushEmpty()
0x31: Push((int) 100)
0x32: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Return(); Pop(0)

0x35: PushEmpty()
0x36: Call 0x45

0x37: Pop(0)
0x38: Return(); Pop(0)

0x39: PushEmpty()
0x3a: PushEmpty(bool, object, object)
0x3b: Stack[-2] = Stack[-5]
0x3c: Stack[-1] = Stack[-4]
0x3d: Call 0x731

0x3e: Pop(2)
0x3f: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x40: PushEmpty(object)
0x41: Stack[-1] = Stack[-3]
0x42: Call 0x1c

0x43: Pop(1)
0x44: Return(); Pop(0)

0x45: @ SetSeeThreshold(Stack[-1])
0x46: Pop(0)
0x47: @ SetSeeFOV(Stack[-2])
0x48: Pop(0)
0x49: PushEmpty()
0x4a: Call 0x9c

0x4b: Pop(0)
0x4c: Return(); Pop(0)

0x4d: PushEmpty()
0x4e: PushEmpty()
0x4f: Call 0x45

0x50: Pop(0)
0x51: PushEmpty(object)
0x52: Stack[-1] = Stack[-2]
0x53: Call 0x72b

0x54: Pop(1)
0x55: Return(); Pop(0)

0x56: PushEmpty(bool, bool)
0x57: Push((float)1.8)
0x58: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x59: @ SetSeeFOV(Stack[-1])
0x5a: Pop(1)
0x5b: Push("all")
0x5c: Push("hunt")
0x5d: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: @ WaitForAnimEnd(Stack[-1])
0x60: Pop(0)
0x61: @ SetSeeFOV(Stack[-2])
0x62: Pop(0)
0x63: Stack[-3] = !Stack[-1]; Pop(0);
0x64: Return(); Pop(2)

0x65: PushEmpty(bool, int, bool, int)
0x66: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x67: @ Face(Stack[-0])
0x68: Pop(0)
0x69: Push((int) 100)
0x6a: Push((int) 15)
0x6b: @ SetTimer(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0x6e: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x6f: Push((int) 5)
0x70: @ irand(Stack[-2], Stack[-1])
0x71: Pop(1)
0x72: Push((int) 5)
0x73: Pop(1); Push(Stack[-2] + Stack[-1]);
0x74: @ Sleep(Stack[-1], Stack[-3])
0x75: Pop(1)
0x76: PushEmpty(bool)
0x77: Call 0x56

0x78: Pop(0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x7c

0x7b: GOTO 0x6d

0x7c: PushEmpty()
0x7d: Call 0x45

0x7e: Pop(0)
0x7f: Return(); Pop(4)

0x80: PushEmpty()
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[-4]
0x87: Call 0x6cb

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: @ Face(Stack[-0])
0x8d: Pop(0)
0x8e: Push((int) 100)
0x8f: Push((int) 15)
0x90: @ SetTimer(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x96: @ StopAsync()
0x97: Pop(0)
0x98: Push((int) 100)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(0)

0x9c: @ Stop()
0x9d: Pop(0)
0x9e: @ StopGroup0()
0x9f: Pop(0)
0xa0: @ StopAsync()
0xa1: Pop(0)
0xa2: Push((int) 100)
0xa3: @ KillTimer(Stack[-1])
0xa4: Pop(1)
0xa5: Stack[0 + Tasks[-1].StackPointer] = 0
0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: Call 0x6a5

0xa9: Pop(0)
0xaa: PushEmpty()
0xab: Call 0xf8

0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Call 0x146

0xb0: Pop(0)
0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty()
0xb4: Call 0xae

0xb5: Pop(0)
0xb6: PushEmpty(object)
0xb7: Stack[-1] = Stack[-2]
0xb8: Call 0x72b

0xb9: Pop(1)
0xba: Return(); Pop(0)

0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object)
0xbe: Stack[-1] = Stack[-3]
0xbf: Call 0x6e0

0xc0: Pop(1)
0xc1: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0xae

0xc4: Pop(0)
0xc5: PushEmpty(object)
0xc6: Stack[-1] = Stack[-2]
0xc7: Call 0x6e7

0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[-3]
0xcd: Call 0x6cb

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd0: PushEmpty()
0xd1: Call 0xae

0xd2: Pop(0)
0xd3: PushEmpty(object)
0xd4: Stack[-1] = Stack[-2]
0xd5: Call 0x6d8

0xd6: Pop(1)
0xd7: Return(); Pop(0)

0xd8: PushEmpty()
0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[-3]
0xdb: Call 0x52f

0xdc: Pop(1)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: PushEmpty(object)
0xe0: Stack[-1] = Stack[-2]
0xe1: Call 0x6f2

0xe2: Pop(1)
0xe3: Return(); Pop(0)

0xe4: PushEmpty()
0xe5: Call 0xae

0xe6: Pop(0)
0xe7: PushEmpty(object)
0xe8: Stack[-1] = Stack[-2]
0xe9: Call 0x6ff

0xea: Pop(1)
0xeb: Return(); Pop(0)

0xec: PushEmpty()
0xed: PushEmpty(bool, object, object)
0xee: Stack[-2] = Stack[-5]
0xef: Stack[-1] = Stack[-4]
0xf0: Call 0x731

0xf1: Pop(2)
0xf2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf3: PushEmpty(object)
0xf4: Stack[-1] = Stack[-3]
0xf5: Call 0xd8

0xf6: Pop(1)
0xf7: Return(); Pop(0)

0xf8: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0xf9: @ GetPFPosition(Stack[-1])
0xfa: Pop(0)
0xfb: @ GetDirection(Stack[-0])
0xfc: Pop(0)
0xfd: Push((int) 60)
0xfe: @ irand(Stack[-5], Stack[-1])
0xff: Pop(1)
0x100: Push((int) 30)
0x101: Pop(1); Push(Stack[-5] + Stack[-1]);
0x102: @ Sleep(Stack[-1], Stack[-4])
0x103: Pop(1)
0x104: Push(Stack[-3])
0x105: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x106: PushEmpty()
0x107: Call 0xbb

0x108: Pop(0)
0x109: GOTO 0x144

0x10a: @ GetPFPosition(Stack[-2])
0x10b: Pop(0)
0x10c: PushEmpty(float, cvector, cvector)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[-5]
0x10f: Call 0x595

0x110: Pop(2)
0x111: Push((int) 40000)
0x112: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x114: @ FindPathTo(Stack[-1], Stack[-1])
0x115: Pop(0)
0x116: Pop(0); Push(( Stack[-1] != 0 )
0x117: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x118: @ RotatePath(Stack[-1], Stack[-3])
0x119: Pop(0)
0x11a: Pop(0); Push((bool) Stack[-3] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: GOTO 0x143

0x11d: Push((bool) 0)
0x11e: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x11f: Pop(1)
0x120: Pop(0); Push((bool) Stack[-3] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x122: GOTO 0x143

0x123: Push(CvectorIndex(Stack[-0], 0))
0x124: Push(CvectorIndex(Stack[-0], 2))
0x125: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x126: Pop(2)
0x127: Pop(0); Push((bool) Stack[-3] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: GOTO 0x143

0x12a: @ WaitForAnimEnd(Stack[-3])
0x12b: Pop(0)
0x12c: Pop(0); Push((bool) Stack[-3] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: GOTO 0x143

0x12f: GOTO 0x144

0x130: GOTO 0x134

0x131: Push((int) 1)
0x132: @ Sleep(Stack[-1])
0x133: Pop(1)
0x134: Stack[-1] = 0
0x135: GOTO 0x143

0x136: Push(CvectorIndex(Stack[-0], 0))
0x137: Push(CvectorIndex(Stack[-0], 2))
0x138: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x139: Pop(2)
0x13a: Pop(0); Push((bool) Stack[-3] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: GOTO 0x143

0x13d: @ WaitForAnimEnd(Stack[-3])
0x13e: Pop(0)
0x13f: Pop(0); Push((bool) Stack[-3] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: GOTO 0x143

0x142: GOTO 0x144

0x143: GOTO 0x10a

0x144: GOTO 0xfd

0x145: Return(); Pop(8)

0x146: @ StopGroup0()
0x147: Pop(0)
0x148: @ Stop()
0x149: Pop(0)
0x14a: Return(); Pop(0)

0x14b: PushEmpty()
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call 0x6f2

0x14f: Pop(1)
0x150: Return(); Pop(0)

0x151: PushEmpty()
0x152: PushEmpty(bool, object, object)
0x153: Stack[-2] = Stack[-5]
0x154: Stack[-1] = Stack[-4]
0x155: Call 0x731

0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x159: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x15b: Stack[-7] = Stack[-17]
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[-23]
0x15e: Call 0x1e4

0x15f: Pop(1)
0x160: Pop(1); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x162: Stack[-22] = (bool) 0
0x163: Return(); Pop(16)

0x164: @@ GetPosition(Stack[-5])
0x165: Pop(0)
0x166: @ GetPosition(Stack[-4])
0x167: Pop(0)
0x168: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x169: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x16a: PushEmpty(bool)
0x16b: Stack[-1] = (bool) 0
0x16c: Push((int) 0)
0x16d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x170: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x174: @ Stop()
0x175: Pop(0)
0x176: Stack[-22] = (bool) 0
0x177: Return(); Pop(16)

0x178: Pop(0); Push(Stack[-20] * Stack[-20]);
0x179: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x17b: @@ GetPFPosition(Stack[-5])
0x17c: Pop(0)
0x17d: @ FindPathTo(Stack[-1], Stack[-5])
0x17e: Pop(0)
0x17f: Pop(0); Push(( Stack[-1] != 0 )
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: Stack[-6] = Stack[-1]
0x182: Stack[-1] = 0
0x183: Pop(0); Push(( Stack[-6] != 0 )
0x184: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x185: Push(Stack[-7])
0x186: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x187: Stack[-7] = (bool) 0
0x188: @ RotatePath(Stack[-6], Stack[-8])
0x189: Pop(0)
0x18a: Pop(0); Push((bool) Stack[-8] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x1bc

0x18d: Push((int) 0)
0x18e: Push((float)0.3)
0x18f: @ SetTimer(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: PushEmpty(string)
0x192: Call 0x1eb

0x193: Pop(0)
0x194: PushEmpty(string)
0x195: Call 0x1ed

0x196: Pop(0)
0x197: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: Pop(0); Push((bool) Stack[-8] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: Stack[-6] = 0
0x19e: GOTO 0x1bc

0x19f: GOTO 0x1a1

0x1a0: GOTO 0x1bb

0x1a1: GOTO 0x1a3

0x1a2: Stack[-6] = 0
0x1a3: GOTO 0x1b4

0x1a4: Push((int) 0)
0x1a5: @ KillTimer(Stack[-1])
0x1a6: Pop(1)
0x1a7: Push((float)0.5)
0x1a8: @ Sleep(Stack[-1], Stack[-9])
0x1a9: Pop(1)
0x1aa: Pop(0); Push((bool) Stack[-8] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ac: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ae: Stack[-6] = 0
0x1af: GOTO 0x1bc

0x1b0: Push((int) 0)
0x1b1: Push((float)0.3)
0x1b2: @ SetTimer(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: Stack[-1] = 0
0x1b5: GOTO 0x1ba

0x1b6: Push((int) 0)
0x1b7: @ KillTimer(Stack[-1])
0x1b8: Pop(1)
0x1b9: GOTO 0x1bc

0x1ba: Stack[-6] = 0
0x1bb: GOTO 0x15c

0x1bc: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1bd: Return(); Pop(16)

0x1be: PushEmpty()
0x1bf: Push((int) 0)
0x1c0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Call 0x1e4

0x1c6: Pop(1)
0x1c7: Pop(1); Push((bool) Stack[-1] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ca: Push((int) 0)
0x1cb: @ KillTimer(Stack[-1])
0x1cc: Pop(1)
0x1cd: @ Stop()
0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: @ RequestClearPath(Stack[-1])
0x1d2: Pop(0)
0x1d3: Return(); Pop(0)

0x1d4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d5: Push((int) 0)
0x1d6: @ KillTimer(Stack[-1])
0x1d7: Pop(1)
0x1d8: @ Stop()
0x1d9: Pop(0)
0x1da: Return(); Pop(0)

0x1db: PushEmpty()
0x1dc: PushEmpty()
0x1dd: Call 0x1d4

0x1de: Pop(0)
0x1df: PushEmpty(object)
0x1e0: Stack[-1] = Stack[-2]
0x1e1: Call 0x72b

0x1e2: Pop(1)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[-3]
0x1e7: Call 0x52f

0x1e8: Stack[-4] = Stack[-2]
0x1e9: Pop(2)
0x1ea: Return(); Pop(0)

0x1eb: Stack[-1] = "walk"
0x1ec: Return(); Pop(0)

0x1ed: Stack[-1] = "run"
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: PushEmpty(object, bool, float)
0x1f1: Stack[-3] = Stack[-5]
0x1f2: Stack[-2] = Stack[-4]
0x1f3: Stack[-1] = (float) 180.0
0x1f4: Call 0x20a

0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty()
0x1f8: Stack[-3] = (float) 0.1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: Stack[-3] = (int) 0
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty()
0x1fe: PushEmpty(object)
0x1ff: Stack[-1] = Stack[-2]
0x200: Call 0x6f2

0x201: Pop(1)
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: PushEmpty(bool, object, object)
0x205: Stack[-2] = Stack[-5]
0x206: Stack[-1] = Stack[-4]
0x207: Call 0x731

0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x20b: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x20c: Push("all")
0x20d: Push("attack_begin")
0x20e: Push((int) 1)
0x20f: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x210: Pop(2); Push(Stack[-2] + Stack[-1]);
0x211: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x212: Pop(2)
0x213: Pop(0); Push((bool) Stack[-10] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: GOTO 0x219

0x216: Push((int) 1)
0x217: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x218: GOTO 0x20c

0x219: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x21a: Push("attack")
0x21b: Push((int) 1)
0x21c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x21d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21e: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x21f: Pop(1)
0x220: Pop(0); Push((bool) Stack[-9] == 0)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: GOTO 0x226

0x223: Push((int) 1)
0x224: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x225: GOTO 0x21a

0x226: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x227: Push("@GetAttackDistance")
0x228: Push((int) 1)
0x229: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: @@ GetAttackDistance(Stack[-8])
0x22c: Pop(0)
0x22d: Push((int) 50)
0x22e: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x22f: GOTO 0x231

0x230: Stack[-8] = Stack[-21]
0x231: Push((int) 150)
0x232: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-8] = (int) 150
0x235: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x236: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x237: @ IsPlayerActor(Stack[-0], Stack[-5])
0x238: Pop(0)
0x239: Push(Stack[-22])
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-4] = (bool) 0
0x23c: GOTO 0x23e

0x23d: Stack[-4] = (bool) 1
0x23e: PushEmpty(bool)
0x23f: Stack[-1] = (bool) 0
0x240: PushEmpty(bool, object)
0x241: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x242: Call 0x52f

0x243: Pop(1)
0x244: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x245: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: Stack[-1] = (bool) 1
0x248: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x249: @@ GetPFPosition(Stack[-7])
0x24a: Pop(0)
0x24b: @ GetPFPosition(Stack[-6])
0x24c: Pop(0)
0x24d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x24e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x24f: Push((float)300.0)
0x250: Pop(1); Push(Stack[-1] + Stack[-9]);
0x251: Push((float)300.0)
0x252: Pop(1); Push(Stack[-1] + Stack[-10]);
0x253: Pop(2); Push(Stack[-2] * Stack[-1]);
0x254: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x256: PushEmpty(bool, object, float, float, bool, bool)
0x257: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x258: Stack[-4] = Stack[-14]
0x259: Stack[-3] = (float) 3000.0
0x25a: Stack[-2] = (bool) 1
0x25b: Stack[-1] = (bool) 0
0x25c: Push(-6, 2); TaskCall(2)
0x25d: Call 0x158

0x25e: Pop(-6, 2); TaskReturn
0x25f: Pop(5)
0x260: Pop(1); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: GOTO 0x2c6

0x263: Stack[-4] = (bool) 0
0x264: GOTO 0x2c5

0x265: Pop(0); Push(Stack[-21] * Stack[-21]);
0x266: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x268: Pop(0); Push((bool) Stack[-4] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x26a: PushEmpty(object)
0x26b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26c: Call 0x58a

0x26d: Pop(1)
0x26e: Push("all")
0x26f: Push("attack_on")
0x270: @ PlayAnimation(Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: @ WaitForAnimEnd()
0x273: Pop(0)
0x274: @ StopAsync()
0x275: Pop(0)
0x276: Stack[-4] = (bool) 1
0x277: @ rand(Stack[-1])
0x278: Pop(0)
0x279: PushEmpty(bool)
0x27a: Stack[-1] = (bool) 1
0x27b: Push((float)0.6)
0x27c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: PushEmpty(bool)
0x27f: Call 0x3c2

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Stack[-1] = (bool) 0
0x283: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x284: @ Face(Stack[-0])
0x285: Pop(0)
0x286: Push("all")
0x287: Push("attack_stay")
0x288: @ PlayAnimation(Stack[-2], Stack[-1])
0x289: Pop(2)
0x28a: PushEmpty(bool, float)
0x28b: Stack[-1] = Stack[-23]
0x28c: Call 0x366

0x28d: Pop(2)
0x28e: @ StopAsync()
0x28f: Pop(0)
0x290: GOTO 0x2bc

0x291: @ Face(Stack[-0])
0x292: Pop(0)
0x293: Push("all")
0x294: Push("fjump")
0x295: @ PlayAnimation(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: @ WaitForAnimEnd()
0x298: Pop(0)
0x299: Push(CVector(0.0, 0.0, 0.0))
0x29a: @ SetSpeed(Stack[-1])
0x29b: Pop(1)
0x29c: @ Stop()
0x29d: Pop(0)
0x29e: @ StopAsync()
0x29f: Pop(0)
0x2a0: PushEmpty(bool)
0x2a1: Call 0x3c2

0x2a2: Pop(0)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a7: Call 0x52f

0x2a8: Pop(1)
0x2a9: Pop(1); Push((bool) Stack[-1] == 0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: GOTO 0x2c6

0x2ac: @@ GetPFPosition(Stack[-7])
0x2ad: Pop(0)
0x2ae: @ GetPFPosition(Stack[-6])
0x2af: Pop(0)
0x2b0: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x2b1: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2b2: Pop(0); Push(Stack[-21] * Stack[-21]);
0x2b3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b5: PushEmpty(bool, float)
0x2b6: Stack[-1] = Stack[-23]
0x2b7: Call 0x2fe

0x2b8: Pop(1)
0x2b9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c6

0x2bc: GOTO 0x2c5

0x2bd: PushEmpty(bool, float)
0x2be: Stack[-1] = Stack[-23]
0x2bf: Call 0x2fe

0x2c0: Pop(1)
0x2c1: Pop(1); Push((bool) Stack[-1] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: GOTO 0x2c6

0x2c4: Stack[-4] = (bool) 1
0x2c5: GOTO 0x23e

0x2c6: @ WaitForAnimEnd()
0x2c7: Pop(0)
0x2c8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2ca: Return(); Pop(20)

0x2cb: Push("all")
0x2cc: Push("attack_off")
0x2cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ce: Pop(2)
0x2cf: @ WaitForAnimEnd()
0x2d0: Pop(0)
0x2d1: Push(Stack[-5])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Push((float)2.0)
0x2d4: @ Sleep(Stack[-1])
0x2d5: Pop(1)
0x2d6: Return(); Pop(20)

0x2d7: PushEmpty(object, float, float, object, float, float)
0x2d8: Push((float)0.9)
0x2d9: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2da: @ GetVictim(Stack[-1], Stack[-4])
0x2db: Pop(1)
0x2dc: @ ReportAttack(Stack[-0])
0x2dd: Pop(0)
0x2de: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2df: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2e0: PushEmpty(float, object, int)
0x2e1: Stack[-2] = Stack[-6]
0x2e2: Stack[-1] = Stack[-10]
0x2e3: Call 0x1f7

0x2e4: Stack[-5] = Stack[-3]
0x2e5: Pop(3)
0x2e6: PushEmpty(float, object, float, int)
0x2e7: Stack[-3] = Stack[-7]
0x2e8: Stack[-2] = Stack[-6]
0x2e9: PushEmpty(int, object, int)
0x2ea: Stack[-2] = Stack[-10]
0x2eb: Stack[-1] = Stack[-14]
0x2ec: Call 0x1fa

0x2ed: Stack[-4] = Stack[-3]
0x2ee: Pop(3)
0x2ef: Call 0x4c6

0x2f0: Stack[-5] = Stack[-4]
0x2f1: Pop(4)
0x2f2: PushEmpty(int)
0x2f3: Call 0x3ed

0x2f4: Pop(0)
0x2f5: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2f6: Pop(1)
0x2f7: PushEmpty(object, float)
0x2f8: Stack[-2] = Stack[-5]
0x2f9: Stack[-1] = Stack[-3]
0x2fa: Call 0x3ef

0x2fb: Pop(2)
0x2fc: Return(); Pop(6)

0x2fd: Stack[-3] = 0
0x2fe: PushEmpty(int, bool, int, bool)
0x2ff: @ irand(Stack[-2], Stack[-1])
0x300: Pop(0)
0x301: Push((int) 1)
0x302: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x303: @ Face(Stack[-0])
0x304: Pop(0)
0x305: Push((bool) 1)
0x306: @ SetAttackState(Stack[-1])
0x307: Pop(1)
0x308: Push("all")
0x309: Push("attack_begin")
0x30a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x30b: @ PlayAnimation(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: @ WaitForAnimEnd()
0x30e: Pop(0)
0x30f: PushEmpty()
0x310: Call 0x3cd

0x311: Pop(0)
0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x314: Call 0x52f

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x318: @ StopAsync()
0x319: Pop(0)
0x31a: Stack[-6] = (bool) 0
0x31b: Return(); Pop(4)

0x31c: PushEmpty(float, int)
0x31d: Stack[-2] = Stack[-7]
0x31e: Stack[-1] = Stack[-4]
0x31f: Call 0x2d7

0x320: Pop(2)
0x321: Push("all")
0x322: Push("attack_middle")
0x323: Pop(1); Push(Stack[-1] + Stack[-4]);
0x324: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: Push(Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x328: Push("all")
0x329: Push("attack_middle")
0x32a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x32b: @ PlayAnimation(Stack[-2], Stack[-1])
0x32c: Pop(2)
0x32d: @ WaitForAnimEnd()
0x32e: Pop(0)
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x331: Call 0x52f

0x332: Pop(1)
0x333: Pop(1); Push((bool) Stack[-1] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x335: @ StopAsync()
0x336: Pop(0)
0x337: Stack[-6] = (bool) 0
0x338: Return(); Pop(4)

0x339: PushEmpty(float, int)
0x33a: Stack[-2] = Stack[-7]
0x33b: Stack[-1] = Stack[-4]
0x33c: Call 0x2d7

0x33d: Pop(2)
0x33e: Push((bool) 0)
0x33f: @ SetAttackState(Stack[-1])
0x340: Pop(1)
0x341: Push("all")
0x342: Push("attack_end")
0x343: Pop(1); Push(Stack[-1] + Stack[-4]);
0x344: @ PlayAnimation(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: PushEmpty(bool, float)
0x347: Stack[-1] = (float) 0.75
0x348: Call 0x34e

0x349: Pop(2)
0x34a: @ StopAsync()
0x34b: Pop(0)
0x34c: Stack[-6] = (bool) 1
0x34d: Return(); Pop(4)

0x34e: PushEmpty(float, bool, float, bool)
0x34f: @ rand(Stack[-2])
0x350: Pop(0)
0x351: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x352: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x353: @ IsAnimationPlaying(Stack[-1])
0x354: Pop(0)
0x355: Pop(0); Push((bool) Stack[-1] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: GOTO 0x361

0x358: PushEmpty(bool)
0x359: Call 0x38e

0x35a: Pop(0)
0x35b: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35c: Stack[-6] = (bool) 1
0x35d: Return(); Pop(4)

0x35e: @ sync()
0x35f: Pop(0)
0x360: GOTO 0x353

0x361: GOTO 0x364

0x362: @ WaitForAnimEnd()
0x363: Pop(0)
0x364: Stack[-6] = (bool) 0
0x365: Return(); Pop(4)

0x366: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x367: @ IsAnimationPlaying(Stack[-5])
0x368: Pop(0)
0x369: Pop(0); Push((bool) Stack[-5] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: GOTO 0x38c

0x36c: PushEmpty(bool)
0x36d: Call 0x38e

0x36e: Pop(0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-12] = (bool) 1
0x371: Return(); Pop(10)

0x372: PushEmpty(bool, object)
0x373: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x374: Call 0x52f

0x375: Pop(1)
0x376: Pop(1); Push((bool) Stack[-1] == 0)
0x377: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x378: Stack[-12] = (bool) 0
0x379: Return(); Pop(10)

0x37a: @@ GetPFPosition(Stack[-4])
0x37b: Pop(0)
0x37c: @ GetPFPosition(Stack[-3])
0x37d: Pop(0)
0x37e: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x37f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x380: Pop(0); Push(Stack[-11] * Stack[-11]);
0x381: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: PushEmpty(bool, float)
0x384: Stack[-1] = Stack[-13]
0x385: Call 0x2fe

0x386: Pop(2)
0x387: Stack[-12] = (bool) 1
0x388: Return(); Pop(10)

0x389: @ sync()
0x38a: Pop(0)
0x38b: GOTO 0x367

0x38c: Stack[-12] = (bool) 0
0x38d: Return(); Pop(10)

0x38e: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x38f: PushEmpty(bool, object)
0x390: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x391: Call 0x52f

0x392: Pop(1)
0x393: Pop(1); Push((bool) Stack[-1] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x395: Stack[-11] = (bool) 0
0x396: Return(); Pop(10)

0x397: PushEmpty(bool)
0x398: Call 0x3c2

0x399: Pop(0)
0x39a: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x39b: @@ GetPFPosition(Stack[-5])
0x39c: Pop(0)
0x39d: @ GetPFPosition(Stack[-4])
0x39e: Pop(0)
0x39f: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3a0: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3a1: @@ GetAttackDistance(Stack[-1])
0x3a2: Pop(0)
0x3a3: Push((int) 50)
0x3a4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3a5: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3a6: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a8: PushEmpty()
0x3a9: Call 0x3af

0x3aa: Pop(0)
0x3ab: Stack[-11] = (bool) 1
0x3ac: Return(); Pop(10)

0x3ad: Stack[-11] = (bool) 0
0x3ae: Return(); Pop(10)

0x3af: PushEmpty(cvector, cvector, cvector, cvector)
0x3b0: @ Face(Stack[-0])
0x3b1: Pop(0)
0x3b2: Push("all")
0x3b3: Push("bjump")
0x3b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: @@ GetPFPosition(Stack[-2])
0x3b7: Pop(0)
0x3b8: @ GetPFPosition(Stack[-1])
0x3b9: Pop(0)
0x3ba: @ WaitForAnimEnd()
0x3bb: Pop(0)
0x3bc: @ StopAsync()
0x3bd: Pop(0)
0x3be: Push(CVector(0.0, 0.0, 0.0))
0x3bf: @ SetSpeed(Stack[-1])
0x3c0: Pop(1)
0x3c1: Return(); Pop(4)

0x3c2: PushEmpty(bool, bool)
0x3c3: Push("IsAttacking")
0x3c4: Push((int) 1)
0x3c5: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c7: @@ IsAttacking(Stack[-1])
0x3c8: Pop(0)
0x3c9: Stack[-3] = Stack[-1]
0x3ca: Return(); Pop(2)

0x3cb: Stack[-3] = (bool) 0
0x3cc: Return(); Pop(2)

0x3cd: PushEmpty(float, int, float, int)
0x3ce: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: Return(); Pop(4)

0x3d1: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d3: Push((int) -1)
0x3d4: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3d5: Push((int) 0)
0x3d6: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: Return(); Pop(4)

0x3d9: @ rand(Stack[-2])
0x3da: Pop(0)
0x3db: PushEmpty(float)
0x3dc: Call 0x3f3

0x3dd: Pop(0)
0x3de: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e0: @ irand(Stack[-1], Stack[-2])
0x3e1: Pop(0)
0x3e2: Push((int) 1)
0x3e3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3e4: Push("attack")
0x3e5: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3e6: @ Speak(Stack[-1])
0x3e7: Pop(1)
0x3e8: PushEmpty(int)
0x3e9: Call 0x3f1

0x3ea: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x3eb: Pop(1)
0x3ec: Return(); Pop(4)

0x3ed: Stack[-1] = (int) 0
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: Return(); Pop(0)

0x3f1: Stack[-1] = (int) 1
0x3f2: Return(); Pop(0)

0x3f3: Stack[-1] = (float) 0.5
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty(bool, bool)
0x3f6: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3f7: Pop(0)
0x3f8: Push(Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fa: PushEmpty(bool, object, string, float, float, float)
0x3fb: Stack[-5] = Stack[-9]
0x3fc: Stack[-4] = "reputation"
0x3fd: Stack[-3] = (float) -0.3
0x3fe: Stack[-2] = (int) 0
0x3ff: Stack[-1] = (int) 1
0x400: Call 0x4b0

0x401: Pop(6)
0x402: PushEmpty()
0x403: Call 0x5d8

0x404: Pop(0)
0x405: PushEmpty(object)
0x406: Stack[-1] = Stack[-4]
0x407: Call 0x40a

0x408: Pop(1)
0x409: Return(); Pop(2)

0x40a: PushEmpty()
0x40b: EventDisable(0)
0x40c: PushEmpty(object)
0x40d: Stack[-1] = Stack[-2]
0x40e: Call 0x421

0x40f: Pop(1)
0x410: Push((int) 50)
0x411: Push((int) 40)
0x412: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x413: Pop(2)
0x414: EventEnable(0)
0x415: @ Hold()
0x416: Pop(0)
0x417: GOTO 0x415

0x418: Return(); Pop(0)

0x419: PushEmpty(bool, bool)
0x41a: @ IsOverrideActive(Stack[-1])
0x41b: Pop(0)
0x41c: Pop(0); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: @ WorkWithCorpse(Stack[-3])
0x41f: Pop(0)
0x420: Return(); Pop(2)

0x421: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x422: Pop(0); Push((bool) Stack[-21] == 0)
0x423: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x424: PushEmpty(string)
0x425: Stack[-1] = "fdie"
0x426: Call 0x478

0x427: Pop(1)
0x428: GOTO 0x477

0x429: @@ GetPosition(Stack[-10])
0x42a: Pop(0)
0x42b: @ GetPosition(Stack[-9])
0x42c: Pop(0)
0x42d: @ GetDirection(Stack[-8])
0x42e: Pop(0)
0x42f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x430: Push(CvectorIndex(Stack[-7], 0))
0x431: Push(CvectorIndex(Stack[-9], 0))
0x432: Pop(2); Push(Stack[-2] * Stack[-1]);
0x433: Push(CvectorIndex(Stack[-8], 2))
0x434: Push(CvectorIndex(Stack[-10], 2))
0x435: Pop(2); Push(Stack[-2] * Stack[-1]);
0x436: Pop(2); Push(Stack[-2] + Stack[-1]);
0x437: Push((int) 0)
0x438: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: Stack[-6] = "fdie"
0x43b: GOTO 0x43d

0x43c: Stack[-6] = "bdie"
0x43d: @ RemoveRTEnvelope()
0x43e: Pop(0)
0x43f: @ SetDeathState()
0x440: Pop(0)
0x441: @ Stop()
0x442: Pop(0)
0x443: @ StopAsync()
0x444: Pop(0)
0x445: Stack[-5] = Stack[-21]
0x446: Push("GetScriptProperty")
0x447: Push((int) 2)
0x448: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x449: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44a: Push("Owner")
0x44b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x44c: Pop(1)
0x44d: Push(Stack[-4])
0x44e: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44f: Push("Owner")
0x450: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x451: Pop(1)
0x452: Pop(0); Push((bool) Stack[-5] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x454: Stack[-5] = Stack[-21]
0x455: Push("@GetEyesHeight")
0x456: Push((int) 1)
0x457: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x458: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x459: @@ GetEyesHeight(Stack[-2])
0x45a: Pop(0)
0x45b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x45c: Push(CvectorIndex(Stack[-1], 1))
0x45d: Stack[-1] = Stack[-3]
0x45e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x45f: Push("head")
0x460: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x461: Pop(1)
0x462: Stack[-3] = (bool) 1
0x463: GOTO 0x465

0x464: Stack[-3] = (bool) 0
0x465: Push("all")
0x466: @ PlayAnimation(Stack[-1], Stack[-7])
0x467: Pop(1)
0x468: @ WaitForAnimEnd()
0x469: Pop(0)
0x46a: Push(Stack[-3])
0x46b: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46c: @ StopAsync()
0x46d: Pop(0)
0x46e: Push("head")
0x46f: @ UnlookAsync(Stack[-1])
0x470: Pop(1)
0x471: Push("all")
0x472: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x473: Pop(1)
0x474: @ RemoveEnvelope()
0x475: Pop(0)
0x476: Stack[-5] = 0
0x477: Return(); Pop(20)

0x478: PushEmpty()
0x479: @ RemoveRTEnvelope()
0x47a: Pop(0)
0x47b: @ SetDeathState()
0x47c: Pop(0)
0x47d: @ Stop()
0x47e: Pop(0)
0x47f: @ StopAsync()
0x480: Pop(0)
0x481: @ StopSecondaryAnimation()
0x482: Pop(0)
0x483: Push("all")
0x484: @ PlayAnimation(Stack[-1], Stack[-2])
0x485: Pop(1)
0x486: @ WaitForAnimEnd()
0x487: Pop(0)
0x488: Push("all")
0x489: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x48a: Pop(1)
0x48b: @ RemoveEnvelope()
0x48c: Pop(0)
0x48d: Return(); Pop(0)

0x48e: PushEmpty()
0x48f: Return(); Pop(0)

0x490: PushEmpty()
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: Return(); Pop(0)

0x494: PushEmpty()
0x495: Push((int) 1)
0x496: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-2] = "fire"
0x499: Return(); Pop(0)

0x49a: Stack[-2] = "phys"
0x49b: Return(); Pop(0)

0x49c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x49d: @ GetPosition(Stack[-3])
0x49e: Pop(0)
0x49f: @@ GetPosition(Stack[-2])
0x4a0: Pop(0)
0x4a1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4a2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4a3: Return(); Pop(6)

0x4a4: PushEmpty(bool, bool)
0x4a5: Push("HasProperty")
0x4a6: Push((int) 2)
0x4a7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4a8: Pop(1); Push((bool) Stack[-1] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-5] = (bool) 0
0x4ab: Return(); Pop(2)

0x4ac: @@ HasProperty(Stack[-3], Stack[-1])
0x4ad: Pop(0)
0x4ae: Stack[-5] = Stack[-1]
0x4af: Return(); Pop(2)

0x4b0: PushEmpty(float, float)
0x4b1: PushEmpty(bool, object, string)
0x4b2: Stack[-2] = Stack[-10]
0x4b3: Stack[-1] = Stack[-9]
0x4b4: Call 0x4a4

0x4b5: Pop(2)
0x4b6: Pop(1); Push((bool) Stack[-1] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-8] = (bool) 0
0x4b9: Return(); Pop(2)

0x4ba: @@ GetProperty(Stack[-6], Stack[-1])
0x4bb: Pop(0)
0x4bc: PushEmpty(float, float, float, float)
0x4bd: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4be: Stack[-2] = Stack[-8]
0x4bf: Stack[-1] = Stack[-7]
0x4c0: Call 0x5a0

0x4c1: Pop(3)
0x4c2: @@ SetProperty(Stack[-7], Stack[-1])
0x4c3: Pop(1)
0x4c4: Stack[-8] = (bool) 1
0x4c5: Return(); Pop(2)

0x4c6: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4c7: PushEmpty(bool, object, string)
0x4c8: Stack[-2] = Stack[-18]
0x4c9: Stack[-1] = "health"
0x4ca: Call 0x4a4

0x4cb: Pop(2)
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-16] = (float) 0.0
0x4cf: Return(); Pop(12)

0x4d0: PushEmpty(bool, object, string)
0x4d1: Stack[-2] = Stack[-18]
0x4d2: Stack[-1] = "armor"
0x4d3: Call 0x4a4

0x4d4: Pop(2)
0x4d5: Pop(1); Push((bool) Stack[-1] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-6] = (int) 0
0x4d8: GOTO 0x4dc

0x4d9: Push("armor")
0x4da: @@ GetProperty(Stack[-1], Stack[-7])
0x4db: Pop(1)
0x4dc: Push("armor_")
0x4dd: PushEmpty(string, int)
0x4de: Stack[-1] = Stack[-16]
0x4df: Call 0x494

0x4e0: Pop(1)
0x4e1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4e2: PushEmpty(bool, object, string)
0x4e3: Stack[-2] = Stack[-18]
0x4e4: Stack[-1] = Stack[-8]
0x4e5: Call 0x4a4

0x4e6: Pop(2)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-4] = (int) 0
0x4ea: GOTO 0x4ed

0x4eb: @@ GetProperty(Stack[-5], Stack[-4])
0x4ec: Pop(0)
0x4ed: PushEmpty(float, float, float)
0x4ee: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4ef: Push((float)100.0)
0x4f0: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4f1: Stack[-1] = (int) 1
0x4f2: Call 0x599

0x4f3: Stack[-6] = Stack[-3]
0x4f4: Pop(3)
0x4f5: Push("health")
0x4f6: @@ GetProperty(Stack[-1], Stack[-3])
0x4f7: Pop(1)
0x4f8: Push((int) 1)
0x4f9: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4fa: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4fb: Push("health")
0x4fc: PushEmpty(float, float, float, float)
0x4fd: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4fe: Stack[-2] = (int) 0
0x4ff: Stack[-1] = (int) 1
0x500: Call 0x5a0

0x501: Pop(3)
0x502: @@ SetProperty(Stack[-2], Stack[-1])
0x503: Pop(2)
0x504: Stack[-16] = Stack[-1]
0x505: Return(); Pop(12)

0x506: PushEmpty(bool, bool)
0x507: @@ IsDead(Stack[-1])
0x508: Pop(0)
0x509: Stack[-4] = Stack[-1]
0x50a: Return(); Pop(2)

0x50b: PushEmpty(object, object, object, object)
0x50c: Pop(0); Push((bool) Stack[-5] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: Stack[-6] = (bool) 0
0x50f: Return(); Pop(4)

0x510: PushEmpty(bool)
0x511: Stack[-1] = (bool) 0
0x512: Push("IsDead")
0x513: Push((int) 1)
0x514: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x515: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x516: PushEmpty(bool, object)
0x517: Stack[-1] = Stack[-8]
0x518: Call 0x506

0x519: Pop(1)
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Stack[-1] = (bool) 1
0x51c: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51d: Stack[-6] = (bool) 0
0x51e: Return(); Pop(4)

0x51f: @ GetScene(Stack[-2])
0x520: Pop(0)
0x521: Pop(0); Push((bool) Stack[-2] == 0)
0x522: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x523: Stack[-6] = (bool) 0
0x524: Return(); Pop(4)

0x525: @@ GetScene(Stack[-1])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-6] = (bool) 0
0x52a: Return(); Pop(4)

0x52b: Stack[-6] = (bool) 1
0x52c: Return(); Pop(4)

0x52d: Stack[-1] = 0
0x52e: Stack[-2] = 0
0x52f: PushEmpty(int, int)
0x530: PushEmpty(bool, object)
0x531: Stack[-1] = Stack[-5]
0x532: Call 0x50b

0x533: Pop(1)
0x534: Pop(1); Push((bool) Stack[-1] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-4] = (bool) 0
0x537: Return(); Pop(2)

0x538: PushEmpty(bool, object, string)
0x539: Stack[-2] = Stack[-6]
0x53a: Stack[-1] = "noaccess"
0x53b: Call 0x4a4

0x53c: Pop(2)
0x53d: Pop(1); Push((bool) Stack[-1] == 0)
0x53e: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53f: Stack[-4] = (bool) 1
0x540: Return(); Pop(2)

0x541: Push("noaccess")
0x542: @@ GetProperty(Stack[-1], Stack[-2])
0x543: Pop(1)
0x544: Push((int) 0)
0x545: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x546: Return(); Pop(2)

0x547: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x548: PushEmpty(bool)
0x549: Stack[-1] = (bool) 0
0x54a: Push((int) 4)
0x54b: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54d: Push((int) 5)
0x54e: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x550: Stack[-1] = (bool) 1
0x551: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x552: @ GetScene(Stack[-10])
0x553: Pop(0)
0x554: @ GetPosition(Stack[-8])
0x555: Pop(0)
0x556: @ GetEyesHeight(Stack[-7])
0x557: Pop(0)
0x558: Push(CvectorIndex(Stack[-8], 1))
0x559: Push((int) 2)
0x55a: Pop(1); Push(Stack[-9] / Stack[-1]);
0x55b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x55c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x55d: Push("scripted")
0x55e: Push(CVector(0.0, 0.0, 1.0))
0x55f: Push("blood.xml")
0x560: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Stack[-9] = 0
0x563: Stack[-10] = 0
0x564: Pop(0); Push((bool) Stack[-23] == 0)
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: Return(); Pop(20)

0x567: @ GetSecondaryAnimationType(Stack[-6])
0x568: Pop(0)
0x569: Push((int) 0)
0x56a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56c: Return(); Pop(20)

0x56d: @@ GetPosition(Stack[-5])
0x56e: Pop(0)
0x56f: @ GetPosition(Stack[-4])
0x570: Pop(0)
0x571: @ GetDirection(Stack[-3])
0x572: Pop(0)
0x573: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x574: Push(CvectorIndex(Stack[-2], 0))
0x575: Push(CvectorIndex(Stack[-4], 0))
0x576: Pop(2); Push(Stack[-2] * Stack[-1]);
0x577: Push(CvectorIndex(Stack[-3], 2))
0x578: Push(CvectorIndex(Stack[-5], 2))
0x579: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57b: Push((int) 0)
0x57c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-1] = "fhit"
0x57f: GOTO 0x581

0x580: Stack[-1] = "bhit"
0x581: Push("hit_react")
0x582: Push("1")
0x583: Pop(1); Push(Stack[-3] + Stack[-1]);
0x584: Push("2")
0x585: Pop(1); Push(Stack[-4] + Stack[-1]);
0x586: Push((int) -10)
0x587: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(4)
0x589: Return(); Pop(20)

0x58a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x58b: @@ GetPosition(Stack[-3])
0x58c: Pop(0)
0x58d: @ GetPosition(Stack[-2])
0x58e: Pop(0)
0x58f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x590: Push(CvectorIndex(Stack[-1], 0))
0x591: Push(CvectorIndex(Stack[-2], 2))
0x592: @ RotateAsync(Stack[-2], Stack[-1])
0x593: Pop(2)
0x594: Return(); Pop(6)

0x595: PushEmpty(cvector, cvector)
0x596: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x597: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x598: Return(); Pop(2)

0x599: PushEmpty()
0x59a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-3] = Stack[-2]
0x59d: GOTO 0x59f

0x59e: Stack[-3] = Stack[-1]
0x59f: Return(); Pop(0)

0x5a0: PushEmpty()
0x5a1: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-4] = Stack[-2]
0x5a4: Return(); Pop(0)

0x5a5: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-4] = Stack[-1]
0x5a8: Return(); Pop(0)

0x5a9: Stack[-4] = Stack[-3]
0x5aa: Return(); Pop(0)

0x5ab: PushEmpty(object, object)
0x5ac: @ CreateObjectSet(Stack[-1])
0x5ad: Pop(0)
0x5ae: Stack[-3] = Stack[-1]
0x5af: Return(); Pop(2)

0x5b0: Stack[-1] = 0
0x5b1: PushEmpty(float, float)
0x5b2: @ GetGameTime(Stack[-1])
0x5b3: Pop(0)
0x5b4: Push((int) 1)
0x5b5: PushEmpty(int)
0x5b6: Push((int) 24)
0x5b7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5b8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5b9: Return(); Pop(2)

0x5ba: PushEmpty(int, int, int, bool, int, int, int, bool)
0x5bb: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bd: Push("GenerateMoney: iMin > iMax")
0x5be: @ Trace(Stack[-1])
0x5bf: Pop(1)
0x5c0: Return(); Pop(8)

0x5c1: Stack[-4] = (int) 0
0x5c2: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c4: Pop(0); Push(Stack[-9] - Stack[-10]);
0x5c5: @ irand(Stack[-4], Stack[-1])
0x5c6: Pop(1)
0x5c7: GOTO 0x5cc

0x5c8: Push((int) 0)
0x5c9: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: Return(); Pop(8)

0x5cc: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x5cd: Push((int) 0)
0x5ce: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5d0: Return(); Pop(8)

0x5d1: Push("Money")
0x5d2: @ GetInvItemByName(Stack[-3], Stack[-1])
0x5d3: Pop(1)
0x5d4: Push((int) 0)
0x5d5: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x5d6: Pop(1)
0x5d7: Return(); Pop(8)

0x5d8: PushEmpty(int, bool, int, int, bool, int)
0x5d9: Push((int) 0)
0x5da: @ ClearSubContainer(Stack[-1])
0x5db: Pop(1)
0x5dc: PushEmpty(int, int)
0x5dd: Stack[-2] = (int) 0
0x5de: Push((int) 100)
0x5df: PushEmpty(int)
0x5e0: Call 0x5b1

0x5e1: Pop(0)
0x5e2: Push((int) 100)
0x5e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5e5: Call 0x5ba

0x5e6: Pop(2)
0x5e7: PushEmpty(int)
0x5e8: Call 0x5b1

0x5e9: Stack[-2] = Stack[-1]
0x5ea: Pop(1)
0x5eb: Push((int) 3)
0x5ec: @ irand(Stack[-4], Stack[-1])
0x5ed: Pop(1)
0x5ee: Push((int) 0)
0x5ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f1: PushEmpty(int, string)
0x5f2: Stack[-1] = "bottle_water"
0x5f3: Call 0x6a0

0x5f4: Pop(1)
0x5f5: Push((int) 0)
0x5f6: Push((int) 1)
0x5f7: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x5f8: Pop(3)
0x5f9: Push((int) 3)
0x5fa: @ irand(Stack[-4], Stack[-1])
0x5fb: Pop(1)
0x5fc: Push((int) 0)
0x5fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5ff: PushEmpty(int, string)
0x600: Stack[-1] = "rusk"
0x601: Call 0x6a0

0x602: Pop(1)
0x603: Push((int) 0)
0x604: Push((int) 1)
0x605: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Push((int) 7)
0x608: @ irand(Stack[-4], Stack[-1])
0x609: Pop(1)
0x60a: Push((int) 0)
0x60b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x60d: PushEmpty(int, string)
0x60e: Stack[-1] = "bandage"
0x60f: Call 0x6a0

0x610: Pop(1)
0x611: Push((int) 0)
0x612: Push((int) 1)
0x613: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 7)
0x616: @ irand(Stack[-4], Stack[-1])
0x617: Pop(1)
0x618: Push((int) 0)
0x619: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x61b: PushEmpty(int, string)
0x61c: Stack[-1] = "tourniquet"
0x61d: Call 0x6a0

0x61e: Pop(1)
0x61f: Push((int) 0)
0x620: Push((int) 1)
0x621: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: Push((int) 20)
0x624: @ irand(Stack[-4], Stack[-1])
0x625: Pop(1)
0x626: Push((int) 0)
0x627: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x629: PushEmpty(int, string)
0x62a: Stack[-1] = "packet"
0x62b: Call 0x6a0

0x62c: Pop(1)
0x62d: Push((int) 0)
0x62e: Push((int) 1)
0x62f: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x630: Pop(3)
0x631: Push((int) 20)
0x632: @ irand(Stack[-4], Stack[-1])
0x633: Pop(1)
0x634: Push((int) 0)
0x635: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x637: PushEmpty(int, string)
0x638: Stack[-1] = "hook"
0x639: Call 0x6a0

0x63a: Pop(1)
0x63b: Push((int) 0)
0x63c: Push((int) 1)
0x63d: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Push((int) 30)
0x640: @ irand(Stack[-4], Stack[-1])
0x641: Pop(1)
0x642: Push((int) 0)
0x643: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x645: PushEmpty(int, string)
0x646: Stack[-1] = "watch"
0x647: Call 0x6a0

0x648: Pop(1)
0x649: Push((int) 0)
0x64a: Push((int) 1)
0x64b: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Push((int) 3)
0x64e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x650: Push((int) 2)
0x651: @ irand(Stack[-4], Stack[-1])
0x652: Pop(1)
0x653: Push((int) 0)
0x654: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x656: PushEmpty(int, string)
0x657: Stack[-1] = "alpha_pills"
0x658: Call 0x6a0

0x659: Pop(1)
0x65a: Push((int) 0)
0x65b: Push((int) 1)
0x65c: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(3)
0x65e: Push((int) 4)
0x65f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x661: Push((int) 5)
0x662: @ irand(Stack[-4], Stack[-1])
0x663: Pop(1)
0x664: Push((int) 0)
0x665: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x667: PushEmpty(int, string)
0x668: Stack[-1] = "beta_pills"
0x669: Call 0x6a0

0x66a: Pop(1)
0x66b: Push((int) 0)
0x66c: Push((int) 1)
0x66d: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x66e: Pop(3)
0x66f: Push((int) 6)
0x670: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x672: Push((int) 8)
0x673: @ irand(Stack[-4], Stack[-1])
0x674: Pop(1)
0x675: Push((int) 0)
0x676: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x678: PushEmpty(int, string)
0x679: Stack[-1] = "gamma_pills"
0x67a: Call 0x6a0

0x67b: Pop(1)
0x67c: Push((int) 0)
0x67d: Push((int) 1)
0x67e: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(3)
0x680: Push((int) 8)
0x681: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x683: Push((int) 2)
0x684: @ irand(Stack[-4], Stack[-1])
0x685: Pop(1)
0x686: Push((int) 0)
0x687: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x689: PushEmpty(int, string)
0x68a: Stack[-1] = "revolver_ammo"
0x68b: Call 0x6a0

0x68c: Pop(1)
0x68d: Push((int) 0)
0x68e: Push((int) 1)
0x68f: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x690: Pop(3)
0x691: Push((int) 2)
0x692: @ irand(Stack[-4], Stack[-1])
0x693: Pop(1)
0x694: Push((int) 0)
0x695: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x697: PushEmpty(int, string)
0x698: Stack[-1] = "rifle_ammo"
0x699: Call 0x6a0

0x69a: Pop(1)
0x69b: Push((int) 0)
0x69c: Push((int) 1)
0x69d: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(3)
0x69f: Return(); Pop(6)

0x6a0: PushEmpty(int, int)
0x6a1: @ GetInvItemByName(Stack[-1], Stack[-3])
0x6a2: Pop(0)
0x6a3: Stack[-4] = Stack[-1]
0x6a4: Return(); Pop(2)

0x6a5: Push(GlobalVars[0])
0x6a6: PushEmpty(object)
0x6a7: Call 0x5ab

0x6a8: Stack[-2] = Stack[-1]
0x6a9: Pop(1)
0x6aa: GlobalVars[0] = Stack[-1]; Pop(1)
0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(bool, float, bool, float)
0x6ad: PushEmpty(bool, object)
0x6ae: Stack[-1] = Stack[-7]
0x6af: Call 0x52f

0x6b0: Pop(1)
0x6b1: Pop(1); Push((bool) Stack[-1] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-6] = (bool) 0
0x6b4: Return(); Pop(4)

0x6b5: Push(GlobalVars[0])
0x6b6: @@ in(Stack[-3], Stack[-6])
0x6b7: Pop(1)
0x6b8: Push(Stack[-2])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6ba: Stack[-6] = (bool) 1
0x6bb: Return(); Pop(4)

0x6bc: PushEmpty(bool, object, string)
0x6bd: Stack[-2] = Stack[-8]
0x6be: Stack[-1] = "reputation"
0x6bf: Call 0x4a4

0x6c0: Pop(2)
0x6c1: Pop(1); Push((bool) Stack[-1] == 0)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c3: Stack[-6] = (bool) 0
0x6c4: Return(); Pop(4)

0x6c5: Push("reputation")
0x6c6: @@ GetProperty(Stack[-1], Stack[-2])
0x6c7: Pop(1)
0x6c8: Push((float)0.1)
0x6c9: Stack[-7] = Stack[-2] < Stack[-1]; Pop(1);
0x6ca: Return(); Pop(4)

0x6cb: PushEmpty(bool, bool)
0x6cc: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6cd: Pop(0)
0x6ce: Pop(0); Push((bool) Stack[-1] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-4] = (bool) 0
0x6d1: Return(); Pop(2)

0x6d2: PushEmpty(bool, object)
0x6d3: Stack[-1] = Stack[-5]
0x6d4: Call 0x6ac

0x6d5: Stack[-6] = Stack[-2]
0x6d6: Pop(2)
0x6d7: Return(); Pop(2)

0x6d8: PushEmpty()
0x6d9: PushEmpty(object)
0x6da: Stack[-1] = Stack[-2]
0x6db: Push(-1, 3); TaskCall(0)
0x6dc: Call 0x0

0x6dd: Pop(-1, 3); TaskReturn
0x6de: Pop(1)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty()
0x6e1: PushEmpty(bool, object)
0x6e2: Stack[-1] = Stack[-3]
0x6e3: Call 0x6ac

0x6e4: Stack[-4] = Stack[-2]
0x6e5: Pop(2)
0x6e6: Return(); Pop(0)

0x6e7: PushEmpty()
0x6e8: PushEmpty(object, bool)
0x6e9: Stack[-2] = Stack[-3]
0x6ea: Stack[-1] = (bool) 1
0x6eb: Push(-2, 5); TaskCall(3)
0x6ec: Call 0x1ef

0x6ed: Pop(-2, 5); TaskReturn
0x6ee: Pop(2)
0x6ef: @ ResetAAS()
0x6f0: Pop(0)
0x6f1: Return(); Pop(0)

0x6f2: PushEmpty(bool, bool)
0x6f3: Pop(0); Push((bool) Stack[-3] == 0)
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f5: Return(); Pop(2)

0x6f6: Push(GlobalVars[0])
0x6f7: @@ in(Stack[-2], Stack[-4])
0x6f8: Pop(1)
0x6f9: Pop(0); Push((bool) Stack[-1] == 0)
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fb: Push(GlobalVars[0])
0x6fc: @@ add(Stack[-4])
0x6fd: Pop(1)
0x6fe: Return(); Pop(2)

0x6ff: PushEmpty()
0x700: PushEmpty(object)
0x701: Stack[-1] = Stack[-2]
0x702: Call 0x6f2

0x703: Pop(1)
0x704: PushEmpty(object, bool)
0x705: Stack[-2] = Stack[-3]
0x706: Stack[-1] = (bool) 1
0x707: Push(-2, 5); TaskCall(3)
0x708: Call 0x1ef

0x709: Pop(-2, 5); TaskReturn
0x70a: Pop(2)
0x70b: @ ResetAAS()
0x70c: Pop(0)
0x70d: Return(); Pop(0)

0x70e: PushEmpty()
0x70f: PushEmpty(object)
0x710: Stack[-1] = Stack[-2]
0x711: Push(-1, 0); TaskCall(4)
0x712: Call 0x3f5

0x713: Pop(-1, 0); TaskReturn
0x714: Pop(1)
0x715: Return(); Pop(0)

0x716: PushEmpty()
0x717: PushEmpty(object, int, float)
0x718: Stack[-3] = Stack[-7]
0x719: Stack[-2] = Stack[-6]
0x71a: Stack[-1] = Stack[-5]
0x71b: Call 0x547

0x71c: Pop(3)
0x71d: Return(); Pop(0)

0x71e: PushEmpty(float, float)
0x71f: Push("health")
0x720: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x722: Push("health")
0x723: @ GetProperty(Stack[-1], Stack[-2])
0x724: Pop(1)
0x725: Push((int) 0)
0x726: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: @ SignalDeath(Stack[-4])
0x729: Pop(0)
0x72a: Return(); Pop(2)

0x72b: PushEmpty()
0x72c: PushEmpty(object)
0x72d: Stack[-1] = Stack[-2]
0x72e: Call 0x70e

0x72f: Pop(1)
0x730: Return(); Pop(0)

0x731: PushEmpty(float, bool, float, bool)
0x732: PushEmpty(bool, object, string)
0x733: Stack[-2] = Stack[-8]
0x734: Stack[-1] = "reputation"
0x735: Call 0x4a4

0x736: Pop(2)
0x737: Pop(1); Push((bool) Stack[-1] == 0)
0x738: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x739: Stack[-7] = (bool) 0
0x73a: Return(); Pop(4)

0x73b: Push("reputation")
0x73c: @@ GetProperty(Stack[-1], Stack[-3])
0x73d: Pop(1)
0x73e: Push((float)0.5)
0x73f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-7] = (bool) 0
0x742: Return(); Pop(4)

0x743: @ CanSee(Stack[-1], Stack[-6])
0x744: Pop(0)
0x745: PushEmpty(bool)
0x746: Stack[-1] = (bool) 1
0x747: Push(Stack[-2])
0x748: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x749: PushEmpty(float, object)
0x74a: Stack[-1] = Stack[-9]
0x74b: Call 0x49c

0x74c: Pop(1)
0x74d: Push((float)160000.0)
0x74e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x750: Stack[-1] = (bool) 0
0x751: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x752: Push((float)-0.2)
0x753: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x754: Pop(1)
0x755: Stack[-7] = (bool) 1
0x756: Return(); Pop(4)

0x757: Stack[-7] = (bool) 0
0x758: Return(); Pop(4)

