GlobalVarCount = 1
	G_VAR_0 object 

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
	attack_on
	hunt
	attack_off
	@Stop hunt
	attack_begin1
	shot
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	in
	attack
	quest_d10_01
	soldier_fight
	fire
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
	blood.xml
	fhit
	bhit
	hit_react
	2
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	add
	reputation

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
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
	Face (1 args)
	Sleep (2 args)
	KillTimer (1 args)
	SetTimer (2 args)
	SetAttackState (1 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	Trace (1 args)
	StopAnimation (0 args)
	ReportAttack (1 args)
	Speak (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	Trigger (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	ReportReputationChange (3 args)
	RemoveActor (1 args)

RunOp = 0x281
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 1
		EVENT_0 Op = 0x1e Vars = (object)
		EVENT_22 Op = 0x93 Vars = (object, int, float, float)
		EVENT_16 Op = 0x95 Vars = (object, string)
		EVENT_41 Op = 0x97 Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_41 Op = 0xb9 Vars = (object)
		EVENT_3 Op = 0xc2 Vars = (object)
		EVENT_4 Op = 0xcb Vars = (object)
		EVENT_17 Op = 0xd7 Vars = (object)
		EVENT_30 Op = 0xeb Vars = (object, object)
		EVENT_1 Op = 0xf7 Vars = (object)
		EVENT_7 Op = 0x105 Vars = (int)
	GTASK_3 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x195 Vars = (object)
		EVENT_1 Op = 0x1a3 Vars = (object)
		EVENT_17 Op = 0x213 Vars = (object)
		EVENT_30 Op = 0x22b Vars = (object, object)
	GTASK_4 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x23c Vars = (object)
		EVENT_26 Op = 0x247 Vars = (string)
		EVENT_17 Op = 0x258 Vars = (object)
		EVENT_30 Op = 0x25f Vars = (object, object)
		EVENT_6 Op = 0x261 Vars = ()
		EVENT_3 Op = 0x26a Vars = (object)
		EVENT_1 Op = 0x28a Vars = (object)

Events:
EVENT_22 Op = 0x48d Vars = (object, int, float, float)
EVENT_16 Op = 0x495 Vars = (object, string)
EVENT_41 Op = 0x4a2 Vars = (object)
EVENT_6 Op = 0x527 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty()
0x8: Call 0x45b

0x9: Pop(0)
0xa: PushEmpty(object)
0xb: Stack[-1] = Stack[-2]
0xc: Call 0xf

0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: EventDisable(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call 0x26

0x14: Pop(1)
0x15: Push((int) 50)
0x16: Push((int) 40)
0x17: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x18: Pop(2)
0x19: EventEnable(0)
0x1a: @ Hold()
0x1b: Pop(0)
0x1c: GOTO 0x1a

0x1d: Return(); Pop(0)

0x1e: PushEmpty(bool, bool)
0x1f: @ IsOverrideActive(Stack[-1])
0x20: Pop(0)
0x21: Pop(0); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x23: @ WorkWithCorpse(Stack[-3])
0x24: Pop(0)
0x25: Return(); Pop(2)

0x26: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x27: Pop(0); Push((bool) Stack[-21] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x29: PushEmpty(string)
0x2a: Stack[-1] = "fdie"
0x2b: Call 0x7d

0x2c: Pop(1)
0x2d: GOTO 0x7c

0x2e: @@ GetPosition(Stack[-10])
0x2f: Pop(0)
0x30: @ GetPosition(Stack[-9])
0x31: Pop(0)
0x32: @ GetDirection(Stack[-8])
0x33: Pop(0)
0x34: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x35: Push(CvectorIndex(Stack[-7], 0))
0x36: Push(CvectorIndex(Stack[-9], 0))
0x37: Pop(2); Push(Stack[-2] * Stack[-1]);
0x38: Push(CvectorIndex(Stack[-8], 2))
0x39: Push(CvectorIndex(Stack[-10], 2))
0x3a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c: Push((int) 0)
0x3d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-6] = "fdie"
0x40: GOTO 0x42

0x41: Stack[-6] = "bdie"
0x42: @ RemoveRTEnvelope()
0x43: Pop(0)
0x44: @ SetDeathState()
0x45: Pop(0)
0x46: @ Stop()
0x47: Pop(0)
0x48: @ StopAsync()
0x49: Pop(0)
0x4a: Stack[-5] = Stack[-21]
0x4b: Push("GetScriptProperty")
0x4c: Push((int) 2)
0x4d: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4e: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x4f: Push("Owner")
0x50: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x51: Pop(1)
0x52: Push(Stack[-4])
0x53: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x54: Push("Owner")
0x55: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x56: Pop(1)
0x57: Pop(0); Push((bool) Stack[-5] == 0)
0x58: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x59: Stack[-5] = Stack[-21]
0x5a: Push("@GetEyesHeight")
0x5b: Push((int) 1)
0x5c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5d: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x5e: @@ GetEyesHeight(Stack[-2])
0x5f: Pop(0)
0x60: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x61: Push(CvectorIndex(Stack[-1], 1))
0x62: Stack[-1] = Stack[-3]
0x63: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x64: Push("head")
0x65: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x66: Pop(1)
0x67: Stack[-3] = (bool) 1
0x68: GOTO 0x6a

0x69: Stack[-3] = (bool) 0
0x6a: Push("all")
0x6b: @ PlayAnimation(Stack[-1], Stack[-7])
0x6c: Pop(1)
0x6d: @ WaitForAnimEnd()
0x6e: Pop(0)
0x6f: Push(Stack[-3])
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: @ StopAsync()
0x72: Pop(0)
0x73: Push("head")
0x74: @ UnlookAsync(Stack[-1])
0x75: Pop(1)
0x76: Push("all")
0x77: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x78: Pop(1)
0x79: @ RemoveEnvelope()
0x7a: Pop(0)
0x7b: Stack[-5] = 0
0x7c: Return(); Pop(20)

0x7d: PushEmpty()
0x7e: @ RemoveRTEnvelope()
0x7f: Pop(0)
0x80: @ SetDeathState()
0x81: Pop(0)
0x82: @ Stop()
0x83: Pop(0)
0x84: @ StopAsync()
0x85: Pop(0)
0x86: @ StopSecondaryAnimation()
0x87: Pop(0)
0x88: Push("all")
0x89: @ PlayAnimation(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: @ WaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push("all")
0x8e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x8f: Pop(1)
0x90: @ RemoveEnvelope()
0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: Return(); Pop(0)

0x99: PushEmpty(bool, bool)
0x9a: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x9b: @ Face(Stack[-3])
0x9c: Pop(0)
0x9d: Push((float)0.5)
0x9e: @ Sleep(Stack[-1], Stack[-2])
0x9f: Pop(1)
0xa0: PushEmpty(bool)
0xa1: Stack[-1] = (bool) 1
0xa2: Pop(0); Push((bool) Stack[-2] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa4: PushEmpty(bool, object)
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call 0x37e

0xa7: Pop(1)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Stack[-1] = (bool) 0
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xae

0xad: GOTO 0x9d

0xae: @ StopAsync()
0xaf: Pop(0)
0xb0: Return(); Pop(2)

0xb1: @ StopAsync()
0xb2: Pop(0)
0xb3: Push((int) 100)
0xb4: @ KillTimer(Stack[-1])
0xb5: Pop(1)
0xb6: @ StopGroup0()
0xb7: Pop(0)
0xb8: Return(); Pop(0)

0xb9: PushEmpty()
0xba: PushEmpty()
0xbb: Call 0xb1

0xbc: Pop(0)
0xbd: PushEmpty(object)
0xbe: Stack[-1] = Stack[-2]
0xbf: Call 0x4a2

0xc0: Pop(1)
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 100)
0xc6: @ KillTimer(Stack[-1])
0xc7: Pop(1)
0xc8: @ Face(Stack[-0])
0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xcd: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xce: Push((int) 100)
0xcf: Push((float)3.0)
0xd0: @ SetTimer(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: PushEmpty(object)
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x3d9

0xd5: Pop(1)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[-3]
0xda: Call 0x37e

0xdb: Pop(1)
0xdc: Pop(1); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object)
0xdf: Stack[-1] = Stack[-2]
0xe0: Call 0x4ba

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: Call 0xb1

0xe5: Pop(0)
0xe6: PushEmpty(object)
0xe7: Stack[-1] = Stack[-2]
0xe8: Call 0x4c7

0xe9: Pop(1)
0xea: Return(); Pop(0)

0xeb: PushEmpty()
0xec: PushEmpty(bool, object, object)
0xed: Stack[-2] = Stack[-5]
0xee: Stack[-1] = Stack[-4]
0xef: Call 0x4f3

0xf0: Pop(2)
0xf1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Call 0xd7

0xf5: Pop(1)
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[-3]
0xfa: Call 0x4d7

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfd: PushEmpty()
0xfe: Call 0xb1

0xff: Pop(0)
0x100: PushEmpty(object)
0x101: Stack[-1] = Stack[-2]
0x102: Call 0x4ed

0x103: Pop(1)
0x104: Return(); Pop(0)

0x105: PushEmpty()
0x106: Push((int) 100)
0x107: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: Return(); Pop(0)

0x10a: Push((int) 100)
0x10b: @ KillTimer(Stack[-1])
0x10c: Pop(1)
0x10d: @ StopGroup0()
0x10e: Pop(0)
0x10f: Return(); Pop(0)

0x110: PushEmpty(bool, bool, bool, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x112: @ Face(Stack[-0])
0x113: Pop(0)
0x114: Push(Stack[-5])
0x115: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x116: Push("all")
0x117: Push("attack_on")
0x118: @ PlayAnimation(Stack[-2], Stack[-1])
0x119: Pop(2)
0x11a: @ WaitForAnimEnd()
0x11b: Pop(0)
0x11c: Push("all")
0x11d: Push("attack_on")
0x11e: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x11f: Pop(2)
0x120: Push((bool) 1)
0x121: @ SetAttackState(Stack[-1])
0x122: Pop(1)
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call 0x37e

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x128: @ CanSee(Stack[-1], Stack[-0])
0x129: Pop(0)
0x12a: Push(Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12c: PushEmpty()
0x12d: Call 0x1b9

0x12e: Pop(0)
0x12f: GOTO 0x17f

0x130: PushEmpty(object)
0x131: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x132: Call 0x3d9

0x133: Pop(1)
0x134: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x135: Push("all")
0x136: Push("hunt")
0x137: @ PlayAnimation(Stack[-2], Stack[-1])
0x138: Pop(2)
0x139: @ WaitForAnimEnd(Stack[-2])
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-2] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13d: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: PushEmpty()
0x140: Call 0x1b4

0x141: Pop(0)
0x142: Push("all")
0x143: Push("attack_on")
0x144: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x145: Pop(2)
0x146: GOTO 0x123

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x149: Call 0x37e

0x14a: Pop(1)
0x14b: Pop(1); Push((bool) Stack[-1] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: GOTO 0x189

0x14e: @ CanSee(Stack[-1], Stack[-0])
0x14f: Pop(0)
0x150: Push(Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x152: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x153: @ Face(Stack[-0])
0x154: Pop(0)
0x155: PushEmpty()
0x156: Call 0x1b9

0x157: Pop(0)
0x158: GOTO 0x17f

0x159: Push("all")
0x15a: Push("attack_on")
0x15b: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x15c: Pop(2)
0x15d: Push((int) 3)
0x15e: @ Sleep(Stack[-1], Stack[-3])
0x15f: Pop(1)
0x160: Pop(0); Push((bool) Stack[-2] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x162: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: PushEmpty()
0x165: Call 0x1b4

0x166: Pop(0)
0x167: Push("all")
0x168: Push("attack_on")
0x169: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x16a: Pop(2)
0x16b: GOTO 0x123

0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16e: Call 0x37e

0x16f: Pop(1)
0x170: Pop(1); Push((bool) Stack[-1] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: GOTO 0x189

0x173: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x174: @ CanSee(Stack[-1], Stack[-0])
0x175: Pop(0)
0x176: Push(Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x178: @ Face(Stack[-0])
0x179: Pop(0)
0x17a: PushEmpty()
0x17b: Call 0x1b9

0x17c: Pop(0)
0x17d: GOTO 0x17f

0x17e: GOTO 0x189

0x17f: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x180: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x181: PushEmpty()
0x182: Call 0x1b4

0x183: Pop(0)
0x184: GOTO 0x188

0x185: Push((int) 2)
0x186: @ Sleep(Stack[-1])
0x187: Pop(1)
0x188: GOTO 0x123

0x189: Push((bool) 0)
0x18a: @ SetAttackState(Stack[-1])
0x18b: Pop(1)
0x18c: @ StopAsync()
0x18d: Pop(0)
0x18e: Push("all")
0x18f: Push("attack_off")
0x190: @ PlayAnimation(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: @ WaitForAnimEnd()
0x193: Pop(0)
0x194: Return(); Pop(4)

0x195: PushEmpty()
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 0
0x198: Push( Stack[2 + Tasks[-1].StackPointer] )
0x199: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19a: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: Stack[-1] = (bool) 1
0x19d: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19e: PushEmpty(object)
0x19f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a0: Call 0x3d9

0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: PushEmpty(bool)
0x1a5: Stack[-1] = (bool) 0
0x1a6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ac: Push("@Stop hunt")
0x1ad: @ Trace(Stack[-1])
0x1ae: Pop(1)
0x1af: @ StopAnimation()
0x1b0: Pop(0)
0x1b1: @ StopGroup0()
0x1b2: Pop(0)
0x1b3: Return(); Pop(0)

0x1b4: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Stack[1 + Tasks[-1].StackPointer] = 0
0x1b6: @ Face(Stack[-0])
0x1b7: Pop(0)
0x1b8: Return(); Pop(0)

0x1b9: PushEmpty(cvector, cvector, cvector, object, int, cvector, float, object, object, cvector, cvector, cvector, object, int, cvector, float, object, object)
0x1ba: @ ReportAttack(Stack[-0])
0x1bb: Pop(0)
0x1bc: @ GetDirection(Stack[-9])
0x1bd: Pop(0)
0x1be: PushEmpty(cvector, object)
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call 0x2f3

0x1c1: Stack[-10] = Stack[-2]
0x1c2: Pop(2)
0x1c3: PushEmpty(float, cvector, cvector)
0x1c4: Stack[-2] = Stack[-12]
0x1c5: Stack[-1] = Stack[-11]
0x1c6: Call 0x420

0x1c7: Pop(2)
0x1c8: Push((float)0.96593)
0x1c9: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Return(); Pop(18)

0x1cc: Push("all")
0x1cd: Push("attack_begin1")
0x1ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: @ WaitForAnimEnd()
0x1d1: Pop(0)
0x1d2: Push("shot")
0x1d3: @ Speak(Stack[-1])
0x1d4: Pop(1)
0x1d5: @ GetDirection(Stack[-9])
0x1d6: Pop(0)
0x1d7: PushEmpty(cvector, object)
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call 0x2f3

0x1da: Stack[-10] = Stack[-2]
0x1db: Pop(2)
0x1dc: Push(CvectorIndex(Stack[-8], 1))
0x1dd: PushEmpty(float, object)
0x1de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1df: Call 0x3e4

0x1e0: Pop(1)
0x1e1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1e2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1e3: Push((float)0.2618)
0x1e4: @ RandVecCone3D(Stack[-8], Stack[-9], Stack[-1])
0x1e5: Pop(1)
0x1e6: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x1e7: Pop(0)
0x1e8: Pop(0); Push(( Stack[-6] != 0 )
0x1e9: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1ea: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1ec: PushEmpty(float, object, float, int)
0x1ed: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x1ee: Stack[-2] = (float) 1.5
0x1ef: Stack[-1] = (int) 0
0x1f0: Call 0x315

0x1f1: Stack[-7] = Stack[-4]
0x1f2: Pop(4)
0x1f3: Push((int) 2)
0x1f4: Push((float)1.5)
0x1f5: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x1f6: Pop(2)
0x1f7: GOTO 0x207

0x1f8: Push((int) -1)
0x1f9: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fb: @ GetScene(Stack[-2])
0x1fc: Pop(0)
0x1fd: Push("scripted")
0x1fe: Push(CVector(0.0, 0.0, 1.0))
0x1ff: Push("richochet.xml")
0x200: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push("Material")
0x203: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x204: Pop(1)
0x205: Stack[-1] = 0
0x206: Stack[-2] = 0
0x207: Push("all")
0x208: Push("attack_end1")
0x209: @ PlayAnimation(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: @ WaitForAnimEnd()
0x20c: Pop(0)
0x20d: Push("all")
0x20e: Push("attack_on")
0x20f: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x210: Pop(2)
0x211: Return(); Pop(18)

0x212: Stack[-6] = 0
0x213: PushEmpty()
0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[-3]
0x216: Call 0x37e

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Return(); Pop(0)

0x21b: PushEmpty(object)
0x21c: Stack[-1] = Stack[-2]
0x21d: Call 0x4ba

0x21e: Pop(1)
0x21f: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[1 + Tasks[-1].StackPointer] = 0
0x222: GOTO 0x22a

0x223: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x224: Push( Stack[2 + Tasks[-1].StackPointer] )
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: @ StopAnimation()
0x227: Pop(0)
0x228: @ StopGroup0()
0x229: Pop(0)
0x22a: Return(); Pop(0)

0x22b: PushEmpty()
0x22c: PushEmpty(bool, object, object)
0x22d: Stack[-2] = Stack[-5]
0x22e: Stack[-1] = Stack[-4]
0x22f: Call 0x4f3

0x230: Pop(2)
0x231: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x232: PushEmpty(object)
0x233: Stack[-1] = Stack[-3]
0x234: Call 0x213

0x235: Pop(1)
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: PushEmpty()
0x239: Call 0x2e6

0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(bool, bool)
0x23d: Push(GlobalVars[0])
0x23e: @@ in(Stack[-2], Stack[-4])
0x23f: Pop(1)
0x240: Pop(0); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x242: PushEmpty(object)
0x243: Stack[-1] = Stack[-4]
0x244: Call 0x237

0x245: Pop(1)
0x246: Return(); Pop(2)

0x247: PushEmpty(object, object)
0x248: Push("attack")
0x249: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x24b: PushEmpty(object)
0x24c: Call 0x302

0x24d: Stack[-2] = Stack[-1]
0x24e: Pop(1)
0x24f: PushEmpty()
0x250: Call 0x2e6

0x251: Pop(0)
0x252: PushEmpty(object)
0x253: Stack[-1] = Stack[-2]
0x254: Call 0x4c7

0x255: Pop(1)
0x256: Stack[-1] = 0
0x257: Return(); Pop(2)

0x258: PushEmpty()
0x259: PushEmpty(bool, string, string)
0x25a: Stack[-2] = "quest_d10_01"
0x25b: Stack[-1] = "soldier_fight"
0x25c: Call 0x431

0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: PushEmpty()
0x260: Return(); Pop(0)

0x261: PushEmpty()
0x262: Call 0x2e6

0x263: Pop(0)
0x264: PushEmpty()
0x265: Push(-0, 0); TaskCall(0)
0x266: Call 0x0

0x267: Pop(-0, 0); TaskReturn
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: PushEmpty(bool, bool)
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[-5]
0x26d: Call 0x37e

0x26e: Pop(1)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: Return(); Pop(2)

0x272: Push(GlobalVars[0])
0x273: @@ in(Stack[-2], Stack[-4])
0x274: Pop(1)
0x275: Push(Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x277: PushEmpty()
0x278: Call 0x2e6

0x279: Pop(0)
0x27a: PushEmpty(object)
0x27b: Stack[-1] = Stack[-4]
0x27c: Push(-1, 1); TaskCall(2)
0x27d: Call 0x99

0x27e: Pop(-1, 1); TaskReturn
0x27f: Pop(1)
0x280: Return(); Pop(2)

0x281: PushEmpty()
0x282: Call 0x4a8

0x283: Pop(0)
0x284: PushEmpty()
0x285: Call 0x298

0x286: Pop(0)
0x287: GOTO 0x284

0x288: Return(); Pop(0)

0x289: Return(); Pop(0)

0x28a: PushEmpty()
0x28b: PushEmpty(bool, object)
0x28c: Stack[-1] = Stack[-3]
0x28d: Call 0x4d7

0x28e: Pop(1)
0x28f: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x290: PushEmpty()
0x291: Call 0x2e6

0x292: Pop(0)
0x293: PushEmpty(object)
0x294: Stack[-1] = Stack[-2]
0x295: Call 0x51b

0x296: Pop(1)
0x297: Return(); Pop(0)

0x298: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x299: @ GetPFPosition(Stack[-1])
0x29a: Pop(0)
0x29b: @ GetDirection(Stack[-0])
0x29c: Pop(0)
0x29d: Push((int) 60)
0x29e: @ irand(Stack[-5], Stack[-1])
0x29f: Pop(1)
0x2a0: Push((int) 30)
0x2a1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2a2: @ Sleep(Stack[-1], Stack[-4])
0x2a3: Pop(1)
0x2a4: Push(Stack[-3])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a6: PushEmpty()
0x2a7: Call 0x289

0x2a8: Pop(0)
0x2a9: GOTO 0x2e4

0x2aa: @ GetPFPosition(Stack[-2])
0x2ab: Pop(0)
0x2ac: PushEmpty(float, cvector, cvector)
0x2ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ae: Stack[-1] = Stack[-5]
0x2af: Call 0x3f1

0x2b0: Pop(2)
0x2b1: Push((int) 40000)
0x2b2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2b4: @ FindPathTo(Stack[-1], Stack[-1])
0x2b5: Pop(0)
0x2b6: Pop(0); Push(( Stack[-1] != 0 )
0x2b7: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2b8: @ RotatePath(Stack[-1], Stack[-3])
0x2b9: Pop(0)
0x2ba: Pop(0); Push((bool) Stack[-3] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: GOTO 0x2e3

0x2bd: Push((bool) 0)
0x2be: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x2bf: Pop(1)
0x2c0: Pop(0); Push((bool) Stack[-3] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2e3

0x2c3: Push(CvectorIndex(Stack[-0], 0))
0x2c4: Push(CvectorIndex(Stack[-0], 2))
0x2c5: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x2c6: Pop(2)
0x2c7: Pop(0); Push((bool) Stack[-3] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2e3

0x2ca: @ WaitForAnimEnd(Stack[-3])
0x2cb: Pop(0)
0x2cc: Pop(0); Push((bool) Stack[-3] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2e3

0x2cf: GOTO 0x2e4

0x2d0: GOTO 0x2d4

0x2d1: Push((int) 1)
0x2d2: @ Sleep(Stack[-1])
0x2d3: Pop(1)
0x2d4: Stack[-1] = 0
0x2d5: GOTO 0x2e3

0x2d6: Push(CvectorIndex(Stack[-0], 0))
0x2d7: Push(CvectorIndex(Stack[-0], 2))
0x2d8: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x2d9: Pop(2)
0x2da: Pop(0); Push((bool) Stack[-3] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: GOTO 0x2e3

0x2dd: @ WaitForAnimEnd(Stack[-3])
0x2de: Pop(0)
0x2df: Pop(0); Push((bool) Stack[-3] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2e3

0x2e2: GOTO 0x2e4

0x2e3: GOTO 0x2aa

0x2e4: GOTO 0x29d

0x2e5: Return(); Pop(8)

0x2e6: @ StopGroup0()
0x2e7: Pop(0)
0x2e8: @ Stop()
0x2e9: Pop(0)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty()
0x2ec: Push((int) 1)
0x2ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: Stack[-2] = "fire"
0x2f0: Return(); Pop(0)

0x2f1: Stack[-2] = "phys"
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(cvector, cvector, cvector, cvector)
0x2f4: @ GetPosition(Stack[-2])
0x2f5: Pop(0)
0x2f6: @@ GetPosition(Stack[-1])
0x2f7: Pop(0)
0x2f8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x2f9: Return(); Pop(4)

0x2fa: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2fb: @ GetPosition(Stack[-3])
0x2fc: Pop(0)
0x2fd: @@ GetPosition(Stack[-2])
0x2fe: Pop(0)
0x2ff: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x300: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x301: Return(); Pop(6)

0x302: PushEmpty(object, object)
0x303: Push("player")
0x304: @ FindActor(Stack[-2], Stack[-1])
0x305: Pop(1)
0x306: Stack[-3] = Stack[-1]
0x307: Return(); Pop(2)

0x308: Stack[-1] = 0
0x309: PushEmpty(bool, bool)
0x30a: Push("HasProperty")
0x30b: Push((int) 2)
0x30c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-5] = (bool) 0
0x310: Return(); Pop(2)

0x311: @@ HasProperty(Stack[-3], Stack[-1])
0x312: Pop(0)
0x313: Stack[-5] = Stack[-1]
0x314: Return(); Pop(2)

0x315: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x316: PushEmpty(bool, object, string)
0x317: Stack[-2] = Stack[-18]
0x318: Stack[-1] = "health"
0x319: Call 0x309

0x31a: Pop(2)
0x31b: Pop(1); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-16] = (float) 0.0
0x31e: Return(); Pop(12)

0x31f: PushEmpty(bool, object, string)
0x320: Stack[-2] = Stack[-18]
0x321: Stack[-1] = "armor"
0x322: Call 0x309

0x323: Pop(2)
0x324: Pop(1); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Stack[-6] = (int) 0
0x327: GOTO 0x32b

0x328: Push("armor")
0x329: @@ GetProperty(Stack[-1], Stack[-7])
0x32a: Pop(1)
0x32b: Push("armor_")
0x32c: PushEmpty(string, int)
0x32d: Stack[-1] = Stack[-16]
0x32e: Call 0x2eb

0x32f: Pop(1)
0x330: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x331: PushEmpty(bool, object, string)
0x332: Stack[-2] = Stack[-18]
0x333: Stack[-1] = Stack[-8]
0x334: Call 0x309

0x335: Pop(2)
0x336: Pop(1); Push((bool) Stack[-1] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-4] = (int) 0
0x339: GOTO 0x33c

0x33a: @@ GetProperty(Stack[-5], Stack[-4])
0x33b: Pop(0)
0x33c: PushEmpty(float, float, float)
0x33d: Pop(0); Push(Stack[-9] + Stack[-7]);
0x33e: Push((float)100.0)
0x33f: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x340: Stack[-1] = (int) 1
0x341: Call 0x3f5

0x342: Stack[-6] = Stack[-3]
0x343: Pop(3)
0x344: Push("health")
0x345: @@ GetProperty(Stack[-1], Stack[-3])
0x346: Pop(1)
0x347: Push((int) 1)
0x348: Pop(1); Push(Stack[-1] - Stack[-4]);
0x349: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x34a: Push("health")
0x34b: PushEmpty(float, float, float, float)
0x34c: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x34d: Stack[-2] = (int) 0
0x34e: Stack[-1] = (int) 1
0x34f: Call 0x3fc

0x350: Pop(3)
0x351: @@ SetProperty(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Stack[-16] = Stack[-1]
0x354: Return(); Pop(12)

0x355: PushEmpty(bool, bool)
0x356: @@ IsDead(Stack[-1])
0x357: Pop(0)
0x358: Stack[-4] = Stack[-1]
0x359: Return(); Pop(2)

0x35a: PushEmpty(object, object, object, object)
0x35b: Pop(0); Push((bool) Stack[-5] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-6] = (bool) 0
0x35e: Return(); Pop(4)

0x35f: PushEmpty(bool)
0x360: Stack[-1] = (bool) 0
0x361: Push("IsDead")
0x362: Push((int) 1)
0x363: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x364: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[-8]
0x367: Call 0x355

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Stack[-1] = (bool) 1
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-6] = (bool) 0
0x36d: Return(); Pop(4)

0x36e: @ GetScene(Stack[-2])
0x36f: Pop(0)
0x370: Pop(0); Push((bool) Stack[-2] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-6] = (bool) 0
0x373: Return(); Pop(4)

0x374: @@ GetScene(Stack[-1])
0x375: Pop(0)
0x376: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x378: Stack[-6] = (bool) 0
0x379: Return(); Pop(4)

0x37a: Stack[-6] = (bool) 1
0x37b: Return(); Pop(4)

0x37c: Stack[-1] = 0
0x37d: Stack[-2] = 0
0x37e: PushEmpty(int, int)
0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[-5]
0x381: Call 0x35a

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-4] = (bool) 0
0x386: Return(); Pop(2)

0x387: PushEmpty(bool, object, string)
0x388: Stack[-2] = Stack[-6]
0x389: Stack[-1] = "noaccess"
0x38a: Call 0x309

0x38b: Pop(2)
0x38c: Pop(1); Push((bool) Stack[-1] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-4] = (bool) 1
0x38f: Return(); Pop(2)

0x390: Push("noaccess")
0x391: @@ GetProperty(Stack[-1], Stack[-2])
0x392: Pop(1)
0x393: Push((int) 0)
0x394: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x395: Return(); Pop(2)

0x396: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x397: PushEmpty(bool)
0x398: Stack[-1] = (bool) 0
0x399: Push((int) 4)
0x39a: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39c: Push((int) 5)
0x39d: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[-1] = (bool) 1
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a1: @ GetScene(Stack[-10])
0x3a2: Pop(0)
0x3a3: @ GetPosition(Stack[-8])
0x3a4: Pop(0)
0x3a5: @ GetEyesHeight(Stack[-7])
0x3a6: Pop(0)
0x3a7: Push(CvectorIndex(Stack[-8], 1))
0x3a8: Push((int) 2)
0x3a9: Pop(1); Push(Stack[-9] / Stack[-1]);
0x3aa: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3ab: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ac: Push("scripted")
0x3ad: Push(CVector(0.0, 0.0, 1.0))
0x3ae: Push("blood.xml")
0x3af: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Stack[-9] = 0
0x3b2: Stack[-10] = 0
0x3b3: Pop(0); Push((bool) Stack[-23] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: Return(); Pop(20)

0x3b6: @ GetSecondaryAnimationType(Stack[-6])
0x3b7: Pop(0)
0x3b8: Push((int) 0)
0x3b9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Return(); Pop(20)

0x3bc: @@ GetPosition(Stack[-5])
0x3bd: Pop(0)
0x3be: @ GetPosition(Stack[-4])
0x3bf: Pop(0)
0x3c0: @ GetDirection(Stack[-3])
0x3c1: Pop(0)
0x3c2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x3c3: Push(CvectorIndex(Stack[-2], 0))
0x3c4: Push(CvectorIndex(Stack[-4], 0))
0x3c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c6: Push(CvectorIndex(Stack[-3], 2))
0x3c7: Push(CvectorIndex(Stack[-5], 2))
0x3c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ca: Push((int) 0)
0x3cb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-1] = "fhit"
0x3ce: GOTO 0x3d0

0x3cf: Stack[-1] = "bhit"
0x3d0: Push("hit_react")
0x3d1: Push("1")
0x3d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d3: Push("2")
0x3d4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3d5: Push((int) -10)
0x3d6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(4)
0x3d8: Return(); Pop(20)

0x3d9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3da: @@ GetPosition(Stack[-3])
0x3db: Pop(0)
0x3dc: @ GetPosition(Stack[-2])
0x3dd: Pop(0)
0x3de: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x3df: Push(CvectorIndex(Stack[-1], 0))
0x3e0: Push(CvectorIndex(Stack[-2], 2))
0x3e1: @ RotateAsync(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: Return(); Pop(6)

0x3e4: PushEmpty(float, float, float, float)
0x3e5: @ GetEyesHeight(Stack[-2])
0x3e6: Pop(0)
0x3e7: @@ GetEyesHeight(Stack[-1])
0x3e8: Pop(0)
0x3e9: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3ea: Return(); Pop(4)

0x3eb: PushEmpty(object, object)
0x3ec: @ self(Stack[-1])
0x3ed: Pop(0)
0x3ee: Stack[-3] = Stack[-1]
0x3ef: Return(); Pop(2)

0x3f0: Stack[-1] = 0
0x3f1: PushEmpty(cvector, cvector)
0x3f2: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x3f3: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty()
0x3f6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-3] = Stack[-2]
0x3f9: GOTO 0x3fb

0x3fa: Stack[-3] = Stack[-1]
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty()
0x3fd: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-4] = Stack[-2]
0x400: Return(); Pop(0)

0x401: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-4] = Stack[-1]
0x404: Return(); Pop(0)

0x405: Stack[-4] = Stack[-3]
0x406: Return(); Pop(0)

0x407: PushEmpty(object, object)
0x408: @ CreateObjectSet(Stack[-1])
0x409: Pop(0)
0x40a: Stack[-3] = Stack[-1]
0x40b: Return(); Pop(2)

0x40c: Stack[-1] = 0
0x40d: PushEmpty()
0x40e: Push(CvectorIndex(Stack[-2], 0))
0x40f: Push(CvectorIndex(Stack[-2], 0))
0x410: Pop(2); Push(Stack[-2] * Stack[-1]);
0x411: Push(CvectorIndex(Stack[-3], 2))
0x412: Push(CvectorIndex(Stack[-3], 2))
0x413: Pop(2); Push(Stack[-2] * Stack[-1]);
0x414: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x415: Return(); Pop(0)

0x416: PushEmpty()
0x417: Push(CvectorIndex(Stack[-1], 0))
0x418: Push(CvectorIndex(Stack[-2], 0))
0x419: Pop(2); Push(Stack[-2] * Stack[-1]);
0x41a: Push(CvectorIndex(Stack[-2], 2))
0x41b: Push(CvectorIndex(Stack[-3], 2))
0x41c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x41d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41e: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x41f: Return(); Pop(0)

0x420: PushEmpty()
0x421: PushEmpty(float, cvector, cvector)
0x422: Stack[-2] = Stack[-5]
0x423: Stack[-1] = Stack[-4]
0x424: Call 0x40d

0x425: Pop(2)
0x426: PushEmpty(float, cvector)
0x427: Stack[-1] = Stack[-5]
0x428: Call 0x416

0x429: Pop(1)
0x42a: PushEmpty(float, cvector)
0x42b: Stack[-1] = Stack[-5]
0x42c: Call 0x416

0x42d: Pop(1)
0x42e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
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
0x43d: PushEmpty(int, int, int, bool, int, int, int, bool)
0x43e: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x43f: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x440: Push("GenerateMoney: iMin > iMax")
0x441: @ Trace(Stack[-1])
0x442: Pop(1)
0x443: Return(); Pop(8)

0x444: Stack[-4] = (int) 0
0x445: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x446: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x447: Pop(0); Push(Stack[-9] - Stack[-10]);
0x448: @ irand(Stack[-4], Stack[-1])
0x449: Pop(1)
0x44a: GOTO 0x44f

0x44b: Push((int) 0)
0x44c: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: Return(); Pop(8)

0x44f: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x450: Push((int) 0)
0x451: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Return(); Pop(8)

0x454: Push("Money")
0x455: @ GetInvItemByName(Stack[-3], Stack[-1])
0x456: Pop(1)
0x457: Push((int) 0)
0x458: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x459: Pop(1)
0x45a: Return(); Pop(8)

0x45b: PushEmpty(int, bool, int, bool)
0x45c: Push((int) 0)
0x45d: @ ClearSubContainer(Stack[-1])
0x45e: Pop(1)
0x45f: PushEmpty(int, int)
0x460: Stack[-2] = (int) 500
0x461: Stack[-1] = (int) 1000
0x462: Call 0x43d

0x463: Pop(2)
0x464: Push((int) 4)
0x465: @ irand(Stack[-3], Stack[-1])
0x466: Pop(1)
0x467: Push((int) 0)
0x468: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46a: PushEmpty(int, string)
0x46b: Stack[-1] = "rifle_ammo"
0x46c: Call 0x480

0x46d: Pop(1)
0x46e: Push((int) 0)
0x46f: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x470: Pop(2)
0x471: Push((int) 3)
0x472: @ irand(Stack[-3], Stack[-1])
0x473: Pop(1)
0x474: Push((int) 0)
0x475: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x477: PushEmpty(int, string)
0x478: Stack[-1] = "rusk"
0x479: Call 0x480

0x47a: Pop(1)
0x47b: Push((int) 0)
0x47c: Push((int) 1)
0x47d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x47e: Pop(3)
0x47f: Return(); Pop(4)

0x480: PushEmpty(int, int)
0x481: @ GetInvItemByName(Stack[-1], Stack[-3])
0x482: Pop(0)
0x483: Stack[-4] = Stack[-1]
0x484: Return(); Pop(2)

0x485: PushEmpty()
0x486: PushEmpty(object)
0x487: Stack[-1] = Stack[-2]
0x488: Push(-1, 0); TaskCall(1)
0x489: Call 0x6

0x48a: Pop(-1, 0); TaskReturn
0x48b: Pop(1)
0x48c: Return(); Pop(0)

0x48d: PushEmpty()
0x48e: PushEmpty(object, int, float)
0x48f: Stack[-3] = Stack[-7]
0x490: Stack[-2] = Stack[-6]
0x491: Stack[-1] = Stack[-5]
0x492: Call 0x396

0x493: Pop(3)
0x494: Return(); Pop(0)

0x495: PushEmpty(float, float)
0x496: Push("health")
0x497: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x499: Push("health")
0x49a: @ GetProperty(Stack[-1], Stack[-2])
0x49b: Pop(1)
0x49c: Push((int) 0)
0x49d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: @ SignalDeath(Stack[-4])
0x4a0: Pop(0)
0x4a1: Return(); Pop(2)

0x4a2: PushEmpty()
0x4a3: PushEmpty(object)
0x4a4: Stack[-1] = Stack[-2]
0x4a5: Call 0x52f

0x4a6: Pop(1)
0x4a7: Return(); Pop(0)

0x4a8: Push(GlobalVars[0])
0x4a9: PushEmpty(object)
0x4aa: Call 0x407

0x4ab: Stack[-2] = Stack[-1]
0x4ac: Pop(1)
0x4ad: GlobalVars[0] = Stack[-1]; Pop(1)
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(object, bool)
0x4b1: Stack[-2] = Stack[-4]
0x4b2: Stack[-1] = Stack[-3]
0x4b3: Push(-2, 3); TaskCall(3)
0x4b4: Call 0x110

0x4b5: Pop(-2, 3); TaskReturn
0x4b6: Pop(2)
0x4b7: @ ResetAAS()
0x4b8: Pop(0)
0x4b9: Return(); Pop(0)

0x4ba: PushEmpty(bool, bool)
0x4bb: Pop(0); Push((bool) Stack[-3] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: Return(); Pop(2)

0x4be: Push(GlobalVars[0])
0x4bf: @@ in(Stack[-2], Stack[-4])
0x4c0: Pop(1)
0x4c1: Pop(0); Push((bool) Stack[-1] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c3: Push(GlobalVars[0])
0x4c4: @@ add(Stack[-4])
0x4c5: Pop(1)
0x4c6: Return(); Pop(2)

0x4c7: PushEmpty()
0x4c8: PushEmpty(object)
0x4c9: Stack[-1] = Stack[-2]
0x4ca: Call 0x4ba

0x4cb: Pop(1)
0x4cc: PushEmpty(object, bool)
0x4cd: Stack[-2] = Stack[-3]
0x4ce: Stack[-1] = (bool) 1
0x4cf: Call 0x4af

0x4d0: Pop(2)
0x4d1: Return(); Pop(0)

0x4d2: PushEmpty(bool, bool)
0x4d3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4d4: Pop(0)
0x4d5: Stack[-4] = Stack[-1]
0x4d6: Return(); Pop(2)

0x4d7: PushEmpty(bool, bool)
0x4d8: PushEmpty(bool, object)
0x4d9: Stack[-1] = Stack[-5]
0x4da: Call 0x37e

0x4db: Pop(1)
0x4dc: Pop(1); Push((bool) Stack[-1] == 0)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4de: Stack[-4] = (bool) 0
0x4df: Return(); Pop(2)

0x4e0: Push(GlobalVars[0])
0x4e1: @@ in(Stack[-2], Stack[-4])
0x4e2: Pop(1)
0x4e3: Push(Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-4] = (bool) 1
0x4e6: Return(); Pop(2)

0x4e7: PushEmpty(bool, object)
0x4e8: Stack[-1] = Stack[-5]
0x4e9: Call 0x4d2

0x4ea: Stack[-6] = Stack[-2]
0x4eb: Pop(2)
0x4ec: Return(); Pop(2)

0x4ed: PushEmpty()
0x4ee: PushEmpty(object)
0x4ef: Stack[-1] = Stack[-2]
0x4f0: Call 0x51b

0x4f1: Pop(1)
0x4f2: Return(); Pop(0)

0x4f3: PushEmpty(float, bool, float, bool)
0x4f4: PushEmpty(bool, object, string)
0x4f5: Stack[-2] = Stack[-8]
0x4f6: Stack[-1] = "reputation"
0x4f7: Call 0x309

0x4f8: Pop(2)
0x4f9: Pop(1); Push((bool) Stack[-1] == 0)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fb: Stack[-7] = (bool) 0
0x4fc: Return(); Pop(4)

0x4fd: Push("reputation")
0x4fe: @@ GetProperty(Stack[-1], Stack[-3])
0x4ff: Pop(1)
0x500: Push((float)0.5)
0x501: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-7] = (bool) 0
0x504: Return(); Pop(4)

0x505: @ CanSee(Stack[-1], Stack[-6])
0x506: Pop(0)
0x507: PushEmpty(bool)
0x508: Stack[-1] = (bool) 1
0x509: Push(Stack[-2])
0x50a: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50b: PushEmpty(float, object)
0x50c: Stack[-1] = Stack[-9]
0x50d: Call 0x2fa

0x50e: Pop(1)
0x50f: Push((float)160000.0)
0x510: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x512: Stack[-1] = (bool) 0
0x513: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x514: Push((float)-0.2)
0x515: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x516: Pop(1)
0x517: Stack[-7] = (bool) 1
0x518: Return(); Pop(4)

0x519: Stack[-7] = (bool) 0
0x51a: Return(); Pop(4)

0x51b: PushEmpty(bool, bool)
0x51c: Push(GlobalVars[0])
0x51d: @@ in(Stack[-2], Stack[-4])
0x51e: Pop(1)
0x51f: Push(Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x521: PushEmpty(object, bool)
0x522: Stack[-2] = Stack[-5]
0x523: Stack[-1] = (bool) 1
0x524: Call 0x4af

0x525: Pop(2)
0x526: Return(); Pop(2)

0x527: PushEmpty(object)
0x528: Call 0x3eb

0x529: Pop(0)
0x52a: @ RemoveActor(Stack[-1])
0x52b: Pop(1)
0x52c: @ Hold()
0x52d: Pop(0)
0x52e: Return(); Pop(0)

0x52f: PushEmpty()
0x530: PushEmpty(object)
0x531: Stack[-1] = Stack[-2]
0x532: Call 0x485

0x533: Pop(1)
0x534: Return(); Pop(0)

