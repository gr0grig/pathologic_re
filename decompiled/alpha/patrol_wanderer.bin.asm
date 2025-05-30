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
	idle
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
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	WaitForAnimEnd (0 args)
	StopAnimation (0 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	IsPlayerActor (2 args)
	GetPFPosition (1 args)
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
	IsLoaded (1 args)
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
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_1 Op = 0xaf Vars = (object)
		EVENT_3 Op = 0xbd Vars = (object)
		EVENT_17 Op = 0xcb Vars = (object)
		EVENT_30 Op = 0xdf Vars = (object, object)
		EVENT_10 Op = 0x124 Vars = (object)
		EVENT_28 Op = 0x128 Vars = ()
		EVENT_41 Op = 0x132 Vars = (object)
	GTASK_2  Params = 0
		EVENT_1 Op = 0x13d Vars = (object)
		EVENT_3 Op = 0x14b Vars = (object)
		EVENT_17 Op = 0x159 Vars = (object)
		EVENT_30 Op = 0x16d Vars = (object, object)
	GTASK_3 Vars = (bool, object) Params = 6
		EVENT_17 Op = 0x1c3 Vars = (object)
		EVENT_30 Op = 0x1c9 Vars = (object, object)
		EVENT_7 Op = 0x236 Vars = (int)
		EVENT_10 Op = 0x248 Vars = (object)
		EVENT_41 Op = 0x253 Vars = (object)
	GTASK_4 Vars = (object, int, int, bool, int) Params = 2
		EVENT_17 Op = 0x275 Vars = (object)
		EVENT_30 Op = 0x27b Vars = (object, object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x491 Vars = (object)
		EVENT_22 Op = 0x506 Vars = (object, int, float, float)
		EVENT_16 Op = 0x508 Vars = (object, string)
		EVENT_41 Op = 0x50a Vars = (object)

Events:
EVENT_22 Op = 0x7a7 Vars = (object, int, float, float)
EVENT_16 Op = 0x7af Vars = (object, string)
EVENT_41 Op = 0x7bc Vars = (object)

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
0x11: Call 0x771

0x12: Pop(1)
0x13: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x14: PushEmpty()
0x15: Call 0x45

0x16: Pop(0)
0x17: PushEmpty(object)
0x18: Stack[-1] = Stack[-2]
0x19: Call 0x778

0x1a: Pop(1)
0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-3]
0x1f: Call 0x5a7

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: PushEmpty(object)
0x24: Stack[-1] = Stack[-2]
0x25: Call 0x783

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: Call 0x45

0x2a: Pop(0)
0x2b: PushEmpty(object)
0x2c: Stack[-1] = Stack[-2]
0x2d: Call 0x790

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
0x3d: Call 0x7c2

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
0x53: Call 0x7bc

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
0x87: Call 0x75c

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
0xa8: Call 0x736

0xa9: Pop(0)
0xaa: PushEmpty()
0xab: Call 0xeb

0xac: Pop(0)
0xad: GOTO 0xaa

0xae: Return(); Pop(0)

0xaf: PushEmpty()
0xb0: PushEmpty(bool, object)
0xb1: Stack[-1] = Stack[-3]
0xb2: Call 0x771

0xb3: Pop(1)
0xb4: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb5: PushEmpty()
0xb6: Call 0x12b

0xb7: Pop(0)
0xb8: PushEmpty(object)
0xb9: Stack[-1] = Stack[-2]
0xba: Call 0x778

0xbb: Pop(1)
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[-3]
0xc0: Call 0x75c

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc3: PushEmpty()
0xc4: Call 0x12b

0xc5: Pop(0)
0xc6: PushEmpty(object)
0xc7: Stack[-1] = Stack[-2]
0xc8: Call 0x769

0xc9: Pop(1)
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[-3]
0xce: Call 0x5a7

0xcf: Pop(1)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: PushEmpty(object)
0xd3: Stack[-1] = Stack[-2]
0xd4: Call 0x783

0xd5: Pop(1)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: Call 0x12b

0xd9: Pop(0)
0xda: PushEmpty(object)
0xdb: Stack[-1] = Stack[-2]
0xdc: Call 0x790

0xdd: Pop(1)
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: PushEmpty(bool, object, object)
0xe1: Stack[-2] = Stack[-5]
0xe2: Stack[-1] = Stack[-4]
0xe3: Call 0x7c2

0xe4: Pop(2)
0xe5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe6: PushEmpty(object)
0xe7: Stack[-1] = Stack[-3]
0xe8: Call 0xcb

0xe9: Pop(1)
0xea: Return(); Pop(0)

0xeb: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0xec: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xed: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xee: Push((float)0.5)
0xef: @ rand(Stack[-8], Stack[-1])
0xf0: Pop(1)
0xf1: @ Sleep(Stack[-7])
0xf2: Pop(0)
0xf3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0xf5: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf7: @ GetPosition(Stack[-5])
0xf8: Pop(0)
0xf9: @ GetCameraFarDistance(Stack[-4])
0xfa: Pop(0)
0xfb: Push((float)2.5)
0xfc: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0xfd: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0xfe: Pop(0)
0xff: Push(Stack[-3])
0x100: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x101: GOTO 0x106

0x102: Push((int) 1)
0x103: @ Sleep(Stack[-1])
0x104: Pop(1)
0x105: GOTO 0xf7

0x106: GOTO 0x108

0x107: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x108: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x109: Pop(0)
0x10a: Pop(0); Push(( Stack[-2] != 0 )
0x10b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10c: @ RotatePath(Stack[-2], Stack[-1])
0x10d: Pop(0)
0x10e: Push(Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x110: PushEmpty(bool)
0x111: Call 0x13b

0x112: Pop(0)
0x113: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x114: Pop(1)
0x115: Stack[-2] = 0
0x116: Push(Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty()
0x119: Push(-0, 0); TaskCall(2)
0x11a: Call 0x179

0x11b: Pop(-0, 0); TaskReturn
0x11c: Pop(0)
0x11d: GOTO 0x121

0x11e: Push((int) 1)
0x11f: @ Sleep(Stack[-1])
0x120: Pop(1)
0x121: Stack[-2] = 0
0x122: GOTO 0xf3

0x123: Return(); Pop(14)

0x124: PushEmpty()
0x125: @ RequestClearPath(Stack[-1])
0x126: Pop(0)
0x127: Return(); Pop(0)

0x128: @ Stop()
0x129: Pop(0)
0x12a: Return(); Pop(0)

0x12b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x12c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x12d: @ Stop()
0x12e: Pop(0)
0x12f: @ StopGroup0()
0x130: Pop(0)
0x131: Return(); Pop(0)

0x132: PushEmpty()
0x133: PushEmpty()
0x134: Call 0x12b

0x135: Pop(0)
0x136: PushEmpty(object)
0x137: Stack[-1] = Stack[-2]
0x138: Call 0x7bc

0x139: Pop(1)
0x13a: Return(); Pop(0)

0x13b: Stack[-1] = (bool) 0
0x13c: Return(); Pop(0)

0x13d: PushEmpty()
0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[-3]
0x140: Call 0x771

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x143: PushEmpty()
0x144: Call 0x1be

0x145: Pop(0)
0x146: PushEmpty(object)
0x147: Stack[-1] = Stack[-2]
0x148: Call 0x778

0x149: Pop(1)
0x14a: Return(); Pop(0)

0x14b: PushEmpty()
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[-3]
0x14e: Call 0x75c

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x151: PushEmpty()
0x152: Call 0x1be

0x153: Pop(0)
0x154: PushEmpty(object)
0x155: Stack[-1] = Stack[-2]
0x156: Call 0x769

0x157: Pop(1)
0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Call 0x5a7

0x15d: Pop(1)
0x15e: Pop(1); Push((bool) Stack[-1] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: PushEmpty(object)
0x161: Stack[-1] = Stack[-2]
0x162: Call 0x783

0x163: Pop(1)
0x164: Return(); Pop(0)

0x165: PushEmpty()
0x166: Call 0x1be

0x167: Pop(0)
0x168: PushEmpty(object)
0x169: Stack[-1] = Stack[-2]
0x16a: Call 0x790

0x16b: Pop(1)
0x16c: Return(); Pop(0)

0x16d: PushEmpty()
0x16e: PushEmpty(bool, object, object)
0x16f: Stack[-2] = Stack[-5]
0x170: Stack[-1] = Stack[-4]
0x171: Call 0x7c2

0x172: Pop(2)
0x173: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x174: PushEmpty(object)
0x175: Stack[-1] = Stack[-3]
0x176: Call 0x159

0x177: Pop(1)
0x178: Return(); Pop(0)

0x179: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x17a: @ WaitForAnimEnd()
0x17b: Pop(0)
0x17c: PushEmpty(bool)
0x17d: Call 0x60d

0x17e: Pop(0)
0x17f: Pop(1); Push((bool) Stack[-1] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: Return(); Pop(14)

0x182: PushEmpty(int)
0x183: Call 0x63a

0x184: Stack[-8] = Stack[-1]
0x185: Pop(1)
0x186: Stack[-6] = (int) 0
0x187: PushEmpty(bool)
0x188: Stack[-1] = (bool) 0
0x189: Push((int) 5)
0x18a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(bool)
0x18d: Call 0x60d

0x18e: Pop(0)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Stack[-1] = (bool) 1
0x191: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x192: Push((int) 3)
0x193: @ irand(Stack[-6], Stack[-1])
0x194: Pop(1)
0x195: Push((int) 0)
0x196: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x198: Push(Stack[-7])
0x199: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x19a: @ irand(Stack[-4], Stack[-7])
0x19b: Pop(0)
0x19c: Push("all")
0x19d: PushEmpty(string, int)
0x19e: Stack[-1] = Stack[-7]
0x19f: Call 0x633

0x1a0: Pop(1)
0x1a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: @ WaitForAnimEnd(Stack[-3])
0x1a4: Pop(0)
0x1a5: Pop(0); Push((bool) Stack[-3] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: GOTO 0x1bd

0x1a8: GOTO 0x1ba

0x1a9: Push((int) 1)
0x1aa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1ac: Push((int) 4)
0x1ad: @ rand(Stack[-3], Stack[-1])
0x1ae: Pop(1)
0x1af: Push((int) 1)
0x1b0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b1: @ Sleep(Stack[-1], Stack[-2])
0x1b2: Pop(1)
0x1b3: Pop(0); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1bd

0x1b6: GOTO 0x1ba

0x1b7: Push(Stack[-6])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: GOTO 0x1bd

0x1ba: Push((int) 1)
0x1bb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1bc: GOTO 0x187

0x1bd: Return(); Pop(14)

0x1be: @ StopAnimation()
0x1bf: Pop(0)
0x1c0: @ StopGroup0()
0x1c1: Pop(0)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: PushEmpty(object)
0x1c5: Stack[-1] = Stack[-2]
0x1c6: Call 0x783

0x1c7: Pop(1)
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty()
0x1ca: PushEmpty(bool, object, object)
0x1cb: Stack[-2] = Stack[-5]
0x1cc: Stack[-1] = Stack[-4]
0x1cd: Call 0x7c2

0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x1d1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1d3: Stack[-7] = Stack[-17]
0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[-23]
0x1d6: Call 0x25c

0x1d7: Pop(1)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-22] = (bool) 0
0x1db: Return(); Pop(16)

0x1dc: @@ GetPosition(Stack[-5])
0x1dd: Pop(0)
0x1de: @ GetPosition(Stack[-4])
0x1df: Pop(0)
0x1e0: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1e1: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1e2: PushEmpty(bool)
0x1e3: Stack[-1] = (bool) 0
0x1e4: Push((int) 0)
0x1e5: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1e8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 1
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ec: @ Stop()
0x1ed: Pop(0)
0x1ee: Stack[-22] = (bool) 0
0x1ef: Return(); Pop(16)

0x1f0: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1f1: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x1f3: @@ GetPFPosition(Stack[-5])
0x1f4: Pop(0)
0x1f5: @ FindPathTo(Stack[-1], Stack[-5])
0x1f6: Pop(0)
0x1f7: Pop(0); Push(( Stack[-1] != 0 )
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-6] = Stack[-1]
0x1fa: Stack[-1] = 0
0x1fb: Pop(0); Push(( Stack[-6] != 0 )
0x1fc: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x1fd: Push(Stack[-7])
0x1fe: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1ff: Stack[-7] = (bool) 0
0x200: @ RotatePath(Stack[-6], Stack[-8])
0x201: Pop(0)
0x202: Pop(0); Push((bool) Stack[-8] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x234

0x205: Push((int) 0)
0x206: Push((float)0.3)
0x207: @ SetTimer(Stack[-2], Stack[-1])
0x208: Pop(2)
0x209: PushEmpty(string)
0x20a: Call 0x263

0x20b: Pop(0)
0x20c: PushEmpty(string)
0x20d: Call 0x265

0x20e: Pop(0)
0x20f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x210: Pop(2)
0x211: Pop(0); Push((bool) Stack[-8] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x213: Push( Stack[0 + Tasks[-1].StackPointer] )
0x214: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x215: Stack[-6] = 0
0x216: GOTO 0x234

0x217: GOTO 0x219

0x218: GOTO 0x233

0x219: GOTO 0x21b

0x21a: Stack[-6] = 0
0x21b: GOTO 0x22c

0x21c: Push((int) 0)
0x21d: @ KillTimer(Stack[-1])
0x21e: Pop(1)
0x21f: Push((float)0.5)
0x220: @ Sleep(Stack[-1], Stack[-9])
0x221: Pop(1)
0x222: Pop(0); Push((bool) Stack[-8] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x224: Push( Stack[0 + Tasks[-1].StackPointer] )
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-6] = 0
0x227: GOTO 0x234

0x228: Push((int) 0)
0x229: Push((float)0.3)
0x22a: @ SetTimer(Stack[-2], Stack[-1])
0x22b: Pop(2)
0x22c: Stack[-1] = 0
0x22d: GOTO 0x232

0x22e: Push((int) 0)
0x22f: @ KillTimer(Stack[-1])
0x230: Pop(1)
0x231: GOTO 0x234

0x232: Stack[-6] = 0
0x233: GOTO 0x1d4

0x234: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x235: Return(); Pop(16)

0x236: PushEmpty()
0x237: Push((int) 0)
0x238: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: Return(); Pop(0)

0x23b: PushEmpty(bool, object)
0x23c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Call 0x25c

0x23e: Pop(1)
0x23f: Pop(1); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x242: Push((int) 0)
0x243: @ KillTimer(Stack[-1])
0x244: Pop(1)
0x245: @ Stop()
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: PushEmpty()
0x249: @ RequestClearPath(Stack[-1])
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x24d: Push((int) 0)
0x24e: @ KillTimer(Stack[-1])
0x24f: Pop(1)
0x250: @ Stop()
0x251: Pop(0)
0x252: Return(); Pop(0)

0x253: PushEmpty()
0x254: PushEmpty()
0x255: Call 0x24c

0x256: Pop(0)
0x257: PushEmpty(object)
0x258: Stack[-1] = Stack[-2]
0x259: Call 0x7bc

0x25a: Pop(1)
0x25b: Return(); Pop(0)

0x25c: PushEmpty()
0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[-3]
0x25f: Call 0x5a7

0x260: Stack[-4] = Stack[-2]
0x261: Pop(2)
0x262: Return(); Pop(0)

0x263: Stack[-1] = "walk"
0x264: Return(); Pop(0)

0x265: Stack[-1] = "run"
0x266: Return(); Pop(0)

0x267: PushEmpty()
0x268: PushEmpty(object, bool, float)
0x269: Stack[-3] = Stack[-5]
0x26a: Stack[-2] = Stack[-4]
0x26b: Stack[-1] = (float) 180.0
0x26c: Call 0x282

0x26d: Pop(3)
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Stack[-3] = (float) 0.1
0x271: Return(); Pop(0)

0x272: PushEmpty()
0x273: Stack[-3] = (int) 0
0x274: Return(); Pop(0)

0x275: PushEmpty()
0x276: PushEmpty(object)
0x277: Stack[-1] = Stack[-2]
0x278: Call 0x783

0x279: Pop(1)
0x27a: Return(); Pop(0)

0x27b: PushEmpty()
0x27c: PushEmpty(bool, object, object)
0x27d: Stack[-2] = Stack[-5]
0x27e: Stack[-1] = Stack[-4]
0x27f: Call 0x7c2

0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x283: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x284: Push("all")
0x285: Push("attack_begin")
0x286: Push((int) 1)
0x287: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x288: Pop(2); Push(Stack[-2] + Stack[-1]);
0x289: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Pop(0); Push((bool) Stack[-10] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x291

0x28e: Push((int) 1)
0x28f: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x290: GOTO 0x284

0x291: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x292: Push("attack")
0x293: Push((int) 1)
0x294: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x295: Pop(2); Push(Stack[-2] + Stack[-1]);
0x296: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x297: Pop(1)
0x298: Pop(0); Push((bool) Stack[-9] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x29e

0x29b: Push((int) 1)
0x29c: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x29d: GOTO 0x292

0x29e: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x29f: Push("@GetAttackDistance")
0x2a0: Push((int) 1)
0x2a1: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: @@ GetAttackDistance(Stack[-8])
0x2a4: Pop(0)
0x2a5: Push((int) 50)
0x2a6: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x2a7: GOTO 0x2a9

0x2a8: Stack[-8] = Stack[-21]
0x2a9: Push((int) 150)
0x2aa: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-8] = (int) 150
0x2ad: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ae: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x2af: @ IsPlayerActor(Stack[-0], Stack[-5])
0x2b0: Pop(0)
0x2b1: Push(Stack[-22])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-4] = (bool) 0
0x2b4: GOTO 0x2b6

0x2b5: Stack[-4] = (bool) 1
0x2b6: PushEmpty(bool)
0x2b7: Stack[-1] = (bool) 0
0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call 0x5a7

0x2bb: Pop(1)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bd: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Stack[-1] = (bool) 1
0x2c0: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x2c1: @@ GetPFPosition(Stack[-7])
0x2c2: Pop(0)
0x2c3: @ GetPFPosition(Stack[-6])
0x2c4: Pop(0)
0x2c5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x2c6: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2c7: Push((float)300.0)
0x2c8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c9: Push((float)300.0)
0x2ca: Pop(1); Push(Stack[-1] + Stack[-10]);
0x2cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cc: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2ce: PushEmpty(bool, object, float, float, bool, bool)
0x2cf: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Stack[-4] = Stack[-14]
0x2d1: Stack[-3] = (float) 3000.0
0x2d2: Stack[-2] = (bool) 1
0x2d3: Stack[-1] = (bool) 0
0x2d4: Push(-6, 2); TaskCall(3)
0x2d5: Call 0x1d0

0x2d6: Pop(-6, 2); TaskReturn
0x2d7: Pop(5)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: GOTO 0x33e

0x2db: Stack[-4] = (bool) 0
0x2dc: GOTO 0x33d

0x2dd: Pop(0); Push(Stack[-21] * Stack[-21]);
0x2de: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x2e0: Pop(0); Push((bool) Stack[-4] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e4: Call 0x602

0x2e5: Pop(1)
0x2e6: Push("all")
0x2e7: Push("attack_on")
0x2e8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: @ WaitForAnimEnd()
0x2eb: Pop(0)
0x2ec: @ StopAsync()
0x2ed: Pop(0)
0x2ee: Stack[-4] = (bool) 1
0x2ef: @ rand(Stack[-1])
0x2f0: Pop(0)
0x2f1: PushEmpty(bool)
0x2f2: Stack[-1] = (bool) 1
0x2f3: Push((float)0.6)
0x2f4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f6: PushEmpty(bool)
0x2f7: Call 0x43a

0x2f8: Pop(0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: Stack[-1] = (bool) 0
0x2fb: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2fc: @ Face(Stack[-0])
0x2fd: Pop(0)
0x2fe: Push("all")
0x2ff: Push("attack_stay")
0x300: @ PlayAnimation(Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: PushEmpty(bool, float)
0x303: Stack[-1] = Stack[-23]
0x304: Call 0x3de

0x305: Pop(2)
0x306: @ StopAsync()
0x307: Pop(0)
0x308: GOTO 0x334

0x309: @ Face(Stack[-0])
0x30a: Pop(0)
0x30b: Push("all")
0x30c: Push("fjump")
0x30d: @ PlayAnimation(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: Push(CVector(0.0, 0.0, 0.0))
0x312: @ SetSpeed(Stack[-1])
0x313: Pop(1)
0x314: @ Stop()
0x315: Pop(0)
0x316: @ StopAsync()
0x317: Pop(0)
0x318: PushEmpty(bool)
0x319: Call 0x43a

0x31a: Pop(0)
0x31b: Pop(1); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31f: Call 0x5a7

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x33e

0x324: @@ GetPFPosition(Stack[-7])
0x325: Pop(0)
0x326: @ GetPFPosition(Stack[-6])
0x327: Pop(0)
0x328: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x329: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x32a: Pop(0); Push(Stack[-21] * Stack[-21]);
0x32b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32d: PushEmpty(bool, float)
0x32e: Stack[-1] = Stack[-23]
0x32f: Call 0x376

0x330: Pop(1)
0x331: Pop(1); Push((bool) Stack[-1] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: GOTO 0x33e

0x334: GOTO 0x33d

0x335: PushEmpty(bool, float)
0x336: Stack[-1] = Stack[-23]
0x337: Call 0x376

0x338: Pop(1)
0x339: Pop(1); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: GOTO 0x33e

0x33c: Stack[-4] = (bool) 1
0x33d: GOTO 0x2b6

0x33e: @ WaitForAnimEnd()
0x33f: Pop(0)
0x340: Push( Stack[3 + Tasks[-1].StackPointer] )
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: Return(); Pop(20)

0x343: Push("all")
0x344: Push("attack_off")
0x345: @ PlayAnimation(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: @ WaitForAnimEnd()
0x348: Pop(0)
0x349: Push(Stack[-5])
0x34a: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34b: Push((float)2.0)
0x34c: @ Sleep(Stack[-1])
0x34d: Pop(1)
0x34e: Return(); Pop(20)

0x34f: PushEmpty(object, float, float, object, float, float)
0x350: Push((float)0.9)
0x351: Pop(1); Push(Stack[-9] * Stack[-1]);
0x352: @ GetVictim(Stack[-1], Stack[-4])
0x353: Pop(1)
0x354: @ ReportAttack(Stack[-0])
0x355: Pop(0)
0x356: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x357: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x358: PushEmpty(float, object, int)
0x359: Stack[-2] = Stack[-6]
0x35a: Stack[-1] = Stack[-10]
0x35b: Call 0x26f

0x35c: Stack[-5] = Stack[-3]
0x35d: Pop(3)
0x35e: PushEmpty(float, object, float, int)
0x35f: Stack[-3] = Stack[-7]
0x360: Stack[-2] = Stack[-6]
0x361: PushEmpty(int, object, int)
0x362: Stack[-2] = Stack[-10]
0x363: Stack[-1] = Stack[-14]
0x364: Call 0x272

0x365: Stack[-4] = Stack[-3]
0x366: Pop(3)
0x367: Call 0x53e

0x368: Stack[-5] = Stack[-4]
0x369: Pop(4)
0x36a: PushEmpty(int)
0x36b: Call 0x465

0x36c: Pop(0)
0x36d: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x36e: Pop(1)
0x36f: PushEmpty(object, float)
0x370: Stack[-2] = Stack[-5]
0x371: Stack[-1] = Stack[-3]
0x372: Call 0x467

0x373: Pop(2)
0x374: Return(); Pop(6)

0x375: Stack[-3] = 0
0x376: PushEmpty(int, bool, int, bool)
0x377: @ irand(Stack[-2], Stack[-1])
0x378: Pop(0)
0x379: Push((int) 1)
0x37a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x37b: @ Face(Stack[-0])
0x37c: Pop(0)
0x37d: Push((bool) 1)
0x37e: @ SetAttackState(Stack[-1])
0x37f: Pop(1)
0x380: Push("all")
0x381: Push("attack_begin")
0x382: Pop(1); Push(Stack[-1] + Stack[-4]);
0x383: @ PlayAnimation(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: @ WaitForAnimEnd()
0x386: Pop(0)
0x387: PushEmpty()
0x388: Call 0x445

0x389: Pop(0)
0x38a: PushEmpty(bool, object)
0x38b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38c: Call 0x5a7

0x38d: Pop(1)
0x38e: Pop(1); Push((bool) Stack[-1] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x390: @ StopAsync()
0x391: Pop(0)
0x392: Stack[-6] = (bool) 0
0x393: Return(); Pop(4)

0x394: PushEmpty(float, int)
0x395: Stack[-2] = Stack[-7]
0x396: Stack[-1] = Stack[-4]
0x397: Call 0x34f

0x398: Pop(2)
0x399: Push("all")
0x39a: Push("attack_middle")
0x39b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x39c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: Push(Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3a0: Push("all")
0x3a1: Push("attack_middle")
0x3a2: Pop(1); Push(Stack[-1] + Stack[-4]);
0x3a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: @ WaitForAnimEnd()
0x3a6: Pop(0)
0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a9: Call 0x5a7

0x3aa: Pop(1)
0x3ab: Pop(1); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ad: @ StopAsync()
0x3ae: Pop(0)
0x3af: Stack[-6] = (bool) 0
0x3b0: Return(); Pop(4)

0x3b1: PushEmpty(float, int)
0x3b2: Stack[-2] = Stack[-7]
0x3b3: Stack[-1] = Stack[-4]
0x3b4: Call 0x34f

0x3b5: Pop(2)
0x3b6: Push((bool) 0)
0x3b7: @ SetAttackState(Stack[-1])
0x3b8: Pop(1)
0x3b9: Push("all")
0x3ba: Push("attack_end")
0x3bb: Pop(1); Push(Stack[-1] + Stack[-4]);
0x3bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: PushEmpty(bool, float)
0x3bf: Stack[-1] = (float) 0.75
0x3c0: Call 0x3c6

0x3c1: Pop(2)
0x3c2: @ StopAsync()
0x3c3: Pop(0)
0x3c4: Stack[-6] = (bool) 1
0x3c5: Return(); Pop(4)

0x3c6: PushEmpty(float, bool, float, bool)
0x3c7: @ rand(Stack[-2])
0x3c8: Pop(0)
0x3c9: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3cb: @ IsAnimationPlaying(Stack[-1])
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: GOTO 0x3d9

0x3d0: PushEmpty(bool)
0x3d1: Call 0x406

0x3d2: Pop(0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-6] = (bool) 1
0x3d5: Return(); Pop(4)

0x3d6: @ sync()
0x3d7: Pop(0)
0x3d8: GOTO 0x3cb

0x3d9: GOTO 0x3dc

0x3da: @ WaitForAnimEnd()
0x3db: Pop(0)
0x3dc: Stack[-6] = (bool) 0
0x3dd: Return(); Pop(4)

0x3de: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3df: @ IsAnimationPlaying(Stack[-5])
0x3e0: Pop(0)
0x3e1: Pop(0); Push((bool) Stack[-5] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: GOTO 0x404

0x3e4: PushEmpty(bool)
0x3e5: Call 0x406

0x3e6: Pop(0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e8: Stack[-12] = (bool) 1
0x3e9: Return(); Pop(10)

0x3ea: PushEmpty(bool, object)
0x3eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ec: Call 0x5a7

0x3ed: Pop(1)
0x3ee: Pop(1); Push((bool) Stack[-1] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: Stack[-12] = (bool) 0
0x3f1: Return(); Pop(10)

0x3f2: @@ GetPFPosition(Stack[-4])
0x3f3: Pop(0)
0x3f4: @ GetPFPosition(Stack[-3])
0x3f5: Pop(0)
0x3f6: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3f7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3f8: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3f9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fb: PushEmpty(bool, float)
0x3fc: Stack[-1] = Stack[-13]
0x3fd: Call 0x376

0x3fe: Pop(2)
0x3ff: Stack[-12] = (bool) 1
0x400: Return(); Pop(10)

0x401: @ sync()
0x402: Pop(0)
0x403: GOTO 0x3df

0x404: Stack[-12] = (bool) 0
0x405: Return(); Pop(10)

0x406: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x407: PushEmpty(bool, object)
0x408: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x409: Call 0x5a7

0x40a: Pop(1)
0x40b: Pop(1); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-11] = (bool) 0
0x40e: Return(); Pop(10)

0x40f: PushEmpty(bool)
0x410: Call 0x43a

0x411: Pop(0)
0x412: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x413: @@ GetPFPosition(Stack[-5])
0x414: Pop(0)
0x415: @ GetPFPosition(Stack[-4])
0x416: Pop(0)
0x417: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x418: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x419: @@ GetAttackDistance(Stack[-1])
0x41a: Pop(0)
0x41b: Push((int) 50)
0x41c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x41d: Pop(0); Push(Stack[-1] * Stack[-1]);
0x41e: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x420: PushEmpty()
0x421: Call 0x427

0x422: Pop(0)
0x423: Stack[-11] = (bool) 1
0x424: Return(); Pop(10)

0x425: Stack[-11] = (bool) 0
0x426: Return(); Pop(10)

0x427: PushEmpty(cvector, cvector, cvector, cvector)
0x428: @ Face(Stack[-0])
0x429: Pop(0)
0x42a: Push("all")
0x42b: Push("bjump")
0x42c: @ PlayAnimation(Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: @@ GetPFPosition(Stack[-2])
0x42f: Pop(0)
0x430: @ GetPFPosition(Stack[-1])
0x431: Pop(0)
0x432: @ WaitForAnimEnd()
0x433: Pop(0)
0x434: @ StopAsync()
0x435: Pop(0)
0x436: Push(CVector(0.0, 0.0, 0.0))
0x437: @ SetSpeed(Stack[-1])
0x438: Pop(1)
0x439: Return(); Pop(4)

0x43a: PushEmpty(bool, bool)
0x43b: Push("IsAttacking")
0x43c: Push((int) 1)
0x43d: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x43e: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43f: @@ IsAttacking(Stack[-1])
0x440: Pop(0)
0x441: Stack[-3] = Stack[-1]
0x442: Return(); Pop(2)

0x443: Stack[-3] = (bool) 0
0x444: Return(); Pop(2)

0x445: PushEmpty(float, int, float, int)
0x446: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: Return(); Pop(4)

0x449: Push( Stack[4 + Tasks[-1].StackPointer] )
0x44a: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44b: Push((int) -1)
0x44c: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x44d: Push((int) 0)
0x44e: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: Return(); Pop(4)

0x451: @ rand(Stack[-2])
0x452: Pop(0)
0x453: PushEmpty(float)
0x454: Call 0x46b

0x455: Pop(0)
0x456: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x458: @ irand(Stack[-1], Stack[-2])
0x459: Pop(0)
0x45a: Push((int) 1)
0x45b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x45c: Push("attack")
0x45d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x45e: @ Speak(Stack[-1])
0x45f: Pop(1)
0x460: PushEmpty(int)
0x461: Call 0x469

0x462: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x463: Pop(1)
0x464: Return(); Pop(4)

0x465: Stack[-1] = (int) 0
0x466: Return(); Pop(0)

0x467: PushEmpty()
0x468: Return(); Pop(0)

0x469: Stack[-1] = (int) 1
0x46a: Return(); Pop(0)

0x46b: Stack[-1] = (float) 0.5
0x46c: Return(); Pop(0)

0x46d: PushEmpty(bool, bool)
0x46e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x46f: Pop(0)
0x470: Push(Stack[-1])
0x471: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x472: PushEmpty(bool, object, string, float, float, float)
0x473: Stack[-5] = Stack[-9]
0x474: Stack[-4] = "reputation"
0x475: Stack[-3] = (float) -0.3
0x476: Stack[-2] = (int) 0
0x477: Stack[-1] = (int) 1
0x478: Call 0x528

0x479: Pop(6)
0x47a: PushEmpty()
0x47b: Call 0x669

0x47c: Pop(0)
0x47d: PushEmpty(object)
0x47e: Stack[-1] = Stack[-4]
0x47f: Call 0x482

0x480: Pop(1)
0x481: Return(); Pop(2)

0x482: PushEmpty()
0x483: EventDisable(0)
0x484: PushEmpty(object)
0x485: Stack[-1] = Stack[-2]
0x486: Call 0x499

0x487: Pop(1)
0x488: Push((int) 50)
0x489: Push((int) 40)
0x48a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: EventEnable(0)
0x48d: @ Hold()
0x48e: Pop(0)
0x48f: GOTO 0x48d

0x490: Return(); Pop(0)

0x491: PushEmpty(bool, bool)
0x492: @ IsOverrideActive(Stack[-1])
0x493: Pop(0)
0x494: Pop(0); Push((bool) Stack[-1] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: @ WorkWithCorpse(Stack[-3])
0x497: Pop(0)
0x498: Return(); Pop(2)

0x499: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x49a: Pop(0); Push((bool) Stack[-21] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49c: PushEmpty(string)
0x49d: Stack[-1] = "fdie"
0x49e: Call 0x4f0

0x49f: Pop(1)
0x4a0: GOTO 0x4ef

0x4a1: @@ GetPosition(Stack[-10])
0x4a2: Pop(0)
0x4a3: @ GetPosition(Stack[-9])
0x4a4: Pop(0)
0x4a5: @ GetDirection(Stack[-8])
0x4a6: Pop(0)
0x4a7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4a8: Push(CvectorIndex(Stack[-7], 0))
0x4a9: Push(CvectorIndex(Stack[-9], 0))
0x4aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ab: Push(CvectorIndex(Stack[-8], 2))
0x4ac: Push(CvectorIndex(Stack[-10], 2))
0x4ad: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4af: Push((int) 0)
0x4b0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-6] = "fdie"
0x4b3: GOTO 0x4b5

0x4b4: Stack[-6] = "bdie"
0x4b5: @ RemoveRTEnvelope()
0x4b6: Pop(0)
0x4b7: @ SetDeathState()
0x4b8: Pop(0)
0x4b9: @ Stop()
0x4ba: Pop(0)
0x4bb: @ StopAsync()
0x4bc: Pop(0)
0x4bd: Stack[-5] = Stack[-21]
0x4be: Push("GetScriptProperty")
0x4bf: Push((int) 2)
0x4c0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4c1: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c2: Push("Owner")
0x4c3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c4: Pop(1)
0x4c5: Push(Stack[-4])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c7: Push("Owner")
0x4c8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4c9: Pop(1)
0x4ca: Pop(0); Push((bool) Stack[-5] == 0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: Stack[-5] = Stack[-21]
0x4cd: Push("@GetEyesHeight")
0x4ce: Push((int) 1)
0x4cf: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4d0: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d1: @@ GetEyesHeight(Stack[-2])
0x4d2: Pop(0)
0x4d3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4d4: Push(CvectorIndex(Stack[-1], 1))
0x4d5: Stack[-1] = Stack[-3]
0x4d6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4d7: Push("head")
0x4d8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4d9: Pop(1)
0x4da: Stack[-3] = (bool) 1
0x4db: GOTO 0x4dd

0x4dc: Stack[-3] = (bool) 0
0x4dd: Push("all")
0x4de: @ PlayAnimation(Stack[-1], Stack[-7])
0x4df: Pop(1)
0x4e0: @ WaitForAnimEnd()
0x4e1: Pop(0)
0x4e2: Push(Stack[-3])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e4: @ StopAsync()
0x4e5: Pop(0)
0x4e6: Push("head")
0x4e7: @ UnlookAsync(Stack[-1])
0x4e8: Pop(1)
0x4e9: Push("all")
0x4ea: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4eb: Pop(1)
0x4ec: @ RemoveEnvelope()
0x4ed: Pop(0)
0x4ee: Stack[-5] = 0
0x4ef: Return(); Pop(20)

0x4f0: PushEmpty()
0x4f1: @ RemoveRTEnvelope()
0x4f2: Pop(0)
0x4f3: @ SetDeathState()
0x4f4: Pop(0)
0x4f5: @ Stop()
0x4f6: Pop(0)
0x4f7: @ StopAsync()
0x4f8: Pop(0)
0x4f9: @ StopSecondaryAnimation()
0x4fa: Pop(0)
0x4fb: Push("all")
0x4fc: @ PlayAnimation(Stack[-1], Stack[-2])
0x4fd: Pop(1)
0x4fe: @ WaitForAnimEnd()
0x4ff: Pop(0)
0x500: Push("all")
0x501: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x502: Pop(1)
0x503: @ RemoveEnvelope()
0x504: Pop(0)
0x505: Return(); Pop(0)

0x506: PushEmpty()
0x507: Return(); Pop(0)

0x508: PushEmpty()
0x509: Return(); Pop(0)

0x50a: PushEmpty()
0x50b: Return(); Pop(0)

0x50c: PushEmpty()
0x50d: Push((int) 1)
0x50e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-2] = "fire"
0x511: Return(); Pop(0)

0x512: Stack[-2] = "phys"
0x513: Return(); Pop(0)

0x514: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x515: @ GetPosition(Stack[-3])
0x516: Pop(0)
0x517: @@ GetPosition(Stack[-2])
0x518: Pop(0)
0x519: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x51a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x51b: Return(); Pop(6)

0x51c: PushEmpty(bool, bool)
0x51d: Push("HasProperty")
0x51e: Push((int) 2)
0x51f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x520: Pop(1); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-5] = (bool) 0
0x523: Return(); Pop(2)

0x524: @@ HasProperty(Stack[-3], Stack[-1])
0x525: Pop(0)
0x526: Stack[-5] = Stack[-1]
0x527: Return(); Pop(2)

0x528: PushEmpty(float, float)
0x529: PushEmpty(bool, object, string)
0x52a: Stack[-2] = Stack[-10]
0x52b: Stack[-1] = Stack[-9]
0x52c: Call 0x51c

0x52d: Pop(2)
0x52e: Pop(1); Push((bool) Stack[-1] == 0)
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: Stack[-8] = (bool) 0
0x531: Return(); Pop(2)

0x532: @@ GetProperty(Stack[-6], Stack[-1])
0x533: Pop(0)
0x534: PushEmpty(float, float, float, float)
0x535: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x536: Stack[-2] = Stack[-8]
0x537: Stack[-1] = Stack[-7]
0x538: Call 0x619

0x539: Pop(3)
0x53a: @@ SetProperty(Stack[-7], Stack[-1])
0x53b: Pop(1)
0x53c: Stack[-8] = (bool) 1
0x53d: Return(); Pop(2)

0x53e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x53f: PushEmpty(bool, object, string)
0x540: Stack[-2] = Stack[-18]
0x541: Stack[-1] = "health"
0x542: Call 0x51c

0x543: Pop(2)
0x544: Pop(1); Push((bool) Stack[-1] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-16] = (float) 0.0
0x547: Return(); Pop(12)

0x548: PushEmpty(bool, object, string)
0x549: Stack[-2] = Stack[-18]
0x54a: Stack[-1] = "armor"
0x54b: Call 0x51c

0x54c: Pop(2)
0x54d: Pop(1); Push((bool) Stack[-1] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-6] = (int) 0
0x550: GOTO 0x554

0x551: Push("armor")
0x552: @@ GetProperty(Stack[-1], Stack[-7])
0x553: Pop(1)
0x554: Push("armor_")
0x555: PushEmpty(string, int)
0x556: Stack[-1] = Stack[-16]
0x557: Call 0x50c

0x558: Pop(1)
0x559: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x55a: PushEmpty(bool, object, string)
0x55b: Stack[-2] = Stack[-18]
0x55c: Stack[-1] = Stack[-8]
0x55d: Call 0x51c

0x55e: Pop(2)
0x55f: Pop(1); Push((bool) Stack[-1] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-4] = (int) 0
0x562: GOTO 0x565

0x563: @@ GetProperty(Stack[-5], Stack[-4])
0x564: Pop(0)
0x565: PushEmpty(float, float, float)
0x566: Pop(0); Push(Stack[-9] + Stack[-7]);
0x567: Push((float)100.0)
0x568: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x569: Stack[-1] = (int) 1
0x56a: Call 0x612

0x56b: Stack[-6] = Stack[-3]
0x56c: Pop(3)
0x56d: Push("health")
0x56e: @@ GetProperty(Stack[-1], Stack[-3])
0x56f: Pop(1)
0x570: Push((int) 1)
0x571: Pop(1); Push(Stack[-1] - Stack[-4]);
0x572: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x573: Push("health")
0x574: PushEmpty(float, float, float, float)
0x575: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x576: Stack[-2] = (int) 0
0x577: Stack[-1] = (int) 1
0x578: Call 0x619

0x579: Pop(3)
0x57a: @@ SetProperty(Stack[-2], Stack[-1])
0x57b: Pop(2)
0x57c: Stack[-16] = Stack[-1]
0x57d: Return(); Pop(12)

0x57e: PushEmpty(bool, bool)
0x57f: @@ IsDead(Stack[-1])
0x580: Pop(0)
0x581: Stack[-4] = Stack[-1]
0x582: Return(); Pop(2)

0x583: PushEmpty(object, object, object, object)
0x584: Pop(0); Push((bool) Stack[-5] == 0)
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-6] = (bool) 0
0x587: Return(); Pop(4)

0x588: PushEmpty(bool)
0x589: Stack[-1] = (bool) 0
0x58a: Push("IsDead")
0x58b: Push((int) 1)
0x58c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x58d: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x58e: PushEmpty(bool, object)
0x58f: Stack[-1] = Stack[-8]
0x590: Call 0x57e

0x591: Pop(1)
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: Stack[-1] = (bool) 1
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-6] = (bool) 0
0x596: Return(); Pop(4)

0x597: @ GetScene(Stack[-2])
0x598: Pop(0)
0x599: Pop(0); Push((bool) Stack[-2] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59b: Stack[-6] = (bool) 0
0x59c: Return(); Pop(4)

0x59d: @@ GetScene(Stack[-1])
0x59e: Pop(0)
0x59f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: Stack[-6] = (bool) 0
0x5a2: Return(); Pop(4)

0x5a3: Stack[-6] = (bool) 1
0x5a4: Return(); Pop(4)

0x5a5: Stack[-1] = 0
0x5a6: Stack[-2] = 0
0x5a7: PushEmpty(int, int)
0x5a8: PushEmpty(bool, object)
0x5a9: Stack[-1] = Stack[-5]
0x5aa: Call 0x583

0x5ab: Pop(1)
0x5ac: Pop(1); Push((bool) Stack[-1] == 0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ae: Stack[-4] = (bool) 0
0x5af: Return(); Pop(2)

0x5b0: PushEmpty(bool, object, string)
0x5b1: Stack[-2] = Stack[-6]
0x5b2: Stack[-1] = "noaccess"
0x5b3: Call 0x51c

0x5b4: Pop(2)
0x5b5: Pop(1); Push((bool) Stack[-1] == 0)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b7: Stack[-4] = (bool) 1
0x5b8: Return(); Pop(2)

0x5b9: Push("noaccess")
0x5ba: @@ GetProperty(Stack[-1], Stack[-2])
0x5bb: Pop(1)
0x5bc: Push((int) 0)
0x5bd: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5be: Return(); Pop(2)

0x5bf: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x5c0: PushEmpty(bool)
0x5c1: Stack[-1] = (bool) 0
0x5c2: Push((int) 4)
0x5c3: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c5: Push((int) 5)
0x5c6: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c8: Stack[-1] = (bool) 1
0x5c9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5ca: @ GetScene(Stack[-10])
0x5cb: Pop(0)
0x5cc: @ GetPosition(Stack[-8])
0x5cd: Pop(0)
0x5ce: @ GetEyesHeight(Stack[-7])
0x5cf: Pop(0)
0x5d0: Push(CvectorIndex(Stack[-8], 1))
0x5d1: Push((int) 2)
0x5d2: Pop(1); Push(Stack[-9] / Stack[-1]);
0x5d3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5d4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5d5: Push("scripted")
0x5d6: Push(CVector(0.0, 0.0, 1.0))
0x5d7: Push("blood.xml")
0x5d8: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Stack[-9] = 0
0x5db: Stack[-10] = 0
0x5dc: Pop(0); Push((bool) Stack[-23] == 0)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5de: Return(); Pop(20)

0x5df: @ GetSecondaryAnimationType(Stack[-6])
0x5e0: Pop(0)
0x5e1: Push((int) 0)
0x5e2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e4: Return(); Pop(20)

0x5e5: @@ GetPosition(Stack[-5])
0x5e6: Pop(0)
0x5e7: @ GetPosition(Stack[-4])
0x5e8: Pop(0)
0x5e9: @ GetDirection(Stack[-3])
0x5ea: Pop(0)
0x5eb: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5ec: Push(CvectorIndex(Stack[-2], 0))
0x5ed: Push(CvectorIndex(Stack[-4], 0))
0x5ee: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ef: Push(CvectorIndex(Stack[-3], 2))
0x5f0: Push(CvectorIndex(Stack[-5], 2))
0x5f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f3: Push((int) 0)
0x5f4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f6: Stack[-1] = "fhit"
0x5f7: GOTO 0x5f9

0x5f8: Stack[-1] = "bhit"
0x5f9: Push("hit_react")
0x5fa: Push("1")
0x5fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5fc: Push("2")
0x5fd: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5fe: Push((int) -10)
0x5ff: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(4)
0x601: Return(); Pop(20)

0x602: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x603: @@ GetPosition(Stack[-3])
0x604: Pop(0)
0x605: @ GetPosition(Stack[-2])
0x606: Pop(0)
0x607: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x608: Push(CvectorIndex(Stack[-1], 0))
0x609: Push(CvectorIndex(Stack[-2], 2))
0x60a: @ RotateAsync(Stack[-2], Stack[-1])
0x60b: Pop(2)
0x60c: Return(); Pop(6)

0x60d: PushEmpty(bool, bool)
0x60e: @ IsLoaded(Stack[-1])
0x60f: Pop(0)
0x610: Stack[-3] = Stack[-1]
0x611: Return(); Pop(2)

0x612: PushEmpty()
0x613: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-3] = Stack[-2]
0x616: GOTO 0x618

0x617: Stack[-3] = Stack[-1]
0x618: Return(); Pop(0)

0x619: PushEmpty()
0x61a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-4] = Stack[-2]
0x61d: Return(); Pop(0)

0x61e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x620: Stack[-4] = Stack[-1]
0x621: Return(); Pop(0)

0x622: Stack[-4] = Stack[-3]
0x623: Return(); Pop(0)

0x624: PushEmpty(object, object)
0x625: @ CreateObjectSet(Stack[-1])
0x626: Pop(0)
0x627: Stack[-3] = Stack[-1]
0x628: Return(); Pop(2)

0x629: Stack[-1] = 0
0x62a: PushEmpty(float, float)
0x62b: @ GetGameTime(Stack[-1])
0x62c: Pop(0)
0x62d: Push((int) 1)
0x62e: PushEmpty(int)
0x62f: Push((int) 24)
0x630: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x631: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x632: Return(); Pop(2)

0x633: PushEmpty(string, string)
0x634: Stack[-1] = "idle"
0x635: Push(Stack[-3])
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x638: Stack[-4] = Stack[-1]
0x639: Return(); Pop(2)

0x63a: PushEmpty(int, bool, int, bool)
0x63b: Stack[-2] = (int) 0
0x63c: Push("all")
0x63d: PushEmpty(string, int)
0x63e: Stack[-1] = Stack[-5]
0x63f: Call 0x633

0x640: Pop(1)
0x641: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(2)
0x643: Pop(0); Push((bool) Stack[-1] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: GOTO 0x649

0x646: Push((int) 1)
0x647: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x648: GOTO 0x63c

0x649: Stack[-5] = Stack[-2]
0x64a: Return(); Pop(4)

0x64b: PushEmpty(int, int, int, bool, int, int, int, bool)
0x64c: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x64d: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64e: Push("GenerateMoney: iMin > iMax")
0x64f: @ Trace(Stack[-1])
0x650: Pop(1)
0x651: Return(); Pop(8)

0x652: Stack[-4] = (int) 0
0x653: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x654: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x655: Pop(0); Push(Stack[-9] - Stack[-10]);
0x656: @ irand(Stack[-4], Stack[-1])
0x657: Pop(1)
0x658: GOTO 0x65d

0x659: Push((int) 0)
0x65a: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65c: Return(); Pop(8)

0x65d: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x65e: Push((int) 0)
0x65f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x661: Return(); Pop(8)

0x662: Push("Money")
0x663: @ GetInvItemByName(Stack[-3], Stack[-1])
0x664: Pop(1)
0x665: Push((int) 0)
0x666: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x667: Pop(1)
0x668: Return(); Pop(8)

0x669: PushEmpty(int, bool, int, int, bool, int)
0x66a: Push((int) 0)
0x66b: @ ClearSubContainer(Stack[-1])
0x66c: Pop(1)
0x66d: PushEmpty(int, int)
0x66e: Stack[-2] = (int) 0
0x66f: Push((int) 100)
0x670: PushEmpty(int)
0x671: Call 0x62a

0x672: Pop(0)
0x673: Push((int) 100)
0x674: Pop(2); Push(Stack[-2] * Stack[-1]);
0x675: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x676: Call 0x64b

0x677: Pop(2)
0x678: PushEmpty(int)
0x679: Call 0x62a

0x67a: Stack[-2] = Stack[-1]
0x67b: Pop(1)
0x67c: Push((int) 3)
0x67d: @ irand(Stack[-4], Stack[-1])
0x67e: Pop(1)
0x67f: Push((int) 0)
0x680: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x682: PushEmpty(int, string)
0x683: Stack[-1] = "bottle_water"
0x684: Call 0x731

0x685: Pop(1)
0x686: Push((int) 0)
0x687: Push((int) 1)
0x688: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: Push((int) 3)
0x68b: @ irand(Stack[-4], Stack[-1])
0x68c: Pop(1)
0x68d: Push((int) 0)
0x68e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x690: PushEmpty(int, string)
0x691: Stack[-1] = "rusk"
0x692: Call 0x731

0x693: Pop(1)
0x694: Push((int) 0)
0x695: Push((int) 1)
0x696: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x697: Pop(3)
0x698: Push((int) 7)
0x699: @ irand(Stack[-4], Stack[-1])
0x69a: Pop(1)
0x69b: Push((int) 0)
0x69c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x69e: PushEmpty(int, string)
0x69f: Stack[-1] = "bandage"
0x6a0: Call 0x731

0x6a1: Pop(1)
0x6a2: Push((int) 0)
0x6a3: Push((int) 1)
0x6a4: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6a5: Pop(3)
0x6a6: Push((int) 7)
0x6a7: @ irand(Stack[-4], Stack[-1])
0x6a8: Pop(1)
0x6a9: Push((int) 0)
0x6aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6ac: PushEmpty(int, string)
0x6ad: Stack[-1] = "tourniquet"
0x6ae: Call 0x731

0x6af: Pop(1)
0x6b0: Push((int) 0)
0x6b1: Push((int) 1)
0x6b2: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Push((int) 20)
0x6b5: @ irand(Stack[-4], Stack[-1])
0x6b6: Pop(1)
0x6b7: Push((int) 0)
0x6b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6ba: PushEmpty(int, string)
0x6bb: Stack[-1] = "packet"
0x6bc: Call 0x731

0x6bd: Pop(1)
0x6be: Push((int) 0)
0x6bf: Push((int) 1)
0x6c0: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6c1: Pop(3)
0x6c2: Push((int) 20)
0x6c3: @ irand(Stack[-4], Stack[-1])
0x6c4: Pop(1)
0x6c5: Push((int) 0)
0x6c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6c8: PushEmpty(int, string)
0x6c9: Stack[-1] = "hook"
0x6ca: Call 0x731

0x6cb: Pop(1)
0x6cc: Push((int) 0)
0x6cd: Push((int) 1)
0x6ce: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Push((int) 30)
0x6d1: @ irand(Stack[-4], Stack[-1])
0x6d2: Pop(1)
0x6d3: Push((int) 0)
0x6d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6d6: PushEmpty(int, string)
0x6d7: Stack[-1] = "watch"
0x6d8: Call 0x731

0x6d9: Pop(1)
0x6da: Push((int) 0)
0x6db: Push((int) 1)
0x6dc: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6dd: Pop(3)
0x6de: Push((int) 3)
0x6df: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e1: Push((int) 2)
0x6e2: @ irand(Stack[-4], Stack[-1])
0x6e3: Pop(1)
0x6e4: Push((int) 0)
0x6e5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e7: PushEmpty(int, string)
0x6e8: Stack[-1] = "alpha_pills"
0x6e9: Call 0x731

0x6ea: Pop(1)
0x6eb: Push((int) 0)
0x6ec: Push((int) 1)
0x6ed: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6ee: Pop(3)
0x6ef: Push((int) 4)
0x6f0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f2: Push((int) 5)
0x6f3: @ irand(Stack[-4], Stack[-1])
0x6f4: Pop(1)
0x6f5: Push((int) 0)
0x6f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f8: PushEmpty(int, string)
0x6f9: Stack[-1] = "beta_pills"
0x6fa: Call 0x731

0x6fb: Pop(1)
0x6fc: Push((int) 0)
0x6fd: Push((int) 1)
0x6fe: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Push((int) 6)
0x701: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x703: Push((int) 8)
0x704: @ irand(Stack[-4], Stack[-1])
0x705: Pop(1)
0x706: Push((int) 0)
0x707: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x709: PushEmpty(int, string)
0x70a: Stack[-1] = "gamma_pills"
0x70b: Call 0x731

0x70c: Pop(1)
0x70d: Push((int) 0)
0x70e: Push((int) 1)
0x70f: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x710: Pop(3)
0x711: Push((int) 8)
0x712: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x714: Push((int) 2)
0x715: @ irand(Stack[-4], Stack[-1])
0x716: Pop(1)
0x717: Push((int) 0)
0x718: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x719: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71a: PushEmpty(int, string)
0x71b: Stack[-1] = "revolver_ammo"
0x71c: Call 0x731

0x71d: Pop(1)
0x71e: Push((int) 0)
0x71f: Push((int) 1)
0x720: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x721: Pop(3)
0x722: Push((int) 2)
0x723: @ irand(Stack[-4], Stack[-1])
0x724: Pop(1)
0x725: Push((int) 0)
0x726: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x728: PushEmpty(int, string)
0x729: Stack[-1] = "rifle_ammo"
0x72a: Call 0x731

0x72b: Pop(1)
0x72c: Push((int) 0)
0x72d: Push((int) 1)
0x72e: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: Return(); Pop(6)

0x731: PushEmpty(int, int)
0x732: @ GetInvItemByName(Stack[-1], Stack[-3])
0x733: Pop(0)
0x734: Stack[-4] = Stack[-1]
0x735: Return(); Pop(2)

0x736: Push(GlobalVars[0])
0x737: PushEmpty(object)
0x738: Call 0x624

0x739: Stack[-2] = Stack[-1]
0x73a: Pop(1)
0x73b: GlobalVars[0] = Stack[-1]; Pop(1)
0x73c: Return(); Pop(0)

0x73d: PushEmpty(bool, float, bool, float)
0x73e: PushEmpty(bool, object)
0x73f: Stack[-1] = Stack[-7]
0x740: Call 0x5a7

0x741: Pop(1)
0x742: Pop(1); Push((bool) Stack[-1] == 0)
0x743: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x744: Stack[-6] = (bool) 0
0x745: Return(); Pop(4)

0x746: Push(GlobalVars[0])
0x747: @@ in(Stack[-3], Stack[-6])
0x748: Pop(1)
0x749: Push(Stack[-2])
0x74a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74b: Stack[-6] = (bool) 1
0x74c: Return(); Pop(4)

0x74d: PushEmpty(bool, object, string)
0x74e: Stack[-2] = Stack[-8]
0x74f: Stack[-1] = "reputation"
0x750: Call 0x51c

0x751: Pop(2)
0x752: Pop(1); Push((bool) Stack[-1] == 0)
0x753: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x754: Stack[-6] = (bool) 0
0x755: Return(); Pop(4)

0x756: Push("reputation")
0x757: @@ GetProperty(Stack[-1], Stack[-2])
0x758: Pop(1)
0x759: Push((float)0.1)
0x75a: Stack[-7] = Stack[-2] < Stack[-1]; Pop(1);
0x75b: Return(); Pop(4)

0x75c: PushEmpty(bool, bool)
0x75d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x75e: Pop(0)
0x75f: Pop(0); Push((bool) Stack[-1] == 0)
0x760: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x761: Stack[-4] = (bool) 0
0x762: Return(); Pop(2)

0x763: PushEmpty(bool, object)
0x764: Stack[-1] = Stack[-5]
0x765: Call 0x73d

0x766: Stack[-6] = Stack[-2]
0x767: Pop(2)
0x768: Return(); Pop(2)

0x769: PushEmpty()
0x76a: PushEmpty(object)
0x76b: Stack[-1] = Stack[-2]
0x76c: Push(-1, 3); TaskCall(0)
0x76d: Call 0x0

0x76e: Pop(-1, 3); TaskReturn
0x76f: Pop(1)
0x770: Return(); Pop(0)

0x771: PushEmpty()
0x772: PushEmpty(bool, object)
0x773: Stack[-1] = Stack[-3]
0x774: Call 0x73d

0x775: Stack[-4] = Stack[-2]
0x776: Pop(2)
0x777: Return(); Pop(0)

0x778: PushEmpty()
0x779: PushEmpty(object, bool)
0x77a: Stack[-2] = Stack[-3]
0x77b: Stack[-1] = (bool) 1
0x77c: Push(-2, 5); TaskCall(4)
0x77d: Call 0x267

0x77e: Pop(-2, 5); TaskReturn
0x77f: Pop(2)
0x780: @ ResetAAS()
0x781: Pop(0)
0x782: Return(); Pop(0)

0x783: PushEmpty(bool, bool)
0x784: Pop(0); Push((bool) Stack[-3] == 0)
0x785: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x786: Return(); Pop(2)

0x787: Push(GlobalVars[0])
0x788: @@ in(Stack[-2], Stack[-4])
0x789: Pop(1)
0x78a: Pop(0); Push((bool) Stack[-1] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78c: Push(GlobalVars[0])
0x78d: @@ add(Stack[-4])
0x78e: Pop(1)
0x78f: Return(); Pop(2)

0x790: PushEmpty()
0x791: PushEmpty(object)
0x792: Stack[-1] = Stack[-2]
0x793: Call 0x783

0x794: Pop(1)
0x795: PushEmpty(object, bool)
0x796: Stack[-2] = Stack[-3]
0x797: Stack[-1] = (bool) 1
0x798: Push(-2, 5); TaskCall(4)
0x799: Call 0x267

0x79a: Pop(-2, 5); TaskReturn
0x79b: Pop(2)
0x79c: @ ResetAAS()
0x79d: Pop(0)
0x79e: Return(); Pop(0)

0x79f: PushEmpty()
0x7a0: PushEmpty(object)
0x7a1: Stack[-1] = Stack[-2]
0x7a2: Push(-1, 0); TaskCall(5)
0x7a3: Call 0x46d

0x7a4: Pop(-1, 0); TaskReturn
0x7a5: Pop(1)
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty()
0x7a8: PushEmpty(object, int, float)
0x7a9: Stack[-3] = Stack[-7]
0x7aa: Stack[-2] = Stack[-6]
0x7ab: Stack[-1] = Stack[-5]
0x7ac: Call 0x5bf

0x7ad: Pop(3)
0x7ae: Return(); Pop(0)

0x7af: PushEmpty(float, float)
0x7b0: Push("health")
0x7b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b3: Push("health")
0x7b4: @ GetProperty(Stack[-1], Stack[-2])
0x7b5: Pop(1)
0x7b6: Push((int) 0)
0x7b7: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b9: @ SignalDeath(Stack[-4])
0x7ba: Pop(0)
0x7bb: Return(); Pop(2)

0x7bc: PushEmpty()
0x7bd: PushEmpty(object)
0x7be: Stack[-1] = Stack[-2]
0x7bf: Call 0x79f

0x7c0: Pop(1)
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(float, bool, float, bool)
0x7c3: PushEmpty(bool, object, string)
0x7c4: Stack[-2] = Stack[-8]
0x7c5: Stack[-1] = "reputation"
0x7c6: Call 0x51c

0x7c7: Pop(2)
0x7c8: Pop(1); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-7] = (bool) 0
0x7cb: Return(); Pop(4)

0x7cc: Push("reputation")
0x7cd: @@ GetProperty(Stack[-1], Stack[-3])
0x7ce: Pop(1)
0x7cf: Push((float)0.5)
0x7d0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-7] = (bool) 0
0x7d3: Return(); Pop(4)

0x7d4: @ CanSee(Stack[-1], Stack[-6])
0x7d5: Pop(0)
0x7d6: PushEmpty(bool)
0x7d7: Stack[-1] = (bool) 1
0x7d8: Push(Stack[-2])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7da: PushEmpty(float, object)
0x7db: Stack[-1] = Stack[-9]
0x7dc: Call 0x514

0x7dd: Pop(1)
0x7de: Push((float)160000.0)
0x7df: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Stack[-1] = (bool) 0
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e3: Push((float)-0.2)
0x7e4: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7e5: Pop(1)
0x7e6: Stack[-7] = (bool) 1
0x7e7: Return(); Pop(4)

0x7e8: Stack[-7] = (bool) 0
0x7e9: Return(); Pop(4)

